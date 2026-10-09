# Implementation gaps

Phase 4 of [REWORK.md](REWORK.md) asks what the core implements
incompletely or incorrectly, register by register. (Which devices are
missing altogether was phase 2, [HARDWARE_GAPS.md](HARDWARE_GAPS.md).) The
audit is in four parts, each with its own evidence (file:line, manual
section, OS driver code, the Sun PROM disassembly) and severity:

| Part | Scope | Findings |
|---|---|---|
| [impl-gaps/cpu.md](impl-gaps/cpu.md) | IU, FPU, MMU, caches, SMP, reset/config | 32 rows |
| [impl-gaps/chipset.md](impl-gaps/chipset.md) | decode, interrupts, timers, IOMMU/MSI, DMA2, ESP, LANCE, ESCC, NVRAM/TOD, AUX; a reset-state audit | 62 rows |
| [impl-gaps/video-audio-glue.md](impl-gaps/video-audio-glue.md) | TCX/CG3, CS4231, the MiSTer top, loader, DDR map, the phase 3 changes | 25 rows |
| [impl-gaps/keyboard-mouse-serial.md](impl-gaps/keyboard-mouse-serial.md) | Sun keyboard translator, mouse, ESCC behaviour, debug port, ef5ef21 | A-G |

Severity:
- **S1**: breaks an OS or a feature, or stops the real Sun OBP.
- **S1-diag**: fails only the PROM's diagnostic-mode POST.
- **S2**: wrong but tolerated.
- **S3**: cosmetic or diagnostic.

Nothing was simulated (no VHDL simulator on the box); every finding is
marked verified or *inference*.

## 1. What stops the real Sun OBP

The user has made the real OBP the target firmware (REWORK Decisions). Its
blockers, merged across the four parts and ordered, are in
[design/sun-obp-boot.md](design/sun-obp-boot.md), which is the work plan for
REWORK phase 5.1. In short:

**SS5 (OBP 2.15)**, in the order the PROM hits them:
1. The PROM is not decoded at pa `0x7000_0000`, and boot-mode fetches go
   to `0xF_F000_0000` (glue §1; cpu MMU-9).
2. The system control register has no read side, so every soft reset
   looks like power-on and the PROM loops forever (chipset AUX-1; kms A.1).
3. `sta %g0,[0x1000] 4` in `tlb_init_clear` clears the PCR through the
   ASI 4 alias, so the PROM dies on every boot (cpu MMU-1).
4. The bitstream NVRAM is in OpenBIOS format: POST runs in diag mode and
   the IDPROM is invalid (chipset TOD-5).
5. No TCX/CG3 FCode, so no screen console (glue V4).
6. No bus errors: empty SBus slots read as present. This is noise on the
   normal path, but a real defect (cpu MMU-4, chipset DEC-1).
7. No LANCE loopback, so `boot net` fails (chipset LAN-1).
8. No Stop key or BREAK, so there is no way into `ok` from a running OS
   (kms A.8/A.9).

**SS20 (OBP 2.25)** adds:
- no per-CPU MID: ASI 0x38 storage and the MSI MID register are missing,
  so every CPU runs the master path (cpu SMP-1; chipset IOM-1);
- IOMMU IMPL 0 (chipset IOM-2);
- no arbiter enable (cpu SMP-2);
- the top-of-RAM memory probe overwrites the PROM image (glue G6);
- 8-bit contexts against `mmu-nctx` 0x10000 (cpu MMU-3).

## 2. Other S1 findings (OSes and features)

| ID | Finding | Who | Fix |
|---|---|---|---|
| kms D | ESCC: "Reset highest IUS" clears a pending TX interrupt and "Reset TX int pending" arms a mask, so NetBSD serial output deadlocks after 2 characters (Linux stalls) | NetBSD, Linux serial ttys | under 1 h |
| V1 | "Scaler framebuffer" OSD mode: wrong `FB_BASE` (`0x3E40_0000` → VRAM is DDR `0x22B0_0000`) and no palette | anyone using the mode | S |
| V2 | CG3 DAC address register takes the index from D[31:24]; Linux/NetBSD write D[7:0] | Linux console colours on CG3 | XS |
| A1, A2 | CS4231: I12 ID nibble missing (Linux probe fails); STATUS.INT / I24 never set (IRQ handler returns `IRQ_NONE`) | Linux audio | XS, M |
| LAN-2 | LANCE: no receive-buffer size check; 1792-byte frames overrun 1536-byte buffers | becomes S1 with HPS Ethernet | M |
| MMU-3 | see §1: also affects Linux/NetBSD/Solaris on the SS20 under the real OBP | SS20 | M |

## 3. Likely causes of "reboot MiSTer between OSes"

The README's advice, explained. None of these state holders is reset by a
core reset:

- **L2TLB RAM** keeps stale translations (only its generation counter
  resets) (cpu CFG-1).
- **Interrupt Target Register** (chipset INT-1).
- **ESP**: the state machine, the interrupt flags and D_CSR, so a stale
  level-4 interrupt can be live (chipset ESP-1 + DMA-1).
