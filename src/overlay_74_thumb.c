/* Decompiled from asm/overlay_74_thumb.s */
#include "global.h"

void ov74_02228C84(void) {
    // push {r3, r4}
    // ldr r4, _02228CAC ; =ov74_0223BD68
    // ldr r1, _02228CB0 ; =0x00000123
    // mov r3, #0
    // ldrh r2, [r4, #2]
    // cmp r0, r2
    // bne _02228C9C
    // ldr r0, _02228CAC ; =ov74_0223BD68
    // lsl r1, r3, #2
    // ldrh r0, [r0, r1]
    // pop {r3, r4}
    // bx lr
    // add r3, r3, #1
    // add r4, r4, #4
    // cmp r3, r1
    // blo _02228C8C
    // mov r0, #0x3f
    // pop {r3, r4}
    // bx lr
    // nop
    // _02228CAC: .word ov74_0223BD68
    // _02228CB0: .word 0x00000123
    // TODO: decompile
}




void ov74_IntToWstring5(void) {
    _s32_div_f(r1, 0x00002710);
    // add r0, #0x30
    // strh r0, [r5]
    _s32_div_f(r4, 0x00002710);
    _s32_div_f(r1, (0xfa << 2));
    // add r0, #0x30
    *((u16*)(r5 + 2)) = r0;
    _s32_div_f(r4, (0xfa << 2));
    _s32_div_f(r1, 0x64);
    // add r0, #0x30
    *((u16*)(r5 + 4)) = r0;
    _s32_div_f(r4, 0x64);
    _s32_div_f(r1, 0xa);
    // add r0, #0x30
    *((u16*)(r5 + 6)) = r0;
    _s32_div_f(r4, 0xa);
    // add r4, #0x30
    *((u16*)(r5 + 8)) = r1;
}




void ov74_02228D20(void) {
    PlayerProfile_GetNamePtr(*((u32*)(r0 + 0x10)));
    ov74_02228C84(*((u16*)r0));
    // strh r0, [r5]
    PlayerProfile_GetTrainerID_VisibleHalf(*((u32*)(r7 + 0x10)));
    ov74_IntToWstring5(ov74_0223D090, r0);
    *((u16*)(ov74_0223D080 + 0x1a)) = 0;
}




void ov74_02228D64(void) {
    // add r3, sp, #0x20
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, sp, #0x20
    GfGfx_SetBanks((5 - 1), _0223B330);
    // add r0, sp, #0x10
    SetBothScreensModesAndDisable();
    // str r1, [sp]
    ov74_02235308(*((u32*)(r4 + 4)), 0, 1, (0xf << 0xc));
    // str r0, [sp]
    ov74_02235308(*((u32*)(r4 + 4)), 1, 1, (0x3e << 0xa));
    // str r0, [sp]
    ov74_02235308(*((u32*)(r4 + 4)), 4, 1, (0x1e << 0xa));
    // str r0, [sp]
    ov74_02235308(*((u32*)(r4 + 4)), 5, 1, (7 << 0xc));
    ResetAllTextPrinters();
    LoadFontPal0(0, 0, *((u32*)r4));
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r4 + 4)), 0, 1, 1);
    Options_GetFrame(*((u32*)(r4 + 0x14)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r4 + 4)), 0, 0xa, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0x8f
    GfGfxLoader_GXLoadPal(0x71, 0, 0, 0x71);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 1, *((u32*)(r4 + 4)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 2, *((u32*)(r4 + 4)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r4 + 4)), 1, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 4)), 1);
    ov74_02228E98(r4);
}




void ov74_02228E98(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xfc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov74_02228F14(void) {
    // add r0, #0x18
    WindowIsInUse();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #8
    // add r1, #0x18
    ov74_02235414(1, r4, 0, 0x11);
    // add r0, sp, #8
    ov74_02235464(0x16, 0x10, *((u32*)(r4 + (0x51 << 2))));
    // str r0, [sp]
    // add r1, sp, #8
    ov74_02235568(*((u32*)(r4 + 4)), 5, 4);
    // tst r0, r1
    // add r0, #0x18
    sub_0200E5D4(r4, 0);
    // add r4, #0x18
    RemoveWindow(r4);
}




void ov74_02228F8C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x48
    // add r1, #0x28
    ov74_02235414(r0, r0, 0, 0xf7);
    // add r0, #0x48
    ov74_02235464(r4, 0x1b, 4, *((u32*)(r4 + (0x51 << 2))));
    // add r0, #0x48
    ov74_0223546C(r4, 1, 1);
    // str r0, [sp]
    // add r1, #0x48
    ov74_02235568(*((u32*)(r4 + 4)), r4, 2, 0x13);
    // add r0, #0x48
    ov74_02235634(r4);
    // add r0, r2, r0
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x9c
    // add r1, #0x18
    ov74_02235414(r4, r4, 0, 0xf7);
    // add r0, #0x9c
    ov74_02235464(r4, 0x1e, 4, *((u32*)(r4 + (0x51 << 2))));
    // add r0, #0x9c
    ov74_0223546C(r4, 0, 1);
    // str r0, [sp]
    // add r1, #0x9c
    ov74_02235568(*((u32*)(r4 + 4)), r4, 1, 1);
    // add r0, #0x9c
    ov74_02235634(r4);
    // add r0, r2, r0
    // str r0, [r4, r1]
    ov74_0223563C((0x51 << 2), *((u32*)(r4 + (0x51 << 2))));
    ov74_02235690();
    // str r0, [sp]
    // str r0, [sp, #4]
    ov74_02235728(0x71, 0xe, 0xb, 0xd);
    // str r0, [sp]
    ov74_02235930(0, *((u32*)(r4 + 0x00003170)), 0x80, 0x4c);
    // str r0, [r4, r1]
    ov74_02229084(r4, 0x00003170);
}




void ov74_02229084(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0xf0
    // add r1, #0x38
    // add r0, #0xf0
    // add r0, #0xf0
    // str r4, [r5, r0]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp]
    // add r1, #0xf0
    // add r1, #0xf8
    // str r0, [r1]
    // add r0, #0xf0
    // str r2, [sp]
    // sub r2, #0x47
    // add r1, #0xf0
    // add r0, sp, #0x10
    // add r0, sp, #0x10
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r2, [sp, #0x18]
    // add r0, #0xfc
    // str r1, [r0]
    // str r2, [sp]
    // add r5, #0xf0
    // sub r2, #0x48
}




void ov74_02229190(void) {
    // add r0, #0x18
    // add r0, #0x18
    // add r0, #0x18
    // add r0, #0x28
    // add r0, #0x28
    // add r0, #0x38
    // add r0, #0x38
}




void ov74_02229200(void) {
    ov74_022352D0(0x53, 0x000034DC, (2 << 0x10));
    // str r0, [r4]
    BgConfig_Alloc(0x53);
    *((u32*)(r4 + 4)) = r0;
    OverlayManager_GetArgs(r5);
    *((u32*)(r4 + 8)) = *((u32*)(r0 + 8));
    Save_PlayerData_GetProfile(*((u32*)(r0 + 8)));
    *((u32*)(r4 + 0x10)) = r0;
    Save_Pokedex_Get(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 0xc)) = r0;
    Save_PlayerData_GetOptionsAddr(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 0x14)) = r0;
    ov74_022352A0(*((u32*)r4));
    Save_MysteryGift_Get(*((u32*)(r4 + 8)));
    // str r0, [r4, r1]
    // str r0, [r4, r2]
    // sub r0, #8
    // str r1, [r4, r0]
    // add r1, #8
    // str r0, [r4, r1]
    // add r1, #0x10
    // str r0, [r4, r1]
    // add r2, #0xc
    // str r0, [r4, r2]
    Heap_Create(0, 0x59, (0x57 << 4));
    Sound_SetSceneAndPlayBGM(9, 0x0000047E, 1);
}




void ov74_02229294(void) {
    OverlayManager_GetData();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022292B4: ; jump table
    ov74_02228D64((*((u16*)(*((u32*)r5) + 6)) << 0x10));
    Pokedex_IsEnabled(*((u32*)(r4 + 0xc)));
    ov74_0223539C(1, 1, r5, 0xd);
    // str r0, [r5]
    ov74_02228F14(2);
    ov74_02235390(1);
    ov74_0223539C(0, 0xc, r5, 0xd);
    ov74_02228F8C();
    SaveMysteryGift_FindAvailable(*((u32*)(r4 + 0x00003174)));
    // add r0, #0x98
    // str r1, [r0]
    // str r0, [sp]
    // add r1, #0x48
    ov74_02235568(*((u32*)(r4 + 4)), r4, 2, 0x13);
    // str r0, [r4, r1]
    ov74_0223539C(1, 3, r5, 0xd);
    // str r1, [r4, r0]
    ov74_0223539C(1, 4, r5, 0xd);
    TextPrinterCheckActive(((*((u32*)(r4 + 0x0000317C)) << 0x18) >> 0x18));
    // tst r1, r0
    ov74_02235390(1, *((u32*)(gSystem + 0x48)));
    ov74_0223539C(0, 0xc, r5, 0xd);
    ov74_0222962C();
    // str r0, [r4, r1]
    ov74_02235390(1, (0x15 << 4));
    ov74_0223539C(0, 0xc, r5, 0xd);
    ov74_02235390(1);
    ov74_0223539C(0, 0xc, r5, 0xd);
    ov74_02228E98();
    GfGfx_EngineBTogglePlanes(1, 1);
    GfGfx_EngineBTogglePlanes(2, 0);
    // add r1, r4, r1
    ov74_0222EC08(*((u32*)(r4 + 4)), (0xc6 << 6), 0x53);
    ov74_0223539C(1, 6, r5, 0xd);
    // strb r2, [r4, r1]
    ov74_0223539C(0, 0xb, r5, 0xd);
    OS_ResetSystem(0);
    ov74_02229190(r6);
    ov74_022353FC(r5);
    ov74_022358BC();
}




void ov74_02229450(void) {
    Heap_Destroy(0x59);
    RegisterMainOverlay(FS_OVERLAY_ID, gApplication_TitleScreen);
    OverlayManager_FreeData(r4);
    Heap_Destroy(0x53);
}




void ov74_0222947C(void) {
    // add r4, r5, r0
    MI_CpuFill8(r4, 0, (0xd6 << 2));
    NewMsgDataFromNarc(1, 0x1b, 0xf7, *((u32*)r5));
    MessageFormat_New(*((u32*)r5));
    // strh r2, [r5, r1]
    // str r0, [sp]
    ReadMsgData_ExpandPlaceholders(r6, 0x4e, *((u32*)r5));
    // add r1, r4, r1
    CopyStringToU16Array((0x41 << 2), 0x24);
    String_Delete(r7);
    ov74_02235A68(8);
    ov74_02235A68(7);
    // str r0, [sp, #4]
    ov74_02235A68(0xc);
    // str r0, [sp, #8]
    ov74_02235A68(0xa);
    // str r0, [sp, #0xc]
    ov74_02235A68(0xb);
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [r4, r2]
    // strh r1, [r4, r0]
    // strb r1, [r4, r3]
    // strb r1, [r4, r3]
    // strb r3, [r4, r1]
    // strb r3, [r4, r1]
    // strb r2, [r4, r0]
    // ldr r0, [sp]
    ReadMsgData_ExpandPlaceholders(((0x53 << 2) + 6), r6, 0x4d, *((u32*)r5));
    // add r1, r4, r1
    CopyStringToU16Array((0x55 << 2), 0xfa);
    String_Delete(r7);
    // strb r1, [r4, r0]
    // strh r3, [r4, r2]
    // strh r1, [r4, r2]
    // strh r1, [r4, r2]
    // add r0, #8
    // strb r1, [r4, r0]
    // add r0, sp, #0x10
    GF_RTC_CopyDate((0xd2 << 2), 0, ((0xd2 << 2) + 6), 0x000001EA);
    // add r0, sp, #0x10
    RTC_ConvertDateToDay();
    // str r0, [r4, r1]
    // ldr r0, [sp]
    MessageFormat_Delete((0xd5 << 2));
    DestroyMsgData(r6);
    SaveMysteryGift_TryInsertGift(*((u32*)(r5 + 0x00003174)), r4, 3);
    GfGfx_EngineBTogglePlanes(1, 0);
    ov74_02235DC4(*((u32*)(r5 + 4)), r4);
}




void ov74_022295C8(void) {
    // str r1, [r0, r2]
}




void ov74_022295D0(void) {
    // str r3, [r0, r1]
    ov74_02231008(*((u32*)(r0 + (0x16 << 4))), (0x16 << 4), (*((u32*)(r0 + (0x16 << 4))) - 1));
    // str r0, [r5]
    ov74_02230FD4(0);
    ov74_02231008();
    // str r0, [r5]
    // tst r0, r4
    ov74_02231008(*((u32*)(gSystem + 0x48)));
    // str r0, [r5]
}




void ov74_0222962C(void) {
    ov74_02230E7C(*((u32*)(r0 + ((0x57 << 2) - 4))));
    // sub r0, r1, r0
    sub_0203A930(3);
    ov74_02230D28();
    ov74_022310B8(1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02229666: ; jump table
    ov74_02228D20(r4);
    sub_02034D8C();
    // str r1, [r4, r0]
    // str r1, [r4, r5]
    sub_02034DB8((0x52 << 2), 1);
    // add r1, r4, r1
    ov74_02230A84(ov74_0223BD5C, (0x5b << 2));
    // str r1, [r4, r0]
    sub_0203A880((0x56 << 2), 1);
    // str r0, [r4, r5]
    ov74_02230D6C(2);
    ov74_022295C8(r4, (0x19 << 6));
    // add r0, #0x28
    WaitingIcon_New(r4, 0xa);
    // str r0, [r4, r1]
    // str r0, [r4, r5]
    ov74_02230E94(3, 0x000034D8);
    // str r1, [r4, r0]
    ov74_022295C8(r4, 0x00000708);
    // str r0, [r4, r5]
    // add r1, r4, r5
    ov74_022295D0(r4, 0, 2);
    ov74_02230DB8(*((u32*)(r4 + (0x59 << 2))));
    ov74_02230DF4(*((u32*)(r4 + (0x59 << 2))));
    // str r0, [r4, r5]
    // str r1, [r4, r0]
    // add r1, r4, r5
    ov74_022295D0(r4, 0x00000708, 0, 2);
    // add r1, r4, r5
    ov74_022295D0(r4, 0, 2);
    ov74_02230FD4();
    // str r0, [r4, r5]
    // str r0, [sp]
    // add r1, #0x48
    ov74_02235568(*((u32*)(r4 + 4)), r4, 2, 0x13);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00003170)), 0);
    sub_0200F450(*((u32*)(r4 + 0x000034D8)));
    // str r1, [r4, r0]
    PlaySE(SEQ_SE_DP_SELECT, 0);
    // str r1, [r4, r0]
    // str r0, [r4, r5]
    // tst r0, r1
    // str r0, [r4, r5]
    // add r1, r4, r5
    ov74_022295D0(r4, *((u32*)(gSystem + 0x48)), 1, 2);
    ov74_02230EB4();
    // str r0, [r4, r5]
    // str r1, [r4, r0]
    // add r1, r4, r5
    ov74_022295D0(r4, 0x00000708, 1, 2);
    ov74_02230F40();
    ov74_02230EE8();
    // str r0, [r4, r5]
    // str r1, [r4, r0]
    // str r0, [sp]
    // add r1, #0x48
    ov74_02235568(*((u32*)(r4 + 4)), r4, 2, 0x13);
    PlaySE(SEQ_SE_DP_SELECT);
    // str r1, [r4, r0]
    // add r1, r4, r5
    ov74_022295D0(r4, 0, 1, 2);
    ov74_02230F40();
    // str r0, [sp]
    // add r1, #0x48
    ov74_02235568(*((u32*)(r4 + 4)), r4, 2, 0x13);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00003170)), 1);
    ov74_02229084(r4);
    // str r0, [r4, r5]
    // add r1, r4, r5
    ov74_022295D0(r4, 1, 2);
    ov74_02230F14(ov74_0223C1F4, 0x2a, 1);
    // str r0, [r4, r5]
    // str r1, [r4, r0]
    ov74_02230F6C((0x16 << 4), (0x32 << 6));
    // str r0, [r4, r5]
    // str r1, [r4, r0]
    // str r0, [sp]
    // add r1, #0x48
    ov74_02235568(*((u32*)(r4 + 4)), r4, 2, 0x13);
    // add r1, r4, r5
    ov74_022295D0(r4, 1, 2);
    // str r1, [r4, r0]
    // str r0, [sp]
    // add r1, #0x48
    ov74_02235568(*((u32*)(r4 + 4)), r4, 2, 0x13);
    // add r0, #0x28
    WaitingIcon_New(r4, 0xa);
    // str r0, [r4, r1]
    ov74_0222947C(r4, 0x000034D8);
    ov74_022360A0(*((u32*)(r4 + 8)));
    // str r0, [r4, r5]
    ov74_022360B0(0xe);
    // str r0, [r4, r5]
    OS_GetTickLo(0xf);
    _s32_div_f(0x36);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r0, [r4, r5]
    ov74_02230F14(ov74_0223C1F4, 0x2a, 2);
    // str r0, [r4, r5]
    // str r1, [r4, r0]
    ov74_02230F98((0x16 << 4), (0x4b << 4));
    ov74_02236128();
    // str r0, [r4, r5]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov74_02231008(*((u32*)(r4 + (0x16 << 4))), (*((u32*)(r4 + (0x16 << 4))) - 1));
    // str r0, [r4, r5]
    // add r0, #0xe8
    // str r1, [r4, r0]
    ov74_02230FD4(0x78, 0x78);
    ov74_02231008();
    // str r0, [r4, r5]
    // add r0, #0xe8
    // str r1, [r4, r0]
    ov74_0223615C(0x78, 0x78);
    ov74_02231008();
    // str r0, [r4, r5]
    // add r0, #0xe8
    // str r1, [r4, r0]
    ov74_0223615C(0x78, 0x78);
    ov74_022360B0();
    ov74_02230F6C();
    ov74_02230FD4();
    // str r0, [r4, r5]
    // str r1, [r4, r0]
    ov74_02231008((0x16 << 4), 1);
    // str r1, [r4, r0]
    ov74_02231008(*((u32*)(r4 + (0x16 << 4))), (*((u32*)(r4 + (0x16 << 4))) - 1));
    // str r0, [r4, r5]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r0, [r4, r5]
    // str r0, [sp]
    // add r1, #0x48
    ov74_02235568(*((u32*)(r4 + 4)), r4, 2, 0x13);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00003170)), 0);
    sub_0200F450(*((u32*)(r4 + 0x000034D8)));
    PlaySE(SEQ_SE_DP_SELECT);
    // str r1, [r4, r0]
    ov74_02231048(0x000034D8, 0);
    sub_02034DE0(*((u32*)(r4 + (0x52 << 2))));
    sub_0203A914();
    // str r1, [r4, r0]
    // tst r0, r1
    // str r0, [r4, r5]
    // str r0, [r4, r5]
    // str r0, [sp]
    // add r1, #0x48
    ov74_02235568(*((u32*)(r4 + 4)), r4, 2, 0x13);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00003170)), 0);
    sub_0200F450(*((u32*)(r4 + 0x000034D8)));
    // str r1, [r4, r0]
    // str r0, [r4, r5]
    ov74_02231048(0x1c, 0);
    sub_02034DE0(*((u32*)(r4 + (0x52 << 2))));
    sub_0203A914();
    // str r1, [r4, r0]
    // tst r0, r1
    OS_ResetSystem(0, *((u32*)(gSystem + 0x48)));
    ov74_02231048();
    sub_02034DE0(*((u32*)(r4 + (0x52 << 2))));
    sub_0203A914();
    // str r1, [r4, r0]
    sub_0200F450(*((u32*)(r4 + 0x000034D8)), 0);
}




void ov74_02229B68(void) {
    ov74_02229E14(*((u32*)ov74_0223D0A4));
    Heap_Alloc(0xf, (0xf5 << 2));
    // str r0, [r1]
    MI_CpuFill8(0, (0xf5 << 2));
    *((u16*)(*((u32*)ov74_0223D0A4) + 0x24)) = 0x32;
    SysTask_CreateOnMainQueue(ov74_02229CB8, 0, 0xa);
    *((u32*)(*((u32*)ov74_0223D0A4) + 0x1c)) = r0;
    // str r4, [r0]
    sub_0203778C((*((u32*)ov74_0223D0A4) + 4), ov74_0223D0A4, *((u32*)ov74_0223D0A4));
}




void ov74_02229BC0(void) {
    *((u32*)(*((u32*)ov74_0223D0A4) + 0x20)) = r0;
    *((u16*)(*((u32*)ov74_0223D0A4) + 0x24)) = r1;
}




void ov74_02229BD0(void) {
    sub_0203769C();
    sub_020373B4();
    // add r2, r2, r4
    // strb r3, [r2, r0]
    sub_02034434(0x000003C1, ov74_0223D0A4, *((u32*)ov74_0223D0A4), 0);
    ov74_02229BC0(ov74_02229C0C, 0);
}




void ov74_02229C0C(void) {
    // add r0, r0, r5
    sub_020373B4(((0 << 0x10) >> 0x10));
    sub_02034818(r4);
    // add r1, r1, r5
    *((u32*)(*((u32*)r6) + 0x28)) = r0;
}




void ov74_02229C44(void) {
    sub_02034DB8();
    ov74_02229BC0(ov74_02229C5C, 0);
}




void ov74_02229C5C(void) {
    // bx lr
    // TODO: decompile
}




void ov74_02229C60(void) {
    // add r0, #0x27
    sub_02037E1C(*((u8*)*((u32*)ov74_0223D0A4)));
    ov74_02229BC0(ov74_02229C80, 0);
}




void ov74_02229C80(void) {
    sub_02037EC8();
    // strb r2, [r1, r0]
    sub_02034434((0xf << 6), *((u32*)ov74_0223D0A4), 0);
    sub_02037AC0(0xab);
    ov74_02229BC0(ov74_02229CB4, 0);
}




void ov74_02229CB4(void) {
    // bx lr
    // TODO: decompile
}




void ov74_02229CB8(void) {
    SysTask_Destroy(ov74_0223D0A4, *((u32*)ov74_0223D0A4));
    // add r2, #0x26
    // blx r1
}




void ov74_02229CE0(void) {
    sub_02037474();
    sub_02038114(r4, r6);
    ov74_02229B68(r5);
    ov74_02229BC0(ov74_02229BD0, 0);
}




void ov74_02229D0C(void) {
    // add r3, r0, #0
    // add r2, r1, #0
    // add r1, r3, #0
    // ldr r3, _02229D18 ; =sub_02037088
    // mov r0, #0x16
    // bx r3
    // _02229D18: .word sub_02037088
    // TODO: decompile
}




void ov74_02229D1C(void) {
    sub_02037474();
    ov74_0222CD7C();
    OverlayManager_GetArgs();
    sub_02038148(*((u32*)(r0 + 8)), r4);
    ov74_02229B68(r5);
    ov74_02229BC0(ov74_02229C44, 0);
}




void ov74_02229D50(void) {
    // add r1, #0x27
    // strb r0, [r1]
}




void ov74_02229D6C(void) {
    // add r0, #0x4c
    // add r5, #0x8c
    // mvn r0, r0
}




void ov74_02229DA0(void) {
    // add r1, #0x27
    // strb r1, [r2, r0]
}




void ov74_02229DBC(void) {
    // ldr r0, _02229DC8 ; =ov74_0223D0A4
    // ldr r1, [r0]
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldrb r0, [r1, r0]
    // bx lr
    // _02229DC8: .word ov74_0223D0A4
    // TODO: decompile
}




void ov74_02229DCC(void) {
}




void ov74_02229DD4(void) {
    // add r0, #0x68
}




void ov74_02229DE0(void) {
    // add r1, r1, r0
    // strb r2, [r1, r0]
}




void ov74_02229DF8(void) {
    Heap_FreeExplicit(0xf, *((u32*)ov74_0223D0A4));
    // str r1, [r0]
    sub_02037E9C(ov74_0223D0A4, 0);
}




void ov74_02229E14(void) {
    // ldr r3, _02229E20 ; =sub_0203410C
    // add r2, r0, #0
    // ldr r0, _02229E24 ; =_0223B368
    // mov r1, #2
    // bx r3
    // nop
    // _02229E20: .word sub_0203410C
    // _02229E24: .word _0223B368
    // TODO: decompile
}




void ov74_02229E28(void) {
    // add r0, #0x18
    WaitingIcon_New(r0, 1);
    // str r0, [r4, r1]
    sub_0200F478(*((u32*)(r4 + r0)), 0x000029F0);
    // str r1, [r4, r0]
}




void ov74_02229E60(void) {
}




void ov74_02229E68(void) {
    // add r0, #0x18
    // add r0, #0x18
    // add r0, #0x58
    // add r0, #0x58
    // add r0, #0x58
    // add r5, #0x28
    // add r4, #0x10
    // add r5, #0x10
}




void ov74_02229F04(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov74_02229F28(void) {
    // mvn r0, r0
    // str r1, [sp]
    ov74_02235930(0, *((u32*)(r0 + 0x000005C4)), 0x80, 0x64);
    // str r0, [r4, r1]
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x000005C4)), 0);
}




void ov74_02229F60(void) {
}




void ov74_02229F78(void) {
}




void ov74_02229F90(void) {
    OverlayManager_GetData();
    // add r1, #0x18
    ov74_0222AA18(r5, r0, 3);
    // add r0, #0x48
    ov74_02229F60(r4, 0);
    ov74_02229D1C(r4, 0xf);
    // str r1, [r4, r0]
    sub_0203A880(0x00000434, 0x00001C20);
    ov74_02229E28(r4, 1);
    // add r4, #0x84
    // str r0, [r4]
}




void ov74_02229FF4(void) {
    OverlayManager_GetData();
    // add r0, #0x80
    ov74_02229D50(*((u32*)(r0 + 0x00000438)), *((u32*)r0));
    // add r1, #0x18
    ov74_0222AA18(r5, r4, 6);
    // add r0, #0x48
    ov74_02229F60(r4, 0);
    ov74_02229F28(r4, 0);
    ov74_02229E28(r4, 1);
    sub_02037AC0(0xab);
}




void ov74_0222A078(void) {
    OverlayManager_GetData();
    // add r5, #0xdc
    // add r6, #0x8c
    ov74_02229DD4(0, 0, 0);
    memcpy(r5, r0, (0xd6 << 2));
    // add r4, #0xdc
    // add r0, #0x8c
    ov74_02235F58(r4, r4, 0x54);
    // add r1, r4, r7
    // add r1, #0x50
    memcpy(r5, (0xd6 << 2));
    // add r1, r4, r7
    memcpy(r6, 0x50);
}




void ov74_0222A0E4(void) {
    // add r0, #8
}




void ov74_0222A130(void) {
    // str r1, [r4, r0]
    ov74_022360B0((0x000029EC - 4), 0);
    // add r0, #0xdc
    ov74_0222A0E4(r4);
    PlaySE(SEQ_SE_DP_SAVE);
    // str r1, [r4, r0]
}




void ov74_0222A174(void) {
    OverlayManager_GetData();
    // str r0, [sp, #4]
    // add r4, #0x8c
    // add r5, #0xdc
    OverlayManager_GetArgs(r6);
    // str r0, [sp]
    // add r0, #0x4e
    // strb r0, [r5, r1]
    // add r2, #0x4e
    // sub r1, #8
    // strb r0, [r5, r1]
    // add r0, sp, #8
    GF_RTC_CopyDate(0, (0x35 << 4), ((*((u8*)r4) << 0x1b) >> 0x1f));
    // add r0, sp, #8
    RTC_ConvertDateToDay();
    // str r0, [r5, r1]
    // ldr r0, [sp]
    Save_MysteryGift_Get((0xd5 << 2));
    // add r1, #0x4c
    SaveMysteryGift_ReceivedFlagSet(*((u16*)r4));
    // add r4, #0x4e
    SaveMysteryGift_TrySetSpecialCard(r7, r5);
    SaveMysteryGift_TryInsertGift(r7, r5, 3);
    SaveMysteryGift_TryInsertCard(r7, r5);
    // ldr r0, [sp]
    ov74_022360A0();
    // ldr r0, [sp, #4]
    // str r2, [r0, r1]
    // str r2, [r0, r1]
}




void ov74_0222A240(void) {
    OverlayManager_GetData();
    // mvn r5, r5
    // add r4, #0x48
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    AddWindowParameterized(*((u32*)r0), r0, 0, 0x17);
    DrawFrameAndWindow1(r4, 1, 0x1f, 3);
    // str r5, [sp]
    ov74_0222A89C(r6, ov74_0223C260, 2, r4);
}




void ov74_0222A2A4(void) {
    OverlayManager_GetData();
    // add r0, #0x48
    ov74_02229F60(0);
    // add r0, #0x58
    ov74_02229F60(r4, 0);
    ov74_02229E28(r4, 0);
    sub_0203A914();
    ov74_0222A5CC(r5);
}




void ov74_0222A2E0(void) {
    OverlayManager_GetData();
    ov74_02235230();
    // str r1, [r5, r0]
    // add r0, #0x38
    ov74_02229F60(r5, 0);
    // add r4, #0x48
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r5), r5, 0, 0x17);
    DrawFrameAndWindow1(r4, 1, 0x1f, 3);
    // str r2, [sp]
    ov74_0222A89C(r6, ov74_0223C250, 2, r4);
}




void ov74_0222A35C(void) {
    OverlayManager_GetData();
    // str r1, [r4, r0]
    // add r0, #0x38
    ov74_02229F60(r0, 0);
    // add r5, #0x48
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r4), r4, 0, 0x17);
    DrawFrameAndWindow1(r5, 1, 0x1f, 3);
    // str r0, [sp]
    ov74_0222A89C(r6, ov74_0223C220, 2, r5);
}




void ov74_0222A3CC(void) {
    OverlayManager_GetData();
    // str r1, [r4, r0]
    // add r0, #0x38
    ov74_02229F60(r0, 0);
    // add r5, #0x48
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r4), r4, 0, 0x17);
    DrawFrameAndWindow1(r5, 1, 0x1f, 3);
    // str r0, [sp]
    ov74_0222A89C(r6, ov74_0223C230, 2, r5);
}




void ov74_0222A43C(void) {
    OverlayManager_GetData();
    // add r4, #0x48
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    AddWindowParameterized(*((u32*)r0), r0, 0, 0x17);
    DrawFrameAndWindow1(r4, 1, 0x1f, 3);
    // str r0, [sp]
    ov74_0222A89C(r5, ov74_0223C240, 2, r4);
}




void ov74_0222A494(void) {
    OverlayManager_GetData();
    // add r0, #0x48
    ov74_02229F60(0);
    // add r0, #0x58
    ov74_02229F60(r4, 0);
    sub_0203A914();
    ov74_02229DF8(*((u32*)(r4 + 0x000015D4)));
    ov74_0222A5CC(r5);
}




void ov74_0222A4CC(void) {
    OverlayManager_GetData();
    // add r1, #0x18
    ov74_0222AA18(r5, r0, 3);
    // add r0, #0x48
    ov74_02229F60(r4, 0);
    ov74_02229E28(r4, 1);
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x25;
}




void ov74_0222A504(void) {
    // add r0, #0x80
    // add r0, #0x48
    // add r4, #0x18
}




void ov74_0222A538(void) {
    ov74_022365FC(*((u32*)(ov74_0223D0A8 + 0x10)));
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x2b;
}




