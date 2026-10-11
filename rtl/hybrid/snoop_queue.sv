// SPDX-License-Identifier: GPL-2.0-or-later
// snoop_queue — the snoops the CPU hybrid shows the module: its own
// accepted write beats and the I/O master's (DMA) write beats, queued on the
// bus clock, one delivered per CPU cycle in the register the CPU reads
// (loaded when ld_i is high, as everything the CPU sees).
//
// Written from docs/arch/bus.md (snoop_t) and the hybrid's needs. Not part
// of the new core.
//
// Two pushes may come in one cycle (own and DMA); consecutive beats of one
// line fold into the entry pushed last. The queue never drops a DMA snoop
// as long as DMA writes arrive slower than one line per two bus cycles (the
// old core's DMA writes a line in eight beats); the shim holds its own write
// beats while full_o is high, so the module's stores cannot starve the DMA
// snoops (a polling loop that stores every iteration did, and the cached
// copy of a DMA buffer went stale).

module snoop_queue
  import mem_pkg::*;
#(
  parameter int         DEPTH = 16,
  parameter logic [3:0] OWN_MID = 4'd8,
  parameter logic [3:0] DMA_MID = 4'd0
)(
  input  logic        clk,
  input  logic        rst,
  input  logic        ld_i,            // the cycle whose end loads the register the CPU sees

  input  logic        own_valid_i,
  input  logic [30:0] own_line_i,
  input  logic        dma_valid_i,
  input  logic [30:0] dma_line_i,

  output logic        full_o,          // fewer than four free slots: hold the module's writes
  output snoop_t      snoop_o          // the register the CPU reads
);
  localparam int AW = $clog2(DEPTH);
  logic [30:0] q_line [0:DEPTH-1];
  logic [3:0]  q_mid  [0:DEPTH-1];
  logic [AW-1:0] wp, rp;
  logic [AW:0]   n;
  logic [30:0]   last_line;
  logic [3:0]    last_mid;

  // Which of this cycle's pushes go in: a beat of the line pushed last folds
  logic push_dma, push_own;
  assign push_dma = dma_valid_i && n != DEPTH[AW:0] &&
                    !(n != '0 && last_line == dma_line_i && last_mid == DMA_MID);
  assign push_own = own_valid_i && (n + {{AW{1'b0}}, push_dma}) != DEPTH[AW:0] &&
                    !(n != '0 && last_line == own_line_i && last_mid == OWN_MID && !push_dma);
  assign full_o   = n > DEPTH[AW:0] - 4;

  logic pop;
  assign pop = ld_i && n != '0;

  always_ff @(posedge clk) begin
    if (rst) begin
      wp <= '0; rp <= '0; n <= '0; last_line <= '0; last_mid <= '0;
      snoop_o <= '0;
    end else begin
      if (push_dma) begin
        q_line[wp] <= dma_line_i; q_mid[wp] <= DMA_MID;
        last_line <= dma_line_i; last_mid <= DMA_MID;
      end
      if (push_own) begin
        q_line[wp + {{AW-1{1'b0}}, push_dma}] <= own_line_i;
        q_mid [wp + {{AW-1{1'b0}}, push_dma}] <= OWN_MID;
        last_line <= own_line_i; last_mid <= OWN_MID;
      end
      wp <= wp + {{AW-1{1'b0}}, push_dma} + {{AW-1{1'b0}}, push_own};
      if (pop) rp <= rp + 1'b1;
      n <= n + {{AW{1'b0}}, push_dma} + {{AW{1'b0}}, push_own} - {{AW{1'b0}}, pop};
      if (ld_i) begin
        snoop_o.valid <= n != '0;
        snoop_o.line  <= q_line[rp];
        snoop_o.mid   <= q_mid[rp];
      end
    end
  end
endmodule
