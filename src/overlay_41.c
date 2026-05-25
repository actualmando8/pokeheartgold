/* Decompiled from asm/overlay_41.s */
#include "global.h"

void ov41_02245EA0(void) {
    /* Original at 0x02245EA0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r5, r0, #0\n    add r0, r7, #0\n    mov r1, #8\n    bl Heap_Alloc\n    lsl r6, r5, #3\n    add r4, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    bl Heap_Alloc\n    mov r1, #0\n    add r2, r6, #0\n    str r0, [r4]\n    bl memset\n    str r5, [r4, #4]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02245ECC(void) {
    /* Original at 0x02245ECC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02245EE0(void) {
    /* Original at 0x02245EE0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl ov41_0224607C\n    add r4, r0, #0\n    bne _02245EF2\n    bl GF_AssertFail\n    ldr r0, [r5, #0x18]\n    str r0, [r4]\n    add r0, r5, #0\n    bl ov41_022460A8\n    str r0, [r4, #4]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02245F04(void) {
    ov41_022460DC();
    TouchscreenHitbox_TouchHeldIsIn();
}

void ov41_02245F14(void) {
    /* Original at 0x02245F14 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r6, r1, #0\n    str r2, [sp]\n    add r7, r3, #0\n    bl ov41_02245F04\n    cmp r0, #0\n    bne _02245F2E\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, sp, #8\n    add r2, sp, #4\n    bl ov41_02245FA8\n    ldr r0, _02245F98 ; =gSystem + 0x40\n    ldr r1, [sp, #8]\n    ldrh r2, [r0, #0x20]\n    sub r1, r2, r1\n    str r1, [r6]\n    ldrh r1, [r0, #0x22]\n    ldr r0, [sp, #4]\n    sub r1, r1, r0\n    ldr r0, [sp]\n    sub r4, r1, #4\n    str r1, [r0]\n    add r0, r1, #4\n    cmp r4, r0\n    bge _02245F92\n    cmp r4, #0\n    blt _02245F86\n    ldr r0, [r6]\n    sub r5, r0, #4\n    add r0, r0, #4\n    cmp r5, r0\n    bge _02245F86\n    cmp r5, #0\n    blt _02245F7C\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov41_022464BC\n    cmp r0, #0\n    bne _02245F7C\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r6]\n    add r5, r5, #1\n    add r0, r0, #4\n    cmp r5, r0\n    blt _02245F62\n    ldr r0, [sp]\n    add r4, r4, #1\n    ldr r0, [r0]\n    add r0, r0, #4\n    cmp r4, r0\n    blt _02245F54\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02245F98: .word gSystem + 0x40"
    );
    #endif
}

void ov41_02245F9C(void) {
    sub_02015FC4();
}

void ov41_02245FA8(void) {
    /* Original at 0x02245FA8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r0, [r0, #4]\n    add r5, r1, #0\n    add r4, r2, #0\n    bl sub_02015FCC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    str r0, [r5]\n    mov r0, #6\n    ldrsh r0, [r1, r0]\n    str r0, [r4]\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02245FD8(void) {
    /* Original at 0x02245FD8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r0, [r0, #4]\n    add r5, r1, #0\n    add r4, r2, #0\n    bl sub_02015FE8\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    str r0, [r5]\n    mov r0, #6\n    ldrsh r0, [r1, r0]\n    str r0, [r4]\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02246008(void) {
    sub_02015FB0();
}

void ov41_02246014(void) {
    sub_02015FF4();
}

void ov41_02246020(void) {
    /* Original at 0x02246020 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r4, r2, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov41_02245FD8\n    ldr r0, [sp, #4]\n    cmp r0, #0x10\n    beq _02246040\n    cmp r0, #0x20\n    beq _02246046\n    cmp r0, #0x40\n    beq _0224604C\n    b _02246050\n    mov r0, #0\n    str r0, [r5]\n    b _02246050\n    mov r0, #0xa\n    str r0, [r5]\n    b _02246050\n    mov r0, #0x14\n    str r0, [r5]\n    ldr r0, [sp]\n    cmp r0, #0x10\n    beq _02246062\n    cmp r0, #0x20\n    beq _0224606A\n    cmp r0, #0x40\n    beq _02246072\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #8\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    mov r0, #0xa\n    add sp, #8\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x14\n    str r0, [r4]\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_0224607C(void) {
    /* Original at 0x0224607C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0, #4]\n    mov r1, #0\n    cmp r4, #0\n    ble _022460A0\n    ldr r3, [r0]\n    add r2, r3, #0\n    ldr r0, [r2, #4]\n    cmp r0, #0\n    bne _02246098\n    lsl r0, r1, #3\n    add r0, r3, r0\n    pop {r3, r4}\n    bx lr\n    add r1, r1, #1\n    add r2, #8\n    cmp r1, r4\n    blt _0224608A\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov41_022460A8(void) {
    /* Original at 0x022460A8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x20\n    ldr r1, [r0, #4]\n    mov r3, #0\n    str r1, [sp]\n    ldr r1, [r0, #8]\n    str r1, [sp, #4]\n    ldr r1, [r0, #0xc]\n    str r1, [sp, #8]\n    ldr r2, [r0, #0x10]\n    add r1, sp, #0\n    strh r2, [r1, #0xc]\n    ldr r2, [r0, #0x14]\n    strh r2, [r1, #0xe]\n    strh r3, [r1, #0x10]\n    mov r2, #0x1f\n    str r2, [sp, #0x14]\n    str r3, [sp, #0x18]\n    ldr r0, [r0, #0x1c]\n    strh r0, [r1, #0x1c]\n    add r0, sp, #0\n    bl sub_02015F8C\n    add sp, #0x20\n    pop {r3, pc}"
    );
    #endif
}

void ov41_022460DC(void) {
    /* Original at 0x022460DC */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r1, #0\n    bl sub_02015FCC\n    add r1, sp, #0\n    strh r0, [r1, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #4]\n    strh r0, [r1, #0xc]\n    ldrh r0, [r1, #6]\n    strh r0, [r1, #0xe]\n    ldr r0, [r5, #4]\n    bl sub_02015FE8\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #8]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #0xa]\n    mov r0, #0xe\n    ldrsh r2, [r1, r0]\n    mov r0, #0xa\n    strb r2, [r4]\n    ldrsh r0, [r1, r0]\n    add r0, r2, r0\n    strb r0, [r4, #1]\n    mov r0, #0xc\n    ldrsh r2, [r1, r0]\n    mov r0, #8\n    strb r2, [r4, #2]\n    ldrsh r0, [r1, r0]\n    add r0, r2, r0\n    strb r0, [r4, #3]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02246130(void) {
    /* Original at 0x02246130 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov41_022466D0\n    bl ov41_022466F0\n    bl ov41_02246778\n    ldr r0, _0224614C ; =gSystem + 0x60\n    mov r1, #1\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    pop {r3, pc}\n    nop\n    _0224614C: .word gSystem + 0x60"
    );
    #endif
}

void ov41_02246150(void) {
    /* Original at 0x02246150 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0224616C ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    bl ov41_022467D4\n    bl ov41_022467C8\n    bl GX_ResetBankForTex\n    pop {r3, pc}\n    nop\n    _0224616C: .word gSystem + 0x60"
    );
    #endif
}

void ov41_02246170(void) {
    /* Original at 0x02246170 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r3, _022461CC ; =ov41_0224BFB4\n    add r2, sp, #0\n    add r4, r0, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #0x1a\n    mov r1, #0xe\n    bl NARC_New\n    mov r1, #6\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl ov41_022467E4\n    mov r2, #0xa\n    add r0, r4, #0\n    mov r1, #0xe\n    lsl r2, r2, #0xa\n    mov r3, #0x20\n    bl ov41_02246CC0\n    add r0, r4, #0\n    bl ov41_02246A50\n    add r0, r4, #0\n    mov r1, #0xd\n    bl ov41_02246C90\n    add r0, r4, #0\n    bl ov41_02246A94\n    mov r0, #0xe\n    bl BgConfig_Alloc\n    str r0, [r4, #0x40]\n    add r0, r4, #0\n    bl ov41_022468FC\n    add sp, #0x10\n    pop {r4, pc}\n    _022461CC: .word ov41_0224BFB4"
    );
    #endif
}

void ov41_022461D0(void) {
    /* Original at 0x022461D0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov41_02246CB0\n    add r0, r4, #0\n    bl ov41_02246820\n    add r0, r4, #0\n    bl ov41_02246A20\n    ldr r0, [r4, #0x40]\n    bl Heap_Free\n    add r0, r4, #0\n    bl ov41_02246D2C\n    add r0, r4, #0\n    bl ov41_02246B34\n    add r0, r4, #0\n    bl ov41_02246A7C\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x10]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #0x10]\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224621C(void) {
    /* Original at 0x0224621C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl Thunk_G3X_Reset\n    bl NNS_G2dSetupSoftwareSpriteCamera\n    ldr r0, [r4, #0x1c]\n    cmp r0, #0\n    beq _02246234\n    add r0, r4, #0\n    bl ov41_02246830\n    ldr r0, [r4, #0x2c]\n    cmp r0, #0\n    beq _02246240\n    ldr r0, [r4, #0x20]\n    bl PokepicManager_DrawAll\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    add r0, r4, #0\n    bl ov41_02246B5C\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02246250(void) {
    /* Original at 0x02246250 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    ldr r2, [r4, #4]\n    add r5, r0, #0\n    bl ov41_0224683C\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0xc]\n    add r0, r5, #0\n    bl ov41_0224689C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_0224626C(void) {
    /* Original at 0x0224626C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl sub_02015EF4\n    ldr r0, [r4]\n    bl sub_02015F64\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02246280(void) {
    /* Original at 0x02246280 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x70\n    add r5, r0, #0\n    mov r0, #0\n    str r1, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    add r4, r2, #0\n    ldr r2, [r5, #0x48]\n    add r6, r3, #0\n    str r2, [sp, #0x14]\n    ldr r2, [r5, #0x4c]\n    add r3, r1, #0\n    str r2, [sp, #0x18]\n    ldr r2, [r5, #0x50]\n    str r2, [sp, #0x1c]\n    ldr r2, [r5, #0x54]\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, sp, #0x4c\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5, #0x44]\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x4c\n    str r0, [sp, #0x30]\n    lsl r0, r4, #0xc\n    str r0, [sp, #0x34]\n    lsl r0, r6, #0xc\n    str r0, [sp, #0x38]\n    mov r0, #0\n    str r0, [sp, #0x3c]\n    ldr r0, [sp, #0x80]\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0x84]\n    str r0, [sp, #0x44]\n    mov r0, #0xe\n    str r0, [sp, #0x48]\n    add r0, sp, #0x2c\n    bl Sprite_Create\n    add sp, #0x70\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_022462E4(void) {
    /* Original at 0x022462E4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    ldr r4, [sp, #0x1c]\n    str r4, [sp]\n    ldr r4, [sp, #0x18]\n    str r4, [sp, #4]\n    mov r4, #0xe\n    str r4, [sp, #8]\n    ldr r0, [r0, #0x48]\n    bl AddCharResObjFromOpenNarc\n    bl sub_0200ADA4\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov41_02246304(void) {
    /* Original at 0x02246304 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, [sp, #0x20]\n    str r4, [sp]\n    ldr r4, [sp, #0x18]\n    str r4, [sp, #4]\n    ldr r4, [sp, #0x1c]\n    str r4, [sp, #8]\n    mov r4, #0xe\n    str r4, [sp, #0xc]\n    ldr r0, [r0, #0x4c]\n    bl AddPlttResObjFromOpenNarc\n    bl sub_0200B00C\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02246328(void) {
    AddCellOrAnimResObjFromOpenNarc(0xe, 2);
}

void ov41_02246344(void) {
    AddCellOrAnimResObjFromOpenNarc(0xe, 3);
}

void ov41_02246360(void) {
    /* Original at 0x02246360 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x48]\n    bl SpriteResourceCollection_Find\n    add r1, r0, #0\n    ldr r0, [r4, #0x48]\n    bl DestroySingle2DGfxResObj\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02246374(void) {
    /* Original at 0x02246374 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    bl SpriteResourceCollection_Find\n    add r1, r0, #0\n    ldr r0, [r4, #0x4c]\n    bl DestroySingle2DGfxResObj\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02246388(void) {
    /* Original at 0x02246388 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x50]\n    bl SpriteResourceCollection_Find\n    add r1, r0, #0\n    ldr r0, [r4, #0x50]\n    bl DestroySingle2DGfxResObj\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224639C(void) {
    /* Original at 0x0224639C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x54]\n    bl SpriteResourceCollection_Find\n    add r1, r0, #0\n    ldr r0, [r4, #0x54]\n    bl DestroySingle2DGfxResObj\n    pop {r4, pc}"
    );
    #endif
}

void ov41_022463B0(void) {
    ov41_02246D54(r1, 0x76, 0x13, 0xe);
    ov41_02246B68(r5, r4);
    ov41_02246BEC(r5, r4);
}

void ov41_022463D4(void) {
    ov41_02246DA8();
}

void ov41_022463DC(void) {
    /* Original at 0x022463DC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    add r6, r1, #0\n    add r5, r2, #0\n    bl GF2dGfxRawResMan_AllocObj\n    ldr r1, [r4, #0x38]\n    lsl r5, r5, #2\n    add r0, r6, #0\n    add r1, r1, r5\n    bl NNS_G2dGetUnpackedCharacterData\n    ldr r0, [r4, #0x38]\n    ldr r0, [r0, r5]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_022463FC(void) {
    /* Original at 0x022463FC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r2, [r0]\n    ldr r1, _02246428 ; =0xFFFF1FFF\n    add r3, r0, #0\n    and r1, r2\n    str r1, [r0]\n    add r3, #8\n    ldrh r4, [r3]\n    mov r2, #3\n    mov r1, #1\n    bic r4, r2\n    orr r1, r4\n    add r0, #0xa\n    strh r1, [r3]\n    ldrh r1, [r0]\n    bic r1, r2\n    strh r1, [r0]\n    pop {r3, r4}\n    bx lr\n    nop\n    _02246428: .word 0xFFFF1FFF"
    );
    #endif
}

void ov41_0224642C(void) {
    /* Original at 0x0224642C */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r2, [r0]\n    ldr r1, _02246488 ; =0xFFFF1FFF\n    add r3, r0, #0\n    and r2, r1\n    lsr r1, r0, #0xd\n    orr r1, r2\n    str r1, [r0]\n    add r3, #0x48\n    ldrh r4, [r3]\n    mov r2, #0x3f\n    mov r1, #0x1f\n    bic r4, r2\n    orr r1, r4\n    strh r1, [r3]\n    add r3, r0, #0\n    add r3, #0x4a\n    ldrh r4, [r3]\n    mov r1, #0x12\n    bic r4, r2\n    orr r1, r4\n    strh r1, [r3]\n    add r1, r0, #0\n    ldr r2, _0224648C ; =0x00000AF6\n    add r1, #0x40\n    strh r2, [r1]\n    add r1, r0, #0\n    ldr r2, _02246490 ; =0x0000128F\n    add r1, #0x44\n    strh r2, [r1]\n    add r2, r0, #0\n    add r2, #8\n    ldrh r3, [r2]\n    mov r1, #3\n    add r0, #0xa\n    bic r3, r1\n    strh r3, [r2]\n    ldrh r2, [r0]\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    strh r1, [r0]\n    pop {r3, r4}\n    bx lr\n    _02246488: .word 0xFFFF1FFF\n    _0224648C: .word 0x00000AF6\n    _02246490: .word 0x0000128F"
    );
    #endif
}

void ov41_02246494(void) {
    /* Original at 0x02246494 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x40]\n    bl DoScheduledBgGpuUpdates\n    ldr r0, [r4, #0x20]\n    bl PokepicManager_HandleLoadImgAndOrPltt\n    bl OamManager_ApplyAndResetBuffers\n    pop {r4, pc}"
    );
    #endif
}

void ov41_022464AC(void) {
    ov41_02246D54();
}

void ov41_022464BC(void) {
    /* Original at 0x022464BC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldrh r5, [r0, #2]\n    ldrh r4, [r0]\n    lsl r5, r5, #3\n    cmp r1, #0\n    blt _022464D6\n    cmp r2, #0\n    blt _022464D6\n    cmp r1, r5\n    bge _022464D6\n    lsl r4, r4, #3\n    cmp r2, r4\n    blt _022464DC\n    mov r0, #2\n    pop {r4, r5}\n    bx lr\n    add r4, r2, #0\n    mul r4, r5\n    add r4, r1, r4\n    lsr r5, r4, #0x1f\n    lsl r2, r4, #0x1d\n    sub r2, r2, r5\n    mov r1, #0x1d\n    ror r2, r1\n    add r1, r5, r2\n    lsl r2, r1, #2\n    add r1, r3, #0\n    ldr r3, [r0, #0x14]\n    asr r0, r4, #2\n    lsr r0, r0, #0x1d\n    add r0, r4, r0\n    asr r0, r0, #3\n    lsl r0, r0, #2\n    ldr r3, [r3, r0]\n    mov r0, #0xf\n    lsl r0, r2\n    lsl r1, r2\n    and r0, r3\n    cmp r1, r0\n    bne _02246512\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    mov r0, #0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov41_02246518(void) {
    /* Original at 0x02246518 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    bl ov41_022467E4\n    mov r2, #0xa\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r2, r2, #0xa\n    mov r3, #0x20\n    bl ov41_02246CC0\n    ldr r0, [r5, #0x20]\n    mov r1, #1\n    bl PokepicManager_SetNeedG3IdentityFlag\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov41_02246C90\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02246544(void) {
    /* Original at 0x02246544 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    ldr r3, _02246590 ; =ov41_0224C018\n    add r5, r0, #0\n    str r1, [r5, #0x40]\n    add r4, r2, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #2\n    str r0, [r2]\n    ldr r0, [r5, #0x40]\n    bl FreeBgTilemapBuffer\n    ldr r0, [r5, #0x40]\n    mov r1, #2\n    add r2, sp, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0\n    add r3, r4, #0\n    bl BG_ClearCharDataRange\n    ldr r0, [r5, #0x40]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x1c\n    pop {r4, r5, pc}\n    nop\n    _02246590: .word ov41_0224C018"
    );
    #endif
}

void ov41_02246594(void) {
    /* Original at 0x02246594 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov41_02246CB0\n    add r0, r4, #0\n    bl ov41_02246820\n    add r0, r4, #0\n    bl ov41_02246D2C\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x10]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #0x10]\n    pop {r4, pc}"
    );
    #endif
}

void ov41_022465C0(void) {
    FreeBgTilemapBuffer();
}

void ov41_022465CC(void) {
    PokepicManager_HandleLoadImgAndOrPltt();
}

void ov41_022465D8(void) {
    /* Original at 0x022465D8 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, _0224665C ; =0x04000454\n    str r3, [sp]\n    mov r1, #0\n    str r1, [r0]\n    sub r0, #0x10\n    add r6, r2, #0\n    ldr r7, [sp, #0x18]\n    str r1, [r0]\n    bl NNS_G2dSetupSoftwareSpriteCamera\n    ldr r1, _02246660 ; =0x04000470\n    lsl r0, r4, #0xc\n    str r0, [r1]\n    lsl r0, r6, #0xc\n    str r0, [r1]\n    mov r0, #0\n    str r0, [r1]\n    ldr r0, [sp]\n    ldr r1, _02246664 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r0, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r0, [r1, r0]\n    ldrsh r1, [r1, r2]\n    bl G3_RotZ\n    ldr r2, [r7, #8]\n    ldr r1, [r7, #4]\n    ldr r3, [r7]\n    ldr r0, _02246668 ; =0x0400046C\n    str r3, [r0]\n    str r1, [r0]\n    neg r1, r4\n    str r2, [r0]\n    lsl r1, r1, #0xc\n    str r1, [r0, #4]\n    neg r1, r6\n    lsl r1, r1, #0xc\n    str r1, [r0, #4]\n    mov r1, #0\n    str r1, [r0, #4]\n    sub r0, #0x28\n    str r1, [r0]\n    ldr r0, [r5, #0x1c]\n    cmp r0, #0\n    beq _02246644\n    add r0, r5, #0\n    bl ov41_02246830\n    ldr r0, [r5, #0x2c]\n    cmp r0, #0\n    beq _02246650\n    ldr r0, [r5, #0x20]\n    bl PokepicManager_DrawAll\n    ldr r0, _0224666C ; =0x04000448\n    mov r1, #1\n    str r1, [r0]\n    str r1, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224665C: .word 0x04000454\n    _02246660: .word 0x04000470\n    _02246664: .word FX_SinCosTable_\n    _02246668: .word 0x0400046C\n    _0224666C: .word 0x04000448"
    );
    #endif
}

void ov41_02246670(void) {
    /* Original at 0x02246670 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x1a\n    mov r1, #0xe\n    bl NARC_New\n    mov r1, #6\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov41_02246A94\n    mov r0, #0xe\n    bl BgConfig_Alloc\n    str r0, [r4, #0x40]\n    add r0, r4, #0\n    bl ov41_022468FC\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02246698(void) {
    /* Original at 0x02246698 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov41_02246A20\n    ldr r0, [r4, #0x40]\n    bl Heap_Free\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    add r0, r4, #0\n    bl ov41_02246B34\n    pop {r4, pc}"
    );
    #endif
}

void ov41_022466B8(void) {
    /* Original at 0x022466B8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #0x40]\n    bl DoScheduledBgGpuUpdates\n    bl OamManager_ApplyAndResetBuffers\n    pop {r3, pc}"
    );
    #endif
}

void ov41_022466C8(void) {
    ov41_02246B5C();
}

void ov41_022466D0(void) {
    GfGfx_SetBanks(5);
}

void ov41_022466F0(void) {
    /* Original at 0x022466F0 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl NNS_G3dInit\n    bl G3X_InitMtxStack\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _02246764 ; =0x04000008\n    mov r1, #3\n    ldrh r2, [r0]\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    strh r1, [r0]\n    add r0, #0x58\n    ldrh r1, [r0]\n    ldr r2, _02246768 ; =0xFFFFCFFD\n    and r1, r2\n    strh r1, [r0]\n    ldrh r3, [r0]\n    add r1, r2, #2\n    and r3, r1\n    mov r1, #0x10\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r3, [r0]\n    ldr r1, _0224676C ; =0x0000CFFB\n    and r1, r3\n    strh r1, [r0]\n    add r1, r2, #2\n    ldrh r3, [r0]\n    lsr r2, r2, #0x11\n    and r3, r1\n    mov r1, #8\n    orr r1, r3\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    mov r3, #0x3f\n    str r0, [sp]\n    bl G3X_SetClearColor\n    ldr r2, _02246770 ; =0x04000540\n    mov r0, #2\n    ldr r1, _02246774 ; =0xBFFF0000\n    str r0, [r2]\n    str r1, [r2, #0x40]\n    mov r1, #1\n    bl GF_3DVramMan_InitFrameTexVramManager\n    mov r0, #1\n    lsl r0, r0, #0xe\n    mov r1, #1\n    bl GF_3DVramMan_InitFramePlttVramManager\n    pop {r3, pc}\n    _02246764: .word 0x04000008\n    _02246768: .word 0xFFFFCFFD\n    _0224676C: .word 0x0000CFFB\n    _02246770: .word 0x04000540\n    _02246774: .word 0xBFFF0000"
    );
    #endif
}

void ov41_02246778(void) {
    /* Original at 0x02246778 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _022467C0 ; =_0224BF94\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _022467C4 ; =0xFFCFFFEF\n    and r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    str r0, [r2]\n    bl NNS_G2dInitOamManagerModule\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r0, #0x1f\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x13\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x10\n    pop {r4, pc}\n    _022467C0: .word _0224BF94\n    _022467C4: .word 0xFFCFFFEF"
    );
    #endif
}

void ov41_022467C8(void) {
    NNS_GfdResetFrmTexVramState();
    NNS_GfdResetFrmPlttVramState();
}

void ov41_022467D4(void) {
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    NNS_G2dInitOamManagerModule();
}

void ov41_022467E4(void) {
    /* Original at 0x022467E4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl sub_02015DDC\n    str r0, [r5]\n    mov r1, #0x76\n    ldr r0, [r4, #0xc]\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    str r0, [r5, #4]\n    mov r0, #0x76\n    str r0, [r5, #8]\n    mov r0, #0\n    str r0, [r5, #0xc]\n    ldr r0, [r4, #0xc]\n    mov r1, #0x4c\n    bl Heap_Alloc\n    str r0, [r5, #0x10]\n    mov r0, #0x13\n    str r0, [r5, #0x14]\n    mov r0, #0\n    str r0, [r5, #0x18]\n    mov r0, #1\n    str r0, [r5, #0x1c]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02246820(void) {
    sub_02015E20();
}

void ov41_02246830(void) {
    sub_02015E64();
}

void ov41_0224683C(void) {
    /* Original at 0x0224683C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r2, #0\n    add r4, r1, #0\n    str r2, [sp]\n    cmp r0, #0\n    ble _02246898\n    add r7, r5, #0\n    add r6, r4, #0\n    add r7, #0xc\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5, #8]\n    cmp r1, r0\n    blt _02246862\n    bl GF_AssertFail\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _02246878\n    add r0, r6, #0\n    bl sub_02015EA0\n    ldr r2, [r5, #0xc]\n    ldr r1, [r5, #4]\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    b _02246882\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5, #4]\n    lsl r2, r1, #2\n    mov r1, #0\n    str r1, [r0, r2]\n    ldr r0, [r7]\n    add r4, #8\n    add r0, r0, #1\n    str r0, [r7]\n    ldr r0, [sp, #4]\n    add r6, #8\n    add r1, r0, #1\n    ldr r0, [sp]\n    str r1, [sp, #4]\n    cmp r1, r0\n    blt _02246856\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224689C(void) {
    /* Original at 0x0224689C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r2, #0\n    add r4, r1, #0\n    str r2, [sp]\n    cmp r0, #0\n    ble _022468F8\n    add r7, r5, #0\n    add r6, r4, #0\n    add r7, #0x18\n    ldr r1, [r5, #0x18]\n    ldr r0, [r5, #0x14]\n    cmp r1, r0\n    blt _022468C2\n    bl GF_AssertFail\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _022468D8\n    add r0, r6, #0\n    bl sub_02015F1C\n    ldr r2, [r5, #0x18]\n    ldr r1, [r5, #0x10]\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    b _022468E2\n    ldr r1, [r5, #0x18]\n    ldr r0, [r5, #0x10]\n    lsl r2, r1, #2\n    mov r1, #0\n    str r1, [r0, r2]\n    ldr r0, [r7]\n    add r4, #0xc\n    add r0, r0, #1\n    str r0, [r7]\n    ldr r0, [sp, #4]\n    add r6, #0xc\n    add r1, r0, #1\n    ldr r0, [sp]\n    str r1, [sp, #4]\n    cmp r1, r0\n    blt _022468B6\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_022468FC(void) {
    /* Original at 0x022468FC */
    /* Requires manual decompilation - 126 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x8c\n    ldr r5, _02246A0C ; =ov41_0224BFE0\n    add r4, r0, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0x70\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    ldr r0, [r4, #0x40]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0xe\n    bl BG_ClearCharDataRange\n    ldr r0, [r4, #0x40]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02246A10 ; =ov41_0224BFFC\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    ldr r0, [r4, #0x40]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0xe\n    bl BG_ClearCharDataRange\n    ldr r0, [r4, #0x40]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02246A14 ; =ov41_0224C034\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    ldr r0, [r4, #0x40]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #3\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0xe\n    bl BG_ClearCharDataRange\n    ldr r0, [r4, #0x40]\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02246A18 ; =ov41_0224BFC4\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    ldr r0, [r4, #0x40]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0xe\n    bl BG_ClearCharDataRange\n    ldr r0, [r4, #0x40]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02246A1C ; =ov41_0224C050\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    ldr r0, [r4, #0x40]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #5\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0xe\n    bl BG_ClearCharDataRange\n    ldr r0, [r4, #0x40]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x8c\n    pop {r4, r5, pc}\n    nop\n    _02246A0C: .word ov41_0224BFE0\n    _02246A10: .word ov41_0224BFFC\n    _02246A14: .word ov41_0224C034\n    _02246A18: .word ov41_0224BFC4\n    _02246A1C: .word ov41_0224C050"
    );
    #endif
}

void ov41_02246A20(void) {
    /* Original at 0x02246A20 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x40]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x40]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x40]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x40]\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x40]\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02246A50(void) {
    /* Original at 0x02246A50 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x77\n    mov r1, #0xe\n    bl GF2dGfxRawResMan_Create\n    mov r1, #0x77\n    str r0, [r4, #0x34]\n    mov r0, #0xe\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0x77\n    mov r1, #0\n    lsl r2, r2, #2\n    str r0, [r4, #0x38]\n    bl memset\n    mov r0, #0x77\n    str r0, [r4, #0x3c]\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02246A7C(void) {
    /* Original at 0x02246A7C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x38]\n    bl Heap_Free\n    ldr r0, [r4, #0x34]\n    bl GF2dGfxRawResObj_Destroy\n    mov r0, #0\n    str r0, [r4, #0x3c]\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02246A94(void) {
    /* Original at 0x02246A94 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    ldr r5, _02246B30 ; =ov41_0224BFA4\n    add r3, sp, #0x14\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    mov r1, #0x10\n    add r0, r2, #0\n    add r2, r1, #0\n    bl ObjCharTransfer_InitEx\n    mov r0, #5\n    mov r1, #0xe\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7c\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x1f\n    str r3, [sp, #0xc]\n    mov r2, #0xe\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    add r1, r4, #0\n    mov r0, #0x30\n    add r1, #0x58\n    mov r2, #0xe\n    bl G2dRenderer_Init\n    str r0, [r4, #0x44]\n    add r0, r4, #0\n    mov r2, #2\n    add r0, #0x58\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r0, #8\n    mov r1, #0\n    mov r2, #0xe\n    bl Create2DGfxResObjMan\n    str r0, [r4, #0x48]\n    mov r0, #5\n    mov r1, #1\n    mov r2, #0xe\n    bl Create2DGfxResObjMan\n    str r0, [r4, #0x4c]\n    mov r0, #0x30\n    mov r1, #2\n    mov r2, #0xe\n    bl Create2DGfxResObjMan\n    str r0, [r4, #0x50]\n    mov r0, #0x30\n    mov r1, #3\n    mov r2, #0xe\n    bl Create2DGfxResObjMan\n    str r0, [r4, #0x54]\n    add sp, #0x24\n    pop {r4, r5, pc}\n    nop\n    _02246B30: .word ov41_0224BFA4"
    );
    #endif
}

void ov41_02246B34(void) {
    /* Original at 0x02246B34 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x44]\n    bl SpriteList_Delete\n    mov r4, #0\n    ldr r0, [r5, #0x48]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _02246B40\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    bl OamManager_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02246B5C(void) {
    SpriteList_RenderAndAnimateSprites();
}

void ov41_02246B68(void) {
    /* Original at 0x02246B68 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    mov r4, #0\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r4, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r6, r0]\n    add r1, r4, #1\n    mov r2, #0\n    mov r3, #0xe\n    bl GfGfxLoader_LoadFromOpenNarc\n    str r0, [sp, #4]\n    cmp r0, #0\n    bne _02246B92\n    bl GF_AssertFail\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    add r2, r4, #0\n    bl ov41_022463DC\n    ldr r1, [r7]\n    add r4, r4, #1\n    add r1, r1, r5\n    str r0, [r1, #4]\n    ldr r1, [r6]\n    ldr r0, [r7]\n    str r1, [r0, r5]\n    add r5, #8\n    cmp r4, #0x64\n    blt _02246B74\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #6\n    mov r1, #0\n    ldr r0, [r6, r0]\n    add r2, r1, #0\n    mov r3, #0xe\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r4, r0, #0\n    ldr r0, [r7, #0x14]\n    add r1, r4, #0\n    mov r2, #0\n    bl GF2dGfxRawResMan_AllocObj\n    ldr r1, [r7, #8]\n    add r0, r4, #0\n    add r1, r1, #4\n    bl NNS_G2dGetUnpackedPaletteData\n    ldr r1, [r6]\n    ldr r0, [r7, #8]\n    str r1, [r0]\n    ldr r0, [r7, #8]\n    mov r1, #3\n    str r1, [r0, #8]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02246BEC(void) {
    /* Original at 0x02246BEC */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x87\n    add r4, r1, #0\n    mov r6, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #6\n    add r1, r6, #0\n    ldr r0, [r5, r0]\n    add r1, #0xce\n    mov r2, #0\n    mov r3, #0xe\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r2, r6, #0\n    add r1, r0, #0\n    add r2, #0x64\n    add r0, r5, #0\n    lsl r7, r2, #3\n    bl ov41_022463DC\n    ldr r1, [r4]\n    mov r2, #0\n    add r1, r1, r7\n    str r0, [r1, #4]\n    ldr r1, [r5]\n    ldr r0, [r4]\n    mov r3, #0xe\n    str r1, [r0, r7]\n    add r0, r6, #1\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #8]\n    bl GfGfxLoader_LoadFromOpenNarc\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x14]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #4]\n    bl GF2dGfxRawResMan_AllocObj\n    ldr r1, [sp, #4]\n    mov r0, #0xc\n    add r7, r1, #0\n    mul r7, r0\n    ldr r1, [r4, #8]\n    ldr r0, [sp, #0xc]\n    add r1, r1, r7\n    add r1, r1, #4\n    bl NNS_G2dGetUnpackedPaletteData\n    ldr r0, [r4, #8]\n    add r0, r0, r7\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    bne _02246C70\n    bl GF_AssertFail\n    ldr r1, [r5]\n    ldr r0, [r4, #8]\n    add r6, r6, #1\n    str r1, [r0, r7]\n    ldr r0, [r4, #8]\n    add r1, r0, r7\n    mov r0, #1\n    str r0, [r1, #8]\n    ldr r0, [sp, #8]\n    add r0, r0, #4\n    str r0, [sp, #8]\n    cmp r6, #0x12\n    blt _02246BFA\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02246C90(void) {
    GfGfxLoader_LoadFromOpenNarc(6, 0xeb, 0);
}

