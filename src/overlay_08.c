/* Decompiled from asm/overlay_08.s */
#include "global.h"

void ov08_0221BE20(void) {
    *((u8*)(r0 + 0x11)) = 0;
    CreateSysTaskAndEnvironment(ov08_0221BE98, 0x00002090, 0, *((u32*)(r0 + 0xc)));
    SysTask_GetData();
    memset(0, 0x00002090);
    // str r5, [r4]
    BattleSystem_GetBgConfig(*((u32*)(r5 + 8)));
    // str r0, [r4, r1]
    BattleSystem_GetPaletteData(*((u32*)(r5 + 8)), (0x79 << 2));
    // str r0, [r4, r1]
    // strb r1, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r0]
    ov12_0223AB0C(*((u32*)(r5 + 8)), *((u32*)(r5 + 0x28)), (*((u8*)(r4 + (0x00002078 - 1))) & ~(0xf0)));
    // strb r0, [r4, r1]
}





void ov08_0221BE98(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0221BEB2: ; jump table
    ov08_0221C048(r1, (*((u16*)(*((u8*)(r1 + 0x00002078)) + 6)) << 0x10));
    // strb r0, [r4, r1]
    ov08_0221C14C(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C318(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C3C8(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C488(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C58C(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C918(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C924(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C930(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C93C(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C948(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C954(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C978(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C9A4(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C9C8(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221CA08(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221CA20(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221CA34(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221CA50(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C604(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C6F8(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221C814(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221CA78(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221CA90(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221CC38(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221CD64(r4, 0x00002078);
    // strb r0, [r4, r1]
    ov08_0221CD90(0x00002078);
    ov08_0222145C(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + 0x00001FB4)));
    ov08_022220FC(r4);
}





void ov08_0221C048(void) {
    // strh r1, [r0]
    // add r0, #0x35
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    ov08_02224B64(*((u32*)(*((u32*)r0) + 0xc)), 6);
    // str r0, [r5, r1]
    ov08_0221D184(r5, 0x00002088);
    ov08_0221CDF8(r5);
    ov08_0221CF38(r5);
    ov08_0221D0F4(r5);
    FontID_Alloc(4, *((u32*)(*((u32*)r5) + 0xc)));
    ov08_0221D8B0(r5, *((u8*)(r5 + 0x0000207A)));
    ov08_022221CC(r5, *((u8*)(r5 + 0x0000207A)));
    ov08_02222524(r5, *((u8*)(r5 + 0x0000207A)));
    ov08_022205E0(r5);
    ov08_02220C5C(r5, *((u8*)(r5 + 0x0000207A)));
    ov08_0221DC00(r5);
    ov08_0221DD70(r5, *((u8*)(r5 + 0x0000207A)));
    // add r0, #0x32
    ov08_02224B90(*((u32*)(r5 + 0x00002088)), 1);
    ov08_0221DB24(r5, 0);
    *((u8*)(*((u32*)r5) + 0x11)) = 1;
    ov08_0222171C(r5, *((u8*)(r5 + 0x0000207A)));
    ov08_0221D6CC(r5, *((u8*)(r5 + 0x0000207A)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, #0x12
    PaletteData_BeginPaletteFade(*((u32*)(r5 + (0x7a << 2))), 0xa, 0x0000FFFF, 0xa);
}





void ov08_0221C14C(void) {
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r0 + (0x7a << 2))));
    ov08_0221D438(r4);
    // add r1, #0x35
    PlaySE(0x000005DD, *((u32*)r4));
    ov08_022220AC(r4, 6);
    PlaySE(0x000005DD);
    ov08_022220AC(r4, *((u8*)(*((u32*)r4) + 0x11)));
    // add r0, #0x35
    ov08_0221C1C8(r4);
    // strb r1, [r4, r0]
}





void ov08_0221C1C8(void) {
    ov08_0222057C(r0, *((u8*)(*((u32*)r0) + 0x11)));
    ov08_022201C0(r5);
    *((u8*)(*((u32*)r5) + 0x11)) = 6;
    // strb r1, [r5, r0]
    GetItemAttr(*((u16*)(r4 + 0x22)), 0x24, *((u32*)(r4 + 0xc)));
    GetItemAttr(*((u16*)(r4 + 0x22)), 0x25, *((u32*)(r4 + 0xc)));
    // add r0, r5, r0
    // strb r1, [r5, r0]
    // str r0, [sp]
    // add r2, r4, r2
    // add r2, #0x2c
    BattleSystem_RecoverStatus(*((u32*)(r4 + 8)), *((u32*)(r4 + 0x28)), *((u8*)*((u8*)(r4 + 0x11))), 0);
    GetItemAttr(*((u16*)(r4 + 0x22)), 0x25, *((u32*)(r4 + 0xc)));
    // strb r1, [r5, r0]
    ov08_0221D5DC(r5, *((u8*)(r4 + 0x11)));
    GetItemAttr(*((u16*)(r4 + 0x22)), 0x17, *((u32*)(r4 + 0xc)));
    // add r2, #0x33
    ov08_0221DBCC(*((u32*)(r4 + 8)), *((u16*)(r4 + 0x22)), *((u8*)r4), *((u32*)(r4 + 0xc)));
    // add r2, r4, r2
    // add r2, #0x2c
    BattleSystem_GetPartyMon(*((u32*)(r4 + 8)), *((u32*)(r4 + 0x28)), *((u8*)*((u8*)(r4 + 0x11))));
    // add r2, r5, r3
    *((u32*)(*((u8*)(r4 + 0x11)) + 4)) = r0;
    // add r0, r5, r1
    GetMonData(*((u32*)(*((u8*)(r4 + 0x11)) + 4)), 0xa3, 0, (*((u8*)(r4 + 0x11)) * 0x50));
    *((u16*)(r4 + 0x20)) = r0;
    // add r0, r5, r0
    // sub r0, r2, r0
    *((u16*)(r4 + 0x20)) = *((u16*)((0x50 * *((u8*)(r4 + 0x11))) + 0x14));
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + 0x00001FA8)), 0x51, *((u32*)(r5 + 0x00001FA8)));
    ov08_022201C0(r5);
    *((u8*)(*((u32*)r5) + 0x11)) = 6;
    // strb r1, [r5, r0]
}





void ov08_0221C318(void) {
    ov08_0221D4B0();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C330: ; jump table
    PlaySE(0x000005DD);
    ov08_022220AC(r4, 7);
    ov08_0221D91C(r4);
    // strb r1, [r4, r0]
    ov08_0221DAC4(r4, 0xf);
    PlaySE(0x000005DD);
    ov08_022220AC(r4, 8);
    // strb r1, [r4, r0]
    ov08_0221DAC4(r4, 8);
    PlaySE(0x000005DD);
    ov08_022220AC(r4, 0xa);
    // strb r1, [r4, r0]
    PlaySE(0x000005DD, 9);
    ov08_022220AC(r4, 6);
    // strb r1, [r4, r0]
}





void ov08_0221C3C8(void) {
    ov08_0221D4F8();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C3E0: ; jump table
    // mvn r2, r2
    ov08_0221D614(r4, *((u8*)(*((u32*)r4) + 0x11)), 0);
    *((u8*)(*((u32*)r4) + 0x11)) = r0;
    PlaySE(0x000005DD, *((u32*)r4));
    ov08_022220AC(r4, 0xc);
    // strb r1, [r4, r0]
    ov08_0221D614(r4, *((u8*)(*((u32*)r4) + 0x11)), 1);
    *((u8*)(*((u32*)r4) + 0x11)) = r0;
    PlaySE(0x000005DD, *((u32*)r4));
    ov08_022220AC(r4, 0xd);
    // strb r1, [r4, r0]
    PlaySE(0x000005DD, 0xe);
    ov08_022220AC(r4, 0xb);
    // strb r1, [r4, r0]
    PlaySE(0x000005DD, 9);
    ov08_022220AC(r4, 6);
    // strb r1, [r4, r0]
    // sub r0, #0x13
    // strb r1, [r4, r0]
}





void ov08_0221C488(void) {
    ov08_0221D540();
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C4A2: ; jump table
    // add r1, r4, r0
    // add r0, r1, r0
    PlaySE(0x000005DD, *((u8*)(*((u32*)r4) + 0x11)));
    // add r1, #0xe
    ov08_022220AC(r4, ((r5 << 0x18) >> 0x18));
    // add r0, #0x34
    // strb r5, [r0]
    // strb r1, [r4, r0]
    // mvn r2, r2
    ov08_0221D614(r4, *((u8*)(*((u32*)r4) + 0x11)), 0);
    *((u8*)(*((u32*)r4) + 0x11)) = r0;
    PlaySE(0x000005DD, *((u32*)r4));
    ov08_022220AC(r4, 0xc);
    // strb r1, [r4, r0]
    ov08_0221D614(r4, *((u8*)(*((u32*)r4) + 0x11)), 1);
    *((u8*)(*((u32*)r4) + 0x11)) = r0;
    PlaySE(0x000005DD, *((u32*)r4));
    ov08_022220AC(r4, 0xd);
    // strb r1, [r4, r0]
    PlaySE(0x000005DD, 0xe);
    ov08_022220AC(r4, 9);
    // strb r1, [r4, r0]
    PlaySE(0x000005DD, 8);
    ov08_022220AC(r4, 6);
    // strb r1, [r4, r0]
    // sub r0, #0x13
    // strb r1, [r4, r0]
}





void ov08_0221C58C(void) {
    ov08_0221D588();
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C5A6: ; jump table
    // add r0, #0x34
    // add r1, r4, r0
    // add r0, r1, r0
    PlaySE(0x000005DD, *((u8*)(*((u32*)r4) + 0x11)));
    // add r0, #0x34
    // strb r5, [r0]
    PlaySE(0x000005DD);
    ov08_022220AC(r4, 6);
    // strb r1, [r4, r0]
}





void ov08_0221C604(void) {
    ov08_0221D5D0(ov08_02224F3C);
    // mvn r0, r0
    ov08_02224C94(*((u32*)(r4 + 0x00002088)));
    // mvn r0, r0
    ov08_022217C8(r4);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C644: ; jump table
    // add r0, #0x34
    // strb r1, [r0]
    // strb r1, [r4, r0]
    PlaySE(0x000005DD, ((r5 << 0x18) >> 0x18));
    // add r5, #0x17
    ov08_022220AC(r4, ((r5 << 0x18) >> 0x18));
    // strb r1, [r4, r0]
    // eor r2, r3
    // and r2, r3
    // strb r1, [r4, r0]
    // add r0, #0x16
    // strb r5, [r4, r0]
    PlaySE(0x000005DD, ((*((u8*)(r4 + 0x00002077)) & ~(0xf)) | 0xf), 0xf, ((1 << 0x18) >> 0x18));
    ov08_022220AC(r4, 0x12);
    // strb r1, [r4, r0]
    // add r0, #0x34
    // strb r1, [r0]
    PlaySE(0x000005DD, 4);
    ov08_022220AC(r4, 6);
    // strb r1, [r4, r0]
}





void ov08_0221C6F8(void) {
    ov08_0221D5D0(ov08_02224E44);
    // mvn r0, r0
    ov08_02224C94(*((u32*)(r5 + 0x00002088)));
    // mvn r0, r0
    ov08_022217C8(r5);
    PlaySE(0x000005DD);
    ov08_022220AC(r5, 0x1c);
    ov08_022220AC(r5, 0x1d);
    ov08_0221DB54(r5);
    ov08_0221F220(r5);
    ov08_0221DB7C(r5);
    ov08_0221DBB4(r5);
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    PlaySE(0x000005DD, 0x19);
    ov08_022220AC(r5, 0x12);
    // eor r1, r3
    // and r1, r3
    // strb r0, [r5, r2]
    // add r0, #0x17
    // strb r4, [r5, r0]
    // strb r1, [r5, r0]
    PlaySE(0x000005DD, 0xc, 0x00002077, ((1 << 0x18) >> 0x18));
    ov08_022220AC(r5, 6);
    // strb r1, [r5, r0]
    // sub r0, #0x15
    // strb r1, [r5, r0]
}





void ov08_0221C814(void) {
    ov08_0221D5D0(ov08_02224E94);
    // mvn r0, r0
    ov08_02224C94(*((u32*)(r4 + 0x00002088)));
    // mvn r0, r0
    ov08_022217C8(r4);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C858: ; jump table
    // add r1, r4, r0
    // add r0, r1, r0
    // add r0, #0x34
    // strb r5, [r0]
    PlaySE(0x000005DD, *((u8*)(r6 + 0x11)));
    // add r1, #0x13
    ov08_022220AC(r4, ((r5 << 0x18) >> 0x18));
    // str r0, [sp]
    // add r2, r6, r2
    // add r2, #0x2c
    BattleSystem_RecoverStatus(*((u32*)(r6 + 8)), *((u32*)(r6 + 0x28)), *((u8*)*((u8*)(r6 + 0x11))), r5);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r4 + 0x00001FA8)), 0x51, *((u32*)(r4 + 0x00001FA8)));
    ov08_022201C0(r4);
    *((u8*)(*((u32*)r4) + 0x11)) = 6;
    // strb r1, [r4, r0]
    PlaySE(0x000005DD, 0x19);
    ov08_022220AC(r4, 6);
    // strb r1, [r4, r0]
}





void ov08_0221C918(void) {
}





void ov08_0221C924(void) {
}





void ov08_0221C930(void) {
}





void ov08_0221C93C(void) {
}





void ov08_0221C948(void) {
}





void ov08_0221C954(void) {
    ov08_0221D840(6);
    ov08_0221D840(8);
}





void ov08_0221C978(void) {
    ov08_022213C8();
    ov08_0221D840(r4, 7);
    ov08_0221D840(r4, 9);
}





void ov08_0221C9A4(void) {
}





void ov08_0221C9C8(void) {
    ov08_02220C5C(*((u8*)(r0 + 0x0000207A)));
    ov08_0221DD70(r4, *((u8*)(r4 + 0x0000207A)));
    ov08_022221CC(r4, *((u8*)(r4 + 0x0000207A)));
    ov08_0221D6CC(r4, *((u8*)(r4 + 0x0000207A)));
}





void ov08_0221CA08(void) {
}





void ov08_0221CA20(void) {
}





void ov08_0221CA34(void) {
}





void ov08_0221CA50(void) {
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
}





void ov08_0221CA78(void) {
    // add r1, #0xd6
}





void ov08_0221CA90(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221CAAC: ; jump table
    // add r2, r5, r2
    // add r2, #0x2c
    BattleSystem_GetPartyMon(*((u32*)(*((u32*)r0) + 8)), *((u32*)(*((u32*)r0) + 0x28)), *((u8*)*((u8*)(*((u32*)r0) + 0x11))));
    // add r1, r4, r1
    *((u32*)((0x50 * *((u8*)(r5 + 0x11))) + 4)) = r0;
    ov08_02220224(r4, (0x50 * *((u8*)(r5 + 0x11))), *((u8*)(r5 + 0x11)));
    // add r5, #0x34
    // add r0, r4, r0
    // add r1, #0x3a
    GetMonData(*((u32*)((0x50 * *((u8*)(r5 + 0x11))) + 4)), *((u8*)r5), 0);
    // strh r0, [r4, r1]
    // strb r2, [r4, r0]
    // add r0, r4, r0
    Pokemon_GetStatusIconId(*((u32*)((0x50 * (r7 + 4)) + 4)), (r7 + 4), 2);
    // add r3, #0x1b
    // strb r0, [r3, r2]
    // add r1, r4, r1
    // add r0, #0xd
    // add r1, r4, r0
    ManagedSprite_SetDrawFlag(*((u32*)(((*((u8*)((*((u8*)(r5 + 0x11)) * 0x50) + 0x1b)) << 0x19) >> 0x1c) + 0x00001FB8)), 0, (*((u8*)(r5 + 0x11)) * 0x50), r4);
    ov08_0221F5B0(r4, *((u8*)(r5 + 0x11)));
    // add r0, r4, r0
    GetMonData(*((u32*)((0x50 * *((u8*)(r5 + 0x11))) + 4)), 0xa3, 0);
    // strh r0, [r4, r1]
    // strb r2, [r4, r0]
    PlaySE(0x000005EC, 0x0000207E, 4);
    // add r6, #0x14
    // strh r1, [r6, r3]
    ov08_0221F550(*((u8*)(r5 + 0x11)), *((u16*)(r4 + (r7 + 2))), (*((u8*)(r5 + 0x11)) * 0x50));
    // strb r0, [r4, r7]
    // add r1, #0x36
    // add r6, r1, r2
    // add r1, #0x34
    // strb r1, [r6, r3]
    // add r5, #0x34
    ov08_02220064(3, (((*((u8*)r5) + 1) << 0x10) >> 0x10), *((u8*)r5), (*((u8*)r5) << 3));
    // strb r0, [r4, r7]
    // add r2, #0x33
    ov08_0221DBCC(*((u32*)(r5 + 8)), *((u16*)(r5 + 0x22)), *((u8*)r5), *((u32*)(r5 + 0xc)));
    ov08_022201C0(r4);
    // strb r1, [r4, r0]
    // add r3, #0x14
    // strh r1, [r3, r2]
    ov08_0221F550(0x11, *((u8*)(r5 + 0x11)), (0x50 * *((u8*)(r5 + 0x11))), r4);
    ov08_022225A4(r4);
    // strb r1, [r4, r0]
}





void ov08_0221CC38(void) {
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r2, r2, r3
    // add r2, #0x2c
    BattleSystem_GetPartyMon(*((u32*)(*((u8*)(r0 + 0x0000207C)) + 8)), *((u32*)(r1 + 0x28)), *((u8*)r2), *((u8*)(r2 + 0x11)));
    // ldr r1, [sp, #4]
    // add r1, r5, r1
    *((u32*)((0x50 * *((u8*)(r1 + 0x11))) + 4)) = r0;
    // ldr r0, [sp, #4]
    // add r1, r5, r0
    // add r0, r1, r6
    // add r1, #0x3a
    GetMonData(*((u32*)(*((u8*)(r0 + 0x11)) + 4)), 0, 0);
    // strh r0, [r4, r1]
    // add r6, #8
    ov08_02220224(r5, (0x82 << 6));
    PlaySE(0x000005EC);
    // strb r1, [r5, r0]
    // str r6, [sp]
    // ldr r0, [sp, #4]
    // add r1, r5, r0
    // ldr r0, [sp]
    // add r1, r1, r0
    // add r2, #0x36
    // add r0, #0x36
    // add r1, #0x36
    // strb r0, [r1]
    ov08_02220064(r5, (((0 + 1) << 0x10) >> 0x10), ((0 << 0x10) >> 0x10));
    // ldr r0, [sp]
    // add r0, #8
    // str r0, [sp]
    // strb r1, [r5, r0]
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #4]
    // add r2, #0x33
    // ldr r3, [sp, #4]
    ov08_0221DBCC(*((u32*)(0x0000207C + 8)), *((u16*)(2 + 0x22)), *((u8*)r2), *((u32*)(r3 + 0xc)));
    ov08_022201C0(r5);
    // strb r1, [r5, r0]
}





void ov08_0221CD64(void) {
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // sub r3, #0x12
    PaletteData_BeginPaletteFade(*((u32*)(r0 + (0x7a << 2))), 0xa, 0x0000FFFF, 0xa);
}





void ov08_0221CD90(void) {
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r1 + (0x7a << 2))));
    ov08_0221D14C(r4);
    ov08_02220A50(r4);
    ov08_0221DD40(r4);
    ov08_0221CF08(*((u32*)(r4 + (0x79 << 2))));
    ov08_02224B8C(*((u32*)(r4 + 0x00002088)));
    // add r1, #0x32
    // strb r0, [r1]
    ov08_02224B7C(*((u32*)(r4 + 0x00002088)), *((u32*)r4));
    FontID_Release(4);
    // add r0, #0x36
    // strb r1, [r0]
    DestroySysTaskAndEnvironment(r5, 1);
}





void ov08_0221CDF8(void) {
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetScreenModeAndDisable(r3, 1, r3);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + (0x79 << 2))), 7, r3, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + (0x79 << 2))), 6, r3, 0);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + (0x79 << 2))), 5, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + (0x79 << 2))), 5);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + (0x79 << 2))), 4, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + (0x79 << 2))), 4);
    BG_ClearCharDataRange(5, 0x20, 0, *((u32*)(*((u32*)r4) + 0xc)));
    BG_ClearCharDataRange(4, 0x20, 0, *((u32*)(*((u32*)r4) + 0xc)));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + (0x79 << 2))), 5);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + (0x79 << 2))), 4);
}





