/* Decompiled from asm/unk_020755E8.s */
#include "global.h"

void sub_020755E8(void) {
    // mov ip, r1
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, sp, #0
    // str r0, [r3]
    // strh r6, [r1]
    *((u16*)(r1 + 2)) = r3;
    // add r0, sp, #0x38
    // add r2, sp, #0
    *((u16*)(r1 + 6)) = *((u8*)(*((u32*)_020FFF5C) + 0x10));
    // mov r1, ip
    SpriteSystem_NewSprite(r0, (6 - 1));
    ManagedSprite_SetAnimateFlag(1);
}




void sub_02075630(void) {
    SpriteSystem_Alloc(*((u32*)(r0 + 0x5c)));
    // add r1, #0xac
    // str r0, [r1]
    // add r0, #0xac
    SpriteManager_New(*((u32*)r5), r5);
    // add r1, #0xb0
    // add r2, sp, #0x3c
    // str r0, [r1]
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r4, sp, #0x28
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // str r0, [sp, #0x28]
    // add r0, #0xac
    SpriteSystem_Init(*((u32*)r5), r2, _020FFF14, 0x20);
    // add r0, #0xac
    // add r1, #0xb0
    SpriteSystem_InitSprites(*((u32*)r5), *((u32*)r5), 0x10);
    // add r3, sp, #0x10
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, #0xac
    // add r1, #0xb0
    SpriteSystem_InitManagerWithCapacities(*((u32*)r5), *((u32*)r5), r3);
    // add r0, #0xac
    // add r0, #0xb0
    NARC_New(0xef, *((u32*)(r5 + 0x5c)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    SpriteSystem_LoadPlttResObjFromOpenNarc(r6, r4, r0, 0xb);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r4, r7, 0xc);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r4, r7, 0xd);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r4, r7, 0xe);
    NARC_Delete(r7);
    // str r0, [sp]
    // add r0, #0xac
    // add r1, #0xb0
    sub_020755E8(*((u32*)r5), *((u32*)r5), 0x80, 0x48);
    // add r1, #0xb4
    // str r0, [r1]
    // add r0, #0xb4
    ManagedSprite_SetDrawFlag(*((u32*)r5), 0);
    // add r5, #0xb8
    // str r0, [r5]
}




void sub_02075770(void) {
    // add r0, #0xac
    // add r0, #0xb0
    // add r0, #0xb4
    // add r0, #0xb4
    // add r5, #0xb8
    // str r0, [r5]
}




void sub_020757AC(void) {
    // add r0, #0xb8
    GF_AssertFail(*((u32*)r0));
    // add r0, #0xb4
    GF_AssertFail(*((u32*)r5));
    // add r0, #0x8b
    GF_AssertFail(*((u8*)r5));
    // add r5, #0xb4
    // ldrsh r1, [r1, r3]
    // ldrsh r2, [r2, r3]
    ManagedSprite_SetPositionXY(*((u32*)r5), _020FFEC4, _020FFEC6, (r4 << 2));
}




void sub_02075804(void) {
    ReadMsgData_ExpandPlaceholders(*((u32*)(r0 + 0xc)), *((u32*)(r0 + 8)), r3, *((u32*)(r0 + 0x5c)));
    FillWindowPixelBuffer(r5, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r4, 0);
    CopyWindowToVram(r5);
    String_Delete(r4);
}




void sub_0207584C(void) {
    // add r0, #0xb8
    GF_AssertFail(*((u32*)r0));
    // add r2, #0x6c
    BufferMoveName(*((u32*)(r5 + 0xc)), 0, *((u16*)r5));
    // add r1, #0x8c
    sub_02075804(r5, r5, *((u32*)(r5 + 8)), 0x000004A2);
    // add r1, #0x9c
    sub_02075804(r5, r5, *((u32*)(r5 + 8)), r4);
    // add r0, #0x8a
    // strb r1, [r0]
    // add r0, #0x8b
    // strb r1, [r0]
    sub_020757AC(r5, 1);
    ToggleBgLayer(5, 1);
    ToggleBgLayer(6, 1);
    // add r5, #0xb4
    ManagedSprite_SetDrawFlag(*((u32*)r5), 1);
}




