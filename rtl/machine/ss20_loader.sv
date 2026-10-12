// SPDX-License-Identifier: GPL-2.0-or-later
//
// ss20_loader: what happens before the machine runs. The boot PROM image
// comes from hps_io as ioctl index 0 (Main's support/sun: boot0.rom,
// boot.rom or the OSD's Boot PROM; plan §1.2) and is written into DDR3 at
// the PROM area (ss20_memctl's layout); main memory is cleared at power-up,
// after a new PROM and at an OSD reset (plan §3 phase 4; the Sun OBP
// expects clean memory, and OpenBIOS clears only on a software or watchdog
// reset). The machine is held in reset (run_o low) until a PROM has been
// loaded once and the clear that follows a load or a reset is done.
//
// hps_io (WIDE) sends 16-bit words, ioctl_dout[7:0] the byte at ioctl_addr
// and [15:8] the next; four make a doubleword, written big-endian (byte
// offset 0 in bits 63:56). A download that ends inside a doubleword writes
// the bytes it has (the simulation preloads the image and sends only its
// last word). ioctl_wait holds hps_io while a doubleword waits for DDR.
//
// SKIP_CLEAR (simulation: its DDR model starts zeroed) leaves the clear out.

module ss20_loader #(
  parameter logic [28:0] DDR_BASE   = 29'h0400_0000,
  parameter logic [31:0] PROM_BASE  = 32'h1D00_0000,
  parameter bit          SKIP_CLEAR = 1'b0
)(
  input  logic        clk,
  input  logic        rst,               // power-up / OSD reset: clear memory again
  input  logic [9:0]  ram_mb_i,

  input  logic        ioctl_download_i,
  input  logic [7:0]  ioctl_index_i,
  input  logic        ioctl_wr_i,
  input  logic [26:0] ioctl_addr_i,
  input  logic [15:0] ioctl_dout_i,
  output logic        ioctl_wait_o,

  output logic        run_o,             // the machine may run
  output logic        active_o,          // the loader owns the DDR port

  input  logic        ddr_wait_i,
  output logic [7:0]  ddr_burstcnt_o,
  output logic [28:0] ddr_addr_o,
  output logic        ddr_we_o,
  output logic [63:0] ddr_din_o,
  output logic [7:0]  ddr_be_o
);

  localparam int CB = 64;                // the clear's burst length (words)

  typedef enum logic [1:0] {L_WAIT_ROM, L_LOAD, L_CLEAR, L_RUN} lstate_t;
  lstate_t ls;
  /* verilator lint_off PROCASSINIT */
  logic        loaded = 1'b0;            // a PROM is in DDR (kept over resets): a power-up value
  /* verilator lint_on PROCASSINIT */
  logic        dl_rom;                   // this download is the PROM
  logic [63:0] acc;                      // the doubleword being collected
  logic [7:0]  acc_be;
  logic [23:0] acc_word;                 // its index within the PROM area
  logic        acc_any;
  logic [63:0] wbuf;                     // the one waiting for DDR
  logic [7:0]  wbe;
  logic [23:0] wword;
  logic        wpend;
  logic [25:0] clr_word;                 // the word being cleared
  logic [6:0]  clr_beat;                 // beats left in this burst (0: start one)
  logic [26:0] mem_words;                // MB << 17

  assign dl_rom    = ioctl_download_i && ioctl_index_i == 8'd0;
  assign mem_words = {ram_mb_i, 17'd0};

  logic [15:0] hw;                       // the halfword, big-endian
  assign hw = {ioctl_dout_i[7:0], ioctl_dout_i[15:8]};

  always_ff @(posedge clk) begin
    if (rst) begin
      ls <= loaded ? (SKIP_CLEAR ? L_RUN : L_CLEAR) : L_WAIT_ROM;
      acc_any <= 1'b0; acc_be <= '0; wpend <= 1'b0;
      clr_word <= '0; clr_beat <= '0;
    end else begin
      // the write-out of a finished doubleword
      if (wpend && ls == L_LOAD && !ddr_wait_i) wpend <= 1'b0;

      case (ls)
        L_LOAD: begin
          if (ioctl_wr_i) begin
            if (acc_any && ioctl_addr_i[26:3] != acc_word) begin
              // a new doubleword: the finished one goes out (DDR has had
              // the time of four words for the one before it)
              wbuf <= acc; wbe <= acc_be; wword <= acc_word; wpend <= 1'b1;
              acc_be <= 8'b11 << (6 - 2 * ioctl_addr_i[2:1]);
            end else begin
              acc_be <= acc_be | (8'b11 << (6 - 2 * ioctl_addr_i[2:1]));
            end
            acc[63 - 16 * ioctl_addr_i[2:1] -: 16] <= hw;
            acc_word <= ioctl_addr_i[26:3];
            acc_any <= 1'b1;
          end else if (!ioctl_download_i && !wpend) begin
            if (acc_any) begin
              wbuf <= acc; wbe <= acc_be; wword <= acc_word; wpend <= 1'b1;
              acc_any <= 1'b0;
            end else begin
              loaded <= 1'b1;
              ls <= SKIP_CLEAR ? L_RUN : L_CLEAR;
              clr_word <= '0; clr_beat <= '0;
            end
          end
        end
        default: begin                   // L_WAIT_ROM, L_CLEAR, L_RUN
          if (dl_rom) begin
            ls <= L_LOAD;
            acc_any <= 1'b0; acc_be <= '0;
          end else if (ls == L_CLEAR && !ddr_wait_i) begin
            // bursts of CB zero words over the whole memory (a multiple of CB)
            clr_beat <= clr_beat == 7'd0 ? 7'(CB - 1) : clr_beat - 7'd1;
            clr_word <= clr_word + 26'd1;
            if ({1'b0, clr_word} == mem_words - 27'd1) begin
              ls <= L_RUN;
              clr_word <= '0; clr_beat <= '0;
            end
          end
        end
      endcase
    end
  end

  assign run_o        = ls == L_RUN && !rst;
  assign active_o     = ls != L_RUN;
  assign ioctl_wait_o = wpend;

  always_comb begin
    if (ls == L_CLEAR) begin
      ddr_burstcnt_o = 8'(CB);
      ddr_addr_o     = DDR_BASE + 29'(clr_word);
      ddr_we_o       = 1'b1;
      ddr_din_o      = 64'd0;
      ddr_be_o       = 8'hFF;
    end else begin
      ddr_burstcnt_o = 8'd1;
      ddr_addr_o     = DDR_BASE + 29'(PROM_BASE >> 3) + 29'(wword[15:0]);
      ddr_we_o       = wpend && ls == L_LOAD;
      ddr_din_o      = wbuf;
      ddr_be_o       = wbe;
    end
  end

  logic unused_ok;
  assign unused_ok = &{1'b0, ioctl_addr_i[0], wword[23:16], clr_beat};

endmodule
