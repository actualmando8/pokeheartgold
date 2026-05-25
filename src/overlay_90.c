/* Decompiled from asm/overlay_90.s */
#include "global.h"

void ov90_02258800(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // strb r0, [r2]
    // add r0, r6, r5
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [r6]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x20]
}




void ov90_0225886C(void) {
    // add r2, r0, r3
}




void ov90_0225888C(void) {
}




void ov90_022588A4(void) {
    // add r0, r2, r1
    // mvn r0, r0
    // add r0, r2, r1
}




void ov90_022588CC(void) {
    // add r0, r1, r0
}




void ov90_02258914(void) {
}




void ov90_02258920(void) {
}




void ov90_0225892C(void) {
}




void ov90_02258938(void) {
    SysTask_Destroy(*((u32*)(r0 + 0x000005EC)));
    SysTask_Destroy(*((u32*)(r5 + (0x5f << 4))));
    // add r0, r5, r0
    ov90_0225A108((0xb9 << 2));
    // add r0, r5, r0
    ov90_0225A340((0x73 << 2));
    // add r4, r5, r0
    ov90_02259EAC(r4);
    // add r4, #0x38
    // add r0, #0x4c
    ov90_02259434(r5);
    ov90_02259784(r5);
    // add r0, #0x3c
    ov90_022591D4(r5);
    // add r0, r5, r0
    ov90_02258E10((0x1b << 4));
    // add r0, #0x84
    ov90_02259158(r5);
    // add r0, #0x30
    ov90_02259084(r5);
    Heap_Free(r5);
}




void ov90_022589BC(void) {
    // ldrb r0, [r0]
}




void ov90_022589CC(void) {
}




void ov90_022589E0(void) {
}




void ov90_022589EC(void) {
}




void ov90_022589F8(void) {
}




void ov90_02258A04(void) {
    SysTask_Destroy(*((u32*)(r0 + 0x00000644)));
    SysTask_Destroy(*((u32*)(r5 + 0x00000648)));
    // add r0, r5, r0
    ov90_0225A108((0xcf << 2));
    // add r4, r5, r0
    ov90_02259EAC(r4);
    // add r4, #0x38
    // add r0, r5, r0
    ov90_0225B380((0x7a << 2));
    ov90_0225A960(r5);
    // add r0, #0x68
    ov90_02259434(r5);
    // add r0, #0x58
    ov90_022591D4(r5);
    // add r0, r5, r0
    ov90_02258E10((0x73 << 2));
    // add r0, #0xa0
    ov90_02259158(r5);
    // add r0, #0x4c
    ov90_02259084(r5);
    // strh r1, [r0]
    // strh r1, [r0]
    GF_DestroyVramTransferManager(0x04001050, 0);
    Heap_Free(r5);
}




void ov90_02258AA0(void) {
}




void ov90_02258AA4(void) {
}




void ov90_02258AA8(void) {
    // mov ip, r1
    // add r0, sp, #0
    // add r4, r0, r7
    // strb r1, [r4]
    // add r0, sp, #0
    // strb r7, [r0, r2]
    // mov r0, ip
    // mov r0, ip
    // add r3, sp, #0
    // add r0, r5, r1
    // add r0, r5, r0
    // mov r0, ip
}




void ov90_02258B24(void) {
}




void ov90_02258B2C(void) {
}




void ov90_02258B44(void) {
    // add r0, r0, r2
}




void ov90_02258B54(void) {
}




void ov90_02258B98(void) {
}




void ov90_02258BD4(void) {
    Heap_Alloc(r1, (0x73 << 2));
    memset(0, (0x73 << 2));
    *((u32*)(r4 + 8)) = r6;
    NARC_New(0xc8, r5);
    *((u32*)(r4 + 0xc)) = r0;
    // add r0, #0x10
    ov90_02258DD0(r4, 1, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r5, [sp, #0x10]
    // add r0, #0x10
    ov90_02258E54(r4, *((u32*)(r4 + 0xc)), 3, 3);
    *((u32*)(r4 + 0x28)) = r0;
}




void ov90_02258C38(void) {
    // add r0, #0x34
    // add r0, #0x10
}




void ov90_02258C74(void) {
    SpriteResourceCollection_Find(*((u32*)(r0 + 0x14)), 0x00001388);
    SpriteTransfer_GetPlttOffset(1);
}




void ov90_02258C8C(void) {
    GF_AssertFail(*((u32*)(r0 + 0x2c)));
    SysTask_CreateOnMainQueue(ov90_0225BEE0, r4, 0);
    *((u32*)(r4 + 0x2c)) = r0;
    *((u16*)(r4 + 4)) = 1;
}




void ov90_02258CB0(void) {
    GF_AssertFail(*((u32*)(r0 + 0x2c)));
    SysTask_CreateOnMainQueue(ov90_0225C06C, r4, 0);
    *((u32*)(r4 + 0x2c)) = r0;
    *((u16*)(r4 + 4)) = 1;
    PlaySE(0x000005F1);
}




void ov90_02258CE0(void) {
    // cmp r0, #0
    // bne _02258CEA
}




void ov90_02258CF0(void) {
    // ldr r4, [sp, #0x18]
    // str r3, [sp]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // sub r0, r7, r6
    // add r2, r2, r7
    // adc r1, r3
    // sub r2, r0, r2
    // asr r1, r2, #0x1f
    // add r0, r0, r7
    // adc r1, r3
    // str r6, [r5]
    // ldr r1, [sp]
}




void ov90_02258D4C(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r0, r0, r2
    // adc r1, r3
    // add r0, r6, r0
    // add r0, r1, r0
    // str r0, [r5]
}




void ov90_02258DB0(void) {
    // add r0, #0xc
    // add r2, r2, r1
    // strh r2, [r0]
}




void ov90_02258DD0(void) {
    // str r0, [sp]
    // stmia r5!, {r0}
    // ldr r1, [sp]
    // ldr r0, [sp]
}




void ov90_02258E10(void) {
    // add r1, r1, r4
    // add r4, #0x38
}




void ov90_02258E54(void) {
    // str r1, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // add r4, r3, r0
    // add r2, #0x38
    // ldr r0, [sp, #0x38]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x40]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x48]
    // str r0, [sp, #0x14]
}




void ov90_02258EB4(void) {
    // add r0, #0x14
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // add r0, sp, #0x18
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0
}




void ov90_02258EE0(void) {
    // str r2, [sp, #0x2c]
    // str r3, [sp, #0x30]
    // ldr r7, [sp, #0x58]
    // str r0, [r4]
    // str r7, [sp]
    // ldr r6, [sp, #0x5c]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x4c]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x48]
    // ldr r1, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r2, [sp, #0x30]
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x50]
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x54]
    // str r7, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r4, #0x14
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
}




void ov90_02258FB8(void) {
    // str r0, [r4]
}




void ov90_02258FF0(void) {
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // str r3, [sp]
    SetBothScreensModesAndDisable(r1);
    // ldr r0, [sp, #0x18]
    BgConfig_Alloc();
    // str r0, [r5]
    // ldr r0, [sp]
    *((u32*)(r5 + 4)) = r6;
    *((u32*)(r5 + 8)) = r0;
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    // ldr r0, [sp]
    InitBgFromTemplate(*((u32*)r5), ((*((u32*)r6) << 0x18) >> 0x18), (r6 + 4), 0);
    // ldr r3, [sp, #0x18]
    BG_ClearCharDataRange(((*((u32*)r4) << 0x18) >> 0x18), 0x20, 0);
    BgClearTilemapBufferAndCommit(*((u32*)r5), ((*((u32*)r4) << 0x18) >> 0x18));
    BgSetPosTextAndCommit(*((u32*)r5), ((*((u32*)r4) << 0x18) >> 0x18), 0, 0);
    BgSetPosTextAndCommit(*((u32*)r5), ((*((u32*)r4) << 0x18) >> 0x18), 3, 0);
    // ldr r0, [sp]
    // add r6, #0x20
    // add r4, #0x20
}