void ov74_0222A560(void) {
    OverlayManager_GetData();
    // add r1, #0x18
    ov74_0222AA18(r5, r0, 3);
    ov74_02229E28(r4, 1);
    // add r0, #0x48
    ov74_02229F60(r4, 0);
    ov74_02229E28(r4, 1);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}




u32 ov74_0222A5AC(void) {
}




void ov74_0222A5CC(void) {
    OverlayManager_GetData();
    Save_MysteryGift_Get(*((u32*)(r0 + 4)));
    // str r1, [r5, r0]
    ov74_0222CE10(r5, 1);
    // add r0, #0x28
    ov74_02229F60(r5, 0);
    // add r4, #0x38
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)r5), r5, 0, 0xf);
    DrawFrameAndWindow1(r4, 1, 0x1f, 3);
    // str r0, [sp]
    ov74_0222A89C(r6, ov74_0223C2B0, 4, r4);
}




void ov74_0222A650(void) {
    OverlayManager_GetData();
    // str r2, [r4, r1]
    ov74_0222CE10((0x000005C8 + 4), 1);
    ov74_0223539C(0, 0x36, *((u32*)(r4 + 0x000015D8)), 2);
    // mvn r0, r0
}




void ov74_0222A688(void) {
    OverlayManager_GetData();
    // str r2, [r4, r1]
    ov74_0222CE10((0x000005C8 + 4), 1);
    ov74_0223539C(0, 0x37, *((u32*)(r4 + 0x000015D8)), 2);
    // mvn r0, r0
}




void ov74_0222A6C0(void) {
    OverlayManager_GetData();
    // str r1, [r4, r0]
    ov74_02235390(1, 1);
    ov74_0223539C(0, 0x35, *((u32*)(r4 + 0x000015D8)), 2);
    // mvn r0, r0
}




void ov74_0222A6F8(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, sp, #0
    *((u8*)(*((u32*)_0223B3A0) + 0x12)) = (r2 >> 0xb);
    *((u8*)(*((u32*)_0223B3A0) + 0x13)) = (r3 >> 0xe);
    // mov r2, ip
    InitBgFromTemplate(r0, ((r1 << 0x18) >> 0x18), 0);
    BgClearTilemapBufferAndCommit(r7, ((r4 << 0x18) >> 0x18));
}




void ov74_0222A744(void) {
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    ov74_0222A6F8(r4, 0, (0xf << 0xc), 0);
    ov74_0222A6F8(r4, 1, (0x3e << 0xa), (1 << 0xf));
    ov74_0222A6F8(r4, 4, (0xe << 0xa), 0);
    ov74_0222A6F8(r4, 5, (0x1e << 0xa), (1 << 0xe));
}




void ov74_0222A7A0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xfc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov74_0222A81C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0x8f
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov74_0222A89C(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    OverlayManager_GetData();
    ListMenuItems_Delete(*((u32*)(r0 + 0x7c)));
    ListMenuItems_New(r7, 0x54);
    *((u32*)(r4 + 0x7c)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0xf7, 0x54);
    *((u32*)(r4 + 0x10)) = r0;
    ListMenuItems_AppendFromMsgData(*((u32*)(r4 + 0x7c)), *((u32*)(r4 + 0x10)), *((u32*)r5), *((u32*)(r5 + 4)));
    // add r5, #8
    DestroyMsgData(*((u32*)(r4 + 0x10)));
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [sp, #8]
    // add r0, sp, #8
    *((u16*)(*((u32*)(r4 + 0x7c)) + 0x12)) = r7;
    *((u16*)(*((u32*)(r4 + 0x7c)) + 0x10)) = *((u16*)(*((u32*)(r4 + 0x7c)) + 0x12));
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    DestroyListMenu(*((u32*)(r4 + 0x78)), 0, 0, ov74_0223C270);
    // add r0, sp, #8
    ListMenuInit(0, 0, 0x54);
    *((u32*)(r4 + 0x78)) = r0;
    // ldr r2, [sp, #0x40]
    // mvn r0, r0
    // add r4, #0x18
    // ldr r0, [sp]
    ov74_0222AA18(0, r4);
}




void ov74_0222A94C(void) {
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x20]
    OverlayManager_GetData();
    // str r0, [sp, #0x1c]
    Save_MysteryGift_Get(*((u32*)(r0 + 4)));
    // ldr r4, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // add r4, #0x28
    // str r2, [sp, #0x24]
    // str r1, [sp, #0x28]
    SaveMysteryGift_HasAnyCard(*((u32*)(ov74_0223C220 + 0x74)), *((u32*)(ov74_0223C220 + 0x70)));
    // add r0, sp, #0x24
    // add r1, r0, r6
    // add r0, sp, #0x24
    // str r3, [r0, r6]
    *((u32*)(r1 + 4)) = *((u32*)(ov74_0223C220 + 0x7c));
    // ldr r0, [sp, #0x18]
    SaveMysteryGift_SpecialCardTagIsValid(ov74_0223C220, *((u32*)(ov74_0223C220 + 0x7c)), *((u32*)(ov74_0223C220 + 0x78)));
    // add r0, sp, #0x24
    // add r1, r0, r6
    // add r0, sp, #0x24
    // str r3, [r0, r6]
    *((u32*)(r1 + 4)) = *((u32*)(ov74_0223C2A0 + 4));
    // add r0, sp, #0x24
    // add r1, r0, r6
    // add r0, sp, #0x24
    // str r3, [r0, r6]
    *((u32*)(r1 + 4)) = *((u32*)(ov74_0223C2A0 + 0xc));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    AddWindowParameterized(*((u32*)((r7 << 0x10) >> 0x10)), r4, 0, 6);
    DrawFrameAndWindow1(r4, 1, 0x1f, 3);
    // ldr r0, [sp, #0x20]
    // add r1, sp, #0x24
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    ov74_0222A89C((r5 + 1), r4);
}




void ov74_0222AA18(void) {
    OverlayManager_GetData();
    NewMsgDataFromNarc(1, 0x1b, 0xf7, 0x54);
    *((u32*)(r4 + 0x10)) = r0;
    MessageFormat_New(0x54);
    *((u32*)(r4 + 0xc)) = r0;
    GetFontAttribute(1, 6);
    FillWindowPixelBuffer(r5, r0);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)), r7, 0x54);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 1, r0, 0);
    *((u32*)(r4 + 0x6c)) = r0;
    String_Delete(r6);
    DrawFrameAndWindow2(r5, 0, 1, 2);
    DestroyMsgData(*((u32*)(r4 + 0x10)));
    MessageFormat_Delete(*((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x68)) = 0xff;
}




void ov74_0222AAAC(void) {
    OverlayManager_GetData();
    String_New(0x25, 0x54);
    CopyU16ArrayToStringN(r6, 0x24);
    GetFontAttribute(0, 6);
    FillWindowPixelBuffer(r5, r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r4, 0);
    DrawFrameAndWindow1(r5, 0, 0x1f, 3);
    String_Delete(r4);
}




void ov74_0222AB0C(void) {
    OverlayManager_GetData();
    ListMenu_ProcessInput(*((u32*)(r0 + 0x78)));
    // mvn r0, r0
    PlaySE(SEQ_SE_DP_SELECT);
    // blx r6
    // mvn r1, r1
    // str r0, [r5]
    PlaySE(SEQ_SE_DP_SELECT, 0);
    *((u32*)(ov74_0223D0A8 + 8)) = r4;
    // blx r4
    // mvn r1, r1
    // str r0, [r5]
}




void ov74_0222AB70(void) {
    ResetAllTextPrinters();
    LoadFontPal0(0, 0, 0x54);
    LoadFontPal0(0, 0x20, 0x54);
    Options_GetFrame(*((u32*)(r4 + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r4), 0, 1, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)r4), 0, 0x1f, 3);
    // strh r1, [r0]
    // add r0, #0x18
    WindowIsInUse(r4, 0x00007D8C);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x18
    AddWindowParameterized(*((u32*)r4), r4, 0, 2);
    // add r1, #0x18
    ov74_0222AA18(r5, r4, 0);
    ov74_0222A94C(r5, 0xc4, 0);
    ov74_0222A81C(*((u32*)r4));
}




void ov74_0222AC1C(void) {
    OverlayManager_GetData();
    // add r1, r4, r1
    ov74_02236AE0(r6, 0x000015E0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222AC42: ; jump table
    // add r0, #0x8c
    // add r1, r4, r1
    memcpy(r4, 0x00001658, (0xea << 2));
    ov74_02229E28(r4, 0);
    // add r0, #0x84
    // str r1, [r0]
    // str r0, [r5]
    // str r1, [r4, r0]
    ov74_02229E28(r4, 0);
    // str r1, [r4, r0]
    // str r0, [r5]
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram((0x9a << 6), 0);
    // add r0, r4, r0
    RemoveWindow((0x9a << 6));
    BgClearTilemapBufferAndCommit(*((u32*)r4), 0);
    PlaySE(SEQ_SE_DP_SELECT);
    ov74_0222A94C(r6, 0xc4, 0);
    GfGfx_EngineATogglePlanes(0x10, 1);
    // str r0, [r5]
}




void ov74_0222ACD8(void) {
    // mvn r0, r0
    GfGfx_EngineATogglePlanes(0x10, 0);
    BgClearTilemapBufferAndCommit(*((u32*)r5), 0);
    MessageFormat_New(0x54);
    // str r1, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(0, *((u32*)(r5 + 0x00002670)), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #8
    // add r1, r5, r1
    ov74_02235414(3, (0x9a << 6), 1, (0x32 << 4));
    // add r0, sp, #8
    ov74_02235464(0x18, 0x10, 0x64);
    // add r0, sp, #8
    ov74_0223546C(0, 1);
    // str r6, [sp, #0x1c]
    // str r4, [sp]
    // add r1, sp, #8
    ov74_02235568(*((u32*)r5), 4, 4);
    MessageFormat_Delete(r6);
}




void ov74_0222AD6C(void) {
    // add r0, #0x80
    // add r1, #0x18
    // add r1, #0x18
}




void ov74_0222ADBC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
}




void ov74_0222AE3C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222AE52: ; jump table
    ov74_02229DF8((*((u16*)(*((u32*)(r0 + 0x000015D4)) + 6)) << 0x10), 0x000015D4);
    sub_0203A914();
}




void ov74_0222AE6C(void) {
    ov74_0222CD88();
    Heap_Create(3, 0x54, (3 << 0x10));
    OverlayManager_CreateAndGetData(r5, 0x000029F8, 0x54);
    memset(0, 0x000029F8);
    BgConfig_Alloc(0x54);
    // str r0, [r4]
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    ov74_0222FCA4();
    ov74_0222A744(*((u32*)r4));
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
    Sound_SetSceneAndPlayBGM(0xa, 0x0000047E, 1);
    ov74_0223512C(0x54);
    ov74_02235230();
    // str r1, [r4, r0]
    sub_0201A4B0(*((u8*)gGameVersion), 2);
    ov74_02236034(1);
    // str r1, [r4, r0]
    OverlayManager_GetArgs(r5, 0x1d);
    *((u32*)(r4 + 4)) = *((u32*)(r0 + 8));
    Save_PlayerData_GetOptionsAddr(*((u32*)(r0 + 8)));
    *((u32*)(r4 + 8)) = r0;
    *((u32*)(r4 + 0x68)) = 0xff;
    Heap_Create(0, 0x59, (0x57 << 4));
}




void ov74_0222AF28(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r1, [sp, #8]
    // add r1, #0xd8
    AddCharResObjFromNarc(*((u32*)(*((u32*)(r0 + 0xc)) + 0x54)), 0x71, 0x2b, 1);
    *((u32*)(r4 + 0x58)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r1, #0xdc
    AddPlttResObjFromNarc(*((u32*)(*((u32*)(r4 + 0xc)) + 0x54)), 0x71, 0x28, 0);
    *((u32*)(r4 + 0x5c)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r1, #0xe0
    AddCellOrAnimResObjFromNarc(*((u32*)(*((u32*)(r4 + 0xc)) + 0x54)), 0x71, 0x2a, 1);
    *((u32*)(r4 + 0x60)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r1, #0xe4
    AddCellOrAnimResObjFromNarc(*((u32*)(*((u32*)(r4 + 0xc)) + 0x54)), 0x71, 0x29, 1);
    *((u32*)(r4 + 0x64)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r1, #0xd8
    AddCharResObjFromNarc(*((u32*)(*((u32*)(r4 + 0xc)) + 0x54)), 0x71, 0x2b, 1);
    *((u32*)(r4 + 0x70)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r1, #0xdc
    AddPlttResObjFromNarc(*((u32*)(*((u32*)(r4 + 0xc)) + 0x54)), 0x71, 0x28, 0);
    *((u32*)(r4 + 0x74)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r1, #0xe0
    AddCellOrAnimResObjFromNarc(*((u32*)(*((u32*)(r4 + 0xc)) + 0x54)), 0x71, 0x2a, 1);
    *((u32*)(r4 + 0x78)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r1, #0xe4
    AddCellOrAnimResObjFromNarc(*((u32*)(*((u32*)(r4 + 0xc)) + 0x54)), 0x71, 0x29, 1);
    *((u32*)(r4 + 0x7c)) = r0;
    sub_0200ACF0(*((u32*)(r4 + 0x58)));
    sub_0200ACF0(*((u32*)(r4 + 0x70)));
    sub_0200B00C(*((u32*)(r4 + 0x5c)));
    sub_0200B00C(*((u32*)(r4 + 0x74)));
    // mvn r0, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // add r3, #8
    // add r5, #0xc
    // str r3, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #0x10
    CreateSpriteResourcesHeader(r4, 0x00004E21, 0x00004E21, 0x00004E21);
    // add r4, #0x10
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r4, #0x24
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // add r3, #8
    // add r5, #0xc
    // str r3, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    CreateSpriteResourcesHeader(r4, 0x00004E22, 0x00004E22, 0x00004E22);
}




void ov74_0222B0C8(void) {
    // add r0, #0x10
    // str r2, [sp]
    // add r0, r0, r2
    // str r0, [sp, #4]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // add r0, sp, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0x24]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // add r0, r2, r0
    // str r0, [sp, #0xc]
    // add r0, sp, #0
}




void ov74_0222B144(void) {
    ov74_0222B0C8(1);
    // str r0, [r4, r1]
    Sprite_TryChangeAnimSeq(*((u32*)(r4 + 0x00003014)), 2);
    Sprite_SetAnimationFrame(*((u32*)(r4 + 0x00003014)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00003014)), 0);
    Sprite_SetDrawPriority(*((u32*)(r4 + 0x00003014)), 0);
    Sprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x00003014)), 2);
    Sprite_GetMatrixPtr(*((u32*)(r4 + 0x00003014)));
    // str r1, [r0]
    *((u32*)(r0 + 4)) = (6 << 0x10);
}




void ov74_0222B19C(void) {
    ov74_0222B0C8(2);
    // str r0, [r4, r1]
    Sprite_TryChangeAnimSeq(*((u32*)(r4 + 0x00003060)), 4);
    Sprite_SetAnimationFrame(*((u32*)(r4 + 0x00003060)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00003060)), 0);
    Sprite_SetDrawPriority(*((u32*)(r4 + 0x00003060)), 0);
    Sprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x00003060)), 2);
    Sprite_GetMatrixPtr(*((u32*)(r4 + 0x00003060)));
    // str r1, [r0]
    *((u32*)(r0 + 4)) = ((2 << 0x12) << 1);
}




void ov74_0222B1F4(void) {
}




void ov74_0222B20C(void) {
}




void ov74_0222B224(void) {
    // str r0, [sp]
    // add r0, #0x94
    Sprite_UpdateAnim(*((u32*)r0), (2 << 0xc));
    Sprite_UpdateAnim(*((u32*)(r5 + r7)), r6);
    // add r5, #0x4c
    // ldr r0, [sp]
    Sprite_UpdateAnim(*((u32*)(r0 + 0x00003014)), (2 << 0xc));
    // ldr r0, [sp]
    Sprite_UpdateAnim(*((u32*)(r0 + 0x00003060)), (2 << 0xc));
}




void ov74_0222B288(void) {
    // add r1, #0x94
    // str r0, [r1]
    // add r0, #0x94
    // add r0, #0x94
    // add r5, #0x4c
}




void ov74_0222B2C4(void) {
    // add r1, #0x94
    // str r0, [r1]
    // add r0, #0x94
    // add r0, #0x94
    // add r0, #0x94
    // str r7, [r0]
    // add r5, #0x4c
}




void ov74_0222B30C(void) {
    ov74_0222B0C8(r0, 2);
    // str r0, [r5, r1]
    Sprite_TryChangeAnimSeq(*((u32*)(r5 + 0x00001854)), 5);
    Sprite_SetAnimationFrame(*((u32*)(r5 + r7)), 0);
    // add r5, #0x4c
}




void ov74_0222B344(void) {
    // add r0, #0x94
    // add r0, #0x94
    // str r6, [r0]
    // add r0, #0xd0
    // add r5, #0x4c
}




void ov74_0222B374(void) {
    Sprite_Delete(*((u32*)(r0 + 0x00001854)));
    // str r6, [r5, r0]
    SysTask_Destroy(*((u32*)(r5 + r7)));
    // add r5, #0x4c
}




void ov74_0222B3A4(void) {
    // str r0, [sp]
    // add r0, #0x88
    // add r7, sp, #0x64
    // str r0, [sp]
    // add r2, sp, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0x98
    // str r2, [r0]
    // add r0, #0x9c
    // str r1, [r0]
    // add r0, #0xa4
    // str r1, [r0]
    // add r0, #0xa8
    // str r1, [r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // add r0, #0xb4
    // str r1, [r0]
    // add r0, #0xbc
    // str r1, [r0]
    // add r0, #0x8c
    // str r1, [r0]
    _s32_div_f(0, 0xa, (0 >> 0x1f), _0223B3BC);
    _fflt(((r0 + 4) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r1, #0xa4
    // str r0, [r1]
    LCRandom(r5);
    _s32_div_f(5);
    // add r0, r4, r0
    // add r1, r0, r1
    // add r0, #0xb8
    // str r1, [r0]
    LCRandom(r5);
    _s32_div_f(5);
    // add r0, #0xfa
    // add r1, r0, r1
    // add r0, #0xb8
    // str r1, [r0]
    LCRandom(r5);
    _s32_div_f(5);
    // add r0, #0xf0
    // add r1, r0, r1
    // add r0, #0xb8
    // str r1, [r0]
    LCRandom(r5);
    _s32_div_f(5);
    // add r0, #0xe6
    // add r1, r0, r1
    // add r0, #0xb8
    // str r1, [r0]
    LCRandom(r5);
    _s32_div_f(5);
    // add r0, #0xdc
    // add r1, r0, r1
    // add r0, #0xb8
    // str r1, [r0]
    // add r6, sp, #0x10
    // add r3, sp, #0x64
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, #0xb8
    // str r1, [r0]
    // add r0, #0xb8
    // add r0, r1, r0
    // asr r0, r0, #1
    _dflt(((*((u32*)r5) + 1) >> 0x1f), (*((u32*)r5) + 1), (0xa - 1));
    _dmul(0x66666666, 0x3FE66666, r0, r1);
    _dfix();
    // add r1, #0xb8
    // str r0, [r1]
    // add r0, #0xb8
    // add r0, #0xb8
    // str r1, [r0]
    // add r0, #0xc0
    // str r1, [r0]
    // add r0, #0xc0
    // add r0, #0xc8
    // str r1, [r0]
    // add r0, #0xc0
    // add r0, #0xcc
    // str r1, [r0]
    // add r0, #0x94
    Sprite_GetMatrixPtr(*((u32*)r5), *((u32*)r5));
    // ldmia r3!, {r0, r1}
    // add r2, sp, #4
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    LCRandom(*((u32*)r0), r0);
    _s32_div_f(0xe0);
    // add r1, #0x10
    LCRandom();
    _s32_div_f(0xe0);
    // add r1, #0x10
    _fflt((r1 << 0xc));
    _fadd((0x3f << 0x18), r0);
    LCRandom();
    _s32_div_f(0xe0);
    // add r1, #0x10
    _fflt((r1 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x94
    // add r1, sp, #4
    Sprite_SetMatrix(*((u32*)r5));
    // add r0, #0x94
    Sprite_SetDrawFlag(*((u32*)r5), 0);
    // ldr r1, [sp]
    SysTask_CreateOnMainQueue(ov74_0222BA48, 6);
    // add r1, #0xd0
    // str r0, [r1]
    // ldr r0, [sp]
    // add r0, #0x4c
    // add r5, #0x4c
    // str r0, [sp]
}




void ov74_0222B5F8(void) {
    // add r7, #0x88
    // add r0, #0x94
    // add r1, #0x98
    // str r0, [r1]
    // add r1, #0x9c
    // str r0, [r1]
    // add r1, #0xa4
    // str r0, [r1]
    // add r1, #0xa8
    // str r0, [r1]
    // add r1, #0xb4
    // str r0, [r1]
    // add r1, #0xbc
    // str r0, [r1]
    // add r1, #0x8c
    // str r0, [r1]
    // add r1, #0x90
    // str r0, [r1]
    LCRandom(0, r0);
    _s32_div_f(0xa);
    // add r1, #0xf
    // add r0, #0xb8
    // str r1, [r0]
    LCRandom(r5);
    _s32_div_f(0xa);
    // add r1, #0xa
    // add r0, #0xb8
    // str r1, [r0]
    LCRandom(r5);
    _s32_div_f(5);
    // add r1, #0xa
    // add r0, #0xb8
    // str r1, [r0]
    LCRandom(r5);
    _s32_div_f(5);
    // add r0, #0xb8
    // str r1, [r0]
    // add r1, #0xb8
    // str r0, [r1]
    // add r0, #0xc0
    // add r0, #0xc8
    // str r1, [r0]
    // add r0, #0xc0
    // add r0, #0xcc
    // str r1, [r0]
    LCRandom(r5, *((u32*)r5));
    _s32_div_f((0x5a << 2));
    // str r1, [sp]
    LCRandom();
    // sub r1, r1, r2
    // ror r1, r0
    // ldr r0, [sp]
    // add r6, r2, r1
    // add r6, #0x40
    GF_SinDeg(((0x1b << 0x10) >> 0x10), (r0 << 0x1b), (r0 >> 0x1f));
    // add r1, #0x98
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    GF_CosDeg((((r0 * r6) << 0x10) >> 0x10), *((u32*)r5));
    // add r1, #0x9c
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x94
    // add r1, sp, #4
    Sprite_SetMatrix(*((u32*)r5), *((u32*)r5));
    // add r0, #0x94
    Sprite_TryChangeAnimSeq(*((u32*)r5), 1);
    // add r0, #0x94
    Sprite_SetDrawFlag(*((u32*)r5), 0);
    SysTask_CreateOnMainQueue(ov74_0222BA48, r7, 6);
    // add r1, #0xd0
    // str r0, [r1]
    // add r5, #0x4c
    // add r7, #0x4c
}




void ov74_0222B760(void) {
    // add r6, r5, r0
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r1, [r5, r0]
    // add r0, #8
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom(0x0000184C, 0, (0 >> 0x1f));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r1, [r5, r0]
    _s32_div_f(r4, 0x1e, (r0 >> 0x1f));
    _fflt(((r0 + 4) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [r5, r1]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(0xa);
    // add r1, #0x46
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(0xa);
    // add r1, #0x3c
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(5);
    // add r1, #0x32
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(0xa);
    // add r1, #0x28
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(0xa);
    // add r1, #0x1e
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(5);
    // add r1, #0x14
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    LCRandom((0x62 << 6), 5);
    _s32_div_f(5);
    // add r1, #0xa
    // str r1, [r5, r0]
    // add r0, #8
    // str r1, [r5, r0]
    // add r0, #0xc
    // str r1, [r5, r0]
    Sprite_GetMatrixPtr(*((u32*)(r5 + 0x00001854)), *((u32*)(r5 + (0x62 << 6))));
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)(r5 + 0x00001854)), r2, r0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00001854)), 1);
    SysTask_CreateOnMainQueue(ov74_0222BA48, r6, 6);
    // str r0, [r5, r1]
    // add r5, #0x4c
    // add r6, #0x4c
}




void ov74_0222B950(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    _fflt(0);
    _fsub(r4);
    // str r0, [sp, #8]
    _fflt(r5);
    _fsub(r6);
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    _fmul(0, 0);
    // ldr r0, [sp, #0xc]
    _fmul(r0);
    _fadd(r4, r0);
    _fgr(0);
    _fmul(0x45800000, r4);
    _fadd((0x3f << 0x18), r0);
    _fmul(r4);
    _fsub((0x3f << 0x18));
    _ffix();
    FX_Sqrt();
    _fflt();
    _fdiv(0x45800000);
    // ldr r1, [sp, #0x30]
    _fls();
    // add r1, sp, #0x18
    // ldrsh r0, [r1, r0]
    _fflt(0x1c);
    _fgr(r4);
    _feq(0, r4);
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x30]
    _fmul(0);
    _fdiv(r4);
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x30]
    _fmul();
    _fdiv(r4);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp]
    _fadd();
    // ldr r1, [sp, #0x28]
    // str r0, [r1]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #4]
    _fadd();
    // ldr r1, [sp, #0x2c]
    // str r0, [r1]
}




void ov74_0222BA48(void) {
    Sprite_SetAnimationFrame(*((u32*)(r1 + 0xc)), 0);
    *((u32*)(r5 + 0x30)) = (*((u32*)(r5 + 0x30)) - 1);
    Sprite_SetDrawFlag((*((u32*)(r5 + 0x30)) - 1), 1);
    Sprite_GetMatrixPtr(*((u32*)(r5 + 0xc)));
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x18
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x18]
    _fflt(*((u32*)r0), r0);
    _fdiv(0x45800000);
    // ldr r0, [sp, #0x1c]
    _fflt();
    _fdiv(0x45800000);
    _fflt(*((u32*)(r5 + 0x1c)));
    _fdiv(0x45800000);
    _fflt(*((u32*)(r5 + 0x20)));
    _fdiv(0x45800000);
    _ffix();
    // add r1, sp, #0x14
    // str r1, [sp]
    // add r1, sp, #0x10
    // str r1, [sp, #4]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov74_0222B950((*((u32*)(r5 + 0x10)) << 4), (*((u32*)(r5 + 0x14)) << 4), r6, r7);
    // ldr r0, [sp, #0x14]
    _fgr(*((u32*)(r5 + 0x24)), 0);
    // ldr r1, [sp, #0x14]
    _fmul(0x45800000);
    _fadd((0x3f << 0x18), r0);
    // ldr r1, [sp, #0x14]
    _fmul();
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    _fgr(0);
    // ldr r1, [sp, #0x10]
    _fmul(0x45800000);
    _fadd((0x3f << 0x18), r0);
    // ldr r1, [sp, #0x10]
    _fmul();
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x18
    Sprite_SetMatrix(*((u32*)(r5 + 0xc)));
    // ldr r0, [sp, #0x18]
    // sub r0, r1, r0
    _fflt((*((u32*)(r5 + 0x24)) << 0xc), *((u32*)(r5 + 0x10)));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    // ldr r0, [sp, #0x1c]
    // sub r0, r1, r0
    _fflt((r0 << 0xc), *((u32*)(r5 + 0x14)));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    _ffix(r4);
    FX_Atan2Idx(r6, r0);
    *((u32*)(r5 + 0x28)) = r0;
    *((u32*)(r5 + 0x24)) = (*((u32*)(r5 + 0x24)) + 1);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
    *((u32*)(r5 + 8)) = 1;
    // add r0, #8
    *((u32*)(r5 + 0x28)) = *((u32*)(r5 + 0x28));
    // add r0, #8
    *((u32*)(r5 + 0x34)) = *((u32*)(r5 + 0x34));
    _s32_div_f(*((u32*)(r5 + 0x34)), (0x5a << 2));
    *((u32*)(r5 + 0x34)) = r1;
    GF_CosDeg(((r1 << 0x10) >> 0x10));
    // asr r0, r0, #0xc
    *((u32*)(r5 + 0x40)) = (r0 * *((u32*)(r5 + 0x38)));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)));
    // add r0, r2, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), *((u32*)(r5 + 0x10)));
    // add r0, r2, r0
    // str r0, [sp, #0x1c]
    // add r0, #8
    *((u32*)(r5 + 0x34)) = *((u32*)(r5 + 0x34));
    _s32_div_f(*((u32*)(r5 + 0x34)), (0x5a << 2), *((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 0x34)) = r1;
    GF_SinDeg(((r1 << 0x10) >> 0x10));
    // asr r0, r0, #0xc
    *((u32*)(r5 + 0x44)) = (r0 * *((u32*)(r5 + 0x38)));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)));
    // add r0, r2, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), *((u32*)(r5 + 0x10)));
    // add r0, r2, r0
    // str r0, [sp, #0x1c]
    // add r0, #8
    *((u32*)(r5 + 0x34)) = *((u32*)(r5 + 0x34));
    _s32_div_f(*((u32*)(r5 + 0x34)), (0x5a << 2), *((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 0x34)) = r1;
    GF_SinDeg(((r1 << 0x10) >> 0x10));
    // asr r0, r0, #0xc
    *((u32*)(r5 + 0x44)) = (r0 * *((u32*)(r5 + 0x38)));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), (*((u32*)(r5 + 0x40)) * r0), *((u32*)(r5 + 0x10)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x1c]
    // add r0, #8
    *((u32*)(r5 + 0x34)) = *((u32*)(r5 + 0x34));
    _s32_div_f(*((u32*)(r5 + 0x34)), (0x5a << 2), (*((u32*)(r5 + 0x44)) * r0), *((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 0x34)) = r1;
    GF_CosDeg(((r1 << 0x10) >> 0x10));
    // asr r0, r0, #0xc
    *((u32*)(r5 + 0x40)) = (r0 * *((u32*)(r5 + 0x38)));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), (*((u32*)(r5 + 0x40)) * r0), *((u32*)(r5 + 0x10)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x1c]
    // add r0, r1, r0
    *((u32*)(r5 + 0x38)) = *((u32*)(r5 + 0x3c));
    *((u32*)(r5 + 0x40)) = *((u32*)(r5 + 0x38));
    *((u32*)(r5 + 0x44)) = *((u32*)(r5 + 0x38));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)), (*((u32*)(r5 + 0x44)) * r0), *((u32*)(r5 + 0x14)));
    // add r0, r2, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), *((u32*)(r5 + 0x10)));
    // add r0, r2, r0
    // str r0, [sp, #0x1c]
    // add r0, r1, r0
    *((u32*)(r5 + 0x38)) = *((u32*)(r5 + 0x3c));
    *((u32*)(r5 + 0x40)) = *((u32*)(r5 + 0x38));
    *((u32*)(r5 + 0x44)) = *((u32*)(r5 + 0x38));
    GF_SinDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x38)), *((u32*)(r5 + 0x14)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x18]
    GF_CosDeg(((*((u32*)(r5 + 0x28)) << 0x10) >> 0x10), *((u32*)(r5 + 0x40)), (*((u32*)(r5 + 0x40)) * r0), *((u32*)(r5 + 0x10)));
    // mvn r0, r0
    // add r0, r3, r0
    // str r0, [sp, #0x1c]
    *((u32*)(r5 + 4)) = 0xa;
    // add r0, r1, r0
    *((u32*)(r5 + 0x1c)) = (2 << 0xa);
    // ldr r0, [sp, #0x18]
    _fflt((2 << 0xa), *((u32*)(r5 + 0x1c)), (*((u32*)(r5 + 0x44)) * r0), *((u32*)(r5 + 0x14)));
    _fdiv(0x45800000);
    // ldr r0, [sp, #0x1c]
    _fflt();
    _fdiv(0x45800000);
    _fflt(*((u32*)(r5 + 0x1c)));
    _fdiv(0x45800000);
    // add r1, sp, #0x14
    // str r1, [sp]
    // add r1, sp, #0x10
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov74_0222B950((*((u32*)(r5 + 0x10)) << 4), (*((u32*)(r5 + 0x14)) << 4), r4, r6);
    // ldr r0, [sp, #0x14]
    _fgr(0);
    // ldr r1, [sp, #0x14]
    _fmul(0x45800000);
    _fadd((0x3f << 0x18), r0);
    // ldr r1, [sp, #0x14]
    _fmul();
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    _fgr(0);
    // ldr r1, [sp, #0x10]
    _fmul(0x45800000);
    _fadd((0x3f << 0x18), r0);
    // ldr r1, [sp, #0x10]
    _fmul();
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x18
    Sprite_SetMatrix(*((u32*)(r5 + 0xc)));
    *((u32*)(r5 + 8)) = 1;
    _s32_div_f(*((u32*)(r5 + 0x28)), (0x5a << 2));
    *((u32*)(r5 + 0x28)) = r1;
    // add r1, sp, #0x18
    Sprite_SetMatrix(*((u32*)(r5 + 0xc)));
}




