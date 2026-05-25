/* Decompiled from asm/unk_0200FA24.s */
#include "global.h"

void BeginNormalPaletteFade(void) {
    // ldr r0, [sp, #0x30]
    GF_AssertFail();
    // ldr r0, [sp, #0x34]
    GF_AssertFail();
    GF_AssertFail(*((u16*)(_021D1034 + 0xc)));
    sub_020100C4(_021D0EF4);
    sub_0200FE14(r5, _021D0EF4);
    sub_0200FEB0(_021D0F68);
    sub_02010018(_021D0EF4, r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x30]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x34]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x14]
    // str r5, [sp, #0x18]
    sub_0200FE84(_021D0F08, r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x30]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x34]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x14]
    // str r5, [sp, #0x18]
    sub_0200FE84(_021D0F38, r7);
    *((u16*)(_021D1034 + 0xc)) = 1;
    FadeWork_UpdateFrame(_021D0EF8, _021D0F08);
    FadeWork_UpdateFrame(_021D0EFC, _021D0F38);
    // add r0, #0x14
    sub_02010064(_021D0EF4);
    // strb r2, [r0, r1]
    // add r0, #0x44
    sub_02010064(_021D0EF4, 0x0000014E, 1);
    // strb r2, [r0, r1]
}




void HandleFadeUpdateFrame(void) {
    // add r1, #0x14
    // add r2, #0x44
    DoFadeUpdateFrame(_021D0EF4, _021D0EF4, _021D0EF4);
    HandleEndFade(r4);
}




void IsPaletteFadeFinished(void) {
    // cmp r0, #0
    // bne _0200FB68
    // _0200FB6C: .word _021D1034
}




void sub_0200FB70(void) {
    sub_0200FF5C(_021D0F68, 0);
    sub_0200FF5C(_021D0F68, 1);
    *((u32*)(_021D0EF4 + 0x20)) = 2;
    *((u32*)(_021D0EF4 + 0x50)) = 2;
    FadeWork_UpdateFrame(_021D0EF8, _021D0F08);
    FadeWork_UpdateFrame(_021D0EFC, _021D0F38);
    *((u16*)(_021D1034 + 0xc)) = 0;
    *((u8*)(_021D1034 + 0xe)) = 0;
    *((u8*)(_021D1034 + 0xf)) = 0;
    sub_020100C4(_021D0EF4, 0);
}




void sub_0200FBDC(void) {
}




void SetMasterBrightnessNeutral(void) {
}




void sub_0200FBF4(void) {
    // mvn r1, r1
}




void sub_0200FC20(void) {
    // mvn r5, r5
    SetMasterBrightness(0, 0xf);
    SetMasterBrightness(1, r5);
    *((u16*)(_021D1034 + 0x10)) = r4;
}




