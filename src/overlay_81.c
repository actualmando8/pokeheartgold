/* Decompiled from asm/overlay_81.s */
#include "global.h"

void ov81_0223DD60(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    ov81_02240D2C();
    Heap_Create(3, 0x64, (3 << 0x10));
    OverlayManager_CreateAndGetData(r5, 0x0000048C, 0x64);
    memset(0, 0x0000048C);
    // str r2, [sp]
    // str r0, [sp, #4]
    GF_3DVramMan_Create(0x64, 0, 2, 0);
    // str r0, [r4, r1]
    BgConfig_Alloc(0x64, (0x69 << 2));
    *((u32*)(r4 + 0x4c)) = r0;
    // str r5, [r4]
    OverlayManager_GetArgs(r5);
    // str r1, [r4, r3]
    *((u8*)(r4 + 9)) = *((u8*)(r0 + 4));
    *((u8*)(r4 + 0xa)) = *((u8*)(r0 + 5));
    *((u8*)(r4 + 0xb)) = *((u8*)(r0 + 6));
    // str r1, [r4, r2]
    // str r5, [r4, r1]
    // add r0, #0x10
    // add r2, #0x14
    // str r0, [r4, r2]
    Save_PlayerData_GetOptionsAddr(*((u32*)(r4 + (0x6f << 2))), ((0xf << 6) + 4), (0xf << 6), (0x6f << 2));
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x14)) = 8;
    ov81_02240F08(r4, 0);
    *((u8*)(r4 + 0x12)) = 6;
    ov81_02243240(r4, 0);
    // str r0, [r4, r1]
    ov80_02237254(*((u8*)(r4 + 9)), 0x00000464);
    *((u8*)(r4 + 0x12)) = 2;
    *((u8*)(r4 + 0x1a)) = 3;
    *((u8*)(r4 + 0x1b)) = 6;
    ov81_022432DC(r4, 0);
    // str r0, [r4, r1]
    *((u8*)(r4 + 0x12)) = 3;
    *((u8*)(r4 + 0x1a)) = 4;
    *((u8*)(r4 + 0x1b)) = 5;
    ov81_022432AC(r4, 0);
    // str r0, [r4, r1]
    ov80_02237254(*((u8*)(r4 + 9)), 0x00000464);
    // str r1, [r4, r0]
    // add r0, r4, r0
    ov81_02241BB8(0x0000046C, 3);
    ov81_02240D64(r4);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    ov80_02237254(*((u8*)(r4 + 9)));
    sub_02096910(r4);
    // str r0, [r6]
}





void ov81_0223DEA8(void) {
    OverlayManager_GetData();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223DECC: ; jump table
    ov81_022404AC(r5, 0xb);
    ov81_02242514(r4);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223DF08: ; jump table
    ov81_0223E318(r4);
    ov81_022404AC(r4, r5, 1);
    ov81_0223EC88(r4);
    ov81_022404AC(r4, r5, 1);
    ov81_0223E520(r4);
    ov81_02240F08(r4, 0);
    ov81_022404AC(r4, r5, 3);
    ov81_022404AC(r4, r5, 6);
    ov81_02241144(r4);
    ov81_0223ECE4(r4);
    ov81_022404AC(r4, r5, 2);
    ov81_02240F18(*((u8*)(r4 + 9)));
    ov81_022404AC(r4, r5, 4);
    ov81_02240F28(r4);
    ov81_022404AC(r4, r5, 0xd);
    ov81_022404AC(r4, r5, 3);
    ov81_02241144(r4);
    ov81_0223F1A4(r4);
    ov81_02240F18(*((u8*)(r4 + 9)));
    ov81_022404AC(r4, r5, 0xd);
    ov81_022404AC(r4, r5, 5);
    ov81_0223F314(r4);
    ov81_022404AC(r4, r5, 3);
    ov81_0223F38C(r4);
    ov81_022404AC(r4, r5, 2);
    ov81_02240F28(r4);
    ov81_02240F38(r4, 0);
    ov81_022404AC(r4, r5, 7);
    ov81_022404AC(r4, r5, 0xa);
    ov81_0223F6A8(r4);
    ov81_02240F28(r4);
    ov81_02240F38(r4, 0);
    ov81_022404AC(r4, r5, 6);
    ov80_02237254(*((u8*)(r4 + 9)));
    *((u8*)(r4 + 0x13)) = (*((u8*)(r4 + 0x13)) & ~(8));
    ov81_022404AC(r4, r5, 0xb);
    ov81_022404AC(r4, r5, 0xd);
    ov81_0223F770(r4);
    ov81_02240F28(r4);
    ov81_02240F38(r4, 0);
    ov81_022404AC(r4, r5, 9);
    ov81_022404AC(r4, r5, 0xa);
    ov80_02237254(*((u8*)(r4 + 9)));
    ov81_022404AC(r4, r5, 0xb);
    ov81_022404AC(r4, r5, 0xd);
    ov81_0223FBAC(r4);
    ov81_02240F28(r4);
    ov81_02240F38(r4, 0);
    ov81_022404AC(r4, r5, 8);
    ov80_02237254(*((u8*)(r4 + 9)));
    *((u8*)(r4 + 0x13)) = (*((u8*)(r4 + 0x13)) & ~(8));
    ov81_022404AC(r4, r5, 0xb);
    ov81_022404AC(r4, r5, 0xd);
    ov81_0223FC74(r4);
    ov81_0223E8BC(r4);
    ov81_022404AC(r4, r5, 6);
    ov81_0223EA98(r4);
    ov81_022404AC(r4, r5, 8);
    ov81_02240008(r4);
    ov81_022404AC(r4, r5, 0xe);
    ov81_022404AC(r4, r5, 0xc);
    ov81_02240048(r4);
    ov81_022404AC(r4, r5, 0xd);
    ov81_02240088(r4);
    ov81_022400D0(r4);
    ov81_022404AC(r4, r5, 0xc);
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + (0x71 << 2))));
    ov81_02242C48(*((u32*)(r4 + (0x6a << 2))));
}





void ov81_0223E234(void) {
    // str r0, [sp]
    OverlayManager_GetData();
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r0 + (0x1a << 4))));
    PaletteData_ScheduleFadeTaskEndIfNoSelectedBuffers(*((u32*)(r4 + (0x1a << 4))));
    // str r1, [r4, r0]
    ov81_02240F08(r4, 0);
    ov81_02240F18(*((u8*)(r4 + 9)));
    // add r0, #0xc
    // strh r1, [r0, r5]
    ov81_02240F18(*((u8*)(r4 + 9)), *((u16*)(r4 + (0xf2 << 2))));
    // add r0, #0xc
    // strh r2, [r1, r5]
    // strh r2, [r1]
    *((u16*)(*((u32*)(r4 + (0xf5 << 2))) + 2)) = 0xff;
    TextFlags_SetCanTouchSpeedUpPrint(0, *((u32*)(r4 + (0xf5 << 2))), 0xff, (r4 + 2));
    ov81_02241BC8(*((u32*)(r4 + 0x0000046C)));
    ov81_02243220(*((u32*)(r4 + 0x00000464)));
    ov81_02240BB0(r4);
    // ldr r0, [sp]
    OverlayManager_FreeData();
    Main_SetVBlankIntrCB(0, 0);
    Heap_Destroy(0x64);
    UnloadOverlayByID(FS_OVERLAY_ID);
}





void ov81_0223E318(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E330: ; jump table
    ov80_02237254(*((u8*)(r0 + 9)), (*((u16*)(*((u8*)(r0 + 8)) + 6)) << 0x10));
    sub_02037BEC();
    sub_02037AC0(0xed);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov80_02237254(*((u8*)(r4 + 9)));
    sub_02037B38(0xed);
    sub_02037BEC();
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov81_02242F30(*((u32*)(r4 + (0x36 << 4))));
    ov81_02242F60(*((u32*)(r5 + r7)));
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x4c)), 6, 0, (0x42 << 2));
    Pokepic_SetAttr(*((u32*)(r4 + (0x6b << 2))), 6, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 8)) + 1));
    PlaySE(0x00000611);
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov81_022404B4((*((u8*)(r4 + 8)) + 1));
    StopSE(0x00000611, 0);
    PlaySE(0x00000678);
    ov81_02242F94(*((u32*)(r4 + (0x36 << 4))), 4);
    ov81_02240658(r4, 0);
    *((u32*)(r4 + 0x14)) = 8;
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov81_02242DD8(*((u32*)(r4 + (0xe << 6))));
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    GfGfx_EngineATogglePlanes(2, 0);
    ov81_02240F08(r4, 0);
    Pokepic_SetAttr(*((u32*)(r4 + (0x6b << 2))), 6, 0);
    // str r0, [sp]
    Pokepic_StartPaletteFadeAll(*((u32*)(r4 + (0x6a << 2))), 0x10, 0, 1);
    Pokepic_SetAttr(*((u32*)(r4 + (0x6b << 2))), 6, 0);
    // str r0, [sp]
    Pokepic_StartPaletteFadeAll(*((u32*)(r4 + (0x6a << 2))), 0x10, 0, 1);
    Pokepic_ResumePaletteFade(*((u32*)(r4 + (0x6b << 2))));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    *((u8*)(r4 + 0x19)) = 0;
    ov81_02241398(r4);
}





void ov81_0223E520(void) {
    // add r1, #0x60
    // str r2, [sp]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}





void ov81_0223E5B4(void) {
    ov80_02236DD4(*((u8*)(r0 + 9)));
    // str r0, [sp, #0x18]
    ov81_02240F38(r5, 0);
    ov81_02241524(r5);
    // add r2, sp, #0x28
    // add r3, sp, #0x24
    ov81_02243228(*((u32*)(r5 + 0x00000464)), *((u32*)(r5 + (0x00000464 + 4))));
    // str r1, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov81_02242D18((0x71 << 2), 0, 2, 0);
    // str r0, [r5, r1]
    // add r1, #0xdc
    // add r2, sp, #0x28
    // add r3, sp, #0x24
    ov81_02243228(*((u32*)(r5 + (0xe2 << 2))), 6);
    // str r1, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov81_02242D18((0x71 << 2), 0, 3, 0);
    // str r0, [r5, r1]
    // add r1, sp, #0x28
    // add r2, sp, #0x24
    ov81_02241CA0(r5, (0xe3 << 2));
    // str r2, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov81_02242CBC((0x71 << 2), 1, 0, 0);
    // str r0, [r5, r1]
    ov81_02241F50(r5, (0x39 << 4));
    ov81_02241FEC(r5);
    ov81_022420B4(r5);
    ov81_0224218C(r5);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov81_02242D18((0x71 << 2), 4, 0, 0);
    // str r0, [r5, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov81_02242D18((0x71 << 2), 5, 0, 0);
    // str r0, [r5, r2]
    // add r1, #0x28
    // add r2, #0xd0
    ov81_02242218(r5, *((u32*)(r5 + (0xe6 << 2))), *((u32*)(r5 + (0xe6 << 2))), 6);
    ov81_02242300(r5, *((u32*)(r5 + 0x00000468)), 6);
    sub_020196E8(*((u32*)(r5 + 0x00000474)), 0, 7, 0);
    // str r2, [sp]
    // add r1, #0x50
    ov81_022408C4(r5, r5, 0, 0);
    // add r1, r5, r0
    ov81_02242F48(*((u32*)(r1 + (0x36 << 4))));
    // add r1, r5, r0
    ov81_02242FB0(*((u32*)(r1 + (0x36 << 4))), 0);
    // add r0, r5, r0
    ov81_02242F94(*((u32*)((*((u16*)(r4 + (0xf2 << 2))) << 2) + r7)), 1);
    Options_GetFrame(*((u32*)(r5 + (0x6e << 2))));
    // add r0, #0xc0
    ov81_02243028(r5, r0);
    ov81_022408A0(r5, 0, (*((u8*)(r5 + 0x11)) + 1));
    ov81_0224086C(r5, 0);
    *((u8*)(r5 + 0x10)) = r0;
    ov81_02241D0C(r5);
    // str r0, [sp, #0x1c]
    Pokepic_SetAttr(*((u32*)(r5 + (0x6b << 2))), 6, 0);
    // ldr r0, [sp, #0x1c]
    // add r1, r5, r0
    Pokepic_SetAttr(*((u32*)(r1 + (0x6b << 2))), 6, 0);
    // ldr r1, [sp, #0x1c]
    ov81_02241E68(r5, *((u32*)(r5 + 0x00000468)), 0);
    ov81_02241FEC(r5);
    // ldr r0, [sp, #0x1c]
    // add r2, sp, #0x28
    // add r3, sp, #0x24
    ov81_02241C84(*((u32*)(r5 + 0x0000047C)));
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x24]
    ov81_02242D94(*((u32*)(r5 + (0x39 << 4))));
    ov81_02240658(r5, 0xff);
    ov81_02241450(r5);
    // ldr r0, [sp, #0x18]
    // add r7, #0x50
    // str r0, [sp, #0x20]
    // add r0, r7, r0
    FillWindowPixelBuffer(((0 + 5) << 4), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x20]
    // add r1, r7, r1
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov81_02240AD8(r5, 0, 0);
    // ldr r0, [sp, #0x20]
    // add r0, r7, r0
    ScheduleWindowCopyToVram();
    // ldr r0, [sp, #0x18]
    ov81_022414E0(r5);
}





