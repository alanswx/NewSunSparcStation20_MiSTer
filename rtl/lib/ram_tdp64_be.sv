// SPDX-License-Identifier: GPL-2.0-or-later
//
// ram_tdp64_be: a true dual-port RAM, 64 bits wide with byte enables, one
// clock, registered outputs (data the cycle after the address). The cache
// data arrays. Written in the form Quartus infers as M10K blocks (the
// Quartus Prime Handbook, "Inferring RAM": byte-enabled true dual-port,
// one process per port, old data on a read during a write).

module ram_tdp64_be #(
  parameter int AW = 9                        // doublewords: 2**AW
)(
  input  logic          clk,

  input  logic [AW-1:0] a_addr,
  input  logic          a_we,
  input  logic [7:0]    a_be,
  input  logic [63:0]   a_wdata,
  output logic [63:0]   a_rdata,

  input  logic [AW-1:0] b_addr,
  input  logic          b_we,
  input  logic [7:0]    b_be,
  input  logic [63:0]   b_wdata,
  output logic [63:0]   b_rdata
);

  logic [7:0][7:0] mem [2**AW];

  always_ff @(posedge clk) begin
    if (a_we) begin
      for (int i = 0; i < 8; i++)
        if (a_be[i]) mem[a_addr][i] <= a_wdata[8*i +: 8];
    end
    a_rdata <= mem[a_addr];
  end

  always_ff @(posedge clk) begin
    if (b_we) begin
      for (int i = 0; i < 8; i++)
        if (b_be[i]) mem[b_addr][i] <= b_wdata[8*i +: 8];
    end
    b_rdata <= mem[b_addr];
  end

endmodule
