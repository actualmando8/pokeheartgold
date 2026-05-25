/* Decompiled from asm/overlay_05.s */
#include "global.h"

void ov05_0221BA00(void) {
    CreateSysTaskAndEnvironment(ov05_0221BA70, 0x00000BD4, 0x64, *((u32*)(r0 + 0x24)));
    SysTask_GetData();
    memset(0, 0x00000BD4);
    // str r5, [r4]
    // strb r1, [r4, r0]
    sub_020304B4(0x00000B7F, 0);
    // str r0, [r4, r1]
    Save_Bag_Get(*((u32*)(*((u32*)*((u32*)r4)) + (7 << 6))), *((u32*)*((u32*)r4)));
    Bag_HasItem(0x000001D1, 1, *((u32*)(r5 + 0x24)));
    // str r0, [r4, r1]
}




void ov05_0221BA70(void) {
    ov05_0221BD28(r1, *((u8*)(r1 + 0x00000B7F)));
    // strb r0, [r5, r1]
    // blx r1
    // strb r1, [r5, r4]
    // add r0, #0x28
    ov05_0221BB30(r5, (*((u8*)(r5 + (0x2e << 6))) + 1), *((u32*)(r5 + 4)));
    ov05_0221CC74();
    ov05_0221CE50(r5);
    SpriteSystem_DrawSprites(*((u32*)(r5 + (0x65 << 2))));
    // add r0, #0x28
    // str r1, [r0]
}




void ov05_0221BB00(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0
    GfGfx_SetBanks((5 - 1));
    MIi_CpuClear32(0, (6 << 0x18), (2 << 0x12));
}




void ov05_0221BB30(void) {
    ov05_0221E9F8();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221BB54: ; jump table
    ov05_0221E9C4(r4, 0x00000BBC);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r4 + 0x00000BAC)), 0, *((u32*)(r4 + 0x00000BAC)));
    // str r3, [sp]
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x2c
    AddTextPrinterParameterized(1, *((u32*)(r4 + 0x00000B88)), 0);
    // str r0, [r4, r1]
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0xc)), 0);
    // str r1, [r4, r0]
    // add r0, #0xc
    // tst r0, r1
    // str r0, [r4, r2]
    // add r0, #0x10
    // sub r0, #0x10
    // sub r2, #8
    ReadMsgDataIntoString(*((u32*)(r4 + r2)), 2, *((u32*)(r4 + r2)));
    // sub r0, #0x10
    // sub r2, #8
    ReadMsgDataIntoString(*((u32*)(r4 + r2)), 1, *((u32*)(r4 + r2)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    FillWindowPixelRect(0x00000B98, 0xf, 0, 0);
    // add r0, r4, r0
    DrawFrameAndWindow2(0x00000B98, 0, 1, 0xf);
    // str r3, [sp]
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x1c
    AddTextPrinterParameterized(1, *((u32*)(r4 + 0x00000B98)), 0);
    // str r0, [r4, r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    CreateYesNoMenu(*((u32*)(r4 + 0xc)), ov05_0221EA58, 0x1f, 0xe);
    // str r0, [r4, r1]
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0xc)), 0);
    // str r1, [r4, r0]
    Handle2dMenuInput_DeleteOnFinish(*((u32*)(r4 + (r2 + 4))), *((u32*)(*((u32*)r4) + 0x24)));
    // mvn r1, r1
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    ov05_0221E9C4(r4, 0);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r4 + 0x00000BAC)), 5, *((u32*)(r4 + 0x00000BAC)));
    // str r3, [sp]
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x2c
    AddTextPrinterParameterized(1, *((u32*)(r4 + 0x00000B88)), 0);
    // str r0, [r4, r1]
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0xc)), 0);
    // str r1, [r4, r0]
    Clear2dMenuWindowAndDelete(*((u32*)(r4 + (r2 + 4))), *((u32*)(*((u32*)r4) + 0x24)));
    // str r1, [r4, r0]
    // add r0, r4, r0
    ClearFrameAndWindow2(0x00000B88, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0xc)), 0);
    // str r1, [r4, r0]
}




void ov05_0221BD28(void) {
    // strh r0, [r1]
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r0, r2
    // str r0, [r1]
    // add r1, #0x50
    // and r2, r3
    // str r2, [r0]
    // add r0, #0x50
    // strh r2, [r5]
    // strh r2, [r1]
    // strh r2, [r0]
    ov05_0221BB00(0x04001000, (1 << 0x1a), 0, *((u16*)0x04000304));
    BgConfig_Alloc(*((u32*)(*((u32*)r4) + 0x24)));
    *((u32*)(r4 + 0xc)) = r0;
    PaletteData_Init(*((u32*)(*((u32*)r4) + 0x24)));
    *((u32*)(r4 + 8)) = r0;
    PaletteData_AllocBuffers(0, (r5 >> 0x11), *((u32*)(*((u32*)r4) + 0x24)));
    BG_SetMaskColor(4, 0);
    // strb r3, [r4, r0]
    // strb r2, [r4, r1]
    // strb r3, [r4, r0]
    // add r0, #0x28
    *((u32*)(r4 + 4)) = ov05_0221EAC0;
    *((u32*)(r4 + 4)) = ov05_0221EA98;
    // add r1, #0x2a
    *((u32*)(r4 + 4)) = ov05_0221EC28;
    *((u32*)(r4 + 4)) = ov05_0221EC98;
}




void ov05_0221BE04(void) {
    ov05_0221DB94(0x00000B82, *((u8*)(r0 + 0x00000B82)));
    ov05_0221DC60(r4);
    ov05_0221E07C();
    ov05_0221E274(r4);
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    ov05_0221DD08((r1 - 1), 0x20);
    ov05_0221E5E4(r4);
    ov05_0221E944(r4);
    ov05_0221DE38(r4);
    sub_0203A880();
    sub_020880CC(0, *((u32*)(*((u32*)r4) + 0x24)));
    Main_SetVBlankIntrCB(ov05_0221CE88, r4);
    // strb r1, [r4, r0]
}




void ov05_0221BE80(void) {
    ov05_0221CEB8(1, 0);
    ov05_0221D094(r4);
    ov05_0221D228();
    ov05_0221D6C4(0, 0);
    ov05_0221D240(r4);
    sub_0203A880();
    ov05_0221D9F0(r4);
    sub_020880CC(0, *((u32*)(*((u32*)r4) + 0x24)));
    Main_SetVBlankIntrCB(ov05_0221CE88, r4);
    // strb r0, [r4, r1]
    // strb r2, [r4, r0]
    // strb r2, [r4, r0]
    // sub r1, #0xe
    // str r0, [r4, r1]
    // strb r1, [r4, r0]
}




