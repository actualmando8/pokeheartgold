/* Decompiled from asm/unk_0208FB64.s */
#include "global.h"

void sub_0208FB64(void) {
    // bx r3
    // nop
    // _0208FB70: .word sub_0203410C
    // _0208FB74: .word _021059DC
}




void sub_0208FB78(void) {
    // str r1, [r3, r0]
}




void sub_0208FB88(void) {
    // str r1, [r3, r0]
}




void sub_0208FB98(void) {
    // str r1, [r4, r0]
    // add r0, #0xc
    // strb r1, [r4, r0]
    sub_0203769C(0x00004A08, 1);
    sub_0208FD3C(r4, r0);
    ov73_021E6B98(r4);
    ov73_021E705C(r4, 0x19, ((r5 << 0x18) >> 0x18));
    sub_020398D4(1, 1);
    PlaySE(0x00000657);
}




void sub_0208FBE0(void) {
    // bx r3
    // nop
    // _0208FBEC: .word ov73_021E705C
}




void sub_0208FBF0(void) {
    sub_0203769C();
    // add r1, sp, #0
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(r5 + 1));
    *((u8*)(r1 + 2)) = *((u8*)(r5 + 2));
    *((u8*)(r1 + 3)) = *((u8*)(r5 + 3));
    // strb r6, [r1]
    *((u8*)(r1 + 1)) = *((u32*)(r4 + 0x00004A1C));
    sub_02037454(*((u8*)(r5 + 2)));
    ov73_021E7488(*((u32*)(r4 + 0x00004A1C)));
    sub_02033250(*((u32*)(r4 + 0x00004A1C)));
    MATH_CountPopulation();
    // add r0, sp, #0
    *((u8*)(r0 + 3)) = 0;
    // add r0, #8
    // lsl r0, r6
    // add r1, #8
    // str r0, [r4, r1]
    // add r0, sp, #0
    *((u8*)((1 | *((u32*)(r4 + 0))) + 3)) = 1;
    sub_02037454((1 | *((u32*)(r4 + 0))), 0, 1, *((u32*)(r4 + 0)));
    sub_02038C1C();
    // add r1, sp, #0
    sub_02037030(0x70, 4);
    sub_0203769C(*((u8*)(r5 + 2)));
    ov73_021E705C(r4, 8, r6);
    // strh r1, [r4, r0]
    ov73_021E705C(r4, 7, *((u8*)r5));
    ov73_021E705C(r4, 0x13, *((u8*)r5));
}




void sub_0208FCDC(void) {
    // str r1, [r4, r0]
}




void sub_0208FCFC(void) {
}




void sub_0208FD00(void) {
}




void sub_0208FD04(void) {
}




void sub_0208FD1C(void) {
    // add r0, sp, #0
    // strb r4, [r0]
    // add r1, sp, #0
}




void sub_0208FD3C(void) {
    // add r5, r4, r0
    // sub r0, #0x9a
    // eor r3, r1
    // str r3, [r4, r0]
    LCRandom((0x3d << 6), *((u32*)r5), (0 + 1), 0);
    // str r0, [r4, r1]
    // add r1, r4, r1
    sub_02036FD8(0x74, (0xe2 << 2), (0x2f << 6));
}




u8 sub_0208FD7C(void) {
}




u8 sub_0208FD80(void) {
}




u8 sub_0208FD84(void) {
}




u32 sub_0208FD88(void) {
    // add r2, r1, r2
    // add r0, r2, r1
}