void ov08_0221CF08(void) {
}





void ov08_0221CF38(void) {
    NARC_New(0x47, *((u32*)(*((u32*)r0) + 0xc)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(0x16, *((u32*)(r5 + (0x79 << 2))), 7);
    NARC_AllocAndReadWholeMember(r4, 0x14, *((u32*)(*((u32*)r5) + 0xc)));
    // add r1, sp, #0x10
    NNS_G2dGetUnpackedScreenData();
    // ldr r1, [sp, #0x10]
    // add r1, #0xc
    ov08_022217F0(r5);
    Heap_Free(r6);
    NARC_AllocAndReadWholeMember(r4, 0x15, *((u32*)(*((u32*)r5) + 0xc)));
    // add r1, sp, #0x10
    NNS_G2dGetUnpackedScreenData();
    // ldr r1, [sp, #0x10]
    // add r1, #0xc
    ov08_02221B1C(r5);
    Heap_Free(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + (0x7a << 2))), 0x47, 0x17, *((u32*)(*((u32*)r5) + 0xc)));
    NARC_Delete(r4);
    PaletteData_GetUnfadedBuf(*((u32*)(r5 + (0x7a << 2))), 1);
    // add r1, r2, r1
    // add r0, r5, r0
    memcpy(0x00001F60, (6 << 6), 0x40);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + (0x7a << 2))), 0x10, 7, *((u32*)(*((u32*)r5) + 0xc)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0xf8
    PaletteData_LoadNarc(*((u32*)(r5 + 0xf0)), 0x10, 8, *((u32*)(*((u32*)r5) + 0xc)));
    BattleSystem_GetFrame(*((u32*)(*((u32*)r5) + 8)));
    sub_0200E63C();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x26, r0, *((u32*)(r5 + (0x79 << 2))), 4);
    sub_0200E640(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + (0x7a << 2))), 0x26, r0, *((u32*)(*((u32*)r5) + 0xc)));
    PaletteData_GetUnfadedBuf(*((u32*)(r5 + (0x7a << 2))), 1);
    Heap_Alloc(*((u32*)(*((u32*)r5) + 0xc)), 0x20);
    // add r1, r6, r1
    memcpy((0x1a << 4), 0x20);
    // add r1, r6, r0
    // add r2, #0xe
    *((u8*)(r4 + 0xe)) = *((u8*)r1);
    *((u8*)(r4 + 1)) = *((u8*)(r1 + 1));
    *((u8*)(r4 + 2)) = *((u8*)(r1 + 2));
    *((u8*)(r4 + 3)) = *((u8*)(r1 + 3));
    // add r1, r6, r1
    // add r0, #0xb4
    *((u8*)(r4 + 6)) = *((u8*)(r6 + ((0x4d << 2) + 4)));
    *((u8*)(r4 + 7)) = *((u8*)(((0x4d << 2) + 4) + 1));
    *((u8*)(r4 + 8)) = *((u8*)(((0x4d << 2) + 4) + 2));
    *((u8*)(r4 + 9)) = *((u8*)(((0x4d << 2) + 4) + 3));
    // str r1, [sp]
    PaletteData_LoadPalette(*((u32*)(r5 + (0x4d << 2))), r4, 1, 0xd0);
    Heap_Free(r4);
}





void ov08_0221D0F4(void) {
    NewMsgDataFromNarc(0, 0x1b, 6, *((u32*)(*((u32*)r0) + 0xc)));
    // str r0, [r4, r1]
    MessagePrinter_New(0xf, 0xe, 0, *((u32*)(*((u32*)r4) + 0xc)));
    // str r0, [r4, r1]
    MessageFormat_New(*((u32*)(*((u32*)r4) + 0xc)), 0x00001FA4);
    // str r0, [r4, r1]
    String_New((2 << 8), *((u32*)(*((u32*)r4) + 0xc)));
    // str r0, [r4, r1]
}





void ov08_0221D14C(void) {
    DestroyMsgData(*((u32*)(r0 + 0x00001FA8)));
    MessagePrinter_Delete(*((u32*)(r4 + 0x00001FA4)));
    MessageFormat_Delete(*((u32*)(r4 + 0x00001FAC)));
    String_Delete(*((u32*)(r4 + 0x00001FB0)));
}





void ov08_0221D184(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // add r4, r0, r1
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    // add r4, r0, r5
    // ldr r6, [sp]
    // add r6, #0x1a
    // and r0, r2
    // strb r0, [r6, r5]
    // strb r1, [r6, r5]
    // strb r0, [r6, r5]
    // ldr r0, [sp]
    // add r4, r0, r5
    // add r6, #0x1b
    // and r0, r2
    // strb r0, [r6, r5]
    // strb r0, [r6, r5]
    // strb r0, [r6, r5]
    // ldr r6, [sp]
    // add r6, #0x1a
    // ldr r0, [sp]
    // add r4, r0, r5
    // ldr r0, [sp]
    // add r4, r0, r5
    // add r1, #0x2c
    // strb r0, [r1]
    // add r1, #0x2d
    // strb r0, [r1]
    // add r1, #0x2e
    // strb r0, [r1]
    // add r1, #0x2f
    // strb r0, [r1]
    // add r1, #0x30
    // strb r0, [r1]
    // add r1, #0x31
    // strb r0, [r1]
    // add r4, #0x32
    // strb r0, [r4]
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r1, #0x34
    // add r7, r1, r0
    // ldr r1, [sp]
    // add r6, r1, r0
    // str r0, [sp, #0xc]
    // add r5, r7, r0
    // add r1, #0x36
    // ldr r1, [sp, #0xc]
    // strh r0, [r7, r1]
    // add r1, #0x3a
    // add r1, #0x3e
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
}





void ov08_0221D438(void) {
    ov08_0221D5D0(ov08_02224F1C);
    // mvn r0, r0
    ov08_02224C94(*((u32*)(r4 + 0x00002088)));
    // mvn r0, r0
    ov08_0221D5DC(r4, 6);
    *((u8*)(*((u32*)r4) + 0x11)) = r5;
    ov08_0221D5DC(r4, r5);
    *((u8*)(*((u32*)r4) + 0x11)) = r5;
    ov08_022217C8(r4);
}





void ov08_0221D4B0(void) {
    ov08_0221D5D0(ov08_02224E54);
    // mvn r0, r0
    ov08_02224C94(*((u32*)(r5 + 0x00002088)));
    // mvn r0, r0
    ov08_022217C8(r5);
}





void ov08_0221D4F8(void) {
    ov08_0221D5D0(ov08_02224E68);
    // mvn r0, r0
    ov08_02224C94(*((u32*)(r5 + 0x00002088)));
    // mvn r0, r0
    ov08_022217C8(r5);
}





void ov08_0221D540(void) {
    ov08_0221D5D0(ov08_02224F5C);
    // mvn r0, r0
    ov08_02224C94(*((u32*)(r5 + 0x00002088)));
    // mvn r0, r0
    ov08_022217C8(r5);
}





void ov08_0221D588(void) {
    ov08_0221D5D0(ov08_02224E7C);
    // mvn r0, r0
    ov08_02224C94(*((u32*)(r5 + 0x00002088)));
    // mvn r0, r0
    ov08_022217C8(r5);
}





void ov08_0221D5D0(void) {
}





void ov08_0221D5DC(void) {
    // add r1, r5, r1
}





void ov08_0221D614(void) {
    ov08_0221DB04();
    // add r1, sp, #0
    // add r0, sp, #0
    // strb r3, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(_02224E2C + 1));
    *((u8*)(r1 + 2)) = *((u8*)(_02224E2C + 2));
    *((u8*)(r1 + 3)) = *((u8*)(_02224E2C + 3));
    *((u8*)(r1 + 4)) = *((u8*)(_02224E2C + 4));
    *((u8*)(r1 + 5)) = *((u8*)(_02224E2C + 5));
    // add r4, r4, r7
    // bpl _0221D65E
    // add r0, sp, #0
    ov08_0221D5DC(r5, *((u8*)((r0 + 1) + 0)), *((u8*)(_02224E2C + 5)), *((u8*)(_02224E2C + 4)));
    // add r0, sp, #0
    // add r1, r5, r1
    // add r4, r4, r7
    // bpl _0221D694
    ov08_0221D5DC(r5, 0);
    // add r0, r5, r0
}





void ov08_0221D6CC(void) {
    // add r0, r2, r0
    // sub r1, r1, r2
    // sub r0, r0, r2
    // add r0, #0x16
    // add r2, #0xa
    // sub r4, #8
}





void ov08_0221D74C(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
}





void ov08_0221D77C(void) {
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
    // add r2, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r4, #0x21
}





void ov08_0221D81C(void) {
    ov08_0221D77C(r0, 0x00000125, ((0 << 0x18) >> 0x18));
}





void ov08_0221D840(void) {
    ov08_0221D8B0();
    BgFillTilemapBufferAndSchedule(*((u32*)(r5 + (0x79 << 2))), 4, 0);
    BgFillTilemapBufferAndSchedule(*((u32*)(r5 + (0x79 << 2))), 5, 0);
    ov08_02220C5C(r5, r4);
    ov08_0221DD28(r5);
    ov08_0221DC3C(r5, r4);
    ov08_0221DD70(r5, r4);
    ov08_0221D6CC(r5, r4);
    ov08_0222171C(r5, r4);
    ov08_022221CC(r5, r4);
    ov08_02222524(r5, r4);
    // strb r4, [r5, r0]
}





void ov08_0221D8B0(void) {
    // add r6, r2, r0
    AllocAndReadWholeNarcMemberByIdPair(0x47, *((u32*)r6), *((u32*)(*((u32*)r0) + 0xc)));
    // add r1, sp, #0xc
    NNS_G2dGetUnpackedScreenData();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    // add r2, #0xc
    LoadRectToBgTilemapRect(*((u32*)(r5 + (0x79 << 2))), (((r4 + 6) << 0x18) >> 0x18), 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0x79 << 2))), (((r4 + 6) << 0x18) >> 0x18));
    Heap_Free(r7);
}





void ov08_0221D91C(void) {
    // add r4, r3, r2
    ov08_0221DB24(*((u8*)(*((u32*)r0) + 0x11)), (0x50 * *((u8*)(*((u32*)r0) + 0x11))), (r0 + 4));
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x50);
    BattleSystem_GetBattlerIdPartner(*((u32*)(*((u32*)r5) + 8)), *((u32*)(*((u32*)r5) + 0x28)));
    BattleSystem_GetTrainer(*((u32*)(*((u32*)r5) + 8)), r0);
    BufferTrainerNameFromDataStruct(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x4d);
    Mon_GetBoxMon(*((u32*)r4));
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r6);
    String_Delete(r6);
    // add r0, r2, r0
    // add r0, #0x2c
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x4c, *((u32*)r5));
    Mon_GetBoxMon(*((u32*)r4));
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r6);
    String_Delete(r6);
    ov08_0221DAC4(r5);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + 0x00001FA8)), 0x4f, *((u32*)(r5 + 0x00001FA8)));
    // add r0, r2, r4
    // add r0, #0x2c
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x5d, *((u32*)r5));
    // add r0, r5, r0
    Mon_GetBoxMon(*((u32*)((0x50 * r4) + 4)));
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r6);
    String_Delete(r6);
    // sub r1, #0xce
    NewString_ReadMsgData(*((u32*)(r5 + 0x00002076)), 0x4e, *((u8*)(r5 + 0x00002076)));
    Mon_GetBoxMon(*((u32*)(r4 + r6)));
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r7);
    String_Delete(r7);
}





void ov08_0221DAC4(void) {
    // add r0, r0, r1
}





void ov08_0221DAE4(void) {
}





void ov08_0221DB04(void) {
}





void ov08_0221DB24(void) {
    ov08_0221DB04();
    // tst r1, r0
    // tst r1, r0
}





void ov08_0221DB54(void) {
    // add r1, #0x34
    // add r1, r0, r1
    // add r0, r1, r0
}





void ov08_0221DB7C(void) {
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x00002020)), 0);
    // add r0, #0xa0
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + 0x00002070)));
    // add r0, #0x60
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + 0x00002070)));
    // add r0, #0x70
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + 0x00002070)));
}





void ov08_0221DBB4(void) {
    // ldr r0, [r4, r0]
}





void ov08_0221DBCC(void) {
}





void ov08_0221DC00(void) {
    // add r5, r7, r0
    AddWindow(*((u32*)(r0 + (0x79 << 2))), r5, ov08_02224FD0);
    // add r4, #8
    // add r5, #0x10
    ov08_0221DC3C(r7, *((u8*)(r7 + 0x0000207A)));
}





void ov08_0221DC3C(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221DC50: ; jump table
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    AllocWindows(*((u32*)(*((u32*)r0) + 0xc)), *((u8*)(r0 + 0x00002074)));
    // str r0, [r4, r1]
    // add r1, r2, r1
    // add r2, r6, r2
    AddWindow(*((u32*)(r4 + (0x79 << 2))), (0 << 4), (0 << 3));
}





void ov08_0221DD28(void) {
    // ldr r1, _0221DD38 ; =0x00002070
    // add r2, r0, #0
    // ldr r0, [r2, r1]
    // add r1, r1, #4
    // ldr r3, _0221DD3C ; =WindowArray_Delete
    // ldrb r1, [r2, r1]
    // bx r3
    // nop
    // _0221DD38: .word 0x00002070
    // _0221DD3C: .word WindowArray_Delete
    // TODO: decompile
}





void ov08_0221DD40(void) {
    WindowArray_Delete(*((u32*)(r0 + 0x00002070)), *((u8*)(r0 + (0x00002070 + 4))));
    // add r5, r5, r0
    RemoveWindow(r5);
    // add r5, #0x10
}





void ov08_0221DD70(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221DD82: ; jump table
}





void ov08_0221DDCC(void) {
    // str r3, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // add r0, r7, r1
    // str r1, [sp, #0x24]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x10]
    String_New(0xc, *((u32*)(*((u32*)r0) + 0xc)));
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x1c]
    NewString_ReadMsgData(*((u32*)(r6 + 0x00001FA8)), *((u32*)(ov08_02224FF4 + (r1 << 2))), (r1 << 2));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
    Mon_GetBoxMon(*((u32*)(r7 + r0)));
    BufferBoxMonNickname(*((u32*)(r6 + 0x00001FAC)), 0, r0);
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    StringExpandPlaceholders(*((u32*)(r6 + 0x00001FAC)));
    // ldr r0, [sp, #0x10]
    // add r3, sp, #0x38
    // ldr r1, [sp, #0x10]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    AddTextPrinterParameterizedWithColor(0, *((u8*)(r3 + 0x10)));
    // ldr r1, [sp, #0x10]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    AddTextPrinterParameterizedWithColor(0, *((u8*)(r3 + 0x10)));
    // ldr r0, [sp, #0x18]
    String_Delete();
    // ldr r0, [sp, #0x1c]
    String_Delete();
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    NewString_ReadMsgData(*((u32*)(r6 + 0x00001FA8)), 0x10);
    // add r0, r5, r4
    GetWindowWidth();
    // str r0, [sp, #0x28]
    FontID_String_GetWidth(0, r6, 0);
    // ldr r1, [sp, #0x28]
    // str r7, [sp]
    // sub r3, r1, r0
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00070800, 0, r6);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000A0B00, 0, r6);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r6 + 0x00001FA8)), 0x11);
    // add r0, r5, r4
    GetWindowWidth();
    // str r0, [sp, #0x2c]
    FontID_String_GetWidth(0, r6, 0);
    // ldr r1, [sp, #0x2c]
    // str r7, [sp]
    // sub r3, r1, r0
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((0xc1 << 0xa), 0, r6);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000C0D00, 0, r6);
    String_Delete(r6);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov08_0221DF80(void) {
    // str r0, [sp]
    // add r3, #8
    // add r1, r1, r4
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // add r1, sp, #0x10
    // str r1, [sp, #0xc]
    // add r2, r5, r3
    // sub r0, #0xcc
    sub_0200CE7C(*((u32*)(r0 + 0x00002070)), 1, ((*((u8*)(r2 + 0x1a)) << 0x19) >> 0x19), 3);
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
}





void ov08_0221DFC8(void) {
    // add r0, r3, r0
    // str r0, [sp, #0xc]
    // add r0, sp, #0x18
    // sub r0, #0xcc
    // add r1, r1, r4
    // str r1, [sp]
    // str r7, [sp, #4]
    // str r6, [sp, #8]
    // ldr r1, [sp, #0xc]
    PrintUIntOnWindow(*((u32*)(r0 + 0x00002070)), *((u16*)(*((u32*)(r0 + 0x00002070)) + 0x10)), 3, 1);
    // str r6, [sp]
    // add r2, #0xcc
    // add r2, r2, r4
    // add r3, #0x18
    sub_0200CDAC(*((u32*)(r5 + 0x00001FA4)), 0, *((u32*)(r5 + 0x00001FA4)), r7);
    // add r7, #0x20
    // sub r0, #0xcc
    // add r1, r1, r4
    // str r1, [sp]
    // str r7, [sp, #4]
    // str r6, [sp, #8]
    // ldr r1, [sp, #0xc]
    PrintUIntOnWindow(*((u32*)(r5 + 0x00002070)), *((u16*)(*((u32*)(r5 + 0x00002070)) + 0x12)), 3, 0);
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
}





void ov08_0221E048(void) {
    // str r1, [sp, #8]
    // str r3, [sp, #0xc]
    // add r5, r1, r0
    CalculateHpBarPixelsLength(*((u16*)(r5 + 0x10)), *((u16*)(r5 + 0x12)), 0x30);
    // str r0, [sp, #0x14]
    CalculateHpBarColor(*((u16*)(r5 + 0x10)), *((u16*)(r5 + 0x12)), 0x30);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221E082: ; jump table
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    ScheduleWindowCopyToVram((0x00002070 << 4), *((u32*)(r4 + 0x00002070)));
    // add r0, sp, #0x20
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r0, r0, r5
    FillWindowPixelRect(*((u32*)(r4 + 0x00002070)), ((r1 << 0x18) >> 0x18), (((*((u8*)(r0 + 0x10)) + 1) << 0x10) >> 0x10));
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r0, r0, r5
    FillWindowPixelRect(*((u32*)(r4 + 0x00002070)), r7, (((r6 + 2) << 0x10) >> 0x10));
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // add r0, r0, r5
    FillWindowPixelRect(*((u32*)(r4 + 0x00002070)), ((r1 << 0x18) >> 0x18), (((r6 + 4) << 0x10) >> 0x10));
    // add r0, r0, r5
    ScheduleWindowCopyToVram(*((u32*)(r4 + 0x00002070)));
}





void ov08_0221E120(void) {
    String_New(0x10, *((u32*)(*((u32*)r0) + 0xc)));
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 8);
    // str r0, [sp, #0x10]
    // add r2, r5, r2
    BufferAbilityName(*((u32*)(r5 + 0x00001FAC)), 0, *((u16*)((0x50 * r7) + 0x1c)));
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, r6, 0);
    // ldr r0, [sp, #0x10]
    String_Delete();
    String_Delete(r6);
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
}





void ov08_0221E1A8(void) {
    // add r5, r1, r0
    NewString_ReadMsgData(*((u32*)(r0 + 0x00001FA8)), 0x14);
    String_New(0x12, *((u32*)(*((u32*)r4) + 0xc)));
    NewString_ReadMsgData(*((u32*)(r4 + 0x00001FA8)), 9);
    // str r0, [sp, #0x10]
    BufferItemName(*((u32*)(r4 + 0x00001FAC)), 0, *((u16*)(r5 + 0x1a)));
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(*((u32*)(r4 + 0x00001FAC)), r6);
    // ldr r0, [sp, #0x10]
    String_Delete();
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r5
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + 0x00002070)), 0, r6, 0);
    String_Delete(r6);
    // add r0, r0, r5
    ScheduleWindowCopyToVram(*((u32*)(r4 + 0x00002070)));
}





void ov08_0221E244(void) {
    // str r1, [sp, #0x10]
    // str r3, [sp, #0x14]
    String_New(0x10, *((u32*)(*((u32*)r0) + 0xc)));
    // ldr r1, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)));
    // str r0, [sp, #0x18]
    // ldr r2, [sp, #0x10]
    BufferMoveName(*((u32*)(r5 + 0x00001FAC)), 0);
    // ldr r2, [sp, #0x18]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), r7);
    // add r0, sp, #0x20
    // add r0, r4, r6
    GetWindowWidth(*((u16*)(r0 + 0x10)));
    // add r0, sp, #0x20
    FontID_String_GetWidth(*((u16*)(r0 + 0x10)), r7, 0);
    // sub r0, r1, r0
    // add r1, sp, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r4, r6
    AddTextPrinterParameterizedWithColor(0, *((u16*)((r5 << 3) + 0x10)), r7, 0);
    // ldr r0, [sp, #0x18]
    String_Delete();
    String_Delete(r7);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov08_0221E2E8(void) {
    // str r2, [sp, #0x10]
    NewString_ReadMsgData(*((u32*)(r0 + 0x00001FA8)), 0xe);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r0, r0, r5
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + 0x00002070)), 0, r0);
    String_Delete(r7);
    // add r0, r0, r5
    ScheduleWindowCopyToVram(*((u32*)(r4 + 0x00002070)));
}





void ov08_0221E340(void) {
    // add r0, r4, r0
    DrawFrameAndWindow2(0x00002050, 1, 1, 0xe);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00002050, 0xf);
    NewString_ReadMsgData(*((u32*)(r4 + 0x00001FA8)), r5);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r0
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00002050, 1, r0, 0);
    String_Delete(r5);
    // add r0, r4, r0
    ScheduleWindowCopyToVram(0x00002050);
}





void ov08_0221E3A4(void) {
    // sub r3, #0xc8
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002070)), r2, 0x00002070);
    FontID_String_GetWidth(4, r0, 0);
    // add r0, r5, r4
    GetWindowWidth();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, r3, r6
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    AddTextPrinterParameterizedWithColor(0, 4, r7, ((r0 << 3) >> 1));
    String_Delete(r7);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov08_0221E408(void) {
    // add r4, r2, r0
    // sub r1, #0xcd
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002075)), 0x17, *((u8*)(r0 + 0x00002075)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x31
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r2, r0
    AddTextPrinterParameterizedWithColor(0xff, 0, r0, 0);
    String_Delete(r7);
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x18);
    // str r0, [sp, #0x18]
    String_New(8, *((u32*)(*((u32*)r5) + 0xc)));
    // str r0, [sp, #0x1c]
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, ((*((u8*)(r4 + 0x16)) << 0x19) >> 0x19), 3);
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)));
    // add r0, #0xb
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r7
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, 0);
    // ldr r0, [sp, #0x18]
    String_Delete();
    // ldr r0, [sp, #0x1c]
    String_Delete();
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x19);
    // str r0, [sp, #0x20]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x41
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r2, r0
    // ldr r2, [sp, #0x20]
    AddTextPrinterParameterizedWithColor(0xff, 0, *((u32*)(r5 + 0x00002070)), 0);
    // ldr r0, [sp, #0x20]
    String_Delete();
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x1a);
    // str r0, [sp, #0x14]
    String_New(0xe, *((u32*)(*((u32*)r5) + 0xc)));
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r2, r2, r3
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, *((u32*)(r4 + 0x24)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, 0, 6);
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)));
    // add r6, #0xc
    // add r0, r0, r4
    GetWindowWidth(*((u32*)(r5 + 0x00002070)));
    // ldr r1, [sp, #0x10]
    FontID_String_GetWidth(0, 0);
    // sub r0, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, ((r0 << 0x10) >> 0x10));
    // ldr r0, [sp, #0x14]
    String_Delete();
    // ldr r0, [sp, #0x10]
    String_Delete();
    // add r0, r1, r0
    ScheduleWindowCopyToVram((0x13 << 4), *((u32*)(r5 + 0x00002070)));
    // add r0, r0, r7
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, r1, r0
    ScheduleWindowCopyToVram((5 << 6), *((u32*)(r5 + 0x00002070)));
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
}





void ov08_0221E5DC(void) {
    // sub r1, #0xcd
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002075)), 0x20, *((u8*)(r0 + 0x00002075)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0xe0
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, r0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x21);
    // str r0, [sp, #0x10]
    String_New(8, *((u32*)(*((u32*)r5) + 0xc)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, r5, r2
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, *((u16*)((0x50 * r7) + 0xa)), 3);
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), r6);
    FontID_String_GetWidth(0, r6, 0);
    // add r0, r0, r4
    GetWindowWidth(*((u32*)(r5 + 0x00002070)));
    // sub r0, r0, r7
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, r6, (((r0 << 3) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x10]
    String_Delete();
    String_Delete(r6);
    // add r0, #0xe0
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
}





void ov08_0221E6D8(void) {
    // sub r1, #0xcd
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002075)), 0x22, *((u8*)(r0 + 0x00002075)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0xf0
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, r0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x23);
    // str r0, [sp, #0x10]
    String_New(8, *((u32*)(*((u32*)r5) + 0xc)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, r5, r2
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, *((u16*)((0x50 * r7) + 0xc)), 3);
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), r6);
    FontID_String_GetWidth(0, r6, 0);
    // add r0, r0, r4
    GetWindowWidth(*((u32*)(r5 + 0x00002070)));
    // sub r0, r0, r7
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, r6, (((r0 << 3) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x10]
    String_Delete();
    String_Delete(r6);
    // add r0, #0xf0
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
}





void ov08_0221E7D4(void) {
    // sub r1, #0xcd
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002075)), 0x28, *((u8*)(r0 + 0x00002075)));
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r2
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, r0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x29);
    // str r0, [sp, #0x10]
    String_New(8, *((u32*)(*((u32*)r5) + 0xc)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, r5, r2
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, *((u16*)((0x50 * r7) + 0xe)), 3);
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), r6);
    FontID_String_GetWidth(0, r6, 0);
    // add r0, r0, r4
    GetWindowWidth(*((u32*)(r5 + 0x00002070)));
    // sub r0, r0, r7
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, r6, (((r0 << 3) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x10]
    String_Delete();
    String_Delete(r6);
    // add r0, r1, r0
    ScheduleWindowCopyToVram((1 << 8), *((u32*)(r5 + 0x00002070)));
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
}





void ov08_0221E8D4(void) {
    // sub r1, #0xcd
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002075)), 0x24, *((u8*)(r0 + 0x00002075)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x11
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r2, r0
    AddTextPrinterParameterizedWithColor(0xff, 0, r0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r4 + 0x00001FA8)), 0x25);
    // str r0, [sp, #0x10]
    String_New(8, *((u32*)(*((u32*)r4) + 0xc)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, r4, r2
    BufferIntegerAsString(*((u32*)(r4 + 0x00001FAC)), 0, *((u16*)((0x50 * r7) + 0x10)), 3);
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(*((u32*)(r4 + 0x00001FAC)), r6);
    FontID_String_GetWidth(0, r6, 0);
    // add r5, #8
    // add r0, r0, r5
    GetWindowWidth(*((u32*)(r4 + 0x00002070)));
    // sub r0, r0, r7
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r5
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + 0x00002070)), 0, r6, (((r0 << 3) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x10]
    String_Delete();
    String_Delete(r6);
    // add r0, r1, r0
    ScheduleWindowCopyToVram((0x11 << 4), *((u32*)(r4 + 0x00002070)));
    // add r0, r0, r5
    ScheduleWindowCopyToVram(*((u32*)(r4 + 0x00002070)));
}





void ov08_0221E9D4(void) {
    // sub r1, #0xcd
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002075)), 0x26, *((u8*)(r0 + 0x00002075)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x21
    // str r2, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r2, r0
    AddTextPrinterParameterizedWithColor(0xff, 0, r0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r4 + 0x00001FA8)), 0x27);
    // str r0, [sp, #0x10]
    String_New(8, *((u32*)(*((u32*)r4) + 0xc)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, r4, r2
    BufferIntegerAsString(*((u32*)(r4 + 0x00001FAC)), 0, *((u16*)((0x50 * r7) + 0x12)), 3);
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(*((u32*)(r4 + 0x00001FAC)), r6);
    FontID_String_GetWidth(0, r6, 0);
    // add r5, #9
    // add r0, r0, r5
    GetWindowWidth(*((u32*)(r4 + 0x00002070)));
    // sub r0, r0, r7
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r5
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + 0x00002070)), 0, r6, (((r0 << 3) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x10]
    String_Delete();
    String_Delete(r6);
    // add r0, r1, r0
    ScheduleWindowCopyToVram((0x12 << 4), *((u32*)(r4 + 0x00002070)));
    // add r0, r0, r5
    ScheduleWindowCopyToVram(*((u32*)(r4 + 0x00002070)));
}





void ov08_0221EAD4(void) {
    // add r7, r2, r0
    // sub r1, #0xcd
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002075)), 0x1c, *((u8*)(r0 + 0x00002075)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0xd0
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, r0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x1f);
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    FontID_String_GetWidth(0, 0);
    // str r0, [sp, #0x14]
    // add r0, #0x40
    GetWindowWidth(*((u32*)(r5 + 0x00002070)));
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // sub r0, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, ((r0 << 0xf) >> 0x10));
    // ldr r0, [sp, #0x10]
    String_Delete();
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x1d);
    // str r0, [sp, #0x18]
    String_New(8, *((u32*)(*((u32*)r5) + 0xc)));
    // str r0, [sp, #0x1c]
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, *((u16*)(r7 + 0x10)), 3);
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)));
    // ldr r1, [sp, #0x1c]
    FontID_String_GetWidth(0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // sub r3, r6, r3
    // add r0, r0, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, r0);
    // ldr r0, [sp, #0x18]
    String_Delete();
    // ldr r0, [sp, #0x1c]
    String_Delete();
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x1e);
    // str r0, [sp, #0x20]
    String_New(8, *((u32*)(*((u32*)r5) + 0xc)));
    // str r0, [sp, #0x24]
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, *((u16*)(r7 + 0x12)), 3);
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)));
    // ldr r3, [sp, #0x14]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, r6, r3
    // add r0, r0, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0);
    // ldr r0, [sp, #0x20]
    String_Delete();
    // ldr r0, [sp, #0x24]
    String_Delete();
    // add r0, #0xd0
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
}





void ov08_0221EC6C(void) {
    NewMsgDataFromNarc(1, 0x1b, 0x000002D2, *((u32*)(*((u32*)r0) + 0xc)));
    // add r1, r5, r1
    NewString_ReadMsgData(*((u16*)((0x50 * r6) + 0x1c)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r0, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, r0, 0);
    String_Delete(r6);
    DestroyMsgData(r7);
    // add r0, r0, r4
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
}





void ov08_0221ECE8(void) {
    // sub r2, #0xc8
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002070)), 0x33, 0x00002070);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, r0, 0);
    String_Delete(r6);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov08_0221ED30(void) {
    // str r2, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // sub r2, #0xc8
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002070)), 0x32, 0x00002070);
    FontID_String_GetWidth(0, r0, 0);
    // add r0, r4, r6
    GetWindowWidth((r0 << 0x10));
    // sub r0, r0, r5
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 0, r7, (((r0 << 3) << 0x10) >> 0x10));
    String_Delete(r7);
    // sub r2, #0xc8
    NewString_ReadMsgData(*((u32*)(r5 + r2)), 0x34);
    // str r0, [sp, #0x14]
    String_New(8, *((u32*)(*((u32*)r5) + 0xc)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, 3);
    // ldr r2, [sp, #0x14]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), r7);
    FontID_String_GetWidth(0, r7, 0);
    // add r0, r4, r6
    GetWindowWidth((r0 << 0x10));
    // sub r0, r0, r5
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 0, r7, (((r0 << 3) << 0x10) >> 0x10));
    // ldr r0, [sp, #0x14]
    String_Delete();
    String_Delete(r7);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov08_0221EE18(void) {
    // sub r2, #0xc8
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002070)), 0x30, 0x00002070);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, r0, 0);
    String_Delete(r6);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov08_0221EE60(void) {
    // str r2, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // sub r2, #0xc8
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002070)), 0x32, 0x00002070);
    FontID_String_GetWidth(0, r0, 0);
    // add r0, r4, r6
    GetWindowWidth((r0 << 0x10));
    // sub r0, r0, r5
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 0, r7, (((r0 << 3) << 0x10) >> 0x10));
    String_Delete(r7);
    // sub r2, #0xc8
    NewString_ReadMsgData(*((u32*)(r5 + r2)), 0x31);
    // str r0, [sp, #0x14]
    String_New(8, *((u32*)(*((u32*)r5) + 0xc)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, 3);
    // ldr r2, [sp, #0x14]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), r7);
    FontID_String_GetWidth(0, r7, 0);
    // add r0, r4, r6
    GetWindowWidth((r0 << 0x10));
    // sub r0, r0, r5
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 0, r7, (((r0 << 3) << 0x10) >> 0x10));
    // ldr r0, [sp, #0x14]
    String_Delete();
    String_Delete(r7);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov08_0221EF48(void) {
    NewMsgDataFromNarc(1, 0x1b, 0x000002ED, *((u32*)(*((u32*)r0) + 0xc)));
    NewString_ReadMsgData(r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 0, r0, 0);
    String_Delete(r6);
    DestroyMsgData(r7);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov08_0221EFA8(void) {
    // sub r2, #0xc8
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002070)), 0x35, 0x00002070);
    FontID_String_GetWidth(0, r0, 0);
    // add r0, r5, r4
    GetWindowWidth((r0 << 0x10));
    // sub r1, r0, r6
    // add r0, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, r7, (((r1 >> 0x1f) << 0xf) >> 0x10));
    String_Delete(r7);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov08_0221F00C(void) {
    // sub r3, #0xc8
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002070)), 0x36, 0x00002070);
    // sub r3, #0xc8
    NewString_ReadMsgData(*((u32*)(r0 + r3)), 0x38);
    // sub r3, #0xc8
    NewString_ReadMsgData(*((u32*)(r0 + r3)), 0x37);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 0, r0, 0);
    String_Delete(r6);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov08_0221F07C(void) {
    // sub r0, #0xc8
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002070)), 0x2e);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    FontID_String_GetWidth(0, 0);
    // str r0, [sp, #0x1c]
    // add r0, r4, r6
    GetWindowWidth();
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    // sub r0, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, (r0 >> 1));
    // ldr r0, [sp, #0x18]
    String_Delete();
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x2c);
    // str r0, [sp, #0x20]
    String_New(6, *((u32*)(*((u32*)r5) + 0xc)));
    // str r0, [sp, #0x24]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, 3);
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)));
    // ldr r1, [sp, #0x24]
    FontID_String_GetWidth(0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // sub r3, r7, r3
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, r0);
    // ldr r0, [sp, #0x20]
    String_Delete();
    // ldr r0, [sp, #0x24]
    String_Delete();
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x2d);
    // str r0, [sp, #0x28]
    String_New(6, *((u32*)(*((u32*)r5) + 0xc)));
    // str r0, [sp, #0x2c]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, 3);
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x28]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)));
    // ldr r3, [sp, #0x1c]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // add r3, r7, r3
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0);
    // ldr r0, [sp, #0x28]
    String_Delete();
    // ldr r0, [sp, #0x2c]
    String_Delete();
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov08_0221F1B0(void) {
    // add r1, #0x34
    // sub r2, #0xc8
    NewString_ReadMsgData(*((u32*)(r0 + 0x00002070)), 0x3b, 0x00002070);
    // sub r2, #0xc8
    NewString_ReadMsgData(*((u32*)(r0 + r2)), 0x3a);
    FontID_String_GetWidth(4, r0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, r3, r7
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    AddTextPrinterParameterizedWithColor(0, 4, r6, (0x60 >> 1));
    String_Delete(r6);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov08_0221F220(void) {
    // sub r0, #0xa
    // add r5, #0x80
    // sub r0, #0xa
    // add r5, #0x50
    FillWindowPixelBuffer(*((u32*)(r0 + 0x0000207A)), 0);
    NewString_ReadMsgData(*((u32*)(r4 + 0x00001FA8)), 0x3c);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r0, 0);
    String_Delete(r4);
    ScheduleWindowCopyToVram(r5);
}





void ov08_0221F284(void) {
    // str r1, [sp, #0x10]
    String_New(6, *((u32*)(*((u32*)r0) + 0xc)));
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x2b);
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, 0x28);
    // ldr r0, [sp, #0x14]
    String_Delete();
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x2e);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    FontID_String_GetWidth(0, 0);
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, 0x50);
    // ldr r0, [sp, #0x18]
    String_Delete();
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x2d);
    // str r0, [sp, #0x20]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, *((u8*)(r2 + 3)), 2);
    // ldr r2, [sp, #0x20]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp, #8]
    // add r3, #0x50
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x1c]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, r7);
    // ldr r0, [sp, #0x20]
    String_Delete();
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x2c);
    // str r0, [sp, #0x24]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, *((u8*)(r2 + 2)), 2);
    // ldr r2, [sp, #0x24]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), r7);
    FontID_String_GetWidth(0, r7, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // sub r3, r3, r5
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, r7, 0x50);
    // ldr r0, [sp, #0x24]
    String_Delete();
    String_Delete(r7);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov08_0221F3D0(void) {
    // str r1, [sp, #0x10]
    String_New(6, *((u32*)(*((u32*)r0) + 0xc)));
    // str r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x2b);
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    FontID_String_GetWidth(0, 0);
    // ldr r0, [sp, #0x18]
    String_Delete();
    // add r7, #0x28
    // sub r0, r0, r7
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r6
    FillWindowPixelRect(0x10, 0, ((r7 << 0x10) >> 0x10), 0x18);
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x2c);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 0, *((u8*)(r2 + 2)), 2);
    // ldr r1, [sp, #0x14]
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), r7);
    // ldr r1, [sp, #0x14]
    FontID_String_GetWidth(0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // add r0, r4, r6
    // sub r3, r3, r5
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000F0E00, 0, 0x50);
    String_Delete(r7);
    // ldr r0, [sp, #0x14]
    String_Delete();
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov08_0221F4A4(void) {
    Party_GetCount(*((u32*)*((u32*)r0)));
    // str r0, [sp, #8]
    // add r7, #0x1b
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    FillWindowPixelBuffer(0x00002070, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_0221DDCC(r5, r4, 4, ((r4 << 0x10) >> 0x10));
    ov08_0221F550(r5, ((r4 << 0x18) >> 0x18));
    Pokemon_GetStatusIconId(*((u32*)(r6 + 4)));
    ov08_0221F5B0(r5, ((r4 << 0x18) >> 0x18));
    // ldr r0, [sp, #8]
    // add r6, #0x50
    // add r0, #0x10
    // str r0, [sp, #8]
    // add r7, #0x50
    Party_GetCount(*((u32*)*((u32*)r5)));
    // add r0, #0x35
    ov08_0221E340(r5, 7);
    ov08_0221E340(r5, 6);
}





void ov08_0221F550(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r0, r4
    FillWindowPixelRect(*((u32*)(r0 + 0x00002070)), 0, 0x38, 0x20);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r0, r4
    FillWindowPixelRect(*((u32*)(r5 + 0x00002070)), 0, 0x40, 0x18);
    // str r0, [sp]
    ov08_0221DFC8(r5, r6, r6, 0x38);
    // str r0, [sp]
    ov08_0221E048(r5, r6, r6, 0x40);
}





void ov08_0221F5B0(void) {
}





void ov08_0221F5D0(void) {
    FillWindowPixelBuffer(*((u32*)(r0 + 0x00002070)), 0);
    // add r0, #0x10
    FillWindowPixelBuffer(*((u32*)(r4 + 0x00002070)), 0);
    // add r0, #0x20
    FillWindowPixelBuffer(*((u32*)(r4 + 0x00002070)), 0);
    // add r0, #0x30
    FillWindowPixelBuffer(*((u32*)(r4 + 0x00002070)), 0);
    ov08_0221F658(r4, *((u8*)(*((u32*)r4) + 0x11)));
    ov08_0221E3A4(r4, 1, 0xf);
    // add r0, r4, r0
    ov08_0221E3A4(r4, 2, 0x12);
    ov08_0221E3A4(r4, 3, 0x13);
    // add r0, #0x20
    ScheduleWindowCopyToVram(*((u32*)(r4 + 0x00002070)));
    // add r0, #0x30
    ScheduleWindowCopyToVram(*((u32*)(r4 + 0x00002070)));
}





void ov08_0221F658(void) {
    // str r0, [sp, #0x18]
    // add r0, r5, r7
    // str r0, [sp, #0x14]
    String_New(0xc, *((u32*)(*((u32*)r0) + 0xc)));
    // str r0, [sp, #0x10]
    NewString_ReadMsgData(*((u32*)(r4 + 0x00001FA8)), *((u32*)(ov08_02224FF4 + (r6 << 2))), (r6 << 2));
    Mon_GetBoxMon(*((u32*)(r5 + r7)));
    BufferBoxMonNickname(*((u32*)(r4 + 0x00001FAC)), 0, r0);
    // ldr r1, [sp, #0x10]
    StringExpandPlaceholders(*((u32*)(r4 + 0x00001FAC)), r6);
    String_Delete(r6);
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    NewString_ReadMsgData(*((u32*)(r4 + 0x00001FA8)), 0x10);
    NewString_ReadMsgData(*((u32*)(r4 + 0x00001FA8)), 0x11);
    // ldr r1, [sp, #0x10]
    FontID_String_GetWidth(4, 0);
    FontID_String_GetWidth(0, r5, 0);
    // ldr r0, [sp, #0x18]
    GetWindowWidth((r0 << 0x18));
    // sub r0, r0, r6
    // sub r0, r0, r7
    // sub r1, r0, r4
    // add r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    AddTextPrinterParameterizedWithColor(0, 4, (((r1 >> 0x1f) << 0x17) >> 0x18));
    // ldr r0, [sp, #0x10]
    String_Delete();
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, r7, r6
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // add r3, r4, r3
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000A0B00, 0, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, r7, r6
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // add r3, r4, r3
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000C0D00, 0, r5);
    String_Delete(r5);
    // ldr r0, [sp, #0x18]
    ScheduleWindowCopyToVram();
}