void ov41_02246CB0(void) {
    Heap_Free();
}

void ov41_02246CC0(void) {
    /* Original at 0x02246CC0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl PokepicManager_Create\n    str r0, [r5, #0x20]\n    ldr r3, _02246D1C ; =NNS_GfdDefaultFuncAllocTexVram\n    mov r1, #0\n    ldr r3, [r3]\n    add r0, r4, #0\n    add r2, r1, #0\n    blx r3\n    str r0, [r5, #0x24]\n    ldr r3, _02246D20 ; =NNS_GfdDefaultFuncAllocPlttVram\n    add r0, r6, #0\n    ldr r3, [r3]\n    mov r1, #0\n    mov r2, #1\n    blx r3\n    str r0, [r5, #0x28]\n    ldr r3, [r5, #0x24]\n    ldr r2, _02246D24 ; =0x7FFF0000\n    lsl r1, r3, #0x10\n    and r2, r3\n    lsr r2, r2, #0x10\n    ldr r0, [r5, #0x20]\n    lsr r1, r1, #0xd\n    lsl r2, r2, #4\n    bl PokepicManager_SetCharBaseAddrAndSize\n    ldr r3, [r5, #0x28]\n    ldr r2, _02246D28 ; =0xFFFF0000\n    lsl r1, r3, #0x10\n    and r2, r3\n    lsr r2, r2, #0x10\n    ldr r0, [r5, #0x20]\n    lsr r1, r1, #0xd\n    lsl r2, r2, #3\n    bl PokepicManager_SetPlttBaseAddrAndSize\n    mov r0, #1\n    str r0, [r5, #0x2c]\n    pop {r4, r5, r6, pc}\n    nop\n    _02246D1C: .word NNS_GfdDefaultFuncAllocTexVram\n    _02246D20: .word NNS_GfdDefaultFuncAllocPlttVram\n    _02246D24: .word 0x7FFF0000\n    _02246D28: .word 0xFFFF0000"
    );
    #endif
}

void ov41_02246D2C(void) {
    /* Original at 0x02246D2C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    bl PokepicManager_Delete\n    ldr r1, _02246D4C ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r0, [r4, #0x24]\n    ldr r1, [r1]\n    blx r1\n    ldr r1, _02246D50 ; =NNS_GfdDefaultFuncFreePlttVram\n    ldr r0, [r4, #0x28]\n    ldr r1, [r1]\n    blx r1\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    _02246D4C: .word NNS_GfdDefaultFuncFreeTexVram\n    _02246D50: .word NNS_GfdDefaultFuncFreePlttVram"
    );
    #endif
}

void ov41_02246D54(void) {
    /* Original at 0x02246D54 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    lsl r0, r4, #3\n    str r0, [sp]\n    add r7, r3, #0\n    ldr r1, [sp]\n    add r0, r7, #0\n    add r6, r2, #0\n    bl Heap_Alloc\n    ldr r2, [sp]\n    mov r1, #0\n    str r0, [r5]\n    bl memset\n    add r0, r4, #0\n    add r1, r7, #0\n    bl GF2dGfxRawResMan_Create\n    str r0, [r5, #0x10]\n    str r4, [r5, #4]\n    mov r0, #0xc\n    add r4, r6, #0\n    mul r4, r0\n    add r0, r7, #0\n    add r1, r4, #0\n    bl Heap_Alloc\n    mov r1, #0\n    add r2, r4, #0\n    str r0, [r5, #8]\n    bl memset\n    add r0, r6, #0\n    add r1, r7, #0\n    bl GF2dGfxRawResMan_Create\n    str r0, [r5, #0x14]\n    str r6, [r5, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02246DA8(void) {
    /* Original at 0x02246DA8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _02246DBA\n    bl GF2dGfxRawResObj_Destroy\n    mov r0, #0\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _02246DC8\n    bl GF2dGfxRawResObj_Destroy\n    mov r0, #0\n    str r0, [r4, #0x14]\n    ldr r0, [r4]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4]\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #8]\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02246DE0(void) {
    /* Original at 0x02246DE0 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    mov r2, #2\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #0xd\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    mov r2, #1\n    mov r0, #3\n    mov r1, #0xe\n    lsl r2, r2, #0x12\n    bl Heap_Create\n    mov r1, #0x6f\n    add r0, r5, #0\n    lsl r1, r1, #4\n    mov r2, #0xd\n    bl OverlayManager_CreateAndGetData\n    mov r2, #0x6f\n    mov r1, #0\n    lsl r2, r2, #4\n    add r4, r0, #0\n    bl memset\n    ldr r0, _02246EF0 ; =ov41_02247478\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    ldr r1, _02246EF4 ; =0x000006DC\n    str r0, [r4, r1]\n    ldr r0, [r5, #0x20]\n    cmp r0, #0\n    beq _02246E3E\n    bl MenuInputStateMgr_GetState\n    ldr r1, _02246EF8 ; =0x000006EC\n    b _02246E42\n    mov r0, #0\n    add r1, #0x10\n    str r0, [r4, r1]\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    mov r1, #0x61\n    lsl r1, r1, #2\n    ldr r0, [r5, #8]\n    add r1, r4, r1\n    bl ov41_02248E84\n    add r0, r4, #0\n    bl ov41_02247240\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    add r0, r4, r1\n    sub r1, #0x8d\n    mov r2, #0xd\n    bl ov41_022499B4\n    mov r0, #0xaf\n    lsl r0, r0, #2\n    mov r1, #0xd\n    bl ov41_02245EA0\n    mov r1, #0xd9\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r1, [r5]\n    add r0, r4, #0\n    mov r2, #0xa\n    mov r3, #0\n    bl ov41_02247288\n    add r0, r4, #0\n    bl ov41_02247334\n    add r0, r4, #0\n    mov r1, #0\n    bl ov41_02247480\n    add r0, r4, #0\n    bl ov41_022474D4\n    ldr r1, [r5, #0xc]\n    add r0, r4, #0\n    bl ov41_0224765C\n    ldr r0, _02246EFC ; =0x00000568\n    mov r2, #0xfd\n    add r1, r4, r0\n    str r1, [sp]\n    mov r1, #1\n    sub r0, #0xd0\n    lsl r2, r2, #2\n    str r1, [sp, #4]\n    add r1, r4, r2\n    sub r2, #0x8c\n    add r0, r4, r0\n    add r2, r4, r2\n    add r3, r4, #0\n    bl ov41_02248F18\n    mov r0, #0xd\n    bl YesNoPrompt_Create\n    ldr r1, _02246F00 ; =0x000006B8\n    str r0, [r4, r1]\n    mov r0, #0xd\n    mov r1, #1\n    bl AllocWindows\n    ldr r2, _02246F04 ; =0x000006BC\n    mov r1, #0\n    str r0, [r4, r2]\n    sub r2, #0xc\n    str r1, [r4, r2]\n    mov r0, #0x35\n    add r2, r1, #0\n    bl Sound_SetSceneAndPlayBGM\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02246EF0: .word ov41_02247478\n    _02246EF4: .word 0x000006DC\n    _02246EF8: .word 0x000006EC\n    _02246EFC: .word 0x00000568\n    _02246F00: .word 0x000006B8\n    _02246F04: .word 0x000006BC"
    );
    #endif
}

void ov41_02246F08(void) {
    /* Original at 0x02246F08 */
    /* Requires manual decompilation - 247 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, r7, #0\n    mov r6, #0\n    bl OverlayManager_GetArgs\n    ldr r1, [r5]\n    cmp r1, #0xc\n    bhi _02246FD6\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02246F30: ; jump table\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r1, #0xd\n    str r1, [sp, #8]\n    mov r1, #5\n    add r2, r1, #0\n    add r3, r6, #0\n    bl BeginNormalPaletteFade\n    mov r0, #2\n    str r0, [r5]\n    b _0224712A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02246FD6\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224712A\n    ldr r0, [r0, #0x1c]\n    cmp r0, #1\n    bne _02246F9E\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, _02247138 ; =0x00000568\n    mov r1, #0x1b\n    add r0, r4, r0\n    mov r2, #0xd7\n    mov r3, #0x2f\n    bl ov41_0224AC40\n    mov r1, #0x6e\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224712A\n    mov r0, #6\n    str r0, [r5]\n    b _0224712A\n    mov r0, #0x6e\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02246FD6\n    ldr r0, _02247138 ; =0x00000568\n    add r0, r4, r0\n    bl ov41_0224AC80\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224712A\n    ldr r0, _0224713C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    and r1, r0\n    ldr r0, _02247140 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    orr r0, r1\n    bne _02246FD8\n    b _0224712A\n    ldr r0, _02247138 ; =0x00000568\n    mov r1, #0x1b\n    add r0, r4, r0\n    mov r2, #0xd7\n    mov r3, #0x30\n    bl ov41_0224AC08\n    add r0, r6, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224712A\n    mov r1, #0x6b\n    lsl r1, r1, #4\n    ldr r0, [r4, r1]\n    cmp r0, #3\n    bne _0224700C\n    add r1, r1, #4\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov41_022476B8\n    mov r0, #7\n    str r0, [r5]\n    ldr r0, _02247144 ; =0x00000498\n    add r0, r4, r0\n    bl ov41_02248E44\n    add r0, r4, #0\n    bl ov41_02247D44\n    ldr r0, _02247138 ; =0x00000568\n    add r0, r4, r0\n    bl ov41_0224ABF0\n    add r0, r4, #0\n    bl ov41_02247578\n    b _0224712A\n    ldr r0, _02247148 ; =0x000006B4\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0224712A\n    add r1, r6, #0\n    str r1, [r4, r0]\n    mov r1, #8\n    str r1, [r5]\n    mov r1, #4\n    sub r0, r0, #4\n    str r1, [r4, r0]\n    ldr r1, _0224714C ; =0x0000047C\n    mov r2, #0xe\n    add r0, r4, r1\n    sub r1, #0x88\n    add r1, r4, r1\n    bl ov41_0224B4E8\n    b _0224712A\n    mov r1, #0x6b\n    lsl r1, r1, #4\n    ldr r0, [r4, r1]\n    cmp r0, #9\n    bne _0224706A\n    add r1, r1, #4\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov41_02247828\n    mov r0, #0xa\n    str r0, [r5]\n    b _0224712A\n    cmp r0, #8\n    bne _0224707E\n    mov r0, #9\n    str r0, [r5]\n    mov r0, #5\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov41_02247D64\n    b _0224712A\n    add r0, r4, #0\n    bl ov41_02247B7C\n    mov r1, #0x6b\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, _0224714C ; =0x0000047C\n    add r0, r4, r0\n    bl ov41_0224B50C\n    b _0224712A\n    mov r0, #0x6b\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    cmp r1, #6\n    bne _022470AA\n    mov r1, #1\n    add r0, #0x10\n    str r1, [r4, r0]\n    mov r0, #0xb\n    str r0, [r5]\n    b _0224712A\n    cmp r1, #7\n    bne _022470BA\n    add r1, r6, #0\n    add r0, #0x10\n    str r1, [r4, r0]\n    mov r0, #0xb\n    str r0, [r5]\n    b _0224712A\n    add r0, r4, #0\n    bl ov41_02247DF8\n    mov r1, #0x6b\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, _0224714C ; =0x0000047C\n    add r0, r4, r0\n    bl ov41_0224B50C\n    b _0224712A\n    ldr r0, _02247148 ; =0x000006B4\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0224712A\n    add r2, r6, #0\n    str r2, [r4, r0]\n    mov r1, #6\n    str r1, [r5]\n    sub r0, r0, #4\n    str r2, [r4, r0]\n    ldr r0, _0224714C ; =0x0000047C\n    add r0, r4, r0\n    bl ov41_0224B518\n    b _0224712A\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r1, #0xd\n    str r1, [sp, #8]\n    add r1, r6, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0224712A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0224712A\n    add r0, r6, #0\n    str r0, [r5]\n    mov r0, #0x6b\n    mov r1, #0xa\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, _0224714C ; =0x0000047C\n    mov r6, #1\n    add r0, r4, r0\n    bl ov41_0224B518\n    add r0, r4, #0\n    bl ov41_0224726C\n    add r0, r6, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02247138: .word 0x00000568\n    _0224713C: .word gSystem\n    _02247140: .word gSystem + 0x40\n    _02247144: .word 0x00000498\n    _02247148: .word 0x000006B4\n    _0224714C: .word 0x0000047C"
    );
    #endif
}

void ov41_02247150(void) {
    /* Original at 0x02247150 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    add r5, r0, #0\n    mov r0, #0x1b\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _02247182\n    ldr r0, [r5, #0x10]\n    mov r1, #8\n    bl GameStats_AddScore\n    mov r1, #0xfd\n    lsl r1, r1, #2\n    ldr r0, [r5, #4]\n    ldr r2, [r5, #0x14]\n    add r1, r4, r1\n    bl ov41_022479A8\n    ldr r0, [r5, #0x18]\n    cmp r0, #0\n    beq _0224719C\n    mov r1, #0x1b\n    lsl r1, r1, #6\n    ldr r1, [r4, r1]\n    cmp r1, #1\n    bne _02247198\n    mov r1, #1\n    str r1, [r0]\n    b _0224719C\n    mov r1, #0\n    str r1, [r0]\n    ldr r0, [r5, #0x20]\n    cmp r0, #0\n    beq _022471AA\n    ldr r1, _02247230 ; =0x000006EC\n    ldr r1, [r4, r1]\n    bl MenuInputStateMgr_SetState\n    ldr r0, _02247234 ; =0x000006B8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _02247238 ; =0x000006BC\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl WindowArray_Delete\n    add r0, r4, #0\n    bl ov41_022476A8\n    ldr r0, _0224723C ; =0x00000498\n    add r0, r4, r0\n    bl ov41_02248F6C\n    add r0, r4, #0\n    bl ov41_02247568\n    add r0, r4, #0\n    bl ov41_022474C4\n    add r0, r4, #0\n    bl ov41_02247310\n    add r0, r4, #0\n    bl ov41_022473F0\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov41_02245ECC\n    mov r0, #0xd9\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    sub r0, #8\n    add r0, r4, r0\n    bl ov41_022499DC\n    add r0, r4, #0\n    bl ov41_02247274\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl sub_02021238\n    cmp r0, #1\n    beq _0224721A\n    bl GF_AssertFail\n    add r0, r6, #0\n    bl OverlayManager_FreeData\n    mov r0, #0xd\n    bl Heap_Destroy\n    mov r0, #0xe\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _02247230: .word 0x000006EC\n    _02247234: .word 0x000006B8\n    _02247238: .word 0x000006BC\n    _0224723C: .word 0x00000498"
    );
    #endif
}

void ov41_02247240(void) {
    ov41_02246130();
    ov41_02246170(r4);
    ov41_022463B0(r4);
    ov41_02246250(r4);
    ov41_022463D4();
}

void ov41_0224726C(void) {
    ov41_0224621C();
}

void ov41_02247274(void) {
    ov41_0224626C();
    ov41_022461D0(r4);
    ov41_02246150();
}

void ov41_02247288(void) {
    /* Original at 0x02247288 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #4]\n    mov r1, #0xd9\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x10]\n    lsl r1, r1, #2\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x30]\n    add r6, r3, #0\n    str r0, [sp, #0x1c]\n    ldr r0, [r5, #0x20]\n    str r0, [sp, #0x20]\n    ldr r0, [r5, #0x40]\n    str r2, [sp, #0x30]\n    str r0, [sp, #0x24]\n    ldr r0, [r5, r1]\n    str r0, [sp, #0x28]\n    add r0, r1, #0\n    sub r0, #8\n    add r0, r5, r0\n    add r1, #0x90\n    str r0, [sp, #0x2c]\n    add r0, r5, r1\n    add r1, sp, #0x10\n    bl ov41_02247F3C\n    cmp r6, #0\n    add r2, sp, #0\n    bne _022472DC\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r3, #0xe\n    bl ov41_02247FE0\n    b _022472EA\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r3, #0xe\n    bl ov41_02247FFC\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov41_022495C8\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov41_02248158\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    mov r2, #0xe\n    bl ov41_0224825C\n    add sp, #0x34\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02247310(void) {
    /* Original at 0x02247310 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov41_022482A8\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov41_022480E0\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov41_02247F90\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02247334(void) {
    /* Original at 0x02247334 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    ldr r0, [r5]\n    str r0, [sp]\n    ldr r0, [r5, #4]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x10]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x30]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x40]\n    str r0, [sp, #0x10]\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    str r0, [sp, #0x28]\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    str r1, [sp, #0x14]\n    add r1, r0, #0\n    sub r1, #8\n    add r1, r5, r1\n    str r1, [sp, #0x18]\n    mov r1, #0xe\n    str r1, [sp, #0x1c]\n    mov r1, #2\n    str r1, [sp, #0x20]\n    mov r1, #1\n    add r0, r0, #4\n    str r1, [sp, #0x24]\n    add r0, r5, r0\n    add r1, sp, #0\n    bl ov41_02248488\n    mov r0, #0xda\n    lsl r0, r0, #2\n    mov r1, #0\n    add r0, r5, r0\n    add r2, r1, #0\n    bl ov41_022487F8\n    mov r6, #0\n    mov r0, #0x61\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r6, #0\n    bl ov41_02248ED4\n    add r7, r0, #0\n    mov r4, #0\n    cmp r7, #0\n    ble _022473B4\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    add r2, r6, #0\n    bl ov41_022485DC\n    add r4, r4, #1\n    cmp r4, r7\n    blt _022473A0\n    add r6, r6, #1\n    cmp r6, #0x64\n    blt _0224738C\n    mov r7, #0xda\n    mov r6, #0x61\n    mov r4, #0\n    lsl r7, r7, #2\n    lsl r6, r6, #2\n    add r0, r5, r6\n    add r1, r4, #0\n    bl ov41_02248EE8\n    add r2, r0, #0\n    cmp r2, #0x12\n    bge _022473DA\n    add r0, r5, r7\n    mov r1, #1\n    bl ov41_022485DC\n    add r4, r4, #1\n    cmp r4, #0x12\n    blt _022473C4\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov41_02248724\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_022473F0(void) {
    /* Original at 0x022473F0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov41_02248940\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov41_022486F8\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov41_022484C0\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02247414(void) {
    /* Original at 0x02247414 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _02247474 ; =0x04000008\n    mov r2, #3\n    ldrh r3, [r0]\n    mov r1, #1\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r1, [r0, #2]\n    bic r1, r2\n    strh r1, [r0, #2]\n    ldrh r3, [r0, #4]\n    mov r1, #2\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r0, #4]\n    ldrh r3, [r0, #6]\n    mov r1, #3\n    bic r3, r2\n    add r2, r3, #0\n    orr r2, r1\n    strh r2, [r0, #6]\n    add r3, r1, #0\n    ldr r0, [r4, #0x40]\n    add r2, r1, #0\n    sub r3, #0x13\n    bl BgSetPosTextAndCommit\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    bl ov41_0224888C\n    mov r1, #0\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r2, #2\n    add r3, r1, #0\n    str r1, [sp]\n    bl ov41_022488D8\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02247474: .word 0x04000008"
    );
    #endif
}

void ov41_02247478(void) {
    ov41_02246494();
}

void ov41_02247480(void) {
    /* Original at 0x02247480 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x30\n    ldr r2, [r0, #0x40]\n    str r2, [sp]\n    mov r2, #0x1a\n    str r2, [sp, #4]\n    lsl r2, r1, #1\n    add r1, r2, #0\n    add r1, #0x79\n    str r1, [sp, #8]\n    mov r1, #0x85\n    str r1, [sp, #0xc]\n    mov r1, #1\n    add r2, #0x7a\n    str r2, [sp, #0x10]\n    mov r2, #0\n    str r1, [sp, #0x1c]\n    str r1, [sp, #0x20]\n    mov r1, #2\n    str r1, [sp, #0x24]\n    mov r1, #0xe\n    str r1, [sp, #0x2c]\n    ldr r1, _022474C0 ; =0x000004B4\n    str r2, [sp, #0x14]\n    add r0, r0, r1\n    add r1, sp, #0\n    str r2, [sp, #0x18]\n    str r2, [sp, #0x28]\n    bl ov41_02249C7C\n    add sp, #0x30\n    pop {r3, pc}\n    _022474C0: .word 0x000004B4"
    );
    #endif
}

void ov41_022474C4(void) {
    /* Original at 0x022474C4 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _022474CC ; =0x000004B4\n    ldr r3, _022474D0 ; =ov41_02249CC4\n    add r0, r0, r1\n    bx r3\n    _022474CC: .word 0x000004B4\n    _022474D0: .word ov41_02249CC4"
    );
    #endif
}

void ov41_022474D4(void) {
    /* Original at 0x022474D4 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0x4e\n    ldr r2, _02247550 ; =0x000006EC\n    lsl r0, r0, #4\n    add r0, r4, r0\n    add r1, r4, #0\n    add r2, r4, r2\n    bl ov41_0224A27C\n    mov r0, #0x4e\n    lsl r0, r0, #4\n    mov r1, #0\n    ldr r2, _02247554 ; =ov41_022475B4\n    add r0, r4, r0\n    add r3, r4, #0\n    str r1, [sp]\n    bl ov41_0224A5D4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x4e\n    lsl r0, r0, #4\n    ldr r2, _02247558 ; =ov41_022475D4\n    add r0, r4, r0\n    mov r1, #1\n    add r3, r4, #0\n    bl ov41_0224A5D4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x4e\n    lsl r0, r0, #4\n    ldr r2, _0224755C ; =ov41_022475F4\n    add r0, r4, r0\n    mov r1, #2\n    add r3, r4, #0\n    bl ov41_0224A5D4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x4e\n    lsl r0, r0, #4\n    ldr r2, _02247560 ; =ov41_02247628\n    add r0, r4, r0\n    mov r1, #3\n    add r3, r4, #0\n    bl ov41_0224A5D4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x4e\n    lsl r0, r0, #4\n    ldr r2, _02247564 ; =ov41_02247598\n    add r0, r4, r0\n    mov r1, #4\n    add r3, r4, #0\n    bl ov41_0224A5D4\n    add sp, #4\n    pop {r3, r4, pc}\n    _02247550: .word 0x000006EC\n    _02247554: .word ov41_022475B4\n    _02247558: .word ov41_022475D4\n    _0224755C: .word ov41_022475F4\n    _02247560: .word ov41_02247628\n    _02247564: .word ov41_02247598"
    );
    #endif
}

void ov41_02247568(void) {
    /* Original at 0x02247568 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    mov r0, #0x4e\n    lsl r0, r0, #4\n    ldr r3, _02247574 ; =ov41_0224A3E4\n    add r0, r1, r0\n    bx r3\n    _02247574: .word ov41_0224A3E4"
    );
    #endif
}

void ov41_02247578(void) {
    /* Original at 0x02247578 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x4e\n    lsl r1, r1, #4\n    ldr r3, _02247584 ; =ov41_0224A54C\n    add r0, r0, r1\n    bx r3\n    nop\n    _02247584: .word ov41_0224A54C"
    );
    #endif
}

void ov41_02247588(void) {
    /* Original at 0x02247588 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x4e\n    lsl r1, r1, #4\n    ldr r3, _02247594 ; =ov41_0224A580\n    add r0, r0, r1\n    bx r3\n    nop\n    _02247594: .word ov41_0224A580"
    );
    #endif
}

void ov41_02247598(void) {
    ov41_02248998(0x6b, 0xda, 3);
}

void ov41_022475B4(void) {
    /* Original at 0x022475B4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0xda\n    add r4, r1, #0\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov41_0224894C\n    add r1, r0, #0\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r2, #0\n    bl ov41_02248790\n    pop {r4, pc}"
    );
    #endif
}

void ov41_022475D4(void) {
    /* Original at 0x022475D4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0xda\n    add r4, r1, #0\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov41_0224894C\n    add r1, r0, #0\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r2, #1\n    bl ov41_02248790\n    pop {r4, pc}"
    );
    #endif
}

void ov41_022475F4(void) {
    /* Original at 0x022475F4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0x6b\n    add r4, r1, #0\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02247624\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    bl ov41_0224895C\n    add r2, r0, #0\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    bl ov41_022487F8\n    mov r0, #0x6b\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02247628(void) {
    /* Original at 0x02247628 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0x6b\n    add r4, r1, #0\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    beq _02247658\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #1\n    bl ov41_0224895C\n    add r2, r0, #0\n    mov r0, #0xda\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #1\n    bl ov41_022487F8\n    mov r0, #0x6b\n    mov r1, #1\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224765C(void) {
    /* Original at 0x0224765C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x28\n    add r4, r0, #0\n    add r2, sp, #0\n    mov r0, #0\n    add r3, r1, #0\n    add r5, r2, #0\n    add r1, r0, #0\n    stmia r5!, {r0, r1}\n    stmia r5!, {r0, r1}\n    stmia r5!, {r0, r1}\n    stmia r5!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldr r0, [r4, #0x40]\n    add r1, r2, #0\n    str r0, [sp]\n    ldr r0, [r4, #0x44]\n    mov r2, #0xf\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r0, #0x48\n    str r0, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0x10]\n    mov r0, #6\n    str r3, [sp, #0xc]\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    str r0, [sp, #0x24]\n    ldr r0, _022476A4 ; =0x00000568\n    add r0, r4, r0\n    bl ov41_0224AA08\n    add sp, #0x28\n    pop {r3, r4, r5, pc}\n    nop\n    _022476A4: .word 0x00000568"
    );
    #endif
}

void ov41_022476A8(void) {
    /* Original at 0x022476A8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _022476B0 ; =0x00000568\n    ldr r3, _022476B4 ; =ov41_0224AB40\n    add r0, r0, r1\n    bx r3\n    _022476B0: .word 0x00000568\n    _022476B4: .word ov41_0224AB40"
    );
    #endif
}

void ov41_022476B8(void) {
    /* Original at 0x022476B8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, _022476DC ; =ov41_022476E0\n    mov r1, #0x10\n    mov r2, #0xa\n    mov r3, #0xd\n    bl CreateSysTaskAndEnvironment\n    bl SysTask_GetData\n    str r5, [r0]\n    str r4, [r0, #4]\n    mov r1, #0\n    str r1, [r0, #8]\n    str r1, [r0, #0xc]\n    pop {r3, r4, r5, pc}\n    nop\n    _022476DC: .word ov41_022476E0"
    );
    #endif
}

void ov41_022476E0(void) {
    /* Original at 0x022476E0 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r1, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #9\n    bls _022476EE\n    b _02247822\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022476FA: ; jump table\n    mov r0, #0xda\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #3\n    mov r2, #0\n    bl ov41_02248750\n    cmp r0, #0\n    bne _02247726\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r0, #0xda\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    bl ov41_02248998\n    cmp r0, #0\n    beq _02247822\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #8\n    add r1, r0, #0\n    sub r1, #0x18\n    mov r2, #0\n    mov r3, #0xa\n    bl StartBrightnessTransition\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r0, #1\n    bl IsBrightnessTransitionActive\n    cmp r0, #0\n    beq _02247822\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r0, #0x4e\n    ldr r1, [r4]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    mov r2, #8\n    bl ov41_0224A5A4\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #8\n    blt _02247822\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r1, #7\n    add r0, r4, #0\n    mvn r1, r1\n    mov r2, #5\n    mov r3, #8\n    bl ov41_02247A48\n    cmp r0, #0\n    beq _02247822\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    ldr r0, [r4]\n    mov r1, #1\n    bl ov41_02247480\n    ldr r0, [r4]\n    mov r1, #1\n    ldr r0, [r0, #0x40]\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r4]\n    bl ov41_02247AB4\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r1, #0\n    mov r0, #1\n    add r2, r1, #0\n    str r0, [sp]\n    mov r0, #8\n    sub r2, #0x10\n    mov r3, #0xa\n    bl StartBrightnessTransition\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r0, #1\n    bl IsBrightnessTransitionActive\n    cmp r0, #0\n    beq _02247822\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    ldr r1, [r4, #4]\n    mov r2, #1\n    str r2, [r1]\n    bl DestroySysTaskAndEnvironment\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov41_02247828(void) {
    /* Original at 0x02247828 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, _0224784C ; =ov41_02247850\n    mov r1, #0x10\n    mov r2, #0xa\n    mov r3, #0xd\n    bl CreateSysTaskAndEnvironment\n    bl SysTask_GetData\n    str r5, [r0]\n    str r4, [r0, #4]\n    mov r1, #0\n    str r1, [r0, #8]\n    str r1, [r0, #0xc]\n    pop {r3, r4, r5, pc}\n    nop\n    _0224784C: .word ov41_02247850"
    );
    #endif
}

void ov41_02247850(void) {
    /* Original at 0x02247850 */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r1, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #9\n    bls _0224785E\n    b _022479A2\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224786A: ; jump table\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #8\n    add r1, r0, #0\n    sub r1, #0x18\n    mov r2, #0\n    mov r3, #0xa\n    bl StartBrightnessTransition\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r0, #1\n    bl IsBrightnessTransitionActive\n    cmp r0, #0\n    beq _022479A2\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    ldr r0, [r4]\n    bl ov41_02247B5C\n    ldr r0, [r4]\n    bl ov41_02247414\n    ldr r0, [r4]\n    bl ov41_02247588\n    ldr r0, [r4]\n    mov r1, #0\n    bl ov41_02247480\n    ldr r0, [r4]\n    mov r2, #3\n    add r3, r2, #0\n    ldr r0, [r0, #0x40]\n    mov r1, #1\n    sub r3, #0x2b\n    bl ScheduleSetBgPosText\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r1, #8\n    add r2, r1, #0\n    add r0, r4, #0\n    sub r2, #0xd\n    add r3, r1, #0\n    bl ov41_02247A48\n    cmp r0, #0\n    beq _022479A2\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r0, #0x4e\n    ldr r1, [r4]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    add r2, r1, #0\n    sub r2, #8\n    bl ov41_0224A5A4\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #8\n    blt _022479A2\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r1, #0\n    mov r0, #1\n    add r2, r1, #0\n    str r0, [sp]\n    mov r0, #8\n    sub r2, #0x10\n    mov r3, #0xa\n    bl StartBrightnessTransition\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r0, #1\n    bl IsBrightnessTransitionActive\n    cmp r0, #0\n    beq _022479A2\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r0, #0xda\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #0\n    add r2, r1, #0\n    bl ov41_02248750\n    cmp r0, #0\n    bne _02247974\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    mov r0, #0xda\n    ldr r1, [r4]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    bl ov41_02248998\n    cmp r0, #0\n    beq _022479A2\n    ldr r0, [r4, #0xc]\n    add sp, #4\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, pc}\n    ldr r1, [r4, #4]\n    mov r2, #1\n    str r2, [r1]\n    bl DestroySysTaskAndEnvironment\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov41_022479A8(void) {
    /* Original at 0x022479A8 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r1, [sp]\n    add r6, r0, #0\n    add r4, r2, #0\n    bl sub_0202BC60\n    ldr r1, [sp]\n    ldr r2, [sp]\n    add r1, #0x84\n    ldr r1, [r1]\n    add r0, r6, #0\n    add r2, #0x78\n    bl sub_0202BC88\n    cmp r4, #0\n    beq _022479E8\n    add r0, r4, #0\n    mov r1, #0xd\n    bl PlayerProfile_GetPlayerName_NewString\n    add r5, r0, #0\n    add r0, r4, #0\n    bl PlayerProfile_GetTrainerGender\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_0202BDC8\n    add r0, r5, #0\n    bl String_Delete\n    ldr r0, [sp]\n    mov r5, #0\n    add r7, r0, #0\n    ldr r4, [r0, #0x1c]\n    add r7, #0x14\n    cmp r4, r7\n    beq _02247A0E\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _02247A08\n    ldr r1, [r4]\n    add r0, r6, #0\n    add r2, r5, #0\n    bl sub_0202BCAC\n    add r5, r5, #1\n    ldr r4, [r4, #8]\n    cmp r4, r7\n    bne _022479F6\n    ldr r0, [sp]\n    ldr r4, [r0, #0xc]\n    add r7, r0, #4\n    cmp r4, r7\n    beq _02247A30\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _02247A2A\n    ldr r1, [r4]\n    add r0, r6, #0\n    add r2, r5, #0\n    bl sub_0202BCAC\n    add r5, r5, #1\n    ldr r4, [r4, #8]\n    cmp r4, r7\n    bne _02247A18\n    ldr r1, [sp]\n    add r0, r6, #0\n    ldr r1, [r1, #0x74]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl sub_0202BD60\n    add r0, r6, #0\n    bl sub_0202BC38\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02247A48(void) {
    /* Original at 0x02247A48 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r0, #8\n    bge _02247A64\n    mov r0, #0xfd\n    ldr r3, [r5]\n    lsl r0, r0, #2\n    add r0, r3, r0\n    bl ov41_022480F8\n    ldr r0, [r5, #8]\n    cmp r0, #1\n    blt _02247AA2\n    ldr r0, [r5]\n    mov r1, #2\n    ldr r0, [r0, #0x40]\n    add r2, r1, #0\n    add r3, r4, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r5]\n    mov r1, #1\n    ldr r0, [r0, #0x40]\n    mov r2, #2\n    add r3, r4, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r5]\n    mov r1, #2\n    ldr r0, [r0, #0x40]\n    mov r2, #5\n    add r3, r6, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r5]\n    mov r1, #1\n    ldr r0, [r0, #0x40]\n    mov r2, #5\n    add r3, r6, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r5, #8]\n    add r0, r0, #1\n    str r0, [r5, #8]\n    cmp r0, r7\n    ble _02247AB0\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02247AB4(void) {
    /* Original at 0x02247AB4 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, [r4, #0x40]\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    ldr r0, [r4, #0x40]\n    mov r1, #3\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    mov r1, #3\n    ldr r0, [r4, #0x40]\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    ldr r0, [r4, #0x40]\n    add r3, sp, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    mov r0, #0x19\n    strb r0, [r3, #0x10]\n    mov r0, #4\n    strb r0, [r3, #0x11]\n    ldrb r0, [r3, #0x12]\n    mov r1, #0xf\n    ldr r2, _02247B54 ; =0x000006EC\n    bic r0, r1\n    ldr r1, [r4, r2]\n    sub r2, #0x34\n    lsl r1, r1, #0x18\n    lsr r5, r1, #0x18\n    mov r1, #0xf\n    and r1, r5\n    orr r0, r1\n    strb r0, [r3, #0x12]\n    ldr r0, [r4, r2]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl ov41_02247D1C\n    ldr r0, _02247B58 ; =0x04000008\n    mov r2, #3\n    ldrh r3, [r0]\n    mov r1, #2\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r3, [r0, #2]\n    mov r1, #1\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r0, #2]\n    ldrh r3, [r0, #4]\n    mov r1, #3\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r0, #4]\n    ldrh r1, [r0, #6]\n    bic r1, r2\n    strh r1, [r0, #6]\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _02247B54: .word 0x000006EC\n    _02247B58: .word 0x04000008"
    );
    #endif
}

void ov41_02247B5C(void) {
    /* Original at 0x02247B5C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02247B78 ; =0x000006B8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    bl ov41_02247D3C\n    ldr r0, [r4, #0x40]\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    pop {r4, pc}\n    _02247B78: .word 0x000006B8"
    );
    #endif
}

void ov41_02247B7C(void) {
    /* Original at 0x02247B7C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02247BB0 ; =0x000006B8\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    add r4, r0, #0\n    beq _02247B96\n    cmp r4, #1\n    beq _02247B9A\n    cmp r4, #2\n    beq _02247B9E\n    b _02247BA0\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    mov r4, #8\n    b _02247BA0\n    mov r4, #9\n    ldr r0, _02247BB0 ; =0x000006B8\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_IsInTouchMode\n    ldr r1, _02247BB4 ; =0x000006EC\n    str r0, [r5, r1]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _02247BB0: .word 0x000006B8\n    _02247BB4: .word 0x000006EC"
    );
    #endif
}

void ov41_02247BB8(void) {
    /* Original at 0x02247BB8 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, _02247C70 ; =0x000006DC\n    str r1, [sp, #0x14]\n    ldr r0, [r5, r0]\n    add r7, r2, #0\n    add r4, r3, #0\n    bl Options_GetFrame\n    add r6, r0, #0\n    mov r0, #0\n    mov r1, #0xe0\n    mov r2, #0xe\n    bl LoadFontPal1\n    str r4, [sp]\n    add r0, sp, #0x20\n    ldrb r1, [r0, #0x10]\n    mov r2, #3\n    add r3, r7, #0\n    str r1, [sp, #4]\n    ldrb r0, [r0, #0x14]\n    ldr r1, _02247C74 ; =0x000006BC\n    str r0, [sp, #8]\n    mov r0, #7\n    str r0, [sp, #0xc]\n    mov r0, #0x5a\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x40]\n    ldr r1, [r5, r1]\n    bl AddWindowParameterized\n    ldr r0, _02247C74 ; =0x000006BC\n    mov r1, #0xf\n    ldr r0, [r5, r0]\n    bl FillWindowPixelBuffer\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xe\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x40]\n    mov r1, #3\n    mov r2, #0x3c\n    mov r3, #8\n    bl LoadUserFrameGfx2\n    ldr r0, _02247C74 ; =0x000006BC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r2, #0x3c\n    mov r3, #8\n    bl DrawFrameAndWindow2\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xd7\n    mov r3, #0xd\n    bl NewMsgDataFromNarc\n    ldr r1, [sp, #0x14]\n    add r6, r0, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02247C78 ; =0x0001020F\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02247C74 ; =0x000006BC\n    str r3, [sp, #0xc]\n    ldr r0, [r5, r0]\n    mov r1, #1\n    add r2, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl DestroyMsgData\n    ldr r0, _02247C74 ; =0x000006BC\n    ldr r0, [r5, r0]\n    bl CopyWindowToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02247C70: .word 0x000006DC\n    _02247C74: .word 0x000006BC\n    _02247C78: .word 0x0001020F"
    );
    #endif
}

void ov41_02247C7C(void) {
    /* Original at 0x02247C7C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _02247CF4 ; =0x000006BC\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xd7\n    mov r3, #0xd\n    bl NewMsgDataFromNarc\n    add r1, r4, #0\n    add r7, r0, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r0, #1\n    lsl r0, r0, #8\n    mov r1, #0xd\n    bl String_New\n    add r4, r0, #0\n    ldr r0, _02247CF8 ; =0x000006E8\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02247CFC ; =0x0001020F\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _02247CF4 ; =0x000006BC\n    str r3, [sp, #0xc]\n    ldr r0, [r5, r0]\n    mov r1, #1\n    add r2, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl DestroyMsgData\n    ldr r0, _02247CF4 ; =0x000006BC\n    ldr r0, [r5, r0]\n    bl CopyWindowToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02247CF4: .word 0x000006BC\n    _02247CF8: .word 0x000006E8\n    _02247CFC: .word 0x0001020F"
    );
    #endif
}

void ov41_02247D00(void) {
    /* Original at 0x02247D00 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02247D18 ; =0x000006BC\n    ldr r0, [r4, r0]\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _02247D18 ; =0x000006BC\n    ldr r0, [r4, r0]\n    bl RemoveWindow\n    pop {r4, pc}\n    nop\n    _02247D18: .word 0x000006BC"
    );
    #endif
}

void ov41_02247D1C(void) {
    ov41_02247BB8(0x1b, 2, 1);
}

void ov41_02247D34(void) {
    ov41_02247C7C();
}

void ov41_02247D3C(void) {
    ov41_02247D00();
}

void ov41_02247D44(void) {
    /* Original at 0x02247D44 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov41_022482B4\n    add r1, r0, #0\n    ldr r0, _02247D60 ; =0x00000568\n    add r0, r4, r0\n    bl ov41_0224AC98\n    pop {r4, pc}\n    nop\n    _02247D60: .word 0x00000568"
    );
    #endif
}

void ov41_02247D64(void) {
    /* Original at 0x02247D64 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    ldr r0, [r4, #0x40]\n    add r3, sp, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    mov r0, #0x19\n    strb r0, [r3, #0x10]\n    mov r0, #4\n    strb r0, [r3, #0x11]\n    ldrb r0, [r3, #0x12]\n    mov r1, #0xf\n    ldr r2, _02247DEC ; =0x000006EC\n    bic r0, r1\n    ldr r1, [r4, r2]\n    sub r2, #0x34\n    lsl r1, r1, #0x18\n    lsr r5, r1, #0x18\n    mov r1, #0xf\n    and r1, r5\n    orr r0, r1\n    strb r0, [r3, #0x12]\n    ldr r0, [r4, r2]\n    bl YesNoPrompt_Reset\n    ldr r0, _02247DF0 ; =0x000006B8\n    add r1, sp, #0\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_InitFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    bl ov41_02247D34\n    ldr r0, _02247DF4 ; =0x04000008\n    mov r2, #3\n    ldrh r3, [r0]\n    mov r1, #2\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r0]\n    ldrh r3, [r0, #2]\n    mov r1, #1\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r0, #2]\n    ldrh r3, [r0, #4]\n    mov r1, #3\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r0, #4]\n    ldrh r1, [r0, #6]\n    bic r1, r2\n    strh r1, [r0, #6]\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _02247DEC: .word 0x000006EC\n    _02247DF0: .word 0x000006B8\n    _02247DF4: .word 0x04000008"
    );
    #endif
}

void ov41_02247DF8(void) {
    /* Original at 0x02247DF8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02247E2C ; =0x000006B8\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    add r4, r0, #0\n    beq _02247E12\n    cmp r4, #1\n    beq _02247E16\n    cmp r4, #2\n    beq _02247E1A\n    b _02247E1C\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r4, #6\n    b _02247E1C\n    mov r4, #7\n    ldr r0, _02247E2C ; =0x000006B8\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_IsInTouchMode\n    ldr r1, _02247E30 ; =0x000006EC\n    str r0, [r5, r1]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _02247E2C: .word 0x000006B8\n    _02247E30: .word 0x000006EC"
    );
    #endif
}

void ov41_02247E34(void) {
    /* Original at 0x02247E34 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    str r1, [sp]\n    add r7, r2, #0\n    add r0, r3, #0\n    sub r0, r0, r7\n    mov r1, #3\n    str r3, [sp, #4]\n    ldr r4, [sp, #0x2c]\n    ldr r5, [sp, #0x30]\n    bl _u32_div_f\n    add r1, r7, r0\n    lsl r0, r0, #1\n    add r0, r7, r0\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    str r1, [sp, #0xc]\n    sub r0, r0, r6\n    mov r1, #3\n    bl _u32_div_f\n    add r2, r6, r0\n    lsl r0, r0, #1\n    ldr r1, [sp, #0x28]\n    add r0, r6, r0\n    cmp r1, #0xf\n    bhi _02247F36\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02247E7A: ; jump table\n    str r7, [r4]\n    add sp, #0x10\n    str r6, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    str r7, [r4]\n    add sp, #0x10\n    str r2, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    str r7, [r4]\n    add sp, #0x10\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    str r7, [r4]\n    add sp, #0x10\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0xc]\n    add sp, #0x10\n    str r0, [r4]\n    str r6, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0xc]\n    add sp, #0x10\n    str r0, [r4]\n    str r2, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0xc]\n    add sp, #0x10\n    str r1, [r4]\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0xc]\n    str r0, [r4]\n    ldr r0, [sp]\n    add sp, #0x10\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    add sp, #0x10\n    str r0, [r4]\n    str r6, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    add sp, #0x10\n    str r0, [r4]\n    str r2, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #8]\n    add sp, #0x10\n    str r1, [r4]\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    str r0, [r4]\n    ldr r0, [sp]\n    add sp, #0x10\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    add sp, #0x10\n    str r0, [r4]\n    str r6, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    add sp, #0x10\n    str r0, [r4]\n    str r2, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #4]\n    add sp, #0x10\n    str r1, [r4]\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    str r0, [r4]\n    ldr r0, [sp]\n    str r0, [r5]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02247F3C(void) {
    /* Original at 0x02247F3C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r1]\n    mov r2, #0\n    str r0, [r4, #0x2c]\n    ldr r0, [r1, #4]\n    str r0, [r4, #0x30]\n    ldr r0, [r1, #8]\n    str r0, [r4, #0x34]\n    ldr r0, [r1, #0xc]\n    str r0, [r4, #0x38]\n    ldr r0, [r1, #0x10]\n    str r0, [r4, #0x3c]\n    ldr r0, [r1, #0x14]\n    str r0, [r4, #0x40]\n    ldr r0, [r1, #0x18]\n    str r0, [r4, #0x44]\n    str r2, [r4, #0x74]\n    ldr r0, [r1, #0x1c]\n    str r0, [r4]\n    add r0, r4, #4\n    str r0, [r4, #0xc]\n    str r0, [r4, #0x10]\n    add r0, r4, #0\n    add r0, #0x14\n    str r0, [r4, #0x1c]\n    str r0, [r4, #0x20]\n    str r2, [r4, #0x24]\n    ldr r0, [r1, #0x20]\n    add r1, r4, #0\n    str r0, [r4, #0x28]\n    ldr r0, [r4]\n    add r1, #0x78\n    mov r2, #3\n    bl ov41_022499F0\n    add r4, #0x14\n    add r1, r4, #0\n    bl ov41_02249A50\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02247F90(void) {
    ov41_02248038();
    ov41_022480E0(r4);
    memset(r4, 0, 0x88);
}

void ov41_02247FAC(void) {
    /* Original at 0x02247FAC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, [sp, #0x20]\n    add r6, r1, #0\n    str r0, [sp]\n    add r5, r2, #0\n    add r0, r4, #0\n    add r7, r3, #0\n    ldr r1, [r4, #0x3c]\n    add r0, #0x78\n    add r2, r6, #0\n    add r3, r5, #0\n    bl ov41_022495F0\n    add r0, r4, #0\n    ldr r1, [sp, #0x1c]\n    add r0, #0x78\n    bl ov41_02249700\n    add r4, #0x78\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov41_0224971C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02247FE0(void) {
    ov41_022495F0();
}

void ov41_02247FFC(void) {
    ov41_02249604(1);
}

void ov41_02248020(void) {
    /* Original at 0x02248020 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0224802C ; =ov41_02249A50\n    add r2, r0, #0\n    add r0, r1, #0\n    ldr r1, [r2, #0x20]\n    bx r3\n    nop\n    _0224802C: .word ov41_02249A50"
    );
    #endif
}

void ov41_02248030(void) {
    ov41_02249A60();
}

void ov41_02248038(void) {
    ov41_022496E8();
}

void ov41_02248044(void) {
    /* Original at 0x02248044 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r4, r0, #0\n    ldr r5, [r4, #0x24]\n    ldr r0, [r4, #0x28]\n    cmp r5, r0\n    bge _0224809E\n    ldr r0, [r4, #0x44]\n    str r0, [sp]\n    ldr r0, [r4, #0x2c]\n    str r0, [sp, #4]\n    ldr r5, [r4, #0x30]\n    lsl r0, r1, #2\n    ldr r0, [r5, r0]\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0]\n    str r2, [sp, #0x10]\n    str r3, [sp, #0x14]\n    str r1, [sp, #0x18]\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x38]\n    ldrb r0, [r0, r1]\n    str r0, [sp, #0x1c]\n    add r0, sp, #0\n    bl ov41_02245EE0\n    ldr r1, [sp, #0x30]\n    add r5, r0, #0\n    bl ov41_02246014\n    ldr r0, [r4]\n    add r1, r5, #0\n    mov r2, #0\n    bl ov41_022499F0\n    add r1, r4, #4\n    bl ov41_02249A50\n    ldr r0, [r4, #0x24]\n    add sp, #0x20\n    add r0, r0, #1\n    str r0, [r4, #0x24]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #0x20\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_022480A4(void) {
    /* Original at 0x022480A4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r3, r2, #0\n    ldr r5, [r4, #0x24]\n    ldr r2, [r4, #0x28]\n    cmp r5, r2\n    bge _022480C2\n    mov r2, #1\n    bl ov41_02248324\n    ldr r0, [r4, #0x24]\n    add r0, r0, #1\n    str r0, [r4, #0x24]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_022480C8(void) {
    /* Original at 0x022480C8 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl ov41_02249A60\n    ldr r0, [r4, #0x24]\n    sub r0, r0, #1\n    str r0, [r4, #0x24]\n    bpl _022480DE\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void ov41_022480E0(void) {
    /* Original at 0x022480E0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r4, #4\n    bl ov41_02249A70\n    add r0, r4, #0\n    add r0, #0x14\n    bl ov41_02249A70\n    mov r0, #0\n    str r0, [r4, #0x24]\n    pop {r4, pc}"
    );
    #endif
}

void ov41_022480F8(void) {
    ov41_02249BE8();
    ov41_02249BE8(r5, r4, r6);
}

void ov41_02248114(void) {
    ov41_02249BE8();
}

void ov41_02248120(void) {
    /* Original at 0x02248120 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    neg r4, r2\n    neg r7, r1\n    add r0, r5, #4\n    add r1, r7, #0\n    add r2, r4, #0\n    add r6, r3, #0\n    bl ov41_02249BE8\n    ldr r2, [sp, #0x18]\n    add r0, r5, #4\n    add r1, r6, #0\n    bl ov41_02249BE8\n    add r0, r5, #0\n    add r0, #0x14\n    add r1, r7, #0\n    add r2, r4, #0\n    bl ov41_02249BE8\n    add r5, #0x14\n    ldr r2, [sp, #0x18]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov41_02249BE8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02248158(void) {
    ov41_02248164();
}

void ov41_02248164(void) {
    /* Original at 0x02248164 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r6, r7, #0\n    ldr r4, [r7, #0x1c]\n    add r6, #0x14\n    add r5, r1, #0\n    cmp r4, r6\n    beq _02248192\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    ldr r0, [r4]\n    bne _02248184\n    add r1, r5, #0\n    bl ov41_02246014\n    b _0224818A\n    add r1, r5, #0\n    bl ov41_02249700\n    ldr r4, [r4, #8]\n    sub r5, r5, #1\n    cmp r4, r6\n    bne _02248174\n    ldr r4, [r7, #0xc]\n    add r6, r7, #4\n    sub r5, #8\n    cmp r4, r6\n    beq _022481BA\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    ldr r0, [r4]\n    bne _022481AC\n    add r1, r5, #0\n    bl ov41_02246014\n    b _022481B2\n    add r1, r5, #0\n    bl ov41_02249700\n    ldr r4, [r4, #8]\n    sub r5, r5, #1\n    cmp r4, r6\n    bne _0224819C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_022481BC(void) {
    TouchscreenHitbox_TouchHeldIsIn(0x12, 0x8a, 0x8f, 0xf6);
}

void ov41_022481D8(void) {
    TouchscreenHitbox_PointIsIn(0x12, 0x8a, 0x8f, 0xf6);
}

void ov41_022481F4(void) {
    /* Original at 0x022481F4 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r5, [r0, #0x1c]\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, #0x14\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    str r0, [sp, #4]\n    cmp r5, r0\n    beq _0224822A\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov41_02249AA8\n    cmp r0, #1\n    bne _02248222\n    add sp, #0xc\n    add r0, r5, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r5, [r5, #8]\n    ldr r0, [sp, #4]\n    cmp r5, r0\n    bne _0224820C\n    ldr r0, [sp]\n    ldr r5, [r0, #0xc]\n    add r0, r0, #4\n    str r0, [sp, #8]\n    cmp r5, r0\n    beq _02248254\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov41_02249AA8\n    cmp r0, #1\n    bne _0224824C\n    add sp, #0xc\n    add r0, r5, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r5, [r5, #8]\n    ldr r0, [sp, #8]\n    cmp r5, r0\n    bne _02248236\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224825C(void) {
    /* Original at 0x0224825C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    ldr r0, [r5, #0x40]\n    add r4, r1, #0\n    str r0, [sp]\n    mov r0, #0x1a\n    lsl r1, r4, #2\n    str r0, [sp, #4]\n    add r0, r1, #0\n    add r0, #0x86\n    str r0, [sp, #8]\n    add r0, r1, #0\n    add r0, #0x87\n    str r0, [sp, #0xc]\n    mov r0, #0x88\n    str r0, [sp, #0x14]\n    mov r0, #0x10\n    str r0, [sp, #0x18]\n    mov r0, #2\n    str r0, [sp, #0x1c]\n    mov r0, #1\n    str r0, [sp, #0x20]\n    mov r0, #0xd\n    str r0, [sp, #0x24]\n    mov r0, #0\n    add r1, #0x88\n    str r0, [sp, #0x28]\n    add r0, r5, #0\n    str r1, [sp, #0x10]\n    add r0, #0x48\n    add r1, sp, #0\n    str r2, [sp, #0x2c]\n    bl ov41_02249C7C\n    str r4, [r5, #0x74]\n    add sp, #0x30\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_022482A8(void) {
    ov41_02249CC4();
}

void ov41_022482B4(void) {
    /* Original at 0x022482B4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x24]\n    bx lr"
    );
    #endif
}

void ov41_022482B8(void) {
    /* Original at 0x022482B8 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r0, #0\n    ldr r6, [r7, #0x1c]\n    mov r4, #0\n    add r7, #0x14\n    str r1, [sp]\n    str r2, [sp, #4]\n    add r5, r4, #0\n    cmp r6, r7\n    beq _02248316\n    add r0, r6, #0\n    add r1, sp, #0xc\n    add r2, sp, #8\n    bl ov41_02248400\n    cmp r4, #0\n    bge _022482E0\n    neg r1, r4\n    b _022482E2\n    add r1, r4, #0\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    bge _022482EC\n    neg r2, r0\n    b _022482EE\n    add r2, r0, #0\n    cmp r2, r1\n    ble _022482F4\n    add r4, r0, #0\n    cmp r5, #0\n    bge _022482FC\n    neg r1, r5\n    b _022482FE\n    add r1, r5, #0\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bge _02248308\n    neg r2, r0\n    b _0224830A\n    add r2, r0, #0\n    cmp r2, r1\n    ble _02248310\n    add r5, r0, #0\n    ldr r6, [r6, #8]\n    cmp r6, r7\n    bne _022482CE\n    ldr r0, [sp]\n    str r4, [r0]\n    ldr r0, [sp, #4]\n    str r5, [r0]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02248324(void) {
    /* Original at 0x02248324 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x58\n    str r0, [sp, #0xc]\n    str r2, [sp, #0x14]\n    str r1, [sp, #0x10]\n    add r0, r1, #0\n    add r1, sp, #0x54\n    add r2, sp, #0x50\n    add r4, r3, #0\n    bl ov41_02249B44\n    ldr r0, [sp, #0x10]\n    add r1, sp, #0x4c\n    add r2, sp, #0x48\n    bl ov41_02249B94\n    add r0, sp, #0x30\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    add r1, sp, #0x44\n    add r2, sp, #0x34\n    add r3, sp, #0x40\n    bl ov41_02249BAC\n    mov r0, #0x76\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r5, #0\n    str r0, [sp, #0x20]\n    ldr r6, [sp, #0x54]\n    ldr r0, [sp, #0x4c]\n    ldr r7, [sp, #0x44]\n    add r1, r6, r0\n    ldr r0, [sp, #0x34]\n    add r4, r5, #0\n    sub r0, r1, r0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x50]\n    ldr r1, [sp, #0x48]\n    str r0, [sp, #0x24]\n    add r1, r0, r1\n    ldr r0, [sp, #0x30]\n    sub r0, r1, r0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x40]\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0xc]\n    str r0, [sp, #0x2c]\n    add r0, #0x78\n    str r0, [sp, #0x2c]\n    str r4, [sp]\n    add r0, sp, #0x3c\n    str r0, [sp, #4]\n    add r0, sp, #0x38\n    str r0, [sp, #8]\n    ldr r1, [sp, #0x24]\n    ldr r0, [sp, #0x28]\n    ldr r3, [sp, #0x1c]\n    add r0, r1, r0\n    ldr r1, [sp, #0x18]\n    add r2, r6, r7\n    bl ov41_02247E34\n    ldr r0, [sp, #0x2c]\n    ldr r1, [sp, #0x3c]\n    ldr r2, [sp, #0x38]\n    ldr r3, [sp, #0x20]\n    bl ov41_02249820\n    add r4, r4, #1\n    orr r5, r0\n    cmp r4, #0x10\n    blt _02248388\n    cmp r5, #0\n    beq _022483DE\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _022483D0\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r1, #0x14\n    str r1, [sp, #0xc]\n    bl ov41_02249A50\n    add sp, #0x58\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    ldr r1, [r1, #0x20]\n    bl ov41_02249A50\n    add sp, #0x58\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _022483F2\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r1, r1, #4\n    bl ov41_02249A50\n    add sp, #0x58\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    ldr r1, [r1, #0x10]\n    bl ov41_02249A50\n    add sp, #0x58\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02248400(void) {
    /* Original at 0x02248400 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x24\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r0, #0\n    add r1, sp, #0x20\n    add r2, sp, #0x1c\n    bl ov41_02249B94\n    add r0, r6, #0\n    add r1, sp, #0x18\n    add r2, sp, #0x14\n    bl ov41_02249B44\n    add r0, sp, #4\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, sp, #0x10\n    add r2, sp, #8\n    add r3, sp, #0xc\n    bl ov41_02249BAC\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x10]\n    ldr r3, [sp, #0xc]\n    add r2, r0, r1\n    mov r1, #0x8a\n    sub r2, r1, r2\n    ldr r1, [sp, #0x20]\n    add r1, r0, r1\n    ldr r0, [sp, #8]\n    sub r1, r1, r0\n    ldr r0, [sp, #0x14]\n    sub r1, #0xf6\n    add r6, r0, r3\n    mov r3, #0x12\n    sub r3, r3, r6\n    ldr r6, [sp, #0x1c]\n    add r6, r0, r6\n    ldr r0, [sp, #4]\n    sub r6, r6, r0\n    sub r6, #0x8f\n    cmp r2, #0\n    ble _0224845C\n    str r2, [r5]\n    b _0224846A\n    cmp r1, #0\n    ble _02248466\n    neg r0, r1\n    str r0, [r5]\n    b _0224846A\n    mov r0, #0\n    str r0, [r5]\n    cmp r3, #0\n    ble _02248474\n    add sp, #0x24\n    str r3, [r4]\n    pop {r3, r4, r5, r6, pc}\n    cmp r6, #0\n    ble _02248480\n    neg r0, r6\n    add sp, #0x24\n    str r0, [r4]\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    str r0, [r4]\n    add sp, #0x24\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02248488(void) {
    /* Original at 0x02248488 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    add r5, r0, #0\n    str r1, [r5, #0x44]\n    ldr r1, [r4, #4]\n    str r1, [r5, #0x48]\n    ldr r1, [r4, #8]\n    str r1, [r5, #0x4c]\n    ldr r1, [r4, #0xc]\n    str r1, [r5, #0x50]\n    ldr r1, [r4, #0x10]\n    str r1, [r5, #0x54]\n    ldr r1, [r4, #0x14]\n    str r1, [r5, #0x58]\n    ldr r1, [r4, #0x18]\n    str r1, [r5, #8]\n    ldr r1, [r4, #0x28]\n    str r1, [r5, #4]\n    mov r1, #0\n    bl ov41_0224888C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov41_022489A8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_022484C0(void) {
    /* Original at 0x022484C0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl ov41_022486F8\n    add r5, r6, #0\n    mov r4, #0\n    add r5, #0xc\n    add r0, r5, #0\n    bl ov41_02248A6C\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, #4\n    blt _022484CE\n    add r0, r6, #0\n    mov r1, #0\n    mov r2, #0x8c\n    bl memset\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_022484E8(void) {
    /* Original at 0x022484E8 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    beq _022484F8\n    cmp r0, #1\n    beq _02248568\n    cmp r0, #2\n    beq _02248576\n    pop {r3, pc}\n    cmp r1, #5\n    bgt _02248500\n    mov r0, #0\n    pop {r3, pc}\n    cmp r1, #0xb\n    bgt _02248508\n    mov r0, #1\n    pop {r3, pc}\n    cmp r1, #0x11\n    bgt _02248510\n    mov r0, #2\n    pop {r3, pc}\n    cmp r1, #0x15\n    bgt _02248518\n    mov r0, #3\n    pop {r3, pc}\n    cmp r1, #0x1c\n    bgt _02248520\n    mov r0, #4\n    pop {r3, pc}\n    cmp r1, #0x21\n    bgt _02248528\n    mov r0, #5\n    pop {r3, pc}\n    cmp r1, #0x26\n    bgt _02248530\n    mov r0, #6\n    pop {r3, pc}\n    cmp r1, #0x2a\n    bgt _02248538\n    mov r0, #7\n    pop {r3, pc}\n    cmp r1, #0x31\n    bgt _02248540\n    mov r0, #8\n    pop {r3, pc}\n    cmp r1, #0x37\n    bgt _02248548\n    mov r0, #9\n    pop {r3, pc}\n    cmp r1, #0x3c\n    bgt _02248550\n    mov r0, #0xa\n    pop {r3, pc}\n    cmp r1, #0x47\n    bgt _02248558\n    mov r0, #0xb\n    pop {r3, pc}\n    cmp r1, #0x5b\n    bgt _02248560\n    mov r0, #0xc\n    pop {r3, pc}\n    cmp r1, #0x63\n    bgt _02248582\n    mov r0, #0xd\n    pop {r3, pc}\n    add r0, r2, #0\n    bl ov41_02248EF4\n    mov r1, #9\n    bl _s32_div_f\n    pop {r3, pc}\n    add r0, r2, #0\n    bl ov41_02248EF4\n    mov r1, #9\n    bl _s32_div_f\n    pop {r3, pc}"
    );
    #endif
}

void ov41_02248584(void) {
    /* Original at 0x02248584 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r2, #0\n    add r4, r3, #0\n    cmp r0, #0\n    beq _02248598\n    cmp r0, #1\n    beq _022485CA\n    cmp r0, #2\n    beq _022485CA\n    pop {r3, r4, r5, pc}\n    mov r0, #0xa\n    str r0, [r5]\n    mov r0, #0x12\n    str r0, [r4]\n    bl MTRandom\n    ldr r2, [sp, #0x10]\n    mov r1, #0x6c\n    sub r1, r1, r2\n    bl _u32_div_f\n    ldr r0, [r5]\n    add r0, r0, r1\n    str r0, [r5]\n    bl MTRandom\n    ldr r2, [sp, #0x14]\n    mov r1, #0x7d\n    sub r1, r1, r2\n    bl _u32_div_f\n    ldr r0, [r4]\n    add r0, r0, r1\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldr r0, [sp, #0x18]\n    bl ov41_02248EF4\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov41_02248B48\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_022485DC(void) {
    /* Original at 0x022485DC */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x48\n    add r5, r0, #0\n    ldr r0, [r5, #0x58]\n    add r4, r2, #0\n    str r4, [sp, #0x40]\n    str r0, [sp, #0x28]\n    ldr r0, [r5, #0x44]\n    add r6, r1, #0\n    mov r1, #0\n    str r0, [sp, #0x2c]\n    str r1, [sp, #0x38]\n    str r1, [sp, #0x3c]\n    cmp r6, #0\n    beq _02248604\n    cmp r6, #1\n    beq _02248610\n    cmp r6, #2\n    beq _0224861E\n    b _0224862C\n    ldr r0, [r5, #0x50]\n    str r4, [sp, #0xc]\n    ldrb r0, [r0, r4]\n    add r7, r1, #0\n    str r0, [sp, #0x44]\n    b _02248630\n    add r0, r4, #0\n    str r0, [sp, #0xc]\n    add r0, #0x64\n    str r0, [sp, #0xc]\n    add r7, r4, #1\n    str r1, [sp, #0x44]\n    b _02248630\n    add r0, r4, #0\n    str r0, [sp, #0xc]\n    add r0, #0x64\n    str r0, [sp, #0xc]\n    add r7, r4, #1\n    str r1, [sp, #0x44]\n    b _02248630\n    bl GF_AssertFail\n    ldr r0, [sp, #0xc]\n    ldr r1, [r5, #0x48]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    lsl r1, r7, #2\n    str r0, [sp, #0x30]\n    ldr r2, [r5, #0x4c]\n    cmp r0, #0\n    ldr r1, [r2, r1]\n    str r1, [sp, #0x34]\n    bne _0224864A\n    bl GF_AssertFail\n    ldr r0, [sp, #0x34]\n    cmp r0, #0\n    bne _02248654\n    bl GF_AssertFail\n    ldr r2, [r5, #4]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov41_022484E8\n    add r7, r0, #0\n    add r0, sp, #0x28\n    bl ov41_02245EE0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #8]\n    ldr r1, [sp, #0x10]\n    add r2, r6, #0\n    bl ov41_022499F0\n    mov r1, #0xc\n    mul r1, r6\n    add r1, r5, r1\n    ldr r2, [r1, #0xc]\n    lsl r1, r7, #4\n    add r1, r2, r1\n    ldr r1, [r1, #0xc]\n    str r0, [sp, #0x14]\n    bl ov41_02249A50\n    ldr r0, [sp, #0x14]\n    add r1, sp, #0x1c\n    add r2, sp, #0x18\n    bl ov41_02249B94\n    ldr r0, [sp, #0x1c]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    add r2, sp, #0x24\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    add r3, sp, #0x20\n    str r0, [sp, #8]\n    add r0, r6, #0\n    bl ov41_02248584\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #0x20]\n    bl ov41_02249AF4\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov41_02248B20\n    add sp, #0x48\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_022486C4(void) {
    /* Original at 0x022486C4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    mov r1, #0xc\n    add r5, r0, #0\n    mul r1, r4\n    add r7, r3, #0\n    add r1, r5, r1\n    add r6, r2, #0\n    ldr r2, [r1, #0xc]\n    lsl r1, r6, #4\n    add r0, r7, #0\n    add r1, r2, r1\n    bl ov41_02249A50\n    ldr r1, [r7]\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ov41_02248B20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_022486F0(void) {
    ov41_02249A60();
}

void ov41_022486F8(void) {
    /* Original at 0x022486F8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r7, #0\n    ldr r0, [r5, #0x10]\n    mov r6, #0\n    cmp r0, #0\n    ble _0224871A\n    add r4, r6, #0\n    ldr r0, [r5, #0xc]\n    add r0, r0, r4\n    bl ov41_02249A70\n    ldr r0, [r5, #0x10]\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, r0\n    blt _02248708\n    add r7, r7, #1\n    add r5, #0xc\n    cmp r7, #3\n    blt _022486FE\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02248724(void) {
    /* Original at 0x02248724 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r5, #0\n    mvn r5, r5\n    bl ov41_02248A94\n    add r6, r0, #0\n    ldr r4, [r6, #8]\n    cmp r4, r6\n    beq _0224874C\n    ldr r0, [r4, #4]\n    cmp r0, #2\n    bhi _02248744\n    ldr r0, [r4]\n    add r1, r5, #0\n    bl ov41_02246014\n    ldr r4, [r4, #8]\n    sub r5, r5, #1\n    cmp r4, r6\n    bne _02248736\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02248750(void) {
    /* Original at 0x02248750 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r1, [r5, #0x3c]\n    add r4, r2, #0\n    cmp r1, #0\n    bne _02248788\n    ldr r1, [r5]\n    mov r2, #0xc\n    mul r2, r1\n    str r4, [sp]\n    add r2, r5, r2\n    ldr r2, [r2, #0x14]\n    add r3, r6, #0\n    bl ov41_02248B84\n    mov r0, #0xc\n    mul r0, r6\n    str r6, [r5]\n    add r0, r5, r0\n    str r4, [r0, #0x14]\n    add r0, r5, #0\n    bl ov41_02248724\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02248790(void) {
    /* Original at 0x02248790 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r1, [sp, #4]\n    str r0, [sp]\n    str r2, [sp, #8]\n    bl ov41_0224895C\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    mov r1, #0xc\n    mul r1, r0\n    ldr r0, [sp]\n    mov r4, #1\n    add r6, r0, r1\n    ldr r0, [r6, #0x10]\n    cmp r0, #1\n    ble _022487F2\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    bne _022487C4\n    ldr r1, [r6, #0x10]\n    add r0, r4, r7\n    bl _s32_div_f\n    add r5, r1, #0\n    b _022487CC\n    sub r5, r7, r4\n    bpl _022487CC\n    ldr r0, [r6, #0x10]\n    add r5, r5, r0\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    add r2, r5, #0\n    bl ov41_02248ABC\n    ldr r1, [r0, #8]\n    cmp r1, r0\n    beq _022487EA\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    add r2, r5, #0\n    bl ov41_02248750\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r6, #0x10]\n    add r4, r4, #1\n    cmp r4, r0\n    blt _022487B2\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_022487F8(void) {
    /* Original at 0x022487F8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    mov r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    bl ov41_02248A18\n    mov r0, #0xc\n    mul r0, r4\n    str r4, [r5]\n    add r0, r5, r0\n    str r6, [r0, #0x14]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov41_02248A18\n    add r0, r5, #0\n    bl ov41_02248724\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02248820(void) {
    TouchscreenHitbox_TouchHeldIsIn(0x12, 0x76, 0x8f, 0xa);
}

void ov41_0224883C(void) {
    TouchscreenHitbox_PointIsIn(0x12, 0x76, 0x8f, 0xa);
}

void ov41_02248858(void) {
    /* Original at 0x02248858 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp]\n    bl ov41_02248A94\n    add r5, r0, #0\n    ldr r4, [r5, #8]\n    cmp r4, r5\n    beq _02248886\n    ldr r3, [sp]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov41_02249AA8\n    cmp r0, #1\n    bne _02248880\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r4, [r4, #8]\n    cmp r4, r5\n    bne _0224886C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224888C(void) {
    /* Original at 0x0224888C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    ldr r0, [r5, #0x54]\n    add r4, r1, #0\n    str r0, [sp]\n    mov r0, #0x1a\n    lsl r1, r4, #1\n    str r0, [sp, #4]\n    add r0, r1, #0\n    add r0, #0x81\n    str r0, [sp, #8]\n    mov r0, #0x85\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x14]\n    mov r0, #0x81\n    str r0, [sp, #0x18]\n    mov r0, #3\n    str r0, [sp, #0x1c]\n    mov r0, #1\n    str r0, [sp, #0x20]\n    mov r0, #2\n    str r0, [sp, #0x24]\n    mov r0, #0\n    str r0, [sp, #0x28]\n    mov r0, #0xe\n    add r1, #0x82\n    str r0, [sp, #0x2c]\n    add r0, r5, #0\n    str r1, [sp, #0x10]\n    add r0, #0x5c\n    add r1, sp, #0\n    bl ov41_02249C7C\n    str r4, [r5, #0x40]\n    add sp, #0x30\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_022488D8(void) {
    /* Original at 0x022488D8 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    ldr r0, [r5, #0x54]\n    add r4, r1, #0\n    str r0, [sp, #8]\n    mov r0, #0x1a\n    lsl r1, r4, #1\n    str r0, [sp, #0xc]\n    add r0, r1, #0\n    add r0, #0x81\n    str r0, [sp, #0x10]\n    mov r0, #0x85\n    str r0, [sp, #0x14]\n    mov r0, #8\n    add r1, #0x82\n    str r0, [sp, #0x1c]\n    mov r0, #0x81\n    str r1, [sp, #0x18]\n    str r0, [sp, #0x20]\n    mov r0, #3\n    mov r1, #2\n    str r0, [sp, #0x24]\n    mov r0, #1\n    str r1, [sp, #0x2c]\n    mov r7, #0\n    mov r1, #0xe\n    str r0, [sp, #0x28]\n    str r7, [sp, #0x30]\n    str r1, [sp, #0x34]\n    tst r0, r2\n    beq _0224891A\n    mov r7, #0x70\n    mov r0, #2\n    tst r0, r2\n    beq _02248924\n    mov r6, #0x81\n    b _02248926\n    mov r6, #0\n    ldr r0, [sp, #0x50]\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x5c\n    add r1, sp, #8\n    add r2, r7, #0\n    add r3, r6, #0\n    bl ov41_02249DB4\n    str r4, [r5, #0x40]\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02248940(void) {
    ov41_02249CC4();
}

void ov41_0224894C(void) {
    GF_AssertFail();
}

void ov41_0224895C(void) {
    /* Original at 0x0224895C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r5, #0\n    bne _0224896C\n    bl GF_AssertFail\n    mov r0, #0xc\n    mul r0, r4\n    add r3, r5, r0\n    add r3, #0xc\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [sp, #8]\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov41_02248984(void) {
    /* Original at 0x02248984 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r3, #0\n    bl ov41_02248ABC\n    ldr r2, [sp, #8]\n    add r1, r4, #0\n    bl ov41_02249BE8\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02248998(void) {
    /* Original at 0x02248998 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x3c]\n    cmp r0, #0\n    bne _022489A2\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov41_022489A8(void) {
    /* Original at 0x022489A8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #0x1c]\n    add r5, r0, #0\n    add r0, #0xc\n    bl ov41_02248A28\n    mov r0, #0\n    str r0, [r5]\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    bl ov41_022489E4\n    add r0, r5, #0\n    ldr r1, [r4, #0x20]\n    add r0, #0x18\n    bl ov41_02248A28\n    add r0, r5, #0\n    ldr r1, [r4, #0x24]\n    add r0, #0x24\n    bl ov41_02248A28\n    add r5, #0x30\n    add r0, r5, #0\n    mov r1, #1\n    bl ov41_02248A28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_022489E4(void) {
    /* Original at 0x022489E4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #8]\n    add r6, r1, #0\n    cmp r4, r5\n    beq _02248A04\n    ldr r0, [r4, #4]\n    cmp r0, #2\n    bhi _022489FE\n    ldr r0, [r4]\n    add r1, r6, #0\n    bl ov41_02246008\n    ldr r4, [r4, #8]\n    cmp r4, r5\n    bne _022489F0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02248A08(void) {
    ov41_02248ABC();
    ov41_022489E4(r4);
}

void ov41_02248A18(void) {
    ov41_02248A94();
    ov41_022489E4(r4);
}

void ov41_02248A28(void) {
    /* Original at 0x02248A28 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r0, #0xe\n    lsl r1, r4, #4\n    bl Heap_Alloc\n    str r0, [r5]\n    str r4, [r5, #4]\n    mov r6, #0\n    str r6, [r5, #8]\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    ble _02248A68\n    add r4, r6, #0\n    add r7, r6, #0\n    ldr r0, [r5]\n    add r1, r7, #0\n    add r0, r0, r4\n    str r0, [r0, #8]\n    ldr r0, [r5]\n    add r0, r0, r4\n    str r0, [r0, #0xc]\n    ldr r0, [r5]\n    add r0, r0, r4\n    bl ov41_022489E4\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, r0\n    blt _02248A48\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02248A6C(void) {
    /* Original at 0x02248A6C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4]\n    strb r0, [r4]\n    strb r0, [r4, #1]\n    strb r0, [r4, #2]\n    strb r0, [r4, #3]\n    strb r0, [r4, #4]\n    strb r0, [r4, #5]\n    strb r0, [r4, #6]\n    strb r0, [r4, #7]\n    strb r0, [r4, #8]\n    strb r0, [r4, #9]\n    strb r0, [r4, #0xa]\n    strb r0, [r4, #0xb]\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02248A94(void) {
    /* Original at 0x02248A94 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3}\n    sub sp, #0xc\n    ldr r2, [r0]\n    mov r1, #0xc\n    mul r1, r2\n    add r3, r0, r1\n    add r3, #0xc\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [sp, #8]\n    ldr r1, [sp]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    add sp, #0xc\n    pop {r3}\n    bx lr"
    );
    #endif
}

void ov41_02248ABC(void) {
    /* Original at 0x02248ABC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4}\n    sub sp, #0xc\n    mov r3, #0xc\n    mul r3, r1\n    add r4, r0, r3\n    add r4, #0xc\n    ldmia r4!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r3]\n    ldr r1, [sp]\n    lsl r0, r2, #4\n    add r0, r1, r0\n    add sp, #0xc\n    pop {r4}\n    bx lr"
    );
    #endif
}

void ov41_02248AE0(void) {
    ov41_02248ABC(0);
}

void ov41_02248AFC(void) {
    /* Original at 0x02248AFC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r3, #0\n    mov r4, #0\n    bl ov41_02248ABC\n    ldr r1, [r0, #8]\n    cmp r1, r0\n    beq _02248B1C\n    cmp r4, r5\n    bne _02248B14\n    add r0, r1, #0\n    pop {r3, r4, r5, pc}\n    ldr r1, [r1, #8]\n    add r4, r4, #1\n    cmp r1, r0\n    bne _02248B0C\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02248B20(void) {
    /* Original at 0x02248B20 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, [r0]\n    cmp r4, r2\n    bne _02248B34\n    mov r4, #0xc\n    mul r4, r2\n    add r0, r0, r4\n    ldr r0, [r0, #0x14]\n    cmp r3, r0\n    beq _02248B3E\n    add r0, r1, #0\n    mov r1, #0\n    bl ov41_02246008\n    pop {r4, pc}\n    add r0, r1, #0\n    mov r1, #1\n    bl ov41_02246008\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02248B48(void) {
    /* Original at 0x02248B48 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    mov r1, #9\n    add r4, r2, #0\n    bl _s32_div_f\n    add r7, r1, #0\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    add r6, r0, #0\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    add r0, r6, #1\n    lsl r2, r0, #3\n    lsl r0, r6, #5\n    add r0, r2, r0\n    add r0, #0x10\n    str r0, [r4]\n    add r0, r1, #1\n    lsl r2, r0, #3\n    mov r0, #0x18\n    mul r0, r1\n    add r0, r2, r0\n    add r0, #8\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02248B84(void) {
    /* Original at 0x02248B84 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp]\n    ldr r0, _02248BF8 ; =ov41_02248BFC\n    mov r1, #0x30\n    mov r2, #0\n    mov r3, #0xd\n    bl CreateSysTaskAndEnvironment\n    bl SysTask_GetData\n    add r4, r0, #0\n    str r5, [r4]\n    str r6, [r4, #4]\n    ldr r0, [sp]\n    str r7, [r4, #8]\n    str r0, [r4, #0xc]\n    ldr r0, [sp, #0x18]\n    add r1, r6, #0\n    str r0, [r4, #0x10]\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    add r0, r5, #0\n    add r2, r7, #0\n    bl ov41_02248AE0\n    str r0, [r4, #0x20]\n    ldr r1, [sp]\n    ldr r2, [sp, #0x18]\n    add r0, r5, #0\n    bl ov41_02248AE0\n    str r0, [r4, #0x24]\n    ldr r1, [r4, #0x20]\n    add r2, r1, r0\n    mov r1, #0xc\n    mov r0, #0xd\n    mul r1, r2\n    str r2, [r4, #0x2c]\n    bl Heap_Alloc\n    str r0, [r4, #0x28]\n    cmp r0, #0\n    bne _02248BE4\n    bl GF_AssertFail\n    ldr r3, [r4, #0x2c]\n    mov r2, #0xc\n    ldr r0, [r4, #0x28]\n    mov r1, #0\n    mul r2, r3\n    bl memset\n    mov r0, #1\n    str r0, [r5, #0x3c]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02248BF8: .word ov41_02248BFC"
    );
    #endif
}

void ov41_02248BFC(void) {
    /* Original at 0x02248BFC */
    /* Requires manual decompilation - 161 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x1c]\n    cmp r0, #4\n    bls _02248C0C\n    b _02248D54\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02248C18: ; jump table\n    mov r0, #0x83\n    mvn r0, r0\n    str r0, [sp]\n    ldr r0, [r4]\n    ldr r1, [r4, #0xc]\n    ldr r2, [r4, #0x10]\n    mov r3, #0\n    bl ov41_02248984\n    ldr r0, [r4]\n    ldr r1, [r4, #0xc]\n    ldr r2, [r4, #0x10]\n    mov r3, #1\n    bl ov41_02248A08\n    mov r0, #0\n    str r0, [r4, #0x14]\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x14\n    str r1, [sp]\n    ldr r1, [r0, #0x40]\n    add r1, r1, #1\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1f\n    sub r2, r2, r3\n    mov r1, #0x1f\n    ror r2, r1\n    add r1, r3, r2\n    mov r2, #2\n    mov r3, #5\n    bl ov41_022488D8\n    ldr r0, [r4, #0x20]\n    mov r1, #1\n    bl ov41_02248E10\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x1c]\n    add r0, r0, #1\n    str r0, [r4, #0x1c]\n    b _02248D58\n    ldr r0, [r4, #0x18]\n    mov r6, #0\n    cmp r0, #0\n    ble _02248CAA\n    add r5, r4, #0\n    add r5, #0x20\n    ldr r0, [r4, #0x20]\n    sub r0, r0, #1\n    bmi _02248CA2\n    ldr r0, [r5]\n    sub r0, r0, #1\n    str r0, [r5]\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0x20]\n    bl ov41_02248AFC\n    ldr r1, [r4, #0x28]\n    ldr r2, [r4, #0x2c]\n    bl ov41_02248D64\n    ldr r0, [r4, #0x18]\n    add r6, r6, #1\n    cmp r6, r0\n    blt _02248C82\n    ldr r0, [r4, #0x20]\n    cmp r0, #0\n    bne _02248D58\n    ldr r0, [r4, #0x24]\n    mov r1, #2\n    bl ov41_02248E10\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x1c]\n    add r0, r0, #1\n    str r0, [r4, #0x1c]\n    b _02248D58\n    ldr r0, [r4, #0x18]\n    mov r6, #0\n    cmp r0, #0\n    ble _02248CF6\n    add r5, r4, #0\n    add r5, #0x24\n    ldr r0, [r4, #0x24]\n    sub r0, r0, #1\n    bmi _02248CEE\n    ldr r0, [r5]\n    sub r0, r0, #1\n    str r0, [r5]\n    ldr r0, [r4]\n    ldr r1, [r4, #0xc]\n    ldr r2, [r4, #0x10]\n    ldr r3, [r4, #0x24]\n    bl ov41_02248AFC\n    ldr r1, [r4, #0x28]\n    ldr r2, [r4, #0x2c]\n    bl ov41_02248D64\n    ldr r0, [r4, #0x18]\n    add r6, r6, #1\n    cmp r6, r0\n    blt _02248CCE\n    ldr r0, [r4, #0x24]\n    cmp r0, #0\n    bne _02248D58\n    ldr r0, [r4, #0x1c]\n    add r0, r0, #1\n    str r0, [r4, #0x1c]\n    mov r0, #0\n    str r0, [r4, #0x18]\n    b _02248D58\n    ldr r0, [r4, #0x18]\n    add r0, r0, #1\n    str r0, [r4, #0x18]\n    cmp r0, #3\n    ble _02248D58\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    beq _02248D58\n    ldr r0, [r4, #0x1c]\n    add r0, r0, #1\n    str r0, [r4, #0x1c]\n    b _02248D58\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    mov r3, #0\n    bl ov41_02248A08\n    mov r0, #0x83\n    mvn r0, r0\n    str r0, [sp]\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    mov r3, #0\n    bl ov41_02248984\n    ldr r0, [r4]\n    mov r1, #0\n    str r1, [r0, #0x3c]\n    ldr r0, [r4, #0x28]\n    bl Heap_Free\n    add r0, r5, #0\n    bl DestroySysTaskAndEnvironment\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    bl GF_AssertFail\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #0x2c]\n    bl ov41_02248DA4\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02248D64(void) {
    ov41_02248D7C(0x2c, 3);
}

void ov41_02248D7C(void) {
    /* Original at 0x02248D7C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r3, #0\n    cmp r1, #0\n    ble _02248D9E\n    add r4, r0, #0\n    ldr r2, [r4]\n    cmp r2, #0\n    bne _02248D96\n    mov r1, #0xc\n    mul r1, r3\n    add r0, r0, r1\n    pop {r3, r4}\n    bx lr\n    add r3, r3, #1\n    add r4, #0xc\n    cmp r3, r1\n    blt _02248D86\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov41_02248DA4(void) {
    /* Original at 0x02248DA4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    mov r4, #0\n    cmp r6, #0\n    ble _02248DC4\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02248DBC\n    add r0, r5, #0\n    bl ov41_02248DC8\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, r6\n    blt _02248DB0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02248DC8(void) {
    /* Original at 0x02248DC8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4]\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov41_02249B44\n    ldr r1, [sp]\n    ldr r0, [r4, #8]\n    add r2, r1, r0\n    str r2, [sp]\n    ldr r0, [r4]\n    ldr r1, [sp, #4]\n    bl ov41_02249AF4\n    ldr r0, [r4, #4]\n    sub r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #0\n    bgt _02248E0C\n    mov r0, #0\n    strb r0, [r4]\n    strb r0, [r4, #1]\n    strb r0, [r4, #2]\n    strb r0, [r4, #3]\n    strb r0, [r4, #4]\n    strb r0, [r4, #5]\n    strb r0, [r4, #6]\n    strb r0, [r4, #7]\n    strb r0, [r4, #8]\n    strb r0, [r4, #9]\n    strb r0, [r4, #0xa]\n    strb r0, [r4, #0xb]\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02248E10(void) {
    /* Original at 0x02248E10 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    bl _s32_div_f\n    sub r0, r4, r1\n    add r0, r5, r0\n    add r1, r4, #0\n    bl _s32_div_f\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02248E28(void) {
    /* Original at 0x02248E28 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    mov r2, #0x1c\n    mov r1, #0\n    strb r1, [r3]\n    add r3, r3, #1\n    sub r2, r2, #1\n    bne _02248E2E\n    ldr r1, _02248E40 ; =ov41_02248E80\n    str r1, [r0, #4]\n    str r1, [r0, #8]\n    str r1, [r0, #0xc]\n    bx lr\n    _02248E40: .word ov41_02248E80"
    );
    #endif
}

void ov41_02248E44(void) {
    /* Original at 0x02248E44 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02248E7C ; =gSystem + 0x40\n    add r4, r0, #0\n    ldrh r2, [r1, #0x24]\n    cmp r2, #0\n    beq _02248E56\n    ldr r1, [r4, #4]\n    blx r1\n    b _02248E6C\n    ldrh r1, [r1, #0x26]\n    cmp r1, #0\n    beq _02248E62\n    ldr r1, [r4, #0xc]\n    blx r1\n    b _02248E6C\n    ldrb r1, [r4, #0x18]\n    cmp r1, #0\n    beq _02248E6C\n    ldr r1, [r4, #8]\n    blx r1\n    ldr r0, _02248E7C ; =gSystem + 0x40\n    ldrh r1, [r0, #0x20]\n    strh r1, [r4, #0x14]\n    ldrh r1, [r0, #0x22]\n    strh r1, [r4, #0x16]\n    ldrh r0, [r0, #0x26]\n    strb r0, [r4, #0x18]\n    pop {r4, pc}\n    _02248E7C: .word gSystem + 0x40"
    );
    #endif
}

void ov41_02248E80(void) {
    /* Original at 0x02248E80 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov41_02248E84(void) {
    /* Original at 0x02248E84 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r7, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_0202BA70\n    add r4, r4, #1\n    stmia r5!, {r0}\n    cmp r4, #0x64\n    blt _02248E8E\n    mov r0, #0x19\n    mov r3, #0\n    add r2, r7, #0\n    mov r1, #0x12\n    lsl r0, r0, #4\n    add r3, r3, #1\n    str r1, [r2, r0]\n    add r2, r2, #4\n    cmp r3, #0x12\n    blt _02248EA8\n    mov r5, #0x19\n    mov r4, #0\n    lsl r5, r5, #4\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_0202BAB0\n    cmp r0, #0x12\n    beq _02248ECA\n    lsl r0, r0, #2\n    add r0, r7, r0\n    str r4, [r0, r5]\n    add r4, r4, #1\n    cmp r4, #0x12\n    blt _02248EB8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02248ED4(void) {
    GF_AssertFail();
}

void ov41_02248EE8(void) {
    /* Original at 0x02248EE8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bx lr"
    );
    #endif
}

void ov41_02248EF4(void) {
    /* Original at 0x02248EF4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r2, #0x19\n    mov r4, #0\n    lsl r2, r2, #4\n    ldr r3, [r0, r2]\n    cmp r1, r3\n    bne _02248F08\n    add r0, r4, #0\n    pop {r3, r4}\n    bx lr\n    add r4, r4, #1\n    add r0, r0, #4\n    cmp r4, #0x12\n    blt _02248EFC\n    add r0, r4, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov41_02248F18(void) {
    /* Original at 0x02248F18 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov41_02248E28\n    mov r0, #0xd\n    mov r1, #0x34\n    bl Heap_Alloc\n    str r0, [r5]\n    mov r1, #0\n    mov r2, #0x34\n    bl memset\n    ldr r1, [r5]\n    ldr r0, [sp, #0x18]\n    str r4, [r1, #4]\n    str r6, [r1, #8]\n    str r7, [r1]\n    str r0, [r1, #0xc]\n    ldr r0, [sp, #0x1c]\n    str r0, [r1, #0x2c]\n    ldr r0, _02248F5C ; =ov41_02248F80\n    str r0, [r5, #4]\n    ldr r0, _02248F60 ; =ov41_022490F0\n    str r0, [r5, #8]\n    ldr r0, _02248F64 ; =ov41_02249280\n    str r0, [r5, #0xc]\n    ldr r0, _02248F68 ; =ov41_02248F6C\n    str r0, [r5, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02248F5C: .word ov41_02248F80\n    _02248F60: .word ov41_022490F0\n    _02248F64: .word ov41_02249280\n    _02248F68: .word ov41_02248F6C"
    );
    #endif
}

void ov41_02248F6C(void) {
    /* Original at 0x02248F6C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl Heap_Free\n    add r0, r4, #0\n    bl ov41_02248E28\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02248F80(void) {
    /* Original at 0x02248F80 */
    /* Requires manual decompilation - 124 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r4, [r5]\n    ldr r0, [r4, #4]\n    bl ov41_022481BC\n    cmp r0, #0\n    beq _02249002\n    ldr r3, [r4]\n    ldr r0, [r4, #4]\n    ldr r3, [r3, #0x38]\n    add r1, sp, #0xc\n    add r2, sp, #8\n    bl ov41_022481F4\n    add r6, r0, #0\n    beq _02248FB2\n    ldr r0, [r6, #4]\n    cmp r0, #3\n    bne _02248FB2\n    ldr r0, [r4, #0x2c]\n    cmp r0, #0\n    bne _02248FB2\n    mov r6, #0\n    cmp r6, #0\n    beq _0224903E\n    ldr r0, [r6, #4]\n    cmp r0, #0\n    bne _02248FC8\n    ldr r0, [r4, #4]\n    add r1, r6, #0\n    bl ov41_022480C8\n    mov r7, #0\n    b _02248FE4\n    add r0, r6, #0\n    bl ov41_02248030\n    ldr r0, [r6]\n    bl ov41_02249710\n    add r1, r4, #0\n    add r2, r4, #0\n    add r7, r0, #0\n    add r0, r6, #0\n    add r1, #0x24\n    add r2, #0x28\n    bl ov41_02249B44\n    ldr r0, [r4, #4]\n    bl ov41_02248158\n    ldr r0, [sp, #8]\n    add r1, r6, #0\n    str r0, [sp]\n    str r7, [sp, #4]\n    ldr r3, [sp, #0xc]\n    add r0, r4, #0\n    mov r2, #1\n    bl ov41_022493BC\n    bl ov41_0224642C\n    b _0224903E\n    ldr r0, [r4, #8]\n    bl ov41_02248820\n    cmp r0, #0\n    beq _0224903E\n    ldr r3, [r4]\n    ldr r0, [r4, #8]\n    ldr r3, [r3, #0x38]\n    add r1, sp, #0xc\n    add r2, sp, #8\n    bl ov41_02248858\n    add r6, r0, #0\n    beq _0224903E\n    bl ov41_022486F0\n    ldr r0, [r4, #8]\n    bl ov41_02248724\n    ldr r0, [sp, #8]\n    mov r2, #0\n    str r0, [sp]\n    str r2, [sp, #4]\n    ldr r3, [sp, #0xc]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov41_022493BC\n    bl ov41_0224642C\n    ldr r1, [r4, #0x10]\n    cmp r1, #0\n    beq _02249088\n    ldr r1, [r1, #4]\n    ldr r0, _0224908C ; =0x000005EB\n    cmp r1, #0\n    beq _02249056\n    cmp r1, #1\n    beq _02249060\n    cmp r1, #3\n    beq _02249072\n    b _0224907A\n    ldr r1, _02249090 ; =ov41_022490F0\n    str r1, [r5, #8]\n    ldr r1, _02249094 ; =ov41_02249280\n    str r1, [r5, #0xc]\n    b _0224907A\n    ldr r0, _02249098 ; =ov41_022490B0\n    str r0, [r5, #8]\n    ldr r0, _0224909C ; =ov41_022490AC\n    str r0, [r5, #0xc]\n    add r0, r5, #0\n    bl ov41_02249390\n    ldr r0, _022490A0 ; =0x0000067D\n    b _0224907A\n    ldr r1, _022490A4 ; =ov41_022492B0\n    str r1, [r5, #8]\n    ldr r1, _022490A8 ; =ov41_022492E0\n    str r1, [r5, #0xc]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl PlaySE\n    add r0, r4, #0\n    bl ov41_02249574\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224908C: .word 0x000005EB\n    _02249090: .word ov41_022490F0\n    _02249094: .word ov41_02249280\n    _02249098: .word ov41_022490B0\n    _0224909C: .word ov41_022490AC\n    _022490A0: .word 0x0000067D\n    _022490A4: .word ov41_022492B0\n    _022490A8: .word ov41_022492E0"
    );
    #endif
}

void ov41_022490AC(void) {
    /* Original at 0x022490AC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov41_022490B0(void) {
    /* Original at 0x022490B0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r4, [r0]\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _022490EA\n    ldr r0, [r0, #4]\n    cmp r0, #1\n    beq _022490C6\n    bl GF_AssertFail\n    ldr r0, [r4, #0x10]\n    mov r2, #0x1c\n    ldr r0, [r0, #4]\n    mov r3, #0x1e\n    str r0, [sp]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    mov r1, #4\n    str r0, [sp, #4]\n    ldrsh r2, [r4, r2]\n    ldrsh r3, [r4, r3]\n    add r0, r4, #0\n    bl ov41_02249480\n    add r0, r4, #0\n    bl ov41_02249418\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov41_022490F0(void) {
    /* Original at 0x022490F0 */
    /* Requires manual decompilation - 171 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x28\n    add r6, r0, #0\n    ldr r4, [r6]\n    ldr r1, [r4, #0x10]\n    cmp r1, #0\n    bne _02249100\n    b _0224926E\n    add r1, sp, #0x18\n    str r1, [sp]\n    add r1, sp, #0x24\n    add r2, sp, #0x20\n    add r3, sp, #0x1c\n    bl ov41_0224946C\n    ldr r0, [r4, #4]\n    ldr r1, [sp, #0x1c]\n    ldr r2, [sp, #0x24]\n    bl ov41_022481D8\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x24]\n    bl ov41_022481D8\n    add r5, r5, r0\n    ldr r0, [r4, #4]\n    ldr r1, [sp, #0x1c]\n    ldr r2, [sp, #0x20]\n    bl ov41_022481D8\n    add r5, r5, r0\n    ldr r0, [r4, #4]\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x20]\n    bl ov41_022481D8\n    add r0, r5, r0\n    cmp r0, #4\n    blt _022491A2\n    ldr r2, [r4]\n    ldr r0, [r4, #4]\n    ldr r1, [r4, #0x10]\n    ldr r2, [r2, #0x38]\n    bl ov41_022480A4\n    cmp r0, #0\n    bne _0224918C\n    mov r0, #0x1c\n    ldrsh r0, [r4, r0]\n    str r0, [sp, #0xc]\n    mov r0, #0x1e\n    ldrsh r0, [r4, r0]\n    str r0, [sp, #8]\n    ldr r0, _02249274 ; =0x00000682\n    bl PlaySE\n    ldr r0, [r4, #0xc]\n    mov r1, #0x1b\n    mov r2, #0xd7\n    mov r3, #3\n    bl ov41_0224AC08\n    ldr r0, [r4, #0x10]\n    mov r1, #4\n    ldr r0, [r0, #4]\n    str r0, [sp]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    str r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #8]\n    add r0, r4, #0\n    bl ov41_02249480\n    b _02249268\n    ldr r0, [r4, #4]\n    bl ov41_02248158\n    bl ov41_022463FC\n    mov r0, #0\n    str r0, [r4, #0x30]\n    ldr r0, _02249278 ; =0x000005EA\n    bl PlaySE\n    b _02249268\n    ldr r0, [r4, #0x10]\n    add r1, sp, #0x24\n    ldr r5, [r0]\n    add r0, sp, #0x18\n    str r0, [sp]\n    add r0, r6, #0\n    add r2, sp, #0x20\n    add r3, sp, #0x1c\n    bl ov41_0224942C\n    ldr r0, [r4, #8]\n    ldr r1, [sp, #0x1c]\n    ldr r2, [sp, #0x24]\n    bl ov41_0224883C\n    add r6, r0, #0\n    ldr r0, [r4, #8]\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x20]\n    bl ov41_0224883C\n    add r0, r6, r0\n    cmp r0, #2\n    bge _02249220\n    add r0, r4, #0\n    add r0, #0x20\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0224920C\n    ldr r0, [r4, #0x10]\n    add r1, sp, #0x14\n    add r2, sp, #0x10\n    bl ov41_02249B94\n    bl MTRandom\n    ldr r2, [sp, #0x14]\n    mov r1, #0x6c\n    sub r1, r1, r2\n    bl _u32_div_f\n    add r1, #0xa\n    str r1, [sp, #0xc]\n    bl MTRandom\n    ldr r2, [sp, #0x10]\n    mov r1, #0x7d\n    sub r1, r1, r2\n    bl _u32_div_f\n    add r1, #0x12\n    str r1, [sp, #8]\n    b _02249218\n    mov r0, #0x1c\n    ldrsh r0, [r4, r0]\n    str r0, [sp, #0xc]\n    mov r0, #0x1e\n    ldrsh r0, [r4, r0]\n    str r0, [sp, #8]\n    ldr r0, _02249274 ; =0x00000682\n    bl PlaySE\n    b _02249230\n    ldr r0, [r4, #0x10]\n    add r1, sp, #0xc\n    add r2, sp, #8\n    bl ov41_02249B44\n    ldr r0, _0224927C ; =0x000005EB\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x20\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0224924E\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4, #8]\n    ldr r0, [r0, #4]\n    ldr r1, [r5]\n    ldr r2, [r2, #4]\n    bl ov41_022484E8\n    add r1, r4, #0\n    add r1, #0x21\n    strb r0, [r1]\n    ldr r0, [r4, #0x10]\n    mov r1, #4\n    ldr r0, [r0, #4]\n    str r0, [sp]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    str r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #8]\n    add r0, r4, #0\n    bl ov41_02249480\n    add r0, r4, #0\n    bl ov41_02249418\n    add sp, #0x28\n    pop {r4, r5, r6, pc}\n    nop\n    _02249274: .word 0x00000682\n    _02249278: .word 0x000005EA\n    _0224927C: .word 0x000005EB"
    );
    #endif
}

void ov41_02249280(void) {
    /* Original at 0x02249280 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, [r0]\n    ldr r0, [r2, #0x10]\n    cmp r0, #0\n    beq _022492A4\n    ldr r3, _022492A8 ; =gSystem + 0x40\n    ldr r1, _022492AC ; =0x0000FFFF\n    ldrh r4, [r3, #0x20]\n    cmp r4, r1\n    beq _022492A4\n    beq _022492A4\n    ldrh r3, [r3, #0x22]\n    ldr r1, [r2, #0x14]\n    ldr r2, [r2, #0x18]\n    sub r1, r4, r1\n    sub r2, r3, r2\n    bl ov41_02249AF4\n    pop {r4, pc}\n    nop\n    _022492A8: .word gSystem + 0x40\n    _022492AC: .word 0x0000FFFF"
    );
    #endif
}

void ov41_022492B0(void) {
    /* Original at 0x022492B0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, [r0]\n    ldr r1, [r4, #0x10]\n    cmp r1, #0\n    beq _022492DA\n    ldr r0, [r4, #4]\n    bl ov41_02248020\n    ldr r0, [r4, #4]\n    bl ov41_02248158\n    bl ov41_022463FC\n    mov r0, #0\n    str r0, [r4, #0x30]\n    ldr r0, _022492DC ; =0x000005EB\n    bl PlaySE\n    add r0, r4, #0\n    bl ov41_02249418\n    pop {r4, pc}\n    _022492DC: .word 0x000005EB"
    );
    #endif
}

void ov41_022492E0(void) {
    /* Original at 0x022492E0 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    ldr r4, [r0]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _02249384\n    ldr r1, _02249388 ; =gSystem + 0x40\n    ldrh r2, [r1, #0x20]\n    ldr r1, _0224938C ; =0x0000FFFF\n    cmp r2, r1\n    beq _02249384\n    beq _02249384\n    add r1, sp, #8\n    str r1, [sp]\n    add r1, sp, #0x14\n    add r2, sp, #0xc\n    add r3, sp, #0x10\n    bl ov41_02249BAC\n    ldr r0, [r4, #0x10]\n    add r1, sp, #0x1c\n    add r2, sp, #0x18\n    bl ov41_02249B94\n    ldr r0, _02249388 ; =gSystem + 0x40\n    ldr r1, [r4, #0x14]\n    ldrh r2, [r0, #0x20]\n    ldr r3, [sp, #0x18]\n    sub r5, r2, r1\n    ldrh r1, [r0, #0x22]\n    ldr r0, [r4, #0x18]\n    ldr r2, [sp, #0x1c]\n    sub r6, r1, r0\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    sub r0, r2, r0\n    ldr r2, [sp, #8]\n    add r7, r6, r1\n    sub r2, r3, r2\n    ldr r3, [sp, #0x14]\n    str r2, [sp, #0x18]\n    add r2, r5, r3\n    str r0, [sp, #0x1c]\n    cmp r2, #0x8a\n    bgt _02249342\n    mov r0, #0x8a\n    sub r5, r0, r3\n    b _0224934C\n    add r2, r5, r0\n    cmp r2, #0xf6\n    blt _0224934C\n    mov r2, #0xf6\n    sub r5, r2, r0\n    cmp r7, #0x12\n    bgt _02249356\n    mov r0, #0x12\n    sub r6, r0, r1\n    b _02249362\n    ldr r1, [sp, #0x18]\n    add r0, r6, r1\n    cmp r0, #0x8f\n    blt _02249362\n    mov r0, #0x8f\n    sub r6, r0, r1\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov41_022495A4\n    ldr r0, [r4, #4]\n    add r1, sp, #0x14\n    add r2, sp, #0x10\n    bl ov41_022482B8\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    ldr r0, [sp, #4]\n    add r1, r5, r1\n    add r2, r6, r2\n    bl ov41_022495A4\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _02249388: .word gSystem + 0x40\n    _0224938C: .word 0x0000FFFF"
    );
    #endif
}

void ov41_02249390(void) {
    /* Original at 0x02249390 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, [r0]\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _022493B8\n    ldr r0, [r0, #4]\n    cmp r0, #1\n    beq _022493A4\n    bl GF_AssertFail\n    ldr r0, [r4, #0x10]\n    ldr r5, [r0]\n    ldr r0, [r4, #4]\n    bl ov41_022482A8\n    ldr r0, [r4, #4]\n    ldr r1, [r5]\n    mov r2, #0xe\n    bl ov41_0224825C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_022493BC(void) {
    /* Original at 0x022493BC */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    add r0, r4, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    add r7, r3, #0\n    bl ov41_02249B44\n    str r4, [r5, #0x10]\n    ldr r0, [sp, #4]\n    strh r0, [r5, #0x1c]\n    ldr r0, [sp]\n    strh r0, [r5, #0x1e]\n    add r0, r5, #0\n    add r0, #0x20\n    strb r6, [r0]\n    ldr r0, [sp, #0x20]\n    str r7, [r5, #0x14]\n    str r0, [r5, #0x18]\n    cmp r6, #0\n    bne _022493FE\n    ldr r1, [r5, #0x10]\n    ldr r0, [r5, #8]\n    ldr r1, [r1, #4]\n    bl ov41_0224895C\n    add r1, r5, #0\n    add r1, #0x21\n    strb r0, [r1]\n    b _02249406\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x21\n    strb r1, [r0]\n    mov r0, #1\n    str r0, [r5, #0x30]\n    ldr r1, [sp, #0x24]\n    add r0, r4, #0\n    bl ov41_02249A90\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02249418(void) {
    /* Original at 0x02249418 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    str r2, [r0, #0x10]\n    strh r2, [r0, #0x1c]\n    add r1, r0, #0\n    strh r2, [r0, #0x1e]\n    add r1, #0x20\n    strb r2, [r1]\n    add r0, #0x21\n    strb r2, [r0]\n    bx lr"
    );
    #endif
}

void ov41_0224942C(void) {
    /* Original at 0x0224942C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r4, [r0]\n    add r5, r1, #0\n    ldr r0, [r4, #0x10]\n    add r6, r2, #0\n    add r1, sp, #0xc\n    add r2, sp, #8\n    add r7, r3, #0\n    bl ov41_02249B94\n    ldr r0, [r4, #0x10]\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov41_02249B44\n    ldr r0, [sp]\n    str r0, [r5]\n    ldr r1, [sp]\n    ldr r0, [sp, #8]\n    add r0, r1, r0\n    str r0, [r6]\n    ldr r0, [sp, #4]\n    str r0, [r7]\n    ldr r1, [sp, #4]\n    ldr r0, [sp, #0xc]\n    add r1, r1, r0\n    ldr r0, [sp, #0x28]\n    str r1, [r0]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224946C(void) {
    ov41_02249C20();
}

void ov41_02249480(void) {
    /* Original at 0x02249480 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp]\n    ldr r0, _022494F0 ; =ov41_022494F4\n    mov r1, #0x2c\n    mov r2, #0\n    mov r3, #0xd\n    bl CreateSysTaskAndEnvironment\n    bl SysTask_GetData\n    add r4, r0, #0\n    ldr r0, [r5, #8]\n    add r1, sp, #8\n    str r0, [r4]\n    ldr r0, [r5, #0x10]\n    add r2, sp, #4\n    str r0, [r4, #4]\n    str r6, [r4, #0x20]\n    ldr r0, [sp]\n    str r7, [r4, #0x10]\n    str r0, [r4, #0x14]\n    ldr r0, [sp, #0x20]\n    str r0, [r4, #0x18]\n    ldr r0, [sp, #0x24]\n    str r0, [r4, #0x1c]\n    ldr r0, [r5, #8]\n    add r0, #0x3c\n    str r0, [r4, #0x24]\n    add r0, r5, #0\n    add r0, #0x30\n    str r0, [r4, #0x28]\n    ldr r0, [r5, #0x10]\n    bl ov41_02249B44\n    ldr r1, [r4, #0x10]\n    ldr r0, [sp, #8]\n    sub r0, r1, r0\n    add r1, r6, #0\n    bl _s32_div_f\n    str r0, [r4, #8]\n    ldr r1, [r4, #0x14]\n    ldr r0, [sp, #4]\n    sub r0, r1, r0\n    add r1, r6, #0\n    bl _s32_div_f\n    str r0, [r4, #0xc]\n    mov r0, #0\n    str r0, [r5, #0x30]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _022494F0: .word ov41_022494F4"
    );
    #endif
}

void ov41_022494F4(void) {
    /* Original at 0x022494F4 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x24]\n    ldr r0, [r0]\n    cmp r0, #1\n    beq _0224956E\n    ldr r0, [r4, #4]\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov41_02249B44\n    ldr r1, [sp, #4]\n    ldr r0, [r4, #8]\n    add r0, r1, r0\n    str r0, [sp, #4]\n    ldr r1, [sp]\n    ldr r0, [r4, #0xc]\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r0, [r4, #0x20]\n    sub r0, r0, #1\n    str r0, [r4, #0x20]\n    bmi _02249532\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _02249564\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    bne _02249564\n    ldr r0, [r4, #4]\n    ldr r1, [r4, #0x10]\n    ldr r2, [r4, #0x14]\n    bl ov41_02249AF4\n    ldr r0, [r4]\n    ldr r1, [r4, #0x18]\n    ldr r2, [r4, #0x1c]\n    ldr r3, [r4, #4]\n    bl ov41_022486C4\n    ldr r0, [r4]\n    bl ov41_02248724\n    ldr r0, [r4, #0x28]\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0224955A\n    bl ov41_022463FC\n    add r0, r5, #0\n    bl DestroySysTaskAndEnvironment\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #4]\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    bl ov41_02249AF4\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02249574(void) {
    /* Original at 0x02249574 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, [r0, #0x10]\n    ldr r1, [r3, #4]\n    cmp r1, #0\n    bne _0224958E\n    ldr r3, [r3]\n    ldr r0, [r0, #0xc]\n    ldr r3, [r3]\n    mov r1, #0x1b\n    mov r2, #0xd8\n    bl ov41_0224AC08\n    pop {r3, pc}\n    cmp r1, #1\n    bne _022495A0\n    ldr r3, [r3]\n    ldr r0, [r0, #0xc]\n    ldr r3, [r3]\n    mov r1, #0x1b\n    mov r2, #0xda\n    bl ov41_0224AC08\n    pop {r3, pc}"
    );
    #endif
}

void ov41_022495A4(void) {
    /* Original at 0x022495A4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r4, [r0]\n    add r5, r1, #0\n    ldr r0, [r4, #0x10]\n    add r6, r2, #0\n    bl ov41_02249AF4\n    ldr r1, [r4, #0x24]\n    ldr r2, [r4, #0x28]\n    ldr r0, [r4, #4]\n    sub r1, r5, r1\n    sub r2, r6, r2\n    bl ov41_02248114\n    str r5, [r4, #0x24]\n    str r6, [r4, #0x28]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_022495C8(void) {
    /* Original at 0x022495C8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    add r4, r1, #0\n    str r2, [sp]\n    add r5, r0, #0\n    ldrh r0, [r4]\n    ldrh r1, [r4, #2]\n    mov r3, #0xe\n    bl GfGfxLoader_LoadFromNarc\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #0x76\n    bl ov41_022463DC\n    ldrh r1, [r4]\n    ldr r0, [r0, #0x14]\n    bl UnscanPokepic\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_022495F0(void) {
    ov41_02249604();
}

void ov41_02249604(void) {
    /* Original at 0x02249604 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r6, r2, #0\n    add r5, r0, #0\n    add r7, r1, #0\n    add r4, r3, #0\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #2\n    bl sub_02070130\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, r7, #0\n    add r1, r4, #0\n    mov r2, #0xc0\n    mov r3, #0x38\n    bl PokepicManager_CreatePokepic\n    str r0, [r5]\n    add r0, r5, #0\n    add r1, sp, #0x1c\n    add r2, sp, #0x18\n    bl ov41_022497A0\n    ldr r1, [sp, #0x1c]\n    mov r2, #0x38\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    ldr r1, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    str r0, [sp, #0x18]\n    sub r0, r2, r0\n    strb r0, [r5, #4]\n    ldr r0, [sp, #0x18]\n    mov r1, #0xc0\n    add r0, #0x38\n    strb r0, [r5, #5]\n    ldr r0, [sp, #0x1c]\n    sub r0, r1, r0\n    strb r0, [r5, #6]\n    ldr r0, [sp, #0x1c]\n    add r0, #0xc0\n    strb r0, [r5, #7]\n    ldr r0, [sp, #0x18]\n    str r0, [sp]\n    ldr r3, [sp, #0x1c]\n    add r0, r5, #4\n    bl ov41_02249978\n    add r0, r6, #0\n    mov r1, #2\n    bl sub_02070848\n    mov r2, #0\n    str r2, [sp]\n    add r7, r0, #0\n    ldrh r0, [r4]\n    ldrh r1, [r4, #2]\n    ldr r3, [sp, #0x38]\n    bl GfGfxLoader_LoadFromNarc\n    add r1, sp, #0x14\n    str r0, [sp, #0x10]\n    bl NNS_G2dGetUnpackedCharacterData\n    ldr r0, [sp, #0x14]\n    ldrh r1, [r4]\n    ldr r0, [r0, #0x14]\n    bl UnscanPokepic\n    ldr r0, [sp, #0x3c]\n    cmp r0, #0\n    bne _022496C6\n    ldr r2, [sp, #0x14]\n    add r3, r5, #0\n    ldrh r1, [r2, #2]\n    ldr r0, [r2, #0x14]\n    ldrh r2, [r2]\n    lsl r1, r1, #3\n    add r3, #8\n    lsl r2, r2, #3\n    bl ov41_022498E8\n    b _022496DC\n    ldr r1, [sp, #0x14]\n    ldr r0, [r1, #0x14]\n    ldrh r1, [r1, #2]\n    lsl r1, r1, #3\n    bl ov41_0224989C\n    strb r0, [r5, #8]\n    ldrb r0, [r5, #8]\n    strb r0, [r5, #9]\n    strb r7, [r5, #0xb]\n    strb r7, [r5, #0xa]\n    ldr r0, [sp, #0x10]\n    bl Heap_Free\n    str r6, [r5, #0xc]\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_022496E8(void) {
    Pokepic_Delete(0, 0x10);
}

void ov41_02249700(void) {
    /* Original at 0x02249700 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0224970C ; =Pokepic_SetAttr\n    add r2, r1, #0\n    ldr r0, [r0]\n    mov r1, #2\n    bx r3\n    nop\n    _0224970C: .word Pokepic_SetAttr"
    );
    #endif
}

void ov41_02249710(void) {
    Pokepic_GetAttr();
}

void ov41_0224971C(void) {
    /* Original at 0x0224971C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r6, r2, #0\n    add r5, r0, #0\n    add r1, sp, #8\n    add r2, sp, #4\n    bl ov41_022497A0\n    ldr r0, [r5]\n    mov r1, #0\n    add r2, r4, #0\n    bl Pokepic_SetAttr\n    ldr r0, [r5]\n    mov r1, #1\n    add r2, r6, #0\n    bl Pokepic_SetAttr\n    ldr r1, [sp, #4]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r2, r0, #1\n    ldr r1, [sp, #8]\n    str r2, [sp, #4]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    str r0, [sp, #8]\n    str r2, [sp]\n    ldr r3, [sp, #8]\n    add r0, r5, #4\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov41_02249978\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02249768(void) {
    TouchscreenHitbox_TouchHeldIsIn();
}

void ov41_02249774(void) {
    TouchscreenHitbox_PointIsIn();
}

void ov41_02249780(void) {
    /* Original at 0x02249780 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    mov r1, #0\n    add r6, r2, #0\n    bl Pokepic_GetAttr\n    str r0, [r4]\n    ldr r0, [r5]\n    mov r1, #1\n    bl Pokepic_GetAttr\n    str r0, [r6]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_022497A0(void) {
    /* Original at 0x022497A0 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x50\n    str r0, [r1]\n    str r0, [r2]\n    bx lr"
    );
    #endif
}

void ov41_022497A8(void) {
    /* Original at 0x022497A8 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov41_02249768\n    cmp r0, #0\n    bne _022497C2\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov41_02249780\n    add r0, r5, #0\n    add r1, sp, #0xc\n    add r2, sp, #8\n    bl ov41_022497A0\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #4]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    sub r1, r2, r0\n    ldr r3, [sp, #8]\n    ldr r0, [sp]\n    lsr r2, r3, #0x1f\n    add r2, r3, r2\n    asr r2, r2, #1\n    sub r0, r0, r2\n    str r0, [sp]\n    ldr r0, _0224981C ; =gSystem + 0x40\n    str r1, [sp, #4]\n    ldrh r2, [r0, #0x20]\n    mov r3, #0\n    sub r1, r2, r1\n    str r1, [r4]\n    ldrh r1, [r0, #0x22]\n    ldr r0, [sp]\n    sub r2, r1, r0\n    str r2, [r6]\n    ldr r1, [r4]\n    add r0, r7, #0\n    bl ov41_022464BC\n    cmp r0, #0\n    bne _02249816\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224981C: .word gSystem + 0x40"
    );
    #endif
}

void ov41_02249820(void) {
    /* Original at 0x02249820 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov41_02249774\n    cmp r0, #0\n    bne _0224983A\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov41_02249780\n    add r0, r5, #0\n    add r1, sp, #0xc\n    add r2, sp, #8\n    bl ov41_022497A0\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #4]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    sub r1, r2, r0\n    ldr r3, [sp, #8]\n    str r1, [sp, #4]\n    lsr r2, r3, #0x1f\n    add r2, r3, r2\n    ldr r0, [sp]\n    asr r2, r2, #1\n    sub r0, r0, r2\n    str r0, [sp]\n    sub r2, r6, r0\n    sub r1, r4, r1\n    add r0, r7, #0\n    mov r3, #0\n    bl ov41_022464BC\n    cmp r0, #0\n    bne _02249880\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02249888(void) {
    /* Original at 0x02249888 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #8]\n    strb r2, [r1]\n    ldrb r2, [r0, #9]\n    strb r2, [r1, #1]\n    ldrb r2, [r0, #0xa]\n    strb r2, [r1, #2]\n    ldrb r0, [r0, #0xb]\n    strb r0, [r1, #3]\n    bx lr"
    );
    #endif
}

void ov41_0224989C(void) {
    /* Original at 0x0224989C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    mov ip, r0\n    add r7, r1, #0\n    mov r2, #0\n    mov r3, #0\n    add r4, r3, #0\n    add r1, r2, r4\n    lsr r0, r1, #0x1f\n    lsl r6, r1, #0x1f\n    sub r6, r6, r0\n    mov r5, #0x1f\n    ror r6, r5\n    add r5, r0, r6\n    lsl r6, r5, #2\n    mov r5, #0xf\n    add r0, r1, r0\n    lsl r5, r6\n    asr r1, r0, #1\n    mov r0, ip\n    lsl r5, r5, #0x18\n    ldrsb r0, [r0, r1]\n    lsr r5, r5, #0x18\n    tst r0, r5\n    beq _022498D2\n    add r0, r2, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    add r3, r3, #1\n    add r4, r4, r7\n    cmp r3, #0x50\n    blt _022498A8\n    add r2, r2, #1\n    cmp r2, #0x50\n    blt _022498A4\n    mov r0, #0x50\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov41_022498E8(void) {
    /* Original at 0x022498E8 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    str r1, [sp, #4]\n    add r1, r3, #0\n    mov r0, #0x28\n    strb r0, [r1]\n    strb r0, [r1, #1]\n    strb r0, [r1, #2]\n    strb r0, [r1, #3]\n    mov r6, #0\n    mov r2, #0x50\n    sub r2, r2, r6\n    str r2, [sp, #8]\n    lsl r2, r6, #0x18\n    lsr r2, r2, #0x18\n    mov lr, r2\n    ldr r2, [sp, #8]\n    mov r0, #0\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    add r5, r0, #0\n    mov ip, r2\n    add r7, r6, r5\n    lsr r3, r7, #0x1f\n    lsl r4, r7, #0x1f\n    sub r4, r4, r3\n    mov r2, #0x1f\n    ror r4, r2\n    add r2, r3, r4\n    lsl r4, r2, #2\n    mov r2, #0xf\n    lsl r2, r4\n    lsl r2, r2, #0x18\n    lsr r4, r2, #0x18\n    add r3, r7, r3\n    ldr r2, [sp]\n    asr r3, r3, #1\n    ldrsb r2, [r2, r3]\n    tst r2, r4\n    beq _02249964\n    ldrb r2, [r1]\n    cmp r2, r6\n    ble _02249944\n    mov r2, lr\n    strb r2, [r1]\n    ldrb r3, [r1, #1]\n    ldr r2, [sp, #8]\n    cmp r3, r2\n    ble _02249950\n    mov r2, ip\n    strb r2, [r1, #1]\n    ldrb r2, [r1, #2]\n    cmp r2, r0\n    ble _02249958\n    strb r0, [r1, #2]\n    mov r2, #0x50\n    sub r3, r2, r0\n    ldrb r2, [r1, #3]\n    cmp r2, r3\n    ble _02249964\n    strb r3, [r1, #3]\n    ldr r2, [sp, #4]\n    add r0, r0, #1\n    add r5, r5, r2\n    cmp r0, #0x50\n    blt _02249916\n    add r6, r6, #1\n    cmp r6, #0x50\n    blt _022498FE\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02249978(void) {
    /* Original at 0x02249978 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [sp, #8]\n    sub r4, r2, r4\n    bmi _02249982\n    b _02249984\n    mov r4, #0\n    strb r4, [r0]\n    ldr r4, [sp, #8]\n    add r2, r2, r4\n    cmp r2, #0xbf\n    bgt _02249990\n    b _02249992\n    mov r2, #0xbf\n    strb r2, [r0, #1]\n    sub r2, r1, r3\n    bmi _0224999A\n    b _0224999C\n    mov r2, #0\n    add r1, r1, r3\n    strb r2, [r0, #2]\n    cmp r1, #0xff\n    bgt _022499AA\n    strb r1, [r0, #3]\n    pop {r3, r4}\n    bx lr\n    mov r1, #0xff\n    strb r1, [r0, #3]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov41_022499B4(void) {
    /* Original at 0x022499B4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    lsl r4, r6, #4\n    add r5, r0, #0\n    add r0, r2, #0\n    add r1, r4, #0\n    bl Heap_Alloc\n    str r0, [r5]\n    cmp r0, #0\n    bne _022499CE\n    bl GF_AssertFail\n    ldr r0, [r5]\n    mov r1, #0\n    add r2, r4, #0\n    bl memset\n    str r6, [r5, #4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_022499DC(void) {
    Heap_Free(0);
}

void ov41_022499F0(void) {
    /* Original at 0x022499F0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r1, #0\n    add r7, r2, #0\n    cmp r0, #0\n    bne _02249A02\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    bne _02249A0C\n    bl GF_AssertFail\n    ldr r2, [r5, #4]\n    mov r4, #0\n    cmp r2, #0\n    ble _02249A24\n    ldr r1, [r5]\n    ldr r0, [r1]\n    cmp r0, #0\n    beq _02249A24\n    add r4, r4, #1\n    add r1, #0x10\n    cmp r4, r2\n    blt _02249A16\n    cmp r2, r4\n    bgt _02249A2C\n    bl GF_AssertFail\n    ldr r0, [r5]\n    lsl r1, r4, #4\n    str r6, [r0, r1]\n    ldr r0, [r5]\n    add r0, r0, r1\n    str r7, [r0, #4]\n    ldr r0, [r5]\n    add r0, r0, r1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02249A40(void) {
    /* Original at 0x02249A40 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x10\n    mov r1, #0\n    strb r1, [r0]\n    add r0, r0, #1\n    sub r2, r2, #1\n    bne _02249A44\n    bx lr"
    );
    #endif
}

void ov41_02249A50(void) {
    /* Original at 0x02249A50 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r1, #8]\n    str r2, [r0, #8]\n    ldr r2, [r1, #8]\n    str r0, [r2, #0xc]\n    str r1, [r0, #0xc]\n    str r0, [r1, #8]\n    bx lr"
    );
    #endif
}

void ov41_02249A60(void) {
    /* Original at 0x02249A60 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #8]\n    ldr r1, [r0, #0xc]\n    str r2, [r1, #8]\n    ldr r1, [r0, #0xc]\n    ldr r0, [r0, #8]\n    str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov41_02249A70(void) {
    /* Original at 0x02249A70 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r4, [r6, #8]\n    cmp r4, r6\n    beq _02249A8E\n    add r0, r4, #0\n    ldr r5, [r4, #8]\n    bl ov41_02249A60\n    add r0, r4, #0\n    bl ov41_02249A40\n    add r4, r5, #0\n    cmp r5, r6\n    bne _02249A7A\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02249A90(void) {
    /* Original at 0x02249A90 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, [r0, #4]\n    ldr r0, [r0]\n    cmp r2, #3\n    bge _02249AA0\n    bl ov41_02246014\n    pop {r3, pc}\n    bl ov41_02249700\n    pop {r3, pc}"
    );
    #endif
}

void ov41_02249AA8(void) {
    /* Original at 0x02249AA8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, [r0, #4]\n    cmp r4, #0\n    bne _02249ABE\n    ldr r0, [r0]\n    ldr r4, [r0]\n    lsl r4, r4, #2\n    ldr r3, [r3, r4]\n    bl ov41_02245F14\n    pop {r4, pc}\n    cmp r4, #1\n    bne _02249AD2\n    ldr r0, [r0]\n    ldr r4, [r0]\n    add r4, #0x64\n    lsl r4, r4, #2\n    ldr r3, [r3, r4]\n    bl ov41_02245F14\n    pop {r4, pc}\n    cmp r4, #2\n    ldr r0, [r0]\n    bne _02249AE6\n    ldr r4, [r0]\n    add r4, #0x64\n    lsl r4, r4, #2\n    ldr r3, [r3, r4]\n    bl ov41_02245F14\n    pop {r4, pc}\n    mov r4, #0x76\n    lsl r4, r4, #2\n    ldr r3, [r3, r4]\n    bl ov41_022497A8\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02249AF4(void) {
    /* Original at 0x02249AF4 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r1, #0\n    ldr r1, [r0, #4]\n    add r4, r2, #0\n    cmp r1, #3\n    bge _02249B14\n    lsl r1, r5, #0x10\n    lsl r2, r4, #0x10\n    ldr r0, [r0]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ov41_02245F9C\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    ldr r6, [r0]\n    add r1, sp, #4\n    add r0, r6, #0\n    add r2, sp, #0\n    bl ov41_022497A0\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r1, r0, #1\n    lsr r0, r2, #0x1f\n    add r0, r2, r0\n    asr r2, r0, #1\n    str r1, [sp, #4]\n    str r2, [sp]\n    add r0, r6, #0\n    add r1, r5, r1\n    add r2, r4, r2\n    bl ov41_0224971C\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02249B44(void) {
    /* Original at 0x02249B44 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    ldr r3, [r0, #4]\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r3, #3\n    bge _02249B5C\n    ldr r0, [r0]\n    bl ov41_02245FA8\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    ldr r6, [r0]\n    add r0, r6, #0\n    bl ov41_02249780\n    add r0, r6, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov41_022497A0\n    ldr r1, [sp, #4]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r2, r0, #1\n    ldr r1, [sp]\n    str r2, [sp, #4]\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    str r0, [sp]\n    ldr r0, [r5]\n    sub r0, r0, r2\n    str r0, [r5]\n    ldr r1, [r4]\n    ldr r0, [sp]\n    sub r0, r1, r0\n    str r0, [r4]\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_02249B94(void) {
    /* Original at 0x02249B94 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, [r0, #4]\n    ldr r0, [r0]\n    cmp r3, #3\n    bge _02249BA4\n    bl ov41_02245FD8\n    pop {r3, pc}\n    bl ov41_022497A0\n    pop {r3, pc}"
    );
    #endif
}

void ov41_02249BAC(void) {
    /* Original at 0x02249BAC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    ldr r2, [r0, #4]\n    add r6, r1, #0\n    add r5, r3, #0\n    ldr r4, [sp, #0x18]\n    cmp r2, #3\n    ldr r0, [r0]\n    bge _02249BCE\n    add r2, r5, #0\n    bl ov41_02246020\n    ldr r0, [r6]\n    str r0, [r7]\n    ldr r0, [r5]\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, sp, #0\n    bl ov41_02249888\n    add r0, sp, #0\n    ldrb r1, [r0]\n    str r1, [r6]\n    ldrb r1, [r0, #1]\n    str r1, [r7]\n    ldrb r1, [r0, #2]\n    str r1, [r5]\n    ldrb r0, [r0, #3]\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02249BE8(void) {
    /* Original at 0x02249BE8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r4, [r5, #8]\n    add r6, r1, #0\n    add r7, r2, #0\n    cmp r4, r5\n    beq _02249C1A\n    add r0, r4, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl ov41_02249B44\n    ldr r0, [sp, #4]\n    add r1, r0, r6\n    ldr r0, [sp]\n    str r1, [sp, #4]\n    add r2, r0, r7\n    str r2, [sp]\n    add r0, r4, #0\n    bl ov41_02249AF4\n    ldr r4, [r4, #8]\n    cmp r4, r5\n    bne _02249BF8\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02249C20(void) {
    /* Original at 0x02249C20 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r4, r1, #0\n    add r6, r2, #0\n    add r5, r0, #0\n    add r1, sp, #0x20\n    add r2, sp, #0x1c\n    add r7, r3, #0\n    bl ov41_02249B94\n    add r0, r5, #0\n    add r1, sp, #0x18\n    add r2, sp, #0x14\n    bl ov41_02249B44\n    add r0, sp, #4\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, sp, #0x10\n    add r2, sp, #8\n    add r3, sp, #0xc\n    bl ov41_02249BAC\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    add r0, r1, r0\n    str r0, [r4]\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0x1c]\n    add r1, r1, r0\n    ldr r0, [sp, #4]\n    sub r0, r1, r0\n    str r0, [r6]\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    add r0, r1, r0\n    str r0, [r7]\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r1, r1, r0\n    ldr r0, [sp, #8]\n    sub r1, r1, r0\n    ldr r0, [sp, #0x38]\n    str r1, [r0]\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02249C7C(void) {
    /* Original at 0x02249C7C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    ldr r0, [r1]\n    str r0, [r2]\n    ldr r3, [r1, #0x14]\n    asr r0, r3, #2\n    lsr r0, r0, #0x1d\n    add r0, r3, r0\n    asr r0, r0, #3\n    str r0, [r2, #0xc]\n    ldr r3, [r1, #0x18]\n    asr r0, r3, #2\n    lsr r0, r0, #0x1d\n    add r0, r3, r0\n    asr r0, r0, #3\n    str r0, [r2, #0x10]\n    ldr r0, [r1, #0x1c]\n    ldr r3, _02249CC0 ; =ov41_02249E60\n    str r0, [r2, #0x1c]\n    ldr r0, [r1, #0x24]\n    str r0, [r2, #0x20]\n    ldr r0, [r1, #0x20]\n    str r0, [r2, #0x24]\n    ldr r0, [r1, #0x28]\n    str r0, [r2, #0x28]\n    ldr r0, [r1, #4]\n    str r0, [r2, #4]\n    ldr r0, [r1, #0x10]\n    str r0, [r2, #8]\n    add r0, r1, #0\n    add r1, r2, #0\n    add r1, #0x14\n    add r2, #0x18\n    bx r3\n    nop\n    _02249CC0: .word ov41_02249E60"
    );
    #endif
}

void ov41_02249CC4(void) {
    /* Original at 0x02249CC4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x1c]\n    ldr r0, [r4]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x2c\n    bl memset\n    pop {r4, pc}"
    );
    #endif
}

void ov41_02249CE0(void) {
    /* Original at 0x02249CE0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r1]\n    str r2, [r0]\n    ldr r2, [r1, #4]\n    str r2, [r0, #4]\n    ldr r2, [r1, #8]\n    str r2, [r0, #8]\n    mov r2, #0\n    str r2, [r0, #0xc]\n    str r2, [r0, #0x10]\n    ldr r1, [r1, #0xc]\n    str r1, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov41_02249CF8(void) {
    /* Original at 0x02249CF8 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r1, r0, r1\n    str r1, [r5, #0xc]\n    ldr r0, [r5, #8]\n    cmp r1, r0\n    ble _02249D5C\n    mov r2, #0\n    str r2, [r5, #0xc]\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    bne _02249D1C\n    ldr r1, [r5, #4]\n    mov r0, #1\n    str r0, [r5, #0x10]\n    b _02249D22\n    ldr r0, [r5]\n    ldr r1, [r0, #8]\n    str r2, [r5, #0x10]\n    ldr r0, [r5, #0x14]\n    mov r2, #0\n    str r0, [sp]\n    ldr r0, [r5]\n    add r3, sp, #0x14\n    ldr r0, [r0, #4]\n    bl GfGfxLoader_GetScrnData\n    ldr r3, [r5]\n    add r4, r0, #0\n    ldr r0, [r3, #0x18]\n    str r0, [sp]\n    ldr r0, [r3, #0xc]\n    str r0, [sp, #4]\n    ldr r0, [r3, #0x10]\n    str r0, [sp, #8]\n    ldr r0, [r3, #0x28]\n    str r0, [sp, #0xc]\n    ldr r0, [r3, #0x20]\n    str r0, [sp, #0x10]\n    ldr r0, [r3]\n    ldr r1, [r3, #0x1c]\n    ldr r2, [sp, #0x14]\n    ldr r3, [r3, #0x14]\n    bl ov41_02249F7C\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02249D60(void) {
    /* Original at 0x02249D60 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r1, [r5]\n    ldr r0, [r5, #0x14]\n    mov r2, #0\n    str r0, [sp]\n    ldr r0, [r1, #4]\n    ldr r1, [r1, #8]\n    add r3, sp, #0x14\n    bl GfGfxLoader_GetScrnData\n    ldr r3, [r5]\n    add r4, r0, #0\n    ldr r0, [r3, #0x18]\n    str r0, [sp]\n    ldr r0, [r3, #0xc]\n    str r0, [sp, #4]\n    ldr r0, [r3, #0x10]\n    str r0, [sp, #8]\n    ldr r0, [r3, #0x28]\n    str r0, [sp, #0xc]\n    ldr r0, [r3, #0x20]\n    str r0, [sp, #0x10]\n    ldr r0, [r3]\n    ldr r1, [r3, #0x1c]\n    ldr r2, [sp, #0x14]\n    ldr r3, [r3, #0x14]\n    bl ov41_02249F7C\n    add r0, r4, #0\n    bl Heap_Free\n    mov r1, #0x18\n    mov r0, #0\n    strb r0, [r5]\n    add r5, r5, #1\n    sub r1, r1, #1\n    bne _02249DA6\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02249DB4(void) {
    /* Original at 0x02249DB4 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    add r5, r1, #0\n    str r2, [sp]\n    str r3, [sp, #4]\n    ldr r0, _02249E3C ; =ov41_02249F0C\n    mov r1, #0x4c\n    mov r2, #0\n    mov r3, #0xd\n    bl CreateSysTaskAndEnvironment\n    bl SysTask_GetData\n    add r4, r0, #0\n    str r6, [r4]\n    add r7, r5, #0\n    add r3, r4, #4\n    mov r2, #6\n    ldmia r7!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02249DDA\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x20]\n    str r0, [r4, #0x34]\n    ldr r0, [sp]\n    str r1, [r4, #0x38]\n    bl _s32_div_f\n    str r0, [r4, #0x3c]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0x20]\n    bl _s32_div_f\n    str r0, [r4, #0x40]\n    ldr r0, [r6]\n    ldr r1, [r6, #0x1c]\n    bl Bg_GetXpos\n    str r0, [r4, #0x44]\n    ldr r0, [r6]\n    ldr r1, [r6, #0x1c]\n    bl Bg_GetYpos\n    str r0, [r4, #0x48]\n    mov r0, #0x80\n    str r0, [r5, #0x28]\n    mov r0, #5\n    str r0, [r5, #0x24]\n    ldr r1, [r5, #0x14]\n    ldr r0, [sp]\n    sub r0, r1, r0\n    str r0, [r5, #0x14]\n    ldr r1, [r5, #0x18]\n    ldr r0, [sp, #4]\n    sub r0, r1, r0\n    str r0, [r5, #0x18]\n    mov r0, #0xe\n    mov r1, #0\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov41_02249E60\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02249E3C: .word ov41_02249F0C"
    );
    #endif
}

void ov41_02249E40(void) {
    /* Original at 0x02249E40 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, [r0, #8]\n    add r0, #0xc\n    lsr r4, r2, #1\n    mov r3, #0\n    cmp r4, #0\n    ble _02249E5C\n    ldrh r2, [r0]\n    add r3, r3, #1\n    add r2, r2, r1\n    strh r2, [r0]\n    add r0, r0, #2\n    cmp r3, r4\n    blt _02249E4E\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov41_02249E60(void) {
    /* Original at 0x02249E60 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #0x14]\n    add r6, r2, #0\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    ldr r1, [r5, #0x18]\n    str r0, [sp, #0x18]\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x28]\n    str r0, [sp]\n    ldr r0, [r5, #0x2c]\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    ldr r1, [r5, #8]\n    ldr r2, [r5]\n    ldr r3, [r5, #0x1c]\n    bl ov41_02249FFC\n    ldr r0, [r5, #0x1c]\n    cmp r0, #4\n    bge _02249EA0\n    mov r2, #0\n    b _02249EA2\n    mov r2, #4\n    ldr r0, [r5, #0x20]\n    lsl r0, r0, #5\n    str r0, [sp]\n    ldr r0, [r5, #0x2c]\n    str r0, [sp, #4]\n    ldr r3, [r5, #0x24]\n    ldr r0, [r5, #4]\n    ldr r1, [r5, #0xc]\n    lsl r3, r3, #5\n    bl ov41_0224A04C\n    ldr r0, [r5, #0x2c]\n    mov r2, #0\n    str r0, [sp]\n    ldr r0, [r5, #4]\n    ldr r1, [r5, #0x10]\n    add r3, sp, #0x24\n    bl GfGfxLoader_GetScrnData\n    ldr r2, [sp, #0x24]\n    str r0, [sp, #0x20]\n    ldrh r0, [r2]\n    lsr r7, r0, #3\n    ldrh r0, [r2, #2]\n    add r3, r7, #0\n    lsr r0, r0, #3\n    str r0, [sp, #0x1c]\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x14]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x28]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x24]\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    ldr r1, [r5, #0x1c]\n    bl ov41_02249F7C\n    ldr r0, [sp, #0x20]\n    bl Heap_Free\n    cmp r4, #0\n    beq _02249EFE\n    str r7, [r4]\n    cmp r6, #0\n    beq _02249F06\n    ldr r0, [sp, #0x1c]\n    str r0, [r6]\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02249F0C(void) {
    /* Original at 0x02249F0C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x38]\n    sub r0, r0, #1\n    str r0, [r4, #0x38]\n    ldr r1, [r4]\n    bmi _02249F40\n    ldr r0, [r1]\n    ldr r1, [r1, #0x1c]\n    ldr r3, [r4, #0x3c]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r2, #2\n    bl ScheduleSetBgPosText\n    ldr r1, [r4]\n    ldr r3, [r4, #0x40]\n    ldr r0, [r1]\n    ldr r1, [r1, #0x1c]\n    mov r2, #5\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ScheduleSetBgPosText\n    pop {r3, r4, r5, pc}\n    ldr r0, [r1]\n    ldr r1, [r1, #0x1c]\n    ldr r3, [r4, #0x44]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r2, #0\n    bl ScheduleSetBgPosText\n    ldr r1, [r4]\n    ldr r3, [r4, #0x48]\n    ldr r0, [r1]\n    ldr r1, [r1, #0x1c]\n    mov r2, #3\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ScheduleSetBgPosText\n    ldr r0, [r4]\n    add r1, r4, #4\n    bl ov41_02249C7C\n    ldr r1, [r4, #0x34]\n    cmp r1, #0\n    beq _02249F74\n    mov r0, #1\n    str r0, [r1]\n    add r0, r5, #0\n    bl DestroySysTaskAndEnvironment\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_02249F7C(void) {
    /* Original at 0x02249F7C */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r1, #0\n    add r4, r2, #0\n    add r7, r0, #0\n    ldr r1, [sp, #0x3c]\n    add r0, r4, #0\n    add r6, r3, #0\n    bl ov41_02249E40\n    ldr r1, [sp, #0x30]\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    str r0, [sp]\n    ldr r3, [sp, #0x38]\n    str r2, [sp, #4]\n    add r4, #0xc\n    lsl r3, r3, #0x18\n    str r4, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    str r2, [sp, #0x18]\n    ldr r2, [sp, #0x34]\n    lsl r1, r5, #0x18\n    lsl r2, r2, #0x18\n    add r0, r7, #0\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl CopyToBgTilemapRect\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x30]\n    ldr r2, [sp, #0x34]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x40]\n    ldr r3, [sp, #0x38]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r1, r5, #0x18\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    str r0, [sp, #8]\n    add r0, r7, #0\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl BgTilemapRectChangePalette\n    lsl r1, r5, #0x18\n    add r0, r7, #0\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_02249FFC(void) {
    /* Original at 0x02249FFC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r0, #0\n    str r1, [sp, #4]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x14\n    add r5, r2, #0\n    add r6, r3, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x14\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0224A018\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #4]\n    str r0, [sp]\n    add r0, r7, #0\n    mov r2, #0\n    add r3, r4, #4\n    bl GfGfxLoader_GetCharData\n    str r0, [r4, #8]\n    str r5, [r4]\n    ldr r0, [sp, #0x20]\n    str r6, [r4, #0xc]\n    str r0, [r4, #0x10]\n    ldr r0, _0224A048 ; =ov41_0224A094\n    add r1, r4, #0\n    mov r2, #0x80\n    bl SysTask_CreateOnVWaitQueue\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224A048: .word ov41_0224A094"
    );
    #endif
}

void ov41_0224A04C(void) {
    /* Original at 0x0224A04C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    str r1, [sp]\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x14\n    add r5, r2, #0\n    add r6, r3, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x14\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0224A066\n    ldr r1, [sp]\n    ldr r3, [sp, #0x1c]\n    add r0, r7, #0\n    add r2, r4, #0\n    bl GfGfxLoader_GetPlttData\n    str r0, [r4, #4]\n    str r5, [r4, #8]\n    ldr r0, [sp, #0x18]\n    str r6, [r4, #0xc]\n    str r0, [r4, #0x10]\n    ldr r0, _0224A090 ; =ov41_0224A0D0\n    add r1, r4, #0\n    mov r2, #0x80\n    bl SysTask_CreateOnVWaitQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224A090: .word ov41_0224A0D0"
    );
    #endif
}

void ov41_0224A094(void) {
    /* Original at 0x0224A094 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #4]\n    add r5, r0, #0\n    ldr r0, [r1, #0x14]\n    ldr r1, [r1, #0x10]\n    bl DC_FlushRange\n    ldr r3, [r4, #4]\n    ldr r0, [r4, #0x10]\n    str r0, [sp]\n    ldr r1, [r4, #0xc]\n    ldr r2, [r3, #0x14]\n    lsl r1, r1, #0x18\n    ldr r0, [r4]\n    ldr r3, [r3, #0x10]\n    lsr r1, r1, #0x18\n    bl BG_LoadCharTilesData\n    add r0, r5, #0\n    bl SysTask_Destroy\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_0224A0D0(void) {
    /* Original at 0x0224A0D0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    ldr r1, [r4, #0x10]\n    ldr r0, [r0, #0xc]\n    bl DC_FlushRange\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _0224A0F4\n    ldr r0, [r4]\n    ldr r1, [r4, #0xc]\n    ldr r0, [r0, #0xc]\n    ldr r2, [r4, #0x10]\n    bl GX_LoadBGPltt\n    b _0224A104\n    cmp r0, #4\n    bne _0224A104\n    ldr r0, [r4]\n    ldr r1, [r4, #0xc]\n    ldr r0, [r0, #0xc]\n    ldr r2, [r4, #0x10]\n    bl GXS_LoadBGPltt\n    add r0, r5, #0\n    bl SysTask_Destroy\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_0224A118(void) {
    /* Original at 0x0224A118 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r5, #0\n    bne _0224A126\n    bl GF_AssertFail\n    cmp r4, #0\n    bne _0224A12E\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl Sprite_CreateAffine\n    str r0, [r5]\n    cmp r0, #0\n    bne _0224A13E\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    str r0, [r5, #4]\n    ldr r0, [r4, #8]\n    str r0, [r5, #8]\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0224A150\n    str r0, [r5, #0xc]\n    pop {r3, r4, r5, pc}\n    ldr r0, _0224A158 ; =ov41_0224A254\n    str r0, [r5, #0xc]\n    pop {r3, r4, r5, pc}\n    nop\n    _0224A158: .word ov41_0224A254"
    );
    #endif
}

void ov41_0224A15C(void) {
    /* Original at 0x0224A15C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x30\n    add r4, r1, #0\n    add r5, r0, #0\n    bl ov41_0224A118\n    ldr r0, [r4, #0x14]\n    str r0, [sp]\n    ldr r0, [r4, #0x10]\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x18]\n    str r0, [sp, #0xc]\n    ldr r0, [r5]\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x24]\n    str r0, [sp, #0x14]\n    ldr r0, [r4, #0x1c]\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x20]\n    str r0, [sp, #0x1c]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    str r0, [sp, #0x24]\n    ldr r0, [r4]\n    ldr r0, [r0, #0x28]\n    str r0, [sp, #0x28]\n    ldr r0, [r4]\n    ldr r0, [r0, #0x2c]\n    str r0, [sp, #0x2c]\n    add r0, sp, #0\n    bl sub_020135D8\n    str r0, [r5, #0x10]\n    add sp, #0x30\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_0224A1A8(void) {
    Sprite_Delete(0, 0x10);
}

void ov41_0224A1C0(void) {
    /* Original at 0x0224A1C0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov41_0224A1A8\n    ldr r0, [r4, #0x10]\n    bl FontOAM_Delete\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x20\n    bl memset\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224A1DC(void) {
    /* Original at 0x0224A1DC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, [r0, #4]\n    cmp r1, r2\n    bne _0224A1EA\n    ldr r1, [r0, #8]\n    ldr r2, [r0, #0xc]\n    blx r2\n    pop {r3, pc}"
    );
    #endif
}

void ov41_0224A1EC(void) {
    /* Original at 0x0224A1EC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r2, #0\n    mov r4, #2\n    add r5, #0x20\n    cmp r4, r7\n    beq _0224A204\n    add r0, r5, #0\n    bl ov41_0224A264\n    b _0224A228\n    cmp r6, #0\n    bne _0224A216\n    add r0, r5, #0\n    bl ov41_0224A270\n    ldr r0, _0224A234 ; =0x0000067C\n    bl PlaySE\n    b _0224A228\n    cmp r6, #2\n    bne _0224A222\n    add r0, r5, #0\n    bl ov41_0224A258\n    b _0224A228\n    add r0, r5, #0\n    bl ov41_0224A270\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    ble _0224A1F8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224A234: .word 0x0000067C"
    );
    #endif
}

void ov41_0224A238(void) {
    GF_AssertFail();
}

void ov41_0224A254(void) {
    /* Original at 0x0224A254 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov41_0224A258(void) {
    Sprite_SetAnimationFrame();
}

void ov41_0224A264(void) {
    Sprite_SetAnimationFrame();
}

void ov41_0224A270(void) {
    Sprite_SetAnimationFrame();
}

void ov41_0224A27C(void) {
    /* Original at 0x0224A27C */
    /* Requires manual decompilation - 160 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r0, #0x80\n    add r4, r1, #0\n    str r2, [r0]\n    mov r0, #1\n    mov r1, #0xd\n    bl FontSystem_NewInit\n    str r0, [r5, #0x64]\n    add r0, r4, #0\n    bl ov41_0224A7F8\n    mov r0, #0x90\n    str r0, [sp]\n    mov r0, #0x28\n    str r0, [sp, #4]\n    mov r0, #0x20\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r1, #0\n    add r2, r4, #0\n    mov r3, #0x30\n    bl ov41_0224A6C4\n    mov r0, #0x28\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x6c\n    mov r1, #0\n    mov r2, #0x30\n    mov r3, #0x98\n    bl ov41_0224A7E0\n    mov r0, #0x90\n    str r0, [sp]\n    mov r0, #0x28\n    str r0, [sp, #4]\n    mov r0, #0x20\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x10\n    mov r1, #1\n    add r2, r4, #0\n    mov r3, #8\n    bl ov41_0224A6C4\n    mov r0, #0x28\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x6c\n    mov r1, #1\n    mov r2, #8\n    mov r3, #0x98\n    bl ov41_0224A7E0\n    mov r0, #0x90\n    str r0, [sp]\n    mov r0, #0x28\n    str r0, [sp, #4]\n    mov r0, #0x2a\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x20\n    mov r1, #2\n    add r2, r4, #0\n    mov r3, #0x60\n    bl ov41_0224A6C4\n    mov r0, #0x28\n    str r0, [sp]\n    mov r0, #0x22\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x6c\n    mov r1, #2\n    mov r2, #0x60\n    mov r3, #0x9c\n    bl ov41_0224A7E0\n    mov r0, #0x90\n    str r0, [sp]\n    mov r0, #0x28\n    str r0, [sp, #4]\n    mov r0, #0x2a\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x30\n    mov r1, #3\n    add r2, r4, #0\n    mov r3, #0x88\n    bl ov41_0224A6C4\n    mov r0, #0x28\n    str r0, [sp]\n    mov r0, #0x22\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x6c\n    mov r1, #3\n    mov r2, #0x88\n    mov r3, #0x9c\n    bl ov41_0224A7E0\n    mov r0, #2\n    mov r1, #0xe\n    bl FontID_Alloc\n    mov r0, #9\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0x1b\n    mov r2, #0xd7\n    mov r3, #0\n    bl ov41_0224A928\n    add r6, r0, #0\n    str r6, [sp]\n    mov r0, #0xb8\n    str r0, [sp, #4]\n    mov r0, #0x90\n    str r0, [sp, #8]\n    mov r0, #0x48\n    str r0, [sp, #0xc]\n    mov r0, #0x2a\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    ldr r3, [r5, #0x64]\n    add r0, #0x40\n    mov r1, #4\n    add r2, r4, #0\n    bl ov41_0224A734\n    mov r0, #0x48\n    str r0, [sp]\n    mov r0, #0x22\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x6c\n    mov r1, #4\n    mov r2, #0xb8\n    mov r3, #0x9c\n    bl ov41_0224A7E0\n    add r0, r6, #0\n    bl ov41_0224A9B0\n    mov r0, #2\n    bl FontID_Release\n    mov r0, #1\n    str r0, [r5, #0x60]\n    add r0, r4, #0\n    bl ov41_0224A888\n    add r0, r5, #0\n    add r0, #0x20\n    bl ov41_0224A258\n    mov r0, #0xd\n    str r0, [sp]\n    add r0, r5, #0\n    ldr r2, _0224A3E0 ; =ov41_0224A60C\n    add r0, #0x6c\n    mov r1, #5\n    add r3, r5, #0\n    bl TouchHitboxController_Create\n    str r0, [r5, #0x68]\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _0224A3E0: .word ov41_0224A60C"
    );
    #endif
}

void ov41_0224A3E4(void) {
    /* Original at 0x0224A3E4 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov41_02246388\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov41_0224639C\n    add r0, r4, #0\n    bl ObjCharTransfer_ResetTransferTasksByResID\n    add r4, r4, #1\n    cmp r4, #5\n    blt _0224A3EC\n    mov r0, #0\n    bl ObjPlttTransfer_FreeTaskByID\n    mov r0, #1\n    bl ObjPlttTransfer_FreeTaskByID\n    mov r5, #0\n    add r4, r6, #0\n    add r0, r4, #0\n    bl ov41_0224A1A8\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #4\n    blt _0224A418\n    add r0, r6, #0\n    add r0, #0x54\n    bl sub_02021B5C\n    add r0, r6, #0\n    add r0, #0x40\n    bl ov41_0224A1C0\n    ldr r0, [r6, #0x64]\n    bl sub_020135AC\n    ldr r0, [r6, #0x68]\n    bl TouchHitboxController_Destroy\n    mov r0, #0\n    str r0, [r6, #0x68]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_0224A448(void) {
    /* Original at 0x0224A448 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x68]\n    mov r4, #0xff\n    cmp r0, #0\n    bne _0224A458\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0x84\n    ldrh r0, [r0]\n    cmp r0, #0\n    beq _0224A48C\n    add r0, r5, #0\n    add r0, #0x84\n    ldrh r0, [r0]\n    sub r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x84\n    strh r1, [r0]\n    add r1, r5, #0\n    add r1, #0x84\n    ldrh r2, [r1]\n    mov r1, #1\n    add r0, r5, #0\n    eor r2, r1\n    ldr r1, _0224A4E4 ; =ov41_0224C094\n    add r0, #0x86\n    ldrb r1, [r1, r2]\n    ldrh r0, [r0]\n    add r2, r5, #0\n    bl ov41_0224A60C\n    pop {r3, r4, r5, pc}\n    ldr r0, _0224A4E8 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    add r2, r1, #0\n    tst r2, r0\n    beq _0224A49C\n    mov r4, #4\n    b _0224A4C2\n    mov r2, #0x40\n    tst r2, r1\n    beq _0224A4A6\n    mov r4, #1\n    b _0224A4C2\n    mov r2, #0x80\n    tst r2, r1\n    beq _0224A4B0\n    mov r4, #0\n    b _0224A4C2\n    mov r2, #0x20\n    tst r2, r1\n    beq _0224A4BA\n    mov r4, #2\n    b _0224A4C2\n    mov r2, #0x10\n    tst r1, r2\n    beq _0224A4C2\n    add r4, r0, #0\n    cmp r4, #0xff\n    beq _0224A4E2\n    add r0, r5, #0\n    add r0, #0x86\n    strh r4, [r0]\n    add r0, r5, #0\n    mov r1, #2\n    add r0, #0x84\n    strh r1, [r0]\n    add r0, r5, #0\n    add r0, #0x86\n    ldrh r0, [r0]\n    mov r1, #0\n    add r2, r5, #0\n    bl ov41_0224A60C\n    pop {r3, r4, r5, pc}\n    _0224A4E4: .word ov41_0224C094\n    _0224A4E8: .word gSystem"
    );
    #endif
}

void ov41_0224A4EC(void) {
    /* Original at 0x0224A4EC */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x84\n    ldrh r0, [r0]\n    cmp r0, #0\n    beq _0224A4FC\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _0224A526\n    bl System_GetTouchHeld\n    cmp r0, #0\n    beq _0224A514\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _0224A548 ; =gSystem\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    beq _0224A542\n    add r4, #0x80\n    ldr r0, [r4]\n    mov r1, #0\n    str r1, [r0]\n    b _0224A542\n    ldr r0, _0224A548 ; =gSystem\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    beq _0224A532\n    mov r0, #0\n    pop {r4, pc}\n    bl System_GetTouchHeld\n    cmp r0, #0\n    beq _0224A542\n    add r4, #0x80\n    ldr r0, [r4]\n    mov r1, #1\n    str r1, [r0]\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0224A548: .word gSystem"
    );
    #endif
}

