// SPDX-License-Identifier: GPL-2.0-or-later
//
// l1cache: one of the two L1 caches of the CPU module (docs/arch/mmu.md
// §3), with the SuperSPARC geometry so that the diagnostic image is the
// one the PROM expects:
//   ICACHE = 1: 20 KB, 5 ways x 64 sets x 64-byte lines, a valid bit per
//               32-byte half-line, filled by half-line; honours every snoop
//   ICACHE = 0: 16 KB, 4 ways x 128 sets x 32-byte lines; write-through,
//               no write-allocate; ignores its own module's snoops (it
//               updates its line on a write hit instead)
// Physically tagged (PA[35:12]); the set index is within the page offset.
// Data, tags (with the valid bits and the D-cache's D/S image bits) and
// the per-set MRU/lock words are all in RAM, each with a lookup read port
// and a second port for fills, snoops, diagnostics and the flash sweeps;
// nothing is indexed dynamically in flops.
//
// From: the Viking (TMS390Z50) user documentation §4.7 (I-cache: 5-way,
//   64-byte lines with two valid bits, replacement by MRU history and lock
//   bits, "fills line 4 first"), §4.8 (D-cache), §4.7.6/§4.8.6 (the
//   diagnostic ASIs 0x0C-0x0F: address fields, PTAG/STAG formats) and
//   §4.7.6.1/§4.8.6.1 (flash clear by VA[31]); Sun-4M System Architecture
//   §7.3 (write-invalidate coherence); tests/cpu (t_cache*, t_cache_diag,
//   t_flash_clear, t_selfmod, t_cache_fill_words) as the acceptance tests.
//
// The CPU side holds req_i until done_o; a read hit answers in the cycle
// after the request (the compare cycle) and the next request may be
// presented in that same cycle. A cacheable read fills on a miss (a 32-byte
// burst) and answers after the last beat; a write goes to memory and
// updates a hit line; an atomic drops the line and does a locked read then
// the write; an uncacheable access is a single beat. A snoop or line
// invalidation reads the set's tags on the second port and clears the
// matching valid bit; a snoop that hits a line being filled stops that
// fill from being validated. A flash clear sweeps the tag (or lock) words
// of every set, two cycles a set, with the CPU side held off meanwhile
// (flash_busy_o).

module l1cache
  import mmu_pkg::*;
