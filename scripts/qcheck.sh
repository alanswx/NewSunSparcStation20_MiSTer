#!/usr/bin/env bash
# scripts/qcheck.sh TOP FILE... - a quick Quartus 17 syntax/elaboration check
# of SystemVerilog sources, without a full build: a throw-away project in
# scratch/qcheck/ runs quartus_map with --analysis_and_elaboration (about
# half a minute) and prints its errors. Use it on every new block before a
# build: Verilator accepts SystemVerilog that Quartus 17.0 does not
# (genvar declared in the for, two package imports in a module header,
# declarations in unnamed blocks).
#
#   scripts/qcheck.sh slavio_timer rtl/pkg/*.sv rtl/obio/slavio_timer.sv
set -u
. "$(dirname "$0")/common.sh"
Q="$QUARTUS_BIN"
[ -x "$Q/quartus_map" ] || { echo "no quartus_map in $Q (set QUARTUS_BIN in scripts/local.env)" >&2; exit 2; }
TOP=${1:?top module}; shift
[ $# -gt 0 ] || { echo "usage: $0 TOP FILE..." >&2; exit 2; }
D=scratch/qcheck
rm -rf "$D"; mkdir -p "$D"
{
    echo 'set_global_assignment -name FAMILY "Cyclone V"'
    echo 'set_global_assignment -name DEVICE 5CSEBA6U23I7'
    echo "set_global_assignment -name TOP_LEVEL_ENTITY $TOP"
    echo 'set_global_assignment -name PROJECT_OUTPUT_DIRECTORY output_files'
    for f in "$@"; do
        case "$f" in
            *.sv)  echo "set_global_assignment -name SYSTEMVERILOG_FILE $(realpath "$f")" ;;
            *.v)   echo "set_global_assignment -name VERILOG_FILE $(realpath "$f")" ;;
            *.vhd) echo "set_global_assignment -name VHDL_FILE $(realpath "$f")" ;;
        esac
    done
} > "$D/qcheck.qsf"
printf 'QUARTUS_VERSION = "17.0"\nPROJECT_REVISION = "qcheck"\n' > "$D/qcheck.qpf"
cd "$D" || exit 1
if "$Q/quartus_map" qcheck -c qcheck --analysis_and_elaboration > qcheck.out 2>&1; then
    echo "qcheck $TOP: ok ($(grep -c 'Warning' qcheck.out) warnings)"
    grep -E '^Warning \((10[0-9]{3})\)' qcheck.out | grep -v -E 'Warning \((10036|10030|10034)\)' | head -10
else
    echo "qcheck $TOP: FAILED"
    grep -E '^Error' qcheck.out | head -20
    exit 1
fi