void ov08_0221F7C0(void) {
    // add r0, r1, r0
    FillWindowPixelBuffer(((((6 * *((u8*)(r0 + 0x00002075))) << 0x10) >> 0x10) << 4), 0, *((u8*)(r0 + 0x00002075)));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // add r0, r1, r0
    FillWindowPixelBuffer(0x00002070, 0);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // add r0, r1, r0
    FillWindowPixelBuffer(0x00002070, 0);
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    FillWindowPixelBuffer(0x00002070, 0);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    FillWindowPixelBuffer(0x00002070, 0);
    // add r0, #0x50
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // str r2, [sp]
    // str r2, [sp, #4]
    ov08_0221DDCC(r5, r6, 0, *((u8*)(*((u32*)r5) + 0x11)));
    // str r0, [sp, #0x1c]
    // add r0, #0x34
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // add r0, r0, r2
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, r7, r4
    ov08_0221E244(r5, *((u16*)(0x50 + (0 << 3))), (*((u8*)(*((u32*)r5) + 0x11)) * 0x50), *((u32*)(ov08_02224FE0 + (0 << 2))));
    // ldr r2, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // add r1, r1, r2
    // add r2, r7, r4
    ov08_0221F284(r5);
    ov08_0221E3A4(r5, 5, 0x12);
    // ldr r0, [sp, #0x18]
    // add r0, r1, r0
    ScheduleWindowCopyToVram(0x00002070, *((u32*)(r5 + 0x00002070)));
    // ldr r0, [sp, #0x14]
    // add r0, r1, r0
    ScheduleWindowCopyToVram(0x00002070, *((u32*)(r5 + 0x00002070)));
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    ScheduleWindowCopyToVram(0x00002070, *((u32*)(r5 + 0x00002070)));
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    ScheduleWindowCopyToVram(0x00002070, *((u32*)(r5 + 0x00002070)));
    // eor r0, r2
    // strb r0, [r5, r1]
}





void ov08_0221F900(void) {
    // add r0, r1, r0
    FillWindowPixelBuffer((0x13 << 4), 0, *((u8*)(r0 + 0x00002075)));
    // add r0, r1, r0
    FillWindowPixelBuffer((5 << 6), 0);
    // add r0, #0xe0
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0xf0
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer((1 << 8), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer((0x11 << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer((0x12 << 4), 0);
    // add r0, #0xd0
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer((0x15 << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer((r4 << 4), 0);
    // add r0, #0xa
    // add r0, r1, r0
    FillWindowPixelBuffer((r4 << 4), 0);
    // add r0, #0xb
    // add r0, r1, r0
    FillWindowPixelBuffer((r4 << 4), 0);
    // add r0, #0xc
    // add r0, r1, r0
    FillWindowPixelBuffer((r4 << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 5) << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 6) << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 7) << 4), 0);
    // add r0, #8
    // add r0, r1, r0
    FillWindowPixelBuffer((r4 << 4), 0);
    // add r0, #9
    // add r0, r1, r0
    FillWindowPixelBuffer((r4 << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 4) << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 1) << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 2) << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 3) << 4), 0);
    // str r2, [sp]
    // str r2, [sp, #4]
    ov08_0221DDCC(r5, r4, 0, *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221EAD4(r5, *((u8*)(*((u32*)r5) + 0x11)));
    // str r3, [sp]
    // add r1, #0xa
    ov08_0221E048(r5, r4, *((u8*)(*((u32*)r5) + 0x11)), 0);
    ov08_0221E408(r5, *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221E5DC(r5, *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221E6D8(r5, *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221E7D4(r5, *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221E8D4(r5, *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221E9D4(r5, *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221E120(r5, (r4 + 1), *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221E1A8(r5, (r4 + 3), *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221EC6C(r5, *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221E3A4(r5, 0x15, 0x13);
    // eor r0, r2
    // strb r0, [r5, r1]
}





void ov08_0221FB18(void) {
    // add r0, #0x60
    FillWindowPixelBuffer(*((u32*)(r0 + (0x00002075 - 5))), 0, *((u8*)(r0 + 0x00002075)));
    // add r0, #0x70
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x80
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x90
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0xa0
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 1) << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer((r4 << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 2) << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 3) << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 5) << 4), 0);
    // add r0, r1, r0
    FillWindowPixelBuffer(((r4 + 4) << 4), 0);
    // add r0, #0x34
    // add r2, #0x34
    // add r1, r2, r1
    // add r7, r1, r0
    // str r2, [sp]
    // str r2, [sp, #4]
    ov08_0221DDCC(r5, 6, 0, *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221E2E8(r5, 7, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r3, #0x34
    ov08_0221E244(r5, *((u16*)r7), r4, *((u32*)(ov08_02224FE0 + (*((u8*)*((u32*)r5)) << 2))));
    ov08_0221ECE8(r5, 8);
    ov08_0221ED30(r5, (r4 + 2), *((u8*)(r7 + 6)));
    ov08_0221EE18(r5, 9);
    ov08_0221EE60(r5, (r4 + 3), *((u8*)(r7 + 7)));
    ov08_0221EF48(r5, (r4 + 4), *((u16*)r7));
    ov08_0221EFA8(r5, 0xa);
    ov08_0221F00C(r5, (r4 + 5), *((u8*)(r7 + 5)));
    ov08_0221F07C(r5, (r4 + 1), *((u8*)(r7 + 2)), *((u8*)(r7 + 3)));
    // eor r0, r2
    // strb r0, [r5, r1]
}





void ov08_0221FC7C(void) {
    FillWindowPixelBuffer(*((u32*)(r0 + 0x00002070)), 0);
    // add r0, #0x10
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x20
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x30
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x40
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x50
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    ov08_0221DDCC(r5, 0, 0, *((u8*)(*((u32*)r5) + 0x11)));
    // str r0, [sp, #0x10]
    // add r0, #0x34
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov08_0221E244(r5, *((u16*)(0x50 + 0)), (0 + 1), *((u32*)ov08_02224FE0));
    // ldr r1, [sp, #0xc]
    // add r1, r1, r4
    ov08_0221F284(r5, (r6 + 1));
    // add r4, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov08_0221E244(r5, *((u16*)(*((u32*)r5) + 0x24)), 5, 0x49);
    GetMoveAttr(*((u16*)(*((u32*)r5) + 0x24)), 5);
    // add r1, sp, #0x14
    *((u8*)(r1 + 2)) = r0;
    *((u8*)(r1 + 3)) = *((u8*)(r1 + 2));
    // add r1, sp, #0x14
    ov08_0221F284(r5, 5);
    // add r0, #0x10
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, #0x20
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, #0x30
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, #0x40
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, #0x50
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
}





void ov08_0221FDA4(void) {
    FillWindowPixelBuffer(*((u32*)(r0 + 0x00002070)), 0);
    // add r0, #0x20
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x30
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x10
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x40
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x60
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x50
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x70
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x90
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0xa0
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x80
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0xb0
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    ov08_0221DDCC(r5, 0, 0, *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221E2E8(r5, 2, 0, 0);
    ov08_0221ECE8(r5, 4);
    ov08_0221EE18(r5, 5);
    ov08_0221EFA8(r5, 9);
    // add r0, #0x34
    // add r2, #0x34
    // add r7, r2, r0
    // str r0, [sp, #0xc]
    // add r4, r7, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    ov08_0221E244(r5, *((u16*)(r7 + *((u8*)(*((u32*)r5) + 0x11)))), 1, *((u32*)(ov08_02224FE0 + (*((u8*)*((u32*)r5)) << 2))));
    ov08_0221ED30(r5, 6, *((u8*)(r4 + 6)));
    ov08_0221EE60(r5, 7, *((u8*)(r4 + 7)));
    // ldr r2, [sp, #0xc]
    ov08_0221EF48(r5, 8, *((u16*)(r7 + r2)));
    ov08_0221F00C(r5, 0xa, *((u8*)(r4 + 5)));
    ov08_0221F07C(r5, 3, *((u8*)(r4 + 2)), *((u8*)(r4 + 3)));
    GetMoveAttr(*((u16*)(r1 + 0x24)), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov08_0221E244(r5, *((u16*)(*((u32*)r5) + 0x24)), 1, 0x49);
    ov08_0221EF48(r5, 8, *((u16*)(*((u32*)r5) + 0x24)));
    GetMoveAttr(*((u16*)(*((u32*)r5) + 0x24)), 4);
    ov08_0221ED30(r5, 6, r0);
    GetMoveAttr(*((u16*)(*((u32*)r5) + 0x24)), 2);
    ov08_0221EE60(r5, 7, r0);
    GetMoveAttr(*((u16*)(*((u32*)r5) + 0x24)), 1);
    ov08_0221F00C(r5, 0xa, r0);
    ov08_0221F07C(r5, 3, r4, r4);
    ov08_0221F1B0(r5, 0xb);
}





void ov08_0221FF70(void) {
    FillWindowPixelBuffer(*((u32*)(r0 + 0x00002070)), 0);
    // add r0, #0x10
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x20
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x30
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x40
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    ov08_0221DDCC(r5, 0, 0, *((u8*)(*((u32*)r5) + 0x11)));
    // str r0, [sp, #0x10]
    // add r0, #0x34
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov08_0221E244(r5, *((u16*)(0x50 + 0)), (0 + 1), *((u32*)ov08_02224FE0));
    // ldr r1, [sp, #0xc]
    // add r1, r1, r4
    ov08_0221F284(r5, (r6 + 1));
    // add r4, #8
    GetItemAttr(*((u16*)(*((u32*)r5) + 0x22)), 0x25, *((u32*)(*((u32*)r5) + 0xc)));
    ov08_0221E340(r5, 0x5e);
    // add r0, #0x10
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, #0x20
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, #0x30
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, #0x40
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
}





void ov08_02220064(void) {
}





void ov08_02220084(void) {
    FillWindowPixelBuffer(*((u32*)(r0 + 0x00002070)), 0);
    // add r0, #0x20
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x30
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x10
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x40
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x50
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // add r0, #0x60
    FillWindowPixelBuffer(*((u32*)(r5 + 0x00002070)), 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    ov08_0221DDCC(r5, 0, 0, *((u8*)(*((u32*)r5) + 0x11)));
    ov08_0221E2E8(r5, 2, 0, 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x39);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x40
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x00002070)), 0, r0, 0);
    String_Delete(r4);
    // add r0, #0x40
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)));
    // add r0, #0x34
    // add r2, #0x34
    // add r2, r2, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r4, r2, r1
    ov08_0221E244(r5, *((u16*)(r5 + (*((u8*)*((u32*)r5)) << 3))), 1, *((u32*)(ov08_02224FE0 + (*((u8*)*((u32*)r5)) << 2))));
    ov08_0221F07C(r5, 3, *((u8*)(r4 + 2)), *((u8*)(r4 + 3)));
    GetMoveAttr(*((u16*)(r1 + 0x24)), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov08_0221E244(r5, *((u16*)(*((u32*)r5) + 0x24)), 1, 0x49);
    ov08_0221F07C(r5, 3, r4, r4);
    ov08_0221F1B0(r5, 6);
}





void ov08_022201C0(void) {
    // add r0, r4, r0
    DrawFrameAndWindow2(0x00002060, 1, 1, 0xe);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x00002060, 0xf);
    ov08_022201E8(r4);
}





void ov08_022201E8(void) {
    TextFlags_SetCanABSpeedUpPrint(1);
    BattleSystem_GetTextFrameDelay(*((u32*)(*((u32*)r4) + 8)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r4, r2
    // sub r2, #0xb0
    AddTextPrinterParameterized(1, *((u32*)(r4 + 0x00002060)), 0);
    // strb r0, [r4, r1]
}





void ov08_02220224(void) {
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    LoadItemDataOrGfx(*((u16*)(*((u32*)r0) + 0x22)), 0, *((u32*)(r2 + 0xc)));
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // add r2, r2, r3
    // add r2, #0x2c
    BattleSystem_GetPartyMon(*((u32*)(r0 + 8)), *((u32*)(r1 + 0x28)), *((u8*)r2), *((u8*)(r2 + 0x11)));
    GetMonData(0xa3, 0);
    // str r0, [sp, #8]
    GetItemAttr_PreloadedItemData(r6, 0xf);
    GetItemAttr_PreloadedItemData(r6, 0x10);
    GetItemAttr_PreloadedItemData(r6, 0x11);
    GetItemAttr_PreloadedItemData(r6, 0x12);
    GetItemAttr_PreloadedItemData(r6, 0x13);
    GetItemAttr_PreloadedItemData(r6, 0x14);
    GetItemAttr_PreloadedItemData(r6, 0x15);
    // ldr r0, [sp, #0xc]
    // add r0, r5, r0
    // ldr r0, [sp, #8]
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x58);
    Mon_GetBoxMon(r7);
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
    // ldr r0, [sp, #8]
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x52);
    Mon_GetBoxMon(r7);
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // str r1, [sp, #4]
    // add r2, r5, r2
    // ldr r2, [sp, #8]
    // sub r2, r2, r3
    BufferIntegerAsString(*((u32*)(r5 + 0x00001FAC)), 1, (0x50 * *((u8*)(r2 + 0x11))), 3);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
    GetItemAttr_PreloadedItemData(r6, 0x24);
    GetItemAttr_PreloadedItemData(r6, 0x25);
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + 0x00001FA8)), 0x57, *((u32*)(r5 + 0x00001FA8)));
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x5c);
    Mon_GetBoxMon(r7);
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
    NewString_ReadMsgData(*((u32*)(r5 + r0)), 0x53);
    Mon_GetBoxMon(r7);
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
    NewString_ReadMsgData(*((u32*)(r5 + r0)), 0x55);
    Mon_GetBoxMon(r7);
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
    NewString_ReadMsgData(*((u32*)(r5 + r0)), 0x56);
    Mon_GetBoxMon(r7);
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
    NewString_ReadMsgData(*((u32*)(r5 + r0)), 0x54);
    Mon_GetBoxMon(r7);
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
    NewString_ReadMsgData(*((u32*)(r5 + r0)), 0x5a);
    Mon_GetBoxMon(r7);
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
    NewString_ReadMsgData(*((u32*)(r5 + r0)), 0x5b);
    Mon_GetBoxMon(r7);
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
    NewString_ReadMsgData(*((u32*)(r5 + r0)), 0x59);
    Mon_GetBoxMon(r7);
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
    Heap_Free(r6);
}





void ov08_0222057C(void) {
    // add r2, r3, r2
    // add r2, #0x2c
    BattleSystem_GetPartyMon(*((u32*)(*((u32*)r0) + 8)), *((u32*)(*((u32*)r0) + 0x28)), *((u8*)*((u8*)(*((u32*)r0) + 0x11))), *((u32*)r0));
    NewString_ReadMsgData(*((u32*)(r5 + 0x00001FA8)), 0x5f);
    Mon_GetBoxMon(r6);
    BufferBoxMonNickname(*((u32*)(r5 + 0x00001FAC)), 0, r0);
    BufferMoveName(*((u32*)(r5 + 0x00001FAC)), 1, MOVE_EMBARGO);
    StringExpandPlaceholders(*((u32*)(r5 + 0x00001FAC)), *((u32*)(r5 + (0x00001FAC + 4))), r4);
    String_Delete(r4);
}





void ov08_022205E0(void) {
}





void ov08_0222061C(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    BattleSystem_GetSpriteSystem(*((u32*)(*((u32*)r0) + 8)), ov08_0222541C);
    SpriteManager_New();
    // str r0, [r5, r1]
    SpriteSystem_InitSprites(r4, *((u32*)(r5 + 0x00001FB4)), 0x2b);
    // add r2, sp, #0
    SpriteSystem_InitManagerWithCapacities(r4, *((u32*)(r5 + 0x00001FB4)));
}





void ov08_02220668(void) {
    NARC_New(0x14, *((u32*)(*((u32*)r0) + 0xc)));
    BattleSystem_GetSpriteSystem(*((u32*)(*((u32*)r6) + 8)));
    // str r0, [sp, #0x18]
    sub_02074490();
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r6 + (0x7a << 2))), 3, *((u32*)(r6 + 0x00001FB4)));
    sub_02074498();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadCellResObjFromOpenNarc(0x0000B007, *((u32*)(r6 + 0x00001FB4)), r7, r0);
    sub_020744A4();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadAnimResObjFromOpenNarc(0x0000B007, *((u32*)(r6 + 0x00001FB4)), r7, r0);
    Pokemon_GetIconNaix(*((u32*)(r6 + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadCharResObjFromOpenNarc(0x0000B007, *((u32*)(r6 + 0x00001FB4)), r7, r0);
    GetMonIconNaixEx(0, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadCharResObjFromOpenNarc(0x0000B007, *((u32*)(r6 + 0x00001FB4)), r7, r0);
    // add r5, #0x50
    NARC_Delete(r7);
}





void ov08_02220750(void) {
    BattleSystem_GetSpriteSystem(*((u32*)(*((u32*)r0) + 8)));
    NARC_New(0x27, *((u32*)(*((u32*)r5) + 0xc)));
    sub_0208AD58();
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r5 + (0x7a << 2))), 3, r4, *((u32*)(r5 + 0x00001FB4)));
    sub_0208AD5C();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r4, *((u32*)(r5 + 0x00001FB4)), r6, r0);
    sub_0208AD60();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r4, *((u32*)(r5 + 0x00001FB4)), r6, r0);
    sub_0208AD54();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r4, *((u32*)(r5 + 0x00001FB4)), r6, r0);
    NARC_Delete(r6);
}





void ov08_02220800(void) {
    BattleSystem_GetSpriteSystem(*((u32*)(*((u32*)r0) + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_02077720(*((u32*)(r5 + (0x7a << 2))), 3, r0, *((u32*)(r5 + 0x00001FB4)));
    sub_0207775C(r6, *((u32*)(r5 + 0x00001FB4)), 0x0000B009, 0x0000B009);
    // str r4, [sp]
    sub_020776B8(r6, *((u32*)(r5 + 0x00001FB4)), 2, 0);
    // str r0, [sp]
    sub_02077834(r6, *((u32*)(r5 + 0x00001FB4)), 2, 0);
}





void ov08_02220878(void) {
    NARC_New(0x15, *((u32*)(*((u32*)r0) + 0xc)));
    BattleSystem_GetSpriteSystem(*((u32*)(*((u32*)r5) + 8)));
    sub_0207CAA0();
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r5 + (0x7a << 2))), 3, r6, *((u32*)(r5 + 0x00001FB4)));
    sub_0207CAA4();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, *((u32*)(r5 + 0x00001FB4)), r4, r0);
    sub_0207CAA8();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, *((u32*)(r5 + 0x00001FB4)), r4, r0);
    sub_0207CA9C();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, *((u32*)(r5 + 0x00001FB4)), r4, r0);
    NARC_Delete(r4);
}





