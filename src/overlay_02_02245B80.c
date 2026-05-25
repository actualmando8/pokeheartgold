/* Decompiled from asm/overlay_02_02245B80.s */
#include "global.h"

void ov02_02245B80(void) {
    TaskManager_GetFieldSystem();
    ov02_02245B9C();
    TaskManager_Call(r4, ov02_02245BC8, r0);
}




void ov02_02245B9C(void) {
    // str r0, [r4]
}




void ov02_02245BC8(void) {
    TaskManager_GetEnvironment();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02245BE6: ; jump table
    ov02_02245D18((*((u16*)(*((u16*)(r0 + 8)) + 6)) << 0x10));
    *((u16*)(r4 + 0xa)) = 0;
    // add r0, #0xcc
    // str r1, [r0]
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    // add r0, #0xcc
    PlaySE(SEQ_SE_DP_FW411, 0);
    // add r0, #0xcc
    PlaySE(SEQ_SE_DP_F207);
    // add r0, #0xcc
    _s32_div_f(*((u32*)r4), 0xa);
    // asr r1, r1, #0x10
    PlaySE_SetPitch(SEQ_SE_DP_FW411, ((r0 - 5) << 0x16));
    // add r0, #0xcc
    // add r0, #0xcc
    // str r1, [r0]
    ov02_02245DE0(r4, (*((u32*)r4) + 1));
    *((u16*)(r4 + 0xa)) = (*((u16*)(r4 + 0xa)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0x00007FFF);
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    ov02_02245DE0((*((u16*)(r4 + 8)) + 1));
    IsPaletteFadeFinished();
    *((u16*)(r4 + 0xa)) = 0;
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    *((u16*)(r4 + 0xa)) = (*((u16*)(r4 + 0xa)) + 1);
    ov02_02245DB0((*((u16*)(r4 + 8)) + 1), (*((u16*)(r4 + 0xa)) + 1), *((u16*)(r4 + 0xa)));
    // add r0, #0x50
    ov01_021EA284(*((u32*)(r4 + 4)));
    ov01_021EA220(*((u32*)(*((u32*)(r4 + 4)) + 0x48)), 4);
    *((u32*)(*((u32*)(r4 + 4)) + 0x50)) = r0;
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0x00007FFF);
    *((u16*)(r4 + 8)) = (*((u16*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u16*)(r4 + 8)) + 1));
    Heap_Free(r4);
}




void ov02_02245D18(void) {
    // add r0, #0xbc
    // add r0, #0xc
    // str r0, [sp]
    // add r0, #0xbc
    // str r0, [sp, #4]
    // add r0, #0x1c
    // add r1, #0xc
    // str r0, [sp]
    // add r0, #0xbc
    // str r0, [sp, #4]
    // add r0, #0x30
    // add r1, #0xc
    // add r0, #0x44
    // add r1, #0xc
    // add r0, #0x44
    // add r1, #0x1c
    // add r0, #0x44
    // add r1, #0x30
    // add r0, #0x44
    // add r4, #0x44
}




void ov02_02245DB0(void) {
}




void ov02_02245DE0(void) {
    // add r0, #0x1c
    // add r0, #0x30
    // add r4, #0x44
}




void ov02_02245E04(void) {
    // add r0, #0xa0
    // str r6, [r0]
    // add r0, #0x8c
    // add r0, #0x10
    // add r0, #0x10
    // add r0, #0x9e
    // strh r1, [r0]
}




void ov02_02245E68(void) {
    // add r0, #0x10
    // add r0, #0x9c
    // str r0, [sp]
    // add r0, #0x8c
    // add r7, #0x10
    // str r0, [sp]
    // add r1, #0x88
    // add r1, r1, r4
    // add r0, #0x88
    // ldr r1, [sp]
    // add r0, r0, r4
    // add r0, #0x9c
    // add r4, #0x14
    // add r0, #0x9c
    // strb r1, [r0]
    // add r0, #0x88
}