void sub_020758D0(void) {
    TouchscreenHitbox_FindRectAtTouchNew(_020FFECC);
    // add r0, #0xb8
    GF_AssertFail(*((u32*)r5));
    // mvn r0, r0
    PlaySE(0x000005DC);
    // add r0, #0x8b
    // strb r4, [r0]
    // add r0, #0x8b
    // strb r1, [r0]
    GF_AssertFail(r5, 2);
    // tst r1, r0
    // add r0, #0x8b
    // add r0, #0x8b
    // strb r1, [r0]
    sub_020757AC(r5, 1);
    PlaySE(0x000005DC);
    // tst r1, r0
    // add r0, #0x8b
    // add r0, #0x8b
    // strb r1, [r0]
    sub_020757AC(r5, 2);
    PlaySE(0x000005DC);
    // tst r2, r1
    // add r0, #0x8b
    GF_AssertFail(*((u8*)r5), 1, r0);
    // add r0, #0x8b
    // strb r1, [r0]
    // tst r0, r2
    // add r0, #0x8b
    // strb r2, [r0]
    sub_020757AC(r5, 2, 2);
    // add r5, #0xb4
    ManagedSprite_SetAnim(*((u32*)r5), 3);
    PlaySE(0x000005DC);
}




void sub_020759CC(void) {
    // add r0, #0xb8
    // add r0, #0xb4
    // add r4, #0xb4
}




void sub_02075A04(void) {
    // add r1, #0x8a
    // add r0, #0x8a
    // add r4, #0x8a
    // strb r0, [r4]
    // add r0, #0xb8
    // add r0, #0x8b
    // add r0, #0xb4
    // add r4, #0x8b
}




EvolutionTaskData * sub_02075A7C(void) {
    // ldr r5, [sp, #0x50]
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    FontID_Alloc(4, r5);
    Heap_Alloc(r5, 0xbc);
    MIi_CpuClearFast(0, r0, 0xbc);
    sub_02026E8C();
    // str r0, [sp, #0x1c]
    GetMainBgPlttAddr();
    // ldr r2, [sp, #0x1c]
    MIi_CpuClear16(0, r0);
    sub_02026E9C();
    // str r0, [sp, #0x20]
    GetSubBgPlttAddr();
    // ldr r2, [sp, #0x20]
    MIi_CpuClear16(0, r0);
    *((u32*)(r4 + 0x24)) = r6;
    *((u32*)(r4 + 0x28)) = r7;
    GetMonData(r7, 5, 0);
    // add r1, #0x60
    // strh r0, [r1]
    GetMonData(r7, 0x70, 0);
    // add r1, #0x80
    // strb r0, [r1]
    // ldr r0, [sp, #0x14]
    // add r1, #0x62
    // strh r0, [r1]
    *((u32*)(r4 + 0x5c)) = r5;
    *((u32*)(r4 + 0x38)) = 0;
    NARC_New(0xb4, r5);
    // add r1, #0x84
    // str r0, [r1]
    // add r2, #0x60
    // add r0, #0x84
    // add r1, #0x88
    sub_020729A4(*((u32*)r4), r4, *((u16*)r4), 1);
    // add r2, #0x62
    // add r0, #0x84
    // add r1, #0x89
    sub_020729A4(*((u32*)r4), r4, *((u16*)r4), 1);
    PaletteData_Init(r5);
    *((u32*)(r4 + 0x14)) = r0;
    PaletteData_SetAutoTransparent(1);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x14)), 0, (2 << 8), r5);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x14)), 1, (1 << 9), r5);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x14)), 2, (7 << 6), r5);
    BgConfig_Alloc(r5);
    // str r0, [r4]
    AllocWindows(r5, 1);
    *((u32*)(r4 + 4)) = r0;
    // ldr r0, [sp, #0x18]
    *((u32*)(r4 + 0x2c)) = r0;
    sub_02077400(r5);
    *((u32*)(r4 + 0x34)) = r0;
    sub_020773AC();
    sub_020773D4();
    sub_020774A0();
    sub_02076E64(r4, *((u32*)r4));
    sub_02075630(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r4), *((u32*)(r4 + 4)), 1, 2);
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0xff);
    DrawFrameAndWindow2(*((u32*)(r4 + 4)), 0, 1, 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x8c
    AddWindowParameterized(*((u32*)r4), r4, 6, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x9c
    AddWindowParameterized(*((u32*)r4), r4, 6, 3);
    PokepicManager_Create(r5);
    *((u32*)(r4 + 0x18)) = r0;
    sub_02016EDC(r5, 1, 0);
    *((u32*)(r4 + 0x44)) = r0;
    // add r0, #0x67
    // strb r1, [r0]
    // add r0, #0x66
    // strb r1, [r0]
    NewMsgDataFromNarc(1, 0x1b, 0xc5, r5);
    *((u32*)(r4 + 8)) = r0;
    MessageFormat_New(r5);
    *((u32*)(r4 + 0xc)) = r0;
    String_New((5 << 6), r5);
    *((u32*)(r4 + 0x10)) = r0;
    Heap_Alloc(r5, 0x3c);
    *((u32*)(r4 + 0x3c)) = r0;
    MIi_CpuClearFast(0, *((u32*)(r4 + 0x3c)), 0x3c);
    // ldr r1, [sp, #0x38]
    *((u32*)(*((u32*)(r4 + 0x3c)) + 0x2c)) = r1;
    // ldr r0, [sp, #0x3c]
    *((u32*)(r4 + 0x48)) = *((u32*)(r4 + 0x3c));
    // ldr r0, [sp, #0x40]
    *((u32*)(r4 + 0x4c)) = *((u32*)(r4 + 0x3c));
    // ldr r0, [sp, #0x44]
    *((u32*)(r4 + 0x50)) = *((u32*)(r4 + 0x3c));
    // ldr r0, [sp, #0x48]
    *((u32*)(r4 + 0x78)) = *((u32*)(r4 + 0x3c));
    // ldr r0, [sp, #0x4c]
    *((u32*)(r4 + 0x7c)) = *((u32*)(r4 + 0x3c));
    sub_020771E8(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 0x14)), 0xf, 0x0000FFFF, 1);
    // str r2, [sp]
    Pokepic_StartPaletteFadeAll(*((u32*)(r4 + 0x18)), 0x10, 0, 0);
    sub_020163E0(*((u32*)(r4 + 0x14)), 0, 0xb, r5);
    *((u32*)(r4 + 0x58)) = r0;
    sub_0201649C(1);
    SysTask_CreateOnMainQueue(sub_02075D08, r4, 0);
    TextFlags_SetCanABSpeedUpPrint(1);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    sub_0203A880();
}




