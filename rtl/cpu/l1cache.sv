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
// Data and tags in RAM (a lookup read port and a write/read port), the
// valid/MRU/lock bits in flops.
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
// presented in that same cycle. A cacheable read fills on a miss
// (a 32-byte burst) and answers after the last beat; a write goes to
// memory and updates a hit line; an atomic drops the line and does a
// locked read then the write; an uncacheable access is a single beat.
// A snoop or line invalidation reads the set's tags on the second RAM
// port and clears the matching valid bit(s); a snoop that hits a line
// being filled stops that fill from being validated.

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

  // Flash clear: valid+MRU bits, lock bits
  input  logic        flash_v_i,
  input  logic        flash_l_i,

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
  localparam int SUB     = ICACHE ? 2 : 1;        // valid bits per line
  localparam int VW      = SET_W + (ICACHE ? 1 : 0);   // valid-bit index width
  localparam int WW      = ICACHE ? 3 : 2;              // way index width

  // ---------------------------------------------------------------------
  // Storage
  // ---------------------------------------------------------------------
  // data: 512 doublewords per way, addressed by pa[11:3] (set and
  // doubleword); tags: one 32-bit word per set per way: {6'b0, D, S, tag[23:0]}
  logic [8:0]        da_addr, db_addr;
  logic              db_we;
  logic [7:0]        db_be;
  logic [63:0]       db_wdata;
  logic [63:0]       da_rdata [WAYS];
  logic [63:0]       db_rdata [WAYS];
  logic [WAYS-1:0]   db_we_way;

  logic [SET_W-1:0]  ta_addr, tb_addr;
  logic              tb_we;
  logic [31:0]       tb_wdata;
  logic [31:0]       ta_rdata [WAYS];
  logic [31:0]       tb_rdata [WAYS];
  logic [WAYS-1:0]   tb_we_way;

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
        .b_addr(tb_addr), .b_we(tb_we & tb_we_way[w]), .b_be(4'hF), .b_wdata(tb_wdata), .b_rdata(tb_rdata[w]));
    end
  endgenerate

  logic [(SETS*SUB)-1:0] vbits [WAYS];
  logic [WAYS-1:0]       mru [SETS];
  logic [WAYS-1:0]       lck [SETS];

  /* verilator lint_off UNUSEDSIGNAL */
  function automatic logic [VW-1:0] vidx(input logic [35:0] pa);
    if (ICACHE) return {pa[11:6], pa[5]};
    else return pa[11:5];
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
  logic [WW-1:0]  fill_way;
  logic        st_hit_written;
  logic        single_lock;

  assign r_set = r_pa[11:SET_LSB];

  // Tag compare in S_LOOKUP (port A outputs are from the accept cycle)
  logic [WAYS-1:0] hit_way;
  logic            hit;
  logic [WW-1:0]      hit_idx;
  always_comb begin
    hit_way = '0;
    for (int i = 0; i < WAYS; i++)
      hit_way[i] = (ta_rdata[i][23:0] == r_pa[35:12]) && vbits[i][vidx(r_pa)];
    hit = |hit_way;
    hit_idx = '0;
    for (int i = WAYS - 1; i >= 0; i--) if (hit_way[i]) hit_idx = WW'(i);
  end
  // A way holding the same tag (for the I-cache: the other half-line valid)
  logic [WAYS-1:0] tag_way;
  logic            tag_present;
  logic [WW-1:0]      tag_idx;
  always_comb begin
    tag_way = '0;
    for (int i = 0; i < WAYS; i++) begin
      if (ICACHE) tag_way[i] = (ta_rdata[i][23:0] == r_pa[35:12]) && (vbits[i][VW'({r_pa[11:6], 1'b0})] || vbits[i][VW'({r_pa[11:6], 1'b1})]);
      else tag_way[i] = 1'b0;
    end
    tag_present = |tag_way;
    tag_idx = '0;
    for (int i = WAYS - 1; i >= 0; i--) if (tag_way[i]) tag_idx = WW'(i);
  end

  // The victim: an unlocked way with no valid (half-)line, else the
  // highest unlocked way without history (Viking fills line 4 first)
  logic [WW-1:0] victim;
  always_comb begin
    victim = '0;
    for (int i = 0; i < WAYS; i++) if (!lck[r_set][i] && !mru[r_set][i]) victim = WW'(i);
    for (int i = 0; i < WAYS; i++) begin
      if (!lck[r_set][i] && (ICACHE ? !(vbits[i][VW'({r_set, 1'b0})] || vbits[i][VW'({r_set, 1'b1})]) : !vbits[i][VW'(r_set)]))
        victim = WW'(i);
    end
    if (ICACHE && tag_present) victim = tag_idx;
  end

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
  typedef enum logic [1:0] {Q_IDLE, Q_READ, Q_CMP} qstate_t;
  qstate_t     qs;
  logic [31:0] q_cur;
  logic [SET_W-1:0] q_set;
  assign q_set = q_cur[6 -: SET_W];           // line[11:SET_LSB]: line bit k is q_cur[k-5]
  logic [VW-1:0] q_vidx;
  assign q_vidx = q_cur[VW-1:0];              // I: {line[11:6], line[5]}; D: line[11:5]

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

  // ---------------------------------------------------------------------
  // Port scheduling
  // ---------------------------------------------------------------------
  // Port A (lookup): the request's index in the accept cycle (from the VA)
  assign da_addr = idx_i;
  assign ta_addr = idx_i[8 -: SET_W];

  logic fill_beat_now;             // a fill beat arrives this cycle
  assign fill_beat_now = st == S_FILL && mem_rsp_i.ack && !mem_rsp_i.err;
  logic st_hit_now;                // a write hit updates the line this cycle
  assign st_hit_now = st == S_WRITE_WAIT && hit && !st_hit_written && r_cacheable;
  logic dg_data_go, dg_tag_go, snoop_go, fill_tag_go;
  assign fill_tag_go = st == S_FILL_START;
  assign snoop_go    = qs == Q_IDLE && sq_count != 4'd0 && !fill_tag_go;
  assign dg_data_go  = ds == D_IDLE && diag_req_i && !diag_tag_i && !fill_beat_now && !st_hit_now;
  assign dg_tag_go   = ds == D_IDLE && diag_req_i && diag_tag_i && !fill_tag_go && !snoop_go;

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

  // tag port B
  always_comb begin
    tb_we = 1'b0; tb_addr = '0; tb_wdata = '0; tb_we_way = '0;
    if (fill_tag_go) begin
      tb_we = 1'b1; tb_addr = r_set; tb_wdata = {8'd0, r_pa[35:12]}; tb_we_way[fill_way] = 1'b1;
    end else if (snoop_go) begin
      tb_addr = sq_line[sq_rd][6 -: SET_W];
    end else if (dg_tag_go) begin
      tb_addr = dg_set;
      if (diag_we_i && dg_t == 2'd2 && dg_way_ok) begin
        tb_we = 1'b1; tb_we_way[dg_way] = 1'b1;
        tb_wdata = ICACHE ? {8'd0, diag_wdata_i[23:0]} : {6'd0, diag_wdata_i[48], diag_wdata_i[40], diag_wdata_i[23:0]};
      end
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
  // from the registered done/rdata/err
  logic        done_q, err_q;
  logic [63:0] rdata_q;
  logic        hit_now;
  assign hit_now = st == S_LOOKUP && !r_atomic && hit;
  assign done_o  = done_q | hit_now;
  assign rdata_o = hit_now ? da_rdata[hit_idx] : rdata_q;
  assign err_o   = hit_now ? 1'b0 : err_q;
  logic accept;
  assign accept = req_i && !done_q && (st == S_IDLE || hit_now);

  always_ff @(posedge clk) begin
    done_q <= 1'b0;
    diag_done_o <= 1'b0;
    if (rst) begin
      st <= S_IDLE;
      r_we <= 1'b0; r_atomic <= 1'b0; r_cacheable <= 1'b0; r_pa <= '0; r_be <= '0; r_wdata <= '0;
      fill_beat <= '0; fill_data <= '0; fill_err <= 1'b0; fill_snooped <= 1'b0; fill_way <= '0;
      st_hit_written <= 1'b0; single_lock <= 1'b0;
      rdata_q <= '0; err_q <= 1'b0;
      for (int i = 0; i < WAYS; i++) vbits[i] <= '0;
      for (int i = 0; i < SETS; i++) begin mru[i] <= '0; lck[i] <= '0; end
      sq_wr <= '0; sq_rd <= '0; sq_count <= '0;
      qs <= Q_IDLE; q_cur <= '0;
      ds <= D_IDLE; diag_rdata_o <= '0;
    end else begin
      // ---- the request ----
      case (st)
        S_IDLE: ;                         // a request is taken below

        S_LOOKUP: begin
          // the tags and data of the accept cycle are out
          if (r_atomic) begin
            if (hit) vbits[hit_idx][vidx(r_pa)] <= 1'b0;     // the line goes; memory has the truth
            st <= S_ATOMIC_RD;
          end else if (hit) begin
            st <= S_IDLE;                 // the answer is combinational (hit_now)
            // history: this way most recently used
            mru[r_set][hit_idx] <= 1'b1;
            if (&(mru[r_set] | lck[r_set] | (WAYS'(1) << hit_idx))) begin
              for (int i = 0; i < WAYS; i++) if (WW'(i) != hit_idx && !lck[r_set][i]) mru[r_set][i] <= 1'b0;
            end
          end else begin
            fill_way <= victim;
            st <= S_FILL_START;
          end
        end
        S_FILL_START: begin
          // the victim's tag is written now (port B); its old contents go
          if (ICACHE) begin
            if (!(tag_present && tag_idx == fill_way)) begin
              vbits[fill_way][VW'({r_set, 1'b0})] <= 1'b0;
              vbits[fill_way][VW'({r_set, 1'b1})] <= 1'b0;
            end
          end else begin
            vbits[fill_way][VW'(r_set)] <= 1'b0;
          end
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
          // validate (unless an error or a snoop said no) and answer
          if (!fill_err && !fill_snooped) begin
            vbits[fill_way][vidx(r_pa)] <= 1'b1;
            mru[r_set][fill_way] <= 1'b1;
            if (&(mru[r_set] | lck[r_set] | (WAYS'(1) << fill_way))) begin
              for (int i = 0; i < WAYS; i++) if (WW'(i) != fill_way && !lck[r_set][i]) mru[r_set][i] <= 1'b0;
            end
          end
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

      // ---- the snoop queue ----
      if (sq_push && sq_push2) begin
        sq_line[sq_wr] <= sq_in1; sq_line[sq_wr + 3'd1] <= sq_in2;
        sq_wr <= sq_wr + 3'd2;
      end else if (sq_push || sq_push2) begin
        sq_line[sq_wr] <= sq_push ? sq_in1 : sq_in2;
        sq_wr <= sq_wr + 3'd1;
      end
      sq_count <= sq_count + {2'd0, sq_pushes} - {3'd0, snoop_go};
      case (qs)
        Q_IDLE: begin
          if (snoop_go) begin
            q_cur <= sq_line[sq_rd];
            sq_rd <= sq_rd + 3'd1;
            qs <= Q_CMP;
          end
        end
        Q_CMP: begin
          // the tags of the set are on port B now
          for (int i = 0; i < WAYS; i++)
            if (tb_rdata[i][23:0] == q_cur[30:7]) vbits[i][q_vidx] <= 1'b0;   // line[35:12] = q_cur[30:7]
          qs <= Q_IDLE;
        end
        default: qs <= Q_IDLE;
      endcase

      // ---- flash clears ----
      if (flash_v_i) begin
        for (int i = 0; i < WAYS; i++) vbits[i] <= '0;
        for (int i = 0; i < SETS; i++) mru[i] <= '0;
      end
      if (flash_l_i) begin
        for (int i = 0; i < SETS; i++) lck[i] <= '0;
      end

      // ---- diagnostics ----
      case (ds)
        D_IDLE: begin
          if (dg_data_go || dg_tag_go) begin
            if (diag_we_i) begin
              // the RAM write is on port B this cycle; the flop fields now
              if (diag_tag_i && dg_way_ok) begin
                if (dg_t == 2'd2) begin
                  if (ICACHE) begin
                    vbits[dg_way][VW'({dg_set, 1'b0})] <= diag_wdata_i[56];
                    vbits[dg_way][VW'({dg_set, 1'b1})] <= diag_wdata_i[57];
                  end else begin
                    vbits[dg_way][VW'(dg_set)] <= diag_wdata_i[56];
                  end
                end else if (dg_t == 2'd1) begin
                  mru[dg_set] <= diag_wdata_i[8 +: WAYS];
                  lck[dg_set] <= {diag_wdata_i[1 +: WAYS-1], 1'b0};
                end
              end
              ds <= D_DONE;
            end else begin
              ds <= D_READ;
            end
          end
        end
        D_READ: begin
          // RAM data from port B is out
          diag_rdata_o <= '0;
          if (!dg_way_ok) diag_rdata_o <= '0;
          else if (!diag_tag_i) diag_rdata_o <= db_rdata[dg_way];
          else if (dg_t == 2'd2) begin
            if (ICACHE) diag_rdata_o <= {6'd0, vbits[dg_way][VW'({dg_set, 1'b1})], vbits[dg_way][VW'({dg_set, 1'b0})], 32'd0, tb_rdata[dg_way][23:0]};
            else diag_rdata_o <= {7'd0, vbits[dg_way][VW'(dg_set)], 7'd0, tb_rdata[dg_way][25], 7'd0, tb_rdata[dg_way][24], 8'd0, 8'd0, tb_rdata[dg_way][23:0]};
          end else if (dg_t == 2'd1) begin
            diag_rdata_o <= {32'd0, 19'd0, 13'd0};
            diag_rdata_o[8 +: WAYS] <= mru[dg_set];
            diag_rdata_o[1 +: WAYS-1] <= lck[dg_set][WAYS-1:1];
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
  assign unused_ok = &{1'b0, q_set, q_cur[31], r_pa[2:0], diag_va_i[29], diag_va_i[25:12], diag_va_i[2:0]};

endmodule