void ov02_02245ED8(void) {
    // str r3, [sp, #0xc]
    // add r0, #0x9c
    // str r1, [sp, #8]
    // str r0, [sp, #0x10]
    // add r0, #0x10
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x8c
    // str r0, [sp, #0x14]
    // add r1, #0x88
    // ldr r0, [sp, #0x10]
    // add r1, r1, r4
    // add r0, #0x88
    // ldr r1, [sp, #0x14]
    // add r0, r0, r4
    // add r0, #0x9c
    // add r4, #0x14
    // add r0, #0x88
    // ldr r0, [sp, #0xc]
    // add r1, #0x9c
    // strb r0, [r1]
    // add r1, #0x9c
    // add r0, #0xa0
    // add r1, #0x88
    // str r0, [r1]
    // add r2, #0x9c
    // add r0, #0x88
    // add r0, #0x9c
    // str r0, [sp, #0x18]
    // add r0, #0x8c
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, #0x10
    // str r0, [sp, #0x1c]
    // add r0, #0xa0
    // ldr r2, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // add r0, #0x88
    // add r0, r0, r4
    // add r1, #0x88
    // ldr r0, [sp, #0x1c]
    // add r1, r1, r4
    // add r0, #0x9c
    // add r4, #0x14
}




void ov02_02245FD0(void) {
    // add r0, #0x9c
    // add r0, #0x9e
    // add r0, #0x88
    // add r0, r0, r4
    // add r7, r7, r0
    // add r0, #0x9c
    // add r4, #0x14
    // add r0, #0x10
    // add r5, #0x9c
}




void ov02_02246048(void) {
    // add r0, #0x9c
    // add r0, #0x9e
    // add r0, #0x88
    // add r0, r0, r6
    // add r0, #0x9c
    // add r6, #0x14
    // add r5, #0x10
}




void ov02_022460AC(void) {
    TaskManager_GetFieldSystem();
    ov02_022460CC(r4);
    TaskManager_Call(r5, ov02_022460FC, r0);
}




void ov02_022460CC(void) {
    // str r0, [r4]
}




void ov02_022460FC(void) {
    TaskManager_GetEnvironment();
    // add r0, r2, r0
    ov02_02245E04((0xc * *((u16*)(r0 + 0x10))), *((u32*)r0), ov02_02253264);
    *((u32*)(r4 + 8)) = r0;
    // add r1, sp, #0
    PlayerAvatar_CopyPositionVector(*((u32*)(*((u32*)(r4 + 4)) + 0x40)));
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    // add r0, #0x10
    Field3dObject_SetPosEx(*((u32*)(r4 + 8)));
    PlaySE(*((u16*)(ov02_02253264 + (*((u16*)(r4 + 0x10)) * 0xc))), *((u16*)(r4 + 0x10)), (*((u16*)(r4 + 0x10)) * 0xc));
    *((u16*)(r4 + 0xc)) = (*((u16*)(r4 + 0xc)) + 1);
    ov02_02245FD0(*((u32*)(r4 + 8)));
    *((u16*)(r4 + 0xc)) = (*((u16*)(r4 + 0xc)) + 1);
    ov02_02245E68(*((u32*)(r4 + 8)));
    Heap_Free(r4);
}




void ShowLegendaryWing(void) {
    TaskManager_GetFieldSystem();
    ov02_022461AC(r4);
    TaskManager_Call(r5, ov02_022461DC, r0);
}




void ov02_022461AC(void) {
    // str r0, [r4]
}




void ov02_022461DC(void) {
    TaskManager_GetEnvironment();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022461FA: ; jump table
    // add r0, r1, r0
    ov02_02245E04((*((u8*)(r0 + 0x10)) << 3), *((u32*)r0));
    *((u32*)(r4 + 8)) = r0;
    // add r1, sp, #0
    PlayerAvatar_CopyPositionVector(*((u32*)(*((u32*)(r4 + 4)) + 0x40)));
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    // add r0, #0x10
    Field3dObject_SetPosEx(*((u32*)(r4 + 8)));
    PlaySE(SEQ_SE_GS_STOPPERKAIJO);
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov02_02245FD0(*((u32*)(r4 + 8)));
    ov02_02245ED8(*((u32*)(r4 + 8)), 0xae, *((u32*)(ov02_02253D80 + (*((u8*)(r4 + 0x10)) << 3))), 3);
    SysTask_CreateOnMainQueue(ov02_022462DC, r4, 0);
    *((u32*)(r4 + 0xc)) = r0;
    QueueScript(r5, 3, 0, 0);
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    SysTask_Destroy(*((u32*)(r4 + 0xc)));
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov02_02245FD0(*((u32*)(r4 + 8)));
    ov02_02245ED8(*((u32*)(r4 + 8)), 0xae, *((u32*)(ov02_02253D84 + (*((u8*)(r4 + 0x10)) << 3))), 3);
    *((u16*)(r4 + 0x12)) = (*((u16*)(r4 + 0x12)) + 1);
    ov02_02245FD0(*((u32*)(r4 + 8)));
    ov02_02245E68(*((u32*)(r4 + 8)));
    Heap_Free(r4);
}




void ov02_022462DC(void) {
}




void ov02_022462E8(void) {
    TaskManager_GetFieldSystem();
    ov02_02246304();
    TaskManager_Call(r4, ov02_02246330, r0);
}




void ov02_02246304(void) {
    // str r0, [r4]
}




void ov02_02246330(void) {
    TaskManager_GetEnvironment();
    ov02_02246398(*((u8*)(r0 + 8)));
    PlaySE(SEQ_SE_GS_AJITO_SIREN);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov02_02246490((*((u8*)(r4 + 8)) + 1));
    *((u8*)(r4 + 0xc)) = (*((u8*)(r4 + 0xc)) + 1);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    IsSEPlaying(SEQ_SE_GS_AJITO_SIREN, *((u8*)(r4 + 0xc)));
    ov02_02246444(r4);
    Heap_Free(r4);
}




void ov02_02246398(void) {
    *((u8*)(r0 + 0xd)) = 0;
    // sub r0, r0, r3
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 2, 5, *((u8*)(r0 + 0xd)));
    NARC_New(0xae, *((u32*)r5));
    // str r1, [sp]
    // str r1, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(0xc, 0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 0xd, *((u32*)(*((u32*)(r5 + 4)) + 8)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0xe, *((u32*)(*((u32*)(r5 + 4)) + 8)), 1);
    GetBgPriority(*((u32*)(*((u32*)(r5 + 4)) + 8)), 0);
    *((u8*)(r5 + 0xe)) = r0;
    GetBgPriority(*((u32*)(*((u32*)(r5 + 4)) + 8)), 1);
    *((u8*)(r5 + 0xf)) = r0;
    SetBgPriority(0, 1);
    SetBgPriority(1, 0);
    GfGfx_EngineATogglePlanes(2, 1);
    NARC_Delete(r4);
}




void ov02_02246444(void) {
    GfGfx_EngineATogglePlanes(2, 0);
    SetBgPriority(0, *((u8*)(r4 + 0xe)));
    SetBgPriority(1, *((u8*)(r4 + 0xf)));
    BgClearTilemapBufferAndCommit(*((u32*)(*((u32*)(r4 + 4)) + 8)), 1);
    BG_ClearCharDataRange(1, 0x40, 0, *((u32*)r4));
    // str r1, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 0, 0x1f);
}




void ov02_02246490(void) {
    *((u8*)(r0 + 0xb)) = 0;
    *((u8*)(r0 + 0xa)) = 0;
    *((u8*)(r0 + 0xd)) = 0;
    *((u8*)(r0 + 9)) = (*((u8*)(r0 + 9)) + 1);
    *((u8*)(r0 + 0xb)) = (*((u8*)(r0 + 0xb)) + 1);
    // sub r0, r0, r3
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 2, 5, *((u8*)(r0 + 0xd)));
    *((u8*)(r4 + 0xa)) = (*((u8*)(r4 + 0xa)) + 1);
    *((u8*)(r4 + 0xd)) = ((*((u8*)(r4 + 0xd)) + 1) - 1);
    *((u8*)(r4 + 0xb)) = 0;
    *((u8*)(r4 + 9)) = (*((u8*)(r4 + 9)) + 1);
    *((u8*)(r4 + 0xa)) = 0;
    *((u8*)(r4 + 0xb)) = 0;
    *((u8*)(r4 + 9)) = 0;
}