void sub_02075D08(void) {
    // add r4, #0x67
}




BOOL sub_02075D3C(void) {
    // add r0, #0x67
}




void sub_02075D4C(void) {
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
    Main_SetVBlankIntrCB(0, 0);
    FontID_Release(4);
    sub_02075770(r4);
    WindowArray_Delete(*((u32*)(r4 + 4)), 1);
    // add r0, #0x8c
    RemoveWindow(r4);
    // add r0, #0x9c
    RemoveWindow(r4);
    PaletteData_FreeBuffers(*((u32*)(r4 + 0x14)), 0);
    PaletteData_FreeBuffers(*((u32*)(r4 + 0x14)), 1);
    PaletteData_FreeBuffers(*((u32*)(r4 + 0x14)), 2);
    PaletteData_Free(*((u32*)(r4 + 0x14)));
    PokepicManager_Delete(*((u32*)(r4 + 0x18)));
    sub_02016F2C(*((u32*)(r4 + 0x44)));
    GF_3DVramMan_Delete(*((u32*)(r4 + 0x34)));
    sub_020771A0(*((u32*)r4));
    DestroyMsgData(*((u32*)(r4 + 8)));
    MessageFormat_Delete(*((u32*)(r4 + 0xc)));
    Heap_Free(*((u32*)(r4 + 0x10)));
    Heap_Free(*((u32*)(r4 + 0x3c)));
    sub_020164C4(*((u32*)(r4 + 0x58)));
    Heap_Free(*((u32*)r4));
    // add r0, #0x84
    NARC_Delete(*((u32*)r4));
    Heap_Free(r4);
    TextFlags_SetCanABSpeedUpPrint(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
}




void sub_02075E14(void) {
    // add r0, #0x70
    // tst r0, r1
    // add r2, #0x71
    // neg r2, r2
    Pokepic_AddAttr(*((u32*)(r0 + 0x1c)), 0xc, *((u8*)r0));
    // add r2, #0x71
    // neg r2, r2
    Pokepic_AddAttr(*((u32*)(r4 + 0x1c)), 0xd, *((u8*)r4));
    // add r2, #0x71
    Pokepic_AddAttr(*((u32*)(r4 + 0x20)), 0xc, *((u8*)r4));
    // add r2, #0x71
    Pokepic_AddAttr(*((u32*)(r4 + 0x20)), 0xd, *((u8*)r4));
    Pokepic_GetAttr(*((u32*)(r4 + 0x1c)), 0xc);
    // add r0, #0x70
    // eor r1, r0
    // add r0, #0x70
    // strb r1, [r0]
    // add r2, #0x71
    Pokepic_AddAttr(r4, 0xc, *((u8*)r4));
    // add r2, #0x71
    Pokepic_AddAttr(*((u32*)(r4 + 0x1c)), 0xd, *((u8*)r4));
    // add r2, #0x71
    // neg r2, r2
    Pokepic_AddAttr(*((u32*)(r4 + 0x20)), 0xc, *((u8*)r4));
    // add r2, #0x71
    // neg r2, r2
    Pokepic_AddAttr(*((u32*)(r4 + 0x20)), 0xd, *((u8*)r4));
    Pokepic_GetAttr(*((u32*)(r4 + 0x20)), 0xc);
    // add r0, #0x70
    // eor r1, r0
    // add r0, #0x70
    // strb r1, [r0]
    // add r0, #0x71
    // add r0, #0x71
    // add r0, #0x71
    // strb r1, [r0]
    // tst r0, r1
    // add r0, #0x64
    // tst r0, r1
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 0x14)), 0xf, 0x0000F3FF, 0);
    // add r0, #0x64
    // strb r1, [r0]
    // add r0, #0x64
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02075F40: ; jump table
    // add r0, #0x66
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x66
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    SetMasterBrightnessNeutral(0, (*((u8*)r4) - 1));
    SetMasterBrightnessNeutral(1);
    sub_0201649C(*((u32*)(r4 + 0x58)), 0);
    // tst r1, r0
    // add r4, #0x64
    // strb r0, [r4]
    // add r4, #0x64
    // strb r0, [r4]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x7c)));
    sub_020772F8(r4, (0xe5 << 2));
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, #0x65
    TextPrinterCheckActive(*((u8*)r4), r4);
    _02076C76();
    // add r4, #0x64
    // strb r0, [r4]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0x14)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, #0x60
    // add r0, #0x84
    sub_0207294C(*((u32*)r4), *((u32*)(r4 + 0x44)), *((u32*)(r4 + 0x1c)), *((u16*)r4));
    // add r2, #0x60
    // add r0, #0x84
    // add r1, sp, #0x68
    NARC_ReadPokepicAnimScript(*((u32*)r4), *((u16*)r4), 1);
    // add r1, sp, #0x68
    Pokepic_SetAnimScript(*((u32*)(r4 + 0x1c)));
    Pokepic_StartAnim(*((u32*)(r4 + 0x1c)), 0);
    // add r0, #0x60
    // add r1, #0x80
    PlayCry(*((u16*)r4), *((u8*)r4));
    Mon_GetBoxMon(*((u32*)(r4 + 0x28)));
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 0, r0);
    // tst r0, r1
    sub_020772F8(r4, 0x00000395);
    sub_020772F8(r4, 0x00000393);
    // add r1, #0x65
    // strb r0, [r1]
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, #0x65
    TextPrinterCheckActive(*((u8*)r4), r4);
    IsCryFinished();
    sub_02017068(*((u32*)(r4 + 0x44)), 0);
    Pokepic_IsAnimFinished(*((u32*)(r4 + 0x1c)));
    sub_0201649C(*((u32*)(r4 + 0x58)), 1);
    sub_02005D10(0x000003F3);
    // add r0, #0x66
    // strb r1, [r0]
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, #0x66
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x66
    _02076C76(*((u8*)r4), (*((u8*)r4) - 1));
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, sp, #0x10
    sub_02077604(0);
    *((u32*)(r4 + 0x30)) = r0;
    sub_02077634(0);
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 0x1c)), 0, 0x10, 4);
    // str r0, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 0x20)), 0, 0x10, 4);
    HeapExp_FndGetTotalFreeSize(*((u32*)(r4 + 0x5c)));
    GF_AssertFail((2 << 0xe));
    PlaySE(0x000005F8);
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, #0x73
    // add r0, #0x73
    // add r0, #0x73
    // strb r1, [r0]
    // add r0, #0x75
    // add r0, #0x75
    // strb r1, [r0]
    // add r0, #0x66
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x66
    sub_02077634(*((u32*)(r4 + 0x30)), 1);
    sub_02077634(*((u32*)(r4 + 0x30)), 2);
    sub_02077634(*((u32*)(r4 + 0x30)), 7);
    sub_02077634(*((u32*)(r4 + 0x30)), 8);
    sub_02077634(*((u32*)(r4 + 0x30)), 9);
    sub_02077634(*((u32*)(r4 + 0x30)), 0xb);
    PlaySE(0x000005F9);
    // add r0, #0x70
    // strb r1, [r0]
    // add r0, #0x71
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    sub_02077650(*((u32*)(r4 + 0x30)), 8);
    _02076C76();
    sub_02077634(*((u32*)(r4 + 0x30)), 3);
    sub_02077634(*((u32*)(r4 + 0x30)), 4);
    sub_02077634(*((u32*)(r4 + 0x30)), 5);
    sub_02077634(*((u32*)(r4 + 0x30)), 6);
    sub_02077634(*((u32*)(r4 + 0x30)), 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 0x14)), 0xf, 0x0000F3FF, 2);
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xc, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xd, 0);
    // add r2, #0xf4
    Pokepic_SetAttr(*((u32*)(r4 + 0x20)), 0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(r4 + 0x20)), 0xd, 0xd);
    PlaySE(0x000005FA);
    // add r0, #0x70
    // strb r1, [r0]
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, #0x73
    // add r0, #0x73
    // add r0, #0x73
    // strb r1, [r0]
    // add r0, #0x75
    // add r0, #0x75
    // strb r1, [r0]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0x14)), (*((u8*)r4) + 2));
    // add r0, #0x66
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x66
    sub_02077634(*((u32*)(r4 + 0x30)), 0xc);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 0x14)), 0xf, 0x0000F3FF, 4);
    // str r0, [sp]
    Pokepic_StartPaletteFadeAll(*((u32*)(r4 + 0x18)), 0x10, 0, 3);
    PlaySE(0x000005FB);
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0x14)));
    sub_02077650(*((u32*)(r4 + 0x30)));
    _02076C76();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, #0x62
    // add r0, #0x84
    sub_0207294C(*((u32*)r4), *((u32*)(r4 + 0x44)), *((u32*)(r4 + 0x20)), *((u16*)r4));
    // add r2, #0x62
    // add r0, #0x84
    // add r1, sp, #0x40
    NARC_ReadPokepicAnimScript(*((u32*)r4), *((u16*)r4), 1);
    // add r1, sp, #0x40
    Pokepic_SetAnimScript(*((u32*)(r4 + 0x20)));
    Pokepic_StartAnim(*((u32*)(r4 + 0x20)), 0);
    // add r0, #0x62
    // add r1, #0x80
    PlayCry(*((u16*)r4), *((u8*)r4));
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    IsCryFinished((*((u8*)r4) + 1));
    sub_02017068(*((u32*)(r4 + 0x44)), 0);
    Pokepic_IsAnimFinished(*((u32*)(r4 + 0x20)));
    // mov r1, #MON_DATA_SPECIES
    // add r2, #0x62
    SetMonData(*((u32*)(r4 + 0x28)), r4);
    UpdateMonAbility(*((u32*)(r4 + 0x28)));
    CalcMonLevelAndStats(*((u32*)(r4 + 0x28)));
    Mon_GetBoxMon(*((u32*)(r4 + 0x28)));
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 0, r0);
    Mon_GetBoxMon(*((u32*)(r4 + 0x28)));
    BufferBoxMonSpeciesName(*((u32*)(r4 + 0xc)), 1, r0);
    sub_020772F8(r4, 0x00000396);
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, #0x65
    TextPrinterCheckActive(*((u8*)r4), 0x28);
    // add r0, #0x66
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x66
    Pokedex_SetMonCaughtFlag(*((u32*)(r4 + 0x48)), *((u32*)(r4 + 0x28)));
    GameStats_Inc(*((u32*)(r4 + 0x50)), 0xd);
    GameStats_AddScore(*((u32*)(r4 + 0x50)), 0x15);
    GetMonData(*((u32*)(r4 + 0x28)), 0x4d, 0);
    // mov r1, #MON_DATA_SPECIES_NAME
    SetMonData(*((u32*)(r4 + 0x28)), 0);
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    // add r1, #0x68
    // add r2, sp, #0xc
    MonTryLearnMoveOnLevelUp(*((u32*)(r4 + 0x28)), r4);
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, sp, #0xc
    // add r0, #0x6c
    // strh r1, [r0]
    // add r4, #0x64
    // strb r0, [r4]
    Mon_GetBoxMon(*((u32*)(r4 + 0x28)), *((u16*)0x27));
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 0, r0);
    // add r2, sp, #0xc
    BufferMoveName(*((u32*)(r4 + 0xc)), 1, *((u16*)r2));
    sub_020772F8(r4, 4);
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r4, #0x64
    // strb r0, [r4]
    Mon_GetBoxMon(*((u32*)(r4 + 0x28)), 0x1e);
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 0, r0);
    // add r2, #0x6c
    BufferMoveName(*((u32*)(r4 + 0xc)), 1, *((u16*)r4));
    sub_020772F8(r4, 0x000004A9);
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    Mon_GetBoxMon(*((u32*)(r4 + 0x28)), 0x1e);
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 0, r0);
    sub_020772F8(r4, 0x000004AA);
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    sub_020772F8(r4, 0x000004AB);
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, #0x65
    TextPrinterCheckActive(*((u8*)r4), 1);
    // add r0, #0x66
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x66
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    sub_0207584C(r4, 1);
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    sub_02075A04(r4);
    // add r0, #0x64
    // strb r1, [r0]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 0x14)), 0xf, 0x0000FFFF, 1);
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(*((u32*)(r4 + 0x18)), 0, 0x10, 0);
    // add r4, #0x64
    // strb r0, [r4]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0x14)));
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
    sub_020771A0(*((u32*)r4));
    sub_02075770(r4);
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 6, 1);
    Pokepic_SetAttr(*((u32*)(r4 + 0x20)), 6, 1);
    // str r1, [r0]
    *((u32*)(*((u32*)(r4 + 0x3c)) + 4)) = *((u32*)(r4 + 0x2c));
    *((u8*)(*((u32*)(r4 + 0x3c)) + 0x11)) = 0;
    *((u8*)(*((u32*)(r4 + 0x3c)) + 0x14)) = 0;
    *((u8*)(*((u32*)(r4 + 0x3c)) + 0x13)) = 1;
    // add r1, #0x6c
    *((u16*)(*((u32*)(r4 + 0x3c)) + 0x18)) = *((u16*)r4);
    *((u8*)(*((u32*)(r4 + 0x3c)) + 0x12)) = 2;
    *((u32*)(*((u32*)(r4 + 0x3c)) + 0x28)) = 0;
    *((u32*)(*((u32*)(r4 + 0x3c)) + 0x30)) = 0;
    sub_02089D40(*((u32*)(r4 + 0x3c)), _020FFEC0, 2);
    sub_02077394(r4);
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    OverlayManager_Run(*((u32*)(r4 + 0x38)));
    OverlayManager_Delete(*((u32*)(r4 + 0x38)));
    *((u32*)(r4 + 0x38)) = 0;
    sub_02076E64(r4, *((u32*)r4));
    sub_02075630(r4);
    DrawFrameAndWindow2(*((u32*)(r4 + 4)), 0, 1, 0xa);
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 6, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 0x20)), 6, 0);
    Pokepic_ScheduleReloadFromNarc(*((u32*)(r4 + 0x1c)));
    Pokepic_ScheduleReloadFromNarc(*((u32*)(r4 + 0x20)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 0x14)), 0xf, 0x0000FFFF, 1);
    // str r2, [sp]
    Pokepic_StartPaletteFadeAll(*((u32*)(r4 + 0x18)), 0x10, 0, 0);
    sub_0203A880();
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    SetMasterBrightnessNeutral(0);
    SetMasterBrightnessNeutral(1);
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0x14)));
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, #0x6e
    // strb r1, [r0]
    // add r4, #0x64
    // strb r0, [r4]
    // add r2, #0x6c
    BufferMoveName(*((u32*)(r4 + 0xc)), 0, *((u16*)r4));
    sub_020772F8(r4, 0x000004AD);
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    sub_0207584C(r4, 0);
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    sub_02075A04(r4);
    Mon_GetBoxMon(*((u32*)(r4 + 0x28)));
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 0, r0);
    // add r2, #0x6c
    BufferMoveName(*((u32*)(r4 + 0xc)), 1, *((u16*)r4));
    sub_020772F8(r4, 0x000004AE);
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r4, #0x64
    // strb r0, [r4]
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, #0x65
    TextPrinterCheckActive(*((u8*)r4), 0x1e);
    // add r0, #0x66
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x66
    // add r4, #0x64
    // strb r0, [r4]
    sub_020772F8(r4, 0x000004AF);
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    Mon_GetBoxMon(*((u32*)(r4 + 0x28)), 0x1e);
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 0, r0);
    // add r1, #0x6e
    // add r1, #0x36
    GetMonData(*((u32*)(r4 + 0x28)), *((u8*)r4), 0);
    BufferMoveName(*((u32*)(r4 + 0xc)), 1, r0);
    sub_020772F8(r4, (0x4b << 4));
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    sub_020772F8(r4, 0x000004B1);
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    Mon_GetBoxMon(*((u32*)(r4 + 0x28)), 0x1e);
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 0, r0);
    // add r2, #0x6c
    BufferMoveName(*((u32*)(r4 + 0xc)), 1, *((u16*)r4));
    sub_020772F8(r4, 0x000004B2);
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r1, #0x6e
    // add r2, #0x66
    // add r1, #MON_DATA_MOVE1_PP_UPS
    SetMonData(*((u32*)(r4 + 0x28)), *((u8*)r4), r4);
    // add r1, #0x6c
    // add r2, #0x6e
    MonSetMoveInSlot(*((u32*)(r4 + 0x28)), *((u16*)r4), *((u8*)r4));
    // add r0, #0x66
    // strb r1, [r0]
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, #0x65
    TextPrinterCheckActive(*((u8*)r4), 0x1e);
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    IsFanfarePlaying((*((u8*)r4) + 1));
    // add r0, #0x66
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x66
    // add r4, #0x64
    // strb r0, [r4]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 0x14)), 0xf, 0x0000FFFF, 1);
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(*((u32*)(r4 + 0x18)), 0, 0x10, 0);
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0x14)));
    sub_02077664(*((u32*)(r4 + 0x30)));
    sub_02076C90(r4);
    // add r4, #0x67
    // strb r0, [r4]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0x14)));
    // add r2, #0xf4
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)(r4 + 0x1c)), 0xd, 0xd);
    Pokepic_SetAttr(*((u32*)(r4 + 0x20)), 0xc, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 0x20)), 0xd, 0);
    Pokepic_SetAttr(*((u32*)(r4 + 0x20)), 6, 1);
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 0x14)), 0xf, 0x0000F3FF, 0);
    // str r0, [sp]
    Pokepic_StartPaletteFadeAll(*((u32*)(r4 + 0x18)), 0x10, 0, 0);
    // add r0, #0x72
    // strb r1, [r0]
    // add r0, #0x73
    // strb r1, [r0]
    // add r0, #0x74
    // strb r2, [r0]
    // add r0, #0x75
    // strb r2, [r0]
    // add r0, #0x70
    // strb r1, [r0]
    StopBGM(0x000003F3, 0, 0xa0);
    sub_02077664(*((u32*)(r4 + 0x30)));
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0x14)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, #0x60
    // add r0, #0x84
    sub_0207294C(*((u32*)r4), *((u32*)(r4 + 0x44)), *((u32*)(r4 + 0x1c)), *((u16*)r4));
    // add r2, #0x60
    // add r0, #0x84
    // add r1, sp, #0x18
    NARC_ReadPokepicAnimScript(*((u32*)r4), *((u16*)r4), 1);
    // add r1, sp, #0x18
    Pokepic_SetAnimScript(*((u32*)(r4 + 0x1c)));
    Pokepic_StartAnim(*((u32*)(r4 + 0x1c)), 0);
    // add r0, #0x60
    // add r1, #0x80
    PlayCry(*((u16*)r4), *((u8*)r4));
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    IsCryFinished((*((u8*)r4) + 1));
    sub_02017068(*((u32*)(r4 + 0x44)), 0);
    Pokepic_IsAnimFinished(*((u32*)(r4 + 0x1c)));
    Mon_GetBoxMon(*((u32*)(r4 + 0x28)));
    BufferBoxMonNickname(*((u32*)(r4 + 0xc)), 0, r0);
    sub_020772F8(r4, 0x00000397);
    // add r1, #0x65
    // strb r0, [r1]
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    // add r0, #0x65
    TextPrinterCheckActive(*((u8*)r4), 0x14);
    // add r0, #0x66
    // add r0, #0x66
    // strb r1, [r0]
    // add r0, #0x66
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 0x14)), 0xf, 0x0000FFFF, 1);
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(*((u32*)(r4 + 0x18)), 0, 0x10, 0);
    // add r0, #0x64
    // add r4, #0x64
    // strb r0, [r4]
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + 0x14)));
    // add r4, #0x67
    // strb r0, [r4]
}




