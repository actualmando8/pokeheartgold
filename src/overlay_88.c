/* Decompiled from asm/overlay_88.s */
#include "global.h"

void ov88_02258800(void) {
    /* Original at 0x02258800 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl OverlayManager_GetArgs\n    mov r2, #5\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #0x72\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    mov r1, #0x27\n    add r0, r4, #0\n    lsl r1, r1, #4\n    mov r2, #0x72\n    bl OverlayManager_CreateAndGetData\n    mov r2, #0x27\n    mov r1, #0\n    lsl r2, r2, #4\n    add r4, r0, #0\n    bl memset\n    ldr r0, [r5]\n    mov r1, #0x72\n    str r0, [r4]\n    ldr r0, [r5, #4]\n    str r0, [r4, #4]\n    add r0, r4, #0\n    add r0, #8\n    bl ov88_02258ABC\n    mov r0, #0x53\n    lsl r0, r0, #2\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #8\n    mov r2, #0x72\n    bl ov88_02258D64\n    ldr r0, [r4, #4]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #8]\n    mov r2, #0x72\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    add r0, r2, #0\n    add r0, #0xe2\n    add r2, #0xda\n    ldr r3, [r4]\n    add r0, r4, r0\n    add r1, #8\n    add r2, r4, r2\n    bl ov88_02258EA8\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    str r0, [sp]\n    mov r2, #0x72\n    str r2, [sp, #4]\n    add r0, r2, #0\n    add r0, #0xee\n    add r2, #0xda\n    ldr r3, [r4]\n    add r0, r4, r0\n    add r1, #8\n    add r2, r4, r2\n    bl ov88_022590C0\n    mov r0, #0x59\n    lsl r0, r0, #2\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #8\n    mov r2, #0x72\n    bl ov88_022592EC\n    mov r0, #2\n    lsl r0, r0, #8\n    add r1, r4, #0\n    add r0, r4, r0\n    add r1, #8\n    mov r2, #0x72\n    bl ov88_0225967C\n    ldr r0, _022588C0 ; =ov88_02258A64\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _022588C0: .word ov88_02258A64"
    );
    #endif
}

void ov88_022588C4(void) {
    /* Original at 0x022588C4 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    add r6, r0, #0\n    ldr r0, [r5]\n    cmp r0, #4\n    bls _022588E2\n    b _022589EA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022588EE: ; jump table\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x72\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r6, #8]\n    mov r1, #1\n    bl ov45_0222A520\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _022589EA\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _022589EA\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _022589EA\n    ldr r0, _022589F8 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    bne _0225894A\n    ldr r0, [r6, #8]\n    bl ov45_0222A330\n    cmp r0, #1\n    beq _0225894A\n    bl ov45_0222D844\n    cmp r0, #1\n    bne _02258960\n    ldr r0, [r6, #8]\n    bl ov45_0222A330\n    cmp r0, #1\n    bne _0225895A\n    ldr r0, [r6, #8]\n    bl ov45_0222A4A8\n    mov r0, #3\n    str r0, [r5]\n    b _022589EA\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r1, [r4]\n    ldr r2, [r4, #4]\n    add r0, r4, r0\n    bl ov88_02258EFC\n    cmp r0, #1\n    bne _0225897E\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r4, r0\n    mov r1, #1\n    bl ov88_02259818\n    mov r0, #0x16\n    lsl r0, r0, #4\n    ldr r1, [r4]\n    add r0, r4, r0\n    bl ov88_022590D8\n    cmp r0, #1\n    bne _0225899A\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r4, r0\n    mov r1, #2\n    bl ov88_02259818\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r1, [r4]\n    ldr r2, [r6, #8]\n    add r0, r4, r0\n    mov r3, #0x72\n    bl ov88_02259404\n    cmp r0, #1\n    bne _022589EA\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r4, r0\n    mov r1, #3\n    bl ov88_02259818\n    b _022589EA\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x72\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _022589EA\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _022589EA\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldr r1, [r6, #8]\n    add r0, r4, #0\n    bl ov88_02258A70\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _022589F8: .word gSystem"
    );
    #endif
}

void ov88_022589FC(void) {
    /* Original at 0x022589FC */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r4, r0\n    bl ov88_022597DC\n    mov r0, #0x55\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov88_02258EF8\n    mov r0, #0x16\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov88_022590D4\n    mov r0, #0x59\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov88_022593D0\n    mov r0, #0x53\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov88_02258D84\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    add r4, #8\n    add r0, r4, #0\n    bl ov88_02258AF4\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x72\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov88_02258A64(void) {
    ov88_02258B20();
}