void ov41_0224A54C(void) {
    /* Original at 0x0224A54C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x68]\n    cmp r0, #0\n    bne _0224A55A\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl ov41_0224A4EC\n    cmp r0, #0\n    bne _0224A57E\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0224A578\n    add r0, r4, #0\n    bl ov41_0224A448\n    pop {r4, pc}\n    ldr r0, [r4, #0x68]\n    bl TouchHitboxController_IsTriggered\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224A580(void) {
    ov41_0224A8B0(3);
    ov41_0224A8D4(r4, 3);
    ov41_0224A1EC(r4, 2, 3);
}

void ov41_0224A5A4(void) {
    /* Original at 0x0224A5A4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    add r6, r1, #0\n    add r7, r2, #0\n    mov r4, #0\n    add r5, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov41_0224A9BC\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #4\n    blt _0224A5B0\n    ldr r0, [sp]\n    add r1, r6, #0\n    add r0, #0x40\n    add r2, r7, #0\n    str r0, [sp]\n    bl ov41_0224A9F8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224A5D4(void) {
    /* Original at 0x0224A5D4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r5, #0\n    bne _0224A5E6\n    bl GF_AssertFail\n    cmp r4, #4\n    bge _0224A5FA\n    lsl r0, r4, #4\n    ldr r3, [sp, #0x18]\n    add r0, r5, r0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov41_0224A238\n    pop {r3, r4, r5, r6, r7, pc}\n    add r5, #0x40\n    ldr r3, [sp, #0x18]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov41_0224A238\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224A60C(void) {
    /* Original at 0x0224A60C */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r6, #4\n    bhi _0224A6B8\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224A624: ; jump table\n    add r0, r4, #0\n    bl ov41_0224A8B0\n    mov r1, #0x1a\n    add r0, r4, #0\n    lsl r1, r1, #6\n    mov r2, #0\n    add r3, r5, #0\n    bl ov41_0224A918\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov41_0224A1DC\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r0, #0x10\n    bl ov41_0224A8B0\n    add r0, r4, #0\n    mov r1, #0x1a\n    add r0, #0x10\n    lsl r1, r1, #6\n    mov r2, #0\n    add r3, r5, #0\n    bl ov41_0224A918\n    add r4, #0x10\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov41_0224A1DC\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov41_0224A1EC\n    lsl r0, r6, #4\n    add r0, r4, r0\n    add r1, r5, #0\n    bl ov41_0224A1DC\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x60]\n    cmp r0, #1\n    bne _0224A6BC\n    add r0, r4, #0\n    add r0, #0x40\n    bl ov41_0224A8B0\n    add r0, r4, #0\n    add r0, #0x40\n    add r1, r5, #0\n    bl ov41_0224A8D4\n    add r0, r4, #0\n    ldr r1, _0224A6C0 ; =0x000005E2\n    add r0, #0x40\n    mov r2, #0\n    add r3, r5, #0\n    bl ov41_0224A918\n    add r4, #0x40\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov41_0224A1DC\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    nop\n    _0224A6C0: .word 0x000005E2"
    );
    #endif
}

