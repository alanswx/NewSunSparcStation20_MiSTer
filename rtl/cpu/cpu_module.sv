// SPDX-License-Identifier: GPL-2.0-or-later
//
// cpu_module: one SPARC processor module of the SS20 (docs/arch/cpu.md §4,
// docs/arch/mmu.md §1 and §4): the integer unit, the FPU, the SRMMU, the
// two L1 caches, the instruction and data sides that join them, the ASI
// decode of the data side, the memory-port arbiter, the SuperSPARC
// breakpoint/counter/ACTION registers, and the watchdog reset.
//
// From: The SPARC Architecture Manual V8 Appendix I (the ASI assignments);
//   the Viking (TMS390Z50) user documentation §4.11 (ASIs 3-7, 0x20-0x2F
//   bypass with PA[35:32] = ASI[3:0]), §4.7.6/§4.8.6 (0x0C-0x0F, 0x36/37),
//   §4.14 (ASI 0x38 breakpoint registers, 0x49-0x4B counters, 0x4C
//   ACTION), §4.13.2 (watchdog reset: boot mode, EM); Sun-4M System
//   Architecture §12 (resets); tests/cpu as the acceptance suite.
//
// Reserved ASIs read 0 and ignore writes (docs/arch/mmu.md §0). The data
// side runs one access at a time, as the IU issues them.

module cpu_module
  import cpu_pkg::*;
