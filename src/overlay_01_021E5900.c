/* Decompiled from asm/overlay_01_021E5900.s */
#include "global.h"

void ov01_021E5900(void) {
}




void ov01_021E5924(void) {
    // str r1, [sp, #4]
    OverlayManager_GetArgs(0);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E594A: ; jump table
    FS_LoadOverlay(0, FS_OVERLAY_ID);
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    // strh r1, [r0]
    // strh r1, [r0]
    DSProt_DetectDummy(ov01_021E66A8, 0);
    // add r5, r5, r1
    sub_0200FBDC(0, (0x000004CF * r0));
    sub_0200FBDC(1);
    ov01_021E6364(r4);
    DSProt_DetectNotEmulator(ov01_021E66D8);
    // add r5, r5, r0
    sub_02053018(r4, 0);
    // str r1, [r4, r0]
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    ov01_021E5EB8(r4);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    DSProt_DetectFlashcart(ov01_021E66B8);
    Heap_Create(3, 4, *((u32*)(*((u32*)(r4 + 0x74)) + 4)));
    GF_AssertFail(*((u32*)(r4 + 4)));
    FS_UnloadOverlay(0, FS_OVERLAY_ID);
    Heap_Alloc(4, 0x28);
    *((u32*)(r4 + 4)) = r0;
    MI_CpuFill8(0, 0x28);
    Field3dObjectTaskManager_Create(r4, 4, 8);
    *((u32*)(*((u32*)(r4 + 4)) + 4)) = r0;
    // add r0, r5, r7
    _u32_div_f(0x00000D69);
    SysTask_CreateOnMainQueue(sub_0203E348, 0, 0x7b);
    ov01_021E6028();
    GF_CreateVramTransferManager(0x80, 4);
    sub_02023738(4, 4);
    GF3dRender_InitSimpleManager(4);
    ov01_021E61E0();
    ov01_021E6178();
    GfGfx_SwapDisplay();
    BgConfig_Alloc(4);
    *((u32*)(r4 + 8)) = r0;
    ov01_021E6058();
    sub_0205B4EC(0, 1);
    TryStartMapScriptByType(r4, 4);
    // add r0, r5, r7
    _u32_div_f(0x00001079);
    SysTask_CreateOnMainQueue(sub_0203E348, 0, 0x00000315);
    ov02_0224F864(4);
    // str r0, [r4, r1]
    ov01_021E63B8((0x12 << 4));
    // str r0, [sp]
    // add r1, #0xc0
    // add r3, #0xcc
    ov01_021FBA3C(*((u32*)(r4 + 0x34)), *((u32*)r4), *((u32*)(r4 + 0x54)), *((u32*)r4));
    // add r1, #0xc0
    ov01_021F3638(4, *((u32*)r4));
    // add r1, #0x9c
    // str r0, [r1]
    ov01_021E6460(r4, r4);
    ov01_021E64A4(r4);
    ov01_021E6580(r4);
    Save_LocalFieldData_Get(*((u32*)(r4 + 0xc)));
    LocalFieldData_GetWeatherType();
    ov01_021EB260(*((u32*)(*((u32*)(r4 + 4)) + 0xc)), r0);
    FieldBGM_PlayEffectiveForMapHeader(r4, *((u32*)*((u32*)(r4 + 0x20))));
    // add r0, #0xc4
    // mvn r0, r0
    ov01_021E7F00(r4, 0);
    TryStartMapScriptByType(r4, 3);
    ov01_021FB4C0(4);
    *((u32*)(*((u32*)(r4 + 4)) + 0x1c)) = r0;
    ov01_021FB4F4(*((u32*)(*((u32*)(r4 + 4)) + 0x1c)), *((u32*)(r4 + 4)));
    ov01_021FB5D4(4, *((u32*)(*((u32*)(r4 + 4)) + 0x1c)));
    *((u32*)(*((u32*)(r4 + 4)) + 0x20)) = r0;
    ov01_021EAF18(*((u32*)(r4 + 4)));
    ov01_021EAF34();
    // str r0, [sp, #4]
    *((u32*)(r4 + 0x6c)) = 1;
    ov01_021E662C(1);
    SysTask_CreateOnMainQueue(sub_02096594, 0, (0xfa << 2));
    SysTask_CreateOnMainQueue(sub_02096594, 0, 0x00000578);
    // str r0, [r6]
    // ldr r0, [sp, #4]
}




