/* Decompiled from asm/unk_02088288.s */
#include "global.h"

u8 sub_02088288(void) {
    return 1;
}

void sub_0208828C(void) {
    Save_VarsFlags_Get();
    CheckFlag982();
}

void PokemonSummary_Init(void) {
    /* Original at 0x02088298 */
    /* Requires manual decompilation - 150 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r1, #1\n    lsl r1, r1, #0x1a\n    ldr r0, [r1]\n    ldr r2, _02088408 ; =0xFFFFE0FF\n    and r0, r2\n    str r0, [r1]\n    ldr r0, _0208840C ; =0x04001000\n    ldr r3, [r0]\n    and r2, r3\n    str r2, [r0]\n    ldr r3, [r1]\n    ldr r2, _02088410 ; =0xFFFF1FFF\n    and r3, r2\n    str r3, [r1]\n    ldr r3, [r0]\n    add r1, #0x50\n    and r2, r3\n    str r2, [r0]\n    mov r2, #0\n    strh r2, [r1]\n    add r0, #0x50\n    strh r2, [r0]\n    mov r0, #4\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    mov r2, #0x45\n    mov r0, #3\n    mov r1, #0x13\n    lsl r2, r2, #0xc\n    bl Heap_Create\n    mov r0, #0x27\n    mov r1, #0x13\n    bl NARC_New\n    add r7, r0, #0\n    mov r0, #0xa2\n    mov r1, #0x13\n    bl NARC_New\n    add r5, r0, #0\n    ldr r1, _02088414 ; =0x000007D8\n    add r0, r6, #0\n    mov r2, #0x13\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _02088414 ; =0x000007D8\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x13\n    bl BgConfig_Alloc\n    str r0, [r4]\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    str r1, [r0, #0x38]\n    mov r1, #1\n    mov r0, #0x13\n    add r2, r1, #0\n    bl sub_02016EDC\n    mov r1, #0xb3\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0xb4\n    mov r1, #0x13\n    bl NARC_New\n    ldr r1, _02088418 ; =0x000007B8\n    str r0, [r4, r1]\n    mov r0, #0\n    mov r1, #0x13\n    bl FontID_SetAccessDirect\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    bl sub_02088610\n    ldr r0, [r4]\n    bl sub_02088630\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl sub_020887C4\n    bl sub_0208887C\n    add r0, r4, #0\n    bl sub_0208DE40\n    mov r0, #4\n    mov r1, #0x13\n    bl FontID_Alloc\n    add r0, r4, #0\n    bl sub_02088894\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_020889D0\n    add r0, r4, #0\n    bl sub_020897C0\n    add r0, r4, #0\n    bl sub_0208B1AC\n    add r0, r4, #0\n    bl sub_0208B2C0\n    add r0, r4, #0\n    bl sub_0208E3AC\n    add r0, r4, #0\n    bl sub_0208B48C\n    add r0, r4, #0\n    bl sub_0208B4EC\n    add r0, r4, #0\n    bl sub_0208BECC\n    add r0, r4, #0\n    bl sub_0208C3E4\n    add r0, r4, #0\n    bl sub_02089CB4\n    add r0, r4, #0\n    bl sub_0208DF2C\n    ldr r0, _0208841C ; =sub_020885DC\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    ldr r2, _02088420 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    bl GfGfx_BothDispOn\n    mov r1, #0\n    mov r0, #0x3d\n    add r2, r1, #0\n    bl Sound_SetSceneAndPlayBGM\n    bl sub_0203A964\n    add r0, r5, #0\n    bl NARC_Delete\n    add r0, r7, #0\n    bl NARC_Delete\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _02088408: .word 0xFFFFE0FF\n    _0208840C: .word 0x04001000\n    _02088410: .word 0xFFFF1FFF\n    _02088414: .word 0x000007D8\n    _02088418: .word 0x000007B8\n    _0208841C: .word sub_020885DC\n    _02088420: .word 0x04000304"
    );
    #endif
}

void PokemonSummary_Main(void) {
    /* Original at 0x02088424 */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #0x16\n    bls _02088436\n    b _0208854A\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02088442: ; jump table\n    mov r0, #0\n    mov r1, #0x13\n    bl sub_020880CC\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #6\n    mov r2, #0\n    bl Pokepic_SetAttr\n    mov r0, #1\n    str r0, [r4]\n    b _0208854A\n    bl sub_02088B08\n    str r0, [r4]\n    b _0208854A\n    bl sub_02088B40\n    str r0, [r4]\n    b _0208854A\n    bl sub_02088D18\n    str r0, [r4]\n    b _0208854A\n    bl sub_02088D34\n    str r0, [r4]\n    b _0208854A\n    bl sub_02088D48\n    str r0, [r4]\n    b _0208854A\n    bl sub_02088E68\n    str r0, [r4]\n    b _0208854A\n    bl sub_02088E98\n    str r0, [r4]\n    b _0208854A\n    bl sub_02089028\n    str r0, [r4]\n    b _0208854A\n    bl sub_02089208\n    str r0, [r4]\n    b _0208854A\n    bl sub_020892F4\n    str r0, [r4]\n    b _0208854A\n    bl sub_02089308\n    str r0, [r4]\n    b _0208854A\n    bl sub_0208931C\n    str r0, [r4]\n    b _0208854A\n    bl sub_0208942C\n    str r0, [r4]\n    b _0208854A\n    bl sub_02089454\n    str r0, [r4]\n    b _0208854A\n    bl sub_02089698\n    str r0, [r4]\n    b _0208854A\n    bl sub_02089478\n    str r0, [r4]\n    b _0208854A\n    bl sub_02089608\n    str r0, [r4]\n    b _0208854A\n    bl sub_02089658\n    str r0, [r4]\n    b _0208854A\n    bl sub_02089670\n    str r0, [r4]\n    b _0208854A\n    bl sub_02089680\n    cmp r0, #1\n    bne _0208854A\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0x2d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #6\n    mov r2, #0\n    bl Pokepic_SetAttr\n    mov r0, #2\n    str r0, [r4]\n    b _0208854A\n    bl sub_02089794\n    str r0, [r4]\n    add r0, r5, #0\n    bl sub_0208B278\n    add r0, r5, #0\n    bl sub_0208C3C0\n    mov r0, #1\n    lsl r0, r0, #0xa\n    ldr r0, [r5, r0]\n    bl SpriteSystem_DrawSprites\n    add r0, r5, #0\n    bl sub_0208DEDC\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void PokemonSummary_Exit(void) {
    /* Original at 0x0208856C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    add r0, r4, #0\n    bl sub_0208DEFC\n    add r0, r4, #0\n    bl sub_0208B258\n    add r0, r4, #0\n    bl sub_0208C560\n    ldr r0, [r4]\n    bl sub_0208877C\n    bl sub_02021238\n    bl GF_DestroyVramTransferManager\n    add r0, r4, #0\n    bl sub_02088AF8\n    add r0, r4, #0\n    bl sub_0208895C\n    mov r0, #4\n    bl FontID_Release\n    ldr r0, _020885D4 ; =0x000007B8\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    mov r0, #0\n    bl FontID_SetAccessLazy\n    ldr r0, _020885D8 ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x13\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _020885D4: .word 0x000007B8\n    _020885D8: .word 0x04000050"
    );
    #endif
}

void sub_020885DC(void) {
    /* Original at 0x020885DC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl DoScheduledBgGpuUpdates\n    mov r0, #0x2a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl PokepicManager_HandleLoadImgAndOrPltt\n    bl GF_RunVramTransferTasks\n    bl SpriteSystem_TransferOam\n    ldr r3, _02088608 ; =OS_IRQTable\n    ldr r1, _0208860C ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _02088608: .word OS_IRQTable\n    _0208860C: .word 0x00003FF8"
    );
    #endif
}

void sub_02088610(void) {
    GfGfx_SetBanks(5);
}

void sub_02088630(void) {
    /* Original at 0x02088630 */
    /* Requires manual decompilation - 144 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0xb8\n    ldr r5, _02088760 ; =_021038C4\n    add r3, sp, #0xa8\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _02088764 ; =_021038E8\n    add r3, sp, #0x8c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02088768 ; =_02103904\n    add r3, sp, #0x70\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    ldr r5, _0208876C ; =_02103920\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _02088770 ; =_0210393C\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    add r0, r4, #0\n    mov r1, #4\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02088774 ; =_02103958\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02088778 ; =_02103974\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x13\n    bl BG_ClearCharDataRange\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x13\n    bl BG_ClearCharDataRange\n    add sp, #0xb8\n    pop {r3, r4, r5, pc}\n    nop\n    _02088760: .word _021038C4\n    _02088764: .word _021038E8\n    _02088768: .word _02103904\n    _0208876C: .word _02103920\n    _02088770: .word _0210393C\n    _02088774: .word _02103958\n    _02088778: .word _02103974"
    );
    #endif
}

void sub_0208877C(void) {
    /* Original at 0x0208877C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    add r0, r4, #0\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    mov r0, #0x13\n    add r1, r4, #0\n    bl Heap_FreeExplicit\n    pop {r4, pc}"
    );
    #endif
}

void sub_020887C4(void) {
    /* Original at 0x020887C4 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #2\n    lsl r0, r0, #8\n    str r0, [sp]\n    mov r0, #0x13\n    mov r1, #0\n    add r4, r2, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0\n    mov r0, #0x11\n    str r1, [sp]\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x13\n    str r0, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r4, #0\n    mov r1, #2\n    mov r3, #3\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x13\n    str r0, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #2\n    lsl r0, r0, #8\n    str r0, [sp]\n    mov r0, #0x13\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #4\n    add r3, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0\n    mov r0, #0x11\n    str r1, [sp]\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x13\n    str r0, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x13\n    str r0, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r4, #0\n    mov r1, #0x14\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x13\n    str r0, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0208887C(void) {
    G2x_SetBlendAlpha_(8, 1, 0x1e, 0x17);
}

void sub_02088894(void) {
    /* Original at 0x02088894 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02088940 ; =0x0000012E\n    add r4, r0, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x13\n    bl NewMsgDataFromNarc\n    mov r1, #0x7a\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    mov r2, #0x6a\n    mov r0, #1\n    mov r1, #0x1b\n    lsl r2, r2, #2\n    mov r3, #0x13\n    bl NewMsgDataFromNarc\n    ldr r1, _02088944 ; =0x000007A4\n    mov r2, #0\n    str r0, [r4, r1]\n    mov r0, #1\n    mov r1, #2\n    mov r3, #0x13\n    bl MessagePrinter_New\n    ldr r1, _02088948 ; =0x0000079C\n    str r0, [r4, r1]\n    mov r0, #0x13\n    bl MessageFormat_New\n    ldr r1, _0208894C ; =0x000007A8\n    str r0, [r4, r1]\n    mov r0, #0xc\n    mov r1, #0x13\n    bl String_New\n    mov r1, #0x23\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    mov r0, #0xc\n    mov r1, #0x13\n    bl String_New\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #8\n    mov r1, #0x13\n    bl String_New\n    mov r1, #0x8e\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #0x80\n    mov r1, #0x13\n    bl String_New\n    ldr r1, _02088950 ; =0x000007AC\n    ldr r2, _02088954 ; =0x000002EE\n    str r0, [r4, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x13\n    bl NewMsgDataFromNarc\n    ldr r1, _02088958 ; =0x000007B4\n    str r0, [r4, r1]\n    mov r0, #8\n    mov r1, #0x13\n    bl String_New\n    mov r2, #0x7b\n    lsl r2, r2, #4\n    str r0, [r4, r2]\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    beq _0208893C\n    ldr r0, [r4, r2]\n    bl CopyU16ArrayToString\n    pop {r4, pc}\n    nop\n    _02088940: .word 0x0000012E\n    _02088944: .word 0x000007A4\n    _02088948: .word 0x0000079C\n    _0208894C: .word 0x000007A8\n    _02088950: .word 0x000007AC\n    _02088954: .word 0x000002EE\n    _02088958: .word 0x000007B4"
    );
    #endif
}

void sub_0208895C(void) {
    /* Original at 0x0208895C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _020889BC ; =0x000007B4\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _020889C0 ; =0x000007A4\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    mov r0, #0x7a\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _020889C4 ; =0x0000079C\n    ldr r0, [r4, r0]\n    bl MessagePrinter_Delete\n    ldr r0, _020889C8 ; =0x000007A8\n    ldr r0, [r4, r0]\n    bl MessageFormat_Delete\n    mov r0, #0x23\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0x8e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _020889CC ; =0x000007AC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0x7b\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    _020889BC: .word 0x000007B4\n    _020889C0: .word 0x000007A4\n    _020889C4: .word 0x0000079C\n    _020889C8: .word 0x000007A8\n    _020889CC: .word 0x000007AC"
    );
    #endif
}

void sub_020889D0(void) {
    /* Original at 0x020889D0 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    mov r1, #2\n    mov r2, #7\n    mov r3, #0x13\n    bl sub_0201956C\n    mov r1, #0x7d\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r2, #6\n    str r2, [sp]\n    ldr r0, [r5, r1]\n    mov r1, #0\n    mov r3, #0x11\n    bl sub_020195F4\n    mov r1, #0\n    mov r0, #0x7d\n    str r1, [sp]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    mov r3, #0x45\n    bl sub_020196B8\n    mov r2, #6\n    mov r0, #0x7d\n    str r2, [sp]\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #1\n    mov r3, #0x11\n    bl sub_020195F4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #1\n    add r2, r4, #0\n    mov r3, #0x46\n    bl sub_020196B8\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #2\n    mov r2, #6\n    mov r3, #0xa\n    bl sub_020195F4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #2\n    add r2, r4, #0\n    mov r3, #0x47\n    bl sub_020196B8\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #3\n    mov r2, #6\n    mov r3, #0xa\n    bl sub_020195F4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #3\n    add r2, r4, #0\n    mov r3, #0x48\n    bl sub_020196B8\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #4\n    mov r2, #6\n    mov r3, #0xb\n    bl sub_020195F4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #4\n    add r2, r4, #0\n    mov r3, #0x49\n    bl sub_020196B8\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    mov r2, #6\n    ldr r0, [r5, r0]\n    mov r1, #5\n    add r3, r2, #0\n    bl sub_020195F4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #5\n    add r2, r4, #0\n    mov r3, #0x4a\n    bl sub_020196B8\n    mov r1, #6\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_020195F4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #6\n    add r2, r4, #0\n    mov r3, #0x4b\n    bl sub_020196B8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02088AF8(void) {
    /* Original at 0x02088AF8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x7d\n    lsl r1, r1, #4\n    ldr r3, _02088B04 ; =sub_020195C0\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _02088B04: .word sub_020195C0"
    );
    #endif
}

void sub_02088B08(void) {
    /* Original at 0x02088B08 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _02088B3C\n    add r0, r4, #0\n    bl sub_0208E444\n    add r0, r4, #0\n    bl sub_02089C50\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0, #0x12]\n    cmp r0, #2\n    bne _02088B30\n    mov r0, #8\n    pop {r4, pc}\n    cmp r0, #4\n    bne _02088B38\n    mov r0, #0x10\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_02088B40(void) {
    /* Original at 0x02088B40 */
    /* Requires manual decompilation - 207 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r2, _02088CF8 ; =0x000007BF\n    add r5, r0, #0\n    ldrb r1, [r5, r2]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1c\n    cmp r1, #1\n    bne _02088B5E\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    strb r1, [r0, #0x17]\n    mov r0, #0x15\n    pop {r4, r5, r6, pc}\n    ldr r3, _02088CFC ; =gSystem\n    mov r1, #0x20\n    ldr r4, [r3, #0x4c]\n    add r6, r4, #0\n    tst r6, r1\n    beq _02088B74\n    sub r1, #0x21\n    bl sub_02089E30\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    mov r1, #0x10\n    tst r1, r4\n    beq _02088B84\n    mov r1, #1\n    bl sub_02089E30\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    mov r1, #0x40\n    add r6, r4, #0\n    tst r6, r1\n    beq _02088B96\n    sub r1, #0x41\n    bl sub_0208A2C0\n    mov r0, #0x13\n    pop {r4, r5, r6, pc}\n    mov r1, #0x80\n    tst r1, r4\n    beq _02088BA6\n    mov r1, #1\n    bl sub_0208A2C0\n    mov r0, #0x13\n    pop {r4, r5, r6, pc}\n    ldr r1, [r3, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _02088BD2\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    strb r1, [r0, #0x17]\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_0208ADB8\n    add r0, r5, #0\n    mov r1, #0x15\n    bl sub_0208B044\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    tst r0, r1\n    beq _02088C12\n    sub r0, r2, #3\n    ldrsb r0, [r5, r0]\n    cmp r0, #1\n    beq _02088BE6\n    cmp r0, #2\n    beq _02088BFA\n    b _02088C12\n    ldr r0, _02088D00 ; =0x0000069B\n    bl PlaySE\n    ldr r1, _02088D04 ; =0x000007BD\n    mov r0, #0xf\n    ldrb r2, [r5, r1]\n    bic r2, r0\n    strb r2, [r5, r1]\n    mov r0, #3\n    pop {r4, r5, r6, pc}\n    add r0, r2, #7\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    beq _02088C12\n    ldr r0, _02088D08 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _02088D0C ; =0x000007C4\n    mov r1, #0\n    strb r1, [r5, r0]\n    mov r0, #0xa\n    pop {r4, r5, r6, pc}\n    ldr r0, _02088D10 ; =0x000007BC\n    ldrsb r0, [r5, r0]\n    cmp r0, #1\n    bne _02088C56\n    add r0, r5, #0\n    bl sub_0208ADCC\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _02088C56\n    lsl r0, r4, #1\n    add r1, r5, r0\n    mov r0, #0x99\n    lsl r0, r0, #2\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _02088C56\n    ldr r0, _02088D00 ; =0x0000069B\n    bl PlaySE\n    ldr r2, _02088D04 ; =0x000007BD\n    mov r1, #0xf\n    ldrb r0, [r5, r2]\n    bic r0, r1\n    lsl r1, r4, #0x18\n    lsr r3, r1, #0x18\n    mov r1, #0xf\n    and r1, r3\n    orr r0, r1\n    strb r0, [r5, r2]\n    mov r0, #3\n    pop {r4, r5, r6, pc}\n    ldr r0, _02088D10 ; =0x000007BC\n    ldrsb r0, [r5, r0]\n    cmp r0, #2\n    bne _02088C88\n    add r0, r5, #0\n    bl sub_0208AEC4\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _02088C88\n    cmp r4, #9\n    bge _02088C88\n    ldr r0, _02088D14 ; =0x000007C6\n    ldrb r0, [r5, r0]\n    cmp r4, r0\n    bge _02088C88\n    ldr r0, _02088D08 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _02088D0C ; =0x000007C4\n    strb r4, [r5, r0]\n    mov r0, #0xa\n    pop {r4, r5, r6, pc}\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrb r0, [r0, #0x11]\n    cmp r0, #2\n    bne _02088CF0\n    add r0, r5, #0\n    bl sub_0208AEB4\n    cmp r0, #0\n    bne _02088CC6\n    mov r1, #0\n    add r0, r5, #0\n    mvn r1, r1\n    bl sub_0208A2E0\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _02088CC2\n    ldr r0, _02088D08 ; =0x000005DD\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x14\n    bl sub_0208B0B0\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    cmp r0, #1\n    bne _02088CF0\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_0208A2E0\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _02088CEC\n    ldr r0, _02088D08 ; =0x000005DD\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0x14\n    bl sub_0208B0B0\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    bl sub_02089E98\n    pop {r4, r5, r6, pc}\n    _02088CF8: .word 0x000007BF\n    _02088CFC: .word gSystem\n    _02088D00: .word 0x0000069B\n    _02088D04: .word 0x000007BD\n    _02088D08: .word 0x000005DD\n    _02088D0C: .word 0x000007C4\n    _02088D10: .word 0x000007BC\n    _02088D14: .word 0x000007C6"
    );
    #endif
}

void sub_02088D18(void) {
    /* Original at 0x02088D18 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0208A564\n    cmp r0, #1\n    bne _02088D30\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_0208AFA0\n    mov r0, #5\n    pop {r4, pc}\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void sub_02088D34(void) {
    sub_0208A63C();
}

void sub_02088D48(void) {
    /* Original at 0x02088D48 */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02088E58 ; =gSystem\n    add r4, r0, #0\n    ldr r2, [r1, #0x48]\n    mov r1, #0x40\n    add r3, r2, #0\n    tst r3, r1\n    beq _02088D72\n    sub r1, #0x41\n    bl sub_0208A71C\n    cmp r0, #1\n    bne _02088D6E\n    ldr r0, _02088E5C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl sub_0208A79C\n    mov r0, #5\n    pop {r4, pc}\n    mov r1, #0x80\n    tst r1, r2\n    beq _02088D92\n    mov r1, #1\n    bl sub_0208A71C\n    cmp r0, #1\n    bne _02088D8E\n    ldr r0, _02088E5C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl sub_0208A79C\n    mov r0, #5\n    pop {r4, pc}\n    mov r0, #1\n    tst r0, r2\n    beq _02088DB4\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0, #0x12]\n    cmp r0, #1\n    beq _02088DB4\n    ldr r0, _02088E60 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    bl sub_0208B08C\n    pop {r4, pc}\n    mov r0, #2\n    tst r0, r2\n    beq _02088DD4\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0208AFA0\n    add r0, r4, #0\n    mov r1, #4\n    bl sub_0208B044\n    pop {r4, pc}\n    add r0, r4, #0\n    bl sub_0208AE08\n    cmp r0, #4\n    bne _02088DFA\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0, #0x12]\n    cmp r0, #1\n    beq _02088E52\n    ldr r0, _02088E60 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    bl sub_0208B08C\n    pop {r4, pc}\n    cmp r0, #5\n    bne _02088E18\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0208AFA0\n    add r0, r4, #0\n    mov r1, #4\n    bl sub_0208B044\n    pop {r4, pc}\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _02088E52\n    lsl r1, r0, #1\n    add r2, r4, r1\n    mov r1, #0x99\n    lsl r1, r1, #2\n    ldrh r1, [r2, r1]\n    cmp r1, #0\n    beq _02088E52\n    ldr r3, _02088E64 ; =0x000007BD\n    mov r2, #0xf\n    ldrb r1, [r4, r3]\n    lsl r0, r0, #0x18\n    bic r1, r2\n    lsr r2, r0, #0x18\n    mov r0, #0xf\n    and r0, r2\n    orr r0, r1\n    strb r0, [r4, r3]\n    ldr r0, _02088E5C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    bl sub_0208A79C\n    mov r0, #5\n    pop {r4, pc}\n    mov r0, #5\n    pop {r4, pc}\n    nop\n    _02088E58: .word gSystem\n    _02088E5C: .word 0x000005DC\n    _02088E60: .word 0x000005DD\n    _02088E64: .word 0x000007BD"
    );
    #endif
}

