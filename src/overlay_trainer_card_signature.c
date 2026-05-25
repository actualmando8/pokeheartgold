/* Decompiled from asm/overlay_trainer_card_signature.s */
#include "global.h"

void TrainerCardSignature_Init(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r6, r0, #0
    // cmp r1, #0
    // beq _021E80D6
    // cmp r1, #1
    // bne _021E80D4
    // b _021E8216
    // b _021E8224
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_0200FBF4
    // mov r0, #1
    // mov r1, #0
    // bl sub_0200FBF4
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _021E822C ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _021E8230 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // mov r0, #3
    // mov r1, #0x27
    // lsl r2, r2, #6
    // bl Heap_Create
    // ldr r1, _021E8234 ; =0x00005CB0
    // add r0, r6, #0
    // mov r2, #0x27
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _021E8234 ; =0x00005CB0
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x27
    // bl BgConfig_Alloc
    // str r0, [r4]
    // mov r0, #0x5b
    // mov r1, #0x27
    // bl NARC_New
    // add r7, r0, #0
    // mov r0, #0x27
    // bl MessageFormat_New
    // str r0, [r4, #0x10]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xfc
    // mov r3, #0x27
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x14]
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r0, #1
    // bl TextFlags_SetCanABSpeedUpPrint
    // mov r0, #4
    // mov r1, #8
    // bl SetKeyRepeatTimers
    // bl ov52_021E83A4
    // ldr r0, [r4]
    // bl ov52_021E83C4
    // mov r0, #0x10
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x27
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // add r0, r6, #0
    // bl OverlayManager_GetArgs
    // bl Save_TrainerCard_Get
    // bl TrainerCard_GetSignature
    // ldr r1, _021E8238 ; =0x00005B98
    // str r0, [r4, r1]
    // add r0, r6, #0
    // bl OverlayManager_GetArgs
    // bl Save_GameStats_Get
    // str r0, [r4, #8]
    // add r0, r6, #0
    // bl OverlayManager_GetArgs
    // bl Save_PlayerData_GetOptionsAddr
    // str r0, [r4, #0xc]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov52_021E85DC
    // bl sub_020210BC
    // mov r0, #1
    // bl sub_02021148
    // ldr r0, _021E823C ; =ov52_021E837C
    // ldr r1, [r4]
    // bl Main_SetVBlankIntrCB
    // mov r0, #2
    // mov r1, #0x27
    // bl FontID_Alloc
    // add r0, r4, #0
    // bl ov52_021E84CC
    // bl ov52_021E86DC
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov52_021E870C
    // add r0, r4, #0
    // bl ov52_021E888C
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov52_021E89D4
    // mov r1, #0
    // mov r0, #0x38
    // add r2, r1, #0
    // bl Sound_SetSceneAndPlayBGM
    // ldr r2, _021E8240 ; =0x04000304
    // ldr r0, _021E8244 ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // add r0, r7, #0
    // bl NARC_Delete
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _021E8224
    // bl OverlayManager_GetData
    // mov r0, #0
    // str r0, [r5]
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021E822C: .word 0xFFFFE0FF
    // _021E8230: .word 0x04001000
    // _021E8234: .word 0x00005CB0
    // _021E8238: .word 0x00005B98
    // _021E823C: .word ov52_021E837C
    // _021E8240: .word 0x04000304
    // _021E8244: .word 0xFFFF7FFF
    // TODO: decompile
}



void TrainerCardSignature_Main(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // ldr r1, [r5]
    // add r4, r0, #0
    // cmp r1, #0
    // beq _021E8262
    // cmp r1, #1
    // beq _021E8270
    // cmp r1, #2
    // beq _021E828E
    // b _021E829A
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021E829A
    // mov r0, #1
    // str r0, [r5]
    // b _021E829A
    // mov r2, #0xc3
    // lsl r2, r2, #2
    // ldr r2, [r4, r2]
    // lsl r3, r2, #2
    // ldr r2, _021E82A4 ; =ov52_021E96C0
    // ldr r2, [r2, r3]
    // cmp r2, #0
    // beq _021E8284
    // blx r2
    // str r0, [r5]
    // ldr r0, _021E82A8 ; =0x00004318
    // add r0, r4, r0
    // bl ov52_021E921C
    // b _021E829A
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021E829A
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x3c]
    // bl SpriteList_RenderAndAnimateSprites
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _021E82A4: .word ov52_021E96C0
    // _021E82A8: .word 0x00004318
    // TODO: decompile
}