void ov74_0222BED8(void) {
    // ldrsb r2, [r3, r2]
}




void ov74_0222BEF0(void) {
    // ldrsb r2, [r3, r2]
}




void ov74_0222BF08(void) {
}




void ov74_0222BF18(void) {
}




void ov74_0222BF2C(void) {
    // ldrsb r1, [r0, r1]
    // sub r1, r1, r2
    // add r1, r1, r2
    // bpl _0222BF64
    // ldrsb r1, [r0, r3]
    // sub r2, r1, r2
    // sub r1, #0x18
    // sub r3, #0x18
    // ldrsb r1, [r0, r1]
    // add r1, r1, r2
}




void ov74_0222BFA0(void) {
    // ldrsb r1, [r0, r1]
    // sub r1, r1, r2
    // add r1, r1, r2
    // bpl _0222BFD8
    // ldrsb r1, [r0, r3]
    // sub r2, r1, r2
    // sub r1, #0x18
    // sub r3, #0x18
    // ldrsb r1, [r0, r1]
    // add r1, r1, r2
}




void ov74_0222C014(void) {
}




void ov74_0222C04C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222C064: ; jump table
    ov74_0222C014(r1, (*((u16*)(*((u32*)r1) + 6)) << 0x10));
    // str r0, [r4]
    ov74_0222BF2C(r4, 1, 2);
    // str r0, [r4]
    // add r2, #0x90
    // add r1, #0x4c
    Sprite_TryChangeAnimSeq(*((u32*)(r4 + 0x00003014)), 4, *((u32*)r4), 0);
    Sprite_TryChangeAnimSeq(*((u32*)(r4 + 0x00003014)), 3);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00003014)), 1);
    // str r0, [r4]
    ov74_0222B344(r4);
    ov74_0222B2C4(r4);
    ov74_0222B5F8(r4);
    GfGfx_EngineATogglePlanes(2, 0);
    ov74_0222BF18();
    // str r0, [r4]
    // add r3, #0x94
    // add r3, #0x90
    // add r2, #0x4c
    ov74_0222BFA0(r4, 2, 2, *((u32*)r4));
    PlaySE(SEQ_SE_DP_SAVE);
    // str r0, [r4]
    ov74_0222B344(r4);
    ov74_0222B19C(r4);
    ov74_0222BFA0(r4, 2, 2);
    ov74_0222BFA0(r4, 1, 2);
    // str r0, [r4]
    ov74_0222BFA0(r4, 1, 2);
    Sprite_GetMatrixPtr(*((u32*)(r4 + 0x00003014)));
    Sprite_GetMatrixPtr(*((u32*)(r4 + 0x00003060)));
    // add r1, r2, r1
    *((u32*)(r5 + 4)) = (2 << 0xe);
    // sub r2, r2, r1
    // add r1, r2, r1
    *((u32*)(r0 + 4)) = (2 << 0xe);
    Sprite_GetDrawFlag(*((u32*)(r4 + 0x00003060)), (2 << 0xe), *((u32*)(r0 + 4)));
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00003060)), 1);
    // str r0, [r4]
    ov74_0222B1F4(r4);
    ov74_0222B30C(r4);
    ov74_0222B760(r4);
    GfGfx_EngineATogglePlanes(2, 1);
    // add r3, #0x4c
    ov74_0222BF2C(r4, 2, 1, r4);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00003060)), 0);
    Sprite_TryChangeAnimSeq(*((u32*)(r4 + 0x00003060)), 2);
    Sprite_TryChangeAnimSeq(*((u32*)(r4 + 0x00003060)), 3);
    // str r0, [r4]
    ov74_0222B374(r4);
    ov74_0222B20C(r4);
    ov74_0222BF2C(r4, 2, 1);
    // str r0, [r4]
    ov74_0222BF2C(r4, 0, 2);
    // str r0, [r4]
    // str r2, [r1]
    SysTask_Destroy(0xff, *((u32*)(r4 + 0x000030A0)), 0);
    Heap_Free(r4);
    ov74_0222B224(r4);
}




void ov74_0222C2EC(void) {
    OverlayManager_GetData();
    CTRDG_IsExisting();
    ov74_0222CE10(r4);
    _0222CD3A(*((u32*)r5));
    // add r0, r3, r3
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222C322: ; jump table
    ov74_022352A0(0x54);
    // str r5, [r4, r0]
    // str r0, [r5]
    _0222CD3A(1);
    ov74_0222AB70(r6, r4);
    ov74_02229F04(r4);
    ov74_0223539C(1, 3, r5, 2);
    _0222CD3A();
    ov74_022353FC(r5);
    _0222CD3A();
    ov74_0222AB0C(r6, r5, ov74_0222A6C0);
    _0222CD3A();
    ov74_0222AB0C(r6, r5, ov74_0222A5AC);
    _0222CD3A();
    ov74_0222AB0C(r6, r5, ov74_0222A2A4);
    _0222CD3A();
    ov74_0222AC1C(r6, r5);
    _0222CD3A();
    ov74_0222CEE0(r4);
    ov74_02229E28(r4, 0);
    ov74_0222A078(r6);
    // add r1, #0x8c
    ov74_0222FD98(*((u32*)(r4 + 4)), r4);
    // add r1, #0x80
    // str r0, [r1]
    // add r0, #0x80
    ov74_02229E28(r4, 0);
    // str r0, [r5]
    // add r0, #0x58
    WindowIsInUse(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x58
    AddWindowParameterized(*((u32*)r4), r4, 0, 3);
    ov74_02236988();
    // add r1, #0x58
    ov74_0222AAAC(r6, r4, r0);
    // add r1, #0x18
    ov74_0222AA18(r6, r4, 4);
    ov74_0222A43C(r6);
    // str r0, [r5]
    // sub r0, #0x2e
    _0222CD3A(*((u32*)(ov74_0223D0A8 + 0x10)));
    ov74_0222CEC0();
    // str r0, [r5]
    _0222CD3A(0x11);
    ov74_0222AB0C(r6, r5, ov74_0222A538);
    ov74_0222CEE0(r4);
    _0222CD3A();
    ov74_0222A078(r6);
    ov74_02229E28(r4, 1);
    ov74_02229F28(r4, 1);
    ov74_0222A0E4(r7);
    ov74_0222A174(r6);
    // str r1, [r4, r0]
    ov74_02229F28(r4, (1 - 2));
    // add r0, #0x58
    ov74_02229F60(r4, 0);
    Heap_Alloc(0x54, 0x000030A4);
    memset(0, 0x000030A4);
    // add r1, r4, r0
    // str r1, [r6, r0]
    ov74_02235708(0x000030A0);
    *((u32*)(r6 + 0xc)) = r0;
    SysTask_CreateOnMainQueue(ov74_0222C04C, r6, 5);
    ov74_02235DC4(*((u32*)r4), r7);
    ov74_0222A174(r6);
    // str r0, [r5]
    // add r1, #0x18
    ov74_0222ADBC(r6, r4, 8, 0x38);
    // str r0, [r5]
    GfGfx_EngineATogglePlanes(1, 1);
    ov74_0223615C();
    ov74_02236128();
    ov74_02229E28(r4, 0);
    // mvn r1, r1
    ov74_02229F28(r4, 0);
    // add r0, #0x18
    ov74_02229F78(r4, 0);
    BgClearTilemapBufferAndCommit(*((u32*)r4), 0);
    GfGfx_EngineATogglePlanes(1, 0);
    // add r6, #0xdc
    ov74_0222A0E4(r4);
    ov74_02235DC4(*((u32*)r4), r6);
    // str r1, [r4, r0]
    PlaySE(SEQ_SE_DP_UG_020, 2);
    // str r0, [r5]
    ov74_02229E28(r4, 0);
    // mvn r1, r1
    ov74_02229F28(r4, 0);
    // add r0, #0xda
    // add r0, #0xda
    // strb r1, [r0]
    // add r1, #0x18
    ov74_0222ADBC(r6, r4, 0x1b, 0x38);
    // str r0, [r5]
    ov74_0222CEE0(r4);
    // sub r0, #0x2d
    ov74_0222CEC0(*((u32*)(ov74_0223D0A8 + 0x10)), *((u32*)(ov74_0223D0A8 + 0x10)));
    ov74_0222A494(r6);
    // str r0, [r5]
    ov74_02229D6C(r4);
    // str r0, [r4, r1]
    // mvn r0, r0
    ov74_02229E28(r4, 0);
    // add r1, #0x8c
    ov74_0222FD98(*((u32*)(r4 + 4)), r4);
    // add r1, #0x80
    // str r0, [r1]
    // add r0, #0x58
    WindowIsInUse(r4, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x58
    AddWindowParameterized(*((u32*)r4), r4, 0, 3);
    // add r1, #0x58
    // add r2, #0x8c
    ov74_0222AAAC(r6, r4, r4);
    // add r1, #0x18
    ov74_0222AA18(r6, r4, 4);
    ov74_0222A240(r6, 0);
    // str r0, [r5]
    // tst r0, r1
    // str r1, [r4, r0]
    ov74_02229E28(r4, 0);
    ov74_02229DF8();
    sub_0203A914();
    // str r0, [r5]
    ov74_0222AB0C(r6, r5, ov74_0222A494);
    sub_0203769C();
    sub_020373B4(((r0 << 0x10) >> 0x10));
    sub_02037B38(0xab);
    ov74_02229E28(r4, 0);
    sub_020398D4(1, 1);
    // add r1, #0x18
    ov74_0222AA18(r6, r4, 7);
    ov74_02229F28(r4, 1);
    ov74_02229E28(r4, 1);
    // str r1, [r4, r0]
    // str r0, [r5]
    sub_020373B4(((r7 << 0x10) >> 0x10), (0x96 << 2));
    ov74_02229DF8();
    sub_0203A914();
    // mvn r1, r1
    ov74_02229F28(r4, 0);
    ov74_02229E28(r4, 0);
    // str r0, [r5]
    // tst r0, r1
    // str r1, [r4, r0]
    ov74_02229DF8(*((u32*)(r4 + 0x00000434)), (*((u32*)(r4 + 0x00000434)) - 1));
    sub_0203A914();
    // mvn r1, r1
    ov74_02229F28(r4, 0);
    ov74_02229E28(r4, 0);
    // str r0, [r5]
    ov74_02229DBC(0x11);
    // str r0, [r5]
    sub_0203769C(0xb);
    // tst r1, r2
    // str r2, [r4, r1]
    sub_020373B4(((r0 << 0x10) >> 0x10), *((u32*)(r4 + 0x00000434)), (*((u32*)(r4 + 0x00000434)) - 1));
    ov74_02229E28(r4, 0);
    ov74_02229DF8();
    sub_0203A914();
    // str r0, [r5]
    ov74_0222A078(r6);
    ov74_02235DC4(*((u32*)r4), r0);
    sub_020398D4(0, 0);
    ov74_0222A174(r6);
    // str r0, [r5]
    sub_0203769C(0xc);
    sub_020373B4(((r0 << 0x10) >> 0x10));
    ov74_02229DF8();
    // str r1, [r4, r0]
    ov74_02236140(0x000029EC, 1);
    ov74_02229E28(r4, 0);
    sub_0203A914();
    // mvn r1, r1
    ov74_02229F28(r4, 0);
    // str r0, [r5]
    ov74_0223615C(0xe);
    sub_02037AC0(0x93);
    // str r0, [r5]
    // str r1, [r4, r0]
    ov74_0223615C(0x0000043C, 0x78);
    ov74_02236140();
    // add r0, #0xda
    // add r0, #0xda
    // strb r1, [r0]
    ov74_02229E28(r4, 0);
    // add r1, #0x18
    ov74_0222ADBC(r6, r4, 0x1b, 0x38);
    // str r0, [r5]
    sub_02037B38(0x93);
    ov74_02236128();
    // str r1, [r4, r0]
    // str r0, [r5]
    // str r1, [r4, r0]
    ov74_02236140(*((u32*)(r4 + 0x0000043C)), (*((u32*)(r4 + 0x0000043C)) - 1));
    // add r0, #0xda
    // add r0, #0xda
    // strb r1, [r0]
    ov74_02229E28(r4, 0);
    // add r1, #0x18
    ov74_0222ADBC(r6, r4, 0x1b, 0x38);
    // str r0, [r5]
    // add r0, #0x58
    ov74_02229F60(r4, 0);
    // add r0, #0xda
    // add r0, #0xda
    // strb r1, [r0]
    // add r1, #0x18
    ov74_0222ADBC(r6, r4, 0x1d, 0x38);
    // str r0, [r5]
    // str r1, [r4, r0]
    ov74_02229E28(r4, 0);
    ov74_02229DF8();
    sub_0203A914();
    PlaySE(SEQ_SE_DP_UG_020);
    // mvn r1, r1
    ov74_02229F28(r4, 0);
    // add r1, #0x18
    ov74_0222ADBC(r6, r4, 8, 0x38);
    // str r0, [r5]
    PlaySE(SEQ_SE_DP_SELECT);
    // add r1, #0x18
    ov74_0222AA18(r6, r4, 0x19);
    // add r0, #0x58
    ov74_02229F60(r4, 0);
    // str r0, [r5]
    // str r1, [r4, r0]
    ov74_02229E28(r4, 0);
    PlaySE(SEQ_SE_DP_SELECT);
    // add r1, #0x18
    ov74_0222AA18(r6, r4, 0x18);
    // add r0, #0x58
    ov74_02229F60(r4, 0);
    // str r0, [r5]
    PlaySE(SEQ_SE_DP_SELECT);
    ov74_0222A94C(r6, 0xc4, 0);
    // str r0, [r5]
    // str r1, [r4, r0]
    // add r0, #0x84
    // add r0, #0x8c
    ov74_02235258(r4, (0xea << 2));
    // add r1, #0x8c
    ov74_0222FD98(*((u32*)(r4 + 4)), r4);
    // add r1, #0x80
    // str r0, [r1]
    // add r0, #0x80
    ov74_02229E28(r4, 0);
    // str r0, [r5]
    // add r0, #0x58
    WindowIsInUse(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x58
    AddWindowParameterized(*((u32*)r4), r4, 0, 3);
    // add r1, #0x58
    // add r2, #0x8c
    ov74_0222AAAC(r6, r4, r4);
    // add r1, #0x18
    ov74_0222AA18(r6, r4, 4);
    ov74_0222A240(r6, 0);
    // str r0, [r5]
    ov74_0222AB0C(r6, r5, ov74_0222A494);
    // str r0, [r5]
    ov74_0222A078(r6);
    ov74_02235DC4(*((u32*)r4), r0);
    // add r1, #0x18
    ov74_0222AA18(r6, r4, 7);
    ov74_02229F28(r4, 1);
    ov74_02229E28(r4, 1);
    // str r1, [r4, r0]
    // str r0, [r5]
    // str r1, [r4, r0]
    ov74_0222A174(r6, (*((u32*)(r4 + 0x0000043C)) - 1));
    // str r0, [r5]
    ov74_0223615C(0x18);
    ov74_02236128();
    ov74_0223615C();
    // str r1, [r4, r0]
    ov74_02229E28(r4, 0);
    // mvn r1, r1
    ov74_02229F28(r4, 0);
    PlaySE(SEQ_SE_DP_UG_020);
    // add r1, #0x18
    ov74_0222ADBC(r6, r4, 8, 0x19);
    // str r0, [r5]
    ov74_0223615C();
    // mvn r1, r1
    ov74_02229F28(r4, 0);
    // add r0, #0xda
    // add r0, #0xda
    // strb r1, [r0]
    // add r1, #0x18
    ov74_0222ADBC(r6, r4, 0x1b, 0x38);
    // str r0, [r5]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r0, [r5]
    // add r0, #0x80
    ov74_0222AE3C(r4, (1 << 0x10));
    ov74_0222AD6C(r6);
    // str r0, [r5]
    // add r0, #0x48
    ov74_02229F60(r4, 0);
    ov74_0222ADBC(r6, 0, 0);
    // str r0, [r5]
    // add r0, #0x58
    ov74_02229F60(r4, 0);
    ov74_0222A5AC(r6);
    // str r0, [r5]
    ov74_0222A240(r6, 1);
    // str r0, [r5]
    // add r0, #0x80
    // str r1, [r0]
    ov74_02229E68(r6, 0);
    // str r1, [r4, r0]
    ov74_02229E68(r6, 0);
    // str r0, [r4, r1]
    ov74_02229E68(r6, (0x11 << 6));
    // str r1, [r4, r0]
    PlaySE(SEQ_SE_DP_SELECT, 2);
    // add r0, #0xda
    ov74_0223539C(0, 0x39, *((u32*)(r4 + 0x000015D8)), 2);
    ov74_02235390(1);
    ov74_0223539C(0, 0x3a, *((u32*)(r4 + 0x000015D8)), 2);
    ov74_0222A7A0(*((u32*)r4));
    GfGfx_EngineBTogglePlanes(1, 0);
    GfGfx_EngineBTogglePlanes(2, 1);
    // add r0, #0xda
    // add r0, #0xdc
    // add r0, #0xe0
    // add r1, #0xdc
    ov74_0222FC50(*((u32*)r4), r4, 0x54);
    // add r1, #0xdc
    ov74_0222EC08(*((u32*)r4), r4, 0x54);
    ov74_0223539C(1, 0x38, *((u32*)(r4 + 0x000015D8)), 2);
    // add r0, #0xda
    // add r0, #0xda
    // strb r1, [r0]
    OS_ResetSystem(0, (*((u8*)r4) & ~(4)));
    // blx r1
    ov74_022358C8(*((u32*)(r4 + 0x000029F4)), *((u32*)(r4 + 0x000029E8)));
}




void ov74_0222CD7C(void) {
    // ldr r0, _0222CD84 ; =ov74_0223D0A8
    // ldr r0, [r0]
    // bx lr
    // nop
    // _0222CD84: .word ov74_0223D0A8
    // TODO: decompile
}




void ov74_0222CD88(void) {
    // str r0, [r1]
}




void ov74_0222CD94(void) {
    OverlayManager_GetData();
    RegisterMainOverlay(FS_OVERLAY_ID, gApplication_TitleScreen);
    RegisterMainOverlay(FS_OVERLAY_ID, _0223B410);
    RegisterMainOverlay(FS_OVERLAY_ID, _0223B420);
    Heap_Destroy(0x59);
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x54);
    sub_0201A4B0(0);
    ov74_02236034(0);
}




void ov74_0222CE10(void) {
    sub_02038D28(*((u32*)(r0 + 4)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    sub_02038D80((0x000005CC - 4), 0x1e);
    // tst r0, r1
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    sub_02038D64(*((u32*)(r4 + 0x000005CC)), (*((u32*)(r4 + 0x000005CC)) - 1));
    // str r1, [r4, r0]
}




void ov74_0222CE6C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CE7C: ; jump table
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x28;
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x29;
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x2a;
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x2c;
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x2f;
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x30;
}




void ov74_0222CEC0(void) {
    sub_02034DE0();
    Heap_Free(*((u32*)(ov74_0223D0A8 + 4)));
    sub_0203A914();
    *((u32*)(ov74_0223D0A8 + 4)) = 0;
}




void ov74_0222CEE0(void) {
    ov74_0222CEC0(*((u32*)(ov74_0223D0A8 + 0x10)));
    ov74_022368D4();
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x2d;
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x2e;
    WM_GetLinkLevel(*((u32*)(ov74_0223D0A8 + 0x10)), 0x2e);
    // sub r0, r1, r0
    sub_0203A930(3);
    // sub r0, #0x25
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CF44: ; jump table
    sub_02034D8C((*((u16*)(*((u32*)(ov74_0223D0A8 + 0x10)) + 6)) << 0x10), ov74_0223D0A8);
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x26;
    sub_02034DB8(ov74_0223D0A8, 0x26);
    *((u32*)(ov74_0223D0A8 + 0xc)) = 0;
    ov74_02236980(ov74_0223D0A8, 0);
    Heap_Alloc(0x54, r0);
    *((u32*)(ov74_0223D0A8 + 4)) = r0;
    // add r0, r4, r0
    ov74_02236680(0x000005D4, ov74_0222CE6C, r0);
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x27;
    sub_0203A880(ov74_0223D0A8, 0x27);
    *((u32*)(r1 + 0xc)) = (*((u32*)(r1 + 0xc)) + 1);
    // tst r0, r1
    // sub r0, #0x28
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CFC8: ; jump table
    ov74_022365FC((*((u16*)(*((u32*)(ov74_0223D0A8 + 0x10)) + 6)) << 0x10), *((u32*)(gSystem + 0x48)));
    *((u32*)(ov74_0223D0A8 + 0x10)) = 0x2b;
}




void ov74_0222CFFC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov74_0222D024(void) {
    Sprite_Delete(*((u32*)(r0 + 0x00002DC4)));
    Sprite_Delete(*((u32*)(r4 + 0x00002DC8)));
    // str r1, [r4, r0]
    // str r2, [r4, r1]
    Sprite_Delete(*((u32*)(r4 + (0x00002DC8 + 4))), (0x00002DC8 - 4), *((u32*)(r4 + 0x00002DC8)));
    Sprite_Delete(*((u32*)(r4 + 0x00002DD0)));
    Sprite_Delete(*((u32*)(r4 + 0x00002DD4)));
    // str r0, [r4, r1]
    // str r2, [r4, r0]
    // sub r1, #8
    // str r0, [r4, r1]
    ov74_022359BC(*((u32*)(r4 + (0x00002DD4 - 4))), 0x00002DD4, *((u32*)(r4 + 0x00002DD4)));
}




void ov74_0222D098(void) {
    // str r0, [r4, r1]
    // str r1, [sp]
    ov74_02235930(0, *((u32*)(r0 + 0x00002DC4)), 0x48, 0xa8);
    // str r0, [r4, r1]
    Sprite_SetPriority(*((u32*)(r4 + 0x00002DC4)), 2);
    // str r0, [sp]
    ov74_02235930(0, *((u32*)(r4 + 0x00002DC8)), 0xb8, 0xa8);
    // str r0, [r4, r1]
    Sprite_SetPriority(*((u32*)(r4 + 0x00002DC8)), 2);
}




void ov74_0222D0EC(void) {
}




void ov74_0222D104(void) {
}




void ov74_0222D11C(void) {
    // str r3, [sp]
    ListMenuItems_Delete(*((u32*)(r0 + 0x00002BCC)));
    DestroyListMenu(*((u32*)(r5 + 0x00002BC8)), 0, 0);
    ListMenuItems_New(r7, 0x55);
    // str r0, [r5, r1]
    NewMsgDataFromNarc(0, 0x1b, 0xf7, 0x55);
    // str r0, [r5, r1]
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0x00002BCC)), *((u32*)(r5 + 0x00002A04)), *((u32*)r4), *((u32*)(r4 + 4)));
    // add r4, #8
    DestroyMsgData(*((u32*)(r5 + 0x00002A04)));
    // add r3, sp, #4
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #4]
    // add r0, sp, #4
    *((u16*)(*((u32*)(r5 + 0x00002BCC)) + 0x10)) = r7;
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x38]
    ListMenuInit(r3, 0, ((r3 << 0x10) >> 0x10), 0x55);
    // str r0, [r5, r1]
}




void ov74_0222D1D4(void) {
    NewMsgDataFromNarc(1, 0x1b, 0xf7, 0x55);
    MessageFormat_New(0x55);
    GetFontAttribute(1, 6);
    FillWindowPixelBuffer(r5, r0);
    ReadMsgData_ExpandPlaceholders(r6, r4, r7, 0x55);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 1, r0, 0);
    CopyWindowToVram(r5);
    String_Delete(r7);
    DestroyMsgData(r4);
    MessageFormat_Delete(r6);
}




void ov74_0222D248(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov74_0222D2D4(void) {
    OverlayManager_GetData();
    ov74_0222D448();
    // add r0, r4, r0
    ov74_0222D1D4(0x00002BD0, 0x2f);
    // add r1, r4, r3
    // add r3, #0x10
    ov74_0222D9E0(r4, 0xa, *((u32*)(r4 + 0x00002BE0)));
}




void ov74_0222D308(void) {
    OverlayManager_GetData();
    ov74_0222D448();
    // add r1, #0x20
    SaveMysteryGift_HasAnyGift(*((u32*)(r4 + 0x00002BA0)), *((u32*)(r4 + 0x00002BA0)));
    // add r0, r4, r0
    ov74_0222D1D4(0x00002BD0, 0x3f);
    // add r0, r4, r0
    ov74_0222D1D4(0x3e);
    // add r1, r4, r3
    // add r3, #0x10
    ov74_0222D9E0(r4, 9, *((u32*)(r4 + 0x00002BE0)));
}




void ov74_0222D358(void) {
    OverlayManager_GetData();
    ov74_0222D448();
    // add r0, r4, r0
    ov74_0222D1D4(0x00002BD0, 0x40);
    // add r0, r4, r0
    WaitingIcon_New(0x00002BD0, 0x13);
    // str r0, [r4, r1]
    // add r1, #0x20
    SaveMysteryGift_HasAnyGift(*((u32*)(r4 + 0x00002BA0)), *((u32*)(r4 + 0x00002BA0)));
    // add r1, #0x20
    SaveMysteryGift_ReceiveGiftAndClearCardByIndex(*((u32*)(r4 + 0x00002BA0)), *((u32*)(r4 + 0x00002BA0)));
    // add r1, #0x20
    SaveMysteryGift_DeleteWonderCardByIndex(*((u32*)(r4 + r1)), *((u32*)(r4 + r1)));
    SaveGameNormal(*((u32*)(r4 + 0x00002BA4)));
    sub_0200F450(*((u32*)(r4 + 0x00003D50)));
    SaveMysteryGift_HasAnyCard(*((u32*)(r4 + 0x00002BA0)));
    ov74_0222DAF8(r4, *((u32*)(r4 + (0xaf << 6))), 1);
    // str r0, [r4, r1]
    // add r1, #0x10
    // add r0, r4, r1
    ov74_0222D1D4(0x25);
    // add r1, r4, r3
    // add r3, #0x10
    ov74_0222D9E0(r4, 8, *((u32*)(r4 + 0x00002BE0)));
    ov74_0222D824(r4, 1, 0);
}




void ov74_0222D414(void) {
    OverlayManager_GetData();
    ov74_0222D448();
    // add r0, r4, r0
    ov74_0222D1D4(0x00002BD0, 0x25);
    // add r1, r4, r3
    // add r3, #0x10
    ov74_0222D9E0(r4, 8, *((u32*)(r4 + 0x00002BE0)));
}




void ov74_0222D448(void) {
    ListMenuItems_Delete(*((u32*)(r0 + 0x00002BCC)));
    // str r1, [r4, r0]
    DestroyListMenu(*((u32*)(r4 + (0x00002BCC - 4))), 0, 0);
    // str r1, [r4, r0]
    // add r0, #0x18
    // add r0, r4, r0
    ov74_0222D0EC(0x00002BC8, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x00002BE0);
    // add r0, r4, r0
    RemoveWindow(0x00002BE0);
}




u8 ov74_0222D490(void) {
}




void ov74_0222D494(void) {
    // sub r1, #0xc
    // add r2, r5, r2
    // add r1, r2, r1
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r3, [sp, #0xc]
}




void ov74_0222D4E4(void) {
    // add r3, r4, r2
    // sub r2, #0xc
    // sub r0, #0x20
    SaveMysteryGift_HasAnyGift(*((u32*)(r0 + (0xaf << 6))), *((u32*)(r0 + (0xaf << 6))), 0x28, *((u32*)(r3 + (0xaf << 6))));
    ReadMsgData_ExpandPlaceholders(*((u32*)(r4 + (0x2a << 8))), *((u32*)(r4 + ((0x2a << 8) + 4))), 0x27, *((u32*)r4));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 1, r0, 0);
    String_Delete(r4);
}




void ov74_0222D55C(void) {
    // sub r1, #0xc
    // add r2, r4, r2
    // add r0, sp, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    // add r2, r3, r2
    // ldr r2, [sp, #0xc]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
}




void ov74_0222D5C4(void) {
    // sub r1, #0xc
    // add r2, r5, r2
    // add r1, r2, r1
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r3, [sp, #0xc]
}




void ov74_0222D614(void) {
    // sub r0, #0xc
    // add r1, r3, r1
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r3, [sp, #0xc]
    // str r1, [sp]
    // str r0, [sp, #4]
}




void ov74_0222D690(void) {
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // sub r0, #0xc
    // add r2, r5, r2
    // add r6, sp, #0x14
    // add r3, r6, r1
    // str r0, [r6, r1]
    *((u32*)(r3 + 4)) = *((u32*)(ov74_0223C2D0 + 0x3c));
    // add r6, sp, #0x14
    // str r0, [r6, r1]
    // add r3, r6, r1
    *((u32*)(r3 + 4)) = *((u32*)(ov74_0223C2D0 + 0x44));
    // str r0, [r6, r1]
    // add r3, r6, r1
    *((u32*)(r3 + 4)) = *((u32*)(ov74_0223C2D0 + 0x4c));
    ClearWindowTilemapAndCopyToVram(r1, ((((0 + 1) + 1) + 1) << 3), *((u32*)(ov74_0223C2D0 + 0x4c)));
    RemoveWindow(r7);
    // sub r0, r0, r1
    // add r1, r1, r0
    // str r1, [sp]
    // str r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x000029FC)), r7, 2, ((*((u32*)(r6 + 4)) << 0x18) >> 0x18));
    // str r0, [sp]
    // add r1, sp, #0x14
    ov74_0222D11C(r5, (r4 + 2), r7);
}




void ov74_0222D774(void) {
}




void ov74_0222D78C(void) {
}




void ov74_0222D7A4(void) {
    // add r0, r5, r0
    ov74_0222D1D4(0x00002BD0, 2);
    // str r0, [sp]
    ov74_0222D11C(r5, ov74_0223C2E0, 2, r4);
}




void ov74_0222D7D0(void) {
}




void ov74_0222D7F0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4]
    // str r6, [r5, r0]
}




void ov74_0222D824(void) {
    // str r2, [sp, #0x14]
    NewMsgDataFromNarc(1, 0x1b, 0xf7, *((u32*)r0));
    // str r0, [r5, r1]
    MessageFormat_New(*((u32*)r5), 0x00002A04);
    // str r0, [r5, r1]
    // ldr r0, [sp, #0x14]
    // str r0, [r5, r1]
    // ldr r1, [sp, #0x14]
    ov74_0222DB70(r5, 0x00002BC4);
    // str r0, [sp, #0x30]
    // str r5, [sp, #0x1c]
    // add r6, r5, r0
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    ClearWindowTilemapAndCopyToVram(r6, *((u32*)r4));
    RemoveWindow(r6);
    // ldr r0, [sp, #0x1c]
    // add r7, #0x30
    // add r0, #0x10
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x30]
    // add r6, #0x10
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x18]
    // str r5, [sp, #0x24]
    // str r5, [sp, #0x20]
    // add r6, r5, r0
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x2c]
    // ldr r1, [sp, #0x20]
    // str r2, [r1, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x000029FC)), r6, 0, ((*((u32*)(r4 + 4)) << 0x18) >> 0x18));
    GetFontAttribute(((*((u32*)(r4 + 0x14)) << 0x18) >> 0x18), ((*((u32*)(r4 + 0x1c)) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r6, r0);
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x28]
    // blx r3
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + (0x2a << 8))), *((u32*)(r5 + 0x00002A04)), *((u32*)(r4 + 0x20)), *((u32*)r5));
    // mvn r0, r0
    FontID_String_GetCenterAlignmentX(*((u32*)(r4 + 0x14)), r0, 0, (*((u32*)(r4 + 0xc)) << 3));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, *((u32*)(r4 + 0x14)), r7, r0);
    String_Delete(r7);
    CopyWindowToVram(r6);
    // ldr r0, [sp, #0x2c]
    // add r0, r0, r2
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x24]
    // add r4, #0x30
    // add r0, #0x10
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r6, #0x10
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    DestroyMsgData(*((u32*)(r5 + 0x00002A04)), *((u32*)(r4 + 0xc)), (*((u32*)(r4 + 0xc)) * *((u32*)(r4 + 0x10))));
    MessageFormat_Delete(*((u32*)(r5 + (0x2a << 8))));
    // ldr r0, [sp, #0x14]
    ov74_0222DCD4(r5);
}




