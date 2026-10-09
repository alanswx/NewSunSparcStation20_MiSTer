# SunSparcStation_MiSTer — plan 2: finishing the SS20

The bring-up plan, [REWORK.md](REWORK.md), is done in its essentials
(sessions 1-9, 2026-09-28 to 2026-10-03): the SS20 core on the standard
MiSTer framework boots NetBSD 11 and Solaris 8 under OpenBIOS and Solaris 8
under the official Sun OBP 2.25 with its three CPUs; SCSI disks, CD images
and Ethernet go through Main (`sparcstation-enhancements`, `support/sun/`);
the NVRAM is saved to the SD card; a CPU test suite and a whole-machine
simulation back it. REWORK.md stays as the record: its phases, the
decisions table and the session log up to session 9.

This file is the plan from session 10 on: what is left to make the SS20
correct and complete. **Release engineering comes later** (user,
2026-10-03): user docs, the MiSTer distribution route, the licence
confirmation, getting the Main changes upstream (listed at the end, not
worked on now).

## Ground rules (user decisions, see REWORK.md Decisions)

- **SS20 only.** The SS5 revision is parked (it should keep building, no
  effort on it).
- **No new features** (2026-10-03; exceptions since: C4, the machine ID
  from the host, and S1, SS20 sound, user 2026-10-04/05; **S2, CD audio,
  and S3, the keyboard bell and click**, user 2026-10-05: with 2 CPUs the
  device is ~76 % full, there is room): the SS20 uses ~89 % of the device's
  ALMs and its fits are marginal (session 9: seed 1 failed to route, seed 2
  met the core clock by 0.017 ns); more logic may force it down to 2 CPUs.
  **2 CPUs since 2026-10-04** (`dad50b2`; user: the clock stays at 55 MHz,
  2 CPUs when 3 do not meet timing; 3 CPUs to be looked at again later):
  after A3, six 3-CPU seeds missed the core clock by 0.25-0.97 ns on the
  IU's fetch → decode → register-read path and one did not place; the
  2-CPU build uses 73 % of the ALMs with 0.48 ns of core-clock margin.
  Fixes and the two approved MMU items (A2) only, kept small. **New
  block RAM is allowed for the POST's cache diagnostics (A4)** (user,
  2026-10-03). The POST's ECC and memory-controller tests are out of scope
  (user, 2026-10-03). Session 10's fits: 90 % ALMs; the HDMI clock misses
  by hairlines at some seeds (d1: seeds 2 and 3), seed 4 met everything.
- **CPU work (`rtl/cpu/`) goes to Fable** through a prompt in
  `scratch/handoff/` that the user runs; the main session reviews and
  merges. Everything else (chipset, glue, Main, OpenBIOS, tests, sim,
  scripts) is the main session's.
- **Board work is the main session's.** Stress runs are 30-40 minutes.
- **Branches:** one per repository: this repository on `danifunker`;
  Main (a separate repository, the user's fork of Main_MiSTer, checked out
  in `scratch/Main_MiSTer-sparc`) on `sparcstation-enhancements` only,
  never touching `support/mac`.

## State at the start (2026-10-03, end of session 9)

- Release `SunSparcStation20_20261003` (`releases/`): RTL `f99098d`,
  OpenBIOS `9cb810de`, Main `17224b1`. Board regression: CPU suite
  65/0/0, scsitest 6/0/0, NetBSD and Solaris under OpenBIOS, Solaris
  under the Sun OBP with 3 CPUs, the OBP's `test net`, Solaris and NetBSD
  on the LAN under OpenBIOS (TCP checked), a 30-minute three-CPU stress.
- Sun OBP milestones ([design/sun-obp-boot.md](design/sun-obp-boot.md)):
  SS20 S1-S8 done, M8 (`test net`) done; **M7, M9, M10 open**.

## Work items

State: **open**, **Fable** (a prompt is written, waiting for the user's
Fable session), **wip**, **done**, **deferred**.

### A. CPU (Fable)

| ID | Item | State |
|---|---|---|
| A1 | **The trap-return hang.** OpenBIOS's window-overflow handler sometimes freezes CPU 0 (error mode, a wrong PSR after `restore; …; wr %l0,%psr`), depending on code position and on the caches being on. Cause (Fable, `f69e653`): a JMPL decoded behind a RETT stalled in EXE (a store before it waiting for the bus: the CD's DMA) took the fetch unit's stale pc, so Forth's `call %g1` linked `%o7` to the RETT and the callee's `retl` ran the spill handler without a trap. Test `t_dcti` | **done** |
| A2 | **The 64-entry diagnostic TLB (ASI 6, MMU-2)** so the Sun POST passes its TLB Bit Pattern and Flush tests; **the L2 TLB made safe to switch at run time** (swept at reset and when enabled; saturating pending counters) **and NeXTSTEP-compatible** (an ASI 5/6/7 write drops the TLBs). Fable `c265fac`: the image in block RAM on CPU 0 (`cpu_conf_pack` `DIAGTLB_CPUS` 1); tests `t_mmu_diag`, `t_mmu_l2`; the POST's four SRMMU tests pass in simulation | **done** |
| A3 | The MMU side of bus errors (M9): the MMUs force `PB_OK` and SFSR EBE 0 (`mcu_multi.vhd:122`). With B1: the contract between the two halves is in the prompt, `scratch/handoff/fable-a3-buserr.md`. **Fable, 2026-10-04** (`7aea8b7` the MMU half: a read answered `PB_ERROR` traps 0x29/0x21 with SFSR FT 5 and TO/BE from the response word, a table walk's FT 4 + L; `01ba374` `t_buserr` (SKIPs until B1); `cda8a8b`, `45e2c9e` baselines; `dad50b2` 2 CPUs; report `scratch/handoff/fable-report-20261004-a3.md`). Seen live with a temporary error source (`scratch/handoff/a3-temporary-berr-source.patch`): t_buserr 2/2, the Sun OBP skips slots 0, 1, 3, NetBSD and Solaris boot | **done** |
| A4 | The CPU items of the diagnostic POST after A2: the SuperSPARC cache diagnostics (C-1/C-2: D/I-cache data, PTAG and STAG behind ASIs 0x0c-0x0f, the flash clears 0x36/0x37), the diagnostic TLB on every CPU (the POST runs its list on each CPU; `DIAGTLB_CPUS` is 1), the FPU underflow trap and FPU-1, **a look at the POST's timing assumptions**, and **main memory cached even where the PROM maps it uncacheable** (E3; only if the walker's own PTE writes can be kept coherent) (the counter/timer interrupt tests and the CPU probe seem to expect a slow boot PROM; user: "have Fable look into this a bit"). **New block RAM is allowed for this** (user, 2026-10-03). Prompt: `scratch/handoff/fable-post-a4.md`. **Fable, 2026-10-03/04** (`1b19a19` FPU underflow, `8a8c15f` the cache diagnostic image in block RAM and the TLB image on every CPU, `047b3e8` main memory cached where the PTE says C = 0, `480f4ff` bmbench, `0c44aee` the 76-test baseline; report `scratch/handoff/fable-report-20261003-a4.md`): every POST test on CPU 0 before the memory controller's passes; the counter tests and CPU_#2 are not CPU problems (D1) | **done** |

After A1: OpenBIOS enters client programs with the caches on, as the Sun
OBP does (E2, done). After A2: the L2 TLB's default (On gives
Solaris −14 % boot, −28 % CPU-bound time) once NeXTSTEP has been tried
with it on — **needs a NeXTSTEP 3.3 for SPARC image or CD from the user**.

### B. Chipset and platform