void ov01_021E5BE4(void) {
    // add r1, #0xbc
}




void ov01_021E5C24(void) {
    OverlayManager_GetArgs();
    ov01_021F50F0(*((u32*)(r0 + 0x2c)));
    FS_LoadOverlay(0, FS_OVERLAY_ID);
    sub_02064910(r4);
    DSProt_DetectDummy(ov01_021E66C8);
    // add r5, r5, r1
    ov01_021F6304(*((u32*)(r4 + 0x2c)), (0x0000023B * r0));
    PlayerAvatar_GetXCoord(*((u32*)(r4 + 0x40)));
    *((u32*)(*((u32*)(r4 + 0x20)) + 8)) = r0;
    PlayerAvatar_GetZCoord(*((u32*)(r4 + 0x40)), *((u32*)(r4 + 0x20)));
    *((u32*)(*((u32*)(r4 + 0x20)) + 0xc)) = r0;
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)), *((u32*)(r4 + 0x20)));
    *((u32*)(*((u32*)(r4 + 0x20)) + 0x10)) = r0;
    // add r0, #0x98
    ov01_021FB418(*((u32*)r4), *((u32*)(r4 + 0x20)));
    GF_AssertFail(*((u32*)(r4 + 0x54)));
    ov01_021F61F8(*((u32*)(r4 + 0x2c)));
    DSProt_DetectNotFlashcart(ov01_021E66DC);
    // add r5, r5, r0
    ov01_021E8A28(*((u32*)(r4 + 0x54)), 0);
    ov01_021E8AEC(*((u32*)(r4 + 0x54)));
    // add r0, #0x58
    ov01_021E8DD4(r4);
    ov01_02204764(*((u32*)(r4 + (0x41 << 2))));
    // add r0, #0xcc
    ov01_02204634(*((u32*)r4));
    // add r0, #0xc8
    ov01_02204278(*((u32*)r4));
    DSProt_DetectNotEmulator(ov01_021E66E0);
    ov01_021EB1BC(*((u32*)(*((u32*)(r4 + 4)) + 0x10)), 0);
    FS_UnloadOverlay(0, FS_OVERLAY_ID);
    ov01_021EB1DC(*((u32*)(*((u32*)(r4 + 4)) + 0x10)));
    *((u32*)(*((u32*)(r4 + 4)) + 0x10)) = 0;
    // add r0, r5, r7
    _u32_div_f(*((u32*)(r4 + 4)), 0x000008AD);
    SysTask_CreateOnMainQueue(sub_0203E348, 0, 0x00001EA5);
    sub_0205E4C8(*((u32*)(r4 + 0x3c)));
    ov01_021F9250(*((u32*)(r4 + 0x3c)));
    sub_0205F55C(*((u32*)(r4 + 0x3c)));
    ov01_021F13F4(*((u32*)(r4 + 0x44)));
    ov01_02205424(r4);
    ov01_021E66A0(*((u32*)(r4 + 0x38)));
    *((u32*)(r4 + 0x38)) = 0;
    // add r0, r5, r7
    _u32_div_f(0, 0x000004EB);
    SysTask_CreateOnMainQueue(sub_0203E348, 0, 0x000004DD);
    // add r4, #0x9c
    ov01_021F3660(*((u32*)r4));
    // str r0, [r6]
    ov01_021F62CC(*((u32*)(r4 + 0x2c)));
    // add r0, #0xc0
    ov01_02204084(*((u32*)r4));
    // add r0, #0x34
    ov01_021FB944(r4);
    ov01_021F62B0(*((u32*)(r4 + 0x2c)));
    ov01_021EAC30(r4);
    // add r0, #0x50
    ov01_021EA284(r4);
    ov01_021F3D50(*((u32*)(r4 + 0x68)));
    FieldDrawMapNameInfo_Destroy(*((u32*)(*((u32*)(r4 + 4)) + 8)));
    ov01_021EB234(*((u32*)(*((u32*)(r4 + 4)) + 0xc)));
    ov01_021FB610(*((u32*)(*((u32*)(r4 + 4)) + 0x20)));
    ov01_021FB4D4(*((u32*)(*((u32*)(r4 + 4)) + 0x1c)));
    sub_020556A8(*((u32*)(*((u32*)(r4 + 4)) + 0x18)));
    // add r0, #0x4c
    ov01_021EA840(r4);
    // add r0, #0x48
    ov01_021EA8FC(r4);
    ov01_021E619C();
    ov02_0224F8F4(*((u32*)(r4 + (0x12 << 4))));
    ov01_021E6138(*((u32*)(r4 + 8)));
    ov01_021EAF54(r4);
    // str r0, [r6]
    ov01_021EAF70(r4);
    ov01_021E6214();
    sub_02023778();
    GF_DestroyVramTransferManager();
    GF3dRender_DeleteSimpleManager();
    Field3dObjectTaskManager_Delete(*((u32*)(*((u32*)(r4 + 4)) + 4)));
    Main_SetVBlankIntrCB(0, 0);
    Heap_Free(*((u32*)(r4 + 8)));
    Heap_Free(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 4)) = 0;
    Heap_Destroy(4);
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOverlayByID(FS_OVERLAY_ID);
    sub_02005D00();
}




