/* Decompiled from asm/unk_02088288.s */
#include "global.h"

u8 sub_02088288(void) {
}



void sub_0208828C(void) {
}



void PokemonSummary_Init(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r1, #1
    // lsl r1, r1, #0x1a
    // ldr r0, [r1]
    // ldr r2, _02088408 ; =0xFFFFE0FF
    // and r0, r2
    // str r0, [r1]
    // ldr r0, _0208840C ; =0x04001000
    // ldr r3, [r0]
    // and r2, r3
    // str r2, [r0]
    // ldr r3, [r1]
    // ldr r2, _02088410 ; =0xFFFF1FFF
    // and r3, r2
    // str r3, [r1]
    // ldr r3, [r0]
    // add r1, #0x50
    // and r2, r3
    // str r2, [r0]
    // mov r2, #0
    // strh r2, [r1]
    // add r0, #0x50
    // strh r2, [r0]
    // mov r0, #4
    // mov r1, #8
    // bl SetKeyRepeatTimers
    // mov r2, #0x45
    // mov r0, #3
    // mov r1, #0x13
    // lsl r2, r2, #0xc
    // bl Heap_Create
    // mov r0, #0x27
    // mov r1, #0x13
    // bl NARC_New
    // add r7, r0, #0
    // mov r0, #0xa2
    // mov r1, #0x13
    // bl NARC_New
    // add r5, r0, #0
    // ldr r1, _02088414 ; =0x000007D8
    // add r0, r6, #0
    // mov r2, #0x13
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _02088414 ; =0x000007D8
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // add r0, r6, #0
    // bl OverlayManager_GetArgs
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x13
    // bl BgConfig_Alloc
    // str r0, [r4]
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // str r1, [r0, #0x38]
    // mov r1, #1
    // mov r0, #0x13
    // add r2, r1, #0
    // bl sub_02016EDC
    // mov r1, #0xb3
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0xb4
    // mov r1, #0x13
    // bl NARC_New
    // ldr r1, _02088418 ; =0x000007B8
    // str r0, [r4, r1]
    // mov r0, #0
    // mov r1, #0x13
    // bl FontID_SetAccessDirect
    // bl sub_020210BC
    // mov r0, #4
    // bl sub_02021148
    // bl sub_02088610
    // ldr r0, [r4]
    // bl sub_02088630
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // bl sub_020887C4
    // bl sub_0208887C
    // add r0, r4, #0
    // bl sub_0208DE40
    // mov r0, #4
    // mov r1, #0x13
    // bl FontID_Alloc
    // add r0, r4, #0
    // bl sub_02088894
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_020889D0
    // add r0, r4, #0
    // bl sub_020897C0
    // add r0, r4, #0
    // bl sub_0208B1AC
    // add r0, r4, #0
    // bl sub_0208B2C0
    // add r0, r4, #0
    // bl sub_0208E3AC
    // add r0, r4, #0
    // bl sub_0208B48C
    // add r0, r4, #0
    // bl sub_0208B4EC
    // add r0, r4, #0
    // bl sub_0208BECC
    // add r0, r4, #0
    // bl sub_0208C3E4
    // add r0, r4, #0
    // bl sub_02089CB4
    // add r0, r4, #0
    // bl sub_0208DF2C
    // ldr r0, _0208841C ; =sub_020885DC
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // ldr r2, _02088420 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // bl GfGfx_BothDispOn
    // mov r1, #0
    // mov r0, #0x3d
    // add r2, r1, #0
    // bl Sound_SetSceneAndPlayBGM
    // bl sub_0203A964
    // add r0, r5, #0
    // bl NARC_Delete
    // add r0, r7, #0
    // bl NARC_Delete
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _02088408: .word 0xFFFFE0FF
    // _0208840C: .word 0x04001000
    // _02088410: .word 0xFFFF1FFF
    // _02088414: .word 0x000007D8
    // _02088418: .word 0x000007B8
    // _0208841C: .word sub_020885DC
    // _02088420: .word 0x04000304
    // TODO: decompile
}



void PokemonSummary_Main(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // bl OverlayManager_GetData
    // ldr r1, [r4]
    // add r5, r0, #0
    // cmp r1, #0x16
    // bls _02088436
    // b _0208854A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02088442: ; jump table
    // mov r0, #0
    // mov r1, #0x13
    // bl sub_020880CC
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #6
    // mov r2, #0
    // bl Pokepic_SetAttr
    // mov r0, #1
    // str r0, [r4]
    // b _0208854A
    // bl sub_02088B08
    // str r0, [r4]
    // b _0208854A
    // bl sub_02088B40
    // str r0, [r4]
    // b _0208854A
    // bl sub_02088D18
    // str r0, [r4]
    // b _0208854A
    // bl sub_02088D34
    // str r0, [r4]
    // b _0208854A
    // bl sub_02088D48
    // str r0, [r4]
    // b _0208854A
    // bl sub_02088E68
    // str r0, [r4]
    // b _0208854A
    // bl sub_02088E98
    // str r0, [r4]
    // b _0208854A
    // bl sub_02089028
    // str r0, [r4]
    // b _0208854A
    // bl sub_02089208
    // str r0, [r4]
    // b _0208854A
    // bl sub_020892F4
    // str r0, [r4]
    // b _0208854A
    // bl sub_02089308
    // str r0, [r4]
    // b _0208854A
    // bl sub_0208931C
    // str r0, [r4]
    // b _0208854A
    // bl sub_0208942C
    // str r0, [r4]
    // b _0208854A
    // bl sub_02089454
    // str r0, [r4]
    // b _0208854A
    // bl sub_02089698
    // str r0, [r4]
    // b _0208854A
    // bl sub_02089478
    // str r0, [r4]
    // b _0208854A
    // bl sub_02089608
    // str r0, [r4]
    // b _0208854A
    // bl sub_02089658
    // str r0, [r4]
    // b _0208854A
    // bl sub_02089670
    // str r0, [r4]
    // b _0208854A
    // bl sub_02089680
    // cmp r0, #1
    // bne _0208854A
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0x2d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #6
    // mov r2, #0
    // bl Pokepic_SetAttr
    // mov r0, #2
    // str r0, [r4]
    // b _0208854A
    // bl sub_02089794
    // str r0, [r4]
    // add r0, r5, #0
    // bl sub_0208B278
    // add r0, r5, #0
    // bl sub_0208C3C0
    // mov r0, #1
    // lsl r0, r0, #0xa
    // ldr r0, [r5, r0]
    // bl SpriteSystem_DrawSprites
    // add r0, r5, #0
    // bl sub_0208DEDC
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void PokemonSummary_Exit(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // add r0, r4, #0
    // bl sub_0208DEFC
    // add r0, r4, #0
    // bl sub_0208B258
    // add r0, r4, #0
    // bl sub_0208C560
    // ldr r0, [r4]
    // bl sub_0208877C
    // bl sub_02021238
    // bl GF_DestroyVramTransferManager
    // add r0, r4, #0
    // bl sub_02088AF8
    // add r0, r4, #0
    // bl sub_0208895C
    // mov r0, #4
    // bl FontID_Release
    // ldr r0, _020885D4 ; =0x000007B8
    // ldr r0, [r4, r0]
    // bl NARC_Delete
    // mov r0, #0
    // bl FontID_SetAccessLazy
    // ldr r0, _020885D8 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // mov r0, #0x13
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _020885D4: .word 0x000007B8
    // _020885D8: .word 0x04000050
    // TODO: decompile
}



void sub_020885DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // bl DoScheduledBgGpuUpdates
    // mov r0, #0x2a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl PokepicManager_HandleLoadImgAndOrPltt
    // bl GF_RunVramTransferTasks
    // bl SpriteSystem_TransferOam
    // ldr r3, _02088608 ; =OS_IRQTable
    // ldr r1, _0208860C ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // nop
    // _02088608: .word OS_IRQTable
    // _0208860C: .word 0x00003FF8
    // TODO: decompile
}



void sub_02088610(void) {
}



void sub_02088630(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0xb8
    // ldr r5, _02088760 ; =_021038C4
    // add r3, sp, #0xa8
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _02088764 ; =_021038E8
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02088768 ; =_02103904
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #2
    // add r3, r2, #0
    // bl ScheduleSetBgPosText
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #3
    // mov r3, #0
    // bl ScheduleSetBgPosText
    // ldr r5, _0208876C ; =_02103920
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _02088770 ; =_0210393C
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r3]
    // add r0, r4, #0
    // mov r1, #4
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02088774 ; =_02103958
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02088778 ; =_02103974
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #6
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x13
    // bl BG_ClearCharDataRange
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x13
    // bl BG_ClearCharDataRange
    // add sp, #0xb8
    // pop {r3, r4, r5, pc}
    // nop
    // _02088760: .word _021038C4
    // _02088764: .word _021038E8
    // _02088768: .word _02103904
    // _0208876C: .word _02103920
    // _02088770: .word _0210393C
    // _02088774: .word _02103958
    // _02088778: .word _02103974
    // TODO: decompile
}



void sub_0208877C(void) {
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    FreeBgTilemapBuffer(r4, 6);
    FreeBgTilemapBuffer(r4, 5);
    FreeBgTilemapBuffer(r4, 4);
    FreeBgTilemapBuffer(r4, 3);
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 1);
    Heap_FreeExplicit(0x13, r4);
}



void sub_020887C4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #2
    // lsl r0, r0, #8
    // str r0, [sp]
    // mov r0, #0x13
    // mov r1, #0
    // add r4, r2, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r1, #0
    // mov r0, #0x11
    // str r1, [sp]
    // lsl r0, r0, #0xa
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0x13
    // str r0, [sp, #0xc]
    // ldr r2, [r5]
    // add r0, r4, #0
    // mov r1, #2
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x13
    // str r0, [sp, #0xc]
    // ldr r2, [r5]
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #2
    // lsl r0, r0, #8
    // str r0, [sp]
    // mov r0, #0x13
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #4
    // add r3, r1, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r1, #0
    // mov r0, #0x11
    // str r1, [sp]
    // lsl r0, r0, #0xa
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0x13
    // str r0, [sp, #0xc]
    // ldr r2, [r5]
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #6
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x13
    // str r0, [sp, #0xc]
    // ldr r2, [r5]
    // add r0, r4, #0
    // mov r1, #0x14
    // mov r3, #5
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x13
    // str r0, [sp, #0xc]
    // ldr r2, [r5]
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void sub_0208887C(void) {
}



void sub_02088894(void) {
    // push {r4, lr}
    // ldr r2, _02088940 ; =0x0000012E
    // add r4, r0, #0
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x13
    // bl NewMsgDataFromNarc
    // mov r1, #0x7a
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r2, #0x6a
    // mov r0, #1
    // mov r1, #0x1b
    // lsl r2, r2, #2
    // mov r3, #0x13
    // bl NewMsgDataFromNarc
    // ldr r1, _02088944 ; =0x000007A4
    // mov r2, #0
    // str r0, [r4, r1]
    // mov r0, #1
    // mov r1, #2
    // mov r3, #0x13
    // bl MessagePrinter_New
    // ldr r1, _02088948 ; =0x0000079C
    // str r0, [r4, r1]
    // mov r0, #0x13
    // bl MessageFormat_New
    // ldr r1, _0208894C ; =0x000007A8
    // str r0, [r4, r1]
    // mov r0, #0xc
    // mov r1, #0x13
    // bl String_New
    // mov r1, #0x23
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r0, #0xc
    // mov r1, #0x13
    // bl String_New
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #8
    // mov r1, #0x13
    // bl String_New
    // mov r1, #0x8e
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x80
    // mov r1, #0x13
    // bl String_New
    // ldr r1, _02088950 ; =0x000007AC
    // ldr r2, _02088954 ; =0x000002EE
    // str r0, [r4, r1]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x13
    // bl NewMsgDataFromNarc
    // ldr r1, _02088958 ; =0x000007B4
    // str r0, [r4, r1]
    // mov r0, #8
    // mov r1, #0x13
    // bl String_New
    // mov r2, #0x7b
    // lsl r2, r2, #4
    // str r0, [r4, r2]
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r0, #8]
    // cmp r1, #0
    // beq _0208893C
    // ldr r0, [r4, r2]
    // bl CopyU16ArrayToString
    // pop {r4, pc}
    // nop
    // _02088940: .word 0x0000012E
    // _02088944: .word 0x000007A4
    // _02088948: .word 0x0000079C
    // _0208894C: .word 0x000007A8
    // _02088950: .word 0x000007AC
    // _02088954: .word 0x000002EE
    // _02088958: .word 0x000007B4
    // TODO: decompile
}



void sub_0208895C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _020889BC ; =0x000007B4
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // ldr r0, _020889C0 ; =0x000007A4
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // mov r0, #0x7a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // ldr r0, _020889C4 ; =0x0000079C
    // ldr r0, [r4, r0]
    // bl MessagePrinter_Delete
    // ldr r0, _020889C8 ; =0x000007A8
    // ldr r0, [r4, r0]
    // bl MessageFormat_Delete
    // mov r0, #0x23
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl String_Delete
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl String_Delete
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _020889CC ; =0x000007AC
    // ldr r0, [r4, r0]
    // bl String_Delete
    // mov r0, #0x7b
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl String_Delete
    // pop {r4, pc}
    // _020889BC: .word 0x000007B4
    // _020889C0: .word 0x000007A4
    // _020889C4: .word 0x0000079C
    // _020889C8: .word 0x000007A8
    // _020889CC: .word 0x000007AC
    // TODO: decompile
}



void sub_020889D0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // mov r1, #2
    // mov r2, #7
    // mov r3, #0x13
    // bl sub_0201956C
    // mov r1, #0x7d
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r2, #6
    // str r2, [sp]
    // ldr r0, [r5, r1]
    // mov r1, #0
    // mov r3, #0x11
    // bl sub_020195F4
    // mov r1, #0
    // mov r0, #0x7d
    // str r1, [sp]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r2, r4, #0
    // mov r3, #0x45
    // bl sub_020196B8
    // mov r2, #6
    // mov r0, #0x7d
    // str r2, [sp]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // mov r3, #0x11
    // bl sub_020195F4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // add r2, r4, #0
    // mov r3, #0x46
    // bl sub_020196B8
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #2
    // mov r2, #6
    // mov r3, #0xa
    // bl sub_020195F4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #2
    // add r2, r4, #0
    // mov r3, #0x47
    // bl sub_020196B8
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #3
    // mov r2, #6
    // mov r3, #0xa
    // bl sub_020195F4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #3
    // add r2, r4, #0
    // mov r3, #0x48
    // bl sub_020196B8
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #4
    // mov r2, #6
    // mov r3, #0xb
    // bl sub_020195F4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #4
    // add r2, r4, #0
    // mov r3, #0x49
    // bl sub_020196B8
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // mov r2, #6
    // ldr r0, [r5, r0]
    // mov r1, #5
    // add r3, r2, #0
    // bl sub_020195F4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #5
    // add r2, r4, #0
    // mov r3, #0x4a
    // bl sub_020196B8
    // mov r1, #6
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // add r3, r1, #0
    // bl sub_020195F4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #6
    // add r2, r4, #0
    // mov r3, #0x4b
    // bl sub_020196B8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void sub_02088AF8(void) {
    // mov r1, #0x7d
    // lsl r1, r1, #4
    // ldr r3, _02088B04 ; =sub_020195C0
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _02088B04: .word sub_020195C0
    // TODO: decompile
}