void ov88_02258A70(void) {
    /* Original at 0x02258A70 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0x55\n    add r5, r0, #0\n    lsl r1, r1, #2\n    add r0, r5, r1\n    sub r1, #8\n    add r2, r5, #0\n    add r1, r5, r1\n    add r2, #8\n    bl ov88_02258F60\n    mov r1, #0x16\n    str r4, [sp]\n    lsl r1, r1, #4\n    add r0, r5, r1\n    sub r1, #0x14\n    add r2, r5, #0\n    ldr r3, [r5]\n    add r1, r5, r1\n    add r2, #8\n    bl ov88_02259104\n    mov r0, #0x59\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl ov88_022594E0\n    mov r0, #2\n    lsl r0, r0, #8\n    add r0, r5, r0\n    bl ov88_02259800\n    add r5, #8\n    add r0, r5, #0\n    bl ov88_02258B14\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov88_02258ABC(void) {
    /* Original at 0x02258ABC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0xc6\n    add r4, r1, #0\n    bl NARC_New\n    mov r1, #5\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #0x30\n    add r1, r4, #0\n    bl GF_CreateVramTransferManager\n    ldr r0, _02258AF0 ; =ov88_02259958\n    bl GfGfx_SetBanks\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov88_02258B34\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov88_02258C98\n    pop {r3, r4, r5, pc}\n    nop\n    _02258AF0: .word ov88_02259958"
    );
    #endif
}

void ov88_02258AF4(void) {
    /* Original at 0x02258AF4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #5\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    bl GF_DestroyVramTransferManager\n    add r0, r4, #0\n    bl ov88_02258C60\n    add r0, r4, #0\n    bl ov88_02258D38\n    pop {r4, pc}"
    );
    #endif
}

void ov88_02258B14(void) {
    SpriteList_RenderAndAnimateSprites();
}

void ov88_02258B20(void) {
    /* Original at 0x02258B20 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    bl DoScheduledBgGpuUpdates\n    bl OamManager_ApplyAndResetBuffers\n    bl GF_RunVramTransferTasks\n    pop {r3, pc}"
    );
    #endif
}

void ov88_02258B34(void) {
    /* Original at 0x02258B34 */
    /* Requires manual decompilation - 132 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, _02258C50 ; =ov88_02259934\n    add r7, r1, #0\n    bl SetBothScreensModesAndDisable\n    add r0, r7, #0\n    bl BgConfig_Alloc\n    str r0, [r5]\n    ldr r0, _02258C54 ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    mov r0, #0\n    ldr r6, _02258C58 ; =ov88_022599C0\n    ldr r4, _02258C5C ; =ov88_02259944\n    str r0, [sp, #0x10]\n    ldr r1, [r4]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    add r2, r6, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4]\n    mov r1, #0x20\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r2, #0\n    add r3, r7, #0\n    bl BG_ClearCharDataRange\n    ldr r1, [r4]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [sp, #0x10]\n    add r6, #0x1c\n    add r0, r0, #1\n    add r4, r4, #4\n    str r0, [sp, #0x10]\n    cmp r0, #5\n    blt _02258B5C\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #5\n    str r7, [sp, #4]\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #5\n    mov r0, #0\n    lsl r1, r1, #6\n    add r2, r7, #0\n    bl LoadFontPal1\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #5\n    str r7, [sp, #0xc]\n    lsl r0, r0, #6\n    mov r1, #1\n    ldr r0, [r5, r0]\n    ldr r2, [r5]\n    add r3, r1, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #5\n    str r7, [sp, #0xc]\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r2, [r5]\n    mov r1, #3\n    mov r3, #1\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #5\n    str r7, [sp, #0xc]\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r2, [r5]\n    mov r1, #4\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #5\n    str r7, [sp, #4]\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    mov r2, #4\n    add r3, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #5\n    str r7, [sp, #0xc]\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r2, [r5]\n    mov r1, #2\n    mov r3, #4\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #5\n    str r7, [sp, #0xc]\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    ldr r2, [r5]\n    mov r1, #6\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02258C50: .word ov88_02259934\n    _02258C54: .word gSystem + 0x60\n    _02258C58: .word ov88_022599C0\n    _02258C5C: .word ov88_02259944"
    );
    #endif
}

void ov88_02258C60(void) {
    /* Original at 0x02258C60 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r5, _02258C90 ; =ov88_02259944\n    add r6, r0, #0\n    mov r4, #0\n    ldr r1, [r5]\n    ldr r0, [r6]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl FreeBgTilemapBuffer\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #5\n    blt _02258C68\n    ldr r0, [r6]\n    bl Heap_Free\n    ldr r0, _02258C94 ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    pop {r4, r5, r6, pc}\n    nop\n    _02258C90: .word ov88_02259944\n    _02258C94: .word gSystem + 0x60"
    );
    #endif
}

void ov88_02258C98(void) {
    /* Original at 0x02258C98 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r6, r1, #0\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x1f\n    str r3, [sp, #0xc]\n    add r2, r0, #0\n    str r6, [sp, #0x10]\n    bl OamManager_Create\n    ldr r0, _02258D30 ; =ov88_02259914\n    ldr r1, _02258D34 ; =0x00200010\n    mov r2, #0x10\n    bl ObjCharTransfer_InitEx\n    mov r0, #0x20\n    add r1, r6, #0\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    ldr r1, _02258D34 ; =0x00200010\n    mov r0, #1\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    add r1, r5, #0\n    mov r0, #0x20\n    add r1, #8\n    add r2, r6, #0\n    bl G2dRenderer_Init\n    str r0, [r5, #4]\n    add r0, r5, #0\n    mov r2, #1\n    add r0, #8\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r7, #0x13\n    mov r4, #0\n    lsl r7, r7, #4\n    mov r0, #0x20\n    add r1, r4, #0\n    add r2, r6, #0\n    bl Create2DGfxResObjMan\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _02258D04\n    bl sub_0203A880\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02258D30: .word ov88_02259914\n    _02258D34: .word 0x00200010"
    );
    #endif
}

void ov88_02258D38(void) {
    /* Original at 0x02258D38 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    bl SpriteList_Delete\n    mov r6, #0x13\n    mov r4, #0\n    lsl r6, r6, #4\n    ldr r0, [r5, r6]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _02258D48\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    bl OamManager_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov88_02258D64(void) {
    GfGfxLoader_GetScrnDataFromOpenNarc(5, 5, 0);
}

void ov88_02258D84(void) {
    Heap_Free();
}

void ov88_02258D90(void) {
    /* Original at 0x02258D90 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    ldr r0, [r0, #4]\n    add r4, r1, #0\n    mov r1, #1\n    str r1, [sp]\n    mov r1, #2\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0xc\n    str r1, [sp, #8]\n    add r1, r2, #6\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0xc]\n    mov r1, #0\n    str r1, [sp, #0x10]\n    ldrh r1, [r0]\n    add r2, r3, #5\n    lsl r2, r2, #0x18\n    lsl r1, r1, #0x15\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x14]\n    ldrh r0, [r0, #2]\n    add r3, sp, #0x18\n    mov r1, #3\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldrb r3, [r3, #0x10]\n    ldr r0, [r4]\n    lsr r2, r2, #0x18\n    lsl r3, r3, #1\n    add r3, r3, #4\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl CopyToBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov88_02258DE8(void) {
    /* Original at 0x02258DE8 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r4, r0, #0\n    add r5, r1, #0\n    ldr r0, [sp, #0x38]\n    mov r1, #3\n    add r7, r2, #0\n    add r6, r3, #0\n    bl _u32_div_f\n    str r1, [sp, #0x1c]\n    ldr r0, [sp, #0x38]\n    mov r1, #3\n    bl _u32_div_f\n    ldr r1, [sp, #0x44]\n    cmp r1, #0\n    beq _02258E0E\n    add r0, r0, #2\n    ldr r1, [sp, #0x3c]\n    cmp r1, #1\n    bne _02258E16\n    add r0, r0, #1\n    ldr r1, [r4, #4]\n    lsl r2, r6, #1\n    add r6, r2, #4\n    mov r2, #2\n    str r2, [sp]\n    str r2, [sp, #4]\n    add r2, r1, #0\n    add r2, #0xc\n    str r2, [sp, #8]\n    ldr r2, [sp, #0x1c]\n    lsl r0, r0, #0x19\n    lsl r2, r2, #0x19\n    lsr r2, r2, #0x18\n    str r2, [sp, #0xc]\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    ldrh r0, [r1]\n    lsl r4, r7, #1\n    add r4, #0x15\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    ldrh r0, [r1, #2]\n    lsl r2, r4, #0x18\n    lsl r3, r6, #0x18\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x18]\n    ldr r0, [r5]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl CopyToBgTilemapRect\n    ldr r0, [sp, #0x48]\n    cmp r0, #0\n    beq _02258E7C\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    lsl r2, r4, #0x18\n    lsl r3, r6, #0x18\n    ldr r0, [r5]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl BgTilemapRectChangePalette\n    b _02258E9A\n    ldr r0, [sp, #0x40]\n    cmp r0, #0\n    beq _02258E9A\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r1, #3\n    str r1, [sp, #8]\n    lsl r2, r4, #0x18\n    lsl r3, r6, #0x18\n    ldr r0, [r5]\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl BgTilemapRectChangePalette\n    ldr r0, [r5]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov88_02258EA8(void) {
    /* Original at 0x02258EA8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [sp, #0x1c]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov45_0222AD4C\n    mov r1, #0\n    strb r1, [r5]\n    mov r1, #0x3c\n    str r0, [sp]\n    bl _u32_div_f\n    add r0, r0, #1\n    strb r0, [r5, #1]\n    mov r0, #0\n    strb r0, [r5, #2]\n    ldr r0, [sp]\n    mov r1, #0x28\n    bl _u32_div_f\n    str r0, [r5, #8]\n    mov r0, #1\n    strb r0, [r5, #4]\n    mov r0, #0\n    strh r0, [r5, #6]\n    strb r0, [r5, #5]\n    ldr r2, [sp, #0x18]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov88_02258EFC\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov88_02258F60\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov88_02258EF8(void) {
    /* Original at 0x02258EF8 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov88_02258EFC(void) {
    /* Original at 0x02258EFC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, sp, #8\n    add r6, r2, #0\n    mov r4, #0\n    bl ov45_0222DCF4\n    cmp r0, #0\n    bne _02258F18\n    add sp, #0xc\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, pc}\n    ldrb r0, [r5, #4]\n    cmp r0, #1\n    bne _02258F26\n    add r0, r4, #0\n    strb r0, [r5, #4]\n    mov r4, #1\n    strb r4, [r5, #5]\n    add r0, r6, #0\n    add r1, sp, #8\n    add r2, sp, #4\n    bl ov45_0222D594\n    add r0, sp, #4\n    add r1, r5, #0\n    add r2, sp, #0\n    bl ov45_0222D594\n    add r0, sp, #0\n    ldrb r2, [r0, #2]\n    ldr r1, [r5, #8]\n    cmp r2, r1\n    bhs _02258F50\n    ldrb r1, [r0, #1]\n    cmp r1, #0\n    bne _02258F50\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02258F58\n    mov r4, #1\n    strb r4, [r5, #5]\n    ldr r0, [sp, #4]\n    str r0, [r5]\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov88_02258F60(void) {
    /* Original at 0x02258F60 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r3, [r0, #4]\n    cmp r3, #1\n    bne _02258F6E\n    bl ov88_02258F74\n    pop {r3, pc}\n    bl ov88_02258F88\n    pop {r3, pc}"
    );
    #endif
}

void ov88_02258F74(void) {
    /* Original at 0x02258F74 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r0, #6]\n    add r1, r1, #1\n    strh r1, [r0, #6]\n    ldrh r1, [r0, #6]\n    cmp r1, #0x10\n    bls _02258F84\n    mov r1, #0\n    strh r1, [r0, #6]\n    bx lr"
    );
    #endif
}

void ov88_02258F88(void) {
    /* Original at 0x02258F88 */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    str r1, [sp, #0x10]\n    str r2, [sp, #0x14]\n    ldrb r1, [r4, #1]\n    mov r0, #0x3c\n    ldrb r2, [r4, #2]\n    mul r0, r1\n    ldrb r1, [r4]\n    add r2, r2, r0\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    mul r0, r1\n    ldr r1, [r4, #8]\n    add r0, r2, r0\n    bl _u32_div_f\n    ldrb r1, [r4, #5]\n    add r5, r0, #0\n    cmp r1, #0\n    beq _02259036\n    mov r2, #0\n    strh r2, [r4, #6]\n    strb r2, [r4, #5]\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x14]\n    str r2, [sp, #0xc]\n    ldr r0, [r0]\n    mov r1, #3\n    mov r3, #5\n    bl FillBgTilemapRect\n    ldr r0, [sp, #0x14]\n    mov r1, #3\n    ldr r0, [r0]\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x1c]\n    mov r1, #3\n    sub r6, r1, r0\n    mov r0, #0xa\n    add r7, r6, #0\n    mul r7, r0\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    mov r4, #0\n    str r0, [sp, #0x20]\n    mov r0, #9\n    sub r3, r0, r4\n    add r0, r3, r7\n    cmp r0, r5\n    blo _02259022\n    cmp r0, r5\n    bne _02259008\n    mov r2, #1\n    b _02259012\n    cmp r6, #3\n    bne _02259010\n    mov r2, #2\n    b _02259012\n    mov r2, #0\n    ldr r0, [sp, #0x20]\n    lsl r3, r3, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r3, r3, #0x18\n    bl ov88_02258D90\n    add r4, r4, #1\n    cmp r4, #0xa\n    blt _02258FF6\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    cmp r0, #4\n    blt _02258FE2\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    cmp r5, #0x28\n    bhs _022590B8\n    ldrh r1, [r4, #6]\n    add r1, r1, #1\n    strh r1, [r4, #6]\n    ldrh r6, [r4, #6]\n    mov r1, #0x1b\n    lsr r3, r6, #0x1f\n    lsl r2, r6, #0x1b\n    sub r2, r2, r3\n    ror r2, r1\n    mov r1, #0xa\n    add r7, r3, r2\n    bl _u32_div_f\n    str r1, [sp, #0x18]\n    add r0, r5, #0\n    mov r1, #0xa\n    bl _u32_div_f\n    cmp r7, #0\n    bne _0225909E\n    ldr r2, [r4, #8]\n    mov r1, #0x1e\n    mul r1, r2\n    lsr r4, r1, #2\n    mov r2, #6\n    mov r5, #0\n    add r1, r5, #1\n    add r3, r4, #0\n    mul r3, r1\n    cmp r3, r6\n    bls _02259080\n    ldr r1, _022590BC ; =ov88_02259924\n    lsl r2, r5, #2\n    ldr r2, [r1, r2]\n    b _02259086\n    add r5, r1, #0\n    cmp r1, #4\n    blt _0225906E\n    lsl r0, r0, #0x18\n    ldr r3, [sp, #0x18]\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    lsr r3, r3, #0x18\n    bl ov88_02258D90\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    cmp r7, #0x10\n    bne _022590B8\n    lsl r0, r0, #0x18\n    ldr r3, [sp, #0x18]\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    lsl r3, r3, #0x18\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    mov r2, #3\n    lsr r3, r3, #0x18\n    bl ov88_02258D90\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _022590BC: .word ov88_02259924"
    );
    #endif
}