void TrainerCardSignature_Exit(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // bl OverlayManager_GetData
    // add r6, r0, #0
    // ldr r0, _021E8374 ; =0x00005B98
    // mov r1, #0x2d
    // lsl r1, r1, #4
    // ldr r0, [r6, r0]
    // ldr r1, [r6, r1]
    // bl ov52_021E9300
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0x5e
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl sub_0200AEB0
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl sub_0200AEB0
    // mov r0, #0x5f
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl sub_0200B0A8
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl sub_0200B0A8
    // mov r7, #0x5a
    // mov r4, #0
    // add r5, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r5, r7]
    // bl Destroy2DGfxResObjMan
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _021E82FC
    // ldr r0, [r6, #0x3c]
    // bl SpriteList_Delete
    // bl OamManager_Free
    // bl ObjCharTransfer_Destroy
    // bl ObjPlttTransfer_Destroy
    // add r0, r6, #0
    // bl ov52_021E8B94
    // mov r0, #2
    // bl FontID_Release
    // ldr r0, [r6]
    // bl ov52_021E85A0
    // bl sub_02021238
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r0, #0
    // bl TextFlags_SetCanABSpeedUpPrint
    // ldr r0, [r6, #0x14]
    // bl DestroyMsgData
    // ldr r0, [r6, #0x10]
    // bl MessageFormat_Delete
    // add r0, r6, #0
    // bl ov52_021E8568
    // ldr r0, [sp]
    // bl OverlayManager_FreeData
    // ldr r2, _021E8378 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0x27
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E8374: .word 0x00005B98
    // _021E8378: .word 0x04000304
    // TODO: decompile
}



void ov52_021E837C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl GF_RunVramTransferTasks
    // bl OamManager_ApplyAndResetBuffers
    // add r0, r4, #0
    // bl DoScheduledBgGpuUpdates
    // ldr r3, _021E839C ; =0x027E0000
    // ldr r1, _021E83A0 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // _021E839C: .word 0x027E0000
    // _021E83A0: .word 0x00003FF8
    // TODO: decompile
}



void ov52_021E83A4(void) {
}



void ov52_021E83C4(void) {
    // push {r4, r5, lr}
    // sub sp, #0x9c
    // ldr r5, _021E84B4 ; =ov52_021E94CC
    // add r3, sp, #0x8c
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _021E84B8 ; =ov52_021E9524
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E84BC ; =ov52_021E9540
    // add r3, sp, #0x54
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
    // ldr r5, _021E84C0 ; =ov52_021E955C
    // add r3, sp, #0x38
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
    // ldr r5, _021E84C4 ; =ov52_021E94EC
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _021E84C8 ; =ov52_021E9508
    // add r3, sp, #0
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
    // mov r1, #5
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x27
    // bl BG_ClearCharDataRange
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x27
    // bl BG_ClearCharDataRange
    // add sp, #0x9c
    // pop {r4, r5, pc}
    // nop
    // _021E84B4: .word ov52_021E94CC
    // _021E84B8: .word ov52_021E9524
    // _021E84BC: .word ov52_021E9540
    // _021E84C0: .word ov52_021E955C
    // _021E84C4: .word ov52_021E94EC
    // _021E84C8: .word ov52_021E9508
    // TODO: decompile
}



void ov52_021E84CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, _021E8558 ; =0x0000433D
    // mov r6, #0
    // add r5, r7, r0
    // mov r0, #0xf0
    // add r4, r7, #0
    // str r0, [sp]
    // mov r0, #8
    // mov r1, #0x27
    // bl String_New
    // str r0, [r4, #0x18]
    // ldrb r1, [r5]
    // ldr r0, [sp]
    // add r6, r6, #1
    // bic r1, r0
    // strb r1, [r5]
    // ldr r0, _021E855C ; =0x00004384
    // mov r1, #0
    // strh r1, [r4, r0]
    // add r4, r4, #4
    // add r5, #0x11
    // cmp r6, #5
    // blt _021E84DC
    // mov r0, #0x14
    // mov r1, #0x27
    // bl String_New
    // str r0, [r7, #0x2c]
    // mov r0, #0x28
    // mov r1, #0x27
    // bl String_New
    // str r0, [r7, #0x30]
    // mov r0, #0x50
    // mov r1, #0x27
    // bl String_New
    // str r0, [r7, #0x34]
    // ldr r0, _021E8560 ; =0x0000431A
    // mov r1, #0
    // strb r1, [r7, r0]
    // mov r0, #0xc3
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r7, r0]
    // ldr r0, [r7, #0x14]
    // ldr r2, [r7, #0x2c]
    // mov r1, #msg_0252_00012 ; DONE
    // bl ReadMsgDataIntoString
    // ldr r0, [r7, #0x14]
    // ldr r2, [r7, #0x30]
    // mov r1, #msg_0252_00009 ; Sign your autograph!
    // bl ReadMsgDataIntoString
    // mov r0, #0x27
    // bl YesNoPrompt_Create
    // ldr r1, _021E8564 ; =0x00005C9C
    // mov r2, #5
    // str r0, [r7, r1]
    // add r1, r1, #4
    // mov r0, #0
    // add r1, r7, r1
    // bl MIi_CpuClearFast
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E8558: .word 0x0000433D
    // _021E855C: .word 0x00004384
    // _021E8560: .word 0x0000431A
    // _021E8564: .word 0x00005C9C
    // TODO: decompile
}



void ov52_021E8568(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _021E859C ; =0x00005C9C
    // ldr r0, [r6, r0]
    // bl YesNoPrompt_Destroy
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, #0x18]
    // bl String_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #5
    // blt _021E8578
    // ldr r0, [r6, #0x34]
    // bl String_Delete
    // ldr r0, [r6, #0x30]
    // bl String_Delete
    // ldr r0, [r6, #0x2c]
    // bl String_Delete
    // pop {r4, r5, r6, pc}
    // nop
    // _021E859C: .word 0x00005C9C
    // TODO: decompile
}