void ov81_0223E87C(void) {
    // str r0, [r5, r1]
}





void ov81_0223E8B0(void) {
}





void ov81_0223E8BC(void) {
    ov81_02240F38(0);
    ov81_02243370(r5, *((u32*)(r5 + 0x00000464)));
    // str r0, [r5, r1]
    ov81_0224185C(r5, 0x00000464);
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    ov81_02243228(*((u32*)(r5 + 0x00000464)), *((u32*)(r5 + (0x00000464 + 4))));
    // str r1, [sp]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov81_02242D18((0x71 << 2), 0, 2, 0);
    // str r0, [r5, r1]
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r0, r5, r0
    // str r2, [sp, #8]
    ov81_02242CBC(((0xe2 << 2) >> 1), 1, 0, 0);
    // str r0, [r5, r1]
    ov81_02241D38(r5, (0x39 << 4));
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    ov81_02243228(*((u32*)(r5 + 0x00000464)), 4);
    // str r1, [sp]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov81_02242D18((0x71 << 2), 0, 3, 0);
    // str r0, [r5, r1]
    ov81_02241F50(r5, (0xe3 << 2));
    ov81_02242058(r5, 0);
    ov81_022420B4(r5);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov81_02242D18((0x71 << 2), 4, 0, 0);
    // str r0, [r5, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov81_02242D18((0x71 << 2), 5, 0, 0);
    // str r0, [r5, r2]
    // add r1, #0x28
    // add r2, #0xd0
    ov81_02242218(r5, *((u32*)(r5 + (0xe6 << 2))), *((u32*)(r5 + (0xe6 << 2))), 4);
    ov81_022423D0(r5, *((u32*)(r5 + (0xf << 6))));
    sub_020196E8(*((u32*)(r5 + 0x00000474)), 0, 7, 0);
    // add r1, #0x50
    // str r2, [sp]
    ov81_022408C4(r5, r5, 0, 0);
    Options_GetFrame(*((u32*)(r5 + (0x6e << 2))));
    // add r0, #0xc0
    ov81_02243028(r5, r0);
    ov81_0224086C(r5, 9);
    *((u8*)(r5 + 0x10)) = r0;
    Pokepic_SetAttr(*((u32*)(r5 + (0x6b << 2))), 6, 0);
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    ov81_02241C84(*((u32*)(r5 + 0x00000468)), *((u32*)(r5 + r7)));
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    ov81_02242D94(*((u32*)(r5 + (0x39 << 4))));
    ov81_02240658(r5, 0xff);
    ov81_0224174C(r5);
    ov81_02242E08(*((u32*)(r5 + (0xe2 << 2))), 1);
    ov81_022417B4(r5);
    ov81_02242E08(*((u32*)(r5 + (0xe2 << 2))), 0);
}





void ov81_0223EA98(void) {
    ov81_02243398(*((u32*)(r0 + 0x00000464)));
    // str r0, [r4, r1]
    ov81_02241A98(r4, 0x00000464);
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    ov81_02243228(*((u32*)(r4 + 0x00000464)), 0);
    // str r1, [sp]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r4, r0
    ov81_02242D18((0x71 << 2), 0, 2, 0);
    // str r0, [r4, r1]
    // add r0, #0xe0
    // add r1, #0xf4
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    ov81_02241C84(*((u32*)(r4 + (0xe2 << 2))), *((u32*)(r4 + (0xe2 << 2))));
    // str r2, [sp]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r4, r0
    ov81_02242CBC((0x71 << 2), 1, 0, 0);
    // str r0, [r4, r1]
    // add r1, #0xd4
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    ov81_02243228(*((u32*)(r4 + (0x39 << 4))), 6);
    // str r1, [sp]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r4, r0
    ov81_02242D18((0x71 << 2), 0, 3, 0);
    // str r0, [r4, r1]
    ov81_02241F50(r4, (0xe3 << 2));
    ov81_02242058(r4, 1);
    ov81_022420B4(r4);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r0
    ov81_02242D18((0x71 << 2), 4, 0, 0);
    // str r0, [r4, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r0
    ov81_02242D18((0x71 << 2), 5, 0, 0);
    // str r0, [r4, r1]
    // add r1, #0x2c
    ov81_02242218(r4, *((u32*)(r4 + (0xe6 << 2))), 0, 4);
    ov81_02242420(r4, 0);
    sub_020196E8(*((u32*)(r4 + 0x00000474)), 0, 7, 0);
    // add r1, #0x50
    // str r2, [sp]
    ov81_022408C4(r4, r4, 0, 0);
    // str r1, [r4, r0]
    ov81_022419E0(r4, 0);
}





void ov81_0223EBE4(void) {
    // str r0, [r4, r1]
}





void ov81_0223EC44(void) {
    ov81_02241DDC(1);
    ov81_02241E68(r6, 0, 0, 1);
    Pokepic_SetAttr(*((u32*)(r5 + (0x6b << 2))), 6, 1);
}





void ov81_0223EC88(void) {
    OverlayManager_Run(*((u32*)(r0 + 4)));
    // str r2, [r4, r0]
    // add r0, #0x90
    // str r2, [r4, r0]
    Heap_Free(*((u32*)(r4 + (7 << 6))), (7 << 6), *((u8*)(*((u32*)(r4 + (7 << 6))) + 0x14)));
    Heap_Free(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 4)) = 0;
    ov81_02240CD4(r4);
    *((u8*)(r4 + 0x13)) = (*((u8*)(r4 + 0x13)) & ~(0x40));
    // str r1, [r4, r0]
}





void ov81_0223ECE4(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223ECFC: ; jump table
    *((u8*)(r0 + 8)) = 1;
    *((u8*)(r0 + 0x13)) = (*((u8*)(r0 + 0x13)) & ~(2));
    GridInputHandler_HandleInput_NoHold(*((u32*)(r0 + 0x00000464)), (*((u8*)(r0 + 0x13)) & ~(2)));
    // mvn r0, r0
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223ED40: ; jump table
    // mvn r0, r0
    PlaySE(0x000005DC);
    // str r5, [r4, r0]
    ov81_02241C0C(r4);
    // add r2, #0xa8
    ov81_02242218(r4, *((u32*)(r4 + (0xf << 6))), *((u32*)(r4 + (0xf << 6))), 6);
    ov81_02242300(r4, *((u32*)(r4 + 0x00000468)), 6);
    ov81_02241450(r4);
    PlaySE(0x000005DC);
    ov81_022425C4(r4, 2, 0xc, 6);
    *((u8*)(r4 + 8)) = 2;
    PlaySE(0x000005DC);
    ov81_022425C4(r4, 0x12, 0xc, 7);
    *((u8*)(r4 + 8)) = 2;
    PlaySE(0x000005DC);
    ov81_022425C4(r4, 0xa, 0xf, 8);
    *((u8*)(r4 + 8)) = 2;
    PlaySE(0x000005DC);
    ov81_02241C0C(r4);
    GridInputHandler_GetNextInput(*((u32*)(r4 + 0x00000464)));
    ov81_02242218(r4, *((u32*)(r4 + (0xf << 6))), r0, 6);
    GridInputHandler_GetNextInput(*((u32*)(r4 + 0x00000464)));
    ov81_02242300(r4, r0, 6);
    GridInputHandler_GetNextInput(*((u32*)(r4 + 0x00000464)));
    PlaySE(0x000005DC);
    ov81_022414E0(r4);
    PlaySE(0x000005DC);
    ov81_0223EF5C(r4);
    ov80_02237254(*((u8*)(r4 + 9)));
    ov81_02240FA4(r4, 8, 0);
    ov81_022425EC(1);
    IsPaletteFadeFinished();
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + (0x1a << 4))));
    PaletteData_ScheduleFadeTaskEndIfNoSelectedBuffers(*((u32*)(r4 + (0x1a << 4))));
    // str r1, [r4, r0]
    ov81_02240E78(r4, 0xff);
    ov81_02240BB0(r4);
    OverlayManager_New(gOverlayTemplate_PokemonSummary, *((u32*)(r4 + (7 << 6))), 0x64);
    *((u32*)(r4 + 4)) = r0;
    *((u8*)(r4 + 0x13)) = (2 | *((u8*)(r4 + 0x13)));
    IsPaletteFadeFinished(1, *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 8)) = 1;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u8*)(r4 + 0x13)) = (0x40 | *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 8)) = 3;
    ov81_022414E0(3, *((u8*)(r4 + 0x13)));
    // add r1, r4, r0
    ov81_02242F40(*((u32*)(r1 + (0x36 << 4))));
    ov81_0223F038(r4);
    ov81_0223F0BC(r4);
    ov80_02237254(*((u8*)(r4 + 9)));
    ov81_02240FA4(r4, 8, 0);
    ov81_022414E0(1);
}





void ov81_0223EF5C(void) {
    // add r1, r4, r0
    Pokepic_SetAttr(*((u32*)(r1 + (0x6b << 2))), 6, 1);
    // add r1, #0x50
    // add r0, r1, r0
    FillWindowPixelBuffer(((*((u8*)(r4 + 0x11)) + 2) << 4), 0);
    // add r1, #0x50
    // add r0, r1, r0
    ScheduleWindowCopyToVram(((*((u8*)(r4 + 0x11)) + 2) << 4), r4);
    *((u8*)(r4 + 0x11)) = (*((u8*)(r4 + 0x11)) - 1);
    ov81_022408A0(r4, 0, (*((u8*)(r4 + 0x11)) + 1));
    ov81_0224086C(r4, 0);
    *((u8*)(r4 + 0x10)) = r0;
    // add r1, r4, r0
    // sub r0, #0x68
    // add r1, r4, r1
    ov81_02242F54(*((u32*)((*((u16*)(r1 + (0xf2 << 2))) << 2) + (0xf2 << 2))), (*((u16*)(r1 + (0xf2 << 2))) << 2));
    // add r1, r4, r0
    // sub r0, #0x68
    // add r1, r4, r1
    ov81_02242FB0(*((u32*)((*((u16*)(r1 + (0xf2 << 2))) << 2) + (0xf2 << 2))), 1);
    // add r1, r4, r0
    // sub r0, #0x68
    // add r1, r4, r1
    ov81_02242F94(*((u32*)((*((u16*)(r1 + (0xf2 << 2))) << 2) + (0xf2 << 2))), 0);
    // add r1, r4, r0
    // strh r2, [r1, r0]
    ov81_02241C0C(r4, 0);
    ov81_02241FEC(r4);
    ov81_0224218C(r4);
    GridInputHandler_GetNextInput(*((u32*)(r4 + 0x00000464)));
    ov81_02242300(r4, r0, 6);
}