| ID | Item | State |
|---|---|---|
| B1 | **Bus errors (M9).** The IU maps a bus `PB_ERROR` to an access error trap, but `plomb_pvc` never produces one: unmapped and empty-slot accesses read garbage (the OBP prints "Invalid FCode start byte" for empty SBus slots instead of "Nothing there"). Chipset side here (decode → `PB_ERROR`, SFSR/AFSR), then a Fable prompt for the MMU (A3). **Session 11:** reads of the empty SBus slots 0, 1, 3 answer `PB_ERROR` with SFSR TO (`ts_decode` `sel.noslot`, `ts_io` `io_err`, `plomb_pvc` `mem_err`); with A3 the Sun OBP prints "Nothing there" for slots 0, 1, 3 (TCX at 2). Build `b1-s7` (2 CPUs, seed 7: core +1.300 ns, HDMI +0.191, hold +0.245; 74 % ALMs, 38,321 registers): cpu 76/0/2 (`t_buserr` passes; new baseline), scsi, netbsd, solaris, net-netbsd, solaris-obp (2 CPUs) pass; the POST stops at EMC/SMC as before. Left open on purpose (chipset.md DEC-1): BE for other unmapped OBIO addresses, write errors (M-to-S AFSR and the level-15 interrupt), the SS5 | **done** (reads) |
| B2 | **Stop-A, the L-keys, BREAK (M7).** Today no PC key produces the Sun Stop key or L1-L10 (Main maps those keys to nothing), so there is no way into `ok` from a running OS. Design below, after the Sun-2 core. Test: Stop-A at a Solaris and a NetBSD prompt → `ok`, `go` resumes; L-keys in OpenWindows/CDE; BREAK on the serial console; the keyboard layouts (US/FR/DE/ES) still type their AltGraph characters ([impl-gaps/keyboard-mouse-serial.md](impl-gaps/keyboard-mouse-serial.md) items 4 and 8-10, B). Session 10, `3c9f197`: `ts_ps2sun` (the chords, AltGraph, Pause, Print Screen), `ts_sunkb` (held keys in the reset reply), `ts_aciamux` + `ts_sport` (BREAK); bench `rtl/sun4m/tb/run.sh` (tb_kbd 14/14); board `hwtest.sh 20 kbd` (keys typed on a uinput keyboard through Main) and `brk` (= the simulation); a BREAK drops Solaris (Sun OBP, ttya) to `ok` and `go` resumes it; pcdump unaffected. Not yet tried: Stop-A from the keyboard with the screen console, the L-keys in OpenWindows/CDE, the FR/DE/ES layouts' AltGraph characters  **Session 11, the screen-console checks** (Sun OBP 2.25, `ss20-obp-video.nvr`, Solaris 8 with CDE on the TCX; keys from a uinput keyboard through Main, screenshots): Right Alt + F1 held, then A, drops Solaris (at dtlogin) to `<#0> ok`, and `go` resumes it; in CDE, L7 (Open) iconifies the focused window and Help (Right Alt + F11) opens the File Manager's help; at dtlogin, FR types AltGr+0 '@', AltGr+3 '#', Q 'a'; DE AltGr+Q '@', AltGr+8 '[', Y 'z'; ES AltGr+2 '@', AltGr+3 '#', ';' 'ñ'. A Stop-A needs Stop still down when A goes down (as on a Sun) | **done** |
| B3 | **The gap sweep.** Re-check every IMPLEMENTATION_GAPS item (and the four audits in `impl-gaps/`) against today's RTL; sessions 2-8 fixed many without marking them. Known candidates still open: V1 (the Scaler framebuffer OSD mode), A2 (CS4231 status/INT, Linux audio), LAN-2 (the LANCE's receive-buffer size check), LAN-4, T3 (the `UART` declaration), the reset leftovers of §3; NetBSD's install kernel prints `kbd0: reset failed` (already before B2: its reset handshake with `ts_sunkb`). Already fixed but still listed open: TMR-2, TMR-3 (in `ts_timer.vhd`), and from session 10 INT-2, TMR-4, the keyboard audit's 4, 8-10 and B. Then fix them in batches  **Session 11:** the sweep done (four read-only audits, one per part; [IMPLEMENTATION_GAPS.md](IMPLEMENTATION_GAPS.md) §6 has every ID's state). Fixed in `45966d4` (board `hwtest.sh 20 --obp all` passes): the ESP's partial last DMA word (DMA-5, new scsitest t_scsi_sense1), register reads no device answers return 0 (DEC-3: be433f3 had left an inferred latch), NetBSD's `kbd0: reset failed` (the keyboard answered within microseconds), the keyboard/mouse FIFO duplicate, ESCC MIE and RX interrupt clears, E_CSR INT_PEND, oversize received frames dropped (LAN-2 mitigation), BCD leap years, the MiSTer framebuffer output (V1: wrong FB_BASE, no palette), VRAM only in slot 2 (V8), MCNTL.SE reset (C-4), the AOW OSD option retired. Left open on purpose (risk against no observed failure): ESP-2/3/4, LAN-4, KBD-3, A.7, A.10, TMR-7. CPU items for Fable: IU-1 (watchdog reset), C-5, the `iu_pipe5` latch. Found: the SS20 has no audio (the SS5's CS4231 is not decoded on the SS20; a real SS20 has DBRI) | **done** |
| B4 | **Hot-plugging** a disk and a CD while an OS runs (the OSD driven through mrext's keyboard API: F12 88, Down 108, Enter 28); a CD swap under Solaris (`volcheck`/eject) and NetBSD  **Session 11:** `scripts/board/hotplug.sh` (`hwtest.sh hotplug`, ~7 min) drives the OSD with a uinput keyboard (F12, Down, Enter, letters filter the file list, Enter) while Solaris 8 runs: the CD attached (its volume descriptor reads right), swapped to NeXTSTEP (Solaris drops the old label) and back; sol8.img attached on Disk 1, found by `devfsadm -c disk`, VTOC read, root mounted read-only. PASS. Found on the way: Solaris needs the 512-byte CD block size; the sol8-ss20 image's `c0` links point at QEMU's paths (the SS20's controller is `c1`); vold picks a hot-plugged CD up by itself. Not tried: NetBSD | **done** |

#### B2 design: the Sun keys on a PC keyboard

The core emulates a Sun Type 4 keyboard (`rtl/sun4m/ts_sunkb.vhd`, the
PS/2 → Sun table in `ts_ps2sun.vhd`; the OSD's US/FR/DE/ES is the layout
byte it reports). The Sun-2 core (`../Sun-2_MiSTer`,
`rtl/sun2_mister_kbd_mouse.sv`) already solved the missing keys, and this
core does the same so both behave alike:

| PC | Sun |
|---|---|
| **Right Alt + F1** | **L1 Stop**: Right Alt + F1, then A, is Stop-A (abort to `ok`) |
| Right Alt + F2 .. F10 | L2 Again, L3 Props, L4 Undo, L5 Front, L6 Copy, L7 Open, L8 Paste, L9 Find, L10 Cut (Sun codes 0x03 0x19 0x1A 0x31 0x33 0x48 0x49 0x5F 0x61; L1 is 0x01) |
| Right Alt + F11 | Help (0x76; a Type 4/5 key the Sun-2 lacks) |
| Right Alt + any other key | **AltGraph** (0x0D) + that key: the Type 4 national layouts need AltGraph, so here Right Alt stays AltGraph whenever it is not a chord with F1..F11 (the Sun-2's Type 3 has no AltGraph, so its Right Alt sends nothing) |
| F1 .. F11 | F1 .. F11, as today (F12 is MiSTer's OSD) |
| Pause, Print Screen | Pause (0x15), Print Screen (0x16); today Pause turns into Ctrl + Num Lock (keyboard audit, item B) |

As in the Sun-2 core, an F-key keeps the meaning it went down with (its
auto-repeats and its release follow it), so releasing Right Alt first
cannot leave an L-key held; Right Alt itself sends nothing until it is
used with another key (then AltGraph goes down first, and comes up with
Right Alt), except while an L-key is held: Solaris' abort sequence is
Stop then A with no key between, so Right Alt + F1 then A is Stop-A even
with Right Alt still down. Also: the reset reply lists the keys held (FF 04, then the
held keys, then 7F), so Stop + A / N / D can be held across a reset as on
a Sun (audit item 4); and a BREAK on ttya reaches the ESCC (RR0 bit 7, the
ext/status interrupt) so the OBP and the OSes see it on a serial console,
while BREAK followed by '3' keeps entering the debug link that `pcdump`
uses (audit items 9, 10): `ts_aciamux` holds a BREAK back ~70 ms; '3' or
'4' within that time is the debug link's and is swallowed, anything else
(or nothing) makes it a BREAK for the ESCC, ~70 ms long, with the bytes
received meanwhile held back. The ESCC sets RR0 bit 7, raises an
External/Status interrupt on each edge (WR15 bit 7, WR1 bit 0; RR3,
vector code 101, RR0 latched until WR0's reset) and receives a NUL.

### C. Network

| ID | Item | State |
|---|---|---|
| C1 | **Solaris's TCP under the Sun OBP.** In session 9 DHCP and ping worked on `le1`, but TCP did not (a connect timed out, another read 0 bytes); under OpenBIOS it worked. Session 10, build `a2eth-s2` (A1+A2): **TCP both ways under the Sun OBP** (`OBP=1 scratch/solnet.sh`: 1.16 MB out at 926 KB/s, 4 MB in at 1406 KB/s, cksums equal on both sides; `scratch/sniff.py` on the MiSTer saw 4330 frames, every IP/TCP checksum right, full-size segments both ways). Not reproduced since the IU fix (A1: a wrong `%o7` after an interrupt return is a plausible cause of a lost connection); to be repeated on the next builds before it is closed. Session 11, build `pace-s4` (A1 in, Main `sun-family`): `net-solaris-obp` passes again, TCP both ways (927 KB/s out, 1115 KB/s in) and 16000-byte pings | **done** |
| C2 | The network modes: the OSD (System → Network) picks the adapter at run time: **eth0** (the MiSTer's own port, shared, filtered on the machine's address: what the user wants for most things), macvlan (a virtual interface on eth0 with the machine's address), eth1 (a second, USB adapter), tap0 (needs `/dev/net/tun`, which the test MiSTer's kernel lacks). eth0 and macvlan are checked; eth1 and tap0 stay untested (no adapter, no kernel support). **eth0 is the OSD default** (user, 2026-10-03): the list is eth0, Off, eth1, macvlan, tap0; `07c69eb` (CONF_STR, `eth_ena`, `setopt.sh`) with Main `a2e3ac3` (`mode_from_status()`), board build `a2eth-s2`: NetBSD and Solaris (OpenBIOS) on the LAN | **done** |

| C3 | **Main's `sun-family` and the 16-slot RX ring** (the Sun-2 session's plan, 2026-10-03: Main's `support/sun/` now serves both Sun cores from one branch, `sun-family`, in `~/repos/Main_MiSTer`). A host hands over a datagram's fragments together while the core drains them at 10 Mb/s: 8 RX slots carry an 8000-byte datagram (6 fragments) but not a 16000-byte one (11; NFS over UDP with 8K blocks and other traffic comes close). `eth_hps.vhd`: `TX_RING` 8, `RX_RING` 16 (+0x5000 to +0xD000), magic **`SSETH002`** (an old Main with a new core, or the reverse, sees no mailbox rather than a corrupt one); `sim/sim_main.cpp` the same. `scripts/board/net.sh` netbsd/solaris: 8000- and 16000-byte pings both ways, the guest's reassembly failures 0. **Session 11, board (Main `sun-family` 635a7a5):** with the ring alone NetBSD answered pings up to 14500 bytes (10 fragments) and lost every one from 15000 (11): one LANCE miss each (`netstat -i` Ierrs = "fragments dropped after timeout" = the failed pings). Not Main's ring: `eth_hps` offered each frame as soon as the LANCE had taken the last, at DMA speed, and NetBSD's `le` on ledma has 8 receive descriptors (16 KB of buffers), recycled by its interrupt handler. **Fix:** received frames paced at the wire's 10 Mb/s (bytes + 8 preamble + 12 gap, 0.8 us each, before the next is offered), as on a real Ethernet; caps receive at 1.25 MB/s (C1 measured 1.4 MB/s in, more than a real wire carries). Build `pace-s4` (seed 4: core +0.302 ns, HDMI +0.185, hold +0.226; 88 % ALMs, 44,439 registers): `net-netbsd` and `net-solaris` pass with the large pings (0 reassembly failures; Solaris TCP 933 KB/s out, 1115 KB/s in); pings from here pass up to 24000 bytes (17 fragments: 16 in Main's ring, one taken) and fail from 30000 (21), the ring's bound. Same build and Main: cpu 76/0/0, scsi, brk, kbd, cd (112 s), net-solaris-obp, obp-testnet pass | **done** |

| C4 | **The machine's identity from the host** (the Sun-2 session's plan, item 3; user, 2026-10-04). Main's `sun_idprom.cpp` (`sun-family`) sends the ID PROM (`boot1.rom`, else 08:00:20 + the MiSTer's eth0 bytes 3-5) on ioctl index 64 to both Sun cores; `ss_core` keeps index 64 out of the boot ROM loader (before, any `boot1.rom` landed in the PROM image, and one sent after the PROM held the machine in reset) and takes bytes 5-7 as the seed; a blank NVRAM image's IDPROM gets it as its serial (`iram_rtc`), written back to the file, kept from then on; with no image `nvram_sd` stamps it at every start. `tools/mister/sun-idprom.sh` (on the MiSTer): show, `make MAC\|random` (boot1.rom), `remove`, `reset FILE.nvr`. Board (`idprom-s7`, 2 CPUs, core +1.468 ns, HDMI +0.511, 73 % ALMs; Main `sun-family` + the gate, 4f9ebac2): `hwtest.sh idprom-obp` passes (blank → 08:00:20:61:56:f1 / 726156f1, kept against another seed, reset → boot1.rom's, ss20-obp.nvr unchanged, NetBSD with no image), the Sun OBP's banner shows it; cpu, scsi pass | **done** |

### S. Sound

| ID | Item | State |
|---|---|---|
| S1 | **SS20 audio** (user, 2026-10-05: "we need to also add sound to the ss20"; an exception to "no new features"). Today the SS20 has none: the CS4231 + APC the SS5 uses is synthesised but not decoded on the SS20 (`ts_decode.vhd` Gen20 never drives `sel.audio`), and no PROM creates an audio node. A real SS20 has a DBRI (T5900FC) on the board, slot E, with a CS4215 codec on its CHI bus and the SpeakerBox option; the SS20 OBP's slot-E stub (`fcode-000299a0-dbri-regs-pa.txt`) byte-loads the DBRI's own FCode PROM at slot E +0x1000 (Sun's: we would write our own) and maps its registers at +0x10000. Two routes ([HARDWARE_GAPS.md](HARDWARE_GAPS.md) #10 and #30): **(a) the CS4231 route** (M): decode the existing CS4231 + APC DMA in an SBus slot that is empty today (slot 3: `ts_decode` `noslot` gives it up), with a small FCode PROM of our own at the slot's base creating `SUNW,CS4231` with its `reg`/`interrupts`, so both PROMs probe it (OpenBIOS interprets slot FCode as it does the TCX's); OS drivers bind by name: Solaris `audiocs`, NetBSD `audiocs`, Linux `snd-sun-cs4231`; needs the codec's playback interrupt (A2: R2.INT, I24) and probably A3 (8-bit stereo) and A4 (capture, if wanted); the audio already reaches `AUDIO_L/R`. Not period-accurate (no SS20 shipped with it), but works under both PROMs with every OS. **(b) DBRI** (XL): period-accurate, the PROM's own slot-E path, the `dbri`/`snd-sun-dbri` drivers; a model of DBRI's command queue, pipes and CHI plus a CS4215, and our own FCode. Recommendation: (a) first, (b) only if accuracy matters later. Test: Solaris `audioplay` of a .au file, NetBSD `audioplay`, the OSes' audio device probes; a board check that sound reaches HDMI/analog  **Route (a), user 2026-10-05.** Session 11: `ts_decode` puts the CS4231 + APC at slot 3 +0x0C00_0000 and an FCode PROM at slot 3 +0 (slot 3 no longer times out); `tools/fcode_cs4231.py` tokenizes the node (name SUNW,CS4231, device_type serial, reg <3 0x0c000000 0x40>, interrupts 5, intr <0x39 0>, as the SS5's OBP builds) into `ts_fcode_cs4231_pack.vhd`, served by `ts_io`; OpenBIOS `861d1852` builds the same node (`sbus_probe_slot_ss10`, slot 3); A2's quick fix: the codec's R2 INT follows the APC interrupt. Build `s1-s7` (core +0.744 ns, HDMI +0.767, hold +0.251; 76 % ALMs: the codec was pruned before). Board, `scripts/board/audio.sh`: the Sun OBP's `show-attrs` shows the node; NetBSD's audiocs attaches and 2 s of /dev/audio play in 1.97 s; Solaris (OpenBIOS and the Sun OBP) after `devfsadm -i audiocs` (the image's links were QEMU's) in 2.20 s. Not checked by ear here; A3 (8-bit stereo), A4 (capture) and the rest of A5-A14 stay open | **done** |
| S2 | **CD audio (CD-DA)** (user, 2026-10-05: room freed by the 2-CPU build). Today the CD target serves data only: Main's `sun_cdrom.cpp` parses CUE/CHD tracks (audio ones too) but offers only the data track as a flat 2048-byte disc, and `scsi_mist_cdrom.vhs` knows no audio command. **Main:** an audio window on the CD slot (the frames of the whole disc, 2352 bytes each, read as 512-byte blocks at a high LBA) and a TOC block the core reads at mount. **Core:** the SCSI-2 audio commands in the CD target (PLAY AUDIO(10)/(12), PLAY AUDIO MSF, PLAY AUDIO TRACK/INDEX, PAUSE/RESUME, STOP, READ SUBCHANNEL with the position and audio status, READ TOC with every track and their ADR/control bits, MODE SENSE/SELECT page 0x0E for the volume), a streamer that reads the frames through the CD slot when the SCSI side is idle into a block-RAM FIFO and plays them at 44.1 kHz, mixed with the CS4231 into `AUDIO_L/R`. Test: NetBSD `cdplay` (play, pause, status), Solaris's `CDROMPLAYTRKIND`/`CDROMSUBCHNL` (a small client), a mixed-mode CUE and a CHD; data reads during play  **Session 13:** done as designed (`137c435`; Main `sun-family-ss20-scsi` `bc39fe7`: the track table at block 0xC0000000, frame f at 0x80000000 + 5f, for every image). Simulation: `run-scsi.sh`'s CD run (the harness serves the windows for `--cd-audio 2`), `scsitest` t_scsi_cdda passes (READ TOC, PLAY TRACK, SUB-CHANNEL playing/paused/completed, the volume page). **Board** (build `s13a`, Main `bc39fe7`, `hwtest.sh cdaudio`): NetBSD's `cdplay` lists the tracks of `cddatest.cue` (`tools/mkcdda.py`: data at 0, audio at 300 and 1050, lead-out 1800), plays track 2 into 3, the position moves, pause holds it, resume plays, volume 255; the data track still reads. Not heard here (a 440 Hz tone, then 880/660 Hz): the user listens | done |
| S3 | **The keyboard bell and key click** (user, 2026-10-05; was deferred). `ts_sunkb` decodes 02/03 (bell on/off) and 0A/0B (click on/off) but makes no sound (the Sun-2 core's `bell` output is unconnected too: nothing to port). A small tone generator: the bell a square wave (~2 kHz, as a Type 4's speaker) while it is on, the click a short tick on each key down while click is on; mixed into `AUDIO_L/R` with S1's codec and S2. Test: `echo ^G` on the Solaris and NetBSD consoles, the OBP's `bell`, `kbd -c on` on Solaris  **Session 13:** `dfa41e2` (ts_beep; tb_kbd checks the commands and the clicks). Board: on the next build (by ear: the user) | wip |

### N. NeXTSTEP

| ID | Item | State |
|---|---|---|
| N1 | **NeXTSTEP 3.3 for SPARC**: install and run it, then try the L2 TLB with it (A2's NeXTSTEP fix). The CD is on the MiSTer: `games/SunSparcStation/NeXTSTEP 3.3 User (SPARC, PARISC).iso` (369 MB). **After the CD work is faster** (user, 2026-10-03): E2 and E3 first  **Session 12** (Sun OBP 2.25; the kernel's symbols from the CD's `mach_kernel`, `pcdump`, verbose boots on ttya): three chipset faults found and fixed ([impl-gaps/chipset.md](impl-gaps/chipset.md)): **TMR-8** the kernel switches the CPU counters to user-timer mode and never writes Start/Stop, so its delay-loop calibration (`setcpudelay`) looped forever at "Starting NEXTSTEP" (RUN now resets to 1, as in QEMU); **DEC-4** the Sun OBP's slot-e DBRI stub left an unnamed node and `sbus_config` faulted on its NULL name (an FCode image at slot e +0x1000 names it `dbri-absent`); **ESP-7** a SCSI command completing inside `[NXConditionLock lockWhen:]`'s window deadlocked the SCSI driver at interrupt level (a select's interrupt is held 1 ms, about a real drive's command time; 100 us still deadlocked a screen-console boot; the first version, which held the selection itself, broke OpenBIOS's disk probe: `scsitest` mode 2 now runs OpenBIOS's exact sequence). Installed to `ns33.img` (2000 MB, [disk-images.md](../disk-images.md)); it boots to loginwindow and Configure.app (`hwtest.sh nextstep-obp`). The GUI needs the screen console (with ttya NeXTSTEP attaches no mouse); with it the keyboard and mouse work and Configure.app saves. **Open: the installation's second phase.** loginwindow then runs BuildDisk (while `/usr/adm/BuildDisk.custom` exists), which copies the rest from the CD, and it says "No disks that you can build are attached": its FindDisks (BuildDisk SPARC slice 0x1070c, no symbols) opens `/dev/sg0`, sets each target/LUN (`ioctl 0x80027300`), sends INQUIRY with `SGIOCREQ` (`0xc0587301`, helper 0x111d8: io_status 0 = found, 1 = not, 2/0xd = retry 5 times) and keeps device types 0, 4, 7; something in the generic-SCSI path fails (also seen: "SCSA: bad pkt_reason 14" once per target at boot). Next: trace that ioctl's result on the board (pcdump at the SGIOCREQ return, or a small sg test program), or install from a ttya console with the CD booted. Then NeXTSTEP under OpenBIOS and the L2 TLB with NeXTSTEP  **Session 13:** the pkt_reason was 0x14 = 20, CMD_UNX_BUS_FREE: the esp driver negotiates sync on a target's second command and accepts the SDTR reply byte by byte, and the ESP model's MESSAGE ACCEPTED always reported a disconnect (**ESP-8**, fixed: Bus Service while the target asks for more; `scsitest` t_scsi_sdtr1). The boot is clean now, but BuildDisk still finds no disk: its FindDisks (BuildDisk 0x1070c) scans t0-7 x LUN 0-7 through `/dev/sg0` (SGIOCSTL, then INQUIRY via SGIOCREQ: io_status 0 = found; `auditDisks` 0x8db0 says "No Disks" when the count is 0); the kernel's sg path (`_sgioctl+0x1bc`, bounce buffer, `executeRequest:buffer:client:`) looks right. BuildDisk leaves the request's option bits uninitialized, so its commands may come with a queue tag: the target now takes two-byte messages (SIMPLE/HEAD/ORDERED QUEUE TAG accepted, `scsitest` t_scsi_tag1), to be tried. A pcdump trap at `_sgioctl+0x3c8` (f0092db8, `ba,a .`) left the debug link out of step (kill pcdump only between commands; a `ba,a .` loop may not be stoppable). BuildDisk's phase installs only the CD's optional packages (Demonstrations, Documentation, Emacs, Help, PPDs, languages): the base system is complete. With the tag change (build `s13b`) BuildDisk still finds no disk; one clean trap hit (pressing OK in its alert rescans) showed an INQUIRY of 36 bytes ending in SR_IOST_SELTO (io_status 1), presumably t0's, then the debug link went out of step again (pcdump `-m` of a kernel stack address read 4s). **Under OpenBIOS** NeXTSTEP's boot loader (v3.3.4.17) loads and counts down, but nothing follows on ttya after it (the kernel does not start; pcdump hung): open. The L2 TLB with NeXTSTEP: `hwtest.sh nextstep-obp` passes with OSD L2TLB On, but MCNTL reads 0x01004b01 under NeXTSTEP: bit 6 clear, the L2 TLB inactive. The Sun OBP never sets bit 6 (only OpenBIOS does), so the OSD option only reaches OpenBIOS boots (NetBSD, Solaris) and NeXTSTEP, which boots under the Sun OBP only, is not affected by the default either way  **Session 14** (static; the loader `boot` 3.3.4.17 extracted from the CD to `scratch/ns/boot`, `scratch/ns/bdis.py`): the loader uses the v2 romvec only, through its kernBootStruct's romvec pointer (+0x2b0): `nodeops` (the `memory`/`available`/`virtual-memory` properties, `boot-path`, `boot-args`), `v2_dev_open/close/read/write/seek`, `v2_dumb_mem_alloc/free`, `v2_dumb_mmap/munmap`, `v3_memalloc` (+0xc8), `abort`, `nbgetchar/nbputchar`, and **`pv_fortheval` of the string `"<hex> initsyms"`** (0x84f48: the kernel's symbol table, header 0x01030107, handed to the PROM). OpenBIOS has no `initsyms` (a Sun OBP word): the eval prints `initsyms:` and `_eword`'s catch returns, so a `: initsyms drop ;` stub is needed but, having printed, is probably not where the loader goes silent. `obp_dumb_memalloc` takes the size as the alignment (ofmem rounds it to a power of two; harmless with 464 MB). Next: a ROM built with `CONFIG_DEBUG_OBP` (romvec.c's DPRINTF on every romvec call) and the NeXT disk under OpenBIOS on ttya; the last call before the silence names the culprit  **Session 15: NeXTSTEP boots under OpenBIOS** to loginwindow, through fsck's reboot too (`hwtest.sh nextstep`, new: `nextstep.sh` without `--obp` runs OpenBIOS, `--rom FILE` another image). Four OpenBIOS faults, found with a traced ROM (`build-bios.sh --debug OBP`) and pcdump: **(1) device pages mapped cacheable**: `ofmem_arch_default_translation_mode` always set C, so `v2_dumb_mmap` (romvec +0xa4), which the kernel's `_map_wellknown_devices` uses through `_prom_map` for iommu, eccmemctl, counter, interrupt, eeprom, sbus and auxio, mapped the registers cacheable (PTE `ff1300be` for the counter); `_setcpudelay` read a frozen counter from the D-cache and doubled its loop count forever (loops/us 2^26) right after "Starting NEXTSTEP" (with `-v`; quietly the boot just stopped). Now only main memory (PA[35:32] = 0) is cacheable, for every mapping (`map-pages`, `map-in` too). **(2) `v2_dumb_mmap(0, ...)`**: the quiet loader maps its boot panel's framebuffer with no VA (`dumb_mmap(0, 2, 0x20800000, 1 MB)`: `which_io` the reg's child space, `pa` plus the SBus ranges' parent offset); the Sun OBP's `(op-map)` then allocates a VA and returns it, OpenBIOS mapped 1 MB at 0 over the loader itself (an illegal instruction trap at 0x89e70, `bug`'s dump "0000000200089e7000089e74" on ttya); now it allocates as the OBP does. **(3) `pv_printf`** passed its `va_list` to `printk` (fixed; nothing seen used it). **(4) memory kept across a software or watchdog reset**: the Sun OBP clears memory at every reset ("Initializing Memory"), the core only at power-up, OSD reset or a new ROM, and OpenBIOS never: after fsck's "Root fixed - rebooting" every boot reset the machine 6 s after the countdown; OpenBIOS now clears RAM below its own 16 MB when the system status register's RS or WD is set (~6.5 s, only on such restarts). Also: `initsyms` stubbed (the loader evaluates `"<addr> <size> initsyms"`, the OBP's symbol table hand-over). **The L2 TLB with NeXTSTEP, at last:** under OpenBIOS the kernel keeps MCNTL bit 6 (`0x01004b41`), so with OSD L2TLB On it is active; `nextstep.sh --l2tlb on` passes (through fsck's reboot, loginwindow, running 2 min later). Not done: BuildDisk's "No disks" (above, both PROMs)  **Session 16: the installation finishes.** BuildDisk's "No disks" was never a SCSI fault: `tools/nextstep/sgprobe` (a Mach-O built with clang and `sparc_link.py`, typed in through uudecode on a single-user shell) runs FindDisks' exact `/dev/sg0` scan and finds t3 (disk) and t6 (CD), INQUIRY/READ CAPACITY/TEST UNIT READY all good; the kernel lets root use targets `sd` owns, and BuildDisk keeps euid 0. The cause: BuildDisk's `main` starts Install mode only when `NXGetDefaultValue("BuildDisk", "Install")` is set, which loginwindow writes into the user's defaults before running it (while `/private/adm/BuildDisk.custom` is absent); in normal mode `auditDisks` disables the disk mounted on `/`, hence "No disks". On `ns33.img`, `/me/.NeXT/.NeXTdefaults.D` (the db library's 20-byte directory) was all zeros, the data of an earlier unclean stop (a core reload under a running NeXTSTEP), so the database read as empty and the write never stuck. With it rebuilt BuildDisk opens "Install NEXTSTEP". **A fresh installation under OpenBIOS, end to end** (`ns33-ob.img`): `boot cdrom` at `0 >`, the text phase (8 min of copying), `-s` and `halt`, then on the screen Ctrl-C, Configure.app's Save, BuildDisk Install (all 14 packages, 19:41-20:01), Restart, the Welcome panel, the Workspace; Log Out and Power Off. `/usr/lib/NextStep/Resources` equals the CD's (`tools/ufscmp.py`, 565/565). Backup on the MiSTer: `NeXTSTEP33-SPARC-installed-20261006.zip`. `scripts/board/nextstep-install.sh` (`hwtest.sh nextstep-install`, `-obp`) and `nsscreen.py` drive it; README and disk-images.md updated. **The same under the Sun OBP, as a user** (`ns33-obp.img`): the Boot PROM, the disks and the NVRAM (a copy of `ss20-obp-video.nvr`) chosen in the OSD, both phases on the screen (the text phase needs no ttya), BuildDisk 25 minutes (the OBP leaves the L2 TLB off), Workspace, Power Off; both disks have `BuildDisk.custom` and 14 receipts. NeXTSTEP's mouse acceleration made 8-count uinput paths unrepeatable: `uinput_mouse.py`'s `s2` moves linearly. **`hwtest.sh 20 nextstep-install` passes** (a blank disk to the Workspace and Power Off unattended, ~36 min: phase 1 12 min, the packages 18) | **done** |

### D. Diagnostic POST (M10)

| ID | Item | State |
|---|---|---|
| D1 | Follow the POST in simulation and on the board as A2 lands: the remaining S1-diag items ([design/sun-obp-boot.md](design/sun-obp-boot.md) M10). Chipset items here, CPU items to Fable (A4). Goal: every POST test passes but the memory controller's (**the EMC/SMC register test and the three ECC tests are out of scope**, user 2026-10-03: no ECC memory, no memory-test work), so the POST will end with those failures reported. **Session 10, the whole list** (board, CPU 0, `scratch/ss20-obp225-postall.rom`: `scratch/postall.py` turns post_main's failure branches into nops; `sim/out/hw-20-postall-a2.log`): CPU (A4, prompt `scratch/handoff/fable-post-a4.md`): the six D/I-cache RAM/PTAG/STAG tests, Cache Flashclear, FPU SP Underflow CEXC (FSR stays 0). Chipset (here): EMC/SMC Control Regs (pa 0: exp 100003fc), ECC Multiple UE/CE/CE+UE (pa 8), System Interrupt Regs (f1410004: bits 26:23 must read 0, INT-2), PROC0 User Timer (f1310010: exp f, obs 7), PROC0 Counter/Timer and System Counter ("No interrupt received", then an unexpected trap 0x1e: the interrupt comes, late), MSI/MSBI Control Reg (e000101c, IOM-1), IOMMU CAM/TLB NTA patterns and TLB flush (e000013c, e000023c, e0000140: IOM-7); the run ended there (the late level-14 trap). Fixed in session 10 (`68a339b`, d1-s4): System Interrupt Regs and PROC0 User Timer pass. Also: the POST reports **CPU_#2 NOT installed** on the board (`mp_probe_slaves`: no answer within 50000 polls; the OBP then finds 3 CPUs; the simulation's POST sees 3). **After A4** (Fable's report, "Where the POST stops now"): the stock PROM's POST passes every CPU test and stops at EMC/SMC (out of scope; the OBP then goes on and boots). With the failure exits removed: every FPU test passes but DP CE Trap Priority (needs ECC, out of scope); still failing on the chipset side: MSI/MSBI Control Reg, IOMMU CAM/TLB NTA and TLB flush, and (seen with the counter loops lengthened) the DMA2 D_CSR, D_ADDR, D_BCNT, D_NADDR and the parallel-port P_ADDR, P_BCNT, PPORT Registers, IO and XFR loopback tests. **User decisions (2026-10-04):** the PROC0 Counter/Timer and System Counter tests **stay failing** (they fail because the core runs the boot PROM ~2x faster than a real SS20, Fable measured 0.32 us an instruction; a boot-mode fetch throttle would slow every boot and the CPU suite 2x); the **CPU_#2 NOT installed** banner **stays** (a reset race on the arbiter-enable register, Fable's report 4b; the OBP re-enables all three). Both documented in the README (BIOS section)  **Closed (user, 2026-10-04):** the rest of the POST's chipset tests are not worth modelling (the stock POST stops at EMC/SMC, which cannot pass without ECC memory, so they only show with a patched PROM); listed in the README as limitations | **done** (closed) |
| D2 | A board POST run: `scripts/hwtest.sh 20 --obp scratch/ss20-obp225.rom post` (a copy of the NVRAM with byte 1, `diag-switch?`, set: `post.nvr`; ~20 s). Board = simulation: the D-Cache RAM Write/Read Test fails first | **done** |

### E. Speed (without new logic)

| ID | Item | State |
|---|---|---|
| E1 | Solaris's boot by phase (`scratch/tscap.sh` + `scratch/bootphases.py`): where the 344 s go  **Session 11** (`batch12-s7`, 2 CPUs, OpenBIOS 866aae2b, `scratch/tscap.sh` + `bootphases.py`, logs `sim/out/e1-*.ts`): Solaris 8 from disk under OpenBIOS reaches its login in **149 s** (344 s was before E2/E3): core load and DRAM clear 5.6 s; OpenBIOS 25 s to "Trying disk" (2.7 s ARCH INIT, **12.6 s in `(set-defaults)`** after "nvram error detected, zapping pram", 6.5 s from END INIT to the CPU list, ~2 s the rest); ufsboot 6 s; kernel to "Hostname" 61 s; rc scripts 51 s (85 s in a second run: they vary). The 12.6 s is paid at **every** boot with no NVRAM image or with a blank one: OpenBIOS formats its NVRAM only in RAM and writes the chip at the first changed variable (to spare a Sun OBP image), so an unchanged blank image is zapped again each time. Candidates, not done: write the formatted partition at once when the image is blank (all zero but the IDPROM), and find why `(set-defaults)` takes 12 s with the caches on; the kernel and rc phases are Solaris's own (the core runs them at its speed) | **done** (measured) |
| E2 | OpenBIOS's CD boot with the caches on (after A1): NetBSD's install CD 19 min → 113 s. `4f6edcf`: `go()` only flushes the caches; `boot cdrom:d` 113/113/112 s on the board, NetBSD and Solaris from disk | **done** |
| E3 | **The Sun OBP's CD boot is slow too** (NetBSD's install CD: 899 s, though the OBP runs with the caches on at `ok`). **Cause (session 10):** the OBP maps what it gives a client **uncacheable** on a module without an E-cache: `mappage` builds PTEs through the defer `(ffd56c50)`, which stays the uncached builder `(ffd56c00)` (0x1e) unless `ecache?` (an MXCC with E-cache: MCNTL.MB = 0) switches it to `(ffd56c30)` (0x9e for memory); the core's modules run in MBus mode, "0Mb External cache" (the PTEs of the boot program at 0x4000 and 0x300000-0x390000 read `…7e`, C clear; `scratch/obpcdpte.sh`). At `ok` the OBP itself is fast (500 characters in 110 ms, CD reads 1-2.5 ms: `scratch/obprd.sh`). **With `ffd56c30 ffd56c50 (is  1000000 0 do i cache-enable 1000 +loop` typed at `ok`** (the cacheable builder, and C set on the first 16 MB) **`boot cdrom` reaches NetBSD's installer in 90 s** (`scratch/obpcdfast.sh`). **User's choice (2026-10-03): document it** (CD installs are rare), **then: have the CPU do it** if it can be made safe: Fable's A4 item 5 (the table walker's own R/M writes must keep the own D-cache coherent before page tables can be cached; see the prompt). Emulating an E-cache instead was considered and dropped: a real one is 1 MB per CPU (the device has ~700 KB of block RAM in all), and claiming an MXCC would switch the PROM and every OS to their MXCC code paths (its flush and stream copy/fill operations, the POST's MXCC tests): a second cache controller to emulate, for boot-loader speed only. The PROM's caution (most likely DMA/page-table coherency without an MXCC) does not apply to the core, whose caches snoop DMA and whose D-cache is write-through by default: README "Faster boots with the SS20 Sun PROM"; in `nvramrc` (`use-nvramrc? true`, `scratch/obpnvrc.sh`) it gives `boot cdrom` 90 s and Solaris from disk 102 s to its login (177 s without, `scratch/obpsoltime.sh`). PC samples with pcdump are biased toward console output: switching ttya to the debug link stalls the ESCC's transmitter. **Since A4** (`047b3e8`, main memory cached where the PTE says C = 0): `boot cdrom` 91 s with the stock NVRAM image; the README's `nvramrc` section is replaced by a note (session 11) | **done** |
| E4 | **A formatted NVRAM by default** (user, 2026-10-05: "ship a default formatted NVRAM"). With no NVRAM image, or a blank one, OpenBIOS spends 12.6 s in `(set-defaults)` at every boot (E1). Ship an OpenBIOS-formatted image with the release (and look at whether the empty-slot case can start from it too, without spoiling a Sun OBP image), and if cheap, write the formatted partition at once when the image is blank  **Session 13:** `349851e`: OpenBIOS writes the formatted partitions at once when the image is blank (board: the second boot no longer zaps), `tools/mknvram.py` makes the same image for releases (`ss20.nvr`). **But the 12.6 s is not the NVRAM**: a formatted image boots in the same time (35 s to `ok`). Timed with markers: `setup_video()` 11.3 s (its ~17 `value_addr` fevals, ~0.4 s each), `init_video`/`ob_sbus_init` 7.7 s. OpenBIOS's Forth itself is slow on the core: a `1 drop` loop ~75 us an iteration, a `$find` ~0.6 s; not the caches (on: 7.5 s, I-cache off: 50 s), not CPU 1, not the L2 TLB (On: the same), the level-14 tick is 10 ms. Left for later: profile the interpreter (the PCs sit in `next`/`PUSH`/`POP`)  **Session 14** (short; code reading, then the board): the cost is the MMU, not the cache policy nor the interpreter's code. Measured at OpenBIOS's `0 > ` (ttya, no disks; `: t get-msecs 100000 0 do 1 drop loop get-msecs swap - ; t .`, three C primitives per iteration, `(do)`/`(loop)` are C): default **7.21 s** (72 us an iteration, ~1300 cycles per primitive, for ~30 instructions with ~8 loads and 3 stores); OSD write-back on 7.12 s (nothing: stores are not it, and MCNTL's WB/AW bits are ignored by the core anyway, CFG-6); **OSD L2TLB on 5.04 s and the prompt in 23 s instead of 32** (session 13's "the same" was wrong); OSD cache off 53.2 s (prompt 176 s: a DDR access costs ~240 cycles here, so the default run still makes 5-6 of them per primitive). The same loop under the Sun OBP 2.25: **2.50 s**. Why: the data TLB has 4 entries (`mcu_pack.vhd` `N_DTLB`) and one interpreter step touches 5-6 pages (the dictionary at PC, `words[]`, `dstack`, `rstack`, the globals `PC`/`dstackcnt`/`interruptforth`, the C stack): most references miss, and the table walk goes out on `tw_ext` straight to DDR (three reads, one with the L2 PTP cache). 20 x `$find`: 3.10 s, 1.93 s with the L2 TLB (`setup_video`'s 17 `value_addr` fevals are each a `$find` chain). Checked and cleared: `entry.S`'s early PTEs lack the C bit but `init_mmu_swift` remaps the image with `SRMMU_CACHE` and flushes the TLB. Fixes, cheapest first: (1) OSD L2TLB default On (A2's recommendation, now with a firmware reason too); (2) OpenBIOS: put the interpreter's data (`dstack`, `rstack`, the globals) in one section/page and map its own image with 256 KB level-2 PTEs instead of 4 KB ones in `init_mmu_swift`, so the working set fits four entries; (3) RTL (Fable): a bigger DTLB, or table walks served from the D-cache. Also seen, not investigated: with OSD memory=256 OpenBIOS prints nothing on ttya (black screen; 464 MB works)  **Session 15:** fix (2), the cheap half: the interpreter's state (`PC`, the stack counts, `interruptforth`, `words[]`, `dstack`, the first 410 cells of `rstack`) in one page-aligned block at the start of `.data` (`kernel/stack.h` `FORTH_HOT`, `arch/sparc32/ldscript`); a step now touches that page, the dictionary and little else. Board (same loop): **4.62 s, `$find` x20 1.72 s, prompt 21 s** (was 7.21 s, 3.10 s, 32 s), and the L2 TLB adds nothing to it any more (On: 4.63 s; before the change On gave 5.04 s). Solaris 8 from disk to its login **117.4 s** (`hwtest.sh boottime`; was 149.4 s), NetBSD's install CD 98 s (was 109 s). The rest to the Sun OBP's 2.50 s is the dictionary's pages (the word at PC, the code field it points to). Not done: the image in 256 KB pages (clients that copy the PROM's tables would meet level-2 PTEs). memory=256 fixed (N1's session-15 commit: every CPU takes the same RAM size) | done (NVRAM, interpreter); the dictionary's pages open |

A larger first-level TLB is out (no new features). Disk reads stay at
hps_io's ~4 MB/s (accepted, session 8).

### P. The PROMs

| ID | Item | State |
|---|---|---|
| P1 | **Both PROMs from the OSD** (user, 2026-10-06: "offer both bioses for use, and default to the faster one"). The Sun OBP cannot be shipped, so OpenBIOS (`boot0.rom`) stays the default and a Sun image of the user's own is chosen in the OSD: `FC0,ROM,Boot PROM` (was a one-off `F,ROM,Load boot ROM`): Main remembers the file (`config/SunSparcStation.f0`) and sends it as index 0 at every core start instead of `boot0.rom`/`boot.rom` (Main user_io.cpp: an FC0 file sets `boot0_loaded`); choosing one restarts the machine (a new ROM). Board scripts: `mount.sh --prom FILE\|""`; `core_start`, `hwtest.sh` and `deploy.sh --rom` forget the choice (they test `boot.rom`; `KEEP_PROM=1` keeps it), `machine.sh` saves it per machine. **Measured (session 15, two runs for Solaris):** Solaris 8 to its login OpenBIOS 120 s / OBP 104 s (the gap is the kernel's module loading through the PROM's disk reads: OpenBIOS reads at most 4 KB per SCSI command, `esp.c` BUFSIZE, a 32 KB buffer having run out the 256 KB `ofmem` heap in session 8, unconfirmed as the cause); NetBSD 164 / 163 s; NeXTSTEP to rc 55 / 57 s, through fsck's reboot 190 / 220 s; NetBSD's install CD 98 / 90 s; a software reset to the next boot 26 / 57 s. README "Choosing the PROM". rbf `cdda62ec` (seed 7, only CONF_STR changed: core +0.659 ns, HDMI +0.154, hold +0.238, 79 % ALMs). Board: no choice → OpenBIOS, the Sun image chosen → the Sun OBP (with OpenBIOS in `boot.rom`), `boot.rom` chosen → OpenBIOS; `hwtest.sh 20 all` (with the Sun OBP): cpu 76/0/2, scsi, brk, kbd, wdog, netbsd, solaris, net-netbsd, net-solaris, cd (99 s), nextstep, solaris-obp (2 CPUs), net-solaris-obp, obp-testnet, idprom-obp, audio-obp, cd-obp (90 s), nextstep-obp pass; post stops at the EMC/SMC test as documented (D1, out of scope) | **done** |
| P2 | **The OSD for the release** (user, 2026-10-06). Retired: **Output** (the core's own video only: the framebuffer mode saved nothing, the TCX scanning out VRAM either way, and no screen test used it; a framebuffer-only design that stops the scan-out could free DDR bandwidth for the CPUs: not done); **CD-ROM block size** (the drive powers up at 512 like Sun's drives and follows MODE SELECT: both PROMs' CD boots, NetBSD data and CD audio, Solaris, NeXTSTEP under both PROMs pass with it); **Cache** (always on); **Write-back cache** (write-through: On gave 1-5 %, Solaris boot 116.9 → 115.2 s, ksh loop 207.7 → 205.4 s, and its DMA coherency is not validated; user: write-through for the release); **IOMMU rev** on the SS20 (fixed 0x26: only the SS5's CPU reads it; kept on the SS5). **L2TLB On by default** (user; the status bit's meaning flipped). **Auto boot** moved to the first page. `setopt.sh` follows; `SETOPT_FORCE` holds an option for a whole test run. **Release check through the OSD** (user: "use the OSD menu, not back-end ways"; `scripts/board/osd.sh`, the screen from the user's OBS): the core loaded from the menu, a CUE CD mounted in the file browser and NetBSD's installer booted from it, Auto boot, Reset, the Sun OBP chosen as Boot PROM and back. Found: Main's file lists hide `boot*.rom`, so `boot0.rom` cannot be picked to go back: releases ship OpenBIOS also as `openbios.rom` | **done** |

### F. Tests and tools

| ID | Item | State |
|---|---|---|
| F1 | **Move the board tests into the repository.** The regressions this plan relies on live in the gitignored `scratch/` (`solnet.sh`, `nbnet.sh`, `obnet.sh`, `cdtest.sh`, `cdboot.sh`, `cdstage.sh`, `wbtest.sh`, `speed.sh`, `solstress.sh`, `stresswatch.sh`, `obpmem.sh`, `l2tlbtest.sh`, `rdrate.sh`, `romrun.sh`, `tcpsrv.py`, `ttyx.sh`, `startcap.sh`, `stopcap.sh`, `main-swap.sh`, …): copy the useful ones into `scripts/` (or `scripts/board/`), and give `hwtest.sh` the network, CD and stress tests so one command runs the whole board regression. Session 10: `scripts/board/` (`lib.sh`, `net.sh`, `cd.sh`, `stress.sh`, `tcpsrv.py`, `uinput_keys.py`), `scripts/main-swap.sh`; `hwtest.sh` runs them by name (`net-netbsd`, `net-solaris`, `net-solaris-obp`, `obp-testnet`, `cd`, `cd-obp`, `stress`) plus `post`, `brk`, `kbd`, and `all`; `SUN_OBP` in `local.env`. Left in `scratch/`: the one-off investigations (E3's `obpcd*.sh`, `obprd.sh`, `sniff.py`, `postall.py`), `wbtest.sh`, `speed.sh`, `rdrate.sh`, `l2tlbtest.sh`, `tscap.sh`/`bootphases.py` (E1) **Session 11:** `scripts/board/hotplug.sh` (B4), `idprom.sh` (C4), and from `scratch/`: `wb.sh` (Main's disk write buffer, was wbtest.sh), `speed.sh` (timed jobs under Solaris, `--l2tlb on|off`: was speed.sh and l2tlbtest.sh), `boottime.sh` + `bootphases.py` (E1, was tscap.sh); `hwtest.sh` runs them as `hotplug`, `idprom-obp`, `wb`, `speed`, `boottime` (all PASS on batch12-s7: Solaris 184 s to login, the ksh loop 209 s). Left in `scratch/` on purpose: the one-off investigations and `rdrate.sh` | **done** |
| F2 | Keep the simulation's suites current: `sim/run-eth.sh` (ethtest), `sim/run-scsi.sh`, `sim/run-cputest.sh`; add the receive-side Ethernet cases (C1) and any test A1/A2 bring **Session 11:** `sim/run-scsi.sh` gained t_scsi_sense1 (DMA-5) and `sim/run-eth.sh` t_eth_oversize (the simulation's Main sends a 0x88b6 frame back 1600 bytes long; eth_hps must drop it without RINT or MISS): scsi 7/0/0, eth 9/0/0, CPU suite = baseline | **done** |

