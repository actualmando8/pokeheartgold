/* Decompiled from asm/overlay_108_021E8850.s */
#include "global.h"

void SafariDecoration_Init(void) {
    // str r0, [r4]
    // str r0, [r5]
}




void SafariDecoration_Exit(void) {
}




void SafariDecoration_Main(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E8920: ; jump table
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // add r0, r5, r0
}




void ov108_021E8968(void) {
    Save_SafariZone_Get(*((u32*)r1));
    *((u32*)(r5 + 0x20)) = r0;
    // add r2, #0x24
    SafariZone_CopyAreaSet(0, r5);
    Save_PlayerData_GetOptionsAddr(*((u32*)r4));
    Options_GetTextSpeed();
    *((u8*)(r5 + 0x18)) = r0;
    Options_GetFrame(r6);
    *((u8*)(r5 + 0x19)) = r0;
    MenuInputStateMgr_GetState(*((u32*)(r4 + 4)));
    *((u32*)(r5 + 0x10)) = r0;
    *((u32*)(r5 + 0x1c)) = r4;
    _s32_div_f(*((u8*)*((u32*)(r4 + 0x20))), 6);
    // strb r1, [r5, r0]
    _s32_div_f(*((u8*)*((u32*)(*((u32*)(r5 + 0x1c)) + 0x20))), 6);
    // strb r0, [r5, r1]
    Save_PlayerData_GetProfile(*((u32*)r4), (0x43 << 4));
    SafariZone_GetObjectUnlockLevel(*((u32*)(r5 + 0x20)));
    PlayerProfile_GetTrainerID(r6);
    // str r0, [sp, #4]
    PlayerProfile_GetTrainerGender(r6);
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r3, r5, r3
    ov108_021EA63C(*((u32*)r5), r7, ((r0 << 0x18) >> 0x18), 0x0000042D);
    // str r0, [r5, r1]
    *((u8*)(r5 + 0x1a)) = *((u8*)(r4 + 0x19));
    *((u8*)(r5 + 0x1a)) = 0;
    // add r0, r5, r0
    // add r0, #0x25
    // sub r1, r0, r1
    // strb r1, [r5, r0]
    // sub r0, #8
    _s32_div_f(*((u8*)(r5 + 0x00000435)), 6);
    // strb r0, [r5, r1]
    _s32_div_f(*((u8*)(r5 + (0x0000042E - 1))), 6);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    *((u16*)(*((u32*)(r5 + 0x1c)) + 0x1c)) = 0xff;
    Save_SysInfo_RTC_Get(*((u32*)r4), 0xff, *((u8*)(r5 + (0x43 << 4))));
    GF_RTC_GetTimeOfDayByHour(*((u32*)(r0 + 0x14)));
    // strb r0, [r5, r1]
    // strb r0, [r5, r1]
}




void ov108_021E8A88(void) {
    Heap_Free(*((u32*)(r0 + (0xcd << 2))));
    // add r2, #0x24
    SafariZone_SetAreaSet(*((u32*)(r4 + 0x20)), 0, r4);
    // strb r1, [r4, r0]
    // add r1, r2, r0
    // strb r1, [r0]
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)(r4 + 0x1c)) + 4)), *((u32*)(r4 + 0x10)), *((u8*)(r4 + 0x00000431)));
}




void ov108_021E8AD4(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    sub_0200FBF4(0, 0, 0x04001000);
    sub_0200FBF4(1, 0);
    sub_0200FBDC(0);
    sub_0200FBDC(1);
}




void ov108_021E8B24(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E8B3A: ; jump table
}




void ov108_021E8B68(void) {
}




void ov108_021E8BC0(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
}