void ov52_021E85A0(void) {
}



void ov52_021E85DC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r1, 0, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r5, 2, 4, 0);
    LoadFontPal1(0, (0x1a << 4), 0x27);
    LoadFontPal1(4, (0x1a << 4), 0x27);
    BG_ClearCharDataRange(1, 0x20, 0, 0x27);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r5, 3, r4, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r5, 5, r4, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r5, 4, r4, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r5, 6, r4, 5);
    Options_GetFrame(*((u32*)(r6 + 0xc)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r4, 0, 1, 0xa);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r4, 0, 0x1f, 0xb);
}



void ov52_021E86DC(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _021E8708 ; =ov52_021E94DC
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl ObjCharTransfer_Init
    // mov r0, #0x14
    // mov r1, #0x27
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add sp, #0x10
    // pop {r4, pc}
    // _021E8708: .word ov52_021E94DC
    // TODO: decompile
}



void ov52_021E870C(void) {
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    // add r1, #0x40
    G2dRenderer_Init(0x32, r5, 0x27);
    *((u32*)(r5 + 0x3c)) = r0;
    // add r0, #0x40
    G2dRenderer_SetSubSurfaceCoords(r5, 0, (1 << 0x14));
    Create2DGfxResObjMan(2, 0, 0x27);
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5, r0]
    AddCharResObjFromOpenNarc((0x5a << 2), r7, 7, 1);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    AddPlttResObjFromOpenNarc(0x27, r7, 1, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    AddCellOrAnimResObjFromOpenNarc(0x27, r7, 8, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    AddCellOrAnimResObjFromOpenNarc(0x27, r7, 9, 1);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    AddCharResObjFromOpenNarc(0x27, r7, 7, 1);
    // str r0, [r5, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x1c
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    AddPlttResObjFromOpenNarc(0x27, r7, 1, 0);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    AddCellOrAnimResObjFromOpenNarc(0x27, r7, 8, 1);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    AddCellOrAnimResObjFromOpenNarc(0x27, r7, 9, 1);
    // str r0, [r5, r1]
    // sub r1, #0x1c
    // ldr r0, [r5, r1]
    sub_0200ACF0((0x65 << 2));
    // ldr r0, [r5, r0]
    sub_0200ACF0((0x62 << 2));
    // ldr r0, [r5, r0]
    sub_0200AF94((0x5f << 2));
    // ldr r0, [r5, r0]
    sub_0200AF94((0x63 << 2));
}



void ov52_021E888C(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r0, [r4, r2]
    // str r0, [sp, #0x14]
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x18]
    // add r0, #8
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x1c]
    // add r0, #0xc
    // ldr r0, [r4, r0]
    // add r2, #0x30
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, r4, r2
    // str r1, [sp, #0x28]
    CreateSpriteResourcesHeader((0x5a << 2), 0, 0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [r4, r3]
    // str r2, [sp, #0x14]
    // ldr r2, [r4, r2]
    // str r2, [sp, #0x18]
    // add r2, #8
    // ldr r2, [r4, r2]
    // str r2, [sp, #0x1c]
    // add r2, #0xc
    // ldr r2, [r4, r2]
    // add r3, #0x54
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r4, r3
    CreateSpriteResourcesHeader(0, 1, 1, 1);
    // str r0, [sp, #0x2c]
    // add r1, r4, r0
    // str r1, [sp, #0x30]
    // add r0, #0x24
    // str r2, [sp, #0x3c]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // add r1, sp, #0x2c
    *((u16*)((1 << 0xc) + 0x20)) = 0;
    // add r0, r4, r0
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r1, [sp, #0x50]
    // str r1, [sp, #0x54]
    // add r0, sp, #0x2c
    // str r1, [sp, #0x58]
    Sprite_CreateAffine((0xaf << 0xc), 0x27, 0);
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    Sprite_SetAnimActiveFlag(1);
    // ldr r0, [r4, r0]
    Sprite_SetAnimCtrlSeq((0x25 << 4), 0);
    // ldr r0, [r4, r0]
    Sprite_SetPaletteOverride((0x25 << 4), 0);
    // ldr r0, [r4, r0]
    Sprite_SetPriority((0x25 << 4), 2);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}



void ov52_021E8994(void) {
    FontID_String_GetWidth(2, 0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // sub r4, r4, r3
    // add r3, r4, r3
    // asr r3, r3, #1
    AddTextPrinterParameterizedWithColor(r5, r7, r6, ((*((u8*)(r5 + 7)) << 3) >> 0x1f));
}



void ov52_021E89D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x28
    // mov r1, #0xb5
    // str r0, [sp, #0x10]
    // lsl r1, r1, #2
    // ldr r0, [r5]
    // add r1, r5, r1
    // mov r2, #0
    // mov r3, #2
    // bl AddWindowParameterized
    // mov r0, #0xb5
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #9
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #8
    // mov r1, #0xb1
    // lsl r1, r1, #2
    // str r0, [sp, #8]
    // mov r2, #1
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldr r0, [r5]
    // add r1, r5, r1
    // mov r3, #4
    // bl AddWindowParameterized
    // mov r0, #0xb1
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #0xc1
    // mov r1, #0xb9
    // str r0, [sp, #0x10]
    // lsl r1, r1, #2
    // ldr r0, [r5]
    // add r1, r5, r1
    // mov r2, #1
    // mov r3, #0x1a
    // bl AddWindowParameterized
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _021E8B84 ; =0x000E0702
    // mov r2, #1
    // str r0, [sp]
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // ldr r1, [r5, #0x2c]
    // add r0, r5, r0
    // mov r3, #2
    // bl ov52_021E8994
    // mov r1, #2
    // lsl r1, r1, #8
    // bl DC_FlushRange
    // mov r4, #0
    // ldr r0, _021E8B88 ; =0x00005B9C
    // str r4, [sp, #0x18]
    // add r7, r4, #0
    // add r6, r5, r0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xb9
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #4
    // mov r2, #2
    // add r3, r4, #0
    // str r6, [sp, #4]
    // bl sub_02013A50
    // mov r1, #1
    // add r0, r6, #0
    // lsl r1, r1, #8
    // bl DC_FlushRange
    // mov r2, #1
    // add r0, r6, #0
    // add r1, r7, #0
    // lsl r2, r2, #8
    // bl GX_LoadOBJ
    // mov r0, #1
    // lsl r0, r0, #8
    // add r7, r7, r0
    // ldr r0, [sp, #0x18]
    // add r4, r4, #4
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #2
    // blt _021E8A8A
    // mov r3, #2
    // str r3, [sp]
    // mov r0, #0x1c
    // str r0, [sp, #4]
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r3, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0xd1
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // add r1, r5, r1
    // mov r2, #1
    // bl AddWindowParameterized
    // ldr r1, [r5, #0x30]
    // mov r0, #1
    // mov r2, #0
    // bl FontID_String_GetWidth
    // add r4, r0, #0
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r3, #0xe0
    // sub r4, r3, r4
    // lsr r3, r4, #0x1f
    // add r3, r4, r3
    // ldr r0, _021E8B8C ; =0x00010200
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // mov r0, #0xbd
    // lsl r0, r0, #2
    // ldr r2, [r5, #0x30]
    // add r0, r5, r0
    // mov r1, #1
    // asr r3, r3, #1
    // bl AddTextPrinterParameterizedWithColor
    // mov r0, #0
    // str r0, [sp, #0x14]
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // mov r7, #1
    // mov r6, #3
    // add r4, r5, r0
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // add r1, r4, #0
    // mov r2, #4
    // mov r3, #5
    // bl AddWindowParameterized
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // add r7, #0x14
    // add r0, r0, #1
    // add r6, r6, #4
    // add r4, #0x10
    // str r0, [sp, #0x14]
    // cmp r0, #5
    // blt _021E8B32
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r2, _021E8B90 ; =0x000E0D0F
    // add r0, r5, r0
    // mov r1, #0
    // add r3, r5, #0
    // bl ov52_021E925C
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021E8B84: .word 0x000E0702
    // _021E8B88: .word 0x00005B9C
    // _021E8B8C: .word 0x00010200
    // _021E8B90: .word 0x000E0D0F
    // TODO: decompile
}



void ov52_021E8B94(void) {
    // add r5, r6, r0
    RemoveWindow(r5);
    // add r5, #0x10
    // add r0, r6, r0
    RemoveWindow((0xbd << 2));
    // add r0, r6, r0
    RemoveWindow((0xb9 << 2));
    // add r0, r6, r0
    RemoveWindow((0xb1 << 2));
    // add r0, r6, r0
    RemoveWindow((0xb5 << 2));
}



void ov52_021E8BD8(void) {
    // bx lr
    // TODO: decompile
}



void ov52_021E8BDC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // add r4, r0, #0
    // ldr r0, _021E8CA4 ; =ov52_021E94BA
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // add r1, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // beq _021E8C30
    // cmp r1, #0
    // bne _021E8C22
    // mov r0, #0xc3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _021E8C30
    // add r0, r4, #0
    // mov r1, #msg_0252_00010 ; Is this OK?
    // bl ov52_021E927C
    // mov r0, #0xc3
    // mov r1, #2
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // sub r0, #0xbc
    // add r0, r4, r0
    // mov r1, #1
    // bl ov52_021E8CDC
    // ldr r0, _021E8CA8 ; =0x000005DD
    // bl PlaySE
    // b _021E8C30
    // ldr r0, _021E8CAC ; =0x0000431A
    // strb r1, [r4, r0]
    // mov r0, #0x25
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ov52_021E8CBC
    // ldr r0, _021E8CB0 ; =ov52_021E94B2
    // bl TouchscreenHitbox_FindRectAtTouchHeld
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _021E8C44
    // add r0, r4, #0
    // bl ov52_021E9364
    // add r0, sp, #0
    // mov r1, #4
    // mov r2, #1
    // bl sub_02021280
    // cmp r0, #1
    // bne _021E8CA0
    // add r7, sp, #0
    // ldrh r3, [r7]
    // mov r1, #0
    // cmp r3, #0
    // ble _021E8C78
    // ldr r5, _021E8CB4 ; =0x0000431C
    // add r2, sp, #0
    // add r6, r5, #0
    // add r6, #8
    // ldrh r3, [r2, #2]
    // add r0, r4, r1
    // add r1, r1, #1
    // strb r3, [r0, r5]
    // ldrh r3, [r2, #4]
    // add r2, #8
    // strb r3, [r0, r6]
    // ldrh r3, [r7]
    // cmp r1, r3
    // blt _021E8C64
    // ldr r0, _021E8CB8 ; =0x0000432C
    // mov r2, #0xf0
    // ldrb r1, [r4, r0]
    // bic r1, r2
    // lsl r2, r3, #0x18
    // lsr r2, r2, #0x18
    // lsl r2, r2, #0x1c
    // lsr r2, r2, #0x18
    // orr r1, r2
    // strb r1, [r4, r0]
    // ldrb r3, [r4, r0]
    // mov r1, #0xf
    // bic r3, r1
    // add r1, r0, #0
    // sub r1, #0x12
    // ldrb r2, [r4, r1]
    // mov r1, #0xf
    // and r1, r2
    // orr r1, r3
    // strb r1, [r4, r0]
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // _021E8CA4: .word ov52_021E94BA
    // _021E8CA8: .word 0x000005DD
    // _021E8CAC: .word 0x0000431A
    // _021E8CB0: .word ov52_021E94B2
    // _021E8CB4: .word 0x0000431C
    // _021E8CB8: .word 0x0000432C
    // TODO: decompile
}



