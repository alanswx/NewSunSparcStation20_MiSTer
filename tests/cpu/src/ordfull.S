/* ordfull.S - the whole suite (main.S) followed by ordtest's instrumented
 * t_mmu_l2_asi6 walk: on the board the two t_mmu_l2 tests fail inside the
 * suite and pass on their own (ordtest.rom), so this shows the raw
 * page-table word and the walk's result in the failing context.
 * Build: tests/cpu/build.py ss20 --main=ordfull; scripts/hwtest.sh 20 ordfull */
#include "main.S"

#define ORD_ASI         0x20
        .section .rodata
s_ordf3a: .asciz "ORD3 walk: pte after store "
s_ordf3b: .asciz " after ld "
s_ordf3c: .asciz " after drop "
s_ordf3d: .asciz " mark "
s_ordf3e: .asciz " l1 "
s_ordfnl: .asciz "\n"
        .text

BEGIN(t_ordf_walk, "ord: t_mmu_l2_asi6's sequence after the whole suite, raw page-table word at each step")
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
        set s_ordf3a, %o0
        call puts
        nop
        mov %l4, %o0
        call puthex
        nop
        set s_ordf3b, %o0
        call puts
        nop
        mov %l5, %o0
        call puthex
        nop
        set s_ordf3c, %o0
        call puts
        nop
        mov %l6, %o0
        call puthex
        nop
        set s_ordf3d, %o0
        call puts
        nop
        mov %l3, %o0
        call puthex
        nop
        set s_ordf3e, %o0
        call puts
        nop
        mov %l1, %o0
        call puthex
        nop
        set s_ordfnl, %o0
        call puts
        nop
        EXPECT(%l3, L2_MARK(23), 1)
END
