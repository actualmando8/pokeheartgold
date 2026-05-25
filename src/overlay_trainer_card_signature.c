/* Decompiled from asm/overlay_trainer_card_signature.s */
#include "global.h"

void TrainerCardSignature_Init(void) {
    /* Original at 0x021E80C0 */
    /* Requires manual decompilation - 150 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r6, r0, #0\n    cmp r1, #0\n    beq _021E80D6\n    cmp r1, #1\n    bne _021E80D4\n    b _021E8216\n    b _021E8224\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021E822C ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _021E8230 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r0, #3\n    mov r1, #0x27\n    lsl r2, r2, #6\n    bl Heap_Create\n    ldr r1, _021E8234 ; =0x00005CB0\n    add r0, r6, #0\n    mov r2, #0x27\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _021E8234 ; =0x00005CB0\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #0x27\n    bl BgConfig_Alloc\n    str r0, [r4]\n    mov r0, #0x5b\n    mov r1, #0x27\n    bl NARC_New\n    add r7, r0, #0\n    mov r0, #0x27\n    bl MessageFormat_New\n    str r0, [r4, #0x10]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xfc\n    mov r3, #0x27\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x14]\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #4\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    bl ov52_021E83A4\n    ldr r0, [r4]\n    bl ov52_021E83C4\n    mov r0, #0x10\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x27\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    bl Save_TrainerCard_Get\n    bl TrainerCard_GetSignature\n    ldr r1, _021E8238 ; =0x00005B98\n    str r0, [r4, r1]\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    bl Save_GameStats_Get\n    str r0, [r4, #8]\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    bl Save_PlayerData_GetOptionsAddr\n    str r0, [r4, #0xc]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov52_021E85DC\n    bl sub_020210BC\n    mov r0, #1\n    bl sub_02021148\n    ldr r0, _021E823C ; =ov52_021E837C\n    ldr r1, [r4]\n    bl Main_SetVBlankIntrCB\n    mov r0, #2\n    mov r1, #0x27\n    bl FontID_Alloc\n    add r0, r4, #0\n    bl ov52_021E84CC\n    bl ov52_021E86DC\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov52_021E870C\n    add r0, r4, #0\n    bl ov52_021E888C\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov52_021E89D4\n    mov r1, #0\n    mov r0, #0x38\n    add r2, r1, #0\n    bl Sound_SetSceneAndPlayBGM\n    ldr r2, _021E8240 ; =0x04000304\n    ldr r0, _021E8244 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    add r0, r7, #0\n    bl NARC_Delete\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _021E8224\n    bl OverlayManager_GetData\n    mov r0, #0\n    str r0, [r5]\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E822C: .word 0xFFFFE0FF\n    _021E8230: .word 0x04001000\n    _021E8234: .word 0x00005CB0\n    _021E8238: .word 0x00005B98\n    _021E823C: .word ov52_021E837C\n    _021E8240: .word 0x04000304\n    _021E8244: .word 0xFFFF7FFF"
    );
    #endif
}

void TrainerCardSignature_Main(void) {
    /* Original at 0x021E8248 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #0\n    beq _021E8262\n    cmp r1, #1\n    beq _021E8270\n    cmp r1, #2\n    beq _021E828E\n    b _021E829A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E829A\n    mov r0, #1\n    str r0, [r5]\n    b _021E829A\n    mov r2, #0xc3\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    lsl r3, r2, #2\n    ldr r2, _021E82A4 ; =ov52_021E96C0\n    ldr r2, [r2, r3]\n    cmp r2, #0\n    beq _021E8284\n    blx r2\n    str r0, [r5]\n    ldr r0, _021E82A8 ; =0x00004318\n    add r0, r4, r0\n    bl ov52_021E921C\n    b _021E829A\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E829A\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x3c]\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _021E82A4: .word ov52_021E96C0\n    _021E82A8: .word 0x00004318"
    );
    #endif
}

void TrainerCardSignature_Exit(void) {
    /* Original at 0x021E82AC */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    bl OverlayManager_GetData\n    add r6, r0, #0\n    ldr r0, _021E8374 ; =0x00005B98\n    mov r1, #0x2d\n    lsl r1, r1, #4\n    ldr r0, [r6, r0]\n    ldr r1, [r6, r1]\n    bl ov52_021E9300\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x5e\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    mov r0, #0x5f\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200B0A8\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200B0A8\n    mov r7, #0x5a\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021E82FC\n    ldr r0, [r6, #0x3c]\n    bl SpriteList_Delete\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    add r0, r6, #0\n    bl ov52_021E8B94\n    mov r0, #2\n    bl FontID_Release\n    ldr r0, [r6]\n    bl ov52_021E85A0\n    bl sub_02021238\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    ldr r0, [r6, #0x14]\n    bl DestroyMsgData\n    ldr r0, [r6, #0x10]\n    bl MessageFormat_Delete\n    add r0, r6, #0\n    bl ov52_021E8568\n    ldr r0, [sp]\n    bl OverlayManager_FreeData\n    ldr r2, _021E8378 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x27\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E8374: .word 0x00005B98\n    _021E8378: .word 0x04000304"
    );
    #endif
}

