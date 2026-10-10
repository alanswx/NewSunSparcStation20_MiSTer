// SPDX-License-Identifier: GPL-2.0-or-later
// plomb_slave_model — a behavioural PLOMB slave for cpu_sim's +plomb mode.
//
// It queues the word beats plomb_master issues, performs each one as a
// single-beat mem_pkg request on cpu_sim's interconnect model (the high word
// of a doubleword in lanes 7:4, the low word in 3:0) and returns the
// responses in request order, several outstanding. With jitter it stalls
// the acceptance and the responses at random. Same reading of PLOMB as
// plomb_master (the old core's bus package only): a beat is accepted on
// req & ack, answered once with dreq & dack.

module plomb_slave_model
  import mem_pkg::*;
#(
  parameter int DEPTH = 16
)(
  input  logic        clk,
  input  logic        rst,
  input  logic        jitter,

  input  logic        pb_req,
  input  logic [31:0] pb_a,
  input  logic [3:0]  pb_ah,
  input  logic [31:0] pb_d,
  input  logic [3:0]  pb_be,
  input  logic [1:0]  pb_mode,
  input  logic        pb_dack,
  output logic        pb_ack,
  output logic        pb_dreq,
  output logic [31:0] pb_rd,
  output logic [1:0]  pb_code,

  output mem_req_t    mem_req_o,
  input  mem_rsp_t    mem_rsp_i
);
  typedef struct packed {
    logic        write;
    logic [35:0] pa;
    logic [3:0]  be;
    logic [31:0] d;
  } beat_t;
  typedef struct packed {
    logic [31:0] d;
    logic [1:0]  code;
  } rsp_t;

  beat_t rq [0:DEPTH-1];
  rsp_t  rs [0:DEPTH-1];
  int    rq_w, rq_r, rq_n;
  int    rs_w, rs_r, rs_n;

  logic [15:0] lfsr;
  always_ff @(posedge clk)
    if (rst) lfsr <= 16'hACE1;
    else lfsr <= {lfsr[14:0], lfsr[15] ^ lfsr[13] ^ lfsr[12] ^ lfsr[10]};

  assign pb_ack  = rq_n < DEPTH && (!jitter || lfsr[0] || lfsr[1]);
  assign pb_dreq = rs_n != 0 && (!jitter || lfsr[5] || lfsr[6]);
  assign pb_rd   = rs[rs_r].d;
  assign pb_code = rs[rs_r].code;

  // ---- serving the head of the request queue on the interconnect ----
  logic  serving;
  beat_t head;
  assign head = rq[rq_r];
  always_comb begin
    mem_req_o       = '0;
    mem_req_o.valid = serving;
    mem_req_o.write = head.write;
    mem_req_o.pa    = head.pa;
    mem_req_o.be    = head.pa[2] ? {4'h0, head.be} : {head.be, 4'h0};
    mem_req_o.wdata = {head.d, head.d};
  end

  logic take, give, done;
  assign take = pb_req && pb_ack;
  assign give = pb_dreq && pb_dack;
  assign done = serving && mem_rsp_i.ack;

  always_ff @(posedge clk) begin
    if (rst) begin
      rq_w <= 0; rq_r <= 0; rq_n <= 0; rs_w <= 0; rs_r <= 0; rs_n <= 0; serving <= 1'b0;
    end else begin
      if (take) begin
        rq[rq_w] <= '{write: pb_mode[0], pa: {pb_ah, pb_a[31:2], 2'b00}, be: pb_be, d: pb_d};
        rq_w <= (rq_w + 1) % DEPTH;
      end
      if (done) begin
        rs[rs_w] <= '{d: head.pa[2] ? mem_rsp_i.rdata[31:0] : mem_rsp_i.rdata[63:32],
                      code: mem_rsp_i.err ? 2'b01 : 2'b00};
        rs_w <= (rs_w + 1) % DEPTH;
        rq_r <= (rq_r + 1) % DEPTH;
        serving <= 1'b0;
      end else if (!serving && rq_n != 0 && rs_n < DEPTH - 1) begin
        serving <= 1'b1;
      end
      if (give) rs_r <= (rs_r + 1) % DEPTH;
      rq_n <= rq_n + (take ? 1 : 0) - (done ? 1 : 0);
      rs_n <= rs_n + (done ? 1 : 0) - (give ? 1 : 0);
    end
  end
endmodule
