/* Decompiled from asm/overlay_01_021FAC44.s */
#include "global.h"

void ov01_021FAC44(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r0, #4
    // mov r1, #0x20
    // bl Heap_Alloc
    // add r5, r0, #0
    // mov r4, #0
    // mov r1, #0xf
    // lsl r1, r1, #0xc
    // add r2, r4, #0
    // mul r2, r1
    // ldr r1, _021FACB0 ; =ov01_02209B70
    // lsl r0, r4, #2
    // add r1, r1, r2
    // add r6, r5, r0
    // str r1, [r5, r0]
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _021FAC70
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r7, #0
    // beq _021FAC8E
    // mov r1, #9
    // mov r0, #4
    // lsl r1, r1, #0xc
    // bl Heap_Alloc
    // str r0, [r6, #0x10]
    // cmp r0, #0
    // bne _021FAC88
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #9
    // lsl r2, r2, #0xc
    // b _021FAC94
    // mov r0, #0
    // str r0, [r6, #0x10]
    // add r2, r0, #0
    // mov r1, #0xf
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // add r3, r5, #0
    // bl ov01_021FACF8
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _021FAC54
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FACB0: .word ov01_02209B70
    // TODO: decompile
}


void ov01_021FACB4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r4, #0
    // add r6, r0, #0
    // add r7, r4, #0
    // lsl r0, r4, #2
    // add r5, r6, r0
    // str r7, [r6, r0]
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // beq _021FACD0
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r5, #0x10]
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _021FACBC
    // add r0, r6, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FACE4(void) {
    /* lsl r0, r0, #2 */
    /* ldr r0, [r1, r0] */
    *(u32*)r2 = r0;
}


void ov01_021FACEC(void) {
    /* lsl r0, r0, #2 */
    /* add r0, r1, r0 */
    /* ldr r0, [r0, #0x10] */
    *(u32*)r2 = r0;
}


void ov01_021FACF8(void) {
    void *r3;
    void *r4;
    void *r5;
    void *r6;
    void *r7;
    r5 = r3 + 0;
    /* lsl r4, r0, #2 */
    r6 = r1 + 0;
    r7 = r2 + 0;
    /* ldr r0, [r5, r4] */
    r1 = 0;
    r2 = (r1 + 0) + 0;
    MI_CpuFill8();
    /* add r0, r5, r4 */
    /* ldr r0, [r0, #0x10] */
    r1 = 0;
    r2 = r7 + 0;
    MI_CpuFill8();
}

