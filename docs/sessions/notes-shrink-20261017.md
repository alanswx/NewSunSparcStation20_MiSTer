# Area shrink, 2026-10-17

Goal: at least 2,000 ALMs back from main 86070fa (6e6b439's fit: 39,695 of
41,910 ALMs, 95 %), every clock met, no speed regression (perfbench ticks,
the CPU suite, the benches), so that the next speed features have room.
Worktree branch `worktree-agent-a722b7c363d544af7`; builds in
`misterubuntu:~/mister/ss20-shrink`.

## Before: the fit at 6e6b439 (seed 1 in ss20-new's output_files)

Fitter per entity (ALMs needed, own in parentheses; registers; M10K; DSP):

| entity | ALMs | regs | M10K | DSP |
|---|---|---|---|---|
| sys_top total | 39,695 | 39,361 | 337 | 47 |
| ascal (framework) | 1,902 | 3,598 | 42 | 19 |
| audio_out (framework) | 924 | 1,053 | 0 | 8 |
| osd x2 (framework) | 1,080 | 1,284 | 8 | 0 |
| hps_io (framework) | 642 | 980 | 0 | 0 |
| pll_hdmi_adj (framework) | 531 | 502 | 0 | 0 |
| ss20_machine | 32,553 | 28,314 | 282 | 20 |
| cpu_module x2 | 10,150 each (own 1,237) | 8,062 | 100 | 7 |
| . iu | 3,203 (own 2,409) | 3,662 | 4 | 3 |
| . fpu | 1,960 (own 1,149) | 1,161 | 0 | 4 |
| . srmmu | 1,590 | 914 | 21 | 0 |
| . l1cache dc / ic | 1,219 / 901 | 784 / 462 | 44 / 31 | 0 |
| esp + scsi_targets | 2,435 (scsi_targets 2,137) | 1,847 | 52 | 4 |
| lance + eth_hps | 1,743 (eth_hps 735) | 2,040 | 7 | 0 |
| cs4231 | 963 | 1,019 | 2 | 2 |
| emc | 958 | 1,012 | 0 | 0 |
| tcx (+scan) | 833 | 1,309 | 10 | 0 |
| ss20_msi | 829 | 721 | 0 | 0 |
| escc x2 | 837 | 912 | 0 | 0 |
| ss20_mbus | 587 | 22 | 0 | 0 |
| sun_kbd | 426 | 310 | 1 | 0 |
| dma2 | 345 | 622 | 0 | 0 |
| slavio_timer | 305 | 336 | 0 | 0 |
| fdc82077 | 304 | 292 | 0 | 0 |
| ss20_iobridge | 278 | 267 | 0 | 0 |
| ddram_arb x3 | 342 | 169 | 0 | 0 |
| ss20_memctl | 202 | 248 | 0 | 0 |

Synthesis (quartus_map, ~3.5 min, deterministic) is the per-change
measure; the fit decides. Baseline synthesis: 55,449 ALUTs, 33,082
registers (map.rpt "Analysis & Synthesis Resource Utilization by Entity").

Baselines re-run in this worktree before any change:
- `rtl/tb/run.sh`: lint clean, 26 PASS (4 ddram_arb benches run by
  rtl/mister/tb/run.sh), sim/out/tb-baseline.log.
- perfbench (one-CPU model, ticks): DHRY 66364, COPY 76447, ZERO 47800,
  CHASE 130104, SORT 128554, FP 69899 (= docs/benchmarks/profile-20261014.md).

## Changes

Synthesis ALUTs (own) per entity, from the map runs; "x2" = per CPU.

1. ss20_mbus: the round-robin pick's modulo on loop constants only (the
   modulo of the register was fine after all: Quartus folded it); the
   read data goes to every master ungated, only ack/err are steered (a
   master reads rdata with its ack only); sel_req as an indexed array
   read instead of a priority chain. 983 -> 849 -> 792 ALUTs.
   ss20_msi: next_port likewise; tag_q/w_q/v_q through one write port each
   (a fill never coincides with a diagnostic write: tlb_change blocks it).
   982 -> 939.
2. cpu_module: the D-cache's doubleword aligned once (dmr.va[2:0]: the
   PA's low bits are the VA's on both paths) instead of a shifter per
   path; the memory response's data to the walker, D-cache and I-cache
   ungated (ack/err steered); the micro-TLB's duplicate check remembers
   the entry that matched when the request went to the MMU instead of
   comparing all eight tags again at the fill. 1,665 -> 1,565 -> 1,375 x2.