void sub_02076C90(void) {
    // sub r0, #0xd
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02076CB6: ; jump table
    // str r0, [sp]
    // mov r1, #MON_DATA_SPECIES
    // add r2, sp, #0
    // str r0, [sp]
    // mov r1, #MON_DATA_POKEBALL
    // add r2, sp, #0
    // str r0, [sp]
    // mov r1, #MON_DATA_HELD_ITEM
    // add r2, sp, #0
    // mov r1, #MON_DATA_MARKINGS
    // add r2, sp, #0
    // mov r1, #MON_DATA_SINNOH_CHAMP_RIBBON
    // str r1, [sp, #4]
    // add r6, sp, #0
    // ldr r0, [sp, #4]
    // str r1, [sp, #4]
    // mov r1, #MON_DATA_COOL_RIBBON
    // str r1, [sp, #4]
    // add r6, sp, #0
    // ldr r0, [sp, #4]
    // str r1, [sp, #4]
    // mov r1, #MON_DATA_SUPER_COOL_RIBBON
    // str r1, [sp, #4]
    // add r6, sp, #0
    // ldr r0, [sp, #4]
    // str r1, [sp, #4]
    // mov r1, #MON_DATA_SHINY_LEAF_A
    // add r2, sp, #0
    // mov r1, #MON_DATA_SHINY_LEAF_B
    // add r2, sp, #0
    // mov r1, #MON_DATA_SHINY_LEAF_C
    // add r2, sp, #0
    // mov r1, #MON_DATA_SHINY_LEAF_D
    // add r2, sp, #0
    // mov r1, #MON_DATA_SHINY_LEAF_E
    // add r2, sp, #0
    // mov r1, #MON_DATA_SHINY_LEAF_CROWN
    // add r2, sp, #0
    // mov r1, #MON_DATA_MOOD
    // add r2, sp, #0
    // add r2, sp, #0
    // add r2, sp, #0
    // add r2, sp, #0
    // add r1, sp, #8
    // add r2, sp, #8
    // str r0, [sp, #4]
    // add r2, sp, #4
}