void ov88_022590C0(void) {
    ov88_0225918C(0);
}

void ov88_022590D4(void) {
    /* Original at 0x022590D4 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov88_022590D8(void) {
    /* Original at 0x022590D8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    mov r5, #0\n    bl ov45_0222DD38\n    cmp r0, #0\n    beq _022590FE\n    cmp r0, #1\n    beq _022590F2\n    cmp r0, #2\n    beq _022590F8\n    b _022590FE\n    mov r5, #1\n    strh r5, [r4, #2]\n    b _022590FE\n    mov r0, #3\n    strh r0, [r4, #2]\n    mov r5, #1\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov88_02259104(void) {
    /* Original at 0x02259104 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldrh r0, [r4, #2]\n    cmp r0, #4\n    bhi _02259186\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225911C: ; jump table\n    mov r0, #2\n    strh r0, [r4, #2]\n    mov r0, #0\n    add sp, #4\n    strh r0, [r4]\n    pop {r3, r4, pc}\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    str r0, [sp]\n    add r0, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, [sp, #0x10]\n    bl ov88_02259244\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4]\n    ldrsh r1, [r4, r0]\n    cmp r1, #0x20\n    blt _02259186\n    add sp, #4\n    strh r0, [r4, #2]\n    pop {r3, r4, pc}\n    mov r0, #4\n    strh r0, [r4, #2]\n    mov r0, #0\n    add sp, #4\n    strh r0, [r4]\n    pop {r3, r4, pc}\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    str r0, [sp]\n    add r0, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, [sp, #0x10]\n    bl ov88_02259264\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4]\n    ldrsh r1, [r4, r0]\n    cmp r1, #0x20\n    blt _02259186\n    strh r0, [r4, #2]\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov88_0225918C(void) {
    /* Original at 0x0225918C */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    str r0, [sp, #0x14]\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #8\n    add r6, r2, #0\n    str r0, [sp, #8]\n    mov r2, #0\n    str r3, [sp, #0x1c]\n    str r2, [sp, #0xc]\n    add r0, r1, #0\n    str r1, [sp, #0x18]\n    ldr r0, [r0]\n    mov r1, #3\n    mov r3, #0x15\n    ldr r7, [sp, #0x50]\n    bl FillBgTilemapRect\n    mov r5, #0\n    str r5, [sp, #0x2c]\n    ldr r0, [sp, #0x2c]\n    mov r4, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x34]\n    add r0, r6, #0\n    add r1, r4, r5\n    bl ov45_0222DCFC\n    cmp r0, #0\n    beq _0225922E\n    add r0, r6, #0\n    add r1, r4, r5\n    bl ov45_0222DD08\n    str r0, [sp, #0x28]\n    add r0, r6, #0\n    add r1, r4, r5\n    bl ov45_0222DD14\n    str r0, [sp, #0x24]\n    add r0, r6, #0\n    add r1, r4, r5\n    bl ov45_0222DD20\n    str r0, [sp, #0x20]\n    add r0, r6, #0\n    add r1, r4, r5\n    bl ov45_0222DD2C\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x1c]\n    add r1, r4, r5\n    bl ov45_0222AB28\n    cmp r7, #2\n    bne _0225920E\n    ldr r1, [sp, #0x30]\n    cmp r1, #1\n    bne _0225920E\n    mov r1, #0\n    b _02259210\n    add r1, r7, #0\n    str r1, [sp]\n    ldr r1, [sp, #0x28]\n    lsl r2, r4, #0x18\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x24]\n    ldr r3, [sp, #0x34]\n    str r1, [sp, #8]\n    ldr r1, [sp, #0x20]\n    lsr r2, r2, #0x18\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    bl ov88_02258DE8\n    add r4, r4, #1\n    cmp r4, #5\n    blt _022591C4\n    ldr r0, [sp, #0x2c]\n    add r5, r5, #5\n    add r0, r0, #1\n    str r0, [sp, #0x2c]\n    cmp r0, #4\n    blt _022591BA\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov88_02259244(void) {
    /* Original at 0x02259244 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r5, [sp, #0x10]\n    mov r4, #7\n    tst r4, r5\n    bne _02259262\n    lsr r5, r5, #3\n    mov r4, #1\n    tst r4, r5\n    bne _0225925A\n    mov r4, #2\n    b _0225925C\n    mov r4, #0\n    str r4, [sp]\n    bl ov88_0225918C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov88_02259264(void) {
    ov88_0225918C(7, 0, 1);
}

void ov88_02259280(void) {
    /* Original at 0x02259280 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp]\n    mov r4, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl ov45_0222DDE4\n    add r1, r0, #0\n    cmp r1, #0x14\n    beq _022592B0\n    ldr r0, [sp]\n    bl ov45_0222AB28\n    cmp r0, #1\n    bne _022592AC\n    mov r0, #9\n    strb r0, [r5, r4]\n    b _022592B0\n    mov r0, #5\n    strb r0, [r5, r4]\n    add r4, r4, #1\n    cmp r4, #4\n    blt _0225928C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov88_022592B8(void) {
    /* Original at 0x022592B8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    lsl r6, r2, #5\n    ldr r7, [r1, #0xc]\n    str r0, [sp]\n    add r5, r4, #0\n    add r6, #0xa\n    ldr r2, [sp]\n    mov r0, #0xf\n    ldrb r2, [r2, r4]\n    add r1, r6, r5\n    mov r3, #4\n    lsl r2, r2, #1\n    add r2, #0xe0\n    add r2, r7, r2\n    bl GF_CreateNewVramTransferTask\n    cmp r0, #0\n    bne _022592E2\n    bl GF_AssertFail\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _022592C6\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov88_022592EC(void) {
    /* Original at 0x022592EC */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    mov r7, #3\n    add r5, r0, #0\n    ldr r6, _022593C4 ; =_02259904\n    str r0, [sp, #0x14]\n    str r1, [sp, #0x18]\n    str r2, [sp, #0x1c]\n    mov r4, #0\n    str r0, [sp, #0x20]\n    lsl r7, r7, #8\n    add r5, #0x60\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    add r2, r4, #0\n    bl ov88_02259508\n    ldrb r0, [r6]\n    add r1, r5, #0\n    mov r2, #3\n    str r0, [sp]\n    mov r0, #0x1e\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, r4, #7\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    mov r3, #1\n    ldr r0, [r0]\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    ldr r0, [sp, #0x20]\n    add r4, r4, #1\n    add r0, #0x20\n    str r0, [sp, #0x20]\n    add r7, #0x3c\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _02259304\n    mov r0, #1\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #8\n    bl String_New\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x14]\n    add r1, #0x90\n    str r0, [r1]\n    mov r1, #5\n    ldr r0, [sp, #0x18]\n    lsl r1, r1, #6\n    ldr r0, [r0, r1]\n    ldr r3, [sp, #0x1c]\n    mov r1, #0\n    add r2, #0x98\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    ldr r1, [sp, #0x14]\n    mov r2, #4\n    add r1, #0x94\n    str r0, [r1]\n    ldr r1, [sp, #0x14]\n    mov r0, #0\n    add r1, #0x98\n    ldr r1, [r1]\n    mov r3, #0xfa\n    ldr r1, [r1, #0xc]\n    add r1, #0xee\n    bl BG_LoadPlttData\n    ldr r1, [sp, #0x14]\n    ldr r3, _022593C8 ; =0x0000011A\n    add r1, #0x98\n    ldr r1, [r1]\n    mov r0, #0\n    ldr r1, [r1, #0xc]\n    mov r2, #4\n    add r1, #0xee\n    bl BG_LoadPlttData\n    ldr r1, [sp, #0x14]\n    ldr r3, _022593CC ; =0x0000013A\n    add r1, #0x98\n    str r1, [sp, #0x14]\n    ldr r1, [r1]\n    mov r0, #0\n    ldr r1, [r1, #0xc]\n    mov r2, #4\n    add r1, #0xee\n    bl BG_LoadPlttData\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _022593C4: .word _02259904\n    _022593C8: .word 0x0000011A\n    _022593CC: .word 0x0000013A"
    );
    #endif
}

