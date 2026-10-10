// SPDX-License-Identifier: GPL-2.0-or-later
// plomb_master — a mem_pkg master on the old core's PLOMB bus (the CPU
// hybrid's shim).
//
// Written from: the old core's bus package only (rtl/plomb/plomb_pack.vhd:
// the type_plomb_w / type_plomb_r records and the mode, burst and code
// constants), docs/arch/bus.md (mem_pkg) and docs/sessions/HANDOFF-20261009.md.
// Not part of the new core: it exists so that cpu_module can be proven inside
// the old core on the board before the new interconnect exists.
//
// PLOMB as used here: a request beat is accepted when req and ack are both
// high; every accepted read, and every write with acknowledge, gets exactly
// one response beat later (dreq high with d and code), in request order, any
// number outstanding; this master's dack is always high. Every beat is a
// single (burst code 00): a mem_pkg doubleword is two word beats (high word
// first), a 32-byte line eight. Word data is big endian: be[3] is the byte
// at a+0, carried in d[31:24], which the VHDL side maps to be(0) by position.
// Reads carry their byte enables too (the I/O devices decode with them).
//
// Responses: a pair of words makes one mem_pkg beat (error if either word
// failed); a lone word is returned in both halves. After an error has been
// reported the requester has dropped the request, so the remaining responses
// of a line are drained silently. The request is latched at acceptance, so
// the beats still in flight keep their fields whatever the requester does.
// Every acknowledged write beat is announced on snoop_o with MID (the
// instruction cache invalidates on its own stores).

module plomb_master
  import mem_pkg::*;
#(
  parameter logic [3:0] MID = 4'd8,
  parameter logic [7:0] ASI = 8'h20
)(
  input  logic        clk,
  input  logic        rst,

  input  mem_req_t    req_i,
  output mem_rsp_t    rsp_o,
  output snoop_t      snoop_o,

  // master -> slave (type_plomb_w without req/dack semantics changed)
  output logic        pb_req,
  output logic [31:0] pb_a,
  output logic [3:0]  pb_ah,
  output logic [7:0]  pb_asi,
  output logic [31:0] pb_d,
  output logic [3:0]  pb_be,
  output logic [1:0]  pb_mode,      // 10 read, 11 write with acknowledge
  output logic [1:0]  pb_burst,     // 00: single
  output logic        pb_cont,
  output logic        pb_cache,
  output logic        pb_lock,
  output logic        pb_dack,
  // slave -> master (type_plomb_r)
  input  logic        pb_ack,
  input  logic        pb_dreq,
  input  logic [31:0] pb_rd,
  input  logic [1:0]  pb_code       // 00 = OK, anything else an error
);
  typedef enum logic [1:0] {S_IDLE, S_RUN, S_FIN} st_t;
  st_t st;

  mem_req_t rq;                      // the request, latched at acceptance

  // The beats of the request: a line is eight words; a single is the high
  // word, the low word or both, as the byte enables say.
  logic       has_hi, has_lo;
  logic [3:0] n_beats;
  assign has_hi  = rq.burst || rq.be[7:4] != 4'h0;
  assign has_lo  = rq.burst || rq.be[3:0] != 4'h0;
  assign n_beats = rq.burst ? 4'd8 : {3'd0, has_hi} + {3'd0, has_lo};

  function automatic logic beat_is_hi(input logic [3:0] i);   // the high word of its doubleword
    if (rq.burst) return ~i[0];
    return i == 4'd0 && has_hi;
  endfunction
  function automatic logic [35:0] beat_pa(input logic [3:0] i);
    if (rq.burst) return {rq.pa[35:5], i[2:0], 2'b00};
    return {rq.pa[35:3], ~beat_is_hi(i), 2'b00};
  endfunction

  logic [3:0]  iss, rcv;             // beats issued, responses received
  logic        iss_hi, rcv_hi;
  logic [35:0] iss_pa, rcv_pa;
  assign iss_hi = beat_is_hi(iss);
  assign rcv_hi = beat_is_hi(rcv);
  assign iss_pa = beat_pa(iss);
  assign rcv_pa = beat_pa(rcv);

  logic issue;
  assign issue    = st == S_RUN && iss < n_beats;
  assign pb_req   = issue;
  assign pb_a     = iss_pa[31:0];
  assign pb_ah    = iss_pa[35:32];
  assign pb_asi   = ASI;
  assign pb_d     = iss_hi ? rq.wdata[63:32] : rq.wdata[31:0];
  assign pb_be    = rq.burst ? 4'hF : iss_hi ? rq.be[7:4] : rq.be[3:0];
  assign pb_mode  = {1'b1, rq.write};
  assign pb_burst = 2'b00;
  assign pb_cont  = 1'b0;
  assign pb_cache = mmu_pkg::cacheable_pa(rq.pa);
  assign pb_lock  = rq.lock;
  assign pb_dack  = 1'b1;

  logic        got, got_err, last;
  assign got     = st == S_RUN && pb_dreq;
  assign got_err = pb_code != 2'b00;
  assign last    = got && rcv == n_beats - 4'd1;

  logic        err_acc;            // a write's errors so far; a read pair's high-word error
  logic [31:0] hi_q;               // the high word of the pair being assembled
  logic        aborted;            // an error went out: the requester has dropped the request
  logic        ack_q, err_q;
  logic [63:0] rdata_q;

  assign rsp_o.ack   = ack_q;
  assign rsp_o.err   = err_q;
  assign rsp_o.rdata = rdata_q;

  always_ff @(posedge clk) begin
    ack_q   <= 1'b0;
    snoop_o <= '0;
    if (rst) begin
      st <= S_IDLE; iss <= '0; rcv <= '0; aborted <= 1'b0; err_acc <= 1'b0;
      err_q <= 1'b0; rdata_q <= '0; hi_q <= '0; rq <= '0;
    end else begin
      case (st)
        S_IDLE: if (req_i.valid) begin
          rq <= req_i;
          st <= S_RUN; iss <= '0; rcv <= '0; aborted <= 1'b0; err_acc <= 1'b0;
        end
        S_RUN: begin
          if (pb_req && pb_ack) iss <= iss + 4'd1;
          if (got) begin
            rcv <= rcv + 4'd1;
            if (rq.write) begin
              err_acc <= err_acc | got_err;
              snoop_o.valid <= 1'b1;
              snoop_o.line  <= rcv_pa[35:5];
              snoop_o.mid   <= MID;
              if (last) begin
                ack_q <= 1'b1; err_q <= err_acc | got_err; rdata_q <= '0;
              end
            end else if (rcv_hi && n_beats != 4'd1) begin
              hi_q <= pb_rd; err_acc <= got_err;
            end else if (!aborted) begin
              ack_q   <= 1'b1;
              err_q   <= got_err | (n_beats != 4'd1 && err_acc);
              rdata_q <= n_beats == 4'd1 ? {pb_rd, pb_rd} : {hi_q, pb_rd};
              if (got_err || (n_beats != 4'd1 && err_acc)) aborted <= 1'b1;
            end
            if (last) st <= S_FIN;
          end
        end
        S_FIN: st <= S_IDLE;        // the ack cycle: the requester drops or replaces its request after it
        default: st <= S_IDLE;
      endcase
    end
  end
endmodule
