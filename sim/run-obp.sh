#!/usr/bin/env bash
#
# run-obp.sh ROM [--diag] [--nvram FILE] [Vsim_top options...] - Sun's OBP
# 2.25 (the user's SS20 boot PROM image, never in the repository) on the
# simulated machine, its console on ttya, to the `ok` prompt.
#
# The NVRAM: OBP keeps its options in a Sun-format image with a checksum
# (tools/obp_nvram.py). Without --nvram, sim/out/obp.nvr is made once: OBP
# runs on a blank image (it writes its defaults: console on the keyboard
# and screen), then tools/obp_nvram.py sets input-device and output-device
# to ttya and auto-boot? to false. The run uses a copy (the simulation
# writes the image back). --diag sets diag-switch? (the POST runs, its
# messages on ttya; ss20_memctl slows boot-mode PROM reads to the real
# EPROM's pace, which its counter/timer test needs).
#
#   sim/run-obp.sh scratch/obp.rom --ram 64 --cycles 2G
#   sim/run-obp.sh scratch/obp.rom --ram 64 --hd0 disk.img --send 'ok =>boot disk\r' --stop login:
#
# The model must be built (sim/build.sh). Prefer --ram 64: OBP clears all of
# memory at every start. Without a --stop of its own the run ends at `ok`.
set -euo pipefail
ROM="${1:?usage: $0 ROM [--diag] [--nvram FILE] [Vsim_top options...]}"
shift
DIAG=0
NV=""
STOP=1
ARGS=()
while [ $# -gt 0 ]; do
    case "$1" in
        --diag)  DIAG=1 ;;
        --nvram) NV="$2"; shift ;;
        --stop)  STOP=0; ARGS+=("$1") ;;
        *)       ARGS+=("$1") ;;
    esac
    shift
done
[ "$STOP" = 1 ] && ARGS+=(--stop "ok ")
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
SIM="$ROOT/sim/obj_ss20/Vsim_top"
OUT="$ROOT/sim/out"
mkdir -p "$OUT"
if [ -z "$NV" ]; then
    NV="$OUT/obp.nvr"
    if [ ! -f "$NV" ]; then
        echo "run-obp: making $NV (OBP's defaults from a blank image; ~10 min)"
        dd if=/dev/zero of="$OUT/obp-blank.nvr" bs=8192 count=1 2>/dev/null
        "$SIM" --rom "$ROM" --nvram "$OUT/obp-blank.nvr" --ram 64 --cycles 600M --quiet > /dev/null 2>&1 || true
        python3 "$ROOT/tools/obp_nvram.py" "$OUT/obp-blank.nvr" "$NV" \
            input-device=ttya output-device=ttya 'auto-boot?=false' > /dev/null
    fi
fi
RUN="$OUT/obp-run.nvr"
if [ "$DIAG" = 1 ]; then
    python3 "$ROOT/tools/obp_nvram.py" "$NV" "$RUN" 'diag-switch?=true' > /dev/null
else
    python3 "$ROOT/tools/obp_nvram.py" "$NV" "$RUN" 'diag-switch?=false' > /dev/null
fi
exec "$SIM" --rom "$ROM" --nvram "$RUN" "${ARGS[@]}"