void ov108_021E8C18(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov108_021E8C64(void) {
    // add r0, sp, #0
    // add r0, #0xfe
    // add r0, r1, r0
    // add r1, r2, r0
    // add r0, sp, #0
    // strb r2, [r0]
    // add r2, r3, r2
    // sub r2, r2, r3
    // ror r2, r5
    // add r2, r3, r2
    // add r1, r2, r1
    // sub r1, r1, r2
    // ror r1, r5
    // add r1, r2, r1
    // add r2, sp, #0
    // add r0, #0x24
    // add r0, sp, #0
}




void ov108_021E8CD4(void) {
    MI_CpuFill8(0, 0xf4);
    NNS_G3dInit();
    G3X_Init();
    G3X_InitMtxStack();
    // and r2, r1
    // strh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r1
    // strh r1, [r0]
    G3X_SetFog(0, 0, 0, 0);
    // str r0, [sp]
    G3X_SetClearColor(0, 0, 0x00007FFF, 0x3f);
    // str r0, [r1]
    *((u32*)(0x04000540 + 0x40)) = 0xBFFF0000;
    *((u32*)(r5 + 0x14)) = r4;
    // add r0, #0xf1
    // strb r6, [r0]
    NNS_GfdGetLnkTexVramManagerWorkSize(0x80, 0x04000540);
    Heap_Alloc(*((u32*)(r5 + 0x14)), r0);
    // add r1, #0xec
    // str r0, [r1]
    // str r0, [sp]
    // add r2, #0xec
    GF_3DVramMan_InitLinkedListTexVramManager((1 << 0x11), 0, *((u32*)r5), r6);
    NNS_GfdGetLnkPlttVramManagerWorkSize((1 << 8));
    Heap_Alloc(*((u32*)(r5 + 0x14)), r0);
    // add r1, #0xe8
    // str r0, [r1]
    // add r1, #0xe8
    GF_3DVramMan_InitLinkedListPlttVramManager((1 << 0xe), *((u32*)r5), r6, 1);
    HeapExp_FndInitAllocator((r5 + 4), r4, 0x20);
    NARC_New(0x28, r4);
    *((u32*)(r5 + 0x18)) = r0;
    NARC_New(0x6b, r4);
    *((u32*)(r5 + 0x1c)) = r0;
    NARC_New(0x6a, r4);
    *((u32*)(r5 + 0x20)) = r0;
    ov108_021E9230(r5, r4);
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r0, [r1]
}




void ov108_021E8E10(void) {
    Thunk_G3X_Reset();
    Camera_PushLookAtToNNSGlb();
    NNS_G3dGeFlushBuffer();
    // str r3, [r2]
    // add r1, #0x14
    // str r3, [r1]
    // str r0, [r2]
    // str r3, [r1]
    // add r0, #0xf0
    // add r0, #0xd8
    // add r4, #0x24
    ov108_021E9144(r4, 0x04000440, 0x04000440, 0);
    // str r1, [r0]
}




void ov108_021E8E60(void) {
    // add r1, #0xd8
    // add r1, #0x24
    // add r0, #0xe8
    // add r0, #0xec
}




void ov108_021E8EA4(void) {
    // add r1, #0xd8
    // add r1, #0x24
    // add r0, #0xf0
    // strb r1, [r0]
}




void ov108_021E8ED8(void) {
    // add r2, #0xf0
    // strb r1, [r2]
    // add r0, #0xf0
    Thunk_G3X_Reset(*((u8*)r0), r0);
    Camera_PushLookAtToNNSGlb();
    NNS_G3dGeFlushBuffer();
    // str r1, [r0]
}




void ov108_021E8F00(void) {
    // str r0, [sp, #4]
    // str r2, [sp]
    // ldr r3, [sp, #4]
    // str r1, [sp, #8]
    // add r5, #0x24
    GfGfxLoader_LoadFromOpenNarc(*((u32*)(r0 + 0x18)), *((u8*)r2), 0, *((u32*)(r3 + 0x14)));
    // ldr r1, [sp, #4]
    *((u32*)(r1 + 0x24)) = r0;
    NNS_G3dGetMdlSet();
    *((u32*)(r5 + 4)) = r0;
    // add r2, #8
    // add r1, r2, r1
    // add r0, r0, r1
    *((u32*)(r5 + 8)) = 0;
    NNS_G3dGetTex(*((u32*)r5), *((u32*)0), r0);
    *((u32*)(r5 + 0xc)) = r0;
    GF3dRender_AllocAndLoadTexResources();
    GF3dRender_BindModelSet(*((u32*)r5), *((u32*)(r5 + 0xc)));
    // add r0, #0x10
    NNS_G3dRenderObjInit(r5, *((u32*)(r5 + 8)));
    DC_FlushAll();
    // add r0, #0xb4
    // strh r1, [r0]
    // ldr r0, [sp, #4]
    // add r2, sp, #0x10
    NARC_ReadWholeMember(*((u32*)(r5 + 0x1c)), *((u8*)r4));
    // add r0, sp, #0x10
    // str r0, [sp, #0xc]
    // add r4, sp, #0x10
    // add r6, #0x64
    // add r7, #0xb6
    // mvn r0, r0
    // mov ip, r1
    // add r2, #0xb6
    // ldr r0, [sp, #4]
    // add r2, r6, r2
    // mov r3, ip
    ov108_021E9198(0, r5, (0x14 * *((u16*)r5)), *((u16*)r5));
    // add r1, #0xb6
    // add r1, r6, r1
    ov108_021E91F8(r5, (0x14 * *((u16*)r5)), *((u16*)r5));
    // strh r0, [r7]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r4, r1, r0
    // ldrsh r0, [r4, r0]
    _fflt((2 << 0xc), ov108_021EA9E4);
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #4]
    // add r1, #0xdc
    // str r0, [r1]
    // ldrsh r0, [r4, r0]
    _fflt((4 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #4]
    // add r1, #0xe0
    // str r0, [r1]
    // ldrsh r0, [r4, r0]
    _fflt((6 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #4]
    // add r1, #0xe4
    // str r0, [r1]
    _fflt((*((u16*)r4) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #4]
    Camera_SetDistance(*((u32*)r1));
}




void ov108_021E90C4(void) {
    // add r0, #0xb6
    // add r5, #0x64
    ov108_021E9204(r1, r1);
    ov108_021E91D4(r7, r5);
    // add r0, #0xb6
    // add r5, #0x14
    // add r1, sp, #4
    // add r2, sp, #0
    NNS_G3dTexReleaseTexKey(*((u32*)(r6 + 0xc)));
    // ldr r0, [sp, #4]
    // blx r1
    // ldr r0, [sp]
    // blx r1
    NNS_G3dPlttReleasePlttKey(*((u32*)(r6 + 0xc)), *((u32*)NNS_GfdDefaultFuncFreeTexVram));
    // blx r1
    Heap_Free(*((u32*)r6), *((u32*)NNS_GfdDefaultFuncFreePlttVram));
    MI_CpuFill8(r6, 0, 0xb8);
}




void ov108_021E9144(void) {
    // add r0, #0xb6
    // add r5, #0x64
    // add r0, #0xb6
    // add r5, #0x14
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x18
    // add r6, #0x10
    // add r1, sp, #0xc
    // add r2, sp, #0x18
    // add r3, sp, #0
}




void ov108_021E9198(void) {
    // str r2, [sp]
    // str r0, [r4]
}




void ov108_021E91D4(void) {
}




void ov108_021E91F8(void) {
}




void ov108_021E9204(void) {
}




void ov108_021E9210(void) {
    // add r0, r1, r0
    // str r1, [r0]
}




void ov108_021E9230(void) {
    Camera_New(r1);
    // str r0, [r4]
    // add r0, #0xdc
    // str r1, [r0]
    // add r0, #0xe0
    // str r1, [r0]
    // add r0, #0xe4
    // str r1, [r0]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xdc
    Camera_Init_FromTargetDistanceAndAngle(r4, 0x0015B000, ov108_021EA9C4, 0x000005C1);
    Camera_SetStaticPtr(*((u32*)r4));
    Camera_SetPerspectiveClippingPlane((0x19 << 0xe), (0x4b << 0x10), *((u32*)r4));
    Camera_OffsetLookAtPosAndTarget(ov108_021EA9D8, *((u32*)r4));
}




void ov108_021E929C(void) {
    ov108_021E9850(*((u32*)(r0 + 8)));
    ov108_021E9A60(r4);
    ov108_021E9C14(r4);
    ov108_021E9C3C(r4);
    ov108_021E9D30(r4);
    ov108_021E9E10(r4);
    ov108_021E9EB8(r4);
    ov108_021EA50C();
    Main_SetVBlankIntrCB(ov108_021E979C, r4);
    sub_020210BC();
    sub_02021148(4);
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
}




void ov108_021E9304(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    ov108_021E9F04(r4);
    ov108_021E9E80(r4);
    ov108_021E9DE0(r4);
    ov108_021E9CD0(r4);
    ov108_021E9C2C(r4);
    ov108_021E9BD4(r4);
    ov108_021E9A08(r4);
    sub_02021238();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    GfGfx_DisableEngineAPlanes(0xFFFFE0FF, *((u32*)0x04001000), 0x04001000);
    GfGfx_DisableEngineBPlanes();
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
}




void ov108_021E9388(void) {
    // str r1, [sp]
    // add r1, sp, #0
    // ldr r1, [sp]
}




void ov108_021E93A8(void) {
    System_GetTouchNew();
    *((u32*)(r5 + 0x10)) = 1;
    // tst r0, r1
    *((u32*)(r5 + 0x10)) = 1;
    // tst r0, r1
    PlaySE(0x000005E5, *((u32*)(gSystem + 0x48)));
    // add r0, r5, r0
    ClearFrameAndWindow2(0x00000464, 1);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer(0x00000464);
}




void ov108_021E940C(void) {
    ov108_021E9F94(1);
    ov108_021E9F20(r5, 2);
    ov108_021EA260(r5);
    ov108_021EA334(r5, 0);
    ov108_021E9F94(0);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer(0x00000494);
    ov108_021E9F20(r5, 0);
    ov108_021EA040(r5);
    ov108_021EA334(r5, 2);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000044C)), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x45 << 4))), r4);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000444)), r4);
}




void ov108_021E9488(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r1, [sp]
    // sub r1, #0x92
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #4]
    // add r1, sp, #0
    *((u8*)(0xe + 0x10)) = 0x1a;
    *((u8*)(0xe + 0x11)) = 4;
    // add r0, #0xdc
    // and r3, r5
    *((u8*)(0xe + 0x12)) = ((*((u8*)(0xe + 0x12)) & ~(0xf)) | 0xf);
    *((u8*)(0xe + 0x12)) = (*((u8*)(0xe + 0x12)) & ~(0xf0));
    *((u8*)(0xe + 0x13)) = 0;
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplateWithPalette(*((u32*)(r4 + 0x00000438)), 0xe, 0, (*((u8*)(0xe + 0x12)) & ~(0xf0)));
}




void ov108_021E94E8(void) {
    YesNoPrompt_HandleInput(*((u32*)(r0 + 0x00000514)));
    // mvn r0, r0
    YesNoPrompt_IsInTouchMode(*((u32*)(r5 + 0x00000514)));
    *((u32*)(r5 + 0x10)) = r0;
    YesNoPrompt_Reset(*((u32*)(r5 + 0x00000514)));
}




void ov108_021E9528(void) {
    PlaySE(0x000005DC);
    ov108_021E9F20(r4, 1);
    *((u32*)(r4 + 0xc)) = 3;
    // add r3, r1, r3
    // strb r3, [r4, r1]
    ov108_021EA52C(0, *((u8*)(r4 + (0x00000431 + 1))), *((u8*)(r4 + (0x00000431 - 4))), (6 * *((u8*)(r4 + (0x00000431 - 1)))));
    PlaySE(0x000005F3);
    ov108_021EA418(r4, (r5 - 1));
    PlaySE(0x000005DC);
    // add r0, #0xfe
    // add r1, #0xff
    // add r0, r2, r0
    // strb r0, [r4, r1]
}




void ov108_021E95AC(void) {
    // tst r0, r2
    *((u32*)(r0 + 0x10)) = 0;
    // tst r0, r6
    ov108_021E9528(r0, 6, *((u32*)(gSystem + 0x48)));
    // tst r0, r6
    ov108_021E9528(r4, *((u8*)(r4 + 0x00000431)));
    // tst r0, r6
    // sub r7, r7, r3
    // ror r7, r2
    // add r2, r3, r7
    // tst r5, r6
    // strb r1, [r4, r0]
    // tst r5, r6
    // strb r1, [r4, r0]
    // tst r0, r6
    // sub r3, r3, r5
    // ror r3, r0
    // add r0, r5, r3
    // tst r0, r6
    // sub r3, r3, r5
    // ror r3, r0
    // add r0, r5, r3
    // add r2, r2, r0
    // strb r2, [r4, r0]
    // add r4, #0x14
    ov108_021EA584(r4, (((1 - 1) << 0x18) >> 0x18), r4, 0);
    PlaySE(0x000005E5);
    ov108_021EA2EC(r4, *((u8*)(r4 + 0x00000431)));
    ov108_021EA47C(r4);
}




void ov108_021E96FC(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov108_021EABF0);
    // mvn r1, r1
    // str r0, [r4]
    // strb r1, [r5, r0]
    // add r5, #0x14
    ov108_021EA584(r5, 0, r5, 0);
    // str r0, [r4]
    // strb r1, [r5, r0]
    // add r5, #0x14
    ov108_021EA584(r5, 1, r5, 0);
    // str r0, [r4]
    // strb r0, [r5, r1]
    ov108_021EA2EC(r5, *((u8*)(r5 + 0x00000431)), *((u8*)(r5 + 0x00000431)));
    ov108_021EA47C(r5);
    // str r0, [r4]
    ov108_021E9528(r5, *((u8*)(r5 + 0x00000431)));
}




void ov108_021E979C(void) {
    // add r2, r1, r2
    // add r0, r4, r0
    ov108_021E8EA4((0xce << 2), 0x18, 0, *((u8*)(r0 + (0x00000434 - 4))));
    // add r3, r2, r3
    // add r2, r1, r3
    // add r0, r4, r0
    ov108_021E8EA4(((0xcd << 2) + 4), *((u8*)(*((u32*)(r4 + (0xcd << 2))) + (r2 << 2))), (r2 + 2), (r2 << 2));
    // strb r1, [r4, r0]
    SpriteSystem_TransferOam(*((u32*)(r4 + 0x0000043C)), 0);
    GF_RunVramTransferTasks();
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x00000438)));
    // str r0, [r3, r1]
}




void ov108_021E9830(void) {
}




void ov108_021E9850(void) {
    ov108_021E9830();
    // strh r0, [r2]
    BgConfig_Alloc(*((u32*)r4), *((u16*)0x04000304), 0x04000304);
    // add r3, sp, #0xc4
    // str r0, [r4, r1]
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, 0x00000438, r3);
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x00000438)), 1, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x00000438)), 1);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x00000438)), 2, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x00000438)), 2);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x00000438)), 3, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x00000438)), 3);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x00000438)), 4, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x00000438)), 4);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x00000438)), 5, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x00000438)), 5);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x00000438)), 6, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x00000438)), 6);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0x00000438)), 7, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x00000438)), 7);
    BG_ClearCharDataRange(3, 0x20, 0, *((u32*)r4));
    BG_ClearCharDataRange(4, 0x20, 0, *((u32*)r4));
    BG_ClearCharDataRange(7, 0x20, 0, *((u32*)r4));
}




void ov108_021E9A08(void) {
    FreeBgTilemapBuffer(*((u32*)(r0 + 0x00000438)), 7);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x00000438)), 6);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x00000438)), 5);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x00000438)), 4);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x00000438)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x00000438)), 2);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x00000438)), 1);
    Heap_Free(*((u32*)(r4 + 0x00000438)));
}




void ov108_021E9A60(void) {
    NARC_New(0xe1, *((u32*)r0));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(1, *((u32*)(r5 + 0x00000438)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 5, *((u32*)(r5 + 0x00000438)), 7);
    // str r1, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 0, 0, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 4, 4, 0);
    LoadFontPal1(0, (0x1a << 4), *((u32*)r5));
    LoadFontPal1(4, (0x1a << 4), *((u32*)r5));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 2, *((u32*)(r5 + 0x00000438)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 3, *((u32*)(r5 + 0x00000438)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 6, *((u32*)(r5 + 0x00000438)), 7);
    // str r0, [sp]
    // add r3, r5, r3
    GfGfxLoader_GetScrnDataFromOpenNarc(r4, 8, 0, 0x0000051C);
    // str r0, [r5, r3]
    // add r3, #0xc
    // str r0, [sp]
    // add r3, r5, r3
    GfGfxLoader_GetScrnDataFromOpenNarc(r4, 6, 0, 0x00000518);
    // str r0, [r5, r3]
    // add r3, #0xc
    // str r0, [sp]
    // add r3, r5, r3
    GfGfxLoader_GetScrnDataFromOpenNarc(r4, 7, 0, (0x52 << 4));
    // str r0, [r5, r1]
    NARC_Delete(r4, 0x00000528);
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r2, #0x56
    LoadUserFrameGfx2(*((u32*)(r5 + 0x00000438)), 4, 0x00000438, 0xc);
    LoadFontPal1(0, (0x1a << 4), *((u32*)r5));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x00000438)), 7);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x00000438)), 3);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 1, 0x1e, 0x1c);
}




void ov108_021E9BD4(void) {
    // str r1, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 0, 0x1f);
    Heap_Free(*((u32*)(r4 + 0x00000528)));
    Heap_Free(*((u32*)(r4 + (0x52 << 4))));
    Heap_Free(*((u32*)(r4 + 0x00000518)));
}




void ov108_021E9C14(void) {
    // add r0, r2, r1
    // add r1, #0xf4
}




void ov108_021E9C2C(void) {
    // add r0, r0, r1
}




void ov108_021E9C3C(void) {
    FontID_Alloc(4, *((u32*)r0));
    NewMsgDataFromNarc(0, 0x1b, 0x000001AE, *((u32*)r5));
    // str r0, [r5, r1]
    MessageFormat_New_Custom(2, 0x10, *((u32*)r5));
    // str r0, [r5, r1]
    String_New((1 << 8), *((u32*)r5));
    // str r0, [r5, r1]
    String_New((1 << 8), *((u32*)r5));
    // str r0, [r5, r1]
    // sub r1, #0xc
    NewString_ReadMsgData(*((u32*)(r5 + (0xc6 << 2))), 0xc);
    // str r0, [r5, r1]
    // sub r1, #0x20
    NewString_ReadMsgData(*((u32*)(r5 + (0xcb << 2))), 8);
    // str r0, [r5, r1]
    // sub r7, #0x14
    NewString_ReadMsgData(*((u32*)(r5 + (0xc3 << 2))), 0);
    // str r0, [r4, r7]
}




void ov108_021E9CD0(void) {
    // ldr r0, [r5, r7]
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
}




void ov108_021E9D30(void) {
    // add r5, r7, r0
    AddWindow(*((u32*)(r0 + 0x00000438)), r5, ov108_021EAC18);
    FillWindowPixelBuffer(r5, 0);
    // add r4, #8
    // add r5, #0x10
    // add r0, r7, r0
    // str r0, [sp, #0x14]
    // add r0, r4, r0
    // asr r1, r0, #1
    // add r0, r1, r0
    // str r3, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r5, [sp, #0x18]
    // sub r3, r3, r5
    // ror r3, r5
    // ldr r5, [sp, #0x18]
    // add r1, r1, r2
    // add r3, r5, r3
    // str r6, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r7 + 0x00000438)), (0 + 6), 5, (((((0 << 0x1f) << 4) + 1) << 0x18) >> 0x18));
    // sub r6, #0x1c
    YesNoPrompt_Create(*((u32*)r7));
    // str r0, [r7, r1]
}




void ov108_021E9DE0(void) {
    YesNoPrompt_Destroy(*((u32*)(r0 + 0x00000514)));
    // add r5, r5, r0
    ClearWindowTilemapAndCopyToVram(r5);
    RemoveWindow(r5);
    // add r5, #0x10
}




void ov108_021E9E10(void) {
    GF_CreateVramTransferManager(0x20, *((u32*)r0));
    SpriteSystem_Alloc(*((u32*)r4));
    // str r0, [r4, r1]
    SpriteSystem_Init(*((u32*)(r4 + 0x0000043C)), ov108_021EABA8, ov108_021EAAD0, 1);
    SpriteManager_New(*((u32*)(r4 + 0x0000043C)));
    // str r0, [r4, r1]
    SpriteSystem_InitSprites(*((u32*)(r4 + ((0x11 << 6) - 4))), *((u32*)(r4 + (0x11 << 6))), 4);
    // str r3, [sp]
    sub_0200D2A4(*((u32*)(r4 + 0x0000043C)), *((u32*)(r4 + (0x0000043C + 4))), ov108_021EAAB0, 0);
    thunk_ClearMainOAM(*((u32*)r4));
    thunk_ClearSubOAM(*((u32*)r4));
}




void ov108_021E9E80(void) {
    SpriteSystem_DestroySpriteManager(*((u32*)(r0 + 0x0000043C)), *((u32*)(r0 + (0x0000043C + 4))));
    SpriteSystem_Free(*((u32*)(r4 + 0x0000043C)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    GF_DestroyVramTransferManager((0x0000043C + 4), 0);
    thunk_ClearMainOAM(*((u32*)r4));
    thunk_ClearSubOAM(*((u32*)r4));
}




void ov108_021E9EB8(void) {
    SpriteSystem_CreateSpriteFromResourceHeader(*((u32*)(r0 + 0x0000043C)), *((u32*)(r0 + (0x11 << 6))), ov108_021EAC48);
    // str r0, [r5, r1]
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000444)), 1);
    // add r4, #0x28
    thunk_Sprite_SetPriority(*((u32*)(r6 + 0x00000444)), 1);
}




void ov108_021E9F04(void) {
}




void ov108_021E9F20(void) {
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + 0x00000448)), (r1 + 2));
    Sprite_ResetAnimCtrlState(*((u32*)(r5 + 0x00000448)));
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000474, 0);
    FontID_String_GetWidth(4, *((u32*)(r5 + (0x33 << 4))), 0);
    // sub r3, r4, r3
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000474, 4, *((u32*)(r5 + (0x33 << 4))), (r0 >> 1));
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x00000474);
}




void ov108_021E9F94(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x00000438)), 5, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r5 + 0x00000438)), 6, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r5 + 0x00000438)), 7, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x00000438)), 5);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x00000438)), 6);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x00000438)), 7);
}




void ov108_021EA040(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)(r0 + 0x00000438)), 6, 0, 0);
    // add r7, r5, r0
    // add r0, r4, r0
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r0, r7, r0
    FillWindowPixelBuffer(((0 + 6) << 4), 0);
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // add r0, r7, r0
    ScheduleWindowCopyToVram(0x0000042D, *((u8*)(r5 + 0x0000042D)));
    // ldr r1, [sp, #0x1c]
    ov108_021EA52C(r5, ((r1 << 0x18) >> 0x18));
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r2, #0xc
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // sub r6, r6, r3
    // ror r6, r2
    // add r2, r3, r6
    // add r3, r4, r3
    // asr r3, r3, #1
    // str r0, [sp, #0x18]
    // add r3, r6, r3
    CopyToBgTilemapRect(*((u32*)(r5 + 0x00000438)), 6, ((0x1f << 0x1c) >> 0x18), (((((r4 >> 0x1f) + 1) << 2) << 0x18) >> 0x18));
    // ldr r2, [sp, #0x1c]
    // add r2, r2, r3
    // add r1, #0xe
    ReadMsgDataIntoString(*((u32*)(r5 + (0xc3 << 2))), *((u8*)(*((u32*)(r5 + (0xcd << 2))) + r2)), *((u32*)(r5 + (0xc6 << 2))), (r2 << 2));
    FontID_String_GetWidth(4, *((u32*)(r5 + (0xc6 << 2))), 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // add r6, r3, r6
    // add r0, r7, r0
    // asr r3, r6, #1
    AddTextPrinterParameterizedWithColor(0, 4, *((u32*)(r5 + (0xc6 << 2))));
    // ldr r0, [sp, #0x20]
    // add r0, r7, r0
    ScheduleWindowCopyToVram();
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000484, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0x31 << 4))), 0, (*((u8*)(r5 + (0x43 << 4))) + 1), 1);
    // str r1, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0x31 << 4))), 1, *((u8*)(r5 + 0x0000042E)), 1);
    // add r2, #0x1c
    StringExpandPlaceholders(*((u32*)(r5 + (0x31 << 4))), *((u32*)(r5 + ((0x31 << 4) + 4))), *((u32*)(r5 + (0x31 << 4))));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000484, 0, *((u32*)(r5 + (0xc5 << 2))), 0);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x00000484);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x00000438)), 5);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x00000438)), 6);
    // add r0, #0x1c
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x43 << 4))), 7);
    // add r0, #0x1c
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + r0)), 5);
    // add r0, #0x20
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x43 << 4))), 0xa, *((u8*)(r5 + (0x43 << 4))));
    // add r0, #0x20
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + r0)), 8);
}




void ov108_021EA260(void) {
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00000494, 0);
    // add r1, #0x28
    // add r2, #0xc
    // add r3, r5, r3
    // add r1, #0xe
    ReadMsgDataIntoString(*((u32*)(r4 + (0xc3 << 2))), *((u8*)(*((u32*)(r4 + (0xc3 << 2))) + (*((u8*)(r4 + 0x00000432)) << 2))), *((u32*)(r4 + (0xc3 << 2))), (*((u8*)(r4 + 0x00000432)) << 2));
    FontID_String_GetWidth(4, *((u32*)(r4 + (0xc6 << 2))), 0);
    // sub r3, r1, r0
    // add r5, r3, r5
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // asr r3, r5, #1
    AddTextPrinterParameterizedWithColor(0x00000494, 4, *((u32*)(r4 + (0xc6 << 2))));
    // add r0, r4, r0
    ScheduleWindowCopyToVram(0x00000494);
    // add r0, r4, r0
    ClearWindowTilemapAndScheduleTransfer(0x00000484);
}




void ov108_021EA2EC(void) {
    // sub r2, r2, r3
    // ror r2, r0
    // add r0, r3, r2
    // asr r3, r0, #0x10
    // asr r2, r0, #0x10
    Sprite_SetPositionXY(*((u32*)(r0 + 0x00000444)), (r1 >> 0x1f), (r1 << 0x1f), (r1 >> 0x1f));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000444)), r5);
}




void ov108_021EA334(void) {
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000454, 0);
    // add r2, #8
    // add r1, #0xe
    ReadMsgDataIntoString(*((u32*)(r5 + (0xc3 << 2))), *((u8*)(r5 + 0x00000433)), *((u32*)(r5 + (0xc3 << 2))));
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferString(*((u32*)(r5 + (0x31 << 4))), r6, *((u32*)(r5 + ((0x31 << 4) + 4))), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0x31 << 4))), 1, *((u8*)(r5 + 0x00000435)), 2);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + (0xc3 << 2))), r4, *((u32*)(r5 + (0xc3 << 2))));
    // add r1, #8
    StringExpandPlaceholders(*((u32*)(r5 + (0x31 << 4))), *((u32*)(r5 + (0x31 << 4))), *((u32*)(r5 + ((0x31 << 4) + 4))));
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r5 + (0xc3 << 2))), r4, *((u32*)(r5 + (0xc3 << 2))));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000454, 0, *((u32*)(r5 + (0xc6 << 2))), 0);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x00000454);
}