void ov90_02259084(void) {
    // add r4, #0x20
}




void ov90_022590C0(void) {
}




void ov90_022590CC(void) {
    // str r1, [sp, #0x14]
    // str r3, [sp, #0x18]
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r4, [sp, #0x40]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r4, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x1f);
    // add r2, sp, #0x1c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r6, [sp, #0x1c]
    // str r4, [sp, #0x28]
    ObjCharTransfer_InitEx(r2, 0x10, 0x10, ov90_0225C294);
    // ldr r0, [sp, #0x18]
    ObjPlttTransfer_Init(r4);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x10);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    // ldr r0, [sp, #0x14]
    G2dRenderer_Init((r5 + 4), r4);
    // str r0, [r5]
    sub_0203A880();
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}




void ov90_02259158(void) {
}




void ov90_02259170(void) {
}




void ov90_0225917C(void) {
}




void ov90_02259184(void) {
    // str r0, [r5]
}




void ov90_022591D4(void) {
}




void ov90_022591F4(void) {
}




void ov90_02259200(void) {
    // bx r3
    // nop
    // _0225920C: .word BufferPlayersName
}




void ov90_02259210(void) {
    // bx r3
    // nop
    // _0225921C: .word BufferCountryName
}




void ov90_02259220(void) {
}




void ov90_02259234(void) {
}




void ov90_02259250(void) {
}




void ov90_0225926C(void) {
    // bx r3
    // nop
    // _02259278: .word BufferWiFiPlazaInstrumentName
}




void ov90_0225927C(void) {
    // bx r3
    // nop
    // _02259288: .word BufferWiFiPlazaActivityName
}




void ov90_0225928C(void) {
}




void ov90_022592A8(void) {
}




void ov90_022592C4(void) {
    ReadMsgDataIntoString(*((u32*)r0), *((u32*)(r0 + 0xc)));
    StringExpandPlaceholders(*((u32*)(r5 + 4)), *((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)));
    FontID_String_GetWidth(0, *((u32*)(r5 + 8)), 0);
    // sub r3, r4, r0
    // bpl _022592F0
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, *((u32*)(r5 + 8)), 0);
}




void ov90_02259314(void) {
    ReadMsgDataIntoString(*((u32*)r0), *((u32*)(r0 + 0xc)));
    StringExpandPlaceholders(*((u32*)(r5 + 4)), r4, *((u32*)(r5 + 0xc)));
    // ldr r0, [sp, #0x20]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 1, r4, 0);
}




void ov90_02259350(void) {
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
}




void ov90_0225938C(void) {
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // str r3, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #4]
    // ldr r4, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x30]
    // add r4, #0x10
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
}




void ov90_02259434(void) {
    // add r6, #0x10
}




void ov90_02259464(void) {
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x20
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // str r0, [sp, #0xc]
    TextPrinterCheckActive(((*((u16*)((0 + 1) + (r3 << 1))) << 0x18) >> 0x18), (0 + 1), (ov90_0225C34C + 4));
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    RemoveTextPrinter(((*((u16*)(r1 + r0)) << 0x18) >> 0x18));
    ov90_02259570(r5, r6);
    // add r0, r5, r7
    FillWindowPixelBuffer(0xf);
    // str r0, [sp]
    // add r3, r5, r3
    // ldr r0, [sp, #4]
    // add r2, r5, r7
    ov90_02259314(1, r4, *((u32*)((r6 << 2) + 0x24)));
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // strh r0, [r2, r1]
    // add r0, r5, r7
    DrawFrameAndWindow2(1, 1, 0xd);
    // add r0, r5, r7
    ScheduleWindowCopyToVram();
}




void ov90_022594FC(void) {
    // add r6, #0x20
    // add r0, r5, r4
    // add r0, r5, r4
}




void ov90_02259538(void) {
}




void ov90_02259554(void) {
}




void ov90_02259570(void) {
}




void ov90_02259588(void) {
    Sound_SetSceneAndPlayBGM(0x13, (0x12 << 6), 0);
    Heap_Alloc(r5, 0x000005F4);
    memset(0, 0x000005F4);
    // add r2, #8
    // strb r0, [r2]
    *((u16*)(r4 + 4)) = r7;
    // strh r1, [r3]
    // sub r3, #0x50
    // strh r1, [r0]
    // sub r0, #0x50
    // and r2, r1
    // str r2, [r3]
    // and r1, r2
    // str r1, [r0]
    GfGfx_SetBanks(ov90_0225C2CC, 0xFFFF1FFF, *((u32*)0x04001050), 0x04000050);
    *((u16*)(r4 + 2)) = r5;
    ov90_0225C178(r4);
    // add r0, #0x18
    // add r1, #8
    ov90_0225A204(r4, r4);
    // add r0, #0x30
    // str r5, [sp]
    ov90_02258FF0(r4, ov90_0225C2A4, ov90_0225C39C, 5);
    // add r0, #0x84
    // str r5, [sp]
    ov90_022590CC(r4, 0x10, 1, 1);
    // add r0, r4, r0
    ov90_02258DD0((0x1b << 4), 1, r5);
    // add r0, #0x3c
    ov90_02259184(r4, r5);
    ov90_022596C8(r4, r5);
    // add r0, #8
    ov90_0225888C(r4, *((u8*)(r4 + 0x11)));
    // add r0, #8
    ov90_022588A4(r4, r0);
    // str r5, [sp]
    // add r0, #0x4c
    // add r1, #0x30
    ov90_0225938C(r4, r4, *((u32*)(r4 + 8)), r0);
    SysTask_CreateOnMainQueue(ov90_02259794, r4, 0);
    // str r0, [r4, r1]
    SysTask_CreateOnVWaitQueue(ov90_02259B18, r4, 0);
    // str r0, [r4, r1]
    ov00_021E69A8(r5, (0x5f << 4));
    Save_GameStats_Get(*((u32*)(r4 + 8)));
    GameStats_AddScore(0x27);
}