void ov01_021E5EB8(void) {
}




void ov01_021E5ED4(void) {
}




void ov01_021E5F04(void) {
    // asr r1, r0, #4
    // add r1, r0, r1
    // asr r4, r1, #5
    // asr r1, r0, #4
    // add r1, r0, r1
    // asr r2, r1, #5
    // str r4, [r0]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r3, [sp, #4]
}




void ov01_021E5FC0(void) {
    // tst r0, r4
    // tst r0, r4
    // add r0, #0xc8
    // tst r0, r4
    // tst r0, r4
}




void ov01_021E6028(void) {
}




void ov01_021E6048(void) {
}




void ov01_021E6050(void) {
}




void ov01_021E6058(void) {
    // add r3, sp, #0x58
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x3c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BG_ClearCharDataRange(1, 0x20, 0, 4);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x20
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BG_ClearCharDataRange(2, 0x20, 0, 4);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BG_ClearCharDataRange(3, 0x20, 0, 4);
    BgClearTilemapBufferAndCommit(r4, 3);
    // add r1, sp, #0
    // strh r0, [r1]
    DC_FlushRange(0, 2);
    // add r0, sp, #0
    GX_LoadBGPltt(0, 2);
}




void ov01_021E6138(void) {
}




void ov01_021E6178(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
}




void ov01_021E619C(void) {
}




void ov01_021E61A4(void) {
}




void ov01_021E61E0(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_InitEx(r3, 0x10, 0x10);
    ObjPlttTransfer_Init(0x14, 4);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov01_021E6214(void) {
}




void ov01_021E6220(void) {
    Thunk_G3X_Reset();
    Camera_PushLookAtToNNSGlb();
    ov01_021F61A8(*((u32*)(r4 + 0x2c)), *((u32*)(r4 + 0x48)));
    // add r0, #0x9c
    ov01_021F3C9C(*((u32*)r4), *((u32*)(r4 + 0x34)));
    // add r0, sp, #0
    Camera_GetAngle(*((u32*)(r4 + 0x24)));
    // add r2, sp, #0
    // neg r2, r2
    // asr r2, r2, #4
    // ldrsh r2, [r2, r3]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul((*((u32*)(r4 + (0x47 << 2))) << 0xc), FX_SinCosTable_, (((((*((u16*)r2) << 0x10) >> 0x10) << 1) + 1) << 1));
    // add r2, r0, r2
    // adc r1, r3
    // add r5, sp, #0x48
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // add r6, sp, #0x48
    // add r5, sp, #8
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldr r0, [sp, #0x30]
    // asr r3, r2, #0x1f
    // asr r1, r0, #0x1f
    _ll_mul((r1 << 0x14), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (8 - 1));
    // add r3, r0, r3
    // adc r1, r5
    // ldr r2, [sp, #0x40]
    // add r0, r2, r1
    // str r0, [sp, #0x40]
    // add r0, sp, #8
    MIi_CpuCopyFast((r1 << 0x14), NNS_G3dGlb, 0x40, (2 << 0xa));
    *((u32*)(NNS_G3dGlb + 0x7c)) = (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0x50));
    NNS_G3dGlbFlushP(0x50, NNS_G3dGlb, (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0x50)));
    ov01_021F13EC(*((u32*)(r4 + 0x44)));
    sub_020237B0();
    // add r0, sp, #0x48
    MIi_CpuCopyFast(NNS_G3dGlb, 0x40);
    *((u32*)(NNS_G3dGlb + 0x7c)) = (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0x50));
    NNS_G3dGlbFlushP(0x50, NNS_G3dGlb, (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0x50)));
    Field3dObjectTaskManager_RunDrawTasks(*((u32*)(*((u32*)(r4 + 4)) + 4)));
    RequestSwap3DBuffers(r5, *((u32*)gG3dDepthBufferingMode));
}




void ov01_021E631C(void) {
    // add r1, #0xbc
    // add r0, #0xbc
    // str r1, [r0]
    // add r1, #0xbc
    // add r0, #0xbc
    // str r2, [r0]
}




void ov01_021E6340(void) {
    // add r1, #0xbc
    // add r0, #0xbc
    // str r1, [r0]
    // add r1, #0xbc
    // add r0, #0xbc
    // str r2, [r0]
}




void ov01_021E6364(void) {
    // add r0, #0xbc
    // str r1, [r0]
}




void ov01_021E636C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov01_021E63B8(void) {
    GfGfx_EngineATogglePlanes(1, 0);
    // str r1, [r0]
    MapHeader_GetAreaDataBank(*((u32*)*((u32*)(r5 + 0x20))), (*((u32*)gG3dDepthBufferingMode) << 1));
    ov01_021FB888();
    *((u32*)(r5 + 0x34)) = r0;
    ov01_021FB934();
    ov01_02204004(4, 0x00000226, 0x80, r0);
    // add r1, #0xc0
    // str r0, [r1]
    MapHeader_GetMoveModelBank(*((u32*)*((u32*)(r5 + 0x20))), r5);
    GF_AssertFail(*((u32*)(r5 + 0x38)));
    ov01_021E6644(4, r4);
    *((u32*)(r5 + 0x38)) = r0;
    ov01_022041C4(4);
    // add r1, #0xc8
    // str r0, [r1]
    // add r0, #0xc8
    ov01_0220460C(*((u32*)r5), r5);
    // add r1, #0xcc
    // str r0, [r1]
    ov01_02204744(4, r5);
    // str r0, [r5, r1]
    ov01_021FB904(*((u32*)(r5 + 0x34)), (0x41 << 2));
    // add r1, #0xc8
    ov01_021E87E4(*((u32*)r5));
    *((u32*)(r5 + 0x54)) = r0;
    ov01_021E8DB4();
    *((u32*)(r5 + 0x58)) = r0;
}




void ov01_021E6460(void) {
    // add r0, #0xcc
    // str r0, [sp]
    // add r2, #0xc0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, #0x98
    // str r0, [r1]
}