void ov52_021E8CBC(void) {
    // push {r3, lr}
    // ldr r2, _021E8CD8 ; =_021E94AC
    // cmp r1, #0
    // ldr r0, [r0]
    // bne _021E8CD0
    // ldrh r1, [r2, #4]
    // add r1, r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // pop {r3, pc}
    // ldrh r1, [r2, #4]
    // bl Sprite_SetAnimCtrlSeq
    // pop {r3, pc}
    // _021E8CD8: .word _021E94AC
    // TODO: decompile
}



void ov52_021E8CDC(void) {
    Sprite_SetAnimCtrlSeq(*((u32*)r0), 1);
    Sprite_SetAnimCtrlSeq(0);
}



void ov52_021E8CF4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov52_021E8BDC
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r2, _021E8D34 ; =0x000E0C0F
    // add r0, r5, r0
    // mov r1, #0
    // add r3, r5, #0
    // bl ov52_021E925C
    // add r0, r5, #0
    // bl ov52_021E9260
    // add r0, r5, #0
    // bl ov52_021E9218
    // ldr r2, _021E8D38 ; =0x0000432D
    // mov r0, #0xb1
    // lsl r0, r0, #2
    // add r1, r5, r2
    // add r2, #0x55
    // add r0, r5, r0
    // add r2, r5, r2
    // mov r3, #1
    // bl ov52_021E9158
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E8D34: .word 0x000E0C0F
    // _021E8D38: .word 0x0000432D
    // TODO: decompile
}