void ov41_0224A6C4(void) {
    /* Original at 0x0224A6C4 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x90\n    add r6, r0, #0\n    mov r0, #0\n    str r1, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    add r5, r2, #0\n    str r0, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldr r0, [r5, #0x48]\n    add r4, r3, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x4c]\n    add r3, r1, #0\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x50]\n    str r0, [sp, #0x1c]\n    ldr r0, [r5, #0x54]\n    str r0, [sp, #0x20]\n    str r2, [sp, #0x24]\n    str r2, [sp, #0x28]\n    add r0, sp, #0x5c\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5, #0x44]\n    mov r2, #0\n    mov r1, #1\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x5c\n    str r0, [sp, #0x30]\n    lsl r0, r4, #0xc\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0xa0]\n    str r1, [sp, #0x54]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x38]\n    mov r0, #2\n    str r0, [sp, #0x50]\n    mov r0, #0xe\n    str r0, [sp, #0x58]\n    add r0, sp, #0x2c\n    str r0, [sp, #0x80]\n    str r1, [sp, #0x8c]\n    add r0, r6, #0\n    add r1, sp, #0x80\n    str r2, [sp, #0x3c]\n    str r2, [sp, #0x84]\n    str r2, [sp, #0x88]\n    bl ov41_0224A118\n    add sp, #0x90\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_0224A734(void) {
    /* Original at 0x0224A734 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0xa8\n    add r5, r0, #0\n    mov r0, #0\n    str r1, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    add r4, r2, #0\n    str r0, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldr r0, [r4, #0x48]\n    add r6, r3, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r4, #0x4c]\n    add r3, r1, #0\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x50]\n    str r0, [sp, #0x1c]\n    ldr r0, [r4, #0x54]\n    str r0, [sp, #0x20]\n    str r2, [sp, #0x24]\n    str r2, [sp, #0x28]\n    add r0, sp, #0x5c\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r4, #0x44]\n    mov r2, #0xe\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x5c\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0xbc]\n    str r2, [sp, #0x58]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0xc0]\n    add r2, sp, #0x2c\n    lsl r0, r0, #0xc\n    mov r1, #2\n    str r2, [sp, #0x80]\n    ldr r2, [sp, #0xb8]\n    str r0, [sp, #0x38]\n    mov r0, #0\n    str r1, [sp, #0x50]\n    mov r1, #1\n    str r0, [sp, #0x3c]\n    str r1, [sp, #0x54]\n    str r0, [sp, #0x84]\n    str r0, [sp, #0x88]\n    str r0, [sp, #0x9c]\n    mov r0, #0x13\n    str r1, [sp, #0x8c]\n    str r6, [sp, #0x94]\n    str r2, [sp, #0x90]\n    str r0, [sp, #0xa0]\n    ldr r0, [r4, #0x4c]\n    bl SpriteResourceCollection_Find\n    mov r1, #0\n    bl SpriteTransfer_GetPaletteProxy\n    str r0, [sp, #0x98]\n    ldr r0, [sp, #0xb8]\n    mov r1, #1\n    mov r2, #0xd\n    bl sub_02013688\n    mov r1, #1\n    add r3, r5, #0\n    add r2, r1, #0\n    add r3, #0x14\n    bl sub_02021AC8\n    cmp r0, #0\n    bne _0224A7D0\n    bl GF_AssertFail\n    ldr r0, [r5, #0x18]\n    add r1, sp, #0x80\n    str r0, [sp, #0xa4]\n    add r0, r5, #0\n    bl ov41_0224A15C\n    add sp, #0xa8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_0224A7E0(void) {
    /* Original at 0x0224A7E0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    strb r3, [r0, r1]\n    add r1, r0, r1\n    ldr r0, [sp, #4]\n    strb r2, [r1, #2]\n    add r0, r3, r0\n    strb r0, [r1, #1]\n    ldr r0, [sp]\n    add r0, r2, r0\n    strb r0, [r1, #3]\n    bx lr"
    );
    #endif
}

void ov41_0224A7F8(void) {
    /* Original at 0x0224A7F8 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x6b\n    mov r4, #0\n    str r0, [sp, #0xc]\n    mov r7, #0x6a\n    mov r6, #0x69\n    mov r0, #1\n    str r0, [sp]\n    mov r1, #6\n    str r4, [sp, #4]\n    lsl r1, r1, #6\n    ldr r1, [r5, r1]\n    ldr r2, [sp, #0xc]\n    add r0, r5, #0\n    mov r3, #0\n    bl ov41_022462E4\n    mov r1, #6\n    str r4, [sp]\n    lsl r1, r1, #6\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r2, r7, #0\n    mov r3, #0\n    bl ov41_02246328\n    mov r1, #6\n    str r4, [sp]\n    lsl r1, r1, #6\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #0\n    bl ov41_02246344\n    ldr r0, [sp, #0xc]\n    add r4, r4, #1\n    add r0, r0, #3\n    str r0, [sp, #0xc]\n    add r7, r7, #3\n    add r6, r6, #3\n    cmp r4, #5\n    blt _0224A808\n    mov r0, #1\n    str r0, [sp]\n    mov r1, #3\n    str r1, [sp, #4]\n    mov r3, #0\n    str r3, [sp, #8]\n    lsl r1, r1, #7\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #0x68\n    bl ov41_02246304\n    mov r1, #1\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r1, #6\n    lsl r1, r1, #6\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    mov r2, #0x78\n    mov r3, #0\n    bl ov41_02246304\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224A888(void) {
    /* Original at 0x0224A888 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov41_02246360\n    add r4, r4, #1\n    cmp r4, #5\n    blt _0224A88E\n    add r0, r5, #0\n    mov r1, #0\n    bl ov41_02246374\n    add r0, r5, #0\n    mov r1, #1\n    bl ov41_02246374\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_0224A8B0(void) {
    /* Original at 0x0224A8B0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _0224A8BC\n    bl ov41_0224A270\n    pop {r3, pc}\n    cmp r1, #2\n    bne _0224A8C6\n    bl ov41_0224A258\n    pop {r3, pc}\n    cmp r1, #1\n    beq _0224A8CE\n    cmp r1, #3\n    bne _0224A8D2\n    bl ov41_0224A264\n    pop {r3, pc}"
    );
    #endif
}

void ov41_0224A8D4(void) {
    /* Original at 0x0224A8D4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bne _0224A8F0\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    mov r2, #0xf\n    bl sub_020136B4\n    ldr r0, [r5, #0x10]\n    mov r1, #4\n    bl TextOBJ_SetPaletteNum\n    pop {r3, r4, r5, pc}\n    cmp r4, #1\n    bne _0224A8FE\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    mov r2, #0x13\n    bl sub_020136B4\n    cmp r4, #3\n    bne _0224A914\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    mov r2, #0x13\n    bl sub_020136B4\n    ldr r0, [r5, #0x10]\n    mov r1, #3\n    bl TextOBJ_SetPaletteNum\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_0224A918(void) {
    PlaySE();
}

void ov41_0224A928(void) {
    /* Original at 0x0224A928 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r4, r3, #0\n    mov r0, #0\n    mov r3, #0xd\n    bl NewMsgDataFromNarc\n    add r7, r0, #0\n    bne _0224A940\n    bl GF_AssertFail\n    add r0, r7, #0\n    add r1, r4, #0\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    mov r0, #0xe\n    mov r1, #1\n    bl AllocWindows\n    add r4, r0, #0\n    bl InitWindow\n    mov r0, #0\n    ldr r2, [sp, #0x28]\n    ldr r3, [sp, #0x2c]\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r6, #0x40]\n    add r1, r4, #0\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl AddTextWindowTopLeftCorner\n    ldr r3, [sp, #0x28]\n    mov r0, #2\n    add r1, r5, #0\n    mov r2, #0\n    lsl r3, r3, #3\n    bl FontID_String_GetCenterAlignmentX\n    mov r1, #0\n    add r3, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0224A9AC ; =0x00010203\n    add r2, r5, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #2\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl DestroyMsgData\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224A9AC: .word 0x00010203"
    );
    #endif
}

void ov41_0224A9B0(void) {
    WindowArray_Delete();
}

void ov41_0224A9BC(void) {
    /* Original at 0x0224A9BC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r1, [sp]\n    lsl r0, r4, #0xc\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    lsl r0, r6, #0xc\n    add r0, r1, r0\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    add r1, r7, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224A9F8(void) {
    /* Original at 0x0224A9F8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov41_0224A9BC\n    ldr r0, [r4, #0x10]\n    bl sub_02013728\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224AA08(void) {
    /* Original at 0x0224AA08 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r6, r2, #0\n    mov r1, #1\n    add r5, r0, #0\n    tst r1, r6\n    beq _0224AA22\n    mov r2, #0x52\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    mov r0, #2\n    tst r0, r6\n    beq _0224AA30\n    ldr r1, [r4]\n    add r0, r5, #0\n    bl ov41_0224ACA4\n    mov r0, #4\n    add r1, r6, #0\n    tst r1, r0\n    beq _0224AA54\n    mov r1, #0x1b\n    str r1, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x1f\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r4]\n    add r0, #0x2c\n    mov r2, #2\n    mov r3, #0x13\n    bl ov41_0224AD0C\n    mov r0, #8\n    tst r0, r6\n    beq _0224AA6C\n    ldr r0, [r4, #0x24]\n    str r0, [sp]\n    add r0, r5, #0\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0x10]\n    add r0, #0x38\n    bl ov41_0224AED8\n    mov r0, #0x10\n    tst r0, r6\n    beq _0224AA8C\n    ldr r0, [r4]\n    str r0, [sp]\n    ldr r0, [r4, #0x20]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x24]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0x1c]\n    add r0, #0xa0\n    bl ov41_0224B118\n    mov r0, #0x20\n    tst r0, r6\n    beq _0224AB02\n    mov r0, #0x1b\n    str r0, [sp]\n    mov r2, #2\n    str r2, [sp, #4]\n    mov r0, #0x8b\n    str r0, [sp, #8]\n    mov r3, #1\n    str r3, [sp, #0xc]\n    add r0, #0xa9\n    ldr r1, [r4]\n    add r0, r5, r0\n    bl ov41_0224AD0C\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0224AB3C ; =0x0001020F\n    mov r1, #0x1b\n    str r0, [sp, #8]\n    mov r0, #0xff\n    str r0, [sp, #0xc]\n    add r0, #0x35\n    ldr r0, [r5, r0]\n    ldr r2, [r4, #0x14]\n    mov r3, #6\n    bl ov41_0224AE24\n    mov r0, #0x48\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _0224AB3C ; =0x0001020F\n    mov r1, #0x1b\n    str r0, [sp, #8]\n    mov r0, #0xff\n    str r0, [sp, #0xc]\n    add r0, #0x35\n    ldr r0, [r5, r0]\n    ldr r2, [r4, #0x14]\n    ldr r3, [r4, #0x18]\n    bl ov41_0224AE24\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    mov r2, #1\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r3, r2, #0\n    bl DrawFrameAndWindow2\n    ldr r0, [r4, #4]\n    str r0, [r5, #0x30]\n    ldr r0, [r4, #8]\n    str r0, [r5, #0x34]\n    ldr r0, [r4]\n    ldr r1, [r4, #0xc]\n    bl ov41_0224ACDC\n    ldr r0, [r4, #0xc]\n    bl Options_GetFrame\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [r4, #0xc]\n    bl Options_GetTextFrameDelay\n    mov r1, #5\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #8\n    ldr r0, [r5, r0]\n    sub r1, #8\n    orr r0, r6\n    str r0, [r5, r1]\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0224AB3C: .word 0x0001020F"
    );
    #endif
}

void ov41_0224AB40(void) {
    /* Original at 0x0224AB40 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x4e\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    mov r1, #2\n    tst r1, r2\n    beq _0224AB60\n    bl ov41_0224AD7C\n    mov r1, #0x4e\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    mov r0, #2\n    bic r2, r0\n    str r2, [r4, r1]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    mov r0, #4\n    tst r0, r1\n    beq _0224AB7E\n    ldr r0, [r4, #0x2c]\n    bl ov41_0224AD84\n    mov r1, #0x4e\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    mov r0, #4\n    bic r2, r0\n    str r2, [r4, r1]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    mov r0, #8\n    tst r0, r1\n    beq _0224ABA0\n    add r0, r4, #0\n    ldr r1, [r4, #0x34]\n    add r0, #0x38\n    bl ov41_0224AFD4\n    mov r1, #0x4e\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    mov r0, #8\n    bic r2, r0\n    str r2, [r4, r1]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    mov r0, #0x10\n    tst r0, r1\n    beq _0224ABC2\n    add r0, r4, #0\n    ldr r1, [r4, #0x34]\n    add r0, #0xa0\n    bl ov41_0224B21C\n    mov r1, #0x4e\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    mov r0, #0x10\n    bic r2, r0\n    str r2, [r4, r1]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    mov r1, #0x20\n    tst r1, r2\n    beq _0224ABE2\n    sub r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov41_0224AD84\n    mov r1, #0x4e\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    mov r0, #0x20\n    bic r2, r0\n    str r2, [r4, r1]\n    mov r2, #0x52\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224ABF0(void) {
    ov41_0224B250(0x10, 0x4e);
}

void ov41_0224AC08(void) {
    /* Original at 0x0224AC08 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    add r4, r1, #0\n    ldr r1, [r5, r0]\n    mov r0, #4\n    add r6, r2, #0\n    add r7, r3, #0\n    tst r0, r1\n    bne _0224AC24\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xff\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x2c]\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov41_0224AD90\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224AC40(void) {
    /* Original at 0x0224AC40 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    add r4, r1, #0\n    ldr r1, [r5, r0]\n    mov r0, #4\n    add r6, r2, #0\n    add r7, r3, #0\n    tst r0, r1\n    bne _0224AC5C\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #5\n    lsl r0, r0, #6\n    ldr r1, [r5, r0]\n    add r0, r0, #4\n    str r1, [sp, #8]\n    add r0, r5, r0\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x2c]\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov41_0224ADD8\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224AC80(void) {
    String_Delete(0x51, 0x51, 0);
}

void ov41_0224AC98(void) {
    ov41_0224AF8C();
}

void ov41_0224ACA4(void) {
    /* Original at 0x0224ACA4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x30\n    str r1, [sp]\n    mov r1, #0x1a\n    str r1, [sp, #4]\n    mov r1, #0xe0\n    str r1, [sp, #8]\n    mov r1, #0xe1\n    str r1, [sp, #0xc]\n    mov r2, #0\n    mov r1, #0xe2\n    str r1, [sp, #0x10]\n    mov r1, #4\n    str r1, [sp, #0x1c]\n    mov r1, #1\n    str r1, [sp, #0x20]\n    mov r1, #0xe\n    str r1, [sp, #0x2c]\n    add r1, sp, #0\n    str r2, [sp, #0x14]\n    str r2, [sp, #0x18]\n    str r2, [sp, #0x24]\n    str r2, [sp, #0x28]\n    bl ov41_02249C7C\n    add sp, #0x30\n    pop {r3, pc}"
    );
    #endif
}

void ov41_0224ACDC(void) {
    /* Original at 0x0224ACDC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r0, r1, #0\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xe\n    mov r2, #1\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #5\n    add r3, r2, #0\n    bl LoadUserFrameGfx2\n    mov r0, #4\n    mov r1, #0x40\n    mov r2, #0xe\n    bl LoadFontPal1\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224AD0C(void) {
    /* Original at 0x0224AD0C */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r3, #0\n    mov r0, #0xe\n    mov r1, #1\n    add r4, r2, #0\n    bl AllocWindows\n    str r0, [r5]\n    bl InitWindow\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x28]\n    lsl r3, r4, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    mov r2, #5\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x30]\n    lsr r3, r3, #0x18\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r1, [r5]\n    add r0, r7, #0\n    bl AddWindowParameterized\n    ldr r0, [r5]\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x34]\n    cmp r0, #0\n    beq _0224AD70\n    mov r2, #1\n    ldr r0, [r5]\n    mov r1, #0\n    add r3, r2, #0\n    bl DrawFrameAndWindow2\n    ldr r0, [r5]\n    bl CopyWindowToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224AD7C(void) {
    ov41_02249CC4();
}