3. srmmu: tv/tlock/used written through one indexed port each (the fill,
   the flush sweep and the ASI 6 writes are exclusive by state), the
   all-used history clear from the shared one-hot victim. 2,424 -> 2,175 x2
   (-249; the second map, with cpu_module's changes, read 2,151/2,142).
   Behaviour: a hit's used-mark in the very cycle of a fill is dropped
   (replacement history only; the ASI 6 image has no used bits).
4. iu: wr %y/%psr/%wim/%tbr values travel in m_result/w_result (e_result
   already was e_wrval for them); the immediates taken from e_inst in E
   (Quartus had already merged those duplicate registers: no ALUT change);
   one adder for the branch and call targets. 2,173 -> 2,174 ALUTs, 1,397
   -> 1,333 registers x2.
5. l1cache: tag port B's write word chosen once and offered to every way
   (the enables pick the way; the flash sweep alone writes per way);
   fill_tag_end = fill_tag_start | V. (measured in map 3)
6. tcx: the copy's five source doublewords in MLAB (two copies, one per
   read port) instead of flops with 5:1 muxes. (map 3)
7. sun_kbd: the 128 key-down bits in RAM (two copies, read a cycle ahead;
   the AltGraph key in a flop; n_held counts the keys down for the idle
   byte); cleared by a 128-cycle sweep after reset, during which an event
   waits; the reset reply scans two cycles a key. held_o dropped (unused
   outside the bench). (map 3)

   Map 3: l1cache D 1,553 -> 1,360 and I 1,165 -> 991 x2 (-745 in all);
   tcx 1,152 -> 925; sun_kbd 694 -> 397.
8. esp: the 16-byte FIFO in MLAB (ramstyle; the read is asynchronous at
   the tail). (map 4)
9. qsf: MISTER_DOWNSCALE_NN (sys/ascal: nearest-neighbour instead of
   bilinear when the output is smaller than the picture; the OSD's
   upscaling filters are untouched): ascal 2,881 -> 2,747 ALUTs and 19 ->
   13 DSPs. A one-line revert if the quality matters to someone.

10. srmmu: one priority encoder for the victim (over ~tv, else over
    ~tlock & ~used) instead of two. (map 4)
11. cpu_module: the SuperSPARC breakpoint registers (ASI 0x38), counters
    (0x49-0x4B) and ACTION (0x4C) as eight 36-bit words in MLAB, read a
    cycle ahead at the request's index and written masked to each word's
    width; the status word's read-clear happens in the ack cycle; reset
    clears all eight and the watchdog its five by an 8-cycle sweep (D_WD)
    during which the data side takes nothing. Semantics unchanged (OBP
    keeps the MID in 0x38 VA 0, Solaris polls ACTION). (map 4)

12. emc: what a syndrome means ({correctable, data bit}) from a 256 x 8
    ROM (M10K, an initial block) read as the injection is seen and
    written into the entry a cycle later; the entry's first use is at
    least two cycles away (ss20_memctl's gap cycle after every access).
    The 64 comparators of the two functions go. Needs the board's
    `post --obp` (the ECC tests) like every emc change. (map 4)

Totals: baseline 55,449 ALUTs / 33,082 registers; after 1-4 (map 2)
53,622 / 32,962 (-1,827 ALUTs); after 1-7 and 9 (map 3) 52,190 / 32,436
(-3,259 ALUTs, -646 registers, -6 DSPs).

## Tried and not kept

- `set_global_assignment -name OPTIMIZATION_TECHNIQUE AREA -entity X` for
  the 28 chipset entities off the CPU/memory paths (map 3): accepted
  without a warning and without effect (every entity within noise; esp
  and scsi_targets +45 each). Not kept.
- The modulo on `last` in ss20_mbus/ss20_msi's round robin: Quartus had
  folded it (no change beyond noise); the rewrite stays as it is clearer.

## Tried and not kept

## Verification log

- Unit benches: tb_ss20_msi 1552, tb_srmmu 137480 (twice: the write
  ports, then the victim), tb_tcx 5733, tb_sun_kbd 146 (the bench now
  waits 140 cycles after reset for the RAM sweep), tb_espdma 160, tb_emc
  510; lint clean throughout.
- c1 (changes 1-4 as first written): sim/out/check-c1.log: perfbench
  ticks = baseline; CPU suite 84/0/5 = the hardware baseline
  (sim/out/cputest-ss20-c1.log).
- c2 (changes 1-9): sim/out/check-c2.log: perfbench ticks = baseline
  (DHRY 66364, COPY 76447, ZERO 47800, CHASE 130104, SORT 128554, FP
  69899); CPU suite 84/0/5 (sim/out/cputest-ss20-c2.log).
- c3 (changes 1-12, = commits through 9f86ec2): sim/out/check-c3.log:
  perfbench ticks = baseline; CPU suite 84/0/5 (sim/out/cputest-ss20-c3.log).
- OpenBIOS (the board's ROM, openbios-icwait) booting NetBSD 11 from the
  disk image on the 2-CPU c3 model: "CPUs: 2", "Trying disk...", the
  secondary boot, the kernel's copyright banner at 1,334M cycles
  (sim/out/obios-o1.log; 48 min at 464 kHz on the shared Mac).
- Quartus 17 syntax (scripts/qcheck.sh on misterubuntu): emc, cpu_module
  ok; the maps compiled everything else.