void ov52_021E837C(void) {
    /* Original at 0x021E837C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    add r0, r4, #0\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _021E839C ; =0x027E0000\n    ldr r1, _021E83A0 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    _021E839C: .word 0x027E0000\n    _021E83A0: .word 0x00003FF8"
    );
    #endif
}

void ov52_021E83A4(void) {
    GfGfx_SetBanks(5);
}

void ov52_021E83C4(void) {
    /* Original at 0x021E83C4 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x9c\n    ldr r5, _021E84B4 ; =ov52_021E94CC\n    add r3, sp, #0x8c\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _021E84B8 ; =ov52_021E9524\n    add r3, sp, #0x70\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E84BC ; =ov52_021E9540\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E84C0 ; =ov52_021E955C\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _021E84C4 ; =ov52_021E94EC\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E84C8 ; =ov52_021E9508\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x27\n    bl BG_ClearCharDataRange\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x27\n    bl BG_ClearCharDataRange\n    add sp, #0x9c\n    pop {r4, r5, pc}\n    nop\n    _021E84B4: .word ov52_021E94CC\n    _021E84B8: .word ov52_021E9524\n    _021E84BC: .word ov52_021E9540\n    _021E84C0: .word ov52_021E955C\n    _021E84C4: .word ov52_021E94EC\n    _021E84C8: .word ov52_021E9508"
    );
    #endif
}

void ov52_021E84CC(void) {
    /* Original at 0x021E84CC */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, _021E8558 ; =0x0000433D\n    mov r6, #0\n    add r5, r7, r0\n    mov r0, #0xf0\n    add r4, r7, #0\n    str r0, [sp]\n    mov r0, #8\n    mov r1, #0x27\n    bl String_New\n    str r0, [r4, #0x18]\n    ldrb r1, [r5]\n    ldr r0, [sp]\n    add r6, r6, #1\n    bic r1, r0\n    strb r1, [r5]\n    ldr r0, _021E855C ; =0x00004384\n    mov r1, #0\n    strh r1, [r4, r0]\n    add r4, r4, #4\n    add r5, #0x11\n    cmp r6, #5\n    blt _021E84DC\n    mov r0, #0x14\n    mov r1, #0x27\n    bl String_New\n    str r0, [r7, #0x2c]\n    mov r0, #0x28\n    mov r1, #0x27\n    bl String_New\n    str r0, [r7, #0x30]\n    mov r0, #0x50\n    mov r1, #0x27\n    bl String_New\n    str r0, [r7, #0x34]\n    ldr r0, _021E8560 ; =0x0000431A\n    mov r1, #0\n    strb r1, [r7, r0]\n    mov r0, #0xc3\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r7, r0]\n    ldr r0, [r7, #0x14]\n    ldr r2, [r7, #0x2c]\n    mov r1, #msg_0252_00012 ; DONE\n    bl ReadMsgDataIntoString\n    ldr r0, [r7, #0x14]\n    ldr r2, [r7, #0x30]\n    mov r1, #msg_0252_00009 ; Sign your autograph!\n    bl ReadMsgDataIntoString\n    mov r0, #0x27\n    bl YesNoPrompt_Create\n    ldr r1, _021E8564 ; =0x00005C9C\n    mov r2, #5\n    str r0, [r7, r1]\n    add r1, r1, #4\n    mov r0, #0\n    add r1, r7, r1\n    bl MIi_CpuClearFast\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E8558: .word 0x0000433D\n    _021E855C: .word 0x00004384\n    _021E8560: .word 0x0000431A\n    _021E8564: .word 0x00005C9C"
    );
    #endif
}

