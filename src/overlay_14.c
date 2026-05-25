/* Decompiled from asm/overlay_14.s */
#include "global.h"

void PCBox_Init(void) {
    /* Original at 0x021E5900 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #1\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #9\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    add r0, r5, #0\n    mov r1, #0x38\n    mov r2, #9\n    bl OverlayManager_CreateAndGetData\n    mov r1, #0\n    mov r2, #0x38\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    str r0, [r4]\n    ldr r0, [r0]\n    bl SaveArray_PCStorage_Get\n    str r0, [r4, #4]\n    bl PCStorage_GetActiveBox\n    strb r0, [r4, #0x1f]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl SaveArray_Party_Get\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Save_Bag_Get\n    str r0, [r4, #0xc]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [r4, #0x10]\n    add r0, r4, #0\n    mov r1, #0xff\n    add r0, #0x21\n    strb r1, [r0]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #0xb\n    str r0, [r4, #0x30]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void PCBox_Main(void) {
    /* Original at 0x021E596C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    add r1, r4, #0\n    bl ov14_021EAF8C\n    cmp r0, #0\n    bne _021E5982\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void PCBox_Exit(void) {
    /* Original at 0x021E5988 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl OverlayManager_GetData\n    add r1, r0, #0\n    ldr r0, [r1, #4]\n    ldrb r1, [r1, #0x1f]\n    bl PCStorage_SetActiveBox\n    add r0, r4, #0\n    bl OverlayManager_FreeData\n    mov r0, #9\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E59AC(void) {
    /* Original at 0x021E59AC */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x34]\n    ldr r1, [r0, #4]\n    cmp r1, #0\n    beq _021E59C6\n    add r0, r4, #0\n    blx r1\n    cmp r0, #0\n    bne _021E59C6\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    str r1, [r0, #4]\n    add r0, r4, #0\n    bl ov14_021E5A14\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x18]\n    bl PaletteData_PushTransparentBuffers\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x14]\n    bl DoScheduledBgGpuUpdates\n    ldr r0, [r4, #0x34]\n    bl ov14_021F29C4\n    ldr r1, [r4, #0x34]\n    ldr r0, _021E5A08 ; =0x000088D2\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    bne _021E59FA\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl SpriteSystem_DrawSprites\n    bl SpriteSystem_TransferOam\n    ldr r3, _021E5A0C ; =0x027E0000\n    ldr r1, _021E5A10 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    _021E5A08: .word 0x000088D2\n    _021E5A0C: .word 0x027E0000\n    _021E5A10: .word 0x00003FF8"
    );
    #endif
}

void ov14_021E5A14(void) {
    /* Original at 0x021E5A14 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r1, [r4, #0x34]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    beq _021E5A30\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0x10\n    bl sub_02019978\n    pop {r4, pc}\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0x10\n    bl sub_02019978\n    ldr r0, [r4, #0x34]\n    bl ov14_021F3BC0\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E5A44(void) {
    /* Original at 0x021E5A44 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    strh r2, [r0, #0x10]\n    strh r2, [r0, #0x12]\n    str r1, [r0, #4]\n    str r2, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov14_021E5A50(void) {
    /* Original at 0x021E5A50 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov14_021E5A54(void) {
    ov14_021E5A44();
}

void ov14_021E5A60(void) {
    /* Original at 0x021E5A60 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021E5A68 ; =GfGfx_SetBanks\n    ldr r0, _021E5A6C ; =ov14_021F7CE4\n    bx r3\n    nop\n    _021E5A68: .word GfGfx_SetBanks\n    _021E5A6C: .word ov14_021F7CE4"
    );
    #endif
}

void ov14_021E5A70(void) {
    /* Original at 0x021E5A70 */
    /* Requires manual decompilation - 175 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xd4\n    add r4, r0, #0\n    mov r0, #0xa\n    bl BgConfig_Alloc\n    ldr r1, [r4, #0x34]\n    add r3, sp, #0xc4\n    ldr r5, _021E5BE0 ; =ov14_021F7BC8\n    str r0, [r1, #0x14]\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _021E5BE4 ; =ov14_021F7C20\n    add r3, sp, #0xa8\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    ldr r0, [r4, #0x34]\n    add r3, r1, #0\n    ldr r0, [r0, #0x14]\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x14]\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0xa\n    bl BG_ClearCharDataRange\n    ldr r5, _021E5BE8 ; =ov14_021F7C3C\n    add r3, sp, #0x8c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    ldr r0, [r4, #0x34]\n    mov r3, #0\n    ldr r0, [r0, #0x14]\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x14]\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0xa\n    bl BG_ClearCharDataRange\n    ldr r5, _021E5BEC ; =ov14_021F7C74\n    add r3, sp, #0x70\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    ldr r0, [r4, #0x34]\n    mov r1, #2\n    ldr r0, [r0, #0x14]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _021E5BF0 ; =ov14_021F7C90\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    ldr r0, [r4, #0x34]\n    mov r3, #0\n    ldr r0, [r0, #0x14]\n    bl InitBgFromTemplate\n    ldr r5, _021E5BF4 ; =ov14_021F7C58\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    ldr r0, [r4, #0x34]\n    mov r3, #0\n    ldr r0, [r0, #0x14]\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x34]\n    mov r1, #4\n    ldr r0, [r0, #0x14]\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0xa\n    bl BG_ClearCharDataRange\n    ldr r5, _021E5BF8 ; =ov14_021F7CAC\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    ldr r0, [r4, #0x34]\n    mov r3, #0\n    ldr r0, [r0, #0x14]\n    bl InitBgFromTemplate\n    ldr r5, _021E5BFC ; =ov14_021F7CC8\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    ldr r0, [r4, #0x34]\n    mov r3, #0\n    ldr r0, [r0, #0x14]\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0x34]\n    mov r1, #6\n    ldr r0, [r0, #0x14]\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #6\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0xa\n    bl BG_ClearCharDataRange\n    add sp, #0xd4\n    pop {r4, r5, pc}\n    nop\n    _021E5BE0: .word ov14_021F7BC8\n    _021E5BE4: .word ov14_021F7C20\n    _021E5BE8: .word ov14_021F7C3C\n    _021E5BEC: .word ov14_021F7C74\n    _021E5BF0: .word ov14_021F7C90\n    _021E5BF4: .word ov14_021F7C58\n    _021E5BF8: .word ov14_021F7CAC\n    _021E5BFC: .word ov14_021F7CC8"
    );
    #endif
}

void ov14_021E5C00(void) {
    /* Original at 0x021E5C00 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #6\n    ldr r0, [r0, #0x14]\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x34]\n    mov r1, #5\n    ldr r0, [r0, #0x14]\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x34]\n    mov r1, #4\n    ldr r0, [r0, #0x14]\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x34]\n    mov r1, #3\n    ldr r0, [r0, #0x14]\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x34]\n    mov r1, #2\n    ldr r0, [r0, #0x14]\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x14]\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x14]\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x14]\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E5C54(void) {
    /* Original at 0x021E5C54 */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r3, #0\n    str r3, [sp]\n    add r4, r0, #0\n    str r3, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x34]\n    mov r0, #0x13\n    ldr r2, [r2, #0x14]\n    mov r1, #0xe\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x34]\n    mov r0, #0x13\n    ldr r2, [r2, #0x14]\n    mov r1, #0xe\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x34]\n    mov r0, #0x13\n    ldr r2, [r2, #0x14]\n    mov r1, #3\n    mov r3, #2\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x34]\n    mov r1, #2\n    ldr r2, [r2, #0x14]\n    mov r0, #0x13\n    add r3, r1, #0\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x34]\n    mov r0, #0x13\n    ldr r2, [r2, #0x14]\n    mov r3, #3\n    bl GfGfxLoader_LoadCharData\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x34]\n    mov r0, #0x13\n    ldr r2, [r2, #0x14]\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x80\n    str r0, [sp]\n    mov r0, #0xa\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x13\n    mov r1, #4\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x34]\n    mov r0, #0x13\n    ldr r2, [r2, #0x14]\n    mov r1, #6\n    mov r3, #5\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x34]\n    mov r1, #5\n    ldr r2, [r2, #0x14]\n    mov r0, #0x13\n    add r3, r1, #0\n    bl GfGfxLoader_LoadScrnData\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #0x13\n    mov r1, #7\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x34]\n    mov r1, #6\n    ldr r2, [r2, #0x14]\n    mov r0, #0x13\n    add r3, r1, #0\n    bl GfGfxLoader_LoadCharData\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E5D78(void) {
    /* Original at 0x021E5D78 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0x18\n    mov r3, #0xa\n    bl NewMsgDataFromNarc\n    ldr r1, [r4, #0x34]\n    mov r2, #0\n    str r0, [r1, #0x20]\n    mov r0, #1\n    mov r1, #2\n    mov r3, #0xa\n    bl MessagePrinter_New\n    ldr r1, [r4, #0x34]\n    str r0, [r1, #0x1c]\n    mov r0, #0xa\n    bl MessageFormat_New\n    ldr r1, [r4, #0x34]\n    str r0, [r1, #0x24]\n    mov r0, #1\n    lsl r0, r0, #0xa\n    mov r1, #0xa\n    bl String_New\n    ldr r1, [r4, #0x34]\n    str r0, [r1, #0x28]\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E5DB8(void) {
    /* Original at 0x021E5DB8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x28]\n    bl String_Delete\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x24]\n    bl MessageFormat_Delete\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x1c]\n    bl MessagePrinter_Delete\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x20]\n    bl DestroyMsgData\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E5DE0(void) {
    /* Original at 0x021E5DE0 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0xfa\n    ldr r4, [r5, #0x34]\n    lsl r0, r0, #2\n    str r0, [sp]\n    sub r0, #0xe8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x14]\n    mov r0, #0x13\n    mov r1, #0x40\n    mov r3, #0\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    str r0, [sp]\n    sub r0, #0xe8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0xa\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x14]\n    mov r0, #0x13\n    mov r1, #0x40\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0x40\n    str r0, [sp]\n    mov r0, #0xa\n    mov r3, #6\n    str r0, [sp, #4]\n    mov r0, #0x13\n    mov r1, #0x41\n    mov r2, #0\n    lsl r3, r3, #6\n    bl GfGfxLoader_GXLoadPal\n    ldr r0, [r5, #0x10]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r3, #0xa\n    str r3, [sp, #4]\n    ldr r0, [r4, #0x14]\n    ldr r2, _021E5E70 ; =0x0000038E\n    mov r1, #0\n    bl LoadUserFrameGfx2\n    mov r1, #0x16\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0xa\n    bl LoadFontPal1\n    mov r1, #0x1e\n    mov r0, #4\n    lsl r1, r1, #4\n    mov r2, #0xa\n    bl LoadFontPal0\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021E5E70: .word 0x0000038E"
    );
    #endif
}

void ov14_021E5E74(void) {
    /* Original at 0x021E5E74 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xa\n    bl PaletteData_Init\n    ldr r1, [r4, #0x34]\n    mov r2, #2\n    str r0, [r1, #0x18]\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x18]\n    lsl r2, r2, #8\n    mov r3, #0xa\n    bl PaletteData_AllocBuffers\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E5E94(void) {
    /* Original at 0x021E5E94 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x18]\n    bl PaletteData_FreeBuffers\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x18]\n    bl PaletteData_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E5EAC(void) {
    /* Original at 0x021E5EAC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #1\n    bne _021E5EC4\n    mov r0, #0xa\n    str r0, [sp]\n    ldr r0, _021E5ECC ; =0x04000050\n    mov r1, #0\n    mov r2, #0x2a\n    mov r3, #6\n    bl G2x_SetBlendAlpha_\n    pop {r3, pc}\n    ldr r0, _021E5ECC ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    pop {r3, pc}\n    _021E5ECC: .word 0x04000050"
    );
    #endif
}

void ov14_021E5ED0(void) {
    YesNoPrompt_Create(0xa);
}

void ov14_021E5EE8(void) {
    /* Original at 0x021E5EE8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x34]\n    ldr r0, _021E5EF4 ; =0x00000434\n    ldr r3, _021E5EF8 ; =YesNoPrompt_Destroy\n    ldr r0, [r1, r0]\n    bx r3\n    nop\n    _021E5EF4: .word 0x00000434\n    _021E5EF8: .word YesNoPrompt_Destroy"
    );
    #endif
}

void ov14_021E5EFC(void) {
    /* Original at 0x021E5EFC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    ldr r2, [r0, #0x34]\n    mov r4, #0xeb\n    ldr r2, [r2, #0x14]\n    mov r5, #0\n    str r2, [sp]\n    lsl r4, r4, #2\n    mov r2, #8\n    str r4, [sp, #8]\n    str r2, [sp, #0xc]\n    str r5, [sp, #4]\n    mov r3, #0x19\n    add r2, sp, #0\n    strb r3, [r2, #0x10]\n    mov r3, #0xc\n    strb r3, [r2, #0x11]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1c\n    ldrb r6, [r2, #0x12]\n    mov r3, #0xf\n    lsr r1, r1, #0x18\n    bic r6, r3\n    strb r6, [r2, #0x12]\n    ldrb r3, [r2, #0x12]\n    mov r6, #0xf0\n    add r4, #0x88\n    bic r3, r6\n    orr r1, r3\n    strb r1, [r2, #0x12]\n    strb r5, [r2, #0x13]\n    ldr r0, [r0, #0x34]\n    add r1, sp, #0\n    ldr r0, [r0, r4]\n    bl YesNoPrompt_InitFromTemplate\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021E5F4C(void) {
    /* Original at 0x021E5F4C */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021E6044 ; =0x000088D4\n    add r4, r0, r1\n    ldrb r1, [r4, #2]\n    cmp r1, #0\n    beq _021E5F68\n    cmp r1, #1\n    beq _021E5FC0\n    cmp r1, #2\n    beq _021E602C\n    b _021E603E\n    ldrb r1, [r4]\n    lsl r2, r1, #0x1f\n    lsr r2, r2, #0x1f\n    bne _021E5F8A\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x19\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldrb r1, [r4, #1]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    bl ManagedSprite_SetPaletteOverride\n    b _021E5FB8\n    ldrb r1, [r4, #6]\n    str r1, [sp]\n    ldrb r1, [r4, #7]\n    str r1, [sp, #4]\n    ldrb r1, [r4, #1]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    str r1, [sp, #8]\n    ldrb r1, [r4]\n    ldrb r2, [r4, #4]\n    ldrb r3, [r4, #5]\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x14]\n    lsr r1, r1, #0x19\n    bl BgTilemapRectChangePalette\n    ldrb r1, [r4]\n    ldr r0, [r5, #0x34]\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x14]\n    lsr r1, r1, #0x19\n    bl ScheduleBgTilemapBufferTransfer\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    b _021E603E\n    ldrb r0, [r4, #3]\n    add r0, r0, #1\n    strb r0, [r4, #3]\n    ldrb r0, [r4, #3]\n    cmp r0, #4\n    bne _021E603E\n    ldrb r0, [r4]\n    lsl r1, r0, #0x1f\n    lsr r1, r1, #0x1f\n    bne _021E5FF0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x19\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    add r1, r1, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldrb r1, [r4, #1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1c\n    bl ManagedSprite_SetPaletteOverride\n    b _021E6020\n    ldrb r0, [r4, #6]\n    str r0, [sp]\n    ldrb r0, [r4, #7]\n    str r0, [sp, #4]\n    ldrb r0, [r4, #1]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    str r0, [sp, #8]\n    ldrb r1, [r4]\n    ldr r0, [r5, #0x34]\n    ldrb r2, [r4, #4]\n    lsl r1, r1, #0x18\n    ldrb r3, [r4, #5]\n    ldr r0, [r0, #0x14]\n    lsr r1, r1, #0x19\n    bl BgTilemapRectChangePalette\n    ldrb r1, [r4]\n    ldr r0, [r5, #0x34]\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x14]\n    lsr r1, r1, #0x19\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0\n    strb r0, [r4, #3]\n    ldrb r0, [r4, #2]\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    b _021E603E\n    ldrb r0, [r4, #3]\n    add r0, r0, #1\n    strb r0, [r4, #3]\n    ldrb r0, [r4, #3]\n    cmp r0, #2\n    bne _021E603E\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _021E6044: .word 0x000088D4"
    );
    #endif
}

void ov14_021E6048(void) {
    /* Original at 0x021E6048 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_IsButtonInputMode\n    cmp r0, #1\n    ldr r0, [r4]\n    bne _021E6064\n    ldr r0, [r0, #4]\n    mov r1, #0\n    bl MenuInputStateMgr_SetState\n    pop {r4, pc}\n    ldr r0, [r0, #4]\n    mov r1, #1\n    bl MenuInputStateMgr_SetState\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E6070(void) {
    /* Original at 0x021E6070 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    ldrb r1, [r0, #0x1f]\n    add r5, r2, #0\n    add r2, r6, #0\n    add r4, r3, #0\n    bl ov14_021E60C0\n    cmp r0, #0\n    bne _021E6088\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r1, r5, #0\n    add r2, r4, #0\n    bl GetBoxMonData\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021E6094(void) {
    /* Original at 0x021E6094 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldrb r1, [r5, #0x1f]\n    add r6, r2, #0\n    add r2, r4, #0\n    add r7, r3, #0\n    bl ov14_021E60C0\n    cmp r0, #0\n    beq _021E60BE\n    add r1, r6, #0\n    add r2, r7, #0\n    bl SetBoxMonData\n    cmp r4, #0x1e\n    bhs _021E60BE\n    ldrb r1, [r5, #0x1f]\n    ldr r0, [r5, #4]\n    bl PCStorage_SetBoxModified\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E60C0(void) {
    /* Original at 0x021E60C0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r1, #0xff\n    beq _021E60CE\n    cmp r4, #0x1e\n    blo _021E60F0\n    cmp r4, #0x1e\n    blo _021E60D4\n    sub r4, #0x1e\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    cmp r0, r4\n    bls _021E60EC\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    bl Mon_GetBoxMon\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r4, #0xff\n    bne _021E60F8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #4]\n    bl PCStorage_GetMonByIndexPair\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E6100(void) {
    /* Original at 0x021E6100 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r2, #0x1e\n    bhs _021E610E\n    ldr r0, [r0, #4]\n    bl PCStorage_DeleteBoxMonByIndexPair\n    pop {r3, pc}\n    sub r2, #0x1e\n    ldr r0, [r0, #8]\n    add r1, r2, #0\n    bl Party_RemoveMon\n    pop {r3, pc}"
    );
    #endif
}

void ov14_021E611C(void) {
    /* Original at 0x021E611C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    ldrb r1, [r5, #0x1f]\n    ldr r2, [r6, #4]\n    bl ov14_021E60C0\n    ldr r1, [r6]\n    bl CopyBoxPokemonToPokemon\n    ldr r7, [r4, #4]\n    ldr r0, [r5, #8]\n    sub r7, #0x1e\n    add r1, r7, #0\n    bl Party_GetMonByIndex\n    ldr r1, [r4]\n    bl CopyPokemonToPokemon\n    mov r1, #0\n    add r0, sp, #0\n    strb r1, [r0]\n    ldr r0, [r4]\n    mov r1, #MON_DATA_MOOD\n    add r2, sp, #0\n    bl SetMonData\n    ldr r0, [r5, #8]\n    ldr r2, [r6]\n    add r1, r7, #0\n    bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers\n    ldr r0, [r4]\n    bl Mon_GetBoxMon\n    add r3, r0, #0\n    ldrb r1, [r5, #0x1f]\n    ldr r0, [r5, #4]\n    ldr r2, [r4, #8]\n    bl PCStorage_PlaceMonInBoxByIndexPair\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F4958\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F4A20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E6184(void) {
    /* Original at 0x021E6184 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldrb r1, [r5, #0x1f]\n    ldr r2, [r4, #4]\n    bl ov14_021E60C0\n    ldr r1, [r4]\n    bl CopyBoxPokemonToPokemon\n    ldr r0, [r5, #8]\n    ldr r1, [r4]\n    bl Party_AddMon\n    ldrb r1, [r5, #0x1f]\n    ldr r2, [r4, #4]\n    add r0, r5, #0\n    bl ov14_021E6100\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F4958\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F4A20\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E61BC(void) {
    /* Original at 0x021E61BC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r1, [r4, #4]\n    ldr r0, [r5, #8]\n    sub r1, #0x1e\n    bl Party_GetMonByIndex\n    mov r2, #0\n    add r1, sp, #0\n    strb r2, [r1]\n    add r6, r0, #0\n    mov r1, #MON_DATA_MOOD\n    add r2, sp, #0\n    bl SetMonData\n    add r0, r6, #0\n    bl Mon_GetBoxMon\n    add r3, r0, #0\n    ldrb r1, [r5, #0x1f]\n    ldr r0, [r5, #4]\n    ldr r2, [r4, #8]\n    bl PCStorage_PlaceMonInBoxByIndexPair\n    ldrb r1, [r5, #0x1f]\n    ldr r2, [r4, #4]\n    add r0, r5, #0\n    bl ov14_021E6100\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F4958\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F4A20\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021E6210(void) {
    /* Original at 0x021E6210 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    ldr r7, [r6, #4]\n    add r5, r0, #0\n    ldr r4, [r6, #8]\n    sub r7, #0x1e\n    ldr r0, [r5, #8]\n    add r1, r7, #0\n    sub r4, #0x1e\n    bl Party_GetMonByIndex\n    ldr r1, [r6]\n    bl CopyPokemonToPokemon\n    add r1, sp, #4\n    ldr r0, [r5, #8]\n    add r1, #1\n    add r2, r7, #0\n    bl Party_GetMonAprijuiceModifiers\n    ldr r0, [r5, #8]\n    add r1, sp, #0\n    add r2, r4, #0\n    bl Party_GetMonAprijuiceModifiers\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    add r2, r0, #0\n    ldr r0, [r5, #8]\n    add r1, r7, #0\n    bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers\n    ldr r0, [r5, #8]\n    ldr r2, [r6]\n    add r1, r4, #0\n    bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers\n    ldr r0, [r5, #8]\n    add r1, sp, #0\n    add r2, r7, #0\n    bl Party_SetMonAprijuiceModifiers\n    add r1, sp, #4\n    ldr r0, [r5, #8]\n    add r1, #1\n    add r2, r4, #0\n    bl Party_SetMonAprijuiceModifiers\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E627C(void) {
    /* Original at 0x021E627C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r1, #0\n    ldr r6, [r4, #4]\n    add r5, r0, #0\n    sub r6, #0x1e\n    ldr r0, [r5, #8]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    ldr r1, [r4]\n    bl CopyPokemonToPokemon\n    ldr r0, [r5, #8]\n    add r1, sp, #0\n    add r2, r6, #0\n    bl Party_GetMonAprijuiceModifiers\n    ldrb r1, [r5, #0x1f]\n    ldr r2, [r4, #4]\n    add r0, r5, #0\n    bl ov14_021E6100\n    ldr r0, [r5, #8]\n    ldr r1, [r4]\n    bl Party_AddMon\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    sub r2, r0, #1\n    ldr r0, [r5, #8]\n    add r1, sp, #0\n    bl Party_SetMonAprijuiceModifiers\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021E62C8(void) {
    /* Original at 0x021E62C8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldrb r1, [r5, #0x1f]\n    ldr r2, [r4, #4]\n    bl ov14_021E60C0\n    add r6, r0, #0\n    ldr r1, [r4, #8]\n    add r0, r5, #0\n    bl ov14_021E6464\n    add r7, r0, #0\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    add r2, r6, #0\n    bl PCStorage_PlaceMonInBoxFirstEmptySlot\n    ldrb r1, [r5, #0x1f]\n    ldr r0, [r5, #4]\n    ldr r2, [r4, #4]\n    bl PCStorage_DeleteBoxMonByIndexPair\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F4958\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F4A20\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov14_021F4958\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov14_021F4A20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E6318(void) {
    /* Original at 0x021E6318 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #8]\n    add r5, r0, #0\n    bl ov14_021E6464\n    ldr r1, [r4, #4]\n    add r6, r0, #0\n    ldr r0, [r5, #8]\n    sub r1, #0x1e\n    bl Party_GetMonByIndex\n    ldr r1, [r4]\n    bl CopyPokemonToPokemon\n    ldr r0, [r4]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x7b\n    lsl r1, r1, #2\n    cmp r0, r1\n    bne _021E6350\n    ldr r0, [r4]\n    mov r1, #0\n    bl Mon_UpdateShayminForm\n    ldr r0, [r4]\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [r5, #4]\n    add r1, r6, #0\n    bl PCStorage_PlaceMonInBoxFirstEmptySlot\n    ldrb r1, [r5, #0x1f]\n    ldr r2, [r4, #4]\n    add r0, r5, #0\n    bl ov14_021E6100\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021F4958\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021F4A20\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021E637C(void) {
    /* Original at 0x021E637C */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r4, [r0, #0xc]\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    cmp r0, #0xff\n    beq _021E6462\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    add r1, r4, #0\n    add r1, #0xe8\n    ldr r3, [r1]\n    mov r1, #0x80\n    tst r1, r3\n    beq _021E63CA\n    add r0, r5, #0\n    add r1, r3, #0\n    bl ov14_021E6464\n    add r0, r4, #0\n    add r0, #0xe4\n    ldr r1, [r0]\n    cmp r1, #0x1e\n    bhs _021E63BC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021E62C8\n    pop {r3, r4, r5, pc}\n    sub r1, #0x1e\n    lsl r1, r1, #5\n    add r0, r5, #0\n    add r1, r4, r1\n    bl ov14_021E6318\n    pop {r3, r4, r5, pc}\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r2, [r1]\n    cmp r2, #0x1e\n    bhs _021E6410\n    cmp r3, #0x1e\n    bhs _021E63F2\n    ldrb r1, [r5, #0x1f]\n    ldr r0, [r5, #4]\n    bl PCStorage_SwapMonsInBoxByIndexPair\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F4958\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F4A20\n    pop {r3, r4, r5, pc}\n    sub r3, #0x1e\n    cmp r3, r0\n    bhs _021E6406\n    add r1, r4, #0\n    add r4, #0x20\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021E611C\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021E6184\n    pop {r3, r4, r5, pc}\n    cmp r3, #0x1e\n    bhs _021E6446\n    add r1, r3, #0\n    add r0, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021E6432\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x20\n    add r2, r4, #0\n    bl ov14_021E611C\n    pop {r3, r4, r5, pc}\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    add r0, r5, #0\n    sub r1, #0x1e\n    lsl r1, r1, #5\n    add r1, r4, r1\n    bl ov14_021E61BC\n    pop {r3, r4, r5, pc}\n    sub r3, #0x1e\n    cmp r3, r0\n    bhs _021E6456\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021E6210\n    pop {r3, r4, r5, pc}\n    sub r2, #0x1e\n    lsl r1, r2, #5\n    add r0, r5, #0\n    add r1, r4, r1\n    bl ov14_021E627C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E6464(void) {
    _s32_div_f(0x7f, 6, 6);
}

void ov14_021E6480(void) {
    /* Original at 0x021E6480 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    add r7, r1, #0\n    mov r4, #0\n    bl Party_GetCount\n    cmp r0, #0\n    bls _021E64CA\n    cmp r4, r7\n    beq _021E64BE\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #0x4c\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _021E64BE\n    add r0, r6, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _021E64BE\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #8]\n    add r4, r4, #1\n    bl Party_GetCount\n    cmp r4, r0\n    blo _021E6492\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E64D0(void) {
    /* Original at 0x021E64D0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #5\n    mov r2, #0\n    add r4, r0, #0\n    bl GetBoxMonData\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldr r0, _021E6544 ; =0x000001ED\n    cmp r1, r0\n    bne _021E6510\n    add r0, r4, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetBoxMonData\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, r4, #0\n    bl BoxMon_UpdateArceusForm\n    add r0, r4, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetBoxMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r5, r0\n    beq _021E6540\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    sub r0, r0, #6\n    cmp r1, r0\n    bne _021E6540\n    add r0, r4, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetBoxMonData\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, r4, #0\n    bl BoxMon_UpdateGiratinaForm\n    add r0, r4, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetBoxMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r5, r0\n    beq _021E6540\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _021E6544: .word 0x000001ED"
    );
    #endif
}

void ov14_021E6548(void) {
    /* Original at 0x021E6548 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x1e\n    bhs _021E6556\n    cmp r2, #0x1e\n    blo _021E65BC\n    cmp r4, #0x1e\n    blo _021E655E\n    cmp r2, #0x1e\n    bhs _021E65BC\n    cmp r4, #0x1e\n    blo _021E6564\n    add r4, r2, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #5\n    mov r3, #0\n    bl ov14_021E6070\n    mov r1, #0x7b\n    lsl r1, r1, #2\n    cmp r0, r1\n    bne _021E65BC\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x70\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021E65BC\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021E60C0\n    mov r1, #0\n    bl BoxMon_UpdateShayminForm\n    ldr r3, [r5, #0x34]\n    ldrb r1, [r5, #0x1f]\n    add r6, r3, r4\n    ldr r3, _021E65C0 ; =0x00004094\n    add r0, r5, #0\n    ldrb r3, [r6, r3]\n    add r2, r4, #0\n    bl ov14_021F2ED0\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, r4\n    bne _021E65BC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021E7588\n    pop {r4, r5, r6, pc}\n    nop\n    _021E65C0: .word 0x00004094"
    );
    #endif
}

void ov14_021E65C4(void) {
    /* Original at 0x021E65C4 */
    /* Requires manual decompilation - 144 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r6, [r0, #0xc]\n    add r0, r6, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    cmp r0, #8\n    bne _021E665E\n    mov r7, #0\n    ldr r0, [r6, #0xc]\n    cmp r0, #0\n    beq _021E6650\n    ldr r1, [r6, #4]\n    ldr r0, [r5, #0x34]\n    add r2, r0, r1\n    ldr r0, _021E66F0 ; =0x00004094\n    ldrb r4, [r2, r0]\n    ldr r0, [r6, #8]\n    mov r2, #0x80\n    tst r2, r0\n    add r2, sp, #4\n    bne _021E6604\n    add r3, r5, #0\n    add r3, #0x22\n    ldrb r3, [r3]\n    add r1, sp, #4\n    add r1, #2\n    bl ov14_021F2F88\n    b _021E6634\n    cmp r1, #0x1e\n    blo _021E661A\n    add r3, r5, #0\n    add r3, #0x22\n    ldrb r3, [r3]\n    add r1, sp, #4\n    mov r0, #0x23\n    add r1, #2\n    bl ov14_021F2F88\n    b _021E662A\n    add r3, r5, #0\n    add r3, #0x22\n    ldrb r3, [r3]\n    add r0, r1, #0\n    add r1, sp, #4\n    add r1, #2\n    bl ov14_021F2F88\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r1, [r5, #0x34]\n    lsl r0, r4, #2\n    add r1, r1, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r2, sp, #4\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    add r3, r2, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    bl ManagedSprite_SetPositionXY\n    add r7, r7, #1\n    add r6, #0x20\n    cmp r7, #7\n    blo _021E65DA\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    add r4, r6, #0\n    add r1, r0, #1\n    add r0, r6, #0\n    add r0, #0xe0\n    str r1, [r0]\n    mov r0, #0\n    str r0, [sp]\n    add r7, sp, #4\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021E66DE\n    ldr r1, [r5, #0x34]\n    ldr r0, [r4, #4]\n    add r1, r1, r0\n    ldr r0, _021E66F0 ; =0x00004094\n    ldrb r0, [r1, r0]\n    mov r1, #0x18\n    ldrsh r3, [r4, r1]\n    add r1, r6, #0\n    add r1, #0xe0\n    ldr r2, [r1]\n    ldr r1, [r4, #0x10]\n    mov ip, r0\n    mov r0, #0x1c\n    mul r1, r2\n    lsr r1, r1, #0x10\n    ldrsh r0, [r4, r0]\n    mul r1, r3\n    add r0, r0, r1\n    strh r0, [r7, #2]\n    mov r1, #0x1a\n    ldrsh r3, [r4, r1]\n    add r1, r6, #0\n    add r1, #0xe0\n    ldr r2, [r1]\n    ldr r1, [r4, #0x14]\n    mov r0, #0x1e\n    mul r1, r2\n    lsr r1, r1, #0x10\n    ldrsh r0, [r4, r0]\n    mul r1, r3\n    mov r2, #0\n    add r0, r0, r1\n    strh r0, [r7]\n    mov r1, ip\n    ldr r0, [r5, #0x34]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r7, r1]\n    ldrsh r2, [r7, r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x34]\n    ldr r1, [r4, #4]\n    mov r2, #0\n    bl ov14_021F3190\n    ldr r0, [sp]\n    add r4, #0x20\n    add r0, r0, #1\n    str r0, [sp]\n    cmp r0, #7\n    blo _021E6674\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E66F0: .word 0x00004094"
    );
    #endif
}

void ov14_021E66F4(void) {
    /* Original at 0x021E66F4 */
    /* Requires manual decompilation - 139 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r4, [r0, #0xc]\n    add r0, r4, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    cmp r0, #8\n    bne _021E676E\n    mov r6, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021E6760\n    ldr r1, [r5, #0x34]\n    ldr r0, [r4, #4]\n    add r3, r5, #0\n    add r1, r1, r0\n    ldr r0, _021E6810 ; =0x00004094\n    add r3, #0x22\n    ldrb r7, [r1, r0]\n    add r1, sp, #4\n    ldrb r3, [r3]\n    ldr r0, [r4, #8]\n    add r1, #2\n    add r2, sp, #4\n    bl ov14_021F2F88\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    ldr r0, [r4, #8]\n    cmp r1, r0\n    beq _021E6744\n    add r1, sp, #4\n    mov r0, #0\n    ldrsh r1, [r1, r0]\n    add r0, sp, #4\n    add r1, #0x90\n    strh r1, [r0]\n    ldr r1, [r5, #0x34]\n    lsl r0, r7, #2\n    add r1, r1, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r2, sp, #4\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    add r3, r2, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    bl ManagedSprite_SetPositionXY\n    add r6, r6, #1\n    add r4, #0x20\n    cmp r6, #7\n    blo _021E670A\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0xe0\n    str r1, [r0]\n    mov r1, #0\n    add r0, r4, #0\n    ldr r2, [r0, #0xc]\n    cmp r2, #0\n    beq _021E6802\n    add r2, r5, #0\n    add r2, #0x21\n    ldrb r3, [r2]\n    ldr r2, [r0, #8]\n    cmp r3, r2\n    bne _021E6802\n    lsl r6, r1, #5\n    add r0, r4, #4\n    str r0, [sp]\n    ldr r1, [r5, #0x34]\n    ldr r0, [r0, r6]\n    add r1, r1, r0\n    ldr r0, _021E6810 ; =0x00004094\n    ldrb r3, [r1, r0]\n    add r0, r4, r6\n    mov r1, #0x1c\n    ldrsh r7, [r0, r1]\n    mov r1, #0x18\n    ldrsh r1, [r0, r1]\n    mov ip, r1\n    add r1, r4, #0\n    add r1, #0xe0\n    ldr r2, [r1]\n    ldr r1, [r0, #0x10]\n    add r4, #0xe0\n    mul r1, r2\n    lsr r1, r1, #0x10\n    mov r2, ip\n    mul r1, r2\n    add r1, r7, r1\n    add r7, sp, #4\n    strh r1, [r7, #2]\n    mov r1, #0x1e\n    ldrsh r2, [r0, r1]\n    mov r1, #0x1a\n    ldrsh r1, [r0, r1]\n    ldr r4, [r4]\n    ldr r0, [r0, #0x14]\n    mul r0, r4\n    lsr r0, r0, #0x10\n    mul r0, r1\n    add r0, r2, r0\n    strh r0, [r7]\n    mov r2, #0\n    ldr r1, [r5, #0x34]\n    lsl r0, r3, #2\n    add r1, r1, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r7, r1]\n    ldrsh r2, [r7, r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r1, [sp]\n    ldr r0, [r5, #0x34]\n    ldr r1, [r1, r6]\n    mov r2, #0\n    bl ov14_021F3190\n    b _021E680A\n    add r1, r1, #1\n    add r0, #0x20\n    cmp r1, #7\n    blo _021E6780\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E6810: .word 0x00004094"
    );
    #endif
}

void ov14_021E6814(void) {
    /* Original at 0x021E6814 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    ldr r0, [r6, #0x34]\n    ldr r5, [r0, #0xc]\n    add r0, r5, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    cmp r0, #8\n    bne _021E6876\n    mov r4, #0\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    beq _021E6868\n    ldr r1, [r6, #0x34]\n    ldr r0, [r5, #4]\n    add r3, r6, #0\n    add r1, r1, r0\n    ldr r0, _021E6908 ; =0x00004094\n    add r3, #0x22\n    ldrb r7, [r1, r0]\n    add r1, sp, #4\n    ldrb r3, [r3]\n    ldr r0, [r5, #8]\n    add r1, #2\n    add r2, sp, #4\n    bl ov14_021F2F88\n    add r2, sp, #4\n    ldr r1, [r6, #0x34]\n    lsl r0, r7, #2\n    add r1, r1, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    add r3, r2, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    bl ManagedSprite_SetPositionXY\n    add r4, r4, #1\n    add r5, #0x20\n    cmp r4, #7\n    blo _021E682A\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    add r4, r5, #0\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0xe0\n    str r1, [r0]\n    mov r0, #0\n    str r0, [sp]\n    add r7, sp, #4\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021E68F6\n    ldr r1, [r6, #0x34]\n    ldr r0, [r4, #4]\n    add r1, r1, r0\n    ldr r0, _021E6908 ; =0x00004094\n    ldrb r0, [r1, r0]\n    mov r1, #0x18\n    ldrsh r3, [r4, r1]\n    add r1, r5, #0\n    add r1, #0xe0\n    ldr r2, [r1]\n    ldr r1, [r4, #0x10]\n    mov ip, r0\n    mov r0, #0x1c\n    mul r1, r2\n    lsr r1, r1, #0x10\n    ldrsh r0, [r4, r0]\n    mul r1, r3\n    add r0, r0, r1\n    strh r0, [r7, #2]\n    mov r1, #0x1a\n    ldrsh r3, [r4, r1]\n    add r1, r5, #0\n    add r1, #0xe0\n    ldr r2, [r1]\n    ldr r1, [r4, #0x14]\n    mov r0, #0x1e\n    mul r1, r2\n    lsr r1, r1, #0x10\n    ldrsh r0, [r4, r0]\n    mul r1, r3\n    mov r2, #0\n    add r0, r0, r1\n    strh r0, [r7]\n    mov r1, ip\n    ldr r0, [r6, #0x34]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r7, r1]\n    ldrsh r2, [r7, r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r6, #0x34]\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    bl ov14_021F31E0\n    ldr r0, [sp]\n    add r4, #0x20\n    add r0, r0, #1\n    str r0, [sp]\n    cmp r0, #7\n    blo _021E688C\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E6908: .word 0x00004094"
    );
    #endif
}

void ov14_021E690C(void) {
    /* Original at 0x021E690C */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    add r6, r1, #0\n    add r1, r4, #0\n    mov r2, #0xac\n    mov r3, #0\n    add r5, r0, #0\n    bl ov14_021E6070\n    mov r0, #0x80\n    tst r0, r4\n    beq _021E694C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021E6464\n    ldrb r1, [r5, #0x1f]\n    str r0, [sp]\n    cmp r0, r1\n    beq _021E6940\n    ldr r0, [r5, #4]\n    ldr r1, [sp]\n    bl PCStorage_CountMonsAndEggsInBox\n    cmp r0, #0x1e\n    bne _021E6944\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x80\n    eor r4, r0\n    mov r7, #0\n    b _021E695E\n    ldrb r0, [r5, #0x1f]\n    add r1, r4, #0\n    mov r2, #0xac\n    str r0, [sp]\n    add r0, r5, #0\n    mov r3, #0\n    bl ov14_021E6070\n    add r7, r0, #0\n    cmp r6, #0x1e\n    blo _021E69D6\n    add r1, r6, #0\n    add r0, r5, #0\n    sub r1, #0x1e\n    bl ov14_021E6480\n    cmp r0, #0\n    bne _021E699C\n    cmp r7, #0\n    bne _021E6984\n    cmp r4, #0x1e\n    blo _021E6980\n    ldrb r1, [r5, #0x1f]\n    ldr r0, [sp]\n    cmp r0, r1\n    beq _021E699C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x4c\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021E699C\n    cmp r4, #0x1e\n    bhs _021E699C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0x1e\n    bhs _021E6A36\n    sub r6, #0x1e\n    ldr r0, [r5, #8]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021E69C4\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _021E6A36\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0x1e\n    blo _021E6A36\n    cmp r7, #0\n    beq _021E6A36\n    add r1, r4, #0\n    ldr r0, [r5, #8]\n    sub r1, #0x1e\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021E6A02\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _021E6A14\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x4c\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021E6A36\n    sub r4, #0x1e\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021E6480\n    cmp r0, #0\n    bne _021E6A36\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E6A3C(void) {
    /* Original at 0x021E6A3C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r1, r2, #0\n    mov r2, #0xac\n    mov r3, #0\n    add r5, r0, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021E6A54\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r1, r4, #0\n    add r0, r5, #0\n    sub r1, #0x1e\n    bl ov14_021E6480\n    cmp r0, #0\n    bne _021E6A66\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    sub r4, #0x1e\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021E6A8A\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _021E6A9C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E6AA0(void) {
    /* Original at 0x021E6AA0 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    add r4, r1, #0\n    add r1, r6, #0\n    mov r2, #0xac\n    mov r3, #0\n    add r5, r0, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    bne _021E6ABA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x4c\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021E6ACE\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021E6AEC\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    add r0, r7, #0\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021E6B0A\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    cmp r0, #0x70\n    bne _021E6B26\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #5\n    mov r3, #0\n    bl ov14_021E6070\n    ldr r1, _021E6B44 ; =0x000001E7\n    cmp r0, r1\n    beq _021E6B26\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r7, #0x70\n    bne _021E6B40\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #5\n    mov r3, #0\n    bl ov14_021E6070\n    ldr r1, _021E6B44 ; =0x000001E7\n    cmp r0, r1\n    beq _021E6B40\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E6B44: .word 0x000001E7"
    );
    #endif
}

void ov14_021E6B48(void) {
    /* Original at 0x021E6B48 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, [r4, #4]\n    add r2, r0, r1\n    ldr r1, _021E6C08 ; =0x00004094\n    ldrb r1, [r2, r1]\n    add r2, r4, #0\n    add r2, #0x1e\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    add r1, #0x1c\n    bl ManagedSprite_GetPositionXY\n    ldr r2, [r4, #8]\n    mov r0, #0x80\n    tst r0, r2\n    bne _021E6B88\n    add r5, #0x22\n    ldrb r3, [r5]\n    add r1, sp, #0\n    add r0, r2, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ov14_021F2F88\n    b _021E6B98\n    mov r1, #0x7f\n    and r1, r2\n    add r2, sp, #0\n    ldr r0, [r5, #0x34]\n    add r2, #2\n    add r3, sp, #0\n    bl ov14_021F4940\n    mov r0, #0x1c\n    add r2, sp, #0\n    mov r1, #2\n    ldrsh r5, [r4, r0]\n    ldrsh r3, [r2, r1]\n    cmp r5, r3\n    bgt _021E6BB2\n    mov r3, #1\n    strh r3, [r4, #0x18]\n    ldrsh r1, [r2, r1]\n    ldrsh r0, [r4, r0]\n    sub r0, r1, r0\n    b _021E6BBC\n    sub r3, r1, #3\n    strh r3, [r4, #0x18]\n    ldrsh r3, [r4, r0]\n    ldrsh r0, [r2, r1]\n    sub r0, r3, r0\n    lsl r1, r0, #0x10\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    str r0, [r4, #0x10]\n    mov r0, #0x1e\n    add r2, sp, #0\n    mov r1, #0\n    ldrsh r5, [r4, r0]\n    ldrsh r3, [r2, r1]\n    cmp r5, r3\n    bgt _021E6BEE\n    mov r3, #1\n    strh r3, [r4, #0x1a]\n    ldrsh r1, [r2, r1]\n    ldrsh r0, [r4, r0]\n    sub r0, r1, r0\n    lsl r1, r0, #0x10\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    str r0, [r4, #0x14]\n    pop {r3, r4, r5, pc}\n    sub r3, r1, #1\n    strh r3, [r4, #0x1a]\n    ldrsh r3, [r4, r0]\n    ldrsh r0, [r2, r1]\n    sub r0, r3, r0\n    lsl r1, r0, #0x10\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    str r0, [r4, #0x14]\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6C08: .word 0x00004094"
    );
    #endif
}

void ov14_021E6C0C(void) {
    /* Original at 0x021E6C0C */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, [r4, #8]\n    add r2, r0, r1\n    ldr r1, _021E6CC4 ; =0x00004094\n    ldrb r6, [r2, r1]\n    ldr r2, [r4, #4]\n    add r2, r0, r2\n    ldrb r1, [r2, r1]\n    add r2, r4, #0\n    add r2, #0x1e\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    add r1, #0x1c\n    bl ManagedSprite_GetPositionXY\n    ldr r1, [r5, #0x34]\n    lsl r0, r6, #2\n    add r1, r1, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x1c\n    add r2, sp, #0\n    mov r1, #2\n    ldrsh r5, [r4, r0]\n    ldrsh r3, [r2, r1]\n    cmp r5, r3\n    bgt _021E6C6A\n    mov r3, #1\n    strh r3, [r4, #0x18]\n    ldrsh r1, [r2, r1]\n    ldrsh r0, [r4, r0]\n    sub r0, r1, r0\n    b _021E6C74\n    sub r3, r1, #3\n    strh r3, [r4, #0x18]\n    ldrsh r3, [r4, r0]\n    ldrsh r0, [r2, r1]\n    sub r0, r3, r0\n    lsl r1, r0, #0x10\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    str r0, [r4, #0x10]\n    mov r0, #0x1e\n    add r2, sp, #0\n    mov r1, #0\n    ldrsh r5, [r4, r0]\n    ldrsh r3, [r2, r1]\n    cmp r5, r3\n    bgt _021E6CA8\n    mov r3, #1\n    strh r3, [r4, #0x1a]\n    ldrsh r1, [r2, r1]\n    ldrsh r0, [r4, r0]\n    add sp, #4\n    sub r0, r1, r0\n    lsl r1, r0, #0x10\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    str r0, [r4, #0x14]\n    pop {r3, r4, r5, r6, pc}\n    sub r3, r1, #1\n    strh r3, [r4, #0x1a]\n    ldrsh r3, [r4, r0]\n    ldrsh r0, [r2, r1]\n    sub r0, r3, r0\n    lsl r1, r0, #0x10\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    str r0, [r4, #0x14]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021E6CC4: .word 0x00004094"
    );
    #endif
}

void ov14_021E6CC8(void) {
    /* Original at 0x021E6CC8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    ldr r1, [r7, #0x34]\n    add r6, r2, #0\n    ldr r4, [r1, #0xc]\n    mov r1, #1\n    str r5, [r4, #4]\n    str r6, [r4, #8]\n    str r1, [r4, #0xc]\n    add r1, r4, #0\n    bl ov14_021E6B48\n    str r6, [r4, #0x24]\n    str r5, [r4, #0x28]\n    mov r0, #1\n    str r0, [r4, #0x2c]\n    add r4, #0x20\n    add r0, r7, #0\n    add r1, r4, #0\n    bl ov14_021E6B48\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E6CF8(void) {
    /* Original at 0x021E6CF8 */
    /* Requires manual decompilation - 272 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r0, #0\n    str r2, [sp, #4]\n    ldr r2, [r6, #0x34]\n    str r1, [sp]\n    ldr r0, [r2, #0xc]\n    mov r1, #1\n    str r0, [sp, #0x14]\n    ldr r0, _021E6F38 ; =0x000040C4\n    str r1, [r2, r0]\n    mov r1, #0\n    ldr r2, [sp, #0x14]\n    add r0, r1, #0\n    str r0, [r2, #4]\n    str r0, [r2, #8]\n    str r0, [r2, #0xc]\n    add r1, r1, #1\n    add r2, #0x20\n    cmp r1, #7\n    blo _021E6D14\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #4]\n    add r1, #0xec\n    str r0, [r1]\n    cmp r0, #0xff\n    beq _021E6D40\n    ldr r1, [sp]\n    cmp r1, r0\n    beq _021E6D40\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    bl ov14_021E690C\n    cmp r0, #0\n    bne _021E6D66\n    ldr r0, [sp, #0x14]\n    mov r1, #0xff\n    add r0, #0xe4\n    str r1, [r0]\n    ldr r0, [sp, #0x14]\n    add r0, #0xe8\n    str r1, [r0]\n    ldr r1, [sp]\n    ldr r0, [sp, #0x14]\n    str r1, [r0, #4]\n    str r1, [r0, #8]\n    mov r1, #1\n    str r1, [r0, #0xc]\n    ldr r1, [sp, #0x14]\n    add r0, r6, #0\n    bl ov14_021E6B48\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp]\n    add r1, #0xe4\n    str r0, [r1]\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #4]\n    add r1, #0xe8\n    str r0, [r1]\n    ldr r0, [r6, #8]\n    bl Party_GetCount\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    mov r1, #0x80\n    tst r0, r1\n    beq _021E6E06\n    ldr r0, [sp]\n    cmp r0, #0x1e\n    bhs _021E6DAE\n    add r1, r0, #0\n    ldr r0, [sp, #0x14]\n    str r1, [r0, #4]\n    ldr r1, [sp, #4]\n    str r1, [r0, #8]\n    mov r1, #1\n    str r1, [r0, #0xc]\n    ldr r1, [sp, #0x14]\n    add r0, r6, #0\n    bl ov14_021E6B48\n    ldr r1, [r6, #0x34]\n    ldr r0, _021E6F38 ; =0x000040C4\n    mov r2, #0\n    str r2, [r1, r0]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    str r0, [sp, #0x10]\n    sub r0, #0x1e\n    add r5, r0, #1\n    str r0, [sp, #0x10]\n    cmp r5, #6\n    bhs _021E6DE0\n    ldr r0, [sp, #0x14]\n    lsl r1, r5, #5\n    add r4, r0, r1\n    mov r7, #1\n    add r0, r5, #0\n    add r0, #0x1e\n    str r0, [r4, #4]\n    add r0, r5, #0\n    add r0, #0x1d\n    str r0, [r4, #8]\n    add r0, r6, #0\n    add r1, r4, #0\n    str r7, [r4, #0xc]\n    bl ov14_021E6B48\n    add r5, r5, #1\n    add r4, #0x20\n    cmp r5, #6\n    blo _021E6DC2\n    ldr r0, [sp, #0x10]\n    lsl r1, r0, #5\n    ldr r0, [sp, #0x14]\n    add r1, r0, r1\n    ldr r0, [sp]\n    str r0, [r1, #4]\n    ldr r0, [sp, #4]\n    str r0, [r1, #8]\n    mov r0, #1\n    str r0, [r1, #0xc]\n    add r0, r6, #0\n    bl ov14_021E6B48\n    ldr r1, [r6, #0x34]\n    ldr r0, _021E6F38 ; =0x000040C4\n    mov r2, #0\n    str r2, [r1, r0]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    cmp r0, #0x1e\n    bhs _021E6E44\n    ldr r0, [sp, #4]\n    cmp r0, #0x1e\n    bhs _021E6E20\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    bl ov14_021E6CC8\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, #0x1e\n    cmp r0, r7\n    bhs _021E6E34\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    bl ov14_021E6CC8\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    add r7, #0x1e\n    ldr r1, [sp]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl ov14_021E6CC8\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    cmp r0, #0x1e\n    bhs _021E6ED2\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021E6E68\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    bl ov14_021E6CC8\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    str r0, [sp, #8]\n    sub r0, #0x1e\n    add r5, r0, #1\n    str r0, [sp, #8]\n    cmp r5, r7\n    bhs _021E6E9C\n    ldr r0, [sp, #0x14]\n    lsl r1, r5, #5\n    add r4, r0, r1\n    add r0, r5, #0\n    add r0, #0x1e\n    str r0, [r4, #4]\n    add r0, r5, #0\n    add r0, #0x1d\n    str r0, [r4, #8]\n    mov r0, #1\n    str r0, [r4, #0xc]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov14_021E6B48\n    add r5, r5, #1\n    add r4, #0x20\n    cmp r5, r7\n    blo _021E6E7C\n    ldr r0, [sp, #8]\n    lsl r1, r0, #5\n    ldr r0, [sp, #0x14]\n    add r1, r0, r1\n    ldr r0, [sp]\n    str r0, [r1, #4]\n    ldr r0, [sp, #4]\n    str r0, [r1, #8]\n    mov r0, #1\n    str r0, [r1, #0xc]\n    add r0, r6, #0\n    bl ov14_021E6B48\n    lsl r1, r7, #5\n    ldr r0, [sp, #0x14]\n    add r7, #0x1d\n    add r1, r0, r1\n    ldr r0, [sp, #4]\n    str r0, [r1, #4]\n    str r7, [r1, #8]\n    mov r0, #1\n    str r0, [r1, #0xc]\n    add r0, r6, #0\n    bl ov14_021E6B48\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, #0x1e\n    cmp r0, r7\n    bhs _021E6EE6\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    bl ov14_021E6CC8\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    str r0, [sp, #0xc]\n    sub r0, #0x1e\n    add r5, r0, #1\n    str r0, [sp, #0xc]\n    cmp r5, r7\n    bhs _021E6F1A\n    ldr r0, [sp, #0x14]\n    lsl r1, r5, #5\n    add r4, r0, r1\n    add r0, r5, #0\n    add r0, #0x1e\n    str r0, [r4, #4]\n    add r0, r5, #0\n    add r0, #0x1d\n    str r0, [r4, #8]\n    mov r0, #1\n    str r0, [r4, #0xc]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov14_021E6B48\n    add r5, r5, #1\n    add r4, #0x20\n    cmp r5, r7\n    blo _021E6EFA\n    ldr r0, [sp, #0xc]\n    add r7, #0x1d\n    lsl r1, r0, #5\n    ldr r0, [sp, #0x14]\n    add r1, r0, r1\n    ldr r0, [sp]\n    str r0, [r1, #4]\n    str r7, [r1, #8]\n    mov r0, #1\n    str r0, [r1, #0xc]\n    add r0, r6, #0\n    bl ov14_021E6B48\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E6F38: .word 0x000040C4"
    );
    #endif
}

void ov14_021E6F3C(void) {
    /* Original at 0x021E6F3C */
    /* Requires manual decompilation - 117 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    str r2, [sp, #4]\n    ldr r2, [r6, #0x34]\n    str r1, [sp]\n    ldr r0, [r2, #0xc]\n    mov r1, #1\n    str r0, [sp, #0xc]\n    ldr r0, _021E7030 ; =0x000040C4\n    str r1, [r2, r0]\n    mov r1, #0\n    ldr r2, [sp, #0xc]\n    add r0, r1, #0\n    str r0, [r2, #4]\n    str r0, [r2, #8]\n    str r0, [r2, #0xc]\n    add r1, r1, #1\n    add r2, #0x20\n    cmp r1, #7\n    blo _021E6F58\n    ldr r0, [sp, #4]\n    cmp r0, #0xff\n    beq _021E6F7A\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    bl ov14_021E6A3C\n    cmp r0, #0\n    bne _021E6FA0\n    ldr r0, [sp, #0xc]\n    mov r1, #0xff\n    add r0, #0xe4\n    str r1, [r0]\n    ldr r0, [sp, #0xc]\n    add r0, #0xe8\n    str r1, [r0]\n    ldr r1, [sp]\n    ldr r0, [sp, #0xc]\n    str r1, [r0, #4]\n    str r1, [r0, #8]\n    mov r1, #1\n    str r1, [r0, #0xc]\n    ldr r1, [sp, #0xc]\n    add r0, r6, #0\n    bl ov14_021E6B48\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp]\n    add r1, #0xe4\n    str r0, [r1]\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #4]\n    add r1, #0xe8\n    str r0, [r1]\n    ldr r0, [r6, #8]\n    bl Party_GetCount\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    cmp r0, #0x1e\n    bhs _021E702C\n    ldr r0, [sp]\n    str r0, [sp, #8]\n    sub r0, #0x1e\n    add r5, r0, #1\n    str r0, [sp, #8]\n    cmp r5, r7\n    bhs _021E6FF2\n    ldr r0, [sp, #0xc]\n    lsl r1, r5, #5\n    add r4, r0, r1\n    add r0, r5, #0\n    add r0, #0x1e\n    str r0, [r4, #4]\n    add r0, r5, #0\n    add r0, #0x1d\n    str r0, [r4, #8]\n    mov r0, #1\n    str r0, [r4, #0xc]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov14_021E6C0C\n    add r5, r5, #1\n    add r4, #0x20\n    cmp r5, r7\n    blo _021E6FD2\n    ldr r0, [sp, #8]\n    lsl r1, r0, #5\n    ldr r0, [sp, #0xc]\n    add r1, r0, r1\n    ldr r0, [sp]\n    str r0, [r1, #4]\n    ldr r0, [sp, #4]\n    str r0, [r1, #8]\n    mov r0, #1\n    str r0, [r1, #0xc]\n    add r0, r6, #0\n    bl ov14_021E6C0C\n    lsl r1, r7, #5\n    ldr r0, [sp, #0xc]\n    add r7, #0x1d\n    add r1, r0, r1\n    ldr r0, [sp, #4]\n    str r0, [r1, #4]\n    str r7, [r1, #8]\n    mov r0, #1\n    str r0, [r1, #0xc]\n    add r0, r6, #0\n    bl ov14_021E6C0C\n    ldr r1, [r6, #0x34]\n    ldr r0, _021E7030 ; =0x000040C4\n    mov r2, #0\n    str r2, [r1, r0]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E7030: .word 0x000040C4"
    );
    #endif
}

void ov14_021E7034(void) {
    /* Original at 0x021E7034 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r2, #0\n    ldr r2, [r5, #0x34]\n    ldr r0, _021E70AC ; =0x000040C4\n    add r6, r1, #0\n    ldr r4, [r2, #0xc]\n    mov r1, #1\n    str r1, [r2, r0]\n    mov r0, #0\n    add r1, r4, #0\n    add r3, r0, #0\n    str r3, [r1, #4]\n    str r3, [r1, #8]\n    str r3, [r1, #0xc]\n    add r0, r0, #1\n    add r1, #0x20\n    cmp r0, #7\n    blo _021E704C\n    cmp r7, #0xff\n    beq _021E706C\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r2, #0xac\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021E708C\n    add r0, r4, #0\n    mov r1, #0xff\n    add r0, #0xe4\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xe8\n    str r1, [r0]\n    str r6, [r4, #4]\n    str r6, [r4, #8]\n    mov r0, #1\n    str r0, [r4, #0xc]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021E6B48\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r0, #0xe4\n    str r6, [r0]\n    add r4, #0xe8\n    str r7, [r4]\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, #0x1e\n    bl ov14_021E6CC8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E70AC: .word 0x000040C4"
    );
    #endif
}

void ov14_021E70B0(void) {
    /* Original at 0x021E70B0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r0, [r0, #0x34]\n    mov r3, #0\n    ldr r2, [r0, #0xc]\n    add r4, r2, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #1\n    bne _021E70D0\n    ldr r0, [r4, #4]\n    cmp r1, r0\n    bne _021E70D0\n    lsl r0, r3, #5\n    add r0, r2, r0\n    ldr r0, [r0, #8]\n    pop {r3, r4}\n    bx lr\n    add r3, r3, #1\n    add r4, #0x20\n    cmp r3, #7\n    blo _021E70BA\n    mov r0, #0xff\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov14_021E70E0(void) {
    /* Original at 0x021E70E0 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #0x34]\n    str r1, [sp]\n    ldr r7, [r0, #0xc]\n    sub r1, #0x1e\n    mov r2, #0\n    str r1, [sp]\n    add r3, r7, #0\n    add r1, r2, #0\n    add r0, r2, #0\n    add r0, #0x1e\n    str r0, [r3, #4]\n    str r0, [r3, #8]\n    str r1, [r3, #0xc]\n    add r2, r2, #1\n    add r3, #0x20\n    cmp r2, #6\n    blo _021E70F4\n    lsl r0, r2, #5\n    add r0, r7, r0\n    str r1, [r0, #0xc]\n    ldr r0, [sp]\n    add r5, r0, #1\n    cmp r5, #6\n    bhs _021E7132\n    lsl r0, r5, #5\n    add r4, r7, r0\n    add r0, r5, #0\n    add r0, #0x1d\n    str r0, [r4, #8]\n    mov r0, #1\n    str r0, [r4, #0xc]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov14_021E6B48\n    add r5, r5, #1\n    add r4, #0x20\n    cmp r5, #6\n    blo _021E7118\n    ldr r0, [sp]\n    lsl r1, r0, #5\n    mov r0, #0x23\n    add r1, r7, r1\n    str r0, [r1, #8]\n    mov r0, #1\n    str r0, [r1, #0xc]\n    add r0, r6, #0\n    bl ov14_021E6B48\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E7148(void) {
    /* Original at 0x021E7148 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    ldr r7, _021E71C0 ; =0x00004094\n    add r5, r0, #0\n    mov r2, #0\n    add r3, r4, #0\n    add r6, sp, #0\n    ldr r0, [r3, #0xc]\n    cmp r0, #0\n    beq _021E7168\n    ldr r1, [r5, #0x34]\n    ldr r0, [r3, #4]\n    add r0, r1, r0\n    ldrb r0, [r0, r7]\n    strb r0, [r6]\n    add r2, r2, #1\n    add r3, #0x20\n    add r6, r6, #1\n    cmp r2, #7\n    blo _021E7158\n    mov r7, #0\n    add r6, sp, #0\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _021E71B2\n    ldr r1, [r4, #8]\n    mov r0, #0x80\n    tst r0, r1\n    bne _021E719A\n    ldr r2, [r5, #0x34]\n    ldrb r0, [r6]\n    add r2, r2, r1\n    ldr r1, _021E71C0 ; =0x00004094\n    strb r0, [r2, r1]\n    ldr r0, [r5, #0x34]\n    ldr r1, [r4, #8]\n    mov r2, #1\n    bl ov14_021F3190\n    b _021E71B2\n    ldr r0, [r4, #4]\n    cmp r0, #0x1e\n    blo _021E71A8\n    ldrb r2, [r6]\n    ldr r1, [r5, #0x34]\n    ldr r0, _021E71C4 ; =0x000040B7\n    strb r2, [r1, r0]\n    ldr r0, [r5, #0x34]\n    ldr r1, [r4, #4]\n    mov r2, #1\n    bl ov14_021F3190\n    add r7, r7, #1\n    add r4, #0x20\n    add r6, r6, #1\n    cmp r7, #7\n    blo _021E7176\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E71C0: .word 0x00004094\n    _021E71C4: .word 0x000040B7"
    );
    #endif
}

void ov14_021E71C8(void) {
    /* Original at 0x021E71C8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021E71E4 ; =ov14_021F7BC0\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    bne _021E71D6\n    add r0, r2, #0\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #4\n    blo _021E71CC\n    mov r0, #0\n    mvn r0, r0\n    bx lr\n    _021E71E4: .word ov14_021F7BC0"
    );
    #endif
}

void ov14_021E71E8(void) {
    /* Original at 0x021E71E8 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    mov r0, #0xa\n    mov r1, #0xc\n    bl Heap_AllocAtEnd\n    ldr r2, [r4, #0x34]\n    ldr r1, _021E725C ; =0x000088DC\n    str r0, [r2, r1]\n    ldr r0, [r4, #0x34]\n    ldr r6, [r0, r1]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r2, r0, r1\n    ldr r1, _021E7260 ; =0x00004094\n    ldrb r1, [r2, r1]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    str r0, [r6]\n    mov r0, #0\n    strh r0, [r6, #4]\n    strb r0, [r6, #6]\n    add r0, r4, #0\n    ldrb r1, [r4, #0x1f]\n    add r4, #0x21\n    ldrb r2, [r4]\n    bl ov14_021E60C0\n    mov r5, #0\n    add r4, r0, #0\n    sub r7, r5, #1\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x36\n    mov r2, #0\n    bl GetBoxMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ov14_021E71C8\n    cmp r0, r7\n    beq _021E7254\n    ldrb r2, [r6, #6]\n    mov r1, #1\n    lsl r1, r0\n    add r0, r2, #0\n    orr r0, r1\n    strb r0, [r6, #6]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r5, r5, #1\n    cmp r5, #4\n    blo _021E722E\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E725C: .word 0x000088DC\n    _021E7260: .word 0x00004094"
    );
    #endif
}

void ov14_021E7264(void) {
    /* Original at 0x021E7264 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x34]\n    ldr r0, _021E7270 ; =0x000088DC\n    ldr r3, _021E7274 ; =Heap_Free\n    ldr r0, [r1, r0]\n    bx r3\n    nop\n    _021E7270: .word 0x000088DC\n    _021E7274: .word Heap_Free"
    );
    #endif
}

void ov14_021E7278(void) {
    /* Original at 0x021E7278 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r1, [r7, #0x34]\n    ldr r0, _021E7350 ; =0x000088DC\n    ldr r4, [r1, r0]\n    ldr r0, _021E7354 ; =0x00000222\n    ldrh r5, [r4, #4]\n    cmp r5, r0\n    bne _021E728E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x87\n    lsl r0, r0, #2\n    cmp r5, r0\n    bhs _021E72CE\n    add r0, r5, #0\n    mov r1, #0x1e\n    bl _s32_div_f\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0x1e\n    bl _s32_div_f\n    ldrb r0, [r7, #0x1f]\n    add r2, r1, #0\n    cmp r6, r0\n    bne _021E72C2\n    add r0, r7, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r2, r0\n    bne _021E72C2\n    mov r6, #0\n    b _021E72EA\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov14_021E60C0\n    add r6, r0, #0\n    b _021E72EA\n    sub r2, r5, r0\n    add r0, r7, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    sub r0, #0x1e\n    cmp r2, r0\n    bne _021E72E0\n    mov r6, #0\n    b _021E72EA\n    add r0, r7, #0\n    mov r1, #0xff\n    bl ov14_021E60C0\n    add r6, r0, #0\n    cmp r6, #0\n    beq _021E732E\n    add r0, r6, #0\n    mov r1, #0xac\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _021E732E\n    mov r5, #0\n    add r1, r5, #0\n    add r0, r6, #0\n    add r1, #0x36\n    mov r2, #0\n    bl GetBoxMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ov14_021E71C8\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _021E7328\n    mov r1, #1\n    lsl r1, r0\n    mov r0, #0xff\n    ldrb r2, [r4, #6]\n    eor r0, r1\n    and r0, r2\n    strb r0, [r4, #6]\n    add r5, r5, #1\n    cmp r5, #4\n    blo _021E72FE\n    ldrh r0, [r4, #4]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    ldrh r5, [r4, #4]\n    ldr r0, _021E7354 ; =0x00000222\n    cmp r5, r0\n    bne _021E7340\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    add r0, r0, #1\n    str r0, [sp]\n    cmp r0, #0xf\n    blo _021E7292\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7350: .word 0x000088DC\n    _021E7354: .word 0x00000222"
    );
    #endif
}

void ov14_021E7358(void) {
    /* Original at 0x021E7358 */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #0xac\n    mov r2, #0\n    add r7, r0, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _021E7460\n    mov r0, #0xa\n    mov r1, #0x1c\n    bl Heap_Alloc\n    add r6, r0, #0\n    str r7, [r6]\n    add r0, r7, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r6, #4]\n    add r0, r7, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetBoxMonData\n    mov r1, #0\n    strh r0, [r6, #6]\n    add r0, r7, #0\n    add r2, r1, #0\n    bl GetBoxMonData\n    str r0, [r6, #8]\n    add r0, r7, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetBoxMonData\n    strb r0, [r6, #0xc]\n    add r0, r7, #0\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetBoxMonData\n    strb r0, [r6, #0xd]\n    add r0, r7, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetBoxMonData\n    strb r0, [r6, #0xe]\n    add r0, r7, #0\n    bl GetBoxMonNature\n    strb r0, [r6, #0xf]\n    add r0, r7, #0\n    mov r1, #0xb\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r6, #0x10]\n    add r0, r7, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetBoxMonData\n    ldrb r1, [r6, #0x12]\n    mov r2, #0x7f\n    lsl r0, r0, #0x18\n    bic r1, r2\n    lsr r2, r0, #0x18\n    mov r0, #0x7f\n    and r0, r2\n    orr r0, r1\n    strb r0, [r6, #0x12]\n    add r0, r7, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetBoxMonData\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x1f\n    ldrb r1, [r6, #0x12]\n    mov r2, #0x80\n    lsr r0, r0, #0x18\n    bic r1, r2\n    orr r0, r1\n    strb r0, [r6, #0x12]\n    add r0, r7, #0\n    bl GetBoxMonGender\n    add r2, r6, #0\n    ldrb r1, [r6, #0x13]\n    mov r3, #0x7f\n    add r2, #0x13\n    bic r1, r3\n    mov r3, #0x7f\n    and r0, r3\n    orr r0, r1\n    strb r0, [r6, #0x13]\n    ldrh r0, [r6, #4]\n    cmp r0, #0x1d\n    beq _021E743C\n    cmp r0, #0x20\n    beq _021E743C\n    ldrb r0, [r6, #0x12]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _021E743C\n    ldrb r1, [r2]\n    mov r0, #0x80\n    orr r0, r1\n    strb r0, [r2]\n    b _021E7444\n    ldrb r1, [r6, #0x13]\n    mov r0, #0x80\n    bic r1, r0\n    strb r1, [r6, #0x13]\n    mov r4, #0\n    add r5, r6, #0\n    add r1, r4, #0\n    add r0, r7, #0\n    add r1, #0x36\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r5, #0x14]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #4\n    blo _021E7448\n    b _021E7462\n    mov r6, #0\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E7468(void) {
    Heap_Free();
}

void ov14_021E7470(void) {
    /* Original at 0x021E7470 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r1, [sp]\n    bl ov14_021F5404\n    mov r7, #0x2f\n    add r6, r0, #0\n    mov r4, #0\n    lsl r7, r7, #4\n    ldr r2, [r5, #0x34]\n    add r3, r6, r4\n    ldr r0, [r2, r7]\n    add r2, #0x30\n    lsl r3, r3, #4\n    mov r1, #0x10\n    add r2, r2, r3\n    bl sub_02019A60\n    add r4, r4, #1\n    cmp r4, #4\n    blo _021E7482\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88A4\n    ldr r1, [sp]\n    add r0, r5, #0\n    mov r2, #2\n    bl ov14_021F36DC\n    ldr r0, [r5, #0x34]\n    ldr r1, _021E74EC ; =0x000088D0\n    mov r2, #1\n    ldrh r1, [r0, r1]\n    eor r1, r2\n    add r1, r1, #2\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    ldr r1, _021E74EC ; =0x000088D0\n    mov r2, #0\n    ldrh r1, [r0, r1]\n    add r1, r1, #2\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    ldr r1, [sp]\n    bl ov14_021F3D70\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov14_021F5368\n    ldr r1, [sp]\n    add r0, r5, #0\n    ldrh r1, [r1, #0x10]\n    bl ov14_021E895C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E74EC: .word 0x000088D0"
    );
    #endif
}

void ov14_021E74F0(void) {
    /* Original at 0x021E74F0 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    ldrh r1, [r4, #6]\n    add r5, r0, #0\n    cmp r1, #0\n    beq _021E7534\n    bl ov14_021F5564\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r2, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r2, r0]\n    add r2, #0x30\n    lsl r3, r6, #4\n    mov r1, #0x10\n    add r2, r2, r3\n    bl sub_02019A60\n    mov r0, #0x2f\n    add r3, r6, #1\n    ldr r2, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r2, r0]\n    add r2, #0x30\n    lsl r3, r3, #4\n    mov r1, #0x10\n    add r2, r2, r3\n    bl sub_02019A60\n    ldrh r1, [r4, #6]\n    ldr r0, [r5, #0x34]\n    bl ov14_021F38B0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8944\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #2\n    bl ov14_021F36DC\n    ldr r0, [r5, #0x34]\n    ldr r1, _021E7584 ; =0x000088D0\n    mov r2, #1\n    ldrh r1, [r0, r1]\n    eor r1, r2\n    add r1, r1, #2\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    ldr r1, _021E7584 ; =0x000088D0\n    mov r2, #0\n    ldrh r1, [r0, r1]\n    add r1, r1, #2\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    bl ov14_021F3D70\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F5368\n    ldrh r1, [r4, #0x10]\n    add r0, r5, #0\n    bl ov14_021E895C\n    pop {r4, r5, r6, pc}\n    nop\n    _021E7584: .word 0x000088D0"
    );
    #endif
}

void ov14_021E7588(void) {
    /* Original at 0x021E7588 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r2, r1, #0\n    ldrb r1, [r5, #0x1f]\n    bl ov14_021E60C0\n    add r4, r0, #0\n    beq _021E75E6\n    bl AcquireBoxMonLock\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov14_021E7358\n    add r6, r0, #0\n    beq _021E75CA\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021E75BA\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021E74F0\n    b _021E75C2\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021E7470\n    add r0, r6, #0\n    bl ov14_021E7468\n    b _021E75DC\n    add r0, r5, #0\n    bl ov14_021E765C\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ReleaseBoxMonLock\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ReleaseBoxMonLock\n    b _021E75F0\n    add r0, r5, #0\n    bl ov14_021E765C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E75F4(void) {
    /* Original at 0x021E75F4 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r2, r1, #0\n    ldrb r1, [r5, #0x1f]\n    bl ov14_021E60C0\n    add r4, r0, #0\n    bl AcquireBoxMonLock\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov14_021E7358\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #2\n    bl ov14_021F36DC\n    ldr r0, [r5, #0x34]\n    ldr r1, _021E7658 ; =0x000088D0\n    mov r2, #1\n    ldrh r1, [r0, r1]\n    eor r1, r2\n    add r1, r1, #2\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    ldr r1, _021E7658 ; =0x000088D0\n    mov r2, #0\n    ldrh r1, [r0, r1]\n    add r1, r1, #2\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    bl ov14_021F3D70\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021F5368\n    add r0, r6, #0\n    bl ov14_021E7468\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ReleaseBoxMonLock\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E7658: .word 0x000088D0"
    );
    #endif
}

void ov14_021E765C(void) {
    /* Original at 0x021E765C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #2\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #3\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #0xd\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #0xe\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    bl ov14_021F53C0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021E895C\n    ldr r0, [r4]\n    ldr r1, [r4, #0x34]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021E76AC\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8944\n    pop {r4, pc}\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88A4\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E76B8(void) {
    /* Original at 0x021E76B8 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021E765C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    mov r0, #0xff\n    add r4, #0x21\n    strb r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E76D0(void) {
    /* Original at 0x021E76D0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0xa\n    add r4, r3, #0\n    str r0, [sp]\n    mov r0, #0x13\n    add r1, #0x10\n    mov r2, #1\n    add r3, sp, #4\n    bl GfGfxLoader_GetCharData\n    ldr r3, [sp, #4]\n    add r6, r0, #0\n    str r4, [sp]\n    ldr r0, [r5, #0x34]\n    ldr r2, [r3, #0x14]\n    ldr r0, [r0, #0x14]\n    ldr r3, [r3, #0x10]\n    mov r1, #3\n    bl BG_LoadCharTilesData\n    mov r0, #3\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    add r4, #0x15\n    ldr r2, [r1, #0x14]\n    mov r1, #0x2a\n    lsl r1, r1, #4\n    add r1, r2, r1\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #0x15\n    bl ov14_021F5718\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021E7720(void) {
    GfGfxLoader_GXLoadPal(0x13, 0x20, 0xa, 0);
}

void ov14_021E7740(void) {
    /* Original at 0x021E7740 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    str r0, [sp, #0x10]\n    mov r0, #0xa\n    str r2, [sp, #0x14]\n    str r3, [sp, #0x18]\n    str r0, [sp]\n    mov r0, #0x13\n    mov r1, #0xf\n    mov r2, #1\n    add r3, sp, #0x30\n    bl GfGfxLoader_GetScrnData\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #0x24]\n    add r0, #0xc\n    str r0, [sp, #0x24]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x48]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r1, #0x15\n    mul r1, r0\n    ldr r0, [sp, #0x24]\n    lsl r1, r1, #1\n    add r6, r0, r1\n    ldr r0, [sp, #0x20]\n    ldr r4, [sp, #0x14]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    mov r5, #0\n    lsr r7, r0, #0x18\n    lsl r0, r5, #1\n    ldrh r1, [r6, r0]\n    ldr r0, _021E7800 ; =0x00000FFF\n    lsl r3, r4, #0x18\n    and r1, r0\n    ldr r0, [sp, #0x1c]\n    add r2, sp, #0x2c\n    add r1, r0, r1\n    ldr r0, [sp, #0x18]\n    lsr r3, r3, #0x18\n    add r1, r0, r1\n    add r0, sp, #0x2c\n    strh r1, [r0]\n    str r7, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    mov r1, #3\n    ldr r0, [r0, #0x34]\n    ldr r0, [r0, #0x14]\n    bl LoadRectToBgTilemapRect\n    add r4, r4, #1\n    cmp r4, #0x40\n    blo _021E77BC\n    mov r4, #0\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #0x15\n    blo _021E7786\n    ldr r0, [sp, #0x20]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x20]\n    cmp r0, #0x14\n    blo _021E776E\n    ldr r0, [sp, #0x28]\n    bl Heap_Free\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x14\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    lsl r3, r4, #0x18\n    ldr r0, [r0, #0x34]\n    ldr r2, _021E7804 ; =0x00001001\n    ldr r0, [r0, #0x14]\n    mov r1, #3\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _021E7800: .word 0x00000FFF\n    _021E7804: .word 0x00001001"
    );
    #endif
}

void ov14_021E7808(void) {
    /* Original at 0x021E7808 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov14_021E76D0\n    ldr r2, [sp, #0x18]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021E7720\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov14_021E7740\n    ldr r0, [r5, #0x34]\n    mov r1, #3\n    ldr r0, [r0, #0x14]\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E783C(void) {
    /* Original at 0x021E783C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    cmp r2, #0\n    bne _021E785A\n    ldr r4, [r0, #0x34]\n    ldr r2, _021E78A4 ; =0x00000448\n    ldrsb r3, [r4, r2]\n    sub r3, #0x17\n    strb r3, [r4, r2]\n    ldr r4, [r0, #0x34]\n    ldrsb r3, [r4, r2]\n    cmp r3, #0\n    bge _021E7874\n    add r3, #0x40\n    strb r3, [r4, r2]\n    b _021E7874\n    cmp r2, #1\n    bne _021E7874\n    ldr r4, [r0, #0x34]\n    ldr r2, _021E78A4 ; =0x00000448\n    ldrsb r3, [r4, r2]\n    add r3, #0x17\n    strb r3, [r4, r2]\n    ldr r4, [r0, #0x34]\n    ldrsb r3, [r4, r2]\n    cmp r3, #0x40\n    blt _021E7874\n    sub r3, #0x40\n    strb r3, [r4, r2]\n    ldr r6, [r0, #0x34]\n    ldr r2, _021E78A8 ; =0x00000449\n    ldrb r2, [r6, r2]\n    cmp r2, #0\n    bne _021E7886\n    mov r3, #0x97\n    lsl r3, r3, #2\n    mov r5, #0xe\n    b _021E788A\n    mov r3, #0xb8\n    mov r5, #0xf\n    ldr r7, _021E78A8 ; =0x00000449\n    mov r2, #1\n    ldrb r4, [r6, r7]\n    eor r2, r4\n    strb r2, [r6, r7]\n    str r5, [sp]\n    ldr r4, [r0, #0x34]\n    sub r2, r7, #1\n    ldrsb r2, [r4, r2]\n    bl ov14_021E7808\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E78A4: .word 0x00000448\n    _021E78A8: .word 0x00000449"
    );
    #endif
}

void ov14_021E78AC(void) {
    /* Original at 0x021E78AC */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r7, r1, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021E7928 ; =0x00000449\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    bne _021E78C6\n    mov r6, #0x97\n    lsl r6, r6, #2\n    mov r4, #0xe\n    b _021E78CA\n    mov r6, #0xb8\n    mov r4, #0xf\n    ldr r1, _021E7928 ; =0x00000449\n    ldr r3, _021E7928 ; =0x00000449\n    ldrb r2, [r0, r1]\n    mov r1, #1\n    sub r3, r3, #1\n    eor r2, r1\n    ldr r1, _021E7928 ; =0x00000449\n    strb r2, [r0, r1]\n    ldr r2, [r5, #0x34]\n    add r0, r5, #0\n    ldrsb r2, [r2, r3]\n    add r1, r7, #0\n    add r3, r6, #0\n    bl ov14_021E76D0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    lsl r0, r4, #0x14\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x34]\n    add r2, r7, #0\n    ldr r0, [r0, #0x18]\n    mov r1, #0x13\n    add r2, #0x28\n    mov r3, #0xa\n    bl PaletteData_LoadNarc\n    str r4, [sp]\n    ldr r3, [r5, #0x34]\n    ldr r2, _021E792C ; =0x00000448\n    add r0, r5, #0\n    ldrsb r2, [r3, r2]\n    add r1, r7, #0\n    add r3, r6, #0\n    bl ov14_021E7740\n    ldr r0, [r5, #0x34]\n    mov r1, #3\n    ldr r0, [r0, #0x14]\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E7928: .word 0x00000449\n    _021E792C: .word 0x00000448"
    );
    #endif
}

void ov14_021E7930(void) {
    PCStorage_GetBoxWallpaper();
}

void ov14_021E7940(void) {
    /* Original at 0x021E7940 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r3, [r2]\n    cmp r0, r3\n    blt _021E795C\n    ldrb r3, [r2, #1]\n    cmp r0, r3\n    bgt _021E795C\n    ldrb r0, [r2, #2]\n    cmp r1, r0\n    blt _021E795C\n    ldrb r0, [r2, #3]\n    cmp r1, r0\n    bge _021E795C\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov14_021E7960(void) {
    /* Original at 0x021E7960 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _021E79A8 ; =_021F7BBC\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov14_021E7940\n    cmp r0, #1\n    bne _021E79A4\n    cmp r5, #0xc\n    bge _021E7978\n    mov r5, #0\n    b _021E798E\n    cmp r5, #0x9c\n    blt _021E7980\n    mov r5, #5\n    b _021E798E\n    sub r5, #0xc\n    add r0, r5, #0\n    mov r1, #0x18\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    asr r5, r0, #0x10\n    sub r4, #0x28\n    add r0, r4, #0\n    mov r1, #0x18\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    asr r1, r0, #0x10\n    mov r0, #6\n    mul r0, r1\n    add r0, r5, r0\n    pop {r3, r4, r5, pc}\n    mov r0, #0xff\n    pop {r3, r4, r5, pc}\n    _021E79A8: .word _021F7BBC"
    );
    #endif
}

void ov14_021E79AC(void) {
    /* Original at 0x021E79AC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    mov r4, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov14_021E7940\n    cmp r0, #1\n    bne _021E79CA\n    add r4, #0x1e\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blo _021E79B6\n    mov r0, #0xff\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E79D8(void) {
    /* Original at 0x021E79D8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r5, _021E7A04 ; =ov14_021F7BD8\n    add r6, r0, #0\n    add r7, r1, #0\n    mov r4, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov14_021E7940\n    cmp r0, #1\n    bne _021E79F6\n    add r4, #0x80\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blo _021E79E2\n    mov r0, #0xff\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7A04: .word ov14_021F7BD8"
    );
    #endif
}

void ov14_021E7A08(void) {
    /* Original at 0x021E7A08 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r1, #0\n    ldr r1, [r0, #0x34]\n    mov r0, #0xca\n    lsl r0, r0, #2\n    add r5, r2, #0\n    ldr r4, [r1, #0xc]\n    ldr r0, [r1, r0]\n    add r1, sp, #4\n    add r1, #2\n    add r2, sp, #4\n    add r6, r3, #0\n    bl ManagedSprite_GetPositionXY\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #2\n    add r2, sp, #0\n    add r3, r6, #0\n    bl ov14_021F2F88\n    ldr r0, [sp, #0x20]\n    add r1, sp, #0\n    cmp r0, #1\n    bne _021E7A4C\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    add r0, #8\n    strh r0, [r1, #2]\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    add r0, #8\n    b _021E7A52\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    add r0, r0, #4\n    strh r0, [r1]\n    strh r5, [r4]\n    strh r7, [r4, #2]\n    ldr r2, [r4, #0x18]\n    mov r0, #3\n    and r0, r2\n    str r0, [r4, #0x18]\n    str r6, [r4, #4]\n    add r3, sp, #0\n    mov r0, #2\n    mov r2, #6\n    add r1, r4, #0\n    ldrsh r0, [r3, r0]\n    ldrsh r2, [r3, r2]\n    add r1, #0x18\n    cmp r2, r0\n    ldr r5, [r1]\n    ble _021E7A84\n    mov r3, #1\n    bic r5, r3\n    mov r3, #1\n    orr r3, r5\n    str r3, [r1]\n    sub r0, r2, r0\n    b _021E7A8C\n    mov r3, #1\n    bic r5, r3\n    str r5, [r1]\n    sub r0, r0, r2\n    lsl r1, r0, #8\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    str r0, [r4, #0x10]\n    add r3, sp, #0\n    mov r0, #0\n    mov r1, #4\n    ldrsh r0, [r3, r0]\n    ldrsh r1, [r3, r1]\n    cmp r1, r0\n    ldr r5, [r4, #0x18]\n    ble _021E7AB2\n    mov r3, #2\n    orr r3, r5\n    str r3, [r4, #0x18]\n    sub r0, r1, r0\n    b _021E7ABA\n    mov r3, #2\n    bic r5, r3\n    str r5, [r4, #0x18]\n    sub r0, r0, r1\n    lsl r3, r0, #8\n    asr r0, r3, #2\n    lsr r0, r0, #0x1d\n    add r0, r3, r0\n    asr r0, r0, #3\n    str r0, [r4, #0x14]\n    lsl r0, r2, #8\n    str r0, [r4, #8]\n    lsl r0, r1, #8\n    str r0, [r4, #0xc]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E7AD4(void) {
    ov14_021E7A08();
}

void ov14_021E7AE4(void) {
    ov14_021E7A08(0);
}

void ov14_021E7B04(void) {
    /* Original at 0x021E7B04 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r4, [r0, #0xc]\n    ldr r2, [r4, #0x18]\n    lsr r3, r2, #2\n    cmp r3, #8\n    bne _021E7B32\n    cmp r1, #1\n    ldrh r1, [r4]\n    bne _021E7B22\n    ldr r2, [r4, #4]\n    bl ov14_021F396C\n    b _021E7B28\n    ldr r2, [r4, #4]\n    bl ov14_021F39A0\n    ldr r0, [r5, #0x34]\n    bl ov14_021F3B5C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    lsl r0, r2, #0x1f\n    lsr r0, r0, #0x1f\n    ldr r1, [r4, #8]\n    bne _021E7B40\n    ldr r0, [r4, #0x10]\n    add r0, r1, r0\n    b _021E7B44\n    ldr r0, [r4, #0x10]\n    sub r0, r1, r0\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x18]\n    ldr r1, [r4, #0xc]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    bne _021E7B56\n    ldr r0, [r4, #0x14]\n    add r0, r1, r0\n    b _021E7B5A\n    ldr r0, [r4, #0x14]\n    sub r0, r1, r0\n    str r0, [r4, #0xc]\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0xc]\n    lsl r1, r1, #8\n    lsl r2, r2, #8\n    ldr r0, [r5, #0x34]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ov14_021F395C\n    ldr r0, [r5, #0x34]\n    bl ov14_021F3B5C\n    ldr r1, [r4, #0x18]\n    mov r0, #3\n    add r2, r1, #0\n    and r2, r0\n    lsr r0, r1, #2\n    add r0, r0, #1\n    lsl r0, r0, #2\n    orr r0, r2\n    str r0, [r4, #0x18]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E7B8C(void) {
    ov14_021E7B04();
}

void ov14_021E7B98(void) {
    ov14_021E7B04();
}

void ov14_021E7BA4(void) {
    /* Original at 0x021E7BA4 */
    /* Requires manual decompilation - 207 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #2\n    ldr r0, [r0, #0x14]\n    mov r2, #0x11\n    mov r3, #0xa\n    bl sub_0201956C\n    mov r1, #0x2f\n    ldr r2, [r4, #0x34]\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    mov r0, #7\n    str r0, [sp]\n    ldr r0, [r4, #0x34]\n    mov r2, #1\n    ldr r0, [r0, r1]\n    mov r1, #0xd\n    mov r3, #0x20\n    bl sub_020195F4\n    mov r0, #0x12\n    str r0, [sp]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    add r2, r1, #0\n    mov r3, #0xb\n    bl sub_020195F4\n    mov r0, #0x12\n    str r0, [sp]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    mov r2, #0\n    mov r3, #0xb\n    bl sub_020195F4\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xc\n    mov r2, #0\n    mov r3, #0xb\n    bl sub_020195F4\n    ldr r0, [r4, #0x34]\n    bl ov14_021F6244\n    ldr r0, [r4, #0x34]\n    bl ov14_021F62CC\n    ldr r0, [r4, #0x34]\n    bl ov14_021F62E4\n    ldr r0, [r4, #0x34]\n    bl ov14_021F62FC\n    add r0, r4, #0\n    bl ov14_021F6314\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _021E7C62\n    mov r0, #7\n    str r0, [sp]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    add r2, r1, #0\n    mov r3, #0x20\n    bl sub_020195F4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    mov r2, #0xc\n    bl ov14_021E7D8C\n    b _021E7C88\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0x20\n    bl sub_020195F4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    mov r2, #0xb\n    bl ov14_021E7D8C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xd\n    add r2, r1, #0\n    bl ov14_021E7D8C\n    ldr r0, [r4]\n    ldr r1, [r4, #0x34]\n    ldr r0, [r0, #8]\n    cmp r0, #1\n    bhi _021E7CB2\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    mov r2, #9\n    bl ov14_021E7D8C\n    b _021E7CC4\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov14_021E81A8\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63F0\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021E7D06\n    mov r0, #9\n    str r0, [sp]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0x10\n    mov r2, #6\n    mov r3, #0x20\n    bl sub_020195F4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0x10\n    mov r2, #0\n    mov r3, #0x18\n    bl sub_020196E8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0x10\n    mov r2, #0x55\n    bl ov14_021E7D8C\n    b _021E7D3E\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0x10\n    mov r2, #6\n    mov r3, #0xc\n    bl sub_020195F4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0x10\n    mov r2, #0x20\n    mov r3, #0xc\n    bl sub_020196E8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0x10\n    mov r2, #0x56\n    bl ov14_021E7D8C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    mov r2, #0xa\n    bl ov14_021E7D8C\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63C8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8394\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85AC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8600\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E7D7C(void) {
    /* Original at 0x021E7D7C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x2f\n    lsl r1, r1, #4\n    ldr r3, _021E7D88 ; =sub_020195C0\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _021E7D88: .word sub_020195C0"
    );
    #endif
}

void ov14_021E7D8C(void) {
    sub_02019688();
}

void ov14_021E7D9C(void) {
    /* Original at 0x021E7D9C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    bl sub_02019B08\n    lsr r2, r4, #1\n    lsl r1, r2, #1\n    add r1, r2, r1\n    add r1, r1, #2\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    mov r1, #0xb\n    mul r1, r2\n    lsl r1, r1, #1\n    add r1, r0, r1\n    lsl r0, r4, #0x1f\n    lsr r0, r0, #0x1d\n    add r0, r0, #3\n    lsl r0, r0, #0x18\n    ldr r3, [r5, #0x34]\n    ldr r2, _021E7DF4 ; =0x000040C0\n    lsr r0, r0, #0x17\n    ldr r3, [r3, r2]\n    mov r2, #1\n    lsl r2, r4\n    tst r2, r3\n    bne _021E7DE0\n    add r4, #0xb\n    b _021E7DE2\n    add r4, #0x2b\n    lsl r2, r4, #0x10\n    lsr r4, r2, #0x10\n    mov r2, #0xf\n    ldrh r3, [r1, r0]\n    lsl r2, r2, #0xc\n    and r2, r3\n    add r2, r2, r4\n    strh r2, [r1, r0]\n    pop {r3, r4, r5, pc}\n    _021E7DF4: .word 0x000040C0"
    );
    #endif
}

void ov14_021E7DF8(void) {
    ov14_021E7D9C(0);
}

void ov14_021E7E10(void) {
    /* Original at 0x021E7E10 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    ldr r5, [r4, #0x34]\n    ldr r6, _021E7E3C ; =0x000040C0\n    mov r2, #1\n    ldr r3, [r5, r6]\n    lsl r2, r1\n    eor r2, r3\n    str r2, [r5, r6]\n    bl ov14_021E7D9C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    mov r2, #0x15\n    mov r3, #6\n    bl sub_020196E8\n    pop {r4, r5, r6, pc}\n    nop\n    _021E7E3C: .word 0x000040C0"
    );
    #endif
}

void ov14_021E7E40(void) {
    /* Original at 0x021E7E40 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #2\n    mov r2, #0x15\n    mov r3, #0x18\n    add r4, r0, #0\n    bl sub_020196E8\n    mov r0, #0x12\n    mov r2, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #2\n    sub r3, r2, #1\n    bl sub_020198FC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E7E64(void) {
    sub_020198FC(0x12, 2, 0, 1);
}

void ov14_021E7E78(void) {
    sub_020196E8();
}

void ov14_021E7E88(void) {
    sub_020196E8();
}

void ov14_021E7E98(void) {
    /* Original at 0x021E7E98 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x10\n    mov r1, #0x15\n    str r1, [sp]\n    mov r1, #0xb\n    str r1, [sp, #4]\n    mov r1, #0x12\n    str r1, [sp, #8]\n    mov r1, #0x10\n    str r1, [sp, #0xc]\n    ldr r0, [r0, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x14]\n    mov r2, #0\n    mov r3, #2\n    bl FillBgTilemapRect\n    add sp, #0x10\n    pop {r3, pc}"
    );
    #endif
}

void ov14_021E7EC0(void) {
    sub_020196E8();
}

void ov14_021E7ED0(void) {
    sub_020196E8();
}

void ov14_021E7EE0(void) {
    /* Original at 0x021E7EE0 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r2, sp, #4\n    mov r1, #1\n    add r2, #1\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_02019B1C\n    add r0, sp, #4\n    mov r2, #0\n    ldrsb r0, [r0, r2]\n    cmp r0, #6\n    beq _021E7F46\n    sub r0, r0, #6\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r1, #1\n    str r0, [sp]\n    add r0, r4, #0\n    sub r3, r1, #2\n    bl sub_020198FC\n    add r5, sp, #4\n    mov r0, #1\n    ldrsb r0, [r5, r0]\n    cmp r0, #2\n    bne _021E7F46\n    mov r3, #0\n    ldrsb r3, [r5, r3]\n    add r0, r4, #0\n    mov r1, #0xa\n    add r3, #0xf\n    lsl r3, r3, #0x18\n    mov r2, #0x18\n    asr r3, r3, #0x18\n    bl sub_020196E8\n    mov r1, #0xa\n    add r3, r1, #0\n    add r0, r5, #0\n    mov r2, #0\n    ldrsb r0, [r0, r2]\n    sub r3, #0xb\n    sub r0, r0, #6\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r4, #0\n    bl sub_020198FC\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E7F4C(void) {
    /* Original at 0x021E7F4C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r2, sp, #4\n    mov r1, #1\n    add r2, #1\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_02019B1C\n    add r0, sp, #4\n    mov r2, #0\n    ldrsb r1, [r0, r2]\n    cmp r1, #0x18\n    beq _021E7FB4\n    mov r0, #0x18\n    sub r0, r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r1, #1\n    str r0, [sp]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl sub_020198FC\n    add r5, sp, #4\n    mov r0, #1\n    ldrsb r0, [r5, r0]\n    cmp r0, #2\n    bne _021E7FB4\n    mov r3, #0\n    ldrsb r3, [r5, r3]\n    add r0, r4, #0\n    mov r1, #0xa\n    add r3, #0xf\n    lsl r3, r3, #0x18\n    mov r2, #0x18\n    asr r3, r3, #0x18\n    bl sub_020196E8\n    add r0, r5, #0\n    mov r2, #0\n    ldrsb r1, [r0, r2]\n    mov r0, #0x18\n    mov r3, #1\n    sub r0, r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xa\n    bl sub_020198FC\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E7FB8(void) {
    /* Original at 0x021E7FB8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r2, sp, #4\n    mov r1, #1\n    add r2, #1\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_02019B1C\n    add r0, sp, #4\n    mov r2, #0\n    ldrsb r1, [r0, r2]\n    cmp r1, #0x18\n    beq _021E7FE8\n    mov r0, #0x18\n    sub r0, r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r1, #1\n    str r0, [sp]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl sub_020198FC\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E7FEC(void) {
    /* Original at 0x021E7FEC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r2, sp, #4\n    mov r1, #1\n    add r2, #1\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_02019B1C\n    add r0, sp, #4\n    mov r2, #0\n    ldrsb r0, [r0, r2]\n    cmp r0, #6\n    beq _021E801A\n    sub r0, r0, #6\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r1, #1\n    str r0, [sp]\n    add r0, r4, #0\n    sub r3, r1, #2\n    bl sub_020198FC\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E8020(void) {
    /* Original at 0x021E8020 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0x13\n    str r1, [sp]\n    mov r1, #1\n    add r2, r1, #0\n    mov r3, #0\n    add r4, r0, #0\n    bl sub_020198FC\n    mov r0, #0x13\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #1\n    mov r3, #0\n    bl sub_020198FC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E8048(void) {
    sub_020198FC(0x13, 1, 0);
}

void ov14_021E805C(void) {
    /* Original at 0x021E805C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0x13\n    str r1, [sp]\n    mov r1, #1\n    add r4, r0, #0\n    sub r2, r1, #2\n    mov r3, #0\n    bl sub_020198FC\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x2b\n    mov r3, #0x15\n    bl sub_020196E8\n    mov r1, #0xa\n    mov r0, #0x13\n    add r2, r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    sub r2, #0xb\n    mov r3, #0\n    bl sub_020198FC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E8094(void) {
    sub_020198FC(0x13, 1, 0);
}

void ov14_021E80A8(void) {
    /* Original at 0x021E80A8 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r2, sp, #0\n    add r3, sp, #0\n    mov r1, #1\n    add r2, #3\n    add r3, #2\n    bl sub_02019B1C\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl sub_02019978\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    mov r0, #0x2f\n    add r2, sp, #0\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    add r2, #1\n    add r3, sp, #0\n    bl sub_02019B1C\n    add r0, sp, #0\n    mov r1, #3\n    ldrsb r2, [r0, r1]\n    mov r1, #1\n    ldrsb r1, [r0, r1]\n    cmp r2, r1\n    bne _021E8120\n    mov r1, #2\n    ldrsb r2, [r0, r1]\n    mov r1, #0\n    ldrsb r0, [r0, r1]\n    cmp r2, r0\n    beq _021E8126\n    add r0, r5, #0\n    bl ov14_021F32E0\n    cmp r6, #0\n    bne _021E8134\n    cmp r4, #0\n    bne _021E8134\n    add sp, #4\n    mov r0, #0\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021E813C(void) {
    /* Original at 0x021E813C */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r2, sp, #0\n    add r3, sp, #0\n    mov r1, #1\n    add r2, #3\n    add r3, #2\n    bl sub_02019B1C\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl sub_02019978\n    add r4, r0, #0\n    mov r0, #0x2f\n    add r2, sp, #0\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    add r2, #1\n    add r3, sp, #0\n    bl sub_02019B1C\n    add r1, sp, #0\n    mov r0, #3\n    ldrsb r2, [r1, r0]\n    mov r0, #1\n    ldrsb r0, [r1, r0]\n    cmp r2, r0\n    bne _021E8194\n    mov r0, #2\n    ldrsb r2, [r1, r0]\n    mov r0, #0\n    ldrsb r0, [r1, r0]\n    cmp r2, r0\n    beq _021E819A\n    add r0, r5, #0\n    bl ov14_021F32E0\n    cmp r4, #0\n    beq _021E81A2\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E81A8(void) {
    ov14_021E7D8C();
}

void ov14_021E81B4(void) {
    /* Original at 0x021E81B4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r2, #0\n    mov r1, #0xd\n    sub r3, r2, #7\n    add r4, r0, #0\n    bl sub_020196E8\n    mov r0, #7\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #0\n    mov r3, #1\n    bl sub_020198FC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E81D8(void) {
    /* Original at 0x021E81D8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r2, #0\n    mov r1, #0xd\n    add r3, r2, #0\n    add r4, r0, #0\n    bl sub_020196E8\n    mov r0, #7\n    mov r2, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xd\n    sub r3, r2, #1\n    bl sub_020198FC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E81FC(void) {
    /* Original at 0x021E81FC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl ov14_021F5C84\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #8\n    mov r2, #0\n    mov r3, #0x15\n    bl sub_020196E8\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E821C(void) {
    sub_020196E8(0x2f, 8, 0, 0x18);
}

void ov14_021E8234(void) {
    sub_020198FC(3, 8, 0, 1);
}

void ov14_021E8248(void) {
    sub_020198FC(3, 8, 0);
}

void ov14_021E825C(void) {
    /* Original at 0x021E825C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl ov14_021F5E94\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    mov r2, #0xc\n    mov r3, #0x15\n    bl sub_020196E8\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E827C(void) {
    sub_020196E8(0x2f, 9, 0xc, 0x18);
}

void ov14_021E8294(void) {
    sub_020198FC(3, 9, 0, 1);
}

void ov14_021E82A8(void) {
    sub_020198FC(3, 9, 0);
}

void ov14_021E82BC(void) {
    /* Original at 0x021E82BC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl ov14_021F5EB4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    mov r2, #0x18\n    mov r3, #0x15\n    bl sub_020196E8\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E82DC(void) {
    /* Original at 0x021E82DC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl ov14_021F5EC4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    mov r2, #0x18\n    mov r3, #0x15\n    bl sub_020196E8\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E82FC(void) {
    sub_0201980C(0xa);
    sub_020196E8(r4, 0xa, 0x18, 0x18);
}

void ov14_021E8314(void) {
    sub_020198FC(0xa, 3, 0, 1);
}

void ov14_021E8328(void) {
    /* Original at 0x021E8328 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r2, #0x18\n    mov r1, #0xa\n    add r3, r2, #0\n    add r4, r0, #0\n    bl sub_020196E8\n    mov r0, #3\n    mov r2, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xa\n    sub r3, r2, #1\n    bl sub_020198FC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E834C(void) {
    sub_02019B1C(0, 1, 0xb);
}

void ov14_021E8368(void) {
    /* Original at 0x021E8368 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #8\n    bl sub_0201980C\n    add r0, r4, #0\n    mov r1, #9\n    bl sub_0201980C\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0\n    mov r3, #0x18\n    bl sub_020196E8\n    add r0, r4, #0\n    mov r1, #9\n    mov r2, #0xc\n    mov r3, #0x18\n    bl sub_020196E8\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E8394(void) {
    /* Original at 0x021E8394 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r4, #0\n    mov r5, #5\n    mov r7, #0x20\n    lsl r3, r5, #0x18\n    add r0, r6, #0\n    add r1, r4, #3\n    add r2, r7, #0\n    asr r3, r3, #0x18\n    bl sub_020196E8\n    add r4, r4, #1\n    add r5, r5, #3\n    cmp r4, #5\n    blo _021E839E\n    mov r2, #0x18\n    add r0, r6, #0\n    mov r1, #0xb\n    add r3, r2, #0\n    bl sub_020196E8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E83C4(void) {
    /* Original at 0x021E83C4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r4, #0\n    mov r5, #5\n    mov r7, #0x15\n    lsl r3, r5, #0x18\n    add r0, r6, #0\n    add r1, r4, #3\n    add r2, r7, #0\n    asr r3, r3, #0x18\n    bl sub_020196E8\n    add r4, r4, #1\n    add r5, r5, #3\n    cmp r4, #5\n    blo _021E83CE\n    add r0, r6, #0\n    mov r1, #0xb\n    mov r2, #0x18\n    mov r3, #0x15\n    bl sub_020196E8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E83F4(void) {
    /* Original at 0x021E83F4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r4, #0\n    mov r5, #5\n    mov r7, #0x20\n    add r0, r6, #0\n    add r1, r4, #3\n    bl sub_0201980C\n    lsl r3, r5, #0x18\n    add r0, r6, #0\n    add r1, r4, #3\n    add r2, r7, #0\n    asr r3, r3, #0x18\n    bl sub_020196E8\n    add r4, r4, #1\n    add r5, r5, #3\n    cmp r4, #5\n    blo _021E83FE\n    add r0, r6, #0\n    mov r1, #0xb\n    bl sub_0201980C\n    mov r2, #0x18\n    add r0, r6, #0\n    mov r1, #0xb\n    add r3, r2, #0\n    bl sub_020196E8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E8434(void) {
    /* Original at 0x021E8434 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r2, sp, #4\n    mov r1, #3\n    add r2, #1\n    add r3, sp, #4\n    add r5, r0, #0\n    bl sub_02019B1C\n    add r6, sp, #4\n    mov r0, #1\n    ldrsb r0, [r6, r0]\n    cmp r0, #0x15\n    beq _021E849E\n    mov r4, #0\n    mov r7, #1\n    ldrsb r0, [r6, r7]\n    mov r2, #0\n    add r1, r4, #3\n    sub r0, #0x15\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    mvn r2, r2\n    mov r3, #0\n    bl sub_020198FC\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #5\n    blo _021E8454\n    add r2, sp, #4\n    add r0, r5, #0\n    mov r1, #0xb\n    add r2, #1\n    add r3, sp, #4\n    bl sub_02019B1C\n    mov r1, #0xb\n    add r3, r1, #0\n    add r0, sp, #4\n    mov r2, #0\n    ldrsb r0, [r0, r2]\n    sub r3, #0xc\n    sub r0, #0x15\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    bl sub_020198FC\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E84A4(void) {
    /* Original at 0x021E84A4 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r2, sp, #4\n    mov r1, #3\n    add r2, #1\n    add r3, sp, #4\n    add r5, r0, #0\n    bl sub_02019B1C\n    add r6, sp, #4\n    mov r0, #1\n    ldrsb r0, [r6, r0]\n    cmp r0, #0x20\n    beq _021E850E\n    mov r4, #0\n    mov r7, #0x20\n    mov r0, #1\n    ldrsb r0, [r6, r0]\n    add r1, r4, #3\n    mov r2, #1\n    sub r0, r7, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    mov r3, #0\n    bl sub_020198FC\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #5\n    blo _021E84C4\n    add r2, sp, #4\n    add r0, r5, #0\n    mov r1, #0xb\n    add r2, #1\n    add r3, sp, #4\n    bl sub_02019B1C\n    add r0, sp, #4\n    mov r2, #0\n    ldrsb r1, [r0, r2]\n    mov r0, #0x18\n    mov r3, #1\n    sub r0, r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0xb\n    bl sub_020198FC\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E8514(void) {
    /* Original at 0x021E8514 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r6, #0\n    add r5, r0, #0\n    add r4, r6, #0\n    mov r7, #1\n    add r0, r5, #0\n    add r1, r4, #3\n    bl sub_02019978\n    cmp r0, #1\n    bne _021E852C\n    add r6, r7, #0\n    add r4, r4, #1\n    cmp r4, #5\n    blo _021E851E\n    add r0, r5, #0\n    mov r1, #0xb\n    bl sub_02019978\n    cmp r0, #1\n    bne _021E8540\n    mov r6, #1\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E8544(void) {
    sub_02019B1C(0, 1, 3);
}

void ov14_021E8560(void) {
    /* Original at 0x021E8560 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0xc\n    mov r2, #0x20\n    mov r3, #0xe\n    add r4, r0, #0\n    bl sub_020196E8\n    mov r1, #0xc\n    mov r0, #0xb\n    add r2, r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    sub r2, #0xd\n    mov r3, #0\n    bl sub_020198FC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E8588(void) {
    /* Original at 0x021E8588 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0xc\n    mov r2, #0x15\n    mov r3, #0xe\n    add r4, r0, #0\n    bl sub_020196E8\n    mov r0, #0xb\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #1\n    mov r3, #0\n    bl sub_020198FC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E85AC(void) {
    sub_020196E8();
}

void ov14_021E85BC(void) {
    sub_020198FC(0xe, 3, 0);
}

void ov14_021E85D0(void) {
    sub_020198FC(0xe, 3, 0, 1);
}

void ov14_021E85E4(void) {
    sub_02019B1C(0, 1, 0xe);
}

void ov14_021E8600(void) {
    sub_020196E8();
}

void ov14_021E8610(void) {
    sub_020196E8();
}

void ov14_021E8620(void) {
    sub_020198FC(0xf, 3, 0);
}

void ov14_021E8634(void) {
    sub_020198FC(0xf, 3, 0, 1);
}

void ov14_021E8648(void) {
    sub_02019B1C(0, 1, 0xf);
}

void ov14_021E8664(void) {
    /* Original at 0x021E8664 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021E82DC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #8\n    bl sub_0201980C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_0201980C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #8\n    mov r2, #0\n    mov r3, #0x18\n    bl sub_020196E8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    mov r2, #0xc\n    mov r3, #0x18\n    bl sub_020196E8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_020196E8\n    add r0, r4, #0\n    bl ov14_021F57B8\n    add r0, r4, #0\n    bl ov14_021F4720\n    add r0, r4, #0\n    bl ov14_021F4848\n    add r0, r4, #0\n    bl ov14_021F48B4\n    add r0, r4, #0\n    mov r1, #0x30\n    bl ov14_021F47B8\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E86E0(void) {
    /* Original at 0x021E86E0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0\n    add r2, r1, #0\n    sub r3, r1, #6\n    add r4, r0, #0\n    bl sub_020196E8\n    mov r0, #6\n    mov r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #1\n    bl sub_020198FC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E8704(void) {
    sub_020198FC(0, 6);
}

void ov14_021E8718(void) {
    sub_020196E8(0xc, 0x15, 8);
    sub_020196E8(r4, 6, 0x15, 0xe);
    sub_020196E8(r4, 7, 0x15, 0x11);
}

void ov14_021E8740(void) {
    /* Original at 0x021E8740 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021E8664\n    add r0, r4, #0\n    bl ov14_021F6070\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8718\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E875C(void) {
    /* Original at 0x021E875C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r1, #0xc\n    mov r2, #0x20\n    mov r3, #8\n    bl sub_020196E8\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0x20\n    mov r3, #0xe\n    bl sub_020196E8\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0x20\n    mov r3, #0x11\n    bl sub_020196E8\n    mov r1, #0xc\n    mov r0, #0xb\n    add r2, r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    sub r2, #0xd\n    mov r3, #0\n    bl sub_020198FC\n    mov r0, #0xb\n    mov r1, #6\n    str r0, [sp]\n    add r0, r4, #0\n    sub r2, r1, #7\n    mov r3, #0\n    bl sub_020198FC\n    mov r1, #7\n    mov r0, #0xb\n    add r2, r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    sub r2, #8\n    mov r3, #0\n    bl sub_020198FC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E87BC(void) {
    /* Original at 0x021E87BC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0xb\n    str r1, [sp]\n    mov r1, #0xc\n    mov r2, #1\n    mov r3, #0\n    add r4, r0, #0\n    bl sub_020198FC\n    mov r0, #0xb\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #1\n    mov r3, #0\n    bl sub_020198FC\n    mov r0, #0xb\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #1\n    mov r3, #0\n    bl sub_020198FC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021E87F4(void) {
    /* Original at 0x021E87F4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #8\n    bl sub_0201980C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_0201980C\n    add r0, r4, #0\n    bl ov14_021E821C\n    add r0, r4, #0\n    bl ov14_021E827C\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E8824(void) {
    /* Original at 0x021E8824 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021E8848 ; =0x0000044E\n    ldrb r1, [r0, r1]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1d\n    beq _021E8846\n    mov r1, #0xc\n    str r1, [sp]\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #0x10\n    add r2, r1, #0\n    sub r2, #0x11\n    mov r3, #0\n    bl sub_020198FC\n    pop {r3, pc}\n    _021E8848: .word 0x0000044E"
    );
    #endif
}

void ov14_021E884C(void) {
    /* Original at 0x021E884C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021E8870 ; =0x0000044E\n    ldrb r1, [r0, r1]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1d\n    beq _021E886C\n    mov r1, #0xc\n    str r1, [sp]\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #0x10\n    mov r2, #1\n    mov r3, #0\n    bl sub_020198FC\n    pop {r3, pc}\n    nop\n    _021E8870: .word 0x0000044E"
    );
    #endif
}

void ov14_021E8874(void) {
    /* Original at 0x021E8874 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E88A0 ; =0x0000044E\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1d\n    beq _021E889E\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x10\n    bl sub_0201980C\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x10\n    mov r2, #0x14\n    mov r3, #0xc\n    bl sub_020196E8\n    pop {r4, pc}\n    _021E88A0: .word 0x0000044E"
    );
    #endif
}

void ov14_021E88A4(void) {
    sub_0201980C(0x10);
    sub_020196E8(r4, 0x10, 0x20, 0xc);
}

void ov14_021E88BC(void) {
    /* Original at 0x021E88BC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r2, sp, #4\n    mov r1, #0x10\n    add r2, #1\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_02019B1C\n    add r0, sp, #4\n    mov r2, #0\n    ldrsb r1, [r0, r2]\n    cmp r1, #0xf\n    beq _021E88F2\n    mov r0, #0x18\n    sub r1, r0, r1\n    mov r0, #9\n    sub r0, r0, r1\n    lsl r0, r0, #0x18\n    mov r1, #0x10\n    lsr r0, r0, #0x18\n    add r3, r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    sub r3, #0x11\n    bl sub_020198FC\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E88F8(void) {
    /* Original at 0x021E88F8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r2, sp, #4\n    mov r1, #0x10\n    add r2, #1\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_02019B1C\n    add r0, sp, #4\n    mov r2, #0\n    ldrsb r1, [r0, r2]\n    cmp r1, #0x18\n    beq _021E8928\n    mov r0, #0x18\n    sub r0, r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r3, #1\n    bl sub_020198FC\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E892C(void) {
    sub_0201980C(0x10);
    sub_020196E8(r4, 0x10, 0, 0xf);
}

void ov14_021E8944(void) {
    sub_0201980C(0x10);
    sub_020196E8(r4, 0x10, 0, 0x18);
}

void ov14_021E895C(void) {
    /* Original at 0x021E895C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    mov r7, #1\n    add r0, r7, #0\n    lsl r0, r4\n    tst r0, r6\n    beq _021E8976\n    add r0, r4, #0\n    add r0, #0x3a\n    b _021E897A\n    add r0, r4, #0\n    add r0, #0x1a\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    mov r0, #0x12\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x34]\n    add r3, r4, #0\n    add r3, #0xf\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #0x14]\n    mov r1, #5\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #6\n    blo _021E8968\n    ldr r0, [r5, #0x34]\n    mov r1, #5\n    ldr r0, [r0, #0x14]\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E89B8(void) {
    /* Original at 0x021E89B8 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #9\n    mov r1, #0x3c\n    bl Heap_Alloc\n    str r0, [r5, #0x18]\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021E89EE\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    mov r2, #0\n    bl ov14_021E60C0\n    str r0, [r4]\n    mov r0, #2\n    strb r0, [r4, #0x11]\n    mov r0, #0x1e\n    strb r0, [r4, #0x13]\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    b _021E8A06\n    ldr r0, [r5, #8]\n    str r0, [r4]\n    mov r0, #1\n    strb r0, [r4, #0x11]\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    strb r0, [r4, #0x13]\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    sub r0, #0x1e\n    strb r0, [r4, #0x14]\n    ldr r0, [r5, #0x10]\n    str r0, [r4, #4]\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Save_PlayerData_GetProfile\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_0208AD34\n    mov r0, #0\n    strb r0, [r4, #0x12]\n    ldr r1, _021E8A74 ; =ov14_021F7D0C\n    add r0, r4, #0\n    bl sub_02089D40\n    mov r0, #0\n    strb r0, [r4, #0x16]\n    strb r0, [r4, #0x17]\n    strh r0, [r4, #0x18]\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl SaveArray_IsNatDexEnabled\n    str r0, [r4, #0x1c]\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Save_SpecialRibbons_Get\n    str r0, [r4, #0x20]\n    mov r0, #0\n    str r0, [r4, #0x24]\n    str r0, [r4, #0x28]\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_02088288\n    str r0, [r4, #0x2c]\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0208828C\n    str r0, [r4, #0x34]\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #4]\n    mov r2, #9\n    str r0, [r4, #0x30]\n    ldr r0, _021E8A78 ; =gOverlayTemplate_PokemonSummary\n    bl OverlayManager_New\n    str r0, [r5, #0x14]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _021E8A74: .word ov14_021F7D0C\n    _021E8A78: .word gOverlayTemplate_PokemonSummary"
    );
    #endif
}

void ov14_021E8A7C(void) {
    /* Original at 0x021E8A7C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x27\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x18]\n    cmp r1, #0\n    bne _021E8AA8\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldrb r2, [r0, #0x14]\n    cmp r1, #0x1e\n    bhs _021E8AA0\n    add r1, r4, #0\n    add r1, #0x21\n    strb r2, [r1]\n    b _021E8AA8\n    add r1, r4, #0\n    add r2, #0x1e\n    add r1, #0x21\n    strb r2, [r1]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    cmp r1, #0x1e\n    bhs _021E8AC0\n    ldr r0, [r0, #0x38]\n    cmp r0, #1\n    bne _021E8AC0\n    ldrb r1, [r4, #0x1f]\n    ldr r0, [r4, #4]\n    bl PCStorage_SetBoxModified\n    ldr r0, [r4, #0x18]\n    bl Heap_Free\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E8ACC(void) {
    /* Original at 0x021E8ACC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Save_Bag_Get\n    ldr r1, _021E8B10 ; =ov14_021F7D14\n    mov r2, #9\n    bl Bag_CreateView\n    str r0, [r4, #0x18]\n    ldr r1, [r4]\n    mov r2, #1\n    ldr r0, [r1, #4]\n    mov r3, #0\n    str r0, [sp]\n    ldr r0, [r4, #0x18]\n    ldr r1, [r1]\n    bl sub_0207789C\n    ldr r0, _021E8B14 ; =FS_OVERLAY_ID(OVY_15)\n    mov r1, #2\n    bl HandleLoadOverlay\n    ldr r0, _021E8B18 ; =ov15_022008B8\n    ldr r1, [r4, #0x18]\n    mov r2, #9\n    bl OverlayManager_New\n    str r0, [r4, #0x14]\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}\n    _021E8B10: .word ov14_021F7D14\n    _021E8B14: .word FS_OVERLAY_ID(OVY_15)\n    _021E8B18: .word ov15_022008B8"
    );
    #endif
}

void ov14_021E8B1C(void) {
    /* Original at 0x021E8B1C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E8B38 ; =FS_OVERLAY_ID(OVY_15)\n    bl UnloadOverlayByID\n    ldr r0, [r4, #0x18]\n    bl BagView_GetItemId\n    strh r0, [r4, #0x1c]\n    ldr r0, [r4, #0x18]\n    bl Heap_Free\n    mov r0, #0\n    pop {r4, pc}\n    _021E8B38: .word FS_OVERLAY_ID(OVY_15)"
    );
    #endif
}

void ov14_021E8B3C(void) {
    /* Original at 0x021E8B3C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    mov r1, #2\n    str r0, [sp]\n    ldr r0, [r4]\n    mov r2, #0\n    ldr r0, [r0, #4]\n    mov r3, #8\n    str r0, [sp, #4]\n    mov r0, #9\n    bl NamingScreen_CreateArgs\n    str r0, [r4, #0x18]\n    add r1, r4, #0\n    add r1, #0x25\n    ldr r2, [r4, #0x18]\n    ldrb r1, [r1]\n    ldr r0, [r4, #4]\n    ldr r2, [r2, #0x18]\n    bl PCStorage_GetBoxName\n    ldr r0, _021E8B7C ; =gOverlayTemplate_NamingScreen\n    ldr r1, [r4, #0x18]\n    mov r2, #9\n    bl OverlayManager_New\n    str r0, [r4, #0x14]\n    mov r0, #0\n    add sp, #8\n    pop {r4, pc}\n    _021E8B7C: .word gOverlayTemplate_NamingScreen"
    );
    #endif
}

void ov14_021E8B80(void) {
    /* Original at 0x021E8B80 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    ldr r4, [r5, #0x18]\n    add r1, #0x25\n    ldrb r1, [r1]\n    ldr r0, [r5, #4]\n    ldr r2, [r4, #0x18]\n    bl PCStorage_SetBoxName\n    ldr r0, [r4, #0x14]\n    strh r0, [r5, #0x1c]\n    ldr r0, [r5, #0x18]\n    bl NamingScreen_DeleteArgs\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E8BA4(void) {
    /* Original at 0x021E8BA4 */
    /* Requires manual decompilation - 169 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r4, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov14_021E8514\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #8\n    bl sub_02019978\n    add r7, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_02019978\n    str r0, [sp]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    str r0, [sp, #4]\n    ldrh r0, [r4, #0x10]\n    cmp r0, #0\n    beq _021E8BF4\n    cmp r0, #1\n    beq _021E8CCC\n    b _021E8D0C\n    add r0, sp, #0xc\n    add r1, sp, #8\n    bl System_GetTouchHeldCoords\n    cmp r0, #0\n    bne _021E8C86\n    add r0, r5, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    mov r6, #0xff\n    cmp r0, #0\n    beq _021E8C24\n    ldr r1, [r5, #0x34]\n    ldr r2, _021E8D14 ; =0x000040B8\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E79D8\n    add r6, r0, #0\n    cmp r6, #0xff\n    bne _021E8C40\n    ldr r1, [r5, #0x34]\n    ldr r2, _021E8D14 ; =0x000040B8\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E7960\n    add r6, r0, #0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl ov14_021E6CF8\n    add r0, r5, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    mov r0, #0x80\n    tst r0, r6\n    bne _021E8C6E\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    bl ov14_021E70B0\n    add r1, r5, #0\n    add r1, #0x21\n    strb r0, [r1]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    ldr r0, [r5, #0x34]\n    bl ov14_021E8824\n    mov r0, #1\n    strh r0, [r4, #0x10]\n    b _021E8D0C\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    add r2, r0, r1\n    ldr r1, _021E8D18 ; =0x00004094\n    ldrb r1, [r2, r1]\n    ldr r2, [sp, #8]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    lsl r2, r2, #0x10\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #0xc]\n    asr r2, r2, #0x10\n    sub r2, #8\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r0, r5, #0\n    bl ov14_021F4174\n    ldr r2, [sp, #0xc]\n    ldr r1, [r5, #0x34]\n    ldr r0, _021E8D14 ; =0x000040B8\n    str r2, [r1, r0]\n    ldr r2, [sp, #8]\n    ldr r1, [r5, #0x34]\n    add r0, r0, #4\n    str r2, [r1, r0]\n    b _021E8D0C\n    add r0, r5, #0\n    bl ov14_021E65C4\n    cmp r0, #0\n    bne _021E8D0C\n    cmp r6, #0\n    bne _021E8D0C\n    cmp r7, #0\n    bne _021E8D0C\n    ldr r0, [sp]\n    cmp r0, #0\n    bne _021E8D0C\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bne _021E8D0C\n    ldr r1, [r4, #0xc]\n    add r0, r5, #0\n    bl ov14_021E7148\n    add r0, r5, #0\n    bl ov14_021F4174\n    ldr r2, [r5, #0x34]\n    ldr r1, _021E8D1C ; =0x000040C4\n    add r0, r5, #0\n    ldr r1, [r2, r1]\n    bl ov14_021F40E8\n    mov r0, #0\n    add sp, #0x10\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E8D14: .word 0x000040B8\n    _021E8D18: .word 0x00004094\n    _021E8D1C: .word 0x000040C4"
    );
    #endif
}

void ov14_021E8D20(void) {
    /* Original at 0x021E8D20 */
    /* Requires manual decompilation - 306 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r5, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ov14_021E8514\n    add r7, r0, #0\n    ldrh r0, [r5, #0x10]\n    cmp r0, #0\n    bne _021E8D5C\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    add r2, r0, r1\n    ldr r1, _021E8FC0 ; =0x00004094\n    ldrb r1, [r2, r1]\n    add r2, sp, #0\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    bl ManagedSprite_GetPositionXY\n    add r0, r4, #0\n    bl ov14_021E80A8\n    add r6, r0, #0\n    ldrh r0, [r5, #0x10]\n    cmp r0, #5\n    bls _021E8D6C\n    b _021E8FB8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E8D78: ; jump table\n    ldr r0, [r4, #0x34]\n    ldr r1, _021E8FC4 ; =0x0000044A\n    ldrb r2, [r0, r1]\n    cmp r2, #1\n    bne _021E8DA8\n    cmp r6, #0\n    bne _021E8DA8\n    mov r2, #2\n    strb r2, [r0, r1]\n    add r0, r4, #0\n    mov r1, #0x28\n    bl ov14_021F69F0\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov14_021F3488\n    add r0, sp, #8\n    add r1, sp, #4\n    bl System_GetTouchHeldCoords\n    cmp r0, #0\n    bne _021E8EA8\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    add r3, sp, #0\n    add r2, r0, r1\n    ldr r1, _021E8FC0 ; =0x00004094\n    ldrb r1, [r2, r1]\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    bl ManagedSprite_SetPositionXY\n    ldr r1, [r4, #0x34]\n    ldr r0, _021E8FC4 ; =0x0000044A\n    ldr r2, _021E8FC8 ; =0x000040B8\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    bne _021E8DFA\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E7960\n    b _021E8E0E\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    ldr r2, _021E8FCC ; =ov14_021F7BF0\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E79AC\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r2, r0, #0\n    add r0, r4, #0\n    bl ov14_021E6CF8\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov14_021E70B0\n    add r1, r4, #0\n    add r1, #0x21\n    strb r0, [r1]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021E8E44\n    mov r2, #0\n    b _021E8E46\n    mov r2, #1\n    ldr r1, [r4, #0x34]\n    ldr r0, _021E8FD0 ; =0x000040C4\n    str r2, [r1, r0]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    cmp r1, #0x1e\n    bhs _021E8E84\n    add r0, r4, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    bne _021E8E6A\n    mov r0, #3\n    strh r0, [r5, #0x10]\n    b _021E8FB8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7EE0\n    add r0, r4, #0\n    mov r1, #0xff\n    bl ov14_021E7588\n    mov r0, #1\n    strh r0, [r5, #0x10]\n    b _021E8FB8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7FEC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    ldr r0, [r4, #0x34]\n    bl ov14_021E8824\n    mov r0, #1\n    strh r0, [r5, #0x10]\n    b _021E8FB8\n    cmp r7, #0\n    bne _021E8ED8\n    ldr r0, [r4, #0x34]\n    ldr r1, _021E8FC4 ; =0x0000044A\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    bne _021E8ED8\n    ldr r2, [sp, #8]\n    cmp r2, #0x10\n    blo _021E8EC6\n    ldr r1, [sp, #4]\n    cmp r1, #0x30\n    blo _021E8EC6\n    cmp r2, #0x68\n    blo _021E8ED8\n    ldr r1, _021E8FC4 ; =0x0000044A\n    mov r2, #1\n    strb r2, [r0, r1]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7FB8\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    add r2, r0, r1\n    ldr r1, _021E8FC0 ; =0x00004094\n    ldrb r1, [r2, r1]\n    ldr r2, [sp, #4]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    lsl r2, r2, #0x10\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #8]\n    asr r2, r2, #0x10\n    sub r2, #8\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r0, r4, #0\n    bl ov14_021F4174\n    ldr r2, [sp, #8]\n    ldr r1, [r4, #0x34]\n    ldr r0, _021E8FC8 ; =0x000040B8\n    str r2, [r1, r0]\n    ldr r2, [sp, #4]\n    ldr r1, [r4, #0x34]\n    add r0, r0, #4\n    str r2, [r1, r0]\n    b _021E8FB8\n    add r0, r4, #0\n    bl ov14_021E6814\n    cmp r0, #0\n    bne _021E8FB8\n    cmp r7, #0\n    bne _021E8FB8\n    cmp r6, #0\n    bne _021E8FB8\n    ldr r1, [r5, #0xc]\n    add r0, r4, #0\n    bl ov14_021E7148\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021E8F4A\n    add r0, r4, #0\n    mov r1, #0xff\n    add r0, #0x21\n    strb r1, [r0]\n    add r0, r4, #0\n    bl ov14_021F4174\n    ldr r2, [r4, #0x34]\n    ldr r1, _021E8FD0 ; =0x000040C4\n    add r0, r4, #0\n    ldr r1, [r2, r1]\n    bl ov14_021F40E8\n    mov r0, #5\n    strh r0, [r5, #0x10]\n    b _021E8FB8\n    add r0, r4, #0\n    bl ov14_021E66F4\n    cmp r0, #0\n    bne _021E8FB8\n    ldr r1, [r5, #0xc]\n    add r0, r4, #0\n    bl ov14_021E7148\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7EE0\n    add r0, r4, #0\n    mov r1, #0xff\n    bl ov14_021E7588\n    mov r0, #0xff\n    add r4, #0x21\n    strb r0, [r4]\n    ldrh r0, [r5, #0x10]\n    add r0, r0, #1\n    strh r0, [r5, #0x10]\n    b _021E8FB8\n    cmp r6, #0\n    bne _021E8FB8\n    mov r0, #5\n    strh r0, [r5, #0x10]\n    b _021E8FB8\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    ldr r2, [r4, #0x34]\n    ldr r1, _021E8FC4 ; =0x0000044A\n    mov r0, #0\n    strb r0, [r2, r1]\n    add sp, #0xc\n    strh r0, [r5, #0x10]\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E8FC0: .word 0x00004094\n    _021E8FC4: .word 0x0000044A\n    _021E8FC8: .word 0x000040B8\n    _021E8FCC: .word ov14_021F7BF0\n    _021E8FD0: .word 0x000040C4"
    );
    #endif
}

void ov14_021E8FD4(void) {
    /* Original at 0x021E8FD4 */
    /* Requires manual decompilation - 202 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r4, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xe\n    bl sub_02019978\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    add r7, r0, #0\n    ldrh r0, [r4, #0x10]\n    cmp r0, #0\n    beq _021E900C\n    cmp r0, #1\n    beq _021E90F8\n    cmp r0, #2\n    bne _021E900A\n    b _021E914E\n    b _021E9180\n    add r0, sp, #4\n    add r1, sp, #0\n    bl System_GetTouchHeldCoords\n    cmp r0, #0\n    bne _021E90B2\n    add r0, r5, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    mov r6, #0xff\n    cmp r0, #0\n    beq _021E903C\n    ldr r1, [r5, #0x34]\n    ldr r2, _021E9188 ; =0x000040B8\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E79D8\n    add r6, r0, #0\n    cmp r6, #0xff\n    bne _021E9058\n    ldr r1, [r5, #0x34]\n    ldr r2, _021E9188 ; =0x000040B8\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E7960\n    add r6, r0, #0\n    cmp r6, #0xff\n    bne _021E9076\n    ldr r1, [r5, #0x34]\n    ldr r2, _021E9188 ; =0x000040B8\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    ldr r2, _021E918C ; =ov14_021F7C08\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E79AC\n    add r6, r0, #0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl ov14_021E6CF8\n    add r0, r5, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    mov r0, #0x80\n    tst r0, r6\n    bne _021E90A4\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    bl ov14_021E70B0\n    add r1, r5, #0\n    add r1, #0x21\n    strb r0, [r1]\n    ldr r0, [r5, #0x34]\n    bl ov14_021E884C\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021E9180\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    add r2, r0, r1\n    ldr r1, _021E9190 ; =0x00004094\n    ldrb r1, [r2, r1]\n    ldr r2, [sp]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    lsl r2, r2, #0x10\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #4]\n    asr r2, r2, #0x10\n    sub r2, #8\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r0, r5, #0\n    bl ov14_021F4174\n    ldr r2, [sp, #4]\n    ldr r1, [r5, #0x34]\n    ldr r0, _021E9188 ; =0x000040B8\n    str r2, [r1, r0]\n    ldr r2, [sp]\n    ldr r1, [r5, #0x34]\n    add r0, r0, #4\n    str r2, [r1, r0]\n    b _021E9180\n    cmp r6, #0\n    bne _021E914E\n    cmp r7, #0\n    bne _021E914E\n    ldr r6, [r4, #0xc]\n    add r0, r6, #0\n    add r0, #0xe8\n    ldr r1, [r0]\n    cmp r1, #0xff\n    beq _021E913C\n    mov r0, #0x80\n    tst r0, r1\n    beq _021E913C\n    add r0, r6, #0\n    add r0, #0xe4\n    ldr r0, [r0]\n    cmp r0, #0x1e\n    blo _021E9148\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    add r6, #0xe4\n    ldr r1, [r6]\n    sub r0, r0, #1\n    sub r1, #0x1e\n    cmp r1, r0\n    bhs _021E9148\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8620\n    b _021E9148\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8620\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    add r0, r5, #0\n    bl ov14_021E65C4\n    cmp r0, #0\n    bne _021E9180\n    cmp r7, #0\n    bne _021E9180\n    ldrh r0, [r4, #0x10]\n    cmp r0, #2\n    bne _021E9180\n    ldr r1, [r4, #0xc]\n    add r0, r5, #0\n    bl ov14_021E7148\n    add r0, r5, #0\n    bl ov14_021F4174\n    add r0, r5, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    mov r0, #0\n    add sp, #8\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9188: .word 0x000040B8\n    _021E918C: .word ov14_021F7C08\n    _021E9190: .word 0x00004094"
    );
    #endif
}

void ov14_021E9194(void) {
    /* Original at 0x021E9194 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r4, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    ldrh r0, [r4, #0x10]\n    cmp r0, #0\n    beq _021E91B2\n    cmp r0, #1\n    beq _021E91C4\n    b _021E91DC\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    bl ov14_021E70E0\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    add r0, r5, #0\n    bl ov14_021E65C4\n    cmp r0, #0\n    bne _021E91DC\n    ldr r1, [r4, #0xc]\n    add r0, r5, #0\n    bl ov14_021E7148\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E91E0(void) {
    /* Original at 0x021E91E0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r1, [r4, #0x10]\n    cmp r1, #0\n    beq _021E91F2\n    cmp r1, #1\n    beq _021E9218\n    b _021E922E\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    add r2, r0, #0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r2, #0x1e\n    add r0, r5, #0\n    bl ov14_021E6CF8\n    add r0, r5, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021E922E\n    bl ov14_021E65C4\n    cmp r0, #0\n    bne _021E922E\n    ldr r1, [r4, #0xc]\n    add r0, r5, #0\n    bl ov14_021E7148\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E9234(void) {
    /* Original at 0x021E9234 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r1, [r4, #0x10]\n    cmp r1, #0\n    beq _021E9248\n    cmp r1, #1\n    beq _021E927E\n    b _021E92A6\n    ldrb r0, [r5, #0x1f]\n    add r1, sp, #0\n    add r2, sp, #4\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    bl PCStorage_FindFirstEmptySlot\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    bl ov14_021E6CF8\n    add r0, r5, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    mov r0, #0xff\n    add r5, #0x21\n    strb r0, [r5]\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021E92A6\n    bl ov14_021E65C4\n    cmp r0, #0\n    bne _021E92A6\n    ldr r6, [r4, #0xc]\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    mov r2, #1\n    bl ov14_021F34C8\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021E7148\n    mov r0, #0\n    add sp, #8\n    strh r0, [r4, #0x10]\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021E92AC(void) {
    /* Original at 0x021E92AC */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r1, [r5, #0x34]\n    ldrh r0, [r1, #0x12]\n    cmp r0, #0x17\n    bne _021E92D8\n    ldr r0, [r1, #0x2c]\n    bl GridInputHandler_IsButtonInputMode\n    cmp r0, #1\n    bne _021E92CC\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r1, [r5, #0x34]\n    mov r0, #0\n    strh r0, [r1, #0x12]\n    ldr r1, [r5, #0x34]\n    strh r0, [r1, #0x10]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r1, #0x14]\n    mov r1, #3\n    mov r2, #2\n    mov r3, #8\n    bl ScheduleSetBgPosText\n    add r0, r5, #0\n    mov r1, #8\n    bl ov14_021F3210\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xe\n    bl sub_02019978\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #8\n    bl sub_02019978\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_02019978\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xb\n    bl sub_020199E4\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8514\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xb\n    bl sub_020199E4\n    cmp r4, #1\n    bne _021E9362\n    cmp r0, #0\n    bne _021E9362\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r1, [r5, #0x34]\n    ldrh r0, [r1, #0x12]\n    add r0, r0, #1\n    strh r0, [r1, #0x12]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E9370(void) {
    /* Original at 0x021E9370 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r1, [r5, #0x34]\n    ldrh r0, [r1, #0x12]\n    cmp r0, #0x17\n    bne _021E939C\n    ldr r0, [r1, #0x2c]\n    bl GridInputHandler_IsButtonInputMode\n    cmp r0, #1\n    bne _021E9390\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r1, [r5, #0x34]\n    mov r0, #0\n    strh r0, [r1, #0x12]\n    ldr r1, [r5, #0x34]\n    strh r0, [r1, #0x10]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r1, #0x14]\n    mov r1, #3\n    mov r2, #1\n    mov r3, #8\n    bl ScheduleSetBgPosText\n    mov r1, #7\n    add r0, r5, #0\n    mvn r1, r1\n    bl ov14_021F3210\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xe\n    bl sub_02019978\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #8\n    bl sub_02019978\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_02019978\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xb\n    bl sub_020199E4\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8514\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xb\n    bl sub_020199E4\n    cmp r4, #1\n    bne _021E9428\n    cmp r0, #0\n    bne _021E9428\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r1, [r5, #0x34]\n    ldrh r0, [r1, #0x12]\n    add r0, r0, #1\n    strh r0, [r1, #0x12]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E9434(void) {
    ov14_021E8514(0, 0x2f, 1);
}

void ov14_021E9450(void) {
    /* Original at 0x021E9450 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8514\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #8\n    bl sub_02019978\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_02019978\n    add r7, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    cmp r4, #0\n    bne _021E94A4\n    cmp r6, #0\n    bne _021E94A4\n    cmp r7, #0\n    bne _021E94A4\n    cmp r0, #0\n    bne _021E94A4\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E94A8(void) {
    /* Original at 0x021E94A8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x34]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldr r3, _021E94B8 ; =sub_02019978\n    mov r1, #2\n    bx r3\n    nop\n    _021E94B8: .word sub_02019978"
    );
    #endif
}

void ov14_021E94BC(void) {
    /* Original at 0x021E94BC */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #8\n    bl sub_02019978\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_02019978\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    add r7, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xb\n    bl sub_02019978\n    cmp r4, #0\n    bne _021E9512\n    cmp r6, #0\n    bne _021E9512\n    cmp r7, #0\n    bne _021E9512\n    cmp r0, #0\n    bne _021E9512\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021E9518(void) {
    ov14_021E80A8();
}

void ov14_021E952C(void) {
    /* Original at 0x021E952C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021E80A8\n    cmp r0, #0\n    bne _021E953C\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8514\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E954C(void) {
    ov14_021E9518();
}

void ov14_021E9554(void) {
    /* Original at 0x021E9554 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl sub_02019978\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #8\n    bl ov14_021F47B8\n    cmp r4, #0\n    bne _021E958C\n    cmp r6, #0\n    bne _021E958C\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021E9590(void) {
    /* Original at 0x021E9590 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl sub_02019978\n    mov r1, #7\n    add r5, r0, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov14_021F47B8\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E95B4(void) {
    /* Original at 0x021E95B4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x34]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldr r3, _021E95C4 ; =sub_02019978\n    mov r1, #0xa\n    bx r3\n    nop\n    _021E95C4: .word sub_02019978"
    );
    #endif
}

void ov14_021E95C8(void) {
    /* Original at 0x021E95C8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, [r0, #0x34]\n    ldrh r1, [r4, #0x10]\n    cmp r1, #0\n    beq _021E95D8\n    cmp r1, #1\n    beq _021E95E8\n    b _021E95FE\n    bl ov14_021E9434\n    cmp r0, #0\n    bne _021E95FE\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021E95FE\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xc\n    bl sub_02019978\n    cmp r0, #0\n    bne _021E95FE\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E9604(void) {
    /* Original at 0x021E9604 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x34]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldr r3, _021E9614 ; =sub_02019978\n    mov r1, #0xc\n    bx r3\n    nop\n    _021E9614: .word sub_02019978"
    );
    #endif
}

void ov14_021E9618(void) {
    /* Original at 0x021E9618 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xc\n    bl sub_02019978\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #6\n    bl sub_02019978\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #7\n    bl sub_02019978\n    cmp r4, #0\n    bne _021E965A\n    cmp r6, #0\n    bne _021E965A\n    cmp r0, #0\n    bne _021E965A\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021E9660(void) {
    /* Original at 0x021E9660 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r1, [r4, #0x10]\n    cmp r1, #0\n    beq _021E9672\n    cmp r1, #1\n    beq _021E9682\n    b _021E96A2\n    bl ov14_021E9618\n    cmp r0, #0\n    bne _021E96A2\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021E96A2\n    add r0, r4, #0\n    mov r1, #8\n    bl ov14_021F44B4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xd\n    bl sub_02019978\n    cmp r0, #0\n    bne _021E96A2\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E96A8(void) {
    /* Original at 0x021E96A8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #7\n    ldr r0, [r4, #0x34]\n    mvn r1, r1\n    bl ov14_021F44B4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xd\n    bl sub_02019978\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E96C8(void) {
    /* Original at 0x021E96C8 */
    /* Requires manual decompilation - 219 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r6, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl sub_02019B08\n    add r5, r0, #0\n    ldrh r0, [r6, #0x10]\n    cmp r0, #0xa\n    bls _021E96E6\n    b _021E988A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E96F2: ; jump table\n    mov r2, #0x20\n    str r2, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    mov r0, #3\n    str r0, [sp, #0x10]\n    str r2, [sp, #0x14]\n    mov r0, #7\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    mov r3, #9\n    bl CopyToBgTilemapRect\n    b _021E988A\n    mov r2, #0x20\n    str r2, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r2, [sp, #0x14]\n    mov r0, #7\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    mov r3, #8\n    bl CopyToBgTilemapRect\n    mov r2, #0x20\n    str r2, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    mov r0, #6\n    str r0, [sp, #0x10]\n    str r2, [sp, #0x14]\n    mov r0, #7\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    mov r3, #0xa\n    bl CopyToBgTilemapRect\n    b _021E988A\n    mov r2, #0x20\n    str r2, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r2, [sp, #0x14]\n    mov r3, #7\n    str r3, [sp, #0x18]\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    bl CopyToBgTilemapRect\n    mov r2, #0x20\n    str r2, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    mov r0, #5\n    str r0, [sp, #0x10]\n    str r2, [sp, #0x14]\n    mov r0, #7\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    mov r3, #0xa\n    bl CopyToBgTilemapRect\n    b _021E988A\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r1, #0\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    add r3, r1, #0\n    bl FillBgTilemapRect\n    mov r2, #0x20\n    str r2, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r2, [sp, #0x14]\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    mov r3, #6\n    bl CopyToBgTilemapRect\n    b _021E988A\n    mov r2, #0x20\n    str r2, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r2, [sp, #0x14]\n    mov r0, #7\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    mov r3, #5\n    bl CopyToBgTilemapRect\n    mov r2, #0x20\n    str r2, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    mov r0, #5\n    str r0, [sp, #0x10]\n    str r2, [sp, #0x14]\n    mov r0, #7\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    mov r3, #0xc\n    bl CopyToBgTilemapRect\n    b _021E988A\n    mov r2, #0x20\n    str r2, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r2, [sp, #0x14]\n    mov r0, #7\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    mov r3, #4\n    bl CopyToBgTilemapRect\n    mov r2, #0x20\n    str r2, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    mov r0, #5\n    str r0, [sp, #0x10]\n    str r2, [sp, #0x14]\n    mov r0, #7\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    mov r3, #0xd\n    bl CopyToBgTilemapRect\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x14]\n    bl ScheduleBgTilemapBufferTransfer\n    ldrh r0, [r6, #0x10]\n    cmp r0, #0xa\n    bne _021E98A2\n    mov r0, #0\n    add sp, #0x1c\n    strh r0, [r6, #0x10]\n    pop {r3, r4, r5, r6, pc}\n    add r0, r0, #1\n    strh r0, [r6, #0x10]\n    mov r0, #1\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021E98AC(void) {
    /* Original at 0x021E98AC */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    mov r1, #0\n    ldrh r0, [r4, #0x10]\n    add r2, r1, #0\n    add r3, r1, #0\n    add r0, r0, #6\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x14]\n    bl FillBgTilemapRect\n    ldrh r1, [r4, #0x10]\n    mov r0, #0xc\n    sub r0, r0, r1\n    mov r1, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x34]\n    add r2, r1, #0\n    ldr r0, [r0, #0x14]\n    add r3, r1, #0\n    bl FillBgTilemapRect\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x14]\n    bl ScheduleBgTilemapBufferTransfer\n    ldrh r0, [r4, #0x10]\n    cmp r0, #3\n    bne _021E9914\n    mov r0, #0\n    add sp, #0x10\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E9920(void) {
    /* Original at 0x021E9920 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r0, [r4, #0x10]\n    cmp r0, #0\n    beq _021E9932\n    cmp r0, #1\n    beq _021E9956\n    b _021E996C\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    cmp r0, #0\n    bne _021E996C\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85BC\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021E996C\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xe\n    bl sub_02019978\n    cmp r0, #0\n    bne _021E996C\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E9970(void) {
    /* Original at 0x021E9970 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    cmp r0, #0\n    bne _021E999C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xe\n    bl sub_02019978\n    cmp r0, #0\n    bne _021E999C\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021E99A0(void) {
    /* Original at 0x021E99A0 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r0, [r4, #0x10]\n    cmp r0, #0\n    beq _021E99B2\n    cmp r0, #1\n    beq _021E99D6\n    b _021E99EC\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xe\n    bl sub_02019978\n    cmp r0, #0\n    bne _021E99EC\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8620\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021E99EC\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    cmp r0, #0\n    bne _021E99EC\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E99F0(void) {
    /* Original at 0x021E99F0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xc\n    bl sub_02019978\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    cmp r4, #0\n    bne _021E9A1E\n    cmp r0, #0\n    bne _021E9A1E\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021E9A24(void) {
    /* Original at 0x021E9A24 */
    /* Requires manual decompilation - 268 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r5, [r4, #0x34]\n    ldrh r0, [r5, #0x10]\n    cmp r0, #1\n    bhi _021E9A52\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    add r2, sp, #4\n    add r1, r5, r0\n    ldr r0, _021E9C78 ; =0x00004094\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #4\n    add r1, #2\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8514\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov14_021E813C\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    str r0, [sp]\n    ldrh r0, [r5, #0x10]\n    cmp r0, #7\n    bls _021E9A80\n    b _021E9C70\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E9A8C: ; jump table\n    mov r0, #1\n    strh r0, [r5, #0x10]\n    ldr r0, [r4, #0x34]\n    ldr r1, _021E9C7C ; =0x0000044A\n    ldrb r2, [r0, r1]\n    cmp r2, #1\n    bne _021E9ABA\n    cmp r6, #0\n    bne _021E9ABA\n    mov r2, #2\n    strb r2, [r0, r1]\n    add r0, r4, #0\n    mov r1, #0x28\n    bl ov14_021F69F0\n    add r0, sp, #0xc\n    add r1, sp, #8\n    bl System_GetTouchHeldCoords\n    cmp r0, #0\n    ldr r0, [r4, #0x34]\n    bne _021E9B68\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r3, sp, #4\n    add r2, r0, r1\n    ldr r1, _021E9C78 ; =0x00004094\n    ldrb r1, [r2, r1]\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    bl ManagedSprite_SetPositionXY\n    ldr r1, [r4, #0x34]\n    ldr r0, _021E9C7C ; =0x0000044A\n    mov r2, #0xff\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    bne _021E9B0E\n    ldr r2, _021E9C80 ; =0x000040B8\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E7960\n    add r2, r0, #0\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov14_021E6F3C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov14_021E70B0\n    add r1, r4, #0\n    add r1, #0x21\n    strb r0, [r1]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021E9B44\n    mov r0, #5\n    strh r0, [r5, #0x10]\n    b _021E9C70\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7FEC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    ldr r0, [r4, #0x34]\n    bl ov14_021E8824\n    mov r0, #2\n    strh r0, [r5, #0x10]\n    b _021E9C70\n    ldr r1, _021E9C7C ; =0x0000044A\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    bne _021E9B9C\n    cmp r7, #0\n    bne _021E9B9C\n    ldr r1, [sp]\n    cmp r1, #0\n    bne _021E9B9C\n    ldr r2, [sp, #0xc]\n    cmp r2, #0x10\n    blo _021E9B8A\n    ldr r1, [sp, #8]\n    cmp r1, #0x30\n    blo _021E9B8A\n    cmp r2, #0x68\n    blo _021E9B9C\n    ldr r1, _021E9C7C ; =0x0000044A\n    mov r2, #1\n    strb r2, [r0, r1]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7FB8\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    add r2, r0, r1\n    ldr r1, _021E9C78 ; =0x00004094\n    ldrb r1, [r2, r1]\n    ldr r2, [sp, #8]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    lsl r2, r2, #0x10\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #0xc]\n    asr r2, r2, #0x10\n    sub r2, #8\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r0, r4, #0\n    bl ov14_021F4174\n    ldr r2, [sp, #0xc]\n    ldr r1, [r4, #0x34]\n    ldr r0, _021E9C80 ; =0x000040B8\n    str r2, [r1, r0]\n    ldr r2, [sp, #8]\n    ldr r1, [r4, #0x34]\n    add r0, r0, #4\n    str r2, [r1, r0]\n    b _021E9C70\n    add r0, r4, #0\n    bl ov14_021E65C4\n    cmp r0, #0\n    bne _021E9C70\n    cmp r6, #0\n    bne _021E9C70\n    cmp r7, #0\n    bne _021E9C70\n    ldr r1, [r5, #0xc]\n    add r0, r4, #0\n    bl ov14_021E7148\n    add r0, r4, #0\n    bl ov14_021F4174\n    ldr r2, [r4, #0x34]\n    ldr r1, _021E9C84 ; =0x000040C4\n    add r0, r4, #0\n    ldr r1, [r2, r1]\n    bl ov14_021F40E8\n    mov r0, #7\n    strh r0, [r5, #0x10]\n    b _021E9C70\n    add r0, r4, #0\n    bl ov14_021E66F4\n    cmp r0, #0\n    bne _021E9C70\n    ldr r1, [r5, #0xc]\n    add r0, r4, #0\n    bl ov14_021E7148\n    add r0, r4, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7EE0\n    mov r0, #0xff\n    add r4, #0x21\n    strb r0, [r4]\n    mov r0, #6\n    strh r0, [r5, #0x10]\n    b _021E9C70\n    cmp r6, #0\n    bne _021E9C70\n    mov r0, #7\n    strh r0, [r5, #0x10]\n    b _021E9C70\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov14_021F3488\n    ldr r2, [r4, #0x34]\n    ldr r1, _021E9C7C ; =0x0000044A\n    mov r0, #0\n    strb r0, [r2, r1]\n    add sp, #0x10\n    strh r0, [r5, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9C78: .word 0x00004094\n    _021E9C7C: .word 0x0000044A\n    _021E9C80: .word 0x000040B8\n    _021E9C84: .word 0x000040C4"
    );
    #endif
}

void ov14_021E9C88(void) {
    /* Original at 0x021E9C88 */
    /* Requires manual decompilation - 291 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r5, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ov14_021E8514\n    str r0, [sp]\n    add r0, r4, #0\n    bl ov14_021E80A8\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    add r7, r0, #0\n    ldrh r0, [r5, #0x10]\n    cmp r0, #8\n    bls _021E9CBC\n    b _021E9F04\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E9CC8: ; jump table\n    mov r0, #1\n    strh r0, [r5, #0x10]\n    ldr r0, [r4, #0x34]\n    ldr r1, _021E9F0C ; =0x0000044A\n    ldrb r2, [r0, r1]\n    cmp r2, #1\n    bne _021E9CF8\n    cmp r6, #0\n    bne _021E9CF8\n    mov r2, #2\n    strb r2, [r0, r1]\n    add r0, r4, #0\n    mov r1, #0x28\n    bl ov14_021F69F0\n    add r0, sp, #0xc\n    add r1, sp, #8\n    bl System_GetTouchHeldCoords\n    cmp r0, #0\n    ldr r0, _021E9F0C ; =0x0000044A\n    bne _021E9D78\n    ldr r1, [r4, #0x34]\n    mov r2, #0xff\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    bne _021E9D28\n    ldr r2, _021E9F10 ; =0x000040B8\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    ldr r2, _021E9F14 ; =ov14_021F7C08\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E79AC\n    add r2, r0, #0\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov14_021E7034\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov14_021E70B0\n    add r1, r4, #0\n    add r1, #0x21\n    strb r0, [r1]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    blo _021E9D5E\n    mov r0, #5\n    strh r0, [r5, #0x10]\n    b _021E9F04\n    ldr r1, [r4, #0x34]\n    ldr r0, _021E9F0C ; =0x0000044A\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _021E9D72\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7F4C\n    mov r0, #2\n    strh r0, [r5, #0x10]\n    b _021E9F04\n    ldr r1, [r4, #0x34]\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _021E9DEA\n    ldr r0, [sp]\n    cmp r0, #0\n    bne _021E9DEA\n    cmp r7, #0\n    bne _021E9DEA\n    add r0, r4, #0\n    add r3, r4, #0\n    add r0, #0x21\n    add r3, #0x22\n    add r1, sp, #4\n    ldrb r0, [r0]\n    ldrb r3, [r3]\n    add r1, #2\n    add r2, sp, #4\n    bl ov14_021F2F88\n    add r1, sp, #4\n    mov r0, #2\n    ldrsh r3, [r1, r0]\n    ldr r2, [sp, #0xc]\n    add r0, r3, #0\n    sub r0, #0x10\n    cmp r2, r0\n    blo _021E9DCA\n    add r3, #0x10\n    cmp r2, r3\n    bhs _021E9DCA\n    mov r0, #0\n    ldrsh r2, [r1, r0]\n    ldr r1, [sp, #8]\n    add r0, r2, #0\n    sub r0, #0x10\n    cmp r1, r0\n    blo _021E9DCA\n    add r2, #0x10\n    cmp r1, r2\n    blo _021E9DEA\n    ldr r1, [r4, #0x34]\n    ldr r0, _021E9F0C ; =0x0000044A\n    mov r2, #1\n    strb r2, [r1, r0]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7ED0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7EE0\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    add r2, r0, r1\n    ldr r1, _021E9F18 ; =0x00004094\n    ldrb r1, [r2, r1]\n    ldr r2, [sp, #8]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    lsl r2, r2, #0x10\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #0xc]\n    asr r2, r2, #0x10\n    sub r2, #8\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r0, r4, #0\n    bl ov14_021F4174\n    ldr r2, [sp, #0xc]\n    ldr r1, [r4, #0x34]\n    ldr r0, _021E9F10 ; =0x000040B8\n    str r2, [r1, r0]\n    ldr r2, [sp, #8]\n    ldr r1, [r4, #0x34]\n    add r0, r0, #4\n    str r2, [r1, r0]\n    b _021E9F04\n    cmp r6, #0\n    bne _021E9E4A\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    ldr r0, [r4, #0x34]\n    bl ov14_021E8824\n    mov r0, #3\n    strh r0, [r5, #0x10]\n    add r0, r4, #0\n    bl ov14_021E65C4\n    cmp r0, #0\n    bne _021E9E80\n    ldrh r0, [r5, #0x10]\n    cmp r0, #4\n    bne _021E9E80\n    ldr r0, [sp]\n    cmp r0, #0\n    bne _021E9E80\n    ldr r1, [r5, #0xc]\n    add r0, r4, #0\n    bl ov14_021E7148\n    add r0, r4, #0\n    bl ov14_021F4174\n    ldr r2, [r4, #0x34]\n    ldr r1, _021E9F1C ; =0x000040C4\n    add r0, r4, #0\n    ldr r1, [r2, r1]\n    bl ov14_021F40E8\n    mov r0, #8\n    strh r0, [r5, #0x10]\n    b _021E9F04\n    ldrh r0, [r5, #0x10]\n    cmp r0, #3\n    bne _021E9F04\n    mov r0, #4\n    strh r0, [r5, #0x10]\n    b _021E9F04\n    add r0, r4, #0\n    bl ov14_021E65C4\n    cmp r0, #0\n    bne _021E9F04\n    ldr r1, [r5, #0xc]\n    add r0, r4, #0\n    bl ov14_021E7148\n    add r0, r4, #0\n    mov r1, #0xff\n    add r0, #0x21\n    strb r1, [r0]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7F4C\n    ldrh r0, [r5, #0x10]\n    add r0, r0, #1\n    strh r0, [r5, #0x10]\n    b _021E9F04\n    cmp r6, #0\n    bne _021E9F04\n    add r0, r4, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldrh r0, [r5, #0x10]\n    add r0, r0, #1\n    strh r0, [r5, #0x10]\n    b _021E9F04\n    cmp r7, #0\n    bne _021E9F04\n    mov r0, #8\n    strh r0, [r5, #0x10]\n    b _021E9F04\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov14_021F3488\n    ldr r2, [r4, #0x34]\n    ldr r1, _021E9F0C ; =0x0000044A\n    mov r0, #0\n    strb r0, [r2, r1]\n    add sp, #0x10\n    strh r0, [r5, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9F0C: .word 0x0000044A\n    _021E9F10: .word 0x000040B8\n    _021E9F14: .word ov14_021F7C08\n    _021E9F18: .word 0x00004094\n    _021E9F1C: .word 0x000040C4"
    );
    #endif
}

void ov14_021E9F20(void) {
    /* Original at 0x021E9F20 */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r1, [r5, #0x34]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r4, [r1, #0xc]\n    ldr r0, [r1, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    ldr r1, [r4, #4]\n    lsr r2, r1, #2\n    bne _021E9F98\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldrb r1, [r4]\n    ldrb r2, [r4, #1]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x34]\n    ldr r1, _021EA060 ; =0x0000044B\n    ldrb r1, [r0, r1]\n    cmp r1, #1\n    bne _021E9F94\n    ldr r1, [r5]\n    ldr r1, [r1, #8]\n    cmp r1, #3\n    bne _021E9F72\n    ldrb r2, [r4, #1]\n    mov r1, #0xca\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    add r2, #8\n    lsl r2, r2, #0x10\n    ldrb r1, [r4]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    b _021E9F94\n    add r5, #0x21\n    ldrb r1, [r5]\n    add r2, r0, r1\n    ldr r1, _021EA064 ; =0x00004094\n    ldrb r1, [r2, r1]\n    ldrb r2, [r4, #1]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r2, r2, #4\n    lsl r2, r2, #0x10\n    ldrb r1, [r4]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #3\n    and r1, r0\n    sub r0, r2, #1\n    lsl r0, r0, #2\n    orr r0, r1\n    str r0, [r4, #4]\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    ldr r0, [r4, #4]\n    add r1, sp, #0\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bne _021E9FCA\n    mov r0, #2\n    ldrsh r2, [r1, r0]\n    ldrb r0, [r4, #2]\n    add r0, r2, r0\n    b _021E9FD2\n    mov r0, #2\n    ldrsh r2, [r1, r0]\n    ldrb r0, [r4, #2]\n    sub r0, r2, r0\n    strh r0, [r1, #2]\n    ldr r0, [r4, #4]\n    add r1, sp, #0\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    bne _021E9FE8\n    mov r0, #0\n    ldrsh r2, [r1, r0]\n    ldrb r0, [r4, #3]\n    add r0, r2, r0\n    b _021E9FF0\n    mov r0, #0\n    ldrsh r2, [r1, r0]\n    ldrb r0, [r4, #3]\n    sub r0, r2, r0\n    strh r0, [r1]\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r3, sp, #0\n    mov r1, #2\n    mov r2, #0\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x34]\n    ldr r1, _021EA060 ; =0x0000044B\n    ldrb r1, [r0, r1]\n    cmp r1, #1\n    bne _021EA05C\n    ldr r1, [r5]\n    add r3, sp, #0\n    ldr r1, [r1, #8]\n    cmp r1, #3\n    bne _021EA036\n    mov r2, #0\n    mov r1, #0xca\n    ldrsh r2, [r3, r2]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #2\n    add r2, #8\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    b _021EA05C\n    add r5, #0x21\n    ldrb r1, [r5]\n    add r2, r0, r1\n    ldr r1, _021EA064 ; =0x00004094\n    ldrb r1, [r2, r1]\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    add r2, r2, #4\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021EA060: .word 0x0000044B\n    _021EA064: .word 0x00004094"
    );
    #endif
}

void ov14_021EA068(void) {
    /* Original at 0x021EA068 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r5, [r6, #0x34]\n    ldrh r0, [r5, #0x10]\n    cmp r0, #0\n    beq _021EA07A\n    cmp r0, #1\n    beq _021EA092\n    b _021EA0B2\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    cmp r0, #0\n    bne _021EA0B2\n    ldrh r0, [r5, #0x10]\n    add r0, r0, #1\n    strh r0, [r5, #0x10]\n    b _021EA0B2\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ov14_021E8514\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov14_021E9F20\n    cmp r4, #0\n    bne _021EA0B2\n    cmp r0, #0\n    bne _021EA0B2\n    mov r0, #0\n    strh r0, [r5, #0x10]\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021EA0B8(void) {
    /* Original at 0x021EA0B8 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r1, [r4, #0x10]\n    cmp r1, #0\n    beq _021EA0CA\n    cmp r1, #1\n    beq _021EA10A\n    b _021EA12A\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #8\n    bl sub_02019978\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_02019978\n    add r7, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    cmp r6, #0\n    bne _021EA12A\n    cmp r7, #0\n    bne _021EA12A\n    cmp r0, #0\n    bne _021EA12A\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021EA12A\n    bl ov14_021E9F20\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8514\n    cmp r6, #0\n    bne _021EA12A\n    cmp r0, #0\n    bne _021EA12A\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021EA130(void) {
    /* Original at 0x021EA130 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r5, [r6, #0x34]\n    ldrh r0, [r5, #0x10]\n    cmp r0, #0\n    beq _021EA142\n    cmp r0, #1\n    beq _021EA164\n    b _021EA17A\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ov14_021E8514\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov14_021E9F20\n    cmp r4, #0\n    bne _021EA17A\n    cmp r0, #0\n    bne _021EA17A\n    ldrh r0, [r5, #0x10]\n    add r0, r0, #1\n    strh r0, [r5, #0x10]\n    b _021EA17A\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    cmp r0, #0\n    bne _021EA17A\n    mov r0, #0\n    strh r0, [r5, #0x10]\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021EA180(void) {
    /* Original at 0x021EA180 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r1, [r4, #0x10]\n    cmp r1, #0\n    beq _021EA192\n    cmp r1, #1\n    beq _021EA1AE\n    b _021EA1EC\n    bl ov14_021E9F20\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov14_021E9434\n    cmp r6, #0\n    bne _021EA1EC\n    cmp r0, #0\n    bne _021EA1EC\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021EA1EC\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #8\n    bl sub_02019978\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_02019978\n    add r7, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    cmp r6, #0\n    bne _021EA1EC\n    cmp r7, #0\n    bne _021EA1EC\n    cmp r0, #0\n    bne _021EA1EC\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021EA1F0(void) {
    /* Original at 0x021EA1F0 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0xa\n    bl ov14_021F29E4\n    mov r0, #0x32\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    add r3, sp, #0\n    add r2, r0, r1\n    ldr r1, _021EA250 ; =0x00004094\n    ldrb r1, [r2, r1]\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    add r2, r2, #4\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r4, #0x34]\n    add r4, #0x21\n    ldrb r1, [r4]\n    mov r2, #0\n    bl ov14_021F3190\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021EA250: .word 0x00004094"
    );
    #endif
}

void ov14_021EA254(void) {
    /* Original at 0x021EA254 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r4, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    ldrh r0, [r4, #0x10]\n    cmp r0, #3\n    bhi _021EA36E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EA27A: ; jump table\n    mov r1, #9\n    ldr r0, [r5, #0x34]\n    add r2, r1, #0\n    bl ov14_021F29E4\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    ldrh r0, [r4, #0x12]\n    cmp r0, #4\n    bne _021EA2A4\n    mov r0, #0\n    strh r0, [r4, #0x12]\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021EA36E\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x32\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    add r2, r2, #2\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    b _021EA36E\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xa\n    bl ov14_021F29E4\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    ldrh r0, [r4, #0x12]\n    cmp r0, #4\n    bne _021EA2FA\n    mov r0, #0\n    strh r0, [r4, #0x12]\n    add sp, #4\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x32\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    sub r2, r2, #2\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    add r2, r0, r1\n    ldr r1, _021EA374 ; =0x00004094\n    ldrb r1, [r2, r1]\n    add r2, sp, #0\n    lsl r6, r1, #2\n    add r1, r0, r6\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    bl ManagedSprite_GetPositionXY\n    ldr r0, [r5, #0x34]\n    add r3, sp, #0\n    mov r2, #0\n    add r1, r0, r6\n    mov r0, #0xbf\n    ldrsh r2, [r3, r2]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    sub r2, r2, #2\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _021EA374: .word 0x00004094"
    );
    #endif
}

void ov14_021EA378(void) {
    /* Original at 0x021EA378 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r4, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    ldrh r0, [r4, #0x10]\n    cmp r0, #0\n    beq _021EA396\n    cmp r0, #1\n    beq _021EA3DC\n    b _021EA3FE\n    mov r1, #9\n    ldr r0, [r5, #0x34]\n    add r2, r1, #0\n    bl ov14_021F29E4\n    ldr r1, [r5, #0x34]\n    ldr r0, _021EA404 ; =0x0000044C\n    ldrb r6, [r1, r0]\n    cmp r6, #0x25\n    blo _021EA3B0\n    cmp r6, #0x2a\n    bhi _021EA3B0\n    add r6, #0x5b\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl ov14_021E6CF8\n    mov r0, #0x80\n    tst r0, r6\n    bne _021EA3D6\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    bl ov14_021E70B0\n    add r1, r5, #0\n    add r1, #0x21\n    strb r0, [r1]\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    add r0, r5, #0\n    bl ov14_021E65C4\n    cmp r0, #0\n    bne _021EA3FE\n    ldr r1, [r4, #0xc]\n    add r0, r5, #0\n    bl ov14_021E7148\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _021EA404: .word 0x0000044C"
    );
    #endif
}

void ov14_021EA408(void) {
    /* Original at 0x021EA408 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r1, [r4, #0x10]\n    cmp r1, #0\n    beq _021EA41E\n    cmp r1, #1\n    beq _021EA448\n    cmp r1, #2\n    beq _021EA48A\n    b _021EA4C0\n    ldr r0, _021EA4C4 ; =0x000088C8\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021EA442\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F2A18\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #8\n    bl sub_02019978\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_02019978\n    add r7, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    cmp r6, #0\n    bne _021EA4C0\n    cmp r7, #0\n    bne _021EA4C0\n    cmp r0, #0\n    bne _021EA4C0\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021EA4C0\n    bl ov14_021E9F20\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8514\n    cmp r6, #0\n    bne _021EA4C0\n    cmp r0, #0\n    bne _021EA4C0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021EA4C4 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021EA4BA\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    bl ov14_021F3B3C\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EA4C4: .word 0x000088C8"
    );
    #endif
}

void ov14_021EA4C8(void) {
    /* Original at 0x021EA4C8 */
    /* Requires manual decompilation - 180 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r5, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ov14_021E8514\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #8\n    bl sub_02019978\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_02019978\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    ldrh r0, [r5, #0x10]\n    cmp r0, #0xa\n    bls _021EA50E\n    b _021EA664\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EA51A: ; jump table\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EA66C ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021EA55A\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F29E4\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F2A18\n    mov r0, #1\n    strh r0, [r5, #0x10]\n    b _021EA664\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl ov14_021E8434\n    mov r0, #0xa\n    strh r0, [r5, #0x10]\n    b _021EA664\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #1\n    beq _021EA664\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    bl ov14_021F3B3C\n    mov r0, #2\n    strh r0, [r5, #0x10]\n    add r0, sp, #4\n    add r1, sp, #0\n    bl System_GetTouchHeldCoords\n    cmp r0, #0\n    bne _021EA608\n    ldr r1, [r4, #0x34]\n    ldr r2, _021EA670 ; =0x000040B8\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E7960\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r7, r6, #0\n    cmp r6, #0xff\n    bne _021EA5BC\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r6, [r0]\n    b _021EA5D4\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    add r2, r6, #0\n    bl ov14_021E6AA0\n    cmp r0, #0\n    bne _021EA5D4\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r6, [r0]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r6, r0\n    ldr r1, [r4, #0x34]\n    bne _021EA5EC\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    b _021EA5F6\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88F8\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    mov r3, #2\n    bl ov14_021E7AD4\n    mov r0, #3\n    strh r0, [r5, #0x10]\n    b _021EA664\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r4, #0x34]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ov14_021F395C\n    ldr r0, [r4, #0x34]\n    bl ov14_021F3B5C\n    ldr r2, [sp, #4]\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EA670 ; =0x000040B8\n    str r2, [r1, r0]\n    ldr r2, [sp]\n    ldr r1, [r4, #0x34]\n    add r0, r0, #4\n    str r2, [r1, r0]\n    b _021EA664\n    add r0, r4, #0\n    bl ov14_021E7B8C\n    cmp r0, #0\n    bne _021EA664\n    mov r0, #0xa\n    strh r0, [r5, #0x10]\n    b _021EA664\n    cmp r6, #0\n    bne _021EA664\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EA66C ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021EA65C\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    bl ov14_021F3B3C\n    mov r0, #0\n    add sp, #8\n    strh r0, [r5, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EA66C: .word 0x000088C8\n    _021EA670: .word 0x000040B8"
    );
    #endif
}

void ov14_021EA674(void) {
    /* Original at 0x021EA674 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r0, [r4, #0x10]\n    cmp r0, #0\n    beq _021EA68A\n    cmp r0, #1\n    beq _021EA6AA\n    cmp r0, #2\n    beq _021EA6C8\n    b _021EA720\n    ldr r0, _021EA724 ; =0x000088C8\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021EA6A4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    add r0, r5, #0\n    bl ov14_021E9F20\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov14_021E9434\n    cmp r6, #0\n    bne _021EA720\n    cmp r0, #0\n    bne _021EA720\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021EA720\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #8\n    bl sub_02019978\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #9\n    bl sub_02019978\n    add r7, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    cmp r6, #0\n    bne _021EA720\n    cmp r7, #0\n    bne _021EA720\n    cmp r0, #0\n    bne _021EA720\n    ldr r0, [r5, #0x34]\n    ldr r1, _021EA724 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021EA71A\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EA724: .word 0x000088C8"
    );
    #endif
}

void ov14_021EA728(void) {
    /* Original at 0x021EA728 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r1, [r4, #0x10]\n    cmp r1, #0\n    beq _021EA73A\n    cmp r1, #1\n    beq _021EA766\n    b _021EA774\n    add r0, r4, #0\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #1\n    beq _021EA774\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    ldr r0, [r4, #0xc]\n    mov r3, #2\n    ldrh r2, [r0]\n    add r0, r5, #0\n    add r0, #0x21\n    strb r2, [r0]\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov14_021E7AD4\n    mov r0, #1\n    strh r0, [r4, #0x10]\n    b _021EA774\n    bl ov14_021E7B8C\n    cmp r0, #0\n    bne _021EA774\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021EA778(void) {
    /* Original at 0x021EA778 */
    /* Requires manual decompilation - 183 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r5, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0xe\n    bl sub_02019978\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    ldrh r0, [r5, #0x10]\n    cmp r0, #6\n    bhi _021EA7E8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EA7AC: ; jump table\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F29E4\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F2A18\n    mov r0, #1\n    strh r0, [r5, #0x10]\n    b _021EA914\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #0\n    beq _021EA7EA\n    b _021EA914\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    bl ov14_021F3B3C\n    mov r0, #2\n    strh r0, [r5, #0x10]\n    b _021EA914\n    add r0, sp, #4\n    add r1, sp, #0\n    bl System_GetTouchHeldCoords\n    cmp r0, #0\n    bne _021EA87C\n    ldr r1, [r4, #0x34]\n    ldr r2, _021EA91C ; =0x000040B8\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E7960\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    cmp r6, #0xff\n    bne _021EA844\n    ldr r1, [r4, #0x34]\n    ldr r2, _021EA91C ; =0x000040B8\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    ldr r2, _021EA920 ; =ov14_021F7C08\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E79AC\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r7, r6, #0\n    cmp r6, #0xff\n    bne _021EA852\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r6, [r0]\n    b _021EA86A\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    add r2, r6, #0\n    bl ov14_021E6AA0\n    cmp r0, #0\n    bne _021EA86A\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r6, [r0]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    mov r3, #2\n    bl ov14_021E7AD4\n    mov r0, #3\n    strh r0, [r5, #0x10]\n    b _021EA914\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r4, #0x34]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ov14_021F395C\n    ldr r0, [r4, #0x34]\n    bl ov14_021F3B5C\n    ldr r2, [sp, #4]\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EA91C ; =0x000040B8\n    str r2, [r1, r0]\n    ldr r2, [sp]\n    ldr r1, [r4, #0x34]\n    add r0, r0, #4\n    str r2, [r1, r0]\n    b _021EA914\n    add r0, r4, #0\n    bl ov14_021E7B8C\n    cmp r0, #0\n    bne _021EA914\n    ldr r0, _021EA924 ; =0x000005EA\n    bl PlaySE\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8620\n    mov r0, #4\n    strh r0, [r5, #0x10]\n    b _021EA914\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    mov r0, #5\n    strh r0, [r5, #0x10]\n    b _021EA914\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #0\n    bne _021EA914\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    mov r0, #6\n    strh r0, [r5, #0x10]\n    b _021EA914\n    mov r0, #0\n    add sp, #8\n    strh r0, [r5, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EA91C: .word 0x000040B8\n    _021EA920: .word ov14_021F7C08\n    _021EA924: .word 0x000005EA"
    );
    #endif
}

void ov14_021EA928(void) {
    /* Original at 0x021EA928 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r1, [r4, #0x10]\n    cmp r1, #6\n    bhi _021EA9FC\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EA940: ; jump table\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F2A18\n    mov r0, #1\n    strh r0, [r4, #0x10]\n    b _021EA9FC\n    add r0, r4, #0\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #0\n    bne _021EA9FC\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    mov r0, #2\n    strh r0, [r4, #0x10]\n    b _021EA9FC\n    add r1, r5, #0\n    ldr r2, [r4, #0xc]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldrh r2, [r2]\n    add r5, #0x21\n    mov r3, #2\n    strb r2, [r5]\n    add r2, r1, #0\n    bl ov14_021E7AD4\n    mov r0, #3\n    strh r0, [r4, #0x10]\n    b _021EA9FC\n    bl ov14_021E7B8C\n    cmp r0, #0\n    bne _021EA9FC\n    ldr r0, _021EAA00 ; =0x000005EA\n    bl PlaySE\n    mov r0, #4\n    strh r0, [r4, #0x10]\n    b _021EA9FC\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    mov r0, #5\n    strh r0, [r4, #0x10]\n    b _021EA9FC\n    add r0, r4, #0\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #0\n    bne _021EA9FC\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    mov r0, #6\n    strh r0, [r4, #0x10]\n    b _021EA9FC\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021EAA00: .word 0x000005EA"
    );
    #endif
}

void ov14_021EAA04(void) {
    /* Original at 0x021EAA04 */
    /* Requires manual decompilation - 148 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r4, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    ldrh r0, [r4, #0x10]\n    cmp r0, #5\n    bls _021EAA1E\n    b _021EAB4E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EAA2A: ; jump table\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F2A18\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021EAB4E\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #0\n    bne _021EAB4E\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021EAB4E\n    mov r1, #9\n    ldr r0, [r5, #0x34]\n    add r2, r1, #0\n    bl ov14_021F29E4\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    ldrh r0, [r4, #0x12]\n    cmp r0, #4\n    bne _021EAA98\n    mov r0, #0\n    strh r0, [r4, #0x12]\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    b _021EAB4E\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x32\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    add r2, r2, #2\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    b _021EAB4E\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xa\n    bl ov14_021F29E4\n    ldrh r0, [r4, #0x10]\n    add r0, r0, #1\n    strh r0, [r4, #0x10]\n    ldrh r0, [r4, #0x12]\n    cmp r0, #4\n    bne _021EAAEC\n    mov r0, #0\n    strh r0, [r4, #0x12]\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x32\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    sub r2, r2, #2\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0xca\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0xca\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    sub r2, r2, #2\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021EAB54(void) {
    /* Original at 0x021EAB54 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    ldrh r0, [r4, #0x10]\n    cmp r0, #4\n    bhi _021EAC20\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EAB6C: ; jump table\n    mov r1, #9\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov14_021F29E4\n    mov r0, #1\n    strh r0, [r4, #0x10]\n    ldrh r0, [r4, #0x12]\n    cmp r0, #4\n    bne _021EAB94\n    mov r0, #0\n    strh r0, [r4, #0x12]\n    mov r0, #2\n    strh r0, [r4, #0x10]\n    b _021EAC20\n    mov r0, #0xca\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0xca\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    add r2, r2, #2\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldrh r0, [r4, #0x12]\n    add r0, r0, #1\n    strh r0, [r4, #0x12]\n    b _021EAC20\n    add r0, r4, #0\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    mov r0, #3\n    strh r0, [r4, #0x10]\n    b _021EAC20\n    add r0, r4, #0\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #0\n    bne _021EAC20\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #4\n    strh r0, [r4, #0x10]\n    b _021EAC20\n    add r0, r4, #0\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021EAC24(void) {
    /* Original at 0x021EAC24 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r5, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0xf\n    bl sub_02019978\n    ldrh r0, [r5, #0x10]\n    cmp r0, #4\n    bhi _021EACCC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EAC48: ; jump table\n    mov r1, #9\n    ldr r0, [r4, #0x34]\n    add r2, r1, #0\n    bl ov14_021F29E4\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EACD0 ; =0x000088CA\n    add r0, r4, #0\n    ldrh r1, [r2, r1]\n    mov r2, #2\n    bl ov14_021E7AE4\n    mov r0, #1\n    strh r0, [r5, #0x10]\n    b _021EACCC\n    add r0, r4, #0\n    bl ov14_021E7B98\n    cmp r0, #0\n    bne _021EACCC\n    mov r0, #2\n    strh r0, [r5, #0x10]\n    b _021EACCC\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    mov r0, #3\n    strh r0, [r5, #0x10]\n    b _021EACCC\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #0\n    bne _021EACCC\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #4\n    strh r0, [r5, #0x10]\n    b _021EACCC\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    mov r0, #0\n    strh r0, [r5, #0x10]\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021EACD0: .word 0x000088CA"
    );
    #endif
}

void ov14_021EACD4(void) {
    /* Original at 0x021EACD4 */
    /* Requires manual decompilation - 241 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r5, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl ov14_021E8514\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov14_021E80A8\n    add r6, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xa\n    bl sub_02019978\n    ldrh r0, [r5, #0x10]\n    cmp r0, #0xa\n    bhi _021EAD6C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EAD10: ; jump table\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EAEF8 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021EAD50\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F29E4\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F2A18\n    mov r0, #1\n    strh r0, [r5, #0x10]\n    b _021EAEF0\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl ov14_021E8434\n    mov r0, #0xa\n    strh r0, [r5, #0x10]\n    b _021EAEF0\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #1\n    bne _021EAD6E\n    b _021EAEF0\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    bl ov14_021F3B3C\n    mov r0, #2\n    strh r0, [r5, #0x10]\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EAEFC ; =0x0000044A\n    ldrb r2, [r0, r1]\n    cmp r2, #1\n    bne _021EADA4\n    cmp r6, #0\n    bne _021EADA4\n    mov r2, #2\n    strb r2, [r0, r1]\n    add r0, r4, #0\n    mov r1, #0x28\n    bl ov14_021F69F0\n    add r0, r4, #0\n    mov r1, #0x81\n    mov r2, #0\n    bl ov14_021F3488\n    add r0, sp, #4\n    add r1, sp, #0\n    bl System_GetTouchHeldCoords\n    cmp r0, #0\n    bne _021EAE60\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EAEFC ; =0x0000044A\n    ldr r2, _021EAF00 ; =0x000040B8\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    bne _021EADD0\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E7960\n    b _021EADE4\n    ldr r0, [r1, r2]\n    add r2, r2, #4\n    ldr r1, [r1, r2]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    ldr r2, _021EAF04 ; =ov14_021F7BF0\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    bl ov14_021E79AC\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r7, r6, #0\n    cmp r6, #0xff\n    bne _021EADF6\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r6, [r0]\n    b _021EAE0E\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    add r2, r6, #0\n    bl ov14_021E6AA0\n    cmp r0, #0\n    bne _021EAE0E\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r6, [r0]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r6, r0\n    ldr r1, [r4, #0x34]\n    bne _021EAE44\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EAEFC ; =0x0000044A\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    beq _021EAE4E\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl ov14_021E7FEC\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    b _021EAE4E\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88F8\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    mov r3, #1\n    bl ov14_021E7AD4\n    mov r0, #3\n    strh r0, [r5, #0x10]\n    b _021EAEF0\n    cmp r7, #0\n    bne _021EAE90\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EAEFC ; =0x0000044A\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    bne _021EAE90\n    ldr r2, [sp, #4]\n    cmp r2, #0x10\n    blo _021EAE7E\n    ldr r1, [sp]\n    cmp r1, #0x30\n    blo _021EAE7E\n    cmp r2, #0x68\n    blo _021EAE90\n    ldr r1, _021EAEFC ; =0x0000044A\n    mov r2, #1\n    strb r2, [r0, r1]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7FB8\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r4, #0x34]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ov14_021F395C\n    ldr r0, [r4, #0x34]\n    bl ov14_021F3B5C\n    ldr r2, [sp, #4]\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EAF00 ; =0x000040B8\n    str r2, [r1, r0]\n    ldr r2, [sp]\n    ldr r1, [r4, #0x34]\n    add r0, r0, #4\n    str r2, [r1, r0]\n    b _021EAEF0\n    add r0, r4, #0\n    bl ov14_021E7B8C\n    cmp r0, #0\n    bne _021EAEF0\n    mov r0, #0xa\n    strh r0, [r5, #0x10]\n    b _021EAEF0\n    cmp r7, #0\n    bne _021EAEF0\n    cmp r6, #0\n    bne _021EAEF0\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EAEF8 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021EAEE8\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    bl ov14_021F3B3C\n    mov r0, #0\n    add sp, #8\n    strh r0, [r5, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EAEF8: .word 0x000088C8\n    _021EAEFC: .word 0x0000044A\n    _021EAF00: .word 0x000040B8\n    _021EAF04: .word ov14_021F7BF0"
    );
    #endif
}

void ov14_021EAF08(void) {
    /* Original at 0x021EAF08 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x34]\n    bl ov14_021E80A8\n    add r6, r0, #0\n    ldrh r0, [r4, #0x10]\n    cmp r0, #0\n    beq _021EAF20\n    cmp r0, #1\n    beq _021EAF70\n    b _021EAF84\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #0\n    bne _021EAF84\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    ldr r0, [r4, #0xc]\n    mov r3, #1\n    ldrh r2, [r0]\n    add r0, r5, #0\n    add r0, #0x21\n    strb r2, [r0]\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov14_021E7AD4\n    ldr r2, [r5, #0x34]\n    ldr r0, _021EAF88 ; =0x0000044A\n    ldrb r1, [r2, r0]\n    cmp r1, #0\n    beq _021EAF6A\n    mov r1, #0\n    strb r1, [r2, r0]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7FEC\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    mov r0, #1\n    strh r0, [r4, #0x10]\n    b _021EAF84\n    add r0, r5, #0\n    bl ov14_021E7B8C\n    cmp r0, #0\n    bne _021EAF84\n    cmp r6, #0\n    bne _021EAF84\n    mov r0, #0\n    strh r0, [r4, #0x10]\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _021EAF88: .word 0x0000044A"
    );
    #endif
}

void ov14_021EAF8C(void) {
    /* Original at 0x021EAF8C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    lsl r2, r1, #2\n    ldr r1, _021EAFA8 ; =ov14_021F7D9C\n    ldr r1, [r1, r2]\n    blx r1\n    str r0, [r4]\n    cmp r0, #0xb3\n    beq _021EAFA4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _021EAFA8: .word ov14_021F7D9C"
    );
    #endif
}

void ov14_021EAFAC(void) {
    /* Original at 0x021EAFAC */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    mov r0, #0\n    bl GfGfx_EngineASetPlanes\n    mov r0, #0\n    bl GfGfx_EngineBSetPlanes\n    ldr r0, _021EB0C8 ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, _021EB0CC ; =0x04001050\n    strh r1, [r0]\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    ldr r2, _021EB0D0 ; =0x04000304\n    ldr r0, _021EB0D4 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    mov r2, #2\n    mov r0, #3\n    mov r1, #0xa\n    lsl r2, r2, #0x12\n    bl Heap_Create\n    ldr r1, _021EB0D8 ; =0x000088E0\n    mov r0, #0xa\n    bl Heap_Alloc\n    ldr r2, _021EB0D8 ; =0x000088E0\n    mov r1, #0\n    str r0, [r4, #0x34]\n    bl MI_CpuFill8\n    mov r0, #2\n    mov r1, #0xa\n    bl NARC_New\n    mov r1, #0x45\n    ldr r2, [r4, #0x34]\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    mov r0, #0x14\n    mov r1, #0xa\n    bl NARC_New\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EB0DC ; =0x00000454\n    str r0, [r2, r1]\n    bl ov14_021E5A60\n    add r0, r4, #0\n    bl ov14_021E5A70\n    add r0, r4, #0\n    bl ov14_021E5E74\n    add r0, r4, #0\n    bl ov14_021E5C54\n    add r0, r4, #0\n    bl ov14_021E5D78\n    add r0, r4, #0\n    bl ov14_021E5DE0\n    add r0, r4, #0\n    bl ov14_021F4ED0\n    add r0, r4, #0\n    bl ov14_021F297C\n    add r0, r4, #0\n    bl ov14_021F2F20\n    add r0, r4, #0\n    bl ov14_021F2F3C\n    ldrb r1, [r4, #0x1f]\n    add r0, r4, #0\n    bl ov14_021E7930\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #2\n    bl ov14_021E783C\n    add r0, r4, #0\n    bl ov14_021E7BA4\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #1\n    beq _021EB08C\n    cmp r0, #0\n    beq _021EB08C\n    add r0, r4, #0\n    bl ov14_021E81FC\n    add r0, r4, #0\n    bl ov14_021E825C\n    add r0, r4, #0\n    bl ov14_021E82BC\n    add r0, r4, #0\n    bl ov14_021E5ED0\n    add r0, r4, #0\n    bl ov14_021F5620\n    add r0, r4, #0\n    bl ov14_021F566C\n    add r0, r4, #0\n    bl ov14_021F49C8\n    add r0, r4, #0\n    bl ov14_021F6A44\n    ldr r0, _021EB0E0 ; =ov14_021E59AC\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnVBlankQueue\n    ldr r1, [r4, #0x34]\n    str r0, [r1]\n    mov r0, #1\n    bl ov14_021E5EAC\n    ldr r0, [r4, #0x30]\n    pop {r4, pc}\n    _021EB0C8: .word 0x04000050\n    _021EB0CC: .word 0x04001050\n    _021EB0D0: .word 0x04000304\n    _021EB0D4: .word 0xFFFF7FFF\n    _021EB0D8: .word 0x000088E0\n    _021EB0DC: .word 0x00000454\n    _021EB0E0: .word ov14_021E59AC"
    );
    #endif
}

void ov14_021EB0E4(void) {
    /* Original at 0x021EB0E4 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021E6048\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl ov14_021F6B10\n    add r0, r4, #0\n    bl ov14_021E5EE8\n    ldr r0, [r4, #0x34]\n    bl ov14_021E7D7C\n    ldr r0, [r4, #0x34]\n    bl ov14_021F29AC\n    add r0, r4, #0\n    bl ov14_021F4F00\n    add r0, r4, #0\n    bl ov14_021E5DB8\n    add r0, r4, #0\n    bl ov14_021E5E94\n    add r0, r4, #0\n    bl ov14_021E5C00\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EB164 ; =0x00000454\n    ldr r0, [r1, r0]\n    bl NARC_Delete\n    mov r0, #0x45\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl NARC_Delete\n    bl sub_02021238\n    ldr r1, _021EB168 ; =0x04000050\n    mov r0, #0\n    strh r0, [r1]\n    ldr r1, _021EB16C ; =0x04001050\n    strh r0, [r1]\n    bl GfGfx_EngineASetPlanes\n    mov r0, #0\n    bl GfGfx_EngineBSetPlanes\n    ldr r0, [r4, #0x34]\n    bl Heap_Free\n    mov r0, #0xa\n    bl Heap_Destroy\n    ldr r0, [r4, #0x30]\n    pop {r4, pc}\n    nop\n    _021EB164: .word 0x00000454\n    _021EB168: .word 0x04000050\n    _021EB16C: .word 0x04001050"
    );
    #endif
}

void ov14_021EB170(void) {
    IsPaletteFadeFinished(0x11, 2);
}

void ov14_021EB18C(void) {
    PaletteData_GetSelectedBuffersBitmask(3);
}

void ov14_021EB1A4(void) {
    /* Original at 0x021EB1A4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0, #0x34]\n    ldr r1, _021EB1BC ; =0x00000444\n    ldr r2, [r3, r1]\n    cmp r2, #0\n    bne _021EB1B2\n    ldr r0, [r0, #0x30]\n    bx lr\n    sub r0, r2, #1\n    str r0, [r3, r1]\n    mov r0, #4\n    bx lr\n    nop\n    _021EB1BC: .word 0x00000444"
    );
    #endif
}

void ov14_021EB1C0(void) {
    /* Original at 0x021EB1C0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0, #0x34]\n    ldr r1, [r1, #4]\n    cmp r1, #0\n    bne _021EB1D6\n    ldr r1, [r0, #0x30]\n    lsl r2, r1, #2\n    ldr r1, _021EB1DC ; =ov14_021F7D9C\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r3, pc}\n    mov r0, #5\n    pop {r3, pc}\n    nop\n    _021EB1DC: .word ov14_021F7D9C"
    );
    #endif
}

void ov14_021EB1E0(void) {
    /* Original at 0x021EB1E0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _021EB1F6\n    ldr r0, _021EB210 ; =0x000005DD\n    bl PlaySE\n    ldr r0, [r4, #0x30]\n    pop {r4, pc}\n    ldr r0, _021EB214 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _021EB20A\n    ldr r0, _021EB210 ; =0x000005DD\n    bl PlaySE\n    ldr r0, [r4, #0x30]\n    pop {r4, pc}\n    mov r0, #6\n    pop {r4, pc}\n    nop\n    _021EB210: .word 0x000005DD\n    _021EB214: .word gSystem"
    );
    #endif
}

void ov14_021EB218(void) {
    /* Original at 0x021EB218 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EB26C ; =0x00000434\n    ldr r0, [r1, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _021EB230\n    cmp r0, #2\n    beq _021EB24C\n    b _021EB268\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EB26C ; =0x00000434\n    ldr r0, [r1, r0]\n    bl YesNoPrompt_Reset\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EB270 ; =0x00000438\n    add r0, r4, #0\n    ldrh r1, [r2, r1]\n    lsl r2, r1, #3\n    ldr r1, _021EB274 ; =ov14_021F7D74\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r4, pc}\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EB26C ; =0x00000434\n    ldr r0, [r1, r0]\n    bl YesNoPrompt_Reset\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EB270 ; =0x00000438\n    add r0, r4, #0\n    ldrh r1, [r2, r1]\n    lsl r2, r1, #3\n    ldr r1, _021EB278 ; =ov14_021F7D78\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r4, pc}\n    mov r0, #7\n    pop {r4, pc}\n    _021EB26C: .word 0x00000434\n    _021EB270: .word 0x00000438\n    _021EB274: .word ov14_021F7D74\n    _021EB278: .word ov14_021F7D78"
    );
    #endif
}

void ov14_021EB27C(void) {
    ov14_021E5F4C(8);
}

void ov14_021EB290(void) {
    /* Original at 0x021EB290 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r2, [r0, #0x1e]\n    mov r1, #0xc\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _021EB2A4 ; =ov14_021F7D50\n    ldr r1, [r1, r3]\n    blx r1\n    mov r0, #0xa\n    pop {r3, pc}\n    _021EB2A4: .word ov14_021F7D50"
    );
    #endif
}

void ov14_021EB2A8(void) {
    /* Original at 0x021EB2A8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    bl OverlayManager_Run\n    cmp r0, #0\n    bne _021EB2BA\n    mov r0, #0xa\n    pop {r4, pc}\n    ldr r0, [r4, #0x14]\n    bl OverlayManager_Delete\n    ldrb r2, [r4, #0x1e]\n    mov r1, #0xc\n    add r0, r4, #0\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _021EB2E4 ; =ov14_021F7D50 + 4\n    ldr r1, [r1, r3]\n    blx r1\n    ldrb r1, [r4, #0x1e]\n    mov r0, #0xc\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, _021EB2E8 ; =ov14_021F7D50 + 8\n    ldr r0, [r0, r2]\n    str r0, [r4, #0x30]\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021EB2E4: .word ov14_021F7D50 + 4\n    _021EB2E8: .word ov14_021F7D50 + 8"
    );
    #endif
}

void ov14_021EB2EC(void) {
    /* Original at 0x021EB2EC */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _021EB384 ; =0x0000060C\n    bl PlaySE\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bhi _021EB37A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EB30A: ; jump table\n    add r0, r4, #0\n    bl ov14_021F0BF4\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov14_021F43F4\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #0x1e\n    bl ov14_021E7588\n    mov r5, #0x5b\n    b _021EB37A\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021E7588\n    mov r5, #0x51\n    b _021EB37A\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021E7588\n    mov r5, #0xc\n    b _021EB37A\n    add r0, r4, #0\n    mov r1, #0x81\n    mov r2, #1\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021E7588\n    mov r5, #0x75\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F01D8\n    pop {r3, r4, r5, pc}\n    _021EB384: .word 0x0000060C"
    );
    #endif
}

void ov14_021EB388(void) {
    /* Original at 0x021EB388 */
    /* Requires manual decompilation - 424 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov14_021F6A14\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EB490\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EB3F4\n    ldr r0, _021EB6E4 ; =0x000005EB\n    bl PlaySE\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EB6E8 ; =0x000040B8\n    add r0, r2, r1\n    add r1, r1, #4\n    add r1, r2, r1\n    bl System_GetTouchNewCoords\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021EB3D8\n    ldr r1, _021EB6EC ; =ov14_021F7D3C\n    add r0, r4, #0\n    mov r2, #5\n    bl ov14_021F5EE4\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F039C\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021EB470\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r5, [r0]\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r0, [r4, #0x34]\n    bl ov14_021E884C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    ldr r1, _021EB6F0 ; =ov14_021EA180\n    add r0, r4, #0\n    mov r2, #0x4a\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    lsl r1, r5, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r4, #0\n    bl ov14_021E765C\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021F6F94\n    mov r1, #2\n    add r5, r0, #0\n    mvn r1, r1\n    cmp r5, r1\n    bhi _021EB4DC\n    blo _021EB4A4\n    b _021EB684\n    cmp r5, #0x29\n    bhi _021EB4D0\n    sub r0, #0x1e\n    bmi _021EB4DA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EB4B8: ; jump table\n    mov r0, #3\n    mvn r0, r0\n    cmp r5, r0\n    bne _021EB4DA\n    b _021EB714\n    b _021EB750\n    add r0, r1, #1\n    cmp r5, r0\n    bhi _021EB4E8\n    bne _021EB4E6\n    b _021EB6E0\n    b _021EB750\n    add r0, r1, #2\n    cmp r5, r0\n    bne _021EB4F0\n    b _021EB63A\n    b _021EB750\n    ldr r0, _021EB6F4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    bl ov14_021F1128\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6F8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #0x1e\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #0xc\n    bl ov14_021F028C\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6F8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #0x1e\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #0xc\n    bl ov14_021F0314\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6FC ; =0x00000632\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0x95\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6FC ; =0x00000632\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x2a\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x2b\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #9\n    mov r2, #0x96\n    bl ov14_021F2330\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6F4 ; =0x000005DD\n    bl PlaySE\n    bl System_GetTouchNew\n    cmp r0, #0\n    bne _021EB5A2\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x2a\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x2b\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0xb2\n    bl ov14_021F2330\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6F4 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x25\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0x97\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6F4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0x98\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6F4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0x99\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6F4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0x9b\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6F8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r5, [r0]\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0x9c\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    cmp r0, #0x1e\n    bne _021EB66C\n    ldr r0, _021EB700 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0x20\n    tst r0, r1\n    beq _021EB666\n    ldr r0, _021EB6F8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #0xc\n    bl ov14_021F028C\n    pop {r3, r4, r5, pc}\n    mov r0, #0x10\n    tst r0, r1\n    bne _021EB66E\n    b _021EB79E\n    ldr r0, _021EB6F8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #0xc\n    bl ov14_021F0314\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #0x1e\n    bhs _021EB69A\n    add r0, r4, #0\n    bl ov14_021E7588\n    b _021EB6B8\n    cmp r1, #0x24\n    beq _021EB6B8\n    cmp r1, #0x25\n    beq _021EB6B8\n    cmp r1, #0x26\n    beq _021EB6B8\n    cmp r1, #0x27\n    beq _021EB6B8\n    cmp r1, #0x28\n    beq _021EB6B8\n    cmp r1, #0x29\n    beq _021EB6B8\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, _021EB6F8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x4a\n    bl ov14_021F0244\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6F4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E765C\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x93\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EB6F4 ; =0x000005DD\n    b _021EB704\n    _021EB6E4: .word 0x000005EB\n    _021EB6E8: .word 0x000040B8\n    _021EB6EC: .word ov14_021F7D3C\n    _021EB6F0: .word ov14_021EA180\n    _021EB6F4: .word 0x000005DD\n    _021EB6F8: .word 0x000005DC\n    _021EB6FC: .word 0x00000632\n    _021EB700: .word gSystem\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x94\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #0x1e\n    bhs _021EB72A\n    add r0, r4, #0\n    bl ov14_021E7588\n    b _021EB748\n    cmp r1, #0x24\n    beq _021EB748\n    cmp r1, #0x25\n    beq _021EB748\n    cmp r1, #0x26\n    beq _021EB748\n    cmp r1, #0x27\n    beq _021EB748\n    cmp r1, #0x28\n    beq _021EB748\n    cmp r1, #0x29\n    beq _021EB748\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, _021EB7A4 ; =0x000005DC\n    bl PlaySE\n    b _021EB79E\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EB79E\n    ldr r0, _021EB7A8 ; =0x000005DD\n    bl PlaySE\n    ldr r1, _021EB7AC ; =ov14_021F7D3C\n    add r0, r4, #0\n    mov r2, #5\n    bl ov14_021F5EE4\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0x24\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    mov r1, #0x24\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F0530\n    pop {r3, r4, r5, pc}\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    nop\n    _021EB7A4: .word 0x000005DC\n    _021EB7A8: .word 0x000005DD\n    _021EB7AC: .word ov14_021F7D3C"
    );
    #endif
}

void ov14_021EB7B0(void) {
    /* Original at 0x021EB7B0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EB7E0 ; =0x000005EA\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E637C\n    add r0, r4, #0\n    bl ov14_021F08F0\n    ldr r0, [r4, #0x34]\n    mov r1, #0x24\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0xc\n    pop {r4, pc}\n    nop\n    _021EB7E0: .word 0x000005EA"
    );
    #endif
}

void ov14_021EB7E4(void) {
    /* Original at 0x021EB7E4 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    mov r1, #0x25\n    bl ov14_021F6688\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _021EB81E\n    cmp r0, #1\n    beq _021EB800\n    cmp r0, #2\n    b _021EB83C\n    ldr r1, _021EB8AC ; =ov14_021F7D2C\n    add r0, r5, #0\n    mov r2, #4\n    bl ov14_021F5EE4\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r4, #0x5a\n    b _021EB856\n    ldr r1, _021EB8B0 ; =ov14_021F7D1C\n    add r0, r5, #0\n    mov r2, #4\n    bl ov14_021F5EE4\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r4, #0x72\n    b _021EB856\n    ldr r1, _021EB8B4 ; =ov14_021F7D3C\n    add r0, r5, #0\n    mov r2, #5\n    bl ov14_021F5EE4\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021EB854\n    mov r4, #0x4d\n    b _021EB856\n    mov r4, #0x4e\n    ldr r0, [r5, #0x34]\n    ldr r2, _021EB8B8 ; =0x0000044E\n    ldrb r3, [r0, r2]\n    lsl r1, r3, #0x18\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _021EB892\n    mov r1, #0x80\n    bic r3, r1\n    strb r3, [r0, r2]\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    blo _021EB880\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov14_021F3488\n    b _021EB892\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    bl ov14_021F43F4\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov14_021F3488\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    ldr r1, _021EB8BC ; =ov14_021E9434\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021EB8AC: .word ov14_021F7D2C\n    _021EB8B0: .word ov14_021F7D1C\n    _021EB8B4: .word ov14_021F7D3C\n    _021EB8B8: .word 0x0000044E\n    _021EB8BC: .word ov14_021E9434"
    );
    #endif
}

void ov14_021EB8C0(void) {
    /* Original at 0x021EB8C0 */
    /* Requires manual decompilation - 237 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    bl ov14_021E7588\n    add r0, r5, #0\n    add r0, #0x26\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021EB9D4\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    cmp r0, #1\n    bne _021EB8EC\n    ldr r1, _021EBAD8 ; =ov14_021F7D2C\n    add r0, r5, #0\n    mov r2, #4\n    bl ov14_021F5EE4\n    b _021EB954\n    cmp r0, #0\n    bne _021EB90E\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F43F4\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    ldr r1, _021EBADC ; =ov14_021F7D1C\n    add r0, r5, #0\n    mov r2, #4\n    bl ov14_021F5EE4\n    b _021EB954\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    blo _021EB934\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    add r0, r5, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021EB944\n    add r0, r5, #0\n    bl ov14_021E8664\n    b _021EB944\n    add r0, r5, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021EB944\n    add r0, r5, #0\n    bl ov14_021E8664\n    ldr r1, _021EBAE0 ; =ov14_021F7D3C\n    add r0, r5, #0\n    mov r2, #5\n    bl ov14_021F5EE4\n    add r0, r5, #0\n    bl ov14_021E87F4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E83C4\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    ldr r0, [r5]\n    cmp r1, #0x1e\n    bhs _021EB984\n    ldr r0, [r0, #8]\n    cmp r0, #1\n    bne _021EB980\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r4, #0x51\n    b _021EB9BE\n    mov r4, #0xc\n    b _021EB9BE\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _021EB9A4\n    add r0, r5, #0\n    bl ov14_021F0BF4\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r4, #0x5b\n    b _021EB9BE\n    add r0, r5, #0\n    bl ov14_021F0B70\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F43F4\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #9\n    bl ov14_021F6AC0\n    mov r4, #0x24\n    add r0, r5, #0\n    bl ov14_021F3F6C\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    beq _021EBACC\n    ldr r0, [r5, #0x34]\n    bl ov14_021E8874\n    b _021EBACC\n    add r0, r5, #0\n    bl ov14_021F0BB4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8610\n    add r0, r5, #0\n    bl ov14_021F4720\n    add r0, r5, #0\n    bl ov14_021F4848\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F57B8\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E86E0\n    add r0, r5, #0\n    bl ov14_021E9554\n    cmp r0, #0\n    bne _021EBA0A\n    add r0, r5, #0\n    add r0, #0x27\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021EBA2E\n    add r2, r5, #0\n    add r2, #0x21\n    ldrb r2, [r2]\n    add r0, r5, #0\n    mov r1, #4\n    bl ov14_021F6AC0\n    b _021EBA4A\n    add r2, r5, #0\n    add r2, #0x28\n    ldrb r2, [r2]\n    add r0, r5, #0\n    mov r1, #4\n    bl ov14_021F6AC0\n    ldr r1, [r5, #0x34]\n    ldr r0, _021EBAE4 ; =0x0000044B\n    mov r2, #1\n    strb r2, [r1, r0]\n    add r0, r5, #0\n    bl ov14_021EA1F0\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r2, [r5, #0x34]\n    ldr r0, _021EBAE8 ; =0x0000043C\n    add r1, #0x25\n    str r1, [r2, r0]\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021EBA7E\n    add r0, r5, #0\n    mov r1, #0x81\n    mov r2, #1\n    bl ov14_021F3488\n    add r0, r5, #0\n    mov r1, #0x82\n    mov r2, #1\n    bl ov14_021F3488\n    mov r4, #0x82\n    b _021EBA8E\n    add r0, r5, #0\n    add r0, #0x27\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021EBA8C\n    mov r4, #0x29\n    b _021EBA8E\n    mov r4, #0x73\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    beq _021EBAA6\n    add r0, r5, #0\n    add r0, #0x27\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021EBAA6\n    ldr r0, [r5, #0x34]\n    bl ov14_021E8874\n    add r0, r5, #0\n    add r0, #0x29\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _021EBAB8\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F43F4\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x26\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x28\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x27\n    strb r1, [r0]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F01D8\n    pop {r3, r4, r5, pc}\n    nop\n    _021EBAD8: .word ov14_021F7D2C\n    _021EBADC: .word ov14_021F7D1C\n    _021EBAE0: .word ov14_021F7D3C\n    _021EBAE4: .word 0x0000044B\n    _021EBAE8: .word 0x0000043C"
    );
    #endif
}

void ov14_021EBAEC(void) {
    /* Original at 0x021EBAEC */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #9\n    mov r2, #0xa\n    bl ov14_021F6AC0\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r2, [r4, #0x34]\n    ldr r0, _021EBB38 ; =0x0000043C\n    str r1, [r2, r0]\n    add r0, r4, #0\n    bl ov14_021E8740\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x27\n    bl ov14_021F6844\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021EBB2C\n    add r0, r4, #0\n    mov r1, #0x81\n    mov r2, #1\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #0x3d\n    bl ov14_021F01D8\n    pop {r4, pc}\n    nop\n    _021EBB38: .word 0x0000043C"
    );
    #endif
}

void ov14_021EBB3C(void) {
    /* Original at 0x021EBB3C */
    /* Requires manual decompilation - 284 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    cmp r1, #0x1e\n    blo _021EBB62\n    bl ov14_021F0B70\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F43F4\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    beq _021EBB70\n    add r0, r5, #0\n    bl ov14_021F3F6C\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    sub r0, r0, #2\n    cmp r0, #1\n    bhi _021EBB8C\n    add r0, r5, #0\n    bl ov14_021E87F4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82FC\n    ldrh r0, [r5, #0x1c]\n    cmp r0, #0\n    bne _021EBC04\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021EBBD2\n    add r0, r5, #0\n    mov r1, #0\n    bl ov14_021F5FBC\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021EBBBA\n    add r0, r5, #0\n    mov r1, #0x81\n    mov r2, #1\n    bl ov14_021F3488\n    mov r4, #0x75\n    b _021EBBF6\n    add r0, r5, #0\n    mov r1, #0x82\n    mov r2, #1\n    bl ov14_021F3488\n    add r0, r5, #0\n    mov r1, #7\n    mov r2, #8\n    bl ov14_021F6AC0\n    mov r4, #0x8b\n    b _021EBBF6\n    ldr r1, _021EBDBC ; =ov14_021F7D3C\n    add r0, r5, #0\n    mov r2, #5\n    bl ov14_021F5EE4\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021EBBEA\n    mov r4, #0xc\n    b _021EBBF6\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0xa\n    bl ov14_021F6AC0\n    mov r4, #0x24\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E83C4\n    b _021EBD82\n    mov r4, #0\n    cmp r0, #0x70\n    bne _021EBC24\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #5\n    add r3, r4, #0\n    bl ov14_021E6070\n    ldr r1, _021EBDC0 ; =0x000001E7\n    cmp r0, r1\n    beq _021EBC24\n    mov r4, #1\n    b _021EBC72\n    add r2, r5, #0\n    add r2, #0x21\n    ldrb r1, [r5, #0x1f]\n    ldrb r2, [r2]\n    add r0, r5, #0\n    bl ov14_021E60C0\n    add r1, r5, #0\n    add r1, #0x21\n    add r3, r5, #0\n    add r6, r0, #0\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #6\n    add r3, #0x1c\n    bl ov14_021E6094\n    add r0, r6, #0\n    bl ov14_021E64D0\n    cmp r0, #1\n    bne _021EBC66\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r2, [r0]\n    ldr r3, [r5, #0x34]\n    ldrb r1, [r5, #0x1f]\n    add r6, r3, r2\n    ldr r3, _021EBDC4 ; =0x00004094\n    add r0, r5, #0\n    ldrb r3, [r6, r3]\n    bl ov14_021F2ED0\n    ldrh r1, [r5, #0x1c]\n    ldr r0, [r5, #0xc]\n    mov r2, #1\n    mov r3, #0xa\n    bl Bag_TakeItem\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r2, [r0]\n    ldr r0, [r5]\n    cmp r2, #0x1e\n    blo _021EBC9C\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021EBC90\n    add r0, r5, #0\n    mov r1, #7\n    sub r2, #0x1e\n    bl ov14_021F6AC0\n    b _021EBCD6\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0xa\n    bl ov14_021F6AC0\n    b _021EBCD6\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021EBCD6\n    ldr r0, [r5, #0x34]\n    add r1, r2, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021EBD78\n    cmp r4, #0\n    bne _021EBD50\n    ldrh r2, [r5, #0x1c]\n    ldr r0, [r5, #0x34]\n    ldr r1, _021EBDC8 ; =0x000088C8\n    strh r2, [r0, r1]\n    ldr r0, [r5, #0x34]\n    ldrh r1, [r0, r1]\n    bl ov14_021F3844\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F2A18\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    blo _021EBD2A\n    add r0, r5, #0\n    mov r1, #0x82\n    mov r2, #1\n    bl ov14_021F3488\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #1\n    bl ov14_021F396C\n    b _021EBD42\n    add r0, r5, #0\n    mov r1, #0x81\n    mov r2, #1\n    bl ov14_021F3488\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    bl ov14_021F396C\n    ldr r0, [r5, #0x34]\n    bl ov14_021F39D0\n    ldr r0, [r5, #0x34]\n    bl ov14_021F3B3C\n    b _021EBD74\n    mov r0, #0\n    strh r0, [r5, #0x1c]\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    blo _021EBD6A\n    add r0, r5, #0\n    mov r1, #0x82\n    mov r2, #1\n    bl ov14_021F3488\n    b _021EBD74\n    add r0, r5, #0\n    mov r1, #0x81\n    mov r2, #1\n    bl ov14_021F3488\n    mov r4, #0x7d\n    b _021EBD82\n    cmp r4, #1\n    bne _021EBD80\n    mov r0, #0\n    strh r0, [r5, #0x1c]\n    mov r4, #0x12\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    bl ov14_021E7588\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    beq _021EBD9E\n    ldr r0, [r5, #0x34]\n    bl ov14_021E8874\n    b _021EBDB0\n    ldrh r0, [r5, #0x1c]\n    cmp r0, #0\n    beq _021EBDB0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E892C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F01D8\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _021EBDBC: .word ov14_021F7D3C\n    _021EBDC0: .word 0x000001E7\n    _021EBDC4: .word 0x00004094\n    _021EBDC8: .word 0x000088C8"
    );
    #endif
}

void ov14_021EBDCC(void) {
    ov14_021F6768(0xe, 6, 0x25);
}

void ov14_021EBDE0(void) {
    ov14_021EBDE8();
}

void ov14_021EBDE8(void) {
    /* Original at 0x021EBDE8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    mov r2, #0xb\n    mov r3, #0\n    bl ov14_021E6070\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EBE24 ; =0x000040C0\n    str r0, [r2, r1]\n    add r0, r4, #0\n    bl ov14_021E7DF8\n    ldr r0, [r4, #0x34]\n    bl ov14_021F638C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7E40\n    ldr r1, _021EBE28 ; =ov14_021E94A8\n    add r0, r4, #0\n    mov r2, #0x15\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EBE24: .word 0x000040C0\n    _021EBE28: .word ov14_021E94A8"
    );
    #endif
}

void ov14_021EBE2C(void) {
    /* Original at 0x021EBE2C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #8\n    mov r2, #0\n    add r4, r0, #0\n    bl ov14_021F6AC0\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov14_021F3488\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    add r0, r4, #0\n    mov r1, #0x26\n    bl ov14_021F67A4\n    mov r0, #0x16\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021EBE68(void) {
    /* Original at 0x021EBE68 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    mov r1, #3\n    mvn r1, r1\n    cmp r0, r1\n    bhi _021EBEA0\n    bhs _021EBF72\n    cmp r0, #7\n    bhi _021EBF78\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EBE90: ; jump table\n    mov r1, #2\n    mvn r1, r1\n    cmp r0, r1\n    bhi _021EBEAC\n    beq _021EBF60\n    b _021EBF78\n    add r1, r1, #1\n    cmp r0, r1\n    beq _021EBF4C\n    b _021EBF78\n    ldr r0, _021EBF80 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021E7E10\n    b _021EBF78\n    ldr r0, _021EBF80 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021E7E10\n    b _021EBF78\n    ldr r0, _021EBF80 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #2\n    bl ov14_021E7E10\n    b _021EBF78\n    ldr r0, _021EBF80 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #3\n    bl ov14_021E7E10\n    b _021EBF78\n    ldr r0, _021EBF80 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #4\n    bl ov14_021E7E10\n    b _021EBF78\n    ldr r0, _021EBF80 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #5\n    bl ov14_021E7E10\n    b _021EBF78\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EBF84 ; =0x000040C0\n    mov r2, #0xb\n    ldr r1, [r1, r0]\n    add r0, sp, #0\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    add r3, sp, #0\n    bl ov14_021E6094\n    add r1, sp, #0\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov14_021E895C\n    ldr r0, _021EBF80 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x9a\n    bl ov14_021F23F0\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, _021EBF88 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x9a\n    bl ov14_021F23F0\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, _021EBF88 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x18\n    bl ov14_021F0244\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, _021EBF88 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x16\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021EBF80: .word 0x000005DD\n    _021EBF84: .word 0x000040C0\n    _021EBF88: .word 0x000005DC"
    );
    #endif
}

void ov14_021EBF8C(void) {
    /* Original at 0x021EBF8C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021EBF94 ; =ov14_021F0234\n    ldr r1, _021EBF98 ; =ov14_021E94BC\n    mov r2, #0xe\n    bx r3\n    _021EBF94: .word ov14_021F0234\n    _021EBF98: .word ov14_021E94BC"
    );
    #endif
}

void ov14_021EBF9C(void) {
    /* Original at 0x021EBF9C */
    /* Requires manual decompilation - 144 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    cmp r1, #0x1e\n    blo _021EC070\n    mov r1, #2\n    mov r2, #1\n    bl ov14_021F3488\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r4, [r0]\n    add r0, r5, #0\n    sub r4, #0x1e\n    add r1, r4, #0\n    bl ov14_021E6480\n    cmp r0, #0\n    bne _021EBFF8\n    ldr r0, _021EC0E4 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0x25\n    bl ov14_021F67B0\n    ldr r3, [r5, #0x34]\n    ldr r1, _021EC0E8 ; =0x0000044E\n    mov r0, #0x80\n    ldrb r2, [r3, r1]\n    orr r0, r2\n    strb r0, [r3, r1]\n    mov r0, #0xe\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021EC03C\n    ldr r0, _021EC0E4 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #6\n    mov r3, #0x25\n    bl ov14_021F685C\n    ldr r3, [r5, #0x34]\n    ldr r1, _021EC0E8 ; =0x0000044E\n    mov r0, #0x80\n    ldrb r2, [r3, r1]\n    orr r0, r2\n    strb r0, [r3, r1]\n    mov r0, #0xe\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _021EC090\n    ldr r0, _021EC0E4 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #5\n    mov r3, #0x25\n    bl ov14_021F685C\n    ldr r3, [r5, #0x34]\n    ldr r1, _021EC0E8 ; =0x0000044E\n    mov r0, #0x80\n    ldrb r2, [r3, r1]\n    orr r0, r2\n    strb r0, [r3, r1]\n    mov r0, #0xe\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F43F4\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    add r2, r5, #0\n    add r2, #0x21\n    ldrb r1, [r5, #0x1f]\n    ldrb r2, [r2]\n    add r0, r5, #0\n    bl ov14_021E60C0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _021EC0CE\n    ldr r0, _021EC0E4 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0x25\n    bl ov14_021F67B0\n    ldr r3, [r5, #0x34]\n    ldr r1, _021EC0E8 ; =0x0000044E\n    mov r0, #0x80\n    ldrb r2, [r3, r1]\n    orr r0, r2\n    strb r0, [r3, r1]\n    mov r0, #0xe\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x25\n    bl ov14_021F67B0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov14_021F0254\n    pop {r3, r4, r5, pc}\n    nop\n    _021EC0E4: .word 0x000005F3\n    _021EC0E8: .word 0x0000044E"
    );
    #endif
}

void ov14_021EC0EC(void) {
    /* Original at 0x021EC0EC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021E7278\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EC124 ; =0x000088DC\n    ldr r0, [r1, r0]\n    bl ov14_021F3380\n    cmp r0, #0\n    bne _021EC120\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EC124 ; =0x000088DC\n    ldr r0, [r1, r0]\n    ldrb r1, [r0, #6]\n    cmp r1, #0\n    beq _021EC112\n    mov r0, #0x1e\n    pop {r4, pc}\n    bl ov14_021F33E8\n    add r0, r4, #0\n    bl ov14_021E7264\n    mov r0, #0x1b\n    pop {r4, pc}\n    mov r0, #0x1a\n    pop {r4, pc}\n    _021EC124: .word 0x000088DC"
    );
    #endif
}

void ov14_021EC128(void) {
    ov14_021F67B0(0x1c, 6, 1, 0x25);
}

void ov14_021EC13C(void) {
    ov14_021F67B0(0x1d, 6, 2, 0x25);
}

void ov14_021EC150(void) {
    /* Original at 0x021EC150 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r2, r4, #0\n    add r2, #0x21\n    ldrb r1, [r4, #0x1f]\n    ldrb r2, [r2]\n    bl ov14_021E6100\n    ldr r0, [r4, #0x34]\n    mov r1, #0x25\n    bl ov14_021F6654\n    add r0, r4, #0\n    bl ov14_021E765C\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021EC200\n    ldrb r1, [r4, #0x1f]\n    add r0, r4, #0\n    bl ov14_021F4958\n    ldrb r1, [r4, #0x1f]\n    add r0, r4, #0\n    bl ov14_021F4A20\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #1\n    bne _021EC1A2\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r0, #0x51\n    str r0, [r4, #0x30]\n    b _021EC1BE\n    mov r0, #0xc\n    str r0, [r4, #0x30]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    add r1, r4, #0\n    ldr r0, [r4, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F43F4\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #0xff\n    add r0, #0x21\n    strb r1, [r0]\n    ldr r1, _021EC234 ; =ov14_021E9450\n    b _021EC22A\n    add r0, r4, #0\n    bl ov14_021F08BC\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x22\n    strb r1, [r0]\n    mov r0, #0x21\n    str r0, [r4, #0x30]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov14_021F3488\n    ldr r1, _021EC238 ; =ov14_021E9194\n    ldr r2, [r4, #0x30]\n    add r0, r4, #0\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EC234: .word ov14_021E9450\n    _021EC238: .word ov14_021E9194"
    );
    #endif
}

void ov14_021EC23C(void) {
    /* Original at 0x021EC23C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F08F0\n    add r0, r4, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021EC254\n    add r0, r4, #0\n    bl ov14_021F57B8\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov14_021E7588\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    sub r1, #0x1e\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r4, #0\n    mov r1, #0xff\n    add r0, #0x21\n    strb r1, [r0]\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _021EC29E\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r0, #0x5b\n    pop {r4, pc}\n    mov r0, #0x24\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021EC2A4(void) {
    /* Original at 0x021EC2A4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EC2E8 ; =0x000088DC\n    ldr r0, [r1, r0]\n    bl ov14_021F33B0\n    cmp r0, #0\n    bne _021EC2E4\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EC2E8 ; =0x000088DC\n    ldr r0, [r1, r0]\n    bl ov14_021F33FC\n    add r0, r4, #0\n    bl ov14_021E7264\n    add r0, r4, #0\n    bl ov14_021F3F6C\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0x25\n    bl ov14_021F67B0\n    ldr r0, [r4, #0x34]\n    bl ov14_021E8824\n    mov r0, #0x1f\n    str r0, [r4, #0x30]\n    mov r0, #6\n    pop {r4, pc}\n    mov r0, #0x1e\n    pop {r4, pc}\n    _021EC2E8: .word 0x000088DC"
    );
    #endif
}

void ov14_021EC2EC(void) {
    ov14_021F67B0(0x20, 6, 5, 0x25);
}

void ov14_021EC300(void) {
    /* Original at 0x021EC300 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #1\n    bl ov14_021F40E8\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021EC328\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F43F4\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov14_021F3488\n    b _021EC332\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov14_021F3488\n    ldr r1, _021EC340 ; =ov14_021E9450\n    add r0, r4, #0\n    mov r2, #0xe\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021EC340: .word ov14_021E9450"
    );
    #endif
}

void ov14_021EC344(void) {
    GridInputHandler_SetButtonInputMode();
}

void ov14_021EC354(void) {
    /* Original at 0x021EC354 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov14_021E81A8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7EC0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7EE0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63F0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63A8\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F5EC4\n    add r0, r4, #0\n    bl ov14_021F2FDC\n    ldr r1, _021EC3A4 ; =ov14_021E9518\n    add r0, r4, #0\n    mov r2, #0x23\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EC3A4: .word ov14_021E9518"
    );
    #endif
}

void ov14_021EC3A8(void) {
    /* Original at 0x021EC3A8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021EC3C8\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0\n    bl ov14_021F6AC0\n    mov r0, #0x8b\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl ov14_021F6AC0\n    mov r0, #0x24\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021EC3D8(void) {
    /* Original at 0x021EC3D8 */
    /* Requires manual decompilation - 333 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov14_021F6A24\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EC4D4\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EC44A\n    ldr r0, _021EC6F4 ; =0x000005EB\n    bl PlaySE\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EC6F8 ; =0x000040B8\n    add r0, r2, r1\n    add r1, r1, #4\n    add r1, r2, r1\n    bl System_GetTouchNewCoords\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021EC42A\n    ldr r1, _021EC6FC ; =ov14_021F7D3C\n    add r0, r4, #0\n    mov r2, #5\n    bl ov14_021F5EE4\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r5, #0x1e\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F0594\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021EC4B4\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    sub r0, #0x1e\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r0, [r4, #0x34]\n    bl ov14_021E884C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    ldr r1, _021EC700 ; =ov14_021EA180\n    add r0, r4, #0\n    mov r2, #0x4c\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    lsl r1, r5, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r4, #0\n    bl ov14_021E765C\n    mov r0, #0x24\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021F7388\n    mov r1, #2\n    add r5, r0, #0\n    mvn r1, r1\n    cmp r5, r1\n    bhi _021EC51E\n    bhs _021EC5CA\n    cmp r5, #0xd\n    bhi _021EC512\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EC4F6: ; jump table\n    mov r0, #3\n    mvn r0, r0\n    cmp r5, r0\n    bne _021EC51C\n    b _021EC65C\n    b _021EC69A\n    add r0, r1, #1\n    cmp r5, r0\n    bhi _021EC528\n    beq _021EC610\n    b _021EC69A\n    add r0, r1, #2\n    cmp r5, r0\n    bne _021EC530\n    b _021EC6EE\n    b _021EC69A\n    ldr r0, _021EC704 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x2a\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x2b\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r2, #0x9d\n    bl ov14_021F2490\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EC704 ; =0x000005DD\n    bl PlaySE\n    bl System_GetTouchNew\n    cmp r0, #0\n    bne _021EC566\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0x2a\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x2b\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0x9d\n    bl ov14_021F2330\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EC704 ; =0x000005DD\n    bl PlaySE\n    mov r0, #9\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0x97\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EC704 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0x98\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EC704 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0x99\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EC704 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0x9b\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #5\n    bhi _021EC5E2\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    b _021EC600\n    cmp r1, #8\n    beq _021EC600\n    cmp r1, #9\n    beq _021EC600\n    cmp r1, #0xa\n    beq _021EC600\n    cmp r1, #0xb\n    beq _021EC600\n    cmp r1, #0xc\n    beq _021EC600\n    cmp r1, #0xd\n    beq _021EC600\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, _021EC708 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x4c\n    bl ov14_021F0244\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EC70C ; =0x00000633\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x9f\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EC708 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    sub r0, #0x1e\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0x9e\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #5\n    bhi _021EC674\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    b _021EC692\n    cmp r1, #8\n    beq _021EC692\n    cmp r1, #9\n    beq _021EC692\n    cmp r1, #0xa\n    beq _021EC692\n    cmp r1, #0xb\n    beq _021EC692\n    cmp r1, #0xc\n    beq _021EC692\n    cmp r1, #0xd\n    beq _021EC692\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, _021EC708 ; =0x000005DC\n    bl PlaySE\n    b _021EC6EE\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EC6EE\n    ldr r0, _021EC704 ; =0x000005DD\n    bl PlaySE\n    ldr r1, _021EC6FC ; =ov14_021F7D3C\n    add r0, r4, #0\n    mov r2, #5\n    bl ov14_021F5EE4\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #8\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    mov r1, #8\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r5, #0x1e\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F07F0\n    pop {r3, r4, r5, pc}\n    mov r0, #0x24\n    pop {r3, r4, r5, pc}\n    nop\n    _021EC6F4: .word 0x000005EB\n    _021EC6F8: .word 0x000040B8\n    _021EC6FC: .word ov14_021F7D3C\n    _021EC700: .word ov14_021EA180\n    _021EC704: .word 0x000005DD\n    _021EC708: .word 0x000005DC\n    _021EC70C: .word 0x00000633"
    );
    #endif
}

void ov14_021EC710(void) {
    /* Original at 0x021EC710 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7F4C\n    ldr r1, _021EC72C ; =ov14_021E9518\n    add r0, r4, #0\n    mov r2, #0x26\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EC72C: .word ov14_021E9518"
    );
    #endif
}

void ov14_021EC730(void) {
    /* Original at 0x021EC730 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021E7E98\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F43F4\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F5C84\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F5E94\n    add r0, r4, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021EC762\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F5EB4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021EC7AE\n    add r0, r4, #0\n    mov r1, #0x81\n    mov r2, #1\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0x21\n    bl ov14_021F6AC0\n    ldr r1, _021EC7D0 ; =ov14_021E94BC\n    add r0, r4, #0\n    mov r2, #0x75\n    bl ov14_021F0234\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0x21\n    bl ov14_021F6AC0\n    ldr r1, _021EC7D0 ; =ov14_021E94BC\n    add r0, r4, #0\n    mov r2, #0xc\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021EC7D0: .word ov14_021E94BC"
    );
    #endif
}

void ov14_021EC7D4(void) {
    /* Original at 0x021EC7D4 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r4, [r0, #0xc]\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r6, [r1]\n    mov r1, #0x28\n    bl ov14_021F6654\n    ldr r0, _021EC850 ; =0x000005EA\n    bl PlaySE\n    add r0, r5, #0\n    bl ov14_021E637C\n    add r1, r4, #0\n    add r1, #0xe4\n    add r4, #0xe8\n    ldr r1, [r1]\n    ldr r2, [r4]\n    add r0, r5, #0\n    bl ov14_021E6548\n    add r0, r5, #0\n    bl ov14_021F08F0\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0xff\n    ldr r0, [r5, #0x34]\n    bne _021EC838\n    add r1, r6, #0\n    sub r1, #0x1e\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021E7588\n    b _021EC84A\n    ldr r0, [r0, #0x2c]\n    mov r1, #8\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x24\n    pop {r4, r5, r6, pc}\n    nop\n    _021EC850: .word 0x000005EA"
    );
    #endif
}

void ov14_021EC854(void) {
    /* Original at 0x021EC854 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r2, [r4, #0x34]\n    ldr r0, _021EC8CC ; =0x0000043C\n    add r1, #0x25\n    str r1, [r2, r0]\n    add r0, r4, #0\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021EC8A2\n    add r2, r4, #0\n    add r2, #0x2b\n    ldrb r2, [r2]\n    add r0, r4, #0\n    mov r1, #4\n    bl ov14_021F6AC0\n    add r0, r4, #0\n    add r0, #0x2b\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x2b\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov14_021F1580\n    mov r1, #0\n    add r4, #0x2a\n    strb r1, [r4]\n    pop {r4, pc}\n    add r2, r4, #0\n    add r2, #0x2b\n    ldrb r2, [r2]\n    add r0, r4, #0\n    mov r1, #4\n    bl ov14_021F6AC0\n    add r1, r4, #0\n    add r1, #0x2b\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov14_021E7588\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021EC8C8\n    mov r0, #0x82\n    pop {r4, pc}\n    mov r0, #0x29\n    pop {r4, pc}\n    _021EC8CC: .word 0x0000043C"
    );
    #endif
}

void ov14_021EC8D0(void) {
    /* Original at 0x021EC8D0 */
    /* Requires manual decompilation - 501 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov14_021F6A34\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EC97E\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EC928\n    ldr r0, _021ECC30 ; =0x000005EB\n    bl PlaySE\n    ldr r2, [r4, #0x34]\n    ldr r1, _021ECC34 ; =0x000040B8\n    add r0, r2, r1\n    add r1, r1, #4\n    add r1, r2, r1\n    bl System_GetTouchNewCoords\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r5, #0x1e\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F083C\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, [r4, #0x34]\n    add r5, #0x1e\n    lsl r1, r5, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021EC960\n    add r0, r4, #0\n    mov r1, #0x29\n    bl ov14_021F0EE8\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021EC97A\n    add r0, r4, #0\n    mov r1, #0x29\n    bl ov14_021F0D34\n    pop {r3, r4, r5, pc}\n    mov r0, #0x29\n    pop {r3, r4, r5, pc}\n    bl ov14_021F6A14\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _021ECA20\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EC9CC\n    ldr r0, _021ECC30 ; =0x000005EB\n    bl PlaySE\n    ldr r2, [r4, #0x34]\n    ldr r1, _021ECC34 ; =0x000040B8\n    add r0, r2, r1\n    add r1, r1, #4\n    add r1, r2, r1\n    bl System_GetTouchNewCoords\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F083C\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, [r4, #0x34]\n    lsl r1, r5, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021ECA02\n    add r0, r4, #0\n    mov r1, #0x29\n    bl ov14_021F0EE8\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021ECA1C\n    add r0, r4, #0\n    mov r1, #0x29\n    bl ov14_021F0D34\n    pop {r3, r4, r5, pc}\n    mov r0, #0x29\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021F7B7C\n    cmp r0, #1\n    bne _021ECA68\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021ECA64\n    ldr r0, _021ECC38 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x21\n    strb r5, [r0]\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x26\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #0xf\n    mov r2, #0x97\n    bl ov14_021F2330\n    pop {r3, r4, r5, pc}\n    mov r0, #0x29\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021F70C0\n    mov r1, #2\n    add r5, r0, #0\n    mvn r1, r1\n    cmp r5, r1\n    bhi _021ECAAE\n    blo _021ECA7C\n    b _021ECC6A\n    cmp r5, #0x2d\n    bhi _021ECAA4\n    sub r0, #0x24\n    bmi _021ECAAC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021ECA90: ; jump table\n    mov r0, #3\n    mvn r0, r0\n    cmp r5, r0\n    beq _021ECAC0\n    b _021ECD70\n    add r0, r1, #1\n    cmp r5, r0\n    bhi _021ECABA\n    bne _021ECAB8\n    b _021ECD1A\n    b _021ECD70\n    add r0, r1, #2\n    cmp r5, r0\n    bne _021ECAC2\n    b _021ECD98\n    b _021ECD70\n    ldr r0, _021ECC38 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECC38 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECC38 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #2\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECC38 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #3\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECC38 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #4\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECC38 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #5\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECC3C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov14_021F1004\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r4, #0x34]\n    add r1, #0x25\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021ECB9C\n    add r0, r4, #0\n    mov r1, #0x29\n    bl ov14_021F0EE8\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021ECBB6\n    add r0, r4, #0\n    mov r1, #0x29\n    bl ov14_021F0D34\n    pop {r3, r4, r5, pc}\n    mov r0, #0x29\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECC3C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F1004\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r4, #0x34]\n    add r1, #0x25\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021ECC0C\n    add r0, r4, #0\n    mov r1, #0x29\n    bl ov14_021F0EE8\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021ECC26\n    add r0, r4, #0\n    mov r1, #0x29\n    bl ov14_021F0D34\n    pop {r3, r4, r5, pc}\n    mov r0, #0x29\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECC3C ; =0x000005DC\n    b _021ECC40\n    nop\n    _021ECC30: .word 0x000005EB\n    _021ECC34: .word 0x000040B8\n    _021ECC38: .word 0x000005DD\n    _021ECC3C: .word 0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r4, #0x34]\n    add r1, #0x25\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #0xa0\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #0x25\n    bhs _021ECCC4\n    add r0, r4, #0\n    bl ov14_021E7588\n    cmp r0, #1\n    ldr r1, [r4, #0x34]\n    bne _021ECCA8\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #0\n    bne _021ECCE6\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F6408\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8620\n    b _021ECCE6\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021ECCE6\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    b _021ECCE6\n    add r0, r4, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021ECCE6\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    ldr r0, _021ECD9C ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _021ECD98\n    add r0, r4, #0\n    mov r1, #0x4b\n    bl ov14_021F0244\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECDA0 ; =0x00000633\n    bl PlaySE\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xa1\n    bl ov14_021F2490\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #0\n    bne _021ECD3C\n    ldr r0, _021ECDA0 ; =0x00000633\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xa1\n    bl ov14_021F2490\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECD9C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r4, #0x34]\n    add r1, #0x25\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r4, #0\n    mov r1, #0x29\n    bl ov14_021F0EE8\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021ECD98\n    ldr r0, _021ECDA4 ; =0x000005EB\n    bl PlaySE\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021E7588\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F1580\n    pop {r3, r4, r5, pc}\n    mov r0, #0x29\n    pop {r3, r4, r5, pc}\n    _021ECD9C: .word 0x000005DC\n    _021ECDA0: .word 0x00000633\n    _021ECDA4: .word 0x000005EB"
    );
    #endif
}

void ov14_021ECDA8(void) {
    /* Original at 0x021ECDA8 */
    /* Requires manual decompilation - 187 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r7, [r0, #0xc]\n    add r0, r7, #0\n    add r0, #0xe8\n    ldr r6, [r0]\n    add r0, r7, #0\n    add r0, #0xec\n    ldr r4, [r0]\n    ldr r0, _021ECF50 ; =0x000005EA\n    bl PlaySE\n    add r0, r5, #0\n    bl ov14_021E637C\n    mov r0, #0x80\n    and r0, r6\n    str r0, [sp]\n    bne _021ECDE0\n    add r1, r7, #0\n    add r1, #0xe4\n    add r7, #0xe8\n    ldr r1, [r1]\n    ldr r2, [r7]\n    add r0, r5, #0\n    bl ov14_021E6548\n    add r0, r5, #0\n    bl ov14_021F08F0\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021ECE04\n    add r0, r5, #0\n    bl ov14_021F57B8\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    bne _021ECE20\n    add r0, r5, #0\n    bl ov14_021E765C\n    b _021ECF40\n    cmp r6, #0xff\n    beq _021ECE3A\n    ldr r0, [sp]\n    cmp r0, #0\n    bne _021ECE2C\n    b _021ECF40\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    bl ov14_021E7588\n    b _021ECF40\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r6, [r0]\n    cmp r6, #0x1e\n    blo _021ECECE\n    cmp r4, r6\n    beq _021ECECE\n    sub r6, #0x1e\n    ldr r0, [r5, #8]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021ECE82\n    ldr r0, _021ECF54 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #6\n    mov r3, #0x25\n    bl ov14_021F685C\n    mov r0, #0x2c\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _021ECEAA\n    ldr r0, _021ECF54 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #5\n    mov r3, #0x25\n    bl ov14_021F685C\n    mov r0, #0x2c\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021E6480\n    cmp r0, #0\n    bne _021ECECE\n    ldr r0, _021ECF54 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0x25\n    bl ov14_021F67B0\n    mov r0, #0x2c\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0xff\n    beq _021ECF40\n    mov r0, #0x80\n    tst r0, r4\n    beq _021ECF40\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    mov r2, #0x80\n    add r3, r4, #0\n    eor r3, r2\n    mov r2, #6\n    mul r2, r0\n    ldrb r1, [r5, #0x1f]\n    add r0, r3, r2\n    cmp r1, r0\n    beq _021ECF40\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    cmp r1, #0x1e\n    bhs _021ECF0E\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #4\n    mov r3, #0x25\n    bl ov14_021F685C\n    b _021ECF32\n    add r0, r5, #0\n    sub r1, #0x1e\n    bl ov14_021E6480\n    cmp r0, #1\n    bne _021ECF28\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #4\n    mov r3, #0x25\n    bl ov14_021F685C\n    b _021ECF32\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0x25\n    bl ov14_021F67B0\n    ldr r0, _021ECF54 ; =0x000005F3\n    bl PlaySE\n    mov r0, #0x2c\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x29\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021ECF50: .word 0x000005EA\n    _021ECF54: .word 0x000005F3"
    );
    #endif
}

void ov14_021ECF58(void) {
    /* Original at 0x021ECF58 */
    /* Requires manual decompilation - 253 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r4, [r0, #0xc]\n    add r0, r4, #0\n    add r0, #0xe8\n    ldr r6, [r0]\n    ldr r0, _021ED1A0 ; =0x000005EA\n    bl PlaySE\n    add r0, r5, #0\n    bl ov14_021E637C\n    mov r0, #0x80\n    tst r0, r6\n    bne _021ECF88\n    add r1, r4, #0\n    add r1, #0xe4\n    add r4, #0xe8\n    ldr r1, [r1]\n    ldr r2, [r4]\n    add r0, r5, #0\n    bl ov14_021E6548\n    add r0, r5, #0\n    bl ov14_021F08F0\n    add r0, r5, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021ECF9E\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r4, r0, #0\n    ldr r1, [r5, #0x34]\n    ldr r0, _021ED1A4 ; =0x000088CC\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _021ECFC0\n    cmp r6, #0xff\n    bne _021ECFC0\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r6, [r0]\n    cmp r4, r6\n    bne _021ECFC2\n    b _021ED15C\n    cmp r6, #0x1e\n    blo _021ED0B2\n    sub r6, #0x1e\n    ldr r0, [r5, #8]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021ED022\n    ldr r0, _021ED1A8 ; =0x000005F3\n    bl PlaySE\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #6\n    mov r3, #0x25\n    bl ov14_021F685C\n    mov r0, #0x2c\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _021ED06C\n    ldr r0, _021ED1A8 ; =0x000005F3\n    bl PlaySE\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #5\n    mov r3, #0x25\n    bl ov14_021F685C\n    mov r0, #0x2c\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021E6480\n    cmp r0, #0\n    bne _021ED0B2\n    ldr r0, _021ED1A8 ; =0x000005F3\n    bl PlaySE\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0x25\n    bl ov14_021F67B0\n    mov r0, #0x2c\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0x25\n    blo _021ED142\n    cmp r4, #0x2a\n    bhi _021ED142\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    add r3, r4, #0\n    mov r2, #6\n    ldrb r1, [r5, #0x1f]\n    sub r3, #0x25\n    mul r2, r0\n    add r0, r3, r2\n    cmp r1, r0\n    beq _021ED142\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    cmp r1, #0x1e\n    bhs _021ED0EE\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #4\n    mov r3, #0x25\n    bl ov14_021F685C\n    b _021ED112\n    add r0, r5, #0\n    sub r1, #0x1e\n    bl ov14_021E6480\n    cmp r0, #1\n    bne _021ED108\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #4\n    mov r3, #0x25\n    bl ov14_021F685C\n    b _021ED112\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0x25\n    bl ov14_021F67B0\n    ldr r0, _021ED1A8 ; =0x000005F3\n    bl PlaySE\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    mov r0, #0x2c\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021ED15C\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov14_021E7588\n    add r0, r5, #0\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021ED17E\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    add r0, r5, #0\n    bl ov14_021E76B8\n    add r0, r5, #0\n    bl ov14_021F0CD8\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0x25\n    blo _021ED192\n    cmp r4, #0x2a\n    bhi _021ED192\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    b _021ED19C\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    mov r0, #0x29\n    pop {r3, r4, r5, r6, r7, pc}\n    _021ED1A0: .word 0x000005EA\n    _021ED1A4: .word 0x000088CC\n    _021ED1A8: .word 0x000005F3"
    );
    #endif
}

void ov14_021ED1AC(void) {
    /* Original at 0x021ED1AC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0x25\n    bl ov14_021F6688\n    add r0, r4, #0\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #0\n    ldr r0, [r4, #0x34]\n    beq _021ED1DA\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    bl ov14_021F0CD8\n    pop {r4, pc}\n    ldr r0, [r0, #0x2c]\n    mov r1, #1\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x29\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021ED1E8(void) {
    /* Original at 0x021ED1E8 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63B8\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021ED206\n    add r0, r4, #0\n    mov r1, #0x81\n    mov r2, #1\n    bl ov14_021F3488\n    b _021ED210\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov14_021F3488\n    add r1, r4, #0\n    add r1, #0x2b\n    ldrb r1, [r1]\n    add r0, r4, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021ED238\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F6408\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8620\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x24\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x29\n    strb r1, [r0]\n    add r0, r4, #0\n    ldrb r1, [r4, #0x1f]\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #0x28\n    bl ov14_021F1058\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021ED258(void) {
    /* Original at 0x021ED258 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63A8\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021ED28A\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0\n    bl ov14_021F6AC0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    mov r0, #0x8b\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021ED2A6\n    add r2, r4, #0\n    add r2, #0x2b\n    ldrb r2, [r2]\n    add r0, r4, #0\n    mov r1, #5\n    sub r2, #0x1e\n    bl ov14_021F6AC0\n    b _021ED2B0\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl ov14_021F6AC0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    mov r0, #0x24\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021ED2C8(void) {
    /* Original at 0x021ED2C8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #0x1f]\n    add r1, r0, #0\n    add r1, #0x25\n    strb r2, [r1]\n    ldr r3, _021ED2D8 ; =ov14_021F1058\n    mov r1, #0x30\n    bx r3\n    nop\n    _021ED2D8: .word ov14_021F1058"
    );
    #endif
}

void ov14_021ED2DC(void) {
    /* Original at 0x021ED2DC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov14_021E81A8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7ED0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7EE0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63F0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63B8\n    add r0, r4, #0\n    bl ov14_021F3044\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F6408\n    add r1, r4, #0\n    add r1, #0x2b\n    ldrb r1, [r1]\n    add r0, r4, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021ED340\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8620\n    ldr r1, _021ED34C ; =ov14_021E9518\n    add r0, r4, #0\n    mov r2, #0x28\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021ED34C: .word ov14_021E9518"
    );
    #endif
}

void ov14_021ED350(void) {
    ov14_021F1090();
}

void ov14_021ED35C(void) {
    /* Original at 0x021ED35C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x29\n    ldrb r1, [r1]\n    cmp r1, #1\n    bne _021ED370\n    bl ov14_021F0C58\n    pop {r4, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7F4C\n    ldr r1, _021ED388 ; =ov14_021E9518\n    add r0, r4, #0\n    mov r2, #0x33\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021ED388: .word ov14_021E9518"
    );
    #endif
}

void ov14_021ED38C(void) {
    /* Original at 0x021ED38C */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r1, [r5]\n    ldr r1, [r1, #8]\n    cmp r1, #3\n    bne _021ED3A0\n    mov r7, #6\n    mov r6, #0x22\n    mov r4, #0x75\n    b _021ED3BC\n    add r1, r5, #0\n    add r1, #0x2a\n    ldrb r1, [r1]\n    mov r7, #3\n    mov r6, #0x22\n    mov r4, #0xc\n    cmp r1, #0\n    beq _021ED3BC\n    add r1, r5, #0\n    add r1, #0x2b\n    ldrb r6, [r1]\n    add r1, r6, #0\n    bl ov14_021E7588\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    bl ov14_021F6AC0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov14_021F5C84\n    add r0, r5, #0\n    mov r1, #0\n    bl ov14_021F5E94\n    add r0, r5, #0\n    mov r1, #0\n    bl ov14_021F5EB4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r1, _021ED410 ; =ov14_021E94BC\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021ED410: .word ov14_021E94BC"
    );
    #endif
}

void ov14_021ED414(void) {
    /* Original at 0x021ED414 */
    /* Requires manual decompilation - 157 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    mov r1, #3\n    mvn r1, r1\n    cmp r0, r1\n    bhi _021ED454\n    blo _021ED42C\n    b _021ED57C\n    cmp r0, #0xb\n    bhi _021ED45E\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021ED43C: ; jump table\n    mov r1, #2\n    mvn r1, r1\n    cmp r0, r1\n    bhi _021ED460\n    beq _021ED55E\n    b _021ED5A0\n    add r1, r1, #1\n    cmp r0, r1\n    bne _021ED468\n    b _021ED58E\n    b _021ED5A0\n    ldr r0, _021ED5A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F1170\n    pop {r4, pc}\n    ldr r0, _021ED5A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F1170\n    pop {r4, pc}\n    ldr r0, _021ED5A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #2\n    bl ov14_021F1170\n    pop {r4, pc}\n    ldr r0, _021ED5A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #3\n    bl ov14_021F1170\n    pop {r4, pc}\n    ldr r0, _021ED5A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #4\n    bl ov14_021F1170\n    pop {r4, pc}\n    ldr r0, _021ED5A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #5\n    bl ov14_021F1170\n    pop {r4, pc}\n    ldr r0, _021ED5A8 ; =0x000005DC\n    bl PlaySE\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov14_021F11F8\n    pop {r4, pc}\n    ldr r0, _021ED5A8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F11F8\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r1, [r4, #0x1f]\n    ldrb r0, [r0]\n    cmp r1, r0\n    bne _021ED514\n    ldr r0, _021ED5AC ; =0x000005F3\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0x3d\n    bl ov14_021F2270\n    pop {r4, pc}\n    ldr r0, _021ED5A8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0xa2\n    bl ov14_021F2270\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, _021ED5A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0xa3\n    bl ov14_021F2270\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, _021ED5A4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0xa4\n    bl ov14_021F2270\n    pop {r4, pc}\n    ldr r0, _021ED5A8 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _021ED5A0\n    ldr r0, _021ED5A8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x3e\n    bl ov14_021F0244\n    pop {r4, pc}\n    ldr r0, _021ED5A8 ; =0x000005DC\n    bl PlaySE\n    b _021ED5A0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, _021ED5A8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x39\n    bl ov14_021F2270\n    pop {r4, pc}\n    mov r0, #0x3d\n    pop {r4, pc}\n    _021ED5A4: .word 0x000005DD\n    _021ED5A8: .word 0x000005DC\n    _021ED5AC: .word 0x000005F3"
    );
    #endif
}

void ov14_021ED5B0(void) {
    /* Original at 0x021ED5B0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r1, [r4, #0x34]\n    ldr r0, [r0, #8]\n    cmp r0, #1\n    bne _021ED5DA\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E834C\n    cmp r0, #0\n    bne _021ED5FC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    b _021ED5FC\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8234\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8294\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r1, _021ED608 ; =ov14_021E94BC\n    add r0, r4, #0\n    mov r2, #0x35\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021ED608: .word ov14_021E94BC"
    );
    #endif
}

void ov14_021ED60C(void) {
    /* Original at 0x021ED60C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #0x1f]\n    add r1, r0, #0\n    add r1, #0x25\n    strb r2, [r1]\n    ldr r3, _021ED61C ; =ov14_021F1058\n    mov r1, #0x36\n    bx r3\n    nop\n    _021ED61C: .word ov14_021F1058"
    );
    #endif
}

void ov14_021ED620(void) {
    ov14_021F10B4();
}

void ov14_021ED62C(void) {
    /* Original at 0x021ED62C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F6070\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E875C\n    ldr r1, _021ED64C ; =ov14_021E9618\n    add r0, r4, #0\n    mov r2, #0x38\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021ED64C: .word ov14_021E9618"
    );
    #endif
}

void ov14_021ED650(void) {
    /* Original at 0x021ED650 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4, #0x2c]\n    mov r1, #9\n    bl ov14_021F6AC0\n    ldr r0, [r4, #0x2c]\n    cmp r0, #5\n    ldr r0, [r4, #0x34]\n    bhi _021ED66E\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    b _021ED676\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x27\n    bl ov14_021F6844\n    mov r0, #0x3d\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021ED684(void) {
    /* Original at 0x021ED684 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #0x27\n    bl ov14_021F6654\n    add r0, r4, #0\n    mov r1, #0x3a\n    bl ov14_021F10DC\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021ED6A4(void) {
    /* Original at 0x021ED6A4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E87BC\n    ldr r1, _021ED6C0 ; =ov14_021E9618\n    add r0, r4, #0\n    mov r2, #0x3b\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021ED6C0: .word ov14_021E9618"
    );
    #endif
}

void ov14_021ED6C4(void) {
    ov14_021F1090();
}

void ov14_021ED6D0(void) {
    /* Original at 0x021ED6D0 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F5EB4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #1\n    bne _021ED71A\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x1e\n    bl ov14_021F6AC0\n    ldr r1, _021ED758 ; =ov14_021E95B4\n    add r0, r4, #0\n    mov r2, #0x52\n    bl ov14_021F0234\n    pop {r4, pc}\n    cmp r0, #3\n    bne _021ED72A\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0x1e\n    bl ov14_021F6AC0\n    b _021ED734\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0x1e\n    bl ov14_021F6AC0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    ldr r1, _021ED75C ; =ov14_021E94BC\n    add r0, r4, #0\n    mov r2, #0x4d\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021ED758: .word ov14_021E95B4\n    _021ED75C: .word ov14_021E94BC"
    );
    #endif
}

void ov14_021ED760(void) {
    /* Original at 0x021ED760 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x25\n    ldrb r1, [r1]\n    bl ov14_021E7930\n    ldr r2, [r4, #0x34]\n    ldr r1, _021ED7B0 ; =0x0000044D\n    strb r0, [r2, r1]\n    add r0, r4, #0\n    bl ov14_021F4428\n    add r0, r4, #0\n    bl ov14_021F4530\n    add r0, r4, #0\n    bl ov14_021F459C\n    add r0, r4, #0\n    bl ov14_021F58B8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E87BC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E81B4\n    ldr r1, _021ED7B4 ; =ov14_021E9660\n    add r0, r4, #0\n    mov r2, #0x40\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021ED7B0: .word 0x0000044D\n    _021ED7B4: .word ov14_021E9660"
    );
    #endif
}

void ov14_021ED7B8(void) {
    /* Original at 0x021ED7B8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F6094\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8560\n    ldr r1, _021ED7D8 ; =ov14_021E95C8\n    add r0, r4, #0\n    mov r2, #0x41\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021ED7D8: .word ov14_021E95C8"
    );
    #endif
}

void ov14_021ED7DC(void) {
    /* Original at 0x021ED7DC */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x34]\n    ldr r2, _021ED81C ; =0x0000044D\n    ldrb r3, [r1, r2]\n    lsr r6, r3, #0x1f\n    lsl r5, r3, #0x1e\n    sub r5, r5, r6\n    mov r3, #0x1e\n    ror r5, r3\n    add r3, r2, #0\n    add r5, r6, r5\n    sub r3, #0x11\n    str r5, [r1, r3]\n    ldr r3, [r4, #0x34]\n    sub r2, #0x11\n    ldr r2, [r3, r2]\n    mov r1, #0xa\n    bl ov14_021F6AC0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x27\n    bl ov14_021F6844\n    mov r0, #0x42\n    pop {r4, r5, r6, pc}\n    _021ED81C: .word 0x0000044D"
    );
    #endif
}

void ov14_021ED820(void) {
    /* Original at 0x021ED820 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    mov r1, #2\n    mvn r1, r1\n    cmp r0, r1\n    bhi _021ED856\n    bhs _021ED8E0\n    cmp r0, #7\n    bhi _021ED914\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021ED846: ; jump table\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    beq _021ED902\n    b _021ED914\n    ldr r0, _021ED918 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F129C\n    mov r0, #0x42\n    pop {r4, pc}\n    ldr r0, _021ED918 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F129C\n    mov r0, #0x42\n    pop {r4, pc}\n    ldr r0, _021ED918 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #2\n    bl ov14_021F129C\n    mov r0, #0x42\n    pop {r4, pc}\n    ldr r0, _021ED918 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #3\n    bl ov14_021F129C\n    mov r0, #0x42\n    pop {r4, pc}\n    ldr r0, _021ED91C ; =0x000005DC\n    bl PlaySE\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov14_021F1228\n    mov r0, #0x42\n    pop {r4, pc}\n    ldr r0, _021ED91C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F1228\n    mov r0, #0x42\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    add r0, r4, #0\n    bl ov14_021F131C\n    pop {r4, pc}\n    ldr r0, _021ED91C ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _021ED914\n    add r0, r4, #0\n    mov r1, #0x49\n    bl ov14_021F0244\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, _021ED91C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0xa6\n    bl ov14_021F2270\n    pop {r4, pc}\n    mov r0, #0x42\n    pop {r4, pc}\n    _021ED918: .word 0x000005DD\n    _021ED91C: .word 0x000005DC"
    );
    #endif
}

void ov14_021ED920(void) {
    /* Original at 0x021ED920 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8588\n    ldr r1, _021ED93C ; =ov14_021E9604\n    add r0, r4, #0\n    mov r2, #0x44\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021ED93C: .word ov14_021E9604"
    );
    #endif
}

void ov14_021ED940(void) {
    /* Original at 0x021ED940 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E81D8\n    ldr r1, _021ED95C ; =ov14_021E96A8\n    add r0, r4, #0\n    mov r2, #0x45\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021ED95C: .word ov14_021E96A8"
    );
    #endif
}

void ov14_021ED960(void) {
    ov14_021F1058();
}

void ov14_021ED96C(void) {
    /* Original at 0x021ED96C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4, #0x34]\n    ldr r1, _021ED9A8 ; =0x0000044D\n    ldrb r1, [r2, r1]\n    bl ov14_021E78AC\n    ldr r1, [r4, #0x34]\n    ldr r0, _021ED9A8 ; =0x0000044D\n    ldrb r2, [r1, r0]\n    ldr r0, [r4, #4]\n    cmp r2, #0x10\n    bhs _021ED98E\n    ldrb r1, [r4, #0x1f]\n    bl PCStorage_SetBoxWallpaper\n    b _021ED996\n    ldrb r1, [r4, #0x1f]\n    add r2, #0x10\n    bl PCStorage_SetBoxWallpaper\n    add r0, r4, #0\n    bl ov14_021F4530\n    ldrb r1, [r4, #0x1f]\n    add r0, r4, #0\n    bl ov14_021F4958\n    mov r0, #0x48\n    pop {r4, pc}\n    _021ED9A8: .word 0x0000044D"
    );
    #endif
}

void ov14_021ED9AC(void) {
    /* Original at 0x021ED9AC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    mov r3, #2\n    ldr r0, [r0, #0x18]\n    add r2, r1, #0\n    lsl r3, r3, #8\n    bl PaletteData_LoadPaletteSlotFromHardware\n    mov r3, #0\n    mov r2, #3\n    str r3, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, _021ED9E8 ; =0x00007FFF\n    mov r1, #1\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x34]\n    lsl r2, r2, #0xe\n    ldr r0, [r0, #0x18]\n    bl PaletteData_BeginPaletteFade\n    mov r0, #0x46\n    str r0, [r4, #0x30]\n    mov r0, #3\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _021ED9E8: .word 0x00007FFF"
    );
    #endif
}

void ov14_021ED9EC(void) {
    /* Original at 0x021ED9EC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r3, #0\n    ldr r0, _021EDA18 ; =0x00007FFF\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x34]\n    mov r2, #3\n    ldr r0, [r0, #0x18]\n    mov r1, #1\n    lsl r2, r2, #0xe\n    bl PaletteData_BeginPaletteFade\n    mov r0, #0x42\n    str r0, [r4, #0x30]\n    mov r0, #3\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _021EDA18: .word 0x00007FFF"
    );
    #endif
}

void ov14_021EDA1C(void) {
    ov14_021F2A18(0x75, 0xc, 9, 1);
}

void ov14_021EDA3C(void) {
    ov14_021F2A18();
}

void ov14_021EDA4C(void) {
    /* Original at 0x021EDA4C */
    /* Requires manual decompilation - 389 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov14_021F6A14\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EDB3C\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EDAB8\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EDDA4 ; =0x000040B8\n    add r0, r2, r1\n    add r1, r1, #4\n    add r1, r2, r1\n    bl System_GetTouchNewCoords\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021EDA96\n    ldr r1, _021EDDA8 ; =ov14_021F7D2C\n    add r0, r4, #0\n    mov r2, #4\n    bl ov14_021F5EE4\n    ldr r0, _021EDDAC ; =0x000005EB\n    bl PlaySE\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F0418\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021EDB1C\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r5, [r0]\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r0, [r4, #0x34]\n    bl ov14_021E884C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    ldr r1, _021EDDB0 ; =ov14_021EA130\n    add r0, r4, #0\n    mov r2, #0x59\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    lsl r1, r5, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r4, #0\n    bl ov14_021E765C\n    mov r0, #0x51\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021F6E8C\n    mov r1, #2\n    add r5, r0, #0\n    mvn r1, r1\n    cmp r5, r1\n    bhi _021EDB82\n    blo _021EDB50\n    b _021EDCBA\n    cmp r5, #0x26\n    bhi _021EDB76\n    sub r0, #0x1e\n    bmi _021EDB80\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EDB64: ; jump table\n    mov r0, #3\n    mvn r0, r0\n    cmp r5, r0\n    bne _021EDB80\n    b _021EDD6C\n    b _021EDDC4\n    add r0, r1, #1\n    cmp r5, r0\n    bhi _021EDB8E\n    bne _021EDB8C\n    b _021EDD12\n    b _021EDDC4\n    add r0, r1, #2\n    cmp r5, r0\n    bne _021EDB96\n    b _021EDD24\n    b _021EDDC4\n    ldr r0, [r4, #8]\n    bl Party_GetCount\n    cmp r0, #6\n    beq _021EDBAA\n    ldr r0, _021EDDB4 ; =0x000005DD\n    bl PlaySE\n    b _021EDBB0\n    ldr r0, _021EDDB8 ; =0x000005F3\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0xa7\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EDDB4 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x23\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0x97\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EDDB4 ; =0x000005DD\n    bl PlaySE\n    ldr r0, [r4, #0x34]\n    mov r1, #0x27\n    bl ov14_021F6654\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0x99\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EDDB4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0x9b\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r5, [r0]\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, _021EDDBC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0xa8\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EDDB4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    ldr r0, [r4, #0x34]\n    mov r1, #0x27\n    bl ov14_021F6654\n    add r0, r4, #0\n    bl ov14_021F1128\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EDDBC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #0x1e\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    add r0, r4, #0\n    mov r1, #0x51\n    bl ov14_021F028C\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EDDBC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #0x1e\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    add r0, r4, #0\n    mov r1, #0x51\n    bl ov14_021F0314\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #0x1e\n    bhs _021EDCD0\n    add r0, r4, #0\n    bl ov14_021E7588\n    b _021EDCEA\n    cmp r1, #0x22\n    beq _021EDCEA\n    cmp r1, #0x23\n    beq _021EDCEA\n    cmp r1, #0x24\n    beq _021EDCEA\n    cmp r1, #0x25\n    beq _021EDCEA\n    cmp r1, #0x26\n    beq _021EDCEA\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, _021EDDBC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x58\n    bl ov14_021F0244\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EDDB4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E765C\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x93\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EDDB4 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x94\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    cmp r0, #0x1e\n    bne _021EDE12\n    ldr r0, _021EDDC0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0x20\n    tst r0, r1\n    beq _021EDD50\n    ldr r0, _021EDDBC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #0x51\n    bl ov14_021F028C\n    pop {r3, r4, r5, pc}\n    mov r0, #0x10\n    tst r0, r1\n    beq _021EDE12\n    ldr r0, _021EDDBC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #0x51\n    bl ov14_021F0314\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #0x1e\n    bhs _021EDD82\n    add r0, r4, #0\n    bl ov14_021E7588\n    b _021EDD9C\n    cmp r1, #0x22\n    beq _021EDD9C\n    cmp r1, #0x23\n    beq _021EDD9C\n    cmp r1, #0x24\n    beq _021EDD9C\n    cmp r1, #0x25\n    beq _021EDD9C\n    cmp r1, #0x26\n    beq _021EDD9C\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, _021EDDBC ; =0x000005DC\n    bl PlaySE\n    b _021EDE12\n    _021EDDA4: .word 0x000040B8\n    _021EDDA8: .word ov14_021F7D2C\n    _021EDDAC: .word 0x000005EB\n    _021EDDB0: .word ov14_021EA130\n    _021EDDB4: .word 0x000005DD\n    _021EDDB8: .word 0x000005F3\n    _021EDDBC: .word 0x000005DC\n    _021EDDC0: .word gSystem\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EDE12\n    ldr r0, _021EDE18 ; =0x000005DD\n    bl PlaySE\n    ldr r1, _021EDE1C ; =ov14_021F7D2C\n    add r0, r4, #0\n    mov r2, #4\n    bl ov14_021F5EE4\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0x22\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    mov r1, #0x22\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F04D4\n    pop {r3, r4, r5, pc}\n    mov r0, #0x51\n    pop {r3, r4, r5, pc}\n    nop\n    _021EDE18: .word 0x000005DD\n    _021EDE1C: .word ov14_021F7D2C"
    );
    #endif
}

void ov14_021EDE20(void) {
    ov14_021F685C(0, 0, 0x27);
    ov14_021EDF90(r4);
}

void ov14_021EDE38(void) {
    /* Original at 0x021EDE38 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F3044\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7ED0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7EE0\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0x22\n    strb r1, [r0]\n    ldr r1, _021EDE6C ; =ov14_021E9518\n    add r0, r4, #0\n    mov r2, #0x54\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EDE6C: .word ov14_021E9518"
    );
    #endif
}

void ov14_021EDE70(void) {
    /* Original at 0x021EDE70 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F08BC\n    ldr r1, _021EDE84 ; =ov14_021E91E0\n    add r0, r4, #0\n    mov r2, #0x55\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EDE84: .word ov14_021E91E0"
    );
    #endif
}

void ov14_021EDE88(void) {
    /* Original at 0x021EDE88 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _021EDF00 ; =0x000005EA\n    bl PlaySE\n    add r1, r4, #0\n    ldr r0, [r4, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r1, r4, #0\n    ldr r0, [r4, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    add r0, r4, #0\n    mov r1, #0xff\n    add r0, #0x21\n    strb r1, [r0]\n    add r0, r4, #0\n    bl ov14_021E637C\n    add r0, r4, #0\n    bl ov14_021F08F0\n    add r0, r4, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7F4C\n    ldr r1, _021EDF04 ; =ov14_021E9518\n    add r0, r4, #0\n    mov r2, #0x56\n    bl ov14_021F0234\n    add sp, #4\n    pop {r3, r4, pc}\n    _021EDF00: .word 0x000005EA\n    _021EDF04: .word ov14_021E9518"
    );
    #endif
}

void ov14_021EDF08(void) {
    /* Original at 0x021EDF08 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r1, _021EDF24 ; =ov14_021E95B4\n    add r0, r4, #0\n    mov r2, #0x52\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EDF24: .word ov14_021E95B4"
    );
    #endif
}

void ov14_021EDF28(void) {
    /* Original at 0x021EDF28 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0xc]\n    add r0, #0xe4\n    ldr r4, [r0]\n    ldr r0, _021EDF8C ; =0x000005EA\n    bl PlaySE\n    add r0, r5, #0\n    bl ov14_021E637C\n    add r0, r5, #0\n    bl ov14_021F08F0\n    ldr r0, [r5, #0x34]\n    mov r1, #0x28\n    bl ov14_021F6678\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    cmp r1, #0xff\n    bne _021EDF66\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    b _021EDF72\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r4, #0x22\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x51\n    pop {r3, r4, r5, pc}\n    _021EDF8C: .word 0x000005EA"
    );
    #endif
}

void ov14_021EDF90(void) {
    ov14_021F2A18();
}

void ov14_021EDFA0(void) {
    /* Original at 0x021EDFA0 */
    /* Requires manual decompilation - 284 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov14_021F6A24\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EE0A4\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EE012\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EE254 ; =0x000040B8\n    add r0, r2, r1\n    add r1, r1, #4\n    add r1, r2, r1\n    bl System_GetTouchNewCoords\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021EDFEC\n    ldr r1, _021EE258 ; =ov14_021F7D1C\n    add r0, r4, #0\n    mov r2, #4\n    bl ov14_021F5EE4\n    ldr r0, _021EE25C ; =0x000005EB\n    bl PlaySE\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r5, #0x1e\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F0660\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021EE084\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    sub r0, #0x1e\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F5EB4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r0, [r4, #0x34]\n    bl ov14_021E884C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    ldr r1, _021EE260 ; =ov14_021EA130\n    add r0, r4, #0\n    mov r2, #0x70\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    lsl r1, r5, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r4, #0\n    bl ov14_021E765C\n    mov r0, #0x5b\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021F6BC0\n    mov r1, #2\n    add r5, r0, #0\n    mvn r1, r1\n    cmp r5, r1\n    bhi _021EE0E8\n    bhs _021EE1AA\n    cmp r5, #0xb\n    bhi _021EE0DE\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EE0C6: ; jump table\n    mov r0, #3\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EE18A\n    b _021EE1FA\n    add r0, r1, #1\n    cmp r5, r0\n    bhi _021EE0F2\n    beq _021EE1E8\n    b _021EE1FA\n    add r0, r1, #2\n    cmp r5, r0\n    bne _021EE0FA\n    b _021EE24E\n    b _021EE1FA\n    ldr r0, _021EE264 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0xa9\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EE264 ; =0x000005DD\n    bl PlaySE\n    mov r0, #8\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0x97\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EE264 ; =0x000005DD\n    bl PlaySE\n    ldr r0, [r4, #0x34]\n    mov r1, #0x27\n    bl ov14_021F6654\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0x99\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EE264 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0x9b\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    sub r0, #0x1e\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, _021EE268 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0xaa\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #6\n    bhi _021EE1A0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, _021EE268 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x5b\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #6\n    bhi _021EE1C0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, _021EE268 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x6f\n    bl ov14_021F0244\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EE264 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E765C\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x93\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EE264 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x94\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EE24E\n    ldr r0, _021EE264 ; =0x000005DD\n    bl PlaySE\n    ldr r1, _021EE258 ; =ov14_021F7D1C\n    add r0, r4, #0\n    mov r2, #4\n    bl ov14_021F5EE4\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #7\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    mov r1, #7\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r5, #0x1e\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F0794\n    pop {r3, r4, r5, pc}\n    mov r0, #0x5b\n    pop {r3, r4, r5, pc}\n    nop\n    _021EE254: .word 0x000040B8\n    _021EE258: .word ov14_021F7D1C\n    _021EE25C: .word 0x000005EB\n    _021EE260: .word ov14_021EA130\n    _021EE264: .word 0x000005DD\n    _021EE268: .word 0x000005DC"
    );
    #endif
}

void ov14_021EE26C(void) {
    /* Original at 0x021EE26C */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r4, [r1]\n    sub r4, #0x1e\n    add r1, r4, #0\n    bl ov14_021E6480\n    cmp r0, #0\n    bne _021EE29A\n    ldr r0, _021EE320 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0x25\n    bl ov14_021F67B0\n    mov r0, #0x5d\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021EE2D2\n    ldr r0, _021EE320 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #6\n    mov r3, #0x25\n    bl ov14_021F685C\n    mov r0, #0x5d\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _021EE2FA\n    ldr r0, _021EE320 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #5\n    mov r3, #0x25\n    bl ov14_021F685C\n    mov r0, #0x5d\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov14_021F3488\n    add r0, r5, #0\n    bl ov14_021F40DC\n    ldr r1, _021EE324 ; =ov14_021E96C8\n    add r0, r5, #0\n    mov r2, #0x5e\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021EE320: .word 0x000005F3\n    _021EE324: .word ov14_021E96C8"
    );
    #endif
}

void ov14_021EE328(void) {
    /* Original at 0x021EE328 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021EE330 ; =ov14_021F0234\n    ldr r1, _021EE334 ; =ov14_021E9450\n    mov r2, #0xe\n    bx r3\n    _021EE330: .word ov14_021F0234\n    _021EE334: .word ov14_021E9450"
    );
    #endif
}

void ov14_021EE338(void) {
    ov14_021F4BC0();
    ov14_021F4848(r4);
    ov14_021F48B4(r4);
    ov14_021F57B8(r4);
    ov14_021F10B4(r4, 0x5f);
}

void ov14_021EE35C(void) {
    /* Original at 0x021EE35C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F60A8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8560\n    ldr r1, _021EE37C ; =ov14_021E95C8\n    add r0, r4, #0\n    mov r2, #0x60\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EE37C: .word ov14_021E95C8"
    );
    #endif
}

void ov14_021EE380(void) {
    /* Original at 0x021EE380 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r4, #0x34]\n    ldr r2, _021EE3C4 ; =0x0000043C\n    str r1, [r0, r2]\n    ldr r3, [r4, #0x34]\n    add r0, r4, #0\n    ldr r2, [r3, r2]\n    mov r1, #1\n    bl ov14_021F6AC0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    ldr r0, [r4, #0x34]\n    mov r1, #0x25\n    bl ov14_021F6654\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #3\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r0, #0x61\n    pop {r4, pc}\n    nop\n    _021EE3C4: .word 0x0000043C"
    );
    #endif
}

void ov14_021EE3C8(void) {
    /* Original at 0x021EE3C8 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    mov r1, #2\n    mvn r1, r1\n    cmp r0, r1\n    bhi _021EE402\n    bhs _021EE472\n    cmp r0, #9\n    bhi _021EE4A4\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EE3EE: ; jump table\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    beq _021EE494\n    b _021EE4A4\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F1448\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F1448\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #2\n    bl ov14_021F1448\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #3\n    bl ov14_021F1448\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #4\n    bl ov14_021F1448\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #5\n    bl ov14_021F1448\n    pop {r4, pc}\n    ldr r0, _021EE4A8 ; =0x000005DC\n    bl PlaySE\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov14_021F1504\n    pop {r4, pc}\n    ldr r0, _021EE4A8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F1504\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov14_021F1540\n    pop {r4, pc}\n    ldr r0, _021EE4A8 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _021EE4A4\n    add r0, r4, #0\n    mov r1, #0x71\n    bl ov14_021F0244\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, _021EE4A8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F1534\n    pop {r4, pc}\n    mov r0, #0x61\n    pop {r4, pc}\n    _021EE4A8: .word 0x000005DC"
    );
    #endif
}

void ov14_021EE4AC(void) {
    /* Original at 0x021EE4AC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8588\n    ldr r1, _021EE4D4 ; =ov14_021E9604\n    add r0, r4, #0\n    mov r2, #0x63\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021EE4D4: .word ov14_021E9604"
    );
    #endif
}

void ov14_021EE4D8(void) {
    ov14_021F10DC();
}

void ov14_021EE4E4(void) {
    /* Original at 0x021EE4E4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F4CA0\n    ldr r1, _021EE4F8 ; =ov14_021E98AC\n    add r0, r4, #0\n    mov r2, #0x65\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EE4F8: .word ov14_021E98AC"
    );
    #endif
}

void ov14_021EE4FC(void) {
    /* Original at 0x021EE4FC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #7\n    bl ov14_021F6AC0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    bl ov14_021F3F6C\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F40E8\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov14_021F3488\n    mov r0, #0xe\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021EE538(void) {
    /* Original at 0x021EE538 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8588\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r1, _021EE574 ; =ov14_021E99F0\n    add r0, r4, #0\n    mov r2, #0x67\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EE574: .word ov14_021E99F0"
    );
    #endif
}

void ov14_021EE578(void) {
    /* Original at 0x021EE578 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x25\n    ldrb r1, [r1]\n    ldr r0, [r4, #4]\n    bl PCStorage_CountMonsAndEggsInBox\n    cmp r0, #0x1e\n    bne _021EE5A0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #4\n    mov r3, #0x25\n    bl ov14_021F685C\n    mov r0, #0x5e\n    str r0, [r4, #0x30]\n    mov r0, #6\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov14_021F3488\n    ldr r0, [r4, #0x34]\n    mov r1, #0x27\n    bl ov14_021F6654\n    add r0, r4, #0\n    bl ov14_021F4CA0\n    ldr r1, _021EE5C4 ; =ov14_021E98AC\n    add r0, r4, #0\n    mov r2, #0x68\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EE5C4: .word ov14_021E98AC"
    );
    #endif
}

void ov14_021EE5C8(void) {
    /* Original at 0x021EE5C8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8048\n    ldr r1, _021EE5E4 ; =ov14_021E952C\n    add r0, r4, #0\n    mov r2, #0x69\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EE5E4: .word ov14_021E952C"
    );
    #endif
}

void ov14_021EE5E8(void) {
    /* Original at 0x021EE5E8 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x25\n    ldrb r2, [r4, #0x1f]\n    ldrb r1, [r1]\n    strb r1, [r4, #0x1f]\n    add r1, r4, #0\n    add r1, #0x25\n    ldrb r1, [r1]\n    cmp r2, r1\n    bne _021EE604\n    mov r0, #0x6a\n    pop {r4, pc}\n    cmp r2, r1\n    ldrb r1, [r4, #0x1f]\n    bls _021EE62E\n    bl ov14_021F2DE8\n    ldrb r1, [r4, #0x1f]\n    add r0, r4, #0\n    bl ov14_021E7930\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0\n    bl ov14_021E783C\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r1, _021EE65C ; =ov14_021E92AC\n    b _021EE650\n    bl ov14_021F2DE8\n    ldrb r1, [r4, #0x1f]\n    add r0, r4, #0\n    bl ov14_021E7930\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #1\n    bl ov14_021E783C\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r1, _021EE660 ; =ov14_021E9370\n    add r0, r4, #0\n    mov r2, #0x6a\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021EE65C: .word ov14_021E92AC\n    _021EE660: .word ov14_021E9370"
    );
    #endif
}

void ov14_021EE664(void) {
    /* Original at 0x021EE664 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    mov r2, #2\n    add r1, #0x22\n    strb r2, [r1]\n    bl ov14_021F08BC\n    ldr r1, _021EE680 ; =ov14_021E9234\n    add r0, r4, #0\n    mov r2, #0x6b\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EE680: .word ov14_021E9234"
    );
    #endif
}

void ov14_021EE684(void) {
    /* Original at 0x021EE684 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r4, [r0, #0xc]\n    ldr r0, _021EE6C8 ; =0x000005EA\n    bl PlaySE\n    add r0, r5, #0\n    bl ov14_021E637C\n    add r1, r4, #0\n    add r1, #0xe4\n    add r4, #0xe8\n    ldr r1, [r1]\n    ldr r2, [r4]\n    add r0, r5, #0\n    bl ov14_021E6548\n    add r0, r5, #0\n    bl ov14_021F08F0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8094\n    ldr r1, _021EE6CC ; =ov14_021E954C\n    add r0, r5, #0\n    mov r2, #0x6c\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021EE6C8: .word 0x000005EA\n    _021EE6CC: .word ov14_021E954C"
    );
    #endif
}

void ov14_021EE6D0(void) {
    /* Original at 0x021EE6D0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl ov14_021F5EB4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r1, _021EE6F4 ; =ov14_021E95B4\n    add r0, r4, #0\n    mov r2, #0x6d\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021EE6F4: .word ov14_021E95B4"
    );
    #endif
}

void ov14_021EE6F8(void) {
    /* Original at 0x021EE6F8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0\n    add r2, r1, #0\n    add r4, r0, #0\n    bl ov14_021F6AC0\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    add r0, r4, #0\n    mov r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    mov r0, #0x5b\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021EE728(void) {
    /* Original at 0x021EE728 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r4, [r0, #0xc]\n    ldr r0, _021EE7B0 ; =0x000005EA\n    bl PlaySE\n    add r0, r5, #0\n    bl ov14_021E637C\n    add r1, r4, #0\n    add r1, #0xe4\n    add r4, #0xe8\n    ldr r1, [r1]\n    ldr r2, [r4]\n    add r0, r5, #0\n    bl ov14_021E6548\n    add r0, r5, #0\n    bl ov14_021F08F0\n    ldr r0, [r5, #0x34]\n    mov r1, #0x28\n    bl ov14_021F6678\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    cmp r1, #0xff\n    bne _021EE78E\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r5, #0\n    mov r1, #0x1e\n    bl ov14_021E7588\n    b _021EE7AC\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #0x27\n    bl ov14_021F685C\n    ldr r0, [r5, #0x34]\n    mov r1, #7\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x5b\n    pop {r3, r4, r5, pc}\n    _021EE7B0: .word 0x000005EA"
    );
    #endif
}

void ov14_021EE7B4(void) {
    Heap_Free();
}

void ov14_021EE7C4(void) {
    Heap_Free();
}

void ov14_021EE7D4(void) {
    Heap_Free();
}

void ov14_021EE7E4(void) {
    Heap_Free();
}

void ov14_021EE7F4(void) {
    /* Original at 0x021EE7F4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0xc]\n    bl Heap_Free\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r0, #0x5b\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021EE810(void) {
    Heap_Free();
}

void ov14_021EE820(void) {
    Heap_Free();
}

void ov14_021EE830(void) {
    Heap_Free();
}

void ov14_021EE840(void) {
    Heap_Free();
}

void ov14_021EE850(void) {
    Heap_Free();
}

void ov14_021EE860(void) {
    /* Original at 0x021EE860 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0xc]\n    bl Heap_Free\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r0, #0x51\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021EE87C(void) {
    /* Original at 0x021EE87C */
    /* Requires manual decompilation - 356 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov14_021F6A14\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EE976\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EE8CE\n    ldr r0, _021EEBDC ; =0x000005EB\n    bl PlaySE\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EEBE0 ; =0x000040B8\n    add r0, r2, r1\n    add r1, r1, #4\n    add r1, r2, r1\n    bl System_GetTouchNewCoords\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F18B0\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021EE956\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r5, [r0]\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    add r0, r4, #0\n    bl ov14_021F40DC\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EEBE4 ; =0x000088C8\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _021EE94A\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88F8\n    ldr r1, _021EEBE8 ; =ov14_021EA674\n    add r0, r4, #0\n    mov r2, #0x76\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    lsl r1, r5, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r4, #0\n    bl ov14_021E765C\n    mov r0, #0x75\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021F74B0\n    mov r1, #2\n    add r5, r0, #0\n    mvn r1, r1\n    cmp r5, r1\n    bhi _021EE9BA\n    blo _021EE98A\n    b _021EEB08\n    cmp r5, #0x25\n    bhi _021EE9AE\n    sub r0, #0x1e\n    bmi _021EE9B8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EE99E: ; jump table\n    mov r0, #3\n    mvn r0, r0\n    cmp r5, r0\n    bne _021EE9B8\n    b _021EEB66\n    b _021EEB92\n    add r0, r1, #1\n    cmp r5, r0\n    bhi _021EE9C6\n    bne _021EE9C4\n    b _021EEB54\n    b _021EEB92\n    add r0, r1, #2\n    cmp r5, r0\n    beq _021EEABE\n    b _021EEB92\n    ldr r0, _021EEBEC ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    bl ov14_021F1128\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EEBF0 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #0x1e\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #0x75\n    bl ov14_021F028C\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EEBF0 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #0x1e\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #0x75\n    bl ov14_021F0314\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EEBF4 ; =0x00000632\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #0xab\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EEBF4 ; =0x00000632\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #9\n    mov r2, #0xac\n    bl ov14_021F2330\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EEBEC ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0xad\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EEBF0 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r5, [r0]\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0xae\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    cmp r0, #0x1e\n    beq _021EEACC\n    b _021EEBD6\n    ldr r0, _021EEBF8 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0x20\n    tst r0, r1\n    beq _021EEAEC\n    ldr r0, _021EEBF0 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #0x75\n    bl ov14_021F028C\n    pop {r3, r4, r5, pc}\n    mov r0, #0x10\n    tst r0, r1\n    beq _021EEBD6\n    ldr r0, _021EEBF0 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #0x75\n    bl ov14_021F0314\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #0x1e\n    bhs _021EEB1E\n    add r0, r4, #0\n    bl ov14_021E7588\n    b _021EEB2C\n    cmp r1, #0x24\n    beq _021EEB2C\n    cmp r1, #0x25\n    beq _021EEB2C\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, _021EEBF0 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x76\n    bl ov14_021F0244\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EEBEC ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E765C\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x93\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EEBEC ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x94\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #0x1e\n    bhs _021EEB7C\n    add r0, r4, #0\n    bl ov14_021E7588\n    b _021EEB8A\n    cmp r1, #0x24\n    beq _021EEB8A\n    cmp r1, #0x25\n    beq _021EEB8A\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, _021EEBF0 ; =0x000005DC\n    bl PlaySE\n    b _021EEBD6\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EEBD6\n    ldr r0, _021EEBEC ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0x24\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    mov r1, #0x24\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F1808\n    pop {r3, r4, r5, pc}\n    mov r0, #0x75\n    pop {r3, r4, r5, pc}\n    nop\n    _021EEBDC: .word 0x000005EB\n    _021EEBE0: .word 0x000040B8\n    _021EEBE4: .word 0x000088C8\n    _021EEBE8: .word ov14_021EA674\n    _021EEBEC: .word 0x000005DD\n    _021EEBF0: .word 0x000005DC\n    _021EEBF4: .word 0x00000632\n    _021EEBF8: .word gSystem"
    );
    #endif
}

void ov14_021EEBFC(void) {
    /* Original at 0x021EEBFC */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A44\n    cmp r0, #1\n    bne _021EEC30\n    add r0, r4, #0\n    bl ov14_021F40DC\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88F8\n    ldr r0, [r4, #0x34]\n    mov r1, #0x25\n    bl ov14_021F6654\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021EEC72\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    add r0, r4, #0\n    mov r1, #0x81\n    mov r2, #1\n    bl ov14_021F3488\n    b _021EEC7C\n    add r0, r4, #0\n    mov r1, #0x82\n    mov r2, #1\n    bl ov14_021F3488\n    ldr r1, _021EEC88 ; =ov14_021E9450\n    add r0, r4, #0\n    mov r2, #0x7b\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021EEC88: .word ov14_021E9450"
    );
    #endif
}

void ov14_021EEC8C(void) {
    Heap_Free();
}

void ov14_021EEC9C(void) {
    /* Original at 0x021EEC9C */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    blo _021EED0C\n    ldr r1, [r5, #0x34]\n    ldr r0, _021EED20 ; =0x000088C8\n    ldrh r0, [r1, r0]\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021EED0C\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    sub r0, #0x1e\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, _021EED24 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #0x25\n    bl ov14_021F68C0\n    mov r0, #0x77\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0x25\n    bl ov14_021F68C0\n    add r0, r5, #0\n    mov r1, #2\n    bl ov14_021F0254\n    pop {r3, r4, r5, pc}\n    _021EED20: .word 0x000088C8\n    _021EED24: .word 0x000005F3"
    );
    #endif
}

void ov14_021EED28(void) {
    /* Original at 0x021EED28 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #0\n    bne _021EEDAE\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r4, [r0]\n    cmp r4, #0x1e\n    blo _021EED48\n    sub r4, #0x1e\n    lsl r0, r4, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0x25\n    bl ov14_021F68C0\n    add r0, r5, #0\n    mov r1, #0\n    bl ov14_021F5FBC\n    ldr r1, [r5, #0x34]\n    ldr r0, _021EEDB4 ; =0x000088C8\n    mov r2, #0\n    strh r2, [r1, r0]\n    mov r0, #0x77\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    mov r0, #0x79\n    pop {r3, r4, r5, pc}\n    nop\n    _021EEDB4: .word 0x000088C8"
    );
    #endif
}

void ov14_021EEDB8(void) {
    /* Original at 0x021EEDB8 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r4, [r1]\n    cmp r4, #0x1e\n    bhs _021EEDEA\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    add r0, r5, #0\n    mov r1, #0x81\n    mov r2, #1\n    bl ov14_021F3488\n    b _021EEDF8\n    sub r4, #0x1e\n    lsl r1, r4, #0x10\n    lsr r4, r1, #0x10\n    mov r1, #0x82\n    mov r2, #1\n    bl ov14_021F3488\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    add r0, r5, #0\n    bl ov14_021F40DC\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88F8\n    ldr r0, [r5, #0x34]\n    mov r1, #0x25\n    bl ov14_021F6654\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021EEE78\n    add r0, r5, #0\n    mov r1, #0x81\n    mov r2, #1\n    bl ov14_021F3488\n    b _021EEE82\n    add r0, r5, #0\n    mov r1, #0x82\n    mov r2, #1\n    bl ov14_021F3488\n    ldr r1, _021EEE90 ; =ov14_021E9450\n    add r0, r5, #0\n    mov r2, #0x7b\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021EEE90: .word ov14_021E9450"
    );
    #endif
}

void ov14_021EEE94(void) {
    /* Original at 0x021EEE94 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #1\n    bne _021EEEA8\n    mov r0, #0x7b\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #1\n    bl ov14_021F2A18\n    add r4, #0x21\n    ldrb r0, [r4]\n    cmp r0, #0x1e\n    blo _021EEED0\n    mov r0, #0x8b\n    pop {r4, pc}\n    mov r0, #0x75\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021EEED4(void) {
    /* Original at 0x021EEED4 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x21\n    ldrb r4, [r0]\n    cmp r4, #0x1e\n    blo _021EEEE6\n    sub r4, #0x1e\n    lsl r0, r4, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, _021EEF30 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0x25\n    bl ov14_021F68C0\n    mov r0, #0x77\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    _021EEF30: .word 0x000005F3"
    );
    #endif
}

void ov14_021EEF34(void) {
    /* Original at 0x021EEF34 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x21\n    ldrb r4, [r0]\n    cmp r4, #0x1e\n    blo _021EEF46\n    sub r4, #0x1e\n    lsl r0, r4, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    ldrh r1, [r5, #0x1c]\n    add r0, r5, #0\n    mov r2, #0x25\n    bl ov14_021F6768\n    mov r0, #0x77\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021EEF8C(void) {
    /* Original at 0x021EEF8C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r2, [r5, #0x34]\n    add r0, #0x21\n    ldr r4, [r2, #0xc]\n    ldrb r0, [r0]\n    ldrh r1, [r4]\n    cmp r1, r0\n    beq _021EEFA6\n    ldr r0, _021EF01C ; =0x000088C8\n    ldrh r0, [r2, r0]\n    cmp r0, #0\n    bne _021EEFE2\n    add r0, r5, #0\n    bl ov14_021F1F38\n    ldr r1, [r5, #0x34]\n    ldr r0, _021EF01C ; =0x000088C8\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _021EEFCA\n    ldr r0, _021EF020 ; =0x000005EA\n    bl PlaySE\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    ldr r0, [r5, #0x34]\n    mov r1, #0x24\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x75\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF020 ; =0x000005EA\n    bl PlaySE\n    ldrh r1, [r4]\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #1\n    bl ov14_021F34C8\n    add r0, r5, #0\n    bl ov14_021F40DC\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    mov r0, #0x7f\n    pop {r3, r4, r5, pc}\n    _021EF01C: .word 0x000088C8\n    _021EF020: .word 0x000005EA"
    );
    #endif
}

void ov14_021EF024(void) {
    /* Original at 0x021EF024 */
    /* Requires manual decompilation - 150 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #1\n    bne _021EF038\n    mov r0, #0x7f\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    mov r2, #6\n    ldr r4, [r0, #0xc]\n    add r0, r5, #0\n    ldrh r1, [r4]\n    mov r3, #0\n    bl ov14_021E6070\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    ldrh r1, [r4]\n    ldr r6, [r5, #0x34]\n    ldr r3, _021EF17C ; =0x000088C8\n    add r0, r5, #0\n    mov r2, #6\n    add r3, r6, r3\n    bl ov14_021E6094\n    ldrb r1, [r5, #0x1f]\n    ldrh r2, [r4]\n    add r0, r5, #0\n    bl ov14_021E60C0\n    bl ov14_021E64D0\n    cmp r0, #1\n    bne _021EF092\n    ldrh r2, [r4]\n    ldr r3, [r5, #0x34]\n    ldrb r1, [r5, #0x1f]\n    add r6, r3, r2\n    ldr r3, _021EF180 ; =0x00004094\n    add r0, r5, #0\n    ldrb r3, [r6, r3]\n    bl ov14_021F2ED0\n    ldrh r1, [r4]\n    add r0, r5, #0\n    bl ov14_021E7588\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    ldr r3, _021EF17C ; =0x000088C8\n    add r1, #0x21\n    strh r7, [r0, r3]\n    ldr r6, [r5, #0x34]\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #6\n    add r3, r6, r3\n    bl ov14_021E6094\n    add r2, r5, #0\n    add r2, #0x21\n    ldrb r1, [r5, #0x1f]\n    ldrb r2, [r2]\n    add r0, r5, #0\n    bl ov14_021E60C0\n    bl ov14_021E64D0\n    cmp r0, #1\n    bne _021EF0DE\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r2, [r0]\n    ldr r3, [r5, #0x34]\n    ldrb r1, [r5, #0x1f]\n    add r6, r3, r2\n    ldr r3, _021EF180 ; =0x00004094\n    add r0, r5, #0\n    ldrb r3, [r6, r3]\n    bl ov14_021F2ED0\n    ldr r1, [r5, #0x34]\n    ldr r0, _021EF17C ; =0x000088C8\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    bne _021EF13E\n    ldrh r1, [r4]\n    add r0, r5, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F1F38\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r1, _021EF184 ; =ov14_021E94BC\n    add r0, r5, #0\n    mov r2, #0x75\n    bl ov14_021F0234\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021EF188 ; =0x000005EB\n    bl PlaySE\n    ldr r0, [r5, #0x34]\n    ldr r1, _021EF17C ; =0x000088C8\n    ldrh r1, [r0, r1]\n    bl ov14_021F3844\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    bl ov14_021F39D0\n    ldr r1, _021EF18C ; =ov14_021EA728\n    add r0, r5, #0\n    mov r2, #0x80\n    bl ov14_021F0234\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EF17C: .word 0x000088C8\n    _021EF180: .word 0x00004094\n    _021EF184: .word ov14_021E94BC\n    _021EF188: .word 0x000005EB\n    _021EF18C: .word ov14_021EA728"
    );
    #endif
}

void ov14_021EF190(void) {
    /* Original at 0x021EF190 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    ldr r4, [r0, #0xc]\n    ldrh r1, [r4]\n    bl ov14_021F34C8\n    ldr r0, _021EF1E8 ; =0x000005EA\n    bl PlaySE\n    add r0, r5, #0\n    bl ov14_021F40DC\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r5, #0\n    ldrh r1, [r4]\n    add r0, #0x21\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F1F38\n    mov r0, #0x81\n    pop {r3, r4, r5, pc}\n    _021EF1E8: .word 0x000005EA"
    );
    #endif
}

void ov14_021EF1EC(void) {
    /* Original at 0x021EF1EC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #1\n    bne _021EF200\n    mov r0, #0x81\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r1, _021EF244 ; =ov14_021E94BC\n    add r0, r4, #0\n    mov r2, #0x75\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021EF244: .word ov14_021E94BC"
    );
    #endif
}

void ov14_021EF248(void) {
    /* Original at 0x021EF248 */
    /* Requires manual decompilation - 473 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov14_021F6A34\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EF2E2\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EF28C\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r5, #0x1e\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F19F0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, [r4, #0x34]\n    add r5, #0x1e\n    lsl r1, r5, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021EF2C4\n    add r0, r4, #0\n    mov r1, #0x82\n    bl ov14_021F0EE8\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021EF2DE\n    add r0, r4, #0\n    mov r1, #0x82\n    bl ov14_021F0D34\n    pop {r3, r4, r5, pc}\n    mov r0, #0x82\n    pop {r3, r4, r5, pc}\n    bl ov14_021F6A14\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EF370\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EF31C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F19F0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, [r4, #0x34]\n    lsl r1, r5, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021EF352\n    add r0, r4, #0\n    mov r1, #0x82\n    bl ov14_021F0EE8\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021EF36C\n    add r0, r4, #0\n    mov r1, #0x82\n    bl ov14_021F0D34\n    pop {r3, r4, r5, pc}\n    mov r0, #0x82\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021F7B7C\n    cmp r0, #1\n    bne _021EF3B8\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EF3B4\n    ldr r0, _021EF6C8 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x21\n    strb r5, [r0]\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x26\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #0xf\n    mov r2, #0x97\n    bl ov14_021F2330\n    pop {r3, r4, r5, pc}\n    mov r0, #0x82\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021F70C0\n    mov r1, #2\n    add r5, r0, #0\n    mvn r1, r1\n    cmp r5, r1\n    bhi _021EF3FE\n    blo _021EF3CC\n    b _021EF5A6\n    cmp r5, #0x2d\n    bhi _021EF3F4\n    sub r0, #0x24\n    bmi _021EF3FC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EF3E0: ; jump table\n    mov r0, #3\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EF410\n    b _021EF6A2\n    add r0, r1, #1\n    cmp r5, r0\n    bhi _021EF40A\n    bne _021EF408\n    b _021EF64C\n    b _021EF6A2\n    add r0, r1, #2\n    cmp r5, r0\n    bne _021EF412\n    b _021EF6C4\n    b _021EF6A2\n    ldr r0, _021EF6C8 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF6C8 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF6C8 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #2\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF6C8 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #3\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF6C8 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #4\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF6C8 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #5\n    bl ov14_021F0D58\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF6CC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov14_021F1004\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r4, #0x34]\n    add r1, #0x25\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021EF4EC\n    add r0, r4, #0\n    mov r1, #0x82\n    bl ov14_021F0EE8\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021EF506\n    add r0, r4, #0\n    mov r1, #0x82\n    bl ov14_021F0D34\n    pop {r3, r4, r5, pc}\n    mov r0, #0x82\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF6CC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F1004\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r4, #0x34]\n    add r1, #0x25\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021EF55C\n    add r0, r4, #0\n    mov r1, #0x82\n    bl ov14_021F0EE8\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021EF576\n    add r0, r4, #0\n    mov r1, #0x82\n    bl ov14_021F0D34\n    pop {r3, r4, r5, pc}\n    mov r0, #0x82\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF6CC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r4, #0x34]\n    add r1, #0x25\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #0xaf\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #0x24\n    bhs _021EF600\n    add r0, r4, #0\n    bl ov14_021E7588\n    cmp r0, #1\n    ldr r1, [r4, #0x34]\n    bne _021EF5E4\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #0\n    bne _021EF622\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F6408\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8620\n    b _021EF622\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021EF622\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    b _021EF622\n    add r0, r4, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021EF622\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    ldr r0, _021EF6CC ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _021EF6C4\n    add r0, r4, #0\n    mov r1, #0x83\n    bl ov14_021F0244\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF6D0 ; =0x00000633\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xa1\n    bl ov14_021F2490\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #0\n    bne _021EF66E\n    ldr r0, _021EF6D0 ; =0x00000633\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xa1\n    bl ov14_021F2490\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF6CC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r4, #0x34]\n    add r1, #0x25\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r4, #0\n    mov r1, #0x82\n    bl ov14_021F0EE8\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EF6C4\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021E7588\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F1B4C\n    pop {r3, r4, r5, pc}\n    mov r0, #0x82\n    pop {r3, r4, r5, pc}\n    _021EF6C8: .word 0x000005DD\n    _021EF6CC: .word 0x000005DC\n    _021EF6D0: .word 0x00000633"
    );
    #endif
}

void ov14_021EF6D4(void) {
    Heap_Free();
}

void ov14_021EF6E4(void) {
    /* Original at 0x021EF6E4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F40DC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88F8\n    mov r0, #0x85\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021EF6FC(void) {
    /* Original at 0x021EF6FC */
    /* Requires manual decompilation - 181 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r1, [r5, #0x34]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldr r4, [r1, #0xc]\n    mov r1, #0x10\n    bl sub_020199E4\n    cmp r0, #0\n    beq _021EF718\n    mov r0, #0x85\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r0, #0x21\n    ldrh r1, [r4]\n    ldrb r0, [r0]\n    cmp r1, r0\n    bne _021EF784\n    add r0, r5, #0\n    ldrh r4, [r4, #2]\n    bl ov14_021F1F38\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r1, [r5, #0x34]\n    ldr r0, _021EF898 ; =0x000088C8\n    ldrh r0, [r1, r0]\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021EF776\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r4, r0\n    beq _021EF776\n    ldr r0, _021EF89C ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0x25\n    bl ov14_021F6730\n    mov r0, #0x87\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x82\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #1\n    bl ov14_021F34C8\n    ldrh r1, [r4]\n    add r0, r5, #0\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    ldrh r1, [r4]\n    ldr r6, [r5, #0x34]\n    ldr r3, _021EF898 ; =0x000088C8\n    add r0, r5, #0\n    mov r2, #6\n    add r3, r6, r3\n    bl ov14_021E6094\n    ldrb r1, [r5, #0x1f]\n    ldrh r2, [r4]\n    add r0, r5, #0\n    bl ov14_021E60C0\n    bl ov14_021E64D0\n    cmp r0, #1\n    bne _021EF7DE\n    ldrh r2, [r4]\n    ldr r3, [r5, #0x34]\n    ldrb r1, [r5, #0x1f]\n    add r6, r3, r2\n    ldr r3, _021EF8A0 ; =0x00004094\n    add r0, r5, #0\n    ldrb r3, [r6, r3]\n    bl ov14_021F2ED0\n    ldrh r1, [r4]\n    add r0, r5, #0\n    bl ov14_021E7588\n    ldrh r1, [r4]\n    ldr r0, [r5, #0x34]\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    ldr r3, _021EF898 ; =0x000088C8\n    add r1, #0x21\n    strh r7, [r0, r3]\n    ldr r6, [r5, #0x34]\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #6\n    add r3, r6, r3\n    bl ov14_021E6094\n    add r2, r5, #0\n    add r2, #0x21\n    ldrb r1, [r5, #0x1f]\n    ldrb r2, [r2]\n    add r0, r5, #0\n    bl ov14_021E60C0\n    bl ov14_021E64D0\n    cmp r0, #1\n    bne _021EF838\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r2, [r0]\n    ldr r3, [r5, #0x34]\n    ldrb r1, [r5, #0x1f]\n    add r6, r3, r2\n    ldr r3, _021EF8A0 ; =0x00004094\n    add r0, r5, #0\n    ldrb r3, [r6, r3]\n    bl ov14_021F2ED0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021EF898 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    bne _021EF85E\n    ldrh r1, [r4]\n    add r0, r5, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F1F38\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x82\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov14_021F3844\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    bl ov14_021F39D0\n    ldr r0, _021EF8A4 ; =0x000005EB\n    bl PlaySE\n    ldr r1, _021EF8A8 ; =ov14_021EA928\n    add r0, r5, #0\n    mov r2, #0x86\n    bl ov14_021F0234\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EF898: .word 0x000088C8\n    _021EF89C: .word 0x000005F3\n    _021EF8A0: .word 0x00004094\n    _021EF8A4: .word 0x000005EB\n    _021EF8A8: .word ov14_021EA928"
    );
    #endif
}

void ov14_021EF8AC(void) {
    /* Original at 0x021EF8AC */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    ldr r7, [r0, #0xc]\n    ldrh r1, [r7]\n    bl ov14_021F34C8\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r6, [r0]\n    add r0, r5, #0\n    ldrh r4, [r7, #2]\n    ldrh r1, [r7]\n    add r0, #0x21\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F1F38\n    ldr r3, [r5, #0x34]\n    ldr r1, _021EF918 ; =0x000088C8\n    mov r2, #0\n    ldrh r0, [r3, r1]\n    strh r2, [r3, r1]\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021EF908\n    cmp r4, r6\n    beq _021EF908\n    ldr r0, _021EF91C ; =0x000005F3\n    bl PlaySE\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r5, #0\n    mov r1, #0x25\n    bl ov14_021F6730\n    mov r0, #0x87\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x82\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EF918: .word 0x000088C8\n    _021EF91C: .word 0x000005F3"
    );
    #endif
}

void ov14_021EF920(void) {
    /* Original at 0x021EF920 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0x25\n    bl ov14_021F6688\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x82\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021EF93C(void) {
    /* Original at 0x021EF93C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov14_021F7A50\n    add r4, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_IsButtonInputMode\n    cmp r0, #0\n    bne _021EF956\n    mov r4, #1\n    mvn r4, r4\n    cmp r4, #0x24\n    bhi _021EF95E\n    beq _021EF990\n    b _021EF9A0\n    add r0, r4, #4\n    cmp r0, #3\n    bhi _021EF9A0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EF970: ; jump table\n    ldr r0, _021EF9B4 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0x89\n    bl ov14_021F0244\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF9B4 ; =0x000005DC\n    bl PlaySE\n    b _021EF9B0\n    ldr r0, _021EF9B8 ; =0x000005EA\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0xff\n    bl ov14_021F1C4C\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EF9B8 ; =0x000005EA\n    bl PlaySE\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F1C4C\n    pop {r3, r4, r5, pc}\n    mov r0, #0x88\n    pop {r3, r4, r5, pc}\n    _021EF9B4: .word 0x000005DC\n    _021EF9B8: .word 0x000005EA"
    );
    #endif
}

void ov14_021EF9BC(void) {
    Heap_Free();
}

void ov14_021EF9CC(void) {
    /* Original at 0x021EF9CC */
    /* Requires manual decompilation - 172 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EFB48 ; =0x0000044C\n    mov r2, #0\n    ldrb r1, [r0, r1]\n    bl ov14_021F34C8\n    ldr r0, [r4, #0x34]\n    ldr r2, _021EFB48 ; =0x0000044C\n    ldr r3, _021EFB4C ; =0x000088CA\n    ldrb r1, [r0, r2]\n    ldrh r5, [r0, r3]\n    cmp r1, r5\n    bne _021EFA12\n    mov r5, #0\n    sub r1, r3, #2\n    strh r5, [r0, r1]\n    ldr r1, [r4, #0x34]\n    add r0, r4, #0\n    ldrb r1, [r1, r2]\n    bl ov14_021E7588\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8620\n    ldr r1, _021EFB50 ; =ov14_021E9970\n    add r0, r4, #0\n    mov r2, #0x82\n    bl ov14_021F0234\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    ldr r3, [r4, #0x34]\n    ldr r1, _021EFB48 ; =0x0000044C\n    ldr r6, _021EFB54 ; =0x000088C8\n    ldrb r1, [r3, r1]\n    add r0, r4, #0\n    mov r2, #6\n    add r3, r3, r6\n    bl ov14_021E6094\n    ldr r3, [r4, #0x34]\n    ldr r2, _021EFB48 ; =0x0000044C\n    ldrb r1, [r4, #0x1f]\n    ldrb r2, [r3, r2]\n    add r0, r4, #0\n    bl ov14_021E60C0\n    bl ov14_021E64D0\n    cmp r0, #1\n    bne _021EFA5C\n    ldr r3, [r4, #0x34]\n    ldr r0, _021EFB48 ; =0x0000044C\n    ldrb r1, [r4, #0x1f]\n    ldrb r2, [r3, r0]\n    add r0, r4, #0\n    add r6, r3, r2\n    ldr r3, _021EFB58 ; =0x00004094\n    ldrb r3, [r6, r3]\n    bl ov14_021F2ED0\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EFB48 ; =0x0000044C\n    add r0, r4, #0\n    ldrb r1, [r2, r1]\n    bl ov14_021E7588\n    ldr r3, _021EFB54 ; =0x000088C8\n    ldr r0, [r4, #0x34]\n    add r1, r3, #2\n    strh r5, [r0, r3]\n    ldr r5, [r4, #0x34]\n    add r0, r4, #0\n    ldrh r1, [r5, r1]\n    mov r2, #6\n    add r3, r5, r3\n    bl ov14_021E6094\n    ldr r3, [r4, #0x34]\n    ldr r2, _021EFB4C ; =0x000088CA\n    ldrb r1, [r4, #0x1f]\n    ldrh r2, [r3, r2]\n    add r0, r4, #0\n    bl ov14_021E60C0\n    bl ov14_021E64D0\n    cmp r0, #1\n    bne _021EFAA8\n    ldr r3, [r4, #0x34]\n    ldr r0, _021EFB4C ; =0x000088CA\n    ldrb r1, [r4, #0x1f]\n    ldrh r2, [r3, r0]\n    add r0, r4, #0\n    add r5, r3, r2\n    ldr r3, _021EFB58 ; =0x00004094\n    ldrb r3, [r5, r3]\n    bl ov14_021F2ED0\n    ldr r2, [r4, #0x34]\n    ldr r0, _021EFB54 ; =0x000088C8\n    ldrh r0, [r2, r0]\n    cmp r0, #0\n    bne _021EFAC8\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r2, r0]\n    bl ov14_021E8620\n    ldr r1, _021EFB50 ; =ov14_021E9970\n    add r0, r4, #0\n    mov r2, #0x82\n    bl ov14_021F0234\n    pop {r4, r5, r6, pc}\n    ldr r0, _021EFB5C ; =0x0000044B\n    mov r1, #1\n    strb r1, [r2, r0]\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EFB48 ; =0x0000044C\n    mov r2, #2\n    ldrb r1, [r0, r1]\n    bl ov14_021F39A0\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EFB54 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    bl ov14_021F3844\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EFB54 ; =0x000088C8\n    add r0, r4, #0\n    ldrh r1, [r2, r1]\n    bl ov14_021F5564\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r3, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r3, r0]\n    add r3, #0x30\n    lsl r2, r5, #4\n    mov r1, #0x10\n    add r2, r3, r2\n    bl sub_02019A60\n    mov r0, #0x2f\n    add r3, r5, #1\n    ldr r2, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r2, r0]\n    add r2, #0x30\n    lsl r3, r3, #4\n    mov r1, #0x10\n    add r2, r2, r3\n    bl sub_02019A60\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EFB54 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    bl ov14_021F38B0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88BC\n    ldr r1, _021EFB60 ; =ov14_021EAA04\n    add r0, r4, #0\n    mov r2, #0x88\n    bl ov14_021F0234\n    pop {r4, r5, r6, pc}\n    _021EFB48: .word 0x0000044C\n    _021EFB4C: .word 0x000088CA\n    _021EFB50: .word ov14_021E9970\n    _021EFB54: .word 0x000088C8\n    _021EFB58: .word 0x00004094\n    _021EFB5C: .word 0x0000044B\n    _021EFB60: .word ov14_021EAA04"
    );
    #endif
}

void ov14_021EFB64(void) {
    /* Original at 0x021EFB64 */
    /* Requires manual decompilation - 257 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov14_021F6A24\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EFC52\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EFBBC\n    ldr r0, _021EFDC8 ; =0x000005EB\n    bl PlaySE\n    ldr r2, [r4, #0x34]\n    ldr r1, _021EFDCC ; =0x000040B8\n    add r0, r2, r1\n    add r1, r1, #4\n    add r1, r2, r1\n    bl System_GetTouchNewCoords\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r5, #0x1e\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F1D6C\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021EFC32\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    sub r0, #0x1e\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    add r0, r4, #0\n    bl ov14_021F40DC\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EFDD0 ; =0x000088C8\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _021EFC26\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88F8\n    ldr r1, _021EFDD4 ; =ov14_021EA674\n    add r0, r4, #0\n    mov r2, #0x8c\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    lsl r1, r5, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    add r0, r4, #0\n    bl ov14_021E765C\n    mov r0, #0x8b\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov14_021F75C8\n    mov r1, #2\n    add r5, r0, #0\n    mvn r1, r1\n    cmp r5, r1\n    bhi _021EFC92\n    bhs _021EFCCA\n    cmp r5, #9\n    bhi _021EFC88\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EFC74: ; jump table\n    mov r0, #3\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EFD4C\n    b _021EFD7A\n    add r0, r1, #1\n    cmp r5, r0\n    bhi _021EFC9C\n    beq _021EFD00\n    b _021EFD7A\n    add r0, r1, #2\n    cmp r5, r0\n    bne _021EFCA4\n    b _021EFDC4\n    b _021EFD7A\n    ldr r0, _021EFDD8 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xb0\n    bl ov14_021F2490\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EFDD8 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0xad\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #5\n    bhi _021EFCE2\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    b _021EFCF0\n    cmp r1, #8\n    beq _021EFCF0\n    cmp r1, #9\n    beq _021EFCF0\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, _021EFDDC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x8c\n    bl ov14_021F0244\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EFDE0 ; =0x00000633\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0x9f\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, _021EFDDC ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    sub r0, #0x1e\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    add r1, r5, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0xb1\n    bl ov14_021F2270\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #5\n    bhi _021EFD64\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    b _021EFD72\n    cmp r1, #8\n    beq _021EFD72\n    cmp r1, #9\n    beq _021EFD72\n    add r0, r4, #0\n    bl ov14_021E765C\n    ldr r0, _021EFDDC ; =0x000005DC\n    bl PlaySE\n    b _021EFDC4\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021EFDC4\n    ldr r0, _021EFDD8 ; =0x000005DD\n    bl PlaySE\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x1e\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #8\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    mov r1, #8\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r5, #0x1e\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov14_021F1CDC\n    pop {r3, r4, r5, pc}\n    mov r0, #0x8b\n    pop {r3, r4, r5, pc}\n    _021EFDC8: .word 0x000005EB\n    _021EFDCC: .word 0x000040B8\n    _021EFDD0: .word 0x000088C8\n    _021EFDD4: .word ov14_021EA674\n    _021EFDD8: .word 0x000005DD\n    _021EFDDC: .word 0x000005DC\n    _021EFDE0: .word 0x00000633"
    );
    #endif
}

void ov14_021EFDE4(void) {
    Heap_Free();
}

void ov14_021EFDF4(void) {
    /* Original at 0x021EFDF4 */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    add r1, r4, #0\n    ldr r5, [r0, #0xc]\n    add r1, #0x21\n    ldrh r2, [r5]\n    ldrb r1, [r1]\n    cmp r2, r1\n    beq _021EFE10\n    ldr r1, _021EFEF0 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    bne _021EFEB0\n    add r0, r4, #0\n    ldrh r5, [r5, #2]\n    bl ov14_021F1F38\n    ldr r0, [r4, #0x34]\n    ldr r1, _021EFEF4 ; =0x0000044A\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    bne _021EFE6C\n    ldr r1, _021EFEF0 ; =0x000088C8\n    ldrh r0, [r0, r1]\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021EFE7A\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r5, r0\n    beq _021EFE7A\n    ldr r0, _021EFEF8 ; =0x000005F3\n    bl PlaySE\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #7\n    bl sub_0201980C\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0x28\n    bl ov14_021F68C0\n    mov r0, #0x92\n    str r0, [r4, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    mov r1, #0x28\n    bl ov14_021F6654\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EFEF4 ; =0x0000044A\n    mov r2, #0\n    strb r2, [r1, r0]\n    ldr r1, [r4, #0x34]\n    ldr r0, _021EFEF0 ; =0x000088C8\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _021EFE98\n    ldr r0, _021EFEFC ; =0x000005EA\n    bl PlaySE\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    ldr r0, [r4, #0x34]\n    mov r1, #8\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x8b\n    pop {r3, r4, r5, pc}\n    mov r1, #0x28\n    bl ov14_021F6654\n    ldr r0, _021EFEFC ; =0x000005EA\n    bl PlaySE\n    ldrh r1, [r5]\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #1\n    bl ov14_021F34C8\n    add r0, r4, #0\n    bl ov14_021F40DC\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    mov r0, #0x8e\n    pop {r3, r4, r5, pc}\n    _021EFEF0: .word 0x000088C8\n    _021EFEF4: .word 0x0000044A\n    _021EFEF8: .word 0x000005F3\n    _021EFEFC: .word 0x000005EA"
    );
    #endif
}

void ov14_021EFF00(void) {
    /* Original at 0x021EFF00 */
    /* Requires manual decompilation - 172 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #1\n    bne _021EFF14\n    mov r0, #0x8e\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    mov r2, #6\n    ldr r4, [r0, #0xc]\n    add r0, r5, #0\n    ldrh r1, [r4]\n    mov r3, #0\n    bl ov14_021E6070\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    ldrh r1, [r4]\n    ldr r6, [r5, #0x34]\n    ldr r3, _021F0084 ; =0x000088C8\n    add r0, r5, #0\n    mov r2, #6\n    add r3, r6, r3\n    bl ov14_021E6094\n    ldrb r1, [r5, #0x1f]\n    ldrh r2, [r4]\n    add r0, r5, #0\n    bl ov14_021E60C0\n    bl ov14_021E64D0\n    cmp r0, #1\n    bne _021EFF6E\n    ldrh r2, [r4]\n    ldr r3, [r5, #0x34]\n    ldrb r1, [r5, #0x1f]\n    add r6, r3, r2\n    ldr r3, _021F0088 ; =0x00004094\n    add r0, r5, #0\n    ldrb r3, [r6, r3]\n    bl ov14_021F2ED0\n    ldrh r1, [r4]\n    add r0, r5, #0\n    bl ov14_021E7588\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    ldr r3, _021F0084 ; =0x000088C8\n    add r1, #0x21\n    strh r7, [r0, r3]\n    ldr r6, [r5, #0x34]\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #6\n    add r3, r6, r3\n    bl ov14_021E6094\n    add r2, r5, #0\n    add r2, #0x21\n    ldrb r1, [r5, #0x1f]\n    ldrb r2, [r2]\n    add r0, r5, #0\n    bl ov14_021E60C0\n    bl ov14_021E64D0\n    cmp r0, #1\n    bne _021EFFBA\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r2, [r0]\n    ldr r3, [r5, #0x34]\n    ldrb r1, [r5, #0x1f]\n    add r6, r3, r2\n    ldr r3, _021F0088 ; =0x00004094\n    add r0, r5, #0\n    ldrb r3, [r6, r3]\n    bl ov14_021F2ED0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F0084 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    bne _021F0046\n    ldr r1, _021F008C ; =0x0000044A\n    ldrb r2, [r0, r1]\n    cmp r2, #0\n    bne _021F0006\n    ldrh r1, [r4]\n    add r0, r5, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F1F38\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    sub r1, #0x1e\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r1, _021F0090 ; =ov14_021E94BC\n    add r0, r5, #0\n    mov r2, #0x8f\n    bl ov14_021F0234\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0\n    strb r2, [r0, r1]\n    add r0, r5, #0\n    bl ov14_021F1F38\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    sub r1, #0x1e\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7EE0\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    ldr r1, _021F0094 ; =ov14_021E9518\n    add r0, r5, #0\n    mov r2, #0x8f\n    bl ov14_021F0234\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021F0098 ; =0x000005EB\n    bl PlaySE\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F0084 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    bl ov14_021F3844\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #1\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    bl ov14_021F39D0\n    ldr r1, _021F009C ; =ov14_021EAF08\n    add r0, r5, #0\n    mov r2, #0x90\n    bl ov14_021F0234\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F0084: .word 0x000088C8\n    _021F0088: .word 0x00004094\n    _021F008C: .word 0x0000044A\n    _021F0090: .word ov14_021E94BC\n    _021F0094: .word ov14_021E9518\n    _021F0098: .word 0x000005EB\n    _021F009C: .word ov14_021EAF08"
    );
    #endif
}

void ov14_021F00A0(void) {
    /* Original at 0x021F00A0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    bl ov14_021E7588\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x8b\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F00BC(void) {
    /* Original at 0x021F00BC */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    ldr r4, [r0, #0xc]\n    ldrh r1, [r4]\n    bl ov14_021F34C8\n    ldr r0, _021F011C ; =0x000005EA\n    bl PlaySE\n    add r0, r5, #0\n    bl ov14_021F40DC\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021F00FC\n    ldrh r1, [r4]\n    add r0, r5, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    sub r1, #0x1e\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    bl ov14_021F1F38\n    mov r0, #0x91\n    pop {r3, r4, r5, pc}\n    nop\n    _021F011C: .word 0x000005EA"
    );
    #endif
}

void ov14_021F0120(void) {
    /* Original at 0x021F0120 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    bl ov14_021F2A04\n    cmp r0, #1\n    bne _021F0134\n    mov r0, #0x91\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r1, _021F0160 ; =ov14_021E94BC\n    add r0, r4, #0\n    mov r2, #0x8f\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F0160: .word ov14_021E94BC"
    );
    #endif
}

void ov14_021F0164(void) {
    /* Original at 0x021F0164 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0x28\n    bl ov14_021F6654\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #7\n    bl sub_020197F4\n    ldr r0, [r4, #0x34]\n    mov r1, #8\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x8b\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F0198(void) {
    /* Original at 0x021F0198 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F01B4 ; =0x000005F3\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0x25\n    bl ov14_021F68C0\n    mov r0, #0xe\n    str r0, [r4, #0x30]\n    mov r0, #6\n    pop {r4, pc}\n    _021F01B4: .word 0x000005F3"
    );
    #endif
}

void ov14_021F01B8(void) {
    /* Original at 0x021F01B8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F01D4 ; =0x000005F3\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x25\n    bl ov14_021F6724\n    mov r0, #0xe\n    str r0, [r4, #0x30]\n    mov r0, #6\n    pop {r4, pc}\n    nop\n    _021F01D4: .word 0x000005F3"
    );
    #endif
}

void ov14_021F01D8(void) {
    /* Original at 0x021F01D8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #6\n    add r4, r1, #0\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0xa\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0x11\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #6\n    str r4, [r1, r0]\n    mov r0, #2\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov14_021F0204(void) {
    /* Original at 0x021F0204 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xa\n    str r0, [sp, #8]\n    mov r0, #0\n    add r4, r1, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0x11\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #6\n    str r4, [r1, r0]\n    mov r0, #2\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov14_021F0234(void) {
    ov14_021E5A44();
}

void ov14_021F0244(void) {
    ov14_021E5A54();
}

void ov14_021F0254(void) {
    /* Original at 0x021F0254 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #1\n    bne _021F0266\n    mov r1, #1\n    bl ov14_021E5EFC\n    b _021F026C\n    mov r1, #0\n    bl ov14_021E5EFC\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F0278 ; =0x00000438\n    strh r4, [r1, r0]\n    mov r0, #7\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0278: .word 0x00000438"
    );
    #endif
}

void ov14_021F027C(void) {
    /* Original at 0x021F027C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021F0288 ; =ov14_021F0204\n    strb r1, [r0, #0x1e]\n    mov r1, #9\n    str r1, [r0, #0x30]\n    mov r1, #1\n    bx r3\n    _021F0288: .word ov14_021F0204"
    );
    #endif
}

void ov14_021F028C(void) {
    /* Original at 0x021F028C */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x1f]\n    add r4, r1, #0\n    cmp r0, #0\n    bne _021F029C\n    mov r0, #0x11\n    b _021F029E\n    sub r0, r0, #1\n    strb r0, [r5, #0x1f]\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F2DE8\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021E7930\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #0\n    bl ov14_021E783C\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    mov r2, #2\n    bl ov14_021F29E4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021F0302\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    sub r0, r0, #2\n    cmp r0, #1\n    bhi _021F0302\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    ldr r1, _021F0310 ; =ov14_021E92AC\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0310: .word ov14_021E92AC"
    );
    #endif
}

void ov14_021F0314(void) {
    /* Original at 0x021F0314 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x1f]\n    add r4, r1, #0\n    cmp r0, #0x11\n    bne _021F0324\n    mov r0, #0\n    b _021F0326\n    add r0, r0, #1\n    strb r0, [r5, #0x1f]\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021F2DE8\n    ldrb r1, [r5, #0x1f]\n    add r0, r5, #0\n    bl ov14_021E7930\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #1\n    bl ov14_021E783C\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    mov r2, #4\n    bl ov14_021F29E4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021F038A\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    sub r0, r0, #2\n    cmp r0, #1\n    bhi _021F038A\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    ldr r1, _021F0398 ; =ov14_021E9370\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0398: .word ov14_021E9370"
    );
    #endif
}

void ov14_021F039C(void) {
    /* Original at 0x021F039C */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    bl ov14_021F3190\n    add r0, r4, #0\n    bl ov14_021F3F6C\n    add r0, r4, #0\n    bl ov14_021F08BC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F03F2\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8234\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8294\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x22\n    strb r1, [r0]\n    ldr r1, _021F0414 ; =ov14_021E8BA4\n    add r0, r4, #0\n    mov r2, #0xd\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F0414: .word ov14_021E8BA4"
    );
    #endif
}

void ov14_021F0418(void) {
    /* Original at 0x021F0418 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    bl ov14_021F3190\n    add r0, r4, #0\n    bl ov14_021F3F6C\n    add r0, r4, #0\n    bl ov14_021F3044\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov14_021F3488\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    mov r2, #1\n    mov r3, #0x27\n    bl ov14_021F685C\n    ldr r0, [r4, #8]\n    bl Party_GetCount\n    cmp r0, #6\n    beq _021F0482\n    add r0, r4, #0\n    mov r1, #0x28\n    mov r2, #1\n    bl ov14_021F6928\n    b _021F048C\n    add r0, r4, #0\n    mov r1, #0x28\n    mov r2, #3\n    bl ov14_021F6928\n    add r0, r4, #0\n    bl ov14_021F08BC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F04BA\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0x22\n    strb r1, [r0]\n    ldr r1, _021F04D0 ; =ov14_021E9C88\n    add r0, r4, #0\n    mov r2, #0x57\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F04D0: .word ov14_021E9C88"
    );
    #endif
}

void ov14_021F04D4(void) {
    /* Original at 0x021F04D4 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #1\n    bl ov14_021F3190\n    add r0, r4, #0\n    bl ov14_021F3F6C\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    mov r2, #1\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r0, [r4, #0x34]\n    bl ov14_021E8824\n    ldr r1, _021F052C ; =ov14_021EA068\n    add r0, r4, #0\n    mov r2, #0x58\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F052C: .word ov14_021EA068"
    );
    #endif
}

void ov14_021F0530(void) {
    /* Original at 0x021F0530 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #1\n    bl ov14_021F3190\n    add r0, r4, #0\n    bl ov14_021F3F6C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8234\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8294\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r0, [r4, #0x34]\n    bl ov14_021E8824\n    ldr r1, _021F0590 ; =ov14_021EA0B8\n    add r0, r4, #0\n    mov r2, #0x4a\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F0590: .word ov14_021EA0B8"
    );
    #endif
}

void ov14_021F0594(void) {
    /* Original at 0x021F0594 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, #0x21\n    add r1, r5, #0\n    strb r4, [r0]\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    bl ov14_021F3190\n    add r0, r5, #0\n    bl ov14_021F3F6C\n    add r1, r4, #0\n    ldr r0, [r5, #8]\n    sub r1, #0x1e\n    bl Party_GetMonByIndex\n    sub r4, #0x1e\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021E6480\n    cmp r0, #0\n    bne _021F05E4\n    ldrb r1, [r5, #0x1f]\n    ldr r0, [r5, #4]\n    bl PCStorage_CountMonsInBox\n    cmp r0, #0\n    bne _021F05E4\n    add r0, r5, #0\n    mov r1, #0x28\n    mov r2, #8\n    bl ov14_021F6928\n    b _021F062A\n    add r0, r6, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021F0606\n    add r0, r5, #0\n    mov r1, #0x28\n    mov r2, #6\n    bl ov14_021F6928\n    b _021F062A\n    add r0, r6, #0\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _021F0620\n    add r0, r5, #0\n    mov r1, #0x28\n    mov r2, #7\n    bl ov14_021F6928\n    b _021F062A\n    add r0, r5, #0\n    mov r1, #0x28\n    mov r2, #0\n    bl ov14_021F6928\n    add r0, r5, #0\n    bl ov14_021F08BC\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0x22\n    strb r1, [r0]\n    ldr r1, _021F065C ; =ov14_021E8D20\n    add r0, r5, #0\n    mov r2, #0x27\n    bl ov14_021F0234\n    pop {r4, r5, r6, pc}\n    _021F065C: .word ov14_021E8D20"
    );
    #endif
}

void ov14_021F0660(void) {
    /* Original at 0x021F0660 */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r1, [sp]\n    add r1, r5, #0\n    ldr r0, [sp]\n    add r1, #0x21\n    strb r0, [r1]\n    mov r4, #0x1e\n    mov r7, #1\n    mov r6, #0\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r4, r0\n    ldr r0, [r5, #0x34]\n    bne _021F068A\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F3190\n    b _021F0692\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov14_021F3190\n    add r4, r4, #1\n    cmp r4, #0x24\n    blo _021F0674\n    add r0, r5, #0\n    bl ov14_021F3F6C\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov14_021F3488\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    bl ov14_021F34C8\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #0x27\n    bl ov14_021F685C\n    ldr r1, [sp]\n    ldr r0, [r5, #8]\n    sub r1, #0x1e\n    bl Party_GetMonByIndex\n    ldr r1, [sp]\n    add r4, r0, #0\n    sub r1, #0x1e\n    add r0, r5, #0\n    str r1, [sp]\n    bl ov14_021E6480\n    cmp r0, #0\n    bne _021F06EE\n    add r0, r5, #0\n    mov r1, #0x28\n    mov r2, #8\n    bl ov14_021F6928\n    b _021F074C\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021F0710\n    add r0, r5, #0\n    mov r1, #0x28\n    mov r2, #6\n    bl ov14_021F6928\n    b _021F074C\n    add r0, r4, #0\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _021F072A\n    add r0, r5, #0\n    mov r1, #0x28\n    mov r2, #7\n    bl ov14_021F6928\n    b _021F074C\n    ldrb r1, [r5, #0x1f]\n    ldr r0, [r5, #4]\n    bl PCStorage_CountEmptySpotsInBox\n    cmp r0, #0\n    bne _021F0742\n    add r0, r5, #0\n    mov r1, #0x28\n    mov r2, #2\n    bl ov14_021F6928\n    b _021F074C\n    add r0, r5, #0\n    mov r1, #0x28\n    mov r2, #0\n    bl ov14_021F6928\n    add r0, r5, #0\n    bl ov14_021F08BC\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F077A\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0x22\n    strb r1, [r0]\n    ldr r1, _021F0790 ; =ov14_021E9A24\n    add r0, r5, #0\n    mov r2, #0x6e\n    bl ov14_021F0234\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F0790: .word ov14_021E9A24"
    );
    #endif
}

void ov14_021F0794(void) {
    /* Original at 0x021F0794 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #1\n    bl ov14_021F3190\n    add r0, r4, #0\n    bl ov14_021F3F6C\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    mov r2, #1\n    mov r3, #0x27\n    bl ov14_021F685C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r0, [r4, #0x34]\n    bl ov14_021E8824\n    ldr r1, _021F07EC ; =ov14_021EA068\n    add r0, r4, #0\n    mov r2, #0x6f\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F07EC: .word ov14_021EA068"
    );
    #endif
}

void ov14_021F07F0(void) {
    /* Original at 0x021F07F0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #1\n    bl ov14_021F3190\n    add r0, r4, #0\n    bl ov14_021F3F6C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r0, [r4, #0x34]\n    bl ov14_021E8824\n    ldr r1, _021F0838 ; =ov14_021EA0B8\n    add r0, r4, #0\n    mov r2, #0x4c\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F0838: .word ov14_021EA0B8"
    );
    #endif
}

void ov14_021F083C(void) {
    /* Original at 0x021F083C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x21\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    bl ov14_021F3190\n    add r0, r4, #0\n    bl ov14_021F3F6C\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    ldr r1, [r4, #0x34]\n    bne _021F0876\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85D0\n    b _021F0890\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021F0890\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    ldr r0, [r4, #0x34]\n    bl ov14_021E8824\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F6408\n    add r0, r4, #0\n    bl ov14_021F08BC\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0x22\n    strb r1, [r0]\n    ldr r1, _021F08B8 ; =ov14_021E8FD4\n    add r0, r4, #0\n    mov r2, #0x2a\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021F08B8: .word ov14_021E8FD4"
    );
    #endif
}

void ov14_021F08BC(void) {
    /* Original at 0x021F08BC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #0xa\n    mov r1, #0xf0\n    bl Heap_Alloc\n    str r0, [sp]\n    mov r4, #0\n    add r5, r0, #0\n    mov r6, #0xa\n    add r0, r6, #0\n    bl AllocMonZeroed\n    str r0, [r5]\n    add r4, r4, #1\n    add r5, #0x20\n    cmp r4, #7\n    blo _021F08D0\n    ldr r0, [sp]\n    mov r1, #0\n    add r0, #0xe0\n    str r1, [r0]\n    ldr r1, [r7, #0x34]\n    ldr r0, [sp]\n    str r0, [r1, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F08F0(void) {
    /* Original at 0x021F08F0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r0, [r0, #0x34]\n    mov r4, #0\n    ldr r6, [r0, #0xc]\n    add r5, r6, #0\n    ldr r0, [r5]\n    bl Heap_Free\n    add r4, r4, #1\n    add r5, #0x20\n    cmp r4, #7\n    blo _021F08FA\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F0910(void) {
    /* Original at 0x021F0910 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    mov r2, #0x4c\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021F0948\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    ldr r1, _021F09B8 ; =ov14_021E9450\n    add r0, r5, #0\n    mov r2, #0x4f\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    add r4, r0, #0\n    bne _021F096A\n    mov r0, #0x26\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov14_021F027C\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #1\n    ldr r1, [r5, #0x34]\n    bne _021F0998\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    ldr r1, _021F09B8 ; =ov14_021E9450\n    add r0, r5, #0\n    mov r2, #0x50\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E83F4\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x25\n    bl ov14_021F6704\n    add r0, r5, #0\n    mov r1, #0\n    bl ov14_021F0254\n    pop {r3, r4, r5, pc}\n    nop\n    _021F09B8: .word ov14_021E9450"
    );
    #endif
}

void ov14_021F09BC(void) {
    /* Original at 0x021F09BC */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4]\n    ldr r1, [r1, #8]\n    cmp r1, #0\n    beq _021F09D0\n    cmp r1, #1\n    beq _021F09DA\n    cmp r1, #2\n    b _021F09E4\n    mov r1, #0\n    mov r2, #9\n    bl ov14_021F6AC0\n    b _021F0A04\n    mov r1, #2\n    mov r2, #0x24\n    bl ov14_021F6AC0\n    b _021F0A04\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021F09FA\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0x27\n    bl ov14_021F6AC0\n    b _021F0A04\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0xb\n    bl ov14_021F6AC0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #0x34]\n    mov r1, #0x26\n    bl ov14_021F6654\n    add r0, r4, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021F0A26\n    add r0, r4, #0\n    bl ov14_021F57B8\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021F0A3A\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov14_021F3488\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7E64\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #2\n    bne _021F0A6E\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0x1e\n    bhs _021F0A6E\n    ldr r1, _021F0A7C ; =ov14_021E94A8\n    add r0, r4, #0\n    mov r2, #0x17\n    bl ov14_021F0234\n    pop {r4, pc}\n    ldr r1, _021F0A7C ; =ov14_021E94A8\n    add r0, r4, #0\n    mov r2, #0xe\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F0A7C: .word ov14_021E94A8"
    );
    #endif
}

void ov14_021F0A80(void) {
    /* Original at 0x021F0A80 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    ldr r1, _021F0AA8 ; =ov14_021E9434\n    add r0, r4, #0\n    mov r2, #0x13\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F0AA8: .word ov14_021E9434"
    );
    #endif
}

void ov14_021F0AAC(void) {
    /* Original at 0x021F0AAC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    ldr r1, _021F0AD4 ; =ov14_021E9450\n    add r0, r4, #0\n    mov r2, #0x19\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F0AD4: .word ov14_021E9450"
    );
    #endif
}

void ov14_021F0AD8(void) {
    /* Original at 0x021F0AD8 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #1\n    add r0, #0x23\n    strb r1, [r0]\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov14_021F43F4\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8234\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8294\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r1, _021F0B30 ; =ov14_021E94BC\n    add r0, r4, #0\n    mov r2, #0x22\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F0B30: .word ov14_021E94BC"
    );
    #endif
}

void ov14_021F0B34(void) {
    /* Original at 0x021F0B34 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r2, #0\n    add r0, #0x23\n    strb r2, [r0]\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F0B5E\n    add r0, r4, #0\n    bl ov14_021EC710\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov14_021E76B8\n    add r0, r4, #0\n    mov r1, #0x25\n    bl ov14_021F1100\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F0B70(void) {
    /* Original at 0x021F0B70 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov14_021E81A8\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63F0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63A8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8368\n    add r0, r4, #0\n    bl ov14_021E82DC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7E78\n    add r0, r4, #0\n    bl ov14_021F30B0\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F0BB4(void) {
    /* Original at 0x021F0BB4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ov14_021E81A8\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63F0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F63B8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8368\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7E88\n    add r0, r4, #0\n    bl ov14_021F311C\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F0BF4(void) {
    /* Original at 0x021F0BF4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F30B0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E7E78\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F0C0C(void) {
    /* Original at 0x021F0C0C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0xff\n    add r0, #0x21\n    strb r1, [r0]\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8020\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021F0C48\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    ldr r1, _021F0C54 ; =ov14_021E952C\n    add r0, r4, #0\n    mov r2, #0x2d\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021F0C54: .word ov14_021E952C"
    );
    #endif
}

void ov14_021F0C58(void) {
    /* Original at 0x021F0C58 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    mov r2, #0xff\n    add r1, #0x21\n    strb r2, [r1]\n    mov r1, #1\n    add r2, r1, #0\n    bl ov14_021F3488\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E805C\n    ldr r1, _021F0C84 ; =ov14_021E954C\n    add r0, r4, #0\n    mov r2, #0x2e\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021F0C84: .word ov14_021E954C"
    );
    #endif
}

void ov14_021F0C88(void) {
    /* Original at 0x021F0C88 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #1\n    add r0, #0x24\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r2, #0\n    add r0, #0x29\n    strb r2, [r0]\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8234\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8294\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r1, _021F0CD4 ; =ov14_021E94BC\n    add r0, r4, #0\n    mov r2, #0x2f\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F0CD4: .word ov14_021E94BC"
    );
    #endif
}

void ov14_021F0CD8(void) {
    /* Original at 0x021F0CD8 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    add r0, #0x24\n    strb r1, [r0]\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021F0D10\n    add r0, r4, #0\n    mov r1, #0x31\n    bl ov14_021F0EE8\n    pop {r4, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021F0D2A\n    add r0, r4, #0\n    mov r1, #0x31\n    bl ov14_021F0D34\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x32\n    bl ov14_021F1090\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F0D34(void) {
    /* Original at 0x021F0D34 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    ldr r1, _021F0D54 ; =ov14_021E9970\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0D54: .word ov14_021E9970"
    );
    #endif
}

void ov14_021F0D58(void) {
    /* Original at 0x021F0D58 */
    /* Requires manual decompilation - 169 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r1, #0\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021F0D6A\n    mov r4, #0x82\n    b _021F0D6C\n    mov r4, #0x29\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r7, [r0]\n    mov r1, #6\n    add r0, r7, #0\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    add r1, r6, r1\n    cmp r1, r7\n    beq _021F0D96\n    add r0, r5, #0\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F57B8\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r1, [r0]\n    ldrb r0, [r5, #0x1f]\n    cmp r1, r0\n    bne _021F0E4E\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021F0DEA\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r5, #0x34]\n    add r1, #0x25\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F0EE8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021F0E40\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r5, #0x34]\n    add r1, #0x25\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    ldr r1, _021F0EE0 ; =ov14_021E9970\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #0x2d\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_IsButtonInputMode\n    cmp r0, #1\n    bne _021F0E9E\n    ldr r0, [r5, #0x34]\n    mov r1, #0x2d\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #1\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021F0EB2\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov14_021F604C\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021F0ED4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    ldr r1, _021F0EE4 ; =ov14_021E9920\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F0EE0: .word ov14_021E9970\n    _021F0EE4: .word ov14_021E9920"
    );
    #endif
}

void ov14_021F0EE8(void) {
    /* Original at 0x021F0EE8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85D0\n    ldr r1, _021F0F08 ; =ov14_021E9970\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0F08: .word ov14_021E9970"
    );
    #endif
}

void ov14_021F0F0C(void) {
    /* Original at 0x021F0F0C */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    add r2, r4, #0\n    add r2, #0x25\n    add r5, r1, #0\n    ldrb r1, [r4, #0x1f]\n    ldrb r2, [r2]\n    strb r2, [r4, #0x1f]\n    add r2, r4, #0\n    add r2, #0x25\n    ldrb r2, [r2]\n    cmp r1, r2\n    ldrb r1, [r4, #0x1f]\n    bls _021F0F42\n    bl ov14_021F2DE8\n    ldrb r1, [r4, #0x1f]\n    add r0, r4, #0\n    bl ov14_021E7930\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0\n    bl ov14_021E783C\n    ldr r6, _021F0FFC ; =ov14_021E92AC\n    b _021F0F5A\n    bl ov14_021F2DE8\n    ldrb r1, [r4, #0x1f]\n    add r0, r4, #0\n    bl ov14_021E7930\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #1\n    bl ov14_021E783C\n    ldr r6, _021F1000 ; =ov14_021E9370\n    cmp r5, #4\n    bhi _021F0FF0\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F0F6A: ; jump table\n    add r0, r4, #0\n    bl ov14_021F4848\n    add r0, r4, #0\n    add r0, #0x23\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021F0F8A\n    mov r0, #0xc\n    str r0, [r4, #0x30]\n    b _021F0FF0\n    mov r0, #0x24\n    str r0, [r4, #0x30]\n    b _021F0FF0\n    add r0, r4, #0\n    bl ov14_021F4848\n    mov r0, #0x3d\n    str r0, [r4, #0x30]\n    b _021F0FF0\n    mov r0, #0x47\n    str r0, [r4, #0x30]\n    b _021F0FF0\n    add r0, r4, #0\n    bl ov14_021F4848\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021F0FC4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85D0\n    mov r0, #0x29\n    str r0, [r4, #0x30]\n    b _021F0FF0\n    add r0, r4, #0\n    bl ov14_021F4848\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021F0FEC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85D0\n    mov r0, #0x82\n    str r0, [r4, #0x30]\n    ldr r2, [r4, #0x30]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov14_021F0234\n    pop {r4, r5, r6, pc}\n    _021F0FFC: .word ov14_021E92AC\n    _021F1000: .word ov14_021E9370"
    );
    #endif
}

void ov14_021F1004(void) {
    /* Original at 0x021F1004 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x25\n    add r4, r1, #0\n    ldrb r1, [r0]\n    mov r0, #6\n    mul r0, r4\n    add r1, r1, r0\n    bpl _021F101A\n    add r1, #0x12\n    b _021F1020\n    cmp r1, #0x12\n    blt _021F1020\n    sub r1, #0x12\n    add r0, r5, #0\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F49E0\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F4848\n    add r0, r5, #0\n    bl ov14_021F57B8\n    cmp r4, #0\n    ldr r0, [r5, #0x34]\n    ble _021F104E\n    mov r1, #5\n    mov r2, #4\n    bl ov14_021F29E4\n    pop {r3, r4, r5, pc}\n    mov r1, #4\n    mov r2, #2\n    bl ov14_021F29E4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F1058(void) {
    /* Original at 0x021F1058 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov14_021F4720\n    add r0, r5, #0\n    bl ov14_021F4848\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F57B8\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E86E0\n    ldr r1, _021F108C ; =ov14_021E9554\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    _021F108C: .word ov14_021E9554"
    );
    #endif
}

void ov14_021F1090(void) {
    /* Original at 0x021F1090 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8704\n    ldr r1, _021F10B0 ; =ov14_021E9590\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021F10B0: .word ov14_021E9590"
    );
    #endif
}

void ov14_021F10B4(void) {
    /* Original at 0x021F10B4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #0\n    bl ov14_021F5EC4\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r1, _021F10D8 ; =ov14_021E95B4\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    _021F10D8: .word ov14_021E95B4"
    );
    #endif
}

void ov14_021F10DC(void) {
    /* Original at 0x021F10DC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r1, _021F10FC ; =ov14_021E95B4\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021F10FC: .word ov14_021E95B4"
    );
    #endif
}

void ov14_021F1100(void) {
    /* Original at 0x021F1100 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r1, #0xff\n    add r0, #0x21\n    strb r1, [r0]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    ldr r1, _021F1124 ; =ov14_021E9434\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    _021F1124: .word ov14_021E9434"
    );
    #endif
}

void ov14_021F1128(void) {
    /* Original at 0x021F1128 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldrb r0, [r4, #0x1f]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r2, [r4, #0x34]\n    ldr r0, _021F116C ; =0x0000043C\n    str r1, [r2, r0]\n    ldr r1, [r4, #0x34]\n    ldr r0, [r1, r0]\n    str r0, [r4, #0x2c]\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F1162\n    add r0, r4, #0\n    bl ov14_021ED5B0\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x35\n    bl ov14_021F1100\n    pop {r4, pc}\n    _021F116C: .word 0x0000043C"
    );
    #endif
}

void ov14_021F1170(void) {
    /* Original at 0x021F1170 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    add r4, r1, #0\n    mov r1, #6\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    add r0, r5, #0\n    add r1, r4, r1\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F11F4 ; =0x0000043C\n    add r3, r2, #0\n    str r2, [r1, r0]\n    ldr r0, [r5, #0x34]\n    mov r1, #8\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    ldr r0, [r5, #0x34]\n    mov r1, #8\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #1\n    bl ov14_021F2A18\n    mov r0, #0x3d\n    pop {r3, r4, r5, pc}\n    nop\n    _021F11F4: .word 0x0000043C"
    );
    #endif
}

void ov14_021F11F8(void) {
    /* Original at 0x021F11F8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F1004\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r4, #0x34]\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x3d\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F1228(void) {
    /* Original at 0x021F1228 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r2, _021F1298 ; =0x0000044D\n    ldrb r3, [r0, r2]\n    lsl r2, r1, #2\n    add r3, r3, r2\n    bpl _021F123C\n    add r3, #0x18\n    b _021F1242\n    cmp r3, #0x18\n    blt _021F1242\n    sub r3, #0x18\n    ldr r2, _021F1298 ; =0x0000044D\n    cmp r1, #0\n    strb r3, [r0, r2]\n    ldr r0, [r4, #0x34]\n    ble _021F1256\n    mov r1, #5\n    mov r2, #4\n    bl ov14_021F29E4\n    b _021F125E\n    mov r1, #4\n    mov r2, #2\n    bl ov14_021F29E4\n    add r0, r4, #0\n    bl ov14_021F462C\n    add r0, r4, #0\n    bl ov14_021F4530\n    add r0, r4, #0\n    bl ov14_021F58B8\n    ldr r2, [r4, #0x34]\n    ldr r1, _021F1298 ; =0x0000044D\n    ldr r0, [r2, #0x2c]\n    ldrb r1, [r2, r1]\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1e\n    sub r2, r2, r3\n    mov r1, #0x1e\n    ror r2, r1\n    add r1, r3, r2\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    pop {r4, pc}\n    _021F1298: .word 0x0000044D"
    );
    #endif
}

void ov14_021F129C(void) {
    /* Original at 0x021F129C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r2, [r4, #0x34]\n    ldr r3, _021F1314 ; =0x0000044D\n    ldrb r5, [r2, r3]\n    lsr r5, r5, #2\n    lsl r5, r5, #2\n    add r1, r1, r5\n    strb r1, [r2, r3]\n    bl ov14_021F459C\n    add r0, r4, #0\n    bl ov14_021F58B8\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    ldr r2, [r4, #0x34]\n    ldr r1, _021F1318 ; =0x0000043C\n    str r0, [r2, r1]\n    ldr r0, [r4, #0x34]\n    ldr r2, [r0, r1]\n    ldr r0, [r0, #0x2c]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    mov r1, #6\n    add r3, r2, #0\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    ldr r0, [r4, #0x34]\n    mov r1, #6\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #1\n    bl ov14_021F2A18\n    pop {r3, r4, r5, pc}\n    _021F1314: .word 0x0000044D\n    _021F1318: .word 0x0000043C"
    );
    #endif
}

void ov14_021F131C(void) {
    /* Original at 0x021F131C */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x34]\n    ldr r0, _021F13A0 ; =0x0000044D\n    ldrb r1, [r1, r0]\n    cmp r1, #0x10\n    blo _021F1348\n    ldr r0, [r4, #4]\n    sub r1, #0x10\n    bl PCStorage_IsBonusWallpaperUnlocked\n    cmp r0, #0\n    bne _021F1348\n    ldr r0, _021F13A4 ; =0x000005F3\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0x42\n    bl ov14_021F2270\n    pop {r4, pc}\n    add r1, r4, #0\n    add r1, #0x25\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov14_021E7930\n    ldr r2, [r4, #0x34]\n    ldr r1, _021F13A0 ; =0x0000044D\n    ldrb r1, [r2, r1]\n    cmp r1, r0\n    bne _021F1370\n    ldr r0, _021F13A4 ; =0x000005F3\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0x42\n    bl ov14_021F2270\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r1, [r0]\n    ldrb r0, [r4, #0x1f]\n    cmp r1, r0\n    beq _021F138E\n    ldr r0, _021F13A8 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0xa5\n    bl ov14_021F2270\n    pop {r4, pc}\n    ldr r0, _021F13AC ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0x47\n    bl ov14_021F2270\n    pop {r4, pc}\n    _021F13A0: .word 0x0000044D\n    _021F13A4: .word 0x000005F3\n    _021F13A8: .word 0x000005DC\n    _021F13AC: .word 0x000005DD"
    );
    #endif
}

void ov14_021F13B0(void) {
    /* Original at 0x021F13B0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4, #8]\n    bl Party_GetCount\n    cmp r0, #6\n    beq _021F13EE\n    ldr r0, [r4, #0x34]\n    mov r1, #0x27\n    bl ov14_021F6654\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    ldr r0, [r4, #0x34]\n    bl ov14_021E884C\n    ldr r1, _021F1410 ; =ov14_021E9434\n    add r0, r4, #0\n    mov r2, #0x53\n    bl ov14_021F0234\n    pop {r4, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E83F4\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #2\n    mov r3, #0x25\n    bl ov14_021F685C\n    mov r0, #0xe\n    str r0, [r4, #0x30]\n    mov r0, #6\n    pop {r4, pc}\n    nop\n    _021F1410: .word ov14_021E9434"
    );
    #endif
}

void ov14_021F1414(void) {
    /* Original at 0x021F1414 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0x27\n    bl ov14_021F6654\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    ldr r1, _021F1444 ; =ov14_021E9450\n    add r0, r4, #0\n    mov r2, #0x5c\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F1444: .word ov14_021E9450"
    );
    #endif
}

void ov14_021F1448(void) {
    /* Original at 0x021F1448 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    add r4, r1, #0\n    mov r1, #6\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    add r0, r5, #0\n    add r1, r4, r1\n    add r0, #0x25\n    strb r1, [r0]\n    bl System_GetTouchNew\n    cmp r0, #0\n    bne _021F148C\n    ldr r0, [r5, #4]\n    add r5, #0x25\n    ldrb r1, [r5]\n    bl PCStorage_CountMonsAndEggsInBox\n    cmp r0, #0x1e\n    bne _021F1482\n    ldr r0, _021F14F8 ; =0x000005F3\n    bl PlaySE\n    b _021F1488\n    ldr r0, _021F14FC ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x66\n    pop {r3, r4, r5, pc}\n    ldr r0, _021F14FC ; =0x000005DD\n    bl PlaySE\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r2, r0, #0\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F1500 ; =0x0000043C\n    add r3, r2, #0\n    str r2, [r1, r0]\n    ldr r0, [r5, #0x34]\n    mov r1, #8\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    ldr r0, [r5, #0x34]\n    mov r1, #8\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #1\n    bl ov14_021F2A18\n    mov r0, #0x61\n    pop {r3, r4, r5, pc}\n    _021F14F8: .word 0x000005F3\n    _021F14FC: .word 0x000005DD\n    _021F1500: .word 0x0000043C"
    );
    #endif
}

void ov14_021F1504(void) {
    /* Original at 0x021F1504 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F1004\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r0, [r4, #0x34]\n    lsl r1, r1, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x61\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F1534(void) {
    ov14_021F2270();
}

void ov14_021F1540(void) {
    /* Original at 0x021F1540 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    add r1, r4, #0\n    add r1, #0x25\n    ldrb r1, [r1]\n    ldr r0, [r4, #4]\n    bl PCStorage_CountMonsAndEggsInBox\n    cmp r0, #0x1e\n    bne _021F1566\n    ldr r0, _021F1578 ; =0x000005F3\n    bl PlaySE\n    b _021F156C\n    ldr r0, _021F157C ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0x66\n    bl ov14_021F2270\n    pop {r4, pc}\n    _021F1578: .word 0x000005F3\n    _021F157C: .word 0x000005DD"
    );
    #endif
}

void ov14_021F1580(void) {
    /* Original at 0x021F1580 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x21\n    strb r1, [r0]\n    ldr r1, [r4, #0x34]\n    ldr r0, _021F15C0 ; =0x0000044B\n    mov r2, #1\n    strb r2, [r1, r0]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    bl ov14_021F3190\n    add r0, r4, #0\n    bl ov14_021F40DC\n    add r0, r4, #0\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021F15B4\n    ldr r0, [r4, #0x34]\n    bl ov14_021E8824\n    ldr r1, _021F15C4 ; =ov14_021EA254\n    add r0, r4, #0\n    mov r2, #0x73\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021F15C0: .word 0x0000044B\n    _021F15C4: .word ov14_021EA254"
    );
    #endif
}

void ov14_021F15C8(void) {
    /* Original at 0x021F15C8 */
    /* Requires manual decompilation - 244 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0xff\n    bne _021F15D6\n    mov r2, #1\n    b _021F15D8\n    mov r2, #0\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F17F8 ; =0x000088CC\n    str r2, [r1, r0]\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    add r3, sp, #0\n    add r2, r0, r1\n    ldr r1, _021F17FC ; =0x00004094\n    ldrb r1, [r2, r1]\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    add r2, r2, #4\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    cmp r4, #0x24\n    bhs _021F1684\n    cmp r4, #0x1e\n    blo _021F167C\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    cmp r1, #0x1e\n    bhs _021F1658\n    add r1, r4, #0\n    sub r1, #0x1e\n    cmp r1, r0\n    bls _021F1650\n    add r0, r5, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    b _021F17D0\n    ldr r0, [r5, #0x34]\n    bl ov14_021E884C\n    b _021F17D0\n    add r1, r4, #0\n    sub r1, #0x1e\n    cmp r1, r0\n    blo _021F1674\n    add r0, r5, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    b _021F17D0\n    ldr r0, [r5, #0x34]\n    bl ov14_021E884C\n    b _021F17D0\n    ldr r0, [r5, #0x34]\n    bl ov14_021E884C\n    b _021F17D0\n    cmp r4, #0xff\n    bne _021F168A\n    b _021F1798\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    add r1, r4, r1\n    add r0, r5, #0\n    sub r1, #0x25\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F57B8\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r6, [r0]\n    cmp r6, #0x1e\n    blo _021F1752\n    sub r6, #0x1e\n    ldr r0, [r5, #8]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021F16E2\n    ldr r0, [r5, #0x34]\n    bl ov14_021E884C\n    b _021F17D0\n    add r0, r7, #0\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _021F16F8\n    ldr r0, [r5, #0x34]\n    bl ov14_021E884C\n    b _021F17D0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021E6480\n    cmp r0, #0\n    bne _021F170C\n    ldr r0, [r5, #0x34]\n    bl ov14_021E884C\n    b _021F17D0\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r1, [r0]\n    ldrb r0, [r5, #0x1f]\n    cmp r1, r0\n    bne _021F172C\n    add r0, r5, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    b _021F17D0\n    ldr r0, [r5, #4]\n    bl PCStorage_CountEmptySpotsInBox\n    cmp r0, #0\n    bne _021F173E\n    ldr r0, [r5, #0x34]\n    bl ov14_021E884C\n    b _021F17D0\n    add r0, r5, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    b _021F17D0\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r1, [r0]\n    ldrb r0, [r5, #0x1f]\n    cmp r1, r0\n    bne _021F1772\n    add r0, r5, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    b _021F17D0\n    ldr r0, [r5, #4]\n    bl PCStorage_CountEmptySpotsInBox\n    cmp r0, #0\n    bne _021F1784\n    ldr r0, [r5, #0x34]\n    bl ov14_021E884C\n    b _021F17D0\n    add r0, r5, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    b _021F17D0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #0x24\n    bhs _021F17BE\n    add r0, r5, #0\n    bl ov14_021E7588\n    cmp r0, #0\n    bne _021F17D0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    b _021F17D0\n    add r0, r5, #0\n    bl ov14_021E765C\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F1800 ; =0x0000044C\n    mov r2, #0\n    strb r4, [r1, r0]\n    ldr r1, [r5, #0x34]\n    sub r0, r0, #1\n    strb r2, [r1, r0]\n    add r0, r5, #0\n    bl ov14_021F08BC\n    add r0, r5, #0\n    mov r1, #2\n    add r0, #0x22\n    strb r1, [r0]\n    ldr r1, _021F1804 ; =ov14_021EA378\n    add r0, r5, #0\n    mov r2, #0x2b\n    bl ov14_021F0234\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F17F8: .word 0x000088CC\n    _021F17FC: .word 0x00004094\n    _021F1800: .word 0x0000044C\n    _021F1804: .word ov14_021EA378"
    );
    #endif
}

void ov14_021F1808(void) {
    /* Original at 0x021F1808 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r2, r4, #0\n    add r2, #0x21\n    strb r1, [r2]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    ldr r2, [r4, #0x34]\n    ldr r1, _021F18A8 ; =0x000088C8\n    strh r0, [r2, r1]\n    ldr r2, [r4, #0x34]\n    add r0, r4, #0\n    ldrh r1, [r2, r1]\n    bl ov14_021F5FBC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8234\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8294\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r0, [r4, #0x34]\n    ldr r1, _021F18A8 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021F189C\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    bl ov14_021F396C\n    ldr r0, [r4, #0x34]\n    ldr r1, _021F18A8 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    bl ov14_021F3844\n    ldr r0, [r4, #0x34]\n    bl ov14_021F39D0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88BC\n    ldr r1, _021F18AC ; =ov14_021EA408\n    add r0, r4, #0\n    mov r2, #0x76\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021F18A8: .word 0x000088C8\n    _021F18AC: .word ov14_021EA408"
    );
    #endif
}

void ov14_021F18B0(void) {
    /* Original at 0x021F18B0 */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r3, [r5, #0x34]\n    ldr r2, _021F19E4 ; =0x000088C8\n    ldrh r4, [r3, r2]\n    add r2, r5, #0\n    add r2, #0x21\n    strb r1, [r2]\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    ldr r2, [r5, #0x34]\n    ldr r1, _021F19E4 ; =0x000088C8\n    strh r0, [r2, r1]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021F190E\n    cmp r4, #0\n    bne _021F18F2\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F19E4 ; =0x000088C8\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _021F1900\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E83F4\n    b _021F1932\n    beq _021F1932\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    b _021F1932\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8234\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8294\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r2, [r5, #0x34]\n    ldr r1, _021F19E4 ; =0x000088C8\n    add r0, r5, #0\n    ldrh r1, [r2, r1]\n    bl ov14_021F5FBC\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F19E4 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021F198A\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    bl ov14_021F396C\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F19E4 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    bl ov14_021F3844\n    ldr r0, [r5, #0x34]\n    bl ov14_021F39D0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #1\n    bl ov14_021F34C8\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88BC\n    b _021F19A4\n    mov r1, #0xb\n    bl ov14_021F2A44\n    cmp r0, #1\n    bne _021F19A4\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r5, #0\n    bl ov14_021F40DC\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    mov r3, #0\n    bl ov14_021F2F88\n    add r2, sp, #0\n    mov r0, #2\n    ldrsh r3, [r2, r0]\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F19E8 ; =0x000040B8\n    add r3, #8\n    str r3, [r1, r0]\n    mov r1, #0\n    ldrsh r2, [r2, r1]\n    ldr r1, [r5, #0x34]\n    add r0, r0, #4\n    add r2, #8\n    str r2, [r1, r0]\n    add r0, r5, #0\n    bl ov14_021F1F24\n    ldr r1, _021F19EC ; =ov14_021EA4C8\n    add r0, r5, #0\n    mov r2, #0x7e\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021F19E4: .word 0x000088C8\n    _021F19E8: .word 0x000040B8\n    _021F19EC: .word ov14_021EA4C8"
    );
    #endif
}

void ov14_021F19F0(void) {
    /* Original at 0x021F19F0 */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    add r2, r4, #0\n    add r2, #0x21\n    strb r1, [r2]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    ldr r2, [r4, #0x34]\n    ldr r1, _021F1B38 ; =0x000088C8\n    strh r0, [r2, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F6408\n    ldr r1, [r4, #0x34]\n    ldr r0, _021F1B38 ; =0x000088C8\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    bne _021F1A78\n    ldr r0, [r1, #0x2c]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021F1A4E\n    add sp, #4\n    mov r0, #0x82\n    pop {r3, r4, pc}\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    bne _021F1A6A\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85D0\n    ldr r1, _021F1B3C ; =ov14_021E99A0\n    add r0, r4, #0\n    mov r2, #0x82\n    bl ov14_021F0234\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, _021F1B40 ; =0x000005EB\n    bl PlaySE\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #2\n    bl ov14_021F396C\n    ldr r0, [r4, #0x34]\n    ldr r1, _021F1B38 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    bl ov14_021F3844\n    ldr r0, [r4, #0x34]\n    bl ov14_021F39D0\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #1\n    bl ov14_021F34C8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88BC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #1\n    ldr r1, [r4, #0x34]\n    bne _021F1ADE\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85D0\n    b _021F1AF8\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021F1AF8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    mov r3, #2\n    bl ov14_021F2F88\n    add r2, sp, #0\n    mov r0, #2\n    ldrsh r3, [r2, r0]\n    ldr r1, [r4, #0x34]\n    ldr r0, _021F1B44 ; =0x000040B8\n    add r3, #8\n    str r3, [r1, r0]\n    mov r1, #0\n    ldrsh r2, [r2, r1]\n    ldr r1, [r4, #0x34]\n    add r0, r0, #4\n    add r2, #8\n    str r2, [r1, r0]\n    add r0, r4, #0\n    bl ov14_021F1F24\n    ldr r1, _021F1B48 ; =ov14_021EA778\n    add r0, r4, #0\n    mov r2, #0x84\n    bl ov14_021F0234\n    add sp, #4\n    pop {r3, r4, pc}\n    _021F1B38: .word 0x000088C8\n    _021F1B3C: .word ov14_021E99A0\n    _021F1B40: .word 0x000005EB\n    _021F1B44: .word 0x000040B8\n    _021F1B48: .word ov14_021EA778"
    );
    #endif
}

void ov14_021F1B4C(void) {
    /* Original at 0x021F1B4C */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r2, r4, #0\n    add r2, #0x21\n    strb r1, [r2]\n    ldr r3, [r4, #0x34]\n    ldr r2, _021F1BF0 ; =0x000088CA\n    strh r1, [r3, r2]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    ldr r2, [r4, #0x34]\n    ldr r1, _021F1BF4 ; =0x000088C8\n    strh r0, [r2, r1]\n    ldr r0, [r4, #0x34]\n    ldrh r0, [r0, r1]\n    cmp r0, #0\n    bne _021F1B7C\n    mov r0, #0x82\n    pop {r4, pc}\n    ldr r0, _021F1BF8 ; =0x000005EB\n    bl PlaySE\n    ldr r1, [r4, #0x34]\n    ldr r0, _021F1BFC ; =0x0000044B\n    mov r2, #1\n    strb r2, [r1, r0]\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #2\n    bl ov14_021F39A0\n    ldr r0, [r4, #0x34]\n    ldr r1, _021F1BF4 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    bl ov14_021F3844\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #1\n    bl ov14_021F34C8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88BC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #1\n    bne _021F1BE2\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8634\n    ldr r1, _021F1C00 ; =ov14_021EAA04\n    add r0, r4, #0\n    mov r2, #0x88\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F1BF0: .word 0x000088CA\n    _021F1BF4: .word 0x000088C8\n    _021F1BF8: .word 0x000005EB\n    _021F1BFC: .word 0x0000044B\n    _021F1C00: .word ov14_021EAA04"
    );
    #endif
}

void ov14_021F1C04(void) {
    /* Original at 0x021F1C04 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r0, #0\n    cmp r1, #0x24\n    bhs _021F1C2E\n    add r0, r4, #0\n    bl ov14_021E7588\n    cmp r0, #1\n    bne _021F1C34\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8620\n    b _021F1C34\n    add r0, r4, #0\n    bl ov14_021E765C\n    add r0, r4, #0\n    bl ov14_021F1F24\n    ldr r1, _021F1C48 ; =ov14_021EAC24\n    add r0, r4, #0\n    mov r2, #0x86\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F1C48: .word ov14_021EAC24"
    );
    #endif
}

void ov14_021F1C4C(void) {
    /* Original at 0x021F1C4C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F1CD4 ; =0x0000044C\n    mov r2, #0\n    strb r4, [r1, r0]\n    ldr r1, [r5, #0x34]\n    sub r0, r0, #1\n    strb r2, [r1, r0]\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0xca\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    add r2, #8\n    lsl r2, r2, #0x10\n    ldrsh r1, [r3, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F1CD4 ; =0x0000044C\n    ldrb r0, [r1, r0]\n    cmp r0, #0xff\n    bne _021F1CA0\n    add r0, r5, #0\n    bl ov14_021F1C04\n    pop {r3, r4, r5, pc}\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021E6AA0\n    cmp r0, #0\n    bne _021F1CBA\n    add r0, r5, #0\n    bl ov14_021F1C04\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88F8\n    ldr r1, _021F1CD8 ; =ov14_021EAB54\n    add r0, r5, #0\n    mov r2, #0x8a\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021F1CD4: .word 0x0000044C\n    _021F1CD8: .word ov14_021EAB54"
    );
    #endif
}

void ov14_021F1CDC(void) {
    /* Original at 0x021F1CDC */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r2, r4, #0\n    add r2, #0x21\n    strb r1, [r2]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    ldr r2, [r4, #0x34]\n    ldr r1, _021F1D64 ; =0x000088C8\n    strh r0, [r2, r1]\n    ldr r2, [r4, #0x34]\n    add r0, r4, #0\n    ldrh r1, [r2, r1]\n    bl ov14_021F5FBC\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8434\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r0, [r4, #0x34]\n    ldr r1, _021F1D64 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021F1D58\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x34]\n    mov r2, #1\n    bl ov14_021F396C\n    ldr r0, [r4, #0x34]\n    ldr r1, _021F1D64 ; =0x000088C8\n    ldrh r1, [r0, r1]\n    bl ov14_021F3844\n    ldr r0, [r4, #0x34]\n    bl ov14_021F39D0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88BC\n    ldr r1, _021F1D68 ; =ov14_021EA408\n    add r0, r4, #0\n    mov r2, #0x8c\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021F1D64: .word 0x000088C8\n    _021F1D68: .word ov14_021EA408"
    );
    #endif
}

void ov14_021F1D6C(void) {
    /* Original at 0x021F1D6C */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r2, r5, #0\n    add r2, #0x21\n    strb r1, [r2]\n    ldr r2, [r5, #0x34]\n    ldr r1, _021F1EAC ; =0x000088C8\n    mov r3, #0\n    ldrh r4, [r2, r1]\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    mov r2, #6\n    bl ov14_021E6070\n    ldr r2, [r5, #0x34]\n    ldr r1, _021F1EAC ; =0x000088C8\n    strh r0, [r2, r1]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021F1DCA\n    cmp r4, #0\n    bne _021F1DAE\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F1EAC ; =0x000088C8\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _021F1DBC\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E83F4\n    b _021F1DD6\n    beq _021F1DD6\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    b _021F1DD6\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8314\n    ldr r2, [r5, #0x34]\n    ldr r1, _021F1EAC ; =0x000088C8\n    add r0, r5, #0\n    ldrh r1, [r2, r1]\n    bl ov14_021F5FBC\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F1EAC ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021F1E52\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #1\n    bl ov14_021F396C\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F1EAC ; =0x000088C8\n    ldrh r1, [r0, r1]\n    bl ov14_021F3844\n    ldr r0, [r5, #0x34]\n    bl ov14_021F39D0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x34]\n    mov r2, #1\n    bl ov14_021F34C8\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88BC\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F1EAC ; =0x000088C8\n    ldrh r0, [r1, r0]\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _021F1E46\n    add r0, r5, #0\n    mov r1, #0x28\n    mov r2, #9\n    bl ov14_021F6928\n    b _021F1E6C\n    add r0, r5, #0\n    mov r1, #0x28\n    mov r2, #0xa\n    bl ov14_021F6928\n    b _021F1E6C\n    mov r1, #0xb\n    bl ov14_021F2A44\n    cmp r0, #1\n    bne _021F1E6C\n    ldr r0, [r5, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r5, #0\n    bl ov14_021F40DC\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    mov r3, #1\n    bl ov14_021F2F88\n    add r2, sp, #0\n    mov r0, #2\n    ldrsh r3, [r2, r0]\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F1EB0 ; =0x000040B8\n    add r3, #8\n    str r3, [r1, r0]\n    mov r1, #0\n    ldrsh r2, [r2, r1]\n    ldr r1, [r5, #0x34]\n    add r0, r0, #4\n    add r2, #8\n    str r2, [r1, r0]\n    add r0, r5, #0\n    bl ov14_021F1F24\n    ldr r1, _021F1EB4 ; =ov14_021EACD4\n    add r0, r5, #0\n    mov r2, #0x8d\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    nop\n    _021F1EAC: .word 0x000088C8\n    _021F1EB0: .word 0x000040B8\n    _021F1EB4: .word ov14_021EACD4"
    );
    #endif
}

void ov14_021F1EB8(void) {
    /* Original at 0x021F1EB8 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F1F1C ; =0x000088C8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    bne _021F1EFA\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r2, r5, #0\n    add r2, #0x21\n    ldrb r1, [r5, #0x1f]\n    ldrb r2, [r2]\n    add r0, r5, #0\n    bl ov14_021E60C0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    bne _021F1EF6\n    mov r0, #0x24\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov14_021F027C\n    pop {r3, r4, r5, pc}\n    mov r4, #0x7c\n    b _021F1F04\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r4, #0x78\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    ldr r1, _021F1F20 ; =ov14_021E9450\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F0234\n    pop {r3, r4, r5, pc}\n    _021F1F1C: .word 0x000088C8\n    _021F1F20: .word ov14_021E9450"
    );
    #endif
}

void ov14_021F1F24(void) {
    Heap_Alloc(0xa, 0x1c);
}

void ov14_021F1F38(void) {
    Heap_Free();
}

void ov14_021F1F44(void) {
    /* Original at 0x021F1F44 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov14_021F7B7C\n    cmp r0, #1\n    bne _021F1F7E\n    ldr r0, _021F2008 ; =0x000005DD\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0x26\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x27\n    strb r1, [r0]\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r1, r5, #0\n    add r1, #0x28\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #0xf\n    mov r2, #0x97\n    bl ov14_021F2330\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov14_021F7340\n    add r4, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_IsButtonInputMode\n    cmp r0, #0\n    bne _021F1F96\n    mov r4, #1\n    mvn r4, r4\n    mov r1, #2\n    mvn r1, r1\n    cmp r4, r1\n    bhi _021F1FCE\n    bhs _021F1FE0\n    cmp r4, #0x2a\n    bhi _021F1FC4\n    add r0, r4, #0\n    sub r0, #0x24\n    bmi _021F1FFA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F1FB6: ; jump table\n    mov r0, #3\n    mvn r0, r0\n    cmp r4, r0\n    beq _021F2004\n    b _021F1FFA\n    add r0, r1, #1\n    cmp r4, r0\n    bhi _021F1FD8\n    beq _021F1FF0\n    b _021F1FFA\n    add r0, r1, #2\n    cmp r4, r0\n    beq _021F2004\n    b _021F1FFA\n    ldr r0, _021F200C ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0x74\n    bl ov14_021F0244\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #0xff\n    bl ov14_021F15C8\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F15C8\n    pop {r3, r4, r5, pc}\n    mov r0, #0x73\n    pop {r3, r4, r5, pc}\n    _021F2008: .word 0x000005DD\n    _021F200C: .word 0x000005DC"
    );
    #endif
}

void ov14_021F2010(void) {
    Heap_Free();
}

void ov14_021F2020(void) {
    /* Original at 0x021F2020 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    add r1, r0, #0\n    str r1, [sp]\n    lsl r1, r1, #0x10\n    ldr r0, [r5, #0xc]\n    lsr r1, r1, #0x10\n    mov r2, #1\n    mov r3, #0xa\n    bl Bag_AddItem\n    cmp r0, #1\n    bne _021F20A4\n    add r2, r5, #0\n    add r2, #0x21\n    ldrb r1, [r5, #0x1f]\n    ldrb r2, [r2]\n    add r0, r5, #0\n    bl ov14_021E60C0\n    add r4, r0, #0\n    ldr r1, [sp]\n    add r0, r5, #0\n    mov r2, #0x25\n    bl ov14_021F673C\n    mov r0, #0\n    add r1, r5, #0\n    str r0, [sp]\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    mov r2, #6\n    add r3, sp, #0\n    bl ov14_021E6094\n    add r0, r4, #0\n    bl ov14_021E64D0\n    cmp r0, #1\n    bne _021F2096\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r2, [r0]\n    ldr r3, [r5, #0x34]\n    ldrb r1, [r5, #0x1f]\n    add r4, r3, r2\n    ldr r3, _021F20BC ; =0x00004094\n    add r0, r5, #0\n    ldrb r3, [r4, r3]\n    bl ov14_021F2ED0\n    add r1, r5, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r5, #0\n    bl ov14_021E75F4\n    b _021F20B2\n    ldr r0, _021F20C0 ; =0x000005F3\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0x25\n    bl ov14_021F675C\n    mov r0, #0xe\n    str r0, [r5, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    nop\n    _021F20BC: .word 0x00004094\n    _021F20C0: .word 0x000005F3"
    );
    #endif
}

void ov14_021F20C4(void) {
    /* Original at 0x021F20C4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F40DC\n    ldr r0, [r4, #0x34]\n    mov r1, #0x25\n    bl ov14_021F6654\n    add r0, r4, #0\n    bl ov14_021E71E8\n    ldr r1, [r4, #0x34]\n    ldr r0, _021F20F0 ; =0x000088DC\n    ldr r0, [r1, r0]\n    bl ov14_021F3354\n    ldr r0, [r4, #0x34]\n    bl ov14_021E884C\n    mov r0, #0x1a\n    pop {r4, pc}\n    nop\n    _021F20F0: .word 0x000088DC"
    );
    #endif
}

void ov14_021F20F4(void) {
    /* Original at 0x021F20F4 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Save_Bag_Get\n    ldr r2, [r4, #0x34]\n    ldr r1, _021F21A8 ; =0x000088C8\n    mov r3, #0xa\n    ldrh r1, [r2, r1]\n    mov r2, #1\n    bl Bag_AddItem\n    cmp r0, #0\n    bne _021F212A\n    ldr r0, _021F21AC ; =0x000005F3\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0x25\n    bl ov14_021F68C0\n    mov r0, #0x7a\n    str r0, [r4, #0x30]\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    mov r1, #0\n    add r0, sp, #0\n    strh r1, [r0]\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    mov r2, #6\n    add r3, sp, #0\n    bl ov14_021E6094\n    add r2, r4, #0\n    add r2, #0x21\n    ldrb r1, [r4, #0x1f]\n    ldrb r2, [r2]\n    add r0, r4, #0\n    bl ov14_021E60C0\n    bl ov14_021E64D0\n    cmp r0, #1\n    bne _021F216C\n    add r0, r4, #0\n    add r0, #0x21\n    ldrb r2, [r0]\n    ldr r3, [r4, #0x34]\n    ldrb r1, [r4, #0x1f]\n    add r5, r3, r2\n    ldr r3, _021F21B0 ; =0x00004094\n    add r0, r4, #0\n    ldrb r3, [r5, r3]\n    bl ov14_021F2ED0\n    add r1, r4, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov14_021E7588\n    add r0, r4, #0\n    bl ov14_021F40DC\n    ldr r0, [r4, #0x34]\n    mov r1, #0x25\n    bl ov14_021F6654\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F391C\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #2\n    bl ov14_021F29E4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88F8\n    mov r0, #0x79\n    pop {r3, r4, r5, pc}\n    _021F21A8: .word 0x000088C8\n    _021F21AC: .word 0x000005F3\n    _021F21B0: .word 0x00004094"
    );
    #endif
}

void ov14_021F21B4(void) {
    /* Original at 0x021F21B4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F21CC ; =0x0000060D\n    bl PlaySE\n    mov r0, #0xb3\n    str r0, [r4, #0x30]\n    add r0, r4, #0\n    mov r1, #1\n    bl ov14_021F0204\n    pop {r4, pc}\n    _021F21CC: .word 0x0000060D"
    );
    #endif
}

void ov14_021F21D0(void) {
    /* Original at 0x021F21D0 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0x25\n    bl ov14_021F6654\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetButtonInputMode\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bhi _021F226A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F21FA: ; jump table\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov14_021F3488\n    mov r0, #0x5b\n    pop {r4, pc}\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x27\n    bl ov14_021F685C\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F43F4\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov14_021F3488\n    mov r0, #0x51\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F43F4\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov14_021F3488\n    mov r0, #0xc\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov14_021F43F4\n    add r0, r4, #0\n    mov r1, #0x81\n    mov r2, #0\n    bl ov14_021F3488\n    mov r0, #0x75\n    pop {r4, pc}\n    mov r0, #0xc\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F2270(void) {
    /* Original at 0x021F2270 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r2, #0\n    mov r0, #0x2f\n    ldr r2, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r2, r0]\n    add r2, sp, #0\n    add r2, #1\n    add r3, sp, #0\n    add r4, r1, #0\n    bl sub_02019B1C\n    mov r0, #0x2f\n    add r3, sp, #0\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    add r2, sp, #4\n    add r3, #2\n    bl sub_02019B44\n    ldr r2, [r5, #0x34]\n    ldr r0, _021F232C ; =0x000088D4\n    mov r3, #1\n    ldrb r1, [r2, r0]\n    bic r1, r3\n    mov r3, #1\n    orr r1, r3\n    strb r1, [r2, r0]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    bl sub_02019B10\n    lsl r0, r0, #0x19\n    ldr r3, [r5, #0x34]\n    ldr r1, _021F232C ; =0x000088D4\n    mov r4, #0xfe\n    ldrb r2, [r3, r1]\n    lsr r0, r0, #0x18\n    bic r2, r4\n    orr r0, r2\n    strb r0, [r3, r1]\n    ldr r0, [r5, #0x34]\n    add r2, r1, #1\n    ldrb r3, [r0, r2]\n    mov r2, #0xf\n    bic r3, r2\n    mov r2, #0xd\n    orr r3, r2\n    add r2, r1, #1\n    strb r3, [r0, r2]\n    ldr r0, [r5, #0x34]\n    ldrb r3, [r0, r2]\n    mov r2, #0xf0\n    bic r3, r2\n    mov r2, #0xc0\n    orr r3, r2\n    add r2, r1, #1\n    strb r3, [r0, r2]\n    ldr r3, [r5, #0x34]\n    mov r2, #0\n    add r0, r1, #2\n    strb r2, [r3, r0]\n    ldr r3, [r5, #0x34]\n    add r0, r1, #3\n    strb r2, [r3, r0]\n    add r0, sp, #0\n    mov r3, #1\n    ldrsb r7, [r0, r3]\n    ldr r4, [r5, #0x34]\n    add r3, r1, #4\n    strb r7, [r4, r3]\n    ldrsb r4, [r0, r2]\n    ldr r3, [r5, #0x34]\n    add r2, r1, #5\n    strb r4, [r3, r2]\n    ldrh r4, [r0, #4]\n    ldr r3, [r5, #0x34]\n    add r2, r1, #6\n    strb r4, [r3, r2]\n    ldrh r3, [r0, #2]\n    ldr r2, [r5, #0x34]\n    add r0, r1, #7\n    strb r3, [r2, r0]\n    str r6, [r5, #0x30]\n    mov r0, #8\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F232C: .word 0x000088D4"
    );
    #endif
}

void ov14_021F2330(void) {
    /* Original at 0x021F2330 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r2, #0\n    mov r0, #0x2f\n    ldr r2, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r2, r0]\n    add r2, sp, #0\n    add r2, #1\n    add r3, sp, #0\n    add r4, r1, #0\n    bl sub_02019B1C\n    mov r0, #0x2f\n    add r3, sp, #0\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    add r2, sp, #4\n    add r3, #2\n    bl sub_02019B44\n    ldr r2, [r5, #0x34]\n    ldr r0, _021F23EC ; =0x000088D4\n    mov r3, #1\n    ldrb r1, [r2, r0]\n    bic r1, r3\n    mov r3, #1\n    orr r1, r3\n    strb r1, [r2, r0]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    bl sub_02019B10\n    lsl r0, r0, #0x19\n    ldr r3, [r5, #0x34]\n    ldr r1, _021F23EC ; =0x000088D4\n    mov r4, #0xfe\n    ldrb r2, [r3, r1]\n    lsr r0, r0, #0x18\n    bic r2, r4\n    orr r0, r2\n    strb r0, [r3, r1]\n    ldr r0, [r5, #0x34]\n    add r2, r1, #1\n    ldrb r3, [r0, r2]\n    mov r2, #0xf\n    bic r3, r2\n    mov r2, #3\n    orr r3, r2\n    add r2, r1, #1\n    strb r3, [r0, r2]\n    ldr r0, [r5, #0x34]\n    ldrb r3, [r0, r2]\n    mov r2, #0xf0\n    bic r3, r2\n    mov r2, #0x20\n    orr r3, r2\n    add r2, r1, #1\n    strb r3, [r0, r2]\n    ldr r3, [r5, #0x34]\n    mov r2, #0\n    add r0, r1, #2\n    strb r2, [r3, r0]\n    ldr r3, [r5, #0x34]\n    add r0, r1, #3\n    strb r2, [r3, r0]\n    add r0, sp, #0\n    mov r3, #1\n    ldrsb r7, [r0, r3]\n    ldr r4, [r5, #0x34]\n    add r3, r1, #4\n    strb r7, [r4, r3]\n    ldrsb r4, [r0, r2]\n    ldr r3, [r5, #0x34]\n    add r2, r1, #5\n    strb r4, [r3, r2]\n    ldrh r4, [r0, #4]\n    ldr r3, [r5, #0x34]\n    add r2, r1, #6\n    strb r4, [r3, r2]\n    ldrh r3, [r0, #2]\n    ldr r2, [r5, #0x34]\n    add r0, r1, #7\n    strb r3, [r2, r0]\n    str r6, [r5, #0x30]\n    mov r0, #8\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F23EC: .word 0x000088D4"
    );
    #endif
}

void ov14_021F23F0(void) {
    /* Original at 0x021F23F0 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r2, #0\n    ldr r2, [r5, #0x34]\n    ldr r0, _021F2488 ; =0x000088D4\n    add r4, r1, #0\n    ldrb r1, [r2, r0]\n    mov r3, #1\n    bic r1, r3\n    mov r3, #1\n    orr r1, r3\n    strb r1, [r2, r0]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    bl sub_02019B10\n    lsl r0, r0, #0x19\n    ldr r3, [r5, #0x34]\n    ldr r1, _021F2488 ; =0x000088D4\n    mov r7, #0xfe\n    ldrb r2, [r3, r1]\n    lsr r0, r0, #0x18\n    bic r2, r7\n    orr r0, r2\n    strb r0, [r3, r1]\n    ldr r0, [r5, #0x34]\n    add r2, r1, #1\n    ldrb r3, [r0, r2]\n    mov r2, #0xf\n    bic r3, r2\n    mov r2, #3\n    orr r3, r2\n    add r2, r1, #1\n    strb r3, [r0, r2]\n    ldr r0, [r5, #0x34]\n    ldrb r3, [r0, r2]\n    mov r2, #0xf0\n    bic r3, r2\n    mov r2, #0x20\n    orr r3, r2\n    add r2, r1, #1\n    strb r3, [r0, r2]\n    ldr r3, [r5, #0x34]\n    mov r0, #0\n    add r2, r1, #2\n    strb r0, [r3, r2]\n    add r2, r1, #3\n    ldr r3, [r5, #0x34]\n    cmp r4, #0\n    strb r0, [r3, r2]\n    bne _021F2460\n    mov r3, #0x10\n    b _021F2462\n    mov r3, #0x14\n    ldr r2, [r5, #0x34]\n    add r0, r1, #5\n    strb r3, [r2, r0]\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F248C ; =0x000088D8\n    mov r2, #0x16\n    strb r2, [r1, r0]\n    add r1, r0, #2\n    ldr r2, [r5, #0x34]\n    mov r3, #9\n    strb r3, [r2, r1]\n    ldr r1, [r5, #0x34]\n    mov r2, #4\n    add r0, r0, #3\n    strb r2, [r1, r0]\n    str r6, [r5, #0x30]\n    mov r0, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F2488: .word 0x000088D4\n    _021F248C: .word 0x000088D8"
    );
    #endif
}

void ov14_021F2490(void) {
    /* Original at 0x021F2490 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r3, [r5, #0x34]\n    ldr r0, _021F252C ; =0x000088D4\n    add r6, r2, #0\n    ldrb r2, [r3, r0]\n    add r4, r1, #0\n    mov r1, #1\n    bic r2, r1\n    mov r1, #1\n    orr r2, r1\n    strb r2, [r3, r0]\n    mov r0, #0x2f\n    ldr r2, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r2, r0]\n    bl sub_02019B10\n    lsl r0, r0, #0x19\n    ldr r3, [r5, #0x34]\n    ldr r1, _021F252C ; =0x000088D4\n    mov r7, #0xfe\n    ldrb r2, [r3, r1]\n    lsr r0, r0, #0x18\n    bic r2, r7\n    orr r0, r2\n    strb r0, [r3, r1]\n    ldr r2, [r5, #0x34]\n    add r0, r1, #1\n    ldrb r3, [r2, r0]\n    mov r0, #0xf\n    bic r3, r0\n    add r7, r3, #0\n    mov r0, #3\n    orr r7, r0\n    add r3, r1, #1\n    strb r7, [r2, r3]\n    ldr r3, [r5, #0x34]\n    add r2, r1, #1\n    ldrb r2, [r3, r2]\n    mov r7, #0xf0\n    bic r2, r7\n    mov r7, #0x20\n    orr r7, r2\n    add r2, r1, #1\n    strb r7, [r3, r2]\n    ldr r7, [r5, #0x34]\n    mov r2, #0\n    add r3, r1, #2\n    strb r2, [r7, r3]\n    add r3, r1, #3\n    ldr r7, [r5, #0x34]\n    cmp r4, #0\n    strb r2, [r7, r3]\n    bne _021F2506\n    ldr r2, [r5, #0x34]\n    add r1, r1, #4\n    strb r0, [r2, r1]\n    b _021F250E\n    ldr r2, [r5, #0x34]\n    mov r3, #0x16\n    add r0, r1, #4\n    strb r3, [r2, r0]\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F2530 ; =0x000088D9\n    mov r2, #0x14\n    strb r2, [r1, r0]\n    add r1, r0, #1\n    ldr r2, [r5, #0x34]\n    mov r3, #9\n    strb r3, [r2, r1]\n    ldr r1, [r5, #0x34]\n    mov r2, #4\n    add r0, r0, #2\n    strb r2, [r1, r0]\n    str r6, [r5, #0x30]\n    mov r0, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F252C: .word 0x000088D4\n    _021F2530: .word 0x000088D9"
    );
    #endif
}

void ov14_021F2534(void) {
    /* Original at 0x021F2534 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4]\n    ldr r1, [r1, #8]\n    cmp r1, #3\n    bhi _021F2570\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021F254C: ; jump table\n    mov r1, #2\n    mov r2, #1\n    bl ov14_021F3488\n    pop {r4, pc}\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov14_021F43F4\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F2574(void) {
    /* Original at 0x021F2574 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #1\n    bl ov14_021F66E8\n    add r0, r4, #0\n    bl ov14_021F2534\n    add r0, r4, #0\n    mov r1, #3\n    bl ov14_021F0254\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F259C(void) {
    /* Original at 0x021F259C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #0\n    bl ov14_021F66E8\n    add r0, r4, #0\n    bl ov14_021F2534\n    add r0, r4, #0\n    mov r1, #4\n    bl ov14_021F0254\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F25C4(void) {
    ov14_021E76B8();
    ov14_021F0AD8(r4);
}

void ov14_021F25D4(void) {
    ov14_021E76B8();
    ov14_021F0C88(r4);
}

void ov14_021F25E4(void) {
    /* Original at 0x021F25E4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x24\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r2, #0\n    add r0, #0x29\n    strb r2, [r0]\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    bl ov14_021F2A18\n    add r0, r4, #0\n    mov r1, #0x2f\n    bl ov14_021F1100\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F2610(void) {
    ov14_021F027C();
}

void ov14_021F261C(void) {
    ov14_021F0910();
}

void ov14_021F2624(void) {
    ov14_021F0A80();
}

void ov14_021F262C(void) {
    ov14_021F09BC();
}

void ov14_021F2634(void) {
    ov14_021F0AAC();
}

void ov14_021F263C(void) {
    /* Original at 0x021F263C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r0, [r4, #0x34]\n    bl ov14_021E884C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    ldr r1, _021F268C ; =ov14_021EA180\n    add r0, r4, #0\n    mov r2, #0x4a\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F268C: .word ov14_021EA180"
    );
    #endif
}

void ov14_021F2690(void) {
    /* Original at 0x021F2690 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x2b\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _021F26A4\n    bl ov14_021E76B8\n    b _021F26AA\n    mov r1, #0\n    bl ov14_021F40E8\n    add r0, r4, #0\n    bl ov14_021F0C0C\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F26B4(void) {
    /* Original at 0x021F26B4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r0, [r4, #0x34]\n    bl ov14_021E884C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    ldr r1, _021F26EC ; =ov14_021EA180\n    add r0, r4, #0\n    mov r2, #0x4c\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F26EC: .word ov14_021EA180"
    );
    #endif
}

void ov14_021F26F0(void) {
    ov14_021E76B8();
    ov14_021F0B34(r4);
}

void ov14_021F2700(void) {
    /* Original at 0x021F2700 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    mov r1, #3\n    bl ov14_021F0F0C\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F2718(void) {
    ov14_021E76B8();
    ov14_021F0CD8(r4);
}

void ov14_021F2728(void) {
    ov14_021F0F0C();
}

void ov14_021F2734(void) {
    /* Original at 0x021F2734 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0x27\n    bl ov14_021F6654\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov14_021F3488\n    add r0, r4, #0\n    mov r1, #0x3f\n    bl ov14_021F1090\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F2760(void) {
    ov14_021F027C();
}

void ov14_021F276C(void) {
    ov14_021F0F0C();
}

void ov14_021F2778(void) {
    /* Original at 0x021F2778 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0x27\n    bl ov14_021F6654\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021F27A2\n    add r0, r4, #0\n    mov r1, #0x81\n    mov r2, #0\n    bl ov14_021F3488\n    b _021F27AC\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov14_021F3488\n    add r0, r4, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    ldr r2, [r4, #0x34]\n    ldr r0, _021F27C8 ; =0x0000043C\n    str r1, [r2, r0]\n    mov r0, #9\n    str r0, [r4, #0x2c]\n    mov r0, #0x43\n    pop {r4, pc}\n    nop\n    _021F27C8: .word 0x0000043C"
    );
    #endif
}

void ov14_021F27CC(void) {
    ov14_021F13B0();
}

void ov14_021F27D4(void) {
    /* Original at 0x021F27D4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r0, [r4, #0x34]\n    bl ov14_021E884C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    ldr r1, _021F280C ; =ov14_021EA130\n    add r0, r4, #0\n    mov r2, #0x59\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F280C: .word ov14_021EA130"
    );
    #endif
}

void ov14_021F2810(void) {
    ov14_021F1414();
}

void ov14_021F2818(void) {
    /* Original at 0x021F2818 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl ov14_021F5EB4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    ldr r0, [r4, #0x34]\n    bl ov14_021E884C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F40E8\n    ldr r1, _021F2854 ; =ov14_021EA130\n    add r0, r4, #0\n    mov r2, #0x70\n    bl ov14_021F0234\n    pop {r4, pc}\n    _021F2854: .word ov14_021EA130"
    );
    #endif
}

void ov14_021F2858(void) {
    ov14_021E76B8();
    ov14_021F3488(r4, 0x82, 1);
    ov14_021F0AD8(r4);
}

void ov14_021F2874(void) {
    ov14_021E76B8();
    ov14_021F3488(r4, 0x82, 1);
    ov14_021F0C88(r4);
}

void ov14_021F2890(void) {
    ov14_021F1EB8();
}

void ov14_021F2898(void) {
    /* Original at 0x021F2898 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8248\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E82A8\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    add r0, r4, #0\n    bl ov14_021F40DC\n    ldr r1, [r4, #0x34]\n    ldr r0, _021F28F4 ; =0x000088C8\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _021F28E6\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88F8\n    ldr r1, _021F28F8 ; =ov14_021EA674\n    add r0, r4, #0\n    mov r2, #0x76\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F28F4: .word 0x000088C8\n    _021F28F8: .word ov14_021EA674"
    );
    #endif
}

void ov14_021F28FC(void) {
    /* Original at 0x021F28FC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    mov r1, #4\n    bl ov14_021F0F0C\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F2914(void) {
    /* Original at 0x021F2914 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021E76B8\n    ldr r0, [r4, #0x34]\n    mov r1, #0xb\n    mov r2, #0\n    bl ov14_021F2A18\n    add r0, r4, #0\n    bl ov14_021F0C0C\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F2930(void) {
    /* Original at 0x021F2930 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E84A4\n    mov r0, #0x2f\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8328\n    add r0, r4, #0\n    bl ov14_021F40DC\n    ldr r1, [r4, #0x34]\n    ldr r0, _021F2974 ; =0x000088C8\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _021F2966\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E88F8\n    ldr r1, _021F2978 ; =ov14_021EA674\n    add r0, r4, #0\n    mov r2, #0x8c\n    bl ov14_021F0234\n    pop {r4, pc}\n    nop\n    _021F2974: .word 0x000088C8\n    _021F2978: .word ov14_021EA674"
    );
    #endif
}

void ov14_021F297C(void) {
    /* Original at 0x021F297C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, [r4, #0x34]\n    bl ov14_021F2AC8\n    ldr r0, [r4, #0x34]\n    bl ov14_021F2B88\n    add r0, r4, #0\n    bl ov14_021F2BB8\n    ldr r0, [r4, #0x34]\n    bl ov14_021F4D10\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F29AC(void) {
    ov14_021F4E68();
    ov14_021F2C04(r4);
    ov14_021F2B68(r4);
}

void ov14_021F29C4(void) {
    ManagedSprite_TickFrame(0, 0xbf);
}

void ov14_021F29E4(void) {
    /* Original at 0x021F29E4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    mov r2, #0xbf\n    lsl r2, r2, #2\n    lsl r4, r1, #2\n    add r5, r0, r2\n    ldr r0, [r5, r4]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    ldr r0, [r5, r4]\n    add r1, r6, #0\n    bl ManagedSprite_SetAnim\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F2A04(void) {
    /* Original at 0x021F2A04 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r3, _021F2A14 ; =ManagedSprite_IsAnimated\n    ldr r0, [r1, r0]\n    bx r3\n    nop\n    _021F2A14: .word ManagedSprite_IsAnimated"
    );
    #endif
}

void ov14_021F2A18(void) {
    /* Original at 0x021F2A18 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r2, #1\n    bne _021F2A30\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, pc}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, pc}"
    );
    #endif
}

void ov14_021F2A44(void) {
    ManagedSprite_GetDrawFlag(0, 0xbf, 1);
}

void ov14_021F2A60(void) {
    /* Original at 0x021F2A60 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r3, _021F2A70 ; =ManagedSprite_SetPriority\n    add r1, r2, #0\n    bx r3\n    _021F2A70: .word ManagedSprite_SetPriority"
    );
    #endif
}

void ov14_021F2A74(void) {
    /* Original at 0x021F2A74 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F2A98 ; =0x000088D2\n    mov r3, #1\n    strh r3, [r4, r0]\n    lsl r0, r1, #2\n    add r1, r4, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r2, #0\n    bl ManagedSprite_SetDrawPriority\n    ldr r0, _021F2A98 ; =0x000088D2\n    mov r1, #0\n    strh r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _021F2A98: .word 0x000088D2"
    );
    #endif
}

void ov14_021F2A9C(void) {
    /* Original at 0x021F2A9C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r2, #1\n    bne _021F2AB4\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetOamMode\n    pop {r3, pc}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetOamMode\n    pop {r3, pc}"
    );
    #endif
}

void ov14_021F2AC8(void) {
    /* Original at 0x021F2AC8 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    ldr r3, _021F2B5C ; =ov14_021F80D4\n    add r2, sp, #0x34\n    add r4, r0, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #0xa\n    bl SpriteSystem_Alloc\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    bl SpriteManager_New\n    mov r7, #0xbe\n    lsl r7, r7, #2\n    add r2, sp, #0x14\n    ldr r3, _021F2B60 ; =ov14_021F80EC\n    str r0, [r4, r7]\n    ldmia r3!, {r0, r1}\n    add r6, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    ldr r5, _021F2B64 ; =ov14_021F80A8\n    stmia r2!, {r0, r1}\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r6, #0\n    str r0, [r3]\n    sub r0, r7, #4\n    ldr r0, [r4, r0]\n    mov r3, #0x20\n    bl SpriteSystem_Init\n    sub r1, r7, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x67\n    bl SpriteSystem_InitSprites\n    sub r1, r7, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    add r2, sp, #0x34\n    bl SpriteSystem_InitManagerWithCapacities\n    sub r0, r7, #4\n    ldr r0, [r4, r0]\n    bl SpriteSystem_GetRenderer\n    mov r2, #2\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}\n    _021F2B5C: .word ov14_021F80D4\n    _021F2B60: .word ov14_021F80EC\n    _021F2B64: .word ov14_021F80A8"
    );
    #endif
}

void ov14_021F2B68(void) {
    /* Original at 0x021F2B68 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xbd\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    bl SpriteSystem_FreeResourcesAndManager\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SpriteSystem_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F2B88(void) {
    /* Original at 0x021F2B88 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov14_021F41E4\n    add r0, r4, #0\n    bl ov14_021F42EC\n    add r0, r4, #0\n    bl ov14_021F2C84\n    add r0, r4, #0\n    bl ov14_021F3DE8\n    add r0, r4, #0\n    bl ov14_021F3714\n    add r0, r4, #0\n    bl ov14_021F34EC\n    add r0, r4, #0\n    bl ov14_021F3C08\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F2BB8(void) {
    /* Original at 0x021F2BB8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F4278\n    ldr r0, [r4, #0x34]\n    bl ov14_021F4380\n    ldr r0, [r4, #0x34]\n    bl ov14_021F2D1C\n    ldr r0, [r4, #0x34]\n    bl ov14_021F3E70\n    ldr r0, [r4, #0x34]\n    bl ov14_021F37F4\n    add r0, r4, #0\n    bl ov14_021F35BC\n    ldr r0, [r4, #0x34]\n    bl ov14_021F3CB4\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F2BE8(void) {
    Sprite_DeleteAndFreeResources(0, 0xbf);
}

void ov14_021F2C04(void) {
    ov14_021F2BE8(0);
}

void ov14_021F2C1C(void) {
    /* Original at 0x021F2C1C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r5, r2, #0\n    ldr r0, [r0]\n    add r4, r3, #0\n    bl Sprite_GetImageProxy\n    mov r1, #1\n    bl NNS_G2dGetImageLocation\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl DC_FlushRange\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl GX_LoadOBJ\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F2C50(void) {
    /* Original at 0x021F2C50 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r5, r2, #0\n    ldr r0, [r0]\n    add r4, r3, #0\n    bl Sprite_GetImageProxy\n    mov r1, #2\n    bl NNS_G2dGetImageLocation\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl DC_FlushRange\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl GXS_LoadOBJ\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F2C84(void) {
    /* Original at 0x021F2C84 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r7, #0xbe\n    add r5, r0, #0\n    mov r4, #0\n    mov r6, #1\n    lsl r7, r7, #2\n    ldr r0, _021F2D18 ; =0x0000C0F9\n    str r6, [sp]\n    str r6, [sp, #4]\n    add r0, r4, r0\n    str r0, [sp, #8]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r7]\n    mov r2, #0x13\n    mov r3, #0x4e\n    bl SpriteSystem_LoadCharResObj\n    add r4, r4, #1\n    cmp r4, #0x24\n    blo _021F2C92\n    bl sub_02074490\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _021F2D18 ; =0x0000C0F9\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x14\n    bl SpriteSystem_LoadPlttResObj\n    bl sub_0207449C\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021F2D18 ; =0x0000C0F9\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x14\n    bl SpriteSystem_LoadCellResObj\n    bl sub_020744A8\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021F2D18 ; =0x0000C0F9\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x14\n    bl SpriteSystem_LoadAnimResObj\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F2D18: .word 0x0000C0F9"
    );
    #endif
}

void ov14_021F2D1C(void) {
    /* Original at 0x021F2D1C */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x6c\n    add r5, r0, #0\n    mov r4, #0\n    ldr r3, _021F2DB8 ; =ov14_021F810C\n    str r4, [sp]\n    add r7, r5, #0\n    add r2, sp, #4\n    mov r6, #6\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r6, r6, #1\n    bne _021F2D2E\n    ldr r0, [r3]\n    str r0, [r2]\n    add r6, sp, #4\n    add r3, sp, #0x38\n    mov r2, #6\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F2D40\n    ldr r0, [r6]\n    mov r1, #6\n    str r0, [r3]\n    add r0, r4, #0\n    bl _u32_div_f\n    mov r3, #0x18\n    add r0, sp, #4\n    mov r2, #0x34\n    ldrsh r2, [r0, r2]\n    mul r3, r1\n    add r1, r2, r3\n    strh r1, [r0, #0x34]\n    add r0, r4, #0\n    mov r1, #6\n    bl _u32_div_f\n    mov r3, #0x18\n    add r1, sp, #4\n    mov r2, #0x36\n    ldrsh r2, [r1, r2]\n    mul r3, r0\n    add r0, r2, r3\n    strh r0, [r1, #0x36]\n    ldr r0, [sp]\n    mov r1, #0x74\n    sub r0, r1, r0\n    str r0, [sp, #0x40]\n    ldr r0, _021F2DBC ; =0x0000C0F9\n    mov r1, #0xbd\n    add r0, r4, r0\n    lsl r1, r1, #2\n    str r0, [sp, #0x4c]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, sp, #0x38\n    bl SpriteSystem_NewSprite\n    mov r1, #0x36\n    lsl r1, r1, #4\n    str r0, [r7, r1]\n    add r2, r4, #0\n    add r1, r5, r4\n    ldr r0, _021F2DC0 ; =0x00004094\n    add r2, #0x19\n    strb r2, [r1, r0]\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r0, r0, #2\n    add r7, r7, #4\n    str r0, [sp]\n    cmp r4, #0x24\n    blo _021F2D3A\n    add sp, #0x6c\n    pop {r4, r5, r6, r7, pc}\n    _021F2DB8: .word ov14_021F810C\n    _021F2DBC: .word 0x0000C0F9\n    _021F2DC0: .word 0x00004094"
    );
    #endif
}

void ov14_021F2DC4(void) {
    /* Original at 0x021F2DC4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    add r4, r2, #0\n    bl Boxmon_GetIconNaix\n    add r1, r0, #0\n    mov r0, #0xa\n    str r0, [sp]\n    ldr r0, _021F2DE4 ; =0x00000454\n    mov r2, #0\n    ldr r0, [r5, r0]\n    add r3, r4, #0\n    bl GfGfxLoader_GetCharDataFromOpenNarc\n    pop {r3, r4, r5, pc}\n    _021F2DE4: .word 0x00000454"
    );
    #endif
}

void ov14_021F2DE8(void) {
    /* Original at 0x021F2DE8 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r4, #0\n    add r5, r0, #0\n    str r1, [sp, #4]\n    add r6, r4, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r5, #4]\n    ldr r1, [sp, #4]\n    add r2, r4, #0\n    mov r3, #0xac\n    bl PCStorage_GetMonDataByIndexPair\n    cmp r0, #0\n    bne _021F2E10\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    add r2, r0, r4\n    b _021F2E56\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021E60C0\n    add r7, r0, #0\n    ldr r0, [r5, #0x34]\n    add r1, r7, #0\n    add r2, sp, #0xc\n    bl ov14_021F2DC4\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    ldr r2, [r5, #0x34]\n    ldr r1, _021F2E6C ; =0x00000458\n    ldr r0, [r0, #0x14]\n    add r1, r2, r1\n    mov r2, #2\n    add r1, r1, r6\n    lsl r2, r2, #8\n    bl MIi_CpuCopy32\n    ldr r0, [sp, #8]\n    bl Heap_Free\n    add r0, r7, #0\n    bl Boxmon_GetIconPalette\n    ldr r1, [r5, #0x34]\n    add r2, r1, r4\n    ldr r1, _021F2E70 ; =0x00004076\n    strb r0, [r2, r1]\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    add r2, r0, r4\n    ldr r0, _021F2E74 ; =0x00004058\n    add r4, r4, #1\n    strb r1, [r2, r0]\n    mov r0, #2\n    lsl r0, r0, #8\n    add r6, r6, r0\n    cmp r4, #0x1e\n    blo _021F2DF4\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F2E6C: .word 0x00000458\n    _021F2E70: .word 0x00004076\n    _021F2E74: .word 0x00004058"
    );
    #endif
}

void ov14_021F2E78(void) {
    /* Original at 0x021F2E78 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r3, #0\n    mov r3, #2\n    add r7, r1, #0\n    add r4, r2, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    lsl r3, r3, #8\n    add r5, r0, #0\n    bl ov14_021F2C1C\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r6, #3\n    bl ManagedSprite_SetPaletteOverride\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F2EA0(void) {
    /* Original at 0x021F2EA0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r6, r2, #0\n    add r4, r1, #0\n    add r2, sp, #0\n    bl ov14_021F2DC4\n    add r7, r0, #0\n    add r0, r4, #0\n    bl Boxmon_GetIconPalette\n    ldr r1, [sp]\n    add r3, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, [r1, #0x14]\n    add r2, r6, #0\n    bl ov14_021F2E78\n    add r0, r7, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F2ED0(void) {
    /* Original at 0x021F2ED0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    str r1, [sp]\n    mov r0, #0xbf\n    add r4, r3, #0\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    add r6, r1, r0\n    lsl r7, r4, #2\n    ldr r0, [r6, r7]\n    str r2, [sp, #4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    mov r2, #0xac\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    beq _021F2F1A\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    bl ov14_021E60C0\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov14_021F2EA0\n    ldr r0, [r6, r7]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F2F20(void) {
    ov14_021F2ED0(0);
}

void ov14_021F2F3C(void) {
    /* Original at 0x021F2F3C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    add r6, r0, #0\n    ldr r4, _021F2F80 ; =0x00000000\n    beq _021F2F7C\n    ldr r7, _021F2F84 ; =0x000040B2\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    bl Mon_GetBoxMon\n    ldr r2, [r5, #0x34]\n    add r1, r0, #0\n    add r3, r2, r4\n    ldr r2, _021F2F84 ; =0x000040B2\n    add r0, r5, #0\n    ldrb r2, [r3, r2]\n    bl ov14_021F2EA0\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    add r1, r0, r4\n    ldrb r1, [r1, r7]\n    bl ov14_021F2A18\n    add r4, r4, #1\n    cmp r4, r6\n    blo _021F2F4E\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F2F80: .word 0x00000000\n    _021F2F84: .word 0x000040B2"
    );
    #endif
}

void ov14_021F2F88(void) {
    /* Original at 0x021F2F88 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r5, #0x1e\n    bhs _021F2FB4\n    mov r1, #6\n    bl _u32_div_f\n    add r1, r1, #1\n    mov r0, #0x18\n    mul r0, r1\n    strh r0, [r4]\n    add r0, r5, #0\n    mov r1, #6\n    bl _u32_div_f\n    mov r1, #0x18\n    mul r1, r0\n    add r1, #0x30\n    strh r1, [r6]\n    pop {r4, r5, r6, pc}\n    sub r5, #0x1e\n    ldr r0, _021F2FD4 ; =ov14_021F80BC\n    lsl r1, r5, #2\n    ldrsh r0, [r0, r1]\n    strh r0, [r4]\n    ldr r0, _021F2FD8 ; =ov14_021F80BE\n    ldrsh r0, [r0, r1]\n    sub r0, #0x90\n    strh r0, [r6]\n    cmp r3, #2\n    bne _021F2FD2\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add r0, #0x98\n    strh r0, [r4]\n    pop {r4, r5, r6, pc}\n    _021F2FD4: .word ov14_021F80BC\n    _021F2FD8: .word ov14_021F80BE"
    );
    #endif
}

void ov14_021F2FDC(void) {
    /* Original at 0x021F2FDC */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    ldr r6, _021F303C ; =ov14_021F80BC\n    str r0, [sp]\n    mov r4, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F3040 ; =0x000040B2\n    add r2, r0, r4\n    ldrb r7, [r2, r1]\n    mov r2, #2\n    ldrsh r2, [r6, r2]\n    lsl r1, r7, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    ldrsh r1, [r6, r1]\n    bl ManagedSprite_SetPositionXY\n    add r1, r4, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x1e\n    mov r2, #1\n    bl ov14_021F3190\n    ldr r0, [sp]\n    cmp r4, r0\n    ldr r0, [r5, #0x34]\n    bhs _021F3028\n    add r1, r7, #0\n    mov r2, #1\n    bl ov14_021F2A18\n    b _021F3030\n    add r1, r7, #0\n    mov r2, #0\n    bl ov14_021F2A18\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #6\n    blo _021F2FEC\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F303C: .word ov14_021F80BC\n    _021F3040: .word 0x000040B2"
    );
    #endif
}

void ov14_021F3044(void) {
    /* Original at 0x021F3044 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    ldr r6, _021F30A8 ; =ov14_021F80BC\n    str r0, [sp]\n    mov r4, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F30AC ; =0x000040B2\n    add r2, r0, r4\n    ldrb r7, [r2, r1]\n    mov r2, #2\n    ldrsh r2, [r6, r2]\n    lsl r1, r7, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    ldrsh r1, [r6, r1]\n    add r1, #0x98\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r1, r4, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x1e\n    mov r2, #1\n    bl ov14_021F3190\n    ldr r0, [sp]\n    cmp r4, r0\n    ldr r0, [r5, #0x34]\n    bhs _021F3096\n    add r1, r7, #0\n    mov r2, #1\n    bl ov14_021F2A18\n    b _021F309E\n    add r1, r7, #0\n    mov r2, #0\n    bl ov14_021F2A18\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #6\n    blo _021F3054\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F30A8: .word ov14_021F80BC\n    _021F30AC: .word 0x000040B2"
    );
    #endif
}

void ov14_021F30B0(void) {
    /* Original at 0x021F30B0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    ldr r6, _021F3114 ; =ov14_021F80BC\n    str r0, [sp]\n    mov r4, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F3118 ; =0x000040B2\n    add r2, r0, r4\n    ldrb r7, [r2, r1]\n    mov r2, #2\n    ldrsh r2, [r6, r2]\n    lsl r1, r7, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    sub r2, #0x90\n    lsl r2, r2, #0x10\n    ldrsh r1, [r6, r1]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r1, r4, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x1e\n    mov r2, #1\n    bl ov14_021F3190\n    ldr r0, [sp]\n    cmp r4, r0\n    ldr r0, [r5, #0x34]\n    bhs _021F3102\n    add r1, r7, #0\n    mov r2, #1\n    bl ov14_021F2A18\n    b _021F310A\n    add r1, r7, #0\n    mov r2, #0\n    bl ov14_021F2A18\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #6\n    blo _021F30C0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F3114: .word ov14_021F80BC\n    _021F3118: .word 0x000040B2"
    );
    #endif
}

void ov14_021F311C(void) {
    /* Original at 0x021F311C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    bl Party_GetCount\n    ldr r6, _021F3188 ; =ov14_021F80BC\n    str r0, [sp]\n    mov r4, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F318C ; =0x000040B2\n    add r2, r0, r4\n    ldrb r7, [r2, r1]\n    mov r2, #2\n    ldrsh r2, [r6, r2]\n    lsl r1, r7, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    ldrsh r1, [r6, r1]\n    sub r2, #0x90\n    lsl r2, r2, #0x10\n    add r1, #0x98\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r1, r4, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x1e\n    mov r2, #1\n    bl ov14_021F3190\n    ldr r0, [sp]\n    cmp r4, r0\n    ldr r0, [r5, #0x34]\n    bhs _021F3174\n    add r1, r7, #0\n    mov r2, #1\n    bl ov14_021F2A18\n    b _021F317C\n    add r1, r7, #0\n    mov r2, #0\n    bl ov14_021F2A18\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #6\n    blo _021F312C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F3188: .word ov14_021F80BC\n    _021F318C: .word 0x000040B2"
    );
    #endif
}

void ov14_021F3190(void) {
    /* Original at 0x021F3190 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r3, r5, r6\n    ldr r1, _021F31DC ; =0x00004094\n    cmp r2, #0\n    ldrb r4, [r3, r1]\n    bne _021F31B4\n    add r1, r4, #0\n    mov r2, #0\n    bl ov14_021F2A60\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x14\n    bl ov14_021F2A74\n    pop {r4, r5, r6, pc}\n    cmp r6, #0x1e\n    bhs _021F31C2\n    add r1, r4, #0\n    mov r2, #3\n    bl ov14_021F2A60\n    b _021F31CA\n    add r1, r4, #0\n    mov r2, #1\n    bl ov14_021F2A60\n    lsl r3, r6, #1\n    mov r2, #0x74\n    add r0, r5, #0\n    add r1, r4, #0\n    sub r2, r2, r3\n    bl ov14_021F2A74\n    pop {r4, r5, r6, pc}\n    nop\n    _021F31DC: .word 0x00004094"
    );
    #endif
}

void ov14_021F31E0(void) {
    /* Original at 0x021F31E0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r3, r4, r1\n    ldr r1, _021F320C ; =0x00004094\n    cmp r2, #0x1e\n    ldrb r5, [r3, r1]\n    bhs _021F31F8\n    add r1, r5, #0\n    mov r2, #3\n    bl ov14_021F2A60\n    b _021F3200\n    add r1, r5, #0\n    mov r2, #1\n    bl ov14_021F2A60\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0x14\n    bl ov14_021F2A74\n    pop {r3, r4, r5, pc}\n    _021F320C: .word 0x00004094"
    );
    #endif
}

void ov14_021F3210(void) {
    /* Original at 0x021F3210 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    str r1, [sp]\n    cmp r1, #0\n    blt _021F3228\n    mov r0, #0xb0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    sub r0, #0xb8\n    str r0, [sp, #0xc]\n    b _021F3232\n    mov r0, #7\n    mvn r0, r0\n    str r0, [sp, #8]\n    mov r0, #0xb0\n    str r0, [sp, #0xc]\n    mov r4, #0\n    add r7, sp, #0x14\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F32D0 ; =0x00004094\n    add r2, r0, r4\n    ldrb r1, [r2, r1]\n    add r2, sp, #0x14\n    str r1, [sp, #4]\n    lsl r1, r1, #2\n    str r1, [sp, #0x10]\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0x14\n    add r1, #2\n    bl ManagedSprite_GetPositionXY\n    mov r0, #2\n    ldrsh r1, [r7, r0]\n    ldr r0, [sp]\n    add r0, r1, r0\n    strh r0, [r7, #2]\n    mov r0, #2\n    ldrsh r1, [r7, r0]\n    ldr r0, [sp, #8]\n    cmp r1, r0\n    bne _021F32AA\n    ldr r0, [sp, #0xc]\n    ldr r1, _021F32D4 ; =0x00000458\n    strh r0, [r7, #2]\n    ldr r0, [r5, #0x34]\n    ldr r3, _021F32D8 ; =0x00004076\n    add r6, r0, r4\n    add r2, r0, r1\n    lsl r1, r4, #9\n    add r1, r2, r1\n    ldrb r3, [r6, r3]\n    ldr r2, [sp, #4]\n    bl ov14_021F2E78\n    ldr r1, [r5, #0x34]\n    ldr r0, [sp, #0x10]\n    add r2, r1, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r2, r0]\n    add r2, r1, r4\n    ldr r1, _021F32DC ; =0x00004058\n    ldrb r1, [r2, r1]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bne _021F32AA\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F34DC\n    ldr r1, [r5, #0x34]\n    ldr r0, [sp, #0x10]\n    mov r2, #0\n    add r1, r1, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r7, r1]\n    ldrsh r2, [r7, r2]\n    bl ManagedSprite_SetPositionXY\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x1e\n    blo _021F3236\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F32D0: .word 0x00004094\n    _021F32D4: .word 0x00000458\n    _021F32D8: .word 0x00004076\n    _021F32DC: .word 0x00004058"
    );
    #endif
}

void ov14_021F32E0(void) {
    /* Original at 0x021F32E0 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    ldr r1, [r0, #0x34]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r2, sp, #4\n    mov r1, #1\n    add r2, #1\n    add r3, sp, #4\n    bl sub_02019B1C\n    mov r4, #0\n    add r1, sp, #4\n    ldrsb r0, [r1, r4]\n    lsl r0, r0, #0x13\n    asr r7, r0, #0x10\n    mov r0, #1\n    ldrsb r0, [r1, r0]\n    lsl r0, r0, #0x13\n    asr r5, r0, #0x10\n    ldr r0, _021F334C ; =ov14_021F808C\n    lsl r1, r4, #1\n    add r2, r0, r1\n    ldr r0, [sp]\n    ldrb r2, [r2, #1]\n    ldr r6, [r0, #0x34]\n    ldr r0, _021F3350 ; =0x000040B2\n    add r3, r6, r4\n    ldrb r0, [r3, r0]\n    add r2, r7, r2\n    lsl r2, r2, #0x10\n    lsl r0, r0, #2\n    add r3, r6, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r3, r0]\n    ldr r3, _021F334C ; =ov14_021F808C\n    asr r2, r2, #0x10\n    ldrb r1, [r3, r1]\n    add r1, r5, r1\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #6\n    blo _021F330C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F334C: .word ov14_021F808C\n    _021F3350: .word 0x000040B2"
    );
    #endif
}

void ov14_021F3354(void) {
    /* Original at 0x021F3354 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xfe\n    lsl r0, r0, #0x16\n    str r0, [r4, #8]\n    mov r0, #0\n    strb r0, [r4, #7]\n    ldr r0, [r4]\n    mov r1, #1\n    bl ManagedSprite_SetAffineOverwriteMode\n    ldr r1, [r4, #8]\n    ldr r0, [r4]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineScale\n    ldr r0, [r4]\n    mov r1, #0\n    mov r2, #8\n    bl ManagedSprite_SetAffineTranslation\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F3380(void) {
    /* Original at 0x021F3380 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #7]\n    ldr r1, _021F33AC ; =0x3CCCCCCD\n    add r0, r0, #1\n    strb r0, [r4, #7]\n    ldr r0, [r4, #8]\n    bl _fsub\n    str r0, [r4, #8]\n    ldrb r0, [r4, #7]\n    cmp r0, #0x28\n    bne _021F339E\n    mov r0, #0\n    pop {r4, pc}\n    ldr r1, [r4, #8]\n    ldr r0, [r4]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineScale\n    mov r0, #1\n    pop {r4, pc}\n    _021F33AC: .word 0x3CCCCCCD"
    );
    #endif
}

void ov14_021F33B0(void) {
    /* Original at 0x021F33B0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #7]\n    ldr r1, _021F33E4 ; =0x3CCCCCCD\n    sub r0, r0, #2\n    strb r0, [r4, #7]\n    ldr r0, [r4, #8]\n    bl _fadd\n    ldr r1, _021F33E4 ; =0x3CCCCCCD\n    str r0, [r4, #8]\n    bl _fadd\n    str r0, [r4, #8]\n    ldrb r0, [r4, #7]\n    cmp r0, #0\n    bne _021F33D6\n    mov r0, #0\n    pop {r4, pc}\n    ldr r1, [r4, #8]\n    ldr r0, [r4]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineScale\n    mov r0, #1\n    pop {r4, pc}\n    _021F33E4: .word 0x3CCCCCCD"
    );
    #endif
}

void ov14_021F33E8(void) {
    /* Original at 0x021F33E8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov14_021F33FC\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F33FC(void) {
    /* Original at 0x021F33FC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    ldr r0, [r4]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineTranslation\n    mov r1, #0xfe\n    lsl r1, r1, #0x16\n    ldr r0, [r4]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineScale\n    ldr r0, [r4]\n    mov r1, #0\n    bl ManagedSprite_SetAffineOverwriteMode\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F3420(void) {
    /* Original at 0x021F3420 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [sp, #0x18]\n    add r7, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r0, #1\n    bne _021F3468\n    cmp r4, r6\n    bhs _021F3480\n    ldr r7, _021F3484 ; =0x00004094\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #6\n    mov r3, #0\n    bl ov14_021E6070\n    cmp r0, #0\n    ldr r0, [r5, #0x34]\n    bne _021F3454\n    add r1, r0, r4\n    ldrb r1, [r1, r7]\n    mov r2, #1\n    bl ov14_021F2A9C\n    b _021F3460\n    ldr r1, _021F3484 ; =0x00004094\n    add r2, r0, r4\n    ldrb r1, [r2, r1]\n    mov r2, #0\n    bl ov14_021F2A9C\n    add r4, r4, #1\n    cmp r4, r6\n    blo _021F3436\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, r6\n    bhs _021F3480\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F3484 ; =0x00004094\n    add r2, r0, r4\n    ldrb r1, [r2, r1]\n    add r2, r7, #0\n    bl ov14_021F2A9C\n    add r4, r4, #1\n    cmp r4, r6\n    blo _021F346C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F3484: .word 0x00004094"
    );
    #endif
}

void ov14_021F3488(void) {
    /* Original at 0x021F3488 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    mov r0, #0x80\n    add r7, r2, #0\n    tst r0, r5\n    beq _021F349A\n    mov r4, #1\n    b _021F349C\n    mov r4, #0\n    mov r0, #1\n    tst r0, r5\n    beq _021F34B0\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r2, #0\n    mov r3, #0x1e\n    str r4, [sp]\n    bl ov14_021F3420\n    mov r0, #2\n    tst r0, r5\n    beq _021F34C4\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r2, #0x1e\n    mov r3, #0x24\n    str r4, [sp]\n    bl ov14_021F3420\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F34C8(void) {
    /* Original at 0x021F34C8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, r1\n    ldr r1, _021F34D4 ; =0x00004094\n    ldrb r1, [r3, r1]\n    ldr r3, _021F34D8 ; =ov14_021F2A9C\n    bx r3\n    nop\n    _021F34D4: .word 0x00004094\n    _021F34D8: .word ov14_021F2A9C"
    );
    #endif
}

void ov14_021F34DC(void) {
    ov14_021F3420();
}

void ov14_021F34EC(void) {
    /* Original at 0x021F34EC */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F35AC ; =0x0000C11D\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4c\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F35B0 ; =0x0000C11E\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4c\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, _021F35B4 ; =0x0000C0FA\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4b\n    bl SpriteSystem_LoadPlttResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, _021F35B8 ; =0x0000C0FB\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4b\n    bl SpriteSystem_LoadPlttResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021F35B4 ; =0x0000C0FA\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4d\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021F35B4 ; =0x0000C0FA\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4e\n    bl SpriteSystem_LoadAnimResObj\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021F35AC: .word 0x0000C11D\n    _021F35B0: .word 0x0000C11E\n    _021F35B4: .word 0x0000C0FA\n    _021F35B8: .word 0x0000C0FB"
    );
    #endif
}

void ov14_021F35BC(void) {
    /* Original at 0x021F35BC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xbd\n    ldr r4, [r0, #0x34]\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    mov r3, #2\n    ldr r1, [r4, r1]\n    ldr r2, _021F360C ; =ov14_021F8210\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #0xc1\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0x10\n    sub r1, #0xc\n    mov r3, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021F3610 ; =ov14_021F8244\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #0xc2\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0xc2\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, pc}\n    _021F360C: .word ov14_021F8210\n    _021F3610: .word ov14_021F8244"
    );
    #endif
}

void ov14_021F3614(void) {
    /* Original at 0x021F3614 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    ldr r3, _021F36D4 ; =ov14_021F8098\n    add r7, r2, #0\n    add r2, sp, #0x14\n    add r6, r0, #0\n    add r4, r1, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r1, #0x32\n    mov r0, #0xa\n    lsl r1, r1, #6\n    bl Heap_AllocAtEnd\n    add r5, r0, #0\n    ldr r1, [r4]\n    add r0, sp, #0x24\n    mov r2, #2\n    mov r3, #0\n    bl GetBoxmonSpriteCharAndPlttNarcIds\n    ldrb r0, [r4, #0x12]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021F3658\n    ldrh r1, [r4, #4]\n    ldr r0, _021F36D8 ; =0x00000147\n    cmp r1, r0\n    bne _021F3658\n    add r0, #0xa7\n    b _021F365A\n    ldrh r0, [r4, #4]\n    str r5, [sp]\n    ldr r1, [r4, #8]\n    mov r2, #0xa\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #2\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    add r1, sp, #0x14\n    ldrh r0, [r1, #0x10]\n    ldrh r1, [r1, #0x12]\n    add r3, sp, #0x14\n    bl sub_02014510\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    add r4, r6, r0\n    lsl r6, r7, #2\n    ldr r0, [r4, r6]\n    ldr r0, [r0]\n    bl Sprite_GetImageProxy\n    mov r1, #2\n    bl NNS_G2dGetImageLocation\n    mov r1, #0x32\n    add r7, r0, #0\n    add r0, r5, #0\n    lsl r1, r1, #6\n    bl DC_FlushRange\n    mov r2, #0x32\n    add r0, r5, #0\n    add r1, r7, #0\n    lsl r2, r2, #6\n    bl GXS_LoadOBJ\n    ldr r0, [r4, r6]\n    ldr r0, [r0]\n    bl Sprite_GetPaletteProxy\n    mov r1, #2\n    bl NNS_G2dGetImagePaletteLocation\n    add r3, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    add r1, sp, #0x14\n    ldrh r0, [r1, #0x10]\n    ldrh r1, [r1, #0x14]\n    mov r2, #5\n    bl GfGfxLoader_GXLoadPal\n    add r0, r5, #0\n    bl Heap_Free\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _021F36D4: .word ov14_021F8098\n    _021F36D8: .word 0x00000147"
    );
    #endif
}

void ov14_021F36DC(void) {
    /* Original at 0x021F36DC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    ldr r0, [r5, #0x34]\n    ldr r2, _021F3710 ; =0x000088D0\n    ldrh r2, [r0, r2]\n    add r4, r4, r2\n    add r2, r4, #0\n    bl ov14_021F3614\n    ldr r1, [r5, #0x34]\n    lsl r0, r4, #2\n    add r1, r1, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    ldr r3, [r5, #0x34]\n    ldr r1, _021F3710 ; =0x000088D0\n    mov r0, #1\n    ldrh r2, [r3, r1]\n    eor r0, r2\n    strh r0, [r3, r1]\n    pop {r3, r4, r5, pc}\n    _021F3710: .word 0x000088D0"
    );
    #endif
}

void ov14_021F3714(void) {
    /* Original at 0x021F3714 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F37E0 ; =0x0000C11F\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x4f\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    mov r1, #2\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _021F37E4 ; =0x0000C0FC\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x12\n    bl SpriteSystem_LoadPlttResObj\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F37E8 ; =0x0000C120\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x4f\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    mov r1, #2\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, _021F37EC ; =0x0000C0FD\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x12\n    bl SpriteSystem_LoadPlttResObj\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F37F0 ; =0x0000C0FB\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x50\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F37F0 ; =0x0000C0FB\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x51\n    bl SpriteSystem_LoadAnimResObj\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021F37E0: .word 0x0000C11F\n    _021F37E4: .word 0x0000C0FC\n    _021F37E8: .word 0x0000C120\n    _021F37EC: .word 0x0000C0FD\n    _021F37F0: .word 0x0000C0FB"
    );
    #endif
}

void ov14_021F37F4(void) {
    /* Original at 0x021F37F4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xbd\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, _021F383C ; =ov14_021F83E4\n    bl SpriteSystem_NewSprite\n    mov r1, #0xca\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    mov r3, #2\n    ldr r1, [r4, r1]\n    ldr r2, _021F3840 ; =ov14_021F8418\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #0xcb\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, pc}\n    nop\n    _021F383C: .word ov14_021F83E4\n    _021F3840: .word ov14_021F8418"
    );
    #endif
}

void ov14_021F3844(void) {
    /* Original at 0x021F3844 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r1, r0, #0\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #0x12\n    mov r2, #0\n    add r3, sp, #8\n    bl GfGfxLoader_GetCharData\n    ldr r2, [sp, #8]\n    mov r3, #2\n    add r4, r0, #0\n    ldr r2, [r2, #0x14]\n    add r0, r5, #0\n    mov r1, #0xb\n    lsl r3, r3, #8\n    bl ov14_021F2C1C\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0xca\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r0, [r0]\n    bl Sprite_GetPaletteProxy\n    mov r1, #1\n    bl NNS_G2dGetImagePaletteLocation\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #2\n    bl GetItemIndexMapping\n    add r1, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #0x12\n    mov r2, #1\n    add r3, r4, #0\n    bl GfGfxLoader_GXLoadPal\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F38B0(void) {
    /* Original at 0x021F38B0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r1, r0, #0\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #0x12\n    mov r2, #0\n    add r3, sp, #8\n    bl GfGfxLoader_GetCharData\n    ldr r2, [sp, #8]\n    mov r3, #2\n    add r4, r0, #0\n    ldr r2, [r2, #0x14]\n    add r0, r5, #0\n    mov r1, #0xc\n    lsl r3, r3, #8\n    bl ov14_021F2C50\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0xcb\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r0, [r0]\n    bl Sprite_GetPaletteProxy\n    mov r1, #2\n    bl NNS_G2dGetImagePaletteLocation\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #2\n    bl GetItemIndexMapping\n    add r1, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #0x12\n    mov r2, #5\n    add r3, r4, #0\n    bl GfGfxLoader_GXLoadPal\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F391C(void) {
    /* Original at 0x021F391C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #1\n    bne _021F3940\n    mov r0, #0xca\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ManagedSprite_SetAffineOverwriteMode\n    mov r0, #0xca\n    lsl r0, r0, #2\n    mov r1, #0xc\n    ldr r0, [r4, r0]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineTranslation\n    pop {r4, pc}\n    mov r0, #0xca\n    lsl r0, r0, #2\n    mov r1, #0\n    ldr r0, [r4, r0]\n    add r2, r1, #0\n    bl ManagedSprite_SetAffineTranslation\n    mov r0, #0xca\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAffineOverwriteMode\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F395C(void) {
    /* Original at 0x021F395C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0xca\n    lsl r3, r3, #2\n    ldr r0, [r0, r3]\n    ldr r3, _021F3968 ; =ManagedSprite_SetPositionXY\n    bx r3\n    nop\n    _021F3968: .word ManagedSprite_SetPositionXY"
    );
    #endif
}

void ov14_021F396C(void) {
    /* Original at 0x021F396C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    add r0, r1, #0\n    add r1, sp, #0\n    add r3, r2, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ov14_021F2F88\n    add r3, sp, #0\n    mov r1, #2\n    mov r2, #0\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, r4, #0\n    add r1, #8\n    add r2, #8\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ov14_021F395C\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021F39A0(void) {
    /* Original at 0x021F39A0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    add r0, r1, #0\n    add r1, sp, #0\n    add r3, r2, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ov14_021F2F88\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    mov r1, #2\n    ldrsh r1, [r3, r1]\n    add r2, r2, #4\n    lsl r2, r2, #0x10\n    add r0, r4, #0\n    asr r2, r2, #0x10\n    bl ov14_021F395C\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021F39D0(void) {
    /* Original at 0x021F39D0 */
    /* Requires manual decompilation - 164 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x48\n    add r5, r0, #0\n    ldr r0, _021F3B24 ; =0x000088C8\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    bne _021F39E0\n    b _021F3B1E\n    mov r0, #0xca\n    lsl r0, r0, #2\n    add r1, sp, #0x10\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #0x10\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    bne _021F3AA0\n    ldr r4, _021F3B28 ; =ov14_021F83E4\n    add r3, sp, #0x14\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F3A00\n    ldr r0, [r4]\n    str r0, [r3]\n    mov r0, #0xca\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ManagedSprite_GetDrawPriority\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    mov r0, #0xca\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ManagedSprite_GetPriority\n    str r0, [sp, #0x40]\n    ldr r0, _021F3B2C ; =0x0000C11F\n    mov r1, #1\n    str r0, [sp, #0x28]\n    ldr r0, _021F3B30 ; =0x000088D2\n    ldr r7, _021F3B34 ; =ov14_021F8070\n    strh r1, [r5, r0]\n    mov r0, #0\n    ldr r6, _021F3B38 ; =ov14_021F8078\n    str r0, [sp, #8]\n    add r4, r5, #0\n    add r1, sp, #0x10\n    mov r0, #2\n    ldrsh r1, [r1, r0]\n    mov r0, #0\n    ldrsb r0, [r7, r0]\n    add r2, sp, #0x14\n    add r1, r1, r0\n    add r0, sp, #0x10\n    strh r1, [r0, #4]\n    add r1, r0, #0\n    mov r0, #0\n    ldrsh r1, [r1, r0]\n    ldrsb r0, [r6, r0]\n    add r1, r1, r0\n    add r0, sp, #0x10\n    strh r1, [r0, #6]\n    mov r0, #0xbd\n    mov r1, #0xbe\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    bl SpriteSystem_NewSprite\n    mov r1, #0x3f\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r0, [r4, r0]\n    mov r1, #8\n    bl ManagedSprite_SetPaletteOverride\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [sp, #8]\n    add r7, r7, #1\n    add r0, r0, #1\n    add r6, r6, #1\n    add r4, r4, #4\n    str r0, [sp, #8]\n    cmp r0, #8\n    blo _021F3A3A\n    ldr r0, _021F3B30 ; =0x000088D2\n    mov r1, #0\n    add sp, #0x48\n    strh r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, #0xc8\n    ldr r0, [r5, r0]\n    bl ManagedSprite_GetDrawPriority\n    str r0, [sp, #0xc]\n    mov r0, #0xca\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ManagedSprite_GetPriority\n    str r0, [sp, #4]\n    mov r0, #0\n    ldr r7, _021F3B38 ; =ov14_021F8078\n    ldr r6, _021F3B34 ; =ov14_021F8070\n    str r0, [sp]\n    add r4, r5, #0\n    add r2, sp, #0x10\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    mov r2, #0\n    ldrsb r2, [r6, r2]\n    add r3, sp, #0x10\n    mov r0, #0x3f\n    add r1, r1, r2\n    mov r2, #0\n    ldrsh r3, [r3, r2]\n    ldrsb r2, [r7, r2]\n    lsl r0, r0, #4\n    lsl r1, r1, #0x10\n    add r2, r3, r2\n    lsl r2, r2, #0x10\n    ldr r0, [r4, r0]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r1, [sp]\n    ldr r2, [sp, #0xc]\n    add r0, r5, #0\n    add r1, #0x3d\n    add r2, r2, #1\n    bl ov14_021F2A74\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r1, [sp, #4]\n    bl ManagedSprite_SetPriority\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [sp]\n    add r7, r7, #1\n    add r0, r0, #1\n    add r6, r6, #1\n    add r4, r4, #4\n    str r0, [sp]\n    cmp r0, #8\n    blo _021F3AC0\n    add sp, #0x48\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F3B24: .word 0x000088C8\n    _021F3B28: .word ov14_021F83E4\n    _021F3B2C: .word 0x0000C11F\n    _021F3B30: .word 0x000088D2\n    _021F3B34: .word ov14_021F8070\n    _021F3B38: .word ov14_021F8078"
    );
    #endif
}

void ov14_021F3B3C(void) {
    ManagedSprite_SetDrawFlag(0, 0x3f, 1);
}

void ov14_021F3B5C(void) {
    /* Original at 0x021F3B5C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xca\n    lsl r0, r0, #2\n    add r1, sp, #0\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021F3BB6\n    ldr r6, _021F3BB8 ; =ov14_021F8078\n    ldr r4, _021F3BBC ; =ov14_021F8070\n    mov r7, #0\n    add r2, sp, #0\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    mov r2, #0\n    ldrsb r2, [r4, r2]\n    add r3, sp, #0\n    mov r0, #0x3f\n    add r1, r1, r2\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    mov r3, #0\n    ldrsb r3, [r6, r3]\n    lsl r0, r0, #4\n    lsl r1, r1, #0x10\n    add r2, r2, r3\n    lsl r2, r2, #0x10\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r7, r7, #1\n    add r6, r6, #1\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r7, #8\n    blo _021F3B80\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F3BB8: .word ov14_021F8078\n    _021F3BBC: .word ov14_021F8070"
    );
    #endif
}

void ov14_021F3BC0(void) {
    /* Original at 0x021F3BC0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r4, r0]\n    mov r1, #0x10\n    add r2, #1\n    add r3, sp, #0\n    bl sub_02019B1C\n    mov r0, #0xcb\n    lsl r0, r0, #2\n    add r3, sp, #0\n    mov r2, #0\n    ldrsb r2, [r3, r2]\n    ldr r0, [r4, r0]\n    mov r1, #0x12\n    lsl r3, r2, #3\n    mov r2, #0x5a\n    lsl r2, r2, #2\n    add r2, r3, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0xcb\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov14_021F3C08(void) {
    /* Original at 0x021F3C08 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F3CA4 ; =0x0000C121\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x52\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021F3CA8 ; =0x0000C122\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x52\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, _021F3CAC ; =0x0000C0FE\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #8\n    mov r3, #0x4a\n    bl SpriteSystem_LoadPlttResObj\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F3CB0 ; =0x0000C0FC\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x53\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F3CB0 ; =0x0000C0FC\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x54\n    bl SpriteSystem_LoadAnimResObj\n    add sp, #0x10\n    pop {r4, pc}\n    _021F3CA4: .word 0x0000C121\n    _021F3CA8: .word 0x0000C122\n    _021F3CAC: .word 0x0000C0FE\n    _021F3CB0: .word 0x0000C0FC"
    );
    #endif
}

void ov14_021F3CB4(void) {
    /* Original at 0x021F3CB4 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xbd\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    mov r3, #2\n    ldr r1, [r4, r1]\n    ldr r2, _021F3D04 ; =ov14_021F844C\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #0x33\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0x3c\n    sub r1, #0x38\n    mov r3, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021F3D08 ; =ov14_021F8480\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #0xcd\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r0, r1, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0xcd\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, pc}\n    _021F3D04: .word ov14_021F844C\n    _021F3D08: .word ov14_021F8480"
    );
    #endif
}

void ov14_021F3D0C(void) {
    /* Original at 0x021F3D0C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r1, #0\n    add r5, r0, #0\n    add r4, r2, #0\n    bl sub_020776B4\n    add r6, r0, #0\n    add r0, r7, #0\n    bl sub_02077678\n    add r1, r0, #0\n    mov r0, #0xa\n    str r0, [sp]\n    add r0, r6, #0\n    mov r2, #1\n    add r3, sp, #4\n    bl GfGfxLoader_GetCharData\n    ldr r2, [sp, #4]\n    mov r3, #1\n    add r6, r0, #0\n    ldr r2, [r2, #0x14]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r3, r3, #8\n    bl ov14_021F2C50\n    add r0, r6, #0\n    bl Heap_Free\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    add r5, r5, r0\n    lsl r4, r4, #2\n    ldr r0, [r5, r4]\n    bl ManagedSprite_GetPaletteOverrideOffset\n    add r6, r0, #0\n    add r0, r7, #0\n    bl sub_0207769C\n    add r1, r0, #0\n    ldr r0, [r5, r4]\n    add r1, r6, r1\n    bl ManagedSprite_SetPaletteOverride\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F3D70(void) {
    /* Original at 0x021F3D70 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrb r1, [r4, #0x12]\n    add r5, r0, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    beq _021F3D98\n    mov r0, #0x33\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0xcd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    ldrb r1, [r4, #0xc]\n    ldr r3, _021F3DE0 ; =0x0000C121\n    mov r2, #0xd\n    bl ov14_021F3D0C\n    mov r0, #0x33\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    ldrb r1, [r4, #0xd]\n    cmp r1, #0\n    beq _021F3DD2\n    ldrb r0, [r4, #0xc]\n    cmp r0, r1\n    beq _021F3DD2\n    ldr r3, _021F3DE4 ; =0x0000C122\n    add r0, r5, #0\n    mov r2, #0xe\n    bl ov14_021F3D0C\n    mov r0, #0xcd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    mov r0, #0xcd\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    _021F3DE0: .word 0x0000C121\n    _021F3DE4: .word 0x0000C122"
    );
    #endif
}

void ov14_021F3DE8(void) {
    /* Original at 0x021F3DE8 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021F3E64 ; =0x0000C12D\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x42\n    bl SpriteSystem_LoadCharResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _021F3E68 ; =0x0000C101\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x45\n    bl SpriteSystem_LoadPlttResObj\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F3E6C ; =0x0000C0FF\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x43\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F3E6C ; =0x0000C0FF\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x13\n    mov r3, #0x44\n    bl SpriteSystem_LoadAnimResObj\n    add sp, #0x10\n    pop {r4, pc}\n    _021F3E64: .word 0x0000C12D\n    _021F3E68: .word 0x0000C101\n    _021F3E6C: .word 0x0000C0FF"
    );
    #endif
}

void ov14_021F3E70(void) {
    /* Original at 0x021F3E70 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xbd\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, _021F3F48 ; =ov14_021F81A8\n    bl SpriteSystem_NewSprite\n    mov r1, #0xbf\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #8\n    sub r1, r1, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021F3F4C ; =ov14_021F81DC\n    bl SpriteSystem_NewSprite\n    mov r1, #3\n    lsl r1, r1, #8\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0xc\n    sub r1, #8\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021F3F50 ; =ov14_021F8278\n    bl SpriteSystem_NewSprite\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0x18\n    sub r1, #0x14\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021F3F54 ; =ov14_021F82AC\n    bl SpriteSystem_NewSprite\n    mov r1, #0x31\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0x1c\n    sub r1, #0x18\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021F3F58 ; =ov14_021F82E0\n    bl SpriteSystem_NewSprite\n    mov r1, #0xc5\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0x20\n    sub r1, #0x1c\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021F3F5C ; =ov14_021F8314\n    bl SpriteSystem_NewSprite\n    mov r1, #0xc6\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0x24\n    sub r1, #0x20\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021F3F60 ; =ov14_021F8348\n    bl SpriteSystem_NewSprite\n    mov r1, #0xc7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0x28\n    sub r1, #0x24\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021F3F64 ; =ov14_021F837C\n    bl SpriteSystem_NewSprite\n    mov r1, #0x32\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0x2c\n    sub r1, #0x28\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021F3F68 ; =ov14_021F83B0\n    bl SpriteSystem_NewSprite\n    mov r1, #0xc9\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl ov14_021F2A18\n    pop {r4, pc}\n    nop\n    _021F3F48: .word ov14_021F81A8\n    _021F3F4C: .word ov14_021F81DC\n    _021F3F50: .word ov14_021F8278\n    _021F3F54: .word ov14_021F82AC\n    _021F3F58: .word ov14_021F82E0\n    _021F3F5C: .word ov14_021F8314\n    _021F3F60: .word ov14_021F8348\n    _021F3F64: .word ov14_021F837C\n    _021F3F68: .word ov14_021F83B0"
    );
    #endif
}

void ov14_021F3F6C(void) {
    /* Original at 0x021F3F6C */
    /* Requires manual decompilation - 165 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    add r6, r0, #0\n    add r0, #0x21\n    ldrb r0, [r0]\n    cmp r0, #0xff\n    bne _021F3F7C\n    b _021F40C0\n    ldr r4, [r6, #0x34]\n    add r2, sp, #0x14\n    add r1, r4, r0\n    ldr r0, _021F40C4 ; =0x00004094\n    ldrb r0, [r1, r0]\n    add r1, sp, #0x14\n    add r1, #2\n    str r0, [sp, #0xc]\n    lsl r5, r0, #2\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    add r7, r4, r0\n    ldr r0, [r7, r5]\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _021F402C\n    ldr r3, _021F40C8 ; =ov14_021F810C\n    add r2, sp, #0x18\n    mov r6, #6\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r6, r6, #1\n    bne _021F3FAA\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r7, r5]\n    bl ManagedSprite_GetDrawPriority\n    add r0, r0, #1\n    str r0, [sp, #0x20]\n    ldr r0, [r7, r5]\n    bl ManagedSprite_GetPriority\n    str r0, [sp, #0x44]\n    ldr r1, _021F40CC ; =0x0000C0E0\n    ldr r0, [sp, #0xc]\n    mov r5, #0\n    add r0, r0, r1\n    str r0, [sp, #0x2c]\n    ldr r0, _021F40D0 ; =0x000088D2\n    mov r1, #1\n    strh r1, [r4, r0]\n    add r7, sp, #0x14\n    mov r0, #2\n    ldrsh r1, [r7, r0]\n    ldr r0, _021F40D4 ; =ov14_021F8070\n    add r2, sp, #0x18\n    ldrsb r0, [r0, r5]\n    add r0, r1, r0\n    strh r0, [r7, #4]\n    mov r0, #0\n    ldrsh r1, [r7, r0]\n    ldr r0, _021F40D8 ; =ov14_021F8078\n    ldrsb r0, [r0, r5]\n    add r0, r1, r0\n    strh r0, [r7, #6]\n    lsl r0, r5, #2\n    add r6, r4, r0\n    mov r0, #0xbd\n    mov r1, #0xbe\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    bl SpriteSystem_NewSprite\n    mov r1, #0x3f\n    lsl r1, r1, #4\n    str r0, [r6, r1]\n    add r0, r1, #0\n    ldr r0, [r6, r0]\n    mov r1, #8\n    bl ManagedSprite_SetPaletteOverride\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #8\n    blo _021F3FDA\n    ldr r0, _021F40D0 ; =0x000088D2\n    mov r1, #0\n    add sp, #0x4c\n    strh r1, [r4, r0]\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r7, r5]\n    ldr r0, [r0]\n    bl Sprite_GetImageProxy\n    str r0, [sp, #8]\n    ldr r0, [r7, r5]\n    bl ManagedSprite_GetDrawPriority\n    str r0, [sp, #0x10]\n    ldr r0, [r7, r5]\n    bl ManagedSprite_GetPriority\n    str r0, [sp, #4]\n    mov r5, #0\n    lsl r7, r5, #2\n    mov r0, #0x3f\n    add r1, r4, r7\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    str r1, [sp]\n    ldr r0, [r0]\n    ldr r1, [sp, #8]\n    bl Sprite_SetImageProxy\n    mov r0, #0x3f\n    ldr r1, [sp]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r2, sp, #0x14\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    ldr r2, _021F40D4 ; =ov14_021F8070\n    add r3, sp, #0x14\n    ldrsb r2, [r2, r5]\n    add r1, r1, r2\n    mov r2, #0\n    ldrsh r3, [r3, r2]\n    ldr r2, _021F40D8 ; =ov14_021F8078\n    lsl r1, r1, #0x10\n    ldrsb r2, [r2, r5]\n    asr r1, r1, #0x10\n    add r2, r3, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r2, [sp, #0x10]\n    add r1, r5, #0\n    ldr r0, [r6, #0x34]\n    add r1, #0x3d\n    add r2, r2, #1\n    bl ov14_021F2A74\n    ldr r0, [r6, #0x34]\n    add r1, r0, r7\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #4]\n    bl ManagedSprite_SetPriority\n    ldr r0, [r6, #0x34]\n    add r1, r0, r7\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #8\n    blo _021F4048\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}\n    _021F40C4: .word 0x00004094\n    _021F40C8: .word ov14_021F810C\n    _021F40CC: .word 0x0000C0E0\n    _021F40D0: .word 0x000088D2\n    _021F40D4: .word ov14_021F8070\n    _021F40D8: .word ov14_021F8078"
    );
    #endif
}

void ov14_021F40DC(void) {
    ov14_021F40E8();
}

void ov14_021F40E8(void) {
    /* Original at 0x021F40E8 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r5, r0, #0\n    cmp r7, #1\n    bne _021F40F6\n    mov r7, #1\n    b _021F40F8\n    mov r7, #0\n    mov r6, #0\n    add r4, r6, #0\n    ldr r0, [r5, #0x34]\n    add r1, r0, r4\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _021F4164\n    add r1, r7, #0\n    bl ManagedSprite_SetDrawFlag\n    cmp r7, #1\n    bne _021F4164\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r1, [r0]\n    cmp r1, #0xff\n    beq _021F4164\n    ldr r0, [r5, #0x34]\n    add r2, r0, r1\n    ldr r1, _021F4170 ; =0x00004094\n    ldrb r1, [r2, r1]\n    lsl r1, r1, #2\n    str r1, [sp]\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetDrawPriority\n    add r2, r0, #0\n    add r1, r6, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x3d\n    add r2, r2, #1\n    bl ov14_021F2A74\n    ldr r1, [r5, #0x34]\n    ldr r0, [sp]\n    add r1, r1, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl ManagedSprite_GetPriority\n    add r1, r0, #0\n    ldr r0, [r5, #0x34]\n    add r2, r0, r4\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r2, r0]\n    bl ManagedSprite_SetPriority\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #8\n    blo _021F40FC\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F4170: .word 0x00004094"
    );
    #endif
}

void ov14_021F4174(void) {
    /* Original at 0x021F4174 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r1, r0, #0\n    add r1, #0x21\n    ldrb r1, [r1]\n    cmp r1, #0xff\n    beq _021F41D4\n    ldr r4, [r0, #0x34]\n    ldr r0, _021F41D8 ; =0x00004094\n    add r1, r4, r1\n    ldrb r0, [r1, r0]\n    add r2, sp, #0\n    lsl r0, r0, #2\n    add r1, r4, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    bl ManagedSprite_GetPositionXY\n    ldr r7, _021F41DC ; =ov14_021F8070\n    mov r5, #0\n    add r6, sp, #0\n    lsl r0, r5, #2\n    add r1, r4, r0\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r2, [r6, r1]\n    ldrsb r1, [r7, r5]\n    ldr r3, _021F41E0 ; =ov14_021F8078\n    add r1, r2, r1\n    mov r2, #0\n    lsl r1, r1, #0x10\n    ldrsh r2, [r6, r2]\n    ldrsb r3, [r3, r5]\n    asr r1, r1, #0x10\n    add r2, r2, r3\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #8\n    blo _021F41A2\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F41D8: .word 0x00004094\n    _021F41DC: .word ov14_021F8070\n    _021F41E0: .word ov14_021F8078"
    );
    #endif
}

void ov14_021F41E4(void) {
    /* Original at 0x021F41E4 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r4, #0\n    add r5, r0, #0\n    add r6, r4, #0\n    mov r7, #1\n    ldr r0, _021F426C ; =0x0000C123\n    str r6, [sp]\n    str r7, [sp, #4]\n    add r0, r4, r0\n    str r0, [sp, #8]\n    mov r0, #0xbd\n    mov r1, #0xbe\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    mov r2, #0x13\n    mov r3, #0x46\n    bl SpriteSystem_LoadCharResObj\n    add r4, r4, #1\n    cmp r4, #6\n    blo _021F41F0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _021F4270 ; =0x0000C0FF\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x13\n    mov r3, #0x47\n    bl SpriteSystem_LoadPlttResObj\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F4274 ; =0x0000C0FD\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x13\n    mov r3, #0x48\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F4274 ; =0x0000C0FD\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x13\n    mov r3, #0x49\n    bl SpriteSystem_LoadAnimResObj\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F426C: .word 0x0000C123\n    _021F4270: .word 0x0000C0FF\n    _021F4274: .word 0x0000C0FD"
    );
    #endif
}

void ov14_021F4278(void) {
    /* Original at 0x021F4278 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x6c\n    mov r7, #0\n    ldr r3, _021F42E4 ; =ov14_021F8140\n    str r0, [sp]\n    add r4, r7, #0\n    add r5, r0, #0\n    add r2, sp, #4\n    mov r6, #6\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r6, r6, #1\n    bne _021F428A\n    ldr r0, [r3]\n    str r0, [r2]\n    add r6, sp, #4\n    add r3, sp, #0x38\n    mov r2, #6\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F429C\n    ldr r0, [r6]\n    add r1, sp, #4\n    str r0, [r3]\n    mov r0, #0x34\n    ldrsh r0, [r1, r0]\n    add r1, r0, r4\n    add r0, sp, #4\n    strh r1, [r0, #0x34]\n    ldr r0, _021F42E8 ; =0x0000C123\n    ldr r1, [sp]\n    add r0, r7, r0\n    str r0, [sp, #0x4c]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r2, r1, #0\n    mov r1, #0xbe\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    add r2, sp, #0x38\n    bl SpriteSystem_NewSprite\n    mov r1, #0xce\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r7, r7, #1\n    add r4, #0x22\n    add r5, r5, #4\n    cmp r7, #6\n    blo _021F4296\n    add sp, #0x6c\n    pop {r4, r5, r6, r7, pc}\n    _021F42E4: .word ov14_021F8140\n    _021F42E8: .word 0x0000C123"
    );
    #endif
}

void ov14_021F42EC(void) {
    /* Original at 0x021F42EC */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r4, #0\n    add r5, r0, #0\n    add r6, r4, #0\n    mov r7, #1\n    ldr r0, _021F4378 ; =0x0000C129\n    str r6, [sp]\n    str r7, [sp, #4]\n    add r0, r4, r0\n    str r0, [sp, #8]\n    mov r0, #0xbd\n    mov r1, #0xbe\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    mov r2, #0x13\n    mov r3, #0x4a\n    bl SpriteSystem_LoadCharResObj\n    add r4, r4, #1\n    cmp r4, #4\n    blo _021F42F8\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xc1\n    mov r1, #0xbd\n    lsl r0, r0, #8\n    lsl r1, r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x13\n    mov r3, #0x4b\n    bl SpriteSystem_LoadPlttResObj\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F437C ; =0x0000C0FE\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x13\n    mov r3, #0x4c\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _021F437C ; =0x0000C0FE\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x13\n    mov r3, #0x4d\n    bl SpriteSystem_LoadAnimResObj\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F4378: .word 0x0000C129\n    _021F437C: .word 0x0000C0FE"
    );
    #endif
}

void ov14_021F4380(void) {
    /* Original at 0x021F4380 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x6c\n    mov r7, #0\n    ldr r3, _021F43EC ; =ov14_021F8174\n    str r0, [sp]\n    add r4, r7, #0\n    add r5, r0, #0\n    add r2, sp, #4\n    mov r6, #6\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r6, r6, #1\n    bne _021F4392\n    ldr r0, [r3]\n    str r0, [r2]\n    add r6, sp, #4\n    add r3, sp, #0x38\n    mov r2, #6\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F43A4\n    ldr r0, [r6]\n    add r1, sp, #4\n    str r0, [r3]\n    mov r0, #0x34\n    ldrsh r0, [r1, r0]\n    add r1, r0, r4\n    add r0, sp, #4\n    strh r1, [r0, #0x34]\n    ldr r0, _021F43F0 ; =0x0000C129\n    ldr r1, [sp]\n    add r0, r7, r0\n    str r0, [sp, #0x4c]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r2, r1, #0\n    mov r1, #0xbe\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    add r2, sp, #0x38\n    bl SpriteSystem_NewSprite\n    mov r1, #0x35\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r7, r7, #1\n    add r4, #0x2e\n    add r5, r5, #4\n    cmp r7, #4\n    blo _021F439E\n    add sp, #0x6c\n    pop {r4, r5, r6, r7, pc}\n    _021F43EC: .word ov14_021F8174\n    _021F43F0: .word 0x0000C129"
    );
    #endif
}

void ov14_021F43F4(void) {
    ov14_021F2A18(0, r1);
    ov14_021F2A18(r5, 1, r4);
}

void ov14_021F4410(void) {
    /* Original at 0x021F4410 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021F4420 ; =0x00000414\n    ldr r3, _021F4424 ; =sub_020136B4\n    ldr r0, [r0, r1]\n    mov r1, #0x2f\n    mvn r1, r1\n    add r2, r1, #0\n    add r2, #0x28\n    bx r3\n    _021F4420: .word 0x00000414\n    _021F4424: .word sub_020136B4"
    );
    #endif
}

void ov14_021F4428(void) {
    /* Original at 0x021F4428 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xc3\n    mov r1, #0xc\n    add r2, r1, #0\n    ldr r4, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    sub r2, #0x21\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x31\n    lsl r0, r0, #4\n    mov r2, #0x14\n    ldr r0, [r4, r0]\n    mov r1, #0xf4\n    mvn r2, r2\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0xc5\n    lsl r0, r0, #2\n    mov r1, #0x2b\n    add r2, r1, #0\n    ldr r0, [r4, r0]\n    sub r2, #0x40\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    mov r1, #0x80\n    add r2, r1, #0\n    ldr r0, [r4, r0]\n    sub r2, #0xa8\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0xc7\n    lsl r0, r0, #2\n    mov r1, #0x80\n    add r2, r1, #0\n    ldr r0, [r4, r0]\n    sub r2, #0x9c\n    bl ManagedSprite_SetPositionXY\n    add r0, r5, #0\n    bl ov14_021F462C\n    mov r1, #7\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov14_021F29E4\n    add r0, r4, #0\n    bl ov14_021F4410\n    ldr r0, _021F44AC ; =0x00000414\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl TextOBJ_SetSpritesDrawFlag\n    ldr r0, _021F44B0 ; =0x00000424\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl TextOBJ_SetSpritesDrawFlag\n    pop {r3, r4, r5, pc}\n    nop\n    _021F44AC: .word 0x00000414\n    _021F44B0: .word 0x00000424"
    );
    #endif
}

void ov14_021F44B4(void) {
    /* Original at 0x021F44B4 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r5, #0\n    add r6, r1, #0\n    mov r7, #4\n    add r4, #0x10\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    add r1, sp, #0\n    ldr r0, [r4, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    add r2, sp, #0\n    mov r1, #2\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldrsh r1, [r2, r1]\n    add r3, r2, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    ldr r0, [r4, r0]\n    add r2, r2, r6\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r7, r7, #1\n    add r4, r4, #4\n    cmp r7, #8\n    bls _021F44C0\n    add r0, r5, #0\n    bl ov14_021F4410\n    mov r4, #0\n    add r7, sp, #0\n    mov r0, #0x35\n    lsl r0, r0, #4\n    add r1, sp, #0\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r2, #0\n    ldrsh r2, [r7, r2]\n    mov r0, #0x35\n    mov r1, #2\n    lsl r0, r0, #4\n    add r2, r2, r6\n    lsl r2, r2, #0x10\n    ldrsh r1, [r7, r1]\n    ldr r0, [r5, r0]\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blo _021F44FE\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F4530(void) {
    /* Original at 0x021F4530 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x25\n    ldrb r1, [r1]\n    bl ov14_021E7930\n    add r4, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F4598 ; =0x0000044D\n    ldrb r1, [r0, r1]\n    lsr r2, r1, #2\n    lsr r1, r4, #2\n    cmp r2, r1\n    bne _021F4558\n    mov r1, #6\n    mov r2, #1\n    bl ov14_021F2A18\n    b _021F4560\n    mov r1, #6\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r0, #0xc5\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0xc5\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #3\n    add r2, r4, #0\n    and r2, r1\n    mov r1, #0x2e\n    mul r1, r2\n    add r1, #0x3b\n    lsl r1, r1, #0x10\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    pop {r3, r4, r5, pc}\n    nop\n    _021F4598: .word 0x0000044D"
    );
    #endif
}

void ov14_021F459C(void) {
    /* Original at 0x021F459C */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r1, _021F4628 ; =0x0000044D\n    ldrb r1, [r0, r1]\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1e\n    sub r2, r2, r3\n    mov r1, #0x1e\n    ror r2, r1\n    add r1, r3, r2\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    add r1, #0x15\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r2, sp, #0\n    add r1, sp, #0\n    add r2, #2\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0xc6\n    add r2, sp, #0\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #4\n    add r2, #2\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0xc6\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r3, sp, #0\n    mov r1, #0\n    mov r2, #2\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0xc7\n    add r2, sp, #0\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #4\n    add r2, #2\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0xc7\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r3, sp, #0\n    mov r1, #0\n    mov r2, #2\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r4, #0x34]\n    bl ov14_021F4410\n    add sp, #8\n    pop {r4, pc}\n    _021F4628: .word 0x0000044D"
    );
    #endif
}

void ov14_021F462C(void) {
    /* Original at 0x021F462C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r0, #0\n    ldr r1, [r7, #0x34]\n    ldr r0, _021F46AC ; =0x0000044D\n    mov r6, #0x15\n    ldrb r0, [r1, r0]\n    mov r1, #9\n    lsl r1, r1, #6\n    lsr r0, r0, #2\n    lsl r5, r0, #2\n    mov r0, #0xa\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    mov r0, #0x13\n    mov r1, #0x4a\n    mov r2, #0xa\n    bl AllocAtEndAndReadWholeNarcMemberByIdPair\n    add r1, sp, #0xc\n    str r0, [sp, #8]\n    bl NNS_G2dGetUnpackedCharacterData\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    mov r2, #9\n    ldr r0, [r0, #0x14]\n    add r1, r4, #0\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    mov r0, #9\n    lsl r0, r0, #6\n    str r0, [sp]\n    add r0, r7, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    mov r3, #0x1e\n    bl ov14_021F46B0\n    mov r3, #9\n    ldr r0, [r7, #0x34]\n    add r1, r6, #0\n    add r2, r4, #0\n    lsl r3, r3, #6\n    bl ov14_021F2C1C\n    ldr r0, [sp, #4]\n    add r6, r6, #1\n    add r0, r0, #1\n    add r5, r5, #1\n    str r0, [sp, #4]\n    cmp r0, #4\n    blo _021F4660\n    ldr r0, [sp, #8]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F46AC: .word 0x0000044D"
    );
    #endif
}

void ov14_021F46B0(void) {
    /* Original at 0x021F46B0 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    add r5, r1, #0\n    add r6, r3, #0\n    ldr r4, [sp, #0x18]\n    cmp r7, #0x10\n    blo _021F46D8\n    add r1, r7, #0\n    ldr r0, [r0, #4]\n    sub r1, #0x10\n    bl PCStorage_IsBonusWallpaperUnlocked\n    cmp r0, #0\n    bne _021F46D0\n    mov r2, #0x28\n    b _021F46DE\n    add r7, #0x10\n    lsl r0, r7, #0x18\n    lsr r2, r0, #0x18\n    b _021F46DE\n    add r7, #0x10\n    lsl r0, r7, #0x18\n    lsr r2, r0, #0x18\n    mov r1, #0\n    cmp r4, #0\n    bls _021F46F2\n    ldrb r0, [r5, r1]\n    cmp r6, r0\n    bne _021F46EC\n    strb r2, [r5, r1]\n    add r1, r1, #1\n    cmp r1, r4\n    blo _021F46E4\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F46F4(void) {
    /* Original at 0x021F46F4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F4718 ; =0x00000414\n    mov r1, #0x47\n    mvn r1, r1\n    add r2, r1, #0\n    ldr r0, [r4, r0]\n    add r2, #0x40\n    bl sub_020136B4\n    ldr r0, _021F471C ; =0x00000424\n    mov r1, #0x20\n    add r2, r1, #0\n    ldr r0, [r4, r0]\n    sub r2, #0x28\n    bl sub_020136B4\n    pop {r4, pc}\n    _021F4718: .word 0x00000414\n    _021F471C: .word 0x00000424"
    );
    #endif
}

void ov14_021F4720(void) {
    /* Original at 0x021F4720 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xc3\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0xc\n    add r2, r1, #0\n    sub r2, #0x21\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x31\n    mov r2, #0x14\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #0xf4\n    mvn r2, r2\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0xc5\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0x2b\n    add r2, r1, #0\n    sub r2, #0x40\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0xc6\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0x80\n    add r2, r1, #0\n    sub r2, #0xa8\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0xc7\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0x80\n    add r2, r1, #0\n    sub r2, #0x9c\n    bl ManagedSprite_SetPositionXY\n    add r0, r4, #0\n    bl ov14_021F49E0\n    ldr r0, [r4, #0x34]\n    mov r1, #7\n    mov r2, #5\n    bl ov14_021F29E4\n    ldr r0, [r4, #0x34]\n    bl ov14_021F46F4\n    ldr r1, [r4, #0x34]\n    ldr r0, _021F47B0 ; =0x00000414\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl TextOBJ_SetSpritesDrawFlag\n    ldr r1, [r4, #0x34]\n    ldr r0, _021F47B4 ; =0x00000424\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl TextOBJ_SetSpritesDrawFlag\n    pop {r4, pc}\n    nop\n    _021F47B0: .word 0x00000414\n    _021F47B4: .word 0x00000424"
    );
    #endif
}

void ov14_021F47B8(void) {
    /* Original at 0x021F47B8 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    mov r6, #4\n    mov r4, #0x10\n    ldr r0, [r5, #0x34]\n    add r2, sp, #0\n    add r1, r0, r4\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    bl ManagedSprite_GetPositionXY\n    ldr r0, [r5, #0x34]\n    add r2, sp, #0\n    add r1, r0, r4\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    add r3, r2, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    add r2, r2, r7\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #8\n    bls _021F47C2\n    ldr r0, [r5, #0x34]\n    bl ov14_021F46F4\n    mov r6, #0\n    add r4, r6, #0\n    ldr r0, [r5, #0x34]\n    add r2, sp, #0\n    add r1, r0, r4\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    bl ManagedSprite_GetPositionXY\n    ldr r0, [r5, #0x34]\n    add r2, sp, #0\n    add r1, r0, r4\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    ldrsh r1, [r2, r1]\n    add r3, r2, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    add r2, r2, r7\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #6\n    blo _021F4808\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F4848(void) {
    /* Original at 0x021F4848 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    add r4, r0, #0\n    ldrb r0, [r5, #0x1f]\n    mov r1, #6\n    bl _s32_div_f\n    cmp r4, r0\n    ldr r0, [r5, #0x34]\n    bne _021F4870\n    mov r1, #6\n    mov r2, #1\n    bl ov14_021F2A18\n    b _021F4878\n    mov r1, #6\n    mov r2, #0\n    bl ov14_021F2A18\n    ldrb r0, [r5, #0x1f]\n    mov r1, #6\n    bl _s32_div_f\n    add r4, r1, #0\n    mov r0, #0xc5\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0xc5\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0x22\n    mul r1, r4\n    add r1, #0x2b\n    lsl r1, r1, #0x10\n    add r3, sp, #0\n    mov r2, #0\n    ldrsh r2, [r3, r2]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F48B4(void) {
    /* Original at 0x021F48B4 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    lsr r4, r0, #0x10\n    mov r0, #0xc6\n    add r2, sp, #0\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #4\n    add r2, #2\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0xc6\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r1, _021F493C ; =ov14_021F8068\n    add r3, sp, #0\n    mov r2, #2\n    ldrb r1, [r1, r4]\n    ldrsh r2, [r3, r2]\n    bl ManagedSprite_SetPositionXY\n    add r4, #0xf\n    add r2, sp, #0\n    ldr r1, [r5, #0x34]\n    lsl r0, r4, #2\n    add r1, r1, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    add r2, #2\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0xc7\n    add r2, sp, #0\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #4\n    add r2, #2\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0xc7\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r3, sp, #0\n    mov r1, #0\n    mov r2, #2\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x34]\n    bl ov14_021F46F4\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021F493C: .word ov14_021F8068"
    );
    #endif
}

void ov14_021F4940(void) {
    /* Original at 0x021F4940 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, _021F4954 ; =ManagedSprite_GetPositionXY\n    bx r3\n    nop\n    _021F4954: .word ManagedSprite_GetPositionXY"
    );
    #endif
}

void ov14_021F4958(void) {
    /* Original at 0x021F4958 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x13\n    mov r1, #0x46\n    mov r2, #0xa\n    bl AllocAtEndAndReadWholeNarcMemberByIdPair\n    add r1, sp, #4\n    add r7, r0, #0\n    bl NNS_G2dGetUnpackedCharacterData\n    ldr r0, [sp, #4]\n    ldr r2, [r5, #0x34]\n    ldr r1, _021F49C4 ; =0x000040C8\n    lsl r4, r6, #0xa\n    add r1, r2, r1\n    mov r2, #1\n    ldr r0, [r0, #0x14]\n    add r1, r1, r4\n    lsl r2, r2, #0xa\n    bl MI_CpuCopy8\n    add r0, r7, #0\n    bl Heap_Free\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021E7930\n    add r2, r0, #0\n    mov r0, #1\n    lsl r0, r0, #0xa\n    str r0, [sp]\n    ldr r3, [r5, #0x34]\n    ldr r1, _021F49C4 ; =0x000040C8\n    add r0, r5, #0\n    add r1, r3, r1\n    add r1, r1, r4\n    mov r3, #8\n    bl ov14_021F46B0\n    ldr r3, [r5, #0x34]\n    ldr r2, _021F49C4 ; =0x000040C8\n    add r0, r5, #0\n    add r2, r3, r2\n    add r1, r6, #0\n    add r2, r2, r4\n    bl ov14_021F4A64\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F49C4: .word 0x000040C8"
    );
    #endif
}

void ov14_021F49C8(void) {
    ov14_021F4958(0);
}

void ov14_021F49E0(void) {
    /* Original at 0x021F49E0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    mov r4, #0xf\n    mov r6, #0\n    lsl r5, r1, #0xa\n    ldr r0, [r7, #0x34]\n    ldr r2, _021F4A1C ; =0x000040C8\n    mov r3, #1\n    add r2, r0, r2\n    add r1, r4, #0\n    add r2, r2, r5\n    lsl r3, r3, #0xa\n    bl ov14_021F2C1C\n    mov r0, #1\n    lsl r0, r0, #0xa\n    add r6, r6, #1\n    add r4, r4, #1\n    add r5, r5, r0\n    cmp r6, #6\n    blo _021F49F8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F4A1C: .word 0x000040C8"
    );
    #endif
}

void ov14_021F4A20(void) {
    /* Original at 0x021F4A20 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    add r4, r1, #0\n    mov r1, #6\n    bl _s32_div_f\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #6\n    bl _u32_div_f\n    cmp r6, r0\n    bne _021F4A5C\n    add r0, r4, #0\n    mov r1, #6\n    ldr r5, [r5, #0x34]\n    bl _u32_div_f\n    ldr r2, _021F4A60 ; =0x000040C8\n    add r0, r5, #0\n    add r3, r5, r2\n    lsl r2, r4, #0xa\n    add r2, r3, r2\n    mov r3, #1\n    add r1, #0xf\n    lsl r3, r3, #0xa\n    bl ov14_021F2C1C\n    pop {r4, r5, r6, pc}\n    nop\n    _021F4A60: .word 0x000040C8"
    );
    #endif
}

void ov14_021F4A64(void) {
    /* Original at 0x021F4A64 */
    /* Requires manual decompilation - 139 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    str r0, [sp, #0x20]\n    mov r0, #0xa\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    mov r1, #6\n    mul r1, r0\n    ldr r0, [sp, #0x10]\n    str r1, [sp, #0x14]\n    add r5, r0, #2\n    ldr r0, [sp]\n    ldr r3, [sp, #0x1c]\n    ldr r2, [sp, #0x14]\n    ldr r0, [r0, #4]\n    ldr r1, [sp, #4]\n    add r2, r3, r2\n    bl PCStorage_GetMonByIndexPair\n    str r0, [sp, #0x28]\n    bl AcquireBoxMonLock\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x28]\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    add r4, r0, #0\n    ldr r0, [sp, #0x28]\n    mov r1, #0xac\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _021F4B4A\n    ldr r0, [sp, #0x28]\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    bne _021F4AF0\n    ldr r0, [sp, #0x28]\n    mov r1, #0x70\n    mov r2, #0\n    bl GetBoxMonData\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    ldr r0, [sp]\n    mov r3, #0x1b\n    ldr r1, [r0, #0x34]\n    mov r0, #0x45\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    bl GetMonBaseStatEx_HandleAlternateForm\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    b _021F4AFC\n    ldr r0, _021F4B88 ; =0x000001EA\n    cmp r4, r0\n    bne _021F4AFA\n    mov r1, #1\n    b _021F4AFC\n    mov r1, #8\n    ldr r0, _021F4B8C ; =ov14_021F8080\n    ldr r4, [sp, #0x10]\n    ldrb r0, [r0, r1]\n    add r0, #0x20\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    lsl r0, r1, #8\n    orr r0, r1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    cmp r0, r5\n    bge _021F4B4A\n    ldr r0, [sp, #0x18]\n    add r1, r0, #0\n    asr r7, r0, #3\n    mov r0, #7\n    add r6, r1, #0\n    and r6, r0\n    asr r2, r4, #3\n    lsl r2, r2, #2\n    lsl r1, r4, #0x1d\n    add r2, r2, r7\n    lsr r1, r1, #0x1a\n    lsl r2, r2, #6\n    add r1, r1, r2\n    add r2, r6, r1\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0xc]\n    add r1, r1, r2\n    mov r2, #2\n    bl MIi_CpuClear16\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r5\n    blt _021F4B24\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #0x24]\n    bl ReleaseBoxMonLock\n    ldr r0, [sp, #0x18]\n    add r0, r0, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x1c]\n    cmp r0, #6\n    blo _021F4A8A\n    ldr r0, [sp, #0x10]\n    add r0, r0, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x20]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x20]\n    cmp r0, #5\n    bhs _021F4B84\n    b _021F4A76\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _021F4B88: .word 0x000001EA\n    _021F4B8C: .word ov14_021F8080"
    );
    #endif
}

void ov14_021F4B90(void) {
    /* Original at 0x021F4B90 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    lsl r0, r4, #2\n    add r1, r5, r0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, r2, #0\n    add r2, r3, #0\n    bl ManagedSprite_SetPositionXY\n    ldr r2, [sp, #0x10]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F2A18\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov14_021F2A60\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F4BC0(void) {
    /* Original at 0x021F4BC0 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r5, #0x34]\n    mov r1, #4\n    mov r2, #0xc\n    mov r3, #0x54\n    bl ov14_021F4B90\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r5, #0x34]\n    mov r1, #5\n    mov r2, #0xf4\n    mov r3, #0x54\n    bl ov14_021F4B90\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r5, #0x34]\n    mov r1, #6\n    mov r2, #0x2b\n    mov r3, #0x54\n    bl ov14_021F4B90\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r5, #0x34]\n    mov r1, #7\n    mov r2, #0x80\n    mov r3, #0x41\n    bl ov14_021F4B90\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r5, #0x34]\n    mov r1, #8\n    mov r2, #0x80\n    mov r3, #0x4d\n    bl ov14_021F4B90\n    mov r6, #0\n    add r4, r6, #0\n    mov r7, #1\n    ldr r0, [r5, #0x34]\n    add r2, sp, #4\n    add r1, r0, r4\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    add r1, sp, #4\n    add r1, #2\n    bl ManagedSprite_GetPositionXY\n    str r7, [sp]\n    add r1, r6, #0\n    add r3, sp, #4\n    mov r2, #2\n    ldrsh r2, [r3, r2]\n    ldr r0, [r5, #0x34]\n    add r1, #0xf\n    mov r3, #0x54\n    bl ov14_021F4B90\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #6\n    blo _021F4C1C\n    add r0, r5, #0\n    bl ov14_021F49E0\n    ldr r0, [r5, #0x34]\n    mov r1, #7\n    mov r2, #5\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    bl ov14_021F46F4\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F4C98 ; =0x00000414\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl TextOBJ_SetSpritesDrawFlag\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F4C9C ; =0x00000424\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl TextOBJ_SetSpritesDrawFlag\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F4C98 ; =0x00000414\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl sub_020137F0\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F4C9C ; =0x00000424\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl sub_020137F0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F4C98: .word 0x00000414\n    _021F4C9C: .word 0x00000424"
    );
    #endif
}

void ov14_021F4CA0(void) {
    /* Original at 0x021F4CA0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    mov r1, #4\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    mov r1, #5\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    mov r1, #6\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    mov r1, #7\n    mov r2, #0\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    mov r1, #8\n    mov r2, #0\n    bl ov14_021F2A18\n    mov r4, #0\n    add r6, r4, #0\n    add r1, r4, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0xf\n    add r2, r6, #0\n    bl ov14_021F2A18\n    add r4, r4, #1\n    cmp r4, #6\n    blo _021F4CDA\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F4D08 ; =0x00000414\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl TextOBJ_SetSpritesDrawFlag\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F4D0C ; =0x00000424\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl TextOBJ_SetSpritesDrawFlag\n    pop {r4, r5, r6, pc}\n    nop\n    _021F4D08: .word 0x00000414\n    _021F4D0C: .word 0x00000424"
    );
    #endif
}

void ov14_021F4D10(void) {
    /* Original at 0x021F4D10 */
    /* Requires manual decompilation - 148 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x48\n    add r4, r0, #0\n    mov r0, #2\n    mov r1, #0xa\n    bl FontSystem_NewInit\n    mov r1, #0x41\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #4\n    add r5, r4, r0\n    add r0, sp, #0x38\n    bl InitWindow\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #2\n    str r3, [sp, #4]\n    ldr r0, [r4, #0x14]\n    add r1, sp, #0x38\n    mov r2, #0xc\n    bl AddTextWindowTopLeftCorner\n    add r0, sp, #0x38\n    mov r1, #1\n    mov r2, #0xa\n    bl sub_02013688\n    mov r1, #1\n    add r2, r1, #0\n    add r3, r5, #4\n    bl sub_02021AC8\n    mov r0, #0x41\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    str r0, [sp, #8]\n    add r0, sp, #0x38\n    str r0, [sp, #0xc]\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SpriteManager_GetSpriteList\n    str r0, [sp, #0x10]\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, _021F4E5C ; =0x0000C101\n    bl SpriteManager_FindPlttResourceProxy\n    str r0, [sp, #0x14]\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    ldr r0, [r0]\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #8]\n    str r0, [sp, #0x1c]\n    mov r0, #0x80\n    str r0, [sp, #0x20]\n    sub r0, #0x9c\n    str r0, [sp, #0x24]\n    mov r0, #4\n    str r0, [sp, #0x2c]\n    mov r0, #0xa\n    str r0, [sp, #0x34]\n    add r0, sp, #8\n    str r1, [sp, #0x28]\n    str r1, [sp, #0x30]\n    bl sub_020135D8\n    ldr r1, _021F4E60 ; =0x00000414\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl sub_020138B0\n    ldr r0, _021F4E60 ; =0x00000414\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl sub_020138E0\n    add r0, sp, #0x38\n    bl RemoveWindow\n    ldr r0, _021F4E64 ; =0x00000424\n    add r5, r4, r0\n    add r0, sp, #0x38\n    bl InitWindow\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #2\n    str r3, [sp, #4]\n    ldr r0, [r4, #0x14]\n    add r1, sp, #0x38\n    mov r2, #5\n    bl AddTextWindowTopLeftCorner\n    add r0, sp, #0x38\n    mov r1, #1\n    mov r2, #0xa\n    bl sub_02013688\n    mov r1, #1\n    add r2, r1, #0\n    add r3, r5, #4\n    bl sub_02021AC8\n    mov r0, #0x41\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    str r0, [sp, #8]\n    add r0, sp, #0x38\n    str r0, [sp, #0xc]\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SpriteManager_GetSpriteList\n    str r0, [sp, #0x10]\n    mov r0, #0xbe\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, _021F4E5C ; =0x0000C101\n    bl SpriteManager_FindPlttResourceProxy\n    str r0, [sp, #0x14]\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    ldr r0, [r0]\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #8]\n    str r0, [sp, #0x1c]\n    mov r0, #0x80\n    str r0, [sp, #0x20]\n    sub r0, #0x9c\n    str r0, [sp, #0x24]\n    mov r0, #4\n    str r0, [sp, #0x2c]\n    mov r0, #0xa\n    str r0, [sp, #0x34]\n    str r1, [sp, #0x28]\n    str r1, [sp, #0x30]\n    add r0, sp, #8\n    bl sub_020135D8\n    str r0, [r5]\n    mov r1, #1\n    bl sub_020138B0\n    ldr r0, [r5]\n    mov r1, #1\n    bl sub_020138E0\n    add r0, sp, #0x38\n    bl RemoveWindow\n    add sp, #0x48\n    pop {r3, r4, r5, pc}\n    nop\n    _021F4E5C: .word 0x0000C101\n    _021F4E60: .word 0x00000414\n    _021F4E64: .word 0x00000424"
    );
    #endif
}

void ov14_021F4E68(void) {
    /* Original at 0x021F4E68 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _021F4E9C ; =0x00000418\n    str r0, [sp]\n    mov r6, #0\n    add r4, r0, r1\n    add r5, r0, #0\n    sub r7, r1, #4\n    add r0, r4, #0\n    bl sub_02021B5C\n    ldr r0, [r5, r7]\n    bl FontOAM_Delete\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, #0x10\n    cmp r6, #2\n    blo _021F4E76\n    mov r1, #0x41\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl sub_020135AC\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F4E9C: .word 0x00000418"
    );
    #endif
}

void ov14_021F4EA0(void) {
    /* Original at 0x021F4EA0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    add r0, r4, #0\n    mov r1, #0xa\n    bl sub_02013910\n    add r7, r0, #0\n    lsl r0, r6, #4\n    add r1, r5, r0\n    ldr r0, _021F4ECC ; =0x00000414\n    add r2, r4, #0\n    ldr r0, [r1, r0]\n    add r1, r7, #0\n    mov r3, #0xa\n    bl TextOBJ_CopyFromBGWindow\n    add r0, r7, #0\n    bl sub_02013938\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F4ECC: .word 0x00000414"
    );
    #endif
}

void ov14_021F4ED0(void) {
    /* Original at 0x021F4ED0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #4\n    mov r1, #0xa\n    bl FontID_Alloc\n    mov r6, #0\n    ldr r4, _021F4EFC ; =ov14_021F84B4\n    add r5, r6, #0\n    ldr r1, [r7, #0x34]\n    add r2, r4, #0\n    ldr r0, [r1, #0x14]\n    add r1, #0x30\n    add r1, r1, r5\n    bl AddWindow\n    add r6, r6, #1\n    add r4, #8\n    add r5, #0x10\n    cmp r6, #0x2c\n    blo _021F4EE2\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F4EFC: .word ov14_021F84B4"
    );
    #endif
}

void ov14_021F4F00(void) {
    /* Original at 0x021F4F00 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    ldr r1, [r5, #0x34]\n    lsl r0, r4, #4\n    add r1, #0x30\n    add r0, r1, r0\n    bl RemoveWindow\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x2c\n    blo _021F4F06\n    mov r0, #4\n    bl FontID_Release\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F4F24(void) {
    /* Original at 0x021F4F24 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    ldr r0, [sp, #0x30]\n    str r1, [sp, #0x10]\n    add r5, r2, #0\n    add r6, r3, #0\n    ldr r4, [sp, #0x28]\n    cmp r0, #1\n    bne _021F4F44\n    add r0, r4, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    sub r5, r5, r0\n    b _021F4F66\n    cmp r0, #2\n    bne _021F4F56\n    add r0, r4, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    lsr r0, r0, #1\n    sub r5, r5, r0\n    b _021F4F66\n    cmp r0, #3\n    bne _021F4F66\n    add r0, r4, #0\n    mov r2, #0\n    bl FontID_String_GetWidthMultiline\n    lsr r0, r0, #1\n    sub r5, r5, r0\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    ldr r2, [sp, #0x10]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r7, #0\n    add r1, r4, #0\n    add r3, r5, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F4F84(void) {
    /* Original at 0x021F4F84 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r3, #0\n    add r4, r2, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r0, [sp, #0x28]\n    add r5, #0x30\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    ldr r2, [sp, #0x20]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    ldr r3, [sp, #0x24]\n    str r0, [sp, #8]\n    lsl r0, r4, #4\n    add r0, r5, r0\n    add r1, r6, #0\n    bl ov14_021F4F24\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F4FBC(void) {
    /* Original at 0x021F4FBC */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r3, #0\n    add r4, r2, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x28]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x28]\n    add r1, r5, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    add r1, #0x30\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    ldr r2, [sp, #0x20]\n    str r0, [sp, #8]\n    lsl r0, r4, #4\n    add r0, r1, r0\n    ldr r1, [r5, #0x28]\n    ldr r3, [sp, #0x24]\n    bl ov14_021F4F24\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F5000(void) {
    /* Original at 0x021F5000 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r5, #0\n    add r0, r2, #0\n    add r6, r1, #0\n    add r4, #0x30\n    lsl r7, r0, #4\n    add r0, r4, r7\n    mov r1, #0\n    str r2, [sp, #0x14]\n    bl FillWindowPixelBuffer\n    ldrb r0, [r6, #0x12]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _021F5044\n    ldr r0, [r5, #0x24]\n    ldr r2, [r6]\n    mov r1, #0\n    bl BufferBoxMonSpeciesName\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    ldr r0, _021F5050 ; =0x00010200\n    str r3, [sp, #8]\n    str r0, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldr r1, [r5, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r5, #0\n    bl ov14_021F4FBC\n    add r0, r4, r7\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F5050: .word 0x00010200"
    );
    #endif
}

void ov14_021F5054(void) {
    /* Original at 0x021F5054 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r5, #0\n    add r0, r2, #0\n    add r7, r1, #0\n    add r4, #0x30\n    lsl r6, r0, #4\n    add r0, r4, r6\n    mov r1, #0\n    str r2, [sp, #0x14]\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x24]\n    ldr r2, [r7]\n    mov r1, #0\n    bl BufferBoxMonNickname\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _021F509C ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r5, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r5, #0\n    mov r3, #1\n    bl ov14_021F4FBC\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F509C: .word 0x00010200"
    );
    #endif
}

void ov14_021F50A0(void) {
    /* Original at 0x021F50A0 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r5, #0\n    add r0, r2, #0\n    add r7, r1, #0\n    add r4, #0x30\n    lsl r6, r0, #4\n    add r0, r4, r6\n    mov r1, #0\n    str r2, [sp, #0x14]\n    bl FillWindowPixelBuffer\n    ldrb r0, [r7, #0x12]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _021F5104\n    mov r0, #5\n    str r0, [sp]\n    ldr r0, [r5, #0x1c]\n    mov r1, #1\n    add r2, r4, r6\n    mov r3, #0\n    bl sub_0200CDAC\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldrb r2, [r7, #0x12]\n    ldr r0, [r5, #0x24]\n    mov r3, #3\n    lsl r2, r2, #0x19\n    lsr r2, r2, #0x19\n    bl BufferIntegerAsString\n    mov r0, #0x10\n    str r0, [sp]\n    mov r1, #0\n    str r1, [sp, #4]\n    ldr r0, _021F5110 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r5, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r5, #0\n    mov r3, #0x5a\n    bl ov14_021F4FBC\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F5110: .word 0x00010200"
    );
    #endif
}

void ov14_021F5114(void) {
    /* Original at 0x021F5114 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r0, #0\n    add r4, r6, #0\n    add r0, r2, #0\n    add r5, r1, #0\n    add r4, #0x30\n    lsl r7, r0, #4\n    add r0, r4, r7\n    mov r1, #0\n    str r2, [sp, #0x14]\n    bl FillWindowPixelBuffer\n    ldrb r0, [r5, #0x12]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _021F5182\n    ldrb r0, [r5, #0x13]\n    lsl r1, r0, #0x18\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _021F5182\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x19\n    bne _021F5162\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _021F518C ; =0x00070800\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r6, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r6, #0\n    mov r3, #0x52\n    bl ov14_021F4F84\n    b _021F5182\n    cmp r0, #1\n    bne _021F5182\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r0, #0xc1\n    str r1, [sp, #8]\n    lsl r0, r0, #0xa\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r6, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r6, #0\n    mov r3, #0x53\n    bl ov14_021F4F84\n    add r0, r4, r7\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F518C: .word 0x00070800"
    );
    #endif
}

void ov14_021F5190(void) {
    /* Original at 0x021F5190 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r7, r2, #0\n    lsl r4, r7, #4\n    add r0, #0x30\n    add r6, r1, #0\n    add r0, r0, r4\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldrb r0, [r6, #0x12]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _021F5208\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl SaveArray_IsNatDexEnabled\n    ldrh r1, [r6, #4]\n    bl Pokedex_ConvertToCurrentDexNo\n    add r6, r0, #0\n    beq _021F5208\n    ldr r2, [r5, #0x34]\n    mov r0, #5\n    str r0, [sp]\n    ldr r0, [r2, #0x1c]\n    add r2, #0x30\n    mov r1, #2\n    add r2, r2, r4\n    mov r3, #0\n    bl sub_0200CDAC\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    add r2, r6, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, [r5, #0x34]\n    mov r1, #0x10\n    str r1, [sp]\n    mov r2, #0\n    str r2, [sp, #4]\n    ldr r1, _021F5218 ; =0x00010200\n    str r2, [sp, #8]\n    str r1, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldr r1, [r0, #0x20]\n    add r2, r7, #0\n    mov r3, #0x5b\n    bl ov14_021F4FBC\n    ldr r0, [r5, #0x34]\n    add r0, #0x30\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F5218: .word 0x00010200"
    );
    #endif
}

void ov14_021F521C(void) {
    /* Original at 0x021F521C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r5, #0\n    add r0, r2, #0\n    add r6, r1, #0\n    add r4, #0x30\n    lsl r7, r0, #4\n    add r0, r4, r7\n    mov r1, #0\n    str r2, [sp, #0x14]\n    bl FillWindowPixelBuffer\n    ldrb r0, [r6, #0x12]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _021F5264\n    ldrb r2, [r6, #0xf]\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferNatureName\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _021F5288 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r5, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r5, #0\n    mov r3, #0x55\n    bl ov14_021F4FBC\n    b _021F527E\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _021F5288 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r5, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r5, #0\n    mov r3, #0x5d\n    bl ov14_021F4F84\n    add r0, r4, r7\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F5288: .word 0x00010200"
    );
    #endif
}

void ov14_021F528C(void) {
    /* Original at 0x021F528C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r5, #0\n    add r0, r2, #0\n    add r6, r1, #0\n    add r4, #0x30\n    lsl r7, r0, #4\n    add r0, r4, r7\n    mov r1, #0\n    str r2, [sp, #0x14]\n    bl FillWindowPixelBuffer\n    ldrb r0, [r6, #0x12]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _021F52D4\n    ldrb r2, [r6, #0xe]\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferAbilityName\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _021F52F8 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r5, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r5, #0\n    mov r3, #0x54\n    bl ov14_021F4FBC\n    b _021F52EE\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _021F52F8 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r5, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r5, #0\n    mov r3, #0x5d\n    bl ov14_021F4F84\n    add r0, r4, r7\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F52F8: .word 0x00010200"
    );
    #endif
}

void ov14_021F52FC(void) {
    /* Original at 0x021F52FC */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r4, r5, #0\n    add r0, r2, #0\n    add r7, r1, #0\n    add r4, #0x30\n    lsl r6, r0, #4\n    add r0, r4, r6\n    mov r1, #0\n    str r2, [sp, #0x14]\n    bl FillWindowPixelBuffer\n    ldrh r2, [r7, #6]\n    cmp r2, #0\n    beq _021F5340\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferItemName\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _021F5364 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r5, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r5, #0\n    mov r3, #0x56\n    bl ov14_021F4FBC\n    b _021F535A\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _021F5364 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r1, [r5, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r5, #0\n    mov r3, #0x5c\n    bl ov14_021F4F84\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F5364: .word 0x00010200"
    );
    #endif
}

void ov14_021F5368(void) {
    /* Original at 0x021F5368 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    mov r2, #0\n    add r4, r1, #0\n    bl ov14_021F5000\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    mov r2, #1\n    bl ov14_021F5054\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    mov r2, #2\n    bl ov14_021F50A0\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    mov r2, #4\n    bl ov14_021F5114\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #5\n    bl ov14_021F5190\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    mov r2, #6\n    bl ov14_021F521C\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    mov r2, #7\n    bl ov14_021F528C\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    mov r2, #8\n    bl ov14_021F52FC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F53C0(void) {
    /* Original at 0x021F53C0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x30\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x40\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x50\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x70\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x80\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0x90\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    add r0, #0xa0\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r4, #0xb0\n    add r0, r4, #0\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F5404(void) {
    /* Original at 0x021F5404 */
    /* Requires manual decompilation - 165 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r6, r0, #0\n    ldr r3, [r6, #0x34]\n    ldr r0, _021F5558 ; =0x0000044E\n    str r1, [sp, #0x1c]\n    ldrb r0, [r3, r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    bne _021F541E\n    mov r0, #9\n    str r0, [sp, #0x20]\n    b _021F5422\n    mov r0, #0xd\n    str r0, [sp, #0x20]\n    ldr r0, _021F5558 ; =0x0000044E\n    mov r2, #0xf\n    ldrb r4, [r3, r0]\n    add r1, r4, #0\n    bic r1, r2\n    lsl r2, r4, #0x1c\n    lsr r4, r2, #0x1c\n    mov r2, #1\n    eor r4, r2\n    lsl r4, r4, #0x18\n    lsr r5, r4, #0x18\n    mov r4, #0xf\n    and r4, r5\n    orr r1, r4\n    strb r1, [r3, r0]\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #0x13\n    mov r1, #6\n    add r3, sp, #0x3c\n    bl GfGfxLoader_GetCharData\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x3c]\n    ldr r2, _021F555C ; =0x000002EE\n    ldr r0, [r0, #0x14]\n    mov r1, #0x1b\n    str r0, [sp, #0x30]\n    mov r0, #0\n    mov r3, #0xa\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x1c]\n    ldrb r0, [r0, #0x12]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _021F553A\n    mov r0, #0\n    str r0, [sp, #0x28]\n    ldr r1, [sp, #0x20]\n    ldr r0, [sp, #0x28]\n    mov r4, #0\n    add r0, r1, r0\n    str r0, [sp, #0x24]\n    lsl r7, r0, #4\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #0x38]\n    add r0, #0x20\n    str r0, [sp, #0x38]\n    mov r0, #8\n    str r0, [sp]\n    lsl r5, r4, #3\n    str r0, [sp, #4]\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    ldr r0, [r6, #0x34]\n    mov r1, #0x16\n    add r0, #0x30\n    ldr r2, [sp, #0x30]\n    lsl r1, r1, #4\n    add r1, r2, r1\n    mov r2, #0\n    add r0, r0, r7\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    ldr r0, [r6, #0x34]\n    mov r2, #0\n    add r0, #0x30\n    ldr r1, [sp, #0x38]\n    add r0, r0, r7\n    add r3, r2, #0\n    bl BlitBitmapRect\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0xb\n    blo _021F5486\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, _021F5560 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r3, [sp, #0x28]\n    ldr r0, [r6, #0x34]\n    lsl r4, r3, #1\n    ldr r3, [sp, #0x1c]\n    ldr r1, [sp, #0x2c]\n    add r3, r3, r4\n    ldrh r3, [r3, #0x14]\n    ldr r2, [sp, #0x24]\n    bl ov14_021F4F84\n    ldr r1, [r6, #0x34]\n    ldr r0, [sp, #0x24]\n    add r1, #0x30\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r0, [sp, #0x28]\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x28]\n    cmp r0, #4\n    blo _021F5472\n    ldr r3, [r6, #0x34]\n    ldr r1, _021F5558 ; =0x0000044E\n    mov r0, #0x70\n    ldrb r2, [r3, r1]\n    bic r2, r0\n    mov r0, #0x10\n    orr r0, r2\n    strb r0, [r3, r1]\n    b _021F5546\n    ldr r3, [r6, #0x34]\n    ldr r1, _021F5558 ; =0x0000044E\n    mov r0, #0x70\n    ldrb r2, [r3, r1]\n    bic r2, r0\n    strb r2, [r3, r1]\n    ldr r0, [sp, #0x2c]\n    bl DestroyMsgData\n    ldr r0, [sp, #0x34]\n    bl Heap_Free\n    ldr r0, [sp, #0x20]\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F5558: .word 0x0000044E\n    _021F555C: .word 0x000002EE\n    _021F5560: .word 0x00010200"
    );
    #endif
}

void ov14_021F5564(void) {
    /* Original at 0x021F5564 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r1, [sp, #0xc]\n    add r6, r0, #0\n    ldr r0, [r6, #0x34]\n    ldr r1, _021F5618 ; =0x0000044E\n    ldrb r1, [r0, r1]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    bne _021F557C\n    mov r7, #0x14\n    b _021F557E\n    mov r7, #0x16\n    ldr r1, _021F5618 ; =0x0000044E\n    add r5, r0, #0\n    ldrb r2, [r0, r1]\n    mov r1, #0xf\n    add r5, #0x30\n    add r3, r2, #0\n    bic r3, r1\n    lsl r1, r2, #0x1c\n    lsr r2, r1, #0x1c\n    mov r1, #1\n    eor r1, r2\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    mov r1, #0xf\n    and r1, r2\n    add r2, r3, #0\n    orr r2, r1\n    ldr r1, _021F5618 ; =0x0000044E\n    lsl r4, r7, #4\n    strb r2, [r0, r1]\n    add r0, r5, r4\n    mov r1, #0xd\n    bl FillWindowPixelBuffer\n    add r0, r5, r4\n    add r0, #0x10\n    mov r1, #0xd\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    beq _021F5612\n    ldr r0, [r6, #0x34]\n    ldr r1, [sp, #0xc]\n    ldr r0, [r0, #0x28]\n    mov r2, #0xa\n    bl GetItemNameIntoString\n    mov r2, #0\n    ldr r0, _021F561C ; =0x00010200\n    str r2, [sp]\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    ldr r1, [r6, #0x34]\n    add r0, r5, r4\n    ldr r1, [r1, #0x28]\n    add r3, r2, #0\n    bl ov14_021F4F24\n    add r0, r5, r4\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r0, [r6, #0x34]\n    ldr r1, [sp, #0xc]\n    ldr r0, [r0, #0x28]\n    mov r2, #0xa\n    bl GetItemDescIntoString\n    mov r2, #0\n    ldr r0, _021F561C ; =0x00010200\n    str r2, [sp]\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    ldr r1, [r6, #0x34]\n    add r0, r5, r4\n    ldr r1, [r1, #0x28]\n    add r0, #0x10\n    add r3, r2, #0\n    bl ov14_021F4F24\n    add r0, r5, r4\n    add r0, #0x10\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, r7, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F5618: .word 0x0000044E\n    _021F561C: .word 0x00010200"
    );
    #endif
}

void ov14_021F5620(void) {
    /* Original at 0x021F5620 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    bl ov14_021F6628\n    add r4, r0, #0\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    add r0, #0x60\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    ldr r0, _021F5668 ; =0x00010200\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r3, [r5]\n    ldr r0, [r5, #0x34]\n    ldr r3, [r3, #8]\n    add r1, r4, #0\n    mov r2, #3\n    add r3, #0x32\n    bl ov14_021F4F84\n    add r0, r4, #0\n    bl DestroyMsgData\n    ldr r0, [r5, #0x34]\n    add r0, #0x60\n    bl CopyWindowToVram\n    add sp, #0x14\n    pop {r4, r5, pc}\n    _021F5668: .word 0x00010200"
    );
    #endif
}

void ov14_021F566C(void) {
    /* Original at 0x021F566C */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #5\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x15\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x16\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    ldr r1, _021F5714 ; =0x00010200\n    str r2, [sp, #8]\n    str r1, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldr r1, [r0, #0x20]\n    mov r2, #0x11\n    mov r3, #0x57\n    bl ov14_021F4F84\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    ldr r1, _021F5714 ; =0x00010200\n    str r2, [sp, #8]\n    str r1, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldr r1, [r0, #0x20]\n    mov r2, #0x12\n    mov r3, #0x58\n    bl ov14_021F4F84\n    ldr r0, [r4, #0x34]\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    ldr r1, _021F5714 ; =0x00010200\n    str r2, [sp, #8]\n    str r1, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldr r1, [r0, #0x20]\n    mov r2, #0x13\n    mov r3, #0x59\n    bl ov14_021F4F84\n    mov r0, #5\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    bl CopyWindowToVram\n    mov r0, #0x15\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl CopyWindowToVram\n    mov r0, #0x16\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl CopyWindowToVram\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _021F5714: .word 0x00010200"
    );
    #endif
}

void ov14_021F5718(void) {
    /* Original at 0x021F5718 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r0, #0\n    str r1, [sp, #0x14]\n    add r5, r3, #0\n    mov r0, #0xa\n    mov r1, #0x10\n    add r7, r2, #0\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    mov r3, #0\n    lsl r0, r5, #0x18\n    str r3, [sp]\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    add r1, r4, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    lsl r0, r7, #0x10\n    str r3, [sp, #0xc]\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [r6, #0x34]\n    mov r2, #3\n    ldr r0, [r0, #0x14]\n    bl AddWindowParameterized\n    ldr r2, [sp, #0x30]\n    ldr r0, [sp, #0x14]\n    mul r2, r5\n    ldr r1, [r4, #0xc]\n    lsl r2, r2, #5\n    bl MIi_CpuCopy32\n    mov r0, #0x14\n    mov r1, #0xa\n    bl String_New\n    add r7, r0, #0\n    ldrb r1, [r6, #0x1f]\n    ldr r0, [r6, #4]\n    add r2, r7, #0\n    bl PCStorage_GetBoxName\n    mov r0, #0\n    ldr r3, [sp, #0x30]\n    str r0, [sp]\n    ldr r0, _021F57B4 ; =0x00020100\n    lsl r3, r3, #3\n    str r0, [sp, #4]\n    mov r0, #2\n    lsl r2, r5, #3\n    lsr r3, r3, #1\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, r7, #0\n    lsr r2, r2, #1\n    sub r3, #8\n    bl ov14_021F4F24\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, r4, #0\n    bl RemoveWindow\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F57B4: .word 0x00020100"
    );
    #endif
}

void ov14_021F57B8(void) {
    /* Original at 0x021F57B8 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    add r0, sp, #0xc\n    bl InitWindow\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x34]\n    add r1, sp, #0xc\n    ldr r0, [r0, #0x14]\n    mov r2, #0xc\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    mov r0, #0x14\n    mov r1, #0xa\n    bl String_New\n    add r5, r0, #0\n    add r1, r4, #0\n    add r1, #0x25\n    ldrb r1, [r1]\n    ldr r0, [r4, #4]\n    add r2, r5, #0\n    bl PCStorage_GetBoxName\n    mov r3, #0\n    ldr r0, _021F58B4 ; =0x00010200\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, sp, #0xc\n    add r1, r5, #0\n    mov r2, #0x30\n    bl ov14_021F4F24\n    add r0, r5, #0\n    bl String_Delete\n    ldr r0, [r4, #0x34]\n    add r1, sp, #0xc\n    mov r2, #0\n    bl ov14_021F4EA0\n    add r0, sp, #0xc\n    bl RemoveWindow\n    add r0, sp, #0xc\n    bl InitWindow\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x34]\n    add r1, sp, #0xc\n    ldr r0, [r0, #0x14]\n    mov r2, #5\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    ldr r0, [r4, #0x34]\n    mov r1, #0x18\n    ldr r0, [r0, #0x20]\n    bl NewString_ReadMsgData\n    add r1, r4, #0\n    add r1, #0x25\n    add r5, r0, #0\n    ldrb r1, [r1]\n    ldr r0, [r4, #4]\n    bl PCStorage_CountMonsAndEggsInBox\n    mov r1, #0\n    add r2, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x34]\n    mov r3, #2\n    ldr r0, [r0, #0x24]\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    ldr r0, [r4, #0x34]\n    mov r2, #0x1e\n    ldr r0, [r0, #0x24]\n    mov r3, #2\n    bl BufferIntegerAsString\n    ldr r1, [r4, #0x34]\n    add r2, r5, #0\n    ldr r0, [r1, #0x24]\n    ldr r1, [r1, #0x28]\n    bl StringExpandPlaceholders\n    mov r3, #0\n    ldr r0, _021F58B4 ; =0x00010200\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r1, [r4, #0x34]\n    add r0, sp, #0xc\n    ldr r1, [r1, #0x28]\n    mov r2, #0x14\n    bl ov14_021F4F24\n    add r0, r5, #0\n    bl String_Delete\n    ldr r0, [r4, #0x34]\n    add r1, sp, #0xc\n    mov r2, #1\n    bl ov14_021F4EA0\n    add r0, sp, #0xc\n    bl RemoveWindow\n    add sp, #0x1c\n    pop {r4, r5, pc}\n    _021F58B4: .word 0x00010200"
    );
    #endif
}

void ov14_021F58B8(void) {
    /* Original at 0x021F58B8 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    add r0, sp, #0xc\n    bl InitWindow\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x34]\n    add r1, sp, #0xc\n    ldr r0, [r0, #0x14]\n    mov r2, #0xc\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    ldr r2, [r5, #0x34]\n    ldr r0, _021F5948 ; =0x0000044D\n    ldrb r1, [r2, r0]\n    cmp r1, #0x10\n    blo _021F590E\n    ldr r0, [r5, #4]\n    sub r1, #0x10\n    bl PCStorage_IsBonusWallpaperUnlocked\n    cmp r0, #0\n    bne _021F58FC\n    ldr r0, [r5, #0x34]\n    mov r1, #0x3b\n    ldr r0, [r0, #0x20]\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    b _021F5918\n    ldr r2, [r5, #0x34]\n    ldr r1, _021F5948 ; =0x0000044D\n    ldr r0, [r2, #0x20]\n    ldrb r1, [r2, r1]\n    add r1, #0x23\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    b _021F5918\n    ldr r0, [r2, #0x20]\n    add r1, #0x23\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r3, #0\n    ldr r0, _021F594C ; =0x00010200\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, sp, #0xc\n    add r1, r4, #0\n    mov r2, #0x30\n    bl ov14_021F4F24\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, [r5, #0x34]\n    add r1, sp, #0xc\n    mov r2, #0\n    bl ov14_021F4EA0\n    add r0, sp, #0xc\n    bl RemoveWindow\n    add sp, #0x1c\n    pop {r4, r5, pc}\n    _021F5948: .word 0x0000044D\n    _021F594C: .word 0x00010200"
    );
    #endif
}

void ov14_021F5950(void) {
    /* Original at 0x021F5950 */
    /* Requires manual decompilation - 302 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x70\n    ldr r5, [r0, #0x34]\n    lsl r4, r1, #4\n    add r5, #0x30\n    str r0, [sp, #0x1c]\n    add r0, r5, r4\n    str r2, [sp, #0x20]\n    add r6, r3, #0\n    bl GetWindowBgId\n    add r0, r5, r4\n    bl GetWindowX\n    add r0, r5, r4\n    bl GetWindowY\n    add r0, r5, r4\n    bl GetWindowWidth\n    str r0, [sp, #0x30]\n    add r0, r5, r4\n    bl GetWindowHeight\n    str r0, [sp, #0x3c]\n    cmp r6, #1\n    bne _021F599A\n    add r0, r5, r4\n    mov r1, #0xb\n    bl FillWindowPixelBuffer\n    ldr r0, _021F5BD4 ; =0x000E0F00\n    str r0, [sp, #0x4c]\n    mov r0, #6\n    lsl r0, r0, #6\n    str r0, [sp, #0x40]\n    b _021F59AA\n    add r0, r5, r4\n    mov r1, #4\n    bl FillWindowPixelBuffer\n    ldr r0, _021F5BD4 ; =0x000E0F00\n    str r0, [sp, #0x4c]\n    mov r0, #0\n    str r0, [sp, #0x40]\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #0x13\n    mov r1, #0x40\n    mov r2, #1\n    add r3, sp, #0x6c\n    bl GfGfxLoader_GetCharData\n    str r0, [sp, #0x50]\n    ldr r0, [sp, #0x6c]\n    mov r2, #0\n    ldr r6, [r0, #0x14]\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    str r2, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x40]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    ldr r0, [sp, #0x30]\n    mov r2, #0\n    sub r0, r0, #1\n    lsl r7, r0, #3\n    str r0, [sp, #0x2c]\n    mov r0, #8\n    str r0, [sp]\n    lsl r1, r7, #0x10\n    str r0, [sp, #4]\n    lsr r1, r1, #0x10\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r1, [sp, #0x40]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    add r1, #0x40\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    ldr r0, [sp, #0x3c]\n    mov r3, #0\n    sub r0, r0, #1\n    str r0, [sp, #0x38]\n    lsl r0, r0, #3\n    str r0, [sp, #0x34]\n    mov r0, #8\n    ldr r1, [sp, #0x34]\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r1, r1, #0x10\n    str r3, [sp, #8]\n    lsr r1, r1, #0x10\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r2, #0xff\n    str r2, [sp, #0x18]\n    ldr r1, [sp, #0x40]\n    add r2, #0x21\n    add r1, r1, r2\n    add r0, r5, r4\n    add r1, r6, r1\n    add r2, r3, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    lsl r1, r7, #0x10\n    str r0, [sp, #4]\n    lsr r1, r1, #0x10\n    str r1, [sp, #8]\n    ldr r1, [sp, #0x34]\n    mov r2, #0xff\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    str r2, [sp, #0x18]\n    ldr r1, [sp, #0x40]\n    add r2, #0x61\n    add r1, r1, r2\n    mov r2, #0\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    ldr r0, [sp, #0x38]\n    mov r7, #1\n    cmp r0, #1\n    ble _021F5AFE\n    ldr r0, [sp, #0x40]\n    ldr r1, [sp, #0x40]\n    str r0, [sp, #0x54]\n    add r0, #0x60\n    str r0, [sp, #0x54]\n    ldr r0, [sp, #0x30]\n    str r1, [sp, #0x58]\n    sub r0, r0, #1\n    add r1, #0xa0\n    lsl r0, r0, #3\n    str r1, [sp, #0x58]\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0x10\n    sub r1, r1, #1\n    lsr r0, r0, #0x10\n    str r1, [sp, #0x44]\n    str r0, [sp, #0x5c]\n    lsl r0, r7, #3\n    str r0, [sp, #0x28]\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #0x54]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    mov r2, #0\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x5c]\n    ldr r1, [sp, #0x58]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x28]\n    mov r2, #0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    add r0, r7, #1\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #0x44]\n    cmp r7, r0\n    blt _021F5A9A\n    ldr r0, [sp, #0x2c]\n    mov r7, #1\n    cmp r0, #1\n    ble _021F5B8E\n    ldr r0, [sp, #0x40]\n    mov r2, #5\n    str r0, [sp, #0x60]\n    add r0, #0x20\n    str r0, [sp, #0x60]\n    ldr r0, [sp, #0x3c]\n    ldr r1, [sp, #0x40]\n    lsl r2, r2, #6\n    sub r0, r0, #1\n    add r1, r1, r2\n    lsl r0, r0, #3\n    str r1, [sp, #0x64]\n    ldr r1, [sp, #0x30]\n    lsl r0, r0, #0x10\n    sub r1, r1, #1\n    lsr r0, r0, #0x10\n    str r1, [sp, #0x48]\n    str r0, [sp, #0x68]\n    lsl r0, r7, #3\n    str r0, [sp, #0x24]\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x60]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    mov r2, #0\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x64]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x68]\n    mov r2, #0\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    add r0, r7, #1\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #0x48]\n    cmp r7, r0\n    blt _021F5B2A\n    ldr r0, [sp, #0x50]\n    bl Heap_Free\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x20]\n    ldr r0, [r0, #0x34]\n    ldr r0, [r0, #0x20]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r2, [sp, #0x30]\n    mov r7, #4\n    lsl r3, r2, #3\n    lsr r2, r3, #0x1f\n    add r2, r3, r2\n    ldr r0, [sp, #0x4c]\n    str r7, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r1, r6, #0\n    asr r2, r2, #1\n    add r3, r7, #0\n    bl ov14_021F4F24\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x70\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F5BD4: .word 0x000E0F00"
    );
    #endif
}

void ov14_021F5BD8(void) {
    /* Original at 0x021F5BD8 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    ldr r5, [r7, #0x34]\n    lsl r4, r1, #4\n    add r5, #0x30\n    add r0, r5, r4\n    str r2, [sp, #0xc]\n    add r6, r3, #0\n    bl GetWindowBgId\n    add r0, r5, r4\n    bl GetWindowX\n    add r0, r5, r4\n    bl GetWindowY\n    add r0, r5, r4\n    bl GetWindowWidth\n    str r0, [sp, #0x10]\n    add r0, r5, r4\n    bl GetWindowHeight\n    cmp r6, #1\n    bne _021F5C16\n    add r0, r5, r4\n    mov r1, #0xb\n    bl FillWindowPixelBuffer\n    b _021F5C1E\n    add r0, r5, r4\n    mov r1, #4\n    bl FillWindowPixelBuffer\n    ldr r0, [r7, #0x34]\n    ldr r1, [sp, #0xc]\n    ldr r0, [r0, #0x20]\n    ldr r6, _021F5C80 ; =0x000E0F00\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    add r0, sp, #0x18\n    ldrb r0, [r0, #0x10]\n    add r1, r0, #0\n    add r1, #0xfe\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, #1\n    bhi _021F5C5A\n    mov r1, #4\n    str r1, [sp]\n    str r6, [sp, #4]\n    str r0, [sp, #8]\n    ldr r2, [sp, #0x10]\n    add r0, r5, r4\n    lsl r3, r2, #3\n    lsr r2, r3, #0x1f\n    add r2, r3, r2\n    add r1, r7, #0\n    asr r2, r2, #1\n    mov r3, #0\n    bl ov14_021F4F24\n    b _021F5C6E\n    mov r1, #4\n    str r1, [sp]\n    str r6, [sp, #4]\n    mov r2, #0\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r1, r7, #0\n    add r3, r2, #0\n    bl ov14_021F4F24\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F5C80: .word 0x000E0F00"
    );
    #endif
}

void ov14_021F5C84(void) {
    ov14_021F5950();
}

void ov14_021F5C94(void) {
    /* Original at 0x021F5C94 */
    /* Requires manual decompilation - 239 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    ldr r5, [r0, #0x34]\n    lsl r4, r1, #4\n    add r5, #0x30\n    str r0, [sp, #0x1c]\n    add r0, r5, r4\n    str r2, [sp, #0x20]\n    bl GetWindowWidth\n    str r0, [sp, #0x2c]\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #0x13\n    mov r1, #0xe\n    mov r2, #1\n    add r3, sp, #0x38\n    bl GfGfxLoader_GetCharData\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x38]\n    mov r2, #0\n    ldr r6, [r0, #0x14]\n    mov r1, #0x18\n    str r1, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    str r2, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0xae\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    lsl r1, r1, #4\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r1, #0x18\n    mov r2, #0\n    str r1, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0xb6\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    lsl r1, r1, #4\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r3, #0x18\n    str r3, [sp]\n    mov r1, #8\n    str r1, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    str r3, [sp, #0x10]\n    str r1, [sp, #0x14]\n    mov r1, #0xb2\n    mov r0, #0xff\n    lsl r1, r1, #4\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    ldr r0, [sp, #0x2c]\n    sub r0, r0, #1\n    str r0, [sp, #0x28]\n    lsl r7, r0, #3\n    mov r0, #8\n    str r0, [sp]\n    lsl r1, r7, #0x10\n    mov r2, #0\n    str r0, [sp, #4]\n    lsr r1, r1, #0x10\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r1, #0xd6\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    lsl r1, r1, #4\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r1, #8\n    str r1, [sp]\n    lsl r0, r7, #0x10\n    mov r2, #0\n    str r1, [sp, #4]\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r1, [sp, #0x14]\n    mov r1, #0xd2\n    mov r0, #0xff\n    lsl r1, r1, #4\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    lsl r1, r7, #0x10\n    mov r2, #0\n    str r0, [sp, #4]\n    lsr r1, r1, #0x10\n    str r1, [sp, #8]\n    mov r1, #0x10\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r1, #0x35\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    lsl r1, r1, #6\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    ldr r0, [sp, #0x28]\n    mov r7, #1\n    cmp r0, #1\n    ble _021F5E4A\n    ldr r0, [sp, #0x2c]\n    sub r0, r0, #1\n    str r0, [sp, #0x30]\n    lsl r0, r7, #3\n    str r0, [sp, #0x24]\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    mov r1, #0xb\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    lsl r1, r1, #8\n    mov r2, #0\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x2e\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    lsl r1, r1, #6\n    mov r2, #0\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x24]\n    mov r1, #0x2d\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    lsl r1, r1, #6\n    mov r2, #0\n    str r0, [sp, #0x18]\n    add r0, r5, r4\n    add r1, r6, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    add r0, r7, #1\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #0x30]\n    cmp r7, r0\n    blt _021F5DB8\n    ldr r0, [sp, #0x34]\n    bl Heap_Free\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x20]\n    ldr r0, [r0, #0x34]\n    ldr r0, [r0, #0x20]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r2, [sp, #0x2c]\n    mov r7, #4\n    lsl r3, r2, #3\n    lsr r2, r3, #0x1f\n    add r2, r3, r2\n    ldr r0, _021F5E90 ; =0x00090A00\n    str r7, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r1, r6, #0\n    asr r2, r2, #1\n    add r3, r7, #0\n    bl ov14_021F4F24\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F5E90: .word 0x00090A00"
    );
    #endif
}

void ov14_021F5E94(void) {
    /* Original at 0x021F5E94 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0]\n    ldr r1, [r1, #8]\n    cmp r1, #3\n    bne _021F5EA8\n    mov r1, #0x19\n    mov r2, #0x40\n    bl ov14_021F5C94\n    pop {r3, pc}\n    mov r1, #0x19\n    mov r2, #0x3d\n    bl ov14_021F5C94\n    pop {r3, pc}"
    );
    #endif
}

void ov14_021F5EB4(void) {
    ov14_021F5950();
}

void ov14_021F5EC4(void) {
    ov14_021F5950();
}

void ov14_021F5ED4(void) {
    ov14_021F5950();
}

void ov14_021F5EE4(void) {
    /* Original at 0x021F5EE4 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    str r1, [sp, #0xc]\n    mov r0, #0x2f\n    add r6, r2, #0\n    add r2, sp, #0x14\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #3\n    add r2, #2\n    add r3, sp, #0x14\n    bl sub_02019B44\n    mov r4, #0\n    cmp r6, #0\n    bls _021F5F90\n    sub r0, r6, #1\n    str r0, [sp, #0x10]\n    add r7, sp, #0x14\n    ldr r0, [sp, #0x10]\n    sub r0, r0, r4\n    lsl r1, r0, #2\n    ldr r0, [sp, #0xc]\n    add r2, r0, r1\n    ldrh r0, [r2, #2]\n    cmp r0, #0\n    bne _021F5F56\n    ldrh r2, [r2]\n    mov r1, #0x21\n    add r0, r5, #0\n    sub r1, r1, r4\n    mov r3, #0\n    bl ov14_021F5950\n    ldrh r0, [r7, #2]\n    mov r2, #0\n    add r3, r2, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldrh r0, [r7]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #7\n    sub r1, r1, r4\n    bl sub_020199F4\n    b _021F5F8A\n    ldrh r2, [r2]\n    mov r1, #0x21\n    add r0, r5, #0\n    sub r1, r1, r4\n    bl ov14_021F5C94\n    ldrh r0, [r7, #2]\n    mov r2, #0\n    add r3, r2, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldrh r0, [r7]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    mov r1, #7\n    sub r1, r1, r4\n    bl sub_020199F4\n    add r4, r4, #1\n    cmp r4, r6\n    blo _021F5F0E\n    cmp r6, #5\n    bhs _021F5FB6\n    mov r7, #0x21\n    sub r0, r7, r6\n    lsl r4, r0, #4\n    ldr r0, [r5, #0x34]\n    mov r1, #0\n    add r0, #0x30\n    add r0, r0, r4\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x34]\n    add r0, #0x30\n    add r0, r0, r4\n    bl CopyWindowPixelsToVram_TextMode\n    add r6, r6, #1\n    cmp r6, #5\n    blo _021F5F96\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F5FBC(void) {
    /* Original at 0x021F5FBC */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #2\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #8\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x21\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x22\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x23\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #2\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #8\n    add r0, r1, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x21\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x22\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl CopyWindowPixelsToVram_TextMode\n    mov r0, #0x23\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl CopyWindowPixelsToVram_TextMode\n    cmp r4, #0\n    bne _021F603C\n    add r0, r5, #0\n    mov r1, #0x21\n    mov r2, #0x51\n    mov r3, #0\n    bl ov14_021F5950\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #0x21\n    mov r2, #0x50\n    mov r3, #0\n    bl ov14_021F5950\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F604C(void) {
    ov14_021F5950();
}

void ov14_021F605C(void) {
    ov14_021F5BD8(0x29, 3, 0x4d, 0);
}

void ov14_021F6070(void) {
    ov14_021F605C();
    ov14_021F5950(r4, 0x20, 0x1a, 0);
    ov14_021F5950(r4, 0x21, 0x1b, 0);
}

void ov14_021F6094(void) {
    ov14_021F5BD8(0x29, 3, 0x4e, 0);
}

void ov14_021F60A8(void) {
    ov14_021F5BD8(0x29, 3, 0x4f, 0);
}

void ov14_021F60BC(void) {
    /* Original at 0x021F60BC */
    /* Requires manual decompilation - 162 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    bl sub_02019B08\n    add r2, sp, #0xc\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, #2\n    add r3, sp, #0xc\n    bl sub_02019B44\n    add r0, r4, #0\n    bl GetWindowBaseTile\n    add r2, r0, #0\n    ldrb r0, [r4, #9]\n    add r3, sp, #0xc\n    lsl r0, r0, #0x1c\n    lsr r5, r0, #0x10\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    add r1, r5, r0\n    strh r1, [r7]\n    ldrh r4, [r3, #2]\n    add r1, r0, #2\n    add r1, r5, r1\n    sub r4, r4, #1\n    lsl r4, r4, #1\n    strh r1, [r7, r4]\n    ldrh r4, [r3]\n    add r1, r0, #0\n    add r1, #9\n    ldrh r6, [r3, #2]\n    sub r4, r4, #1\n    add r1, r5, r1\n    mul r4, r6\n    lsl r4, r4, #1\n    strh r1, [r7, r4]\n    add r1, r0, #0\n    add r1, #0xb\n    add r6, r5, r1\n    ldrh r4, [r3, #2]\n    ldrh r1, [r3]\n    mul r1, r4\n    sub r1, r1, #1\n    lsl r1, r1, #1\n    strh r6, [r7, r1]\n    ldrh r4, [r3, #2]\n    mov r1, #0\n    sub r4, r4, #2\n    cmp r4, #0\n    ble _021F6164\n    add r4, r0, #1\n    add r0, #0xa\n    add r0, r5, r0\n    add r4, r5, r4\n    lsl r0, r0, #0x10\n    lsl r4, r4, #0x10\n    lsr r0, r0, #0x10\n    lsr r6, r4, #0x10\n    str r0, [sp, #4]\n    lsl r0, r1, #1\n    add r0, r7, r0\n    strh r6, [r0, #2]\n    ldrh r4, [r3]\n    ldrh r0, [r3, #2]\n    sub r4, r4, #1\n    mul r4, r0\n    add r0, r1, r4\n    lsl r0, r0, #1\n    add r4, r7, r0\n    ldr r0, [sp, #4]\n    strh r0, [r4, #2]\n    add r0, r1, #1\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldrh r0, [r3, #2]\n    sub r0, r0, #2\n    cmp r1, r0\n    blt _021F613E\n    add r6, sp, #0xc\n    ldrh r1, [r6]\n    mov r0, #0\n    sub r1, r1, #2\n    cmp r1, #0\n    ble _021F61AE\n    ldr r1, _021F6204 ; =0x000003EB\n    add r3, r5, r1\n    add r1, r1, #2\n    add r1, r5, r1\n    lsl r3, r3, #0x10\n    lsl r1, r1, #0x10\n    lsr r3, r3, #0x10\n    lsr r1, r1, #0x10\n    str r3, [sp, #8]\n    mov ip, r1\n    ldrh r1, [r6, #2]\n    add r4, r0, #1\n    add r0, r0, #2\n    add r3, r1, #0\n    mul r3, r4\n    ldr r1, [sp, #8]\n    lsl r3, r3, #1\n    strh r1, [r7, r3]\n    ldrh r1, [r6, #2]\n    mul r0, r1\n    lsl r0, r0, #1\n    add r0, r7, r0\n    sub r1, r0, #2\n    mov r0, ip\n    strh r0, [r1]\n    ldrh r1, [r6]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    sub r1, r1, #2\n    cmp r0, r1\n    blt _021F6184\n    mov r0, #0\n    str r0, [sp]\n    cmp r1, #0\n    ble _021F6200\n    add r0, sp, #0xc\n    ldrh r6, [r0, #2]\n    mov r3, #0\n    sub r0, r6, #2\n    cmp r0, #0\n    ble _021F61EA\n    ldr r0, [sp]\n    add r4, r0, #1\n    add r0, r6, #0\n    mul r0, r4\n    add r0, r3, r0\n    lsl r0, r0, #1\n    add r1, r5, r2\n    add r0, r7, r0\n    strh r1, [r0, #2]\n    add r0, r2, #1\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    add r0, r3, #1\n    lsl r0, r0, #0x10\n    lsr r3, r0, #0x10\n    add r0, sp, #0xc\n    ldrh r6, [r0, #2]\n    sub r0, r6, #2\n    cmp r3, r0\n    blt _021F61C6\n    ldr r0, [sp]\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    add r0, sp, #0xc\n    ldrh r0, [r0]\n    sub r1, r0, #2\n    ldr r0, [sp]\n    cmp r0, r1\n    blt _021F61B6\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F6204: .word 0x000003EB"
    );
    #endif
}

void ov14_021F6208(void) {
    /* Original at 0x021F6208 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r2, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    add r4, r1, #0\n    bl GetWindowBgId\n    add r7, r0, #0\n    add r0, r6, #0\n    bl GetWindowWidth\n    str r0, [sp, #4]\n    add r0, r6, #0\n    bl GetWindowHeight\n    str r0, [sp]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl sub_020195F4\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_02019A60\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov14_021F6244(void) {
    /* Original at 0x021F6244 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x2f\n    add r4, r0, #0\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, #0xf0\n    mov r1, #3\n    add r2, r4, r2\n    bl ov14_021F6208\n    mov r2, #0x2f\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, #0xe0\n    mov r1, #4\n    add r2, r4, r2\n    bl ov14_021F6208\n    mov r2, #0x2f\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, #0xd0\n    mov r1, #5\n    add r2, r4, r2\n    bl ov14_021F6208\n    mov r2, #0x2f\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, #0xc0\n    mov r1, #6\n    add r2, r4, r2\n    bl ov14_021F6208\n    mov r2, #0x2f\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, #0xb0\n    mov r1, #7\n    add r2, r4, r2\n    bl ov14_021F6208\n    mov r2, #0x2f\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, #0x30\n    mov r1, #0xc\n    add r2, r4, r2\n    bl ov14_021F60BC\n    mov r2, #0x2f\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, #0x20\n    mov r1, #0xe\n    add r2, r4, r2\n    bl ov14_021F6208\n    mov r2, #0x2f\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, #0x10\n    mov r1, #0xf\n    add r2, r4, r2\n    bl ov14_021F6208\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F62CC(void) {
    /* Original at 0x021F62CC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    mov r0, #0x2f\n    mov r2, #0x1b\n    lsl r0, r0, #4\n    lsl r2, r2, #4\n    ldr r0, [r3, r0]\n    add r2, r3, r2\n    ldr r3, _021F62E0 ; =ov14_021F6208\n    mov r1, #8\n    bx r3\n    _021F62E0: .word ov14_021F6208"
    );
    #endif
}

void ov14_021F62E4(void) {
    /* Original at 0x021F62E4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    mov r0, #0x2f\n    mov r2, #7\n    lsl r0, r0, #4\n    lsl r2, r2, #6\n    ldr r0, [r3, r0]\n    add r2, r3, r2\n    ldr r3, _021F62F8 ; =ov14_021F6208\n    mov r1, #9\n    bx r3\n    _021F62F8: .word ov14_021F6208"
    );
    #endif
}

void ov14_021F62FC(void) {
    /* Original at 0x021F62FC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    mov r0, #0x2f\n    mov r2, #0x1d\n    lsl r0, r0, #4\n    lsl r2, r2, #4\n    ldr r0, [r3, r0]\n    add r2, r3, r2\n    ldr r3, _021F6310 ; =ov14_021F6208\n    mov r1, #0xa\n    bx r3\n    _021F6310: .word ov14_021F6208"
    );
    #endif
}

void ov14_021F6314(void) {
    /* Original at 0x021F6314 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    mov r2, #0x1f\n    ldr r3, [r4, #0x34]\n    lsl r0, r0, #4\n    lsl r2, r2, #4\n    ldr r0, [r3, r0]\n    mov r1, #0xb\n    add r2, r3, r2\n    bl ov14_021F6208\n    add r0, r4, #0\n    mov r1, #0\n    bl ov14_021F5ED4\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F6338(void) {
    /* Original at 0x021F6338 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r0, #0\n    add r6, r1, #0\n    add r5, r7, #0\n    add r5, #0x30\n    lsl r4, r6, #4\n    add r0, r5, r4\n    mov r1, #0xd\n    str r2, [sp, #0x14]\n    bl FillWindowPixelBuffer\n    add r0, r5, r4\n    bl GetWindowWidth\n    lsl r1, r0, #3\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    lsl r0, r0, #0x17\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, _021F6388 ; =0x00090A0D\n    ldr r3, [sp, #0x14]\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r1, [r7, #0x20]\n    add r0, r7, #0\n    add r2, r6, #0\n    bl ov14_021F4F84\n    add r0, r5, r4\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F6388: .word 0x00090A0D"
    );
    #endif
}

void ov14_021F638C(void) {
    ov14_021F6338(0x22, 0x48, 0);
    ov14_021F6338(r4, 0x23, 0x49, 0);
}

void ov14_021F63A8(void) {
    ov14_021F6338();
}

void ov14_021F63B8(void) {
    ov14_021F6338();
}

void ov14_021F63C8(void) {
    /* Original at 0x021F63C8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x2f\n    add r4, r0, #0\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, #0xa0\n    mov r1, #2\n    add r2, r4, r2\n    bl sub_02019A60\n    mov r2, #0x2f\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, #0x90\n    mov r1, #2\n    add r2, r4, r2\n    bl sub_02019A60\n    pop {r4, pc}"
    );
    #endif
}

void ov14_021F63F0(void) {
    /* Original at 0x021F63F0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x2f\n    add r3, r0, #0\n    lsl r2, r2, #4\n    ldr r0, [r3, r2]\n    sub r2, #0x80\n    add r2, r3, r2\n    ldr r3, _021F6404 ; =sub_02019A60\n    mov r1, #1\n    bx r3\n    nop\n    _021F6404: .word sub_02019A60"
    );
    #endif
}

void ov14_021F6408(void) {
    /* Original at 0x021F6408 */
    /* Requires manual decompilation - 255 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    str r0, [sp, #0x1c]\n    ldr r4, [r0, #0x34]\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    str r0, [sp, #0x20]\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #0x13\n    mov r1, #0xe\n    mov r2, #1\n    add r3, sp, #0x30\n    bl GfGfxLoader_GetCharData\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x30]\n    mov r2, #0\n    ldr r5, [r0, #0x14]\n    mov r1, #0x18\n    str r1, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    str r2, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    mov r0, #0x2e\n    mov r1, #0x7a\n    lsl r0, r0, #4\n    lsl r1, r1, #4\n    add r0, r4, r0\n    add r1, r5, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r1, #0x18\n    mov r2, #0\n    str r1, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    mov r0, #0x2e\n    mov r1, #0xba\n    lsl r0, r0, #4\n    lsl r1, r1, #4\n    add r0, r4, r0\n    add r1, r5, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r3, #0x18\n    str r3, [sp]\n    mov r1, #8\n    str r1, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    str r3, [sp, #0x10]\n    str r1, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    mov r0, #0x2e\n    mov r1, #0xfa\n    lsl r0, r0, #4\n    lsl r1, r1, #4\n    add r0, r4, r0\n    add r1, r5, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    ldr r0, [sp, #0x20]\n    mov r1, #8\n    sub r0, r0, #1\n    str r1, [sp]\n    mov r2, #0\n    lsl r6, r0, #3\n    str r0, [sp, #0x2c]\n    lsl r0, r6, #0x10\n    str r1, [sp, #4]\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r1, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    mov r0, #0x2e\n    mov r1, #0xd\n    lsl r0, r0, #4\n    lsl r1, r1, #8\n    add r0, r4, r0\n    add r1, r5, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r1, #8\n    str r1, [sp]\n    lsl r0, r6, #0x10\n    str r1, [sp, #4]\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r1, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    mov r0, #0x2e\n    mov r1, #0xce\n    lsl r0, r0, #4\n    lsl r1, r1, #4\n    mov r2, #0\n    add r0, r4, r0\n    add r1, r5, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r1, #8\n    str r1, [sp]\n    lsl r0, r6, #0x10\n    mov r2, #0\n    str r1, [sp, #4]\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    str r1, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    mov r0, #0x2e\n    mov r1, #0x33\n    lsl r0, r0, #4\n    lsl r1, r1, #6\n    add r0, r4, r0\n    add r1, r5, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    ldr r0, [sp, #0x2c]\n    mov r7, #3\n    cmp r0, #3\n    ble _021F65D8\n    ldr r0, [sp, #0x20]\n    sub r0, r0, #1\n    str r0, [sp, #0x24]\n    mov r0, #8\n    str r0, [sp]\n    lsl r6, r7, #3\n    str r0, [sp, #4]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    mov r0, #0x2e\n    mov r1, #0xc2\n    lsl r0, r0, #4\n    lsl r1, r1, #4\n    mov r2, #0\n    add r0, r4, r0\n    add r1, r5, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    mov r0, #0x2e\n    mov r1, #0xca\n    lsl r0, r0, #4\n    lsl r1, r1, #4\n    mov r2, #0\n    add r0, r4, r0\n    add r1, r5, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xff\n    str r0, [sp, #0x18]\n    mov r0, #0x2e\n    mov r1, #0x32\n    lsl r0, r0, #4\n    lsl r1, r1, #6\n    mov r2, #0\n    add r0, r4, r0\n    add r1, r5, r1\n    add r3, r2, #0\n    bl BlitBitmapRect\n    add r0, r7, #1\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #0x24]\n    cmp r7, r0\n    blt _021F6542\n    ldr r0, [sp, #0x28]\n    bl Heap_Free\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x41\n    ldr r0, [r0, #0x34]\n    ldr r0, [r0, #0x20]\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    mov r3, #4\n    ldr r2, [sp, #0x20]\n    ldr r0, _021F6624 ; =0x00090A00\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    lsl r6, r2, #3\n    str r0, [sp, #8]\n    mov r0, #0x2e\n    lsr r2, r6, #0x1f\n    lsl r0, r0, #4\n    add r2, r6, r2\n    add r0, r4, r0\n    add r1, r5, #0\n    asr r2, r2, #1\n    bl ov14_021F4F24\n    add r0, r5, #0\n    bl String_Delete\n    mov r0, #0x2e\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl CopyWindowPixelsToVram_TextMode\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F6624: .word 0x00090A00"
    );
    #endif
}

void ov14_021F6628(void) {
    NewMsgDataFromNarc();
}

void ov14_021F6638(void) {
    /* Original at 0x021F6638 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xf\n    add r4, r0, #0\n    bl FillWindowPixelBuffer\n    ldr r1, _021F6650 ; =0x0000038E\n    add r0, r4, #0\n    mov r2, #0xa\n    bl sub_0200E948\n    pop {r4, pc}\n    nop\n    _021F6650: .word 0x0000038E"
    );
    #endif
}

void ov14_021F6654(void) {
    /* Original at 0x021F6654 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r6, #0\n    lsl r4, r1, #4\n    add r5, #0x30\n    add r0, r5, r4\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    add r0, r5, r4\n    bl GetWindowBgId\n    add r1, r0, #0\n    ldr r0, [r6, #0x14]\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F6678(void) {
    /* Original at 0x021F6678 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021F6684 ; =ClearFrameAndWindow2\n    add r0, #0x30\n    lsl r1, r1, #4\n    add r0, r0, r1\n    mov r1, #1\n    bx r3\n    _021F6684: .word ClearFrameAndWindow2"
    );
    #endif
}

void ov14_021F6688(void) {
    /* Original at 0x021F6688 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021F6694 ; =ClearFrameAndWindow2\n    add r0, #0x30\n    lsl r1, r1, #4\n    add r0, r0, r1\n    mov r1, #0\n    bx r3\n    _021F6694: .word ClearFrameAndWindow2"
    );
    #endif
}

void ov14_021F6698(void) {
    /* Original at 0x021F6698 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    str r1, [sp, #0x14]\n    add r4, r2, #0\n    bl ov14_021F6628\n    add r7, r0, #0\n    ldr r0, [r5, #0x34]\n    lsl r6, r4, #4\n    add r0, #0x30\n    add r0, r0, r6\n    bl ov14_021F6638\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _021F66E4 ; =0x0001020F\n    ldr r3, [sp, #0x14]\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldr r0, [r5, #0x34]\n    add r1, r7, #0\n    add r2, r4, #0\n    bl ov14_021F4FBC\n    ldr r0, [r5, #0x34]\n    add r0, #0x30\n    add r0, r0, r6\n    bl ScheduleWindowCopyToVram\n    add r0, r7, #0\n    bl DestroyMsgData\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F66E4: .word 0x0001020F"
    );
    #endif
}

void ov14_021F66E8(void) {
    /* Original at 0x021F66E8 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r3, r1, #0\n    cmp r2, #1\n    bne _021F66FA\n    mov r1, #0xb\n    add r2, r3, #0\n    bl ov14_021F6698\n    pop {r3, pc}\n    mov r1, #0xc\n    add r2, r3, #0\n    bl ov14_021F6698\n    pop {r3, pc}"
    );
    #endif
}

void ov14_021F6704(void) {
    /* Original at 0x021F6704 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r3, r1, #0\n    ldr r0, [r0, #0x24]\n    add r4, r2, #0\n    mov r1, #0\n    add r2, r3, #0\n    bl BufferItemName\n    add r0, r5, #0\n    mov r1, #0x17\n    add r2, r4, #0\n    bl ov14_021F6698\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F6724(void) {
    ov14_021F6698();
}

void ov14_021F6730(void) {
    ov14_021F6698();
}

void ov14_021F673C(void) {
    /* Original at 0x021F673C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r3, r1, #0\n    ldr r0, [r0, #0x24]\n    add r4, r2, #0\n    mov r1, #0\n    add r2, r3, #0\n    bl BufferItemName\n    add r0, r5, #0\n    mov r1, #0xf\n    add r2, r4, #0\n    bl ov14_021F6698\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F675C(void) {
    ov14_021F6698();
}

void ov14_021F6768(void) {
    /* Original at 0x021F6768 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r3, r1, #0\n    add r4, r2, #0\n    cmp r3, #0\n    ldr r0, [r5, #0x34]\n    bne _021F678C\n    ldr r0, [r0, #0x24]\n    mov r1, #0\n    mov r2, #0x70\n    bl BufferItemName\n    add r0, r5, #0\n    mov r1, #0x37\n    add r2, r4, #0\n    bl ov14_021F6698\n    pop {r3, r4, r5, pc}\n    ldr r0, [r0, #0x24]\n    mov r1, #0\n    add r2, r3, #0\n    bl BufferItemName\n    add r0, r5, #0\n    mov r1, #0x10\n    add r2, r4, #0\n    bl ov14_021F6698\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F67A4(void) {
    ov14_021F6698();
}

void ov14_021F67B0(void) {
    /* Original at 0x021F67B0 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    add r6, r2, #0\n    cmp r1, #6\n    bhi _021F6836\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021F67C6: ; jump table\n    mov r5, #2\n    b _021F6836\n    add r2, r4, #0\n    add r2, #0x21\n    ldrb r1, [r4, #0x1f]\n    ldrb r2, [r2]\n    mov r5, #3\n    bl ov14_021E60C0\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    bl BufferBoxMonNickname\n    b _021F6836\n    add r2, r4, #0\n    add r2, #0x21\n    ldrb r1, [r4, #0x1f]\n    ldrb r2, [r2]\n    mov r5, #4\n    bl ov14_021E60C0\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    bl BufferBoxMonNickname\n    b _021F6836\n    mov r5, #0x1f\n    b _021F6836\n    add r2, r4, #0\n    add r2, #0x21\n    ldrb r1, [r4, #0x1f]\n    ldrb r2, [r2]\n    mov r5, #0x20\n    bl ov14_021E60C0\n    add r2, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    bl BufferBoxMonNickname\n    b _021F6836\n    mov r5, #0x21\n    b _021F6836\n    mov r5, #6\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov14_021F6698\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F6844(void) {
    /* Original at 0x021F6844 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    beq _021F684E\n    cmp r1, #1\n    beq _021F6852\n    b _021F6854\n    mov r1, #7\n    b _021F6854\n    mov r1, #0xa\n    ldr r3, _021F6858 ; =ov14_021F6698\n    bx r3\n    _021F6858: .word ov14_021F6698"
    );
    #endif
}

void ov14_021F685C(void) {
    /* Original at 0x021F685C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r3, #0\n    cmp r2, #6\n    bhi _021F68B2\n    add r1, r2, r2\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021F6872: ; jump table\n    mov r4, #0x12\n    b _021F68B2\n    add r2, r5, #0\n    add r2, #0x21\n    ldrb r1, [r5, #0x1f]\n    ldrb r2, [r2]\n    mov r4, #0\n    bl ov14_021E60C0\n    add r2, r0, #0\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    ldr r0, [r0, #0x24]\n    bl BufferBoxMonNickname\n    b _021F68B2\n    mov r4, #5\n    b _021F68B2\n    mov r4, #0x13\n    b _021F68B2\n    mov r4, #0xd\n    b _021F68B2\n    mov r4, #0x1d\n    b _021F68B2\n    mov r4, #0x1e\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F6698\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F68C0(void) {
    /* Original at 0x021F68C0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r1, #7\n    bhi _021F6918\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F68D6: ; jump table\n    ldr r3, [r5, #0x34]\n    ldr r2, _021F6924 ; =0x000088C8\n    ldr r0, [r3, #0x24]\n    ldrh r2, [r3, r2]\n    mov r1, #0\n    mov r4, #0x1a\n    bl BufferItemName\n    b _021F6918\n    ldr r3, [r5, #0x34]\n    ldr r2, _021F6924 ; =0x000088C8\n    ldr r0, [r3, #0x24]\n    ldrh r2, [r3, r2]\n    mov r1, #0\n    mov r4, #0x1b\n    bl BufferItemName\n    b _021F6918\n    mov r4, #0x18\n    b _021F6918\n    mov r4, #0x22\n    b _021F6918\n    mov r4, #0xe\n    b _021F6918\n    mov r4, #0x3b\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F6698\n    pop {r4, r5, r6, pc}\n    _021F6924: .word 0x000088C8"
    );
    #endif
}

void ov14_021F6928(void) {
    /* Original at 0x021F6928 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    bl ov14_021F6628\n    add r7, r0, #0\n    cmp r4, #0xa\n    bhi _021F6996\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F6948: ; jump table\n    mov r4, #0x24\n    b _021F6996\n    mov r4, #0x25\n    b _021F6996\n    mov r4, #0x26\n    b _021F6996\n    mov r4, #0x27\n    b _021F6996\n    mov r4, #0x1c\n    b _021F6996\n    ldr r3, [r5, #0x34]\n    ldr r2, _021F69E8 ; =0x000088C8\n    ldr r0, [r3, #0x24]\n    ldrh r2, [r3, r2]\n    mov r1, #0\n    mov r4, #0x19\n    bl BufferItemName\n    b _021F6996\n    mov r4, #0x38\n    b _021F6996\n    mov r4, #0x39\n    b _021F6996\n    mov r4, #0x3a\n    b _021F6996\n    mov r4, #0x3b\n    b _021F6996\n    mov r4, #0x3c\n    add r0, r7, #0\n    add r1, r4, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r1, [r5, #0x34]\n    add r2, r4, #0\n    ldr r0, [r1, #0x24]\n    ldr r1, [r1, #0x28]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, [r5, #0x34]\n    lsl r4, r6, #4\n    add r0, #0x30\n    add r0, r0, r4\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r2, [r5, #0x34]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021F69EC ; =0x0001020F\n    mov r1, #1\n    str r0, [sp, #8]\n    add r0, r2, #0\n    str r3, [sp, #0xc]\n    add r0, #0x30\n    ldr r2, [r2, #0x28]\n    add r0, r0, r4\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl DestroyMsgData\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F69E8: .word 0x000088C8\n    _021F69EC: .word 0x0001020F"
    );
    #endif
}

void ov14_021F69F0(void) {
    /* Original at 0x021F69F0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    lsl r4, r1, #4\n    add r0, #0x30\n    ldr r1, _021F6A10 ; =0x0000038E\n    add r0, r0, r4\n    mov r2, #0xa\n    bl sub_0200E948\n    ldr r0, [r5, #0x34]\n    add r0, #0x30\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    pop {r3, r4, r5, pc}\n    _021F6A10: .word 0x0000038E"
    );
    #endif
}

void ov14_021F6A14(void) {
    /* Original at 0x021F6A14 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021F6A1C ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, _021F6A20 ; =ov14_021F864C\n    bx r3\n    nop\n    _021F6A1C: .word TouchscreenHitbox_FindRectAtTouchNew\n    _021F6A20: .word ov14_021F864C"
    );
    #endif
}

void ov14_021F6A24(void) {
    /* Original at 0x021F6A24 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021F6A2C ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, _021F6A30 ; =ov14_021F8614\n    bx r3\n    nop\n    _021F6A2C: .word TouchscreenHitbox_FindRectAtTouchNew\n    _021F6A30: .word ov14_021F8614"
    );
    #endif
}

void ov14_021F6A34(void) {
    /* Original at 0x021F6A34 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021F6A3C ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, _021F6A40 ; =ov14_021F8630\n    bx r3\n    nop\n    _021F6A3C: .word TouchscreenHitbox_FindRectAtTouchNew\n    _021F6A40: .word ov14_021F8630"
    );
    #endif
}

void ov14_021F6A44(void) {
    /* Original at 0x021F6A44 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    cmp r0, #3\n    bhi _021F6A74\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F6A5E: ; jump table\n    mov r5, #0\n    b _021F6A74\n    mov r5, #2\n    b _021F6A74\n    mov r5, #3\n    b _021F6A74\n    mov r5, #6\n    add r0, r4, #0\n    bl ov14_021F6B10\n    mov r0, #0xc\n    add r2, r5, #0\n    mul r2, r0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4, #0x2c]\n    ldr r1, _021F6AB4 ; =ov14_021F8B10 + 4\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0xa\n    str r0, [sp, #8]\n    ldr r0, _021F6AB8 ; =ov14_021F8B10\n    ldr r3, _021F6ABC ; =ov14_021F8B10 + 8\n    ldr r0, [r0, r2]\n    ldr r1, [r1, r2]\n    ldr r2, [r3, r2]\n    add r3, r4, #0\n    bl GridInputHandler_Create\n    ldr r1, [r4, #0x34]\n    str r0, [r1, #0x2c]\n    ldr r1, [r4, #0x2c]\n    add r0, r4, #0\n    bl ov14_021F6B28\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _021F6AB4: .word ov14_021F8B10 + 4\n    _021F6AB8: .word ov14_021F8B10\n    _021F6ABC: .word ov14_021F8B10 + 8"
    );
    #endif
}

void ov14_021F6AC0(void) {
    /* Original at 0x021F6AC0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    add r5, r0, #0\n    add r4, r2, #0\n    bl ov14_021F6B10\n    mov r0, #0xc\n    add r2, r6, #0\n    mul r2, r0\n    mov r0, #1\n    str r0, [sp]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0xa\n    str r0, [sp, #8]\n    ldr r0, _021F6B04 ; =ov14_021F8B10\n    ldr r1, _021F6B08 ; =ov14_021F8B10 + 4\n    ldr r3, _021F6B0C ; =ov14_021F8B10 + 8\n    ldr r0, [r0, r2]\n    ldr r1, [r1, r2]\n    ldr r2, [r3, r2]\n    add r3, r5, #0\n    bl GridInputHandler_Create\n    ldr r1, [r5, #0x34]\n    str r0, [r1, #0x2c]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _021F6B04: .word ov14_021F8B10\n    _021F6B08: .word ov14_021F8B10 + 4\n    _021F6B0C: .word ov14_021F8B10 + 8"
    );
    #endif
}

void ov14_021F6B10(void) {
    GridInputHandler_Free(0);
}

void ov14_021F6B28(void) {
    /* Original at 0x021F6B28 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r5, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #9\n    mov r2, #1\n    bl ov14_021F2A18\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r4, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F6B60(void) {
    /* Original at 0x021F6B60 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r4, r1, #0\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F6B7C(void) {
    /* Original at 0x021F6B7C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021F6B88 ; =ov14_021F2A18\n    ldr r0, [r0, #0x34]\n    mov r1, #9\n    mov r2, #0\n    bx r3\n    nop\n    _021F6B88: .word ov14_021F2A18"
    );
    #endif
}

void ov14_021F6B8C(void) {
    /* Original at 0x021F6B8C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    ldr r1, _021F6BA0 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, pc}\n    _021F6BA0: .word ov14_021E9F20"
    );
    #endif
}

void ov14_021F6BA4(void) {
    /* Original at 0x021F6BA4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r4, r1, #0\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F6BC0(void) {
    /* Original at 0x021F6BC0 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r6, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    add r4, r0, #0\n    cmp r4, #0xc\n    ldr r1, [r5, #0x34]\n    bhs _021F6C18\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F6C0C\n    cmp r4, #7\n    blo _021F6C14\n    cmp r4, #0xb\n    bhi _021F6C14\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021F6B28\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    cmp r4, #6\n    bne _021F6C14\n    mov r0, #0xb\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021F6C36\n    cmp r4, #6\n    beq _021F6C32\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _021F6C36\n    mov r0, #0xb\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F6C3C(void) {
    /* Original at 0x021F6C3C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    add r4, r1, #0\n    cmp r2, r0\n    beq _021F6C7E\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F6C70\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r4, [r0]\n    cmp r4, #0xff\n    beq _021F6C6C\n    cmp r4, #0x1e\n    blo _021F6C6C\n    sub r4, #0x1e\n    b _021F6C7E\n    mov r4, #0\n    b _021F6C7E\n    cmp r4, #8\n    beq _021F6C7E\n    cmp r4, #9\n    beq _021F6C7E\n    cmp r4, #0xa\n    beq _021F6C7E\n    mov r4, #7\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F6C94(void) {
    /* Original at 0x021F6C94 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    sub r0, r4, #6\n    cmp r0, #1\n    bhi _021F6CB4\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    add r4, r1, #0\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F6D10 ; =0x0000043C\n    str r4, [r1, r0]\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #1\n    bl ov14_021F2A18\n    cmp r4, #0\n    blt _021F6D04\n    cmp r4, #5\n    bgt _021F6D04\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    pop {r3, r4, r5, pc}\n    _021F6D10: .word 0x0000043C"
    );
    #endif
}

void ov14_021F6D14(void) {
    /* Original at 0x021F6D14 */
    /* Requires manual decompilation - 146 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0\n    blt _021F6D30\n    cmp r4, #5\n    bgt _021F6D30\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    b _021F6D3A\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    cmp r6, #8\n    bne _021F6D56\n    cmp r4, #0\n    bne _021F6D56\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F6E60 ; =0x0000043C\n    mov r2, #8\n    ldr r4, [r1, r0]\n    ldr r0, [r1, #0x2c]\n    lsl r1, r4, #0x18\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    cmp r4, #0\n    blt _021F6D64\n    cmp r4, #5\n    bgt _021F6D64\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F6E60 ; =0x0000043C\n    str r4, [r1, r0]\n    cmp r4, #0\n    bne _021F6DC0\n    cmp r6, #5\n    bne _021F6DC0\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    add r0, r0, #1\n    cmp r0, #0x12\n    blt _021F6D7C\n    mov r1, #0\n    b _021F6D84\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F49E0\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F4848\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    mov r1, #5\n    mov r2, #4\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F6E64 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    cmp r4, #5\n    bne _021F6E1A\n    cmp r6, #0\n    bne _021F6E1A\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    sub r0, r0, #1\n    bpl _021F6DD6\n    mov r1, #0x11\n    b _021F6DDE\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F49E0\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F4848\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    mov r1, #4\n    mov r2, #2\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F6E64 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    cmp r4, #0\n    blt _021F6E4A\n    cmp r4, #5\n    bgt _021F6E4A\n    cmp r6, #8\n    beq _021F6E4A\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    add r0, r5, #0\n    add r1, r4, r1\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F6E64 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    nop\n    _021F6E60: .word 0x0000043C\n    _021F6E64: .word ov14_021E9F20"
    );
    #endif
}

void ov14_021F6E68(void) {
    /* Original at 0x021F6E68 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r4, r1, #0\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    cmp r4, #6\n    beq _021F6E8A\n    cmp r4, #7\n    beq _021F6E8A\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F6E8C(void) {
    /* Original at 0x021F6E8C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r6, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    add r4, r0, #0\n    cmp r4, #0x27\n    ldr r1, [r5, #0x34]\n    bhs _021F6EE4\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F6ED8\n    cmp r4, #0x22\n    blo _021F6EE0\n    cmp r4, #0x26\n    bhi _021F6EE0\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021F6B28\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    cmp r4, #0x21\n    bne _021F6EE0\n    mov r0, #0x26\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021F6F02\n    cmp r4, #0x21\n    beq _021F6EFE\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _021F6F02\n    mov r0, #0x26\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F6F08(void) {
    /* Original at 0x021F6F08 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    add r4, r1, #0\n    cmp r2, r0\n    beq _021F6F5A\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F6F4C\n    add r0, r4, #0\n    sub r0, #0x1f\n    cmp r0, #1\n    bhi _021F6F32\n    mov r4, #0x1e\n    b _021F6F5A\n    cmp r4, #0x1e\n    beq _021F6F5A\n    cmp r4, #0x21\n    beq _021F6F5A\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r4, [r0]\n    cmp r4, #0xff\n    beq _021F6F48\n    cmp r4, #0x1e\n    blo _021F6F5A\n    mov r4, #0\n    b _021F6F5A\n    cmp r4, #0x23\n    beq _021F6F5A\n    cmp r4, #0x24\n    beq _021F6F5A\n    cmp r4, #0x25\n    beq _021F6F5A\n    mov r4, #0x22\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F6F70(void) {
    /* Original at 0x021F6F70 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r4, r1, #0\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    cmp r4, #0x1f\n    beq _021F6F92\n    cmp r4, #0x20\n    beq _021F6F92\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F6F94(void) {
    /* Original at 0x021F6F94 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r6, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F6FDC\n    cmp r4, #0x24\n    blo _021F700C\n    cmp r4, #0x28\n    bhi _021F700C\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021F6B28\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    sub r0, #0x21\n    cmp r0, #1\n    bhi _021F6FFC\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021F6B28\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    cmp r4, #0x23\n    beq _021F7008\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _021F700C\n    mov r0, #0x29\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F7010(void) {
    /* Original at 0x021F7010 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    add r4, r1, #0\n    cmp r2, r0\n    beq _021F7076\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F7060\n    add r0, r4, #0\n    sub r0, #0x1e\n    cmp r0, #5\n    bhi _021F7052\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F7042: ; jump table\n    mov r4, #0x1e\n    b _021F7076\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r4, [r0]\n    cmp r4, #0x1e\n    blo _021F7076\n    mov r4, #0\n    b _021F7076\n    cmp r4, #0x24\n    bne _021F7074\n    cmp r4, #0x25\n    bne _021F7074\n    cmp r4, #0x26\n    bne _021F7074\n    cmp r4, #0x27\n    bne _021F7074\n    cmp r4, #0x28\n    beq _021F7076\n    mov r4, #0x24\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F708C(void) {
    /* Original at 0x021F708C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    ldr r1, _021F70A0 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, pc}\n    _021F70A0: .word ov14_021E9F20"
    );
    #endif
}

void ov14_021F70A4(void) {
    /* Original at 0x021F70A4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r4, r1, #0\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F70C0(void) {
    /* Original at 0x021F70C0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #0\n    bne _021F70DE\n    ldr r0, [r5, #0x34]\n    mov r1, #0x2d\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    add r4, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetAllEnabled\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F70F4(void) {
    /* Original at 0x021F70F4 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    sub r0, #0x2b\n    cmp r0, #1\n    bhi _021F7118\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    add r4, r1, #0\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F717C ; =0x0000043C\n    add r4, #0x25\n    str r4, [r1, r0]\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #1\n    bl ov14_021F2A18\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7180 ; =0x0000044B\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    bne _021F7178\n    cmp r4, #0x25\n    blt _021F7170\n    cmp r4, #0x2a\n    bgt _021F7170\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    pop {r3, r4, r5, pc}\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    pop {r3, r4, r5, pc}\n    nop\n    _021F717C: .word 0x0000043C\n    _021F7180: .word 0x0000044B"
    );
    #endif
}

void ov14_021F7184(void) {
    /* Original at 0x021F7184 */
    /* Requires manual decompilation - 168 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F72FC ; =0x0000044B\n    add r6, r2, #0\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    bne _021F71B0\n    cmp r4, #0x25\n    blt _021F71A8\n    cmp r4, #0x2a\n    bgt _021F71A8\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    b _021F71B0\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    cmp r4, #0x25\n    bne _021F71EE\n    cmp r6, #0\n    blt _021F71BC\n    cmp r6, #5\n    ble _021F71D0\n    cmp r6, #0x18\n    blt _021F71C4\n    cmp r6, #0x1d\n    ble _021F71D0\n    cmp r6, #0x1e\n    blt _021F71CC\n    cmp r6, #0x1f\n    ble _021F71D0\n    cmp r6, #0x24\n    bne _021F71EE\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F7300 ; =0x0000043C\n    ldr r4, [r1, r0]\n    ldr r0, [r1, #0x2c]\n    bl GridInputHandler_GetUnk0F\n    add r3, r0, #0\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    lsl r2, r6, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    cmp r4, #0x25\n    blt _021F71FC\n    cmp r4, #0x2a\n    bgt _021F71FC\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F7300 ; =0x0000043C\n    str r4, [r1, r0]\n    cmp r4, #0x25\n    bne _021F7258\n    cmp r6, #0x2a\n    bne _021F7258\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    add r0, r0, #1\n    cmp r0, #0x12\n    blt _021F7214\n    mov r1, #0\n    b _021F721C\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F49E0\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F4848\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    mov r1, #5\n    mov r2, #4\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7304 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    cmp r4, #0x2a\n    bne _021F72B2\n    cmp r6, #0x25\n    bne _021F72B2\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    sub r0, r0, #1\n    bpl _021F726E\n    mov r1, #0x11\n    b _021F7276\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F49E0\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F4848\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    mov r1, #4\n    mov r2, #2\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7304 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    cmp r4, #0x25\n    blt _021F72E8\n    cmp r4, #0x2a\n    bgt _021F72E8\n    cmp r6, #0x25\n    blt _021F72E8\n    cmp r6, #0x2a\n    bgt _021F72E8\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    add r1, r4, r1\n    add r0, r5, #0\n    sub r1, #0x25\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7304 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    _021F72FC: .word 0x0000044B\n    _021F7300: .word 0x0000043C\n    _021F7304: .word ov14_021E9F20"
    );
    #endif
}

void ov14_021F7308(void) {
    /* Original at 0x021F7308 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x25\n    blt _021F731C\n    cmp r4, #0x2a\n    bgt _021F731C\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F733C ; =0x0000043C\n    str r4, [r1, r0]\n    cmp r4, #0x2b\n    beq _021F7338\n    cmp r4, #0x2c\n    beq _021F7338\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}\n    nop\n    _021F733C: .word 0x0000043C"
    );
    #endif
}

void ov14_021F7340(void) {
    /* Original at 0x021F7340 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E85E4\n    cmp r0, #0\n    bne _021F735E\n    ldr r0, [r5, #0x34]\n    mov r1, #0x2d\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    mov r1, #0x2b\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    mov r1, #0x2c\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    add r4, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetAllEnabled\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F7388(void) {
    /* Original at 0x021F7388 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r6, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F73D0\n    cmp r4, #8\n    blo _021F73E0\n    cmp r4, #0xc\n    bhi _021F73E0\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021F6B28\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    cmp r4, #7\n    beq _021F73DC\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _021F73E0\n    mov r0, #0xd\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F73E4(void) {
    /* Original at 0x021F73E4 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    add r4, r1, #0\n    cmp r2, r0\n    beq _021F742E\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F7418\n    cmp r4, #8\n    blt _021F742E\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r4, [r0]\n    cmp r4, #0x1e\n    blo _021F7414\n    sub r4, #0x1e\n    b _021F742E\n    mov r4, #0\n    b _021F742E\n    cmp r4, #8\n    bne _021F742C\n    cmp r4, #9\n    bne _021F742C\n    cmp r4, #0xa\n    bne _021F742C\n    cmp r4, #0xb\n    bne _021F742C\n    cmp r4, #0xc\n    beq _021F742E\n    mov r4, #8\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F7444(void) {
    /* Original at 0x021F7444 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r6, r2, #0\n    bl ov14_021E8544\n    cmp r0, #1\n    bne _021F747E\n    cmp r4, #6\n    bgt _021F7492\n    cmp r6, #7\n    blt _021F7492\n    add r0, r5, #0\n    bl ov14_021E76B8\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F74A8 ; =ov14_021EA180\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    cmp r4, #0xc\n    bne _021F7492\n    cmp r6, #7\n    bne _021F7492\n    ldr r0, [r5, #0x34]\n    mov r1, #7\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    mov r4, #7\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F74AC ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    nop\n    _021F74A8: .word ov14_021EA180\n    _021F74AC: .word ov14_021E9F20"
    );
    #endif
}

void ov14_021F74B0(void) {
    /* Original at 0x021F74B0 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r6, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F74F4\n    cmp r4, #0x24\n    bne _021F7524\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021F6B28\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    sub r0, #0x21\n    cmp r0, #1\n    bhi _021F7514\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021F6B28\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    cmp r4, #0x23\n    beq _021F7520\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _021F7524\n    mov r0, #0x25\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F7528(void) {
    /* Original at 0x021F7528 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    add r4, r1, #0\n    cmp r2, r0\n    beq _021F757E\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F7578\n    add r0, r4, #0\n    sub r0, #0x1e\n    cmp r0, #5\n    bhi _021F756A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F755A: ; jump table\n    mov r4, #0x1e\n    b _021F757E\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r4, [r0]\n    cmp r4, #0x1e\n    blo _021F757E\n    mov r4, #0\n    b _021F757E\n    cmp r4, #0x24\n    beq _021F757E\n    mov r4, #0x24\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F7594(void) {
    /* Original at 0x021F7594 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    ldr r1, _021F75A8 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, pc}\n    _021F75A8: .word ov14_021E9F20"
    );
    #endif
}

void ov14_021F75AC(void) {
    /* Original at 0x021F75AC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r4, r1, #0\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F75C8(void) {
    /* Original at 0x021F75C8 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetNextInput\n    add r6, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    add r4, r0, #0\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F760C\n    cmp r4, #8\n    bne _021F761C\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov14_021F6B28\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    cmp r4, #7\n    beq _021F7618\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _021F761C\n    mov r0, #9\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov14_021F7620(void) {
    /* Original at 0x021F7620 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    add r4, r1, #0\n    cmp r2, r0\n    beq _021F765A\n    mov r0, #0x2f\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8544\n    cmp r0, #0\n    bne _021F7654\n    cmp r4, #8\n    blt _021F765A\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r4, [r0]\n    cmp r4, #0x1e\n    blo _021F7650\n    sub r4, #0x1e\n    b _021F765A\n    mov r4, #0\n    b _021F765A\n    cmp r4, #8\n    beq _021F765A\n    mov r4, #8\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F7670(void) {
    /* Original at 0x021F7670 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov14_021F7AC4\n    ldr r0, [r4, #0x34]\n    ldr r1, _021F7684 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, pc}\n    _021F7684: .word ov14_021E9F20"
    );
    #endif
}

void ov14_021F7688(void) {
    /* Original at 0x021F7688 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    sub r0, r4, #6\n    cmp r0, #1\n    bhi _021F76A8\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    add r4, r1, #0\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F76FC ; =0x0000043C\n    str r4, [r1, r0]\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    cmp r4, #0\n    blt _021F76EE\n    cmp r4, #5\n    bgt _021F76EE\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    pop {r3, r4, r5, pc}\n    nop\n    _021F76FC: .word 0x0000043C"
    );
    #endif
}

void ov14_021F7700(void) {
    /* Original at 0x021F7700 */
    /* Requires manual decompilation - 146 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0\n    blt _021F771C\n    cmp r4, #5\n    bgt _021F771C\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    b _021F7726\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    cmp r6, #8\n    bne _021F7742\n    cmp r4, #0\n    bne _021F7742\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F784C ; =0x0000043C\n    mov r2, #8\n    ldr r4, [r1, r0]\n    ldr r0, [r1, #0x2c]\n    lsl r1, r4, #0x18\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    cmp r4, #0\n    blt _021F7750\n    cmp r4, #5\n    bgt _021F7750\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F784C ; =0x0000043C\n    str r4, [r1, r0]\n    cmp r4, #0\n    bne _021F77AC\n    cmp r6, #5\n    bne _021F77AC\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    add r0, r0, #1\n    cmp r0, #0x12\n    blt _021F7768\n    mov r1, #0\n    b _021F7770\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F49E0\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F4848\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    mov r1, #5\n    mov r2, #4\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7850 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    cmp r4, #5\n    bne _021F7806\n    cmp r6, #0\n    bne _021F7806\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    sub r0, r0, #1\n    bpl _021F77C2\n    mov r1, #0x11\n    b _021F77CA\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F49E0\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F4848\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    mov r1, #4\n    mov r2, #2\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7850 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    cmp r4, #0\n    blt _021F7836\n    cmp r4, #5\n    bgt _021F7836\n    cmp r6, #8\n    beq _021F7836\n    add r0, r5, #0\n    add r0, #0x25\n    ldrb r0, [r0]\n    mov r1, #6\n    bl _s32_div_f\n    mov r1, #6\n    mul r1, r0\n    add r0, r5, #0\n    add r1, r4, r1\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    bl ov14_021F48B4\n    add r0, r5, #0\n    bl ov14_021F57B8\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7850 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    nop\n    _021F784C: .word 0x0000043C\n    _021F7850: .word ov14_021E9F20"
    );
    #endif
}

void ov14_021F7854(void) {
    /* Original at 0x021F7854 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r4, r1, #0\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    cmp r4, #6\n    beq _021F7876\n    cmp r4, #7\n    beq _021F7876\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F7878(void) {
    /* Original at 0x021F7878 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r1, #0\n    add r5, r0, #0\n    sub r0, r4, #4\n    cmp r0, #1\n    bhi _021F789C\n    ldr r0, [r5, #0x34]\n    ldr r6, _021F78F4 ; =0x0000044D\n    ldrb r1, [r0, r6]\n    sub r6, #0x11\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1e\n    sub r2, r2, r3\n    mov r1, #0x1e\n    ror r2, r1\n    add r4, r3, r2\n    str r4, [r0, r6]\n    ldr r0, [r5, #0x34]\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0x32\n    ldr r1, [r5, #0x34]\n    lsl r0, r0, #4\n    add r2, sp, #0\n    ldr r0, [r1, r0]\n    ldrb r1, [r2, #1]\n    ldrb r2, [r2]\n    bl ManagedSprite_SetPositionXY\n    cmp r4, #0\n    blt _021F78E4\n    cmp r4, #3\n    bgt _021F78E4\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021F78F4: .word 0x0000044D"
    );
    #endif
}

void ov14_021F78F8(void) {
    /* Original at 0x021F78F8 */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0\n    blt _021F7914\n    cmp r4, #3\n    bgt _021F7914\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #0xe\n    bl ov14_021F29E4\n    b _021F791E\n    ldr r0, [r5, #0x34]\n    mov r1, #9\n    mov r2, #8\n    bl ov14_021F29E4\n    cmp r6, #6\n    bne _021F793A\n    cmp r4, #0\n    bne _021F793A\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F7A20 ; =0x0000043C\n    mov r2, #6\n    ldr r4, [r1, r0]\n    ldr r0, [r1, #0x2c]\n    lsl r1, r4, #0x18\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl GridInputHandler_SetNextLastUnk0FInputs\n    cmp r4, #0\n    blt _021F7948\n    cmp r4, #3\n    bgt _021F7948\n    ldr r1, [r5, #0x34]\n    ldr r0, _021F7A20 ; =0x0000043C\n    str r4, [r1, r0]\n    cmp r4, #0\n    bne _021F7998\n    cmp r6, #3\n    bne _021F7998\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7A24 ; =0x0000044D\n    ldrb r2, [r0, r1]\n    add r2, r2, #1\n    cmp r2, #0x18\n    blt _021F7960\n    mov r2, #0\n    b _021F7960\n    strb r2, [r0, r1]\n    add r0, r5, #0\n    bl ov14_021F462C\n    add r0, r5, #0\n    bl ov14_021F4530\n    add r0, r5, #0\n    bl ov14_021F459C\n    add r0, r5, #0\n    bl ov14_021F58B8\n    ldr r0, [r5, #0x34]\n    mov r1, #5\n    mov r2, #4\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7A28 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    cmp r4, #3\n    bne _021F79E6\n    cmp r6, #0\n    bne _021F79E6\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7A24 ; =0x0000044D\n    ldrb r2, [r0, r1]\n    sub r2, r2, #1\n    bpl _021F79AE\n    mov r2, #0x17\n    b _021F79AE\n    strb r2, [r0, r1]\n    add r0, r5, #0\n    bl ov14_021F462C\n    add r0, r5, #0\n    bl ov14_021F4530\n    add r0, r5, #0\n    bl ov14_021F459C\n    add r0, r5, #0\n    bl ov14_021F58B8\n    ldr r0, [r5, #0x34]\n    mov r1, #4\n    mov r2, #2\n    bl ov14_021F29E4\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7A28 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    cmp r4, #0\n    blt _021F7A0C\n    cmp r4, #3\n    bgt _021F7A0C\n    cmp r6, #6\n    beq _021F7A0C\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7A24 ; =0x0000044D\n    ldrb r2, [r0, r1]\n    lsr r2, r2, #2\n    lsl r2, r2, #2\n    add r2, r4, r2\n    strb r2, [r0, r1]\n    add r0, r5, #0\n    bl ov14_021F459C\n    add r0, r5, #0\n    bl ov14_021F58B8\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov14_021F7AC4\n    ldr r0, [r5, #0x34]\n    ldr r1, _021F7A28 ; =ov14_021E9F20\n    bl ov14_021E5A50\n    pop {r4, r5, r6, pc}\n    _021F7A20: .word 0x0000043C\n    _021F7A24: .word 0x0000044D\n    _021F7A28: .word ov14_021E9F20"
    );
    #endif
}

void ov14_021F7A2C(void) {
    /* Original at 0x021F7A2C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r4, r1, #0\n    lsl r1, r4, #0x18\n    ldr r0, [r0, #0x2c]\n    lsr r1, r1, #0x18\n    bl GridInputHandler_SetNextInput\n    cmp r4, #4\n    beq _021F7A4E\n    cmp r4, #5\n    beq _021F7A4E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov14_021F6B28\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F7A50(void) {
    /* Original at 0x021F7A50 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    mov r1, #0x2b\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    mov r1, #0x2c\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    mov r1, #0x2d\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    mov r1, #0x25\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    mov r1, #0x26\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    mov r1, #0x27\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    mov r1, #0x28\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    mov r1, #0x29\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    mov r1, #0x2a\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_ClearEnabledFlag\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_HandleInput_AllowHold\n    add r4, r0, #0\n    ldr r0, [r5, #0x34]\n    ldr r0, [r0, #0x2c]\n    bl GridInputHandler_SetAllEnabled\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F7AC4(void) {
    /* Original at 0x021F7AC4 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x2c]\n    add r4, r2, #0\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r2, sp, #0\n    add r1, #3\n    add r2, #2\n    bl DpadMenuBox_GetPosition\n    ldr r0, [r5, #0x2c]\n    add r1, r4, #0\n    bl GridInputHandler_GetDpadBox\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    bl DpadMenuBox_GetPosition\n    mov r0, #0xa\n    mov r1, #8\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    mov r0, #3\n    and r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    str r0, [r4, #4]\n    add r0, sp, #0\n    ldrb r1, [r0, #3]\n    strb r1, [r4]\n    ldrb r1, [r0, #2]\n    strb r1, [r4, #1]\n    ldrb r1, [r0, #1]\n    ldrb r0, [r0, #3]\n    cmp r0, r1\n    blo _021F7B24\n    sub r0, r0, r1\n    strb r0, [r4, #2]\n    ldr r1, [r4, #4]\n    mov r0, #1\n    bic r1, r0\n    str r1, [r4, #4]\n    b _021F7B34\n    sub r0, r1, r0\n    strb r0, [r4, #2]\n    ldr r1, [r4, #4]\n    mov r0, #1\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    str r0, [r4, #4]\n    add r0, sp, #0\n    ldrb r1, [r0]\n    ldrb r0, [r0, #2]\n    cmp r0, r1\n    blo _021F7B4C\n    sub r0, r0, r1\n    strb r0, [r4, #3]\n    ldr r1, [r4, #4]\n    mov r0, #2\n    bic r1, r0\n    str r1, [r4, #4]\n    b _021F7B58\n    sub r0, r1, r0\n    strb r0, [r4, #3]\n    ldr r1, [r4, #4]\n    mov r0, #2\n    orr r0, r1\n    str r0, [r4, #4]\n    ldrb r0, [r4, #2]\n    ldr r1, [r4, #4]\n    lsl r0, r0, #8\n    lsr r1, r1, #2\n    bl _u32_div_f\n    lsr r0, r0, #8\n    strb r0, [r4, #2]\n    ldrb r0, [r4, #3]\n    ldr r1, [r4, #4]\n    lsl r0, r0, #8\n    lsr r1, r1, #2\n    bl _u32_div_f\n    lsr r0, r0, #8\n    strb r0, [r4, #3]\n    str r4, [r5, #0xc]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov14_021F7B7C(void) {
    /* Original at 0x021F7B7C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0, #0x34]\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl ov14_021E8648\n    cmp r0, #0\n    bne _021F7B92\n    mov r0, #0\n    pop {r3, pc}\n    ldr r0, _021F7BB4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    lsl r0, r0, #0xa\n    tst r0, r1\n    beq _021F7BA2\n    mov r0, #1\n    pop {r3, pc}\n    ldr r0, _021F7BB8 ; =ov14_021F86C8\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #1\n    bne _021F7BB0\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _021F7BB4: .word gSystem\n    _021F7BB8: .word ov14_021F86C8"
    );
    #endif
}