void ov108_021EA418(void) {
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00000464, 0xf);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r5 + (0xc3 << 2))), (r4 + 4), *((u32*)(r5 + (0xc3 << 2))));
    // add r0, r5, r2
    // sub r2, #0x82
    DrawFrameAndWindow2(1, 0x00000464, 0xc);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r0
    AddTextPrinterParameterizedWithColor(0x00000464, 1, *((u32*)(r5 + (0xc6 << 2))), 0);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x00000464);
}




void ov108_021EA47C(void) {
    ov108_021EA624();
    // add r0, r4, r0
    FillWindowPixelBuffer(0x000004A4, 0);
    // add r1, r0, r1
    // add r0, r4, r0
    ScheduleWindowCopyToVram(0x000004A4, (((6 * *((u8*)(r4 + (0x00000431 - 1)))) << 0x18) >> 0x18), 0x00000431, *((u8*)(r4 + (0x00000431 - 1))));
    // add r2, #0x28
    // add r1, r1, r2
    // add r3, #0xc
    // add r1, #0x26
    ReadMsgDataIntoString(*((u32*)(r4 + (0xc3 << 2))), *((u8*)(*((u32*)(r4 + (0xc3 << 2))) + r1)), *((u32*)(r4 + (0xc3 << 2))), (0xc3 << 2));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    AddTextPrinterParameterizedWithColor(0x000004A4, 0, *((u32*)(r4 + (0xc6 << 2))), 0);
    // add r0, r4, r0
    ScheduleWindowCopyToVram(0x000004A4);
}




void ov108_021EA50C(void) {
    ov108_021E940C(0);
    ov108_021EA2EC(r4, *((u8*)(r4 + 0x00000431)));
    ov108_021EA47C(r4);
}




void ov108_021EA52C(void) {
    // add r4, r1, r2
    // add r1, r1, r4
    // add r0, r3, r0
}




void ov108_021EA584(void) {
    // str r3, [sp]
    Heap_Alloc(*((u32*)r0), 0x14);
    MI_CpuFill8(0, 0x14);
    *((u32*)(r4 + 4)) = r5;
    // str r7, [r4]
    // add r1, r5, r0
    *((u8*)(r4 + 8)) = r6;
    // add r1, r6, r1
    Sprite_SetAnimCtrlSeq(*((u32*)(r1 + 0x00000444)), ((r6 << 1) + 6));
    PlaySE(0x000005E1);
    // str r0, [r1]
    // ldr r2, [sp]
    SysTask_CreateOnMainQueue(ov108_021EA5E4, r4);
}




void ov108_021EA5E4(void) {
    *((u8*)(r1 + 9)) = (*((u8*)(r1 + 9)) + 1);
    ov108_021EA040(*((u32*)(r1 + 4)), *((u8*)(r1 + 9)));
    ov108_021EA47C(*((u32*)(r4 + 4)));
    ov108_021EA2EC(*((u32*)(r4 + 4)), *((u8*)(*((u32*)(r4 + 4)) + 0x00000431)));
    // str r0, [r1]
    Heap_Free(r4, *((u32*)r4));
    SysTask_Destroy(r5);
}




void ov108_021EA624(void) {
    // strb r2, [r0, r1]
    // sub r1, #0xfc
    // add r0, r0, r1
}




void ov108_021EA63C(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    _u32_div_f(0xa);
    // add r0, r2, r0
    // str r0, [sp, #0xc]
    // mov ip, r0
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    // mov r0, ip
    // add r3, r0, r1
    // lsl r1, r0
    // mov r0, ip
    // ldr r0, [sp]
    // mov ip, r1
    // ldr r0, [sp, #0x28]
    // add r1, r6, r5
    Heap_Alloc(((r6 + 1) << 0x18), (((r6 + 1) << 0x18) + 1), (0 + 1), (*((u32*)(r3 + 4)) + 1));
    // add r2, r6, r5
    // str r0, [sp, #0x10]
    MI_CpuFill8(0);
    // tst r0, r4
    // add r1, r7, r0
    // ldr r0, [sp, #0x10]
    // strb r6, [r0, r1]
    // add r5, r0, r1
    // ldr r2, [sp, #4]
    GetSafariObjectConfig((r5 + 2), 0);
    ov108_021EA700(((*((u8*)(r5 + 3)) << 0x1c) >> 0x1d), ((*((u8*)(r5 + 3)) << 0x19) >> 0x1d));
    *((u8*)(r5 + 1)) = r0;
    // ldr r0, [sp, #8]
    // strb r7, [r0]
    // ldr r0, [sp, #0x10]
}




void ov108_021EA700(void) {
    // cmp r0, #1
    // bne _021EA714
    // cmp r1, #1
    // beq _021EA70C
    // b _021EA70E
    // cmp r1, #1
    // bne _021EA71C
}



