// SPDX-License-Identifier: GPL-2.0-or-later
//
// ss20_machine: the SPARCstation 20, everything below the MiSTer glue
// (VERILOG-PLAN.md §2). The MiSTer top (SunSparcStation.sv) and the
// simulation's sim/sim_top.sv both wrap this module, so whatever the board
// runs is what the simulation runs.
//
// Phase 4 (in progress): one CPU module (MID 8) on ss20_memctl (main
// memory and the boot PROM in DDR3, ss20_loader filling it from hps_io),
// ss20_iobridge to the system devices of rtl/obio (both ESCCs, the M48T08,
// the counter/timers, the interrupt controller, the system registers), and
// ttya on the MiSTer's serial line through ss20_uart. Not yet: nvram_sd,
// the SBus devices (TCX, DMA2/ESP, LANCE), the keyboard and mouse, sound,
// the MSI/EMC registers; the screen still shows phase 0's test pattern.

// Clocks: clk is the machine (55 MHz on the board), clk_vid the pixel clock
// (65 MHz). They are unrelated; the simulation drives both from one clock.
//
// The DDR3 port is the single Avalon master the framework provides; the
// machine's own masters (memory controller, video scan-out, the Ethernet
// mailbox) will share it through rtl/mister/ddram_arb.sv inside this module.
// Addresses are 64-bit word addresses of the ARM's physical map (ARM
// physical / 8): the machine's memory is the FPGA window from 0x2000_0000
// (word 0x0400_0000, ss20_memctl.sv); the Ethernet mailbox is at
// 0x1FF0_0000 (word 0x03FE_0000).
//
// The hps_io side follows Main's support/sun (plan §1.2): ioctl index 0 is
// the boot PROM, index 64 the ID PROM seed; SD slots 0/1 the disks, 2 the
// CD, 3 the 8 KB NVRAM image; sd_blk_cnt is blocks - 1, up to 32 blocks.

