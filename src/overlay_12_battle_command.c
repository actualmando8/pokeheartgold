/* Decompiled from asm/overlay_12_battle_command.s */
#include "global.h"

void BattleScript_CalcEffortValues(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    AllocAndLoadMonPersonal_HandleAlternateForm(r2, r3, 5);
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    Party_GetMonByIndex();
    // str r0, [sp, #0x14]
    GetMonData(6, r4);
    GetItemAttr(((r0 << 0x10) >> 0x10), 1, 5);
    GetItemAttr(r6, 2, 5);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0x20
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // add r1, #0xd
    GetMonData(r4, 0);
    // ldr r1, [sp, #0xc]
    // strb r0, [r1]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #8]
    // add r0, sp, #0x20
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #8]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02246488: ; jump table
    GetPersonalAttr(r7, 0xa);
    // asr r4, r0, #0x10
    // add r0, r4, r6
    // asr r4, r0, #0x10
    GetPersonalAttr(r7, 0xb);
    // asr r4, r0, #0x10
    // add r0, r4, r6
    // asr r4, r0, #0x10
    GetPersonalAttr(r7, 0xc);
    // asr r4, r0, #0x10
    // add r0, r4, r6
    // asr r4, r0, #0x10
    GetPersonalAttr(r7, 0xd);
    // asr r4, r0, #0x10
    // add r0, r4, r6
    // asr r4, r0, #0x10
    GetPersonalAttr(r7, 0xe);
    // asr r4, r0, #0x10
    // add r0, r4, r6
    // asr r4, r0, #0x10
    GetPersonalAttr(r7, 0xf);
    // asr r4, r0, #0x10
    // add r0, r4, r6
    // asr r4, r0, #0x10
    // ldr r0, [sp, #4]
    MaskOfFlagNo(((r0 << 0x10) << 0x10));
    // ldr r0, [sp]
    Party_MaskMonsWithPokerus(((r0 << 0x18) >> 0x18));
    // asr r4, r0, #0x10
    // asr r4, r0, #0x10
    // ldr r0, [sp, #0x18]
    // add r0, r0, r4
    // sub r0, r0, r1
    // sub r0, r4, r0
    // asr r4, r0, #0x10
    // ldr r0, [sp, #0x10]
    // add r0, r0, r4
    // sub r0, #0xff
    // sub r0, r4, r0
    // asr r4, r0, #0x10
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x10]
    // add r1, r0, r4
    // ldr r0, [sp, #0x10]
    // strb r1, [r0]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #8]
    // add r0, r0, r4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r1, #0xd
    SetMonData(((*((u8*)(*((u8*)((r4 << 0x11) << 0x10)) << 0x10)) << 0x10) >> 0x10), 0x000001FE);
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    FreeMonPersonal(r7);
}




