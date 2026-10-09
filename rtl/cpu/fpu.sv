// SPDX-License-Identifier: GPL-2.0-or-later
//
// fpu: the SPARC V8 floating-point unit of the CPU module (docs/arch/cpu.md
// §2): 32 single registers (pairs for doubles), the FSR, a one-entry
// floating-point queue, the deferred-trap state machine, and a multi-cycle
// datapath: add/sub, multiply, divide, square root, compare, conversions,
// in single and double precision; quad traps as unimplemented.
//
// From: The SPARC Architecture Manual V8 §4.4 (the FSR and the FQ: LDFSR
//   does not touch ftt or qne; every FPop that does not trap clears ftt and
//   sets cexc; an IEEE trap leaves aexc, fcc and the destination alone),
//   §4.5 and App. L/M (the FPU states fp_execute, fp_exception_pending,
//   fp_exception; the trap is taken on a later FP instruction and the FQ
//   holds the faulting FPop's address and word; in fp_exception only FP
//   stores run; an FPop, FP load or FBfcc there is a sequence_error),
//   §B.6-B.10 (the FPop definitions), App. N (the NaN rules: a signalling
//   NaN raises invalid and wins over a quiet one, otherwise rs2's NaN is
//   returned quieted; the default NaN 0x7FFFFFFF... for invalid results;
//   F?TOi out of range gives 0x7FFFFFFF or 0x80000000 by sign, a NaN
//   0x7FFFFFFF), §7 Table 7-1 (fp_exception priority 11); IEEE 754-1985
//   for the arithmetic (fp_round.sv); tests/fpu/README.md for the
//   conventions chosen (tininess after rounding, as the SuperSPARC and
//   QEMU), tests/fpu/vectors as the unit test, tests/cpu/src/t_fpu.S and
//   t_iu2.S (t_fpu_trap_prio, t_fpu_fq) as the acceptance tests.
//
// The IU interface (fpu_pkg: fpu_req_t / fpu_rsp_t, docs/arch/cpu.md
// §1.7): the IU hands an FPop over when it commits it; the FPU is busy
// while it executes and the IU holds every later FP instruction. The IU
// reads the registers for FP stores (rd_addr), writes them for FP loads,
// writes the FSR (ldfsr), pops the queue (stdfq). exc_pending says a
// deferred fp_exception waits: the IU traps on its next FP instruction
// and reports trap_taken, and the FPU enters fp_exception; the IU also
// reports trap_taken for a sequence error it detected (an FPop/FBfcc/FP
// load in fp_exception, an stdfq on an empty queue): then ftt <- 4.

module fpu
  import fpu_pkg::*;
