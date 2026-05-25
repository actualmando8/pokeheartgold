/* Decompiled from asm/overlay_42.s */
#include "global.h"

void ov42_02227060(void) {
    /* Original at 0x02227060 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r3, #0\n    add r4, r0, #0\n    ldr r1, _02227100 ; =0x0000230C\n    add r0, r6, #0\n    str r2, [sp]\n    bl Heap_Alloc\n    ldr r2, _02227100 ; =0x0000230C\n    add r7, r0, #0\n    mov r1, #0\n    bl memset\n    str r4, [r7]\n    mov r0, #0xb3\n    add r1, r6, #0\n    str r5, [r7, #4]\n    bl NARC_New\n    ldr r1, _02227104 ; =0x00002304\n    str r0, [r7, r1]\n    mov r0, #0xba\n    add r1, r6, #0\n    bl NARC_New\n    ldr r1, _02227108 ; =0x00002308\n    mov r4, #0\n    str r0, [r7, r1]\n    add r5, r7, #0\n    mov r0, #0x9a\n    add r1, r4, #0\n    add r2, r6, #0\n    bl Create2DGfxResObjMan\n    ldr r1, _0222710C ; =0x000022F0\n    add r4, r4, #1\n    str r0, [r5, r1]\n    add r5, r5, #4\n    cmp r4, #2\n    blt _0222709C\n    mov r5, #0\n    add r4, r7, #0\n    mov r0, #0x17\n    add r1, r5, #2\n    add r2, r6, #0\n    bl Create2DGfxResObjMan\n    ldr r1, _02227110 ; =0x000022F8\n    add r5, r5, #1\n    str r0, [r4, r1]\n    add r4, r4, #4\n    cmp r5, #2\n    blt _022270B6\n    mov r4, #0\n    add r0, r7, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov42_02227570\n    add r4, r4, #1\n    cmp r4, #3\n    blt _022270CE\n    ldr r0, [sp]\n    ldr r2, [sp]\n    mov r1, #0x18\n    str r0, [r7, #0xc]\n    add r0, r6, #0\n    mul r1, r2\n    bl Heap_Alloc\n    str r0, [r7, #8]\n    ldr r3, [r7, #0xc]\n    mov r2, #0x18\n    mov r1, #0\n    mul r2, r3\n    bl memset\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02227100: .word 0x0000230C\n    _02227104: .word 0x00002304\n    _02227108: .word 0x00002308\n    _0222710C: .word 0x000022F0\n    _02227110: .word 0x000022F8"
    );
    #endif
}

void ov42_02227114(void) {
    /* Original at 0x02227114 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    cmp r0, #0\n    bls _02227140\n    add r4, r6, #0\n    ldr r0, [r5, #8]\n    add r0, r0, r4\n    bl ov42_02227E68\n    cmp r0, #0\n    bne _02227136\n    ldr r0, [r5, #8]\n    add r0, r0, r4\n    bl ov42_0222740C\n    ldr r0, [r5, #0xc]\n    add r6, r6, #1\n    add r4, #0x18\n    cmp r6, r0\n    blo _02227122\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov42_02227604\n    add r4, r4, #1\n    cmp r4, #3\n    blt _02227142\n    add r0, r5, #0\n    bl ov42_022271F8\n    ldr r0, _02227188 ; =0x00002304\n    ldr r0, [r5, r0]\n    bl NARC_Delete\n    ldr r0, _0222718C ; =0x00002308\n    ldr r0, [r5, r0]\n    bl NARC_Delete\n    ldr r7, _02227190 ; =0x000022F0\n    mov r6, #0\n    add r4, r5, #0\n    ldr r0, [r4, r7]\n    bl Destroy2DGfxResObjMan\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #4\n    blt _0222716C\n    ldr r0, [r5, #8]\n    bl Heap_Free\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    _02227188: .word 0x00002304\n    _0222718C: .word 0x00002308\n    _02227190: .word 0x000022F0"
    );
    #endif
}

void ov42_02227194(void) {
    /* Original at 0x02227194 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r7, r3, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    add r6, r2, #0\n    bl ov42_02227680\n    cmp r0, #0\n    bne _022271B0\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl ov42_02227654\n    add r1, r0, #0\n    ldr r0, [sp, #0x20]\n    add r2, r6, #0\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r3, r7, #0\n    bl ov42_022276DC\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_022271D0(void) {
    /* Original at 0x022271D0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl ov42_02227654\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov42_02227948\n    pop {r4, pc}"
    );
    #endif
}

void ov42_022271E4(void) {
    /* Original at 0x022271E4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl ov42_02227654\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov42_022279E8\n    pop {r4, pc}"
    );
    #endif
}

void ov42_022271F8(void) {
    /* Original at 0x022271F8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x23\n    add r4, r0, #0\n    lsl r1, r1, #8\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    beq _0222720A\n    bl ov42_02227274\n    mov r5, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov42_022279E8\n    cmp r0, #1\n    bne _02227220\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov42_02227948\n    add r5, r5, #1\n    cmp r5, #0x99\n    blt _0222720C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02227228(void) {
    /* Original at 0x02227228 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r0, #0\n    add r6, r3, #0\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    add r0, r2, #0\n    bne _0222723C\n    bl GF_AssertFail\n    ldr r1, [sp, #8]\n    add r0, r7, #0\n    add r2, r6, #0\n    bl ov42_02227B6C\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov42_02227C18\n    ldr r5, _02227270 ; =ov42_02229B10\n    mov r4, #0\n    str r6, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldrb r1, [r5]\n    ldr r2, [sp, #8]\n    ldr r3, [sp, #0xc]\n    add r0, r7, #0\n    bl ov42_022276DC\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #0x10\n    blt _02227252\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02227270: .word ov42_02229B10"
    );
    #endif
}

void ov42_02227274(void) {
    /* Original at 0x02227274 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl ov42_02227BE0\n    add r0, r6, #0\n    bl ov42_02227CA8\n    ldr r5, _02227298 ; =ov42_02229B10\n    mov r4, #0\n    ldrb r1, [r5]\n    add r0, r6, #0\n    bl ov42_02227948\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #0x10\n    blt _02227286\n    pop {r4, r5, r6, pc}\n    _02227298: .word ov42_02229B10"
    );
    #endif
}

void ov42_0222729C(void) {
    ov42_022279FC();
}

void ov42_022272B4(void) {
    ov42_02227B04();
}

void ov42_022272BC(void) {
    /* Original at 0x022272BC */
    /* Requires manual decompilation - 155 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r7, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    str r3, [sp]\n    bl ov42_02227CF8\n    add r4, r0, #0\n    add r0, r7, #0\n    bl ov42_02227654\n    str r0, [sp, #4]\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    bl ov42_022279E8\n    cmp r0, #1\n    beq _022272E6\n    bl GF_AssertFail\n    mov r0, #0\n    add r2, sp, #0xc\n    add r1, r0, #0\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r1, [r5]\n    mov r2, #0x38\n    str r1, [sp, #0xc]\n    ldr r1, [sp, #4]\n    add r7, r1, #0\n    add r1, r5, #0\n    mul r7, r2\n    add r1, #0x24\n    add r1, r1, r7\n    str r1, [sp, #0x10]\n    ldrsh r0, [r6, r0]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x14]\n    mov r0, #2\n    ldrsh r1, [r6, r0]\n    lsl r1, r1, #0xc\n    str r1, [sp, #0x18]\n    lsl r1, r0, #0xb\n    str r1, [sp, #0x20]\n    str r1, [sp, #0x24]\n    str r1, [sp, #0x28]\n    mov r1, #4\n    ldrsh r1, [r6, r1]\n    str r1, [sp, #0x30]\n    ldr r1, [sp]\n    str r1, [sp, #0x38]\n    add r1, r5, #0\n    str r1, [sp, #8]\n    add r1, #0x1c\n    str r1, [sp, #8]\n    ldr r1, [r1, r7]\n    cmp r1, #3\n    beq _0222733E\n    cmp r1, #1\n    bne _02227344\n    mov r0, #1\n    str r0, [sp, #0x34]\n    b _02227346\n    str r0, [sp, #0x34]\n    add r0, sp, #0xc\n    bl Sprite_CreateAffine\n    str r0, [r4, #4]\n    mov r1, #6\n    ldrsh r1, [r6, r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl Sprite_SetPriority\n    add r0, r5, r7\n    ldr r0, [r0, #0x20]\n    cmp r0, #1\n    ldr r0, [r4, #4]\n    bne _0222736C\n    mov r1, #6\n    bl Sprite_SetAnimCtrlSeq\n    b _02227372\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #9\n    str r0, [r4, #0xc]\n    mov r0, #0\n    strh r0, [r4, #0x14]\n    mov r0, #1\n    str r0, [r4, #0x10]\n    add r0, r5, #0\n    add r0, #0x10\n    add r0, r0, r7\n    str r0, [r4]\n    ldr r0, _02227404 ; =0x000022B8\n    add r0, r5, r0\n    bl ov42_02227B5C\n    cmp r0, #0\n    beq _022273F8\n    mov r0, #0\n    add r2, sp, #0xc\n    add r1, r0, #0\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r1, [r5]\n    str r1, [sp, #0xc]\n    ldr r1, _02227408 ; =0x000022C8\n    add r2, r5, r1\n    str r2, [sp, #0x10]\n    ldrsh r0, [r6, r0]\n    add r1, #0x24\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x14]\n    mov r0, #2\n    ldrsh r2, [r6, r0]\n    lsl r2, r2, #0xc\n    str r2, [sp, #0x18]\n    lsl r2, r0, #0xb\n    str r2, [sp, #0x20]\n    str r2, [sp, #0x24]\n    str r2, [sp, #0x28]\n    ldr r1, [r5, r1]\n    str r1, [sp, #0x30]\n    ldr r1, [sp]\n    str r1, [sp, #0x38]\n    ldr r1, [sp, #8]\n    ldr r1, [r1, r7]\n    cmp r1, #3\n    beq _022273DA\n    cmp r1, #1\n    bne _022273E0\n    mov r0, #1\n    str r0, [sp, #0x34]\n    b _022273E2\n    str r0, [sp, #0x34]\n    add r0, sp, #0xc\n    bl Sprite_CreateAffine\n    str r0, [r4, #8]\n    mov r1, #6\n    ldrsh r1, [r6, r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl Sprite_SetPriority\n    b _022273FC\n    mov r0, #0\n    str r0, [r4, #8]\n    add r0, r4, #0\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02227404: .word 0x000022B8\n    _02227408: .word 0x000022C8"
    );
    #endif
}

void ov42_0222740C(void) {
    /* Original at 0x0222740C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _0222741A\n    bl Sprite_Delete\n    ldr r0, [r4, #4]\n    bl Sprite_Delete\n    mov r1, #0x18\n    mov r0, #0\n    strb r0, [r4]\n    add r4, r4, #1\n    sub r1, r1, #1\n    bne _02227424\n    pop {r4, pc}"
    );
    #endif
}

void ov42_02227430(void) {
    /* Original at 0x02227430 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov42_02227434(void) {
    /* Original at 0x02227434 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    lsl r0, r1, #0xc\n    str r0, [sp]\n    lsl r0, r2, #0xc\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _02227470\n    mov r0, #2\n    ldr r1, [sp]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp]\n    mov r0, #0xe\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #4]\n    ldr r0, [r4, #8]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov42_02227474(void) {
    Sprite_SetDrawPriority();
}

void ov42_02227480(void) {
    Sprite_GetDrawPriority();
}

void ov42_02227490(void) {
    /* Original at 0x02227490 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _022274A8\n    add r1, r4, #0\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_022274AC(void) {
    Sprite_GetDrawFlag();
}

void ov42_022274B8(void) {
    /* Original at 0x022274B8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov42_022274C0(void) {
    /* Original at 0x022274C0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov42_022274C4(void) {
    Sprite_SetAnimationFrame();
}

void ov42_022274D0(void) {
    Sprite_GetAnimationFrame();
}

void ov42_022274DC(void) {
    /* Original at 0x022274DC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    ldr r3, [r0, #8]\n    cmp r3, #0\n    beq _022274FE\n    add r1, #8\n    lsl r1, r1, #0xc\n    add r2, #0xe\n    str r1, [sp]\n    lsl r1, r2, #0xc\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r0, [r0, #8]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {pc}"
    );
    #endif
}

void ov42_02227504(void) {
    /* Original at 0x02227504 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0xa\n    blt _02227514\n    bl GF_AssertFail\n    cmp r6, #4\n    blt _0222751C\n    bl GF_AssertFail\n    str r4, [r5, #0xc]\n    mov r0, #0\n    strh r0, [r5, #0x14]\n    ldr r0, _02227534 ; =ov42_02229B20\n    lsl r1, r4, #2\n    ldr r2, [r0, r1]\n    cmp r2, #0\n    beq _02227532\n    add r0, r5, #0\n    add r1, r6, #0\n    blx r2\n    pop {r4, r5, r6, pc}\n    _02227534: .word ov42_02229B20"
    );
    #endif
}

void ov42_02227538(void) {
    /* Original at 0x02227538 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4, #0xc]\n    ldr r1, _0222756C ; =ov42_02229B04\n    mov r0, #0\n    ldrb r2, [r1, r2]\n    cmp r2, #0xff\n    bne _0222754C\n    mov r0, #1\n    b _02227558\n    mov r1, #0x14\n    ldrsh r1, [r4, r1]\n    add r1, r1, #1\n    cmp r2, r1\n    blt _02227558\n    mov r0, #1\n    cmp r0, #1\n    bne _0222756A\n    add r0, r4, #0\n    bl ov42_02227D30\n    mov r0, #0x14\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #0x14]\n    pop {r4, pc}\n    _0222756C: .word ov42_02229B04"
    );
    #endif
}

void ov42_02227570(void) {
    /* Original at 0x02227570 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r0, [sp, #0xc]\n    add r0, r1, #0\n    lsl r5, r0, #4\n    ldr r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    add r1, r0, r5\n    ldr r0, _022275F0 ; =0x00002188\n    str r2, [sp, #0x14]\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0222758E\n    bl GF_AssertFail\n    ldr r0, _022275F4 ; =ov42_02229B70\n    ldr r6, _022275F8 ; =_02229AF8\n    add r4, r0, r5\n    ldr r0, [sp, #0xc]\n    mov r7, #0\n    add r5, r0, r5\n    ldr r0, [sp, #0x10]\n    lsl r1, r0, #1\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r1, r0\n    str r0, [sp, #0x18]\n    lsr r2, r7, #0x1f\n    lsl r1, r7, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    ldrb r2, [r6]\n    ldr r1, [sp, #0x18]\n    add r0, r0, #2\n    add r1, r2, r1\n    str r1, [sp]\n    ldr r1, [sp, #0x14]\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    lsl r1, r0, #2\n    ldr r0, [sp, #0xc]\n    ldr r2, [sp, #0xc]\n    add r1, r0, r1\n    ldr r0, _022275FC ; =0x000022F0\n    mov r3, #0\n    ldr r0, [r1, r0]\n    ldr r1, _02227600 ; =0x00002304\n    ldr r1, [r2, r1]\n    ldr r2, [r4]\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _022275F0 ; =0x00002188\n    add r7, r7, #1\n    str r0, [r5, r1]\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r7, #4\n    blt _022275A6\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022275F0: .word 0x00002188\n    _022275F4: .word ov42_02229B70\n    _022275F8: .word _02229AF8\n    _022275FC: .word 0x000022F0\n    _02227600: .word 0x00002304"
    );
    #endif
}

void ov42_02227604(void) {
    /* Original at 0x02227604 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    lsl r5, r1, #4\n    ldr r0, _0222764C ; =0x00002188\n    add r1, r6, r5\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _02227618\n    bl GF_AssertFail\n    mov r4, #0\n    add r5, r6, r5\n    add r7, r4, #0\n    lsr r2, r4, #0x1f\n    lsl r1, r4, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    add r0, r0, #2\n    lsl r0, r0, #2\n    add r1, r6, r0\n    ldr r0, _02227650 ; =0x000022F0\n    ldr r0, [r1, r0]\n    ldr r1, _0222764C ; =0x00002188\n    ldr r1, [r5, r1]\n    bl DestroySingle2DGfxResObj\n    ldr r0, _0222764C ; =0x00002188\n    add r4, r4, #1\n    str r7, [r5, r0]\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0222761E\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222764C: .word 0x00002188\n    _02227650: .word 0x000022F0"
    );
    #endif
}

void ov42_02227654(void) {
    /* Original at 0x02227654 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _02227678 ; =ov42_02229BA0\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    bne _02227668\n    ldr r0, _0222767C ; =ov42_02229BA2\n    lsl r1, r2, #2\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, #0x99\n    blt _0222765A\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    _02227678: .word ov42_02229BA0\n    _0222767C: .word ov42_02229BA2"
    );
    #endif
}

void ov42_02227680(void) {
    /* Original at 0x02227680 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    bne _022276A4\n    cmp r0, #0\n    beq _0222769C\n    cmp r0, #0x61\n    beq _0222769C\n    cmp r0, #0xee\n    beq _0222769C\n    cmp r0, #0xef\n    beq _0222769C\n    ldr r1, _022276A8 ; =0x00000127\n    sub r0, r0, r1\n    cmp r0, #1\n    bhi _022276A0\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    mov r0, #1\n    bx lr\n    _022276A8: .word 0x00000127"
    );
    #endif
}

void ov42_022276AC(void) {
    /* Original at 0x022276AC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #2\n    beq _022276C0\n    cmp r4, #3\n    beq _022276C0\n    bl GF_AssertFail\n    sub r1, r4, #2\n    cmp r6, #0\n    bne _022276C8\n    add r1, r1, #2\n    ldr r0, _022276D8 ; =_02229AF8\n    ldrb r2, [r0, r1]\n    mov r0, #1\n    lsl r1, r5, #1\n    lsl r0, r0, #8\n    add r0, r1, r0\n    add r0, r2, r0\n    pop {r4, r5, r6, pc}\n    _022276D8: .word _02229AF8"
    );
    #endif
}

void ov42_022276DC(void) {
    /* Original at 0x022276DC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x38\n    mul r0, r4\n    add r0, r5, r0\n    ldr r0, [r0, #0x14]\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r0, #0\n    beq _022276F6\n    bl GF_AssertFail\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    bne _0222770E\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov42_02227720\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov42_02227874\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_02227720(void) {
    /* Original at 0x02227720 */
    /* Requires manual decompilation - 155 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    add r5, r0, #0\n    ldr r0, [sp, #0x58]\n    add r6, r5, #0\n    str r0, [sp, #0x40]\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    lsl r0, r1, #1\n    str r0, [sp, #0x3c]\n    add r4, r1, #0\n    mov r0, #0x38\n    mul r4, r0\n    ldr r0, [sp, #0x38]\n    str r3, [sp, #0x30]\n    str r0, [sp]\n    add r0, r2, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x40]\n    str r2, [sp, #0x2c]\n    ldr r2, [sp, #0x3c]\n    ldr r1, _0222786C ; =0x000022F0\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, #0x14\n    ldr r1, [r5, r1]\n    add r6, #0x14\n    add r2, #0xe\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    str r0, [r6, r4]\n    ldr r0, [sp, #0x38]\n    ldr r2, [sp, #0x3c]\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r7, r5, #0\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x40]\n    add r2, #0xd\n    ldr r1, _02227870 ; =0x000022F4\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, #0x10\n    ldr r1, [r5, r1]\n    add r7, #0x18\n    mov r3, #0\n    str r2, [sp, #0x3c]\n    bl AddPlttResObjFromOpenNarc\n    str r0, [r7, r4]\n    ldr r0, [r6, r4]\n    bl GF2DGfxResObj_GetCharDataPtr\n    mov r1, #6\n    ldr r2, [r0, #0x10]\n    lsl r1, r1, #0xa\n    cmp r2, r1\n    beq _022277A4\n    mov r1, #1\n    str r1, [sp, #0x34]\n    b _022277A8\n    mov r1, #0\n    str r1, [sp, #0x34]\n    ldr r1, [sp, #0x30]\n    cmp r1, #2\n    bne _022277B6\n    mov r1, #2\n    lsl r1, r1, #0xa\n    str r1, [r0, #0x10]\n    b _022277CE\n    cmp r1, #1\n    bne _022277CE\n    ldr r1, [sp, #0x34]\n    cmp r1, #0\n    beq _022277C8\n    mov r1, #5\n    lsl r1, r1, #0xa\n    str r1, [r0, #0x10]\n    b _022277CE\n    mov r1, #6\n    lsl r1, r1, #0xa\n    str r1, [r0, #0x10]\n    ldr r0, [r6, r4]\n    bl sub_0200AE18\n    cmp r0, #0\n    bne _022277DC\n    bl GF_AssertFail\n    ldr r0, [r7, r4]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _022277EA\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _022277FA\n    ldr r1, [r7, r4]\n    add r0, r5, #0\n    mov r2, #1\n    bl ov42_02227E78\n    ldr r0, [r6, r4]\n    bl sub_0200A740\n    ldr r0, [r7, r4]\n    bl sub_0200A740\n    ldr r0, [sp, #0x2c]\n    add r1, r5, r4\n    str r0, [r1, #0x1c]\n    ldr r0, [sp, #0x30]\n    ldr r2, [sp, #0x34]\n    str r0, [r1, #0x20]\n    mov r0, #0\n    str r0, [r1, #0x10]\n    ldr r0, [sp, #0x30]\n    mov r1, #2\n    bl ov42_022276AC\n    add r6, r0, #0\n    ldr r0, [sp, #0x30]\n    ldr r2, [sp, #0x34]\n    mov r1, #3\n    bl ov42_022276AC\n    str r0, [sp]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r2, _0222786C ; =0x000022F0\n    str r0, [sp, #0x10]\n    ldr r1, [r5, r2]\n    add r3, r6, #0\n    str r1, [sp, #0x14]\n    add r1, r2, #4\n    ldr r1, [r5, r1]\n    str r1, [sp, #0x18]\n    add r1, r2, #0\n    add r1, #8\n    ldr r1, [r5, r1]\n    add r2, #0xc\n    str r1, [sp, #0x1c]\n    ldr r1, [r5, r2]\n    add r5, #0x24\n    str r1, [sp, #0x20]\n    ldr r1, [sp, #0x38]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r5, r4\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222786C: .word 0x000022F0\n    _02227870: .word 0x000022F4"
    );
    #endif
}

void ov42_02227874(void) {
    /* Original at 0x02227874 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r7, r1, #0\n    add r5, r0, #0\n    sub r0, r7, #2\n    str r0, [sp, #0x38]\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r7, r0\n    str r0, [sp, #0x34]\n    mov r0, #0x38\n    add r4, r7, #0\n    mul r4, r0\n    ldr r0, [sp, #0x34]\n    add r6, r5, #0\n    str r0, [sp]\n    add r0, r2, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x50]\n    str r2, [sp, #0x2c]\n    str r3, [sp, #0x30]\n    ldr r1, _02227940 ; =0x000022F0\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, #0x18\n    ldr r1, [r5, r1]\n    add r6, #0x14\n    sub r2, r7, #1\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    str r0, [r6, r4]\n    ldr r0, [sp, #0x30]\n    cmp r0, #2\n    bne _022278C8\n    ldr r0, [r6, r4]\n    bl GF2DGfxResObj_GetCharDataPtr\n    mov r1, #2\n    lsl r1, r1, #0xa\n    str r1, [r0, #0x10]\n    b _022278D8\n    cmp r0, #1\n    bne _022278D8\n    ldr r0, [r6, r4]\n    bl GF2DGfxResObj_GetCharDataPtr\n    mov r1, #5\n    lsl r1, r1, #0xa\n    str r1, [r0, #0x10]\n    ldr r0, [r6, r4]\n    bl sub_0200AE18\n    cmp r0, #0\n    bne _022278E6\n    bl GF_AssertFail\n    ldr r0, [r6, r4]\n    bl sub_0200A740\n    mov r0, #0\n    add r2, r5, r4\n    ldr r1, [sp, #0x2c]\n    str r0, [r2, #0x18]\n    str r1, [r2, #0x1c]\n    ldr r1, [sp, #0x30]\n    mov r6, #1\n    str r1, [r2, #0x20]\n    str r6, [r2, #0x10]\n    mov r2, #6\n    ldr r1, [sp, #0x38]\n    lsl r2, r2, #6\n    add r3, r1, r2\n    str r3, [sp]\n    sub r1, r6, #2\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r2, _02227940 ; =0x000022F0\n    str r0, [sp, #0x10]\n    ldr r1, [r5, r2]\n    str r1, [sp, #0x14]\n    add r1, r2, #4\n    ldr r1, [r5, r1]\n    str r1, [sp, #0x18]\n    add r1, r2, #0\n    add r1, #8\n    ldr r1, [r5, r1]\n    add r2, #0xc\n    str r1, [sp, #0x1c]\n    ldr r1, [r5, r2]\n    add r5, #0x24\n    str r1, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    ldr r1, [sp, #0x34]\n    ldr r2, _02227944 ; =0x00000402\n    add r0, r5, r4\n    bl CreateSpriteResourcesHeader\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _02227940: .word 0x000022F0\n    _02227944: .word 0x00000402"
    );
    #endif
}

void ov42_02227948(void) {
    /* Original at 0x02227948 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    mov r0, #0x38\n    add r4, r6, #0\n    mul r4, r0\n    add r0, r5, r4\n    ldr r0, [r0, #0x14]\n    cmp r0, #0\n    bne _02227960\n    bl GF_AssertFail\n    add r0, r5, r4\n    ldr r0, [r0, #0x10]\n    cmp r0, #0\n    bne _02227972\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov42_0222797C\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov42_022279C0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_0222797C(void) {
    /* Original at 0x0222797C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r5, #0\n    mov r0, #0x38\n    add r4, r1, #0\n    mul r4, r0\n    add r6, #0x14\n    ldr r0, [r6, r4]\n    bl sub_0200AEB0\n    add r7, r5, #0\n    add r7, #0x18\n    ldr r0, [r7, r4]\n    bl sub_0200B0A8\n    ldr r0, _022279B8 ; =0x000022F0\n    ldr r1, [r6, r4]\n    ldr r0, [r5, r0]\n    bl DestroySingle2DGfxResObj\n    ldr r0, _022279BC ; =0x000022F4\n    ldr r1, [r7, r4]\n    ldr r0, [r5, r0]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0\n    str r0, [r6, r4]\n    str r0, [r7, r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022279B8: .word 0x000022F0\n    _022279BC: .word 0x000022F4"
    );
    #endif
}

void ov42_022279C0(void) {
    /* Original at 0x022279C0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r6, #0\n    mov r0, #0x38\n    add r4, r1, #0\n    add r5, #0x14\n    mul r4, r0\n    ldr r0, [r5, r4]\n    bl sub_0200AEB0\n    ldr r0, _022279E4 ; =0x000022F0\n    ldr r1, [r5, r4]\n    ldr r0, [r6, r0]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0\n    str r0, [r5, r4]\n    pop {r4, r5, r6, pc}\n    _022279E4: .word 0x000022F0"
    );
    #endif
}

void ov42_022279E8(void) {
    /* Original at 0x022279E8 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x38\n    mul r2, r1\n    add r0, r0, r2\n    ldr r0, [r0, #0x14]\n    cmp r0, #0\n    beq _022279F8\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov42_022279FC(void) {
    /* Original at 0x022279FC */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r6, r0, #0\n    ldr r0, _02227AF0 ; =0x000022B8\n    str r1, [sp, #0x2c]\n    ldr r0, [r6, r0]\n    add r7, r2, #0\n    cmp r0, #0\n    beq _02227A12\n    bl GF_AssertFail\n    mov r4, #0\n    ldr r5, _02227AF4 ; =ov42_02229AFC\n    str r4, [sp, #0x34]\n    ldrb r1, [r5]\n    add r0, r6, #0\n    bl ov42_022279E8\n    cmp r0, #1\n    bne _02227A30\n    ldr r0, _02227AF4 ; =ov42_02229AFC\n    ldrb r0, [r0, r4]\n    str r0, [sp, #0x30]\n    mov r0, #1\n    str r0, [sp, #0x34]\n    b _02227A38\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #6\n    blt _02227A18\n    ldr r0, [sp, #0x34]\n    cmp r0, #1\n    beq _02227A42\n    bl GF_AssertFail\n    mov r5, #0\n    add r4, r6, #0\n    mov r0, #0x12\n    lsl r0, r0, #4\n    str r0, [sp]\n    add r0, r5, #2\n    str r0, [sp, #4]\n    ldr r0, _02227AF8 ; =0x000022F8\n    str r7, [sp, #8]\n    ldr r1, _02227AFC ; =0x00002304\n    ldr r0, [r4, r0]\n    ldr r1, [r6, r1]\n    add r2, r5, #0\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x8b\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #2\n    blt _02227A46\n    mov r0, #0x12\n    lsl r0, r0, #4\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r1, #0x30\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    ldr r0, [r6, r1]\n    add r1, #0x14\n    ldr r1, [r6, r1]\n    mov r2, #2\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    ldr r1, _02227AF0 ; =0x000022B8\n    str r0, [r6, r1]\n    ldr r0, [r6, r1]\n    bl sub_0200AE18\n    cmp r0, #0\n    bne _02227A9E\n    bl GF_AssertFail\n    ldr r0, _02227AF0 ; =0x000022B8\n    ldr r0, [r6, r0]\n    bl sub_0200A740\n    mov r1, #0x12\n    lsl r1, r1, #4\n    mov r0, #0\n    str r1, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r3, _02227B00 ; =0x000022F0\n    str r0, [sp, #0x10]\n    ldr r2, [r6, r3]\n    str r2, [sp, #0x14]\n    add r2, r3, #4\n    ldr r2, [r6, r2]\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    add r2, #8\n    ldr r2, [r6, r2]\n    str r2, [sp, #0x1c]\n    add r2, r3, #0\n    add r2, #0xc\n    ldr r2, [r6, r2]\n    sub r3, #0x28\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r6, r3\n    add r3, r1, #0\n    ldr r2, [sp, #0x30]\n    add r3, #0xe0\n    add r2, r2, r3\n    add r3, r1, #0\n    bl CreateSpriteResourcesHeader\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    _02227AF0: .word 0x000022B8\n    _02227AF4: .word ov42_02229AFC\n    _02227AF8: .word 0x000022F8\n    _02227AFC: .word 0x00002304\n    _02227B00: .word 0x000022F0"
    );
    #endif
}