void ov08_02220928(void) {
    BattleSystem_GetSpriteSystem(*((u32*)(*((u32*)r0) + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(*((u32*)(r5 + (0x7a << 2))), 3, r0, *((u32*)(r5 + 0x00001FB4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(r4, *((u32*)(r5 + 0x00001FB4)), 0x47, 0x19);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(r4, *((u32*)(r5 + 0x00001FB4)), 0x47, 0x18);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(r4, *((u32*)(r5 + 0x00001FB4)), 0x47, 0x1a);
}





void ov08_022209B8(void) {
    BattleSystem_GetSpriteSystem(*((u32*)(*((u32*)r0) + 8)));
    // add r1, sp, #0
    // strh r2, [r1]
    *((u16*)(r1 + 2)) = 0;
    *((u16*)(r1 + 4)) = 0;
    *((u16*)(r1 + 6)) = 0;
    // str r2, [sp, #0xc]
    // str r3, [sp, #8]
    // str r3, [sp, #0x10]
    // str r2, [sp, #0x30]
    // add r2, sp, #0
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x2c]
    SpriteSystem_NewSprite(*((u32*)(r5 + 0x00001FB4)), 0, ov08_02225650);
}





void ov08_02220A28(void) {
    ov08_022209B8(r0, 0);
    // str r0, [r5, r7]
    ov08_02220AAC(r6);
}





void ov08_02220A50(void) {
    BattleSystem_GetSpriteSystem(*((u32*)(*((u32*)r0) + 8)));
    // str r0, [sp]
    Sprite_DeleteAndFreeResources(*((u32*)(r7 + 0x00001FB8)));
    ov08_02221698(r7);
    // ldr r0, [sp]
    SpriteSystem_FreeResourcesAndManager(*((u32*)(r7 + 0x00001FB4)));
}





void ov08_02220A8C(void) {
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
}





void ov08_02220AAC(void) {
    // add r4, #0x1b
    // add r1, #0x32
    GetMonIconPaletteEx(*((u16*)(r0 + 8)), *((u8*)r0), ((*((u8*)r0) << 0x18) >> 0x1f));
    ManagedSprite_SetPaletteOverride(*((u32*)(r6 + 0x00001FD4)), r0);
    // add r5, #0x50
    // add r4, #0x50
}





void ov08_02220AEC(void) {
    BattleSystem_GetSpriteSystem(*((u32*)(*((u32*)r0) + 8)));
    // str r0, [sp, #8]
    sub_020776B4();
    // str r0, [sp, #0xc]
    sub_02077678(r6);
    // str r0, [sp]
    // str r4, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #0xc]
    SpriteSystem_ReplaceCharResObj(1, *((u32*)(r5 + 0x00001FB4)), r0);
    sub_0207769C(r6);
    ManagedSprite_SetPaletteOverride(r7, (r0 + 4));
}





void ov08_02220B3C(void) {
    BattleSystem_GetSpriteSystem(*((u32*)(*((u32*)r0) + 8)));
    sub_02077830();
    // str r0, [sp, #8]
    sub_02077800(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #8]
    SpriteSystem_ReplaceCharResObj(r7, *((u32*)(r5 + 0x00001FB4)), r0);
    sub_02077818(r4);
    ManagedSprite_SetPaletteOverride(r6, (r0 + 4));
}





void ov08_02220B90(void) {
}





void ov08_02220BB4(void) {
    ov08_02220AEC(*((u32*)(r0 + 0x00002004)), 0x0000B00E, *((u8*)(r1 + 0x14)));
    ov08_02220A8C(*((u32*)(r5 + 0x00002004)), *((u32*)r6), *((u32*)(r6 + 4)));
    ov08_02220AEC(r5, *((u32*)(r5 + 0x00002008)), 0x0000B00F, *((u8*)(r4 + 0x15)));
    ov08_02220A8C(*((u32*)(r5 + 0x00002008)), *((u32*)(r6 + 8)), *((u32*)(r6 + 0xc)));
}





void ov08_02220C08(void) {
}





void ov08_02220C3C(void) {
}





void ov08_02220C5C(void) {
    // str r1, [sp]
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0x00001FB8)), 0);
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02220C8A: ; jump table
    ov08_02220CF4(r6);
    ov08_02220D90(r6);
    ov08_02220DE8(r6);
    ov08_02220E80(r6);
    ov08_02220F58(r6);
    ov08_0222114C(r6);
    ov08_0222101C(r6);
    ov08_02221088(r6);
    ov08_02221230(r6);
    ov08_022211B8(r6);
}





void ov08_02220CF4(void) {
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, #0x1b
    // str r0, [sp]
    ov08_02220A8C(*((u32*)(r0 + 0x00001FD4)), *((u32*)ov08_02225534), *((u32*)(ov08_02225534 + 4)));
    // ldr r0, [sp]
    ov08_02220B90(((*((u8*)r0) << 0x19) >> 0x1c), *((u32*)(r5 + 0x00001FEC)), *((u32*)r7), *((u32*)(r7 + 4)));
    // add r2, #8
    // add r3, #8
    ov08_02220C08(*((u16*)(r6 + 0x1e)), *((u32*)(r5 + 0x00001FB8)), *((u32*)r4), *((u32*)(r4 + 4)));
    // add r0, #0x31
    // add r2, #0x10
    // add r3, #8
    ov08_02220C3C(*((u8*)r6), *((u32*)(r5 + 0x00002038)), *((u32*)r4), *((u32*)(r4 + 4)));
    // ldr r0, [sp]
    // add r6, #0x50
    // add r0, #0x50
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r4, #8
    // add r7, #8
    // str r0, [sp, #4]
}





void ov08_02220D90(void) {
    // add r4, r1, r0
    // add r1, r5, r0
    ov08_02220A8C(*((u32*)((r0 + 4) + 0x00001FB8)), 0x80, 0x48);
    // add r2, r5, r1
    ov08_02220C08(*((u16*)(r4 + 0x1a)), *((u32*)(r2 + 0x00001FB8)), 0x88, 0x50);
    // add r4, #0x2d
    // add r1, #0x20
    // add r2, r5, r1
    ov08_02220C3C(*((u8*)r4), *((u32*)(r2 + 0x00001FB8)), 0x90, 0x50);
}





void ov08_02220DE8(void) {
    // add r4, r1, r0
    // add r1, r5, r0
    ov08_02220A8C(*((u32*)((r0 + 4) + 0x00001FB8)), 0x18, 0xc);
    // add r1, #0xd
    // add r2, r5, r1
    ov08_02220B90(((*((u8*)(r4 + 0x17)) << 0x19) >> 0x1c), *((u32*)(r2 + 0x00001FB8)), 0xc6, 0x14);
    ov08_02220BB4(r5, r4, ov08_022253F4);
    // add r2, r5, r1
    ov08_02220C08(*((u16*)(r4 + 0x1a)), *((u32*)(r2 + 0x00001FB8)), 0x20, 0x14);
    // add r0, #0x2d
    // add r1, #0x20
    // add r2, r5, r1
    ov08_02220C3C(*((u8*)r4), *((u32*)(r2 + 0x00001FB8)), 0x28, 0x14);
    ov08_02220C08(*((u16*)(r4 + 0x1a)), *((u32*)(r5 + 0x00001FD0)), 0x14, 0x84);
}





void ov08_02220E80(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // add r4, r1, r0
    // ldr r0, [sp]
    // add r1, r0, r1
    ov08_02220A8C(*((u32*)(((*((u8*)(*((u32*)r0) + 0x11)) + 7) << 2) + 0x00001FB8)), 0x18, 0xc);
    // ldr r1, [sp]
    // add r1, #0xd
    // ldr r1, [sp]
    // add r2, r1, r2
    ov08_02220B90(((*((u8*)(r4 + 0x17)) << 0x19) >> 0x1c), *((u32*)((*((u8*)(*((u32*)r1) + 0x11)) << 2) + 0x00001FB8)), 0xc6, 0x14);
    // ldr r0, [sp]
    ov08_02220BB4(r4, ov08_022253D4);
    // ldr r1, [sp]
    // ldr r1, [sp]
    // add r2, r1, r2
    ov08_02220C08(*((u16*)(r4 + 0x1a)), *((u32*)((*((u8*)(*((u32*)r1) + 0x11)) << 2) + 0x00001FB8)), 0x20, 0x14);
    // ldr r1, [sp]
    // add r0, #0x2d
    // add r1, #0x20
    // ldr r1, [sp]
    // add r2, r1, r2
    ov08_02220C3C(*((u8*)r4), *((u32*)((*((u8*)(*((u32*)r1) + 0x11)) << 2) + 0x00001FB8)), 0x28, 0x14);
    // ldr r5, [sp]
    // add r3, #0x34
    // ldr r0, [sp]
    // add r2, r7, r2
    ov08_02220AEC(*((u16*)(r4 + 0x30)), *((u32*)(r5 + 0x0000200C)), 0x0000B010, *((u8*)r4));
    ov08_02220A8C(*((u32*)(r5 + 0x0000200C)), *((u32*)r6), *((u32*)(r6 + 4)));
    // add r4, #8
    // add r6, #8
}





void ov08_02220F58(void) {
    // add r4, r1, r0
    // add r1, r5, r0
    ov08_02220A8C(*((u32*)((r0 + 4) + 0x00001FB8)), 0x18, 0xc);
    // add r1, #0xd
    // add r2, r5, r1
    ov08_02220B90(((*((u8*)(r4 + 0x17)) << 0x19) >> 0x1c), *((u32*)(r2 + 0x00001FB8)), 0xc6, 0x14);
    ov08_02220BB4(r5, r4, ov08_022253E4);
    // add r0, #0x34
    // add r0, #0x15
    // add r1, r5, r0
    ov08_02220A8C(*((u32*)(r1 + 0x00001FB8)), 0x88, 0x30);
    // add r2, r5, r1
    ov08_02220C08(*((u16*)(r4 + 0x1a)), *((u32*)(r2 + 0x00001FB8)), 0x20, 0x14);
    // add r0, #0x2d
    // add r1, #0x20
    // add r2, r5, r1
    ov08_02220C3C(*((u8*)r4), *((u32*)(r2 + 0x00001FB8)), 0x28, 0x14);
    // add r2, #0x34
    // add r2, r4, r2
    // add r2, #0x35
    ov08_02220B3C(r5, *((u32*)(r5 + 0x00002020)), *((u8*)(*((u8*)*((u32*)r5)) << 3)));
    ov08_02220A8C(*((u32*)(r5 + 0x00002020)), 0x18, 0x58);
}





void ov08_0222101C(void) {
    // add r4, r1, r0
    // add r1, r5, r0
    ov08_02220A8C(*((u32*)((r0 + 4) + 0x00001FB8)), 0x18, 0xc);
    ov08_02220BB4(r5, r4, ov08_022253C4);
    // add r2, r5, r1
    ov08_02220C08(*((u16*)(r4 + 0x1a)), *((u32*)(r2 + 0x00001FB8)), 0x20, 0x14);
    // add r4, #0x2d
    // add r1, #0x20
    // add r2, r5, r1
    ov08_02220C3C(*((u8*)r4), *((u32*)(r2 + 0x00001FB8)), 0x28, 0x14);
    ov08_022213C8(r5);
}





void ov08_02221088(void) {
    // add r4, r1, r0
    // add r1, r5, r0
    ov08_02220A8C(*((u32*)((r0 + 4) + 0x00001FB8)), 0x18, 0xc);
    ov08_02220BB4(r5, r4, ov08_022253B4);
    // add r0, #0x34
    // add r0, #0x15
    // add r1, r5, r0
    ov08_02220A8C(*((u32*)(r1 + 0x00001FB8)), 0x88, 0x30);
    // add r2, r5, r1
    ov08_02220C08(*((u16*)(r4 + 0x1a)), *((u32*)(r2 + 0x00001FB8)), 0x20, 0x14);
    // add r0, #0x2d
    // add r1, #0x20
    // add r2, r5, r1
    ov08_02220C3C(*((u8*)r4), *((u32*)(r2 + 0x00001FB8)), 0x28, 0x14);
    // add r0, #0x34
    // add r2, r4, r2
    // add r2, #0x35
    ov08_02220B3C(r5, *((u32*)(r5 + 0x00002020)), *((u8*)(*((u8*)*((u32*)r5)) << 3)));
    GetMoveAttr(*((u16*)(r1 + 0x24)), 1);
    ov08_02220B3C(r5, *((u32*)(r5 + 0x00002020)), r0);
    ov08_02220A8C(*((u32*)(r5 + 0x00002020)), 0x18, 0x58);
}





void ov08_0222114C(void) {
    // add r4, r1, r0
    // add r1, r5, r0
    ov08_02220A8C(*((u32*)((r0 + 4) + 0x00001FB8)), 0x18, 0xc);
    ov08_02220BB4(r5, r4, ov08_022253C4);
    // add r2, r5, r1
    ov08_02220C08(*((u16*)(r4 + 0x1a)), *((u32*)(r2 + 0x00001FB8)), 0x20, 0x14);
    // add r4, #0x2d
    // add r1, #0x20
    // add r2, r5, r1
    ov08_02220C3C(*((u8*)r4), *((u32*)(r2 + 0x00001FB8)), 0x28, 0x14);
    ov08_022213C8(r5);
}





void ov08_022211B8(void) {
    // add r4, r1, r0
    // add r1, r5, r0
    ov08_02220A8C(*((u32*)((r0 + 4) + 0x00001FB8)), 0x18, 0xc);
    // add r0, #0x34
    // add r0, #0x15
    // add r1, r5, r0
    ov08_02220A8C(*((u32*)(r1 + 0x00001FB8)), 0x88, 0x48);
    // add r2, r5, r1
    ov08_02220C08(*((u16*)(r4 + 0x1a)), *((u32*)(r2 + 0x00001FB8)), 0x20, 0x14);
    // add r4, #0x2d
    // add r1, #0x20
    // add r2, r5, r1
    ov08_02220C3C(*((u8*)r4), *((u32*)(r2 + 0x00001FB8)), 0x28, 0x14);
    ov08_02221500(r5);
}





void ov08_02221230(void) {
    // add r4, r1, r0
    // add r1, r5, r0
    ov08_02220A8C(*((u32*)((r0 + 4) + 0x00001FB8)), 0x18, 0xc);
    // add r2, r5, r1
    ov08_02220C08(*((u16*)(r4 + 0x1a)), *((u32*)(r2 + 0x00001FB8)), 0x20, 0x14);
    // add r4, #0x2d
    // add r1, #0x20
    // add r2, r5, r1
    ov08_02220C3C(*((u8*)r4), *((u32*)(r2 + 0x00001FB8)), 0x28, 0x14);
    ov08_022213C8(r5);
    ov08_02221500(r5);
}





void ov08_02221294(void) {
    // add r0, r2, r0
    // str r0, [sp]
    // ldr r0, [sp]
    // add r3, r0, r5
    // add r3, #0x34
    // add r7, r6, r0
    // add r2, r4, r2
    ov08_02220AEC(r0, *((u32*)(r7 + 0x0000200C)), 0x0000B010, *((u8*)r3));
    // add r2, r0, r5
    ov08_02220A8C(*((u32*)(r7 + 0x0000200C)), *((u32*)(ov08_0222550C + r5)), *((u32*)(r2 + 4)));
    GetMoveAttr(*((u16*)(*((u32*)r6) + 0x24)), 3);
    ov08_02220AEC(r6, *((u32*)(r6 + 0x0000201C)), 0x0000B014, ((r0 << 0x18) >> 0x18));
    ov08_02220A8C(*((u32*)(r6 + 0x0000201C)), 0x58, 0xb0);
}





void ov08_02221328(void) {
    // add r0, r2, r0
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, r0, r5
    // add r6, r7, r1
    GetMoveAttr(*((u16*)((0x50 * *((u8*)(*((u32*)r0) + 0x11))) + 0x30)), 0xb, (r0 + 4));
    // add r3, #0x12
    // add r2, r4, r2
    ov08_02220AEC(r7, *((u32*)(r6 + 0x0000200C)), 0x0000B010, ((r0 << 0x18) >> 0x18));
    // add r2, r0, r5
    ov08_02220A8C(*((u32*)(r6 + 0x0000200C)), *((u32*)(ov08_0222550C + r5)), *((u32*)(r2 + 4)));
    GetMoveAttr(*((u16*)(*((u32*)r7) + 0x24)), 0xb);
    // add r3, #0x12
    ov08_02220AEC(r7, *((u32*)(r7 + 0x0000201C)), 0x0000B014, ((r0 << 0x18) >> 0x18));
    ov08_02220A8C(*((u32*)(r7 + 0x0000201C)), 0x58, 0xb0);
}





void ov08_022213C8(void) {
    ov08_02221294(((*((u8*)(r0 + 0x00002077)) << 0x1c) >> 0x1c));
    ov08_02221328();
}





void ov08_022213E4(void) {
}





void ov08_02221404(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222143C: ; jump table
}





void ov08_0222145C(void) {
    Party_GetCount(*((u32*)*((u32*)r0)));
    // add r0, r5, r1
    // add r0, r7, r1
    ov08_02221404(*((u16*)(0x50 + 8)), (r4 * 0x50));
    // add r6, r5, r0
    ov08_022213E4(*((u32*)(r6 + 0x00001FD4)), ((r0 << 0x18) >> 0x18));
    ManagedSprite_TickNFrames(*((u32*)(r6 + 0x00001FD4)), (1 << 0xc));
    Party_GetCount(*((u32*)*((u32*)r5)));
}





void ov08_022214BC(void) {
    // add r0, #0x2c
    // sub r1, r4, r1
    // asr r0, r0, #0x10
    // sub r0, r4, r0
    // asr r0, r0, #0x10
    // add r0, #0x2c
    // sub r1, r1, r4
    // asr r0, r0, #0x10
    // add r0, r4, r0
    // asr r0, r0, #0x10
}





void ov08_02221500(void) {
    ov08_022213E4(*((u32*)(r0 + 0x00002024)), 0);
    ov08_022213E4(*((u32*)(r6 + 0x00002028)), 1);
    ov08_022213E4(*((u32*)(r6 + 0x0000202C)), 3);
    ov08_022213E4(*((u32*)(r6 + 0x00002030)), 4);
    ov08_022213E4(*((u32*)(r6 + 0x00002034)), 2);
    // add r0, r5, r4
    // add r0, #0x28
    ov08_022214BC(*((u8*)r0), 0x90, 0x90);
    // add r0, r5, r4
    // add r0, #0x28
    ov08_022214BC(*((u8*)r0), 2, 0x18);
    ov08_02220A8C(*((u32*)(r6 + 0x00002024)), r7, r0);
    // add r0, r5, r4
    // add r0, #0x29
    ov08_022214BC(*((u8*)r0), 0xa4, 0x90);
    // add r0, r5, r4
    // add r0, #0x29
    ov08_022214BC(*((u8*)r0), 0x10, 0x18);
    ov08_02220A8C(*((u32*)(r6 + 0x00002028)), r7, r0);
    // add r0, r5, r4
    // add r0, #0x2a
    ov08_022214BC(*((u8*)r0), 0x9c, 0x90);
    // add r0, r5, r4
    // add r0, #0x2a
    ov08_022214BC(*((u8*)r0), 0x29, 0x18);
    ov08_02220A8C(*((u32*)(r6 + 0x0000202C)), r7, r0);
    // add r0, r5, r4
    // add r0, #0x2b
    ov08_022214BC(*((u8*)r0), 0x83, 0x8f);
    // add r0, r5, r4
    // add r0, #0x2b
    ov08_022214BC(*((u8*)r0), 0x29, 0x18);
    ov08_02220A8C(*((u32*)(r6 + 0x00002030)), r7, r0);
    // add r0, r5, r4
    // add r0, #0x2c
    ov08_022214BC(*((u8*)r0), 0x7b, 0x8f);
    // add r0, r5, r4
    // add r0, #0x2c
    ov08_022214BC(*((u8*)r0), 0x10, 0x18);
    ov08_02220A8C(*((u32*)(r6 + 0x00002034)), r7, r0);
}





void ov08_0222162C(void) {
    BattleSystem_GetSpriteSystem(*((u32*)(*((u32*)r0) + 8)));
    // str r1, [sp]
    // sub r1, #0xc
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    BattleCursor_LoadResources(*((u32*)(r5 + 0x00001FB4)), *((u32*)(r5 + (0x7a << 2))), *((u32*)(*((u32*)r5) + 0xc)));
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r3, #0xc
    BattleCursor_New(r4, *((u32*)(r5 + 0x00001FB4)), *((u32*)(*((u32*)r5) + 0xc)), 0x0000B00C);
    ov08_02224B94(*((u32*)(r5 + 0x00002088)), r0);
}





void ov08_02221698(void) {
    ov08_02224B84(*((u32*)(r0 + 0x00002088)));
    BattleCursor_Delete();
    // str r2, [sp]
    // add r1, #0xc
    BattleCursor_FreeResources(*((u32*)(r4 + 0x00001FB4)), 0x0000B00C, 0x0000B00C, 0x0000B00C);
}





void ov08_022216CC(void) {
    // add r1, #0x11
    ov08_02224BF8(*((u32*)(r0 + 0x00002077)), 0x5f, ((*((u8*)(r0 + 0x00002077)) << 0x18) >> 0x1c));
    // add r1, #0x11
    ov08_02224BF8(*((u32*)(r0 + r1)), 0x7f);
}





void ov08_022216F4(void) {
    // add r1, #0x11
    ov08_02224BF8(*((u32*)(r0 + 0x00002077)), 5, ((*((u8*)(r0 + 0x00002077)) << 0x18) >> 0x1c));
    // add r1, #0x11
    ov08_02224BF8(*((u32*)(r0 + r1)), 7);
}





void ov08_0222171C(void) {
    ov08_02224BCC(*((u32*)(r0 + 0x00002088)), *((u32*)(ov08_022254BC + (r1 << 2))), (r1 << 2));
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221740: ; jump table
    ov08_02224B98(*((u32*)(r4 + 0x00002088)), *((u8*)(*((u32*)r4) + 0x11)));
    // strb r1, [r4, r0]
    // add r0, #0x34
    // strb r1, [r0]
    ov08_02224B98(*((u32*)(r4 + 0x00002088)), *((u8*)(r4 + (0x00002088 + 4))));
    // add r0, #0x34
    // strb r1, [r0]
    // add r1, #0x34
    ov08_02224B98(*((u32*)(r4 + 0x00002088)), *((u8*)*((u32*)r4)));
    ov08_022216CC(r4);
    ov08_02224B98(*((u32*)(r4 + 0x00002088)), *((u8*)(r4 + (0x00002088 + 5))));
    ov08_022216F4(r4);
    ov08_02224B98(*((u32*)(r4 + 0x00002088)), *((u8*)(r4 + (0x00002088 + 6))));
}





void ov08_022217C8(void) {
    ov08_02224B90(*((u32*)(r0 + 0x00002088)), 0);
    ov08_02224BC0(*((u32*)(r4 + 0x00002088)));
    ov08_02224B84(*((u32*)(r4 + 0x00002088)));
    BattleCursor_Disable();
}





void ov08_022217F0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0((0x7b << 2), 0, 0);
    // str r0, [sp]
    // add r0, r5, r0
    // str r3, [sp, #4]
    ov08_02221BD0((0xab << 2), r4, 0, 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0((0xdb << 2), r4, 0, 0xc);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x0000042C, r4, 0, 0x12);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x000004EC, r4, 0x10, 0);
    // str r2, [sp]
    // add r0, r5, r0
    // str r3, [sp, #4]
    ov08_02221BD0(0x000005AC, r4, 0x10, 6);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x0000066C, r4, 0x10, 0xc);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x0000072C, r4, 0x10, 0x12);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x000007EC, r4, 0, 0x27);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x0000086E, r4, 0, 0x2c);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0((0x8f << 4), r4, 0xd, 0x27);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00000972, r4, 0xd, 0x2c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x000009F4, r4, 0, 0x31);
    // str r2, [sp]
    // add r0, r5, r0
    // str r2, [sp, #4]
    ov08_02221BD0(0x00000A26, r4, 5, 0x31);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00000A58, r4, 0xa, 0x31);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00000A8A, r4, 0xf, 0x31);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00000ABC, r4, 0, 0x36);
    // str r2, [sp]
    // add r0, r5, r0
    // str r2, [sp, #4]
    ov08_02221BD0(0x00000AEE, r4, 5, 0x36);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0((0xb2 << 4), r4, 0xa, 0x36);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00000B52, r4, 0xf, 0x36);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00000B84, r4, 0x1a, 0x18);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00000BB6, r4, 0x1a, 0x1d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00000BE8, r4, 0x1a, 0x22);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00000C1A, r4, 0x1a, 0x27);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0((0x6d << 6), r4, 0, 0x18);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00001C44, r4, 0, 0x1d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00001D48, r4, 0, 0x22);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00001E4C, r4, 0x14, 0x31);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00001E94, r4, 0x14, 0x35);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00001EDC, r4, 0x14, 0x39);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00001F24, r4, 0, 0x3b);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00001F38, r4, 5, 0x3b);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00001F4C, r4, 0xa, 0x3b);
}





