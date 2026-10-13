# Grabulosaure's files, and what a rewrite would take

> Written in the old VHDL repository (MiSTer-devel/SunSparcStation20_MiSTer) on
> 2026-10-08; its paths (`rtl/`, `bios/`, `tools/debugarm/`) are that repository's.
> Kept here as the record of what the rewrite replaces.

This core started as Grabulosaure's SPARCstation 5/20 core,
[github.com/Grabulosaure/ss](https://github.com/Grabulosaure/ss) (his TEMLIB
"TEM" project; his file headers sign it "DO"). His nine commits are the first
in this repository (2022-03-31 to 2022-06-05); his `src/` tree is `rtl/` here.
This page lists his files, all the HDL, and what replacing his code would
involve. The references for that work are indexed in
[references/INDEX.md](../references/INDEX.md).

## Compared with upstream

Of the 73 files shared with [Grabulosaure/ss](https://github.com/Grabulosaure/ss),
34 are identical and 39 differ. The biggest differences are `mcu_multi.vhd`
(~980 changed lines), `ss_core.vhd` (~629) and `mcu_simple.vhd` (~410), and
`iram_rtc.vhd` has been rewritten. The upstream repository has no licence file,
and the `lic.txt` its headers refer to is not in it. Details are in
[references/INDEX.md](../references/INDEX.md), under *Grabulosaure
functional-reference map*. A third public repository of his,
[Grabulosaure/lance](https://github.com/Grabulosaure/lance), has a newer
`ts_lance.vhd`.

## How the files were attributed

- **Origin**: the author of the commit that added the file
  (`git log --diff-filter=A --follow`), checked against the header. His
  original sources carry the banner *"This source file is copyrighted. Read
  the "lic.txt" file before use. Experimental version. No warranty of any
  sort. All rights reserved."*; the others he wrote carry `TEM` / `DO
  <month>/<year>`, with no banner.
- **Lines blamed on Grabulosaure**: `git blame -w -M -C`, how much of his
  text is still unchanged. A few percent on a file someone else created is
  line-move detection matching common lines (`END IF;`, `LIBRARY ieee;`), not
  his code.
- `sys/` is the MiSTer framework. His initial commit imported all of it, so
  blame shows him on files that Sorgelig and others wrote. Only the three
  `sys/` files whose headers name him count as his.

## Summary

| | files | lines |
|---|---:|---:|
| VHDL in the repository | 83 | |
| …Grabulosaure's, in `rtl/` | 70 | 40,257 (36,933 of them unchanged) |
| …Grabulosaure's, in `sys/` (MiSTer framework) | 2 | 3,482 (`ascal.vhd`, `pll_hdmi_adj.vhd`) |
| …others' (Dani Sarfati, Keith Conger, generated) | 11 | |
| Verilog / SystemVerilog in the repository | 48 | |
| …Grabulosaure's | 1 | `SunSparcStation.sv`, 539 lines (45% unchanged) |
| …co-written by him (MiSTer framework) | 1 | `sys/video_freak.sv` |
| …Quartus-generated IP he imported | 2 | `rtl/pll.v`, `rtl/pll/pll_0002.v` |

**The machine is Grabulosaure's VHDL.** The SPARC CPU (`rtl/cpu`), the internal
bus (`rtl/plomb`), the generic peripherals (`rtl/peri`) and nearly all of the
sun4m chipset (`rtl/sun4m`) are his. The Verilog/SystemVerilog is MiSTer glue:
his top level, plus the framework.

Since he left, these were written for this core: the SCSI targets, Ethernet
and NVRAM bridges to Main, the DDR3 arbiter, the floppy controller, the
keyboard bell, the cache tag RAM, the CS4231 audio (Keith Conger) and the
simulation.

### Grabulosaure's other files (not HDL)

- `rtl/sun4m/ts_lance.vhs`, `rtl/sun4m/asm_lance.rb`: the LANCE's microcode
  and its assembler.
- `tools/debugarm/*`: the ARM-side debug monitor.
- `SunSparcStation.qpf`, `SunSparcStation.sdc`, `SunSparcStation20.qsf`,
  `files.qip`, the `rtl/pll*.qip` files and `rtl/pll/pll.mif`: the Quartus
  project.
- `bios/`: his OpenBIOS port
  ([ss_openbios](https://github.com/Grabulosaure/ss_openbios)) and the
  fcode-utils it needs. These are third-party GPL code he imported and
  adapted, not his originals.

## All VHDL files (83)

| file | lines | origin | lines blamed on Grabulosaure |
|---|---:|---|---:|
| `rtl/cpu/asi_pack.vhd` | 136 | Grabulosaure | 132 (97%) |
| `rtl/cpu/cpu_conf_pack.vhd` | 259 | Grabulosaure | 231 (89%) |
| `rtl/cpu/disas_pack.vhd` | 1895 | Grabulosaure | 1895 (100%) |
| `rtl/cpu/fpu.vhd` | 71 | Grabulosaure | 71 (100%) |
| `rtl/cpu/fpu_calc.vhd` | 827 | Grabulosaure | 794 (96%) |
| `rtl/cpu/fpu_div.vhd` | 656 | Grabulosaure | 656 (100%) |
| `rtl/cpu/fpu_mul.vhd` | 240 | Grabulosaure | 240 (100%) |
| `rtl/cpu/fpu_multi.vhd` | 697 | Grabulosaure | 697 (100%) |
| `rtl/cpu/fpu_pack.vhd` | 1935 | Grabulosaure | 1876 (96%) |
| `rtl/cpu/fpu_regs_2r1w.vhd` | 152 | Grabulosaure | 142 (93%) |
| `rtl/cpu/fpu_simple.vhd` | 688 | Grabulosaure | 615 (89%) |
| `rtl/cpu/idu.vhd` | 175 | Grabulosaure | 175 (100%) |
| `rtl/cpu/iu.vhd` | 55 | Grabulosaure | 47 (85%) |
| `rtl/cpu/iu_debug.vhd` | 244 | Grabulosaure | 244 (100%) |
| `rtl/cpu/iu_debug_mp.vhd` | 331 | Grabulosaure | 331 (100%) |
| `rtl/cpu/iu_muldiv.vhd` | 439 | Grabulosaure | 439 (100%) |
| `rtl/cpu/iu_pack.vhd` | 2568 | Grabulosaure | 2513 (97%) |
| `rtl/cpu/iu_pipe5.vhd` | 1542 | Grabulosaure | 1424 (92%) |
| `rtl/cpu/iu_regs_2r1w.vhd` | 102 | Grabulosaure | 92 (90%) |
| `rtl/cpu/mcu.vhd` | 43 | Grabulosaure | 43 (100%) |
| `rtl/cpu/mcu_mp.vhd` | 81 | Grabulosaure | 77 (95%) |
| `rtl/cpu/mcu_multi.vhd` | 3072 | Grabulosaure | 2272 (73%) |
| `rtl/cpu/mcu_multi_ext.vhd` | 1005 | Grabulosaure | 976 (97%) |
| `rtl/cpu/mcu_pack.vhd` | 1301 | Grabulosaure | 1282 (98%) |
| `rtl/cpu/mcu_simple.vhd` | 2742 | Grabulosaure | 2458 (89%) |
| `rtl/cpu/mcu_tagram.vhd` | 86 | Dani Sarfati | 43 (50%) |
| `rtl/cpu/mcu_tw.vhd` | 726 | Grabulosaure | 658 (90%) |
| `rtl/cpu/smpmux.vhd` | 546 | Grabulosaure | 534 (97%) |
| `rtl/mister/eth_hps.vhd` | 617 | Dani Sarfati | 7 (1%) |
| `rtl/mister/nvram_sd.vhd` | 230 | Dani Sarfati | 11 (4%) |
| `rtl/mister/plomb_avalon_mister.vhd` | 410 | Grabulosaure | 402 (98%) |
| `rtl/mister/ss_core.vhd` | 1157 | Grabulosaure | 780 (67%) |
| `rtl/peri/acia.vhd` | 238 | Grabulosaure | 238 (100%) |
| `rtl/peri/iram.vhd` | 36 | Grabulosaure | 36 (100%) |
| `rtl/peri/iram_bi.vhd` | 40 | Grabulosaure | 40 (100%) |
| `rtl/peri/iram_bi_srec.vhd` | 64 | Grabulosaure | 62 (96%) |
| `rtl/peri/iram_dp.vhd` | 40 | Grabulosaure | 40 (100%) |
| `rtl/peri/iram_dp_altera.vhd` | 159 | Grabulosaure | 159 (100%) |
| `rtl/peri/iram_srec.vhd` | 204 | Grabulosaure | 204 (100%) |
| `rtl/peri/ovo.vhd` | 180 | Grabulosaure | 180 (100%) |
| `rtl/peri/ps2.vhd` | 188 | Grabulosaure | 188 (100%) |
| `rtl/peri/synth.vhd` | 72 | Grabulosaure | 72 (100%) |
| `rtl/peri/vid.vhd` | 498 | Grabulosaure | 498 (100%) |
| `rtl/peri/vid_pack.vhd` | 155 | Grabulosaure | 155 (100%) |
| `rtl/plomb/base_pack.vhd` | 663 | Grabulosaure | 663 (100%) |
| `rtl/plomb/dl_plomb_trace.vhd` | 639 | Grabulosaure | 639 (100%) |
| `rtl/plomb/plomb_fifo.vhd` | 168 | Grabulosaure | 168 (100%) |
| `rtl/plomb/plomb_log.vhd` | 176 | Grabulosaure | 176 (100%) |
| `rtl/plomb/plomb_mux.vhd` | 169 | Grabulosaure | 169 (100%) |
| `rtl/plomb/plomb_pack.vhd` | 273 | Grabulosaure | 273 (100%) |
| `rtl/plomb/plomb_pvc.vhd` | 132 | Grabulosaure | 123 (93%) |
| `rtl/plomb/plomb_sel.vhd` | 111 | Grabulosaure | 111 (100%) |
| `rtl/sun4m/dl_scsi.vhd` | 240 | Grabulosaure | 240 (100%) |
| `rtl/sun4m/iram_rtc.vhd` | 256 | Grabulosaure | 90 (35%) |
| `rtl/sun4m/iram_ts.vhd` | 1157 | Grabulosaure | 1157 (100%) |
| `rtl/sun4m/scsi_targets.vhd` | 1945 | Dani Sarfati | 6 (0%) |
| `rtl/sun4m/tb/tb_kbd.vhd` | 224 | Dani Sarfati | 8 (3%) |
| `rtl/sun4m/ts_aciamux.vhd` | 190 | Grabulosaure | 147 (77%) |
| `rtl/sun4m/ts_beep.vhd` | 104 | Dani Sarfati | 6 (5%) |
| `rtl/sun4m/ts_core.vhd` | 1528 | Grabulosaure | 1405 (91%) |
| `rtl/sun4m/ts_cs4231a.vhd` | 1024 | Keith Conger | 14 (1%) |
| `rtl/sun4m/ts_decode.vhd` | 192 | Grabulosaure | 165 (85%) |
| `rtl/sun4m/ts_dmaux.vhd` | 390 | Grabulosaure | 372 (95%) |
| `rtl/sun4m/ts_esp.vhd` | 966 | Grabulosaure | 825 (85%) |
| `rtl/sun4m/ts_fcode_cs4231_pack.vhd` | 29 | generated (tools/fcode_cs4231.py) | 7 (24%) |
| `rtl/sun4m/ts_fcode_pack.vhd` | 196 | generated (tools/fcode2vhd.py) from OpenBIOS FCode | 6 (3%) |
| `rtl/sun4m/ts_fdc.vhd` | 341 | Dani Sarfati | 11 (3%) |
| `rtl/sun4m/ts_inter.vhd` | 446 | Grabulosaure | 423 (94%) |
| `rtl/sun4m/ts_io.vhd` | 853 | Grabulosaure | 706 (82%) |
| `rtl/sun4m/ts_iommu.vhd` | 477 | Grabulosaure | 421 (88%) |
| `rtl/sun4m/ts_kms.vhd` | 117 | Grabulosaure | 117 (100%) |
| `rtl/sun4m/ts_lance.vhd` | 1191 | Grabulosaure | 1162 (97%) |
| `rtl/sun4m/ts_pack.vhd` | 211 | Grabulosaure | 185 (87%) |
| `rtl/sun4m/ts_ps2.vhd` | 144 | Grabulosaure | 144 (100%) |
| `rtl/sun4m/ts_ps2sun.vhd` | 1099 | Grabulosaure | 908 (82%) |
| `rtl/sun4m/ts_rtc.vhd` | 330 | Grabulosaure | 280 (84%) |
| `rtl/sun4m/ts_sport.vhd` | 746 | Grabulosaure | 660 (88%) |
| `rtl/sun4m/ts_sunkb.vhd` | 315 | Grabulosaure | 198 (62%) |
| `rtl/sun4m/ts_tcx.vhd` | 795 | Grabulosaure | 762 (95%) |
| `rtl/sun4m/ts_timer.vhd` | 314 | Grabulosaure | 276 (87%) |
| `sim/pll_sim.vhd` | 29 | Dani Sarfati (simulation stand-in) | 6 (20%) |
| `sys/ascal.vhd` | 3049 | Grabulosaure (TEMLIB), MiSTer framework scaler | 2726 (89%) |
| `sys/pll_hdmi_adj.vhd` | 433 | Grabulosaure, MiSTer framework | 433 (100%) |

## All Verilog / SystemVerilog files (48)

| file | lines | origin | lines blamed on Grabulosaure |
|---|---:|---|---:|
| `SunSparcStation.sv` | 539 | Grabulosaure | 244 (45%) |
| `rtl/mister/ddram_arb.sv` | 163 | Dani Sarfati | 5 (3%) |
| `rtl/mister/tb/tb_ddram_arb.sv` | 147 | Dani Sarfati | 0 (0%) |
| `rtl/mister/tb/tb_ddram_arb_abandon.sv` | 54 | Dani Sarfati | 0 (0%) |
| `rtl/mister/tb/tb_ddram_arb_lat.sv` | 24 | Dani Sarfati | 0 (0%) |
| `rtl/mister/tb/tb_ddram_arb_pipe.sv` | 85 | Dani Sarfati | 0 (0%) |
| `rtl/pll.v` | 259 | Quartus IP (Altera), imported by Grabulosaure | 255 (98%) |
| `rtl/pll/pll_0002.v` | 98 | Quartus IP (Altera), imported by Grabulosaure | 89 (90%) |
| `sim/sim_top.sv` | 302 | Dani Sarfati | 0 (0%) |
| `sys/alsa.sv` | 157 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/arcade_video.v` | 329 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/audio_out.sv` | 343 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/ddr_svc.sv` | 108 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/emu_ports.vh` | 153 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/f2sdram_safe_terminator.sv` | 250 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/gamma_corr.sv` | 124 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/hps_io.sv` | 1051 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/hq2x.sv` | 371 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/i2c.v` | 103 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/i2s.v` | 54 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/iir_filter.v` | 213 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/ltc2308.sv` | 162 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/math.sv` | 109 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/mcp23009.sv` | 120 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/mt32pi.sv` | 283 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/osd.v` | 286 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/pll_audio.v` | 252 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/pll_audio/pll_audio_0002.v` | 87 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/pll_cfg/altera_pll_reconfig_core.v` | 2184 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/pll_cfg/altera_pll_reconfig_top.v` | 428 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/pll_cfg/pll_cfg.v` | 86 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/pll_cfg/pll_cfg_hdmi.v` | 1282 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/pll_hdmi.v` | 256 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/pll_hdmi/pll_hdmi_0002.v` | 241 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/scandoubler.v` | 211 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/scanlines.v` | 68 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/sd_card.sv` | 463 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/shadowmask.sv` | 136 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/sigma_delta_dac.v` | 33 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/spdif.v` | 320 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/sys_top.v` | 1949 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/sysmem.sv` | 570 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/vga_out.sv` | 73 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/video_cleaner.sv` | 108 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/video_freak.sv` | 329 | Grabulosaure and Alexey Melnikov (Sorgelig), MiSTer framework | 271 (82%) |
| `sys/video_freezer.sv` | 143 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/video_mixer.sv` | 219 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |
| `sys/yc_out.sv` | 263 | MiSTer framework (Sorgelig and others; see header) | n/a (import commit) |

## What a rewrite would take

### Why rewrite, and when not to

There are three reasons to rewrite:

1. **The licence.** His 70 `rtl/` files say "All rights reserved". He has
   been asked to confirm GPL-2 (README, *Licence*). If he does, most of the
   case for a rewrite goes away, and refactoring the existing code is
   cheaper and safer than replacing it. If he doesn't, a rewrite is the only
   way to an unambiguous licence. To be clean it has to work from the
   specifications, with his code used only as a *functional* reference
   (behaviour, register maps, quirks the OSes depend on). His text must not
   be translated line by line. Ideally one person writes a behavioural spec
   for each block from his code and the datasheets, and someone else
   implements it from that spec.
2. **Tool compatibility.** The VHDL builds with Quartus, but other tools
   need help. `sim/gen_verilog.sh` lowers it to Verilog with GHDL
   (`--std=93c -frelaxed -fsynopsys`) and works around several problems:
   - `synthesis_off` regions that use a package that was never published
     (`fpu_sim_pack`);
   - unused `line` variables;
   - internal `'Z'` record fields;
   - VHDL names that are SystemVerilog keywords (`int`, `cross`).

   Native SystemVerilog would let Verilator, Yosys and SymbiYosys read the
   sources directly, with no lowering step, and would match the language
   of the MiSTer framework.
3. **Maintainability.** The code carries a lot that this core doesn't use:
   - Spartan-6 tech variants;
   - the MicroSPARC-II (SS5) configurations next to the SuperSPARC (SS20)
     ones;
   - global switches (`BSD_MODE`, `CACHE_FORCE_MEM`, `FPU_LDASTA`) in
     `cpu_conf_pack`;
   - debug-only logic (`disas_pack` 1.9k lines, `iu_debug*`,
     `dl_plomb_trace`, `dl_scsi`);
   - comments in French.

   Records-of-records across `plomb_pack`/`mcu_pack` make the interfaces
   hard to follow. The cache tag path has already needed a timing fix
   (`mcu_tagram.vhd`).

### The size of the work

| subsystem | his files | his lines | difficulty | main references |
|---|---:|---:|---|---|
| `rtl/peri` (RAMs, ACIA, PS/2, video timing, overlay) | 12 | 1.9k | low | — |
| `rtl/plomb` (internal bus, FIFOs, mux) | 8 | 2.3k | low; but every block depends on its interface | his code |
| `rtl/mister` (`ss_core`, Avalon bridge) | 2 | 1.6k | low–medium | MiSTer template |
| `rtl/sun4m` (chipset: ESP, LANCE, ESCC, TCX, IOMMU, DMA2, interrupts, timers, RTC, keyboard) | 21 | 12.0k | medium; the datasheets are good, the Sun-specific glue less so | NCR53C9x, Am7990, Z8530, M48T08, QEMU sun4m |
| `rtl/cpu` FPU (`fpu_*`) | 8 | 5.3k | medium; well specified and very testable | SPARC V8 ch. 4/B, IEEE 754, TestFloat |
| `rtl/cpu` IU (`iu_*`, `idu`) | 8 | 5.5k | high | SPARC V8, SuperSPARC guide |
| `rtl/cpu` MMU, caches, SMP (`mcu_*`, `smpmux`) | 8 | 9.5k | highest; SuperSPARC/MXCC behaviour, coherency, diagnostic ASIs | SRMMU (V8 app. H), SuperSPARC/MXCC guides |
| `rtl/cpu` shared (`asi_pack`, `cpu_conf_pack`, `disas_pack`) | 3 | 2.3k | low; `disas_pack` is simulation-only and can go | — |

That is about 40k lines of his, 37k of them unchanged. The MMU/cache/SMP subsystem is
about a quarter of it and most of the risk.

A rough estimate for one experienced engineer, with verification as most of
the effort:

| subsystem | time |
|---|---|
| peripherals, bus and glue | 2–3 months |
| chipset | 3–4 months |
| FPU | 1–2 months |
| IU | 2–3 months |
| MMU/cache/SMP | 3–6 months |
| OS bring-up (OBP, OpenBIOS, Solaris 2.x, SunOS 4, NetBSD, Linux, NeXTSTEP) | 2–3 months |
| **total** | **about 13–21 person-months** |

AI assistance shortens the writing, not the verification or the OS
bring-up.

### How to do it without breaking the machine

- **Replace one block at a time behind the existing interfaces.** Freeze the
  `plomb` bus and each block's ports as the contract, so a new module drops
  into `ts_core`/`ss_core` in place of the old one. The machine boots at
  every step, and a regression has only one suspect.
- **Order:** start with the self-contained chipset blocks (timer, interrupt
  controller, RTC, decode, keyboard/mouse), then ESCC, ESP, LANCE (and its
  microcode), TCX, DMA2 and IOMMU. Then do the FPU, then the IU, and the
  MMU/caches/SMP last.
- **Differential testing against his code:** this is where "functional
  reference" pays off. In Verilator, run the old and the new module side by
  side on the same stimulus (random and recorded bus traffic from full-boot
  traces) and compare outputs cycle by cycle, or transaction by
  transaction where the timing may change. Small blocks can be proved
  equivalent with SymbiYosys.
- **Existing assets to keep and extend:**
  - `tests/cpu` (36 bare-metal SPARC V8, SRMMU, cache and SMP tests; their
    QEMU logs are the golden output);
  - the `sim/` whole-machine harness and its SCSI, Ethernet and NVRAM runs;
  - `rtl/sun4m/tb/tb_kbd.vhd` and the `ddram_arb` testbenches.

  Add TestFloat vectors for the FPU, and an OS boot matrix on the hardware
  as the acceptance test.
- **Language:** SystemVerilog (synthesisable subset Quartus 17 and Verilator
  both accept). It ends the GHDL lowering and matches `sys/`. Clean
  VHDL-2008 would be the lower-risk translation, but it keeps the tool
  problems.
- **Alternative for the CPU:** GRLIB's LEON3 is a GPL SPARC V8 core with a
  mature test suite. But its MMU, caches and bus are not SuperSPARC/MXCC,
  and the OBP and Solaris check the module ID, ASIs and MXCC registers. It
  would need a SuperSPARC-compatible MMU/cache front end, which is the
  hardest part anyway. It could serve as a second reference for the IU and
  FPU.

### Recommendation

1. Get the licence answer first.
   - **If GPL-2 is confirmed:** don't rewrite. Refactor in place: strip the
     unused configurations and debug logic, fix the GHDL/Verilator
     problems at the source, and translate blocks to SystemVerilog only
     where it helps simulation.
   - **If not:** rewrite as above, chipset first and CPU last, each block
     checked against his code.
2. Either way, start with the chipset: its datasheets are good, it is
   easy to test, and none of it is on the CPU's critical path.