void ov90_022596C8(void) {
    NARC_New(0xc8);
    // str r1, [sp]
    // str r4, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(4, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 6, *((u32*)(r5 + 0x30)), 1);
    // add r3, r5, r3
    // str r4, [sp]
    GfGfxLoader_GetScrnDataFromOpenNarc(r6, 9, 0, (2 << 8));
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 8, *((u32*)(r5 + 0x30)), 3);
    ov90_0225A65C(r6, *((u16*)(r5 + 4)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    // str r4, [sp, #0x10]
    ov90_02258E54((0x1b << 4), r6, 0xb, 5);
    // str r0, [r5, r1]
    // str r6, [sp]
    // str r4, [sp, #4]
    // add r0, r5, r0
    // add r1, #0x30
    // add r2, #0x3c
    ov90_0225A2B0(((0x72 << 2) + 4), r5, r5, *((u16*)(r5 + 4)));
    NARC_Delete(r6);
}




void ov90_02259784(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _02259790: .word Heap_Free
}




void ov90_02259794(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022597AE: ; jump table
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0x0000FFFF);
    // add r0, r4, r0
    // add r1, #0x30
    ov90_0225A350((0x73 << 2), r4, *((u16*)(r4 + 2)));
    // strb r0, [r4]
    // add r0, r4, r0
    // add r1, #0x30
    ov90_0225A428((0x73 << 2), r4);
    IsPaletteFadeFinished();
    // strb r0, [r4]
    // add r0, r4, r0
    // add r1, #0x30
    ov90_0225A428((0x73 << 2), r4);
    // strb r0, [r4]
    // add r0, #0x4c
    // add r1, #0x3c
    ov90_02259464(r4, r4, 0, 0);
    // strb r0, [r4]
    // add r0, #0x4c
    ov90_02259538(r4, 0);
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = 0x40;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) - 1);
    // add r0, #0x4c
    ov90_022594FC(r4, 0);
    // add r0, r4, r0
    // add r1, #0x30
    ov90_0225A3E0((0x73 << 2), r4);
    // strb r0, [r4]
    // add r0, r4, r0
    // add r1, #0x30
    ov90_0225A544((0x73 << 2), r4);
    // strb r0, [r4]
    // add r0, r4, r0
    // add r1, #0x30
    ov90_0225A088((0xb9 << 2), r4, *((u16*)(r4 + 2)));
    // add r0, #8
    // add r1, #0x18
    ov90_0225A258(r4, r4);
    // str r0, [sp, #0x1c]
    // add r5, r4, r0
    // str r0, [sp, #0x20]
    // add r0, #0x30
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // add r0, #0x84
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #8
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // add r0, #0x3c
    // str r4, [sp, #0x18]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov90_02259BCC(r5, *((u8*)(r4 + 0x10)), *((u16*)(r4 + 4)), *((u32*)(r4 + (2 << 8))));
    // ldr r0, [sp, #0x28]
    ov90_0225888C(r6);
    // ldr r0, [sp, #0x28]
    ov90_022588A4(r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0x2c]
    ov90_02259D50(r5, 0, *((u32*)(r2 + 0x20)), 8);
    // add r3, r4, r6
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    ov90_02259DAC(r5, *((u8*)(r3 + 0x18)));
    // mvn r1, r1
    // asr r2, r2, #0x10
    ov90_02259EE0(r5, 7, (r7 << 0x10));
    // ldr r0, [sp, #0x18]
    // add r5, #0x38
    // str r0, [sp, #0x18]
    // add r5, r4, r0
    // add r7, #0x30
    ov90_02259E8C(r5, r4);
    ov90_02259EA0(r5);
    // add r5, #0x38
    *((u8*)(r4 + 1)) = 0x5c;
    // strb r0, [r4]
    ov90_02259B68(r4);
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) - 1);
    // strb r0, [r4]
    sub_02037AC0(0x81);
    ov00_021E6A4C(*((u8*)(r4 + 0x12)));
    sub_02037B38(0x81);
    // strb r0, [r4]
    // add r5, r4, r0
    // asr r1, r1, #0x10
    ov90_02259F44(r5, (0 << 0x10));
    // add r5, #0x38
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = 8;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) - 1);
    ov90_02259B68(r4);
    // strb r0, [r4]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 1, 0);
    ov90_02259B68(r4);
    ov90_02259B38(ov90_0225C1E8, 3);
    // str r0, [sp, #0x30]
    ov90_02259B38(_0225C1E0, 2);
    // str r0, [sp, #0x30]
    ov90_02259B38(ov90_0225C1E4, 3);
    // str r0, [sp, #0x30]
    // add r1, sp, #0x30
    sub_02037030(0x1a, 4);
    // strb r0, [r4]
    ov90_02259B68(r4);
    IsPaletteFadeFinished();
    // add r0, r4, r0
    ov90_0225A108((0xb9 << 2));
    // strb r0, [r4]
    // strb r0, [r4]
    // add r0, #0x84
    ov90_02259170(r4, *((u8*)(r4 + 7)));
    ScheduleSetBgPosText(*((u32*)(r4 + 0x30)), 3, 4, 2);
    ScheduleSetBgPosText(*((u32*)(r4 + 0x30)), 5, 4, 2);
}




void ov90_02259B18(void) {
    // add r0, #0x30
    // add r0, #0x84
    // add r0, r4, r0
}




void ov90_02259B38(void) {
    // add r3, r3, r2
}




void ov90_02259B68(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r6, r7, r0
    // str r0, [sp, #8]
    // add r0, r7, r0
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r4, #0x38
    // add r6, #0x38
    // add r5, #0x38
    // str r0, [sp, #4]
    // ldr r0, [sp]
}




void ov90_02259BCC(void) {
    // ldr r0, [sp, #0x48]
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x54]
    // str r1, [sp, #0x1c]
    // ldr r4, [sp, #0x4c]
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x50]
    ov90_0225A050(r4);
    // ldr r0, [sp, #0x50]
    SetBgPriority(1, 2);
    SetBgPriority(0, 1);
    // ldr r1, [sp, #0x1c]
    // str r2, [sp, #0x2c]
    // ldr r1, [sp, #0x2c]
    // add r1, r2, r1
    // str r1, [sp, #0x28]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x48]
    AddWindowParameterized(*((u32*)((0x00000201 << 0x10) >> 0x10)), r5, 0, 5);
    FillWindowPixelBuffer(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xc
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // str r2, [sp, #0xc]
    // add r0, r1, r0
    // ldr r3, [sp, #0x28]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x48]
    CopyToBgTilemapRect(*((u32*)((*((u16*)(r6 + 2)) << 0x15) >> 0x18)), 1, 0);
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x2c]
    // add r0, r1, r0
    // ldr r1, [sp, #0x54]
    // ldrsh r2, [r2, r6]
    // str r0, [sp, #0x24]
    // ldrsh r6, [r3, r6]
    // str r0, [sp]
    // ldr r0, [sp, #0x5c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #4]
    // add r3, r6, r3
    // ldr r0, [sp, #0x58]
    ov90_02258EB4(0, *((u32*)ov90_0225C318), ((ov90_0225C274 << 0x18) >> 0x18), ((ov90_0225C276 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x24]
    *((u32*)(r5 + 0x10)) = r0;
    Sprite_SetAnimCtrlSeq();
    Sprite_SetPalOffset(*((u32*)(r5 + 0x10)), r4);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x10)), 0);
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x10)), 1);
    // str r0, [sp]
    // ldr r0, [sp, #0x5c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x54]
    // add r3, #0x15
    // str r3, [sp, #0x20]
    // ldr r0, [sp, #0x58]
    ov90_02258EB4(0, *((u32*)r1), 0x18, ((r3 << 0x18) >> 0x18));
    *((u32*)(r5 + 0x14)) = r0;
    Sprite_SetAnimCtrlSeq(0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x14)), 0);
    *((u8*)(r5 + 0x1a)) = r4;
    // ldr r0, [sp, #0x1c]
    *((u8*)(r5 + 0x1b)) = r7;
    *((u16*)(r5 + 0x18)) = r0;
}




void ov90_02259D50(void) {
    ov90_02259200(r1, r2);
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #8
    // ldrsh r0, [r1, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    ov90_02259350(r5, 0xa, r6, ((r4 << 0x18) >> 0x18));
    // ldrsh r0, [r1, r0]
    // str r0, [sp]
    ov90_022592A8(r5, 0xa, r6, ((r4 << 0x18) >> 0x18));
}




void ov90_02259DAC(void) {
    // str r0, [sp]
    // add r4, sp, #8
    // ldrsh r3, [r4, r3]
    // ldr r2, [sp, #0x18]
    // str r0, [sp]
    // add r4, sp, #8
    // ldrsh r3, [r4, r3]
}




void ov90_02259E18(void) {
}




void ov90_02259E38(void) {
    // ldr r2, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #8
    // ldrsh r0, [r1, r0]
    // str r0, [sp]
    // ldrsh r0, [r1, r0]
    // str r0, [sp]
}




void ov90_02259E8C(void) {
}




