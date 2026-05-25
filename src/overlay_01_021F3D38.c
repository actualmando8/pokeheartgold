/* Decompiled from asm/overlay_01_021F3D38.s */
#include "global.h"

void ov01_021F3D38(void) {
    Heap_Alloc(0, 0x14, 0x14);
}

void ov01_021F3D50(void) {
    /* Original at 0x021F3D50 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r1, [r4, #0x13]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    beq _021F3D60\n    bl RemoveWindow\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F3D68(void) {
    /* Original at 0x021F3D68 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "strb r1, [r0, #0x12]\n    strh r2, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov01_021F3D70(void) {
    /* Original at 0x021F3D70 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r3, [r0, #0x13]\n    mov r2, #0x7f\n    bic r3, r2\n    mov r2, #0x7f\n    and r1, r2\n    orr r1, r3\n    strb r1, [r0, #0x13]\n    bx lr"
    );
    #endif
}

void ov01_021F3D80(void) {
    /* Original at 0x021F3D80 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021F3D84(void) {
    /* Original at 0x021F3D84 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x12]\n    bx lr"
    );
    #endif
}

void ov01_021F3D88(void) {
    /* Original at 0x021F3D88 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x13]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x19\n    bne _021F3D94\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021F3D98(void) {
    /* Original at 0x021F3D98 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, [r0, #0x68]\n    ldrb r1, [r4, #0x13]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x19\n    cmp r1, #4\n    bhi _021F3DFA\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021F3DB2: ; jump table\n    bl ov01_021F3E10\n    ldrb r1, [r4, #0x13]\n    mov r0, #0x7f\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    pop {r4, pc}\n    bl ov01_021F3EE0\n    cmp r0, #1\n    bne _021F3DFA\n    ldrb r1, [r4, #0x13]\n    mov r0, #0x7f\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    pop {r4, pc}\n    bl ov01_021F3EA0\n    cmp r0, #1\n    bne _021F3DFA\n    ldrb r1, [r4, #0x13]\n    mov r0, #0x7f\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    pop {r4, pc}\n    bl ov01_021F3E4C\n    ldrb r1, [r4, #0x13]\n    mov r0, #0x7f\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F3DFC(void) {
    /* Original at 0x021F3DFC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x68]\n    bl ov01_021F3D70\n    add r0, r4, #0\n    bl ov01_021F3D98\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F3E10(void) {
    /* Original at 0x021F3E10 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #3\n    add r4, r0, #0\n    add r3, r1, #0\n    ldr r0, [r4, #8]\n    add r2, r1, #0\n    sub r3, #0x33\n    bl BgSetPosTextAndCommit\n    ldr r1, [r4, #0x68]\n    ldrb r0, [r1, #0x13]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _021F3E40\n    ldrb r2, [r1, #0x12]\n    ldr r0, [r4, #8]\n    mov r3, #3\n    bl sub_0205B63C\n    ldr r2, [r4, #0x68]\n    mov r0, #0x80\n    ldrb r1, [r2, #0x13]\n    orr r0, r1\n    strb r0, [r2, #0x13]\n    ldr r0, [r4, #0x68]\n    ldrb r1, [r0, #0x12]\n    ldrh r2, [r0, #0x10]\n    bl sub_0205B6A0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F3E4C(void) {
    /* Original at 0x021F3E4C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, [r4, #0x68]\n    ldrb r1, [r0, #0x13]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    beq _021F3E9A\n    bl RemoveWindow\n    mov r0, #0x12\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    mov r2, #0\n    ldr r0, [r4, #8]\n    mov r1, #3\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #8]\n    mov r1, #3\n    bl BgCommitTilemapBufferToVram\n    mov r1, #3\n    ldr r0, [r4, #8]\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    ldr r2, [r4, #0x68]\n    mov r0, #0x80\n    ldrb r1, [r2, #0x13]\n    bic r1, r0\n    strb r1, [r2, #0x13]\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F3EA0(void) {
    /* Original at 0x021F3EA0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    mov r1, #3\n    bl Bg_GetYpos\n    cmp r0, #0\n    bne _021F3EB4\n    mov r0, #1\n    pop {r4, pc}\n    mov r1, #0x2f\n    mvn r1, r1\n    cmp r0, r1\n    ble _021F3EC0\n    cmp r0, #0\n    blt _021F3ECE\n    mov r1, #3\n    add r3, r1, #0\n    ldr r0, [r4, #8]\n    add r2, r1, #0\n    sub r3, #0x33\n    bl BgSetPosTextAndCommit\n    ldr r0, [r4, #8]\n    mov r1, #3\n    mov r2, #4\n    mov r3, #0x10\n    bl BgSetPosTextAndCommit\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F3EE0(void) {
    /* Original at 0x021F3EE0 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    mov r1, #3\n    bl Bg_GetYpos\n    mov r1, #0x2f\n    mvn r1, r1\n    cmp r0, r1\n    bne _021F3F2C\n    mov r0, #0x12\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    mov r2, #0\n    ldr r0, [r4, #8]\n    mov r1, #3\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #8]\n    mov r1, #3\n    bl BgCommitTilemapBufferToVram\n    mov r1, #3\n    ldr r0, [r4, #8]\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add sp, #0x10\n    mov r0, #1\n    pop {r4, pc}\n    ble _021F3F32\n    cmp r0, #0\n    blt _021F3F3E\n    mov r1, #3\n    ldr r0, [r4, #8]\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r4, #8]\n    mov r1, #3\n    mov r2, #5\n    mov r3, #0x10\n    bl BgSetPosTextAndCommit\n    mov r0, #0\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}
