/* Decompiled from asm/overlay_80_02229EE0.s */
#include "global.h"

void ov80_02229EE0(void) {
}




void ov80_02229EF4(void) {
    // bx r3
    // nop
    // _02229F00: .word ReadWholeNarcMemberByIdPair
}




void ov80_02229F04(void) {
    // str r3, [sp]
    NewMsgDataFromNarc(1, 0x1b, 0x1b, r2);
    MI_CpuFill8(r5, 0, 0x30);
    // ldr r2, [sp]
    ov80_02229EE0(((r4 << 0x10) >> 0x10), r6);
    // str r4, [r5]
    *((u16*)(r5 + 0x18)) = 0x0000FFFF;
    // add r0, r4, r0
    *((u16*)(r5 + 0x1a)) = (r4 << 1);
    *((u16*)(r5 + 4)) = *((u16*)r0);
    NewString_ReadMsgData(r7, r4);
    // add r5, #8
    CopyStringToU16Array(r5, 8);
    String_Delete(r4);
    DestroyMsgData(r7);
}




void ov80_02229F6C(void) {
    // str r1, [sp]
    // ldr r5, [sp, #0x34]
    MI_CpuFill8(0, 0x38);
    // ldr r1, [sp]
    // ldr r2, [sp, #0x40]
    // add r0, sp, #8
    ov80_02229EF4();
    // add r3, sp, #8
    // and r2, r0
    // and r0, r1
    // strh r0, [r4]
    // and r0, r1
    // strh r0, [r4]
    // ldr r0, [sp, #0x38]
    // and r0, r5
    *((u16*)(r4 + 2)) = *((u16*)(_0223B620 + (((3 << 0x18) >> 0x18) << 1)));
    *((u16*)(r4 + 2)) = *((u16*)(r3 + 0xc));
    // str r0, [sp, #4]
    // add r1, sp, #8
    *((u16*)(r4 + 4)) = *((u16*)((((3 << 0x18) >> 0x18) << 1) + 2));
    // str r5, [sp, #4]
    *((u32*)(r4 + 0xc)) = r7;
    LCRandom((0 + 1), ((((3 << 0x18) >> 0x18) << 1) + 2), (r4 + 2), *((u16*)((((3 << 0x18) >> 0x18) << 1) + 2)));
    LCRandom();
    GetNatureFromPersonality((r5 | (r0 << 0x10)));
    // add r1, sp, #8
    CalcShininessByOtIdAndPersonality(r7, r6);
    *((u32*)(r4 + 0x10)) = r6;
    *((u32*)(r4 + 0x10)) = r6;
    // add r0, sp, #0x20
    // and r0, r1
    // and r2, r0
    // and r2, r1
    // and r2, r1
    // and r2, r1
    // and r1, r2
    *((u32*)(r4 + 0x14)) = (((*((u8*)(r0 + 0x10)) << 0x1b) >> 2) | 0xC1FFFFFF);
    MaskOfFlagNo(0, 0xC1FFFFFF, ((((((*((u32*)(r4 + 0x14)) & ~(0x1f)) | 0x1f) | ((*((u8*)(r0 + 0x10)) << 0x1b) >> 0x16)) | ((*((u8*)(r0 + 0x10)) << 0x1b) >> 0x11)) | ((*((u8*)(r0 + 0x10)) << 0x1b) >> 0xc)) | ((*((u8*)(r0 + 0x10)) << 0x1b) >> 7)));
    // add r1, sp, #8
    // tst r0, r1
    _s32_div_f(0x000001FE, (r7 + 1));
    MaskOfFlagNo(0);
    // add r1, sp, #8
    // tst r0, r1
    // add r0, r4, r5
    *((u8*)(r0 + 0x18)) = r7;
    *((u8*)(r4 + 0x1e)) = 0;
    *((u8*)(r4 + 0x1f)) = *((u8*)gGameLanguage);
    GetMonBaseStat(((*((u16*)r4) << 0x15) >> 0x15), 0x19);
    // tst r1, r2
    // add r1, #0x20
    // strb r0, [r1]
    GetMonBaseStat(((*((u16*)r4) << 0x15) >> 0x15), 0x18, *((u32*)(r4 + 0x10)));
    // add r1, #0x20
    // strb r0, [r1]
    GetMonBaseStat(((*((u16*)r4) << 0x15) >> 0x15), 0x18);
    // add r1, #0x20
    // strb r0, [r1]
    // ldr r0, [sp, #4]
    // add r1, #0x21
    // strb r0, [r1]
    // add r4, #0x22
    // ldr r1, [sp, #0x3c]
    GetSpeciesNameIntoArray(((*((u16*)r4) << 0x15) >> 0x15), r4, r4);
}