void ov90_02259EA0(void) {
}




void ov90_02259EAC(void) {
}




void ov90_02259EE0(void) {
    _fflt((r1 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r1 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp]
    // add r0, #0x1c
    ov90_02258CF0(r5, 0xFFF01000, r0, (7 << 0xe));
    *((u16*)(r5 + 0x30)) = 0;
    *((u16*)(r5 + 0x32)) = r4;
    *((u32*)(r5 + 0x34)) = 0x0000057E;
    // asr r1, r1, #0xc
    // neg r1, r1
    ov90_02259FC8(r5, *((u32*)(r5 + 0x1c)));
}




void ov90_02259F44(void) {
    // str r0, [sp]
    // add r0, #0x1c
    ov90_02258CF0(r0, *((u32*)(r0 + 0x1c)), 0xFFF01000, 0);
    *((u16*)(r5 + 0x30)) = 0;
    *((u16*)(r5 + 0x32)) = r4;
    *((u32*)(r5 + 0x34)) = 0x0000057F;
    // asr r1, r1, #0xc
    // neg r1, r1
    ov90_02259FC8(r5, *((u32*)(r5 + 0x1c)));
}




void ov90_02259F7C(void) {
    // ldrsh r0, [r5, r0]
    // ldrsh r0, [r5, r0]
    // ldrsh r0, [r5, r1]
    // ldrsh r1, [r5, r1]
    // add r0, #0x1c
    // asr r1, r1, #0xc
    // neg r1, r1
}




void ov90_02259FC8(void) {
    // add r0, r0, r3
    // add r3, r6, r3
    // ldrsh r0, [r0, r1]
    // add r0, r0, r2
    // ldrsh r1, [r2, r1]
    // add r1, r1, r4
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r0 + 0x10)), ((((*((u8*)(*((u8*)(r0 + 0x1b)) + ov90_0225C324)) << 2) << 0x18) >> 0x18) << 0xc), ov90_0225C274, ((*((u16*)(r0 + 0x18)) - 1) * 0xc));
    // add r4, #0x18
    // add r0, r0, r2
    // add r0, #0x15
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r5 + 0x14)), (((*((u8*)(*((u8*)(r5 + 0x1b)) + r6)) << 3) << 0x18) >> 0x18), ((*((u16*)(r5 + 0x18)) - 1) * 0xc));
}




void ov90_0225A050(void) {
    // add r7, r7, r6
    // sub r0, r3, r0
    // bpl _0225A07C
    // add r0, r0, r5
}




void ov90_0225A088(void) {
    // str r2, [sp]
    GF_AssertFail(*((u32*)(r0 + (0xc1 << 2))));
    // str r4, [r6]
    // sub r3, #0xff
    BgSetPosTextAndCommit(*((u32*)r4), 0, 0, 0);
    // sub r3, #0xff
    BgSetPosTextAndCommit(*((u32*)*((u32*)r6)), 1, 0, 0);
    MIi_CpuClear16(0x0000FF01, (r6 + 4), (6 << 6));
    // add r5, r5, r7
    // ldr r0, [sp]
    // add r2, r6, r2
    sub_02014A08((r6 + 4), (0x61 << 2));
    // str r0, [r6, r1]
    sub_02014A78(*((u32*)(r6 + (0xc1 << 2))), 0);
    Main_SetHBlankIntrCB(ov90_0225A1B8, r6);
}




void ov90_0225A108(void) {
    // str r1, [r4, r0]
}




void ov90_0225A134(void) {
    // str r0, [sp]
    GF_AssertFail(*((u32*)(r0 + (0xc1 << 2))), (0xc1 << 2));
    // ldr r0, [sp]
    sub_02014A4C(*((u32*)(r0 + (0xc1 << 2))), (0xc1 << 2));
    // add r2, r1, r2
    // add r0, r0, r2
    // sub r0, #0xc
    // add r2, r3, r0
    // bpl _0225A176
    // add r2, #0xc0
    // asr r0, r0, #0xc
    // strh r0, [r5, r2]
    // ldr r0, [sp]
    sub_02014A78(*((u32*)(*((u32*)(r4 + 0x1c)) + (0xc1 << 2))), 1, ((*((u16*)(r4 + 0x18)) * 0xc) << 1), (0 - 1));
}




void ov90_0225A198(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov90_0225A1B8(void) {
    sub_02014A60(*((u32*)(r0 + (0xc1 << 2))));
    // tst r0, r1
    // ldrsh r3, [r6, r4]
    BgSetPosTextAndCommit(*((u32*)*((u32*)r5)), 0, 0);
    // ldrsh r3, [r6, r4]
    BgSetPosTextAndCommit(*((u32*)*((u32*)r5)), 1, 0);
}




void ov90_0225A204(void) {
    // str r0, [sp]
    // ldr r6, [sp]
    // add r1, r5, r4
    // add r0, r5, r4
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r7, r0, r4
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // strb r0, [r1, r4]
    // ldr r0, [sp, #4]
}




void ov90_0225A258(void) {
    // add r4, r1, r2
}




void ov90_0225A28C(void) {
    // add r0, r0, r1
    // add r0, r0, r4
}




void ov90_0225A2B0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r1), r0, 1, 6);
    FillWindowPixelBuffer(r5, 0);
    // ldr r1, [sp, #0x2c]
    String_New(0x80);
    *((u32*)(r5 + 0x14)) = r0;
    ov90_0225927C(r7, r6);
    ov90_0225928C(r7, *((u32*)(r5 + 0x14)), 0x10);
    *((u32*)(r5 + 0x10)) = r6;
    GfGfx_EngineATogglePlanes(1, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    GfGfxLoader_LoadCharDataFromOpenNarc(7, *((u32*)r4), 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    GfGfxLoader_LoadScrnDataFromOpenNarc(0xa, *((u32*)r4), 0);
}




void ov90_0225A340(void) {
}




void ov90_0225A350(void) {
    *((u16*)(r0 + 0x2c)) = 0;
    *((u16*)(r0 + 0x2e)) = 0;
    // str r0, [sp]
    // add r0, #0x18
    ov90_02258CF0(r0, *((u32*)(ov90_0225C258 + (*((u32*)(r0 + 0x10)) << 2))), *((u32*)(ov90_0225C228 + (*((u32*)(r0 + 0x10)) << 2))), *((u32*)(ov90_0225C21C + (*((u32*)(r0 + 0x10)) << 2))));
    // asr r2, r2, #0xc
    ov90_0225A5BC(r5, r4, *((u32*)(r5 + 0x18)));
    FontID_Alloc(2, r7);
    FontID_String_GetWidth(2, *((u32*)(r5 + 0x14)), 0);
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // sub r3, r3, r4
    AddTextPrinterParameterizedWithColor(r5, 2, *((u32*)(r5 + 0x14)), 0x50);
    FontID_Release(2);
    GfGfx_EngineATogglePlanes(1, 1);
}




void ov90_0225A3E0(void) {
    *((u16*)(r0 + 0x2c)) = 0;
    *((u16*)(r0 + 0x2e)) = 0;
    // str r0, [sp]
    // add r0, #0x18
    ov90_02258CF0(r0, *((u32*)(ov90_0225C228 + (*((u32*)(r0 + 0x10)) << 2))), *((u32*)(ov90_0225C1F8 + (*((u32*)(r0 + 0x10)) << 2))), *((u32*)(ov90_0225C204 + (*((u32*)(r0 + 0x10)) << 2))));
    // asr r2, r2, #0xc
    ov90_0225A60C(r5, r4, *((u32*)(r5 + 0x18)));
}




void ov90_0225A428(void) {
    // ldrsh r0, [r4, r0]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225A444: ; jump table
    // ldrsh r1, [r4, r1]
    // add r0, #0x18
    ov90_02258D4C(r0, 0x2c);
    // asr r2, r2, #0xc
    ov90_0225A60C(r4, r5, *((u32*)(r4 + 0x18)));
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x2c)) = (0x2c + 1);
    PlaySE(0x00000581);
    // str r0, [sp]
    // add r0, #0x18
    ov90_02258CF0(r4, *((u32*)(ov90_0225C228 + (*((u32*)(r4 + 0x10)) << 2))), *((u32*)(ov90_0225C234 + (*((u32*)(r4 + 0x10)) << 2))), *((u32*)(ov90_0225C240 + (*((u32*)(r4 + 0x10)) << 2))));
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x2e)) = (0x2e + 1);
    *((u16*)(r4 + 0x2c)) = 0;
    // ldrsh r1, [r4, r1]
    // add r0, #0x18
    ov90_02258D4C(r4, 0x2c);
    // asr r2, r2, #0xc
    ov90_0225A60C(r4, r5, *((u32*)(r4 + 0x18)));
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x2c)) = (0x2c + 1);
    // str r0, [sp]
    // add r0, #0x18
    ov90_02258CF0(r4, *((u32*)(ov90_0225C234 + (*((u32*)(r4 + 0x10)) << 2))), *((u32*)(ov90_0225C228 + (*((u32*)(r4 + 0x10)) << 2))), *((u32*)(ov90_0225C24C + (*((u32*)(r4 + 0x10)) << 2))));
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x2e)) = (0x2e + 1);
    *((u16*)(r4 + 0x2c)) = 0;
    // ldrsh r1, [r4, r1]
    // add r0, #0x18
    ov90_02258D4C(r4, 0x2c);
    // asr r2, r2, #0xc
    ov90_0225A60C(r4, r5, *((u32*)(r4 + 0x18)));
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x2c)) = (0x2c + 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x2e)) = (0x2e + 1);
}