void ov05_0221BF08(void) {
    ov05_0221CEB8(0, 1);
    ov05_0221D094(r5);
    ov05_0221D140(r5);
    ov05_0221D228();
    // add r2, sp, #0
    sub_0202FD28(*((u32*)(*((u32*)*((u32*)r5)) + (7 << 6))), *((u32*)(*((u32*)r5) + 0x24)), *((u32*)r5), 0);
    // ldr r1, [sp]
    // str r1, [r5, r0]
    // str r4, [r5, r0]
    sub_02034818(0);
    PlayerProfile_GetVersion();
    // str r1, [r5, r0]
    // mvn r1, r1
    // add r2, #0x10
    ov05_0221D6C4((0xbd << 4), 0x1f, 0x1f);
    ov05_0221D7AC(r5);
    sub_0203A880();
    sub_020880CC(0, *((u32*)(*((u32*)r5) + 0x24)));
    Main_SetVBlankIntrCB(ov05_0221CE88, r5);
    // strb r0, [r5, r2]
    // strb r3, [r5, r1]
    // strb r3, [r5, r1]
    // sub r2, #0xe
    // str r1, [r5, r2]
    NewMsgDataFromNarc(0, 0x1b, 0x0000027E, *((u32*)(*((u32*)r5) + 0x24)));
    // str r0, [r5, r1]
    MessageFormat_New(*((u32*)(*((u32*)r5) + 0x24)), 0x00000BAC);
    // str r0, [r5, r1]
    String_New((5 << 6), *((u32*)(*((u32*)r5) + 0x24)));
    // str r0, [r5, r1]
    // add r1, #8
    // str r0, [r5, r1]
    // strb r1, [r5, r0]
}




void ov05_0221C018(void) {
    IsPaletteFadeFinished();
    // strb r2, [r4, r0]
    // strb r2, [r4, r0]
}




void ov05_0221C050(void) {
    Bg_GetXpos(*((u32*)(r0 + 0xc)), 3);
    // strb r2, [r4, r1]
    // sub r0, #0xa
    // strh r2, [r4, r0]
    // sub r1, #8
    // strh r2, [r4, r1]
    ScheduleSetBgPosText(*((u32*)(r4 + 0xc)), 3, 0, 0x18);
    // sub r3, #0x18
    ScheduleSetBgPosText(*((u32*)(r4 + 0xc)), 2, 0, 0);
    ov05_0221D3AC(r4, 0, 0, 0);
    ov05_0221D3AC(r4, 1, 0, 0);
    ov05_0221D3AC(r4, 2, 0, 0);
    ov05_0221D3AC(r4, 3, 0, 0);
    ov05_0221D664(r4, 0, 0, 0);
    ov05_0221D664(r4, 1, 0, 0);
    ov05_0221D664(r4, 2, 0, 0);
    ov05_0221D664(r4, 3, 0, 0);
    ScheduleSetBgPosText(*((u32*)(r4 + 0xc)), 3, 2, *((u32*)(r4 + 0x00000B74)));
    ScheduleSetBgPosText(*((u32*)(r4 + 0xc)), 2, 1, *((u32*)(r4 + 0x00000B74)));
    // sub r2, #0xe
    // strb r0, [r4, r3]
    // sub r2, r3, r2
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 0, ((1 << 8) << 0x10), 0);
    // add r2, #0xe
    // add r2, #0xff
    // sub r2, r5, r2
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 1, (1 << 0x10), 0);
    // add r2, #0xe
    // add r2, #0xfe
    // sub r2, r2, r5
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 2, (2 << 0x10), 0);
    // add r2, #0xe
    // add r2, #0xfd
    // sub r2, r2, r5
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 3, (3 << 0x10), 0);
    // add r2, #0xe
    // sub r2, r5, r2
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 0, ((1 << 8) << 0x10), 0);
    // add r2, #0xe
    // add r2, #0xff
    // sub r2, r5, r2
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 1, (1 << 0x10), 0);
    // add r2, #0xe
    // add r2, #0xfe
    // sub r2, r2, r5
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 2, (2 << 0x10), 0);
    // add r2, #0xe
    // add r2, #0xfd
    // sub r2, r2, r4
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 3, (3 << 0x10), 0);
}




void ov05_0221C21C(void) {
    ov05_0221DAE0();
    // strb r1, [r5, r0]
    // add r0, #0x28
    PlaySE(0x00000715, 0);
    PlaySE(0x00000852);
    ScheduleSetBgPosText(*((u32*)(r5 + 0xc)), 3, 0, 0x18);
    // sub r3, #0x18
    ScheduleSetBgPosText(*((u32*)(r5 + 0xc)), 2, 0, 0);
    ScheduleSetBgPosText(*((u32*)(r5 + 0xc)), 3, 3, 0);
    ScheduleSetBgPosText(*((u32*)(r5 + 0xc)), 2, 3, 0);
    ov05_0221D3AC(r5, 0, 0, 0);
    ov05_0221D3AC(r5, 1, 0, 0);
    ov05_0221D3AC(r5, 2, 0, 0);
    ov05_0221D3AC(r5, 3, 0, 0);
    ov05_0221D664(r5, 0, 0, 0);
    ov05_0221D664(r5, 1, 0, 0);
    ov05_0221D664(r5, 2, 0, 0);
    ov05_0221D664(r5, 3, 0, 0);
    // ldrsb r4, [r5, r0]
    LCRandom((r0 - 6));
    _s32_div_f(r4);
    // add r0, r4, r0
    // asr r0, r0, #1
    // sub r0, r1, r0
    // asr r6, r0, #0x10
    // ldrsb r4, [r5, r0]
    LCRandom(0x00000B7D);
    _s32_div_f(r4);
    // add r0, r4, r0
    // asr r0, r0, #1
    // sub r0, r1, r0
    // asr r4, r0, #0x10
    // ldrsh r0, [r5, r0]
    // ldrsh r0, [r5, r0]
    // mvn r0, r0
    // asr r6, r0, #0x10
    // ldrsh r0, [r5, r0]
    // ldrsh r0, [r5, r0]
    // mvn r0, r0
    // asr r4, r0, #0x10
    // add r3, #0x18
    ScheduleSetBgPosText(*((u32*)(r5 + 0xc)), 3, 0, r6);
    // sub r3, #0x18
    ScheduleSetBgPosText(*((u32*)(r5 + 0xc)), 2, 0, r6);
    ScheduleSetBgPosText(*((u32*)(r5 + 0xc)), 3, 3, r4);
    ScheduleSetBgPosText(*((u32*)(r5 + 0xc)), 2, 3, r4);
    ov05_0221D3AC(r5, 0, r6, r4);
    ov05_0221D3AC(r5, 1, r6, r4);
    ov05_0221D3AC(r5, 2, r6, r4);
    ov05_0221D3AC(r5, 3, r6, r4);
    ov05_0221D664(r5, 0, r6, r4);
    ov05_0221D664(r5, 1, r6, r4);
    ov05_0221D664(r5, 2, r6, r4);
    ov05_0221D664(r5, 3, r6, r4);
    // strh r6, [r5, r0]
    // strh r4, [r5, r0]
    // strb r1, [r5, r0]
}




