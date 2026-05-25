/* Decompiled from asm/overlay_01_021FAC44.s */
#include "global.h"

void ov01_021FAC44(void) {
    /* Original at 0x021FAC44 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #4\n    mov r1, #0x20\n    bl Heap_Alloc\n    add r5, r0, #0\n    mov r4, #0\n    mov r1, #0xf\n    lsl r1, r1, #0xc\n    add r2, r4, #0\n    mul r2, r1\n    ldr r1, _021FACB0 ; =ov01_02209B70\n    lsl r0, r4, #2\n    add r1, r1, r2\n    add r6, r5, r0\n    str r1, [r5, r0]\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _021FAC70\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r7, #0\n    beq _021FAC8E\n    mov r1, #9\n    mov r0, #4\n    lsl r1, r1, #0xc\n    bl Heap_Alloc\n    str r0, [r6, #0x10]\n    cmp r0, #0\n    bne _021FAC88\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #9\n    lsl r2, r2, #0xc\n    b _021FAC94\n    mov r0, #0\n    str r0, [r6, #0x10]\n    add r2, r0, #0\n    mov r1, #0xf\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    add r3, r5, #0\n    bl ov01_021FACF8\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _021FAC54\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FACB0: .word ov01_02209B70"
    );
    #endif
}

void ov01_021FACB4(void) {
    /* Original at 0x021FACB4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    add r6, r0, #0\n    add r7, r4, #0\n    lsl r0, r4, #2\n    add r5, r6, r0\n    str r7, [r6, r0]\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    beq _021FACD0\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r5, #0x10]\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _021FACBC\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
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