void ov74_0222D9E0(void) {
    // add r4, r0, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r0 + 0x000029FC)), 2, ((*((u32*)(r4 + 4)) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r6, ((*((u32*)(r4 + 0x1c)) << 0x18) >> 0x18));
    NewMsgDataFromNarc(1, 0x1b, 0xf7, 0x55);
    // str r0, [r5, r1]
    MessageFormat_New(0x55, 0x00002A04);
    // str r0, [r5, r1]
    // str r7, [r5, r0]
    // str r4, [r5, r0]
    // blx r3
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + (0x2a << 8))), *((u32*)(r5 + ((0x2a << 8) + 4))), *((u32*)(r4 + 0x20)), 0x55);
    // str r0, [sp, #0x14]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, *((u32*)(r4 + 0x14)), 0);
    // ldr r0, [sp, #0x14]
    String_Delete();
    DestroyMsgData(*((u32*)(r5 + 0x00002A04)));
    MessageFormat_Delete(*((u32*)(r5 + (0x2a << 8))));
    // add r0, r5, r0
    DrawFrameAndWindow2(r6, 0, 0x13, 0xa);
    DrawFrameAndWindow1(r6, 0, 0xa, 0xe);
    // add r0, r7, r0
}




void ov74_0222DAF8(void) {
    // add r4, r4, r6
    // mvn r0, r0
    SaveMysteryGift_CardTagIsValid(*((u32*)(r0 + 0x00002BA0)), 2);
}




void ov74_0222DB30(void) {
    // str r2, [sp]
    GfGfxLoader_LoadFromNarc(0x71, 1, *((u32*)r0));
    // add r1, sp, #4
    NNS_G2dGetUnpackedScreenData();
    // ldr r2, [sp, #4]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)(r5 + 0x000029FC)), ((r4 << 0x18) >> 0x18), r6);
    Heap_Free(r7);
}




void ov74_0222DB70(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x71, 3, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 6, *((u32*)(r5 + 0x000029FC)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 4, *((u32*)(r5 + 0x000029FC)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 5, *((u32*)(r5 + 0x000029FC)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xef
    GfGfxLoader_GXLoadPal(0x71, 0, 0, 0x71);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 1, *((u32*)(r5 + 0x000029FC)), 3);
    ov74_0222DB30(r5, 2, 3, (3 << 9));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r5 + 0x000029FC)), 3, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r5 + 0x000029FC)), 3);
}




void ov74_0222DC60(void) {
    OverlayManager_GetData();
    ListMenu_ProcessInput(*((u32*)(r0 + 0x00002BC8)), 0x00002BC8);
    // mvn r0, r0
    PlaySE(SEQ_SE_DP_SELECT);
    // blx r6
    // mvn r1, r1
    // str r0, [r5]
    PlaySE(SEQ_SE_DP_SELECT, 0);
    // str r4, [r5]
    // str r4, [r0]
    // blx r4
    // mvn r1, r1
    // str r0, [r5]
}




void ov74_0222DCD4(void) {
    // add r1, #8
    ov74_0223567C(*((u32*)(r0 + 0x00002DCC)), 0x00002DCC);
    ov74_0222D024(r6);
    ov74_0223563C();
    ov74_02235690();
    // str r0, [sp]
    // str r0, [sp, #4]
    ov74_02235728(0x71, 0x1e, 0x1b, 0x1d);
    sub_02074490();
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x14, r0, 1, 0x60);
    // str r0, [sp, #0x10]
    // str r4, [sp, #0xc]
    // add r1, r6, r0
    // add r1, r0, r4
    // str r0, [sp, #8]
    Sprite_SetDrawFlag(*((u32*)(r6 + 0x00002DCC)), 0);
    // ldr r0, [sp, #0xc]
    // add r0, #0xa
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    ov74_02235930(0, *((u32*)(r5 + 0x00002DCC)), 0x10);
    // str r0, [r5, r1]
    // ldr r0, [sp, #8]
    GetMonIconNaixEx(0, 0);
    // str r0, [sp]
    // add r3, sp, #0x18
    GfGfxLoader_GetCharData(0x14, r0, 0);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    DC_FlushRange(*((u32*)(r0 + 0x14)), (2 << 8));
    // ldr r0, [sp, #0x18]
    GX_LoadOBJ(*((u32*)(r0 + 0x14)), (r7 << 5), (2 << 8));
    // ldr r0, [sp, #8]
    GetMonIconPaletteEx(0, 0);
    Sprite_SetPaletteOverride(*((u32*)(r5 + 0x00002DCC)), (r0 + 3));
    // ldr r0, [sp, #0x14]
    Heap_Free();
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, #0x19
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r7, #0x10
}




void ov74_0222DDFC(void) {
    Heap_Create(3, 0x55, (3 << 0x10));
    OverlayManager_CreateAndGetData(r4, 0x00003D54, 0x55);
    memset(0, 0x00003D54);
    BgConfig_Alloc(0x55);
    // str r0, [r4, r1]
    // str r0, [r4]
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
    // str r1, [r4, r0]
    // add r0, #0x7c
    // str r1, [r4, r0]
    ov74_022352A0(0x55, 1);
    Heap_Create(0, 0x59, (0x57 << 4));
}




void ov74_0222DE68(void) {
    sub_02014AA0();
    sub_02014A60(*((u32*)(r4 + (3 << 0xa))));
    sub_02014AB0(0x04000010, 8, 1);
}




void ov74_0222DE8C(void) {
    // add r4, r0, r4
    // str r1, [r4, r5]
    // sub r0, #0xc
    // str r2, [r4, r0]
    // sub r0, #8
    // sub r5, #0x14
    // str r3, [r4, r0]
    // add r2, r4, r2
    sub_02014A08(0x55, 0x00003130, (6 << 8));
    // str r0, [r4, r1]
    SysTask_CreateOnVBlankQueue(ov74_0222DE68, r4, (1 << 0xa));
    // str r0, [r4, r1]
    // str r1, [r4, r0]
}




void ov74_0222DEF0(void) {
    // add r4, r0, r1
    sub_02014A38(*((u32*)(r4 + (3 << 0xa))), 0x00003130);
    SysTask_Destroy(*((u32*)(r4 + 0x00000C04)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    sub_02014AA0(((3 << 0xa) + 4), 0);
}




void ov74_0222DF2C(void) {
    // add r4, r0, r1
    // sub r1, #8
    // add r2, r2, r1
    // sub r1, #8
    // str r2, [r4, r1]
    // add r2, r2, r1
    // str r2, [r4, r1]
    // sub r1, #8
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r2, r1, #0xc
    // str r2, [r4, r0]
    // sub r1, #8
    // str r2, [r4, r1]
    // str r2, [r4, r0]
    // sub r1, #8
    // sub r2, r2, r1
    // sub r1, #8
    // str r2, [r4, r1]
    // add r1, r2, r1
    // asr r2, r1, #1
    // str r2, [r4, r1]
    // str r1, [r4, r0]
    // sub r2, #8
    // str r3, [r4, r2]
    // str r1, [r4, r0]
    sub_02014A4C(*((u32*)(r4 + (3 << 0xa))), 0, (1 - 4), ((1 << 0xa) << 2));
    // add r3, #0xfc
    // asr r1, r5, #0xb
    // add r1, r5, r1
    // asr r1, r1, #0xc
    // bpl _0222DFEA
    // add r7, r2, r6
    // sub r6, r1, r0
    *((u16*)(r7 + 6)) = (0x54 << 1);
    // sub r1, r0, r1
    *((u16*)(r7 + 2)) = *((u16*)(r7 + 6));
    // sub r6, r6, r0
    // add r6, r2, r6
    *((u16*)((0xa8 << 3) + 6)) = 0xa8;
    *((u16*)((0xa8 << 3) + 2)) = *((u16*)((0xa8 << 3) + 6));
    // add r5, r5, r1
    DC_FlushRange(r0, (6 << 8), r0, (0x54 + 4));
    sub_02014A8C(*((u32*)(r4 + (3 << 0xa))));
}




void ov74_0222E03C(void) {
    ov74_022360B0();
    PlaySE(SEQ_SE_DP_SAVE);
    // str r1, [r4, r0]
}




void ov74_0222E060(void) {
    GF_AssertFail(*((u32*)(r0 + (0xaf << 6))));
    SaveSubstruct_AssertCRC(0x1b);
    // sub r0, #0xc
    // add r1, r4, r1
    // strb r1, [r2, r0]
    // sub r0, #0xc
    // add r1, r4, r1
    // strb r1, [r2, r0]
    SaveSubstruct_UpdateCRC(0x1b, (*((u8*)(*((u32*)((*((u32*)(r4 + (0xaf << 6))) << 2) + (0xaf << 6))) + (0xd2 << 2))) - 1), *((u32*)((*((u32*)(r4 + (0xaf << 6))) << 2) + (0xaf << 6))));
    ov74_022360A0(*((u32*)(r4 + 0x00002BA4)));
    // str r1, [r4, r0]
}




void ov74_0222E0D4(void) {
    // tst r2, r3
    // str r2, [r5, r1]
    // tst r1, r2
    // str r2, [r5, r1]
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + 0x00002DC4)), 0, 0, *((u32*)(gSystem + 0x48)));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x00002DC8)), 0);
    // tst r2, r0
    // and r1, r0
    PlaySE(SEQ_SE_DP_SELECT, *((u32*)(gSystem + 0x48)), *((u32*)(r5 + 0x00003D4C)));
    sub_02037AC0(0xab);
    // str r0, [r5, r1]
    // sub r1, #0x64
    // str r0, [r7]
    // add r1, r5, r1
    ov74_0222D9E0(r5, 0x00002C34, 0x11, (0xa << 6));
    // add r0, r5, r0
    WaitingIcon_New(0x00002BD0, 0x13);
    // str r0, [r5, r1]
    PlaySE(SEQ_SE_DP_SELECT, 0x00003D50);
    ov74_0222EB28(r5, r7, 0x14);
    PlaySE(SEQ_SE_DP_SELECT);
}




void ov74_0222E1F4(void) {
    OverlayManager_GetData();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222E216: ; jump table
    OverlayManager_GetArgs(r6, (*((u16*)(*((u32*)r5) + 6)) << 0x10));
    // str r1, [r4, r0]
    Save_MysteryGift_Get(*((u32*)(r4 + 0x00002BA4)), *((u32*)(r0 + 8)));
    // str r0, [r4, r1]
    Save_PlayerData_GetOptionsAddr(*((u32*)(r4 + (0x00002BA0 + 4))), 0x00002BA0);
    // str r0, [r4, r1]
    Options_GetFrame(*((u32*)(r4 + 0x00002BA8)), 0x00002BA8);
    // str r0, [r4, r1]
    // sub r1, #0xc
    SaveMysteryGift_CardGetByIdx(*((u32*)(r4 + 0x00002BAC)), 0);
    // str r0, [r4, r1]
    // sub r1, #0x14
    SaveMysteryGift_CardGetByIdx(*((u32*)(r4 + 0x00002BB4)), 1);
    // str r0, [r4, r1]
    // sub r1, #0x18
    SaveMysteryGift_CardGetByIdx(*((u32*)(r4 + 0x00002BB8)), 2);
    // str r0, [r4, r1]
    ov74_0222DAF8(r4, *((u32*)(r4 + (0x00002BBC + 4))), 1);
    // str r0, [r4, r1]
    // str r0, [r5]
    ov74_0222FCA4(1, (0xaf << 6));
    ov74_0222FCC4(*((u32*)(r4 + 0x000029FC)));
    // str r0, [r5]
    ResetAllTextPrinters(2);
    ov74_0222DB70(r4, 0);
    LoadFontPal0(0, (0x1e << 4), 0x55);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r4 + 0x000029FC)), 0, 1, 0xd);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r4 + 0x000029FC)), 0, 0xa, 0xe);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r4 + 0x000029FC)), 0, 0x13, 0xa);
    ov74_0222D824(r4, 1, 0);
    ov74_0222D7F0(r4, 1, 3, r5);
    // tst r3, r2
    // sub r2, #0x41
    ov74_0222DAF8(*((u32*)(r4 + (0xaf << 6))), 0x40, *((u32*)(gSystem + 0x48)));
    // tst r2, r1
    ov74_0222DAF8(r0, 1);
    // tst r0, r1
    PlaySE(SEQ_SE_DP_SELECT);
    ov74_0222D7F0(r4, 0, 0x1d, r5);
    // tst r0, r1
    PlaySE(SEQ_SE_DP_SELECT);
    // str r0, [r5]
    PlaySE(SEQ_SE_DP_CARD2);
    // str r6, [r4, r0]
    ov74_0222D824(r4, 1, 0);
    // add r1, r4, r1
    ov74_0222D9E0(0x00002BD0, 7, (0xa << 6));
    // str r0, [r4, r3]
    // sub r1, #0x10
    // add r1, r4, r1
    ov74_0222D9E0(r4, 0x00002BF0, 8, *((u32*)(r4 + 0x00002BF0)));
    // str r0, [r5]
    ov74_0222DC60(r6, r5, 0);
    // tst r0, r1
    PlaySE(SEQ_SE_DP_SELECT, *((u32*)(gSystem + 0x48)));
    // str r0, [r5]
    PlaySE(SEQ_SE_DP_CARD2);
    GfGfx_EngineATogglePlanes(0x10, 0);
    // add r0, r4, r0
    ov74_0222D104(0x00002BD0, 0);
    // add r0, r4, r0
    ov74_0222D0EC(0x00002BE0, 0);
    ov74_0222DE8C(r4, 1, (1 << 0xc), 0x66);
    // str r0, [r5]
    ov74_0222DF2C(7);
    ov74_0222D824(r4, 1, 1);
    ov74_0222DE8C(r4, 0, 0x00708000, (0x00708000 >> 1));
    // str r0, [r5]
    ov74_0222DF2C(8);
    // tst r0, r1
    PlaySE(SEQ_SE_DP_CARD2, *((u32*)(gSystem + 0x48)));
    ov74_0222DE8C(r4, 1, (1 << 0xc), 0x66);
    // str r0, [r5]
    ov74_0222DF2C(9);
    ov74_0222D824(r4, 1, 0);
    ov74_0222DE8C(r4, 0, 0x00708000, (0x00708000 >> 1));
    GfGfx_EngineATogglePlanes(0x10, 0);
    // str r0, [r5]
    ov74_0222DF2C(0xa);
    // add r0, r4, r0
    DrawFrameAndWindow2(0x00002BD0, 0, 0x13, 0xa);
    // add r0, r4, r0
    DrawFrameAndWindow1(0x00002BE0, 0, 0xa, 0xe);
    GfGfx_EngineATogglePlanes(0x10, 1);
    ov74_0222DEF0(r4);
    // str r0, [r5]
    ov74_0222D448(5);
    // add r0, r4, r0
    ov74_0222D104(0x00002BD0, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x00002BD0);
    // add r0, r4, r0
    RemoveWindow(0x00002BD0);
    // str r0, [r5]
    ov74_0222DC60(r6, r5, ov74_0222D414);
    ov74_0222DC60(r6, r5, ov74_0222D414);
    // add r1, r4, r1
    ov74_0222D7A4(0x00002BE0, 0x00010200);
    // str r0, [r5]
    ov74_0222D7F0(0xe, 0, 0x11, r5);
    ov74_0222D448();
    // add r0, r4, r0
    ov74_0222D104(0x00002BD0, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x00002BD0);
    // add r0, r4, r0
    RemoveWindow(0x00002BD0);
    ov74_0222D824(r4, 0, 3);
    ov74_0222D248(*((u32*)(r4 + 0x000029FC)));
    ov74_0222CFFC(r4);
    ov74_0222D098(r4);
    // str r0, [r5]
    ov74_0222E7EC(0x12);
    sub_0203A880();
    ov74_0222D7F0(r4, 1, 0x13, r5);
    sub_020373B4(0);
    // add r0, #0x90
    sub_020358B8(r4);
    // add r1, r4, r1
    ov74_0222E8B4(r4, 0x00002B08);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00002B08, 0);
    // add r0, r4, r0
    CopyWindowToVram(0x00002B08);
    // str r1, [r4, r0]
    // add r1, r4, r1
    ov74_0222EA88(r4, 0x00002AF8, r6);
    // str r6, [r4, r0]
    ov74_0222E0D4(r4, r6, r5);
    ov74_0222D7F0(0, 0x15, r5);
    ov74_0222D024();
    // add r0, r4, r0
    ov74_0222D104(0x00002BD0, 0);
    // add r0, r4, r0
    ov74_0222D0EC(0x00002BE0, 0);
    ov74_0222D824(r4, 1, 0);
    LoadFontPal0(0, (0x1e << 4), 0x55);
    ov74_0222D7F0(r4, 1, 4, r5);
    sub_02037D78();
    // str r0, [r5]
    // str r1, [r4, r0]
    // add r0, #0x90
    // add r1, r4, r1
    ov74_02235ED0(r4, 0x00002DD8, *((u32*)r4));
    // add r0, r4, r0
    ov74_02229D0C(0x00002DD8, (0xd6 << 2));
    ov74_0222E060(r4);
    // str r0, [r5]
    ov74_0223615C(0x18);
    sub_02037AC0(0x93);
    sub_020398D4(1, 1);
    // str r0, [r5]
    ov74_0222E898(0x19);
    sub_02037B38(0x93);
    sub_020398D4(0, 0);
    ov74_02236128();
    // add r1, r4, r1
    ov74_0222D9E0(r4, 0x00002BD0, 0x12, (0xa << 6));
    sub_0200F450(*((u32*)(r4 + 0x00003D50)));
    ov74_0222EB28(r4, r5, 0x1a);
    // tst r0, r1
    // str r0, [r5]
    // tst r0, r1
    // add r0, r4, r0
    ov74_0222D104(0x00002BD0, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x00002BD0);
    // add r0, r4, r0
    RemoveWindow(0x00002BD0);
    // str r0, [r5]
    ov74_0222D7F0(3, 0, 0x1d, r5);
    IsPaletteFadeFinished();
    // str r0, [r5]
    ov74_0222D024(*((u32*)(r4 + (0xb1 << 6))));
    ov74_0222DEF0(r4);
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x00002C44)));
    ov74_022358BC();
    // blx r1
}




void ov74_0222E7EC(void) {
    // add r1, r5, r1
    // sub r0, #0xc
    // add r0, #0xe0
    memcpy(r0, *((u32*)((*((u32*)(r0 + (0xaf << 6))) << 2) + (0xaf << 6))), (0xd6 << 2));
    // add r0, #0x90
    // add r1, r4, r1
    memcpy(r5, (0x41 << 2), 0x50);
    // strb r1, [r5, r0]
    // add r0, #0xde
    // add r0, #0xde
    // strb r1, [r0]
    // add r0, #0xde
    // add r0, #0xde
    // strb r1, [r0]
    ov74_02229CE0((r5 + 4), *((u32*)(r5 + 0x00002BA4)), 0xf);
}




void ov74_0222E85C(void) {
    // add r2, #8
    // add r2, #0xc
    // str r0, [r2]
}




void ov74_0222E898(void) {
}




void ov74_0222E8B4(void) {
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x24]
    sub_02034818(1);
    // str r1, [r4, r0]
    // add r0, #0x14
    // str r1, [r4, r0]
    // str r0, [r4, r1]
    // add r1, #0x34
    // add r0, #0x34
    // str r2, [r5, r1]
    // sub r1, #0x20
    // str r0, [r4, r1]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // add r0, #8
    // add r1, #0xc
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // add r0, sp, #0x38
    ov74_0222E85C(*((u32*)(r5 + 0x00002C20)), 0x00002C20, (*((u32*)(r5 + 0x00002C08)) + 1));
    // str r0, [sp, #0x28]
    // add r0, sp, #0x38
    ov74_0222E85C();
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x38
    ov74_0222E85C();
    // str r0, [sp, #0x30]
    // add r0, sp, #0x38
    ov74_0222E85C();
    // str r0, [sp, #0x34]
    MessageFormat_New(0x55);
    NewMsgDataFromNarc(1, 0x1b, 0xf7, 0x55);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    FillWindowPixelBuffer(0);
    // str r0, [sp, #0x14]
    // add r0, sp, #0x28
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    sub_02034818(*((u32*)r5));
    BufferPlayersName(r4, 0, r0);
    // ldr r1, [sp, #0x1c]
    ReadMsgData_ExpandPlaceholders(r4, 0x36, 0x55);
    // str r0, [sp, #0x20]
    PlayerProfile_GetTrainerGender(r7);
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x20]
    AddTextPrinterParameterizedWithColor(0, 0, 0);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x20]
    AddTextPrinterParameterizedWithColor(0, 0, 0);
    // ldr r0, [sp, #0x20]
    String_Delete();
    PlayerProfile_GetTrainerID(r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r4, 0, ((r0 << 0x10) >> 0x10), 5);
    // ldr r1, [sp, #0x1c]
    ReadMsgData_ExpandPlaceholders(r4, 0x37, 0x55);
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    AddTextPrinterParameterizedWithColor(0, 0, r0, 0x50);
    String_Delete(r7);
    // add r5, #0x18
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    CopyWindowToVram(((r0 + 4) + 1));
    // ldr r0, [sp, #0x1c]
    DestroyMsgData();
    MessageFormat_Delete(r4);
}




void ov74_0222EA88(void) {
    // str r2, [r5, r0]
    NewMsgDataFromNarc(1, 0x1b, 0xf7, 0x55);
    // str r0, [r5, r1]
    MessageFormat_New(0x55, 0x00002A04);
    // str r0, [r5, r1]
    FillWindowPixelBuffer(r4, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0x2a << 8))), 0, *((u32*)(r5 + 0x00002BF4)), 1);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + (0x2a << 8))), *((u32*)(r5 + ((0x2a << 8) + 4))), 0x39, 0x55);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 1, r0, 0);
    CopyWindowToVram(r4);
    String_Delete(r6);
    DestroyMsgData(*((u32*)(r5 + 0x00002A04)));
    MessageFormat_Delete(*((u32*)(r5 + (0x2a << 8))));
}




void ov74_0222EB28(void) {
    // str r6, [r5, r0]
    // str r0, [r4]
}




void ov74_0222EB44(void) {
    // str r0, [sp]
    OverlayManager_GetData();
    // add r5, r7, r0
    ClearWindowTilemapAndCopyToVram(r5);
    RemoveWindow(r5);
    // add r4, #0x10
    // add r5, #0x10
    // add r0, r7, r0
    ClearWindowTilemapAndCopyToVram(0x00002BD0, *((u32*)(r7 + 0x00002BD0)));
    // add r0, r7, r0
    RemoveWindow(0x00002BD0);
    // add r0, r7, r0
    ClearWindowTilemapAndCopyToVram(0x00002BE0, *((u32*)(r7 + 0x00002BE0)));
    // add r0, r7, r0
    RemoveWindow(0x00002BE0);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x000029FC)), 0);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x000029FC)), 1);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x000029FC)), 2);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x000029FC)), 3);
    Heap_Free(*((u32*)(r7 + 0x000029FC)));
    RegisterMainOverlay(FS_OVERLAY_ID, gApp_MainMenu_SelectOption_MysteryGift);
    Heap_Destroy(0x59);
    // ldr r0, [sp]
    OverlayManager_FreeData();
    Heap_Destroy(0x55);
}




void ov74_0222EC08(void) {
    ov74_0222FCC4();
    Heap_AllocAtEnd(r5, 0x00003D54);
    memset(0, 0x00003D54);
    // str r6, [r4, r0]
    // str r5, [r4]
    LoadFontPal0(0, (0x1e << 4), r5);
    // str r7, [r4, r0]
    // add r0, #0xc
    // str r2, [r4, r0]
    ov74_0222D824(r4, 1, 0);
    Heap_Free(r4);
}




void ov74_0222EC60(void) {
    Sprite_Delete(*((u32*)(r0 + 0x00002D7C)));
    Sprite_Delete(*((u32*)(r4 + (0xb6 << 6))));
    // str r1, [r4, r0]
    // str r2, [r4, r1]
    Sprite_Delete(*((u32*)(r4 + ((0xb6 << 6) + 4))), ((0xb6 << 6) - 4), *((u32*)(r4 + (0xb6 << 6))));
    Sprite_Delete(*((u32*)(r4 + 0x00002D88)));
    Sprite_Delete(*((u32*)(r4 + 0x00002D8C)));
    // str r0, [r4, r1]
    // str r2, [r4, r0]
    // sub r1, #8
    // str r0, [r4, r1]
    ov74_022359BC(*((u32*)(r4 + (0x00002D8C - 4))), 0x00002D8C, *((u32*)(r4 + 0x00002D8C)));
}




void ov74_0222ECD4(void) {
}




void ov74_0222ECEC(void) {
}




void ov74_0222ED04(void) {
    // str r3, [sp]
    ListMenuItems_Delete(*((u32*)(r0 + (0xaf << 6))));
    DestroyListMenu(*((u32*)(r5 + 0x00002BBC)), 0, 0);
    ListMenuItems_New(r7, 0x55);
    // str r0, [r5, r1]
    NewMsgDataFromNarc(0, 0x1b, 0xf7, 0x55);
    // str r0, [r5, r1]
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + (0xaf << 6))), *((u32*)(r5 + 0x00002A04)), *((u32*)r4), *((u32*)(r4 + 4)));
    // add r4, #8
    DestroyMsgData(*((u32*)(r5 + 0x00002A04)));
    // add r3, sp, #4
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #4]
    // add r0, sp, #4
    *((u16*)(*((u32*)(r5 + (0xaf << 6))) + 0x10)) = r7;
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x38]
    ListMenuInit(r3, 0, ((r3 << 0x10) >> 0x10), 0x55);
    // str r0, [r5, r1]
}




void ov74_0222EDC0(void) {
    ListMenuItems_Delete(*((u32*)(r0 + (0xaf << 6))));
    // str r1, [r4, r0]
    DestroyListMenu(*((u32*)(r4 + ((0xaf << 6) - 4))), 0, 0);
    // str r1, [r4, r0]
    // add r0, #0x18
    // add r0, r4, r0
    ov74_0222ECD4(0x00002BBC, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x00002BD4);
    // add r0, r4, r0
    RemoveWindow(0x00002BD4);
}




u8 ov74_0222EE08(void) {
}




void ov74_0222EE0C(void) {
    String_New(0x25, *((u32*)r0));
    // add r1, r2, r1
    CopyU16ArrayToStringN((0x41 << 2), 0x24);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, 1, r6, 0);
    String_Delete(r6);
}




void ov74_0222EE58(void) {
    ReadMsgData_ExpandPlaceholders(*((u32*)(r0 + (0x2a << 8))), *((u32*)(r0 + ((0x2a << 8) + 4))), 0x52, *((u32*)r0));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 1, r0, 0);
    String_Delete(r4);
}




void ov74_0222EEB0(void) {
    // add r0, sp, #8
    RTC_ConvertDayToDate(*((u32*)(*((u32*)(r0 + 0x00002BB4)) + (0xd5 << 2))), *((u32*)(r0 + 0x00002BB4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    // add r2, r3, r2
    BufferIntegerAsString(*((u32*)(r4 + (0x2a << 8))), 0, (0x7d << 4), 4);
    // str r3, [sp]
    // str r1, [sp, #4]
    // ldr r2, [sp, #0xc]
    BufferIntegerAsString(*((u32*)(r4 + (0x2a << 8))), 1, 2);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(*((u32*)(r4 + (0x2a << 8))), 2, 2);
}




void ov74_0222EF18(void) {
    String_New(0xfb, 0x55);
    // add r1, r2, r1
    CopyU16ArrayToStringN((0x55 << 2), 0xfa);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r7, 1, r6, 0);
    String_Delete(r6);
}




u8 ov74_0222EF64(void) {
}




void ov74_0222EF68(void) {
    // str r1, [sp, #0x18]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x1c]
    ClearWindowTilemapAndCopyToVram(r1, *((u32*)(ov74_0223C6D0 + 8)), *((u32*)ov74_0223C6D0));
    RemoveWindow(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x000029FC)), r6, 2, ((*((u32*)(r4 + 4)) << 0x18) >> 0x18));
    // str r0, [sp]
    // add r1, sp, #0x14
    ov74_0222ED04(r5, 2, r6);
}




void ov74_0222EFF0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, r1, 0);
    // str r0, [r4]
    // str r6, [r5, r0]
}




void ov74_0222F024(void) {
    // str r2, [sp, #0x14]
    NewMsgDataFromNarc(1, 0x1b, 0xf7, *((u32*)r0));
    // str r0, [r5, r1]
    MessageFormat_New(*((u32*)r5), 0x00002A04);
    // str r0, [r5, r1]
    // ldr r0, [sp, #0x14]
    // str r0, [r5, r1]
    // ldr r1, [sp, #0x14]
    ov74_0222F314(r5, 0x00002BB8);
    // str r0, [sp, #0x2c]
    // str r5, [sp, #0x1c]
    // add r6, r5, r0
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    ClearWindowTilemapAndCopyToVram(r6, *((u32*)r4));
    RemoveWindow(r6);
    // ldr r0, [sp, #0x1c]
    // add r7, #0x30
    // add r0, #0x10
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x2c]
    // add r6, #0x10
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x18]
    // str r5, [sp, #0x24]
    // str r5, [sp, #0x20]
    // add r6, r5, r0
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    // str r7, [r1, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 0x000029FC)), r6, 0, ((*((u32*)(r4 + 4)) << 0x18) >> 0x18));
    GetFontAttribute(((*((u32*)(r4 + 0x14)) << 0x18) >> 0x18), ((*((u32*)(r4 + 0x1c)) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r6, r0);
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x28]
    // blx r3
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + (0x2a << 8))), *((u32*)(r5 + 0x00002A04)), *((u32*)(r4 + 0x20)), *((u32*)r5));
    // str r0, [sp, #0x30]
    // ldr r2, [sp, #0x30]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, *((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x28)));
    // ldr r0, [sp, #0x30]
    String_Delete();
    CopyWindowToVram(r6);
    // add r7, r7, r0
    // ldr r0, [sp, #0x24]
    // add r4, #0x30
    // add r0, #0x10
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r6, #0x10
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    DestroyMsgData(*((u32*)(r5 + 0x00002A04)), *((u32*)(r4 + 0xc)));
    MessageFormat_Delete(*((u32*)(r5 + (0x2a << 8))));
    // ldr r0, [sp, #0x14]
    ov74_0222F478(r5);
}