void ov05_0221C430(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0x00007FFF);
    IsPaletteFadeFinished(*((u8*)(r4 + 0x00000B82)));
    // strb r1, [r4, r0]
    PlaySE(0x00000719, 2);
    ScheduleSetBgPosText(*((u32*)(r4 + 0xc)), 3, 1, 0x10);
    ScheduleSetBgPosText(*((u32*)(r4 + 0xc)), 2, 2, 0x10);
    // strb r0, [r4, r2]
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 0, ((*((u8*)(r4 + 0x00000B82)) << 4) << 0x10), 0);
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 1, ((*((u8*)(r4 + 0x00000B82)) << 4) << 0x10), 0);
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 2, (*((u8*)(r4 + 0x00000B82)) << 0x14), 0);
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 3, (*((u8*)(r4 + 0x00000B82)) << 0x14), 0);
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 0, ((*((u8*)(r4 + 0x00000B82)) << 4) << 0x10), 0);
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 1, ((*((u8*)(r4 + 0x00000B82)) << 4) << 0x10), 0);
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 2, (*((u8*)(r4 + 0x00000B82)) << 0x14), 0);
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 3, (*((u8*)(r4 + 0x00000B82)) << 0x14), 0);
}




void ov05_0221C558(void) {
    // strb r2, [r0, r1]
}




void ov05_0221C568(void) {
    ov05_0221CCF4();
    // add r0, #0x2a
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // add r0, #0x2a
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
}




void ov05_0221C5A8(void) {
    ov05_0221C5C4(*((u8*)(r0 + 0x00000B7E)));
    ov05_0221C6C8();
}




void ov05_0221C5C4(void) {
    ScheduleSetBgPosText(*((u32*)(r0 + 0xc)), 2, 2, *((u8*)(ov05_0221EA6C + (*((u8*)(r0 + 0x00000B82)) << 1))));
    ScheduleSetBgPosText(*((u32*)(r4 + 0xc)), 3, 2, *((u8*)(ov05_0221EA6C + (*((u8*)(r4 + 0x00000B82)) << 1))));
    ov05_0221D3AC(r4, 0, *((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))), 0);
    ov05_0221D3AC(r4, 1, *((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))), 0);
    ov05_0221D3AC(r4, 2, *((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))), 0);
    ov05_0221D3AC(r4, 3, *((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))), 0);
    ov05_0221D664(r4, 0, *((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))), 0);
    ov05_0221D664(r4, 1, *((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))), 0);
    ov05_0221D664(r4, 2, *((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))), 0);
    ov05_0221D664(r4, 3, *((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))), 0);
    PlaySE(0x00000853);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
}




void ov05_0221C6C8(void) {
    ScheduleSetBgPosText(*((u32*)(r0 + 0xc)), 2, 1, *((u8*)(ov05_0221EA6C + (*((u8*)(r0 + 0x00000B82)) << 1))));
    ScheduleSetBgPosText(*((u32*)(r4 + 0xc)), 3, 1, *((u8*)(ov05_0221EA6C + (*((u8*)(r4 + 0x00000B82)) << 1))));
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 0, (*((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))) << 0x10), 0);
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 1, (*((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))) << 0x10), 0);
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 2, (*((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))) << 0x10), 0);
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D3AC(r4, 3, (*((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))) << 0x10), 0);
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 0, (*((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))) << 0x10), 0);
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 1, (*((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))) << 0x10), 0);
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 2, (*((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))) << 0x10), 0);
    // neg r2, r2
    // asr r2, r2, #0x10
    ov05_0221D664(r4, 3, (*((u8*)(ov05_0221EA6D + (*((u8*)(r4 + 0x00000B82)) << 1))) << 0x10), 0);
    PlaySE(0x00000853);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
}




void ov05_0221C7FC(void) {
    // strb r2, [r0, r1]
}




void ov05_0221C80C(void) {
    GfGfx_EngineATogglePlanes(2, 1);
    // add r3, #0x48
    // and r2, r1
    // str r1, [r0]
    // strh r1, [r3]
    // add r0, #0x4a
    // strh r1, [r0]
    // strb r0, [r4, r3]
    // strb r1, [r4, r0]
    // and r0, r1
    // str r0, [r2]
    // sub r2, r2, r1
    // add r1, #0x48
    // and r2, r5
    // strh r6, [r0]
    *((u16*)(0x04000040 + 4)) = (((*((u32*)(0x20 << 0x15)) << 0x18) >> 0x18) | (0xff << 8));
    // strb r0, [r4, r3]
}




void ov05_0221C8A0(void) {
    PlaySE(0x0000071A);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0x72 << 2))), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0x73 << 2))), 1);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x72 << 2))), 0);
    // strb r1, [r4, r0]
}




void ov05_0221C8E0(void) {
    PlaySE(0x0000071A);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0x72 << 2))), 1);
    // strb r1, [r4, r0]
}




void ov05_0221C908(void) {
    ov05_0221E9F8();
    // strb r0, [r4, r1]
    // sub r0, #0x10
    // str r1, [r4, r0]
    // sub r0, #0x3a
    // strb r1, [r4, r0]
    ov05_0221E9C4(r4, *((u8*)(r4 + 0x00000B82)));
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r4 + 0x00000BAC)), 8, *((u32*)(r4 + 0x00000BAC)));
    // str r3, [sp]
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x2c
    AddTextPrinterParameterized(1, *((u32*)(r4 + 0x00000B88)), 0);
    // str r0, [r4, r1]
    ov05_0221EA18(r4, 0x00000BB8);
    // strb r1, [r4, r0]
    // add r2, r4, r2
    // str r2, [sp]
    // add r0, r4, r0
    // str r0, [sp, #4]
    // add r1, #0x2c
    sub_0202FE14(*((u32*)(*((u32*)*((u32*)r4)) + (7 << 6))), *((u8*)*((u32*)r4)), 0, 0);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r4 + 0x00000BAC)), 6, *((u32*)(r4 + 0x00000BAC)));
    PlaySE(0x0000061A);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r4 + 0x00000BAC)), 7, *((u32*)(r4 + 0x00000BAC)));
    ov05_0221EA38(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    FillWindowPixelRect(0x00000B88, 0xf, 0, 0);
    // str r3, [sp]
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x2c
    AddTextPrinterParameterized(1, *((u32*)(r4 + 0x00000B88)), 0);
    // str r0, [r4, r1]
    // sub r0, #0x37
    // strb r2, [r4, r0]
    // sub r0, #0x36
    // sub r1, #0x36
    // strb r0, [r4, r1]
    // strb r2, [r4, r1]
    // strb r2, [r4, r1]
    // strb r1, [r4, r0]
    // add r0, r4, r0
    ClearFrameAndWindow2(((*((u8*)(r4 + 0x00000BB8)) + 1) + 6), 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0xc)), 0);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0xc)), 0);
}