void ov08_02221B1C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00000C4C, 0, 0);
    // str r0, [sp]
    // add r0, r5, r0
    // str r3, [sp, #4]
    ov08_02221BD0(0x00001048, r4, 0, 0x11);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0(0x00001444, r4, 0, 0x22);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0((0x61 << 6), r4, 0, 0x33);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0((0x19 << 8), r4, 0x10, 0x33);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0((0x67 << 6), r4, 0, 0x39);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_02221BD0((0x6a << 6), r4, 0x10, 0x39);
}





void ov08_02221BD0(void) {
    // str r0, [sp]
    // add r0, sp, #8
    // mov lr, r3
    // mov ip, r3
    // add r7, r1, r2
    // mov r0, lr
    // add r0, r0, r6
    // add r5, r7, r0
    // ldr r0, [sp]
    // add r4, r0, r1
    // strh r0, [r4, r1]
    // mov r0, ip
}





void ov08_02221C20(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221C30: ; jump table
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r2, r0
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
}





void ov08_02221D2C(void) {
    // add r3, sp, #0x10
    // str r0, [sp]
    ov08_02221C20(r2, r3, *((u8*)(r3 + 0x10)));
    memcpy(r4, r0, ((*((u8*)(ov08_02225A56 + (r7 << 2))) * *((u8*)(ov08_02225A57 + (r7 << 2)))) << 1));
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221D6E: ; jump table
    // ldr r0, [sp]
    // add r0, r0, r1
    // add r0, sp, #4
    // strh r1, [r0]
    // add r1, r6, r2
    *((u16*)((((r6 << 1) + 5) << 1) + 2)) = *((u16*)(r4 + ((*((u16*)(r4 + (((r6 << 1) + 5) << 1))) + 5) << 1)));
    // add r0, sp, #4
    // add r5, r4, r5
    // add r7, r5, r7
    *((u16*)((0 << 1) + 0xc)) = *((u16*)((((r6 << 1) + 5) << 1) + (0 << 1)));
    // and r6, r2
    // strh r6, [r4, r0]
    // ldr r0, [sp]
    ov08_0221DB24(((0 + 1) << 0x18), (((0 << 1) << 0x18) >> 0x18), 0x00000FFF, (2 << 0xc));
    // and r6, r2
    // strh r6, [r4, r0]
    // and r6, r2
    // strh r6, [r4, r0]
}





void ov08_02221E6C(void) {
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    Heap_Alloc(*((u32*)(*((u32*)r0) + 0xc)), ((*((u8*)(ov08_02225A56 + (r0 << 2))) * *((u8*)(ov08_02225A57 + (r0 << 2)))) << 1));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    ov08_02221D2C(r5);
    // ldr r2, [sp, #0x18]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r7, [sp, #8]
    LoadRectToBgTilemapRect(*((u32*)(r5 + (0x79 << 2))), 6, *((u8*)(ov08_02225A54 + r4)));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + (0x79 << 2))), 6);
    // ldr r0, [sp, #0x18]
    Heap_Free();
}





void ov08_02221EE8(void) {
    // str r0, [sp]
    // str r0, [sp]
    // ldr r2, [sp]
    // add r0, r0, r1
    ScrollWindow(*((u32*)(r0 + 0x00002070)), 1, 0);
    // add r0, r0, r1
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x00002070)), (*((u8*)(r6 + *((u8*)(r5 + (0x00002070 + 5))))) << 4));
    // add r0, r1, r0
    // ldr r2, [sp]
    ScrollWindow((*((u8*)(r6 + 0)) << 4), r7, *((u8*)(r6 + 0)), 0);
    // add r0, r1, r0
    ScheduleWindowCopyToVram((*((u8*)(r6 + r4)) << 4), *((u32*)(r5 + 0x00002070)));
}





void ov08_02221F98(void) {
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221FAE: ; jump table
    // ldrsh r6, [r0, r1]
    // add r0, #0xd
    // add r1, r4, r0
    ManagedSprite_OffsetPositionXY(*((u32*)((r2 << 1) + 0x00001FB8)), 0, r6);
    // add r1, r4, r0
    ManagedSprite_OffsetPositionXY(*((u32*)(r1 + 0x00001FB8)), 0, r6);
    // add r1, r4, r0
    ManagedSprite_OffsetPositionXY(*((u32*)(r1 + 0x00001FB8)), 0, r6);
    // ldrsh r5, [r0, r1]
    // add r1, r4, r0
    ManagedSprite_OffsetPositionXY(*((u32*)((r2 << 1) + 0x00001FB8)), 0, r5);
    // add r1, r4, r0
    ManagedSprite_OffsetPositionXY(*((u32*)(r1 + 0x00001FB8)), 0, r5);
    // add r1, r4, r0
    // ldrsh r2, [r2, r3]
    ManagedSprite_OffsetPositionXY(*((u32*)(r1 + 0x00001FB8)), 0, ov08_022259C0, (r2 << 1));
    // add r1, r4, r0
    // ldrsh r2, [r2, r3]
    ManagedSprite_OffsetPositionXY(*((u32*)(r1 + 0x00001FB8)), 0, ov08_022259C0, (r2 << 1));
    // add r1, r4, r0
    // ldrsh r2, [r2, r3]
    ManagedSprite_OffsetPositionXY(*((u32*)(r1 + 0x00001FB8)), 0, ov08_022259C0, (r2 << 1));
}





void ov08_022220AC(void) {
    // strb r6, [r5, r3]
    ov08_0221D5DC(0x70, 0x00001FA3);
    // strb r0, [r5, r1]
    // strb r2, [r5, r0]
    // strb r2, [r5, r1]
    // strb r4, [r5, r1]
    // strb r1, [r5, r0]
}





void ov08_022220FC(void) {
    ov08_02221E6C(*((u8*)(r0 + (0x00001FA3 - 1))), 1, ((*((u8*)(r0 + 0x00001FA3)) << 0x19) >> 0x1d));
    ov08_02221EE8(r4, *((u8*)(r4 + 0x00001FA2)), 1);
    ov08_02221F98(r4, *((u8*)(r4 + 0x00001FA2)), 1);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    ov08_02221E6C((0x00001FA1 - 1), *((u8*)(r4 + (r2 - 1))), 2, ((r3 << 0x19) >> 0x1d));
    ov08_02221EE8(r4, *((u8*)(r4 + 0x00001FA2)), 2);
    ov08_02221F98(r4, *((u8*)(r4 + 0x00001FA2)), 2);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    ov08_02221E6C((0x00001FA1 - 1), *((u8*)(r4 + (r2 - 1))), 0, ((r3 << 0x19) >> 0x1d));
    ov08_02221EE8(r4, *((u8*)(r4 + 0x00001FA2)), 0);
    ov08_02221F98(r4, *((u8*)(r4 + 0x00001FA2)), 0);
    // strb r1, [r4, r0]
    // strb r2, [r4, r0]
}





void ov08_022221CC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022221E2: ; jump table
    ov08_0221D5DC(r0, 0);
    ov08_02221E6C(r4, ((r5 << 0x18) >> 0x18), r6, r7);
    ov08_02221E6C(r4, ((r5 << 0x18) >> 0x18), 0, 0);
    ov08_02221E6C(r4, ((r5 << 0x18) >> 0x18), 0, 1);
    // add r0, #0x35
    ov08_02221E6C(r4, 6, 3, 0);
    ov08_02221E6C(r4, 6, 0, 0);
    ov08_02221E6C(6, 0, 0);
    ov08_02221E6C(r4, 7, 0, 0);
    // add r0, r4, r0
    ov08_02221E6C(r4, 8, 3, 0);
    ov08_02221E6C(r4, 0xa, 3, 0);
    ov08_02221E6C(r4, 8, 0, 0);
    ov08_02221E6C(r4, 0xa, 0, 0);
    ov08_02222564();
    ov08_02221E6C(r4, 0xc, 0, 0);
    ov08_02221E6C(r4, 0xd, 0, 0);
    ov08_02221E6C(r4, 0xc, 3, 0);
    ov08_02221E6C(r4, 0xd, 3, 0);
    ov08_02221E6C(r4, 0xb, 0, 0);
    ov08_02221E6C(r4, 6, 0, 0);
    ov08_02222564();
    ov08_02221E6C(r4, 0xc, 0, 0);
    ov08_02221E6C(r4, 0xd, 0, 0);
    ov08_02221E6C(r4, 0xc, 3, 0);
    ov08_02221E6C(r4, 0xd, 3, 0);
    // add r0, r4, r2
    // add r0, r1, r0
    // add r1, #0xe
    ov08_02221E6C(r4, ((0 << 0x18) >> 0x18), 0, 0);
    // add r1, #0xe
    ov08_02221E6C(r4, ((r5 << 0x18) >> 0x18), r7, 0);
    ov08_02221E6C(r4, 9, 0, 0);
    ov08_02221E6C(r4, 6, 0, 0);
    ov08_02221E6C(6, 0, 0);
    // add r0, #0x34
    // add r1, #0x1e
    ov08_02221E6C(r4, ((0 << 0x18) >> 0x18), 2, 0);
    // add r1, #0x1e
    ov08_02221E6C(r4, ((r5 << 0x18) >> 0x18), 0, 0);
    // add r0, r4, r2
    // add r0, r1, r0
    // add r1, #0x13
    ov08_02221E6C(r4, ((0 << 0x18) >> 0x18), 0, 0);
    // add r1, #0x13
    ov08_02221E6C(r4, ((r5 << 0x18) >> 0x18), r7, 0);
    ov08_02221E6C(r4, 6, 0, 0);
    ov08_02221E6C(0x17, 0, 0);
    ov08_02221E6C(r4, 0x18, 0, 0);
    ov08_02221E6C(r4, 0x19, 0, 0);
    ov08_02221E6C(r4, 0x1a, 0, 0);
    ov08_02221E6C(r4, 0x1b, 0, 0);
    ov08_02221E6C(r4, 6, 0, 0);
    ov08_02221E6C(r4, 0x12, 0, 0);
    ov08_02221E6C(0x1c, 0, 0);
    ov08_02221E6C(r4, 6, 0, 0);
    ov08_02221E6C(r4, 0x12, 0, 0);
    ov08_02221E6C(0x1d, 0, 0);
    ov08_02221E6C(r4, 6, 0, 0);
    ov08_02221E6C(r4, 0x12, 0, 0);
}





void ov08_02222524(void) {
    // str r0, [sp]
    // add r1, r2, r1
    PaletteData_LoadPalette(*((u32*)(r0 + (0x7a << 2))), (0x7e << 6), 1, 0xc0);
    // str r0, [sp]
    // add r1, r2, r1
    PaletteData_LoadPalette(*((u32*)(r2 + (0x7a << 2))), 0x00001F60, 1, 0xc0);
}





void ov08_02222564(void) {
    // add r5, r0, r4
}





void ov08_022225A4(void) {
}





void ov08_022225D4(void) {
    CreateSysTaskAndEnvironment(ov08_02222670, 0x0000115C, 0x64, *((u32*)(r0 + 0xc)));
    SysTask_GetData();
    memset(0, 0x0000115C);
    // str r5, [r4]
    BattleSystem_GetBgConfig(*((u32*)r5));
    *((u32*)(r4 + 4)) = r0;
    BattleSystem_GetPaletteData(*((u32*)r5));
    *((u32*)(r4 + 8)) = r0;
    // strb r1, [r4, r0]
    BattleSystem_GetBagCursor(*((u32*)r5), 0);
    // add r2, #0x27
    // add r3, #0x2c
    // add r2, r2, r5
    // add r3, r3, r5
    BagCursor_Battle_PocketGetPosition(r0, 0, *((u32*)r4), *((u32*)r4));
    BagCursor_Battle_GetLastUsedItem(r6);
    *((u16*)(*((u32*)r4) + 0x20)) = r0;
    BagCursor_Battle_GetLastUsedPocket(r6, *((u32*)r4));
    *((u8*)(*((u32*)r4) + 0x1f)) = r0;
    ov08_02223B78(r4, *((u32*)r4));
    BattleSystem_GetBattleType(*((u32*)*((u32*)r4)));
    // tst r0, r1
    *((u32*)(*((u32*)r4) + 0x14)) = 1;
}





void ov08_02222670(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02222688: ; jump table
    ov08_0222276C(r1, (*((u16*)(*((u8*)(r1 + 0x0000114A)) + 6)) << 0x10));
    // strb r0, [r4, r1]
    ov08_02222840(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222918(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222AF0(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222D78(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222D84(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222D90(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222A78(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222D9C(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222DAC(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222DC4(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222DEC(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222EC4(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222E04(r4, 0x0000114A);
    // strb r0, [r4, r1]
    ov08_02222E2C(0x0000114A);
    ov08_02224974(r4);
    SpriteSystem_DrawSprites(*((u32*)(r4 + (0xc3 << 2))));
}





void ov08_0222276C(void) {
    // strh r1, [r0]
    ov08_02224B64(*((u32*)(*((u32*)r0) + 0xc)), 0);
    *((u32*)(r4 + 0x34)) = r0;
    ov08_02223000(r4);
    ov08_022230F4(r4);
    ov08_022231E8(r4);
    FontID_Alloc(4, *((u32*)(*((u32*)r4) + 0xc)));
    BattleSystem_GetBagCursor(*((u32*)*((u32*)r4)));
    BagCursor_Battle_GetPocket();
    // strb r0, [r4, r1]
    ov08_02223BF4(r4, 0x0000114D);
    ov08_02224A50(r4, *((u8*)(r4 + 0x0000114C)));
    ov08_022233B8(r4);
    ov08_02223480(r4, *((u8*)(r4 + 0x0000114C)));
    ov08_02223D08(r4);
    ov08_02223F94(r4, *((u8*)(r4 + 0x0000114C)));
    // add r0, #0x25
    ov08_02224B90(*((u32*)(r4 + 0x34)), 1);
    ov08_02224134(r4, *((u8*)(r4 + 0x0000114C)));
    ov08_0222421C(r4, *((u8*)(r4 + 0x0000114C)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, #0x12
    PaletteData_BeginPaletteFade(*((u32*)(r4 + 8)), 0xa, 0x0000FFFF, 0xa);
}





void ov08_02222840(void) {
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r0 + 8)));
    ov08_02223368(r4, ov08_02225B4C);
    // mvn r0, r0
    ov08_02224C94(*((u32*)(r4 + 0x34)));
    // mvn r0, r0
    ov08_0222417C(r4);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222288E: ; jump table
    PlaySE(0x000005DD);
    // strb r1, [r4, r0]
    // strb r2, [r4, r0]
    ov08_02224938(r4, ((r5 << 0x18) >> 0x18), 0);
    PlaySE(0x000005DD);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    ov08_02223BA8(r4, 6);
    ov08_02224938(r4, 4, 0);
    PlaySE(0x000005DD);
    *((u16*)(*((u32*)r4) + 0x1c)) = 0;
    *((u8*)(*((u32*)r4) + 0x1e)) = 4;
    ov08_02224938(r4, 5, 0);
}





void ov08_02222918(void) {
    ov08_02223368(ov08_02225B68);
    // mvn r0, r0
    ov08_02224B8C(*((u32*)(r4 + 0x34)));
    ov08_02224B88(*((u32*)(r4 + 0x34)));
    ov08_02224C94(*((u32*)(r4 + 0x34)));
    ov08_02224B88(*((u32*)(r4 + 0x34)));
    // mvn r1, r1
    // tst r2, r1
    // tst r1, r2
    ov08_0222417C(r4, *((u32*)(gSystem + 0x4c)), 0x10);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022229A2: ; jump table
    ov08_02223CD4(r4, r5);
    PlaySE(0x000005DD);
    // add r1, r2, r1
    // add r1, #0x27
    // strb r5, [r1]
    // strb r1, [r4, r0]
    ov08_02224938(r4, (((r5 + 6) << 0x18) >> 0x18), 0);
    PlaySE(0x000005DD);
    // strb r1, [r4, r0]
    ov08_02224938(r4, 0xe, 0);
    // add r1, r4, r1
    PlaySE(0x000005DD, *((u8*)(r4 + 0x0000114D)));
    // strb r1, [r4, r0]
    // sub r1, #8
    // strb r1, [r4, r0]
    ov08_02224938(r4, 0xc, 0);
    // add r1, r4, r1
    PlaySE(0x000005DD, *((u8*)(r4 + 0x0000114D)));
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    ov08_02224938(r4, 0xd, 0);
}





void ov08_02222A78(void) {
    // add r5, r1, r2
    // ldrsb r2, [r5, r1]
    // add r5, #0x27
    // strb r3, [r5]
    // ldrsb r1, [r4, r1]
    // add r1, r2, r1
    // asr r2, r1, #0x18
    // add r5, r4, r1
    // add r0, r0, r1
    // add r0, #0x2c
    // strb r3, [r0]
    // add r0, r0, r1
    // add r0, #0x2c
    // strb r5, [r0]
    // add r0, r0, r1
    // add r0, #0x2c
    // strb r2, [r0]
    ov08_0222377C(r0, *((u8*)(r0 + 0x0000114D)), *((u8*)(r0 + 0x0000114D)), 0);
    ov08_022237C4(r4);
    ov08_02223F94(r4, *((u8*)(r4 + 0x0000114C)));
    ov08_02224A50(r4, *((u8*)(r4 + 0x0000114C)));
}





void ov08_02222AF0(void) {
    ov08_02223368(ov08_02225ADC);
    // mvn r0, r0
    ov08_02224C94(*((u32*)(r5 + 0x34)));
    // mvn r0, r0
    ov08_0222417C(r5);
    PlaySE(0x000005DD);
    // add r1, r2, r1
    // add r1, #0x27
    ov08_02223CD4(r5, *((u8*)*((u8*)(r5 + 0x0000114D))), *((u32*)r5));
    *((u16*)(*((u32*)r5) + 0x1c)) = r0;
    *((u8*)(*((u32*)r5) + 0x1e)) = *((u8*)(r5 + 0x0000114D));
    ov08_02224938(r5, 0xf, 0);
    ov08_02222B8C(r5);
    PlaySE(0x000005DD);
    // strb r1, [r5, r0]
    ov08_02224938(r5, 0x10, 0);
}





void ov08_02222B8C(void) {
    ov08_02223374(*((u8*)(r0 + 0x0000114D)));
    GetItemAttr(*((u16*)(r4 + 0x1c)), 7, *((u32*)(r4 + 0xc)));
    BattleSystem_GetPartyMon(*((u32*)r4), *((u32*)(r4 + 0x10)), r7);
    NewString_ReadMsgData(*((u32*)(r5 + 0x10)), 0x2e);
    Mon_GetBoxMon(r6);
    BufferBoxMonNickname(*((u32*)(r5 + 0x14)), 0, r0);
    BufferMoveName(*((u32*)(r5 + 0x14)), 1, MOVE_EMBARGO);
    StringExpandPlaceholders(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x18)), r4);
    String_Delete(r4);
    ov08_02223B20(r5);
    // strb r1, [r5, r0]
    // str r0, [sp]
    BattleSystem_RecoverStatus(*((u32*)r4), *((u32*)(r4 + 0x10)), r7, 0);
    ov08_02223390(*((u32*)r4), *((u16*)(r4 + 0x1c)), *((u8*)(r5 + 0x0000114D)), *((u32*)(r4 + 0xc)));
    BattleSystem_GetBattleType(*((u32*)r4));
    // tst r0, r1
    ov08_02223390(*((u32*)r4), *((u16*)(r4 + 0x1c)), *((u8*)(r5 + 0x0000114D)), *((u32*)(r4 + 0xc)));
    NewMsgDataFromNarc(r1, 0x1b, 0x28, *((u32*)(r4 + 0xc)));
    NewString_ReadMsgData(0x25);
    BufferPlayersName(*((u32*)(r5 + 0x14)), 0, *((u32*)(r4 + 4)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x18)), r6);
    String_Delete(r6);
    DestroyMsgData(r7);
    ov08_02223B20(r5);
    // strb r1, [r5, r0]
    ReadMsgDataIntoString(*((u32*)(r5 + 0x10)), 0x22, *((u32*)(r5 + 0x18)));
    ov08_02223B20(r5);
    // strb r1, [r5, r0]
    // add r0, #0x22
    ReadMsgDataIntoString(*((u32*)(r5 + 0x10)), 0x2c, *((u32*)(r5 + 0x18)));
    ov08_02223B20(r5);
    // strb r1, [r5, r0]
    // add r0, #0x23
    ReadMsgDataIntoString(*((u32*)(r5 + 0x10)), 0x2f, *((u32*)(r5 + 0x18)));
    ov08_02223B20(r5);
    // strb r1, [r5, r0]
    // add r0, #0x24
    ReadMsgDataIntoString(*((u32*)(r5 + 0x10)), 0x30, *((u32*)(r5 + 0x18)));
    ov08_02223B20(r5);
    // strb r1, [r5, r0]
    BattleSystem_GetParty(*((u32*)r4), *((u32*)(r4 + 0x10)));
    BattleSystem_GetPcStorage(*((u32*)r4));
    Party_GetCount(r6);
    PCStorage_FindFirstBoxWithEmptySlot(r4);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x10)), 0x2d, *((u32*)(r5 + 0x18)));
    ov08_02223B20(r5);
    // strb r1, [r5, r0]
}





void ov08_02222D78(void) {
}





void ov08_02222D84(void) {
}





void ov08_02222D90(void) {
}





void ov08_02222D9C(void) {
}





void ov08_02222DAC(void) {
}





void ov08_02222DC4(void) {
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
}





void ov08_02222DEC(void) {
    // add r1, #0xd
}





void ov08_02222E04(void) {
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // sub r3, #0x12
    PaletteData_BeginPaletteFade(*((u32*)(r0 + 8)), 0xa, 0x0000FFFF, 0xa);
}





void ov08_02222E2C(void) {
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r1 + 8)));
    ov08_02223F34(r5);
    ov08_02223464(r5);
    ov08_02223228(r5);
    ov08_022230CC(*((u32*)(r5 + 4)));
    ov08_02224B8C(*((u32*)(r5 + 0x34)));
    // add r1, #0x25
    // strb r0, [r1]
    ov08_02224B7C(*((u32*)(r5 + 0x34)), *((u32*)r5));
    FontID_Release(4);
    BattleSystem_GetBagCursor(*((u32*)*((u32*)r5)), *((u32*)r5));
    // add r2, r3, r4
    // add r3, r3, r4
    // add r2, #0x27
    // add r3, #0x2c
    BagCursor_Battle_PocketSetPosition(r0, 0, *((u8*)r2), *((u8*)*((u32*)r5)));
    BagCursor_Battle_SetPocket(r6, *((u8*)(r5 + 0x0000114D)));
    // add r0, #0x26
    // strb r1, [r0]
    DestroySysTaskAndEnvironment(r7, 1);
}





void ov08_02222EC4(void) {
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r0 + 8)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02222EEC: ; jump table
    ov12_0226BD50(*((u32*)(r4 + 0x38)));
    PlaySE(0x000005DD);
    // strb r1, [r4, r0]
    // strb r2, [r4, r0]
    ov08_02224938(r4, 2, 0);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    ov08_02222D84(r4, (*((u8*)(r4 + 0x0000115A)) + 1));
    // strb r1, [r4, r0]
    ov12_0226BD50(*((u32*)(r4 + 0x38)), (*((u8*)(r4 + 0x00001159)) + 1));
    PlaySE(0x000005DD);
    // add r1, r3, r1
    // add r1, #0x27
    // strb r2, [r1]
    // strb r1, [r4, r0]
    ov08_02224938(r4, 6, 0, *((u32*)r4));
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    ov08_02222D90(r4, (*((u8*)(r4 + 0x0000115A)) + 1));
    // strb r1, [r4, r0]
    ov12_0226BD50(*((u32*)(r4 + 0x38)), (*((u8*)(r4 + 0x00001159)) + 1));
    PlaySE(0x000005DD);
    // add r1, r2, r1
    // add r1, #0x27
    ov08_02223CD4(r4, *((u8*)*((u8*)(r4 + 0x0000114D))), *((u32*)r4));
    *((u16*)(*((u32*)r4) + 0x1c)) = r0;
    *((u8*)(*((u32*)r4) + 0x1e)) = *((u8*)(r4 + 0x0000114D));
    ov08_02224938(r4, 0xf, 0);
    ov08_02222B8C(r4);
    // strb r1, [r4, r0]
}





void ov08_02223000(void) {
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetScreenModeAndDisable(r3, 1, r3);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 4)), 6, r3, 0);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 4)), 5, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 4)), 5);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 4)), 4, r3, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 4)), 4);
    BG_ClearCharDataRange(5, 0x20, 0, *((u32*)(*((u32*)r4) + 0xc)));
    BG_ClearCharDataRange(4, 0x20, 0, *((u32*)(*((u32*)r4) + 0xc)));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 4)), 5);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 4)), 4);
}





void ov08_022230CC(void) {
}





void ov08_022230F4(void) {
    NARC_New(0x4d, *((u32*)(*((u32*)r0) + 0xc)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(2, *((u32*)(r5 + 4)), 6);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0, *((u32*)(r5 + 4)), 6);
    NARC_AllocAndReadWholeMember(r4, 1, *((u32*)(*((u32*)r5) + 0xc)));
    // add r1, sp, #0x10
    NNS_G2dGetUnpackedScreenData();
    // ldr r1, [sp, #0x10]
    // add r1, #0xc
    ov08_02224254(r5);
    Heap_Free(r6);
    NARC_Delete(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 8)), 0x4d, 3, *((u32*)(*((u32*)r5) + 0xc)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 8)), 0x10, 8, *((u32*)(*((u32*)r5) + 0xc)));
    BattleSystem_GetFrame(*((u32*)*((u32*)r5)));
    sub_0200E63C();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x26, r0, *((u32*)(r5 + 4)), 4);
    sub_0200E640(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadNarc(*((u32*)(r5 + 8)), 0x26, r0, *((u32*)(*((u32*)r5) + 0xc)));
}





void ov08_022231E8(void) {
}





void ov08_02223228(void) {
}





void ov08_02223248(void) {
    // add r3, #0xfa
    // add r3, #0xfd
}





void ov08_022232AC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #8
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r0 + 4)), 6, 2, 0x23);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #8
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r4 + 4)), 6, 2, 0x28);
}





void ov08_02223300(void) {
    ov08_022232AC();
    ov08_02223248(r5, r4);
    BgFillTilemapBufferAndSchedule(*((u32*)(r5 + 4)), 4, 0);
    BgFillTilemapBufferAndSchedule(*((u32*)(r5 + 4)), 5, 0);
    ov08_02223454(r5);
    ov08_022233DC(r5, r4);
    ov08_02223480(r5, r4);
    ov08_02224A50(r5, r4);
    ov08_02224134(r5, r4);
    ov08_0222421C(r5, r4);
    // strb r4, [r5, r1]
    ov08_02223F94(r5, *((u8*)(r5 + 0x0000114C)));
}





void ov08_02223368(void) {
}





void ov08_02223374(void) {
}





void ov08_02223390(void) {
}





void ov08_022233B8(void) {
    // add r1, #0x1c
    AddWindow(*((u32*)(r0 + 4)), r0, ov08_02225B90);
    ov08_022233DC(r4, *((u8*)(r4 + 0x0000114C)));
}





void ov08_022233DC(void) {
    // add r0, #0x30
    // strb r1, [r0]
    // add r0, #0x30
    // strb r1, [r0]
    // add r0, #0x30
    // strb r1, [r0]
    // add r1, #0x30
    AllocWindows(*((u32*)(*((u32*)r0) + 0xc)), *((u8*)r0));
    *((u32*)(r5 + 0x2c)) = r0;
    // add r0, #0x30
    // add r1, r2, r1
    // add r2, r6, r2
    AddWindow(*((u32*)(r5 + 4)), (0 << 4), (0 << 3));
    // add r0, #0x30
}





void ov08_02223454(void) {
    // add r1, #0x30
}





void ov08_02223464(void) {
}





void ov08_02223480(void) {
}





void ov08_022234A4(void) {
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // add r0, r5, r4
    // sub r0, r0, r7
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    // ldr r0, [sp, #0x10]
    // add r0, r5, r4
}





void ov08_022234FC(void) {
    // add r0, r0, r4
    FillWindowPixelBuffer(*((u32*)(r0 + 0x2c)), 0);
    // add r4, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r5, 0, 0, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r5, 0, 1, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r5, 1, 2, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r5, 1, 3, 4);
    // str r2, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r5, 2, 7, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r5, 3, 6, 4);
    NewString_ReadMsgData(*((u32*)(r5 + 0x10)), 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0x40
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x2c)), 4, r0, 0);
    String_Delete(r4);
    // add r0, #0x40
    ScheduleWindowCopyToVram(*((u32*)(r5 + 0x2c)));
}





void ov08_022235D4(void) {
    // add r0, r4, r6
    // str r2, [sp, #0x10]
    FillWindowPixelBuffer(0);
    // add r0, r5, r0
    // add r0, r0, r7
    // ldr r1, [sp, #0x10]
    NewString_ReadMsgData(*((u32*)(r5 + 0x10)), *((u32*)(ov08_02225BE0 + (*((u8*)(r5 + 0x0000114D)) << 3))), (*((u8*)(r5 + 0x0000114D)) << 3));
    // str r0, [sp, #0x14]
    // add r2, r5, r2
    // add r2, r2, r7
    BufferItemName(*((u32*)(r5 + 0x14)), 0, *((u16*)((0x90 * *((u8*)(r5 + 0x0000114D))) + 0x3c)), *((u8*)(r5 + 0x0000114D)));
    // ldr r2, [sp, #0x14]
    StringExpandPlaceholders(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x18)));
    // ldr r0, [sp, #0x30]
    FontID_String_GetWidth(*((u32*)(r5 + 0x18)), 0);
    // add r0, r4, r6
    GetWindowWidth();
    // sub r0, r0, r7
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r4, r6
    AddTextPrinterParameterizedWithColor(0, *((u32*)(r5 + 0x18)), ((r0 << 3) >> 1));
    // ldr r0, [sp, #0x14]
    String_Delete();
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov08_02223678(void) {
    // add r0, r4, r7
    // str r2, [sp, #0x10]
    FillWindowPixelBuffer(0);
    // add r0, r5, r0
    // add r0, r0, r6
    // ldr r1, [sp, #0x10]
    NewString_ReadMsgData(*((u32*)(r5 + 0x10)), *((u32*)(ov08_02225BE4 + (*((u8*)(r5 + 0x0000114D)) << 3))), (*((u8*)(r5 + 0x0000114D)) << 3));
    // str r0, [sp, #0x14]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, r5, r2
    // add r2, r2, r6
    BufferIntegerAsString(*((u32*)(r5 + 0x14)), 0, *((u16*)((0x90 * *((u8*)(r5 + 0x0000114D))) + 0x3e)), 3);
    // ldr r2, [sp, #0x14]
    StringExpandPlaceholders(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x18)));
    // ldr r0, [sp, #0x34]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x30]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r4, r7
    AddTextPrinterParameterizedWithColor(0xff, *((u32*)(r5 + 0x18)), 0);
    // ldr r0, [sp, #0x14]
    String_Delete();
    // add r0, r4, r7
    ScheduleWindowCopyToVram();
}





void ov08_0222370C(void) {
    // add r0, r1, r0
    // add r0, #0x2c
    // str r0, [sp, #0xc]
    // add r0, #0x31
    // str r0, [sp]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #4]
    // add r1, r5, r1
    // add r3, r4, r7
    ov08_022235D4(r0, *((u8*)*((u8*)(r0 + 0x0000114D))), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // add r1, r5, r1
    // add r3, r3, r7
    ov08_02223678(r6, r5, (r4 + 1));
}





void ov08_0222377C(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x31
    // add r4, #0x31
    // eor r0, r1
    // strb r0, [r4]
}





void ov08_022237C4(void) {
    // add r0, r1, r0
    FillWindowPixelBuffer((0x19 << 4), 0);
    NewString_ReadMsgData(*((u32*)(r5 + 0x10)), 0x1c);
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    FontID_String_GetWidth(0, 0);
    // add r0, r4, r0
    GetWindowWidth((0x19 << 4));
    // sub r0, r0, r7
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // add r0, r4, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((0x19 << 4), 0, ((r0 << 3) >> 1));
    // ldr r0, [sp, #0x10]
    String_Delete();
    NewString_ReadMsgData(*((u32*)(r5 + 0x10)), 0x1d);
    // str r0, [sp, #0x14]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, r5, r2
    BufferIntegerAsString(*((u32*)(r5 + 0x14)), 0, (*((u8*)(*((u8*)(r5 + 0x0000114D)) + (0x0000114D + 7))) + 1), 2);
    // ldr r2, [sp, #0x14]
    StringExpandPlaceholders(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x18)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // add r3, r6, r7
    AddTextPrinterParameterizedWithColor((0x19 << 4), 0, *((u32*)(r5 + 0x18)));
    // ldr r0, [sp, #0x14]
    String_Delete();
    NewString_ReadMsgData(*((u32*)(r5 + 0x10)), 0x1e);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, r2, r3
    // add r2, #0x2c
    BufferIntegerAsString(*((u32*)(r5 + 0x14)), 0, (*((u8*)*((u32*)r5)) + 1), 2);
    StringExpandPlaceholders(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x18)), r7);
    FontID_String_GetWidth(0, *((u32*)(r5 + 0x18)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, r0
    // sub r3, r6, r3
    AddTextPrinterParameterizedWithColor((0x19 << 4), 0, *((u32*)(r5 + 0x18)), r0);
    String_Delete(r7);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x19 << 4));
}





void ov08_022238F4(void) {
    // add r0, r1, r0
    FillWindowPixelBuffer((6 << 6), 0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222391C: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r4, 0x18, 0x16, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r4, 0x18, 0x17, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r4, 0x18, 0x18, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r4, 0x18, 0x19, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r4, 0x18, 0x1a, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r4, 0x18, 0x1b, 0);
}





void ov08_022239B4(void) {
}





void ov08_022239CC(void) {
    NewString_ReadMsgData(*((u32*)(r0 + 0x10)), 9);
    // add r2, r5, r2
    // add r2, r2, r3
    BufferItemName(*((u32*)(r5 + 0x14)), 0, *((u16*)((0x90 * *((u8*)(r5 + 0x0000114D))) + 0x3c)), (r6 << 2));
    StringExpandPlaceholders(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x18)), r7);
    FillWindowPixelBuffer(r4, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, *((u32*)(r5 + 0x18)), 0);
    String_Delete(r7);
    ScheduleWindowCopyToVram(r4);
}





void ov08_02223A3C(void) {
    // add r4, #0x20
    String_New(0x82, *((u32*)(*((u32*)r0) + 0xc)));
    // add r2, r5, r1
    // add r1, r2, r1
    GetItemDescIntoString(*((u16*)((r6 << 2) + 0x3c)), ((*((u32*)(*((u32*)r5) + 0xc)) << 0x10) >> 0x10));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r7, 4);
    String_Delete(r7);
    ScheduleWindowCopyToVram(r4);
}





