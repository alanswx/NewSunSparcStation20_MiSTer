# Test builds

| File | What |
|---|---|
| `SunSparcStation20_20261014.rbf` | the core, main at 16938f1 (md5 0f5b7727): two SuperSPARC CPUs at 55 MHz |
| `boot.rom` | OpenBIOS for it, built from `bios/` at 16938f1 (md5 72d937ea) |

The core needs this OpenBIOS: an older one lists all memory in one
`/memory` entry and Solaris 8 panics early, and before 16938f1 the second
CPU, left waiting, slowed the first one down (the CD boot took 149 s
instead of 123 s).

## Install

1. Copy `SunSparcStation20_20261014.rbf` to the SD card's `_Unstable/`
   (or `_Computer/`).
2. Copy `boot.rom` to `games/SunSparcStation/boot.rom` (Main loads it
   when the core starts).
3. Put disk images in `games/SunSparcStation/` and mount them from the
   OSD: a NetBSD or Solaris disk on HD0 (SCSI target 3), a CD image on
   the CD drive (target 6). [docs/disk-images.md](../docs/disk-images.md)
   says how the test images were made.

4. Video: the screen is 1024x768 (4:3, square pixels). On a 720p output
   Main shrinks it to 960x720 and drops a pixel column and row in every
   16, which breaks Sun's one-pixel fonts. Give the core its own mode in
   `MiSTer.ini`:

   ```ini
   [SunSparcStation]
   video_mode=1        ; 1024x768@60: the picture 1:1
   ```

   (or, on a 1080p TV, `video_mode=8` with `vscale_mode=1`: integer
   scaling, 1024x768 unscaled with borders).

Sun's own PROM (OBP 2.25, from a real SS20) also runs as `boot.rom`; it
is Sun's code and is not distributed here.

## Tested on the board with this build

The CPU suite (82 pass, 0 fail, 5 skip); NetBSD 11 and Solaris 8 from
disk; NetBSD's install CD (123 s); CD audio; the network under NetBSD and
Solaris; 30 minutes of stress under both PROMs; Solaris's audio; under
the Sun PROM its POST, Solaris on two CPUs, the CDE desktop with keyboard
and mouse.

Known: Solaris's mouse driver ignores the first 48 mouse packets after X
starts (about a second of movement) while it settles the baud rate, as
on a real machine; `psrinfo` reports 27 MHz under the Sun PROM (its own
estimate from a delay loop, not the clock); the HDMI clock misses timing
by 0.15 ns in this build (no effect seen).