void ov80_0222A140(void) {
    ZeroMonData(r1);
    // and r0, r1
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x1c]
    CreateMon(r5, ((*((u16*)r6) << 0x15) >> 0x15), 0x64);
    // add r2, sp, #0x1c
    SetMonData(r5, 0xaf);
    CalcMonLevelAndStats(r5);
    // add r2, sp, #0x14
    // add r2, #1
    // add r0, sp, #0x14
    *((u8*)((*((u16*)r6) << 0x10) + 1)) = ((*((u16*)r6) << 0x10) >> 0x1b);
    SetMonData(r5, 0x70);
    SetMonData(r5, 6, (r6 + 2));
    // str r6, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // add r2, sp, #0x14
    // add r0, sp, #0x14
    // add r2, #2
    *((u16*)(r0 + 2)) = *((u16*)(r0 + 4));
    // add r1, #0x36
    SetMonData(r5, 0);
    // add r2, sp, #0x14
    // add r2, #1
    // asr r1, r7
    // and r1, r0
    // add r0, sp, #0x14
    *((u8*)(3 + 1)) = *((u8*)(r6 + 0x1e));
    // add r1, #0x3e
    SetMonData(r5, r4);
    // add r1, #0x42
    GetMonData(r5, r4, 0);
    // add r1, sp, #0x14
    // strb r0, [r1]
    // add r1, #0x3a
    // add r2, sp, #0x14
    SetMonData(r5, r4);
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x18]
    // add r2, sp, #0x18
    SetMonData(r5, 7);
    // add r2, sp, #0x14
    // add r0, sp, #0x14
    // add r2, #1
    *((u8*)(r0 + 1)) = *((u8*)(r6 + 0x18));
    SetMonData(r5, 0xd);
    // add r2, sp, #0x14
    // add r0, sp, #0x14
    // add r2, #1
    *((u8*)(r0 + 1)) = *((u8*)(r6 + 0x19));
    SetMonData(r5, 0xe);
    // add r2, sp, #0x14
    // add r0, sp, #0x14
    // add r2, #1
    *((u8*)(r0 + 1)) = *((u8*)(r6 + 0x1a));
    SetMonData(r5, 0xf);
    // add r2, sp, #0x14
    // add r0, sp, #0x14
    // add r2, #1
    *((u8*)(r0 + 1)) = *((u8*)(r6 + 0x1b));
    SetMonData(r5, 0x10);
    // add r2, sp, #0x14
    // add r0, sp, #0x14
    // add r2, #1
    *((u8*)(r0 + 1)) = *((u8*)(r6 + 0x1c));
    SetMonData(r5, 0x11);
    // add r2, sp, #0x14
    // add r0, sp, #0x14
    // add r2, #1
    *((u8*)(r0 + 1)) = *((u8*)(r6 + 0x1d));
    SetMonData(r5, 0x12);
    // add r2, #0x20
    SetMonData(r5, 0xa, r6);
    // add r2, #0x21
    SetMonData(r5, 9, r6);
    NewMsgDataFromNarc(1, 0x1b, 0xed, 4);
    NewString_ReadMsgData(((*((u16*)r6) << 0x15) >> 0x15));
    SetMonData(r5, 0x77, r0);
    String_Delete(r7);
    DestroyMsgData(r4);
    // add r2, #0x22
    SetMonData(r5, 0x75, r6);
    // add r6, #0x1f
    SetMonData(r5, 0xc, r6);
    CalcMonLevelAndStats(r5);
}




void ov80_0222A30C(void) {
    // bne _0222A31E
    // ldrh r0, [r0, r1]
    // cmp r2, #0x3f
    // blo _0222A310
    // nop
    // _0222A32C: .word ov80_0223B628
    // _0222A330: .word ov80_0223B62A
}




