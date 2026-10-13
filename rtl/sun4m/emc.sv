// SPDX-License-Identifier: GPL-2.0-or-later
//
// emc: the register file of the SS20's memory controller (the SMC, an EMC
// variant; implementation 2) at PA 0xF_0000_0000. The core has no ECC
// memory, so nothing here ever reports an error; the registers exist so
// that firmware reads back what it wrote and finds the controller it
// expects (OBP 2.25's rom-cold-code writes the delay register, its
// "eccmemctl" node and the POST's EMC/SMC tests read and write the rest).
//
// From: Sun-4M System Architecture 950-1373-01 §3.2.2.1 (the space);
//   docs/rom-disassembly/ss20-obp-2.25/hardware-access.md "EMC ECC memory
//   controller"; the register layout, write masks and reset values from
//   QEMU hw/misc/eccmemctl.c (SS-20: version 0x2000_0000).
//
// Registers (32-bit; addr is the offset from 0xF_0000_0000):
//   0x00  MER  memory enable: [31:24] IMPL/VER (2, 0) read-only; [11:0]
//              EE, EI, MRR[7:0], A, DCI as written (mask 0xBFF)
//   0x04  MDR  memory delay: [30:0] as written; 0x20 at reset
//   0x08  MFSR fault status: as written (no fault ever latches)
//   0x0C  VCR  video configuration: as written
//   0x10  MFAR0 fault address 0: read-only, 0x07C0_0000
//   0x14  MFAR1 fault address 1: read-only, 0
//   0x18  DR   diagnostic: as written
//   0x1C  ECR0, 0x20 ECR1 event counters: as written
//   0x1000-0x1003  the four diagnostic message bytes (byte wide)
// Anything else reads 0 and ignores writes. Byte enables are honoured on
// every register (big-endian lanes, iobus_pkg).

module emc
  import iobus_pkg::*;
(
  input  logic     clk,
  input  logic     rst,
  input  iob_req_t bus_i,             // addr = PA[27:0]
  output iob_rsp_t bus_o
);

  localparam logic [31:0] MER_ID = 32'h2000_0000;

  logic [11:0] mer;
  logic [30:0] mdr;
  logic [31:0] mfsr, vcr, dr, ecr0, ecr1;
  logic [31:0] diag;                   // the message bytes, byte 0 in 31:24

  logic regs, msg;
  assign regs = bus_i.addr[27:6] == '0;
  assign msg  = bus_i.addr[27:2] == 26'(32'h1000 >> 2);

  function automatic logic [31:0] merge(input logic [31:0] old, input logic [31:0] wd, input logic [3:0] be);
    for (int k = 0; k < 4; k++)
      if (be[k]) old[8*k +: 8] = wd[8*k +: 8];
    return old;
  endfunction

  logic [31:0] rd;
  always_comb begin
    rd = '0;
    if (regs)
      case (bus_i.addr[5:2])
        4'h0: rd = MER_ID | {20'd0, mer};
        4'h1: rd = {1'b0, mdr};
        4'h2: rd = mfsr;
        4'h3: rd = vcr;
        4'h4: rd = 32'h07C0_0000;
        4'h5: rd = 32'h0;
        4'h6: rd = dr;
        4'h7: rd = ecr0;
        4'h8: rd = ecr1;
        default: rd = '0;
      endcase
    else if (msg)
      rd = diag;
  end

  // a write's new value: the addressed register (as read) with the
  // enabled bytes replaced
  logic [31:0] wm;
  assign wm = merge(rd, bus_i.wdata, bus_i.be);

  always_ff @(posedge clk) begin
    bus_o <= IOB_RSP_IDLE;
    if (rst) begin
      mer <= '0; mdr <= 31'h20; mfsr <= '0; vcr <= '0; dr <= '0; ecr0 <= '0; ecr1 <= '0; diag <= '0;
    end else if (bus_i.req && !bus_o.ack) begin
      bus_o.ack   <= 1'b1;
      bus_o.rdata <= rd;
      if (bus_i.we) begin
        if (regs)
          case (bus_i.addr[5:2])
            4'h0: mer  <= wm[11:0] & 12'hBFF;
            4'h1: mdr  <= wm[30:0];
            4'h2: mfsr <= wm;
            4'h3: vcr  <= wm;
            4'h6: dr   <= wm;
            4'h7: ecr0 <= wm;
            4'h8: ecr1 <= wm;
            default: ;
          endcase
        else if (msg)
          diag <= wm;
      end
    end
  end

  logic unused_ok;
  assign unused_ok = &{1'b0, bus_i.pair, bus_i.addr[1:0]};

endmodule
