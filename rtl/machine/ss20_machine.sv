// SPDX-License-Identifier: GPL-2.0-or-later
//
// ss20_machine: the SPARCstation 20, everything below the MiSTer glue
// (VERILOG-PLAN.md §2). The MiSTer top (SunSparcStation.sv) and the
// simulation's sim/sim_top.sv both wrap this module, so whatever the board
// runs is what the simulation runs.
//
// Phase 0: the machine is empty. The ports are the ones the full machine
// needs, and every output is idle, except that the video side shows a test
// pattern at 1024x768 so the board has a picture for the OSD to sit on and
// the simulation has frames to count, and LED_USER blinks from clk_sys so a
// board with no picture still shows the core is clocked.
//
// Clocks: clk is the machine (55 MHz on the board), clk_vid the pixel clock
// (65 MHz). They are unrelated; the simulation drives both from one clock.
//
// The DDR3 port is the single Avalon master the framework provides; the
// machine's own masters (memory controller, video scan-out, the Ethernet
// mailbox) will share it through rtl/mister/ddram_arb.sv inside this module.
// Addresses are 64-bit words in the FPGA's 512 MB window (byte 0x2000_0000
// of the ARM's map is word 0).
//
// The hps_io side follows Main's support/sun (plan §1.2): ioctl index 0 is
// the boot PROM, index 64 the ID PROM seed; SD slots 0/1 the disks, 2 the
// CD, 3 the 8 KB NVRAM image; sd_blk_cnt is blocks - 1, up to 32 blocks.

module ss20_machine (
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

  // ---------------------------------------------------------------- idle --

  assign ddr_burstcnt_o = 8'd1;
  assign ddr_addr_o     = '0;
  assign ddr_rd_o       = 1'b0;
  assign ddr_we_o       = 1'b0;
  assign ddr_din_o      = '0;
  assign ddr_be_o       = '0;

  assign ioctl_wait_o   = 1'b0;

  always_comb begin
    for (int n = 0; n < 4; n++) begin
      sd_lba_o[n]      = '0;
      sd_blk_cnt_o[n]  = '0;
      sd_buff_din_o[n] = '0;
    end
  end
  assign sd_rd_o        = '0;
  assign sd_wr_o        = '0;

  assign uart_txd_o     = 1'b1;         // a mark: the line is idle
  assign uart_rts_o     = 1'b0;
  assign uart_dtr_o     = 1'b0;

  assign kbd_led_status_o = '0;
  assign kbd_led_use_o    = '0;

  assign audio_l_o      = '0;
  assign audio_r_o      = '0;

  assign led_disk_o     = 1'b0;

  // About one blink a second at 55 MHz.
  logic [25:0] beat;
  always_ff @(posedge clk) begin
    if (rst) beat <= '0;
    else beat <= beat + 26'd1;
  end
  assign led_user_o = beat[25];

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

  always_ff @(posedge clk_vid) begin
    vid_hs_o <= hs;
    vid_vs_o <= vs;
    vid_de_o <= de;
    if (!de) begin
      {vid_r_o, vid_g_o, vid_b_o} <= '0;
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
                         opt_ram_mb_i, opt_eth_i, ddr_busy_i, ddr_dout_i, ddr_dout_ready_i,
                         ioctl_download_i, ioctl_index_i, ioctl_wr_i, ioctl_addr_i, ioctl_dout_i,
                         img_mounted_i, img_readonly_i, img_size_i, sd_ack_i, sd_buff_addr_i,
                         sd_buff_dout_i, sd_buff_wr_i, rtc_i, uart_rxd_i, uart_cts_i, uart_dsr_i,
                         ps2_key_i, ps2_mouse_i, frame};
  /* verilator lint_on UNUSEDSIGNAL */

endmodule