void ov52_021E8D3C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov52_021E8BD8
    // add r0, r4, #0
    // bl ov52_021E9218
    // ldr r2, _021E8D60 ; =0x0000432D
    // mov r0, #0xb1
    // lsl r0, r0, #2
    // add r1, r4, r2
    // add r2, #0x55
    // add r0, r4, r0
    // add r2, r4, r2
    // mov r3, #0
    // bl ov52_021E9158
    // pop {r4, pc}
    // _021E8D60: .word 0x0000432D
    // TODO: decompile
}



void ov52_021E8D64(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    *((u8*)(8 + 0x10)) = 0x19;
    *((u8*)(8 + 0x11)) = 6;
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(r1, 6);
}



void ov52_021E8D8C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x38]
    // add r4, r1, #0
    // bl ov52_021E92E8
    // cmp r0, #0
    // beq _021E8DB6
    // ldr r1, _021E8DC0 ; =0x00005C9C
    // ldr r0, [r5]
    // ldr r1, [r5, r1]
    // bl ov52_021E8D64
    // add r0, r5, #0
    // mov r1, #1
    // bl ov52_021E9488
    // mov r0, #0xc3
    // mov r1, #3
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add r0, r5, #0
    // bl ov52_021E8D3C
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _021E8DC0: .word 0x00005C9C
    // TODO: decompile
}



void ov52_021E8DC4(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _021E8E5C ; =0x00005C9C
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _021E8DDE
    // cmp r0, #2
    // beq _021E8E20
    // b _021E8E46
    // ldr r0, [r5, #8]
    // mov r1, #4
    // bl GameStats_AddScore
    // ldr r0, [r5, #8]
    // mov r1, #0x73
    // bl GameStats_Inc
    // mov r0, #0xb5
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // ldr r0, _021E8E5C ; =0x00005C9C
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_Reset
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x27
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // add sp, #0xc
    // mov r0, #2
    // pop {r4, r5, pc}
    // mov r0, #0xc3
    // mov r1, #4
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // sub r0, #0xbc
    // add r0, r5, r0
    // mov r1, #0
    // bl ov52_021E8CDC
    // mov r0, #0xb5
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // ldr r0, _021E8E5C ; =0x00005C9C
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_Reset
    // ldr r1, _021E8E60 ; =0x0000432C
    // mov r0, #0xf0
    // ldrb r2, [r5, r1]
    // bic r2, r0
    // add r0, r5, #0
    // strb r2, [r5, r1]
    // bl ov52_021E8D3C
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _021E8E5C: .word 0x00005C9C
    // _021E8E60: .word 0x0000432C
    // TODO: decompile
}



void ov52_021E8E64(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021E8ED8 ; =0x00005C9C
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _021E8E7C
    // cmp r0, #2
    // beq _021E8EB4
    // b _021E8ED4
    // mov r0, #0xc3
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // sub r0, #0x38
    // add r0, r5, r0
    // bl ClearFrameAndWindow2
    // ldr r0, _021E8ED8 ; =0x00005C9C
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_Reset
    // add r0, r5, #0
    // mov r1, #0
    // bl ov52_021E9488
    // mov r0, #0xb1
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // mov r0, #0xb1
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl CopyWindowToVram
    // b _021E8ED4
    // mov r0, #0xc3
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // sub r0, #0x38
    // add r0, r5, r0
    // bl ClearFrameAndWindow2
    // ldr r0, _021E8ED8 ; =0x00005C9C
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_Reset
    // add r0, r5, #0
    // mov r1, #0
    // bl ov52_021E9488
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _021E8ED8: .word 0x00005C9C
    // TODO: decompile
}



void ov52_021E8EDC(void) {
    // mov r1, #msg_0252_00011 ; Would you like to erase your autograph?
    ov52_021E927C();
    // str r1, [r5, r0]
    ov52_021E8D3C(r5, 5);
}



void ov52_021E8EFC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x38]
    // add r4, r1, #0
    // bl ov52_021E92E8
    // cmp r0, #0
    // beq _021E8F1E
    // mov r0, #0xc3
    // mov r1, #6
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // ldr r1, _021E8F28 ; =0x00005C9C
    // ldr r0, [r5]
    // ldr r1, [r5, r1]
    // bl ov52_021E8D64
    // add r0, r5, #0
    // bl ov52_021E8D3C
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _021E8F28: .word 0x00005C9C
    // TODO: decompile
}



void ov52_021E8F2C(void) {
    // ldr r4, [sp, #0x38]
    // mov ip, r1
    // str r0, [sp, #0x18]
    // ldr r3, [sp, #0x3c]
    // ldr r2, [sp, #0x40]
    // ldr r1, [sp, #0x44]
    // neg r0, r4
    // ldr r5, [sp, #0x30]
    // sub r5, r5, r0
    // add r6, r6, r0
    // str r5, [sp, #0x30]
    // sub r2, r2, r0
    // neg r0, r3
    // ldr r5, [sp, #0x34]
    // sub r5, r5, r0
    // add r7, r7, r0
    // str r5, [sp, #0x34]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x30]
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // mov r1, ip
    BlitBitmapRectToWindow(((r1 << 0x10) >> 0x10), ((r2 << 0x10) >> 0x10), ((r3 << 0x10) >> 0x10));
}



void ov52_021E8FAC(void) {
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x50]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x54]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x50]
    // str r3, [sp, #0x24]
    // ldr r0, [sp, #0x54]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x58]
    // ldr r0, [sp, #0x5c]
    // ldr r0, [sp, #0x50]
    // str r1, [r0]
    // ldr r0, [sp, #0x54]
    // str r1, [r0]
    // ldr r0, [sp, #0x20]
    // sub r0, r0, r4
    // str r0, [sp, #0x34]
    // bpl _021E8FF8
    // neg r0, r0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x24]
    // sub r7, r0, r5
    // bpl _021E9000
    // neg r7, r7
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x2c]
    // mvn r0, r0
    // str r0, [sp, #0x2c]
    // str r4, [sp, #0x38]
    // ldr r4, [sp, #0x20]
    // ldr r5, [sp, #0x24]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x2c]
    // mvn r0, r0
    // str r0, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r5, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    ov52_021E8F2C(4, r3, 0, 0);
    // ldr r0, [sp, #0x34]
    // asr r6, r0, #1
    // ldr r0, [sp, #0x38]
    // sub r6, r6, r7
    // bpl _021E906A
    // ldr r0, [sp, #0x34]
    // add r6, r6, r0
    // ldr r0, [sp, #0x2c]
    // add r5, r5, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r5, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    ov52_021E8F2C(4, 0, 0);
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x28]
    // mvn r0, r0
    // str r0, [sp, #0x28]
    // str r5, [sp, #0x30]
    // ldr r5, [sp, #0x24]
    // ldr r4, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x28]
    // mvn r0, r0
    // str r0, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r5, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    ov52_021E8F2C(4, 0, 0);
    // ldr r0, [sp, #0x30]
    // asr r6, r7, #1
    // ldr r0, [sp, #0x34]
    // sub r6, r6, r0
    // bpl _021E90F0
    // ldr r0, [sp, #0x28]
    // add r6, r6, r7
    // add r4, r4, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r5, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    ov52_021E8F2C(4, 0, 0);
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x50]
    // str r1, [r0]
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x54]
    // str r1, [r0]
}



void ov52_021E9124(void) {
    *((u16*)(r1 + 2)) = ((*((u8*)(r0 + 0x10)) << 0x18) >> 0x1c);
    // add r3, r0, r3
    // ldrb r3, [r3]
    // strb r3, [r1]
    // add r3, r0, r3
    *((u8*)(r1 + 1)) = *((u8*)(((*((u8*)(r0 + 0x10)) << 0x18) >> 0x1c) + 7));
    // add r0, #0x11
}



void ov52_021E9158(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r7, r0, #0
    // mov r0, #0
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r5, r1, #0
    // add r6, r2, #0
    // ldrb r0, [r5, #0x10]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // beq _021E91D2
    // ldrh r0, [r6, #2]
    // cmp r0, #0
    // beq _021E9188
    // ldrb r0, [r6]
    // sub r0, #0x20
    // str r0, [sp, #0x28]
    // ldrb r0, [r6, #1]
    // sub r0, #0x48
    // str r0, [sp, #0x24]
    // ldrb r0, [r5, #0x10]
    // mov r4, #0
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x1c
    // cmp r1, #0
    // ble _021E91D2
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // cmp r1, #0
    // ble _021E91D2
    // add r0, sp, #0x28
    // str r0, [sp]
    // add r0, sp, #0x24
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // ldrh r0, [r6, #2]
    // add r3, r5, r4
    // str r0, [sp, #0xc]
    // ldrb r1, [r5, #0x10]
    // ldrb r3, [r3, #8]
    // add r0, r7, #0
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // lsl r2, r1, #4
    // ldr r1, _021E9214 ; =ov52_021E95A0
    // sub r3, #0x48
    // add r1, r1, r2
    // ldrb r2, [r5, r4]
    // sub r2, #0x20
    // bl ov52_021E8FAC
    // ldrb r0, [r5, #0x10]
    // add r4, r4, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // cmp r4, r0
    // blt _021E919C
    // ldr r0, [sp, #0x20]
    // add r5, #0x11
    // add r0, r0, #1
    // add r6, r6, #4
    // str r0, [sp, #0x20]
    // cmp r0, #5
    // blt _021E916E
    // ldr r0, [sp, #0x1c]
    // cmp r0, #0
    // beq _021E91F2
    // ldr r0, [sp, #0x18]
    // cmp r0, #0
    // beq _021E91F2
    // add r0, r7, #0
    // bl CopyWindowToVram
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // bl ov52_021E9124
    // mov r3, #0
    // mov r1, #0xf0
    // ldr r0, [sp, #0x10]
    // add r3, r3, #1
    // ldrb r2, [r0, #0x10]
    // bic r2, r1
    // strb r2, [r0, #0x10]
    // add r0, #0x11
    // str r0, [sp, #0x10]
    // cmp r3, #5
    // blt _021E91FE
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _021E9214: .word ov52_021E95A0
    // TODO: decompile
}



void ov52_021E9218(void) {
    // bx lr
    // TODO: decompile
}



void ov52_021E921C(void) {
    // ldrh r1, [r0]
    // add r1, #0x14
    // strh r1, [r0]
    // ldrh r2, [r0]
    // strh r1, [r0]
    // ldrh r0, [r0]
    GF_SinDeg(0);
    // mul r1, r0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // add r0, #0xf
    // orr r1, r0
    // add r0, sp, #0
    // strh r1, [r0]
    // add r0, sp, #0
    GX_LoadOBJPltt(0x1d, 0x18, 2);
}



void ov52_021E925C(void) {
    // bx lr
    // TODO: decompile
}



void ov52_021E9260(void) {
    // ldr r1, _021E9278 ; =0x0000431C
    // add r3, r0, r1
    // add r1, #0x11
    // add r2, r0, r1
    // mov r1, #0x11
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _021E926A
    // bx lr
    // _021E9278: .word 0x0000431C
    // TODO: decompile
}