void ov88_022593D0(void) {
    /* Original at 0x022593D0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    bl Heap_Free\n    add r0, r5, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    bl String_Delete\n    add r4, r5, #0\n    mov r6, #0\n    add r4, #0x60\n    add r0, r4, #0\n    bl RemoveWindow\n    add r0, r5, #0\n    bl ov88_0225954C\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, #0x20\n    cmp r6, #3\n    blt _022593EC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov88_02259404(void) {
    /* Original at 0x02259404 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r6, r0, #0\n    add r5, r1, #0\n    add r0, r2, #0\n    add r1, sp, #0x14\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    bl ov45_0222AB38\n    mov r0, #2\n    add r4, r6, #0\n    ldr r7, _022594DC ; =ov88_02259910\n    str r0, [sp, #0xc]\n    add r4, #0x40\n    ldrb r0, [r4]\n    cmp r0, #0\n    beq _02259458\n    add r0, r4, #0\n    bl ov88_022595E4\n    cmp r0, #1\n    bne _02259458\n    ldr r0, [sp, #0xc]\n    add r1, r0, #1\n    cmp r1, #3\n    bge _02259452\n    add r0, r6, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    add r3, r4, #0\n    str r0, [sp]\n    lsl r0, r1, #5\n    ldr r1, [r4, #8]\n    ldr r2, [r7, #4]\n    add r0, r6, r0\n    add r3, #0x1c\n    bl ov88_02259560\n    add r0, r4, #0\n    bl ov88_022595DC\n    ldr r0, [sp, #0xc]\n    sub r4, #0x20\n    sub r7, r7, #4\n    sub r0, r0, #1\n    str r0, [sp, #0xc]\n    bpl _02259422\n    ldrb r0, [r6]\n    cmp r0, #0\n    bne _022594D6\n    add r0, r5, #0\n    bl ov45_0222DD44\n    cmp r0, #1\n    bne _022594D6\n    add r7, sp, #0x14\n    add r0, r5, #0\n    bl ov45_0222DD5C\n    add r4, r0, #0\n    ldr r0, [sp, #8]\n    add r3, r6, #0\n    str r0, [sp]\n    add r3, #0x90\n    ldr r3, [r3]\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl ov45_0222DD78\n    cmp r0, #1\n    bne _022594C6\n    ldr r3, [sp, #4]\n    add r0, sp, #0x10\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov88_02259280\n    add r0, r6, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    mov r2, #0x15\n    str r0, [sp]\n    add r0, r6, #0\n    add r6, #0x90\n    ldr r1, [r6]\n    lsl r2, r2, #4\n    add r3, sp, #0x10\n    bl ov88_02259560\n    add r0, r5, #0\n    bl ov45_0222DCE8\n    add sp, #0x28\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov45_0222DCE8\n    add r0, r5, #0\n    bl ov45_0222DD44\n    cmp r0, #1\n    beq _02259476\n    mov r0, #0\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _022594DC: .word ov88_02259910"
    );
    #endif
}

void ov88_022594E0(void) {
    /* Original at 0x022594E0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r4, r6, #0\n    mov r7, #0\n    add r4, #0x60\n    add r5, r6, #0\n    ldrb r0, [r6]\n    cmp r0, #1\n    bne _022594FA\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov88_022595F8\n    add r7, r7, #1\n    add r6, #0x20\n    add r4, #0x10\n    add r5, #0x20\n    cmp r7, #3\n    blt _022594EC\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov88_02259508(void) {
    /* Original at 0x02259508 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0\n    strb r0, [r5]\n    strh r0, [r5, #2]\n    mov r0, #1\n    add r4, r1, #0\n    add r6, r2, #0\n    lsl r0, r0, #8\n    add r1, r3, #0\n    bl String_New\n    str r0, [r5, #8]\n    add r0, r6, #7\n    strb r0, [r5, #1]\n    mov r3, #0\n    add r5, #0xc\n    str r3, [sp]\n    mov r0, #0xb4\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #7\n    str r0, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, r5, #0\n    mov r2, #3\n    bl AddWindowParameterized\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov88_0225954C(void) {
    /* Original at 0x0225954C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    bl String_Delete\n    add r4, #0xc\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov88_02259560(void) {
    /* Original at 0x02259560 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    add r7, r1, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    bl String_Copy\n    mov r0, #1\n    strb r0, [r5]\n    mov r2, #0\n    strh r2, [r5, #2]\n    strh r6, [r5, #4]\n    add r1, r7, #0\n    bl FontID_String_GetWidth\n    strh r0, [r5, #6]\n    mov r0, #1\n    ldrh r1, [r5, #6]\n    lsl r0, r0, #8\n    add r0, r1, r0\n    strh r0, [r5, #6]\n    mov r0, #0x5a\n    ldrh r1, [r5, #6]\n    lsl r0, r0, #4\n    cmp r1, r0\n    bls _0225959C\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0xc\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    add r0, r5, #0\n    ldr r2, [r5, #8]\n    add r0, #0xc\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldrb r0, [r4]\n    ldr r1, [sp, #0x20]\n    strb r0, [r5, #0x1c]\n    ldrb r0, [r4, #1]\n    strb r0, [r5, #0x1d]\n    ldrb r0, [r4, #2]\n    strb r0, [r5, #0x1e]\n    ldrb r0, [r4, #3]\n    strb r0, [r5, #0x1f]\n    add r0, r5, #0\n    ldrb r2, [r5, #1]\n    add r0, #0x1c\n    bl ov88_022592B8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov88_022595DC(void) {
    /* Original at 0x022595DC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void ov88_022595E4(void) {
    /* Original at 0x022595E4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r0, #2]\n    mov r3, #1\n    add r2, r1, #1\n    ldrh r1, [r0, #4]\n    cmp r2, r1\n    bgt _022595F4\n    strh r2, [r0, #2]\n    mov r3, #0\n    add r0, r3, #0\n    bx lr"
    );
    #endif
}

void ov88_022595F8(void) {
    /* Original at 0x022595F8 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    ldrh r0, [r5, #6]\n    str r1, [sp, #0x1c]\n    str r0, [sp, #0x20]\n    ldrh r1, [r5, #2]\n    ldr r0, [sp, #0x20]\n    mul r0, r1\n    ldrh r1, [r5, #4]\n    bl _s32_div_f\n    add r4, r0, #0\n    mov r0, #1\n    lsl r0, r0, #8\n    cmp r4, r0\n    bge _02259622\n    mov r0, #0xff\n    sub r7, r0, r4\n    mov r6, #0\n    b _02259630\n    sub r6, r4, r0\n    ldr r0, [sp, #0x20]\n    mov r7, #0\n    sub r4, r0, r4\n    cmp r4, #0xff\n    ble _02259630\n    mov r4, #0xff\n    mov r0, #0xff\n    str r0, [sp]\n    mov r1, #0\n    mov r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x1c]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl FillWindowPixelRect\n    mov r0, #0x5a\n    lsl r0, r0, #4\n    str r0, [sp]\n    mov r0, #0x10\n    lsl r1, r7, #0x10\n    lsl r2, r6, #0x10\n    str r0, [sp, #4]\n    lsr r1, r1, #0x10\n    str r1, [sp, #8]\n    mov r3, #0\n    lsl r1, r4, #0x10\n    str r3, [sp, #0xc]\n    lsr r1, r1, #0x10\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    mov r0, #0xf\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    ldr r1, [r5, #0x18]\n    lsr r2, r2, #0x10\n    bl BlitBitmapRect\n    ldr r0, [sp, #0x1c]\n    bl ScheduleWindowCopyToVram\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov88_0225967C(void) {
    /* Original at 0x0225967C */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    str r1, [sp, #0x18]\n    str r2, [sp, #0x1c]\n    mov r1, #0\n    mov r2, #0x70\n    str r0, [sp, #0x14]\n    bl memset\n    ldr r2, _022597CC ; =0x000002F5\n    ldr r3, [sp, #0x1c]\n    mov r0, #0\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x38]\n    ldr r1, [sp, #0x1c]\n    mov r0, #0x80\n    bl String_New\n    str r0, [sp, #0x34]\n    mov r0, #0\n    str r0, [sp, #0x3c]\n    ldr r0, _022597D0 ; =ov88_02259A68\n    ldr r5, _022597D4 ; =ov88_02259980\n    str r0, [sp, #0x28]\n    ldr r0, _022597D8 ; =_02259A60\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x14]\n    str r0, [sp, #0x20]\n    add r0, #0x40\n    str r0, [sp, #0x20]\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #0x28]\n    ldrh r1, [r1]\n    ldr r0, [sp, #0x20]\n    ldr r2, [r2]\n    bl ov88_0225983C\n    ldrb r0, [r5, #1]\n    ldr r1, [sp, #0x14]\n    mov r2, #0\n    str r0, [sp]\n    ldrb r0, [r5, #2]\n    str r0, [sp, #4]\n    ldrb r0, [r5, #3]\n    str r0, [sp, #8]\n    ldrb r0, [r5, #6]\n    str r0, [sp, #0xc]\n    ldrh r0, [r5, #4]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    ldrb r3, [r5]\n    ldr r0, [r0]\n    bl AddWindowParameterized\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x38]\n    ldr r1, [sp, #0x3c]\n    ldr r2, [sp, #0x34]\n    bl ReadMsgDataIntoString\n    ldr r0, [sp, #0x34]\n    bl String_CountLines\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x34]\n    ldrb r6, [r5, #8]\n    bl String_GetLength\n    ldr r1, [sp, #0x1c]\n    add r0, r0, #1\n    bl String_New\n    add r4, r0, #0\n    ldr r0, [sp, #0x30]\n    mov r7, #0\n    cmp r0, #0\n    bls _0225978A\n    ldr r1, [sp, #0x34]\n    add r0, r4, #0\n    add r2, r7, #0\n    bl String_GetLineN\n    ldrb r0, [r5, #9]\n    cmp r0, #0\n    beq _0225973A\n    cmp r0, #1\n    beq _02259740\n    cmp r0, #2\n    beq _02259756\n    b _02259766\n    ldrb r0, [r5, #7]\n    str r0, [sp, #0x2c]\n    b _02259766\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidthMultiline\n    add r0, r0, #1\n    ldrb r1, [r5, #7]\n    lsr r0, r0, #1\n    sub r0, r1, r0\n    str r0, [sp, #0x2c]\n    b _02259766\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidthMultiline\n    ldrb r1, [r5, #7]\n    sub r0, r1, r0\n    str r0, [sp, #0x2c]\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [r5, #0xc]\n    ldr r3, [sp, #0x2c]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    add r2, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x30]\n    add r7, r7, #1\n    add r6, #0x10\n    cmp r7, r0\n    blo _02259720\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, [sp, #0x14]\n    bl ScheduleWindowCopyToVram\n    ldr r0, [sp, #0x28]\n    add r5, #0x10\n    add r0, r0, #4\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x24]\n    add r0, r0, #2\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x20]\n    add r0, #0xc\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x14]\n    add r0, #0x10\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x3c]\n    add r0, r0, #1\n    str r0, [sp, #0x3c]\n    cmp r0, #4\n    blt _022596BC\n    ldr r0, [sp, #0x34]\n    bl String_Delete\n    ldr r0, [sp, #0x38]\n    bl DestroyMsgData\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022597CC: .word 0x000002F5\n    _022597D0: .word ov88_02259A68\n    _022597D4: .word ov88_02259980\n    _022597D8: .word _02259A60"
    );
    #endif
}