void sub_02088E68(void) {
    /* Original at 0x02088E68 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl sub_0208AFA0\n    add r0, r4, #0\n    bl sub_0208BC78\n    ldr r2, _02088E94 ; =0x000007BD\n    mov r1, #0xf0\n    ldrb r3, [r4, r2]\n    add r0, r3, #0\n    bic r0, r1\n    lsl r1, r3, #0x1c\n    lsr r1, r1, #0x1c\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x18\n    orr r0, r1\n    strb r0, [r4, r2]\n    mov r0, #6\n    pop {r4, pc}\n    nop\n    _02088E94: .word 0x000007BD"
    );
    #endif
}

void sub_02088E98(void) {
    /* Original at 0x02088E98 */
    /* Requires manual decompilation - 164 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _02089014 ; =gSystem\n    add r5, r0, #0\n    ldr r2, [r1, #0x48]\n    mov r1, #0x40\n    add r3, r2, #0\n    tst r3, r1\n    beq _02088EC2\n    sub r1, #0x41\n    bl sub_0208A71C\n    cmp r0, #1\n    bne _02088EBE\n    ldr r0, _02089018 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    bl sub_0208A79C\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    mov r1, #0x80\n    tst r1, r2\n    beq _02088EE2\n    mov r1, #1\n    bl sub_0208A71C\n    cmp r0, #1\n    bne _02088EDE\n    ldr r0, _02089018 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    bl sub_0208A79C\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    mov r1, #1\n    add r3, r2, #0\n    tst r3, r1\n    beq _02088F3E\n    bl sub_0208AFA0\n    ldr r0, _0208901C ; =0x0000042C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _02089020 ; =0x000007BD\n    ldrb r0, [r5, r0]\n    lsl r1, r0, #0x1c\n    lsl r0, r0, #0x18\n    lsr r1, r1, #0x1c\n    lsr r0, r0, #0x1c\n    cmp r1, r0\n    beq _02088F34\n    ldr r0, _02089024 ; =0x000005DD\n    bl PlaySE\n    add r0, r5, #0\n    bl sub_0208A834\n    ldr r1, _02089020 ; =0x000007BD\n    add r0, r5, #0\n    ldrb r2, [r5, r1]\n    lsl r1, r2, #0x1c\n    lsl r2, r2, #0x18\n    lsr r1, r1, #0x1c\n    lsr r2, r2, #0x1c\n    bl sub_0208BB24\n    add r0, r5, #0\n    bl sub_0208DB64\n    add r0, r5, #0\n    bl sub_0208A79C\n    b _02088F3A\n    ldr r0, _02089018 ; =0x000005DC\n    bl PlaySE\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r1, #2\n    tst r1, r2\n    beq _02088F68\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_0208AFA0\n    ldr r0, _0208901C ; =0x0000042C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r5, #0\n    mov r1, #5\n    bl sub_0208B044\n    pop {r3, r4, r5, pc}\n    bl sub_0208ADDC\n    add r4, r0, #0\n    cmp r4, #4\n    bne _02088F96\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_0208AFA0\n    ldr r0, _0208901C ; =0x0000042C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r5, #0\n    mov r1, #5\n    bl sub_0208B044\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _02089010\n    lsl r0, r4, #1\n    add r1, r5, r0\n    mov r0, #0x99\n    lsl r0, r0, #2\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _02089010\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_0208AFA0\n    ldr r0, _0208901C ; =0x0000042C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r2, _02089020 ; =0x000007BD\n    ldrb r0, [r5, r2]\n    lsl r1, r0, #0x18\n    lsr r1, r1, #0x1c\n    cmp r4, r1\n    beq _02089006\n    mov r1, #0xf\n    bic r0, r1\n    lsl r1, r4, #0x18\n    lsr r3, r1, #0x18\n    mov r1, #0xf\n    and r1, r3\n    orr r0, r1\n    strb r0, [r5, r2]\n    ldr r0, _02089024 ; =0x000005DD\n    bl PlaySE\n    add r0, r5, #0\n    bl sub_0208A834\n    ldr r1, _02089020 ; =0x000007BD\n    add r0, r5, #0\n    ldrb r2, [r5, r1]\n    lsl r1, r2, #0x1c\n    lsl r2, r2, #0x18\n    lsr r1, r1, #0x1c\n    lsr r2, r2, #0x1c\n    bl sub_0208BB24\n    add r0, r5, #0\n    bl sub_0208DB64\n    add r0, r5, #0\n    bl sub_0208A79C\n    b _0208900C\n    ldr r0, _02089018 ; =0x000005DC\n    bl PlaySE\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    _02089014: .word gSystem\n    _02089018: .word 0x000005DC\n    _0208901C: .word 0x0000042C\n    _02089020: .word 0x000007BD\n    _02089024: .word 0x000005DD"
    );
    #endif
}

void sub_02089028(void) {
    /* Original at 0x02089028 */
    /* Requires manual decompilation - 209 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _020891F4 ; =gSystem\n    add r5, r0, #0\n    ldr r2, [r1, #0x48]\n    mov r1, #0x40\n    add r3, r2, #0\n    tst r3, r1\n    beq _02089052\n    sub r1, #0x41\n    bl sub_0208A71C\n    cmp r0, #1\n    bne _0208904E\n    ldr r0, _020891F8 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    bl sub_0208A79C\n    mov r0, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0x80\n    tst r1, r2\n    beq _02089072\n    mov r1, #1\n    bl sub_0208A71C\n    cmp r0, #1\n    bne _0208906E\n    ldr r0, _020891F8 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    bl sub_0208A79C\n    mov r0, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #1\n    tst r1, r2\n    beq _020890D8\n    ldr r0, _020891FC ; =0x000005DD\n    bl PlaySE\n    ldr r0, _02089200 ; =0x000007BD\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    cmp r0, #4\n    bne _0208909E\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    mov r2, #4\n    strb r2, [r1, #0x16]\n    ldr r0, [r5, r0]\n    mov r1, #0\n    strb r1, [r0, #0x17]\n    mov r0, #0x15\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r0, #1\n    add r1, r5, r0\n    mov r0, #0x99\n    lsl r0, r0, #2\n    ldrh r0, [r1, r0]\n    bl MoveIsHM\n    cmp r0, #1\n    bne _020890D0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrh r0, [r0, #0x18]\n    cmp r0, #0\n    beq _020890D0\n    ldr r0, _02089204 ; =0x0000044C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetDrawFlag\n    add r0, r5, #0\n    bl sub_0208DBF0\n    mov r0, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl sub_0208AED4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #2\n    tst r1, r2\n    beq _02089100\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    mov r2, #4\n    strb r2, [r1, #0x16]\n    ldr r0, [r5, r0]\n    mov r1, #1\n    strb r1, [r0, #0x17]\n    add r0, r5, #0\n    mov r1, #0x15\n    bl sub_0208B044\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_0208AE48\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _020891F0\n    cmp r4, #4\n    beq _02089118\n    cmp r4, #5\n    beq _02089140\n    b _02089170\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrh r0, [r0, #0x18]\n    cmp r0, #0\n    beq _020891F0\n    ldr r0, _020891FC ; =0x000005DD\n    bl PlaySE\n    ldr r1, _02089200 ; =0x000007BD\n    mov r0, #0xf\n    ldrb r2, [r5, r1]\n    bic r2, r0\n    mov r0, #4\n    orr r0, r2\n    strb r0, [r5, r1]\n    add r0, r5, #0\n    bl sub_0208A79C\n    b _020891F0\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    ldr r1, _02089200 ; =0x000007BD\n    mov r0, #0xf\n    ldrb r2, [r5, r1]\n    bic r2, r0\n    mov r0, #5\n    orr r0, r2\n    strb r0, [r5, r1]\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    mov r2, #4\n    strb r2, [r1, #0x16]\n    ldr r0, [r5, r0]\n    mov r1, #0\n    strb r1, [r0, #0x17]\n    add r0, r5, #0\n    mov r1, #0x15\n    bl sub_0208B044\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x99\n    lsl r0, r0, #2\n    add r6, r5, r0\n    lsl r7, r4, #1\n    ldrh r0, [r6, r7]\n    bl MoveIsHM\n    cmp r0, #1\n    bne _020891C2\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrh r0, [r0, #0x18]\n    cmp r0, #0\n    beq _020891C2\n    ldr r0, _020891FC ; =0x000005DD\n    bl PlaySE\n    ldr r2, _02089200 ; =0x000007BD\n    mov r1, #0xf\n    ldrb r0, [r5, r2]\n    bic r0, r1\n    lsl r1, r4, #0x18\n    lsr r3, r1, #0x18\n    mov r1, #0xf\n    and r1, r3\n    orr r0, r1\n    strb r0, [r5, r2]\n    ldr r0, _02089204 ; =0x0000044C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetDrawFlag\n    add r0, r5, #0\n    bl sub_0208BBDC\n    add r0, r5, #0\n    bl sub_0208DBF0\n    mov r0, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r6, r7]\n    cmp r0, #0\n    beq _020891F0\n    ldr r0, _020891FC ; =0x000005DD\n    bl PlaySE\n    ldr r2, _02089200 ; =0x000007BD\n    mov r1, #0xf\n    ldrb r0, [r5, r2]\n    bic r0, r1\n    lsl r1, r4, #0x18\n    lsr r3, r1, #0x18\n    mov r1, #0xf\n    and r1, r3\n    orr r0, r1\n    strb r0, [r5, r2]\n    add r0, r5, #0\n    bl sub_0208A79C\n    add r0, r5, #0\n    bl sub_0208AED4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _020891F4: .word gSystem\n    _020891F8: .word 0x000005DC\n    _020891FC: .word 0x000005DD\n    _02089200: .word 0x000007BD\n    _02089204: .word 0x0000044C"
    );
    #endif
}

void sub_02089208(void) {
    /* Original at 0x02089208 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _020892E0 ; =gSystem\n    add r4, r0, #0\n    ldr r2, [r1, #0x48]\n    mov r1, #1\n    tst r1, r2\n    beq _0208923C\n    ldr r0, _020892E4 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _020892E8 ; =0x000007BD\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x1c\n    lsr r2, r0, #0x1c\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    strb r2, [r1, #0x16]\n    ldr r0, [r4, r0]\n    mov r1, #0\n    strb r1, [r0, #0x17]\n    add r0, r4, #0\n    mov r1, #0x15\n    bl sub_0208B068\n    pop {r4, pc}\n    mov r1, #2\n    tst r1, r2\n    beq _02089270\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    ldr r0, _020892EC ; =0x00000428\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _020892F0 ; =0x0000042C\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0208AF08\n    add r0, r4, #0\n    mov r1, #8\n    bl sub_0208B044\n    pop {r4, pc}\n    bl sub_0208AE88\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _020892DA\n    cmp r0, #0\n    beq _02089286\n    cmp r0, #1\n    beq _020892AC\n    b _020892DA\n    ldr r0, _020892E4 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _020892E8 ; =0x000007BD\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x1c\n    lsr r2, r0, #0x1c\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    strb r2, [r1, #0x16]\n    ldr r0, [r4, r0]\n    mov r1, #0\n    strb r1, [r0, #0x17]\n    add r0, r4, #0\n    mov r1, #0x15\n    bl sub_0208B068\n    pop {r4, pc}\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    ldr r0, _020892EC ; =0x00000428\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _020892F0 ; =0x0000042C\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0208AF08\n    add r0, r4, #0\n    mov r1, #8\n    bl sub_0208B044\n    pop {r4, pc}\n    mov r0, #9\n    pop {r4, pc}\n    nop\n    _020892E0: .word gSystem\n    _020892E4: .word 0x000005DD\n    _020892E8: .word 0x000007BD\n    _020892EC: .word 0x00000428\n    _020892F0: .word 0x0000042C"
    );
    #endif
}

void sub_020892F4(void) {
    sub_0208A9C4();
}

void sub_02089308(void) {
    sub_0208AA9C();
}

void sub_0208931C(void) {
    /* Original at 0x0208931C */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r3, _02089418 ; =gSystem\n    mov r1, #0x20\n    ldr r2, [r3, #0x4c]\n    add r4, r0, #0\n    add r5, r2, #0\n    tst r5, r1\n    beq _02089336\n    sub r1, #0x21\n    bl sub_0208AB58\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    mov r1, #0x10\n    tst r1, r2\n    beq _02089346\n    mov r1, #1\n    bl sub_0208AB58\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    mov r1, #0x40\n    add r5, r2, #0\n    tst r5, r1\n    beq _02089358\n    sub r1, #0x43\n    bl sub_0208AB58\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    mov r1, #0x80\n    tst r1, r2\n    beq _02089368\n    mov r1, #3\n    bl sub_0208AB58\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    ldr r2, [r3, #0x48]\n    mov r1, #3\n    tst r1, r2\n    beq _02089382\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xb\n    bl sub_0208B0F4\n    pop {r3, r4, r5, pc}\n    bl sub_0208AEC4\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bgt _02089392\n    beq _02089414\n    b _020893F8\n    cmp r0, #0xb\n    bgt _020893F8\n    cmp r0, #9\n    blt _020893F8\n    beq _020893A6\n    cmp r0, #0xa\n    beq _020893C6\n    cmp r0, #0xb\n    beq _020893E6\n    b _020893F8\n    ldr r0, _0208941C ; =0x00000504\n    ldr r0, [r4, r0]\n    bl Sprite_GetDrawFlag\n    cmp r0, #1\n    bne _02089414\n    ldr r0, _02089420 ; =0x000005DC\n    bl PlaySE\n    ldr r0, _0208941C ; =0x00000504\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xd\n    pop {r3, r4, r5, pc}\n    ldr r0, _02089424 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Sprite_GetDrawFlag\n    cmp r0, #1\n    bne _02089414\n    ldr r0, _02089420 ; =0x000005DC\n    bl PlaySE\n    ldr r0, _02089424 ; =0x00000508\n    mov r1, #3\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xe\n    pop {r3, r4, r5, pc}\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xb\n    bl sub_0208B0F4\n    pop {r3, r4, r5, pc}\n    ldr r1, _02089428 ; =0x000007C4\n    ldrb r2, [r4, r1]\n    cmp r2, r0\n    beq _02089410\n    strb r0, [r4, r1]\n    ldr r0, _02089420 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0208AB58\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    mov r0, #0xc\n    pop {r3, r4, r5, pc}\n    _02089418: .word gSystem\n    _0208941C: .word 0x00000504\n    _02089420: .word 0x000005DC\n    _02089424: .word 0x00000508\n    _02089428: .word 0x000007C4"
    );
    #endif
}

