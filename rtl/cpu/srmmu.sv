// SPDX-License-Identifier: GPL-2.0-or-later
//
// srmmu: the SPARC Reference MMU of the CPU module as the SuperSPARC
// presents it (docs/arch/mmu.md §2): the ASI 4 registers, a 64-entry
// fully associative TLB with two lookup ports (instruction and data) and
// the ASI 6 diagnostic image, the three-level table walker with the R/M
// updates, the fault registers with V8's overwrite rules, probe and flush
// (ASI 3).
//
// From: The SPARC Architecture Manual V8 Appendix H (§H.3 tables, walk and
//   PA formation; §H.4 control register; §H.5 SFSR: FT, AT, L, FAV, OW and
//   the overwrite classes; §H.6 SFAR; §H.7 R/M updates; Tables H-2/H-3
//   flush matches, H-4 probe results); the Viking (TMS390Z50) user
//   documentation §4.11 (MCNTL bits and reset value, the 64-entry TLB, its
//   hit rule — context ignored for ACC 6-7 — and replacement, the ASI 6
//   image SEL 0-3, the MFSR aliases 0x1300/0x1400, EM); Sun-4M System
//   Architecture §4 (the reset register 0x700); tests/cpu (t_mmu,
//   t_mmu_diag, t_mmu_fault_regs, t_mmu_ifault, t_buserr, wdtest) as the
//   acceptance tests. docs/arch/mmu-notes.md is the digest.
//
// Deviations noted: probes always walk (never answer from the TLB) and set
// no R; an R-only update is a plain word write (Viking uses an atomic
// swap); no L2 TLB (MCNTL bit 6 is stored); 0x500/0x600 read 0. VA 0xD00
// is the project's SYSCONF word (RAM size, CPU count), which the test suite
// reads to tell the core from QEMU (docs/arch/mmu.md §0).
//
// Timing: a lookup answers in the cycle it is presented (hit/miss/fault),
// so the sides present a request for one cycle per attempt. A walk is
// started by walk_req_i for the side named; walk_done_o returns with
// walk_fault_o; on success the entry is in the TLB and the side retries.

module srmmu
  import mmu_pkg::*;