#(
  parameter bit ICACHE = 1'b1
)(
  input  logic        clk,
  input  logic        rst,
  input  logic        enable_i,
  input  logic [3:0]  mid_i,

  // CPU side
  input  logic        req_i,
  input  logic        we_i,
  input  logic        atomic_i,
  input  logic        cacheable_i,
  input  logic [35:0] pa_i,
  input  logic [8:0]  idx_i,         // = the VA's [11:3]: the RAM index, so that it does not wait for the TLB
  input  logic [7:0]  be_i,
  input  logic [63:0] wdata_i,
  output logic        done_o,
  output logic [63:0] rdata_o,
  output logic        err_o,

  // Line invalidation (the flush ASIs) and the snoop broadcast
  input  logic        inval_i,
  input  logic [35:5] inval_line_i,
  input  mem_pkg::snoop_t snoop_i,

  // Flash clear: valid+MRU bits, lock bits (a sweep; busy meanwhile)
  input  logic        flash_v_i,
  input  logic        flash_l_i,
  output logic        flash_busy_o,

  // Diagnostic access (ASI 0x0C-0x0F), held until done
  input  logic        diag_req_i,
  input  logic        diag_we_i,
  input  logic        diag_tag_i,
  input  logic [31:0] diag_va_i,
  input  logic [63:0] diag_wdata_i,
  output logic        diag_done_o,
  output logic [63:0] diag_rdata_o,

  // Memory port
  output mem_pkg::mem_req_t mem_req_o,
  input  mem_pkg::mem_rsp_t mem_rsp_i
);

  localparam int WAYS    = ICACHE ? 5 : 4;
  localparam int SETS    = ICACHE ? 64 : 128;
  localparam int SET_LSB = ICACHE ? 6 : 5;       // line offset bits
  localparam int SET_W   = ICACHE ? 6 : 7;
  localparam int WW      = ICACHE ? 3 : 2;       // way index width

  // The tag word: [23:0] PA[35:12]; I-cache [24] V of half-line 0, [25] V of
  // half-line 1; D-cache [24] V, [25] D, [26] S (image bits, never set here)
  localparam logic [31:0] TAG_VMASK = ICACHE ? 32'h0300_0000 : 32'h0100_0000;
  // The set word: [7:0] lock bits, [15:8] MRU bits (bit n = way n)

  // ---------------------------------------------------------------------
  // Storage
  // ---------------------------------------------------------------------
  logic [8:0]        da_addr, db_addr;
  logic              db_we;
  logic [7:0]        db_be;
  logic [63:0]       db_wdata;
  logic [63:0]       da_rdata [WAYS];
  logic [63:0]       db_rdata [WAYS];
  logic [WAYS-1:0]   db_we_way;

  logic [SET_W-1:0]  ta_addr, tb_addr;
  logic [WAYS-1:0]   tb_we_way;
  logic [31:0]       tb_wdata [WAYS];
  logic [31:0]       ta_rdata [WAYS];
  logic [31:0]       tb_rdata [WAYS];

  logic [SET_W-1:0]  sa_addr, sb_addr;
  logic              sb_we;
  logic [15:0]       sb_wdata, sa_rdata, sb_rdata;

  genvar w;
  generate
    for (w = 0; w < WAYS; w++) begin : g_way
      ram_2r1w_be #(.AW(9), .BYTES(8)) u_data (
        .clk,
        .a_addr(da_addr), .a_rdata(da_rdata[w]),
        .b_addr(db_addr), .b_we(db_we & db_we_way[w]), .b_be(db_be), .b_wdata(db_wdata), .b_rdata(db_rdata[w]));
      ram_2r1w_be #(.AW(SET_W), .BYTES(4)) u_tag (
        .clk,
        .a_addr(ta_addr), .a_rdata(ta_rdata[w]),
        .b_addr(tb_addr), .b_we(tb_we_way[w]), .b_be(4'hF), .b_wdata(tb_wdata[w]), .b_rdata(tb_rdata[w]));
    end
  endgenerate
  ram_2r1w_be #(.AW(SET_W), .BYTES(2)) u_stag (
    .clk,
    .a_addr(sa_addr), .a_rdata(sa_rdata),
    .b_addr(sb_addr), .b_we(sb_we), .b_be(2'b11), .b_wdata(sb_wdata), .b_rdata(sb_rdata));

  /* verilator lint_off UNUSEDSIGNAL */
  // the valid bit of a tag word for the (half-)line at pa
  function automatic logic tag_v(input logic [31:0] word, input logic [35:0] pa);
    if (ICACHE) return pa[5] ? word[25] : word[24];
    else return word[24];
  endfunction
  function automatic logic tag_any_v(input logic [31:0] word);
    return |(word & TAG_VMASK);
  endfunction
  function automatic logic [31:0] vbit_of(input logic [35:0] pa);
    if (ICACHE) return pa[5] ? 32'h0200_0000 : 32'h0100_0000;
    else return 32'h0100_0000;
  endfunction
  /* verilator lint_on UNUSEDSIGNAL */

  // ---------------------------------------------------------------------
  // The request
  // ---------------------------------------------------------------------
  typedef enum logic [3:0] {
    S_IDLE, S_LOOKUP, S_FILL_START, S_FILL, S_WRITE_WAIT, S_SINGLE, S_ATOMIC_RD, S_ATOMIC_WR, S_DONE
  } state_t;
  state_t      st;
  logic        r_we, r_atomic, r_cacheable;
  logic [35:0] r_pa;
  logic [7:0]  r_be;
  logic [63:0] r_wdata;
  logic [SET_W-1:0] r_set;
  logic [1:0]  fill_beat;
  logic [63:0] fill_data;        // the demand doubleword
  logic        fill_err, fill_snooped;
  logic [WW-1:0] fill_way;
  logic [31:0] fill_tag_start, fill_tag_end;   // the victim's tag word at the start and at the end of the fill
  logic        st_hit_written;
  logic        single_lock;

  assign r_set = r_pa[11:SET_LSB];

  // Tag compare in S_LOOKUP (port A outputs are from the accept cycle)
  logic [WAYS-1:0] hit_way;
  logic            hit;
  logic [WW-1:0]   hit_idx;
  always_comb begin
    hit_way = '0;
    for (int i = 0; i < WAYS; i++)
      hit_way[i] = (ta_rdata[i][23:0] == r_pa[35:12]) && tag_v(ta_rdata[i], r_pa);
    hit = |hit_way;
    hit_idx = '0;
    for (int i = WAYS - 1; i >= 0; i--) if (hit_way[i]) hit_idx = WW'(i);
  end
  // A way holding the same tag with a valid half-line (I-cache: the fill joins it)
  logic [WAYS-1:0] tag_way;
  logic            tag_present;
  logic [WW-1:0]   tag_idx;
  always_comb begin
    tag_way = '0;
    for (int i = 0; i < WAYS; i++)
      tag_way[i] = ICACHE && (ta_rdata[i][23:0] == r_pa[35:12]) && tag_any_v(ta_rdata[i]);
    tag_present = |tag_way;
    tag_idx = '0;
    for (int i = WAYS - 1; i >= 0; i--) if (tag_way[i]) tag_idx = WW'(i);
  end

  // The set's lock and MRU bits (port A, read in the accept cycle)
  logic [WAYS-1:0] cur_lck, cur_mru;
  assign cur_lck = sa_rdata[WAYS-1:0];
  assign cur_mru = sa_rdata[8 +: WAYS];

  // The victim: an unlocked way with no valid (half-)line, else the
  // highest unlocked way without history (Viking fills line 4 first)
  logic [WW-1:0] victim;
  always_comb begin
    victim = '0;
    for (int i = 0; i < WAYS; i++) if (!cur_lck[i] && !cur_mru[i]) victim = WW'(i);
    for (int i = 0; i < WAYS; i++) if (!cur_lck[i] && !tag_any_v(ta_rdata[i])) victim = WW'(i);
    if (tag_present) victim = tag_idx;
  end

  // The MRU word after a use of `way`: set its bit; when every way is used
  // or locked, the others' history goes (Viking §4.7.2)
  function automatic logic [15:0] mru_after(input logic [WAYS-1:0] mru, input logic [WAYS-1:0] lck, input logic [WW-1:0] way);
    logic [WAYS-1:0] onehot, n;
    logic [15:0] word;
    onehot = WAYS'(1) << way;
    n = mru | onehot;
    if (&(n | lck)) n = onehot | (mru & lck);
    word = '0;
    word[WAYS-1:0] = lck;
    word[8 +: WAYS] = n;
    return word;
  endfunction

  // ---------------------------------------------------------------------
  // Snoop / invalidation queue
  // ---------------------------------------------------------------------
  logic [31:0] sq_line [8];        // {force, line[35:5]}: force ignores the mid rule
  logic [2:0]  sq_wr, sq_rd;
  logic [3:0]  sq_count;
  logic        sq_push, sq_push2;
  logic [31:0] sq_in1, sq_in2;
  logic [1:0]  sq_pushes;
  logic        snoop_mine;
  assign snoop_mine = snoop_i.mid == mid_i;
  always_comb begin
    sq_push  = inval_i;
    sq_in1   = {1'b1, inval_line_i};
    sq_push2 = snoop_i.valid && (ICACHE || !snoop_mine);
    sq_in2   = {1'b0, snoop_i.line};
    sq_pushes = {1'b0, sq_push} + {1'b0, sq_push2};
  end
  typedef enum logic [1:0] {Q_IDLE, Q_CMP, Q_WRITE} qstate_t;
  qstate_t     qs;
  logic [31:0] q_cur;
  logic [SET_W-1:0] q_set;
  assign q_set = q_cur[6 -: SET_W];           // line[11:SET_LSB]: line bit k is q_cur[k-5]
  logic [35:0] q_pa;                          // the line as an address, for the valid bit
  assign q_pa = {q_cur[30:0], 5'b00000};
  logic [WAYS-1:0] q_match;
  logic            q_any;
  logic [WW-1:0]   q_idx;
  always_comb begin
    q_match = '0;
    for (int i = 0; i < WAYS; i++) q_match[i] = (tb_rdata[i][23:0] == q_cur[30:7]) && tag_v(tb_rdata[i], q_pa);
    q_any = |q_match;
    q_idx = '0;
    for (int i = WAYS - 1; i >= 0; i--) if (q_match[i]) q_idx = WW'(i);
  end
  logic [WW-1:0] q_way_q;
  logic [31:0]   q_word_q;

  // ---------------------------------------------------------------------
  // The flash sweeps (valid + MRU, or locks): two cycles a set
  // ---------------------------------------------------------------------
  typedef enum logic [1:0] {F_IDLE, F_READ, F_WRITE} fstate_t;
  fstate_t          fs;
  logic             f_kind_l;                 // 1: the lock sweep
  logic [SET_W-1:0] f_set;
  assign flash_busy_o = fs != F_IDLE;

  // ---------------------------------------------------------------------
  // Diagnostic decode
  // ---------------------------------------------------------------------
  logic [WW-1:0]    dg_way;
  logic [SET_W-1:0] dg_set;
  logic [8:0]       dg_daddr;
  logic [1:0]       dg_t;
  logic             dg_way_ok;
  always_comb begin
    dg_t = diag_va_i[31:30];
    if (ICACHE) begin
      dg_way = WW'(diag_va_i[28:26]);
      dg_set = SET_W'(diag_va_i[11:6]);
      dg_daddr = diag_va_i[11:3];
      dg_way_ok = diag_va_i[28:26] < 3'd5;
    end else begin
      dg_way = WW'(diag_va_i[27:26]);
      dg_set = SET_W'(diag_va_i[11:5]);
      dg_daddr = diag_va_i[11:3];
      dg_way_ok = 1'b1;
    end
  end
  typedef enum logic [1:0] {D_IDLE, D_READ, D_DONE} dstate_t;
  dstate_t ds;
  // the PTAG image word to write, from the doubleword of the stda
  logic [31:0] dg_tag_word;
  assign dg_tag_word = ICACHE ? {6'd0, diag_wdata_i[57], diag_wdata_i[56], diag_wdata_i[23:0]}
                              : {5'd0, diag_wdata_i[40], diag_wdata_i[48], diag_wdata_i[56], diag_wdata_i[23:0]};
  logic [15:0] dg_set_word;
  always_comb begin
    dg_set_word = '0;
    dg_set_word[WAYS-1:1] = diag_wdata_i[1 +: WAYS-1];    // lock bits; bit 0 fixed 0
    dg_set_word[8 +: WAYS] = diag_wdata_i[8 +: WAYS];     // MRU bits
  end

  // ---------------------------------------------------------------------
  // Port scheduling
  // ---------------------------------------------------------------------
  // Port A (lookup): the request's index in the accept cycle (from the VA)
  assign da_addr = idx_i;
  assign ta_addr = idx_i[8 -: SET_W];
  assign sa_addr = idx_i[8 -: SET_W];

  logic fill_beat_now;             // a fill beat arrives this cycle
  assign fill_beat_now = st == S_FILL && mem_rsp_i.ack && !mem_rsp_i.err;
  logic st_hit_now;                // a write hit updates the line this cycle
  assign st_hit_now = st == S_WRITE_WAIT && hit && !st_hit_written && r_cacheable;
  logic fill_tag_go, fill_end_go, atomic_inval_go, snoop_rd_go, snoop_wr_go, flash_go, dg_tag_go, dg_data_go, mru_go;
  assign fill_tag_go     = st == S_FILL_START;
  assign fill_end_go     = st == S_DONE && !fill_err && !fill_snooped;
  assign atomic_inval_go = st == S_LOOKUP && r_atomic && hit;
  assign snoop_wr_go     = qs == Q_WRITE;
  assign flash_go        = fs != F_IDLE && !fill_tag_go && !fill_end_go && !atomic_inval_go && !snoop_wr_go;
  assign snoop_rd_go     = qs == Q_IDLE && sq_count != 4'd0 && !fill_tag_go && !fill_end_go && !atomic_inval_go && fs == F_IDLE;
  assign dg_tag_go       = ds == D_IDLE && diag_req_i && diag_tag_i && !fill_tag_go && !fill_end_go && !atomic_inval_go &&
                           !snoop_wr_go && !snoop_rd_go && fs == F_IDLE;
  assign dg_data_go      = ds == D_IDLE && diag_req_i && !diag_tag_i && !fill_beat_now && !st_hit_now;
  assign mru_go          = (st == S_LOOKUP && !r_atomic && hit) || fill_end_go;

  // data port B
  always_comb begin
    db_we = 1'b0; db_addr = '0; db_be = 8'hFF; db_wdata = '0; db_we_way = '0;
    if (fill_beat_now) begin
      db_we = 1'b1; db_addr = {r_pa[11:5], fill_beat}; db_wdata = mem_rsp_i.rdata; db_we_way[fill_way] = 1'b1;
    end else if (st_hit_now) begin
      db_we = 1'b1; db_addr = r_pa[11:3]; db_be = r_be; db_wdata = r_wdata; db_we_way[hit_idx] = 1'b1;
    end else if (dg_data_go) begin
      db_addr = dg_daddr; db_wdata = diag_wdata_i;
      if (diag_we_i && dg_way_ok) begin db_we = 1'b1; db_we_way[dg_way] = 1'b1; end
    end
  end

  // tag port B: fill start/end, an atomic's invalidation, a snoop's read
  // and invalidation, the flash sweep, the diagnostics
  always_comb begin
    tb_addr = '0; tb_we_way = '0;
    for (int i = 0; i < WAYS; i++) tb_wdata[i] = '0;
    if (fill_tag_go) begin
      tb_addr = r_set; tb_we_way[fill_way] = 1'b1; tb_wdata[fill_way] = fill_tag_start;
    end else if (fill_end_go) begin
      tb_addr = r_set; tb_we_way[fill_way] = 1'b1; tb_wdata[fill_way] = fill_tag_end;
    end else if (atomic_inval_go) begin
      tb_addr = r_set; tb_we_way[hit_idx] = 1'b1; tb_wdata[hit_idx] = ta_rdata[hit_idx] & ~vbit_of(r_pa);
    end else if (snoop_wr_go) begin
      tb_addr = q_set; tb_we_way[q_way_q] = 1'b1; tb_wdata[q_way_q] = q_word_q;
    end else if (flash_go) begin
      tb_addr = f_set;
      if (fs == F_WRITE && !f_kind_l) begin
        tb_we_way = '1;
        for (int i = 0; i < WAYS; i++) tb_wdata[i] = tb_rdata[i] & ~TAG_VMASK;
      end
    end else if (snoop_rd_go) begin
      tb_addr = sq_line[sq_rd][6 -: SET_W];
    end else if (dg_tag_go) begin
      tb_addr = dg_set;
      if (diag_we_i && dg_t == 2'd2 && dg_way_ok) begin
        tb_we_way[dg_way] = 1'b1; tb_wdata[dg_way] = dg_tag_word;
      end
    end
  end

  // set-word port B: the MRU update of a hit or a fill, the flash sweep, the diagnostics
  always_comb begin
    sb_we = 1'b0; sb_addr = '0; sb_wdata = '0;
    if (mru_go) begin
      sb_we = 1'b1; sb_addr = r_set;
      sb_wdata = mru_after(cur_mru, cur_lck, (st == S_DONE) ? fill_way : hit_idx);
    end else if (fs != F_IDLE) begin
      sb_addr = f_set;
      if (fs == F_WRITE) begin
        sb_we = 1'b1;
        sb_wdata = f_kind_l ? (sb_rdata & 16'hFF00) : (sb_rdata & 16'h00FF);
      end
    end else if (dg_tag_go) begin
      sb_addr = dg_set;
      if (diag_we_i && dg_t == 2'd1 && dg_way_ok) begin sb_we = 1'b1; sb_wdata = dg_set_word; end
    end
  end

  // ---------------------------------------------------------------------
  // Memory port
  // ---------------------------------------------------------------------
  always_comb begin
    mem_req_o = '0;
    case (st)
      S_FILL: begin
        mem_req_o.valid = 1'b1; mem_req_o.burst = 1'b1;
        mem_req_o.pa = {r_pa[35:5], 5'b00000}; mem_req_o.be = 8'hFF;
      end
      S_WRITE_WAIT: begin
        mem_req_o.valid = 1'b1; mem_req_o.write = 1'b1;
        mem_req_o.pa = {r_pa[35:3], 3'b000}; mem_req_o.be = r_be; mem_req_o.wdata = r_wdata;
      end
      S_SINGLE: begin
        mem_req_o.valid = 1'b1; mem_req_o.write = r_we;
        mem_req_o.pa = {r_pa[35:3], 3'b000}; mem_req_o.be = r_be; mem_req_o.wdata = r_wdata;
        mem_req_o.lock = single_lock;
      end
      S_ATOMIC_RD: begin
        mem_req_o.valid = 1'b1; mem_req_o.lock = 1'b1;
        mem_req_o.pa = {r_pa[35:3], 3'b000}; mem_req_o.be = r_be;
      end
      S_ATOMIC_WR: begin
        mem_req_o.valid = 1'b1; mem_req_o.write = 1'b1;
        mem_req_o.pa = {r_pa[35:3], 3'b000}; mem_req_o.be = r_be; mem_req_o.wdata = r_wdata;
      end
      default: ;
    endcase
  end

  // ---------------------------------------------------------------------
  // State
  // ---------------------------------------------------------------------
  // A read hit answers in its compare cycle, and the next request is taken
  // in that cycle (one lookup per cycle on hits); everything else answers
  // from the registered done/rdata/err. Nothing is taken during a flash sweep.
  logic        done_q, err_q;
  logic [63:0] rdata_q;
  logic        hit_now;
  assign hit_now = st == S_LOOKUP && !r_atomic && hit;
  assign done_o  = done_q | hit_now;
  assign rdata_o = hit_now ? da_rdata[hit_idx] : rdata_q;
  assign err_o   = hit_now ? 1'b0 : err_q;
  logic accept;
  assign accept = req_i && !done_q && (st == S_IDLE || hit_now) && fs == F_IDLE && !flash_v_i && !flash_l_i;

  always_ff @(posedge clk) begin
    done_q <= 1'b0;
    diag_done_o <= 1'b0;
    if (rst) begin
      st <= S_IDLE;
      r_we <= 1'b0; r_atomic <= 1'b0; r_cacheable <= 1'b0; r_pa <= '0; r_be <= '0; r_wdata <= '0;
      fill_beat <= '0; fill_data <= '0; fill_err <= 1'b0; fill_snooped <= 1'b0; fill_way <= '0;
      fill_tag_start <= '0; fill_tag_end <= '0;
      st_hit_written <= 1'b0; single_lock <= 1'b0;
      rdata_q <= '0; err_q <= 1'b0;
      sq_wr <= '0; sq_rd <= '0; sq_count <= '0;
      qs <= Q_IDLE; q_cur <= '0; q_way_q <= '0; q_word_q <= '0;
      fs <= F_IDLE; f_kind_l <= 1'b0; f_set <= '0;
      ds <= D_IDLE; diag_rdata_o <= '0;
    end else begin
      // ---- the request ----
      case (st)
        S_IDLE: ;                         // a request is taken below

        S_LOOKUP: begin
          // the tags, data and set word of the accept cycle are out
          if (r_atomic) begin
            st <= S_ATOMIC_RD;            // the line goes (tag port B); memory has the truth
          end else if (hit) begin
            st <= S_IDLE;                 // the answer is combinational (hit_now); the MRU word is written
          end else begin
            fill_way <= victim;
            // the victim's tag word: the other half-line's valid bit kept when
            // the way already holds this tag (I-cache), else nothing valid
            fill_tag_start <= {8'd0, r_pa[35:12]} |
                              ((tag_present && tag_idx == victim) ? (ta_rdata[victim] & TAG_VMASK & ~vbit_of(r_pa)) : 32'd0);
            fill_tag_end   <= {8'd0, r_pa[35:12]} |
                              ((tag_present && tag_idx == victim) ? (ta_rdata[victim] & TAG_VMASK) : 32'd0) | vbit_of(r_pa);
            st <= S_FILL_START;
          end
        end
        S_FILL_START: begin
          // the victim's tag is written now (port B, not yet valid for this half-line)
          fill_beat <= 2'd0;
          st <= S_FILL;
        end
        S_FILL: begin
          if (mem_rsp_i.ack) begin
            if (mem_rsp_i.err) fill_err <= 1'b1;
            if (fill_beat == r_pa[4:3]) fill_data <= mem_rsp_i.rdata;
            fill_beat <= fill_beat + 2'd1;
            if (fill_beat == 2'd3 || mem_rsp_i.err) st <= S_DONE;
          end
          // a write to this line while it fills: do not keep it
          if ((snoop_i.valid && (ICACHE || !snoop_mine) && snoop_i.line == r_pa[35:5]) ||
              (inval_i && inval_line_i == r_pa[35:5])) fill_snooped <= 1'b1;
        end
        S_DONE: begin
          // validate (the tag word with the valid bit, and the MRU word,
          // written now unless an error or a snoop said no) and answer
          rdata_q <= fill_data;
          err_q <= fill_err;
          done_q <= 1'b1;
          st <= S_IDLE;
        end
        S_WRITE_WAIT: begin
          // the write is on the port; the hit line (tags from the accept cycle) is updated once
          if (st_hit_now) st_hit_written <= 1'b1;
          if (mem_rsp_i.ack) begin
            err_q <= mem_rsp_i.err;
            done_q <= 1'b1;
            st <= S_IDLE;
          end
        end
        S_SINGLE: begin
          if (mem_rsp_i.ack) begin
            rdata_q <= mem_rsp_i.rdata;
            err_q <= mem_rsp_i.err;
            done_q <= 1'b1;
            st <= S_IDLE;
          end
        end
        S_ATOMIC_RD: begin
          if (mem_rsp_i.ack) begin
            rdata_q <= mem_rsp_i.rdata;
            err_q <= mem_rsp_i.err;
            st <= mem_rsp_i.err ? S_IDLE : S_ATOMIC_WR;
            if (mem_rsp_i.err) done_q <= 1'b1;
          end
        end
        S_ATOMIC_WR: begin
          if (mem_rsp_i.ack) begin
            done_q <= 1'b1;
            st <= S_IDLE;
          end
        end
        default: st <= S_IDLE;
      endcase

      // Taking a request (in S_IDLE, or in the cycle a read hit answers)
      if (accept) begin
        r_we <= we_i; r_atomic <= atomic_i; r_cacheable <= cacheable_i && enable_i;
        r_pa <= pa_i; r_be <= be_i; r_wdata <= wdata_i;
        err_q <= 1'b0;
        st_hit_written <= 1'b0;
        fill_err <= 1'b0; fill_snooped <= 1'b0;
        if (atomic_i) st <= S_LOOKUP;
        else if (!(cacheable_i && enable_i)) begin single_lock <= 1'b0; st <= S_SINGLE; end
        else if (we_i) st <= S_WRITE_WAIT;
        else st <= S_LOOKUP;
      end

      // ---- the snoop queue: read the set's tags, compare, clear the valid bit ----
      if (sq_push && sq_push2) begin
        sq_line[sq_wr] <= sq_in1; sq_line[sq_wr + 3'd1] <= sq_in2;
        sq_wr <= sq_wr + 3'd2;
      end else if (sq_push || sq_push2) begin
        sq_line[sq_wr] <= sq_push ? sq_in1 : sq_in2;
        sq_wr <= sq_wr + 3'd1;
      end
      sq_count <= sq_count + {2'd0, sq_pushes} - {3'd0, snoop_rd_go};
      case (qs)
        Q_IDLE: begin
          if (snoop_rd_go) begin
            q_cur <= sq_line[sq_rd];
            sq_rd <= sq_rd + 3'd1;
            qs <= Q_CMP;
          end
        end
        Q_CMP: begin
          // the tags of the set are on port B now
          if (q_any) begin
            q_way_q <= q_idx;
            q_word_q <= tb_rdata[q_idx] & ~vbit_of(q_pa);
            qs <= Q_WRITE;
          end else begin
            qs <= Q_IDLE;
          end
        end
        Q_WRITE: qs <= Q_IDLE;            // the word is written this cycle (snoop_wr_go)
        default: qs <= Q_IDLE;
      endcase

      // ---- the flash sweeps ----
      case (fs)
        F_IDLE: begin
          if (flash_v_i || flash_l_i) begin
            f_kind_l <= flash_l_i && !flash_v_i;
            f_set <= '0;
            fs <= F_READ;
          end
        end
        F_READ: begin
          if (flash_go) fs <= F_WRITE;    // the set's words are read this cycle
        end
        F_WRITE: begin
          if (flash_go) begin             // and written back now, else read again
            f_set <= f_set + 1'b1;
            if (f_set == SET_W'(SETS - 1)) fs <= F_IDLE;
            else fs <= F_READ;
          end else begin
            fs <= F_READ;
          end
        end
        default: fs <= F_IDLE;
      endcase

      // ---- diagnostics ----
      case (ds)
        D_IDLE: begin
          if (dg_data_go || dg_tag_go) begin
            if (diag_we_i) ds <= D_DONE;  // the RAM write is on port B this cycle
            else ds <= D_READ;
          end
        end
        D_READ: begin
          // RAM data from port B is out
          diag_rdata_o <= '0;
          if (!dg_way_ok) diag_rdata_o <= '0;
          else if (!diag_tag_i) diag_rdata_o <= db_rdata[dg_way];
          else if (dg_t == 2'd2) begin
            if (ICACHE) diag_rdata_o <= {6'd0, tb_rdata[dg_way][25], tb_rdata[dg_way][24], 32'd0, tb_rdata[dg_way][23:0]};
            else diag_rdata_o <= {7'd0, tb_rdata[dg_way][24], 7'd0, tb_rdata[dg_way][25], 7'd0, tb_rdata[dg_way][26], 8'd0, 8'd0, tb_rdata[dg_way][23:0]};
          end else if (dg_t == 2'd1) begin
            diag_rdata_o <= '0;
            diag_rdata_o[8 +: WAYS] <= sb_rdata[8 +: WAYS];
            diag_rdata_o[1 +: WAYS-1] <= sb_rdata[WAYS-1:1];
          end
          ds <= D_DONE;
        end
        D_DONE: begin
          diag_done_o <= 1'b1;
          ds <= D_IDLE;
        end
        default: ds <= D_IDLE;
      endcase
    end
  end

  logic unused_ok;
  assign unused_ok = &{1'b0, q_cur[31], r_pa[2:0], diag_va_i[29], diag_va_i[25:12], diag_va_i[2:0], sa_rdata, sb_rdata};

endmodule
