#!/usr/bin/env bash
# osd.sh KEY... [shot NAME] - drive the MiSTer as a user does: each KEY (a
# Linux key code, or wS to wait S seconds) goes to mrext's keyboard on the
# MiSTer, then the screen, the OSD included (MiSTer's own screenshots leave
# it out), is grabbed from OBS on OBS_HOST (scripts/local.env; obs-websocket
# without authentication, scene OBS_SCENE, default "Scene") into
# sim/out/osd-NAME.png. Keys go 0.35 s apart: the OSD hides itself after a
# few idle seconds. Codes: F12 88, Up 103, Down 108, Left 105, Right 106,
# Enter 28. The core's file browsers reopen on the file chosen last.
#   scripts/board/osd.sh 88 w1 108 108 28 w1 shot cdrom
set -u
. "$(dirname "$0")/../common.sh"
: "${OBS_HOST:?set OBS_HOST in scripts/local.env}"
: "${MISTER_HOST:?set MISTER_HOST in scripts/local.env}"
while [ $# -gt 0 ]; do
    case "$1" in
        shot) shift; break ;;
        w*) sleep "${1#w}" ;;
        *) curl -s -o /dev/null -X POST "http://$MISTER_HOST:8182/api/controls/keyboard-raw/$1"; sleep 0.35 ;;
    esac
    shift
done
mkdir -p sim/out
sleep 0.8
python3 "$(dirname "$0")/obsws.py" "$OBS_HOST" shot "${OBS_SCENE:-Scene}" "sim/out/osd-${1:-now}.png" 1280 > /dev/null \
    && echo "sim/out/osd-${1:-now}.png"