void ov08_02223AA0(void) {
    // add r0, r0, r4
    FillWindowPixelBuffer(*((u32*)(r0 + 0x2c)), 0);
    // add r4, #0x10
    // add r0, r1, r2
    // add r0, #0x27
    // add r0, r1, r2
    // add r0, #0x2c
    // add r1, r4, r6
    ov08_022239CC(r5, *((u8*)0x0000114D), *((u8*)(r5 + 0x0000114D)));
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // add r1, r4, r6
    ov08_02223678(r5, 0, 1);
    // add r1, r4, r6
    ov08_02223A3C(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov08_022234A4(r5, 3, 0x1f, 4);
}





void ov08_02223B20(void) {
    // add r0, #0x1c
    DrawFrameAndWindow2(1, 0x000003E2, 0xe);
    // add r0, #0x1c
    FillWindowPixelBuffer(r4, 0xf);
    ov08_02223B48(r4);
}





void ov08_02223B48(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x1c
    // add r4, #0x32
    // strb r0, [r4]
}





void ov08_02223B78(void) {
}





void ov08_02223BA8(void) {
    // add r1, r5, r0
    _u32_div_f(0, 6, *((u16*)(*((u32*)r0) + 0x20)));
    // add r0, r6, r7
    // add r0, #0x27
    // strb r1, [r0]
    _u32_div_f(r4, 6);
    // add r1, r2, r1
    // add r1, #0x2c
    // strb r0, [r1]
}





void ov08_02223BF4(void) {
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp]
    // ldr r1, [sp, #8]
    Bag_GetPocketSlotN(*((u32*)(*((u32*)r0) + 8)), ((r2 << 0x10) >> 0x10));
    GetItemAttr(*((u16*)r0), 0xd, *((u32*)(*((u32*)r4) + 0xc)));
    // lsl r2, r0
    // tst r2, r7
    // add r3, r4, r2
    // add r3, r4, r6
    // add r2, r2, r3
    *((u16*)((*((u8*)(0x90 + 0x0000114F)) << 2) + 0x3c)) = *((u16*)r5);
    *((u16*)((*((u8*)(0x90 + 0x0000114F)) << 2) + 0x3e)) = *((u16*)(r5 + 2));
    // add r6, r4, r2
    // strb r3, [r6, r2]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // add r6, r4, r5
    // strb r7, [r6, r0]
    _s32_div_f((0x00001154 - 1), 6, 0x0000114F, (*((u8*)((*((u8*)ov08_02225CE0) * 0x90) + 0x0000114F)) + 1));
    // strb r0, [r6, r1]
    // add r2, r1, r5
    // add r2, #0x2c
    // add r1, r1, r5
    // add r1, #0x2c
    // strb r0, [r1]
}





void ov08_02223CD4(void) {
    // add r3, r3, r2
    // add r3, #0x2c
    // add r1, r1, r3
    // add r0, r0, r1
    // add r1, r0, r3
}





void ov08_02223D08(void) {
}





void ov08_02223D34(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    BattleSystem_GetSpriteSystem(*((u32*)*((u32*)r0)), ov08_02225D14);
    SpriteManager_New();
    // str r0, [r5, r1]
    SpriteSystem_InitSprites(r4, *((u32*)(r5 + (0xc3 << 2))), 0xc);
    // add r2, sp, #0
    SpriteSystem_InitManagerWithCapacities(r4, *((u32*)(r5 + (0xc3 << 2))));
}





void ov08_02223D80(void) {
    NARC_New(0x12, *((u32*)(*((u32*)r0) + 0xc)));
    BattleSystem_GetSpriteSystem(*((u32*)*((u32*)r6)));
    // str r0, [sp, #0x18]
    // add r5, r4, r0
    GetItemIndexMapping(1, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadCharResObjFromOpenNarc(2, *((u32*)(r6 + (0xc3 << 2))), r7, r0);
    GetItemIndexMapping(1, 2);
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r5, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r6 + 8)), 3, *((u32*)(r6 + (0xc3 << 2))));
    GetItemIconCell();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadCellResObjFromOpenNarc(0x0000B4B7, *((u32*)(r6 + (0xc3 << 2))), r7, r0);
    GetItemIconAnim();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadAnimResObjFromOpenNarc(0x0000B4B7, *((u32*)(r6 + (0xc3 << 2))), r7, r0);
    NARC_Delete(r7);
}





void ov08_02223E3C(void) {
    // str r0, [sp]
    // str r4, [sp, #4]
}





void ov08_02223E74(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}





void ov08_02223EA4(void) {
    BattleSystem_GetSpriteSystem(*((u32*)*((u32*)r0)));
    // add r1, sp, #0
    // strh r2, [r1]
    *((u16*)(r1 + 2)) = 0;
    *((u16*)(r1 + 4)) = 0;
    *((u16*)(r1 + 6)) = 0;
    // str r2, [sp, #0xc]
    // str r3, [sp, #8]
    // str r3, [sp, #0x10]
    // str r2, [sp, #0x30]
    // add r2, sp, #0
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x2c]
    SpriteSystem_NewSprite(*((u32*)(r5 + (0xc3 << 2))), 0, ov08_02225DE8);
}





void ov08_02223F14(void) {
    // str r0, [r5, r7]
}





void ov08_02223F34(void) {
    // str r0, [sp]
    // ldr r0, [sp]
}





void ov08_02223F74(void) {
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
}





void ov08_02223F94(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
}





void ov08_02223FD8(void) {
    ov08_02223E3C(*((u16*)(*((u32*)r0) + 0x20)), 0x0000B4B7);
    ov08_02223E74(r4, *((u16*)(*((u32*)r4) + 0x20)), 0, 0x0000B4B7);
    ov08_02223F74(*((u32*)(r4 + (0x31 << 4))), 0x18, 0xb2);
}





void ov08_0222400C(void) {
    ov08_02223CD4(r0, 0);
    // str r0, [sp]
    // ldr r1, [sp]
    // add r2, r4, r2
    ov08_02223E3C(r5, 0x0000B4B7);
    // ldr r1, [sp]
    // add r3, r4, r3
    ov08_02223E74(r5, ((r4 << 0x10) >> 0x10), 0x0000B4B7);
    ov08_02223F74(*((u32*)(r7 + (0x31 << 4))), *((u32*)r6), *((u32*)(r6 + 4)));
    // add r6, #8
}





void ov08_02224064(void) {
    // add r1, r2, r1
    // add r1, #0x27
    ov08_02223CD4(*((u8*)*((u8*)(r0 + 0x0000114D))), *((u32*)r0));
    ov08_02223E3C(r4, r0, 0x0000B4B7);
    ov08_02223E74(r4, r5, 0, 0x0000B4B7);
    ov08_02223F74(*((u32*)(r4 + (0x31 << 4))), 0x28, 0x2c);
}





void ov08_022240A8(void) {
    BattleSystem_GetSpriteSystem(*((u32*)*((u32*)r0)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    BattleCursor_LoadResources(*((u32*)(r5 + (0xc3 << 2))), *((u32*)(r5 + 8)), *((u32*)(*((u32*)r5) + 0xc)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    BattleCursor_New(r4, *((u32*)(r5 + (0xc3 << 2))), *((u32*)(*((u32*)r5) + 0xc)), 0x0000B4BE);
    ov08_02224B94(*((u32*)(r5 + 0x34)), r0);
}





void ov08_02224108(void) {
    ov08_02224B84(*((u32*)(r0 + 0x34)));
    BattleCursor_Delete();
    // str r3, [sp]
    BattleCursor_FreeResources(*((u32*)(r4 + (0xc3 << 2))), (0x0000B4B9 + 5), (0x0000B4B9 + 5), 0x0000B4B9);
}





void ov08_02224134(void) {
    ov08_02224BCC(*((u32*)(r0 + 0x34)), *((u32*)(ov08_02225CF8 + (r1 << 2))), (r1 << 2));
    ov08_02224B98(*((u32*)(r5 + 0x34)), *((u8*)(r5 + 0x0000114D)));
    // add r1, r2, r1
    // add r1, #0x27
    ov08_02224B98(*((u32*)(r5 + 0x34)), *((u8*)*((u8*)(r5 + 0x0000114D))), *((u32*)r5));
}





void ov08_0222417C(void) {
}





void ov08_0222419C(void) {
    BattleSystem_GetSpriteSystem(*((u32*)*((u32*)r0)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    BattleFinger_LoadResources(*((u32*)(r5 + (0xc3 << 2))), *((u32*)(*((u32*)r5) + 0xc)), *((u32*)(r5 + 8)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    BattleFinger_New(r4, *((u32*)(r5 + (0xc3 << 2))), *((u32*)(*((u32*)r5) + 0xc)), 0x0000B4BD);
    *((u32*)(r5 + 0x38)) = r0;
}





void ov08_022241F4(void) {
    BattleFinger_Delete(*((u32*)(r0 + 0x38)));
    // str r3, [sp]
    BattleFinger_FreeResources(*((u32*)(r4 + (0xc3 << 2))), (0x0000B4B8 + 5), (0x0000B4B8 + 5), 0x0000B4B8);
}





void ov08_0222421C(void) {
    ov12_0226BD2C(*((u32*)(r0 + 0x38)), *((u32*)(ov08_02225D2C + (r1 << 3))), *((u32*)(ov08_02225D30 + (r1 << 3))), (r1 << 3));
    ov12_0226BD4C(*((u32*)(r4 + 0x38)), 0x3c);
    BattleFinger_Disable(*((u32*)(r4 + 0x38)));
}





void ov08_02224254(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C((0xca << 2), 0, 0);
    // str r0, [sp]
    // add r0, r5, r0
    // str r3, [sp, #4]
    ov08_0222458C(0x00000448, r4, 0, 9);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000568, r4, 0, 0x12);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000688, r4, 0, 0x1b);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x0000078C, r4, 0, 0x20);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C((0x89 << 4), r4, 0, 0x25);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000994, r4, 0, 0x2a);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000A98, r4, 0, 0x39);
    // str r2, [sp]
    // add r0, r5, r0
    // str r2, [sp, #4]
    ov08_0222458C(0x00000ACA, r4, 5, 0x39);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000AFC, r4, 0xa, 0x39);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000B2E, r4, 0x10, 0);
    // str r2, [sp]
    // add r0, r5, r0
    // str r3, [sp, #4]
    ov08_0222458C(0x00000BEE, r4, 0x10, 6);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000CAE, r4, 0x10, 0xc);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000D6E, r4, 0x10, 0x12);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000E2E, r4, 0, 0x2f);
    // str r2, [sp]
    // add r0, r5, r0
    // str r2, [sp, #4]
    ov08_0222458C((0xe6 << 4), r4, 5, 0x2f);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000E92, r4, 0xa, 0x2f);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000EC4, r4, 0xf, 0x2f);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000EF6, r4, 0, 0x34);
    // str r2, [sp]
    // add r0, r5, r0
    // str r2, [sp, #4]
    ov08_0222458C(0x00000F28, r4, 5, 0x34);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000F5A, r4, 0xa, 0x34);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000F8C, r4, 0xf, 0x34);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000FBE, r4, 0x14, 0x2f);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000FDE, r4, 0x18, 0x2f);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x00000FFE, r4, 0x1c, 0x2f);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x0000101E, r4, 0x14, 0x33);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x0000103E, r4, 0x18, 0x33);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x0000105E, r4, 0x1c, 0x33);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x0000107E, r4, 0x14, 0x37);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x0000109E, r4, 0x18, 0x37);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x000010BE, r4, 0x1c, 0x37);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x000010DE, r4, 0x14, 0x3b);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x000010FE, r4, 0x18, 0x3b);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    ov08_0222458C(0x0000111E, r4, 0x1c, 0x3b);
}





void ov08_0222458C(void) {
    // str r0, [sp]
    // add r0, sp, #8
    // mov lr, r3
    // mov ip, r3
    // add r7, r1, r2
    // mov r0, lr
    // add r0, r0, r6
    // add r5, r7, r0
    // ldr r0, [sp]
    // add r4, r0, r1
    // strh r0, [r4, r1]
    // mov r0, ip
}





void ov08_022245DC(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022245EC: ; jump table
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r2, r0
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r1, r0
    // add r1, r0, r1
    // add r0, r2, r0
    // add r0, r1, r0
}





void ov08_02224684(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222469C: ; jump table
    // add r0, #8
    // add r0, #8
}





void ov08_022246F4(void) {
    // add r2, r0, r2
    // add r0, r2, r0
    // add r2, r0, r2
    // add r0, r2, r0
    // add r2, r0, r2
    // add r0, r2, r0
    // add r2, r0, r2
    // add r0, r2, r0
    // add r4, r0, r4
    // add r5, r1, r5
    // add r6, r5, r6
    *((u16*)((0 << 1) + 0xc)) = *((u16*)((0 << 3) + (0 << 1)));
}





void ov08_02224768(void) {
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // str r0, [sp]
    ov08_022245DC();
    // add r3, sp, #0x10
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    ov08_02224684(*((u8*)(r3 + 0x10)));
    // ldr r0, [sp, #4]
    // add r3, r0, r3
    // and r6, r7
    // strh r6, [r5, r0]
    // ldr r0, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    ov08_022246F4((*((u8*)(((r0 << 0x1c) << 2) + 3)) * *((u8*)(((r0 << 0x1c) << 2) + 2))), r5, ((r0 << 0x1c) >> 0x10), ((r0 << 0x1c) << 2));
}





void ov08_022247E4(void) {
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    Heap_Alloc(*((u32*)(*((u32*)r0) + 0xc)), ((*((u8*)(ov08_02225E9E + (r0 << 2))) * *((u8*)(ov08_02225E9F + (r0 << 2)))) << 1));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    ov08_02224768(r5);
    // ldr r2, [sp, #0x18]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r7, [sp, #8]
    LoadRectToBgTilemapRect(*((u32*)(r5 + 4)), 6, *((u8*)(ov08_02225E9C + r4)));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 4)), 6);
    // ldr r0, [sp, #0x18]
    Heap_Free();
}





void ov08_02224858(void) {
    // add r0, #0x31
    // add r1, #0xb
    // str r0, [sp]
    // str r0, [sp]
    // add r0, r1, r0
    // ldr r1, [sp]
    ScrollWindow((*((u8*)(*((u32*)(ov08_02225EE0 + ((r1 << 2) << 2))) + 0)) << 4), *((u32*)(r0 + 0x2c)), 4, 0);
    // add r0, r1, r0
    ScheduleWindowCopyToVram((*((u8*)(r4 + r5)) << 4), *((u32*)(r6 + 0x2c)));
}





void ov08_022248D0(void) {
    // str r2, [sp]
    // add r1, r5, r0
    // add r0, r5, r0
    // ldr r0, [sp]
}





void ov08_02224938(void) {
    // strb r5, [r0, r3]
    // strb r5, [r0, r4]
    // strb r1, [r0, r4]
    // strb r2, [r0, r1]
    // strb r2, [r0, r1]
}





void ov08_02224974(void) {
    // add r3, #0xb
    ov08_022247E4(*((u8*)(r0 + (0x00001141 - 1))), 1, *((u8*)(r0 + 0x00001141)));
    ov08_02224858(r4, *((u8*)(r4 + (0x45 << 6))), 1);
    ov08_022248D0(r4, *((u8*)(r4 + (0x45 << 6))), 1);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // add r3, #0xb
    ov08_022247E4((0x0000113F - 1), *((u8*)(r4 + (r3 - 1))), 2, *((u8*)(r4 + r3)));
    ov08_02224858(r4, *((u8*)(r4 + (0x45 << 6))), 2);
    ov08_022248D0(r4, *((u8*)(r4 + (0x45 << 6))), 2);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // add r3, #0xb
    ov08_022247E4((0x0000113F - 1), *((u8*)(r4 + (r3 - 1))), 0, *((u8*)(r4 + r3)));
    ov08_02224858(r4, *((u8*)(r4 + (0x45 << 6))), 0);
    ov08_022248D0(r4, *((u8*)(r4 + (0x45 << 6))), 0);
    // strb r2, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r0]
}





void ov08_02224A50(void) {
    ov08_022247E4(0, 0, r1);
    ov08_022247E4(r5, 1, 0, r6);
    ov08_022247E4(r5, 2, 0, r6);
    ov08_022247E4(r5, 3, 0, r6);
    ov08_022247E4(r5, 4, 3, r6);
    ov08_022247E4(r5, 4, 0, r6);
    ov08_022247E4(r5, 5, 0, r6);
    ov08_02223CD4(r5, 0);
    ov08_022247E4(r5, (((r4 + 6) << 0x18) >> 0x18), r7, r6);
    ov08_022247E4(r5, (((r4 + 6) << 0x18) >> 0x18), 0, r6);
    // add r1, r5, r1
    ov08_022247E4(r5, 0xc, 3, r6);
    ov08_022247E4(r5, 0xd, 3, r6);
    ov08_022247E4(r5, 0xc, 0, r6);
    ov08_022247E4(r5, 0xd, 0, r6);
    ov08_022247E4(r5, 0xe, 0, r6);
    ov08_022247E4(0xf, 0, r6);
    ov08_022247E4(r5, 0x10, 0, r6);
}





void ov08_02224B64(void) {
}





void ov08_02224B7C(void) {
}





void ov08_02224B84(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}





void ov08_02224B88(void) {
    // ldrb r0, [r0, #9]
    // bx lr
    // TODO: decompile
}





void ov08_02224B8C(void) {
    // ldrb r0, [r0, #8]
    // bx lr
    // TODO: decompile
}





void ov08_02224B90(void) {
}





void ov08_02224B94(void) {
}





void ov08_02224B98(void) {
    // add r3, r2, r4
    // str r1, [sp]
}





void ov08_02224BC0(void) {
}





void ov08_02224BCC(void) {
    // mvn r0, r0
    // str r0, [sp]
}





void ov08_02224BF8(void) {
}





void ov08_02224BFC(void) {
    // tst r1, r2
    *((u8*)(1 + 8)) = 1;
    // add r3, r2, r4
    // str r1, [sp]
    ov12_0226BAFC(*((u32*)1), *((u8*)(*((u32*)(1 + 4)) + (*((u8*)(1 + 9)) << 3))), *((u8*)(r3 + 2)), *((u8*)(r3 + 1)));
    PlaySE(0x000005DC);
}





void ov08_02224C48(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02224C58: ; jump table
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
}





void ov08_02224C94(void) {
    ov08_02224BFC();
    // mvn r0, r0
    // tst r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    DpadMenuBox_GetNeighborInDirection(*((u32*)(r5 + 4)), 0, 0, 0);
    // tst r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    DpadMenuBox_GetNeighborInDirection(*((u32*)(r5 + 4)), 0, 0, 0);
    // tst r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    DpadMenuBox_GetNeighborInDirection(*((u32*)(r5 + 4)), 0, 0, 0);
    // tst r0, r1
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    DpadMenuBox_GetNeighborInDirection(*((u32*)(r5 + 4)), 0, 0, 0);
    // str r0, [sp, #0xc]
    // tst r1, r0
    // eor r0, r4
    // lsl r0, r4
    // tst r0, r1
    // str r7, [sp, #0xc]
    // str r7, [sp]
    // str r4, [sp, #4]
    // str r6, [sp, #8]
    DpadMenuBox_GetNeighborInDirection(*((u32*)(r5 + 4)), 0, 0, 0);
    // and r0, r1
    // add r1, sp, #0x10
    // add r2, sp, #0x10
    // add r0, r0, r7
    // add r1, #3
    // add r2, #2
    DpadMenuBox_GetPosition(*((u32*)(r5 + 4)), ((r0 << 0x18) >> 0x18));
    // add r1, sp, #0x10
    // add r0, r0, r7
    // add r1, #1
    // add r2, sp, #0x10
    DpadMenuBox_GetDimensions(*((u32*)(r5 + 4)));
    // add r0, r0, r7
    ov08_02224C48(*((u32*)(r5 + 4)), r6);
    // ldr r0, [sp, #0xc]
    *((u8*)(r5 + 0xa)) = *((u8*)(r5 + 9));
    *((u8*)(r5 + 0xa)) = 0xff;
    *((u8*)(r5 + 9)) = r4;
    // add r3, sp, #0x10
    // str r0, [sp]
    ov12_0226BAFC(*((u32*)r5), *((u8*)(r3 + 3)), *((u8*)(r3 + 1)), *((u8*)(r3 + 2)));
    PlaySE(0x000005DC);
    // mvn r0, r0
    // tst r0, r1
    // tst r1, r0
    PlaySE(0x000005DD, *((u32*)(gSystem + 0x48)));
    // mvn r0, r0
}




