/* Decompiled from asm/overlay_01_021FB5D4.s */
#include "global.h"

void * ov01_021FB5D4(void) {
    Heap_Alloc((0xca << 2));
    memset(0, (0xca << 2));
    // str r0, [r4]
    // add r1, #0xc
    // add r2, r4, r2
    sub_02014A08(r6, r4, (0x63 << 2));
    // str r0, [r4, r1]
    // str r5, [r4, r0]
}



void ov01_021FB610(void) {
    // ldr r0, [r4, r0]
}




void ov01_021FB630(void) {
    GF_AssertFail(*((u32*)r0));
    ov01_021FB530(*((u32*)(r4 + (0x31 << 4))), ov01_021FB7DC, r4);
    // str r0, [r4, r2]
    // add r2, #0xec
    SysTask_CreateOnMainQueue(ov01_021FB6C4, r4, (0xc5 << 2));
    // str r0, [r4, r2]
    // add r2, #0xe4
    SysTask_CreateOnVBlankQueue(ov01_021FB7CC, r4, (0xc7 << 2));
    // str r0, [r4, r2]
    // add r2, #0xe0
    SysTask_CreateOnVBlankQueue(ov01_021FB800, r4, (0x32 << 4));
    // str r0, [r4, r1]
    // add r0, #0xc
    memset(r4, 0, (6 << 6));
    // add r0, r4, r2
    // sub r2, #0xc
    memset(0, (0x63 << 2));
    // str r0, [r4]
    *((u32*)(r4 + 8)) = 0;
    PlaySE(SEQ_SE_DP_DOKU2);
}




void ov01_021FB6C4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FB6DA: ; jump table
    // sub r1, r2, r1
}




void ov01_021FB750(void) {
    sub_02014A60(*((u32*)(r0 + (0xc3 << 2))), (0xc3 << 2));
    // sub r3, #0xc0
    // tst r1, r2
    G3X_SetHOffset(*((u16*)(r0 + ((r4 + 1) << 1))), ((r4 + 1) << 1), *((u16*)0x04000004), (r4 + 1));
}




void ov01_021FB788(void) {
    // add r0, r1, r0
    // neg r1, r0
    // str r1, [sp]
    // eor r4, r0
    // strh r7, [r5]
    // ldr r0, [sp]
    // strh r0, [r5]
}




void ov01_021FB7CC(void) {
    // str r0, [r1, r2]
}




void ov01_021FB7DC(void) {
}




void ov01_021FB7E8(void) {
}




void ov01_021FB800(void) {
}




void ov01_021FB80C(void) {
}




void ov01_021FB82C(void) {
    // str r1, [r4, r0]
    // add r0, #8
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4]
}



