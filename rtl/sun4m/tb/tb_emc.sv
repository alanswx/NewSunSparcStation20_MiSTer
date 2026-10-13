// SPDX-License-Identifier: GPL-2.0-or-later
//
// tb_emc: the SMC register file: reset values, write masks, read-only
// registers, byte enables, the message bytes, and unassigned offsets.

module tb_emc;
  import iobus_pkg::*;
  import tb_pkg::*;

  logic clk, rst;
  initial begin clk = 0; rst = 1; end
  always #5 clk = ~clk;

  iob_req_t req = IOB_REQ_IDLE;
  iob_rsp_t rsp;

  emc dut (.clk, .rst, .bus_i(req), .bus_o(rsp));

  task automatic cycles(input int n);
    repeat (n) @(posedge clk);
    #1;
  endtask

  task automatic acc(input bit we, input int off, input logic [3:0] be, input logic [31:0] wd,
                     output logic [31:0] d);
    int t;
    req.req = 1; req.we = we; req.addr = 28'(off); req.be = be; req.wdata = wd; req.pair = 0;
    t = 0;
    do begin cycles(1); t++; end while (!rsp.ack && t < 20);
    check(rsp.ack && !rsp.err, "acked");
    d = rsp.rdata;
    req.req = 0; req.we = 0;
    cycles(1);
    check(!rsp.ack, "one ack");
  endtask

  task automatic ck32(input int off, input logic [31:0] exp, input string what);
    logic [31:0] d;
    acc(1'b0, off, 4'hF, 32'd0, d);
    check32(d, exp, what);
  endtask
  task automatic wr32(input int off, input logic [31:0] v);
    logic [31:0] d;
    acc(1'b1, off, 4'hF, v, d);
  endtask
  task automatic wrb(input int off, input logic [7:0] v);
    logic [31:0] d;
    acc(1'b1, off, 4'b1000 >> (off & 3), {4{v}}, d);
  endtask
  task automatic ckb(input int off, input logic [7:0] exp, input string what);
    logic [31:0] d;
    acc(1'b0, off, 4'b1000 >> (off & 3), 32'd0, d);
    check32(32'(8'(d >> (8 * (3 - (off & 3))))), 32'(exp), what);
  endtask

  initial begin
    cycles(3); rst = 0; cycles(2);
    // reset values
    ck32(32'h00, 32'h2000_0000, "MER: SMC, nothing enabled");
    ck32(32'h04, 32'h0000_0020, "MDR reset");
    ck32(32'h08, 32'h0, "MFSR reset");
    ck32(32'h10, 32'h07C0_0000, "MFAR0");
    ck32(32'h14, 32'h0, "MFAR1");
    // write masks
    wr32(32'h00, 32'hFFFF_FFFF);
    ck32(32'h00, 32'h2000_0BFF, "MER mask, IMPL/VER read-only");
    wr32(32'h04, 32'h0000_20A0);         // rom-cold-code's value
    ck32(32'h04, 32'h0000_20A0, "MDR as written");
    wr32(32'h04, 32'hFFFF_FFFF);
    ck32(32'h04, 32'h7FFF_FFFF, "MDR bit 31 reads 0");
    wr32(32'h0C, 32'h1234_5678);
    ck32(32'h0C, 32'h1234_5678, "VCR");
    wr32(32'h18, 32'hCAFE_0001);
    ck32(32'h18, 32'hCAFE_0001, "DR");
    wr32(32'h10, 32'hFFFF_FFFF);
    ck32(32'h10, 32'h07C0_0000, "MFAR0 read-only");
    wr32(32'h1C, 32'h11); wr32(32'h20, 32'h22);
    ck32(32'h1C, 32'h11, "ECR0"); ck32(32'h20, 32'h22, "ECR1");
    // byte enables
    wrb(32'h0E, 8'hAA);
    ck32(32'h0C, 32'h1234_AA78, "VCR byte 2");
    // the message bytes
    wrb(32'h1000, 8'h01); wrb(32'h1001, 8'h02); wrb(32'h1002, 8'h03); wrb(32'h1003, 8'h04);
    ckb(32'h1002, 8'h03, "message byte 2");
    ck32(32'h1000, 32'h0102_0304, "message bytes");
    // unassigned
    wr32(32'h40, 32'hFFFF_FFFF);
    ck32(32'h40, 32'h0, "unassigned reads 0");
    ck32(32'h24, 32'h0, "past ECR1 reads 0");
    // reset
    rst = 1; cycles(2); rst = 0; cycles(1);
    ck32(32'h00, 32'h2000_0000, "MER after reset");
    ck32(32'h04, 32'h20, "MDR after reset");
    tb_done("tb_emc");
  end

endmodule
