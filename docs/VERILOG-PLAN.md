# SPARCstation 20 in Verilog: the rewrite plan

A new SPARCstation 20 (sun4m) core for MiSTer, written from scratch in
SystemVerilog under GPL-2.0-or-later. It replaces the VHDL core
(MiSTer-devel/SunSparcStation20_MiSTer), whose CPU, bus and most of the
chipset are Grabulosaure's (TEMLIB), published "All rights reserved"
with no license, so they cannot be relicensed or redistributed. This
repository keeps only code we own or that carries a compatible license.
Everything else is rebuilt from public specifications, GPL references and
our own test suite.

Plan written 2026-10-09. The VHDL core's own plans and records are in
[legacy/](legacy/). They are useful as hardware notes, but they are not
this plan.

## 1. Ground rules

### 1.1 Clean room

1. **Never open the VHDL core's source while writing RTL here.** That
   means the VHDL core's `rtl/cpu`, `rtl/plomb`, `rtl/peri`, Grabulosaure's
   files in `rtl/sun4m` and `rtl/mister`, the backup tarball and
   `danifunker/ss`. Do not translate it by hand or by tool
   (`sim/gen_verilog.sh`'s GHDL output is still his code).
2. **Allowed sources:** chip datasheets and Sun manuals (§8); QEMU
   (GPL-2: `hw/sparc/sun4m*.c`, `hw/scsi/esp.c`, `hw/net/lance.c`,
   `hw/display/tcx.c`, `hw/char/escc.c`, `hw/dma/sparc32_dma.c`,
   `hw/timer/slavio_timer.c`, `hw/intc/slavio_intctl.c`,
   `hw/misc/slavio_misc.c`, `hw/sparc/sun4m_iommu.c`,
   `target/sparc/`); OpenBIOS (in `bios/`); the Linux and NetBSD
   drivers; our own docs, tests and tools in this repository; and GPL- or
   MIT-compatible RTL from other cores (§5).
3. **The old core may be used as a black box only**: its released
   `.rbf` on a board, to compare observable behaviour (console output,
   boot times, register values read by a test ROM). Never its source.
4. The legacy docs name the old core's files and signals. Treat those
   names as history and take only the hardware facts from them.
5. Sun PROM images and anything that reproduces their code (listings,
   decompiled Forth, detokenized FCode) never go into git. They live in
   the gitignored `scratch/private/` (see `scratch/README.md`).

### 1.2 Compatibility contracts (keep these unchanged)

- **Main (`support/sun`, upstream in Main_MiSTer #1344, plus the CD-audio
  branch #1345).** The new core speaks the same `hps_io` protocol, so
  Main needs no change:
  - ioctl index 0: the boot PROM (`boot0.rom`, `boot.rom`, or the OSD's
    `FC0` Boot PROM);
  - ioctl index 64: the ID PROM seed;
  - SD slots: disk 0, disk 1, CD, and the NVRAM image (8 KB);
    `sd_blk_cnt` chunks of up to 32 blocks;
  - CD: 512-byte blocks at power-up, MODE SELECT block size; the
    CD-audio windows (TOC at block `0xC0000000`, frame f at
    `0x80000000 + 5f`);
  - Ethernet: the `SSETH002` mailbox in DDR3 at ARM physical
    `0x1FF00000`, with an 8-slot TX ring and a 16-slot RX ring.

  The details are in [legacy/design/main-bridges.md](legacy/design/main-bridges.md),
  [legacy/design/scsi-hps.md](legacy/design/scsi-hps.md) and
  [legacy/design/ethernet-hps.md](legacy/design/ethernet-hps.md). The
  reusable RTL that already implements them (`scsi_targets.vhd`,
  `eth_hps.vhd`, `nvram_sd.vhd`) is ours, and is ported in §4.
- **OpenBIOS (`bios/`, `CONFIG_TACUS`).** Keep the same physical address
  map, device set and IDs, so the existing OpenBIOS build boots
  unchanged, and it becomes the bring-up firmware from phase 5 on.
- **The OSD**: the same options and status bits where they still apply
  (README "OSD"), so users' `.CFG` files keep working.
- **Sun OBP 2.25 (525-1377-08)** must boot as well as it does on the VHDL
  core. Its requirements are in
  [rom-disassembly/ss20-obp-2.25/](rom-disassembly/ss20-obp-2.25/).

### 1.3 Targets carried over from the VHDL core (release 20261006)

| Measure | VHDL core | Goal |
|---|---|---|
| CPUs × clock | 2 × 55 MHz (3 failed timing) | ≥ 2 × 55 MHz; 3-4 CPUs if they fit |
| Device use | 74-90 % ALMs with 2 CPUs | ≤ 85 % with 2 CPUs |
| CPU suite (`tests/cpu`, SS20) | 76 PASS / 0 FAIL / 2 SKIP | 78/0/0 |
| Solaris 8 from disk to login (OpenBIOS) | 117 s | ≤ 117 s |
| NetBSD install CD to installer | 98 s (OpenBIOS), 90 s (OBP) | ≤ same |
| OSes | NetBSD 11, Solaris 8, NeXTSTEP 3.3 (both PROMs) | same |
| Sun POST | passes to the EMC/SMC test (ECC out of scope) | same |

## 2. Architecture

```
emu (SunSparcStation.sv, Template_MiSTer)
 └─ ss20_machine
     ├─ cpu[0..N-1]  SuperSPARC-compatible module: IU + FPU + SRMMU + I$/D$
     ├─ mbus         interconnect: arbiter, snoop broadcast, MID, bus errors
     ├─ memctl       → ddram_arb (port) → DDR3; boot-PROM window; RAM size
     ├─ msi          MBus-to-SBus: IOMMU, SBus slot decode and time-outs
     │   ├─ dma2     espdma + ledma (+ bpp stub)
     │   ├─ esp      NCR 53C9x → scsi_targets (port) → hps_io SD slots
     │   ├─ lance    Am7990 → eth_hps (port) → Main mailbox
     │   ├─ tcx      8-bit framebuffer, DAC, cursor → MiSTer video
     │   ├─ slot 3   CS4231 + APC (new) + FCode PROM (ours)
     │   └─ slot e   "dbri-absent" FCode (ours)
     └─ obio         interrupt controller, counter/timers, system regs,
                     ESCC ×2 (kbd/mouse, ttya/b), M48T08 NVRAM/RTC
                     (+ nvram_sd port), AUXIO, FDC stub (port), ts_beep (port)
```

Decisions (change them here if needed):

- **The CPU is a single-issue, in-order pipeline that looks like a
  SuperSPARC (TMS390Z50) to software.** The aim is the PSR, MMU control
  and ASI behaviour that OBP 2.25, Solaris, NetBSD and NeXTSTEP expect,
  not SuperSPARC's three-way superscalar core. The modules run in MBus
  mode with no MXCC or E-cache (as on the VHDL core; this keeps the
  PROM and the OSes off their MXCC paths).
- **Caches:** physically tagged, write-through D-cache with snoop
  invalidation on MBus writes and DMA; main memory cached even where a
  PTE says C = 0 (this was the VHDL core's E3 fix). Write-back is out.
- **TLB:** large enough that OpenBIOS's Forth does not thrash it (the old
  core's 4-entry DTLB cost ~2× at `ok`, see
  [legacy/PLAN.md](legacy/PLAN.md) E4). Plan for 16-32 fully associative
  entries plus a PTP cache, and keep the SuperSPARC 64-entry
  **diagnostic TLB image (ASI 6)** for the POST.
- **The interconnect is our own simple protocol** (request/grant, 36-bit
  PA, 32-byte line bursts, a snoop broadcast on writes). It does not
  model MBus signal by signal. Document it in `docs/arch/bus.md` before
  phase 1 ends; every device uses it.
- **One clock domain** for the machine, as now. Device timing that
  software depends on (§6) is modelled in that clock.
- **Language:** SystemVerilog that Quartus 17.0 and Verilator 5 both
  accept. Each block gets a unit testbench under `rtl/**/tb/`.

## 3. Phases

Each phase ends with an exit test. Sizes are relative: S (days),
M (1-2 weeks), L (several weeks), XL (a month or more).

### Phase 0: skeleton and tooling (S)
- `emu` top from the current Template_MiSTer, with CONF_STR/OSD rewritten
  to the same options; `files.qip`, `.qsf`/`.sdc`; `scripts/build.sh`
  pointed at the new tree.
- `sim/`: a new `sim_top.sv` around `ss20_machine`, keeping
  `sim_main.cpp`'s hps_io, SD, DDR, UART and Ethernet models; drop the
  GHDL step (`gen_verilog.sh`).
- Write the bus spec (`docs/arch/bus.md`) and the address map
  (`docs/arch/memory-map.md`) from
  [rom-disassembly/ss20-obp-2.25/hardware-access.md](rom-disassembly/ss20-obp-2.25/hardware-access.md),
  QEMU's `sun4m.c` (`ss20_hwdef`) and OpenBIOS's `CONFIG_TACUS` map.
- **Exit:** an empty machine builds in Quartus and Verilator; the board
  shows the OSD.

### Phase 1: integer unit (L)
- SPARC V8 IU: 8 register windows (NWINDOWS = 8), traps and RETT,
  delayed control transfers with annul, MUL/DIV (`umul`, `sdiv` and so
  on), `ldstub`/`swap`, alternate-space loads and stores, the `%y`,
  `%asr`, `%psr`, `%wim` and `%tbr` registers, error mode.
- Run from a behavioural memory in simulation.
- Known hazards to test from the start: a JMPL decoded behind a stalled
  RETT (A1, `t_dcti`); error mode → watchdog reset (IU-1, `wdtest`).
- **Exit:** `tests/cpu` `t_alu`, `t_branch`, `t_dcti`, `t_ldst`, `t_psr`,
  `t_traps`, `t_window`, `t_iu2` and `brktest` pass in Verilator, with
  results equal to QEMU's (`tests/cpu/expected`).

### Phase 2: FPU (L)
- The V8 FPop set in single and double precision (quad traps as
  unimplemented, as SuperSPARC does), FSR/FQ, deferred traps, IEEE
  underflow and inexact exactly as the POST and `t_fpu` check (including
  "a product shifted entirely out of the mantissa is an underflow").
- Start with an iterative divide and square root. Write the FPU for
  SPARC directly: an FPU built for another architecture (for example a
  68040's 80-bit extended datapath and exception model) does not carry
  over. QEMU's `target/sparc/fop_helper.c` is the behavioural reference.
- **Exit:** `t_fpu` passes; the SS20 POST's FPU tests pass in simulation
  (run the real PROM in sim from `scratch/private/roms`).

### Phase 3: SRMMU and caches (XL)
- SPARC reference MMU: context table, three-level table walk, R/M bit
  updates, the fault registers (SFSR/SFAR, AFSR/AFAR), the MMU control
  register with SuperSPARC's IDs and bits, and the TLB flush and probe
  ASIs.
- I-cache and D-cache with SuperSPARC's diagnostic ASIs (0x0c-0x0f) and
  flash clears (0x36/0x37); the diagnostic TLB (ASI 6); the L2 TLB/PTP
  cache (MCNTL bit 6; an ASI 5/6/7 write drops the TLBs, which NeXTSTEP
  needs).
- Bus errors: a read the bus refuses traps with SFSR FT 5 and TO/BE; a
  table walk's FT 4 + L (A3, `t_buserr`).
- **Exit:** `t_mmu`, `t_mmu_diag`, `t_mmu_l2`, `t_mmu_swift` (expected
  skips), `t_cache*`, `t_buserr`, `memstress`, `tlbbench` and `bmbench`
  pass; the whole suite runs in simulation from the real boot address.

### Phase 4: memory, PROM and the reused HPS blocks (M)
- `memctl` on DDR3 through `ddram_arb.sv` (ours, unchanged, with its
  testbenches); the boot-PROM window at `0xF_F000_0000`, loaded by ioctl
  index 0; RAM-size option; RAM cleared on power-up, OSD reset or a new
  ROM.
- Port to SystemVerilog: `nvram_sd.vhd` (NVRAM on the SD card, IDPROM
  stamping), `eth_hps.vhd` (the mailbox, 10 Mb/s RX pacing, LANCE
  loopback), and `scsi_targets.vhd` (the target engine: disks, CD,
  SCSI-2 audio commands, the 44.1 kHz player, two-byte messages, SDTR).
  Give each the same interface contract and port its testbench
  (`sim/run-nvram.sh`, `run-eth.sh`, `run-scsi.sh`).
- **Exit:** the CPU suite runs on the board from the OSD's Boot PROM;
  `rtl/mister/tb/run.sh` passes; the ported blocks pass their benches.

### Phase 5: sun4m system devices → OpenBIOS `ok` on ttya (L)
- Interrupt controller (per-CPU and system registers, mask readbacks
  with bits 26:23 reading 0: INT-2), counter/timers (user-timer mode,
  TMR-4, TMR-8: RUN resets to 1), system control/status (RS/WD for
  OpenBIOS's warm-reset memory clear), MID, AUXIO, the EMC/MSI
  registers the PROMs read, and SBus slot time-outs on empty slots (B1).
- ESCC (Z85C30) with ttya/ttyb, BREAK detection (RR0 bit 7, ext/status
  interrupt), and the debug-link escape if `pcdump` is kept. Options:
  write it new, or start from minimigmac's `scc.v` (GPL-2), which needs
  async interrupts and the ESCC additions.
- M48T08 NVRAM/RTC, seeded from the HPS clock, BCD leap years.
- **Exit:** `t_chipset`, `t_msi`, `kbdtest` pass; OpenBIOS from `bios/`
  reaches `0 >` on ttya; `mknvram.py`'s image is read and written back.

### Phase 6: keyboard, mouse and TCX → the screen console (M)
- Sun Type 4/5 keyboard protocol on ESCC channel A of the kbd/mouse
  ESCC: reset reply with held keys, layout byte, bell and click commands
  (→ `ts_beep` port), Stop-A/L-keys/AltGraph chords as designed in
  [legacy/PLAN.md](legacy/PLAN.md) B2. PS/2 → Sun scan-code table
  written new. The Sun-2 core's `sun2_mister_kbd_mouse.sv` is GPL-3;
  using it would make the whole core GPL-3 (§5).
- Sun mouse (Mouse Systems 5-byte protocol).
- TCX: 8-bit VRAM in DDR3, the DAC/palette, hardware cursor, the
  blitter/stippler registers OpenBIOS's fast console uses; the FCode
  PROM from `ts_fcode_pack.vhd` (OpenBIOS/QEMU, GPL-2, regenerate it as
  SV with `tools/fcode2vhd.py`). CG3 is optional.
- **Exit:** OpenBIOS on the screen console; `brktest`, `tb_kbd`'s cases;
  the OSD's keyboard layouts type their AltGraph characters.

### Phase 7: IOMMU, DMA2 and SCSI → disks boot (L)
- IOMMU (page table walk, CAM/TLB, flush; the SS20's fixed rev 0x26),
  DMA2 espdma with its partial-last-word rule (DMA-5).
- ESP (NCR 53C9x as Sun's `esp` driver sees it) on the ported target
  engine. Start from our Quadra core's `ncr53c96.sv` (GPL-2, ours) and
  check it against the 53C90A/ESP100A differences. Behaviour that
  software depends on: a select's interrupt held ~1 ms (ESP-7); MESSAGE
  ACCEPTED gives Bus Service while the target wants more (ESP-8);
  OpenBIOS's exact command sequence (`scsitest` mode 2).
- **Exit:** `scsitest` (all modes) in sim and on the board; NetBSD 11
  and Solaris 8 boot from disk under OpenBIOS; the CD boots NetBSD's
  installer; CD audio plays (`hwtest.sh cdaudio`).

### Phase 8: Ethernet (M)
- Am7990 LANCE with ledma. Vendor **Wish7990** (MIT,
  MelkhiorVintageComputing, already vendored in the Sun-3 core at
  `8610ef5`) and replace its MII side with the ported `eth_hps`, or
  write a LANCE on the same backend. Frames that span several TX
  descriptors at any byte; oversize frames dropped; MODE LOOP.
- **Exit:** `ethtest` (9 cases) in sim; `hwtest.sh net-netbsd`,
  `net-solaris`, `obp-testnet`.

### Phase 9: SMP (L)
- 2 CPUs (then 3-4 if timing allows): MID per module, the per-CPU
  interrupt and timer registers, IPIs (soft interrupts), `ldstub`/`swap`
  atomic across CPUs, snoop invalidation, the arbiter-enable register
  (the POST's "CPU_#2 NOT installed" race), and the OpenBIOS secondary
  start (MCNTL 0x041).
- **Exit:** `t_smp`, `t_msi` (MP); Solaris and NetBSD with 2 CPUs;
  `hwtest.sh stress` for 30-40 minutes.

### Phase 10: sound and the rest (M)
- CS4231 + APC playback DMA, written new from the CS4231A datasheet
  and the `audiocs` drivers (Keith Conger's model is not used), at SBus
  slot 3 with our FCode (`tools/fcode_cs4231.py`); the R2 INT and
  8-bit stereo; mixed with CD audio and `ts_beep` into `AUDIO_L/R`.
- FDC stub (port of `ts_fdc.vhd`), the slot-e `dbri-absent` FCode.
- **Exit:** `hwtest.sh audio-*`, NetBSD/Solaris `audioplay`.

### Phase 11: Sun OBP 2.25, POST, NeXTSTEP (M)
- Boot OBP 2.25 with 2 CPUs; the POST passes up to EMC/SMC; `test net`.
- NeXTSTEP 3.3 under both PROMs: TMR-8, DEC-4 (named slot-e node),
  ESP-7/8, and its use of the L2 TLB.
- **Exit:** `hwtest.sh 20 all` with `--obp`, and `nextstep-install`.

### Phase 12: performance, timing, release (M)
- Timing closure at ≥ 55 MHz with the target CPU count; the boot-time
  table in §1.3; `hwtest.sh speed`, `boottime`.
- README, RELEASE-NOTES, a `releases/` rbf, and the OpenBIOS ROM built
  from `bios/`.

Order: 0 → 1 → 2 and 3 (in parallel once the IU runs) → 4 → 5 → 6 →
7 → 8 → 9 → 10 → 11 → 12. Phase 9 can start after phase 5 if the bus
was designed for SMP from the start (it should be).

## 4. What we carry over (in this repository)

| Item | Where | Use |
|---|---|---|
| SCSI target engine, CD audio | `rtl/sun4m/scsi_targets.vhd` | port to SV (phase 4) |
| Ethernet mailbox to Main | `rtl/mister/eth_hps.vhd` | port (phase 4) |
| NVRAM on SD, IDPROM | `rtl/mister/nvram_sd.vhd` | port (phase 4) |
| DDR3 arbiter + benches | `rtl/mister/ddram_arb.sv`, `tb/` | as is |
| FDC stub, bell/click | `rtl/sun4m/ts_fdc.vhd`, `ts_beep.vhd` | port |
| FCode images | `ts_fcode_pack.vhd` (OpenBIOS, GPL-2), `ts_fcode_cs4231_pack.vhd` (ours) | regenerate as SV |
| Keyboard bench | `rtl/sun4m/tb/tb_kbd.vhd` | port the cases |
| Firmware | `bios/` (OpenBIOS, GPL-2) | as is |
| CPU/chipset test suite | `tests/cpu/` (78 tests, QEMU references) | as is |
| Simulation harness | `sim/sim_main.cpp`, run scripts | new `sim_top.sv` |
| Board regression | `scripts/hwtest.sh`, `scripts/board/` | as is |
| ROM tools | `tools/romdis/`, `fcode2vhd.py`, `fcode_cs4231.py`, `mknvram.py`, `mkcdda.py`, `sparc_link.py`, `ufsread.py`, `ufscmp.py`, `nextstep/`, `mister/sun-idprom.sh` | as is |
| `pcdump` | `tools/debugarm/pcdump.c` | needs a new debug link and its own `lib.h` (the rest of `debugarm` was Grabulosaure's) |
| Hardware knowledge | `docs/rom-disassembly/`, `docs/legacy/` | requirements |

The VHDL files above use small helper types from the old core's packages
(`base_pack`, `ts_pack`, `plomb_pack`), which are not here, so
they will not compile here as they are. Port their logic, not those
types.

## 5. Outside RTL we may use

Copies of the GPL-2 and MIT candidates below, with their licenses, are in
the gitignored `scratch/third-party-rtl/`.

| What | Source | License | Note |
|---|---|---|---|
| Am7990 LANCE | Wish7990 (`Sun-3_MiSTer/rtl/vendor/wish7990`) | MIT | compatible with GPL-2 |
| NCR 53C96 ESP | `MacQuadra800_MiSTer/rtl/ncr53c96.sv` | GPL-2 (ours) | same chip family |
| NCR 53C90 ESP | `NeXT_MiSTer/rtl/next/next_scsi.sv` | GPL-2 (mostly Adam Polkosnik) | second reference |
| Z8530 SCC | `MacQuadra800_MiSTer/rtl/scc.v` (minimigmac lineage) | GPL-2 | simplified; needs the ESCC parts |
| Z8530 SCC | z8530_scc (vz50938) | **GPL-3** | would make the core GPL-3 |
| Sun keyboard/mouse | `Sun-2_MiSTer/rtl/sun2_mister_kbd_mouse.sv` | **GPL-3** | same |
| SPARC V8 + SRMMU reference | GRLIB LEON3 (Frontgrade Gaisler) | GPL edition | read as reference; check its version |

**A license decision for you:** our files are GPL-2.0-or-later and
`sys/` is GPL-2+, so the core may become GPL-3 if a GPL-3 part is
worth it. OpenBIOS is a separate firmware image, so it does not affect
the core's license either way. Until you decide, use only GPL-2 or MIT
parts.

## 6. Behaviour requirements learned on the VHDL core

These are facts about the hardware and the software, recorded in the
legacy docs and commits. Each one must be true of the new core. Write a
test for each in `tests/cpu` or a unit bench.

| ID | Requirement | Source |
|---|---|---|
| A1 | A JMPL/CALL decoded behind a stalled RETT links the right pc | `t_dcti` |
| IU-1 | Error mode → watchdog reset, SFSR EM | `wdtest` |
| MMU-2 | 64-entry diagnostic TLB image (ASI 6) on every CPU | `t_mmu_diag` |
| A4 | Cache diagnostic ASIs 0x0c-0x0f, flash clear 0x36/0x37 | `t_cache_diag` |
| E3 | Main memory cached where a PTE says C = 0 (the walker's own writes coherent) | `t_cache_force` |
| L2 | L2 TLB safe to switch at run time; ASI 5/6/7 writes drop the TLBs | `t_mmu_l2` |
| A3/B1 | Bus errors: empty SBus slots time out; SFSR FT 5, TO/BE | `t_buserr` |
| INT-2 | System interrupt mask bits 26:23 read 0 | POST |
| TMR-4 | User-timer config readback | POST |
| TMR-8 | User-timer mode: RUN resets to 1 | NeXTSTEP |
| DEC-3 | Registers no device answers read 0 | legacy/impl-gaps/chipset.md |
| DEC-4 | Slot e answers with a named FCode node | NeXTSTEP |
| DMA-5 | ESP DMA: the partial last word | `scsitest` t_scsi_sense1 |
| ESP-7 | A select's interrupt is held ~1 ms | NeXTSTEP |
| ESP-8 | MESSAGE ACCEPTED → Bus Service while the target wants more | `scsitest` t_scsi_sdtr1 |
| SCSI-TAG | Two-byte (queue tag) messages accepted | `scsitest` t_scsi_tag1 |
| CD-512 | The CD powers up at 512-byte blocks, follows MODE SELECT | Solaris |
| LAN-2 | Oversize received frames dropped | `ethtest` t_eth_oversize |
| C3 | Received frames paced at 10 Mb/s | `net.sh` large pings |
| KBD | Reset reply lists held keys; it answers within the real keyboard's delay (NetBSD's `kbd0: reset failed`) | `tb_kbd` |
| BRK | BREAK on ttya reaches the ESCC (RR0 bit 7, ext/status interrupt) | `brktest` |
| RST | RS/WD status after a software or watchdog reset (OpenBIOS clears RAM) | NeXTSTEP fsck reboot |
| ID | IDPROM from the host (ioctl 64), stamped into a blank NVRAM | `hwtest.sh idprom-obp` |

The full lists are in [legacy/IMPLEMENTATION_GAPS.md](legacy/IMPLEMENTATION_GAPS.md) §6,
[legacy/impl-gaps/](legacy/impl-gaps/) and
[legacy/HARDWARE_GAPS.md](legacy/HARDWARE_GAPS.md). Go through them at
the start of each phase.

## 7. Test strategy

- **Unit benches** per block (Verilator or iverilog), in `rtl/**/tb/`.
- **The CPU suite** (`tests/cpu`) in Verilator against QEMU's expected
  logs from phase 1 on, and on the board from phase 4. QEMU has known
  V8 deviations ([tests/cpu/README.md](../tests/cpu/README.md)).
- **Whole-machine simulation** (`sim/`): OpenBIOS to `ok`, `scsitest`,
  `ethtest`, and the real Sun PROM's POST (`build.sh --diag`).
- **Board regression** (`scripts/hwtest.sh 20 all`, `--obp`), unchanged.
- **Black-box comparison** with the VHDL core's released rbf (§1.1, 3)
  when a behaviour is unclear, along with QEMU.

## 8. Reference documents

In `scratch/reference/` (PDFs, with text extractions): the SPARC V8
architecture manual (get it from SPARC International if it is not
there), SuperSPARC (`SuperSparc.pdf`, `SuperSPARC2.pdf`,
`supersparcwhitepaper.pdf`, STP1021UG), the *Sun-4M System Architecture*
(`Sun4M_SystemArchitecture_edited2.pdf`), the SPARCstation 20 field
service manual, microSPARC-II and TurboSPARC manuals (for the SS5 and
the SRMMU), HyperSPARC, LEON2. To add: the NCR 53C90A/ESP100A and
53C9x datasheets, Am7990, Z85C30/85230, M48T08, CS4231A, MBus
specification, and the TCX section of the Sun framebuffer docs or QEMU.