void sub_0208942C(void) {
    /* Original at 0x0208942C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02089450 ; =0x00000504\n    ldr r0, [r4, r0]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _0208944A\n    mov r1, #8\n    add r0, r4, #0\n    mvn r1, r1\n    bl sub_0208AB58\n    mov r0, #0xc\n    pop {r4, pc}\n    mov r0, #0xd\n    pop {r4, pc}\n    nop\n    _02089450: .word 0x00000504"
    );
    #endif
}

void sub_02089454(void) {
    /* Original at 0x02089454 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02089474 ; =0x00000508\n    ldr r0, [r4, r0]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _02089470\n    add r0, r4, #0\n    mov r1, #9\n    bl sub_0208AB58\n    mov r0, #0xc\n    pop {r4, pc}\n    mov r0, #0xe\n    pop {r4, pc}\n    _02089474: .word 0x00000508"
    );
    #endif
}

void sub_02089478(void) {
    /* Original at 0x02089478 */
    /* Requires manual decompilation - 174 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    ldr r1, _020895E8 ; =gSystem\n    add r5, r0, #0\n    ldr r2, [r1, #0x48]\n    mov r1, #3\n    tst r1, r2\n    bne _0208948A\n    b _020895E0\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    ldrb r1, [r1, #0x11]\n    cmp r1, #2\n    bne _020894AE\n    bl sub_0208A520\n    add r6, r0, #0\n    mov r0, #0x13\n    bl AllocMonZeroed\n    add r4, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl CopyBoxPokemonToPokemon\n    b _020894B4\n    bl sub_0208A520\n    add r4, r0, #0\n    ldr r0, _020895EC ; =0x000007BE\n    mov r2, #0\n    strb r2, [r5, r0]\n    ldr r0, _020895F0 ; =0x00000275\n    mov r1, #0x13\n    ldrb r6, [r5, r0]\n    add r0, r4, #0\n    bl GetMonData\n    ldr r1, _020895F0 ; =0x00000275\n    strb r0, [r5, r1]\n    ldrb r0, [r5, r1]\n    cmp r6, r0\n    beq _020894DA\n    ldr r1, _020895EC ; =0x000007BE\n    mov r0, #1\n    ldrb r2, [r5, r1]\n    orr r0, r2\n    strb r0, [r5, r1]\n    ldr r0, _020895F4 ; =0x00000276\n    mov r1, #0x14\n    ldrb r6, [r5, r0]\n    add r0, r4, #0\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _020895F4 ; =0x00000276\n    strb r0, [r5, r1]\n    ldrb r0, [r5, r1]\n    cmp r6, r0\n    beq _020894FC\n    ldr r1, _020895EC ; =0x000007BE\n    mov r0, #2\n    ldrb r2, [r5, r1]\n    orr r0, r2\n    strb r0, [r5, r1]\n    ldr r0, _020895F8 ; =0x00000277\n    mov r1, #0x15\n    ldrb r6, [r5, r0]\n    add r0, r4, #0\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _020895F8 ; =0x00000277\n    strb r0, [r5, r1]\n    ldrb r0, [r5, r1]\n    cmp r6, r0\n    beq _0208951E\n    ldr r1, _020895EC ; =0x000007BE\n    mov r0, #4\n    ldrb r2, [r5, r1]\n    orr r0, r2\n    strb r0, [r5, r1]\n    mov r0, #0x9e\n    lsl r0, r0, #2\n    ldrb r6, [r5, r0]\n    add r0, r4, #0\n    mov r1, #0x16\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x9e\n    lsl r1, r1, #2\n    strb r0, [r5, r1]\n    ldrb r0, [r5, r1]\n    cmp r6, r0\n    beq _02089544\n    ldr r1, _020895EC ; =0x000007BE\n    mov r0, #8\n    ldrb r2, [r5, r1]\n    orr r0, r2\n    strb r0, [r5, r1]\n    ldr r0, _020895FC ; =0x00000279\n    mov r1, #0x17\n    ldrb r6, [r5, r0]\n    add r0, r4, #0\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _020895FC ; =0x00000279\n    strb r0, [r5, r1]\n    ldrb r0, [r5, r1]\n    cmp r6, r0\n    beq _02089566\n    ldr r1, _020895EC ; =0x000007BE\n    mov r0, #0x10\n    ldrb r2, [r5, r1]\n    orr r0, r2\n    strb r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0x18\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02089600 ; =0x0000027A\n    strb r0, [r5, r1]\n    sub r1, #0x4e\n    ldr r0, [r5, r1]\n    ldrb r0, [r0, #0x11]\n    cmp r0, #2\n    bne _02089584\n    add r0, r4, #0\n    bl Heap_Free\n    mov r1, #7\n    mov r0, #0\n    lsl r1, r1, #6\n    mov r2, #0x13\n    bl LoadFontPal1\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r0, [r0, #4]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x13\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    ldr r2, _02089604 ; =0x000003E2\n    mov r1, #1\n    mov r3, #0xd\n    bl LoadUserFrameGfx2\n    ldr r0, _020895EC ; =0x000007BE\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    bne _020895C8\n    add r0, r5, #0\n    mov r1, #0xfe\n    bl sub_0208DDA0\n    add sp, #8\n    mov r0, #0x12\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    bl sub_0208E174\n    add r0, r5, #0\n    bl sub_0208BCD4\n    add r0, r5, #0\n    bl sub_0208BDC8\n    add sp, #8\n    mov r0, #0x11\n    pop {r4, r5, r6, pc}\n    mov r0, #0x10\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _020895E8: .word gSystem\n    _020895EC: .word 0x000007BE\n    _020895F0: .word 0x00000275\n    _020895F4: .word 0x00000276\n    _020895F8: .word 0x00000277\n    _020895FC: .word 0x00000279\n    _02089600: .word 0x0000027A\n    _02089604: .word 0x000003E2"
    );
    #endif
}

void sub_02089608(void) {
    /* Original at 0x02089608 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02089650 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _0208964A\n    ldr r0, _02089654 ; =0x000007BE\n    mov r1, #0\n    ldrb r2, [r5, r0]\n    mov r0, #1\n    add r4, r0, #0\n    lsl r4, r1\n    add r3, r2, #0\n    tst r3, r4\n    beq _02089640\n    add r0, r5, #0\n    bl sub_0208DDA0\n    ldr r0, _02089654 ; =0x000007BE\n    ldrb r1, [r5, r0]\n    eor r1, r4\n    strb r1, [r5, r0]\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    bne _0208964A\n    mov r0, #0x12\n    pop {r3, r4, r5, pc}\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, #5\n    blo _0208961E\n    mov r0, #0x11\n    pop {r3, r4, r5, pc}\n    nop\n    _02089650: .word gSystem\n    _02089654: .word 0x000007BE"
    );
    #endif
}

void sub_02089658(void) {
    /* Original at 0x02089658 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0208966C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _02089666\n    mov r0, #0x15\n    bx lr\n    mov r0, #0x12\n    bx lr\n    nop\n    _0208966C: .word gSystem"
    );
    #endif
}

void sub_02089670(void) {
    sub_020880CC();
}

void sub_02089680(void) {
    IsPaletteFadeFinished(0, 1);
}

void sub_02089698(void) {
    /* Original at 0x02089698 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    ldr r3, _02089788 ; =0x000007BE\n    add r4, r0, #0\n    ldrb r0, [r4, r3]\n    cmp r0, #0\n    beq _020896B0\n    cmp r0, #1\n    beq _020896F6\n    cmp r0, #2\n    beq _0208975E\n    b _02089782\n    add r0, r3, #0\n    add r0, #0xc\n    ldrb r0, [r4, r0]\n    add r1, r3, #0\n    add r2, r3, #0\n    str r0, [sp]\n    add r0, r3, #0\n    add r0, #0xd\n    ldrb r0, [r4, r0]\n    add r1, #0xf\n    add r2, #0xa\n    str r0, [sp, #4]\n    add r0, r3, #0\n    add r0, #0xe\n    ldrb r0, [r4, r0]\n    add r3, #0xb\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    str r0, [sp, #8]\n    ldrb r1, [r4, r1]\n    ldrb r2, [r4, r2]\n    ldrb r3, [r4, r3]\n    ldr r0, [r4]\n    bl BgTilemapRectChangePalette\n    ldr r1, _0208978C ; =0x000007CD\n    ldr r0, [r4]\n    ldrb r1, [r4, r1]\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _02089788 ; =0x000007BE\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _02089782\n    add r0, r3, #0\n    add r0, #0x10\n    ldrb r0, [r4, r0]\n    add r1, r0, #1\n    add r0, r3, #0\n    add r0, #0x10\n    strb r1, [r4, r0]\n    add r0, r3, #0\n    add r0, #0x10\n    ldrb r0, [r4, r0]\n    cmp r0, #4\n    bne _02089782\n    add r0, r3, #0\n    add r0, #0xc\n    ldrb r0, [r4, r0]\n    add r1, r3, #0\n    add r2, r3, #0\n    str r0, [sp]\n    add r0, r3, #0\n    add r0, #0xd\n    ldrb r0, [r4, r0]\n    add r1, #0xf\n    add r2, #0xa\n    str r0, [sp, #4]\n    add r0, r3, #0\n    add r0, #0xe\n    ldrb r0, [r4, r0]\n    add r3, #0xb\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    str r0, [sp, #8]\n    ldrb r1, [r4, r1]\n    ldrb r2, [r4, r2]\n    ldrb r3, [r4, r3]\n    ldr r0, [r4]\n    bl BgTilemapRectChangePalette\n    ldr r1, _0208978C ; =0x000007CD\n    ldr r0, [r4]\n    ldrb r1, [r4, r1]\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r1, _02089790 ; =0x000007CE\n    mov r0, #0\n    strb r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0x10\n    ldrb r0, [r4, r0]\n    sub r1, #0x10\n    add r0, r0, #1\n    strb r0, [r4, r1]\n    b _02089782\n    add r0, r3, #0\n    add r0, #0x10\n    ldrb r0, [r4, r0]\n    add r1, r0, #1\n    add r0, r3, #0\n    add r0, #0x10\n    strb r1, [r4, r0]\n    add r0, r3, #0\n    add r0, #0x10\n    ldrb r0, [r4, r0]\n    cmp r0, #2\n    bne _02089782\n    mov r0, #0\n    strb r0, [r4, r3]\n    add r3, #0x11\n    add sp, #0xc\n    ldrb r0, [r4, r3]\n    pop {r3, r4, pc}\n    mov r0, #0xf\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _02089788: .word 0x000007BE\n    _0208978C: .word 0x000007CD\n    _02089790: .word 0x000007CE"
    );
    #endif
}

void sub_02089794(void) {
    /* Original at 0x02089794 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _020897BC ; =0x000007C9\n    add r4, r0, #0\n    ldrb r1, [r4, r1]\n    cmp r1, #5\n    bne _020897AA\n    mov r1, #0\n    mvn r1, r1\n    bl sub_0208A2C0\n    b _020897B0\n    mov r1, #1\n    bl sub_0208A2C0\n    add r0, r4, #0\n    bl sub_0208B118\n    mov r0, #0x13\n    pop {r4, pc}\n    nop\n    _020897BC: .word 0x000007C9"
    );
    #endif
}

void sub_020897C0(void) {
    /* Original at 0x020897C0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0208A520\n    mov r2, #0x8b\n    lsl r2, r2, #2\n    add r1, r0, #0\n    ldr r0, [r4, r2]\n    ldrb r0, [r0, #0x11]\n    cmp r0, #2\n    bne _020897E2\n    add r2, r2, #4\n    add r0, r4, #0\n    add r2, r4, r2\n    bl sub_020897F0\n    pop {r4, pc}\n    add r2, r2, #4\n    add r0, r4, #0\n    add r2, r4, r2\n    bl sub_0208981C\n    pop {r4, pc}"
    );
    #endif
}

void sub_020897F0(void) {
    AllocMonZeroed(0x13);
    CopyBoxPokemonToPokemon(r6, r0);
    sub_0208981C(r5, r4, r7);
    Heap_Free(r4);
}

void sub_0208981C(void) {
    /* Original at 0x0208981C */
    /* Requires manual decompilation - 476 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    add r4, r2, #0\n    bl AcquireMonLock\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0xc]\n    add r0, r5, #0\n    bl Mon_GetBoxMon\n    mov r2, #0x7a\n    lsl r2, r2, #4\n    add r6, r0, #0\n    ldr r0, [r7, r2]\n    add r2, #0xc\n    ldr r2, [r7, r2]\n    mov r1, #0xb\n    bl ReadMsgDataIntoString\n    ldr r0, _02089BC0 ; =0x000007A8\n    mov r1, #0\n    ldr r0, [r7, r0]\n    add r2, r6, #0\n    bl BufferBoxMonSpeciesName\n    ldr r2, _02089BC0 ; =0x000007A8\n    mov r1, #0x23\n    ldr r0, [r7, r2]\n    lsl r1, r1, #4\n    add r2, r2, #4\n    ldr r1, [r7, r1]\n    ldr r2, [r7, r2]\n    bl StringExpandPlaceholders\n    mov r2, #0x7a\n    lsl r2, r2, #4\n    ldr r0, [r7, r2]\n    add r2, #0xc\n    ldr r2, [r7, r2]\n    mov r1, #0\n    bl ReadMsgDataIntoString\n    ldr r0, _02089BC0 ; =0x000007A8\n    mov r1, #0\n    ldr r0, [r7, r0]\n    add r2, r6, #0\n    bl BufferBoxMonNickname\n    ldr r2, _02089BC0 ; =0x000007A8\n    mov r1, #0x8d\n    ldr r0, [r7, r2]\n    lsl r1, r1, #2\n    add r2, r2, #4\n    ldr r1, [r7, r1]\n    ldr r2, [r7, r2]\n    bl StringExpandPlaceholders\n    mov r2, #0x7a\n    lsl r2, r2, #4\n    ldr r0, [r7, r2]\n    add r2, #0xc\n    ldr r2, [r7, r2]\n    mov r1, #0xe\n    bl ReadMsgDataIntoString\n    ldr r0, _02089BC0 ; =0x000007A8\n    mov r1, #0\n    ldr r0, [r7, r0]\n    add r2, r6, #0\n    bl BufferBoxMonOTName\n    ldr r2, _02089BC0 ; =0x000007A8\n    mov r1, #0x8e\n    ldr r0, [r7, r2]\n    lsl r1, r1, #2\n    add r2, r2, #4\n    ldr r1, [r7, r1]\n    ldr r2, [r7, r2]\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0xe]\n    add r0, r5, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    ldrb r1, [r4, #0x12]\n    mov r2, #0x7f\n    lsl r0, r0, #0x18\n    bic r1, r2\n    lsr r2, r0, #0x18\n    mov r0, #0x7f\n    and r0, r2\n    orr r0, r1\n    strb r0, [r4, #0x12]\n    add r0, r5, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x1f\n    ldr r2, [r4, #0x50]\n    ldr r1, _02089BC4 ; =0xEFFFFFFF\n    lsr r0, r0, #3\n    and r1, r2\n    orr r0, r1\n    str r0, [r4, #0x50]\n    add r0, r5, #0\n    mov r1, #0xb0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #1\n    bne _0208992C\n    ldr r0, [r4, #0x50]\n    lsl r0, r0, #3\n    lsr r0, r0, #0x1f\n    bne _0208992C\n    ldrb r1, [r4, #0x12]\n    mov r0, #0x80\n    bic r1, r0\n    strb r1, [r4, #0x12]\n    b _02089934\n    ldrb r1, [r4, #0x12]\n    mov r0, #0x80\n    orr r0, r1\n    strb r0, [r4, #0x12]\n    add r0, r5, #0\n    bl GetMonGender\n    ldrb r1, [r4, #0x13]\n    mov r2, #3\n    bic r1, r2\n    mov r2, #3\n    and r0, r2\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    add r0, r5, #0\n    mov r1, #0x9b\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x1a\n    ldrb r1, [r4, #0x13]\n    mov r2, #0xfc\n    lsr r0, r0, #0x18\n    bic r1, r2\n    orr r0, r1\n    strb r0, [r4, #0x13]\n    add r0, r5, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r4, #0x10]\n    add r0, r5, #0\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r4, #0x11]\n    add r0, r5, #0\n    mov r1, #7\n    mov r2, #0\n    bl GetMonData\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0\n    bl GetMonData\n    str r0, [r4, #0x18]\n    add r0, r5, #0\n    mov r1, #0x9d\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x44\n    strb r0, [r1]\n    ldrb r1, [r4, #0x12]\n    ldrh r0, [r4, #0xc]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x19\n    bl GetMonExpBySpeciesAndLevel\n    str r0, [r4, #0x1c]\n    ldrb r0, [r4, #0x12]\n    lsl r0, r0, #0x19\n    lsr r1, r0, #0x19\n    cmp r1, #0x64\n    bne _020899C0\n    ldr r0, [r4, #0x1c]\n    b _020899C8\n    ldrh r0, [r4, #0xc]\n    add r1, r1, #1\n    bl GetMonExpBySpeciesAndLevel\n    str r0, [r4, #0x20]\n    add r0, r5, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x24]\n    add r0, r5, #0\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x26]\n    add r0, r5, #0\n    mov r1, #0xa5\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x28]\n    add r0, r5, #0\n    mov r1, #0xa6\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x2a]\n    add r0, r5, #0\n    mov r1, #0xa8\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x2c]\n    add r0, r5, #0\n    mov r1, #0xa9\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x2e]\n    add r0, r5, #0\n    mov r1, #0xa7\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x30]\n    add r0, r5, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x32\n    strb r0, [r1]\n    add r0, r5, #0\n    bl GetMonNature\n    add r1, r4, #0\n    add r1, #0x33\n    strb r0, [r1]\n    mov r6, #0\n    lsl r0, r6, #1\n    add r0, r4, r0\n    add r1, r6, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, #0x36\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp]\n    mov r2, #0\n    strh r0, [r1, #0x34]\n    add r1, r6, #0\n    add r0, r5, #0\n    add r1, #0x3a\n    bl GetMonData\n    add r1, r4, r6\n    add r1, #0x3c\n    strb r0, [r1]\n    add r1, r6, #0\n    add r0, r5, #0\n    add r1, #0x3e\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    ldr r0, [sp]\n    ldrh r0, [r0, #0x34]\n    bl GetMoveMaxPP\n    add r1, r4, r6\n    add r1, #0x40\n    strb r0, [r1]\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    cmp r6, #4\n    blo _02089A3C\n    add r0, r5, #0\n    mov r1, #0x13\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x45\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #0x14\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x46\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #0x15\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x47\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #0x16\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x48\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #0x17\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x49\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #0x18\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x4a\n    strb r0, [r1]\n    add r0, r4, #0\n    mov r1, #5\n    add r0, #0x4b\n    strb r1, [r0]\n    mov r6, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl MonGetFlavorPreference\n    cmp r0, #1\n    bne _02089B0A\n    add r0, r4, #0\n    add r0, #0x4b\n    strb r6, [r0]\n    b _02089B14\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    cmp r6, #5\n    blo _02089AF6\n    add r0, r5, #0\n    mov r1, #0xb\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x4c\n    strh r0, [r1]\n    add r0, r5, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x4e\n    strh r0, [r1]\n    add r0, r5, #0\n    bl Pokemon_GetStatusIconId\n    mov r1, #0xf\n    ldr r2, [r4, #0x50]\n    lsl r1, r1, #0x1c\n    and r2, r1\n    ldr r1, _02089BC8 ; =0x0FFFFFFF\n    and r0, r1\n    orr r0, r2\n    str r0, [r4, #0x50]\n    add r0, r5, #0\n    bl Pokemon_IsImmuneToPokerus\n    cmp r0, #1\n    bne _02089B64\n    ldr r1, [r4, #0x50]\n    ldr r0, _02089BCC ; =0x3FFFFFFF\n    and r1, r0\n    mov r0, #2\n    lsl r0, r0, #0x1e\n    orr r0, r1\n    str r0, [r4, #0x50]\n    b _02089B9A\n    add r0, r5, #0\n    bl Pokemon_HasPokerus\n    cmp r0, #1\n    bne _02089B92\n    ldr r2, [r4, #0x50]\n    ldr r1, _02089BCC ; =0x3FFFFFFF\n    add r0, r4, #0\n    and r2, r1\n    add r1, r1, #1\n    orr r1, r2\n    str r1, [r4, #0x50]\n    lsl r1, r1, #4\n    lsr r1, r1, #4\n    add r0, #0x50\n    cmp r1, #7\n    bne _02089B9A\n    mov r1, #0xf\n    ldr r2, [r0]\n    lsl r1, r1, #0x1c\n    and r1, r2\n    str r1, [r0]\n    b _02089B9A\n    ldr r1, [r4, #0x50]\n    ldr r0, _02089BCC ; =0x3FFFFFFF\n    and r0, r1\n    str r0, [r4, #0x50]\n    add r0, r5, #0\n    bl MonIsShiny\n    cmp r0, #1\n    ldr r1, [r4, #0x50]\n    bne _02089BAE\n    mov r0, #2\n    lsl r0, r0, #0x1c\n    orr r0, r1\n    b _02089BB2\n    ldr r0, _02089BD0 ; =0xDFFFFFFF\n    and r0, r1\n    str r0, [r4, #0x50]\n    mov r6, #0\n    str r6, [r4, #0x54]\n    str r6, [r4, #0x58]\n    str r6, [r4, #0x5c]\n    ldr r0, _02089BD4 ; =0x000007C6\n    b _02089BD8\n    _02089BC0: .word 0x000007A8\n    _02089BC4: .word 0xEFFFFFFF\n    _02089BC8: .word 0x0FFFFFFF\n    _02089BCC: .word 0x3FFFFFFF\n    _02089BD0: .word 0xDFFFFFFF\n    _02089BD4: .word 0x000007C6\n    str r6, [r4, #0x60]\n    strb r6, [r7, r0]\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    mov r1, #0\n    bl GetRibbonAttr\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02089C14\n    lsr r0, r6, #5\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0x1f\n    add r2, r6, #0\n    and r2, r1\n    mov r1, #1\n    ldr r3, [r0, #0x54]\n    lsl r1, r2\n    orr r1, r3\n    str r1, [r0, #0x54]\n    ldr r0, _02089C4C ; =0x000007C6\n    ldrb r0, [r7, r0]\n    add r1, r0, #1\n    ldr r0, _02089C4C ; =0x000007C6\n    strb r1, [r7, r0]\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    cmp r6, #0x50\n    blo _02089BDC\n    mov r6, #0xa5\n    mov r4, #0\n    lsl r6, r6, #2\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0xb5\n    mov r2, #0\n    bl GetMonData\n    add r1, r7, r4\n    strb r0, [r1, r6]\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #6\n    blo _02089C24\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    bl ReleaseMonLock\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02089C4C: .word 0x000007C6"
    );
    #endif
}

void sub_02089C50(void) {
    /* Original at 0x02089C50 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    mov r2, #0xa\n    add r4, r0, #0\n    lsl r2, r2, #6\n    ldr r0, [r4, r2]\n    lsl r0, r0, #3\n    lsr r0, r0, #0x1f\n    bne _02089CAA\n    ldr r0, _02089CB0 ; =0x000007B8\n    sub r2, #0x44\n    ldrh r2, [r4, r2]\n    ldr r0, [r4, r0]\n    add r1, sp, #4\n    mov r3, #1\n    bl sub_020729A4\n    mov r2, #0x8f\n    lsl r2, r2, #2\n    add r1, r2, #0\n    ldrh r0, [r4, r2]\n    sub r1, #0x83\n    cmp r0, r1\n    bne _02089C9A\n    add r0, sp, #4\n    ldrb r0, [r0]\n    mov r1, #0\n    sub r2, #0x10\n    str r0, [sp]\n    ldr r0, [r4, r2]\n    mov r2, #0x64\n    ldr r0, [r0, #0x28]\n    add r3, r1, #0\n    bl sub_02006EA0\n    add sp, #8\n    pop {r4, pc}\n    add r2, #0x42\n    ldrh r2, [r4, r2]\n    add r1, sp, #4\n    ldrb r1, [r1]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    bl sub_020062E0\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _02089CB0: .word 0x000007B8"
    );
    #endif
}

void sub_02089CB4(void) {
    /* Original at 0x02089CB4 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0, #0x12]\n    cmp r0, #0\n    beq _02089CCE\n    cmp r0, #1\n    beq _02089CCE\n    cmp r0, #2\n    beq _02089CD6\n    b _02089CDC\n    ldr r0, _02089D3C ; =0x000007BC\n    mov r1, #0\n    strb r1, [r4, r0]\n    b _02089CDC\n    ldr r0, _02089D3C ; =0x000007BC\n    mov r1, #1\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl sub_0208B448\n    add r0, r4, #0\n    bl sub_0208B5A8\n    add r0, r4, #0\n    bl sub_0208C2A0\n    add r0, r4, #0\n    bl sub_0208BD38\n    add r0, r4, #0\n    bl sub_0208BCD4\n    add r0, r4, #0\n    bl sub_0208C42C\n    add r0, r4, #0\n    bl sub_0208CBD4\n    add r0, r4, #0\n    bl sub_02089F98\n    add r0, r4, #0\n    bl sub_0208B9C8\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0, #0x12]\n    cmp r0, #2\n    bne _02089D26\n    add r0, r4, #0\n    bl sub_0208A8F4\n    pop {r4, pc}\n    add r0, r4, #0\n    bl sub_0208B400\n    add r0, r4, #0\n    bl sub_0208BF9C\n    add r0, r4, #0\n    bl sub_0208BFD0\n    pop {r4, pc}\n    nop\n    _02089D3C: .word 0x000007BC"
    );
    #endif
}

void sub_02089D40(void) {
    /* Original at 0x02089D40 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    mov r6, #0\n    strb r6, [r0, #0x15]\n    add r0, #0x15\n    mov r3, #1\n    ldrb r5, [r1, r6]\n    cmp r5, #4\n    beq _02089D64\n    add r2, r3, #0\n    ldrb r4, [r0]\n    lsl r2, r5\n    orr r2, r4\n    strb r2, [r0]\n    add r2, r6, #1\n    lsl r2, r2, #0x18\n    lsr r6, r2, #0x18\n    cmp r6, #4\n    blo _02089D4A\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void sub_02089D68(void) {
    /* Original at 0x02089D68 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    ldr r1, _02089E10 ; =0x000007BC\n    add r5, r0, #0\n    ldrsb r1, [r5, r1]\n    cmp r1, r4\n    beq _02089E0C\n    bl sub_0208C4E0\n    ldr r0, _02089E10 ; =0x000007BC\n    strb r4, [r5, r0]\n    add r0, r5, #0\n    bl sub_0208B448\n    add r0, r5, #0\n    bl sub_0208B5A8\n    add r0, r5, #0\n    bl sub_0208B89C\n    add r0, r5, #0\n    bl sub_0208B9C8\n    add r0, r5, #0\n    bl sub_0208C2A0\n    add r0, r5, #0\n    bl sub_0208BCD4\n    add r0, r5, #0\n    bl sub_0208C42C\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #0x12\n    str r0, [sp, #4]\n    mov r0, #0x14\n    mov r2, #0\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r5]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r5]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #0x12\n    str r0, [sp, #4]\n    mov r0, #0x14\n    mov r2, #0\n    str r0, [sp, #8]\n    str r2, [sp, #0xc]\n    ldr r0, [r5]\n    mov r1, #4\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r5]\n    mov r1, #4\n    bl BgCommitTilemapBufferToVram\n    add r0, r5, #0\n    bl sub_0208CBD4\n    add r0, r5, #0\n    bl sub_02089F98\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrb r0, [r0, #0x12]\n    cmp r0, #2\n    bne _02089E0C\n    add r0, r5, #0\n    bl sub_0208A950\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _02089E10: .word 0x000007BC"
    );
    #endif
}

void sub_02089E14(void) {
    /* Original at 0x02089E14 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02089E2C ; =0x000005E1\n    add r4, r1, #0\n    bl PlaySE\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_02089D68\n    pop {r3, r4, r5, pc}\n    _02089E2C: .word 0x000005E1"
    );
    #endif
}

void sub_02089E30(void) {
    /* Original at 0x02089E30 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r3, r0, #0\n    ldr r0, _02089E7C ; =0x000007BC\n    add r2, r1, #0\n    ldrsb r1, [r3, r0]\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldr r4, [r3, r0]\n    mov ip, r1\n    lsl r4, r4, #3\n    lsr r4, r4, #0x1f\n    bne _02089E7A\n    sub r0, #0x54\n    ldr r0, [r3, r0]\n    mov r7, #0\n    ldrb r0, [r0, #0x15]\n    mov r6, #2\n    mov r4, #1\n    add r1, r1, r2\n    lsl r1, r1, #0x18\n    asr r1, r1, #0x18\n    bpl _02089E60\n    add r1, r6, #0\n    b _02089E66\n    cmp r1, #2\n    ble _02089E66\n    add r1, r7, #0\n    add r5, r4, #0\n    lsl r5, r1\n    tst r5, r0\n    beq _02089E54\n    mov r0, ip\n    cmp r1, r0\n    beq _02089E7A\n    add r0, r3, #0\n    bl sub_02089E14\n    pop {r3, r4, r5, r6, r7, pc}\n    _02089E7C: .word 0x000007BC"
    );
    #endif
}

void sub_02089E80(void) {
    /* Original at 0x02089E80 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x8b\n    lsl r2, r2, #2\n    ldr r0, [r0, r2]\n    ldrb r3, [r0, #0x15]\n    mov r0, #1\n    add r2, r0, #0\n    lsl r2, r1\n    add r1, r3, #0\n    tst r1, r2\n    bne _02089E96\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02089E98(void) {
    /* Original at 0x02089E98 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl sub_0208E544\n    add r5, r0, #0\n    cmp r5, #0xff\n    bne _02089EAA\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    cmp r5, #9\n    bhi _02089F4C\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02089EBA: ; jump table\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_02089E80\n    cmp r0, #0\n    beq _02089F4C\n    lsl r1, r5, #0x18\n    add r0, r4, #0\n    asr r1, r1, #0x18\n    bl sub_02089E14\n    b _02089F4C\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    lsl r0, r0, #3\n    lsr r0, r0, #0x1f\n    bne _02089F4C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_02089E80\n    cmp r0, #0\n    beq _02089F4C\n    lsl r1, r5, #0x18\n    add r0, r4, #0\n    asr r1, r1, #0x18\n    bl sub_02089E14\n    b _02089F4C\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_0208ADB8\n    mov r0, #0x25\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x15\n    bl sub_0208B044\n    pop {r3, r4, r5, pc}\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    sub r5, r5, #4\n    ldrb r0, [r0, #0x14]\n    cmp r0, r5\n    beq _02089F4C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_0208A310\n    cmp r0, #0\n    beq _02089F4C\n    lsl r1, r5, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl sub_0208A234\n    mov r0, #0x13\n    pop {r3, r4, r5, pc}\n    mov r0, #2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02089F50(void) {
    /* Original at 0x02089F50 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r1, #0\n    add r1, r2, #0\n    mov r0, #0xa2\n    mov r2, #0x13\n    add r4, r3, #0\n    bl AllocAndReadWholeNarcMemberByIdPair\n    add r1, sp, #0xc\n    add r7, r0, #0\n    bl NNS_G2dGetUnpackedScreenData\n    mov r3, #0\n    lsl r1, r4, #0x18\n    str r3, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r2, [sp, #0xc]\n    ldr r0, [r5]\n    lsr r1, r1, #0x18\n    add r2, #0xc\n    bl LoadRectToBgTilemapRect\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r7, #0\n    bl Heap_Free\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02089F98(void) {
    /* Original at 0x02089F98 */
    /* Requires manual decompilation - 151 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x8b\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    ldr r1, [r1, #0x34]\n    cmp r1, #0\n    bne _02089FBC\n    ldr r1, _0208A0DC ; =0x000007BC\n    ldrsb r1, [r4, r1]\n    cmp r1, #2\n    bne _02089FBC\n    ldr r1, [r4]\n    mov r2, #0xb\n    mov r3, #3\n    bl sub_02089F50\n    b _02089FD4\n    ldr r2, _0208A0DC ; =0x000007BC\n    ldr r1, [r4]\n    ldrsb r3, [r4, r2]\n    mov r2, #0xc\n    add r0, r4, #0\n    add r5, r3, #0\n    mul r5, r2\n    ldr r2, _0208A0E0 ; =_021039B8\n    mov r3, #3\n    ldr r2, [r2, r5]\n    bl sub_02089F50\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    ldrb r1, [r1, #0x12]\n    cmp r1, #2\n    bne _0208A024\n    ldr r2, _0208A0DC ; =0x000007BC\n    ldr r1, [r4]\n    ldrsb r3, [r4, r2]\n    mov r2, #0xc\n    add r0, r4, #0\n    add r5, r3, #0\n    mul r5, r2\n    ldr r2, _0208A0E4 ; =_021039B8 + 8\n    mov r3, #6\n    ldr r2, [r2, r5]\n    bl sub_02089F50\n    ldr r0, [r4]\n    mov r1, #5\n    mov r2, #0\n    mov r3, #0x80\n    bl ScheduleSetBgPosText\n    ldr r0, [r4]\n    mov r1, #5\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrh r0, [r0, #0x18]\n    cmp r0, #0\n    bne _0208A090\n    add r0, r4, #0\n    bl sub_0208AF70\n    b _0208A090\n    add r0, #0x54\n    ldr r0, [r4, r0]\n    lsl r0, r0, #3\n    lsr r0, r0, #0x1f\n    beq _0208A048\n    ldr r2, _0208A0DC ; =0x000007BC\n    ldr r1, [r4]\n    ldrsb r3, [r4, r2]\n    mov r2, #0xc\n    add r0, r4, #0\n    add r5, r3, #0\n    mul r5, r2\n    ldr r2, _0208A0E4 ; =_021039B8 + 8\n    mov r3, #6\n    ldr r2, [r2, r5]\n    bl sub_02089F50\n    b _0208A090\n    add r0, r4, #0\n    mov r1, #2\n    bl sub_02089E80\n    cmp r0, #0\n    beq _0208A06E\n    ldr r2, _0208A0DC ; =0x000007BC\n    ldr r1, [r4]\n    ldrsb r3, [r4, r2]\n    mov r2, #0xc\n    add r0, r4, #0\n    add r5, r3, #0\n    mul r5, r2\n    ldr r2, _0208A0E8 ; =_021039B8 + 4\n    mov r3, #6\n    ldr r2, [r2, r5]\n    bl sub_02089F50\n    b _0208A090\n    ldr r0, _0208A0DC ; =0x000007BC\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    bne _0208A084\n    ldr r1, [r4]\n    add r0, r4, #0\n    mov r2, #0x4d\n    mov r3, #6\n    bl sub_02089F50\n    b _0208A090\n    ldr r1, [r4]\n    add r0, r4, #0\n    mov r2, #0x4e\n    mov r3, #6\n    bl sub_02089F50\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0, #0x11]\n    cmp r0, #2\n    bne _0208A0B2\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    mov r1, #4\n    ldr r0, [r4, r0]\n    mov r2, #0x14\n    add r3, r1, #0\n    bl sub_020196E8\n    add r0, r4, #0\n    bl sub_0208B118\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    lsl r0, r0, #3\n    lsr r0, r0, #0x1f\n    bne _0208A0D8\n    ldr r0, _0208A0DC ; =0x000007BC\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    bne _0208A0CE\n    add r0, r4, #0\n    bl sub_0208A1A0\n    pop {r3, r4, r5, pc}\n    cmp r0, #1\n    bne _0208A0D8\n    add r0, r4, #0\n    bl sub_0208A0EC\n    pop {r3, r4, r5, pc}\n    nop\n    _0208A0DC: .word 0x000007BC\n    _0208A0E0: .word _021039B8\n    _0208A0E4: .word _021039B8 + 8\n    _0208A0E8: .word _021039B8 + 4"
    );
    #endif
}

void sub_0208A0EC(void) {
    /* Original at 0x0208A0EC */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    mov r1, #0x95\n    add r6, r0, #0\n    lsl r1, r1, #2\n    ldrh r0, [r6, r1]\n    add r1, r1, #2\n    ldrh r1, [r6, r1]\n    mov r2, #0x30\n    bl CalculateHpBarColor\n    cmp r0, #4\n    bhi _0208A126\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0208A112: ; jump table\n    ldr r7, _0208A194 ; =0x0000F097\n    b _0208A126\n    ldr r7, _0208A198 ; =0x0000F0B7\n    b _0208A126\n    ldr r7, _0208A19C ; =0x0000F0D7\n    mov r1, #0x95\n    lsl r1, r1, #2\n    ldrh r0, [r6, r1]\n    add r1, r1, #2\n    ldrh r1, [r6, r1]\n    mov r2, #0x30\n    bl CalculateHpBarPixelsLength\n    add r4, r0, #0\n    add r0, r7, #0\n    add r0, #8\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    mov r5, #0\n    str r0, [sp, #0x10]\n    cmp r4, #8\n    blo _0208A14C\n    ldr r2, [sp, #0x10]\n    b _0208A152\n    add r0, r7, r4\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r3, r5, #0\n    str r0, [sp, #8]\n    mov r0, #0x11\n    add r3, #0xa\n    str r0, [sp, #0xc]\n    lsl r3, r3, #0x18\n    ldr r0, [r6]\n    mov r1, #3\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    cmp r4, #8\n    bhs _0208A178\n    mov r4, #0\n    b _0208A17E\n    sub r4, #8\n    lsl r0, r4, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #6\n    blo _0208A144\n    ldr r0, [r6]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0208A194: .word 0x0000F097\n    _0208A198: .word 0x0000F0B7\n    _0208A19C: .word 0x0000F0D7"
    );
    #endif
}