void Task_GetPokemon(void) {
    // str r0, [sp, #0x10]
    BattleSystem_GetMessageLoader(*((u32*)r1));
    // str r0, [sp, #0x20]
    BattleSystem_GetPaletteData(*((u32*)r4));
    ov12_0223A8D4(*((u32*)r4));
    // str r0, [sp, #0x24]
    MaskOfFlagNo(1);
    // tst r0, r1
    _02247216(*((u32*)(r4 + 0x28)), *((u8*)(r6 + 0x00003108)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022465F2: ; jump table
    // str r0, [sp, #0x138]
    // str r0, [sp, #0x134]
    // add r0, r7, r0
    // str r0, [sp, #0x13c]
    // str r0, [sp, #0x140]
    BattleSystem_GetSpriteSystem(*((u32*)r4));
    // str r0, [sp, #0x14c]
    BattleSystem_GetPaletteData(*((u32*)r4));
    // str r0, [sp, #0x150]
    // str r0, [sp, #0x144]
    // str r0, [sp, #0x148]
    // str r0, [sp, #0x154]
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    // str r0, [sp, #0x130]
    // str r0, [sp, #0x130]
    // str r0, [sp, #0x130]
    // add r0, sp, #0x130
    ov07_02233DB8(0xf, 2);
    *((u32*)(r4 + 8)) = r0;
    *((u32*)(r4 + 0x28)) = 1;
    PlaySE(0x0000070A);
    // strh r1, [r2, r0]
    ov07_02232F58(*((u32*)(r4 + 8)), 0, *((u32*)r4));
    BattleSystem_GetOpponentData(*((u32*)r4), 0);
    // add r0, #0x88
    ov07_02233F20(*((u32*)r0));
    // add r0, #0x88
    // add r5, #0x88
    *((u32*)(r4 + 8)) = *((u32*)r5);
    // str r0, [r5]
    *((u32*)(r4 + 0x28)) = 1;
    PlaySE(0x0000070A);
    // strh r1, [r2, r0]
    ov07_02232F58(*((u32*)(r4 + 8)), 0, *((u32*)r4));
    *((u32*)(r4 + 0x40)) = 0;
    ov07_02232F60(*((u32*)(r4 + 8)), 0);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    sub_0200602C(0x000005E6, 0x75);
    ov07_02232F58(*((u32*)(r4 + 8)), 2);
    *((u32*)(r4 + 0x28)) = 0x1a;
    sub_0200602C(0x00000708, 0x75);
    ov07_02232F58(*((u32*)(r4 + 8)), 1);
    *((u32*)(r4 + 0x28)) = 2;
    *((u32*)(r4 + 0x34)) = 0x17;
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) - 1);
    ov12_022628A0(*((u32*)r4), r7, *((u32*)(r4 + 0x2c)));
    ov12_02247228(*((u32*)r4), *((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x38)) = r0;
    *((u32*)(r4 + 0x3c)) = 3;
    *((u32*)(r4 + 0x28)) = 3;
    ov07_02232F60(*((u32*)(r4 + 8)), 1);
    Link_QueueNotEmpty(*((u32*)(r4 + 4)));
    _02247216();
    ov07_02232F58(*((u32*)(r4 + 8)), 3);
    *((u32*)(r4 + 0x28)) = 4;
    ov07_02232F60(*((u32*)(r4 + 8)), 3);
    *((u32*)(r4 + 0x28)) = 5;
    *((u32*)(r4 + 0x28)) = 7;
    *((u32*)(r4 + 0x34)) = 0xc;
    *((u32*)(r4 + 0x28)) = 0x1d;
    ov07_02232F58(*((u32*)(r4 + 8)), 4);
    *((u32*)(r4 + 0x28)) = 6;
    *((u32*)(r4 + 0x34)) = 0xc;
    ov07_02232F60(*((u32*)(r4 + 8)), 4);
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) - 1);
    *((u32*)(r4 + 0x3c)) = (*((u32*)(r4 + 0x3c)) - 1);
    *((u32*)(r4 + 0x28)) = 5;
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) - 1);
    ov07_02232F58(*((u32*)(r4 + 8)), 6);
    sub_0200602C(0x00000709, 0x75);
    *((u32*)(r4 + 0x28)) = 8;
    ov07_02232F60(*((u32*)(r4 + 8)), 6);
    // add r0, sp, #0x10c
    *((u16*)(r0 + 2)) = 0x00000363;
    *((u8*)(r0 + 1)) = 0x82;
    // str r7, [sp, #0x110]
    BattleSystem_GetTextFrameDelay(*((u32*)r4), 0x82);
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x10c
    BattleSystem_PrintBattleMessage(*((u32*)r4), r0);
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0x1e;
    *((u32*)(r4 + 0x28)) = 9;
    PlayBGM(SEQ_GS_WIN2);
    BattleSystem_SetCriticalHpMusicFlag(*((u32*)r4), 2);
    TextPrinterCheckActive(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x28)) = 0xa;
    ov07_02232F58(*((u32*)(r4 + 8)), 7);
    ov07_02232F60(*((u32*)(r4 + 8)), 7);
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) - 1);
    _02247216((*((u32*)(r4 + 0x34)) - 1));
    ov12_0223BD8C(*((u32*)r4), r7);
    // add r3, r2, r7
    BattleSystem_GetPartyMon(*((u32*)r4), r7, *((u8*)(r3 + 0x0000219C)));
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    // add r3, r2, r7
    BattleSystem_GetPartyMon(*((u32*)r4), r7, *((u8*)(r3 + 0x0000219C)));
    ov12_022567D4(*((u32*)r4), *((u32*)(r4 + 4)), r0);
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 0xf, 0x0000FFFF, 1);
    // ldr r0, [sp, #0x24]
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(0, 0x10, 0);
    *((u32*)(r4 + 0x28)) = 0x21;
    *((u32*)(r4 + 0x40)) = 1;
    GetMonData(r6, 5, 0);
    BattleSystem_CheckMonCaught(*((u32*)r4), r0);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    BattleSystem_GetMessageIcon(*((u32*)r4), (1 << 0xc));
    sub_0201649C(1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 0xf, 0x0000FFFF, 1);
    // ldr r0, [sp, #0x24]
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(0, 0x10, 0);
    *((u32*)(r4 + 0x28)) = 0x16;
    *((u32*)(r4 + 0x40)) = 1;
    BattleSystem_GetMessageIcon(1);
    sub_0201649C(1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 5, 0x0000FFFF, 1);
    // ldr r0, [sp, #0x24]
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(0, 0x10, 0);
    *((u32*)(r4 + 0x28)) = 0x10;
    // add r0, sp, #0xe8
    *((u16*)(0x10 + 2)) = 0x00000367;
    *((u8*)(0x10 + 1)) = 0x82;
    // str r7, [sp, #0xec]
    BattleSystem_GetTextFrameDelay(*((u32*)r4), 0x82);
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0xe8
    BattleSystem_PrintBattleMessage(*((u32*)r4), r0);
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0x1e;
    *((u32*)(r4 + 0x28)) = 0xb;
    ov12_0223BB44(*((u32*)r4));
    TextPrinterCheckActive(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) - 1);
    *((u32*)(r4 + 0x28)) = 0xc;
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 5, 0x0000FFFF, 1);
    // ldr r0, [sp, #0x24]
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(0, 0x10, 0);
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(1);
    PaletteData_GetSelectedBuffersBitmask(r5);
    ov07_02233ECC(*((u32*)(r4 + 8)));
    // ldr r0, [sp, #0x24]
    PokepicManager_DeleteAllPics();
    ov12_02237CC4(*((u32*)r4));
    ov12_0223A8F4(*((u32*)r4), 0);
    ov12_02265FC4(0);
    ov12_0223A8F4(*((u32*)r4), 1);
    ov12_02265FC4(0);
    BattleSystem_GetOpponentData(*((u32*)r4), 0);
    ov12_02261294(0);
    BattleSystem_GetBgConfig(*((u32*)r4));
    // str r0, [sp, #0xd0]
    BattleSystem_GetPaletteData(*((u32*)r4));
    // str r0, [sp, #0xd4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0xd8]
    // str r0, [sp, #0xe4]
    // add r3, r2, r7
    BattleSystem_GetPartyMon(*((u32*)r4), r7, *((u8*)(r3 + 0x0000219C)));
    // str r0, [sp, #0xdc]
    BattleSystem_GetPokedex(*((u32*)r4));
    Pokedex_IsNatDexEnabled();
    // str r0, [sp, #0xe0]
    ObjCharTransfer_PopTaskManager();
    *((u32*)(r4 + 0x54)) = r0;
    // add r0, sp, #0xd0
    ov18_021F8974();
    *((u32*)(r4 + 0x50)) = r0;
    *((u32*)(r4 + 0x28)) = 0xd;
    ov18_021F89C8(*((u32*)(r4 + 0x50)));
    // tst r0, r1
    *((u32*)(r4 + 0x28)) = 0xe;
    System_GetTouchNew(0xe, *((u32*)(gSystem + 0x48)));
    PlaySE(0x000005DC);
    *((u32*)(r4 + 0x28)) = 0xe;
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 0xf, 0x0000FFFF, 1);
    // ldr r0, [sp, #0x24]
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(0, 0x10, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 5, 1);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    *((u32*)(r4 + 0x28)) = 0x17;
    ov18_021F95F8(*((u32*)(r4 + 0x50)), (1 << 0xc));
    Pokepic_AddAttr(0, 4);
    Pokepic_GetAttr(r5, 0);
    Pokepic_SetAttr(r5, 0, 0x80);
    ov18_021F95AC(*((u32*)(r4 + 0x50)));
    *((u32*)(r4 + 0x28)) = 0xf;
    ov18_021F89D0(*((u32*)(r4 + 0x50)));
    ObjCharTransfer_PushTaskManager(*((u32*)(r4 + 0x54)));
    ov12_02237D00(*((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 5, 0x0000FFFF, 1);
    *((u32*)(r4 + 0x28)) = 0x11;
    PaletteData_GetSelectedBuffersBitmask(r5);
    // add r3, r2, r7
    BattleSystem_GetPartyMon(*((u32*)r4), r7, *((u8*)(r3 + 0x0000219C)));
    ov07_02233ECC(*((u32*)(r4 + 8)));
    // ldr r0, [sp, #0x24]
    PokepicManager_DeleteAllPics();
    BattleSystem_GetOpponentData(*((u32*)r4), 0);
    ov12_02261294(0);
    ov12_02237CC4(*((u32*)r4));
    ov12_02237D00(*((u32*)r4));
    // add r0, sp, #0xc0
    GetPokemonSpriteCharAndPlttNarcIds(r6, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // add r1, sp, #0xc0
    PokepicManager_CreatePokepic(0, 0x80, 0x48);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 5, 0x0000FFFF, 1);
    // ldr r0, [sp, #0x24]
    // str r2, [sp]
    Pokepic_StartPaletteFadeAll(0x10, 0, 0);
    *((u32*)(r4 + 0x28)) = 0x11;
    PaletteData_GetSelectedBuffersBitmask(r5);
    *((u32*)(r4 + 0x28)) = 0x12;
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(0);
    PaletteData_SetAutoTransparent(r5, 1);
    // str r0, [sp]
    // str r2, [sp, #4]
    // add r3, r1, r7
    // str r0, [sp, #8]
    BattleController_EmitDrawYesNoBox(*((u32*)r4), *((u32*)(r4 + 4)), 0, (0xd9 << 2));
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    BattleBuffer_GetNext(r6, 0);
    BattleBuffer_GetNext(*((u32*)(r4 + 4)), 0);
    *((u32*)(r4 + 0x28)) = 0x16;
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 0xf, 0x0000FFFF, 1);
    // ldr r0, [sp, #0x24]
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(0, 0x10, 0);
    *((u32*)(r4 + 0x28)) = 0x14;
    PaletteData_GetSelectedBuffersBitmask(r5);
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
    // add r3, r2, r7
    BattleSystem_GetPartyMon(*((u32*)r4), r7, *((u8*)(r3 + 0x0000219C)));
    GetMonData(5, 0);
    BattleSystem_GetOptions(*((u32*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    NamingScreen_CreateArgs(5, 1, r5, 0xa);
    *((u32*)(r4 + 0x54)) = r0;
    BattleSystem_GetPartySize(*((u32*)r4), 0);
    ov12_0223BB1C(*((u32*)r4));
    // add r0, r0, r1
    *((u32*)(r5 + 0x44)) = r0;
    GetMonData(r6, 0x70, 0);
    *((u32*)(r5 + 8)) = r0;
    BattleSystem_GetPcStorage(*((u32*)r4));
    *((u32*)(r5 + 0x48)) = r0;
    GetMonData(r6, 0x6f, 0);
    *((u32*)(r5 + 0x10)) = r0;
    OverlayManager_New(gOverlayTemplate_NamingScreen, r5, 5);
    *((u32*)(r4 + 0x50)) = r0;
    *((u32*)(r4 + 0x28)) = 0x15;
    BattleSystem_HpBar_Delete(*((u32*)r4));
    BattleSystem_GetMaxBattlers(*((u32*)r4));
    BattleSystem_GetOpponentData(*((u32*)r4), r5);
    Sprite_DeleteAndFreeResources(*((u32*)(r0 + 0x18)));
    *((u32*)(r6 + 0x18)) = r7;
    BattleSystem_GetMaxBattlers(*((u32*)r4));
    ov12_02237B6C(*((u32*)r4));
    ov12_0223BBF0(*((u32*)r4), 1);
    OverlayManager_Run(*((u32*)(r4 + 0x50)));
    // add r3, r2, r7
    BattleSystem_GetPartyMon(*((u32*)r4), r7, *((u8*)(r3 + 0x0000219C)));
    SetMonData(0x78, *((u32*)(r5 + 0x18)));
    BattleSystem_GameStatIncrement(*((u32*)r4), 0x32);
    NamingScreen_DeleteArgs(r5);
    OverlayManager_Delete(*((u32*)(r4 + 0x50)));
    ov12_0223BBF0(*((u32*)r4), 2);
    *((u32*)(r4 + 0x28)) = 0x18;
    PaletteData_GetSelectedBuffersBitmask(r5);
    BattleSystem_GetParty(*((u32*)r4), 0);
    // str r0, [sp, #0x28]
    // add r3, r2, r7
    BattleSystem_GetPartyMon(*((u32*)r4), r7, *((u8*)(r3 + 0x0000219C)));
    BattleSystem_SetPokedexCaught(*((u32*)r4), r7);
    ov12_022567D4(*((u32*)r4), *((u32*)(r4 + 4)), r6);
    ov12_0223B870(*((u32*)r4), r6);
    BattleController_EmitIncrementGameStat(*((u32*)r4), 0, 0, 0xa);
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    ov18_021F89D0(*((u32*)(r4 + 0x50)), (1 << 0xc));
    ObjCharTransfer_PushTaskManager(*((u32*)(r4 + 0x54)));
    ov12_02237D00(*((u32*)r4));
    BattleSystem_GetBugContestCaughtMon(*((u32*)r4));
    CopyPokemonToPokemon(r6, r0);
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(1);
    *((u32*)(r4 + 0x28)) = 0x21;
    // ldr r0, [sp, #0x28]
    Party_AddMon(0x21, r6);
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 0xf, 0x0000FFFF, 1);
    // ldr r0, [sp, #0x24]
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(0, 0x10, 0);
    *((u32*)(r4 + 0x28)) = 0x21;
    BattleSystem_GetPcStorage(*((u32*)r4));
    // str r0, [sp, #0x1c]
    PCStorage_GetActiveBox();
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    PCStorage_FindFirstBoxWithEmptySlot();
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x14]
    PCStorage_SetActiveBox();
    // add r1, #0x42
    GetMonData(r6, 0, 0);
    // str r0, [sp, #0x2c]
    // add r1, #0x3a
    // add r2, sp, #0x2c
    SetMonData(r6, r5);
    Mon_UpdateGiratinaForm(r6);
    // mvn r1, r1
    BattleSystem_SetPokedexCaught(*((u32*)r4), r7);
    Mon_GetBoxMon(r6);
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x14]
    PCStorage_PlaceMonInBoxFirstEmptySlot(r0);
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    ov12_0223BB1C(*((u32*)r4));
    // add r1, r0, r1
    // add r0, sp, #0x9c
    *((u16*)(r0 + 2)) = 0x00000496;
    *((u8*)(r0 + 1)) = 0x93;
    // ldr r0, [sp, #0x18]
    // str r7, [sp, #0xa0]
    // str r0, [sp, #0xa4]
    ov12_0223BB1C(0x93);
    // add r1, r0, r1
    // add r0, sp, #0x9c
    *((u16*)(r0 + 2)) = 0x00000498;
    *((u8*)(r0 + 1)) = 0xaf;
    // ldr r0, [sp, #0x18]
    // str r7, [sp, #0xa0]
    // str r0, [sp, #0xa4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0xa8]
    BattleSystem_GetTextFrameDelay(*((u32*)r4), 0xaf);
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x9c
    BattleSystem_PrintBattleMessage(*((u32*)r4), r0);
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0x1e;
    *((u32*)(r4 + 0x28)) = 0x19;
    *((u32*)(r4 + 0x28)) = 0x21;
    TextPrinterCheckActive(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) - 1);
    BattleSystem_GetMessageIcon(*((u32*)r4));
    sub_0201649C(1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    PaletteData_BeginPaletteFade(r5, 0xf, 0x0000FFFF, 1);
    // ldr r0, [sp, #0x24]
    // str r1, [sp]
    Pokepic_StartPaletteFadeAll(0, 0x10, 0);
    *((u32*)(r4 + 0x28)) = 0x21;
    ov07_02232F60(*((u32*)(r4 + 8)), 2);
    ov07_02233ECC(*((u32*)(r4 + 8)));
    // add r0, sp, #0x78
    *((u16*)(r0 + 2)) = 0x0000035B;
    *((u8*)(r0 + 1)) = 0;
    BattleSystem_GetTextFrameDelay(*((u32*)r4), 0);
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x78
    BattleSystem_PrintBattleMessage(*((u32*)r4), r0);
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0x1e;
    *((u32*)(r4 + 0x28)) = 0x1b;
    TextPrinterCheckActive(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) - 1);
    // add r0, sp, #0x2c
    *((u16*)((*((u32*)(r4 + 0x34)) - 1) + 0x2a)) = (0xd7 << 2);
    // add r0, sp, #0x54
    *((u8*)((*((u32*)(r4 + 0x34)) - 1) + 1)) = 0;
    BattleSystem_GetTextFrameDelay(*((u32*)r4), 0);
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x54
    BattleSystem_PrintBattleMessage(*((u32*)r4), r0);
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0x1e;
    *((u32*)(r4 + 0x28)) = 0x1c;
    TextPrinterCheckActive(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) - 1);
    // str r2, [r1, r0]
    Heap_Free(r4, *((u32*)(r4 + 4)), 0);
    // ldr r0, [sp, #0x10]
    SysTask_Destroy();
    BattleController_EmitPokemonSendOut(*((u32*)r4), r7, *((u32*)(r4 + 0x2c)), 1);
    *((u32*)(r4 + 0x28)) = 0x1e;
    *((u32*)(r4 + 0x34)) = 2;
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) - 1);
    ov07_02233ECC(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 0x28)) = 0x1f;
    Link_QueueNotEmpty(r6);
    // add r1, r1, r0
    // add r0, sp, #0x2c
    *((u16*)(0x0000035F + 6)) = *((u32*)(r4 + 0x38));
    *((u8*)(0x0000035F + 5)) = 0;
    BattleSystem_GetTextFrameDelay(*((u32*)r4), 0);
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x30
    BattleSystem_PrintBattleMessage(*((u32*)r4), r0);
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0x1e;
    *((u32*)(r4 + 0x28)) = 0x20;
    TextPrinterCheckActive(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) - 1);
    // str r2, [r1, r0]
    Heap_Free(r4, *((u32*)(r4 + 4)), 0);
    // ldr r0, [sp, #0x10]
    SysTask_Destroy();
    PaletteData_GetSelectedBuffersBitmask(r5);
    ov07_02233ECC(*((u32*)(r4 + 8)));
    // ldr r0, [sp, #0x24]
    PokepicManager_DeleteAllPics();
    // strb r2, [r1, r0]
    // str r2, [r1, r0]
    Heap_Free(r4, *((u32*)(r4 + 4)), 0);
    // ldr r0, [sp, #0x10]
    SysTask_Destroy();
}




