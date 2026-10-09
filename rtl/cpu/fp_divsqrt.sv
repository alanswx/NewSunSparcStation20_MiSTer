// SPDX-License-Identifier: GPL-2.0-or-later
//
// fp_divsqrt: the significand divide and square root, one result bit per
// cycle, on the FPU's unpacked operands; exact (a sticky bit says whether
// the remainder was non-zero).
//
// From: IEEE 754-1985 §5 (correctly rounded division and square root:
//   enough quotient bits plus a sticky bit give the exact rounding); the
//   restoring digit recurrences.
//
// Divide: q = floor(a * 2^57 / b), a and b the 53-bit significands in
// [2^52, 2^53): a/b in (1/2, 2), so q in (2^56, 2^58): the top bit is
// a >= b, then 57 restoring steps.
// Square root: the radicand is a * 2^60 (or a * 2^61 for an odd exponent,
// which makes the exponent even), at most 114 bits; its integer root is
// formed over 58 iterations (two radicand bits each), q in [2^56, 2^57).
// The result goes to fp_round as a 58-bit significand with the exponent
// such that value = q * 2^(exp - 55).

module fp_divsqrt
  import fpu_pkg::*;
(
  input  logic     clk,
  input  logic     rst,
  input  logic     start_i,
  input  logic     sqrt_i,
  input  fp_t      a_i,
  input  fp_t      b_i,
  output logic     busy_o,
  output logic     done_o,
  output fp_wide_t r_o
);

  logic         run, is_sqrt;
  logic [5:0]   cnt;
  logic [61:0]  rem;        // the working remainder
  logic [115:0] rad;        // the radicand still to consume (sqrt)
  logic [57:0]  q;
  logic         sign;
  logic signed [13:0] exp;
  logic [52:0]  den;

  // One step of each recurrence
  logic [61:0] rem2, sq_trial, dv_trial;
  always_comb begin
    rem2     = {rem[59:0], rad[115:114]};           // sqrt: two radicand bits down
    sq_trial = rem2 - {2'b00, q, 2'b01};            // minus (4q + 1)
    dv_trial = {rem[60:0], 1'b0} - {9'd0, den};     // divide: 2 rem - b
  end

  always_ff @(posedge clk) begin
    done_o <= 1'b0;
    if (rst) begin
      run <= 1'b0;
      cnt <= '0;
      rem <= '0; rad <= '0; q <= '0; den <= '0; sign <= 1'b0; exp <= '0; is_sqrt <= 1'b0;
    end else if (start_i) begin
      run <= 1'b1;
      is_sqrt <= sqrt_i;
      if (sqrt_i) begin
        cnt <= 6'd58;
        q <= '0;
        rem <= '0;
        sign <= 1'b0;
        if (a_i.exp[0]) begin
          rad <= 116'(a_i.man) << 61;
          exp <= (a_i.exp - 14'sd1) >>> 1;
        end else begin
          rad <= 116'(a_i.man) << 60;
          exp <= a_i.exp >>> 1;
        end
      end else begin
        cnt <= 6'd57;
        sign <= a_i.sign ^ b_i.sign;
        den <= b_i.man;
        // the first quotient bit (2^57) is a >= b; the remainder follows
        if (a_i.man >= b_i.man) begin rem <= 62'(a_i.man) - 62'(b_i.man); q <= 58'd1; end
        else                    begin rem <= 62'(a_i.man);                q <= 58'd0; end
        rad <= '0;
        exp <= a_i.exp - b_i.exp;
      end
    end else if (run) begin
      if (cnt == 6'd0) begin
        run <= 1'b0;
        done_o <= 1'b1;
      end else begin
        cnt <= cnt - 6'd1;
        if (is_sqrt) begin
          rad <= rad << 2;
          if (!sq_trial[61]) begin rem <= sq_trial; q <= {q[56:0], 1'b1}; end
          else               begin rem <= rem2;     q <= {q[56:0], 1'b0}; end
        end else begin
          if (!dv_trial[61]) begin rem <= dv_trial;         q <= {q[56:0], 1'b1}; end
          else               begin rem <= {rem[60:0], 1'b0}; q <= {q[56:0], 1'b0}; end
        end
      end
    end
  end

  assign busy_o = run;

  always_comb begin
    r_o = '0;
    r_o.sign = sign;
    r_o.man = q;
    r_o.sticky = rem != '0;
    // divide: value = q * 2^(ea - eb - 57) = q * 2^((exp - 2) - 55)
    // sqrt:   value = q * 2^(exp' - 56)    = q * 2^((exp' - 1) - 55)
    r_o.exp = is_sqrt ? (exp - 14'sd1) : (exp - 14'sd2);
  end

  logic unused_ok;
  assign unused_ok = &{1'b0, a_i.zero, a_i.inf, a_i.nan, a_i.snan, b_i.zero, b_i.inf, b_i.nan, b_i.snan};

endmodule