void ov90_0225A544(void) {
    // ldrsh r1, [r5, r1]
    // ldrsh r1, [r5, r1]
    // add r0, #0x18
    // asr r2, r2, #0xc
    // ldrsh r0, [r5, r0]
    // ldrsh r0, [r5, r0]
}




void ov90_0225A5BC(void) {
}




void ov90_0225A60C(void) {
}




void ov90_0225A65C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
}




void ov90_0225A6B4(void) {
    // str r2, [sp, #4]
    Heap_Alloc(r3, 0x00000664);
    memset(0, 0x00000664);
    // add r2, #0x1c
    // strb r0, [r2]
    // add r2, #0xc
    // strb r0, [r2]
    // ldr r0, [sp, #4]
    *((u8*)(r4 + 7)) = *((u8*)r6);
    ov90_0225C15C(r4, (0x10 - 1), (r4 + 1));
    // strh r1, [r3]
    // sub r3, #0x50
    // strh r1, [r0]
    // sub r0, #0x50
    // and r2, r1
    // str r2, [r3]
    // and r1, r2
    // str r1, [r0]
    GfGfx_SetBanks(ov90_0225C2F4, 0xFFFF1FFF, *((u32*)0x04001050), 0x04000050);
    // add r0, #0x34
    // add r1, #0xc
    *((u16*)(r4 + 2)) = r5;
    ov90_0225A204(r4, r4);
    GF_CreateVramTransferManager(0x10, r5);
    // add r0, #0x4c
    // str r5, [sp]
    ov90_02258FF0(r4, ov90_0225C264, ov90_0225C43C, 6);
    // add r0, #0xa0
    // str r5, [sp]
    ov90_022590CC(r4, 0x20, 2, 2);
    // add r0, r4, r0
    ov90_02258DD0((0x73 << 2), 2, r5);
    // add r0, #0x58
    ov90_02259184(r4, r5);
    ov90_0225A850(r4, r5);
    // add r0, #0xc
    ov90_0225888C(r4, *((u8*)(r4 + 0x15)));
    // add r0, #0xc
    ov90_022588A4(r4, r0);
    // str r5, [sp]
    // add r0, #0x68
    // add r1, #0x4c
    ov90_0225938C(r4, r4, *((u32*)(r4 + 0xc)), r0);
    // add r0, r4, r0
    // add r1, #0x4c
    ov90_0225B340((0x7a << 2), r4, *((u8*)(r4 + 0x16)), r5);
    // add r0, #0xc
    // add r1, #0x34
    ov90_0225A258(r4, r4);
    *((u8*)(r4 + 5)) = r0;
    SysTask_CreateOnMainQueue(ov90_0225A980, r4, 0);
    // str r0, [r4, r1]
    SysTask_CreateOnMainQueue(ov90_0225AE4C, r4, 0);
    // str r0, [r4, r1]
    GF_AssertFail(0x00000644);
    SysTask_CreateOnMainQueue(ov90_0225A980, r4, 0);
    // str r0, [r4, r1]
    SysTask_CreateOnVWaitQueue(ov90_0225B230, r4, 0);
    // str r0, [r4, r1]
    ov00_021E69A8(r5, 0x00000648);
}