void ov01_021E64A4(void) {
    ov01_021F1348(0x17, 4);
    *((u32*)(r5 + 0x44)) = r0;
    ov01_021F1384(0x50);
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov01_021F1390(*((u32*)(r5 + 0x44)), 4, 0x20, 0x20);
    sub_02055680(r5, 4);
    *((u32*)(*((u32*)(r5 + 4)) + 0x18)) = r0;
    sub_0205F5F8(*((u32*)(r5 + 0x3c)), 0);
    ov01_021F13D0(*((u32*)(r5 + 0x44)), ov01_02208BFC);
    ov01_021E669C(*((u32*)(r5 + 0x38)));
    ov01_021E6698(*((u32*)(r5 + 0x38)));
    // str r4, [sp]
    ov01_021F91F8(*((u32*)(r5 + 0x3c)), 0x20, (r6 + 3), r0);
    ov01_022057DC(*((u32*)(r5 + 0x3c)));
    ov01_021FD3F8(*((u32*)(r5 + 0x44)));
    sub_0205C46C(*((u32*)(r5 + 0x40)));
    // add r0, #0xac
    sub_0205E580(*((u32*)(r5 + 0x3c)));
    sub_0205E520();
    ov01_022059AC(r5);
    sub_02057FA4();
    // add r0, #0xac
    MapObjectManager_ClearFlagsBits(*((u32*)(r5 + 0x3c)), 2);
    sub_0205F568();
    PlayerAvatar_GetPositionVector(*((u32*)(r5 + 0x40)));
    ov01_021F62E8(*((u32*)(r5 + 0x2c)));
}




void ov01_021E6580(void) {
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_BothDispOn();
    ov01_021EA8E0();
    *((u32*)(r4 + 0x48)) = r0;
    ov01_021E61A4();
    ov01_021EA824();
    *((u32*)(r4 + 0x4c)) = r0;
    Save_LocalFieldData_Get(*((u32*)(r4 + 0xc)));
    LocalFieldData_GetCameraType();
    PlayerAvatar_GetPositionVector(*((u32*)(r4 + 0x40)));
    ov01_021EABA8(r4, r5, 1);
    ov01_021FBA14(*((u32*)(r4 + 0x34)));
    Save_VarsFlags_Get(*((u32*)(r4 + 0xc)));
    CheckFlag96A();
    ov01_021EA220(*((u32*)(r4 + 0x48)), 4);
    *((u32*)(r4 + 0x50)) = r0;
    ov01_021EB1F4(r4);
    *((u32*)(*((u32*)(r4 + 4)) + 0xc)) = r0;
    FieldDrawMapNameInfo_Create(*((u32*)(r4 + 8)), *((u32*)(r4 + 4)));
    *((u32*)(*((u32*)(r4 + 4)) + 8)) = r0;
    ov01_021F3D38(4, *((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x68)) = r0;
    ov01_021EAFD4();
    *((u32*)(*((u32*)(r4 + 4)) + 0x10)) = r0;
    ov01_021FB9CC(*((u32*)(r4 + 0x34)), *((u32*)(r4 + 4)));
    ov01_021EB00C(*((u32*)(*((u32*)(r4 + 4)) + 0x10)), r0);
    sub_020648EC(r4);
    Main_SetVBlankIntrCB(ov01_021E5900, r4);
}




void ov01_021E662C(void) {
}




void ov01_021E6644(void) {
    Heap_Alloc(0x64);
    AllocAtEndAndReadWholeNarcMemberByIdPair(0x5c, r6, r5);
    *((u32*)(r4 + 4)) = 0x0000FFFF;
    *((u32*)(r4 + 4)) = *((u16*)r0);
    // strh r3, [r4]
    Heap_Free((r0 + 2), (r4 + 4), (0 + 1));
}




void ov01_021E6698(void) {
}




void ov01_021E669C(void) {
    // ldrh r0, [r0]
}




void ov01_021E66A0(void) {
}




void ov01_021E66A8(void) {
    // bx r3
    // nop
    // _021E66B4: .word Heap_AllocAtEnd
}




void ov01_021E66B8(void) {
    // bx r3
    // nop
    // _021E66C4: .word Heap_AllocAtEnd
}




void ov01_021E66C8(void) {
    // bx r3
    // nop
    // _021E66D4: .word Heap_AllocAtEnd
}




void ov01_021E66D8(void) {
}




void ov01_021E66DC(void) {
}




void ov01_021E66E0(void) {
}



