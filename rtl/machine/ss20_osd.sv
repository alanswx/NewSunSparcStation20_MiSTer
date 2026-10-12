// SPDX-License-Identifier: GPL-2.0-or-later
//
// ss20_osd: the OSD status word decoded into the machine's options. Shared
// by the MiSTer top (SunSparcStation.sv) and sim/sim_top.sv, so the
// simulation sees the options exactly as the board does.
//
// The bit assignments are a compatibility contract (VERILOG-PLAN.md §1.2):
// users' config/SunSparcStation.CFG files and Main's support/sun read them,
// so they stay as the VHDL core's release left them. scripts/setopt.sh
// writes the same bits; keep the three in step with CONF_STR.
//
//   [0]      Reset (the top uses it)          [17]     L2 TLB: 0 On, 1 Off
//   [7:6]    aspect ratio (the top)           [21:20]  IOMMU rev (SS5 only; unused here)
//   [8]      Auto boot: 0 On, 1 Off           [23:22]  memory: 464, 256, 128, 64 MB
//   [9]      console: 0 screen, 1 ttya        [26:24]  network: eth0, Off, eth1,
//   [10]     graphics: 0 TCX, 1 CG3                    macvlan, tap0 (Main
//   [13:12]  keyboard: US, French, German,             sun_enet.cpp reads them)
//            Spanish
//   [15:14]  scale (the top)
//
// Retired, never to be reused for something else (old .CFG files may still
// have them set): [1], [4], [5], [11], [16], [18], [19].

module ss20_osd (
  input  logic [127:0] status_i,
  output logic         autoboot_o,     // the PROM boots without waiting at ok
  output logic         serial_o,       // console on ttya rather than the screen
  output logic         cg3_o,          // CG3 instead of TCX
  output logic [7:0]   kbd_layout_o,   // the layout byte the keyboard reports
  output logic         l2tlb_o,        // the MMU's second-level TLB enabled
  output logic [9:0]   ram_mb_o,       // main memory size in MB
  output logic         eth_o           // the Ethernet mailbox runs
);

  assign autoboot_o = ~status_i[8];
  assign serial_o   = status_i[9];
  assign cg3_o      = status_i[10];
  assign l2tlb_o    = ~status_i[17];
  // Value 1 is Off; every other value is a host interface Main drives.
  assign eth_o      = (status_i[26:24] != 3'd1);

  // Sun Type 5 layout codes (OpenBIOS's and Solaris's keyboard tables):
  // US5 0x21, France5 0x23, Germany5 0x25, Spain5 0x2A.
  always_comb begin
    case (status_i[13:12])
      2'd0:    kbd_layout_o = 8'h21;
      2'd1:    kbd_layout_o = 8'h23;
      2'd2:    kbd_layout_o = 8'h25;
      default: kbd_layout_o = 8'h2A;
    endcase
  end

  // 464 MB is seven 64 MB SIMMs and a 16 MB one, the VHDL core's maximum:
  // the rest of the FPGA's 512 MB DDR3 window holds the PROM image, the
  // VRAM and the framework's scaler buffers.
  always_comb begin
    case (status_i[23:22])
      2'd0:    ram_mb_o = 10'd464;
      2'd1:    ram_mb_o = 10'd256;
      2'd2:    ram_mb_o = 10'd128;
      default: ram_mb_o = 10'd64;
    endcase
  end

  /* verilator lint_off UNUSEDSIGNAL */
  wire unused_status = ^{status_i[127:27], status_i[21:18], status_i[16:14],
                         status_i[11], status_i[7:0]};
  /* verilator lint_on UNUSEDSIGNAL */

endmodule