void ov81_0223F038(void) {
    // add r1, r4, r0
    ov81_02242F48(*((u32*)(r1 + (0x36 << 4))));
    // add r1, r4, r0
    ov81_02242FB0(*((u32*)(r1 + (0x36 << 4))), 0);
    // add r1, r4, r0
    ov81_02242F94(*((u32*)(r1 + (0x36 << 4))), 1);
    // add r1, r4, r1
    // sub r0, #0xa0
    // strh r2, [r1, r0]
    *((u8*)(r4 + 0x11)) = (*((u8*)(r4 + 0x11)) + 1);
    ov81_02240F18(*((u8*)(r4 + 9)), (*((u8*)(r4 + 0x11)) << 1), *((u32*)(r4 + 0x00000468)));
    ov81_022408A0(r4, 0, (r5 + 1));
    ov81_0224086C(r4, 0);
    *((u8*)(r4 + 0x10)) = r0;
    ov81_02241FEC(r4);
    ov81_0224218C(r4);
}





void ov81_0223F0BC(void) {
    // add r1, r5, r0
    ov81_02242F54(*((u32*)(r1 + (0x36 << 4))));
    // add r1, r5, r0
    ov81_02242FB0(*((u32*)(r1 + (0x36 << 4))), 1);
    // add r1, r5, r0
    ov81_02242F94(*((u32*)(r1 + (0x36 << 4))), 0);
    // add r0, #0xa0
    // strh r0, [r5, r2]
    ov81_02241E68(r5, 0, *((u16*)(r5 + (0xf2 << 2))), 0);
    Pokepic_SetAttr(*((u32*)(r5 + (0x6b << 2))), 6, 0);
    *((u8*)(r5 + 0x11)) = (*((u8*)(r5 + 0x11)) - 1);
    // add r1, r5, r0
    // strh r2, [r1, r0]
    ov81_02240F18(*((u8*)(r5 + 9)), 0);
    // add r6, #0x50
    // add r0, r6, r0
    FillWindowPixelBuffer(((0 + 2) << 4), 0);
    ov81_022408A0(r5, 0, (*((u8*)(r5 + 0x11)) + 1));
    ov81_0224086C(r5, 0);
    *((u8*)(r5 + 0x10)) = r0;
    ov81_02241C0C(r5);
    ov81_02241FEC(r5);
    ov81_0224218C(r5);
    ov81_02242300(r5, *((u32*)(r5 + 0x00000468)), 6);
}





void ov81_0223F1A4(void) {
    ov80_02236DD4(*((u8*)(r0 + 9)));
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223F1C2: ; jump table
    ov81_02242D88(*((u32*)(r4 + (0xe2 << 2))), 0, r0);
    ov81_02242D88(*((u32*)(r4 + (0x39 << 4))), 0);
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 8)) = ((*((u8*)(r4 + 8)) + 1) + 1);
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov81_022408A0(r4, 0);
    ov81_0224086C(r4, 1);
    *((u8*)(r4 + 0x10)) = r0;
    ov81_02241BD0(*((u32*)(r4 + 0x0000046C)), *((u32*)(r4 + 0x4c)));
    ov81_02242694(r4, 1);
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x0000046C)));
    YesNoPrompt_Reset(*((u32*)(r4 + 0x0000046C)));
    ov81_02242694(r4, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    YesNoPrompt_Reset(*((u32*)(r4 + 0x0000046C)));
    ov81_02242694(r4, 0);
    ov81_02242D88(*((u32*)(r4 + (0xe2 << 2))), 1);
    ov81_02242D88(*((u32*)(r4 + (0x39 << 4))), 1);
    *((u8*)(r4 + 0x11)) = (*((u8*)(r4 + 0x11)) - 1);
    // add r1, r4, r0
    // strh r2, [r1, r0]
    ov80_02237254(*((u8*)(r4 + 9)), 0);
    ov81_02240FA4(r4, 8, 0);
    ov80_02237254(*((u8*)(r4 + 9)));
    ov81_02240FA4(r4, 8, 0);
    ov81_0224086C(r4, 2);
    *((u8*)(r4 + 0x10)) = r0;
    sub_02037BEC();
    sub_02037AC0(0xa4);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    sub_02037B38(0xa4);
    sub_02037BEC();
}





void ov81_0223F314(void) {
}





void ov81_0223F320(void) {
    ov80_02236DD4(*((u8*)(r0 + 9)));
    // add r1, r4, r0
    ov81_02242F54(*((u32*)(r1 + (0x36 << 4))));
    // add r1, r4, r0
    ov81_02242FB0(*((u32*)(r1 + (0x36 << 4))), 1);
    // add r1, r4, r0
    ov81_02242F94(*((u32*)(r1 + (0x36 << 4))), 0);
    ov81_022408A0(r4, 0, (*((u8*)(r4 + 0x11)) + 1));
    ov81_0224086C(r4, 0);
    *((u8*)(r4 + 0x10)) = r0;
    ov81_02241FEC(r4);
    ov81_0224218C(r4);
}





void ov81_0223F38C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223F3A4: ; jump table
    ov81_02240F38(0);
    *((u8*)(r4 + 8)) = 1;
    *((u8*)(r4 + 0x13)) = (*((u8*)(r4 + 0x13)) & ~(2));
    GridInputHandler_HandleInput_NoHold(*((u32*)(r4 + 0x00000464)), (*((u8*)(r4 + 0x13)) & ~(2)));
    // mvn r0, r0
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223F3F0: ; jump table
    // mvn r0, r0
    PlaySE(0x000005DC);
    // str r5, [r4, r2]
    // sub r1, #0xa8
    ov81_02242218(r4, *((u32*)(r4 + 0x00000468)), *((u32*)(r4 + 0x00000468)), 4);
    ov81_02241D38(r4);
    sub_020196E8(*((u32*)(r4 + 0x00000474)), 0, 7, 0);
    ov81_0224174C(r4);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 1);
    PlaySE(0x000005DC);
    ov81_022425C4(r4, 2, 0xc, 7);
    *((u8*)(r4 + 8)) = 2;
    PlaySE(0x000005DC);
    ov81_022425C4(r4, 0x12, 0xc, 8);
    *((u8*)(r4 + 8)) = 2;
    PlaySE(0x000005DC);
    ov81_022425C4(r4, 0xa, 0xf, 9);
    *((u8*)(r4 + 8)) = 2;
    PlaySE(0x000005DC);
    ov81_02242D88(*((u32*)(r4 + (0xe5 << 2))), 0);
    ov81_02242D88(*((u32*)(r4 + (0xe6 << 2))), 0);
    // add r0, #0xd0
    ClearWindowTilemapAndScheduleTransfer(r4);
    sub_0201980C(*((u32*)(r4 + 0x00000474)), 0);
    ov81_02241D38(r4);
    ov81_022425D8(r4, 0x17, 0xf, 6);
    *((u8*)(r4 + 8)) = 2;
    PlaySE(0x000005DC);
    GridInputHandler_GetNextInput(*((u32*)(r4 + 0x00000464)));
    ov81_02242D88(*((u32*)(r4 + (0xe5 << 2))), 0, r0);
    ov81_02242D88(*((u32*)(r4 + (0xe6 << 2))), 0);
    // add r0, #0xd0
    ClearWindowTilemapAndScheduleTransfer(r4);
    sub_0201980C(*((u32*)(r4 + 0x00000474)), 0);
    ov81_02242218(r4, *((u32*)(r4 + (0xf << 6))), 3);
    // add r0, #0xd0
    ScheduleWindowCopyToVram(r4);
    sub_020196E8(*((u32*)(r4 + 0x00000474)), 0, 7, 0);
    ov81_02241D38(r4);
    GridInputHandler_GetNextInput(*((u32*)(r4 + 0x00000464)));
    PlaySE(0x000005DC);
    ov81_022417B4(r4);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 0);
    PlaySE();
    ov81_02241840(r4);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 1);
    ov81_02240F38(r4, 1);
    ov81_022425EC(1);
    IsPaletteFadeFinished();
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r4 + (0x1a << 4))));
    PaletteData_ScheduleFadeTaskEndIfNoSelectedBuffers(*((u32*)(r4 + (0x1a << 4))));
    // str r1, [r4, r0]
    ov81_02240E78(r4, 0xff);
    ov81_02240BB0(r4);
    OverlayManager_New(gOverlayTemplate_PokemonSummary, *((u32*)(r4 + (7 << 6))), 0x64);
    *((u32*)(r4 + 4)) = r0;
    *((u8*)(r4 + 0x13)) = (2 | *((u8*)(r4 + 0x13)));
    IsPaletteFadeFinished(1, *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 8)) = 1;
    ov81_02241840(1);
    ov81_02240F38(r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u8*)(r4 + 0x13)) = (0x40 | *((u8*)(r4 + 0x13)));
    *((u8*)(r4 + 8)) = 3;
    ov81_0223F684(3, *((u8*)(r4 + 0x13)));
    ov81_022417B4(r4);
    ov81_02241840(r4);
    ov81_022417B4(1);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 0);
    *((u8*)(r4 + 8)) = 1;
}





void ov81_0223F684(void) {
    // add r2, r0, r2
    // sub r1, #0xa0
    // strh r3, [r2, r1]
    *((u8*)(r0 + 0x11)) = (*((u8*)(r0 + 0x11)) + 1);
    *((u8*)(r0 + 0x13)) = (4 | *((u8*)(r0 + 0x13)));
}





void ov81_0223F6A8(void) {
    ov81_0224086C(0xa);
    *((u8*)(r4 + 0x10)) = r0;
    ov81_02241BD0(*((u32*)(r4 + 0x0000046C)), *((u32*)(r4 + 0x4c)));
    ov81_02242694(r4, 1);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x0000046C)));
    YesNoPrompt_Reset(*((u32*)(r4 + 0x0000046C)));
    ov81_02242694(r4, 0);
    ov80_02237254(*((u8*)(r4 + 9)));
    ov81_0224086C(r4, 2);
    *((u8*)(r4 + 0x10)) = r0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    YesNoPrompt_Reset(*((u32*)(r4 + 0x0000046C)));
    ov81_02242694(r4, 0);
    ov81_0223F754(r4);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
}





void ov81_0223F754(void) {
}





void ov81_0223F770(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223F786: ; jump table
    Options_GetFrame(*((u32*)(r0 + (0x6e << 2))), (*((u16*)(*((u8*)(r0 + 8)) + 6)) << 0x10));
    // add r0, #0xc0
    ov81_02243028(r4, r0);
    ov81_0224086C(r4, 0xd);
    *((u8*)(r4 + 0x10)) = r0;
    *((u8*)(r4 + 8)) = 1;
    GridInputHandler_HandleInput_NoHold(*((u32*)(r4 + 0x00000464)));
    // mvn r0, r0
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223F7E2: ; jump table
    // mvn r0, r0
    PlaySE(0x000005DC);
    // str r5, [r4, r2]
    // sub r1, #0xa4
    ov81_02242218(r4, *((u32*)(r4 + 0x00000468)), *((u32*)(r4 + 0x00000468)), 4);
    sub_020196E8(*((u32*)(r4 + 0x00000474)), 0, 7, 0);
    ov81_02241D94(r4);
    ov81_022424AC(r4, *((u32*)(r4 + 0x00000468)));
    ov81_02241980(r4);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 1);
    PlaySE(0x000005DC);
    ov81_02242D88(*((u32*)(r4 + (0xe5 << 2))), 0);
    ov81_02242D88(*((u32*)(r4 + (0xe6 << 2))), 0);
    // add r1, r4, r0
    Pokepic_SetAttr(*((u32*)(r1 + (0x6b << 2))), 6, 1);
    // add r0, #0xd0
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r1, #0x50
    // add r0, r1, r0
    ClearWindowTilemapAndScheduleTransfer(((*((u16*)(r4 + (0xf2 << 2))) + 2) << 4), r4);
    sub_0201980C(*((u32*)(r4 + 0x00000474)), 0);
    ov81_022425D8(r4, 2, 0xf, 5);
    *((u8*)(r4 + 8)) = 4;
    PlaySE(0x000005DC);
    ov81_02242D88(*((u32*)(r4 + (0xe5 << 2))), 0);
    ov81_02242D88(*((u32*)(r4 + (0xe6 << 2))), 0);
    // add r1, r4, r0
    Pokepic_SetAttr(*((u32*)(r1 + (0x6b << 2))), 6, 1);
    // add r0, #0xd0
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r1, #0x50
    // add r0, r1, r0
    ClearWindowTilemapAndScheduleTransfer(((*((u16*)(r4 + (0xf2 << 2))) + 2) << 4), r4);
    sub_0201980C(*((u32*)(r4 + 0x00000474)), 0);
    ov81_022425D8(r4, 0x17, 0xf, 6);
    *((u8*)(r4 + 8)) = 4;
    PlaySE(0x000005DC);
    ov81_022425C4(r4, 2, 0xf, 7);
    *((u8*)(r4 + 8)) = 4;
    PlaySE(0x000005DC);
    ov81_022425C4(r4, 0x12, 0xf, 8);
    *((u8*)(r4 + 8)) = 4;
    PlaySE(0x000005DC);
    GridInputHandler_GetNextInput(*((u32*)(r4 + 0x00000464)));
    ov81_02242D88(*((u32*)(r4 + (0xe5 << 2))), 0);
    ov81_02242D88(*((u32*)(r4 + (0xe6 << 2))), 0);
    // add r1, r4, r0
    Pokepic_SetAttr(*((u32*)(r1 + (0x6b << 2))), 6, 1);
    // add r0, #0xd0
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r1, #0x50
    // add r0, r1, r0
    ClearWindowTilemapAndScheduleTransfer(((*((u16*)(r4 + (0xf2 << 2))) + 2) << 4), r4);
    sub_0201980C(*((u32*)(r4 + 0x00000474)), 0);
    ov81_02242218(r4, *((u32*)(r4 + (0xf1 << 2))), r5, 4);
    // add r0, #0xd0
    ScheduleWindowCopyToVram(r4);
    sub_020196E8(*((u32*)(r4 + 0x00000474)), 0, 7, 0);
    ov81_02241D94(r4);
    ov81_022424AC(r4, r5);
    GridInputHandler_GetNextInput(*((u32*)(r4 + 0x00000464)));
    PlaySE(0x000005DC);
    ov81_022419E0(r4);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 0);
    PlaySE();
    ov81_02241A7C(r4);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 1);
    ov81_02240F38(r4, 1);
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x0000046C)));
    YesNoPrompt_Reset(*((u32*)(r4 + 0x0000046C)));
    ov81_02242694(r4, 0);
    ov81_0223FB64(r4);
    ov80_02237254(*((u8*)(r4 + 9)));
    ov81_0224086C(r4, 2);
    *((u8*)(r4 + 0x10)) = r0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    YesNoPrompt_Reset(*((u32*)(r4 + 0x0000046C)));
    ov81_02242694(r4, 0);
    ov81_0223FB88(r4);
    ov81_02241A38(r4);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 0);
    *((u8*)(r4 + 8)) = 1;
    ov81_022425EC(1);
    ov81_02241A7C();
    ov81_0223FB3C(r4);
    ov81_02241A7C(1);
    ov81_02240F38(r4, 1);
    ov81_022419E0(1);
    ov81_02241A7C(r4);
    ov81_02241BD0(*((u32*)(r4 + 0x0000046C)), *((u32*)(r4 + 0x4c)));
    ov81_02242694(r4, 1);
    ov81_0224086C(r4, 0xe);
    *((u8*)(r4 + 0x10)) = r0;
    *((u8*)(r4 + 8)) = 2;
    ov81_022419E0(2);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 0);
    *((u8*)(r4 + 8)) = 1;
}





void ov81_0223FB3C(void) {
    *((u8*)(r0 + 0x13)) = (*((u8*)(r0 + 0x13)) & ~(4));
    *((u8*)(r0 + 0x11)) = (*((u8*)(r0 + 0x11)) - 1);
    // strh r1, [r0, r3]
    // add r2, #0xa0
    // add r3, #0x9c
    // str r1, [r0, r2]
}





void ov81_0223FB64(void) {
    *((u8*)(r0 + 0x13)) = (8 | *((u8*)(r0 + 0x13)));
    // add r2, r0, r2
    // sub r1, #0xa0
    // strh r3, [r2, r1]
    *((u8*)(r0 + 0x11)) = (*((u8*)(r0 + 0x11)) + 1);
}





void ov81_0223FB88(void) {
    // add r0, #0xc0
}





void ov81_0223FBAC(void) {
    ov81_0224086C(0xa);
    *((u8*)(r4 + 0x10)) = r0;
    ov81_02241BD0(*((u32*)(r4 + 0x0000046C)), *((u32*)(r4 + 0x4c)));
    ov81_02242694(r4, 1);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    YesNoPrompt_HandleInput(*((u32*)(r4 + 0x0000046C)));
    YesNoPrompt_Reset(*((u32*)(r4 + 0x0000046C)));
    ov81_02242694(r4, 0);
    *((u8*)(r4 + 0x13)) = (*((u8*)(r4 + 0x13)) & ~(8));
    ov80_02237254(*((u8*)(r4 + 9)), (*((u8*)(r4 + 0x13)) & ~(8)));
    ov81_0224086C(r4, 2);
    *((u8*)(r4 + 0x10)) = r0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    YesNoPrompt_Reset(*((u32*)(r4 + 0x0000046C)));
    ov81_02242694(r4, 0);
    ov81_0223FC60(r4);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
}





void ov81_0223FC60(void) {
}





void ov81_0223FC74(void) {
    ov80_02236DD4(*((u8*)(r0 + 9)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223FC90: ; jump table
    *((u8*)(r4 + 0x13)) = (0x20 | *((u8*)(r4 + 0x13)));
    // add r0, #0x60
    ClearWindowTilemapAndCopyToVram(r4, *((u8*)(r4 + 0x13)));
    // add r0, #0xa0
    ClearWindowTilemapAndCopyToVram(r4);
    // add r0, #0xb0
    ClearWindowTilemapAndCopyToVram(r4);
    // add r0, #0x50
    FillWindowPixelBuffer(r4, 0);
    // add r0, #0x50
    ScheduleWindowCopyToVram(r4);
    // add r0, #0x70
    ClearWindowTilemapAndCopyToVram(r4);
    // add r0, #0x80
    ClearWindowTilemapAndCopyToVram(r4);
    // add r0, #0x90
    ClearWindowTilemapAndCopyToVram(r4);
    // add r0, #0xd0
    ClearWindowTilemapAndCopyToVram(r4);
    sub_0201980C(*((u32*)(r4 + 0x00000474)), 0);
    // add r0, #0xc0
    ClearFrameAndWindow2(r4, 1);
    // add r0, #0xc0
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0x50
    ov81_0224300C(r4);
    // str r0, [sp]
    Pokepic_StartPaletteFadeAll(*((u32*)(r4 + (0x6a << 2))), 0, 0x10, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    Pokepic_Delete(*((u32*)(r4 + (0x6b << 2))));
    ov81_02242D74(*((u32*)(r4 + (0xe2 << 2))));
    ov81_02242D74(*((u32*)(r4 + (0xe3 << 2))));
    ov81_02242D74(*((u32*)(r4 + (0x39 << 4))));
    ov81_02242D74(*((u32*)(r4 + (0xe5 << 2))));
    ov81_02242D74(*((u32*)(r4 + (0xe6 << 2))));
    ov81_02241FC0(r4);
    ov81_02242170(r4);
    ov81_02242DE4(*((u32*)(r4 + (0xe << 6))), 2);
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    Pokepic_ResumePaletteFade(*((u32*)(r4 + (0x6b << 2))));
    ov81_02242DD8(*((u32*)(r4 + (0xe << 6))));
    ov81_02242D88(*((u32*)(r4 + (0xe << 6))), 0);
    ov81_02240728(r4, 6);
    ov81_022406E0(r4, 2);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x4c)), 6, 0, *((u32*)(r4 + 0xc)));
    PlaySE(0x00000611);
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov81_02240564(r4);
    StopSE(0x00000611, 0);
    PlaySE(0x00000678);
    *((u32*)(r4 + 0x14)) = 8;
    ov81_02242EA4(*((u32*)(r4 + (0x36 << 4))));
    // str r0, [r5, r1]
    // str r7, [r5, r0]
    ov80_02237254(*((u8*)(r4 + 9)), (0x36 << 4));
    *((u8*)(r4 + 0x12)) = 4;
    *((u8*)(r4 + 0x12)) = 2;
    ov81_0223EBE4(r4);
    ov81_02242F60(*((u32*)(r4 + (0x36 << 4))));
    PlaySE(0x00000611);
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov81_022404B4(r4);
    StopSE(0x00000611, 0);
    PlaySE(0x00000678);
    ov81_02242F94(*((u32*)(r4 + (0x36 << 4))), 4);
    *((u32*)(r4 + 0x14)) = 8;
    ov81_02242D88(*((u32*)(r4 + (0xe << 6))), 1);
    ov81_02242DE4(*((u32*)(r4 + (0xe << 6))), 1);
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    ov81_02242DD8(*((u32*)(r4 + (0xe << 6))));
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    GfGfx_EngineATogglePlanes(2, 0);
    ov81_02241E68(r4, 0, 0, 1);
    // sub r6, #0xb4
    ov81_02241EDC(r4, 0, 0, 0);
    ov81_02241E68(r4, r5, r5, 1);
    // str r0, [sp]
    Pokepic_StartPaletteFadeAll(*((u32*)(r4 + (0x6a << 2))), 0x10, 0, 1);
    Pokepic_ResumePaletteFade(*((u32*)(r4 + (0x6b << 2))));
    *((u8*)(r4 + 0x19)) = (*((u8*)(r4 + 0x19)) + 1);
    ov81_02241398(r4);
    *((u8*)(r4 + 0x13)) = (*((u8*)(r4 + 0x13)) & ~(0x20));
    ov80_02237254(*((u8*)(r4 + 9)), (*((u8*)(r4 + 0x13)) & ~(0x20)));
    // strb r1, [r4, r0]
    ov81_02241144(r4, 1);
    *((u8*)(r4 + 0x19)) = 0;
}





void ov81_02240008(void) {
    ov81_02240FA4(0xa, ((*((u8*)(r0 + 0x13)) << 0x1c) >> 0x1f));
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    // strb r1, [r4, r0]
}





void ov81_02240048(void) {
}





void ov81_02240088(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}





void ov81_022400D0(void) {
    // str r1, [r4, r0]
    // add r1, #8
    // add r0, #0xc0
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r3, [sp, #0x14]
    // add r1, #0xc0
    // add r0, #0xc0
}





void ov81_022401C8(void) {
    PokepicManager_HandleLoadImgAndOrPltt(*((u32*)(r0 + (0x6a << 2))));
    PaletteData_PushTransparentBuffers(*((u32*)(r4 + (0x1a << 4))));
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x4c)));
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
    // str r0, [r3, r1]
}





void ov81_02240210(void) {
}





void ov81_02240230(void) {
    // add r3, sp, #0xc4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0xa8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BG_ClearCharDataRange(1, 0x20, 0, 0x64);
    BgClearTilemapBufferAndCommit(r4, 1);
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 2, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 2);
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 3, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 3);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BG_ClearCharDataRange(4, 0x20, 0, 0x64);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BG_ClearCharDataRange(5, 0x20, 0, 0x64);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 6, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 6);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 7, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 7);
    // strh r2, [r1]
    GfGfx_EngineATogglePlanes(1, 1, (*((u16*)0x04000008) & ~(3)));
}





void ov81_022403C0(void) {
    // str r0, [r4, r1]
    // add r2, #0x60
}





void ov81_02240448(void) {
    // add r0, r0, r1
}





void ov81_02240458(void) {
}





void ov81_022404AC(void) {
}





void ov81_022404B4(void) {
    // str r0, [sp]
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // sub r1, #8
    // str r0, [sp]
    // add r0, sp, #4
    // mvn r2, r2
    // ldr r0, [sp]
}





void ov81_02240564(void) {
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // sub r1, #8
    // mvn r0, r0
    // add r0, sp, #0
    // mvn r2, r2
}





void ov81_022405F0(void) {
    // tst r0, r1
    // str r3, [sp]
}





void ov81_02240628(void) {
    // str r3, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // str r2, [sp, #8]
}





void ov81_02240658(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224066C: ; jump table
    // str r0, [r4, r1]
}





void ov81_02240698(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov81_022406E0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov81_02240728(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov81_02240770(void) {
    // add r2, sp, #0
    // ldr r0, [sp]
    // ldr r0, [sp]
}





void ov81_022407A8(void) {
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
}





void ov81_0224080C(void) {
    // add r1, sp, #0x38
    // ldr r0, [sp, #0x28]
    // add r2, sp, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // add r0, sp, #0x38
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x3c
}





void ov81_0224086C(void) {
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, #0xc0
    // str r3, [sp, #0x14]
    // add r4, #0xc0
}





void ov81_022408A0(void) {
}





void ov81_022408B8(void) {
}





void ov81_022408C4(void) {
    // str r2, [sp, #0x10]
    Save_PlayerData_GetProfile(*((u32*)(r0 + (0x6f << 2))), (0x6f << 2));
    String_New(8, 0x64);
    FillWindowPixelBuffer(r5, 0);
    PlayerProfile_GetNamePtr(r7);
    CopyU16ArrayToString(r4, r0);
    PlayerProfile_GetTrainerGender(r7);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x18
    // ldr r3, [sp, #0x10]
    AddTextPrinterParameterizedWithColor(r5, *((u8*)((0xc1 << 0xa) + 0x10)), r4);
    String_Delete(r4);
    ScheduleWindowCopyToVram(r5);
}





void ov81_0224093C(void) {
    // str r2, [sp, #0x10]
    sub_0203769C();
    // sub r0, r1, r0
    sub_02034818(1);
    String_New(8, 0x64);
    FillWindowPixelBuffer(r5, 0);
    PlayerName_FlatToString(r7, r4);
    PlayerProfile_GetTrainerGender(r7);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x18
    // ldr r3, [sp, #0x10]
    AddTextPrinterParameterizedWithColor(r5, *((u8*)((0xc1 << 0xa) + 0x10)), r4);
    String_Delete(r4);
    ScheduleWindowCopyToVram(r5);
}





void ov81_022409B0(void) {
    // add r1, sp, #0x28
    // str r3, [sp, #0x10]
    FillWindowPixelBuffer(r1, *((u8*)(r1 + 0x1c)));
    // ldr r0, [sp, #0x4c]
    Party_GetMonByIndex(r6);
    String_New(0xb, 0x64);
    // str r0, [sp, #0x18]
    NewString_ReadMsgData(*((u32*)(r5 + 0x1c)), 0x1c);
    // str r0, [sp, #0x1c]
    Mon_GetBoxMon(r7);
    BufferBoxMonSpeciesName(*((u32*)(r5 + 0x20)), 0, r0);
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    StringExpandPlaceholders(*((u32*)(r5 + 0x20)));
    // add r0, sp, #0x48
    // ldr r0, [sp, #0x38]
    // add r2, sp, #0x28
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x10]
    AddTextPrinterParameterizedWithColor(r4, *((u8*)r0), ((*((u8*)(r2 + 0x18)) << 0x18) >> 0x10));
    // ldr r0, [sp, #0x1c]
    String_Delete();
    // ldr r0, [sp, #0x18]
    String_Delete();
    GetMonData(r7, 0xb0, 0);
    GetMonGender(r7);
    GetWindowWidth(r4);
    // str r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r5 + 0x1c)), 0x1a);
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x14]
    AddTextPrinterParameterizedWithColor(r4, r6, r0);
    String_Delete(r5);
    NewString_ReadMsgData(*((u32*)(r5 + 0x1c)), 0x1b);
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x14]
    AddTextPrinterParameterizedWithColor(r4, r6, r0);
    String_Delete(r5);
    ScheduleWindowCopyToVram(r4);
}





void ov81_02240AD8(void) {
    // add r1, sp, #0x28
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    FillWindowPixelBuffer(r1, *((u8*)(r1 + 0x18)));
    NewMsgDataFromNarc(1, 0x1b, 0xed, 0x64);
    // add r1, sp, #0x28
    NewString_ReadMsgData(*((u16*)(r1 + 0x20)));
    DestroyMsgData(r7);
    // add r2, sp, #0x28
    // ldr r3, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x1c]
    AddTextPrinterParameterizedWithColor(r5, *((u8*)(r2 + 0x18)), r4);
    GetWindowWidth(r5);
    // str r0, [sp, #0x20]
    // add r0, sp, #0x4c
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x4c
    String_SetEmpty(r4);
    // add r0, sp, #0x4c
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    ReadMsgDataIntoString(*((u32*)(*((u8*)r0) + 0x1c)), r4);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x20]
    // ldr r1, [sp, #0x1c]
    AddTextPrinterParameterizedWithColor(r5, r4, (r3 << 3));
    String_Delete(r4);
}





void ov81_02240BB0(void) {
    // str r0, [r4, r1]
    // str r1, [r5, r0]
    // add r0, #0x24
    // add r0, r5, r0
    // add r0, #0x50
}





void ov81_02240CD4(void) {
    ov81_02240D2C();
    // str r2, [sp]
    // str r0, [sp, #4]
    GF_3DVramMan_Create(0x64, 0, 2, 0);
    // str r0, [r4, r1]
    BgConfig_Alloc(0x64, (0x69 << 2));
    *((u32*)(r4 + 0x4c)) = r0;
    ov81_02240D64(r4);
    // add r1, #0x50
    ov81_02242FDC(*((u32*)(r4 + 0x4c)), r4);
    // add r4, #0x70
    ov81_022430E8(r4);
}





void ov81_02240D2C(void) {
    Main_SetVBlankIntrCB(0, 0);
    Main_SetHBlankIntrCB(0, 0);
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
}





void ov81_02240D64(void) {
    NARC_New(0xb7, 0x64);
    // str r0, [r5, r1]
    ov81_022403C0(r5, (0xf7 << 2));
    ov81_02240448(r5);
    FontID_Alloc(4, 0x64);
    NewMsgDataFromNarc(1, 0x1b, 0xc2, 0x64);
    *((u32*)(r5 + 0x1c)) = r0;
    MessageFormat_New(0x64);
    *((u32*)(r5 + 0x20)) = r0;
    String_New((0x32 << 4), 0x64);
    *((u32*)(r5 + 0x24)) = r0;
    String_New((0x32 << 4), 0x64);
    *((u32*)(r5 + 0x28)) = r0;
    String_New(0x40, 0x64);
    *((u32*)(r4 + 0x2c)) = r0;
    LoadFontPal0(0, (0x1a << 4), 0x64);
    LoadFontPal0(4, (0x1a << 4), 0x64);
    LoadFontPal1(0, (6 << 6), 0x64);
    LoadFontPal1(4, (6 << 6), 0x64);
    PokepicManager_Create(0x64);
    // str r0, [r5, r1]
    sub_02037474((0x6a << 2));
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x10);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    sub_0203A880();
    ov81_02240F08(r5, 0);
    ov81_0223E87C(r5);
    ov81_0223E8B0(r5);
    ov81_0223EBE4(r5);
    ov81_0223EC44(r5);
    ov81_02242500(r5);
    ov81_02243100(*((u32*)(r5 + 0x4c)), *((u32*)(r5 + (0xf7 << 2))));
    ov81_0224271C(r5);
    GfGfx_BothDispOn();
    Main_SetVBlankIntrCB(ov81_022401C8, r5);
}





void ov81_02240E78(void) {
    Heap_Alloc(0x64, 0x3c);
    // str r0, [r4, r1]
    memset(*((u32*)(r4 + (7 << 6))), 0, 0x3c);
    // add r1, #0xa8
    // str r3, [r0]
    // sub r0, #8
    *((u32*)(*((u32*)(r4 + (7 << 6))) + 4)) = *((u32*)(r4 + (7 << 6)));
    *((u8*)(*((u32*)(r4 + (7 << 6))) + 0x11)) = 1;
    *((u8*)(*((u32*)(r4 + (7 << 6))) + 0x12)) = 1;
    *((u8*)(*((u32*)(r4 + (7 << 6))) + 0x13)) = *((u8*)(r4 + 0x12));
    *((u8*)(*((u32*)(r4 + (7 << 6))) + 0x14)) = *((u32*)(r4 + (0xf << 6)));
    *((u16*)(*((u32*)(r4 + (7 << 6))) + 0x18)) = 0;
    SaveArray_IsNatDexEnabled(*((u32*)(r4 + ((7 << 6) - 4))), 0, (7 << 6), *((u8*)(r4 + 0x12)));
    *((u32*)(*((u32*)(r4 + (7 << 6))) + 0x1c)) = r0;
    *((u32*)(*((u32*)(r4 + (7 << 6))) + 0x2c)) = 0;
    *((u32*)(*((u32*)(r4 + (7 << 6))) + 0x34)) = 0;
    sub_02089D40(*((u32*)(r4 + (7 << 6))), _02243458, 0);
    Save_PlayerData_GetProfile(*((u32*)(r4 + (0x6f << 2))));
    sub_0208AD34(*((u32*)(r4 + (7 << 6))), r0);
}





void ov81_02240F08(void) {
    // ldrb r0, [r0, #0xb]
    // cmp r0, r1
    // bne _02240F12
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}





void ov81_02240F18(void) {
    // cmp r0, #0
    // beq _02240F20
    // cmp r0, #1
    // bne _02240F24
    // mov r0, #3
    // bx lr
    // mov r0, #2
    // bx lr
    // TODO: decompile
}





void ov81_02240F28(void) {
    // ldrb r0, [r0, #0x13]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _02240F34
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}





void ov81_02240F38(void) {
    // and r1, r2
}





void ov81_02240F48(void) {
    // ldr r1, [sp, #0x20]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r5, r0, r7
    // str r0, [r5, r4]
    // ldr r1, [sp, #0x24]
}





void ov81_02240FA4(void) {
    // add r1, r5, r1
}





void ov81_02241008(void) {
}





void ov81_02241020(void) {
}





void ov81_0224102C(void) {
    // str r1, [sp]
    // strh r4, [r2, r0]
    // strh r1, [r5, r0]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp]
    // add r6, r5, r0
    // strh r0, [r6, r1]
    // ldr r1, [sp]
    // add r1, r1, r0
    // add r4, r5, r0
    // strh r0, [r4, r1]
}





void ov81_022410C8(void) {
    ov80_02236DD4(*((u8*)(r3 + 9)));
    sub_0203769C();
    *((u8*)(r5 + 0x18)) = *((u16*)r6);
    // add r1, r6, r1
    // strh r3, [r2, r7]
    // add r1, r4, r3
    // add r3, r6, r1
    // strh r2, [r4, r1]
    // strb r1, [r5, r0]
}





void ov81_0224113C(void) {
}





void ov81_02241144(void) {
    ov80_02236DD4(*((u8*)(r0 + 9)));
    // str r0, [sp, #0x18]
    // add r0, #0x60
    ClearWindowTilemapAndScheduleTransfer(r7);
    // add r0, #0xa0
    ClearWindowTilemapAndScheduleTransfer(r7);
    // add r7, #0xb0
    ClearWindowTilemapAndScheduleTransfer(r7);
    GfGfx_EngineATogglePlanes(4, 0);
    // ldr r0, [sp, #0x18]
    // add r6, #0x50
    // str r0, [sp, #0x1c]
    // add r0, r6, r0
    FillWindowPixelBuffer(((0 + 5) << 4), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x1c]
    // add r1, r6, r1
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov81_02240AD8(r7, 0, 0);
    // ldr r0, [sp, #0x1c]
    // add r0, r6, r0
    ScheduleWindowCopyToVram();
    // ldr r0, [sp, #0x18]
    // add r1, #0x60
    // str r2, [sp]
    ov81_0224093C(r7, r7, 0, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    // strb r1, [r7, r0]
}





void ov81_02241218(void) {
    // strh r1, [r0, r3]
    // strh r2, [r0, r1]
    // sub r1, #0x18
    // strh r2, [r0, r1]
    // sub r1, #0x16
    // strh r2, [r0, r1]
}





void ov81_02241238(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x00000462, (*((u8*)(r3 + 0x00000462)) + 1));
    // strh r1, [r4, r0]
    sub_0203769C(0x00000458, ((*((u16*)(r5 + 2)) << 0x18) >> 0x18));
    // strh r1, [r4, r0]
    // sub r0, #0x90
    // strh r2, [r4, r0]
    // sub r1, #0x8e
    // strh r0, [r4, r1]
    *((u8*)(r4 + 0x13)) = (*((u8*)(r4 + 0x13)) & ~(8));
    // sub r0, #0x90
    // strh r2, [r4, r0]
    // sub r1, #0x8e
    // strh r0, [r4, r1]
}





void ov81_022412C4(void) {
    ov81_02240F08(0);
    ov80_02237254(*((u8*)(r5 + 9)), *((u16*)(ov81_02243490 + (r4 << 2))), *((u16*)(ov81_02243492 + (r4 << 2))));
    // add r0, r5, r0
    ov81_02242E50((0x71 << 2), *((u16*)(ov81_02243470 + (r4 << 2))), *((u16*)(ov81_02243472 + (r4 << 2))), 0x64);
}





void ov81_02241340(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r0, r1
}





void ov81_02241364(void) {
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}





void ov81_02241398(void) {
    SetBgPriority(1, 1);
    BG_ClearCharDataRange(1, 0x20, 0, 0x64);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0x4c)), 1);
    // add r1, #0x50
    ov81_02242FDC(*((u32*)(r4 + 0x4c)), r4);
    // add r4, #0x70
    ov81_022430E8(r4);
    GfGfx_EngineATogglePlanes(2, 1);
}





void ov81_022413E0(void) {
}





void ov81_022413F4(void) {
    // add r2, sp, #4
    // add r3, sp, #0
    ov81_02243228(*((u32*)(r0 + 0x00000464)));
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov81_02242DAC(*((u32*)(r4 + (0xe2 << 2))));
}





void ov81_0224141C(void) {
    // add r2, sp, #4
    // add r3, sp, #0
    ov81_02243228(*((u32*)(r0 + 0x00000464)));
    ov81_02242DE4(*((u32*)(r4 + (0xe3 << 2))), 3);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov81_02242DAC(*((u32*)(r4 + (0xe3 << 2))));
}





void ov81_02241450(void) {
    ov81_02243140(*((u32*)(r0 + 0x4c)), *((u32*)(r0 + (0xf7 << 2))), 0);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((1 << 8));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x13 << 4));
    // add r1, r4, r0
    ov81_02242F40(*((u32*)(r1 + (0x36 << 4))));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x11 << 4));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x12 << 4));
    GridInputHandler_SetNextInput(*((u32*)(r4 + 0x00000464)), 6);
    ov81_0224141C(r4, 6);
    ov81_02243270(*((u32*)(r4 + 0x00000464)), 1);
    ov81_02242D88(*((u32*)(r4 + (0xe3 << 2))), 1);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 1);
}





void ov81_022414E0(void) {
    ov81_022431E0(*((u32*)(r0 + 0x4c)), 0);
    GridInputHandler_SetNextInput(*((u32*)(r4 + 0x00000464)), ((*((u32*)(r4 + (0x00000464 + 4))) << 0x18) >> 0x18));
    ov81_02243270(*((u32*)(r4 + 0x00000464)), 0);
    ov81_02242D88(*((u32*)(r4 + (0xe3 << 2))), 0);
    ov81_02242E08(*((u32*)(r4 + (0xe2 << 2))), 0);
}





void ov81_02241524(void) {
    // add r0, r4, r0
    FillWindowPixelBuffer((1 << 8), 2);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x11 << 4), 2);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x12 << 4), 2);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x13 << 4), 2);
    // add r0, r4, r0
    GetWindowWidth((1 << 8));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xfe
    // add r3, r5, r3
    // add r0, r4, r0
    // asr r3, r3, #1
    ov81_022430B4(2, *((u32*)(r4 + 0x1c)), 5, ((r0 << 3) >> 0x1f));
    // add r0, r4, r0
    GetWindowWidth((0x11 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // add r0, r4, r0
    // asr r3, r3, #1
    ov81_022430B4((0x11 << 4), *((u32*)(r4 + 0x1c)), 6, ((r0 << 3) >> 0x1f));
    // add r0, r4, r0
    GetWindowWidth((0x12 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // add r0, r4, r0
    // asr r3, r3, #1
    ov81_022430B4((0x12 << 4), *((u32*)(r4 + 0x1c)), 8, ((r0 << 3) >> 0x1f));
    // add r0, r4, r0
    GetWindowWidth((0x13 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // add r0, r4, r0
    // asr r3, r3, #1
    ov81_022430B4((0x13 << 4), *((u32*)(r4 + 0x1c)), 7, ((r0 << 3) >> 0x1f));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((1 << 8));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x11 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x12 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x13 << 4));
}





void ov81_02241650(void) {
    // add r2, sp, #4
    // add r3, sp, #0
    ov81_02243228(*((u32*)(r0 + 0x00000464)));
    ov81_02242D88(*((u32*)(r5 + (0xe2 << 2))), 0);
    ov81_02242D88(*((u32*)(r5 + (0xe3 << 2))), 1);
    ov81_02242DE4(*((u32*)(r5 + (0xe3 << 2))), 6);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov81_02242DAC(*((u32*)(r5 + (0xe3 << 2))));
    ov81_02242D88(*((u32*)(r5 + (0xe2 << 2))), 1);
    ov81_02242D88(*((u32*)(r5 + (0xe3 << 2))), 0);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov81_02242DAC(*((u32*)(r5 + (0xe2 << 2))));
}





void ov81_022416CC(void) {
    // add r2, sp, #4
    // add r3, sp, #0
    ov81_02243228(*((u32*)(r0 + 0x00000464)));
    ov81_02242D88(*((u32*)(r5 + (0xe2 << 2))), 0);
    ov81_02242D88(*((u32*)(r5 + (0xe3 << 2))), 1);
    ov81_02242DE4(*((u32*)(r5 + (0xe3 << 2))), 6);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov81_02242DAC(*((u32*)(r5 + (0xe3 << 2))));
    ov81_02242D88(*((u32*)(r5 + (0xe2 << 2))), 1);
    ov81_02242D88(*((u32*)(r5 + (0xe3 << 2))), 0);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov81_02242DAC(*((u32*)(r5 + (0xe2 << 2))));
}





void ov81_0224174C(void) {
    ov81_022431E0(*((u32*)(r0 + 0x4c)), 3);
    ov81_02243140(*((u32*)(r4 + 0x4c)), *((u32*)(r4 + (0xf7 << 2))), 0);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((1 << 8));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((5 << 6));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x13 << 4));
    GridInputHandler_SetNextInput(*((u32*)(r4 + 0x00000464)), 4);
    ov81_0224141C(r4, 4);
    ov81_02243314(*((u32*)(r4 + 0x00000464)), 1, *((u8*)(r4 + 9)));
    ov81_02242D88(*((u32*)(r4 + (0xe3 << 2))), 1);
}





void ov81_022417B4(void) {
    ov81_022431E0(*((u32*)(r0 + 0x4c)), 0);
    ov81_02243140(*((u32*)(r4 + 0x4c)), *((u32*)(r4 + (0xf7 << 2))), 3);
    // add r0, #0xf0
    ScheduleWindowCopyToVram(r4);
    GridInputHandler_SetNextInput(*((u32*)(r4 + 0x00000464)), ((*((u32*)(r4 + (0x00000464 + 4))) << 0x18) >> 0x18));
    ov81_02243314(*((u32*)(r4 + 0x00000464)), 0, *((u8*)(r4 + 9)));
    ov81_02242D88(*((u32*)(r4 + (0xe3 << 2))), 0);
}





void ov81_02241804(void) {
    GridInputHandler_GetNextInput(*((u32*)(r0 + 0x00000464)));
    ov81_02243140(*((u32*)(r5 + 0x4c)), *((u32*)(r5 + (0xf7 << 2))), 3);
    // add r0, #0xf0
    ScheduleWindowCopyToVram(r5);
    ov81_02242D88(*((u32*)(r5 + (0xe3 << 2))), 1);
}





void ov81_02241840(void) {
    // ldr r0, [r4, r0]
}





void ov81_0224185C(void) {
    // add r0, r4, r0
    FillWindowPixelBuffer((1 << 8), 2);
    // add r0, r4, r0
    FillWindowPixelBuffer((5 << 6), 2);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x13 << 4), 2);
    // add r0, #0xf0
    FillWindowPixelBuffer(r4, 2);
    // add r0, r4, r0
    GetWindowWidth((1 << 8));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xfe
    // add r3, r5, r3
    // add r0, r4, r0
    // asr r3, r3, #1
    ov81_022430B4(2, *((u32*)(r4 + 0x1c)), 0x14, ((r0 << 3) >> 0x1f));
    // add r0, r4, r0
    GetWindowWidth((5 << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // add r0, r4, r0
    // asr r3, r3, #1
    ov81_022430B4((5 << 6), *((u32*)(r4 + 0x1c)), 0x15, ((r0 << 3) >> 0x1f));
    // add r0, r4, r0
    GetWindowWidth((0x13 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // add r0, r4, r0
    // asr r3, r3, #1
    ov81_022430B4((0x13 << 4), *((u32*)(r4 + 0x1c)), 0x16, ((r0 << 3) >> 0x1f));
    // add r0, #0xf0
    GetWindowWidth(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // add r0, #0xf0
    // asr r3, r3, #1
    ov81_022430B4(r4, *((u32*)(r4 + 0x1c)), 0x13, ((r0 << 3) >> 0x1f));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((1 << 8));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((5 << 6));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x13 << 4));
    // add r4, #0xf0
    CopyWindowPixelsToVram_TextMode(r4);
}





void ov81_02241980(void) {
    ov81_022431E0(*((u32*)(r0 + 0x4c)), 2);
    ov81_02243140(*((u32*)(r4 + 0x4c)), *((u32*)(r4 + (0xf7 << 2))), 1);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x15 << 4));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x16 << 4));
    GridInputHandler_SetNextInput(*((u32*)(r4 + 0x00000464)), 6);
    ov81_0224141C(r4, 6);
    ov81_022433FC(*((u32*)(r4 + 0x00000464)), 1, *((u8*)(r4 + 9)));
    ov81_02242D88(*((u32*)(r4 + (0xe3 << 2))), 1);
}





void ov81_022419E0(void) {
    ov81_022431E0(*((u32*)(r0 + 0x4c)), 1);
    ov81_02243140(*((u32*)(r4 + 0x4c)), *((u32*)(r4 + (0xf7 << 2))), 2);
    // add r0, #0xe0
    ScheduleWindowCopyToVram(r4);
    // add r0, #0xf0
    ScheduleWindowCopyToVram(r4);
    GridInputHandler_SetNextInput(*((u32*)(r4 + 0x00000464)), ((*((u32*)(r4 + (0x00000464 + 4))) << 0x18) >> 0x18));
    ov81_022433FC(*((u32*)(r4 + 0x00000464)), 0, *((u8*)(r4 + 9)));
    ov81_02242D88(*((u32*)(r4 + (0xe3 << 2))), 0);
}





void ov81_02241A38(void) {
    GridInputHandler_GetNextInput(*((u32*)(r0 + 0x00000464)));
    ov81_02243140(*((u32*)(r5 + 0x4c)), *((u32*)(r5 + (0xf7 << 2))), 2);
    // add r0, #0xe0
    ScheduleWindowCopyToVram(r5);
    // add r0, #0xf0
    ScheduleWindowCopyToVram(r5);
    ov81_02242D88(*((u32*)(r5 + (0xe3 << 2))), 1);
}





void ov81_02241A7C(void) {
    // ldr r0, [r4, r0]
}





void ov81_02241A98(void) {
    // add r0, r4, r0
    FillWindowPixelBuffer((0x15 << 4), 2);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x16 << 4), 2);
    // add r0, #0xe0
    FillWindowPixelBuffer(r4, 2);
    // add r0, #0xf0
    FillWindowPixelBuffer(r4, 2);
    // add r0, r4, r0
    GetWindowWidth((0x15 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // add r0, r4, r0
    // asr r3, r3, #1
    ov81_022430B4((0x15 << 4), *((u32*)(r4 + 0x1c)), 0x19, ((r0 << 3) >> 0x1f));
    // add r0, r4, r0
    GetWindowWidth((0x16 << 4));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // add r0, r4, r0
    // asr r3, r3, #1
    ov81_022430B4((0x16 << 4), *((u32*)(r4 + 0x1c)), 0x16, ((r0 << 3) >> 0x1f));
    // add r0, #0xe0
    GetWindowWidth(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // add r0, #0xe0
    // asr r3, r3, #1
    ov81_022430B4(r4, *((u32*)(r4 + 0x1c)), 0x17, ((r0 << 3) >> 0x1f));
    // add r0, #0xf0
    GetWindowWidth(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // add r0, #0xf0
    // asr r3, r3, #1
    ov81_022430B4(r4, *((u32*)(r4 + 0x1c)), 0x18, ((r0 << 3) >> 0x1f));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x15 << 4));
    // add r0, r4, r0
    CopyWindowPixelsToVram_TextMode((0x16 << 4));
    // add r0, #0xe0
    CopyWindowPixelsToVram_TextMode(r4);
    // add r4, #0xf0
    CopyWindowPixelsToVram_TextMode(r4);
}





void ov81_02241BB8(void) {
}





void ov81_02241BC8(void) {
}





void ov81_02241BD0(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, sp, #0
    // add r1, sp, #0
}





void ov81_02241C0C(void) {
    GridInputHandler_GetNextInput(*((u32*)(r0 + 0x00000464)));
    // add r5, r4, r5
    // add r1, r4, r0
    Pokepic_SetAttr(*((u32*)(*((u8*)(r4 + 0x11)) + (0x6b << 2))), 6, 1, (0xf2 << 2));
    ov81_02241E68(r4, 0);
    // add r1, r4, r0
    Pokepic_SetAttr(*((u32*)(r1 + (0x6b << 2))), 6, 0);
    ov81_02241CEC(r4);
}





void ov81_02241C84(void) {
    // add r1, #0x30
    // add r1, #0x48
    // str r1, [r2]
    // str r0, [r3]
}





void ov81_02241CA0(void) {
    GridInputHandler_GetNextInput(*((u32*)(r0 + 0x00000464)));
    // add r6, r5, r6
    ov81_02241C84((((0 + 1) << 0x10) >> 0x10), *((u32*)(r5 + 0x0000047C)), r4, r7);
}





void ov81_02241CEC(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
}





void ov81_02241D0C(void) {
    // sub r1, #0xa0
}





void ov81_02241D38(void) {
    GridInputHandler_GetNextInput(*((u32*)(r0 + 0x00000464)));
    ov81_02242D88(*((u32*)(r5 + (0x39 << 4))), 0);
    ov81_02242D88(*((u32*)(r5 + (0x39 << 4))), 1);
    // add r2, sp, #4
    // add r3, sp, #0
    ov81_02241C84(r4, *((u32*)(r5 + 0x0000047C)));
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov81_02242D94(*((u32*)(r5 + (0x39 << 4))));
}





void ov81_02241D94(void) {
    GridInputHandler_GetNextInput(*((u32*)(r0 + 0x00000464)));
    ov81_02242D88(*((u32*)(r5 + (0x39 << 4))), 0);
    ov81_02242D88(*((u32*)(r5 + (0x39 << 4))), 1);
    ov81_02241EDC(r5, *((u16*)(r5 + (0xf2 << 2))), r4, 0);
}





void ov81_02241DDC(void) {
    // str r1, [sp, #8]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r4, [sp, #0x14]
    // str r5, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    Party_GetMonByIndex(*((u32*)(r0 + (0xf << 6))), *((u16*)(*((u32*)(r0 + 0x0000047C)) + (0xf2 << 2))), (0xf2 << 2));
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r6, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r3, r6, r3
    ov81_02240F48(r5, ((r4 << 0x18) >> 0x18), r0);
    Pokepic_SetAttr(*((u32*)(r7 + (0x6b << 2))), 6, 1);
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
}





void ov81_02241E68(void) {
    // add r1, r5, r0
    Pokepic_Delete(*((u32*)(r1 + (0x6b << 2))));
    // sub r0, #0xbc
    Party_GetMonByIndex(*((u32*)(r5 + 0x0000047C)), r7);
    // str r0, [sp]
    // add r3, #0x30
    // str r6, [sp, #4]
    ov81_02240F48(r5, ((r4 << 0x18) >> 0x18), r0, (0x50 * r4));
    // sub r0, #0xbc
    Party_GetMonByIndex(*((u32*)(r5 + r0)), r7);
    // str r0, [sp]
    // add r3, #0x48
    // str r6, [sp, #4]
    ov81_02240F48(r5, ((r4 << 0x18) >> 0x18), r0, (0x70 * r4));
}





void ov81_02241EDC(void) {
    // add r1, r5, r0
    Pokepic_Delete(*((u32*)(r1 + (0x6b << 2))));
    // sub r0, #0xb8
    Party_GetMonByIndex(*((u32*)(r5 + 0x0000047C)), r7);
    // str r0, [sp]
    // add r3, #0x30
    // str r6, [sp, #4]
    ov81_02240F48(r5, ((r4 << 0x18) >> 0x18), r0, (0x50 * r4));
    // sub r0, #0xb8
    Party_GetMonByIndex(*((u32*)(r5 + r0)), r7);
    // str r0, [sp]
    // add r3, #0x48
    // str r6, [sp, #4]
    ov81_02240F48(r5, ((r4 << 0x18) >> 0x18), r0, (0x70 * r4));
}





void ov81_02241F50(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r6
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r7, r0
    ov81_02242CBC((0x71 << 2), 1, 3, 1);
    // str r0, [r5, r1]
    ov81_02242D88(*((u32*)(r5 + (0xe7 << 2))), 0);
    // ldr r0, [sp, #0xc]
    // add r6, r6, r0
}





void ov81_02241FC0(void) {
    ov81_02242D74(*((u32*)(r0 + (0xe7 << 2))));
}





void ov81_02241FEC(void) {
    ov81_02242DFC(*((u32*)(r0 + (0xe7 << 2))), 3);
    ov81_02242D88(*((u32*)(r5 + r7)), 1);
    ov81_02242DFC(*((u32*)(r5 + (0xe7 << 2))), 2);
    ov81_02242D88(*((u32*)(r5 + (0xe7 << 2))), 1);
    ov81_02242D88(*((u32*)(r5 + (0xe7 << 2))), 0);
}





void ov81_02242058(void) {
    ov81_02242DFC(*((u32*)(r0 + (0xe7 << 2))), 3);
    ov81_02242DFC(*((u32*)(r5 + (0xe7 << 2))), 2);
    ov81_02242D88(*((u32*)(r5 + (0xe7 << 2))), 1);
}





void ov81_022420B4(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r0, r7, r1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov81_02242CBC((0x71 << 2), 2, 0, 0);
    // add r2, r5, r1
    // str r0, [r2, r1]
    // add r0, #0xd4
    // sub r0, #0xcc
    ov81_02242D88(*((u32*)(r5 + (0xea << 2))), 0);
    // add r7, r5, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov81_02242D18((0x71 << 2), 3, 0, 0);
    // str r0, [r7, r1]
    ov81_02242D88(*((u32*)(r7 + (0xea << 2))), 0);
}





void ov81_02242170(void) {
}





void ov81_0224218C(void) {
    // add r1, r5, r0
    // add r1, r5, r0
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r6, r5, r0
    // add r1, r5, r0
}





void ov81_02242218(void) {
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r2, [sp, #0x18]
    // str r0, [sp]
    // add r3, sp, #0x24
    // str r0, [sp, #0x20]
    // add r1, r5, r1
    // sub r0, #0xec
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // sub r0, #0xec
    // add r2, r5, r2
    // sub r0, #0xec
    // add r1, r5, r1
    // eor r0, r2
    // str r0, [r5, r1]
    // sub r1, #0xec
    // add r0, r5, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r5, #0xd0
    // str r4, [sp, #0x14]
}





void ov81_02242300(void) {
    // str r4, [sp, #0x18]
    // add r7, #0x50
    // add r1, r5, r0
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, r7, r1
    ov81_022409B0(r0, ((0 + 2) << 4), ((*((u16*)(r1 + (0xf2 << 2))) << 0x18) >> 0x18), 4);
    // ldr r0, [sp, #0x18]
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r2, #0x50
    // add r1, r2, r1
    // str r0, [sp, #0x14]
    ov81_022409B0(r5, (((((r4 + 1) << 0x10) >> 0x10) + 2) << 4), ((r6 << 0x18) >> 0x18), 4);
    // add r6, #0x50
    // add r0, r6, r7
    FillWindowPixelBuffer(((((r4 + 1) << 0x10) >> 0x10) + 2), 0);
    // add r0, r6, r7
    ScheduleWindowCopyToVram();
}





void ov81_022423D0(void) {
    // add r6, #0x50
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r6, r1
    // str r7, [sp, #0x14]
    ov81_022409B0(r0, ((0 + 2) << 4), ((0 << 0x18) >> 0x18), 4);
}





void ov81_02242420(void) {
    // add r6, #0x50
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, r6, r1
    ov81_022409B0(r0, ((0 + 2) << 4), ((r1 << 0x18) >> 0x18), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r1, r6, r1
    ov81_022409B0(r5, ((r4 + 2) << 4), ((r4 << 0x18) >> 0x18), 4);
}





void ov81_022424AC(void) {
    // add r0, #0x50
    // add r0, r0, r1
    // str r1, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r5, #0x50
    // str r1, [sp, #0x14]
    // add r1, r5, r4
    // add r0, r5, r4
}





void ov81_02242500(void) {
}





void ov81_02242514(void) {
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r0 + (0x1a << 4))), *((u32*)(r0 + 0x00000478)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + (0x1a << 4))), 4, 8, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r4 + (0x1a << 4))), 4, 8, 2);
    // eor r0, r2
    // str r0, [r4, r1]
}





void ov81_0224258C(void) {
    // strb r1, [r0, r4]
    // strb r2, [r0, r1]
    // strb r3, [r0, r1]
    // add r2, sp
    // strb r3, [r0, r1]
    // strb r2, [r0, r1]
    // strb r2, [r0, r1]
    // strb r2, [r0, r1]
    // strb r2, [r0, r1]
}





void ov81_022425C4(void) {
}





void ov81_022425D8(void) {
}





void ov81_022425EC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r0 + 0x4c)), 5, *((u8*)(r0 + (0x00000489 - 5))), *((u8*)(r0 + (0x00000489 - 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r4 + 0x4c)), 5, *((u8*)(r4 + (r3 - 5))), *((u8*)(r4 + (r3 - 4))));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x4c)), 5);
    // eor r0, r2
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r2, [r4, r0]
    *((u8*)(r4 + 8)) = *((u8*)(r4 + (0x00000489 + 2)));
    // strb r0, [r4, r1]
}





void ov81_02242694(void) {
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 0, 0xf, 6);
    ov81_02242FBC(*((u32*)(r5 + (0x36 << 4))), 1);
    // strh r6, [r0]
    ov81_02242FBC(*((u32*)(r5 + (0x36 << 4))), 0);
}





void ov81_02242704(void) {
}





void ov81_02242710(void) {
}





void ov81_0224271C(void) {
    sub_0201956C(*((u32*)(r0 + 0x4c)), 2, 1, 0x64);
    // str r0, [r4, r1]
    // str r2, [sp]
    sub_020195F4(*((u32*)(r4 + 0x00000474)), 0, 4, 0x12);
    // str r0, [sp]
    // sub r2, #0x98
    sub_020196B8(*((u32*)(r4 + 0x00000474)), 0, *((u32*)(r4 + 0x00000474)), 0x90);
}





void ov81_0224275C(void) {
    // ldr r1, _02242764 ; =0x00000474
    // ldr r3, _02242768 ; =sub_020195C0
    // ldr r0, [r0, r1]
    // bx r3
    // _02242764: .word 0x00000474
    // _02242768: .word sub_020195C0
    // TODO: decompile
}





void ov81_0224276C(void) {
    ov81_02242B90();
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    OamManager_Create(0, 0x80, 0, 0x20);
    G2dRenderer_Init(0x20, (r5 + 4), 0x64);
    // str r0, [r5]
    G2dRenderer_SetSubSurfaceCoords((r5 + 4), 0, (2 << 0x14));
    Create2DGfxResObjMan(*((u8*)ov81_02243594), 0, 0x64);
    // str r0, [r6, r1]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    AddCharResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x28, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x3e, 0);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xd0
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x29, 1);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xd4
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x2a, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    AddCharResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x2b, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x3f, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xd0
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x2c, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xd4
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x2d, 1);
    // str r0, [r5, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    AddCharResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0, 1);
    // str r0, [r5, r1]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x34, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xd0
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 2, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xd4
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 1, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    AddCharResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x2b, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x3f, 0);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xd0
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x2c, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xd4
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x2d, 1);
    // str r0, [r5, r1]
    // str r0, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xc8
    AddCharResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x2e, 1);
    // str r0, [r6, r1]
    sub_02074490((0x5f << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    AddPlttResObjFromNarc(*((u32*)(r5 + 0x64)), 0x14, r0, 0);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xd0
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x2f, 1);
    // str r0, [r6, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xd4
    AddCellOrAnimResObjFromNarc(*((u32*)(r5 + 0x64)), 0xb8, 0x30, 1);
    // str r0, [r6, r1]
    // add r6, #0x10
    // sub r7, #0x4c
    // sub r6, #0x48
    sub_0200ACF0(*((u32*)(r5 + (0x62 << 2))), (0x62 << 2));
    sub_0200AF94(*((u32*)(r5 + r6)));
    // add r5, #0x10
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GfGfx_EngineATogglePlanes(0x10, 1);
}





void ov81_02242A8C(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x90]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // add r0, #0xc
    // str r2, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r3, [sp, #0x24]
    // str r3, [sp, #0x28]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    // str r4, [sp, #0x50]
    // add r0, sp, #0x80
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x80
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
}





void ov81_02242B38(void) {
    // add r6, r5, r0
    // add r0, r5, r0
}





void ov81_02242B90(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_InitEx(r3, 0x00100010, 0x00100010);
    ObjPlttTransfer_Init(8, 0x64);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}





void ov81_02242BC8(void) {
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r2, [r0]
    // add r0, #0x58
    // and r2, r1
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r3, r2
    // strh r3, [r0]
    // sub r2, #0x1c
    // and r3, r1
    // strh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    G3X_SetFog(0, 0, 0, 0);
    // str r0, [sp]
    G3X_SetClearColor(0, 0, 0x00007FFF, 0x3f);
    // str r1, [r0]
}





void ov81_02242C48(void) {
    Thunk_G3X_Reset();
    // str r3, [r2]
    // add r1, #0x14
    // str r3, [r1]
    // str r0, [r2]
    // str r3, [r1]
    NNS_G3dGlbFlushP(2, 0x04000440, 0x04000440, 0);
    NNS_G2dSetupSoftwareSpriteCamera();
    PokepicManager_DrawAll(r4);
    // str r1, [r0]
}





void ov81_02242C80(void) {
    // add r0, sp, #0x10
    // ldr r0, [sp, #0x34]
    // ldr r3, [sp, #0x30]
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x10
}





void ov81_02242CB0(void) {
}





void ov81_02242CBC(void) {
    // str r2, [sp, #8]
    // strb r1, [r4]
    // ldr r0, [sp, #0x24]
    // str r0, [r4]
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #8]
    // str r5, [sp]
    // str r1, [sp, #4]
    // ldr r3, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
}





void ov81_02242D18(void) {
    // str r2, [sp, #8]
    // strb r0, [r4]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #8]
    // str r0, [r4]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x20]
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
}





u32 ov81_02242D74(void) {
}





void ov81_02242D88(void) {
}





void ov81_02242D94(void) {
}





void ov81_02242DAC(void) {
}





void ov81_02242DCC(void) {
}





void ov81_02242DD8(void) {
}





void ov81_02242DE4(void) {
}





void ov81_02242DFC(void) {
}





void ov81_02242E08(void) {
}





void ov81_02242E14(void) {
}





void ov81_02242E50(void) {
    // strb r0, [r2]
    // strh r1, [r4]
    // str r1, [sp]
    // str r0, [sp, #4]
}





u32 ov81_02242EA4(void) {
}





void ov81_02242EB8(void) {
}





void ov81_02242EC4(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // mov r1, ip
    // ldmia r2!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
}





void ov81_02242F10(void) {
}





void ov81_02242F30(void) {
}





void ov81_02242F3C(void) {
}





void ov81_02242F40(void) {
    // ldrh r0, [r0]
}





void ov81_02242F48(void) {
}





void ov81_02242F54(void) {
}





void ov81_02242F60(void) {
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // add r1, #0xf8
    // str r1, [sp]
    // add r1, sp, #0
    // str r0, [sp, #4]
}





void ov81_02242F8C(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}





void ov81_02242F90(void) {
    // ldr r0, [r0, #8]
    // bx lr
    // TODO: decompile
}





void ov81_02242F94(void) {
}





void ov81_02242FB0(void) {
}





void ov81_02242FBC(void) {
}





u32 ov81_02242FC8(void) {
}





void ov81_02242FDC(void) {
    // add r1, r5, r6
    // add r2, r2, r3
    AddWindow(r0, ov81_022435A8, (0 << 3));
    // add r0, r5, r6
    FillWindowPixelBuffer(0);
}





void ov81_0224300C(void) {
}





void ov81_02243028(void) {
    GetWindowBgId();
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r4), r0, 0x000003E2, 0xb);
    FillWindowPixelBuffer(r4, 0xf);
    DrawFrameAndWindow2(r4, 1, 0x000003E2, 0xb);
}





void ov81_02243068(void) {
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x28]
    // sub r5, r5, r0
    // ldr r0, [sp, #0x28]
    // sub r5, r5, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov81_022430B4(void) {
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
}





void ov81_022430E8(void) {
}





void ov81_02243100(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r1, 0x86, r0, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0x5e
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 0xc2, 4, 0xc2);
}





void ov81_02243140(void) {
    // str r0, [sp]
    // add r1, #0x87
    // add r3, sp, #0x24
    GfGfxLoader_GetScrnDataFromOpenNarc(r1, r2, 1);
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // add r0, #0xc
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r2, r1, r0
    // ldr r0, [sp, #0x1c]
    // add r5, r0, r1
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, r3, r2
    FillBgTilemapRect(r7, 5, ((0x000003D9 << 0x10) >> 0x10), 0);
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    Heap_Free(((((r4 + 1) << 0x18) + 1) << 0x18), (((((r4 + 1) << 0x18) + 1) << 0x18) >> 0x18));
}





void ov81_022431E0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov81_02243220(void) {
}





void ov81_02243228(void) {
}





void ov81_0224323C(void) {
    // bx lr
    // TODO: decompile
}





void ov81_02243240(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov81_022436F0, ov81_02243808, ov81_02243658, r0);
}





void ov81_02243270(void) {
}





void ov81_02243298(void) {
}





void ov81_022432AC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov81_02243668, ov81_02243750, ov81_02243648, r0);
}





void ov81_022432DC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov81_02243688, ov81_02243718, ov81_02243648, r0);
    GridInputHandler_ClearEnabledFlag(2);
}





void ov81_02243314(void) {
}





void ov81_0224335C(void) {
}





void ov81_02243370(void) {
}





void ov81_02243398(void) {
    ov81_02243220(r1);
    ov81_02242710(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov81_022436CC, ov81_02243788, ov81_02243638, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov81_022436A8, ov81_022437C8, ov81_02243638, r4);
}





void ov81_022433FC(void) {
}





void ov81_02243444(void) {
}




