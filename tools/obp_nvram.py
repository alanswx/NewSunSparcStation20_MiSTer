#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-or-later
"""obp_nvram.py IN OUT [name=value ...] - edit OBP 2.25 NVRAM options in an
8 KB M48T08 image and fix its configuration checksum.

Sun's OBP keeps its options at fixed offsets of the NVRAM and checks them
with a one-byte checksum at offset 0; an image edited by hand without it
gets "Incorrect configuration checksum; Setting NVRAM parameters to default
values" (input/output on the keyboard and screen). The offsets and the
checksum come from the OBP 2.25 Forth dictionary
(docs/rom-disassembly/ss20-obp-2.25/forth-dictionary.txt in the main repo):
each option's header holds its offset and size; the checksum is
0x38 ^ 0xf0 ^ the XOR of bytes 0x20..0x1cd7 (words (ffd5f220), (ffd52a30)).

Options:
  input-device=S, output-device=S   e.g. ttya, keyboard, screen
  auto-boot?=true|false, diag-switch?=true|false
  0xOFF=0xBYTE                      any byte

With no option, prints those four. The image's IDPROM and clock are kept.
Never commit a Sun-written NVRAM image (docs/VERILOG-PLAN.md 1.1).
"""
import sys

STRINGS = {"input-device": (0x769, 0x22), "output-device": (0x78b, 0x22)}
FLAGS = {"auto-boot?": 0x5a8, "diag-switch?": 0x001}


def checksum(b):
    x = 0x38 ^ 0xf0
    for i in range(0x20, 0x1cd8):
        x ^= b[i]
    return x


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    b = bytearray(open(sys.argv[1], "rb").read())
    if len(b) != 8192:
        sys.exit("not an 8 KB NVRAM image")
    if b[0] != checksum(b):
        print("note: the input's configuration checksum is wrong", file=sys.stderr)
    for kv in sys.argv[3:]:
        k, v = kv.split("=", 1)
        if k in STRINGS:
            off, size = STRINGS[k]
            if len(v) >= size:
                sys.exit(f"{k}: at most {size - 1} characters")
            b[off:off + size] = bytes(size)        # a length byte, then the text
            b[off] = len(v)
            b[off + 1:off + 1 + len(v)] = v.encode()
        elif k in FLAGS:
            b[FLAGS[k]] = 0xff if v == "true" else 0x00
        elif k.startswith("0x"):
            b[int(k, 16)] = int(v, 0)
        else:
            sys.exit(f"unknown option {k}")
    b[0] = checksum(b)
    for k, (off, size) in STRINGS.items():
        print(f"{k}={b[off + 1:off + 1 + b[off]].decode(errors='replace')}")
    for k, off in FLAGS.items():
        print(f"{k}={'true' if b[off] else 'false'}")
    open(sys.argv[2], "wb").write(b)


if __name__ == "__main__":
    main()