void ov02_0224650C(void) {
}




void ov02_02246534(void) {
}




void ov02_02246548(void) {
    // add r0, sp, #0x10
    // add r0, sp, #0
    // add r4, sp, #0
    // add r3, #0x20
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldmia r4!, {r0, r1}
    // add r3, #0x2c
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void ov02_0224662C(void) {
    *((u16*)(r0 + 0x10)) = 0;
}




void ov02_0224663C(void) {
    // add r0, #0x10
    // strh r1, [r0]
    // strh r1, [r0]
    // asr r3, r2, #0x1f
    // asr r1, r0, #0x1f
    // add r0, r0, r2
    // adc r1, r3
    // ldrsh r2, [r5, r2]
    // asr r6, r4, #0x1f
    // asr r3, r2, #0x1f
    // add r0, r2, r0
    // adc r3, r7
    // add r0, r1, r0
    // ldrsh r2, [r5, r2]
    // asr r3, r2, #0x1f
    // add r4, r0, r4
    // adc r1, r3
    // add r0, r2, r1
}




void ov02_02246714(void) {
    TaskManager_GetFieldSystem();
    // add r1, sp, #8
    // str r1, [sp]
    ov02_02246744(r4, r6, r7);
    TaskManager_Call(r5, ov02_02246798, r0);
}




void ov02_02246744(void) {
    // str r3, [sp, #4]
    // str r1, [r4]
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r3, [sp, #4]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
}




void ov02_02246798(void) {
}




void OpenAlphHiddenRoom(void) {
    TaskManager_GetFieldSystem();
    ov02_022467E8(((r5 << 0x18) >> 0x18));
    TaskManager_Call(r4, ov02_02246818, r0);
}




void ov02_022467E8(void) {
    // str r0, [r4]
}




void ov02_02246818(void) {
    TaskManager_GetEnvironment();
    ov02_0224686C(*((u8*)(r0 + 0x18)));
    PlaySE(0x000005DC);
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) + 1);
    ov02_022469A0((*((u8*)(r4 + 0x18)) + 1));
    PlaySE(0x000005DC);
    *((u8*)(r4 + 0x18)) = (*((u8*)(r4 + 0x18)) + 1);
    ov02_02246964(r4);
    Heap_Free(r4);
}




void ov02_0224686C(void) {
    NARC_New(0xae, *((u32*)r0));
    // str r1, [sp]
    // str r1, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(0xf, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 0x10, *((u32*)(*((u32*)(r5 + 4)) + 8)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0x11, *((u32*)(*((u32*)(r5 + 4)) + 8)), 1);
    GetBgPriority(*((u32*)(*((u32*)(r5 + 4)) + 8)), 1);
    *((u8*)(r5 + 0x1a)) = r0;
    SetBgPriority(1, 0);
    GfGfx_EngineATogglePlanes(2, 1);
    NARC_Delete(r4);
    // add r1, #8
    AddWindow(*((u32*)(*((u32*)(r5 + 4)) + 8)), r5, ov02_0225324C);
    // add r0, #8
    FillWindowPixelBuffer(r5, 9);
    NewMsgDataFromNarc(0, 0x1b, 0xc6, *((u32*)r5));
    NewString_ReadMsgData(*((u8*)(r5 + 0x19)));
    FontID_String_GetWidth(3, r0, 0);
    // sub r6, r3, r6
    // add r3, r6, r3
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #8
    // asr r3, r3, #1
    AddTextPrinterParameterizedWithColor(r5, 3, r7, (((r0 << 0x18) >> 0x18) >> 0x1f));
    // add r5, #8
    ScheduleWindowCopyToVram(r5);
    String_Delete(r7);
    DestroyMsgData(r4);
}




void ov02_02246964(void) {
    // add r0, #8
    // add r0, #8
}




void ov02_022469A0(void) {
    // tst r1, r0
}




void ov02_022469B4(void) {
    TaskManager_GetFieldSystem();
    ov02_022469D8(r4, r6);
    TaskManager_Call(r5, ov02_02246A34, r0);
}




void ov02_022469D8(void) {
    // str r0, [r4]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
}




void ov02_02246A34(void) {
}