#(
  parameter bit HAS_FPU = 1'b1,
  parameter logic [11:0] RAM_MB = 12'd64    // reported in ASI 4 VA 0xD00 (SYSCONF: RAM MB in 31:20, CPUs in 3:0)
)(
  input  logic        clk,
  input  logic        rst,

  input  logic [3:0]  mid_i,
  input  logic [3:0]  irl_i,

  output mem_pkg::mem_req_t mem_req_o,
  input  mem_pkg::mem_rsp_t mem_rsp_i,
  input  mem_pkg::snoop_t   snoop_i,

  output logic        wd_reset_o,     // a watchdog reset was taken (one cycle)
  output logic        si_reset_o,     // software-internal reset requested (one cycle)
  output logic        halt_o          // the IU is in error mode (until the watchdog)
);

  import mmu_pkg::*;
  import mem_pkg::*;
  import fpu_pkg::*;

  // ---------------------------------------------------------------------
  // The IU and the FPU
  // ---------------------------------------------------------------------
  ifetch_req_t ifr;
  ifetch_rsp_t ifs;
  dmem_req_t   dmr;
  dmem_rsp_t   dms;
  fpu_req_t    fpr;
  fpu_rsp_t    fps;
  logic        iu_error, iu_halt;
  logic [2:0]  iu_cwp;
  logic        iu_rst;              // reset or the watchdog

  iu #(.HAS_FPU(HAS_FPU)) u_iu (
    .clk, .rst(iu_rst), .ifetch_req_o(ifr), .ifetch_rsp_i(ifs), .dmem_req_o(dmr), .dmem_rsp_i(dms),
    .fpu_req_o(fpr), .fpu_rsp_i(fps), .irl_i, .error_o(iu_error), .cwp_o(iu_cwp), .halt_o(iu_halt));

  generate
    if (HAS_FPU) begin : g_fpu
      fpu u_fpu (.clk, .rst(iu_rst), .req_i(fpr), .rsp_o(fps));
    end else begin : g_nofpu
      assign fps = '0;
    end
  endgenerate

  // The watchdog: error mode resets the IU (PC 0, S = 1, ET = 0) into boot
  // mode with SFSR.EM set; everything else keeps its state
  logic error_q, wd_now;
  always_ff @(posedge clk) begin
    if (rst) error_q <= 1'b0;
    else error_q <= iu_error;
  end
  assign wd_now = iu_error && !error_q;
  assign iu_rst = rst | wd_now;
  assign wd_reset_o = wd_now;
  assign halt_o = iu_error;

  // ---------------------------------------------------------------------
  // The MMU
  // ---------------------------------------------------------------------
  logic        rg_valid, rg_we, rg_ack, rg_fault;
  logic [7:0]  rg_asi;
  logic [31:0] rg_va, rg_wdata, rg_rdata;
  logic [1:0]  rg_size;
  xlat_req_t   xi, xd;
  xlat_rsp_t   xi_r, xd_r;
  logic        wk_req_d, wk_req_i, wk_done, wk_fault, wk_masked;
  logic [1:0]  wk_owner;
  logic        be_valid, be_no_fault, be_masked;
  at_t         be_at;
  logic [31:0] be_va;
  mem_req_t    mem_w;
  mem_rsp_t    mem_w_r;
  logic [31:0] mcntl;

  srmmu u_mmu (
    .clk, .rst,
    .reg_valid_i(rg_valid), .reg_we_i(rg_we), .reg_asi_i(rg_asi), .reg_va_i(rg_va), .reg_wdata_i(rg_wdata),
    .reg_size_i(rg_size), .reg_ack_o(rg_ack), .reg_fault_o(rg_fault), .reg_rdata_o(rg_rdata),
    .xi_i(xi), .xi_o(xi_r), .xd_i(xd), .xd_o(xd_r),
    .walk_req_d_i(wk_req_d), .walk_req_i_i(wk_req_i), .walk_owner_o(wk_owner),
    .walk_done_o(wk_done), .walk_fault_o(wk_fault), .walk_masked_o(wk_masked),
    .berr_valid_i(be_valid), .berr_at_i(be_at), .berr_va_i(be_va), .berr_no_fault_i(be_no_fault), .berr_masked_o(be_masked),
    .mem_req_o(mem_w), .mem_rsp_i(mem_w_r),
    .sysconf_i({RAM_MB, 16'd0, 3'd0, 1'b1}),
    .mcntl_o(mcntl), .wd_i(wd_now), .si_reset_o(si_reset_o));

  logic ie, de, nf;
  assign ie = mcntl[MC_IE];
  assign de = mcntl[MC_DE];
  assign nf = mcntl[MC_NF];

  // ---------------------------------------------------------------------
  // The caches
  // ---------------------------------------------------------------------
  logic        ic_req, ic_done, ic_err;
  logic [35:0] ic_pa;
  logic [8:0]  ic_idx;
  logic        ic_cacheable;
  logic [63:0] ic_rdata;
  logic        ic_inval, dc_inval;
  logic [35:5] inval_line;
  logic        ic_flash_v, ic_flash_l, dc_flash_v, dc_flash_l;
  logic        ic_flash_busy, dc_flash_busy;
  logic        ic_dg_req, ic_dg_done, dc_dg_req, dc_dg_done;
  logic [63:0] ic_dg_rdata, dc_dg_rdata;
  mem_req_t    mem_i, mem_d;
  mem_rsp_t    mem_i_r, mem_d_r;

  l1cache #(.ICACHE(1'b1)) u_ic (
    .clk, .rst, .enable_i(ie), .mid_i,
    .req_i(ic_req), .we_i(1'b0), .atomic_i(1'b0), .cacheable_i(ic_cacheable), .pa_i(ic_pa), .idx_i(ic_idx), .be_i(8'hFF), .wdata_i(64'd0),
    .done_o(ic_done), .rdata_o(ic_rdata), .err_o(ic_err),
    .inval_i(ic_inval), .inval_line_i(inval_line), .snoop_i,
    .flash_v_i(ic_flash_v), .flash_l_i(ic_flash_l), .flash_busy_o(ic_flash_busy),
    .diag_req_i(ic_dg_req), .diag_we_i(dmr.write), .diag_tag_i(!dmr.asi[0]), .diag_va_i(dmr.va), .diag_wdata_i(diag_wdata),
    .diag_done_o(ic_dg_done), .diag_rdata_o(ic_dg_rdata),
    .mem_req_o(mem_i), .mem_rsp_i(mem_i_r));

  logic        dc_req, dc_we, dc_atomic, dc_cacheable, dc_done, dc_err;
  logic [35:0] dc_pa;
  logic [8:0]  dc_idx;
  logic [7:0]  dc_be;
  logic [63:0] dc_wdata, dc_rdata;

  // The walker's R/M writes are this module's own, which the D-cache does
  // not take from the snoop broadcast: drop the line they hit explicitly
  logic        walk_wr_ack;
  logic        dc_inval_any;
  logic [35:5] dc_inval_line;
  assign walk_wr_ack   = owner == 2'd1 && mem_rsp_i.ack && mem_w.write;
  assign dc_inval_any  = dc_inval | walk_wr_ack;
  assign dc_inval_line = walk_wr_ack ? mem_w.pa[35:5] : inval_line;

  l1cache #(.ICACHE(1'b0)) u_dc (
    .clk, .rst, .enable_i(de), .mid_i,
    .req_i(dc_req), .we_i(dc_we), .atomic_i(dc_atomic), .cacheable_i(dc_cacheable), .pa_i(dc_pa), .idx_i(dc_idx), .be_i(dc_be), .wdata_i(dc_wdata),
    .done_o(dc_done), .rdata_o(dc_rdata), .err_o(dc_err),
    .inval_i(dc_inval_any), .inval_line_i(dc_inval_line), .snoop_i,
    .flash_v_i(dc_flash_v), .flash_l_i(dc_flash_l), .flash_busy_o(dc_flash_busy),
    .diag_req_i(dc_dg_req), .diag_we_i(dmr.write), .diag_tag_i(!dmr.asi[0]), .diag_va_i(dmr.va), .diag_wdata_i(diag_wdata),
    .diag_done_o(dc_dg_done), .diag_rdata_o(dc_dg_rdata),
    .mem_req_o(mem_d), .mem_rsp_i(mem_d_r));

  // ---------------------------------------------------------------------
  // The memory-port arbiter: walker > data > instruction; the owner keeps
  // the port while its request is valid, and through a locked pair
  // ---------------------------------------------------------------------
  logic [1:0] owner_q, owner;        // 0 none, 1 walker, 2 data, 3 instruction
  logic       owner_busy, locked_q;
  always_comb begin
    case (owner_q)
      2'd1: owner_busy = mem_w.valid;
      2'd2: owner_busy = mem_d.valid | locked_q;
      2'd3: owner_busy = mem_i.valid;
      default: owner_busy = 1'b0;
    endcase
    if (owner_busy) owner = owner_q;
    else if (mem_w.valid) owner = 2'd1;
    else if (mem_d.valid) owner = 2'd2;
    else if (mem_i.valid) owner = 2'd3;
    else owner = 2'd0;
    case (owner)
      2'd1: mem_req_o = mem_w;
      2'd2: mem_req_o = mem_d;
      2'd3: mem_req_o = mem_i;
      default: mem_req_o = '0;
    endcase
    mem_w_r = '0; mem_d_r = '0; mem_i_r = '0;
    case (owner)
      2'd1: mem_w_r = mem_rsp_i;
      2'd2: mem_d_r = mem_rsp_i;
      2'd3: mem_i_r = mem_rsp_i;
      default: ;
    endcase
  end
  always_ff @(posedge clk) begin
    if (rst) begin
      owner_q <= 2'd0;
      locked_q <= 1'b0;
    end else begin
      owner_q <= owner;
      // a locked read keeps the port for the owner until its write completes;
      // a failed read has no write to wait for (an atomic to an empty slot)
      if (mem_req_o.valid && mem_rsp_i.ack) begin
        if (mem_req_o.lock && !mem_req_o.write && !mem_rsp_i.err) locked_q <= 1'b1;
        else if (mem_req_o.write || mem_rsp_i.err) locked_q <= 1'b0;
      end
    end
  end

  // ---------------------------------------------------------------------
  // The instruction side: the IU's request is translated in the cycle it
  // is made and the cache indexed at once; a cache hit answers in the
  // next cycle, in which the IU's next request is taken, so that fetches
  // run one per cycle on hits.
  // ---------------------------------------------------------------------
  typedef enum logic [2:0] {I_IDLE, I_XLAT, I_WALK, I_WALK_WAIT, I_CACHE} istate_t;
  istate_t     is;
  logic [31:0] i_va;
  logic        i_supv;
  logic [35:0] ic_pa_q;
  logic        ic_cacheable_q;
  ifetch_rsp_t ifs_q;

  logic        i_new, i_xlat_now, i_hit_now;
  logic [31:0] i_va_now;
  logic        i_supv_now;
  assign i_new      = ifr.valid && (is == I_IDLE || (is == I_CACHE && ic_done));
  assign i_xlat_now = i_new || is == I_XLAT;
  assign i_va_now   = i_new ? ifr.va : i_va;
  assign i_supv_now = i_new ? ifr.supv : i_supv;
  at_t         i_at;
  assign i_at = {1'b0, 1'b1, i_supv};

  always_comb begin
    xi = '0;
    xi.valid = i_xlat_now;
    xi.va = i_va_now;
    xi.at = {1'b0, 1'b1, i_supv_now};
    xi.no_fault = 1'b0;
    wk_req_i = i_xlat_now && xi_r.miss && wk_owner == 2'd0;
  end
  assign i_hit_now    = i_xlat_now && xi_r.hit;
  assign ic_req       = i_hit_now || (is == I_CACHE && !ic_done);
  assign ic_pa        = i_hit_now ? xi_r.pa : ic_pa_q;
  assign ic_cacheable = i_hit_now ? cacheable_pa(xi_r.pa) : ic_cacheable_q;
  assign ic_idx       = i_hit_now ? i_va_now[11:3] : ic_pa_q[11:3];

  // The response: a cache answer the cycle it comes, a fault from the register
  always_comb begin
    ifs = ifs_q;
    if (is == I_CACHE && ic_done) begin
      ifs.valid = 1'b1;
      ifs.inst  = ic_pa_q[2] ? ic_rdata[31:0] : ic_rdata[63:32];
      ifs.fault = ic_err ? 2'd2 : 2'd0;
    end
  end

  always_ff @(posedge clk) begin
    ifs_q <= '0;
    if (iu_rst) begin
      is <= I_IDLE;
      i_va <= '0; i_supv <= 1'b0;
      ic_pa_q <= '0; ic_cacheable_q <= 1'b0;
    end else begin
      case (is)
        I_IDLE, I_CACHE, I_XLAT: begin
          if (is == I_CACHE && !ic_done) begin
            // waiting for the cache
          end else if (i_xlat_now) begin
            if (i_new) begin i_va <= ifr.va; i_supv <= ifr.supv; end
            if (xi_r.hit) begin
              ic_pa_q <= xi_r.pa;
              ic_cacheable_q <= cacheable_pa(xi_r.pa);
              is <= I_CACHE;
            end else if (xi_r.fault) begin
              ifs_q.valid <= 1'b1; ifs_q.fault <= 2'd1;
              is <= I_IDLE;
            end else if (wk_req_i) begin
              is <= I_WALK;
            end else begin
              is <= I_WALK_WAIT;          // the walker is busy for the data side
            end
          end else begin
            is <= I_IDLE;
          end
        end
        I_WALK: begin
          if (wk_done && wk_owner == 2'd2) begin
            if (wk_fault) begin ifs_q.valid <= 1'b1; ifs_q.fault <= 2'd1; is <= I_IDLE; end
            else is <= I_XLAT;
          end else if (wk_owner != 2'd2) begin
            is <= I_WALK_WAIT;            // the data side took the walker
          end
        end
        I_WALK_WAIT: begin
          if (wk_owner == 2'd0) is <= I_XLAT;
        end
        default: is <= I_IDLE;
      endcase
    end
  end

  // ---------------------------------------------------------------------
  // The data side
  // ---------------------------------------------------------------------
  // Byte lanes (big-endian: byte 0 of the doubleword is data[63:56])
  /* verilator lint_off UNUSEDSIGNAL */
  function automatic logic [7:0] lanes_be(input logic [1:0] size, input logic [2:0] a);
    case (size)
      2'd0: return 8'h80 >> a;
      2'd1: return 8'hC0 >> {a[2:1], 1'b0};
      2'd2: return a[2] ? 8'h0F : 8'hF0;
      default: return 8'hFF;
    endcase
  endfunction
  function automatic logic [63:0] lanes_wdata(input logic [1:0] size, input logic [63:0] w);
    case (size)
      2'd0: return {8{w[7:0]}};
      2'd1: return {4{w[15:0]}};
      2'd2: return {2{w[31:0]}};
      default: return w;
    endcase
  endfunction
  function automatic logic [63:0] lanes_rdata(input logic [1:0] size, input logic [2:0] a, input logic [63:0] r);
    logic [63:0] sh;
    sh = r << (a * 8);                         // the addressed byte to the top
    case (size)
      2'd0: return {56'd0, sh[63:56]};
      2'd1: return {48'd0, sh[63:48]};
      2'd2: return {32'd0, sh[63:32]};
      default: return r;
    endcase
  endfunction
  /* verilator lint_on UNUSEDSIGNAL */

  typedef enum logic [3:0] {
    D_IDLE, D_XLAT, D_WALK, D_WALK_WAIT, D_CACHE, D_REG, D_DIAG_I, D_DIAG_D, D_FLUSH_XLAT, D_FLUSH_WALK, D_FLUSH_WAIT,
    D_FLASH
  } dstate_t;
  dstate_t     ds;
  logic        d_normal, d_bypass, d_flushasi;
  at_t         d_at;
  logic        d_no_fault;
  logic [35:0] d_pa;
  logic        d_cacheable;

  // ASI 0x38, 0x49-0x4C
  logic [35:0] bk_val, bk_mask;
  logic [6:0]  bk_ctl;
  logic [3:0]  bk_sts;
  logic [31:0] ctrv;
  logic [1:0]  ctrc, ctrs;
  logic [12:0] action;

  assign d_normal   = dmr.asi[7:2] == 6'b000010;              // 0x08-0x0B
  assign d_bypass   = dmr.asi[7:4] == 4'h2;                   // 0x20-0x2F
  assign d_flushasi = (dmr.asi[7:3] == 5'b00010 && dmr.asi[2:0] <= 3'd4) ||   // 0x10-0x14
                      (dmr.asi[7:3] == 5'b00011 && dmr.asi[2:0] <= 3'd4);     // 0x18-0x1C
  assign d_at       = {dmr.write | dmr.atomic, ~dmr.asi[1], dmr.asi[0]};
  assign d_no_fault = dmr.asi != 8'h09;

  // The MMU lookup of the data side: in the cycle the IU's request arrives
  // (a normal ASI), on the retry after a walk, and for a line flush
  dmem_rsp_t   dms_q;                   // the registered part of the answer
  logic        d_new, d_bypass_now, d_hit_now;
  assign d_new        = ds == D_IDLE && dmr.valid && !dms_q.ack && d_normal;
  assign d_bypass_now = ds == D_IDLE && dmr.valid && !dms_q.ack && d_bypass;
  always_comb begin
    xd = '0;
    xd.va = dmr.va;
    if (d_new || ds == D_XLAT) begin
      xd.valid = 1'b1; xd.at = d_at; xd.no_fault = d_no_fault;
    end else if (ds == D_FLUSH_XLAT) begin
      xd.valid = 1'b1; xd.at = AT_LD_SD; xd.no_fault = 1'b1;
    end
    wk_req_d = xd.valid && xd_r.miss && wk_owner == 2'd0;
  end
  assign d_hit_now = (d_new || ds == D_XLAT) && xd_r.hit;

  // Requests to the blocks: the cache in the translation's cycle
  assign dc_req   = d_hit_now || d_bypass_now || (ds == D_CACHE && !dc_done);
  assign dc_we    = dmr.write;
  assign dc_atomic = dmr.atomic;
  assign dc_pa    = d_hit_now ? xd_r.pa : d_bypass_now ? {dmr.asi[3:0], dmr.va} : d_pa;
  assign dc_cacheable = d_hit_now ? cacheable_pa(xd_r.pa) : d_bypass_now ? 1'b0 : d_cacheable;
  assign dc_idx   = (d_hit_now || d_bypass_now) ? dmr.va[11:3] : d_pa[11:3];
  assign dc_be    = lanes_be(dmr.size, dc_pa[2:0]);     // from the PA of this cycle, not the latched one
  assign dc_wdata = lanes_wdata(dmr.size, dmr.wdata);
  assign rg_valid = ds == D_REG;
  assign rg_we    = dmr.write;
  assign rg_asi   = dmr.asi;
  assign rg_va    = dmr.va;
  assign rg_wdata = dmr.wdata[31:0];
  assign rg_size  = dmr.size;
  assign ic_dg_req = ds == D_DIAG_I;
  assign dc_dg_req = ds == D_DIAG_D;
  // a diagnostic access as a doubleword, or a word in its half
  logic [63:0] diag_wdata;
  assign diag_wdata = (dmr.size == 2'd3) ? dmr.wdata : (dmr.va[2] ? {32'd0, dmr.wdata[31:0]} : {dmr.wdata[31:0], 32'd0});
  function automatic logic [63:0] diag_rd(input logic [63:0] d);
    if (dmr.size == 2'd3) return d;
    return dmr.va[2] ? {32'd0, d[31:0]} : {32'd0, d[63:32]};
  endfunction

  // Bus errors: reported when a cache says so (the data side first)
  // a plain store is posted: its error is the chipset's to report (AFSR,
  // a level-15 interrupt), never a trap here; atomics are reads too
  logic d_berr, i_berr;
  assign d_berr = ds == D_CACHE && dc_done && dc_err && !(dmr.write && !dmr.atomic);
  assign i_berr = is == I_CACHE && ic_done && ic_err;
  assign be_valid = d_berr | i_berr;
  assign be_at    = d_berr ? d_at : i_at;
  assign be_va    = d_berr ? dmr.va : i_va;
  assign be_no_fault = d_berr ? d_no_fault : 1'b0;

  logic d_masked;                 // NF masks this access's faults
  assign d_masked = nf && d_no_fault;

  // The answer to the IU: the cache's in its own cycle, the rest registered
  always_comb begin
    dms = dms_q;
    if (ds == D_CACHE && dc_done) begin
      dms.ack = 1'b1;
      dms.rdata = lanes_rdata(dmr.size, d_pa[2:0], dc_rdata);
      dms.fault = (dc_err && !d_masked && !(dmr.write && !dmr.atomic)) ? 2'd2 : 2'd0;
    end
  end

  always_ff @(posedge clk) begin
    dms_q <= '0;
    ic_inval <= 1'b0; dc_inval <= 1'b0;
    ic_flash_v <= 1'b0; ic_flash_l <= 1'b0; dc_flash_v <= 1'b0; dc_flash_l <= 1'b0;
    if (rst) begin
      ds <= D_IDLE;
      d_pa <= '0; d_cacheable <= 1'b0; inval_line <= '0;
      bk_val <= '0; bk_mask <= '0; bk_ctl <= '0; bk_sts <= '0;
      ctrv <= '0; ctrc <= '0; ctrs <= '0; action <= '0;
    end else if (wd_now) begin
      ds <= D_IDLE;                 // abandon the access in flight
      bk_ctl <= '0; bk_sts <= '0; action <= '0; ctrc <= '0; ctrs <= '0;
    end else begin
      case (ds)
        D_IDLE: begin
          if (dmr.valid && !dms_q.ack) begin
            if (d_normal) begin
              // translated this cycle (d_new): as D_XLAT
              if (xd_r.hit) begin
                d_pa <= xd_r.pa;
                d_cacheable <= cacheable_pa(xd_r.pa);
                ds <= D_CACHE;
              end else if (xd_r.fault) begin
                dms_q.ack <= 1'b1;
                if (!d_masked) dms_q.fault <= 2'd1;
              end else if (wk_req_d) begin
                ds <= D_WALK;
              end else begin
                ds <= D_WALK_WAIT;
              end
            end else if (d_bypass) begin
              d_pa <= {dmr.asi[3:0], dmr.va};
              d_cacheable <= 1'b0;
              ds <= D_CACHE;
            end else if (dmr.asi >= 8'h03 && dmr.asi <= 8'h07) begin
              ds <= D_REG;
            end else if (dmr.asi[7:2] == 6'b000011) begin           // 0x0C-0x0F
              // doubleword, or a word (the suite's tag-clearing loops: the
              // other word of the image is written as 0)
              if (dmr.size[1] == 1'b0) begin dms_q.ack <= 1'b1; dms_q.fault <= 2'd1; end
              else ds <= dmr.asi[1] ? D_DIAG_D : D_DIAG_I;
            end else if (d_flushasi) begin
              if (dmr.write) ds <= D_FLUSH_XLAT;
              else dms_q.ack <= 1'b1;
            end else if (dmr.asi == 8'h36 || dmr.asi == 8'h37) begin
              if (dmr.write) begin
                // the sweep runs; the store completes when it is over
                if (dmr.asi[0]) begin dc_flash_v <= !dmr.va[31]; dc_flash_l <= dmr.va[31]; end
                else            begin ic_flash_v <= !dmr.va[31]; ic_flash_l <= dmr.va[31]; end
                ds <= D_FLASH;
              end else begin
                dms_q.ack <= 1'b1;
              end
            end else if (dmr.asi == 8'h38) begin
              dms_q.ack <= 1'b1;
              if (dmr.size != 2'd3) dms_q.fault <= 2'd1;
              else begin
                case (dmr.va[9:8])
                  2'd0: begin dms_q.rdata <= {28'd0, bk_val};  if (dmr.write) bk_val <= dmr.wdata[35:0]; end
                  2'd1: begin dms_q.rdata <= {28'd0, bk_mask}; if (dmr.write) bk_mask <= dmr.wdata[35:0]; end
                  2'd2: begin dms_q.rdata <= {57'd0, bk_ctl};  if (dmr.write) bk_ctl <= dmr.wdata[6:0]; end
                  default: begin dms_q.rdata <= {60'd0, bk_sts}; if (dmr.write) bk_sts <= dmr.wdata[3:0]; else bk_sts <= '0; end
                endcase
              end
            end else if (dmr.asi == 8'h49) begin
              dms_q.ack <= 1'b1; dms_q.rdata <= {32'd0, ctrv}; if (dmr.write) ctrv <= dmr.wdata[31:0];
            end else if (dmr.asi == 8'h4A) begin
              dms_q.ack <= 1'b1; dms_q.rdata <= {62'd0, ctrc}; if (dmr.write) ctrc <= dmr.wdata[1:0];
            end else if (dmr.asi == 8'h4B) begin
              dms_q.ack <= 1'b1; dms_q.rdata <= {62'd0, ctrs}; if (dmr.write) ctrs <= dmr.wdata[1:0];
            end else if (dmr.asi == 8'h4C) begin
              dms_q.ack <= 1'b1; dms_q.rdata <= {51'd0, action}; if (dmr.write) action <= dmr.wdata[12:0];
            end else begin
              dms_q.ack <= 1'b1;                                   // reserved: 0
            end
          end
        end
        D_XLAT: begin
          if (xd_r.hit) begin
            d_pa <= xd_r.pa;
            d_cacheable <= cacheable_pa(xd_r.pa);
            ds <= D_CACHE;
          end else if (xd_r.fault) begin
            dms_q.ack <= 1'b1;
            if (!d_masked) dms_q.fault <= 2'd1;
            ds <= D_IDLE;
          end else if (wk_req_d) begin
            ds <= D_WALK;
          end else begin
            ds <= D_WALK_WAIT;
          end
        end
        D_WALK: begin
          if (wk_done && wk_owner == 2'd1) begin
            if (wk_fault) begin
              dms_q.ack <= 1'b1;
              if (!wk_masked) dms_q.fault <= 2'd1;
              ds <= D_IDLE;
            end else ds <= D_XLAT;
          end else if (wk_owner != 2'd1) begin
            ds <= D_WALK_WAIT;
          end
        end
        D_WALK_WAIT: begin
          if (wk_owner == 2'd0) ds <= D_XLAT;
        end
        D_CACHE: begin
          if (dc_done) ds <= D_IDLE;      // the answer is combinational
        end
        D_REG: begin
          if (rg_ack) begin
            dms_q.ack <= 1'b1;
            dms_q.rdata <= {32'd0, rg_rdata};
            if (rg_fault) dms_q.fault <= 2'd1;
            ds <= D_IDLE;
          end
        end
        D_DIAG_I: begin
          if (ic_dg_done) begin dms_q.ack <= 1'b1; dms_q.rdata <= diag_rd(ic_dg_rdata); ds <= D_IDLE; end
        end
        D_DIAG_D: begin
          if (dc_dg_done) begin dms_q.ack <= 1'b1; dms_q.rdata <= diag_rd(dc_dg_rdata); ds <= D_IDLE; end
        end
        D_FLUSH_XLAT: begin
          if (xd_r.hit) begin
            inval_line <= xd_r.pa[35:5];
            dc_inval <= !dmr.asi[3];          // 0x10-0x14 both caches, 0x18-0x1C the I-cache
            ic_inval <= 1'b1;
            dms_q.ack <= 1'b1;
            ds <= D_IDLE;
          end else if (xd_r.fault) begin
            dms_q.ack <= 1'b1;                  // an unmapped page: nothing to flush
            ds <= D_IDLE;
          end else if (wk_req_d) begin
            ds <= D_FLUSH_WALK;
          end else begin
            ds <= D_FLUSH_WAIT;
          end
        end
        D_FLUSH_WALK: begin
          if (wk_done && wk_owner == 2'd1) begin
            if (wk_fault) begin dms_q.ack <= 1'b1; ds <= D_IDLE; end
            else ds <= D_FLUSH_XLAT;
          end else if (wk_owner != 2'd1) ds <= D_FLUSH_WAIT;
        end
        D_FLUSH_WAIT: begin
          if (wk_owner == 2'd0) ds <= D_FLUSH_XLAT;
        end
        D_FLASH: begin
          if (!ic_flash_busy && !dc_flash_busy && !ic_flash_v && !ic_flash_l && !dc_flash_v && !dc_flash_l) begin
            dms_q.ack <= 1'b1;
            ds <= D_IDLE;
          end
        end
        default: ds <= D_IDLE;
      endcase
    end
  end

  logic unused_ok;
  assign unused_ok = &{1'b0, iu_halt, iu_cwp, be_masked, xd_r.pte_c, xi_r.pte_c, ifr.supv, dmr.va[7:0]};

endmodule