void ov88_022597DC(void) {
    /* Original at 0x022597DC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r5, #0\n    mov r6, #0\n    add r4, #0x40\n    add r0, r5, #0\n    bl RemoveWindow\n    add r0, r4, #0\n    bl ov88_0225985C\n    add r6, r6, #1\n    add r5, #0x10\n    add r4, #0xc\n    cmp r6, #4\n    blt _022597E6\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov88_02259800(void) {
    ov88_02259884(0);
}

void ov88_02259818(void) {
    /* Original at 0x02259818 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #4\n    blo _02259826\n    bl GF_AssertFail\n    cmp r4, #0\n    bne _0225982E\n    bl GF_AssertFail\n    mov r0, #0xc\n    add r5, #0x40\n    mul r0, r4\n    add r0, r5, r0\n    bl ov88_02259878\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov88_0225983C(void) {
    /* Original at 0x0225983C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    strb r3, [r0]\n    strb r3, [r0, #1]\n    strb r3, [r0, #2]\n    strb r3, [r0, #3]\n    strb r3, [r0, #4]\n    strb r3, [r0, #5]\n    strb r3, [r0, #6]\n    strb r3, [r0, #7]\n    strb r3, [r0, #8]\n    strb r3, [r0, #9]\n    strb r3, [r0, #0xa]\n    strb r3, [r0, #0xb]\n    strh r1, [r0, #6]\n    str r2, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov88_0225985C(void) {
    /* Original at 0x0225985C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    strb r1, [r0]\n    strb r1, [r0, #1]\n    strb r1, [r0, #2]\n    strb r1, [r0, #3]\n    strb r1, [r0, #4]\n    strb r1, [r0, #5]\n    strb r1, [r0, #6]\n    strb r1, [r0, #7]\n    strb r1, [r0, #8]\n    strb r1, [r0, #9]\n    strb r1, [r0, #0xa]\n    strb r1, [r0, #0xb]\n    bx lr"
    );
    #endif
}

void ov88_02259878(void) {
    /* Original at 0x02259878 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    strh r1, [r0]\n    mov r1, #0\n    strh r1, [r0, #2]\n    bx lr"
    );
    #endif
}

void ov88_02259884(void) {
    /* Original at 0x02259884 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldrh r0, [r4, #2]\n    cmp r0, #0x1c\n    bls _02259894\n    mov r0, #0\n    strh r0, [r4]\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _02259900\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    bne _022598AA\n    ldr r0, [r4, #8]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl PlaySE\n    ldrh r0, [r4, #2]\n    cmp r0, #2\n    bhs _022598BA\n    lsl r1, r0, #4\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r3, r0, #1\n    b _022598D0\n    cmp r0, #0xe\n    bhs _022598C2\n    mov r3, #0x10\n    b _022598D0\n    sub r0, #0xe\n    lsl r0, r0, #4\n    mov r1, #0xe\n    bl _s32_div_f\n    mov r1, #0x10\n    sub r3, r1, r0\n    mov r1, #0xe\n    add r0, sp, #4\n    strh r1, [r0]\n    mov r0, #0x19\n    lsl r3, r3, #0x18\n    str r0, [sp]\n    add r0, sp, #4\n    add r1, r4, #4\n    mov r2, #1\n    lsr r3, r3, #0x18\n    bl BlendPalette\n    add r0, r4, #4\n    mov r1, #2\n    bl DC_FlushRange\n    ldrh r1, [r4, #6]\n    add r0, r4, #4\n    mov r2, #2\n    bl GX_LoadBGPltt\n    ldrh r0, [r4, #2]\n    add r0, r0, #1\n    strh r0, [r4, #2]\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}