void ov52_021E8568(void) {
    /* Original at 0x021E8568 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _021E859C ; =0x00005C9C\n    ldr r0, [r6, r0]\n    bl YesNoPrompt_Destroy\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x18]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #5\n    blt _021E8578\n    ldr r0, [r6, #0x34]\n    bl String_Delete\n    ldr r0, [r6, #0x30]\n    bl String_Delete\n    ldr r0, [r6, #0x2c]\n    bl String_Delete\n    pop {r4, r5, r6, pc}\n    nop\n    _021E859C: .word 0x00005C9C"
    );
    #endif
}

void ov52_021E85A0(void) {
    /* Original at 0x021E85A0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov52_021E85DC(void) {
    /* Original at 0x021E85DC */
    /* Requires manual decompilation - 116 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldr r4, [r6]\n    mov r0, #0x60\n    add r5, r1, #0\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0x27\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0x40\n    str r0, [sp]\n    mov r0, #0x27\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x27\n    bl LoadFontPal1\n    mov r1, #0x1a\n    mov r0, #4\n    lsl r1, r1, #4\n    mov r2, #0x27\n    bl LoadFontPal1\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x27\n    bl BG_ClearCharDataRange\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x27\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #3\n    add r2, r4, #0\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x27\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #5\n    add r2, r4, #0\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x27\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #4\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x27\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r0, [r6, #0xc]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x27\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xa\n    bl LoadUserFrameGfx2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x27\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov52_021E86DC(void) {
    /* Original at 0x021E86DC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _021E8708 ; =ov52_021E94DC\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl ObjCharTransfer_Init\n    mov r0, #0x14\n    mov r1, #0x27\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _021E8708: .word ov52_021E94DC"
    );
    #endif
}

void ov52_021E870C(void) {
    /* Original at 0x021E870C */
    /* Requires manual decompilation - 175 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r7, r1, #0\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r2, #0x27\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    add r1, r5, #0\n    mov r0, #0x32\n    add r1, #0x40\n    mov r2, #0x27\n    bl G2dRenderer_Init\n    str r0, [r5, #0x3c]\n    add r0, r5, #0\n    mov r2, #1\n    add r0, #0x40\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r6, #0\n    add r4, r5, #0\n    mov r0, #2\n    add r1, r6, #0\n    mov r2, #0x27\n    bl Create2DGfxResObjMan\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #4\n    blt _021E8750\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    mov r0, #0x27\n    str r0, [sp, #8]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    mov r2, #7\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x5e\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r3, #0\n    str r3, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x27\n    sub r1, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    bl AddPlttResObjFromOpenNarc\n    mov r1, #0x5f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x27\n    sub r1, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    mov r2, #8\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #6\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x27\n    sub r1, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    mov r2, #9\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x61\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x27\n    sub r1, #0x1c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    mov r2, #7\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r2, #1\n    str r2, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x27\n    sub r1, #0x1c\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x27\n    sub r1, #0x1c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    mov r2, #8\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x27\n    sub r1, #0x1c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    mov r2, #9\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x65\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0x1c\n    ldr r0, [r5, r1]\n    bl sub_0200ACF0\n    mov r0, #0x62\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200ACF0\n    mov r0, #0x5f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200AF94\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200AF94\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov52_021E888C(void) {
    /* Original at 0x021E888C */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x5c\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    sub r0, r1, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r2, #0x5a\n    str r1, [sp, #0x10]\n    lsl r2, r2, #2\n    ldr r0, [r4, r2]\n    add r3, r1, #0\n    str r0, [sp, #0x14]\n    add r0, r2, #4\n    ldr r0, [r4, r0]\n    str r0, [sp, #0x18]\n    add r0, r2, #0\n    add r0, #8\n    ldr r0, [r4, r0]\n    str r0, [sp, #0x1c]\n    add r0, r2, #0\n    add r0, #0xc\n    ldr r0, [r4, r0]\n    add r2, #0x30\n    str r0, [sp, #0x20]\n    str r1, [sp, #0x24]\n    add r0, r4, r2\n    add r2, r1, #0\n    str r1, [sp, #0x28]\n    bl CreateSpriteResourcesHeader\n    mov r1, #1\n    mov r3, #0x5a\n    str r1, [sp]\n    sub r0, r1, #2\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    lsl r3, r3, #2\n    ldr r2, [r4, r3]\n    str r2, [sp, #0x14]\n    add r2, r3, #4\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    add r2, #8\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x1c]\n    add r2, r3, #0\n    add r2, #0xc\n    ldr r2, [r4, r2]\n    add r3, #0x54\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r4, r3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r4, #0x3c]\n    mov r2, #0\n    str r0, [sp, #0x2c]\n    mov r0, #0x66\n    lsl r0, r0, #2\n    add r1, r4, r0\n    str r1, [sp, #0x30]\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r0, #0x24\n    str r2, [sp, #0x3c]\n    str r1, [sp, #0x40]\n    str r1, [sp, #0x44]\n    str r1, [sp, #0x48]\n    add r1, sp, #0x2c\n    strh r2, [r1, #0x20]\n    mov r1, #1\n    add r0, r4, r0\n    str r0, [sp, #0x30]\n    mov r0, #0xe\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x34]\n    mov r0, #0xaf\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x38]\n    str r1, [sp, #0x50]\n    str r1, [sp, #0x54]\n    mov r1, #0x27\n    add r0, sp, #0x2c\n    str r1, [sp, #0x58]\n    bl Sprite_CreateAffine\n    mov r1, #0x25\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetPaletteOverride\n    mov r0, #0x25\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl Sprite_SetPriority\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x5c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov52_021E8994(void) {
    /* Original at 0x021E8994 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r2, #0\n    mov r0, #2\n    mov r2, #0\n    add r6, r1, #0\n    add r7, r3, #0\n    bl FontID_String_GetWidth\n    add r3, r0, #0\n    str r4, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    add r1, r7, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldrb r4, [r5, #7]\n    add r0, r5, #0\n    add r2, r6, #0\n    lsl r4, r4, #3\n    sub r4, r4, r3\n    lsr r3, r4, #0x1f\n    add r3, r4, r3\n    asr r3, r3, #1\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [r5, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov52_021E89D4(void) {
    /* Original at 0x021E89D4 */
    /* Requires manual decompilation - 202 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    mov r1, #0xb5\n    str r0, [sp, #0x10]\n    lsl r1, r1, #2\n    ldr r0, [r5]\n    add r1, r5, r1\n    mov r2, #0\n    mov r3, #2\n    bl AddWindowParameterized\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #9\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #8\n    mov r1, #0xb1\n    lsl r1, r1, #2\n    str r0, [sp, #8]\n    mov r2, #1\n    str r2, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldr r0, [r5]\n    add r1, r5, r1\n    mov r3, #4\n    bl AddWindowParameterized\n    mov r0, #0xb1\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0xc1\n    mov r1, #0xb9\n    str r0, [sp, #0x10]\n    lsl r1, r1, #2\n    ldr r0, [r5]\n    add r1, r5, r1\n    mov r2, #1\n    mov r3, #0x1a\n    bl AddWindowParameterized\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _021E8B84 ; =0x000E0702\n    mov r2, #1\n    str r0, [sp]\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    ldr r1, [r5, #0x2c]\n    add r0, r5, r0\n    mov r3, #2\n    bl ov52_021E8994\n    mov r1, #2\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    mov r4, #0\n    ldr r0, _021E8B88 ; =0x00005B9C\n    str r4, [sp, #0x18]\n    add r7, r4, #0\n    add r6, r5, r0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #4\n    mov r2, #2\n    add r3, r4, #0\n    str r6, [sp, #4]\n    bl sub_02013A50\n    mov r1, #1\n    add r0, r6, #0\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    mov r2, #1\n    add r0, r6, #0\n    add r1, r7, #0\n    lsl r2, r2, #8\n    bl GX_LoadOBJ\n    mov r0, #1\n    lsl r0, r0, #8\n    add r7, r7, r0\n    ldr r0, [sp, #0x18]\n    add r4, r4, #4\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #2\n    blt _021E8A8A\n    mov r3, #2\n    str r3, [sp]\n    mov r0, #0x1c\n    str r0, [sp, #4]\n    mov r1, #0xbd\n    lsl r1, r1, #2\n    str r3, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0xd1\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r1, r5, r1\n    mov r2, #1\n    bl AddWindowParameterized\n    ldr r1, [r5, #0x30]\n    mov r0, #1\n    mov r2, #0\n    bl FontID_String_GetWidth\n    add r4, r0, #0\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r3, #0xe0\n    sub r4, r3, r4\n    lsr r3, r4, #0x1f\n    add r3, r4, r3\n    ldr r0, _021E8B8C ; =0x00010200\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    ldr r2, [r5, #0x30]\n    add r0, r5, r0\n    mov r1, #1\n    asr r3, r3, #1\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0\n    str r0, [sp, #0x14]\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    mov r7, #1\n    mov r6, #3\n    add r4, r5, r0\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r2, #4\n    mov r3, #5\n    bl AddWindowParameterized\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x14]\n    add r7, #0x14\n    add r0, r0, #1\n    add r6, r6, #4\n    add r4, #0x10\n    str r0, [sp, #0x14]\n    cmp r0, #5\n    blt _021E8B32\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r2, _021E8B90 ; =0x000E0D0F\n    add r0, r5, r0\n    mov r1, #0\n    add r3, r5, #0\n    bl ov52_021E925C\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E8B84: .word 0x000E0702\n    _021E8B88: .word 0x00005B9C\n    _021E8B8C: .word 0x00010200\n    _021E8B90: .word 0x000E0D0F"
    );
    #endif
}

void ov52_021E8B94(void) {
    /* Original at 0x021E8B94 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    mov r4, #0\n    add r5, r6, r0\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #5\n    blt _021E8BA0\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    add r0, r6, r0\n    bl RemoveWindow\n    mov r0, #0xb9\n    lsl r0, r0, #2\n    add r0, r6, r0\n    bl RemoveWindow\n    mov r0, #0xb1\n    lsl r0, r0, #2\n    add r0, r6, r0\n    bl RemoveWindow\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    add r0, r6, r0\n    bl RemoveWindow\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov52_021E8BD8(void) {
    /* Original at 0x021E8BD8 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov52_021E8BDC(void) {
    /* Original at 0x021E8BDC */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    add r4, r0, #0\n    ldr r0, _021E8CA4 ; =ov52_021E94BA\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _021E8C30\n    cmp r1, #0\n    bne _021E8C22\n    mov r0, #0xc3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _021E8C30\n    add r0, r4, #0\n    mov r1, #msg_0252_00010 ; Is this OK?\n    bl ov52_021E927C\n    mov r0, #0xc3\n    mov r1, #2\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    sub r0, #0xbc\n    add r0, r4, r0\n    mov r1, #1\n    bl ov52_021E8CDC\n    ldr r0, _021E8CA8 ; =0x000005DD\n    bl PlaySE\n    b _021E8C30\n    ldr r0, _021E8CAC ; =0x0000431A\n    strb r1, [r4, r0]\n    mov r0, #0x25\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov52_021E8CBC\n    ldr r0, _021E8CB0 ; =ov52_021E94B2\n    bl TouchscreenHitbox_FindRectAtTouchHeld\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _021E8C44\n    add r0, r4, #0\n    bl ov52_021E9364\n    add r0, sp, #0\n    mov r1, #4\n    mov r2, #1\n    bl sub_02021280\n    cmp r0, #1\n    bne _021E8CA0\n    add r7, sp, #0\n    ldrh r3, [r7]\n    mov r1, #0\n    cmp r3, #0\n    ble _021E8C78\n    ldr r5, _021E8CB4 ; =0x0000431C\n    add r2, sp, #0\n    add r6, r5, #0\n    add r6, #8\n    ldrh r3, [r2, #2]\n    add r0, r4, r1\n    add r1, r1, #1\n    strb r3, [r0, r5]\n    ldrh r3, [r2, #4]\n    add r2, #8\n    strb r3, [r0, r6]\n    ldrh r3, [r7]\n    cmp r1, r3\n    blt _021E8C64\n    ldr r0, _021E8CB8 ; =0x0000432C\n    mov r2, #0xf0\n    ldrb r1, [r4, r0]\n    bic r1, r2\n    lsl r2, r3, #0x18\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x18\n    orr r1, r2\n    strb r1, [r4, r0]\n    ldrb r3, [r4, r0]\n    mov r1, #0xf\n    bic r3, r1\n    add r1, r0, #0\n    sub r1, #0x12\n    ldrb r2, [r4, r1]\n    mov r1, #0xf\n    and r1, r2\n    orr r1, r3\n    strb r1, [r4, r0]\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    _021E8CA4: .word ov52_021E94BA\n    _021E8CA8: .word 0x000005DD\n    _021E8CAC: .word 0x0000431A\n    _021E8CB0: .word ov52_021E94B2\n    _021E8CB4: .word 0x0000431C\n    _021E8CB8: .word 0x0000432C"
    );
    #endif
}

