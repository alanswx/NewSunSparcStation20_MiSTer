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
  input  logic        raw,       // reads overtake queued writes (the old core's DDR bridge does this)

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

  // ---- serving the request queue on the interconnect ----
  // In order, or (raw) the oldest queued read first, as in a bridge whose
  // reads bypass its write buffer — but a write is bypassed by at most two
  // reads, so writes still drain while the master keeps reading (a real
  // write buffer drains on its own). A served read is marked done in place
  // (its slot is skipped when it reaches the head).
  logic  serving;
  beat_t head;
  logic  done_slot [0:DEPTH-1];
  int    pick;                       // the slot to serve next
  int    sel;                        // the slot being served (latched while serving)
  int    bypassed;                   // reads served ahead of the head write
  always_comb begin
    pick = rq_r;
    if (raw && bypassed < 2) begin
      for (int k = DEPTH - 1; k >= 0; k--) begin                // the oldest read wins (last assignment)
        if (k < rq_n && !rq[(rq_r + k) % DEPTH].write && !done_slot[(rq_r + k) % DEPTH]) pick = (rq_r + k) % DEPTH;
      end
    end
  end
  assign head = rq[sel];
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

  // The head slot may already be done (served early as a read): drop it.
  logic drop;
  assign drop = rq_n != 0 && done_slot[rq_r] && !(done && sel == rq_r);

  always_ff @(posedge clk) begin
    if (rst) begin
      rq_w <= 0; rq_r <= 0; rq_n <= 0; rs_w <= 0; rs_r <= 0; rs_n <= 0; serving <= 1'b0; bypassed <= 0; sel <= 0;
      for (int k = 0; k < DEPTH; k++) done_slot[k] <= 1'b0;
    end else begin
      if (done) bypassed <= (sel == rq_r) ? 0 : bypassed + 1;
      if (take) begin
        rq[rq_w] <= '{write: pb_mode[0], pa: {pb_ah, pb_a[31:2], 2'b00}, be: pb_be, d: pb_d};
        done_slot[rq_w] <= 1'b0;
        rq_w <= (rq_w + 1) % DEPTH;
      end
      if (done) begin
        if (!head.write) begin               // a posted write (mode 01) gets no response
          rs[rs_w] <= '{d: head.pa[2] ? mem_rsp_i.rdata[31:0] : mem_rsp_i.rdata[63:32],
                        code: mem_rsp_i.err ? 2'b01 : 2'b00};
          rs_w <= (rs_w + 1) % DEPTH;
        end
        if (sel == rq_r) rq_r <= (rq_r + 1) % DEPTH;
        else done_slot[sel] <= 1'b1;
        serving <= 1'b0;
      end else if (drop) begin
        rq_r <= (rq_r + 1) % DEPTH;
      end else if (!serving && rq_n != 0 && rs_n < DEPTH - 1 && !done_slot[pick]) begin
        serving <= 1'b1;
        sel <= pick;
      end
      if (give) rs_r <= (rs_r + 1) % DEPTH;
      rq_n <= rq_n + (take ? 1 : 0) - ((done && sel == rq_r) || drop ? 1 : 0);
      rs_n <= rs_n + ((done && !head.write) ? 1 : 0) - (give ? 1 : 0);
    end
  end
endmodule
