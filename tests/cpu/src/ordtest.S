/* ordtest: memory ordering as the machine really does it, for the CPU
 * hybrid on the board (python3 tests/cpu/build.py ss20 --main=ordtest;
 * scripts/hwtest.sh 20 ord). The hybrid's bus shim posts writes; the two
 * t_mmu_l2 tests that store a page-table word and have the walker re-read
 * it fail on the board with the OLD word while every simulation passes.
 * This ROM prints what the memory shows after a store, so the mechanism can
 * be seen rather than guessed:
 *
 *   ORD1 raw      64 × (store a new word, read it back at once through
 *                 ASI 0x20): how many read-backs showed the old value, and
 *                 the longest run of stale read-backs before the new one.
 *   ORD2 waw      64 × (store x, store y, read back): how many read y.
 *   ORD3 walk     t_mmu_l2_asi6's sequence with the raw page-table word
 *                 printed (ASI 0x20) after the store, after the data load,
 *                 after the ASI 6 drop, and the mark the walk then yields.
 *
 * The three t_mmu_l2 tests themselves run first (their macros are used). */
#include "runtime.S"
#include "gen/cond_tab.S"
#include "gen/alu_vec.S"
#include "mmu_setup.S"
#include "t_mmu_l2.S"

#define ORD_A           (SCRATCH + 0x40000)
#define ORD_ASI         0x20

        .section .rodata
s_ord1: .asciz "ORD1 raw: stale read-backs "
s_ord2: .asciz "ORD2 waw: y seen "
s_ord3a: .asciz "ORD3 walk: pte after store "
s_ord3b: .asciz " after ld "
s_ord3c: .asciz " after drop "
s_ord3d: .asciz " mark "
s_of:   .asciz " of 64, longest stale run "
s_ordnl: .asciz "\n"
        .text

BEGIN(t_ord_raw, "ord: a store read back at once through ASI 0x20 (how often stale, longest stale run)")
        set ORD_A, %l0
        mov 0, %l1                      /* stale count */
        mov 0, %l2                      /* longest run */
        mov 64, %l3
        set 0x11000000, %l4
1:      add %l4, 1, %l4
        st %l4, [%l0]
        mov 0, %l5                      /* run of stale read-backs */
2:      lda [%l0] ORD_ASI, %l6
        cmp %l6, %l4
        be 3f
        nop
        add %l5, 1, %l5
        cmp %l5, 200
        bl 2b
        nop
3:      cmp %l5, 0
        be 4f
        nop
        add %l1, 1, %l1
        cmp %l5, %l2
        ble 4f
        nop
        mov %l5, %l2
4:      subcc %l3, 1, %l3
        bne 1b
        nop
        set s_ord1, %o0
        call puts
        nop
        mov %l1, %o0
        call puthex
        nop
        set s_of, %o0
        call puts
        nop
        mov %l2, %o0
        call puthex
        nop
        set s_ordnl, %o0
        call puts
        nop
        EXPECT(%l1, 0, 1)
END

BEGIN(t_ord_waw, "ord: two stores to one word, the read-back shows the second")
        set ORD_A + 8, %l0
        mov 0, %l1                      /* count of y seen */
        mov 64, %l3
        set 0x22000000, %l4
1:      add %l4, 1, %l4
        st %l4, [%l0]
        add %l4, 0x100, %l5
        st %l5, [%l0]
        lda [%l0] ORD_ASI, %l6
        cmp %l6, %l5
        bne 2f
        nop
        add %l1, 1, %l1
2:      subcc %l3, 1, %l3
        bne 1b
        nop
        set s_ord2, %o0
        call puts
        nop
        mov %l1, %o0
        call puthex
        nop
        set s_ordnl, %o0
        call puts
        nop
        EXPECT(%l1, 64, 1)
END

BEGIN(t_ord_walk, "ord: t_mmu_l2_asi6's sequence with the raw page-table word printed at each step")
        call mmu_tables_init
        nop
        STPAV(L2_MARK(22), MT_PAGE(22))
        STPAV(L2_MARK(23), MT_PAGE(23))
        STPAV(PTE_C3(MT_PAGE(22)), MT_L3 + MT_P_REMAP * 4)
        call mmu_on
        nop
        L2_BIT6(1)
        set MT_PAGE(MT_P_REMAP), %l0
        ld [%l0], %l1                   /* 22: the TLBs hold the PTE */
        L2_SET_PTE(PTE_C3(MT_PAGE(23)), MT_L3 + MT_P_REMAP * 4)
        set MT_L3 + MT_P_REMAP * 4, %l7
        lda [%l7] ORD_ASI, %l4          /* the raw word right after the store */
        ld [%l0], %l2                   /* still 22 */
        lda [%l7] ORD_ASI, %l5          /* ... after the data load */
        sta %g0, [%l0] 0x10
        L2_DROP_ENTRY                   /* ASI 6: the entry's SEL2 := 0 */
        lda [%l7] ORD_ASI, %l6          /* ... after the drop */
        ld [%l0], %l3                   /* 23: through the tables again */
        L2_SET_PTE(PTE_C3(MT_PAGE(22)), MT_L3 + MT_P_REMAP * 4)
        call mmu_off
        nop
        L2_BIT6(0)
        set s_ord3a, %o0
        call puts
        nop
        mov %l4, %o0
        call puthex
        nop
        set s_ord3b, %o0
        call puts
        nop
        mov %l5, %o0
        call puthex
        nop
        set s_ord3c, %o0
        call puts
        nop
        mov %l6, %o0
        call puthex
        nop
        set s_ord3d, %o0
        call puts
        nop
        mov %l3, %o0
        call puthex
        nop
        set s_ordnl, %o0
        call puts
        nop
        EXPECT(%l3, L2_MARK(23), 1)
END

        .section .romend, "a", @progbits
        .align 4
        .globl rom_end
rom_end:
