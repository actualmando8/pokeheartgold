/* Decompiled from asm/overlay_trainer_card_signature.s */
#include "global.h"

int TrainerCardSignature_Init(void) {
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    Heap_Create(3, 0x27, (0x04001000 << 6));
    OverlayManager_CreateAndGetData(r6, 0x00005CB0, 0x27);
    memset(0, 0x00005CB0);
    BgConfig_Alloc(0x27);
    // str r0, [r4]
    NARC_New(0x5b, 0x27);
    MessageFormat_New(0x27);
    *((u32*)(r4 + 0x10)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0xfc, 0x27);
    *((u32*)(r4 + 0x14)) = r0;
    TextFlags_SetCanTouchSpeedUpPrint(1);
    TextFlags_SetCanABSpeedUpPrint(1);
    SetKeyRepeatTimers(4, 8);
    ov52_021E83A4();
    ov52_021E83C4(*((u32*)r4));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    OverlayManager_GetArgs(r6);
    Save_TrainerCard_Get();
    TrainerCard_GetSignature();
    // str r0, [r4, r1]
    OverlayManager_GetArgs(r6, 0x00005B98);
    Save_GameStats_Get();
    *((u32*)(r4 + 8)) = r0;
    OverlayManager_GetArgs(r6);
    Save_PlayerData_GetOptionsAddr();
    *((u32*)(r4 + 0xc)) = r0;
    ov52_021E85DC(r4, r7);
    sub_020210BC();
    sub_02021148(1);
    Main_SetVBlankIntrCB(ov52_021E837C, *((u32*)r4));
    FontID_Alloc(2, 0x27);
    ov52_021E84CC(r4);
    ov52_021E86DC();
    ov52_021E870C(r4, r7);
    ov52_021E888C(r4);
    ov52_021E89D4(r4, r6);
    Sound_SetSceneAndPlayBGM(0x38, 0, 0);
    // and r0, r1
    // strh r0, [r2]
    NARC_Delete(r7, *((u16*)0x04000304), 0x04000304);
    // str r0, [r5]
    OverlayManager_GetData((*((u32*)r5) + 1));
    // str r0, [r5]
}




int TrainerCardSignature_Main(void) {
    OverlayManager_GetData();
    IsPaletteFadeFinished(*((u32*)r5));
    // str r0, [r5]
    // blx r2
    // str r0, [r5]
    // add r0, r4, r0
    ov52_021E921C(0x00004318, *((u32*)(ov52_021E96C0 + (*((u32*)(r4 + (0xc3 << 2))) << 2))), (*((u32*)(r4 + (0xc3 << 2))) << 2));
    IsPaletteFadeFinished();
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x3c)));
}




int TrainerCardSignature_Exit(void) {
    // str r0, [sp]
    OverlayManager_GetData();
    ov52_021E9300(*((u32*)(r0 + 0x00005B98)), *((u32*)(r0 + (0x2d << 4))));
    Main_SetVBlankIntrCB(0, 0);
    sub_0200AEB0(*((u32*)(r6 + (0x5e << 2))));
    sub_0200AEB0(*((u32*)(r6 + (0x62 << 2))));
    sub_0200B0A8(*((u32*)(r6 + (0x5f << 2))));
    sub_0200B0A8(*((u32*)(r6 + (0x63 << 2))));
    Destroy2DGfxResObjMan(*((u32*)(r6 + (0x5a << 2))));
    SpriteList_Delete(*((u32*)(r6 + 0x3c)));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    ov52_021E8B94(r6);
    FontID_Release(2);
    ov52_021E85A0(*((u32*)r6));
    sub_02021238();
    TextFlags_SetCanTouchSpeedUpPrint(0);
    TextFlags_SetCanABSpeedUpPrint(0);
    DestroyMsgData(*((u32*)(r6 + 0x14)));
    MessageFormat_Delete(*((u32*)(r6 + 0x10)));
    ov52_021E8568(r6);
    // ldr r0, [sp]
    OverlayManager_FreeData();
    // strh r0, [r2]
    Main_SetVBlankIntrCB(0, 0, 0x04000304);
    Heap_Destroy(0x27);
}




void ov52_021E837C(void) {
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    DoScheduledBgGpuUpdates(r4);
    // str r0, [r3, r1]
}




void ov52_021E83A4(void) {
}




void ov52_021E83C4(void) {
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x27);
    BG_ClearCharDataRange(4, 0x20, 0, 0x27);
}




void ov52_021E84CC(void) {
    // add r5, r7, r0
    // str r0, [sp]
    String_New(8, 0x27);
    *((u32*)(r4 + 0x18)) = r0;
    // ldr r0, [sp]
    // strb r1, [r5]
    // strh r1, [r4, r0]
    // add r5, #0x11
    String_New(0x14, 0x27);
    *((u32*)(r7 + 0x2c)) = r0;
    String_New(0x28, 0x27);
    *((u32*)(r7 + 0x30)) = r0;
    String_New(0x50, 0x27);
    *((u32*)(r7 + 0x34)) = r0;
    // strb r1, [r7, r0]
    // str r1, [r7, r0]
    // mov r1, #msg_0252_00012 ; DONE
    ReadMsgDataIntoString(*((u32*)(r7 + 0x14)), 1, *((u32*)(r7 + 0x2c)));
    // mov r1, #msg_0252_00009 ; Sign your autograph!
    ReadMsgDataIntoString(*((u32*)(r7 + 0x14)), *((u32*)(r7 + 0x30)));
    YesNoPrompt_Create(0x27);
    // str r0, [r7, r1]
    // add r1, r7, r1
    MIi_CpuClearFast(0, (0x00005C9C + 4), 5);
}




void ov52_021E8568(void) {
    YesNoPrompt_Destroy(*((u32*)(r0 + 0x00005C9C)));
    String_Delete(*((u32*)(r6 + 0x18)));
    String_Delete(*((u32*)(r6 + 0x34)));
    String_Delete(*((u32*)(r6 + 0x30)));
    String_Delete(*((u32*)(r6 + 0x2c)));
}




void ov52_021E85A0(void) {
}




void ov52_021E85DC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp]
    // str r0, [sp, #4]
}




void ov52_021E86DC(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(0x14, 0x27);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov52_021E870C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r1, #0x40
    // add r0, #0x40
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0xc
    // str r0, [sp, #0xc]
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0xc
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x1c
    // str r0, [sp, #0xc]
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // str r0, [r5, r1]
    // sub r1, #0x1c
}




void ov52_021E888C(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #8
    // str r0, [sp, #0x1c]
    // add r0, #0xc
    // add r2, #0x30
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, r4, r2
    // str r1, [sp, #0x28]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // str r2, [sp, #0x1c]
    // add r2, #0xc
    // add r3, #0x54
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r4, r3
    // str r0, [sp, #0x2c]
    // add r1, r4, r0
    // str r1, [sp, #0x30]
    // add r0, #0x24
    // str r2, [sp, #0x3c]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x44]
    // str r1, [sp, #0x48]
    // add r1, sp, #0x2c
    // add r0, r4, r0
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r1, [sp, #0x50]
    // str r1, [sp, #0x54]
    // add r0, sp, #0x2c
    // str r1, [sp, #0x58]
    // str r0, [r4, r1]
}




void ov52_021E8994(void) {
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // sub r4, r4, r3
    // add r3, r4, r3
    // asr r3, r3, #1
}




void ov52_021E89D4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)r0), (0xb5 << 2), 0, 2);
    // add r0, r5, r0
    FillWindowPixelBuffer((0xb5 << 2), 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)r5), (0xb1 << 2), 1, 4);
    // add r0, r5, r0
    FillWindowPixelBuffer((0xb1 << 2), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)r5), (0xb9 << 2), 1, 0x1a);
    // add r0, r5, r0
    FillWindowPixelBuffer((0xb9 << 2), 0);
    // str r0, [sp]
    // add r0, r5, r0
    ov52_021E8994((0xb9 << 2), *((u32*)(r5 + 0x2c)), 1, 2);
    DC_FlushRange((2 << 8));
    // str r4, [sp, #0x18]
    // add r6, r5, r0
    // str r0, [sp]
    // add r0, r5, r0
    // str r6, [sp, #4]
    sub_02013A50((0xb9 << 2), 4, 2, 0);
    DC_FlushRange(r6, (1 << 8));
    GX_LoadOBJ(r6, r7, (1 << 8));
    // add r7, r7, r0
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)r5), (0xbd << 2), 1, 2);
    FontID_String_GetWidth(1, *((u32*)(r5 + 0x30)), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0xbd << 2), 0);
    // str r1, [sp]
    // sub r4, r3, r4
    // add r3, r4, r3
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    // asr r3, r3, #1
    AddTextPrinterParameterizedWithColor((0xbd << 2), 1, *((u32*)(r5 + 0x30)), (r4 >> 0x1f));
    // str r0, [sp, #0x14]
    // add r4, r5, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r5), r4, 4, 5);
    FillWindowPixelBuffer(r4, 0);
    // ldr r0, [sp, #0x14]
    // add r7, #0x14
    // add r4, #0x10
    // str r0, [sp, #0x14]
    // add r0, r5, r0
    ov52_021E925C((0x9d << 2), 0, 0x000E0D0F, r5);
}




void ov52_021E8B94(void) {
    // add r5, r6, r0
    // add r5, #0x10
    // add r0, r6, r0
    // add r0, r6, r0
    // add r0, r6, r0
    // add r0, r6, r0
}




void ov52_021E8BD8(void) {
    // bx lr
    // TODO: decompile
}




void ov52_021E8BDC(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov52_021E94BA);
    // mvn r0, r0
    // mov r1, #msg_0252_00010 ; Is this OK?
    ov52_021E927C(r4, r0);
    // str r1, [r4, r0]
    // sub r0, #0xbc
    // add r0, r4, r0
    ov52_021E8CDC((0xc3 << 2), 1);
    PlaySE(0x000005DD);
    // strb r1, [r4, r0]
    // add r0, r4, r0
    ov52_021E8CBC((0x25 << 4));
    TouchscreenHitbox_FindRectAtTouchHeld(ov52_021E94B2);
    // mvn r1, r1
    ov52_021E9364(r4, 0);
    // add r0, sp, #0
    sub_02021280(4, 1);
    // add r7, sp, #0
    // add r2, sp, #0
    // add r6, #8
    // add r0, r4, r1
    // strb r3, [r0, r5]
    // add r2, #8
    // strb r3, [r0, r6]
    // strb r1, [r4, r0]
    // sub r1, #0x12
    // and r1, r2
    // strb r1, [r4, r0]
}




void ov52_021E8CBC(void) {
    Sprite_SetAnimCtrlSeq(*((u32*)r0), (*((u16*)(_021E94AC + 4)) + 1), _021E94AC);
    Sprite_SetAnimCtrlSeq(*((u16*)(r2 + 4)));
}




void ov52_021E8CDC(void) {
}




void ov52_021E8CF4(void) {
    ov52_021E8BDC();
    // add r0, r5, r0
    ov52_021E925C((0x9d << 2), 0, 0x000E0C0F, r5);
    ov52_021E9260(r5);
    ov52_021E9218(r5);
    // add r1, r5, r2
    // add r2, #0x55
    // add r0, r5, r0
    // add r2, r5, r2
    ov52_021E9158((0xb1 << 2), 0x0000432D, 1);
}




void ov52_021E8D3C(void) {
    ov52_021E8BD8();
    ov52_021E9218(r4);
    // add r1, r4, r2
    // add r2, #0x55
    // add r0, r4, r0
    // add r2, r4, r2
    ov52_021E9158((0xb1 << 2), 0x0000432D, 0);
}




void ov52_021E8D64(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // add r1, sp, #0
}




void ov52_021E8D8C(void) {
    ov52_021E92E8(*((u32*)(r0 + 0x38)));
    ov52_021E8D64(*((u32*)r5), *((u32*)(r5 + 0x00005C9C)));
    ov52_021E9488(r5, 1);
    // str r1, [r5, r0]
    ov52_021E8D3C(r5, 3);
}




void ov52_021E8DC4(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + 0x00005C9C)));
    GameStats_AddScore(*((u32*)(r5 + 8)), 4);
    GameStats_Inc(*((u32*)(r5 + 8)), 0x73);
    // add r0, r5, r0
    ClearFrameAndWindow2((0xb5 << 2), 1);
    YesNoPrompt_Reset(*((u32*)(r5 + 0x00005C9C)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r1, [r5, r0]
    // sub r0, #0xbc
    // add r0, r5, r0
    ov52_021E8CDC((0xc3 << 2), 0);
    // add r0, r5, r0
    ClearFrameAndWindow2((0xb5 << 2), 1);
    YesNoPrompt_Reset(*((u32*)(r5 + 0x00005C9C)));
    // strb r2, [r5, r1]
    ov52_021E8D3C(r5, 0x0000432C, (*((u8*)(r5 + 0x0000432C)) & ~(0xf0)));
}




void ov52_021E8E64(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + 0x00005C9C)));
    // str r1, [r5, r0]
    // sub r0, #0x38
    // add r0, r5, r0
    ClearFrameAndWindow2((0xc3 << 2), 1);
    YesNoPrompt_Reset(*((u32*)(r5 + 0x00005C9C)));
    ov52_021E9488(r5, 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0xb1 << 2), 2);
    // add r0, r5, r0
    CopyWindowToVram((0xb1 << 2));
    // str r1, [r5, r0]
    // sub r0, #0x38
    // add r0, r5, r0
    ClearFrameAndWindow2((0xc3 << 2), 1);
    YesNoPrompt_Reset(*((u32*)(r5 + 0x00005C9C)));
    ov52_021E9488(r5, 0);
}




void ov52_021E8EDC(void) {
    // mov r1, #msg_0252_00011 ; Would you like to erase your autograph?
    // str r1, [r5, r0]
}




void ov52_021E8EFC(void) {
    ov52_021E92E8(*((u32*)(r0 + 0x38)));
    // str r1, [r5, r0]
    ov52_021E8D64(*((u32*)r5), *((u32*)(r5 + 0x00005C9C)));
    ov52_021E8D3C(r5);
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
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x50]
    // str r1, [r0]
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x54]
    // str r1, [r0]
}




void ov52_021E9124(void) {
    // add r3, r0, r3
    // strb r3, [r1]
    // add r3, r0, r3
    // add r0, #0x11
}




void ov52_021E9158(void) {
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // sub r0, #0x20
    // str r0, [sp, #0x28]
    // sub r0, #0x48
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x28
    // str r0, [sp]
    // add r0, sp, #0x24
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r3, r5, r4
    // str r0, [sp, #0xc]
    // sub r3, #0x48
    // add r1, r1, r2
    // sub r2, #0x20
    ov52_021E8FAC(r0, ov52_021E95A0, *((u8*)(r1 + 0)), *((u8*)(r3 + 8)));
    // ldr r0, [sp, #0x20]
    // add r5, #0x11
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    CopyWindowToVram(r7);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    ov52_021E9124();
    // ldr r0, [sp, #0x10]
    *((u8*)(r0 + 0x10)) = (*((u8*)(r0 + 0x10)) & ~(0xf0));
    // add r0, #0x11
    // str r0, [sp, #0x10]
}




void ov52_021E9218(void) {
    // bx lr
    // TODO: decompile
}




void ov52_021E921C(void) {
    // add r1, #0x14
    // strh r1, [r0]
    // strh r1, [r0]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // add r0, #0xf
    // add r0, sp, #0
    // strh r1, [r0]
    // add r0, sp, #0
}




void ov52_021E925C(void) {
    // bx lr
    // TODO: decompile
}




void ov52_021E9260(void) {
    // add r3, r0, r1
    // add r1, #0x11
    // add r2, r0, r1
    // strb r0, [r2]
}




void ov52_021E927C(void) {
    // add r0, r5, r0
    // add r0, r5, r0
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r5, r0
}




void ov52_021E92E8(void) {
}




void ov52_021E9300(void) {
    // str r1, [sp]
    // strb r7, [r5]
    // ldr r0, [sp]
    // and r0, r1
    // lsl r0, r4
    // strb r0, [r5]
    // ldr r0, [sp]
    // asr r0, r0, #4
    // lsl r1, r2
    // strb r0, [r5]
    // strb r0, [r5]
}




void ov52_021E9364(void) {
    // sub r3, r5, r0
    // mvn r1, r1
    // sub r3, r0, r5
    // strb r1, [r4, r0]
    // sub r2, r1, r2
    // mvn r1, r1
    // sub r2, r2, r1
    // sub r0, #9
    // strb r1, [r4, r0]
    // add r0, r4, r0
    ov52_021E9424(0x00005CA0, 1, *((u16*)(gSystem + 0x22)), 0x0000FFFF);
    // sub r2, r1, r2
    // mvn r1, r1
    // sub r2, r2, r1
    // sub r0, #9
    // strb r1, [r4, r0]
    // add r0, r4, r0
    ov52_021E9424(0x00005CA0, 1, *((u16*)(gSystem + 0x22)));
    // str r2, [r4, r0]
    // str r1, [r4, r0]
}




void ov52_021E9424(void) {
    // ldrsb r0, [r4, r0]
    // ldrsb r0, [r4, r0]
    IsSEPlaying(0x00000699);
    PlaySE(0x00000699);
    // ldrsb r1, [r4, r0]
    // ldrsb r0, [r4, r0]
    // bmi _021E9460
    // ldrsb r1, [r4, r0]
    // ldrsb r0, [r4, r0]
    // bpl _021E9470
    IsSEPlaying(0x00000699);
    PlaySE(0x00000699);
    // ldrsb r0, [r4, r0]
    // strb r0, [r4]
    // ldrsb r0, [r4, r0]
    *((u8*)(r4 + 1)) = 3;
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 3)) = 0;
}




void ov52_021E9488(void) {
    // ldr r0, [r0, r1]
    // ldr r0, [r0, r1]
}