- **Ethernet E_BASE_ADDR** keeps the previous OS's value (chipset DMA-2).
- **LANCE**: E_CSR RESET is only a partial reset (chipset LAN-4).
- **CG3 interrupt enable and TCX THC_MISC**, so the next OS gets stray
  level-9 interrupts (glue V3).
- **Cache tag RAMs**: flash clear is a no-op (cpu C-2).

## 4. Quick wins (XS/S effort, S1/S2 impact)

| ID | Fix | Effort |
|---|---|---|
| kms D | ESCC 0x38 → no-op; 0x28 clears `tx_ip` without arming `tx_mip` | < 1 h |
| MMU-1 | decode ASI 4 VA[12:8]; implement 0x1000/0x1300/0x1400/0x500/0x600 | S |
| AUX-1 | a system control read side; RS bit survives SW_RST; SW_RST without the DRAM wipe | S-M |
| TMR-1 | SS5 prescaler: 65 MHz / 32 is 1.5625 % fast | S |
| TMR-2 | user-timer RUN bit from D<0> (CPU1-3 user timers never start) | S |
| TOD-1 | TOD write with W=1, R=0 swaps the user registers and the counters | S |
| V2, A1, V3 | CG3 index byte; CS4231 ID nibble; reset CG3/TCX control registers | XS each |
| C (mouse) | signed 9-bit deltas, saturated, split over the two halves | S |
| kms A.6 | stop sending ED to the PS/2 port (lost bytes and stuck keys); drive `ps2_kbd_led_*` | S |
| DMA-2 | E_BASE_ADDR resets to `0xff` | XS |
| INT-1, ESP-1, DMA-1, CFG-1 | reset what §3 lists | S each |
| T2, T3 | CONF_STR: 2-bit aspect ratio field; `UART` declaration (PPP / console modes) | XS |

## 5. Corrections to earlier documents

- [HARDWARE_GAPS.md](HARDWARE_GAPS.md) called the mouse fine; it is not
  (kms C).
- HARDWARE_GAPS said Pause is ignored; it sends Ctrl + Num Lock (kms B).
- HARDWARE_GAPS §6 said READ TOC is implemented; it is not (already
  corrected there).
- `ss20-obp-2.25/post-tests.md` said the LANCE has LOOP; it is declared
  and never used (corrected there).
- Why `debugarm` is "needed for SMP" is not explained by the RTL. The best
  lead is OpenBIOS starting the secondaries with MCNTL.SE = 0, so they don't
  snoop (cpu SMP-3, *inference*).

## 6. Status, 2026-10-04 (PLAN B3, the gap sweep)

Every ID of the four parts was re-checked against the RTL and the git
history at `f8946aa` (session 11; four read-only audits, one per part).
The detailed sections in the parts are as written in 2026-09; this table
is the current state. **B11** = fixed in session 11's batch (`batch12-s7`
build), **open** = still as described.

**CPU ([cpu.md](impl-gaps/cpu.md)).** Fixed: MMU-1 (bd3a614), MMU-3,
SMP-1 (c901e3f, 5568d30), SMP-2 (c901e3f), FPU-1, C-3, IU-3, IU-5, MMU-5,
MMU-8, IU-6 (5568d30, 7a85732), CFG-1 (c265fac), C-1 and C-2 on the SS20
(8a8c15f, 5568d30), MMU-12 on the SS20, MMU-13; C-4 **B11** (MCNTL.SE
reset with the core). Partial: MMU-4 (reads done, 7aea8b7 + 7aef921;
write errors open), MMU-2 (the diagnostic image, the real TLBs stay
4+4), C-5 (the hang breaker now 32768 cycles, never measured), FPU-2,
CFG-2 (no per-CPU or watchdog reset). **IU-1 done** (2026-10-05:
Fable 7d7e478 + the chipset half: error mode is a watchdog reset with SFSR
EM and WD); C-5 measured (never fires; kept with a sticky flag, MCNTL bit
15). Open: SMP-3 (OpenBIOS
starts the secondaries without SE: only a NetBSD MP kernel cares),
MMU-6 (BSD_MODE stalls, performance only), MMU-11, IU-2, C-6 (by design).
CFG-6 **B11**: the AOW OSD option, which nothing read, is retired. SS5
only: MMU-7, MMU-9 (worked around in the chipset), MMU-10, CFG-3.
Obsolete: SMP-4, CFG-7 (now NCPUS 2). The `iu_pipe5.vhd:547` latch for
`pipe_dec_c` is gone (7d7e478). MMU-6: `BSD_MODE` false stops Solaris
after its banner, so it is not a performance-only switch (left as is).

