// SPDX-License-Identifier: GPL-2.0-or-later
//
// fp_round: normalise, round and pack a wide result to binary32 or
// binary64, with the IEEE exception flags.
//
// From: IEEE 754-1985 §4 (rounding: nearest-even, toward zero, toward
//   +inf, toward -inf), §7.3 overflow (the result is infinity or the
//   largest finite number by rounding mode, always with inexact), §7.4
//   underflow, §7.5 inexact; V8 §4.4 cexc bit order (NV OF UF DZ NX),
//   V8 App. N.5/N.6 and the conventions in tests/fpu/README.md: tininess
//   is detected AFTER rounding (as the SuperSPARC and QEMU do: the result
//   rounded to the precision as if the exponent were unbounded lies below
//   the smallest normal); the UF flag is raised when the result is tiny
//   and inexact, or tiny with the underflow trap enabled. Subnormal
//   results are rounded at their own position: the significand is shifted
//   down first, with the shifted-out bits kept as sticky.
//
// Input: sign, exp and a 58-bit significand whose leading one may be
// anywhere, value = man * 2^(exp - 55) (so a normalised input has its
// leading one at bit 55), plus a sticky bit for everything below.

module fp_round
  import fpu_pkg::*;
(
  input  fp_wide_t    v_i,
  input  logic        dbl_i,
  input  logic [1:0]  rd_i,
  input  logic        uf_trap_i,     // TEM.UF: tiny alone raises UF
  output logic [63:0] bits_o,        // the single in [63:32]
  output logic [4:0]  flags_o        // NV OF UF DZ NX (NV, DZ are the caller's)
);

  // Round a 58-bit significand (leading one at 57) at the precision,
  // returning the 53-bit rounded significand (left-aligned), the carry
  // out (it became 2.0) and whether anything was dropped.
  function automatic logic round_up_f(input logic [1:0] rd, input logic sgn, input logic lsb,
                                      input logic guard, input logic sticky);
    case (rd)
      RD_NEAREST: return guard && (sticky || lsb);
      RD_PINF:    return (guard || sticky) && !sgn;
      RD_MINF:    return (guard || sticky) && sgn;
      default:    return 1'b0;
    endcase
  endfunction

  // 1. Normalise: leading one to bit 57
  logic [5:0]  lz;
  logic [57:0] mn;
  logic signed [13:0] en;
  logic        is_zero;

  always_comb begin
    lz = 6'd0;
    is_zero = v_i.man == '0;
    for (int i = 57; i >= 0; i--) begin
      if (v_i.man[i]) begin lz = 6'(57 - i); break; end
    end
    mn = v_i.man << lz;
    en = v_i.exp + 14'sd2 - 14'(lz);     // leading one at 57: value = mn * 2^(en - 57)
  end

  // 2. Tininess after rounding: round at the precision as a normal and
  //    look at the exponent that results.
  logic signed [13:0] emin, emax;
  logic [52:0] kept_n;
  logic        guard_n, sticky_n, up_n, carry_n;
  logic        tiny;

  always_comb begin
    emin = dbl_i ? -14'sd1022 : -14'sd126;
    emax = dbl_i ?  14'sd1023 :  14'sd127;
    if (dbl_i) begin
      kept_n = mn[57:5]; guard_n = mn[4]; sticky_n = (|mn[3:0]) | v_i.sticky;
    end else begin
      kept_n = {mn[57:34], 29'd0}; guard_n = mn[33]; sticky_n = (|mn[32:0]) | v_i.sticky;
    end
    up_n = round_up_f(rd_i, v_i.sign, dbl_i ? kept_n[0] : kept_n[29], guard_n, sticky_n);
    carry_n = up_n && (dbl_i ? (&kept_n) : (&kept_n[52:29]));
    tiny = !is_zero && ((en < emin - 14'sd1) || (en == emin - 14'sd1 && !carry_n));
  end

  // 3. The real rounding: shift a tiny result down to the subnormal
  //    position first, collecting sticky
  logic signed [13:0] shift_s;
  logic [6:0]  shift;
  logic [57:0] ms;
  logic        sticky_s;
  logic [52:0] kept;
  logic        guard, sticky;
  logic [52:0] kept_r;
  logic        carry;
  logic signed [13:0] e_r;
  logic        round_up;
  logic        inexact;
  logic        of;

  always_comb begin
    shift_s = tiny ? (emin - en) : 14'sd0;
    shift = (shift_s > 14'sd63) ? 7'd63 : 7'(shift_s);
    ms = mn >> shift;
    sticky_s = v_i.sticky;
    for (int i = 0; i < 58; i++) if (i < int'(shift) && mn[i]) sticky_s = 1'b1;
    if (dbl_i) begin
      kept   = ms[57:5];
      guard  = ms[4];
      sticky = (|ms[3:0]) | sticky_s;
    end else begin
      kept   = {ms[57:34], 29'd0};
      guard  = ms[33];
      sticky = (|ms[32:0]) | sticky_s;
    end
    inexact = guard | sticky;
    round_up = round_up_f(rd_i, v_i.sign, dbl_i ? kept[0] : kept[29], guard, sticky);
    {carry, kept_r} = {1'b0, kept} + (round_up ? (dbl_i ? 54'd1 : (54'd1 << 29)) : 54'd0);
    e_r = tiny ? emin : en;
    if (carry) begin
      kept_r = {1'b1, kept_r[52:1]};    // the significand became 2.0: renormalise
      e_r = e_r + 14'sd1;
    end
    of = !is_zero && !tiny && (e_r > emax);
  end

  // 4. Pack
  logic [10:0] ebits;
  logic [51:0] fbits;
  logic        subnormal_out;

  always_comb begin
    flags_o = '0;
    bits_o = '0;
    ebits = '0;
    fbits = '0;
    subnormal_out = tiny && !kept_r[52];   // rounding may have made it the smallest normal
    if (is_zero) begin
      bits_o = {v_i.sign, 63'd0};
      flags_o[FX_NX] = v_i.sticky;
    end else if (of) begin
      flags_o[FX_OF] = 1'b1;
      flags_o[FX_NX] = 1'b1;
      case (rd_i)
        RD_ZERO: bits_o = dbl_i ? {v_i.sign, 11'h7FE, {52{1'b1}}} : {v_i.sign, 8'hFE, {23{1'b1}}, 32'd0};
        RD_PINF: bits_o = v_i.sign ? (dbl_i ? {1'b1, 11'h7FE, {52{1'b1}}} : {1'b1, 8'hFE, {23{1'b1}}, 32'd0})
                                   : (dbl_i ? {1'b0, 11'h7FF, 52'd0} : {1'b0, 8'hFF, 23'd0, 32'd0});
        RD_MINF: bits_o = v_i.sign ? (dbl_i ? {1'b1, 11'h7FF, 52'd0} : {1'b1, 8'hFF, 23'd0, 32'd0})
                                   : (dbl_i ? {1'b0, 11'h7FE, {52{1'b1}}} : {1'b0, 8'hFE, {23{1'b1}}, 32'd0});
        default: bits_o = dbl_i ? {v_i.sign, 11'h7FF, 52'd0} : {v_i.sign, 8'hFF, 23'd0, 32'd0};
      endcase
    end else begin
      flags_o[FX_NX] = inexact;
      flags_o[FX_UF] = tiny && (inexact || uf_trap_i);
      if (subnormal_out) begin
        ebits = 11'd0;
      end else begin
        ebits = dbl_i ? 11'(e_r + 14'sd1023) : 11'(e_r + 14'sd127);
      end
      fbits = kept_r[51:0];
      bits_o = dbl_i ? {v_i.sign, ebits, fbits} : {v_i.sign, ebits[7:0], fbits[51:29], 32'd0};
    end
  end

endmodule