void ov42_02227B04(void) {
    /* Original at 0x02227B04 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _02227B50 ; =0x000022B8\n    add r0, r5, r0\n    bl ov42_02227B5C\n    cmp r0, #1\n    bne _02227B4C\n    ldr r0, _02227B50 ; =0x000022B8\n    ldr r0, [r5, r0]\n    bl sub_0200AEB0\n    ldr r1, _02227B54 ; =0x000022F0\n    ldr r0, [r5, r1]\n    sub r1, #0x38\n    ldr r1, [r5, r1]\n    bl DestroySingle2DGfxResObj\n    ldr r0, _02227B50 ; =0x000022B8\n    mov r4, #0\n    add r7, r0, #0\n    str r4, [r5, r0]\n    add r6, r4, #0\n    add r7, #8\n    ldr r0, _02227B58 ; =0x000022F8\n    mov r1, #0x8b\n    lsl r1, r1, #6\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    bl DestroySingle2DGfxResObj\n    str r6, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _02227B34\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02227B50: .word 0x000022B8\n    _02227B54: .word 0x000022F0\n    _02227B58: .word 0x000022F8"
    );
    #endif
}

void ov42_02227B5C(void) {
    /* Original at 0x02227B5C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    cmp r0, #0\n    beq _02227B66\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov42_02227B6C(void) {
    /* Original at 0x02227B6C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x23\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r0, #0\n    beq _02227B84\n    bl GF_AssertFail\n    ldr r0, _02227BD8 ; =0x00000402\n    mov r2, #0\n    str r0, [sp]\n    str r4, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    ldr r1, _02227BDC ; =0x000022F4\n    str r6, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, #0x14\n    ldr r1, [r5, r1]\n    add r3, r2, #0\n    bl AddPlttResObjFromOpenNarc\n    mov r1, #0x23\n    lsl r1, r1, #8\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _02227BB4\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _02227BC8\n    mov r1, #0x23\n    lsl r1, r1, #8\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #8\n    bl ov42_02227E78\n    mov r0, #0x23\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    bl sub_0200A740\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _02227BD8: .word 0x00000402\n    _02227BDC: .word 0x000022F4"
    );
    #endif
}

void ov42_02227BE0(void) {
    /* Original at 0x02227BE0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x23\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02227BF2\n    bl GF_AssertFail\n    mov r0, #0x23\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    bl sub_0200B0A8\n    ldr r1, _02227C14 ; =0x000022F4\n    ldr r0, [r4, r1]\n    add r1, #0xc\n    ldr r1, [r4, r1]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x23\n    mov r1, #0\n    lsl r0, r0, #8\n    str r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _02227C14: .word 0x000022F4"
    );
    #endif
}

void ov42_02227C18(void) {
    /* Original at 0x02227C18 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, _02227C94 ; =0x000021B8\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _02227C2C\n    bl GF_AssertFail\n    mov r0, #0x11\n    mov r4, #0\n    str r0, [sp, #0x10]\n    add r6, r5, #0\n    mov r7, #0x12\n    mov r0, #6\n    lsl r0, r0, #6\n    add r0, r4, r0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    ldr r1, _02227C98 ; =0x00002308\n    str r0, [sp, #8]\n    ldr r0, _02227C9C ; =0x000022F8\n    ldr r1, [r5, r1]\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x10]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _02227C94 ; =0x000021B8\n    add r2, r7, #0\n    str r0, [r6, r1]\n    mov r0, #6\n    lsl r0, r0, #6\n    add r0, r4, r0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    ldr r1, _02227C98 ; =0x00002308\n    str r0, [sp, #8]\n    ldr r0, _02227CA0 ; =0x000022FC\n    ldr r1, [r5, r1]\n    ldr r0, [r5, r0]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _02227CA4 ; =0x000021BC\n    add r4, r4, #1\n    str r0, [r6, r1]\n    ldr r0, [sp, #0x10]\n    add r6, #0x10\n    add r0, r0, #2\n    add r7, r7, #2\n    str r0, [sp, #0x10]\n    cmp r4, #0x10\n    blt _02227C36\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02227C94: .word 0x000021B8\n    _02227C98: .word 0x00002308\n    _02227C9C: .word 0x000022F8\n    _02227CA0: .word 0x000022FC\n    _02227CA4: .word 0x000021BC"
    );
    #endif
}

void ov42_02227CA8(void) {
    /* Original at 0x02227CA8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _02227CE8 ; =0x000021B8\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _02227CB8\n    bl GF_AssertFail\n    mov r6, #0\n    add r4, r5, #0\n    add r7, r6, #0\n    ldr r0, _02227CEC ; =0x000022F8\n    ldr r1, _02227CE8 ; =0x000021B8\n    ldr r0, [r5, r0]\n    ldr r1, [r4, r1]\n    bl DestroySingle2DGfxResObj\n    ldr r0, _02227CF0 ; =0x000022FC\n    ldr r1, _02227CF4 ; =0x000021BC\n    ldr r0, [r5, r0]\n    ldr r1, [r4, r1]\n    bl DestroySingle2DGfxResObj\n    ldr r0, _02227CE8 ; =0x000021B8\n    add r6, r6, #1\n    str r7, [r4, r0]\n    add r0, r0, #4\n    str r7, [r4, r0]\n    add r4, #0x10\n    cmp r6, #0x10\n    blt _02227CBE\n    pop {r3, r4, r5, r6, r7, pc}\n    _02227CE8: .word 0x000021B8\n    _02227CEC: .word 0x000022F8\n    _02227CF0: .word 0x000022FC\n    _02227CF4: .word 0x000021BC"
    );
    #endif
}

void ov42_02227CF8(void) {
    /* Original at 0x02227CF8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    cmp r0, #0\n    bls _02227D26\n    add r4, r6, #0\n    ldr r0, [r5, #8]\n    add r0, r0, r4\n    bl ov42_02227E68\n    cmp r0, #1\n    bne _02227D1C\n    mov r0, #0x18\n    ldr r1, [r5, #8]\n    mul r0, r6\n    add r0, r1, r0\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5, #0xc]\n    add r6, r6, #1\n    add r4, #0x18\n    cmp r6, r0\n    blo _02227D06\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02227D30(void) {
    /* Original at 0x02227D30 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0, #0xc]\n    lsl r2, r1, #2\n    ldr r1, _02227D44 ; =ov42_02229B48\n    ldr r1, [r1, r2]\n    cmp r1, #0\n    beq _02227D40\n    blx r1\n    pop {r3, pc}\n    nop\n    _02227D44: .word ov42_02229B48"
    );
    #endif
}

void ov42_02227D48(void) {
    Sprite_TryChangeAnimSeq();
}

void ov42_02227D54(void) {
    /* Original at 0x02227D54 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227D60 ; =Sprite_TryChangeAnimSeq\n    str r1, [r0, #0x10]\n    ldr r0, [r0, #4]\n    mov r1, #4\n    bx r3\n    nop\n    _02227D60: .word Sprite_TryChangeAnimSeq"
    );
    #endif
}

void ov42_02227D64(void) {
    /* Original at 0x02227D64 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227D70 ; =Sprite_TryChangeAnimSeq\n    str r1, [r0, #0x10]\n    ldr r0, [r0, #4]\n    add r1, r1, #5\n    bx r3\n    nop\n    _02227D70: .word Sprite_TryChangeAnimSeq"
    );
    #endif
}

void ov42_02227D74(void) {
    Sprite_TryChangeAnimSeq();
}

void ov42_02227D88(void) {
    /* Original at 0x02227D88 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227D94 ; =Sprite_TryChangeAnimSeq\n    str r1, [r0, #0x10]\n    ldr r0, [r0, #4]\n    add r1, #9\n    bx r3\n    nop\n    _02227D94: .word Sprite_TryChangeAnimSeq"
    );
    #endif
}

void ov42_02227D98(void) {
    /* Original at 0x02227D98 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227DA4 ; =Sprite_TryChangeAnimSeq\n    str r1, [r0, #0x10]\n    ldr r0, [r0, #4]\n    add r1, r1, #5\n    bx r3\n    nop\n    _02227DA4: .word Sprite_TryChangeAnimSeq"
    );
    #endif
}

void ov42_02227DA8(void) {
    /* Original at 0x02227DA8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227DB4 ; =Sprite_TryChangeAnimSeq\n    str r1, [r0, #0x10]\n    ldr r0, [r0, #4]\n    add r1, r1, #5\n    bx r3\n    nop\n    _02227DB4: .word Sprite_TryChangeAnimSeq"
    );
    #endif
}

void ov42_02227DB8(void) {
    /* Original at 0x02227DB8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227DC4 ; =Sprite_TryChangeAnimSeq\n    str r1, [r0, #0x10]\n    ldr r0, [r0, #4]\n    add r1, r1, #5\n    bx r3\n    nop\n    _02227DC4: .word Sprite_TryChangeAnimSeq"
    );
    #endif
}

void ov42_02227DC8(void) {
    /* Original at 0x02227DC8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227DD4 ; =Sprite_TryChangeAnimSeq\n    str r1, [r0, #0x10]\n    ldr r0, [r0, #4]\n    add r1, r1, #5\n    bx r3\n    nop\n    _02227DD4: .word Sprite_TryChangeAnimSeq"
    );
    #endif
}

void ov42_02227DD8(void) {
    /* Original at 0x02227DD8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227DE4 ; =Sprite_UpdateAnim\n    mov r1, #2\n    ldr r0, [r0, #4]\n    lsl r1, r1, #0xc\n    bx r3\n    nop\n    _02227DE4: .word Sprite_UpdateAnim"
    );
    #endif
}

void ov42_02227DE8(void) {
    /* Original at 0x02227DE8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227DF4 ; =Sprite_UpdateAnim\n    mov r1, #2\n    ldr r0, [r0, #4]\n    lsl r1, r1, #0xc\n    bx r3\n    nop\n    _02227DF4: .word Sprite_UpdateAnim"
    );
    #endif
}

void ov42_02227DF8(void) {
    /* Original at 0x02227DF8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r1, r0, #0\n    mov r0, #0x14\n    ldrsh r0, [r1, r0]\n    cmp r0, #0\n    ldr r0, [r1, #4]\n    bne _02227E0E\n    mov r1, #1\n    bl Sprite_SetAnimationFrame\n    pop {r3, pc}\n    ldr r1, [r1, #0x10]\n    add r1, r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, pc}"
    );
    #endif
}

void ov42_02227E18(void) {
    /* Original at 0x02227E18 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227E24 ; =Sprite_UpdateAnim\n    mov r1, #2\n    ldr r0, [r0, #4]\n    lsl r1, r1, #0xc\n    bx r3\n    nop\n    _02227E24: .word Sprite_UpdateAnim"
    );
    #endif
}

void ov42_02227E28(void) {
    /* Original at 0x02227E28 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227E34 ; =Sprite_UpdateAnim\n    mov r1, #1\n    ldr r0, [r0, #4]\n    lsl r1, r1, #0xc\n    bx r3\n    nop\n    _02227E34: .word Sprite_UpdateAnim"
    );
    #endif
}

void ov42_02227E38(void) {
    /* Original at 0x02227E38 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227E44 ; =Sprite_UpdateAnim\n    mov r1, #1\n    ldr r0, [r0, #4]\n    lsl r1, r1, #0xc\n    bx r3\n    nop\n    _02227E44: .word Sprite_UpdateAnim"
    );
    #endif
}

void ov42_02227E48(void) {
    /* Original at 0x02227E48 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227E54 ; =Sprite_UpdateAnim\n    mov r1, #2\n    ldr r0, [r0, #4]\n    lsl r1, r1, #0xe\n    bx r3\n    nop\n    _02227E54: .word Sprite_UpdateAnim"
    );
    #endif
}

void ov42_02227E58(void) {
    /* Original at 0x02227E58 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02227E64 ; =Sprite_UpdateAnim\n    mov r1, #6\n    ldr r0, [r0, #4]\n    lsl r1, r1, #0xc\n    bx r3\n    nop\n    _02227E64: .word Sprite_UpdateAnim"
    );
    #endif
}

void ov42_02227E68(void) {
    /* Original at 0x02227E68 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    cmp r0, #0\n    bne _02227E72\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov42_02227E78(void) {
    /* Original at 0x02227E78 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    add r4, r2, #0\n    bl GF2DGfxResObj_GetPlttDataPtr\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #1\n    bl SpriteTransfer_GetPlttOffset\n    add r7, r0, #0\n    add r0, r6, #0\n    mov r1, #2\n    bl SpriteTransfer_GetPlttOffset\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r7, r0\n    beq _02227EBC\n    lsl r0, r4, #0x15\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    lsl r3, r7, #0x14\n    ldr r0, [r5, #4]\n    ldr r1, [r1, #0xc]\n    mov r2, #2\n    lsr r3, r3, #0x10\n    bl PaletteData_LoadPalette\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _02227EDA\n    lsl r0, r4, #0x15\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    lsl r3, r6, #0x14\n    ldr r0, [r5, #4]\n    ldr r1, [r1, #0xc]\n    mov r2, #3\n    lsr r3, r3, #0x10\n    bl PaletteData_LoadPalette\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_02227EE0(void) {
    /* Original at 0x02227EE0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, r7, #0\n    mov r1, #8\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02227EF8\n    bl GF_AssertFail\n    strh r5, [r4]\n    strh r6, [r4, #2]\n    ldrh r2, [r4]\n    ldrh r1, [r4, #2]\n    add r0, r7, #0\n    mul r1, r2\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    str r0, [r4, #4]\n    cmp r0, #0\n    bne _02227F14\n    bl GF_AssertFail\n    ldrh r3, [r4]\n    ldrh r2, [r4, #2]\n    ldr r0, [r4, #4]\n    mov r1, #0\n    mul r2, r3\n    lsl r2, r2, #2\n    bl memset\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_02227F28(void) {
    /* Original at 0x02227F28 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _02227F32\n    bl GF_AssertFail\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov42_02227F40(void) {
    /* Original at 0x02227F40 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0]\n    bx lr"
    );
    #endif
}

void ov42_02227F44(void) {
    /* Original at 0x02227F44 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0, #2]\n    bx lr"
    );
    #endif
}

void ov42_02227F48(void) {
    /* Original at 0x02227F48 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    cmp r4, #0\n    bne _02227F56\n    bl GF_AssertFail\n    ldrh r3, [r4]\n    ldrh r2, [r4, #2]\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    mul r2, r3\n    lsl r2, r2, #2\n    bl memcpy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02227F68(void) {
    /* Original at 0x02227F68 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, _02227FA0 ; =ov42_02229E04\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r6, r2, #0\n    str r0, [sp]\n    cmp r5, #0\n    bne _02227F80\n    bl GF_AssertFail\n    ldrh r2, [r5]\n    cmp r2, r4\n    bls _02227F9A\n    ldrh r0, [r5, #2]\n    cmp r0, r6\n    bls _02227F9A\n    add r0, r2, #0\n    mul r0, r6\n    add r0, r4, r0\n    ldr r1, [r5, #4]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    str r0, [sp]\n    ldr r0, [sp]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _02227FA0: .word ov42_02229E04"
    );
    #endif
}

void ov42_02227FA4(void) {
    /* Original at 0x02227FA4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r5, #0\n    bne _02227FB6\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov42_02227F68\n    mov r1, #0\n    mvn r1, r1\n    str r0, [sp]\n    str r0, [sp, #4]\n    cmp r0, r1\n    bne _02227FD2\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02227FDC(void) {
    /* Original at 0x02227FDC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r5, #0\n    bne _02227FEE\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov42_02227F68\n    mov r1, #0\n    mvn r1, r1\n    str r0, [sp]\n    str r0, [sp, #4]\n    cmp r0, r1\n    bne _0222800A\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    lsr r0, r0, #1\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02228010(void) {
    /* Original at 0x02228010 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #8\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02228026\n    bl GF_AssertFail\n    mov r1, #0x18\n    add r0, r6, #0\n    mul r1, r5\n    str r5, [r4, #4]\n    bl Heap_Alloc\n    str r0, [r4]\n    cmp r0, #0\n    bne _0222803C\n    bl GF_AssertFail\n    ldr r3, [r4, #4]\n    mov r2, #0x18\n    ldr r0, [r4]\n    mov r1, #0\n    mul r2, r3\n    bl memset\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02228050(void) {
    /* Original at 0x02228050 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _0222805A\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov42_02228068(void) {
    /* Original at 0x02228068 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldrb r1, [r4, #7]\n    bl ov42_02228110\n    add r1, r4, #0\n    bl ov42_02228548\n    pop {r4, pc}"
    );
    #endif
}

void ov42_0222807C(void) {
    /* Original at 0x0222807C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl ov42_022280A8\n    add r5, r0, #0\n    ldr r4, _022280A4 ; =0x00000000\n    beq _022280A2\n    lsl r1, r4, #0x10\n    add r0, r6, #0\n    lsr r1, r1, #0x10\n    bl ov42_02228148\n    cmp r0, #0\n    beq _0222809C\n    bl ov42_02228574\n    add r4, r4, #1\n    cmp r4, r5\n    blo _0222808A\n    pop {r4, r5, r6, pc}\n    _022280A4: .word 0x00000000"
    );
    #endif
}

void ov42_022280A8(void) {
    GF_AssertFail();
}

void ov42_022280B8(void) {
    /* Original at 0x022280B8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r5, #0\n    bne _022280C6\n    bl GF_AssertFail\n    cmp r4, #0\n    bne _022280CE\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl ov42_022282B0\n    mov r1, #0\n    ldrsh r2, [r4, r1]\n    strh r2, [r0, #4]\n    mov r2, #2\n    ldrsh r3, [r4, r2]\n    strh r3, [r0, #6]\n    ldrsh r1, [r4, r1]\n    strh r1, [r0, #8]\n    ldrsh r1, [r4, r2]\n    strh r1, [r0, #0xa]\n    ldrh r1, [r4, #4]\n    strh r1, [r0, #0xc]\n    ldrh r1, [r4, #6]\n    strb r1, [r0, #0x15]\n    ldrh r1, [r4, #8]\n    strb r1, [r0, #0x14]\n    ldrh r1, [r4, #0xa]\n    strh r1, [r0, #0xe]\n    mov r1, #1\n    str r1, [r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02228100(void) {
    /* Original at 0x02228100 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x18\n    mov r1, #0\n    strb r1, [r0]\n    add r0, r0, #1\n    sub r2, r2, #1\n    bne _02228104\n    bx lr"
    );
    #endif
}

void ov42_02228110(void) {
    /* Original at 0x02228110 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r5, [r0, #4]\n    mov r2, #0\n    cmp r5, #0\n    bls _02228142\n    ldr r4, [r0]\n    add r3, r2, #0\n    add r0, r4, #0\n    ldr r6, [r0]\n    cmp r6, #1\n    bne _02228138\n    add r6, r4, r3\n    ldrh r6, [r6, #0xc]\n    cmp r1, r6\n    bne _02228138\n    mov r0, #0x18\n    mul r0, r2\n    add r0, r4, r0\n    pop {r3, r4, r5, r6}\n    bx lr\n    add r2, r2, #1\n    add r0, #0x18\n    add r3, #0x18\n    cmp r2, r5\n    blo _02228120\n    mov r0, #0\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov42_02228148(void) {
    /* Original at 0x02228148 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r5, #0\n    bne _02228156\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    cmp r4, r0\n    blo _02228160\n    bl GF_AssertFail\n    ldr r2, [r5]\n    mov r0, #0x18\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, [r2, r1]\n    cmp r0, #1\n    bne _02228172\n    add r0, r2, r1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02228178(void) {
    ov42_02228110();
}

void ov42_02228180(void) {
    ov42_02228148();
}

void ov42_02228188(void) {
    /* Original at 0x02228188 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    add r6, r1, #0\n    cmp r4, #0\n    bne _02228196\n    bl GF_AssertFail\n    cmp r6, #0xa\n    bhi _022281F0\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022281A6: ; jump table\n    mov r0, #4\n    ldrsh r5, [r4, r0]\n    b _022281F4\n    mov r0, #6\n    ldrsh r5, [r4, r0]\n    b _022281F4\n    mov r0, #8\n    ldrsh r5, [r4, r0]\n    b _022281F4\n    mov r0, #0xa\n    ldrsh r5, [r4, r0]\n    b _022281F4\n    ldrh r5, [r4, #0xc]\n    b _022281F4\n    ldrb r5, [r4, #0x15]\n    b _022281F4\n    ldrb r5, [r4, #0x14]\n    b _022281F4\n    ldrh r5, [r4, #0xe]\n    b _022281F4\n    ldrh r5, [r4, #0x10]\n    b _022281F4\n    ldrh r5, [r4, #0x12]\n    b _022281F4\n    ldrh r5, [r4, #0x16]\n    b _022281F4\n    bl GF_AssertFail\n    add r0, r5, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_022281F8(void) {
    /* Original at 0x022281F8 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _02228208\n    bl GF_AssertFail\n    cmp r6, #0xa\n    bhi _0222826A\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02228218: ; jump table\n    strh r4, [r5, #4]\n    pop {r4, r5, r6, pc}\n    strh r4, [r5, #6]\n    pop {r4, r5, r6, pc}\n    strh r4, [r5, #8]\n    pop {r4, r5, r6, pc}\n    strh r4, [r5, #0xa]\n    pop {r4, r5, r6, pc}\n    strh r4, [r5, #0xc]\n    pop {r4, r5, r6, pc}\n    cmp r4, #0xc\n    blt _0222824A\n    bl GF_AssertFail\n    strb r4, [r5, #0x15]\n    pop {r4, r5, r6, pc}\n    cmp r4, #4\n    blt _02228256\n    bl GF_AssertFail\n    strb r4, [r5, #0x14]\n    pop {r4, r5, r6, pc}\n    strh r4, [r5, #0xe]\n    pop {r4, r5, r6, pc}\n    strh r4, [r5, #0x10]\n    pop {r4, r5, r6, pc}\n    strh r4, [r5, #0x12]\n    pop {r4, r5, r6, pc}\n    strh r4, [r5, #0x16]\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02228270(void) {
    /* Original at 0x02228270 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    lsl r0, r1, #1\n    add r2, sp, #0\n    mov r1, #0\n    ldrsh r3, [r2, r1]\n    ldr r1, _0222829C ; =ov42_02229E0C\n    ldrsb r1, [r1, r0]\n    add r1, r3, r1\n    strh r1, [r2]\n    mov r1, #2\n    ldrsh r3, [r2, r1]\n    ldr r1, _022282A0 ; =ov42_02229E0D\n    ldrsb r0, [r1, r0]\n    add r0, r3, r0\n    strh r0, [r2, #2]\n    ldrh r1, [r2, #2]\n    ldrh r0, [r2]\n    lsl r1, r1, #0x10\n    orr r0, r1\n    add sp, #0x10\n    bx lr\n    nop\n    _0222829C: .word ov42_02229E0C\n    _022282A0: .word ov42_02229E0D"
    );
    #endif
}

void ov42_022282A4(void) {
    /* Original at 0x022282A4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _022282AC ; =ov42_02229E08\n    ldrb r0, [r1, r0]\n    bx lr\n    nop\n    _022282AC: .word ov42_02229E08"
    );
    #endif
}

void ov42_022282B0(void) {
    /* Original at 0x022282B0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, [r0, #4]\n    mov r1, #0\n    cmp r4, #0\n    bls _022282D4\n    ldr r3, [r0]\n    add r2, r3, #0\n    ldr r0, [r2]\n    cmp r0, #0\n    bne _022282CC\n    mov r0, #0x18\n    mul r0, r1\n    add r0, r3, r0\n    pop {r4, pc}\n    add r1, r1, #1\n    add r2, #0x18\n    cmp r1, r4\n    blo _022282BE\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov42_022282DC(void) {
    /* Original at 0x022282DC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r0, #6]\n    ldrh r0, [r0, #4]\n    lsl r1, r1, #0x10\n    orr r0, r1\n    bx lr"
    );
    #endif
}

void ov42_022282E8(void) {
    /* Original at 0x022282E8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r0, #0xa]\n    ldrh r0, [r0, #8]\n    lsl r1, r1, #0x10\n    orr r0, r1\n    bx lr"
    );
    #endif
}

void ov42_022282F4(void) {
    /* Original at 0x022282F4 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r1, #8\n    bl ov42_02228188\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #9\n    bl ov42_02228188\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #4]\n    strh r0, [r1, #0xc]\n    ldrh r0, [r1, #6]\n    strh r0, [r1, #0xe]\n    add r0, r5, #0\n    bl ov42_022282E8\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    mov r2, #8\n    strh r0, [r1, #8]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #0xa]\n    mov r0, #0xc\n    ldrsh r3, [r1, r0]\n    ldrsh r2, [r1, r2]\n    sub r2, r3, r2\n    strh r2, [r1, #0xc]\n    mov r2, #0xa\n    ldrsh r5, [r1, r2]\n    mov r2, #0xe\n    ldrsh r2, [r1, r2]\n    sub r2, r2, r5\n    strh r2, [r1, #0xe]\n    cmp r4, #0\n    ble _02228372\n    ldrsh r0, [r1, r0]\n    add r1, r6, #0\n    mul r0, r4\n    bl _s32_div_f\n    add r1, sp, #0\n    strh r0, [r1, #0xc]\n    mov r0, #0xe\n    ldrsh r0, [r1, r0]\n    add r1, r6, #0\n    mul r0, r4\n    bl _s32_div_f\n    add r1, sp, #0\n    b _02228376\n    mov r0, #0\n    strh r0, [r1, #0xc]\n    strh r0, [r1, #0xe]\n    add r1, sp, #0\n    mov r0, #0xc\n    ldrsh r2, [r1, r0]\n    mov r0, #8\n    ldrsh r0, [r1, r0]\n    add r0, r2, r0\n    strh r0, [r1, #0xc]\n    mov r0, #0xe\n    ldrsh r0, [r1, r0]\n    add r0, r0, r5\n    strh r0, [r1, #0xe]\n    ldrh r2, [r1, #0xe]\n    ldrh r0, [r1, #0xc]\n    lsl r1, r2, #0x10\n    orr r0, r1\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_0222839C(void) {
    /* Original at 0x0222839C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    add r1, sp, #0\n    ldrh r2, [r1, #4]\n    strh r2, [r0, #4]\n    ldrh r1, [r1, #6]\n    strh r1, [r0, #6]\n    add sp, #0x10\n    bx lr"
    );
    #endif
}

void ov42_022283AC(void) {
    /* Original at 0x022283AC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    add r1, sp, #0\n    ldrh r2, [r1, #4]\n    strh r2, [r0, #8]\n    ldrh r1, [r1, #6]\n    strh r1, [r0, #0xa]\n    add sp, #0x10\n    bx lr"
    );
    #endif
}

void ov42_022283BC(void) {
    /* Original at 0x022283BC */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    str r1, [sp]\n    add r4, r2, #0\n    bl ov42_022282DC\n    add r1, sp, #0x10\n    strh r0, [r1, #0xc]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #0xe]\n    ldrh r0, [r1, #0xc]\n    mov r2, sp\n    sub r2, r2, #4\n    strh r0, [r1, #0x1c]\n    ldrh r0, [r1, #0xe]\n    strh r0, [r1, #0x1e]\n    ldrh r0, [r1, #0x1c]\n    strh r0, [r2]\n    ldrh r0, [r1, #0x1e]\n    add r1, r4, #0\n    strh r0, [r2, #2]\n    ldr r0, [r2]\n    bl ov42_02228270\n    add r1, sp, #0x10\n    strh r0, [r1, #8]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #0xa]\n    ldrh r0, [r1, #8]\n    strh r0, [r1, #0x14]\n    ldrh r0, [r1, #0xa]\n    strh r0, [r1, #0x16]\n    add r0, r5, #0\n    mov r1, #4\n    bl ov42_02228188\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    bl ov42_022280A8\n    mov r5, #0\n    str r0, [sp, #8]\n    cmp r0, #0\n    bls _0222849C\n    add r4, sp, #0x10\n    mov r0, #0x16\n    ldrsh r7, [r4, r0]\n    mov r0, #0x14\n    ldrsh r0, [r4, r0]\n    str r0, [sp, #0xc]\n    lsl r1, r5, #0x10\n    ldr r0, [sp]\n    lsr r1, r1, #0x10\n    bl ov42_02228180\n    add r6, r0, #0\n    beq _02228494\n    mov r1, #4\n    bl ov42_02228188\n    ldr r1, [sp, #4]\n    cmp r0, r1\n    beq _02228494\n    add r0, r6, #0\n    bl ov42_022282DC\n    strh r0, [r4, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r4, #6]\n    ldrh r0, [r4, #4]\n    strh r0, [r4, #0x18]\n    ldrh r0, [r4, #6]\n    strh r0, [r4, #0x1a]\n    mov r0, #0x18\n    ldrsh r1, [r4, r0]\n    ldr r0, [sp, #0xc]\n    cmp r1, r0\n    bne _02228468\n    mov r0, #0x1a\n    ldrsh r0, [r4, r0]\n    cmp r0, r7\n    bne _02228468\n    add sp, #0x30\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov42_022282E8\n    strh r0, [r4]\n    lsr r0, r0, #0x10\n    strh r0, [r4, #2]\n    ldrh r0, [r4]\n    strh r0, [r4, #0x10]\n    ldrh r0, [r4, #2]\n    strh r0, [r4, #0x12]\n    mov r0, #0x10\n    ldrsh r1, [r4, r0]\n    ldr r0, [sp, #0xc]\n    cmp r1, r0\n    bne _02228494\n    mov r0, #0x12\n    ldrsh r0, [r4, r0]\n    cmp r0, r7\n    bne _02228494\n    add sp, #0x30\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    add r5, r5, #1\n    cmp r5, r0\n    blo _02228422\n    mov r0, #0\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_022284A4(void) {
    /* Original at 0x022284A4 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r2, sp, #0x30\n    mov r1, #6\n    str r0, [sp]\n    ldrsh r6, [r2, r1]\n    bl ov42_022280A8\n    mov r5, #0\n    str r0, [sp, #8]\n    cmp r0, #0\n    bls _0222853C\n    add r1, sp, #0x30\n    mov r0, #4\n    ldrsh r7, [r1, r0]\n    add r4, sp, #0xc\n    lsl r1, r5, #0x10\n    ldr r0, [sp]\n    lsr r1, r1, #0x10\n    bl ov42_02228180\n    str r0, [sp, #4]\n    cmp r0, #0\n    beq _02228534\n    bl ov42_022282DC\n    strh r0, [r4, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r4, #6]\n    ldrh r0, [r4, #4]\n    strh r0, [r4, #0xc]\n    ldrh r0, [r4, #6]\n    strh r0, [r4, #0xe]\n    mov r0, #0xc\n    ldrsh r0, [r4, r0]\n    cmp r0, r7\n    bne _02228504\n    mov r0, #0xe\n    ldrsh r0, [r4, r0]\n    cmp r0, r6\n    bne _02228504\n    ldr r0, [sp, #4]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    ldr r0, [sp, #4]\n    bl ov42_022282E8\n    strh r0, [r4]\n    lsr r0, r0, #0x10\n    strh r0, [r4, #2]\n    ldrh r0, [r4]\n    strh r0, [r4, #8]\n    ldrh r0, [r4, #2]\n    strh r0, [r4, #0xa]\n    mov r0, #8\n    ldrsh r0, [r4, r0]\n    cmp r0, r7\n    bne _02228534\n    mov r0, #0xa\n    ldrsh r0, [r4, r0]\n    cmp r0, r6\n    bne _02228534\n    ldr r0, [sp, #4]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    ldr r0, [sp, #8]\n    add r5, r5, #1\n    cmp r5, r0\n    blo _022284C6\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_02228548(void) {
    /* Original at 0x02228548 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r1, #0\n    ldrh r1, [r3]\n    mov r2, sp\n    sub r2, r2, #4\n    strh r1, [r2]\n    ldrh r1, [r3, #2]\n    add r4, r0, #0\n    strh r1, [r2, #2]\n    ldr r1, [r2]\n    ldrb r2, [r3, #6]\n    ldrh r3, [r3, #4]\n    lsl r5, r3, #2\n    ldr r3, _02228570 ; =ov42_02229E14\n    ldr r3, [r3, r5]\n    blx r3\n    mov r0, #0\n    strh r0, [r4, #0x16]\n    pop {r3, r4, r5, pc}\n    nop\n    _02228570: .word ov42_02229E14"
    );
    #endif
}

void ov42_02228574(void) {
    /* Original at 0x02228574 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #5\n    add r4, r0, #0\n    bl ov42_02228188\n    add r1, r0, #0\n    lsl r2, r1, #2\n    ldr r1, _022285A0 ; =ov42_02229E44\n    add r0, r4, #0\n    ldr r1, [r1, r2]\n    blx r1\n    ldrh r1, [r4, #0x16]\n    add r1, r1, #1\n    strh r1, [r4, #0x16]\n    cmp r0, #1\n    bne _0222859E\n    add r0, r4, #0\n    bl ov42_02228C40\n    mov r0, #0\n    strh r0, [r4, #0x16]\n    pop {r4, pc}\n    _022285A0: .word ov42_02229E44"
    );
    #endif
}

void ov42_022285A4(void) {
    /* Original at 0x022285A4 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _022285B4\n    bl GF_AssertFail\n    add r1, sp, #0x10\n    ldrh r2, [r1, #4]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    add r0, r5, #0\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r1, sp, #0x10\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0\n    bl ov42_022281F8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_022285FC(void) {
    /* Original at 0x022285FC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _0222860C\n    bl GF_AssertFail\n    add r1, sp, #0x10\n    ldrh r2, [r1, #4]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    add r0, r5, #0\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r1, sp, #0x10\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #1\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #2\n    bl ov42_022281F8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_02228668(void) {
    /* Original at 0x02228668 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _0222867A\n    bl GF_AssertFail\n    add r0, sp, #0x18\n    ldrh r1, [r0, #4]\n    mov r2, sp\n    sub r2, r2, #4\n    strh r1, [r2]\n    ldrh r0, [r0, #6]\n    add r1, r4, #0\n    strh r0, [r2, #2]\n    ldr r0, [r2]\n    bl ov42_02228BDC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    add r1, sp, #0x18\n    ldrh r2, [r1, #4]\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r1, sp, #0\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #2\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #8\n    bl ov42_022281F8\n    add sp, #8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_02228700(void) {
    /* Original at 0x02228700 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _02228712\n    bl GF_AssertFail\n    add r0, sp, #0x18\n    ldrh r1, [r0, #4]\n    mov r2, sp\n    sub r2, r2, #4\n    strh r1, [r2]\n    ldrh r0, [r0, #6]\n    add r1, r4, #0\n    strh r0, [r2, #2]\n    ldr r0, [r2]\n    bl ov42_02228BDC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    add r1, sp, #0x18\n    ldrh r2, [r1, #4]\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r1, sp, #0\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #3\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #4\n    bl ov42_022281F8\n    add sp, #8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_02228798(void) {
    /* Original at 0x02228798 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _022287A8\n    bl GF_AssertFail\n    add r1, sp, #0x10\n    ldrh r2, [r1, #4]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    add r0, r5, #0\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r1, sp, #0x10\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #4\n    bl ov42_022281F8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_022287F0(void) {
    /* Original at 0x022287F0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _02228800\n    bl GF_AssertFail\n    add r1, sp, #0x10\n    ldrh r2, [r1, #4]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    add r0, r5, #0\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r1, sp, #0x10\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    mov r1, #5\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #0x10\n    bl ov42_022281F8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_0222885C(void) {
    /* Original at 0x0222885C */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _0222886E\n    bl GF_AssertFail\n    add r0, sp, #0x18\n    ldrh r1, [r0, #4]\n    mov r2, sp\n    sub r2, r2, #4\n    strh r1, [r2]\n    ldrh r0, [r0, #6]\n    add r1, r4, #0\n    strh r0, [r2, #2]\n    ldr r0, [r2]\n    bl ov42_02228BDC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    add r1, sp, #0x18\n    ldrh r2, [r1, #4]\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r1, sp, #0\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #6\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #0x10\n    bl ov42_022281F8\n    add sp, #8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_022288F4(void) {
    /* Original at 0x022288F4 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _02228906\n    bl GF_AssertFail\n    add r0, sp, #0x18\n    ldrh r1, [r0, #4]\n    mov r2, sp\n    sub r2, r2, #4\n    strh r1, [r2]\n    ldrh r0, [r0, #6]\n    add r1, r4, #0\n    strh r0, [r2, #2]\n    ldr r0, [r2]\n    bl ov42_02228BDC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    add r1, sp, #0x18\n    ldrh r2, [r1, #4]\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r1, sp, #0\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #7\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #4\n    bl ov42_022281F8\n    add sp, #8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_0222898C(void) {
    /* Original at 0x0222898C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _0222899C\n    bl GF_AssertFail\n    add r1, sp, #0x10\n    ldrh r2, [r1, #4]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    add r0, r5, #0\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r1, sp, #0x10\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #8\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #2\n    bl ov42_022281F8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_022289F8(void) {
    /* Original at 0x022289F8 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _02228A08\n    bl GF_AssertFail\n    add r1, sp, #0x10\n    ldrh r2, [r1, #4]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    add r0, r5, #0\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r1, sp, #0x10\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #9\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #4\n    bl ov42_022281F8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_02228A64(void) {
    /* Original at 0x02228A64 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _02228A74\n    bl GF_AssertFail\n    add r1, sp, #0x10\n    ldrh r2, [r1, #4]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    add r0, r5, #0\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r1, sp, #0x10\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0xa\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #8\n    bl ov42_022281F8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_02228AD0(void) {
    /* Original at 0x02228AD0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r5, #0\n    bne _02228AE0\n    bl GF_AssertFail\n    add r1, sp, #0x10\n    ldrh r2, [r1, #4]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    add r0, r5, #0\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r1, sp, #0x10\n    mov r3, sp\n    ldrh r2, [r1, #4]\n    sub r3, r3, #4\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_0222839C\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0xb\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov42_022281F8\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #0x10\n    bl ov42_022281F8\n    pop {r3, r4, r5}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_02228B3C(void) {
    /* Original at 0x02228B3C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    bx lr"
    );
    #endif
}

void ov42_02228B40(void) {
    ov42_02228C0C();
}

void ov42_02228B48(void) {
    /* Original at 0x02228B48 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    bl ov42_02228C0C\n    add r4, r0, #0\n    cmp r4, #1\n    bne _02228B82\n    add r0, r5, #0\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    ldrh r2, [r1, #4]\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02228B88(void) {
    /* Original at 0x02228B88 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    bl ov42_02228C0C\n    add r4, r0, #0\n    cmp r4, #1\n    bne _02228BC2\n    add r0, r5, #0\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    ldrh r2, [r1, #4]\n    add r0, r5, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #6]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov42_022283AC\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02228BC8(void) {
    /* Original at 0x02228BC8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    bx lr"
    );
    #endif
}

void ov42_02228BCC(void) {
    ov42_02228C0C();
}

void ov42_02228BD4(void) {
    ov42_02228C0C();
}

void ov42_02228BDC(void) {
    /* Original at 0x02228BDC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, lr}\n    add r0, sp, #8\n    ldrh r2, [r0]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r2, [r3]\n    ldrh r0, [r0, #2]\n    strh r0, [r3, #2]\n    ldr r0, [r3]\n    bl ov42_02228270\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r2, [r1, #2]\n    ldrh r0, [r1]\n    lsl r1, r2, #0x10\n    orr r0, r1\n    pop {r3}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov42_02228C0C(void) {
    /* Original at 0x02228C0C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r1, #8\n    bl ov42_02228188\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #9\n    bl ov42_02228188\n    add r6, r0, #0\n    cmp r4, r6\n    bge _02228C3A\n    add r0, r5, #0\n    mov r1, #8\n    add r2, r4, #1\n    bl ov42_022281F8\n    add r0, r4, #1\n    cmp r0, r6\n    bge _02228C3A\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02228C40(void) {
    /* Original at 0x02228C40 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    add r0, r4, #0\n    mov r1, #6\n    bl ov42_02228188\n    add r1, sp, #0\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r4, sp\n    ldrh r3, [r1, #4]\n    sub r4, r4, #4\n    strh r3, [r4]\n    ldrh r1, [r1, #6]\n    strh r1, [r4, #2]\n    ldr r1, [r4]\n    bl ov42_022285A4\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov42_02228C80(void) {
    /* Original at 0x02228C80 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r7, #0\n    bne _02228C94\n    bl GF_AssertFail\n    cmp r5, #0\n    bne _02228C9C\n    bl GF_AssertFail\n    cmp r4, #0\n    bne _02228CA4\n    bl GF_AssertFail\n    cmp r6, #0\n    bne _02228CAC\n    bl GF_AssertFail\n    ldrb r1, [r4, #3]\n    add r0, r5, #0\n    bl ov42_02228178\n    str r0, [sp, #4]\n    cmp r0, #0\n    bne _02228CBE\n    bl GF_AssertFail\n    str r6, [sp]\n    add r3, r4, #0\n    ldrh r4, [r4]\n    add r2, r5, #0\n    ldr r0, [sp, #4]\n    lsl r5, r4, #2\n    ldr r4, _02228CD8 ; =ov42_02229E74\n    add r1, r7, #0\n    ldr r4, [r4, r5]\n    blx r4\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02228CD8: .word ov42_02229E74"
    );
    #endif
}

void ov42_02228CDC(void) {
    /* Original at 0x02228CDC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #5\n    add r5, r0, #0\n    add r4, r3, #0\n    bl ov42_02228188\n    cmp r0, #0\n    beq _02228CF0\n    cmp r0, #4\n    bne _02228D04\n    ldrb r0, [r4, #2]\n    add r1, r5, #0\n    str r0, [sp]\n    ldrh r2, [r4]\n    ldrb r3, [r4, #3]\n    ldr r0, [sp, #0x10]\n    bl ov42_02228EB0\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02228D08(void) {
    /* Original at 0x02228D08 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    mov r1, #5\n    add r4, r3, #0\n    bl ov42_02228188\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #6\n    bl ov42_02228188\n    cmp r6, #0\n    bne _02228D3E\n    ldrb r1, [r4, #2]\n    cmp r0, r1\n    beq _02228D3E\n    str r1, [sp]\n    ldrh r2, [r4]\n    ldrb r3, [r4, #3]\n    ldr r0, [sp, #0x18]\n    add r1, r5, #0\n    bl ov42_02228EB0\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02228D44(void) {
    /* Original at 0x02228D44 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r1, #0\n    mov r1, #5\n    add r5, r0, #0\n    str r2, [sp, #4]\n    add r4, r3, #0\n    bl ov42_02228188\n    add r6, r0, #0\n    bne _02228D8C\n    ldrb r2, [r4, #2]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov42_02228E34\n    cmp r0, #1\n    beq _02228D8C\n    ldrb r2, [r4, #2]\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    bl ov42_02228E9C\n    cmp r0, #1\n    beq _02228D8C\n    ldrb r0, [r4, #2]\n    add r1, r5, #0\n    str r0, [sp]\n    ldrh r2, [r4]\n    ldrb r3, [r4, #3]\n    ldr r0, [sp, #0x20]\n    bl ov42_02228EB0\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r6, #0\n    bne _02228DB2\n    add r0, r5, #0\n    mov r1, #0xa\n    bl ov42_02228188\n    cmp r0, #8\n    blt _02228DB2\n    ldrb r0, [r4, #2]\n    add r1, r5, #0\n    mov r2, #5\n    str r0, [sp]\n    ldrb r3, [r4, #3]\n    ldr r0, [sp, #0x20]\n    bl ov42_02228EB0\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_02228DB8(void) {
    ov42_02228D44();
}

void ov42_02228DC8(void) {
    /* Original at 0x02228DC8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #5\n    add r5, r0, #0\n    add r4, r3, #0\n    bl ov42_02228188\n    cmp r0, #0\n    bne _02228DEC\n    ldrb r0, [r4, #2]\n    add r1, r5, #0\n    str r0, [sp]\n    ldrh r2, [r4]\n    ldrb r3, [r4, #3]\n    ldr r0, [sp, #0x10]\n    bl ov42_02228EB0\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02228DF0(void) {
    GF_AssertFail();
}

void ov42_02228DFC(void) {
    ov42_02228D44();
}

void ov42_02228E0C(void) {
    /* Original at 0x02228E0C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #5\n    add r5, r0, #0\n    add r4, r3, #0\n    bl ov42_02228188\n    cmp r0, #0\n    bne _02228E30\n    ldrb r0, [r4, #2]\n    add r1, r5, #0\n    str r0, [sp]\n    ldrh r2, [r4]\n    ldrb r3, [r4, #3]\n    ldr r0, [sp, #0x10]\n    bl ov42_02228EB0\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02228E34(void) {
    /* Original at 0x02228E34 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r2, #0\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #4]\n    mov r2, sp\n    sub r2, r2, #4\n    strh r0, [r1, #0xc]\n    ldrh r0, [r1, #6]\n    strh r0, [r1, #0xe]\n    ldrh r0, [r1, #0xc]\n    strh r0, [r2]\n    ldrh r0, [r1, #0xe]\n    add r1, r5, #0\n    strh r0, [r2, #2]\n    ldr r0, [r2]\n    bl ov42_02228270\n    add r2, sp, #0\n    strh r0, [r2]\n    lsr r0, r0, #0x10\n    strh r0, [r2, #2]\n    ldrh r0, [r2]\n    mov r1, #8\n    strh r0, [r2, #8]\n    ldrh r0, [r2, #2]\n    strh r0, [r2, #0xa]\n    ldrsh r3, [r2, r1]\n    add r0, r4, #0\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    mov r3, #0xa\n    ldrsh r3, [r2, r3]\n    lsl r1, r1, #0xc\n    lsr r1, r1, #0x10\n    asr r2, r3, #3\n    lsr r2, r2, #0x1c\n    add r2, r3, r2\n    lsl r2, r2, #0xc\n    lsr r2, r2, #0x10\n    bl ov42_02227FA4\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02228E9C(void) {
    ov42_022283BC();
}

void ov42_02228EB0(void) {
    /* Original at 0x02228EB0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r0, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r5]\n    ldrh r0, [r1, #2]\n    strh r0, [r5, #2]\n    strh r4, [r5, #4]\n    ldr r0, [sp, #0x18]\n    strb r6, [r5, #7]\n    strb r0, [r5, #6]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02228EDC(void) {
    /* Original at 0x02228EDC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    str r1, [sp]\n    ldr r0, [sp, #0x18]\n    mov r1, #0xc\n    add r5, r2, #0\n    add r6, r3, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r1, [sp]\n    ldr r3, [sp, #0x18]\n    add r0, r7, #0\n    add r2, r5, #0\n    bl ov42_02227060\n    str r0, [r4]\n    strh r5, [r4, #8]\n    ldrh r2, [r4, #8]\n    mov r1, #0x14\n    ldr r0, [sp, #0x18]\n    mul r1, r2\n    bl Heap_Alloc\n    str r0, [r4, #4]\n    ldrh r3, [r4, #8]\n    mov r2, #0x14\n    mov r1, #0\n    mul r2, r3\n    bl memset\n    mov r0, #2\n    strb r0, [r4, #0xa]\n    strb r6, [r4, #0xb]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_02228F24(void) {
    /* Original at 0x02228F24 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r5, [sp, #0x28]\n    add r7, r0, #0\n    str r1, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0xc\n    add r6, r2, #0\n    str r3, [sp, #8]\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r1, [sp, #4]\n    add r0, r7, #0\n    add r2, r6, #0\n    add r3, r5, #0\n    bl ov42_02227060\n    str r0, [r4]\n    strh r6, [r4, #8]\n    ldrh r2, [r4, #8]\n    mov r1, #0x14\n    add r0, r5, #0\n    mul r1, r2\n    bl Heap_Alloc\n    str r0, [r4, #4]\n    ldrh r3, [r4, #8]\n    mov r2, #0x14\n    mov r1, #0\n    mul r2, r3\n    bl memset\n    mov r0, #2\n    strb r0, [r4, #0xa]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #8]\n    strb r0, [r4, #0xb]\n    str r5, [sp]\n    ldrb r2, [r4, #0xb]\n    ldr r0, [r4]\n    ldr r3, [sp, #0x20]\n    bl ov42_02227194\n    ldrb r1, [r4, #0xb]\n    ldr r0, [r4]\n    ldr r2, _02228F90 ; =0x00009C41\n    add r3, r5, #0\n    bl ov42_0222729C\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02228F90: .word 0x00009C41"
    );
    #endif
}

void ov42_02228F94(void) {
    /* Original at 0x02228F94 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #8]\n    mov r6, #0\n    cmp r0, #0\n    ble _02228FC0\n    add r4, r6, #0\n    ldr r0, [r5, #4]\n    add r0, r0, r4\n    bl ov42_02229274\n    cmp r0, #0\n    bne _02228FB6\n    ldr r0, [r5, #4]\n    add r0, r0, r4\n    bl ov42_022290C4\n    ldrh r0, [r5, #8]\n    add r6, r6, #1\n    add r4, #0x14\n    cmp r6, r0\n    blt _02228FA2\n    ldr r0, [r5]\n    bl ov42_022272B4\n    add r0, r5, #0\n    bl ov42_0222901C\n    ldr r0, [r5]\n    bl ov42_02227114\n    ldr r0, [r5, #4]\n    bl Heap_Free\n    add r0, r5, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02228FE0(void) {
    /* Original at 0x02228FE0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    bl ov42_022271E4\n    cmp r0, #0\n    bne _02229002\n    str r4, [sp]\n    ldrb r2, [r5, #0xb]\n    ldr r0, [r5]\n    add r1, r6, #0\n    add r3, r7, #0\n    bl ov42_02227194\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_02229004(void) {
    ov42_022271D0();
}

void ov42_02229010(void) {
    ov42_022271E4();
}

void ov42_0222901C(void) {
    ov42_022271F8();
}

void ov42_02229028(void) {
    ov42_02227228();
}

void ov42_0222903C(void) {
    /* Original at 0x0222903C */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r6, r0, #0\n    add r7, r2, #0\n    str r3, [sp]\n    bl ov42_02229284\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #5\n    bl ov42_02228188\n    strh r0, [r4, #8]\n    add r0, r5, #0\n    mov r1, #6\n    bl ov42_02228188\n    strh r0, [r4, #0xa]\n    add r0, r5, #0\n    mov r1, #4\n    bl ov42_02228188\n    strh r0, [r4, #0xc]\n    str r5, [r4]\n    strb r7, [r4, #0x12]\n    mov r0, #1\n    strb r0, [r4, #0x13]\n    mov r1, #0\n    strh r1, [r4, #0xe]\n    add r0, r5, #0\n    strh r1, [r4, #0x10]\n    bl ov42_02228188\n    add r1, sp, #4\n    strh r0, [r1]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov42_02228188\n    add r1, sp, #4\n    strh r0, [r1, #2]\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    ldrb r1, [r4, #0x12]\n    bl ov42_0222922C\n    add r1, sp, #4\n    strh r0, [r1, #4]\n    ldrb r0, [r6, #0xa]\n    strh r0, [r1, #6]\n    add r0, r5, #0\n    mov r1, #7\n    bl ov42_02228188\n    add r2, r0, #0\n    ldr r0, [r6]\n    ldr r3, [sp]\n    add r1, sp, #4\n    bl ov42_022272BC\n    str r0, [r4, #4]\n    add r0, r4, #0\n    bl ov42_0222910C\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_022290C4(void) {
    ov42_0222740C(0, 0x14);
}

