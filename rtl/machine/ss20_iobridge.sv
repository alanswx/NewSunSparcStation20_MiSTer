// SPDX-License-Identifier: GPL-2.0-or-later
//
// ss20_iobridge: single interconnect beats (mem_pkg, 64-bit with byte
// enables) onto the 32-bit I/O bus (iobus_pkg) of the system control space
// and the SBus, and the decoder in front of the I/O slaves
// (docs/arch/bus.md, docs/arch/memory-map.md).
//
// A beat with enables in one word is one I/O beat at that word; a
// doubleword (enables in both) is a pair, the high word first (pair = 1),
// as an SBus double-word. A read returns its word(s) in their lanes of the
// doubleword.
//
// The decoder gives each slave the request with req gated by its select,
// and passes the selected slave's answer back:
// The interconnect's PA is doubleword-aligned for single beats (the
// enables say which bytes): a beat's address is the word's, plus the
// offset of its first enabled byte (bus.md: a byte device takes the lane
// its address selects).
//
//   0xF_F100_0000  slave 0  keyboard/mouse ESCC
//   0xF_F110_0000  slave 1  ttya/ttyb ESCC
//   0xF_F120_0000  slave 2  M48T08 (NVRAM/TOD)
//   0xF_F130_0000  slave 3  counter/timers
//   0xF_F140_0000  slave 4  interrupt controller
//   0xF_F16, F18, F1A, F1F  slave 5  system registers (slavio_misc)
//   0xE_F000_0000-0xE_FFFF_FFFF   slave 6  the SBus slot F devices
//   0xE_2000_0000-0xE_2FFF_FFFF   slave 7  slot 2 (the TCX)
//   0xF_E000_0000-0xF_E00F_FFFF   slave 8  the MSI (IOMMU, M-to-S, MID)
// The rest of the control space and slot E read 0 and ignore writes
// (DEC-3): the EMC, the floppy, the module control space. The
// empty SBus slots 0, 1, 3 and the spaces PA[35:32] = 1-D time out with
// err after TIMEOUT cycles (B1, A3). Slaves 6 and 7 are ports for the
// phases that bring their devices (7 and 6); unconnected, tie their
// responses to an immediate ack of 0.