**Chipset ([chipset.md](impl-gaps/chipset.md)).** 26 of 62 fixed: AUX-1,
TOD-5 (and C4), IOM-2, LAN-1, DMA-2, TOD-1, TMR-1, ESP-1, DMA-1, INT-1,
ZS-2, KBD-1, TMR-2, TOD-6, IOM-3, INT-2, TMR-3, TMR-4, LAN-3, ZS-4, ZS-7,
KBD-2. In session 11: **DEC-3 B11** (a read no device answers returns 0:
be433f3 had removed the default, leaving `io_r.dr` an inferred latch
that returned the previous read; the ESP, interrupt and timer registers
likewise), **DMA-5 B11** (a DMA transfer that stops mid-word, e.g. REQUEST
SENSE's 18 of 255 bytes, now writes its last 1-3 bytes, and D_ADDR stays
on the next byte; `scsitest` t_scsi_sense1 failed on the board before
and passes now), **DMA-3 B11** (E_CSR INT_PEND not gated by INT_EN),
**ZS-1/ZS-5 B11** (WR9 MIE gates the interrupt; a disabled or reset
channel drops its RX interrupt; an RR8 read clears it like a data read),
**TOD-3 B11** (BCD leap years), **LAN-2 mitigated B11** (received frames
over 1522 bytes are dropped in `eth_hps`; the LANCE still has no BCNT
check), **DEC-1 partial** (7aef921: empty SBus slots time out; also V8
below). Open, judged not worth the risk now: ESP-2 (TCHI: NetBSD sees an
ESP100, which has none), ESP-3, ESP-4 (an Illegal Command interrupt for
unknown commands would also hit commands a real 53C9x accepts), LAN-4
(resetting the DMA engine mid-access could hang the bus), INT-3..5,
TMR-5..7, IOM-4..6, IOM-9, ESP-5, ESP-6, LAN-5, LAN-6, DMA-6, TOD-2,
TOD-4, AUX-2, KBD-3 (no 0x7F idle code). POST only (user, out of scope):
IOM-1's slot configuration, IOM-7, DMA-4, DEC-2. SS5 only: IOM-8, AUX-3.

**NeXTSTEP (PLAN N1, 2026-10-05).** Three chipset faults NeXTSTEP 3.3
found, fixed in the `esp7-s7` build: **TMR-8** (user-timer RUN resets to
1), **DEC-4** (slot e's DBRI node named `dbri-absent`), **ESP-7** (a select's
interrupt held 1 ms). Details in [chipset.md](impl-gaps/chipset.md).

**Video, audio, glue ([video-audio-glue.md](impl-gaps/video-audio-glue.md)).**
Fixed: G1, G2, G5, G6, G7, T2, V2, V3, V4, A1, K1, K2, the loader items.
**V1/T1 B11**: the OSD's "MiSTer framebuffer" output points at the TCX
VRAM (`FB_BASE` 0x22B0_0000; it pointed into main RAM) and has its
palette (`MISTER_FB_PALETTE`, fed by every DAC write). **V8 B11**: VRAM
answers only in slot 2, so the empty slots time out at every offset.
Open: T3/K3/K4 (ttya fixed at 115200 8N1, no `UART` in CONF_STR),
T4, T5, V5, V6, V7, G2' (the power-up clear also wipes the framework's
buffers), G3, G8 (the TOD is in the MiSTer's local time, not UTC), G9.
**Audio (S1, 2026-10-05):** the SS20 now has the SS5's CS4231 + APC as a
card in SBus slot 3, with an FCode PROM of its own (PLAN S1); NetBSD and
Solaris play through it. A1 fixed, A2's quick fix in (R2 INT follows the APC
interrupt); A3-A14 now apply to the SS20 too and stay open. A real SS20's
DBRI is not modelled (HARDWARE_GAPS #30).

**The OSD for the release (2026-10-06, PLAN P2).** Options retired, each
fixed at its tested setting: the "MiSTer framebuffer" output (V1: fixed in
B11 but never used by a test; the core's own video only), the CD-ROM block
size (512 at power-up, MODE SELECT switches it), the cache switch (always
on), the SS20's write-back cache (CFG-6: write-through; write-back's DMA
coherency is not validated) and the SS20's IOMMU rev (CFG-3: 0x26, which
only the SS5's CPU reads). The L2 TLB (CFG-1, fixed by A2) is On by
default.

**Keyboard, mouse, serial ([keyboard-mouse-serial.md](impl-gaps/keyboard-mouse-serial.md)).**
Fixed: A.1, A.4, A.6, A.8, A.9, B (Pause, Print Screen, the command
queue), C (fast moves, phantom clicks), D (TX interrupts, DCD/CTS), port
B RX. **B11**: NetBSD's `kbd0: reset failed` (the reset and layout
replies' first byte now comes after 8 ms, as from a real keyboard: an
answer within microseconds arrived before NetBSD waited for it, so it also
never asked for the layout); the duplicated byte on a same-cycle push and
pop in the keyboard and mouse FIFOs; the ESCC items above. Open: A.2
(ttya speed), A.5 (no headless option), A.7 (RR1 All Sent ignores the
ACIA FIFO: the last characters before a reset can be lost), A.10 (one
BREAK + '3' still selects the debug link), the mouse resync on a gap,
bell and click (deferred by the user), more layouts, the debugarm
"fast"/"slow" swap.