void sub_0208A1A0(void) {
    /* Original at 0x0208A1A0 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r2, _0208A228 ; =0x00000242\n    add r6, r0, #0\n    ldrb r0, [r6, r2]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x19\n    cmp r0, #0x64\n    bhs _0208A1C8\n    add r0, r2, #0\n    add r1, r2, #0\n    add r0, #0xa\n    add r1, #0xe\n    add r2, r2, #6\n    ldr r0, [r6, r0]\n    ldr r1, [r6, r1]\n    ldr r2, [r6, r2]\n    sub r1, r1, r0\n    sub r0, r2, r0\n    b _0208A1CC\n    mov r1, #0\n    add r0, r1, #0\n    mov r2, #0x38\n    bl CalculateHpBarPixelsLength\n    add r4, r0, #0\n    mov r5, #0\n    mov r7, #0x13\n    cmp r4, #8\n    blo _0208A1E0\n    ldr r2, _0208A22C ; =0x0000E03F\n    b _0208A1E8\n    ldr r0, _0208A230 ; =0x0000E037\n    add r0, r4, r0\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    str r7, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r3, r5, #0\n    str r0, [sp, #8]\n    mov r0, #0x11\n    add r3, #9\n    str r0, [sp, #0xc]\n    lsl r3, r3, #0x18\n    ldr r0, [r6]\n    mov r1, #6\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    cmp r4, #8\n    bhs _0208A20C\n    mov r4, #0\n    b _0208A212\n    sub r4, #8\n    lsl r0, r4, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #7\n    blo _0208A1D8\n    ldr r0, [r6]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0208A228: .word 0x00000242\n    _0208A22C: .word 0x0000E03F\n    _0208A230: .word 0x0000E037"
    );
    #endif
}

void sub_0208A234(void) {
    /* Original at 0x0208A234 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x8b\n    add r4, r0, #0\n    lsl r2, r2, #2\n    ldr r2, [r4, r2]\n    strb r1, [r2, #0x14]\n    bl sub_020897C0\n    add r0, r4, #0\n    bl sub_02089C50\n    add r0, r4, #0\n    bl sub_0208C57C\n    add r0, r4, #0\n    bl sub_0208C614\n    add r0, r4, #0\n    bl sub_0208C6B4\n    add r0, r4, #0\n    bl sub_02089F98\n    add r0, r4, #0\n    bl sub_0208E4B4\n    add r0, r4, #0\n    bl sub_0208B448\n    add r0, r4, #0\n    bl sub_0208BA60\n    add r0, r4, #0\n    bl sub_0208B5A8\n    add r0, r4, #0\n    bl sub_0208B89C\n    add r0, r4, #0\n    bl sub_0208B9C8\n    add r0, r4, #0\n    bl sub_0208C2A0\n    add r0, r4, #0\n    bl sub_0208BE70\n    add r0, r4, #0\n    bl sub_0208B48C\n    add r0, r4, #0\n    bl sub_0208B4EC\n    add r0, r4, #0\n    bl sub_0208BCD4\n    add r0, r4, #0\n    bl sub_0208BD38\n    add r0, r4, #0\n    bl sub_0208CBD4\n    add r0, r4, #0\n    bl sub_0208B400\n    add r0, r4, #0\n    bl sub_0208BFD0\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208A2C0(void) {
    /* Original at 0x0208A2C0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0208A2E0\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0208A2DC\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl sub_0208A234\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208A2E0(void) {
    /* Original at 0x0208A2E0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r2, #0x8b\n    lsl r2, r2, #2\n    ldr r2, [r0, r2]\n    ldrb r2, [r2, #0x11]\n    cmp r2, #0\n    beq _0208A2F8\n    cmp r2, #1\n    beq _0208A2FE\n    cmp r2, #2\n    beq _0208A304\n    b _0208A30A\n    bl sub_0208A3F4\n    pop {r3, pc}\n    bl sub_0208A45C\n    pop {r3, pc}\n    bl sub_0208A4B8\n    pop {r3, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, pc}"
    );
    #endif
}

void sub_0208A310(void) {
    /* Original at 0x0208A310 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r2, [r4, r0]\n    add r5, r1, #0\n    ldrb r0, [r2, #0x11]\n    cmp r0, #0\n    beq _0208A32C\n    cmp r0, #1\n    beq _0208A35C\n    cmp r0, #2\n    beq _0208A396\n    b _0208A3C6\n    bl sub_02070D90\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r6, r5, #0\n    ldr r4, [r1]\n    mul r6, r0\n    add r0, r4, r6\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0208A3C6\n    add r0, r4, r6\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0208A3C6\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r2, #0x13]\n    cmp r5, r0\n    bge _0208A3C6\n    ldr r0, [r2]\n    bl Party_GetMonByIndex\n    mov r1, #5\n    mov r2, #0\n    add r5, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0208A3C6\n    add r0, r5, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0208A392\n    add r0, r4, #0\n    bl sub_0208A3CC\n    cmp r0, #1\n    bne _0208A3C6\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl sub_02070D94\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r6, r5, #0\n    ldr r4, [r1]\n    mul r6, r0\n    add r0, r4, r6\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _0208A3C6\n    add r0, r4, r6\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _0208A3C6\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0208A3CC(void) {
    /* Original at 0x0208A3CC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r1, [r0, r1]\n    ldrb r1, [r1, #0x12]\n    cmp r1, #3\n    bne _0208A3DC\n    mov r0, #0\n    bx lr\n    ldr r1, _0208A3F0 ; =0x000007BC\n    ldrsb r0, [r0, r1]\n    cmp r0, #0\n    beq _0208A3EC\n    cmp r0, #3\n    beq _0208A3EC\n    mov r0, #0\n    bx lr\n    mov r0, #1\n    bx lr\n    _0208A3F0: .word 0x000007BC"
    );
    #endif
}

void sub_0208A3F4(void) {
    /* Original at 0x0208A3F4 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    str r1, [sp]\n    ldr r1, [r5, r0]\n    mov r0, #0x14\n    ldrsb r4, [r1, r0]\n    ldr r0, [sp]\n    add r0, r4, r0\n    lsl r0, r0, #0x18\n    asr r4, r0, #0x18\n    bmi _0208A41A\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrb r0, [r0, #0x13]\n    cmp r4, r0\n    blt _0208A420\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_02070D90\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r7, r4, #0\n    ldr r6, [r1]\n    mul r7, r0\n    add r0, r6, r7\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0208A404\n    add r0, r6, r7\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0208A456\n    add r0, r5, #0\n    bl sub_0208A3CC\n    cmp r0, #1\n    bne _0208A404\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0208A45C(void) {
    /* Original at 0x0208A45C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    add r7, r1, #0\n    ldr r1, [r5, r0]\n    mov r0, #0x14\n    ldrsb r4, [r1, r0]\n    add r0, r4, r7\n    lsl r0, r0, #0x18\n    asr r4, r0, #0x18\n    bmi _0208A480\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    ldrb r0, [r1, #0x13]\n    cmp r4, r0\n    blt _0208A486\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r1]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #5\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0208A46C\n    add r0, r6, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0208A4B4\n    add r0, r5, #0\n    bl sub_0208A3CC\n    cmp r0, #1\n    bne _0208A46C\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0208A4B8(void) {
    /* Original at 0x0208A4B8 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    str r1, [sp]\n    ldr r1, [r5, r0]\n    mov r0, #0x14\n    ldrsb r4, [r1, r0]\n    ldr r0, [sp]\n    add r0, r4, r0\n    lsl r0, r0, #0x18\n    asr r4, r0, #0x18\n    bmi _0208A4DE\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldrb r0, [r0, #0x13]\n    cmp r4, r0\n    blt _0208A4E4\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_02070D94\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r7, r4, #0\n    ldr r6, [r1]\n    mul r7, r0\n    add r0, r6, r7\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _0208A4C8\n    add r0, r6, r7\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _0208A51A\n    add r0, r5, #0\n    bl sub_0208A3CC\n    cmp r0, #1\n    bne _0208A4C8\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0208A520(void) {
    /* Original at 0x0208A520 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r4, [r0, r1]\n    ldrb r0, [r4, #0x11]\n    cmp r0, #0\n    beq _0208A538\n    cmp r0, #1\n    beq _0208A546\n    cmp r0, #2\n    beq _0208A550\n    b _0208A55E\n    bl sub_02070D90\n    ldrb r1, [r4, #0x14]\n    ldr r2, [r4]\n    mul r0, r1\n    add r0, r2, r0\n    pop {r4, pc}\n    ldrb r1, [r4, #0x14]\n    ldr r0, [r4]\n    bl Party_GetMonByIndex\n    pop {r4, pc}\n    bl sub_02070D94\n    ldrb r1, [r4, #0x14]\n    ldr r2, [r4]\n    mul r0, r1\n    add r0, r2, r0\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208A564(void) {
    /* Original at 0x0208A564 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0208A630 ; =0x000007BE\n    add r4, r0, #0\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    beq _0208A57A\n    cmp r1, #1\n    beq _0208A5B6\n    cmp r1, #2\n    beq _0208A5E2\n    b _0208A62A\n    ldr r0, _0208A634 ; =0x00000428\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208A634 ; =0x00000428\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    mov r2, #0\n    ldr r0, [r4]\n    mov r1, #5\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r4]\n    mov r1, #5\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    add r0, r4, #0\n    add r0, #0x44\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _0208A630 ; =0x000007BE\n    mov r1, #1\n    strb r1, [r4, r0]\n    b _0208A62A\n    ldr r0, [r4]\n    mov r1, #5\n    bl Bg_GetXpos\n    cmp r0, #0x80\n    ldr r0, [r4]\n    blt _0208A5D6\n    mov r1, #5\n    mov r2, #0\n    mov r3, #0x80\n    bl ScheduleSetBgPosText\n    ldr r0, _0208A630 ; =0x000007BE\n    mov r1, #2\n    strb r1, [r4, r0]\n    b _0208A62A\n    mov r1, #5\n    mov r2, #1\n    mov r3, #0x40\n    bl ScheduleSetBgPosText\n    b _0208A62A\n    bl sub_0208DB1C\n    add r0, r4, #0\n    bl sub_0208A79C\n    mov r0, #0x43\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl thunk_Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl sub_0208C068\n    mov r0, #9\n    lsl r0, r0, #6\n    ldrb r1, [r4, r0]\n    add r0, r0, #1\n    ldrb r0, [r4, r0]\n    cmp r1, r0\n    beq _0208A616\n    ldr r0, _0208A638 ; =0x00000434\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, _0208A634 ; =0x00000428\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208A630 ; =0x000007BE\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0208A630: .word 0x000007BE\n    _0208A634: .word 0x00000428\n    _0208A638: .word 0x00000434"
    );
    #endif
}

void sub_0208A63C(void) {
    /* Original at 0x0208A63C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0208A70C ; =0x000007BE\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _0208A652\n    cmp r0, #1\n    beq _0208A69C\n    cmp r0, #2\n    beq _0208A6C8\n    b _0208A706\n    mov r0, #0x43\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, _0208A710 ; =0x00000434\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, _0208A714 ; =0x0000044C\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl thunk_Sprite_SetDrawFlag\n    mov r0, #0x45\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, _0208A718 ; =0x00000428\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl sub_0208DB58\n    add r0, r4, #0\n    bl sub_0208DAD4\n    ldr r0, _0208A70C ; =0x000007BE\n    mov r1, #1\n    strb r1, [r4, r0]\n    b _0208A706\n    ldr r0, [r4]\n    mov r1, #5\n    bl Bg_GetXpos\n    cmp r0, #0x80\n    ldr r0, [r4]\n    bgt _0208A6BC\n    mov r2, #0\n    mov r1, #5\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    ldr r0, _0208A70C ; =0x000007BE\n    mov r1, #2\n    strb r1, [r4, r0]\n    b _0208A706\n    mov r1, #5\n    mov r2, #2\n    mov r3, #0x40\n    bl ScheduleSetBgPosText\n    b _0208A706\n    mov r0, #0x81\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    add r0, #0x64\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #0\n    add r0, #0x44\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0208A718 ; =0x00000428\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl sub_0208B400\n    ldr r0, _0208A70C ; =0x000007BE\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0208A70C: .word 0x000007BE\n    _0208A710: .word 0x00000434\n    _0208A714: .word 0x0000044C\n    _0208A718: .word 0x00000428"
    );
    #endif
}

void sub_0208A71C(void) {
    /* Original at 0x0208A71C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r5, r0, #0\n    ldr r0, _0208A798 ; =0x000007BD\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1c\n    lsr r4, r0, #0x1c\n    lsl r0, r4, #0x18\n    asr r2, r0, #0x18\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r3, [r5, r0]\n    ldrb r0, [r3, #0x12]\n    cmp r0, #2\n    bne _0208A746\n    ldrh r0, [r3, #0x18]\n    cmp r0, #0\n    beq _0208A742\n    mov r3, #4\n    b _0208A748\n    mov r3, #3\n    b _0208A748\n    mov r3, #3\n    mov r6, #0x99\n    mov r0, #0\n    lsl r6, r6, #2\n    add r2, r2, r1\n    lsl r2, r2, #0x18\n    asr r2, r2, #0x18\n    bpl _0208A75A\n    add r2, r3, #0\n    b _0208A760\n    cmp r2, r3\n    ble _0208A760\n    add r2, r0, #0\n    cmp r2, #4\n    beq _0208A772\n    lsl r7, r2, #1\n    add r7, r5, r7\n    ldrh r7, [r7, r6]\n    cmp r7, #0\n    bne _0208A772\n    cmp r2, r4\n    bne _0208A74E\n    cmp r2, r4\n    beq _0208A790\n    ldr r3, _0208A798 ; =0x000007BD\n    mov r1, #0xf\n    ldrb r0, [r5, r3]\n    bic r0, r1\n    lsl r1, r2, #0x18\n    lsr r2, r1, #0x18\n    mov r1, #0xf\n    and r1, r2\n    orr r0, r1\n    strb r0, [r5, r3]\n    mov r0, #1\n    pop {r4, r5, r6, r7}\n    bx lr\n    mov r0, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    nop\n    _0208A798: .word 0x000007BD"
    );
    #endif
}

void sub_0208A79C(void) {
    /* Original at 0x0208A79C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0208BBDC\n    ldr r0, _0208A7F4 ; =0x000007BD\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x1c\n    lsr r1, r0, #0x1c\n    cmp r1, #4\n    bne _0208A7D0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrh r1, [r0, #0x18]\n    cmp r1, #0\n    beq _0208A7C4\n    add r0, r4, #0\n    bl sub_0208A7F8\n    pop {r4, pc}\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl sub_0208A7F8\n    pop {r4, pc}\n    cmp r1, #5\n    bne _0208A7E0\n    mov r1, #0\n    add r0, r4, #0\n    mvn r1, r1\n    bl sub_0208A7F8\n    pop {r4, pc}\n    lsl r1, r1, #1\n    add r2, r4, r1\n    mov r1, #0x99\n    lsl r1, r1, #2\n    ldrh r1, [r2, r1]\n    add r0, r4, #0\n    bl sub_0208A7F8\n    pop {r4, pc}\n    nop\n    _0208A7F4: .word 0x000007BD"
    );
    #endif
}

void sub_0208A7F8(void) {
    /* Original at 0x0208A7F8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    add r4, r1, #0\n    mvn r2, r2\n    add r5, r0, #0\n    cmp r4, r2\n    bne _0208A816\n    bl sub_0208DAD4\n    ldr r0, _0208A830 ; =0x0000044C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    bl sub_0208D9A0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0208BB8C\n    ldr r0, _0208A830 ; =0x0000044C\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl thunk_Sprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    nop\n    _0208A830: .word 0x0000044C"
    );
    #endif
}

void sub_0208A834(void) {
    /* Original at 0x0208A834 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    bl sub_0208A520\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    ldrb r1, [r1, #0x11]\n    cmp r1, #2\n    ldr r1, _0208A8F0 ; =0x000007BD\n    bne _0208A85A\n    ldrb r2, [r4, r1]\n    lsl r1, r2, #0x1c\n    lsl r2, r2, #0x18\n    lsr r1, r1, #0x1c\n    lsr r2, r2, #0x1c\n    bl BoxMonSwapMoves\n    b _0208A868\n    ldrb r2, [r4, r1]\n    lsl r1, r2, #0x1c\n    lsl r2, r2, #0x18\n    lsr r1, r1, #0x1c\n    lsr r2, r2, #0x1c\n    bl MonSwapMoves\n    ldr r0, _0208A8F0 ; =0x000007BD\n    mov r1, #0x99\n    ldrb r6, [r4, r0]\n    lsl r1, r1, #2\n    add r5, r4, r1\n    lsl r2, r6, #0x1c\n    lsl r6, r6, #0x18\n    lsr r6, r6, #0x1c\n    lsl r6, r6, #1\n    lsr r3, r2, #0x1b\n    add r6, r4, r6\n    ldrh r2, [r5, r3]\n    ldrh r6, [r6, r1]\n    strh r6, [r5, r3]\n    ldrb r3, [r4, r0]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x1c\n    lsl r3, r3, #1\n    add r3, r4, r3\n    strh r2, [r3, r1]\n    add r2, r1, #0\n    add r2, #8\n    ldrb r6, [r4, r0]\n    add r5, r4, r2\n    lsl r2, r6, #0x1c\n    lsl r6, r6, #0x18\n    lsr r6, r6, #0x1c\n    add r7, r4, r6\n    add r6, r1, #0\n    lsr r3, r2, #0x1c\n    add r6, #8\n    ldrb r2, [r5, r3]\n    ldrb r6, [r7, r6]\n    strb r6, [r5, r3]\n    ldrb r3, [r4, r0]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x1c\n    add r5, r4, r3\n    add r3, r1, #0\n    add r3, #8\n    strb r2, [r5, r3]\n    add r2, r1, #0\n    add r2, #0xc\n    ldrb r6, [r4, r0]\n    add r5, r4, r2\n    lsl r2, r6, #0x1c\n    lsl r6, r6, #0x18\n    lsr r6, r6, #0x1c\n    add r7, r4, r6\n    add r6, r1, #0\n    lsr r3, r2, #0x1c\n    add r6, #0xc\n    ldrb r2, [r5, r3]\n    ldrb r6, [r7, r6]\n    strb r6, [r5, r3]\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    add r3, r4, r0\n    add r0, r1, #0\n    add r0, #0xc\n    strb r2, [r3, r0]\n    sub r1, #0x38\n    ldr r0, [r4, r1]\n    mov r2, #1\n    str r2, [r0, #0x38]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0208A8F0: .word 0x000007BD"
    );
    #endif
}

void sub_0208A8F4(void) {
    /* Original at 0x0208A8F4 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r2, #0\n    ldr r0, [r4]\n    mov r1, #2\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    add r0, r4, #0\n    bl sub_0208DB1C\n    add r0, r4, #0\n    bl sub_0208A79C\n    mov r0, #0x43\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl thunk_Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl sub_0208C068\n    mov r0, #9\n    lsl r0, r0, #6\n    ldrb r1, [r4, r0]\n    add r0, r0, #1\n    ldrb r0, [r4, r0]\n    cmp r1, r0\n    beq _0208A93A\n    ldr r0, _0208A948 ; =0x00000434\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, _0208A94C ; =0x00000428\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}\n    nop\n    _0208A948: .word 0x00000434\n    _0208A94C: .word 0x00000428"
    );
    #endif
}

void sub_0208A950(void) {
    /* Original at 0x0208A950 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0208DB1C\n    add r0, r4, #0\n    bl sub_0208A79C\n    add r0, r4, #0\n    bl sub_0208C068\n    ldr r0, _0208A9BC ; =0x000007BC\n    ldrsb r0, [r4, r0]\n    cmp r0, #1\n    bne _0208A9A4\n    add r0, r4, #0\n    bl sub_0208C208\n    mov r0, #0x43\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl thunk_Sprite_SetDrawFlag\n    mov r0, #9\n    lsl r0, r0, #6\n    ldrb r1, [r4, r0]\n    add r0, r0, #1\n    ldrb r0, [r4, r0]\n    cmp r1, r0\n    beq _0208A996\n    ldr r0, _0208A9C0 ; =0x00000434\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, [r4]\n    mov r1, #2\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    pop {r4, pc}\n    add r0, r4, #0\n    bl sub_0208C0E8\n    mov r2, #3\n    add r3, r2, #0\n    ldr r0, [r4]\n    mov r1, #2\n    add r3, #0xfd\n    bl ScheduleSetBgPosText\n    pop {r4, pc}\n    nop\n    _0208A9BC: .word 0x000007BC\n    _0208A9C0: .word 0x00000434"
    );
    #endif
}

void sub_0208A9C4(void) {
    /* Original at 0x0208A9C4 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0208AA8C ; =0x000007BE\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _0208A9DA\n    cmp r0, #1\n    beq _0208AA32\n    cmp r0, #2\n    beq _0208AA5E\n    b _0208AA86\n    mov r2, #0\n    ldr r0, [r4]\n    mov r1, #5\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r4]\n    mov r1, #5\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    ldr r0, _0208AA90 ; =0x00000428\n    mov r1, #3\n    ldr r0, [r4, r0]\n    bl Sprite_SetPriority\n    ldr r0, _0208AA90 ; =0x00000428\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl thunk_Sprite_SetPaletteOverride\n    mov r0, #0x75\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x89\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _0208AA94 ; =0x000007C5\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r1, #1\n    sub r0, r0, #7\n    strb r1, [r4, r0]\n    b _0208AA86\n    ldr r0, [r4]\n    mov r1, #5\n    bl Bg_GetYpos\n    cmp r0, #0x48\n    ldr r0, [r4]\n    blt _0208AA52\n    mov r1, #5\n    mov r2, #3\n    mov r3, #0x48\n    bl ScheduleSetBgPosText\n    ldr r0, _0208AA8C ; =0x000007BE\n    mov r1, #2\n    strb r1, [r4, r0]\n    b _0208AA86\n    mov r1, #5\n    mov r2, #4\n    mov r3, #0x24\n    bl ScheduleSetBgPosText\n    b _0208AA86\n    mov r0, #5\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208AA98 ; =0x0000050C\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0208AB58\n    ldr r0, _0208AA8C ; =0x000007BE\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0208AA8C: .word 0x000007BE\n    _0208AA90: .word 0x00000428\n    _0208AA94: .word 0x000007C5\n    _0208AA98: .word 0x0000050C"
    );
    #endif
}

void sub_0208AA9C(void) {
    /* Original at 0x0208AA9C */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0208AB50 ; =0x000007BE\n    add r4, r0, #0\n    ldrb r0, [r4, r1]\n    cmp r0, #0\n    beq _0208AAB2\n    cmp r0, #1\n    beq _0208AAE2\n    cmp r0, #2\n    beq _0208AB0E\n    b _0208AB4A\n    mov r2, #0\n    add r0, r1, #6\n    strb r2, [r4, r0]\n    add r0, r1, #7\n    strb r2, [r4, r0]\n    mov r0, #0x89\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r0, #0x10\n    bl ClearWindowTilemapAndScheduleTransfer\n    mov r0, #0x89\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r0, #0x20\n    bl ClearWindowTilemapAndScheduleTransfer\n    add r0, r4, #0\n    bl sub_0208C2A0\n    ldr r0, _0208AB50 ; =0x000007BE\n    mov r1, #1\n    strb r1, [r4, r0]\n    b _0208AB4A\n    ldr r0, [r4]\n    mov r1, #5\n    bl Bg_GetYpos\n    cmp r0, #0\n    ldr r0, [r4]\n    bgt _0208AB02\n    mov r1, #5\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    ldr r0, _0208AB50 ; =0x000007BE\n    mov r1, #2\n    strb r1, [r4, r0]\n    b _0208AB4A\n    mov r1, #5\n    add r2, r1, #0\n    mov r3, #0x24\n    bl ScheduleSetBgPosText\n    b _0208AB4A\n    mov r0, #0x75\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x5d\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    mov r0, #0x89\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0208AB54 ; =0x00000428\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetPriority\n    ldr r0, _0208AB54 ; =0x00000428\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl thunk_Sprite_SetPaletteOverride\n    ldr r0, _0208AB50 ; =0x000007BE\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0208AB50: .word 0x000007BE\n    _0208AB54: .word 0x00000428"
    );
    #endif
}

