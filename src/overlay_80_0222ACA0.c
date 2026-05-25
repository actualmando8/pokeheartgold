/* Decompiled from asm/overlay_80_0222ACA0.s */
#include "global.h"

u32 ov80_0222ACA0(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222ACB2: ; jump table
    GF_AssertFail(*((u8*)(ov80_0223B747 + (0x28 * *((u8*)(ov80_0223B746 + (0x28 * *((u16*)(ov80_0223B744 + (0x28 * *((u16*)(ov80_0223B742 + (0x28 * *((u16*)(ov80_0223B740 + (0x28 * *((u16*)(ov80_0223B73E + (0x28 * *((u16*)(ov80_0223B73C + (0x28 * *((u16*)(ov80_0223B73A + (0x28 * *((u16*)(ov80_0223B738 + (0x28 * *((u16*)(ov80_0223B736 + (0x28 * *((u16*)(ov80_0223B734 + (0x28 * *((u16*)(ov80_0223B732 + (0x28 * *((u16*)(ov80_0223B730 + (0x28 * *((u32*)(ov80_0223B724 + (0x28 * r0)))))))))))))))))))))))))))))))))))))))))), (0x28 * *((u8*)(ov80_0223B746 + (0x28 * *((u16*)(ov80_0223B744 + (0x28 * *((u16*)(ov80_0223B742 + (0x28 * *((u16*)(ov80_0223B740 + (0x28 * *((u16*)(ov80_0223B73E + (0x28 * *((u16*)(ov80_0223B73C + (0x28 * *((u16*)(ov80_0223B73A + (0x28 * *((u16*)(ov80_0223B738 + (0x28 * *((u16*)(ov80_0223B736 + (0x28 * *((u16*)(ov80_0223B734 + (0x28 * *((u16*)(ov80_0223B732 + (0x28 * *((u16*)(ov80_0223B730 + (0x28 * *((u32*)(ov80_0223B724 + (0x28 * r0)))))))))))))))))))))))))))))))))))))))));
}



void ov80_0222AD9C(void) {
    // blx r2
}



void ov80_0222ADB4(void) {
    // blx r2
}



void ov80_0222ADCC(void) {
}



void ov80_0222ADDC(void) {
}



void ov80_0222ADE8(void) {
}



void ov80_0222AE1C(void) {
}



void ov80_0222AE28(void) {
    // bx lr
    // TODO: decompile
}



void ov80_0222AE2C(void) {
    // bx lr
    // TODO: decompile
}



void ov80_0222AE30(void) {
    SetBgPriority(0, 1);
    SetBgPriority(2, 2);
    SetBgPriority(3, 3);
    // str r3, [sp]
    G2x_SetBlendAlpha_(0x04000050, 1, 0x3c, 0x14);
    GfGfx_EngineATogglePlanes(4, 0);
}



void ov80_0222AE68(void) {
    // bx lr
    // TODO: decompile
}



void ov80_0222AE6C(void) {
}



void ov80_0222AE80(void) {
    // bx lr
    // TODO: decompile
}



void ov80_0222AE84(void) {
}



void ov80_0222AE9C(void) {
    // bx lr
    // TODO: decompile
}



void ov80_0222AEA0(void) {
}



void ov80_0222AEB0(void) {
}



void ov80_0222AEBC(void) {
    SetBgPriority(1, 0);
    SetBgPriority(0, 2);
    SetBgPriority(2, 2);
    SetBgPriority(3, 3);
    // str r3, [sp]
    G2x_SetBlendAlpha_(0x04000050, 1, 0x3c, 0x14);
}



void ov80_0222AEF4(void) {
    // bx lr
    // TODO: decompile
}