### Deferred

- **3 CPUs again** (user, 2026-10-04: "we can look at 3 cpu again later"): needs a shorter fetch path (Fable: the IU's instruction FIFO always on, one more cycle per branch target) or less logic. The POST's "CPU_#2 NOT installed" race (Fable's A4 report 4b) comes back with it.
- **The SS5** (parked).
- **Release engineering** beyond R1 (later): user docs (install, making disk images,
  per-OS notes, the OSD reference, Ethernet), the distribution route
  (MiSTer-devel or a Downloader database), the licence (Grabulosaure's
  confirmation, phase 0 of REWORK.md), the Main changes upstream (after PR
  #1336), the framework revision.

## Suggested order

(Updated in session 15, 2026-10-06.)

1. ~~**Fable: A4**~~ (done, 2026-10-04).
2. ~~**Fable: A3**, then **B1**~~: done in session 11 (reads of the
   empty SBus slots time out; the OBP prints "Nothing there").
3. ~~D1's chipset remainder~~: closed by the user (2026-10-04), README
   limitations.
4. ~~C1: one more `hwtest.sh 20 net-solaris-obp`, then close it.~~
   Done in session 11 (with C3).
5. ~~B3, B4, E1, the B2 checks, F1, F2, C4, and B3's CPU items (Fable:
   IU-1 with its chipset half, C-5, the decode latch)~~: done in session
   11.
6. ~~**S1, SS20 sound**~~: done (route (a), the CS4231 in slot 3).
7. ~~NeXTSTEP (N1), then the L2 TLB default with the user~~: done (the
   L2 TLB On by default since session 15; NeXTSTEP installs end to end
   under both PROMs since session 16).
8. ~~(Session 13) E4's NVRAM, S3, S2, **R1** (the release)~~: done.
   ~~NeXTSTEP under OpenBIOS~~: done in session 15 (with E4's
   interpreter page and the memory=256 fix).
9. ~~P1, both PROMs from the OSD; P2, the OSD for the release; the L2
   TLB default (On)~~: done in session 15, then the release
   (SunSparcStation20_20261006, replacing the unpublished morning one).
   Next, if wanted: OpenBIOS's Solaris module loading (4 KB per SCSI
   command), the write-back cache validated (DMA coherency, SMP stress),
   a framebuffer-only video path, E4's dictionary pages. ~~N1's BuildDisk~~:
   done in session 16 (NeXTSTEP installs end to end under both PROMs).
10. Later, if wanted: 3 CPUs again (deferred); the remaining open gap
   items (IMPLEMENTATION_GAPS §6).

## Session log

- **2026-10-03, session 9 (end).** This plan written from REWORK.md's
  open items (user: the old plan is almost entirely done; release later;
  CD audio stays deferred). The user's answers: the NeXTSTEP 3.3 SPARC CD
  is on the MiSTer, to be tried after the CD work is faster (N1 after
  E2/E3); eth0 is the adapter of choice (C2); Stop-A and the L-keys as in
  the Sun-2 core (B2 design); eth0 as the Network default (C2). Next: a
  Fable session for A1 and A2 (`scratch/handoff/fable-session-20261003.md`),
  then the other items.
- **2026-10-03, Fable (between sessions 9 and 10).** A1 (`f69e653`: a
  JMPL decoded behind a stalled RETT linked `%o7` to the RETT) and A2
  (`c265fac`: the diagnostic TLB on CPU 0, the L2 TLB swept at reset and
  when enabled), board baseline 71/0/0 (`fb07ffb`); report
  `scratch/handoff/fable-report-20261003.md`.
- **2026-10-03, session 10.** Fable's commits reviewed (only `rtl/cpu/`
  and `tests/cpu/`); the A2 rbf on the board; regression: simulation CPU
  suite 71/0/0 and ethtest 8/0/0, board cpu, scsi, NetBSD, Solaris,
  Solaris under the Sun OBP (3 CPUs). **E2 done** (`4f6edcf`: OpenBIOS
  enters clients with the caches on; NetBSD's install CD 113 s, 3 of 3).
  **C2 done** (`07c69eb`, Main `a2e3ac3`: eth0 is the Network default).
  **C1**: Solaris's TCP under the Sun OBP works on the A1+A2 builds (twice;
  `scratch/sniff.py` on the MiSTer saw clean frames). **D2 done**
  (`hwtest.sh post`); **D1**: the whole POST failure list on the board
  (`scratch/postall.py` patches the failure exits out); the CPU side is
  Fable's A4 (`scratch/handoff/fable-post-a4.md`; **the user allows new
  block RAM for it**), the chipset side here: INT-2 and TMR-4 fixed (`68a339b`, build
  `d1-s4`: both POST tests pass), the rest listed under D1 (EMC/SMC, ECC, MSI, IOMMU diagnostics; the
  counter/timer and CPU-probe tests assume a slow PROM). **E3 explained**:
  the Sun OBP maps a client uncacheable without an E-cache; at `ok`,
  `ffd56c30 ffd56c50 (is  1000000 0 do i cache-enable 1000 +loop` makes
  `boot cdrom` 90 s instead of 899 s (user: document it, README).
  **B2 done** (`3c9f197`: the Sun keys,
  BREAK; board `kbd`, `brk`, Solaris BREAK → ok → go). **F1 mostly done**
  (`34c8386`: `scripts/board/`, `hwtest.sh` runs the whole board
  regression). `pcdump` prints the debug status words and `-w`
  (`649470b`). Final build `d1-s4` (`68a339b`, seed 4; seeds 2 and 3 missed
  the HDMI clock by hairlines): CPU suite, scsitest, brk, kbd, NetBSD,
  Solaris, Solaris under the Sun OBP with 3 CPUs, a 30-minute stress under
  the Sun OBP with all CPUs. User decisions: E3 documented (README), and
  the CPU change to cache RAM despite the PROM goes to Fable's A4 (item 5,
  only if the walker's own PTE writes can be kept coherent); A4 also looks
  at the POST's timing; the ECC and memory-controller POST tests are out
  of scope. Next: Fable's A4, then the suggested order above.
