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

  // One statement per byte, as in Quartus's byte-enabled true dual-port
  // template: with a for loop Quartus 17 does not infer the RAM and then
  // reports multiple constant drivers for the two ports
  always_ff @(posedge clk) begin
    if (a_we) begin
      if (a_be[0]) mem[a_addr][0] <= a_wdata[7:0];
      if (a_be[1]) mem[a_addr][1] <= a_wdata[15:8];
      if (a_be[2]) mem[a_addr][2] <= a_wdata[23:16];
      if (a_be[3]) mem[a_addr][3] <= a_wdata[31:24];
    end
    a_rdata <= mem[a_addr];
  end

  always_ff @(posedge clk) begin
    if (b_we) begin
      if (b_be[0]) mem[b_addr][0] <= b_wdata[7:0];
      if (b_be[1]) mem[b_addr][1] <= b_wdata[15:8];
      if (b_be[2]) mem[b_addr][2] <= b_wdata[23:16];
      if (b_be[3]) mem[b_addr][3] <= b_wdata[31:24];
    end
    b_rdata <= mem[b_addr];
  end

endmodule