void ov74_0222F1BC(void) {
    // add r4, r0, r3
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r0 + 0x000029FC)), 2, ((*((u32*)(r4 + 4)) << 0x18) >> 0x18));
    FillWindowPixelBuffer(r6, ((*((u32*)(r4 + 0x1c)) << 0x18) >> 0x18));
    NewMsgDataFromNarc(1, 0x1b, 0xf7, 0x55);
    // str r0, [r5, r1]
    MessageFormat_New(0x55, 0x00002A04);
    // str r0, [r5, r1]
    // str r7, [r5, r0]
    // str r4, [r5, r0]
    // blx r3
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + (0x2a << 8))), *((u32*)(r5 + ((0x2a << 8) + 4))), *((u32*)(r4 + 0x20)), 0x55);
    // str r0, [sp, #0x14]
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, *((u32*)(r4 + 0x14)), 0);
    // ldr r0, [sp, #0x14]
    String_Delete();
    DestroyMsgData(*((u32*)(r5 + 0x00002A04)));
    MessageFormat_Delete(*((u32*)(r5 + (0x2a << 8))));
    // add r0, r5, r0
    DrawFrameAndWindow2(r6, 0, 0x13, 0xa);
    DrawFrameAndWindow1(r6, 0, 0xa, 0xe);
    // add r0, r7, r0
}




void ov74_0222F2D4(void) {
    // str r2, [sp]
    GfGfxLoader_LoadFromNarc(0x71, 1, *((u32*)r0));
    // add r1, sp, #4
    NNS_G2dGetUnpackedScreenData();
    // ldr r2, [sp, #4]
    // add r2, #0xc
    BG_LoadScreenTilemapData(*((u32*)(r5 + 0x000029FC)), ((r4 << 0x18) >> 0x18), r6);
    Heap_Free(r7);
}




void ov74_0222F314(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x71, 7, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 0xa, *((u32*)(r5 + 0x000029FC)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 8, *((u32*)(r5 + 0x000029FC)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 9, *((u32*)(r5 + 0x000029FC)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xef
    GfGfxLoader_GXLoadPal(0x71, 0, 0, 0x71);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 1, *((u32*)(r5 + 0x000029FC)), 3);
    ov74_0222F2D4(r5, 2, 3, (3 << 9));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r5 + 0x000029FC)), 3, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r5 + 0x000029FC)), 3);
}




void ov74_0222F404(void) {
    OverlayManager_GetData();
    ListMenu_ProcessInput(*((u32*)(r0 + 0x00002BBC)), 0x00002BBC);
    // mvn r0, r0
    PlaySE(SEQ_SE_DP_SELECT);
    // blx r6
    // mvn r1, r1
    // str r0, [r5]
    PlaySE(SEQ_SE_DP_SELECT, 0);
    // str r4, [r5]
    // str r4, [r0]
    // blx r4
    // mvn r1, r1
    // str r0, [r5]
}




void ov74_0222F478(void) {
    // add r1, #8
    ov74_0223567C(*((u32*)(r0 + 0x00002D84)), 0x00002D84);
    ov74_0222EC60(r7);
    ov74_0223563C();
    ov74_02235690();
    // str r0, [sp]
    // str r0, [sp, #4]
    ov74_02235728(0x71, 0x1e, 0x1b, 0x1d);
    sub_02074490();
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x14, r0, 1, 0x60);
    // str r0, [sp, #0x10]
    // str r4, [sp, #0xc]
    // add r1, r0, r4
    // str r0, [sp, #8]
    Sprite_SetDrawFlag(*((u32*)(r7 + 0x00002D84)), 0);
    // ldr r0, [sp, #0xc]
    // add r0, #0xa
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    ov74_02235930(0, *((u32*)(r5 + 0x00002D84)), 0x10);
    // str r0, [r5, r1]
    // ldr r0, [sp, #8]
    GetMonIconNaixEx(0, 0);
    // str r0, [sp]
    // add r3, sp, #0x18
    GfGfxLoader_GetCharData(0x14, r0, 0);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    DC_FlushRange(*((u32*)(r0 + 0x14)), (2 << 8));
    // ldr r0, [sp, #0x18]
    GX_LoadOBJ(*((u32*)(r0 + 0x14)), (r6 << 5), (2 << 8));
    // ldr r0, [sp, #8]
    GetMonIconPaletteEx(0, 0);
    Sprite_SetPaletteOverride(*((u32*)(r5 + 0x00002D84)), (r0 + 3));
    // ldr r0, [sp, #0x14]
    Heap_Free();
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r0, #0x19
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r6, #0x10
}




void ov74_0222F598(void) {
    Heap_Create(3, 0x55, (3 << 0x10));
    OverlayManager_CreateAndGetData(r4, 0x00003D0C, 0x55);
    memset(0, 0x00003D0C);
    BgConfig_Alloc(0x55);
    // str r0, [r4, r1]
    // str r0, [r4]
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
    // str r1, [r4, r0]
    ov74_022352A0(0x55, 1);
    Heap_Create(0, 0x59, (0x57 << 4));
}




void ov74_0222F600(void) {
    sub_02014AA0();
    sub_02014A60(*((u32*)(r4 + (3 << 0xa))));
    sub_02014AB0(0x04000010, 8, 1);
}




void ov74_0222F624(void) {
    // add r4, r0, r4
    // str r1, [r4, r5]
    // sub r0, #0xc
    // str r2, [r4, r0]
    // sub r0, #8
    // sub r5, #0x14
    // str r3, [r4, r0]
    // add r2, r4, r2
    sub_02014A08(0x55, 0x000030E8, (6 << 8));
    // str r0, [r4, r1]
    SysTask_CreateOnVBlankQueue(ov74_0222F600, r4, (1 << 0xa));
    // str r0, [r4, r1]
    // str r1, [r4, r0]
}




void ov74_0222F688(void) {
    // add r4, r0, r1
    sub_02014A38(*((u32*)(r4 + (3 << 0xa))), 0x000030E8);
    SysTask_Destroy(*((u32*)(r4 + 0x00000C04)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    sub_02014AA0(((3 << 0xa) + 4), 0);
}




void ov74_0222F6C4(void) {
    // add r4, r0, r1
    // sub r1, #8
    // add r2, r2, r1
    // sub r1, #8
    // str r2, [r4, r1]
    // add r2, r2, r1
    // str r2, [r4, r1]
    // sub r1, #8
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r2, r1, #0xc
    // str r2, [r4, r0]
    // sub r1, #8
    // str r2, [r4, r1]
    // str r2, [r4, r0]
    // sub r1, #8
    // sub r2, r2, r1
    // sub r1, #8
    // str r2, [r4, r1]
    // add r1, r2, r1
    // asr r2, r1, #1
    // str r2, [r4, r1]
    // str r1, [r4, r0]
    // sub r2, #8
    // str r3, [r4, r2]
    // str r1, [r4, r0]
    sub_02014A4C(*((u32*)(r4 + (3 << 0xa))), 0, (1 - 4), ((1 << 0xa) << 2));
    // add r3, #0xfc
    // asr r1, r5, #0xb
    // add r1, r5, r1
    // asr r1, r1, #0xc
    // bpl _0222F782
    // add r7, r2, r6
    // sub r6, r1, r0
    *((u16*)(r7 + 6)) = (0x54 << 1);
    // sub r1, r0, r1
    *((u16*)(r7 + 2)) = *((u16*)(r7 + 6));
    // sub r6, r6, r0
    // add r6, r2, r6
    *((u16*)((0xa8 << 3) + 6)) = 0xa8;
    *((u16*)((0xa8 << 3) + 2)) = *((u16*)((0xa8 << 3) + 6));
    // add r5, r5, r1
    DC_FlushRange(r0, (6 << 8), r0, (0x54 + 4));
    sub_02014A8C(*((u32*)(r4 + (3 << 0xa))));
}




void ov74_0222F7D4(void) {
    OverlayManager_GetData();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222F7F6: ; jump table
    OverlayManager_GetArgs(r6, (*((u16*)(*((u32*)r5) + 6)) << 0x10));
    // str r1, [r4, r0]
    Save_MysteryGift_Get(*((u32*)(r4 + 0x00002BA4)), *((u32*)(r0 + 8)));
    // str r0, [r4, r1]
    Save_PlayerData_GetOptionsAddr(*((u32*)(r4 + (0x00002BA0 + 4))), 0x00002BA0);
    // str r0, [r4, r1]
    Options_GetFrame(*((u32*)(r4 + 0x00002BA8)), 0x00002BA8);
    // str r0, [r4, r1]
    // sub r1, #0xc
    SaveMysteryGift_CardGetByIdx(*((u32*)(r4 + 0x00002BAC)), 4);
    // str r0, [r4, r1]
    // str r0, [r5]
    ov74_0222FCA4(1, 0x00002BB4);
    ov74_0222FCC4(*((u32*)(r4 + 0x000029FC)));
    // str r0, [r5]
    ResetAllTextPrinters(2);
    ov74_0222F314(r4, 0);
    LoadFontPal0(0, (0x1e << 4), 0x55);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r4 + 0x000029FC)), 0, 1, 0xd);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r4 + 0x000029FC)), 0, 0xa, 0xe);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r4 + 0x000029FC)), 0, 0x13, 0xa);
    ov74_0222F024(r4, 1, 0);
    ov74_0222EFF0(r4, 1, 3, r5);
    // tst r0, r1
    PlaySE(SEQ_SE_DP_SELECT, *((u32*)(gSystem + 0x48)));
    ov74_0222EFF0(r4, 0, 0x1d, r5);
    // tst r0, r1
    PlaySE(SEQ_SE_DP_SELECT);
    // str r0, [r5]
    // add r1, r4, r1
    ov74_0222F1BC(4, 0x00002BC4, 7, (0xa << 6));
    // str r0, [r4, r3]
    // sub r1, #0x10
    // add r1, r4, r1
    ov74_0222F1BC(r4, 0x00002BE4, 8, *((u32*)(r4 + 0x00002BE4)));
    // str r0, [r5]
    ov74_0222F404(r6, r5, 0);
    // tst r0, r1
    PlaySE(SEQ_SE_DP_SELECT, *((u32*)(gSystem + 0x48)));
    // str r0, [r5]
    PlaySE(SEQ_SE_DP_CARD2);
    GfGfx_EngineATogglePlanes(0x10, 0);
    // add r0, r4, r0
    ov74_0222ECEC(0x00002BC4, 0);
    // add r0, r4, r0
    ov74_0222ECD4(0x00002BD4, 0);
    ov74_0222F624(r4, 1, (1 << 0xc), 0x66);
    // str r0, [r5]
    ov74_0222F6C4(7);
    ov74_0222F024(r4, 1, 1);
    ov74_0222F624(r4, 0, 0x00708000, (0x00708000 >> 1));
    // str r0, [r5]
    ov74_0222F6C4(8);
    // tst r0, r1
    PlaySE(SEQ_SE_DP_CARD2, *((u32*)(gSystem + 0x48)));
    ov74_0222F624(r4, 1, (1 << 0xc), 0x66);
    // str r0, [r5]
    ov74_0222F6C4(9);
    ov74_0222F024(r4, 1, 0);
    ov74_0222F624(r4, 0, 0x00708000, (0x00708000 >> 1));
    GfGfx_EngineATogglePlanes(0x10, 0);
    // str r0, [r5]
    ov74_0222F6C4(0xa);
    // add r0, r4, r0
    DrawFrameAndWindow2(0x00002BC4, 0, 0x13, 0xa);
    // add r0, r4, r0
    DrawFrameAndWindow1(0x00002BD4, 0, 0xa, 0xe);
    GfGfx_EngineATogglePlanes(0x10, 1);
    ov74_0222F688(r4);
    // str r0, [r5]
    ov74_0222EDC0(5);
    // add r0, r4, r0
    ov74_0222ECEC(0x00002BC4, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x00002BC4);
    // add r0, r4, r0
    RemoveWindow(0x00002BC4);
    // str r0, [r5]
    ov74_0222EFF0(3, 0, 0x15, r5);
    ov74_0222EC60();
    // add r0, r4, r0
    ov74_0222ECEC(0x00002BC4, 0);
    // add r0, r4, r0
    ov74_0222ECD4(0x00002BD4, 0);
    ov74_0222F024(r4, 1, 0);
    LoadFontPal0(0, (0x1e << 4), 0x55);
    ov74_0222EFF0(r4, 1, 4, r5);
    sub_02037D78();
    // str r0, [r5]
    // tst r0, r1
    // add r0, r4, r0
    ov74_0222ECEC(0x00002BC4, 0);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x00002BC4);
    // add r0, r4, r0
    RemoveWindow(0x00002BC4);
    // str r0, [r5]
    ov74_0222EFF0(3, 0, 0x1d, r5);
    IsPaletteFadeFinished();
    // str r0, [r5]
    ov74_0222EC60(*((u32*)(r4 + 0x00002BF8)));
    ov74_0222F688(r4);
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x00002BFC)));
    ov74_022358BC();
    // blx r1
}




void ov74_0222FB8C(void) {
    // str r0, [sp]
    OverlayManager_GetData();
    // add r5, r7, r0
    ClearWindowTilemapAndCopyToVram(r5);
    RemoveWindow(r5);
    // add r4, #0x10
    // add r5, #0x10
    // add r0, r7, r0
    ClearWindowTilemapAndCopyToVram(0x00002BC4, *((u32*)(r7 + 0x00002BC4)));
    // add r0, r7, r0
    RemoveWindow(0x00002BC4);
    // add r0, r7, r0
    ClearWindowTilemapAndCopyToVram(0x00002BD4, *((u32*)(r7 + 0x00002BD4)));
    // add r0, r7, r0
    RemoveWindow(0x00002BD4);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x000029FC)), 0);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x000029FC)), 1);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x000029FC)), 2);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x000029FC)), 3);
    Heap_Free(*((u32*)(r7 + 0x000029FC)));
    RegisterMainOverlay(FS_OVERLAY_ID, gApp_MainMenu_SelectOption_MysteryGift);
    Heap_Destroy(0x59);
    // ldr r0, [sp]
    OverlayManager_FreeData();
    Heap_Destroy(0x55);
}




void ov74_0222FC50(void) {
    ov74_0222FCC4();
    Heap_AllocAtEnd(r5, 0x00003D0C);
    memset(0, 0x00003D0C);
    // str r6, [r4, r0]
    // str r5, [r4]
    LoadFontPal0(0, (0x1e << 4), r5);
    // str r7, [r4, r0]
    ov74_0222F024(r4, 1, 0);
    Heap_Free(r4);
}




void ov74_0222FCA4(void) {
}




void ov74_0222FCC4(void) {
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
}




void ov74_0222FD98(void) {
    // TODO: decompile
}




void ov74_0222FE4C(void) {
}




void ov74_0222FE5C(void) {
}




void ov74_0222FE68(void) {
}




void ov74_0222FE78(void) {
}




void ov74_0222FEA0(void) {
    // add r0, #0xc
}




void ov74_0222FEC8(void) {
    ov74_0223115C();
    // add r1, #0x62
    // tst r1, r2
    // add r1, #0x62
    // add r0, #0x62
    // strh r3, [r0]
    // tst r2, r1
    // add r1, #0x62
    // add r0, #0x62
    // strh r2, [r0]
    // tst r1, r3
    // add r1, #0x62
    // add r0, #0x62
    // and r1, r2
    // strh r1, [r0]
}




void ov74_0222FF28(void) {
    // add r0, #0x60
    // strb r1, [r0]
    // add r1, #0x62
    // strh r0, [r1]
    // add r0, #0x62
    // add r0, #0x61
    // strb r1, [r0]
    // add r4, #0x64
    // strb r0, [r4]
}




void ov74_0222FF68(void) {
}




void ov74_0222FF80(void) {
}




void ov74_0222FFAC(void) {
    // mov ip, r2
    // sub r5, r5, r6
    // ror r5, r4
    // add r5, r6, r5
    // lsl r6, r5
    // tst r5, r6
    // mov r0, ip
    // add r0, r0, r1
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}




void ov74_0222FFFC(void) {
}




void ov74_02230018(void) {
}




void ov74_02230030(void) {
}




void ov74_02230070(void) {
}




void ov74_022300A8(void) {
    // add r0, #0x61
    // add r0, #0x61
    // strb r1, [r0]
    // add r0, #0x64
    // strb r1, [r0]
    // add r4, #0x61
}




void ov74_02230110(void) {
}




void ov74_02230138(void) {
    // add r0, #0x60
    // add r0, #0x60
    // strb r1, [r0]
    // add r4, #0x60
    // add r4, #0x14
    // add r0, #0xa
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xa
    // add r1, sp, #0
    // strh r0, [r1]
    // ldr r2, [sp, #8]
    // add r1, r4, r1
    // str r2, [r4, r1]
    // add r0, sp, #0
    // add r1, r4, r1
    // add r3, #0xc
}




void ov74_0223026C(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, sp, #4
    // strh r0, [r2]
    // ldr r6, [sp, #0xc]
    // add r5, #0x34
    // ldr r0, [sp, #0xc]
    // str r0, [r7, r1]
    // add r0, r7, r1
    // add r5, #0x58
    // strh r0, [r3]
    // add r3, r7, r1
    // add r4, #0x70
    // add r3, #0x1c
    // strh r0, [r3]
    // add r0, sp, #4
    // add r1, r7, r1
    // ldr r0, [sp]
    // add r1, #0x36
    // strb r0, [r1]
    // add r1, #0x38
}




void ov74_0223030C(void) {
}




void ov74_02230320(void) {
    ov74_02231100();
    ov74_02231154();
    ov74_0222FE78();
    // add r3, #0x38
    ov74_0223161C(*((u16*)(r5 + (7 << 6))), 1, (0 + 1), r5);
    ov74_0222FE4C();
    DC_InvalidateRange(r4, 0xc0);
    ov74_02231154();
    ov74_02231454();
    ov74_022311A0(*((u16*)(r6 + 0x36)));
    // add r5, #0x50
    ov74_022311AC(*((u32*)(r4 + 0x44)));
    ov74_022311BC(((*((u32*)(r4 + 0x50)) << 0x18) >> 0x18));
    ov74_022311CC(((*((u32*)r5) << 0x14) >> 0x1c));
    ov74_0223026C(r6, r4);
    ov74_02231154();
    // strb r2, [r0, r1]
    ov74_0223161C(*((u8*)(r0 + 0x000001C2)), 0x000001C2, (*((u8*)(r0 + 0x000001C2)) + 1));
    ov74_0222FE4C();
    ov74_0223161C(1);
    ov74_0222FE4C();
}




void ov74_02230404(void) {
    ov74_0223144C(*((u16*)(r0 + 8)));
    ov74_02231100(*((u16*)(r4 + 2)));
    ov74_02231450();
    ov74_02231070(6);
    ov74_0222FE78();
    ov74_02231094();
    ov74_02231154();
    // strb r1, [r0, r2]
    ov74_02230320(r4, (0x10 | (*((u8*)(r0 + 0x000001C3)) & ~(0xf0))), 0x000001C3, (*((u8*)(r0 + 0x000001C3)) & ~(0xf0)));
    ov74_0223030C();
    ov74_02231448(*((u16*)(r4 + 2)));
    ov74_0222FE4C();
    ov74_02231448();
    ov74_0222FE4C();
}




void ov74_02230478(void) {
    ov74_02231100();
    ov74_02231154();
    ov74_02231054();
    ov74_0222FE78();
    DC_InvalidateRange(r4, 0xc0);
    ov74_02231154();
    ov74_02231454();
    ov74_022311A0(*((u16*)(r4 + 0x3c)));
    // add r5, #0x50
    ov74_022311AC(*((u32*)(r4 + 0x44)));
    ov74_022311BC(((*((u32*)(r4 + 0x50)) << 0x18) >> 0x18));
    ov74_022311CC(((*((u32*)r5) << 0x14) >> 0x1c));
    ov74_0222FE5C((r4 + 4), (*((u32*)(r5 + 4)) >> 0x10));
    // str r0, [sp]
    // str r0, [sp, #4]
    ov74_0223161C(*((u32*)(r6 + (0x38 * ((*((u8*)(r6 + 0x000001C3)) << 0x1c) >> 0x1c)))), ((*((u8*)(r6 + 0x000001C3)) << 0x1c) >> 0x1c));
    ov74_0222FE4C();
}




void ov74_02230520(void) {
    ov74_0223144C(*((u16*)(r0 + 8)));
    ov74_02231154(*((u16*)(r4 + 2)));
    // strb r1, [r0, r2]
    ov74_02231070(6, (0x20 | (*((u8*)(r0 + 0x000001C3)) & ~(0xf0))), 0x000001C3, (*((u8*)(r0 + 0x000001C3)) & ~(0xf0)));
    ov74_0222FE78();
    ov74_02230478(*((u16*)(r4 + 8)));
    ov74_0222FFAC();
    ov74_02231584();
    ov74_0222FE4C();
    ov74_02231448(*((u16*)(r4 + 2)));
    ov74_0222FE4C();
    ov74_02231448();
    ov74_0222FE4C();
}




void ov74_02230590(void) {
    ov74_02231070(7);
    ov74_0222FE78();
    ov74_02231094();
    ov74_02231154();
    ov74_02231638(((*((u8*)(r0 + 0x000001C3)) << 0x18) >> 0x1c), 0x000001C3);
    ov74_0222FE4C();
    ov74_02231070(3);
    ov74_02231448();
    ov74_0222FE4C();
}




void ov74_022305E4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02230614: ; jump table
}




void ov74_02230674(void) {
    // add r0, #0x60
    // strb r1, [r0]
}




void ov74_022306C8(void) {
    // ldrh r0, [r4]
}




void ov74_02230714(void) {
}




void ov74_0223078C(void) {
    // add r1, r0, r1
    // add r3, #0xc
}




void ov74_02230818(void) {
    ov74_02231184();
    ov74_0223078C(r6);
    DC_FlushRange(*((u32*)(r6 + 0xc)), *((u16*)(r6 + 0x10)));
    MI_CpuCopy8(*((u32*)(r6 + 0xc)), *((u32*)(r4 + 0xc)), *((u16*)(r6 + 0x10)));
    ov74_022311AC();
    ov74_022311BC(((*((u32*)r5) << 0x18) >> 0x18));
    ov74_022313F0(*((u32*)(r4 + 0xc)), ((*((u32*)r5) << 0x14) >> 0x1c));
    ov74_0223145C(*((u32*)(r4 + 0xc)), ((*((u32*)(r5 + 8)) << 0x18) >> 0x18));
    *((u8*)(r4 + 0x19)) = 0;
    ov74_02231424(*((u32*)(r4 + 0xc)));
    ov74_0223078C(r6);
    // add r0, r1, r0
    MI_CpuCopy8(((*((u32*)(r5 + 0xc)) << 0x18) >> 0x18), *((u32*)(r4 + 4)), (*((u32*)(r5 + 0xc)) >> 8));
    // and r0, r1
    *((u32*)(r5 + 8)) = 0xFFFF00FF;
    *((u8*)(r4 + 0x1b)) = 4;
    // and r1, r0
    *((u32*)(r5 + 8)) = ((1 << 8) | *((u32*)(r5 + 8)));
}




void ov74_022308E0(void) {
}




void ov74_02230964(void) {
}




void ov74_02230988(void) {
}




void ov74_022309AC(void) {
}




void ov74_022309F0(void) {
}




void ov74_02230A14(void) {
    WM_SetIndCallback(ov74_0222FFFC);
    ov74_02231070(4);
}




void ov74_02230A34(void) {
}




void ov74_02230A4C(void) {
}




void ov74_02230A74(void) {
}




void ov74_02230A7C(void) {
}




void ov74_02230A84(void) {
    ov74_02231054();
    ov74_0223105C();
    // and r1, r0
    // sub r0, r0, r1
    // add r7, r7, r0
    // strb r1, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 4;
    *((u32*)(r0 + 4)) = 0x00400131;
    *((u16*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 0x34)) = r7;
    // add r7, r7, r0
    *((u32*)(r0 + 0x38)) = r7;
    ov74_02230A74((0xf << 8), 0);
    *((u32*)(r4 + 0x2c)) = r0;
    // add r7, r7, r0
    *((u32*)(r4 + 0x3c)) = r7;
    ov74_02230A7C();
    // add r7, r7, r0
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x28)) = r7;
    // add r0, #0xc0
    *((u32*)(r4 + 0x24)) = r7;
    // add r7, #0xe0
    WM_Init(*((u32*)(r4 + 0x34)), 2);
    ov74_02230A14();
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 0x14)) = 0;
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x20)) = 0;
    // add r1, #0xf1
    // and r0, r3
    // and r1, r0
    *((u32*)(r4 + 0x40)) = ((1 << 0xc) | (0xf | 0xFFFFF0FF));
    *((u32*)(r4 + 0x44)) = (((((*((u32*)r5) << 0x18) >> 0x18) << 0x18) >> 0x18) | (*((u32*)(r4 + 0x44)) & ~(0xff)));
    // and r1, r3
    // add r0, #0x44
    *((u32*)(r4 + 0x44)) = (((((*((u32*)r5) << 0x14) >> 0x1c) << 0x1c) >> 0x14) | 0xFFFFF0FF);
    // and r1, r3
    *((u32*)(r4 + 0x44)) = (0xFFFF0FFF | ((((*((u32*)r5) << 0x10) >> 0x1c) << 0x1c) >> 0x10));
    // str r1, [r0]
    // add r5, #0x48
    // strh r6, [r5]
    // add r5, #0x60
    // strh r6, [r5]
    *((u32*)(r4 + 0x78)) = *((u32*)(r4 + 0x40));
    *((u32*)(r4 + 0x7c)) = *((u32*)(r4 + 0x44));
    ov74_02231194(*((u32*)(r4 + 0x44)), *((u32*)(r4 + 0x40)), (0 + 1), (r4 + 2));
    ov74_02231184();
    *((u32*)(r0 + 8)) = r7;
    // add r7, r7, r0
    ov74_02231184(*((u32*)(r4 + 0x2c)));
    *((u32*)(r0 + 0xc)) = r7;
    WM_GetNextTgid();
}




void ov74_02230BB4(void) {
    ov74_02231184();
    *((u8*)(r0 + 0x1a)) = (*((u8*)(r0 + 0x1a)) - 1);
    *((u8*)(r0 + 0x19)) = 0;
    ov74_02231260(*((u8*)(r0 + 0x19)));
    // sub r5, r1, r0
    // str r0, [sp]
    ov74_022312C0(*((u32*)(r4 + 8)), *((u32*)(r4 + 4)), r5, 3);
    ov74_02231260();
    // add r1, r5, r1
    ov74_02230A4C(*((u32*)(r4 + 8)), r0, 0x0000FFFF);
    *((u8*)(r4 + 0x19)) = 1;
    *((u8*)(r4 + 0x1a)) = 0x3c;
}




void ov74_02230C10(void) {
    ov74_02231184();
    ov74_0223115C(*((u8*)(r0 + 0x1c)));
    // add r0, r5, r6
    // lsl r1, r0
    // str r0, [sp]
    ov74_022312C0(*((u32*)(r4 + 8)), *((u32*)(r4 + 4)), 0, 0);
    ov74_02231260();
    ov74_02230A4C(*((u32*)(r4 + 8)), r0, r7);
    // add r5, #9
    // strb r0, [r5, r6]
    // add r2, #0xc
    *((u8*)(r4 + 0x1a)) = (*((u8*)(r4 + 0x1a)) - 1);
    *((u8*)(r4 + 0x19)) = 2;
    ov74_02231260(2, (r1 + 1));
    ov74_02230A74();
    *((u8*)(r4 + 0x19)) = 2;
    *((u8*)(r4 + 0x1b)) = (2 - 1);
    // str r0, [sp]
    ov74_022312C0(*((u32*)(r4 + 8)), *((u32*)(r4 + 4)), 0, ((*((u32*)(*((u32*)(r4 + 0xc)) + 8)) << 0x10) >> 0x18));
    ov74_02231260();
    ov74_02230A4C(*((u32*)(r4 + 8)), r0, 0x0000FFFF);
}




void ov74_02230CCC(void) {
}




void ov74_02230CEC(void) {
    // strh r1, [r4, r0]
}




void ov74_02230D18(void) {
}




void ov74_02230D28(void) {
}




void ov74_02230D6C(void) {
}




void ov74_02230D80(void) {
    ov74_02231094();
    ov74_02231154();
    // add r0, #0x38
}




void ov74_02230DB8(void) {
    ov74_02231094();
    ov74_02231064();
    ov74_02231154();
}




void ov74_02230DF4(void) {
    ov74_02231094();
    ov74_02231064();
    ov74_02231154();
    // and r4, r5
    // strb r3, [r0, r2]
    // strh r2, [r0, r1]
    ov74_02231584((0x38 << 3), 0x78, ((*((u8*)(r0 + 0x000001C3)) & ~(0xf)) | 0xf));
}




void ov74_02230E44(void) {
    // add r1, #0x60
    // add r0, #0xc
}




void ov74_02230E7C(void) {
}




void ov74_02230E94(void) {
}




void ov74_02230EB4(void) {
    // add r4, #8
    // str r4, [r5]
}




void ov74_02230EE8(void) {
}




void ov74_02230F14(void) {
    // str r5, [r0]
}




void ov74_02230F40(void) {
}




void ov74_02230F6C(void) {
}




void ov74_02230F98(void) {
}




void ov74_02230FD4(void) {
    // add r0, #0xc
}




void ov74_02231008(void) {
}




void ov74_02231048(void) {
}




void ov74_02231054(void) {
    // ldr r0, _02231058 ; =ov74_0223C920
    // bx lr
    // _02231058: .word ov74_0223C920
    // TODO: decompile
}




void ov74_0223105C(void) {
    // ldr r0, _02231060 ; =ov74_0223D0C4
    // bx lr
    // _02231060: .word ov74_0223D0C4
    // TODO: decompile
}




void ov74_02231064(void) {
}




void ov74_02231070(void) {
}




void ov74_0223107C(void) {
}




void ov74_02231088(void) {
}




void ov74_02231094(void) {
}




void ov74_022310A0(void) {
}




void ov74_022310AC(void) {
}




void ov74_022310B8(void) {
}




void ov74_022310C4(void) {
}




void ov74_022310D0(void) {
}




void ov74_022310DC(void) {
}




void ov74_022310E8(void) {
}




void ov74_022310F4(void) {
}




void ov74_02231100(void) {
}




void ov74_0223110C(void) {
}




void ov74_02231118(void) {
}




void ov74_02231124(void) {
}




void ov74_02231130(void) {
}




void ov74_0223113C(void) {
}




void ov74_02231148(void) {
}




void ov74_02231154(void) {
}




void ov74_0223115C(void) {
}