- **2026-10-04, session 11.** The Sun-2 session's plan for `ss`
  (Main's `sun-family`): C3, the 16-slot RX ring (`SSETH002`), with
  received frames paced at 10 Mb/s (NetBSD lost every datagram of 11
  fragments without it); C1 closed. User: the keyboard bell and click
  not now (Deferred); Main's SCSI changes, if any are needed, go on a
  new branch `sun-family-ss20-scsi` off `sun-family` (none were: the
  regression passes on `sun-family` as it is).
- **2026-10-04, session 11 (cont.).** C4 (the machine's identity from the
  MiSTer's Ethernet address; Main `sun-family` 26b7d82), a 30-minute
  stress under the Sun OBP on the C4 build (2 CPUs) passed, then B3: the
  sweep and its fix batch (`45966d4`). User: the rest of D1 dropped (README
  limitations); NeXTSTEP last.
- **2026-10-05, session 11 (cont.).** B4 (`hotplug.sh`), the B2 checks
  (Stop-A, CDE L-keys and Help, FR/DE/ES AltGraph), E1 (Solaris 149-184 s),
  F1 and F2 done; Fable's B3 report (`7d7e478`, `6a19247`): IU-1's CPU half,
  C-5 measured, the decode latch; the main session wired IU-1's chipset
  half (`hwtest.sh wdog`). The user asked for SS20 sound: S1 added.
- **2026-10-05, session 12.** N1, NeXTSTEP 3.3: TMR-8, DEC-4 and ESP-7
  fixed (build `esp7d-s7`: 2 CPUs, core +0.921 ns, HDMI +0.205, hold
  +0.258, 76 % ALMs; ESP-7's hold 1 ms); `scsitest` mode 2 (OpenBIOS's exact `do_command`)
  and `hwtest.sh nextstep-obp`; `audio-obp` also checks slot e's name.
  User: the core's HDMI mode for a sharp 1024x768 picture goes in
  `MiSTer.ini` (`[SunSparcStation]` `video_mode=8`, `vscale_mode=1`, set on
  the test MiSTer; README).
- **2026-10-05/06, session 13.** User: add CD audio (S2) and the keyboard
  bell and click (S3) (room freed by the 2-CPU build), ship a formatted
  NVRAM (E4), release tomorrow (R1). **ESP-8** (`eb1d0bf`): MESSAGE ACCEPTED
  waits for the target's next REQ: NeXTSTEP's "SCSA: bad pkt_reason 14"
  (CMD_UNX_BUS_FREE during the SDTR reply) is gone; the target takes
  two-byte messages and queue tags (`95bf34f`). BuildDisk still finds no
  disk (N1). **S3** (`dfa41e2`), **S2** (`137c435`, Main
  `sun-family-ss20-scsi` `bc39fe7`, the user's authorised branch): CD audio
  works on the board under NetBSD (`hwtest.sh cdaudio`). **E4**
  (`349851e`): the 12.6 s is not the NVRAM but OpenBIOS's own Forth init
  (`setup_video` 11 s): left open. **R1**: release
  SunSparcStation20_20261006 (`62e149a`): rbf `s13b` (seed 7: core +0.841,
  HDMI +0.430, hold +0.255, 78 % ALMs), OpenBIOS c5dbad7e, Main bc39fe7,
  `ss20.nvr`; the whole board regression passes (README of releases).
  Found: the MiSTer's /tmp is emptied by a Main swap (pcdump, the uinput
  helpers); pcdump killed by `timeout` mid-command leaves the debug link
  out of step until the core is reloaded.
  After the release: a 30-minute stress on both CPUs passed; NeXTSTEP with
  OSD L2TLB On (MCNTL bit 6 stays clear under the Sun OBP: inert).
- **2026-10-06, session 14** (short: code reading on the OpenBIOS items).
  **E4**: the slow Forth is DTLB misses walked straight from DDR (4-entry
  DTLB, 5-6 pages per interpreter step): 100k `1 drop` 7.21 s by default,
  **5.04 s with OSD L2TLB On** (prompt 23 s instead of 32), unchanged by
  write-back, 53 s with the caches off, 2.50 s under the Sun OBP; fixes
  listed in E4. **N1**: the NeXT loader's romvec usage mapped (v2 only,
  plus `pv_fortheval "<hex> initsyms"`, a word OpenBIOS lacks); next a
  `CONFIG_DEBUG_OBP` ROM under the NeXT disk. Seen: OSD memory=256 gives
  no OpenBIOS output.
- **2026-10-06, session 15.** N1: **NeXTSTEP boots under OpenBIOS**
  (`4d30547`): device pages were mapped cacheable (`v2_dumb_mmap`: the
  kernel's delay calibration read a cached counter), `v2_dumb_mmap(0, ...)`
  now allocates a VA as the OBP's `(op-map)` (the quiet loader mapped 1 MB
  over itself), `pv_printf`'s `va_list`, an `initsyms` stub, and RAM
  cleared after a software or watchdog reset as the Sun OBP does (fsck's
  reboot looped). OSD memory=256 works (every CPU takes the same RAM size;
  CPU 1 had walked tables in an empty slot). `hwtest.sh nextstep`,
  `build-bios.sh --debug` (`ca045b8`). E4: the interpreter's state in one
  page: OpenBIOS's Forth ~36 % faster, prompt 21 s instead of 32, and the
  L2 TLB no longer matters to it; Solaris boots to its login in 117 s
  (was 149). User: offer both PROMs (P1: the OSD's Boot PROM, OpenBIOS the
  default), the OSD trimmed for the release (P2: Output, CD block size,
  Cache, Write-back, the SS20's IOMMU rev retired; L2TLB On by default;
  Auto boot on the first page), Main from master (#1344 merged) plus the
  CD-audio port (`sun-ss20-cdaudio`), and the release tonight. The OpenBIOS regression passes on both ROMs (netbsd solaris
  cd nextstep net-* audio-* wb hotplug boottime). NeXTSTEP with the L2
  TLB active (OSD On; OpenBIOS sets MCNTL bit 6 and NeXTSTEP keeps it)
  passes.
- **2026-10-06, session 16.** N1: **NeXTSTEP's installation finishes.**
  BuildDisk's "No disks" was a damaged defaults database on the test disk
  (an unclean stop had zeroed `/me/.NeXT/.NeXTdefaults.D`, so
  loginwindow's `BuildDisk Install Yes` never stuck and BuildDisk ran in
  its normal mode, which refuses the startup disk), not SCSI: `sgprobe`
  ran BuildDisk's `/dev/sg0` scan inside NeXTSTEP and found both targets.
  Fresh installs went end to end under OpenBIOS (text phase, Configure,
  14 packages in 20 minutes, Workspace; backed up zipped on the SD card)
  and under the Sun OBP, set up through the OSD and done on the screen. New: `tools/nextstep/` (sgprobe, Mach-O wrapper),
  `tools/ufscmp.py`, `scripts/board/nextstep-install.sh` + `nsscreen.py`,
  README's NeXTSTEP section. No RTL change.