void ov05_0221CAB8(void) {
    ov05_0221E9F8(*((u8*)(r0 + 0x00000B82)));
    GfGfx_EngineATogglePlanes(1, 0);
    ov05_0221E9C4(r4);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r4 + 0x00000BAC)), 9, *((u32*)(r4 + 0x00000BAC)));
    // str r3, [sp]
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x2c
    AddTextPrinterParameterized(1, *((u32*)(r4 + 0x00000B88)), 0);
    // str r0, [r4, r1]
    sub_02037AC0(0x3e, 0x00000BB8);
    ov05_0221E9F8(r4);
    GfGfx_EngineATogglePlanes(1, 1);
    // strb r1, [r4, r0]
    sub_02037B38(0x3e, (*((u8*)(r4 + 0x00000B82)) + 1));
    // strb r1, [r4, r0]
    GF_AssertFail(1, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0xc)), 0);
}




void ov05_0221CB70(void) {
    ov05_0221CCF4();
    // add r0, #0x2a
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_CopyPalette(*((u32*)(r4 + 8)), 0, 0x40, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    PaletteData_CopyPalette(*((u32*)(r4 + 8)), 0, 0x40, 0);
    // add r0, #0x2a
    // str r1, [sp]
    // str r0, [sp, #4]
    PaletteData_CopyPalette(*((u32*)(r4 + 8)), 0, 0x40, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_CopyPalette(*((u32*)(r4 + 8)), 0, 0x40, 0);
    PaletteData_SetSelectedBufferAll(*((u32*)(r4 + 8)), 1);
    PlaySE(0x0000071B);
    // strb r1, [r4, r0]
}




void ov05_0221CC04(void) {
    PlaySE(0x00000719);
    // strb r0, [r4, r1]
    // strb r2, [r4, r0]
    // strb r0, [r4, r1]
    // sub r1, r1, r2
    // asr r1, r1, #0x10
    ov05_0221E564(r4, (0x10 << 0x10), *((u8*)(r4 + 0x00000B82)));
    ov05_0221DE6C(r4, *((u8*)(r4 + 0x00000B82)));
}




void ov05_0221CC58(void) {
}




void ov05_0221CC74(void) {
    // add r0, #0x28
    // add r0, #0x2b
    // strb r1, [r0]
}




void ov05_0221CCF4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221CD0E: ; jump table
}




void ov05_0221CD24(void) {
    // str r1, [sp]
    GF_CreateVramTransferManager(0x40, *((u32*)(*((u32*)r0) + 0x24)));
    SpriteSystem_Alloc(*((u32*)(*((u32*)r5) + 0x24)));
    // str r0, [r5, r1]
    SpriteManager_New(*((u32*)(r5 + (0x19 << 4))), (0x19 << 4));
    // add r2, sp, #0x18
    // str r0, [r5, r1]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r4, [sp, #4]
    SpriteSystem_Init(*((u32*)(r5 + ((0x65 << 2) - 4))), r2, r2, 0x10);
    SpriteSystem_InitSprites(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4);
    // ldr r2, [sp]
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))));
    GfGfx_EngineATogglePlanes(0x10, 1);
}




void ov05_0221CDC4(void) {
    // add r3, sp, #0
    // strh r0, [r3]
    // str r3, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // str r3, [sp, #0x20]
    // str r1, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r2, sp, #0
}




void ov05_0221CE0C(void) {
    // ldr r0, [r6, r0]
    // ldr r0, [r5, r0]
    // ldr r0, [r6, r7]
    // ldr r0, [r6, r1]
    // ldr r1, [r6, r1]
    // ldr r0, [r6, r0]
}




void ov05_0221CE50(void) {
    // add r6, #0x78
    // add r0, r5, r0
}




void ov05_0221CE88(void) {
    DoScheduledBgGpuUpdates(*((u32*)(r0 + 0xc)));
    PaletteData_PushTransparentBuffers(*((u32*)(r4 + 8)));
    GF_RunVramTransferTasks();
    SpriteSystem_TransferOam();
    // str r0, [r3, r1]
}




void ov05_0221CEB8(void) {
    // str r4, [r5, r0]
    // add r3, sp, #0x70
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r4, [sp, #0x7c]
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x54
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r5 + 0xc)), 3, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0xc)), 3);
    // add r3, #0xfd
    ScheduleSetBgPosText(*((u32*)(r5 + 0xc)), 3, 0, 3);
    // add r3, sp, #0x38
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r5 + 0xc)), 2, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0xc)), 2);
    // mvn r3, r3
    ScheduleSetBgPosText(*((u32*)(r5 + 0xc)), 2, 0, 0xff);
    // add r3, sp, #0x1c
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r5 + 0xc)), 1, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0xc)), 1);
    GfGfx_EngineATogglePlanes(2, 0);
    BgSetPosTextAndCommit(*((u32*)(r5 + 0xc)), 1, 3, 0x18);
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r5 + 0xc)), 0, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0xc)), 0);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(1, 0);
}




void ov05_0221CFF0(void) {
    // sub r0, #0xc
    // add r0, r4, r0
    RemoveWindow(0x00000B94, *((u32*)(r0 + 0x00000B94)));
    // sub r0, #0xc
    // add r0, r4, r0
    RemoveWindow(0x00000BA4, *((u32*)(r4 + 0x00000BA4)));
}




void ov05_0221D020(void) {
    String_Delete(*((u32*)(r0 + 0x00000BB4)));
    MessageFormat_Delete(*((u32*)(r4 + (0xbb << 4))));
    DestroyMsgData(*((u32*)(r4 + 0x00000BAC)));
}




void ov05_0221D054(void) {
    GfGfx_EngineATogglePlanes(0x1f, 0);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), 2);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), 1);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), 0);
    Heap_Free(*((u32*)(r4 + 0xc)));
}