void ov74_02231164(void) {
    // add r0, #0xa8
    // strh r1, [r4, r0]
}




void ov74_02231184(void) {
}




void ov74_02231194(void) {
}




void ov74_022311A0(void) {
}




void ov74_022311AC(void) {
}




void ov74_022311BC(void) {
}




void ov74_022311CC(void) {
}




u8 ov74_022311D8(void) {
}




void ov74_022311DC(void) {
}




void ov74_022311E8(void) {
}




void ov74_022311F4(void) {
    // str r2, [sp]
    // add r3, sp, #0
    // add r1, r0, r2
    // strb r1, [r3]
    // ldr r0, [sp]
}




void ov74_02231214(void) {
    // add r1, sp, #0
    // strh r2, [r1]
    // add r3, sp, #0
    // strb r1, [r3]
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
}




void ov74_02231238(void) {
    _u32_div_f(0x00002710);
    // str r1, [r5]
    _u32_div_f(r6, 0x00002710);
    _u32_div_f(0x00002710);
    // str r1, [r4]
}




u8 ov74_02231260(void) {
}




void ov74_02231264(void) {
}




void ov74_0223127C(void) {
    // add r3, r5, r3
    // add r3, r6, r4
    // eor r5, r6
    // stmia r2!, {r5}
}




void ov74_022312C0(void) {
    // str r3, [sp]
    ov74_022311DC();
    // str r1, [r5]
    // and r0, r1
    // str r1, [r5]
    // and r0, r1
    // str r0, [r5]
    ov74_02231264((0xFFFF0FFF | ((((*((u32*)r0) << 0x10) >> 0x1c) << 0x1c) >> 0x10)), ((((*((u32*)r0) << 0x10) >> 0x1c) << 0x1c) >> 0x10));
    // str r0, [r5]
    *((u32*)(r5 + 4)) = (((((*((u32*)(r4 + 4)) << 0x18) >> 0x18) << 0x18) >> 0x18) | (*((u32*)(r5 + 4)) & ~(0xff)));
    // and r1, r2
    *((u32*)(r5 + 4)) = (((((*((u32*)(r4 + 4)) << 0x14) >> 0x1c) << 0x1c) >> 0x14) | 0xFFFFF0FF);
    // and r1, r2
    *((u32*)(r5 + 4)) = (((0xFFFF0FFF | ((((*((u32*)(r4 + 4)) << 0x10) >> 0x1c) << 0x1c) >> 0x10)) << 0x10) >> 0x10);
    // ldr r0, [sp, #0x18]
    // and r0, r1
    // ldr r1, [sp]
    *((u32*)(r5 + 8)) = (0xFFFF00FF | ((((*((u32*)(r5 + 8)) & ~(0xff)) | ((((0xff << 0x18) >> 0x18) << 0x18) >> 0x18)) << 0x18) >> 0x10));
    SVC_GetCRC16(0, r7, r6);
    *((u32*)(r5 + 8)) = ((r0 << 0x10) | ((*((u32*)(r5 + 8)) << 0x10) >> 0x10));
    ov74_02231260(((r0 << 0x10) | ((*((u32*)(r5 + 8)) << 0x10) >> 0x10)), ((*((u32*)(r5 + 8)) << 0x10) >> 0x10));
    *((u32*)(r5 + 0xc)) = ((r6 << 8) | (((((((r0 << 0x18) >> 0x18) << 0x18) >> 0x18) | (*((u32*)(r5 + 0xc)) & ~(0xff))) << 0x18) >> 0x18));
    // add r1, r5, r1
    MI_CpuCopy8(r7, ((*((u32*)(r5 + 0xc)) << 0x18) >> 0x18), r6);
    ov74_0223145C(r5);
    // add r1, r6, r1
    ov74_0223127C((*((u32*)r5) >> 0x10), (((*((u32*)(r5 + 0xc)) << 0x18) >> 0x18) - 4), (r5 + 4));
}




void ov74_022313F0(void) {
    // add r4, #0x10
    // add r1, r2, r1
    // sub r1, #0x10
}




void ov74_02231424(void) {
    // add r1, r4, r1
}




void ov74_02231448(void) {
    // bx lr
    // TODO: decompile
}




void ov74_0223144C(void) {
    // bx lr
    // TODO: decompile
}




void ov74_02231450(void) {
    // bx lr
    // TODO: decompile
}




void ov74_02231454(void) {
    // bx lr
    // TODO: decompile
}




void ov74_02231458(void) {
    // bx lr
    // TODO: decompile
}




void ov74_0223145C(void) {
    // bx lr
    // TODO: decompile
}




void ov74_02231460(void) {
    ov74_022310AC();
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    WM_SetMPDataToPortEx(ov74_02230018, 0, r6, ((r5 << 0x10) >> 0x10));
    ov74_02231448();
}




void ov74_022314A0(void) {
    WM_Enable(ov74_02230030);
    ov74_02231448();
}




void ov74_022314BC(void) {
    WM_Disable(ov74_02230070);
    ov74_02231448();
    OS_Terminate();
}




void ov74_022314DC(void) {
    // str r0, [sp]
    WM_MeasureChannel(ov74_022300A8, 3, 0x11, ((r0 << 0x10) >> 0x10));
    ov74_02231448();
}




void ov74_02231508(void) {
    ov74_02231054();
    ov74_022311DC();
    ov74_0223115C();
    // add r0, #0x64
    *((u16*)(r5 + 0x32)) = *((u8*)r0);
    // str r4, [r5]
    ov74_022311D8(*((u8*)r0));
    *((u16*)(r5 + 4)) = r0;
    WM_SetParentParameter(ov74_02230110, r5);
    ov74_02231448();
}




void ov74_02231544(void) {
    WM_StartParent(ov74_02230138);
    ov74_02231448();
}




void ov74_02231560(void) {
    ov74_022310C4();
    WM_StartScan(ov74_02230404, r0);
    ov74_02231448();
}




void ov74_02231584(void) {
    ov74_022310C4();
    ov74_02231154();
    // add r1, r0, r5
    // add r1, #0x34
    *((u8*)(r4 + 8)) = *((u8*)((*((u8*)(r0 + 0x000001C3)) << 0x1c) >> 0x1c));
    // add r1, r0, r5
    // add r1, #0x35
    *((u8*)(r4 + 9)) = *((u8*)((*((u8*)(r0 + 0x000001C3)) << 0x1c) >> 0x1c));
    *((u8*)(r4 + 0xa)) = *((u8*)(r0 + (((*((u8*)(r0 + 0x000001C3)) << 0x1c) >> 0x1c) * 0x38)));
    // add r1, r0, r5
    *((u8*)(r4 + 0xb)) = *((u8*)(((*((u8*)(r0 + 0x000001C3)) << 0x1c) >> 0x1c) + 1));
    // add r1, r0, r5
    *((u8*)(r4 + 0xc)) = *((u8*)(((*((u8*)(r0 + 0x000001C3)) << 0x1c) >> 0x1c) + 2));
    // add r0, r0, r2
    *((u8*)(r4 + 0xd)) = *((u8*)(r0 + 3));
    ov74_022310C4(*((u8*)(r0 + 3)), ((*((u8*)(r0 + 0x000001C3)) << 0x1c) >> 0x1c), (((*((u8*)(r0 + 0x000001C3)) << 0x1c) >> 0x1c) * 0x38), 0x38);
    WM_StartScan(ov74_02230520, r0);
    ov74_02231448();
}




void ov74_0223161C(void) {
    WM_EndScan(ov74_02230590);
    ov74_02231448();
}




void ov74_02231638(void) {
    ov74_022311E8();
    ov74_02231100();
    // str r0, [sp]
    WM_StartConnectEx(ov74_022305E4, r0, r4, 1);
    ov74_02231448();
}




void ov74_02231670(void) {
    WM_SetPortCallback(4, ov74_022308E0, 0);
    ov74_02231448();
    ov74_02231054(0);
    ov74_022310F4(*((u16*)(r0 + 0x16)));
    ov74_022310DC();
    ov74_022310E8();
    ov74_022310D0();
    // str r0, [sp]
    // str r0, [sp, #4]
    WM_StartMP(ov74_022306C8, r6, ((r4 << 0x10) >> 0x10), r7);
    ov74_02231448();
}




void ov74_022316E8(void) {
    WM_PowerOn(ov74_02230964);
    ov74_02231448();
}




void ov74_02231704(void) {
    WM_PowerOff(ov74_02230988);
    ov74_02231448();
    OS_Terminate();
}




void ov74_02231724(void) {
    WM_Reset(ov74_022309AC);
    ov74_02231448();
    OS_Terminate();
}




void ov74_02231744(void) {
    WM_End(ov74_022309F0);
    ov74_02231448();
    OS_Terminate();
}




void ov74_02231764(void) {
    // add r1, #0x86
}




void ov74_02231790(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022317A8: ; jump table
    // mov r0, #VERSION_RUBY
    // str r0, [r4]
    // mov r0, #VERSION_SAPPHIRE
    // str r0, [r4]
    // mov r0, #VERSION_LEAFGREEN
    // str r0, [r4]
    // mov r0, #VERSION_FIRERED
    // str r0, [r4]
    // mov r0, #VERSION_EMERALD
    // str r0, [r4]
    // mvn r0, r0
    // str r0, [r4]
}




void ov74_022317D8(void) {
    // add r4, r5, r1
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022317F6: ; jump table
    ov74_0223195C((*((u16*)(*((u32*)r4) + 6)) << 0x10));
    Save_MigratedPokemon_Get(*((u32*)(r5 + 0x10)));
    ov74_02233F68();
    MigratedPokemon_RecordMigration(r5, r0);
    // str r0, [r4]
    OS_GetTick((*((u32*)r4) + 1));
    _ull_mod(0x78, 0);
    *((u32*)(r4 + 4)) = (r0 + 1);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) - 1);
    // str r0, [r4]
    Save_PrepareForAsyncWrite(*((u32*)(r5 + 0x10)), 2);
    // str r0, [r4]
    Save_WriteFileAsync(*((u32*)(r5 + 0x10)));
    // str r0, [r4]
    // add r2, sp, #0
    CTRDG_ReadAgbFlash(0, 0, 0x10);
    // str r0, [r4]
    ov74_02233E8C((*((u32*)r4) + 1));
    Sys_ClearSleepDisableFlag(1);
    // str r0, [r4]
    ov74_02233F14((*((u32*)r4) + 1));
    ov74_02233F14();
    // str r0, [r4]
    ov74_02233ED4((*((u32*)r4) + 1));
    Sys_ClearSleepDisableFlag(1);
    Save_WriteFileAsync(*((u32*)(r5 + 0x10)));
    ov74_02233ED4(0xc);
    Sys_SetSleepDisableFlag(1);
    // str r0, [r4]
    ov74_02233ED4((*((u32*)r4) + 1));
    Sys_ClearSleepDisableFlag(1);
    Sys_ClearSleepDisableFlag(1);
}




void ov74_02231930(void) {
}




void ov74_0223195C(void) {
    Save_MigratedPokemon_Get(*((u32*)(r0 + 0x10)));
    // str r0, [sp]
    // add r0, sp, #8
    Mon_GetBoxMon();
    // add r0, r0, r1
    // add r0, r0, r1
    MigrateBoxMon((*((u32*)(r7 + 0x0000E880)) + 4), r0, *((u32*)(r7 + (0xf3 << 2))));
    // ldr r0, [sp]
    MigratedPokemon_CopyBoxPokemonToSlot(r6, r4);
    // add r5, #0xc
    // add r0, sp, #4
    // strh r5, [r0]
    // add r0, r0, r3
    // add r0, r0, r1
    // add r2, sp, #4
    ov74_022348B0((*((u32*)(r7 + 0x0000E880)) + 4), 0xb, *((u32*)(r7 + (0xf3 << 2))), ((0x96 << 4) * *((u32*)(r7 + ((0xf3 << 2) + 4)))));
    // add r4, #0xc
}




void ov74_022319F8(void) {
    // tst r2, r0
    // sub r1, r1, r0
    // add r0, r1, r0
    // asr r0, r0, #1
}




void ov74_02231A1C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r0 + 0x20)), *((u32*)r1), ((*((u32*)(r1 + 0x24)) << 0x18) >> 0x18), ((*((u32*)(r1 + 8)) << 0x18) >> 0x18));
    // tst r0, r4
    FillWindowPixelBuffer(*((u32*)r5), ((*((u32*)(r5 + 0x30)) << 0x18) >> 0x18));
    // mvn r0, r0
    NewMsgDataFromNarc(1, 0x1b, 0x0000012D, 0x4c);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    MessageFormat_New(0x4c);
    // str r0, [sp, #0x14]
    String_SetEmpty(*((u32*)(r6 + 0x00012608)));
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    NewString_ReadMsgData(*((u32*)(r6 + 0x00012608)), *((u32*)(r5 + 0x34)));
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x20]
    StringExpandPlaceholders(*((u32*)(r6 + 0x00012608)));
    // ldr r0, [sp, #0x20]
    String_Delete();
    // ldr r1, [sp, #0x1c]
    ov74_022319F8(r5, r4);
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)r5), *((u32*)(r5 + 0x28)), r0);
    *((u32*)(r5 + 0x48)) = r0;
    // ldr r0, [sp, #0x14]
    MessageFormat_Delete(*((u32*)(r5 + 0x40)));
    // ldr r0, [sp, #0x18]
    DestroyMsgData();
    // mvn r0, r0
    *((u32*)(r5 + 0x34)) = 0;
    CopyU16ArrayToStringN(*((u32*)(r6 + 0x0001260C)), *((u32*)(r5 + 0x38)), 0x40);
    ov74_022319F8(r5, r6, r4);
    // str r0, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)r5), *((u32*)(r5 + 0x28)), r6, r0);
    *((u32*)(r5 + 0x48)) = r0;
    *((u32*)(r5 + 0x38)) = 0;
    ov74_022319F8(r5, *((u32*)(r5 + 0x3c)), r4);
    // str r0, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)r5), *((u32*)(r5 + 0x28)), *((u32*)(r5 + 0x3c)), r0);
    *((u32*)(r5 + 0x48)) = r0;
    *((u32*)(r5 + 0x3c)) = 0;
    // tst r0, r4
    CopyWindowToVram(*((u32*)r5));
    // tst r0, r4
    // tst r0, r4
    DrawFrameAndWindow2(*((u32*)r5), 0, 0x000003D2, 0xd);
    DrawFrameAndWindow1(0, (0x3f << 4), 0xe);
}




void ov74_02231BC0(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(0x14, 0x4c);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov74_02231BF0(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r1, #0x2c
    // add r0, #0x2c
    // str r0, [r5, r7]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r6, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r1, #0x14
    // str r0, [sp, #0xc]
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x14
    // str r0, [sp, #8]
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #0x14
    // str r0, [sp, #8]
    // str r0, [r6, r1]
    // sub r1, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0xff
}




void ov74_02231CFC(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // str r2, [sp, #0x1c]
    // add r2, #0xc
    // add r3, #0x30
    // str r2, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, r0, r3
    // str r1, [sp, #0x28]
}




void ov74_02231D48(void) {
    // str r2, [r0]
    // add r1, r1, r2
}




void ov74_02231D70(void) {
    // add r1, r3, r0
    // add r0, r1, r0
}




void ov74_02231D94(void) {
    // add r1, r3, r0
    // add r0, r1, r0
}




void ov74_02231DB8(void) {
    // add r1, r3, r0
    // add r0, r1, r0
}




void ov74_02231DDC(void) {
    // ldr r5, [sp, #8]
    // add r4, r5, r4
    // asr r4, r4, #1
    // sub r5, r2, r4
    // strb r5, [r0]
    // add r5, r3, r5
    // asr r5, r5, #1
    // sub r3, r1, r5
    // add r2, r2, r4
    // add r1, r1, r5
}




void ov74_02231E00(void) {
}




void ov74_02231E38(void) {
}




void ov74_02231E54(void) {
    // and r0, r3
    // and r2, r4
    // and r0, r3
    // and r3, r4
    _u32_div_f((((((3 << 0x18) >> 0x12) | (r1 >> 0xc)) | ((3 << 8) >> 6)) | r1), 0x1c, r1, (r1 >> 0xc));
    // add r0, r2, r2
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231EA0: ; jump table
}




void ov74_02231EC4(void) {
    // add r2, sp, #0
    // ldr r0, [sp]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp]
    // add r1, #0x64
    // ldr r0, [sp, #0x1c]
    // add r1, #8
}




void ov74_02231F30(void) {
    // str r2, [sp]
    // add r4, r2, r1
    // ldr r1, [sp, #0x20]
    ov74_02231764(((0x83 << 2) * r3), *((u32*)ov74_0223D338));
    TranslateAgbSpecies(r6);
    // ldr r2, [sp]
    GetMonIconNaixEx(0, r7);
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    // add r1, sp, #4
    ov74_02231E38();
    // ldr r0, [sp, #4]
    // add r1, #0xc
    MIi_CpuCopyFast(*((u32*)(r0 + 0x14)), r4, (2 << 8));
    // add r0, #0x64
    // str r0, [r4]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp]
    *((u32*)(r4 + 8)) = ((r5 << 4) << 5);
    GetMonIconPaletteEx(r6, r7);
    // add r0, #8
    *((u32*)(r4 + 4)) = r0;
    *((u32*)(r4 + 8)) = 0;
}




void ov74_02231FB0(void) {
    // add r7, #0xc
    // add r0, #0xc
    DC_FlushRange(*((u32*)ov74_0223D338), (2 << 8));
    // add r0, #0xc
    GX_LoadOBJ(r5, *((u32*)r5), r6);
    Sprite_SetPaletteOverride(*((u32*)(r5 + 8)), *((u32*)(r5 + 4)));
    // add r5, r5, r7
}




void ov74_02231FF4(void) {
    NARC_New(0x14, 0x4c);
    // str r0, [sp, #0x10]
    Heap_AllocAtEnd(0x4c, (1 << 0xc));
    // str r0, [sp, #0x14]
    // str r7, [sp, #0xc]
    // add r1, r0, r1
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    AGB_GetBoxMonData((*((u32*)(r6 + 0x0000E880)) + 4), 5, 0);
    ov74_02231D70(r6, *((u32*)(r6 + 0x0000E884)), r7);
    // str r0, [sp, #0x1c]
    ov74_02231D94(r6, *((u32*)(r6 + 0x0000E884)), r7);
    // str r0, [sp, #0x18]
    ov74_02231DB8(r6, *((u32*)(r6 + 0x0000E884)), r7);
    // ldr r0, [sp, #0x1c]
    TranslateAgbSpecies();
    ov74_02231E54(r4, *((u8*)(gSystem + 0xa)));
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    ov74_02231F30(*((u32*)(r5 + (0x6a << 2))), r0, r7);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x6a << 2))), 1);
    // add r1, r0, r1
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    AGB_GetBoxMonData((*((u32*)(r6 + 0x0000E880)) + 4), 0xc, 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x6b << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x6b << 2))), 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    ov74_02231F30(0, r4, r7);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x6a << 2))), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x6b << 2))), 0);
    // ldr r0, [sp, #0xc]
    // add r0, #0x50
    // add r5, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    Heap_Free();
    // ldr r0, [sp, #0x10]
    NARC_Delete();
    // str r1, [r6, r0]
    ov74_02232678(r6, *((u32*)(r6 + 0x0000E884)));
    ov74_0223262C(r6);
}




void ov74_02232154(void) {
    // add r0, sp, #0x14
    // add r2, r5, r2
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // add r7, r5, r0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x20]
    // add r0, sp, #0x14
    // str r0, [r5, r1]
    // add r1, #0xa
    // add r1, #0x64
    // ldr r1, [sp, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // add r0, r1, r0
    // str r0, [sp, #0x20]
    // add r0, sp, #0x14
    // str r0, [r5, r1]
    // add r5, #0xc
    // ldr r0, [sp, #0x10]
    // add r6, #0x28
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov74_02232284(void) {
    // add r0, sp, #0
    // add r2, r6, r2
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    // ldr r1, [sp, #0x48]
}




void ov74_022322D8(void) {
    // str r0, [sp]
    // add r0, r6, r0
    // str r0, [sp]
    // str r0, [r6, r1]
    // sub r1, #8
    // add r0, r6, r1
    // str r3, [sp]
    // str r0, [sp]
    // str r0, [r6, r1]
    // sub r1, #0x1c
    // add r0, r6, r1
    // str r3, [sp]
    // str r0, [sp]
    // str r0, [r6, r1]
    // sub r1, #0x24
    // strb r0, [r6, r1]
    // str r0, [sp]
    // str r0, [r5, r1]
    // mvn r1, r1
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // add r4, #0x24
    // add r5, #0xc
    // str r1, [r6, r0]
}




void ov74_02232398(void) {
    // add r2, r2, r0
    // add r0, r2, r0
    AGB_GetBoxMonData((0x50 * r1), 0x41, 0, *((u32*)(r0 + (0x0000E880 + 4))));
}




void ov74_022323D0(void) {
    // add r4, r2, r0
    // add r0, r4, r6
    // add r1, #0xd
    AGB_GetBoxMonData(0x50, 0, 0, *((u32*)(r0 + (0x0000E880 + 4))));
}




void ov74_02232424(void) {
    // add r2, r2, r0
    // add r0, r2, r0
    AGB_GetBoxMonData((0x50 * r1), 0xc, 0, *((u32*)(r0 + (0x0000E880 + 4))));
}




void ov74_02232474(void) {
    // add r2, r2, r0
    // add r0, r2, r0
    AGB_GetBoxMonData((0x50 * r1), 0xb, 0, *((u32*)(r0 + (0x0000E880 + 4))));
    ov74_02231764();
}




void ov74_022324A0(void) {
    // add r0, r4, r0
    // str r0, [sp]
    // ldr r1, [sp]
    // str r0, [sp, #4]
    Sprite_GetDrawFlag(*((u32*)(r1 + (0xc * r1))));
    // mvn r5, r5
    // add r3, #0xc
    // mvn r0, r0
    ov74_02232398(r4, r6, (0 + 1), r4);
    ov74_022323D0(r4, r6);
    ov74_02232424(r4, r6);
    ov74_02232474(r4, r6);
    // mvn r0, r0
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    Sprite_GetMatrixPtr(*((u32*)((0 - 1) + (0xf3 << 2))), (0 - 1), *((u32*)(r4 + (0xf3 << 2))), r4);
    // add r5, r4, r0
    Sprite_SetMatrix(*((u32*)(r5 + (r5 * 0xc))), r0);
    Sprite_GetMatrixPtr(*((u32*)(r5 + r7)));
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #8]
    // sub r0, r0, r1
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // sub r0, r0, r1
    // str r0, [sp, #0xc]
    // mov r1, ip
    Sprite_SetMatrix(*((u32*)(r5 + r7)), ((2 << 0xe) >> 1), r0);
    Sprite_SetDrawFlag(*((u32*)(r5 + r7)), 1);
    // add r3, r4, r7
    // str r6, [r3, r1]
    // str r2, [r3, r0]
    // add r0, #0x44
    // add r1, #0x44
    // str r0, [r4, r1]
    // add r3, #0xc
    // add r1, r4, r6
    Sprite_SetDrawFlag(*((u32*)((0xf3 << 2) + (0xf2 << 2))), 0, *((u32*)(r4 + 0x0000E884)));
    // mvn r2, r2
    // add r0, r4, r6
    // str r2, [r0, r1]
    // add r0, #0x44
    // add r1, #0x44
    // str r0, [r4, r1]
}




void ov74_0223262C(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + (0xf2 << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0xf2 << 2))), 0);
    // add r5, #0xc
}




void ov74_02232678(void) {
    // add r3, sp, #0x14
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, r5, r0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x34]
    PmAgbCartridge_GetLanguage(0xa0, 0, (4 - 1));
    // add r1, r1, r0
    // add r0, r4, r0
    // add r0, r1, r0
    // add r1, sp, #0
    ConvertRSStringToDPStringInternational((r4 << 3), *((u32*)(r5 + 0x0000E880)), 9, r0);
    // add r0, sp, #0
    // str r0, [sp, #0x4c]
    // add r1, sp, #0x14
    ov74_02231A1C(r5, 1);
}




void ov74_02232700(void) {
    // tst r3, r0
    // add r6, #0x80
    // add r6, #0x60
    // add r3, #0xd6
    // strh r6, [r3]
}




void ov74_02232758(void) {
    // add r3, sp, #0x2c
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r1, [sp, #0x3c]
    // str r1, [sp, #0x50]
    // str r1, [sp, #0x54]
    // str r1, [sp, #0x4c]
    // add r0, r5, r0
    // str r1, [sp, #0x58]
    // str r0, [sp, #0x2c]
    // str r1, [sp, #0x60]
    // str r1, [sp, #0x44]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    // str r2, [sp, #0x40]
    ov74_02231A1C(r0, 0x90, 4);
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    ov74_02231A1C(r5, 6);
    ov74_02232700(r5, r4);
    // ldr r0, [sp, #0x2c]
    CopyWindowToVram();
    // add r2, sp, #0x1c
    // add r2, #2
    AGB_GetBoxMonData(r4, 2);
    AGB_GetBoxMonData(r4, 3, 0);
    // add r0, sp, #0x1c
    // add r0, #2
    // add r1, sp, #8
    ConvertRSStringToDPStringInternational(0xb, r0);
    // add r0, sp, #8
    // str r0, [sp, #0x64]
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    ov74_02231A1C(r5, 6);
    String_New(0x40, 0x4c);
    NewMsgDataFromNarc(1, 0x1b, 0xed, 0x4c);
    AGB_GetBoxMonData(r4, 0xb, 0);
    TranslateAgbSpecies();
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    ReadMsgDataIntoString(r7, r6);
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    // str r6, [sp, #0x68]
    ov74_02231A1C(r5, 6);
    DestroyMsgData(r7);
    String_Delete(r6);
    AGB_GetBoxMonData(r4, 0xc, 0);
    UpConvertItemId_Gen3to4(((r0 << 0x10) >> 0x10));
    String_New(0x40, 0x4c);
    GetItemNameIntoString(((r7 << 0x10) >> 0x10), 0x4c);
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    // str r6, [sp, #0x68]
    ov74_02231A1C(r5, 6);
    String_Delete(r6);
    ov74_02234A0C(r4);
    String_New(0xa, 0x4c);
    // str r3, [sp]
    String16_FormatInteger(r6, 3, 1);
    // mvn r0, r0
    // str r0, [sp, #0x60]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r1, sp, #0x2c
    // str r4, [sp, #0x68]
    ov74_02231A1C(r5, 2);
    String_Delete(r4);
    // ldr r0, [sp, #4]
    PlayCry(((r0 << 0x10) >> 0x10), 0);
}




void ov74_02232910(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4]
}




void ov74_02232940(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, r1, 0x00007FFF);
    // str r0, [r4]
    *((u32*)(r5 + 0x24)) = r6;
}




void ov74_02232974(void) {
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
}




void ov74_02232A48(void) {
    // add r3, sp, #0x10
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x10
    GfGfx_SetBanks((5 - 1));
    ov74_02232974(*((u32*)(r4 + 0x20)));
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    ResetAllTextPrinters();
    LoadFontPal0(0, (0x1e << 4), 0x4c);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x71, 0x17, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 0x1a, *((u32*)(r4 + 0x20)), 2);
    FontID_Alloc(2, 0x4c);
}




void ov74_02232AC8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 0x18, *((u32*)(r0 + 0x20)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r4 + 0x20)), 2, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r4 + 0x20)), 2);
}




void ov74_02232B18(void) {
    LoadFontPal0(0, (7 << 6), 0x4c);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r4 + 0x20)), 0, (0x3f << 4), 0xe);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r4 + 0x20)), 0, 0x000003D2, 0xd);
    // add r0, r4, r0
    memset(0x0000042C, 0, 0x4c);
    // add r2, r4, r0
    // sub r1, #0x6c
    // str r2, [r4, r1]
    // sub r1, #0x64
    // str r2, [r4, r1]
    // sub r1, #0x60
    // str r2, [r4, r1]
    // sub r1, #0x5c
    // str r3, [r4, r1]
    // sub r1, #0x58
    // str r3, [r4, r1]
    // sub r3, #0x48
    // str r1, [r4, r3]
    // sub r3, #0x44
    // str r2, [r4, r3]
    // sub r3, #0x4c
    // str r2, [r4, r3]
    // sub r2, #0x40
    // str r3, [r4, r2]
    // sub r2, #0x3c
    // str r3, [r4, r2]
    // sub r2, #0x34
    // str r1, [r4, r2]
    // sub r0, #0x30
    // str r1, [r4, r0]
}




void ov74_02232BD4(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + (0x6a << 2))), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + r7)), 0);
    // add r4, #0xc
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xf2 << 2))), 0);
    // add r4, #0xc
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xe6 << 2))), 0);
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xee << 2))), 0);
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xea << 2))), 0);
    // add r0, sp, #0x1c
    // add r2, r6, r2
    ov74_02231D48(r6, (0x61 << 2), 1);
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x1c
    Sprite_CreateAffine((0x8e << 0xc));
    // str r0, [r4, r1]
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + 0x00000414)), 1);
    // add r1, #0xa
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000414)), r7);
    Sprite_SetPriority(*((u32*)(r4 + 0x00000414)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000414)), 1);
    ov74_02231D70(r6, *((u32*)(r5 + (0x3d << 4))), *((u32*)(r5 + (0xf3 << 2))));
    // str r0, [sp, #0x14]
    ov74_02231D94(r6, *((u32*)(r5 + (0x3d << 4))), *((u32*)(r5 + (0xf3 << 2))));
    // str r0, [sp, #0x18]
    ov74_02231DB8(r6, *((u32*)(r5 + (0x3d << 4))), *((u32*)(r5 + (0xf3 << 2))));
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    ov74_02231EC4(*((u32*)(r4 + 0x00000414)), r0, *((u8*)(gSystem + 0xa)));
    // ldr r0, [sp, #0x10]
    // add r0, #0x28
    // str r0, [sp, #0x10]
    // add r5, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x71, 0x19, *((u32*)(r6 + 0x20)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r6 + 0x20)), 2, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)(r6 + 0x20)), 2);
    GfGfx_EngineATogglePlanes(2, 0);
    LoadFontPal0(0, (7 << 6), 0x4c);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r6 + 0x20)), 0, (0x3f << 4), 0xe);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r6 + 0x20)), 0, 0x000003D2, 0xd);
    ov74_02232B18(r6);
    // str r0, [r6, r1]
    // sub r1, #0x34
    // add r1, r6, r1
    ov74_02231A1C(r6, (0x46 << 4), 0x18);
}




void ov74_02232DA4(void) {
}




void ov74_02232DC4(void) {
    Sprite_Delete(*((u32*)(r0 + 0x00000414)));
    GfGfx_EngineATogglePlanes(2, 1);
    // add r0, r6, r0
    ov74_02232DA4(0x00000498);
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xe6 << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xee << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r6 + (0xea << 2))), 1);
    // str r3, [r4, r0]
    // str r2, [r4, r1]
    // add r4, #0xc
    // str r1, [r6, r0]
}