(
  input  logic     clk,
  input  logic     rst,
  input  fpu_req_t req_i,
  output fpu_rsp_t rsp_o
);

  // ---------------------------------------------------------------------
  // Registers: 16 pairs
  // ---------------------------------------------------------------------
  logic [63:0] regs [16];

  logic        dp_wr;                  // the datapath's write
  logic [4:0]  dp_wr_addr;
  logic        dp_wr_dbl;
  logic [63:0] dp_wr_data;             // a single in [63:32]

  always_ff @(posedge clk) begin
    if (req_i.wr_valid) begin
      if (req_i.wr_dbl)          regs[req_i.wr_addr[4:1]] <= req_i.wr_data;
      else if (req_i.wr_addr[0]) regs[req_i.wr_addr[4:1]][31:0] <= req_i.wr_data[31:0];
      else                       regs[req_i.wr_addr[4:1]][63:32] <= req_i.wr_data[31:0];
    end
    if (dp_wr) begin
      if (dp_wr_dbl)          regs[dp_wr_addr[4:1]] <= dp_wr_data;
      else if (dp_wr_addr[0]) regs[dp_wr_addr[4:1]][31:0] <= dp_wr_data[63:32];
      else                    regs[dp_wr_addr[4:1]][63:32] <= dp_wr_data[63:32];
    end
  end

  // ---------------------------------------------------------------------
  // FSR, the queue, the state
  // ---------------------------------------------------------------------
  logic [1:0] fsr_rd;
  logic [4:0] fsr_tem, fsr_aexc, fsr_cexc;
  logic [2:0] fsr_ftt;
  logic [1:0] fsr_fcc;
  logic [63:0] fq;
  logic        qne;

  typedef enum logic [1:0] {FP_EXECUTE, FP_PENDING, FP_EXCEPTION} fstate_t;
  fstate_t state;

  typedef enum logic [2:0] {S_IDLE, S_START, S_WAIT, S_ROUND, S_DONE} exstate_t;
  exstate_t ex;

  always_comb begin
    rsp_o = '0;
    rsp_o.busy        = (ex != S_IDLE) | dp_wr;
    rsp_o.exc_pending = state == FP_PENDING;
    rsp_o.exc_state   = state == FP_EXCEPTION;
    rsp_o.rd_data     = regs[req_i.rd_addr[4:1]];
    rsp_o.fsr         = {fsr_rd, 2'b00, fsr_tem, 1'b0, 2'b00, 3'b000, fsr_ftt, qne, 1'b0, fsr_fcc, fsr_aexc, fsr_cexc};
    rsp_o.fq          = fq;
  end

  // ---------------------------------------------------------------------
  // The FPop: decode
  // ---------------------------------------------------------------------
  logic [8:0] opf;
  logic [4:0] rs1, rs2, rd;
  logic       is_fpop2;
  assign opf = req_i.fpop_inst[13:5];
  assign rs1 = req_i.fpop_inst[18:14];
  assign rs2 = req_i.fpop_inst[4:0];
  assign rd  = req_i.fpop_inst[29:25];
  assign is_fpop2 = req_i.fpop_inst[19];        // op3 0x35

  typedef enum logic [3:0] {
    O_MOV, O_NEG, O_ABS, O_ADD, O_SUB, O_MUL, O_DIV, O_SQRT, O_CMP, O_CMPE,
    O_ITOF, O_FTOI, O_FTOF, O_UNIMPL
  } fop_t;

  fop_t       op;
  logic       src_dbl, dst_dbl;        // operand / result precision

  always_comb begin
    op = O_UNIMPL; src_dbl = 1'b0; dst_dbl = 1'b0;
    case (opf)
      OPF_FMOVS:  op = O_MOV;
      OPF_FNEGS:  op = O_NEG;
      OPF_FABSS:  op = O_ABS;
      OPF_FSQRTS: op = O_SQRT;
      OPF_FSQRTD: begin op = O_SQRT; src_dbl = 1'b1; dst_dbl = 1'b1; end
      OPF_FADDS:  op = O_ADD;
      OPF_FADDD:  begin op = O_ADD; src_dbl = 1'b1; dst_dbl = 1'b1; end
      OPF_FSUBS:  op = O_SUB;
      OPF_FSUBD:  begin op = O_SUB; src_dbl = 1'b1; dst_dbl = 1'b1; end
      OPF_FMULS:  op = O_MUL;
      OPF_FMULD:  begin op = O_MUL; src_dbl = 1'b1; dst_dbl = 1'b1; end
      OPF_FSMULD: begin op = O_MUL; src_dbl = 1'b0; dst_dbl = 1'b1; end
      OPF_FDIVS:  op = O_DIV;
      OPF_FDIVD:  begin op = O_DIV; src_dbl = 1'b1; dst_dbl = 1'b1; end
      OPF_FITOS:  op = O_ITOF;
      OPF_FITOD:  begin op = O_ITOF; dst_dbl = 1'b1; end
      OPF_FSTOI:  op = O_FTOI;
      OPF_FDTOI:  begin op = O_FTOI; src_dbl = 1'b1; end
      OPF_FSTOD:  begin op = O_FTOF; dst_dbl = 1'b1; end
      OPF_FDTOS:  begin op = O_FTOF; src_dbl = 1'b1; end
      OPF_FCMPS:  op = O_CMP;
      OPF_FCMPD:  begin op = O_CMP; src_dbl = 1'b1; end
      OPF_FCMPES: op = O_CMPE;
      OPF_FCMPED: begin op = O_CMPE; src_dbl = 1'b1; end
      default:    op = O_UNIMPL;         // the quad forms and anything else
    endcase
    if (is_fpop2 && !(op == O_CMP || op == O_CMPE)) op = O_UNIMPL;
    if (!is_fpop2 && (op == O_CMP || op == O_CMPE)) op = O_UNIMPL;
  end

  // Operands: the pair, a single taken from its half into [63:32]
  logic [63:0] a_bits, b_bits, a_pair, b_pair;
  assign a_pair = regs[rs1[4:1]];
  assign b_pair = regs[rs2[4:1]];
  always_comb begin
    a_bits = src_dbl ? a_pair : (rs1[0] ? {a_pair[31:0], 32'd0} : {a_pair[63:32], 32'd0});
    b_bits = src_dbl ? b_pair : (rs2[0] ? {b_pair[31:0], 32'd0} : {b_pair[63:32], 32'd0});
  end

  fp_t a, b;
  fp_unpack u_ua (.dbl_i(src_dbl), .bits_i(a_bits), .v_o(a));
  fp_unpack u_ub (.dbl_i(src_dbl), .bits_i(b_bits), .v_o(b));

  // ---------------------------------------------------------------------
  // The execution: a small state machine around the datapath
  // ---------------------------------------------------------------------
  // Latched operation
  fop_t        c_op;
  logic        c_src_dbl, c_dst_dbl;
  logic [4:0]  c_rd;
  logic [31:0] c_inst, c_pc;
  fp_t         c_a, c_b;
  logic [63:0] c_a_bits, c_b_bits;

  // Datapath results
  fp_wide_t    wide;                   // what goes to the rounder
  logic [63:0] res_bits;               // a direct result (NaN, inf, zero, compare, moves)
  logic [4:0]  res_flags;
  logic        res_direct;             // res_bits is final (no rounding)
  logic [1:0]  res_fcc;
  logic        res_is_cmp;

  // Rounder
  logic [63:0] rnd_bits;
  logic [4:0]  rnd_flags;
  fp_round u_round (.v_i(wide), .dbl_i(c_dst_dbl), .rd_i(fsr_rd), .uf_trap_i(fsr_tem[FX_UF]),
                    .bits_o(rnd_bits), .flags_o(rnd_flags));

  // Divide / square root
  logic     ds_start, ds_busy, ds_done;
  fp_wide_t ds_r;
  fp_divsqrt u_ds (.clk, .rst, .start_i(ds_start), .sqrt_i(c_op == O_SQRT), .a_i(c_a), .b_i(c_b),
                   .busy_o(ds_busy), .done_o(ds_done), .r_o(ds_r));

  // Multiply: 53x53, registered twice
  logic [105:0] mul_p1, mul_p2;
  always_ff @(posedge clk) begin
    mul_p1 <= c_a.man * c_b.man;
    mul_p2 <= mul_p1;
  end

  // Add/sub: align to the larger exponent, 58-bit significands with the
  // leading one at 55 (three guard bits below), a sticky for what falls
  // off; the sticky enters the sum as a half-ulp below so that a
  // subtraction borrows (the result's bit 0 is then the new sticky).
  logic        sub_eff;                // effective subtraction
  logic signed [13:0] e_big;
  logic [57:0] ma, mb, m_big, m_small, m_small_al;
  logic [13:0] ediff;
  logic        a_bigger, al_sticky;
  logic [58:0] sum;
  always_comb begin
    sub_eff = (c_op == O_SUB) ^ c_a.sign ^ c_b.sign;
    a_bigger = (c_a.exp > c_b.exp) || (c_a.exp == c_b.exp && c_a.man >= c_b.man);
    ma = {2'b0, c_a.man, 3'b0};
    mb = {2'b0, c_b.man, 3'b0};
    e_big   = a_bigger ? c_a.exp : c_b.exp;
    m_big   = a_bigger ? ma : mb;
    m_small = a_bigger ? mb : ma;
    ediff = 14'(a_bigger ? (c_a.exp - c_b.exp) : (c_b.exp - c_a.exp));
    al_sticky = 1'b0;
    if (ediff > 14'd60) begin
      m_small_al = '0;
      al_sticky = m_small != '0;
    end else begin
      m_small_al = m_small >> ediff[5:0];
      for (int i = 0; i < 58; i++) if (i < int'(ediff[5:0]) && m_small[i]) al_sticky = 1'b1;
    end
    if (sub_eff) sum = {m_big, 1'b0} - {m_small_al, al_sticky};
    else         sum = {m_big, 1'b0} + {m_small_al, al_sticky};
  end

  // NaN handling (V8 App. N): a signalling NaN wins, else rs2's; quieted
  function automatic logic [63:0] quiet(input logic [63:0] bits, input logic dbl);
    return dbl ? (bits | 64'h0008_0000_0000_0000) : (bits | 64'h0040_0000_0000_0000);
  endfunction
  function automatic logic [63:0] default_nan(input logic dbl);
    return dbl ? 64'h7FFF_FFFF_FFFF_FFFF : 64'h7FFF_FFFF_0000_0000;
  endfunction
  function automatic logic [63:0] inf_of(input logic s, input logic dbl);
    return dbl ? {s, 11'h7FF, 52'd0} : {s, 8'hFF, 23'd0, 32'd0};
  endfunction
  function automatic logic [63:0] zero_of(input logic s);
    return {s, 63'd0};
  endfunction
  // widen or narrow a NaN pattern between the precisions (the fraction's top bits are kept)
  function automatic logic [63:0] conv_nan(input logic [63:0] bits, input logic sd, input logic dd);
    if (sd == dd) return bits;
    if (dd) return {bits[63], 11'h7FF, bits[54:32], 29'd0};
    return {bits[63], 8'hFF, bits[51:29], 32'd0};
  endfunction
  // the NaN result of a two-operand op in the source precision
  logic [63:0] nan2;
  always_comb begin
    if (c_src_dbl != c_dst_dbl)              // fsmuld: both operands widened first (QEMU)
      nan2 = c_b.nan ? c_b_bits : c_a_bits;
    else if (c_b.snan)                       nan2 = c_b_bits;
    else if (c_a.snan)                       nan2 = c_a_bits;
    else if (c_b.nan)                        nan2 = c_b_bits;
    else                                     nan2 = c_a_bits;
  end

  // Integer conversions
  logic [31:0] itof_abs;
  logic [5:0]  ftoi_sh;
  logic [52:0] ftoi_mi;
  logic [31:0] ftoi_iv;
  logic        ftoi_inexact;
  always_comb begin
    itof_abs = c_b_bits[63] ? (32'd0 - c_b_bits[63:32]) : c_b_bits[63:32];
    // value = man * 2^(exp - 52), 0 <= exp <= 31: integer part = man >> (52 - exp)
    ftoi_sh = 6'(14'sd52 - c_b.exp);
    ftoi_mi = c_b.man >> ftoi_sh;
    ftoi_inexact = 1'b0;
    for (int i = 0; i < 53; i++) if (i < int'(ftoi_sh) && c_b.man[i]) ftoi_inexact = 1'b1;
    ftoi_iv = ftoi_mi[31:0];
  end

  // The direct results and the wide operand for the rounder, per op
  always_comb begin
    wide = '0;
    res_bits = '0;
    res_flags = '0;
    res_direct = 1'b0;
    res_fcc = 2'd0;
    res_is_cmp = 1'b0;
    case (c_op)
      O_MOV: begin res_direct = 1'b1; res_bits = c_b_bits; end
      O_NEG: begin res_direct = 1'b1; res_bits = {~c_b_bits[63], c_b_bits[62:0]}; end
      O_ABS: begin res_direct = 1'b1; res_bits = {1'b0, c_b_bits[62:0]}; end

      O_ADD, O_SUB: begin
        if (c_a.nan || c_b.nan) begin
          res_direct = 1'b1;
          res_flags[FX_NV] = c_a.snan | c_b.snan;
          res_bits = quiet(nan2, c_src_dbl);
        end else if (c_a.inf && c_b.inf) begin
          res_direct = 1'b1;
          if (sub_eff) begin res_flags[FX_NV] = 1'b1; res_bits = default_nan(c_dst_dbl); end
          else res_bits = inf_of(c_a.sign, c_dst_dbl);
        end else if (c_a.inf) begin res_direct = 1'b1; res_bits = inf_of(c_a.sign, c_dst_dbl); end
        else if (c_b.inf) begin res_direct = 1'b1; res_bits = inf_of(c_b.sign ^ (c_op == O_SUB), c_dst_dbl); end
        else if (c_a.zero && c_b.zero) begin
          res_direct = 1'b1;
          // the sum of two zeros: the common sign, else +0 (-0 in round-to-minus)
          if (sub_eff) res_bits = zero_of(fsr_rd == RD_MINF);
          else         res_bits = zero_of(c_a.sign);
        end else if (c_a.zero) begin res_direct = 1'b1; res_bits = {c_b_bits[63] ^ (c_op == O_SUB), c_b_bits[62:0]}; end
        else if (c_b.zero) begin res_direct = 1'b1; res_bits = c_a_bits; end
        else begin
          wide.exp = e_big;
          if (sum == '0) begin
            wide.man = '0;                    // exact cancellation: +0 (-0 in round-to-minus)
            wide.sign = fsr_rd == RD_MINF;
            wide.sticky = 1'b0;
          end else begin
            wide.sign = a_bigger ? c_a.sign : (c_b.sign ^ (c_op == O_SUB));
            wide.man = sum[58:1];
            wide.sticky = sum[0];
          end
        end
      end

      O_MUL: begin
        if (c_a.nan || c_b.nan) begin
          res_direct = 1'b1;
          res_flags[FX_NV] = c_a.snan | c_b.snan;
          res_bits = quiet(conv_nan(nan2, c_src_dbl, c_dst_dbl), c_dst_dbl);
        end else if ((c_a.inf && c_b.zero) || (c_a.zero && c_b.inf)) begin
          res_direct = 1'b1; res_flags[FX_NV] = 1'b1; res_bits = default_nan(c_dst_dbl);
        end else if (c_a.inf || c_b.inf) begin
          res_direct = 1'b1; res_bits = inf_of(c_a.sign ^ c_b.sign, c_dst_dbl);
        end else if (c_a.zero || c_b.zero) begin
          res_direct = 1'b1; res_bits = zero_of(c_a.sign ^ c_b.sign);
        end else begin
          // p = man_a * man_b in [2^104, 2^106): value = p * 2^(ea + eb - 104);
          // the top 58 bits, the rest sticky: man * 2^(ea + eb - 56) = man * 2^(exp - 55)
          wide.sign = c_a.sign ^ c_b.sign;
          wide.man = mul_p2[105:48];
          wide.sticky = |mul_p2[47:0];
          wide.exp = c_a.exp + c_b.exp - 14'sd1;
        end
      end

      O_DIV: begin
        if (c_a.nan || c_b.nan) begin
          res_direct = 1'b1;
          res_flags[FX_NV] = c_a.snan | c_b.snan;
          res_bits = quiet(nan2, c_src_dbl);
        end else if ((c_a.inf && c_b.inf) || (c_a.zero && c_b.zero)) begin
          res_direct = 1'b1; res_flags[FX_NV] = 1'b1; res_bits = default_nan(c_dst_dbl);
        end else if (c_a.inf) begin res_direct = 1'b1; res_bits = inf_of(c_a.sign ^ c_b.sign, c_dst_dbl); end
        else if (c_b.inf) begin res_direct = 1'b1; res_bits = zero_of(c_a.sign ^ c_b.sign); end
        else if (c_b.zero) begin
          res_direct = 1'b1; res_flags[FX_DZ] = 1'b1; res_bits = inf_of(c_a.sign ^ c_b.sign, c_dst_dbl);
        end else if (c_a.zero) begin res_direct = 1'b1; res_bits = zero_of(c_a.sign ^ c_b.sign); end
        else wide = ds_r;
      end

      O_SQRT: begin
        if (c_b.nan) begin
          res_direct = 1'b1; res_flags[FX_NV] = c_b.snan; res_bits = quiet(c_b_bits, c_src_dbl);
        end else if (c_b.zero) begin res_direct = 1'b1; res_bits = c_b_bits; end
        else if (c_b.sign) begin res_direct = 1'b1; res_flags[FX_NV] = 1'b1; res_bits = default_nan(c_dst_dbl); end
        else if (c_b.inf) begin res_direct = 1'b1; res_bits = c_b_bits; end
        else wide = ds_r;
      end

      O_CMP, O_CMPE: begin
        res_direct = 1'b1;
        res_is_cmp = 1'b1;
        if (c_a.nan || c_b.nan) begin
          res_fcc = 2'd3;
          res_flags[FX_NV] = (c_op == O_CMPE) | c_a.snan | c_b.snan;
        end else if (c_a.zero && c_b.zero) res_fcc = 2'd0;
        else if (c_a.sign != c_b.sign)      res_fcc = c_a.sign ? 2'd1 : 2'd2;
        else if (c_a.inf && c_b.inf)        res_fcc = 2'd0;
        else if (c_a.inf)                   res_fcc = c_a.sign ? 2'd1 : 2'd2;
        else if (c_b.inf)                   res_fcc = c_b.sign ? 2'd2 : 2'd1;
        else if (c_a.zero)                  res_fcc = c_b.sign ? 2'd2 : 2'd1;
        else if (c_b.zero)                  res_fcc = c_a.sign ? 2'd1 : 2'd2;
        else if (c_a.exp == c_b.exp && c_a.man == c_b.man) res_fcc = 2'd0;
        else if (a_bigger)                  res_fcc = c_a.sign ? 2'd1 : 2'd2;
        else                                res_fcc = c_a.sign ? 2'd2 : 2'd1;
      end

      O_ITOF: begin
        // the 32-bit integer in b_bits[63:32]: value = |i| * 2^(55 - 55)
        wide.sign = c_b_bits[63];
        wide.man = 58'(itof_abs);
        wide.exp = 14'sd55;
        wide.sticky = 1'b0;
      end

      O_FTOI: begin
        // round toward zero; out of range (beyond int32 after truncation) or NaN: invalid
        res_direct = 1'b1;
        if (c_b.nan) begin
          res_flags[FX_NV] = 1'b1; res_bits = {32'h7FFF_FFFF, 32'd0};
        end else if (c_b.inf || c_b.exp > 14'sd31 ||
                     (c_b.exp == 14'sd31 && !(c_b.sign && ftoi_mi[31:0] == 32'h8000_0000))) begin
          // (a negative value that truncates to exactly -2^31 is in range)
          res_flags[FX_NV] = 1'b1;
          res_bits = {c_b.sign ? 32'h8000_0000 : 32'h7FFF_FFFF, 32'd0};
        end else if (c_b.zero || c_b.exp < 14'sd0) begin
          res_bits = '0;
          res_flags[FX_NX] = !c_b.zero;
        end else begin
          res_bits = {c_b.sign ? (32'd0 - ftoi_iv) : ftoi_iv, 32'd0};
          res_flags[FX_NX] = ftoi_inexact;
        end
      end

      O_FTOF: begin
        if (c_b.nan) begin
          res_direct = 1'b1; res_flags[FX_NV] = c_b.snan;
          res_bits = quiet(conv_nan(c_b_bits, c_src_dbl, c_dst_dbl), c_dst_dbl);
        end else if (c_b.inf) begin res_direct = 1'b1; res_bits = inf_of(c_b.sign, c_dst_dbl); end
        else if (c_b.zero) begin res_direct = 1'b1; res_bits = zero_of(c_b.sign); end
        else begin
          wide.sign = c_b.sign;
          wide.man = {2'b0, c_b.man, 3'b0};    // leading one at 55: value = man * 2^(exp - 55)
          wide.exp = c_b.exp;
          wide.sticky = 1'b0;
        end
      end

      default: ;
    endcase
  end

  // ---------------------------------------------------------------------
  // Control
  // ---------------------------------------------------------------------
  logic [63:0] fin_bits;
  logic [4:0]  fin_flags;
  logic [1:0]  wait_cnt;

  always_ff @(posedge clk) begin
    dp_wr <= 1'b0;
    ds_start <= 1'b0;
    if (rst) begin
      ex <= S_IDLE;
      state <= FP_EXECUTE;
      fsr_rd <= '0; fsr_tem <= '0; fsr_aexc <= '0; fsr_cexc <= '0; fsr_ftt <= '0; fsr_fcc <= '0;
      qne <= 1'b0;
      fq <= '0;
      c_op <= O_UNIMPL; c_src_dbl <= 1'b0; c_dst_dbl <= 1'b0; c_rd <= '0; c_inst <= '0; c_pc <= '0;
      c_a <= '0; c_b <= '0; c_a_bits <= '0; c_b_bits <= '0;
      wait_cnt <= '0;
      dp_wr_addr <= '0; dp_wr_dbl <= 1'b0; dp_wr_data <= '0;
      fin_bits <= '0; fin_flags <= '0;
    end else begin
      // ldfsr: everything but ver, ftt, qne and the reserved bits
      if (req_i.fsr_wr) begin
        fsr_rd   <= req_i.fsr_wdata[31:30];
        fsr_tem  <= req_i.fsr_wdata[27:23];
        fsr_fcc  <= req_i.fsr_wdata[11:10];
        fsr_aexc <= req_i.fsr_wdata[9:5];
        fsr_cexc <= req_i.fsr_wdata[4:0];
      end
      // stdfq: the queue empties and fp_exception ends
      if (req_i.fq_pop) begin
        qne <= 1'b0;
        if (state == FP_EXCEPTION) state <= FP_EXECUTE;
      end
      // the IU took fp_exception: the pending one, or a sequence error
      if (req_i.trap_taken) begin
        if (state == FP_PENDING) state <= FP_EXCEPTION;
        else fsr_ftt <= FTT_SEQUENCE;
      end

      case (ex)
        S_IDLE: begin
          if (req_i.fpop_valid) begin
            c_op <= op; c_src_dbl <= src_dbl; c_dst_dbl <= dst_dbl; c_rd <= rd;
            c_inst <= req_i.fpop_inst; c_pc <= req_i.fpop_pc;
            c_a <= a; c_b <= b; c_a_bits <= a_bits; c_b_bits <= b_bits;
            ex <= S_START;
          end
        end
        S_START: begin
          // operands latched: start the long units, or wait for the multiplier
          if (c_op == O_UNIMPL) begin
            ex <= S_DONE;
          end else if ((c_op == O_DIV || c_op == O_SQRT) && !res_direct) begin
            ds_start <= 1'b1;
            ex <= S_WAIT;
          end else begin
            wait_cnt <= 2'd2;              // the multiplier's two registers
            ex <= S_WAIT;
          end
        end
        S_WAIT: begin
          if ((c_op == O_DIV || c_op == O_SQRT) && !res_direct) begin
            if (ds_done) ex <= S_ROUND;
          end else if (wait_cnt != '0) begin
            wait_cnt <= wait_cnt - 2'd1;
          end else begin
            ex <= S_ROUND;
          end
        end
        S_ROUND: begin
          ex <= S_DONE;
          fin_bits <= res_direct ? res_bits : rnd_bits;
          fin_flags <= res_direct ? res_flags : (rnd_flags | res_flags);
        end
        S_DONE: begin
          ex <= S_IDLE;
          if (c_op == O_UNIMPL) begin
            fsr_ftt <= FTT_UNIMPLEMENTED;
            fq <= {c_pc, c_inst};
            qne <= 1'b1;
            state <= FP_PENDING;
          end else if ((fin_flags & fsr_tem) != 5'd0) begin
            // an enabled exception: no result, aexc and fcc unchanged, the FQ holds the op
            fsr_ftt <= FTT_IEEE;
            fsr_cexc <= fin_flags;
            fq <= {c_pc, c_inst};
            qne <= 1'b1;
            state <= FP_PENDING;
          end else begin
            fsr_ftt <= FTT_NONE;
            fsr_cexc <= fin_flags;
            fsr_aexc <= fsr_aexc | fin_flags;
            if (res_is_cmp) begin
              fsr_fcc <= res_fcc;
            end else begin
              dp_wr <= 1'b1;
              dp_wr_addr <= c_rd;
              dp_wr_dbl <= c_dst_dbl;
              dp_wr_data <= fin_bits;
            end
          end
        end
        default: ex <= S_IDLE;
      endcase
    end
  end

  logic unused_ok;
  assign unused_ok = &{1'b0, ds_busy, req_i.rd_addr[0], req_i.fsr_wdata[29:28], req_i.fsr_wdata[22:12],
                       ftoi_mi[52:32], m_small_al[57:56]};

endmodule
