// SPDX-License-Identifier: GPL-2.0-or-later
// cpu_plomb — cpu_module behind a PLOMB master port, flat for the VHDL side
// of the CPU hybrid (the old core with this CPU in place of its IU + mcu_mp).
//
// Written from: docs/arch/cpu.md, docs/arch/bus.md and
// docs/sessions/HANDOFF-20261009.md; the old core's bus package
// (rtl/plomb/plomb_pack.vhd) for the PLOMB field widths. Not part of the new
// core.
//
// Two clocks: clk is the bus clock (the old core's system clock), clk_cpu
// the CPU's — the same clock, or one of half its frequency made by a toggle
// flop, whose edges fall on every second edge of clk (a little after them:
// the hybrid's first proof of the CPU runs it so, since its one-cycle paths
// do not meet 55 MHz yet). Everything shown to the CPU is a register loaded
// when cpu_ld_i is high (the bus cycle ending on the edge between two CPU
// edges) and held for a whole CPU cycle; cpu_edge_i is high in the bus cycle
// that ends on a CPU edge. At full rate both are tied high.
//
// The caches snoop two sources: the module's own acknowledged write beats
// (from plomb_master, with MID) and the write beats the I/O master gets
// accepted on its own PLOMB bus (DMA into memory; dma_wr_i/dma_a_i, module
// ID 0). Both go through one queue (snoop_queue) in which consecutive beats
// of one line fold; one snoop goes to the module per CPU cycle, none while
// the module's caches hold (snoop_hold_o), and the module's own writes wait
// while the queue is nearly full.

module cpu_plomb
  import mem_pkg::*;
#(
  parameter integer RAM_MB = 64,          // reported in ASI 4 VA 0xD00 (bits 31:20)
  parameter integer MID    = 8            // this CPU's MBus module ID
)(
  input  logic        clk,
  input  logic        clk_cpu,
  input  logic        cpu_edge_i,
  input  logic        cpu_ld_i,
  input  logic        rst,
  input  logic [3:0]  irl_i,

  input  logic        dma_wr_i,
  input  logic [35:0] dma_a_i,

  output logic        halt_o,             // the IU is in error mode (until its watchdog)
  output logic        wd_reset_o,         // a watchdog reset was taken (one cycle)
  output logic        si_reset_o,         // a software-internal reset was requested (one cycle)

  output logic        pb_req,
  output logic [31:0] pb_a,
  output logic [3:0]  pb_ah,
  output logic [7:0]  pb_asi,
  output logic [31:0] pb_d,
  output logic [3:0]  pb_be,
  output logic [1:0]  pb_mode,
  output logic [1:0]  pb_burst,
  output logic        pb_cont,
  output logic        pb_cache,
  output logic        pb_lock,
  output logic        pb_dack,
  input  logic        pb_ack,
  input  logic        pb_dreq,
  input  logic [31:0] pb_rd,
  input  logic [1:0]  pb_code
);
  // The module's memory port passes through a register in the CPU clock
  // domain in both directions: its request before the shim, the shim's
  // response and the snoop before the module. The paths between the two
  // clock domains are then register to register (one bus period minus the
  // CPU clock's insertion delay is all they get); the module's own logic
  // has its whole cycle. One CPU cycle more per transfer; the shim's
  // FIN_EDGES is 3 accordingly.
  mem_req_t rq_cpu, rq;
  mem_rsp_t rs, rs_cpu;
  snoop_t   sn, sn_cpu;
  logic        hold_cpu, hold;
  logic        own_valid, sn_full;
  logic [30:0] own_line;

  always_ff @(posedge clk_cpu) begin
    rq     <= rq_cpu;
    rs_cpu <= rs;
    sn_cpu <= sn;
    hold   <= hold_cpu;
  end

  cpu_module #(.HAS_FPU(1'b1), .RAM_MB(12'(RAM_MB)), .SS20(1'b1), .NCPU_M1(2'd0)) u_cpu (
    .clk(clk_cpu), .rst, .mid_i(4'(MID)), .irl_i,
    .mem_req_o(rq_cpu), .mem_rsp_i(rs_cpu), .snoop_i(sn_cpu), .snoop_hold_o(hold_cpu),
    .wd_reset_o, .si_reset_o, .halt_o);

  plomb_master #(.MID(4'(MID)), .FIN_EDGES(3)) u_pb (
    .clk, .rst, .cpu_edge_i, .cpu_ld_i, .req_i(rq), .rsp_o(rs),
    .sn_valid_o(own_valid), .sn_line_o(own_line), .sn_full_i(sn_full),
    .pb_req, .pb_a, .pb_ah, .pb_asi, .pb_d, .pb_be, .pb_mode, .pb_burst,
    .pb_cont, .pb_cache, .pb_lock, .pb_dack,
    .pb_ack, .pb_dreq, .pb_rd, .pb_code);

  // ---- the snoops: own and DMA write beats, one per CPU cycle ----
  snoop_queue #(.DEPTH(16), .OWN_MID(4'(MID)), .DMA_MID(4'd0)) u_snq (
    .clk, .rst, .ld_i(cpu_ld_i), .hold_i(hold),
    .own_valid_i(own_valid), .own_line_i(own_line),
    .dma_valid_i(dma_wr_i), .dma_line_i(dma_a_i[35:5]),
    .full_o(sn_full), .snoop_o(sn));
endmodule