(
  input  logic        clk,
  input  logic        rst,

  // Register space: ASI 3 (probe/flush), 4, 5, 6, 7. One access at a time,
  // held until ack; a size other than a word is a control-space error.
  input  logic        reg_valid_i,
  input  logic        reg_we_i,
  input  logic [7:0]  reg_asi_i,
  input  logic [31:0] reg_va_i,
  input  logic [31:0] reg_wdata_i,
  input  logic [1:0]  reg_size_i,
  output logic        reg_ack_o,
  output logic        reg_fault_o,     // with ack: data_access_exception (CS)
  output logic [31:0] reg_rdata_o,

  // Translation lookups: one CAM, the data side first; the instruction
  // side is told busy and retries (it keeps a small translation cache of
  // its own in cpu_module)
  input  xlat_req_t   xi_i,
  output xlat_rsp_t   xi_o,
  input  xlat_req_t   xd_i,
  output xlat_rsp_t   xd_o,
  output logic        tlb_changed_o,   // a flush, an ASI 5/6/7 write, a CTX/CTPR/MCNTL write: translation caches drop

  // The walker, for the side that missed (its request fields are used):
  // the data side wins when both ask in one cycle; walk_owner_o says
  // whose walk runs (0 none, 1 data, 2 instruction) and walk_done_o ends it
  input  logic        walk_req_d_i,
  input  logic        walk_req_i_i,
  output logic [1:0]  walk_owner_o,
  output logic        walk_done_o,
  output logic        walk_fault_o,    // the SFSR was written; trap unless masked
  output logic        walk_masked_o,   // NF masked it: no trap

  // Bus errors found by the sides on their own accesses (FT 5)
  input  logic        berr_valid_i,
  input  at_t         berr_at_i,
  input  logic [31:0] berr_va_i,
  input  logic        berr_no_fault_i,
  output logic        berr_masked_o,   // NF: record only

  // The memory port of the walker
  output mem_pkg::mem_req_t mem_req_o,
  input  mem_pkg::mem_rsp_t mem_rsp_i,

  // State
  input  logic [31:0] sysconf_i,       // ASI 4 VA 0xD00: the suite's "which machine" register
  output logic [31:0] mcntl_o,
  input  logic        wd_i,            // a watchdog reset is taken: EM, BM
  output logic        si_reset_o       // software-internal reset requested (0x700 bit 1)
);

  // ---------------------------------------------------------------------
  // Registers
  // ---------------------------------------------------------------------
  logic [31:0] mcntl, ctpr, trcr;
  logic [15:0] ctx;
  logic [17:0] sfsr, sfsr_n;   // {EM, CS, SB, P, UD, UC, TO, BE, L[1:0], AT[2:0], FT[2:0], FAV, OW}
  logic [31:0] sfar, sfar_n;
  logic        wd_flag;
  assign mcntl_o = mcntl;

  localparam int SF_EM = 17, SF_CS = 16, SF_TO = 11, SF_FAV = 1, SF_OW = 0;
  logic        mmu_en, bm, nf;
  assign mmu_en = mcntl[MC_EN];
  assign bm     = mcntl[MC_BM];
  assign nf     = mcntl[MC_NF];

  // ---------------------------------------------------------------------
  // The TLB
  // ---------------------------------------------------------------------
  tlb_entry_t  tlb [64];
  logic [63:0] used;

  /* verilator lint_off UNUSEDSIGNAL */   // the functions use the fields they need
  function automatic logic tlb_hit(input tlb_entry_t e, input logic [31:0] va, input logic [15:0] c);
    logic va_ok;
    case (e.lvl)
      2'd3:    va_ok = e.vtag == va[31:12];
      2'd2:    va_ok = e.vtag[19:6] == va[31:18];
      2'd1:    va_ok = e.vtag[19:12] == va[31:24];
      default: va_ok = 1'b1;
    endcase
    return e.v && va_ok && (e.acc[2:1] == 2'b11 || e.ctx == c);
  endfunction

  function automatic logic [35:0] pte_pa(input tlb_entry_t e, input logic [31:0] va);
    case (e.lvl)
      2'd3:    return {e.ppn, va[11:0]};
      2'd2:    return {e.ppn[23:6], va[17:0]};
      2'd1:    return {e.ppn[23:12], va[23:0]};
      default: return {e.ppn[23:20], va[31:0]};
    endcase
  endfunction

  // Flush match (V8 Table H-2 with Viking's LVL conditions)
  function automatic logic flush_match(input tlb_entry_t e, input logic [2:0] t, input logic [31:0] va, input logic [15:0] c);
    logic ctx_ok;
    ctx_ok = e.acc[2:1] == 2'b11 || e.ctx == c;
    case (t)
      3'd0: return ctx_ok && e.lvl == 2'd3 && e.vtag == va[31:12];
      3'd1: return ctx_ok && e.lvl[1] && e.vtag[19:6] == va[31:18];
      3'd2: return ctx_ok && e.lvl != 2'd0 && e.vtag[19:12] == va[31:24];
      3'd3: return e.acc[2:1] != 2'b11 && e.ctx == c;
      3'd4: return 1'b1;
      default: return 1'b0;
    endcase
  endfunction

  // The entry address at a level below the root
  function automatic logic [35:0] level_addr(input logic [1:0] lvl, input logic [31:0] ptd, input logic [31:0] va);
    logic [35:0] base;
    base = {ptd[31:2], 6'b000000};
    case (lvl)
      2'd1:    return base + 36'(va[31:24]) * 36'd4;
      2'd2:    return base + 36'(va[23:18]) * 36'd4;
      default: return base + 36'(va[17:12]) * 36'd4;
    endcase
  endfunction

  // The answer of a lookup port
  function automatic xlat_rsp_t answer(input xlat_req_t r, input logic hit, input tlb_entry_t e,
                                       input logic en, input logic boot);
    xlat_rsp_t a;
    a = '0;
    if (!r.valid) return a;
    if (r.at[1] && boot) begin               // boot mode: fetches go to the PROM
      a.hit = 1'b1; a.pa = {8'hFF, r.va[27:0]};
    end else if (!en) begin
      a.hit = 1'b1; a.pa = {4'h0, r.va};
    end else if (hit) begin
      if (acc_fault(r.at, e.acc) != FT_NONE) a.fault = 1'b1;
      else if (r.at[2] && !e.m) a.miss = 1'b1;   // a store to a page with M = 0: walk again
      else begin a.hit = 1'b1; a.pa = pte_pa(e, r.va); a.pte_c = e.c; a.acc = e.acc; end
    end else begin
      a.miss = 1'b1;
    end
    return a;
  endfunction
  /* verilator lint_on UNUSEDSIGNAL */

  // The one lookup: the data side's request when it has one, else the
  // instruction side's
  xlat_req_t   lk;
  logic        h_hit;
  logic [5:0]  h_idx;
  xlat_rsp_t   h_ans;
  assign lk = xd_i.valid ? xd_i : xi_i;
  always_comb begin
    h_hit = 1'b0; h_idx = '0;
    for (int i = 63; i >= 0; i--)
      if (tlb_hit(tlb[i], lk.va, ctx)) begin h_hit = 1'b1; h_idx = 6'(i); end
  end
  assign h_ans = answer(lk, h_hit, tlb[h_idx], mmu_en, bm);
  always_comb begin
    xd_o = '0; xi_o = '0;
    if (xd_i.valid) begin
      xd_o = h_ans;
      xi_o.busy = xi_i.valid;
    end else begin
      xi_o = h_ans;
    end
  end

  // Victim: the first invalid entry, else the first unlocked entry whose
  // used bit is clear (Viking §4.11.4)
  logic [5:0] victim;
  always_comb begin
    victim = 6'd63;
    for (int i = 63; i >= 0; i--) if (!tlb[i].lock && !used[i]) victim = 6'(i);
    for (int i = 63; i >= 0; i--) if (!tlb[i].v) victim = 6'(i);
  end

  // ---------------------------------------------------------------------
  // Fault recording (V8 §H.5 classes and OW rules): a function applied to
  // the running value of the SFSR, in priority order, in one cycle
  // ---------------------------------------------------------------------
  typedef enum logic [1:0] {FC_INST, FC_DATA, FC_TRANS} fclass_t;

  function automatic fclass_t fclass_of(input logic [2:0] ft, input logic inst);
    if (ft == FT_TRANS) return FC_TRANS;
    return inst ? FC_INST : FC_DATA;
  endfunction

  /* verilator lint_off UNUSEDSIGNAL */
  function automatic logic recorded(input logic [17:0] cur, input logic [2:0] ft, input at_t at);
    fclass_t pc, nc;
    if (cur[4:2] == FT_NONE) return 1'b1;
    pc = fclass_of(cur[4:2], cur[6]);
    nc = fclass_of(ft, at[1]);
    if (nc == pc) return 1'b1;
    if (nc == FC_TRANS) return 1'b1;
    if (pc == FC_TRANS) return 1'b0;
    if (nc == FC_INST && pc == FC_DATA) return 1'b0;
    return 1'b1;                              // data over instruction
  endfunction
  /* verilator lint_on UNUSEDSIGNAL */

  function automatic logic [17:0] record(input logic [17:0] cur, input logic [2:0] ft, input at_t at,
                                         input logic [1:0] l, input logic fav, input logic to);
    logic [17:0] n;
    logic ow;
    if (!recorded(cur, ft, at)) return cur;
    ow = (cur[4:2] != FT_NONE) && (fclass_of(cur[4:2], cur[6]) == fclass_of(ft, at[1]));
    n = '0;
    n[SF_EM] = cur[SF_EM];
    n[SF_TO] = to;
    n[9:8] = l;
    n[7:5] = at;
    n[4:2] = ft;
    n[SF_FAV] = fav;
    n[SF_OW] = ow;
    return n;
  endfunction

  // ---------------------------------------------------------------------
  // The walker (also the probe)
  // ---------------------------------------------------------------------
  typedef enum logic [2:0] {W_IDLE, W_READ, W_WAIT, W_WRITE, W_WRITE_WAIT, W_DONE} wstate_t;
  wstate_t     ws;
  logic        w_probe;        // this walk is a probe
  logic [2:0]  w_ptype;        // probe type
  logic [31:0] w_va;
  at_t         w_at;
  logic        w_no_fault;
  logic [1:0]  w_level;
  logic [35:0] w_addr;         // the entry being read
  logic [31:0] w_entry;        // the word read (then the word written back)
  logic [31:0] w_result;       // the probe's answer
  logic        w_fault;
  logic        probe_done;
  // the owner of the running walk, held through the cycle of walk_done_o
  logic [1:0]  w_owner;
  assign walk_owner_o = w_owner;

  // the word within the doubleword the port returns
  logic [31:0] mem_word;
  assign mem_word = w_addr[2] ? mem_rsp_i.rdata[31:0] : mem_rsp_i.rdata[63:32];

  always_comb begin
    mem_req_o = '0;
    // held from the request until the ack (the arbiter follows valid)
    mem_req_o.valid = (ws == W_READ) || (ws == W_WAIT) || (ws == W_WRITE) || (ws == W_WRITE_WAIT);
    mem_req_o.write = (ws == W_WRITE) || (ws == W_WRITE_WAIT);
    mem_req_o.pa    = {w_addr[35:3], 3'b000};
    mem_req_o.be    = w_addr[2] ? 8'h0F : 8'hF0;
    mem_req_o.wdata = w_addr[2] ? {32'd0, w_entry} : {w_entry, 32'd0};
  end

  // What this walk step finds (valid in W_WAIT with ack, for a translation walk)
  logic       wk_step;         // a step completes this cycle
  logic [2:0] wk_ft;           // the fault it raises, FT_NONE for none
  logic       wk_pte;          // a PTE was found
  logic       wk_ptd;          // a PTD was found (walk on)
  logic       wk_rm;           // the PTE needs R/M written
  always_comb begin
    wk_step = ws == W_WAIT && mem_rsp_i.ack;
    wk_ft = FT_NONE; wk_pte = 1'b0; wk_ptd = 1'b0; wk_rm = 1'b0;
    if (mem_rsp_i.err) wk_ft = FT_TRANS;
    else case (mem_word[1:0])
      2'd0: wk_ft = FT_INVALID;
      2'd3: wk_ft = FT_TRANS;
      2'd1: begin if (w_level == 2'd3) wk_ft = FT_TRANS; else wk_ptd = 1'b1; end
      default: begin
        wk_pte = 1'b1;
        wk_ft = acc_fault(w_at, mem_word[4:2]);
        wk_rm = !mem_word[5] || (w_at[2] && !mem_word[6]);
      end
    endcase
  end

  // The PTE to insert
  tlb_entry_t new_entry;
  always_comb begin
    new_entry = '0;
    new_entry.vtag = w_va[31:12];
    new_entry.ctx  = ctx;
    new_entry.ppn  = w_entry[31:8];
    new_entry.c    = w_entry[7];
    new_entry.m    = w_entry[6];
    new_entry.v    = 1'b1;
    new_entry.acc  = w_entry[4:2];
    new_entry.lvl  = w_level;
    new_entry.lock = 1'b0;
  end

  // ---------------------------------------------------------------------
  // Register access decode
  // ---------------------------------------------------------------------
  logic        reg_is_word, reg_go;
  assign reg_is_word = reg_size_i == 2'd2;
  assign reg_go = reg_valid_i && !reg_ack_o;
  logic        probe_start;
  assign probe_start = reg_go && !reg_we_i && reg_asi_i == 8'h03 && reg_is_word && ws == W_IDLE && !probe_done &&
                       !walk_req_d_i && !walk_req_i_i;

  logic [5:0]  img_entry;
  logic [2:0]  img_sel;
  assign img_entry = reg_va_i[17:12];
  assign img_sel   = reg_va_i[10:8];

  logic [31:0] reg_rdata;          // the value before this access's side effects
  always_comb begin
    reg_rdata = 32'd0;
    if (reg_asi_i == 8'h04) begin
      case (reg_va_i[12:8])
        5'h00: reg_rdata = mcntl;
        5'h01: reg_rdata = ctpr;
        5'h02: reg_rdata = {16'd0, ctx};
        5'h03, 5'h13: reg_rdata = {14'd0, sfsr};
        5'h04, 5'h14: reg_rdata = sfar;
        5'h07: reg_rdata = {29'd0, wd_flag, 2'b00};
        5'h0D: reg_rdata = sysconf_i;
        5'h10: reg_rdata = trcr;
        default: reg_rdata = 32'd0;
      endcase
    end else if (reg_asi_i == 8'h06) begin
      case (img_sel)
        3'd0: reg_rdata = {tlb[img_entry].vtag, 12'd0};
        3'd1: reg_rdata = {16'd0, tlb[img_entry].ctx};
        3'd2: reg_rdata = tlb_pte_image(tlb[img_entry]);
        3'd3: reg_rdata = {31'd0, tlb[img_entry].lock};
        default: reg_rdata = 32'd0;
      endcase
    end else if (reg_asi_i == 8'h03) begin
      reg_rdata = w_result;
    end
  end

  // The register-access control-space error (not a word)
  logic cs_error;
  assign cs_error = reg_go && !reg_is_word && reg_asi_i != 8'h03;

  // ---------------------------------------------------------------------
  // The next SFSR/SFAR: every source applied in order in one cycle
  // ---------------------------------------------------------------------
  logic lk_fault_now;
  assign lk_fault_now = lk.valid && h_ans.fault;

  always_comb begin
    sfsr_n = sfsr;
    sfar_n = sfar;
    if (wd_i) sfsr_n[SF_EM] = 1'b1;
    // a permission fault on a hit
    if (lk_fault_now) begin
      if (recorded(sfsr_n, acc_fault(lk.at, tlb[h_idx].acc), lk.at)) sfar_n = lk.va;
      sfsr_n = record(sfsr_n, acc_fault(lk.at, tlb[h_idx].acc), lk.at, tlb[h_idx].lvl, 1'b1, 1'b0);
    end
    // bus errors of the sides: FT 5 with TO; FAV and the SFAR for data only
    if (berr_valid_i) begin
      if (recorded(sfsr_n, FT_BUS, berr_at_i) && !berr_at_i[1]) sfar_n = berr_va_i;
      sfsr_n = record(sfsr_n, FT_BUS, berr_at_i, 2'd0, !berr_at_i[1], 1'b1);
    end
    // the walker's faults
    if (wk_step && !w_probe && wk_ft != FT_NONE) begin
      if (recorded(sfsr_n, wk_ft, w_at)) sfar_n = w_va;
      sfsr_n = record(sfsr_n, wk_ft, w_at, w_level, 1'b1, mem_rsp_i.err);
    end
    // register accesses
    if (cs_error) begin
      sfsr_n = '0;
      sfsr_n[SF_EM] = sfsr[SF_EM];
      sfsr_n[SF_CS] = 1'b1;
      sfsr_n[4:2] = FT_INTERNAL;
      sfsr_n[7:5] = reg_we_i ? AT_ST_SD : AT_LD_SD;
      sfsr_n[SF_FAV] = 1'b1;
      sfar_n = reg_va_i;
    end else if (reg_go && reg_is_word && reg_asi_i == 8'h04) begin
      if (!reg_we_i && reg_va_i[12:8] == 5'h03) sfsr_n = '0;          // read clears, EM included
      if (reg_we_i && reg_va_i[12:8] == 5'h13) sfsr_n = reg_wdata_i[17:0];
      if (reg_we_i && reg_va_i[12:8] == 5'h14) sfar_n = reg_wdata_i;
    end
  end

  // ---------------------------------------------------------------------
  // State
  // ---------------------------------------------------------------------
  always_ff @(posedge clk) begin
    reg_ack_o <= 1'b0;
    reg_fault_o <= 1'b0;
    si_reset_o <= 1'b0;
    tlb_changed_o <= 1'b0;
    walk_done_o <= 1'b0;
    walk_fault_o <= 1'b0;
    walk_masked_o <= 1'b0;
    berr_masked_o <= 1'b0;
    if (rst) begin
      mcntl <= MCNTL_RESET;
      ctpr <= '0; ctx <= '0; trcr <= '0;
      sfsr <= '0; sfar <= '0;
      wd_flag <= 1'b0; reg_rdata_o <= '0;
      for (int i = 0; i < 64; i++) tlb[i] <= '0;
      used <= '0;
      ws <= W_IDLE;
      w_probe <= 1'b0; w_ptype <= '0; w_va <= '0; w_at <= '0; w_no_fault <= 1'b0;
      w_level <= '0; w_addr <= '0; w_entry <= '0; w_result <= '0; w_fault <= 1'b0;
      probe_done <= 1'b0; w_owner <= 2'd0;
    end else begin
      sfsr <= sfsr_n;
      sfar <= sfar_n;
      if (wd_i) begin
        mcntl[MC_BM] <= 1'b1;
        wd_flag <= 1'b1;
      end
      if (berr_valid_i) berr_masked_o <= nf && berr_no_fault_i;

      // used bits: a hit sets
      if (lk.valid && h_hit) used[h_idx] <= 1'b1;

      // translation caches outside drop on anything that changes a translation
      tlb_changed_o <= wd_i ||
                       (reg_go && reg_we_i && reg_is_word &&
                        (reg_asi_i == 8'h03 || reg_asi_i == 8'h05 || reg_asi_i == 8'h06 || reg_asi_i == 8'h07 ||
                         (reg_asi_i == 8'h04 && reg_va_i[12:8] <= 5'h02)));

      // ---- the walker ----
      case (ws)
        W_IDLE: begin
          if (!reg_valid_i) probe_done <= 1'b0;   // an abandoned probe (watchdog)
          w_owner <= 2'd0;
          if (walk_req_d_i || walk_req_i_i) begin
            w_probe <= 1'b0;
            w_owner <= walk_req_d_i ? 2'd1 : 2'd2;
            w_va <= walk_req_d_i ? xd_i.va : xi_i.va;
            w_at <= walk_req_d_i ? xd_i.at : xi_i.at;
            w_no_fault <= walk_req_d_i ? xd_i.no_fault : xi_i.no_fault;
            w_level <= 2'd0;
            w_addr <= {ctpr, 4'b0000} + {18'd0, ctx, 2'b00};
            w_fault <= 1'b0;
            ws <= W_READ;
          end else if (probe_start) begin
            w_probe <= 1'b1;
            w_ptype <= reg_va_i[10:8];
            w_va <= reg_va_i;
            w_at <= AT_LD_SD;
            w_level <= 2'd0;
            w_addr <= {ctpr, 4'b0000} + {18'd0, ctx, 2'b00};
            w_result <= 32'd0;
            if (reg_va_i[10:8] > 3'd4) probe_done <= 1'b1;     // types 5-7: 0
            else ws <= W_READ;
          end
        end
        W_READ: ws <= W_WAIT;
        W_WAIT: begin
          if (mem_rsp_i.ack) begin
            w_entry <= mem_word;
            if (w_probe) begin
              // Probe (V8 Table H-4): types 0-3 return the entry at their
              // level; type 4 the PTE wherever it is; errors give 0
              w_result <= 32'd0;
              ws <= W_DONE;
              if (!mem_rsp_i.err) begin
                if (w_ptype == 3'd4) begin
                  if (mem_word[1:0] == 2'd2) w_result <= mem_word;
                  else if (mem_word[1:0] == 2'd1 && w_level != 2'd3) begin
                    w_level <= w_level + 2'd1; w_addr <= level_addr(w_level + 2'd1, mem_word, w_va); ws <= W_READ;
                  end
                end else if (w_level == 2'd3 - 2'(w_ptype)) begin
                  if (mem_word[1:0] != 2'd3) w_result <= mem_word;    // the entry itself, reserved → 0
                end else if (mem_word[1:0] == 2'd1) begin
                  w_level <= w_level + 2'd1; w_addr <= level_addr(w_level + 2'd1, mem_word, w_va); ws <= W_READ;
                end
              end
            end else if (wk_ft != FT_NONE) begin
              w_fault <= 1'b1;
              ws <= W_DONE;
            end else if (wk_ptd) begin
              w_level <= w_level + 2'd1;
              w_addr <= level_addr(w_level + 2'd1, mem_word, w_va);
              ws <= W_READ;
            end else if (wk_rm) begin
              // set R (and M for a store) in memory, then insert
              w_entry <= mem_word | 32'h0000_0020 | (w_at[2] ? 32'h0000_0040 : 32'h0);
              ws <= W_WRITE;
            end else begin
              ws <= W_DONE;
            end
          end
        end
        W_WRITE: ws <= W_WRITE_WAIT;
        W_WRITE_WAIT: begin
          if (mem_rsp_i.ack) ws <= W_DONE;      // a failed R/M write is the chipset's to report
        end
        W_DONE: begin
          ws <= W_IDLE;
          if (w_probe) begin
            probe_done <= 1'b1;
          end else begin
            walk_done_o <= 1'b1;
            walk_fault_o <= w_fault;
            walk_masked_o <= w_fault && nf && w_no_fault;
            if (!w_fault) begin
              tlb[victim] <= new_entry;
              used[victim] <= 1'b1;
              if (&(used | (64'd1 << victim))) begin
                // every entry used: clear the others' history (Viking §4.11.4)
                for (int i = 0; i < 64; i++) if (6'(i) != victim && !tlb[i].lock) used[i] <= 1'b0;
              end
            end
          end
        end
        default: ws <= W_IDLE;
      endcase

      // ---- register accesses ----
      if (reg_go) begin
        reg_rdata_o <= reg_rdata;              // captured before a read-clear takes effect
        if (reg_asi_i == 8'h03) begin
          if (reg_we_i) begin
            if (reg_is_word) begin
              for (int i = 0; i < 64; i++)
                if (flush_match(tlb[i], reg_va_i[10:8], reg_va_i, ctx)) tlb[i].v <= 1'b0;
              if (reg_va_i[10:8] == 3'd4) used <= '0;
            end
            reg_ack_o <= 1'b1;
            reg_fault_o <= !reg_is_word;
          end else if (probe_done) begin
            reg_ack_o <= 1'b1;
            probe_done <= 1'b0;
          end else if (!reg_is_word) begin
            reg_ack_o <= 1'b1;
            reg_fault_o <= 1'b1;
          end
          // else the probe walk runs; the ack comes with probe_done
        end else begin
          reg_ack_o <= 1'b1;
          reg_fault_o <= !reg_is_word;
          if (reg_is_word && reg_we_i) begin
            case (reg_asi_i)
              8'h04: begin
                case (reg_va_i[12:8])
                  5'h00: mcntl <= (MCNTL_RESET & ~MCNTL_WMASK) | (reg_wdata_i & MCNTL_WMASK);
                  5'h01: ctpr <= reg_wdata_i & 32'hFFFF_FFC0;
                  5'h02: ctx <= reg_wdata_i[15:0];
                  5'h07: if (reg_wdata_i[1]) si_reset_o <= 1'b1;
                  5'h10: trcr <= reg_wdata_i;
                  default: ;                 // 0x13/0x14 are in the SFSR/SFAR logic above
                endcase
              end
              8'h05, 8'h07: begin
                for (int i = 0; i < 64; i++) tlb[i].v <= 1'b0;
              end
              8'h06: begin
                case (img_sel)
                  3'd0: tlb[img_entry].vtag <= reg_wdata_i[31:12];
                  3'd1: tlb[img_entry].ctx  <= reg_wdata_i[15:0];
                  3'd2: begin
                    tlb[img_entry].ppn <= reg_wdata_i[31:8];
                    tlb[img_entry].c   <= reg_wdata_i[7];
                    tlb[img_entry].m   <= reg_wdata_i[6];
                    tlb[img_entry].v   <= reg_wdata_i[5];
                    tlb[img_entry].acc <= reg_wdata_i[4:2];
                    tlb[img_entry].lvl <= reg_wdata_i[1:0];
                  end
                  3'd3: tlb[img_entry].lock <= reg_wdata_i[0];
                  default: ;
                endcase
              end
              default: ;
            endcase
          end
        end
      end
    end
  end

  logic unused_ok;
  assign unused_ok = &{1'b0, reg_va_i[7:0], w_addr[1:0], wk_pte};

endmodule
