// SPDX-License-Identifier: GPL-2.0-or-later
//
// cpu_sim: the phase-3 harness (docs/arch/mmu.md §5): one cpu_module (IU,
// FPU, SRMMU, caches) on a behavioural interconnect (mem_pkg) with the
// PROM image, 16 MB of RAM, the escc on ttya, bus errors for the empty SBus
// slots, and the snoop broadcast of every write. Verilator, --binary
// --timing; prints the ROM's serial output and stops at "CPUTEST DONE", at
// a watchdog reset (unless +wd), or at the cycle budget.
//
// Address map (docs/arch/memory-map.md): RAM at PA 0 (16 MB); the PROM at
// 0xF_F000_0000 (1 MB, mirrored through the 16 MB window); the ESCC at
// 0xF_F110_0000; 0xE_0xxx_xxxx-0xE_3xxx_xxxx are empty SBus slots (bus
// error). Anything else reads 0 and takes writes.
//
// Plusargs: +lat=N (memory latency, default 1), +gaps (a bubble between
// burst beats), +trace (every commit), +dmem (every data access), +mem
// (every memory-port beat), +from=N +to=N (pipeline state per cycle),
// +cycles=N (the budget).

module cpu_sim
  import cpu_pkg::*;
  import iobus_pkg::*;
  import mem_pkg::*;