void ov41_0224AD84(void) {
    WindowArray_Delete();
}

void ov41_0224AD90(void) {
    /* Original at 0x0224AD90 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    mov r1, #0xf\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x28]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldr r0, _0224ADD4 ; =0x0001020F\n    add r3, r7, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl ov41_0224AE24\n    mov r2, #1\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    add r3, r2, #0\n    bl DrawFrameAndWindow2\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224ADD4: .word 0x0001020F"
    );
    #endif
}

void ov41_0224ADD8(void) {
    /* Original at 0x0224ADD8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    mov r1, #0xf\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x28]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r2, r6, #0\n    str r0, [sp, #4]\n    ldr r0, _0224AE20 ; =0x0001020F\n    add r3, r7, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x34]\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl ov41_0224AE78\n    mov r2, #1\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    add r3, r2, #0\n    bl DrawFrameAndWindow2\n    add r0, r4, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0224AE20: .word 0x0001020F"
    );
    #endif
}

void ov41_0224AE24(void) {
    /* Original at 0x0224AE24 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r4, r3, #0\n    mov r0, #0\n    mov r3, #0xd\n    bl NewMsgDataFromNarc\n    add r5, r0, #0\n    bne _0224AE3C\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, [sp, #0x24]\n    ldr r3, [sp, #0x20]\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    mov r1, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    add r2, r4, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r6, r0, #0\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    bl DestroyMsgData\n    add r0, r6, #0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_0224AE78(void) {
    /* Original at 0x0224AE78 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    ldr r4, [sp, #0x38]\n    add r7, r0, #0\n    ldr r0, [r4]\n    add r5, r1, #0\n    add r6, r2, #0\n    str r3, [sp, #0x10]\n    cmp r0, #0\n    beq _0224AE90\n    bl GF_AssertFail\n    mov r0, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    mov r3, #0xd\n    bl NewMsgDataFromNarc\n    add r5, r0, #0\n    bne _0224AEA4\n    bl GF_AssertFail\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    bl NewString_ReadMsgData\n    str r0, [r4]\n    ldr r0, [sp, #0x2c]\n    ldr r3, [sp, #0x28]\n    str r0, [sp]\n    ldr r0, [sp, #0x34]\n    mov r1, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r2, [r4]\n    add r0, r7, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r4, r0, #0\n    add r0, r5, #0\n    bl DestroyMsgData\n    add r0, r4, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224AED8(void) {
    /* Original at 0x0224AED8 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x6c\n    add r5, r1, #0\n    mov r1, #0x67\n    str r1, [sp]\n    mov r1, #0xe1\n    str r1, [sp, #4]\n    mov r1, #0x66\n    str r1, [sp, #8]\n    mov r1, #0x65\n    str r1, [sp, #0xc]\n    mov r1, #2\n    str r1, [sp, #0x10]\n    mov r1, #0x7d\n    add r4, r2, #0\n    str r3, [sp, #0x1c]\n    lsl r1, r1, #4\n    str r1, [sp, #0x14]\n    ldr r3, [sp, #0x80]\n    str r0, [sp, #0x18]\n    add r1, r4, #0\n    mov r2, #0xe\n    bl ov41_0224AFF8\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    add r2, sp, #0x48\n    mov r3, #0\n    bl ov41_0224B0B8\n    add r0, sp, #0x48\n    str r0, [sp, #0x2c]\n    mov r0, #2\n    str r0, [sp, #0x40]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x3c]\n    mov r0, #0xe\n    str r0, [sp, #0x44]\n    mov r0, #0x68\n    ldr r7, [sp, #0x24]\n    str r5, [sp, #0x28]\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x20]\n    mov r6, #0\n    str r0, [sp, #0x34]\n    lsl r1, r0, #0xc\n    mov r0, #2\n    lsl r0, r0, #0x14\n    str r1, [sp, #0x34]\n    add r0, r1, r0\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x18]\n    lsl r1, r7, #2\n    mov r4, #0x26\n    add r5, r0, r1\n    str r4, [sp, #0x30]\n    lsl r0, r4, #0xc\n    str r0, [sp, #0x30]\n    add r0, sp, #0x28\n    bl Sprite_Create\n    mov r1, #1\n    str r0, [r5, #0x10]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [sp, #0x1c]\n    add r1, r6, r7\n    cmp r1, r0\n    blt _0224AF6C\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, #0x12\n    add r5, r5, #4\n    cmp r6, #0xa\n    blt _0224AF48\n    ldr r0, [sp, #0x20]\n    add r7, #0xa\n    add r0, #0x12\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x24]\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    cmp r0, #2\n    blt _0224AF2E\n    add sp, #0x6c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224AF8C(void) {
    /* Original at 0x0224AF8C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r6, [r7, #0x60]\n    add r5, r1, #0\n    cmp r6, r5\n    bge _0224AFB2\n    cmp r6, r5\n    bge _0224AFD0\n    lsl r0, r6, #2\n    add r4, r7, r0\n    ldr r0, [r4, #0x10]\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r5\n    blt _0224AFA0\n    b _0224AFD0\n    cmp r6, r5\n    ble _0224AFD0\n    sub r6, r6, #1\n    cmp r6, r5\n    blt _0224AFD0\n    lsl r0, r6, #2\n    add r4, r7, r0\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    sub r6, r6, #1\n    sub r4, r4, #4\n    cmp r6, r5\n    bge _0224AFC0\n    str r5, [r7, #0x60]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224AFD4(void) {
    /* Original at 0x0224AFD4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x10]\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x14\n    blt _0224AFDE\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov41_0224B084\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224AFF8(void) {
    /* Original at 0x0224AFF8 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r2, #0\n    ldr r7, [sp, #0x3c]\n    ldr r2, [sp, #0x28]\n    add r5, r0, #0\n    add r0, r7, r2\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    add r4, r1, #0\n    str r6, [sp, #8]\n    ldr r0, [r4]\n    str r3, [sp, #0x10]\n    add r1, r3, #0\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    str r0, [r5]\n    bl sub_0200ADA4\n    ldr r0, [r5]\n    bl sub_0200A740\n    ldr r2, [sp, #0x2c]\n    ldr r1, [sp, #0x10]\n    add r0, r7, r2\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x38]\n    mov r3, #0\n    str r0, [sp, #8]\n    str r6, [sp, #0xc]\n    ldr r0, [r4, #4]\n    bl AddPlttResObjFromOpenNarc\n    str r0, [r5, #4]\n    bl sub_0200B00C\n    ldr r0, [r5, #4]\n    bl sub_0200A740\n    ldr r2, [sp, #0x30]\n    ldr r1, [sp, #0x10]\n    add r0, r7, r2\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r0, [r4, #8]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r2, [sp, #0x34]\n    str r0, [r5, #8]\n    add r0, r7, r2\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    ldr r0, [r4, #0xc]\n    ldr r1, [sp, #0x10]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r5, #0xc]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224B084(void) {
    /* Original at 0x0224B084 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    bl sub_0200AEB0\n    ldr r0, [r5, #4]\n    bl sub_0200B0A8\n    ldr r0, [r4]\n    ldr r1, [r5]\n    bl DestroySingle2DGfxResObj\n    ldr r0, [r4, #4]\n    ldr r1, [r5, #4]\n    bl DestroySingle2DGfxResObj\n    ldr r0, [r4, #8]\n    ldr r1, [r5, #8]\n    bl DestroySingle2DGfxResObj\n    ldr r0, [r4, #0xc]\n    ldr r1, [r5, #0xc]\n    bl DestroySingle2DGfxResObj\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_0224B0B8(void) {
    /* Original at 0x0224B0B8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp, #0x2c]\n    ldr r0, [r5, #4]\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp, #0x30]\n    ldr r0, [r5, #8]\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp, #0x34]\n    ldr r0, [r5, #0xc]\n    bl GF2DGfxResObj_GetResID\n    str r0, [sp]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r6, [sp, #0x10]\n    ldr r1, [r4]\n    ldr r2, [sp, #0x30]\n    str r1, [sp, #0x14]\n    ldr r1, [r4, #4]\n    ldr r3, [sp, #0x34]\n    str r1, [sp, #0x18]\n    ldr r1, [r4, #8]\n    str r1, [sp, #0x1c]\n    ldr r1, [r4, #0xc]\n    str r1, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    ldr r1, [sp, #0x2c]\n    add r0, r7, #0\n    bl CreateSpriteResourcesHeader\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224B118(void) {
    /* Original at 0x0224B118 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x60\n    add r4, r1, #0\n    mov r1, #0xe5\n    str r1, [sp]\n    mov r1, #0xe6\n    str r1, [sp, #4]\n    mov r1, #0xe4\n    str r1, [sp, #8]\n    mov r1, #0xe3\n    str r1, [sp, #0xc]\n    mov r1, #2\n    str r1, [sp, #0x10]\n    ldr r1, _0224B214 ; =0x00000BB8\n    add r5, r2, #0\n    str r3, [sp, #0x18]\n    str r1, [sp, #0x14]\n    ldr r3, [sp, #0x80]\n    add r7, r0, #0\n    add r1, r5, #0\n    mov r2, #0xe\n    bl ov41_0224AFF8\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, sp, #0x3c\n    mov r3, #0\n    bl ov41_0224B0B8\n    add r0, sp, #0x3c\n    str r0, [sp, #0x20]\n    mov r2, #2\n    mov r0, #0xe\n    mov r1, #0x3a\n    str r0, [sp, #0x38]\n    lsl r1, r1, #0xc\n    lsl r0, r2, #0x14\n    mov r6, #0\n    str r4, [sp, #0x1c]\n    str r1, [sp, #0x28]\n    add r0, r1, r0\n    str r2, [sp, #0x34]\n    str r6, [sp, #0x30]\n    str r0, [sp, #0x28]\n    mov r4, #0x67\n    add r5, r7, #0\n    str r4, [sp, #0x24]\n    lsl r0, r4, #0xc\n    str r0, [sp, #0x24]\n    add r0, sp, #0x1c\n    bl Sprite_Create\n    str r0, [r5, #0x10]\n    add r6, r6, #1\n    add r4, #0x18\n    add r5, r5, #4\n    cmp r6, #2\n    blt _0224B174\n    ldr r0, [sp, #0x18]\n    mov r1, #0x1e\n    str r0, [r7, #0x1c]\n    mul r1, r0\n    str r1, [r7, #0x20]\n    ldr r1, [sp, #0x7c]\n    str r1, [r7, #0x2c]\n    str r0, [r1]\n    ldr r1, [r7, #0x2c]\n    str r0, [r1, #8]\n    add r0, r7, #0\n    mov r1, #0\n    add r0, #0x90\n    str r1, [r0]\n    add r0, r7, #0\n    bl ov41_0224B298\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    mov r0, #0xc1\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r7, #0\n    ldr r1, [sp, #0x78]\n    add r0, #0x18\n    mov r2, #0xa\n    mov r3, #8\n    bl ov41_0224AD0C\n    ldr r0, [r7, #0x18]\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #4\n    ldr r0, _0224B218 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xff\n    str r0, [sp, #0xc]\n    ldr r0, [r7, #0x18]\n    mov r1, #0x1b\n    mov r2, #0xd7\n    bl ov41_0224AE24\n    mov r0, #0x48\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _0224B218 ; =0x00010200\n    mov r1, #0x1b\n    str r0, [sp, #8]\n    mov r0, #0xff\n    str r0, [sp, #0xc]\n    ldr r0, [r7, #0x18]\n    mov r2, #0xd7\n    mov r3, #5\n    bl ov41_0224AE24\n    ldr r0, [r7, #0x18]\n    bl CopyWindowToVram\n    add sp, #0x60\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224B214: .word 0x00000BB8\n    _0224B218: .word 0x00010200"
    );
    #endif
}

void ov41_0224B21C(void) {
    /* Original at 0x0224B21C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x24]\n    add r4, r1, #0\n    cmp r0, #0\n    beq _0224B22C\n    bl SysTask_Destroy\n    ldr r0, [r5, #0x28]\n    cmp r0, #0\n    beq _0224B236\n    bl SysTask_Destroy\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov41_0224B084\n    ldr r0, [r5, #0x18]\n    bl ov41_0224AD84\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x94\n    bl memset\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_0224B250(void) {
    ov41_0224B310();
    ov41_0224B270(r4);
    ov41_0224B298(r4);
    ov41_0224B450(r4);
}

void ov41_0224B270(void) {
    /* Original at 0x0224B270 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0, #0x2c]\n    ldr r2, [r1]\n    ldr r1, [r0, #0x1c]\n    cmp r1, r2\n    beq _0224B290\n    str r2, [r0, #0x1c]\n    cmp r2, #0xa\n    bgt _0224B290\n    add r1, r0, #0\n    add r1, #0x30\n    bl ov41_0224B374\n    ldr r0, _0224B294 ; =0x00000682\n    bl PlaySE\n    pop {r3, pc}\n    nop\n    _0224B294: .word 0x00000682"
    );
    #endif
}

void ov41_0224B298(void) {
    /* Original at 0x0224B298 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    ldr r0, [r6, #0x1c]\n    mov r1, #1\n    str r0, [sp]\n    mov r0, #0xa\n    add r4, r1, #0\n    mul r4, r0\n    mov r7, #0\n    add r5, r6, #0\n    ldr r0, [sp]\n    add r1, r4, #0\n    bl _s32_div_f\n    str r0, [sp, #4]\n    cmp r0, #0xa\n    ble _0224B2C0\n    bl GF_AssertFail\n    ldr r0, [r5, #0x10]\n    ldr r1, [sp, #4]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [sp, #4]\n    add r1, r0, #0\n    ldr r0, [sp]\n    mul r1, r4\n    sub r0, r0, r1\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xa\n    bl _s32_div_f\n    add r4, r0, #0\n    add r0, r6, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0224B302\n    ldr r0, [r6, #0x1c]\n    cmp r0, #0xa\n    bgt _0224B302\n    ldr r0, [r5, #0x10]\n    mov r1, #1\n    bl Sprite_SetPalIndexRespectVramOffset\n    cmp r7, #1\n    bne _0224B302\n    add r1, r6, #0\n    add r1, #0x90\n    mov r0, #1\n    str r0, [r1]\n    add r7, r7, #1\n    add r5, r5, #4\n    cmp r7, #2\n    blt _0224B2AE\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224B310(void) {
    /* Original at 0x0224B310 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x20]\n    sub r1, r1, #1\n    bmi _0224B318\n    str r1, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov41_0224B31C(void) {
    /* Original at 0x0224B31C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    str r1, [r0, #4]\n    sub r1, r2, r1\n    str r1, [r0, #8]\n    str r3, [r0, #0x10]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov41_0224B32C(void) {
    /* Original at 0x0224B32C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4, #0xc]\n    ldr r0, [r4, #8]\n    lsl r2, r2, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    ldr r1, [r4, #0x10]\n    lsl r1, r1, #0xc\n    bl FX_Div\n    ldr r1, [r4, #4]\n    add r0, r0, r1\n    str r0, [r4]\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    add r0, r0, #1\n    cmp r0, r1\n    bgt _0224B36C\n    str r0, [r4, #0xc]\n    mov r0, #0\n    pop {r4, pc}\n    str r1, [r4, #0xc]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224B374(void) {
    /* Original at 0x0224B374 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp]\n    str r1, [sp, #4]\n    mov r1, #0x3a\n    mov r0, #2\n    lsl r1, r1, #0xc\n    lsl r0, r0, #0x14\n    ldr r4, [sp, #4]\n    str r1, [sp, #0x10]\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    ldr r6, [sp]\n    mov r7, #0\n    mov r5, #0x67\n    str r0, [sp, #8]\n    ldr r0, [r6, #0x10]\n    mov r1, #2\n    str r0, [r4, #4]\n    bl Sprite_SetAffineOverwriteMode\n    ldr r2, [sp, #8]\n    str r5, [sp, #0xc]\n    lsl r0, r5, #0xc\n    add r2, #0xc\n    add r3, sp, #0xc\n    str r0, [sp, #0xc]\n    ldmia r3!, {r0, r1}\n    str r2, [sp, #8]\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r7, r7, #1\n    str r0, [r2]\n    add r6, r6, #4\n    add r4, r4, #4\n    add r5, #0x18\n    cmp r7, #2\n    blt _0224B396\n    ldr r0, [sp]\n    ldr r1, [r0, #0x1c]\n    mov r0, #0xa\n    sub r0, r0, r1\n    cmp r0, #0\n    ble _0224B3F0\n    lsl r0, r0, #0xc\n    ldr r2, _0224B44C ; =0x00000266\n    asr r1, r0, #0x1f\n    mov r3, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r4, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r4, #0xc\n    orr r1, r0\n    lsl r0, r2, #1\n    add r4, r1, r0\n    b _0224B3F4\n    mov r4, #1\n    lsl r4, r4, #0xc\n    ldr r0, [sp, #4]\n    mov r2, #1\n    add r0, #0x24\n    add r1, r4, #0\n    lsl r2, r2, #0xc\n    mov r3, #0x10\n    bl ov41_0224B31C\n    mov r2, #6\n    asr r1, r4, #0x1f\n    add r0, r4, #0\n    lsl r2, r2, #0xe\n    mov r3, #0\n    bl _ll_mul\n    mov r3, #2\n    mov r2, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r2\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    orr r1, r0\n    mov r0, #6\n    lsl r0, r0, #0xe\n    sub r4, r1, r0\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    add r0, #0x38\n    mov r3, #0x10\n    bl ov41_0224B31C\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    add r0, #0x4c\n    mov r2, #0\n    mov r3, #0x10\n    bl ov41_0224B31C\n    ldr r0, [sp, #4]\n    mov r1, #1\n    str r1, [r0]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0224B44C: .word 0x00000266"
    );
    #endif
}

void ov41_0224B450(void) {
    /* Original at 0x0224B450 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _0224B4E2\n    add r0, r5, #0\n    add r0, #0x24\n    bl ov41_0224B32C\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x38\n    bl ov41_0224B32C\n    add r0, r5, #0\n    add r0, #0x4c\n    bl ov41_0224B32C\n    ldr r0, [r5, #0x24]\n    add r1, sp, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x24]\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x24]\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #4]\n    bl Sprite_SetAffineScale\n    ldr r0, [r5, #8]\n    add r1, sp, #0xc\n    bl Sprite_SetAffineScale\n    add r6, r5, #0\n    add r6, #0xc\n    add r3, sp, #0\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    str r0, [r3]\n    ldr r1, [sp]\n    ldr r0, [r5, #0x38]\n    sub r0, r1, r0\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    ldr r0, [r5, #0x4c]\n    sub r0, r1, r0\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    add r1, r2, #0\n    bl Sprite_SetMatrix\n    add r6, r5, #0\n    add r6, #0x18\n    add r3, sp, #0\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    str r0, [r3]\n    ldr r1, [sp, #4]\n    ldr r0, [r5, #0x4c]\n    sub r0, r1, r0\n    str r0, [sp, #4]\n    ldr r0, [r5, #8]\n    add r1, r2, #0\n    bl Sprite_SetMatrix\n    cmp r4, #0\n    beq _0224B4E2\n    mov r0, #0\n    str r0, [r5]\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov41_0224B4E8(void) {
    /* Original at 0x0224B4E8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x10\n    add r3, r1, #0\n    stmia r0!, {r1}\n    add r3, #0x48\n    str r3, [sp]\n    ldr r1, [r1, #0x74]\n    lsl r1, r1, #2\n    add r1, #0x89\n    str r1, [sp, #4]\n    mov r1, #0x10\n    str r1, [sp, #8]\n    add r1, sp, #0\n    str r2, [sp, #0xc]\n    bl ov41_02249CE0\n    add sp, #0x10\n    pop {r3, pc}"
    );
    #endif
}

void ov41_0224B50C(void) {
    ov41_02249CF8();
}

void ov41_0224B518(void) {
    ov41_02249D60(0, 0x1c);
}

void ov41_0224B530(void) {
    ov41_0224B8DC(r0, r0);
    ov41_0224B8F0(r4);
    ov41_0224B630();
}

void ov41_0224B554(void) {
    /* Original at 0x0224B554 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x26\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    cmp r1, #1\n    bne _0224B56A\n    sub r0, #0x48\n    add r0, r4, r0\n    bl ov41_0224B50C\n    mov r0, #0x99\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0224B57A\n    add r0, r4, #0\n    bl ov41_0224B720\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224B57C(void) {
    /* Original at 0x0224B57C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x26\n    add r4, r0, #0\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    beq _0224B58E\n    bl ov41_0224B878\n    add r0, r4, #0\n    bl ov41_0224B85C\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov41_02245ECC\n    mov r0, #0x63\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    sub r0, #8\n    add r0, r4, r0\n    bl ov41_022499DC\n    add r0, r4, #0\n    bl ov41_0224B754\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224B5C8(void) {
    ov41_022465CC();
}

void ov41_0224B5D0(void) {
    /* Original at 0x0224B5D0 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x99\n    lsl r2, r2, #2\n    str r1, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov41_0224B5D8(void) {
    /* Original at 0x0224B5D8 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r2, #0\n    mov r2, #0x19\n    add r4, r1, #0\n    lsl r2, r2, #4\n    add r5, r0, #0\n    add r1, r2, #0\n    add r0, r5, r2\n    str r6, [sp]\n    add r1, #0xac\n    add r2, #0xb0\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    add r3, r4, #0\n    bl ov41_02248120\n    mov r0, #0x26\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0224B620\n    mov r3, #0x88\n    ldr r0, [r5, #0x40]\n    mov r1, #2\n    mov r2, #0\n    sub r3, r3, r4\n    bl BgSetPosTextAndCommit\n    mov r3, #0x10\n    ldr r0, [r5, #0x40]\n    mov r1, #2\n    mov r2, #3\n    sub r3, r3, r6\n    bl BgSetPosTextAndCommit\n    mov r0, #0x8f\n    lsl r0, r0, #2\n    str r4, [r5, r0]\n    add r0, r0, #4\n    str r6, [r5, r0]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov41_0224B630(void) {
    /* Original at 0x0224B630 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #0x9a\n    ldr r0, [r5, #0x68]\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0x9a\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl memset\n    mov r0, #0x8e\n    ldr r1, [r5, #0x68]\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, [r5, #0x68]\n    bl AllocMonZeroed\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r5]\n    ldr r1, [r4, r1]\n    bl sub_0202BEF4\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov41_0224B6CC\n    ldr r1, [r5, #0x58]\n    ldr r2, [r5, #0x68]\n    add r0, r4, #0\n    bl ov41_02246544\n    mov r0, #0x61\n    lsl r0, r0, #2\n    ldr r2, [r5, #0x68]\n    add r0, r4, r0\n    mov r1, #0x15\n    bl ov41_022499B4\n    ldr r1, [r5, #0x68]\n    mov r0, #0x14\n    bl ov41_02245EA0\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov41_0224B780\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov41_0224B848\n    mov r1, #0x86\n    lsl r1, r1, #2\n    add r0, r4, r1\n    sub r1, #0x88\n    ldr r2, [r5, #0x68]\n    add r1, r4, r1\n    bl ov41_0224B4E8\n    mov r0, #0x26\n    mov r1, #1\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov41_0224B888\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_0224B6CC(void) {
    /* Original at 0x0224B6CC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x28\n    add r4, r1, #0\n    ldr r1, [r4, #0x68]\n    add r5, r0, #0\n    mov r0, #0x1a\n    bl NARC_New\n    mov r1, #6\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    ldr r0, _0224B71C ; =0x000002CE\n    add r1, sp, #0\n    str r0, [sp]\n    mov r0, #0x76\n    str r0, [sp, #4]\n    mov r0, #0x13\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x68]\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x68]\n    add r0, r5, #0\n    bl ov41_02246518\n    ldr r3, [r4, #0x68]\n    add r0, r5, #0\n    add r1, sp, #0x10\n    add r2, r4, #0\n    bl ov41_0224B938\n    add r0, r5, #0\n    add r1, sp, #0x10\n    bl ov41_02246250\n    add r0, sp, #0x10\n    bl ov41_022463D4\n    add sp, #0x28\n    pop {r3, r4, r5, pc}\n    nop\n    _0224B71C: .word 0x000002CE"
    );
    #endif
}

void ov41_0224B720(void) {
    /* Original at 0x0224B720 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r3, #0x25\n    lsl r3, r3, #4\n    add r1, r0, r3\n    str r1, [sp]\n    add r1, r3, #0\n    sub r1, #0x14\n    ldr r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0xc\n    ldr r1, [r0, r1]\n    add r1, r2, r1\n    add r2, r3, #0\n    sub r2, #0x10\n    ldr r4, [r0, r2]\n    add r2, r3, #0\n    sub r2, #8\n    sub r3, r3, #4\n    ldr r2, [r0, r2]\n    ldrh r3, [r0, r3]\n    add r2, r4, r2\n    bl ov41_022465D8\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov41_0224B754(void) {
    /* Original at 0x0224B754 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov41_0224626C\n    add r0, r4, #0\n    bl ov41_02246594\n    mov r0, #0x26\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0224B772\n    add r0, r4, #0\n    bl ov41_022465C0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224B780(void) {
    /* Original at 0x0224B780 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    add r5, r0, #0\n    add r2, sp, #0x28\n    mov r0, #0\n    add r7, r1, #0\n    add r3, r2, #0\n    add r1, r0, #0\n    stmia r3!, {r0, r1}\n    stmia r3!, {r0, r1}\n    stmia r3!, {r0, r1}\n    stmia r3!, {r0, r1}\n    str r0, [r3]\n    ldr r0, [r5]\n    str r0, [sp, #0x28]\n    ldr r0, [r5, #4]\n    str r0, [sp, #0x2c]\n    ldr r0, [r5, #0x10]\n    str r0, [sp, #0x30]\n    ldr r0, [r5, #0x30]\n    str r0, [sp, #0x34]\n    ldr r0, [r5, #0x20]\n    str r0, [sp, #0x38]\n    ldr r0, [r5, #0x40]\n    str r0, [sp, #0x3c]\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    str r1, [sp, #0x40]\n    add r1, r0, #0\n    sub r1, #8\n    add r1, r5, r1\n    str r1, [sp, #0x44]\n    mov r1, #0x15\n    add r0, r0, #4\n    str r1, [sp, #0x48]\n    add r0, r5, r0\n    add r1, r2, #0\n    bl ov41_02247F3C\n    ldr r0, [r7]\n    bl sub_0202BEE4\n    add r6, r0, #0\n    ldr r0, [r7]\n    bl sub_0202BEEC\n    add r4, r0, #0\n    ldr r0, [r7]\n    bl sub_0202BEDC\n    str r4, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r7, #0x68]\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #8]\n    add r0, r5, r1\n    add r1, #0xa4\n    ldr r1, [r5, r1]\n    add r2, sp, #0x18\n    add r3, r6, #0\n    bl ov41_02247FAC\n    ldr r0, [r7, #0x54]\n    mov r6, #0\n    cmp r0, #0\n    ble _0224B844\n    add r4, r7, #0\n    ldr r0, [r4, #4]\n    bl sub_0202BEFC\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #4]\n    bl sub_0202BF00\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    bl sub_0202BF04\n    str r0, [sp, #0x14]\n    ldr r0, [r4, #4]\n    bl sub_0202BF08\n    str r0, [sp]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, r5, r0\n    bl ov41_02248044\n    ldr r0, [r7, #0x54]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blt _0224B80A\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224B848(void) {
    /* Original at 0x0224B848 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r1, #0\n    mov r1, #0x19\n    lsl r1, r1, #4\n    add r0, r0, r1\n    ldr r1, [r2, #0x5c]\n    ldr r3, _0224B858 ; =ov41_0224825C\n    ldr r2, [r2, #0x68]\n    bx r3\n    _0224B858: .word ov41_0224825C"
    );
    #endif
}

void ov41_0224B85C(void) {
    /* Original at 0x0224B85C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x19\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov41_022480E0\n    mov r0, #0x19\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov41_02247F90\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224B878(void) {
    /* Original at 0x0224B878 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x19\n    lsl r1, r1, #4\n    ldr r3, _0224B884 ; =ov41_022482A8\n    add r0, r0, r1\n    bx r3\n    nop\n    _0224B884: .word ov41_022482A8"
    );
    #endif
}

void ov41_0224B888(void) {
    /* Original at 0x0224B888 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r1, #0\n    mov r1, #0x8f\n    add r4, r0, #0\n    mov r2, #0x48\n    lsl r1, r1, #2\n    str r2, [r4, r1]\n    mov r5, #0x38\n    add r2, r1, #4\n    str r5, [r4, r2]\n    add r2, r1, #0\n    add r2, #8\n    str r5, [r4, r2]\n    add r2, r1, #0\n    mov r5, #0x40\n    add r2, #0xc\n    str r5, [r4, r2]\n    lsl r2, r5, #6\n    add r5, r1, #0\n    add r5, #0x14\n    str r2, [r4, r5]\n    add r5, r1, #0\n    add r5, #0x18\n    str r2, [r4, r5]\n    add r5, r1, #0\n    add r5, #0x1c\n    str r2, [r4, r5]\n    mov r2, #0\n    add r1, #0x10\n    strh r2, [r4, r1]\n    ldr r1, [r3, #0x60]\n    ldr r2, [r3, #0x64]\n    bl ov41_0224B5D8\n    mov r0, #0x97\n    ldr r1, _0224B8D8 ; =0x00007FFF\n    lsl r0, r0, #2\n    strh r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _0224B8D8: .word 0x00007FFF"
    );
    #endif
}

void ov41_0224B8DC(void) {
    /* Original at 0x0224B8DC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r1]\n    str r2, [r0, #0x58]\n    ldr r2, [r1, #4]\n    str r2, [r0, #0x60]\n    ldr r2, [r1, #8]\n    str r2, [r0, #0x64]\n    ldr r1, [r1, #0xc]\n    str r1, [r0, #0x68]\n    bx lr"
    );
    #endif
}

void ov41_0224B8F0(void) {
    /* Original at 0x0224B8F0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r5, r0, #0\n    add r0, r7, #0\n    bl sub_0202BE14\n    add r6, r5, #0\n    str r0, [r5]\n    mov r4, #0\n    str r4, [r5, #0x54]\n    add r6, #0x54\n    add r0, r7, #0\n    add r1, r4, #0\n    bl sub_0202BDEC\n    cmp r0, #0\n    beq _0224B928\n    add r0, r7, #0\n    add r1, r4, #0\n    bl sub_0202BE2C\n    ldr r1, [r5, #0x54]\n    lsl r1, r1, #2\n    add r1, r5, r1\n    str r0, [r1, #4]\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    add r4, r4, #1\n    cmp r4, #0xa\n    blt _0224B906\n    add r0, r7, #0\n    bl sub_0202BE80\n    str r0, [r5, #0x5c]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov41_0224B938(void) {
    ov41_022464AC(r1, r3);
    ov41_0224B958(r5, r4, r6, r7);
}

void ov41_0224B958(void) {
    /* Original at 0x0224B958 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    add r0, r2, #0\n    ldr r0, [r0, #0x54]\n    add r4, r1, #0\n    str r2, [sp, #8]\n    str r3, [sp, #0xc]\n    cmp r0, #0\n    ble _0224B9D0\n    add r6, r2, #0\n    ldr r0, [r6, #4]\n    bl sub_0202BEFC\n    add r5, r0, #0\n    ldr r0, [r4, #0x10]\n    add r1, r5, #0\n    bl GF2dGfxRawResMan_DoesNotHaveObjWithId\n    cmp r0, #1\n    bne _0224B9BE\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #6\n    ldr r1, [sp, #4]\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    ldr r3, [sp, #0xc]\n    add r1, r5, #1\n    mov r2, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r7, r0, #0\n    ldr r0, [r4, #0x10]\n    add r1, r7, #0\n    add r2, r5, #0\n    bl GF2dGfxRawResMan_AllocObj\n    ldr r1, [r4]\n    lsl r5, r5, #3\n    add r1, r1, r5\n    add r0, r7, #0\n    add r1, r1, #4\n    bl NNS_G2dGetUnpackedCharacterData\n    ldr r0, [sp, #4]\n    ldr r1, [r0]\n    ldr r0, [r4]\n    str r1, [r0, r5]\n    ldr r0, [sp, #0x10]\n    add r6, r6, #4\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #8]\n    ldr r1, [r0, #0x54]\n    ldr r0, [sp, #0x10]\n    cmp r0, r1\n    blt _0224B972\n    mov r0, #1\n    str r0, [sp]\n    mov r1, #6\n    ldr r0, [sp, #4]\n    lsl r1, r1, #6\n    ldr r0, [r0, r1]\n    mov r1, #0\n    ldr r3, [sp, #0xc]\n    add r2, r1, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r5, r0, #0\n    ldr r0, [r4, #0x14]\n    add r1, r5, #0\n    mov r2, #0\n    bl GF2dGfxRawResMan_AllocObj\n    ldr r1, [r4, #8]\n    add r0, r5, #0\n    add r1, r1, #4\n    bl NNS_G2dGetUnpackedPaletteData\n    ldr r0, [sp, #4]\n    ldr r1, [r0]\n    ldr r0, [r4, #8]\n    str r1, [r0]\n    ldr r0, [r4, #8]\n    mov r1, #3\n    str r1, [r0, #8]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void AccessoryPortrait_Init(void) {
    /* Original at 0x0224BA10 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    mov r2, #2\n    add r4, r0, #0\n    mov r0, #3\n    mov r1, #0xd\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    mov r2, #1\n    mov r0, #3\n    mov r1, #0xe\n    lsl r2, r2, #0x12\n    bl Heap_Create\n    mov r1, #0x1a\n    add r0, r4, #0\n    lsl r1, r1, #4\n    mov r2, #0xd\n    bl OverlayManager_CreateAndGetData\n    mov r2, #0x1a\n    mov r1, #0\n    lsl r2, r2, #4\n    add r5, r0, #0\n    bl memset\n    ldr r0, _0224BAC4 ; =ov41_0224BBF0\n    add r1, r5, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    add r0, r4, #0\n    bl OverlayManager_GetArgs\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r1, [r4, #4]\n    bl sub_0202B9B8\n    str r0, [r5]\n    ldr r0, [r4, #4]\n    str r0, [r5, #8]\n    ldr r0, [r4, #8]\n    str r0, [r5, #0xc]\n    bl ov41_02246130\n    ldr r0, _0224BAC8 ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    add r0, r5, #0\n    add r0, #0x14\n    mov r1, #0xe\n    bl ov41_02246670\n    ldr r0, [r5, #0x54]\n    str r0, [sp]\n    mov r0, #0x48\n    str r0, [sp, #4]\n    mov r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    ldr r1, [r5]\n    add r0, sp, #0\n    bl ov41_0224B530\n    str r0, [r5, #0x10]\n    add r0, r5, #0\n    bl ov41_0224BC04\n    add r0, r5, #0\n    bl ov41_0224BCA4\n    add r0, r5, #0\n    bl ov41_0224BCF0\n    add r0, r5, #0\n    bl ov41_0224BDCC\n    add r0, r5, #0\n    bl ov41_0224BE5C\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0224BAC4: .word ov41_0224BBF0\n    _0224BAC8: .word gSystem + 0x60"
    );
    #endif
}

void AccessoryPortrait_Main(void) {
    /* Original at 0x0224BACC */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    add r5, r0, #0\n    bl Thunk_G3X_Reset\n    bl NNS_G2dSetupSoftwareSpriteCamera\n    ldr r0, [r5, #0x10]\n    bl ov41_0224B554\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    add r5, #0x14\n    add r0, r5, #0\n    bl ov41_022466C8\n    ldr r1, [r4]\n    cmp r1, #5\n    bhi _0224BB96\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224BB08: ; jump table\n    add r0, r1, #1\n    str r0, [r4]\n    b _0224BB96\n    mov r0, #6\n    str r0, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    mov r0, #0xd\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #5\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224BB96\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0224BB96\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224BB96\n    ldr r0, _0224BB9C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0224BB5A\n    bl System_GetTouchNew\n    cmp r0, #0\n    beq _0224BB96\n    ldr r0, _0224BBA0 ; =0x000005DD\n    bl PlaySE\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224BB96\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xd\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #2\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0224BB96\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0224BB96\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0224BB9C: .word gSystem\n    _0224BBA0: .word 0x000005DD"
    );
    #endif
}

