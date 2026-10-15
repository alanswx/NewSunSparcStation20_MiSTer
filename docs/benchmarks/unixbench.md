# UnixBench on the SS20 core (2026-10-14)

byte-unixbench's System Benchmarks Index (github.com/kdlucas/byte-unixbench),
whose baseline, 10.0 on every test, is "George", a **SPARCstation 20-61**
(one 60 MHz SuperSPARC with a 1 MB SuperCache, Solaris 2.3). The machine
the core models is an SS20 **Model 502**: two SM50 modules, SuperSPARC
with on-chip caches only (20 KB I, 16 KB D), no SuperCache, here at
55 MHz. A real Model 50 would score roughly 7-8 here (SPECint92 ~69
against the Model 61's ~89, from memory), not 10.

## Method

- One NetBSD 11.0 image (`netbsd11-ub.raw`, from the disk-images recipe)
  with UnixBench built in `/root/ub` by `tools/unixbench/ub.sh build`
  (gcc `-O2 -mcpu=supersparc`; execl.c patched for the 64-bit time_t),
  prepared in QEMU's SS-20. The same binaries on every machine.
- `ub.sh run N` runs the 12 index tests with UnixBench's own commands,
  pass counts and syncs; `tools/unixbench/ubscore.py` computes the index
  as UnixBench's `Run` does (no Perl on NetBSD/sparc: pkgsrc has no
  sparc32 packages). On the board: `scripts/board/unixbench.sh`.