void sub_0200FC60(void) {
    // add r1, sp, #0x18
    *((u16*)(r1 + 4)) = *((u16*)(_021D1034 + 0x10));
    // add r0, sp, #0x1c
    GX_LoadBGPltt(*((u16*)(_021D1034 + 0x10)), 0, 2);
    GXS_LoadBGPltt(0, 2);
    sub_02013424(_021D0F80, 1, r4);
    // str r4, [sp]
    sub_02013440(_021D0F80, 0x3f, 0, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r4, [sp, #8]
    sub_02013488(_021D0F80, 0, 0, 0);
    sub_02013468(_021D0F80, 0x20, 0, r4);
}




void sub_0200FCDC(void) {
}




void SetMasterBrightness(void) {
    // ; GX_SetMasterBrightness(a1);
    GXx_SetMasterBrightness_(0x0400006C);
    // ; GXS_SetMasterBrightness(a1);
    GXx_SetMasterBrightness_(0x0400106C);
}




void HandleEndFade(void) {
    // strh r2, [r4, r1]
    sub_0201002C((0x53 << 2), 0);
    // strh r0, [r4, r1]
    // add r0, #0x14
    sub_02010094(r4, (0x15 << 4));
    *((u8*)(_021D1034 + 0xe)) = 0;
    // add r0, #0x44
    sub_02010094(r4, 0);
    *((u8*)(_021D1034 + 0xf)) = 0;
    sub_020100C4(r4, 0);
}




void DoFadeUpdateFrame(void) {
    // add r0, #8
    // add r0, #8
    // add r0, #8
}




void FadeWork_UpdateFrame(void) {
}




void CallFadeFunc(void) {
    // blx r1
}




void sub_0200FE14(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0200FE26: ; jump table
}




void sub_0200FE78(void) {
}




void sub_0200FE84(void) {
    // str r1, [r0]
    *((u32*)(r0 + 4)) = r2;
    // ldr r1, [sp]
    *((u32*)(r0 + 8)) = r3;
    *((u32*)(r0 + 0xc)) = r1;
    // ldr r1, [sp, #4]
    *((u32*)(r0 + 0x14)) = r1;
    // ldr r1, [sp, #8]
    *((u32*)(r0 + 0x10)) = r1;
    // ldr r1, [sp, #0xc]
    *((u32*)(r0 + 0x18)) = r1;
    // ldr r1, [sp, #0x10]
    *((u32*)(r0 + 0x1c)) = r1;
    // ldr r1, [sp, #0x14]
    *((u32*)(r0 + 0x20)) = r1;
    // add r1, sp
    *((u16*)(r0 + 0x24)) = *((u16*)(0xFFFFFFF0 + 0x28));
}




void sub_0200FEB0(void) {
    // str r2, [r0]
    *((u32*)(r0 + 8)) = sub_02010014;
    *((u32*)(r0 + 0x10)) = 0;
}




void sub_0200FECC(void) {
    // blx r1
}




void sub_0200FEE4(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x10
    // str r0, [sp, #8]
    // str r1, [sp]
    GF_AssertFail(*((u32*)(r0 + (r3 << 2))));
    // add r6, #8
    GF_AssertFail(*((u32*)(r5 + r4)));
    Main_SetHBlankIntrCB(sub_0200FECC, r5);
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    GF_AssertFail(((r0 << 0x18) >> 0x18));
    // ldr r0, [sp]
    // str r0, [r5, r4]
    // str r7, [r6, r4]
    // str r0, [r6, r4]
    // ldr r0, [sp, #8]
    // str r1, [r0, r4]
}




void sub_0200FF5C(void) {
    // add r0, r5, r4
    *((u32*)(r0 + 0x10)) = 0;
    HBlankInterruptDisable(*((u32*)(r0 + 0x14)), 0);
    // add r0, r5, r4
    *((u32*)(r0 + 8)) = sub_02010014;
    // str r0, [r5, r4]
}




void sub_0200FF88(void) {
    // ldr r0, [sp, #0x18]
    Heap_AllocAtEnd(0x10);
    // str r5, [r1]
    *((u32*)(r0 + 4)) = r4;
    *((u32*)(r0 + 8)) = r6;
    *((u32*)(r0 + 0xc)) = r7;
    SysTask_CreateOnVWaitQueue(sub_0200FFD8, r0, (1 << 0xa));
}




void sub_0200FFB4(void) {
    Heap_AllocAtEnd(r2, 8);
    // str r5, [r1]
    *((u32*)(r0 + 4)) = r4;
    SysTask_CreateOnVWaitQueue(sub_0200FFF8, r0, (1 << 0xa));
}




void sub_0200FFD8(void) {
}




void sub_0200FFF8(void) {
}




void sub_02010014(void) {
}




void sub_02010018(void) {
    // bne _02010024
    // ldrh r1, [r0, r1]
    // _02010028: .word 0x0000FFFF
}




void sub_0201002C(void) {
    // add r2, #0x14
    // add r2, #0x44
}




void sub_02010050(void) {
}




void sub_02010064(void) {
    SysTask_CreateOnVWaitQueue(sub_02010050, r0, (1 << 0xa));
}




void sub_02010094(void) {
    sub_0200FBF4(*((u32*)(r0 + 0x10)), *((u16*)(r0 + 0x24)));
    sub_0200FBDC(*((u32*)(r4 + 0x10)));
}




void sub_020100C4(void) {
    // strb r0, [r2]
    // add r0, #0x14
    // add r0, #0x44
    // add r2, #0x74
    // strb r0, [r2]
    // add r4, #0x8c
}



