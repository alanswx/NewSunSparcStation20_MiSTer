// SPDX-License-Identifier: GPL-2.0-or-later
//
// ram_2r1w_be: a RAM with one byte-enabled write port (B) and two read
// ports (A, and B's own address), one clock, registered outputs (data the
// cycle after the address). The cache data and tag arrays: the lookup
// reads on A while fills, diagnostics and snoops use B. Written in the
// form Quartus infers as M10K blocks: a packed array of bytes, one process
// (the Quartus Prime Handbook, "Inferring RAM": byte-enabled dual-port).
// A true dual-port RAM with a port whose write is tied off made Quartus 17
// report "multiple constant drivers".

module ram_2r1w_be #(
  parameter int AW = 9,                       // words: 2**AW
  parameter int BYTES = 8                     // bytes per word
)(
  input  logic                clk,

  input  logic [AW-1:0]       a_addr,
  output logic [BYTES*8-1:0]  a_rdata,

  input  logic [AW-1:0]       b_addr,
  input  logic                b_we,
  input  logic [BYTES-1:0]    b_be,
  input  logic [BYTES*8-1:0]  b_wdata,
  output logic [BYTES*8-1:0]  b_rdata
);

  logic [BYTES-1:0][7:0] mem [2**AW];

  always_ff @(posedge clk) begin
    if (b_we) begin
      for (int i = 0; i < BYTES; i++)
        if (b_be[i]) mem[b_addr][i] <= b_wdata[8*i +: 8];
    end
    b_rdata <= mem[b_addr];
    a_rdata <= mem[a_addr];
  end

endmodule