void ov74_02232E3C(void) {
    Main_SetVBlankIntrCB(0, 0);
    Sprite_Delete(*((u32*)(r6 + (0x6a << 2))));
    Sprite_Delete(*((u32*)(r5 + (0x6b << 2))));
    // add r5, #0xc
    Sprite_Delete(*((u32*)(r6 + (0xf2 << 2))));
    // add r4, #0xc
    Sprite_Delete(*((u32*)(r6 + (0xe6 << 2))));
    Sprite_Delete(*((u32*)(r6 + (0xee << 2))));
    Sprite_Delete(*((u32*)(r6 + (0xea << 2))));
    // add r0, r6, r0
    ov74_02232DA4(0x00000478);
    // add r0, r6, r0
    ov74_02232DA4(0x00000488);
    // add r0, r6, r0
    ov74_02232DA4(0x00000498);
    FontID_Release(2);
    sub_0200AEB0(*((u32*)(r6 + (0x5b << 2))));
    sub_0200B0A8(*((u32*)(r6 + (0x17 << 4))));
    Destroy2DGfxResObjMan(*((u32*)(r6 + (0x55 << 2))));
    SpriteList_Delete(*((u32*)(r6 + 0x28)));
    *((u32*)(r6 + 0x28)) = 0;
    OamManager_Free(0);
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    YesNoPrompt_Destroy(*((u32*)(r6 + 0x0000E88C)));
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    FreeBgTilemapBuffer(*((u32*)(r6 + 0x20)), 0);
    FreeBgTilemapBuffer(*((u32*)(r6 + 0x20)), 1);
    FreeBgTilemapBuffer(*((u32*)(r6 + 0x20)), 2);
    FreeBgTilemapBuffer(*((u32*)(r6 + 0x20)), 3);
}




void ov74_02232F5C(void) {
    // str r1, [sp]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #4]
    // add r2, sp, #0
    *((u8*)(r2 + 0x10)) = 0x19;
    *((u8*)(r2 + 0x11)) = 7;
    *((u8*)(r2 + 0x13)) = 0;
    *((u8*)(r2 + 0x12)) = (0x10 | (*((u8*)(r2 + 0x12)) & ~(0xf0)));
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(*((u32*)(r0 + 0x0000E88C)), 0x0000E88C, (*((u8*)(r2 + 0x12)) & ~(0xf0)));
}




void ov74_02232F9C(void) {
    ov74_02233F84();
    PmAgbCartridge_GetLanguage();
    // add r1, sp, #8
    ConvertRSStringToDPStringInternational(r4, 8, r0);
    MessageFormat_New(0x4c);
    String_New(8, 0x4c);
    // add r1, sp, #8
    CopyU16ArrayToString();
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferString(r4, 1, r6, 0);
    ov74_02232B18(r5);
    // str r0, [r5, r1]
    // add r0, #0xc
    // sub r1, #0x34
    // str r4, [r5, r0]
    // add r1, r5, r1
    ov74_02231A1C(r5, (0x46 << 4), 0x18);
    String_Delete(r6);
    MessageFormat_Delete(r4);
    ov74_02232F5C(r5);
}




void ov74_02233024(void) {
    // blx r0
    // str r1, [r4, r0]
    GF_RunVramTransferTasks(0x00012604, 0);
    OamManager_ApplyAndResetBuffers();
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x20)));
    // str r0, [r3, r1]
}




void ov74_02233060(void) {
    // str r0, [sp]
    Save_MigratedPokemon_Get(*((u32*)(r0 + 0x10)));
    // str r0, [sp, #8]
    // str r6, [sp, #4]
    // ldr r1, [sp]
    // add r0, r0, r7
    // add r0, r0, r5
    AGB_GetBoxMonData((*((u32*)(r1 + 0x0000E880)) + 4), 5, 0);
    // add r5, #0x50
    // add r7, r7, r0
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    MigratedPokemon_CountPokemon(5);
}




void ov74_022330D0(void) {
    ov74_02232B18(*((u32*)(r0 + 4)));
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // str r0, [r5, r1]
    // sub r1, #0x34
    // add r0, #0x10
    // str r2, [r5, r0]
    // add r1, r5, r1
    ov74_02231A1C(r5, (0x46 << 4), 0x18);
    *((u32*)(r5 + 4)) = 0;
    TextPrinterCheckActive(((*((u32*)(r5 + 0x00000474)) << 0x18) >> 0x18));
    TextFlags_SetCanTouchSpeedUpPrint(0);
}




void ov74_02233134(void) {
    ov74_02232B18(*((u32*)(r0 + 4)));
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // str r0, [r5, r1]
    // sub r1, #0x34
    // add r0, #0x10
    // str r2, [r5, r0]
    // add r1, r5, r1
    ov74_02231A1C(r5, (0x46 << 4), 0x18);
    *((u32*)(r5 + 4)) = 0;
    TextPrinterCheckActive(((*((u32*)(r5 + 0x00000474)) << 0x18) >> 0x18));
    ov74_02232F5C(r5);
    TextFlags_SetCanTouchSpeedUpPrint(0);
}




void ov74_0223319C(void) {
    // mvn r1, r1
    ov74_02232B18(0, *((u32*)(r0 + 8)));
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // str r0, [r5, r1]
    // add r0, #0x10
    // sub r1, #0x34
    // str r4, [r5, r0]
    // add r1, r5, r1
    ov74_02231A1C(r5, (0x46 << 4), 0x18);
    // mvn r0, r0
    *((u32*)(r5 + 8)) = 0;
    PlaySE(SEQ_SE_DP_SELECT);
    TextPrinterCheckActive(((*((u32*)(r5 + 0x00000474)) << 0x18) >> 0x18));
    TextFlags_SetCanTouchSpeedUpPrint(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    PlaySE(SEQ_SE_DP_SELECT);
}




void ov74_02233230(void) {
    Heap_Create(3, 0x4c, (0xe << 0xe));
    OverlayManager_CreateAndGetData(r5, 0x00012610, 0x4c);
    memset(0, 0x00012610);
    BgConfig_Alloc(0x4c);
    *((u32*)(r4 + 0x20)) = r0;
    YesNoPrompt_Create(0x4c);
    // str r0, [r4, r1]
    sub_0200FBF4(0, 0);
    sub_0200FBF4(1, 0);
    OverlayManager_GetArgs(r5);
    *((u32*)(r4 + 0x10)) = *((u32*)(r0 + 8));
    Save_PlayerData_GetProfile(*((u32*)(r0 + 8)));
    *((u32*)(r4 + 0x14)) = r0;
    Save_PlayerData_GetOptionsAddr(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x18)) = r0;
    Options_GetFrame();
    *((u32*)(r4 + 0x1c)) = r0;
    String_New((6 << 6), 0x4c);
    // str r0, [r4, r1]
    String_New((6 << 6), 0x4c);
    // str r0, [r4, r1]
    Sound_SetSceneAndPlayBGM(9, 0x0000047E, 1);
    OS_IsTickAvailable();
    OS_InitTick();
    ov74_02236074();
    // add r1, r4, r0
    // str r1, [r0]
}




void ov74_022332F4(void) {
    // TODO: decompile
}




void ov74_022338D4(void) {
    OverlayManager_GetData();
    String_Delete(*((u32*)(r0 + 0x00012608)));
    String_Delete(*((u32*)(r4 + 0x0001260C)));
    Heap_Free(*((u32*)(r4 + 0x20)));
    RegisterMainOverlay(FS_OVERLAY_ID, gApplication_TitleScreen);
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x4c);
    ov74_02236034(0);
}




void PmAgbCartridgeHasFlash(void) {
}




void PmAgbCartridgeGetOffsets(void) {
    *((u32*)(ov74_0223D33C + 8)) = r0;
    IdentifyPmAgbCartridge(sPmAgbRomCodeMappings, 0x1e);
    *((u32*)(sPmAgbRomHeader + 0x20)) = (0x89 << 4);
    *((u32*)(sPmAgbRomHeader + 0x24)) = (0xeb << 6);
    *((u32*)(ov74_0223D33C + 0x68)) = 0x00001220;
    *((u32*)(sPmAgbRomHeader + 0x30)) = 9;
    CTRDG_CpuCopy32(0x08000100, sPmAgbRomHeader, 0xfc);
    PmAgbCartridgeHasFlash();
}




void PmAgbCartridgeUnlinkSpec(void) {
    // str r1, [r0]
}




void PmAgbCartridge_GetVersionInternal(void) {
    // ldr r0, _022339C4 ; =sPmAgbCartridgeSpec
    // ldr r0, [r0]
    // ldrb r0, [r0, #5]
    // bx lr
    // _022339C4: .word sPmAgbCartridgeSpec
    // TODO: decompile
}




void PmAgbCartridge_GetLanguage(void) {
    // ldr r0, _022339D0 ; =sPmAgbCartridgeSpec
    // ldr r0, [r0]
    // ldrh r0, [r0, #6]
    // bx lr
    // _022339D0: .word sPmAgbCartridgeSpec
    // TODO: decompile
}




void IdentifyPmAgbCartridge(void) {
    // str r1, [r0]
    CTRDG_IsAgbCartridge(sPmAgbCartridgeSpec, 0);
    CTRDG_GetAgbGameCode(1);
    // add r1, r5, r0
    // str r1, [r0]
    // add r3, #8
    CTRDG_Enable(1, *((u32*)r5), (0 + 1), r5);
    // add r4, sp, #0
    CTRDG_CpuCopy32((2 << 0x1a), r4, 0xc0);
    // add r0, r4, r2
    // add r0, r2, r0
    // add r2, #0x19
    // neg r0, r2
    // add r4, #0xbd
}




void ov74_02233A88(void) {
    // add r2, r2, r1
    // add r0, r1, r0
}




void ov74_02233AB8(void) {
}




void ov74_02233ACC(void) {
    // sub r0, r1, r0
}




void ov74_02233B04(void) {
    // add r0, r1, r0
    // add r2, r2, r1
    // add r0, r2, r0
    // add r2, r2, r1
    // add r0, r2, r0
}




void ov74_02233B58(void) {
    // str r6, [sp, #4]
    // str r6, [r1]
    *((u32*)(ov74_0223D33C + 4)) = 0;
    // str r2, [sp]
    _s32_div_f(0, 0xe);
    // add r0, r1, r7
    ov74_02233AB8(r5);
    DC_FlushRange(r5, (1 << 0xc));
    // str r0, [sp, #4]
    ov74_02233ACC(*((u16*)(r5 + 0x00000FF4)), *((u32*)(r5 + 0x00000FF8)));
    ov74_02233A88(r5, r0);
    // ldr r0, [sp]
    // str r1, [r0]
    // lsl r0, r1
    // ldr r0, [sp, #4]
}




void ov74_02233C08(void) {
    // add r2, sp, #4
    // add r2, sp, #0
    // ldr r0, [sp, #4]
    // mvn r1, r1
    // ldr r3, [sp]
    // ldr r3, [sp]
    // mvn r1, r1
    // str r3, [r4]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r5]
    // ldr r1, [sp]
    // str r1, [r4]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r5]
    // ldr r1, [sp, #4]
    // str r1, [r4]
    // str r0, [r5]
    // str r0, [r5]
    // ldr r0, [sp]
    // str r0, [r4]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r5]
}




void ov74_02233CE4(void) {
    ov74_02233C08(*((u32*)(ov74_0223D33C + 8)), ov74_0223D33C, ov74_0223D34C);
    // add r0, r4, r0
    ov74_02233AB8((0xe * *((u32*)ov74_0223D33C)), *((u32*)(ov74_0223D33C + 8)));
    ov74_02233ACC(*((u16*)(r5 + 0x00000FF4)), *((u32*)(r5 + 0x00000FF8)));
    ov74_02233A88(r5, r0);
    *((u32*)(r7 + 0x10)) = *((u32*)(r5 + 0x00000FFC));
    // lsl r1, r0
    ov74_02233ACC(*((u16*)(r5 + 0x00000FF4)), 1);
    // str r0, [sp]
    ov74_02233B04(*((u16*)(r5 + 0x00000FF4)));
    // ldr r2, [sp]
    MIi_CpuCopy32(r5, r0);
    *((u32*)(r7 + 0xc)) = r4;
}




void ov74_02233DBC(void) {
    *((u32*)(ov74_0223D33C + 0x14)) = 1;
    MIi_CpuClear32(0, *((u32*)(ov74_0223D33C + 8)), (1 << 0xc));
    ov74_02233ACC(r6);
    ov74_02233B04(r6);
    MIi_CpuCopy32(r5, r4);
    // str r1, [r5, r0]
    // sub r1, #8
    // strh r6, [r5, r1]
    // str r1, [r5, r0]
    ov74_02233ACC(r6, 0x08012025);
    ov74_02233A88(r5, r0);
    // strh r0, [r5, r1]
    // add r0, r6, r0
    _s32_div_f((*((u32*)(ov74_0223D33C + 0xc)) + 1), 0xe);
    // add r0, r1, r0
    CTRDG_WriteAndVerifyAgbFlashAsync((((0xe * *((u32*)(sPmAgbCartridgeSpec + 4))) << 0x18) >> 0x18), r5, 4, ov74_02233E50);
}




void ov74_02233E50(void) {
    *((u32*)(ov74_0223D33C + 4)) = (*((u32*)(ov74_0223D33C + 4)) + 1);
    *((u32*)(ov74_0223D33C + 4)) = 0;
    *((u32*)(ov74_0223D33C + 0x14)) = 0;
    *((u32*)(ov74_0223D33C + 0x14)) = 2;
    *((u32*)(ov74_0223D33C + 0x14)) = 3;
    *((u32*)(ov74_0223D33C + 0x14)) = 4;
}




void ov74_02233E8C(void) {
    *((u32*)(sPmAgbCartridgeSpec + 4)) = 1;
    *((u32*)(ov74_0223D33C + 0x10)) = (*((u32*)(ov74_0223D33C + 0x10)) + 1);
    ov74_02233DBC(0, *((u32*)(sPmAgbCartridgeSpec + 4)), (*((u32*)(ov74_0223D33C + 0x10)) + 1));
}




void ov74_02233ED4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233EEA: ; jump table
    ov74_02233DBC(*((u32*)(ov74_0223D33C + 4)), ov74_0223D33C);
    ov74_02233DBC(*((u32*)(r1 + 4)));
}




void ov74_02233F14(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233F28: ; jump table
}




void ov74_02233F4C(void) {
    // add r0, r1, r0
}




void ov74_02233F5C(void) {
}




void ov74_02233F68(void) {
}




void ov74_02233F84(void) {
}




void ov74_02233F8C(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233FAC: ; jump table
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02233FF0: ; jump table
    // add r6, #0xc
    // add r6, #0x18
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234020: ; jump table
    // add r6, #0xc
    // add r6, #0x24
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234050: ; jump table
    // add r6, #0x18
    // add r6, #0xc
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234080: ; jump table
    // add r6, #0x24
    // add r6, #0xc
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022340B0: ; jump table
    // add r6, #0x18
    // add r6, #0x24
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022340E0: ; jump table
    // add r6, #0x24
    // add r6, #0x18
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234112: ; jump table
    // add r6, #0xc
    // add r6, #0x18
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234142: ; jump table
    // add r6, #0xc
    // add r6, #0x24
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234172: ; jump table
    // add r6, #0x18
    // add r6, #0xc
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022341A2: ; jump table
    // add r6, #0x24
    // add r6, #0xc
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022341D2: ; jump table
    // add r6, #0x18
    // add r6, #0x24
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234202: ; jump table
    // add r6, #0x24
    // add r6, #0x18
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234234: ; jump table
    // add r6, #0xc
    // add r6, #0x18
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234264: ; jump table
    // add r6, #0xc
    // add r6, #0x24
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234294: ; jump table
    // add r6, #0x18
    // add r6, #0xc
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022342C4: ; jump table
    // add r6, #0x24
    // add r6, #0xc
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022342F4: ; jump table
    // add r6, #0x18
    // add r6, #0x24
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234324: ; jump table
    // add r6, #0x24
    // add r6, #0x18
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234356: ; jump table
    // add r6, #0xc
    // add r6, #0x18
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234386: ; jump table
    // add r6, #0xc
    // add r6, #0x24
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022343B6: ; jump table
    // add r6, #0x18
    // add r6, #0xc
    // add r6, #0x24
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022343E6: ; jump table
    // add r6, #0x24
    // add r6, #0xc
    // add r6, #0x18
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234416: ; jump table
    // add r6, #0x18
    // add r6, #0x24
    // add r6, #0xc
    // add r4, #0x20
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234446: ; jump table
    // add r6, #0x24
    // add r6, #0x18
    // add r6, #0xc
}




void ov74_02234468(void) {
    // add r4, #0x20
    // eor r2, r1
    // str r2, [r4]
    // eor r1, r2
    // stmia r4!, {r1}
}




void ov74_02234488(void) {
    // add r4, #0x20
    // eor r2, r1
    // str r2, [r4]
    // eor r1, r2
    // stmia r4!, {r1}
}




void ov74_022344A8(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r2, r4, r2
    // add r1, r4, r1
    // add r1, r4, r1
    // add r1, r4, r1
}




void AGB_GetBoxMonData(void) {
    // str r1, [sp]
    // str r4, [sp, #0xc]
    // str r4, [sp, #8]
    // str r4, [sp, #4]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022345BA: ; jump table
    // add r0, r6, r4
    // strb r0, [r7, r4]
    // strb r0, [r7, r4]
    // add r0, r6, r4
    // strb r0, [r7, r4]
    // strb r0, [r7, r4]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // sub r0, #0xd
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // sub r1, #0x11
    // add r0, r0, r1
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
}




void ov74_022348B0(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02234934: ; jump table
    // add r0, r4, r2
    // and r1, r2
    // add r0, r4, r2
    // add r0, r1, r0
    // strh r0, [r7]
}




void TranslateAgbSpecies(void) {
    // ldr r1, _02234A00 ; =0x00000115
    // cmp r0, r1
    // blt _022349FC
    // ldr r3, _02234A04 ; =ov74_0223CC5C
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // bne _022349F4
    // ldr r0, _02234A08 ; =ov74_0223CC5E
    // lsl r1, r2, #2
    // ldrh r0, [r0, r1]
    // bx lr
    // add r2, r2, #1
    // add r3, r3, #4
    // cmp r2, #0x90
    // blo _022349E6
    // bx lr
    // nop
    // _02234A00: .word 0x00000115
    // _02234A04: .word ov74_0223CC5C
    // _02234A08: .word ov74_0223CC5E
    // TODO: decompile
}




void ov74_02234A0C(void) {
}




void AGB_GetBoxMonAbility(void) {
    GetBoxMonData(r1, 5, 0);
    AGB_GetBoxMonData(r4, 0x2e, 0);
    GetMonBaseStat(r5, 0x19);
    GetMonBaseStat(r5, 0x18, ov74_0223CBA0);
    // tst r1, r6
    GetMonBaseStat(r5, 0x18, (r2 + 2));
    GetMonBaseStat(r5, 0x18);
}




void MigrateBoxMon(void) {
    ZeroBoxMonData(r1);
    AcquireBoxMonLock(r4);
    // str r0, [sp]
    AGB_GetBoxMonData(r6, 0, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0);
    AGB_GetBoxMonData(r6, 0xb, 0);
    // str r0, [sp, #8]
    TranslateAgbSpecies();
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 5);
    AGB_GetBoxMonData(r6, 0xc, 0);
    // str r0, [sp, #8]
    UpConvertItemId_Gen3to4(((r0 << 0x10) >> 0x10));
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 6);
    AGB_GetBoxMonData(r6, 1, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 7);
    AGB_GetBoxMonData(r6, 0x19, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 8);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 9);
    AGB_GetBoxMonAbility(r6, r4);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0xa);
    AGB_GetBoxMonData(r6, 8, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0xb);
    AGB_GetBoxMonData(r6, 3, 0);
    // str r0, [sp, #4]
    // add r2, sp, #4
    SetBoxMonData(r4, 0xc);
    AGB_GetBoxMonData(r6, 0x1a, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0xd);
    AGB_GetBoxMonData(r6, 0x1b, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0xe);
    AGB_GetBoxMonData(r6, 0x1c, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0xf);
    AGB_GetBoxMonData(r6, 0x1d, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x10);
    AGB_GetBoxMonData(r6, 0x1e, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x11);
    AGB_GetBoxMonData(r6, 0x1f, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x12);
    AGB_GetBoxMonData(r6, 0x16, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x13);
    AGB_GetBoxMonData(r6, 0x17, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x14);
    AGB_GetBoxMonData(r6, 0x18, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x15);
    AGB_GetBoxMonData(r6, 0x21, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x16);
    AGB_GetBoxMonData(r6, 0x2f, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x17);
    AGB_GetBoxMonData(r6, 0x30, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x18);
    // add r1, #0xd
    AGB_GetBoxMonData(r6, 0, 0);
    // str r0, [sp, #8]
    // add r1, #0x36
    // add r2, sp, #8
    SetBoxMonData(r4, r5);
    AGB_GetBoxMonData(r6, 0x15, 0);
    // lsl r1, r7
    // str r0, [sp, #8]
    // and r0, r1
    // lsr r0, r7
    // str r0, [sp, #8]
    // add r1, #0x3e
    // add r2, sp, #8
    SetBoxMonData(r4, r5);
    // add r1, #0x42
    GetBoxMonData(r4, r5, 0);
    // str r0, [sp, #8]
    // add r1, #0x3a
    // add r2, sp, #8
    SetBoxMonData(r4, r5);
    AGB_GetBoxMonData(r6, 0x27, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x46);
    AGB_GetBoxMonData(r6, 0x28, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x47);
    AGB_GetBoxMonData(r6, 0x29, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x48);
    AGB_GetBoxMonData(r6, 0x2a, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x49);
    AGB_GetBoxMonData(r6, 0x2b, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x4a);
    AGB_GetBoxMonData(r6, 0x2c, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x4b);
    AGB_GetBoxMonData(r6, 0x2d, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x4c);
    AGB_GetBoxMonData(r6, 0x32, 0);
    // str r0, [sp, #8]
    // add r1, #0x4e
    // add r2, sp, #8
    SetBoxMonData(r4, 0);
    AGB_GetBoxMonData(r6, 0x33, 0);
    // str r0, [sp, #8]
    // add r1, #0x52
    // add r2, sp, #8
    SetBoxMonData(r4, 0);
    AGB_GetBoxMonData(r6, 0x34, 0);
    // str r0, [sp, #8]
    // add r1, #0x56
    // add r2, sp, #8
    SetBoxMonData(r4, 0);
    AGB_GetBoxMonData(r6, 0x35, 0);
    // str r0, [sp, #8]
    // add r1, #0x5a
    // add r2, sp, #8
    SetBoxMonData(r4, 0);
    AGB_GetBoxMonData(r6, 0x36, 0);
    // str r0, [sp, #8]
    // add r1, #0x5e
    // add r2, sp, #8
    SetBoxMonData(r4, 0);
    AGB_GetBoxMonData(r6, 0x43, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x62);
    AGB_GetBoxMonData(r6, 0x44, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x63);
    AGB_GetBoxMonData(r6, 0x45, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x64);
    AGB_GetBoxMonData(r6, 0x46, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x65);
    AGB_GetBoxMonData(r6, 0x47, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x66);
    AGB_GetBoxMonData(r6, 0x48, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x67);
    AGB_GetBoxMonData(r6, 0x49, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x68);
    AGB_GetBoxMonData(r6, 0x4a, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x69);
    AGB_GetBoxMonData(r6, 0x4b, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x6a);
    AGB_GetBoxMonData(r6, 0x4c, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x6b);
    AGB_GetBoxMonData(r6, 0x4d, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x6c);
    AGB_GetBoxMonData(r6, 0x4e, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x6d);
    AGB_GetBoxMonData(r6, 0x50, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x6e);
    GetBoxMonGender(r4);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x6f);
    GetBoxMonData(r4, 5, 0);
    AGB_GetBoxMonData(r6, 0, 0);
    // and r0, r3
    // and r0, r3
    // and r0, r3
    // and r2, r7
    // str r3, [sp, #8]
    _u32_div_f((((((3 << 0x10) >> 0xc) | ((3 << 0x18) >> 0x12)) | ((3 << 8) >> 6)) | r0), 0x1c, r0, r0);
    // str r1, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x70);
    GetBoxMonData(r4, 5, 0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02235002: ; jump table
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x70);
    // add r2, sp, #0x24
    AGB_GetBoxMonData(r6, 2);
    // ldr r3, [sp, #4]
    // add r0, sp, #0x24
    // add r1, sp, #0xc
    ConvertRSStringToDPStringInternational(0xc);
    // add r2, sp, #0xc
    SetBoxMonData(r4, 0x76);
    AGB_GetBoxMonData(r6, 3, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x4d);
    AGB_GetBoxMonData(r6, 0x25, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x7a);
    // add r2, sp, #0x24
    AGB_GetBoxMonData(r6, 7);
    // ldr r3, [sp, #4]
    // add r0, sp, #0x24
    // add r1, sp, #0xc
    ConvertRSStringToDPStringInternational(8);
    // add r2, sp, #0xc
    SetBoxMonData(r4, 0x90);
    AGB_GetBoxMonData(r6, 0x23, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x99);
    AGB_GetBoxMonData(r6, 0x22, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x9a);
    AGB_GetBoxMonData(r6, 0x26, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x9b);
    AGB_GetBoxMonData(r6, 0x24, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x9c);
    AGB_GetBoxMonData(r6, 0x31, 0);
    // str r0, [sp, #8]
    // add r2, sp, #8
    SetBoxMonData(r4, 0x9d);
    // ldr r1, [sp]
    ReleaseBoxMonLock(r4);
}




void ov74_0223512C(void) {
    // str r0, [r1]
}




void ov74_02235138(void) {
    // add r1, r0, #0
    // ldr r0, _02235144 ; =ov74_0223D450
    // ldr r3, _02235148 ; =Heap_Alloc
    // ldr r0, [r0]
    // bx r3
    // nop
    // _02235144: .word ov74_0223D450
    // _02235148: .word Heap_Alloc
    // TODO: decompile
}




void ov74_0223514C(void) {
    CTRDG_GetAgbGameCode();
    // add r7, sp, #0x80
    CTRDG_Enable(1, (((r0 >> 0x10) << 0x18) >> 0x10), (((r0 >> 0x18) << 0x18) >> 0x18), (r0 << 0x18));
    CTRDG_CpuCopy8((0x81 << 0x14), r7, 0x000004A8);
    // add r1, sp, #0
    CTRDG_CpuCopy8(0x08020000, 0x80);
    CTRDG_Enable(0);
    CRYPTO_SetAllocator(ov74_02235138, Heap_Free);
    // add r2, sp, #0
    CRYPTO_VerifySignature(r7, 0x000004A8, _0223B690);
}




void ov74_022351FC(void) {
    CTRDG_Init();
    CTRDG_IsAgbCartridge();
    CTRDG_GetAgbMakerCode(0);
    ov74_0223514C(0, 0x00003130);
}




void ov74_02235230(void) {
    // add r1, sp, #0
    // ldr r0, [sp]
}




void ov74_02235258(void) {
    ov74_022351FC();
    ov74_02235230(0);
    CTRDG_Enable(1);
    CTRDG_CpuCopy16(0x08100100, r5, r4);
    CTRDG_Enable(0);
    CTRDG_IsExisting();
}




void ov74_022352A0(void) {
    // stmia r6!, {r0, r1, r2, r3}
    // stmia r6!, {r0, r1, r2, r3}
    // stmia r6!, {r0, r1}
    *((u32*)(ov74_0223D454 + 4)) = 1;
    *((u32*)(ov74_0223D454 + 8)) = r0;
}




void ov74_022352D0(void) {
}




void ov74_02235308(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r0, sp, #0
    *((u8*)(*((u32*)_0223B720) + 0x10)) = r2;
    // add r0, r2, r2
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223533A: ; jump table
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // add r0, sp, #0
    *((u8*)((2 << 0xc) + 0x12)) = (r3 >> 0xb);
    // ldr r1, [sp, #0x30]
    // add r2, sp, #0
    *((u8*)((2 << 0xc) + 0x13)) = ((r3 >> 0xb) >> 0xe);
    InitBgFromTemplate(r0, ((r1 << 0x18) >> 0x18), 0);
    BgClearTilemapBufferAndCommit(r7, ((r4 << 0x18) >> 0x18));
}




void ov74_02235390(void) {
    *((u32*)(ov74_0223D454 + 0x10)) = r0;
}




void ov74_0223539C(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, r1, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, r1, 0x00007FFF);
    // str r6, [r4]
    *((u32*)(r7 + 0xc)) = r5;
}




void ov74_022353FC(void) {
}




void ov74_02235414(void) {
    memset(0, 0x54);
    *((u32*)(r5 + 4)) = 1;
    *((u32*)(r5 + 8)) = 1;
    *((u32*)(r5 + 0x4c)) = (1 - 2);
    *((u32*)(r5 + 0x10)) = r4;
    *((u32*)(r5 + 0x30)) = r6;
    // ldr r0, [sp, #0x18]
    *((u32*)(r5 + 0x34)) = r7;
    *((u32*)(r5 + 0x38)) = (1 - 2);
    // ldr r0, [sp, #0x1c]
    *((u32*)(r5 + 0x3c)) = (1 - 2);
    *((u32*)(r5 + 0x2c)) = 0;
    *((u32*)(r5 + 0x40)) = 0;
    *((u32*)(r5 + 0x44)) = 0x0001020F;
    // add r0, #0x48
    // strb r1, [r0]
    // str r2, [r5]
    *((u32*)(r5 + 0x24)) = 0;
    *((u32*)(r5 + 0x20)) = 0;
    *((u32*)(r5 + 0x14)) = 0;
    *((u32*)(r5 + 0x50)) = 0xff;
}




void ov74_02235464(void) {
}




void ov74_0223546C(void) {
}




void ov74_02235474(void) {
}




void ov74_0223547C(void) {
    // mvn r0, r0
    *((u32*)(r0 + 0x4c)) = r1;
    // add r1, #0x48
    FillWindowPixelBuffer(*((u32*)(r0 + 0x10)), *((u8*)r0));
    // mvn r0, r0
    NewMsgDataFromNarc(1, 0x1b, *((u32*)(r5 + 0x34)), *((u32*)(r4 + 8)));
    // str r0, [sp, #0x10]
    MessageFormat_New(*((u32*)(r4 + 8)));
    // ldr r1, [sp, #0x10]
    ReadMsgData_ExpandPlaceholders(r0, *((u32*)(r5 + 0x4c)), *((u32*)(r4 + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x10)), *((u32*)(r5 + 0x40)), r0, *((u32*)(r5 + 0x20)));
    GetFontAttribute(((*((u32*)(r5 + 0x40)) << 0x18) >> 0x18), 2);
    FontID_String_GetWidth(*((u32*)(r5 + 0x40)), r4, r0);
    GetWindowWidth(*((u32*)(r5 + 0x10)));
    // sub r3, r0, r7
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x10)), *((u32*)(r5 + 0x40)), r4);
    *((u32*)(r5 + 0xc)) = 0;
    String_Delete(r4);
    MessageFormat_Delete(r6);
    // ldr r0, [sp, #0x10]
    DestroyMsgData();
    *((u32*)(r5 + 0x50)) = 0xff;
}




