# SunSparcStation20_MiSTer: the Verilog rewrite

This repository is the start of a new Sun SPARCstation 20 core for
MiSTer, written from scratch in SystemVerilog and licensed
GPL-2.0-or-later.

It starts fresh, with no history from the VHDL core
(MiSTer-devel/SunSparcStation20_MiSTer). That core is built on
Grabulosaure's CPU and chipset, published with "All rights reserved" and
no license. This repository holds only what can be reused: our own code,
the GPL firmware and framework, the tests, the tools and the
documentation.

**Start with [docs/VERILOG-PLAN.md](docs/VERILOG-PLAN.md)**: the clean-room
rules, the compatibility contracts with Main and OpenBIOS, the
architecture, the phases and the requirements learned on the VHDL core.

## What is here

| Path | What | License |
|---|---|---|
| `bios/` | OpenBIOS (TACUS port) and fcode-utils; `scripts/build-bios.sh` builds the boot ROM | GPL-2 |
| `sys/` | Template_MiSTer framework | GPL-2+ |
| `rtl/pkg/`, `rtl/lib/` | the bus packages (`iobus_pkg`, `sun4m_pkg`), building blocks (`ram_tdp_be`) | ours |
| `rtl/obio/` | the new sun4m system devices: `slavio_timer`, `slavio_intctl`, `slavio_misc`, `m48t08`, `escc` (+ benches in `tb/`) | ours |
| `rtl/tb/` | `run.sh`: lint every module and run every block bench under Verilator; `tb_pkg.sv` | ours |
| `rtl/mister/` | `ddram_arb.sv` (+ benches), `eth_hps.vhd`, `nvram_sd.vhd`: to be ported to SV | ours |
| `rtl/sun4m/` | `scsi_targets.vhd`, `ts_fdc.vhd`, `ts_beep.vhd`, the FCode packages, `tb/tb_kbd.vhd`: to be ported | ours / GPL-2 (TCX FCode) |
| `tests/cpu/` | bare-metal SPARC V8 / sun4m test suite that runs as the boot PROM, QEMU references | ours |
| `sim/` | Verilator harness (Main's hps_io, SD, DDR, UART, Ethernet models) | ours |
| `scripts/` | build, deploy, board regression (`hwtest.sh`, `board/`) | ours |
| `tools/` | ROM analysis (`romdis/`), FCode, NVRAM, CD-audio, UFS, NeXTSTEP and MiSTer tools; `debugarm/pcdump.c` | ours |
| `docs/rom-disassembly/` | our analysis of the SS20 OBP 2.25 and SS5 OBP 2.15 PROMs (no Sun code) | ours |
| `docs/arch/` | the bus definitions (`bus.md`) and the physical address map (`memory-map.md`) | ours |
| `docs/references/` | the index of the reference library (datasheets, Sun specs, emulator and OS sources) kept locally in `scratch/reference/` | ours |
| `docs/legacy/` | the VHDL core's plans, gap audits, design notes and session hand-offs | ours |
| `scratch/` | local only, gitignored: reference manuals, Sun PROM images and their full disassembly, candidate RTL from other cores (see `scratch/README.md`) | not in git |

The VHDL files in `rtl/` use helper packages of the old core that are not
here, so they do not build here yet. They are kept to be ported.

Not here, on purpose: Grabulosaure's RTL and tools; Keith Conger's CS4231
model; Sun PROM images and their disassembly listings; release binaries.

## License

GPL-2.0-or-later for our files ([LICENSE](LICENSE)); OpenBIOS and the
TCX/CG3 FCode it carries are GPL-2.0; `sys/` is GPL-2.0+. The Sun PROM
images are Sun/Oracle copyright and are never committed.
