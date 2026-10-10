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
// the CPU's — the same clock, or one of half its frequency whose edges
// coincide with every second edge of clk (the hybrid's first proof of the
// CPU runs it at half rate: its one-cycle paths do not meet 55 MHz yet).
// cpu_edge_i is high in the clk cycle that ends on a clk_cpu edge (tied high
// at full rate); plomb_master and the snoop queue use it to show the CPU
// each ack and snoop exactly once.
//
// The caches snoop two sources: the module's own acknowledged write beats
// (from plomb_master, with MID) and the write beats the I/O master gets
// accepted on its own PLOMB bus (DMA into memory; dma_wr_i/dma_a_i, module
// ID 0). One snoop goes to the module per CPU cycle: the module's own first,
// the DMA ones through a short queue in which consecutive beats of one line
// fold.

module cpu_plomb
  import mem_pkg::*;
#(
  parameter integer RAM_MB = 64,          // reported in ASI 4 VA 0xD00 (bits 31:20)
  parameter integer MID    = 8            // this CPU's MBus module ID
)(
  input  logic        clk,
  input  logic        clk_cpu,
  input  logic        cpu_edge_i,
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
  mem_req_t rq;
  mem_rsp_t rs;
  snoop_t   own_sn, sn;

  cpu_module #(.HAS_FPU(1'b1), .RAM_MB(12'(RAM_MB))) u_cpu (
    .clk(clk_cpu), .rst, .mid_i(4'(MID)), .irl_i,
    .mem_req_o(rq), .mem_rsp_i(rs), .snoop_i(sn),
    .wd_reset_o, .si_reset_o, .halt_o);

  plomb_master #(.MID(4'(MID))) u_pb (
    .clk, .rst, .cpu_edge_i, .req_i(rq), .rsp_o(rs), .snoop_o(own_sn),
    .pb_req, .pb_a, .pb_ah, .pb_asi, .pb_d, .pb_be, .pb_mode, .pb_burst,
    .pb_cont, .pb_cache, .pb_lock, .pb_dack,
    .pb_ack, .pb_dreq, .pb_rd, .pb_code);

  // ---- the DMA snoop queue (bus clock; one pop per CPU cycle) ----
  logic [30:0] dq [0:3];                 // lines (pa[35:5])
  logic [30:0] last_line;
  logic [1:0]  wp, rp;
  logic [2:0]  n;
  logic        push, pop;
  assign push = dma_wr_i && n != 3'd4 && !(n != 3'd0 && last_line == dma_a_i[35:5]);
  assign pop  = n != 3'd0 && cpu_edge_i && !own_sn.valid;

  always_ff @(posedge clk) begin
    if (rst) begin
      wp <= '0; rp <= '0; n <= '0; last_line <= '0;
    end else begin
      if (push) begin
        dq[wp]    <= dma_a_i[35:5];
        last_line <= dma_a_i[35:5];
        wp        <= wp + 2'd1;
      end
      if (pop) rp <= rp + 2'd1;
      n <= n + {2'd0, push} - {2'd0, pop};
    end
  end

  always_comb begin
    sn = own_sn;
    if (pop) begin
      sn.valid = 1'b1;
      sn.line  = dq[rp];
      sn.mid   = 4'd0;
    end
  end
endmodule