void ov12_02247228(void) {
    BattleSystem_GetBattleType();
    // tst r0, r1
    // add r1, r4, r0
    GetMonBaseStat(*((u16*)(*((u32*)(r4 + 0x6c)) + (0xb5 << 6))), 8);
    _s32_div_f((*((u8*)(ov12_0226C3CE + (*((u8*)(r4 + 0x0000311C)) << 1))) * r0), *((u8*)(ov12_0226C3CE + (*((u8*)(r4 + 0x0000311C)) << 1))), ov12_0226C3CE);
    // add r1, r4, r0
    GetMonBaseStat(*((u16*)(r1 + (0xb5 << 6))), 8);
    // str r0, [sp, #4]
    GetBattlerVar(r4, *((u32*)(r4 + 0x6c)), 0x1b, 0);
    GetBattlerVar(r4, *((u32*)(r4 + 0x6c)), 0x1c, 0);
    // add r2, #0xc6
    // add r2, #0xc6
    // add r2, #0xc4
    // add r2, #0xc4
    // add r2, r1, r1
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _022472EC: ; jump table
    // add r2, #0xc8
    // add r2, #0xc8
    // add r0, #0xc7
    // add r2, #0xc9
    // add r0, #0xc9
    // add r2, #0xcb
    // add r2, #0xca
    // add r2, #0xca
    // add r0, #0xcb
    // str r0, [sp, #4]
    BattleSystem_GetTerrainId(r7, *((u32*)(r4 + (0x4a << 2))), 0x000001ED, r0);
    // str r0, [sp, #4]
    // add r1, r4, r0
    // sub r0, r0, r1
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // add r2, r4, r1
    BattleSystem_CheckMonCaught(r7, *((u16*)(*((u32*)(r4 + 0x6c)) + (0xb5 << 6))), *((u32*)(r4 + 0x6c)));
    // str r0, [sp, #4]
    // add r0, #0x28
    // str r0, [sp, #4]
    // add r0, #0xa
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    BattleSystem_GetTimezone(r7);
    BattleSystem_GetTimezone(r7);
    BattleSystem_GetTerrainId(r7);
    // str r0, [sp, #4]
    // add r0, #0x28
    // str r0, [sp, #4]
    // add r1, r4, r0
    GetMonBaseStat(*((u16*)(*((u32*)(r4 + 0x6c)) + (0xb5 << 6))), 3);
    // add r0, r4, r2
    // add r1, r4, r1
    ov12_0223AAB8(r7, (*((u8*)(*((u32*)(r4 + 0x64)) + 0x00002D74)) >> 1), *((u8*)((0xc0 * *((u32*)(r4 + 0x6c))) + 0x00002D74)), *((u32*)(r4 + 0x6c)));
    // add r5, r5, r0
    // add r1, r4, r0
    ov12_02247668(*((u16*)(*((u32*)(r4 + 0x6c)) + (0xb5 << 6))), *((u32*)(r4 + 0x6c)));
    // add r5, #0x28
    // add r5, #0x1e
    // add r5, #0x14
    // sub r5, #0x14
    // add r3, r4, r0
    // add r6, r4, r1
    // add r1, #0x7e
    // add r0, #0x7e
    // add r3, r4, r2
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // add r1, r4, r6
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r0, [sp, #4]
    _u32_div_f(((*((u32*)(*((u32*)(r4 + 0x6c)) + 0x00002D90)) << 1) * 1), 0xa, *((u16*)ov12_0226C3E8), *((u16*)(*((u32*)(r4 + 0x6c)) + (0xb5 << 6))));
    // add r2, r4, r6
    // ldr r1, [sp]
    // sub r1, r1, r2
    // ldr r1, [sp]
    _u32_div_f((*((u32*)(r2 + 0x00002D8C)) * r0), (*((u32*)(r2 + 0x00002D8C)) * r0), (*((u32*)(r2 + 0x00002D8C)) << 1));
    // add r2, r4, r6
    // tst r0, r2
    // tst r0, r2
    _u32_div_f((0xf * (r0 << 1)), 0xa, *((u32*)(r2 + 0x00002DAC)));
    // strh r2, [r0]
    _u32_div_f((0xff << 0x10), r0, 0);
    // str r0, [r1]
    // sub r2, #8
    // tst r1, r0
    // tst r2, r1
    // strh r1, [r0]
    *((u32*)(0x040002B4 + 4)) = *((u32*)0x040002B4);
    // tst r1, r0
    // tst r1, r0
    _u32_div_f(0x000FFFF0, *((u32*)0x040002B4), 0x040002B0, 0x040002B4);
    BattleSystem_Random(r7);
    // add r0, #0xc9
    // add r0, sp, #8
    // strb r1, [r0]
    BattleSystem_GetPartyMon(r7, *((u32*)(r4 + 0x6c)), 0);
    // add r2, sp, #8
    SetMonData(9);
}




void ov12_02247668(void) {
    // str r1, [sp]
}




void GetBattlerIDBySide(void) {
    // add r1, r2, r2
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022476A8: ; jump table
    // add r6, #0x94
    // add r6, #0x80
    BattleSystem_GetMaxBattlers((*((u16*)(r1 + 6)) << 0x10));
    BattleSystem_GetOpponentData(r4, 0);
    // tst r0, r7
    BattleSystem_GetMaxBattlers(*((u8*)(r0 + 0x00000195)), 0x00000195);
    BattleSystem_GetOpponentData(r4, 0);
    BattleSystem_GetBattleType(*((u8*)(r0 + r7)));
    // tst r0, r1
    BattleSystem_GetMaxBattlers(r4, 2);
    BattleSystem_GetOpponentData(r4, 0);
    BattleSystem_GetMaxBattlers(*((u8*)(r0 + 0x00000195)), 0x00000195);
    BattleSystem_GetOpponentData(r4, 0);
    // tst r0, r7
    BattleSystem_GetMaxBattlers(*((u8*)(r0 + 0x00000195)), 0x00000195);
    BattleSystem_GetOpponentData(r4, 0);
    BattleSystem_GetBattleType(*((u8*)(r0 + r7)));
    // tst r0, r1
    BattleSystem_GetMaxBattlers(r4, 2);
    BattleSystem_GetOpponentData(r4, 0);
    BattleSystem_GetMaxBattlers((0x12 << 4), 0x00000195);
    // str r0, [sp, #4]
    BattleSystem_GetFieldSide(r4, 0);
    // str r0, [sp, #8]
    BattleSystem_GetFieldSide(r4, r7);
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    BattleSystem_GetMaxBattlers();
    // str r0, [sp]
    BattleSystem_GetFieldSide(r4, 0);
    // str r0, [sp, #0xc]
    BattleSystem_GetFieldSide(r4, r7);
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [sp]
    BattleSystem_GetMaxBattlers();
    BattleSystem_GetFieldSide(r4, *((u32*)(r6 + 0x64)));
    BattleSystem_GetFieldSide(r4, 0);
    BattleSystem_GetMaxBattlers();
    BattleSystem_GetFieldSide(r4, *((u32*)(r6 + 0x6c)));
    BattleSystem_GetFieldSide(r4, 0);
    GF_AssertFail((0x46 << 2));
}




void InitBattleMsgData(void) {
    // str r0, [r4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224791A: ; jump table
}




void InitBattleMsg(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _022479E6: ; jump table
}




void ov12_022480C0(void) {
    GetBattlerIDBySide();
    // add r2, r5, r0
    // add r2, r5, r0
}




void GetMoveMessageNo(void) {
    // cmp r1, #1
    // beq _022480FA
    // cmp r1, #0xff
    // beq _02248100
    // ldr r0, [r0, r1]
    // ldr r0, [r0, r1]
    // _02248108: .word 0x00003044
}




void ov12_0224810C(void) {
    // add r2, r0, r1
    ov12_02248654(((*((u32*)(r0 + 0x64)) << 0x18) >> 0x18), *((u16*)(r2 + 0x00002DB8)), *((u32*)(r0 + 0x64)));
    // add r2, r0, r1
    ov12_02248654(((*((u32*)(r0 + 0x6c)) << 0x18) >> 0x18), *((u16*)(r2 + 0x00002DB8)), *((u32*)(r0 + 0x6c)));
    // add r2, r0, r1
    ov12_02248654(((*((u32*)(r0 + (0x46 << 2))) << 0x18) >> 0x18), *((u16*)(r2 + 0x00002DB8)), *((u32*)(r0 + (0x46 << 2))));
}




void ov12_02248184(void) {
    // ldr r0, [r0, r1]
}




void ov12_02248190(void) {
    // ldr r0, [r0, r1]
}




void ov12_0224819C(void) {
    GetBattlerIDBySide((0x4b << 2));
    // add r2, r5, r0
    BattlerSetAbility(r5, ((r0 << 0x18) >> 0x18), *((u8*)(r2 + 0x00002D67)));
}




void ov12_022481D0(void) {
    // ldr r0, [r0, r1]
}




void ov12_022481DC(void) {
    // ldr r0, [r0, r1]
}




void ov12_022481E8(void) {
}




void ov12_02248200(void) {
    // ldr r0, [r0, r1]
}




void ov12_0224820C(void) {
    // ldr r0, [r0, r1]
}




void ov12_02248218(void) {
}




void ov12_02248220(void) {
}




void ov12_02248228(void) {
    // str r2, [sp, #0x18]
    BattleSystem_GetMessageLoader();
    // str r0, [sp, #0x28]
    BattleSystem_GetMessageBuffer(r7);
    // str r0, [sp, #0x20]
    BattleSystem_GetMessageFormat(r7);
    // str r0, [sp, #0x24]
    BattleSystem_GetBgConfig(r7);
    // str r0, [sp, #0x1c]
    BattleSystem_GetSpriteSystem(r7);
    BattleSystem_GetSpriteManager(r7);
    BattleSystem_GetPaletteData(r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, #0xf8
    SpriteSystem_LoadCharResObj(r6, r4, 8, 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(r7, 2, r6, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xf9
    SpriteSystem_LoadCellResObj(r6, r4, 8, 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xfa
    SpriteSystem_LoadAnimResObj(r6, r4, 8, 8);
    SpriteSystem_NewSprite(r6, r4, ov12_0226C428);
    *((u32*)(r5 + 0xc)) = r0;
    ManagedSprite_TickFrame();
    // ldr r0, [sp, #0x18]
    Pokemon_GetIconNaix();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType(r6, r4, 0x14, r0);
    sub_02074490();
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(r7, 2, r6, r4);
    sub_0207449C();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r6, r4, 0x14, r0);
    sub_020744A8();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r6, r4, 0x14, r0);
    SpriteSystem_NewSprite(r6, r4, ov12_0226C45C);
    *((u32*)(r5 + 0x10)) = r0;
    // ldr r0, [sp, #0x18]
    Pokemon_GetIconPalette();
    Sprite_SetPalOffsetRespectVramOffset(*((u32*)*((u32*)(r5 + 0x10))), r0);
    ManagedSprite_TickFrame(*((u32*)(r5 + 0x10)));
    FontSystem_NewInit(1, 5);
    *((u32*)(r5 + 0x50)) = r0;
    // ldr r0, [sp, #0x18]
    GetMonData(0xb0, 0);
    // ldr r0, [sp, #0x18]
    GetMonData(2, 0x6f, 0);
    // ldr r0, [sp, #0x28]
    NewString_ReadMsgData((0x3b << 4));
    // ldr r0, [sp, #0x28]
    NewString_ReadMsgData(0x000003B1);
    // ldr r0, [sp, #0x28]
    NewString_ReadMsgData(0x000003B2);
    // ldr r0, [sp, #0x18]
    Mon_GetBoxMon();
    // ldr r0, [sp, #0x24]
    BufferBoxMonNickname(0, r0);
    // ldr r0, [sp, #0x18]
    GetMonData(0xa1, 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #4]
    BufferIntegerAsString(0, 1, r0, 3);
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    StringExpandPlaceholders(r6);
    String_Delete(r6);
    // add r0, sp, #0x68
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x68
    AddTextWindowTopLeftCorner(0, 0xc, 4);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x20]
    // str r0, [sp, #8]
    // add r0, sp, #0x68
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 0, 0);
    // add r0, sp, #0x68
    sub_02013688(1, 5);
    // add r3, sp, #0x5c
    sub_02021AC8(1, 1);
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x68
    // str r0, [sp, #0x30]
    SpriteManager_GetSpriteList(r4);
    // str r0, [sp, #0x34]
    SpriteManager_FindPlttResourceProxy(r4, 0x00004E30);
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x60]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x2c
    // str r1, [sp, #0x4c]
    sub_020135D8(5, 0);
    // add r3, sp, #0x5c
    *((u32*)(r5 + 0x14)) = r0;
    // ldmia r3!, {r0, r1}
    // add r2, #0x18
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    sub_020138E0(*((u32*)(r5 + 0x14)), 1, r5);
    // add r0, sp, #0x68
    RemoveWindow();
}




void ov12_022484D4(void) {
    BattleSystem_GetSpriteManager();
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0xc)));
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 0x10)));
    FontOAM_Delete(*((u32*)(r5 + 0x14)));
    // add r0, #0x18
    sub_02021B5C(r5);
    SpriteManager_UnloadCharObjById(r4, 0x00004E35);
    SpriteManager_UnloadPlttObjById(r4, 0x00004E30);
    SpriteManager_UnloadCellObjById(r4, 0x00004E2D);
    SpriteManager_UnloadAnimObjById(r4, 0x00004E2D);
    SpriteManager_UnloadCharObjById(r4, 0x00004E36);
    SpriteManager_UnloadPlttObjById(r4, 0x00004E31);
    SpriteManager_UnloadCellObjById(r4, 0x00004E2E);
    SpriteManager_UnloadAnimObjById(r4, 0x00004E2E);
    sub_020135AC(*((u32*)(r5 + 0x50)));
}




