// SPDX-License-Identifier: GPL-2.0-or-later
//
// ram_tdp_be: a true dual-port RAM, 32 bits wide with byte enables, one
// clock, registered outputs (data the cycle after the address).
//
// Written in the style Quartus infers as a byte-enabled M10K dual-port RAM
// (Quartus Prime Handbook, "Byte-Enable True Dual-Port RAM"): one process
// per port, the write before the read, so a read on the port that writes
// returns the new data. No initial contents: the NVRAM and the caches load
// theirs at run time.

module ram_tdp_be #(
  parameter int AW = 11                       // words: 2**AW
)(
  input  logic          clk,

  input  logic [AW-1:0] a_addr,
  input  logic          a_we,
  input  logic [3:0]    a_be,
  input  logic [31:0]   a_wdata,
  output logic [31:0]   a_rdata,

  input  logic [AW-1:0] b_addr,
  input  logic          b_we,
  input  logic [3:0]    b_be,
  input  logic [31:0]   b_wdata,
  output logic [31:0]   b_rdata
);

  logic [3:0][7:0] mem [2**AW];

  always_ff @(posedge clk) begin
    if (a_we) begin
      for (int i = 0; i < 4; i++)
        if (a_be[i]) mem[a_addr][i] <= a_wdata[8*i +: 8];
    end
    a_rdata <= mem[a_addr];
  end

  always_ff @(posedge clk) begin
    if (b_we) begin
      for (int i = 0; i < 4; i++)
        if (b_be[i]) mem[b_addr][i] <= b_wdata[8*i +: 8];
    end
    b_rdata <= mem[b_addr];
  end

endmodule
