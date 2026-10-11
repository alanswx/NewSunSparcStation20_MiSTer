/* A DMA transfer into lines the module holds in its D-cache, at the
 * interconnect's highest snoop rate (a line every two cycles), while the
 * module stores (its own snoops) and flash-clears its I-cache (a sweep the
 * snoop queue must pre-empt): every word of the buffer must then read as
 * the DMA wrote it.
 *
 * The DMA engine is the harness's (sim/cpu/cpu_sim.sv: registers in the
 * page at pa 0xE_0000_1000, SBus slot 0, through the bypass ASI 0x2e). It
 * exists nowhere else: the test SKIPs when the probe of its ID register
 * traps (the slot times out on the board, as t_buserr relies on) or reads
 * another value (QEMU).
 *
 * Found on the board (2026-10-10, docs/sessions/HANDOFF-20261009.md): each
 * L1's snoop queue was 8 entries deep with no overflow check and drained
 * one entry per two cycles, none during a flash sweep; DMA snoops were
 * lost, and a DMA buffer re-read by OpenBIOS came back old. The suite
 * could not show it: its interconnect model snooped the module's own
 * writes only, which the D-cache ignores. */
#include "macros.h"

#define DMA_PA_LO       0x00001000      /* pa 0xe_0000_1000 */
#define DMA_ASI         0x2e
#define DMA_ID          0x444d4131      /* "DMA1" */
#define DMA_R_DST       0x04
#define DMA_R_LINES     0x08
#define DMA_R_SEED      0x0c            /* a write starts the transfer */
#define DMA_R_BUSY      0x10
#define DMA_R_RATE      0x14            /* cycles a line */

#define DM_BASE         MT_PAGE(36)     /* 8 KB: 256 lines, identity, cacheable */
#define DM_SIZE         0x2000
#define DM_LINES        (DM_SIZE / 32)
#define DM_OTHER        MT_PAGE(40)     /* the store loop's page */
#define DM_SEED_A       0x11115555
#define DM_SEED_B       0xaaaa3333

BEGIN(t_dma_snoop, "dma: a transfer at a line every two cycles into cached lines, under stores and an I-cache flash clear, is what the module reads")
        /* the engine's ID, with the trap catcher armed: a trap or another
         * value means no engine */
        mov 0x300, %o0
        lda [%o0] 4, %g0                /* clear the SFSR */
        mov -1, %o0
        st %o0, [%g7 + V_TRAP_SEEN]
        set TT_DACC_ERR, %o0
        st %o0, [%g7 + V_TRAP_EXPECT]
        set DMA_PA_LO, %l3
        lda [%l3] DMA_ASI, %l0
        ld [%g7 + V_TRAP_SEEN], %o1
        mov -1, %o0
        st %o0, [%g7 + V_TRAP_EXPECT]
        mov 0x300, %o0
        lda [%o0] 4, %g0                /* the probe's own record */
        cmp %o1, -1
        bne 8f
        set DMA_ID, %o0
        cmp %l0, %o0
        bne 8f
        nop

        call mmu_tables_init
        nop
        call mmu_on
        nop
        /* pattern A into the buffer (write-through, no allocate), then a
         * load per line: the lines are in the D-cache */
        set DM_BASE, %l0
        set DM_BASE + DM_SIZE, %l1
        set DM_SEED_A, %l2
1:      xor %l0, %l2, %o0
        st %o0, [%l0]
        add %l0, 4, %l0
        cmp %l0, %l1
        blu 1b
        nop
        set DM_BASE, %l0
2:      ld [%l0], %g0
        add %l0, 32, %l0
        cmp %l0, %l1
        blu 2b
        nop
        /* the transfer: pattern B over the buffer, a line every two cycles
         * (an alternate-space access has no immediate: offsets in %o1) */
        set DM_BASE, %o0
        mov DMA_R_DST, %o1
        sta %o0, [%l3 + %o1] DMA_ASI
        set DM_LINES, %o0
        mov DMA_R_LINES, %o1
        sta %o0, [%l3 + %o1] DMA_ASI
        mov 2, %o0
        mov DMA_R_RATE, %o1
        sta %o0, [%l3 + %o1] DMA_ASI
        set DM_SEED_B, %o0
        mov DMA_R_SEED, %o1
        sta %o0, [%l3 + %o1] DMA_ASI
        /* meanwhile: an I-cache flash clear and 1024 stores to another page */
        sta %g0, [%g0] 0x36
        set DM_OTHER, %l4
        set 1024, %l5