void ov05_0221D094(void) {
    NARC_New(0x68, *((u32*)(*((u32*)r0) + 0x24)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(0, *((u32*)(r5 + 0xc)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 4, *((u32*)(r5 + 0xc)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 2, *((u32*)(r5 + 0xc)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 3, *((u32*)(r5 + 0xc)), 3);
    // str r2, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 1, 0, 0);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r5 + 8)), 0, 0, 0xa0);
    BG_SetMaskColor(1, 0x000018C6);
    NARC_Delete(r4);
}




void ov05_0221D140(void) {
    GF_AssertFail(*((u32*)(*((u32*)*((u32*)r0)) + (0x13 << 4))), *((u32*)*((u32*)r0)));
    Options_GetFrame(*((u32*)(*((u32*)*((u32*)r4)) + (0x13 << 4))), *((u32*)*((u32*)r4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)(r4 + 0xc)), 0, 1, 0xf);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r4 + 8)), 0, 0xf0, 0x20);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r4 + 0xc)), 0, 0x1f, 0xe);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r4 + 8)), 0, 0xe0, 0x20);
    LoadFontPal0(0, (0x1a << 4), *((u32*)(*((u32*)r4) + 0x24)));
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r4 + 8)), 0, 0xd0, 0x20);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 0xc)), 0x00000B88, 0, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(r4 + 0xc)), 0x00000B98, 0, 2);
}




void ov05_0221D228(void) {
}




void ov05_0221D240(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ov05_0221CD24(r0, r3, 0x15);
    ov05_0221D318(r6);
    ov05_0221CDC4(r6, ov05_0221EDA4);
    // str r0, [r5, r1]
    // add r4, #0x1c
    // mvn r2, r2
    ov05_0221D3AC(r6, 0, 0xff, 0);
    // mvn r2, r2
    ov05_0221D3AC(r6, 1, 0xff, 0);
    // add r2, #0xfe
    ov05_0221D3AC(r6, 2, 2, 0);
    // add r2, #0xfd
    ov05_0221D3AC(r6, 3, 3, 0);
    ov05_0221D4D0(r6);
    // str r1, [r6, r0]
    ov05_0221D5DC(r6, 0xc);
    // mvn r2, r2
    ov05_0221D664(r6, 0, 0xff, 0);
    // mvn r2, r2
    ov05_0221D664(r6, 1, 0xff, 0);
    // add r2, #0xfe
    ov05_0221D664(r6, 2, 2, 0);
    // add r2, #0xfd
    ov05_0221D664(r6, 3, 3, 0);
}




void ov05_0221D318(void) {
    NARC_New(8, *((u32*)(*((u32*)r0) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r0, 0xd0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObj(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), 0x68, 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 0xcf);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 0xd1);
    NARC_Delete(r4);
}




void ov05_0221D3AC(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // add r3, sp, #8
    // strb r5, [r3]
    // add r2, sp, #8
    *((u8*)(r3 + 1)) = *((u8*)(_0221EA54 + 1));
    // add r6, r0, r1
    *((u8*)(r3 + 2)) = *((u8*)(_0221EA54 + 2));
    *((u8*)(r3 + 3)) = *((u8*)(_0221EA54 + 3));
    // add r5, r0, r2
    // add r2, r1, r4
    // ldr r1, [sp]
    // add r1, r1, r2
    // ldr r2, [sp, #4]
    // asr r1, r1, #0x10
    // add r2, r2, r3
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(*((u8*)(_0221EA54 + 2)) + (0x66 << 2))), (*((u8*)(r6 + 0x00000B64)) << 0x10), (0x00000B68 << 0x10), *((u8*)(r6 + 0x00000B68)));
    // add r4, #0x13
}




void ov05_0221D414(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r6, r6, r0
    // add r1, r6, r0
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // add r1, r6, r0
    // add r1, r6, r0
    // add r1, r6, r0
    // ldr r0, [sp, #4]
}




void ov05_0221D4D0(void) {
    // add r1, #0x29
}




void ov05_0221D530(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r5, #0x10
    AddTextWindowTopLeftCorner(*((u32*)(r0 + 0xc)), r0, 8, 2);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r7, 0);
    // str r0, [sp, #0x10]
    // str r5, [sp, #0x14]
    SpriteManager_GetSpriteList(*((u32*)(r4 + (0x65 << 2))));
    // str r0, [sp, #0x18]
    SpriteManager_FindPlttResourceProxy(*((u32*)(r4 + (0x65 << 2))), 0x0000B807);
    // sub r1, r1, r2
    // str r0, [sp, #0x1c]
    // str r1, [sp, #0x24]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x34]
    // str r1, [sp, #0x30]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // add r4, r4, r0
    // add r0, sp, #0x10
    sub_020135D8(0x00000B48, 2, (r6 << 4));
    // str r0, [r4, r6]
    TextOBJ_SetPaletteNum(*((u32*)(r4 + r6)), 0);
    RemoveWindow(r5);
}




void ov05_0221D5DC(void) {
    FontSystem_NewInit(8, *((u32*)(*((u32*)r0) + 0x24)));
    // str r0, [r4, r1]
    ov05_0221D530(r4, 0, *((u32*)(*((u32*)r4) + 0x14)));
    ov05_0221D530(r4, 2, *((u32*)(*((u32*)r4) + 0x18)));
    // add r0, #0x29
    ov05_0221D530(r4, 1, *((u32*)(*((u32*)r4) + 0x1c)));
    ov05_0221D530(r4, 3, *((u32*)(*((u32*)r4) + 0x20)));
    ov05_0221D530(r4, 1, *((u32*)(r2 + 0x14)));
    ov05_0221D530(r4, 3, *((u32*)(*((u32*)r4) + 0x18)));
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 0x00000B4C)), 0);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r4 + 0x00000B54)), 0);
}




void ov05_0221D664(void) {
    // add r0, r4, r0
    // add r4, r4, r5
    // add r5, #0x24
    // add r3, #0x28
    // add r1, r1, r5
    // add r2, r2, r3
    sub_020136B4(*((u32*)((r1 << 2) + 0x00000B48)), r2, r3, *((u8*)(r0 + 0x00000B48)));
}




void ov05_0221D690(void) {
    // add r0, #0x28
    FontOAM_Delete(*((u32*)(r0 + 0x00000B48)));
    sub_020135AC(*((u32*)(r7 + 0x00000B44)));
}