void ov52_021E927C(void) {
    String_New(0x50, 0x27);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x14)), r6, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x10)), *((u32*)(r5 + 0x34)), r4);
    String_Delete(r4);
    // add r0, r5, r0
    FillWindowPixelBuffer((0xb5 << 2), 0xf);
    // add r0, r5, r0
    DrawFrameAndWindow2((0xb5 << 2), 0, 1, 0xa);
    Options_GetTextFrameDelay(*((u32*)(r5 + 0xc)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
    AddTextPrinterParameterized((0xb5 << 2), 1, *((u32*)(r5 + 0x34)), 0);
    *((u32*)(r5 + 0x38)) = r0;
}



void ov52_021E92E8(void) {
}



void ov52_021E9300(void) {
    // str r1, [sp]
    // strb r7, [r5]
    // ldr r0, [sp]
    // ldrb r1, [r0, r6]
    // and r0, r1
    // ldrb r1, [r5]
    // lsl r0, r4
    // orr r0, r1
    // strb r0, [r5]
    // ldr r0, [sp]
    // ldrb r0, [r0, r6]
    // asr r0, r0, #4
    // ldrb r0, [r5]
    // lsl r1, r2
    // orr r0, r1
    // strb r0, [r5]
    // strb r0, [r5]
    GF_AssertFail((6 << 0xa), 1, (0 + 1));
}



void ov52_021E9364(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _021E9410 ; =gSystem + 0x40
    // add r4, r0, #0
    // ldrh r0, [r1, #0x20]
    // ldr r3, _021E9414 ; =0x0000FFFF
    // cmp r0, r3
    // beq _021E93FE
    // ldrh r1, [r1, #0x22]
    // cmp r1, r3
    // beq _021E93FE
    // ldr r2, _021E9418 ; =0x00005CA8
    // ldr r5, [r4, r2]
    // cmp r5, r3
    // beq _021E93FE
    // add r1, r2, #4
    // ldr r1, [r4, r1]
    // cmp r1, r3
    // beq _021E93FE
    // cmp r5, r0
    // ble _021E9394
    // mov r1, #0
    // sub r3, r5, r0
    // mvn r1, r1
    // b _021E9398
    // sub r3, r0, r5
    // mov r1, #1
    // sub r0, r2, #6
    // strb r1, [r4, r0]
    // cmp r3, #3
    // blt _021E93CE
    // cmp r3, #0x28
    // bgt _021E93CE
    // ldr r0, _021E9410 ; =gSystem + 0x40
    // ldrh r2, [r0, #0x22]
    // ldr r0, _021E941C ; =0x00005CAC
    // ldr r1, [r4, r0]
    // cmp r1, r2
    // ble _021E93B8
    // sub r2, r1, r2
    // mov r1, #0
    // mvn r1, r1
    // b _021E93BC
    // sub r2, r2, r1
    // mov r1, #1
    // sub r0, #9
    // strb r1, [r4, r0]
    // cmp r2, #0x28
    // bgt _021E93FE
    // ldr r0, _021E9420 ; =0x00005CA0
    // add r0, r4, r0
    // bl ov52_021E9424
    // b _021E93FE
    // cmp r3, #0x28
    // bgt _021E93FE
    // ldr r0, _021E9410 ; =gSystem + 0x40
    // ldrh r2, [r0, #0x22]
    // ldr r0, _021E941C ; =0x00005CAC
    // ldr r1, [r4, r0]
    // cmp r1, r2
    // ble _021E93E6
    // sub r2, r1, r2
    // mov r1, #0
    // mvn r1, r1
    // b _021E93EA
    // sub r2, r2, r1
    // mov r1, #1
    // sub r0, #9
    // strb r1, [r4, r0]
    // cmp r2, #3
    // blt _021E93FE
    // cmp r2, #0x28
    // bgt _021E93FE
    // ldr r0, _021E9420 ; =0x00005CA0
    // add r0, r4, r0
    // bl ov52_021E9424
    // ldr r1, _021E9410 ; =gSystem + 0x40
    // ldr r0, _021E9418 ; =0x00005CA8
    // ldrh r2, [r1, #0x20]
    // str r2, [r4, r0]
    // ldrh r1, [r1, #0x22]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _021E9410: .word gSystem + 0x40
    // _021E9414: .word 0x0000FFFF
    // _021E9418: .word 0x00005CA8
    // _021E941C: .word 0x00005CAC
    // _021E9420: .word 0x00005CA0
    // TODO: decompile
}



void ov52_021E9424(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // bne _021E9448
    // mov r0, #1
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // bne _021E9448
    // ldr r0, _021E9484 ; =0x00000699
    // bl IsSEPlaying
    // cmp r0, #0
    // bne _021E9448
    // ldr r0, _021E9484 ; =0x00000699
    // bl PlaySE
    // mov r0, #0
    // ldrsb r1, [r4, r0]
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // mul r0, r1
    // bmi _021E9460
    // mov r0, #1
    // ldrsb r1, [r4, r0]
    // mov r0, #3
    // ldrsb r0, [r4, r0]
    // mul r0, r1
    // bpl _021E9470
    // ldr r0, _021E9484 ; =0x00000699
    // bl IsSEPlaying
    // cmp r0, #0
    // bne _021E9470
    // ldr r0, _021E9484 ; =0x00000699
    // bl PlaySE
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // strb r0, [r4]
    // mov r0, #3
    // ldrsb r0, [r4, r0]
    // strb r0, [r4, #1]
    // mov r0, #0
    // strb r0, [r4, #2]
    // strb r0, [r4, #3]
    // pop {r4, pc}
    // _021E9484: .word 0x00000699
    // TODO: decompile
}



void ov52_021E9488(void) {
    // ldr r0, [r0, r1]
    Sprite_SetDrawFlag(0);
    // ldr r0, [r0, r1]
    Sprite_SetDrawFlag(1);
}