void ov90_0225A850(void) {
    NARC_New(0xc8);
    // str r1, [sp]
    // str r4, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(4, 0, 0);
    // str r0, [sp]
    // str r4, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r6, 4, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 6, *((u32*)(r5 + 0x4c)), 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 6, *((u32*)(r5 + 0x4c)), 5);
    // add r3, r5, r3
    // str r4, [sp]
    GfGfxLoader_GetScrnDataFromOpenNarc(r6, 9, 0, (0x96 << 2));
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 8, *((u32*)(r5 + 0x4c)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 8, *((u32*)(r5 + 0x4c)), 5);
    ov90_0225A65C(r6, *((u8*)(r5 + 7)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    // str r4, [sp, #0x10]
    ov90_02258E54((0x73 << 2), r6, 0xb, 5);
    // str r0, [r5, r1]
    ov90_0225B254(r5, r6, r4);
    // add r0, r5, r3
    // sub r3, #0x3c
    // str r6, [sp]
    // add r1, #0x4c
    // add r2, #0xa0
    // add r3, r5, r3
    // str r4, [sp, #4]
    ov90_0225B59C(r5, r5, (0x82 << 2));
    NARC_Delete(r6);
}




void ov90_0225A960(void) {
    // add r0, r4, r0
}




void ov90_0225A980(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225A998: ; jump table
    // str r1, [r4, r0]
    *((u8*)(r1 + 9)) = 0;
    ov90_0225BA14(r1, *((u32*)*((u32*)(r1 + 0x18))));
    // add r1, r4, r2
    // add r1, #0x2c
    // add r1, r4, r1
    ov90_0225A28C(*((u32*)*((u32*)(r4 + 0x18))), *((u32*)((*((u8*)(r4 + 0x15)) << 2) + 0x1c)), *((u8*)(r4 + 0x15)));
    // str r0, [r1]
    *((u8*)(r4 + 9)) = 1;
    *((u8*)(r4 + 9)) = 0;
    ov90_0225BA38(r4, *((u32*)(r4 + 0x18)));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0x0000FFFF);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 4)) + 1));
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, #0x68
    // add r1, #0x58
    ov90_02259464(r4, r4, 1, 0);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, #0x68
    ov90_02259538(r4, 0);
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strh r0, [r4]
    // add r0, #0x68
    ov90_022594FC(r4, 0);
    // add r0, r4, r0
    // add r1, #0x4c
    ov90_0225A088((0xcf << 2), r4, *((u16*)(r4 + 2)));
    ov90_0225BA14(r4);
    // strh r1, [r4, r0]
    *((u8*)(r4 + 4)) = 0x16;
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strh r1, [r4, r0]
    // strh r0, [r4, r7]
    // add r5, r4, r0
    // add r5, #0x2c
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225AB34: ; jump table
    // strh r2, [r4, r0]
    // strh r2, [r4, r0]
    GF_AssertFail(((0x65 << 4) + 2), (0x65 << 4), 0x20, *((u8*)(r4 + 0x14)));
    ov90_0225B8F0(r4);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strh r1, [r4, r0]
    ov90_0225B8F0(r4, (*((u16*)(r4 + 0x00000652)) - 1));
    // add r1, r4, r5
    // add r1, #0x2c
    ov90_0225B7FC(r4, 0, *((u8*)r1));
    *((u8*)(r4 + 4)) = 5;
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    ov90_0225B8F0(r4);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    *((u8*)(r4 + 4)) = (r1 + 1);
    ov90_0225B274(r4);
    // strh r0, [r4]
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = 0xa;
    // strh r0, [r4]
    // add r0, r4, r1
    // add r0, #0x2c
    // add r1, r4, r1
    // add r0, #0x58
    ov90_02259200(r4, *((u32*)((*((u8*)(r4 + 0x15)) << 2) + 0x3c)));
    // add r0, #0x68
    // add r1, #0x58
    ov90_02259464(r4, r4, r5, 0);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, #0x68
    ov90_02259538(r4, 0);
    ov90_0225B978(r4);
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = 0xe;
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strh r0, [r4]
    // add r0, #0x58
    ov90_0225926C(r4, *((u32*)*((u32*)(r4 + 0x18))));
    // add r0, #0x58
    // add r1, r4, r1
    ov90_02259200(r4, *((u32*)((*((u8*)(r4 + 0x15)) << 2) + 0x3c)));
    // add r0, #0x68
    // add r1, #0x58
    ov90_02259464(r4, r4, r5, 0);
    *((u8*)(r4 + 4)) = 0xd;
    // add r0, #0x68
    ov90_02259538(r4, 0);
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strh r0, [r4]
    // add r0, #0x68
    ov90_022594FC(r4, 0);
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strh r0, [r4]
    sub_02037AC0(0x82);
    ov00_021E6A4C(*((u8*)(r4 + 0x16)));
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    sub_02037B38(0x82);
    *((u8*)(r4 + 4)) = 0x13;
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 4)) + 1));
    *((u8*)(r4 + 4)) = 0x15;
    ov90_0225B9A8(r4);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // str r0, [sp]
    // add r0, r4, r0
    // add r1, #0x68
    // add r2, #0x58
    ov90_0225B38C((0x7a << 2), r4, r4, *((u8*)(r4 + 7)));
    // add r0, r4, r0
    ov90_0225B538((0x7a << 2));
    *((u8*)(r4 + 8)) = r0;
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, r4, r0
    ov90_0225A108((0xcf << 2));
    *((u8*)(r4 + 6)) = 1;
    // strh r1, [r4, r0]
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, r4, r5
    // add r0, #0x2c
    // strb r1, [r0]
    // add r2, r4, r5
    // add r2, #0x2c
    ov90_0225B7FC(r4, 0, *((u8*)r2));
    *((u8*)(r4 + 4)) = 7;
    ov90_0225B2A8(r4);
    // add r0, #0xa0
    ov90_02259170(r4);
    ScheduleSetBgPosText(*((u32*)(r4 + 0x4c)), 3, 4, 2);
    ScheduleSetBgPosText(*((u32*)(r4 + 0x4c)), 5, 4, 2);
}




void ov90_0225AE4C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225AE64: ; jump table
    *((u8*)(r1 + 9)) = 0;
    ov90_0225A28C(*((u32*)*((u32*)(r1 + 0x18))));
    // str r0, [r1]
    *((u8*)(r4 + 9)) = 0;
    ov90_0225BAA0(r4, *((u32*)(r4 + 0x18)));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0x0000FFFF);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 4)) + 1));
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strh r1, [r4, r0]
    // add r0, #0x68
    // add r1, #0x58
    ov90_02259464(r4, 4, 1, 0);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, #0x68
    ov90_02259538(r4, 0);
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strh r0, [r4]
    // add r0, #0x68
    ov90_022594FC(r4, 0);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, r4, r0
    // add r1, #0x4c
    ov90_0225A088((0xcf << 2), *((u16*)(r4 + 2)));
    // add r5, r4, r0
    // str r0, [sp, #0x1c]
    // add r0, #0x4c
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r0, #0xa0
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // add r0, #0xc
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #0x58
    // str r4, [sp, #0x18]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov90_02259BCC(r5, *((u8*)(r4 + 0x14)), *((u8*)(r4 + 7)), *((u32*)(r4 + (0x96 << 2))));
    // ldr r0, [sp, #0x24]
    ov90_0225888C(r6);
    // ldr r0, [sp, #0x24]
    ov90_022588A4(r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0x28]
    ov90_02259D50(r5, 0, *((u32*)(r2 + 0x3c)), 8);
    // add r0, r4, r6
    // add r0, #0x38
    // add r3, r4, r6
    // add r3, #0x34
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x28]
    ov90_02259DAC(r5, *((u8*)(r4 + 5)), *((u8*)r3));
    // ldr r1, [sp, #0x1c]
    ov90_02259E8C(r5);
    ov90_02259EA0(r5);
    // mvn r1, r1
    // asr r2, r2, #0x10
    ov90_02259EE0(r5, 7, (r7 << 0x10));
    // ldr r0, [sp, #0x18]
    // add r5, #0x38
    // str r0, [sp, #0x18]
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strh r0, [r4]
    ov90_0225B8F0(r4, *((u8*)(r4 + 0x14)));
    // strh r0, [r4]
    // add r0, r4, r0
    ov90_0225B6B0((0x82 << 2), *((u32*)(r4 + 0x30)));
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, r4, r0
    // add r1, #0x4c
    ov90_0225B6C4((0x82 << 2));
    ov90_0225B954(r4);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, #0x58
    ov90_02259250(r4, *((u32*)(r4 + 0x30)));
    // add r0, #0x68
    // add r1, #0x58
    ov90_02259464(r4, r4, 7, 0);
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, #0x68
    ov90_02259538(r4, 0);
    ov90_0225B978(r4);
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = 0xc;
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strh r0, [r4]
    // add r0, #0x68
    // add r1, #0x58
    ov90_02259464(r4, r4, 9, 0);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, #0x68
    ov90_02259538(r4, 0);
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = 0xd;
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = 0xe;
    // strh r0, [r4]
    *((u8*)(r4 + 4)) = 0xe;
    ov00_021E6A4C(*((u8*)(r4 + 0x16)));
    sub_02037AC0(0x82);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    sub_02037B38(0x82);
    *((u8*)(r4 + 4)) = 0x12;
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 4)) + 1));
    *((u8*)(r4 + 4)) = 0x14;
    ov90_0225B9A8(r4);
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r1, #0x68
    // str r0, [sp]
    // add r0, r4, r0
    // add r2, #0x58
    ov90_0225B38C((0x7a << 2), r4, *((u8*)(r4 + 7)));
    // add r0, r4, r0
    ov90_0225B538((0x7a << 2));
    *((u8*)(r4 + 8)) = r0;
    *((u8*)(r4 + 4)) = (*((u8*)(r4 + 4)) + 1);
    // add r0, r4, r0
    ov90_0225A108((0xcf << 2));
    *((u8*)(r4 + 6)) = 1;
    ov90_0225B2A8(r4);
    // add r0, #0xa0
    ov90_02259170(r4);
    ScheduleSetBgPosText(*((u32*)(r4 + 0x4c)), 3, 4, 2);
    ScheduleSetBgPosText(*((u32*)(r4 + 0x4c)), 5, 4, 2);
}