void ov05_0221D6C4(void) {
    // add r3, #0x29
    // strb r4, [r0, r3]
    // add r5, #0x92
    // strb r5, [r0, r4]
    // strb r5, [r0, r4]
    // add r5, #0xa2
    // strb r5, [r0, r4]
    // strb r5, [r0, r4]
    // add r5, #0x2c
    // strb r5, [r0, r4]
    // strb r5, [r0, r4]
    // add r5, #0x3c
    // strb r5, [r0, r4]
    // add r4, #8
    // strb r5, [r0, r4]
    // add r5, #0x78
    // add r4, #0xc
    // strb r5, [r0, r4]
    // add r4, #9
    // strb r5, [r0, r4]
    // add r1, #0x88
    // add r4, #0xd
    // strb r1, [r0, r4]
    // add r1, #0xa
    // strb r4, [r0, r1]
    // add r4, #0x12
    // add r1, #0xe
    // strb r4, [r0, r1]
    // add r1, #0xb
    // strb r4, [r0, r1]
    // add r2, #0x22
    // add r3, #0xf
    // strb r2, [r0, r3]
    // strb r4, [r0, r3]
    // add r4, #0xa0
    // strb r4, [r0, r5]
    // strb r6, [r0, r5]
    // strb r4, [r0, r5]
    // strb r5, [r0, r4]
    // add r4, #0x30
    // strb r4, [r0, r5]
    // strb r6, [r0, r5]
    // strb r4, [r0, r5]
    // add r4, #8
    // strb r5, [r0, r4]
    // add r1, #0x86
    // add r4, #0xc
    // strb r1, [r0, r4]
    // add r1, #0xa
    // strb r4, [r0, r1]
    // add r2, #0x16
    // add r3, #0xe
    // strb r2, [r0, r3]
}




void ov05_0221D7AC(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ov05_0221CD24(r0, r3, 0x17);
    ov05_0221D318(r6);
    ov05_0221D890(r6);
    ov05_0221CDC4(r6, ov05_0221EDA4);
    // str r0, [r5, r1]
    // add r4, #0x1c
    // mvn r2, r2
    ov05_0221D3AC(r6, 0, 0xff, 0);
    // mvn r2, r2
    ov05_0221D3AC(r6, 1, 0xff, 0);
    // add r2, #0xfe
    ov05_0221D3AC(r6, 2, 2, 0);
    // add r2, #0xfd
    ov05_0221D3AC(r6, 3, 3, 0);
    ov05_0221D4D0(r6);
    ov05_0221D904(r6);
    ov05_0221D5DC(r6);
    // mvn r2, r2
    ov05_0221D664(r6, 0, 0xff, 0);
    // mvn r2, r2
    ov05_0221D664(r6, 1, 0xff, 0);
    // add r2, #0xfe
    ov05_0221D664(r6, 2, 2, 0);
    // add r2, #0xfd
    ov05_0221D664(r6, 3, 3, 0);
    // str r1, [r6, r0]
}




void ov05_0221D890(void) {
    NARC_New(0x68, *((u32*)(*((u32*)r0) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r0, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 7);
    NARC_Delete(r4);
}




void ov05_0221D904(void) {
    // add r0, #0x2a
    // add r0, #0x2a
    // add r0, #0x2a
}




void ov05_0221D9F0(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    GF_3DVramMan_Create(*((u32*)(*((u32*)r0) + 0x24)), 0, 4, 0);
    // str r0, [r4, r1]
    // and r1, r0
    // strh r0, [r2]
    sub_02014DA0((8 | *((u16*)0x04000060)), *((u16*)0x04000060), 0x04000060);
    Heap_Alloc(*((u32*)(*((u32*)r4) + 0x24)), (0x12 << 0xa));
    // str r0, [r4, r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_02014DB4(ov05_0221DB4C, ov05_0221DB70, *((u32*)(r4 + (0xb6 << 4))), (0x12 << 0xa));
    // str r0, [r4, r1]
    sub_02015524(*((u32*)(r4 + 0x00000B5C)), 0x00000B5C);
    Camera_SetPerspectiveClippingPlane((1 << 0xc), (0xe1 << 0xe), r0);
    sub_02015264(0x3b, 2, *((u32*)(*((u32*)r4) + 0x24)));
    sub_0201526C(*((u32*)(r4 + 0x00000B5C)), r0, 0xa, 1);
    sub_02015494(*((u32*)(r4 + 0x00000B5C)), 0, 0, 0);
    sub_02015494(*((u32*)(r4 + 0x00000B5C)), 1, 0, 0);
    sub_02015494(*((u32*)(r4 + 0x00000B5C)), 2, 0, 0);
    sub_02015494(*((u32*)(r4 + 0x00000B5C)), 3, 0, 0);
    sub_02015494(*((u32*)(r4 + 0x00000B5C)), 4, 0, 0);
}




void ov05_0221DAE0(void) {
    // add r0, #0x28
    Thunk_G3X_Reset(0);
    sub_020154B0(*((u32*)(r4 + 0x00000B5C)));
    sub_0201543C(0);
    sub_02015460();
}




void ov05_0221DB18(void) {
    // add r0, #0x28
    sub_02014EBC(*((u32*)(r0 + 0x00000B5C)));
    Heap_Free(*((u32*)(r4 + (0xb6 << 4))));
    GF_3DVramMan_Delete(*((u32*)(r4 + 0x00000B58)));
}




void ov05_0221DB4C(void) {
    // blx r3
    sub_02015354(0, *((u32*)NNS_GfdDefaultFuncAllocTexVram));
    GF_AssertFail();
}




void ov05_0221DB70(void) {
    // blx r3
    sub_02015394(1, *((u32*)NNS_GfdDefaultFuncAllocPlttVram));
    GF_AssertFail();
}




void ov05_0221DB94(void) {
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 1, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0xc)), 1);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 2, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 0xc)), 2);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 0xc)), 3, r3, 0);
}




void ov05_0221DC34(void) {
}




void ov05_0221DC60(void) {
    NARC_New(0x15, *((u32*)(*((u32*)r0) + 0x24)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(0xf, *((u32*)(r5 + 0xc)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0x11, *((u32*)(r5 + 0xc)), 3);
    NARC_AllocAndReadWholeMember(r4, 0x10, *((u32*)(*((u32*)r5) + 0x24)));
    // add r1, sp, #0x10
    NNS_G2dGetUnpackedPaletteData();
    // ldr r2, [sp, #0x10]
    BG_LoadPlttData(3, *((u32*)(r2 + 0xc)), ((*((u32*)(r2 + 8)) << 0x10) >> 0x10), 0);
    // ldr r1, [sp, #0x10]
    // add r0, r5, r0
    // add r1, #0x60
    memcpy(0x000004E4, *((u32*)(r1 + 0xc)), 0x60);
    Heap_Free(r6);
    // add r1, r5, r2
    // add r2, #0xc0
    // add r2, r5, r2
    // add r3, r5, r3
    sub_0207CAAC(*((u32*)(*((u32*)r5) + 0x24)), (0xa9 << 2), 0x00000424);
    NARC_Delete(r4);
}




void ov05_0221DD08(void) {
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r0 + 0xc)), 2, *((u8*)ov05_0221EA60), *((u8*)(ov05_0221EA60 + 1)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r5 + 0xc)), 2, *((u8*)r6), *((u8*)(r6 + 1)));
    // add r0, #0x29
    // add r0, #0x29
    // add r1, r5, r1
    BG_LoadPlttData(2, 0x00000504, 0x20, (((r4 + 3) << 0x15) >> 0x10));
    // add r1, r5, r1
    BG_LoadPlttData(2, 0x000004E4, 0x20, (((r4 + 3) << 0x15) >> 0x10));
    // add r7, #0x18
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0xc)), 2);
}




void ov05_0221DDEC(void) {
    // str r1, [sp]
    // add r0, #0x29
    // add r0, r7, r0
    // ldr r0, [sp]
    // add r0, r0, r1
    // add r1, r6, r4
    // add r0, r6, r4
}




void ov05_0221DE38(void) {
    // add r1, r4, r1
    ov05_0221DDEC(0x00000544, 1);
    // add r1, r4, r1
    ov05_0221DDEC(r4, 0x00000844, 2);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0xc)), 1);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0xc)), 2);
}




void ov05_0221DE6C(void) {
    // add r0, #0x29
    // sub r6, r0, r4
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r1, r5, r1
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r0 + 0xc)), 1, ((r6 << 0x18) >> 0x18), 0);
    // str r4, [sp]
    // str r1, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r5 + 0xc)), 2, ((r6 << 0x18) >> 0x18), 0);
    // str r4, [sp]
    // sub r6, r0, r4
    // str r1, [sp, #4]
    // add r2, r5, r2
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r5 + 0xc)), 1, 0, 0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r1, r5, r1
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    CopyToBgTilemapRect(*((u32*)(r5 + 0xc)), 2, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0xc)), 1);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0xc)), 2);
}




void ov05_0221DF38(void) {
    // str r1, [sp]
    Party_GetCount(r1);
    // str r0, [sp, #8]
    // add r0, r4, r0
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    GetMonIconNaixEx(0, 0, 0);
    // ldr r1, [sp, #4]
    // add r2, r1, r2
    // str r0, [r2, r1]
    // ldr r0, [sp]
    Party_GetMonByIndex(r6, (r6 * 0x18));
    // ldr r1, [sp, #4]
    // add r7, r1, r2
    Pokemon_GetIconNaix(0x18, (r6 * 0x18));
    // str r0, [r7, r1]
    GetMonData(r4, 5, 0);
    // strh r0, [r7, r1]
    // ldr r0, [sp, #4]
    // add r5, r0, r1
    GetMonData(r4, 0x4c, 0);
    // strb r0, [r5, r1]
    GetMonData(r4, 0xa3, 0);
    // strh r0, [r5, r1]
    GetMonData(r4, 0xa4, 0);
    // strh r0, [r5, r1]
    GetMonData(r4, 0xa1, 0);
    // strb r0, [r5, r1]
    GetMonData(r4, 6, 0);
    // strh r0, [r5, r1]
    GetMonData(r4, 0xa2, 0);
    // strb r0, [r5, r1]
    GetMonData(r4, 0x70, 0);
    // strb r0, [r5, r1]
    GetMonData(r4, 0xb0, 0);
    // strb r1, [r7, r0]
    GetMonGender(r4, 1);
    // strb r0, [r5, r1]
    Pokemon_GetStatusIconId(r4, 0x00000221);
    // str r1, [r5, r0]
}




void ov05_0221E07C(void) {
    // add r0, r4, r0
}




void ov05_0221E0A8(void) {
    // add r4, r3, r2
    // add r1, #0xe
    // add r2, r3, r2
    CalculateHpBarColor(5, *((u16*)((r1 * 0x18) + (0x87 << 2))), 0x30, r0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221E0EE: ; jump table
}




void ov05_0221E110(void) {
    // str r0, [sp, #8]
    // str r1, [sp]
    // ldr r0, [sp]
    // add r7, r0, r1
    // add r4, r5, r0
    // ldr r0, [sp]
    // str r4, [sp, #4]
    // add r6, r2, r1
    // add r1, r1, r2
    ov05_0221CDC4(r0, ov05_0221EF2C, (r7 * 0x1c));
    // str r0, [r4, r1]
    ManagedSprite_SetPositionXY(*((u32*)(r4 + (0x66 << 2))), *((u8*)r6), *((u8*)(r6 + 1)));
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r3, r5, r6
    // sub r4, #0x80
    // ldr r0, [sp, #4]
    ManagedSprite_SetDrawFlag(*((u32*)(*((u16*)(r3 + (0x86 << 2))) + (0x86 << 2))), 0, (0x86 << 2));
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // sub r1, #0x80
    // add r7, r5, r1
    // add r1, #0xd
    // add r2, #0xb
    GetMonIconPaletteEx((r0 + 4), *((u8*)(r3 + r2)), *((u8*)(r3 + r2)));
    ManagedSprite_SetPaletteOverride(*((u32*)(r7 + r4)), r0);
    // ldr r1, [sp]
    ov05_0221E0A8(r5);
    ManagedSprite_SetAnim(*((u32*)(r7 + r4)), r0);
    // add r0, r5, r6
    // add r0, r5, r4
    // sub r1, #0x82
    ManagedSprite_SetDrawFlag(*((u32*)(*((u16*)(r0 + 0x0000021E)) + 0x0000021E)), 0);
    ItemIdIsMail();
    // add r1, r5, r4
    ManagedSprite_SetAnim(*((u32*)(r1 + (0x67 << 2))), 1);
    // add r1, r5, r4
    ManagedSprite_SetAnim(*((u32*)(r1 + (0x67 << 2))), 0);
    // add r1, r5, r6
    // add r1, r5, r4
    // sub r0, #0x84
    ManagedSprite_SetDrawFlag(*((u32*)(*((u8*)(r1 + (0x89 << 2))) + (0x89 << 2))), 0);
    // add r1, r5, r4
    // sub r0, #0x84
    ManagedSprite_SetAnim(*((u32*)(r1 + r0)), 2);
    // add r0, r5, r6
    // add r0, r5, r4
    // sub r3, #0x84
    ManagedSprite_SetDrawFlag(*((u32*)(*((u32*)(r0 + (0x8a << 2))) + (0x8a << 2))), 0, (0x8a << 2));
    // add r1, r5, r4
    // sub r0, #0x84
    // ldr r1, [sp, #8]
    // add r1, r5, r2
    ManagedSprite_SetAnim(*((u32*)(r1 + r3)), *((u32*)(r1 + r3)), (0x18 * r1));
}




void ov05_0221E274(void) {
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    ov05_0221CD24(r0, r3, 0x1f);
    ov05_0221E2D8(r4);
    ov05_0221E390(r4);
    ov05_0221E42C(r4);
    ov05_0221E4C8(r4);
    ov05_0221E110(r4, 0);
    ov05_0221E564(r4, 0x10);
    // str r1, [r4, r0]
}




void ov05_0221E2D8(void) {
    NARC_New(0x14, *((u32*)(*((u32*)r0) + 0x24)));
    sub_02074490();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r7, r0);
    sub_02074498();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r7, r0);
    sub_020744A4();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r7, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + (0x65 << 2))), r7, *((u32*)(r5 + (0x85 << 2))));
    // add r6, #0x18
    NARC_Delete(r7);
}




void ov05_0221E390(void) {
    NARC_New(0x15, *((u32*)(*((u32*)r0) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r0, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 0x15);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 0x13);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 0x12);
    NARC_Delete(r4);
}




void ov05_0221E42C(void) {
    NARC_New(0x27, *((u32*)(*((u32*)r0) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r0, 0x40);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 0x41);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 0x3f);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 0x3e);
    NARC_Delete(r4);
}




void ov05_0221E4C8(void) {
    NARC_New(0x15, *((u32*)(*((u32*)r0) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r0, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    SpriteSystem_LoadPlttResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 1);
    // str r3, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + (0x19 << 4))), *((u32*)(r5 + ((0x19 << 4) + 4))), r4, 0);
    NARC_Delete(r4);
}




void ov05_0221E564(void) {
    // str r0, [sp]
    // add r0, #0x29
    // str r0, [sp, #8]
    // str r0, [sp, #8]
    // neg r0, r0
    // asr r7, r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, r2, r1
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r4, [sp, #4]
    // add r1, r1, r0
    // add r0, r1, r0
    // ldr r0, [sp]
    // add r5, r0, r1
    // add r1, r7, r1
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x66 << 2))), (*((u8*)r4) << 0x10), *((u8*)(r4 + 1)));
    // ldr r0, [sp, #4]
    // add r0, #0xa
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov05_0221E5E4(void) {
    // add r5, #0x10
    AddWindow(*((u32*)(r0 + 0xc)), r0, ov05_0221ECE4);
    // add r4, #8
    // add r5, #0x10
}




void ov05_0221E60C(void) {
}




void ov05_0221E624(void) {
    // ldr r4, [sp, #0x3c]
    // add r7, #0x10
    // str r0, [sp, #0x1c]
    // str r1, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r6, [sp, #0x38]
    Party_GetMonByIndex(*((u32*)(*((u32*)r0) + 4)), r4);
    // str r0, [sp, #0x18]
    Party_GetMonByIndex(*((u32*)(r0 + 0xc)), (r4 - 3));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r1, #8
    NewString_ReadMsgData(r4);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    Mon_GetBoxMon();
    // ldr r0, [sp, #0x14]
    BufferBoxMonNickname(0, r0);
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x20]
    StringExpandPlaceholders(r6);
    // ldr r0, [sp, #0x20]
    String_Delete();
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // add r0, r7, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, r6, 0);
    // add r2, r5, r0
    // ldr r0, [sp, #0x10]
    ReadMsgDataIntoString(*((u8*)(r2 + (0x00000222 - 1))), 0x1b, r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // add r0, r7, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((0xc1 << 0xa), 0, r6, 0x40);
    // ldr r0, [sp, #0x10]
    ReadMsgDataIntoString(0x1c, r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // add r0, r7, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00050600, 0, r6, 0x40);
}




void ov05_0221E714(void) {
    // ldr r3, [sp, #0x24]
    // add r0, #0x10
    // str r1, [sp]
    // add r0, r0, r5
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r4, r2
}




void ov05_0221E74C(void) {
    // ldr r1, [sp, #0x24]
    // add r2, #0x10
    // add r4, r2, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, r5, r6
    PrintUIntOnWindow(r2, *((u16*)(r0 + 0x0000021A)), 3, 1);
    // str r0, [sp]
    sub_0200CDAC(r7, 0, r4, 0x18);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, r5, r6
    PrintUIntOnWindow(r7, *((u16*)(r2 + (0x87 << 2))), 3, 0);
}




void ov05_0221E7B8(void) {
    // add r2, #0x10
    // add r4, r2, r0
    // add r7, r5, r0
    // add r0, r5, r0
    // str r0, [sp, #8]
    CalculateHpBarColor(*((u16*)(((0x87 << 2) - 2) + (r1 * 0x18))), *((u16*)(r7 + (r1 * 0x18))), 0x30);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221E7F6: ; jump table
    // add r3, #9
    // add r1, r5, r1
    BG_LoadPlttData(1, 0x000004F6, 4, (((*((u8*)(r4 + 9)) << 4) << 0x11) >> 0x10));
    // add r3, #9
    // add r1, r5, r1
    BG_LoadPlttData(1, 0x00000516, 4, (((*((u8*)(r4 + 9)) << 4) << 0x11) >> 0x10));
    // add r3, #9
    // add r1, r5, r1
    BG_LoadPlttData(1, 0x00000536, 4, (((*((u8*)(r4 + 9)) << 4) << 0x11) >> 0x10));
    // ldr r0, [sp, #8]
    CalculateHpBarPixelsLength(*((u16*)(r0 + r6)), *((u16*)(r7 + r6)), 0x30);
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0xa, 0, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 9, 0, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r4, 0xa, 0, 5);
}




void ov05_0221E8A8(void) {
    // ldr r6, [sp, #0x2c]
    // str r1, [sp, #8]
    // add r5, #0x10
    // add r0, r5, r4
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // add r0, r5, r4
    // add r0, #0x10
    // add r0, r5, r4
    // add r0, #0x20
    // add r0, r5, r4
    // add r0, #0x30
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // str r6, [sp, #4]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // str r6, [sp, #4]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // str r6, [sp, #4]
    // add r0, r5, r4
    // add r0, r5, r4
    // add r0, #0x10
    // add r0, r5, r4
    // add r0, #0x20
    // add r0, r5, r4
    // add r0, #0x30
}




void ov05_0221E944(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    // str r7, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #8]
    // str r4, [sp, #4]
    // add r5, #0x18
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
}




void ov05_0221E9C4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    FillWindowPixelRect(0x00000B88, 0xf, 0, 0);
    // add r0, r4, r0
    DrawFrameAndWindow2(0x00000B88, 0, 1, 0xf);
}




void ov05_0221E9F8(void) {
}




void ov05_0221EA18(void) {
}




void ov05_0221EA38(void) {
}