void ov74_02235568(void) {
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldr r1, [sp, #0x28]
    // mvn r0, r0
    // mvn r0, r0
    // ldr r1, [sp, #0x28]
}




void ov74_02235634(void) {
    // mul r0, r1
}




void ov74_0223563C(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #0xc]
    ObjCharTransfer_InitEx(r3, 0x10, 0x10);
    ObjPlttTransfer_Init(0x1e, *((u32*)(ov74_0223D454 + 8)));
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov74_0223567C(void) {
    // ldr r0, _0223568C ; =ov74_0223D454
    // ldr r0, [r0, #0x34]
    // cmp r0, #0
    // beq _02235688
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0223568C: .word ov74_0223D454
    // TODO: decompile
}




void ov74_02235690(void) {
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x20);
    G2dRenderer_Init(0x80, ov74_0223D48C, *((u32*)(ov74_0223D454 + 8)));
    *((u32*)(ov74_0223D454 + 0x34)) = r0;
    G2dRenderer_SetSubSurfaceCoords(ov74_0223D48C, 0, (1 << 0x14));
    *((u32*)(ov74_0223D654 + 0x10)) = (3 << 0x12);
    Create2DGfxResObjMan(0x20, 0, *((u32*)(r6 + 8)));
    // str r0, [r5, r7]
}




void ov74_02235708(void) {
}




void ov74_02235728(void) {
    // ldr r4, [sp, #0x54]
    // mov ip, r1
    // str r2, [sp, #0x2c]
    // str r3, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // mvn r1, r1
    // mov r0, ip
    // str r4, [sp]
    // str r7, [sp, #4]
    // ldr r3, [sp, #0x34]
    // str r0, [sp, #8]
    // mov r2, ip
    AddCharResObjFromNarc(*((u32*)(ov74_0223D454 + (0x16 << 4))), r0);
    // add r2, r5, r1
    // str r0, [r2, r1]
    // ldr r0, [sp, #0x2c]
    // mvn r1, r1
    // str r4, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #0xc]
    AddPlttResObjFromNarc(*((u32*)(r5 + (0x59 << 2))), r6, 0);
    // add r2, r5, r1
    // str r0, [r2, r1]
    // ldr r0, [sp, #0x30]
    // mvn r1, r1
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x30]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x34]
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + (0x5a << 2))), r6);
    // add r2, r5, r2
    // str r0, [r2, r1]
    // ldr r2, [sp, #0x50]
    // mvn r0, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x34]
    // str r0, [sp, #8]
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + (0x5b << 2))), r6, (r4 * 0x18));
    // add r2, r5, r1
    // str r0, [r2, r1]
    // add r1, r5, r6
    sub_0200ACF0(*((u32*)((0x61 << 2) + (0x5e << 2))), (0x61 << 2));
    // add r1, r5, r6
    sub_0200B00C(*((u32*)(r1 + (0x5f << 2))));
    // str r4, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // add r1, #8
    // str r1, [sp, #0x1c]
    // add r1, #0xc
    // add r2, #0x48
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r1, r5, r2
    // add r0, r1, r0
    CreateSpriteResourcesHeader((0x24 * r4), r4, r4, r4);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    Main_SetVBlankIntrCB(ov74_02235A74, 0);
}




void ov74_0223589C(void) {
}




void ov74_022358BC(void) {
}




void ov74_022358C8(void) {
    Sprite_GetDrawFlag(*((u32*)(ov74_0223D454 + ((0x83 << 2) - 4))), *((u32*)(ov74_0223D454 + (0x83 << 2))));
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x82 << 2))), 1);
    Sprite_GetMatrixPtr(*((u32*)(r4 + (0x82 << 2))));
    // add r1, r2, r1
    *((u32*)(r0 + 4)) = ((6 << 0x12) >> 7);
    // str r1, [r4, r0]
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x34)), (((6 << 0x12) >> 7) - 1), *((u32*)(r0 + 4)));
}




void ov74_02235930(void) {
    // str r4, [sp]
    // add r5, r1, r4
    // add r4, r5, r4
    // str r4, [sp, #4]
    // str r5, [sp, #0x10]
    // str r4, [sp, #0x14]
    // str r4, [sp, #0x18]
    // str r4, [sp, #0x1c]
    // add r4, sp, #0
    *((u16*)((1 << 0xc) + 0x20)) = 0;
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // ldr r2, [sp, #0xc]
    // add r0, r2, r0
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    Sprite_CreateAffine(*((u32*)(ov74_0223D454 + (0x21 << 4))), ov74_0223D454, 2);
    Sprite_SetAnimActiveFlag(r0, 1);
    Sprite_SetPriority(r4, 0);
    // ldr r1, [sp, #0x40]
    Sprite_SetAnimCtrlSeq(r4);
    Sprite_SetDrawFlag(r4, 1);
}




void ov74_022359BC(void) {
    Sprite_Delete(*((u32*)(ov74_0223D454 + (0x82 << 2))));
    // str r1, [r4, r0]
    sub_0200AEB0(*((u32*)(ov74_0223D488 + (0x51 << 2))), (0x51 << 2));
    sub_0200AEB0(*((u32*)(ov74_0223D488 + (0x57 << 2))), (0x57 << 2));
    sub_0200B0A8(*((u32*)(ov74_0223D488 + (0x52 << 2))), (0x52 << 2));
    sub_0200B0A8(*((u32*)(ov74_0223D488 + (0x16 << 4))), (0x16 << 4));
    Destroy2DGfxResObjMan(*((u32*)(ov74_0223D488 + (0x4b << 2))));
    // str r6, [r5, r7]
    SpriteList_Delete(*((u32*)ov74_0223D488));
    // str r1, [r0]
    OamManager_Free(ov74_0223D488, 0);
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
    Main_SetVBlankIntrCB(0, 0);
}




void ov74_02235A68(void) {
    // sub r0, #0xa
    // lsl r1, r0
}




void ov74_02235A74(void) {
    // blx r1
    // str r1, [r4, r0]
    GF_RunVramTransferTasks(0x00000EA4, 0);
    OamManager_ApplyAndResetBuffers();
    DoScheduledBgGpuUpdates(*((u32*)r4));
    // str r0, [r3, r1]
}




void ov74_02235AC4(void) {
    // add r3, sp, #0
    // strb r1, [r3]
    // add r1, sp, #0
    // add r4, sp, #0
    // add r0, sp, #0
    // add r0, #1
}




void ov74_02235B14(void) {
    // str r0, [sp, #0x20]
    // ldr r4, [sp, #0x44]
    GetMonGender(r1);
    // str r0, [sp, #0x24]
    MonIsShiny(r6);
    // str r0, [sp]
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GetMonSpriteCharAndPlttNarcIdsEx(r4, ((r5 << 0x10) >> 0x10), ((r2 << 0x18) >> 0x18), 2);
    GetMonData(r6, 0, 0);
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x40]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r5, [sp, #0x1c]
    sub_02014494(*((u16*)r4), *((u16*)(r4 + 2)), *((u32*)(ov74_0223D454 + 8)), 0);
    // ldr r0, [sp, #0x40]
    DC_FlushRange((0x32 << 6));
    // ldr r0, [sp, #0x20]
    Sprite_GetImageProxy();
    NNS_G2dGetImageLocation(2);
    // ldr r0, [sp, #0x40]
    // add r1, r1, r2
    GXS_LoadOBJ(r0, (0x32 << 6));
    // ldr r0, [sp, #0x20]
    Sprite_GetPaletteProxy();
    NNS_G2dGetImagePaletteLocation(2);
    // str r0, [sp]
    // add r3, #0x60
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(*((u16*)r4), *((u16*)(r4 + 4)), 5, r0);
}




void ov74_02235BD0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp]
    // str r0, [r4, r1]
}




void ov74_02235C10(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    ov74_02235728(0x34, 0xa, 0, 0xb);
    ov74_0223589C(0, (1 << 0x14));
    // str r0, [sp]
    ov74_02235930(1, *((u32*)(r5 + (0x82 << 2))), 0x80, 0);
    // add r6, #8
    // str r0, [r5, r2]
    GetMonData(r6, 5, 0);
    GetMonData(r6, 0x70, 0);
    // add r0, r5, r1
    // str r0, [sp]
    // sub r1, #0xc
    // add r0, r5, r0
    // str r0, [sp, #4]
    ov74_02235B14(*((u32*)(r5 + (0x85 << 2))), r6, r4, r0);
    // add r0, #0xc
    // add r0, r5, r0
    // str r0, [sp]
    // add r0, r5, r0
    // str r0, [sp, #4]
    // sub r2, #0x1a
    ov74_02235B14(*((u32*)(r5 + r2)), r6, 0);
    // add r0, #0xc
    // add r0, r5, r0
    // str r0, [sp]
    // add r0, r5, r0
    // str r0, [sp, #4]
    // sub r2, #0x1a
    ov74_02235B14(*((u32*)(r5 + r2)), r6, 1);
}




void ov74_02235CE4(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02235CFA: ; jump table
    GetItemIndexMapping(((0x000001F5 << 0x10) >> 0x10), 1);
    GetItemIndexMapping(((r4 << 0x10) >> 0x10), 2);
    GetItemIconCell();
    GetItemIconAnim();
    // str r0, [sp]
    // str r0, [sp, #4]
    ov74_02235728(0x12, r7, r4, r6);
    ov74_0223589C(0, (1 << 0x14));
    // str r3, [sp]
    ov74_02235930(1, *((u32*)(r5 + (0x82 << 2))), 0x80, 0);
    // str r0, [r5, r1]
}




void ov74_02235DA4(void) {
}




void ov74_02235DC4(void) {
    ov74_02235AC4(*((u16*)r1));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x71, 0x22, r5, 5);
    // str r2, [sp]
    GfGfxLoader_LoadFromNarc(0x71, 0x23, 1, *((u32*)(ov74_0223D454 + 8)));
    // add r1, sp, #0x14
    // str r0, [sp, #0x10]
    NNS_G2dGetUnpackedScreenData();
    // ldr r2, [sp, #0x14]
    // add r2, #0xc
    BG_LoadScreenTilemapData(r5, 5, (6 << 8));
    // ldr r0, [sp, #0x10]
    Heap_Free();
    // str r0, [sp]
    // add r7, #8
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r5, 5, 0, 0);
    ScheduleBgTilemapBufferTransfer(r5, 5);
    *((u32*)(ov74_0223E2D4 + 0x24)) = ov74_02235DA4;
    // str r5, [r0]
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02235E62: ; jump table
    ov74_02235BD0(ov74_0223D454, r4, r6);
    // str r2, [r0, r1]
    ov74_02235C10(ov74_0223D454, r4, r6);
    ov74_02235CE4(ov74_0223D454, r4, r6);
    Sprite_SetDrawFlag(*((u32*)(ov74_0223D454 + (0x82 << 2))), 0);
}




void ov74_02235ED0(void) {
    // str r2, [sp]
    Heap_Alloc(r2, (2 << 8));
    MATHi_CRC16InitTableRev(0x0000A001);
    MATH_CalcCRC16(r4, r5, 0x50);
    Heap_Free(r4);
    // add r0, sp, #4
    OS_GetMacAddress();
    // add r0, sp, #4
    // add r3, sp, #4
    *((u16*)(r0 + 6)) = *((u16*)(r0 + 2));
    *((u16*)(r0 + 2)) = r6;
    // eor r0, r1
    // strh r0, [r3]
    // ldr r0, [sp]
    Heap_Alloc(*((u16*)r3), (0x41 << 2), (0 + 1), (r3 + 2));
    // add r1, sp, #4
    CRYPTO_RC4Init(8);
    // add r5, #0x50
    CRYPTO_RC4Encrypt(r4, r5, (0xd6 << 2), r7);
    Heap_Free(r4);
}




void ov74_02235F58(void) {
    // str r2, [sp]
    Heap_Alloc(r2, (2 << 8));
    MATHi_CRC16InitTableRev(0x0000A001);
    MATH_CalcCRC16(r4, r5, 0x50);
    Heap_Free(r4);
    sub_02035754(0);
    // add r1, sp, #4
    // strb r2, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(r0 + 5));
    *((u8*)(r1 + 2)) = *((u8*)(r0 + 6));
    *((u8*)(r1 + 3)) = *((u8*)(r0 + 7));
    *((u8*)(r1 + 4)) = *((u8*)(r0 + 8));
    *((u8*)(r1 + 5)) = *((u8*)(r0 + 9));
    // add r0, sp, #4
    *((u16*)(*((u8*)(r0 + 9)) + 6)) = *((u16*)(*((u8*)(r0 + 9)) + 2));
    *((u16*)(*((u8*)(r0 + 9)) + 2)) = r6;
    // eor r0, r2
    // strh r0, [r1]
    // ldr r0, [sp]
    Heap_Alloc(*((u16*)r1), (0x41 << 2), *((u16*)r1), (0 + 1));
    // add r1, sp, #4
    CRYPTO_RC4Init(8);
    // add r5, #0x50
    CRYPTO_RC4Encrypt(r4, r5, (0xd6 << 2), r7);
    Heap_Free(r4);
}




void ov74_02235FF8(void) {
}




void ov74_02236010(void) {
    // and r0, r1
    // asr r0, r0, #0xf
    CTRDG_IsAgbCartridge((2 << 0xe), *((u16*)0x027FFFA8));
    CTRDG_TerminateForPulledOut();
}




void ov74_02236034(void) {
    // strh r0, [r1]
    OS_SetIrqFunction((0x04000208 >> 0xd), ov74_02236010);
    OS_EnableIrqMask((2 << 0xc));
    // strh r0, [r1]
    OS_DisableIrqMask((2 << 0xc), 0x04000208);
}




void ov74_02236070(void) {
    // bx lr
    // TODO: decompile
}




void ov74_02236074(void) {
    // strh r0, [r1]
    OS_SetIrqFunction((0x04000208 >> 0xd), ov74_02236070);
    OS_EnableIrqMask((2 << 0xc));
    // strh r0, [r1]
}




void ov74_022360A0(void) {
    *((u32*)(ov74_0223D454 + 0x18)) = r0;
    *((u32*)(ov74_0223D454 + 0x14)) = 0;
}




void ov74_022360B0(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022360C8: ; jump table
    sub_0201A728(4);
    Save_PrepareForAsyncWrite(*((u32*)(r4 + 0x18)), 2);
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) + 1);
    Save_WriteFileAsync(*((u32*)(r4 + 0x18)));
    *((u32*)(r4 + 0x14)) = 3;
    *((u32*)(r4 + 0x14)) = 2;
    *((u32*)(r4 + 0x14)) = 4;
    sub_0201A738(4);
}




void ov74_02236128(void) {
    *((u32*)(ov74_0223D454 + 0x14)) = 1;
}




void ov74_02236140(void) {
    Save_Cancel(*((u32*)(ov74_0223D454 + 0x18)));
    *((u32*)(ov74_0223D454 + 0x14)) = 3;
    sub_0201A738(4, 3);
}




void ov74_0223615C(void) {
    // ldr r0, _02236164 ; =ov74_0223D454
    // ldr r0, [r0, #0x14]
    // bx lr
    // nop
    // _02236164: .word ov74_0223D454
    // TODO: decompile
}




void ov74_02236168(void) {
    // blx r2
    // str r4, [r0, r1]
    // blx r2
}




void ov74_022361B8(void) {
    // sub r2, #9
    // str r0, [r3, r1]
}




void ov74_022361D4(void) {
    OS_Terminate(*((u32*)(*((u32*)ov74_0223E2FC) + 0x00001150)), *((u32*)ov74_0223E2FC));
    ov74_02236168(2);
    // strh r0, [r2, r1]
    // strh r0, [r4, r2]
    // strh r0, [r2, r1]
    ov74_02236258(0x0000FFFF, (0x00000FCC - 4), *((u32*)ov74_0223E2FC), ov74_0223E2FC);
    ov74_02236168(9);
    // blx r1
    // strh r3, [r2, r0]
    // add r0, #0x24
    // blx r1
}




void ov74_02236258(void) {
    OS_Terminate(*((u32*)(*((u32*)ov74_0223E2FC) + 0x00001150)), *((u32*)ov74_0223E2FC));
    WM_GetAllowedChannel(0);
    ov74_022361B8(3);
    ov74_022361B8(0x16);
    // sub r1, #0x10
    _s32_div_f((*((u16*)(*((u32*)ov74_0223E2FC) + 0x00001176)) + 1), 0xd, *((u32*)ov74_0223E2FC));
    // lsl r0, r1
    // tst r0, r4
    // add r4, #0x10
    // strh r4, [r3, r0]
    // strh r3, [r1, r0]
    // strh r1, [r2, r0]
    // strh r3, [r1, r0]
    // sub r1, #0xc6
    // add r1, r3, r1
    // str r1, [r3, r0]
    // add r4, r3, r5
    // strb r3, [r4, r1]
    // add r1, r2, r1
    WM_StartScan(ov74_02236354, (0x3f << 6), *((u32*)ov74_0223E2FC), *((u8*)(r1 + 0x00001170)));
    ov74_022361B8();
}




void ov74_02236354(void) {
    ov74_022361B8(*((u16*)(r0 + 2)));
    ov74_02236168(9);
    // blx r1
    ov74_0223648C(*((u32*)(*((u32*)ov74_0223E2FC) + 0x00001150)), *((u32*)ov74_0223E2FC));
    ov74_02236168(9);
    // blx r1
    // add r0, r1, r0
    DC_InvalidateRange((0xf << 8), 0xc0);
    // blx r3
    // str r3, [r2, r0]
    // sub r0, #0x14
    // add r0, #0x48
    ov74_022366E8(r4, *((u32*)ov74_0223E2FC), *((u32*)ov74_0223E2FC), *((u16*)(r4 + 0x12)));
    // add r3, r4, r0
    // add r3, r3, r0
    // strb r5, [r3, r1]
    // sub r2, #0xf
    // strh r2, [r3, r0]
    // blx r1
    // add r4, #0x48
    ov74_02236768(r4, *((u32*)(*((u32*)ov74_0223E2FC) + (0x00001176 + 6))), *((u16*)(*((u32*)ov74_0223E2FC) + 0x00001176)), *((u32*)ov74_0223E2FC));
    // strh r2, [r1, r0]
    ov74_022365FC(0x00001158, *((u32*)ov74_0223E2FC), 4);
    ov74_02236258();
    ov74_02236168(9);
    // blx r1
}




void ov74_0223648C(void) {
    WM_EndScan(ov74_022364A8);
    ov74_022361B8();
}




void ov74_022364A8(void) {
}




void ov74_022364C0(void) {
    ov74_02236168(0xa);
    ov74_02236168(0);
    // blx r1
}




void ov74_022364F0(void) {
}




void ov74_02236514(void) {
    ov74_02236168(9);
    // blx r1
}




void ov74_0223653C(void) {
    ov74_02236168(3);
    WM_Initialize(*((u32*)ov74_0223E2FC), ov74_02236570, 2);
    ov74_022361B8();
    ov74_02236168(0xa);
}




void ov74_02236570(void) {
    ov74_022361B8(*((u16*)(r0 + 2)));
    ov74_02236168(0xa);
    WM_SetIndCallback(ov74_02236514);
    ov74_022361B8();
    ov74_02236168(0xa);
    ov74_02236168(1);
    ov74_022361D4();
}




void ov74_022365AC(void) {
    OS_Terminate(*((u32*)(*((u32*)ov74_0223E2FC) + 0x00001150)), *((u32*)ov74_0223E2FC));
    ov74_02236168(3);
    WM_End(ov74_022364C0);
    ov74_02236168(9);
    // blx r1
}




void ov74_022365FC(void) {
    ov74_022365AC(*((u32*)(*((u32*)ov74_0223E2FC) + 0x00001150)), *((u32*)ov74_0223E2FC));
    ov74_02236620();
}




void ov74_02236620(void) {
    ov74_02236168(3);
    WM_Reset(ov74_02236644);
    ov74_022361B8();
}




void ov74_02236644(void) {
    ov74_02236168(9);
    ov74_022361B8(*((u16*)(r4 + 2)));
    // blx r1
    ov74_02236168(1, *((u32*)(*((u32*)ov74_0223E2FC) + 0x0000117C)));
    ov74_022365AC();
}




void ov74_02236680(void) {
    // add r2, #0x1f
    // str r2, [r4]
    // str r0, [r2, r3]
    // add r2, #8
    // strh r6, [r5, r2]
    // add r2, #0x28
    // str r7, [r5, r2]
    // add r2, #0xc
    // strh r0, [r5, r2]
    // add r2, #0xe
    // strh r0, [r5, r2]
    // add r2, #0x2c
    // str r1, [r5, r2]
    // add r2, #0x26
    // strh r1, [r5, r2]
    // sub r1, #0x11
    // str r0, [r5, r2]
    // add r3, #0x1c
    // str r1, [r0, r3]
    ov74_022364F0(*((u32*)ov74_0223E2FC), 0x10, 0x00001048, 0x00001150);
}




void ov74_022366E8(void) {
    // str r4, [r2, r1]
    // strh r4, [r1, r2]
    // strh r5, [r4, r1]
    // add r0, #8
    // str r4, [r1, r0]
    // add r2, #8
    _u32_div_f((*((u32*)(*((u32*)ov74_0223E2FC) + 0x00001158)) - 1), 0x68, 0x00001158, ov74_0223E2FC);
    // strh r0, [r4, r2]
    // strh r0, [r3, r1]
    // add r1, #8
    // str r0, [r3, r1]
    // sub r3, #0x24
    // add r1, r1, r0
    // strb r6, [r1, r2]
}




void ov74_02236768(void) {
    // str r1, [r3, r0]
    ov74_022366E8(r0, (*((u32*)(*((u32*)ov74_0223E2FC) + 0x00001164)) + 1), *((u32*)(*((u32*)ov74_0223E2FC) + 0x00001164)), *((u32*)ov74_0223E2FC));
    // blx r1
    // add r4, #8
    // add r1, r2, r1
    MIi_CpuCopy32(r4, (0xfe << 4), 0x68, *((u16*)(r4 + 2)));
    // str r2, [r1, r0]
    // str r3, [r2, r0]
    // sub r1, #0xc
    // add r0, #0x14
    // blx r1
    ov74_02236168(9, *((u32*)(*((u32*)ov74_0223E2FC) + 0x00001168)), *((u16*)(r4 + 2)), *((u32*)ov74_0223E2FC));
    // add r5, r1, r2
    // strb r1, [r5, r3]
    // sub r0, #0x24
    // sub r1, #8
    // sub r2, #0x20
    // add r4, #8
    // add r1, r1, r3
    // sub r2, r2, r3
    MIi_CpuCopy32(r4, *((u32*)(*((u32*)ov74_0223E2FC) + (0x46 << 6))), *((u32*)(*((u32*)ov74_0223E2FC) + (0x46 << 6))), (*((u16*)(r4 + 2)) * 0x68));
    // add r4, #8
    // sub r2, #8
    // add r1, r4, r3
    MIi_CpuCopy32(r4, 0x68, (r1 * 0x68));
    // strh r2, [r3, r0]
    // add r0, #0x1e
    // blx r1
}




void ov74_022368A4(void) {
    // add r2, r2, r4
    // asr r2, r2, #0xf
}




void ov74_022368D4(void) {
    // add r1, sp, #0
    // add r3, r4, r0
    // sub r0, #0x16
    // strh r2, [r1]
    *((u16*)(r1 + 6)) = *((u16*)(r3 + 2));
    // add r3, sp, #0
    *((u16*)(r1 + 4)) = *((u16*)(r3 + 4));
    *((u16*)(r1 + 2)) = *((u16*)(*((u32*)ov74_0223E2FC) + 0x00001170));
    // eor r0, r2
    // strh r0, [r3]
    // add r0, r1, r0
    // add r1, sp, #0
    CRYPTO_RC4Init(0x0000104C, *((u32*)ov74_0223E2FC), 8, (r3 + 2));
    // sub r2, #0x18
    // add r0, r3, r0
    CRYPTO_RC4Encrypt(0x0000104C, *((u32*)(*((u32*)ov74_0223E2FC) + 0x00001178)), *((u32*)(*((u32*)ov74_0223E2FC) + 0x00001178)), *((u32*)(*((u32*)ov74_0223E2FC) + 0x00001178)));
    // add r1, r1, r2
    MIi_CpuClear32(0, *((u32*)ov74_0223E2FC), (0x0000104C >> 4));
    // sub r1, #0x18
    ov74_022368A4(*((u32*)(*((u32*)ov74_0223E2FC) + 0x00001178)), *((u32*)(*((u32*)ov74_0223E2FC) + 0x00001178)), *((u32*)ov74_0223E2FC));
}




void ov74_02236980(void) {
    // ldr r0, _02236984 ; =0x000016A0
    // bx lr
    // _02236984: .word 0x000016A0
    // TODO: decompile
}




void ov74_02236988(void) {
    // sub r0, #0x68
    // add r0, r2, r0
}




void ov74_022369A8(void) {
    // add r1, #0x24
    // add r1, #0x20
    // add r2, #0x20
    // str r0, [r1]
}




void ov74_022369C8(void) {
}




void ov74_022369D8(void) {
    // add r0, sp, #0
    // add r1, sp, #4
    ov00_021EC11C();
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // neg r0, r0
    ov00_021E6A70();
    // str r0, [r4, r2]
    // ldr r0, [sp]
    // neg r1, r0
    // str r1, [r4, r0]
    // ldr r1, [sp, #4]
    // add r0, #8
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // add r2, #0x10
    *((u32*)(ov74_0223E304 + 0x10)) = 1;
    // str r1, [r4, r2]
    ov74_02229E60(r4, 0, 0x0000266C);
}




void ov74_02236A2C(void) {
    // add r0, sp, #0
}




void ov74_02236A54(void) {
    // str r4, [r3]
    *((u32*)(ov74_0223E304 + 0xc)) = 0;
    // str r2, [r0, r3]
    // str r0, [r1]
}




void ov74_02236A78(void) {
    *((u32*)(ov74_0223E304 + 4)) = 0;
    *((u32*)(ov74_0223E304 + 8)) = r1;
    // str r3, [r0, r1]
    // str r0, [r4]
    ov00_021ED308(ov74_02236ABC, 0x00001650, ov74_0223E304);
    // ldr r0, [sp, #0x10]
    // str r0, [r4]
}




void ov74_02236AAC(void) {
    // str r2, [r0]
    *((u32*)(ov74_0223E304 + 0xc)) = r1;
}




void ov74_02236ABC(void) {
    *((u32*)(ov74_0223E304 + 4)) = 1;
}




void ov74_02236AC8(void) {
}




void ov74_02236AE0(void) {
    OverlayManager_GetData();
    // blx r0
    ov74_022369D8(r0);
    // str r0, [r5]
    // sub r0, r0, r3
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02236B1A: ; jump table
    sub_02034D8C((*((u16*)(*((u32*)r5) + 6)) << 0x10), (1 << 0xc));
    LoadDwcOverlay();
    LoadOVY38();
    sub_02039FD8(3);
    // str r0, [r5]
    sub_02034DB8(0x00001001);
    ov00_021EC294(ov74_022369A8, ov74_022369C8);
    sub_020394A0(*((u32*)(r4 + 4)));
    // str r0, [r5]
    // add r0, r4, r0
    ov00_021EC3F0(0x000015E8, 2, 1, 0x14);
    ov00_021EC454(2);
    ov00_021EC4A4();
    sub_0203A880();
    // str r0, [r5]
    // str r1, [r4, r0]
    ov00_021EC60C(0x00002678, 0);
    ov00_021EC5B4();
    ov74_02236A2C(r4);
    *((u32*)(ov74_0223E304 + 8)) = 3;
    // str r0, [r5]
    // str r0, [r5]
    ov74_022369D8(r4, 3);
    // str r0, [r5]
    // tst r0, r1
    // str r1, [r4, r0]
    ov00_021ECD04(0x00002678, 1);
    ov74_022369D8(r4);
    // str r0, [r5]
    // str r0, [r5]
    ov00_021ECDC8(0x00001005);
    // str r0, [r5]
    // str r1, [r4, r0]
    ov74_022369D8(r4, ov00_021ECB40);
    // str r0, [r5]
    ov00_021EC8D8();
    *((u32*)(ov74_0223E304 + 8)) = 3;
    // str r0, [r5]
    // tst r0, r1
    ov00_021ECEC0(2, *((u32*)(gSystem + 0x48)));
    ov00_021ED1F0(ov74_02236AAC, ov74_0223D038, ov74_0223D040);
    ov74_022369D8(r4);
    // str r0, [r5]
    ov74_02236A54(r4, r5, 0x00001007);
    // add r3, #0xc
    // str r3, [sp]
    ov74_02236A78(r4, 3, r5);
    ov00_021ED354(ov74_0223D054, ov74_0223D054, ov74_0223D054);
    ov74_022369D8(r4);
    // str r0, [r5]
    // str r0, [r5]
    // add r0, r4, r0
    ov00_021ED388(0x00001654);
    ov74_022369D8(r4);
    // str r0, [r5]
    ov74_02236A54(r4, r5, 0x00001009);
    // add r3, #0xd
    // str r3, [sp]
    ov74_02236A78(r4, 2, r5);
    ov00_021ED3AC(ov74_0223E318, 0, 0xa);
    ov74_022369D8(r4);
    // str r0, [r5]
    ov74_02236A54(r4, r5, 0x0000100A);
    // add r1, r4, r1
    ov00_021ED3F4(ov74_0223E318, 0x00001658, r3);
    ov74_022369D8(r4);
    // str r0, [r5]
    // str r0, [r5]
    // str r1, [r4, r0]
    // tst r0, r1
    // add r3, #0xc
    // str r3, [sp]
    ov74_02236A78(r4, 3, r5);
    // add r0, r4, r1
    // add r1, r4, r1
    ov00_021ED444((0x0000265C + 4));
    _u32_div_f((0x64 * *((u32*)(r4 + 0x0000265C))), *((u32*)(r4 + (0x0000265C + 4))), *((u32*)(r4 + 0x0000265C)));
    // str r0, [r4, r1]
    ov74_022369D8(r4, 0x00002664, *((u32*)(r4 + 0x00002664)));
    // str r0, [r5]
    // add r3, #0xd
    // str r3, [sp]
    ov74_02236A78(r4, 1, r5);
    // add r3, #0xd
    // str r3, [sp]
    ov74_02236A78(r4, 3, r5);
    ov00_021ED428();
    // str r0, [r5]
    // str r1, [r4, r0]
    ov74_02236AC8(0x0000267C, 0);
    ov00_021EC938(*((u32*)(ov74_0223E304 + 8)));
    // str r1, [r4, r0]
    ov74_02236AC8(0x0000267C, 0);
    ov74_0222ACD8(r4);
    // str r3, [sp]
    ov74_02236A78(r4, 3, r5, (0x00001010 + 1));
    // str r0, [r5]
    ov00_021EC8D8(0x00001011);
    // str r0, [r5]
    // tst r0, r1
    // str r1, [r4, r0]
    ov00_021EC210(0x0000267C, 0);
    ov74_02236AC8();
    // str r1, [r0]
    ov74_022369D8(r4, 0);
    // str r0, [r5]
    // str r0, [r5]
    // tst r0, r1
    // str r1, [r4, r0]
    *((u32*)(ov74_0223E304 + 4)) = 0;
    // str r0, [r5]
    // tst r0, r1
    // str r1, [r4, r0]
}




void ov74_02236F30(void) {
    // cmp r0, #1
    // bne _02236F38
    // mov r0, #1
    // b _02236F3A
    // ldr r0, _02236F40 ; =0x000001DE
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // _02236F40: .word 0x000001DE
    // TODO: decompile
}




void ov74_02236F44(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02236F54: ; jump table
}




void ov74_02236F80(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02236F90: ; jump table
}




void ConvertRSStringToDPStringInternational(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r4, [sp, #4]
    // add r7, r1, r0
    // ldr r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #4]
    // strh r0, [r2]
    // ldr r0, [sp, #4]
    // strh r2, [r0, r1]
    ov74_02236F30(r3, ((0 + 1) << 1), 0x0000FFFF, 0xa);
    // strh r0, [r4]
    ov74_02236F44(r5);
    // strh r0, [r4]
    ov74_02236F80(r5);
    // strh r0, [r4]
    // strh r0, [r4]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // strh r2, [r0, r1]
}



