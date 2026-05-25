/* Decompiled from asm/unk_02015DD8.s */
#include "global.h"

void sub_02015DDC(void) {
    // str r0, [r4]
}




void sub_02015E20(void) {
}




void sub_02015E64(void) {
    // str r6, [r0]
    // add r0, r0, r4
    sub_020161CC(*((u32*)r0), *((u32*)(*((u32*)r0) + 0x20)));
    // add r4, #0x40
    // str r1, [r0]
}




void sub_02015EA0(void) {
    // str r0, [r4]
}




void sub_02015EDC(void) {
}




void sub_02015EF4(void) {
    // add r0, r1, r4
    // add r4, #0x28
}




void sub_02015F1C(void) {
    // str r0, [r4]
}




void sub_02015F4C(void) {
}




void sub_02015F64(void) {
    // add r0, r1, r4
    // add r4, #0x18
}




void sub_02015F8C(void) {
}




void sub_02015FB0(void) {
}




void sub_02015FC4(void) {
}




void sub_02015FCC(void) {
    // ldrh r0, [r0]
    // orr r0, r1
}




void sub_02015FD8(void) {
}




void sub_02015FE0(void) {
}




void sub_02015FE8(void) {
    // orr r0, r1
}




void sub_02015FF4(void) {
}




void sub_02015FF8(void) {
}




void sub_02015FFC(void) {
    // add r0, #0x3e
    // strb r1, [r0]
}




void sub_02016004(void) {
}




void sub_02016008(void) {
}




void sub_0201600C(void) {
}




void sub_02016010(void) {
}




void sub_02016014(void) {
}




void sub_02016020(void) {
}




void sub_02016024(void) {
}




void sub_02016044(void) {
}




void sub_02016050(void) {
}




void sub_0201605C(void) {
    // add r5, #0x40
}




void sub_0201608C(void) {
    // add r5, #0x28
}




void sub_020160BC(void) {
    // add r5, #0x18
}




void sub_020160EC(void) {
    // add r0, r3, r0
    // add r2, #0x40
}




void sub_02016118(void) {
    // add r0, r3, r0
    // add r2, #0x28
}




void sub_02016144(void) {
    // add r0, r3, r0
    // add r2, #0x18
}




void sub_02016170(void) {
    // blx r3
}




void sub_02016184(void) {
    // blx r3
}




void sub_02016198(void) {
}




void sub_020161A8(void) {
    // and r2, r1
    *((u32*)(r0 + 8)) = ((0xFFFF0000 >> 0x10) << 3);
    NNS_G2dLoadPalette(((r1 << 0x10) >> 0xd), 0, r2);
    *((u32*)(r5 + 8)) = r4;
}




void sub_020161CC(void) {
    // str r6, [r7]
    *((u32*)(0x04000444 + 0x7c)) = (0x7FFF8000 | *((u16*)(r0 + 0x3c)));
    // add r0, #0x80
    // str r1, [r0]
    *((u32*)(0x04000444 + 0x64)) = (((((1 << 0x1e) | ((*((u32*)(*((u32*)(r0 + 0x24)) + 8)) << 0x1a) | (*((u32*)(r0 + 0x28)) >> 3))) | (*((u32*)*((u32*)(r0 + 0x24))) << 0x14)) | (*((u32*)(*((u32*)(r0 + 0x24)) + 4)) << 0x17)) | (*((u32*)(*((u32*)(r0 + 0x24)) + 0x10)) << 0x1d));
    // add r1, r1, r0
    // sub r0, r0, r6
    // lsr r1, r0
    // str r1, [r2]
    // add r0, #0x3e
    // sub r2, #8
    // str r0, [r2]
    // ldrsh r0, [r5, r0]
    // str r0, [sp, #0x14]
    // ldrsh r7, [r5, r0]
    // str r0, [sp, #0x14]
    // ldrsh r6, [r5, r0]
    // ldrsh r4, [r5, r0]
    // ldrsh r0, [r5, r0]
    // ldrsh r1, [r5, r1]
    // ldrsh r3, [r5, r3]
    // add r0, r0, r1
    // ldrsh r0, [r5, r0]
    // add r0, r0, r3
    // str r0, [r3]
    // str r1, [r3]
    // str r2, [r3]
    // asr r0, r0, #4
    // ldrsh r0, [r1, r0]
    // ldrsh r1, [r1, r2]
    G3_RotZ(((*((u32*)(r0 + 0x18)) << 1) << 1), FX_SinCosTable_, (((*((u32*)(r0 + 0x18)) << 1) + 1) << 1), 0x04000470);
    // str r0, [r1]
    // str r2, [r1]
    // str r0, [r1]
    // ldrsh r2, [r5, r2]
    // ldrsh r0, [r5, r0]
    // neg r2, r2
    // neg r0, r0
    *((u32*)(0x0400046C + 4)) = (4 << 0xc);
    *((u32*)(0x0400046C + 4)) = (6 << 0xc);
    *((u32*)(0x0400046C + 4)) = 0;
    // ldrsh r1, [r5, r1]
    // str r1, [sp]
    // ldr r1, [sp, #0x14]
    // str r1, [sp, #4]
    // str r6, [sp, #8]
    // str r7, [sp, #0xc]
    // str r4, [sp, #0x10]
    // ldrsh r3, [r5, r3]
    NNS_G2dDrawSpriteFast(0, 0, 0, 8);
    // str r1, [r0]
}




void sub_0201630C(void) {
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // add r1, r6, r1
    // add r2, r4, r2
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // add r1, #0x10
}