void AccessoryPortrait_Exit(void) {
    /* Original at 0x0224BBA4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    bl ov41_0224B57C\n    add r0, r4, #0\n    bl ov41_0224BD8C\n    add r0, r4, #0\n    bl ov41_0224BE34\n    add r4, #0x14\n    add r0, r4, #0\n    bl ov41_02246698\n    bl ov41_02246150\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0xd\n    bl Heap_Destroy\n    mov r0, #0xe\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov41_0224BBF0(void) {
    /* Original at 0x0224BBF0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    bl ov41_0224B5C8\n    add r4, #0x14\n    add r0, r4, #0\n    bl ov41_022466B8\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224BC04(void) {
    /* Original at 0x0224BC04 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0x40\n    str r0, [sp]\n    mov r0, #0xe\n    str r0, [sp, #4]\n    mov r0, #0x65\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x7e\n    mov r2, #0\n    mov r3, #0x60\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    mov r0, #0x65\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r2, [r5, #0x54]\n    mov r1, #0x7d\n    mov r3, #1\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #0x1a\n    mov r1, #0x80\n    mov r2, #0\n    add r3, sp, #0x10\n    bl GfGfxLoader_GetScrnData\n    ldr r2, [sp, #0x10]\n    mov r3, #0\n    str r3, [sp]\n    add r4, r0, #0\n    ldrh r0, [r2]\n    mov r1, #1\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldrh r0, [r2, #2]\n    add r2, #0xc\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x54]\n    bl LoadRectToBgTilemapRect\n    ldr r1, [sp, #0x10]\n    mov r2, #0\n    ldrh r0, [r1]\n    add r3, r2, #0\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldrh r0, [r1, #2]\n    mov r1, #1\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x54]\n    bl BgTilemapRectChangePalette\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r0, [r5, #0x54]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov41_0224BCA4(void) {
    /* Original at 0x0224BCA4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    mov r0, #0xe\n    str r0, [sp, #4]\n    mov r0, #0xef\n    mov r2, #4\n    add r3, r1, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x54]\n    mov r0, #0xef\n    mov r1, #9\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x54]\n    mov r0, #0xef\n    mov r1, #1\n    mov r3, #4\n    bl GfGfxLoader_LoadCharData\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224BCF0(void) {
    /* Original at 0x0224BCF0 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    mov r1, #0x65\n    str r0, [sp, #4]\n    lsl r1, r1, #2\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r0, #0x14\n    mov r2, #0xe9\n    mov r3, #0\n    bl ov41_022462E4\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    mov r1, #0x65\n    str r0, [sp, #8]\n    lsl r1, r1, #2\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r0, #0x14\n    mov r2, #0xea\n    mov r3, #0\n    bl ov41_02246304\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    mov r1, #0x65\n    str r0, [sp]\n    lsl r1, r1, #2\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r0, #0x14\n    mov r2, #0xe8\n    mov r3, #0\n    bl ov41_02246328\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    mov r1, #0x65\n    str r0, [sp]\n    lsl r1, r1, #2\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r0, #0x14\n    mov r2, #0xe7\n    mov r3, #0\n    bl ov41_02246344\n    mov r0, #0x64\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0xfa\n    add r0, #0x14\n    lsl r1, r1, #2\n    mov r2, #0\n    mov r3, #0x90\n    bl ov41_02246280\n    mov r1, #0x66\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl Sprite_SetPriority\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov41_0224BD8C(void) {
    /* Original at 0x0224BD8C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xfa\n    add r4, r0, #0\n    add r0, #0x14\n    lsl r1, r1, #2\n    bl ov41_02246360\n    add r0, r4, #0\n    mov r1, #0xfa\n    add r0, #0x14\n    lsl r1, r1, #2\n    bl ov41_02246374\n    add r0, r4, #0\n    mov r1, #0xfa\n    add r0, #0x14\n    lsl r1, r1, #2\n    bl ov41_02246388\n    add r0, r4, #0\n    mov r1, #0xfa\n    add r0, #0x14\n    lsl r1, r1, #2\n    bl ov41_0224639C\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224BDCC(void) {
    /* Original at 0x0224BDCC */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #0xe\n    mov r1, #1\n    bl AllocWindows\n    mov r1, #0x67\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x12\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #6\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0x54]\n    ldr r1, [r4, r1]\n    mov r2, #3\n    mov r3, #0\n    bl AddWindowParameterized\n    mov r0, #0\n    mov r1, #0xa0\n    mov r2, #0xe\n    bl LoadFontPal0\n    mov r0, #3\n    mov r1, #0\n    bl SetBgPriority\n    mov r0, #0\n    mov r1, #2\n    bl SetBgPriority\n    mov r0, #1\n    add r1, r0, #0\n    bl SetBgPriority\n    mov r1, #3\n    ldr r0, [r4, #0x54]\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    add sp, #0x14\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov41_0224BE34(void) {
    /* Original at 0x0224BE34 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ClearWindowTilemapAndCopyToVram\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl RemoveWindow\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl WindowArray_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224BE5C(void) {
    /* Original at 0x0224BE5C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    bl ov41_0224BE80\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl CopyWindowToVram\n    pop {r4, pc}"
    );
    #endif
}

void ov41_0224BE80(void) {
    /* Original at 0x0224BE80 */
    /* Requires manual decompilation - 116 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xd7\n    mov r3, #0xd\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x10]\n    cmp r0, #0\n    bne _0224BE9C\n    bl GF_AssertFail\n    mov r0, #0xd\n    bl MessageFormat_New\n    add r6, r0, #0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #3\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x14]\n    mov r0, #9\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, sp, #0x14\n    bl Sprite_SetMatrix\n    mov r0, #0xc\n    mov r1, #0xd\n    bl String_New\n    add r7, r0, #0\n    ldr r0, [r5]\n    add r1, r7, #0\n    bl sub_0202BE60\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r4, r0, #0\n    mov r0, #7\n    str r0, [sp]\n    mov r1, #0\n    lsr r3, r4, #0x1f\n    add r3, r4, r3\n    asr r4, r3, #1\n    mov r3, #0x80\n    ldr r0, _0224BF90 ; =0x00010200\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x67\n    str r1, [sp, #0xc]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r7, #0\n    sub r3, r3, r4\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    ldr r0, [r5]\n    bl sub_0202BE98\n    add r2, r0, #0\n    add r0, r6, #0\n    mov r1, #0\n    bl BufferECWord\n    mov r0, #0xc8\n    mov r1, #0xd\n    bl String_New\n    add r4, r0, #0\n    ldr r0, [sp, #0x10]\n    mov r1, #0x2d\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r3, r0, #0\n    mov r0, #0x1b\n    str r0, [sp]\n    mov r1, #0\n    ldr r0, _0224BF90 ; =0x00010200\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x67\n    str r1, [sp, #0xc]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    lsr r5, r3, #0x1f\n    add r5, r3, r5\n    asr r5, r5, #1\n    mov r3, #0x80\n    add r2, r4, #0\n    sub r3, r3, r5\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl String_Delete\n    ldr r0, [sp, #0x10]\n    bl DestroyMsgData\n    add r0, r6, #0\n    bl MessageFormat_Delete\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224BF90: .word 0x00010200"
    );
    #endif
}
