/* Decompiled from asm/overlay_01_021FC66C.s */
#include "global.h"

void CreateFishingRodTaskEnv(void) {
    // strb r0, [r2]
}




void Task_OverworldFish(void) {
    // add r2, #0x10
    // str r0, [r5]
}




void ov01_021FC748(void) {
    ov01_021FCAC4(0x4c);
    *((u32*)(r0 + 0x20)) = r5;
    *((u32*)(r0 + 0x1c)) = r4;
    // str r6, [r1]
    SysTask_CreateOnMainQueue(ov01_021FC798, r0, 0x80);
}




void ov01_021FC76C(void) {
}




void ov01_021FC778(void) {
}




void ov01_021FC784(void) {
}




void ov01_021FC798(void) {
    PlayerAvatar_GetMapObject(*((u32*)(*((u32*)(r1 + 0x20)) + 0x40)));
    // blx r3
}




void ov01_021FC7C4(void) {
}




void ov01_021FC7DC(void) {
}




void ov01_021FC814(void) {
    *((u32*)(r0 + 0x10)) = (*((u32*)(r0 + 0x10)) + 1);
    PlaySE(SEQ_SE_DP_FW104);
    *((u32*)(r4 + 0xc)) = 0xc;
    *((u32*)(r4 + 0x10)) = 0;
}




void ov01_021FC84C(void) {
    LCRandom();
    // sub r0, r0, r1
    // ror r0, r2
    // add r0, r1, r0
    *((u32*)(r4 + 0x14)) = (((r0 << 0x1e) + 1) * 0x1e);
    *((u32*)(r4 + 0x18)) = *((u32*)(ov01_02208D7C + (*((u32*)(r4 + 0x1c)) << 2)));
    ov01_021FCCB0(r4, (*((u32*)(r4 + 0x1c)) << 2), 0x1e);
    // add r0, r1, r0
    *((u32*)(r4 + 0x18)) = r0;
    *((u32*)(r4 + 0xc)) = 4;
}




void ov01_021FC88C(void) {
}




void ov01_021FC8E8(void) {
}




void ov01_021FC914(void) {
}




void ov01_021FC934(void) {
}




void ov01_021FC968(void) {
}




void ov01_021FC980(void) {
}




u32 ov01_021FC98C(void) {
}




u32 ov01_021FC9AC(void) {
}




void ov01_021FC9DC(void) {
}




void ov01_021FC9E8(void) {
}




void ov01_021FCA2C(void) {
}




void ov01_021FCA58(void) {
}




void ov01_021FCA94(void) {
}




void ov01_021FCAA8(void) {
}




void ov01_021FCAC4(void) {
}




void ov01_021FCAE8(void) {
    // tst r1, r0
}




void ov01_021FCAFC(void) {
    // tst r0, r1
}




void ov01_021FCB14(void) {
}




void ov01_021FCB4C(void) {
}




void ov01_021FCB6C(void) {
}




void ov01_021FCB90(void) {
}




void ov01_021FCBCC(void) {
    // add r0, #0x28
    // add r0, #0x38
    // add r4, #0x38
}




void ov01_021FCC00(void) {
    GF_AssertFail();
}




void ov01_021FCC2C(void) {
}




void ov01_021FCC74(void) {
}




void ov01_021FCCB0(void) {
    FollowMon_IsActive(*((u32*)(r0 + 0x20)));
    FieldSystem_UnkSub108_GetMonMood(*((u32*)(*((u32*)(r4 + 0x20)) + (0x42 << 2))), *((u32*)(r4 + 0x20)));
    // mvn r1, r1
    GF_AssertFail((*((u32*)(r4 + 0x1c)) << 0x18), ((*((u32*)(r4 + 0x1c)) << 0x18) >> 0x18), 4);
    // add r0, r0, r2
}