- New core: main 16938f1 (rbf 0f5b7727), two CPUs. Old core: the VHDL
  core's release 20261006 (two CPUs). QEMU 11.0.2 `-M SS-20` on an Apple
  M-series Mac (emulation speed, for the build's sanity only).
- Board timings vary ±10-20 % from pass to pass (the DDR is shared with
  the ARM and the HDMI scaler), so differences under ~20 % are noise.

## NetBSD GENERIC (one CPU used), booted by OpenBIOS, 1 copy

```
System Benchmarks Index (SS20-61 = 10.0)          ub-new-c1.log x1         ub-vhdl-c1.log x1            ub-qemu.log x1
Dhrystone 2 using register variables           33992.8   lps   2.9       54102.6   lps   4.6     1662576.4   lps 142.5
Double-Precision Whetstone                        12.6 MWIPS   2.3          21.3 MWIPS   3.9         399.6 MWIPS  72.7
Execl Throughput                                   6.4   lps   1.5           7.0   lps   1.6         180.0   lps  41.9
File Copy 1024 bufsize 2000 maxblocks            693.0  KBps   1.7         884.0  KBps   2.2       15038.5  KBps  38.0
File Copy 256 bufsize 500 maxblocks              206.0  KBps   1.2         259.0  KBps   1.6        7192.3  KBps  43.5
File Copy 4096 bufsize 8000 maxblocks           1348.5  KBps   2.3        1733.0  KBps   3.0       20779.0  KBps  35.8
Pipe Throughput                                 6300.7   lps   5.1        4264.7   lps   3.4      238148.5   lps 191.4
Pipe-based Context Switching                    1598.0   lps   4.0        1386.0   lps   3.5       19563.7   lps  48.9
Process Creation                                  16.9   lps   1.3          16.3   lps   1.3         472.9   lps  37.5
Shell Scripts (8 concurrent)                       2.0   lpm   3.3           3.0   lpm   5.0          76.5   lpm 127.5
System Call Overhead                            7549.3   lps   5.0        5310.0   lps   3.5      222265.3   lps 148.2
Shell Scripts (1 concurrent)                      19.9   lpm   4.7          21.9   lpm   5.2         554.4   lpm 130.8
System Benchmarks Index Score                                  2.6                       2.9                      72.8
```

## NetBSD GENERIC.MP, booted by Sun's OBP 2.25, 1 and 2 copies

Under OpenBIOS GENERIC.MP does not boot on either core (nor in QEMU with
its own OpenBIOS): cpu1 never comes up ("couldn't ping cpus: cpu1" on the
new core, "CPU did not spin up" on the old one) and the boot stalls before
login. Under OBP it boots on both. The new core's 1-copy run hung in the
second pass of "Shell Scripts (8 concurrent)" (killed after 15 min; 11 of
12 tests): an open SMP question.

```
System Benchmarks Index (SS20-61 = 10.0)    ub-mpobp-new-c1.log x1    ub-mpobp-new-c2.log x2   ub-mpobp-vhdl-c1.log x1   ub-mpobp-vhdl-c2.log x2
Dhrystone 2 using register variables           48597.1   lps   4.2       86494.5   lps   7.4       43000.1   lps   3.7       77890.3   lps   6.7
Double-Precision Whetstone                        12.8 MWIPS   2.3          25.5 MWIPS   4.6          10.4 MWIPS   1.9          23.2 MWIPS   4.2
Execl Throughput                                   5.7   lps   1.3           9.5   lps   2.2           2.5   lps   0.6           5.0   lps   1.2
File Copy 1024 bufsize 2000 maxblocks            629.0  KBps   1.6         894.0  KBps   2.3         261.5  KBps   0.7         478.5  KBps   1.2
File Copy 256 bufsize 500 maxblocks              177.0  KBps   1.1         269.0  KBps   1.6          75.0  KBps   0.5         141.0  KBps   0.9
File Copy 4096 bufsize 8000 maxblocks           1270.5  KBps   2.2        1636.5  KBps   2.8         525.5  KBps   0.9         943.4  KBps   1.6
Pipe Throughput                                 5608.8   lps   4.5       10693.0   lps   8.6        1497.5   lps   1.2        3023.6   lps   2.4
Pipe-based Context Switching                    1653.8   lps   4.1        2354.8   lps   5.9         629.9   lps   1.6         917.4   lps   2.3
Process Creation                                  16.2   lps   1.3          20.3   lps   1.6           6.3   lps   0.5           9.0   lps   0.7
Shell Scripts (8 concurrent)                       4.0   lpm   6.6           2.4   lpm   4.1           2.0   lpm   3.3           2.0   lpm   3.3
System Call Overhead                                             -       12096.2   lps   8.1        1647.3   lps   1.1        3228.5   lps   2.2
Shell Scripts (1 concurrent)                      22.9   lpm   5.4          29.9   lpm   7.0           9.9   lpm   2.3          14.9   lpm   3.5
System Benchmarks Index Score                                  2.6 (11/12)                       4.0                       1.2                       2.0
```

## Reading it

- Under OBP + GENERIC.MP the new core is about twice the old one (4.0 vs
  2.0 with 2 copies), and two copies give 1.8x one on Dhrystone.
- Under OpenBIOS + GENERIC the old core scores 2.9 to the new 2.6 (the
  old one is faster on Dhrystone/Whetstone there, the new one on pipes,
  context switches, system calls). The old core does far worse under
  OBP + GENERIC.MP (1.2) than under OpenBIOS + GENERIC (2.9); firmware
  and kernel choice move these numbers a lot.
- OBP calibrates our CPU at "27 MHz" (its delay loop assumes a
  SuperSPARC's ~2 cycles a pass; we take about twice that), the old CPU at
  "40 MHz".
- The weakest tests are fork/exec/file (1.2-2.3): memory and store
  traffic (the L1 data cache is write-through to DDR through the HPS
  bridge).

Logs: `scratch/unixbench-dl/` (local), and `sim/out/ub-*.log` on the
build machine.

## Note: the spawn/shell freeze (fixed 2026-10-15)

Runs built with the earlier tools/unixbench/ub.sh can freeze for good in
spawn or shell8 (once in a few dozen 30 s runs, on the board and in QEMU
alike): the programs' SIGALRM handler calls exit() while fork() holds
NetBSD 11's dynamic-linker lock. ub.sh now builds spawn and looper so
that an exit() from a signal handler is fflush + _exit (every other
exit() is the real one, so the timed loops cost the same); rebuild with
`sh ub.sh build` on the guest. The 9513915 version of the fix also made
the children's exit() an _exit and inflated spawn by ~16 %: do not use
scores from it.

## The patch for byte-unixbench itself

`tools/unixbench/byte-unixbench-sparc.patch` carries the same two fixes
as source changes against github.com/kdlucas/byte-unixbench (master),
for a build with its own Makefile instead of `ub.sh build`: the execl
time_t fix, and `src/ub_sigsafe.h` (the signal-handler-only exit) with
spawn and looper linked `-z now`. Apply in the repository's top
directory with `git am`, `git apply` or `patch -p1`.