3:      and %l5, 0x3fc, %o0
        st %l5, [%l4 + %o0]
        subcc %l5, 1, %l5
        bne 3b
        nop
        sta %g0, [%g0] 0x36
        mov DMA_R_BUSY, %o1
4:      lda [%l3 + %o1] DMA_ASI, %o0
        tst %o0
        bne 4b
        nop
        /* every word is B's: count the others, keep the first */
        set DM_BASE, %l0
        set DM_SEED_B, %l2
        clr %l3
        clr %l4
        clr %l5
5:      ld [%l0], %o0
        xor %l0, %l2, %o1
        cmp %o0, %o1
        be 6f
        nop
        add %l3, 1, %l3
        cmp %l4, 0
        bne 6f
        nop
        mov %l0, %l4
        mov %o0, %l5
6:      add %l0, 4, %l0
        cmp %l0, %l1
        blu 5b
        nop
        call mmu_off
        nop
        EXPECT(%l3, 0, 1)               /* words not the DMA's */
        EXPECT(%l4, 0, 2)               /* the first one's address */
        EXPECT(%l5, 0, 3)               /* and its value */
        END
8:      SKIP_TEST

/* The same transfer while the module keeps reloading the buffer's lines
 * (a driver polling a variable that shares a line with its DMA buffer):
 * each snoop drops a line, the next load refills it. In the hybrid the bus
 * accepts a DMA write (and snoops it) well before the memory has it, so a
 * refill can bring the old data back after the snoop; the shim snoops every
 * DMA line again later (snoop_queue RESNOOP). The harness models the lag
 * with +dmalag=N (sim/cpu/run.sh +dmalag=40: passes; with +noresnoop as
 * well: fails). Without the lag it passes either way. */
BEGIN(t_dma_poll, "dma: a transfer into lines the module keeps reloading meanwhile ends with memory's data in the cache")
        mov 0x300, %o0
        lda [%o0] 4, %g0
        mov -1, %o0
        st %o0, [%g7 + V_TRAP_SEEN]
        set TT_DACC_ERR, %o0
        st %o0, [%g7 + V_TRAP_EXPECT]
        set DMA_PA_LO, %l3
        lda [%l3] DMA_ASI, %l0
        ld [%g7 + V_TRAP_SEEN], %o1
        mov -1, %o0
        st %o0, [%g7 + V_TRAP_EXPECT]
        mov 0x300, %o0
        lda [%o0] 4, %g0
        cmp %o1, -1
        bne 8f
        set DMA_ID, %o0
        cmp %l0, %o0
        bne 8f
        nop
        call mmu_tables_init
        nop
        call mmu_on
        nop
        set DM_BASE, %l0
        set DM_BASE + DM_SIZE, %l1
        set DM_SEED_A, %l2
1:      xor %l0, %l2, %o0
        st %o0, [%l0]
        add %l0, 4, %l0
        cmp %l0, %l1
        blu 1b
        nop
        /* the transfer: pattern B, a line every eight cycles */
        set DM_BASE, %o0
        mov DMA_R_DST, %o1
        sta %o0, [%l3 + %o1] DMA_ASI
        set DM_LINES, %o0
        mov DMA_R_LINES, %o1
        sta %o0, [%l3 + %o1] DMA_ASI
        mov 8, %o0
        mov DMA_R_RATE, %o1
        sta %o0, [%l3 + %o1] DMA_ASI
        set 0xbbbb7777, %o0
        mov DMA_R_SEED, %o1
        sta %o0, [%l3 + %o1] DMA_ASI
        /* meanwhile: load word 0 of every line, over and over, until done */
        mov DMA_R_BUSY, %o1
2:      set DM_BASE, %l0
3:      ld [%l0], %g0
        add %l0, 32, %l0
        cmp %l0, %l1
        blu 3b
        nop
        lda [%l3 + %o1] DMA_ASI, %o0
        tst %o0
        bne 2b
        nop
        /* every word is the DMA's */
        set DM_BASE, %l0
        set 0xbbbb7777, %l2
        clr %l3
        clr %l4
        clr %l5
5:      ld [%l0], %o0
        xor %l0, %l2, %o1
        cmp %o0, %o1
        be 6f
        nop
        add %l3, 1, %l3
        cmp %l4, 0
        bne 6f
        nop
        mov %l0, %l4
        mov %o0, %l5
6:      add %l0, 4, %l0
        cmp %l0, %l1
        blu 5b
        nop
        call mmu_off
        nop
        EXPECT(%l3, 0, 1)
        EXPECT(%l4, 0, 2)
        EXPECT(%l5, 0, 3)
        END
8:      SKIP_TEST