void sub_02088B08(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _02088B3C
    // add r0, r4, #0
    // bl sub_0208E444
    // add r0, r4, #0
    // bl sub_02089C50
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldrb r0, [r0, #0x12]
    // cmp r0, #2
    // bne _02088B30
    // mov r0, #8
    // pop {r4, pc}
    // cmp r0, #4
    // bne _02088B38
    // mov r0, #0x10
    // pop {r4, pc}
    // mov r0, #2
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}



void sub_02088B40(void) {
    // push {r4, r5, r6, lr}
    // ldr r2, _02088CF8 ; =0x000007BF
    // add r5, r0, #0
    // ldrb r1, [r5, r2]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1c
    // cmp r1, #1
    // bne _02088B5E
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // strb r1, [r0, #0x17]
    // mov r0, #0x15
    // pop {r4, r5, r6, pc}
    // ldr r3, _02088CFC ; =gSystem
    // mov r1, #0x20
    // ldr r4, [r3, #0x4c]
    // add r6, r4, #0
    // tst r6, r1
    // beq _02088B74
    // sub r1, #0x21
    // bl sub_02089E30
    // mov r0, #2
    // pop {r4, r5, r6, pc}
    // mov r1, #0x10
    // tst r1, r4
    // beq _02088B84
    // mov r1, #1
    // bl sub_02089E30
    // mov r0, #2
    // pop {r4, r5, r6, pc}
    // mov r1, #0x40
    // add r6, r4, #0
    // tst r6, r1
    // beq _02088B96
    // sub r1, #0x41
    // bl sub_0208A2C0
    // mov r0, #0x13
    // pop {r4, r5, r6, pc}
    // mov r1, #0x80
    // tst r1, r4
    // beq _02088BA6
    // mov r1, #1
    // bl sub_0208A2C0
    // mov r0, #0x13
    // pop {r4, r5, r6, pc}
    // ldr r1, [r3, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _02088BD2
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // strb r1, [r0, #0x17]
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_0208ADB8
    // add r0, r5, #0
    // mov r1, #0x15
    // bl sub_0208B044
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // tst r0, r1
    // beq _02088C12
    // sub r0, r2, #3
    // ldrsb r0, [r5, r0]
    // cmp r0, #1
    // beq _02088BE6
    // cmp r0, #2
    // beq _02088BFA
    // b _02088C12
    // ldr r0, _02088D00 ; =0x0000069B
    // bl PlaySE
    // ldr r1, _02088D04 ; =0x000007BD
    // mov r0, #0xf
    // ldrb r2, [r5, r1]
    // bic r2, r0
    // strb r2, [r5, r1]
    // mov r0, #3
    // pop {r4, r5, r6, pc}
    // add r0, r2, #7
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // beq _02088C12
    // ldr r0, _02088D08 ; =0x000005DD
    // bl PlaySE
    // ldr r0, _02088D0C ; =0x000007C4
    // mov r1, #0
    // strb r1, [r5, r0]
    // mov r0, #0xa
    // pop {r4, r5, r6, pc}
    // ldr r0, _02088D10 ; =0x000007BC
    // ldrsb r0, [r5, r0]
    // cmp r0, #1
    // bne _02088C56
    // add r0, r5, #0
    // bl sub_0208ADCC
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _02088C56
    // lsl r0, r4, #1
    // add r1, r5, r0
    // mov r0, #0x99
    // lsl r0, r0, #2
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // beq _02088C56
    // ldr r0, _02088D00 ; =0x0000069B
    // bl PlaySE
    // ldr r2, _02088D04 ; =0x000007BD
    // mov r1, #0xf
    // ldrb r0, [r5, r2]
    // bic r0, r1
    // lsl r1, r4, #0x18
    // lsr r3, r1, #0x18
    // mov r1, #0xf
    // and r1, r3
    // orr r0, r1
    // strb r0, [r5, r2]
    // mov r0, #3
    // pop {r4, r5, r6, pc}
    // ldr r0, _02088D10 ; =0x000007BC
    // ldrsb r0, [r5, r0]
    // cmp r0, #2
    // bne _02088C88
    // add r0, r5, #0
    // bl sub_0208AEC4
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _02088C88
    // cmp r4, #9
    // bge _02088C88
    // ldr r0, _02088D14 ; =0x000007C6
    // ldrb r0, [r5, r0]
    // cmp r4, r0
    // bge _02088C88
    // ldr r0, _02088D08 ; =0x000005DD
    // bl PlaySE
    // ldr r0, _02088D0C ; =0x000007C4
    // strb r4, [r5, r0]
    // mov r0, #0xa
    // pop {r4, r5, r6, pc}
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldrb r0, [r0, #0x11]
    // cmp r0, #2
    // bne _02088CF0
    // add r0, r5, #0
    // bl sub_0208AEB4
    // cmp r0, #0
    // bne _02088CC6
    // mov r1, #0
    // add r0, r5, #0
    // mvn r1, r1
    // bl sub_0208A2E0
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _02088CC2
    // ldr r0, _02088D08 ; =0x000005DD
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x14
    // bl sub_0208B0B0
    // pop {r4, r5, r6, pc}
    // mov r0, #2
    // pop {r4, r5, r6, pc}
    // cmp r0, #1
    // bne _02088CF0
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_0208A2E0
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _02088CEC
    // ldr r0, _02088D08 ; =0x000005DD
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0x14
    // bl sub_0208B0B0
    // pop {r4, r5, r6, pc}
    // mov r0, #2
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // bl sub_02089E98
    // pop {r4, r5, r6, pc}
    // _02088CF8: .word 0x000007BF
    // _02088CFC: .word gSystem
    // _02088D00: .word 0x0000069B
    // _02088D04: .word 0x000007BD
    // _02088D08: .word 0x000005DD
    // _02088D0C: .word 0x000007C4
    // _02088D10: .word 0x000007BC
    // _02088D14: .word 0x000007C6
    // TODO: decompile
}



void sub_02088D18(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0208A564
    // cmp r0, #1
    // bne _02088D30
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_0208AFA0
    // mov r0, #5
    // pop {r4, pc}
    // mov r0, #3
    // pop {r4, pc}
    // TODO: decompile
}



void sub_02088D34(void) {
}



void sub_02088D48(void) {
    // push {r4, lr}
    // ldr r1, _02088E58 ; =gSystem
    // add r4, r0, #0
    // ldr r2, [r1, #0x48]
    // mov r1, #0x40
    // add r3, r2, #0
    // tst r3, r1
    // beq _02088D72
    // sub r1, #0x41
    // bl sub_0208A71C
    // cmp r0, #1
    // bne _02088D6E
    // ldr r0, _02088E5C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl sub_0208A79C
    // mov r0, #5
    // pop {r4, pc}
    // mov r1, #0x80
    // tst r1, r2
    // beq _02088D92
    // mov r1, #1
    // bl sub_0208A71C
    // cmp r0, #1
    // bne _02088D8E
    // ldr r0, _02088E5C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl sub_0208A79C
    // mov r0, #5
    // pop {r4, pc}
    // mov r0, #1
    // tst r0, r2
    // beq _02088DB4
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldrb r0, [r0, #0x12]
    // cmp r0, #1
    // beq _02088DB4
    // ldr r0, _02088E60 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // bl sub_0208B08C
    // pop {r4, pc}
    // mov r0, #2
    // tst r0, r2
    // beq _02088DD4
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0208AFA0
    // add r0, r4, #0
    // mov r1, #4
    // bl sub_0208B044
    // pop {r4, pc}
    // add r0, r4, #0
    // bl sub_0208AE08
    // cmp r0, #4
    // bne _02088DFA
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldrb r0, [r0, #0x12]
    // cmp r0, #1
    // beq _02088E52
    // ldr r0, _02088E60 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // bl sub_0208B08C
    // pop {r4, pc}
    // cmp r0, #5
    // bne _02088E18
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0208AFA0
    // add r0, r4, #0
    // mov r1, #4
    // bl sub_0208B044
    // pop {r4, pc}
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _02088E52
    // lsl r1, r0, #1
    // add r2, r4, r1
    // mov r1, #0x99
    // lsl r1, r1, #2
    // ldrh r1, [r2, r1]
    // cmp r1, #0
    // beq _02088E52
    // ldr r3, _02088E64 ; =0x000007BD
    // mov r2, #0xf
    // ldrb r1, [r4, r3]
    // lsl r0, r0, #0x18
    // bic r1, r2
    // lsr r2, r0, #0x18
    // mov r0, #0xf
    // and r0, r2
    // orr r0, r1
    // strb r0, [r4, r3]
    // ldr r0, _02088E5C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl sub_0208A79C
    // mov r0, #5
    // pop {r4, pc}
    // mov r0, #5
    // pop {r4, pc}
    // nop
    // _02088E58: .word gSystem
    // _02088E5C: .word 0x000005DC
    // _02088E60: .word 0x000005DD
    // _02088E64: .word 0x000007BD
    // TODO: decompile
}



void sub_02088E68(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #0
    // bl sub_0208AFA0
    // add r0, r4, #0
    // bl sub_0208BC78
    // ldr r2, _02088E94 ; =0x000007BD
    // mov r1, #0xf0
    // ldrb r3, [r4, r2]
    // add r0, r3, #0
    // bic r0, r1
    // lsl r1, r3, #0x1c
    // lsr r1, r1, #0x1c
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x18
    // orr r0, r1
    // strb r0, [r4, r2]
    // mov r0, #6
    // pop {r4, pc}
    // nop
    // _02088E94: .word 0x000007BD
    // TODO: decompile
}



void sub_02088E98(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _02089014 ; =gSystem
    // add r5, r0, #0
    // ldr r2, [r1, #0x48]
    // mov r1, #0x40
    // add r3, r2, #0
    // tst r3, r1
    // beq _02088EC2
    // sub r1, #0x41
    // bl sub_0208A71C
    // cmp r0, #1
    // bne _02088EBE
    // ldr r0, _02089018 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // bl sub_0208A79C
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // mov r1, #0x80
    // tst r1, r2
    // beq _02088EE2
    // mov r1, #1
    // bl sub_0208A71C
    // cmp r0, #1
    // bne _02088EDE
    // ldr r0, _02089018 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // bl sub_0208A79C
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // mov r1, #1
    // add r3, r2, #0
    // tst r3, r1
    // beq _02088F3E
    // bl sub_0208AFA0
    // ldr r0, _0208901C ; =0x0000042C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, _02089020 ; =0x000007BD
    // ldrb r0, [r5, r0]
    // lsl r1, r0, #0x1c
    // lsl r0, r0, #0x18
    // lsr r1, r1, #0x1c
    // lsr r0, r0, #0x1c
    // cmp r1, r0
    // beq _02088F34
    // ldr r0, _02089024 ; =0x000005DD
    // bl PlaySE
    // add r0, r5, #0
    // bl sub_0208A834
    // ldr r1, _02089020 ; =0x000007BD
    // add r0, r5, #0
    // ldrb r2, [r5, r1]
    // lsl r1, r2, #0x1c
    // lsl r2, r2, #0x18
    // lsr r1, r1, #0x1c
    // lsr r2, r2, #0x1c
    // bl sub_0208BB24
    // add r0, r5, #0
    // bl sub_0208DB64
    // add r0, r5, #0
    // bl sub_0208A79C
    // b _02088F3A
    // ldr r0, _02089018 ; =0x000005DC
    // bl PlaySE
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r1, #2
    // tst r1, r2
    // beq _02088F68
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_0208AFA0
    // ldr r0, _0208901C ; =0x0000042C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r5, #0
    // mov r1, #5
    // bl sub_0208B044
    // pop {r3, r4, r5, pc}
    // bl sub_0208ADDC
    // add r4, r0, #0
    // cmp r4, #4
    // bne _02088F96
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_0208AFA0
    // ldr r0, _0208901C ; =0x0000042C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r5, #0
    // mov r1, #5
    // bl sub_0208B044
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _02089010
    // lsl r0, r4, #1
    // add r1, r5, r0
    // mov r0, #0x99
    // lsl r0, r0, #2
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // beq _02089010
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_0208AFA0
    // ldr r0, _0208901C ; =0x0000042C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl Sprite_SetDrawFlag
    // ldr r2, _02089020 ; =0x000007BD
    // ldrb r0, [r5, r2]
    // lsl r1, r0, #0x18
    // lsr r1, r1, #0x1c
    // cmp r4, r1
    // beq _02089006
    // mov r1, #0xf
    // bic r0, r1
    // lsl r1, r4, #0x18
    // lsr r3, r1, #0x18
    // mov r1, #0xf
    // and r1, r3
    // orr r0, r1
    // strb r0, [r5, r2]
    // ldr r0, _02089024 ; =0x000005DD
    // bl PlaySE
    // add r0, r5, #0
    // bl sub_0208A834
    // ldr r1, _02089020 ; =0x000007BD
    // add r0, r5, #0
    // ldrb r2, [r5, r1]
    // lsl r1, r2, #0x1c
    // lsl r2, r2, #0x18
    // lsr r1, r1, #0x1c
    // lsr r2, r2, #0x1c
    // bl sub_0208BB24
    // add r0, r5, #0
    // bl sub_0208DB64
    // add r0, r5, #0
    // bl sub_0208A79C
    // b _0208900C
    // ldr r0, _02089018 ; =0x000005DC
    // bl PlaySE
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // _02089014: .word gSystem
    // _02089018: .word 0x000005DC
    // _0208901C: .word 0x0000042C
    // _02089020: .word 0x000007BD
    // _02089024: .word 0x000005DD
    // TODO: decompile
}



void sub_02089028(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r1, _020891F4 ; =gSystem
    // add r5, r0, #0
    // ldr r2, [r1, #0x48]
    // mov r1, #0x40
    // add r3, r2, #0
    // tst r3, r1
    // beq _02089052
    // sub r1, #0x41
    // bl sub_0208A71C
    // cmp r0, #1
    // bne _0208904E
    // ldr r0, _020891F8 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // bl sub_0208A79C
    // mov r0, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0x80
    // tst r1, r2
    // beq _02089072
    // mov r1, #1
    // bl sub_0208A71C
    // cmp r0, #1
    // bne _0208906E
    // ldr r0, _020891F8 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // bl sub_0208A79C
    // mov r0, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #1
    // tst r1, r2
    // beq _020890D8
    // ldr r0, _020891FC ; =0x000005DD
    // bl PlaySE
    // ldr r0, _02089200 ; =0x000007BD
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1c
    // cmp r0, #4
    // bne _0208909E
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // mov r2, #4
    // strb r2, [r1, #0x16]
    // ldr r0, [r5, r0]
    // mov r1, #0
    // strb r1, [r0, #0x17]
    // mov r0, #0x15
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r0, #1
    // add r1, r5, r0
    // mov r0, #0x99
    // lsl r0, r0, #2
    // ldrh r0, [r1, r0]
    // bl MoveIsHM
    // cmp r0, #1
    // bne _020890D0
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldrh r0, [r0, #0x18]
    // cmp r0, #0
    // beq _020890D0
    // ldr r0, _02089204 ; =0x0000044C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl thunk_Sprite_SetDrawFlag
    // add r0, r5, #0
    // bl sub_0208DBF0
    // mov r0, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl sub_0208AED4
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #2
    // tst r1, r2
    // beq _02089100
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // mov r2, #4
    // strb r2, [r1, #0x16]
    // ldr r0, [r5, r0]
    // mov r1, #1
    // strb r1, [r0, #0x17]
    // add r0, r5, #0
    // mov r1, #0x15
    // bl sub_0208B044
    // pop {r3, r4, r5, r6, r7, pc}
    // bl sub_0208AE48
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _020891F0
    // cmp r4, #4
    // beq _02089118
    // cmp r4, #5
    // beq _02089140
    // b _02089170
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldrh r0, [r0, #0x18]
    // cmp r0, #0
    // beq _020891F0
    // ldr r0, _020891FC ; =0x000005DD
    // bl PlaySE
    // ldr r1, _02089200 ; =0x000007BD
    // mov r0, #0xf
    // ldrb r2, [r5, r1]
    // bic r2, r0
    // mov r0, #4
    // orr r0, r2
    // strb r0, [r5, r1]
    // add r0, r5, #0
    // bl sub_0208A79C
    // b _020891F0
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // ldr r1, _02089200 ; =0x000007BD
    // mov r0, #0xf
    // ldrb r2, [r5, r1]
    // bic r2, r0
    // mov r0, #5
    // orr r0, r2
    // strb r0, [r5, r1]
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // mov r2, #4
    // strb r2, [r1, #0x16]
    // ldr r0, [r5, r0]
    // mov r1, #0
    // strb r1, [r0, #0x17]
    // add r0, r5, #0
    // mov r1, #0x15
    // bl sub_0208B044
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x99
    // lsl r0, r0, #2
    // add r6, r5, r0
    // lsl r7, r4, #1
    // ldrh r0, [r6, r7]
    // bl MoveIsHM
    // cmp r0, #1
    // bne _020891C2
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldrh r0, [r0, #0x18]
    // cmp r0, #0
    // beq _020891C2
    // ldr r0, _020891FC ; =0x000005DD
    // bl PlaySE
    // ldr r2, _02089200 ; =0x000007BD
    // mov r1, #0xf
    // ldrb r0, [r5, r2]
    // bic r0, r1
    // lsl r1, r4, #0x18
    // lsr r3, r1, #0x18
    // mov r1, #0xf
    // and r1, r3
    // orr r0, r1
    // strb r0, [r5, r2]
    // ldr r0, _02089204 ; =0x0000044C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl thunk_Sprite_SetDrawFlag
    // add r0, r5, #0
    // bl sub_0208BBDC
    // add r0, r5, #0
    // bl sub_0208DBF0
    // mov r0, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r6, r7]
    // cmp r0, #0
    // beq _020891F0
    // ldr r0, _020891FC ; =0x000005DD
    // bl PlaySE
    // ldr r2, _02089200 ; =0x000007BD
    // mov r1, #0xf
    // ldrb r0, [r5, r2]
    // bic r0, r1
    // lsl r1, r4, #0x18
    // lsr r3, r1, #0x18
    // mov r1, #0xf
    // and r1, r3
    // orr r0, r1
    // strb r0, [r5, r2]
    // add r0, r5, #0
    // bl sub_0208A79C
    // add r0, r5, #0
    // bl sub_0208AED4
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _020891F4: .word gSystem
    // _020891F8: .word 0x000005DC
    // _020891FC: .word 0x000005DD
    // _02089200: .word 0x000007BD
    // _02089204: .word 0x0000044C
    // TODO: decompile
}



void sub_02089208(void) {
    // push {r4, lr}
    // ldr r1, _020892E0 ; =gSystem
    // add r4, r0, #0
    // ldr r2, [r1, #0x48]
    // mov r1, #1
    // tst r1, r2
    // beq _0208923C
    // ldr r0, _020892E4 ; =0x000005DD
    // bl PlaySE
    // ldr r0, _020892E8 ; =0x000007BD
    // ldrb r0, [r4, r0]
    // lsl r0, r0, #0x1c
    // lsr r2, r0, #0x1c
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // strb r2, [r1, #0x16]
    // ldr r0, [r4, r0]
    // mov r1, #0
    // strb r1, [r0, #0x17]
    // add r0, r4, #0
    // mov r1, #0x15
    // bl sub_0208B068
    // pop {r4, pc}
    // mov r1, #2
    // tst r1, r2
    // beq _02089270
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // ldr r0, _020892EC ; =0x00000428
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _020892F0 ; =0x0000042C
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0208AF08
    // add r0, r4, #0
    // mov r1, #8
    // bl sub_0208B044
    // pop {r4, pc}
    // bl sub_0208AE88
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _020892DA
    // cmp r0, #0
    // beq _02089286
    // cmp r0, #1
    // beq _020892AC
    // b _020892DA
    // ldr r0, _020892E4 ; =0x000005DD
    // bl PlaySE
    // ldr r0, _020892E8 ; =0x000007BD
    // ldrb r0, [r4, r0]
    // lsl r0, r0, #0x1c
    // lsr r2, r0, #0x1c
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // strb r2, [r1, #0x16]
    // ldr r0, [r4, r0]
    // mov r1, #0
    // strb r1, [r0, #0x17]
    // add r0, r4, #0
    // mov r1, #0x15
    // bl sub_0208B068
    // pop {r4, pc}
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // ldr r0, _020892EC ; =0x00000428
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _020892F0 ; =0x0000042C
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0208AF08
    // add r0, r4, #0
    // mov r1, #8
    // bl sub_0208B044
    // pop {r4, pc}
    // mov r0, #9
    // pop {r4, pc}
    // nop
    // _020892E0: .word gSystem
    // _020892E4: .word 0x000005DD
    // _020892E8: .word 0x000007BD
    // _020892EC: .word 0x00000428
    // _020892F0: .word 0x0000042C
    // TODO: decompile
}



void sub_020892F4(void) {
}



void sub_02089308(void) {
}



void sub_0208931C(void) {
    // push {r3, r4, r5, lr}
    // ldr r3, _02089418 ; =gSystem
    // mov r1, #0x20
    // ldr r2, [r3, #0x4c]
    // add r4, r0, #0
    // add r5, r2, #0
    // tst r5, r1
    // beq _02089336
    // sub r1, #0x21
    // bl sub_0208AB58
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // mov r1, #0x10
    // tst r1, r2
    // beq _02089346
    // mov r1, #1
    // bl sub_0208AB58
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // mov r1, #0x40
    // add r5, r2, #0
    // tst r5, r1
    // beq _02089358
    // sub r1, #0x43
    // bl sub_0208AB58
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // mov r1, #0x80
    // tst r1, r2
    // beq _02089368
    // mov r1, #3
    // bl sub_0208AB58
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // ldr r2, [r3, #0x48]
    // mov r1, #3
    // tst r1, r2
    // beq _02089382
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xb
    // bl sub_0208B0F4
    // pop {r3, r4, r5, pc}
    // bl sub_0208AEC4
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bgt _02089392
    // beq _02089414
    // b _020893F8
    // cmp r0, #0xb
    // bgt _020893F8
    // cmp r0, #9
    // blt _020893F8
    // beq _020893A6
    // cmp r0, #0xa
    // beq _020893C6
    // cmp r0, #0xb
    // beq _020893E6
    // b _020893F8
    // ldr r0, _0208941C ; =0x00000504
    // ldr r0, [r4, r0]
    // bl Sprite_GetDrawFlag
    // cmp r0, #1
    // bne _02089414
    // ldr r0, _02089420 ; =0x000005DC
    // bl PlaySE
    // ldr r0, _0208941C ; =0x00000504
    // mov r1, #2
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xd
    // pop {r3, r4, r5, pc}
    // ldr r0, _02089424 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Sprite_GetDrawFlag
    // cmp r0, #1
    // bne _02089414
    // ldr r0, _02089420 ; =0x000005DC
    // bl PlaySE
    // ldr r0, _02089424 ; =0x00000508
    // mov r1, #3
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xe
    // pop {r3, r4, r5, pc}
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xb
    // bl sub_0208B0F4
    // pop {r3, r4, r5, pc}
    // ldr r1, _02089428 ; =0x000007C4
    // ldrb r2, [r4, r1]
    // cmp r2, r0
    // beq _02089410
    // strb r0, [r4, r1]
    // ldr r0, _02089420 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0208AB58
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // _02089418: .word gSystem
    // _0208941C: .word 0x00000504
    // _02089420: .word 0x000005DC
    // _02089424: .word 0x00000508
    // _02089428: .word 0x000007C4
    // TODO: decompile
}



void sub_0208942C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02089450 ; =0x00000504
    // ldr r0, [r4, r0]
    // bl Sprite_IsAnimated
    // cmp r0, #0
    // bne _0208944A
    // mov r1, #8
    // add r0, r4, #0
    // mvn r1, r1
    // bl sub_0208AB58
    // mov r0, #0xc
    // pop {r4, pc}
    // mov r0, #0xd
    // pop {r4, pc}
    // nop
    // _02089450: .word 0x00000504
    // TODO: decompile
}



void sub_02089454(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02089474 ; =0x00000508
    // ldr r0, [r4, r0]
    // bl Sprite_IsAnimated
    // cmp r0, #0
    // bne _02089470
    // add r0, r4, #0
    // mov r1, #9
    // bl sub_0208AB58
    // mov r0, #0xc
    // pop {r4, pc}
    // mov r0, #0xe
    // pop {r4, pc}
    // _02089474: .word 0x00000508
    // TODO: decompile
}



void sub_02089478(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // ldr r1, _020895E8 ; =gSystem
    // add r5, r0, #0
    // ldr r2, [r1, #0x48]
    // mov r1, #3
    // tst r1, r2
    // bne _0208948A
    // b _020895E0
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // ldrb r1, [r1, #0x11]
    // cmp r1, #2
    // bne _020894AE
    // bl sub_0208A520
    // add r6, r0, #0
    // mov r0, #0x13
    // bl AllocMonZeroed
    // add r4, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl CopyBoxPokemonToPokemon
    // b _020894B4
    // bl sub_0208A520
    // add r4, r0, #0
    // ldr r0, _020895EC ; =0x000007BE
    // mov r2, #0
    // strb r2, [r5, r0]
    // ldr r0, _020895F0 ; =0x00000275
    // mov r1, #0x13
    // ldrb r6, [r5, r0]
    // add r0, r4, #0
    // bl GetMonData
    // ldr r1, _020895F0 ; =0x00000275
    // strb r0, [r5, r1]
    // ldrb r0, [r5, r1]
    // cmp r6, r0
    // beq _020894DA
    // ldr r1, _020895EC ; =0x000007BE
    // mov r0, #1
    // ldrb r2, [r5, r1]
    // orr r0, r2
    // strb r0, [r5, r1]
    // ldr r0, _020895F4 ; =0x00000276
    // mov r1, #0x14
    // ldrb r6, [r5, r0]
    // add r0, r4, #0
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _020895F4 ; =0x00000276
    // strb r0, [r5, r1]
    // ldrb r0, [r5, r1]
    // cmp r6, r0
    // beq _020894FC
    // ldr r1, _020895EC ; =0x000007BE
    // mov r0, #2
    // ldrb r2, [r5, r1]
    // orr r0, r2
    // strb r0, [r5, r1]
    // ldr r0, _020895F8 ; =0x00000277
    // mov r1, #0x15
    // ldrb r6, [r5, r0]
    // add r0, r4, #0
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _020895F8 ; =0x00000277
    // strb r0, [r5, r1]
    // ldrb r0, [r5, r1]
    // cmp r6, r0
    // beq _0208951E
    // ldr r1, _020895EC ; =0x000007BE
    // mov r0, #4
    // ldrb r2, [r5, r1]
    // orr r0, r2
    // strb r0, [r5, r1]
    // mov r0, #0x9e
    // lsl r0, r0, #2
    // ldrb r6, [r5, r0]
    // add r0, r4, #0
    // mov r1, #0x16
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x9e
    // lsl r1, r1, #2
    // strb r0, [r5, r1]
    // ldrb r0, [r5, r1]
    // cmp r6, r0
    // beq _02089544
    // ldr r1, _020895EC ; =0x000007BE
    // mov r0, #8
    // ldrb r2, [r5, r1]
    // orr r0, r2
    // strb r0, [r5, r1]
    // ldr r0, _020895FC ; =0x00000279
    // mov r1, #0x17
    // ldrb r6, [r5, r0]
    // add r0, r4, #0
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _020895FC ; =0x00000279
    // strb r0, [r5, r1]
    // ldrb r0, [r5, r1]
    // cmp r6, r0
    // beq _02089566
    // ldr r1, _020895EC ; =0x000007BE
    // mov r0, #0x10
    // ldrb r2, [r5, r1]
    // orr r0, r2
    // strb r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0x18
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02089600 ; =0x0000027A
    // strb r0, [r5, r1]
    // sub r1, #0x4e
    // ldr r0, [r5, r1]
    // ldrb r0, [r0, #0x11]
    // cmp r0, #2
    // bne _02089584
    // add r0, r4, #0
    // bl Heap_Free
    // mov r1, #7
    // mov r0, #0
    // lsl r1, r1, #6
    // mov r2, #0x13
    // bl LoadFontPal1
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r0, [r0, #4]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x13
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // ldr r2, _02089604 ; =0x000003E2
    // mov r1, #1
    // mov r3, #0xd
    // bl LoadUserFrameGfx2
    // ldr r0, _020895EC ; =0x000007BE
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // bne _020895C8
    // add r0, r5, #0
    // mov r1, #0xfe
    // bl sub_0208DDA0
    // add sp, #8
    // mov r0, #0x12
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // bl sub_0208E174
    // add r0, r5, #0
    // bl sub_0208BCD4
    // add r0, r5, #0
    // bl sub_0208BDC8
    // add sp, #8
    // mov r0, #0x11
    // pop {r4, r5, r6, pc}
    // mov r0, #0x10
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _020895E8: .word gSystem
    // _020895EC: .word 0x000007BE
    // _020895F0: .word 0x00000275
    // _020895F4: .word 0x00000276
    // _020895F8: .word 0x00000277
    // _020895FC: .word 0x00000279
    // _02089600: .word 0x0000027A
    // _02089604: .word 0x000003E2
    // TODO: decompile
}



void sub_02089608(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02089650 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _0208964A
    // ldr r0, _02089654 ; =0x000007BE
    // mov r1, #0
    // ldrb r2, [r5, r0]
    // mov r0, #1
    // add r4, r0, #0
    // lsl r4, r1
    // add r3, r2, #0
    // tst r3, r4
    // beq _02089640
    // add r0, r5, #0
    // bl sub_0208DDA0
    // ldr r0, _02089654 ; =0x000007BE
    // ldrb r1, [r5, r0]
    // eor r1, r4
    // strb r1, [r5, r0]
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // bne _0208964A
    // mov r0, #0x12
    // pop {r3, r4, r5, pc}
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r1, #5
    // blo _0208961E
    // mov r0, #0x11
    // pop {r3, r4, r5, pc}
    // nop
    // _02089650: .word gSystem
    // _02089654: .word 0x000007BE
    // TODO: decompile
}



void sub_02089658(void) {
    // ldr r0, _0208966C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _02089666
    // mov r0, #0x15
    // bx lr
    // mov r0, #0x12
    // bx lr
    // nop
    // _0208966C: .word gSystem
    // TODO: decompile
}



void sub_02089670(void) {
}



void sub_02089680(void) {
}



void sub_02089698(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // ldr r3, _02089788 ; =0x000007BE
    // add r4, r0, #0
    // ldrb r0, [r4, r3]
    // cmp r0, #0
    // beq _020896B0
    // cmp r0, #1
    // beq _020896F6
    // cmp r0, #2
    // beq _0208975E
    // b _02089782
    // add r0, r3, #0
    // add r0, #0xc
    // ldrb r0, [r4, r0]
    // add r1, r3, #0
    // add r2, r3, #0
    // str r0, [sp]
    // add r0, r3, #0
    // add r0, #0xd
    // ldrb r0, [r4, r0]
    // add r1, #0xf
    // add r2, #0xa
    // str r0, [sp, #4]
    // add r0, r3, #0
    // add r0, #0xe
    // ldrb r0, [r4, r0]
    // add r3, #0xb
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1c
    // str r0, [sp, #8]
    // ldrb r1, [r4, r1]
    // ldrb r2, [r4, r2]
    // ldrb r3, [r4, r3]
    // ldr r0, [r4]
    // bl BgTilemapRectChangePalette
    // ldr r1, _0208978C ; =0x000007CD
    // ldr r0, [r4]
    // ldrb r1, [r4, r1]
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, _02089788 ; =0x000007BE
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _02089782
    // add r0, r3, #0
    // add r0, #0x10
    // ldrb r0, [r4, r0]
    // add r1, r0, #1
    // add r0, r3, #0
    // add r0, #0x10
    // strb r1, [r4, r0]
    // add r0, r3, #0
    // add r0, #0x10
    // ldrb r0, [r4, r0]
    // cmp r0, #4
    // bne _02089782
    // add r0, r3, #0
    // add r0, #0xc
    // ldrb r0, [r4, r0]
    // add r1, r3, #0
    // add r2, r3, #0
    // str r0, [sp]
    // add r0, r3, #0
    // add r0, #0xd
    // ldrb r0, [r4, r0]
    // add r1, #0xf
    // add r2, #0xa
    // str r0, [sp, #4]
    // add r0, r3, #0
    // add r0, #0xe
    // ldrb r0, [r4, r0]
    // add r3, #0xb
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // str r0, [sp, #8]
    // ldrb r1, [r4, r1]
    // ldrb r2, [r4, r2]
    // ldrb r3, [r4, r3]
    // ldr r0, [r4]
    // bl BgTilemapRectChangePalette
    // ldr r1, _0208978C ; =0x000007CD
    // ldr r0, [r4]
    // ldrb r1, [r4, r1]
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r1, _02089790 ; =0x000007CE
    // mov r0, #0
    // strb r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x10
    // ldrb r0, [r4, r0]
    // sub r1, #0x10
    // add r0, r0, #1
    // strb r0, [r4, r1]
    // b _02089782
    // add r0, r3, #0
    // add r0, #0x10
    // ldrb r0, [r4, r0]
    // add r1, r0, #1
    // add r0, r3, #0
    // add r0, #0x10
    // strb r1, [r4, r0]
    // add r0, r3, #0
    // add r0, #0x10
    // ldrb r0, [r4, r0]
    // cmp r0, #2
    // bne _02089782
    // mov r0, #0
    // strb r0, [r4, r3]
    // add r3, #0x11
    // add sp, #0xc
    // ldrb r0, [r4, r3]
    // pop {r3, r4, pc}
    // mov r0, #0xf
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _02089788: .word 0x000007BE
    // _0208978C: .word 0x000007CD
    // _02089790: .word 0x000007CE
    // TODO: decompile
}



void sub_02089794(void) {
    // push {r4, lr}
    // ldr r1, _020897BC ; =0x000007C9
    // add r4, r0, #0
    // ldrb r1, [r4, r1]
    // cmp r1, #5
    // bne _020897AA
    // mov r1, #0
    // mvn r1, r1
    // bl sub_0208A2C0
    // b _020897B0
    // mov r1, #1
    // bl sub_0208A2C0
    // add r0, r4, #0
    // bl sub_0208B118
    // mov r0, #0x13
    // pop {r4, pc}
    // nop
    // _020897BC: .word 0x000007C9
    // TODO: decompile
}



void sub_020897C0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0208A520
    // mov r2, #0x8b
    // lsl r2, r2, #2
    // add r1, r0, #0
    // ldr r0, [r4, r2]
    // ldrb r0, [r0, #0x11]
    // cmp r0, #2
    // bne _020897E2
    // add r2, r2, #4
    // add r0, r4, #0
    // add r2, r4, r2
    // bl sub_020897F0
    // pop {r4, pc}
    // add r2, r2, #4
    // add r0, r4, #0
    // add r2, r4, r2
    // bl sub_0208981C
    // pop {r4, pc}
    // TODO: decompile
}



void sub_020897F0(void) {
}



void sub_0208981C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r7, r0, #0
    // add r0, r5, #0
    // add r4, r2, #0
    // bl AcquireMonLock
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0xc]
    // add r0, r5, #0
    // bl Mon_GetBoxMon
    // mov r2, #0x7a
    // lsl r2, r2, #4
    // add r6, r0, #0
    // ldr r0, [r7, r2]
    // add r2, #0xc
    // ldr r2, [r7, r2]
    // mov r1, #0xb
    // bl ReadMsgDataIntoString
    // ldr r0, _02089BC0 ; =0x000007A8
    // mov r1, #0
    // ldr r0, [r7, r0]
    // add r2, r6, #0
    // bl BufferBoxMonSpeciesName
    // ldr r2, _02089BC0 ; =0x000007A8
    // mov r1, #0x23
    // ldr r0, [r7, r2]
    // lsl r1, r1, #4
    // add r2, r2, #4
    // ldr r1, [r7, r1]
    // ldr r2, [r7, r2]
    // bl StringExpandPlaceholders
    // mov r2, #0x7a
    // lsl r2, r2, #4
    // ldr r0, [r7, r2]
    // add r2, #0xc
    // ldr r2, [r7, r2]
    // mov r1, #0
    // bl ReadMsgDataIntoString
    // ldr r0, _02089BC0 ; =0x000007A8
    // mov r1, #0
    // ldr r0, [r7, r0]
    // add r2, r6, #0
    // bl BufferBoxMonNickname
    // ldr r2, _02089BC0 ; =0x000007A8
    // mov r1, #0x8d
    // ldr r0, [r7, r2]
    // lsl r1, r1, #2
    // add r2, r2, #4
    // ldr r1, [r7, r1]
    // ldr r2, [r7, r2]
    // bl StringExpandPlaceholders
    // mov r2, #0x7a
    // lsl r2, r2, #4
    // ldr r0, [r7, r2]
    // add r2, #0xc
    // ldr r2, [r7, r2]
    // mov r1, #0xe
    // bl ReadMsgDataIntoString
    // ldr r0, _02089BC0 ; =0x000007A8
    // mov r1, #0
    // ldr r0, [r7, r0]
    // add r2, r6, #0
    // bl BufferBoxMonOTName
    // ldr r2, _02089BC0 ; =0x000007A8
    // mov r1, #0x8e
    // ldr r0, [r7, r2]
    // lsl r1, r1, #2
    // add r2, r2, #4
    // ldr r1, [r7, r1]
    // ldr r2, [r7, r2]
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0xe]
    // add r0, r5, #0
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // ldrb r1, [r4, #0x12]
    // mov r2, #0x7f
    // lsl r0, r0, #0x18
    // bic r1, r2
    // lsr r2, r0, #0x18
    // mov r0, #0x7f
    // and r0, r2
    // orr r0, r1
    // strb r0, [r4, #0x12]
    // add r0, r5, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x1f
    // ldr r2, [r4, #0x50]
    // ldr r1, _02089BC4 ; =0xEFFFFFFF
    // lsr r0, r0, #3
    // and r1, r2
    // orr r0, r1
    // str r0, [r4, #0x50]
    // add r0, r5, #0
    // mov r1, #0xb0
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #1
    // bne _0208992C
    // ldr r0, [r4, #0x50]
    // lsl r0, r0, #3
    // lsr r0, r0, #0x1f
    // bne _0208992C
    // ldrb r1, [r4, #0x12]
    // mov r0, #0x80
    // bic r1, r0
    // strb r1, [r4, #0x12]
    // b _02089934
    // ldrb r1, [r4, #0x12]
    // mov r0, #0x80
    // orr r0, r1
    // strb r0, [r4, #0x12]
    // add r0, r5, #0
    // bl GetMonGender
    // ldrb r1, [r4, #0x13]
    // mov r2, #3
    // bic r1, r2
    // mov r2, #3
    // and r0, r2
    // orr r0, r1
    // strb r0, [r4, #0x13]
    // add r0, r5, #0
    // mov r1, #0x9b
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // lsl r0, r0, #0x1a
    // ldrb r1, [r4, #0x13]
    // mov r2, #0xfc
    // lsr r0, r0, #0x18
    // bic r1, r2
    // orr r0, r1
    // strb r0, [r4, #0x13]
    // add r0, r5, #0
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r4, #0x10]
    // add r0, r5, #0
    // mov r1, #0xb2
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r4, #0x11]
    // add r0, r5, #0
    // mov r1, #7
    // mov r2, #0
    // bl GetMonData
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // mov r1, #8
    // mov r2, #0
    // bl GetMonData
    // str r0, [r4, #0x18]
    // add r0, r5, #0
    // mov r1, #0x9d
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x44
    // strb r0, [r1]
    // ldrb r1, [r4, #0x12]
    // ldrh r0, [r4, #0xc]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x19
    // bl GetMonExpBySpeciesAndLevel
    // str r0, [r4, #0x1c]
    // ldrb r0, [r4, #0x12]
    // lsl r0, r0, #0x19
    // lsr r1, r0, #0x19
    // cmp r1, #0x64
    // bne _020899C0
    // ldr r0, [r4, #0x1c]
    // b _020899C8
    // ldrh r0, [r4, #0xc]
    // add r1, r1, #1
    // bl GetMonExpBySpeciesAndLevel
    // str r0, [r4, #0x20]
    // add r0, r5, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x24]
    // add r0, r5, #0
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x26]
    // add r0, r5, #0
    // mov r1, #0xa5
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x28]
    // add r0, r5, #0
    // mov r1, #0xa6
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x2a]
    // add r0, r5, #0
    // mov r1, #0xa8
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x2c]
    // add r0, r5, #0
    // mov r1, #0xa9
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x2e]
    // add r0, r5, #0
    // mov r1, #0xa7
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x30]
    // add r0, r5, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x32
    // strb r0, [r1]
    // add r0, r5, #0
    // bl GetMonNature
    // add r1, r4, #0
    // add r1, #0x33
    // strb r0, [r1]
    // mov r6, #0
    // lsl r0, r6, #1
    // add r0, r4, r0
    // add r1, r6, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, #0x36
    // mov r2, #0
    // bl GetMonData
    // ldr r1, [sp]
    // mov r2, #0
    // strh r0, [r1, #0x34]
    // add r1, r6, #0
    // add r0, r5, #0
    // add r1, #0x3a
    // bl GetMonData
    // add r1, r4, r6
    // add r1, #0x3c
    // strb r0, [r1]
    // add r1, r6, #0
    // add r0, r5, #0
    // add r1, #0x3e
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // ldr r0, [sp]
    // ldrh r0, [r0, #0x34]
    // bl GetMoveMaxPP
    // add r1, r4, r6
    // add r1, #0x40
    // strb r0, [r1]
    // add r0, r6, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // cmp r6, #4
    // blo _02089A3C
    // add r0, r5, #0
    // mov r1, #0x13
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x45
    // strb r0, [r1]
    // add r0, r5, #0
    // mov r1, #0x14
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x46
    // strb r0, [r1]
    // add r0, r5, #0
    // mov r1, #0x15
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x47
    // strb r0, [r1]
    // add r0, r5, #0
    // mov r1, #0x16
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x48
    // strb r0, [r1]
    // add r0, r5, #0
    // mov r1, #0x17
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x49
    // strb r0, [r1]
    // add r0, r5, #0
    // mov r1, #0x18
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x4a
    // strb r0, [r1]
    // add r0, r4, #0
    // mov r1, #5
    // add r0, #0x4b
    // strb r1, [r0]
    // mov r6, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl MonGetFlavorPreference
    // cmp r0, #1
    // bne _02089B0A
    // add r0, r4, #0
    // add r0, #0x4b
    // strb r6, [r0]
    // b _02089B14
    // add r0, r6, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // cmp r6, #5
    // blo _02089AF6
    // add r0, r5, #0
    // mov r1, #0xb
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x4c
    // strh r0, [r1]
    // add r0, r5, #0
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x4e
    // strh r0, [r1]
    // add r0, r5, #0
    // bl Pokemon_GetStatusIconId
    // mov r1, #0xf
    // ldr r2, [r4, #0x50]
    // lsl r1, r1, #0x1c
    // and r2, r1
    // ldr r1, _02089BC8 ; =0x0FFFFFFF
    // and r0, r1
    // orr r0, r2
    // str r0, [r4, #0x50]
    // add r0, r5, #0
    // bl Pokemon_IsImmuneToPokerus
    // cmp r0, #1
    // bne _02089B64
    // ldr r1, [r4, #0x50]
    // ldr r0, _02089BCC ; =0x3FFFFFFF
    // and r1, r0
    // mov r0, #2
    // lsl r0, r0, #0x1e
    // orr r0, r1
    // str r0, [r4, #0x50]
    // b _02089B9A
    // add r0, r5, #0
    // bl Pokemon_HasPokerus
    // cmp r0, #1
    // bne _02089B92
    // ldr r2, [r4, #0x50]
    // ldr r1, _02089BCC ; =0x3FFFFFFF
    // add r0, r4, #0
    // and r2, r1
    // add r1, r1, #1
    // orr r1, r2
    // str r1, [r4, #0x50]
    // lsl r1, r1, #4
    // lsr r1, r1, #4
    // add r0, #0x50
    // cmp r1, #7
    // bne _02089B9A
    // mov r1, #0xf
    // ldr r2, [r0]
    // lsl r1, r1, #0x1c
    // and r1, r2
    // str r1, [r0]
    // b _02089B9A
    // ldr r1, [r4, #0x50]
    // ldr r0, _02089BCC ; =0x3FFFFFFF
    // and r0, r1
    // str r0, [r4, #0x50]
    // add r0, r5, #0
    // bl MonIsShiny
    // cmp r0, #1
    // ldr r1, [r4, #0x50]
    // bne _02089BAE
    // mov r0, #2
    // lsl r0, r0, #0x1c
    // orr r0, r1
    // b _02089BB2
    // ldr r0, _02089BD0 ; =0xDFFFFFFF
    // and r0, r1
    // str r0, [r4, #0x50]
    // mov r6, #0
    // str r6, [r4, #0x54]
    // str r6, [r4, #0x58]
    // str r6, [r4, #0x5c]
    // ldr r0, _02089BD4 ; =0x000007C6
    // b _02089BD8
    // _02089BC0: .word 0x000007A8
    // _02089BC4: .word 0xEFFFFFFF
    // _02089BC8: .word 0x0FFFFFFF
    // _02089BCC: .word 0x3FFFFFFF
    // _02089BD0: .word 0xDFFFFFFF
    // _02089BD4: .word 0x000007C6
    // str r6, [r4, #0x60]
    // strb r6, [r7, r0]
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // mov r1, #0
    // bl GetRibbonAttr
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02089C14
    // lsr r0, r6, #5
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0x1f
    // add r2, r6, #0
    // and r2, r1
    // mov r1, #1
    // ldr r3, [r0, #0x54]
    // lsl r1, r2
    // orr r1, r3
    // str r1, [r0, #0x54]
    // ldr r0, _02089C4C ; =0x000007C6
    // ldrb r0, [r7, r0]
    // add r1, r0, #1
    // ldr r0, _02089C4C ; =0x000007C6
    // strb r1, [r7, r0]
    // add r0, r6, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // cmp r6, #0x50
    // blo _02089BDC
    // mov r6, #0xa5
    // mov r4, #0
    // lsl r6, r6, #2
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0xb5
    // mov r2, #0
    // bl GetMonData
    // add r1, r7, r4
    // strb r0, [r1, r6]
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #6
    // blo _02089C24
    // ldr r1, [sp, #4]
    // add r0, r5, #0
    // bl ReleaseMonLock
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02089C4C: .word 0x000007C6
    // TODO: decompile
}



