/* Decompiled from asm/overlay_74_thumb.s */
#include "global.h"

void ov74_02228C84(void) {
    /* Original at 0x02228C84 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, _02228CAC ; =ov74_0223BD68\n    ldr r1, _02228CB0 ; =0x00000123\n    mov r3, #0\n    ldrh r2, [r4, #2]\n    cmp r0, r2\n    bne _02228C9C\n    ldr r0, _02228CAC ; =ov74_0223BD68\n    lsl r1, r3, #2\n    ldrh r0, [r0, r1]\n    pop {r3, r4}\n    bx lr\n    add r3, r3, #1\n    add r4, r4, #4\n    cmp r3, r1\n    blo _02228C8C\n    mov r0, #0x3f\n    pop {r3, r4}\n    bx lr\n    nop\n    _02228CAC: .word ov74_0223BD68\n    _02228CB0: .word 0x00000123"
    );
    #endif
}

void ov74_IntToWstring5(void) {
    /* Original at 0x02228CB4 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r1, _02228D1C ; =0x00002710\n    add r0, r4, #0\n    bl _s32_div_f\n    add r0, #0x30\n    strh r0, [r5]\n    ldr r1, _02228D1C ; =0x00002710\n    add r0, r4, #0\n    bl _s32_div_f\n    add r4, r1, #0\n    mov r1, #0xfa\n    add r0, r4, #0\n    lsl r1, r1, #2\n    bl _s32_div_f\n    add r0, #0x30\n    mov r1, #0xfa\n    strh r0, [r5, #2]\n    add r0, r4, #0\n    lsl r1, r1, #2\n    bl _s32_div_f\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #0x64\n    bl _s32_div_f\n    add r0, #0x30\n    strh r0, [r5, #4]\n    add r0, r4, #0\n    mov r1, #0x64\n    bl _s32_div_f\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #0xa\n    bl _s32_div_f\n    add r0, #0x30\n    strh r0, [r5, #6]\n    add r0, r4, #0\n    mov r1, #0xa\n    bl _s32_div_f\n    add r4, r1, #0\n    add r4, #0x30\n    strh r4, [r5, #8]\n    pop {r3, r4, r5, pc}\n    _02228D1C: .word 0x00002710"
    );
    #endif
}

void ov74_02228D20(void) {
    /* Original at 0x02228D20 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [r7, #0x10]\n    bl PlayerProfile_GetNamePtr\n    ldr r5, _02228D58 ; =ov74_0223D080\n    add r4, r0, #0\n    mov r6, #0\n    ldrh r0, [r4]\n    bl ov74_02228C84\n    strh r0, [r5]\n    add r6, r6, #1\n    add r4, r4, #2\n    add r5, r5, #2\n    cmp r6, #8\n    blt _02228D30\n    ldr r0, [r7, #0x10]\n    bl PlayerProfile_GetTrainerID_VisibleHalf\n    add r1, r0, #0\n    ldr r0, _02228D5C ; =ov74_0223D090\n    bl ov74_IntToWstring5\n    ldr r0, _02228D60 ; =ov74_0223D080\n    mov r1, #0\n    strh r1, [r0, #0x1a]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02228D58: .word ov74_0223D080\n    _02228D5C: .word ov74_0223D090\n    _02228D60: .word ov74_0223D080"
    );
    #endif
}

void ov74_02228D64(void) {
    /* Original at 0x02228D64 */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x48\n    ldr r5, _02228E90 ; =_0223B340\n    add r4, r0, #0\n    add r3, sp, #0x20\n    mov r2, #5\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02228D70\n    ldr r3, _02228E94 ; =_0223B330\n    add r2, sp, #0x10\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, sp, #0x20\n    bl GfGfx_SetBanks\n    add r0, sp, #0x10\n    bl SetBothScreensModesAndDisable\n    mov r1, #0\n    str r1, [sp]\n    mov r3, #0xf\n    ldr r0, [r4, #4]\n    mov r2, #1\n    lsl r3, r3, #0xc\n    bl ov74_02235308\n    mov r0, #1\n    lsl r0, r0, #0xe\n    str r0, [sp]\n    mov r1, #1\n    mov r3, #0x3e\n    ldr r0, [r4, #4]\n    add r2, r1, #0\n    lsl r3, r3, #0xa\n    bl ov74_02235308\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #0x1e\n    ldr r0, [r4, #4]\n    mov r1, #4\n    mov r2, #1\n    lsl r3, r3, #0xa\n    bl ov74_02235308\n    mov r0, #1\n    lsl r0, r0, #0xe\n    str r0, [sp]\n    mov r3, #7\n    ldr r0, [r4, #4]\n    mov r1, #5\n    mov r2, #1\n    lsl r3, r3, #0xc\n    bl ov74_02235308\n    bl ResetAllTextPrinters\n    mov r0, #0\n    ldr r2, [r4]\n    add r1, r0, #0\n    bl LoadFontPal0\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [r4]\n    mov r2, #1\n    str r0, [sp, #4]\n    ldr r0, [r4, #4]\n    add r3, r2, #0\n    bl LoadUserFrameGfx1\n    ldr r0, [r4, #0x14]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [r4]\n    mov r1, #0\n    str r0, [sp, #4]\n    ldr r0, [r4, #4]\n    mov r2, #0xa\n    mov r3, #2\n    bl LoadUserFrameGfx2\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, [r4]\n    mov r1, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    add r3, r0, #0\n    add r2, r1, #0\n    add r3, #0x8f\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #5\n    lsl r0, r0, #0xa\n    mov r1, #1\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r4]\n    add r3, r1, #0\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #4]\n    mov r0, #0x71\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    ldr r0, [r4]\n    mov r1, #2\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #4]\n    mov r0, #0x71\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    mov r2, #0\n    ldr r0, [r4, #4]\n    mov r1, #1\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    bl ov74_02228E98\n    add sp, #0x48\n    pop {r3, r4, r5, pc}\n    nop\n    _02228E90: .word _0223B340\n    _02228E94: .word _0223B330"
    );
    #endif
}

void ov74_02228E98(void) {
    /* Original at 0x02228E98 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, [r4]\n    mov r2, #4\n    add r3, r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #0\n    add r3, #0xfc\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #5\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    ldr r0, [r4]\n    mov r3, #4\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #4]\n    mov r0, #0x71\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    mov r1, #2\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #4]\n    mov r0, #0x71\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    mov r2, #0\n    ldr r0, [r4, #4]\n    mov r1, #4\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    ldr r0, [r4, #4]\n    mov r1, #4\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02228F14(void) {
    /* Original at 0x02228F14 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x5c\n    add r4, r0, #0\n    add r0, #0x18\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _02228F5E\n    mov r0, #1\n    str r0, [sp]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    add r0, sp, #8\n    add r1, #0x18\n    mov r2, #0\n    mov r3, #0x11\n    bl ov74_02235414\n    mov r3, #0x51\n    lsl r3, r3, #2\n    ldr r3, [r4, r3]\n    add r0, sp, #8\n    mov r1, #0x16\n    mov r2, #0x10\n    bl ov74_02235464\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, [r4, #4]\n    add r1, sp, #8\n    mov r2, #5\n    mov r3, #4\n    bl ov74_02235568\n    add sp, #0x5c\n    mov r0, #1\n    pop {r3, r4, pc}\n    ldr r0, _02228F88 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _02228F80\n    add r0, r4, #0\n    add r0, #0x18\n    mov r1, #0\n    bl sub_0200E5D4\n    add r4, #0x18\n    add r0, r4, #0\n    bl RemoveWindow\n    add sp, #0x5c\n    mov r0, #0\n    pop {r3, r4, pc}\n    mov r0, #1\n    add sp, #0x5c\n    pop {r3, r4, pc}\n    nop\n    _02228F88: .word gSystem"
    );
    #endif
}

void ov74_02228F8C(void) {
    /* Original at 0x02228F8C */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x48\n    add r1, #0x28\n    mov r2, #0\n    mov r3, #0xf7\n    bl ov74_02235414\n    mov r3, #0x51\n    lsl r3, r3, #2\n    add r0, r4, #0\n    ldr r3, [r4, r3]\n    add r0, #0x48\n    mov r1, #0x1b\n    mov r2, #4\n    bl ov74_02235464\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x48\n    add r2, r1, #0\n    bl ov74_0223546C\n    mov r0, #0x48\n    str r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x48\n    mov r2, #2\n    mov r3, #0x13\n    bl ov74_02235568\n    add r0, r4, #0\n    add r0, #0x48\n    bl ov74_02235634\n    mov r1, #0x51\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    mov r3, #0xf7\n    add r0, r2, r0\n    str r0, [r4, r1]\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #0x9c\n    add r1, #0x18\n    mov r2, #0\n    bl ov74_02235414\n    mov r3, #0x51\n    lsl r3, r3, #2\n    add r0, r4, #0\n    ldr r3, [r4, r3]\n    add r0, #0x9c\n    mov r1, #0x1e\n    mov r2, #4\n    bl ov74_02235464\n    add r0, r4, #0\n    add r0, #0x9c\n    mov r1, #0\n    mov r2, #1\n    bl ov74_0223546C\n    mov r0, #0xb\n    str r0, [sp]\n    add r1, r4, #0\n    mov r2, #1\n    ldr r0, [r4, #4]\n    add r1, #0x9c\n    add r3, r2, #0\n    bl ov74_02235568\n    add r0, r4, #0\n    add r0, #0x9c\n    bl ov74_02235634\n    mov r1, #0x51\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    add r0, r2, r0\n    str r0, [r4, r1]\n    bl ov74_0223563C\n    bl ov74_02235690\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #0xe\n    mov r2, #0xb\n    mov r3, #0xd\n    bl ov74_02235728\n    mov r0, #1\n    str r0, [sp]\n    ldr r1, _02229080 ; =0x00003170\n    mov r0, #0\n    ldr r1, [r4, r1]\n    mov r2, #0x80\n    mov r3, #0x4c\n    bl ov74_02235930\n    ldr r1, _02229080 ; =0x00003170\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov74_02229084\n    add sp, #8\n    pop {r4, pc}\n    _02229080: .word 0x00003170"
    );
    #endif
}

void ov74_02229084(void) {
    /* Original at 0x02229084 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl MessageFormat_New\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r5, #0\n    add r0, #0xf0\n    add r1, #0x38\n    mov r2, #0\n    mov r3, #0xf7\n    bl ov74_02235414\n    mov r3, #0x51\n    lsl r3, r3, #2\n    add r0, r5, #0\n    ldr r3, [r5, r3]\n    add r0, #0xf0\n    mov r1, #0x1a\n    mov r2, #4\n    bl ov74_02235464\n    add r0, r5, #0\n    add r0, #0xf0\n    mov r1, #0\n    mov r2, #1\n    bl ov74_0223546C\n    mov r0, #0x41\n    lsl r0, r0, #2\n    str r4, [r5, r0]\n    ldr r2, [r5, #0x10]\n    add r0, r4, #0\n    mov r1, #0\n    bl BufferPlayersName\n    ldr r0, [r5, #0x10]\n    bl PlayerProfile_GetTrainerID_VisibleHalf\n    add r2, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r1, #1\n    add r0, r4, #0\n    mov r3, #5\n    str r1, [sp, #4]\n    bl BufferIntegerAsString\n    mov r0, #0x44\n    str r0, [sp]\n    add r1, r5, #0\n    ldr r0, [r5, #4]\n    add r1, #0xf0\n    mov r2, #3\n    mov r3, #0xd\n    bl ov74_02235568\n    add r1, r5, #0\n    mov r0, #0\n    add r1, #0xf8\n    str r0, [r1]\n    mov r1, #1\n    bl GetFontAttribute\n    add r2, r0, #0\n    add r0, r5, #0\n    add r0, #0xf0\n    mov r1, #0\n    bl ov74_02235474\n    mov r2, #0x46\n    str r2, [sp]\n    add r1, r5, #0\n    sub r2, #0x47\n    ldr r0, [r5, #4]\n    add r1, #0xf0\n    add r3, r2, #0\n    bl ov74_02235568\n    add r0, sp, #0x10\n    bl OS_GetMacAddress\n    add r0, sp, #0x10\n    bl ov74_022311F4\n    add r1, sp, #0x1c\n    add r2, sp, #0x18\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    bl ov74_02231238\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x1c]\n    add r0, r4, #0\n    mov r1, #0\n    mov r3, #4\n    bl BufferIntegerAsString\n    mov r0, #2\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    mov r3, #4\n    bl BufferIntegerAsString\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0xfc\n    str r1, [r0]\n    mov r2, #0x47\n    str r2, [sp]\n    ldr r0, [r5, #4]\n    add r5, #0xf0\n    sub r2, #0x48\n    add r1, r5, #0\n    add r3, r2, #0\n    bl ov74_02235568\n    add r0, r4, #0\n    bl MessageFormat_Delete\n    add sp, #0x20\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_02229190(void) {
    /* Original at 0x02229190 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov74_022359BC\n    add r0, r4, #0\n    add r0, #0x18\n    bl WindowIsInUse\n    cmp r0, #1\n    bne _022291D8\n    add r0, r4, #0\n    add r0, #0x18\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #0x18\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x28\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #0x28\n    bl RemoveWindow\n    add r0, r4, #0\n    add r0, #0x38\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #0x38\n    bl RemoveWindow\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #4]\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #4]\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02229200(void) {
    /* Original at 0x02229200 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r3, #2\n    ldr r2, _02229288 ; =0x000034DC\n    mov r1, #0x53\n    lsl r3, r3, #0x10\n    add r5, r0, #0\n    bl ov74_022352D0\n    add r4, r0, #0\n    mov r0, #0x53\n    str r0, [r4]\n    bl BgConfig_Alloc\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    ldr r0, [r0, #8]\n    str r0, [r4, #8]\n    bl Save_PlayerData_GetProfile\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #8]\n    bl Save_Pokedex_Get\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #8]\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [r4, #0x14]\n    ldr r0, [r4]\n    bl ov74_022352A0\n    ldr r0, [r4, #8]\n    bl Save_MysteryGift_Get\n    ldr r1, _0222928C ; =0x00003174\n    mov r2, #0x53\n    str r0, [r4, r1]\n    mov r0, #9\n    lsl r2, r2, #2\n    str r0, [r4, r2]\n    add r0, r2, #0\n    mov r1, #0x28\n    sub r0, #8\n    str r1, [r4, r0]\n    add r1, r2, #0\n    mov r0, #0\n    add r1, #8\n    str r0, [r4, r1]\n    add r1, r2, #0\n    add r1, #0x10\n    str r0, [r4, r1]\n    add r2, #0xc\n    str r0, [r4, r2]\n    mov r2, #0x57\n    mov r1, #0x59\n    lsl r2, r2, #4\n    bl Heap_Create\n    ldr r1, _02229290 ; =0x0000047E\n    mov r0, #9\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _02229288: .word 0x000034DC\n    _0222928C: .word 0x00003174\n    _02229290: .word 0x0000047E"
    );
    #endif
}

void ov74_02229294(void) {
    /* Original at 0x02229294 */
    /* Requires manual decompilation - 175 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r1, #0\n    add r6, r0, #0\n    bl OverlayManager_GetData\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #0xd\n    bhi _022292FA\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022292B4: ; jump table\n    bl ov74_02228D64\n    ldr r0, [r4, #0xc]\n    bl Pokedex_IsEnabled\n    cmp r0, #0\n    bne _022292EC\n    mov r0, #1\n    add r1, r0, #0\n    add r2, r5, #0\n    mov r3, #0xd\n    bl ov74_0223539C\n    b _02229434\n    mov r0, #2\n    str r0, [r5]\n    b _02229434\n    bl ov74_02228F14\n    cmp r0, #0\n    beq _022292FC\n    b _02229434\n    mov r0, #1\n    bl ov74_02235390\n    mov r0, #0\n    mov r1, #0xc\n    add r2, r5, #0\n    mov r3, #0xd\n    bl ov74_0223539C\n    b _02229434\n    bl ov74_02228F8C\n    ldr r0, _02229440 ; =0x00003174\n    ldr r0, [r4, r0]\n    bl SaveMysteryGift_FindAvailable\n    cmp r0, #0\n    bne _0222934C\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x98\n    str r1, [r0]\n    mov r0, #0x16\n    str r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x48\n    mov r2, #2\n    mov r3, #0x13\n    bl ov74_02235568\n    ldr r1, _02229444 ; =0x0000317C\n    add r2, r5, #0\n    str r0, [r4, r1]\n    mov r0, #1\n    mov r1, #3\n    mov r3, #0xd\n    bl ov74_0223539C\n    b _02229434\n    mov r0, #0x53\n    mov r1, #7\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #1\n    mov r1, #4\n    add r2, r5, #0\n    mov r3, #0xd\n    bl ov74_0223539C\n    b _02229434\n    ldr r0, _02229444 ; =0x0000317C\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02229434\n    ldr r0, _02229448 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r1, r0\n    beq _02229434\n    bl ov74_02235390\n    mov r0, #0\n    mov r1, #0xc\n    add r2, r5, #0\n    mov r3, #0xd\n    bl ov74_0223539C\n    b _02229434\n    bl ov74_0222962C\n    mov r1, #0x15\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    cmp r0, #5\n    bne _022293B2\n    mov r0, #1\n    bl ov74_02235390\n    mov r0, #0\n    mov r1, #0xc\n    add r2, r5, #0\n    mov r3, #0xd\n    bl ov74_0223539C\n    b _02229434\n    cmp r0, #4\n    bne _02229434\n    mov r0, #1\n    bl ov74_02235390\n    mov r0, #0\n    mov r1, #0xc\n    add r2, r5, #0\n    mov r3, #0xd\n    bl ov74_0223539C\n    b _02229434\n    bl ov74_02228E98\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r1, #0xc6\n    lsl r1, r1, #6\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0x53\n    bl ov74_0222EC08\n    mov r0, #1\n    mov r1, #6\n    add r2, r5, #0\n    mov r3, #0xd\n    bl ov74_0223539C\n    ldr r1, _0222944C ; =0x000032D2\n    mov r0, #4\n    ldrb r2, [r4, r1]\n    bic r2, r0\n    strb r2, [r4, r1]\n    b _02229434\n    ldr r0, _02229448 ; =gSystem\n    ldr r0, [r0, #0x48]\n    cmp r0, #0\n    beq _02229434\n    mov r0, #0\n    mov r1, #0xb\n    add r2, r5, #0\n    mov r3, #0xd\n    bl ov74_0223539C\n    b _02229434\n    mov r0, #0\n    bl OS_ResetSystem\n    b _02229434\n    add r0, r6, #0\n    bl ov74_02229190\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    add r0, r5, #0\n    bl ov74_022353FC\n    bl ov74_022358BC\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02229440: .word 0x00003174\n    _02229444: .word 0x0000317C\n    _02229448: .word gSystem\n    _0222944C: .word 0x000032D2"
    );
    #endif
}

void ov74_02229450(void) {
    /* Original at 0x02229450 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x59\n    bl Heap_Destroy\n    ldr r0, _02229474 ; =FS_OVERLAY_ID(intro_title)\n    ldr r1, _02229478 ; =gApplication_TitleScreen\n    bl RegisterMainOverlay\n    add r0, r4, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x53\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _02229474: .word FS_OVERLAY_ID(intro_title)\n    _02229478: .word gApplication_TitleScreen"
    );
    #endif
}

void ov74_0222947C(void) {
    /* Original at 0x0222947C */
    /* Requires manual decompilation - 143 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    mov r0, #0xc6\n    lsl r0, r0, #6\n    add r4, r5, r0\n    mov r2, #0xd6\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl MI_CpuFill8\n    ldr r3, [r5]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xf7\n    bl NewMsgDataFromNarc\n    add r6, r0, #0\n    ldr r0, [r5]\n    bl MessageFormat_New\n    mov r1, #0xc6\n    mov r2, #7\n    lsl r1, r1, #6\n    strh r2, [r5, r1]\n    ldr r3, [r5]\n    add r1, r6, #0\n    mov r2, #0x4e\n    str r0, [sp]\n    bl ReadMsgData_ExpandPlaceholders\n    mov r1, #0x41\n    lsl r1, r1, #2\n    add r7, r0, #0\n    add r1, r4, r1\n    mov r2, #0x24\n    bl CopyStringToU16Array\n    add r0, r7, #0\n    bl String_Delete\n    mov r0, #8\n    bl ov74_02235A68\n    add r7, r0, #0\n    mov r0, #7\n    bl ov74_02235A68\n    str r0, [sp, #4]\n    mov r0, #0xc\n    bl ov74_02235A68\n    str r0, [sp, #8]\n    mov r0, #0xa\n    bl ov74_02235A68\n    str r0, [sp, #0xc]\n    mov r0, #0xb\n    bl ov74_02235A68\n    ldr r1, [sp, #0xc]\n    mov r2, #0x53\n    orr r1, r0\n    ldr r0, [sp, #8]\n    lsl r2, r2, #2\n    orr r1, r0\n    ldr r0, [sp, #4]\n    mov r3, #1\n    orr r0, r1\n    orr r0, r7\n    str r0, [r4, r2]\n    mov r1, #1\n    add r0, r2, #4\n    strh r1, [r4, r0]\n    add r0, r2, #6\n    add r1, r0, #0\n    ldrb r1, [r4, r1]\n    bic r1, r3\n    add r3, r0, #0\n    strb r1, [r4, r3]\n    add r1, r0, #0\n    ldrb r1, [r4, r1]\n    mov r3, #2\n    bic r1, r3\n    add r3, r0, #0\n    strb r1, [r4, r3]\n    add r1, r0, #0\n    ldrb r3, [r4, r1]\n    mov r1, #4\n    orr r3, r1\n    add r1, r0, #0\n    strb r3, [r4, r1]\n    ldrb r3, [r4, r1]\n    mov r1, #8\n    orr r3, r1\n    add r1, r0, #0\n    strb r3, [r4, r1]\n    ldrb r2, [r4, r0]\n    mov r1, #0x20\n    bic r2, r1\n    strb r2, [r4, r0]\n    ldr r0, [sp]\n    ldr r3, [r5]\n    add r1, r6, #0\n    mov r2, #0x4d\n    bl ReadMsgData_ExpandPlaceholders\n    mov r1, #0x55\n    lsl r1, r1, #2\n    add r7, r0, #0\n    add r1, r4, r1\n    mov r2, #0xfa\n    bl CopyStringToU16Array\n    add r0, r7, #0\n    bl String_Delete\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    mov r1, #0\n    ldr r3, _022295C0 ; =0x000001EA\n    strb r1, [r4, r0]\n    add r2, r0, #2\n    strh r3, [r4, r2]\n    add r2, r0, #4\n    strh r1, [r4, r2]\n    add r2, r0, #6\n    strh r1, [r4, r2]\n    add r0, #8\n    strb r1, [r4, r0]\n    add r0, sp, #0x10\n    bl GF_RTC_CopyDate\n    add r0, sp, #0x10\n    bl RTC_ConvertDateToDay\n    mov r1, #0xd5\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [sp]\n    bl MessageFormat_Delete\n    add r0, r6, #0\n    bl DestroyMsgData\n    ldr r0, _022295C4 ; =0x00003174\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    mov r2, #3\n    bl SaveMysteryGift_TryInsertGift\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, [r5, #4]\n    add r1, r4, #0\n    bl ov74_02235DC4\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _022295C0: .word 0x000001EA\n    _022295C4: .word 0x00003174"
    );
    #endif
}

void ov74_022295C8(void) {
    /* Original at 0x022295C8 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x16\n    lsl r2, r2, #4\n    str r1, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov74_022295D0(void) {
    /* Original at 0x022295D0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r1, #0x16\n    lsl r1, r1, #4\n    add r4, r3, #0\n    ldr r3, [r0, r1]\n    sub r3, r3, #1\n    str r3, [r0, r1]\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    bne _022295F2\n    bl ov74_02231008\n    mov r0, #0x17\n    str r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r2, #0\n    beq _0222960A\n    bl ov74_02230FD4\n    cmp r0, #0\n    bne _0222960A\n    bl ov74_02231008\n    mov r0, #0x16\n    str r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r4, #0\n    beq _02229622\n    ldr r0, _02229628 ; =gSystem\n    ldr r0, [r0, #0x48]\n    tst r0, r4\n    beq _02229622\n    bl ov74_02231008\n    mov r0, #0x1a\n    str r0, [r5]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02229628: .word gSystem"
    );
    #endif
}

void ov74_0222962C(void) {
    /* Original at 0x0222962C */
    /* Requires manual decompilation - 549 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r5, #0x57\n    lsl r5, r5, #2\n    add r4, r0, #0\n    sub r0, r5, #4\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _02229652\n    bl ov74_02230E7C\n    mov r1, #3\n    sub r0, r1, r0\n    bl sub_0203A930\n    bl ov74_02230D28\n    mov r0, #1\n    bl ov74_022310B8\n    ldr r0, [r4, r5]\n    cmp r0, #0x1e\n    bls _0222965A\n    b _02229B52\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02229666: ; jump table\n    add r0, r4, #0\n    bl ov74_02228D20\n    bl sub_02034D8C\n    mov r0, #0x52\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    str r1, [r4, r5]\n    b _02229B52\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _02229772\n    mov r1, #0x5b\n    lsl r1, r1, #2\n    ldr r0, _022299FC ; =ov74_0223BD5C\n    add r1, r4, r1\n    bl ov74_02230A84\n    mov r0, #0x56\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    bl sub_0203A880\n    mov r0, #2\n    str r0, [r4, r5]\n    b _02229B52\n    bl ov74_02230D6C\n    mov r1, #0x19\n    add r0, r4, #0\n    lsl r1, r1, #6\n    bl ov74_022295C8\n    add r0, r4, #0\n    add r0, #0x28\n    mov r1, #0xa\n    bl WaitingIcon_New\n    ldr r1, _02229A00 ; =0x000034D8\n    str r0, [r4, r1]\n    mov r0, #3\n    str r0, [r4, r5]\n    b _02229B52\n    bl ov74_02230E94\n    cmp r0, #0\n    beq _0222971E\n    sub r1, r0, #1\n    mov r0, #0x59\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r1, _02229A04 ; =0x00000708\n    add r0, r4, #0\n    bl ov74_022295C8\n    mov r0, #4\n    str r0, [r4, r5]\n    add r0, r4, #0\n    add r1, r4, r5\n    mov r2, #0\n    mov r3, #2\n    bl ov74_022295D0\n    b _02229B52\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov74_02230DB8\n    cmp r0, #0\n    beq _02229750\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov74_02230DF4\n    mov r0, #7\n    str r0, [r4, r5]\n    mov r0, #0x16\n    ldr r1, _02229A04 ; =0x00000708\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r4, #0\n    add r1, r4, r5\n    mov r2, #0\n    mov r3, #2\n    bl ov74_022295D0\n    b _02229B52\n    add r0, r4, #0\n    add r1, r4, r5\n    mov r2, #0\n    mov r3, #2\n    bl ov74_022295D0\n    bl ov74_02230FD4\n    cmp r0, #0\n    bne _02229774\n    b _02229B52\n    mov r0, #0x1d\n    str r0, [r4, r5]\n    b _02229B52\n    mov r0, #0x1f\n    str r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x48\n    mov r2, #2\n    mov r3, #0x13\n    bl ov74_02235568\n    ldr r0, _02229A08 ; =0x00003170\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _02229A00 ; =0x000034D8\n    ldr r0, [r4, r0]\n    bl sub_0200F450\n    ldr r0, _02229A00 ; =0x000034D8\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r0, _02229A0C ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    mov r0, #0x16\n    ldr r1, _02229A04 ; =0x00000708\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #0x1e\n    str r0, [r4, r5]\n    b _02229B52\n    ldr r0, _02229A10 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _022297C6\n    mov r0, #8\n    str r0, [r4, r5]\n    add r0, r4, #0\n    add r1, r4, r5\n    mov r2, #1\n    mov r3, #2\n    bl ov74_022295D0\n    b _02229B52\n    bl ov74_02230EB4\n    mov r0, #9\n    str r0, [r4, r5]\n    mov r0, #0x16\n    ldr r1, _02229A04 ; =0x00000708\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r4, #0\n    add r1, r4, r5\n    mov r2, #1\n    mov r3, #2\n    bl ov74_022295D0\n    b _02229B52\n    bl ov74_02230F40\n    cmp r0, #0\n    beq _0222982E\n    bl ov74_02230EE8\n    mov r0, #0xa\n    str r0, [r4, r5]\n    mov r1, #0x32\n    mov r0, #0x16\n    lsl r1, r1, #6\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #0x23\n    str r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x48\n    mov r2, #2\n    mov r3, #0x13\n    bl ov74_02235568\n    ldr r0, _02229A0C ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    ldr r0, _02229A00 ; =0x000034D8\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r1, r4, r5\n    mov r2, #1\n    mov r3, #2\n    bl ov74_022295D0\n    b _02229B52\n    bl ov74_02230F40\n    cmp r0, #0\n    beq _0222986A\n    mov r0, #0x49\n    str r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x48\n    mov r2, #2\n    mov r3, #0x13\n    bl ov74_02235568\n    ldr r0, _02229A08 ; =0x00003170\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov74_02229084\n    mov r0, #0xb\n    str r0, [r4, r5]\n    add r0, r4, #0\n    add r1, r4, r5\n    mov r2, #1\n    mov r3, #2\n    bl ov74_022295D0\n    b _02229B52\n    ldr r0, _02229A14 ; =ov74_0223C1F4\n    mov r1, #0x2a\n    mov r2, #1\n    bl ov74_02230F14\n    mov r0, #0xc\n    str r0, [r4, r5]\n    mov r1, #0x32\n    mov r0, #0x16\n    lsl r1, r1, #6\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    b _02229B52\n    bl ov74_02230F6C\n    cmp r0, #0\n    beq _022298B8\n    mov r0, #0xd\n    str r0, [r4, r5]\n    mov r0, #0x16\n    mov r1, #0x3c\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #0x49\n    str r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x48\n    mov r2, #2\n    mov r3, #0x13\n    bl ov74_02235568\n    add r0, r4, #0\n    add r1, r4, r5\n    mov r2, #1\n    mov r3, #2\n    bl ov74_022295D0\n    b _02229B52\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02229938\n    mov r0, #0x4a\n    str r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x48\n    mov r2, #2\n    mov r3, #0x13\n    bl ov74_02235568\n    add r0, r4, #0\n    add r0, #0x28\n    mov r1, #0xa\n    bl WaitingIcon_New\n    ldr r1, _02229A00 ; =0x000034D8\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov74_0222947C\n    ldr r0, [r4, #8]\n    bl ov74_022360A0\n    mov r0, #0xe\n    str r0, [r4, r5]\n    b _02229B52\n    bl ov74_022360B0\n    cmp r0, #1\n    bne _02229938\n    mov r0, #0xf\n    str r0, [r4, r5]\n    bl OS_GetTickLo\n    mov r1, #0x36\n    bl _s32_div_f\n    mov r0, #0x16\n    add r1, r1, #6\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    b _02229B52\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222993A\n    b _02229B52\n    mov r0, #0x10\n    str r0, [r4, r5]\n    b _02229B52\n    ldr r0, _02229A14 ; =ov74_0223C1F4\n    mov r1, #0x2a\n    mov r2, #2\n    bl ov74_02230F14\n    mov r0, #0x11\n    str r0, [r4, r5]\n    mov r1, #0x4b\n    mov r0, #0x16\n    lsl r1, r1, #4\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    b _02229B52\n    bl ov74_02230F98\n    cmp r0, #0\n    beq _02229976\n    bl ov74_02236128\n    mov r0, #0x12\n    str r0, [r4, r5]\n    mov r1, #0x32\n    mov r0, #0x16\n    lsl r1, r1, #4\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    b _02229B52\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02229996\n    bl ov74_02231008\n    mov r0, #0x17\n    mov r1, #0x78\n    str r0, [r4, r5]\n    add r0, r1, #0\n    add r0, #0xe8\n    str r1, [r4, r0]\n    bl ov74_02230FD4\n    cmp r0, #0\n    bne _02229A48\n    bl ov74_02231008\n    mov r0, #0x16\n    mov r1, #0x78\n    str r0, [r4, r5]\n    add r0, r1, #0\n    add r0, #0xe8\n    str r1, [r4, r0]\n    b _02229B52\n    bl ov74_0223615C\n    cmp r0, #3\n    bne _022299CA\n    bl ov74_02231008\n    mov r0, #0x16\n    mov r1, #0x78\n    str r0, [r4, r5]\n    add r0, r1, #0\n    add r0, #0xe8\n    str r1, [r4, r0]\n    b _02229A18\n    bl ov74_0223615C\n    cmp r0, #2\n    beq _022299D8\n    bl ov74_022360B0\n    b _02229A18\n    bl ov74_02230F6C\n    cmp r0, #0\n    bne _022299E8\n    bl ov74_02230FD4\n    cmp r0, #0\n    bne _02229A18\n    mov r0, #0x13\n    str r0, [r4, r5]\n    mov r0, #0x16\n    mov r1, #1\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    bl ov74_02231008\n    b _02229B52\n    nop\n    _022299FC: .word ov74_0223BD5C\n    _02229A00: .word 0x000034D8\n    _02229A04: .word 0x00000708\n    _02229A08: .word 0x00003170\n    _02229A0C: .word SEQ_SE_DP_SELECT\n    _02229A10: .word gSystem\n    _02229A14: .word ov74_0223C1F4\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02229A38\n    bl ov74_02231008\n    mov r0, #0x17\n    str r0, [r4, r5]\n    mov r0, #0x16\n    mov r1, #0xa\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02229A4A\n    b _02229B52\n    mov r0, #0x14\n    str r0, [r4, r5]\n    mov r0, #0x4b\n    str r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x48\n    mov r2, #2\n    mov r3, #0x13\n    bl ov74_02235568\n    ldr r0, _02229B58 ; =0x00003170\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _02229B5C ; =0x000034D8\n    ldr r0, [r4, r0]\n    bl sub_0200F450\n    ldr r0, _02229B60 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    ldr r0, _02229B5C ; =0x000034D8\n    mov r1, #0\n    str r1, [r4, r0]\n    b _02229B52\n    bl ov74_02231048\n    cmp r0, #0\n    beq _02229B52\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _02229AA2\n    bl sub_02034DE0\n    bl sub_0203A914\n    mov r0, #0x52\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, _02229B64 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _02229B52\n    mov r0, #0x1b\n    str r0, [r4, r5]\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    mov r0, #0x17\n    str r0, [r4, r5]\n    mov r0, #0x4c\n    str r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x48\n    mov r2, #2\n    mov r3, #0x13\n    bl ov74_02235568\n    ldr r0, _02229B58 ; =0x00003170\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _02229B5C ; =0x000034D8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02229AE0\n    bl sub_0200F450\n    ldr r0, _02229B5C ; =0x000034D8\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #0x1c\n    str r0, [r4, r5]\n    b _02229B52\n    bl ov74_02231048\n    cmp r0, #0\n    beq _02229B52\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _02229B0E\n    bl sub_02034DE0\n    bl sub_0203A914\n    mov r0, #0x52\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, _02229B64 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _02229B52\n    mov r0, #0\n    bl OS_ResetSystem\n    b _02229B52\n    bl ov74_02231048\n    cmp r0, #0\n    beq _02229B52\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _02229B52\n    bl sub_02034DE0\n    bl sub_0203A914\n    mov r0, #0x52\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r0, _02229B5C ; =0x000034D8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02229B4E\n    bl sub_0200F450\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02229B58: .word 0x00003170\n    _02229B5C: .word 0x000034D8\n    _02229B60: .word SEQ_SE_DP_SELECT\n    _02229B64: .word gSystem"
    );
    #endif
}

void ov74_02229B68(void) {
    /* Original at 0x02229B68 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02229BB8 ; =ov74_0223D0A4\n    add r4, r0, #0\n    ldr r1, [r1]\n    cmp r1, #0\n    bne _02229BB4\n    bl ov74_02229E14\n    mov r1, #0xf5\n    mov r0, #0xf\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    ldr r1, _02229BB8 ; =ov74_0223D0A4\n    mov r2, #0xf5\n    str r0, [r1]\n    mov r1, #0\n    lsl r2, r2, #2\n    bl MI_CpuFill8\n    ldr r0, _02229BB8 ; =ov74_0223D0A4\n    mov r1, #0x32\n    ldr r0, [r0]\n    mov r2, #0xa\n    strh r1, [r0, #0x24]\n    ldr r0, _02229BBC ; =ov74_02229CB8\n    mov r1, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _02229BB8 ; =ov74_0223D0A4\n    ldr r2, [r1]\n    str r0, [r2, #0x1c]\n    ldr r0, [r1]\n    str r4, [r0]\n    ldr r0, [r1]\n    add r0, r0, #4\n    bl sub_0203778C\n    pop {r4, pc}\n    nop\n    _02229BB8: .word ov74_0223D0A4\n    _02229BBC: .word ov74_02229CB8"
    );
    #endif
}

void ov74_02229BC0(void) {
    /* Original at 0x02229BC0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _02229BCC ; =ov74_0223D0A4\n    ldr r3, [r2]\n    str r0, [r3, #0x20]\n    ldr r0, [r2]\n    strh r1, [r0, #0x24]\n    bx lr\n    _02229BCC: .word ov74_0223D0A4"
    );
    #endif
}

void ov74_02229BD0(void) {
    /* Original at 0x02229BD0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02229BFE\n    mov r4, #0\n    ldr r1, _02229C00 ; =ov74_0223D0A4\n    ldr r0, _02229C04 ; =0x000003C1\n    add r3, r4, #0\n    ldr r2, [r1]\n    add r2, r2, r4\n    add r4, r4, #1\n    strb r3, [r2, r0]\n    cmp r4, #0x10\n    blt _02229BE6\n    bl sub_02034434\n    ldr r0, _02229C08 ; =ov74_02229C0C\n    mov r1, #0\n    bl ov74_02229BC0\n    pop {r4, pc}\n    _02229C00: .word ov74_0223D0A4\n    _02229C04: .word 0x000003C1\n    _02229C08: .word ov74_02229C0C"
    );
    #endif
}

void ov74_02229C0C(void) {
    /* Original at 0x02229C0C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #0\n    ldr r6, _02229C40 ; =ov74_0223D0A4\n    add r5, r4, #0\n    ldr r0, [r6]\n    add r0, r0, r5\n    ldr r0, [r0, #0x28]\n    cmp r0, #0\n    bne _02229C36\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #1\n    bne _02229C36\n    add r0, r4, #0\n    bl sub_02034818\n    ldr r1, [r6]\n    add r1, r1, r5\n    str r0, [r1, #0x28]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x10\n    blt _02229C14\n    pop {r4, r5, r6, pc}\n    _02229C40: .word ov74_0223D0A4"
    );
    #endif
}

void ov74_02229C44(void) {
    /* Original at 0x02229C44 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _02229C56\n    ldr r0, _02229C58 ; =ov74_02229C5C\n    mov r1, #0\n    bl ov74_02229BC0\n    pop {r3, pc}\n    _02229C58: .word ov74_02229C5C"
    );
    #endif
}

void ov74_02229C5C(void) {
    /* Original at 0x02229C5C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov74_02229C60(void) {
    /* Original at 0x02229C60 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02229C78 ; =ov74_0223D0A4\n    ldr r0, [r0]\n    add r0, #0x27\n    ldrb r0, [r0]\n    bl sub_02037E1C\n    ldr r0, _02229C7C ; =ov74_02229C80\n    mov r1, #0\n    bl ov74_02229BC0\n    pop {r3, pc}\n    _02229C78: .word ov74_0223D0A4\n    _02229C7C: .word ov74_02229C80"
    );
    #endif
}

void ov74_02229C80(void) {
    /* Original at 0x02229C80 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037EC8\n    cmp r0, #0\n    beq _02229CA8\n    ldr r0, _02229CAC ; =ov74_0223D0A4\n    mov r2, #0\n    ldr r1, [r0]\n    mov r0, #0xf\n    lsl r0, r0, #6\n    strb r2, [r1, r0]\n    bl sub_02034434\n    mov r0, #0xab\n    bl sub_02037AC0\n    ldr r0, _02229CB0 ; =ov74_02229CB4\n    mov r1, #0\n    bl ov74_02229BC0\n    pop {r3, pc}\n    nop\n    _02229CAC: .word ov74_0223D0A4\n    _02229CB0: .word ov74_02229CB4"
    );
    #endif
}

void ov74_02229CB4(void) {
    /* Original at 0x02229CB4 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov74_02229CB8(void) {
    /* Original at 0x02229CB8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02229CDC ; =ov74_0223D0A4\n    ldr r2, [r1]\n    cmp r2, #0\n    bne _02229CC8\n    bl SysTask_Destroy\n    pop {r3, pc}\n    ldr r1, [r2, #0x20]\n    cmp r1, #0\n    beq _02229CD8\n    add r2, #0x26\n    ldrb r0, [r2]\n    cmp r0, #0\n    bne _02229CD8\n    blx r1\n    pop {r3, pc}\n    nop\n    _02229CDC: .word ov74_0223D0A4"
    );
    #endif
}

void ov74_02229CE0(void) {
    /* Original at 0x02229CE0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_02037474\n    cmp r0, #0\n    bne _02229D06\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_02038114\n    add r0, r5, #0\n    bl ov74_02229B68\n    ldr r0, _02229D08 ; =ov74_02229BD0\n    mov r1, #0\n    bl ov74_02229BC0\n    pop {r4, r5, r6, pc}\n    _02229D08: .word ov74_02229BD0"
    );
    #endif
}

void ov74_02229D0C(void) {
    /* Original at 0x02229D0C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    add r2, r1, #0\n    add r1, r3, #0\n    ldr r3, _02229D18 ; =sub_02037088\n    mov r0, #0x16\n    bx r3\n    _02229D18: .word sub_02037088"
    );
    #endif
}

void ov74_02229D1C(void) {
    /* Original at 0x02229D1C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02037474\n    cmp r0, #0\n    bne _02229D48\n    bl ov74_0222CD7C\n    bl OverlayManager_GetArgs\n    ldr r0, [r0, #8]\n    add r1, r4, #0\n    bl sub_02038148\n    add r0, r5, #0\n    bl ov74_02229B68\n    ldr r0, _02229D4C ; =ov74_02229C44\n    mov r1, #0\n    bl ov74_02229BC0\n    pop {r3, r4, r5, pc}\n    nop\n    _02229D4C: .word ov74_02229C44"
    );
    #endif
}

void ov74_02229D50(void) {
    /* Original at 0x02229D50 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02229D60 ; =ov74_0223D0A4\n    ldr r3, _02229D64 ; =ov74_02229BC0\n    ldr r1, [r1]\n    add r1, #0x27\n    strb r0, [r1]\n    ldr r0, _02229D68 ; =ov74_02229C60\n    mov r1, #0\n    bx r3\n    _02229D60: .word ov74_0223D0A4\n    _02229D64: .word ov74_02229BC0\n    _02229D68: .word ov74_02229C60"
    );
    #endif
}

void ov74_02229D6C(void) {
    /* Original at 0x02229D6C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    add r0, r4, #0\n    bl sub_020358D0\n    add r1, r0, #0\n    beq _02229D92\n    add r0, #0x4c\n    ldrh r0, [r0]\n    cmp r0, #0\n    beq _02229D92\n    add r5, #0x8c\n    add r0, r5, #0\n    mov r2, #0x50\n    bl memcpy\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    cmp r4, #0x10\n    blt _02229D72\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_02229DA0(void) {
    /* Original at 0x02229DA0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02229DB8 ; =ov74_0223D0A4\n    ldr r2, [r1]\n    add r1, r2, #0\n    add r1, #0x27\n    ldrb r1, [r1]\n    cmp r1, r0\n    bne _02229DB6\n    mov r0, #0xf\n    mov r1, #1\n    lsl r0, r0, #6\n    strb r1, [r2, r0]\n    bx lr\n    _02229DB8: .word ov74_0223D0A4"
    );
    #endif
}

void ov74_02229DBC(void) {
    /* Original at 0x02229DBC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02229DC8 ; =ov74_0223D0A4\n    ldr r1, [r0]\n    mov r0, #0xf\n    lsl r0, r0, #6\n    ldrb r0, [r1, r0]\n    bx lr\n    _02229DC8: .word ov74_0223D0A4"
    );
    #endif
}

void ov74_02229DCC(void) {
    r0 = r0 << 2;
}

void ov74_02229DD4(void) {
    /* Original at 0x02229DD4 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02229DDC ; =ov74_0223D0A4\n    ldr r0, [r0]\n    add r0, #0x68\n    bx lr\n    _02229DDC: .word ov74_0223D0A4"
    );
    #endif
}

void ov74_02229DE0(void) {
    /* Original at 0x02229DE0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02229DF0 ; =ov74_0223D0A4\n    mov r2, #1\n    ldr r1, [r1]\n    add r1, r1, r0\n    ldr r0, _02229DF4 ; =0x000003C1\n    strb r2, [r1, r0]\n    bx lr\n    nop\n    _02229DF0: .word ov74_0223D0A4\n    _02229DF4: .word 0x000003C1"
    );
    #endif
}

void ov74_02229DF8(void) {
    /* Original at 0x02229DF8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02229E10 ; =ov74_0223D0A4\n    mov r0, #0xf\n    ldr r1, [r1]\n    bl Heap_FreeExplicit\n    ldr r0, _02229E10 ; =ov74_0223D0A4\n    mov r1, #0\n    str r1, [r0]\n    bl sub_02037E9C\n    pop {r3, pc}\n    _02229E10: .word ov74_0223D0A4"
    );
    #endif
}

void ov74_02229E14(void) {
    /* Original at 0x02229E14 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02229E20 ; =sub_0203410C\n    add r2, r0, #0\n    ldr r0, _02229E24 ; =_0223B368\n    mov r1, #2\n    bx r3\n    nop\n    _02229E20: .word sub_0203410C\n    _02229E24: .word _0223B368"
    );
    #endif
}

void ov74_02229E28(void) {
    /* Original at 0x02229E28 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #1\n    ldr r0, _02229E5C ; =0x000029F0\n    bne _02229E48\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02229E58\n    add r0, r4, #0\n    add r0, #0x18\n    mov r1, #1\n    bl WaitingIcon_New\n    ldr r1, _02229E5C ; =0x000029F0\n    str r0, [r4, r1]\n    pop {r4, pc}\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02229E52\n    bl sub_0200F478\n    ldr r0, _02229E5C ; =0x000029F0\n    mov r1, #0\n    str r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _02229E5C: .word 0x000029F0"
    );
    #endif
}

void ov74_02229E60(void) {
    ov74_02229E28();
}

void ov74_02229E68(void) {
    /* Original at 0x02229E68 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl OverlayManager_GetData\n    add r7, r0, #0\n    bl ov74_022359BC\n    ldr r0, [r7, #0x7c]\n    cmp r0, #0\n    beq _02229E7E\n    bl ListMenuItems_Delete\n    ldr r0, [r7, #0x78]\n    cmp r0, #0\n    beq _02229E8C\n    mov r1, #0\n    add r2, r1, #0\n    bl DestroyListMenu\n    add r0, r7, #0\n    add r0, #0x18\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r7, #0\n    add r0, #0x18\n    bl RemoveWindow\n    add r0, r7, #0\n    add r0, #0x58\n    bl WindowIsInUse\n    cmp r0, #0\n    beq _02229EB8\n    add r0, r7, #0\n    add r0, #0x58\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r7, #0\n    add r0, #0x58\n    bl RemoveWindow\n    add r5, r7, #0\n    mov r6, #0\n    add r4, r7, #0\n    add r5, #0x28\n    ldr r0, [r4, #0x28]\n    cmp r0, #0\n    beq _02229ED2\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r5, #0\n    bl RemoveWindow\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, #0x10\n    cmp r6, #3\n    blt _02229EC0\n    ldr r0, [r7]\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    ldr r0, [r7]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r7]\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    ldr r0, [r7]\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    ldr r0, [r7]\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_02229F04(void) {
    /* Original at 0x02229F04 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #8\n    bl ov74_0223563C\n    bl ov74_02235690\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #0xe\n    mov r2, #0xb\n    mov r3, #0xd\n    bl ov74_02235728\n    add sp, #8\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02229F28(void) {
    /* Original at 0x02229F28 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _02229F4E\n    str r1, [sp]\n    ldr r1, _02229F5C ; =0x000005C4\n    mov r0, #0\n    ldr r1, [r4, r1]\n    mov r2, #0x80\n    mov r3, #0x64\n    bl ov74_02235930\n    ldr r1, _02229F5C ; =0x000005C4\n    add sp, #4\n    str r0, [r4, r1]\n    pop {r3, r4, pc}\n    ldr r0, _02229F5C ; =0x000005C4\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add sp, #4\n    pop {r3, r4, pc}\n    _02229F5C: .word 0x000005C4"
    );
    #endif
}

void ov74_02229F60(void) {
    /* Original at 0x02229F60 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl WindowIsInUse\n    cmp r0, #1\n    bne _02229F76\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0200E5D4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_02229F78(void) {
    /* Original at 0x02229F78 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl WindowIsInUse\n    cmp r0, #1\n    bne _02229F8E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ClearFrameAndWindow2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_02229F90(void) {
    /* Original at 0x02229F90 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, _02229FE8 ; =0x000015D4\n    ldr r0, [r4, r0]\n    cmp r0, #2\n    beq _02229FAE\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x18\n    mov r2, #3\n    bl ov74_0222AA18\n    add r0, r4, #0\n    add r0, #0x48\n    mov r1, #0\n    bl ov74_02229F60\n    ldr r0, _02229FE8 ; =0x000015D4\n    ldr r0, [r4, r0]\n    cmp r0, #2\n    beq _02229FDE\n    add r0, r4, #0\n    mov r1, #0xf\n    bl ov74_02229D1C\n    ldr r1, _02229FEC ; =0x00001C20\n    ldr r0, _02229FF0 ; =0x00000434\n    str r1, [r4, r0]\n    bl sub_0203A880\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_02229E28\n    mov r0, #7\n    pop {r3, r4, r5, pc}\n    mov r0, #0x13\n    add r4, #0x84\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    nop\n    _02229FE8: .word 0x000015D4\n    _02229FEC: .word 0x00001C20\n    _02229FF0: .word 0x00000434"
    );
    #endif
}

void ov74_02229FF4(void) {
    /* Original at 0x02229FF4 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, #0x80\n    ldr r1, [r0]\n    cmp r1, #1\n    bne _0222A00A\n    mov r0, #0x31\n    pop {r3, r4, r5, pc}\n    sub r0, r1, #2\n    cmp r0, #2\n    bhi _0222A014\n    mov r0, #0x31\n    pop {r3, r4, r5, pc}\n    cmp r1, #5\n    bne _0222A01C\n    mov r0, #0x31\n    pop {r3, r4, r5, pc}\n    ldr r0, _0222A070 ; =0x000015D4\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0222A02C\n    ldr r0, _0222A074 ; =0x00000438\n    ldr r0, [r4, r0]\n    bl ov74_02229D50\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x18\n    mov r2, #6\n    bl ov74_0222AA18\n    add r0, r4, #0\n    add r0, #0x48\n    mov r1, #0\n    bl ov74_02229F60\n    ldr r0, _0222A070 ; =0x000015D4\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0222A05A\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229F28\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_02229E28\n    ldr r0, _0222A070 ; =0x000015D4\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0222A06C\n    mov r0, #0xab\n    bl sub_02037AC0\n    mov r0, #9\n    pop {r3, r4, r5, pc}\n    mov r0, #0x15\n    pop {r3, r4, r5, pc}\n    _0222A070: .word 0x000015D4\n    _0222A074: .word 0x00000438"
    );
    #endif
}

void ov74_0222A078(void) {
    /* Original at 0x0222A078 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, _0222A0DC ; =0x000015D4\n    add r5, r4, #0\n    add r6, r4, #0\n    ldr r0, [r4, r0]\n    add r5, #0xdc\n    add r6, #0x8c\n    cmp r0, #1\n    beq _0222A096\n    cmp r0, #3\n    beq _0222A0BC\n    b _0222A0D6\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    bl ov74_02229DD4\n    mov r2, #0xd6\n    add r1, r0, #0\n    add r0, r5, #0\n    lsl r2, r2, #2\n    bl memcpy\n    add r0, r4, #0\n    add r4, #0xdc\n    add r0, #0x8c\n    add r1, r4, #0\n    mov r2, #0x54\n    bl ov74_02235F58\n    b _0222A0D6\n    ldr r7, _0222A0E0 ; =0x000005D4\n    mov r2, #0xd6\n    add r1, r4, r7\n    add r0, r5, #0\n    add r1, #0x50\n    lsl r2, r2, #2\n    bl memcpy\n    add r0, r6, #0\n    add r1, r4, r7\n    mov r2, #0x50\n    bl memcpy\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222A0DC: .word 0x000015D4\n    _0222A0E0: .word 0x000005D4"
    );
    #endif
}

void ov74_0222A0E4(void) {
    /* Original at 0x0222A0E4 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r1, [r0]\n    cmp r1, #3\n    bgt _0222A0FC\n    cmp r1, #1\n    blt _0222A12C\n    beq _0222A10E\n    cmp r1, #2\n    beq _0222A10E\n    cmp r1, #3\n    beq _0222A104\n    b _0222A12C\n    cmp r1, #0xd\n    bne _0222A12C\n    mov r0, #1\n    pop {r3, pc}\n    ldr r0, [r0, #8]\n    cmp r0, #1\n    bne _0222A12C\n    mov r0, #1\n    pop {r3, pc}\n    add r0, #8\n    mov r1, #0x98\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #3\n    blt _0222A120\n    cmp r0, #0xe\n    ble _0222A128\n    cmp r0, #0x41\n    blt _0222A12C\n    cmp r0, #0x47\n    bgt _0222A12C\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov74_0222A130(void) {
    /* Original at 0x0222A130 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222A168 ; =0x000029EC\n    ldr r1, [r4, r0]\n    cmp r1, #1\n    bne _0222A142\n    mov r1, #0\n    sub r0, r0, #4\n    str r1, [r4, r0]\n    bl ov74_022360B0\n    sub r0, r0, #2\n    cmp r0, #1\n    bhi _0222A164\n    add r0, r4, #0\n    add r0, #0xdc\n    bl ov74_0222A0E4\n    cmp r0, #1\n    beq _0222A15E\n    ldr r0, _0222A16C ; =SEQ_SE_DP_SAVE\n    bl PlaySE\n    ldr r0, _0222A170 ; =0x000029E8\n    mov r1, #0\n    str r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0222A168: .word 0x000029EC\n    _0222A16C: .word SEQ_SE_DP_SAVE\n    _0222A170: .word 0x000029E8"
    );
    #endif
}

void ov74_0222A174(void) {
    /* Original at 0x0222A174 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r5, r0, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r4, #0x8c\n    add r5, #0xdc\n    bl OverlayManager_GetArgs\n    ldr r0, [r0, #8]\n    str r0, [sp]\n    add r0, r4, #0\n    add r0, #0x4e\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    bne _0222A1A2\n    mov r6, #0\n    b _0222A1CE\n    mov r1, #0x35\n    add r2, r4, #0\n    mov r0, #0\n    lsl r1, r1, #4\n    strb r0, [r5, r1]\n    add r2, #0x4e\n    ldrb r2, [r2]\n    mov r6, #1\n    lsl r2, r2, #0x1b\n    lsr r2, r2, #0x1f\n    bne _0222A1BC\n    sub r1, #8\n    strb r0, [r5, r1]\n    add r0, sp, #8\n    bl GF_RTC_CopyDate\n    add r0, sp, #8\n    bl RTC_ConvertDateToDay\n    mov r1, #0xd5\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [sp]\n    bl Save_MysteryGift_Get\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrh r1, [r1]\n    add r7, r0, #0\n    bl SaveMysteryGift_ReceivedFlagSet\n    add r4, #0x4e\n    ldrb r0, [r4]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0222A204\n    ldrh r0, [r5]\n    cmp r0, #3\n    bne _0222A204\n    ldr r1, [r5, #4]\n    ldr r0, _0222A234 ; =0x00000215\n    cmp r1, r0\n    bne _0222A204\n    add r0, r7, #0\n    add r1, r5, #0\n    bl SaveMysteryGift_TrySetSpecialCard\n    b _0222A21C\n    cmp r6, #0\n    bne _0222A214\n    add r0, r7, #0\n    add r1, r5, #0\n    mov r2, #3\n    bl SaveMysteryGift_TryInsertGift\n    b _0222A21C\n    add r0, r7, #0\n    add r1, r5, #0\n    bl SaveMysteryGift_TryInsertCard\n    ldr r0, [sp]\n    bl ov74_022360A0\n    ldr r1, _0222A238 ; =0x000029EC\n    ldr r0, [sp, #4]\n    mov r2, #0\n    str r2, [r0, r1]\n    ldr r2, _0222A23C ; =ov74_0222A130\n    sub r1, r1, #4\n    str r2, [r0, r1]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222A234: .word 0x00000215\n    _0222A238: .word 0x000029EC\n    _0222A23C: .word ov74_0222A130"
    );
    #endif
}

void ov74_0222A240(void) {
    /* Original at 0x0222A240 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    cmp r4, #0\n    bne _0222A254\n    mov r5, #4\n    b _0222A258\n    mov r5, #0\n    mvn r5, r5\n    ldr r1, [r0, #0x48]\n    add r4, r0, #0\n    add r4, #0x48\n    cmp r1, #0\n    bne _0222A282\n    mov r1, #0xa\n    str r1, [sp]\n    mov r1, #6\n    str r1, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    mov r2, #0\n    mov r1, #0x6b\n    str r2, [sp, #0xc]\n    lsl r1, r1, #2\n    str r1, [sp, #0x10]\n    ldr r0, [r0]\n    add r1, r4, #0\n    mov r3, #0x17\n    bl AddWindowParameterized\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x1f\n    mov r3, #3\n    bl DrawFrameAndWindow1\n    ldr r1, _0222A2A0 ; =ov74_0223C260\n    add r0, r6, #0\n    mov r2, #2\n    add r3, r4, #0\n    str r5, [sp]\n    bl ov74_0222A89C\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _0222A2A0: .word ov74_0223C260"
    );
    #endif
}

void ov74_0222A2A4(void) {
    /* Original at 0x0222A2A4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, #0x48\n    mov r1, #0\n    bl ov74_02229F60\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ov74_02229F60\n    ldr r0, _0222A2DC ; =0x000015D4\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0222A2D0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    bl sub_0203A914\n    add r0, r5, #0\n    bl ov74_0222A5CC\n    pop {r3, r4, r5, pc}\n    _0222A2DC: .word 0x000015D4"
    );
    #endif
}

void ov74_0222A2E0(void) {
    /* Original at 0x0222A2E0 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    bl OverlayManager_GetData\n    add r5, r0, #0\n    bl ov74_02235230\n    cmp r0, #0\n    beq _0222A2F8\n    mov r1, #2\n    b _0222A2FA\n    mov r1, #1\n    ldr r0, _0222A354 ; =0x000015D4\n    str r1, [r5, r0]\n    add r0, r5, #0\n    add r0, #0x38\n    mov r1, #0\n    bl ov74_02229F60\n    add r4, r5, #0\n    ldr r0, [r5, #0x48]\n    add r4, #0x48\n    cmp r0, #0\n    bne _0222A332\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r2, #0\n    mov r0, #0x6b\n    str r2, [sp, #0xc]\n    lsl r0, r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r3, #0x17\n    bl AddWindowParameterized\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x1f\n    mov r3, #3\n    bl DrawFrameAndWindow1\n    mov r2, #2\n    ldr r1, _0222A358 ; =ov74_0223C250\n    add r0, r6, #0\n    add r3, r4, #0\n    str r2, [sp]\n    bl ov74_0222A89C\n    mov r0, #5\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0222A354: .word 0x000015D4\n    _0222A358: .word ov74_0223C250"
    );
    #endif
}

void ov74_0222A35C(void) {
    /* Original at 0x0222A35C */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, _0222A3C4 ; =0x000015D4\n    mov r1, #4\n    str r1, [r4, r0]\n    add r0, r4, #0\n    add r0, #0x38\n    mov r1, #0\n    bl ov74_02229F60\n    add r5, r4, #0\n    ldr r0, [r4, #0x48]\n    add r5, #0x48\n    cmp r0, #0\n    bne _0222A3A2\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r2, #0\n    mov r0, #0x6b\n    str r2, [sp, #0xc]\n    lsl r0, r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, r5, #0\n    mov r3, #0x17\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0x1f\n    mov r3, #3\n    bl DrawFrameAndWindow1\n    mov r0, #0x50\n    str r0, [sp]\n    ldr r1, _0222A3C8 ; =ov74_0223C220\n    add r0, r6, #0\n    mov r2, #2\n    add r3, r5, #0\n    bl ov74_0222A89C\n    mov r0, #5\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _0222A3C4: .word 0x000015D4\n    _0222A3C8: .word ov74_0223C220"
    );
    #endif
}

void ov74_0222A3CC(void) {
    /* Original at 0x0222A3CC */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, _0222A434 ; =0x000015D4\n    mov r1, #3\n    str r1, [r4, r0]\n    add r0, r4, #0\n    add r0, #0x38\n    mov r1, #0\n    bl ov74_02229F60\n    add r5, r4, #0\n    ldr r0, [r4, #0x48]\n    add r5, #0x48\n    cmp r0, #0\n    bne _0222A412\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r2, #0\n    mov r0, #0x6b\n    str r2, [sp, #0xc]\n    lsl r0, r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, r5, #0\n    mov r3, #0x17\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0x1f\n    mov r3, #3\n    bl DrawFrameAndWindow1\n    mov r0, #0x4f\n    str r0, [sp]\n    ldr r1, _0222A438 ; =ov74_0223C230\n    add r0, r6, #0\n    mov r2, #2\n    add r3, r5, #0\n    bl ov74_0222A89C\n    mov r0, #5\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _0222A434: .word 0x000015D4\n    _0222A438: .word ov74_0223C230"
    );
    #endif
}

void ov74_0222A43C(void) {
    /* Original at 0x0222A43C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r1, [r0, #0x48]\n    add r4, #0x48\n    cmp r1, #0\n    bne _0222A470\n    mov r1, #0xa\n    str r1, [sp]\n    mov r1, #6\n    str r1, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    mov r2, #0\n    mov r1, #0x6b\n    str r2, [sp, #0xc]\n    lsl r1, r1, #2\n    str r1, [sp, #0x10]\n    ldr r0, [r0]\n    add r1, r4, #0\n    mov r3, #0x17\n    bl AddWindowParameterized\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x1f\n    mov r3, #3\n    bl DrawFrameAndWindow1\n    mov r0, #4\n    str r0, [sp]\n    ldr r1, _0222A490 ; =ov74_0223C240\n    add r0, r5, #0\n    mov r2, #2\n    add r3, r4, #0\n    bl ov74_0222A89C\n    add sp, #0x14\n    pop {r4, r5, pc}\n    _0222A490: .word ov74_0223C240"
    );
    #endif
}

void ov74_0222A494(void) {
    /* Original at 0x0222A494 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, #0x48\n    mov r1, #0\n    bl ov74_02229F60\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ov74_02229F60\n    bl sub_0203A914\n    ldr r0, _0222A4C8 ; =0x000015D4\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0222A4C0\n    bl ov74_02229DF8\n    add r0, r5, #0\n    bl ov74_0222A5CC\n    pop {r3, r4, r5, pc}\n    _0222A4C8: .word 0x000015D4"
    );
    #endif
}

void ov74_0222A4CC(void) {
    /* Original at 0x0222A4CC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x18\n    mov r2, #3\n    bl ov74_0222AA18\n    add r0, r4, #0\n    add r0, #0x48\n    mov r1, #0\n    bl ov74_02229F60\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_02229E28\n    ldr r0, _0222A500 ; =ov74_0223D0A8\n    mov r1, #0x25\n    str r1, [r0, #0x10]\n    mov r0, #0x20\n    pop {r3, r4, r5, pc}\n    nop\n    _0222A500: .word ov74_0223D0A8"
    );
    #endif
}

void ov74_0222A504(void) {
    /* Original at 0x0222A504 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    sub r0, r0, #2\n    cmp r0, #2\n    bhi _0222A51C\n    mov r0, #0x31\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    add r0, #0x48\n    mov r1, #0\n    bl ov74_02229F60\n    add r4, #0x18\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #7\n    bl ov74_0222AA18\n    mov r0, #0x21\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_0222A538(void) {
    /* Original at 0x0222A538 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0222A55C ; =ov74_0223D0A8\n    ldr r0, [r0, #0x10]\n    cmp r0, #0x28\n    beq _0222A54A\n    cmp r0, #0x29\n    beq _0222A54A\n    cmp r0, #0x30\n    bne _0222A558\n    bl ov74_022365FC\n    cmp r0, #0\n    beq _0222A558\n    ldr r0, _0222A55C ; =ov74_0223D0A8\n    mov r1, #0x2b\n    str r1, [r0, #0x10]\n    mov r0, #0x24\n    pop {r3, pc}\n    _0222A55C: .word ov74_0223D0A8"
    );
    #endif
}

void ov74_0222A560(void) {
    /* Original at 0x0222A560 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x18\n    mov r2, #3\n    bl ov74_0222AA18\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_02229E28\n    add r0, r4, #0\n    add r0, #0x48\n    mov r1, #0\n    bl ov74_02229F60\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_02229E28\n    mov r1, #1\n    ldr r0, _0222A5A4 ; =0x000015E0\n    lsl r1, r1, #0xc\n    str r1, [r4, r0]\n    ldr r0, _0222A5A8 ; =0x0000267C\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #0x1b\n    pop {r3, r4, r5, pc}\n    nop\n    _0222A5A4: .word 0x000015E0\n    _0222A5A8: .word 0x0000267C"
    );
    #endif
}

u32 ov74_0222A5AC(void) {
    OverlayManager_GetData();
    ov74_02229F60(0);
    ov74_0222A94C(r4, 0xc4, 0);
    return 3;
}

void ov74_0222A5CC(void) {
    /* Original at 0x0222A5CC */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    bl OverlayManager_GetData\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    bl Save_MysteryGift_Get\n    ldr r0, _0222A648 ; =0x000005C8\n    ldr r1, [r5, r0]\n    cmp r1, #0x1e\n    bne _0222A5F2\n    mov r1, #1\n    add r0, r0, #4\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov74_0222CE10\n    add r0, r5, #0\n    add r0, #0x28\n    mov r1, #0\n    bl ov74_02229F60\n    add r4, r5, #0\n    ldr r0, [r5, #0x38]\n    add r4, #0x38\n    cmp r0, #0\n    bne _0222A626\n    mov r0, #9\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    mov r2, #0\n    mov r0, #0x49\n    str r2, [sp, #0xc]\n    lsl r0, r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r3, #0xf\n    bl AddWindowParameterized\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x1f\n    mov r3, #3\n    bl DrawFrameAndWindow1\n    mov r0, #1\n    str r0, [sp]\n    ldr r1, _0222A64C ; =ov74_0223C2B0\n    add r0, r6, #0\n    mov r2, #4\n    add r3, r4, #0\n    bl ov74_0222A89C\n    mov r0, #4\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _0222A648: .word 0x000005C8\n    _0222A64C: .word ov74_0223C2B0"
    );
    #endif
}

void ov74_0222A650(void) {
    /* Original at 0x0222A650 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OverlayManager_GetData\n    ldr r1, _0222A680 ; =0x000005C8\n    add r4, r0, #0\n    ldr r2, [r4, r1]\n    cmp r2, #0x1e\n    bne _0222A66A\n    mov r2, #1\n    add r1, r1, #4\n    str r2, [r4, r1]\n    bl ov74_0222CE10\n    ldr r2, _0222A684 ; =0x000015D8\n    mov r0, #0\n    ldr r2, [r4, r2]\n    mov r1, #0x36\n    mov r3, #2\n    bl ov74_0223539C\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}\n    nop\n    _0222A680: .word 0x000005C8\n    _0222A684: .word 0x000015D8"
    );
    #endif
}

void ov74_0222A688(void) {
    /* Original at 0x0222A688 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OverlayManager_GetData\n    ldr r1, _0222A6B8 ; =0x000005C8\n    add r4, r0, #0\n    ldr r2, [r4, r1]\n    cmp r2, #0x1e\n    bne _0222A6A2\n    mov r2, #1\n    add r1, r1, #4\n    str r2, [r4, r1]\n    bl ov74_0222CE10\n    ldr r2, _0222A6BC ; =0x000015D8\n    mov r0, #0\n    ldr r2, [r4, r2]\n    mov r1, #0x37\n    mov r3, #2\n    bl ov74_0223539C\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}\n    nop\n    _0222A6B8: .word 0x000005C8\n    _0222A6BC: .word 0x000015D8"
    );
    #endif
}

void ov74_0222A6C0(void) {
    /* Original at 0x0222A6C0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, _0222A6F0 ; =0x000005C8\n    ldr r1, [r4, r0]\n    cmp r1, #0x1e\n    bne _0222A6D6\n    mov r1, #1\n    add r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #1\n    bl ov74_02235390\n    ldr r2, _0222A6F4 ; =0x000015D8\n    mov r0, #0\n    ldr r2, [r4, r2]\n    mov r1, #0x35\n    mov r3, #2\n    bl ov74_0223539C\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}\n    _0222A6F0: .word 0x000005C8\n    _0222A6F4: .word 0x000015D8"
    );
    #endif
}

void ov74_0222A6F8(void) {
    /* Original at 0x0222A6F8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r3, #0\n    ldr r3, _0222A740 ; =_0223B3A0\n    add r7, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    mov ip, r2\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    lsr r1, r6, #0xb\n    str r0, [r2]\n    add r0, sp, #0\n    strb r1, [r0, #0x12]\n    lsr r1, r5, #0xe\n    strb r1, [r0, #0x13]\n    lsl r1, r4, #0x18\n    add r0, r7, #0\n    lsr r1, r1, #0x18\n    mov r2, ip\n    mov r3, #0\n    bl InitBgFromTemplate\n    lsl r1, r4, #0x18\n    add r0, r7, #0\n    lsr r1, r1, #0x18\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _0222A740: .word _0223B3A0"
    );
    #endif
}

void ov74_0222A744(void) {
    /* Original at 0x0222A744 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    ldr r5, _0222A79C ; =_0223B390\n    add r3, sp, #0\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    mov r1, #0\n    mov r2, #0xf\n    add r0, r4, #0\n    lsl r2, r2, #0xc\n    add r3, r1, #0\n    bl ov74_0222A6F8\n    mov r1, #1\n    mov r2, #0x3e\n    add r0, r4, #0\n    lsl r2, r2, #0xa\n    lsl r3, r1, #0xf\n    bl ov74_0222A6F8\n    mov r2, #0xe\n    add r0, r4, #0\n    mov r1, #4\n    lsl r2, r2, #0xa\n    mov r3, #0\n    bl ov74_0222A6F8\n    mov r2, #0x1e\n    mov r3, #1\n    add r0, r4, #0\n    mov r1, #5\n    lsl r2, r2, #0xa\n    lsl r3, r3, #0xe\n    bl ov74_0222A6F8\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0222A79C: .word _0223B390"
    );
    #endif
}

void ov74_0222A7A0(void) {
    /* Original at 0x0222A7A0 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x20\n    mov r2, #4\n    str r0, [sp]\n    mov r0, #0x54\n    add r3, r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #0\n    add r3, #0xfc\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #5\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r0, #0x54\n    str r0, [sp, #0xc]\n    mov r0, #0x71\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x54\n    str r0, [sp, #0xc]\n    mov r0, #0x71\n    mov r1, #2\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #8\n    mov r2, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #5\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    add r0, r4, #0\n    mov r1, #5\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov74_0222A81C(void) {
    /* Original at 0x0222A81C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x54\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #0\n    add r3, r0, #0\n    add r2, r1, #0\n    add r3, #0x8f\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #5\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r0, #0x54\n    str r0, [sp, #0xc]\n    mov r0, #0x71\n    add r2, r4, #0\n    add r3, r1, #0\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x54\n    str r0, [sp, #0xc]\n    mov r0, #0x71\n    mov r1, #2\n    add r2, r4, #0\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #8\n    mov r2, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    add r0, r4, #0\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    bl ov74_0222A7A0\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov74_0222A89C(void) {
    /* Original at 0x0222A89C */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r0, [sp]\n    add r5, r1, #0\n    add r7, r2, #0\n    str r3, [sp, #4]\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, [r4, #0x7c]\n    cmp r0, #0\n    beq _0222A8B8\n    bl ListMenuItems_Delete\n    add r0, r7, #0\n    mov r1, #0x54\n    bl ListMenuItems_New\n    str r0, [r4, #0x7c]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xf7\n    mov r3, #0x54\n    bl NewMsgDataFromNarc\n    mov r6, #0\n    str r0, [r4, #0x10]\n    cmp r7, #0\n    ble _0222A8EA\n    ldr r0, [r4, #0x7c]\n    ldr r1, [r4, #0x10]\n    ldr r2, [r5]\n    ldr r3, [r5, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r6, r6, #1\n    add r5, #8\n    cmp r6, r7\n    blt _0222A8D6\n    ldr r0, [r4, #0x10]\n    bl DestroyMsgData\n    ldr r3, _0222A948 ; =ov74_0223C270\n    add r2, sp, #8\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4, #0x7c]\n    str r0, [sp, #8]\n    add r0, sp, #8\n    strh r7, [r0, #0x12]\n    ldrh r1, [r0, #0x12]\n    strh r1, [r0, #0x10]\n    ldr r0, [sp, #4]\n    str r0, [sp, #0x14]\n    ldr r0, [r4, #0x78]\n    cmp r0, #0\n    beq _0222A922\n    mov r1, #0\n    add r2, r1, #0\n    bl DestroyListMenu\n    mov r1, #0\n    add r0, sp, #8\n    add r2, r1, #0\n    mov r3, #0x54\n    bl ListMenuInit\n    str r0, [r4, #0x78]\n    mov r0, #0\n    ldr r2, [sp, #0x40]\n    mvn r0, r0\n    cmp r2, r0\n    beq _0222A944\n    add r4, #0x18\n    ldr r0, [sp]\n    add r1, r4, #0\n    bl ov74_0222AA18\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222A948: .word ov74_0223C270"
    );
    #endif
}

void ov74_0222A94C(void) {
    /* Original at 0x0222A94C */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    str r0, [sp, #0x14]\n    add r7, r1, #0\n    str r2, [sp, #0x20]\n    bl OverlayManager_GetData\n    str r0, [sp, #0x1c]\n    ldr r0, [r0, #4]\n    mov r5, #0\n    bl Save_MysteryGift_Get\n    ldr r1, _0222AA10 ; =ov74_0223C220\n    ldr r4, [sp, #0x1c]\n    ldr r2, [r1, #0x70]\n    ldr r1, [r1, #0x74]\n    str r0, [sp, #0x18]\n    add r4, #0x28\n    add r5, r5, #1\n    str r2, [sp, #0x24]\n    str r1, [sp, #0x28]\n    bl SaveMysteryGift_HasAnyCard\n    cmp r0, #0\n    beq _0222A992\n    lsl r6, r5, #3\n    add r0, sp, #0x24\n    add r1, r0, r6\n    ldr r0, _0222AA10 ; =ov74_0223C220\n    add r5, r5, #1\n    ldr r3, [r0, #0x78]\n    ldr r2, [r0, #0x7c]\n    add r0, sp, #0x24\n    str r3, [r0, r6]\n    str r2, [r1, #4]\n    ldr r0, [sp, #0x18]\n    bl SaveMysteryGift_SpecialCardTagIsValid\n    cmp r0, #0\n    beq _0222A9B0\n    lsl r6, r5, #3\n    add r0, sp, #0x24\n    add r1, r0, r6\n    ldr r0, _0222AA14 ; =ov74_0223C2A0\n    add r5, r5, #1\n    ldr r3, [r0]\n    ldr r2, [r0, #4]\n    add r0, sp, #0x24\n    str r3, [r0, r6]\n    str r2, [r1, #4]\n    lsl r6, r5, #3\n    add r0, sp, #0x24\n    add r1, r0, r6\n    ldr r0, _0222AA14 ; =ov74_0223C2A0\n    ldr r3, [r0, #8]\n    ldr r2, [r0, #0xc]\n    add r0, sp, #0x24\n    str r3, [r0, r6]\n    str r2, [r1, #4]\n    ldr r0, [r4]\n    cmp r0, #0\n    bne _0222A9EE\n    mov r0, #7\n    str r0, [sp]\n    mov r0, #0x14\n    str r0, [sp, #4]\n    add r0, r5, #1\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r2, #0\n    lsl r0, r7, #0x10\n    str r2, [sp, #0xc]\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x1c]\n    add r1, r4, #0\n    ldr r0, [r0]\n    mov r3, #6\n    bl AddWindowParameterized\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x1f\n    mov r3, #3\n    bl DrawFrameAndWindow1\n    ldr r0, [sp, #0x20]\n    add r1, sp, #0x24\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    add r2, r5, #1\n    add r3, r4, #0\n    bl ov74_0222A89C\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222AA10: .word ov74_0223C220\n    _0222AA14: .word ov74_0223C2A0"
    );
    #endif
}

void ov74_0222AA18(void) {
    /* Original at 0x0222AA18 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    add r7, r2, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xf7\n    mov r3, #0x54\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x10]\n    mov r0, #0x54\n    bl MessageFormat_New\n    str r0, [r4, #0xc]\n    mov r0, #1\n    mov r1, #6\n    bl GetFontAttribute\n    add r1, r0, #0\n    add r0, r5, #0\n    bl FillWindowPixelBuffer\n    ldr r6, [r4, #0x14]\n    cmp r6, #0\n    bne _0222AA60\n    ldr r0, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    add r2, r7, #0\n    mov r3, #0x54\n    bl ReadMsgData_ExpandPlaceholders\n    add r6, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r4, #0x68]\n    mov r1, #1\n    str r0, [sp, #4]\n    ldr r0, _0222AAA8 ; =0x0001020F\n    add r2, r6, #0\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    add r0, r5, #0\n    bl AddTextPrinterParameterizedWithColor\n    str r0, [r4, #0x6c]\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _0222AA86\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #2\n    bl DrawFrameAndWindow2\n    ldr r0, [r4, #0x10]\n    bl DestroyMsgData\n    ldr r0, [r4, #0xc]\n    bl MessageFormat_Delete\n    mov r0, #0xff\n    str r0, [r4, #0x68]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222AAA8: .word 0x0001020F"
    );
    #endif
}

void ov74_0222AAAC(void) {
    /* Original at 0x0222AAAC */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    add r6, r2, #0\n    bl OverlayManager_GetData\n    mov r0, #0x25\n    mov r1, #0x54\n    bl String_New\n    add r1, r6, #0\n    mov r2, #0x24\n    add r4, r0, #0\n    bl CopyU16ArrayToStringN\n    mov r0, #0\n    mov r1, #6\n    bl GetFontAttribute\n    add r1, r0, #0\n    add r0, r5, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222AB08 ; =0x0001020F\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x1f\n    mov r3, #3\n    bl DrawFrameAndWindow1\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _0222AB08: .word 0x0001020F"
    );
    #endif
}

void ov74_0222AB0C(void) {
    /* Original at 0x0222AB0C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    bl OverlayManager_GetData\n    ldr r0, [r0, #0x78]\n    bl ListMenu_ProcessInput\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _0222AB30\n    add r0, r0, #1\n    cmp r4, r0\n    beq _0222AB66\n    b _0222AB4A\n    ldr r0, _0222AB68 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    cmp r6, #0\n    beq _0222AB66\n    add r0, r7, #0\n    blx r6\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222AB66\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0222AB68 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    cmp r4, #0\n    beq _0222AB66\n    ldr r0, _0222AB6C ; =ov74_0223D0A8\n    str r4, [r0, #8]\n    add r0, r7, #0\n    blx r4\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222AB66\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222AB68: .word SEQ_SE_DP_SELECT\n    _0222AB6C: .word ov74_0223D0A8"
    );
    #endif
}

void ov74_0222AB70(void) {
    /* Original at 0x0222AB70 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ResetAllTextPrinters\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x54\n    bl LoadFontPal0\n    mov r0, #0\n    mov r1, #0x20\n    mov r2, #0x54\n    bl LoadFontPal0\n    ldr r0, [r4, #8]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x54\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    mov r1, #0\n    mov r2, #1\n    mov r3, #2\n    bl LoadUserFrameGfx2\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x54\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    mov r1, #0\n    mov r2, #0x1f\n    mov r3, #3\n    bl LoadUserFrameGfx1\n    mov r0, #5\n    ldr r1, _0222AC18 ; =0x00007D8C\n    lsl r0, r0, #0x18\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x18\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _0222ABF4\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r2, #0\n    add r1, r4, #0\n    str r2, [sp, #0xc]\n    mov r0, #0x28\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, #0x18\n    mov r3, #2\n    bl AddWindowParameterized\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x18\n    mov r2, #0\n    bl ov74_0222AA18\n    add r0, r5, #0\n    mov r1, #0xc4\n    mov r2, #0\n    bl ov74_0222A94C\n    ldr r0, [r4]\n    bl ov74_0222A81C\n    mov r0, #1\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _0222AC18: .word 0x00007D8C"
    );
    #endif
}

void ov74_0222AC1C(void) {
    /* Original at 0x0222AC1C */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r1, _0222ACC8 ; =0x000015E0\n    add r0, r6, #0\n    add r1, r4, r1\n    bl ov74_02236AE0\n    cmp r0, #4\n    bhi _0222ACC4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222AC42: ; jump table\n    ldr r1, _0222ACCC ; =0x00001658\n    add r0, r4, #0\n    mov r2, #0xea\n    add r0, #0x8c\n    add r1, r4, r1\n    lsl r2, r2, #2\n    bl memcpy\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    add r0, r4, #0\n    mov r1, #0x1b\n    add r0, #0x84\n    str r1, [r0]\n    mov r0, #0x13\n    str r0, [r5]\n    ldr r0, _0222ACD0 ; =0x000015DC\n    mov r1, #0\n    str r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    ldr r0, _0222ACD0 ; =0x000015DC\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #0x11\n    str r0, [r5]\n    pop {r4, r5, r6, pc}\n    mov r0, #0x9a\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    mov r0, #0x9a\n    lsl r0, r0, #6\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, [r4]\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, _0222ACD4 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    add r0, r6, #0\n    mov r1, #0xc4\n    mov r2, #0\n    bl ov74_0222A94C\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #3\n    str r0, [r5]\n    pop {r4, r5, r6, pc}\n    nop\n    _0222ACC8: .word 0x000015E0\n    _0222ACCC: .word 0x00001658\n    _0222ACD0: .word 0x000015DC\n    _0222ACD4: .word SEQ_SE_DP_SELECT"
    );
    #endif
}

void ov74_0222ACD8(void) {
    /* Original at 0x0222ACD8 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x5c\n    add r5, r0, #0\n    ldr r0, _0222AD64 ; =0x0000266C\n    ldr r4, [r5, r0]\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0222ACEC\n    mov r4, #0xb\n    mov r0, #0x10\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, [r5]\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0x54\n    bl MessageFormat_New\n    mov r1, #2\n    str r1, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    ldr r2, _0222AD68 ; =0x00002670\n    mov r1, #0\n    ldr r2, [r5, r2]\n    mov r3, #5\n    add r6, r0, #0\n    bl BufferIntegerAsString\n    mov r0, #0x1f\n    mov r1, #0x9a\n    str r0, [sp]\n    mov r0, #3\n    lsl r1, r1, #6\n    mov r3, #0x32\n    str r0, [sp, #4]\n    add r0, sp, #8\n    add r1, r5, r1\n    mov r2, #1\n    lsl r3, r3, #4\n    bl ov74_02235414\n    add r0, sp, #8\n    mov r1, #0x18\n    mov r2, #0x10\n    mov r3, #0x64\n    bl ov74_02235464\n    add r0, sp, #8\n    mov r1, #0\n    mov r2, #1\n    bl ov74_0223546C\n    str r6, [sp, #0x1c]\n    str r4, [sp]\n    mov r2, #4\n    ldr r0, [r5]\n    add r1, sp, #8\n    add r3, r2, #0\n    bl ov74_02235568\n    add r0, r6, #0\n    bl MessageFormat_Delete\n    add sp, #0x5c\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0222AD64: .word 0x0000266C\n    _0222AD68: .word 0x00002670"
    );
    #endif
}

void ov74_0222AD6C(void) {
    /* Original at 0x0222AD6C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r1, r0, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #3\n    bne _0222AD82\n    mov r4, #0x16\n    b _0222ADAC\n    cmp r0, #4\n    bne _0222AD8A\n    mov r4, #0x1a\n    b _0222ADAC\n    cmp r0, #2\n    bne _0222AD92\n    mov r4, #0x17\n    b _0222ADAC\n    cmp r0, #1\n    bne _0222AD9A\n    mov r4, #0x1c\n    b _0222ADAC\n    cmp r0, #5\n    bne _0222ADAC\n    add r0, r5, #0\n    add r1, #0x18\n    mov r2, #9\n    mov r3, #0x34\n    bl ov74_0222ADBC\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, #0x18\n    add r2, r4, #0\n    mov r3, #0x33\n    bl ov74_0222ADBC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_0222ADBC(void) {
    /* Original at 0x0222ADBC */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    add r6, r1, #0\n    add r5, r2, #0\n    add r7, r3, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    cmp r6, #0\n    beq _0222AE16\n    cmp r5, #0\n    beq _0222AE16\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xf7\n    mov r3, #0x54\n    bl NewMsgDataFromNarc\n    str r0, [sp, #4]\n    mov r0, #0x54\n    bl MessageFormat_New\n    ldr r1, [sp, #4]\n    add r2, r5, #0\n    mov r3, #0x54\n    str r0, [sp, #8]\n    bl ReadMsgData_ExpandPlaceholders\n    str r0, [r4, #0x14]\n    mov r0, #1\n    str r0, [r4, #0x68]\n    ldr r0, [sp]\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov74_0222AA18\n    ldr r0, [sp, #8]\n    str r7, [r4, #0x74]\n    bl MessageFormat_Delete\n    ldr r0, [sp, #4]\n    bl DestroyMsgData\n    b _0222AE36\n    ldr r0, [r4, #0x6c]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222AE36\n    ldr r0, [r4, #0x14]\n    bl String_Delete\n    mov r0, #0\n    str r0, [r4, #0x14]\n    str r0, [r4, #0x68]\n    add sp, #0xc\n    ldr r0, [r4, #0x74]\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0x32\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_0222AE3C(void) {
    /* Original at 0x0222AE3C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0222AE68 ; =0x000015D4\n    ldr r0, [r0, r1]\n    cmp r0, #4\n    bhi _0222AE64\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222AE52: ; jump table\n    bl ov74_02229DF8\n    bl sub_0203A914\n    pop {r3, pc}\n    nop\n    _0222AE68: .word 0x000015D4"
    );
    #endif
}

void ov74_0222AE6C(void) {
    /* Original at 0x0222AE6C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov74_0222CD88\n    mov r0, #3\n    mov r1, #0x54\n    lsl r2, r0, #0x10\n    bl Heap_Create\n    ldr r1, _0222AF14 ; =0x000029F8\n    add r0, r5, #0\n    mov r2, #0x54\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _0222AF14 ; =0x000029F8\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #0x54\n    bl BgConfig_Alloc\n    str r0, [r4]\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    bl ov74_0222FCA4\n    ldr r0, [r4]\n    bl ov74_0222A744\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    ldr r1, _0222AF18 ; =0x0000047E\n    mov r0, #0xa\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    mov r0, #0x54\n    bl ov74_0223512C\n    bl ov74_02235230\n    cmp r0, #0\n    beq _0222AEE8\n    ldr r0, _0222AF1C ; =0x000015D4\n    mov r1, #2\n    str r1, [r4, r0]\n    ldr r0, _0222AF20 ; =gGameVersion\n    ldrb r0, [r0]\n    bl sub_0201A4B0\n    mov r0, #1\n    bl ov74_02236034\n    ldr r0, _0222AF24 ; =0x000005C8\n    mov r1, #0x1d\n    str r1, [r4, r0]\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    ldr r0, [r0, #8]\n    str r0, [r4, #4]\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [r4, #8]\n    mov r0, #0xff\n    mov r2, #0x57\n    str r0, [r4, #0x68]\n    mov r0, #0\n    mov r1, #0x59\n    lsl r2, r2, #4\n    bl Heap_Create\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _0222AF14: .word 0x000029F8\n    _0222AF18: .word 0x0000047E\n    _0222AF1C: .word 0x000015D4\n    _0222AF20: .word gGameVersion\n    _0222AF24: .word 0x000005C8"
    );
    #endif
}

void ov74_0222AF28(void) {
    /* Original at 0x0222AF28 */
    /* Requires manual decompilation - 192 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x2c\n    add r4, r0, #0\n    ldr r0, _0222B0C0 ; =0x00004E21\n    mov r3, #1\n    str r0, [sp]\n    str r3, [sp, #4]\n    mov r1, #0x54\n    str r1, [sp, #8]\n    ldr r0, [r4, #0xc]\n    add r1, #0xd8\n    ldr r0, [r0, r1]\n    mov r1, #0x71\n    mov r2, #0x2b\n    bl AddCharResObjFromNarc\n    str r0, [r4, #0x58]\n    ldr r0, _0222B0C0 ; =0x00004E21\n    mov r1, #0x54\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0xc]\n    add r1, #0xdc\n    ldr r0, [r0, r1]\n    mov r1, #0x71\n    mov r2, #0x28\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    str r0, [r4, #0x5c]\n    ldr r0, _0222B0C0 ; =0x00004E21\n    mov r1, #0x54\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r4, #0xc]\n    add r1, #0xe0\n    ldr r0, [r0, r1]\n    mov r1, #0x71\n    mov r2, #0x2a\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    str r0, [r4, #0x60]\n    ldr r0, _0222B0C0 ; =0x00004E21\n    mov r1, #0x54\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r4, #0xc]\n    add r1, #0xe4\n    ldr r0, [r0, r1]\n    mov r1, #0x71\n    mov r2, #0x29\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    str r0, [r4, #0x64]\n    ldr r0, _0222B0C4 ; =0x00004E22\n    mov r1, #0x54\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r4, #0xc]\n    add r1, #0xd8\n    ldr r0, [r0, r1]\n    mov r1, #0x71\n    mov r2, #0x2b\n    mov r3, #1\n    bl AddCharResObjFromNarc\n    str r0, [r4, #0x70]\n    ldr r0, _0222B0C4 ; =0x00004E22\n    mov r1, #0x54\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0xc]\n    add r1, #0xdc\n    ldr r0, [r0, r1]\n    mov r1, #0x71\n    mov r2, #0x28\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    str r0, [r4, #0x74]\n    ldr r0, _0222B0C4 ; =0x00004E22\n    mov r1, #0x54\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r4, #0xc]\n    add r1, #0xe0\n    ldr r0, [r0, r1]\n    mov r1, #0x71\n    mov r2, #0x2a\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    str r0, [r4, #0x78]\n    ldr r0, _0222B0C4 ; =0x00004E22\n    mov r1, #0x54\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r4, #0xc]\n    add r1, #0xe4\n    ldr r0, [r0, r1]\n    mov r1, #0x71\n    mov r2, #0x29\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    str r0, [r4, #0x7c]\n    ldr r0, [r4, #0x58]\n    bl sub_0200ACF0\n    ldr r0, [r4, #0x70]\n    bl sub_0200ACF0\n    ldr r0, [r4, #0x5c]\n    bl sub_0200B00C\n    ldr r0, [r4, #0x74]\n    bl sub_0200B00C\n    mov r0, #0\n    mov r5, #0x4b\n    ldr r2, [r4, #0xc]\n    ldr r1, _0222B0C0 ; =0x00004E21\n    mvn r0, r0\n    str r1, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    lsl r5, r5, #2\n    ldr r3, [r2, r5]\n    str r3, [sp, #0x14]\n    add r3, r5, #4\n    ldr r3, [r2, r3]\n    str r3, [sp, #0x18]\n    add r3, r5, #0\n    add r3, #8\n    ldr r3, [r2, r3]\n    add r5, #0xc\n    str r3, [sp, #0x1c]\n    ldr r2, [r2, r5]\n    add r3, r1, #0\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r4, #0\n    add r0, #0x10\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r2, [r4, #0xc]\n    ldr r1, _0222B0C4 ; =0x00004E22\n    mov r0, #0\n    mov r5, #0x4b\n    add r4, #0x10\n    str r1, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    lsl r5, r5, #2\n    ldr r3, [r2, r5]\n    add r4, #0x24\n    str r3, [sp, #0x14]\n    add r3, r5, #4\n    ldr r3, [r2, r3]\n    str r3, [sp, #0x18]\n    add r3, r5, #0\n    add r3, #8\n    ldr r3, [r2, r3]\n    add r5, #0xc\n    str r3, [sp, #0x1c]\n    ldr r2, [r2, r5]\n    add r3, r1, #0\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r4, #0\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    add sp, #0x2c\n    pop {r4, r5, pc}\n    _0222B0C0: .word 0x00004E21\n    _0222B0C4: .word 0x00004E22"
    );
    #endif
}

void ov74_0222B0C8(void) {
    /* Original at 0x0222B0C8 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x30\n    cmp r1, #1\n    beq _0222B0D4\n    mov r3, #1\n    b _0222B0D6\n    mov r3, #0\n    ldr r2, [r0, #0xc]\n    add r0, #0x10\n    ldr r2, [r2]\n    str r2, [sp]\n    mov r2, #0x24\n    mul r2, r3\n    add r0, r0, r2\n    mov r3, #1\n    lsl r3, r3, #0xc\n    mov r2, #0\n    str r0, [sp, #4]\n    str r2, [sp, #0x10]\n    str r3, [sp, #0x14]\n    str r3, [sp, #0x18]\n    str r3, [sp, #0x1c]\n    add r0, sp, #0\n    strh r2, [r0, #0x20]\n    lsl r0, r3, #7\n    str r0, [sp, #8]\n    mov r0, #0xa\n    lsl r2, r3, #5\n    str r0, [sp, #0x24]\n    mov r0, #0x54\n    str r2, [sp, #0xc]\n    str r1, [sp, #0x28]\n    str r0, [sp, #0x2c]\n    cmp r1, #2\n    bne _0222B114\n    lsl r0, r3, #8\n    add r0, r2, r0\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    add r4, r0, #0\n    beq _0222B13C\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl Sprite_SetPriority\n    add r0, r4, #0\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    add sp, #0x30\n    pop {r4, pc}"
    );
    #endif
}

void ov74_0222B144(void) {
    /* Original at 0x0222B144 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #1\n    add r4, r0, #0\n    bl ov74_0222B0C8\n    ldr r1, _0222B198 ; =0x00003014\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #2\n    bl Sprite_TryChangeAnimSeq\n    ldr r0, _0222B198 ; =0x00003014\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimationFrame\n    ldr r0, _0222B198 ; =0x00003014\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0222B198 ; =0x00003014\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawPriority\n    ldr r0, _0222B198 ; =0x00003014\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl Sprite_SetAffineOverwriteMode\n    ldr r0, _0222B198 ; =0x00003014\n    ldr r0, [r4, r0]\n    bl Sprite_GetMatrixPtr\n    mov r1, #2\n    lsl r1, r1, #0x12\n    str r1, [r0]\n    mov r1, #6\n    lsl r1, r1, #0x10\n    str r1, [r0, #4]\n    pop {r4, pc}\n    _0222B198: .word 0x00003014"
    );
    #endif
}

void ov74_0222B19C(void) {
    /* Original at 0x0222B19C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #2\n    add r4, r0, #0\n    bl ov74_0222B0C8\n    ldr r1, _0222B1F0 ; =0x00003060\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #4\n    bl Sprite_TryChangeAnimSeq\n    ldr r0, _0222B1F0 ; =0x00003060\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimationFrame\n    ldr r0, _0222B1F0 ; =0x00003060\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0222B1F0 ; =0x00003060\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawPriority\n    ldr r0, _0222B1F0 ; =0x00003060\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl Sprite_SetAffineOverwriteMode\n    ldr r0, _0222B1F0 ; =0x00003060\n    ldr r0, [r4, r0]\n    bl Sprite_GetMatrixPtr\n    mov r1, #2\n    lsl r1, r1, #0x12\n    str r1, [r0]\n    lsl r1, r1, #1\n    str r1, [r0, #4]\n    pop {r4, pc}\n    nop\n    _0222B1F0: .word 0x00003060"
    );
    #endif
}

void ov74_0222B1F4(void) {
    Sprite_Delete(0);
}

void ov74_0222B20C(void) {
    Sprite_Delete(0);
}

void ov74_0222B224(void) {
    /* Original at 0x0222B224 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r6, #2\n    ldr r7, _0222B27C ; =0x00001854\n    str r0, [sp]\n    mov r4, #0\n    add r5, r0, #0\n    lsl r6, r6, #0xc\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0222B242\n    add r1, r6, #0\n    bl Sprite_UpdateAnim\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _0222B24E\n    add r1, r6, #0\n    bl Sprite_UpdateAnim\n    add r4, r4, #1\n    add r5, #0x4c\n    cmp r4, #0x50\n    blt _0222B232\n    ldr r1, _0222B280 ; =0x00003014\n    ldr r0, [sp]\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _0222B268\n    mov r1, #2\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    ldr r1, _0222B284 ; =0x00003060\n    ldr r0, [sp]\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _0222B27A\n    mov r1, #2\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222B27C: .word 0x00001854\n    _0222B280: .word 0x00003014\n    _0222B284: .word 0x00003060"
    );
    #endif
}

void ov74_0222B288(void) {
    /* Original at 0x0222B288 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    mov r7, #1\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov74_0222B0C8\n    add r1, r5, #0\n    add r1, #0x94\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    mov r1, #1\n    bl Sprite_TryChangeAnimSeq\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    add r4, r4, #1\n    add r5, #0x4c\n    cmp r4, #0x50\n    blt _0222B292\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_0222B2C4(void) {
    /* Original at 0x0222B2C4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    add r7, r4, #0\n    cmp r4, #0x14\n    bge _0222B2FA\n    add r0, r6, #0\n    mov r1, #1\n    bl ov74_0222B0C8\n    add r1, r5, #0\n    add r1, #0x94\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    mov r1, #1\n    bl Sprite_TryChangeAnimSeq\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    b _0222B300\n    add r0, r5, #0\n    add r0, #0x94\n    str r7, [r0]\n    add r4, r4, #1\n    add r5, #0x4c\n    cmp r4, #0x50\n    blt _0222B2CE\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_0222B30C(void) {
    /* Original at 0x0222B30C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r7, _0222B340 ; =0x00001854\n    mov r4, #0\n    add r5, r6, #0\n    add r0, r6, #0\n    mov r1, #2\n    bl ov74_0222B0C8\n    ldr r1, _0222B340 ; =0x00001854\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #5\n    bl Sprite_TryChangeAnimSeq\n    ldr r0, [r5, r7]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    add r4, r4, #1\n    add r5, #0x4c\n    cmp r4, #0x50\n    blt _0222B316\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222B340: .word 0x00001854"
    );
    #endif
}

void ov74_0222B344(void) {
    /* Original at 0x0222B344 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #0\n    add r5, r0, #0\n    add r6, r4, #0\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0222B36A\n    bl Sprite_Delete\n    add r0, r5, #0\n    add r0, #0x94\n    str r6, [r0]\n    add r0, r5, #0\n    add r0, #0xd0\n    ldr r0, [r0]\n    bl SysTask_Destroy\n    add r4, r4, #1\n    add r5, #0x4c\n    cmp r4, #0x50\n    blt _0222B34C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov74_0222B374(void) {
    /* Original at 0x0222B374 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    ldr r7, _0222B39C ; =0x00001890\n    add r5, r0, #0\n    add r6, r4, #0\n    ldr r0, _0222B3A0 ; =0x00001854\n    ldr r0, [r5, r0]\n    bl Sprite_Delete\n    ldr r0, _0222B3A0 ; =0x00001854\n    str r6, [r5, r0]\n    ldr r0, [r5, r7]\n    bl SysTask_Destroy\n    add r4, r4, #1\n    add r5, #0x4c\n    cmp r4, #0x50\n    blt _0222B37E\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222B39C: .word 0x00001890\n    _0222B3A0: .word 0x00001854"
    );
    #endif
}

void ov74_0222B3A4(void) {
    /* Original at 0x0222B3A4 */
    /* Requires manual decompilation - 260 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0xb8\n    add r5, r0, #0\n    str r0, [sp]\n    add r0, #0x88\n    ldr r3, _0222B5E8 ; =_0223B3BC\n    mov r4, #0\n    add r7, sp, #0x64\n    str r0, [sp]\n    add r2, sp, #0x10\n    mov r6, #0xa\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r6, r6, #1\n    bne _0222B3BA\n    ldr r0, [r3]\n    str r0, [r2]\n    mov r2, #2\n    add r0, r5, #0\n    mov r1, #6\n    lsl r2, r2, #0x12\n    add r0, #0x98\n    str r2, [r0]\n    add r0, r5, #0\n    lsl r1, r1, #0x10\n    add r0, #0x9c\n    str r1, [r0]\n    add r0, r5, #0\n    lsr r1, r2, #5\n    add r0, #0xa4\n    str r1, [r0]\n    mov r1, #5\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    add r0, #0xa8\n    str r1, [r0]\n    lsr r2, r4, #0x1f\n    lsl r1, r4, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r5, #0\n    add r1, r2, r1\n    add r0, #0xb4\n    str r1, [r0]\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0xbc\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0x8c\n    str r1, [r0]\n    add r0, r4, #0\n    mov r1, #0xa\n    bl _s32_div_f\n    add r0, r0, #4\n    cmp r0, #0\n    ble _0222B42C\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0222B43A\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r1, r5, #0\n    add r1, #0xa4\n    str r0, [r1]\n    cmp r4, #0x32\n    ble _0222B462\n    bl LCRandom\n    mov r1, #5\n    bl _s32_div_f\n    mov r0, #0x41\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r0, r1\n    add r0, r5, #0\n    add r0, #0xb8\n    str r1, [r0]\n    b _0222B4EC\n    cmp r4, #0x28\n    ble _0222B47E\n    bl LCRandom\n    mov r1, #5\n    bl _s32_div_f\n    add r0, r4, #0\n    add r0, #0xfa\n    add r1, r0, r1\n    add r0, r5, #0\n    add r0, #0xb8\n    str r1, [r0]\n    b _0222B4EC\n    cmp r4, #0x1e\n    ble _0222B49A\n    bl LCRandom\n    mov r1, #5\n    bl _s32_div_f\n    add r0, r4, #0\n    add r0, #0xf0\n    add r1, r0, r1\n    add r0, r5, #0\n    add r0, #0xb8\n    str r1, [r0]\n    b _0222B4EC\n    cmp r4, #0x19\n    ble _0222B4B6\n    bl LCRandom\n    mov r1, #5\n    bl _s32_div_f\n    add r0, r4, #0\n    add r0, #0xe6\n    add r1, r0, r1\n    add r0, r5, #0\n    add r0, #0xb8\n    str r1, [r0]\n    b _0222B4EC\n    cmp r4, #0x14\n    ble _0222B4D2\n    bl LCRandom\n    mov r1, #5\n    bl _s32_div_f\n    add r0, r4, #0\n    add r0, #0xdc\n    add r1, r0, r1\n    add r0, r5, #0\n    add r0, #0xb8\n    str r1, [r0]\n    b _0222B4EC\n    add r6, sp, #0x10\n    add r3, sp, #0x64\n    mov r2, #0xa\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0222B4D8\n    ldr r0, [r6]\n    str r0, [r3]\n    add r0, r5, #0\n    ldr r1, [r7]\n    add r0, #0xb8\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    add r1, r0, #1\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    bl _dflt\n    add r2, r0, #0\n    add r3, r1, #0\n    ldr r0, _0222B5EC ; =0x66666666\n    ldr r1, _0222B5F0 ; =0x3FE66666\n    bl _dmul\n    bl _dfix\n    add r1, r5, #0\n    add r1, #0xb8\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0xb8\n    str r1, [r0]\n    add r0, r5, #0\n    mov r1, #0xf\n    add r0, #0xc0\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r1, [r0]\n    add r0, r5, #0\n    add r0, #0xc8\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r1, [r0]\n    add r0, r5, #0\n    add r0, #0xcc\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #4\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    bl LCRandom\n    mov r1, #0xe0\n    bl _s32_div_f\n    add r1, #0x10\n    cmp r1, #0\n    ble _0222B586\n    bl LCRandom\n    mov r1, #0xe0\n    bl _s32_div_f\n    add r1, #0x10\n    lsl r0, r1, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0222B5A0\n    bl LCRandom\n    mov r1, #0xe0\n    bl _s32_div_f\n    add r1, #0x10\n    lsl r0, r1, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    add r1, sp, #4\n    bl Sprite_SetMatrix\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _0222B5F4 ; =ov74_0222BA48\n    ldr r1, [sp]\n    mov r2, #6\n    bl SysTask_CreateOnMainQueue\n    add r1, r5, #0\n    add r1, #0xd0\n    str r0, [r1]\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r0, #0x4c\n    add r5, #0x4c\n    add r7, r7, #4\n    str r0, [sp]\n    cmp r4, #0x50\n    bge _0222B5E4\n    b _0222B3C6\n    add sp, #0xb8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222B5E8: .word _0223B3BC\n    _0222B5EC: .word 0x66666666\n    _0222B5F0: .word 0x3FE66666\n    _0222B5F4: .word ov74_0222BA48"
    );
    #endif
}

void ov74_0222B5F8(void) {
    /* Original at 0x0222B5F8 */
    /* Requires manual decompilation - 162 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r7, r5, #0\n    mov r4, #0\n    add r7, #0x88\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0222B610\n    b _0222B74C\n    add r1, r5, #0\n    mov r0, #2\n    add r1, #0x98\n    lsl r0, r0, #0x12\n    str r0, [r1]\n    add r1, r5, #0\n    mov r0, #6\n    add r1, #0x9c\n    lsl r0, r0, #0x10\n    str r0, [r1]\n    add r1, r5, #0\n    add r1, #0xa4\n    lsr r0, r0, #3\n    str r0, [r1]\n    add r1, r5, #0\n    mov r0, #1\n    add r1, #0xa8\n    lsl r0, r0, #0xc\n    str r0, [r1]\n    add r1, r5, #0\n    add r1, #0xb4\n    mov r0, #0xff\n    str r0, [r1]\n    add r1, r5, #0\n    add r1, #0xbc\n    mov r0, #0\n    str r0, [r1]\n    add r1, r5, #0\n    add r1, #0x8c\n    str r0, [r1]\n    add r1, r5, #0\n    add r1, #0x90\n    str r0, [r1]\n    cmp r4, #0x1e\n    ble _0222B66A\n    bl LCRandom\n    mov r1, #0xa\n    bl _s32_div_f\n    add r0, r5, #0\n    add r1, #0xf\n    add r0, #0xb8\n    str r1, [r0]\n    b _0222B6AC\n    cmp r4, #0x14\n    ble _0222B682\n    bl LCRandom\n    mov r1, #0xa\n    bl _s32_div_f\n    add r0, r5, #0\n    add r1, #0xa\n    add r0, #0xb8\n    str r1, [r0]\n    b _0222B6AC\n    cmp r4, #0xa\n    ble _0222B69A\n    bl LCRandom\n    mov r1, #5\n    bl _s32_div_f\n    add r0, r5, #0\n    add r1, #0xa\n    add r0, #0xb8\n    str r1, [r0]\n    b _0222B6AC\n    bl LCRandom\n    mov r1, #5\n    bl _s32_div_f\n    add r0, r5, #0\n    add r1, r1, #5\n    add r0, #0xb8\n    str r1, [r0]\n    add r1, r5, #0\n    add r1, #0xb8\n    mov r0, #0\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r1, [r0]\n    add r0, r5, #0\n    add r0, #0xc8\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r1, [r0]\n    add r0, r5, #0\n    add r0, #0xcc\n    str r1, [r0]\n    bl LCRandom\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    bl _s32_div_f\n    str r1, [sp]\n    bl LCRandom\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1b\n    sub r1, r1, r2\n    mov r0, #0x1b\n    ror r1, r0\n    ldr r0, [sp]\n    add r6, r2, r1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    add r6, #0x40\n    bl GF_SinDeg\n    add r1, r5, #0\n    add r1, #0x98\n    ldr r1, [r1]\n    mul r0, r6\n    add r0, r1, r0\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    add r1, r5, #0\n    add r1, #0x9c\n    ldr r1, [r1]\n    mul r0, r6\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    add r1, sp, #4\n    bl Sprite_SetMatrix\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    mov r1, #1\n    bl Sprite_TryChangeAnimSeq\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _0222B75C ; =ov74_0222BA48\n    add r1, r7, #0\n    mov r2, #6\n    bl SysTask_CreateOnMainQueue\n    add r1, r5, #0\n    add r1, #0xd0\n    str r0, [r1]\n    add r4, r4, #1\n    add r5, #0x4c\n    add r7, #0x4c\n    cmp r4, #0x50\n    bge _0222B758\n    b _0222B604\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222B75C: .word ov74_0222BA48"
    );
    #endif
}

void ov74_0222B760(void) {
    /* Original at 0x0222B760 */
    /* Requires manual decompilation - 213 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0222B928 ; =0x00001848\n    mov r4, #0\n    add r6, r5, r0\n    mov r1, #2\n    ldr r0, _0222B92C ; =0x00001858\n    lsl r1, r1, #0x12\n    str r1, [r5, r0]\n    mov r1, #6\n    lsl r1, r1, #0x12\n    add r0, r0, #4\n    str r1, [r5, r0]\n    mov r1, #1\n    ldr r0, _0222B930 ; =0x00001864\n    lsl r1, r1, #0xe\n    str r1, [r5, r0]\n    mov r1, #5\n    lsl r1, r1, #0xc\n    add r0, r0, #4\n    str r1, [r5, r0]\n    lsr r2, r4, #0x1f\n    lsl r1, r4, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    add r1, r0, #4\n    ldr r0, _0222B934 ; =0x00001874\n    str r1, [r5, r0]\n    mov r1, #0\n    add r0, #8\n    str r1, [r5, r0]\n    ldr r0, _0222B938 ; =0x0000184C\n    str r1, [r5, r0]\n    bl LCRandom\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    add r1, r0, #2\n    ldr r0, _0222B93C ; =0x00001884\n    str r1, [r5, r0]\n    add r0, r4, #0\n    mov r1, #0x1e\n    bl _s32_div_f\n    add r0, r0, #4\n    cmp r0, #0\n    ble _0222B7DE\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0222B7EC\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, _0222B930 ; =0x00001864\n    cmp r4, #0x3c\n    str r0, [r5, r1]\n    ble _0222B812\n    mov r0, #0x62\n    mov r1, #5\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    bl LCRandom\n    mov r1, #0xa\n    bl _s32_div_f\n    ldr r0, _0222B940 ; =0x00001878\n    add r1, #0x46\n    str r1, [r5, r0]\n    b _0222B8C0\n    cmp r4, #0x32\n    ble _0222B830\n    mov r0, #0x62\n    mov r1, #5\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    bl LCRandom\n    mov r1, #0xa\n    bl _s32_div_f\n    ldr r0, _0222B940 ; =0x00001878\n    add r1, #0x3c\n    str r1, [r5, r0]\n    b _0222B8C0\n    cmp r4, #0x28\n    ble _0222B84E\n    mov r0, #0x62\n    mov r1, #5\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    bl LCRandom\n    mov r1, #5\n    bl _s32_div_f\n    ldr r0, _0222B940 ; =0x00001878\n    add r1, #0x32\n    str r1, [r5, r0]\n    b _0222B8C0\n    cmp r4, #0x1e\n    ble _0222B86C\n    mov r0, #0x62\n    mov r1, #5\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    bl LCRandom\n    mov r1, #0xa\n    bl _s32_div_f\n    ldr r0, _0222B940 ; =0x00001878\n    add r1, #0x28\n    str r1, [r5, r0]\n    b _0222B8C0\n    cmp r4, #0x14\n    ble _0222B88A\n    mov r0, #0x62\n    mov r1, #5\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    bl LCRandom\n    mov r1, #0xa\n    bl _s32_div_f\n    ldr r0, _0222B940 ; =0x00001878\n    add r1, #0x1e\n    str r1, [r5, r0]\n    b _0222B8C0\n    cmp r4, #0xa\n    ble _0222B8A8\n    mov r0, #0x62\n    mov r1, #5\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    bl LCRandom\n    mov r1, #5\n    bl _s32_div_f\n    ldr r0, _0222B940 ; =0x00001878\n    add r1, #0x14\n    str r1, [r5, r0]\n    b _0222B8C0\n    mov r0, #0x62\n    mov r1, #5\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    bl LCRandom\n    mov r1, #5\n    bl _s32_div_f\n    ldr r0, _0222B940 ; =0x00001878\n    add r1, #0xa\n    str r1, [r5, r0]\n    mov r0, #0x62\n    lsl r0, r0, #6\n    ldr r1, [r5, r0]\n    add r0, #8\n    str r1, [r5, r0]\n    mov r0, #0x62\n    lsl r0, r0, #6\n    ldr r1, [r5, r0]\n    add r0, #0xc\n    str r1, [r5, r0]\n    ldr r0, _0222B944 ; =0x00001854\n    ldr r0, [r5, r0]\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    add r2, sp, #0\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, r7, #0\n    str r0, [r2]\n    mov r0, #2\n    lsl r0, r0, #0x12\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #0x12\n    str r0, [sp, #4]\n    ldr r0, _0222B944 ; =0x00001854\n    ldr r0, [r5, r0]\n    bl Sprite_SetMatrix\n    ldr r0, _0222B944 ; =0x00001854\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0222B948 ; =ov74_0222BA48\n    add r1, r6, #0\n    mov r2, #6\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _0222B94C ; =0x00001890\n    add r4, r4, #1\n    str r0, [r5, r1]\n    add r5, #0x4c\n    add r6, #0x4c\n    cmp r4, #0x50\n    bge _0222B924\n    b _0222B76C\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0222B928: .word 0x00001848\n    _0222B92C: .word 0x00001858\n    _0222B930: .word 0x00001864\n    _0222B934: .word 0x00001874\n    _0222B938: .word 0x0000184C\n    _0222B93C: .word 0x00001884\n    _0222B940: .word 0x00001878\n    _0222B944: .word 0x00001854\n    _0222B948: .word ov74_0222BA48\n    _0222B94C: .word 0x00001890"
    );
    #endif
}

void ov74_0222B950(void) {
    /* Original at 0x0222B950 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    mov r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    bl _fflt\n    add r1, r4, #0\n    bl _fsub\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl _fflt\n    add r1, r6, #0\n    bl _fsub\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #8]\n    add r1, r0, #0\n    bl _fmul\n    add r4, r0, #0\n    ldr r0, [sp, #0xc]\n    add r1, r0, #0\n    bl _fmul\n    add r1, r0, #0\n    add r0, r4, #0\n    bl _fadd\n    mov r1, #0\n    add r4, r0, #0\n    bl _fgr\n    ldr r0, _0222BA44 ; =0x45800000\n    bls _0222B9B8\n    add r1, r4, #0\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0222B9C6\n    add r1, r4, #0\n    bl _fmul\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    bl FX_Sqrt\n    bl _fflt\n    ldr r1, _0222BA44 ; =0x45800000\n    bl _fdiv\n    ldr r1, [sp, #0x30]\n    add r4, r0, #0\n    bl _fls\n    blo _0222B9FE\n    add r1, sp, #0x18\n    mov r0, #0x1c\n    ldrsh r0, [r1, r0]\n    bl _fflt\n    add r1, r4, #0\n    bl _fgr\n    bhi _0222B9FE\n    mov r0, #0\n    add r1, r4, #0\n    bl _feq\n    bne _0222BA04\n    add sp, #0x18\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0x30]\n    bl _fmul\n    add r1, r4, #0\n    bl _fdiv\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x30]\n    bl _fmul\n    add r1, r4, #0\n    bl _fdiv\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp]\n    bl _fadd\n    ldr r1, [sp, #0x28]\n    str r0, [r1]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #4]\n    bl _fadd\n    ldr r1, [sp, #0x2c]\n    str r0, [r1]\n    mov r0, #1\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    nop\n    _0222BA44: .word 0x45800000"
    );
    #endif
}

void ov74_0222BA48(void) {
    /* Original at 0x0222BA48 */
    /* Requires manual decompilation - 503 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r1, #0\n    ldr r0, [r5, #0x30]\n    cmp r0, #0\n    ldr r0, [r5, #0xc]\n    beq _0222BA66\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    ldr r0, [r5, #0x30]\n    add sp, #0x24\n    sub r0, r0, #1\n    str r0, [r5, #0x30]\n    pop {r4, r5, r6, r7, pc}\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0xc]\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x18\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [sp, #0x18]\n    bl _fflt\n    ldr r1, _0222BD90 ; =0x45800000\n    bl _fdiv\n    add r6, r0, #0\n    ldr r0, [sp, #0x1c]\n    bl _fflt\n    ldr r1, _0222BD90 ; =0x45800000\n    bl _fdiv\n    add r7, r0, #0\n    ldr r0, [r5, #0x1c]\n    bl _fflt\n    ldr r1, _0222BD90 ; =0x45800000\n    bl _fdiv\n    add r4, r0, #0\n    ldr r0, [r5, #0x20]\n    bl _fflt\n    ldr r1, _0222BD90 ; =0x45800000\n    bl _fdiv\n    bl _ffix\n    add r1, sp, #0x14\n    str r1, [sp]\n    add r1, sp, #0x10\n    str r1, [sp, #4]\n    str r4, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x10]\n    ldr r1, [r5, #0x14]\n    lsl r0, r0, #4\n    lsl r1, r1, #4\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov74_0222B950\n    cmp r0, #0\n    beq _0222BB5A\n    ldr r0, [r5, #0x24]\n    cmp r0, #0\n    bne _0222BB5A\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    bl _fgr\n    ldr r0, _0222BD90 ; =0x45800000\n    bls _0222BB00\n    ldr r1, [sp, #0x14]\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0222BB0E\n    ldr r1, [sp, #0x14]\n    bl _fmul\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #0x18]\n    add r0, r1, r0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    mov r1, #0\n    bl _fgr\n    ldr r0, _0222BD90 ; =0x45800000\n    bls _0222BB36\n    ldr r1, [sp, #0x10]\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0222BB44\n    ldr r1, [sp, #0x10]\n    bl _fmul\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #0x1c]\n    add r0, r1, r0\n    str r0, [sp, #0x1c]\n    ldr r0, [r5, #0xc]\n    add r1, sp, #0x18\n    bl Sprite_SetMatrix\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x24]\n    cmp r0, #0\n    beq _0222BB68\n    cmp r0, #1\n    beq _0222BBDE\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    ldr r1, [r5, #0x10]\n    ldr r0, [sp, #0x18]\n    sub r0, r1, r0\n    cmp r0, #0\n    ble _0222BB84\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0222BB92\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    add r4, r0, #0\n    ldr r1, [r5, #0x14]\n    ldr r0, [sp, #0x1c]\n    sub r0, r1, r0\n    cmp r0, #0\n    ble _0222BBB0\n    lsl r0, r0, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0222BBBE\n    lsl r0, r0, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    add r6, r0, #0\n    add r0, r4, #0\n    bl _ffix\n    add r1, r0, #0\n    add r0, r6, #0\n    bl FX_Atan2Idx\n    str r0, [r5, #0x28]\n    ldr r0, [r5, #0x24]\n    add sp, #0x24\n    add r0, r0, #1\n    str r0, [r5, #0x24]\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r5, #4]\n    cmp r0, #0x14\n    bge _0222BBEA\n    add r0, r0, #1\n    str r0, [r5, #4]\n    b _0222BBEE\n    mov r0, #1\n    str r0, [r5, #8]\n    ldr r0, [r5, #0x28]\n    add r0, #8\n    str r0, [r5, #0x28]\n    ldr r0, [r5, #0x2c]\n    cmp r0, #0\n    bne _0222BC44\n    ldr r0, [r5, #0x34]\n    mov r1, #0x5a\n    add r0, #8\n    lsl r1, r1, #2\n    str r0, [r5, #0x34]\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    str r1, [r5, #0x34]\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    ldr r1, [r5, #0x38]\n    mul r0, r1\n    asr r0, r0, #0xc\n    str r0, [r5, #0x40]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r1, [r5, #0x40]\n    ldr r2, [r5, #0x10]\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    ldr r1, [r5, #0x44]\n    ldr r2, [r5, #0x14]\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [sp, #0x1c]\n    b _0222BEBC\n    cmp r0, #1\n    bne _0222BC92\n    ldr r0, [r5, #0x34]\n    mov r1, #0x5a\n    add r0, #8\n    lsl r1, r1, #2\n    str r0, [r5, #0x34]\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    str r1, [r5, #0x34]\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r1, [r5, #0x38]\n    mul r0, r1\n    asr r0, r0, #0xc\n    str r0, [r5, #0x44]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r1, [r5, #0x40]\n    ldr r2, [r5, #0x10]\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    ldr r1, [r5, #0x44]\n    ldr r2, [r5, #0x14]\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [sp, #0x1c]\n    b _0222BEBC\n    cmp r0, #2\n    bne _0222BCF0\n    ldr r0, [r5, #0x34]\n    mov r1, #0x5a\n    add r0, #8\n    lsl r1, r1, #2\n    str r0, [r5, #0x34]\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    str r1, [r5, #0x34]\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r1, [r5, #0x38]\n    mul r0, r1\n    asr r0, r0, #0xc\n    str r0, [r5, #0x44]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r1, [r5, #0x40]\n    ldr r3, [r5, #0x10]\n    add r2, r1, #0\n    mul r2, r0\n    mov r0, #0\n    mvn r0, r0\n    mul r0, r2\n    add r0, r3, r0\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    ldr r1, [r5, #0x44]\n    ldr r3, [r5, #0x14]\n    add r2, r1, #0\n    mul r2, r0\n    mov r0, #0\n    mvn r0, r0\n    mul r0, r2\n    add r0, r3, r0\n    str r0, [sp, #0x1c]\n    b _0222BEBC\n    cmp r0, #3\n    bne _0222BD4E\n    ldr r0, [r5, #0x34]\n    mov r1, #0x5a\n    add r0, #8\n    lsl r1, r1, #2\n    str r0, [r5, #0x34]\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    str r1, [r5, #0x34]\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    ldr r1, [r5, #0x38]\n    mul r0, r1\n    asr r0, r0, #0xc\n    str r0, [r5, #0x40]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r1, [r5, #0x40]\n    ldr r3, [r5, #0x10]\n    add r2, r1, #0\n    mul r2, r0\n    mov r0, #0\n    mvn r0, r0\n    mul r0, r2\n    add r0, r3, r0\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    ldr r1, [r5, #0x44]\n    ldr r3, [r5, #0x14]\n    add r2, r1, #0\n    mul r2, r0\n    mov r0, #0\n    mvn r0, r0\n    mul r0, r2\n    add r0, r3, r0\n    str r0, [sp, #0x1c]\n    b _0222BEBC\n    cmp r0, #4\n    bne _0222BD94\n    ldr r1, [r5, #0x38]\n    cmp r1, #0x60\n    bge _0222BD5E\n    ldr r0, [r5, #0x3c]\n    add r0, r1, r0\n    str r0, [r5, #0x38]\n    ldr r0, [r5, #0x38]\n    str r0, [r5, #0x40]\n    ldr r0, [r5, #0x38]\n    str r0, [r5, #0x44]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r1, [r5, #0x40]\n    ldr r2, [r5, #0x10]\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    ldr r1, [r5, #0x44]\n    ldr r2, [r5, #0x14]\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [sp, #0x1c]\n    b _0222BEBC\n    _0222BD90: .word 0x45800000\n    cmp r0, #5\n    bne _0222BDE6\n    ldr r1, [r5, #0x38]\n    cmp r1, #0x60\n    bge _0222BDA4\n    ldr r0, [r5, #0x3c]\n    add r0, r1, r0\n    str r0, [r5, #0x38]\n    ldr r0, [r5, #0x38]\n    str r0, [r5, #0x40]\n    ldr r0, [r5, #0x38]\n    str r0, [r5, #0x44]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_SinDeg\n    ldr r1, [r5, #0x40]\n    ldr r3, [r5, #0x10]\n    add r2, r1, #0\n    mul r2, r0\n    mov r0, #0\n    mvn r0, r0\n    mul r0, r2\n    add r0, r3, r0\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x28]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl GF_CosDeg\n    ldr r1, [r5, #0x44]\n    ldr r3, [r5, #0x14]\n    add r2, r1, #0\n    mul r2, r0\n    mov r0, #0\n    mvn r0, r0\n    mul r0, r2\n    add r0, r3, r0\n    str r0, [sp, #0x1c]\n    b _0222BEBC\n    mov r0, #0xa\n    str r0, [r5, #4]\n    mov r0, #2\n    ldr r1, [r5, #0x1c]\n    lsl r0, r0, #0xa\n    add r0, r1, r0\n    str r0, [r5, #0x1c]\n    ldr r0, [sp, #0x18]\n    bl _fflt\n    ldr r1, _0222BED4 ; =0x45800000\n    bl _fdiv\n    add r4, r0, #0\n    ldr r0, [sp, #0x1c]\n    bl _fflt\n    ldr r1, _0222BED4 ; =0x45800000\n    bl _fdiv\n    add r6, r0, #0\n    ldr r0, [r5, #0x1c]\n    bl _fflt\n    ldr r1, _0222BED4 ; =0x45800000\n    bl _fdiv\n    add r1, sp, #0x14\n    str r1, [sp]\n    add r1, sp, #0x10\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x10]\n    ldr r1, [r5, #0x14]\n    lsl r0, r0, #4\n    lsl r1, r1, #4\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ov74_0222B950\n    cmp r0, #0\n    beq _0222BEB8\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    bl _fgr\n    ldr r0, _0222BED4 ; =0x45800000\n    bls _0222BE60\n    ldr r1, [sp, #0x14]\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0222BE6E\n    ldr r1, [sp, #0x14]\n    bl _fmul\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #0x18]\n    add r0, r1, r0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    mov r1, #0\n    bl _fgr\n    ldr r0, _0222BED4 ; =0x45800000\n    bls _0222BE96\n    ldr r1, [sp, #0x10]\n    bl _fmul\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0222BEA4\n    ldr r1, [sp, #0x10]\n    bl _fmul\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    ldr r1, [sp, #0x1c]\n    add r0, r1, r0\n    str r0, [sp, #0x1c]\n    ldr r0, [r5, #0xc]\n    add r1, sp, #0x18\n    bl Sprite_SetMatrix\n    b _0222BEBC\n    mov r0, #1\n    str r0, [r5, #8]\n    mov r1, #0x5a\n    ldr r0, [r5, #0x28]\n    lsl r1, r1, #2\n    bl _s32_div_f\n    str r1, [r5, #0x28]\n    ldr r0, [r5, #0xc]\n    add r1, sp, #0x18\n    bl Sprite_SetMatrix\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _0222BED4: .word 0x45800000"
    );
    #endif
}

void ov74_0222BED8(void) {
    /* Original at 0x0222BED8 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    mov r2, #8\n    ldrsb r2, [r3, r2]\n    ldr r3, _0222BEE8 ; =G2x_SetBlendBrightness_\n    ldr r0, _0222BEEC ; =0x04000050\n    mov r1, #0x22\n    bx r3\n    nop\n    _0222BEE8: .word G2x_SetBlendBrightness_\n    _0222BEEC: .word 0x04000050"
    );
    #endif
}

void ov74_0222BEF0(void) {
    /* Original at 0x0222BEF0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    mov r2, #8\n    ldrsb r2, [r3, r2]\n    ldr r3, _0222BF00 ; =G2x_SetBlendBrightness_\n    ldr r0, _0222BF04 ; =0x04001050\n    mov r1, #0x22\n    bx r3\n    nop\n    _0222BF00: .word G2x_SetBlendBrightness_\n    _0222BF04: .word 0x04001050"
    );
    #endif
}

void ov74_0222BF08(void) {
    ov74_0222BED8();
    ov74_0222BEF0(r4);
}

void ov74_0222BF18(void) {
    BG_SetMaskColor(1, 0);
    BG_SetMaskColor(5, 0);
}

void ov74_0222BF2C(void) {
    /* Original at 0x0222BF2C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r4, #1\n    cmp r1, #0\n    beq _0222BF3E\n    cmp r1, #1\n    beq _0222BF6A\n    cmp r1, #2\n    beq _0222BF84\n    b _0222BF98\n    mov r1, #8\n    ldrsb r1, [r0, r1]\n    cmp r1, #0\n    ble _0222BF58\n    sub r1, r1, r2\n    cmp r1, #0\n    ble _0222BF52\n    strb r1, [r0, #8]\n    mov r4, #0\n    b _0222BF98\n    mov r1, #0\n    strb r1, [r0, #8]\n    b _0222BF98\n    bge _0222BF98\n    add r1, r1, r2\n    bpl _0222BF64\n    strb r1, [r0, #8]\n    mov r4, #0\n    b _0222BF98\n    mov r1, #0\n    strb r1, [r0, #8]\n    b _0222BF98\n    mov r3, #8\n    ldrsb r1, [r0, r3]\n    sub r2, r1, r2\n    add r1, r3, #0\n    sub r1, #0x18\n    cmp r2, r1\n    ble _0222BF7E\n    strb r2, [r0, #8]\n    mov r4, #0\n    b _0222BF98\n    sub r3, #0x18\n    strb r3, [r0, #8]\n    b _0222BF98\n    mov r1, #8\n    ldrsb r1, [r0, r1]\n    add r1, r1, r2\n    cmp r1, #0x10\n    bge _0222BF94\n    strb r1, [r0, #8]\n    mov r4, #0\n    b _0222BF98\n    mov r1, #0x10\n    strb r1, [r0, #8]\n    bl ov74_0222BF08\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov74_0222BFA0(void) {
    /* Original at 0x0222BFA0 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r4, #1\n    cmp r1, #0\n    beq _0222BFB2\n    cmp r1, #1\n    beq _0222BFDE\n    cmp r1, #2\n    beq _0222BFF8\n    b _0222C00C\n    mov r1, #8\n    ldrsb r1, [r0, r1]\n    cmp r1, #0\n    ble _0222BFCC\n    sub r1, r1, r2\n    cmp r1, #0\n    ble _0222BFC6\n    strb r1, [r0, #8]\n    mov r4, #0\n    b _0222C00C\n    mov r1, #0\n    strb r1, [r0, #8]\n    b _0222C00C\n    bge _0222C00C\n    add r1, r1, r2\n    bpl _0222BFD8\n    strb r1, [r0, #8]\n    mov r4, #0\n    b _0222C00C\n    mov r1, #0\n    strb r1, [r0, #8]\n    b _0222C00C\n    mov r3, #8\n    ldrsb r1, [r0, r3]\n    sub r2, r1, r2\n    add r1, r3, #0\n    sub r1, #0x18\n    cmp r2, r1\n    ble _0222BFF2\n    strb r2, [r0, #8]\n    mov r4, #0\n    b _0222C00C\n    sub r3, #0x18\n    strb r3, [r0, #8]\n    b _0222C00C\n    mov r1, #8\n    ldrsb r1, [r0, r1]\n    add r1, r1, r2\n    cmp r1, #0x10\n    bge _0222C008\n    strb r1, [r0, #8]\n    mov r4, #0\n    b _0222C00C\n    mov r1, #0x10\n    strb r1, [r0, #8]\n    bl ov74_0222BED8\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov74_0222C014(void) {
    *((u8*)(r0 + 8)) = 0;
    ov74_0222BF08(0);
    ov74_0222AF28(r4);
    ov74_0222B288(r4);
    ov74_0222B3A4(r4);
    ov74_0222B144(r4);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}

void ov74_0222C04C(void) {
    /* Original at 0x0222C04C */
    /* Requires manual decompilation - 286 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    cmp r1, #9\n    bls _0222C058\n    b _0222C2BC\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0222C064: ; jump table\n    add r0, r4, #0\n    bl ov74_0222C014\n    mov r0, #1\n    str r0, [r4]\n    b _0222C2D0\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #2\n    bl ov74_0222BF2C\n    cmp r0, #0\n    bne _0222C094\n    b _0222C2D0\n    mov r0, #2\n    str r0, [r4]\n    b _0222C2D0\n    mov r5, #0\n    mov r6, #1\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r5, #0\n    add r2, r1, #0\n    add r2, #0x90\n    ldr r2, [r2]\n    cmp r2, #0\n    beq _0222C0B2\n    add r5, r5, #1\n    b _0222C0B4\n    add r6, r3, #0\n    add r0, r0, #1\n    add r1, #0x4c\n    cmp r0, #0x50\n    blt _0222C0A4\n    cmp r5, #0x32\n    ble _0222C0CC\n    ldr r0, _0222C2D8 ; =0x00003014\n    mov r1, #4\n    ldr r0, [r4, r0]\n    bl Sprite_TryChangeAnimSeq\n    b _0222C0EA\n    cmp r5, #0x1e\n    ble _0222C0DC\n    ldr r0, _0222C2D8 ; =0x00003014\n    mov r1, #3\n    ldr r0, [r4, r0]\n    bl Sprite_TryChangeAnimSeq\n    b _0222C0EA\n    cmp r5, #7\n    ble _0222C0EA\n    ldr r0, _0222C2D8 ; =0x00003014\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    cmp r6, #0\n    bne _0222C0F2\n    cmp r5, #0x4f\n    bne _0222C1A8\n    mov r0, #3\n    str r0, [r4]\n    add r0, r4, #0\n    bl ov74_0222B344\n    b _0222C2D0\n    ldr r0, _0222C2DC ; =0x000030A0\n    ldr r0, [r4, r0]\n    ldr r0, [r0]\n    cmp r0, #2\n    bne _0222C1A8\n    add r0, r4, #0\n    bl ov74_0222B2C4\n    add r0, r4, #0\n    bl ov74_0222B5F8\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    bl ov74_0222BF18\n    mov r0, #4\n    str r0, [r4]\n    b _0222C2D0\n    mov r5, #0\n    mov r6, #1\n    add r1, r5, #0\n    add r2, r4, #0\n    add r0, r5, #0\n    add r3, r2, #0\n    add r3, #0x94\n    ldr r3, [r3]\n    cmp r3, #0\n    beq _0222C14A\n    add r3, r2, #0\n    add r3, #0x90\n    ldr r3, [r3]\n    cmp r3, #0\n    beq _0222C148\n    add r5, r5, #1\n    b _0222C14A\n    add r6, r0, #0\n    add r1, r1, #1\n    add r2, #0x4c\n    cmp r1, #0x50\n    blt _0222C130\n    mov r1, #2\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov74_0222BFA0\n    cmp r6, #0\n    bne _0222C164\n    cmp r5, #0x13\n    bne _0222C1A8\n    ldr r0, _0222C2E0 ; =SEQ_SE_DP_SAVE\n    bl PlaySE\n    mov r0, #5\n    str r0, [r4]\n    add r0, r4, #0\n    bl ov74_0222B344\n    add r0, r4, #0\n    bl ov74_0222B19C\n    b _0222C2D0\n    mov r1, #2\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov74_0222BFA0\n    cmp r0, #0\n    beq _0222C1A8\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #2\n    bl ov74_0222BFA0\n    mov r0, #6\n    str r0, [r4]\n    b _0222C2D0\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #2\n    bl ov74_0222BFA0\n    cmp r0, #0\n    bne _0222C1AA\n    b _0222C2D0\n    ldr r0, _0222C2D8 ; =0x00003014\n    ldr r0, [r4, r0]\n    bl Sprite_GetMatrixPtr\n    add r5, r0, #0\n    ldr r0, _0222C2E4 ; =0x00003060\n    ldr r0, [r4, r0]\n    bl Sprite_GetMatrixPtr\n    mov r1, #0xe\n    ldr r2, [r5, #4]\n    lsl r1, r1, #0x10\n    cmp r2, r1\n    bge _0222C1CE\n    mov r1, #2\n    lsl r1, r1, #0xe\n    add r1, r2, r1\n    str r1, [r5, #4]\n    mov r1, #3\n    ldr r2, [r5, #4]\n    lsl r1, r1, #0x12\n    sub r2, r2, r1\n    cmp r2, #0\n    ble _0222C2D0\n    ldr r2, [r0, #4]\n    lsl r1, r1, #1\n    cmp r2, r1\n    bge _0222C202\n    mov r1, #2\n    lsl r1, r1, #0xe\n    add r1, r2, r1\n    str r1, [r0, #4]\n    ldr r0, _0222C2E4 ; =0x00003060\n    ldr r0, [r4, r0]\n    bl Sprite_GetDrawFlag\n    cmp r0, #0\n    bne _0222C2D0\n    ldr r0, _0222C2E4 ; =0x00003060\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    b _0222C2D0\n    mov r0, #7\n    str r0, [r4]\n    add r0, r4, #0\n    bl ov74_0222B1F4\n    add r0, r4, #0\n    bl ov74_0222B30C\n    add r0, r4, #0\n    bl ov74_0222B760\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    b _0222C2D0\n    mov r5, #0\n    ldr r0, _0222C2E8 ; =0x00001850\n    mov r6, #1\n    add r2, r5, #0\n    add r3, r4, #0\n    add r7, r5, #0\n    ldr r1, [r3, r0]\n    cmp r1, #0\n    beq _0222C238\n    add r5, r5, #1\n    b _0222C23A\n    add r6, r7, #0\n    add r2, r2, #1\n    add r3, #0x4c\n    cmp r2, #0x50\n    blt _0222C22E\n    cmp r5, #7\n    ble _0222C250\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov74_0222BF2C\n    cmp r5, #0x32\n    ble _0222C260\n    ldr r0, _0222C2E4 ; =0x00003060\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    b _0222C27E\n    cmp r5, #0x1e\n    ble _0222C270\n    ldr r0, _0222C2E4 ; =0x00003060\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl Sprite_TryChangeAnimSeq\n    b _0222C27E\n    cmp r5, #7\n    ble _0222C27E\n    ldr r0, _0222C2E4 ; =0x00003060\n    mov r1, #3\n    ldr r0, [r4, r0]\n    bl Sprite_TryChangeAnimSeq\n    cmp r6, #0\n    beq _0222C2D0\n    mov r0, #8\n    str r0, [r4]\n    add r0, r4, #0\n    bl ov74_0222B374\n    add r0, r4, #0\n    bl ov74_0222B20C\n    b _0222C2D0\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #1\n    bl ov74_0222BF2C\n    cmp r0, #0\n    beq _0222C2D0\n    mov r0, #9\n    str r0, [r4]\n    b _0222C2D0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #2\n    bl ov74_0222BF2C\n    cmp r0, #0\n    beq _0222C2D0\n    mov r0, #0xff\n    str r0, [r4]\n    b _0222C2D0\n    ldr r1, _0222C2DC ; =0x000030A0\n    mov r2, #0\n    ldr r1, [r4, r1]\n    str r2, [r1]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl ov74_0222B224\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222C2D8: .word 0x00003014\n    _0222C2DC: .word 0x000030A0\n    _0222C2E0: .word SEQ_SE_DP_SAVE\n    _0222C2E4: .word 0x00003060\n    _0222C2E8: .word 0x00001850"
    );
    #endif
}

void ov74_0222C2EC(void) {
    /* Original at 0x0222C2EC */
    /* Requires manual decompilation - 1074 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl CTRDG_IsExisting\n    ldr r0, _0222C640 ; =0x000005C8\n    ldr r0, [r4, r0]\n    cmp r0, #0x1d\n    beq _0222C30C\n    add r0, r4, #0\n    bl ov74_0222CE10\n    ldr r3, [r5]\n    cmp r3, #0x3a\n    bls _0222C316\n    bl _0222CD3A\n    add r0, r3, r3\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222C322: ; jump table\n    mov r0, #0x54\n    bl ov74_022352A0\n    ldr r0, _0222C644 ; =0x000015D8\n    str r5, [r4, r0]\n    mov r0, #1\n    str r0, [r5]\n    bl _0222CD3A\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov74_0222AB70\n    add r0, r4, #0\n    bl ov74_02229F04\n    mov r0, #1\n    mov r1, #3\n    add r2, r5, #0\n    mov r3, #2\n    bl ov74_0223539C\n    bl _0222CD3A\n    add r0, r5, #0\n    bl ov74_022353FC\n    bl _0222CD3A\n    ldr r2, _0222C648 ; =ov74_0222A6C0\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov74_0222AB0C\n    bl _0222CD3A\n    ldr r2, _0222C64C ; =ov74_0222A5AC\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov74_0222AB0C\n    bl _0222CD3A\n    ldr r2, _0222C650 ; =ov74_0222A2A4\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov74_0222AB0C\n    bl _0222CD3A\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov74_0222AC1C\n    bl _0222CD3A\n    add r0, r4, #0\n    bl ov74_0222CEE0\n    ldr r0, _0222C654 ; =ov74_0223D0A8\n    ldr r0, [r0, #0x10]\n    cmp r0, #0x2d\n    bne _0222C4A0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    add r0, r6, #0\n    bl ov74_0222A078\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x8c\n    bl ov74_0222FD98\n    add r1, r4, #0\n    add r1, #0x80\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _0222C44C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    mov r0, #0x31\n    str r0, [r5]\n    b _0222C4A0\n    add r0, r4, #0\n    add r0, #0x58\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _0222C47A\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0x1a\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r2, #0\n    mov r0, #0x71\n    add r1, r4, #0\n    str r2, [sp, #0xc]\n    lsl r0, r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, #0x58\n    mov r3, #3\n    bl AddWindowParameterized\n    bl ov74_02236988\n    add r1, r4, #0\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, #0x58\n    bl ov74_0222AAAC\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #4\n    bl ov74_0222AA18\n    add r0, r6, #0\n    bl ov74_0222A43C\n    mov r0, #0x1f\n    str r0, [r5]\n    ldr r0, _0222C654 ; =ov74_0223D0A8\n    ldr r0, [r0, #0x10]\n    sub r0, #0x2e\n    cmp r0, #1\n    bls _0222C4AE\n    bl _0222CD3A\n    bl ov74_0222CEC0\n    mov r0, #0x11\n    str r0, [r5]\n    bl _0222CD3A\n    ldr r2, _0222C658 ; =ov74_0222A538\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov74_0222AB0C\n    add r0, r4, #0\n    bl ov74_0222CEE0\n    bl _0222CD3A\n    add r0, r6, #0\n    bl ov74_0222A078\n    add r7, r0, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_02229E28\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_02229F28\n    add r0, r7, #0\n    bl ov74_0222A0E4\n    cmp r0, #1\n    bne _0222C53A\n    add r0, r6, #0\n    bl ov74_0222A174\n    ldr r0, _0222C65C ; =0x000029F4\n    mov r1, #1\n    str r1, [r4, r0]\n    add r0, r4, #0\n    sub r1, r1, #2\n    bl ov74_02229F28\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ov74_02229F60\n    ldr r1, _0222C660 ; =0x000030A4\n    mov r0, #0x54\n    bl Heap_Alloc\n    ldr r2, _0222C660 ; =0x000030A4\n    mov r1, #0\n    add r6, r0, #0\n    bl memset\n    ldr r0, _0222C65C ; =0x000029F4\n    add r1, r4, r0\n    ldr r0, _0222C664 ; =0x000030A0\n    str r1, [r6, r0]\n    bl ov74_02235708\n    str r0, [r6, #0xc]\n    ldr r0, _0222C668 ; =ov74_0222C04C\n    add r1, r6, #0\n    mov r2, #5\n    bl SysTask_CreateOnMainQueue\n    b _0222C548\n    ldr r0, [r4]\n    add r1, r7, #0\n    bl ov74_02235DC4\n    add r0, r6, #0\n    bl ov74_0222A174\n    mov r0, #0x22\n    str r0, [r5]\n    b _0222CD3A\n    ldr r0, _0222C65C ; =0x000029F4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0222C5DC\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #8\n    mov r3, #0x38\n    bl ov74_0222ADBC\n    str r0, [r5]\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    b _0222CD3A\n    bl ov74_0223615C\n    add r7, r0, #0\n    cmp r7, #4\n    bne _0222C57E\n    bl ov74_02236128\n    cmp r7, #2\n    bne _0222C5D8\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov74_02229F28\n    add r0, r4, #0\n    add r0, #0x18\n    mov r1, #0\n    bl ov74_02229F78\n    ldr r0, [r4]\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r6, r4, #0\n    add r6, #0xdc\n    add r0, r6, #0\n    bl ov74_0222A0E4\n    cmp r0, #1\n    bne _0222C5CC\n    ldr r0, [r4]\n    add r1, r6, #0\n    bl ov74_02235DC4\n    ldr r0, _0222C65C ; =0x000029F4\n    mov r1, #2\n    str r1, [r4, r0]\n    b _0222C5D2\n    ldr r0, _0222C66C ; =SEQ_SE_DP_UG_020\n    bl PlaySE\n    mov r0, #0x23\n    str r0, [r5]\n    b _0222CD3A\n    cmp r7, #3\n    beq _0222C5DE\n    b _0222CD3A\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov74_02229F28\n    add r0, r4, #0\n    add r0, #0xda\n    ldrb r1, [r0]\n    mov r0, #4\n    mov r2, #0x1b\n    bic r1, r0\n    add r0, r4, #0\n    add r0, #0xda\n    strb r1, [r0]\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r3, #0x38\n    bl ov74_0222ADBC\n    str r0, [r5]\n    b _0222CD3A\n    add r0, r4, #0\n    bl ov74_0222CEE0\n    ldr r0, _0222C654 ; =ov74_0223D0A8\n    ldr r1, [r0, #0x10]\n    add r0, r1, #0\n    sub r0, #0x2d\n    cmp r0, #2\n    bhi _0222C704\n    cmp r1, #0x2f\n    bne _0222C62C\n    bl ov74_0222CEC0\n    add r0, r6, #0\n    bl ov74_0222A494\n    str r0, [r5]\n    b _0222CD3A\n    add r0, r4, #0\n    bl ov74_02229D6C\n    ldr r1, _0222C670 ; =0x00000438\n    b _0222C674\n    _0222C640: .word 0x000005C8\n    _0222C644: .word 0x000015D8\n    _0222C648: .word ov74_0222A6C0\n    _0222C64C: .word ov74_0222A5AC\n    _0222C650: .word ov74_0222A2A4\n    _0222C654: .word ov74_0223D0A8\n    _0222C658: .word ov74_0222A538\n    _0222C65C: .word 0x000029F4\n    _0222C660: .word 0x000030A4\n    _0222C664: .word 0x000030A0\n    _0222C668: .word ov74_0222C04C\n    _0222C66C: .word SEQ_SE_DP_UG_020\n    _0222C670: .word 0x00000438\n    str r0, [r4, r1]\n    mov r0, #0\n    ldr r1, [r4, r1]\n    mvn r0, r0\n    cmp r1, r0\n    beq _0222C6EC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x8c\n    bl ov74_0222FD98\n    add r1, r4, #0\n    add r1, #0x80\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0x58\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _0222C6C6\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0x1a\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r2, #0\n    mov r0, #0x71\n    add r1, r4, #0\n    str r2, [sp, #0xc]\n    lsl r0, r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, #0x58\n    mov r3, #3\n    bl AddWindowParameterized\n    add r1, r4, #0\n    add r2, r4, #0\n    add r0, r6, #0\n    add r1, #0x58\n    add r2, #0x8c\n    bl ov74_0222AAAC\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #4\n    bl ov74_0222AA18\n    add r0, r6, #0\n    mov r1, #0\n    bl ov74_0222A240\n    mov r0, #8\n    str r0, [r5]\n    ldr r0, _0222CA14 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    bne _0222C706\n    ldr r0, _0222CA18 ; =0x00000434\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222C706\n    b _0222CD3A\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    bl ov74_02229DF8\n    bl sub_0203A914\n    mov r0, #0x11\n    str r0, [r5]\n    b _0222CD3A\n    ldr r2, _0222CA1C ; =ov74_0222A494\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov74_0222AB0C\n    b _0222CD3A\n    bl sub_0203769C\n    add r7, r0, #0\n    beq _0222C780\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _0222C780\n    mov r0, #0xab\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0222C7B0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020398D4\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #7\n    bl ov74_0222AA18\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_02229F28\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_02229E28\n    mov r1, #0x96\n    ldr r0, _0222CA18 ; =0x00000434\n    lsl r1, r1, #2\n    str r1, [r4, r0]\n    mov r0, #0xa\n    str r0, [r5]\n    b _0222C7B0\n    cmp r7, #0\n    beq _0222C7B0\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    bne _0222C7B0\n    bl ov74_02229DF8\n    bl sub_0203A914\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov74_02229F28\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    mov r0, #0x10\n    str r0, [r5]\n    b _0222CD3A\n    ldr r0, _0222CA14 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    bne _0222C7C8\n    ldr r0, _0222CA18 ; =0x00000434\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0222C8B8\n    bl ov74_02229DF8\n    bl sub_0203A914\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov74_02229F28\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    mov r0, #0x11\n    str r0, [r5]\n    b _0222CD3A\n    bl ov74_02229DBC\n    cmp r0, #0\n    beq _0222C7F4\n    mov r0, #0xb\n    str r0, [r5]\n    bl sub_0203769C\n    ldr r1, _0222CA14 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #2\n    tst r1, r2\n    bne _0222C820\n    ldr r1, _0222CA18 ; =0x00000434\n    ldr r2, [r4, r1]\n    sub r2, r2, #1\n    str r2, [r4, r1]\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    beq _0222C820\n    cmp r0, #0\n    beq _0222C8B8\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    bne _0222C8B8\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    bl ov74_02229DF8\n    bl sub_0203A914\n    mov r0, #0x11\n    str r0, [r5]\n    b _0222CD3A\n    add r0, r6, #0\n    bl ov74_0222A078\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl ov74_02235DC4\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_020398D4\n    add r0, r6, #0\n    bl ov74_0222A174\n    mov r0, #0xc\n    str r0, [r5]\n    b _0222CD3A\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0222C896\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    bne _0222C896\n    bl ov74_02229DF8\n    ldr r0, _0222CA20 ; =0x000029EC\n    mov r1, #1\n    str r1, [r4, r0]\n    bl ov74_02236140\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    bl sub_0203A914\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov74_02229F28\n    mov r0, #0xe\n    str r0, [r5]\n    b _0222CD3A\n    bl ov74_0223615C\n    cmp r0, #4\n    bne _0222C8B0\n    mov r0, #0x93\n    bl sub_02037AC0\n    mov r0, #0xd\n    str r0, [r5]\n    ldr r0, _0222CA24 ; =0x0000043C\n    mov r1, #0x78\n    str r1, [r4, r0]\n    b _0222CD3A\n    bl ov74_0223615C\n    cmp r0, #3\n    beq _0222C8BA\n    b _0222CD3A\n    bl ov74_02236140\n    add r0, r4, #0\n    add r0, #0xda\n    ldrb r1, [r0]\n    mov r0, #4\n    bic r1, r0\n    add r0, r4, #0\n    add r0, #0xda\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #0x1b\n    mov r3, #0x38\n    bl ov74_0222ADBC\n    str r0, [r5]\n    b _0222CD3A\n    mov r0, #0x93\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0222C902\n    bl ov74_02236128\n    ldr r0, _0222CA24 ; =0x0000043C\n    mov r1, #0xa\n    str r1, [r4, r0]\n    mov r0, #0xf\n    str r0, [r5]\n    b _0222CD3A\n    ldr r0, _0222CA24 ; =0x0000043C\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0222CA0C\n    bl ov74_02236140\n    add r0, r4, #0\n    add r0, #0xda\n    ldrb r1, [r0]\n    mov r0, #4\n    bic r1, r0\n    add r0, r4, #0\n    add r0, #0xda\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #0x1b\n    mov r3, #0x38\n    bl ov74_0222ADBC\n    str r0, [r5]\n    b _0222CD3A\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ov74_02229F60\n    add r0, r4, #0\n    add r0, #0xda\n    ldrb r1, [r0]\n    mov r0, #4\n    mov r2, #0x1d\n    bic r1, r0\n    add r0, r4, #0\n    add r0, #0xda\n    strb r1, [r0]\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r3, #0x38\n    bl ov74_0222ADBC\n    str r0, [r5]\n    b _0222CD3A\n    ldr r0, _0222CA24 ; =0x0000043C\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0222CA0C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    bl ov74_02229DF8\n    bl sub_0203A914\n    ldr r0, _0222CA28 ; =SEQ_SE_DP_UG_020\n    bl PlaySE\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov74_02229F28\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #8\n    mov r3, #0x38\n    bl ov74_0222ADBC\n    str r0, [r5]\n    b _0222CD3A\n    ldr r0, _0222CA2C ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #0x19\n    bl ov74_0222AA18\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ov74_02229F60\n    mov r0, #0x12\n    str r0, [r5]\n    b _0222CD3A\n    ldr r0, _0222CA30 ; =0x000015DC\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0222C9DA\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    b _0222CD3A\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    ldr r0, _0222CA2C ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #0x18\n    bl ov74_0222AA18\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ov74_02229F60\n    mov r0, #0x12\n    str r0, [r5]\n    b _0222CD3A\n    ldr r0, _0222CA14 ; =gSystem\n    ldr r0, [r0, #0x48]\n    cmp r0, #0\n    bne _0222CA0E\n    b _0222CD3A\n    ldr r0, _0222CA2C ; =SEQ_SE_DP_SELECT\n    b _0222CA34\n    nop\n    _0222CA14: .word gSystem\n    _0222CA18: .word 0x00000434\n    _0222CA1C: .word ov74_0222A494\n    _0222CA20: .word 0x000029EC\n    _0222CA24: .word 0x0000043C\n    _0222CA28: .word SEQ_SE_DP_UG_020\n    _0222CA2C: .word SEQ_SE_DP_SELECT\n    _0222CA30: .word 0x000015DC\n    bl PlaySE\n    add r0, r6, #0\n    mov r1, #0xc4\n    mov r2, #0\n    bl ov74_0222A94C\n    mov r0, #3\n    str r0, [r5]\n    b _0222CD3A\n    ldr r0, _0222CD54 ; =0x000015DC\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0222CA56\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    b _0222CD3A\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    cmp r0, #0x1b\n    beq _0222CA6C\n    add r0, r4, #0\n    mov r1, #0xea\n    add r0, #0x8c\n    lsl r1, r1, #2\n    bl ov74_02235258\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x8c\n    bl ov74_0222FD98\n    add r1, r4, #0\n    add r1, #0x80\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _0222CA94\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    mov r0, #0x31\n    str r0, [r5]\n    b _0222CD3A\n    add r0, r4, #0\n    add r0, #0x58\n    bl WindowIsInUse\n    cmp r0, #0\n    bne _0222CAC2\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0x1a\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r2, #0\n    mov r0, #0x71\n    add r1, r4, #0\n    str r2, [sp, #0xc]\n    lsl r0, r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, #0x58\n    mov r3, #3\n    bl AddWindowParameterized\n    add r1, r4, #0\n    add r2, r4, #0\n    add r0, r6, #0\n    add r1, #0x58\n    add r2, #0x8c\n    bl ov74_0222AAAC\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #4\n    bl ov74_0222AA18\n    add r0, r6, #0\n    mov r1, #0\n    bl ov74_0222A240\n    mov r0, #0x14\n    str r0, [r5]\n    b _0222CD3A\n    ldr r2, _0222CD58 ; =ov74_0222A494\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov74_0222AB0C\n    b _0222CD3A\n    mov r0, #0x16\n    str r0, [r5]\n    b _0222CD3A\n    add r0, r6, #0\n    bl ov74_0222A078\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl ov74_02235DC4\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #7\n    bl ov74_0222AA18\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_02229F28\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_02229E28\n    ldr r0, _0222CD5C ; =0x0000043C\n    mov r1, #0x3c\n    str r1, [r4, r0]\n    mov r0, #0x17\n    str r0, [r5]\n    b _0222CD3A\n    ldr r0, _0222CD5C ; =0x0000043C\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0222CC18\n    add r0, r6, #0\n    bl ov74_0222A174\n    mov r0, #0x18\n    str r0, [r5]\n    b _0222CD3A\n    bl ov74_0223615C\n    cmp r0, #4\n    bne _0222CB58\n    bl ov74_02236128\n    bl ov74_0223615C\n    cmp r0, #2\n    bne _0222CB90\n    ldr r0, _0222CD5C ; =0x0000043C\n    mov r1, #1\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02229E28\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov74_02229F28\n    ldr r0, _0222CD60 ; =SEQ_SE_DP_UG_020\n    bl PlaySE\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r2, #8\n    mov r3, #0x19\n    bl ov74_0222ADBC\n    str r0, [r5]\n    b _0222CD3A\n    bl ov74_0223615C\n    cmp r0, #3\n    bne _0222CC18\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl ov74_02229F28\n    add r0, r4, #0\n    add r0, #0xda\n    ldrb r1, [r0]\n    mov r0, #4\n    mov r2, #0x1b\n    bic r1, r0\n    add r0, r4, #0\n    add r0, #0xda\n    strb r1, [r0]\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x18\n    mov r3, #0x38\n    bl ov74_0222ADBC\n    str r0, [r5]\n    b _0222CD3A\n    ldr r0, _0222CD5C ; =0x0000043C\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    bne _0222CC18\n    mov r1, #1\n    lsl r1, r1, #0x10\n    str r1, [r4, r0]\n    mov r0, #0x38\n    str r0, [r5]\n    b _0222CD3A\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #5\n    beq _0222CBEE\n    add r0, r4, #0\n    bl ov74_0222AE3C\n    add r0, r6, #0\n    bl ov74_0222AD6C\n    str r0, [r5]\n    add r0, r4, #0\n    add r0, #0x48\n    mov r1, #0\n    bl ov74_02229F60\n    b _0222CD3A\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r1, #0\n    bl ov74_0222ADBC\n    str r0, [r5]\n    b _0222CD3A\n    ldr r0, _0222CD64 ; =gSystem\n    ldr r0, [r0, #0x48]\n    cmp r0, #0\n    bne _0222CC1A\n    b _0222CD3A\n    add r0, r4, #0\n    add r0, #0x58\n    mov r1, #0\n    bl ov74_02229F60\n    add r0, r6, #0\n    bl ov74_0222A5AC\n    str r0, [r5]\n    b _0222CD3A\n    add r0, r6, #0\n    mov r1, #1\n    bl ov74_0222A240\n    mov r0, #8\n    str r0, [r5]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x80\n    str r1, [r0]\n    b _0222CD3A\n    add r0, r6, #0\n    bl ov74_02229E68\n    mov r0, #0x11\n    mov r1, #0\n    lsl r0, r0, #6\n    str r1, [r4, r0]\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov74_02229E68\n    mov r1, #0x11\n    mov r0, #1\n    lsl r1, r1, #6\n    add sp, #0x14\n    str r0, [r4, r1]\n    pop {r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov74_02229E68\n    mov r0, #0x11\n    mov r1, #2\n    lsl r0, r0, #6\n    str r1, [r4, r0]\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, _0222CD64 ; =gSystem\n    ldr r0, [r0, #0x48]\n    cmp r0, #0\n    beq _0222CD3A\n    ldr r0, _0222CD68 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0xda\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0222CCAA\n    ldr r2, _0222CD6C ; =0x000015D8\n    mov r0, #0\n    ldr r2, [r4, r2]\n    mov r1, #0x39\n    mov r3, #2\n    bl ov74_0223539C\n    b _0222CD3A\n    mov r0, #1\n    bl ov74_02235390\n    ldr r2, _0222CD6C ; =0x000015D8\n    mov r0, #0\n    ldr r2, [r4, r2]\n    mov r1, #0x3a\n    mov r3, #2\n    bl ov74_0223539C\n    b _0222CD3A\n    ldr r0, [r4]\n    bl ov74_0222A7A0\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    add r0, #0xda\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0222CD08\n    add r0, r4, #0\n    add r0, #0xdc\n    ldrh r0, [r0]\n    cmp r0, #3\n    bne _0222CD08\n    add r0, r4, #0\n    add r0, #0xe0\n    ldr r1, [r0]\n    ldr r0, _0222CD70 ; =0x00000215\n    cmp r1, r0\n    bne _0222CD08\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0xdc\n    mov r2, #0x54\n    bl ov74_0222FC50\n    b _0222CD14\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0xdc\n    mov r2, #0x54\n    bl ov74_0222EC08\n    ldr r2, _0222CD6C ; =0x000015D8\n    mov r0, #1\n    ldr r2, [r4, r2]\n    mov r1, #0x38\n    mov r3, #2\n    bl ov74_0223539C\n    add r0, r4, #0\n    add r0, #0xda\n    ldrb r1, [r0]\n    mov r0, #4\n    bic r1, r0\n    add r0, r4, #0\n    add r0, #0xda\n    strb r1, [r0]\n    b _0222CD3A\n    mov r0, #0\n    bl OS_ResetSystem\n    ldr r0, _0222CD74 ; =0x000029E8\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0222CD46\n    add r0, r4, #0\n    blx r1\n    ldr r0, _0222CD78 ; =0x000029F4\n    ldr r0, [r4, r0]\n    bl ov74_022358C8\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0222CD54: .word 0x000015DC\n    _0222CD58: .word ov74_0222A494\n    _0222CD5C: .word 0x0000043C\n    _0222CD60: .word SEQ_SE_DP_UG_020\n    _0222CD64: .word gSystem\n    _0222CD68: .word SEQ_SE_DP_SELECT\n    _0222CD6C: .word 0x000015D8\n    _0222CD70: .word 0x00000215\n    _0222CD74: .word 0x000029E8\n    _0222CD78: .word 0x000029F4"
    );
    #endif
}

void ov74_0222CD7C(void) {
    /* Original at 0x0222CD7C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0222CD84 ; =ov74_0223D0A8\n    ldr r0, [r0]\n    bx lr\n    nop\n    _0222CD84: .word ov74_0223D0A8"
    );
    #endif
}

void ov74_0222CD88(void) {
    /* Original at 0x0222CD88 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0222CD90 ; =ov74_0223D0A8\n    str r0, [r1]\n    bx lr\n    nop\n    _0222CD90: .word ov74_0223D0A8"
    );
    #endif
}

void ov74_0222CD94(void) {
    /* Original at 0x0222CD94 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    mov r0, #0x11\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0222CDB2\n    ldr r0, _0222CDF8 ; =FS_OVERLAY_ID(intro_title)\n    ldr r1, _0222CDFC ; =gApplication_TitleScreen\n    bl RegisterMainOverlay\n    b _0222CDCC\n    cmp r0, #1\n    bne _0222CDC0\n    ldr r0, _0222CE00 ; =FS_OVERLAY_ID(OVY_74)\n    ldr r1, _0222CE04 ; =_0223B410\n    bl RegisterMainOverlay\n    b _0222CDCC\n    cmp r0, #2\n    bne _0222CDCC\n    ldr r0, _0222CE00 ; =FS_OVERLAY_ID(OVY_74)\n    ldr r1, _0222CE08 ; =_0223B420\n    bl RegisterMainOverlay\n    mov r0, #0x59\n    bl Heap_Destroy\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x54\n    bl Heap_Destroy\n    ldr r0, _0222CE0C ; =0x000015D4\n    ldr r0, [r4, r0]\n    cmp r0, #2\n    bne _0222CDEC\n    mov r0, #0\n    bl sub_0201A4B0\n    mov r0, #0\n    bl ov74_02236034\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _0222CDF8: .word FS_OVERLAY_ID(intro_title)\n    _0222CDFC: .word gApplication_TitleScreen\n    _0222CE00: .word FS_OVERLAY_ID(OVY_74)\n    _0222CE04: .word _0223B410\n    _0222CE08: .word _0223B420\n    _0222CE0C: .word 0x000015D4"
    );
    #endif
}

void ov74_0222CE10(void) {
    /* Original at 0x0222CE10 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222CE64 ; =0x000005C8\n    ldr r0, [r4, r0]\n    cmp r0, #0x1c\n    beq _0222CE26\n    cmp r0, #0x1d\n    beq _0222CE62\n    cmp r0, #0x1e\n    beq _0222CE3A\n    pop {r4, pc}\n    ldr r0, [r4, #4]\n    bl sub_02038D28\n    ldr r0, _0222CE68 ; =0x000005CC\n    mov r1, #0x78\n    str r1, [r4, r0]\n    mov r1, #0x1e\n    sub r0, r0, #4\n    str r1, [r4, r0]\n    pop {r4, pc}\n    bl sub_02038D80\n    mov r1, #1\n    tst r0, r1\n    beq _0222CE4A\n    mov r0, #0x5d\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, _0222CE68 ; =0x000005CC\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0222CE62\n    bl sub_02038D64\n    ldr r0, _0222CE64 ; =0x000005C8\n    mov r1, #0x1d\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _0222CE64: .word 0x000005C8\n    _0222CE68: .word 0x000005CC"
    );
    #endif
}

void ov74_0222CE6C(void) {
    /* Original at 0x0222CE6C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #4\n    bhi _0222CEB8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222CE7C: ; jump table\n    ldr r0, _0222CEBC ; =ov74_0223D0A8\n    mov r1, #0x28\n    str r1, [r0, #0x10]\n    bx lr\n    ldr r0, _0222CEBC ; =ov74_0223D0A8\n    mov r1, #0x29\n    str r1, [r0, #0x10]\n    bx lr\n    ldr r0, _0222CEBC ; =ov74_0223D0A8\n    mov r1, #0x2a\n    str r1, [r0, #0x10]\n    bx lr\n    ldr r0, _0222CEBC ; =ov74_0223D0A8\n    ldr r1, [r0, #0x10]\n    cmp r1, #0x2a\n    bne _0222CEAC\n    mov r1, #0x2c\n    str r1, [r0, #0x10]\n    bx lr\n    mov r1, #0x2f\n    str r1, [r0, #0x10]\n    bx lr\n    ldr r0, _0222CEBC ; =ov74_0223D0A8\n    mov r1, #0x30\n    str r1, [r0, #0x10]\n    bx lr\n    nop\n    _0222CEBC: .word ov74_0223D0A8"
    );
    #endif
}

void ov74_0222CEC0(void) {
    /* Original at 0x0222CEC0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034DE0\n    ldr r0, _0222CEDC ; =ov74_0223D0A8\n    ldr r0, [r0, #4]\n    bl Heap_Free\n    bl sub_0203A914\n    ldr r0, _0222CEDC ; =ov74_0223D0A8\n    mov r1, #0\n    str r1, [r0, #4]\n    pop {r3, pc}\n    nop\n    _0222CEDC: .word ov74_0223D0A8"
    );
    #endif
}

void ov74_0222CEE0(void) {
    /* Original at 0x0222CEE0 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222CFEC ; =ov74_0223D0A8\n    ldr r0, [r0, #0x10]\n    cmp r0, #0x2c\n    bne _0222CF06\n    bl ov74_0222CEC0\n    bl ov74_022368D4\n    cmp r0, #0\n    beq _0222CF00\n    ldr r0, _0222CFEC ; =ov74_0223D0A8\n    mov r1, #0x2d\n    str r1, [r0, #0x10]\n    b _0222CF06\n    ldr r0, _0222CFEC ; =ov74_0223D0A8\n    mov r1, #0x2e\n    str r1, [r0, #0x10]\n    ldr r0, _0222CFEC ; =ov74_0223D0A8\n    ldr r0, [r0, #0x10]\n    cmp r0, #0x25\n    beq _0222CF22\n    cmp r0, #0x26\n    beq _0222CF22\n    cmp r0, #0x27\n    beq _0222CF22\n    cmp r0, #0x28\n    beq _0222CF22\n    cmp r0, #0x29\n    beq _0222CF22\n    cmp r0, #0x2b\n    bne _0222CF2E\n    bl WM_GetLinkLevel\n    mov r1, #3\n    sub r0, r1, r0\n    bl sub_0203A930\n    ldr r1, _0222CFEC ; =ov74_0223D0A8\n    ldr r0, [r1, #0x10]\n    sub r0, #0x25\n    cmp r0, #0xb\n    bhi _0222CFA8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222CF44: ; jump table\n    bl sub_02034D8C\n    ldr r0, _0222CFEC ; =ov74_0223D0A8\n    mov r1, #0x26\n    str r1, [r0, #0x10]\n    b _0222CFA8\n    bl sub_02034DB8\n    cmp r0, #1\n    bne _0222CFA8\n    ldr r0, _0222CFEC ; =ov74_0223D0A8\n    mov r1, #0\n    str r1, [r0, #0xc]\n    bl ov74_02236980\n    add r1, r0, #0\n    mov r0, #0x54\n    bl Heap_Alloc\n    add r2, r0, #0\n    ldr r0, _0222CFEC ; =ov74_0223D0A8\n    ldr r1, _0222CFF0 ; =ov74_0222CE6C\n    str r2, [r0, #4]\n    ldr r0, _0222CFF4 ; =0x000005D4\n    add r0, r4, r0\n    bl ov74_02236680\n    ldr r0, _0222CFEC ; =ov74_0223D0A8\n    mov r1, #0x27\n    str r1, [r0, #0x10]\n    bl sub_0203A880\n    b _0222CFA8\n    ldr r0, [r1, #0xc]\n    add r0, r0, #1\n    str r0, [r1, #0xc]\n    b _0222CFA8\n    pop {r4, pc}\n    ldr r0, _0222CFF8 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _0222CFE8\n    ldr r0, _0222CFEC ; =ov74_0223D0A8\n    ldr r0, [r0, #0x10]\n    sub r0, #0x28\n    cmp r0, #8\n    bhi _0222CFE8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222CFC8: ; jump table\n    bl ov74_022365FC\n    cmp r0, #0\n    beq _0222CFE8\n    ldr r0, _0222CFEC ; =ov74_0223D0A8\n    mov r1, #0x2b\n    str r1, [r0, #0x10]\n    pop {r4, pc}\n    nop\n    _0222CFEC: .word ov74_0223D0A8\n    _0222CFF0: .word ov74_0222CE6C\n    _0222CFF4: .word 0x000005D4\n    _0222CFF8: .word gSystem"
    );
    #endif
}

void ov74_0222CFFC(void) {
    /* Original at 0x0222CFFC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #8\n    bl ov74_0222D024\n    bl ov74_0223563C\n    bl ov74_02235690\n    mov r0, #0x11\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #0x13\n    mov r2, #0x10\n    mov r3, #0x12\n    bl ov74_02235728\n    add sp, #8\n    pop {r3, pc}"
    );
    #endif
}

void ov74_0222D024(void) {
    /* Original at 0x0222D024 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222D088 ; =0x00002DC4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222D034\n    bl Sprite_Delete\n    ldr r0, _0222D08C ; =0x00002DC8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222D040\n    bl Sprite_Delete\n    ldr r0, _0222D08C ; =0x00002DC8\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r2, [r4, r0]\n    sub r1, r0, #4\n    str r2, [r4, r1]\n    add r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222D058\n    bl Sprite_Delete\n    ldr r0, _0222D090 ; =0x00002DD0\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222D064\n    bl Sprite_Delete\n    ldr r0, _0222D094 ; =0x00002DD4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222D070\n    bl Sprite_Delete\n    ldr r1, _0222D094 ; =0x00002DD4\n    mov r0, #0\n    str r0, [r4, r1]\n    ldr r2, [r4, r1]\n    sub r0, r1, #4\n    str r2, [r4, r0]\n    ldr r0, [r4, r0]\n    sub r1, #8\n    str r0, [r4, r1]\n    bl ov74_022359BC\n    pop {r4, pc}\n    _0222D088: .word 0x00002DC4\n    _0222D08C: .word 0x00002DC8\n    _0222D090: .word 0x00002DD0\n    _0222D094: .word 0x00002DD4"
    );
    #endif
}

void ov74_0222D098(void) {
    /* Original at 0x0222D098 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0222D0E0 ; =0x00003D4C\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4, r1]\n    mov r1, #1\n    str r1, [sp]\n    ldr r1, _0222D0E4 ; =0x00002DC4\n    mov r2, #0x48\n    ldr r1, [r4, r1]\n    mov r3, #0xa8\n    bl ov74_02235930\n    ldr r1, _0222D0E4 ; =0x00002DC4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #2\n    bl Sprite_SetPriority\n    mov r0, #0\n    ldr r1, _0222D0E8 ; =0x00002DC8\n    str r0, [sp]\n    ldr r1, [r4, r1]\n    mov r2, #0xb8\n    mov r3, #0xa8\n    bl ov74_02235930\n    ldr r1, _0222D0E8 ; =0x00002DC8\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #2\n    bl Sprite_SetPriority\n    add sp, #4\n    pop {r3, r4, pc}\n    _0222D0E0: .word 0x00003D4C\n    _0222D0E4: .word 0x00002DC4\n    _0222D0E8: .word 0x00002DC8"
    );
    #endif
}

void ov74_0222D0EC(void) {
    /* Original at 0x0222D0EC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl WindowIsInUse\n    cmp r0, #1\n    bne _0222D102\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0200E5D4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_0222D104(void) {
    /* Original at 0x0222D104 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl WindowIsInUse\n    cmp r0, #1\n    bne _0222D11A\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ClearFrameAndWindow2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_0222D11C(void) {
    /* Original at 0x0222D11C */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    ldr r0, _0222D1C4 ; =0x00002BCC\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    add r7, r2, #0\n    str r3, [sp]\n    cmp r0, #0\n    beq _0222D134\n    bl ListMenuItems_Delete\n    ldr r0, _0222D1C8 ; =0x00002BC8\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222D144\n    mov r1, #0\n    add r2, r1, #0\n    bl DestroyListMenu\n    add r0, r7, #0\n    mov r1, #0x55\n    bl ListMenuItems_New\n    ldr r1, _0222D1C4 ; =0x00002BCC\n    mov r2, #0xf7\n    str r0, [r5, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x55\n    bl NewMsgDataFromNarc\n    ldr r1, _0222D1CC ; =0x00002A04\n    mov r6, #0\n    str r0, [r5, r1]\n    cmp r7, #0\n    ble _0222D17E\n    ldr r0, _0222D1C4 ; =0x00002BCC\n    ldr r1, _0222D1CC ; =0x00002A04\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [r4]\n    ldr r3, [r4, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r6, r6, #1\n    add r4, #8\n    cmp r6, r7\n    blt _0222D166\n    ldr r0, _0222D1CC ; =0x00002A04\n    ldr r0, [r5, r0]\n    bl DestroyMsgData\n    ldr r4, _0222D1D0 ; =ov74_0223C320\n    add r3, sp, #4\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, _0222D1C4 ; =0x00002BCC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r3, #0x55\n    str r0, [sp, #4]\n    add r0, sp, #4\n    strh r7, [r0, #0x10]\n    ldr r0, [sp]\n    str r0, [sp, #0x10]\n    add r0, r2, #0\n    ldr r2, [sp, #0x38]\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    bl ListMenuInit\n    ldr r1, _0222D1C8 ; =0x00002BC8\n    str r0, [r5, r1]\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222D1C4: .word 0x00002BCC\n    _0222D1C8: .word 0x00002BC8\n    _0222D1CC: .word 0x00002A04\n    _0222D1D0: .word ov74_0223C320"
    );
    #endif
}

void ov74_0222D1D4(void) {
    /* Original at 0x0222D1D4 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r7, r1, #0\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xf7\n    mov r3, #0x55\n    bl NewMsgDataFromNarc\n    add r4, r0, #0\n    mov r0, #0x55\n    bl MessageFormat_New\n    add r6, r0, #0\n    mov r0, #1\n    mov r1, #6\n    bl GetFontAttribute\n    add r1, r0, #0\n    add r0, r5, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    mov r3, #0x55\n    bl ReadMsgData_ExpandPlaceholders\n    add r7, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222D244 ; =0x00010200\n    mov r1, #1\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r2, r7, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl DestroyMsgData\n    add r0, r6, #0\n    bl MessageFormat_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222D244: .word 0x00010200"
    );
    #endif
}

void ov74_0222D248(void) {
    /* Original at 0x0222D248 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x55\n    mov r1, #0xf\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r2, #0\n    lsl r3, r1, #5\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x55\n    mov r3, #6\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #0x14\n    mov r2, #0\n    lsl r3, r3, #6\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x55\n    str r0, [sp, #0xc]\n    mov r0, #0x71\n    mov r1, #0x15\n    add r2, r4, #0\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x55\n    str r0, [sp, #0xc]\n    mov r0, #0x71\n    mov r1, #0x16\n    add r2, r4, #0\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0xc\n    mov r2, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    add r0, r4, #0\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov74_0222D2D4(void) {
    /* Original at 0x0222D2D4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov74_0222D448\n    ldr r0, _0222D300 ; =0x00002BD0\n    mov r1, #0x2f\n    add r0, r4, r0\n    bl ov74_0222D1D4\n    ldr r3, _0222D304 ; =0x00002BE0\n    add r0, r4, #0\n    add r1, r4, r3\n    add r3, #0x10\n    ldr r3, [r4, r3]\n    mov r2, #0xa\n    bl ov74_0222D9E0\n    mov r0, #0xe\n    pop {r4, pc}\n    nop\n    _0222D300: .word 0x00002BD0\n    _0222D304: .word 0x00002BE0"
    );
    #endif
}

void ov74_0222D308(void) {
    /* Original at 0x0222D308 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov74_0222D448\n    ldr r1, _0222D34C ; =0x00002BA0\n    ldr r0, [r4, r1]\n    add r1, #0x20\n    ldr r1, [r4, r1]\n    bl SaveMysteryGift_HasAnyGift\n    cmp r0, #1\n    ldr r0, _0222D350 ; =0x00002BD0\n    bne _0222D330\n    add r0, r4, r0\n    mov r1, #0x3f\n    bl ov74_0222D1D4\n    b _0222D338\n    add r0, r4, r0\n    mov r1, #0x3e\n    bl ov74_0222D1D4\n    ldr r3, _0222D354 ; =0x00002BE0\n    add r0, r4, #0\n    add r1, r4, r3\n    add r3, #0x10\n    ldr r3, [r4, r3]\n    mov r2, #9\n    bl ov74_0222D9E0\n    mov r0, #0xc\n    pop {r4, pc}\n    _0222D34C: .word 0x00002BA0\n    _0222D350: .word 0x00002BD0\n    _0222D354: .word 0x00002BE0"
    );
    #endif
}

void ov74_0222D358(void) {
    /* Original at 0x0222D358 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov74_0222D448\n    ldr r0, _0222D400 ; =0x00002BD0\n    mov r1, #0x40\n    add r0, r4, r0\n    bl ov74_0222D1D4\n    ldr r0, _0222D400 ; =0x00002BD0\n    mov r1, #0x13\n    add r0, r4, r0\n    bl WaitingIcon_New\n    ldr r1, _0222D404 ; =0x00003D50\n    str r0, [r4, r1]\n    ldr r1, _0222D408 ; =0x00002BA0\n    ldr r0, [r4, r1]\n    add r1, #0x20\n    ldr r1, [r4, r1]\n    bl SaveMysteryGift_HasAnyGift\n    cmp r0, #1\n    ldr r1, _0222D408 ; =0x00002BA0\n    bne _0222D39A\n    ldr r0, [r4, r1]\n    add r1, #0x20\n    ldr r1, [r4, r1]\n    bl SaveMysteryGift_ReceiveGiftAndClearCardByIndex\n    b _0222D3A4\n    ldr r0, [r4, r1]\n    add r1, #0x20\n    ldr r1, [r4, r1]\n    bl SaveMysteryGift_DeleteWonderCardByIndex\n    ldr r0, _0222D40C ; =0x00002BA4\n    ldr r0, [r4, r0]\n    bl SaveGameNormal\n    ldr r0, _0222D404 ; =0x00003D50\n    ldr r0, [r4, r0]\n    bl sub_0200F450\n    ldr r0, _0222D408 ; =0x00002BA0\n    ldr r0, [r4, r0]\n    bl SaveMysteryGift_HasAnyCard\n    cmp r0, #0\n    bne _0222D3C4\n    mov r0, #0x1b\n    pop {r4, pc}\n    mov r1, #0xaf\n    lsl r1, r1, #6\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #1\n    bl ov74_0222DAF8\n    mov r1, #0xaf\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    add r1, #0x10\n    add r0, r4, r1\n    mov r1, #0x25\n    bl ov74_0222D1D4\n    ldr r3, _0222D410 ; =0x00002BE0\n    add r0, r4, #0\n    add r1, r4, r3\n    add r3, #0x10\n    ldr r3, [r4, r3]\n    mov r2, #8\n    bl ov74_0222D9E0\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov74_0222D824\n    mov r0, #5\n    pop {r4, pc}\n    _0222D400: .word 0x00002BD0\n    _0222D404: .word 0x00003D50\n    _0222D408: .word 0x00002BA0\n    _0222D40C: .word 0x00002BA4\n    _0222D410: .word 0x00002BE0"
    );
    #endif
}

void ov74_0222D414(void) {
    /* Original at 0x0222D414 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov74_0222D448\n    ldr r0, _0222D440 ; =0x00002BD0\n    mov r1, #0x25\n    add r0, r4, r0\n    bl ov74_0222D1D4\n    ldr r3, _0222D444 ; =0x00002BE0\n    add r0, r4, #0\n    add r1, r4, r3\n    add r3, #0x10\n    ldr r3, [r4, r3]\n    mov r2, #8\n    bl ov74_0222D9E0\n    mov r0, #5\n    pop {r4, pc}\n    nop\n    _0222D440: .word 0x00002BD0\n    _0222D444: .word 0x00002BE0"
    );
    #endif
}

void ov74_0222D448(void) {
    /* Original at 0x0222D448 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222D484 ; =0x00002BCC\n    ldr r0, [r4, r0]\n    bl ListMenuItems_Delete\n    mov r1, #0\n    ldr r0, _0222D484 ; =0x00002BCC\n    add r2, r1, #0\n    str r1, [r4, r0]\n    sub r0, r0, #4\n    ldr r0, [r4, r0]\n    bl DestroyListMenu\n    ldr r0, _0222D488 ; =0x00002BC8\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, #0x18\n    add r0, r4, r0\n    bl ov74_0222D0EC\n    ldr r0, _0222D48C ; =0x00002BE0\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0222D48C ; =0x00002BE0\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}\n    _0222D484: .word 0x00002BCC\n    _0222D488: .word 0x00002BC8\n    _0222D48C: .word 0x00002BE0"
    );
    #endif
}

u8 ov74_0222D490(void) {
    return 1;
}

void ov74_0222D494(void) {
    /* Original at 0x0222D494 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r7, r1, #0\n    ldr r1, [r5]\n    mov r0, #0x25\n    add r4, r2, #0\n    bl String_New\n    mov r1, #0xaf\n    lsl r1, r1, #6\n    ldr r2, [r5, r1]\n    sub r1, #0xc\n    lsl r2, r2, #2\n    add r2, r5, r2\n    ldr r2, [r2, r1]\n    mov r1, #0x41\n    lsl r1, r1, #2\n    add r1, r2, r1\n    mov r2, #0x24\n    add r6, r0, #0\n    bl CopyU16ArrayToStringN\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    add r0, r7, #0\n    mov r1, #1\n    add r2, r6, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_0222D4E4(void) {
    /* Original at 0x0222D4E4 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    add r6, r1, #0\n    ldr r1, [r4, r0]\n    add r5, r2, #0\n    lsl r2, r1, #2\n    add r3, r4, r2\n    add r2, r0, #0\n    sub r2, #0xc\n    ldr r3, [r3, r2]\n    ldr r2, _0222D558 ; =0x00000152\n    ldrb r2, [r3, r2]\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x1f\n    bne _0222D50C\n    mov r2, #0x28\n    b _0222D522\n    sub r0, #0x20\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222D51C\n    bl SaveMysteryGift_HasAnyGift\n    cmp r0, #1\n    bne _0222D520\n    mov r2, #0x26\n    b _0222D522\n    mov r2, #0x27\n    mov r1, #0x2a\n    lsl r1, r1, #8\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r3, [r4]\n    bl ReadMsgData_ExpandPlaceholders\n    add r4, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    add r0, r6, #0\n    mov r1, #1\n    add r2, r4, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #1\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0222D558: .word 0x00000152"
    );
    #endif
}

void ov74_0222D55C(void) {
    /* Original at 0x0222D55C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    mov r1, #0xaf\n    add r4, r0, #0\n    lsl r1, r1, #6\n    ldr r2, [r4, r1]\n    sub r1, #0xc\n    lsl r2, r2, #2\n    add r2, r4, r2\n    ldr r2, [r2, r1]\n    mov r1, #0xd5\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    add r0, sp, #8\n    bl RTC_ConvertDayToDate\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x2a\n    lsl r0, r0, #8\n    mov r2, #0x7d\n    ldr r3, [sp, #8]\n    lsl r2, r2, #4\n    add r2, r3, r2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    mov r3, #4\n    bl BufferIntegerAsString\n    mov r0, #0x2a\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    ldr r2, [sp, #0xc]\n    mov r1, #1\n    bl BufferMonthNameAbbr\n    mov r1, #2\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x2a\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    ldr r2, [sp, #0x10]\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    mov r0, #1\n    add sp, #0x18\n    pop {r4, pc}"
    );
    #endif
}

void ov74_0222D5C4(void) {
    /* Original at 0x0222D5C4 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r7, r1, #0\n    mov r0, #0xfb\n    mov r1, #0x55\n    add r4, r2, #0\n    bl String_New\n    mov r1, #0xaf\n    lsl r1, r1, #6\n    ldr r2, [r5, r1]\n    sub r1, #0xc\n    lsl r2, r2, #2\n    add r2, r5, r2\n    ldr r2, [r2, r1]\n    mov r1, #0x55\n    lsl r1, r1, #2\n    add r1, r2, r1\n    mov r2, #0xfa\n    add r6, r0, #0\n    bl CopyU16ArrayToStringN\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    add r0, r7, #0\n    mov r1, #1\n    add r2, r6, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_0222D614(void) {
    /* Original at 0x0222D614 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r3, r0, #0\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    add r6, r1, #0\n    ldr r1, [r3, r0]\n    sub r0, #0xc\n    lsl r1, r1, #2\n    add r1, r3, r1\n    ldr r1, [r1, r0]\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    add r5, r2, #0\n    ldrb r2, [r1, r0]\n    cmp r2, #0xff\n    bne _0222D66C\n    mov r1, #0x2a\n    lsl r1, r1, #8\n    ldr r0, [r3, r1]\n    add r1, r1, #4\n    ldr r1, [r3, r1]\n    mov r2, #0x34\n    mov r3, #0x55\n    bl ReadMsgData_ExpandPlaceholders\n    add r4, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    add r0, r6, #0\n    mov r1, #1\n    add r2, r4, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    cmp r2, #0\n    beq _0222D68A\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x2a\n    lsl r0, r0, #8\n    ldr r0, [r3, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    add sp, #0x10\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov74_0222D690(void) {
    /* Original at 0x0222D690 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    mov r0, #0\n    add r7, r1, #0\n    add r1, r0, #1\n    ldr r0, _0222D764 ; =ov74_0223C2D0\n    ldr r2, _0222D764 ; =ov74_0223C2D0\n    ldr r0, [r0, #0x30]\n    ldr r2, [r2, #0x34]\n    str r0, [sp, #0x14]\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    str r2, [sp, #0x18]\n    ldr r2, [r5, r0]\n    sub r0, #0xc\n    lsl r2, r2, #2\n    add r2, r5, r2\n    ldr r2, [r2, r0]\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    ldrb r0, [r2, r0]\n    add r4, r1, #0\n    add r6, sp, #0x14\n    cmp r0, #0\n    beq _0222D6D6\n    ldr r0, _0222D764 ; =ov74_0223C2D0\n    ldr r2, _0222D764 ; =ov74_0223C2D0\n    ldr r0, [r0, #0x38]\n    add r4, r1, #1\n    lsl r1, r1, #3\n    ldr r2, [r2, #0x3c]\n    add r3, r6, r1\n    str r0, [r6, r1]\n    str r2, [r3, #4]\n    ldr r0, _0222D764 ; =ov74_0223C2D0\n    ldr r2, _0222D764 ; =ov74_0223C2D0\n    ldr r0, [r0, #0x40]\n    lsl r1, r4, #3\n    add r6, sp, #0x14\n    str r0, [r6, r1]\n    ldr r2, [r2, #0x44]\n    add r3, r6, r1\n    add r0, r4, #1\n    lsl r1, r0, #3\n    str r2, [r3, #4]\n    ldr r0, _0222D764 ; =ov74_0223C2D0\n    ldr r2, _0222D764 ; =ov74_0223C2D0\n    ldr r0, [r0, #0x48]\n    ldr r2, [r2, #0x4c]\n    str r0, [r6, r1]\n    add r3, r6, r1\n    ldr r0, _0222D768 ; =0x00002B9C\n    str r2, [r3, #4]\n    ldr r6, [r5, r0]\n    add r0, r7, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r7, #0\n    bl RemoveWindow\n    add r1, r4, #2\n    mov r0, #4\n    sub r0, r0, r1\n    ldr r1, [r6, #8]\n    lsl r0, r0, #1\n    add r1, r1, r0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp]\n    ldr r1, [r6, #0xc]\n    mov r2, #2\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #4]\n    ldr r1, [r6, #0x10]\n    sub r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    ldr r0, _0222D76C ; =0x00002B98\n    add r1, r7, #0\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, _0222D770 ; =0x000029FC\n    ldr r3, [r6, #4]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, sp, #0x14\n    add r2, r4, #2\n    add r3, r7, #0\n    bl ov74_0222D11C\n    mov r0, #1\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _0222D764: .word ov74_0223C2D0\n    _0222D768: .word 0x00002B9C\n    _0222D76C: .word 0x00002B98\n    _0222D770: .word 0x000029FC"
    );
    #endif
}

void ov74_0222D774(void) {
    ov74_0222D11C(1, 1, 2);
}

void ov74_0222D78C(void) {
    ov74_0222D11C(1, 0, 2);
}

void ov74_0222D7A4(void) {
    /* Original at 0x0222D7A4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0222D7C8 ; =0x00002BD0\n    add r4, r1, #0\n    add r0, r5, r0\n    mov r1, #2\n    bl ov74_0222D1D4\n    mov r0, #0\n    str r0, [sp]\n    ldr r1, _0222D7CC ; =ov74_0223C2E0\n    add r0, r5, #0\n    mov r2, #2\n    add r3, r4, #0\n    bl ov74_0222D11C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _0222D7C8: .word 0x00002BD0\n    _0222D7CC: .word ov74_0223C2E0"
    );
    #endif
}

void ov74_0222D7D0(void) {
    BufferIntegerAsString(1, 0, 0x2a, 1);
}

void ov74_0222D7F0(void) {
    /* Original at 0x0222D7F0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x55\n    str r0, [sp, #8]\n    add r6, r2, #0\n    mov r0, #0\n    add r4, r3, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    cmp r4, #0\n    beq _0222D818\n    mov r0, #0x1c\n    str r0, [r4]\n    mov r0, #0xb1\n    lsl r0, r0, #6\n    str r6, [r5, r0]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov74_0222D824(void) {
    /* Original at 0x0222D824 */
    /* Requires manual decompilation - 200 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    ldr r3, [r5]\n    str r2, [sp, #0x14]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xf7\n    ldr r4, _0222D9C8 ; =ov74_0223C340\n    bl NewMsgDataFromNarc\n    ldr r1, _0222D9CC ; =0x00002A04\n    str r0, [r5, r1]\n    ldr r0, [r5]\n    bl MessageFormat_New\n    mov r1, #0x2a\n    lsl r1, r1, #8\n    str r0, [r5, r1]\n    ldr r1, _0222D9D0 ; =0x00002BC4\n    ldr r0, [sp, #0x14]\n    str r0, [r5, r1]\n    ldr r1, [sp, #0x14]\n    add r0, r5, #0\n    bl ov74_0222DB70\n    mov r0, #0\n    str r0, [sp, #0x30]\n    ldr r0, _0222D9D4 ; =0x00002A08\n    add r7, r4, #0\n    str r5, [sp, #0x1c]\n    add r6, r5, r0\n    ldr r1, [r7]\n    ldr r0, [sp, #0x14]\n    cmp r0, r1\n    beq _0222D886\n    cmp r1, #2\n    beq _0222D886\n    ldr r1, [sp, #0x1c]\n    ldr r0, _0222D9D4 ; =0x00002A08\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0222D886\n    add r0, r6, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r6, #0\n    bl RemoveWindow\n    ldr r0, [sp, #0x1c]\n    add r7, #0x30\n    add r0, #0x10\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x30]\n    add r6, #0x10\n    add r0, r0, #1\n    str r0, [sp, #0x30]\n    cmp r0, #0x13\n    blo _0222D864\n    mov r0, #0x31\n    str r0, [sp, #0x2c]\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, _0222D9D4 ; =0x00002A08\n    str r5, [sp, #0x24]\n    str r5, [sp, #0x20]\n    add r6, r5, r0\n    ldr r1, [r4]\n    ldr r0, [sp, #0x14]\n    cmp r0, r1\n    bne _0222D98A\n    ldr r1, [sp, #0x24]\n    ldr r0, _0222D9D4 ; =0x00002A08\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _0222D8FA\n    ldr r2, [sp, #0x2c]\n    ldr r1, [sp, #0x20]\n    ldr r0, _0222D9D8 ; =0x00002B48\n    str r2, [r1, r0]\n    ldr r0, [r4, #8]\n    add r1, r6, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [r4, #0xc]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    add r0, r2, #0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, _0222D9DC ; =0x000029FC\n    ldr r3, [r4, #4]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x18\n    mov r2, #0\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #0x14]\n    ldr r1, [r4, #0x1c]\n    lsl r0, r0, #0x18\n    lsl r1, r1, #0x18\n    lsr r0, r0, #0x18\n    lsr r1, r1, #0x18\n    bl GetFontAttribute\n    add r1, r0, #0\n    add r0, r6, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #0x18]\n    ldr r3, [r4, #0x24]\n    str r0, [sp, #0x28]\n    ldr r2, [sp, #0x28]\n    add r0, r5, #0\n    add r1, r6, #0\n    blx r3\n    cmp r0, #1\n    bne _0222D976\n    ldr r2, [r4, #0x20]\n    cmp r2, #0\n    beq _0222D976\n    mov r0, #0x2a\n    ldr r1, _0222D9CC ; =0x00002A04\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r3, [r5]\n    bl ReadMsgData_ExpandPlaceholders\n    add r7, r0, #0\n    mov r0, #0\n    ldr r3, [r4, #0x28]\n    mvn r0, r0\n    cmp r3, r0\n    bne _0222D956\n    ldr r3, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    add r1, r7, #0\n    mov r2, #0\n    lsl r3, r3, #3\n    bl FontID_String_GetCenterAlignmentX\n    add r3, r0, #0\n    ldr r0, [r4, #0x2c]\n    add r2, r7, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r1, [r4, #0x14]\n    add r0, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl CopyWindowToVram\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp, #0x2c]\n    add r0, r0, r2\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x24]\n    add r4, #0x30\n    add r0, #0x10\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x20]\n    add r6, #0x10\n    add r0, r0, #4\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #0x13\n    blo _0222D8AA\n    ldr r0, _0222D9CC ; =0x00002A04\n    ldr r0, [r5, r0]\n    bl DestroyMsgData\n    mov r0, #0x2a\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    bl MessageFormat_Delete\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    bne _0222D9C2\n    add r0, r5, #0\n    bl ov74_0222DCD4\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222D9C8: .word ov74_0223C340\n    _0222D9CC: .word 0x00002A04\n    _0222D9D0: .word 0x00002BC4\n    _0222D9D4: .word 0x00002A08\n    _0222D9D8: .word 0x00002B48\n    _0222D9DC: .word 0x000029FC"
    );
    #endif
}

void ov74_0222D9E0(void) {
    /* Original at 0x0222D9E0 */
    /* Requires manual decompilation - 123 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r7, r3, #0\n    mov r3, #0x30\n    ldr r0, _0222DAE0 ; =ov74_0223C340\n    mul r3, r2\n    add r6, r1, #0\n    add r4, r0, r3\n    ldr r0, [r6]\n    cmp r0, #0\n    bne _0222DA2A\n    ldr r0, [r4, #8]\n    mov r2, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [r4, #0xc]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, _0222DAE4 ; =0x000029FC\n    ldr r3, [r4, #4]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    ldr r1, [r4, #0x1c]\n    add r0, r6, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #0x20]\n    cmp r0, #0\n    beq _0222DA58\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xf7\n    mov r3, #0x55\n    bl NewMsgDataFromNarc\n    ldr r1, _0222DAE8 ; =0x00002A04\n    str r0, [r5, r1]\n    mov r0, #0x55\n    bl MessageFormat_New\n    mov r1, #0x2a\n    lsl r1, r1, #8\n    str r0, [r5, r1]\n    ldr r0, _0222DAEC ; =0x00002B98\n    ldr r2, _0222DAF0 ; =0x00010200\n    str r7, [r5, r0]\n    add r0, r0, #4\n    str r4, [r5, r0]\n    ldr r3, [r4, #0x24]\n    add r0, r5, #0\n    add r1, r6, #0\n    blx r3\n    ldr r2, [r4, #0x20]\n    cmp r2, #0\n    beq _0222DAB2\n    mov r1, #0x2a\n    lsl r1, r1, #8\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r3, #0x55\n    bl ReadMsgData_ExpandPlaceholders\n    str r0, [sp, #0x14]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x18]\n    ldr r2, [sp, #0x14]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r1, [r4, #0x14]\n    add r0, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    ldr r0, _0222DAE8 ; =0x00002A04\n    ldr r0, [r5, r0]\n    bl DestroyMsgData\n    mov r0, #0x2a\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    bl MessageFormat_Delete\n    ldr r0, _0222DAF4 ; =0x00002BD0\n    add r0, r5, r0\n    cmp r6, r0\n    bne _0222DAC8\n    add r0, r6, #0\n    mov r1, #0\n    mov r2, #0x13\n    mov r3, #0xa\n    bl DrawFrameAndWindow2\n    b _0222DAD4\n    add r0, r6, #0\n    mov r1, #0\n    mov r2, #0xa\n    mov r3, #0xe\n    bl DrawFrameAndWindow1\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    mul r0, r1\n    add r0, r7, r0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222DAE0: .word ov74_0223C340\n    _0222DAE4: .word 0x000029FC\n    _0222DAE8: .word 0x00002A04\n    _0222DAEC: .word 0x00002B98\n    _0222DAF0: .word 0x00010200\n    _0222DAF4: .word 0x00002BD0"
    );
    #endif
}

void ov74_0222DAF8(void) {
    /* Original at 0x0222DAF8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r4, #0\n    add r4, r4, r6\n    cmp r4, #3\n    bne _0222DB0A\n    mov r4, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0222DB14\n    mov r4, #2\n    cmp r7, r4\n    beq _0222DB26\n    ldr r0, _0222DB2C ; =0x00002BA0\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl SaveMysteryGift_CardTagIsValid\n    cmp r0, #0\n    beq _0222DB02\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222DB2C: .word 0x00002BA0"
    );
    #endif
}

void ov74_0222DB30(void) {
    /* Original at 0x0222DB30 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    mov r2, #1\n    add r5, r0, #0\n    str r2, [sp]\n    add r6, r3, #0\n    ldr r3, [r5]\n    mov r0, #0x71\n    bl GfGfxLoader_LoadFromNarc\n    add r1, sp, #4\n    add r7, r0, #0\n    bl NNS_G2dGetUnpackedScreenData\n    ldr r0, _0222DB6C ; =0x000029FC\n    ldr r2, [sp, #4]\n    lsl r1, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    add r2, #0xc\n    add r3, r6, #0\n    bl BG_LoadScreenTilemapData\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222DB6C: .word 0x000029FC"
    );
    #endif
}

void ov74_0222DB70(void) {
    /* Original at 0x0222DB70 */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #1\n    lsl r0, r0, #8\n    str r0, [sp]\n    ldr r0, [r5]\n    mov r2, #0\n    add r4, r1, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #3\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _0222DC5C ; =0x000029FC\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    mov r0, #0x71\n    mov r1, #6\n    bl GfGfxLoader_LoadCharData\n    cmp r4, #0\n    beq _0222DBB6\n    cmp r4, #1\n    beq _0222DBD6\n    b _0222DBF4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _0222DC5C ; =0x000029FC\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    mov r0, #0x71\n    mov r1, #4\n    bl GfGfxLoader_LoadScrnData\n    b _0222DBF4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _0222DC5C ; =0x000029FC\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    mov r0, #0x71\n    mov r1, #5\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    add r3, r0, #0\n    add r2, r1, #0\n    add r3, #0xef\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _0222DC5C ; =0x000029FC\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    mov r0, #0x71\n    mov r3, #3\n    bl GfGfxLoader_LoadCharData\n    mov r2, #3\n    add r0, r5, #0\n    mov r1, #2\n    lsl r3, r2, #9\n    bl ov74_0222DB30\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    ldr r0, _0222DC5C ; =0x000029FC\n    mov r2, #0\n    ldr r0, [r5, r0]\n    mov r1, #3\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    ldr r0, _0222DC5C ; =0x000029FC\n    mov r1, #3\n    ldr r0, [r5, r0]\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0222DC5C: .word 0x000029FC"
    );
    #endif
}

void ov74_0222DC60(void) {
    /* Original at 0x0222DC60 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    bl OverlayManager_GetData\n    ldr r1, _0222DCC8 ; =0x00002BC8\n    ldr r0, [r0, r1]\n    bl ListMenu_ProcessInput\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _0222DC86\n    add r0, r0, #1\n    cmp r4, r0\n    beq _0222DCC4\n    b _0222DCA0\n    ldr r0, _0222DCCC ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    cmp r6, #0\n    beq _0222DCC4\n    add r0, r7, #0\n    blx r6\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222DCC4\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0222DCCC ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    cmp r4, #0\n    beq _0222DCC4\n    cmp r4, #0x1f\n    bhs _0222DCB2\n    str r4, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0222DCD0 ; =ov74_0223D0BC\n    str r4, [r0]\n    add r0, r7, #0\n    blx r4\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222DCC4\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222DCC8: .word 0x00002BC8\n    _0222DCCC: .word SEQ_SE_DP_SELECT\n    _0222DCD0: .word ov74_0223D0BC"
    );
    #endif
}

void ov74_0222DCD4(void) {
    /* Original at 0x0222DCD4 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    ldr r1, _0222DDF0 ; =0x00002DCC\n    add r6, r0, #0\n    ldr r0, [r6, r1]\n    cmp r0, #0\n    bne _0222DD34\n    add r0, r1, #4\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    bne _0222DD34\n    add r1, #8\n    ldr r0, [r6, r1]\n    cmp r0, #0\n    bne _0222DD34\n    bl ov74_0223567C\n    cmp r0, #1\n    bne _0222DD00\n    add r0, r6, #0\n    bl ov74_0222D024\n    bl ov74_0223563C\n    bl ov74_02235690\n    mov r0, #0x1c\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #0x1e\n    mov r2, #0x1b\n    mov r3, #0x1d\n    bl ov74_02235728\n    bl sub_02074490\n    add r1, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r6]\n    mov r2, #1\n    str r0, [sp, #4]\n    mov r0, #0x14\n    mov r3, #0x60\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0xb2\n    mov r4, #0\n    str r0, [sp, #0x10]\n    str r4, [sp, #0xc]\n    add r5, r6, #0\n    mov r7, #0x64\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    ldr r0, [r6, r0]\n    lsl r0, r0, #2\n    add r1, r6, r0\n    ldr r0, _0222DDF4 ; =0x00002BB4\n    ldr r0, [r1, r0]\n    add r1, r0, r4\n    ldr r0, _0222DDF8 ; =0x0000034A\n    ldrh r0, [r1, r0]\n    str r0, [sp, #8]\n    cmp r0, #0\n    bne _0222DD6A\n    ldr r0, _0222DDF0 ; =0x00002DCC\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222DDD4\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    b _0222DDD4\n    ldr r0, [sp, #0xc]\n    ldr r1, _0222DDF0 ; =0x00002DCC\n    add r0, #0xa\n    str r0, [sp]\n    ldr r1, [r5, r1]\n    ldr r2, [sp, #0x10]\n    mov r0, #0\n    mov r3, #0x10\n    bl ov74_02235930\n    ldr r1, _0222DDF0 ; =0x00002DCC\n    str r0, [r5, r1]\n    mov r1, #0\n    ldr r0, [sp, #8]\n    add r2, r1, #0\n    bl GetMonIconNaixEx\n    add r1, r0, #0\n    ldr r0, [r6]\n    mov r2, #0\n    str r0, [sp]\n    mov r0, #0x14\n    add r3, sp, #0x18\n    bl GfGfxLoader_GetCharData\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    mov r1, #2\n    ldr r0, [r0, #0x14]\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    ldr r0, [sp, #0x18]\n    mov r2, #2\n    ldr r0, [r0, #0x14]\n    lsl r1, r7, #5\n    lsl r2, r2, #8\n    bl GX_LoadOBJ\n    mov r1, #0\n    ldr r0, [sp, #8]\n    add r2, r1, #0\n    bl GetMonIconPaletteEx\n    add r1, r0, #0\n    ldr r0, _0222DDF0 ; =0x00002DCC\n    add r1, r1, #3\n    ldr r0, [r5, r0]\n    bl Sprite_SetPaletteOverride\n    ldr r0, [sp, #0x14]\n    bl Heap_Free\n    ldr r0, [sp, #0xc]\n    add r4, r4, #2\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r5, r5, #4\n    add r0, #0x19\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    add r7, #0x10\n    cmp r0, #3\n    blt _0222DD40\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _0222DDF0: .word 0x00002DCC\n    _0222DDF4: .word 0x00002BB4\n    _0222DDF8: .word 0x0000034A"
    );
    #endif
}

void ov74_0222DDFC(void) {
    /* Original at 0x0222DDFC */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #3\n    mov r1, #0x55\n    lsl r2, r0, #0x10\n    bl Heap_Create\n    ldr r1, _0222DE60 ; =0x00003D54\n    add r0, r4, #0\n    mov r2, #0x55\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _0222DE60 ; =0x00003D54\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #0x55\n    bl BgConfig_Alloc\n    ldr r1, _0222DE64 ; =0x000029FC\n    str r0, [r4, r1]\n    mov r0, #0x55\n    str r0, [r4]\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    mov r0, #0xaf\n    mov r1, #2\n    lsl r0, r0, #6\n    str r1, [r4, r0]\n    mov r1, #1\n    add r0, #0x7c\n    str r1, [r4, r0]\n    mov r0, #0x55\n    bl ov74_022352A0\n    mov r2, #0x57\n    mov r0, #0\n    mov r1, #0x59\n    lsl r2, r2, #4\n    bl Heap_Create\n    mov r0, #1\n    pop {r4, pc}\n    _0222DE60: .word 0x00003D54\n    _0222DE64: .word 0x000029FC"
    );
    #endif
}

void ov74_0222DE68(void) {
    /* Original at 0x0222DE68 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl sub_02014AA0\n    mov r0, #3\n    lsl r0, r0, #0xa\n    ldr r0, [r4, r0]\n    bl sub_02014A60\n    ldr r1, _0222DE88 ; =0x04000010\n    mov r2, #8\n    mov r3, #1\n    bl sub_02014AB0\n    pop {r4, pc}\n    nop\n    _0222DE88: .word 0x04000010"
    );
    #endif
}

void ov74_0222DE8C(void) {
    /* Original at 0x0222DE8C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, _0222DEE0 ; =0x00003130\n    ldr r5, _0222DEE4 ; =0x00000C14\n    add r4, r0, r4\n    add r0, r5, #0\n    str r1, [r4, r5]\n    sub r0, #0xc\n    str r2, [r4, r0]\n    add r0, r5, #0\n    sub r0, #8\n    sub r5, #0x14\n    str r3, [r4, r0]\n    ldr r0, [r4, r5]\n    cmp r0, #0\n    bne _0222DEBE\n    mov r2, #6\n    lsl r2, r2, #8\n    mov r0, #0x55\n    add r1, r4, #0\n    add r2, r4, r2\n    bl sub_02014A08\n    mov r1, #3\n    lsl r1, r1, #0xa\n    str r0, [r4, r1]\n    ldr r0, _0222DEE8 ; =0x00000C04\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0222DED6\n    mov r2, #1\n    ldr r0, _0222DEEC ; =ov74_0222DE68\n    add r1, r4, #0\n    lsl r2, r2, #0xa\n    bl SysTask_CreateOnVBlankQueue\n    ldr r1, _0222DEE8 ; =0x00000C04\n    str r0, [r4, r1]\n    mov r0, #0xc1\n    mov r1, #1\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    _0222DEE0: .word 0x00003130\n    _0222DEE4: .word 0x00000C14\n    _0222DEE8: .word 0x00000C04\n    _0222DEEC: .word ov74_0222DE68"
    );
    #endif
}

void ov74_0222DEF0(void) {
    /* Original at 0x0222DEF0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0222DF24 ; =0x00003130\n    add r4, r0, r1\n    mov r0, #3\n    lsl r0, r0, #0xa\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222DF04\n    bl sub_02014A38\n    ldr r0, _0222DF28 ; =0x00000C04\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222DF10\n    bl SysTask_Destroy\n    mov r0, #3\n    mov r1, #0\n    lsl r0, r0, #0xa\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    bl sub_02014AA0\n    pop {r4, pc}\n    nop\n    _0222DF24: .word 0x00003130\n    _0222DF28: .word 0x00000C04"
    );
    #endif
}

void ov74_0222DF2C(void) {
    /* Original at 0x0222DF2C */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _0222E034 ; =0x00003130\n    mov r5, #0x15\n    add r4, r0, r1\n    mov r0, #0xc1\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    lsl r5, r5, #0xe\n    cmp r1, #0\n    bne _0222DF44\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r0, #4\n    ldr r1, [r4, r1]\n    cmp r1, #1\n    bne _0222DF92\n    add r1, r0, #0\n    sub r1, #8\n    ldr r2, [r4, r1]\n    sub r1, r0, #4\n    ldr r1, [r4, r1]\n    add r2, r2, r1\n    add r1, r0, #0\n    sub r1, #8\n    str r2, [r4, r1]\n    sub r1, r0, #4\n    ldr r2, [r4, r1]\n    add r1, r2, #0\n    add r2, r2, r1\n    sub r1, r0, #4\n    str r2, [r4, r1]\n    add r1, r0, #0\n    sub r1, #8\n    ldr r2, [r4, r1]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r2, r1, #0xc\n    mov r1, #0xfa\n    lsl r1, r1, #2\n    cmp r2, r1\n    ble _0222DFCC\n    mov r2, #0\n    add r1, r0, #0\n    str r2, [r4, r0]\n    sub r1, #8\n    str r2, [r4, r1]\n    sub r0, r0, #4\n    mov r5, #0xa8\n    str r2, [r4, r0]\n    b _0222DFCC\n    add r1, r0, #0\n    sub r1, #8\n    ldr r2, [r4, r1]\n    sub r1, r0, #4\n    ldr r1, [r4, r1]\n    sub r2, r2, r1\n    add r1, r0, #0\n    sub r1, #8\n    str r2, [r4, r1]\n    sub r1, r0, #4\n    ldr r2, [r4, r1]\n    lsr r1, r2, #0x1f\n    add r1, r2, r1\n    asr r2, r1, #1\n    sub r1, r0, #4\n    str r2, [r4, r1]\n    mov r2, #1\n    ldr r1, [r4, r1]\n    lsl r2, r2, #0xa\n    cmp r1, r2\n    bge _0222DFCC\n    mov r1, #0\n    lsl r3, r2, #2\n    add r2, r0, #0\n    str r1, [r4, r0]\n    sub r2, #8\n    str r3, [r4, r2]\n    sub r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #3\n    lsl r0, r0, #0xa\n    ldr r0, [r4, r0]\n    bl sub_02014A4C\n    add r2, r0, #0\n    mov r0, #0x54\n    add r3, r0, #0\n    add r3, #0xfc\n    asr r1, r5, #0xb\n    lsr r1, r1, #0x14\n    add r1, r5, r1\n    asr r1, r1, #0xc\n    bpl _0222DFEA\n    mov r1, #0\n    cmp r1, #0xa8\n    ble _0222DFF0\n    mov r1, #0xa8\n    lsl r6, r3, #1\n    add r7, r2, r6\n    sub r6, r1, r0\n    strh r6, [r7, #6]\n    ldrh r6, [r7, #6]\n    sub r1, r0, r1\n    add r3, r3, #4\n    strh r6, [r7, #2]\n    mov r6, #0xa8\n    sub r6, r6, r0\n    lsl r6, r6, #3\n    add r6, r2, r6\n    strh r1, [r6, #6]\n    ldrh r1, [r6, #6]\n    add r0, r0, #1\n    strh r1, [r6, #2]\n    ldr r1, _0222E038 ; =0x00000C08\n    ldr r1, [r4, r1]\n    add r5, r5, r1\n    cmp r0, #0xa8\n    blt _0222DFDE\n    mov r1, #6\n    add r0, r2, #0\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    mov r0, #3\n    lsl r0, r0, #0xa\n    ldr r0, [r4, r0]\n    bl sub_02014A8C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222E034: .word 0x00003130\n    _0222E038: .word 0x00000C08"
    );
    #endif
}

void ov74_0222E03C(void) {
    /* Original at 0x0222E03C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov74_022360B0\n    sub r0, r0, #2\n    cmp r0, #1\n    bhi _0222E056\n    ldr r0, _0222E058 ; =SEQ_SE_DP_SAVE\n    bl PlaySE\n    ldr r0, _0222E05C ; =0x00003D48\n    mov r1, #0\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _0222E058: .word SEQ_SE_DP_SAVE\n    _0222E05C: .word 0x00003D48"
    );
    #endif
}

void ov74_0222E060(void) {
    /* Original at 0x0222E060 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    cmp r0, #3\n    blt _0222E072\n    bl GF_AssertFail\n    mov r0, #0x1b\n    bl SaveSubstruct_AssertCRC\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    sub r0, #0xc\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r2, [r1, r0]\n    mov r0, #0x35\n    lsl r0, r0, #4\n    ldrb r1, [r2, r0]\n    cmp r1, #0xff\n    beq _0222E094\n    add r1, r1, #1\n    strb r1, [r2, r0]\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    sub r0, #0xc\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r2, [r1, r0]\n    mov r0, #0xd2\n    lsl r0, r0, #2\n    ldrb r1, [r2, r0]\n    cmp r1, #0xff\n    beq _0222E0B0\n    sub r1, r1, #1\n    strb r1, [r2, r0]\n    mov r0, #0x1b\n    bl SaveSubstruct_UpdateCRC\n    ldr r0, _0222E0C8 ; =0x00002BA4\n    ldr r0, [r4, r0]\n    bl ov74_022360A0\n    ldr r1, _0222E0CC ; =ov74_0222E03C\n    ldr r0, _0222E0D0 ; =0x00003D48\n    str r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0222E0C8: .word 0x00002BA4\n    _0222E0CC: .word ov74_0222E03C\n    _0222E0D0: .word 0x00003D48"
    );
    #endif
}

void ov74_0222E0D4(void) {
    /* Original at 0x0222E0D4 */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    ldr r2, _0222E1D4 ; =gSystem\n    add r6, r1, #0\n    ldr r3, [r2, #0x48]\n    ldr r1, _0222E1D8 ; =0x00003D4C\n    add r5, r0, #0\n    mov r2, #0x10\n    ldr r0, [r5, r1]\n    tst r2, r3\n    beq _0222E0F2\n    cmp r0, #1\n    beq _0222E0F2\n    mov r2, #1\n    str r2, [r5, r1]\n    ldr r1, _0222E1D4 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #0x20\n    tst r1, r2\n    beq _0222E108\n    ldr r1, _0222E1D8 ; =0x00003D4C\n    ldr r2, [r5, r1]\n    cmp r2, #0\n    beq _0222E108\n    mov r2, #0\n    str r2, [r5, r1]\n    ldr r1, _0222E1D8 ; =0x00003D4C\n    ldr r1, [r5, r1]\n    cmp r0, r1\n    beq _0222E138\n    cmp r1, #0\n    bne _0222E118\n    mov r1, #1\n    b _0222E11A\n    mov r1, #0\n    ldr r0, _0222E1DC ; =0x00002DC4\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0222E1D8 ; =0x00003D4C\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222E12E\n    mov r1, #1\n    b _0222E130\n    mov r1, #0\n    ldr r0, _0222E1E0 ; =0x00002DC8\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0222E1D4 ; =gSystem\n    mov r4, #0\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    add r2, r1, #0\n    tst r2, r0\n    beq _0222E14A\n    add r4, r0, #0\n    b _0222E17A\n    mov r0, #1\n    and r1, r0\n    beq _0222E160\n    cmp r6, #0\n    beq _0222E160\n    ldr r2, _0222E1D8 ; =0x00003D4C\n    ldr r2, [r5, r2]\n    cmp r2, #0\n    bne _0222E160\n    add r4, r0, #0\n    b _0222E17A\n    cmp r1, #0\n    beq _0222E170\n    ldr r0, _0222E1D8 ; =0x00003D4C\n    ldr r0, [r5, r0]\n    cmp r0, #1\n    bne _0222E170\n    mov r4, #2\n    b _0222E17A\n    cmp r1, #0\n    beq _0222E17A\n    cmp r6, #0\n    bne _0222E17A\n    mov r4, #3\n    cmp r4, #1\n    bne _0222E1B2\n    ldr r0, _0222E1E4 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    mov r0, #0xab\n    bl sub_02037AC0\n    mov r3, #0xa\n    ldr r1, _0222E1E8 ; =0x00002C34\n    mov r0, #1\n    str r0, [r5, r1]\n    mov r0, #0x16\n    sub r1, #0x64\n    str r0, [r7]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r2, #0x11\n    lsl r3, r3, #6\n    bl ov74_0222D9E0\n    ldr r0, _0222E1EC ; =0x00002BD0\n    mov r1, #0x13\n    add r0, r5, r0\n    bl WaitingIcon_New\n    ldr r1, _0222E1F0 ; =0x00003D50\n    str r0, [r5, r1]\n    cmp r4, #2\n    bne _0222E1C6\n    ldr r0, _0222E1E4 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r2, #0x14\n    bl ov74_0222EB28\n    cmp r4, #3\n    bne _0222E1D0\n    ldr r0, _0222E1E4 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222E1D4: .word gSystem\n    _0222E1D8: .word 0x00003D4C\n    _0222E1DC: .word 0x00002DC4\n    _0222E1E0: .word 0x00002DC8\n    _0222E1E4: .word SEQ_SE_DP_SELECT\n    _0222E1E8: .word 0x00002C34\n    _0222E1EC: .word 0x00002BD0\n    _0222E1F0: .word 0x00003D50"
    );
    #endif
}

void ov74_0222E1F4(void) {
    /* Original at 0x0222E1F4 */
    /* Requires manual decompilation - 600 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r6, r0, #0\n    bl OverlayManager_GetData\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #0x1e\n    bls _0222E20A\n    b _0222E79C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0222E216: ; jump table\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    ldr r1, [r0, #8]\n    ldr r0, _0222E5A4 ; =0x00002BA4\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    bl Save_MysteryGift_Get\n    ldr r1, _0222E5A8 ; =0x00002BA0\n    str r0, [r4, r1]\n    add r0, r1, #4\n    ldr r0, [r4, r0]\n    bl Save_PlayerData_GetOptionsAddr\n    ldr r1, _0222E5AC ; =0x00002BA8\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    bl Options_GetFrame\n    ldr r1, _0222E5B0 ; =0x00002BAC\n    str r0, [r4, r1]\n    sub r1, #0xc\n    ldr r0, [r4, r1]\n    mov r1, #0\n    bl SaveMysteryGift_CardGetByIdx\n    ldr r1, _0222E5B4 ; =0x00002BB4\n    str r0, [r4, r1]\n    sub r1, #0x14\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl SaveMysteryGift_CardGetByIdx\n    ldr r1, _0222E5B8 ; =0x00002BB8\n    str r0, [r4, r1]\n    sub r1, #0x18\n    ldr r0, [r4, r1]\n    mov r1, #2\n    bl SaveMysteryGift_CardGetByIdx\n    ldr r1, _0222E5BC ; =0x00002BBC\n    mov r2, #1\n    str r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    bl ov74_0222DAF8\n    mov r1, #0xaf\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    mov r0, #1\n    str r0, [r5]\n    b _0222E79C\n    bl ov74_0222FCA4\n    ldr r0, _0222E5C0 ; =0x000029FC\n    ldr r0, [r4, r0]\n    bl ov74_0222FCC4\n    mov r0, #2\n    str r0, [r5]\n    b _0222E79C\n    bl ResetAllTextPrinters\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_0222DB70\n    mov r1, #0x1e\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x55\n    bl LoadFontPal0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x55\n    str r0, [sp, #4]\n    ldr r0, _0222E5C0 ; =0x000029FC\n    mov r2, #1\n    ldr r0, [r4, r0]\n    mov r3, #0xd\n    bl LoadUserFrameGfx1\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x55\n    str r0, [sp, #4]\n    ldr r0, _0222E5C0 ; =0x000029FC\n    mov r1, #0\n    ldr r0, [r4, r0]\n    mov r2, #0xa\n    mov r3, #0xe\n    bl LoadUserFrameGfx1\n    ldr r0, _0222E5B0 ; =0x00002BAC\n    mov r1, #0\n    ldr r0, [r4, r0]\n    mov r2, #0x13\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x55\n    str r0, [sp, #4]\n    ldr r0, _0222E5C0 ; =0x000029FC\n    mov r3, #0xa\n    ldr r0, [r4, r0]\n    bl LoadUserFrameGfx2\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov74_0222D824\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    add r3, r5, #0\n    bl ov74_0222D7F0\n    b _0222E79C\n    mov r1, #0xaf\n    lsl r1, r1, #6\n    ldr r6, [r4, r1]\n    ldr r1, _0222E5C4 ; =gSystem\n    mov r2, #0x40\n    ldr r1, [r1, #0x48]\n    add r3, r1, #0\n    tst r3, r2\n    beq _0222E368\n    add r1, r6, #0\n    sub r2, #0x41\n    bl ov74_0222DAF8\n    add r6, r0, #0\n    b _0222E3A4\n    mov r2, #0x80\n    tst r2, r1\n    beq _0222E37A\n    add r1, r6, #0\n    mov r2, #1\n    bl ov74_0222DAF8\n    add r6, r0, #0\n    b _0222E3A4\n    mov r0, #2\n    tst r0, r1\n    beq _0222E394\n    ldr r0, _0222E5C8 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x1d\n    add r3, r5, #0\n    bl ov74_0222D7F0\n    b _0222E3A4\n    mov r0, #1\n    tst r0, r1\n    beq _0222E3A4\n    ldr r0, _0222E5C8 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    mov r0, #4\n    str r0, [r5]\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    cmp r0, r6\n    bne _0222E3B0\n    b _0222E79C\n    ldr r0, _0222E5CC ; =SEQ_SE_DP_CARD2\n    bl PlaySE\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    str r6, [r4, r0]\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov74_0222D824\n    b _0222E79C\n    ldr r1, _0222E5D0 ; =0x00002BD0\n    mov r3, #0xa\n    add r1, r4, r1\n    mov r2, #7\n    lsl r3, r3, #6\n    bl ov74_0222D9E0\n    ldr r3, _0222E5D4 ; =0x00002BF0\n    mov r2, #8\n    add r1, r3, #0\n    str r0, [r4, r3]\n    sub r1, #0x10\n    ldr r3, [r4, r3]\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov74_0222D9E0\n    mov r0, #5\n    str r0, [r5]\n    b _0222E79C\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov74_0222DC60\n    ldr r0, _0222E5C4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _0222E4C2\n    ldr r0, _0222E5C8 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    mov r0, #0xb\n    str r0, [r5]\n    b _0222E79C\n    ldr r0, _0222E5CC ; =SEQ_SE_DP_CARD2\n    bl PlaySE\n    mov r0, #0x10\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _0222E5D0 ; =0x00002BD0\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222D104\n    ldr r0, _0222E5D8 ; =0x00002BE0\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222D0EC\n    mov r1, #1\n    add r0, r4, #0\n    lsl r2, r1, #0xc\n    mov r3, #0x66\n    bl ov74_0222DE8C\n    mov r0, #7\n    str r0, [r5]\n    b _0222E79C\n    bl ov74_0222DF2C\n    cmp r0, #0\n    beq _0222E4C2\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov74_0222D824\n    ldr r2, _0222E5DC ; =0x00708000\n    add r0, r4, #0\n    mov r1, #0\n    lsr r3, r2, #1\n    bl ov74_0222DE8C\n    mov r0, #8\n    str r0, [r5]\n    b _0222E79C\n    bl ov74_0222DF2C\n    ldr r0, _0222E5C4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0222E4C2\n    ldr r0, _0222E5CC ; =SEQ_SE_DP_CARD2\n    bl PlaySE\n    mov r1, #1\n    add r0, r4, #0\n    lsl r2, r1, #0xc\n    mov r3, #0x66\n    bl ov74_0222DE8C\n    mov r0, #9\n    str r0, [r5]\n    b _0222E79C\n    bl ov74_0222DF2C\n    cmp r0, #0\n    beq _0222E4C2\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov74_0222D824\n    ldr r2, _0222E5DC ; =0x00708000\n    add r0, r4, #0\n    mov r1, #0\n    lsr r3, r2, #1\n    bl ov74_0222DE8C\n    mov r0, #0x10\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0xa\n    str r0, [r5]\n    b _0222E79C\n    bl ov74_0222DF2C\n    cmp r0, #0\n    bne _0222E4C4\n    b _0222E79C\n    ldr r0, _0222E5D0 ; =0x00002BD0\n    mov r1, #0\n    add r0, r4, r0\n    mov r2, #0x13\n    mov r3, #0xa\n    bl DrawFrameAndWindow2\n    ldr r0, _0222E5D8 ; =0x00002BE0\n    mov r1, #0\n    add r0, r4, r0\n    mov r2, #0xa\n    mov r3, #0xe\n    bl DrawFrameAndWindow1\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    bl ov74_0222DEF0\n    mov r0, #5\n    str r0, [r5]\n    b _0222E79C\n    bl ov74_0222D448\n    ldr r0, _0222E5D0 ; =0x00002BD0\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222D104\n    ldr r0, _0222E5D0 ; =0x00002BD0\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0222E5D0 ; =0x00002BD0\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #3\n    str r0, [r5]\n    b _0222E79C\n    ldr r2, _0222E5E0 ; =ov74_0222D414\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov74_0222DC60\n    b _0222E79C\n    ldr r2, _0222E5E0 ; =ov74_0222D414\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov74_0222DC60\n    b _0222E79C\n    ldr r1, _0222E5D8 ; =0x00002BE0\n    ldr r2, _0222E5E4 ; =0x00010200\n    add r1, r4, r1\n    bl ov74_0222D7A4\n    mov r0, #0xe\n    str r0, [r5]\n    b _0222E79C\n    mov r1, #0\n    mov r2, #0x11\n    add r3, r5, #0\n    bl ov74_0222D7F0\n    b _0222E79C\n    bl ov74_0222D448\n    ldr r0, _0222E5D0 ; =0x00002BD0\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222D104\n    ldr r0, _0222E5D0 ; =0x00002BD0\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0222E5D0 ; =0x00002BD0\n    add r0, r4, r0\n    bl RemoveWindow\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #3\n    bl ov74_0222D824\n    ldr r0, _0222E5C0 ; =0x000029FC\n    ldr r0, [r4, r0]\n    bl ov74_0222D248\n    add r0, r4, #0\n    bl ov74_0222CFFC\n    add r0, r4, #0\n    bl ov74_0222D098\n    mov r0, #0x12\n    str r0, [r5]\n    b _0222E79C\n    bl ov74_0222E7EC\n    bl sub_0203A880\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x13\n    add r3, r5, #0\n    bl ov74_0222D7F0\n    b _0222E79C\n    _0222E5A4: .word 0x00002BA4\n    _0222E5A8: .word 0x00002BA0\n    _0222E5AC: .word 0x00002BA8\n    _0222E5B0: .word 0x00002BAC\n    _0222E5B4: .word 0x00002BB4\n    _0222E5B8: .word 0x00002BB8\n    _0222E5BC: .word 0x00002BBC\n    _0222E5C0: .word 0x000029FC\n    _0222E5C4: .word gSystem\n    _0222E5C8: .word SEQ_SE_DP_SELECT\n    _0222E5CC: .word SEQ_SE_DP_CARD2\n    _0222E5D0: .word 0x00002BD0\n    _0222E5D4: .word 0x00002BF0\n    _0222E5D8: .word 0x00002BE0\n    _0222E5DC: .word 0x00708000\n    _0222E5E0: .word ov74_0222D414\n    _0222E5E4: .word 0x00010200\n    mov r6, #0\n    add r0, r6, #0\n    bl sub_020373B4\n    cmp r0, #0\n    beq _0222E63A\n    add r0, r4, #0\n    add r0, #0x90\n    bl sub_020358B8\n    ldr r1, _0222E7C0 ; =0x00002B08\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov74_0222E8B4\n    add r6, r0, #0\n    bne _0222E62A\n    ldr r0, _0222E7C4 ; =0x00002C30\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222E62A\n    ldr r0, _0222E7C0 ; =0x00002B08\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _0222E7C0 ; =0x00002B08\n    add r0, r4, r0\n    bl CopyWindowToVram\n    ldr r0, _0222E7C4 ; =0x00002C30\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r1, _0222E7C8 ; =0x00002AF8\n    add r0, r4, #0\n    add r1, r4, r1\n    add r2, r6, #0\n    bl ov74_0222EA88\n    ldr r0, _0222E7C4 ; =0x00002C30\n    str r6, [r4, r0]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov74_0222E0D4\n    b _0222E79C\n    mov r1, #0\n    mov r2, #0x15\n    add r3, r5, #0\n    bl ov74_0222D7F0\n    b _0222E79C\n    bl ov74_0222D024\n    ldr r0, _0222E7CC ; =0x00002BD0\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222D104\n    ldr r0, _0222E7D0 ; =0x00002BE0\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222D0EC\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov74_0222D824\n    mov r1, #0x1e\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x55\n    bl LoadFontPal0\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #4\n    add r3, r5, #0\n    bl ov74_0222D7F0\n    b _0222E79C\n    bl sub_02037D78\n    cmp r0, #0\n    beq _0222E698\n    b _0222E79C\n    mov r0, #0xb1\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    str r0, [r5]\n    b _0222E79C\n    ldr r0, _0222E7D4 ; =0x00002C34\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0222E79C\n    ldr r1, _0222E7D8 ; =0x00002DD8\n    add r0, r4, #0\n    ldr r2, [r4]\n    add r0, #0x90\n    add r1, r4, r1\n    bl ov74_02235ED0\n    ldr r0, _0222E7D8 ; =0x00002DD8\n    mov r1, #0xd6\n    add r0, r4, r0\n    lsl r1, r1, #2\n    bl ov74_02229D0C\n    add r0, r4, #0\n    bl ov74_0222E060\n    mov r0, #0x18\n    str r0, [r5]\n    b _0222E79C\n    bl ov74_0223615C\n    cmp r0, #4\n    bne _0222E79C\n    mov r0, #0x93\n    bl sub_02037AC0\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020398D4\n    mov r0, #0x19\n    str r0, [r5]\n    b _0222E79C\n    bl ov74_0222E898\n    cmp r0, #0\n    beq _0222E704\n    mov r0, #0x93\n    bl sub_02037B38\n    cmp r0, #1\n    bne _0222E79C\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_020398D4\n    bl ov74_02236128\n    ldr r1, _0222E7CC ; =0x00002BD0\n    mov r3, #0xa\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r2, #0x12\n    lsl r3, r3, #6\n    bl ov74_0222D9E0\n    ldr r0, _0222E7DC ; =0x00003D50\n    ldr r0, [r4, r0]\n    bl sub_0200F450\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0x1a\n    bl ov74_0222EB28\n    b _0222E79C\n    ldr r0, _0222E7E0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0222E79C\n    mov r0, #0x14\n    str r0, [r5]\n    b _0222E79C\n    ldr r0, _0222E7E0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0222E79C\n    ldr r0, _0222E7CC ; =0x00002BD0\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222D104\n    ldr r0, _0222E7CC ; =0x00002BD0\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0222E7CC ; =0x00002BD0\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #3\n    str r0, [r5]\n    b _0222E79C\n    mov r1, #0\n    mov r2, #0x1d\n    add r3, r5, #0\n    bl ov74_0222D7F0\n    b _0222E79C\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0222E79C\n    mov r0, #0xb1\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    str r0, [r5]\n    b _0222E79C\n    bl ov74_0222D024\n    add r0, r4, #0\n    bl ov74_0222DEF0\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _0222E7E4 ; =0x00002C44\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222E7A8\n    bl SpriteList_RenderAndAnimateSprites\n    bl ov74_022358BC\n    ldr r0, _0222E7E8 ; =0x00003D48\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0222E7B8\n    add r0, r4, #0\n    blx r1\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _0222E7C0: .word 0x00002B08\n    _0222E7C4: .word 0x00002C30\n    _0222E7C8: .word 0x00002AF8\n    _0222E7CC: .word 0x00002BD0\n    _0222E7D0: .word 0x00002BE0\n    _0222E7D4: .word 0x00002C34\n    _0222E7D8: .word 0x00002DD8\n    _0222E7DC: .word 0x00003D50\n    _0222E7E0: .word gSystem\n    _0222E7E4: .word 0x00002C44\n    _0222E7E8: .word 0x00003D48"
    );
    #endif
}

void ov74_0222E7EC(void) {
    /* Original at 0x0222E7EC */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    ldr r1, [r5, r0]\n    mov r2, #0xd6\n    lsl r1, r1, #2\n    add r1, r5, r1\n    sub r0, #0xc\n    ldr r4, [r1, r0]\n    add r0, r5, #0\n    add r0, #0xe0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    bl memcpy\n    mov r1, #0x41\n    add r0, r5, #0\n    lsl r1, r1, #2\n    add r0, #0x90\n    add r1, r4, r1\n    mov r2, #0x50\n    bl memcpy\n    ldr r0, _0222E854 ; =0x00000428\n    mov r1, #0\n    strb r1, [r5, r0]\n    add r0, r5, #0\n    add r0, #0xde\n    ldrb r1, [r0]\n    mov r0, #0x10\n    mov r2, #0xf\n    bic r1, r0\n    add r0, r5, #0\n    add r0, #0xde\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xde\n    ldrb r1, [r0]\n    mov r0, #0x20\n    orr r1, r0\n    add r0, r5, #0\n    add r0, #0xde\n    strb r1, [r0]\n    ldr r1, _0222E858 ; =0x00002BA4\n    add r0, r5, #4\n    ldr r1, [r5, r1]\n    bl ov74_02229CE0\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222E854: .word 0x00000428\n    _0222E858: .word 0x00002BA4"
    );
    #endif
}

void ov74_0222E85C(void) {
    /* Original at 0x0222E85C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, [r0]\n    ldr r1, [r0, #4]\n    add r2, r0, #0\n    mov r4, #0\n    cmp r1, r3\n    bge _0222E870\n    add r3, r1, #0\n    mov r4, #1\n    add r2, r0, #4\n    ldr r1, [r0, #8]\n    cmp r1, r3\n    bge _0222E87E\n    add r2, r0, #0\n    add r3, r1, #0\n    mov r4, #2\n    add r2, #8\n    ldr r1, [r0, #0xc]\n    cmp r1, r3\n    bge _0222E88A\n    add r2, r0, #0\n    mov r4, #3\n    add r2, #0xc\n    ldr r0, _0222E894 ; =0x3FFF0001\n    str r0, [r2]\n    add r0, r4, #1\n    pop {r3, r4}\n    bx lr\n    _0222E894: .word 0x3FFF0001"
    );
    #endif
}

void ov74_0222E898(void) {
    sub_02034818(1, 0);
}

void ov74_0222E8B4(void) {
    /* Original at 0x0222E8B4 */
    /* Requires manual decompilation - 205 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x48\n    add r5, r0, #0\n    mov r6, #0\n    mov r0, #1\n    str r1, [sp, #0x10]\n    add r7, r6, #0\n    str r0, [sp, #0x24]\n    add r4, r5, #4\n    ldr r0, [sp, #0x24]\n    bl sub_02034818\n    cmp r0, #0\n    bne _0222E8E8\n    ldr r0, _0222EA70 ; =0x00002C08\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222E8DA\n    add r7, r7, #1\n    ldr r0, _0222EA70 ; =0x00002C08\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r1, _0222EA74 ; =0x3FFF0001\n    add r0, #0x14\n    str r1, [r4, r0]\n    b _0222E910\n    ldr r1, _0222EA70 ; =0x00002C08\n    ldr r1, [r4, r1]\n    cmp r1, r0\n    beq _0222E90E\n    ldr r1, _0222EA70 ; =0x00002C08\n    add r7, r7, #1\n    str r0, [r4, r1]\n    add r0, r1, #0\n    add r1, #0x34\n    ldr r1, [r5, r1]\n    add r0, #0x34\n    add r2, r1, #1\n    ldr r0, [r5, r0]\n    ldr r1, _0222EA78 ; =0x00002C3C\n    add r6, r6, #1\n    str r2, [r5, r1]\n    sub r1, #0x20\n    str r0, [r4, r1]\n    b _0222E910\n    add r6, r6, #1\n    ldr r0, [sp, #0x24]\n    add r4, r4, #4\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    cmp r0, #5\n    blt _0222E8C6\n    cmp r7, #0\n    bne _0222E926\n    add sp, #0x48\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _0222EA7C ; =0x00002C20\n    ldr r0, [r5, r1]\n    str r0, [sp, #0x38]\n    add r0, r1, #4\n    ldr r0, [r5, r0]\n    str r0, [sp, #0x3c]\n    add r0, r1, #0\n    add r0, #8\n    ldr r0, [r5, r0]\n    add r1, #0xc\n    str r0, [sp, #0x40]\n    ldr r0, [r5, r1]\n    str r0, [sp, #0x44]\n    add r0, sp, #0x38\n    bl ov74_0222E85C\n    str r0, [sp, #0x28]\n    add r0, sp, #0x38\n    bl ov74_0222E85C\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x38\n    bl ov74_0222E85C\n    str r0, [sp, #0x30]\n    add r0, sp, #0x38\n    bl ov74_0222E85C\n    str r0, [sp, #0x34]\n    mov r0, #0x55\n    bl MessageFormat_New\n    add r4, r0, #0\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xf7\n    mov r3, #0x55\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x1c]\n    mov r5, #0\n    ldr r0, [sp, #0x10]\n    add r1, r5, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    str r0, [sp, #0x14]\n    cmp r6, #0\n    ble _0222EA54\n    add r0, sp, #0x28\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x18]\n    ldr r0, [r0]\n    bl sub_02034818\n    add r7, r0, #0\n    beq _0222EA44\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r7, #0\n    bl BufferPlayersName\n    ldr r1, [sp, #0x1c]\n    add r0, r4, #0\n    mov r2, #0x36\n    mov r3, #0x55\n    bl ReadMsgData_ExpandPlaceholders\n    str r0, [sp, #0x20]\n    add r0, r7, #0\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    str r5, [sp]\n    bne _0222E9D6\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222EA80 ; =0x00050600\n    mov r1, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    ldr r2, [sp, #0x20]\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    b _0222E9F0\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r1, #0\n    ldr r0, [sp, #0x10]\n    ldr r2, [sp, #0x20]\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    add r0, r7, #0\n    bl PlayerProfile_GetTrainerID\n    add r2, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    lsl r2, r2, #0x10\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    lsr r2, r2, #0x10\n    mov r3, #5\n    bl BufferIntegerAsString\n    ldr r1, [sp, #0x1c]\n    add r0, r4, #0\n    mov r2, #0x37\n    mov r3, #0x55\n    bl ReadMsgData_ExpandPlaceholders\n    add r7, r0, #0\n    str r5, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222EA84 ; =0x000E0F00\n    mov r1, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r2, r7, #0\n    mov r3, #0x50\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    add r5, #0x18\n    ldr r0, [sp, #0x18]\n    add r0, r0, #4\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    cmp r0, r6\n    blt _0222E98C\n    cmp r6, #0\n    beq _0222EA5E\n    ldr r0, [sp, #0x10]\n    bl CopyWindowToVram\n    ldr r0, [sp, #0x1c]\n    bl DestroyMsgData\n    add r0, r4, #0\n    bl MessageFormat_Delete\n    add r0, r6, #0\n    add sp, #0x48\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222EA70: .word 0x00002C08\n    _0222EA74: .word 0x3FFF0001\n    _0222EA78: .word 0x00002C3C\n    _0222EA7C: .word 0x00002C20\n    _0222EA80: .word 0x00050600\n    _0222EA84: .word 0x000E0F00"
    );
    #endif
}

void ov74_0222EA88(void) {
    /* Original at 0x0222EA88 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _0222EB1C ; =0x00002BF4\n    add r4, r1, #0\n    str r2, [r5, r0]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xf7\n    mov r3, #0x55\n    bl NewMsgDataFromNarc\n    ldr r1, _0222EB20 ; =0x00002A04\n    str r0, [r5, r1]\n    mov r0, #0x55\n    bl MessageFormat_New\n    mov r1, #0x2a\n    lsl r1, r1, #8\n    str r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #0x2a\n    ldr r2, _0222EB1C ; =0x00002BF4\n    str r3, [sp, #4]\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    ldr r2, [r5, r2]\n    mov r1, #0\n    bl BufferIntegerAsString\n    mov r1, #0x2a\n    lsl r1, r1, #8\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x39\n    mov r3, #0x55\n    bl ReadMsgData_ExpandPlaceholders\n    add r6, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0222EB24 ; =0x00010200\n    mov r1, #1\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r2, r6, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl CopyWindowToVram\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0222EB20 ; =0x00002A04\n    ldr r0, [r5, r0]\n    bl DestroyMsgData\n    mov r0, #0x2a\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    bl MessageFormat_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _0222EB1C: .word 0x00002BF4\n    _0222EB20: .word 0x00002A04\n    _0222EB24: .word 0x00010200"
    );
    #endif
}

void ov74_0222EB28(void) {
    /* Original at 0x0222EB28 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov74_02229DF8\n    bl sub_0203A914\n    mov r0, #0xb1\n    lsl r0, r0, #6\n    str r6, [r5, r0]\n    mov r0, #0x17\n    str r0, [r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov74_0222EB44(void) {
    /* Original at 0x0222EB44 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    bl OverlayManager_GetData\n    add r7, r0, #0\n    ldr r0, _0222EBF0 ; =0x00002A08\n    mov r6, #0\n    add r4, r7, #0\n    add r5, r7, r0\n    ldr r0, _0222EBF0 ; =0x00002A08\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222EB6A\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r5, #0\n    bl RemoveWindow\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, #0x10\n    cmp r6, #0x13\n    blo _0222EB56\n    ldr r0, _0222EBF4 ; =0x00002BD0\n    ldr r1, [r7, r0]\n    cmp r1, #0\n    beq _0222EB8A\n    add r0, r7, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0222EBF4 ; =0x00002BD0\n    add r0, r7, r0\n    bl RemoveWindow\n    ldr r0, _0222EBF8 ; =0x00002BE0\n    ldr r1, [r7, r0]\n    cmp r1, #0\n    beq _0222EBA0\n    add r0, r7, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0222EBF8 ; =0x00002BE0\n    add r0, r7, r0\n    bl RemoveWindow\n    ldr r0, _0222EBFC ; =0x000029FC\n    mov r1, #0\n    ldr r0, [r7, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _0222EBFC ; =0x000029FC\n    mov r1, #1\n    ldr r0, [r7, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _0222EBFC ; =0x000029FC\n    mov r1, #2\n    ldr r0, [r7, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _0222EBFC ; =0x000029FC\n    mov r1, #3\n    ldr r0, [r7, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _0222EBFC ; =0x000029FC\n    ldr r0, [r7, r0]\n    bl Heap_Free\n    ldr r0, _0222EC00 ; =FS_OVERLAY_ID(OVY_74)\n    ldr r1, _0222EC04 ; =gApp_MainMenu_SelectOption_MysteryGift\n    bl RegisterMainOverlay\n    mov r0, #0x59\n    bl Heap_Destroy\n    ldr r0, [sp]\n    bl OverlayManager_FreeData\n    mov r0, #0x55\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222EBF0: .word 0x00002A08\n    _0222EBF4: .word 0x00002BD0\n    _0222EBF8: .word 0x00002BE0\n    _0222EBFC: .word 0x000029FC\n    _0222EC00: .word FS_OVERLAY_ID(OVY_74)\n    _0222EC04: .word gApp_MainMenu_SelectOption_MysteryGift"
    );
    #endif
}

void ov74_0222EC08(void) {
    /* Original at 0x0222EC08 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    bl ov74_0222FCC4\n    ldr r1, _0222EC54 ; =0x00003D54\n    add r0, r5, #0\n    bl Heap_AllocAtEnd\n    ldr r2, _0222EC54 ; =0x00003D54\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    ldr r0, _0222EC58 ; =0x000029FC\n    mov r1, #0x1e\n    str r6, [r4, r0]\n    mov r0, #0\n    lsl r1, r1, #4\n    add r2, r5, #0\n    str r5, [r4]\n    bl LoadFontPal0\n    ldr r0, _0222EC5C ; =0x00002BB4\n    mov r2, #0\n    str r7, [r4, r0]\n    add r0, #0xc\n    str r2, [r4, r0]\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_0222D824\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222EC54: .word 0x00003D54\n    _0222EC58: .word 0x000029FC\n    _0222EC5C: .word 0x00002BB4"
    );
    #endif
}

void ov74_0222EC60(void) {
    /* Original at 0x0222EC60 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222ECC8 ; =0x00002D7C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222EC70\n    bl Sprite_Delete\n    mov r0, #0xb6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222EC7E\n    bl Sprite_Delete\n    mov r0, #0xb6\n    mov r1, #0\n    lsl r0, r0, #6\n    str r1, [r4, r0]\n    ldr r2, [r4, r0]\n    sub r1, r0, #4\n    str r2, [r4, r1]\n    add r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222EC98\n    bl Sprite_Delete\n    ldr r0, _0222ECCC ; =0x00002D88\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222ECA4\n    bl Sprite_Delete\n    ldr r0, _0222ECD0 ; =0x00002D8C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222ECB0\n    bl Sprite_Delete\n    ldr r1, _0222ECD0 ; =0x00002D8C\n    mov r0, #0\n    str r0, [r4, r1]\n    ldr r2, [r4, r1]\n    sub r0, r1, #4\n    str r2, [r4, r0]\n    ldr r0, [r4, r0]\n    sub r1, #8\n    str r0, [r4, r1]\n    bl ov74_022359BC\n    pop {r4, pc}\n    _0222ECC8: .word 0x00002D7C\n    _0222ECCC: .word 0x00002D88\n    _0222ECD0: .word 0x00002D8C"
    );
    #endif
}

void ov74_0222ECD4(void) {
    /* Original at 0x0222ECD4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl WindowIsInUse\n    cmp r0, #1\n    bne _0222ECEA\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0200E5D4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_0222ECEC(void) {
    /* Original at 0x0222ECEC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl WindowIsInUse\n    cmp r0, #1\n    bne _0222ED02\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ClearFrameAndWindow2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_0222ED04(void) {
    /* Original at 0x0222ED04 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    add r7, r2, #0\n    str r3, [sp]\n    cmp r0, #0\n    beq _0222ED1E\n    bl ListMenuItems_Delete\n    ldr r0, _0222EDB4 ; =0x00002BBC\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222ED2E\n    mov r1, #0\n    add r2, r1, #0\n    bl DestroyListMenu\n    add r0, r7, #0\n    mov r1, #0x55\n    bl ListMenuItems_New\n    mov r1, #0xaf\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xf7\n    mov r3, #0x55\n    bl NewMsgDataFromNarc\n    ldr r1, _0222EDB8 ; =0x00002A04\n    mov r6, #0\n    str r0, [r5, r1]\n    cmp r7, #0\n    ble _0222ED6C\n    mov r0, #0xaf\n    ldr r1, _0222EDB8 ; =0x00002A04\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r2, [r4]\n    ldr r3, [r4, #4]\n    bl ListMenuItems_AppendFromMsgData\n    add r6, r6, #1\n    add r4, #8\n    cmp r6, r7\n    blt _0222ED52\n    ldr r0, _0222EDB8 ; =0x00002A04\n    ldr r0, [r5, r0]\n    bl DestroyMsgData\n    ldr r4, _0222EDBC ; =ov74_0223C6E0\n    add r3, sp, #4\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, sp, #4\n    strh r7, [r0, #0x10]\n    ldr r0, [sp]\n    mov r3, #0x55\n    str r0, [sp, #0x10]\n    add r0, r2, #0\n    ldr r2, [sp, #0x38]\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    bl ListMenuInit\n    ldr r1, _0222EDB4 ; =0x00002BBC\n    str r0, [r5, r1]\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222EDB4: .word 0x00002BBC\n    _0222EDB8: .word 0x00002A04\n    _0222EDBC: .word ov74_0223C6E0"
    );
    #endif
}

void ov74_0222EDC0(void) {
    /* Original at 0x0222EDC0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xaf\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl ListMenuItems_Delete\n    mov r0, #0xaf\n    mov r1, #0\n    lsl r0, r0, #6\n    str r1, [r4, r0]\n    sub r0, r0, #4\n    ldr r0, [r4, r0]\n    add r2, r1, #0\n    bl DestroyListMenu\n    ldr r0, _0222EE00 ; =0x00002BBC\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, #0x18\n    add r0, r4, r0\n    bl ov74_0222ECD4\n    ldr r0, _0222EE04 ; =0x00002BD4\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0222EE04 ; =0x00002BD4\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}\n    _0222EE00: .word 0x00002BBC\n    _0222EE04: .word 0x00002BD4"
    );
    #endif
}

u8 ov74_0222EE08(void) {
    return 1;
}

void ov74_0222EE0C(void) {
    /* Original at 0x0222EE0C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r7, r1, #0\n    ldr r1, [r5]\n    mov r0, #0x25\n    add r4, r2, #0\n    bl String_New\n    ldr r1, _0222EE54 ; =0x00002BB4\n    add r6, r0, #0\n    ldr r2, [r5, r1]\n    mov r1, #0x41\n    lsl r1, r1, #2\n    add r1, r2, r1\n    mov r2, #0x24\n    bl CopyU16ArrayToStringN\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    add r0, r7, #0\n    mov r1, #1\n    add r2, r6, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222EE54: .word 0x00002BB4"
    );
    #endif
}

void ov74_0222EE58(void) {
    /* Original at 0x0222EE58 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r3, r0, #0\n    ldr r0, _0222EEAC ; =0x00002BB4\n    add r6, r1, #0\n    ldr r1, [r3, r0]\n    mov r0, #0x35\n    lsl r0, r0, #4\n    ldrb r0, [r1, r0]\n    add r5, r2, #0\n    cmp r0, #0\n    bne _0222EE74\n    mov r2, #0x51\n    b _0222EE76\n    mov r2, #0x52\n    mov r1, #0x2a\n    lsl r1, r1, #8\n    ldr r0, [r3, r1]\n    add r1, r1, #4\n    ldr r1, [r3, r1]\n    ldr r3, [r3]\n    bl ReadMsgData_ExpandPlaceholders\n    add r4, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r5, [sp, #8]\n    add r0, r6, #0\n    mov r1, #1\n    add r2, r4, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #1\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0222EEAC: .word 0x00002BB4"
    );
    #endif
}

void ov74_0222EEB0(void) {
    /* Original at 0x0222EEB0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    ldr r1, _0222EF14 ; =0x00002BB4\n    add r4, r0, #0\n    ldr r2, [r4, r1]\n    mov r1, #0xd5\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    add r0, sp, #8\n    bl RTC_ConvertDayToDate\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x2a\n    lsl r0, r0, #8\n    mov r2, #0x7d\n    ldr r3, [sp, #8]\n    lsl r2, r2, #4\n    add r2, r3, r2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    mov r3, #4\n    bl BufferIntegerAsString\n    mov r3, #2\n    mov r0, #0x2a\n    str r3, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    ldr r2, [sp, #0xc]\n    bl BufferIntegerAsString\n    mov r1, #2\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x2a\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    ldr r2, [sp, #0x10]\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    mov r0, #1\n    add sp, #0x18\n    pop {r4, pc}\n    _0222EF14: .word 0x00002BB4"
    );
    #endif
}

void ov74_0222EF18(void) {
    /* Original at 0x0222EF18 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r7, r1, #0\n    mov r0, #0xfb\n    mov r1, #0x55\n    add r4, r2, #0\n    bl String_New\n    ldr r1, _0222EF60 ; =0x00002BB4\n    add r6, r0, #0\n    ldr r2, [r5, r1]\n    mov r1, #0x55\n    lsl r1, r1, #2\n    add r1, r2, r1\n    mov r2, #0xfa\n    bl CopyU16ArrayToStringN\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    add r0, r7, #0\n    mov r1, #1\n    add r2, r6, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222EF60: .word 0x00002BB4"
    );
    #endif
}

u8 ov74_0222EF64(void) {
    return 0;
}

void ov74_0222EF68(void) {
    /* Original at 0x0222EF68 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    ldr r0, _0222EFE0 ; =ov74_0223C6D0\n    add r6, r1, #0\n    ldr r1, [r0, #4]\n    ldr r2, [r0]\n    str r1, [sp, #0x18]\n    ldr r1, [r0, #8]\n    ldr r0, [r0, #0xc]\n    str r2, [sp, #0x14]\n    str r0, [sp, #0x20]\n    ldr r0, _0222EFE4 ; =0x00002B9C\n    str r1, [sp, #0x1c]\n    ldr r4, [r5, r0]\n    add r0, r6, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r6, #0\n    bl RemoveWindow\n    ldr r0, [r4, #8]\n    add r1, r6, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [r4, #0xc]\n    mov r2, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    ldr r0, _0222EFE8 ; =0x00002B98\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, _0222EFEC ; =0x000029FC\n    ldr r3, [r4, #4]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, sp, #0x14\n    mov r2, #2\n    add r3, r6, #0\n    bl ov74_0222ED04\n    mov r0, #1\n    add sp, #0x24\n    pop {r3, r4, r5, r6, pc}\n    _0222EFE0: .word ov74_0223C6D0\n    _0222EFE4: .word 0x00002B9C\n    _0222EFE8: .word 0x00002B98\n    _0222EFEC: .word 0x000029FC"
    );
    #endif
}

void ov74_0222EFF0(void) {
    /* Original at 0x0222EFF0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x55\n    str r0, [sp, #8]\n    add r6, r2, #0\n    mov r0, #0\n    add r4, r3, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    cmp r4, #0\n    beq _0222F018\n    mov r0, #0x1c\n    str r0, [r4]\n    ldr r0, _0222F020 ; =0x00002BF8\n    str r6, [r5, r0]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _0222F020: .word 0x00002BF8"
    );
    #endif
}

void ov74_0222F024(void) {
    /* Original at 0x0222F024 */
    /* Requires manual decompilation - 183 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    ldr r3, [r5]\n    str r2, [sp, #0x14]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xf7\n    ldr r4, _0222F1A4 ; =ov74_0223C700\n    bl NewMsgDataFromNarc\n    ldr r1, _0222F1A8 ; =0x00002A04\n    str r0, [r5, r1]\n    ldr r0, [r5]\n    bl MessageFormat_New\n    mov r1, #0x2a\n    lsl r1, r1, #8\n    str r0, [r5, r1]\n    ldr r1, _0222F1AC ; =0x00002BB8\n    ldr r0, [sp, #0x14]\n    str r0, [r5, r1]\n    ldr r1, [sp, #0x14]\n    add r0, r5, #0\n    bl ov74_0222F314\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    ldr r0, _0222F1B0 ; =0x00002A08\n    add r7, r4, #0\n    str r5, [sp, #0x1c]\n    add r6, r5, r0\n    ldr r1, [r7]\n    ldr r0, [sp, #0x14]\n    cmp r0, r1\n    beq _0222F086\n    cmp r1, #2\n    beq _0222F086\n    ldr r1, [sp, #0x1c]\n    ldr r0, _0222F1B0 ; =0x00002A08\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0222F086\n    add r0, r6, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r6, #0\n    bl RemoveWindow\n    ldr r0, [sp, #0x1c]\n    add r7, #0x30\n    add r0, #0x10\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x2c]\n    add r6, #0x10\n    add r0, r0, #1\n    str r0, [sp, #0x2c]\n    cmp r0, #0xb\n    blo _0222F064\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, _0222F1B0 ; =0x00002A08\n    mov r7, #0x31\n    str r5, [sp, #0x24]\n    str r5, [sp, #0x20]\n    add r6, r5, r0\n    ldr r1, [r4]\n    ldr r0, [sp, #0x14]\n    cmp r0, r1\n    bne _0222F166\n    ldr r1, [sp, #0x24]\n    ldr r0, _0222F1B0 ; =0x00002A08\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _0222F0F4\n    ldr r1, [sp, #0x20]\n    ldr r0, _0222F1B4 ; =0x00002B48\n    mov r2, #0\n    str r7, [r1, r0]\n    ldr r0, [r4, #8]\n    add r1, r6, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [r4, #0xc]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, _0222F1B8 ; =0x000029FC\n    ldr r3, [r4, #4]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #0x14]\n    ldr r1, [r4, #0x1c]\n    lsl r0, r0, #0x18\n    lsl r1, r1, #0x18\n    lsr r0, r0, #0x18\n    lsr r1, r1, #0x18\n    bl GetFontAttribute\n    add r1, r0, #0\n    add r0, r6, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #0x18]\n    ldr r3, [r4, #0x24]\n    str r0, [sp, #0x28]\n    ldr r2, [sp, #0x28]\n    add r0, r5, #0\n    add r1, r6, #0\n    blx r3\n    cmp r0, #1\n    bne _0222F158\n    ldr r2, [r4, #0x20]\n    cmp r2, #0\n    beq _0222F158\n    mov r0, #0x2a\n    ldr r1, _0222F1A8 ; =0x00002A04\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r3, [r5]\n    bl ReadMsgData_ExpandPlaceholders\n    str r0, [sp, #0x30]\n    ldr r0, [r4, #0x2c]\n    ldr r2, [sp, #0x30]\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r1, [r4, #0x14]\n    ldr r3, [r4, #0x28]\n    add r0, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x30]\n    bl String_Delete\n    add r0, r6, #0\n    bl CopyWindowToVram\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    mul r0, r1\n    add r7, r7, r0\n    ldr r0, [sp, #0x24]\n    add r4, #0x30\n    add r0, #0x10\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x20]\n    add r6, #0x10\n    add r0, r0, #4\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #0xb\n    blo _0222F0A8\n    ldr r0, _0222F1A8 ; =0x00002A04\n    ldr r0, [r5, r0]\n    bl DestroyMsgData\n    mov r0, #0x2a\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    bl MessageFormat_Delete\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    bne _0222F19E\n    add r0, r5, #0\n    bl ov74_0222F478\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222F1A4: .word ov74_0223C700\n    _0222F1A8: .word 0x00002A04\n    _0222F1AC: .word 0x00002BB8\n    _0222F1B0: .word 0x00002A08\n    _0222F1B4: .word 0x00002B48\n    _0222F1B8: .word 0x000029FC"
    );
    #endif
}

void ov74_0222F1BC(void) {
    /* Original at 0x0222F1BC */
    /* Requires manual decompilation - 123 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r7, r3, #0\n    mov r3, #0x30\n    ldr r0, _0222F2BC ; =ov74_0223C700\n    mul r3, r2\n    add r6, r1, #0\n    add r4, r0, r3\n    ldr r0, [r6]\n    cmp r0, #0\n    bne _0222F206\n    ldr r0, [r4, #8]\n    mov r2, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [r4, #0xc]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, _0222F2C0 ; =0x000029FC\n    ldr r3, [r4, #4]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    ldr r1, [r4, #0x1c]\n    add r0, r6, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #0x20]\n    cmp r0, #0\n    beq _0222F234\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xf7\n    mov r3, #0x55\n    bl NewMsgDataFromNarc\n    ldr r1, _0222F2C4 ; =0x00002A04\n    str r0, [r5, r1]\n    mov r0, #0x55\n    bl MessageFormat_New\n    mov r1, #0x2a\n    lsl r1, r1, #8\n    str r0, [r5, r1]\n    ldr r0, _0222F2C8 ; =0x00002B98\n    ldr r2, _0222F2CC ; =0x00010200\n    str r7, [r5, r0]\n    add r0, r0, #4\n    str r4, [r5, r0]\n    ldr r3, [r4, #0x24]\n    add r0, r5, #0\n    add r1, r6, #0\n    blx r3\n    ldr r2, [r4, #0x20]\n    cmp r2, #0\n    beq _0222F28E\n    mov r1, #0x2a\n    lsl r1, r1, #8\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r3, #0x55\n    bl ReadMsgData_ExpandPlaceholders\n    str r0, [sp, #0x14]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x18]\n    ldr r2, [sp, #0x14]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r1, [r4, #0x14]\n    add r0, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    ldr r0, _0222F2C4 ; =0x00002A04\n    ldr r0, [r5, r0]\n    bl DestroyMsgData\n    mov r0, #0x2a\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    bl MessageFormat_Delete\n    ldr r0, _0222F2D0 ; =0x00002BC4\n    add r0, r5, r0\n    cmp r6, r0\n    bne _0222F2A4\n    add r0, r6, #0\n    mov r1, #0\n    mov r2, #0x13\n    mov r3, #0xa\n    bl DrawFrameAndWindow2\n    b _0222F2B0\n    add r0, r6, #0\n    mov r1, #0\n    mov r2, #0xa\n    mov r3, #0xe\n    bl DrawFrameAndWindow1\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x10]\n    mul r0, r1\n    add r0, r7, r0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222F2BC: .word ov74_0223C700\n    _0222F2C0: .word 0x000029FC\n    _0222F2C4: .word 0x00002A04\n    _0222F2C8: .word 0x00002B98\n    _0222F2CC: .word 0x00010200\n    _0222F2D0: .word 0x00002BC4"
    );
    #endif
}

void ov74_0222F2D4(void) {
    /* Original at 0x0222F2D4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    mov r2, #1\n    add r5, r0, #0\n    str r2, [sp]\n    add r6, r3, #0\n    ldr r3, [r5]\n    mov r0, #0x71\n    bl GfGfxLoader_LoadFromNarc\n    add r1, sp, #4\n    add r7, r0, #0\n    bl NNS_G2dGetUnpackedScreenData\n    ldr r0, _0222F310 ; =0x000029FC\n    ldr r2, [sp, #4]\n    lsl r1, r4, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    add r2, #0xc\n    add r3, r6, #0\n    bl BG_LoadScreenTilemapData\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222F310: .word 0x000029FC"
    );
    #endif
}

void ov74_0222F314(void) {
    /* Original at 0x0222F314 */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #1\n    lsl r0, r0, #8\n    str r0, [sp]\n    ldr r0, [r5]\n    mov r2, #0\n    add r4, r1, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #7\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _0222F400 ; =0x000029FC\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    mov r0, #0x71\n    mov r1, #0xa\n    bl GfGfxLoader_LoadCharData\n    cmp r4, #0\n    beq _0222F35A\n    cmp r4, #1\n    beq _0222F37A\n    b _0222F398\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _0222F400 ; =0x000029FC\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    mov r0, #0x71\n    mov r1, #8\n    bl GfGfxLoader_LoadScrnData\n    b _0222F398\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _0222F400 ; =0x000029FC\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    mov r0, #0x71\n    mov r1, #9\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    add r3, r0, #0\n    add r2, r1, #0\n    add r3, #0xef\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _0222F400 ; =0x000029FC\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    mov r0, #0x71\n    mov r3, #3\n    bl GfGfxLoader_LoadCharData\n    mov r2, #3\n    add r0, r5, #0\n    mov r1, #2\n    lsl r3, r2, #9\n    bl ov74_0222F2D4\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    ldr r0, _0222F400 ; =0x000029FC\n    mov r2, #0\n    ldr r0, [r5, r0]\n    mov r1, #3\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    ldr r0, _0222F400 ; =0x000029FC\n    mov r1, #3\n    ldr r0, [r5, r0]\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0222F400: .word 0x000029FC"
    );
    #endif
}

void ov74_0222F404(void) {
    /* Original at 0x0222F404 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    bl OverlayManager_GetData\n    ldr r1, _0222F46C ; =0x00002BBC\n    ldr r0, [r0, r1]\n    bl ListMenu_ProcessInput\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _0222F42A\n    add r0, r0, #1\n    cmp r4, r0\n    beq _0222F468\n    b _0222F444\n    ldr r0, _0222F470 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    cmp r6, #0\n    beq _0222F468\n    add r0, r7, #0\n    blx r6\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222F468\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0222F470 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    cmp r4, #0\n    beq _0222F468\n    cmp r4, #0x1f\n    bhs _0222F456\n    str r4, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0222F474 ; =ov74_0223D0C0\n    str r4, [r0]\n    add r0, r7, #0\n    blx r4\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222F468\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222F46C: .word 0x00002BBC\n    _0222F470: .word SEQ_SE_DP_SELECT\n    _0222F474: .word ov74_0223D0C0"
    );
    #endif
}

void ov74_0222F478(void) {
    /* Original at 0x0222F478 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    ldr r1, _0222F58C ; =0x00002D84\n    add r7, r0, #0\n    ldr r0, [r7, r1]\n    cmp r0, #0\n    bne _0222F4D8\n    add r0, r1, #4\n    ldr r0, [r7, r0]\n    cmp r0, #0\n    bne _0222F4D8\n    add r1, #8\n    ldr r0, [r7, r1]\n    cmp r0, #0\n    bne _0222F4D8\n    bl ov74_0223567C\n    cmp r0, #1\n    bne _0222F4A4\n    add r0, r7, #0\n    bl ov74_0222EC60\n    bl ov74_0223563C\n    bl ov74_02235690\n    mov r0, #0x1c\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #0x1e\n    mov r2, #0x1b\n    mov r3, #0x1d\n    bl ov74_02235728\n    bl sub_02074490\n    add r1, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r7]\n    mov r2, #1\n    str r0, [sp, #4]\n    mov r0, #0x14\n    mov r3, #0x60\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0xb2\n    mov r4, #0\n    str r0, [sp, #0x10]\n    str r4, [sp, #0xc]\n    add r5, r7, #0\n    mov r6, #0x64\n    ldr r0, _0222F590 ; =0x00002BB4\n    ldr r0, [r7, r0]\n    add r1, r0, r4\n    ldr r0, _0222F594 ; =0x0000034A\n    ldrh r0, [r1, r0]\n    str r0, [sp, #8]\n    cmp r0, #0\n    bne _0222F504\n    ldr r0, _0222F58C ; =0x00002D84\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _0222F56E\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    b _0222F56E\n    ldr r0, [sp, #0xc]\n    ldr r1, _0222F58C ; =0x00002D84\n    add r0, #0xa\n    str r0, [sp]\n    ldr r1, [r5, r1]\n    ldr r2, [sp, #0x10]\n    mov r0, #0\n    mov r3, #0x10\n    bl ov74_02235930\n    ldr r1, _0222F58C ; =0x00002D84\n    str r0, [r5, r1]\n    mov r1, #0\n    ldr r0, [sp, #8]\n    add r2, r1, #0\n    bl GetMonIconNaixEx\n    add r1, r0, #0\n    ldr r0, [r7]\n    mov r2, #0\n    str r0, [sp]\n    mov r0, #0x14\n    add r3, sp, #0x18\n    bl GfGfxLoader_GetCharData\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    mov r1, #2\n    ldr r0, [r0, #0x14]\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    ldr r0, [sp, #0x18]\n    mov r2, #2\n    ldr r0, [r0, #0x14]\n    lsl r1, r6, #5\n    lsl r2, r2, #8\n    bl GX_LoadOBJ\n    mov r1, #0\n    ldr r0, [sp, #8]\n    add r2, r1, #0\n    bl GetMonIconPaletteEx\n    add r1, r0, #0\n    ldr r0, _0222F58C ; =0x00002D84\n    add r1, r1, #3\n    ldr r0, [r5, r0]\n    bl Sprite_SetPaletteOverride\n    ldr r0, [sp, #0x14]\n    bl Heap_Free\n    ldr r0, [sp, #0xc]\n    add r4, r4, #2\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r5, r5, #4\n    add r0, #0x19\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    add r6, #0x10\n    cmp r0, #3\n    blt _0222F4E4\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222F58C: .word 0x00002D84\n    _0222F590: .word 0x00002BB4\n    _0222F594: .word 0x0000034A"
    );
    #endif
}

void ov74_0222F598(void) {
    /* Original at 0x0222F598 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #3\n    mov r1, #0x55\n    lsl r2, r0, #0x10\n    bl Heap_Create\n    ldr r1, _0222F5F4 ; =0x00003D0C\n    add r0, r4, #0\n    mov r2, #0x55\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _0222F5F4 ; =0x00003D0C\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #0x55\n    bl BgConfig_Alloc\n    ldr r1, _0222F5F8 ; =0x000029FC\n    str r0, [r4, r1]\n    mov r0, #0x55\n    str r0, [r4]\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    ldr r0, _0222F5FC ; =0x00002BF4\n    mov r1, #1\n    str r1, [r4, r0]\n    mov r0, #0x55\n    bl ov74_022352A0\n    mov r2, #0x57\n    mov r0, #0\n    mov r1, #0x59\n    lsl r2, r2, #4\n    bl Heap_Create\n    mov r0, #1\n    pop {r4, pc}\n    _0222F5F4: .word 0x00003D0C\n    _0222F5F8: .word 0x000029FC\n    _0222F5FC: .word 0x00002BF4"
    );
    #endif
}

void ov74_0222F600(void) {
    /* Original at 0x0222F600 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl sub_02014AA0\n    mov r0, #3\n    lsl r0, r0, #0xa\n    ldr r0, [r4, r0]\n    bl sub_02014A60\n    ldr r1, _0222F620 ; =0x04000010\n    mov r2, #8\n    mov r3, #1\n    bl sub_02014AB0\n    pop {r4, pc}\n    nop\n    _0222F620: .word 0x04000010"
    );
    #endif
}

void ov74_0222F624(void) {
    /* Original at 0x0222F624 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, _0222F678 ; =0x000030E8\n    ldr r5, _0222F67C ; =0x00000C14\n    add r4, r0, r4\n    add r0, r5, #0\n    str r1, [r4, r5]\n    sub r0, #0xc\n    str r2, [r4, r0]\n    add r0, r5, #0\n    sub r0, #8\n    sub r5, #0x14\n    str r3, [r4, r0]\n    ldr r0, [r4, r5]\n    cmp r0, #0\n    bne _0222F656\n    mov r2, #6\n    lsl r2, r2, #8\n    mov r0, #0x55\n    add r1, r4, #0\n    add r2, r4, r2\n    bl sub_02014A08\n    mov r1, #3\n    lsl r1, r1, #0xa\n    str r0, [r4, r1]\n    ldr r0, _0222F680 ; =0x00000C04\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0222F66E\n    mov r2, #1\n    ldr r0, _0222F684 ; =ov74_0222F600\n    add r1, r4, #0\n    lsl r2, r2, #0xa\n    bl SysTask_CreateOnVBlankQueue\n    ldr r1, _0222F680 ; =0x00000C04\n    str r0, [r4, r1]\n    mov r0, #0xc1\n    mov r1, #1\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    _0222F678: .word 0x000030E8\n    _0222F67C: .word 0x00000C14\n    _0222F680: .word 0x00000C04\n    _0222F684: .word ov74_0222F600"
    );
    #endif
}

void ov74_0222F688(void) {
    /* Original at 0x0222F688 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0222F6BC ; =0x000030E8\n    add r4, r0, r1\n    mov r0, #3\n    lsl r0, r0, #0xa\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222F69C\n    bl sub_02014A38\n    ldr r0, _0222F6C0 ; =0x00000C04\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222F6A8\n    bl SysTask_Destroy\n    mov r0, #3\n    mov r1, #0\n    lsl r0, r0, #0xa\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    bl sub_02014AA0\n    pop {r4, pc}\n    nop\n    _0222F6BC: .word 0x000030E8\n    _0222F6C0: .word 0x00000C04"
    );
    #endif
}

void ov74_0222F6C4(void) {
    /* Original at 0x0222F6C4 */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _0222F7CC ; =0x000030E8\n    mov r5, #0x15\n    add r4, r0, r1\n    mov r0, #0xc1\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    lsl r5, r5, #0xe\n    cmp r1, #0\n    bne _0222F6DC\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r0, #4\n    ldr r1, [r4, r1]\n    cmp r1, #1\n    bne _0222F72A\n    add r1, r0, #0\n    sub r1, #8\n    ldr r2, [r4, r1]\n    sub r1, r0, #4\n    ldr r1, [r4, r1]\n    add r2, r2, r1\n    add r1, r0, #0\n    sub r1, #8\n    str r2, [r4, r1]\n    sub r1, r0, #4\n    ldr r2, [r4, r1]\n    add r1, r2, #0\n    add r2, r2, r1\n    sub r1, r0, #4\n    str r2, [r4, r1]\n    add r1, r0, #0\n    sub r1, #8\n    ldr r2, [r4, r1]\n    asr r1, r2, #0xb\n    lsr r1, r1, #0x14\n    add r1, r2, r1\n    asr r2, r1, #0xc\n    mov r1, #0xfa\n    lsl r1, r1, #2\n    cmp r2, r1\n    ble _0222F764\n    mov r2, #0\n    add r1, r0, #0\n    str r2, [r4, r0]\n    sub r1, #8\n    str r2, [r4, r1]\n    sub r0, r0, #4\n    mov r5, #0xa8\n    str r2, [r4, r0]\n    b _0222F764\n    add r1, r0, #0\n    sub r1, #8\n    ldr r2, [r4, r1]\n    sub r1, r0, #4\n    ldr r1, [r4, r1]\n    sub r2, r2, r1\n    add r1, r0, #0\n    sub r1, #8\n    str r2, [r4, r1]\n    sub r1, r0, #4\n    ldr r2, [r4, r1]\n    lsr r1, r2, #0x1f\n    add r1, r2, r1\n    asr r2, r1, #1\n    sub r1, r0, #4\n    str r2, [r4, r1]\n    mov r2, #1\n    ldr r1, [r4, r1]\n    lsl r2, r2, #0xa\n    cmp r1, r2\n    bge _0222F764\n    mov r1, #0\n    lsl r3, r2, #2\n    add r2, r0, #0\n    str r1, [r4, r0]\n    sub r2, #8\n    str r3, [r4, r2]\n    sub r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #3\n    lsl r0, r0, #0xa\n    ldr r0, [r4, r0]\n    bl sub_02014A4C\n    add r2, r0, #0\n    mov r0, #0x54\n    add r3, r0, #0\n    add r3, #0xfc\n    asr r1, r5, #0xb\n    lsr r1, r1, #0x14\n    add r1, r5, r1\n    asr r1, r1, #0xc\n    bpl _0222F782\n    mov r1, #0\n    cmp r1, #0xa8\n    ble _0222F788\n    mov r1, #0xa8\n    lsl r6, r3, #1\n    add r7, r2, r6\n    sub r6, r1, r0\n    strh r6, [r7, #6]\n    ldrh r6, [r7, #6]\n    sub r1, r0, r1\n    add r3, r3, #4\n    strh r6, [r7, #2]\n    mov r6, #0xa8\n    sub r6, r6, r0\n    lsl r6, r6, #3\n    add r6, r2, r6\n    strh r1, [r6, #6]\n    ldrh r1, [r6, #6]\n    add r0, r0, #1\n    strh r1, [r6, #2]\n    ldr r1, _0222F7D0 ; =0x00000C08\n    ldr r1, [r4, r1]\n    add r5, r5, r1\n    cmp r0, #0xa8\n    blt _0222F776\n    mov r1, #6\n    add r0, r2, #0\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    mov r0, #3\n    lsl r0, r0, #0xa\n    ldr r0, [r4, r0]\n    bl sub_02014A8C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222F7CC: .word 0x000030E8\n    _0222F7D0: .word 0x00000C08"
    );
    #endif
}

void ov74_0222F7D4(void) {
    /* Original at 0x0222F7D4 */
    /* Requires manual decompilation - 367 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r6, r0, #0\n    bl OverlayManager_GetData\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #0x1e\n    bls _0222F7EA\n    b _0222FB2C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0222F7F6: ; jump table\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    ldr r1, [r0, #8]\n    ldr r0, _0222FB50 ; =0x00002BA4\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    bl Save_MysteryGift_Get\n    ldr r1, _0222FB54 ; =0x00002BA0\n    str r0, [r4, r1]\n    add r0, r1, #4\n    ldr r0, [r4, r0]\n    bl Save_PlayerData_GetOptionsAddr\n    ldr r1, _0222FB58 ; =0x00002BA8\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    bl Options_GetFrame\n    ldr r1, _0222FB5C ; =0x00002BAC\n    str r0, [r4, r1]\n    sub r1, #0xc\n    ldr r0, [r4, r1]\n    mov r1, #4\n    bl SaveMysteryGift_CardGetByIdx\n    ldr r1, _0222FB60 ; =0x00002BB4\n    str r0, [r4, r1]\n    mov r0, #1\n    str r0, [r5]\n    b _0222FB2C\n    bl ov74_0222FCA4\n    ldr r0, _0222FB64 ; =0x000029FC\n    ldr r0, [r4, r0]\n    bl ov74_0222FCC4\n    mov r0, #2\n    str r0, [r5]\n    b _0222FB2C\n    bl ResetAllTextPrinters\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_0222F314\n    mov r1, #0x1e\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x55\n    bl LoadFontPal0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x55\n    str r0, [sp, #4]\n    ldr r0, _0222FB64 ; =0x000029FC\n    mov r2, #1\n    ldr r0, [r4, r0]\n    mov r3, #0xd\n    bl LoadUserFrameGfx1\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x55\n    str r0, [sp, #4]\n    ldr r0, _0222FB64 ; =0x000029FC\n    mov r1, #0\n    ldr r0, [r4, r0]\n    mov r2, #0xa\n    mov r3, #0xe\n    bl LoadUserFrameGfx1\n    ldr r0, _0222FB5C ; =0x00002BAC\n    mov r1, #0\n    ldr r0, [r4, r0]\n    mov r2, #0x13\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x55\n    str r0, [sp, #4]\n    ldr r0, _0222FB64 ; =0x000029FC\n    mov r3, #0xa\n    ldr r0, [r4, r0]\n    bl LoadUserFrameGfx2\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov74_0222F024\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    add r3, r5, #0\n    bl ov74_0222EFF0\n    b _0222FB2C\n    ldr r0, _0222FB68 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _0222F91A\n    ldr r0, _0222FB6C ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x1d\n    add r3, r5, #0\n    bl ov74_0222EFF0\n    b _0222FB2C\n    mov r0, #1\n    tst r0, r1\n    bne _0222F922\n    b _0222FB2C\n    ldr r0, _0222FB6C ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    mov r0, #4\n    str r0, [r5]\n    b _0222FB2C\n    ldr r1, _0222FB70 ; =0x00002BC4\n    mov r3, #0xa\n    add r1, r4, r1\n    mov r2, #7\n    lsl r3, r3, #6\n    bl ov74_0222F1BC\n    ldr r3, _0222FB74 ; =0x00002BE4\n    mov r2, #8\n    add r1, r3, #0\n    str r0, [r4, r3]\n    sub r1, #0x10\n    ldr r3, [r4, r3]\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov74_0222F1BC\n    mov r0, #5\n    str r0, [r5]\n    b _0222FB2C\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov74_0222F404\n    ldr r0, _0222FB68 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _0222FA28\n    ldr r0, _0222FB6C ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    mov r0, #0xb\n    str r0, [r5]\n    b _0222FB2C\n    ldr r0, _0222FB78 ; =SEQ_SE_DP_CARD2\n    bl PlaySE\n    mov r0, #0x10\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _0222FB70 ; =0x00002BC4\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222ECEC\n    ldr r0, _0222FB7C ; =0x00002BD4\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222ECD4\n    mov r1, #1\n    add r0, r4, #0\n    lsl r2, r1, #0xc\n    mov r3, #0x66\n    bl ov74_0222F624\n    mov r0, #7\n    str r0, [r5]\n    b _0222FB2C\n    bl ov74_0222F6C4\n    cmp r0, #0\n    beq _0222FA28\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov74_0222F024\n    ldr r2, _0222FB80 ; =0x00708000\n    add r0, r4, #0\n    mov r1, #0\n    lsr r3, r2, #1\n    bl ov74_0222F624\n    mov r0, #8\n    str r0, [r5]\n    b _0222FB2C\n    bl ov74_0222F6C4\n    ldr r0, _0222FB68 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0222FA28\n    ldr r0, _0222FB78 ; =SEQ_SE_DP_CARD2\n    bl PlaySE\n    mov r1, #1\n    add r0, r4, #0\n    lsl r2, r1, #0xc\n    mov r3, #0x66\n    bl ov74_0222F624\n    mov r0, #9\n    str r0, [r5]\n    b _0222FB2C\n    bl ov74_0222F6C4\n    cmp r0, #0\n    beq _0222FA28\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov74_0222F024\n    ldr r2, _0222FB80 ; =0x00708000\n    add r0, r4, #0\n    mov r1, #0\n    lsr r3, r2, #1\n    bl ov74_0222F624\n    mov r0, #0x10\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0xa\n    str r0, [r5]\n    b _0222FB2C\n    bl ov74_0222F6C4\n    cmp r0, #0\n    bne _0222FA2A\n    b _0222FB2C\n    ldr r0, _0222FB70 ; =0x00002BC4\n    mov r1, #0\n    add r0, r4, r0\n    mov r2, #0x13\n    mov r3, #0xa\n    bl DrawFrameAndWindow2\n    ldr r0, _0222FB7C ; =0x00002BD4\n    mov r1, #0\n    add r0, r4, r0\n    mov r2, #0xa\n    mov r3, #0xe\n    bl DrawFrameAndWindow1\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    bl ov74_0222F688\n    mov r0, #5\n    str r0, [r5]\n    b _0222FB2C\n    bl ov74_0222EDC0\n    ldr r0, _0222FB70 ; =0x00002BC4\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222ECEC\n    ldr r0, _0222FB70 ; =0x00002BC4\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0222FB70 ; =0x00002BC4\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #3\n    str r0, [r5]\n    b _0222FB2C\n    mov r1, #0\n    mov r2, #0x15\n    add r3, r5, #0\n    bl ov74_0222EFF0\n    b _0222FB2C\n    bl ov74_0222EC60\n    ldr r0, _0222FB70 ; =0x00002BC4\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222ECEC\n    ldr r0, _0222FB7C ; =0x00002BD4\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222ECD4\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov74_0222F024\n    mov r1, #0x1e\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x55\n    bl LoadFontPal0\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #4\n    add r3, r5, #0\n    bl ov74_0222EFF0\n    b _0222FB2C\n    bl sub_02037D78\n    cmp r0, #0\n    bne _0222FB2C\n    ldr r0, _0222FB84 ; =0x00002BF8\n    ldr r0, [r4, r0]\n    str r0, [r5]\n    b _0222FB2C\n    ldr r0, _0222FB68 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0222FB2C\n    ldr r0, _0222FB70 ; =0x00002BC4\n    mov r1, #0\n    add r0, r4, r0\n    bl ov74_0222ECEC\n    ldr r0, _0222FB70 ; =0x00002BC4\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0222FB70 ; =0x00002BC4\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #3\n    str r0, [r5]\n    b _0222FB2C\n    mov r1, #0\n    mov r2, #0x1d\n    add r3, r5, #0\n    bl ov74_0222EFF0\n    b _0222FB2C\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0222FB2C\n    ldr r0, _0222FB84 ; =0x00002BF8\n    ldr r0, [r4, r0]\n    str r0, [r5]\n    b _0222FB2C\n    bl ov74_0222EC60\n    add r0, r4, #0\n    bl ov74_0222F688\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _0222FB88 ; =0x00002BFC\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222FB38\n    bl SpriteList_RenderAndAnimateSprites\n    bl ov74_022358BC\n    mov r0, #0x3d\n    lsl r0, r0, #8\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0222FB4A\n    add r0, r4, #0\n    blx r1\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0222FB50: .word 0x00002BA4\n    _0222FB54: .word 0x00002BA0\n    _0222FB58: .word 0x00002BA8\n    _0222FB5C: .word 0x00002BAC\n    _0222FB60: .word 0x00002BB4\n    _0222FB64: .word 0x000029FC\n    _0222FB68: .word gSystem\n    _0222FB6C: .word SEQ_SE_DP_SELECT\n    _0222FB70: .word 0x00002BC4\n    _0222FB74: .word 0x00002BE4\n    _0222FB78: .word SEQ_SE_DP_CARD2\n    _0222FB7C: .word 0x00002BD4\n    _0222FB80: .word 0x00708000\n    _0222FB84: .word 0x00002BF8\n    _0222FB88: .word 0x00002BFC"
    );
    #endif
}

void ov74_0222FB8C(void) {
    /* Original at 0x0222FB8C */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    bl OverlayManager_GetData\n    add r7, r0, #0\n    ldr r0, _0222FC38 ; =0x00002A08\n    mov r6, #0\n    add r4, r7, #0\n    add r5, r7, r0\n    ldr r0, _0222FC38 ; =0x00002A08\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222FBB2\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r5, #0\n    bl RemoveWindow\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, #0x10\n    cmp r6, #0xb\n    blo _0222FB9E\n    ldr r0, _0222FC3C ; =0x00002BC4\n    ldr r1, [r7, r0]\n    cmp r1, #0\n    beq _0222FBD2\n    add r0, r7, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0222FC3C ; =0x00002BC4\n    add r0, r7, r0\n    bl RemoveWindow\n    ldr r0, _0222FC40 ; =0x00002BD4\n    ldr r1, [r7, r0]\n    cmp r1, #0\n    beq _0222FBE8\n    add r0, r7, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0222FC40 ; =0x00002BD4\n    add r0, r7, r0\n    bl RemoveWindow\n    ldr r0, _0222FC44 ; =0x000029FC\n    mov r1, #0\n    ldr r0, [r7, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _0222FC44 ; =0x000029FC\n    mov r1, #1\n    ldr r0, [r7, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _0222FC44 ; =0x000029FC\n    mov r1, #2\n    ldr r0, [r7, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _0222FC44 ; =0x000029FC\n    mov r1, #3\n    ldr r0, [r7, r0]\n    bl FreeBgTilemapBuffer\n    ldr r0, _0222FC44 ; =0x000029FC\n    ldr r0, [r7, r0]\n    bl Heap_Free\n    ldr r0, _0222FC48 ; =FS_OVERLAY_ID(OVY_74)\n    ldr r1, _0222FC4C ; =gApp_MainMenu_SelectOption_MysteryGift\n    bl RegisterMainOverlay\n    mov r0, #0x59\n    bl Heap_Destroy\n    ldr r0, [sp]\n    bl OverlayManager_FreeData\n    mov r0, #0x55\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222FC38: .word 0x00002A08\n    _0222FC3C: .word 0x00002BC4\n    _0222FC40: .word 0x00002BD4\n    _0222FC44: .word 0x000029FC\n    _0222FC48: .word FS_OVERLAY_ID(OVY_74)\n    _0222FC4C: .word gApp_MainMenu_SelectOption_MysteryGift"
    );
    #endif
}

void ov74_0222FC50(void) {
    /* Original at 0x0222FC50 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    bl ov74_0222FCC4\n    ldr r1, _0222FC98 ; =0x00003D0C\n    add r0, r5, #0\n    bl Heap_AllocAtEnd\n    ldr r2, _0222FC98 ; =0x00003D0C\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    ldr r0, _0222FC9C ; =0x000029FC\n    mov r1, #0x1e\n    str r6, [r4, r0]\n    mov r0, #0\n    lsl r1, r1, #4\n    add r2, r5, #0\n    str r5, [r4]\n    bl LoadFontPal0\n    ldr r0, _0222FCA0 ; =0x00002BB4\n    mov r1, #1\n    str r7, [r4, r0]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov74_0222F024\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222FC98: .word 0x00003D0C\n    _0222FC9C: .word 0x000029FC\n    _0222FCA0: .word 0x00002BB4"
    );
    #endif
}

void ov74_0222FCA4(void) {
    GfGfx_SetBanks(5);
}

void ov74_0222FCC4(void) {
    /* Original at 0x0222FCC4 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x80\n    ldr r5, _0222FD84 ; =_0223B430\n    add r3, sp, #0x70\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _0222FD88 ; =_0223B45C\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0222FD8C ; =_0223B494\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0222FD90 ; =_0223B478\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0222FD94 ; =_0223B440\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x80\n    pop {r3, r4, r5, pc}\n    nop\n    _0222FD84: .word _0223B430\n    _0222FD88: .word _0223B45C\n    _0222FD8C: .word _0223B494\n    _0222FD90: .word _0223B478\n    _0222FD94: .word _0223B440"
    );
    #endif
}

void ov74_0222FD98(void) {
    /* Original at 0x0222FD98 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    bl Save_MysteryGift_Get\n    mov r1, #0\n    ldr r4, [r5, #0x48]\n    mvn r1, r1\n    add r6, r0, #0\n    cmp r4, r1\n    bne _0222FDCC\n    add r2, r5, #0\n    add r2, #0x4c\n    ldrh r2, [r2]\n    lsr r1, r1, #0x10\n    cmp r2, r1\n    bne _0222FDCC\n    bl Save_MysteryGift_Init\n    add r0, r7, #0\n    mov r1, #0\n    bl Save_NowWriteFile_AfterMGInit\n    mov r0, #0\n    bl OS_ResetSystem\n    add r0, r5, #0\n    add r0, #0x4c\n    ldrh r1, [r0]\n    cmp r1, #0x64\n    blo _0222FDE0\n    cmp r1, #0x98\n    bhi _0222FDE0\n    mov r0, #0x46\n    lsl r0, r0, #6\n    orr r4, r0\n    cmp r4, #0\n    bne _0222FDE8\n    mov r4, #0\n    mvn r4, r4\n    #ifdef HEARTGOLD\n    mov r0, #0x80\n    #else\n    mov r0, #1\n    lsl r0, r0, #8\n    #endif\n    tst r0, r4\n    bne _0222FDF2\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r0, #0x4e\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0222FE0E\n    add r0, r6, #0\n    bl SaveMysteryGift_ReceivedFlagTest\n    cmp r0, #1\n    bne _0222FE0E\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r0, #0x4e\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0222FE2A\n    add r0, r6, #0\n    bl SaveMysteryGift_CardFindAvailable\n    cmp r0, #0\n    bne _0222FE2A\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl SaveMysteryGift_FindAvailable\n    cmp r0, #0\n    bne _0222FE38\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    add r5, #0x4e\n    ldrb r0, [r5]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0222FE48\n    mov r0, #5\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_0222FE4C(void) {
    ov74_02231070(4);
    ov74_02231724();
}

void ov74_0222FE5C(void) {
    ov74_022311F4();
}

void ov74_0222FE68(void) {
    ov74_02231214();
}

void ov74_0222FE78(void) {
    /* Original at 0x0222FE78 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl ov74_0223107C\n    cmp r0, #0xc\n    bne _0222FE9A\n    bl ov74_0223105C\n    add r4, r0, #0\n    ldr r0, [r4, #0x1c]\n    cmp r0, #0\n    bne _0222FE96\n    bl ov74_02231724\n    mov r0, #1\n    str r0, [r4, #0x1c]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov74_0222FEA0(void) {
    /* Original at 0x0222FEA0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov74_0223115C\n    mov r3, #0\n    add r1, r3, #0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _0222FEBC\n    ldrh r2, [r0, #6]\n    cmp r4, r2\n    bne _0222FEBC\n    strb r1, [r0, #8]\n    strb r1, [r0, #0xa]\n    add r3, r3, #1\n    add r0, #0xc\n    cmp r3, #8\n    blt _0222FEAC\n    pop {r4, pc}"
    );
    #endif
}

void ov74_0222FEC8(void) {
    /* Original at 0x0222FEC8 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_0223115C\n    add r1, r0, #0\n    add r1, #0x62\n    ldrh r3, [r1]\n    mov r2, #1\n    add r1, r3, #0\n    tst r1, r2\n    beq _0222FEEE\n    add r1, r0, #0\n    add r1, #0x62\n    ldrh r3, [r1]\n    mov r1, #1\n    add r0, #0x62\n    bic r3, r1\n    strh r3, [r0]\n    add r0, r2, #0\n    pop {r3, pc}\n    mov r1, #0x40\n    add r2, r3, #0\n    tst r2, r1\n    beq _0222FF08\n    add r1, r0, #0\n    add r1, #0x62\n    ldrh r2, [r1]\n    mov r1, #0x40\n    add r0, #0x62\n    bic r2, r1\n    strh r2, [r0]\n    mov r0, #7\n    pop {r3, pc}\n    lsl r1, r1, #6\n    tst r1, r3\n    beq _0222FF20\n    add r1, r0, #0\n    add r1, #0x62\n    ldrh r2, [r1]\n    ldr r1, _0222FF24 ; =0xFFFFEFFF\n    add r0, #0x62\n    and r1, r2\n    strh r1, [r0]\n    mov r0, #0xd\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _0222FF24: .word 0xFFFFEFFF"
    );
    #endif
}

void ov74_0222FF28(void) {
    /* Original at 0x0222FF28 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl ov74_0223115C\n    add r4, r0, #0\n    mov r1, #1\n    add r0, #0x60\n    strb r1, [r0]\n    bl WM_GetAllowedChannel\n    add r1, r4, #0\n    add r1, #0x62\n    strh r0, [r1]\n    add r0, r4, #0\n    add r0, #0x62\n    ldrh r1, [r0]\n    cmp r1, #0\n    beq _0222FF52\n    mov r0, #2\n    lsl r0, r0, #0xe\n    cmp r1, r0\n    bne _0222FF56\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x66\n    add r0, #0x61\n    strb r1, [r0]\n    mov r0, #0\n    add r4, #0x64\n    strb r0, [r4]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov74_0222FF68(void) {
    ov74_02231054();
    WM_GetDispersionBeaconPeriod();
    *((u16*)(r4 + 0x18)) = r0;
    WM_GetNextTgid();
    *((u16*)(r4 + 0xc)) = r0;
}

void ov74_0222FF80(void) {
    ov74_022310C4();
    ov74_02231100();
    ov74_02231054();
    *((u16*)(r4 + 4)) = r0;
    WM_GetDispersionScanPeriod();
    *((u16*)(r4 + 6)) = r0;
    *((u8*)(r4 + 8)) = 0xff;
    *((u8*)(r4 + 9)) = 0xff;
    *((u8*)(r4 + 0xa)) = 0xff;
    *((u8*)(r4 + 0xb)) = 0xff;
    *((u8*)(r4 + 0xc)) = 0xff;
    *((u8*)(r4 + 0xd)) = 0xff;
}

void ov74_0222FFAC(void) {
    /* Original at 0x0222FFAC */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl ov74_022310C4\n    add r7, r0, #0\n    bl WM_GetAllowedChannel\n    add r3, r0, #0\n    beq _0222FFF8\n    ldrh r2, [r7, #4]\n    mov r1, #0\n    mov r0, #1\n    mov ip, r2\n    mov r4, #0x1c\n    lsr r6, r2, #0x1f\n    lsl r5, r2, #0x1c\n    sub r5, r5, r6\n    ror r5, r4\n    add r5, r6, r5\n    add r6, r0, #0\n    lsl r6, r5\n    add r5, r3, #0\n    tst r5, r6\n    beq _0222FFF0\n    mov r0, ip\n    add r0, r0, r1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1c\n    sub r1, r1, r2\n    mov r0, #0x1c\n    ror r1, r0\n    add r0, r2, r1\n    add r0, r0, #1\n    strh r0, [r7, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r1, #1\n    add r2, r2, #1\n    cmp r1, #0x10\n    blt _0222FFC6\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_0222FFFC(void) {
    /* Original at 0x0222FFFC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #4]\n    bl ov74_0223144C\n    ldrh r0, [r4, #2]\n    cmp r0, #8\n    bne _02230014\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02230018(void) {
    /* Original at 0x02230018 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #8]\n    bl ov74_0223144C\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    beq _0223002C\n    bl ov74_02231448\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02230030(void) {
    /* Original at 0x02230030 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    bne _02230066\n    mov r0, #2\n    bl ov74_02231070\n    bl ov74_0223107C\n    cmp r0, #0xc\n    bne _02230052\n    bl ov74_022314BC\n    mov r0, #2\n    bl ov74_02231070\n    pop {r3, pc}\n    bl ov74_022316E8\n    cmp r0, #0\n    bne _0223006E\n    bl ov74_022314BC\n    mov r0, #2\n    bl ov74_02231070\n    pop {r3, pc}\n    bl ov74_02231448\n    bl ov74_022314BC\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230070(void) {
    /* Original at 0x02230070 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    bne _0223009A\n    bl ov74_0223107C\n    cmp r0, #0xc\n    bne _02230092\n    bl WM_Finish\n    mov r0, #0xc\n    bl ov74_02231070\n    mov r0, #1\n    bl ov74_0223113C\n    pop {r3, pc}\n    mov r0, #1\n    bl ov74_02231070\n    pop {r3, pc}\n    bl ov74_02231448\n    mov r0, #4\n    bl ov74_02231070\n    pop {r3, pc}"
    );
    #endif
}

void ov74_022300A8(void) {
    /* Original at 0x022300A8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #2]\n    cmp r0, #0\n    bne _02230106\n    bl ov74_0223115C\n    add r4, r0, #0\n    add r0, #0x61\n    ldrh r1, [r5, #0xa]\n    ldrb r0, [r0]\n    cmp r0, r1\n    ble _022300D0\n    add r0, r4, #0\n    add r0, #0x61\n    strb r1, [r0]\n    add r0, r4, #0\n    ldrh r1, [r5, #8]\n    add r0, #0x64\n    strb r1, [r0]\n    bl ov74_0222FEC8\n    cmp r0, #0\n    beq _022300E6\n    bl ov74_022314DC\n    cmp r0, #0\n    bne _0223010E\n    bl ov74_0222FE4C\n    pop {r3, r4, r5, pc}\n    add r4, #0x61\n    ldrb r0, [r4]\n    cmp r0, #0x66\n    bhs _02230100\n    bl ov74_0222FF68\n    bl ov74_02231508\n    cmp r0, #0\n    bne _0223010E\n    bl ov74_0222FE4C\n    pop {r3, r4, r5, pc}\n    bl ov74_0222FE4C\n    pop {r3, r4, r5, pc}\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_02230110(void) {
    /* Original at 0x02230110 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    bne _0223012E\n    bl ov74_0222FE78\n    cmp r0, #0\n    bne _02230136\n    bl ov74_02231544\n    cmp r0, #0\n    bne _02230136\n    bl ov74_0222FE4C\n    pop {r3, pc}\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230138(void) {
    /* Original at 0x02230138 */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldrh r0, [r5, #8]\n    bl ov74_0223144C\n    ldrh r0, [r5, #2]\n    cmp r0, #0\n    beq _0223014C\n    b _0223025E\n    bl ov74_0223115C\n    add r4, r0, #0\n    mov r0, #8\n    bl ov74_02231070\n    bl ov74_0222FE78\n    cmp r0, #0\n    beq _02230162\n    b _02230266\n    add r0, r4, #0\n    add r0, #0x60\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02230174\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0x60\n    strb r1, [r0]\n    ldrh r0, [r5, #8]\n    cmp r0, #7\n    bgt _0223018C\n    bge _022301AE\n    cmp r0, #2\n    bgt _02230266\n    cmp r0, #0\n    blt _02230266\n    beq _02230194\n    add sp, #0xc\n    cmp r0, #2\n    pop {r4, r5, pc}\n    cmp r0, #9\n    beq _02230254\n    add sp, #0xc\n    pop {r4, r5, pc}\n    bl ov74_02231670\n    cmp r0, #0\n    bne _022301A4\n    bl ov74_0222FE4C\n    add sp, #0xc\n    pop {r4, r5, pc}\n    mov r0, #0\n    bl ov74_0223110C\n    add sp, #0xc\n    pop {r4, r5, pc}\n    bl ov74_0223115C\n    bl ov74_02231458\n    add r4, #0x60\n    ldrb r0, [r4]\n    cmp r0, #2\n    bne _02230266\n    add r4, r5, #0\n    add r4, #0x14\n    bl ov74_022311AC\n    ldr r1, [r5, #0x14]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, r0\n    bne _02230266\n    bl ov74_022311BC\n    ldr r1, [r4]\n    lsl r1, r1, #0x14\n    lsr r1, r1, #0x1c\n    cmp r1, r0\n    bhi _02230266\n    bl ov74_022311CC\n    ldr r1, [r4, #4]\n    lsr r1, r1, #0x10\n    cmp r1, r0\n    bne _02230266\n    bl ov74_0223115C\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0xa\n    bl ov74_0222FE5C\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0xa\n    bl ov74_0222FE68\n    add r1, sp, #0\n    strh r0, [r1]\n    ldrh r0, [r1]\n    ldr r2, [sp, #8]\n    add r3, r4, #0\n    strh r0, [r1, #2]\n    mov r0, #0\n    ldr r1, [r3]\n    cmp r1, r2\n    bne _0223022A\n    mov r1, #0xc\n    mul r1, r0\n    ldrh r0, [r5, #0x10]\n    add r1, r4, r1\n    add sp, #0xc\n    strh r0, [r1, #6]\n    mov r0, #1\n    strb r0, [r1, #0xa]\n    pop {r4, r5, pc}\n    cmp r1, #0\n    bne _02230248\n    mov r1, #0xc\n    mul r1, r0\n    str r2, [r4, r1]\n    add r0, sp, #0\n    ldrh r0, [r0, #2]\n    add r1, r4, r1\n    add sp, #0xc\n    strh r0, [r1, #4]\n    ldrh r0, [r5, #0x10]\n    strh r0, [r1, #6]\n    mov r0, #1\n    strb r0, [r1, #0xa]\n    pop {r4, r5, pc}\n    add r0, r0, #1\n    add r3, #0xc\n    cmp r0, #8\n    blt _02230212\n    add sp, #0xc\n    pop {r4, r5, pc}\n    ldrh r0, [r5, #0x10]\n    bl ov74_0222FEA0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov74_0223026C(void) {
    /* Original at 0x0223026C */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    str r0, [sp]\n    bl ov74_02231154\n    add r7, r0, #0\n    add r0, r4, #4\n    bl ov74_0222FE5C\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, r4, #4\n    bl ov74_0222FE68\n    add r2, sp, #4\n    strh r0, [r2]\n    ldrh r0, [r2]\n    ldr r6, [sp, #0xc]\n    add r1, r7, #0\n    strh r0, [r2, #2]\n    ldrh r3, [r2, #2]\n    mov r0, #0\n    ldr r2, [r1]\n    add r5, r1, #0\n    add r5, #0x34\n    cmp r2, r6\n    bne _022302B0\n    ldrh r5, [r5]\n    cmp r5, r3\n    bne _022302B0\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r2, #0\n    bne _022302FC\n    mov r1, #0x38\n    mul r1, r0\n    ldr r0, [sp, #0xc]\n    add r5, r4, #0\n    str r0, [r7, r1]\n    add r0, r7, r1\n    add r5, #0x58\n    add r3, r0, #4\n    mov r2, #0xc\n    ldrh r0, [r5]\n    add r5, r5, #2\n    strh r0, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _022302C6\n    add r3, r7, r1\n    add r4, #0x70\n    add r3, #0x1c\n    mov r2, #0xc\n    ldrh r0, [r4]\n    add r4, r4, #2\n    strh r0, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _022302DA\n    add r0, sp, #4\n    ldrh r0, [r0, #2]\n    add r1, r7, r1\n    strh r0, [r1, #0x34]\n    ldr r0, [sp]\n    add r1, #0x36\n    ldrh r0, [r0, #0x12]\n    add sp, #0x10\n    strb r0, [r1]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r0, #1\n    add r1, #0x38\n    cmp r0, #8\n    blt _0223029A\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_0223030C(void) {
    /* Original at 0x0223030C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_0222FFAC\n    bl ov74_02231560\n    cmp r0, #0\n    bne _0223031E\n    bl ov74_0222FE4C\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230320(void) {
    /* Original at 0x02230320 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl ov74_02231100\n    add r4, r0, #0\n    bl ov74_02231154\n    add r5, r0, #0\n    bl ov74_0222FE78\n    cmp r0, #0\n    beq _0223033C\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r1, #0\n    add r2, r1, #0\n    add r3, r5, #0\n    ldr r0, [r3]\n    cmp r0, #0\n    beq _0223034C\n    mov r1, #1\n    b _02230354\n    add r2, r2, #1\n    add r3, #0x38\n    cmp r2, #8\n    blt _02230342\n    cmp r1, #0\n    beq _02230372\n    mov r0, #7\n    lsl r0, r0, #6\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    bne _02230372\n    bl ov74_0223161C\n    cmp r0, #0\n    bne _0223036E\n    bl ov74_0222FE4C\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    mov r1, #0xc0\n    bl DC_InvalidateRange\n    bl ov74_02231154\n    bl ov74_02231454\n    ldrh r0, [r6, #0x36]\n    cmp r0, #8\n    blo _022303FC\n    bl ov74_022311A0\n    ldr r1, [r4, #0x44]\n    cmp r1, r0\n    bne _022303FC\n    add r5, r4, #0\n    add r5, #0x50\n    bl ov74_022311AC\n    ldr r1, [r4, #0x50]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, r0\n    bne _022303FC\n    bl ov74_022311BC\n    ldr r1, [r5]\n    lsl r1, r1, #0x14\n    lsr r1, r1, #0x1c\n    cmp r1, r0\n    bhi _022303FC\n    bl ov74_022311CC\n    ldr r1, [r5, #4]\n    lsr r1, r1, #0x10\n    cmp r1, r0\n    bne _022303FC\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov74_0223026C\n    cmp r0, #0\n    beq _022303EC\n    bl ov74_02231154\n    ldr r1, _02230400 ; =0x000001C2\n    ldrb r2, [r0, r1]\n    add r2, r2, #1\n    strb r2, [r0, r1]\n    ldrb r0, [r0, r1]\n    cmp r0, #0x1c\n    bls _022303FC\n    bl ov74_0223161C\n    cmp r0, #0\n    bne _022303FC\n    bl ov74_0222FE4C\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl ov74_0223161C\n    cmp r0, #0\n    bne _022303F8\n    bl ov74_0222FE4C\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _02230400: .word 0x000001C2"
    );
    #endif
}

void ov74_02230404(void) {
    /* Original at 0x02230404 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #8]\n    bl ov74_0223144C\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    bne _0223046A\n    bl ov74_02231100\n    bl ov74_02231450\n    mov r0, #6\n    bl ov74_02231070\n    bl ov74_0222FE78\n    cmp r0, #0\n    bne _02230472\n    bl ov74_02231094\n    cmp r0, #1\n    bne _02230444\n    bl ov74_02231154\n    ldr r2, _02230474 ; =0x000001C3\n    mov r1, #0xf0\n    ldrb r3, [r0, r2]\n    bic r3, r1\n    mov r1, #0x10\n    orr r1, r3\n    strb r1, [r0, r2]\n    ldrh r0, [r4, #8]\n    cmp r0, #4\n    beq _02230458\n    cmp r0, #5\n    bne _0223045E\n    add r0, r4, #0\n    bl ov74_02230320\n    cmp r0, #0\n    bne _02230472\n    bl ov74_0223030C\n    pop {r4, pc}\n    ldrh r0, [r4, #2]\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    pop {r4, pc}\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    pop {r4, pc}\n    _02230474: .word 0x000001C3"
    );
    #endif
}

void ov74_02230478(void) {
    /* Original at 0x02230478 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    bl ov74_02231100\n    add r4, r0, #0\n    bl ov74_02231154\n    add r6, r0, #0\n    bl ov74_02231054\n    bl ov74_0222FE78\n    cmp r0, #0\n    beq _0223049A\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    mov r1, #0xc0\n    bl DC_InvalidateRange\n    bl ov74_02231154\n    bl ov74_02231454\n    ldrh r0, [r4, #0x3c]\n    cmp r0, #8\n    blo _02230514\n    bl ov74_022311A0\n    ldr r1, [r4, #0x44]\n    cmp r1, r0\n    bne _02230514\n    add r5, r4, #0\n    add r5, #0x50\n    bl ov74_022311AC\n    ldr r1, [r4, #0x50]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, r0\n    bne _02230514\n    bl ov74_022311BC\n    ldr r1, [r5]\n    lsl r1, r1, #0x14\n    lsr r1, r1, #0x1c\n    cmp r1, r0\n    bhi _02230514\n    bl ov74_022311CC\n    ldr r1, [r5, #4]\n    lsr r1, r1, #0x10\n    cmp r1, r0\n    bne _02230514\n    add r0, r4, #4\n    bl ov74_0222FE5C\n    ldr r1, _0223051C ; =0x000001C3\n    str r0, [sp]\n    ldrb r1, [r6, r1]\n    str r0, [sp, #4]\n    lsl r1, r1, #0x1c\n    lsr r2, r1, #0x1c\n    mov r1, #0x38\n    mul r1, r2\n    ldr r1, [r6, r1]\n    cmp r1, r0\n    bne _02230514\n    bl ov74_0223161C\n    cmp r0, #0\n    bne _0223050E\n    bl ov74_0222FE4C\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _0223051C: .word 0x000001C3"
    );
    #endif
}

void ov74_02230520(void) {
    /* Original at 0x02230520 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #8]\n    bl ov74_0223144C\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    bne _02230580\n    bl ov74_02231154\n    ldr r2, _0223058C ; =0x000001C3\n    mov r1, #0xf0\n    ldrb r3, [r0, r2]\n    bic r3, r1\n    mov r1, #0x20\n    orr r1, r3\n    strb r1, [r0, r2]\n    mov r0, #6\n    bl ov74_02231070\n    bl ov74_0222FE78\n    cmp r0, #0\n    bne _02230588\n    ldrh r0, [r4, #8]\n    cmp r0, #4\n    beq _02230562\n    cmp r0, #5\n    bne _02230574\n    bl ov74_02230478\n    cmp r0, #0\n    bne _02230588\n    bl ov74_0222FFAC\n    bl ov74_02231584\n    cmp r0, #0\n    bne _02230588\n    bl ov74_0222FE4C\n    pop {r4, pc}\n    ldrh r0, [r4, #2]\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    pop {r4, pc}\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    pop {r4, pc}\n    nop\n    _0223058C: .word 0x000001C3"
    );
    #endif
}

void ov74_02230590(void) {
    /* Original at 0x02230590 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    bne _022305D4\n    mov r0, #7\n    bl ov74_02231070\n    bl ov74_0222FE78\n    cmp r0, #0\n    bne _022305DC\n    bl ov74_02231094\n    cmp r0, #1\n    bne _022305DC\n    bl ov74_02231154\n    ldr r1, _022305E0 ; =0x000001C3\n    ldrb r0, [r0, r1]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #2\n    bne _022305DC\n    bl ov74_02231638\n    cmp r0, #0\n    bne _022305CC\n    bl ov74_0222FE4C\n    pop {r3, pc}\n    mov r0, #3\n    bl ov74_02231070\n    pop {r3, pc}\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    pop {r3, pc}\n    nop\n    _022305E0: .word 0x000001C3"
    );
    #endif
}

void ov74_022305E4(void) {
    /* Original at 0x022305E4 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #8]\n    bl ov74_0223144C\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    bne _0223066A\n    mov r0, #9\n    bl ov74_02231070\n    bl ov74_0222FE78\n    cmp r0, #0\n    bne _02230672\n    ldrh r0, [r4, #8]\n    cmp r0, #9\n    bhi _0223065E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02230614: ; jump table\n    ldrh r0, [r4, #0xa]\n    bl ov74_0223110C\n    mov r0, #1\n    bl ov74_02231124\n    mov r0, #0\n    bl ov74_02231130\n    bl ov74_02231670\n    cmp r0, #0\n    bne _02230672\n    bl ov74_0222FE4C\n    pop {r4, pc}\n    bl ov74_02231118\n    cmp r0, #0\n    beq _02230656\n    mov r0, #1\n    bl ov74_02231130\n    mov r0, #0\n    bl ov74_02231124\n    pop {r4, pc}\n    ldrh r0, [r4, #2]\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    pop {r4, pc}\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02230674(void) {
    /* Original at 0x02230674 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_02231094\n    cmp r0, #1\n    beq _022306AE\n    cmp r0, #2\n    bne _022306C6\n    bl ov74_0222FF28\n    cmp r0, #0\n    beq _022306A8\n    bl ov74_0222FEC8\n    bl ov74_022314DC\n    cmp r0, #0\n    beq _022306A8\n    bl ov74_0223115C\n    mov r1, #1\n    add r0, #0x60\n    strb r1, [r0]\n    mov r0, #3\n    bl ov74_02231070\n    pop {r3, pc}\n    bl ov74_0222FE4C\n    pop {r3, pc}\n    bl ov74_0222FF80\n    bl ov74_02231560\n    cmp r0, #0\n    bne _022306C0\n    bl ov74_0222FE4C\n    pop {r3, pc}\n    mov r0, #3\n    bl ov74_02231070\n    pop {r3, pc}"
    );
    #endif
}

void ov74_022306C8(void) {
    /* Original at 0x022306C8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #4]\n    bl ov74_0223144C\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    bne _02230702\n    ldrh r0, [r4]\n    cmp r0, #0xe\n    bne _022306E6\n    bl ov74_0222FE78\n    cmp r0, #0\n    bne _02230712\n    bl ov74_02231094\n    cmp r0, #1\n    beq _022306FA\n    cmp r0, #2\n    bne _02230712\n    mov r0, #0xa\n    bl ov74_02231070\n    pop {r4, pc}\n    mov r0, #0xb\n    bl ov74_02231070\n    pop {r4, pc}\n    cmp r0, #9\n    beq _02230712\n    cmp r0, #0xd\n    beq _02230712\n    cmp r0, #0xf\n    beq _02230712\n    bl ov74_0222FE4C\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02230714(void) {
    /* Original at 0x02230714 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl ov74_02231184\n    add r4, r0, #0\n    ldrb r0, [r4, #0x19]\n    cmp r0, #1\n    bne _0223078A\n    ldrh r1, [r6, #0x10]\n    ldr r0, [r6, #0xc]\n    ldr r5, [r4, #0xc]\n    bl DC_FlushRange\n    ldrh r2, [r6, #0x10]\n    ldr r0, [r6, #0xc]\n    ldr r1, [r4, #0xc]\n    bl MI_CpuCopy8\n    bl ov74_022311AC\n    ldr r1, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, r0\n    bne _0223078A\n    bl ov74_022311BC\n    ldr r1, [r5]\n    lsl r1, r1, #0x14\n    lsr r1, r1, #0x1c\n    cmp r1, r0\n    bhi _0223078A\n    ldr r0, [r4, #0xc]\n    bl ov74_022313F0\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    ldrb r0, [r4, #0x1c]\n    cmp r1, r0\n    bne _0223078A\n    ldr r0, [r4, #0xc]\n    bl ov74_0223145C\n    ldr r0, [r4, #0xc]\n    bl ov74_02231424\n    cmp r0, #0\n    beq _02230786\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    beq _02230786\n    mov r0, #2\n    strb r0, [r4, #0x19]\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov74_0223078C(void) {
    /* Original at 0x0223078C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl ov74_02231184\n    add r4, r0, #0\n    bl ov74_02231094\n    cmp r0, #2\n    bne _02230814\n    ldrb r0, [r4, #0x19]\n    cmp r0, #2\n    beq _02230814\n    ldrh r1, [r6, #0x10]\n    ldr r0, [r6, #0xc]\n    ldr r5, [r4, #0xc]\n    bl DC_FlushRange\n    ldrh r2, [r6, #0x10]\n    ldr r0, [r6, #0xc]\n    ldr r1, [r4, #0xc]\n    bl MI_CpuCopy8\n    bl ov74_022311AC\n    ldr r1, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, r0\n    bne _02230814\n    bl ov74_022311BC\n    ldr r1, [r5]\n    lsl r1, r1, #0x14\n    lsr r1, r1, #0x1c\n    cmp r1, r0\n    bhi _02230814\n    ldr r0, [r4, #0xc]\n    bl ov74_022313F0\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #0xfd\n    bne _02230814\n    bl ov74_0223115C\n    ldrh r5, [r6, #0x12]\n    mov r2, #0\n    add r3, r0, #0\n    ldrh r1, [r3, #6]\n    cmp r5, r1\n    bne _0223080C\n    mov r1, #0xc\n    mul r1, r2\n    add r1, r0, r1\n    mov r2, #1\n    strb r2, [r1, #8]\n    mov r0, #3\n    strb r0, [r1, #9]\n    mov r0, #0xb4\n    strb r0, [r4, #0x1a]\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    pop {r4, r5, r6, pc}\n    add r2, r2, #1\n    add r3, #0xc\n    cmp r2, #8\n    blt _022307EE\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov74_02230818(void) {
    /* Original at 0x02230818 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl ov74_02231184\n    add r4, r0, #0\n    ldrb r0, [r4, #0x1c]\n    cmp r0, #0xfd\n    bne _02230830\n    add r0, r6, #0\n    bl ov74_0223078C\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r4, #0x19]\n    cmp r0, #1\n    beq _0223083C\n    ldrb r0, [r4, #0x19]\n    cmp r0, #3\n    bne _022308D8\n    ldrb r0, [r4, #0x1b]\n    cmp r0, #0\n    bne _022308D8\n    ldrh r1, [r6, #0x10]\n    ldr r0, [r6, #0xc]\n    ldr r5, [r4, #0xc]\n    bl DC_FlushRange\n    ldrh r2, [r6, #0x10]\n    ldr r0, [r6, #0xc]\n    ldr r1, [r4, #0xc]\n    bl MI_CpuCopy8\n    bl ov74_022311AC\n    ldr r1, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, r0\n    bne _022308D8\n    bl ov74_022311BC\n    ldr r1, [r5]\n    lsl r1, r1, #0x14\n    lsr r1, r1, #0x1c\n    cmp r1, r0\n    bhi _022308D8\n    ldr r0, [r4, #0xc]\n    bl ov74_022313F0\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    ldrb r0, [r4, #0x1c]\n    cmp r1, r0\n    bne _022308D8\n    ldr r0, [r4, #0xc]\n    bl ov74_0223145C\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldr r0, [r4, #0xc]\n    bl ov74_02231424\n    cmp r0, #0\n    beq _022308CA\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #0xfd\n    bne _022308AA\n    add r0, r6, #0\n    bl ov74_0223078C\n    b _022308BC\n    ldr r2, [r5, #0xc]\n    ldr r1, [r4, #0xc]\n    lsl r0, r2, #0x18\n    lsr r0, r0, #0x18\n    add r0, r1, r0\n    ldr r1, [r4, #4]\n    lsr r2, r2, #8\n    bl MI_CpuCopy8\n    ldr r1, [r5, #8]\n    ldr r0, _022308DC ; =0xFFFF00FF\n    and r0, r1\n    str r0, [r5, #8]\n    mov r0, #4\n    strb r0, [r4, #0x1b]\n    pop {r4, r5, r6, pc}\n    ldr r1, [r5, #8]\n    ldr r0, _022308DC ; =0xFFFF00FF\n    and r1, r0\n    mov r0, #1\n    lsl r0, r0, #8\n    orr r0, r1\n    str r0, [r5, #8]\n    pop {r4, r5, r6, pc}\n    nop\n    _022308DC: .word 0xFFFF00FF"
    );
    #endif
}

void ov74_022308E0(void) {
    /* Original at 0x022308E0 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #4]\n    bl ov74_0223144C\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    bne _02230962\n    ldrh r0, [r4, #4]\n    cmp r0, #7\n    beq _0223092A\n    cmp r0, #9\n    beq _02230938\n    cmp r0, #0x15\n    bne _02230962\n    bl ov74_02231064\n    cmp r0, #0xa\n    beq _0223090A\n    cmp r0, #0xb\n    bne _02230962\n    bl ov74_02231184\n    ldrb r0, [r0, #0x18]\n    cmp r0, #1\n    beq _0223091A\n    cmp r0, #2\n    beq _02230922\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov74_02230714\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov74_02230818\n    pop {r4, pc}\n    mov r0, #1\n    bl ov74_02231124\n    mov r0, #0\n    bl ov74_02231130\n    pop {r4, pc}\n    bl ov74_02231118\n    cmp r0, #0\n    beq _02230946\n    mov r0, #1\n    bl ov74_02231130\n    bl ov74_02231064\n    cmp r0, #0xa\n    beq _02230954\n    cmp r0, #0xb\n    beq _0223095C\n    pop {r4, pc}\n    ldrh r0, [r4, #0x12]\n    bl ov74_0222FEA0\n    pop {r4, pc}\n    mov r0, #0\n    bl ov74_02231124\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02230964(void) {
    /* Original at 0x02230964 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    bne _0223097A\n    bl ov74_0222FE78\n    cmp r0, #0\n    bne _02230984\n    bl ov74_02230674\n    pop {r3, pc}\n    bl ov74_02231448\n    mov r0, #4\n    bl ov74_02231070\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230988(void) {
    /* Original at 0x02230988 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    bne _022309A0\n    bl ov74_022314BC\n    cmp r0, #0\n    beq _022309A8\n    mov r0, #2\n    bl ov74_02231070\n    pop {r3, pc}\n    bl ov74_02231448\n    bl ov74_0222FE4C\n    pop {r3, pc}"
    );
    #endif
}

void ov74_022309AC(void) {
    /* Original at 0x022309AC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    bne _022309E2\n    mov r0, #0\n    bl ov74_0223110C\n    bl ov74_0223107C\n    cmp r0, #0xc\n    bne _022309D2\n    bl ov74_02231744\n    cmp r0, #0\n    beq _022309EC\n    mov r0, #3\n    bl ov74_02231070\n    pop {r3, pc}\n    bl ov74_02231704\n    cmp r0, #0\n    beq _022309EC\n    mov r0, #3\n    bl ov74_02231070\n    pop {r3, pc}\n    bl ov74_02231448\n    mov r0, #4\n    bl ov74_02231070\n    pop {r3, pc}"
    );
    #endif
}

void ov74_022309F0(void) {
    /* Original at 0x022309F0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    bne _02230A06\n    mov r0, #0xc\n    bl ov74_02231070\n    mov r0, #1\n    bl ov74_0223113C\n    pop {r3, pc}\n    bl ov74_02231448\n    mov r0, #4\n    bl ov74_02231070\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230A14(void) {
    /* Original at 0x02230A14 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02230A30 ; =ov74_0222FFFC\n    bl WM_SetIndCallback\n    cmp r0, #0\n    beq _02230A2A\n    mov r0, #4\n    bl ov74_02231070\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _02230A30: .word ov74_0222FFFC"
    );
    #endif
}

void ov74_02230A34(void) {
    /* Original at 0x02230A34 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_02231064\n    cmp r0, #0\n    beq _02230A46\n    cmp r0, #1\n    beq _02230A46\n    cmp r0, #2\n    bne _02230A4A\n    bl ov74_022314A0\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230A4C(void) {
    /* Original at 0x02230A4C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov74_02231054\n    ldrh r0, [r0, #0x34]\n    cmp r4, r0\n    bhi _02230A70\n    add r0, r5, #0\n    add r1, r4, #0\n    bl DC_FlushRange\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov74_02231460\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov74_02230A74(void) {
    r0 = r0 << 6;
}

void ov74_02230A7C(void) {
    r0 = r0 << 6;
}

void ov74_02230A84(void) {
    /* Original at 0x02230A84 */
    /* Requires manual decompilation - 139 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r5, r0, #0\n    bl ov74_02231054\n    bl ov74_0223105C\n    add r4, r0, #0\n    mov r0, #0x1f\n    add r1, r7, #0\n    and r1, r0\n    beq _02230AA2\n    mov r0, #0x20\n    sub r0, r0, r1\n    add r7, r7, r0\n    mov r1, #0\n    strb r1, [r4]\n    strb r1, [r4, #1]\n    strb r1, [r4, #2]\n    mov r0, #4\n    strb r0, [r4, #3]\n    ldr r0, _02230BA8 ; =0x00400131\n    str r0, [r4, #4]\n    mov r0, #0xf\n    strh r1, [r4, #0xc]\n    lsl r0, r0, #8\n    str r7, [r4, #0x34]\n    add r7, r7, r0\n    str r7, [r4, #0x38]\n    bl ov74_02230A74\n    str r0, [r4, #0x2c]\n    add r7, r7, r0\n    str r7, [r4, #0x3c]\n    bl ov74_02230A7C\n    add r7, r7, r0\n    str r0, [r4, #0x30]\n    add r0, r7, #0\n    str r7, [r4, #0x28]\n    add r0, #0xc0\n    str r0, [r4, #0x24]\n    ldr r0, [r4, #0x34]\n    mov r1, #2\n    add r7, #0xe0\n    bl WM_Init\n    bl ov74_02230A14\n    str r0, [r4, #0x10]\n    mov r2, #0\n    str r2, [r4, #0x14]\n    str r2, [r4, #0x18]\n    str r2, [r4, #0x1c]\n    str r2, [r4, #0x20]\n    ldr r0, [r4, #0x40]\n    mov r6, #0xff\n    bic r0, r6\n    add r3, r0, #0\n    mov r1, #0xf\n    orr r3, r1\n    ldr r0, _02230BAC ; =0xFFFFF0FF\n    add r1, #0xf1\n    and r0, r3\n    orr r1, r0\n    ldr r0, _02230BB0 ; =0xFFFF0FFF\n    and r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    orr r0, r1\n    str r0, [r4, #0x40]\n    ldr r3, [r5]\n    ldr r1, [r4, #0x44]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    lsl r3, r3, #0x18\n    add r0, r4, #0\n    bic r1, r6\n    lsr r3, r3, #0x18\n    orr r3, r1\n    ldr r1, _02230BAC ; =0xFFFFF0FF\n    str r3, [r4, #0x44]\n    and r1, r3\n    ldr r3, [r5]\n    add r0, #0x44\n    lsl r3, r3, #0x14\n    lsr r3, r3, #0x1c\n    lsl r3, r3, #0x1c\n    lsr r3, r3, #0x14\n    orr r3, r1\n    ldr r1, _02230BB0 ; =0xFFFF0FFF\n    str r3, [r4, #0x44]\n    and r1, r3\n    ldr r3, [r5]\n    lsl r3, r3, #0x10\n    lsr r3, r3, #0x1c\n    lsl r3, r3, #0x1c\n    lsr r3, r3, #0x10\n    orr r1, r3\n    str r1, [r4, #0x44]\n    ldr r1, [r0]\n    ldr r3, [r5]\n    lsl r1, r1, #0x10\n    lsr r3, r3, #0x10\n    lsr r1, r1, #0x10\n    lsl r3, r3, #0x10\n    orr r1, r3\n    str r1, [r0]\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #4]\n    add r3, r4, #0\n    b _02230B7C\n    ldrh r6, [r0]\n    add r5, r3, #0\n    add r5, #0x48\n    strh r6, [r5]\n    add r5, r3, #0\n    ldrh r6, [r1]\n    add r5, #0x60\n    add r3, r3, #2\n    strh r6, [r5]\n    add r2, r2, #1\n    add r0, r0, #2\n    add r1, r1, #2\n    cmp r0, #0\n    beq _02230B84\n    cmp r2, #0xc\n    blo _02230B64\n    ldr r1, [r4, #0x40]\n    ldr r0, [r4, #0x44]\n    str r1, [r4, #0x78]\n    str r0, [r4, #0x7c]\n    bl ov74_02231194\n    bl ov74_02231184\n    str r7, [r0, #8]\n    ldr r0, [r4, #0x2c]\n    add r7, r7, r0\n    bl ov74_02231184\n    str r7, [r0, #0xc]\n    bl WM_GetNextTgid\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02230BA8: .word 0x00400131\n    _02230BAC: .word 0xFFFFF0FF\n    _02230BB0: .word 0xFFFF0FFF"
    );
    #endif
}

void ov74_02230BB4(void) {
    /* Original at 0x02230BB4 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl ov74_02231184\n    add r4, r0, #0\n    ldrb r0, [r4, #0x19]\n    cmp r0, #1\n    bne _02230BD2\n    ldrb r0, [r4, #0x1a]\n    sub r0, r0, #1\n    strb r0, [r4, #0x1a]\n    ldrb r0, [r4, #0x1a]\n    cmp r0, #0\n    bne _02230C08\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    bne _02230C08\n    bl ov74_02231260\n    mov r1, #0x40\n    sub r5, r1, r0\n    ldrb r0, [r4, #0x1c]\n    add r2, r5, #0\n    mov r3, #3\n    str r0, [sp]\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #4]\n    bl ov74_022312C0\n    bl ov74_02231260\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    ldr r2, _02230C0C ; =0x0000FFFF\n    add r1, r5, r1\n    bl ov74_02230A4C\n    mov r0, #1\n    strb r0, [r4, #0x19]\n    mov r0, #0x3c\n    strb r0, [r4, #0x1a]\n    pop {r3, r4, r5, pc}\n    nop\n    _02230C0C: .word 0x0000FFFF"
    );
    #endif
}

void ov74_02230C10(void) {
    /* Original at 0x02230C10 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl ov74_02231184\n    add r4, r0, #0\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    bne _02230CC6\n    ldrb r0, [r4, #0x1c]\n    cmp r0, #0xfd\n    bne _02230C88\n    bl ov74_0223115C\n    add r5, r0, #0\n    mov r1, #0\n    add r2, r5, #0\n    ldrb r0, [r2, #9]\n    cmp r0, #0\n    beq _02230C6E\n    add r6, r1, #0\n    mov r0, #0xc\n    mul r6, r0\n    add r0, r5, r6\n    ldrh r0, [r0, #6]\n    mov r1, #1\n    mov r2, #0\n    lsl r1, r0\n    lsl r0, r1, #0x10\n    lsr r7, r0, #0x10\n    mov r0, #0xfd\n    str r0, [sp]\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #4]\n    add r3, r2, #0\n    bl ov74_022312C0\n    bl ov74_02231260\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    add r2, r7, #0\n    bl ov74_02230A4C\n    add r5, #9\n    ldrb r0, [r5, r6]\n    sub r0, r0, #1\n    strb r0, [r5, r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r1, #1\n    add r2, #0xc\n    cmp r1, #8\n    blt _02230C2E\n    ldrb r0, [r4, #0x1a]\n    sub r0, r0, #1\n    strb r0, [r4, #0x1a]\n    ldrb r0, [r4, #0x1a]\n    cmp r0, #0\n    bne _02230CC6\n    mov r0, #2\n    strb r0, [r4, #0x19]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov74_02231260\n    bl ov74_02230A74\n    ldr r0, [r4, #0xc]\n    ldr r0, [r0, #8]\n    lsl r0, r0, #0x10\n    lsr r3, r0, #0x18\n    bne _02230CAA\n    ldrb r0, [r4, #0x1b]\n    cmp r0, #0\n    bne _02230CA6\n    mov r0, #2\n    strb r0, [r4, #0x19]\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, r0, #1\n    strb r0, [r4, #0x1b]\n    ldrb r0, [r4, #0x1c]\n    mov r2, #0\n    str r0, [sp]\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #4]\n    bl ov74_022312C0\n    bl ov74_02231260\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    ldr r2, _02230CC8 ; =0x0000FFFF\n    bl ov74_02230A4C\n    pop {r3, r4, r5, r6, r7, pc}\n    _02230CC8: .word 0x0000FFFF"
    );
    #endif
}

void ov74_02230CCC(void) {
    /* Original at 0x02230CCC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_02231184\n    ldrb r0, [r0, #0x18]\n    cmp r0, #1\n    beq _02230CDE\n    cmp r0, #2\n    beq _02230CE4\n    pop {r3, pc}\n    bl ov74_02230BB4\n    pop {r3, pc}\n    bl ov74_02230C10\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230CEC(void) {
    /* Original at 0x02230CEC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl ov74_02231154\n    add r4, r0, #0\n    bl ov74_02231064\n    cmp r0, #6\n    beq _02230D02\n    cmp r0, #0xb\n    beq _02230D12\n    pop {r4, pc}\n    mov r0, #7\n    lsl r0, r0, #6\n    ldrh r1, [r4, r0]\n    cmp r1, #0\n    beq _02230D16\n    sub r1, r1, #1\n    strh r1, [r4, r0]\n    pop {r4, pc}\n    bl ov74_02230CCC\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02230D18(void) {
    /* Original at 0x02230D18 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_02231064\n    cmp r0, #0xa\n    bne _02230D26\n    bl ov74_02230CCC\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230D28(void) {
    /* Original at 0x02230D28 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_02231064\n    cmp r0, #0xc\n    beq _02230D6A\n    bl ov74_0223107C\n    cmp r0, #0xc\n    bne _02230D48\n    bl ov74_02231064\n    cmp r0, #7\n    bne _02230D6A\n    bl ov74_02231724\n    pop {r3, pc}\n    bl ov74_02231094\n    cmp r0, #1\n    beq _02230D56\n    cmp r0, #2\n    beq _02230D5C\n    b _02230D62\n    bl ov74_02230CEC\n    pop {r3, pc}\n    bl ov74_02230D18\n    pop {r3, pc}\n    bl ov74_0223105C\n    bl ov74_02231064\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230D6C(void) {
    ov74_02231164();
    ov74_022310A0(1);
    ov74_02230A34();
}

void ov74_02230D80(void) {
    /* Original at 0x02230D80 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl ov74_02231094\n    mov r4, #0\n    cmp r0, #1\n    bne _02230DAE\n    bl ov74_02231154\n    ldr r1, _02230DB4 ; =0x000001C3\n    ldrb r1, [r0, r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1c\n    cmp r1, #1\n    bne _02230DAE\n    add r2, r4, #0\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _02230DA6\n    add r4, r4, #1\n    add r2, r2, #1\n    add r0, #0x38\n    cmp r2, #8\n    blo _02230D9E\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _02230DB4: .word 0x000001C3"
    );
    #endif
}

void ov74_02230DB8(void) {
    /* Original at 0x02230DB8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov74_02231094\n    cmp r0, #1\n    bne _02230DEA\n    bl ov74_02231064\n    cmp r0, #7\n    bne _02230DEA\n    bl ov74_02231154\n    ldr r1, _02230DF0 ; =0x000001C3\n    ldrb r1, [r0, r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1c\n    cmp r1, #1\n    bne _02230DEA\n    mov r1, #0x38\n    mul r1, r4\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _02230DEA\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02230DF0: .word 0x000001C3"
    );
    #endif
}

void ov74_02230DF4(void) {
    /* Original at 0x02230DF4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov74_02231094\n    cmp r0, #1\n    bne _02230E3E\n    bl ov74_02231064\n    cmp r0, #7\n    bne _02230E3E\n    bl ov74_02231154\n    ldr r2, _02230E40 ; =0x000001C3\n    ldrb r3, [r0, r2]\n    lsl r1, r3, #0x18\n    lsr r1, r1, #0x1c\n    cmp r1, #1\n    bne _02230E3E\n    mov r1, #0x38\n    add r5, r4, #0\n    mul r5, r1\n    ldr r5, [r0, r5]\n    cmp r5, #0\n    beq _02230E3E\n    mov r5, #0xf\n    lsl r4, r4, #0x18\n    bic r3, r5\n    lsr r5, r4, #0x18\n    mov r4, #0xf\n    and r4, r5\n    orr r3, r4\n    strb r3, [r0, r2]\n    mov r2, #0x78\n    lsl r1, r1, #3\n    strh r2, [r0, r1]\n    bl ov74_02231584\n    pop {r3, r4, r5, pc}\n    _02230E40: .word 0x000001C3"
    );
    #endif
}

void ov74_02230E44(void) {
    /* Original at 0x02230E44 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl ov74_02231094\n    mov r4, #0\n    cmp r0, #2\n    bne _02230E76\n    bl ov74_0223115C\n    add r1, r0, #0\n    add r1, #0x60\n    ldrb r1, [r1]\n    cmp r1, #2\n    bne _02230E76\n    add r2, r4, #0\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _02230E6E\n    ldrb r1, [r0, #0xa]\n    cmp r1, #0\n    beq _02230E6E\n    add r4, r4, #1\n    add r2, r2, #1\n    add r0, #0xc\n    cmp r2, #8\n    blo _02230E60\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02230E7C(void) {
    /* Original at 0x02230E7C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_0223105C\n    ldr r0, [r0, #0x20]\n    cmp r0, #0\n    beq _02230E8C\n    mov r0, #0\n    pop {r3, pc}\n    bl WM_GetLinkLevel\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230E94(void) {
    /* Original at 0x02230E94 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_02231094\n    cmp r0, #1\n    beq _02230EA4\n    cmp r0, #2\n    beq _02230EAA\n    b _02230EB0\n    bl ov74_02230D80\n    pop {r3, pc}\n    bl ov74_02230E44\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230EB4(void) {
    /* Original at 0x02230EB4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl ov74_02231184\n    add r5, r0, #0\n    bl ov74_022311DC\n    add r4, r0, #0\n    bl ov74_02231094\n    cmp r0, #1\n    bne _02230EE6\n    mov r0, #1\n    strb r0, [r5, #0x18]\n    mov r1, #0\n    strb r1, [r5, #0x19]\n    add r4, #8\n    str r4, [r5]\n    str r4, [r5, #4]\n    str r1, [r5, #0x10]\n    str r1, [r5, #0x14]\n    mov r0, #0x78\n    strb r0, [r5, #0x1a]\n    strb r1, [r5, #0x1b]\n    mov r0, #0xfd\n    strb r0, [r5, #0x1c]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov74_02230EE8(void) {
    ov74_02231184();
    ov74_022311DC();
    *((u8*)(r4 + 0x18)) = 1;
    *((u8*)(r4 + 0x19)) = 0;
    *((u32*)(r4 + 4)) = r0;
    *((u32*)(r4 + 0x10)) = 0x30;
    *((u32*)(r4 + 0x14)) = 0x30;
    *((u8*)(r4 + 0x1a)) = 0x78;
    *((u8*)(r4 + 0x1b)) = 0;
    *((u8*)(r4 + 0x1c)) = 0xfe;
}

void ov74_02230F14(void) {
    /* Original at 0x02230F14 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    bl ov74_02231184\n    cmp r4, #0xf0\n    bgt _02230F3E\n    mov r1, #2\n    strb r1, [r0, #0x18]\n    mov r1, #3\n    strb r1, [r0, #0x19]\n    str r5, [r0]\n    str r5, [r0, #4]\n    str r6, [r0, #0x10]\n    mov r2, #0\n    str r2, [r0, #0x14]\n    mov r1, #0x78\n    strb r1, [r0, #0x1a]\n    strb r2, [r0, #0x1b]\n    strb r4, [r0, #0x1c]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov74_02230F40(void) {
    /* Original at 0x02230F40 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_02231094\n    cmp r0, #1\n    beq _02230F4E\n    cmp r0, #2\n    bne _02230F68\n    bl ov74_02231064\n    cmp r0, #0xa\n    beq _02230F5A\n    cmp r0, #0xb\n    bne _02230F68\n    bl ov74_02231184\n    ldrb r0, [r0, #0x19]\n    cmp r0, #2\n    bne _02230F68\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230F6C(void) {
    /* Original at 0x02230F6C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_02231094\n    cmp r0, #1\n    beq _02230F7A\n    cmp r0, #2\n    bne _02230F94\n    bl ov74_02231064\n    cmp r0, #0xa\n    beq _02230F86\n    cmp r0, #0xb\n    bne _02230F94\n    bl ov74_02231184\n    ldrb r0, [r0, #0x19]\n    cmp r0, #2\n    bne _02230F94\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230F98(void) {
    /* Original at 0x02230F98 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_02231094\n    cmp r0, #1\n    beq _02230FA6\n    cmp r0, #2\n    bne _02230FD0\n    bl ov74_02231064\n    cmp r0, #0xa\n    beq _02230FB2\n    cmp r0, #0xb\n    bne _02230FD0\n    bl ov74_02231184\n    ldrb r1, [r0, #0x19]\n    cmp r1, #0\n    bne _02230FD0\n    ldr r1, [r0, #0xc]\n    ldr r1, [r1, #8]\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x18\n    bne _02230FD0\n    ldrb r0, [r0, #0x1b]\n    cmp r0, #4\n    bhs _02230FD0\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02230FD4(void) {
    /* Original at 0x02230FD4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_02231094\n    cmp r0, #2\n    bne _02231000\n    bl ov74_0223115C\n    mov r2, #0\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _02230FF4\n    ldrb r1, [r0, #0xa]\n    cmp r1, #0\n    beq _02230FF4\n    mov r0, #1\n    pop {r3, pc}\n    add r2, r2, #1\n    add r0, #0xc\n    cmp r2, #8\n    blt _02230FE4\n    mov r0, #0\n    pop {r3, pc}\n    bl ov74_02231118\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02231008(void) {
    /* Original at 0x02231008 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0xc\n    bl ov74_02231088\n    bl ov74_02231064\n    cmp r0, #0\n    beq _02231022\n    cmp r0, #1\n    beq _02231022\n    cmp r0, #9\n    beq _0223102E\n    pop {r4, pc}\n    bl WM_Finish\n    mov r0, #1\n    bl ov74_0223113C\n    pop {r4, pc}\n    bl ov74_02231118\n    cmp r0, #0\n    bne _02231044\n    bl ov74_0223105C\n    add r4, r0, #0\n    bl ov74_02231724\n    mov r0, #1\n    str r0, [r4, #0x1c]\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02231048(void) {
    ov74_0223105C();
}

void ov74_02231054(void) {
    /* Original at 0x02231054 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02231058 ; =ov74_0223C920\n    bx lr\n    _02231058: .word ov74_0223C920"
    );
    #endif
}

void ov74_0223105C(void) {
    /* Original at 0x0223105C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02231060 ; =ov74_0223D0C4\n    bx lr\n    _02231060: .word ov74_0223D0C4"
    );
    #endif
}

void ov74_02231064(void) {
    ov74_0223105C();
}

void ov74_02231070(void) {
    ov74_0223105C();
}

void ov74_0223107C(void) {
    ov74_0223105C();
}

void ov74_02231088(void) {
    ov74_0223105C();
}

void ov74_02231094(void) {
    ov74_0223105C();
}

void ov74_022310A0(void) {
    ov74_0223105C();
}

void ov74_022310AC(void) {
    ov74_0223105C();
}

void ov74_022310B8(void) {
    ov74_02231054();
}

void ov74_022310C4(void) {
    ov74_0223105C();
}

void ov74_022310D0(void) {
    ov74_0223105C();
}

void ov74_022310DC(void) {
    ov74_0223105C();
}

void ov74_022310E8(void) {
    ov74_0223105C();
}

void ov74_022310F4(void) {
    ov74_0223105C();
}

void ov74_02231100(void) {
    ov74_0223105C();
}

void ov74_0223110C(void) {
    ov74_0223105C();
}

void ov74_02231118(void) {
    ov74_0223105C();
}

void ov74_02231124(void) {
    ov74_0223105C();
}

void ov74_02231130(void) {
    ov74_0223105C();
}

void ov74_0223113C(void) {
    ov74_0223105C();
}

void ov74_02231148(void) {
    ov74_0223105C();
}

void ov74_02231154(void) {
    ov74_02231148();
}

void ov74_0223115C(void) {
    ov74_02231148();
}

void ov74_02231164(void) {
    /* Original at 0x02231164 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl ov74_02231154\n    mov r2, #0x71\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl MI_CpuFill8\n    mov r1, #0x46\n    lsl r1, r1, #2\n    add r0, r1, #0\n    add r0, #0xa8\n    strh r1, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02231184(void) {
    ov74_0223105C();
}

void ov74_02231194(void) {
    ov74_02231184();
}

void ov74_022311A0(void) {
    ov74_0223105C();
}

void ov74_022311AC(void) {
    ov74_0223105C();
}

void ov74_022311BC(void) {
    ov74_0223105C();
}

void ov74_022311CC(void) {
    ov74_0223105C();
}

u8 ov74_022311D8(void) {
    return 0x38;
}

void ov74_022311DC(void) {
    ov74_0223105C();
}

void ov74_022311E8(void) {
    ov74_0223105C();
}

void ov74_022311F4(void) {
    /* Original at 0x022311F4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3}\n    sub sp, #4\n    mov r2, #0\n    str r2, [sp]\n    add r3, sp, #0\n    add r1, r0, r2\n    ldrb r1, [r1, #2]\n    add r2, r2, #1\n    strb r1, [r3]\n    add r3, r3, #1\n    cmp r2, #4\n    blo _022311FE\n    ldr r0, [sp]\n    add sp, #4\n    pop {r3}\n    bx lr"
    );
    #endif
}

void ov74_02231214(void) {
    /* Original at 0x02231214 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3}\n    sub sp, #4\n    mov r2, #0\n    add r1, sp, #0\n    strh r2, [r1]\n    add r3, sp, #0\n    ldrb r1, [r0, r2]\n    add r2, r2, #1\n    strb r1, [r3]\n    add r3, r3, #1\n    cmp r2, #2\n    blo _02231220\n    add r1, sp, #0\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    add sp, #4\n    pop {r3}\n    bx lr"
    );
    #endif
}

void ov74_02231238(void) {
    /* Original at 0x02231238 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r1, _0223125C ; =0x00002710\n    add r6, r0, #0\n    add r4, r2, #0\n    bl _u32_div_f\n    str r1, [r5]\n    ldr r1, _0223125C ; =0x00002710\n    add r0, r6, #0\n    bl _u32_div_f\n    ldr r1, _0223125C ; =0x00002710\n    bl _u32_div_f\n    str r1, [r4]\n    pop {r4, r5, r6, pc}\n    nop\n    _0223125C: .word 0x00002710"
    );
    #endif
}

u8 ov74_02231260(void) {
    return 0x10;
}

void ov74_02231264(void) {
    OS_GetTick(1);
}

void ov74_0223127C(void) {
    /* Original at 0x0223127C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r3, r0, #0\n    mov r0, #0\n    lsr r1, r1, #2\n    beq _022312B2\n    ldr r4, _022312B8 ; =0x00269EC3\n    ldr r5, _022312BC ; =0x5D588B65\n    ldr r6, _022312BC ; =0x5D588B65\n    mul r5, r3\n    ldr r3, _022312B8 ; =0x00269EC3\n    add r0, r0, #1\n    add r3, r5, r3\n    lsr r5, r3, #0x10\n    mul r6, r3\n    add r3, r6, r4\n    lsl r5, r5, #0x10\n    lsr r7, r3, #0x10\n    lsr r5, r5, #0x10\n    lsl r7, r7, #0x10\n    ldr r6, [r2]\n    lsl r5, r5, #0x10\n    lsr r7, r7, #0x10\n    orr r5, r7\n    eor r5, r6\n    stmia r2!, {r5}\n    cmp r0, r1\n    blo _02231288\n    add r0, r3, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    _022312B8: .word 0x00269EC3\n    _022312BC: .word 0x5D588B65"
    );
    #endif
}

void ov74_022312C0(void) {
    /* Original at 0x022312C0 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r2, #0\n    str r3, [sp]\n    bl ov74_022311DC\n    add r4, r0, #0\n    ldr r0, [r5]\n    mov r1, #0xff\n    bic r0, r1\n    ldr r1, [r4]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    orr r1, r0\n    ldr r0, _022313E4 ; =0xFFFFF0FF\n    str r1, [r5]\n    and r0, r1\n    ldr r1, [r4]\n    lsl r1, r1, #0x14\n    lsr r1, r1, #0x1c\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x14\n    orr r1, r0\n    ldr r0, _022313E8 ; =0xFFFF0FFF\n    str r1, [r5]\n    and r0, r1\n    ldr r1, [r4]\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x1c\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x10\n    orr r0, r1\n    str r0, [r5]\n    bl ov74_02231264\n    ldr r1, [r5]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x10\n    lsl r0, r0, #0x10\n    orr r0, r1\n    str r0, [r5]\n    ldr r2, [r4, #4]\n    ldr r1, [r5, #4]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    mov r0, #0xff\n    lsl r2, r2, #0x18\n    bic r1, r0\n    lsr r2, r2, #0x18\n    orr r2, r1\n    ldr r1, _022313E4 ; =0xFFFFF0FF\n    str r2, [r5, #4]\n    and r1, r2\n    ldr r2, [r4, #4]\n    lsl r2, r2, #0x14\n    lsr r2, r2, #0x1c\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x14\n    orr r2, r1\n    ldr r1, _022313E8 ; =0xFFFF0FFF\n    str r2, [r5, #4]\n    and r1, r2\n    ldr r2, [r4, #4]\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x1c\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x10\n    orr r1, r2\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    str r1, [r5, #4]\n    ldr r1, [r5, #8]\n    bic r1, r0\n    ldr r0, [sp, #0x18]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    orr r1, r0\n    ldr r0, _022313EC ; =0xFFFF00FF\n    and r0, r1\n    ldr r1, [sp]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x10\n    orr r0, r1\n    str r0, [r5, #8]\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    bl SVC_GetCRC16\n    ldr r1, [r5, #8]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    orr r0, r1\n    str r0, [r5, #8]\n    bl ov74_02231260\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x18\n    ldr r1, [r5, #0xc]\n    mov r2, #0xff\n    bic r1, r2\n    lsr r0, r0, #0x18\n    orr r0, r1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    lsl r0, r6, #8\n    orr r0, r1\n    str r0, [r5, #0xc]\n    cmp r6, #0\n    beq _022313BE\n    ldr r1, [r5, #0xc]\n    add r0, r7, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    add r1, r5, r1\n    add r2, r6, #0\n    bl MI_CpuCopy8\n    add r0, r5, #0\n    bl ov74_0223145C\n    ldr r0, [r4]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    bne _022313E2\n    ldr r1, [r5, #0xc]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    add r1, r6, r1\n    lsr r0, r0, #0x10\n    sub r1, r1, #4\n    add r2, r5, #4\n    bl ov74_0223127C\n    pop {r3, r4, r5, r6, r7, pc}\n    _022313E4: .word 0xFFFFF0FF\n    _022313E8: .word 0xFFFF0FFF\n    _022313EC: .word 0xFFFF00FF"
    );
    #endif
}

void ov74_022313F0(void) {
    /* Original at 0x022313F0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov74_022311DC\n    ldr r0, [r4]\n    lsl r1, r0, #0x10\n    lsr r1, r1, #0x1c\n    cmp r1, #1\n    bne _02231420\n    lsr r0, r0, #0x10\n    mov r1, #0xc\n    add r2, r4, #4\n    bl ov74_0223127C\n    ldr r1, [r4, #0xc]\n    add r4, #0x10\n    lsl r2, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r1, r1, #8\n    add r1, r2, r1\n    sub r1, #0x10\n    add r2, r4, #0\n    bl ov74_0223127C\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02231424(void) {
    /* Original at 0x02231424 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4, #0xc]\n    mov r0, #0\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    add r1, r4, r1\n    lsr r2, r2, #8\n    bl SVC_GetCRC16\n    ldr r1, [r4, #8]\n    lsr r1, r1, #0x10\n    cmp r1, r0\n    bne _02231444\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02231448(void) {
    /* Original at 0x02231448 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov74_0223144C(void) {
    /* Original at 0x0223144C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov74_02231450(void) {
    /* Original at 0x02231450 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov74_02231454(void) {
    /* Original at 0x02231454 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov74_02231458(void) {
    /* Original at 0x02231458 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov74_0223145C(void) {
    /* Original at 0x0223145C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov74_02231460(void) {
    /* Original at 0x02231460 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    bl ov74_022310AC\n    lsl r0, r0, #0x10\n    lsl r3, r5, #0x10\n    lsr r0, r0, #0x10\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, _0223149C ; =ov74_02230018\n    mov r1, #0\n    add r2, r6, #0\n    lsr r3, r3, #0x10\n    bl WM_SetMPDataToPortEx\n    cmp r0, #2\n    beq _02231496\n    bl ov74_02231448\n    add sp, #0xc\n    mov r0, #0\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _0223149C: .word ov74_02230018"
    );
    #endif
}

void ov74_022314A0(void) {
    /* Original at 0x022314A0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _022314B8 ; =ov74_02230030\n    bl WM_Enable\n    cmp r0, #2\n    beq _022314B4\n    bl ov74_02231448\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _022314B8: .word ov74_02230030"
    );
    #endif
}

void ov74_022314BC(void) {
    /* Original at 0x022314BC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _022314D8 ; =ov74_02230070\n    bl WM_Disable\n    cmp r0, #2\n    beq _022314D4\n    bl ov74_02231448\n    bl OS_Terminate\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _022314D8: .word ov74_02230070"
    );
    #endif
}

void ov74_022314DC(void) {
    /* Original at 0x022314DC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r3, r0, #0\n    mov r0, #0x1e\n    str r0, [sp]\n    lsl r3, r3, #0x10\n    ldr r0, _02231504 ; =ov74_022300A8\n    mov r1, #3\n    mov r2, #0x11\n    lsr r3, r3, #0x10\n    bl WM_MeasureChannel\n    cmp r0, #2\n    beq _022314FE\n    bl ov74_02231448\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _02231504: .word ov74_022300A8"
    );
    #endif
}

void ov74_02231508(void) {
    /* Original at 0x02231508 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl ov74_02231054\n    add r5, r0, #0\n    bl ov74_022311DC\n    add r4, r0, #0\n    bl ov74_0223115C\n    add r0, #0x64\n    ldrb r0, [r0]\n    strh r0, [r5, #0x32]\n    str r4, [r5]\n    bl ov74_022311D8\n    strh r0, [r5, #4]\n    ldr r0, _02231540 ; =ov74_02230110\n    add r1, r5, #0\n    bl WM_SetParentParameter\n    cmp r0, #2\n    beq _0223153C\n    bl ov74_02231448\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _02231540: .word ov74_02230110"
    );
    #endif
}

void ov74_02231544(void) {
    /* Original at 0x02231544 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0223155C ; =ov74_02230138\n    bl WM_StartParent\n    cmp r0, #2\n    beq _02231558\n    bl ov74_02231448\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _0223155C: .word ov74_02230138"
    );
    #endif
}

void ov74_02231560(void) {
    /* Original at 0x02231560 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_022310C4\n    add r1, r0, #0\n    ldr r0, _02231580 ; =ov74_02230404\n    bl WM_StartScan\n    cmp r0, #2\n    beq _0223157A\n    bl ov74_02231448\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _02231580: .word ov74_02230404"
    );
    #endif
}

void ov74_02231584(void) {
    /* Original at 0x02231584 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl ov74_022310C4\n    add r4, r0, #0\n    bl ov74_02231154\n    ldr r2, _02231614 ; =0x000001C3\n    mov r3, #0x38\n    ldrb r1, [r0, r2]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    add r5, r1, #0\n    mul r5, r3\n    add r1, r0, r5\n    add r1, #0x34\n    ldrb r1, [r1]\n    strb r1, [r4, #8]\n    ldrb r1, [r0, r2]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    add r5, r1, #0\n    mul r5, r3\n    add r1, r0, r5\n    add r1, #0x35\n    ldrb r1, [r1]\n    strb r1, [r4, #9]\n    ldrb r1, [r0, r2]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    add r5, r1, #0\n    mul r5, r3\n    ldrb r1, [r0, r5]\n    strb r1, [r4, #0xa]\n    ldrb r1, [r0, r2]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    add r5, r1, #0\n    mul r5, r3\n    add r1, r0, r5\n    ldrb r1, [r1, #1]\n    strb r1, [r4, #0xb]\n    ldrb r1, [r0, r2]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    add r5, r1, #0\n    mul r5, r3\n    add r1, r0, r5\n    ldrb r1, [r1, #2]\n    strb r1, [r4, #0xc]\n    ldrb r1, [r0, r2]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    add r2, r1, #0\n    mul r2, r3\n    add r0, r0, r2\n    ldrb r0, [r0, #3]\n    strb r0, [r4, #0xd]\n    bl ov74_022310C4\n    add r1, r0, #0\n    ldr r0, _02231618 ; =ov74_02230520\n    bl WM_StartScan\n    cmp r0, #2\n    beq _0223160E\n    bl ov74_02231448\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _02231614: .word 0x000001C3\n    _02231618: .word ov74_02230520"
    );
    #endif
}

void ov74_0223161C(void) {
    /* Original at 0x0223161C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02231634 ; =ov74_02230590\n    bl WM_EndScan\n    cmp r0, #2\n    beq _02231630\n    bl ov74_02231448\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _02231634: .word ov74_02230590"
    );
    #endif
}

void ov74_02231638(void) {
    /* Original at 0x02231638 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    bl ov74_022311E8\n    add r4, r0, #0\n    bl ov74_02231100\n    add r1, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0223166C ; =ov74_022305E4\n    add r2, r4, #0\n    mov r3, #1\n    bl WM_StartConnectEx\n    cmp r0, #2\n    beq _02231664\n    bl ov74_02231448\n    add sp, #4\n    mov r0, #0\n    pop {r3, r4, pc}\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0223166C: .word ov74_022305E4"
    );
    #endif
}

void ov74_02231670(void) {
    /* Original at 0x02231670 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r1, _022316E0 ; =ov74_022308E0\n    mov r0, #4\n    mov r2, #0\n    bl WM_SetPortCallback\n    cmp r0, #0\n    beq _0223168C\n    bl ov74_02231448\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov74_02231054\n    ldrh r0, [r0, #0x16]\n    cmp r0, #0\n    bne _0223169A\n    mov r5, #1\n    b _0223169C\n    mov r5, #0\n    bl ov74_022310F4\n    add r6, r0, #0\n    bl ov74_022310DC\n    add r4, r0, #0\n    bl ov74_022310E8\n    add r7, r0, #0\n    bl ov74_022310D0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    lsl r2, r4, #0x10\n    ldr r0, _022316E4 ; =ov74_022306C8\n    add r1, r6, #0\n    lsr r2, r2, #0x10\n    add r3, r7, #0\n    bl WM_StartMP\n    cmp r0, #2\n    beq _022316DA\n    bl ov74_02231448\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _022316E0: .word ov74_022308E0\n    _022316E4: .word ov74_022306C8"
    );
    #endif
}

void ov74_022316E8(void) {
    /* Original at 0x022316E8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02231700 ; =ov74_02230964\n    bl WM_PowerOn\n    cmp r0, #2\n    beq _022316FC\n    bl ov74_02231448\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _02231700: .word ov74_02230964"
    );
    #endif
}

void ov74_02231704(void) {
    /* Original at 0x02231704 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02231720 ; =ov74_02230988\n    bl WM_PowerOff\n    cmp r0, #2\n    beq _0223171C\n    bl ov74_02231448\n    bl OS_Terminate\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _02231720: .word ov74_02230988"
    );
    #endif
}

void ov74_02231724(void) {
    /* Original at 0x02231724 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02231740 ; =ov74_022309AC\n    bl WM_Reset\n    cmp r0, #2\n    beq _0223173C\n    bl ov74_02231448\n    bl OS_Terminate\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _02231740: .word ov74_022309AC"
    );
    #endif
}

void ov74_02231744(void) {
    /* Original at 0x02231744 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02231760 ; =ov74_022309F0\n    bl WM_End\n    cmp r0, #2\n    beq _0223175C\n    bl ov74_02231448\n    bl OS_Terminate\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _02231760: .word ov74_022309F0"
    );
    #endif
}

void ov74_02231764(void) {
    /* Original at 0x02231764 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    bgt _0223176C\n    mov r0, #1\n    bx lr\n    cmp r0, #0xfb\n    bgt _02231774\n    mov r0, #0\n    bx lr\n    ldr r1, _0223178C ; =0x00000115\n    cmp r0, r1\n    bge _0223177E\n    mov r0, #1\n    bx lr\n    add r1, #0x86\n    cmp r0, r1\n    ble _02231788\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0223178C: .word 0x00000115"
    );
    #endif
}

void ov74_02231790(void) {
    /* Original at 0x02231790 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl PmAgbCartridge_GetVersionInternal\n    cmp r0, #4\n    bhi _022317D0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022317A8: ; jump table\n    mov r0, #VERSION_RUBY\n    str r0, [r4]\n    pop {r4, pc}\n    mov r0, #VERSION_SAPPHIRE\n    str r0, [r4]\n    pop {r4, pc}\n    mov r0, #VERSION_LEAFGREEN\n    str r0, [r4]\n    pop {r4, pc}\n    mov r0, #VERSION_FIRERED\n    str r0, [r4]\n    pop {r4, pc}\n    mov r0, #VERSION_EMERALD\n    str r0, [r4]\n    pop {r4, pc}\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov74_022317D8(void) {
    /* Original at 0x022317D8 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    ldr r1, _0223192C ; =0x0000E890\n    add r5, r0, #0\n    add r4, r5, r1\n    ldr r1, [r4]\n    cmp r1, #9\n    bls _022317EA\n    b _02231924\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022317F6: ; jump table\n    bl ov74_0223195C\n    ldr r0, [r5, #0x10]\n    bl Save_MigratedPokemon_Get\n    add r5, r0, #0\n    bl ov74_02233F68\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MigratedPokemon_RecordMigration\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02231924\n    bl OS_GetTick\n    mov r2, #0x78\n    mov r3, #0\n    bl _ull_mod\n    add r0, r0, #1\n    str r0, [r4, #4]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02231924\n    ldr r0, [r4, #4]\n    sub r0, r0, #1\n    str r0, [r4, #4]\n    bne _02231924\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02231924\n    ldr r0, [r5, #0x10]\n    mov r1, #2\n    bl Save_PrepareForAsyncWrite\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02231924\n    ldr r0, [r5, #0x10]\n    bl Save_WriteFileAsync\n    cmp r0, #3\n    bne _02231872\n    add sp, #0x10\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    cmp r0, #1\n    bne _02231924\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02231924\n    mov r0, #0\n    add r1, r0, #0\n    add r2, sp, #0\n    mov r3, #0x10\n    bl CTRDG_ReadAgbFlash\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02231924\n    bl ov74_02233E8C\n    cmp r0, #0\n    bne _022318A6\n    mov r0, #1\n    bl Sys_ClearSleepDisableFlag\n    add sp, #0x10\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02231924\n    bl ov74_02233F14\n    cmp r0, #9\n    beq _02231924\n    bl ov74_02233F14\n    cmp r0, #0xb\n    bne _022318C6\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02231924\n    bl ov74_02233ED4\n    cmp r0, #8\n    bne _02231924\n    mov r0, #1\n    bl Sys_ClearSleepDisableFlag\n    add sp, #0x10\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x10]\n    bl Save_WriteFileAsync\n    cmp r0, #3\n    bne _022318EA\n    add sp, #0x10\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    cmp r0, #2\n    bne _022318DA\n    bl ov74_02233ED4\n    mov r0, #1\n    bl Sys_SetSleepDisableFlag\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02231924\n    bl ov74_02233ED4\n    cmp r0, #8\n    bne _02231914\n    mov r0, #1\n    bl Sys_ClearSleepDisableFlag\n    add sp, #0x10\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    cmp r0, #0\n    bne _02231924\n    mov r0, #1\n    bl Sys_ClearSleepDisableFlag\n    add sp, #0x10\n    mov r0, #0xb\n    pop {r3, r4, r5, pc}\n    mov r0, #0xa\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0223192C: .word 0x0000E890"
    );
    #endif
}

void ov74_02231930(void) {
    Save_MigratedPokemon_Get(*((u32*)(r0 + 0x10)));
    ov74_02233F68();
    MigratedPokemon_RecordMigration(r4, r0);
    sub_0201A728(4);
    SaveGameNormal(*((u32*)(r5 + 0x10)));
    sub_0201A738(4);
}

void ov74_0223195C(void) {
    /* Original at 0x0223195C */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xf4\n    add r7, r0, #0\n    ldr r0, [r7, #0x10]\n    bl Save_MigratedPokemon_Get\n    str r0, [sp]\n    add r0, sp, #8\n    bl Mon_GetBoxMon\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r7, #0\n    ldr r0, _022319F4 ; =0x0000E880\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldr r0, [r7, r0]\n    ldr r2, [r5, r1]\n    mov r1, #0x96\n    lsl r1, r1, #4\n    add r0, r0, #4\n    mul r1, r2\n    add r0, r0, r1\n    mov r1, #0xf3\n    lsl r1, r1, #2\n    ldr r2, [r5, r1]\n    mov r1, #0x50\n    mul r1, r2\n    add r0, r0, r1\n    add r1, r6, #0\n    bl MigrateBoxMon\n    ldr r0, [sp]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl MigratedPokemon_CopyBoxPokemonToSlot\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, #6\n    blt _02231976\n    mov r5, #0\n    add r0, sp, #4\n    strh r5, [r0]\n    add r4, r7, #0\n    sub r6, r5, #1\n    mov r0, #0xf3\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    add r0, r0, #4\n    ldr r1, [r4, r0]\n    cmp r2, r6\n    beq _022319E6\n    cmp r1, #0xe\n    beq _022319E6\n    ldr r0, _022319F4 ; =0x0000E880\n    mov r3, #0x96\n    ldr r0, [r7, r0]\n    lsl r3, r3, #4\n    mul r3, r1\n    add r0, r0, #4\n    mov r1, #0x50\n    mul r1, r2\n    add r0, r0, r3\n    add r0, r0, r1\n    mov r1, #0xb\n    add r2, sp, #4\n    bl ov74_022348B0\n    add r5, r5, #1\n    add r4, #0xc\n    cmp r5, #6\n    blt _022319B8\n    add sp, #0xf4\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022319F4: .word 0x0000E880"
    );
    #endif
}

void ov74_022319F8(void) {
    /* Original at 0x022319F8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    tst r2, r0\n    beq _02231A16\n    mov r2, #0\n    bl FontID_String_GetWidth\n    ldr r1, [r4, #0x10]\n    lsl r1, r1, #3\n    sub r1, r1, r0\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    pop {r4, pc}\n    ldr r0, [r4, #0x18]\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02231A1C(void) {
    /* Original at 0x02231A1C */
    /* Requires manual decompilation - 186 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r1, #0\n    ldr r7, [r5, #0x44]\n    add r6, r0, #0\n    add r4, r2, #0\n    cmp r7, #0\n    bne _02231A2E\n    mov r7, #0xff\n    ldr r1, [r5]\n    ldr r0, [r1]\n    cmp r0, #0\n    bne _02231A6C\n    ldr r0, [r5, #0xc]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [r5, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x14]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x20]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r2, [r5, #0x24]\n    ldr r3, [r5, #8]\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r6, #0x20]\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    mov r0, #2\n    tst r0, r4\n    bne _02231A7E\n    ldr r1, [r5, #0x30]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    ldr r1, [r5, #0x34]\n    mvn r0, r0\n    cmp r1, r0\n    beq _02231B0E\n    ldr r2, _02231BB0 ; =0x0000012D\n    mov r0, #1\n    mov r1, #0x1b\n    mov r3, #0x4c\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x40]\n    str r0, [sp, #0x14]\n    cmp r0, #0\n    bne _02231AA6\n    mov r0, #0x4c\n    bl MessageFormat_New\n    str r0, [sp, #0x14]\n    ldr r0, _02231BB4 ; =0x00012608\n    ldr r0, [r6, r0]\n    bl String_SetEmpty\n    ldr r0, _02231BB4 ; =0x00012608\n    ldr r1, [r5, #0x34]\n    ldr r0, [r6, r0]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x20]\n    ldr r1, _02231BB4 ; =0x00012608\n    ldr r0, [sp, #0x14]\n    ldr r1, [r6, r1]\n    ldr r2, [sp, #0x20]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    ldr r1, [sp, #0x1c]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov74_022319F8\n    add r3, r0, #0\n    ldr r0, [r5, #0x1c]\n    ldr r2, [sp, #0x1c]\n    str r0, [sp]\n    str r7, [sp, #4]\n    ldr r0, [r5, #0x2c]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r5]\n    ldr r1, [r5, #0x28]\n    bl AddTextPrinterParameterizedWithColor\n    str r0, [r5, #0x48]\n    ldr r0, [r5, #0x40]\n    cmp r0, #0\n    bne _02231B02\n    ldr r0, [sp, #0x14]\n    bl MessageFormat_Delete\n    ldr r0, [sp, #0x18]\n    bl DestroyMsgData\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r5, #0x34]\n    ldr r1, [r5, #0x38]\n    cmp r1, #0\n    beq _02231B4A\n    ldr r0, _02231BB8 ; =0x0001260C\n    mov r2, #0x40\n    ldr r6, [r6, r0]\n    add r0, r6, #0\n    bl CopyU16ArrayToStringN\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov74_022319F8\n    add r3, r0, #0\n    ldr r0, [r5, #0x1c]\n    add r2, r6, #0\n    str r0, [sp]\n    str r7, [sp, #4]\n    ldr r0, [r5, #0x2c]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r5]\n    ldr r1, [r5, #0x28]\n    bl AddTextPrinterParameterizedWithColor\n    str r0, [r5, #0x48]\n    mov r0, #0\n    str r0, [r5, #0x38]\n    ldr r1, [r5, #0x3c]\n    cmp r1, #0\n    beq _02231B78\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov74_022319F8\n    add r3, r0, #0\n    ldr r0, [r5, #0x1c]\n    str r0, [sp]\n    str r7, [sp, #4]\n    ldr r0, [r5, #0x2c]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r5]\n    ldr r1, [r5, #0x28]\n    ldr r2, [r5, #0x3c]\n    bl AddTextPrinterParameterizedWithColor\n    str r0, [r5, #0x48]\n    mov r0, #0\n    str r0, [r5, #0x3c]\n    mov r0, #4\n    tst r0, r4\n    bne _02231B84\n    ldr r0, [r5]\n    bl CopyWindowToVram\n    mov r0, #8\n    tst r0, r4\n    beq _02231BAC\n    mov r0, #0x10\n    tst r0, r4\n    ldr r0, [r5]\n    beq _02231BA0\n    ldr r2, _02231BBC ; =0x000003D2\n    mov r1, #0\n    mov r3, #0xd\n    bl DrawFrameAndWindow2\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    mov r2, #0x3f\n    mov r1, #0\n    lsl r2, r2, #4\n    mov r3, #0xe\n    bl DrawFrameAndWindow1\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _02231BB0: .word 0x0000012D\n    _02231BB4: .word 0x00012608\n    _02231BB8: .word 0x0001260C\n    _02231BBC: .word 0x000003D2"
    );
    #endif
}

void ov74_02231BC0(void) {
    /* Original at 0x02231BC0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _02231BEC ; =_0223B4E8\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl ObjCharTransfer_Init\n    mov r0, #0x14\n    mov r1, #0x4c\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _02231BEC: .word _0223B4E8"
    );
    #endif
}

void ov74_02231BF0(void) {
    /* Original at 0x02231BF0 */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r2, #0x4c\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    add r1, r6, #0\n    mov r0, #0x50\n    add r1, #0x2c\n    mov r2, #0x4c\n    bl G2dRenderer_Init\n    str r0, [r6, #0x28]\n    add r0, r6, #0\n    mov r2, #1\n    add r0, #0x2c\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r7, #0x55\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    mov r0, #3\n    add r1, r4, #0\n    mov r2, #0x4c\n    bl Create2DGfxResObjMan\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _02231C36\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    mov r0, #0x4c\n    str r0, [sp, #8]\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #0x71\n    mov r2, #0x1e\n    bl AddCharResObjFromNarc\n    mov r1, #0x5b\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0x4c\n    sub r1, #0x14\n    str r0, [sp, #0xc]\n    ldr r0, [r6, r1]\n    mov r1, #0x71\n    mov r2, #0x1b\n    bl AddPlttResObjFromNarc\n    mov r1, #0x17\n    lsl r1, r1, #4\n    str r0, [r6, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x4c\n    sub r1, #0x14\n    str r0, [sp, #8]\n    ldr r0, [r6, r1]\n    mov r1, #0x71\n    mov r2, #0x1d\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5d\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x4c\n    sub r1, #0x14\n    str r0, [sp, #8]\n    ldr r0, [r6, r1]\n    mov r1, #0x71\n    mov r2, #0x1c\n    mov r3, #1\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    sub r1, #0xc\n    ldr r0, [r6, r1]\n    bl sub_0200ACF0\n    mov r0, #0x17\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl sub_0200AF94\n    bl sub_02074490\n    add r1, r0, #0\n    mov r0, #0\n    mov r2, #1\n    str r0, [sp]\n    mov r0, #0x4c\n    add r3, r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x14\n    add r3, #0xff\n    bl GfGfxLoader_GXLoadPal\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_02231CFC(void) {
    /* Original at 0x02231CFC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x2c\n    mov r1, #0\n    str r1, [sp]\n    sub r2, r1, #1\n    str r2, [sp, #4]\n    str r2, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r3, #0x55\n    str r1, [sp, #0x10]\n    lsl r3, r3, #2\n    ldr r2, [r0, r3]\n    str r2, [sp, #0x14]\n    add r2, r3, #4\n    ldr r2, [r0, r2]\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    add r2, #8\n    ldr r2, [r0, r2]\n    str r2, [sp, #0x1c]\n    add r2, r3, #0\n    add r2, #0xc\n    ldr r2, [r0, r2]\n    add r3, #0x30\n    str r2, [sp, #0x20]\n    str r1, [sp, #0x24]\n    add r0, r0, r3\n    add r2, r1, #0\n    add r3, r1, #0\n    str r1, [sp, #0x28]\n    bl CreateSpriteResourcesHeader\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x2c\n    pop {pc}"
    );
    #endif
}

void ov74_02231D48(void) {
    /* Original at 0x02231D48 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r1, #0x28]\n    str r2, [r0]\n    mov r2, #0x61\n    lsl r2, r2, #2\n    add r1, r1, r2\n    str r1, [r0, #4]\n    mov r2, #0\n    mov r1, #1\n    str r2, [r0, #0x10]\n    lsl r1, r1, #0xc\n    str r1, [r0, #0x14]\n    str r1, [r0, #0x18]\n    str r1, [r0, #0x1c]\n    strh r2, [r0, #0x20]\n    mov r1, #0x14\n    str r1, [r0, #0x24]\n    str r3, [r0, #0x28]\n    mov r1, #0x4c\n    str r1, [r0, #0x2c]\n    bx lr"
    );
    #endif
}

void ov74_02231D70(void) {
    /* Original at 0x02231D70 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02231D8C ; =0x0000E880\n    ldr r0, [r0, r3]\n    add r3, r0, #4\n    mov r0, #0x96\n    lsl r0, r0, #4\n    mul r0, r1\n    add r1, r3, r0\n    mov r0, #0x50\n    mul r0, r2\n    add r0, r1, r0\n    ldr r3, _02231D90 ; =AGB_GetBoxMonData\n    mov r1, #0xb\n    mov r2, #0\n    bx r3\n    _02231D8C: .word 0x0000E880\n    _02231D90: .word AGB_GetBoxMonData"
    );
    #endif
}

void ov74_02231D94(void) {
    /* Original at 0x02231D94 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02231DB0 ; =0x0000E880\n    ldr r0, [r0, r3]\n    add r3, r0, #4\n    mov r0, #0x96\n    lsl r0, r0, #4\n    mul r0, r1\n    add r1, r3, r0\n    mov r0, #0x50\n    mul r0, r2\n    add r0, r1, r0\n    ldr r3, _02231DB4 ; =AGB_GetBoxMonData\n    mov r1, #0x2d\n    mov r2, #0\n    bx r3\n    _02231DB0: .word 0x0000E880\n    _02231DB4: .word AGB_GetBoxMonData"
    );
    #endif
}

void ov74_02231DB8(void) {
    /* Original at 0x02231DB8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02231DD4 ; =0x0000E880\n    ldr r0, [r0, r3]\n    add r3, r0, #4\n    mov r0, #0x96\n    lsl r0, r0, #4\n    mul r0, r1\n    add r1, r3, r0\n    mov r0, #0x50\n    mul r0, r2\n    add r0, r1, r0\n    mov r1, #0\n    ldr r3, _02231DD8 ; =AGB_GetBoxMonData\n    add r2, r1, #0\n    bx r3\n    _02231DD4: .word 0x0000E880\n    _02231DD8: .word AGB_GetBoxMonData"
    );
    #endif
}

void ov74_02231DDC(void) {
    /* Original at 0x02231DDC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r5, [sp, #8]\n    lsr r4, r5, #0x1f\n    add r4, r5, r4\n    asr r4, r4, #1\n    sub r5, r2, r4\n    strb r5, [r0]\n    lsr r5, r3, #0x1f\n    add r5, r3, r5\n    asr r5, r5, #1\n    sub r3, r1, r5\n    strb r3, [r0, #2]\n    add r2, r2, r4\n    strb r2, [r0, #1]\n    add r1, r1, r5\n    strb r1, [r0, #3]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov74_02231E00(void) {
    /* Original at 0x02231E00 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    mov r1, #1\n    add r5, r0, #0\n    add r0, r3, #0\n    lsl r1, r1, #0xc\n    add r7, r2, #0\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    beq _02231E34\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ReadWholeNarcMemberByIdPair\n    add r0, r4, #0\n    add r1, r7, #0\n    bl NNS_G2dGetUnpackedBGCharacterData\n    cmp r0, #0\n    bne _02231E34\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_02231E38(void) {
    NARC_ReadWholeMember(r3, r0);
    NNS_G2dGetUnpackedBGCharacterData(r4, r5);
}

void ov74_02231E54(void) {
    /* Original at 0x02231E54 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r3, r1, #0\n    mov r4, #0\n    cmp r0, #0xc9\n    beq _02231E66\n    ldr r1, _02231EC0 ; =0x00000182\n    cmp r0, r1\n    beq _02231E90\n    b _02231EBA\n    mov r4, #3\n    lsl r0, r4, #8\n    add r2, r3, #0\n    and r0, r3\n    lsr r1, r0, #6\n    lsl r0, r4, #0x18\n    and r2, r4\n    and r0, r3\n    lsl r4, r4, #0x10\n    and r3, r4\n    lsr r0, r0, #0x12\n    lsr r3, r3, #0xc\n    orr r0, r3\n    orr r0, r1\n    orr r0, r2\n    mov r1, #0x1c\n    bl _u32_div_f\n    lsl r0, r1, #0x18\n    lsr r4, r0, #0x18\n    b _02231EBA\n    cmp r2, #5\n    bhi _02231EAC\n    add r0, r2, r2\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02231EA0: ; jump table\n    mov r4, #0\n    b _02231EBA\n    mov r4, #1\n    b _02231EBA\n    mov r4, #2\n    b _02231EBA\n    mov r4, #3\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _02231EC0: .word 0x00000182"
    );
    #endif
}

void ov74_02231EC4(void) {
    /* Original at 0x02231EC4 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    add r7, r3, #0\n    add r5, r1, #0\n    bl TranslateAgbSpecies\n    add r1, r6, #0\n    add r2, r7, #0\n    add r4, r0, #0\n    bl ov74_02231E54\n    add r7, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r7, #0\n    bl GetMonIconNaixEx\n    add r1, r0, #0\n    mov r0, #0x14\n    add r2, sp, #0\n    mov r3, #0x4c\n    bl ov74_02231E00\n    add r6, r0, #0\n    ldr r0, [sp]\n    mov r1, #2\n    ldr r0, [r0, #0x14]\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    add r1, #0x64\n    mov r2, #2\n    ldr r0, [r0, #0x14]\n    lsl r1, r1, #5\n    lsl r2, r2, #8\n    bl GX_LoadOBJ\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl GetMonIconPaletteEx\n    add r1, r0, #0\n    ldr r0, [sp, #0x1c]\n    add r1, #8\n    bl Sprite_SetPaletteOverride\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_02231F30(void) {
    /* Original at 0x02231F30 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r1, #0\n    ldr r1, _02231FAC ; =ov74_0223D338\n    str r2, [sp]\n    ldr r2, [r1]\n    mov r1, #0x83\n    add r5, r3, #0\n    lsl r1, r1, #2\n    mul r1, r5\n    add r4, r2, r1\n    ldr r1, [sp, #0x20]\n    add r6, r0, #0\n    cmp r1, #0\n    beq _02231FA4\n    bl ov74_02231764\n    cmp r0, #0\n    bne _02231F60\n    add r0, r6, #0\n    bl TranslateAgbSpecies\n    add r6, r0, #0\n    b _02231F62\n    mov r6, #0\n    ldr r2, [sp]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl GetMonIconNaixEx\n    ldr r2, [sp, #0x24]\n    ldr r3, [sp, #0x28]\n    add r1, sp, #4\n    bl ov74_02231E38\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    mov r2, #2\n    ldr r0, [r0, #0x14]\n    add r1, #0xc\n    lsl r2, r2, #8\n    bl MIi_CpuCopyFast\n    lsl r0, r5, #4\n    add r0, #0x64\n    lsl r0, r0, #5\n    str r0, [r4]\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp]\n    str r0, [r4, #8]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl GetMonIconPaletteEx\n    add r0, #8\n    add sp, #8\n    str r0, [r4, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [r4, #8]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02231FAC: .word ov74_0223D338"
    );
    #endif
}

void ov74_02231FB0(void) {
    /* Original at 0x02231FB0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _02231FF0 ; =ov74_0223D338\n    mov r6, #2\n    lsl r6, r6, #8\n    add r7, r6, #0\n    ldr r5, [r0]\n    mov r4, #0\n    add r7, #0xc\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _02231FE4\n    add r0, r5, #0\n    add r0, #0xc\n    add r1, r6, #0\n    bl DC_FlushRange\n    add r0, r5, #0\n    ldr r1, [r5]\n    add r0, #0xc\n    add r2, r6, #0\n    bl GX_LoadOBJ\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #4]\n    bl Sprite_SetPaletteOverride\n    add r4, r4, #1\n    add r5, r5, r7\n    cmp r4, #0x1e\n    blt _02231FC0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02231FF0: .word ov74_0223D338"
    );
    #endif
}

void ov74_02231FF4(void) {
    /* Original at 0x02231FF4 */
    /* Requires manual decompilation - 151 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r6, r0, #0\n    mov r0, #0x14\n    mov r1, #0x4c\n    bl NARC_New\n    mov r1, #1\n    str r0, [sp, #0x10]\n    mov r0, #0x4c\n    lsl r1, r1, #0xc\n    bl Heap_AllocAtEnd\n    mov r7, #0\n    str r0, [sp, #0x14]\n    str r7, [sp, #0xc]\n    add r5, r6, #0\n    ldr r0, _02232140 ; =0x0000E880\n    ldr r1, _02232144 ; =0x0000E884\n    ldr r0, [r6, r0]\n    ldr r2, [r6, r1]\n    mov r1, #0x96\n    lsl r1, r1, #4\n    mul r1, r2\n    add r0, r0, #4\n    add r1, r0, r1\n    ldr r0, [sp, #0xc]\n    mov r2, #0\n    add r0, r1, r0\n    mov r1, #5\n    bl AGB_GetBoxMonData\n    cmp r0, #0\n    beq _022320DA\n    ldr r1, _02232144 ; =0x0000E884\n    add r0, r6, #0\n    ldr r1, [r6, r1]\n    add r2, r7, #0\n    bl ov74_02231D70\n    ldr r1, _02232144 ; =0x0000E884\n    str r0, [sp, #0x1c]\n    ldr r1, [r6, r1]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl ov74_02231D94\n    ldr r1, _02232144 ; =0x0000E884\n    str r0, [sp, #0x18]\n    ldr r1, [r6, r1]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl ov74_02231DB8\n    add r4, r0, #0\n    ldr r0, [sp, #0x1c]\n    bl TranslateAgbSpecies\n    ldr r2, _02232148 ; =gSystem + 0x60\n    add r1, r4, #0\n    ldrb r2, [r2, #0xa]\n    bl ov74_02231E54\n    add r4, r0, #0\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x18]\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    add r2, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    add r3, r7, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x1c]\n    bl ov74_02231F30\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, _02232140 ; =0x0000E880\n    ldr r1, _02232144 ; =0x0000E884\n    ldr r0, [r6, r0]\n    ldr r2, [r6, r1]\n    mov r1, #0x96\n    lsl r1, r1, #4\n    mul r1, r2\n    add r0, r0, #4\n    add r1, r0, r1\n    ldr r0, [sp, #0xc]\n    mov r2, #0\n    add r0, r1, r0\n    mov r1, #0xc\n    bl AGB_GetBoxMonData\n    cmp r0, #0\n    beq _022320CC\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _0223210A\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    b _0223210A\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    add r2, r4, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x1c]\n    add r3, r7, #0\n    bl ov74_02231F30\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [sp, #0xc]\n    add r7, r7, #1\n    add r0, #0x50\n    add r5, #0xc\n    str r0, [sp, #0xc]\n    cmp r7, #0x1e\n    bge _0223211A\n    b _02232016\n    ldr r0, [sp, #0x14]\n    bl Heap_Free\n    ldr r0, [sp, #0x10]\n    bl NARC_Delete\n    ldr r1, _0223214C ; =ov74_02231FB0\n    ldr r0, _02232150 ; =0x00012604\n    str r1, [r6, r0]\n    ldr r1, _02232144 ; =0x0000E884\n    add r0, r6, #0\n    ldr r1, [r6, r1]\n    bl ov74_02232678\n    add r0, r6, #0\n    bl ov74_0223262C\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _02232140: .word 0x0000E880\n    _02232144: .word 0x0000E884\n    _02232148: .word gSystem + 0x60\n    _0223214C: .word ov74_02231FB0\n    _02232150: .word 0x00012604"
    );
    #endif
}

void ov74_02232154(void) {
    /* Original at 0x02232154 */
    /* Requires manual decompilation - 138 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    mov r2, #0x61\n    add r5, r0, #0\n    lsl r2, r2, #2\n    add r0, sp, #0x14\n    add r1, r5, #0\n    add r2, r5, r2\n    mov r3, #1\n    bl ov74_02231D48\n    mov r0, #0x28\n    str r0, [sp, #8]\n    mov r0, #0x31\n    mov r4, #0\n    lsl r0, r0, #4\n    str r4, [sp, #0xc]\n    add r7, r5, r0\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #8]\n    mov r6, #0x1c\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #0x1c\n    str r0, [sp]\n    ldr r2, [sp, #8]\n    add r0, r7, #0\n    add r1, r6, #0\n    mov r3, #0x1c\n    bl ov74_02231DDC\n    lsl r0, r6, #0xc\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #4]\n    str r0, [sp, #0x20]\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _022321B2\n    add r0, sp, #0x14\n    bl Sprite_CreateAffine\n    mov r1, #0x6a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    add r1, #0xa\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetPriority\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    add r1, #0x64\n    bl Sprite_SetDrawPriority\n    mov r0, #6\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #0x1c]\n    mov r0, #3\n    ldr r1, [sp, #0x20]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x20]\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _0223221C\n    add r0, sp, #0x14\n    bl Sprite_CreateAffine\n    mov r1, #0x6b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x28\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetPriority\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl Sprite_SetDrawPriority\n    add r4, r4, #1\n    add r7, r7, #4\n    add r5, #0xc\n    cmp r4, #0x1e\n    beq _02232280\n    ldr r0, [sp, #0x10]\n    add r6, #0x28\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    cmp r0, #6\n    blt _02232184\n    ldr r0, [sp, #8]\n    add r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    cmp r0, #5\n    bge _02232280\n    b _02232178\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_02232284(void) {
    /* Original at 0x02232284 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r4, r2, #0\n    mov r2, #0x61\n    add r6, r0, #0\n    lsl r2, r2, #2\n    add r5, r1, #0\n    add r7, r3, #0\n    add r0, sp, #0\n    add r1, r6, #0\n    add r2, r6, r2\n    mov r3, #1\n    bl ov74_02231D48\n    lsl r0, r5, #0xc\n    str r0, [sp, #8]\n    lsl r0, r4, #0xc\n    str r0, [sp, #0xc]\n    mov r0, #0xa\n    str r0, [sp, #0x24]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    add r4, r0, #0\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    add r0, r4, #0\n    add r1, r7, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    mov r1, #1\n    bl Sprite_SetPriority\n    ldr r1, [sp, #0x48]\n    add r0, r4, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_022322D8(void) {
    /* Original at 0x022322D8 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0xe2\n    lsl r0, r0, #2\n    add r0, r6, r0\n    mov r1, #0xe4\n    mov r2, #0xb0\n    mov r3, #0x32\n    bl ov74_02231DDC\n    mov r0, #1\n    str r0, [sp]\n    add r0, r6, #0\n    mov r1, #0xe4\n    mov r2, #0xb0\n    mov r3, #6\n    bl ov74_02232284\n    mov r1, #0xe6\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    sub r1, #8\n    add r0, r6, r1\n    mov r1, #0xb0\n    mov r3, #0x20\n    add r2, r1, #0\n    str r3, [sp]\n    bl ov74_02231DDC\n    mov r0, #1\n    mov r1, #0xb0\n    str r0, [sp]\n    add r0, r6, #0\n    add r2, r1, #0\n    mov r3, #3\n    bl ov74_02232284\n    mov r1, #0xea\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    sub r1, #0x1c\n    mov r3, #0x20\n    add r0, r6, r1\n    mov r1, #0x18\n    mov r2, #0xb0\n    str r3, [sp]\n    bl ov74_02231DDC\n    mov r0, #1\n    str r0, [sp]\n    add r0, r6, #0\n    mov r1, #0x18\n    mov r2, #0xb0\n    mov r3, #0\n    bl ov74_02232284\n    mov r1, #0xee\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    mov r7, #0\n    mov r0, #0xff\n    sub r1, #0x24\n    strb r0, [r6, r1]\n    add r4, r7, #0\n    add r5, r6, #0\n    mov r0, #0\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #0x40\n    mov r3, #9\n    bl ov74_02232284\n    mov r1, #0xf2\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r1, #0\n    mov r0, #0xf3\n    mvn r1, r1\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0xe\n    add r0, r0, #4\n    str r1, [r5, r0]\n    add r7, r7, #1\n    add r4, #0x24\n    add r5, #0xc\n    cmp r7, #6\n    blt _0223235E\n    mov r0, #0x41\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r6, r0]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_02232398(void) {
    /* Original at 0x02232398 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _022323CC ; =0x0000E880\n    ldr r2, [r0, r3]\n    add r3, r3, #4\n    ldr r3, [r0, r3]\n    mov r0, #0x96\n    lsl r0, r0, #4\n    add r2, r2, #4\n    mul r0, r3\n    add r2, r2, r0\n    mov r0, #0x50\n    mul r0, r1\n    add r0, r2, r0\n    mov r1, #0x41\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    mov r1, #0x67\n    lsl r1, r1, #2\n    cmp r0, r1\n    bne _022323C6\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _022323CC: .word 0x0000E880"
    );
    #endif
}

void ov74_022323D0(void) {
    /* Original at 0x022323D0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r3, _0223241C ; =0x0000E880\n    mov r5, #0\n    ldr r2, [r0, r3]\n    add r3, r3, #4\n    ldr r3, [r0, r3]\n    mov r0, #0x96\n    lsl r0, r0, #4\n    add r2, r2, #4\n    mul r0, r3\n    add r4, r2, r0\n    mov r0, #0x50\n    add r6, r1, #0\n    mul r6, r0\n    add r7, r5, #0\n    add r1, r5, #0\n    add r0, r4, r6\n    add r1, #0xd\n    add r2, r7, #0\n    bl AGB_GetBoxMonData\n    ldr r3, _02232420 ; =ov74_0223C998\n    add r2, r0, #0\n    mov r1, #0\n    ldr r0, [r3]\n    cmp r2, r0\n    bne _0223240A\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r1, #1\n    add r3, r3, #4\n    cmp r1, #8\n    blo _02232400\n    add r5, r5, #1\n    cmp r5, #4\n    blt _022323EE\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223241C: .word 0x0000E880\n    _02232420: .word ov74_0223C998"
    );
    #endif
}

void ov74_02232424(void) {
    /* Original at 0x02232424 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _02232468 ; =0x0000E880\n    ldr r2, [r0, r3]\n    add r3, r3, #4\n    ldr r3, [r0, r3]\n    mov r0, #0x96\n    lsl r0, r0, #4\n    add r2, r2, #4\n    mul r0, r3\n    add r2, r2, r0\n    mov r0, #0x50\n    mul r0, r1\n    add r0, r2, r0\n    mov r1, #0xc\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    ldr r1, _0223246C ; =ov74_0223C9A8\n    ldrh r1, [r1, #0x30]\n    cmp r1, #0\n    beq _02232462\n    ldr r2, _02232470 ; =ov74_0223C9D8\n    ldrh r1, [r2]\n    cmp r0, r1\n    bne _0223245A\n    mov r0, #1\n    pop {r3, pc}\n    add r2, r2, #2\n    ldrh r1, [r2]\n    cmp r1, #0\n    bne _02232450\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _02232468: .word 0x0000E880\n    _0223246C: .word ov74_0223C9A8\n    _02232470: .word ov74_0223C9D8"
    );
    #endif
}

void ov74_02232474(void) {
    /* Original at 0x02232474 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _0223249C ; =0x0000E880\n    ldr r2, [r0, r3]\n    add r3, r3, #4\n    ldr r3, [r0, r3]\n    mov r0, #0x96\n    lsl r0, r0, #4\n    add r2, r2, #4\n    mul r0, r3\n    add r2, r2, r0\n    mov r0, #0x50\n    mul r0, r1\n    add r0, r2, r0\n    mov r1, #0xb\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    bl ov74_02231764\n    pop {r3, pc}\n    _0223249C: .word 0x0000E880"
    );
    #endif
}

void ov74_022324A0(void) {
    /* Original at 0x022324A0 */
    /* Requires manual decompilation - 186 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    add r0, r4, r0\n    str r0, [sp]\n    add r6, r1, #0\n    mov r0, #0xc\n    mul r0, r6\n    ldr r1, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _022324CC\n    bl Sprite_GetDrawFlag\n    cmp r0, #0\n    bne _022324CC\n    add sp, #0x14\n    mov r0, #3\n    pop {r4, r5, r6, r7, pc}\n    mov r5, #0\n    mov r7, #0x3d\n    mvn r5, r5\n    mov r2, #0\n    add r3, r4, #0\n    lsl r7, r7, #4\n    b _022324F4\n    ldr r0, _02232628 ; =0x0000E884\n    ldr r1, [r4, r0]\n    ldr r0, [r3, r7]\n    cmp r1, r0\n    bne _022324F0\n    mov r0, #0xf3\n    lsl r0, r0, #2\n    ldr r0, [r3, r0]\n    cmp r6, r0\n    bne _022324F0\n    add r5, r2, #0\n    add r3, #0xc\n    add r2, r2, #1\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _02232500\n    cmp r2, #6\n    blt _022324DA\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov74_02232398\n    cmp r0, #1\n    bne _02232512\n    add sp, #0x14\n    mov r0, #4\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov74_022323D0\n    cmp r0, #1\n    bne _02232524\n    add sp, #0x14\n    mov r0, #5\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov74_02232424\n    cmp r0, #1\n    bne _02232536\n    add sp, #0x14\n    mov r0, #6\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov74_02232474\n    cmp r0, #1\n    bne _02232548\n    add sp, #0x14\n    mov r0, #7\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _022325F0\n    mov r0, #0x41\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #6\n    bne _02232560\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    mov r5, #0\n    mov r0, #0xf3\n    add r3, r4, #0\n    lsl r0, r0, #2\n    sub r1, r5, #1\n    ldr r2, [r3, r0]\n    cmp r2, r1\n    bne _022325E6\n    ldr r1, [sp]\n    ldr r0, [sp, #4]\n    ldr r0, [r1, r0]\n    bl Sprite_GetMatrixPtr\n    add r1, r0, #0\n    mov r0, #0xc\n    add r7, r5, #0\n    mul r7, r0\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    add r5, r4, r0\n    ldr r0, [r5, r7]\n    bl Sprite_SetMatrix\n    ldr r0, [r5, r7]\n    bl Sprite_GetMatrixPtr\n    add r3, r0, #0\n    add r2, sp, #8\n    ldmia r3!, {r0, r1}\n    mov ip, r2\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #2\n    str r0, [r2]\n    ldr r0, [sp, #8]\n    lsl r1, r1, #0xe\n    sub r0, r0, r1\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    lsr r1, r1, #1\n    sub r0, r0, r1\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r7]\n    mov r1, ip\n    bl Sprite_SetMatrix\n    ldr r0, [r5, r7]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r1, #0xf3\n    add r3, r4, r7\n    lsl r1, r1, #2\n    ldr r0, _02232628 ; =0x0000E884\n    str r6, [r3, r1]\n    ldr r2, [r4, r0]\n    add r0, r1, #4\n    str r2, [r3, r0]\n    add r0, r1, #0\n    add r0, #0x44\n    ldr r0, [r4, r0]\n    add r1, #0x44\n    add r0, r0, #1\n    str r0, [r4, r1]\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r5, r5, #1\n    add r3, #0xc\n    cmp r5, #6\n    blt _0223256A\n    b _02232622\n    mov r0, #0xc\n    add r6, r5, #0\n    mul r6, r0\n    mov r0, #0xf2\n    add r1, r4, r6\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r2, #0\n    mov r1, #0xf3\n    mvn r2, r2\n    add r0, r4, r6\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    add r0, r1, #0\n    add r0, #0x44\n    ldr r0, [r4, r0]\n    add r1, #0x44\n    sub r0, r0, #1\n    str r0, [r4, r1]\n    add sp, #0x14\n    mov r0, #2\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02232628: .word 0x0000E884"
    );
    #endif
}

void ov74_0223262C(void) {
    /* Original at 0x0223262C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    sub r7, r4, #1\n    mov r0, #0xf3\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, r7\n    beq _0223265C\n    ldr r0, _02232674 ; =0x0000E884\n    ldr r1, [r6, r0]\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r1, r0\n    bne _0223265C\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _02232668\n    mov r0, #0xf2\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, #6\n    blt _02232636\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02232674: .word 0x0000E884"
    );
    #endif
}

void ov74_02232678(void) {
    /* Original at 0x02232678 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x60\n    add r5, r0, #0\n    mov r0, #0\n    add r4, r1, #0\n    add r3, sp, #0x14\n    add r1, r0, #0\n    mov r2, #4\n    stmia r3!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02232688\n    stmia r3!, {r0, r1}\n    str r0, [r3]\n    ldr r0, _022326F0 ; =0x00000478\n    add r0, r5, r0\n    str r0, [sp, #0x14]\n    mov r0, #6\n    str r0, [sp, #0x1c]\n    mov r0, #0x15\n    str r0, [sp, #0x20]\n    mov r0, #0xd\n    str r0, [sp, #0x24]\n    mov r0, #2\n    str r0, [sp, #0x28]\n    sub r0, r0, #3\n    str r0, [sp, #0x48]\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    str r0, [sp, #0x30]\n    mov r0, #1\n    str r0, [sp, #0x38]\n    str r0, [sp, #0x3c]\n    ldr r0, _022326F4 ; =0x00010200\n    str r0, [sp, #0x40]\n    mov r0, #0xa0\n    str r0, [sp, #0x34]\n    bl PmAgbCartridge_GetLanguage\n    add r3, r0, #0\n    ldr r0, _022326F8 ; =0x0000E880\n    mov r2, #9\n    ldr r1, [r5, r0]\n    ldr r0, _022326FC ; =0x00008344\n    add r1, r1, r0\n    lsl r0, r4, #3\n    add r0, r4, r0\n    add r0, r1, r0\n    add r1, sp, #0\n    bl ConvertRSStringToDPStringInternational\n    add r0, sp, #0\n    str r0, [sp, #0x4c]\n    add r0, r5, #0\n    add r1, sp, #0x14\n    mov r2, #1\n    bl ov74_02231A1C\n    add sp, #0x60\n    pop {r3, r4, r5, pc}\n    _022326F0: .word 0x00000478\n    _022326F4: .word 0x00010200\n    _022326F8: .word 0x0000E880\n    _022326FC: .word 0x00008344"
    );
    #endif
}

void ov74_02232700(void) {
    /* Original at 0x02232700 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r6, r1, #0\n    mov r1, #2\n    bl GetBgTilemapBuffer\n    add r4, r0, #0\n    cmp r6, #0\n    beq _02232724\n    add r0, r6, #0\n    mov r1, #8\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    b _02232726\n    mov r1, #0\n    mov r2, #0\n    mov r0, #1\n    add r3, r1, #0\n    tst r3, r0\n    beq _02232736\n    add r6, r2, #0\n    add r6, #0x80\n    b _0223273A\n    add r6, r2, #0\n    add r6, #0x60\n    add r3, r4, #0\n    add r3, #0xd6\n    lsl r1, r1, #0x17\n    add r2, r2, #1\n    strh r6, [r3]\n    lsr r1, r1, #0x18\n    add r4, r4, #2\n    cmp r2, #4\n    blt _0223272A\n    ldr r0, [r5, #0x20]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov74_02232758(void) {
    /* Original at 0x02232758 */
    /* Requires manual decompilation - 190 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x78\n    add r5, r0, #0\n    mov r0, #0\n    add r4, r1, #0\n    add r3, sp, #0x2c\n    add r1, r0, #0\n    mov r2, #4\n    stmia r3!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02232768\n    stmia r3!, {r0, r1}\n    str r0, [r3]\n    mov r1, #0x20\n    str r1, [sp, #0x3c]\n    mov r1, #1\n    ldr r0, _02232908 ; =0x00000488\n    str r1, [sp, #0x50]\n    str r1, [sp, #0x54]\n    mov r1, #0xbc\n    str r1, [sp, #0x4c]\n    ldr r1, _0223290C ; =0x000F0200\n    add r0, r5, r0\n    str r1, [sp, #0x58]\n    mov r1, #0x2c\n    str r0, [sp, #0x2c]\n    mov r0, #0\n    str r1, [sp, #0x60]\n    mov r1, #0x90\n    mov r2, #4\n    str r1, [sp, #0x44]\n    str r0, [sp, #0x34]\n    str r0, [sp, #0x38]\n    str r0, [sp, #0x64]\n    str r0, [sp, #0x48]\n    add r0, r5, #0\n    add r1, sp, #0x2c\n    str r2, [sp, #0x40]\n    bl ov74_02231A1C\n    mov r0, #0x2b\n    str r0, [sp, #0x60]\n    mov r0, #0x50\n    str r0, [sp, #0x44]\n    mov r0, #8\n    str r0, [sp, #0x48]\n    add r0, r5, #0\n    add r1, sp, #0x2c\n    mov r2, #6\n    bl ov74_02231A1C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov74_02232700\n    cmp r4, #0\n    bne _022327D6\n    ldr r0, [sp, #0x2c]\n    bl CopyWindowToVram\n    add sp, #0x78\n    pop {r3, r4, r5, r6, r7, pc}\n    add r2, sp, #0x1c\n    add r0, r4, #0\n    mov r1, #2\n    add r2, #2\n    bl AGB_GetBoxMonData\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    add r3, r0, #0\n    add r0, sp, #0x1c\n    add r0, #2\n    add r1, sp, #8\n    mov r2, #0xb\n    bl ConvertRSStringToDPStringInternational\n    add r0, sp, #8\n    str r0, [sp, #0x64]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x60]\n    mov r0, #8\n    str r0, [sp, #0x44]\n    mov r0, #0\n    str r0, [sp, #0x48]\n    add r0, r5, #0\n    add r1, sp, #0x2c\n    mov r2, #6\n    bl ov74_02231A1C\n    mov r0, #0x40\n    mov r1, #0x4c\n    bl String_New\n    add r6, r0, #0\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xed\n    mov r3, #0x4c\n    bl NewMsgDataFromNarc\n    add r7, r0, #0\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    bl TranslateAgbSpecies\n    str r0, [sp, #4]\n    ldr r1, [sp, #4]\n    add r0, r7, #0\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x60]\n    mov r0, #0x10\n    str r0, [sp, #0x44]\n    str r0, [sp, #0x48]\n    add r0, r5, #0\n    add r1, sp, #0x2c\n    mov r2, #6\n    str r6, [sp, #0x68]\n    bl ov74_02231A1C\n    add r0, r7, #0\n    bl DestroyMsgData\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    cmp r0, #0\n    beq _022328B8\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl UpConvertItemId_Gen3to4\n    add r7, r0, #0\n    mov r0, #0x40\n    mov r1, #0x4c\n    bl String_New\n    lsl r1, r7, #0x10\n    lsr r1, r1, #0x10\n    mov r2, #0x4c\n    add r6, r0, #0\n    bl GetItemNameIntoString\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x60]\n    mov r0, #0x98\n    str r0, [sp, #0x44]\n    mov r0, #0x10\n    str r0, [sp, #0x48]\n    add r0, r5, #0\n    add r1, sp, #0x2c\n    mov r2, #6\n    str r6, [sp, #0x68]\n    bl ov74_02231A1C\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl ov74_02234A0C\n    add r6, r0, #0\n    mov r0, #0xa\n    mov r1, #0x4c\n    bl String_New\n    mov r3, #1\n    add r1, r6, #0\n    mov r2, #3\n    add r4, r0, #0\n    str r3, [sp]\n    bl String16_FormatInteger\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x60]\n    mov r0, #0x64\n    str r0, [sp, #0x44]\n    mov r0, #8\n    str r0, [sp, #0x48]\n    add r0, r5, #0\n    add r1, sp, #0x2c\n    mov r2, #2\n    str r4, [sp, #0x68]\n    bl ov74_02231A1C\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, [sp, #4]\n    mov r1, #0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl PlayCry\n    add sp, #0x78\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02232908: .word 0x00000488\n    _0223290C: .word 0x000F0200"
    );
    #endif
}

void ov74_02232910(void) {
    /* Original at 0x02232910 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x4c\n    str r0, [sp, #8]\n    add r6, r2, #0\n    mov r0, #0\n    add r4, r3, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    cmp r4, #0\n    beq _02232938\n    mov r0, #0x17\n    str r0, [r4]\n    str r6, [r5, #0x24]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov74_02232940(void) {
    /* Original at 0x02232940 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    add r4, r3, #0\n    str r0, [sp, #4]\n    mov r0, #0x4c\n    add r6, r2, #0\n    str r0, [sp, #8]\n    ldr r3, _02232970 ; =0x00007FFF\n    mov r0, #0\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    cmp r4, #0\n    beq _02232968\n    mov r0, #0x17\n    str r0, [r4]\n    str r6, [r5, #0x24]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02232970: .word 0x00007FFF"
    );
    #endif
}

void ov74_02232974(void) {
    /* Original at 0x02232974 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x80\n    ldr r5, _02232A34 ; =_0223B4F8\n    add r3, sp, #0x70\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _02232A38 ; =_0223B508\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02232A3C ; =_0223B524\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02232A40 ; =_0223B540\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02232A44 ; =_0223B55C\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x80\n    pop {r3, r4, r5, pc}\n    nop\n    _02232A34: .word _0223B4F8\n    _02232A38: .word _0223B508\n    _02232A3C: .word _0223B524\n    _02232A40: .word _0223B540\n    _02232A44: .word _0223B55C"
    );
    #endif
}

void ov74_02232A48(void) {
    /* Original at 0x02232A48 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x38\n    ldr r5, _02232AC0 ; =_0223B578\n    add r4, r0, #0\n    add r3, sp, #0x10\n    mov r2, #5\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02232A54\n    add r0, sp, #0x10\n    bl GfGfx_SetBanks\n    ldr r0, [r4, #0x20]\n    bl ov74_02232974\n    ldr r0, _02232AC4 ; =gSystem + 0x60\n    mov r1, #1\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    bl ResetAllTextPrinters\n    mov r1, #0x1e\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x4c\n    bl LoadFontPal0\n    mov r0, #0xc0\n    str r0, [sp]\n    mov r0, #0x4c\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #0x17\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #5\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x4c\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x20]\n    mov r0, #0x71\n    mov r1, #0x1a\n    mov r3, #2\n    bl GfGfxLoader_LoadCharData\n    mov r0, #2\n    mov r1, #0x4c\n    bl FontID_Alloc\n    add sp, #0x38\n    pop {r3, r4, r5, pc}\n    _02232AC0: .word _0223B578\n    _02232AC4: .word gSystem + 0x60"
    );
    #endif
}

void ov74_02232AC8(void) {
    /* Original at 0x02232AC8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x4c\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x20]\n    mov r0, #0x71\n    mov r1, #0x18\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r2, #0\n    ldr r1, [r4]\n    ldr r0, _02232B14 ; =ov74_0223C960\n    add r3, r2, #0\n    ldrb r0, [r0, r1]\n    mov r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x20]\n    bl BgTilemapRectChangePalette\n    ldr r0, [r4, #0x20]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    pop {r4, pc}\n    _02232B14: .word ov74_0223C960"
    );
    #endif
}

void ov74_02232B18(void) {
    /* Original at 0x02232B18 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    mov r1, #7\n    add r4, r0, #0\n    mov r0, #0\n    lsl r1, r1, #6\n    mov r2, #0x4c\n    bl LoadFontPal0\n    mov r1, #0\n    mov r2, #0x3f\n    str r1, [sp]\n    mov r0, #0x4c\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x20]\n    lsl r2, r2, #4\n    mov r3, #0xe\n    bl LoadUserFrameGfx1\n    ldr r0, [r4, #0x1c]\n    ldr r2, _02232BC0 ; =0x000003D2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x4c\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x20]\n    mov r1, #0\n    mov r3, #0xd\n    bl LoadUserFrameGfx2\n    ldr r0, _02232BC4 ; =0x0000042C\n    mov r1, #0\n    add r0, r4, r0\n    mov r2, #0x4c\n    bl memset\n    ldr r0, _02232BC8 ; =0x00000498\n    mov r3, #0x1b\n    add r1, r0, #0\n    add r2, r4, r0\n    sub r1, #0x6c\n    str r2, [r4, r1]\n    add r1, r0, #0\n    mov r2, #2\n    sub r1, #0x64\n    str r2, [r4, r1]\n    add r1, r0, #0\n    mov r2, #1\n    sub r1, #0x60\n    str r2, [r4, r1]\n    add r1, r0, #0\n    sub r1, #0x5c\n    str r3, [r4, r1]\n    add r1, r0, #0\n    mov r3, #4\n    sub r1, #0x58\n    str r3, [r4, r1]\n    add r3, r0, #0\n    mov r1, #0\n    sub r3, #0x48\n    str r1, [r4, r3]\n    add r3, r0, #0\n    sub r3, #0x44\n    str r2, [r4, r3]\n    add r3, r0, #0\n    sub r3, #0x4c\n    str r2, [r4, r3]\n    add r2, r0, #0\n    ldr r3, _02232BCC ; =0x0001020F\n    sub r2, #0x40\n    str r3, [r4, r2]\n    add r2, r0, #0\n    ldr r3, _02232BD0 ; =0x000F020F\n    sub r2, #0x3c\n    str r3, [r4, r2]\n    add r2, r0, #0\n    sub r2, #0x34\n    str r1, [r4, r2]\n    sub r0, #0x30\n    str r1, [r4, r0]\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _02232BC0: .word 0x000003D2\n    _02232BC4: .word 0x0000042C\n    _02232BC8: .word 0x00000498\n    _02232BCC: .word 0x0001020F\n    _02232BD0: .word 0x000F020F"
    );
    #endif
}

void ov74_02232BD4(void) {
    /* Original at 0x02232BD4 */
    /* Requires manual decompilation - 203 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    add r6, r0, #0\n    mov r7, #0x6b\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, r7]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r5, r5, #1\n    add r4, #0xc\n    cmp r5, #0x1e\n    blt _02232BE2\n    mov r7, #0xf2\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r5, r5, #1\n    add r4, #0xc\n    cmp r5, #6\n    blt _02232C06\n    mov r0, #0xe6\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xee\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xea\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r2, #0x61\n    lsl r2, r2, #2\n    add r0, sp, #0x1c\n    add r1, r6, #0\n    add r2, r6, r2\n    mov r3, #1\n    bl ov74_02231D48\n    mov r0, #0x1c\n    mov r7, #0\n    str r0, [sp, #0x10]\n    add r4, r6, #0\n    add r5, r6, #0\n    ldr r0, [sp, #0x10]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x24]\n    mov r0, #0x8e\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x28]\n    add r0, sp, #0x1c\n    bl Sprite_CreateAffine\n    ldr r1, _02232D94 ; =0x00000414\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _02232D94 ; =0x00000414\n    add r1, r7, #0\n    ldr r0, [r4, r0]\n    add r1, #0xa\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02232D94 ; =0x00000414\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetPriority\n    ldr r0, _02232D94 ; =0x00000414\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    mov r1, #0x3d\n    mov r2, #0xf3\n    lsl r1, r1, #4\n    lsl r2, r2, #2\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    add r0, r6, #0\n    bl ov74_02231D70\n    mov r1, #0x3d\n    mov r2, #0xf3\n    lsl r1, r1, #4\n    lsl r2, r2, #2\n    str r0, [sp, #0x14]\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    add r0, r6, #0\n    bl ov74_02231D94\n    mov r1, #0x3d\n    mov r2, #0xf3\n    lsl r1, r1, #4\n    lsl r2, r2, #2\n    str r0, [sp, #0x18]\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    add r0, r6, #0\n    bl ov74_02231DB8\n    add r2, r0, #0\n    ldr r0, _02232D94 ; =0x00000414\n    str r7, [sp]\n    ldr r0, [r4, r0]\n    ldr r3, _02232D98 ; =gSystem + 0x60\n    str r0, [sp, #4]\n    ldrb r3, [r3, #0xa]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    bl ov74_02231EC4\n    ldr r0, [sp, #0x10]\n    add r7, r7, #1\n    add r0, #0x28\n    str r0, [sp, #0x10]\n    add r4, r4, #4\n    add r5, #0xc\n    cmp r7, #6\n    blt _02232C54\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x4c\n    str r0, [sp, #0xc]\n    ldr r2, [r6, #0x20]\n    mov r0, #0x71\n    mov r1, #0x19\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r2, #0\n    ldr r1, [r6]\n    ldr r0, _02232D9C ; =ov74_0223C960\n    add r3, r2, #0\n    ldrb r0, [r0, r1]\n    mov r1, #2\n    str r0, [sp, #8]\n    ldr r0, [r6, #0x20]\n    bl BgTilemapRectChangePalette\n    ldr r0, [r6, #0x20]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r1, #7\n    mov r0, #0\n    lsl r1, r1, #6\n    mov r2, #0x4c\n    bl LoadFontPal0\n    mov r1, #0\n    mov r2, #0x3f\n    str r1, [sp]\n    mov r0, #0x4c\n    str r0, [sp, #4]\n    ldr r0, [r6, #0x20]\n    lsl r2, r2, #4\n    mov r3, #0xe\n    bl LoadUserFrameGfx1\n    ldr r0, [r6, #0x1c]\n    ldr r2, _02232DA0 ; =0x000003D2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x4c\n    str r0, [sp, #4]\n    ldr r0, [r6, #0x20]\n    mov r1, #0\n    mov r3, #0xd\n    bl LoadUserFrameGfx2\n    add r0, r6, #0\n    bl ov74_02232B18\n    mov r1, #0x46\n    mov r0, #0xa\n    lsl r1, r1, #4\n    str r0, [r6, r1]\n    sub r1, #0x34\n    add r0, r6, #0\n    add r1, r6, r1\n    mov r2, #0x18\n    bl ov74_02231A1C\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}\n    _02232D94: .word 0x00000414\n    _02232D98: .word gSystem + 0x60\n    _02232D9C: .word ov74_0223C960\n    _02232DA0: .word 0x000003D2"
    );
    #endif
}

void ov74_02232DA4(void) {
    /* Original at 0x02232DA4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _02232DC0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02232DC4(void) {
    /* Original at 0x02232DC4 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r7, _02232E34 ; =0x00000414\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, r7]\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _02232DCE\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _02232E38 ; =0x00000498\n    add r0, r6, r0\n    bl ov74_02232DA4\n    mov r0, #0xe6\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0xee\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0xea\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0xf3\n    mov r5, #0\n    lsl r0, r0, #2\n    add r4, r6, #0\n    sub r3, r5, #1\n    mov r2, #0xe\n    add r1, r0, #4\n    str r3, [r4, r0]\n    str r2, [r4, r1]\n    add r5, r5, #1\n    add r4, #0xc\n    cmp r5, #6\n    blt _02232E1E\n    mov r0, #0x41\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r6, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02232E34: .word 0x00000414\n    _02232E38: .word 0x00000498"
    );
    #endif
}

void ov74_02232E3C(void) {
    /* Original at 0x02232E3C */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r7, #0x6a\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    cmp r0, #0\n    beq _02232E5A\n    bl Sprite_Delete\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _02232E68\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, #0x1e\n    blt _02232E50\n    mov r7, #0xf2\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    cmp r0, #0\n    beq _02232E82\n    bl Sprite_Delete\n    add r5, r5, #1\n    add r4, #0xc\n    cmp r5, #6\n    blt _02232E78\n    mov r0, #0xe6\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    beq _02232E98\n    bl Sprite_Delete\n    mov r0, #0xee\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    beq _02232EA6\n    bl Sprite_Delete\n    mov r0, #0xea\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    beq _02232EB4\n    bl Sprite_Delete\n    ldr r0, _02232F48 ; =0x00000478\n    add r0, r6, r0\n    bl ov74_02232DA4\n    ldr r0, _02232F4C ; =0x00000488\n    add r0, r6, r0\n    bl ov74_02232DA4\n    ldr r0, _02232F50 ; =0x00000498\n    add r0, r6, r0\n    bl ov74_02232DA4\n    mov r0, #2\n    bl FontID_Release\n    mov r0, #0x5b\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    mov r0, #0x17\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl sub_0200B0A8\n    mov r7, #0x55\n    mov r5, #0\n    add r4, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r4, r7]\n    bl Destroy2DGfxResObjMan\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #6\n    blt _02232EEE\n    ldr r0, [r6, #0x28]\n    bl SpriteList_Delete\n    mov r0, #0\n    str r0, [r6, #0x28]\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    ldr r0, _02232F54 ; =0x0000E88C\n    ldr r0, [r6, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _02232F58 ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    ldr r0, [r6, #0x20]\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    ldr r0, [r6, #0x20]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r6, #0x20]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r6, #0x20]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02232F48: .word 0x00000478\n    _02232F4C: .word 0x00000488\n    _02232F50: .word 0x00000498\n    _02232F54: .word 0x0000E88C\n    _02232F58: .word gSystem + 0x60"
    );
    #endif
}

void ov74_02232F5C(void) {
    /* Original at 0x02232F5C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    ldr r1, [r0, #0x20]\n    mov r3, #0\n    str r1, [sp]\n    mov r1, #2\n    lsl r1, r1, #8\n    str r1, [sp, #8]\n    mov r1, #8\n    str r1, [sp, #0xc]\n    str r3, [sp, #4]\n    mov r1, #0x19\n    add r2, sp, #0\n    strb r1, [r2, #0x10]\n    mov r1, #7\n    strb r1, [r2, #0x11]\n    strb r3, [r2, #0x13]\n    ldrb r3, [r2, #0x12]\n    mov r1, #0xf0\n    bic r3, r1\n    mov r1, #0x10\n    orr r1, r3\n    strb r1, [r2, #0x12]\n    ldr r1, _02232F98 ; =0x0000E88C\n    ldr r0, [r0, r1]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    add sp, #0x14\n    pop {pc}\n    _02232F98: .word 0x0000E88C"
    );
    #endif
}

void ov74_02232F9C(void) {
    /* Original at 0x02232F9C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    bl ov74_02233F84\n    add r4, r0, #0\n    bl PmAgbCartridge_GetLanguage\n    add r3, r0, #0\n    add r0, r4, #0\n    add r1, sp, #8\n    mov r2, #8\n    bl ConvertRSStringToDPStringInternational\n    mov r0, #0x4c\n    bl MessageFormat_New\n    add r4, r0, #0\n    mov r0, #8\n    mov r1, #0x4c\n    bl String_New\n    add r1, sp, #8\n    add r6, r0, #0\n    bl CopyU16ArrayToString\n    mov r1, #1\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r6, #0\n    mov r3, #0\n    bl BufferString\n    add r0, r5, #0\n    bl ov74_02232B18\n    ldr r0, [r5]\n    mov r2, #0x18\n    lsl r1, r0, #2\n    ldr r0, _02233020 ; =ov74_0223C980\n    ldr r0, [r0, r1]\n    mov r1, #0x46\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    add r0, #0xc\n    sub r1, #0x34\n    str r4, [r5, r0]\n    add r0, r5, #0\n    add r1, r5, r1\n    bl ov74_02231A1C\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl MessageFormat_Delete\n    add r0, r5, #0\n    bl ov74_02232F5C\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    nop\n    _02233020: .word ov74_0223C980"
    );
    #endif
}

void ov74_02233024(void) {
    /* Original at 0x02233024 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02233054 ; =0x00012604\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02233038\n    blx r0\n    ldr r0, _02233054 ; =0x00012604\n    mov r1, #0\n    str r1, [r4, r0]\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    ldr r0, [r4, #0x20]\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _02233058 ; =0x027E0000\n    ldr r1, _0223305C ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    _02233054: .word 0x00012604\n    _02233058: .word 0x027E0000\n    _0223305C: .word 0x00003FF8"
    );
    #endif
}

void ov74_02233060(void) {
    /* Original at 0x02233060 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    ldr r0, [r0, #0x10]\n    bl Save_MigratedPokemon_Get\n    mov r6, #0\n    str r0, [sp, #8]\n    str r6, [sp, #4]\n    add r7, r6, #0\n    mov r4, #0\n    add r5, r4, #0\n    ldr r1, [sp]\n    ldr r0, _022330CC ; =0x0000E880\n    mov r2, #0\n    ldr r0, [r1, r0]\n    mov r1, #5\n    add r0, r0, #4\n    add r0, r0, r7\n    add r0, r0, r5\n    bl AGB_GetBoxMonData\n    cmp r0, #0\n    beq _02233092\n    add r6, r6, #1\n    add r4, r4, #1\n    add r5, #0x50\n    cmp r4, #0x1e\n    blt _02233078\n    mov r0, #0x96\n    lsl r0, r0, #4\n    add r7, r7, r0\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #0xe\n    blt _02233074\n    cmp r6, #6\n    bge _022330B4\n    add sp, #0xc\n    mov r0, #5\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    bl MigratedPokemon_CountPokemon\n    cmp r0, #0\n    beq _022330C4\n    add sp, #0xc\n    mov r0, #6\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022330CC: .word 0x0000E880"
    );
    #endif
}

void ov74_022330D0(void) {
    /* Original at 0x022330D0 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #4]\n    cmp r1, #0\n    beq _0223310C\n    bl ov74_02232B18\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, _0223312C ; =ov74_0223C9B8\n    lsl r1, r4, #2\n    ldr r0, [r0, r1]\n    mov r1, #0x46\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r1, #0x34\n    mov r2, #1\n    add r0, #0x10\n    str r2, [r5, r0]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r2, #0x18\n    bl ov74_02231A1C\n    mov r0, #0\n    str r0, [r5, #4]\n    b _02233126\n    ldr r0, _02233130 ; =0x00000474\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02233126\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0223312C: .word ov74_0223C9B8\n    _02233130: .word 0x00000474"
    );
    #endif
}

void ov74_02233134(void) {
    /* Original at 0x02233134 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #4]\n    cmp r1, #0\n    beq _02233170\n    bl ov74_02232B18\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, _02233194 ; =ov74_0223C9B8\n    lsl r1, r4, #2\n    ldr r0, [r0, r1]\n    mov r1, #0x46\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r1, #0x34\n    mov r2, #1\n    add r0, #0x10\n    str r2, [r5, r0]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r2, #0x18\n    bl ov74_02231A1C\n    mov r0, #0\n    str r0, [r5, #4]\n    b _02233190\n    ldr r0, _02233198 ; =0x00000474\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02233190\n    add r0, r5, #0\n    bl ov74_02232F5C\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _02233194: .word ov74_0223C9B8\n    _02233198: .word 0x00000474"
    );
    #endif
}

void ov74_0223319C(void) {
    /* Original at 0x0223319C */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r1, #0\n    ldr r2, [r5, #8]\n    mvn r1, r1\n    cmp r2, r1\n    beq _022331DE\n    bl ov74_02232B18\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r1, #0x46\n    ldr r0, [r5, #8]\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    add r0, #0x10\n    sub r1, #0x34\n    str r4, [r5, r0]\n    add r0, r5, #0\n    add r1, r5, r1\n    mov r2, #0x18\n    bl ov74_02231A1C\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r5, #8]\n    ldr r0, _02233220 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    b _0223321C\n    cmp r4, #0\n    beq _022331FC\n    ldr r0, _02233224 ; =0x00000474\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0223321C\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, _02233228 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    bne _0223320C\n    ldr r0, _0223322C ; =gSystem\n    ldr r0, [r0, #0x48]\n    cmp r0, #0\n    beq _0223321C\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, _02233220 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _02233220: .word SEQ_SE_DP_SELECT\n    _02233224: .word 0x00000474\n    _02233228: .word gSystem + 0x40\n    _0223322C: .word gSystem"
    );
    #endif
}

void ov74_02233230(void) {
    /* Original at 0x02233230 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0xe\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #0x4c\n    lsl r2, r2, #0xe\n    bl Heap_Create\n    ldr r1, _022332D8 ; =0x00012610\n    add r0, r5, #0\n    mov r2, #0x4c\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _022332D8 ; =0x00012610\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #0x4c\n    bl BgConfig_Alloc\n    str r0, [r4, #0x20]\n    mov r0, #0x4c\n    bl YesNoPrompt_Create\n    ldr r1, _022332DC ; =0x0000E88C\n    str r0, [r4, r1]\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    ldr r0, [r0, #8]\n    str r0, [r4, #0x10]\n    bl Save_PlayerData_GetProfile\n    str r0, [r4, #0x14]\n    ldr r0, [r4, #0x10]\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [r4, #0x18]\n    bl Options_GetFrame\n    str r0, [r4, #0x1c]\n    mov r0, #6\n    lsl r0, r0, #6\n    mov r1, #0x4c\n    bl String_New\n    ldr r1, _022332E0 ; =0x00012608\n    str r0, [r4, r1]\n    mov r0, #6\n    lsl r0, r0, #6\n    mov r1, #0x4c\n    bl String_New\n    ldr r1, _022332E4 ; =0x0001260C\n    mov r2, #1\n    str r0, [r4, r1]\n    ldr r1, _022332E8 ; =0x0000047E\n    mov r0, #9\n    bl Sound_SetSceneAndPlayBGM\n    bl OS_IsTickAvailable\n    cmp r0, #0\n    bne _022332C6\n    bl OS_InitTick\n    bl ov74_02236074\n    ldr r0, _022332EC ; =0x0000E89C\n    add r1, r4, r0\n    ldr r0, _022332F0 ; =ov74_0223D338\n    str r1, [r0]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _022332D8: .word 0x00012610\n    _022332DC: .word 0x0000E88C\n    _022332E0: .word 0x00012608\n    _022332E4: .word 0x0001260C\n    _022332E8: .word 0x0000047E\n    _022332EC: .word 0x0000E89C\n    _022332F0: .word ov74_0223D338"
    );
    #endif
}

void ov74_022332F4(void) {
    /* Original at 0x022332F4 */
    /* Requires manual decompilation - 620 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl CTRDG_IsExisting\n    bl CTRDG_IsPulledOut\n    cmp r0, #1\n    beq _02233312\n    ldr r0, _02233618 ; =_02111864\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02233328\n    ldr r0, _0223361C ; =0x0000E890\n    ldr r0, [r4, r0]\n    sub r0, r0, #3\n    cmp r0, #1\n    bhi _02233322\n    ldr r0, [r4, #0x10]\n    bl Save_Cancel\n    mov r0, #0x4c\n    bl ShowGBACartRemovedError\n    ldr r0, [r4, #0xc]\n    add r0, r0, #1\n    str r0, [r4, #0xc]\n    ldr r0, [r5]\n    cmp r0, #0x18\n    bhi _02233424\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02233340: ; jump table\n    bl PmAgbCartridgeUnlinkSpec\n    mov r0, #0x4b\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl PmAgbCartridgeGetOffsets\n    ldr r1, _02233620 ; =0x000004A8\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    cmp r0, #0\n    bne _022333AE\n    bl ov74_02233CE4\n    ldr r1, _02233624 ; =0x000004AC\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    cmp r0, #0\n    bne _022333AA\n    bl ov74_02233F4C\n    ldr r1, _02233628 ; =0x0000E880\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    ldrb r2, [r0]\n    add r0, r1, #4\n    str r2, [r4, r0]\n    b _022333AE\n    mov r0, #1\n    str r0, [r4, #4]\n    add r0, r4, #0\n    bl ov74_02231790\n    mov r0, #1\n    str r0, [r5]\n    b _02233896\n    add r0, r4, #0\n    bl ov74_02232A48\n    bl ov74_02231BC0\n    add r0, r4, #0\n    bl ov74_02231BF0\n    add r0, r4, #0\n    bl ov74_02231CFC\n    add r0, r4, #0\n    bl ov74_022322D8\n    ldr r0, _0223362C ; =ov74_02233024\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x10\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, [r4, #4]\n    cmp r0, #1\n    bne _022333FA\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xb\n    add r3, r5, #0\n    bl ov74_02232910\n    b _02233896\n    mov r0, #2\n    str r0, [r5]\n    b _02233896\n    add r0, r4, #0\n    bl ov74_02232F9C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    add r3, r5, #0\n    bl ov74_02232910\n    b _02233896\n    ldr r0, _02233630 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _02233426\n    cmp r0, #2\n    beq _02233438\n    b _02233896\n    ldr r0, _02233630 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    #ifdef HEARTGOLD\n    mov r0, #0x22\n    #else\n    mov r0, #0x23\n    #endif\n    str r0, [r4, #8]\n    mov r0, #4\n    str r0, [r5]\n    b _02233896\n    ldr r0, _02233630 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x18\n    add r3, r5, #0\n    bl ov74_02232940\n    b _02233896\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_0223319C\n    cmp r0, #0\n    beq _02233476\n    add r0, r4, #0\n    bl ov74_02232F5C\n    mov r0, #5\n    str r0, [r5]\n    b _02233896\n    ldr r0, _02233630 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _02233478\n    cmp r0, #2\n    beq _022334A6\n    b _02233896\n    ldr r0, _02233630 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    bl ov74_02233060\n    str r0, [r4, #4]\n    cmp r0, #0\n    beq _0223349E\n    sub r0, r0, #3\n    cmp r0, #1\n    bhi _02233498\n    mov r0, #8\n    str r0, [r5]\n    b _02233896\n    mov r0, #0xb\n    str r0, [r5]\n    b _02233896\n    mov r0, #6\n    str r0, [r4, #8]\n    str r0, [r5]\n    b _02233896\n    ldr r0, _02233630 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x18\n    add r3, r5, #0\n    bl ov74_02232940\n    b _02233896\n    add r0, r4, #0\n    mov r1, #1\n    bl ov74_0223319C\n    cmp r0, #0\n    beq _0223350E\n    mov r0, #7\n    str r0, [r5]\n    b _02233896\n    ldr r0, _02233634 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    bne _022334DE\n    ldr r0, _02233638 ; =gSystem\n    ldr r0, [r0, #0x48]\n    cmp r0, #0\n    beq _0223350E\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xc\n    add r3, r5, #0\n    bl ov74_02232910\n    b _02233896\n    ldr r1, [r4, #4]\n    add r0, r4, #0\n    bl ov74_02233134\n    cmp r0, #0\n    beq _0223350E\n    mov r0, #9\n    str r0, [r5]\n    b _02233896\n    ldr r0, _02233630 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _02233510\n    cmp r0, #2\n    beq _02233546\n    b _02233896\n    ldr r0, _02233630 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    mov r1, #0x47\n    lsl r1, r1, #4\n    mov r2, #0\n    add r0, r1, #0\n    str r2, [r4, r1]\n    sub r1, #0x44\n    mov r3, #0x28\n    sub r0, #0x10\n    str r3, [r4, r0]\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov74_02231A1C\n    ldr r1, _0223363C ; =0x00000498\n    add r0, r4, r1\n    sub r1, #0xc6\n    bl WaitingIcon_New\n    ldr r1, _02233640 ; =0x0000E898\n    str r0, [r4, r1]\n    mov r0, #0xa\n    str r0, [r5]\n    b _02233896\n    ldr r0, _02233630 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x18\n    add r3, r5, #0\n    bl ov74_02232940\n    b _02233896\n    add r0, r4, #0\n    bl ov74_02231930\n    ldr r0, _02233640 ; =0x0000E898\n    ldr r0, [r4, r0]\n    bl sub_0200F450\n    mov r0, #7\n    str r0, [r4, #4]\n    mov r0, #0xb\n    str r0, [r5]\n    b _02233896\n    ldr r1, [r4, #4]\n    add r0, r4, #0\n    bl ov74_022330D0\n    cmp r0, #0\n    bne _02233582\n    b _02233896\n    mov r0, #0x16\n    str r0, [r5]\n    b _02233896\n    ldr r0, _0223363C ; =0x00000498\n    add r0, r4, r0\n    bl ov74_02232DA4\n    add r0, r4, #0\n    bl ov74_02232AC8\n    add r0, r4, #0\n    bl ov74_02232154\n    add r0, r4, #0\n    bl ov74_02231FF4\n    ldr r0, _0223362C ; =ov74_02233024\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02232758\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xd\n    add r3, r5, #0\n    bl ov74_02232910\n    b _02233896\n    mov r0, #0x31\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _022336A2\n    cmp r6, #0x1e\n    bge _02233698\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov74_022324A0\n    cmp r0, #1\n    bne _02233652\n    ldr r2, _02233628 ; =0x0000E880\n    add r0, r4, #0\n    ldr r1, [r4, r2]\n    add r2, r2, #4\n    ldr r3, [r4, r2]\n    mov r2, #0x96\n    lsl r2, r2, #4\n    add r1, r1, #4\n    mul r2, r3\n    add r2, r1, r2\n    mov r1, #0x50\n    mul r1, r6\n    add r1, r2, r1\n    bl ov74_02232758\n    mov r0, #0x41\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #6\n    bne _022336A2\n    ldr r0, _02233644 ; =0x0000E888\n    b _02233648\n    _02233618: .word _02111864\n    _0223361C: .word 0x0000E890\n    _02233620: .word 0x000004A8\n    _02233624: .word 0x000004AC\n    _02233628: .word 0x0000E880\n    _0223362C: .word ov74_02233024\n    _02233630: .word 0x0000E88C\n    _02233634: .word gSystem + 0x40\n    _02233638: .word gSystem\n    _0223363C: .word 0x00000498\n    _02233640: .word 0x0000E898\n    _02233644: .word 0x0000E888\n    mov r1, #0x2d\n    str r1, [r4, r0]\n    mov r0, #0xf\n    str r0, [r5]\n    b _02233896\n    cmp r0, #2\n    bne _02233660\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_02232758\n    b _02233896\n    cmp r0, #4\n    bne _0223366E\n    mov r0, #8\n    str r0, [r4, #8]\n    mov r0, #0xe\n    str r0, [r5]\n    b _02233896\n    cmp r0, #5\n    bne _0223367C\n    mov r0, #9\n    str r0, [r4, #8]\n    mov r0, #0xe\n    str r0, [r5]\n    b _02233896\n    cmp r0, #6\n    bne _0223368A\n    mov r0, #0x26\n    str r0, [r4, #8]\n    mov r0, #0xe\n    str r0, [r5]\n    b _02233896\n    cmp r0, #7\n    bne _022336A2\n    mov r0, #0x26\n    str r0, [r4, #8]\n    mov r0, #0xe\n    str r0, [r5]\n    b _02233896\n    beq _022336E2\n    cmp r6, #0x1f\n    beq _022336A4\n    cmp r6, #0x20\n    beq _022336C2\n    b _02233896\n    ldr r0, _022338A4 ; =0x0000E884\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    bne _022336B0\n    mov r1, #0xd\n    b _022336B2\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov74_02231FF4\n    ldr r0, _022338A8 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    b _02233896\n    ldr r0, _022338A4 ; =0x0000E884\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    cmp r1, #0xe\n    bne _022336D4\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov74_02231FF4\n    ldr r0, _022338A8 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    b _02233896\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x18\n    add r3, r5, #0\n    bl ov74_02232940\n    ldr r0, _022338A8 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    b _02233896\n    add r0, r4, #0\n    mov r1, #0\n    bl ov74_0223319C\n    cmp r0, #0\n    beq _02233756\n    ldr r0, _022338AC ; =0x00000498\n    add r0, r4, r0\n    bl ov74_02232DA4\n    mov r0, #0xd\n    str r0, [r5]\n    b _02233896\n    ldr r0, _022338B0 ; =0x0000E888\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02233756\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x10\n    add r3, r5, #0\n    bl ov74_02232910\n    b _02233896\n    add r0, r4, #0\n    bl ov74_02232BD4\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x11\n    add r3, r5, #0\n    bl ov74_02232910\n    add r0, r4, #0\n    bl ov74_02232F5C\n    b _02233896\n    ldr r0, _022338B4 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _02233758\n    cmp r0, #2\n    beq _02233766\n    b _02233896\n    ldr r0, _022338B4 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    mov r0, #0x12\n    str r0, [r5]\n    b _02233896\n    ldr r0, _022338B4 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x14\n    add r3, r5, #0\n    bl ov74_02232910\n    b _02233896\n    mov r1, #0x46\n    mov r0, #0xb\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    sub r1, #0x34\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r2, #0\n    bl ov74_02231A1C\n    add r0, r4, #0\n    bl ov74_02232F5C\n    ldr r0, _022338A8 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    mov r0, #0x13\n    str r0, [r5]\n    b _02233896\n    ldr r0, _022338B4 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _022337B4\n    cmp r0, #2\n    beq _022337F6\n    b _02233896\n    ldr r0, [r4]\n    mov r2, #0\n    lsl r1, r0, #2\n    ldr r0, _022338B8 ; =ov74_0223C968\n    ldr r0, [r0, r1]\n    mov r1, #0x46\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    sub r1, #0x34\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov74_02231A1C\n    ldr r0, _022338B4 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    ldr r0, _022338BC ; =0x0000E890\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r1, _022338AC ; =0x00000498\n    add r0, r4, r1\n    sub r1, #0xc6\n    bl WaitingIcon_New\n    ldr r1, _022338C0 ; =0x0000E898\n    str r0, [r4, r1]\n    mov r0, #0x15\n    str r0, [r5]\n    mov r0, #4\n    bl sub_0201A728\n    b _02233896\n    ldr r0, _022338B4 ; =0x0000E88C\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Reset\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x14\n    add r3, r5, #0\n    bl ov74_02232910\n    b _02233896\n    add r0, r4, #0\n    bl ov74_02232DC4\n    mov r0, #0xc\n    str r0, [r5]\n    b _02233896\n    add r0, r4, #0\n    bl ov74_022317D8\n    add r6, r0, #0\n    cmp r6, #0xa\n    beq _02233896\n    ldr r0, _022338C0 ; =0x0000E898\n    ldr r0, [r4, r0]\n    bl sub_0200F450\n    ldr r0, _022338C4 ; =SEQ_SE_DP_SAVE\n    bl PlaySE\n    cmp r6, #0xb\n    bne _0223383A\n    #ifdef HEARTGOLD\n    mov r1, #0x1d\n    #else\n    mov r1, #0x1e\n    #endif\n    b _0223383C\n    mov r1, #0x24\n    mov r0, #0x46\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    ldr r1, _022338C8 ; =0x0000042C\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r2, #0\n    bl ov74_02231A1C\n    mov r0, #0x16\n    str r0, [r5]\n    mov r0, #4\n    bl sub_0201A738\n    b _02233896\n    ldr r0, _022338CC ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    bne _0223386A\n    ldr r0, _022338D0 ; =gSystem\n    ldr r0, [r0, #0x48]\n    cmp r0, #0\n    beq _02233896\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x18\n    add r3, r5, #0\n    bl ov74_02232940\n    ldr r0, _022338A8 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    b _02233896\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02233896\n    ldr r0, [r4, #0x24]\n    str r0, [r5]\n    b _02233896\n    add r0, r4, #0\n    bl ov74_02232E3C\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x28]\n    cmp r0, #0\n    beq _022338A0\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _022338A4: .word 0x0000E884\n    _022338A8: .word SEQ_SE_DP_SELECT\n    _022338AC: .word 0x00000498\n    _022338B0: .word 0x0000E888\n    _022338B4: .word 0x0000E88C\n    _022338B8: .word ov74_0223C968\n    _022338BC: .word 0x0000E890\n    _022338C0: .word 0x0000E898\n    _022338C4: .word SEQ_SE_DP_SAVE\n    _022338C8: .word 0x0000042C\n    _022338CC: .word gSystem + 0x40\n    _022338D0: .word gSystem"
    );
    #endif
}

void ov74_022338D4(void) {
    /* Original at 0x022338D4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, _02233914 ; =0x00012608\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _02233918 ; =0x0001260C\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, [r4, #0x20]\n    bl Heap_Free\n    ldr r0, _0223391C ; =FS_OVERLAY_ID(intro_title)\n    ldr r1, _02233920 ; =gApplication_TitleScreen\n    bl RegisterMainOverlay\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x4c\n    bl Heap_Destroy\n    mov r0, #0\n    bl ov74_02236034\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _02233914: .word 0x00012608\n    _02233918: .word 0x0001260C\n    _0223391C: .word FS_OVERLAY_ID(intro_title)\n    _02233920: .word gApplication_TitleScreen"
    );
    #endif
}

void PmAgbCartridgeHasFlash(void) {
    CTRDG_IdentifyAgbBackup(0, 1, 1);
}

void PmAgbCartridgeGetOffsets(void) {
    /* Original at 0x02233938 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02233994 ; =ov74_0223D33C\n    str r0, [r1, #8]\n    ldr r0, _02233998 ; =sPmAgbCartridgeSpec\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0223394A\n    mov r0, #0xc\n    pop {r3, pc}\n    ldr r0, _0223399C ; =sPmAgbRomCodeMappings\n    mov r1, #0x1e\n    bl IdentifyPmAgbCartridge\n    cmp r0, #0\n    bne _02233992\n    ldr r0, _02233998 ; =sPmAgbCartridgeSpec\n    ldr r0, [r0]\n    ldrb r0, [r0, #4]\n    cmp r0, #0\n    bne _0223397A\n    mov r0, #0x89\n    ldr r1, _022339A0 ; =sPmAgbRomHeader + 0x68\n    lsl r0, r0, #4\n    str r0, [r1, #0x20]\n    mov r0, #0xeb\n    lsl r0, r0, #6\n    str r0, [r1, #0x24]\n    ldr r2, _022339A4 ; =0x00001220\n    ldr r0, _02233994 ; =ov74_0223D33C\n    str r2, [r0, #0x68]\n    mov r0, #9\n    str r0, [r1, #0x30]\n    b _02233984\n    ldr r0, _022339A8 ; =0x08000100\n    ldr r1, _022339AC ; =sPmAgbRomHeader\n    mov r2, #0xfc\n    bl CTRDG_CpuCopy32\n    bl PmAgbCartridgeHasFlash\n    cmp r0, #0\n    bne _02233990\n    mov r0, #3\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _02233994: .word ov74_0223D33C\n    _02233998: .word sPmAgbCartridgeSpec\n    _0223399C: .word sPmAgbRomCodeMappings\n    _022339A0: .word sPmAgbRomHeader + 0x68\n    _022339A4: .word 0x00001220\n    _022339A8: .word 0x08000100\n    _022339AC: .word sPmAgbRomHeader"
    );
    #endif
}

void PmAgbCartridgeUnlinkSpec(void) {
    /* Original at 0x022339B0 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _022339B8 ; =sPmAgbCartridgeSpec\n    mov r1, #0\n    str r1, [r0]\n    bx lr\n    _022339B8: .word sPmAgbCartridgeSpec"
    );
    #endif
}

void PmAgbCartridge_GetVersionInternal(void) {
    /* Original at 0x022339BC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _022339C4 ; =sPmAgbCartridgeSpec\n    ldr r0, [r0]\n    ldrb r0, [r0, #5]\n    bx lr\n    _022339C4: .word sPmAgbCartridgeSpec"
    );
    #endif
}

void PmAgbCartridge_GetLanguage(void) {
    /* Original at 0x022339C8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _022339D0 ; =sPmAgbCartridgeSpec\n    ldr r0, [r0]\n    ldrh r0, [r0, #6]\n    bx lr\n    _022339D0: .word sPmAgbCartridgeSpec"
    );
    #endif
}

void IdentifyPmAgbCartridge(void) {
    /* Original at 0x022339D4 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0xc0\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, _02233A80 ; =sPmAgbCartridgeSpec\n    mov r1, #0\n    str r1, [r0]\n    bl CTRDG_IsAgbCartridge\n    cmp r0, #0\n    bne _022339F0\n    add sp, #0xc0\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    bl CTRDG_GetAgbGameCode\n    mov r2, #0\n    cmp r4, #0\n    ble _02233A14\n    add r3, r5, #0\n    ldr r1, [r3]\n    cmp r0, r1\n    bne _02233A0C\n    lsl r0, r2, #3\n    add r1, r5, r0\n    ldr r0, _02233A80 ; =sPmAgbCartridgeSpec\n    str r1, [r0]\n    b _02233A14\n    add r2, r2, #1\n    add r3, #8\n    cmp r2, r4\n    blt _022339FC\n    ldr r0, _02233A80 ; =sPmAgbCartridgeSpec\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02233A22\n    add sp, #0xc0\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    bl CTRDG_Enable\n    add r4, sp, #0\n    mov r0, #2\n    lsl r0, r0, #0x1a\n    add r1, r4, #0\n    mov r2, #0xc0\n    bl CTRDG_CpuCopy32\n    ldr r3, _02233A84 ; =sAgbCartNintendoLogo\n    mov r2, #0\n    add r0, r4, r2\n    ldrb r1, [r3]\n    ldrb r0, [r0, #4]\n    cmp r1, r0\n    beq _02233A4A\n    add sp, #0xc0\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    add r2, r2, #1\n    add r3, r3, #1\n    cmp r2, #0x9c\n    blo _02233A3A\n    mov r2, #0\n    mov r1, #0xa0\n    ldrb r0, [r4, r1]\n    add r1, r1, #1\n    add r0, r2, r0\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    cmp r1, #0xbc\n    ble _02233A56\n    add r2, #0x19\n    neg r0, r2\n    lsl r0, r0, #0x18\n    add r4, #0xbd\n    lsr r1, r0, #0x18\n    ldrb r0, [r4]\n    cmp r0, r1\n    beq _02233A7A\n    add sp, #0xc0\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #0xc0\n    pop {r3, r4, r5, pc}\n    _02233A80: .word sPmAgbCartridgeSpec\n    _02233A84: .word sAgbCartNintendoLogo"
    );
    #endif
}

void ov74_02233A88(void) {
    /* Original at 0x02233A88 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r2, #0\n    lsr r4, r1, #2\n    add r3, r2, #0\n    cmp r4, #0\n    ble _02233AA4\n    ldr r1, [r0]\n    add r0, r0, #4\n    add r2, r2, r1\n    add r1, r3, #1\n    lsl r1, r1, #0x10\n    lsr r3, r1, #0x10\n    cmp r3, r4\n    blt _02233A94\n    lsr r0, r2, #0x10\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    lsl r0, r2, #0x10\n    lsr r0, r0, #0x10\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov74_02233AB8(void) {
    CTRDG_ReadAgbFlash(0, 1);
}

void ov74_02233ACC(void) {
    /* Original at 0x02233ACC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    bne _02233ADA\n    ldr r0, _02233B00 ; =sPmAgbRomHeader + 0x68\n    ldr r0, [r0, #0x20]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr\n    cmp r0, #4\n    bne _02233AEE\n    ldr r0, _02233B00 ; =sPmAgbRomHeader + 0x68\n    ldr r1, [r0, #0x24]\n    mov r0, #0xba\n    lsl r0, r0, #6\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr\n    cmp r0, #0xd\n    bne _02233AF8\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    bx lr\n    mov r0, #0x3e\n    lsl r0, r0, #6\n    bx lr\n    nop\n    _02233B00: .word sPmAgbRomHeader + 0x68"
    );
    #endif
}

void ov74_02233B04(void) {
    /* Original at 0x02233B04 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    bne _02233B14\n    ldr r0, _02233B54 ; =ov74_0223D33C\n    ldr r1, [r0, #8]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    bx lr\n    cmp r0, #1\n    blt _02233B32\n    cmp r0, #4\n    bgt _02233B32\n    ldr r1, _02233B54 ; =ov74_0223D33C\n    ldr r2, [r1, #8]\n    mov r1, #2\n    lsl r1, r1, #0xc\n    add r2, r2, r1\n    sub r1, r0, #1\n    mov r0, #0x3e\n    lsl r0, r0, #6\n    mul r0, r1\n    add r0, r2, r0\n    bx lr\n    cmp r0, #5\n    blt _02233B50\n    cmp r0, #0xe\n    bge _02233B50\n    ldr r1, _02233B54 ; =ov74_0223D33C\n    ldr r2, [r1, #8]\n    mov r1, #6\n    lsl r1, r1, #0xc\n    add r2, r2, r1\n    sub r1, r0, #5\n    mov r0, #0x3e\n    lsl r0, r0, #6\n    mul r0, r1\n    add r0, r2, r0\n    bx lr\n    mov r0, #0\n    bx lr\n    _02233B54: .word ov74_0223D33C"
    );
    #endif
}

void ov74_02233B58(void) {
    /* Original at 0x02233B58 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    mov r6, #0\n    add r5, r1, #0\n    str r6, [sp, #4]\n    add r1, r2, #0\n    str r6, [r1]\n    ldr r1, _02233BEC ; =ov74_0223D33C\n    add r7, r0, #0\n    str r6, [r1, #4]\n    mov r1, #0xe\n    str r2, [sp]\n    add r4, r6, #0\n    mul r7, r1\n    add r0, r4, #0\n    mov r1, #0xe\n    bl _s32_div_f\n    add r0, r1, r7\n    add r1, r5, #0\n    bl ov74_02233AB8\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl DC_FlushRange\n    ldr r0, _02233BF0 ; =0x00000FF8\n    ldr r1, [r5, r0]\n    ldr r0, _02233BF4 ; =0x08012025\n    cmp r1, r0\n    bne _02233BC6\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _02233BF8 ; =0x00000FF4\n    ldrh r0, [r5, r0]\n    bl ov74_02233ACC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov74_02233A88\n    ldr r1, _02233BFC ; =0x00000FF6\n    ldrh r1, [r5, r1]\n    cmp r1, r0\n    bne _02233BC6\n    ldr r0, _02233C00 ; =0x00000FFC\n    ldr r1, [r5, r0]\n    ldr r0, [sp]\n    str r1, [r0]\n    ldr r0, _02233BF8 ; =0x00000FF4\n    ldrh r1, [r5, r0]\n    mov r0, #1\n    lsl r0, r1\n    orr r6, r0\n    add r4, r4, #1\n    cmp r4, #0xe\n    blt _02233B74\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _02233BE4\n    ldr r0, _02233C04 ; =0x00003FFF\n    cmp r6, r0\n    bne _02233BDE\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add sp, #8\n    mov r0, #0xff\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02233BEC: .word ov74_0223D33C\n    _02233BF0: .word 0x00000FF8\n    _02233BF4: .word 0x08012025\n    _02233BF8: .word 0x00000FF4\n    _02233BFC: .word 0x00000FF6\n    _02233C00: .word 0x00000FFC\n    _02233C04: .word 0x00003FFF"
    );
    #endif
}

void ov74_02233C08(void) {
    /* Original at 0x02233C08 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    mov r0, #0\n    add r1, r7, #0\n    add r2, sp, #4\n    bl ov74_02233B58\n    add r6, r0, #0\n    mov r0, #1\n    add r1, r7, #0\n    add r2, sp, #0\n    bl ov74_02233B58\n    cmp r6, #1\n    bne _02233C80\n    cmp r0, #1\n    bne _02233C80\n    mov r1, #0\n    ldr r0, [sp, #4]\n    mvn r1, r1\n    cmp r0, r1\n    bne _02233C40\n    ldr r3, [sp]\n    cmp r3, #0\n    beq _02233C4E\n    cmp r0, #0\n    bne _02233C66\n    mov r1, #0\n    ldr r3, [sp]\n    mvn r1, r1\n    cmp r3, r1\n    bne _02233C66\n    add r2, r0, #1\n    add r1, r3, #1\n    cmp r2, r1\n    bhs _02233C5E\n    str r3, [r4]\n    mov r0, #1\n    str r0, [r5]\n    b _02233C7A\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r5]\n    b _02233C7A\n    ldr r1, [sp]\n    cmp r0, r1\n    bhs _02233C74\n    str r1, [r4]\n    mov r0, #1\n    str r0, [r5]\n    b _02233C7A\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r5]\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r6, #1\n    bne _02233CA4\n    cmp r0, #1\n    beq _02233CA4\n    ldr r1, [sp, #4]\n    cmp r0, #0xff\n    str r1, [r4]\n    bne _02233C9A\n    mov r0, #0\n    str r0, [r5]\n    add sp, #8\n    mov r0, #0xff\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [r5]\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #1\n    bne _02233CC6\n    cmp r6, #1\n    beq _02233CC6\n    ldr r0, [sp]\n    cmp r6, #0xff\n    str r0, [r4]\n    bne _02233CBE\n    mov r0, #1\n    str r0, [r5]\n    add sp, #8\n    mov r0, #0xff\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #8\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r6, #0\n    bne _02233CD8\n    cmp r0, #0\n    bne _02233CD8\n    mov r0, #0\n    str r0, [r4]\n    add sp, #8\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [r4]\n    str r0, [r5]\n    mov r0, #2\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_02233CE4(void) {
    /* Original at 0x02233CE4 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _02233D98 ; =ov74_0223D33C\n    ldr r1, _02233D9C ; =ov74_0223D33C\n    ldr r0, [r0, #8]\n    ldr r2, _02233DA0 ; =ov74_0223D34C\n    bl ov74_02233C08\n    cmp r0, #1\n    beq _02233D0E\n    cmp r0, #0\n    beq _02233D06\n    cmp r0, #2\n    beq _02233D0A\n    cmp r0, #0xff\n    bne _02233D0E\n    mov r0, #5\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #7\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r7, _02233D98 ; =ov74_0223D33C\n    ldr r0, [r7]\n    cmp r0, #1\n    bhi _02233D92\n    mov r6, #0\n    ldr r5, [r7, #8]\n    add r4, r6, #0\n    ldr r1, [r7]\n    mov r0, #0xe\n    mul r0, r1\n    add r0, r4, r0\n    add r1, r5, #0\n    bl ov74_02233AB8\n    ldr r0, _02233DA4 ; =0x00000FF8\n    ldr r1, [r5, r0]\n    ldr r0, _02233DA8 ; =0x08012025\n    cmp r1, r0\n    bne _02233D7E\n    ldr r0, _02233DAC ; =0x00000FF4\n    ldrh r0, [r5, r0]\n    bl ov74_02233ACC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov74_02233A88\n    ldr r1, _02233DB0 ; =0x00000FF6\n    ldrh r1, [r5, r1]\n    cmp r1, r0\n    bne _02233D7E\n    ldr r0, _02233DB4 ; =0x00000FFC\n    mov r1, #1\n    ldr r0, [r5, r0]\n    str r0, [r7, #0x10]\n    ldr r0, _02233DAC ; =0x00000FF4\n    ldrh r0, [r5, r0]\n    lsl r1, r0\n    orr r6, r1\n    bl ov74_02233ACC\n    str r0, [sp]\n    ldr r0, _02233DAC ; =0x00000FF4\n    ldrh r0, [r5, r0]\n    bl ov74_02233B04\n    add r1, r0, #0\n    ldr r2, [sp]\n    add r0, r5, #0\n    bl MIi_CpuCopy32\n    ldr r0, _02233DAC ; =0x00000FF4\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    bne _02233D7E\n    str r4, [r7, #0xc]\n    add r4, r4, #1\n    cmp r4, #0xe\n    blt _02233D1C\n    ldr r0, _02233DB8 ; =0x00003FFF\n    cmp r6, r0\n    bne _02233D8E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02233D98: .word ov74_0223D33C\n    _02233D9C: .word ov74_0223D33C\n    _02233DA0: .word ov74_0223D34C\n    _02233DA4: .word 0x00000FF8\n    _02233DA8: .word 0x08012025\n    _02233DAC: .word 0x00000FF4\n    _02233DB0: .word 0x00000FF6\n    _02233DB4: .word 0x00000FFC\n    _02233DB8: .word 0x00003FFF"
    );
    #endif
}

void ov74_02233DBC(void) {
    /* Original at 0x02233DBC */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _02233E38 ; =ov74_0223D33C\n    mov r2, #1\n    ldr r5, [r0, #8]\n    str r2, [r0, #0x14]\n    mov r0, #0\n    add r1, r5, #0\n    lsl r2, r2, #0xc\n    bl MIi_CpuClear32\n    add r0, r6, #0\n    bl ov74_02233ACC\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov74_02233B04\n    add r1, r5, #0\n    add r2, r4, #0\n    bl MIi_CpuCopy32\n    ldr r0, _02233E38 ; =ov74_0223D33C\n    ldr r1, [r0, #0x10]\n    ldr r0, _02233E3C ; =0x00000FFC\n    str r1, [r5, r0]\n    add r1, r0, #0\n    sub r1, #8\n    strh r6, [r5, r1]\n    ldr r1, _02233E40 ; =0x08012025\n    sub r0, r0, #4\n    str r1, [r5, r0]\n    add r0, r6, #0\n    bl ov74_02233ACC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov74_02233A88\n    ldr r1, _02233E44 ; =0x00000FF6\n    strh r0, [r5, r1]\n    ldr r0, _02233E38 ; =ov74_0223D33C\n    mov r1, #0xe\n    ldr r0, [r0, #0xc]\n    add r0, r6, r0\n    add r0, r0, #1\n    bl _s32_div_f\n    ldr r0, _02233E48 ; =sPmAgbCartridgeSpec\n    ldr r3, _02233E4C ; =ov74_02233E50\n    ldr r2, [r0, #4]\n    mov r0, #0xe\n    mul r0, r2\n    add r0, r1, r0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    add r1, r5, #0\n    mov r2, #4\n    bl CTRDG_WriteAndVerifyAgbFlashAsync\n    pop {r4, r5, r6, pc}\n    nop\n    _02233E38: .word ov74_0223D33C\n    _02233E3C: .word 0x00000FFC\n    _02233E40: .word 0x08012025\n    _02233E44: .word 0x00000FF6\n    _02233E48: .word sPmAgbCartridgeSpec\n    _02233E4C: .word ov74_02233E50"
    );
    #endif
}

void ov74_02233E50(void) {
    /* Original at 0x02233E50 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _02233E7C\n    ldr r1, _02233E88 ; =ov74_0223D33C\n    ldr r0, [r1, #4]\n    add r0, r0, #1\n    str r0, [r1, #4]\n    cmp r0, #0xe\n    blt _02233E6A\n    mov r0, #0\n    str r0, [r1, #4]\n    str r0, [r1, #0x14]\n    bx lr\n    cmp r0, #0xd\n    bne _02233E76\n    mov r0, #2\n    str r0, [r1, #0x14]\n    mov r0, #0\n    bx lr\n    mov r0, #3\n    str r0, [r1, #0x14]\n    b _02233E82\n    ldr r0, _02233E88 ; =ov74_0223D33C\n    mov r1, #4\n    str r1, [r0, #0x14]\n    mov r0, #0\n    bx lr\n    nop\n    _02233E88: .word ov74_0223D33C"
    );
    #endif
}

void ov74_02233E8C(void) {
    /* Original at 0x02233E8C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02233ECC ; =ov74_0223D33C\n    ldr r0, [r1, #4]\n    cmp r0, #0\n    bne _02233EB2\n    ldr r1, [r1]\n    cmp r1, #1\n    bne _02233EA2\n    mov r2, #0\n    ldr r1, _02233ED0 ; =sPmAgbCartridgeSpec\n    b _02233EA6\n    ldr r1, _02233ED0 ; =sPmAgbCartridgeSpec\n    mov r2, #1\n    str r2, [r1, #4]\n    ldr r1, _02233ECC ; =ov74_0223D33C\n    ldr r2, [r1, #0x10]\n    add r2, r2, #1\n    str r2, [r1, #0x10]\n    b _02233EB6\n    mov r0, #0\n    pop {r3, pc}\n    ldr r1, _02233ED0 ; =sPmAgbCartridgeSpec\n    ldr r1, [r1, #4]\n    cmp r1, #0\n    bge _02233EC2\n    mov r0, #0\n    pop {r3, pc}\n    bl ov74_02233DBC\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _02233ECC: .word ov74_0223D33C\n    _02233ED0: .word sPmAgbCartridgeSpec"
    );
    #endif
}

void ov74_02233ED4(void) {
    /* Original at 0x02233ED4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02233F10 ; =ov74_0223D33C\n    ldr r0, [r1, #0x14]\n    cmp r0, #4\n    bhi _02233F0C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02233EEA: ; jump table\n    ldr r0, [r1, #4]\n    bl ov74_02233DBC\n    mov r0, #0\n    pop {r3, pc}\n    ldr r0, [r1, #4]\n    bl ov74_02233DBC\n    mov r0, #0xa\n    pop {r3, pc}\n    mov r0, #8\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _02233F10: .word ov74_0223D33C"
    );
    #endif
}

void ov74_02233F14(void) {
    /* Original at 0x02233F14 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02233F48 ; =ov74_0223D33C\n    ldr r0, [r0, #0x14]\n    cmp r0, #4\n    bhi _02233F42\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02233F28: ; jump table\n    mov r0, #0xb\n    bx lr\n    mov r0, #0xa\n    bx lr\n    mov r0, #9\n    bx lr\n    mov r0, #8\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02233F48: .word ov74_0223D33C"
    );
    #endif
}

void ov74_02233F4C(void) {
    /* Original at 0x02233F4C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02233F58 ; =ov74_0223D33C\n    ldr r1, [r0, #8]\n    mov r0, #6\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    bx lr\n    _02233F58: .word ov74_0223D33C"
    );
    #endif
}

void ov74_02233F5C(void) {
    ov74_02233B04();
}

void ov74_02233F68(void) {
    ov74_02233F5C();
}

void ov74_02233F84(void) {
    ov74_02233F5C();
}

void ov74_02233F8C(void) {
    /* Original at 0x02233F8C */
    /* Requires manual decompilation - 525 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    mov r1, #0x18\n    add r5, r2, #0\n    mov r6, #0\n    bl _u32_div_f\n    cmp r1, #0x17\n    bhi _02233FE2\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02233FAC: ; jump table\n    add r4, #0x20\n    cmp r5, #3\n    bls _02233FE4\n    b _02234462\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02233FF0: ; jump table\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234104\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234020: ; jump table\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234104\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234050: ; jump table\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234104\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234080: ; jump table\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234104\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022340B0: ; jump table\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234104\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022340E0: ; jump table\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bls _02234106\n    b _02234462\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234112: ; jump table\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234226\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234142: ; jump table\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234226\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234172: ; jump table\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234226\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022341A2: ; jump table\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234226\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022341D2: ; jump table\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234226\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234202: ; jump table\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bls _02234228\n    b _02234462\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234234: ; jump table\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234348\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234264: ; jump table\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234348\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234294: ; jump table\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234348\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022342C4: ; jump table\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234348\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022342F4: ; jump table\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234348\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234324: ; jump table\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bls _0223434A\n    b _02234462\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234356: ; jump table\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234462\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234386: ; jump table\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234462\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022343B6: ; jump table\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234462\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022343E6: ; jump table\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234462\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234416: ; jump table\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    b _02234462\n    add r4, #0x20\n    cmp r5, #3\n    bhi _02234462\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234446: ; jump table\n    add r6, r4, #0\n    add r6, #0x24\n    b _02234462\n    add r6, r4, #0\n    add r6, #0x18\n    b _02234462\n    add r6, r4, #0\n    add r6, #0xc\n    b _02234462\n    add r6, r4, #0\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov74_02234468(void) {
    /* Original at 0x02234468 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    add r4, r0, #0\n    mov r3, #0\n    add r4, #0x20\n    ldr r2, [r4]\n    ldr r1, [r0, #4]\n    add r3, r3, #1\n    eor r2, r1\n    str r2, [r4]\n    ldr r1, [r0]\n    eor r1, r2\n    stmia r4!, {r1}\n    cmp r3, #0xc\n    blo _02234470\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov74_02234488(void) {
    /* Original at 0x02234488 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    add r4, r0, #0\n    mov r3, #0\n    add r4, #0x20\n    ldr r2, [r4]\n    ldr r1, [r0]\n    add r3, r3, #1\n    eor r2, r1\n    str r2, [r4]\n    ldr r1, [r0, #4]\n    eor r1, r2\n    stmia r4!, {r1}\n    cmp r3, #0xc\n    blo _02234490\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov74_022344A8(void) {
    /* Original at 0x022344A8 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r1, r0, #0\n    mov r4, #0\n    ldr r1, [r1]\n    str r0, [sp]\n    add r2, r4, #0\n    bl ov74_02233F8C\n    add r5, r0, #0\n    ldr r0, [sp]\n    mov r2, #1\n    add r1, r0, #0\n    ldr r1, [r1]\n    bl ov74_02233F8C\n    add r6, r0, #0\n    ldr r0, [sp]\n    mov r2, #2\n    add r1, r0, #0\n    ldr r1, [r1]\n    bl ov74_02233F8C\n    add r7, r0, #0\n    ldr r0, [sp]\n    mov r2, #3\n    add r1, r0, #0\n    ldr r1, [r1]\n    bl ov74_02233F8C\n    add r1, r4, #0\n    ldrh r2, [r5]\n    add r1, r1, #1\n    add r5, r5, #2\n    add r2, r4, r2\n    lsl r2, r2, #0x10\n    lsr r4, r2, #0x10\n    cmp r1, #6\n    blt _022344E4\n    mov r2, #0\n    ldrh r1, [r6]\n    add r2, r2, #1\n    add r6, r6, #2\n    add r1, r4, r1\n    lsl r1, r1, #0x10\n    lsr r4, r1, #0x10\n    cmp r2, #6\n    blt _022344F6\n    mov r2, #0\n    ldrh r1, [r7]\n    add r2, r2, #1\n    add r7, r7, #2\n    add r1, r4, r1\n    lsl r1, r1, #0x10\n    lsr r4, r1, #0x10\n    cmp r2, #6\n    blt _02234508\n    mov r2, #0\n    ldrh r1, [r0]\n    add r2, r2, #1\n    add r0, r0, #2\n    add r1, r4, r1\n    lsl r1, r1, #0x10\n    lsr r4, r1, #0x10\n    cmp r2, #6\n    blt _0223451A\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void AGB_GetBoxMonData(void) {
    /* Original at 0x02234530 */
    /* Requires manual decompilation - 360 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r4, #0\n    add r6, r0, #0\n    str r1, [sp]\n    add r7, r2, #0\n    add r5, r4, #0\n    str r4, [sp, #0xc]\n    str r4, [sp, #8]\n    str r4, [sp, #4]\n    cmp r1, #0xa\n    ble _022345A6\n    ldr r1, [r6]\n    add r2, r4, #0\n    bl ov74_02233F8C\n    str r0, [sp, #0xc]\n    ldr r1, [r6]\n    add r0, r6, #0\n    mov r2, #1\n    bl ov74_02233F8C\n    str r0, [sp, #8]\n    ldr r1, [r6]\n    add r0, r6, #0\n    mov r2, #2\n    bl ov74_02233F8C\n    str r0, [sp, #4]\n    ldr r1, [r6]\n    add r0, r6, #0\n    mov r2, #3\n    bl ov74_02233F8C\n    add r5, r0, #0\n    add r0, r6, #0\n    bl ov74_02234468\n    add r0, r6, #0\n    bl ov74_022344A8\n    ldrh r1, [r6, #0x1c]\n    cmp r0, r1\n    beq _022345A6\n    ldrb r0, [r6, #0x13]\n    mov r1, #1\n    bic r0, r1\n    mov r1, #1\n    orr r0, r1\n    strb r0, [r6, #0x13]\n    ldrb r1, [r6, #0x13]\n    mov r0, #4\n    orr r0, r1\n    strb r0, [r6, #0x13]\n    mov r0, #1\n    ldr r1, [r5, #4]\n    lsl r0, r0, #0x1e\n    orr r0, r1\n    str r0, [r5, #4]\n    ldr r0, [sp]\n    cmp r0, #0x50\n    bls _022345AE\n    b _0223489C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022345BA: ; jump table\n    ldr r4, [r6]\n    b _0223489C\n    ldr r4, [r6, #4]\n    b _0223489C\n    ldrb r0, [r6, #0x13]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _02234670\n    mov r4, #0\n    b _0223467E\n    mov r4, #0\n    add r0, r6, r4\n    ldrb r0, [r0, #8]\n    strb r0, [r7, r4]\n    add r4, r4, #1\n    cmp r4, #0xa\n    blo _02234672\n    mov r0, #0xff\n    strb r0, [r7, r4]\n    b _0223489C\n    ldrb r4, [r6, #0x12]\n    b _0223489C\n    ldrb r0, [r6, #0x13]\n    lsl r0, r0, #0x1f\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldrb r0, [r6, #0x13]\n    lsl r0, r0, #0x1e\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldrb r0, [r6, #0x13]\n    lsl r0, r0, #0x1d\n    lsr r4, r0, #0x1f\n    b _0223489C\n    mov r4, #0\n    add r0, r6, r4\n    ldrb r0, [r0, #0x14]\n    strb r0, [r7, r4]\n    add r4, r4, #1\n    cmp r4, #7\n    blo _022346A2\n    mov r0, #0xff\n    strb r0, [r7, r4]\n    b _0223489C\n    ldrb r4, [r6, #0x1b]\n    b _0223489C\n    ldrh r4, [r6, #0x1c]\n    b _0223489C\n    ldrh r4, [r6, #0x1e]\n    b _0223489C\n    ldrb r0, [r6, #0x13]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _022346CE\n    mov r4, #0x67\n    lsl r4, r4, #2\n    b _0223489C\n    ldr r0, [sp, #0xc]\n    ldrh r4, [r0]\n    b _0223489C\n    ldr r0, [sp, #0xc]\n    ldrh r4, [r0, #2]\n    b _0223489C\n    ldr r0, [sp, #0xc]\n    ldr r4, [r0, #4]\n    b _0223489C\n    ldr r0, [sp, #0xc]\n    ldrb r4, [r0, #8]\n    b _0223489C\n    ldr r0, [sp, #0xc]\n    ldrb r4, [r0, #9]\n    b _0223489C\n    ldr r0, [sp]\n    sub r0, #0xd\n    lsl r1, r0, #1\n    ldr r0, [sp, #8]\n    ldrh r4, [r0, r1]\n    b _0223489C\n    ldr r1, [sp]\n    ldr r0, [sp, #8]\n    sub r1, #0x11\n    add r0, r0, r1\n    ldrb r4, [r0, #8]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0, #1]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0, #2]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0, #3]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0, #4]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0, #5]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0, #6]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0, #7]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0, #8]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0, #9]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0, #0xa]\n    b _0223489C\n    ldr r0, [sp, #4]\n    ldrb r4, [r0, #0xb]\n    b _0223489C\n    ldr r0, [r5]\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    b _0223489C\n    ldr r0, [r5]\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x18\n    b _0223489C\n    ldr r0, [r5]\n    lsl r0, r0, #9\n    lsr r4, r0, #0x19\n    b _0223489C\n    ldr r0, [r5]\n    lsl r0, r0, #5\n    lsr r4, r0, #0x1c\n    b _0223489C\n    ldr r0, [r5]\n    lsl r0, r0, #1\n    lsr r4, r0, #0x1c\n    b _0223489C\n    ldr r0, [r5]\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #4]\n    lsl r0, r0, #0x1b\n    lsr r4, r0, #0x1b\n    b _0223489C\n    ldr r0, [r5, #4]\n    lsl r0, r0, #0x16\n    lsr r4, r0, #0x1b\n    b _0223489C\n    ldr r0, [r5, #4]\n    lsl r0, r0, #0x11\n    lsr r4, r0, #0x1b\n    b _0223489C\n    ldr r0, [r5, #4]\n    lsl r0, r0, #0xc\n    lsr r4, r0, #0x1b\n    b _0223489C\n    ldr r0, [r5, #4]\n    lsl r0, r0, #7\n    lsr r4, r0, #0x1b\n    b _0223489C\n    ldr r0, [r5, #4]\n    lsl r0, r0, #2\n    lsr r4, r0, #0x1b\n    b _0223489C\n    ldr r0, [r5, #4]\n    lsl r0, r0, #1\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #4]\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0x1d\n    lsr r4, r0, #0x1d\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0x1a\n    lsr r4, r0, #0x1d\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0x17\n    lsr r4, r0, #0x1d\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0x14\n    lsr r4, r0, #0x1d\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0x11\n    lsr r4, r0, #0x1d\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0xf\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0xe\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0xd\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0xc\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0xb\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #0xa\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #9\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #8\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #7\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #6\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #5\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsl r0, r0, #1\n    lsr r4, r0, #0x1c\n    b _0223489C\n    ldr r0, [r5, #8]\n    lsr r4, r0, #0x1f\n    b _0223489C\n    ldr r0, [sp, #0xc]\n    ldrh r4, [r0]\n    cmp r4, #0\n    beq _0223489C\n    ldr r0, [r5, #4]\n    lsl r0, r0, #1\n    lsr r0, r0, #0x1f\n    bne _02234866\n    ldrb r0, [r6, #0x13]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _0223489C\n    mov r4, #0x67\n    lsl r4, r4, #2\n    b _0223489C\n    ldr r4, [r5, #4]\n    lsl r0, r4, #2\n    lsr r0, r0, #0x1b\n    lsl r5, r0, #0x19\n    lsl r0, r4, #7\n    lsr r0, r0, #0x1b\n    lsl r3, r0, #0x14\n    lsl r0, r4, #0xc\n    lsr r0, r0, #0x1b\n    lsl r2, r0, #0xf\n    lsl r0, r4, #0x11\n    lsr r0, r0, #0x1b\n    lsl r1, r0, #0xa\n    lsl r0, r4, #0x1b\n    lsl r4, r4, #0x16\n    lsr r4, r4, #0x1b\n    lsr r0, r0, #0x1b\n    lsl r4, r4, #5\n    orr r0, r4\n    orr r0, r1\n    orr r0, r2\n    orr r0, r3\n    add r4, r5, #0\n    orr r4, r0\n    ldr r0, [sp]\n    cmp r0, #0xa\n    ble _022348A8\n    add r0, r6, #0\n    bl ov74_02234488\n    add r0, r4, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov74_022348B0(void) {
    /* Original at 0x022348B0 */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r4, r0, #0\n    add r5, r2, #0\n    mov r7, #0\n    cmp r6, #0xa\n    ble _02234924\n    ldr r1, [r4]\n    add r2, r7, #0\n    bl ov74_02233F8C\n    add r7, r0, #0\n    ldr r1, [r4]\n    add r0, r4, #0\n    mov r2, #1\n    bl ov74_02233F8C\n    ldr r1, [r4]\n    add r0, r4, #0\n    mov r2, #2\n    bl ov74_02233F8C\n    ldr r1, [r4]\n    add r0, r4, #0\n    mov r2, #3\n    bl ov74_02233F8C\n    str r0, [sp]\n    add r0, r4, #0\n    bl ov74_02234468\n    add r0, r4, #0\n    bl ov74_022344A8\n    ldrh r1, [r4, #0x1c]\n    cmp r0, r1\n    beq _02234924\n    ldrb r1, [r4, #0x13]\n    mov r0, #1\n    bic r1, r0\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    ldrb r1, [r4, #0x13]\n    mov r0, #4\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    ldr r0, [sp]\n    ldr r1, [r0, #4]\n    mov r0, #1\n    lsl r0, r0, #0x1e\n    orr r1, r0\n    ldr r0, [sp]\n    str r1, [r0, #4]\n    add r0, r4, #0\n    bl ov74_02234488\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r6, #0xb\n    bhi _022349C8\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02234934: ; jump table\n    mov r2, #0\n    ldrb r1, [r5, r2]\n    add r0, r4, r2\n    add r2, r2, #1\n    strb r1, [r0, #8]\n    cmp r2, #0xa\n    blt _0223494E\n    b _022349C8\n    ldrb r0, [r5]\n    strb r0, [r4, #0x12]\n    b _022349C8\n    ldrb r0, [r4, #0x13]\n    ldrb r2, [r5]\n    mov r1, #1\n    bic r0, r1\n    mov r1, #1\n    and r1, r2\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    b _022349C8\n    ldrb r0, [r4, #0x13]\n    mov r1, #2\n    bic r0, r1\n    ldrb r1, [r5]\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1e\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    b _022349C8\n    ldrb r0, [r4, #0x13]\n    mov r1, #4\n    bic r0, r1\n    ldrb r1, [r5]\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1d\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    b _022349C8\n    mov r2, #0\n    ldrb r1, [r5, r2]\n    add r0, r4, r2\n    add r2, r2, #1\n    strb r1, [r0, #0x14]\n    cmp r2, #7\n    blt _0223499A\n    b _022349C8\n    ldrb r0, [r5, #1]\n    ldrb r1, [r5]\n    lsl r0, r0, #8\n    add r0, r1, r0\n    strh r0, [r7]\n    ldrh r0, [r7]\n    ldrb r1, [r4, #0x13]\n    cmp r0, #0\n    beq _022349C2\n    mov r0, #2\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    b _022349C8\n    mov r0, #2\n    bic r1, r0\n    strb r1, [r4, #0x13]\n    cmp r6, #0xa\n    ble _022349DA\n    add r0, r4, #0\n    bl ov74_022344A8\n    strh r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov74_02234488\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void TranslateAgbSpecies(void) {
    /* Original at 0x022349DC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02234A00 ; =0x00000115\n    cmp r0, r1\n    blt _022349FC\n    ldr r3, _02234A04 ; =ov74_0223CC5C\n    mov r2, #0\n    ldrh r1, [r3]\n    cmp r0, r1\n    bne _022349F4\n    ldr r0, _02234A08 ; =ov74_0223CC5E\n    lsl r1, r2, #2\n    ldrh r0, [r0, r1]\n    bx lr\n    add r2, r2, #1\n    add r3, r3, #4\n    cmp r2, #0x90\n    blo _022349E6\n    bx lr\n    nop\n    _02234A00: .word 0x00000115\n    _02234A04: .word ov74_0223CC5C\n    _02234A08: .word ov74_0223CC5E"
    );
    #endif
}

void ov74_02234A0C(void) {
    /* Original at 0x02234A0C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #0xb\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    bl TranslateAgbSpecies\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0x19\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    add r1, r0, #0\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl CalcLevelBySpeciesAndExp\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void AGB_GetBoxMonAbility(void) {
    /* Original at 0x02234A34 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, r4, #0\n    mov r1, #0x2e\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0x19\n    bl GetMonBaseStat\n    cmp r0, #0\n    beq _02234A8E\n    ldr r2, _02234A98 ; =ov74_0223CBA0\n    mov r4, #0\n    ldrh r1, [r2]\n    cmp r5, r1\n    bne _02234A72\n    add r0, r5, #0\n    mov r1, #0x18\n    bl GetMonBaseStat\n    b _02234A7A\n    add r4, r4, #1\n    add r2, r2, #2\n    cmp r4, #0x5e\n    blo _02234A62\n    cmp r4, #0x5e\n    bne _02234A96\n    mov r1, #1\n    tst r1, r6\n    bne _02234A96\n    add r0, r5, #0\n    mov r1, #0x18\n    bl GetMonBaseStat\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    mov r1, #0x18\n    bl GetMonBaseStat\n    pop {r4, r5, r6, pc}\n    _02234A98: .word ov74_0223CBA0"
    );
    #endif
}

void MigrateBoxMon(void) {
    /* Original at 0x02234A9C */
    /* Requires manual decompilation - 702 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r4, r1, #0\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ZeroBoxMonData\n    add r0, r4, #0\n    bl AcquireBoxMonLock\n    mov r1, #0\n    str r0, [sp]\n    add r0, r6, #0\n    add r2, r1, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0xb\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    bl TranslateAgbSpecies\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #5\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0xc\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    cmp r0, #0\n    beq _02234AFE\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl UpConvertItemId_Gen3to4\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #6\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #1\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #7\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x19\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #8\n    add r2, sp, #8\n    bl SetBoxMonData\n    mov r0, #0x46\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #9\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    add r1, r4, #0\n    bl AGB_GetBoxMonAbility\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0xa\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #8\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0xb\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #3\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0xc\n    add r2, sp, #4\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x1a\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0xd\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x1b\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0xe\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x1c\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0xf\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x1d\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x10\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x1e\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x11\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x1f\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x12\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x16\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x13\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x17\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x14\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x18\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x15\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x21\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x16\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x2f\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x17\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x30\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x18\n    add r2, sp, #8\n    bl SetBoxMonData\n    mov r5, #0\n    add r7, r5, #0\n    add r1, r5, #0\n    add r0, r6, #0\n    add r1, #0xd\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    add r1, r5, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, #0x36\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x15\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    mov r1, #3\n    lsl r1, r7\n    str r0, [sp, #8]\n    and r0, r1\n    lsr r0, r7\n    add r1, r5, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, #0x3e\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r1, r5, #0\n    add r0, r4, #0\n    add r1, #0x42\n    mov r2, #0\n    bl GetBoxMonData\n    add r1, r5, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, #0x3a\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r5, r5, #1\n    add r7, r7, #2\n    cmp r5, #4\n    blt _02234C8E\n    add r0, r6, #0\n    mov r1, #0x27\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x46\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x28\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x47\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x29\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x48\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x2a\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x49\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x2b\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x4a\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x2c\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x4b\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x2d\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x4c\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x32\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    add r7, r0, #0\n    cmp r7, #4\n    bgt _02234DB2\n    mov r5, #0\n    cmp r7, #0\n    ble _02234DB2\n    mov r0, #1\n    add r1, r5, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, #0x4e\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r5, r5, #1\n    cmp r5, r7\n    blt _02234D9C\n    add r0, r6, #0\n    mov r1, #0x33\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    add r7, r0, #0\n    cmp r7, #4\n    bgt _02234DDE\n    mov r5, #0\n    cmp r7, #0\n    ble _02234DDE\n    mov r0, #1\n    add r1, r5, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, #0x52\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r5, r5, #1\n    cmp r5, r7\n    blt _02234DC8\n    add r0, r6, #0\n    mov r1, #0x34\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    add r7, r0, #0\n    cmp r7, #4\n    bgt _02234E0A\n    mov r5, #0\n    cmp r7, #0\n    ble _02234E0A\n    mov r0, #1\n    add r1, r5, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, #0x56\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r5, r5, #1\n    cmp r5, r7\n    blt _02234DF4\n    add r0, r6, #0\n    mov r1, #0x35\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    add r7, r0, #0\n    cmp r7, #4\n    bgt _02234E36\n    mov r5, #0\n    cmp r7, #0\n    ble _02234E36\n    mov r0, #1\n    add r1, r5, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, #0x5a\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r5, r5, #1\n    cmp r5, r7\n    blt _02234E20\n    add r0, r6, #0\n    mov r1, #0x36\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    add r7, r0, #0\n    cmp r7, #4\n    bgt _02234E62\n    mov r5, #0\n    cmp r7, #0\n    ble _02234E62\n    mov r0, #1\n    add r1, r5, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, #0x5e\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r5, r5, #1\n    cmp r5, r7\n    blt _02234E4C\n    add r0, r6, #0\n    mov r1, #0x43\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x62\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x44\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x63\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x45\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x64\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x46\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x65\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x47\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x66\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x48\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x67\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x49\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x68\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x4a\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x69\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x4b\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x6a\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x6b\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x4d\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x6c\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x4e\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x6d\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x50\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x6e\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r4, #0\n    bl GetBoxMonGender\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x6f\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0xc9\n    bne _02234FDE\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r1, #0\n    bl AGB_GetBoxMonData\n    add r3, r0, #0\n    mov r7, #3\n    lsl r0, r7, #8\n    and r0, r3\n    lsr r1, r0, #6\n    lsl r0, r7, #0x18\n    and r0, r3\n    lsr r5, r0, #0x12\n    lsl r0, r7, #0x10\n    and r0, r3\n    lsr r0, r0, #0xc\n    add r2, r3, #0\n    orr r0, r5\n    orr r0, r1\n    and r2, r7\n    str r3, [sp, #8]\n    orr r0, r2\n    mov r1, #0x1c\n    bl _u32_div_f\n    str r1, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x70\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    ldr r1, _02235120 ; =0x00000182\n    cmp r0, r1\n    bne _0223502E\n    ldr r0, _02235124 ; =gSystem + 0x60\n    ldrb r0, [r0, #0xa]\n    cmp r0, #5\n    bhi _0223500E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02235002: ; jump table\n    mov r0, #0\n    str r0, [sp, #8]\n    b _02235024\n    mov r0, #1\n    str r0, [sp, #8]\n    b _02235024\n    mov r0, #2\n    str r0, [sp, #8]\n    b _02235024\n    mov r0, #3\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x70\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #2\n    add r2, sp, #0x24\n    bl AGB_GetBoxMonData\n    ldr r3, [sp, #4]\n    add r0, sp, #0x24\n    add r1, sp, #0xc\n    mov r2, #0xc\n    bl ConvertRSStringToDPStringInternational\n    add r0, r4, #0\n    mov r1, #0x76\n    add r2, sp, #0xc\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #3\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    ldr r1, _02235128 ; =gGameLanguage\n    ldrb r1, [r1]\n    cmp r1, r0\n    beq _0223506E\n    mov r0, #1\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x4d\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x25\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x7a\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #7\n    add r2, sp, #0x24\n    bl AGB_GetBoxMonData\n    ldr r3, [sp, #4]\n    add r0, sp, #0x24\n    add r1, sp, #0xc\n    mov r2, #8\n    bl ConvertRSStringToDPStringInternational\n    add r0, r4, #0\n    mov r1, #0x90\n    add r2, sp, #0xc\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x23\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x99\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x22\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x9a\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x26\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x9b\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x24\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x9c\n    add r2, sp, #8\n    bl SetBoxMonData\n    add r0, r6, #0\n    mov r1, #0x31\n    mov r2, #0\n    bl AGB_GetBoxMonData\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0x9d\n    add r2, sp, #8\n    bl SetBoxMonData\n    ldr r1, [sp]\n    add r0, r4, #0\n    bl ReleaseBoxMonLock\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02235120: .word 0x00000182\n    _02235124: .word gSystem + 0x60\n    _02235128: .word gGameLanguage"
    );
    #endif
}

void ov74_0223512C(void) {
    /* Original at 0x0223512C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02235134 ; =ov74_0223D450\n    str r0, [r1]\n    bx lr\n    nop\n    _02235134: .word ov74_0223D450"
    );
    #endif
}

void ov74_02235138(void) {
    /* Original at 0x02235138 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, _02235144 ; =ov74_0223D450\n    ldr r3, _02235148 ; =Heap_Alloc\n    ldr r0, [r0]\n    bx r3\n    nop\n    _02235144: .word ov74_0223D450\n    _02235148: .word Heap_Alloc"
    );
    #endif
}

void ov74_0223514C(void) {
    /* Original at 0x0223514C */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x1fc\n    sub sp, #0x1fc\n    sub sp, #0x130\n    bl CTRDG_GetAgbGameCode\n    lsr r1, r0, #0x18\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    lsr r1, r0, #0x10\n    lsl r3, r0, #0x18\n    lsr r0, r0, #8\n    lsl r0, r0, #0x18\n    lsl r1, r1, #0x18\n    lsr r0, r0, #8\n    lsr r1, r1, #0x10\n    orr r0, r3\n    orr r0, r1\n    add r6, r2, #0\n    orr r6, r0\n    ldr r0, _022351E0 ; =ov74_0223CE9C\n    mov r4, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    bls _022351D6\n    ldr r5, _022351E4 ; =ov74_0223CE9C\n    add r7, sp, #0x80\n    ldr r0, [r5]\n    cmp r6, r0\n    bne _022351CC\n    mov r0, #1\n    bl CTRDG_Enable\n    mov r0, #0x81\n    ldr r2, _022351E8 ; =0x000004A8\n    lsl r0, r0, #0x14\n    add r1, r7, #0\n    bl CTRDG_CpuCopy8\n    ldr r0, _022351EC ; =0x08020000\n    add r1, sp, #0\n    mov r2, #0x80\n    bl CTRDG_CpuCopy8\n    mov r0, #0\n    bl CTRDG_Enable\n    ldr r0, _022351F0 ; =ov74_02235138\n    ldr r1, _022351F4 ; =Heap_Free\n    bl CRYPTO_SetAllocator\n    ldr r1, _022351E8 ; =0x000004A8\n    ldr r3, _022351F8 ; =_0223B690\n    add r0, r7, #0\n    add r2, sp, #0\n    bl CRYPTO_VerifySignature\n    cmp r0, #0\n    beq _022351CC\n    add sp, #0x1fc\n    add sp, #0x1fc\n    add sp, #0x130\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r5, r5, #4\n    ldr r0, [r5]\n    add r4, r4, #1\n    cmp r4, r0\n    blo _02235182\n    mov r0, #0\n    add sp, #0x1fc\n    add sp, #0x1fc\n    add sp, #0x130\n    pop {r3, r4, r5, r6, r7, pc}\n    _022351E0: .word ov74_0223CE9C\n    _022351E4: .word ov74_0223CE9C\n    _022351E8: .word 0x000004A8\n    _022351EC: .word 0x08020000\n    _022351F0: .word ov74_02235138\n    _022351F4: .word Heap_Free\n    _022351F8: .word _0223B690"
    );
    #endif
}

void ov74_022351FC(void) {
    /* Original at 0x022351FC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl CTRDG_Init\n    bl CTRDG_IsAgbCartridge\n    cmp r0, #0\n    bne _0223520E\n    mov r0, #0\n    pop {r3, pc}\n    bl CTRDG_GetAgbMakerCode\n    ldr r1, _0223522C ; =0x00003130\n    cmp r0, r1\n    beq _0223521C\n    mov r0, #0\n    pop {r3, pc}\n    bl ov74_0223514C\n    cmp r0, #0\n    beq _02235228\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _0223522C: .word 0x00003130"
    );
    #endif
}

void ov74_02235230(void) {
    /* Original at 0x02235230 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov74_022351FC\n    cmp r0, #0\n    bne _0223523E\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    bl CTRDG_Enable\n    mov r0, #0x81\n    lsl r0, r0, #0x14\n    add r1, sp, #0\n    bl CTRDG_Read32\n    mov r0, #0\n    bl CTRDG_Enable\n    ldr r0, [sp]\n    pop {r3, pc}"
    );
    #endif
}

void ov74_02235258(void) {
    /* Original at 0x02235258 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov74_022351FC\n    cmp r0, #0\n    bne _0223526A\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r4, #0\n    bne _02235274\n    bl ov74_02235230\n    add r4, r0, #0\n    mov r0, #1\n    bl CTRDG_Enable\n    ldr r0, _0223529C ; =0x08100100\n    add r1, r5, #0\n    add r2, r4, #0\n    bl CTRDG_CpuCopy16\n    add r4, r0, #0\n    mov r0, #0\n    bl CTRDG_Enable\n    bl CTRDG_IsExisting\n    cmp r0, #0\n    bne _02235298\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _0223529C: .word 0x08100100"
    );
    #endif
}

void ov74_022352A0(void) {
    /* Original at 0x022352A0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    add r4, r0, #0\n    mov r0, #0\n    ldr r6, _022352C8 ; =ov74_0223D454\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    mov r5, #0x75\n    stmia r6!, {r0, r1, r2, r3}\n    stmia r6!, {r0, r1, r2, r3}\n    sub r5, r5, #1\n    bne _022352B0\n    stmia r6!, {r0, r1}\n    ldr r0, _022352CC ; =ov74_0223D454\n    mov r1, #1\n    str r1, [r0, #4]\n    str r4, [r0, #8]\n    pop {r3, r4, r5, r6}\n    bx lr\n    nop\n    _022352C8: .word ov74_0223D454\n    _022352CC: .word ov74_0223D454"
    );
    #endif
}

void ov74_022352D0(void) {
    Heap_Create(3, r3);
    OverlayManager_CreateAndGetData(r5, r4, r6);
    memset(0, r4);
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
}

void ov74_02235308(void) {
    /* Original at 0x02235308 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    ldr r5, _0223538C ; =_0223B720\n    add r6, r3, #0\n    add r7, r0, #0\n    add r4, r1, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    cmp r2, #4\n    str r0, [r3]\n    add r0, sp, #0\n    strb r2, [r0, #0x10]\n    bhi _02235362\n    add r0, r2, r2\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223533A: ; jump table\n    mov r0, #2\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    b _02235362\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    b _02235362\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    b _02235362\n    mov r0, #2\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    lsr r1, r6, #0xb\n    add r0, sp, #0\n    strb r1, [r0, #0x12]\n    ldr r1, [sp, #0x30]\n    add r2, sp, #0\n    lsr r1, r1, #0xe\n    strb r1, [r0, #0x13]\n    lsl r1, r4, #0x18\n    add r0, r7, #0\n    lsr r1, r1, #0x18\n    mov r3, #0\n    bl InitBgFromTemplate\n    lsl r1, r4, #0x18\n    add r0, r7, #0\n    lsr r1, r1, #0x18\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223538C: .word _0223B720"
    );
    #endif
}

void ov74_02235390(void) {
    /* Original at 0x02235390 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02235398 ; =ov74_0223D454\n    str r0, [r1, #0x10]\n    bx lr\n    nop\n    _02235398: .word ov74_0223D454"
    );
    #endif
}

void ov74_0223539C(void) {
    /* Original at 0x0223539C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, _022353F0 ; =ov74_0223D454\n    add r5, r1, #0\n    ldr r0, [r0, #0x10]\n    add r4, r2, #0\n    add r6, r3, #0\n    ldr r7, _022353F4 ; =ov74_0223D454\n    cmp r0, #0\n    bne _022353CC\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r7, #8]\n    ldr r1, [sp, #0xc]\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    b _022353E4\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r7, #8]\n    ldr r1, [sp, #0xc]\n    str r0, [sp, #8]\n    ldr r3, _022353F8 ; =0x00007FFF\n    mov r0, #0\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    cmp r4, #0\n    beq _022353EA\n    str r6, [r4]\n    str r5, [r7, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _022353F0: .word ov74_0223D454\n    _022353F4: .word ov74_0223D454\n    _022353F8: .word 0x00007FFF"
    );
    #endif
}

void ov74_022353FC(void) {
    IsPaletteFadeFinished();
}

void ov74_02235414(void) {
    /* Original at 0x02235414 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r6, r2, #0\n    mov r1, #0\n    mov r2, #0x54\n    add r5, r0, #0\n    add r7, r3, #0\n    bl memset\n    mov r0, #1\n    str r0, [r5, #4]\n    str r0, [r5, #8]\n    sub r0, r0, #2\n    str r0, [r5, #0x4c]\n    str r4, [r5, #0x10]\n    str r6, [r5, #0x30]\n    ldr r0, [sp, #0x18]\n    str r7, [r5, #0x34]\n    str r0, [r5, #0x38]\n    ldr r0, [sp, #0x1c]\n    mov r2, #0\n    str r0, [r5, #0x3c]\n    str r2, [r5, #0x2c]\n    ldr r0, _02235460 ; =0x0001020F\n    str r2, [r5, #0x40]\n    str r0, [r5, #0x44]\n    add r0, r5, #0\n    mov r1, #0xf\n    add r0, #0x48\n    strb r1, [r0]\n    str r2, [r5]\n    str r2, [r5, #0x24]\n    str r2, [r5, #0x20]\n    str r2, [r5, #0x14]\n    mov r0, #0xff\n    str r0, [r5, #0x50]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02235460: .word 0x0001020F"
    );
    #endif
}

void ov74_02235464(void) {
    ((u32*)r0)[0x18] = r1;
    ((u32*)r0)[0x1c] = r2;
    ((u32*)r0)[0x28] = r3;
}

void ov74_0223546C(void) {
    *(u32*)r0 = r1;
    ((u32*)r0)[0x40] = r2;
}

void ov74_02235474(void) {
    ((u32*)r0)[0x20] = r1;
    ((u32*)r0)[0x24] = r2;
}

void ov74_0223547C(void) {
    /* Original at 0x0223547C */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    ldr r4, _02235564 ; =ov74_0223D454\n    cmp r1, r0\n    beq _0223555A\n    ldr r0, [r5, #0x4c]\n    cmp r0, r1\n    beq _0223555A\n    str r1, [r5, #0x4c]\n    ldr r0, [r5, #8]\n    cmp r0, #1\n    bne _022354A6\n    add r1, r5, #0\n    add r1, #0x48\n    ldrb r1, [r1]\n    ldr r0, [r5, #0x10]\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    ldr r1, [r5, #0x4c]\n    mvn r0, r0\n    cmp r1, r0\n    beq _0223555A\n    ldr r2, [r5, #0x34]\n    ldr r3, [r4, #8]\n    mov r0, #1\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    ldr r6, [r5, #0x14]\n    str r0, [sp, #0x10]\n    cmp r6, #0\n    bne _022354CC\n    ldr r0, [r4, #8]\n    bl MessageFormat_New\n    add r6, r0, #0\n    ldr r1, [sp, #0x10]\n    ldr r2, [r5, #0x4c]\n    ldr r3, [r4, #8]\n    add r0, r6, #0\n    bl ReadMsgData_ExpandPlaceholders\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    bne _02235500\n    ldr r0, [r5, #0x24]\n    add r2, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x50]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x44]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x10]\n    ldr r1, [r5, #0x40]\n    ldr r3, [r5, #0x20]\n    bl AddTextPrinterParameterizedWithColor\n    add r7, r0, #0\n    b _02235542\n    ldr r0, [r5, #0x40]\n    mov r1, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl GetFontAttribute\n    add r2, r0, #0\n    ldr r0, [r5, #0x40]\n    add r1, r4, #0\n    bl FontID_String_GetWidth\n    add r7, r0, #0\n    ldr r0, [r5, #0x10]\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r3, r0, r7\n    ldr r0, [r5, #0x24]\n    add r2, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x50]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x44]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x10]\n    ldr r1, [r5, #0x40]\n    bl AddTextPrinterParameterizedWithColor\n    add r7, r0, #0\n    mov r0, #0\n    str r0, [r5, #0xc]\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    bne _02235554\n    add r0, r6, #0\n    bl MessageFormat_Delete\n    ldr r0, [sp, #0x10]\n    bl DestroyMsgData\n    mov r0, #0xff\n    str r0, [r5, #0x50]\n    add r0, r7, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02235564: .word ov74_0223D454"
    );
    #endif
}

void ov74_02235568(void) {
    /* Original at 0x02235568 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    ldr r1, [r4, #0x10]\n    add r6, r2, #0\n    ldr r2, [r1]\n    add r5, r3, #0\n    cmp r2, #0\n    bne _022355BA\n    lsl r2, r5, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp]\n    ldr r2, [r4, #0x18]\n    lsl r3, r6, #0x18\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp, #4]\n    ldr r2, [r4, #0x1c]\n    lsr r3, r3, #0x18\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp, #8]\n    ldr r2, [r4, #0x30]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp, #0xc]\n    ldr r2, [r4, #0x28]\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    str r2, [sp, #0x10]\n    ldr r2, [r4, #0x2c]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    bl ov74_0223547C\n    add r5, r0, #0\n    b _022355E8\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _022355CC\n    add r0, r1, #0\n    lsl r1, r6, #0x18\n    lsr r1, r1, #0x18\n    bl SetWindowX\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _022355DE\n    lsl r1, r5, #0x18\n    ldr r0, [r4, #0x10]\n    lsr r1, r1, #0x18\n    bl SetWindowY\n    ldr r1, [sp, #0x28]\n    add r0, r4, #0\n    bl ov74_0223547C\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #1\n    bne _0223562E\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _022355FC\n    cmp r0, #1\n    beq _02235612\n    cmp r0, #2\n    b _02235628\n    ldr r2, [r4, #0x38]\n    ldr r3, [r4, #0x3c]\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [r4, #0x10]\n    mov r1, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl DrawFrameAndWindow1\n    b _0223562E\n    ldr r2, [r4, #0x38]\n    ldr r3, [r4, #0x3c]\n    lsl r2, r2, #0x10\n    lsl r3, r3, #0x18\n    ldr r0, [r4, #0x10]\n    mov r1, #0\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl DrawFrameAndWindow2\n    b _0223562E\n    ldr r0, [r4, #0x10]\n    bl CopyWindowToVram\n    add r0, r5, #0\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov74_02235634(void) {
    /* Original at 0x02235634 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x18]\n    ldr r0, [r0, #0x1c]\n    mul r0, r1\n    bx lr"
    );
    #endif
}

void ov74_0223563C(void) {
    /* Original at 0x0223563C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _02235674 ; =_0223B710\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, _02235678 ; =ov74_0223D454\n    mov r1, #0x10\n    ldr r0, [r0, #8]\n    str r0, [sp, #0xc]\n    add r0, r2, #0\n    add r2, r1, #0\n    bl ObjCharTransfer_InitEx\n    ldr r1, _02235678 ; =ov74_0223D454\n    mov r0, #0x1e\n    ldr r1, [r1, #8]\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _02235674: .word _0223B710\n    _02235678: .word ov74_0223D454"
    );
    #endif
}

void ov74_0223567C(void) {
    /* Original at 0x0223567C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0223568C ; =ov74_0223D454\n    ldr r0, [r0, #0x34]\n    cmp r0, #0\n    beq _02235688\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0223568C: .word ov74_0223D454"
    );
    #endif
}

void ov74_02235690(void) {
    /* Original at 0x02235690 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    ldr r6, _022356F8 ; =ov74_0223D454\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    ldr r2, _022356FC ; =ov74_0223D454\n    str r3, [sp, #0xc]\n    ldr r2, [r2, #8]\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    ldr r2, _022356FC ; =ov74_0223D454\n    ldr r1, _02235700 ; =ov74_0223D48C\n    ldr r2, [r2, #8]\n    mov r0, #0x80\n    bl G2dRenderer_Init\n    ldr r1, _022356FC ; =ov74_0223D454\n    mov r2, #1\n    str r0, [r1, #0x34]\n    ldr r0, _02235700 ; =ov74_0223D48C\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r1, #3\n    mov r7, #0x16\n    ldr r0, _02235704 ; =ov74_0223D654\n    lsl r1, r1, #0x12\n    str r1, [r0, #0x10]\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #4\n    ldr r2, [r6, #8]\n    mov r0, #0x20\n    add r1, r4, #0\n    bl Create2DGfxResObjMan\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _022356E0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _022356F8: .word ov74_0223D454\n    _022356FC: .word ov74_0223D454\n    _02235700: .word ov74_0223D48C\n    _02235704: .word ov74_0223D654"
    );
    #endif
}

void ov74_02235708(void) {
    GF_AssertFail();
}

void ov74_02235728(void) {
    /* Original at 0x02235728 */
    /* Requires manual decompilation - 174 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    ldr r4, [sp, #0x54]\n    add r6, r0, #0\n    mov ip, r1\n    str r2, [sp, #0x2c]\n    str r3, [sp, #0x30]\n    ldr r5, _02235894 ; =ov74_0223D454\n    cmp r4, #0\n    bne _02235740\n    mov r7, #1\n    b _02235742\n    mov r7, #2\n    mov r0, #1\n    str r0, [sp, #0x34]\n    cmp r6, #0x12\n    bne _0223574E\n    mov r0, #0\n    str r0, [sp, #0x34]\n    mov r1, #0\n    mvn r1, r1\n    mov r0, ip\n    cmp r0, r1\n    beq _0223577C\n    str r4, [sp]\n    str r7, [sp, #4]\n    ldr r0, [r5, #8]\n    ldr r3, [sp, #0x34]\n    str r0, [sp, #8]\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    mov r2, ip\n    bl AddCharResObjFromNarc\n    mov r1, #0x18\n    mul r1, r4\n    add r2, r5, r1\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    mov r1, #0\n    ldr r0, [sp, #0x2c]\n    mvn r1, r1\n    cmp r0, r1\n    beq _022357AE\n    str r4, [sp]\n    str r7, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    ldr r0, [r5, #8]\n    ldr r2, [sp, #0x2c]\n    str r0, [sp, #0xc]\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #0x18\n    mul r1, r4\n    add r2, r5, r1\n    mov r1, #0x5f\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    mov r1, #0\n    ldr r0, [sp, #0x30]\n    mvn r1, r1\n    cmp r0, r1\n    beq _022357DE\n    str r4, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [r5, #8]\n    ldr r2, [sp, #0x30]\n    str r0, [sp, #8]\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [sp, #0x34]\n    add r1, r6, #0\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x18\n    add r2, r4, #0\n    mul r2, r1\n    add r2, r5, r2\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    mov r0, #0\n    ldr r2, [sp, #0x50]\n    mvn r0, r0\n    cmp r2, r0\n    beq _0223580C\n    str r4, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r0, [r5, #8]\n    ldr r3, [sp, #0x34]\n    str r0, [sp, #8]\n    mov r0, #0x5b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x18\n    mul r1, r4\n    add r2, r5, r1\n    mov r1, #0x61\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    mov r0, #0x18\n    add r6, r4, #0\n    mul r6, r0\n    mov r0, #0x5e\n    add r1, r5, r6\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl sub_0200ACF0\n    mov r0, #0x5f\n    add r1, r5, r6\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl sub_0200B00C\n    mov r0, #0\n    mov r2, #0x16\n    str r4, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    lsl r2, r2, #4\n    ldr r1, [r5, r2]\n    add r3, r4, #0\n    str r1, [sp, #0x14]\n    add r1, r2, #4\n    ldr r1, [r5, r1]\n    str r1, [sp, #0x18]\n    add r1, r2, #0\n    add r1, #8\n    ldr r1, [r5, r1]\n    str r1, [sp, #0x1c]\n    add r1, r2, #0\n    add r1, #0xc\n    ldr r1, [r5, r1]\n    add r2, #0x48\n    str r1, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    mov r0, #0x24\n    add r1, r5, r2\n    mul r0, r4\n    add r0, r1, r0\n    add r1, r4, #0\n    add r2, r4, #0\n    bl CreateSpriteResourcesHeader\n    cmp r4, #0\n    bne _0223587E\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    b _02235886\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, _02235898 ; =ov74_02235A74\n    mov r1, #0\n    bl Main_SetVBlankIntrCB\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02235894: .word ov74_0223D454\n    _02235898: .word ov74_02235A74"
    );
    #endif
}

void ov74_0223589C(void) {
    G2dRenderer_SetSubSurfaceCoords();
}

void ov74_022358BC(void) {
    ov74_022358C8();
}

void ov74_022358C8(void) {
    /* Original at 0x022358C8 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02235928 ; =ov74_0223D654\n    ldr r4, _0223592C ; =ov74_0223D454\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _0223591C\n    mov r0, #0x83\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    bne _02235918\n    sub r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Sprite_GetDrawFlag\n    cmp r0, #0\n    bne _022358FC\n    cmp r5, #0\n    bne _022358FC\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_GetMatrixPtr\n    mov r1, #6\n    ldr r2, [r0, #4]\n    lsl r1, r1, #0x12\n    cmp r2, r1\n    bge _0223591C\n    lsr r1, r1, #7\n    add r1, r2, r1\n    str r1, [r0, #4]\n    b _0223591C\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x34]\n    cmp r0, #0\n    beq _02235926\n    bl SpriteList_RenderAndAnimateSprites\n    pop {r3, r4, r5, pc}\n    _02235928: .word ov74_0223D654\n    _0223592C: .word ov74_0223D454"
    );
    #endif
}

void ov74_02235930(void) {
    /* Original at 0x02235930 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x30\n    add r4, r1, #0\n    ldr r1, _022359B8 ; =ov74_0223D454\n    bne _02235992\n    ldr r4, [r1, #0x34]\n    lsl r2, r2, #0xc\n    str r4, [sp]\n    mov r4, #0x6a\n    lsl r4, r4, #2\n    add r5, r1, r4\n    mov r4, #0x24\n    mul r4, r0\n    add r4, r5, r4\n    str r4, [sp, #4]\n    mov r4, #1\n    lsl r4, r4, #0xc\n    mov r5, #0\n    str r5, [sp, #0x10]\n    str r4, [sp, #0x14]\n    str r4, [sp, #0x18]\n    str r4, [sp, #0x1c]\n    add r4, sp, #0\n    strh r5, [r4, #0x20]\n    str r2, [sp, #8]\n    lsl r2, r3, #0xc\n    str r2, [sp, #0xc]\n    mov r2, #0xa\n    str r2, [sp, #0x24]\n    cmp r0, #0\n    bne _02235972\n    mov r2, #1\n    b _02235974\n    mov r2, #2\n    ldr r0, [r1, #8]\n    str r2, [sp, #0x28]\n    str r0, [sp, #0x2c]\n    cmp r2, #2\n    bne _0223598A\n    mov r0, #0x21\n    lsl r0, r0, #4\n    ldr r2, [sp, #0xc]\n    ldr r0, [r1, r0]\n    add r0, r2, r0\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    add r4, r0, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl Sprite_SetPriority\n    ldr r1, [sp, #0x40]\n    add r0, r4, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    add sp, #0x30\n    pop {r3, r4, r5, pc}\n    _022359B8: .word ov74_0223D454"
    );
    #endif
}

void ov74_022359BC(void) {
    /* Original at 0x022359BC */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _02235A5C ; =ov74_0223D654\n    ldr r4, _02235A60 ; =ov74_0223D454\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _022359DA\n    mov r0, #0x82\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    mov r0, #0x82\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r1, #0x51\n    ldr r0, _02235A64 ; =ov74_0223D488\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _022359EA\n    bl sub_0200AEB0\n    mov r1, #0x57\n    ldr r0, _02235A64 ; =ov74_0223D488\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _022359FA\n    bl sub_0200AEB0\n    mov r1, #0x52\n    ldr r0, _02235A64 ; =ov74_0223D488\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _02235A0A\n    bl sub_0200B0A8\n    mov r1, #0x16\n    ldr r0, _02235A64 ; =ov74_0223D488\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _02235A1A\n    bl sub_0200B0A8\n    mov r4, #0\n    mov r7, #0x4b\n    ldr r5, _02235A64 ; =ov74_0223D488\n    add r6, r4, #0\n    lsl r7, r7, #2\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Destroy2DGfxResObjMan\n    str r6, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _02235A24\n    ldr r0, _02235A64 ; =ov74_0223D488\n    ldr r0, [r0]\n    bl SpriteList_Delete\n    ldr r0, _02235A64 ; =ov74_0223D488\n    mov r1, #0\n    str r1, [r0]\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    pop {r3, r4, r5, r6, r7, pc}\n    _02235A5C: .word ov74_0223D654\n    _02235A60: .word ov74_0223D454\n    _02235A64: .word ov74_0223D488"
    );
    #endif
}

void ov74_02235A68(void) {
    /* Original at 0x02235A68 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    sub r0, #0xa\n    lsl r1, r0\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov74_02235A74(void) {
    /* Original at 0x02235A74 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _02235AB0 ; =ov74_0223E2D4\n    ldr r4, _02235AB4 ; =ov74_0223D454\n    ldr r0, [r0, #0x24]\n    cmp r0, #0\n    beq _02235A8E\n    ldr r1, _02235AB8 ; =0x00000EA4\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    blx r1\n    ldr r0, _02235AB8 ; =0x00000EA4\n    mov r1, #0\n    str r1, [r4, r0]\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02235AA0\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _02235ABC ; =0x027E0000\n    ldr r1, _02235AC0 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _02235AB0: .word ov74_0223E2D4\n    _02235AB4: .word ov74_0223D454\n    _02235AB8: .word 0x00000EA4\n    _02235ABC: .word 0x027E0000\n    _02235AC0: .word 0x00003FF8"
    );
    #endif
}

void ov74_02235AC4(void) {
    /* Original at 0x02235AC4 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4}\n    sub sp, #0x24\n    ldr r4, _02235B10 ; =_0223B73C\n    add r3, sp, #0\n    mov r2, #0x22\n    ldrb r1, [r4]\n    add r4, r4, #1\n    strb r1, [r3]\n    add r3, r3, #1\n    sub r2, r2, #1\n    bne _02235ACE\n    add r1, sp, #0\n    ldrb r2, [r1]\n    mov r3, #0\n    sub r1, r3, #1\n    cmp r2, r1\n    beq _02235B08\n    add r4, sp, #0\n    sub r1, r3, #1\n    ldrb r2, [r4]\n    cmp r0, r2\n    bne _02235AFE\n    add r0, sp, #0\n    lsl r1, r3, #1\n    add r0, #1\n    add sp, #0x24\n    ldrb r0, [r0, r1]\n    pop {r4}\n    bx lr\n    add r4, r4, #2\n    ldrb r2, [r4]\n    add r3, r3, #1\n    cmp r2, r1\n    bne _02235AEA\n    mov r0, #0\n    add sp, #0x24\n    pop {r4}\n    bx lr\n    _02235B10: .word _0223B73C"
    );
    #endif
}

void ov74_02235B14(void) {
    /* Original at 0x02235B14 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r6, r1, #0\n    str r0, [sp, #0x20]\n    add r0, r6, #0\n    add r5, r2, #0\n    add r7, r3, #0\n    ldr r4, [sp, #0x44]\n    bl GetMonGender\n    str r0, [sp, #0x24]\n    add r0, r6, #0\n    bl MonIsShiny\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    lsl r0, r7, #0x18\n    ldr r2, [sp, #0x24]\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0\n    lsl r1, r5, #0x10\n    lsl r2, r2, #0x18\n    str r0, [sp, #8]\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x18\n    mov r3, #2\n    bl GetMonSpriteCharAndPlttNarcIdsEx\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r1, #0\n    bl GetMonData\n    mov r3, #0\n    str r3, [sp]\n    mov r1, #0xa\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    ldr r1, [sp, #0x40]\n    ldr r2, _02235BCC ; =ov74_0223D454\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r3, [sp, #0x14]\n    mov r0, #2\n    str r0, [sp, #0x18]\n    str r5, [sp, #0x1c]\n    ldrh r0, [r4]\n    ldrh r1, [r4, #2]\n    ldr r2, [r2, #8]\n    bl sub_02014494\n    mov r1, #0x32\n    ldr r0, [sp, #0x40]\n    lsl r1, r1, #6\n    bl DC_FlushRange\n    ldr r0, [sp, #0x20]\n    bl Sprite_GetImageProxy\n    mov r1, #2\n    bl NNS_G2dGetImageLocation\n    mov r2, #0x32\n    add r1, r0, #0\n    lsl r2, r2, #6\n    ldr r0, [sp, #0x40]\n    add r1, r1, r2\n    bl GXS_LoadOBJ\n    ldr r0, [sp, #0x20]\n    bl Sprite_GetPaletteProxy\n    mov r1, #2\n    bl NNS_G2dGetImagePaletteLocation\n    add r3, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    ldr r0, _02235BCC ; =ov74_0223D454\n    mov r2, #5\n    ldr r0, [r0, #8]\n    add r3, #0x60\n    str r0, [sp, #4]\n    ldrh r0, [r4]\n    ldrh r1, [r4, #4]\n    bl GfGfxLoader_GXLoadPal\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _02235BCC: .word ov74_0223D454"
    );
    #endif
}

void ov74_02235BD0(void) {
    /* Original at 0x02235BD0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0x25\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x71\n    mov r1, #0x27\n    mov r2, #0x24\n    mov r3, #0x26\n    bl ov74_02235728\n    mov r1, #1\n    mov r0, #0\n    lsl r1, r1, #0x14\n    bl ov74_0223589C\n    mov r3, #0\n    mov r1, #0x82\n    str r3, [sp]\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    mov r0, #1\n    mov r2, #0x80\n    bl ov74_02235930\n    mov r1, #0x82\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov74_02235C10(void) {
    /* Original at 0x02235C10 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #1\n    add r4, r1, #0\n    add r6, r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x34\n    mov r1, #0xa\n    mov r2, #0\n    mov r3, #0xb\n    bl ov74_02235728\n    mov r1, #1\n    mov r0, #0\n    lsl r1, r1, #0x14\n    bl ov74_0223589C\n    mov r0, #1\n    mov r1, #0x82\n    str r0, [sp]\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    mov r2, #0x80\n    mov r3, #0\n    bl ov74_02235930\n    mov r2, #0x82\n    lsl r2, r2, #2\n    add r6, #8\n    str r0, [r5, r2]\n    cmp r4, #7\n    bgt _02235C68\n    cmp r4, #1\n    blt _02235CDA\n    beq _02235C6C\n    cmp r4, #2\n    beq _02235CA2\n    cmp r4, #7\n    beq _02235CC0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    cmp r4, #0xd\n    bne _02235CDA\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x85\n    lsl r1, r1, #2\n    add r3, r0, #0\n    add r0, r5, r1\n    str r0, [sp]\n    ldr r0, _02235CE0 ; =0x00000E94\n    sub r1, #0xc\n    add r0, r5, r0\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov74_02235B14\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    add r0, r2, #0\n    add r0, #0xc\n    add r0, r5, r0\n    str r0, [sp]\n    ldr r0, _02235CE0 ; =0x00000E94\n    add r1, r6, #0\n    add r0, r5, r0\n    str r0, [sp, #4]\n    ldr r0, [r5, r2]\n    sub r2, #0x1a\n    mov r3, #0\n    bl ov74_02235B14\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    add r0, r2, #0\n    add r0, #0xc\n    add r0, r5, r0\n    str r0, [sp]\n    ldr r0, _02235CE0 ; =0x00000E94\n    add r1, r6, #0\n    add r0, r5, r0\n    str r0, [sp, #4]\n    ldr r0, [r5, r2]\n    sub r2, #0x1a\n    mov r3, #1\n    bl ov74_02235B14\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _02235CE0: .word 0x00000E94"
    );
    #endif
}

void ov74_02235CE4(void) {
    /* Original at 0x02235CE4 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    cmp r1, #0xf\n    bhi _02235D36\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02235CFA: ; jump table\n    ldr r4, [r2, #4]\n    b _02235D36\n    ldr r4, _02235D90 ; =0x000001C6\n    b _02235D36\n    mov r4, #0x71\n    lsl r4, r4, #2\n    b _02235D36\n    ldr r4, _02235D94 ; =0x000001C7\n    b _02235D36\n    ldr r4, _02235D98 ; =0x000001D3\n    b _02235D36\n    ldr r4, _02235D9C ; =0x000001BA\n    b _02235D36\n    ldr r4, _02235DA0 ; =0x000001F5\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r7, r0, #0\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    mov r1, #2\n    bl GetItemIndexMapping\n    add r4, r0, #0\n    bl GetItemIconCell\n    add r6, r0, #0\n    bl GetItemIconAnim\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x12\n    add r1, r7, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ov74_02235728\n    mov r1, #1\n    mov r0, #0\n    lsl r1, r1, #0x14\n    bl ov74_0223589C\n    mov r3, #0\n    mov r1, #0x82\n    str r3, [sp]\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    mov r0, #1\n    mov r2, #0x80\n    bl ov74_02235930\n    mov r1, #0x82\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02235D90: .word 0x000001C6\n    _02235D94: .word 0x000001C7\n    _02235D98: .word 0x000001D3\n    _02235D9C: .word 0x000001BA\n    _02235DA0: .word 0x000001F5"
    );
    #endif
}

void ov74_02235DA4(void) {
    GfGfxLoader_GXLoadPal(0x71, 0x21, 0xc0, 4);
}

void ov74_02235DC4(void) {
    /* Original at 0x02235DC4 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r1, #0\n    ldrh r4, [r6]\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov74_02235AC4\n    add r7, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #5\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _02235EC0 ; =ov74_0223D454\n    mov r1, #0x22\n    ldr r0, [r0, #8]\n    add r2, r5, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x71\n    mov r3, #5\n    bl GfGfxLoader_LoadCharData\n    mov r2, #1\n    ldr r3, _02235EC0 ; =ov74_0223D454\n    str r2, [sp]\n    ldr r3, [r3, #8]\n    mov r0, #0x71\n    mov r1, #0x23\n    bl GfGfxLoader_LoadFromNarc\n    add r1, sp, #0x14\n    str r0, [sp, #0x10]\n    bl NNS_G2dGetUnpackedScreenData\n    ldr r2, [sp, #0x14]\n    mov r3, #6\n    add r0, r5, #0\n    mov r1, #5\n    add r2, #0xc\n    lsl r3, r3, #8\n    bl BG_LoadScreenTilemapData\n    ldr r0, [sp, #0x10]\n    bl Heap_Free\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x18\n    mov r2, #0\n    add r7, #8\n    str r0, [sp, #4]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r1, #5\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    add r0, r5, #0\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r1, _02235EC4 ; =ov74_02235DA4\n    ldr r0, _02235EC8 ; =ov74_0223E2D4\n    cmp r4, #0xf\n    str r1, [r0, #0x24]\n    ldr r0, _02235EC0 ; =ov74_0223D454\n    str r5, [r0]\n    bhi _02235EAE\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02235E62: ; jump table\n    ldr r0, _02235ECC ; =ov74_0223D454\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov74_02235BD0\n    b _02235EAE\n    mov r1, #0x83\n    ldr r0, _02235ECC ; =ov74_0223D454\n    mov r2, #0x78\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    ldr r0, _02235ECC ; =ov74_0223D454\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov74_02235C10\n    b _02235EAE\n    ldr r0, _02235ECC ; =ov74_0223D454\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov74_02235CE4\n    mov r1, #0x82\n    ldr r0, _02235ECC ; =ov74_0223D454\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02235EC0: .word ov74_0223D454\n    _02235EC4: .word ov74_02235DA4\n    _02235EC8: .word ov74_0223E2D4\n    _02235ECC: .word ov74_0223D454"
    );
    #endif
}

void ov74_02235ED0(void) {
    /* Original at 0x02235ED0 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r1, #0\n    mov r1, #2\n    add r5, r0, #0\n    add r0, r2, #0\n    lsl r1, r1, #8\n    str r2, [sp]\n    bl Heap_Alloc\n    ldr r1, _02235F50 ; =0x0000A001\n    add r4, r0, #0\n    bl MATHi_CRC16InitTableRev\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0x50\n    bl MATH_CalcCRC16\n    add r6, r0, #0\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, sp, #4\n    bl OS_GetMacAddress\n    add r0, sp, #4\n    ldrh r1, [r0, #2]\n    mov r2, #0\n    add r3, sp, #4\n    strh r1, [r0, #6]\n    ldr r1, _02235F54 ; =0x0000D679\n    strh r6, [r0, #2]\n    ldrh r0, [r3]\n    add r2, r2, #1\n    eor r0, r1\n    strh r0, [r3]\n    ldrh r1, [r3]\n    add r3, r3, #2\n    cmp r2, #4\n    blt _02235F12\n    mov r1, #0x41\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    add r1, sp, #4\n    mov r2, #8\n    add r4, r0, #0\n    bl CRYPTO_RC4Init\n    add r5, #0x50\n    mov r2, #0xd6\n    add r0, r4, #0\n    add r1, r5, #0\n    lsl r2, r2, #2\n    add r3, r7, #0\n    bl CRYPTO_RC4Encrypt\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02235F50: .word 0x0000A001\n    _02235F54: .word 0x0000D679"
    );
    #endif
}

void ov74_02235F58(void) {
    /* Original at 0x02235F58 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r1, #0\n    mov r1, #2\n    add r5, r0, #0\n    add r0, r2, #0\n    lsl r1, r1, #8\n    str r2, [sp]\n    bl Heap_Alloc\n    ldr r1, _02235FF0 ; =0x0000A001\n    add r4, r0, #0\n    bl MATHi_CRC16InitTableRev\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0x50\n    bl MATH_CalcCRC16\n    add r6, r0, #0\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    bl sub_02035754\n    ldrb r2, [r0, #4]\n    add r1, sp, #4\n    mov r3, #0\n    strb r2, [r1]\n    ldrb r2, [r0, #5]\n    strb r2, [r1, #1]\n    ldrb r2, [r0, #6]\n    strb r2, [r1, #2]\n    ldrb r2, [r0, #7]\n    strb r2, [r1, #3]\n    ldrb r2, [r0, #8]\n    strb r2, [r1, #4]\n    ldrb r0, [r0, #9]\n    strb r0, [r1, #5]\n    add r0, sp, #4\n    ldrh r2, [r0, #2]\n    strh r2, [r0, #6]\n    ldr r2, _02235FF4 ; =0x0000D679\n    strh r6, [r0, #2]\n    ldrh r0, [r1]\n    add r3, r3, #1\n    eor r0, r2\n    strh r0, [r1]\n    ldrh r2, [r1]\n    add r1, r1, #2\n    cmp r3, #4\n    blt _02235FB2\n    mov r1, #0x41\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    add r1, sp, #4\n    mov r2, #8\n    add r4, r0, #0\n    bl CRYPTO_RC4Init\n    add r5, #0x50\n    mov r2, #0xd6\n    add r0, r4, #0\n    add r1, r5, #0\n    lsl r2, r2, #2\n    add r3, r7, #0\n    bl CRYPTO_RC4Encrypt\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02235FF0: .word 0x0000A001\n    _02235FF4: .word 0x0000D679"
    );
    #endif
}

void ov74_02235FF8(void) {
    PlaySE();
}

void ov74_02236010(void) {
    /* Original at 0x02236010 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02236030 ; =0x027FFFA8\n    ldrh r1, [r0]\n    mov r0, #2\n    lsl r0, r0, #0xe\n    and r0, r1\n    asr r0, r0, #0xf\n    bne _0223602C\n    bl CTRDG_IsAgbCartridge\n    cmp r0, #0\n    bne _0223602C\n    bl CTRDG_TerminateForPulledOut\n    pop {r3, pc}\n    nop\n    _02236030: .word 0x027FFFA8"
    );
    #endif
}

void ov74_02236034(void) {
    /* Original at 0x02236034 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #1\n    bne _0223605C\n    ldr r1, _02236068 ; =0x04000208\n    ldrh r0, [r1]\n    mov r0, #0\n    strh r0, [r1]\n    lsr r0, r1, #0xd\n    ldr r1, _0223606C ; =ov74_02236010\n    bl OS_SetIrqFunction\n    mov r0, #2\n    lsl r0, r0, #0xc\n    bl OS_EnableIrqMask\n    ldr r1, _02236068 ; =0x04000208\n    ldrh r0, [r1]\n    mov r0, #1\n    strh r0, [r1]\n    pop {r3, pc}\n    mov r0, #2\n    lsl r0, r0, #0xc\n    bl OS_DisableIrqMask\n    pop {r3, pc}\n    nop\n    _02236068: .word 0x04000208\n    _0223606C: .word ov74_02236010"
    );
    #endif
}

void ov74_02236070(void) {
    /* Original at 0x02236070 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov74_02236074(void) {
    /* Original at 0x02236074 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02236098 ; =0x04000208\n    ldrh r0, [r1]\n    mov r0, #0\n    strh r0, [r1]\n    lsr r0, r1, #0xd\n    ldr r1, _0223609C ; =ov74_02236070\n    bl OS_SetIrqFunction\n    mov r0, #2\n    lsl r0, r0, #0xc\n    bl OS_EnableIrqMask\n    ldr r1, _02236098 ; =0x04000208\n    ldrh r0, [r1]\n    mov r0, #1\n    strh r0, [r1]\n    pop {r3, pc}\n    _02236098: .word 0x04000208\n    _0223609C: .word ov74_02236070"
    );
    #endif
}

void ov74_022360A0(void) {
    /* Original at 0x022360A0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _022360AC ; =ov74_0223D454\n    str r0, [r1, #0x18]\n    mov r0, #0\n    str r0, [r1, #0x14]\n    bx lr\n    nop\n    _022360AC: .word ov74_0223D454"
    );
    #endif
}

void ov74_022360B0(void) {
    /* Original at 0x022360B0 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, _02236120 ; =ov74_0223D454\n    ldr r4, _02236124 ; =ov74_0223D454\n    ldr r0, [r0, #0x14]\n    cmp r0, #4\n    bhi _0223611C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022360C8: ; jump table\n    mov r0, #4\n    bl sub_0201A728\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl Save_PrepareForAsyncWrite\n    ldr r0, [r4, #0x14]\n    add r0, r0, #1\n    str r0, [r4, #0x14]\n    b _0223611C\n    ldr r0, [r4, #0x18]\n    bl Save_WriteFileAsync\n    add r5, r0, #0\n    cmp r5, #3\n    bne _022360FA\n    mov r0, #3\n    str r0, [r4, #0x14]\n    b _0223610C\n    cmp r5, #2\n    bne _02236104\n    mov r0, #2\n    str r0, [r4, #0x14]\n    b _0223610C\n    cmp r5, #1\n    bne _0223610C\n    mov r0, #4\n    str r0, [r4, #0x14]\n    sub r0, r5, #2\n    cmp r0, #1\n    bhi _02236118\n    mov r0, #4\n    bl sub_0201A738\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _02236120: .word ov74_0223D454\n    _02236124: .word ov74_0223D454"
    );
    #endif
}

void ov74_02236128(void) {
    /* Original at 0x02236128 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02236138 ; =ov74_0223D454\n    ldr r1, _0223613C ; =ov74_0223D454\n    ldr r0, [r0, #0x14]\n    cmp r0, #4\n    bne _02236136\n    mov r0, #1\n    str r0, [r1, #0x14]\n    bx lr\n    _02236138: .word ov74_0223D454\n    _0223613C: .word ov74_0223D454"
    );
    #endif
}

void ov74_02236140(void) {
    /* Original at 0x02236140 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02236158 ; =ov74_0223D454\n    ldr r0, [r0, #0x18]\n    bl Save_Cancel\n    ldr r0, _02236158 ; =ov74_0223D454\n    mov r1, #3\n    str r1, [r0, #0x14]\n    mov r0, #4\n    bl sub_0201A738\n    pop {r3, pc}\n    _02236158: .word ov74_0223D454"
    );
    #endif
}

void ov74_0223615C(void) {
    /* Original at 0x0223615C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02236164 ; =ov74_0223D454\n    ldr r0, [r0, #0x14]\n    bx lr\n    nop\n    _02236164: .word ov74_0223D454"
    );
    #endif
}

void ov74_02236168(void) {
    /* Original at 0x02236168 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _022361A4 ; =ov74_0223E2FC\n    add r4, r0, #0\n    ldr r2, [r1, #4]\n    cmp r2, #0\n    beq _02236184\n    ldr r3, [r1]\n    ldr r1, _022361A8 ; =0x00001150\n    ldr r0, _022361AC ; =ov74_0223D00C\n    ldr r1, [r3, r1]\n    lsl r3, r1, #2\n    ldr r1, _022361B0 ; =ov74_0223CFE4\n    ldr r1, [r1, r3]\n    blx r2\n    ldr r3, _022361A4 ; =ov74_0223E2FC\n    ldr r1, _022361A8 ; =0x00001150\n    ldr r0, [r3]\n    str r4, [r0, r1]\n    ldr r2, [r3, #4]\n    cmp r2, #0\n    beq _022361A0\n    ldr r3, [r3]\n    ldr r0, _022361B4 ; =ov74_0223D014\n    ldr r1, [r3, r1]\n    lsl r3, r1, #2\n    ldr r1, _022361B0 ; =ov74_0223CFE4\n    ldr r1, [r1, r3]\n    blx r2\n    pop {r4, pc}\n    nop\n    _022361A4: .word ov74_0223E2FC\n    _022361A8: .word 0x00001150\n    _022361AC: .word ov74_0223D00C\n    _022361B0: .word ov74_0223CFE4\n    _022361B4: .word ov74_0223D014"
    );
    #endif
}

void ov74_022361B8(void) {
    /* Original at 0x022361B8 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _022361CC ; =ov74_0223E2FC\n    ldr r3, [r1]\n    ldr r1, _022361D0 ; =0x00001150\n    ldr r2, [r3, r1]\n    sub r2, #9\n    cmp r2, #1\n    bls _022361CA\n    add r1, r1, #4\n    str r0, [r3, r1]\n    bx lr\n    _022361CC: .word ov74_0223E2FC\n    _022361D0: .word 0x00001150"
    );
    #endif
}

void ov74_022361D4(void) {
    /* Original at 0x022361D4 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _02236240 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _02236244 ; =0x00001150\n    ldr r0, [r1, r0]\n    cmp r0, #4\n    bne _022361E6\n    bl OS_Terminate\n    mov r0, #2\n    bl ov74_02236168\n    ldr r3, _02236240 ; =ov74_0223E2FC\n    ldr r0, _02236248 ; =0x0000FFFF\n    ldr r2, [r3]\n    ldr r1, _0223624C ; =0x00000FCC\n    strh r0, [r2, r1]\n    sub r2, r1, #2\n    ldr r4, [r3]\n    sub r1, r1, #4\n    strh r0, [r4, r2]\n    ldr r2, [r3]\n    strh r0, [r2, r1]\n    bl ov74_02236258\n    cmp r0, #0\n    bne _02236224\n    mov r0, #9\n    bl ov74_02236168\n    ldr r0, _02236240 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _02236250 ; =0x0000117C\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _02236220\n    mov r0, #4\n    blx r1\n    mov r0, #0\n    pop {r4, pc}\n    ldr r1, _02236240 ; =ov74_0223E2FC\n    ldr r0, _02236254 ; =0x00001158\n    ldr r2, [r1]\n    mov r3, #2\n    strh r3, [r2, r0]\n    ldr r1, [r1]\n    add r0, #0x24\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _0223623C\n    mov r0, #0\n    blx r1\n    mov r0, #1\n    pop {r4, pc}\n    _02236240: .word ov74_0223E2FC\n    _02236244: .word 0x00001150\n    _02236248: .word 0x0000FFFF\n    _0223624C: .word 0x00000FCC\n    _02236250: .word 0x0000117C\n    _02236254: .word 0x00001158"
    );
    #endif
}

void ov74_02236258(void) {
    /* Original at 0x02236258 */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _02236330 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _02236334 ; =0x00001150\n    ldr r0, [r1, r0]\n    cmp r0, #2\n    beq _0223626C\n    bl OS_Terminate\n    mov r0, #0\n    bl WM_GetAllowedChannel\n    add r4, r0, #0\n    mov r0, #2\n    lsl r0, r0, #0xe\n    cmp r4, r0\n    bne _02236284\n    mov r0, #3\n    bl ov74_022361B8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0\n    bne _02236292\n    mov r0, #0x16\n    bl ov74_022361B8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02236330 ; =ov74_0223E2FC\n    ldr r2, [r0]\n    ldr r0, _02236338 ; =0x00001176\n    ldrh r1, [r2, r0]\n    cmp r1, #0x10\n    blo _022362D4\n    sub r1, #0x10\n    mov r5, #0\n    mov r7, #0xd\n    mov r6, #1\n    b _022362BA\n    add r0, r1, #1\n    add r1, r7, #0\n    bl _s32_div_f\n    add r0, r6, #0\n    lsl r0, r1\n    tst r0, r4\n    bne _022362BE\n    add r5, r5, #1\n    cmp r5, #0xd\n    blt _022362A8\n    ldr r2, _02236330 ; =ov74_0223E2FC\n    add r4, r1, #0\n    ldr r3, [r2]\n    ldr r0, _02236338 ; =0x00001176\n    add r4, #0x10\n    strh r4, [r3, r0]\n    add r3, r1, #1\n    ldr r1, [r2]\n    ldr r0, _0223633C ; =0x00000FC4\n    strh r3, [r1, r0]\n    b _022362D8\n    ldr r0, _0223633C ; =0x00000FC4\n    strh r1, [r2, r0]\n    ldr r2, _02236330 ; =ov74_0223E2FC\n    ldr r0, _02236340 ; =0x00000FC6\n    ldr r1, [r2]\n    mov r3, #0xdc\n    strh r3, [r1, r0]\n    add r1, r0, #0\n    ldr r3, [r2]\n    sub r1, #0xc6\n    add r1, r3, r1\n    sub r0, r0, #6\n    str r1, [r3, r0]\n    ldr r1, [r2]\n    ldr r0, _02236344 ; =0x00001158\n    ldrh r0, [r1, r0]\n    cmp r0, #3\n    bne _0223630E\n    mov r5, #0\n    ldr r0, _02236348 ; =0x00001170\n    ldr r1, _0223634C ; =0x00000FC8\n    b _0223630A\n    ldr r3, [r2]\n    add r4, r3, r5\n    ldrb r3, [r4, r0]\n    add r5, r5, #1\n    strb r3, [r4, r1]\n    cmp r5, #6\n    blt _02236300\n    ldr r1, _02236330 ; =ov74_0223E2FC\n    ldr r0, _02236350 ; =ov74_02236354\n    ldr r2, [r1]\n    mov r1, #0x3f\n    lsl r1, r1, #6\n    add r1, r2, r1\n    bl WM_StartScan\n    cmp r0, #2\n    beq _0223632A\n    bl ov74_022361B8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02236330: .word ov74_0223E2FC\n    _02236334: .word 0x00001150\n    _02236338: .word 0x00001176\n    _0223633C: .word 0x00000FC4\n    _02236340: .word 0x00000FC6\n    _02236344: .word 0x00001158\n    _02236348: .word 0x00001170\n    _0223634C: .word 0x00000FC8\n    _02236350: .word ov74_02236354"
    );
    #endif
}

void ov74_02236354(void) {
    /* Original at 0x02236354 */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    beq _0223637A\n    bl ov74_022361B8\n    mov r0, #9\n    bl ov74_02236168\n    ldr r0, _02236468 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _0223646C ; =0x0000117C\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _02236466\n    mov r0, #4\n    blx r1\n    pop {r3, r4, r5, pc}\n    ldr r0, _02236468 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _02236470 ; =0x00001150\n    ldr r0, [r1, r0]\n    cmp r0, #2\n    beq _022363A6\n    bl ov74_0223648C\n    cmp r0, #0\n    bne _02236466\n    mov r0, #9\n    bl ov74_02236168\n    ldr r0, _02236468 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _0223646C ; =0x0000117C\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _02236466\n    mov r0, #4\n    blx r1\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4, #8]\n    cmp r0, #3\n    beq _02236466\n    cmp r0, #4\n    beq _02236448\n    cmp r0, #5\n    bne _02236448\n    mov r0, #0xf\n    lsl r0, r0, #8\n    add r0, r1, r0\n    mov r1, #0xc0\n    bl DC_InvalidateRange\n    ldrh r0, [r4, #0x36]\n    cmp r0, #8\n    blo _022363CE\n    ldr r1, [r4, #0x3c]\n    ldr r0, _02236474 ; =0x00400318\n    cmp r1, r0\n    beq _022363E0\n    ldr r0, _02236468 ; =ov74_0223E2FC\n    ldr r3, [r0, #4]\n    cmp r3, #0\n    beq _02236448\n    ldr r0, _02236478 ; =ov74_0223D018\n    ldr r1, [r4, #0x3c]\n    ldr r2, _02236474 ; =0x00400318\n    blx r3\n    b _02236448\n    ldr r1, _02236468 ; =ov74_0223E2FC\n    ldrh r3, [r4, #0x12]\n    ldr r2, [r1]\n    ldr r0, _0223647C ; =0x0000116C\n    str r3, [r2, r0]\n    ldr r1, [r1]\n    sub r0, #0x14\n    ldrh r0, [r1, r0]\n    cmp r0, #2\n    bne _0223642C\n    add r0, r4, #0\n    add r0, #0x48\n    bl ov74_022366E8\n    ldr r2, _02236468 ; =ov74_0223E2FC\n    ldr r1, _02236480 ; =0x00001170\n    mov r0, #0\n    add r3, r4, r0\n    ldrb r5, [r3, #0xa]\n    ldr r3, [r2]\n    add r3, r3, r0\n    add r0, r0, #1\n    strb r5, [r3, r1]\n    cmp r0, #6\n    blt _02236402\n    ldr r1, _02236468 ; =ov74_0223E2FC\n    ldr r0, _02236484 ; =0x00001176\n    ldr r3, [r1]\n    ldrh r2, [r3, r0]\n    sub r2, #0xf\n    strh r2, [r3, r0]\n    ldr r1, [r1]\n    add r0, r0, #6\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _0223642C\n    mov r0, #1\n    blx r1\n    add r4, #0x48\n    add r0, r4, #0\n    bl ov74_02236768\n    cmp r0, #0\n    beq _02236448\n    ldr r0, _02236468 ; =ov74_0223E2FC\n    mov r2, #4\n    ldr r1, [r0]\n    ldr r0, _02236488 ; =0x00001158\n    strh r2, [r1, r0]\n    bl ov74_022365FC\n    pop {r3, r4, r5, pc}\n    bl ov74_02236258\n    cmp r0, #0\n    bne _02236466\n    mov r0, #9\n    bl ov74_02236168\n    ldr r0, _02236468 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _0223646C ; =0x0000117C\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _02236466\n    mov r0, #4\n    blx r1\n    pop {r3, r4, r5, pc}\n    _02236468: .word ov74_0223E2FC\n    _0223646C: .word 0x0000117C\n    _02236470: .word 0x00001150\n    _02236474: .word 0x00400318\n    _02236478: .word ov74_0223D018\n    _0223647C: .word 0x0000116C\n    _02236480: .word 0x00001170\n    _02236484: .word 0x00001176\n    _02236488: .word 0x00001158"
    );
    #endif
}

void ov74_0223648C(void) {
    /* Original at 0x0223648C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _022364A4 ; =ov74_022364A8\n    bl WM_EndScan\n    cmp r0, #2\n    beq _022364A0\n    bl ov74_022361B8\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _022364A4: .word ov74_022364A8"
    );
    #endif
}

void ov74_022364A8(void) {
    /* Original at 0x022364A8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _022364B6\n    bl ov74_022361B8\n    pop {r3, pc}\n    mov r0, #1\n    bl ov74_02236168\n    pop {r3, pc}"
    );
    #endif
}

void ov74_022364C0(void) {
    /* Original at 0x022364C0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _022364D0\n    mov r0, #0xa\n    bl ov74_02236168\n    pop {r3, pc}\n    mov r0, #0\n    bl ov74_02236168\n    ldr r0, _022364E8 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _022364EC ; =0x0000117C\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _022364E6\n    mov r0, #3\n    blx r1\n    pop {r3, pc}\n    _022364E8: .word ov74_0223E2FC\n    _022364EC: .word 0x0000117C"
    );
    #endif
}

void ov74_022364F0(void) {
    ov74_0223653C(0, 1, 0);
}

void ov74_02236514(void) {
    /* Original at 0x02236514 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #8\n    bne _02236532\n    mov r0, #9\n    bl ov74_02236168\n    ldr r0, _02236534 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _02236538 ; =0x0000117C\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _02236532\n    mov r0, #4\n    blx r1\n    pop {r3, pc}\n    _02236534: .word ov74_0223E2FC\n    _02236538: .word 0x0000117C"
    );
    #endif
}

void ov74_0223653C(void) {
    /* Original at 0x0223653C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #3\n    bl ov74_02236168\n    ldr r0, _02236568 ; =ov74_0223E2FC\n    ldr r1, _0223656C ; =ov74_02236570\n    ldr r0, [r0]\n    mov r2, #2\n    bl WM_Initialize\n    cmp r0, #2\n    beq _02236562\n    bl ov74_022361B8\n    mov r0, #0xa\n    bl ov74_02236168\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _02236568: .word ov74_0223E2FC\n    _0223656C: .word ov74_02236570"
    );
    #endif
}

void ov74_02236570(void) {
    /* Original at 0x02236570 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _02236584\n    bl ov74_022361B8\n    mov r0, #0xa\n    bl ov74_02236168\n    pop {r3, pc}\n    ldr r0, _022365A8 ; =ov74_02236514\n    bl WM_SetIndCallback\n    cmp r0, #0\n    beq _0223659A\n    bl ov74_022361B8\n    mov r0, #0xa\n    bl ov74_02236168\n    pop {r3, pc}\n    mov r0, #1\n    bl ov74_02236168\n    bl ov74_022361D4\n    pop {r3, pc}\n    nop\n    _022365A8: .word ov74_02236514"
    );
    #endif
}

void ov74_022365AC(void) {
    /* Original at 0x022365AC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _022365EC ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _022365F0 ; =0x00001150\n    ldr r0, [r1, r0]\n    cmp r0, #1\n    beq _022365BE\n    bl OS_Terminate\n    mov r0, #3\n    bl ov74_02236168\n    ldr r0, _022365F4 ; =ov74_022364C0\n    bl WM_End\n    cmp r0, #2\n    beq _022365E8\n    mov r0, #9\n    bl ov74_02236168\n    ldr r0, _022365EC ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _022365F8 ; =0x0000117C\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _022365E4\n    mov r0, #4\n    blx r1\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _022365EC: .word ov74_0223E2FC\n    _022365F0: .word 0x00001150\n    _022365F4: .word ov74_022364C0\n    _022365F8: .word 0x0000117C"
    );
    #endif
}

void ov74_022365FC(void) {
    /* Original at 0x022365FC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02236618 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _0223661C ; =0x00001150\n    ldr r0, [r1, r0]\n    cmp r0, #1\n    bne _02236610\n    bl ov74_022365AC\n    pop {r3, pc}\n    bl ov74_02236620\n    pop {r3, pc}\n    nop\n    _02236618: .word ov74_0223E2FC\n    _0223661C: .word 0x00001150"
    );
    #endif
}

void ov74_02236620(void) {
    /* Original at 0x02236620 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #3\n    bl ov74_02236168\n    ldr r0, _02236640 ; =ov74_02236644\n    bl WM_Reset\n    cmp r0, #2\n    beq _0223663A\n    bl ov74_022361B8\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _02236640: .word ov74_02236644"
    );
    #endif
}

void ov74_02236644(void) {
    /* Original at 0x02236644 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    beq _0223666C\n    mov r0, #9\n    bl ov74_02236168\n    ldrh r0, [r4, #2]\n    bl ov74_022361B8\n    ldr r0, _02236678 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _0223667C ; =0x0000117C\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _02236676\n    mov r0, #4\n    blx r1\n    pop {r4, pc}\n    mov r0, #1\n    bl ov74_02236168\n    bl ov74_022365AC\n    pop {r4, pc}\n    _02236678: .word ov74_0223E2FC\n    _0223667C: .word 0x0000117C"
    );
    #endif
}

void ov74_02236680(void) {
    /* Original at 0x02236680 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r2, #0x1f\n    mov r0, #0x1f\n    bic r2, r0\n    ldr r4, _022366DC ; =ov74_0223E2FC\n    ldr r3, _022366E0 ; =0x00001150\n    str r2, [r4]\n    mov r0, #0\n    str r0, [r2, r3]\n    add r2, r3, #0\n    ldr r5, [r4]\n    mov r6, #1\n    add r2, #8\n    strh r6, [r5, r2]\n    add r2, r3, #0\n    ldr r5, [r4]\n    add r2, #0x28\n    str r7, [r5, r2]\n    add r2, r3, #0\n    ldr r5, [r4]\n    add r2, #0xc\n    strh r0, [r5, r2]\n    add r2, r3, #0\n    ldr r5, [r4]\n    add r2, #0xe\n    strh r0, [r5, r2]\n    add r2, r3, #0\n    ldr r5, [r4]\n    add r2, #0x2c\n    str r1, [r5, r2]\n    add r2, r3, #0\n    ldr r5, [r4]\n    mov r1, #0x10\n    add r2, #0x26\n    strh r1, [r5, r2]\n    ldr r5, [r4]\n    ldr r2, _022366E4 ; =0x00001048\n    sub r1, #0x11\n    str r0, [r5, r2]\n    ldr r0, [r4]\n    add r3, #0x1c\n    str r1, [r0, r3]\n    bl ov74_022364F0\n    pop {r3, r4, r5, r6, r7, pc}\n    _022366DC: .word ov74_0223E2FC\n    _022366E0: .word 0x00001150\n    _022366E4: .word 0x00001048"
    );
    #endif
}

void ov74_022366E8(void) {
    /* Original at 0x022366E8 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r3, _02236758 ; =ov74_0223E2FC\n    ldr r1, _0223675C ; =0x00001048\n    ldr r2, [r3]\n    mov r4, #0\n    str r4, [r2, r1]\n    ldr r1, [r3]\n    ldr r2, _02236760 ; =0x00001158\n    mov r4, #3\n    strh r4, [r1, r2]\n    ldrh r5, [r0]\n    ldr r4, [r3]\n    add r1, r2, #2\n    strh r5, [r4, r1]\n    ldr r4, [r0, #4]\n    add r0, r2, #0\n    ldr r1, [r3]\n    add r0, #8\n    str r4, [r1, r0]\n    ldr r4, [r3]\n    add r2, #8\n    ldr r0, [r4, r2]\n    mov r1, #0x68\n    sub r0, r0, #1\n    bl _u32_div_f\n    ldr r2, _02236764 ; =0x0000115C\n    add r0, r0, #1\n    strh r0, [r4, r2]\n    ldr r4, _02236758 ; =ov74_0223E2FC\n    mov r0, #0\n    ldr r3, [r4]\n    add r1, r2, #2\n    strh r0, [r3, r1]\n    add r1, r2, #0\n    ldr r3, [r4]\n    add r1, #8\n    str r0, [r3, r1]\n    ldr r1, [r4]\n    ldrh r2, [r1, r2]\n    cmp r2, #0\n    ble _02236754\n    mov r2, #0x46\n    lsl r2, r2, #6\n    add r3, r2, #0\n    add r6, r0, #0\n    sub r3, #0x24\n    add r1, r1, r0\n    strb r6, [r1, r2]\n    ldr r1, [r4]\n    add r0, r0, #1\n    ldrh r5, [r1, r3]\n    cmp r0, r5\n    blt _02236746\n    pop {r4, r5, r6, pc}\n    nop\n    _02236758: .word ov74_0223E2FC\n    _0223675C: .word 0x00001048\n    _02236760: .word 0x00001158\n    _02236764: .word 0x0000115C"
    );
    #endif
}

void ov74_02236768(void) {
    /* Original at 0x02236768 */
    /* Requires manual decompilation - 145 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _02236884 ; =ov74_0223E2FC\n    ldrh r1, [r4]\n    ldr r3, [r0]\n    ldr r0, _02236888 ; =0x0000115A\n    ldrh r2, [r3, r0]\n    cmp r2, r1\n    bne _02236784\n    add r0, r0, #6\n    ldr r1, [r3, r0]\n    ldr r0, [r4, #4]\n    cmp r1, r0\n    beq _022367B0\n    ldr r0, _02236884 ; =ov74_0223E2FC\n    ldr r3, [r0]\n    ldr r0, _0223688C ; =0x00001164\n    ldr r2, [r3, r0]\n    add r1, r2, #1\n    str r1, [r3, r0]\n    cmp r2, #0x10\n    blo _022367AC\n    add r0, r4, #0\n    bl ov74_022366E8\n    ldr r0, _02236884 ; =ov74_0223E2FC\n    ldr r1, [r0]\n    ldr r0, _02236890 ; =0x0000117C\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _022367B0\n    mov r0, #5\n    blx r1\n    b _022367B0\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrh r3, [r4, #2]\n    ldr r0, _02236894 ; =0x0000FFFF\n    cmp r3, r0\n    bne _022367D8\n    ldr r1, _02236884 ; =ov74_0223E2FC\n    add r4, #8\n    ldr r2, [r1]\n    mov r1, #0xfe\n    lsl r1, r1, #4\n    add r1, r2, r1\n    add r0, r4, #0\n    mov r2, #0x68\n    bl MIi_CpuCopy32\n    ldr r0, _02236884 ; =ov74_0223E2FC\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _02236898 ; =0x00001048\n    str r2, [r1, r0]\n    b _02236880\n    ldr r1, _02236884 ; =ov74_0223E2FC\n    ldr r0, _0223689C ; =0x00001168\n    ldr r2, [r1]\n    str r3, [r2, r0]\n    ldr r3, [r1]\n    add r1, r0, #0\n    sub r1, #0xc\n    ldrh r2, [r4, #2]\n    ldrh r1, [r3, r1]\n    cmp r2, r1\n    blo _02236800\n    add r0, #0x14\n    ldr r1, [r3, r0]\n    cmp r1, #0\n    beq _022367FA\n    mov r0, #4\n    blx r1\n    mov r0, #9\n    bl ov74_02236168\n    ldr r0, _02236884 ; =ov74_0223E2FC\n    mov r2, #0x46\n    ldr r1, [r0]\n    lsl r2, r2, #6\n    ldrh r3, [r4, #2]\n    add r5, r1, r2\n    ldrb r1, [r5, r3]\n    cmp r1, #0\n    bne _02236880\n    mov r1, #1\n    strb r1, [r5, r3]\n    ldr r5, [r0]\n    add r0, r2, #0\n    sub r0, #0x24\n    ldrh r0, [r5, r0]\n    ldrh r1, [r4, #2]\n    sub r0, r0, #1\n    cmp r1, r0\n    bne _02236844\n    add r3, r1, #0\n    add r1, r2, #0\n    sub r1, #8\n    sub r2, #0x20\n    mov r0, #0x68\n    ldr r1, [r5, r1]\n    mul r3, r0\n    ldr r2, [r5, r2]\n    add r4, #8\n    add r0, r4, #0\n    add r1, r1, r3\n    sub r2, r2, r3\n    bl MIi_CpuCopy32\n    b _02236858\n    add r4, #8\n    sub r2, #8\n    add r0, r4, #0\n    ldr r4, [r5, r2]\n    mov r2, #0x68\n    add r3, r1, #0\n    mul r3, r2\n    add r1, r4, r3\n    bl MIi_CpuCopy32\n    ldr r1, _02236884 ; =ov74_0223E2FC\n    ldr r0, _022368A0 ; =0x0000115E\n    ldr r3, [r1]\n    ldrh r2, [r3, r0]\n    add r2, r2, #1\n    strh r2, [r3, r0]\n    ldr r3, [r1]\n    sub r1, r0, #2\n    ldrh r2, [r3, r0]\n    ldrh r1, [r3, r1]\n    cmp r2, r1\n    bne _02236880\n    add r0, #0x1e\n    ldr r1, [r3, r0]\n    cmp r1, #0\n    beq _0223687C\n    mov r0, #2\n    blx r1\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _02236884: .word ov74_0223E2FC\n    _02236888: .word 0x0000115A\n    _0223688C: .word 0x00001164\n    _02236890: .word 0x0000117C\n    _02236894: .word 0x0000FFFF\n    _02236898: .word 0x00001048\n    _0223689C: .word 0x00001168\n    _022368A0: .word 0x0000115E"
    );
    #endif
}

void ov74_022368A4(void) {
    /* Original at 0x022368A4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r2, #0\n    add r3, r2, #0\n    lsr r1, r1, #1\n    beq _022368CC\n    lsl r4, r3, #1\n    ldrh r4, [r0, r4]\n    add r3, r3, #1\n    lsl r3, r3, #0x10\n    add r2, r2, r4\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    lsl r4, r2, #1\n    asr r2, r2, #0xf\n    orr r2, r4\n    lsl r2, r2, #0x10\n    lsr r3, r3, #0x10\n    lsr r2, r2, #0x10\n    cmp r3, r1\n    blo _022368AE\n    add r0, r2, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov74_022368D4(void) {
    /* Original at 0x022368D4 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r0, _02236968 ; =ov74_0223E2FC\n    add r1, sp, #0\n    ldr r4, [r0]\n    ldr r0, _0223696C ; =0x00001170\n    add r3, r4, r0\n    ldrh r2, [r3]\n    sub r0, #0x16\n    strh r2, [r1]\n    ldrh r2, [r3, #2]\n    strh r2, [r1, #6]\n    ldrh r2, [r3, #4]\n    add r3, sp, #0\n    strh r2, [r1, #4]\n    ldrh r0, [r4, r0]\n    ldr r2, _02236970 ; =0x00003FA2\n    strh r0, [r1, #2]\n    mov r1, #0\n    ldrh r0, [r3]\n    add r1, r1, #1\n    eor r0, r2\n    strh r0, [r3]\n    ldrh r2, [r3]\n    add r3, r3, #2\n    cmp r1, #4\n    blt _022368FA\n    ldr r0, _02236968 ; =ov74_0223E2FC\n    mov r2, #8\n    ldr r1, [r0]\n    ldr r0, _02236974 ; =0x0000104C\n    add r0, r1, r0\n    add r1, sp, #0\n    bl CRYPTO_RC4Init\n    ldr r0, _02236968 ; =ov74_0223E2FC\n    ldr r2, _02236978 ; =0x00001178\n    ldr r3, [r0]\n    ldr r0, _02236974 ; =0x0000104C\n    ldr r1, [r3, r2]\n    sub r2, #0x18\n    ldr r2, [r3, r2]\n    add r0, r3, r0\n    add r3, r1, #0\n    bl CRYPTO_RC4Encrypt\n    ldr r1, _02236968 ; =ov74_0223E2FC\n    ldr r2, _02236974 ; =0x0000104C\n    ldr r1, [r1]\n    mov r0, #0\n    add r1, r1, r2\n    lsr r2, r2, #4\n    bl MIi_CpuClear32\n    ldr r0, _02236968 ; =ov74_0223E2FC\n    ldr r1, _02236978 ; =0x00001178\n    ldr r2, [r0]\n    ldr r0, [r2, r1]\n    sub r1, #0x18\n    ldr r1, [r2, r1]\n    bl ov74_022368A4\n    ldr r1, _02236968 ; =ov74_0223E2FC\n    ldr r2, [r1]\n    ldr r1, _0223697C ; =0x0000115A\n    ldrh r1, [r2, r1]\n    cmp r1, r0\n    bne _02236962\n    add sp, #8\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r4, pc}\n    _02236968: .word ov74_0223E2FC\n    _0223696C: .word 0x00001170\n    _02236970: .word 0x00003FA2\n    _02236974: .word 0x0000104C\n    _02236978: .word 0x00001178\n    _0223697C: .word 0x0000115A"
    );
    #endif
}

void ov74_02236980(void) {
    /* Original at 0x02236980 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02236984 ; =0x000016A0\n    bx lr\n    _02236984: .word 0x000016A0"
    );
    #endif
}

void ov74_02236988(void) {
    /* Original at 0x02236988 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _022369A0 ; =ov74_0223E2FC\n    ldr r2, [r0]\n    ldr r0, _022369A4 ; =0x00001048\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    beq _0223699A\n    sub r0, #0x68\n    add r0, r2, r0\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _022369A0: .word ov74_0223E2FC\n    _022369A4: .word 0x00001048"
    );
    #endif
}

void ov74_022369A8(void) {
    /* Original at 0x022369A8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r1, #0x24\n    mov r0, #0x1f\n    bic r1, r0\n    add r1, #0x20\n    mov r0, #0x54\n    bl Heap_Alloc\n    add r2, r0, #0\n    add r2, #0x20\n    mov r1, #0x1f\n    bic r2, r1\n    sub r1, r2, #4\n    str r0, [r1]\n    add r0, r2, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov74_022369C8(void) {
    Heap_Free();
}

void ov74_022369D8(void) {
    /* Original at 0x022369D8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r0, sp, #0\n    add r1, sp, #4\n    bl ov00_021EC11C\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    neg r0, r0\n    bl ov00_021E6A70\n    ldr r2, _02236A20 ; =0x0000266C\n    str r0, [r4, r2]\n    ldr r0, [sp]\n    neg r1, r0\n    add r0, r2, #4\n    str r1, [r4, r0]\n    add r0, r2, #0\n    ldr r1, [sp, #4]\n    add r0, #8\n    str r1, [r4, r0]\n    sub r0, r2, #4\n    mov r1, #1\n    str r1, [r4, r0]\n    ldr r0, _02236A24 ; =ov74_0223E304\n    add r2, #0x10\n    str r1, [r0, #0x10]\n    mov r1, #0\n    add r0, r4, #0\n    str r1, [r4, r2]\n    bl ov74_02229E60\n    ldr r0, _02236A28 ; =0x0000100F\n    add sp, #8\n    pop {r4, pc}\n    _02236A20: .word 0x0000266C\n    _02236A24: .word ov74_0223E304\n    _02236A28: .word 0x0000100F"
    );
    #endif
}

void ov74_02236A2C(void) {
    /* Original at 0x02236A2C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x3c\n    bl ov00_021EC724\n    cmp r0, #4\n    beq _02236A40\n    cmp r0, #7\n    beq _02236A4C\n    cmp r0, #8\n    b _02236A4C\n    add r0, sp, #0\n    bl ov00_021EC9E0\n    add sp, #0x3c\n    mov r0, #1\n    pop {pc}\n    mov r0, #0\n    add sp, #0x3c\n    pop {pc}"
    );
    #endif
}

void ov74_02236A54(void) {
    /* Original at 0x02236A54 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _02236A6C ; =ov74_0223E304\n    mov r4, #0\n    str r4, [r3]\n    str r4, [r3, #0xc]\n    ldr r3, _02236A70 ; =0x00001650\n    str r2, [r0, r3]\n    ldr r0, _02236A74 ; =0x00001012\n    str r0, [r1]\n    pop {r3, r4}\n    bx lr\n    nop\n    _02236A6C: .word ov74_0223E304\n    _02236A70: .word 0x00001650\n    _02236A74: .word 0x00001012"
    );
    #endif
}

void ov74_02236A78(void) {
    /* Original at 0x02236A78 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    ldr r2, _02236A9C ; =ov74_0223E304\n    mov r5, #0\n    str r5, [r2, #4]\n    str r1, [r2, #8]\n    ldr r1, _02236AA0 ; =0x00001650\n    str r3, [r0, r1]\n    ldr r0, _02236AA4 ; =0x00001013\n    str r0, [r4]\n    ldr r0, _02236AA8 ; =ov74_02236ABC\n    bl ov00_021ED308\n    cmp r0, #0\n    bne _02236A9A\n    ldr r0, [sp, #0x10]\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    _02236A9C: .word ov74_0223E304\n    _02236AA0: .word 0x00001650\n    _02236AA4: .word 0x00001013\n    _02236AA8: .word ov74_02236ABC"
    );
    #endif
}

void ov74_02236AAC(void) {
    /* Original at 0x02236AAC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02236AB8 ; =ov74_0223E304\n    mov r2, #1\n    str r2, [r0]\n    str r1, [r0, #0xc]\n    bx lr\n    nop\n    _02236AB8: .word ov74_0223E304"
    );
    #endif
}

void ov74_02236ABC(void) {
    /* Original at 0x02236ABC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02236AC4 ; =ov74_0223E304\n    mov r1, #1\n    str r1, [r0, #4]\n    bx lr\n    _02236AC4: .word ov74_0223E304"
    );
    #endif
}

void ov74_02236AC8(void) {
    sub_0203A914();
    sub_020394F4();
    UnloadOVY38();
    UnloadDwcOverlay();
    sub_02034DE0();
}

void ov74_02236AE0(void) {
    /* Original at 0x02236AE0 */
    /* Requires manual decompilation - 442 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, _02236DE8 ; =0x0000267C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02236B00\n    blx r0\n    cmp r0, #1\n    bne _02236B00\n    add r0, r4, #0\n    bl ov74_022369D8\n    str r0, [r5]\n    mov r3, #1\n    ldr r0, [r5]\n    lsl r3, r3, #0xc\n    sub r0, r0, r3\n    cmp r0, #0x13\n    bls _02236B0E\n    b _02236F0A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02236B1A: ; jump table\n    bl sub_02034D8C\n    bl LoadDwcOverlay\n    bl LoadOVY38\n    mov r0, #3\n    bl sub_02039FD8\n    ldr r0, _02236DEC ; =0x00001001\n    str r0, [r5]\n    b _02236F0A\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _02236C3E\n    ldr r0, _02236DF0 ; =ov74_022369A8\n    ldr r1, _02236DF4 ; =ov74_022369C8\n    bl ov00_021EC294\n    ldr r0, [r4, #4]\n    bl sub_020394A0\n    ldr r0, _02236DF8 ; =0x00001002\n    str r0, [r5]\n    b _02236F0A\n    ldr r0, _02236DFC ; =0x000015E8\n    mov r1, #2\n    add r0, r4, r0\n    mov r2, #1\n    mov r3, #0x14\n    bl ov00_021EC3F0\n    mov r0, #2\n    bl ov00_021EC454\n    bl ov00_021EC4A4\n    bl sub_0203A880\n    ldr r0, _02236E00 ; =0x00001003\n    mov r1, #0\n    str r0, [r5]\n    ldr r0, _02236E04 ; =0x00002678\n    str r1, [r4, r0]\n    b _02236F0A\n    bl ov00_021EC60C\n    bl ov00_021EC5B4\n    cmp r0, #0\n    beq _02236BD6\n    add r0, r4, #0\n    bl ov74_02236A2C\n    cmp r0, #1\n    bne _02236BCE\n    ldr r0, _02236E04 ; =0x00002678\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _02236BC8\n    ldr r0, _02236E08 ; =ov74_0223E304\n    mov r1, #3\n    str r1, [r0, #8]\n    ldr r0, _02236E0C ; =0x0000100D\n    str r0, [r5]\n    b _02236BD6\n    ldr r0, _02236E10 ; =0x00001004\n    str r0, [r5]\n    b _02236BD6\n    add r0, r4, #0\n    bl ov74_022369D8\n    str r0, [r5]\n    ldr r0, _02236E14 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _02236C3E\n    ldr r0, _02236E04 ; =0x00002678\n    mov r1, #1\n    str r1, [r4, r0]\n    b _02236F0A\n    bl ov00_021ECD04\n    cmp r0, #0\n    bne _02236BFA\n    add r0, r4, #0\n    bl ov74_022369D8\n    str r0, [r5]\n    b _02236F0A\n    ldr r0, _02236E18 ; =0x00001005\n    str r0, [r5]\n    b _02236F0A\n    bl ov00_021ECDC8\n    cmp r0, #3\n    bne _02236C14\n    ldr r0, _02236E1C ; =0x00001006\n    ldr r1, _02236E20 ; =ov00_021ECB40\n    str r0, [r5]\n    ldr r0, _02236DE8 ; =0x0000267C\n    str r1, [r4, r0]\n    b _02236C34\n    cmp r0, #4\n    bne _02236C26\n    add r0, r4, #0\n    bl ov74_022369D8\n    str r0, [r5]\n    bl ov00_021EC8D8\n    b _02236C34\n    cmp r0, #5\n    bne _02236C34\n    ldr r0, _02236E08 ; =ov74_0223E304\n    mov r1, #3\n    str r1, [r0, #8]\n    ldr r0, _02236E0C ; =0x0000100D\n    str r0, [r5]\n    ldr r0, _02236E14 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    bne _02236C40\n    b _02236F0A\n    bl ov00_021ECEC0\n    b _02236F0A\n    ldr r0, _02236E24 ; =ov74_02236AAC\n    ldr r1, _02236E28 ; =ov74_0223D038\n    ldr r2, _02236E2C ; =ov74_0223D040\n    bl ov00_021ED1F0\n    cmp r0, #0\n    bne _02236C5E\n    add r0, r4, #0\n    bl ov74_022369D8\n    str r0, [r5]\n    b _02236F0A\n    ldr r2, _02236E30 ; =0x00001007\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov74_02236A54\n    b _02236F0A\n    ldr r0, _02236E04 ; =0x00002678\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _02236C82\n    add r3, #0xc\n    add r0, r4, #0\n    mov r1, #3\n    add r2, r5, #0\n    str r3, [sp]\n    bl ov74_02236A78\n    b _02236F0A\n    ldr r0, _02236E34 ; =ov74_0223D054\n    add r1, r0, #0\n    add r2, r0, #0\n    bl ov00_021ED354\n    cmp r0, #0\n    bne _02236C9A\n    add r0, r4, #0\n    bl ov74_022369D8\n    str r0, [r5]\n    b _02236F0A\n    ldr r0, _02236E38 ; =0x00001008\n    str r0, [r5]\n    b _02236F0A\n    ldr r0, _02236E3C ; =0x00001654\n    add r0, r4, r0\n    bl ov00_021ED388\n    cmp r0, #0\n    bne _02236CB6\n    add r0, r4, #0\n    bl ov74_022369D8\n    str r0, [r5]\n    b _02236F0A\n    ldr r2, _02236E40 ; =0x00001009\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov74_02236A54\n    b _02236F0A\n    ldr r0, _02236E3C ; =0x00001654\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    beq _02236CDA\n    add r3, #0xd\n    add r0, r4, #0\n    mov r1, #2\n    add r2, r5, #0\n    str r3, [sp]\n    bl ov74_02236A78\n    b _02236F0A\n    ldr r0, _02236E44 ; =ov74_0223E318\n    mov r1, #0\n    mov r2, #0xa\n    bl ov00_021ED3AC\n    cmp r0, #0\n    bne _02236CF2\n    add r0, r4, #0\n    bl ov74_022369D8\n    str r0, [r5]\n    b _02236F0A\n    ldr r2, _02236E48 ; =0x0000100A\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov74_02236A54\n    b _02236F0A\n    ldr r1, _02236E4C ; =0x00001658\n    ldr r0, _02236E44 ; =ov74_0223E318\n    add r1, r4, r1\n    add r2, r3, #0\n    bl ov00_021ED3F4\n    cmp r0, #0\n    bne _02236D18\n    add r0, r4, #0\n    bl ov74_022369D8\n    str r0, [r5]\n    b _02236F0A\n    ldr r0, _02236E50 ; =0x0000100B\n    mov r1, #0\n    str r0, [r5]\n    ldr r0, _02236E54 ; =0x00002664\n    str r1, [r4, r0]\n    b _02236F0A\n    ldr r0, _02236E08 ; =ov74_0223E304\n    ldr r1, [r0]\n    cmp r1, #0\n    bne _02236D72\n    ldr r0, _02236E14 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _02236D46\n    add r3, #0xc\n    add r0, r4, #0\n    mov r1, #3\n    add r2, r5, #0\n    str r3, [sp]\n    bl ov74_02236A78\n    b _02236F0A\n    ldr r1, _02236E58 ; =0x0000265C\n    add r0, r4, r1\n    add r1, r1, #4\n    add r1, r4, r1\n    bl ov00_021ED444\n    cmp r0, #1\n    bne _02236DD0\n    ldr r1, _02236E58 ; =0x0000265C\n    mov r0, #0x64\n    ldr r2, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mul r0, r2\n    bl _u32_div_f\n    ldr r1, _02236E54 ; =0x00002664\n    ldr r2, [r4, r1]\n    cmp r2, r0\n    beq _02236DD0\n    str r0, [r4, r1]\n    b _02236F0A\n    ldr r0, [r0, #0xc]\n    cmp r0, #0\n    beq _02236D82\n    add r0, r4, #0\n    bl ov74_022369D8\n    str r0, [r5]\n    b _02236F0A\n    ldr r0, _02236E04 ; =0x00002678\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _02236D9A\n    add r3, #0xd\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r5, #0\n    str r3, [sp]\n    bl ov74_02236A78\n    b _02236F0A\n    add r3, #0xd\n    add r0, r4, #0\n    mov r1, #3\n    add r2, r5, #0\n    str r3, [sp]\n    bl ov74_02236A78\n    b _02236F0A\n    bl ov00_021ED428\n    cmp r0, #0\n    bne _02236DB8\n    ldr r0, _02236E0C ; =0x0000100D\n    str r0, [r5]\n    b _02236F0A\n    ldr r0, _02236DE8 ; =0x0000267C\n    mov r1, #0\n    str r1, [r4, r0]\n    bl ov74_02236AC8\n    ldr r0, _02236E08 ; =ov74_0223E304\n    ldr r0, [r0, #8]\n    pop {r3, r4, r5, pc}\n    bl ov00_021EC938\n    cmp r0, #1\n    beq _02236DD2\n    b _02236F0A\n    ldr r0, _02236DE8 ; =0x0000267C\n    mov r1, #0\n    str r1, [r4, r0]\n    bl ov74_02236AC8\n    ldr r0, _02236E08 ; =ov74_0223E304\n    ldr r0, [r0, #8]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02236E08 ; =ov74_0223E304\n    b _02236E5C\n    nop\n    _02236DE8: .word 0x0000267C\n    _02236DEC: .word 0x00001001\n    _02236DF0: .word ov74_022369A8\n    _02236DF4: .word ov74_022369C8\n    _02236DF8: .word 0x00001002\n    _02236DFC: .word 0x000015E8\n    _02236E00: .word 0x00001003\n    _02236E04: .word 0x00002678\n    _02236E08: .word ov74_0223E304\n    _02236E0C: .word 0x0000100D\n    _02236E10: .word 0x00001004\n    _02236E14: .word gSystem\n    _02236E18: .word 0x00001005\n    _02236E1C: .word 0x00001006\n    _02236E20: .word ov00_021ECB40\n    _02236E24: .word ov74_02236AAC\n    _02236E28: .word ov74_0223D038\n    _02236E2C: .word ov74_0223D040\n    _02236E30: .word 0x00001007\n    _02236E34: .word ov74_0223D054\n    _02236E38: .word 0x00001008\n    _02236E3C: .word 0x00001654\n    _02236E40: .word 0x00001009\n    _02236E44: .word ov74_0223E318\n    _02236E48: .word 0x0000100A\n    _02236E4C: .word 0x00001658\n    _02236E50: .word 0x0000100B\n    _02236E54: .word 0x00002664\n    _02236E58: .word 0x0000265C\n    ldr r0, [r0, #0x10]\n    cmp r0, #1\n    bne _02236F0A\n    add r0, r4, #0\n    bl ov74_0222ACD8\n    ldr r0, _02236F10 ; =0x00002674\n    ldr r0, [r4, r0]\n    sub r0, r0, #5\n    cmp r0, #1\n    bhi _02236E84\n    ldr r3, _02236F14 ; =0x00001010\n    add r0, r4, #0\n    str r3, [sp]\n    mov r1, #3\n    add r2, r5, #0\n    add r3, r3, #1\n    bl ov74_02236A78\n    b _02236F0A\n    ldr r0, _02236F18 ; =0x00001011\n    str r0, [r5]\n    b _02236F0A\n    bl ov00_021EC8D8\n    ldr r0, _02236F14 ; =0x00001010\n    str r0, [r5]\n    b _02236F0A\n    ldr r0, _02236F1C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _02236F0A\n    ldr r0, _02236F20 ; =0x0000267C\n    mov r1, #0\n    str r1, [r4, r0]\n    bl ov00_021EC210\n    bl ov74_02236AC8\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    ldr r0, _02236F24 ; =ov74_0223E304\n    ldr r1, [r0]\n    cmp r1, #1\n    bne _02236ED4\n    mov r1, #0\n    str r1, [r0]\n    ldr r0, [r0, #0xc]\n    cmp r0, #0\n    beq _02236ECC\n    add r0, r4, #0\n    bl ov74_022369D8\n    str r0, [r5]\n    b _02236F0A\n    ldr r0, _02236F28 ; =0x00001650\n    ldr r0, [r4, r0]\n    str r0, [r5]\n    b _02236F0A\n    ldr r0, _02236F1C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _02236F0A\n    ldr r0, _02236F2C ; =0x00002678\n    mov r1, #1\n    str r1, [r4, r0]\n    b _02236F0A\n    ldr r0, _02236F24 ; =ov74_0223E304\n    ldr r1, [r0, #4]\n    cmp r1, #1\n    bne _02236EFA\n    mov r1, #0\n    str r1, [r0, #4]\n    ldr r0, _02236F28 ; =0x00001650\n    ldr r0, [r4, r0]\n    str r0, [r5]\n    b _02236F0A\n    ldr r0, _02236F1C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _02236F0A\n    ldr r0, _02236F2C ; =0x00002678\n    mov r1, #1\n    str r1, [r4, r0]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02236F10: .word 0x00002674\n    _02236F14: .word 0x00001010\n    _02236F18: .word 0x00001011\n    _02236F1C: .word gSystem\n    _02236F20: .word 0x0000267C\n    _02236F24: .word ov74_0223E304\n    _02236F28: .word 0x00001650\n    _02236F2C: .word 0x00002678"
    );
    #endif
}

void ov74_02236F30(void) {
    /* Original at 0x02236F30 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #1\n    bne _02236F38\n    mov r0, #1\n    b _02236F3A\n    ldr r0, _02236F40 ; =0x000001DE\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr\n    _02236F40: .word 0x000001DE"
    );
    #endif
}

void ov74_02236F44(void) {
    /* Original at 0x02236F44 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #7\n    bhi _02236F64\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02236F54: ; jump table\n    mov r0, #0xea\n    bx lr\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    bx lr\n    ldr r0, _02236F78 ; =0x000001B7\n    bx lr\n    ldr r0, _02236F7C ; =0x000001B6\n    bx lr\n    nop\n    _02236F78: .word 0x000001B7\n    _02236F7C: .word 0x000001B6"
    );
    #endif
}

void ov74_02236F80(void) {
    /* Original at 0x02236F80 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #7\n    bhi _02236FA0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02236F90: ; jump table\n    mov r0, #0xeb\n    bx lr\n    ldr r0, _02236FB4 ; =0x000001B5\n    bx lr\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    bx lr\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    bx lr\n    _02236FB4: .word 0x000001B5"
    );
    #endif
}

void ConvertRSStringToDPStringInternational(void) {
    /* Original at 0x02236FB8 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r3, #0\n    str r0, [sp]\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    cmp r5, #1\n    beq _02236FCC\n    mov r2, #1\n    b _02236FCE\n    mov r2, #0\n    ldr r0, [sp, #8]\n    mov r6, #0\n    sub r0, r0, #1\n    str r0, [sp, #0xc]\n    beq _02237056\n    ldr r1, _02237064 ; =_0223B760\n    lsl r0, r2, #1\n    ldr r4, [sp, #4]\n    add r7, r1, r0\n    ldr r0, [sp]\n    ldrb r0, [r0, r6]\n    cmp r0, #0xff\n    beq _02237056\n    cmp r0, #0xf7\n    blo _0223701A\n    ldr r0, [sp, #8]\n    sub r3, r0, #1\n    cmp r3, #0xa\n    blo _02236FF6\n    mov r3, #0xa\n    mov r1, #0\n    cmp r3, #0\n    ble _0223700C\n    mov r0, #0x6b\n    ldr r2, [sp, #4]\n    lsl r0, r0, #2\n    add r1, r1, #1\n    strh r0, [r2]\n    add r2, r2, #2\n    cmp r1, r3\n    blt _02237002\n    ldr r0, [sp, #4]\n    ldr r2, _02237068 ; =0x0000FFFF\n    lsl r1, r1, #1\n    strh r2, [r0, r1]\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r0, #2\n    ldrh r0, [r7, r0]\n    cmp r0, #1\n    beq _0223702C\n    cmp r0, #0xea\n    beq _02237036\n    cmp r0, #0xeb\n    beq _02237040\n    b _0223704A\n    add r0, r5, #0\n    bl ov74_02236F30\n    strh r0, [r4]\n    b _0223704C\n    add r0, r5, #0\n    bl ov74_02236F44\n    strh r0, [r4]\n    b _0223704C\n    add r0, r5, #0\n    bl ov74_02236F80\n    strh r0, [r4]\n    b _0223704C\n    strh r0, [r4]\n    ldr r0, [sp, #0xc]\n    add r6, r6, #1\n    add r4, r4, #2\n    cmp r6, r0\n    blo _02236FE0\n    ldr r2, _02237068 ; =0x0000FFFF\n    ldr r0, [sp, #4]\n    lsl r1, r6, #1\n    strh r2, [r0, r1]\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02237064: .word _0223B760\n    _02237068: .word 0x0000FFFF"
    );
    #endif
}