void ov52_021E8CBC(void) {
    /* Original at 0x021E8CBC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _021E8CD8 ; =_021E94AC\n    cmp r1, #0\n    ldr r0, [r0]\n    bne _021E8CD0\n    ldrh r1, [r2, #4]\n    add r1, r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, pc}\n    ldrh r1, [r2, #4]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, pc}\n    _021E8CD8: .word _021E94AC"
    );
    #endif
}

void ov52_021E8CDC(void) {
    /* Original at 0x021E8CDC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #1\n    ldr r0, [r0]\n    bne _021E8CEC\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, pc}\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, pc}"
    );
    #endif
}

void ov52_021E8CF4(void) {
    /* Original at 0x021E8CF4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov52_021E8BDC\n    mov r0, #0x9d\n    lsl r0, r0, #2\n    ldr r2, _021E8D34 ; =0x000E0C0F\n    add r0, r5, r0\n    mov r1, #0\n    add r3, r5, #0\n    bl ov52_021E925C\n    add r0, r5, #0\n    bl ov52_021E9260\n    add r0, r5, #0\n    bl ov52_021E9218\n    ldr r2, _021E8D38 ; =0x0000432D\n    mov r0, #0xb1\n    lsl r0, r0, #2\n    add r1, r5, r2\n    add r2, #0x55\n    add r0, r5, r0\n    add r2, r5, r2\n    mov r3, #1\n    bl ov52_021E9158\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E8D34: .word 0x000E0C0F\n    _021E8D38: .word 0x0000432D"
    );
    #endif
}

void ov52_021E8D3C(void) {
    /* Original at 0x021E8D3C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov52_021E8BD8\n    add r0, r4, #0\n    bl ov52_021E9218\n    ldr r2, _021E8D60 ; =0x0000432D\n    mov r0, #0xb1\n    lsl r0, r0, #2\n    add r1, r4, r2\n    add r2, #0x55\n    add r0, r4, r0\n    add r2, r4, r2\n    mov r3, #0\n    bl ov52_021E9158\n    pop {r4, pc}\n    _021E8D60: .word 0x0000432D"
    );
    #endif
}

void ov52_021E8D64(void) {
    /* Original at 0x021E8D64 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0xb4\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp, #0xc]\n    mov r2, #0x19\n    add r0, sp, #0\n    strb r2, [r0, #0x10]\n    mov r2, #6\n    strb r2, [r0, #0x11]\n    add r0, r1, #0\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    add sp, #0x14\n    pop {pc}"
    );
    #endif
}

void ov52_021E8D8C(void) {
    /* Original at 0x021E8D8C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x38]\n    add r4, r1, #0\n    bl ov52_021E92E8\n    cmp r0, #0\n    beq _021E8DB6\n    ldr r1, _021E8DC0 ; =0x00005C9C\n    ldr r0, [r5]\n    ldr r1, [r5, r1]\n    bl ov52_021E8D64\n    add r0, r5, #0\n    mov r1, #1\n    bl ov52_021E9488\n    mov r0, #0xc3\n    mov r1, #3\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov52_021E8D3C\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _021E8DC0: .word 0x00005C9C"
    );
    #endif
}

void ov52_021E8DC4(void) {
    /* Original at 0x021E8DC4 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _021E8E5C ; =0x00005C9C\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _021E8DDE\n    cmp r0, #2\n    beq _021E8E20\n    b _021E8E46\n    ldr r0, [r5, #8]\n    mov r1, #4\n    bl GameStats_AddScore\n    ldr r0, [r5, #8]\n    mov r1, #0x73\n    bl GameStats_Inc\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    ldr r0, _021E8E5C ; =0x00005C9C\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Reset\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x27\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    add sp, #0xc\n    mov r0, #2\n    pop {r4, r5, pc}\n    mov r0, #0xc3\n    mov r1, #4\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    sub r0, #0xbc\n    add r0, r5, r0\n    mov r1, #0\n    bl ov52_021E8CDC\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #1\n    bl ClearFrameAndWindow2\n    ldr r0, _021E8E5C ; =0x00005C9C\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Reset\n    ldr r1, _021E8E60 ; =0x0000432C\n    mov r0, #0xf0\n    ldrb r2, [r5, r1]\n    bic r2, r0\n    add r0, r5, #0\n    strb r2, [r5, r1]\n    bl ov52_021E8D3C\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _021E8E5C: .word 0x00005C9C\n    _021E8E60: .word 0x0000432C"
    );
    #endif
}

void ov52_021E8E64(void) {
    /* Original at 0x021E8E64 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021E8ED8 ; =0x00005C9C\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #1\n    beq _021E8E7C\n    cmp r0, #2\n    beq _021E8EB4\n    b _021E8ED4\n    mov r0, #0xc3\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    sub r0, #0x38\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    ldr r0, _021E8ED8 ; =0x00005C9C\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Reset\n    add r0, r5, #0\n    mov r1, #0\n    bl ov52_021E9488\n    mov r0, #0xb1\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #2\n    bl FillWindowPixelBuffer\n    mov r0, #0xb1\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl CopyWindowToVram\n    b _021E8ED4\n    mov r0, #0xc3\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    sub r0, #0x38\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    ldr r0, _021E8ED8 ; =0x00005C9C\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_Reset\n    add r0, r5, #0\n    mov r1, #0\n    bl ov52_021E9488\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _021E8ED8: .word 0x00005C9C"
    );
    #endif
}

void ov52_021E8EDC(void) {
    /* Original at 0x021E8EDC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #msg_0252_00011 ; Would you like to erase your autograph?\n    add r5, r0, #0\n    bl ov52_021E927C\n    mov r0, #0xc3\n    mov r1, #5\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov52_021E8D3C\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov52_021E8EFC(void) {
    /* Original at 0x021E8EFC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x38]\n    add r4, r1, #0\n    bl ov52_021E92E8\n    cmp r0, #0\n    beq _021E8F1E\n    mov r0, #0xc3\n    mov r1, #6\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r1, _021E8F28 ; =0x00005C9C\n    ldr r0, [r5]\n    ldr r1, [r5, r1]\n    bl ov52_021E8D64\n    add r0, r5, #0\n    bl ov52_021E8D3C\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _021E8F28: .word 0x00005C9C"
    );
    #endif
}

void ov52_021E8F2C(void) {
    /* Original at 0x021E8F2C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    ldr r4, [sp, #0x38]\n    mov ip, r1\n    add r6, r2, #0\n    add r7, r3, #0\n    str r0, [sp, #0x18]\n    ldr r3, [sp, #0x3c]\n    ldr r2, [sp, #0x40]\n    ldr r1, [sp, #0x44]\n    cmp r4, #0\n    bge _021E8F58\n    neg r0, r4\n    cmp r0, r2\n    ble _021E8F4C\n    add r0, r2, #0\n    ldr r5, [sp, #0x30]\n    mov r4, #0\n    sub r5, r5, r0\n    add r6, r6, r0\n    str r5, [sp, #0x30]\n    sub r2, r2, r0\n    cmp r3, #0\n    bge _021E8F70\n    neg r0, r3\n    cmp r0, r1\n    ble _021E8F64\n    add r0, r1, #0\n    ldr r5, [sp, #0x34]\n    mov r3, #0\n    sub r5, r5, r0\n    add r7, r7, r0\n    str r5, [sp, #0x34]\n    sub r1, r1, r0\n    ldr r0, [sp, #0x30]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #0x34]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    lsl r0, r3, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0xc]\n    lsl r0, r2, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x14]\n    lsl r2, r6, #0x10\n    lsl r3, r7, #0x10\n    ldr r0, [sp, #0x18]\n    mov r1, ip\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x10\n    bl BlitBitmapRectToWindow\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov52_021E8FAC(void) {
    /* Original at 0x021E8FAC */
    /* Requires manual decompilation - 183 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x50]\n    str r1, [sp, #0x1c]\n    str r0, [sp, #0x50]\n    ldr r0, [sp, #0x54]\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x54]\n    ldr r0, [sp, #0x50]\n    str r3, [sp, #0x24]\n    ldr r4, [r0]\n    ldr r0, [sp, #0x54]\n    ldr r5, [r0]\n    add r0, r2, #0\n    str r0, [sp, #0x38]\n    add r0, r3, #0\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x58]\n    cmp r0, #0\n    bne _021E8FEC\n    ldr r0, [sp, #0x5c]\n    cmp r0, #0\n    bne _021E8FEC\n    ldr r0, [sp, #0x50]\n    add r1, r2, #0\n    str r1, [r0]\n    ldr r0, [sp, #0x54]\n    add r1, r3, #0\n    str r1, [r0]\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x20]\n    sub r0, r0, r4\n    str r0, [sp, #0x34]\n    bpl _021E8FF8\n    neg r0, r0\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x24]\n    sub r7, r0, r5\n    bpl _021E9000\n    neg r7, r7\n    ldr r0, [sp, #0x34]\n    cmp r0, r7\n    ble _021E908E\n    ldr r0, [sp, #0x20]\n    cmp r4, r0\n    ble _021E9026\n    ldr r0, [sp, #0x24]\n    cmp r5, r0\n    ble _021E9018\n    mov r0, #1\n    str r0, [sp, #0x2c]\n    b _021E901E\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x2c]\n    str r4, [sp, #0x38]\n    ldr r4, [sp, #0x20]\n    ldr r5, [sp, #0x24]\n    b _021E9038\n    ldr r0, [sp, #0x24]\n    cmp r5, r0\n    bge _021E9032\n    mov r0, #1\n    str r0, [sp, #0x2c]\n    b _021E9038\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x2c]\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    str r5, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r2, #0\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x1c]\n    add r3, r2, #0\n    bl ov52_021E8F2C\n    ldr r0, [sp, #0x34]\n    add r4, r4, #1\n    asr r6, r0, #1\n    ldr r0, [sp, #0x38]\n    cmp r4, r0\n    bgt _021E9112\n    sub r6, r6, r7\n    bpl _021E906A\n    ldr r0, [sp, #0x34]\n    add r6, r6, r0\n    ldr r0, [sp, #0x2c]\n    add r5, r5, r0\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    str r5, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r2, #0\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x1c]\n    add r3, r2, #0\n    bl ov52_021E8F2C\n    ldr r0, [sp, #0x38]\n    add r4, r4, #1\n    cmp r4, r0\n    ble _021E905E\n    b _021E9112\n    ldr r0, [sp, #0x24]\n    cmp r5, r0\n    ble _021E90AE\n    ldr r0, [sp, #0x20]\n    cmp r4, r0\n    ble _021E90A0\n    mov r0, #1\n    str r0, [sp, #0x28]\n    b _021E90A6\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x28]\n    str r5, [sp, #0x30]\n    ldr r5, [sp, #0x24]\n    ldr r4, [sp, #0x20]\n    b _021E90C0\n    ldr r0, [sp, #0x20]\n    cmp r4, r0\n    bge _021E90BA\n    mov r0, #1\n    str r0, [sp, #0x28]\n    b _021E90C0\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x28]\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    str r5, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r2, #0\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x1c]\n    add r3, r2, #0\n    bl ov52_021E8F2C\n    ldr r0, [sp, #0x30]\n    add r5, r5, #1\n    asr r6, r7, #1\n    cmp r5, r0\n    bgt _021E9112\n    ldr r0, [sp, #0x34]\n    sub r6, r6, r0\n    bpl _021E90F0\n    ldr r0, [sp, #0x28]\n    add r6, r6, r7\n    add r4, r4, r0\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    str r5, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r2, #0\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x1c]\n    add r3, r2, #0\n    bl ov52_021E8F2C\n    ldr r0, [sp, #0x30]\n    add r5, r5, #1\n    cmp r5, r0\n    ble _021E90E4\n    ldr r1, [sp, #0x20]\n    ldr r0, [sp, #0x50]\n    str r1, [r0]\n    ldr r1, [sp, #0x24]\n    ldr r0, [sp, #0x54]\n    str r1, [r0]\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov52_021E9124(void) {
    /* Original at 0x021E9124 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    ldrb r3, [r0, #0x10]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x1c\n    strh r3, [r1, #2]\n    ldrb r3, [r0, #0x10]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x1c\n    beq _021E914A\n    add r3, r0, r3\n    sub r3, r3, #1\n    ldrb r3, [r3]\n    strb r3, [r1]\n    ldrb r3, [r0, #0x10]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x1c\n    add r3, r0, r3\n    ldrb r3, [r3, #7]\n    strb r3, [r1, #1]\n    add r2, r2, #1\n    add r0, #0x11\n    add r1, r1, #4\n    cmp r2, #5\n    blt _021E9126\n    bx lr"
    );
    #endif
}

void ov52_021E9158(void) {
    /* Original at 0x021E9158 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r7, r0, #0\n    mov r0, #0\n    str r1, [sp, #0x10]\n    str r2, [sp, #0x14]\n    str r3, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    str r0, [sp, #0x20]\n    add r5, r1, #0\n    add r6, r2, #0\n    ldrb r0, [r5, #0x10]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    beq _021E91D2\n    ldrh r0, [r6, #2]\n    cmp r0, #0\n    beq _021E9188\n    ldrb r0, [r6]\n    sub r0, #0x20\n    str r0, [sp, #0x28]\n    ldrb r0, [r6, #1]\n    sub r0, #0x48\n    str r0, [sp, #0x24]\n    ldrb r0, [r5, #0x10]\n    mov r4, #0\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x1c\n    cmp r1, #0\n    ble _021E91D2\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    cmp r1, #0\n    ble _021E91D2\n    add r0, sp, #0x28\n    str r0, [sp]\n    add r0, sp, #0x24\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    ldrh r0, [r6, #2]\n    add r3, r5, r4\n    str r0, [sp, #0xc]\n    ldrb r1, [r5, #0x10]\n    ldrb r3, [r3, #8]\n    add r0, r7, #0\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    lsl r2, r1, #4\n    ldr r1, _021E9214 ; =ov52_021E95A0\n    sub r3, #0x48\n    add r1, r1, r2\n    ldrb r2, [r5, r4]\n    sub r2, #0x20\n    bl ov52_021E8FAC\n    ldrb r0, [r5, #0x10]\n    add r4, r4, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r4, r0\n    blt _021E919C\n    ldr r0, [sp, #0x20]\n    add r5, #0x11\n    add r0, r0, #1\n    add r6, r6, #4\n    str r0, [sp, #0x20]\n    cmp r0, #5\n    blt _021E916E\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    beq _021E91F2\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    beq _021E91F2\n    add r0, r7, #0\n    bl CopyWindowToVram\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    bl ov52_021E9124\n    mov r3, #0\n    mov r1, #0xf0\n    ldr r0, [sp, #0x10]\n    add r3, r3, #1\n    ldrb r2, [r0, #0x10]\n    bic r2, r1\n    strb r2, [r0, #0x10]\n    add r0, #0x11\n    str r0, [sp, #0x10]\n    cmp r3, #5\n    blt _021E91FE\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _021E9214: .word ov52_021E95A0"
    );
    #endif
}

void ov52_021E9218(void) {
    /* Original at 0x021E9218 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov52_021E921C(void) {
    /* Original at 0x021E921C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r1, [r0]\n    add r1, #0x14\n    strh r1, [r0]\n    ldrh r2, [r0]\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    cmp r2, r1\n    bls _021E9232\n    mov r1, #0\n    strh r1, [r0]\n    ldrh r0, [r0]\n    bl GF_SinDeg\n    mov r1, #0xa\n    mul r1, r0\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    add r0, #0xf\n    lsl r1, r0, #5\n    mov r0, #0x1d\n    orr r1, r0\n    add r0, sp, #0\n    strh r1, [r0]\n    add r0, sp, #0\n    mov r1, #0x18\n    mov r2, #2\n    bl GX_LoadOBJPltt\n    pop {r3, pc}"
    );
    #endif
}

void ov52_021E925C(void) {
    /* Original at 0x021E925C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov52_021E9260(void) {
    /* Original at 0x021E9260 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E9278 ; =0x0000431C\n    add r3, r0, r1\n    add r1, #0x11\n    add r2, r0, r1\n    mov r1, #0x11\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _021E926A\n    bx lr\n    _021E9278: .word 0x0000431C"
    );
    #endif
}

void ov52_021E927C(void) {
    /* Original at 0x021E927C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x50\n    mov r1, #0x27\n    bl String_New\n    add r4, r0, #0\n    ldr r0, [r5, #0x14]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x10]\n    ldr r1, [r5, #0x34]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xa\n    bl DrawFrameAndWindow2\n    ldr r0, [r5, #0xc]\n    bl Options_GetTextFrameDelay\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    ldr r2, [r5, #0x34]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    str r0, [r5, #0x38]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov52_021E92E8(void) {
    TextPrinterCheckActive(0, 1);
}

void ov52_021E9300(void) {
    /* Original at 0x021E9300 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r7, #0\n    add r5, r0, #0\n    str r1, [sp]\n    add r4, r7, #0\n    strb r7, [r5]\n    add r6, r7, #0\n    ldr r0, [sp]\n    ldrb r1, [r0, r6]\n    mov r0, #0xf\n    and r0, r1\n    cmp r0, #1\n    bne _021E9324\n    mov r0, #1\n    ldrb r1, [r5]\n    lsl r0, r4\n    orr r0, r1\n    strb r0, [r5]\n    ldr r0, [sp]\n    ldrb r0, [r0, r6]\n    asr r0, r0, #4\n    cmp r0, #1\n    bne _021E933A\n    ldrb r0, [r5]\n    add r2, r4, #1\n    mov r1, #1\n    lsl r1, r2\n    orr r0, r1\n    strb r0, [r5]\n    add r4, r4, #2\n    cmp r4, #8\n    bne _021E934A\n    mov r0, #0\n    add r5, r5, #1\n    add r7, r7, #1\n    strb r0, [r5]\n    add r4, r0, #0\n    mov r0, #6\n    lsl r0, r0, #0xa\n    cmp r7, r0\n    blt _021E9356\n    bl GF_AssertFail\n    mov r0, #6\n    add r6, r6, #1\n    lsl r0, r0, #0xa\n    cmp r6, r0\n    blt _021E930E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov52_021E9364(void) {
    /* Original at 0x021E9364 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021E9410 ; =gSystem + 0x40\n    add r4, r0, #0\n    ldrh r0, [r1, #0x20]\n    ldr r3, _021E9414 ; =0x0000FFFF\n    cmp r0, r3\n    beq _021E93FE\n    ldrh r1, [r1, #0x22]\n    cmp r1, r3\n    beq _021E93FE\n    ldr r2, _021E9418 ; =0x00005CA8\n    ldr r5, [r4, r2]\n    cmp r5, r3\n    beq _021E93FE\n    add r1, r2, #4\n    ldr r1, [r4, r1]\n    cmp r1, r3\n    beq _021E93FE\n    cmp r5, r0\n    ble _021E9394\n    mov r1, #0\n    sub r3, r5, r0\n    mvn r1, r1\n    b _021E9398\n    sub r3, r0, r5\n    mov r1, #1\n    sub r0, r2, #6\n    strb r1, [r4, r0]\n    cmp r3, #3\n    blt _021E93CE\n    cmp r3, #0x28\n    bgt _021E93CE\n    ldr r0, _021E9410 ; =gSystem + 0x40\n    ldrh r2, [r0, #0x22]\n    ldr r0, _021E941C ; =0x00005CAC\n    ldr r1, [r4, r0]\n    cmp r1, r2\n    ble _021E93B8\n    sub r2, r1, r2\n    mov r1, #0\n    mvn r1, r1\n    b _021E93BC\n    sub r2, r2, r1\n    mov r1, #1\n    sub r0, #9\n    strb r1, [r4, r0]\n    cmp r2, #0x28\n    bgt _021E93FE\n    ldr r0, _021E9420 ; =0x00005CA0\n    add r0, r4, r0\n    bl ov52_021E9424\n    b _021E93FE\n    cmp r3, #0x28\n    bgt _021E93FE\n    ldr r0, _021E9410 ; =gSystem + 0x40\n    ldrh r2, [r0, #0x22]\n    ldr r0, _021E941C ; =0x00005CAC\n    ldr r1, [r4, r0]\n    cmp r1, r2\n    ble _021E93E6\n    sub r2, r1, r2\n    mov r1, #0\n    mvn r1, r1\n    b _021E93EA\n    sub r2, r2, r1\n    mov r1, #1\n    sub r0, #9\n    strb r1, [r4, r0]\n    cmp r2, #3\n    blt _021E93FE\n    cmp r2, #0x28\n    bgt _021E93FE\n    ldr r0, _021E9420 ; =0x00005CA0\n    add r0, r4, r0\n    bl ov52_021E9424\n    ldr r1, _021E9410 ; =gSystem + 0x40\n    ldr r0, _021E9418 ; =0x00005CA8\n    ldrh r2, [r1, #0x20]\n    str r2, [r4, r0]\n    ldrh r1, [r1, #0x22]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _021E9410: .word gSystem + 0x40\n    _021E9414: .word 0x0000FFFF\n    _021E9418: .word 0x00005CA8\n    _021E941C: .word 0x00005CAC\n    _021E9420: .word 0x00005CA0"
    );
    #endif
}

void ov52_021E9424(void) {
    /* Original at 0x021E9424 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    bne _021E9448\n    mov r0, #1\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    bne _021E9448\n    ldr r0, _021E9484 ; =0x00000699\n    bl IsSEPlaying\n    cmp r0, #0\n    bne _021E9448\n    ldr r0, _021E9484 ; =0x00000699\n    bl PlaySE\n    mov r0, #0\n    ldrsb r1, [r4, r0]\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    mul r0, r1\n    bmi _021E9460\n    mov r0, #1\n    ldrsb r1, [r4, r0]\n    mov r0, #3\n    ldrsb r0, [r4, r0]\n    mul r0, r1\n    bpl _021E9470\n    ldr r0, _021E9484 ; =0x00000699\n    bl IsSEPlaying\n    cmp r0, #0\n    bne _021E9470\n    ldr r0, _021E9484 ; =0x00000699\n    bl PlaySE\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    strb r0, [r4]\n    mov r0, #3\n    ldrsb r0, [r4, r0]\n    strb r0, [r4, #1]\n    mov r0, #0\n    strb r0, [r4, #2]\n    strb r0, [r4, #3]\n    pop {r4, pc}\n    _021E9484: .word 0x00000699"
    );
    #endif
}

void ov52_021E9488(void) {
    /* Original at 0x021E9488 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #1\n    bne _021E949C\n    mov r1, #0x25\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r3, pc}\n    mov r1, #0x25\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    pop {r3, pc}"
    );
    #endif
}
