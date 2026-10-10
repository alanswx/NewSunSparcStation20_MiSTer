/* main_l2.S - the MMU table tests alone (t_mmu_l2.S on the runtime), for a
 * short whole-machine simulation of the hybrid: the two tests that fail on
 * the board (a changed PTE re-read by the walker) run within a few hundred
 * thousand cycles after the ROM copy. Build: tests/cpu/build.py ss20 --main=main_l2 */
#include "runtime.S"
#include "gen/cond_tab.S"
#include "gen/alu_vec.S"
#include "mmu_setup.S"
#include "t_mmu_l2.S"

        .section .romend, "a", @progbits
        .align 4
        .globl rom_end
rom_end:
