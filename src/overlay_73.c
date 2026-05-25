/* Decompiled from asm/overlay_73.s */
#include "global.h"

void ov73_021E5900(void) {
    /* Original at 0x021E5900 */
    /* Requires manual decompilation - 170 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r7, r0, #0\n    cmp r1, #0\n    beq _021E5916\n    cmp r1, #1\n    bne _021E5914\n    b _021E5A80\n    b _021E5A8E\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021E5A94 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _021E5A98 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r2, #0x41\n    mov r0, #3\n    mov r1, #0x32\n    lsl r2, r2, #0xc\n    bl Heap_Create\n    mov r0, #0x54\n    mov r1, #0x32\n    bl NARC_New\n    add r6, r0, #0\n    ldr r1, _021E5A9C ; =0x00004A8C\n    add r0, r7, #0\n    mov r2, #0x32\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _021E5A9C ; =0x00004A8C\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #0x32\n    bl BgConfig_Alloc\n    str r0, [r4]\n    add r0, r7, #0\n    bl OverlayManager_GetArgs\n    str r0, [r4, #8]\n    ldr r1, [r0]\n    ldr r0, _021E5AA0 ; =0x00004A0C\n    str r1, [r4, r0]\n    ldr r0, [r4, #8]\n    ldr r0, [r0, #0x10]\n    bl MenuInputStateMgr_GetState\n    mov r1, #0xc5\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x32\n    bl MessageFormat_New\n    str r0, [r4, #0x24]\n    ldr r2, _021E5AA4 ; =0x000001A6\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x32\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x28]\n    mov r0, #4\n    mov r1, #0x32\n    bl FontID_Alloc\n    mov r0, #4\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    bl ov73_021E5D00\n    ldr r0, [r4]\n    bl ov73_021E5D20\n    mov r0, #0\n    bl SetMasterBrightnessNeutral\n    mov r0, #1\n    bl SetMasterBrightnessNeutral\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x32\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #0x11\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov73_021E5F38\n    bl sub_020210BC\n    mov r0, #2\n    bl sub_02021148\n    ldr r0, _021E5AA8 ; =ov73_021E5CD8\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov73_021E5E0C\n    bl ov73_021E6060\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov73_021E6090\n    add r0, r4, #0\n    bl ov73_021E6184\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov73_021E629C\n    add r0, r4, #0\n    bl ov73_021E7230\n    mov r1, #0\n    mov r0, #0x34\n    add r2, r1, #0\n    bl Sound_SetSceneAndPlayBGM\n    ldr r2, _021E5AAC ; =0x04000304\n    ldr r0, _021E5AB0 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    add r0, r4, #0\n    bl sub_0208FB64\n    bl sub_0203893C\n    mov r0, #3\n    bl sub_02038C1C\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E5A54\n    mov r0, #2\n    bl sub_0205A904\n    bl sub_0203A880\n    ldr r0, _021E5AA0 ; =0x00004A0C\n    mov r1, #0xe2\n    lsl r1, r1, #2\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    bl ov73_021EA374\n    ldr r0, _021E5AB4 ; =ov73_021E5C74\n    add r1, r4, #0\n    mov r2, #5\n    bl SysTask_CreateOnVBlankQueue\n    str r0, [r4, #0x20]\n    add r0, r6, #0\n    bl NARC_Delete\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _021E5A8E\n    bl OverlayManager_GetData\n    mov r0, #0\n    str r0, [r5]\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021E5A94: .word 0xFFFFE0FF\n    _021E5A98: .word 0x04001000\n    _021E5A9C: .word 0x00004A8C\n    _021E5AA0: .word 0x00004A0C\n    _021E5AA4: .word 0x000001A6\n    _021E5AA8: .word ov73_021E5CD8\n    _021E5AAC: .word 0x04000304\n    _021E5AB0: .word 0xFFFF7FFF\n    _021E5AB4: .word ov73_021E5C74"
    );
    #endif
}

void ov73_021E5AB8(void) {
    /* Original at 0x021E5AB8 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E5ADE\n    ldr r0, _021E5B9C ; =0x00004A24\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021E5ADE\n    bl sub_02033250\n    ldr r1, _021E5B9C ; =0x00004A24\n    ldr r2, [r4, r1]\n    and r0, r2\n    str r0, [r4, r1]\n    ldr r1, [r5]\n    cmp r1, #3\n    bhi _021E5B92\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E5AF0: ; jump table\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E5B92\n    mov r0, #1\n    str r0, [r5]\n    bl sub_0203769C\n    cmp r0, #0\n    beq _021E5B92\n    bl ov73_021E746C\n    cmp r0, #2\n    ble _021E5B92\n    mov r1, #0\n    mov r0, #0x72\n    add r2, r1, #0\n    bl sub_02037030\n    b _021E5B92\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    lsl r2, r0, #2\n    ldr r0, _021E5BA0 ; =_021EA7C0\n    ldr r2, [r0, r2]\n    cmp r2, #0\n    beq _021E5B36\n    add r0, r4, #0\n    blx r2\n    str r0, [r5]\n    ldr r0, _021E5BA4 ; =0x00004A14\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bne _021E5B4E\n    mov r0, #0xa6\n    lsl r0, r0, #2\n    ldr r2, _021E5BA8 ; =0x00010300\n    add r0, r4, r0\n    mov r1, #0\n    add r3, r4, #0\n    bl ov73_021E735C\n    add r0, r4, #0\n    bl ov73_021E762C\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E5B92\n    add r0, r4, #0\n    mov r1, #1\n    bl ov73_021E7870\n    ldr r1, [r5]\n    cmp r1, #1\n    bne _021E5B92\n    str r0, [r5]\n    b _021E5B92\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    lsl r2, r0, #2\n    ldr r0, _021E5BA0 ; =_021EA7C0\n    ldr r2, [r0, r2]\n    cmp r2, #0\n    beq _021E5B92\n    add r0, r4, #0\n    blx r2\n    str r0, [r5]\n    b _021E5B92\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E5B92\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x50]\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _021E5B9C: .word 0x00004A24\n    _021E5BA0: .word _021EA7C0\n    _021E5BA4: .word 0x00004A14\n    _021E5BA8: .word 0x00010300"
    );
    #endif
}

void ov73_021E5BAC(void) {
    /* Original at 0x021E5BAC */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    bl OverlayManager_GetData\n    add r6, r0, #0\n    ldr r0, [r6, #0x20]\n    bl SysTask_Destroy\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl sub_0200B0A8\n    mov r7, #0x5f\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    ldr r0, [r5, r7]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021E5BD8\n    ldr r0, [r6, #0x50]\n    bl SpriteList_Delete\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    add r0, r6, #0\n    bl ov73_021E6400\n    add r0, r6, #0\n    bl ov73_021E6048\n    ldr r0, [r6]\n    bl ov73_021E5F0C\n    mov r0, #2\n    bl sub_02038C1C\n    bl sub_02037FF0\n    ldr r0, [r6, #8]\n    ldr r0, [r0, #4]\n    bl sub_0205AD24\n    bl sub_02021238\n    mov r0, #4\n    bl FontID_Release\n    ldr r0, [r6, #0x28]\n    bl DestroyMsgData\n    ldr r0, [r6, #0x24]\n    bl MessageFormat_Delete\n    ldr r0, [r6, #8]\n    mov r1, #0xc5\n    lsl r1, r1, #2\n    ldr r0, [r0, #0x10]\n    ldr r1, [r6, r1]\n    bl MenuInputStateMgr_SetState\n    add r0, r6, #0\n    bl ov73_021E5ED4\n    ldr r0, [sp]\n    bl OverlayManager_FreeData\n    ldr r2, _021E5C70 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    mov r0, #0\n    bl sub_0205A904\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x32\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E5C70: .word 0x04000304"
    );
    #endif
}

void ov73_021E5C74(void) {
    /* Original at 0x021E5C74 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0xc]\n    add r1, #0xc\n    cmp r0, #0\n    beq _021E5CCE\n    ldr r0, [r1, #4]\n    ldr r3, [r1, #8]\n    lsl r2, r0, #1\n    ldr r0, _021E5CD0 ; =ov73_021EA52A\n    ldrb r0, [r0, r2]\n    cmp r3, r0\n    ble _021E5CBE\n    mov r0, #0\n    str r0, [r1, #8]\n    ldr r2, [r1, #4]\n    add r2, r2, #1\n    str r2, [r1, #4]\n    lsl r3, r2, #1\n    ldr r2, _021E5CD4 ; =ov73_021EA52B\n    ldrb r2, [r2, r3]\n    cmp r2, #0xff\n    bne _021E5CA4\n    str r0, [r1, #4]\n    ldr r0, [r1, #0x10]\n    ldr r1, [r1, #4]\n    ldr r0, [r0, #0xc]\n    lsl r2, r1, #1\n    ldr r1, _021E5CD4 ; =ov73_021EA52B\n    ldrb r1, [r1, r2]\n    mov r2, #0x20\n    lsl r1, r1, #5\n    add r0, r0, r1\n    mov r1, #0\n    bl GX_LoadOBJPltt\n    b _021E5CC4\n    ldr r0, [r4, #0x14]\n    add r0, r0, #1\n    str r0, [r4, #0x14]\n    mov r0, #0xde\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov73_021E72F4\n    pop {r4, pc}\n    _021E5CD0: .word ov73_021EA52A\n    _021E5CD4: .word ov73_021EA52B"
    );
    #endif
}

void ov73_021E5CD8(void) {
    /* Original at 0x021E5CD8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    ldr r0, [r4]\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _021E5CF8 ; =0x027E0000\n    ldr r1, _021E5CFC ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    _021E5CF8: .word 0x027E0000\n    _021E5CFC: .word 0x00003FF8"
    );
    #endif
}

void ov73_021E5D00(void) {
    GfGfx_SetBanks(5);
}

void ov73_021E5D20(void) {
    /* Original at 0x021E5D20 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x80\n    ldr r5, _021E5DF8 ; =ov73_021EA540\n    add r3, sp, #0x70\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _021E5DFC ; =ov73_021EA5B0\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E5E00 ; =ov73_021EA5CC\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E5E04 ; =ov73_021EA578\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E5E08 ; =ov73_021EA594\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x32\n    bl BG_ClearCharDataRange\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x32\n    bl BG_ClearCharDataRange\n    add sp, #0x80\n    pop {r3, r4, r5, pc}\n    nop\n    _021E5DF8: .word ov73_021EA540\n    _021E5DFC: .word ov73_021EA5B0\n    _021E5E00: .word ov73_021EA5CC\n    _021E5E04: .word ov73_021EA578\n    _021E5E08: .word ov73_021EA594"
    );
    #endif
}

void ov73_021E5E0C(void) {
    /* Original at 0x021E5E0C */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    str r1, [sp, #4]\n    mov r7, #0\n    add r6, r0, #0\n    add r4, r0, #0\n    add r5, r0, #0\n    mov r0, #8\n    mov r1, #0x32\n    bl String_New\n    str r0, [r6, #0x2c]\n    mov r0, #0xce\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, _021E5EC8 ; =0x00004A3C\n    add r7, r7, #1\n    str r1, [r5, r0]\n    add r0, r0, #4\n    str r1, [r5, r0]\n    ldr r0, _021E5ECC ; =0x00004A44\n    add r4, #8\n    str r1, [r5, r0]\n    add r0, r0, #4\n    str r1, [r5, r0]\n    mov r0, #0x36\n    lsl r0, r0, #4\n    str r1, [r6, r0]\n    add r6, r6, #4\n    add r5, #0x10\n    cmp r7, #5\n    blt _021E5E1C\n    mov r0, #0xb4\n    mov r1, #0x32\n    bl String_New\n    ldr r1, [sp]\n    str r0, [r1, #0x44]\n    mov r0, #0x28\n    mov r1, #0x32\n    bl String_New\n    ldr r1, [sp]\n    mov r2, #0\n    str r0, [r1, #0x48]\n    mov r1, #0xc6\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    ldr r2, [sp]\n    ldr r0, [r0, #0x28]\n    ldr r2, [r2, #0x48]\n    mov r1, #0x11\n    bl ReadMsgDataIntoString\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    bl ov73_021E7740\n    mov r0, #0x32\n    bl sub_0205B4A4\n    mov r2, #0xdf\n    ldr r1, [sp]\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    ldr r2, [sp]\n    ldr r0, [sp]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    str r1, [r0, #0x14]\n    str r1, [r0, #0x10]\n    ldr r0, [sp, #4]\n    mov r1, #7\n    add r2, #0x1c\n    mov r3, #0x32\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    ldr r1, [sp]\n    ldr r2, _021E5ED0 ; =0x00004A18\n    str r0, [r1, #0x18]\n    mov r0, #0\n    str r0, [r1, r2]\n    add r3, r2, #4\n    mov r4, #2\n    str r4, [r1, r3]\n    sub r2, r2, #3\n    strb r0, [r1, r2]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E5EC8: .word 0x00004A3C\n    _021E5ECC: .word 0x00004A44\n    _021E5ED0: .word 0x00004A18"
    );
    #endif
}

void ov73_021E5ED4(void) {
    /* Original at 0x021E5ED4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl ov73_021E77E8\n    ldr r0, [r6, #0x18]\n    bl Heap_Free\n    mov r0, #0xdf\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl Heap_Free\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x2c]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #5\n    blt _021E5EF0\n    ldr r0, [r6, #0x48]\n    bl String_Delete\n    ldr r0, [r6, #0x44]\n    bl String_Delete\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov73_021E5F0C(void) {
    FreeBgTilemapBuffer(5);
    FreeBgTilemapBuffer(r4, 4);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 0);
    Heap_Free(r4);
}

void ov73_021E5F38(void) {
    /* Original at 0x021E5F38 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r6, [r5]\n    add r4, r1, #0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x32\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r3, #0\n    mov r1, #4\n    str r3, [sp]\n    mov r0, #0x32\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x32\n    mov r1, #5\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r2, r6, #0\n    add r3, r1, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x32\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #6\n    add r2, r6, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r0, #0x32\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r2, r6, #0\n    add r3, r1, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x32\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #2\n    add r2, r6, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r3, #0xc3\n    mov r0, #0x32\n    lsl r3, r3, #2\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #1\n    add r3, r5, r3\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    mov r1, #0x31\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r1, #6\n    mov r0, #0\n    lsl r1, r1, #6\n    mov r2, #0x32\n    bl LoadFontPal1\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x32\n    bl LoadFontPal0\n    mov r1, #6\n    mov r0, #4\n    lsl r1, r1, #6\n    mov r2, #0x32\n    bl LoadFontPal1\n    mov r1, #0x1a\n    mov r0, #4\n    lsl r1, r1, #4\n    mov r2, #0x32\n    bl LoadFontPal0\n    ldr r0, [r5, #8]\n    ldr r0, [r0, #8]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x32\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xb\n    bl LoadUserFrameGfx2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x32\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r2, #0x1f\n    mov r3, #0xa\n    bl LoadUserFrameGfx1\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov73_021E6048(void) {
    Heap_Free(0x31, 0x31, 0);
}

void ov73_021E6060(void) {
    /* Original at 0x021E6060 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _021E608C ; =ov73_021EA550\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl ObjCharTransfer_Init\n    mov r0, #0x14\n    mov r1, #0x32\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _021E608C: .word ov73_021EA550"
    );
    #endif
}

void ov73_021E6090(void) {
    /* Original at 0x021E6090 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r0, #0\n    str r1, [sp, #0x14]\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r2, #0x32\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    add r1, r6, #0\n    mov r0, #0x1e\n    add r1, #0x54\n    mov r2, #0x32\n    bl G2dRenderer_Init\n    str r0, [r6, #0x50]\n    add r0, r6, #0\n    mov r2, #1\n    add r0, #0x54\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r7, #0x5f\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #2\n    mov r0, #3\n    add r1, r4, #0\n    mov r2, #0x32\n    bl Create2DGfxResObjMan\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021E60D8\n    mov r0, #2\n    str r0, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    mov r0, #0x32\n    str r0, [sp, #8]\n    mov r0, #0x5f\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    ldr r1, [sp, #0x14]\n    mov r2, #8\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x6b\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xf\n    str r0, [sp, #8]\n    mov r0, #0x32\n    sub r1, #0x2c\n    str r0, [sp, #0xc]\n    ldr r0, [r6, r1]\n    ldr r1, [sp, #0x14]\n    mov r2, #7\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    mov r1, #0x1b\n    lsl r1, r1, #4\n    str r0, [r6, r1]\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x32\n    sub r1, #0x2c\n    str r0, [sp, #8]\n    ldr r0, [r6, r1]\n    ldr r1, [sp, #0x14]\n    mov r2, #9\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x6d\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x32\n    sub r1, #0x2c\n    str r0, [sp, #8]\n    ldr r0, [r6, r1]\n    ldr r1, [sp, #0x14]\n    mov r2, #0xa\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x6e\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    sub r1, #0xc\n    ldr r0, [r6, r1]\n    bl sub_0200ACF0\n    mov r0, #0x1b\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl sub_0200AF94\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E6184(void) {
    /* Original at 0x021E6184 */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x5c\n    mov r1, #2\n    add r5, r0, #0\n    str r1, [sp]\n    sub r0, r1, #3\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r3, #0x5f\n    str r0, [sp, #0xc]\n    mov r2, #1\n    lsl r3, r3, #2\n    str r2, [sp, #0x10]\n    ldr r2, [r5, r3]\n    str r2, [sp, #0x14]\n    add r2, r3, #4\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    add r2, #8\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x1c]\n    add r2, r3, #0\n    add r2, #0xc\n    ldr r2, [r5, r2]\n    add r3, #0x88\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r5, r3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r5, #0x50]\n    mov r1, #0\n    str r0, [sp, #0x2c]\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r0, r5, r0\n    str r0, [sp, #0x30]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [sp, #0x3c]\n    str r0, [sp, #0x40]\n    str r0, [sp, #0x44]\n    str r0, [sp, #0x48]\n    add r0, sp, #0x2c\n    strh r1, [r0, #0x20]\n    mov r0, #1\n    str r0, [sp, #0x50]\n    str r0, [sp, #0x54]\n    mov r0, #0x32\n    str r0, [sp, #0x58]\n    mov r0, #0x15\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x34]\n    mov r0, #0x1a\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    mov r1, #0x8a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x8a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x8a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x64\n    bl Sprite_SetDrawPriority\n    mov r7, #0x8b\n    ldr r4, _021E6298 ; =ov73_021EA560\n    mov r6, #0\n    lsl r7, r7, #2\n    ldrh r0, [r4, #4]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x34]\n    ldrh r0, [r4, #6]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    sub r1, r6, #1\n    lsl r1, r1, #1\n    ldr r0, [r5, r0]\n    add r1, #0x1b\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, r7]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #5\n    blt _021E6232\n    mov r0, #6\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x34]\n    mov r0, #0x1a\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x38]\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x5c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E6298: .word ov73_021EA560"
    );
    #endif
}

void ov73_021E629C(void) {
    /* Original at 0x021E629C */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xc\n    str r0, [sp, #0xc]\n    mov r0, #0x5b\n    mov r1, #0xaa\n    str r0, [sp, #0x10]\n    lsl r1, r1, #2\n    ldr r0, [r4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #2\n    bl AddWindowParameterized\n    mov r0, #0xaa\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #9\n    str r0, [sp, #0xc]\n    mov r0, #0xc7\n    mov r1, #0xae\n    str r0, [sp, #0x10]\n    lsl r1, r1, #2\n    ldr r0, [r4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #0x10\n    bl AddWindowParameterized\n    mov r0, #0xae\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #9\n    str r0, [sp, #0xc]\n    ldr r0, _021E63B4 ; =0x00000133\n    mov r1, #0xb2\n    str r0, [sp, #0x10]\n    lsl r1, r1, #2\n    ldr r0, [r4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #0x18\n    bl AddWindowParameterized\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #1\n    str r1, [sp]\n    mov r0, #0x1a\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #9\n    str r0, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #0xb6\n    lsl r1, r1, #2\n    ldr r0, [r4]\n    add r1, r4, r1\n    mov r2, #4\n    mov r3, #3\n    bl AddWindowParameterized\n    mov r0, #0xb6\n    lsl r0, r0, #2\n    ldr r1, [r4, #0x48]\n    add r0, r4, r0\n    mov r2, #0\n    bl ov73_021E63BC\n    mov r0, #7\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #9\n    str r0, [sp, #0xc]\n    mov r0, #0x35\n    mov r1, #0xa6\n    str r0, [sp, #0x10]\n    lsl r1, r1, #2\n    ldr r0, [r4]\n    add r1, r4, r1\n    mov r2, #4\n    mov r3, #8\n    bl AddWindowParameterized\n    mov r0, #0xa6\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xa6\n    lsl r0, r0, #2\n    ldr r2, _021E63B8 ; =0x00010300\n    add r0, r4, r0\n    mov r1, #0\n    add r3, r4, #0\n    bl ov73_021E735C\n    mov r0, #0x32\n    bl YesNoPrompt_Create\n    mov r1, #0xba\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _021E63B4: .word 0x00000133\n    _021E63B8: .word 0x00010300"
    );
    #endif
}

void ov73_021E63BC(void) {
    /* Original at 0x021E63BC */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r2, #0\n    mov r0, #1\n    mov r2, #0\n    add r7, r1, #0\n    bl FontID_String_GetWidth\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #1\n    str r1, [sp]\n    mov r0, #0x41\n    mov r3, #0xd0\n    str r4, [sp, #4]\n    sub r4, r3, r6\n    lsl r0, r0, #0xa\n    lsr r3, r4, #0x1f\n    str r0, [sp, #8]\n    mov r0, #0\n    add r3, r4, r3\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r2, r7, #0\n    asr r3, r3, #1\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E6400(void) {
    /* Original at 0x021E6400 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xba\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #0xa6\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #0xb6\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #0xaa\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #0xae\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl RemoveWindow\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov73_021E6444(void) {
    /* Original at 0x021E6444 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0\n    mov r1, #1\n    bl sub_020398D4\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E646E\n    bl sub_02037454\n    cmp r0, #2\n    blt _021E6478\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0\n    bl ov73_021E756C\n    b _021E6478\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl ov73_021E756C\n    add r0, r5, #0\n    mov r1, #3\n    bl ov73_021E670C\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E6484(void) {
    /* Original at 0x021E6484 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov73_021E6508\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E64A6\n    bl ov73_021E7340\n    cmp r0, #1\n    beq _021E64AC\n    add r0, r5, #0\n    bl ov73_021E7468\n    b _021E64AC\n    add r0, r5, #0\n    bl ov73_021E7468\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E64B0(void) {
    /* Original at 0x021E64B0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xc5\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _021E64DE\n    bl System_GetTouchHeld\n    cmp r0, #0\n    beq _021E64CA\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _021E6504 ; =gSystem\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    beq _021E64FE\n    mov r0, #0xc5\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, _021E6504 ; =gSystem\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    beq _021E64EA\n    mov r0, #0\n    pop {r4, pc}\n    bl System_GetTouchHeld\n    cmp r0, #0\n    beq _021E64FE\n    mov r0, #0xc5\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021E6504: .word gSystem"
    );
    #endif
}

void ov73_021E6508(void) {
    /* Original at 0x021E6508 */
    /* Requires manual decompilation - 202 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r4, #0\n    bl ov73_021E64B0\n    ldr r0, _021E66C8 ; =ov73_021EA534\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    add r6, r0, #0\n    ldr r1, _021E66CC ; =0x0000FFD5\n    add r0, sp, #4\n    strh r1, [r0, #4]\n    sub r0, r4, #1\n    cmp r6, r0\n    beq _021E6544\n    add r0, sp, #8\n    str r0, [sp]\n    ldr r3, _021E66D0 ; =gSystem + 0x40\n    ldr r0, [r5]\n    ldrh r2, [r3, #0x20]\n    ldrh r3, [r3, #0x22]\n    mov r1, #1\n    bl DoesPixelAtScreenXYMatchPtrVal\n    cmp r0, #0\n    beq _021E6544\n    add r0, r6, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, _021E66D4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _021E6552\n    cmp r4, #1\n    bne _021E65BE\n    bl sub_0203769C\n    cmp r0, #0\n    beq _021E655C\n    b _021E669C\n    bl ov73_021E746C\n    ldr r1, _021E66D8 ; =0x00004A1C\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    bne _021E65B6\n    add r1, #8\n    ldr r0, [r5, r1]\n    cmp r0, #0\n    bne _021E65B6\n    mov r1, #1\n    add r0, sp, #4\n    strb r1, [r0, #2]\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0\n    bl ov73_021E756C\n    add r0, r5, #0\n    mov r1, #0x16\n    bl ov73_021E670C\n    add r1, sp, #4\n    mov r0, #0x75\n    add r1, #2\n    mov r2, #1\n    bl sub_02037030\n    add r0, r5, #0\n    mov r1, #0\n    bl ov73_021E781C\n    ldr r0, _021E66DC ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov73_021E71E4\n    ldr r0, [r5]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    b _021E669C\n    ldr r0, _021E66E0 ; =0x000005F2\n    bl PlaySE\n    b _021E669C\n    mov r0, #2\n    tst r0, r1\n    bne _021E65C8\n    cmp r4, #2\n    bne _021E6670\n    bl sub_0203769C\n    cmp r0, #0\n    beq _021E660C\n    ldr r1, _021E66E4 ; =0x00004A10\n    ldr r0, [r5, r1]\n    cmp r0, #0\n    bne _021E65F4\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #0\n    bl ov73_021E756C\n    add r0, r5, #0\n    mov r1, #4\n    bl ov73_021E670C\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    b _021E669C\n    add r0, r1, #0\n    add r0, #0x28\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bge _021E669C\n    mov r0, #2\n    add r1, #0x28\n    str r0, [r5, r1]\n    ldr r0, _021E66E0 ; =0x000005F2\n    bl PlaySE\n    b _021E669C\n    bl sub_02037454\n    ldr r1, _021E66D8 ; =0x00004A1C\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    bne _021E6668\n    add r1, #8\n    ldr r0, [r5, r1]\n    cmp r0, #0\n    bne _021E6668\n    mov r1, #1\n    add r0, sp, #4\n    strb r1, [r0, #1]\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #0\n    bl ov73_021E756C\n    add r0, r5, #0\n    mov r1, #4\n    bl ov73_021E670C\n    add r1, sp, #4\n    mov r0, #0x75\n    add r1, #1\n    mov r2, #1\n    bl sub_02037030\n    add r0, r5, #0\n    mov r1, #0\n    bl ov73_021E781C\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    mov r1, #1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov73_021E71E4\n    ldr r0, [r5]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    b _021E669C\n    ldr r0, _021E66E0 ; =0x000005F2\n    bl PlaySE\n    b _021E669C\n    ldr r0, _021E66E8 ; =0x00004A20\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _021E669C\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E669C\n    bl sub_02037454\n    ldr r1, _021E66D8 ; =0x00004A1C\n    ldr r1, [r5, r1]\n    cmp r1, r0\n    bne _021E669C\n    mov r1, #0\n    add r0, sp, #4\n    strb r1, [r0]\n    mov r0, #0x75\n    add r1, sp, #4\n    mov r2, #1\n    bl sub_02037030\n    ldr r0, _021E66EC ; =0x00004A38\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    blt _021E66A8\n    sub r1, r1, #1\n    str r1, [r5, r0]\n    ldr r0, _021E66EC ; =0x00004A38\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _021E66C2\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov73_021E71E4\n    ldr r0, [r5]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021E66C8: .word ov73_021EA534\n    _021E66CC: .word 0x0000FFD5\n    _021E66D0: .word gSystem + 0x40\n    _021E66D4: .word gSystem\n    _021E66D8: .word 0x00004A1C\n    _021E66DC: .word 0x000005DC\n    _021E66E0: .word 0x000005F2\n    _021E66E4: .word 0x00004A10\n    _021E66E8: .word 0x00004A20\n    _021E66EC: .word 0x00004A38"
    );
    #endif
}

void ov73_021E66F0(void) {
    /* Original at 0x021E66F0 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov73_021E66F4(void) {
    ov73_021E670C(2);
    ov73_021E66F0(r5);
}

void ov73_021E670C(void) {
    /* Original at 0x021E670C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xc6\n    mov r3, #0x1e\n    lsl r2, r2, #2\n    str r3, [r0, r2]\n    add r2, r2, #4\n    str r1, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov73_021E671C(void) {
    /* Original at 0x021E671C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x4c]\n    add r4, r1, #0\n    bl ov73_021E75FC\n    cmp r0, #0\n    beq _021E6768\n    mov r1, #0xc7\n    lsl r1, r1, #2\n    ldr r2, [r5, r1]\n    sub r0, r1, #4\n    str r2, [r5, r0]\n    ldr r0, [r5, r1]\n    cmp r0, #3\n    bne _021E6768\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E674E\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov73_021E71E4\n    mov r1, #0\n    ldr r0, _021E6774 ; =0x00004A38\n    mvn r1, r1\n    str r1, [r5, r0]\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov73_021E71E4\n    ldr r0, [r5]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6774: .word 0x00004A38"
    );
    #endif
}

void ov73_021E6778(void) {
    /* Original at 0x021E6778 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E6794\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x75\n    add r1, sp, #0\n    mov r2, #1\n    bl sub_02037030\n    mov r0, #0xc6\n    mov r1, #3\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E67A8(void) {
    /* Original at 0x021E67A8 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl MI_CpuFill8\n    ldr r0, [r4]\n    mov r3, #0xc5\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x1f\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    mov r1, #0x19\n    add r0, sp, #0\n    strb r1, [r0, #0x10]\n    mov r1, #6\n    strb r1, [r0, #0x11]\n    ldrb r1, [r0, #0x12]\n    mov r2, #0xf\n    lsl r3, r3, #2\n    bic r1, r2\n    ldr r2, [r4, r3]\n    sub r3, #0x2c\n    lsl r2, r2, #0x18\n    lsr r5, r2, #0x18\n    mov r2, #0xf\n    and r2, r5\n    orr r1, r2\n    strb r1, [r0, #0x12]\n    ldrb r2, [r0, #0x12]\n    mov r1, #0xf0\n    bic r2, r1\n    strb r2, [r0, #0x12]\n    ldr r0, [r4, r3]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    ldr r0, _021E682C ; =0x00004A15\n    mov r1, #1\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E6814\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #2\n    bl ov73_021E71E4\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #2\n    bl ov73_021E71E4\n    ldr r0, [r4]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _021E682C: .word 0x00004A15"
    );
    #endif
}

void ov73_021E6830(void) {
    /* Original at 0x021E6830 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E6888 ; =0x00004A15\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _021E6886\n    mov r0, #0xba\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_IsInTouchMode\n    mov r1, #0xc5\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    sub r1, #0x2c\n    ldr r0, [r4, r1]\n    bl YesNoPrompt_Reset\n    ldr r0, _021E6888 ; =0x00004A15\n    mov r1, #0\n    strb r1, [r4, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E686C\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov73_021E71E4\n    mov r1, #0\n    ldr r0, _021E688C ; =0x00004A38\n    mvn r1, r1\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov73_021E71E4\n    ldr r0, [r4]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r4, pc}\n    _021E6888: .word 0x00004A15\n    _021E688C: .word 0x00004A38"
    );
    #endif
}

void ov73_021E6890(void) {
    /* Original at 0x021E6890 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov73_021E67A8\n    mov r0, #0xc6\n    mov r1, #5\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E68AC(void) {
    /* Original at 0x021E68AC */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _021E68E0\n    ldr r0, _021E69BC ; =0x00004A10\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021E6904\n    ldr r0, _021E69C0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0xc3\n    tst r0, r1\n    beq _021E68D4\n    ldr r0, _021E69C4 ; =0x000005F2\n    bl PlaySE\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add sp, #8\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E69C8 ; =0x00004A24\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021E6904\n    ldr r0, _021E69C0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0xc3\n    tst r0, r1\n    beq _021E68F8\n    ldr r0, _021E69C4 ; =0x000005F2\n    bl PlaySE\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add sp, #8\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    bl ov73_021E746C\n    add r4, r0, #0\n    bl sub_02037454\n    cmp r4, r0\n    beq _021E691E\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add sp, #8\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0xba\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #0\n    beq _021E69B0\n    cmp r0, #2\n    bne _021E6958\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E694E\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x75\n    add r1, sp, #4\n    mov r2, #1\n    bl sub_02037030\n    add r0, r5, #0\n    mov r1, #1\n    bl ov73_021E781C\n    add r0, r5, #0\n    mov r1, #0\n    bl ov73_021E670C\n    b _021E69AA\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E6974\n    add r0, r5, #0\n    mov r1, #0xb\n    bl ov73_021E670C\n    add r0, r5, #0\n    mov r1, #0xe\n    mov r2, #0\n    bl ov73_021E756C\n    b _021E69AA\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #4\n    bl MI_CpuFill8\n    mov r1, #0\n    add r0, sp, #0\n    strb r1, [r0, #2]\n    bl sub_0203769C\n    add r1, sp, #0\n    strb r0, [r1]\n    ldr r0, _021E69CC ; =0x00004A28\n    mov r1, #1\n    strb r1, [r5, r0]\n    mov r1, #0\n    add r0, #0xa\n    strh r1, [r5, r0]\n    mov r0, #0xc6\n    mov r1, #6\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r0, #0x70\n    add r1, sp, #0\n    mov r2, #4\n    bl sub_02037030\n    add r0, r5, #0\n    bl ov73_021E6830\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r6, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _021E69BC: .word 0x00004A10\n    _021E69C0: .word gSystem\n    _021E69C4: .word 0x000005F2\n    _021E69C8: .word 0x00004A24\n    _021E69CC: .word 0x00004A28"
    );
    #endif
}

void ov73_021E69D0(void) {
    ov73_021E66F0(0);
}

void ov73_021E69E8(void) {
    /* Original at 0x021E69E8 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02037454\n    ldr r1, _021E6A68 ; =0x00004A30\n    ldrh r1, [r5, r1]\n    cmp r1, r0\n    bne _021E6A06\n    bl ov73_021E746C\n    ldr r1, _021E6A68 ; =0x00004A30\n    ldrh r2, [r5, r1]\n    cmp r2, r0\n    beq _021E6A1E\n    ldr r0, _021E6A6C ; =0x00004A32\n    mov r1, #0\n    strh r1, [r5, r0]\n    mov r0, #0xc6\n    mov r1, #8\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r0, r1, #2\n    ldrsh r0, [r5, r0]\n    add r2, r0, #1\n    add r0, r1, #2\n    strh r2, [r5, r0]\n    ldrsh r0, [r5, r0]\n    cmp r0, #0x1e\n    ble _021E6A5E\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #4\n    bl MI_CpuFill8\n    mov r1, #1\n    add r0, sp, #0\n    strb r1, [r0, #2]\n    bl sub_0203769C\n    add r1, sp, #0\n    strb r0, [r1]\n    mov r0, #0x70\n    add r1, sp, #0\n    mov r2, #4\n    bl sub_02037030\n    ldr r0, _021E6A6C ; =0x00004A32\n    mov r1, #0\n    strh r1, [r5, r0]\n    mov r0, #0xc6\n    mov r1, #9\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _021E6A68: .word 0x00004A30\n    _021E6A6C: .word 0x00004A32"
    );
    #endif
}

void ov73_021E6A70(void) {
    /* Original at 0x021E6A70 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _021E6A8C ; =0x00004A28\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #0\n    strb r1, [r5, r2]\n    bl ov73_021E670C\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6A8C: .word 0x00004A28"
    );
    #endif
}

void ov73_021E6A90(void) {
    /* Original at 0x021E6A90 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov73_021E67A8\n    mov r0, #0xc6\n    mov r1, #0x17\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E6AAC(void) {
    /* Original at 0x021E6AAC */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov73_021E746C\n    ldr r1, _021E6B5C ; =0x00004A1C\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    bne _021E6AC8\n    add r1, #8\n    ldr r0, [r5, r1]\n    cmp r0, #0\n    beq _021E6AE4\n    ldr r0, _021E6B60 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0xc3\n    tst r0, r1\n    beq _021E6AD8\n    ldr r0, _021E6B64 ; =0x000005F2\n    bl PlaySE\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add sp, #4\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0xba\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    add r6, r0, #0\n    beq _021E6B4E\n    add r0, r5, #0\n    bl ov73_021E6830\n    cmp r6, #2\n    bne _021E6B1C\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x75\n    add r1, sp, #0\n    mov r2, #1\n    bl sub_02037030\n    add r0, r5, #0\n    mov r1, #1\n    bl ov73_021E781C\n    add r0, r5, #0\n    mov r1, #0\n    bl ov73_021E670C\n    b _021E6B4E\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #2\n    bl ov73_021E71E4\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #2\n    bl ov73_021E71E4\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E6B4A\n    mov r0, #0xc6\n    mov r1, #0x18\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    bl ov73_021E746C\n    ldr r1, _021E6B68 ; =0x00004A2A\n    strb r0, [r5, r1]\n    b _021E6B4E\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021E6B5C: .word 0x00004A1C\n    _021E6B60: .word gSystem\n    _021E6B64: .word 0x000005F2\n    _021E6B68: .word 0x00004A2A"
    );
    #endif
}

void ov73_021E6B6C(void) {
    /* Original at 0x021E6B6C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021E6B94 ; =0x00004A2B\n    add r4, r1, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    bne _021E6B8E\n    mov r1, #0\n    mov r0, #0x73\n    add r2, r1, #0\n    bl sub_02037030\n    cmp r0, #1\n    bne _021E6B8E\n    ldr r0, _021E6B94 ; =0x00004A2B\n    mov r1, #1\n    strb r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6B94: .word 0x00004A2B"
    );
    #endif
}

void ov73_021E6B98(void) {
    /* Original at 0x021E6B98 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x28]\n    ldr r2, [r4, #0x48]\n    mov r1, #0x12\n    bl ReadMsgDataIntoString\n    mov r0, #0xb6\n    lsl r0, r0, #2\n    ldr r1, [r4, #0x48]\n    add r0, r4, r0\n    mov r2, #0\n    bl ov73_021E63BC\n    mov r0, #0x8a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x25\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #1\n    str r0, [r4, #0xc]\n    pop {r4, pc}"
    );
    #endif
}

void ov73_021E6BC8(void) {
    /* Original at 0x021E6BC8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E6BDA\n    bl sub_02037454\n    bl sub_02037454\n    ldr r1, _021E6BF4 ; =0x00004A08\n    ldr r1, [r5, r1]\n    cmp r1, r0\n    bne _021E6BEE\n    mov r0, #0xc6\n    mov r1, #0x1a\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6BF4: .word 0x00004A08"
    );
    #endif
}

void ov73_021E6BF8(void) {
    /* Original at 0x021E6BF8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021E6C18 ; =0x00004A0C\n    add r4, r1, #0\n    ldr r1, _021E6C1C ; =0x00000F48\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    bl ov73_021EA3D0\n    mov r0, #0xc6\n    mov r1, #0x1b\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6C18: .word 0x00004A0C\n    _021E6C1C: .word 0x00000F48"
    );
    #endif
}

void ov73_021E6C20(void) {
    /* Original at 0x021E6C20 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, _021E6C4C ; =gSystem + 0x60\n    mov r1, #1\n    strb r1, [r0, #0xc]\n    ldr r0, [r5, #8]\n    mov r1, #0x13\n    ldr r0, [r0, #0xc]\n    bl GameStats_AddScore\n    mov r0, #0xdd\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl sub_02039EAC\n    mov r0, #0xc6\n    mov r1, #0x1c\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _021E6C4C: .word gSystem + 0x60"
    );
    #endif
}

void ov73_021E6C50(void) {
    /* Original at 0x021E6C50 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E6C62\n    bl sub_02037454\n    ldr r0, [r5, #8]\n    mov r2, #0xdd\n    lsl r2, r2, #2\n    ldr r0, [r0]\n    mov r1, #2\n    add r2, r5, r2\n    bl sub_02039EB4\n    cmp r0, #0\n    beq _021E6CAE\n    ldr r0, _021E6CB4 ; =0x00000657\n    mov r1, #8\n    bl StopSE\n    add r0, r5, #0\n    mov r1, #0xd\n    mov r2, #0\n    bl ov73_021E756C\n    add r0, r5, #0\n    mov r1, #0x1d\n    bl ov73_021E670C\n    mov r0, #0x8a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetAnimCtrlSeq\n    mov r1, #0\n    mov r0, #0xc9\n    str r1, [r5, #0xc]\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r0, _021E6CB8 ; =gSystem + 0x60\n    strb r1, [r0, #0xc]\n    ldr r0, _021E6CBC ; =0x00004A14\n    strb r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6CB4: .word 0x00000657\n    _021E6CB8: .word gSystem + 0x60\n    _021E6CBC: .word 0x00004A14"
    );
    #endif
}

void ov73_021E6CC0(void) {
    /* Original at 0x021E6CC0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r2, #0xc9\n    lsl r2, r2, #2\n    ldr r4, [r0, r2]\n    add r3, r4, #1\n    str r3, [r0, r2]\n    cmp r4, #0x3c\n    ble _021E6CD6\n    mov r3, #0xf\n    sub r2, #0xc\n    str r3, [r0, r2]\n    add r0, r1, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov73_021E6CDC(void) {
    ov73_021E756C(5, 0);
    ov73_021E670C(r5, 0xa);
    ov73_021E66F0(r5);
}

void ov73_021E6CFC(void) {
    /* Original at 0x021E6CFC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0xc9\n    lsl r0, r0, #2\n    add r4, r1, #0\n    ldr r1, [r5, r0]\n    add r1, r1, #1\n    str r1, [r5, r0]\n    ldr r0, [r5, r0]\n    cmp r0, #0x3c\n    ble _021E6D2C\n    mov r1, #0x10\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x32\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r4, #3\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov73_021E6D38(void) {
    /* Original at 0x021E6D38 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov73_021E67A8\n    mov r0, #0xc6\n    mov r1, #0xc\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E6D54(void) {
    /* Original at 0x021E6D54 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov73_021E746C\n    ldr r1, _021E6DEC ; =0x00004A1C\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    bne _021E6D6E\n    add r1, #8\n    ldr r0, [r5, r1]\n    cmp r0, #0\n    beq _021E6D88\n    ldr r0, _021E6DF0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0xc3\n    tst r0, r1\n    beq _021E6D7E\n    ldr r0, _021E6DF4 ; =0x000005F2\n    bl PlaySE\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0xba\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl YesNoPrompt_HandleInput\n    cmp r0, #0\n    beq _021E6DE0\n    cmp r0, #2\n    bne _021E6DB8\n    mov r1, #0\n    mov r0, #0xc6\n    str r1, [sp]\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r0, #0x75\n    add r1, sp, #0\n    mov r2, #1\n    bl sub_02037030\n    add r0, r5, #0\n    mov r1, #1\n    bl ov73_021E781C\n    b _021E6DDA\n    mov r0, #0xc6\n    mov r1, #0xd\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0\n    mov r0, #0x71\n    add r2, r1, #0\n    bl sub_02037030\n    mov r0, #0\n    bl sub_02034818\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferPlayersName\n    add r0, r5, #0\n    bl ov73_021E6830\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6DEC: .word 0x00004A1C\n    _021E6DF0: .word gSystem\n    _021E6DF4: .word 0x000005F2"
    );
    #endif
}

void ov73_021E6DF8(void) {
    /* Original at 0x021E6DF8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E6E12\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0\n    bl ov73_021E756C\n    b _021E6E2C\n    mov r0, #0\n    bl sub_02034818\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferPlayersName\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov73_021E756C\n    add r0, r5, #0\n    mov r1, #0xe\n    bl ov73_021E670C\n    mov r0, #0xc9\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E6E48(void) {
    /* Original at 0x021E6E48 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r1, #0xc9\n    lsl r1, r1, #2\n    ldr r2, [r0, r1]\n    add r2, r2, #1\n    str r2, [r0, r1]\n    ldr r2, [r0, r1]\n    cmp r2, #0x2d\n    ble _021E6E62\n    mov r2, #0xf\n    sub r1, #0xc\n    str r2, [r0, r1]\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov73_021E6E6C(void) {
    /* Original at 0x021E6E6C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xc9\n    add r4, r1, #0\n    bl sub_02037AC0\n    mov r0, #0xc6\n    mov r1, #0x10\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E6E8C(void) {
    /* Original at 0x021E6E8C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0xc9\n    add r5, r1, #0\n    bl sub_02037B38\n    cmp r0, #0\n    beq _021E6EBE\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_020398D4\n    mov r1, #0x10\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x32\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r5, #3\n    add r0, r4, #0\n    bl ov73_021E66F0\n    add r0, r5, #0\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov73_021E6ECC(void) {
    /* Original at 0x021E6ECC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x4c]\n    add r4, r1, #0\n    bl ov73_021E75FC\n    cmp r0, #0\n    beq _021E6EE6\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #0\n    bl ov73_021E756C\n    mov r0, #0xc6\n    mov r1, #0x12\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E6EF8(void) {
    /* Original at 0x021E6EF8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x4c]\n    add r4, r1, #0\n    bl ov73_021E75FC\n    cmp r0, #0\n    beq _021E6F10\n    mov r0, #0xc6\n    mov r1, #0xa\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E6F1C(void) {
    /* Original at 0x021E6F1C */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E6F34\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #2\n    bl ov73_021E71E4\n    mov r1, #0\n    ldr r0, _021E6FA4 ; =0x00004A38\n    mvn r1, r1\n    str r1, [r5, r0]\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #2\n    bl ov73_021E71E4\n    ldr r0, [r5]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [r5, #0x4c]\n    cmp r0, #0xff\n    beq _021E6F66\n    bl ov73_021E75FC\n    cmp r0, #0\n    bne _021E6F66\n    ldr r0, [r5, #0x4c]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    add r0, r5, #0\n    mov r1, #0xf\n    mov r2, #1\n    bl ov73_021E756C\n    mov r0, #0xc6\n    mov r1, #0x14\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E6F88\n    add r0, r5, #0\n    mov r1, #0\n    bl ov73_021E781C\n    bl sub_02037454\n    ldr r1, _021E6FA8 ; =0x00004A2C\n    str r0, [r5, r1]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    add r1, #8\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6FA4: .word 0x00004A38\n    _021E6FA8: .word 0x00004A2C"
    );
    #endif
}

void ov73_021E6FAC(void) {
    /* Original at 0x021E6FAC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021E6FE4 ; =0x00004A2C\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021E6FCA\n    bl sub_02037454\n    ldr r1, _021E6FE4 ; =0x00004A2C\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    beq _021E6FCA\n    mov r0, #0\n    str r0, [r5, r1]\n    mov r0, #0xc6\n    mov r1, #0x15\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    mov r1, #0\n    add r0, #0xc\n    str r1, [r5, r0]\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6FE4: .word 0x00004A2C"
    );
    #endif
}

void ov73_021E6FE8(void) {
    /* Original at 0x021E6FE8 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021E7054 ; =0x00004A2C\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021E7006\n    bl sub_02037454\n    ldr r1, _021E7054 ; =0x00004A2C\n    ldr r2, [r5, r1]\n    cmp r2, r0\n    beq _021E7006\n    mov r0, #0\n    str r0, [r5, r1]\n    ldr r0, _021E7058 ; =0x00004A34\n    ldr r1, [r5, r0]\n    sub r1, r1, #1\n    str r1, [r5, r0]\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    bge _021E701A\n    mov r1, #0\n    sub r0, #8\n    str r1, [r5, r0]\n    mov r1, #0xc9\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    add r0, r0, #1\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    cmp r0, #0x3c\n    ble _021E7048\n    ldr r0, _021E7054 ; =0x00004A2C\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _021E7048\n    mov r0, #0\n    sub r1, #0xc\n    str r0, [r5, r1]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E7048\n    add r0, r5, #0\n    mov r1, #1\n    bl ov73_021E781C\n    add r0, r5, #0\n    bl ov73_021E66F0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E7054: .word 0x00004A2C\n    _021E7058: .word 0x00004A34"
    );
    #endif
}

void ov73_021E705C(void) {
    /* Original at 0x021E705C */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0xd\n    bgt _021E707E\n    bge _021E7092\n    cmp r4, #8\n    bgt _021E7110\n    cmp r4, #2\n    blt _021E7110\n    beq _021E708C\n    cmp r4, #7\n    beq _021E710A\n    cmp r4, #8\n    beq _021E710A\n    pop {r4, r5, r6, pc}\n    cmp r4, #0x13\n    bgt _021E7086\n    beq _021E70D0\n    pop {r4, r5, r6, pc}\n    cmp r4, #0x19\n    beq _021E7098\n    pop {r4, r5, r6, pc}\n    bl ov73_021E761C\n    b _021E710A\n    bl ov73_021E6830\n    b _021E710A\n    ldr r0, [r5, #0x4c]\n    bl ov73_021E75FC\n    cmp r0, #0\n    bne _021E70AC\n    ldr r0, [r5, #0x4c]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl RemoveTextPrinter\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #2\n    bl ov73_021E71E4\n    ldr r0, [r5]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r5, #0\n    mov r1, #0xc\n    mov r2, #0\n    bl ov73_021E756C\n    add r0, r5, #0\n    bl ov73_021E6830\n    b _021E710A\n    ldr r0, _021E7114 ; =0x00004A28\n    ldrb r0, [r5, r0]\n    cmp r0, #1\n    beq _021E7110\n    add r0, r6, #0\n    bl sub_02034818\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferPlayersName\n    bl sub_0203769C\n    cmp r6, r0\n    beq _021E7110\n    add r0, r5, #0\n    bl ov73_021E6830\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E710A\n    ldr r1, _021E7118 ; =0x00004A24\n    ldr r0, _021E711C ; =0x0000FFFF\n    ldr r2, [r5, r1]\n    eor r0, r6\n    and r0, r2\n    str r0, [r5, r1]\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    str r4, [r5, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _021E7114: .word 0x00004A28\n    _021E7118: .word 0x00004A24\n    _021E711C: .word 0x0000FFFF"
    );
    #endif
}

void ov73_021E7120(void) {
    /* Original at 0x021E7120 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    add r6, r2, #0\n    cmp r0, #3\n    bne _021E71C0\n    cmp r4, #1\n    beq _021E713E\n    cmp r4, #0x13\n    beq _021E7182\n    b _021E71B8\n    add r0, r6, #0\n    bl sub_02034818\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferPlayersName\n    add r0, r5, #0\n    mov r1, #1\n    bl ov73_021E781C\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    str r4, [r5, r0]\n    bl sub_02037454\n    ldr r1, _021E71D8 ; =0x00004A1C\n    str r0, [r5, r1]\n    mov r0, #0\n    add r1, #8\n    str r0, [r5, r1]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E71D2\n    mov r2, #1\n    mov r0, #0x75\n    add r1, sp, #0\n    str r2, [sp]\n    bl sub_02037030\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    add r0, r6, #0\n    bl sub_02034818\n    add r2, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl BufferPlayersName\n    bl sub_0203769C\n    cmp r6, r0\n    beq _021E71D2\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E71AE\n    ldr r1, _021E71DC ; =0x00004A24\n    ldr r0, _021E71E0 ; =0x0000FFFF\n    ldr r2, [r5, r1]\n    eor r0, r6\n    and r0, r2\n    str r0, [r5, r1]\n    mov r0, #0xc6\n    lsl r0, r0, #2\n    add sp, #4\n    str r4, [r5, r0]\n    pop {r3, r4, r5, r6, pc}\n    bl GF_AssertFail\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    cmp r4, #1\n    bne _021E71D2\n    ldr r0, _021E71DC ; =0x00004A24\n    mov r1, #0\n    str r1, [r5, r0]\n    bl sub_02037454\n    ldr r1, _021E71D8 ; =0x00004A1C\n    str r0, [r5, r1]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021E71D8: .word 0x00004A1C\n    _021E71DC: .word 0x00004A24\n    _021E71E0: .word 0x0000FFFF"
    );
    #endif
}

void ov73_021E71E4(void) {
    /* Original at 0x021E71E4 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r3, r1, #0\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    ldr r1, [r0, r1]\n    mov r4, #8\n    str r4, [sp]\n    mov r4, #4\n    str r4, [sp, #4]\n    add r4, r1, #0\n    add r4, #0xc\n    str r4, [sp, #8]\n    mov r4, #0\n    lsl r2, r2, #0x1a\n    str r4, [sp, #0xc]\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x10]\n    ldrh r2, [r1]\n    lsl r2, r2, #0x15\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x14]\n    ldrh r1, [r1, #2]\n    ldr r2, _021E722C ; =_021EA51C\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x18]\n    ldrb r2, [r2, r3]\n    ldr r0, [r0]\n    mov r1, #1\n    mov r3, #0x14\n    bl CopyToBgTilemapRect\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    nop\n    _021E722C: .word _021EA51C"
    );
    #endif
}

void ov73_021E7230(void) {
    /* Original at 0x021E7230 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E7286\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov73_021E71E4\n    ldr r0, [r4, #0x28]\n    mov r1, #0x15\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    mov r0, #4\n    add r1, r5, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x40\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    lsr r6, r3, #0x1f\n    add r6, r3, r6\n    ldr r0, _021E72EC ; =0x00040100\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xae\n    lsl r0, r0, #2\n    str r1, [sp, #0xc]\n    add r0, r4, r0\n    mov r1, #4\n    add r2, r5, #0\n    asr r3, r6, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl String_Delete\n    mov r1, #0\n    ldr r0, _021E72F0 ; =0x00004A38\n    mvn r1, r1\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov73_021E71E4\n    ldr r0, [r4, #0x28]\n    mov r1, #0x16\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    mov r0, #4\n    add r1, r5, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x40\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    lsr r6, r3, #0x1f\n    add r6, r3, r6\n    ldr r0, _021E72EC ; =0x00040100\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xb2\n    lsl r0, r0, #2\n    str r1, [sp, #0xc]\n    add r0, r4, r0\n    mov r1, #4\n    add r2, r5, #0\n    asr r3, r6, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl String_Delete\n    ldr r0, [r4]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [r4]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021E72EC: .word 0x00040100\n    _021E72F0: .word 0x00004A38"
    );
    #endif
}

void ov73_021E72F4(void) {
    /* Original at 0x021E72F4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r1, [r0]\n    add r1, #0xa\n    strh r1, [r0]\n    ldrh r2, [r0]\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    cmp r2, r1\n    bls _021E730A\n    mov r1, #0\n    strh r1, [r0]\n    ldrh r0, [r0]\n    bl GF_SinDeg\n    mov r1, #0xa\n    add r2, r0, #0\n    mul r2, r1\n    asr r0, r2, #0xb\n    lsr r0, r0, #0x14\n    add r0, r2, r0\n    asr r0, r0, #0xc\n    add r0, #0xf\n    lsl r2, r0, #5\n    mov r0, #0x1d\n    orr r2, r0\n    add r0, sp, #0\n    strh r2, [r0]\n    add r0, sp, #0\n    mov r2, #2\n    bl GX_LoadOBJPltt\n    add r0, sp, #0\n    mov r1, #0x2a\n    mov r2, #2\n    bl GX_LoadOBJPltt\n    pop {r3, pc}"
    );
    #endif
}

void ov73_021E7340(void) {
    sub_02034818(0);
}

void ov73_021E735C(void) {
    /* Original at 0x021E735C */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r3, [sp, #0x14]\n    add r6, r0, #0\n    str r2, [sp, #0x10]\n    bl sub_0203769C\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x14]\n    bl ov73_021E7490\n    cmp r0, #0\n    bne _021E737C\n    add sp, #0x28\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r7, [sp, #0x14]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    add r4, r7, #0\n    mov r5, #1\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    cmp r0, #0\n    beq _021E7448\n    bl PlayerProfile_GetTrainerID_VisibleHalf\n    str r0, [sp, #0x24]\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    ldr r1, [r4, #0x2c]\n    bl PlayerName_FlatToString\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x24]\n    ldr r0, [r0, #0x24]\n    mov r1, #0\n    mov r3, #5\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x14]\n    ldr r0, [r0, #0x24]\n    ldr r1, [r1, #0x28]\n    mov r2, #1\n    mov r3, #0x32\n    bl ReadMsgData_ExpandPlaceholders\n    str r0, [sp, #0x18]\n    ldr r1, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    cmp r1, r0\n    str r5, [sp]\n    bne _021E7410\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E7464 ; =0x00020300\n    mov r1, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x2c]\n    add r0, r6, #0\n    mov r3, #5\n    bl AddTextPrinterParameterizedWithColor\n    str r5, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E7464 ; =0x00020300\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0\n    mov r3, #0x46\n    bl AddTextPrinterParameterizedWithColor\n    b _021E7442\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    mov r1, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x2c]\n    add r0, r6, #0\n    mov r3, #5\n    bl AddTextPrinterParameterizedWithColor\n    str r5, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0\n    mov r3, #0x46\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    ldr r0, [sp, #0x20]\n    add r7, #8\n    add r0, r0, #1\n    add r4, r4, #4\n    add r5, #0x12\n    str r0, [sp, #0x20]\n    cmp r0, #5\n    blt _021E738E\n    add r0, r6, #0\n    bl CopyWindowToVram\n    mov r0, #1\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E7464: .word 0x00020300"
    );
    #endif
}

void ov73_021E7468(void) {
    /* Original at 0x021E7468 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov73_021E746C(void) {
    sub_02034818(0);
}

void ov73_021E7488(void) {
    ov73_021E746C();
}

void ov73_021E7490(void) {
    /* Original at 0x021E7490 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r4, #0\n    str r4, [sp]\n    add r6, r7, #0\n    add r5, r7, #0\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r1, [r6, r0]\n    add r0, r0, #4\n    str r1, [r6, r0]\n    add r0, r4, #0\n    bl sub_02034818\n    mov r1, #0xce\n    lsl r1, r1, #2\n    str r0, [r6, r1]\n    ldr r0, _021E7560 ; =0x00004A3C\n    ldr r2, _021E7564 ; =0x00004A44\n    ldr r1, [r5, r0]\n    add r0, r0, #4\n    ldr r0, [r5, r0]\n    str r1, [r5, r2]\n    add r1, r2, #4\n    str r0, [r5, r1]\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    beq _021E74DA\n    bl PlayerProfile_GetTrainerID\n    ldr r1, _021E7560 ; =0x00004A3C\n    str r0, [r5, r1]\n    mov r1, #1\n    ldr r0, _021E7568 ; =0x00004A40\n    b _021E74E4\n    add r0, r2, #0\n    mov r1, #0\n    sub r0, #8\n    str r1, [r5, r0]\n    sub r0, r2, #4\n    add r4, r4, #1\n    str r1, [r5, r0]\n    add r6, #8\n    add r5, #0x10\n    cmp r4, #5\n    blt _021E749C\n    mov r4, #0\n    add r2, r7, #0\n    add r3, r7, #0\n    mov r0, #0xce\n    mov r1, #0xcf\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldr r0, [r7, r0]\n    ldr r1, [r7, r1]\n    cmp r1, r0\n    beq _021E7520\n    mov r1, #1\n    str r1, [sp]\n    cmp r0, #0\n    bne _021E7518\n    mov r0, #0x36\n    mov r1, #3\n    lsl r0, r0, #4\n    str r1, [r2, r0]\n    b _021E7550\n    mov r0, #0x36\n    lsl r0, r0, #4\n    str r1, [r2, r0]\n    b _021E7550\n    ldr r0, _021E7560 ; =0x00004A3C\n    ldr r5, _021E7564 ; =0x00004A44\n    ldr r1, [r3, r0]\n    ldr r6, [r3, r5]\n    add r0, r0, #4\n    add r5, r5, #4\n    ldr r0, [r3, r0]\n    ldr r5, [r3, r5]\n    eor r1, r6\n    eor r5, r0\n    orr r1, r5\n    beq _021E7550\n    mov r1, #1\n    str r1, [sp]\n    cmp r0, #0\n    bne _021E754A\n    mov r0, #0x36\n    mov r1, #3\n    lsl r0, r0, #4\n    str r1, [r2, r0]\n    b _021E7550\n    mov r0, #0x36\n    lsl r0, r0, #4\n    str r1, [r2, r0]\n    add r4, r4, #1\n    add r7, #8\n    add r2, r2, #4\n    add r3, #0x10\n    cmp r4, #5\n    blt _021E74F6\n    ldr r0, [sp]\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E7560: .word 0x00004A3C\n    _021E7564: .word 0x00004A44\n    _021E7568: .word 0x00004A40"
    );
    #endif
}

void ov73_021E756C(void) {
    /* Original at 0x021E756C */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r7, r1, #0\n    mov r0, #0xb4\n    mov r1, #0x32\n    add r6, r2, #0\n    bl String_New\n    add r4, r0, #0\n    ldr r0, [r5, #0x28]\n    add r1, r7, #0\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x24]\n    ldr r1, [r5, #0x44]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #0xaa\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0xaa\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow2\n    cmp r6, #0\n    bne _021E75DC\n    add r0, r5, #0\n    bl ov73_021E7818\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0xaa\n    lsl r0, r0, #2\n    ldr r2, [r5, #0x44]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add sp, #0xc\n    str r0, [r5, #0x4c]\n    pop {r4, r5, r6, r7, pc}\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0xaa\n    lsl r0, r0, #2\n    ldr r2, [r5, #0x44]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r0, #0xff\n    str r0, [r5, #0x4c]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E75FC(void) {
    TextPrinterCheckActive(0, 1, 1);
}

void ov73_021E761C(void) {
    /* Original at 0x021E761C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xaa\n    lsl r1, r1, #2\n    add r0, r0, r1\n    ldr r3, _021E7628 ; =ClearFrameAndWindow2\n    mov r1, #0\n    bx r3\n    _021E7628: .word ClearFrameAndWindow2"
    );
    #endif
}

void ov73_021E762C(void) {
    /* Original at 0x021E762C */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #2\n    add r0, r5, r0\n    str r0, [sp, #0x14]\n    mov r0, #0xc1\n    lsl r0, r0, #2\n    mov r4, #0\n    add r0, r5, r0\n    str r4, [sp, #8]\n    add r6, r5, #0\n    mov r7, #0x1c\n    str r0, [sp, #0x18]\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #3\n    bhi _021E771A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E7664: ; jump table\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    cmp r0, #0\n    bne _021E767A\n    bl GF_AssertFail\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl PlayerProfile_GetTrainerGender\n    str r0, [sp, #0xc]\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl PlayerProfile_GetAvatar\n    str r0, [sp, #0x10]\n    bl sub_0203769C\n    cmp r4, r0\n    bne _021E76AC\n    mov r0, #0x8b\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #2\n    lsl r1, r1, #1\n    ldr r0, [r5, r0]\n    add r1, #0x26\n    bl Sprite_SetAnimCtrlSeq\n    b _021E76C8\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x18]\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    add r2, r4, #0\n    bl ov73_021E77A4\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #4]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x36\n    mov r1, #2\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #8]\n    b _021E771A\n    bl sub_0203769C\n    cmp r4, r0\n    bne _021E7706\n    mov r0, #0xce\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl PlayerProfile_GetTrainerGender\n    add r1, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    lsl r1, r1, #1\n    ldr r0, [r5, r0]\n    add r1, #0x27\n    bl Sprite_SetAnimCtrlSeq\n    b _021E7712\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x36\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    ldr r0, [sp, #4]\n    add r4, r4, #1\n    add r0, r0, #2\n    add r5, r5, #4\n    add r6, #8\n    add r7, r7, #2\n    str r0, [sp, #4]\n    cmp r4, #5\n    blt _021E764E\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    beq _021E7738\n    ldr r0, _021E773C ; =0x0000064E\n    bl PlaySE\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _021E773C: .word 0x0000064E"
    );
    #endif
}

void ov73_021E7740(void) {
    /* Original at 0x021E7740 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0xc1\n    add r5, r0, #0\n    lsl r2, r2, #2\n    add r4, r1, #0\n    mov r0, #0x64\n    mov r1, #9\n    add r2, r5, r2\n    mov r3, #0x32\n    bl GfGfxLoader_GetPlttData\n    mov r2, #0xbf\n    lsl r2, r2, #2\n    str r0, [r5, r2]\n    add r2, #0xc\n    add r0, r4, #0\n    mov r1, #0xb\n    add r2, r5, r2\n    mov r3, #0x32\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    mov r3, #3\n    lsl r3, r3, #8\n    str r0, [r5, r3]\n    mov r0, #0x32\n    sub r3, #0xc\n    str r0, [sp]\n    mov r0, #0x64\n    mov r1, #0x2b\n    mov r2, #1\n    add r3, r5, r3\n    bl GfGfxLoader_GetCharData\n    mov r3, #0xbb\n    lsl r3, r3, #2\n    str r0, [r5, r3]\n    mov r0, #0x32\n    add r3, #0xc\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #1\n    add r3, r5, r3\n    bl GfGfxLoader_GetCharDataFromOpenNarc\n    mov r1, #0x2f\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E77A4(void) {
    /* Original at 0x021E77A4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r6, r1, #0\n    ldr r0, [sp, #0x18]\n    add r1, r3, #0\n    add r5, r2, #0\n    bl SpriteToUnionRoomAvatarIdx\n    add r4, r0, #0\n    ldr r0, [r6, #4]\n    mov r2, #6\n    ldr r6, [r0, #0xc]\n    ldr r0, [r7, #4]\n    lsl r2, r2, #8\n    ldr r1, [r0, #0x14]\n    add r0, r4, #0\n    mul r0, r2\n    add r0, r1, r0\n    ldr r1, _021E77E4 ; =ov73_021EA520\n    lsl r3, r5, #1\n    ldrh r1, [r1, r3]\n    bl GX_LoadOBJ\n    lsl r0, r4, #5\n    add r1, r5, #7\n    add r0, r6, r0\n    lsl r1, r1, #5\n    mov r2, #0x20\n    bl GX_LoadOBJPltt\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E77E4: .word ov73_021EA520"
    );
    #endif
}

void ov73_021E77E8(void) {
    /* Original at 0x021E77E8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xbf\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    mov r0, #3\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    mov r0, #0xbb\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    mov r0, #0x2f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

u8 ov73_021E7818(void) {
    return 1;
}

void ov73_021E781C(void) {
    /* Original at 0x021E781C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _021E7868\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _021E783A\n    mov r0, #1\n    bl sub_02038C1C\n    b _021E784A\n    bl sub_02037454\n    add r0, r4, r0\n    cmp r0, #5\n    ble _021E7846\n    mov r0, #5\n    bl sub_02038C1C\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    ldr r0, _021E786C ; =0x00004A29\n    bne _021E785A\n    mov r1, #2\n    strb r1, [r5, r0]\n    pop {r3, r4, r5, pc}\n    cmp r4, #0\n    bne _021E7864\n    mov r1, #1\n    strb r1, [r5, r0]\n    pop {r3, r4, r5, pc}\n    mov r1, #0\n    strb r1, [r5, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _021E786C: .word 0x00004A29"
    );
    #endif
}

void ov73_021E7870(void) {
    /* Original at 0x021E7870 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r0, #0\n    add r6, r1, #0\n    bl ov73_021E746C\n    add r5, r0, #0\n    ldr r0, _021E7950 ; =0x00004A1C\n    ldr r1, [r4, r0]\n    cmp r5, r1\n    ble _021E789A\n    mov r2, #1\n    add r0, sp, #0\n    strb r2, [r0]\n    mov r0, #0x75\n    add r1, sp, #0\n    bl sub_02037030\n    mov r1, #1\n    ldr r0, _021E7954 ; =0x00004A20\n    b _021E789E\n    mov r1, #0\n    add r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, _021E7958 ; =0x00004A18\n    ldr r0, [r4, r0]\n    cmp r5, r0\n    bne _021E78AE\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    cmp r5, #5\n    bhi _021E7942\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E78BE: ; jump table\n    bl sub_02037454\n    cmp r0, #1\n    bgt _021E78DA\n    bl sub_02033250\n    cmp r0, #1\n    bls _021E78E0\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0xc6\n    mov r1, #0x11\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    sub r1, #0x12\n    bl ov73_021E781C\n    add r0, r4, #0\n    bl ov73_021E6830\n    add sp, #4\n    mov r0, #2\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #2\n    bl sub_0205A904\n    ldr r0, _021E7958 ; =0x00004A18\n    ldr r1, [r4, r0]\n    cmp r5, r1\n    bge _021E7942\n    add r0, #0x11\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    beq _021E7918\n    cmp r0, #1\n    beq _021E7922\n    b _021E792A\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov73_021E781C\n    b _021E792A\n    add r0, r4, #0\n    mov r1, #0\n    bl ov73_021E781C\n    bl sub_02037454\n    ldr r1, _021E7950 ; =0x00004A1C\n    str r0, [r4, r1]\n    b _021E7942\n    mov r0, #9\n    bl sub_0205A904\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov73_021E781C\n    bl ov73_021E746C\n    ldr r1, _021E7958 ; =0x00004A18\n    str r0, [r4, r1]\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _021E7950: .word 0x00004A1C\n    _021E7954: .word 0x00004A20\n    _021E7958: .word 0x00004A18"
    );
    #endif
}

u8 ov73_021E795C(void) {
    return 0x2c;
}

void ov73_021E7960(void) {
    /* Original at 0x021E7960 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x2c\n    bx lr"
    );
    #endif
}

void ov73_021E7964(void) {
    /* Original at 0x021E7964 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r7, r0, #0\n    add r6, r7, #0\n    mov ip, r1\n    mov r5, #5\n    add r6, #0xdc\n    add r4, r6, #0\n    sub r4, #0x2c\n    add r3, r6, #0\n    mov r2, #5\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021E7978\n    ldr r0, [r4]\n    sub r5, r5, #1\n    sub r6, #0x2c\n    str r0, [r3]\n    cmp r5, #2\n    bgt _021E7970\n    add r7, #0x58\n    mov r3, #5\n    mov r2, ip\n    ldmia r2!, {r0, r1}\n    mov ip, r2\n    stmia r7!, {r0, r1}\n    sub r3, r3, #1\n    bne _021E7990\n    mov r0, ip\n    ldr r0, [r0]\n    str r0, [r7]\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov73_021E79A8(void) {
    /* Original at 0x021E79A8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    cmp r5, #2\n    blt _021E79B6\n    cmp r5, #5\n    ble _021E79BA\n    bl GF_AssertFail\n    add r2, r5, #1\n    cmp r2, #5\n    bgt _021E79E2\n    mov r0, #0x2c\n    mul r0, r2\n    add r3, r4, r0\n    add r6, r3, #0\n    add r7, r3, #0\n    sub r6, #0x2c\n    mov r5, #5\n    ldmia r7!, {r0, r1}\n    stmia r6!, {r0, r1}\n    sub r5, r5, #1\n    bne _021E79CE\n    ldr r0, [r7]\n    add r2, r2, #1\n    add r3, #0x2c\n    str r0, [r6]\n    cmp r2, #5\n    ble _021E79C6\n    ldr r0, _021E79F0 ; =0x0000FFFF\n    add r1, r4, #0\n    add r4, #0xdc\n    add r1, #0xdc\n    strh r0, [r4]\n    strh r0, [r1, #0x10]\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E79F0: .word 0x0000FFFF"
    );
    #endif
}

void ov73_021E79F4(void) {
    /* Original at 0x021E79F4 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    add r5, r2, #0\n    str r1, [sp, #4]\n    str r3, [sp, #8]\n    cmp r0, #0\n    ble _021E7A6E\n    mov r7, #0x2c\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r6, [r0]\n    ldr r0, [sp, #4]\n    cmp r1, r0\n    beq _021E7A5C\n    cmp r6, #0\n    beq _021E7A5C\n    add r0, r6, #0\n    bl sub_0202C8C4\n    cmp r0, #1\n    beq _021E7A5C\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_0202C8E4\n    cmp r0, #0\n    bne _021E7A5C\n    mov r4, #0\n    add r1, r4, #2\n    add r2, r1, #0\n    mul r2, r7\n    add r0, r6, #0\n    add r1, r5, r2\n    bl sub_0202C8E4\n    cmp r0, #0\n    beq _021E7A4E\n    add r0, r5, #0\n    add r1, r4, #2\n    bl ov73_021E79A8\n    add r4, r4, #1\n    cmp r4, #4\n    blt _021E7A34\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov73_021E7964\n    ldr r0, [sp, #8]\n    add r0, r0, #4\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    add r1, r0, #1\n    ldr r0, [sp]\n    str r1, [sp, #0xc]\n    cmp r1, r0\n    blt _021E7A0C\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E7A74(void) {
    /* Original at 0x021E7A74 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x12\n    lsl r0, r0, #4\n    bx lr"
    );
    #endif
}

void ov73_021E7A7C(void) {
    /* Original at 0x021E7A7C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x12\n    lsl r0, r0, #4\n    bx lr"
    );
    #endif
}

void ov73_021E7A84(void) {
    /* Original at 0x021E7A84 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x12\n    lsl r0, r0, #4\n    bx lr"
    );
    #endif
}

void ov73_021E7A8C(void) {
    /* Original at 0x021E7A8C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r4, _021E7ABC ; =ov73_021EA664\n    lsl r5, r0, #2\n    ldr r0, [r4, r5]\n    mov r2, #0\n    ldrb r3, [r0]\n    cmp r3, #0xff\n    beq _021E7AB4\n    add r4, r0, #0\n    ldrb r3, [r0]\n    cmp r1, r3\n    bne _021E7AAA\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    add r2, r2, #1\n    ldrb r3, [r4, r2]\n    add r0, r0, #1\n    cmp r3, #0xff\n    bne _021E7A9E\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    nop\n    _021E7ABC: .word ov73_021EA664"
    );
    #endif
}

void ov73_021E7AC0(void) {
    /* Original at 0x021E7AC0 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r7, r2, #0\n    str r3, [sp]\n    bl Save_PlayerData_GetProfile\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    cmp r0, #0\n    ble _021E7B36\n    mov r0, #0\n    add r1, r5, #0\n    mov r2, #0x48\n    bl MIi_CpuClearFast\n    add r0, r4, #0\n    bl PlayerProfile_GetTrainerID\n    str r0, [r5]\n    add r0, r4, #0\n    bl PlayerProfile_GetTrainerGender\n    strb r0, [r5, #4]\n    mov r0, #GAME_VERSION\n    strb r0, [r5, #5]\n    mov r0, #2\n    strb r0, [r5, #6]\n    add r0, r4, #0\n    bl PlayerProfile_GetNamePtr\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #8\n    mov r2, #8\n    bl CopyU16StringArrayN\n    add r3, r5, #0\n    add r6, r7, #0\n    add r3, #0x18\n    mov r2, #6\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021E7B16\n    mov r0, #0\n    strb r0, [r5, #0x19]\n    strb r0, [r5, #0x18]\n    ldr r0, [sp, #4]\n    add r7, #0x30\n    add r0, r0, #1\n    str r0, [sp, #4]\n    add r1, r0, #0\n    ldr r0, [sp]\n    add r5, #0x48\n    cmp r1, r0\n    blt _021E7ADA\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E7B3C(void) {
    /* Original at 0x021E7B3C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r4, #0\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_020270C4\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov73_021E7A74\n    cmp r4, r0\n    beq _021E7B64\n    bl GF_AssertFail\n    mov r0, #1\n    mov r2, #0x63\n    str r0, [sp]\n    mov r0, #3\n    lsl r2, r2, #2\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r6, r2\n    mov r3, #4\n    bl ov73_021E7AC0\n    add r0, r7, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E7B84(void) {
    /* Original at 0x021E7B84 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r4, #0\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_020270C4\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov73_021E7A7C\n    cmp r4, r0\n    beq _021E7BAC\n    bl GF_AssertFail\n    mov r0, #1\n    add r6, #0xc\n    str r0, [sp]\n    mov r3, #4\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    str r3, [sp, #4]\n    bl ov73_021E7AC0\n    add r0, r7, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E7BC8(void) {
    /* Original at 0x021E7BC8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r4, #0\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_020270C4\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov73_021E7A84\n    cmp r4, r0\n    beq _021E7BF0\n    bl GF_AssertFail\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #5\n    add r6, #0xcc\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    mov r3, #4\n    bl ov73_021E7AC0\n    add r0, r7, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E7C0C(void) {
    /* Original at 0x021E7C0C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r4, #0\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_020270C4\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov73_021E7A74\n    cmp r4, r0\n    beq _021E7C34\n    bl GF_AssertFail\n    mov r0, #0\n    mov r2, #0x63\n    str r0, [sp]\n    lsl r2, r2, #2\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r6, r2\n    mov r3, #4\n    bl ov73_021E7AC0\n    add r0, r7, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E7C50(void) {
    /* Original at 0x021E7C50 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r4, #0\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_020270C4\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov73_021E7A7C\n    cmp r4, r0\n    beq _021E7C78\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    add r6, #0xc\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    mov r3, #4\n    bl ov73_021E7AC0\n    add r0, r7, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E7C94(void) {
    /* Original at 0x021E7C94 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r4, #0\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_020270C4\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov73_021E7A84\n    cmp r4, r0\n    beq _021E7CBC\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    add r6, #0xcc\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    mov r3, #4\n    bl ov73_021E7AC0\n    add r0, r7, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E7CD8(void) {
    /* Original at 0x021E7CD8 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r4, r1, #0\n    ldrb r1, [r6, #0x18]\n    add r5, r0, #0\n    cmp r1, #0\n    bne _021E7CEA\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r3, #0\n    bl ov73_021E7A8C\n    cmp r0, #0\n    bne _021E7CFA\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    mov r1, #0\n    cmp r4, #0\n    ble _021E7D24\n    add r2, r5, #0\n    ldrb r0, [r2, #0x18]\n    cmp r0, #0\n    bne _021E7D1C\n    mov r0, #0x48\n    mul r0, r1\n    add r3, r5, r0\n    mov r2, #9\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021E7D10\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r1, r1, #1\n    add r2, #0x48\n    cmp r1, r4\n    blt _021E7D02\n    mov r2, #0\n    cmp r4, #0\n    ble _021E7D4E\n    add r1, r5, #0\n    ldrb r0, [r1, #0x19]\n    cmp r0, #3\n    blo _021E7D46\n    mov r0, #0x48\n    mul r0, r2\n    add r3, r5, r0\n    mov r2, #9\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021E7D3A\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r2, r2, #1\n    add r1, #0x48\n    cmp r2, r4\n    blt _021E7D2C\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov73_021E7D54(void) {
    /* Original at 0x021E7D54 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl sub_02034818\n    cmp r0, #0\n    bne _021E7D66\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    bl PlayerProfile_GetVersion\n    cmp r0, #0\n    beq _021E7D70\n    add r4, r5, #0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E7D74(void) {
    /* Original at 0x021E7D74 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    str r0, [sp]\n    ldr r0, [sp, #0x44]\n    str r1, [sp, #4]\n    str r0, [sp, #0x44]\n    ldr r0, [sp, #0x48]\n    add r7, r2, #0\n    str r0, [sp, #0x48]\n    add r0, sp, #0x1c\n    mov r1, #0\n    mov r2, #0x10\n    str r3, [sp, #8]\n    ldr r5, [sp, #0x40]\n    bl MI_CpuFill8\n    mov r4, #0\n    add r6, r4, #0\n    cmp r7, #0\n    ble _021E7E18\n    str r5, [sp, #0x14]\n    ldr r0, [sp, #0x14]\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021E7E0C\n    mov r0, #0\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x10]\n    b _021E7E06\n    add r0, r4, #1\n    add r1, r7, #0\n    bl _s32_div_f\n    add r4, r1, #0\n    lsl r0, r4, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021E7DAE\n    cmp r4, r6\n    beq _021E7DAE\n    add r0, sp, #0x1c\n    ldrb r0, [r0, r4]\n    cmp r0, #4\n    beq _021E7DAE\n    add r1, r0, #1\n    add r0, sp, #0x1c\n    strb r1, [r0, r4]\n    ldr r0, [sp, #8]\n    cmp r4, r0\n    beq _021E7DFA\n    ldr r2, [sp, #0x44]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov73_021E7D54\n    add r3, r0, #0\n    beq _021E7DFA\n    ldr r2, [sp, #0xc]\n    ldr r0, [sp]\n    ldr r3, [r3, r2]\n    ldr r2, [sp, #0x10]\n    ldr r1, [sp, #4]\n    add r2, r3, r2\n    ldr r3, [sp, #0x48]\n    bl ov73_021E7CD8\n    ldr r0, [sp, #0x10]\n    add r0, #0x48\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x18]\n    cmp r0, #4\n    blt _021E7DB8\n    ldr r0, [sp, #0x14]\n    add r6, r6, #1\n    add r0, r0, #4\n    str r0, [sp, #0x14]\n    cmp r6, r7\n    blt _021E7D9E\n    mov r0, #0x17\n    bl SaveSubstruct_UpdateCRC\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E7E24(void) {
    /* Original at 0x021E7E24 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    ldr r1, [sp, #0x18]\n    str r3, [sp]\n    str r1, [sp, #4]\n    add r4, r2, #0\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r1, _021E7E48 ; =0x0000090C\n    add r2, r5, #0\n    add r0, r0, r1\n    mov r1, #8\n    add r3, r4, #0\n    bl ov73_021E7D74\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _021E7E48: .word 0x0000090C"
    );
    #endif
}

void ov73_021E7E4C(void) {
    /* Original at 0x021E7E4C */
    /* Requires manual decompilation - 145 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _021E7E62\n    cmp r0, #1\n    bne _021E7E60\n    b _021E7F62\n    b _021E7F78\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021E7F80 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _021E7F84 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r2, #5\n    mov r0, #3\n    mov r1, #0x96\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    ldr r1, _021E7F88 ; =0x000012CC\n    add r0, r6, #0\n    mov r2, #0x96\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _021E7F88 ; =0x000012CC\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #0x96\n    bl BgConfig_Alloc\n    str r0, [r4, #4]\n    ldr r0, _021E7F8C ; =_021EA940\n    add r2, sp, #0\n    ldr r3, _021E7F90 ; =ov73_021EA68C\n    str r4, [r0]\n    add r7, r2, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r7, #0\n    bl SetBothScreensModesAndDisable\n    mov r0, #0xb\n    mov r1, #0x20\n    mov r2, #0x96\n    bl MessageFormat_New_Custom\n    mov r1, #0xbd\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r2, _021E7F94 ; =0x0000031F\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x96\n    bl NewMsgDataFromNarc\n    ldr r1, _021E7F98 ; =0x00000BD4\n    ldr r2, _021E7F9C ; =0x0000030A\n    str r0, [r4, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x96\n    bl NewMsgDataFromNarc\n    ldr r1, _021E7FA0 ; =0x00000BD8\n    mov r2, #0x32\n    str r0, [r4, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    lsl r2, r2, #4\n    mov r3, #0x96\n    bl NewMsgDataFromNarc\n    ldr r1, _021E7FA4 ; =0x00000BDC\n    str r0, [r4, r1]\n    mov r0, #4\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov73_021E8148\n    add r0, r4, #0\n    bl ov73_021E8454\n    mov r1, #0\n    mov r0, #0x34\n    add r2, r1, #0\n    bl Sound_SetSceneAndPlayBGM\n    ldr r1, _021E7FA8 ; =0x00020020\n    mov r0, #0x96\n    bl Heap_Alloc\n    str r0, [r4, #0x24]\n    add r0, #0x1f\n    mov r1, #0x1f\n    bic r0, r1\n    mov r1, #2\n    lsl r1, r1, #0x10\n    mov r2, #0\n    bl NNS_FndCreateExpHeapEx\n    str r0, [r4, #0x28]\n    ldr r1, _021E7FAC ; =0x0000047D\n    mov r0, #0xb\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    ldr r2, _021E7FB0 ; =0x04000304\n    ldr r0, _021E7FB4 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    mov r0, #1\n    str r0, [r5]\n    b _021E7F78\n    bl LoadDwcOverlay\n    bl LoadOVY38\n    bl sub_02034D8C\n    mov r0, #0\n    str r0, [r5]\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7F80: .word 0xFFFFE0FF\n    _021E7F84: .word 0x04001000\n    _021E7F88: .word 0x000012CC\n    _021E7F8C: .word _021EA940\n    _021E7F90: .word ov73_021EA68C\n    _021E7F94: .word 0x0000031F\n    _021E7F98: .word 0x00000BD4\n    _021E7F9C: .word 0x0000030A\n    _021E7FA0: .word 0x00000BD8\n    _021E7FA4: .word 0x00000BDC\n    _021E7FA8: .word 0x00020020\n    _021E7FAC: .word 0x0000047D\n    _021E7FB0: .word 0x04000304\n    _021E7FB4: .word 0xFFFF7FFF"
    );
    #endif
}

void ov73_021E7FB8(void) {
    /* Original at 0x021E7FB8 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    add r5, r0, #0\n    bl ov00_021ECB40\n    bl ov72_022378DC\n    bl ov00_021ECB40\n    ldr r1, [r4]\n    cmp r1, #5\n    bhi _021E8060\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E7FE0: ; jump table\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _021E8060\n    ldr r1, [r5, #0x28]\n    ldr r0, _021E8070 ; =_021EA940\n    str r1, [r0, #4]\n    ldr r0, _021E8074 ; =ov73_021E83F4\n    ldr r1, _021E8078 ; =ov73_021E841C\n    bl ov00_021EC294\n    mov r0, #1\n    str r0, [r4]\n    b _021E8060\n    ldr r3, [r5, #0x10]\n    mov r2, #0xc\n    add r6, r3, #0\n    mul r6, r2\n    ldr r2, _021E807C ; =ov73_021EA83C\n    add r0, r5, #0\n    ldr r2, [r2, r6]\n    blx r2\n    str r0, [r4]\n    b _021E8060\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E8060\n    mov r0, #3\n    str r0, [r4]\n    b _021E8060\n    ldr r3, [r5, #0x10]\n    mov r2, #0xc\n    add r6, r3, #0\n    mul r6, r2\n    ldr r2, _021E8080 ; =ov73_021EA840\n    add r0, r5, #0\n    ldr r2, [r2, r6]\n    blx r2\n    str r0, [r4]\n    b _021E8060\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E8060\n    ldr r3, [r5, #0x10]\n    mov r2, #0xc\n    add r6, r3, #0\n    mul r6, r2\n    ldr r2, _021E8084 ; =ov73_021EA844\n    ldr r1, [r4]\n    ldr r2, [r2, r6]\n    add r0, r5, #0\n    blx r2\n    str r0, [r4]\n    b _021E8060\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E8088 ; =0x00000BF8\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _021E806C\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _021E8070: .word _021EA940\n    _021E8074: .word ov73_021E83F4\n    _021E8078: .word ov73_021E841C\n    _021E807C: .word ov73_021EA83C\n    _021E8080: .word ov73_021EA840\n    _021E8084: .word ov73_021EA844\n    _021E8088: .word 0x00000BF8"
    );
    #endif
}

void ov73_021E808C(void) {
    /* Original at 0x021E808C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, [r4, #0x24]\n    bl Heap_Free\n    bl UnloadOVY38\n    bl UnloadDwcOverlay\n    add r0, r4, #0\n    bl ov73_021E847C\n    ldr r0, _021E80F4 ; =0x00000BDC\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _021E80F8 ; =0x00000BD8\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _021E80FC ; =0x00000BD4\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    mov r0, #0xbd\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl MessageFormat_Delete\n    add r0, r4, #0\n    bl ov73_021E8164\n    bl sub_02034DE0\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x96\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _021E80F4: .word 0x00000BDC\n    _021E80F8: .word 0x00000BD8\n    _021E80FC: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E8100(void) {
    /* Original at 0x021E8100 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl GF_RunVramTransferTasks\n    ldr r0, [r4, #4]\n    bl DoScheduledBgGpuUpdates\n    bl OamManager_ApplyAndResetBuffers\n    ldr r3, _021E8120 ; =0x027E0000\n    ldr r1, _021E8124 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    _021E8120: .word 0x027E0000\n    _021E8124: .word 0x00003FF8"
    );
    #endif
}

void ov73_021E8128(void) {
    GfGfx_SetBanks(5);
}

void ov73_021E8148(void) {
    /* Original at 0x021E8148 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl OverlayManager_GetArgs\n    mov r1, #0\n    str r0, [r4]\n    add r0, r4, #0\n    add r2, r1, #0\n    str r1, [r4, #0x10]\n    bl ov73_021E844C\n    pop {r4, pc}"
    );
    #endif
}

void ov73_021E8164(void) {
    /* Original at 0x021E8164 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov73_021E8168(void) {
    /* Original at 0x021E8168 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _021E8194 ; =ov73_021EA69C\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl ObjCharTransfer_Init\n    mov r0, #0x14\n    mov r1, #0x96\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _021E8194: .word ov73_021EA69C"
    );
    #endif
}

void ov73_021E8198(void) {
    /* Original at 0x021E8198 */
    /* Requires manual decompilation - 117 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r0, #0\n    mov r0, #0x64\n    mov r1, #0x96\n    bl NARC_New\n    str r0, [sp, #0x14]\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r2, #0x96\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    ldr r1, _021E8290 ; =0x00000BFC\n    mov r0, #0xa\n    add r1, r6, r1\n    mov r2, #0x96\n    bl G2dRenderer_Init\n    ldr r1, _021E8294 ; =0x00000BF8\n    mov r2, #1\n    str r0, [r6, r1]\n    add r0, r1, #4\n    add r0, r6, r0\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    ldr r7, _021E8298 ; =0x00000D24\n    mov r4, #0\n    add r5, r6, #0\n    mov r0, #2\n    add r1, r4, #0\n    mov r2, #0x96\n    bl Create2DGfxResObjMan\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021E81E8\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    mov r0, #0x96\n    str r0, [sp, #8]\n    ldr r0, _021E8298 ; =0x00000D24\n    ldr r1, [sp, #0x14]\n    ldr r0, [r6, r0]\n    mov r2, #0x2e\n    bl AddCharResObjFromOpenNarc\n    ldr r1, _021E829C ; =0x00000D34\n    mov r3, #0\n    str r0, [r6, r1]\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x96\n    sub r1, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [r6, r1]\n    ldr r1, [sp, #0x14]\n    mov r2, #0xa\n    bl AddPlttResObjFromOpenNarc\n    ldr r1, _021E82A0 ; =0x00000D38\n    mov r2, #0x2f\n    str r0, [r6, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x96\n    sub r1, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r6, r1]\n    ldr r1, [sp, #0x14]\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _021E82A4 ; =0x00000D3C\n    mov r2, #0x30\n    str r0, [r6, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x96\n    sub r1, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r6, r1]\n    ldr r1, [sp, #0x14]\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x35\n    lsl r1, r1, #6\n    str r0, [r6, r1]\n    sub r1, #0xc\n    ldr r0, [r6, r1]\n    bl sub_0200ACF0\n    ldr r0, _021E82A0 ; =0x00000D38\n    ldr r0, [r6, r0]\n    bl sub_0200AF94\n    ldr r0, [sp, #0x14]\n    bl NARC_Delete\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E8290: .word 0x00000BFC\n    _021E8294: .word 0x00000BF8\n    _021E8298: .word 0x00000D24\n    _021E829C: .word 0x00000D34\n    _021E82A0: .word 0x00000D38\n    _021E82A4: .word 0x00000D3C"
    );
    #endif
}

void ov73_021E82A8(void) {
    /* Original at 0x021E82A8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, _021E82D0 ; =0x00000BF8\n    ldr r1, [r1, r4]\n    str r1, [r0]\n    str r2, [r0, #4]\n    mov r2, #0\n    mov r1, #1\n    str r2, [r0, #0x10]\n    lsl r1, r1, #0xc\n    str r1, [r0, #0x14]\n    str r1, [r0, #0x18]\n    str r1, [r0, #0x1c]\n    strh r2, [r0, #0x20]\n    mov r1, #1\n    str r1, [r0, #0x24]\n    str r3, [r0, #0x28]\n    mov r1, #0x96\n    str r1, [r0, #0x2c]\n    pop {r3, r4}\n    bx lr\n    _021E82D0: .word 0x00000BF8"
    );
    #endif
}

void ov73_021E82D4(void) {
    /* Original at 0x021E82D4 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x5c\n    mov r1, #0\n    add r5, r0, #0\n    str r1, [sp]\n    sub r0, r1, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, _021E8384 ; =0x00000D24\n    str r1, [sp, #0x10]\n    ldr r0, [r5, r2]\n    add r3, r1, #0\n    str r0, [sp, #0x14]\n    add r0, r2, #4\n    ldr r0, [r5, r0]\n    str r0, [sp, #0x18]\n    add r0, r2, #0\n    add r0, #8\n    ldr r0, [r5, r0]\n    str r0, [sp, #0x1c]\n    add r0, r2, #0\n    add r0, #0xc\n    ldr r0, [r5, r0]\n    add r2, #0x40\n    str r0, [sp, #0x20]\n    str r1, [sp, #0x24]\n    add r0, r5, r2\n    add r2, r1, #0\n    str r1, [sp, #0x28]\n    bl CreateSpriteResourcesHeader\n    ldr r2, _021E8388 ; =0x00000D64\n    add r0, sp, #0x2c\n    add r1, r5, #0\n    add r2, r5, r2\n    mov r3, #1\n    bl ov73_021E82A8\n    mov r7, #0xdd\n    ldr r4, _021E838C ; =ov73_021EA684\n    mov r6, #0\n    lsl r7, r7, #4\n    ldrh r0, [r4]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x34]\n    ldrh r0, [r4, #2]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    mov r1, #0xdd\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0xdd\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r5, r7]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #2\n    blt _021E832A\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    bl sub_0203A880\n    add sp, #0x5c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E8384: .word 0x00000D24\n    _021E8388: .word 0x00000D64\n    _021E838C: .word ov73_021EA684"
    );
    #endif
}

void ov73_021E8390(void) {
    /* Original at 0x021E8390 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0x96\n    add r4, r1, #0\n    add r6, r2, #0\n    bl YesNoPrompt_Create\n    mov r1, #0\n    mov r2, #8\n    str r2, [sp, #0xc]\n    str r5, [sp]\n    str r1, [sp, #4]\n    str r6, [sp, #8]\n    mov r2, #0x17\n    add r3, sp, #0\n    strb r2, [r3, #0x10]\n    strb r4, [r3, #0x11]\n    ldrb r4, [r3, #0x12]\n    mov r2, #0xf\n    add r7, r0, #0\n    bic r4, r2\n    strb r4, [r3, #0x12]\n    ldrb r4, [r3, #0x12]\n    mov r2, #0xf0\n    bic r4, r2\n    strb r4, [r3, #0x12]\n    strb r1, [r3, #0x13]\n    add r1, sp, #0\n    bl YesNoPrompt_InitFromTemplate\n    add r0, r7, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov73_021E83D4(void) {
    /* Original at 0x021E83D4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl YesNoPrompt_HandleInput\n    add r4, r0, #0\n    beq _021E83E6\n    add r0, r5, #0\n    bl YesNoPrompt_Destroy\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E83EC(void) {
    /* Original at 0x021E83EC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x1c]\n    str r2, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov73_021E83F4(void) {
    /* Original at 0x021E83F4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl OS_DisableInterrupts\n    add r6, r0, #0\n    ldr r0, _021E8418 ; =_021EA940\n    add r1, r5, #0\n    ldr r0, [r0, #4]\n    add r2, r4, #0\n    bl NNS_FndAllocFromExpHeapEx\n    add r4, r0, #0\n    add r0, r6, #0\n    bl OS_RestoreInterrupts\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _021E8418: .word _021EA940"
    );
    #endif
}

void ov73_021E841C(void) {
    /* Original at 0x021E841C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    beq _021E8438\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    ldr r0, _021E843C ; =_021EA940\n    add r1, r5, #0\n    ldr r0, [r0, #4]\n    bl NNS_FndFreeToExpHeap\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    pop {r3, r4, r5, pc}\n    nop\n    _021E843C: .word _021EA940"
    );
    #endif
}

void ov73_021E8440(void) {
    ov00_021EC9D4();
}

void ov73_021E844C(void) {
    /* Original at 0x021E844C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x14]\n    str r2, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov73_021E8454(void) {
    /* Original at 0x021E8454 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov73_021E8128\n    bl ov73_021E8168\n    add r0, r4, #0\n    bl ov73_021E8198\n    add r0, r4, #0\n    bl ov73_021E82D4\n    ldr r0, _021E8478 ; =ov73_021E8100\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    pop {r4, pc}\n    nop\n    _021E8478: .word ov73_021E8100"
    );
    #endif
}

void ov73_021E847C(void) {
    /* Original at 0x021E847C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _021E84C0 ; =0x00000D34\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    ldr r0, _021E84C4 ; =0x00000D38\n    ldr r0, [r6, r0]\n    bl sub_0200B0A8\n    ldr r7, _021E84C8 ; =0x00000D24\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, r7]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021E8496\n    ldr r0, _021E84CC ; =0x00000BF8\n    ldr r0, [r6, r0]\n    bl SpriteList_Delete\n    ldr r0, _021E84CC ; =0x00000BF8\n    mov r1, #0\n    str r1, [r6, r0]\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E84C0: .word 0x00000D34\n    _021E84C4: .word 0x00000D38\n    _021E84C8: .word 0x00000D24\n    _021E84CC: .word 0x00000BF8"
    );
    #endif
}

void ov73_021E84D0(void) {
    /* Original at 0x021E84D0 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov73_021E8B64\n    mov r0, #8\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x96\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4, #4]\n    bl ov73_021E8628\n    add r0, r4, #0\n    bl ov73_021E8730\n    add r0, r4, #0\n    bl ov73_021E8A08\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, [r4]\n    ldr r0, [r0, #0xc]\n    bl sub_02039418\n    add r0, r4, #0\n    bl ov73_021EA12C\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0]\n    bl sub_0202D488\n    add r1, r4, #0\n    add r1, #0x90\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0x90\n    ldr r1, [r0]\n    add r0, r4, #0\n    add r0, #0x94\n    str r1, [r0]\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x9c\n    str r1, [r0]\n    ldr r0, _021E85A0 ; =0x00000F0C\n    mov r1, #0\n    str r1, [r4, r0]\n    bl ov00_021EC5B4\n    cmp r0, #0\n    bne _021E8594\n    ldr r0, [r4]\n    ldr r0, [r0, #0x24]\n    cmp r0, #0\n    beq _021E858E\n    ldr r0, _021E85A4 ; =0x00000F0F\n    ldr r1, _021E85A8 ; =0x00000BD8\n    str r0, [sp]\n    mov r2, #1\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    add r3, r2, #0\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #2\n    bl ov73_021E83EC\n    add r0, r4, #0\n    bl ov73_021EA15C\n    b _021E8598\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    b _021E8598\n    mov r0, #0x33\n    str r0, [r4, #0x1c]\n    mov r0, #2\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _021E85A0: .word 0x00000F0C\n    _021E85A4: .word 0x00000F0F\n    _021E85A8: .word 0x00000BD8"
    );
    #endif
}

void ov73_021E85AC(void) {
    /* Original at 0x021E85AC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov73_021E8440\n    bl sub_0203A930\n    ldr r4, [r5, #0x1c]\n    ldr r1, _021E85D8 ; =ov73_021EA848\n    lsl r2, r4, #2\n    ldr r1, [r1, r2]\n    add r0, r5, #0\n    blx r1\n    ldr r1, [r5, #0x1c]\n    cmp r4, r1\n    beq _021E85D6\n    mov r1, #0xf9\n    mov r2, #0\n    lsl r1, r1, #4\n    strh r2, [r5, r1]\n    add r1, r1, #2\n    strh r2, [r5, r1]\n    pop {r3, r4, r5, pc}\n    _021E85D8: .word ov73_021EA848"
    );
    #endif
}

void ov73_021E85DC(void) {
    /* Original at 0x021E85DC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E8620 ; =0x00000F98\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021E85F6\n    bl SysTask_Destroy\n    ldr r0, _021E8620 ; =0x00000F98\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov73_021E8BBC\n    add r0, r4, #0\n    bl ov73_021E8B20\n    ldr r0, [r4, #4]\n    bl ov73_021E870C\n    ldr r0, _021E8624 ; =0x00000F9C\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x14]\n    str r0, [r4, #0x10]\n    cmp r0, #0\n    bne _021E861A\n    mov r0, #5\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _021E8620: .word 0x00000F98\n    _021E8624: .word 0x00000F9C"
    );
    #endif
}

void ov73_021E8628(void) {
    /* Original at 0x021E8628 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x70\n    ldr r5, _021E86FC ; =ov73_021EA70C\n    add r4, r0, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0x54\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E8700 ; =ov73_021EA6F0\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r5, _021E8704 ; =ov73_021EA728\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021E8708 ; =ov73_021EA6D4\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x96\n    bl BG_ClearCharDataRange\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x96\n    bl BG_ClearCharDataRange\n    add sp, #0x70\n    pop {r3, r4, r5, pc}\n    nop\n    _021E86FC: .word ov73_021EA70C\n    _021E8700: .word ov73_021EA6F0\n    _021E8704: .word ov73_021EA728\n    _021E8708: .word ov73_021EA6D4"
    );
    #endif
}

void ov73_021E870C(void) {
    FreeBgTilemapBuffer(5);
    FreeBgTilemapBuffer(r4, 4);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 0);
}

void ov73_021E8730(void) {
    /* Original at 0x021E8730 */
    /* Requires manual decompilation - 251 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    str r0, [sp, #0x10]\n    ldr r4, [r0, #4]\n    mov r0, #0x58\n    mov r1, #0x96\n    bl NARC_New\n    mov r2, #0\n    str r2, [sp]\n    mov r1, #0x96\n    str r1, [sp, #4]\n    mov r1, #3\n    add r3, r2, #0\n    str r0, [sp, #0x2c]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x96\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    mov r1, #3\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x96\n    bl LoadFontPal1\n    mov r1, #0x1a\n    mov r0, #4\n    lsl r1, r1, #4\n    mov r2, #0x96\n    bl LoadFontPal1\n    ldr r0, [sp, #0x10]\n    ldr r0, [r0]\n    ldr r0, [r0, #0x10]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x96\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl LoadUserFrameGfx2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x96\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x96\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #2\n    add r2, r4, #0\n    mov r3, #1\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    mov r0, #6\n    str r1, [sp]\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x96\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #6\n    add r2, r4, #0\n    mov r3, #1\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x96\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #0xb\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    mov r0, #6\n    str r1, [sp]\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x96\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #0xc\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    add r1, r0, #0\n    bl BG_SetMaskColor\n    mov r0, #4\n    mov r1, #0\n    bl BG_SetMaskColor\n    mov r2, #0x33\n    ldr r1, _021E894C ; =0x00000F98\n    ldr r0, [sp, #0x10]\n    lsl r2, r2, #4\n    add r0, r0, r1\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, [sp, #0x2c]\n    mov r1, #5\n    add r2, sp, #0x38\n    mov r3, #0x96\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    add r4, r0, #0\n    ldr r0, [sp, #0x38]\n    mov r2, #0xfa\n    ldr r1, [sp, #0x10]\n    lsl r2, r2, #4\n    add r1, r1, r2\n    ldr r0, [r0, #0xc]\n    mov r2, #0x80\n    bl MIi_CpuCopy16\n    ldr r0, [sp, #0x38]\n    ldr r2, _021E8950 ; =0x00001020\n    ldr r1, [sp, #0x10]\n    ldr r0, [r0, #0xc]\n    add r1, r1, r2\n    mov r2, #0x80\n    bl MIi_CpuCopy16\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    ldr r1, _021E8950 ; =0x00001020\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    sub r1, #0x80\n    add r0, r0, r1\n    str r0, [sp, #0x14]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x28]\n    add r0, r0, #1\n    lsl r1, r0, #5\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x24]\n    cmp r0, #0x15\n    blt _021E889E\n    bl GF_AssertFail\n    ldr r0, [sp, #0x30]\n    mov r7, #1\n    add r4, r0, #2\n    ldr r0, [sp, #0x18]\n    add r6, r0, #2\n    ldr r0, [sp, #0x14]\n    add r5, r0, #2\n    ldr r0, [sp, #0x20]\n    asr r0, r0, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x34]\n    mov r0, #0xfa\n    lsl r0, r0, #4\n    ldrh r0, [r4, r0]\n    ldr r3, [sp, #0x34]\n    add r1, r6, #0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r2, #1\n    bl BlendPalette\n    add r7, r7, #1\n    add r4, r4, #2\n    add r6, r6, #2\n    add r5, r5, #2\n    cmp r7, #0x10\n    blt _021E88B6\n    ldr r0, [sp, #0x18]\n    add r0, #0x20\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x24]\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x1c]\n    cmp r0, #1\n    beq _021E8902\n    mov r0, #3\n    ldr r1, [sp, #0x20]\n    lsl r0, r0, #8\n    add r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [sp, #0x20]\n    cmp r1, r0\n    blt _021E8894\n    str r0, [sp, #0x20]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _021E8894\n    ldr r0, [sp, #0x14]\n    add r0, #0x20\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x28]\n    add r0, r0, #1\n    str r0, [sp, #0x28]\n    cmp r0, #3\n    blt _021E8882\n    ldr r1, _021E8950 ; =0x00001020\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    mov r1, #0x2a\n    lsl r1, r1, #4\n    bl DC_FlushRange\n    ldr r1, _021E8954 ; =0x00000F9C\n    ldr r0, [sp, #0x10]\n    mov r2, #1\n    str r2, [r0, r1]\n    ldr r2, _021E8958 ; =0x000012C4\n    mov r3, #0\n    str r3, [r0, r2]\n    sub r2, r1, #4\n    ldr r1, [sp, #0x10]\n    ldr r0, _021E895C ; =ov73_021E8960\n    add r1, r1, r2\n    mov r2, #0x14\n    bl SysTask_CreateOnVBlankQueue\n    ldr r2, _021E894C ; =0x00000F98\n    ldr r1, [sp, #0x10]\n    str r0, [r1, r2]\n    ldr r0, [sp, #0x2c]\n    bl NARC_Delete\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _021E894C: .word 0x00000F98\n    _021E8950: .word 0x00001020\n    _021E8954: .word 0x00000F9C\n    _021E8958: .word 0x000012C4\n    _021E895C: .word ov73_021E8960"
    );
    #endif
}

void ov73_021E8960(void) {
    /* Original at 0x021E8960 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021E89FE\n    ldr r1, _021E8A00 ; =0x0000032B\n    mov r0, #1\n    ldrb r2, [r4, r1]\n    eor r2, r0\n    strb r2, [r4, r1]\n    ldrb r2, [r4, r1]\n    tst r0, r2\n    bne _021E89FE\n    add r0, r1, #1\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bhi _021E8996\n    sub r0, r1, #3\n    ldrsh r0, [r4, r0]\n    add r2, r4, #0\n    add r2, #0x88\n    lsl r0, r0, #5\n    add r0, r2, r0\n    mov r1, #0\n    mov r2, #0x20\n    bl GX_LoadBGPltt\n    mov r0, #0xcb\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021E89A4\n    cmp r0, #2\n    bne _021E89BA\n    mov r0, #0xca\n    lsl r0, r0, #2\n    ldrsh r0, [r4, r0]\n    add r1, r4, #0\n    add r1, #0x88\n    lsl r0, r0, #5\n    add r0, r1, r0\n    mov r1, #0\n    mov r2, #0x20\n    bl GXS_LoadBGPltt\n    ldr r0, _021E8A04 ; =0x0000032A\n    ldrsb r1, [r4, r0]\n    cmp r1, #0\n    bne _021E89E2\n    sub r1, r0, #2\n    ldrsh r1, [r4, r1]\n    add r2, r1, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsh r1, [r4, r1]\n    cmp r1, #0x15\n    blt _021E89FE\n    mov r2, #0x13\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsb r2, [r4, r0]\n    mov r1, #1\n    eor r1, r2\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    sub r1, r0, #2\n    ldrsh r1, [r4, r1]\n    sub r2, r1, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsh r1, [r4, r1]\n    cmp r1, #0\n    bge _021E89FE\n    mov r2, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsb r1, [r4, r0]\n    eor r1, r2\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    _021E8A00: .word 0x0000032B\n    _021E8A04: .word 0x0000032A"
    );
    #endif
}

void ov73_021E8A08(void) {
    /* Original at 0x021E8A08 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    mov r3, #4\n    add r4, r0, #0\n    str r3, [sp]\n    mov r0, #0x17\n    str r0, [sp, #4]\n    mov r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0xa4\n    ldr r1, _021E8B04 ; =0x00000E18\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    bl AddWindowParameterized\n    ldr r0, _021E8B04 ; =0x00000E18\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x94\n    ldr r1, _021E8B08 ; =0x00000DF8\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #0x1a\n    bl AddWindowParameterized\n    ldr r0, _021E8B08 ; =0x00000DF8\n    mov r1, #0xf\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x9c\n    ldr r1, _021E8B0C ; =0x00000DE8\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #0x1a\n    bl AddWindowParameterized\n    ldr r0, _021E8B0C ; =0x00000DE8\n    mov r1, #0xf\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x85\n    lsl r0, r0, #2\n    ldr r1, _021E8B10 ; =0x00000E08\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #4\n    bl AddWindowParameterized\n    ldr r0, _021E8B10 ; =0x00000E08\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r3, #1\n    ldr r0, _021E8B14 ; =0x000F0E00\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021E8B18 ; =0x00000BE4\n    ldr r0, _021E8B10 ; =0x00000E08\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #0\n    bl ov73_021EA088\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    ldr r1, _021E8B1C ; =0x00000DD8\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #2\n    bl AddWindowParameterized\n    ldr r0, _021E8B1C ; =0x00000DD8\n    mov r1, #0xf\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _021E8B04: .word 0x00000E18\n    _021E8B08: .word 0x00000DF8\n    _021E8B0C: .word 0x00000DE8\n    _021E8B10: .word 0x00000E08\n    _021E8B14: .word 0x000F0E00\n    _021E8B18: .word 0x00000BE4\n    _021E8B1C: .word 0x00000DD8"
    );
    #endif
}

void ov73_021E8B20(void) {
    /* Original at 0x021E8B20 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E8B50 ; =0x00000DD8\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _021E8B54 ; =0x00000E08\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _021E8B58 ; =0x00000DE8\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _021E8B5C ; =0x00000DF8\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _021E8B60 ; =0x00000E18\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}\n    nop\n    _021E8B50: .word 0x00000DD8\n    _021E8B54: .word 0x00000E08\n    _021E8B58: .word 0x00000DE8\n    _021E8B5C: .word 0x00000DF8\n    _021E8B60: .word 0x00000E18"
    );
    #endif
}

void ov73_021E8B64(void) {
    /* Original at 0x021E8B64 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xb4\n    mov r1, #0x96\n    bl String_New\n    mov r1, #0xbe\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    mov r0, #4\n    mov r1, #0x96\n    bl String_New\n    ldr r1, _021E8BB0 ; =0x00000BE8\n    str r0, [r4, r1]\n    mov r0, #3\n    mov r1, #0x96\n    bl String_New\n    ldr r1, _021E8BB4 ; =0x00000BEC\n    str r0, [r4, r1]\n    sub r1, #0x18\n    ldr r0, [r4, r1]\n    mov r1, #0xa\n    bl NewString_ReadMsgData\n    ldr r1, _021E8BB8 ; =0x00000BE4\n    str r0, [r4, r1]\n    mov r0, #1\n    lsl r0, r0, #8\n    mov r1, #0x96\n    bl String_New\n    mov r1, #0xbf\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _021E8BB0: .word 0x00000BE8\n    _021E8BB4: .word 0x00000BEC\n    _021E8BB8: .word 0x00000BE4"
    );
    #endif
}

void ov73_021E8BBC(void) {
    /* Original at 0x021E8BBC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xbf\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E8BF0 ; =0x00000BE4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E8BF4 ; =0x00000BEC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E8BF8 ; =0x00000BE8\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0xbe\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    nop\n    _021E8BF0: .word 0x00000BE4\n    _021E8BF4: .word 0x00000BEC\n    _021E8BF8: .word 0x00000BE8"
    );
    #endif
}

void ov73_021E8BFC(void) {
    /* Original at 0x021E8BFC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E8C24 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E8C28 ; =0x00000BDC\n    mov r2, #0x11\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x30\n    mov r2, #1\n    bl ov73_021E83EC\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E8C24: .word 0x00000F0F\n    _021E8C28: .word 0x00000BDC"
    );
    #endif
}

void ov73_021E8C2C(void) {
    /* Original at 0x021E8C2C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _021E8C80 ; =0x000012C8\n    ldr r0, [r4, r0]\n    bl ov73_021E83D4\n    cmp r0, #0\n    beq _021E8C78\n    cmp r0, #2\n    bne _021E8C56\n    bl sub_0203946C\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov73_021E844C\n    mov r0, #0x2e\n    str r0, [r4, #0x1c]\n    b _021E8C78\n    ldr r0, _021E8C84 ; =0x00000F0F\n    ldr r1, _021E8C88 ; =0x00000BD8\n    str r0, [sp]\n    mov r2, #1\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    add r3, r2, #0\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #2\n    bl ov73_021E83EC\n    add r0, r4, #0\n    bl ov73_021EA15C\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E8C80: .word 0x000012C8\n    _021E8C84: .word 0x00000F0F\n    _021E8C88: .word 0x00000BD8"
    );
    #endif
}

void ov73_021E8C8C(void) {
    /* Original at 0x021E8C8C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E8CB4 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E8CB8 ; =0x00000BD8\n    mov r2, #0xc\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x30\n    mov r2, #0x34\n    bl ov73_021E83EC\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E8CB4: .word 0x00000F0F\n    _021E8CB8: .word 0x00000BD8"
    );
    #endif
}

void ov73_021E8CBC(void) {
    /* Original at 0x021E8CBC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E8D08 ; =0x000012C8\n    ldr r0, [r4, r0]\n    bl ov73_021E83D4\n    cmp r0, #0\n    beq _021E8D04\n    cmp r0, #2\n    bne _021E8CE4\n    bl ov00_021EC5B4\n    cmp r0, #0\n    bne _021E8CDE\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    b _021E8D04\n    mov r0, #0x29\n    str r0, [r4, #0x1c]\n    b _021E8D04\n    bl ov00_021EC5B4\n    cmp r0, #0\n    bne _021E8CFA\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov73_021E844C\n    mov r0, #0x2e\n    b _021E8CFC\n    mov r0, #0x29\n    str r0, [r4, #0x1c]\n    ldr r0, [r4]\n    mov r1, #1\n    str r1, [r0, #0x20]\n    mov r0, #3\n    pop {r4, pc}\n    _021E8D08: .word 0x000012C8"
    );
    #endif
}

void ov73_021E8D0C(void) {
    /* Original at 0x021E8D0C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x2c\n    mov r1, #2\n    mov r2, #1\n    mov r3, #0x14\n    bl ov00_021EC3F0\n    mov r0, #2\n    bl ov00_021EC454\n    bl ov00_021EC4A4\n    mov r0, #3\n    str r0, [r4, #0x1c]\n    pop {r4, pc}"
    );
    #endif
}

void ov73_021E8D2C(void) {
    /* Original at 0x021E8D2C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x44\n    add r4, r0, #0\n    bl ov00_021EC60C\n    bl ov00_021EC5B4\n    cmp r0, #0\n    beq _021E8DAC\n    bl ov00_021EC724\n    cmp r0, #8\n    bhi _021E8D8A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E8D52: ; jump table\n    add r0, sp, #4\n    bl ov00_021EC0FC\n    mov r1, #0xf1\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r2, [sp, #4]\n    add r0, r1, #4\n    str r2, [r4, r0]\n    bl ov00_021EC210\n    bl ov00_021EC8D8\n    add r0, r4, #0\n    bl ov73_021EA180\n    mov r0, #0x37\n    str r0, [r4, #0x1c]\n    b _021E8DAC\n    add r0, sp, #0\n    bl ov00_021EC0FC\n    add r0, r4, #0\n    bl ov73_021EA180\n    mov r1, #0x35\n    str r1, [r4, #0x1c]\n    ldr r0, _021E8DB4 ; =0x00000F1C\n    sub r1, #0x37\n    str r1, [r4, r0]\n    b _021E8DAC\n    add r0, sp, #8\n    bl ov00_021EC9E0\n    mov r0, #4\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    add sp, #0x44\n    pop {r3, r4, pc}\n    nop\n    _021E8DB4: .word 0x00000F1C"
    );
    #endif
}

void ov73_021E8DB8(void) {
    ov00_021ECD04();
}

void ov73_021E8DC8(void) {
    /* Original at 0x021E8DC8 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl ov00_021ECDC8\n    cmp r0, #5\n    bhi _021E8E6E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E8DE2: ; jump table\n    mov r0, #6\n    str r0, [r4, #0x1c]\n    b _021E8E6E\n    add r0, r4, #0\n    bl ov73_021EA180\n    add r0, sp, #4\n    add r1, sp, #0\n    bl ov00_021EC11C\n    mov r1, #0xf1\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r2, [sp, #4]\n    add r0, r1, #4\n    str r2, [r4, r0]\n    bl ov00_021EC210\n    bl ov00_021EC8D8\n    mov r0, #0x37\n    str r0, [r4, #0x1c]\n    ldr r1, [sp]\n    cmp r1, #7\n    bhi _021E8E5C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E8E2C: ; jump table\n    str r0, [r4, #0x1c]\n    b _021E8E5C\n    bl ov00_021FA0D8\n    mov r0, #0x37\n    str r0, [r4, #0x1c]\n    b _021E8E5C\n    str r0, [r4, #0x1c]\n    b _021E8E5C\n    bl ov00_021ED9B4\n    mov r0, #0x37\n    str r0, [r4, #0x1c]\n    b _021E8E5C\n    bl sub_020399EC\n    ldr r1, [sp, #4]\n    ldr r0, _021E8E74 ; =0xFFFFB1E0\n    cmp r1, r0\n    bge _021E8E6E\n    ldr r0, _021E8E78 ; =0xFFFF8AD1\n    cmp r1, r0\n    blt _021E8E6E\n    mov r0, #0x37\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    _021E8E74: .word 0xFFFFB1E0\n    _021E8E78: .word 0xFFFF8AD1"
    );
    #endif
}

void ov73_021E8E7C(void) {
    /* Original at 0x021E8E7C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl Save_SysInfo_GetDwcProfileId\n    cmp r0, #0\n    bne _021E8E96\n    ldr r1, [r5]\n    ldr r0, [r1, #8]\n    ldr r1, [r1, #0x1c]\n    bl Save_SysInfo_SetDwcProfileId\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl Save_SysInfo_GetDwcProfileId\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #0x14]\n    bl DWC_CreateFriendKey\n    add r3, r0, #0\n    add r2, r1, #0\n    add r0, r4, #0\n    add r1, r3, #0\n    bl ov72_022378C0\n    mov r0, #7\n    str r0, [r5, #0x1c]\n    mov r0, #3\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov73_021E8EBC(void) {
    ov72_02237CB0(3, 8, 0);
}

void ov73_021E8ED8(void) {
    /* Original at 0x021E8ED8 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    beq _021E8F90\n    bl ov72_02237B74\n    ldr r1, _021E8FAC ; =0x00000F94\n    mov r2, #0\n    str r2, [r4, r1]\n    add r2, r0, #7\n    cmp r2, #9\n    bhi _021E8F84\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021E8F00: ; jump table\n    add r0, r4, #0\n    bl ov73_021EA180\n    ldr r0, [r4]\n    ldr r0, [r0, #0x18]\n    cmp r0, #0\n    beq _021E8F2C\n    cmp r0, #1\n    beq _021E8F38\n    cmp r0, #2\n    beq _021E8F3E\n    b _021E8FA6\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0xd\n    bl ov73_021E83EC\n    b _021E8FA6\n    mov r0, #0x19\n    str r0, [r4, #0x1c]\n    b _021E8FA6\n    mov r0, #0x1d\n    str r0, [r4, #0x1c]\n    b _021E8FA6\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E8FA6\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E8FA6\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E8FA6\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E8FA6\n    add r0, r4, #0\n    bl ov73_021EA180\n    bl sub_020399EC\n    b _021E8FA6\n    ldr r0, _021E8FAC ; =0x00000F94\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _021E8FA6\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _021E8FAC: .word 0x00000F94"
    );
    #endif
}

void ov73_021E8FB0(void) {
    /* Original at 0x021E8FB0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r1, _021E8FDC ; =0x00000F24\n    ldr r0, [r0, #0xc]\n    add r1, r4, r1\n    bl sub_0203189C\n    ldr r1, _021E8FDC ; =0x00000F24\n    add r0, r4, r1\n    add r1, #0x64\n    add r1, r4, r1\n    bl ov72_02237CF4\n    mov r0, #0xa\n    str r0, [r4, #0x1c]\n    ldr r0, _021E8FE0 ; =0x00000F94\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _021E8FDC: .word 0x00000F24\n    _021E8FE0: .word 0x00000F94"
    );
    #endif
}

void ov73_021E8FE4(void) {
    /* Original at 0x021E8FE4 */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    bne _021E8FF2\n    b _021E90FA\n    bl ov72_02237B74\n    add r5, r0, #0\n    ldr r0, _021E9114 ; =0x00000F94\n    mov r1, #0\n    str r1, [r4, r0]\n    add r1, r5, #7\n    cmp r1, #9\n    bhi _021E90EE\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E9010: ; jump table\n    add r0, r4, #0\n    bl ov73_021EA180\n    ldr r0, _021E9118 ; =0x00000F88\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _021E903C\n    cmp r1, #1\n    beq _021E9092\n    cmp r1, #2\n    beq _021E9092\n    b _021E90A2\n    add r1, r0, #4\n    ldr r1, [r4, r1]\n    cmp r1, #3\n    bhi _021E9110\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E9050: ; jump table\n    ldr r0, [r4]\n    ldr r0, [r0, #0x18]\n    cmp r0, #0\n    beq _021E906A\n    cmp r0, #1\n    beq _021E9076\n    cmp r0, #2\n    beq _021E907C\n    b _021E9110\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0xd\n    bl ov73_021E83EC\n    b _021E9110\n    mov r0, #0x19\n    str r0, [r4, #0x1c]\n    b _021E9110\n    mov r0, #0x1d\n    str r0, [r4, #0x1c]\n    b _021E9110\n    sub r0, #0x6c\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9110\n    ldr r0, _021E911C ; =0x00000F1C\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9110\n    add r0, r4, #0\n    bl ov73_021EA180\n    bl sub_020399EC\n    b _021E9110\n    sub r0, #0x78\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9110\n    sub r0, #0x78\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9110\n    sub r0, #0x78\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9110\n    sub r0, #0x78\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9110\n    add r0, r4, #0\n    bl ov73_021EA180\n    bl sub_020399EC\n    b _021E9110\n    ldr r0, _021E9114 ; =0x00000F94\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _021E9110\n    bl sub_020399EC\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _021E9114: .word 0x00000F94\n    _021E9118: .word 0x00000F88\n    _021E911C: .word 0x00000F1C"
    );
    #endif
}

void ov73_021E9120(void) {
    /* Original at 0x021E9120 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    bl ov72_02237B80\n    mov r0, #0xc\n    str r0, [r4, #0x1c]\n    ldr r0, _021E9140 ; =0x00000F94\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov73_021EA15C\n    mov r0, #3\n    pop {r4, pc}\n    _021E9140: .word 0x00000F94"
    );
    #endif
}

void ov73_021E9144(void) {
    /* Original at 0x021E9144 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    beq _021E91D6\n    bl ov72_02237B74\n    ldr r1, _021E91F0 ; =0x00000F94\n    mov r2, #0\n    str r2, [r4, r1]\n    add r2, r0, #7\n    cmp r2, #6\n    bhi _021E91C0\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021E916C: ; jump table\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    b _021E91CE\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    b _021E91CE\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    b _021E91CE\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    b _021E91CE\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    b _021E91CE\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    bl sub_020399EC\n    b _021E91CE\n    cmp r0, #0\n    ble _021E91CE\n    add r1, r4, #0\n    add r1, #0x98\n    str r0, [r1]\n    ldr r0, [r4, #0x20]\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E91EC\n    ldr r0, _021E91F0 ; =0x00000F94\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _021E91EC\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    _021E91F0: .word 0x00000F94"
    );
    #endif
}

void ov73_021E91F4(void) {
    /* Original at 0x021E91F4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E921C ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E9220 ; =0x00000BD4\n    mov r2, #0\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0xe\n    bl ov73_021E83EC\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E921C: .word 0x00000F0F\n    _021E9220: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E9224(void) {
    /* Original at 0x021E9224 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E9264 ; =0x00000DF8\n    mov r1, #0\n    add r0, r4, r0\n    mov r2, #0x1f\n    mov r3, #0xe\n    bl DrawFrameAndWindow1\n    ldr r1, _021E9268 ; =0x00000BE8\n    add r2, r4, #0\n    ldr r0, _021E9264 ; =0x00000DF8\n    add r2, #0x9c\n    ldr r1, [r4, r1]\n    ldr r2, [r2]\n    add r0, r4, r0\n    mov r3, #3\n    bl ov73_021EA0F0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov73_021EA134\n    ldr r0, _021E9264 ; =0x00000DF8\n    add r0, r4, r0\n    bl CopyWindowToVram\n    mov r0, #0xf\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}\n    _021E9264: .word 0x00000DF8\n    _021E9268: .word 0x00000BE8"
    );
    #endif
}

void ov73_021E926C(void) {
    /* Original at 0x021E926C */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    ldr r2, _021E9368 ; =gSystem\n    mov r1, #0x40\n    ldr r3, [r2, #0x4c]\n    add r4, r0, #0\n    tst r1, r3\n    beq _021E92BA\n    add r0, #0x9c\n    ldr r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x9c\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r1, [r0]\n    add r0, r4, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    cmp r1, r0\n    ble _021E92A0\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x9c\n    str r1, [r0]\n    ldr r0, _021E936C ; =0x00000DF8\n    ldr r1, _021E9370 ; =0x00000BE8\n    add r0, r4, r0\n    ldr r1, [r4, r1]\n    add r4, #0x9c\n    ldr r2, [r4]\n    mov r3, #3\n    bl ov73_021EA0F0\n    ldr r0, _021E9374 ; =0x000005DC\n    bl PlaySE\n    b _021E9360\n    mov r1, #0x80\n    tst r1, r3\n    beq _021E92FC\n    add r0, #0x9c\n    ldr r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x9c\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    cmp r0, #1\n    bge _021E92E2\n    add r0, r4, #0\n    add r0, #0x98\n    ldr r1, [r0]\n    add r0, r4, #0\n    add r0, #0x9c\n    str r1, [r0]\n    ldr r0, _021E936C ; =0x00000DF8\n    ldr r1, _021E9370 ; =0x00000BE8\n    add r0, r4, r0\n    ldr r1, [r4, r1]\n    add r4, #0x9c\n    ldr r2, [r4]\n    mov r3, #3\n    bl ov73_021EA0F0\n    ldr r0, _021E9374 ; =0x000005DC\n    bl PlaySE\n    b _021E9360\n    ldr r2, [r2, #0x48]\n    mov r1, #1\n    tst r1, r2\n    beq _021E9348\n    add r0, sp, #0\n    add r1, sp, #0x10\n    bl ov00_021ECB94\n    add r1, r4, #0\n    add r2, r4, #0\n    add r1, #0x94\n    add r2, #0x9c\n    ldr r0, [r4]\n    ldr r1, [r1]\n    ldr r2, [r2]\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    ldr r0, [r0, #4]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    add r3, sp, #0\n    bl sub_0202D720\n    cmp r0, #0\n    beq _021E9332\n    mov r0, #0x14\n    b _021E9334\n    mov r0, #0x10\n    mov r1, #0\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov73_021EA134\n    ldr r0, _021E9374 ; =0x000005DC\n    bl PlaySE\n    b _021E9360\n    mov r1, #2\n    tst r1, r2\n    beq _021E9360\n    mov r1, #0\n    add r2, r1, #0\n    bl ov73_021EA134\n    mov r0, #0x15\n    str r0, [r4, #0x1c]\n    ldr r0, _021E9374 ; =0x000005DC\n    bl PlaySE\n    mov r0, #3\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    nop\n    _021E9368: .word gSystem\n    _021E936C: .word 0x00000DF8\n    _021E9370: .word 0x00000BE8\n    _021E9374: .word 0x000005DC"
    );
    #endif
}

void ov73_021E9378(void) {
    /* Original at 0x021E9378 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    add r2, r4, #0\n    lsl r0, r0, #4\n    add r2, #0x9c\n    ldr r0, [r4, r0]\n    ldr r2, [r2]\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r3, #2\n    mov r0, #0xbd\n    add r2, r4, #0\n    str r3, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    lsl r0, r0, #4\n    add r2, #0x94\n    ldr r0, [r4, r0]\n    ldr r2, [r2]\n    bl BufferIntegerAsString\n    ldr r0, _021E93E0 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    ldr r1, _021E93E4 ; =0x00000BD4\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r3, r2, #0\n    bl ov73_021E9F34\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x11\n    bl ov73_021E83EC\n    add r4, #0xa0\n    ldr r2, _021E93E8 ; =0x00000A38\n    mov r0, #0\n    add r1, r4, #0\n    bl MIi_CpuClearFast\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    _021E93E0: .word 0x00000F0F\n    _021E93E4: .word 0x00000BD4\n    _021E93E8: .word 0x00000A38"
    );
    #endif
}

void ov73_021E93EC(void) {
    /* Original at 0x021E93EC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E9414 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E9418 ; =0x00000BD4\n    mov r2, #2\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9F34\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0xd\n    bl ov73_021E83EC\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E9414: .word 0x00000F0F\n    _021E9418: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E941C(void) {
    /* Original at 0x021E941C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r0, #0x90\n    add r1, #0x9c\n    add r2, r4, #0\n    ldr r0, [r0]\n    ldr r1, [r1]\n    add r2, #0xa0\n    bl ov72_02237BD0\n    add r0, r4, #0\n    bl ov73_021EA15C\n    mov r0, #0x12\n    str r0, [r4, #0x1c]\n    ldr r0, _021E9448 ; =0x00000F94\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _021E9448: .word 0x00000F94"
    );
    #endif
}

void ov73_021E944C(void) {
    /* Original at 0x021E944C */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    beq _021E953A\n    bl ov72_02237B74\n    ldr r1, _021E9558 ; =0x00000F94\n    mov r2, #0\n    str r2, [r4, r1]\n    add r2, r0, #7\n    cmp r2, #7\n    bhi _021E9550\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021E9476: ; jump table\n    add r2, r4, #0\n    add r3, r4, #0\n    add r2, #0x90\n    add r3, #0x9c\n    ldr r0, [r4]\n    ldr r2, [r2]\n    ldr r3, [r3]\n    add r1, r4, #0\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #4]\n    add r1, #0xa0\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl sub_0202D7C0\n    add r0, r4, #0\n    mov r1, #0x27\n    mov r2, #0x13\n    bl ov73_021E83EC\n    add r0, sp, #0\n    add r1, sp, #0x10\n    bl ov00_021ECB94\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x94\n    add r4, #0x9c\n    ldr r1, [r1]\n    ldr r2, [r4]\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    ldr r0, [r0, #4]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    add r3, sp, #0\n    bl sub_0202D678\n    b _021E9550\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9550\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9550\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0xb\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9550\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9550\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9550\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    bl sub_020399EC\n    b _021E9550\n    ldr r0, _021E9558 ; =0x00000F94\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _021E9550\n    bl sub_020399EC\n    mov r0, #3\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    nop\n    _021E9558: .word 0x00000F94"
    );
    #endif
}

void ov73_021E955C(void) {
    /* Original at 0x021E955C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E9590 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E9594 ; =0x00000BD4\n    mov r2, #3\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x2d\n    bl ov73_021E83EC\n    add r0, r4, #0\n    bl ov73_021EA180\n    ldr r0, [r4]\n    mov r1, #0\n    str r1, [r0, #0x20]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E9590: .word 0x00000F0F\n    _021E9594: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E9598(void) {
    /* Original at 0x021E9598 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E95C4 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E95C8 ; =0x00000BD4\n    mov r2, #7\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x1a\n    bl ov73_021E83EC\n    add r0, r4, #0\n    bl ov73_021EA15C\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _021E95C4: .word 0x00000F0F\n    _021E95C8: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E95CC(void) {
    /* Original at 0x021E95CC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0202D568\n    add r4, r0, #0\n    ldr r0, [r5]\n    add r1, sp, #0\n    ldr r0, [r0, #4]\n    bl sub_0202D7F0\n    ldr r0, [r5]\n    ldr r2, _021E9610 ; =0x00000AD8\n    ldr r0, [r0, #0xc]\n    mov r1, #1\n    add r2, r5, r2\n    bl sub_02069528\n    add r1, sp, #0\n    ldrb r0, [r1]\n    ldr r3, _021E9610 ; =0x00000AD8\n    ldrb r1, [r1, #1]\n    add r2, r4, #0\n    add r3, r5, r3\n    bl ov72_02237C30\n    mov r0, #0x1b\n    str r0, [r5, #0x1c]\n    ldr r0, _021E9614 ; =0x00000F94\n    mov r1, #0\n    str r1, [r5, r0]\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _021E9610: .word 0x00000AD8\n    _021E9614: .word 0x00000F94"
    );
    #endif
}

void ov73_021E9618(void) {
    /* Original at 0x021E9618 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    beq _021E96CC\n    bl ov72_02237B74\n    ldr r1, _021E96E8 ; =0x00000F94\n    mov r2, #0\n    str r2, [r4, r1]\n    add r2, r0, #7\n    cmp r2, #7\n    bhi _021E96E2\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021E9640: ; jump table\n    ldr r0, [r4]\n    mov r1, #5\n    ldr r0, [r0]\n    mov r2, #2\n    bl sub_0202D5DC\n    add r0, r4, #0\n    mov r1, #0x27\n    mov r2, #0x1c\n    bl ov73_021E83EC\n    b _021E96E2\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E96E2\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E96E2\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E96E2\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E96E2\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E96E2\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    bl sub_020399EC\n    b _021E96E2\n    ldr r0, _021E96E8 ; =0x00000F94\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _021E96E2\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _021E96E8: .word 0x00000F94"
    );
    #endif
}

void ov73_021E96EC(void) {
    /* Original at 0x021E96EC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E9720 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E9724 ; =0x00000BD4\n    mov r2, #8\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x2d\n    bl ov73_021E83EC\n    add r0, r4, #0\n    bl ov73_021EA180\n    ldr r0, [r4]\n    mov r1, #0\n    str r1, [r0, #0x20]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E9720: .word 0x00000F0F\n    _021E9724: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E9728(void) {
    /* Original at 0x021E9728 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E9750 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E9754 ; =0x00000BD4\n    mov r2, #5\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x1e\n    bl ov73_021E83EC\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E9750: .word 0x00000F0F\n    _021E9754: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E9758(void) {
    /* Original at 0x021E9758 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #1\n    add r0, #0x94\n    str r1, [r0]\n    ldr r0, _021E97A0 ; =0x00000DE8\n    mov r1, #0\n    add r0, r4, r0\n    mov r2, #0x1f\n    mov r3, #0xe\n    bl DrawFrameAndWindow1\n    ldr r1, _021E97A4 ; =0x00000BEC\n    add r2, r4, #0\n    ldr r0, _021E97A0 ; =0x00000DE8\n    add r2, #0x94\n    ldr r1, [r4, r1]\n    ldr r2, [r2]\n    add r0, r4, r0\n    mov r3, #2\n    bl ov73_021EA0F0\n    mov r1, #1\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov73_021EA134\n    ldr r0, _021E97A0 ; =0x00000DE8\n    add r0, r4, r0\n    bl CopyWindowToVram\n    mov r0, #0x1f\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _021E97A0: .word 0x00000DE8\n    _021E97A4: .word 0x00000BEC"
    );
    #endif
}

void ov73_021E97A8(void) {
    /* Original at 0x021E97A8 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _021E986C ; =gSystem\n    mov r1, #0x40\n    ldr r3, [r2, #0x4c]\n    add r4, r0, #0\n    tst r1, r3\n    beq _021E97EE\n    add r0, #0x94\n    ldr r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x94\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    cmp r0, #0xa\n    ble _021E97D4\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x94\n    str r1, [r0]\n    ldr r0, _021E9870 ; =0x00000DE8\n    ldr r1, _021E9874 ; =0x00000BEC\n    add r0, r4, r0\n    ldr r1, [r4, r1]\n    add r4, #0x94\n    ldr r2, [r4]\n    mov r3, #2\n    bl ov73_021EA0F0\n    ldr r0, _021E9878 ; =0x000005DC\n    bl PlaySE\n    b _021E9866\n    mov r1, #0x80\n    tst r1, r3\n    beq _021E982C\n    add r0, #0x94\n    ldr r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x94\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    cmp r0, #1\n    bge _021E9812\n    add r0, r4, #0\n    mov r1, #0xa\n    add r0, #0x94\n    str r1, [r0]\n    ldr r0, _021E9870 ; =0x00000DE8\n    ldr r1, _021E9874 ; =0x00000BEC\n    add r0, r4, r0\n    ldr r1, [r4, r1]\n    add r4, #0x94\n    ldr r2, [r4]\n    mov r3, #2\n    bl ov73_021EA0F0\n    ldr r0, _021E9878 ; =0x000005DC\n    bl PlaySE\n    b _021E9866\n    ldr r2, [r2, #0x48]\n    mov r1, #1\n    tst r1, r2\n    beq _021E984E\n    mov r1, #0\n    add r2, r1, #0\n    bl ov73_021EA134\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0x20\n    bl ov73_021E83EC\n    ldr r0, _021E9878 ; =0x000005DC\n    bl PlaySE\n    b _021E9866\n    mov r1, #2\n    tst r1, r2\n    beq _021E9866\n    mov r1, #0\n    add r2, r1, #0\n    bl ov73_021EA134\n    mov r0, #0x17\n    str r0, [r4, #0x1c]\n    ldr r0, _021E9878 ; =0x000005DC\n    bl PlaySE\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _021E986C: .word gSystem\n    _021E9870: .word 0x00000DE8\n    _021E9874: .word 0x00000BEC\n    _021E9878: .word 0x000005DC"
    );
    #endif
}

void ov73_021E987C(void) {
    /* Original at 0x021E987C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E98A4 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E98A8 ; =0x00000BD4\n    mov r2, #6\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x21\n    bl ov73_021E83EC\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E98A4: .word 0x00000F0F\n    _021E98A8: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E98AC(void) {
    /* Original at 0x021E98AC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #1\n    add r0, #0x9c\n    str r1, [r0]\n    ldr r0, _021E98F4 ; =0x00000DF8\n    mov r1, #0\n    add r0, r4, r0\n    mov r2, #0x1f\n    mov r3, #0xe\n    bl DrawFrameAndWindow1\n    ldr r1, _021E98F8 ; =0x00000BE8\n    add r2, r4, #0\n    ldr r0, _021E98F4 ; =0x00000DF8\n    add r2, #0x9c\n    ldr r1, [r4, r1]\n    ldr r2, [r2]\n    add r0, r4, r0\n    mov r3, #3\n    bl ov73_021EA0F0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov73_021EA134\n    ldr r0, _021E98F4 ; =0x00000DF8\n    add r0, r4, r0\n    bl CopyWindowToVram\n    mov r0, #0x22\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _021E98F4: .word 0x00000DF8\n    _021E98F8: .word 0x00000BE8"
    );
    #endif
}

void ov73_021E98FC(void) {
    /* Original at 0x021E98FC */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _021E99C4 ; =gSystem\n    mov r1, #0x40\n    ldr r3, [r2, #0x4c]\n    add r4, r0, #0\n    tst r1, r3\n    beq _021E994A\n    add r0, #0x9c\n    ldr r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x9c\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r1, [r0]\n    add r0, r4, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    add r0, r0, #1\n    cmp r1, r0\n    bne _021E9930\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x9c\n    str r1, [r0]\n    ldr r0, _021E99C8 ; =0x00000DF8\n    ldr r1, _021E99CC ; =0x00000BE8\n    add r0, r4, r0\n    ldr r1, [r4, r1]\n    add r4, #0x9c\n    ldr r2, [r4]\n    mov r3, #3\n    bl ov73_021EA0F0\n    ldr r0, _021E99D0 ; =0x000005DC\n    bl PlaySE\n    b _021E99C0\n    mov r1, #0x80\n    tst r1, r3\n    beq _021E998C\n    add r0, #0x9c\n    ldr r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x9c\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    cmp r0, #1\n    bge _021E9972\n    add r0, r4, #0\n    add r0, #0x98\n    ldr r1, [r0]\n    add r0, r4, #0\n    add r0, #0x9c\n    str r1, [r0]\n    ldr r0, _021E99C8 ; =0x00000DF8\n    ldr r1, _021E99CC ; =0x00000BE8\n    add r0, r4, r0\n    ldr r1, [r4, r1]\n    add r4, #0x9c\n    ldr r2, [r4]\n    mov r3, #3\n    bl ov73_021EA0F0\n    ldr r0, _021E99D0 ; =0x000005DC\n    bl PlaySE\n    b _021E99C0\n    ldr r2, [r2, #0x48]\n    mov r1, #1\n    tst r1, r2\n    beq _021E99A8\n    mov r1, #0\n    add r2, r1, #0\n    bl ov73_021EA134\n    mov r0, #0x23\n    str r0, [r4, #0x1c]\n    ldr r0, _021E99D0 ; =0x000005DC\n    bl PlaySE\n    b _021E99C0\n    mov r1, #2\n    tst r1, r2\n    beq _021E99C0\n    mov r1, #0\n    add r2, r1, #0\n    bl ov73_021EA134\n    mov r0, #0x1d\n    str r0, [r4, #0x1c]\n    ldr r0, _021E99D0 ; =0x000005DC\n    bl PlaySE\n    mov r0, #3\n    pop {r4, pc}\n    _021E99C4: .word gSystem\n    _021E99C8: .word 0x00000DF8\n    _021E99CC: .word 0x00000BE8\n    _021E99D0: .word 0x000005DC"
    );
    #endif
}

