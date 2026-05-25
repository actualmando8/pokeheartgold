/* Decompiled from asm/overlay_01_021FAC44.s */
#include "global.h"

void ov01_021FAC44(void) {
    /* Original at 0x021FAC44 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r7, r0, #0
    mov r0, #4
    mov r1, #0x20
    bl Heap_Alloc
    add r5, r0, #0
    mov r4, #0
    mov r1, #0xf
    lsl r1, r1, #0xc
    add r2, r4, #0
    mul r2, r1
    ldr r1, _021FACB0 ; =ov01_02209B70
    lsl r0, r4, #2
    add r1, r1, r2
    add r6, r5, r0
    str r1, [r5, r0]
    ldr r0, [r5, r0]
    cmp r0, #0
    bne _021FAC70
    mov r0, #0
    pop {r3, r4, r5, r6, r7, pc}
    cmp r7, #0
    beq _021FAC8E
    mov r1, #9
    mov r0, #4
    lsl r1, r1, #0xc
    bl Heap_Alloc
    str r0, [r6, #0x10]
    cmp r0, #0
    bne _021FAC88
    mov r0, #0
    pop {r3, r4, r5, r6, r7, pc}
    mov r2, #9
    lsl r2, r2, #0xc
    b _021FAC94
    mov r0, #0
    str r0, [r6, #0x10]
    add r2, r0, #0
    mov r1, #0xf
    add r0, r4, #0
    lsl r1, r1, #0xc
    add r3, r5, #0
    bl ov01_021FACF8
    add r0, r4, #1
    lsl r0, r0, #0x18
    lsr r4, r0, #0x18
    cmp r4, #4
    blo _021FAC54
    add r0, r5, #0
    pop {r3, r4, r5, r6, r7, pc}
    nop
    _021FACB0: .word ov01_02209B70"
    );
    #endif
}

void ov01_021FACB4(void) {
    /* Original at 0x021FACB4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    mov r4, #0
    add r6, r0, #0
    add r7, r4, #0
    lsl r0, r4, #2
    add r5, r6, r0
    str r7, [r6, r0]
    ldr r0, [r5, #0x10]
    cmp r0, #0
    beq _021FACD0
    bl Heap_Free
    mov r0, #0
    str r0, [r5, #0x10]
    add r0, r4, #1
    lsl r0, r0, #0x18
    lsr r4, r0, #0x18
    cmp r4, #4
    blo _021FACBC
    add r0, r6, #0
    bl Heap_Free
    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FACE4(void) {
    /* Original at 0x021FACE4 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "lsl r0, r0, #2
    ldr r0, [r1, r0]
    str r0, [r2]
    bx lr"
    );
    #endif
}

void ov01_021FACEC(void) {
    /* Original at 0x021FACEC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r0, r0, #2
    add r0, r1, r0
    ldr r0, [r0, #0x10]
    str r0, [r2]
    bx lr"
    );
    #endif
}

void ov01_021FACF8(void) {
    /* Original at 0x021FACF8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r5, r3, #0
    lsl r4, r0, #2
    add r6, r1, #0
    add r7, r2, #0
    ldr r0, [r5, r4]
    mov r1, #0
    add r2, r6, #0
    bl MI_CpuFill8
    add r0, r5, r4
    ldr r0, [r0, #0x10]
    mov r1, #0
    add r2, r7, #0
    bl MI_CpuFill8
    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