void ov42_022290DC(void) {
    /* Original at 0x022290DC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #8]\n    mov r6, #0\n    cmp r0, #0\n    ble _02229108\n    add r4, r6, #0\n    ldr r0, [r5, #4]\n    add r0, r0, r4\n    bl ov42_02229274\n    cmp r0, #0\n    bne _022290FE\n    ldr r0, [r5, #4]\n    add r0, r0, r4\n    bl ov42_0222910C\n    ldrh r0, [r5, #8]\n    add r6, r6, #1\n    add r4, #0x14\n    cmp r6, r0\n    blt _022290EA\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_0222910C(void) {
    /* Original at 0x0222910C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldrb r0, [r5, #0x13]\n    cmp r0, #0\n    beq _02229196\n    ldr r0, [r5]\n    mov r1, #5\n    bl ov42_02228188\n    add r6, r0, #0\n    ldr r0, [r5]\n    mov r1, #6\n    bl ov42_02228188\n    add r4, r0, #0\n    ldr r0, [r5]\n    mov r1, #8\n    bl ov42_02228188\n    lsl r0, r0, #0x10\n    asr r1, r0, #0x10\n    ldrh r0, [r5, #8]\n    cmp r0, r6\n    bne _02229148\n    ldrh r0, [r5, #0xa]\n    cmp r0, r4\n    bne _02229148\n    cmp r1, #0\n    bne _0222915E\n    strh r6, [r5, #8]\n    strh r4, [r5, #0xa]\n    ldr r0, [r5, #4]\n    add r1, r6, #0\n    bl ov42_022292BC\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov42_02229308\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ov42_022292D8\n    add r3, sp, #0\n    mov r1, #2\n    mov r2, #0\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    ldr r0, [r5, #4]\n    bl ov42_02227434\n    add r1, sp, #0\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    ldrb r1, [r5, #0x12]\n    bl ov42_0222922C\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldr r0, [r5, #4]\n    bl ov42_02227474\n    ldr r0, [r5, #4]\n    bl ov42_02227538\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov42_0222919C(void) {
    /* Original at 0x0222919C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "strb r1, [r0, #0x13]\n    bx lr"
    );
    #endif
}

void ov42_022291A0(void) {
    ov42_02229308();
}

void ov42_022291AC(void) {
    ov42_02227538();
}

void ov42_022291B8(void) {
    /* Original at 0x022291B8 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r1, [r4, #8]\n    ldr r0, [r4, #4]\n    bl ov42_022292BC\n    add r1, r0, #0\n    ldrh r2, [r4, #0xa]\n    add r0, r4, #0\n    bl ov42_02229308\n    add r0, r4, #0\n    bl ov42_0222910C\n    pop {r4, pc}"
    );
    #endif
}

void ov42_022291D8(void) {
    ov42_02227434(4, 6);
}

void ov42_022291F4(void) {
    ov42_022274AC();
}

void ov42_02229200(void) {
    ov42_02227490();
}

void ov42_0222920C(void) {
    ov42_02227480();
}

void ov42_02229218(void) {
    /* Original at 0x02229218 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r2, r1, #0\n    add r4, r0, #0\n    mov r1, #0\n    bl ov42_02229308\n    ldr r0, [r4, #4]\n    bl ov42_02227538\n    pop {r4, pc}"
    );
    #endif
}

void ov42_0222922C(void) {
    /* Original at 0x0222922C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #1\n    bne _02229238\n    lsl r1, r0, #1\n    ldr r0, _02229240 ; =0x00009C40\n    sub r0, r0, r1\n    bx lr\n    lsl r1, r0, #1\n    ldr r0, _02229244 ; =0x00009C41\n    sub r0, r0, r1\n    bx lr\n    _02229240: .word 0x00009C40\n    _02229244: .word 0x00009C41"
    );
    #endif
}

void ov42_02229248(void) {
    /* Original at 0x02229248 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #4]\n    bl ov42_02227430\n    bl Sprite_GetPalOffset\n    pop {r3, pc}"
    );
    #endif
}

void ov42_02229258(void) {
    ov42_022274DC(4, 6);
}

void ov42_02229274(void) {
    /* Original at 0x02229274 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    cmp r0, #0\n    bne _0222927E\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov42_02229284(void) {
    /* Original at 0x02229284 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #8]\n    mov r6, #0\n    cmp r0, #0\n    ble _022292B2\n    add r4, r6, #0\n    ldr r0, [r5, #4]\n    add r0, r0, r4\n    bl ov42_02229274\n    cmp r0, #1\n    bne _022292A8\n    mov r0, #0x14\n    ldr r1, [r5, #4]\n    mul r0, r6\n    add r0, r1, r0\n    pop {r4, r5, r6, pc}\n    ldrh r0, [r5, #8]\n    add r6, r6, #1\n    add r4, #0x14\n    cmp r6, r0\n    blt _02229292\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_022292BC(void) {
    ov42_022274B8(0);
}

void ov42_022292D8(void) {
    /* Original at 0x022292D8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r0, [r0]\n    add r5, r1, #0\n    add r4, r2, #0\n    bl ov42_022282F4\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    strh r0, [r5]\n    mov r0, #6\n    ldrsh r0, [r1, r0]\n    strh r0, [r4]\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02229308(void) {
    /* Original at 0x02229308 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r1, #0\n    str r2, [sp]\n    bl ov42_022274D0\n    add r7, r0, #0\n    ldr r0, [r5, #4]\n    bl ov42_022274C0\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldr r0, [r5, #4]\n    ldr r2, [sp]\n    add r1, r4, #0\n    bl ov42_02227504\n    cmp r6, r4\n    beq _02229352\n    ldr r0, _02229354 ; =ov42_02229EA4\n    ldrb r0, [r0, r4]\n    cmp r0, #1\n    bne _02229346\n    ldrh r0, [r5, #0x10]\n    cmp r0, r4\n    bne _02229346\n    ldrh r1, [r5, #0xe]\n    ldr r0, [r5, #4]\n    bl ov42_022274C4\n    ldr r0, _02229354 ; =ov42_02229EA4\n    ldrb r0, [r0, r6]\n    cmp r0, #1\n    bne _02229352\n    strh r6, [r5, #0x10]\n    strh r7, [r5, #0xe]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02229354: .word ov42_02229EA4"
    );
    #endif
}

void ov42_02229358(void) {
    /* Original at 0x02229358 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r0, r1, #0\n    bl ov42_022282F4\n    add r3, sp, #0\n    strh r0, [r3]\n    lsr r0, r0, #0x10\n    strh r0, [r3, #2]\n    ldrh r0, [r3]\n    mov r1, #6\n    mov r2, #4\n    strh r0, [r3, #4]\n    ldrh r0, [r3, #2]\n    strh r0, [r3, #6]\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, r4, #0\n    sub r1, #0x60\n    sub r2, #0x70\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ov42_022293A0\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov42_02229394(void) {
    /* Original at 0x02229394 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    strb r1, [r0]\n    strb r1, [r0, #1]\n    strb r1, [r0, #2]\n    strb r1, [r0, #3]\n    bx lr"
    );
    #endif
}

void ov42_022293A0(void) {
    /* Original at 0x022293A0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "strh r1, [r0]\n    strh r2, [r0, #2]\n    bx lr"
    );
    #endif
}

void ov42_022293A8(void) {
    /* Original at 0x022293A8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    ldrsh r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov42_022293B0(void) {
    /* Original at 0x022293B0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #2\n    ldrsh r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov42_022293B8(void) {
    /* Original at 0x022293B8 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    add r7, r1, #0\n    add r0, r3, #0\n    mov r1, #0x1c\n    add r5, r2, #0\n    str r3, [sp, #4]\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x1c\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _022293D4\n    str r6, [r4]\n    str r7, [r4, #4]\n    ldrb r0, [r5]\n    add r2, r5, #0\n    str r0, [r4, #0x10]\n    ldrb r1, [r5, #1]\n    str r1, [r4, #0x14]\n    ldr r0, [r4, #4]\n    bl ov42_02229514\n    ldr r0, [sp, #4]\n    add r3, r4, #0\n    str r0, [sp]\n    ldrb r0, [r5, #8]\n    ldrb r1, [r5, #9]\n    ldrb r2, [r5, #0xa]\n    add r3, #0xc\n    bl GfGfxLoader_GetScrnData\n    str r0, [r4, #8]\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_0222940C(void) {
    /* Original at 0x0222940C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov42_02229420(void) {
    /* Original at 0x02229420 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov42_022293A8\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov42_022293B0\n    add r4, r0, #0\n    ldr r0, [r6, #0x10]\n    cmp r0, #0\n    bne _022294A0\n    cmp r5, #0\n    ble _02229454\n    lsl r0, r5, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02229462\n    lsl r0, r5, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    add r7, r0, #0\n    cmp r4, #0\n    ble _0222947A\n    lsl r0, r4, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02229488\n    lsl r0, r4, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp]\n    add r0, r7, #0\n    bl _ffix\n    add r2, r0, #0\n    ldr r0, [r6]\n    ldr r1, [sp]\n    bl G2dRenderer_SetMainSurfaceCoords\n    b _02229506\n    cmp r5, #0\n    ble _022294B6\n    lsl r0, r5, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _022294C4\n    lsl r0, r5, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    add r7, r0, #0\n    cmp r4, #0\n    ble _022294DC\n    lsl r0, r4, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _022294EA\n    lsl r0, r4, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #4]\n    add r0, r7, #0\n    bl _ffix\n    mov r2, #3\n    add r3, r0, #0\n    lsl r2, r2, #0x12\n    ldr r0, [r6]\n    ldr r1, [sp, #4]\n    add r2, r3, r2\n    bl G2dRenderer_SetSubSurfaceCoords\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl ov42_02229570\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_02229514(void) {
    /* Original at 0x02229514 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    ldr r6, _0222956C ; =ov42_02229EBC\n    add r5, r0, #0\n    add r4, r1, #0\n    ldmia r6!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    str r0, [r3]\n    ldrb r1, [r2, #2]\n    add r0, sp, #0\n    strb r1, [r0, #0x11]\n    ldrb r1, [r2, #3]\n    strb r1, [r0, #0x12]\n    ldrb r1, [r2, #4]\n    strb r1, [r0, #0x13]\n    ldrb r1, [r2, #5]\n    strb r1, [r0, #0x14]\n    ldrb r1, [r2, #6]\n    strb r1, [r0, #0x15]\n    mov r1, #0\n    strb r1, [r0, #0x16]\n    ldrb r0, [r2, #7]\n    lsl r1, r4, #0x18\n    lsr r1, r1, #0x18\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    bl FreeBgTilemapBuffer\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r2, sp, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0222956C: .word ov42_02229EBC"
    );
    #endif
}

void ov42_02229570(void) {
    /* Original at 0x02229570 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    lsl r0, r0, #0xd\n    asr r3, r0, #0x10\n    asr r0, r2, #2\n    lsr r0, r0, #0x1d\n    add r0, r2, r0\n    lsr r4, r1, #0x1f\n    lsl r6, r1, #0x1d\n    sub r6, r6, r4\n    mov r1, #0x1d\n    ror r6, r1\n    add r4, r4, r6\n    lsl r4, r4, #0x10\n    asr r6, r4, #0x10\n    lsr r4, r2, #0x1f\n    lsl r2, r2, #0x1d\n    sub r2, r2, r4\n    ror r2, r1\n    add r1, r4, r2\n    lsl r1, r1, #0x10\n    asr r4, r1, #0x10\n    lsl r0, r0, #0xd\n    ldrh r1, [r5, #0x18]\n    asr r0, r0, #0x10\n    cmp r3, r1\n    bne _022295B4\n    ldrh r1, [r5, #0x1a]\n    cmp r0, r1\n    beq _022295DC\n    strh r3, [r5, #0x18]\n    strh r0, [r5, #0x1a]\n    neg r0, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp]\n    neg r3, r3\n    lsl r3, r3, #0x10\n    ldr r0, [r5, #4]\n    ldr r1, [r5, #0x14]\n    ldr r2, [r5, #0xc]\n    asr r3, r3, #0x10\n    bl ov42_02229600\n    ldr r1, [r5, #0x14]\n    ldr r0, [r5, #4]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r1, [r5, #0x14]\n    ldr r0, [r5, #4]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r2, #0\n    add r3, r6, #0\n    bl ScheduleSetBgPosText\n    ldr r1, [r5, #0x14]\n    ldr r0, [r5, #4]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r2, #3\n    add r3, r4, #0\n    bl ScheduleSetBgPosText\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02229600(void) {
    /* Original at 0x02229600 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    str r0, [sp, #0x1c]\n    add r0, r2, #0\n    ldrh r0, [r0]\n    ldr r4, [sp, #0x50]\n    add r5, r3, #0\n    lsl r0, r0, #0xd\n    asr r0, r0, #0x10\n    str r0, [sp, #0x34]\n    add r0, r2, #0\n    ldrh r0, [r0, #2]\n    str r1, [sp, #0x20]\n    str r2, [sp, #0x24]\n    lsl r0, r0, #0xd\n    asr r0, r0, #0x10\n    str r0, [sp, #0x30]\n    cmp r5, #0\n    bge _02229630\n    neg r0, r5\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #0x2c]\n    b _02229634\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    cmp r4, #0\n    bge _02229642\n    neg r0, r4\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp, #0x28]\n    b _02229646\n    mov r0, #0\n    str r0, [sp, #0x28]\n    cmp r5, #0\n    bgt _0222964C\n    mov r5, #0\n    cmp r4, #0\n    bgt _02229652\n    mov r4, #0\n    mov r0, #0x21\n    sub r0, r0, r5\n    lsl r0, r0, #0x10\n    asr r7, r0, #0x10\n    mov r0, #0x19\n    sub r0, r0, r4\n    lsl r0, r0, #0x10\n    asr r6, r0, #0x10\n    ldr r0, [sp, #0x2c]\n    add r1, r0, r7\n    ldr r0, [sp, #0x34]\n    cmp r0, r1\n    bge _02229674\n    sub r0, r1, r0\n    sub r0, r7, r0\n    lsl r0, r0, #0x10\n    asr r7, r0, #0x10\n    ldr r0, [sp, #0x28]\n    add r1, r0, r6\n    ldr r0, [sp, #0x30]\n    cmp r0, r1\n    bge _02229686\n    sub r0, r1, r0\n    sub r0, r6, r0\n    lsl r0, r0, #0x10\n    asr r6, r0, #0x10\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x21\n    str r0, [sp, #4]\n    mov r0, #0x19\n    ldr r1, [sp, #0x20]\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    lsl r1, r1, #0x18\n    ldr r0, [sp, #0x1c]\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x20]\n    add r0, #0xc\n    str r0, [sp, #0x24]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x2c]\n    lsl r1, r1, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x28]\n    lsl r2, r5, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x34]\n    lsl r3, r4, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x30]\n    lsr r1, r1, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl ov42_022296F0\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_022296F0(void) {
    /* Original at 0x022296F0 */
    /* Requires manual decompilation - 195 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x54\n    str r0, [sp, #0x1c]\n    str r1, [sp, #0x20]\n    ldr r0, [sp, #0x70]\n    str r3, [sp, #0x24]\n    str r0, [sp, #0x70]\n    ldr r0, [sp, #0x78]\n    add r4, r2, #0\n    str r0, [sp, #0x78]\n    ldr r0, [sp, #0x7c]\n    str r0, [sp, #0x7c]\n    ldr r0, [sp, #0x80]\n    str r0, [sp, #0x80]\n    ldr r0, [sp, #0x7c]\n    ldr r1, [sp, #0x80]\n    bl ov42_02229880\n    str r0, [sp, #0x40]\n    cmp r0, #0\n    add r1, sp, #0x58\n    bne _02229748\n    ldrb r0, [r1, #0x10]\n    add r2, r4, #0\n    str r0, [sp]\n    ldrb r0, [r1, #0x14]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x70]\n    str r0, [sp, #8]\n    ldrb r0, [r1, #0x1c]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x78]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x7c]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x80]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x20]\n    ldr r3, [sp, #0x24]\n    bl CopyToBgTilemapRect\n    add sp, #0x54\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0x14\n    ldrsb r0, [r1, r0]\n    str r0, [sp, #0x48]\n    cmp r0, #0\n    bgt _02229754\n    b _0222987A\n    mov r0, #0x10\n    ldrsb r0, [r1, r0]\n    str r0, [sp, #0x3c]\n    mov r0, #0x1c\n    ldrsb r0, [r1, r0]\n    str r0, [sp, #0x38]\n    lsl r0, r4, #0x18\n    asr r0, r0, #0x18\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x78]\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1b\n    sub r1, r1, r2\n    mov r0, #0x1b\n    ror r1, r0\n    add r0, r2, r1\n    ldr r1, [sp, #0x48]\n    add r1, r0, r1\n    cmp r1, #0x20\n    bgt _02229786\n    ldr r1, [sp, #0x48]\n    str r1, [sp, #0x44]\n    mov r1, #0\n    str r1, [sp, #0x48]\n    b _0222979A\n    mov r1, #0x20\n    sub r1, r1, r0\n    lsl r1, r1, #0x18\n    asr r1, r1, #0x18\n    str r1, [sp, #0x44]\n    ldr r2, [sp, #0x48]\n    sub r1, r2, r1\n    lsl r1, r1, #0x18\n    asr r1, r1, #0x18\n    str r1, [sp, #0x48]\n    ldr r1, [sp, #0x78]\n    ldr r4, [sp, #0x3c]\n    lsl r1, r1, #0x13\n    asr r2, r1, #0x18\n    add r1, r4, #0\n    ldr r5, [sp, #0x38]\n    ldr r7, [sp, #0x34]\n    cmp r1, #0\n    ble _0222985A\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x30]\n    ldr r1, [sp, #0x44]\n    lsl r0, r0, #0x18\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsr r0, r0, #0x18\n    str r1, [sp, #0x2c]\n    str r0, [sp, #0x4c]\n    lsr r2, r5, #0x1f\n    lsl r1, r5, #0x1b\n    sub r1, r1, r2\n    mov r0, #0x1b\n    ror r1, r0\n    add r0, r2, r1\n    str r0, [sp, #0x28]\n    add r0, r0, r4\n    cmp r0, #0x20\n    bgt _022297DA\n    add r6, r4, #0\n    mov r4, #0\n    b _022297EA\n    ldr r0, [sp, #0x28]\n    mov r1, #0x20\n    sub r0, r1, r0\n    lsl r0, r0, #0x18\n    asr r6, r0, #0x18\n    sub r0, r4, r6\n    lsl r0, r0, #0x18\n    asr r4, r0, #0x18\n    ldr r0, [sp, #0x7c]\n    asr r1, r5, #4\n    str r0, [sp]\n    ldr r0, [sp, #0x80]\n    lsr r1, r1, #0x1b\n    add r1, r5, r1\n    str r0, [sp, #4]\n    add r0, sp, #0x50\n    str r0, [sp, #8]\n    lsl r1, r1, #0x13\n    asr r1, r1, #0x18\n    lsl r1, r1, #0x18\n    ldr r0, [sp, #0x70]\n    ldr r2, [sp, #0x30]\n    ldr r3, [sp, #0x40]\n    lsr r1, r1, #0x18\n    bl ov42_022298B4\n    lsl r1, r6, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp]\n    ldr r1, [sp, #0x2c]\n    lsl r2, r7, #0x18\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x28]\n    add r1, sp, #0x50\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x4c]\n    lsr r2, r2, #0x18\n    str r0, [sp, #0x10]\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x20]\n    ldr r3, [sp, #0x24]\n    bl CopyToBgTilemapRect\n    add r0, r5, r6\n    lsl r0, r0, #0x18\n    asr r5, r0, #0x18\n    add r0, r7, r6\n    lsl r0, r0, #0x18\n    asr r7, r0, #0x18\n    cmp r4, #0\n    bgt _022297C0\n    ldr r1, [sp, #0x78]\n    ldr r0, [sp, #0x44]\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x78]\n    ldr r1, [sp, #0x24]\n    ldr r0, [sp, #0x44]\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x48]\n    cmp r0, #0\n    ble _0222987A\n    b _02229766\n    add sp, #0x54\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov42_02229880(void) {
    /* Original at 0x02229880 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r5, #0x40\n    bls _0222988E\n    bl GF_AssertFail\n    cmp r4, #0x40\n    bls _02229896\n    bl GF_AssertFail\n    cmp r5, #0x20\n    bhi _022298A6\n    cmp r4, #0x20\n    bhi _022298A2\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    cmp r4, #0x20\n    bhi _022298AE\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #3\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_022298B4(void) {
    /* Original at 0x022298B4 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r3, #0\n    add r6, r2, #0\n    ldr r4, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    ldr r2, [sp, #0x18]\n    cmp r5, #3\n    bhi _02229968\n    add r5, r5, r5\n    add r5, pc\n    ldrh r5, [r5, #6]\n    lsl r5, r5, #0x10\n    asr r5, r5, #0x10\n    add pc, r5\n    _022298D0: ; jump table\n    strh r4, [r2]\n    strh r3, [r2, #2]\n    pop {r4, r5, r6, pc}\n    add r5, r1, #1\n    lsl r5, r5, #5\n    cmp r5, r4\n    bgt _022298EA\n    mov r4, #0x20\n    b _022298EE\n    lsl r5, r1, #5\n    sub r4, r4, r5\n    strh r4, [r2]\n    strh r3, [r2, #2]\n    lsl r2, r3, #0x16\n    asr r2, r2, #0x10\n    mul r2, r1\n    add r0, r0, r2\n    pop {r4, r5, r6, pc}\n    add r1, r6, #1\n    lsl r1, r1, #5\n    strh r4, [r2]\n    cmp r1, r3\n    bgt _0222990A\n    mov r1, #0x20\n    b _0222990E\n    lsl r1, r6, #5\n    sub r1, r3, r1\n    strh r1, [r2, #2]\n    lsl r1, r4, #0x16\n    asr r1, r1, #0x10\n    mul r1, r6\n    add r0, r0, r1\n    pop {r4, r5, r6, pc}\n    add r5, r1, #1\n    lsl r5, r5, #5\n    cmp r5, r4\n    bgt _02229926\n    mov r5, #0x20\n    b _0222992A\n    lsl r5, r1, #5\n    sub r5, r4, r5\n    strh r5, [r2]\n    add r5, r6, #1\n    lsl r5, r5, #5\n    cmp r5, r3\n    bgt _02229938\n    mov r5, #0x20\n    b _0222993C\n    lsl r5, r6, #5\n    sub r5, r3, r5\n    strh r5, [r2, #2]\n    cmp r6, #0\n    bne _02229954\n    mov r2, #0\n    cmp r1, #0\n    beq _02229964\n    mov r1, #2\n    lsl r1, r1, #0xa\n    add r1, r2, r1\n    lsl r1, r1, #0x10\n    lsr r2, r1, #0x10\n    b _02229964\n    lsl r2, r4, #0x16\n    lsr r2, r2, #0x10\n    cmp r1, #0\n    beq _02229964\n    lsl r1, r3, #6\n    add r1, r2, r1\n    lsl r1, r1, #0x10\n    lsr r2, r1, #0x10\n    add r0, r0, r2\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02229974(void) {
    /* Original at 0x02229974 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #0xc\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _0222998A\n    bl GF_AssertFail\n    add r1, r5, #1\n    str r1, [r4, #4]\n    add r0, r6, #0\n    lsl r1, r1, #3\n    bl Heap_Alloc\n    str r0, [r4]\n    ldr r2, [r4, #4]\n    mov r1, #0\n    lsl r2, r2, #3\n    bl memset\n    mov r0, #0\n    strh r0, [r4, #8]\n    strh r0, [r4, #0xa]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_022299AC(void) {
    /* Original at 0x022299AC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov42_022299C0(void) {
    /* Original at 0x022299C0 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldrh r0, [r5, #0xa]\n    add r4, r1, #0\n    ldr r1, [r5, #4]\n    add r0, r0, #1\n    bl _u32_div_f\n    ldrh r0, [r5, #8]\n    cmp r0, r1\n    bne _022299E0\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov42_02229A08\n    ldrh r0, [r5, #0xa]\n    ldr r3, [r5]\n    lsl r2, r0, #3\n    ldrh r0, [r4]\n    add r1, r3, r2\n    strh r0, [r3, r2]\n    ldrh r0, [r4, #2]\n    strh r0, [r1, #2]\n    ldrh r0, [r4, #4]\n    strh r0, [r1, #4]\n    ldrh r0, [r4, #6]\n    strh r0, [r1, #6]\n    ldrh r0, [r5, #0xa]\n    ldr r1, [r5, #4]\n    add r0, r0, #1\n    bl _u32_div_f\n    strh r1, [r5, #0xa]\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02229A08(void) {
    /* Original at 0x02229A08 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r2, [r4, #8]\n    ldrh r0, [r4, #0xa]\n    cmp r0, r2\n    bne _02229A18\n    mov r0, #0\n    pop {r4, pc}\n    ldr r3, [r4]\n    lsl r0, r2, #3\n    add r2, r3, r0\n    ldrh r0, [r3, r0]\n    strh r0, [r1]\n    ldrh r0, [r2, #2]\n    strh r0, [r1, #2]\n    ldrh r0, [r2, #4]\n    strh r0, [r1, #4]\n    ldrh r0, [r2, #6]\n    strh r0, [r1, #6]\n    ldrh r0, [r4, #8]\n    ldr r1, [r4, #4]\n    add r0, r0, #1\n    bl _u32_div_f\n    strh r1, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov42_02229A40(void) {
    /* Original at 0x02229A40 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #0xc\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02229A56\n    bl GF_AssertFail\n    add r1, r5, #1\n    str r1, [r4, #4]\n    add r0, r6, #0\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    str r0, [r4]\n    ldr r2, [r4, #4]\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    mov r0, #0\n    strh r0, [r4, #8]\n    strh r0, [r4, #0xa]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov42_02229A78(void) {
    /* Original at 0x02229A78 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov42_02229A8C(void) {
    /* Original at 0x02229A8C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #0xa]\n    add r4, r1, #0\n    ldr r1, [r5, #4]\n    add r0, r0, #1\n    bl _u32_div_f\n    ldrh r0, [r5, #8]\n    cmp r0, r1\n    bne _02229AAA\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov42_02229AC8\n    ldrh r0, [r5, #0xa]\n    ldr r3, [r5]\n    lsl r2, r0, #2\n    ldrh r0, [r4]\n    add r1, r3, r2\n    strh r0, [r3, r2]\n    ldrh r0, [r4, #2]\n    strh r0, [r1, #2]\n    ldrh r0, [r5, #0xa]\n    ldr r1, [r5, #4]\n    add r0, r0, #1\n    bl _u32_div_f\n    strh r1, [r5, #0xa]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov42_02229AC8(void) {
    /* Original at 0x02229AC8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r2, [r4, #8]\n    ldrh r0, [r4, #0xa]\n    cmp r0, r2\n    bne _02229AD8\n    mov r0, #0\n    pop {r4, pc}\n    ldr r3, [r4]\n    lsl r0, r2, #2\n    add r2, r3, r0\n    ldrh r0, [r3, r0]\n    strh r0, [r1]\n    ldrh r0, [r2, #2]\n    strh r0, [r1, #2]\n    ldrh r0, [r4, #8]\n    ldr r1, [r4, #4]\n    add r0, r0, #1\n    bl _u32_div_f\n    strh r1, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}
