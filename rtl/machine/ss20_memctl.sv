// SPDX-License-Identifier: GPL-2.0-or-later
//
// ss20_memctl: the slave side of the interconnect (docs/arch/bus.md,
// mem_pkg) for one master: main memory and the boot PROM in DDR3, and
// everything else through the I/O bridge (ss20_iobridge). Every write is
// broadcast on the snoop port in its ack cycle (the module's I-cache keeps
// its own module's stores coherent that way: t_selfmod).
//
// The DDR3 layout (core byte addresses, Avalon word = DDR_BASE + byte/8;
// DDR_BASE is ARM physical 0x2000_0000, the MiSTer's FPGA window):
//   0x0000_0000 .. RAM size   main memory, PA 0 up (at most 464 MB)
//   0x1D00_0000 .. +512 KB    the boot PROM image (ss20_loader writes it)
// A doubleword is stored big-endian in its DDR word, as the interconnect
// carries it: byte offset 0 in bits 63:56, so data and byte enables pass
// straight through.
//
// Decoding (docs/arch/memory-map.md):
//   PA[35:32] = 0, below the RAM size   main memory; line reads as 4-beat
//                                       Avalon bursts in address order
//   PA[35:32] = 0, above it             reads 0, writes ignored (DEC-3)
//   0xF_F0xx_xxxx                       the PROM, 512 KB mirrored through the
//                                       16 MB; writes ignored
//   anything else                       the I/O bridge (which answers err for
//                                       empty slots and unassigned spaces)
// One request at a time; a request whose last ack has been given is not
// looked at again in the next cycle (the master drops it then).

module ss20_memctl
  import mem_pkg::*;
#(
  parameter logic [28:0] DDR_BASE  = 29'h0400_0000,   // word address of ARM 0x2000_0000
  parameter logic [31:0] PROM_BASE = 32'h1D00_0000    // core byte address of the PROM image
)(
  input  logic        clk,
  input  logic        rst,

  input  logic [9:0]  ram_mb_i,           // installed memory, MB (the OSD's option)
  input  logic [3:0]  mid_i,              // the master's module ID (snoop source)

  input  mem_req_t    req_i,
  output mem_rsp_t    rsp_o,
  output snoop_t      snoop_o,
  input  logic        snoop_hold_i,       // the module's snoop queue is nearly full: no write now

  // the I/O bridge: single beats only
  output mem_req_t    io_req_o,
  input  mem_rsp_t    io_rsp_i,

  // DDR3 (Avalon-MM master)
  input  logic        ddr_wait_i,
  output logic [7:0]  ddr_burstcnt_o,
  output logic [28:0] ddr_addr_o,
  output logic        ddr_rd_o,
  output logic        ddr_we_o,
  output logic [63:0] ddr_din_o,
  output logic [7:0]  ddr_be_o,
  input  logic [63:0] ddr_dout_i,
  input  logic        ddr_dout_ready_i
);

  typedef enum logic [2:0] {S_IDLE, S_RD_CMD, S_RD_DATA, S_WR_CMD, S_IO, S_GAP} st_t;
  st_t st;

  // ---------------------------------------------------------------- decode
  logic is_ram, is_low_empty, is_prom;
  always_comb begin
    is_ram       = req_i.pa[35:32] == 4'h0 && {2'b00, req_i.pa[31:20]} < {4'd0, ram_mb_i};
    is_low_empty = req_i.pa[35:32] == 4'h0 && !is_ram;
    is_prom      = req_i.pa[35:24] == 12'hFF0;
  end

  logic [28:0] word_now;
  assign word_now = is_prom ? DDR_BASE + 29'(PROM_BASE >> 3) + 29'(req_i.pa[18:3])
                            : DDR_BASE + 29'(req_i.pa[28:3]);

  // ------------------------------------------------------------- the FSM
  logic [28:0] a_q;
  logic [2:0]  beats_left;
  logic        burst_q;

  always_ff @(posedge clk) begin
    rsp_o <= '0;
    snoop_o <= '0;
    if (rst) begin
      st <= S_IDLE;
      a_q <= '0; beats_left <= '0; burst_q <= 1'b0;
    end else begin
      case (st)
        S_IDLE: begin
          if (req_i.valid) begin
            a_q <= word_now;
            burst_q <= req_i.burst;
            if (is_ram && !req_i.write) begin
              beats_left <= req_i.burst ? 3'd4 : 3'd1;
              st <= S_RD_CMD;
            end else if (is_prom && !req_i.write) begin
              beats_left <= req_i.burst ? 3'd4 : 3'd1;
              st <= S_RD_CMD;
            end else if (is_ram && req_i.write) begin
              if (!snoop_hold_i) st <= S_WR_CMD;
            end else if (is_low_empty || is_prom) begin
              // reads 0 (a burst gives four zero beats), writes are ignored
              if (!(req_i.write && snoop_hold_i)) begin
                rsp_o.ack <= 1'b1;
                if (req_i.write) begin
                  snoop_o.valid <= 1'b1; snoop_o.line <= req_i.pa[35:5]; snoop_o.mid <= mid_i;
                end
                if (req_i.burst && !req_i.write) begin
                  beats_left <= 3'd3;
                  st <= S_RD_DATA;          // three more zero beats, below
                end else begin
                  st <= S_GAP;
                end
              end
            end else begin
              if (!(req_i.write && snoop_hold_i)) st <= S_IO;
            end
          end
        end
        S_RD_CMD: if (!ddr_wait_i) st <= S_RD_DATA;
        S_RD_DATA: begin
          if (is_low_empty) begin
            // the zero beats of a burst beyond the memory
            rsp_o.ack <= 1'b1;
            beats_left <= beats_left - 3'd1;
            if (beats_left == 3'd1) st <= S_GAP;
          end else if (ddr_dout_ready_i) begin
            rsp_o.ack <= 1'b1;
            rsp_o.rdata <= ddr_dout_i;
            beats_left <= beats_left - 3'd1;
            if (beats_left == 3'd1) st <= S_GAP;
          end
        end
        S_WR_CMD: begin
          if (!ddr_wait_i) begin
            rsp_o.ack <= 1'b1;
            snoop_o.valid <= 1'b1; snoop_o.line <= req_i.pa[35:5]; snoop_o.mid <= mid_i;
            st <= S_GAP;
          end
        end
        S_IO: begin
          if (io_rsp_i.ack || io_rsp_i.err) begin
            rsp_o <= io_rsp_i;
            rsp_o.ack <= 1'b1;            // err comes with ack (bus.md)
            if (req_i.write && !io_rsp_i.err) begin
              snoop_o.valid <= 1'b1; snoop_o.line <= req_i.pa[35:5]; snoop_o.mid <= mid_i;
            end
            st <= S_GAP;
          end
        end
        default: st <= S_IDLE;            // S_GAP: the master drops the finished request
      endcase
    end
  end

  // ---------------------------------------------------------- the ports
  always_comb begin
    ddr_burstcnt_o = burst_q ? 8'd4 : 8'd1;
    ddr_addr_o     = a_q;
    ddr_rd_o       = st == S_RD_CMD;
    ddr_we_o       = st == S_WR_CMD;
    ddr_din_o      = req_i.wdata;
    ddr_be_o       = req_i.be;
    io_req_o       = req_i;
    io_req_o.valid = st == S_IO;
  end

endmodule