void sub_0208AB58(void) {
    /* Original at 0x0208AB58 */
    /* Requires manual decompilation - 175 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0208ACC4 ; =0x000007C4\n    add r4, r1, #0\n    add r1, r0, #1\n    ldrb r7, [r5, r0]\n    ldrb r6, [r5, r1]\n    cmp r4, #1\n    bne _0208AB80\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    cmp r1, #2\n    beq _0208AB94\n    ldr r0, _0208ACC4 ; =0x000007C4\n    ldrb r1, [r5, r0]\n    add r1, r1, #1\n    strb r1, [r5, r0]\n    b _0208AC34\n    mov r2, #0\n    mvn r2, r2\n    cmp r4, r2\n    bne _0208ABA0\n    add r0, r7, #0\n    mov r1, #3\n    bl _s32_div_f\n    cmp r1, #0\n    bne _0208AB96\n    b _0208ACC0\n    ldr r0, _0208ACC4 ; =0x000007C4\n    ldrb r1, [r5, r0]\n    sub r1, r1, #1\n    strb r1, [r5, r0]\n    b _0208AC34\n    cmp r4, #3\n    bne _0208ABD4\n    cmp r7, #6\n    blo _0208ABCE\n    add r2, r6, #1\n    lsl r1, r2, #3\n    add r1, r2, r1\n    add r2, r0, #2\n    ldrb r2, [r5, r2]\n    cmp r1, r2\n    bge _0208AC34\n    add r1, r0, #1\n    ldrb r1, [r5, r1]\n    add r2, r1, #1\n    add r1, r0, #1\n    strb r2, [r5, r1]\n    ldrb r0, [r5, r0]\n    mov r1, #3\n    bl _s32_div_f\n    ldr r0, _0208ACC4 ; =0x000007C4\n    strb r1, [r5, r0]\n    b _0208AC34\n    add r1, r7, #3\n    strb r1, [r5, r0]\n    b _0208AC34\n    sub r1, r2, #2\n    cmp r4, r1\n    bne _0208AC02\n    cmp r7, #2\n    bhi _0208ABFC\n    cmp r6, #0\n    beq _0208AC34\n    add r1, r0, #1\n    ldrb r1, [r5, r1]\n    sub r2, r1, #1\n    add r1, r0, #1\n    strb r2, [r5, r1]\n    ldrb r0, [r5, r0]\n    mov r1, #3\n    bl _s32_div_f\n    ldr r0, _0208ACC4 ; =0x000007C4\n    add r1, r1, #6\n    strb r1, [r5, r0]\n    b _0208AC34\n    sub r1, r7, #3\n    strb r1, [r5, r0]\n    b _0208AC34\n    cmp r4, #9\n    bne _0208AC20\n    add r2, r6, #1\n    lsl r1, r2, #3\n    add r1, r2, r1\n    add r2, r0, #2\n    ldrb r2, [r5, r2]\n    cmp r1, r2\n    bge _0208AC34\n    add r1, r0, #1\n    ldrb r1, [r5, r1]\n    add r0, r0, #1\n    add r1, r1, #1\n    strb r1, [r5, r0]\n    b _0208AC34\n    sub r2, #8\n    cmp r4, r2\n    bne _0208AC34\n    cmp r6, #0\n    beq _0208AC34\n    add r1, r0, #1\n    ldrb r1, [r5, r1]\n    add r0, r0, #1\n    sub r1, r1, #1\n    strb r1, [r5, r0]\n    ldr r0, _0208ACC4 ; =0x000007C4\n    ldrb r1, [r5, r0]\n    cmp r7, r1\n    bne _0208AC44\n    add r0, r0, #1\n    ldrb r0, [r5, r0]\n    cmp r6, r0\n    beq _0208AC56\n    cmp r4, #9\n    beq _0208AC56\n    mov r0, #8\n    mvn r0, r0\n    cmp r4, r0\n    beq _0208AC56\n    ldr r0, _0208ACC8 ; =0x000005DC\n    bl PlaySE\n    ldr r1, _0208ACC4 ; =0x000007C4\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    bl sub_0208ACDC\n    ldr r1, _0208ACCC ; =0x000007C7\n    strb r0, [r5, r1]\n    add r0, r5, #0\n    bl sub_0208C380\n    ldr r0, _0208ACD0 ; =0x000007C5\n    ldrb r0, [r5, r0]\n    cmp r6, r0\n    beq _0208AC78\n    add r0, r5, #0\n    bl sub_0208C320\n    add r0, r5, #0\n    bl sub_0208D7C4\n    ldr r0, _0208ACD0 ; =0x000007C5\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ldr r0, _0208ACD4 ; =0x00000504\n    beq _0208AC92\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _0208AC9A\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _0208ACD0 ; =0x000007C5\n    ldrb r1, [r5, r0]\n    add r0, r0, #1\n    ldrb r0, [r5, r0]\n    add r2, r1, #1\n    lsl r1, r2, #3\n    add r1, r2, r1\n    cmp r1, r0\n    ldr r0, _0208ACD8 ; =0x00000508\n    bge _0208ACB8\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0208ACC4: .word 0x000007C4\n    _0208ACC8: .word 0x000005DC\n    _0208ACCC: .word 0x000007C7\n    _0208ACD0: .word 0x000007C5\n    _0208ACD4: .word 0x00000504\n    _0208ACD8: .word 0x00000508"
    );
    #endif
}

void sub_0208ACDC(void) {
    /* Original at 0x0208ACDC */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    ldr r2, _0208AD30 ; =0x000007C5\n    mov r6, #0\n    ldrb r3, [r0, r2]\n    add r4, r6, #0\n    lsl r2, r3, #3\n    add r2, r3, r2\n    add r1, r1, r2\n    lsl r1, r1, #0x18\n    lsr r5, r1, #0x18\n    mov r1, #0xa1\n    mov r2, #1\n    lsl r1, r1, #2\n    mov r3, #0x1f\n    add r7, r4, #0\n    and r7, r3\n    add r3, r2, #0\n    lsl r3, r7\n    lsr r7, r4, #5\n    lsl r7, r7, #2\n    add r7, r0, r7\n    ldr r7, [r7, r1]\n    tst r3, r7\n    beq _0208AD1E\n    cmp r5, r6\n    bne _0208AD18\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    pop {r4, r5, r6, r7}\n    bx lr\n    add r3, r6, #1\n    lsl r3, r3, #0x18\n    lsr r6, r3, #0x18\n    add r3, r4, #1\n    lsl r3, r3, #0x10\n    lsr r4, r3, #0x10\n    cmp r4, #0x50\n    blo _0208ACF6\n    mov r0, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    nop\n    _0208AD30: .word 0x000007C5"
    );
    #endif
}

