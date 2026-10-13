// SPDX-License-Identifier: GPL-2.0-or-later
//
// ss20_mbus: the interconnect's arbiter (docs/arch/bus.md "The
// interconnect"): the CPU module and the MSI's DVMA port (already
// translated to physical addresses) onto the one slave port of
// ss20_memctl.
//
// - A request is granted whole: a single beat until its ack, a line until
//   its fourth ack (or an err), a locked read until the owner's next write
//   completes (ldstub/swap and the table walker's R-bit update stay atomic
//   against DMA).
// - The grant is combinational when the port is free, so an uncontended
//   request costs no cycle; after each finished request one cycle passes
//   with nothing presented (the finished master drops its request then,
//   and ss20_memctl ignores that cycle anyway).
// - Round robin between the two when both wait.
// - ss20_memctl writes single beats only; the CPU's write-through caches
//   never write a line, but DMA does: a line write is passed on as four
//   single doubleword writes at its four addresses, the master's data for
//   each beat taken as it presents it after the previous ack.
// - mid_o is the granted master's module ID (the snoop's source): 8 for
//   the CPU, 0 for DVMA.

module ss20_mbus
  import mem_pkg::*;
#(
  parameter logic [3:0] CPU_MID = 4'd8,
  parameter logic [3:0] DMA_MID = 4'd0
)(
  input  logic      clk,
  input  logic      rst,

  input  mem_req_t  cpu_req_i,
  output mem_rsp_t  cpu_rsp_o,
  input  mem_req_t  dma_req_i,
  output mem_rsp_t  dma_rsp_o,

  output mem_req_t  req_o,
  input  mem_rsp_t  rsp_i,
  output logic [3:0] mid_o
);

  typedef enum logic [1:0] {O_NONE, O_CPU, O_DMA, O_GAP} own_t;
  own_t       own;
  logic       last_dma;                   // the last grant went to DMA (round robin)
  logic       locked;                     // the owner's locked read is done; hold until its write
  logic [1:0] beat;                       // beats acked within a line

  // the master presented this cycle
  own_t cur;
  always_comb begin
    cur = own;
    if (own == O_NONE) begin
      if (cpu_req_i.valid && dma_req_i.valid) cur = last_dma ? O_CPU : O_DMA;
      else if (cpu_req_i.valid)               cur = O_CPU;
      else if (dma_req_i.valid)               cur = O_DMA;
    end
  end

  mem_req_t m;
  always_comb begin
    m = '0;
    if (cur == O_CPU) m = cpu_req_i;
    if (cur == O_DMA) m = dma_req_i;
    req_o = m;
    if (m.burst && m.write) begin         // a line write: four single beats
      req_o.burst = 1'b0;
      req_o.pa    = {m.pa[35:5], beat, 3'b000};
    end
  end
  assign mid_o = cur == O_DMA ? DMA_MID : CPU_MID;

  always_comb begin
    cpu_rsp_o = '0;
    dma_rsp_o = '0;
    if (cur == O_CPU) cpu_rsp_o = rsp_i;
    if (cur == O_DMA) dma_rsp_o = rsp_i;
  end

  // the request's last ack
  logic done;
  always_comb begin
    done = 1'b0;
    if (rsp_i.ack && (cur == O_CPU || cur == O_DMA)) begin
      if (rsp_i.err)               done = 1'b1;
      else if (m.burst)            done = beat == 2'd3;
      else if (m.lock && !m.write) done = 1'b0;   // a locked read: the write follows
      else                         done = !locked || m.write;
    end
  end

  always_ff @(posedge clk) begin
    if (rst) begin
      own <= O_NONE; last_dma <= 1'b0; locked <= 1'b0; beat <= '0;
    end else begin
      if (own == O_GAP) own <= O_NONE;
      else if (own == O_NONE && cur != O_NONE) begin
        own <= cur;
        last_dma <= cur == O_DMA;
      end
      if (rsp_i.ack && (cur == O_CPU || cur == O_DMA)) begin
        beat <= m.burst && !rsp_i.err ? beat + 2'd1 : 2'd0;
        if (m.lock && !m.write && !rsp_i.err) locked <= 1'b1;
      end
      if (done) begin
        own <= O_GAP; locked <= 1'b0; beat <= '0;
      end
    end
  end

endmodule
