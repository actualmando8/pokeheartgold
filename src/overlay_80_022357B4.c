/* Decompiled from asm/overlay_80_022357B4.s */
#include "global.h"

void ov80_022357B4(void) {
    /* Original at 0x022357B4 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    ldrb r2, [r4, #0xf]\n    cmp r2, #6\n    bhi _02235870\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _022357CC: ; jump table\n    ldrb r2, [r4, #0xc]\n    add r0, r1, #0\n    add r1, r4, #0\n    sub r2, r2, #1\n    lsl r2, r2, #0x18\n    add r1, #0x78\n    lsr r2, r2, #0x18\n    bl ov80_02236698\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    ldr r1, [r4, #4]\n    str r1, [sp, #0xc]\n    ldrb r2, [r4, #0xc]\n    add r1, r4, #0\n    ldrb r3, [r4, #0xe]\n    sub r2, r2, #1\n    lsl r2, r2, #2\n    add r2, r4, r2\n    ldrh r2, [r2, #0x3e]\n    add r1, #0x78\n    bl ov80_02236450\n    ldrb r3, [r4, #0xe]\n    mov r0, #0\n    cmp r3, #0\n    ble _02235842\n    add r1, r4, #0\n    add r1, #0xa8\n    add r2, sp, #0x14\n    add r5, r4, #0\n    add r6, sp, #0x10\n    ldrh r3, [r1]\n    add r0, r0, #1\n    add r1, #0x38\n    lsl r3, r3, #0x15\n    lsr r3, r3, #0x15\n    strh r3, [r2]\n    add r3, r5, #0\n    add r3, #0xaa\n    ldrh r3, [r3]\n    add r2, r2, #2\n    add r5, #0x38\n    strh r3, [r6]\n    ldrb r3, [r4, #0xe]\n    add r6, r6, #2\n    cmp r0, r3\n    blt _02235822\n    add r0, sp, #0x14\n    str r0, [sp]\n    add r0, sp, #0x10\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    mov r1, #0x62\n    str r0, [sp, #0xc]\n    ldrb r2, [r4, #0xc]\n    lsl r1, r1, #2\n    add r0, r4, #0\n    sub r2, r2, #1\n    lsl r2, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    add r2, r4, r2\n    ldrh r2, [r2, #0x3e]\n    add r1, r4, r1\n    bl ov80_02236450\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    add r1, r4, #0\n    str r0, [sp, #0xc]\n    ldrb r2, [r4, #0xc]\n    ldrb r3, [r4, #0xe]\n    add r0, r4, #0\n    sub r2, r2, #1\n    lsl r2, r2, #1\n    add r2, r4, r2\n    ldrh r2, [r2, #0x3e]\n    add r1, #0x78\n    bl ov80_02236450\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_02235898(void) {
    /* Original at 0x02235898 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "lsl r2, r1, #4\n    add r1, r1, r2\n    lsl r1, r1, #4\n    add r0, r0, r1\n    add r0, #0x7c\n    ldrh r0, [r0]\n    ldr r3, _022358AC ; =ov80_0222A30C\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx r3\n    _022358AC: .word ov80_0222A30C"
    );
    #endif
}

void ov80_022358B0(void) {
    /* lsl r1, r1, #0x18 */
    /* lsr r1, r1, #0x18 */
    /* lsl r1, r1, #0x1e */
    /* ldrb r3, [r0, #0x10] */
    r2 = 6;
    /* lsr r1, r1, #0x1d */
    /* bic r3, r2 */
    /* orr r1, r3 */
    ((u8*)r0)[0x10] = r1;
}

void ov80_022358C4(void) {
    /* Original at 0x022358C4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #0xd]\n    add r0, r0, #1\n    strb r0, [r4, #0xd]\n    ldrb r0, [r4, #0xf]\n    cmp r0, #6\n    beq _022358DC\n    ldr r0, [r4, #8]\n    bl sub_020674A4\n    str r0, [r4, #8]\n    ldrb r0, [r4, #0xc]\n    add r0, r0, #1\n    strb r0, [r4, #0xc]\n    ldrb r0, [r4, #0xc]\n    pop {r4, pc}"
    );
    #endif
}

void ov80_022358E8(void) {
    /* Original at 0x022358E8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #0xd]\n    ldrh r0, [r0, #0x1a]\n    add r1, r0, r1\n    ldr r0, _022358FC ; =0x0000FFFF\n    cmp r1, r0\n    bhi _022358F8\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    bx lr\n    nop\n    _022358FC: .word 0x0000FFFF"
    );
    #endif
}