module ss20_iobridge
  import mem_pkg::*;
  #(
  parameter int TIMEOUT = 64,
  parameter int NS      = 9               // slaves
)(
  input  logic                 clk,
  input  logic                 rst,

  input  mem_req_t             req_i,       // single beats (no bursts)
  output mem_rsp_t             rsp_o,

  output iobus_pkg::iob_req_t  io_o [NS],   // to each slave; addr = PA[27:0]
  input  iobus_pkg::iob_rsp_t  io_i [NS]
);

  // ----------------------------------------------------------------- decode
  // 0..NS-1 a slave, R0 reads 0, TO times out
  localparam logic [3:0] R0 = 4'd14, TO = 4'd15;
  logic [3:0] sel;
  always_comb begin
    sel = R0;
    if (req_i.pa[35:32] == 4'hF) begin
      case (req_i.pa[31:20])
        12'hF10: sel = 4'd0;
        12'hF11: sel = 4'd1;
        12'hF12: sel = 4'd2;
        12'hF13: sel = 4'd3;
        12'hF14: sel = 4'd4;
        12'hF16, 12'hF18, 12'hF1A, 12'hF1F: sel = 4'd5;
        12'hE00: sel = 4'd8;
        default: sel = R0;
      endcase
    end else if (req_i.pa[35:32] == 4'hE) begin
      case (req_i.pa[31:28])
        4'h2:    sel = 4'd7;
        4'hF:    sel = 4'd6;
        4'hE:    sel = R0;
        default: sel = TO;                // the empty slots
      endcase
    end else begin
      sel = TO;                           // reserved and VME spaces: no answer
    end
  end

  // ------------------------------------------------------------ the beats
  typedef enum logic [1:0] {B_IDLE, B_HI, B_LO, B_GAP} bstate_t;
  bstate_t bs;
  logic        hi, lo;
  logic [31:0] hi_data;
  logic [7:0]  tcount;
  logic        go;                        // a beat is out to a slave (or to the time-out)

  assign hi = req_i.be[7:4] != 4'h0;
  assign lo = req_i.be[3:0] != 4'h0;

  /* verilator lint_off UNUSEDSIGNAL */   // (be[0]: the last byte, the default)
  function automatic logic [1:0] first_byte(input logic [3:0] be);
    if (be[3]) return 2'd0;
    if (be[2]) return 2'd1;
    if (be[1]) return 2'd2;
    return 2'd3;
  endfunction
  /* verilator lint_on UNUSEDSIGNAL */

  iobus_pkg::iob_req_t beat;
  always_comb begin
    beat = '0;
    beat.req   = bs == B_HI || bs == B_LO;
    beat.we    = req_i.write;
    // the interconnect's PA is doubleword-aligned (the caches send the
    // bytes as enables); byte devices decode the byte's own address, the
    // first enabled byte of the word
    beat.addr  = {req_i.pa[27:3], bs == B_LO, first_byte(bs == B_LO ? req_i.be[3:0] : req_i.be[7:4])};
    beat.be    = bs == B_LO ? req_i.be[3:0] : req_i.be[7:4];
    beat.wdata = bs == B_LO ? req_i.wdata[31:0] : req_i.wdata[63:32];
    beat.pair  = hi && lo;
  end
  assign go = beat.req;

  always_comb begin
    for (int k = 0; k < NS; k++) begin
      io_o[k] = beat;
      io_o[k].req = beat.req && sel == 4'(k);
    end
  end

  // the selected slave's answer, or the decoder's own
  logic        b_ack, b_err;
  logic [31:0] b_rdata;
  always_comb begin
    b_ack = 1'b0; b_err = 1'b0; b_rdata = '0;
    if (sel < 4'(NS)) begin
      for (int k = 0; k < NS; k++)
        if (sel == 4'(k)) begin b_ack = io_i[k].ack; b_err = io_i[k].err; b_rdata = io_i[k].rdata; end
    end else if (sel == R0) begin
      b_ack = go && tcount == 8'd1;       // a registered answer: the cycle after the beat starts
    end else begin
      b_err = go && tcount == 8'(TIMEOUT);
    end
  end

  always_ff @(posedge clk) begin
    rsp_o <= '0;
    if (rst) begin
      bs <= B_IDLE;
      hi_data <= '0;
      tcount <= '0;
    end else begin
      tcount <= go && !(b_ack || b_err) ? tcount + 8'd1 : 8'd0;
      case (bs)
        B_IDLE: if (req_i.valid) bs <= hi ? B_HI : B_LO;
        B_HI: begin
          if (b_err) begin
            rsp_o.ack <= 1'b1; rsp_o.err <= 1'b1;
            bs <= B_GAP;
          end else if (b_ack) begin
            if (lo) begin
              hi_data <= b_rdata;
              bs <= B_LO;
            end else begin
              rsp_o.ack <= 1'b1;
              rsp_o.rdata <= {b_rdata, 32'd0};
              bs <= B_GAP;
            end
          end
        end
        B_LO: begin
          if (b_err) begin
            rsp_o.ack <= 1'b1; rsp_o.err <= 1'b1;
            bs <= B_GAP;
          end else if (b_ack) begin
            rsp_o.ack <= 1'b1;
            rsp_o.rdata <= {hi ? hi_data : 32'd0, b_rdata};
            bs <= B_GAP;
          end
        end
        default: bs <= B_IDLE;            // the master drops the finished request
      endcase
    end
  end

`ifndef SYNTHESIS
  // +iolog: every I/O beat as it completes (simulation)
  logic iolog;
  initial iolog = $test$plusargs("iolog");
  always_ff @(posedge clk)
    if (iolog && go && (b_ack || b_err))
      $display("io: %s sel=%0d pa=%09x addr=%07x be=%x %s=%08x%s", beat.we ? "W" : "R", sel, req_i.pa,
               beat.addr, beat.be, beat.we ? "wd" : "rd", beat.we ? beat.wdata : b_rdata, b_err ? " ERR" : "");
`endif

  logic unused_ok;
  assign unused_ok = &{1'b0, req_i.burst, req_i.lock};

endmodule