void ov80_0222A334(void) {
    Save_PlayerData_GetProfile();
    GetMonData(r4, 7, 0);
    // str r0, [sp, #8]
    Save_PlayerData_GetProfile(r5);
    // str r3, [sp]
    // str r0, [sp, #4]
    sub_0207217C(r4, r0, 4, 0);
    MapHeader_GetMapSec(0x00000113);
    // str r0, [sp]
    MonSetTrainerMemo(r4, r6, 0, r0);
    NewMsgDataFromNarc(0, 0x1b, 0xc1, 0xb);
    NewString_ReadMsgData(0);
    SetMonData(r4, 0x91, r0);
    // add r2, sp, #8
    SetMonData(r4, 7);
    String_Delete(r6);
    DestroyMsgData(r5);
}




void ov80_0222A3BC(void) {
}




void ov80_0222A3D4(void) {
}




void ov80_0222A400(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // add r1, sp, #0
}




void ov80_0222A43C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222A454: ; jump table
}




void ov80_0222A474(void) {
}




void ov80_0222A480(void) {
    // add r0, r5, r0
    // add r0, r5, r6
    // add r0, #0x29
    // strb r1, [r0]
    // add r0, #0x3c
    // add r0, r0, r6
    // add r1, #8
    // add r0, r5, r6
    // add r0, #0x4c
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x4e
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x50
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x52
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x54
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x56
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x58
    // strh r1, [r0]
    // add r0, r5, r6
    // add r0, #0x5a
    // strh r1, [r0]
}




void ov80_0222A4EC(void) {
    // str r1, [sp, #0x14]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x34]
    // ldr r3, [sp, #0x30]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
}




void ov80_0222A52C(void) {
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x34]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x38]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x34]
    // ldr r5, [sp, #0x30]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x30]
    // str r0, [r5]
    // ldr r0, [sp, #0xc]
    // add r0, #0x38
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x34]
}




void ov80_0222A5A4(void) {
    // cmp r0, #0x64
    // bhs _0222A5AC
    // cmp r0, #0x78
    // bhs _0222A5B4
    // cmp r0, #0x8c
    // bhs _0222A5BC
    // cmp r0, #0xa0
    // bhs _0222A5C4
    // cmp r0, #0xb4
    // bhs _0222A5CC
    // cmp r0, #0xc8
    // bhs _0222A5D4
    // cmp r0, #0xdc
    // bhs _0222A5DC
}




void ov80_0222A5E0(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x90]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0x90]
    // ldr r0, [sp, #0x90]
    // str r4, [sp, #0x14]
    // add r0, sp, #0x1c
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x94]
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    // ldr r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x10]
    // add r1, sp, #0x1c
    // add r1, #0x10
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r5, [sp, #0x10]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // strh r1, [r0]
    // ldr r0, [sp, #0x10]
    // add r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x90]
    // ldr r0, [sp, #0x14]
}




void ov80_0222A6B8(void) {
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x8c]
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r0, [sp, #0x8c]
    // add r0, sp, #0x44
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x8c]
    // strb r0, [r1, r4]
    // ldr r0, [sp, #0x10]
    // add r0, sp, #0x78
    // add r1, sp, #0x2c
    // ldr r0, [sp, #0x10]
    // add r2, sp, #0x24
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // add r2, sp, #0x24
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // ldr r6, [sp, #0x18]
    // add r4, sp, #0x2c
    // add r5, sp, #0x24
    // add r0, sp, #0x34
    // add r0, sp, #0x24
    // strh r0, [r4]
    // add r0, sp, #0x24
    // strh r0, [r5]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x14]
    // add r0, sp, #0x44
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // add r1, r1, r2
    // str r6, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0x2c
    // add r2, sp, #0x24
    // ldr r0, [sp, #0x8c]
    // add r4, r0, r6
    // ldr r0, [sp, #0x14]
    // strb r0, [r4]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x90]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x8c]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x88]
}




void ov80_0222A7CC(void) {
    // eor r0, r1
}




void ov80_0222A7EC(void) {
    PlayerProfile_GetTrainerGender();
    PlayerProfile_GetVersion(r5);
}




void ov80_0222A840(void) {
}