void ov90_0225B230(void) {
    // add r0, #0x4c
    // add r0, #0xa0
    // add r0, r4, r0
}




void ov90_0225B254(void) {
}




void ov90_0225B274(void) {
    // strh r2, [r0, r1]
    // add r1, r0, r2
    // add r1, #0x2c
    ov90_0225B954(*((u8*)(r0 + 0x15)), 0, *((u8*)(r0 + 0x14)));
}




void ov90_0225B2A8(void) {
    // add r0, r5, r6
    // add r0, #0x2c
    // add r2, r2, r0
    GF_CreateNewVramTransferTask(0xf, (*((u8*)ov90_0225C1EC) << 5), *((u32*)(*((u32*)(r0 + 0x00000658)) + 0xc)), 0x20);
    GF_AssertFail();
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // strh r0, [r5, r3]
}




void ov90_0225B330(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // _0225B338: .word 0x00000654
    // _0225B33C: .word Heap_Free
}




void ov90_0225B340(void) {
}




void ov90_0225B380(void) {
}




void ov90_0225B38C(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225B3A8: ; jump table
    // str r0, [sp]
    // ldr r5, [sp, #0x20]
    // str r2, [sp, #4]
    // str r5, [sp, #8]
    // ldr r1, [sp, #0x20]
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    // add r1, #8
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    // strb r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #8]
    // strb r0, [r4]
    // strb r0, [r4]
}




void ov90_0225B538(void) {
}




void ov90_0225B53C(void) {
    // lsl r3, r1
    // tst r1, r3
    // lsl r6, r1
    // tst r6, r3
}




void ov90_0225B594(void) {
}




void ov90_0225B59C(void) {
    // ldr r1, [sp, #0x44]
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x44]
    // ldr r4, [sp, #0x40]
    memset(0, 0x4c);
    // str r0, [sp]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 0x18, 0, (7 << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 0x19, *((u32*)r5), 2);
    // ldr r0, [sp, #0x44]
    // str r0, [sp]
    GfGfxLoader_GetScrnDataFromOpenNarc(r4, 0x1a, 0, (r7 + 4));
    // str r0, [r7]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x10]
    ov90_02258E54(r6, r4, 0xf, 1);
    *((u32*)(r7 + 0x44)) = r0;
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // asr r0, r0, #0x10
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // add r0, r6, r0
    // add r5, r7, r0
    // str r0, [sp]
    // ldr r0, [sp, #0x44]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x24]
    // asr r2, r2, #0x10
    ov90_02258EB4(*((u32*)(r7 + 0x44)), *((u32*)r1), (0x4a << 0x10));
    *((u32*)(r5 + 8)) = r0;
    Sprite_SetDrawFlag(0);
    // ldr r1, [sp, #0x18]
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 8)));
    Sprite_SetPriority(*((u32*)(r5 + 8)), 0);
    // add r4, #0x18
    // ldr r0, [sp, #0x20]
    // add r0, #0x24
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
}




void ov90_0225B690(void) {
}




void ov90_0225B6B0(void) {
    // add r2, #0x4b
    // strb r1, [r2]
    // add r1, #0x48
    // strb r2, [r1]
    // add r0, #0x4a
    // strb r2, [r0]
}




void ov90_0225B6C4(void) {
    // add r0, #0x48
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225B6E2: ; jump table
    ov90_02258DB0(*((u32*)(r0 + 4)), 0x8b);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, #0xc
    LoadRectToBgTilemapRect(*((u32*)r5), 2, *((u32*)(r4 + 4)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r5), 2, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r5), 2);
    // add r0, #0x48
    // add r4, #0x48
    // strb r0, [r4]
    // add r0, #0x4a
    // add r0, #0x4b
    // add r4, #0x48
    // strb r0, [r4]
    PlaySE(0x00000594, *((u8*)r4));
    // add r0, #0x4a
    _s32_div_f(*((u8*)r4), 0xf);
    // add r0, r4, r0
    Sprite_SetDrawFlag(*((u32*)((r1 << 2) + 8)), 1);
    // add r0, #0x49
    // strb r1, [r0]
    // add r0, #0x48
    // add r4, #0x48
    // strb r0, [r4]
    // add r0, #0x49
    // add r0, #0x49
    // strb r1, [r0]
    // add r0, #0x49
    // add r0, #0x4a
    // add r0, #0x4a
    // strb r1, [r0]
    // add r0, #0x4a
    _s32_div_f(*((u8*)r4), 0xf);
    // add r0, #0x4b
    Sprite_SetDrawFlag(*((u32*)(r4 + 8)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 8)), 2);
    // add r4, #0x48
    // strb r0, [r4]
}




void ov90_0225B7FC(void) {
    // add r0, #0x4c
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xa0
    // str r0, [sp, #0xc]
    // sub r0, #0x78
    // add r7, r5, r3
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r0, r7, r4
    ov90_02259BCC(*((u16*)(r0 + 2)), *((u8*)(r0 + 0x14)), *((u8*)(r0 + 7)), *((u32*)(r0 + ((0x97 << 2) - 4))));
    // add r0, #0xc
    ov90_0225888C(r5, r6);
    // add r0, #0xc
    ov90_022588A4(r5, r0);
    // str r1, [sp, #0x1c]
    // str r1, [sp]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #4]
    // add r2, r5, r2
    // add r0, r7, r4
    // add r1, #0x58
    ov90_02259D50(r5, *((u32*)(r2 + 0x3c)), 8);
    // add r0, r5, r6
    // add r0, #0x38
    // add r3, r5, r6
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0x34
    // add r0, r7, r4
    // add r1, #0x58
    ov90_02259DAC(8, r5, *((u8*)(r5 + 5)), *((u8*)r3));
    // ldr r3, [sp, #0x18]
    // sub r3, r3, r6
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    // ldrsh r6, [r3, r6]
    // str r1, [sp, #4]
    // add r2, r5, r2
    // sub r3, r3, r6
    // add r0, r7, r4
    // add r1, #0x58
    // asr r3, r3, #0x10
    ov90_02259E38(0, r5, *((u32*)(r2 + 0x1c)), (0xb0 << 0x10));
    // add r5, #0x4c
    // add r0, r7, r4
    ov90_02259E8C(r5);
    // ldr r1, [sp, #0x18]
    // add r0, r7, r4
    ov90_02259E18();
    // ldr r1, [sp, #0x18]
    // add r0, r7, r4
    // ldrsh r1, [r1, r2]
    ov90_02259EE0(ov90_0225C1F0, 0);
}




void ov90_0225B8F0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r6, r7, r0
    // str r0, [sp, #8]
    // add r0, r7, r0
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r4, #0x38
    // add r6, #0x38
    // add r5, #0x38
    // str r0, [sp, #4]
    // ldr r0, [sp]
}




void ov90_0225B954(void) {
    PlayFanfare(0x000004BF);
    // str r1, [r4, r0]
}




void ov90_0225B978(void) {
    // str r1, [r4, r0]
}




void ov90_0225B9A8(void) {
    // add r7, sp, #0
    // add r0, r5, r6
    // ldr r1, [sp]
    // ldr r1, [sp]
    // ldr r1, [sp]
}




void ov90_0225BA14(void) {
}




void ov90_0225BA38(void) {
    // add r1, sp, #0xc
    // str r4, [r1]
    // add r3, sp, #0xc
    // add r6, r5, r1
    // add r6, #0x2c
    // add r6, r6, r1
    // stmia r3!, {r6}
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0xc]
}