void sub_0208AD34(void) {
    /* Original at 0x0208AD34 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl PlayerProfile_GetNamePtr\n    str r0, [r5, #8]\n    add r0, r4, #0\n    bl PlayerProfile_GetTrainerID\n    str r0, [r5, #0xc]\n    add r0, r4, #0\n    bl PlayerProfile_GetTrainerGender\n    strb r0, [r5, #0x10]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

u8 sub_0208AD54(void) {
    return 0x40;
}

u8 sub_0208AD58(void) {
    return 0x41;
}

u8 sub_0208AD5C(void) {
    return 0x3f;
}

u8 sub_0208AD60(void) {
    return 0x3e;
}

void Pokemon_GetStatusIconId(void) {
    /* Original at 0x0208AD64 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #MON_DATA_STATUS\n    mov r2, #0\n    bl GetMonData\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #MON_DATA_HP\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _0208AD84\n    mov r0, #6\n    pop {r3, r4, r5, pc}\n    mov r0, #MON_STATUS_PSN_MASK|MON_STATUS_TOX_MASK\n    tst r0, r4\n    beq _0208AD8E\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    mov r0, #MON_STATUS_SLP_MASK\n    add r1, r4, #0\n    tst r1, r0\n    beq _0208AD9A\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    mov r1, #MON_STATUS_BRN_MASK\n    tst r1, r4\n    beq _0208ADA4\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    mov r1, #MON_STATUS_FRZ_MASK\n    tst r1, r4\n    beq _0208ADAE\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    mov r1, #MON_STATUS_PRZ_MASK\n    tst r1, r4\n    beq _0208ADB6\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0208ADB8(void) {
    MenuInputStateMgr_SetState(0x8b);
}

void sub_0208ADCC(void) {
    /* Original at 0x0208ADCC */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0208ADD4 ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, _0208ADD8 ; =_021038D4\n    bx r3\n    nop\n    _0208ADD4: .word TouchscreenHitbox_FindRectAtTouchNew\n    _0208ADD8: .word _021038D4"
    );
    #endif
}