void sub_02089C50(void) {
    // push {r4, lr}
    // sub sp, #8
    // mov r2, #0xa
    // add r4, r0, #0
    // lsl r2, r2, #6
    // ldr r0, [r4, r2]
    // lsl r0, r0, #3
    // lsr r0, r0, #0x1f
    // bne _02089CAA
    // ldr r0, _02089CB0 ; =0x000007B8
    // sub r2, #0x44
    // ldrh r2, [r4, r2]
    // ldr r0, [r4, r0]
    // add r1, sp, #4
    // mov r3, #1
    // bl sub_020729A4
    // mov r2, #0x8f
    // lsl r2, r2, #2
    // add r1, r2, #0
    // ldrh r0, [r4, r2]
    // sub r1, #0x83
    // cmp r0, r1
    // bne _02089C9A
    // add r0, sp, #4
    // ldrb r0, [r0]
    // mov r1, #0
    // sub r2, #0x10
    // str r0, [sp]
    // ldr r0, [r4, r2]
    // mov r2, #0x64
    // ldr r0, [r0, #0x28]
    // add r3, r1, #0
    // bl sub_02006EA0
    // add sp, #8
    // pop {r4, pc}
    // add r2, #0x42
    // ldrh r2, [r4, r2]
    // add r1, sp, #4
    // ldrb r1, [r1]
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // bl sub_020062E0
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _02089CB0: .word 0x000007B8
    // TODO: decompile
}