module ss20_machine #(
  parameter int CLK_HZ     = 55_000_000,
  parameter bit SKIP_CLEAR = 1'b0        // simulation: its DDR model starts zeroed
)(
  input  logic         clk,
  input  logic         rst,            // synchronous to clk
  input  logic         clk_vid,

  // options, from ss20_osd
  input  logic         opt_autoboot_i,
  input  logic         opt_serial_i,
  input  logic         opt_cg3_i,
  input  logic [7:0]   opt_kbd_layout_i,
  input  logic         opt_l2tlb_i,
  input  logic [9:0]   opt_ram_mb_i,
  input  logic         opt_eth_i,

  // DDR3 (Avalon-MM master, clocked by clk)
  input  logic         ddr_busy_i,
  output logic [7:0]   ddr_burstcnt_o,
  output logic [28:0]  ddr_addr_o,
  output logic         ddr_rd_o,
  output logic         ddr_we_o,
  output logic [63:0]  ddr_din_o,
  output logic [7:0]   ddr_be_o,
  input  logic [63:0]  ddr_dout_i,
  input  logic         ddr_dout_ready_i,

  // hps_io: downloads (WIDE: 16-bit words, ioctl_addr counts bytes)
  input  logic         ioctl_download_i,
  input  logic [7:0]   ioctl_index_i,
  input  logic         ioctl_wr_i,
  input  logic [26:0]  ioctl_addr_i,
  input  logic [15:0]  ioctl_dout_i,
  output logic         ioctl_wait_o,

  // hps_io: SD block access, VDNUM = 4, 512-byte blocks, WIDE
  input  logic [3:0]   img_mounted_i,
  input  logic         img_readonly_i,
  input  logic [63:0]  img_size_i,
  output logic [31:0]  sd_lba_o [4],
  output logic [5:0]   sd_blk_cnt_o [4],
  output logic [3:0]   sd_rd_o,
  output logic [3:0]   sd_wr_o,
  input  logic [3:0]   sd_ack_i,
  input  logic [12:0]  sd_buff_addr_i,
  input  logic [15:0]  sd_buff_dout_i,
  output logic [15:0]  sd_buff_din_o [4],
  input  logic         sd_buff_wr_i,

  // hps_io: the RTC (BCD, MSM6242B layout; bit 64 toggles on each update)
  input  logic [64:0]  rtc_i,

  // ttya, to the HPS UART
  output logic         uart_txd_o,
  input  logic         uart_rxd_i,
  output logic         uart_rts_o,
  input  logic         uart_cts_i,
  output logic         uart_dtr_o,
  input  logic         uart_dsr_i,

  // keyboard and mouse, hps_io's event interface
  input  logic [10:0]  ps2_key_i,      // [7:0] code, [8] extended, [9] pressed, [10] toggles
  input  logic [24:0]  ps2_mouse_i,    // PS/2 packet bytes 0-2, [24] toggles
  output logic [2:0]   kbd_led_status_o,
  output logic [2:0]   kbd_led_use_o,

  // video, in the clk_vid domain
  output logic         vid_ce_o,
  output logic [7:0]   vid_r_o,
  output logic [7:0]   vid_g_o,
  output logic [7:0]   vid_b_o,
  output logic         vid_hs_o,
  output logic         vid_vs_o,
  output logic         vid_de_o,

  // audio, signed, in the clk domain
  output logic [15:0]  audio_l_o,
  output logic [15:0]  audio_r_o,

  output logic         led_disk_o,
  output logic         led_user_o
);

  import mem_pkg::*;
  import iobus_pkg::*;
  import sun4m_pkg::*;

  // ------------------------------------------------------------ loader --
  // The PROM download and the memory clear; the machine runs once a PROM
  // is in and the clear is done.
  logic        run, ld_active;
  logic [1:0]  ld_state;
  logic        ld_we;
  logic [7:0]  ld_bc, ld_be;
  logic [28:0] ld_addr;
  logic [63:0] ld_din;

  ss20_loader #(.SKIP_CLEAR(SKIP_CLEAR)) u_loader (
    .clk, .rst, .ram_mb_i(opt_ram_mb_i),
    .ioctl_download_i, .ioctl_index_i, .ioctl_wr_i, .ioctl_addr_i, .ioctl_dout_i, .ioctl_wait_o,
    .run_o(run), .active_o(ld_active), .state_o(ld_state),
    .ddr_wait_i(ddr_busy_i), .ddr_burstcnt_o(ld_bc), .ddr_addr_o(ld_addr), .ddr_we_o(ld_we),
    .ddr_din_o(ld_din), .ddr_be_o(ld_be));

  // The machine's reset: the loader's, and a software reset (the system
  // control register) for a few cycles, which keeps memory
  logic       sw_reset;
  logic       nv_ready;                  // (nvram_sd, below)
  logic [3:0] swr_cnt;
  logic       rst_m, rst_swr;
  always_ff @(posedge clk) begin
    if (rst || !run) swr_cnt <= '0;
    else if (sw_reset) swr_cnt <= 4'd15;
    else if (swr_cnt != 4'd0) swr_cnt <= swr_cnt - 4'd1;
  end
  assign rst_swr = swr_cnt != 4'd0;
  assign rst_m   = rst || !run || rst_swr || !nv_ready;   // the NVRAM image loads first

  /* verilator lint_off PINCONNECTEMPTY */  // (the blocks' unused outputs, left open)

  // ------------------------------------------------------------ the CPU --
  mem_req_t    cpu_req;
  mem_rsp_t    cpu_rsp;
  snoop_t      snoop;
  logic        snoop_hold, wd_reset;
  logic [3:0]  irl;
  logic        cpu_halt, cpu_commit, cpu_trap;
  logic [7:0]  cpu_tt;
  logic [31:0] cpu_pc;

  cpu_module #(.HAS_FPU(1'b1), .SS20(1'b1), .NCPU_M1(2'd0)) u_cpu (
    .clk, .rst(rst_m), .mid_i(4'd8), .irl_i(irl), .cache_en_i(1'b1), .ram_mb_i({2'b00, opt_ram_mb_i}),
    .mem_req_o(cpu_req), .mem_rsp_i(cpu_rsp), .snoop_i(snoop), .snoop_hold_o(snoop_hold),
    .wd_reset_o(wd_reset), .si_reset_o(), .halt_o(cpu_halt),
    .dbg_commit_o(cpu_commit), .dbg_trap_o(cpu_trap), .dbg_tt_o(cpu_tt), .dbg_pc_o(cpu_pc), .dbg_psr_o(), .dbg_w_o());

  // ---------------------------------------------------- memory and I/O --
  mem_req_t    io_req;
  mem_rsp_t    io_rsp;
  logic        mc_rd, mc_we;
  logic [2:0]  mc_state;
  logic [7:0]  mc_bc, mc_be;
  logic [28:0] mc_addr;
  logic [63:0] mc_din;

  ss20_memctl u_mem (
    .clk, .rst(rst_m), .ram_mb_i(opt_ram_mb_i), .mid_i(4'd8),
    .req_i(cpu_req), .rsp_o(cpu_rsp), .snoop_o(snoop), .snoop_hold_i(snoop_hold),
    .io_req_o(io_req), .io_rsp_i(io_rsp),
    .ddr_wait_i(ddr_busy_i), .ddr_burstcnt_o(mc_bc), .ddr_addr_o(mc_addr), .ddr_rd_o(mc_rd),
    .ddr_we_o(mc_we), .ddr_din_o(mc_din), .ddr_be_o(mc_be),
    .ddr_dout_i, .ddr_dout_ready_i, .state_o(mc_state));

  // DDR3: the loader while it works (the machine is in reset then), else
  // the memory controller. The other masters (video scan-out, the
  // Ethernet mailbox) come with their phases, through ddram_arb.
  always_comb begin
    if (ld_active) begin
      ddr_burstcnt_o = ld_bc; ddr_addr_o = ld_addr; ddr_rd_o = 1'b0; ddr_we_o = ld_we;
      ddr_din_o = ld_din; ddr_be_o = ld_be;
    end else begin
      ddr_burstcnt_o = mc_bc; ddr_addr_o = mc_addr; ddr_rd_o = mc_rd; ddr_we_o = mc_we;
      ddr_din_o = mc_din; ddr_be_o = mc_be;
    end
  end

  iob_req_t    iob_q [8];
  iob_rsp_t    iob_r [8];
  ss20_iobridge u_io (.clk, .rst(rst_m), .req_i(io_req), .rsp_o(io_rsp), .io_o(iob_q), .io_i(iob_r));

  // ------------------------------------------------- the system devices --
  // 0: keyboard/mouse ESCC (phase 6 connects its byte streams)
  logic irq_kbd, irq_ser;
  escc #(.CLK_HZ(CLK_HZ)) u_escc_kbd (
    .clk, .rst(rst_m), .bus_i(iob_q[0]), .bus_o(iob_r[0]),
    .txd_a_o(), .rxd_a_i(1'b1), .dcd_a_i(1'b1), .cts_a_i(1'b1), .rts_a_o(), .dtr_a_o(),
    .txd_b_o(), .rxd_b_i(1'b1), .dcd_b_i(1'b1), .cts_b_i(1'b1), .rts_b_o(), .dtr_b_o(),
    .tx_byte_a_o(), .tx_byte_valid_a_o(), .rx_byte_a_i(8'd0), .rx_byte_valid_a_i(1'b0), .rx_byte_ready_a_o(),
    .tx_byte_b_o(), .tx_byte_valid_b_o(), .rx_byte_b_i(8'd0), .rx_byte_valid_b_i(1'b0), .rx_byte_ready_b_o(),
    .irq_o(irq_kbd));

  // 1: ttya (A, on the MiSTer's serial line) and ttyb (B, unconnected)
  logic [7:0] ta_tx, ta_rx;
  logic       ta_tx_v, ta_rx_v, ta_rx_rdy, ta_brk;
  escc #(.CLK_HZ(CLK_HZ)) u_escc_ser (
    .clk, .rst(rst_m), .bus_i(iob_q[1]), .bus_o(iob_r[1]),
    .txd_a_o(), .rxd_a_i(!ta_brk), .dcd_a_i(1'b1), .cts_a_i(1'b1), .rts_a_o(), .dtr_a_o(),
    .txd_b_o(), .rxd_b_i(1'b1), .dcd_b_i(1'b1), .cts_b_i(1'b1), .rts_b_o(), .dtr_b_o(),
    .tx_byte_a_o(ta_tx), .tx_byte_valid_a_o(ta_tx_v),
    .rx_byte_a_i(ta_rx), .rx_byte_valid_a_i(ta_rx_v && ta_rx_rdy), .rx_byte_ready_a_o(ta_rx_rdy),
    .tx_byte_b_o(), .tx_byte_valid_b_o(), .rx_byte_b_i(8'd0), .rx_byte_valid_b_i(1'b0), .rx_byte_ready_b_o(),
    .irq_o(irq_ser));

  ss20_uart #(.CLK_HZ(CLK_HZ)) u_uart (
    .clk, .rst,
    .tx_byte_i(ta_tx), .tx_valid_i(ta_tx_v), .txd_o(uart_txd_o),
    .rxd_i(uart_rxd_i), .rx_byte_o(ta_rx), .rx_valid_o(ta_rx_v), .rx_ready_i(ta_rx_rdy), .brk_o(ta_brk));
  assign uart_rts_o = 1'b0;
  assign uart_dtr_o = 1'b0;

  // 2: the M48T08, its clock seeded from the MiSTer's RTC (BCD) at the
  // first update, its 8 KB kept in the image on SD slot 3 by nvram_sd
  // (which also stamps the ID PROM from ioctl index 64's serial)
  logic rtc_t, rtc_seen;
  always_ff @(posedge clk) begin
    rtc_t <= rtc_i[64];
    if (rst) rtc_seen <= 1'b0;
    else if (rtc_t != rtc_i[64]) rtc_seen <= 1'b1;
  end

  logic [23:0] seed;
  logic        seed_ok, seed_dl;
  always_ff @(posedge clk) begin
    seed_dl <= ioctl_download_i && ioctl_index_i == 8'd64;
    if (ioctl_download_i && ioctl_index_i == 8'd64 && ioctl_wr_i) begin
      if (ioctl_addr_i == 27'd4) seed[23:16] <= ioctl_dout_i[15:8];          // byte 5
      if (ioctl_addr_i == 27'd6) seed[15:0]  <= {ioctl_dout_i[7:0], ioctl_dout_i[15:8]};
      if (ioctl_addr_i == 27'd6) seed_ok <= 1'b1;
    end
  end
  initial seed_ok = 1'b0;

  logic        nv_we;
  logic [10:0] nv_addr;
  logic [3:0]  nv_be;
  logic [31:0] nv_wdata, nv_rdata;
  logic [31:0] nv_lba;
  logic [5:0]  nv_cnt;
  logic        nv_rd, nv_wr;
  logic [15:0] nv_din;
  nvram_sd #(.CLK_HZ(CLK_HZ), .SIMU(SKIP_CLEAR)) u_nvsd (
    .clk, .por(1'b0),
    .img_mounted(img_mounted_i[3]), .img_readonly(img_readonly_i), .img_size(img_size_i),
    .sd_lba(nv_lba), .sd_blk_cnt(nv_cnt), .sd_rd(nv_rd), .sd_wr(nv_wr), .sd_ack(sd_ack_i[3]),
    .sd_buff_addr(sd_buff_addr_i), .sd_buff_dout(sd_buff_dout_i), .sd_buff_din(nv_din), .sd_buff_wr(sd_buff_wr_i),
    .seed, .seed_ok(seed_ok && !seed_dl),
    .nv_we, .nv_addr, .nv_be, .nv_wdata, .nv_rdata,
    .nv_bus_req(iob_q[2]), .nv_bus_rsp(iob_r[2]),
    .ready(nv_ready));

  m48t08 #(.CLK_HZ(CLK_HZ)) u_nvram (
    .clk, .rst(rst_m), .bus_i(iob_q[2]), .bus_o(iob_r[2]),
    .img_we(nv_we), .img_addr(nv_addr), .img_be(nv_be), .img_wdata(nv_wdata), .img_rdata(nv_rdata),
    .seed_valid(rtc_seen && rtc_t != rtc_i[64]),
    .seed_sec(rtc_i[7:0]), .seed_min(rtc_i[15:8]), .seed_hour(rtc_i[23:16]), .seed_day(rtc_i[55:48]),
    .seed_date(rtc_i[31:24]), .seed_month(rtc_i[39:32]), .seed_year(rtc_i[47:40]));

  // 3: the counter/timers, 4: the interrupt controller
  logic irq_tsys, irq_tcpu;
  slavio_timer #(.NCPU(1), .CLK_HZ(CLK_HZ)) u_timer (
    .clk, .rst(rst_m), .bus_i(iob_q[3]), .bus_o(iob_r[3]), .irq_sys(irq_tsys), .irq_cpu(irq_tcpu));

  logic [31:0] isrc;
  always_comb begin
    isrc = '0;
    isrc[SI_K] = irq_kbd;
    isrc[SI_S] = irq_ser;
    isrc[SI_T] = irq_tsys;
  end
  logic [0:0][3:0] irl_v;
  slavio_intctl #(.NCPU(1)) u_intctl (
    .clk, .rst(rst_m), .bus_i(iob_q[4]), .bus_o(iob_r[4]), .src_i(isrc), .timer_cpu_i(irq_tcpu), .irl_o(irl_v));
  assign irl = irl_v[0];

  // 5: the system registers (LEDs, AUXIO, power, system control/status)
  logic [15:0] leds;
  logic        aux_led;
  slavio_misc u_misc (
    .clk, .rst(rst || !run), .rst_swr_i(rst_swr), .rst_switch_i(1'b0), .wd_i(wd_reset),
    .bus_i(iob_q[5]), .bus_o(iob_r[5]),
    .leds_o(leds), .led_o(aux_led), .fd_tc_o(), .fd_density_i(1'b0), .power_off_o(),
    .pwr_fail_i(1'b0), .pwr_irq_o(), .diag_sw_i(1'b0), .sw_reset_o(sw_reset));

  // 6: SBus slot F (DMA2, ESP, LANCE: phases 7-8), 7: slot 2 (TCX: phase
  // 6): not yet; their registers read 0
  always_ff @(posedge clk) begin
    iob_r[6] <= '0; iob_r[7] <= '0;
    iob_r[6].ack <= iob_q[6].req && !iob_r[6].ack;
    iob_r[7].ack <= iob_q[7].req && !iob_r[7].ack;
  end

  /* verilator lint_on PINCONNECTEMPTY */

  // ------------------------------------------------- bring-up status --
  // Sixteen bits drawn as squares over the test pattern (green 1, red 0),
  // for the board bring-up while there is no screen console: sticky bits
  // say an event happened since power-up.
  logic [15:0] dbg;
  logic [31:0] dbg_pc;                    // the last committed PC
  logic [15:0] dbg_t;                     // the last trap's tt, error mode, a watchdog seen, the IRL
  logic [24:0] act;
  logic [3:0]  rd_cnt, bt_cnt;
  always_ff @(posedge clk) begin
    // row 2 (bring-up): reads accepted (31:16) and read beats received (15:0)
    // row 2 (bring-up): the CPU's request address, PA[35:28] and PA[23:0]
    dbg_pc <= {cpu_req.pa[35:28], cpu_req.pa[23:0]};
    if (ddr_rd_o && !ddr_busy_i && !ld_active) rd_cnt <= rd_cnt + 4'd1;
    if (ddr_dout_ready_i) bt_cnt <= bt_cnt + 4'd1;
    // row 3: memctl state (3), a read issued / accepted / data seen (sticky),
    // DDR busy seen, a write issued, cpu trap seen, the last tt's low nibble,
    // error mode, a watchdog seen, the I-side request seen
    dbg_t[15:13] <= mc_state;
    dbg_t[12] <= dbg_t[12] | (ddr_rd_o);
    dbg_t[11] <= dbg_t[11] | (ddr_rd_o && !ddr_busy_i);
    dbg_t[10] <= dbg_t[10] | ddr_dout_ready_i;
    dbg_t[9]  <= dbg_t[9] | ddr_busy_i;
    dbg_t[8]  <= dbg_t[8] | (ddr_we_o && !ld_active);
    dbg_t[7:4] <= rd_cnt;                 // reads accepted, low 4 bits
    dbg_t[3:0] <= bt_cnt;                 // read beats received, low 4 bits
  end
  always_ff @(posedge clk) begin
    if (cpu_req.valid) act <= act + 25'd1;
    dbg[0]  <= run;
    dbg[1]  <= ld_active;
    dbg[2]  <= nv_ready;
    dbg[3]  <= rst;
    dbg[4]  <= dbg[4] | ioctl_download_i;
    dbg[5]  <= dbg[5] | (ioctl_download_i && ioctl_index_i == 8'd0);
    dbg[6]  <= dbg[6] | (ioctl_wr_i && ioctl_index_i == 8'd0);
    dbg[7]  <= dbg[7] | cpu_req.valid;
    dbg[8]  <= act[24];
    dbg[9]  <= dbg[9] | ta_tx_v;
    dbg[10] <= dbg[10] | iob_q[1].req;
    dbg[11] <= ddr_busy_i;
    dbg[12] <= rst_m;
    dbg[13] <= ioctl_download_i;
    dbg[14] <= ld_state[0];
    dbg[15] <= ld_state[1];
  end
  initial begin dbg = '0; act = '0; dbg_pc = '0; dbg_t = '0; rd_cnt = '0; bt_cnt = '0; end

  // ------------------------------------------------------- idle for now --
  always_comb begin
    for (int n = 0; n < 3; n++) begin
      sd_lba_o[n]      = '0;
      sd_blk_cnt_o[n]  = '0;
      sd_buff_din_o[n] = '0;
    end
    sd_lba_o[3]      = nv_lba;
    sd_blk_cnt_o[3]  = nv_cnt;
    sd_buff_din_o[3] = nv_din;
  end
  assign sd_rd_o          = {nv_rd, 3'b000};
  assign sd_wr_o          = {nv_wr, 3'b000};
  assign kbd_led_status_o = '0;
  assign kbd_led_use_o    = '0;
  assign audio_l_o        = '0;
  assign audio_r_o        = '0;
  assign led_disk_o       = 1'b0;
  assign led_user_o       = !aux_led;   // the Aux register's LED bit (0 = lit), as the board's LED

  // -------------------------------------------------------- test pattern --

  // rst into the pixel clock's domain
  logic [1:0] rst_vid_s;
  always_ff @(posedge clk_vid) rst_vid_s <= {rst_vid_s[0], rst};
  wire rst_vid = rst_vid_s[1];

  logic [11:0] x, y;
  logic de, hs, vs, frame;
  video_timing raster (
    .clk(clk_vid), .rst(rst_vid), .ce_i(1'b1),
    .x_o(x), .y_o(y), .de_o(de), .hs_o(hs), .vs_o(vs), .frame_o(frame));

  // Eight colour bars over the top three quarters, a grey ramp below, and a
  // white frame on the outermost pixels, so a cropped or shifted picture
  // shows at a glance.
  wire edge_px = (x == 12'd0) || (x == 12'd1023) || (y == 12'd0) || (y == 12'd767);
  wire [2:0] bar = x[9:7];
  wire [7:0] ramp = x[9:2];

  logic [15:0] dbg_v0, dbg_v, dbgt_v0, dbgt_v;
  logic [31:0] dbgpc_v0, dbgpc_v;
  always_ff @(posedge clk_vid) begin
    dbg_v0 <= dbg; dbg_v <= dbg_v0;
    dbgpc_v0 <= dbg_pc; dbgpc_v <= dbgpc_v0;
    dbgt_v0 <= dbg_t; dbgt_v <= dbgt_v0;
  end
  // row 1 (y 600-647): the status bits 0-15; row 2 (656-687): the PC, bit
  // 31 first, 32 px a bit; row 3 (696-727): dbg_t bit 15 first
  wire in_r1 = y >= 12'd600 && y < 12'd648 && x[5:0] < 6'd48;
  wire in_r2 = y >= 12'd656 && y < 12'd688 && x[4:0] < 5'd24;
  wire in_r3 = y >= 12'd696 && y < 12'd728 && x[5:0] < 6'd48;
  wire in_dbg = (in_r1 || in_r2 || in_r3) && x < 12'd1024;
  wire dbg_bit = in_r1 ? dbg_v[x[9:6]] : in_r2 ? dbgpc_v[5'd31 - x[9:5]] : dbgt_v[4'd15 - x[9:6]];

  always_ff @(posedge clk_vid) begin
    vid_hs_o <= hs;
    vid_vs_o <= vs;
    vid_de_o <= de;
    if (!de) begin
      {vid_r_o, vid_g_o, vid_b_o} <= '0;
    end else if (in_dbg) begin
      vid_r_o <= dbg_bit ? 8'h00 : 8'hFF;
      vid_g_o <= dbg_bit ? 8'hFF : 8'h00;
      vid_b_o <= 8'h00;
    end else if (edge_px) begin
      {vid_r_o, vid_g_o, vid_b_o} <= '1;
    end else if (y < 12'd576) begin
      // white, yellow, cyan, green, magenta, red, blue, black
      vid_r_o <= {8{~bar[1]}};
      vid_g_o <= {8{~bar[2]}};
      vid_b_o <= {8{~bar[0]}};
    end else begin
      {vid_r_o, vid_g_o, vid_b_o} <= {3{ramp}};
    end
  end
  assign vid_ce_o = 1'b1;

  /* verilator lint_off UNUSEDSIGNAL */
  wire unused_inputs = ^{opt_autoboot_i, opt_serial_i, opt_cg3_i, opt_kbd_layout_i, opt_l2tlb_i,
                         opt_eth_i, sd_ack_i[2:0], img_mounted_i[2:0], uart_cts_i, uart_dsr_i,
                         ps2_key_i, ps2_mouse_i, frame, leds, rtc_i[63:56], cpu_tt, cpu_pc, cpu_commit, cpu_trap, cpu_halt, cpu_req.pa[27:24]};
  /* verilator lint_on UNUSEDSIGNAL */

endmodule
