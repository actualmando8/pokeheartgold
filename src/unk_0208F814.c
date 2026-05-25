/* Decompiled from asm/unk_0208F814.s */
#include "global.h"

void sub_0208F814(void) {
    // bx r3
    // nop
    // _0208F820: .word sub_0203410C
    // _0208F824: .word _021054B4
}




void sub_0208F828(void) {
    sub_0203769C();
    // add r2, r4, r2
    // add r1, r2, r1
    MIi_CpuCopyFast(r5, (*((u8*)(r5 + (0xfb << 2))) * ((0xfb << 2) - 4)), (0x19 << 4), (0xfb << 2));
    // add r2, r4, r2
    // add r1, r2, r1
    MIi_CpuCopyFast(r5, (r3 - 4));
    // add r0, r4, r0
    MIi_CpuCopyFast(0x000043D0, *((u32*)(r4 + (0xb5 << 2))), (0xe1 << 6));
    // add r0, r4, r0
    CopyWindowToVram((0xb2 << 2));
    // str r0, [r4, r1]
    sub_0208FAF8(r4, *((u32*)(r4 + 0x000043CC)), *((u32*)(r4 + 0x000043CC)), (*((u32*)(r4 + 0x000043CC)) * (0xfa << 2)));
    sub_02037108(0x7c, 0, 0);
}




void sub_0208F8BC(void) {
    // add r3, r3, r4
    // add r3, r3, r0
    // strb r0, [r3]
}




void sub_0208F8E4(void) {
    // add r5, r3, r0
    // strb r1, [r5]
    // add r2, #0xa
    // add r3, #0xa
}




void sub_0208F918(void) {
    ov37_021E6FC8(r3, 3, 0);
    // add r1, r4, r1
    MIi_CpuClearFast(0, 0x000043D0, (0xe1 << 6));
    sub_0203769C();
    sub_02037454();
    // str r0, [r4, r1]
    sub_02033250((0xc6 << 2));
    // str r0, [r4, r1]
    // str r1, [r4, r0]
}




void sub_0208F960(void) {
    sub_0203769C();
    // add r1, sp, #0
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(r5 + 1));
    *((u8*)(r1 + 2)) = *((u8*)(r5 + 2));
    *((u8*)(r1 + 3)) = *((u8*)(r5 + 3));
    // strb r6, [r1]
    *((u8*)(r1 + 1)) = *((u32*)(r4 + (0xc6 << 2)));
    sub_02037454(*((u8*)(r5 + 2)));
    ov37_021E75E0(*((u32*)(r4 + (0xc6 << 2))));
    sub_02033250(*((u32*)(r4 + (0xc6 << 2))));
    MATH_CountPopulation();
    // add r0, sp, #0
    *((u8*)(r0 + 3)) = 0;
    // lsl r2, r6
    // str r2, [r4, r0]
    // add r0, sp, #0
    *((u8*)(0x000093B4 + 3)) = 1;
    sub_02037454(0x000093B4, 1, (1 | *((u32*)(r4 + 0x000093B4))), *((u32*)(r4 + 0x000093B4)));
    sub_02038C1C();
    // add r1, sp, #0
    sub_02037108(0x7e, 4);
    sub_0203769C(*((u8*)(r5 + 2)));
    ov37_021E6FC8(r4, 9, r6);
    // strh r1, [r4, r0]
    ov37_021E6FC8(r4, 8, *((u8*)r5));
    ov37_021E6FC8(r4, 0x15, *((u8*)r5));
}




void sub_0208FA50(void) {
}




void sub_0208FA54(void) {
    ov37_021E6FC8(r3, 1, *((u8*)r2));
    sub_0203769C();
    // str r0, [r4, r1]
    sub_0208FAF8(r4, *((u32*)(r4 + 0x000043CC)));
}




void sub_0208FA88(void) {
}




void sub_0208FA8C(void) {
}




void sub_0208FA90(void) {
}




void sub_0208FAA8(void) {
    sub_0203769C();
    GF_AssertFail();
    sub_0203769C();
    // add r0, sp, #0
    // strb r5, [r0]
    // add r1, sp, #0
    sub_02037108(0x7b, *((u32*)(r4 + 0x000093FC)), 1);
    // str r1, [r4, r0]
    sub_020398D4(0, 1);
}




void sub_0208FAEC(void) {
    // str r1, [r3, r0]
}




void * sub_0208FAF8(void) {
    // add r0, r1, r0
    // add r1, r5, r1
    MIi_CpuCopyFast((r1 * (0xfa << 2)), 0x00007C10, (0xfa << 2));
    // add r3, r5, r0
    // eor r2, r0
    // str r2, [r5, r0]
    // strb r4, [r5, r0]
    // add r1, r5, r1
    sub_02037088(0x76, 0x00007C10, (0x3f << 4), (r3 + 4));
}




u32 sub_0208FB4C(void) {
    // add r2, r1, r2
    // add r0, r2, r1
}




u8 sub_0208FB5C(void) {
}




u8 sub_0208FB60(void) {
}