void sub_02076E64(void) {
    GfGfx_DisableEngineAPlanes();
    // add r3, sp, #0x20
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x20
    GfGfx_SetBanks((5 - 1));
    MIi_CpuClear32(0, (6 << 0x18), (2 << 0x12));
    MIi_CpuClear32(0, (0x62 << 0x14), (2 << 0x10));
    MIi_CpuClear32(0, (0x19 << 0x16), (1 << 0x12));
    MIi_CpuClear32(0, (0x66 << 0x14), (2 << 0x10));
    // add r3, sp, #0x10
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x9c
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, sp, #0x9c
    InitBgFromTemplate(r4, 1, (0xa - 1), 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r2, sp, #0xb8
    InitBgFromTemplate(r4, 2, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r2, sp, #0xd4
    InitBgFromTemplate(r4, 3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    // strh r2, [r1]
    GfGfx_EngineATogglePlanes(1, 1, ((*((u16*)0x04000008) & ~(3)) | 1));
    // add r3, sp, #0x48
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, sp, #0x48
    InitBgFromTemplate(r4, 4, (0xa - 1), 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r2, sp, #0x64
    InitBgFromTemplate(r4, 5, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r2, sp, #0x80
    InitBgFromTemplate(r4, 6, 0);
    BgClearTilemapBufferAndCommit(r4, 6);
    Options_GetFrame(*((u32*)(r5 + 0x2c)));
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_0200EB80(r4, 1, 1, 0xa);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x73, 0, r4, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x73, 1, r4, 3);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x14)), 0x73, 8, *((u32*)(r5 + 0x5c)));
    sub_0200E640(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x14)), 0x26, r0, *((u32*)(r5 + 0x5c)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x14)), 0x10, 8, *((u32*)(r5 + 0x5c)));
    // str r0, [sp]
    sub_0200E398(*((u32*)r5), 2, 1, 0);
    sub_0200E3D8();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x14)), 0x26, r0, *((u32*)(r5 + 0x5c)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x14)), 0xef, 0, *((u32*)(r5 + 0x5c)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x14)), 0xef, 0xf, *((u32*)(r5 + 0x5c)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 0x14)), 0x10, 9, *((u32*)(r5 + 0x5c)));
    NARC_New(0xef, *((u32*)(r5 + 0x5c)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(0x10, r4, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0x11, r4, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 1, r4, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0xa, r4, 5);
    NARC_Delete(r6);
    ToggleBgLayer(5, 0);
    ToggleBgLayer(6, 0);
    // and r3, r2
    // str r1, [r0]
    // and r1, r2
    // str r1, [r3]
    // add r3, #0x48
    // strh r2, [r3]
    // add r0, #0x4a
    // strh r1, [r0]
    // add r0, #0x72
    // strb r1, [r0]
    // add r0, #0x73
    // strb r1, [r0]
    // add r0, #0x74
    // strb r1, [r0]
    // add r0, #0x75
    // strb r1, [r0]
    GfGfx_BothDispOn(r5, 0xa0, (*((u16*)(1 << 0x1a)) & ~(0x3f)), (1 << 0x1a));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    Main_SetVBlankIntrCB(sub_02077270, r5);
}




void sub_020771A0(void) {
}




void sub_020771E8(void) {
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x10
    // add r2, #0x62
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x10
}




void sub_02077270(void) {
    // add r0, #0x75
    // add r0, #0x73
    // add r0, #0x72
    // add r0, #0x74
    // and r1, r3
    // and r5, r3
    // strh r5, [r0]
    *((u16*)(0x04000040 + 4)) = ((*((u8*)r0) << 8) | *((u8*)r0));
    PokepicManager_HandleLoadImgAndOrPltt(*((u32*)(r0 + 0x18)), ((*((u8*)r0) << 8) | *((u8*)r0)), *((u8*)r0), (0xff << 8));
    // add r0, #0xb8
    // add r0, #0xb0
    GF_AssertFail(*((u32*)r4));
    // add r0, #0xb0
    SpriteSystem_DrawSprites(*((u32*)r4));
    SpriteSystem_TransferOam();
    GF_RunVramTransferTasks();
    PaletteData_PushTransparentBuffers(*((u32*)(r4 + 0x14)));
    DoScheduledBgGpuUpdates(*((u32*)r4));
    // str r0, [r3, r1]
}




void sub_020772F8(void) {
    NewString_ReadMsgData(*((u32*)(r0 + 8)));
    StringExpandPlaceholders(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)), r0);
    Heap_Free(r5);
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0xff);
    Options_GetTextFrameDelay(*((u32*)(r4 + 0x2c)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    AddTextPrinterParameterized(*((u32*)(r4 + 4)), 1, *((u32*)(r4 + 0x10)), 0);
}




void sub_02077340(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02077354: ; jump table
    GF_IsAnySEPlaying((*((u16*)(r0 + 6)) << 0x10));
    IsFanfarePlaying();
    PlayFanfare(0x000004A4);
    PlaySE(0x000005E6);
    PlayFanfare((0x4a << 4));
}




void sub_02077394(void) {
}