void sub_0208ADDC(void) {
    /* Original at 0x0208ADDC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0208AE00 ; =_021038D4\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0208ADFE\n    ldr r0, _0208AE04 ; =_021038AC\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #1\n    bne _0208ADFA\n    mov r0, #4\n    pop {r3, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, pc}\n    _0208AE00: .word _021038D4\n    _0208AE04: .word _021038AC"
    );
    #endif
}

void sub_0208AE08(void) {
    /* Original at 0x0208AE08 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0208AE3C ; =_021038D4\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0208AE38\n    ldr r0, _0208AE40 ; =_021038B0\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #1\n    bne _0208AE26\n    mov r0, #4\n    pop {r3, pc}\n    ldr r0, _0208AE44 ; =_021038AC\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #1\n    bne _0208AE34\n    mov r0, #5\n    pop {r3, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, pc}\n    nop\n    _0208AE3C: .word _021038D4\n    _0208AE40: .word _021038B0\n    _0208AE44: .word _021038AC"
    );
    #endif
}

void sub_0208AE48(void) {
    /* Original at 0x0208AE48 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0208AE7C ; =_021038D4\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _0208AE78\n    ldr r0, _0208AE80 ; =_021038B4\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #1\n    bne _0208AE66\n    mov r0, #4\n    pop {r3, pc}\n    ldr r0, _0208AE84 ; =_021038AC\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #1\n    bne _0208AE74\n    mov r0, #5\n    pop {r3, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, pc}\n    nop\n    _0208AE7C: .word _021038D4\n    _0208AE80: .word _021038B4\n    _0208AE84: .word _021038AC"
    );
    #endif
}

void sub_0208AE88(void) {
    /* Original at 0x0208AE88 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0208AEAC ; =_021038B4\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #1\n    bne _0208AE98\n    mov r0, #0\n    pop {r3, pc}\n    ldr r0, _0208AEB0 ; =_021038AC\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #1\n    bne _0208AEA6\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, pc}\n    _0208AEAC: .word _021038B4\n    _0208AEB0: .word _021038AC"
    );
    #endif
}

void sub_0208AEB4(void) {
    /* Original at 0x0208AEB4 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0208AEBC ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, _0208AEC0 ; =_021038B8\n    bx r3\n    nop\n    _0208AEBC: .word TouchscreenHitbox_FindRectAtTouchNew\n    _0208AEC0: .word _021038B8"
    );
    #endif
}

void sub_0208AEC4(void) {
    /* Original at 0x0208AEC4 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0208AECC ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, _0208AED0 ; =_021039E8\n    bx r3\n    nop\n    _0208AECC: .word TouchscreenHitbox_FindRectAtTouchNew\n    _0208AED0: .word _021039E8"
    );
    #endif
}

void sub_0208AED4(void) {
    /* Original at 0x0208AED4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0208AF00 ; =0x00000428\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0208AF04 ; =0x0000042C\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl sub_0208BCB4\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_0208AF08\n    mov r0, #9\n    pop {r4, pc}\n    nop\n    _0208AF00: .word 0x00000428\n    _0208AF04: .word 0x0000042C"
    );
    #endif
}

void sub_0208AF08(void) {
    /* Original at 0x0208AF08 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #1\n    bne _0208AF34\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    mov r1, #0\n    ldr r0, [r4, r0]\n    add r2, r1, #0\n    mov r3, #0x12\n    bl sub_020196E8\n    ldr r0, _0208AF6C ; =0x00000448\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_0208DC68\n    pop {r4, pc}\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    ldrh r1, [r1, #0x18]\n    cmp r1, #0\n    beq _0208AF5C\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    mov r2, #0\n    mov r3, #0x12\n    bl sub_020196E8\n    ldr r0, _0208AF6C ; =0x00000448\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    b _0208AF60\n    bl sub_0208AF70\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0208DC68\n    pop {r4, pc}\n    nop\n    _0208AF6C: .word 0x00000448"
    );
    #endif
}

void sub_0208AF70(void) {
    /* Original at 0x0208AF70 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x12\n    str r0, [sp]\n    mov r0, #0x11\n    str r0, [sp, #4]\n    mov r1, #6\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, [r4]\n    ldr r2, _0208AF9C ; =0x00003006\n    mov r3, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _0208AF9C: .word 0x00003006"
    );
    #endif
}

void sub_0208AFA0(void) {
    /* Original at 0x0208AFA0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x8b\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldrb r0, [r0, #0x12]\n    cmp r0, #1\n    beq _0208AFE6\n    cmp r1, #1\n    bne _0208AFCE\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #2\n    mov r2, #1\n    mov r3, #0x10\n    bl sub_020196E8\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_0208DD20\n    pop {r4, pc}\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #3\n    mov r2, #1\n    mov r3, #0x10\n    bl sub_020196E8\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0208DD20\n    pop {r4, pc}"
    );
    #endif
}

void sub_0208AFE8(void) {
    /* Original at 0x0208AFE8 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r5, _0208B040 ; =0x000007C8\n    add r4, r0, #0\n    strb r2, [r4, r5]\n    add r0, r5, #1\n    strb r3, [r4, r0]\n    add r2, sp, #0\n    ldrb r3, [r2, #0x10]\n    add r0, r5, #2\n    strb r3, [r4, r0]\n    ldrb r3, [r2, #0x14]\n    add r0, r5, #3\n    strb r3, [r4, r0]\n    add r0, r5, #4\n    ldrb r3, [r4, r0]\n    mov r0, #0xf\n    ldrb r6, [r2, #0x18]\n    bic r3, r0\n    mov r0, #0xf\n    and r6, r0\n    orr r6, r3\n    add r3, r5, #4\n    strb r6, [r4, r3]\n    ldrb r2, [r2, #0x1c]\n    ldrb r3, [r4, r3]\n    mov r6, #0xf0\n    lsl r2, r2, #0x1c\n    bic r3, r6\n    lsr r2, r2, #0x18\n    orr r3, r2\n    add r2, r5, #4\n    strb r3, [r4, r2]\n    add r2, r5, #5\n    strb r1, [r4, r2]\n    mov r2, #0\n    add r1, r5, #6\n    strb r2, [r4, r1]\n    add r1, sp, #0x20\n    ldrb r2, [r1]\n    add r1, r5, #7\n    strb r2, [r4, r1]\n    pop {r3, r4, r5, r6}\n    bx lr\n    nop\n    _0208B040: .word 0x000007C8"
    );
    #endif
}

void sub_0208B044(void) {
    /* Original at 0x0208B044 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    mov r2, #9\n    str r2, [sp]\n    mov r2, #4\n    str r2, [sp, #4]\n    mov r2, #1\n    str r2, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #6\n    mov r2, #0x17\n    mov r3, #0x14\n    bl sub_0208AFE8\n    add sp, #0x14\n    pop {pc}"
    );
    #endif
}

void sub_0208B068(void) {
    sub_0208AFE8(6, 0xf, 1, 4, 0, 0x13);
}

void sub_0208B08C(void) {
    sub_0208AFE8(6, 0xa, 1, 2, 0, 0x11);
}

void sub_0208B0B0(void) {
    /* Original at 0x0208B0B0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    cmp r1, #0\n    bne _0208B0D6\n    mov r1, #6\n    str r1, [sp]\n    mov r3, #3\n    str r3, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r3, #0\n    str r3, [sp, #0xc]\n    str r2, [sp, #0x10]\n    mov r2, #0x18\n    mov r3, #5\n    bl sub_0208AFE8\n    add sp, #0x14\n    pop {pc}\n    mov r1, #6\n    str r1, [sp]\n    mov r3, #3\n    str r3, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r3, #0\n    str r3, [sp, #0xc]\n    str r2, [sp, #0x10]\n    mov r2, #0x18\n    mov r3, #0xd\n    bl sub_0208AFE8\n    add sp, #0x14\n    pop {pc}"
    );
    #endif
}

void sub_0208B0F4(void) {
    /* Original at 0x0208B0F4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    mov r2, #6\n    str r2, [sp]\n    mov r2, #4\n    str r2, [sp, #4]\n    mov r2, #1\n    str r2, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    str r1, [sp, #0x10]\n    mov r1, #5\n    mov r2, #0x1a\n    mov r3, #0x1d\n    bl sub_0208AFE8\n    add sp, #0x14\n    pop {pc}"
    );
    #endif
}

void sub_0208B118(void) {
    /* Original at 0x0208B118 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #0\n    mvn r1, r1\n    add r4, r0, #0\n    bl sub_0208A2E0\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0208B140\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    mov r1, #5\n    ldr r0, [r4, r0]\n    mov r2, #0x18\n    add r3, r1, #0\n    bl sub_020196E8\n    b _0208B162\n    mov r0, #5\n    str r0, [sp]\n    mov r1, #6\n    str r1, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4]\n    mov r2, #1\n    mov r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_0208A2E0\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0208B186\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #6\n    mov r2, #0x18\n    mov r3, #0xd\n    bl sub_020196E8\n    add sp, #0x10\n    pop {r4, pc}\n    mov r0, #0xd\n    str r0, [sp]\n    mov r1, #6\n    str r1, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4]\n    mov r2, #1\n    mov r3, #0x18\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}