void ov73_021E99D4(void) {
    /* Original at 0x021E99D4 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    add r2, r4, #0\n    lsl r0, r0, #4\n    add r2, #0x9c\n    ldr r0, [r4, r0]\n    ldr r2, [r2]\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r3, #2\n    mov r0, #0xbd\n    add r2, r4, #0\n    str r3, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    lsl r0, r0, #4\n    add r2, #0x94\n    ldr r0, [r4, r0]\n    ldr r2, [r2]\n    bl BufferIntegerAsString\n    ldr r0, _021E9A34 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    ldr r1, _021E9A38 ; =0x00000BD4\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r3, r2, #0\n    bl ov73_021E9F34\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x24\n    bl ov73_021E83EC\n    mov r0, #0x24\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    _021E9A34: .word 0x00000F0F\n    _021E9A38: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E9A3C(void) {
    /* Original at 0x021E9A3C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r0, #0x94\n    add r1, #0x9c\n    add r2, r4, #0\n    ldr r0, [r0]\n    ldr r1, [r1]\n    add r2, #0xa0\n    bl ov72_02237BD0\n    mov r0, #0x25\n    str r0, [r4, #0x1c]\n    ldr r0, _021E9A68 ; =0x00000F94\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov73_021EA15C\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _021E9A68: .word 0x00000F94"
    );
    #endif
}

void ov73_021E9A6C(void) {
    /* Original at 0x021E9A6C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    beq _021E9B34\n    bl ov72_02237B74\n    ldr r1, _021E9B50 ; =0x00000F94\n    mov r2, #0\n    str r2, [r4, r1]\n    add r2, r0, #7\n    cmp r2, #7\n    bhi _021E9B4A\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021E9A94: ; jump table\n    add r2, r4, #0\n    add r3, r4, #0\n    add r2, #0x94\n    add r3, #0x9c\n    ldr r0, [r4]\n    ldr r2, [r2]\n    ldr r3, [r3]\n    ldr r1, _021E9B54 ; =0x000006DC\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #4]\n    add r1, r4, r1\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl sub_0202D8A4\n    add r0, r4, #0\n    mov r1, #0x27\n    mov r2, #0x26\n    bl ov73_021E83EC\n    b _021E9B4A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9B4A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9B4A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0xb\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9B4A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9B4A\n    mov r2, #0xb\n    str r2, [r4, #0x1c]\n    sub r1, #0x78\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov73_021EA180\n    b _021E9B4A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    bl sub_020399EC\n    b _021E9B4A\n    ldr r0, _021E9B50 ; =0x00000F94\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _021E9B4A\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _021E9B50: .word 0x00000F94\n    _021E9B54: .word 0x000006DC"
    );
    #endif
}

void ov73_021E9B58(void) {
    /* Original at 0x021E9B58 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E9B8C ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E9B90 ; =0x00000BD4\n    mov r2, #3\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x2d\n    bl ov73_021E83EC\n    add r0, r4, #0\n    bl ov73_021EA180\n    ldr r0, [r4]\n    mov r1, #0\n    str r1, [r0, #0x20]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E9B8C: .word 0x00000F0F\n    _021E9B90: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E9B94(void) {
    /* Original at 0x021E9B94 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x29\n    str r1, [r0, #0x1c]\n    mov r0, #3\n    bx lr"
    );
    #endif
}

void ov73_021E9B9C(void) {
    Save_PrepareForAsyncWrite(0x28, 3, 2);
}

void ov73_021E9BB4(void) {
    /* Original at 0x021E9BB4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #0xc]\n    bl Save_WriteFileAsync\n    cmp r0, #2\n    bne _021E9BCE\n    ldr r0, [r4, #0x20]\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov73_021EA180\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov73_021E9BD4(void) {
    /* Original at 0x021E9BD4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E9BFC ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E9C00 ; =0x00000BD4\n    mov r2, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x30\n    mov r2, #0x16\n    bl ov73_021E83EC\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E9BFC: .word 0x00000F0F\n    _021E9C00: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E9C04(void) {
    /* Original at 0x021E9C04 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E9C2C ; =0x000012C8\n    ldr r0, [r4, r0]\n    bl ov73_021E83D4\n    cmp r0, #0\n    beq _021E9C28\n    cmp r0, #2\n    bne _021E9C1E\n    mov r0, #0xd\n    str r0, [r4, #0x1c]\n    b _021E9C28\n    mov r0, #0x29\n    str r0, [r4, #0x1c]\n    ldr r0, [r4]\n    mov r1, #1\n    str r1, [r0, #0x20]\n    mov r0, #3\n    pop {r4, pc}\n    _021E9C2C: .word 0x000012C8"
    );
    #endif
}

void ov73_021E9C30(void) {
    /* Original at 0x021E9C30 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E9C58 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E9C5C ; =0x00000BD4\n    mov r2, #9\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x30\n    mov r2, #0x18\n    bl ov73_021E83EC\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E9C58: .word 0x00000F0F\n    _021E9C5C: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E9C60(void) {
    /* Original at 0x021E9C60 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E9C88 ; =0x000012C8\n    ldr r0, [r4, r0]\n    bl ov73_021E83D4\n    cmp r0, #0\n    beq _021E9C84\n    cmp r0, #2\n    bne _021E9C7A\n    mov r0, #0x1d\n    str r0, [r4, #0x1c]\n    b _021E9C84\n    mov r0, #0x29\n    str r0, [r4, #0x1c]\n    ldr r0, [r4]\n    mov r1, #1\n    str r1, [r0, #0x20]\n    mov r0, #3\n    pop {r4, pc}\n    _021E9C88: .word 0x000012C8"
    );
    #endif
}

void ov73_021E9C8C(void) {
    /* Original at 0x021E9C8C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E9CB4 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E9CB8 ; =0x00000BDC\n    mov r2, #0x1a\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x2a\n    bl ov73_021E83EC\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E9CB4: .word 0x00000F0F\n    _021E9CB8: .word 0x00000BDC"
    );
    #endif
}

void ov73_021E9CBC(void) {
    /* Original at 0x021E9CBC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov00_021EC8D8\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov73_021E844C\n    mov r0, #0x2b\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov73_021E9CD8(void) {
    /* Original at 0x021E9CD8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _021E9D08 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _021E9D0C ; =0x00000BDC\n    mov r2, #0x1b\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r4, #0\n    mov r1, #0x31\n    mov r2, #0x2e\n    bl ov73_021E83EC\n    mov r0, #0xf2\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E9D08: .word 0x00000F0F\n    _021E9D0C: .word 0x00000BDC"
    );
    #endif
}

u8 ov73_021E9D10(void) {
    return 3;
}

void ov73_021E9D14(void) {
    /* Original at 0x021E9D14 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl sub_0203A914\n    bl sub_0203946C\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x96\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    mov r0, #4\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov73_021E9D44(void) {
    /* Original at 0x021E9D44 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E9D68 ; =0x000012C8\n    ldr r0, [r4, r0]\n    bl ov73_021E83D4\n    cmp r0, #0\n    beq _021E9D62\n    cmp r0, #2\n    bne _021E9D5E\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    b _021E9D62\n    mov r0, #0x29\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _021E9D68: .word 0x000012C8"
    );
    #endif
}

void ov73_021E9D6C(void) {
    /* Original at 0x021E9D6C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021E9DD4 ; =0x00000F1C\n    mov r4, #0\n    ldr r0, [r5, r0]\n    add r0, r0, #7\n    cmp r0, #9\n    bhi _021E9DAE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E9D88: ; jump table\n    mov r4, #0xd\n    b _021E9DAE\n    mov r4, #0xb\n    b _021E9DAE\n    mov r4, #0xc\n    b _021E9DAE\n    mov r4, #0xe\n    b _021E9DAE\n    mov r4, #0xf\n    add r0, r5, #0\n    bl ov73_021EA180\n    ldr r0, _021E9DD8 ; =0x00000F0F\n    ldr r1, _021E9DDC ; =0x00000BD4\n    str r0, [sp]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #1\n    bl ov73_021E9FF8\n    add r0, r5, #0\n    mov r1, #0x2f\n    mov r2, #0x36\n    bl ov73_021E83EC\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _021E9DD4: .word 0x00000F1C\n    _021E9DD8: .word 0x00000F0F\n    _021E9DDC: .word 0x00000BD4"
    );
    #endif
}

void ov73_021E9DE0(void) {
    /* Original at 0x021E9DE0 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0xf9\n    add r4, r0, #0\n    lsl r1, r1, #4\n    ldrsh r2, [r4, r1]\n    cmp r2, #3\n    bhi _021E9E7C\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021E9DFC: ; jump table\n    sub r1, #0x81\n    str r1, [sp]\n    ldr r1, _021E9EA0 ; =0x00000BD4\n    mov r2, #0x10\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    mov r0, #0xf9\n    lsl r0, r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _021E9E98\n    ldr r0, _021E9EA4 ; =0x00000BF4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021E9E98\n    bl sub_0203946C\n    bl ov00_021EC8D8\n    mov r0, #0xf9\n    lsl r0, r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _021E9E98\n    sub r1, #0x81\n    str r1, [sp]\n    ldr r1, _021E9EA0 ; =0x00000BD4\n    mov r2, #0x11\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov73_021E9FF8\n    mov r0, #0xf9\n    lsl r0, r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _021E9E98\n    ldr r0, _021E9EA4 ; =0x00000BF4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021E9E98\n    mov r0, #0xf9\n    lsl r0, r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _021E9E98\n    ldr r0, _021E9EA8 ; =0x00000F92\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x1e\n    ble _021E9E98\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov73_021E844C\n    mov r0, #0x2e\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E9EA0: .word 0x00000BD4\n    _021E9EA4: .word 0x00000BF4\n    _021E9EA8: .word 0x00000F92"
    );
    #endif
}

void ov73_021E9EAC(void) {
    TextPrinterCheckActive(3);
}

void ov73_021E9ECC(void) {
    /* Original at 0x021E9ECC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E9EFC ; =0x00000BF4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021E9EF8\n    mov r0, #0xf2\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0x1e\n    ble _021E9EEE\n    ldr r0, [r4, #0x20]\n    str r0, [r4, #0x1c]\n    mov r0, #0xf2\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    _021E9EFC: .word 0x00000BF4"
    );
    #endif
}

void ov73_021E9F00(void) {
    /* Original at 0x021E9F00 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E9F2C ; =0x00000BF4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021E9F28\n    mov r2, #0x91\n    ldr r0, [r4, #4]\n    mov r1, #0xa\n    lsl r2, r2, #2\n    bl ov73_021E8390\n    ldr r1, _021E9F30 ; =0x000012C8\n    str r0, [r4, r1]\n    ldr r0, [r4, #0x20]\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}\n    _021E9F2C: .word 0x00000BF4\n    _021E9F30: .word 0x000012C8"
    );
    #endif
}

void ov73_021E9F34(void) {
    /* Original at 0x021E9F34 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    add r4, r3, #0\n    bl NewString_ReadMsgData\n    mov r1, #0xbd\n    add r6, r0, #0\n    lsl r1, r1, #4\n    ldr r0, [r5, r1]\n    add r1, #0x10\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    ldr r0, _021E9F94 ; =0x00000DD8\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _021E9F94 ; =0x00000DD8\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    mov r2, #0xbe\n    ldr r0, _021E9F94 ; =0x00000DD8\n    str r3, [sp, #8]\n    lsl r2, r2, #4\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _021E9F98 ; =0x00000BF4\n    str r0, [r5, r1]\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _021E9F94: .word 0x00000DD8\n    _021E9F98: .word 0x00000BF4"
    );
    #endif
}

void ov73_021E9F9C(void) {
    /* Original at 0x021E9F9C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021E9FC4 ; =0x00000F14\n    add r4, r0, #0\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    neg r0, r0\n    bl ov73_021E6A70\n    ldr r2, _021E9FC4 ; =0x00000F14\n    add r1, r0, #0\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    neg r2, r2\n    bl ov73_021EA218\n    mov r0, #0x38\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}\n    _021E9FC4: .word 0x00000F14"
    );
    #endif
}

void ov73_021E9FC8(void) {
    /* Original at 0x021E9FC8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E9FF0 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _021E9FDC\n    mov r0, #2\n    tst r0, r1\n    beq _021E9FEA\n    ldr r0, _021E9FF4 ; =0x00000E18\n    mov r1, #0\n    add r0, r4, r0\n    bl sub_0200E5D4\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _021E9FF0: .word gSystem\n    _021E9FF4: .word 0x00000E18"
    );
    #endif
}

void ov73_021E9FF8(void) {
    /* Original at 0x021E9FF8 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    mov r2, #0xbe\n    lsl r2, r2, #4\n    ldr r2, [r5, r2]\n    add r4, r3, #0\n    bl ReadMsgDataIntoString\n    ldr r0, _021EA048 ; =0x00000DD8\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EA048 ; =0x00000DD8\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    mov r2, #0xbe\n    ldr r0, _021EA048 ; =0x00000DD8\n    str r3, [sp, #8]\n    lsl r2, r2, #4\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _021EA04C ; =0x00000BF4\n    str r0, [r5, r1]\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _021EA048: .word 0x00000DD8\n    _021EA04C: .word 0x00000BF4"
    );
    #endif
}

void ov73_021EA050(void) {
    /* Original at 0x021EA050 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r3, #1\n    beq _021EA05E\n    cmp r3, #2\n    beq _021EA074\n    b _021EA082\n    ldr r0, [sp, #0xc]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    ldrb r1, [r4, #7]\n    lsl r1, r1, #3\n    sub r1, r1, r0\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r2, r0, #1\n    b _021EA082\n    ldr r0, [sp, #0xc]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    ldrb r1, [r4, #7]\n    lsl r1, r1, #3\n    sub r2, r1, r0\n    add r0, r2, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov73_021EA088(void) {
    /* Original at 0x021EA088 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r3, #0\n    ldr r3, [sp, #0x24]\n    add r5, r0, #0\n    str r3, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    ldr r3, [sp, #0x20]\n    add r6, r1, #0\n    bl ov73_021EA050\n    add r3, r0, #0\n    str r4, [sp]\n    mov r1, #0\n    ldr r0, [sp, #0x24]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov73_021EA0BC(void) {
    /* Original at 0x021EA0BC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r3, #0\n    ldr r3, [sp, #0x24]\n    add r5, r0, #0\n    str r3, [sp]\n    mov r3, #0\n    str r3, [sp, #4]\n    ldr r3, [sp, #0x20]\n    add r6, r1, #0\n    bl ov73_021EA050\n    add r3, r0, #0\n    str r4, [sp]\n    mov r1, #0\n    ldr r0, [sp, #0x24]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r2, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov73_021EA0F0(void) {
    /* Original at 0x021EA0F0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    mov r1, #0xf\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    mov r3, #2\n    bl String16_FormatInteger\n    mov r3, #1\n    ldr r0, _021EA128 ; =0x00010200\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov73_021EA0BC\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EA128: .word 0x00010200"
    );
    #endif
}

void ov73_021EA12C(void) {
    sub_0203A880();
}

void ov73_021EA134(void) {
    /* Original at 0x021EA134 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    cmp r1, #1\n    bhi _021EA154\n    mov r0, #0xdd\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _021EA158 ; =0x00000DD4\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    nop\n    _021EA158: .word 0x00000DD4"
    );
    #endif
}

void ov73_021EA15C(void) {
    /* Original at 0x021EA15C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EA178 ; =0x00000F0C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _021EA176\n    ldr r0, _021EA17C ; =0x00000DD8\n    mov r1, #1\n    add r0, r4, r0\n    bl WaitingIcon_New\n    ldr r1, _021EA178 ; =0x00000F0C\n    str r0, [r4, r1]\n    pop {r4, pc}\n    _021EA178: .word 0x00000F0C\n    _021EA17C: .word 0x00000DD8"
    );
    #endif
}

void ov73_021EA180(void) {
    sub_0200F450(0);
}

void ov73_021EA19C(void) {
    /* Original at 0x021EA19C */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #1\n    add r6, r1, #0\n    lsl r0, r0, #8\n    mov r1, #0x96\n    bl String_New\n    add r4, r0, #0\n    ldr r0, _021EA20C ; =0x00000BDC\n    add r1, r6, #0\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    mov r1, #0xbd\n    lsl r1, r1, #4\n    ldr r0, [r5, r1]\n    add r1, #0x20\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    ldr r0, _021EA210 ; =0x00000E18\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EA210 ; =0x00000E18\n    mov r1, #1\n    add r0, r5, r0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    mov r2, #0xbf\n    ldr r0, _021EA210 ; =0x00000E18\n    str r3, [sp, #8]\n    lsl r2, r2, #4\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _021EA214 ; =0x00000BF4\n    str r0, [r5, r1]\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021EA20C: .word 0x00000BDC\n    _021EA210: .word 0x00000E18\n    _021EA214: .word 0x00000BF4"
    );
    #endif
}

void ov73_021EA218(void) {
    /* Original at 0x021EA218 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0\n    add r4, r1, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _021EA22A\n    mov r4, #0xb\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    mov r3, #5\n    bl BufferIntegerAsString\n    ldr r0, _021EA258 ; =0x00000DD8\n    mov r1, #1\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov73_021EA19C\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021EA258: .word 0x00000DD8"
    );
    #endif
}

void ov73_021EA25C(void) {
    Save_FriendGroup_Get();
    ov73_021E795C();
}

void ov73_021EA268(void) {
    Save_FriendGroup_Get();
    Heap_AllocAtEnd(r4, r5);
    ov73_021E7960(r6);
    MIi_CpuCopyFast(r4, r5);
}

void ov73_021EA290(void) {
    /* Original at 0x021EA290 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl Save_FriendGroup_Get\n    add r2, r0, #0\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #0xc]\n    ldr r3, [r4, #0x10]\n    bl ov73_021E79F4\n    pop {r4, pc}"
    );
    #endif
}

void ov73_021EA2A8(void) {
    Save_FashionData_Get();
    sub_0202B994();
}

void ov73_021EA2B4(void) {
    Save_FashionData_Get();
    Heap_AllocAtEnd(r4, r5);
    sub_0202B9B8(r6, 0);
    MIi_CpuCopyFast(r4, r5);
}

void ov73_021EA2E0(void) {
    /* Original at 0x021EA2E0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl Save_FashionData_Get\n    add r2, r0, #0\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #0xc]\n    lsl r0, r0, #0x18\n    ldr r3, [r4, #0x10]\n    lsr r0, r0, #0x18\n    bl sub_0202BF80\n    pop {r4, pc}"
    );
    #endif
}

void ov73_021EA2FC(void) {
    /* Original at 0x021EA2FC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl sub_020270C4\n    ldr r1, [r4, #0x14]\n    str r1, [sp]\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0xc]\n    ldr r3, [r4, #0x10]\n    bl ov73_021E7E24\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov73_021EA31C(void) {
    Save_GetPlayerMixingRankingEntry();
}

void ov73_021EA324(void) {
    /* Original at 0x021EA324 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl Save_Rankings_Get\n    ldr r0, [r4]\n    str r0, [sp]\n    ldr r2, [r4, #8]\n    ldr r0, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r1, [r4, #0xc]\n    ldr r3, [r4, #0x10]\n    lsr r2, r2, #0x18\n    bl Save_UpdateRankingsFromMixing\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov73_021EA348(void) {
    Heap_AllocAtEnd(r1, r2);
    MI_CpuFill8(0, r5);
    sub_02069528(r6, 0, r4);
}

void ov73_021EA370(void) {
    /* Original at 0x021EA370 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov73_021EA374(void) {
    /* Original at 0x021EA374 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    mov r0, #0\n    ldr r6, _021EA3C8 ; =0x00000BB8\n    ldr r5, _021EA3CC ; =ov73_021EA744\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    ldr r1, [r5]\n    blx r1\n    add r4, r0, #0\n    ldr r0, [sp]\n    ldr r3, [r5, #4]\n    mov r1, #0x32\n    add r2, r4, #0\n    blx r3\n    add r7, r0, #0\n    cmp r6, r4\n    bhi _021EA3A0\n    bl GF_AssertFail\n    ldr r1, [sp, #4]\n    add r0, r7, #0\n    add r2, r4, #0\n    bl MIi_CpuCopyFast\n    add r0, r7, #0\n    bl Heap_Free\n    ldr r0, [sp, #4]\n    sub r6, r6, r4\n    add r0, r0, r4\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    add r5, #0xc\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, #0xa\n    blt _021EA384\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021EA3C8: .word 0x00000BB8\n    _021EA3CC: .word ov73_021EA744"
    );
    #endif
}

void ov73_021EA3D0(void) {
    /* Original at 0x021EA3D0 */
    /* Requires manual decompilation - 157 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x68\n    str r0, [sp]\n    ldr r0, _021EA514 ; =0x00000BB8\n    str r1, [sp, #4]\n    str r0, [sp, #0x14]\n    mov r0, #0x32\n    str r0, [sp, #0x50]\n    ldr r0, [sp]\n    mov r7, #0\n    str r0, [sp, #0x54]\n    bl sub_0203769C\n    add r5, r7, #0\n    str r0, [sp, #0x5c]\n    mov r0, #5\n    str r0, [sp, #0x58]\n    add r0, sp, #0x3c\n    str r0, [sp, #0x60]\n    add r0, sp, #0x28\n    ldr r4, _021EA518 ; =ov73_021EA744\n    str r0, [sp, #0x64]\n    str r5, [sp, #0x1c]\n    str r5, [sp, #0x20]\n    str r5, [sp, #0x24]\n    ldr r0, [sp]\n    ldr r1, [r4]\n    blx r1\n    ldr r1, [sp, #0x1c]\n    add r5, r5, #1\n    add r0, r1, r0\n    add r4, #0xc\n    str r0, [sp, #0x1c]\n    cmp r5, #2\n    blt _021EA402\n    ldr r4, _021EA518 ; =ov73_021EA744\n    mov r5, #0\n    ldr r0, [sp]\n    ldr r1, [r4]\n    blx r1\n    ldr r1, [sp, #0x20]\n    add r5, r5, #1\n    add r0, r1, r0\n    add r4, #0xc\n    str r0, [sp, #0x20]\n    cmp r5, #3\n    blt _021EA41A\n    ldr r4, _021EA518 ; =ov73_021EA744\n    mov r5, #0\n    ldr r0, [sp]\n    ldr r1, [r4]\n    blx r1\n    ldr r1, [sp, #0x24]\n    add r5, r5, #1\n    add r0, r1, r0\n    add r4, #0xc\n    str r0, [sp, #0x24]\n    cmp r5, #4\n    blt _021EA432\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, _021EA518 ; =ov73_021EA744\n    str r0, [sp, #0x10]\n    add r0, sp, #0x1c\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r0, [sp]\n    ldr r1, [r1]\n    blx r1\n    ldr r1, [sp, #0x14]\n    str r0, [sp, #0x18]\n    cmp r1, r0\n    bhi _021EA466\n    bl GF_AssertFail\n    mov r6, #0\n    ldr r4, [sp, #4]\n    add r5, r6, #0\n    add r0, r6, #0\n    bl sub_02034818\n    cmp r0, #0\n    beq _021EA47E\n    ldr r0, [sp, #0x60]\n    add r1, r4, r7\n    str r1, [r0, r5]\n    b _021EA484\n    ldr r1, [sp, #0x60]\n    mov r0, #0\n    str r0, [r1, r5]\n    mov r0, #0x2f\n    lsl r0, r0, #6\n    add r6, r6, #1\n    add r4, r4, r0\n    add r5, r5, #4\n    cmp r6, #5\n    blt _021EA46C\n    ldr r0, [sp, #8]\n    cmp r0, #7\n    beq _021EA4A0\n    cmp r0, #8\n    beq _021EA4A0\n    cmp r0, #9\n    bne _021EA4D2\n    mov r6, #0\n    ldr r4, [sp, #4]\n    add r5, r6, #0\n    add r0, r6, #0\n    bl sub_02034818\n    cmp r0, #0\n    beq _021EA4BE\n    ldr r0, [sp, #0xc]\n    sub r0, #0x1c\n    ldr r0, [r0]\n    add r1, r4, r0\n    ldr r0, [sp, #0x64]\n    str r1, [r0, r5]\n    b _021EA4C4\n    ldr r1, [sp, #0x64]\n    mov r0, #0\n    str r0, [r1, r5]\n    mov r0, #0x2f\n    lsl r0, r0, #6\n    add r6, r6, #1\n    add r4, r4, r0\n    add r5, r5, #4\n    cmp r6, #5\n    blt _021EA4A6\n    ldr r0, [sp, #0x10]\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    beq _021EA4DE\n    add r0, sp, #0x50\n    blx r1\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x14]\n    add r7, r7, r0\n    sub r0, r1, r0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    add r0, #0xc\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    add r0, r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, #0xa\n    blo _021EA452\n    ldr r0, [sp]\n    bl sub_020270C4\n    add r4, r0, #0\n    bl sub_0202E43C\n    add r0, r4, #0\n    bl sub_0202E474\n    add sp, #0x68\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EA514: .word 0x00000BB8\n    _021EA518: .word ov73_021EA744"
    );
    #endif
}
