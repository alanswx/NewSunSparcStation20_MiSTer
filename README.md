# SunSparcStation20_MiSTer: the Verilog rewrite

This branch (`verilog-rewrite`) is the start of a new Sun SPARCstation 20
core for MiSTer, written from scratch in SystemVerilog and licensed
GPL-2.0-or-later.

It is an orphan branch: it shares no history with `master`. The VHDL core
on `master` is built on Grabulosaure's CPU and chipset, which were
published with "All rights reserved" and no license. This branch holds
only what can be reused: our own code, the GPL firmware and framework,
the tests, the tools and the documentation.

**Start with [docs/VERILOG-PLAN.md](docs/VERILOG-PLAN.md)**: the clean-room
rules, the compatibility contracts with Main and OpenBIOS, the
architecture, the phases and the requirements learned on the VHDL core.

## What is here

| Path | What | License |
|---|---|---|
| `bios/` | OpenBIOS (TACUS port) and fcode-utils; `scripts/build-bios.sh` builds the boot ROM | GPL-2 |
| `sys/` | Template_MiSTer framework | GPL-2+ |
| `rtl/mister/` | `ddram_arb.sv` (+ benches), `eth_hps.vhd`, `nvram_sd.vhd`: to be ported to SV | ours |
| `rtl/sun4m/` | `scsi_targets.vhd`, `ts_fdc.vhd`, `ts_beep.vhd`, the FCode packages, `tb/tb_kbd.vhd`: to be ported | ours / GPL-2 (TCX FCode) |
| `tests/cpu/` | bare-metal SPARC V8 / sun4m test suite that runs as the boot PROM, QEMU references | ours |
| `sim/` | Verilator harness (Main's hps_io, SD, DDR, UART, Ethernet models) | ours |
| `scripts/` | build, deploy, board regression (`hwtest.sh`, `board/`) | ours |
| `tools/` | ROM analysis (`romdis/`), FCode, NVRAM, CD-audio, UFS, NeXTSTEP and MiSTer tools; `debugarm/pcdump.c` | ours |
| `docs/rom-disassembly/` | our analysis of the SS20 OBP 2.25 and SS5 OBP 2.15 PROMs (no Sun code) | ours |
| `docs/legacy/` | the VHDL core's plans, gap audits, design notes and session hand-offs | ours |

The VHDL files in `rtl/` use helper packages of the old core that are not
here, so they do not build on this branch yet. They are kept to be ported.

Not here, on purpose: Grabulosaure's RTL and tools; Keith Conger's CS4231
model; Sun PROM images and their disassembly listings; release binaries.

## License

GPL-2.0-or-later for our files ([LICENSE](LICENSE)); OpenBIOS and the
TCX/CG3 FCode it carries are GPL-2.0; `sys/` is GPL-2.0+. The Sun PROM
images are Sun/Oracle copyright and are never committed.