#(
  parameter string ROM = "tests/cpu/out/ss20/cputest.rom",
  parameter longint CYCLES = 400_000_000
);
  logic clk, rst;
  initial begin clk = 0; rst = 1; end
  always #5 clk = ~clk;

  // ---- the module ----
  mem_req_t mr;
  mem_rsp_t ms;
  snoop_t   sn;
  logic     wd_reset, si_reset, halt;

  cpu_module #(.HAS_FPU(1'b1), .RAM_MB(12'd16)) u_cpu (
    .clk, .rst, .mid_i(4'd8), .irl_i(4'd0),
    .mem_req_o(mr), .mem_rsp_i(ms), .snoop_i(sn),
    .wd_reset_o(wd_reset), .si_reset_o(si_reset), .halt_o(halt));

  // ---- memories ----
  logic [31:0] rom [0:262143];       // 1 MB of words
  logic [63:0] ram [0:2097151];      // 16 MB
  initial $readmemh(ROM, rom);

  // ---- the ESCC on the I/O bus ----
  iob_req_t esc_req;
  iob_rsp_t esc_rsp;
  logic txd_a, txd_b, rts_a, dtr_a, rts_b, dtr_b, irq;
  escc #(.CLK_HZ(9_830_400)) u_escc (
    .clk, .rst, .bus_i(esc_req), .bus_o(esc_rsp),
    .txd_a_o(txd_a), .rxd_a_i(1'b1), .dcd_a_i(1'b1), .cts_a_i(1'b1), .rts_a_o(rts_a), .dtr_a_o(dtr_a),
    .txd_b_o(txd_b), .rxd_b_i(1'b1), .dcd_b_i(1'b1), .cts_b_i(1'b1), .rts_b_o(rts_b), .dtr_b_o(dtr_b),
    .irq_o(irq));

  // ---- the interconnect slave ----
  logic is_ram, is_rom, is_escc, is_sbus_empty;
  always_comb begin
    is_ram  = mr.pa[35:24] == 12'h000;
    is_rom  = mr.pa[35:24] == 12'hFF0;
    is_escc = mr.pa[35:20] == 16'hFF11;
    is_sbus_empty = mr.pa[35:32] == 4'hE && mr.pa[31:30] == 2'b00;
  end

  int lat;
  logic gaps;
  initial begin
    if (!$value$plusargs("lat=%d", lat)) lat = 1;
    gaps = $test$plusargs("gaps");
  end

  typedef enum logic [1:0] {M_IDLE, M_WAIT, M_BEAT, M_ESCC} mstate_t;
  mstate_t   mst;
  int        m_cnt;
  logic [1:0] beat;
  logic       gap_q;

  function automatic logic [63:0] read_dw(input logic [35:0] pa);
    if (pa[35:24] == 12'h000) return ram[pa[23:3]];
    if (pa[35:24] == 12'hFF0) return {rom[{pa[19:3], 1'b0}], rom[{pa[19:3], 1'b1}]};
    return 64'd0;
  endfunction

  logic [35:0] bpa;                  // the beat's address
  assign bpa = mr.burst ? {mr.pa[35:5], beat, 3'b000} : mr.pa;

  // The I/O bus wants the byte address (the ESCC decodes addr[2:1]) and
  // the lanes within the word: both from the doubleword's byte enables
  logic [2:0] esc_off;
  always_comb begin
    esc_off = 3'd0;
    for (int i = 0; i < 8; i++) if (mr.be[i]) esc_off = 3'(7 - i);   // the first enabled byte
    esc_req = IOB_REQ_IDLE;
    esc_req.req   = mst == M_ESCC && !esc_rsp.ack && !esc_started;
    esc_req.we    = mr.write;
    esc_req.addr  = {8'h0, mr.pa[19:3], esc_off};
    esc_req.be    = (mr.be[7:4] != 4'h0) ? mr.be[7:4] : mr.be[3:0];
    esc_req.wdata = (mr.be[7:4] != 4'h0) ? mr.wdata[63:32] : mr.wdata[31:0];
  end
  logic esc_started;

  always_ff @(posedge clk) begin
    ms <= '0;
    sn <= '0;
    if (rst) begin
      mst <= M_IDLE; m_cnt <= 0; beat <= '0; gap_q <= 1'b0; esc_started <= 1'b0;
    end else begin
      case (mst)
        M_IDLE: begin
          if (mr.valid && !ms.ack) begin        // not the request just acked
            m_cnt <= lat;
            beat <= '0;
            gap_q <= 1'b0;
            if (is_escc) begin mst <= M_ESCC; esc_started <= 1'b0; end
            else mst <= M_WAIT;
          end
        end
        M_WAIT: begin
          if (m_cnt <= 1) mst <= M_BEAT;
          else m_cnt <= m_cnt - 1;
        end
        M_BEAT: begin
          if (gaps && !gap_q) begin
            gap_q <= 1'b1;                      // a bubble before each beat
          end else begin
            gap_q <= 1'b0;
            ms.ack <= 1'b1;
            if (is_sbus_empty) begin
              ms.err <= 1'b1;
              mst <= M_IDLE;
            end else begin
              ms.rdata <= read_dw(bpa);
              if (mr.write && is_ram) begin
                for (int i = 0; i < 8; i++) if (mr.be[i]) ram[bpa[23:3]][i*8 +: 8] <= mr.wdata[i*8 +: 8];
              end
              if (mr.write) begin
                sn.valid <= 1'b1; sn.line <= bpa[35:5]; sn.mid <= 4'd8;
              end
              if (mr.burst && beat != 2'd3) beat <= beat + 2'd1;
              else mst <= M_IDLE;
            end
          end
        end
        M_ESCC: begin
          if (esc_req.req) esc_started <= 1'b1;
          if (esc_rsp.ack) begin
            ms.ack <= 1'b1;
            ms.rdata <= {2{esc_rsp.rdata}};     // the ESCC's byte is in every lane
            mst <= M_IDLE;
          end
        end
        default: mst <= M_IDLE;
      endcase
    end
  end

  // ---- cycle count, stop rules ----
  longint cyc;
  logic [95:0] last12;               // the last twelve ttya bytes
  logic        done_seen;            // "CPUTEST DONE" went by: stop at the end of its line
  logic quiet;
  initial quiet = $test$plusargs("dmem") || $test$plusargs("trace") || $test$plusargs("mem");
  logic keep_wd;
  initial keep_wd = $test$plusargs("wd");
  longint budget;
  initial if (!$value$plusargs("cycles=%d", budget)) budget = CYCLES;
  initial begin
    cyc = 0; last12 = '0; done_seen = 1'b0;
    repeat (4) @(posedge clk);
    rst = 0;
  end
  always_ff @(posedge clk) begin
    cyc <= cyc + 1;
    if (u_escc.dat_wr_a) begin
      if (!quiet) begin $write("%c", u_escc.wbyte); $fflush(); end
      last12 <= {last12[87:0], u_escc.wbyte};
      if ({last12[87:0], u_escc.wbyte} == "CPUTEST DONE") done_seen <= 1'b1;
      if (done_seen && u_escc.wbyte == 8'h0A) begin
        $display("\ncpu_sim: done after %0d cycles", cyc);
        $finish;
      end
    end
    if (wd_reset && !keep_wd) begin
      $display("\ncpu_sim: watchdog reset (error mode) at cycle %0d", cyc);
      $finish;
    end
    if (cyc >= budget) begin
      $display("\ncpu_sim: cycle budget exhausted");
      $finish;
    end
  end

  // ---- +escc: the transmitter of channel A whenever its status is read ----
  always_ff @(posedge clk) begin
    if ($test$plusargs("escc") && esc_rsp.ack && !mr.write)
      $display("%8d  escc rd addr=%05x rdata=%02x | A: tx_busy=%0d buf_full=%0d tx_en=%0d cts_ok=%0d wr5=%02x brg=%0d",
               cyc, esc_req.addr[19:0], esc_rsp.rdata[7:0], u_escc.chan_a.tx_busy, u_escc.chan_a.tx_buf_full,
               u_escc.chan_a.tx_en, u_escc.chan_a.tx_cts_ok, u_escc.chan_a.wr5, u_escc.chan_a.tx_clk);
  end

  // ---- +trace: every instruction as it commits, and the traps ----
  logic trace;
  initial trace = $test$plusargs("trace");
  always_ff @(posedge clk) begin
    if (trace && u_cpu.u_iu.w_valid && !u_cpu.u_iu.w_stall) begin
      if (u_cpu.u_iu.w_trap)
        $display("%8d  %08x  TRAP tt=%02x  (npc %08x) cwp %0d et %0d", cyc, u_cpu.u_iu.w_pc, u_cpu.u_iu.w_tt, u_cpu.u_iu.w_npc, u_cpu.u_iu.cwp, u_cpu.u_iu.et);
      else
        $display("%8d  %08x  %-10s rd=%0d r=%08x  icc=%b cwp=%0d", cyc, u_cpu.u_iu.w_pc, u_cpu.u_iu.w_dec.cls.name(), u_cpu.u_iu.w_dec.rd,
                 u_cpu.u_iu.w_rdval, u_cpu.u_iu.icc, u_cpu.u_iu.cwp);
    end
  end

  // ---- +dmem: every data access as it is acknowledged ----
  always_ff @(posedge clk) begin
    if ($test$plusargs("dmem") && u_cpu.dmr.valid && u_cpu.dms.ack)
      $display("%8d  dmem %s asi=%02x va=%08x pa=%09x size=%0d wdata=%016x rdata=%016x fault=%0d",
               cyc, u_cpu.dmr.write ? "W" : (u_cpu.dmr.atomic ? "A" : "R"), u_cpu.dmr.asi, u_cpu.dmr.va, u_cpu.d_pa,
               u_cpu.dmr.size, u_cpu.dmr.wdata, u_cpu.dms.rdata, u_cpu.dms.fault);
  end

  // ---- +mem: every beat on the interconnect ----
  always_ff @(posedge clk) begin
    if ($test$plusargs("mem") && ms.ack)
      $display("%8d  mem %s%s pa=%09x be=%02x wdata=%016x rdata=%016x err=%0d owner=%0d",
               cyc, mr.write ? "W" : "R", mr.burst ? "b" : " ", bpa, mr.be, mr.wdata, ms.rdata, ms.err, u_cpu.owner);
  end

  // ---- +from=N +to=N: pipeline internals in a cycle window ----
  longint dbg_from, dbg_to;
  initial begin
    if (!$value$plusargs("from=%d", dbg_from)) dbg_from = 0;
    if (!$value$plusargs("to=%d", dbg_to)) dbg_to = -1;
  end
  always_ff @(posedge clk) begin
    if (cyc >= dbg_from && cyc <= dbg_to)
      $display("%8d D v%0d pc=%08x go%0d | E v%0d pc=%08x go%0d | M v%0d pc=%08x | W v%0d pc=%08x | F pc=%08x pend%0d | is=%s ds=%s ws=%s ic=%s dc=%s",
               cyc, u_cpu.u_iu.d_valid, u_cpu.u_iu.d_pc, u_cpu.u_iu.d_go, u_cpu.u_iu.e_valid, u_cpu.u_iu.e_pc, u_cpu.u_iu.e_go,
               u_cpu.u_iu.m_valid, u_cpu.u_iu.m_pc, u_cpu.u_iu.w_valid, u_cpu.u_iu.w_pc,
               u_cpu.u_iu.f_pc, u_cpu.u_iu.f_pending,
               u_cpu.is.name(), u_cpu.ds.name(), u_cpu.u_mmu.ws.name(), u_cpu.u_ic.st.name(), u_cpu.u_dc.st.name());
  end

  logic unused_ok;
  assign unused_ok = &{1'b0, txd_a, txd_b, rts_a, dtr_a, rts_b, dtr_b, irq, halt, si_reset};

endmodule