void UpdateFrienshipFainted(void) {
    // str r2, [sp]
    BattleSystem_GetFieldSide(r2);
    BattleSystem_GetBattleType(r5);
    // tst r0, r1
    BattleSystem_GetBattlerFromBattlerType(r5, 3);
    BattleSystem_GetBattlerFromBattlerType(r5, 5);
    // add r0, r4, r0
    // add r2, r4, r2
    BattleSystem_GetBattlerFromBattlerType(r5, 1, *((u8*)((0xc0 * r6) + 0x00002D74)), 0x00002D74);
    // ldr r1, [sp]
    // add r3, r4, r2
    BattleSystem_GetPartyMon(r5, *((u8*)(r3 + 0x0000219C)));
    // ldr r0, [sp]
    // add r0, r4, r2
    // add r1, r4, r1
    // sub r0, r1, r0
    BattleSystem_GetLocation(r5, *((u8*)((0xc0 * r6) + 0x00002D74)), 0x00002D74);
    MonApplyFriendshipMod(r7, 8, ((r0 << 0x10) >> 0x10));
    ApplyMonMoodModifier(r7, 6);
    BattleSystem_GetLocation(r5);
    MonApplyFriendshipMod(r7, 6, ((r0 << 0x10) >> 0x10));
    ApplyMonMoodModifier(r7, 4);
    BattleSystem_GetLocation(r5);
    MonApplyFriendshipMod(r7, 6, ((r0 << 0x10) >> 0x10));
    ApplyMonMoodModifier(r7, 4);
}




void BattlerSetAbility(void) {
    // add r1, r0, r1
    // strb r2, [r1, r0]
}




void ov12_02248654(void) {
    // add r1, r0, r1
    // strh r2, [r1, r0]
}