void sub_02089CB4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldrb r0, [r0, #0x12]
    // cmp r0, #0
    // beq _02089CCE
    // cmp r0, #1
    // beq _02089CCE
    // cmp r0, #2
    // beq _02089CD6
    // b _02089CDC
    // ldr r0, _02089D3C ; =0x000007BC
    // mov r1, #0
    // strb r1, [r4, r0]
    // b _02089CDC
    // ldr r0, _02089D3C ; =0x000007BC
    // mov r1, #1
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // bl sub_0208B448
    // add r0, r4, #0
    // bl sub_0208B5A8
    // add r0, r4, #0
    // bl sub_0208C2A0
    // add r0, r4, #0
    // bl sub_0208BD38
    // add r0, r4, #0
    // bl sub_0208BCD4
    // add r0, r4, #0
    // bl sub_0208C42C
    // add r0, r4, #0
    // bl sub_0208CBD4
    // add r0, r4, #0
    // bl sub_02089F98
    // add r0, r4, #0
    // bl sub_0208B9C8
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldrb r0, [r0, #0x12]
    // cmp r0, #2
    // bne _02089D26
    // add r0, r4, #0
    // bl sub_0208A8F4
    // pop {r4, pc}
    // add r0, r4, #0
    // bl sub_0208B400
    // add r0, r4, #0
    // bl sub_0208BF9C
    // add r0, r4, #0
    // bl sub_0208BFD0
    // pop {r4, pc}
    // nop
    // _02089D3C: .word 0x000007BC
    // TODO: decompile
}



void sub_02089D40(void) {
    // push {r3, r4, r5, r6}
    // mov r6, #0
    // strb r6, [r0, #0x15]
    // add r0, #0x15
    // mov r3, #1
    // ldrb r5, [r1, r6]
    // cmp r5, #4
    // beq _02089D64
    // add r2, r3, #0
    // ldrb r4, [r0]
    // lsl r2, r5
    // orr r2, r4
    // strb r2, [r0]
    // add r2, r6, #1
    // lsl r2, r2, #0x18
    // lsr r6, r2, #0x18
    // cmp r6, #4
    // blo _02089D4A
    // pop {r3, r4, r5, r6}
    // bx lr
    // TODO: decompile
}



void sub_02089D68(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // ldr r1, _02089E10 ; =0x000007BC
    // add r5, r0, #0
    // ldrsb r1, [r5, r1]
    // cmp r1, r4
    // beq _02089E0C
    // bl sub_0208C4E0
    // ldr r0, _02089E10 ; =0x000007BC
    // strb r4, [r5, r0]
    // add r0, r5, #0
    // bl sub_0208B448
    // add r0, r5, #0
    // bl sub_0208B5A8
    // add r0, r5, #0
    // bl sub_0208B89C
    // add r0, r5, #0
    // bl sub_0208B9C8
    // add r0, r5, #0
    // bl sub_0208C2A0
    // add r0, r5, #0
    // bl sub_0208BCD4
    // add r0, r5, #0
    // bl sub_0208C42C
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #0x12
    // str r0, [sp, #4]
    // mov r0, #0x14
    // mov r2, #0
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r0, [r5]
    // mov r1, #1
    // add r3, r2, #0
    // bl FillBgTilemapRect
    // ldr r0, [r5]
    // mov r1, #1
    // bl BgCommitTilemapBufferToVram
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #0x12
    // str r0, [sp, #4]
    // mov r0, #0x14
    // mov r2, #0
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r0, [r5]
    // mov r1, #4
    // add r3, r2, #0
    // bl FillBgTilemapRect
    // ldr r0, [r5]
    // mov r1, #4
    // bl BgCommitTilemapBufferToVram
    // add r0, r5, #0
    // bl sub_0208CBD4
    // add r0, r5, #0
    // bl sub_02089F98
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldrb r0, [r0, #0x12]
    // cmp r0, #2
    // bne _02089E0C
    // add r0, r5, #0
    // bl sub_0208A950
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02089E10: .word 0x000007BC
    // TODO: decompile
}



void sub_02089E14(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02089E2C ; =0x000005E1
    // add r4, r1, #0
    // bl PlaySE
    // lsl r1, r4, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl sub_02089D68
    // pop {r3, r4, r5, pc}
    // _02089E2C: .word 0x000005E1
    // TODO: decompile
}



void sub_02089E30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r3, r0, #0
    // ldr r0, _02089E7C ; =0x000007BC
    // add r2, r1, #0
    // ldrsb r1, [r3, r0]
    // mov r0, #0xa
    // lsl r0, r0, #6
    // ldr r4, [r3, r0]
    // mov ip, r1
    // lsl r4, r4, #3
    // lsr r4, r4, #0x1f
    // bne _02089E7A
    // sub r0, #0x54
    // ldr r0, [r3, r0]
    // mov r7, #0
    // ldrb r0, [r0, #0x15]
    // mov r6, #2
    // mov r4, #1
    // add r1, r1, r2
    // lsl r1, r1, #0x18
    // asr r1, r1, #0x18
    // bpl _02089E60
    // add r1, r6, #0
    // b _02089E66
    // cmp r1, #2
    // ble _02089E66
    // add r1, r7, #0
    // add r5, r4, #0
    // lsl r5, r1
    // tst r5, r0
    // beq _02089E54
    // mov r0, ip
    // cmp r1, r0
    // beq _02089E7A
    // add r0, r3, #0
    // bl sub_02089E14
    // pop {r3, r4, r5, r6, r7, pc}
    // _02089E7C: .word 0x000007BC
    // TODO: decompile
}



void sub_02089E80(void) {
    // mov r2, #0x8b
    // lsl r2, r2, #2
    // ldr r0, [r0, r2]
    // ldrb r3, [r0, #0x15]
    // mov r0, #1
    // add r2, r0, #0
    // lsl r2, r1
    // add r1, r3, #0
    // tst r1, r2
    // bne _02089E96
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void sub_02089E98(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl sub_0208E544
    // add r5, r0, #0
    // cmp r5, #0xff
    // bne _02089EAA
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // cmp r5, #9
    // bhi _02089F4C
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02089EBA: ; jump table
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_02089E80
    // cmp r0, #0
    // beq _02089F4C
    // lsl r1, r5, #0x18
    // add r0, r4, #0
    // asr r1, r1, #0x18
    // bl sub_02089E14
    // b _02089F4C
    // mov r0, #0xa
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // lsl r0, r0, #3
    // lsr r0, r0, #0x1f
    // bne _02089F4C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_02089E80
    // cmp r0, #0
    // beq _02089F4C
    // lsl r1, r5, #0x18
    // add r0, r4, #0
    // asr r1, r1, #0x18
    // bl sub_02089E14
    // b _02089F4C
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_0208ADB8
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x15
    // bl sub_0208B044
    // pop {r3, r4, r5, pc}
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // sub r5, r5, #4
    // ldrb r0, [r0, #0x14]
    // cmp r0, r5
    // beq _02089F4C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_0208A310
    // cmp r0, #0
    // beq _02089F4C
    // lsl r1, r5, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl sub_0208A234
    // mov r0, #0x13
    // pop {r3, r4, r5, pc}
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void sub_02089F50(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r1, #0
    // add r1, r2, #0
    // mov r0, #0xa2
    // mov r2, #0x13
    // add r4, r3, #0
    // bl AllocAndReadWholeNarcMemberByIdPair
    // add r1, sp, #0xc
    // add r7, r0, #0
    // bl NNS_G2dGetUnpackedScreenData
    // mov r3, #0
    // lsl r1, r4, #0x18
    // str r3, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    // ldr r0, [r5]
    // lsr r1, r1, #0x18
    // add r2, #0xc
    // bl LoadRectToBgTilemapRect
    // lsl r1, r4, #0x18
    // add r0, r6, #0
    // lsr r1, r1, #0x18
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r7, #0
    // bl Heap_Free
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02089F98(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x8b
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // ldr r1, [r1, #0x34]
    // cmp r1, #0
    // bne _02089FBC
    // ldr r1, _0208A0DC ; =0x000007BC
    // ldrsb r1, [r4, r1]
    // cmp r1, #2
    // bne _02089FBC
    // ldr r1, [r4]
    // mov r2, #0xb
    // mov r3, #3
    // bl sub_02089F50
    // b _02089FD4
    // ldr r2, _0208A0DC ; =0x000007BC
    // ldr r1, [r4]
    // ldrsb r3, [r4, r2]
    // mov r2, #0xc
    // add r0, r4, #0
    // add r5, r3, #0
    // mul r5, r2
    // ldr r2, _0208A0E0 ; =_021039B8
    // mov r3, #3
    // ldr r2, [r2, r5]
    // bl sub_02089F50
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // ldrb r1, [r1, #0x12]
    // cmp r1, #2
    // bne _0208A024
    // ldr r2, _0208A0DC ; =0x000007BC
    // ldr r1, [r4]
    // ldrsb r3, [r4, r2]
    // mov r2, #0xc
    // add r0, r4, #0
    // add r5, r3, #0
    // mul r5, r2
    // ldr r2, _0208A0E4 ; =_021039B8 + 8
    // mov r3, #6
    // ldr r2, [r2, r5]
    // bl sub_02089F50
    // ldr r0, [r4]
    // mov r1, #5
    // mov r2, #0
    // mov r3, #0x80
    // bl ScheduleSetBgPosText
    // ldr r0, [r4]
    // mov r1, #5
    // mov r2, #3
    // mov r3, #0
    // bl ScheduleSetBgPosText
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldrh r0, [r0, #0x18]
    // cmp r0, #0
    // bne _0208A090
    // add r0, r4, #0
    // bl sub_0208AF70
    // b _0208A090
    // add r0, #0x54
    // ldr r0, [r4, r0]
    // lsl r0, r0, #3
    // lsr r0, r0, #0x1f
    // beq _0208A048
    // ldr r2, _0208A0DC ; =0x000007BC
    // ldr r1, [r4]
    // ldrsb r3, [r4, r2]
    // mov r2, #0xc
    // add r0, r4, #0
    // add r5, r3, #0
    // mul r5, r2
    // ldr r2, _0208A0E4 ; =_021039B8 + 8
    // mov r3, #6
    // ldr r2, [r2, r5]
    // bl sub_02089F50
    // b _0208A090
    // add r0, r4, #0
    // mov r1, #2
    // bl sub_02089E80
    // cmp r0, #0
    // beq _0208A06E
    // ldr r2, _0208A0DC ; =0x000007BC
    // ldr r1, [r4]
    // ldrsb r3, [r4, r2]
    // mov r2, #0xc
    // add r0, r4, #0
    // add r5, r3, #0
    // mul r5, r2
    // ldr r2, _0208A0E8 ; =_021039B8 + 4
    // mov r3, #6
    // ldr r2, [r2, r5]
    // bl sub_02089F50
    // b _0208A090
    // ldr r0, _0208A0DC ; =0x000007BC
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // bne _0208A084
    // ldr r1, [r4]
    // add r0, r4, #0
    // mov r2, #0x4d
    // mov r3, #6
    // bl sub_02089F50
    // b _0208A090
    // ldr r1, [r4]
    // add r0, r4, #0
    // mov r2, #0x4e
    // mov r3, #6
    // bl sub_02089F50
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldrb r0, [r0, #0x11]
    // cmp r0, #2
    // bne _0208A0B2
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // mov r1, #4
    // ldr r0, [r4, r0]
    // mov r2, #0x14
    // add r3, r1, #0
    // bl sub_020196E8
    // add r0, r4, #0
    // bl sub_0208B118
    // mov r0, #0xa
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // lsl r0, r0, #3
    // lsr r0, r0, #0x1f
    // bne _0208A0D8
    // ldr r0, _0208A0DC ; =0x000007BC
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // bne _0208A0CE
    // add r0, r4, #0
    // bl sub_0208A1A0
    // pop {r3, r4, r5, pc}
    // cmp r0, #1
    // bne _0208A0D8
    // add r0, r4, #0
    // bl sub_0208A0EC
    // pop {r3, r4, r5, pc}
    // nop
    // _0208A0DC: .word 0x000007BC
    // _0208A0E0: .word _021039B8
    // _0208A0E4: .word _021039B8 + 8
    // _0208A0E8: .word _021039B8 + 4
    // TODO: decompile
}



void sub_0208A0EC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // mov r1, #0x95
    // add r6, r0, #0
    // lsl r1, r1, #2
    // ldrh r0, [r6, r1]
    // add r1, r1, #2
    // ldrh r1, [r6, r1]
    // mov r2, #0x30
    // bl CalculateHpBarColor
    // cmp r0, #4
    // bhi _0208A126
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0208A112: ; jump table
    // ldr r7, _0208A194 ; =0x0000F097
    // b _0208A126
    // ldr r7, _0208A198 ; =0x0000F0B7
    // b _0208A126
    // ldr r7, _0208A19C ; =0x0000F0D7
    // mov r1, #0x95
    // lsl r1, r1, #2
    // ldrh r0, [r6, r1]
    // add r1, r1, #2
    // ldrh r1, [r6, r1]
    // mov r2, #0x30
    // bl CalculateHpBarPixelsLength
    // add r4, r0, #0
    // add r0, r7, #0
    // add r0, #8
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // mov r5, #0
    // str r0, [sp, #0x10]
    // cmp r4, #8
    // blo _0208A14C
    // ldr r2, [sp, #0x10]
    // b _0208A152
    // add r0, r7, r4
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x10
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r3, r5, #0
    // str r0, [sp, #8]
    // mov r0, #0x11
    // add r3, #0xa
    // str r0, [sp, #0xc]
    // lsl r3, r3, #0x18
    // ldr r0, [r6]
    // mov r1, #3
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // cmp r4, #8
    // bhs _0208A178
    // mov r4, #0
    // b _0208A17E
    // sub r4, #8
    // lsl r0, r4, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #6
    // blo _0208A144
    // ldr r0, [r6]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0208A194: .word 0x0000F097
    // _0208A198: .word 0x0000F0B7
    // _0208A19C: .word 0x0000F0D7
    // TODO: decompile
}



void sub_0208A1A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // ldr r2, _0208A228 ; =0x00000242
    // add r6, r0, #0
    // ldrb r0, [r6, r2]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x19
    // cmp r0, #0x64
    // bhs _0208A1C8
    // add r0, r2, #0
    // add r1, r2, #0
    // add r0, #0xa
    // add r1, #0xe
    // add r2, r2, #6
    // ldr r0, [r6, r0]
    // ldr r1, [r6, r1]
    // ldr r2, [r6, r2]
    // sub r1, r1, r0
    // sub r0, r2, r0
    // b _0208A1CC
    // mov r1, #0
    // add r0, r1, #0
    // mov r2, #0x38
    // bl CalculateHpBarPixelsLength
    // add r4, r0, #0
    // mov r5, #0
    // mov r7, #0x13
    // cmp r4, #8
    // blo _0208A1E0
    // ldr r2, _0208A22C ; =0x0000E03F
    // b _0208A1E8
    // ldr r0, _0208A230 ; =0x0000E037
    // add r0, r4, r0
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x10
    // str r7, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r3, r5, #0
    // str r0, [sp, #8]
    // mov r0, #0x11
    // add r3, #9
    // str r0, [sp, #0xc]
    // lsl r3, r3, #0x18
    // ldr r0, [r6]
    // mov r1, #6
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // cmp r4, #8
    // bhs _0208A20C
    // mov r4, #0
    // b _0208A212
    // sub r4, #8
    // lsl r0, r4, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #7
    // blo _0208A1D8
    // ldr r0, [r6]
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0208A228: .word 0x00000242
    // _0208A22C: .word 0x0000E03F
    // _0208A230: .word 0x0000E037
    // TODO: decompile
}



void sub_0208A234(void) {
    // push {r4, lr}
    // mov r2, #0x8b
    // add r4, r0, #0
    // lsl r2, r2, #2
    // ldr r2, [r4, r2]
    // strb r1, [r2, #0x14]
    // bl sub_020897C0
    // add r0, r4, #0
    // bl sub_02089C50
    // add r0, r4, #0
    // bl sub_0208C57C
    // add r0, r4, #0
    // bl sub_0208C614
    // add r0, r4, #0
    // bl sub_0208C6B4
    // add r0, r4, #0
    // bl sub_02089F98
    // add r0, r4, #0
    // bl sub_0208E4B4
    // add r0, r4, #0
    // bl sub_0208B448
    // add r0, r4, #0
    // bl sub_0208BA60
    // add r0, r4, #0
    // bl sub_0208B5A8
    // add r0, r4, #0
    // bl sub_0208B89C
    // add r0, r4, #0
    // bl sub_0208B9C8
    // add r0, r4, #0
    // bl sub_0208C2A0
    // add r0, r4, #0
    // bl sub_0208BE70
    // add r0, r4, #0
    // bl sub_0208B48C
    // add r0, r4, #0
    // bl sub_0208B4EC
    // add r0, r4, #0
    // bl sub_0208BCD4
    // add r0, r4, #0
    // bl sub_0208BD38
    // add r0, r4, #0
    // bl sub_0208CBD4
    // add r0, r4, #0
    // bl sub_0208B400
    // add r0, r4, #0
    // bl sub_0208BFD0
    // pop {r4, pc}
    // TODO: decompile
}



void sub_0208A2C0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0208A2E0
    // add r1, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // beq _0208A2DC
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl sub_0208A234
    // pop {r4, pc}
    // TODO: decompile
}



void sub_0208A2E0(void) {
    // push {r3, lr}
    // mov r2, #0x8b
    // lsl r2, r2, #2
    // ldr r2, [r0, r2]
    // ldrb r2, [r2, #0x11]
    // cmp r2, #0
    // beq _0208A2F8
    // cmp r2, #1
    // beq _0208A2FE
    // cmp r2, #2
    // beq _0208A304
    // b _0208A30A
    // bl sub_0208A3F4
    // pop {r3, pc}
    // bl sub_0208A45C
    // pop {r3, pc}
    // bl sub_0208A4B8
    // pop {r3, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, pc}
    // TODO: decompile
}



void sub_0208A310(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r2, [r4, r0]
    // add r5, r1, #0
    // ldrb r0, [r2, #0x11]
    // cmp r0, #0
    // beq _0208A32C
    // cmp r0, #1
    // beq _0208A35C
    // cmp r0, #2
    // beq _0208A396
    // b _0208A3C6
    // bl sub_02070D90
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r6, r5, #0
    // ldr r4, [r1]
    // mul r6, r0
    // add r0, r4, r6
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0208A3C6
    // add r0, r4, r6
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0208A3C6
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldrb r0, [r2, #0x13]
    // cmp r5, r0
    // bge _0208A3C6
    // ldr r0, [r2]
    // bl Party_GetMonByIndex
    // mov r1, #5
    // mov r2, #0
    // add r5, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0208A3C6
    // add r0, r5, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0208A392
    // add r0, r4, #0
    // bl sub_0208A3CC
    // cmp r0, #1
    // bne _0208A3C6
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // bl sub_02070D94
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r6, r5, #0
    // ldr r4, [r1]
    // mul r6, r0
    // add r0, r4, r6
    // mov r1, #5
    // mov r2, #0
    // bl GetBoxMonData
    // cmp r0, #0
    // beq _0208A3C6
    // add r0, r4, r6
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetBoxMonData
    // cmp r0, #0
    // beq _0208A3C6
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_0208A3CC(void) {
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r1, [r0, r1]
    // ldrb r1, [r1, #0x12]
    // cmp r1, #3
    // bne _0208A3DC
    // mov r0, #0
    // bx lr
    // ldr r1, _0208A3F0 ; =0x000007BC
    // ldrsb r0, [r0, r1]
    // cmp r0, #0
    // beq _0208A3EC
    // cmp r0, #3
    // beq _0208A3EC
    // mov r0, #0
    // bx lr
    // mov r0, #1
    // bx lr
    // _0208A3F0: .word 0x000007BC
    // TODO: decompile
}



void sub_0208A3F4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // str r1, [sp]
    // ldr r1, [r5, r0]
    // mov r0, #0x14
    // ldrsb r4, [r1, r0]
    // ldr r0, [sp]
    // add r0, r4, r0
    // lsl r0, r0, #0x18
    // asr r4, r0, #0x18
    // bmi _0208A41A
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldrb r0, [r0, #0x13]
    // cmp r4, r0
    // blt _0208A420
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl sub_02070D90
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r7, r4, #0
    // ldr r6, [r1]
    // mul r7, r0
    // add r0, r6, r7
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0208A404
    // add r0, r6, r7
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0208A456
    // add r0, r5, #0
    // bl sub_0208A3CC
    // cmp r0, #1
    // bne _0208A404
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_0208A45C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // add r7, r1, #0
    // ldr r1, [r5, r0]
    // mov r0, #0x14
    // ldrsb r4, [r1, r0]
    // add r0, r4, r7
    // lsl r0, r0, #0x18
    // asr r4, r0, #0x18
    // bmi _0208A480
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // ldrb r0, [r1, #0x13]
    // cmp r4, r0
    // blt _0208A486
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r1]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // mov r1, #5
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0208A46C
    // add r0, r6, #0
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0208A4B4
    // add r0, r5, #0
    // bl sub_0208A3CC
    // cmp r0, #1
    // bne _0208A46C
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_0208A4B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // str r1, [sp]
    // ldr r1, [r5, r0]
    // mov r0, #0x14
    // ldrsb r4, [r1, r0]
    // ldr r0, [sp]
    // add r0, r4, r0
    // lsl r0, r0, #0x18
    // asr r4, r0, #0x18
    // bmi _0208A4DE
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldrb r0, [r0, #0x13]
    // cmp r4, r0
    // blt _0208A4E4
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl sub_02070D94
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r7, r4, #0
    // ldr r6, [r1]
    // mul r7, r0
    // add r0, r6, r7
    // mov r1, #5
    // mov r2, #0
    // bl GetBoxMonData
    // cmp r0, #0
    // beq _0208A4C8
    // add r0, r6, r7
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetBoxMonData
    // cmp r0, #0
    // beq _0208A51A
    // add r0, r5, #0
    // bl sub_0208A3CC
    // cmp r0, #1
    // bne _0208A4C8
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_0208A520(void) {
    // push {r4, lr}
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r4, [r0, r1]
    // ldrb r0, [r4, #0x11]
    // cmp r0, #0
    // beq _0208A538
    // cmp r0, #1
    // beq _0208A546
    // cmp r0, #2
    // beq _0208A550
    // b _0208A55E
    // bl sub_02070D90
    // ldrb r1, [r4, #0x14]
    // ldr r2, [r4]
    // mul r0, r1
    // add r0, r2, r0
    // pop {r4, pc}
    // ldrb r1, [r4, #0x14]
    // ldr r0, [r4]
    // bl Party_GetMonByIndex
    // pop {r4, pc}
    // bl sub_02070D94
    // ldrb r1, [r4, #0x14]
    // ldr r2, [r4]
    // mul r0, r1
    // add r0, r2, r0
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}



void sub_0208A564(void) {
    // push {r4, lr}
    // ldr r1, _0208A630 ; =0x000007BE
    // add r4, r0, #0
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // beq _0208A57A
    // cmp r1, #1
    // beq _0208A5B6
    // cmp r1, #2
    // beq _0208A5E2
    // b _0208A62A
    // ldr r0, _0208A634 ; =0x00000428
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, _0208A634 ; =0x00000428
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimCtrlSeq
    // mov r2, #0
    // ldr r0, [r4]
    // mov r1, #5
    // add r3, r2, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r4]
    // mov r1, #5
    // mov r2, #3
    // mov r3, #0
    // bl ScheduleSetBgPosText
    // add r0, r4, #0
    // add r0, #0x44
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _0208A630 ; =0x000007BE
    // mov r1, #1
    // strb r1, [r4, r0]
    // b _0208A62A
    // ldr r0, [r4]
    // mov r1, #5
    // bl Bg_GetXpos
    // cmp r0, #0x80
    // ldr r0, [r4]
    // blt _0208A5D6
    // mov r1, #5
    // mov r2, #0
    // mov r3, #0x80
    // bl ScheduleSetBgPosText
    // ldr r0, _0208A630 ; =0x000007BE
    // mov r1, #2
    // strb r1, [r4, r0]
    // b _0208A62A
    // mov r1, #5
    // mov r2, #1
    // mov r3, #0x40
    // bl ScheduleSetBgPosText
    // b _0208A62A
    // bl sub_0208DB1C
    // add r0, r4, #0
    // bl sub_0208A79C
    // mov r0, #0x43
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl thunk_Sprite_SetDrawFlag
    // add r0, r4, #0
    // bl sub_0208C068
    // mov r0, #9
    // lsl r0, r0, #6
    // ldrb r1, [r4, r0]
    // add r0, r0, #1
    // ldrb r0, [r4, r0]
    // cmp r1, r0
    // beq _0208A616
    // ldr r0, _0208A638 ; =0x00000434
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl thunk_Sprite_SetDrawFlag
    // ldr r0, _0208A634 ; =0x00000428
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, _0208A630 ; =0x000007BE
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0208A630: .word 0x000007BE
    // _0208A634: .word 0x00000428
    // _0208A638: .word 0x00000434
    // TODO: decompile
}



void sub_0208A63C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0208A70C ; =0x000007BE
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _0208A652
    // cmp r0, #1
    // beq _0208A69C
    // cmp r0, #2
    // beq _0208A6C8
    // b _0208A706
    // mov r0, #0x43
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl thunk_Sprite_SetDrawFlag
    // ldr r0, _0208A710 ; =0x00000434
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl thunk_Sprite_SetDrawFlag
    // ldr r0, _0208A714 ; =0x0000044C
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl thunk_Sprite_SetDrawFlag
    // mov r0, #0x45
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl thunk_Sprite_SetDrawFlag
    // ldr r0, _0208A718 ; =0x00000428
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // bl sub_0208DB58
    // add r0, r4, #0
    // bl sub_0208DAD4
    // ldr r0, _0208A70C ; =0x000007BE
    // mov r1, #1
    // strb r1, [r4, r0]
    // b _0208A706
    // ldr r0, [r4]
    // mov r1, #5
    // bl Bg_GetXpos
    // cmp r0, #0x80
    // ldr r0, [r4]
    // bgt _0208A6BC
    // mov r2, #0
    // mov r1, #5
    // add r3, r2, #0
    // bl ScheduleSetBgPosText
    // ldr r0, _0208A70C ; =0x000007BE
    // mov r1, #2
    // strb r1, [r4, r0]
    // b _0208A706
    // mov r1, #5
    // mov r2, #2
    // mov r3, #0x40
    // bl ScheduleSetBgPosText
    // b _0208A706
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // add r0, #0x64
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // add r0, #0x44
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0208A718 ; =0x00000428
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // bl sub_0208B400
    // ldr r0, _0208A70C ; =0x000007BE
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0208A70C: .word 0x000007BE
    // _0208A710: .word 0x00000434
    // _0208A714: .word 0x0000044C
    // _0208A718: .word 0x00000428
    // TODO: decompile
}



void sub_0208A71C(void) {
    // push {r4, r5, r6, r7}
    // add r5, r0, #0
    // ldr r0, _0208A798 ; =0x000007BD
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #0x1c
    // lsr r4, r0, #0x1c
    // lsl r0, r4, #0x18
    // asr r2, r0, #0x18
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r3, [r5, r0]
    // ldrb r0, [r3, #0x12]
    // cmp r0, #2
    // bne _0208A746
    // ldrh r0, [r3, #0x18]
    // cmp r0, #0
    // beq _0208A742
    // mov r3, #4
    // b _0208A748
    // mov r3, #3
    // b _0208A748
    // mov r3, #3
    // mov r6, #0x99
    // mov r0, #0
    // lsl r6, r6, #2
    // add r2, r2, r1
    // lsl r2, r2, #0x18
    // asr r2, r2, #0x18
    // bpl _0208A75A
    // add r2, r3, #0
    // b _0208A760
    // cmp r2, r3
    // ble _0208A760
    // add r2, r0, #0
    // cmp r2, #4
    // beq _0208A772
    // lsl r7, r2, #1
    // add r7, r5, r7
    // ldrh r7, [r7, r6]
    // cmp r7, #0
    // bne _0208A772
    // cmp r2, r4
    // bne _0208A74E
    // cmp r2, r4
    // beq _0208A790
    // ldr r3, _0208A798 ; =0x000007BD
    // mov r1, #0xf
    // ldrb r0, [r5, r3]
    // bic r0, r1
    // lsl r1, r2, #0x18
    // lsr r2, r1, #0x18
    // mov r1, #0xf
    // and r1, r2
    // orr r0, r1
    // strb r0, [r5, r3]
    // mov r0, #1
    // pop {r4, r5, r6, r7}
    // bx lr
    // mov r0, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // nop
    // _0208A798: .word 0x000007BD
    // TODO: decompile
}



void sub_0208A79C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0208BBDC
    // ldr r0, _0208A7F4 ; =0x000007BD
    // ldrb r0, [r4, r0]
    // lsl r0, r0, #0x1c
    // lsr r1, r0, #0x1c
    // cmp r1, #4
    // bne _0208A7D0
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldrh r1, [r0, #0x18]
    // cmp r1, #0
    // beq _0208A7C4
    // add r0, r4, #0
    // bl sub_0208A7F8
    // pop {r4, pc}
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl sub_0208A7F8
    // pop {r4, pc}
    // cmp r1, #5
    // bne _0208A7E0
    // mov r1, #0
    // add r0, r4, #0
    // mvn r1, r1
    // bl sub_0208A7F8
    // pop {r4, pc}
    // lsl r1, r1, #1
    // add r2, r4, r1
    // mov r1, #0x99
    // lsl r1, r1, #2
    // ldrh r1, [r2, r1]
    // add r0, r4, #0
    // bl sub_0208A7F8
    // pop {r4, pc}
    // nop
    // _0208A7F4: .word 0x000007BD
    // TODO: decompile
}



void sub_0208A7F8(void) {
    // push {r3, r4, r5, lr}
    // mov r2, #0
    // add r4, r1, #0
    // mvn r2, r2
    // add r5, r0, #0
    // cmp r4, r2
    // bne _0208A816
    // bl sub_0208DAD4
    // ldr r0, _0208A830 ; =0x0000044C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl thunk_Sprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // bl sub_0208D9A0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_0208BB8C
    // ldr r0, _0208A830 ; =0x0000044C
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl thunk_Sprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // nop
    // _0208A830: .word 0x0000044C
    // TODO: decompile
}



void sub_0208A834(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // bl sub_0208A520
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // ldrb r1, [r1, #0x11]
    // cmp r1, #2
    // ldr r1, _0208A8F0 ; =0x000007BD
    // bne _0208A85A
    // ldrb r2, [r4, r1]
    // lsl r1, r2, #0x1c
    // lsl r2, r2, #0x18
    // lsr r1, r1, #0x1c
    // lsr r2, r2, #0x1c
    // bl BoxMonSwapMoves
    // b _0208A868
    // ldrb r2, [r4, r1]
    // lsl r1, r2, #0x1c
    // lsl r2, r2, #0x18
    // lsr r1, r1, #0x1c
    // lsr r2, r2, #0x1c
    // bl MonSwapMoves
    // ldr r0, _0208A8F0 ; =0x000007BD
    // mov r1, #0x99
    // ldrb r6, [r4, r0]
    // lsl r1, r1, #2
    // add r5, r4, r1
    // lsl r2, r6, #0x1c
    // lsl r6, r6, #0x18
    // lsr r6, r6, #0x1c
    // lsl r6, r6, #1
    // lsr r3, r2, #0x1b
    // add r6, r4, r6
    // ldrh r2, [r5, r3]
    // ldrh r6, [r6, r1]
    // strh r6, [r5, r3]
    // ldrb r3, [r4, r0]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x1c
    // lsl r3, r3, #1
    // add r3, r4, r3
    // strh r2, [r3, r1]
    // add r2, r1, #0
    // add r2, #8
    // ldrb r6, [r4, r0]
    // add r5, r4, r2
    // lsl r2, r6, #0x1c
    // lsl r6, r6, #0x18
    // lsr r6, r6, #0x1c
    // add r7, r4, r6
    // add r6, r1, #0
    // lsr r3, r2, #0x1c
    // add r6, #8
    // ldrb r2, [r5, r3]
    // ldrb r6, [r7, r6]
    // strb r6, [r5, r3]
    // ldrb r3, [r4, r0]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x1c
    // add r5, r4, r3
    // add r3, r1, #0
    // add r3, #8
    // strb r2, [r5, r3]
    // add r2, r1, #0
    // add r2, #0xc
    // ldrb r6, [r4, r0]
    // add r5, r4, r2
    // lsl r2, r6, #0x1c
    // lsl r6, r6, #0x18
    // lsr r6, r6, #0x1c
    // add r7, r4, r6
    // add r6, r1, #0
    // lsr r3, r2, #0x1c
    // add r6, #0xc
    // ldrb r2, [r5, r3]
    // ldrb r6, [r7, r6]
    // strb r6, [r5, r3]
    // ldrb r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // add r3, r4, r0
    // add r0, r1, #0
    // add r0, #0xc
    // strb r2, [r3, r0]
    // sub r1, #0x38
    // ldr r0, [r4, r1]
    // mov r2, #1
    // str r2, [r0, #0x38]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0208A8F0: .word 0x000007BD
    // TODO: decompile
}



void sub_0208A8F4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r2, #0
    // ldr r0, [r4]
    // mov r1, #2
    // add r3, r2, #0
    // bl ScheduleSetBgPosText
    // add r0, r4, #0
    // bl sub_0208DB1C
    // add r0, r4, #0
    // bl sub_0208A79C
    // mov r0, #0x43
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl thunk_Sprite_SetDrawFlag
    // add r0, r4, #0
    // bl sub_0208C068
    // mov r0, #9
    // lsl r0, r0, #6
    // ldrb r1, [r4, r0]
    // add r0, r0, #1
    // ldrb r0, [r4, r0]
    // cmp r1, r0
    // beq _0208A93A
    // ldr r0, _0208A948 ; =0x00000434
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl thunk_Sprite_SetDrawFlag
    // ldr r0, _0208A94C ; =0x00000428
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // pop {r4, pc}
    // nop
    // _0208A948: .word 0x00000434
    // _0208A94C: .word 0x00000428
    // TODO: decompile
}



void sub_0208A950(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0208DB1C
    // add r0, r4, #0
    // bl sub_0208A79C
    // add r0, r4, #0
    // bl sub_0208C068
    // ldr r0, _0208A9BC ; =0x000007BC
    // ldrsb r0, [r4, r0]
    // cmp r0, #1
    // bne _0208A9A4
    // add r0, r4, #0
    // bl sub_0208C208
    // mov r0, #0x43
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl thunk_Sprite_SetDrawFlag
    // mov r0, #9
    // lsl r0, r0, #6
    // ldrb r1, [r4, r0]
    // add r0, r0, #1
    // ldrb r0, [r4, r0]
    // cmp r1, r0
    // beq _0208A996
    // ldr r0, _0208A9C0 ; =0x00000434
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl thunk_Sprite_SetDrawFlag
    // ldr r0, [r4]
    // mov r1, #2
    // mov r2, #3
    // mov r3, #0
    // bl ScheduleSetBgPosText
    // pop {r4, pc}
    // add r0, r4, #0
    // bl sub_0208C0E8
    // mov r2, #3
    // add r3, r2, #0
    // ldr r0, [r4]
    // mov r1, #2
    // add r3, #0xfd
    // bl ScheduleSetBgPosText
    // pop {r4, pc}
    // nop
    // _0208A9BC: .word 0x000007BC
    // _0208A9C0: .word 0x00000434
    // TODO: decompile
}



void sub_0208A9C4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0208AA8C ; =0x000007BE
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _0208A9DA
    // cmp r0, #1
    // beq _0208AA32
    // cmp r0, #2
    // beq _0208AA5E
    // b _0208AA86
    // mov r2, #0
    // ldr r0, [r4]
    // mov r1, #5
    // add r3, r2, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r4]
    // mov r1, #5
    // mov r2, #3
    // mov r3, #0
    // bl ScheduleSetBgPosText
    // ldr r0, _0208AA90 ; =0x00000428
    // mov r1, #3
    // ldr r0, [r4, r0]
    // bl Sprite_SetPriority
    // ldr r0, _0208AA90 ; =0x00000428
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl thunk_Sprite_SetPaletteOverride
    // mov r0, #0x75
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x5d
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x89
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _0208AA94 ; =0x000007C5
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r1, #1
    // sub r0, r0, #7
    // strb r1, [r4, r0]
    // b _0208AA86
    // ldr r0, [r4]
    // mov r1, #5
    // bl Bg_GetYpos
    // cmp r0, #0x48
    // ldr r0, [r4]
    // blt _0208AA52
    // mov r1, #5
    // mov r2, #3
    // mov r3, #0x48
    // bl ScheduleSetBgPosText
    // ldr r0, _0208AA8C ; =0x000007BE
    // mov r1, #2
    // strb r1, [r4, r0]
    // b _0208AA86
    // mov r1, #5
    // mov r2, #4
    // mov r3, #0x24
    // bl ScheduleSetBgPosText
    // b _0208AA86
    // mov r0, #5
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, _0208AA98 ; =0x0000050C
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0208AB58
    // ldr r0, _0208AA8C ; =0x000007BE
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0208AA8C: .word 0x000007BE
    // _0208AA90: .word 0x00000428
    // _0208AA94: .word 0x000007C5
    // _0208AA98: .word 0x0000050C
    // TODO: decompile
}



void sub_0208AA9C(void) {
    // push {r4, lr}
    // ldr r1, _0208AB50 ; =0x000007BE
    // add r4, r0, #0
    // ldrb r0, [r4, r1]
    // cmp r0, #0
    // beq _0208AAB2
    // cmp r0, #1
    // beq _0208AAE2
    // cmp r0, #2
    // beq _0208AB0E
    // b _0208AB4A
    // mov r2, #0
    // add r0, r1, #6
    // strb r2, [r4, r0]
    // add r0, r1, #7
    // strb r2, [r4, r0]
    // mov r0, #0x89
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r0, #0x10
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x89
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r0, #0x20
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r4, #0
    // bl sub_0208C2A0
    // ldr r0, _0208AB50 ; =0x000007BE
    // mov r1, #1
    // strb r1, [r4, r0]
    // b _0208AB4A
    // ldr r0, [r4]
    // mov r1, #5
    // bl Bg_GetYpos
    // cmp r0, #0
    // ldr r0, [r4]
    // bgt _0208AB02
    // mov r1, #5
    // mov r2, #3
    // mov r3, #0
    // bl ScheduleSetBgPosText
    // ldr r0, _0208AB50 ; =0x000007BE
    // mov r1, #2
    // strb r1, [r4, r0]
    // b _0208AB4A
    // mov r1, #5
    // add r2, r1, #0
    // mov r3, #0x24
    // bl ScheduleSetBgPosText
    // b _0208AB4A
    // mov r0, #0x75
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x5d
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x89
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0208AB54 ; =0x00000428
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetPriority
    // ldr r0, _0208AB54 ; =0x00000428
    // mov r1, #2
    // ldr r0, [r4, r0]
    // bl thunk_Sprite_SetPaletteOverride
    // ldr r0, _0208AB50 ; =0x000007BE
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0208AB50: .word 0x000007BE
    // _0208AB54: .word 0x00000428
    // TODO: decompile
}



void sub_0208AB58(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0208ACC4 ; =0x000007C4
    // add r4, r1, #0
    // add r1, r0, #1
    // ldrb r7, [r5, r0]
    // ldrb r6, [r5, r1]
    // cmp r4, #1
    // bne _0208AB80
    // add r0, r7, #0
    // mov r1, #3
    // bl _s32_div_f
    // cmp r1, #2
    // beq _0208AB94
    // ldr r0, _0208ACC4 ; =0x000007C4
    // ldrb r1, [r5, r0]
    // add r1, r1, #1
    // strb r1, [r5, r0]
    // b _0208AC34
    // mov r2, #0
    // mvn r2, r2
    // cmp r4, r2
    // bne _0208ABA0
    // add r0, r7, #0
    // mov r1, #3
    // bl _s32_div_f
    // cmp r1, #0
    // bne _0208AB96
    // b _0208ACC0
    // ldr r0, _0208ACC4 ; =0x000007C4
    // ldrb r1, [r5, r0]
    // sub r1, r1, #1
    // strb r1, [r5, r0]
    // b _0208AC34
    // cmp r4, #3
    // bne _0208ABD4
    // cmp r7, #6
    // blo _0208ABCE
    // add r2, r6, #1
    // lsl r1, r2, #3
    // add r1, r2, r1
    // add r2, r0, #2
    // ldrb r2, [r5, r2]
    // cmp r1, r2
    // bge _0208AC34
    // add r1, r0, #1
    // ldrb r1, [r5, r1]
    // add r2, r1, #1
    // add r1, r0, #1
    // strb r2, [r5, r1]
    // ldrb r0, [r5, r0]
    // mov r1, #3
    // bl _s32_div_f
    // ldr r0, _0208ACC4 ; =0x000007C4
    // strb r1, [r5, r0]
    // b _0208AC34
    // add r1, r7, #3
    // strb r1, [r5, r0]
    // b _0208AC34
    // sub r1, r2, #2
    // cmp r4, r1
    // bne _0208AC02
    // cmp r7, #2
    // bhi _0208ABFC
    // cmp r6, #0
    // beq _0208AC34
    // add r1, r0, #1
    // ldrb r1, [r5, r1]
    // sub r2, r1, #1
    // add r1, r0, #1
    // strb r2, [r5, r1]
    // ldrb r0, [r5, r0]
    // mov r1, #3
    // bl _s32_div_f
    // ldr r0, _0208ACC4 ; =0x000007C4
    // add r1, r1, #6
    // strb r1, [r5, r0]
    // b _0208AC34
    // sub r1, r7, #3
    // strb r1, [r5, r0]
    // b _0208AC34
    // cmp r4, #9
    // bne _0208AC20
    // add r2, r6, #1
    // lsl r1, r2, #3
    // add r1, r2, r1
    // add r2, r0, #2
    // ldrb r2, [r5, r2]
    // cmp r1, r2
    // bge _0208AC34
    // add r1, r0, #1
    // ldrb r1, [r5, r1]
    // add r0, r0, #1
    // add r1, r1, #1
    // strb r1, [r5, r0]
    // b _0208AC34
    // sub r2, #8
    // cmp r4, r2
    // bne _0208AC34
    // cmp r6, #0
    // beq _0208AC34
    // add r1, r0, #1
    // ldrb r1, [r5, r1]
    // add r0, r0, #1
    // sub r1, r1, #1
    // strb r1, [r5, r0]
    // ldr r0, _0208ACC4 ; =0x000007C4
    // ldrb r1, [r5, r0]
    // cmp r7, r1
    // bne _0208AC44
    // add r0, r0, #1
    // ldrb r0, [r5, r0]
    // cmp r6, r0
    // beq _0208AC56
    // cmp r4, #9
    // beq _0208AC56
    // mov r0, #8
    // mvn r0, r0
    // cmp r4, r0
    // beq _0208AC56
    // ldr r0, _0208ACC8 ; =0x000005DC
    // bl PlaySE
    // ldr r1, _0208ACC4 ; =0x000007C4
    // add r0, r5, #0
    // ldrb r1, [r5, r1]
    // bl sub_0208ACDC
    // ldr r1, _0208ACCC ; =0x000007C7
    // strb r0, [r5, r1]
    // add r0, r5, #0
    // bl sub_0208C380
    // ldr r0, _0208ACD0 ; =0x000007C5
    // ldrb r0, [r5, r0]
    // cmp r6, r0
    // beq _0208AC78
    // add r0, r5, #0
    // bl sub_0208C320
    // add r0, r5, #0
    // bl sub_0208D7C4
    // ldr r0, _0208ACD0 ; =0x000007C5
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // ldr r0, _0208ACD4 ; =0x00000504
    // beq _0208AC92
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // b _0208AC9A
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, _0208ACD0 ; =0x000007C5
    // ldrb r1, [r5, r0]
    // add r0, r0, #1
    // ldrb r0, [r5, r0]
    // add r2, r1, #1
    // lsl r1, r2, #3
    // add r1, r2, r1
    // cmp r1, r0
    // ldr r0, _0208ACD8 ; =0x00000508
    // bge _0208ACB8
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0208ACC4: .word 0x000007C4
    // _0208ACC8: .word 0x000005DC
    // _0208ACCC: .word 0x000007C7
    // _0208ACD0: .word 0x000007C5
    // _0208ACD4: .word 0x00000504
    // _0208ACD8: .word 0x00000508
    // TODO: decompile
}



void sub_0208ACDC(void) {
    // push {r4, r5, r6, r7}
    // ldr r2, _0208AD30 ; =0x000007C5
    // mov r6, #0
    // ldrb r3, [r0, r2]
    // add r4, r6, #0
    // lsl r2, r3, #3
    // add r2, r3, r2
    // add r1, r1, r2
    // lsl r1, r1, #0x18
    // lsr r5, r1, #0x18
    // mov r1, #0xa1
    // mov r2, #1
    // lsl r1, r1, #2
    // mov r3, #0x1f
    // add r7, r4, #0
    // and r7, r3
    // add r3, r2, #0
    // lsl r3, r7
    // lsr r7, r4, #5
    // lsl r7, r7, #2
    // add r7, r0, r7
    // ldr r7, [r7, r1]
    // tst r3, r7
    // beq _0208AD1E
    // cmp r5, r6
    // bne _0208AD18
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // pop {r4, r5, r6, r7}
    // bx lr
    // add r3, r6, #1
    // lsl r3, r3, #0x18
    // lsr r6, r3, #0x18
    // add r3, r4, #1
    // lsl r3, r3, #0x10
    // lsr r4, r3, #0x10
    // cmp r4, #0x50
    // blo _0208ACF6
    // mov r0, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // nop
    // _0208AD30: .word 0x000007C5
    // TODO: decompile
}



void sub_0208AD34(void) {
}



u8 sub_0208AD54(void) {
}



u8 sub_0208AD58(void) {
}



u8 sub_0208AD5C(void) {
}



u8 sub_0208AD60(void) {
}



void Pokemon_GetStatusIconId(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r1, #MON_DATA_STATUS
    // mov r2, #0
    // bl GetMonData
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #MON_DATA_HP
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _0208AD84
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // mov r0, #MON_STATUS_PSN_MASK|MON_STATUS_TOX_MASK
    // tst r0, r4
    // beq _0208AD8E
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // mov r0, #MON_STATUS_SLP_MASK
    // add r1, r4, #0
    // tst r1, r0
    // beq _0208AD9A
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // mov r1, #MON_STATUS_BRN_MASK
    // tst r1, r4
    // beq _0208ADA4
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r1, #MON_STATUS_FRZ_MASK
    // tst r1, r4
    // beq _0208ADAE
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // mov r1, #MON_STATUS_PRZ_MASK
    // tst r1, r4
    // beq _0208ADB6
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void sub_0208ADB8(void) {
}



void sub_0208ADCC(void) {
    // ldr r3, _0208ADD4 ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _0208ADD8 ; =_021038D4
    // bx r3
    // nop
    // _0208ADD4: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0208ADD8: .word _021038D4
    // TODO: decompile
}



void sub_0208ADDC(void) {
    // push {r3, lr}
    // ldr r0, _0208AE00 ; =_021038D4
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _0208ADFE
    // ldr r0, _0208AE04 ; =_021038AC
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #1
    // bne _0208ADFA
    // mov r0, #4
    // pop {r3, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, pc}
    // _0208AE00: .word _021038D4
    // _0208AE04: .word _021038AC
    // TODO: decompile
}



void sub_0208AE08(void) {
    // push {r3, lr}
    // ldr r0, _0208AE3C ; =_021038D4
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _0208AE38
    // ldr r0, _0208AE40 ; =_021038B0
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #1
    // bne _0208AE26
    // mov r0, #4
    // pop {r3, pc}
    // ldr r0, _0208AE44 ; =_021038AC
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #1
    // bne _0208AE34
    // mov r0, #5
    // pop {r3, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, pc}
    // nop
    // _0208AE3C: .word _021038D4
    // _0208AE40: .word _021038B0
    // _0208AE44: .word _021038AC
    // TODO: decompile
}



void sub_0208AE48(void) {
    // push {r3, lr}
    // ldr r0, _0208AE7C ; =_021038D4
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _0208AE78
    // ldr r0, _0208AE80 ; =_021038B4
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #1
    // bne _0208AE66
    // mov r0, #4
    // pop {r3, pc}
    // ldr r0, _0208AE84 ; =_021038AC
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #1
    // bne _0208AE74
    // mov r0, #5
    // pop {r3, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, pc}
    // nop
    // _0208AE7C: .word _021038D4
    // _0208AE80: .word _021038B4
    // _0208AE84: .word _021038AC
    // TODO: decompile
}



void sub_0208AE88(void) {
    // push {r3, lr}
    // ldr r0, _0208AEAC ; =_021038B4
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #1
    // bne _0208AE98
    // mov r0, #0
    // pop {r3, pc}
    // ldr r0, _0208AEB0 ; =_021038AC
    // bl TouchscreenHitbox_TouchNewIsIn
    // cmp r0, #1
    // bne _0208AEA6
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, pc}
    // _0208AEAC: .word _021038B4
    // _0208AEB0: .word _021038AC
    // TODO: decompile
}



void sub_0208AEB4(void) {
    // ldr r3, _0208AEBC ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _0208AEC0 ; =_021038B8
    // bx r3
    // nop
    // _0208AEBC: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0208AEC0: .word _021038B8
    // TODO: decompile
}



void sub_0208AEC4(void) {
    // ldr r3, _0208AECC ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _0208AED0 ; =_021039E8
    // bx r3
    // nop
    // _0208AECC: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0208AED0: .word _021039E8
    // TODO: decompile
}



void sub_0208AED4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0208AF00 ; =0x00000428
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0208AF04 ; =0x0000042C
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // bl sub_0208BCB4
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_0208AF08
    // mov r0, #9
    // pop {r4, pc}
    // nop
    // _0208AF00: .word 0x00000428
    // _0208AF04: .word 0x0000042C
    // TODO: decompile
}



void sub_0208AF08(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #1
    // bne _0208AF34
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // mov r3, #0x12
    // bl sub_020196E8
    // ldr r0, _0208AF6C ; =0x00000448
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_0208DC68
    // pop {r4, pc}
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // ldrh r1, [r1, #0x18]
    // cmp r1, #0
    // beq _0208AF5C
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // mov r2, #0
    // mov r3, #0x12
    // bl sub_020196E8
    // ldr r0, _0208AF6C ; =0x00000448
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // b _0208AF60
    // bl sub_0208AF70
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0208DC68
    // pop {r4, pc}
    // nop
    // _0208AF6C: .word 0x00000448
    // TODO: decompile
}



void sub_0208AF70(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0x12
    // str r0, [sp]
    // mov r0, #0x11
    // str r0, [sp, #4]
    // mov r1, #6
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r4]
    // ldr r2, _0208AF9C ; =0x00003006
    // mov r3, #0
    // bl FillBgTilemapRect
    // ldr r0, [r4]
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _0208AF9C: .word 0x00003006
    // TODO: decompile
}



void sub_0208AFA0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldrb r0, [r0, #0x12]
    // cmp r0, #1
    // beq _0208AFE6
    // cmp r1, #1
    // bne _0208AFCE
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #2
    // mov r2, #1
    // mov r3, #0x10
    // bl sub_020196E8
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_0208DD20
    // pop {r4, pc}
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #3
    // mov r2, #1
    // mov r3, #0x10
    // bl sub_020196E8
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0208DD20
    // pop {r4, pc}
    // TODO: decompile
}



void sub_0208AFE8(void) {
    // push {r3, r4, r5, r6}
    // ldr r5, _0208B040 ; =0x000007C8
    // add r4, r0, #0
    // strb r2, [r4, r5]
    // add r0, r5, #1
    // strb r3, [r4, r0]
    // add r2, sp, #0
    // ldrb r3, [r2, #0x10]
    // add r0, r5, #2
    // strb r3, [r4, r0]
    // ldrb r3, [r2, #0x14]
    // add r0, r5, #3
    // strb r3, [r4, r0]
    // add r0, r5, #4
    // ldrb r3, [r4, r0]
    // mov r0, #0xf
    // ldrb r6, [r2, #0x18]
    // bic r3, r0
    // mov r0, #0xf
    // and r6, r0
    // orr r6, r3
    // add r3, r5, #4
    // strb r6, [r4, r3]
    // ldrb r2, [r2, #0x1c]
    // ldrb r3, [r4, r3]
    // mov r6, #0xf0
    // lsl r2, r2, #0x1c
    // bic r3, r6
    // lsr r2, r2, #0x18
    // orr r3, r2
    // add r2, r5, #4
    // strb r3, [r4, r2]
    // add r2, r5, #5
    // strb r1, [r4, r2]
    // mov r2, #0
    // add r1, r5, #6
    // strb r2, [r4, r1]
    // add r1, sp, #0x20
    // ldrb r2, [r1]
    // add r1, r5, #7
    // strb r2, [r4, r1]
    // pop {r3, r4, r5, r6}
    // bx lr
    // nop
    // _0208B040: .word 0x000007C8
    // TODO: decompile
}



void sub_0208B044(void) {
    // push {lr}
    // sub sp, #0x14
    // mov r2, #9
    // str r2, [sp]
    // mov r2, #4
    // str r2, [sp, #4]
    // mov r2, #1
    // str r2, [sp, #8]
    // mov r2, #0
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #6
    // mov r2, #0x17
    // mov r3, #0x14
    // bl sub_0208AFE8
    // add sp, #0x14
    // pop {pc}
    // TODO: decompile
}



void sub_0208B068(void) {
}



void sub_0208B08C(void) {
}



void sub_0208B0B0(void) {
    // push {lr}
    // sub sp, #0x14
    // cmp r1, #0
    // bne _0208B0D6
    // mov r1, #6
    // str r1, [sp]
    // mov r3, #3
    // str r3, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // mov r3, #0
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // mov r2, #0x18
    // mov r3, #5
    // bl sub_0208AFE8
    // add sp, #0x14
    // pop {pc}
    // mov r1, #6
    // str r1, [sp]
    // mov r3, #3
    // str r3, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // mov r3, #0
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // mov r2, #0x18
    // mov r3, #0xd
    // bl sub_0208AFE8
    // add sp, #0x14
    // pop {pc}
    // TODO: decompile
}



void sub_0208B0F4(void) {
    // push {lr}
    // sub sp, #0x14
    // mov r2, #6
    // str r2, [sp]
    // mov r2, #4
    // str r2, [sp, #4]
    // mov r2, #1
    // str r2, [sp, #8]
    // mov r2, #0
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // mov r1, #5
    // mov r2, #0x1a
    // mov r3, #0x1d
    // bl sub_0208AFE8
    // add sp, #0x14
    // pop {pc}
    // TODO: decompile
}



void sub_0208B118(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // mov r1, #0
    // mvn r1, r1
    // add r4, r0, #0
    // bl sub_0208A2E0
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0208B140
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // mov r1, #5
    // ldr r0, [r4, r0]
    // mov r2, #0x18
    // add r3, r1, #0
    // bl sub_020196E8
    // b _0208B162
    // mov r0, #5
    // str r0, [sp]
    // mov r1, #6
    // str r1, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, [r4]
    // mov r2, #1
    // mov r3, #0x18
    // bl FillBgTilemapRect
    // ldr r0, [r4]
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_0208A2E0
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _0208B186
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #6
    // mov r2, #0x18
    // mov r3, #0xd
    // bl sub_020196E8
    // add sp, #0x10
    // pop {r4, pc}
    // mov r0, #0xd
    // str r0, [sp]
    // mov r1, #6
    // str r1, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, [r4]
    // mov r2, #1
    // mov r3, #0x18
    // bl FillBgTilemapRect
    // ldr r0, [r4]
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x10
    // pop {r4, pc}
    // TODO: decompile
}