void ov90_0225BAA0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov90_0225BAD0(void) {
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // add r0, #0xc
    // str r3, [sp, #0x10]
    memset(0, 0xc0);
    // add r0, #0xcc
    memset(r7, 0, 0xc0);
    *((u16*)(r7 + 8)) = 0;
    *((u16*)(r7 + 0xa)) = 0;
    // str r6, [r7, r0]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    ov90_02258EB4(0, (*((u32*)ov90_0225C2B4) << 4), (*((u32*)(ov90_0225C2B4 + 4)) << 4));
    // str r0, [r5]
    Sprite_SetAnimCtrlSeq(5);
    Sprite_SetPriority(*((u32*)r5), 0);
    // add r4, #0xc
    // and r1, r0
    // and r4, r2
    // str r1, [r3]
    // add r2, #0x48
    // strh r4, [r2]
    // add r2, #0x40
    // strh r4, [r2]
    // add r2, #0x44
    // strh r4, [r2]
    // add r2, #0x4a
    // strb r4, [r7, r2]
    // and r0, r3
    // and r3, r0
    // str r3, [r7, r0]
    // strb r3, [r7, r0]
    // strb r1, [r7, r0]
    Main_SetHBlankIntrCB(ov90_0225BE08, r7, (0x19 << 4), ((*((u8*)(r7 + ((0x19 << 4) + 1))) & ~(0x1f)) | 0xf));
    Sprite_SetFlipMode(*((u32*)(r7 + 4)), 2);
    ov90_0225BD84(r7);
}




void ov90_0225BBD0(void) {
    // ldrsh r2, [r0, r1]
    // ldrsh r2, [r0, r1]
}




void ov90_0225BBF0(void) {
    // ldrsh r2, [r5, r0]
    // ldrsh r0, [r5, r0]
    // mvn r1, r1
}




void ov90_0225BC28(void) {
    // str r0, [sp]
    // ldr r2, [sp]
    // ldrsh r2, [r2, r0]
    // asr r2, r4, #2
    // add r2, r4, r2
    // asr r4, r2, #3
    // ldr r2, [sp]
    *((u16*)((r2 >> 0x1d) + 0xa)) = (r2 * 0x17);
    // ldrsh r0, [r2, r0]
    // add r0, r0, r1
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r4, [sp]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #8
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #4]
    _fflt(((8 >> 0x1d) << 0xc), 0xa, (r2 >> 0x1d), ov90_0225C2B4);
    _fadd((0x3f << 0x18), r0);
    _fflt(r5);
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0xc]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    _fflt(r5);
    _fadd((0x3f << 0x18), r0);
    _fflt(r5);
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // add r1, sp, #8
    Sprite_SetMatrix(*((u32*)r4));
    // add r7, #0xc
    // ldr r0, [sp]
    ov90_0225BD84();
}




void ov90_0225BD08(void) {
    SysTask_Destroy(*((u32*)(r0 + (0x63 << 2))));
    // str r1, [r6, r0]
    Sprite_Delete(*((u32*)r6), 0);
    // str r7, [r5]
    HBlankInterruptDisable();
    // and r3, r0
    // str r1, [r2]
    // add r2, #0x4a
    // strh r1, [r0]
}




void ov90_0225BD84(void) {
    // add r0, #0xcc
    memset(0, 0xc0);
    // ldrsh r2, [r4, r0]
    // sub r0, r0, r2
    // add r3, r4, r1
    // strb r0, [r3, r7]
    // sub r3, r2, r1
    // add r3, r4, r3
    // add r3, #0xcc
    // strb r0, [r3]
    // ldrsh r3, [r4, r5]
    // sub r3, r6, r3
    SysTask_CreateOnVWaitQueue(ov90_0225BDE4, r4, 0);
    // str r0, [r4, r1]
}




void ov90_0225BDE4(void) {
    // add r0, #0xc
    // add r1, #0xcc
    // str r1, [r4, r0]
}




void ov90_0225BE08(void) {
    // sub r3, r3, r4
    // ror r3, r2
    // add r2, r4, r3
    // and r3, r4
    // tst r4, r5
    // strh r1, [r4]
    // add r1, #0x44
    // strh r1, [r4]
    // mvn r1, r1
    // and r3, r1
    // add r0, r0, r2
    // and r1, r0
    // str r0, [r2]
    // and r1, r0
    // str r0, [r2]
}




void ov90_0225BEE0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225BEF8: ; jump table
    // add r0, #0x34
    ov90_0225BAD0(r1, *((u32*)(r1 + 0x28)), *((u32*)(r1 + 8)), *((u32*)r1));
    // str r0, [sp]
    // str r0, [sp, #4]
    ov90_02258EB4(*((u32*)(r4 + 0x28)), *((u32*)(r4 + 8)), 0x80, 0x61);
    *((u32*)(r4 + 0x30)) = r0;
    Sprite_SetPriority(0);
    *((u16*)(r4 + 4)) = (*((u16*)(r4 + 4)) + 1);
    // add r0, #0x34
    ov90_0225BBD0(r4);
    *((u16*)(r4 + 4)) = (*((u16*)(r4 + 4)) + 1);
    *((u16*)(r4 + 6)) = 0;
    Sprite_GetAnimationFrame(*((u32*)(r4 + 0x30)));
    Sprite_UpdateAnim(*((u32*)(r4 + 0x30)), (2 << 0xc));
    Sprite_GetAnimationFrame(*((u32*)(r4 + 0x30)));
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225BF82: ; jump table
    PlaySE(0x000005DD);
    PlaySE(0x000005DD);
    PlaySE(0x000005DD);
    PlaySE(0x000005DD);
    PlaySE(0x00000642);
    // ldrsh r0, [r4, r0]
    Sprite_SetPalOffsetRespectVramOffset(*((u32*)(r4 + 0x30)), 0);
    Sprite_SetPalOffsetRespectVramOffset(*((u32*)(r4 + 0x30)), 1);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 6)) = (r1 + 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 6)) = 0;
    Sprite_IsAnimated(*((u32*)(r4 + 0x30)), (r1 + 1));
    *((u16*)(r4 + 4)) = (*((u16*)(r4 + 4)) + 1);
    Sprite_SetPalOffsetRespectVramOffset(*((u32*)(r4 + 0x30)), 0);
    // add r0, #0x34
    ov90_0225BBF0(r4);
    Sprite_Delete(*((u32*)(r4 + 0x30)));
    *((u32*)(r4 + 0x30)) = 0;
    *((u16*)(r4 + 4)) = (*((u16*)(r4 + 4)) + 1);
    *((u16*)(r4 + 6)) = 0;
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 6)) = (0 + 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 4)) = 0;
    // add r0, #0x34
    ov90_0225BD08(r4, (0 + 1));
    SysTask_Destroy(*((u32*)(r4 + 0x2c)));
    *((u32*)(r4 + 0x2c)) = 0;
}




void ov90_0225C06C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225C084: ; jump table
    // add r0, #0x34
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x34
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, #0x34
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, #0x34
}




void ov90_0225C150(void) {
    // _0225C154: .word ov90_0225C4FC
}




u8 ov90_0225C158(void) {
}




void ov90_0225C15C(void) {
}




void ov90_0225C178(void) {
}




u8 ov90_0225C194(void) {
}




u8 ov90_0225C198(void) {
}




void ov90_0225C19C(void) {
}




void ov90_0225C1A8(void) {
    // bx r3
    // nop
    // _0225C1B4: .word ov90_02258B2C
}




void ov90_0225C1B8(void) {
    // bx r3
    // nop
    // _0225C1C4: .word ov90_02258B2C
}




void ov90_0225C1C8(void) {
}




void ov90_0225C1D4(void) {
}



