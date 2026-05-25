/* Decompiled from asm/unk_0208F658.s */
#include "global.h"

void sub_0208F658(void) {
    // ldr r3, _0208F664 ; =sub_0203410C
    // add r2, r0, #0
    // ldr r0, _0208F668 ; =_02105430
    // mov r1, #0xb
    // bx r3
    // nop
    // _0208F664: .word sub_0203410C
    // _0208F668: .word _02105430
    // TODO: decompile
}




void sub_0208F66C(void) {
    // cmp r0, #0xc
    // bne _0208F674
    // mov r0, #0xc
    // bx lr
    // cmp r0, #6
    // bhs _0208F67C
    // add r0, r0, #6
    // bx lr
    // sub r0, r0, #6
    // bx lr
    // TODO: decompile
}




void sub_0208F680(void) {
    // add r3, #0x88
    sub_0203769C();
    memcpy(*((u32*)(r4 + 0x00002228)), r6, (0x59 << 4));
    *((u32*)(r4 + 0x64)) = (*((u32*)(r4 + 0x64)) + 1);
    sub_0203769C((0x59 << 4), ((*((u32*)(r4 + 0x64)) + 1) * (0x59 << 4)), (*((u32*)(r4 + 0x64)) + 1));
    ov65_0221DE24(r4, 0x1b, 0);
    sub_0203769C();
    ov65_0221DE64(*((u32*)(r4 + 0x00002224)), *((u32*)(r4 + 0x5c)));
    sub_0203769C();
    ov65_0221DE64(*((u32*)(r4 + 0x00002224)), *((u32*)(r4 + 0x5c)));
    *((u32*)(r4 + 0x5c)) = (*((u32*)(r4 + 0x5c)) + 1);
}




void sub_0208F6F4(void) {
    // add r3, #0x88
    // add r4, #0x98
    // str r0, [r4]
}




void sub_0208F714(void) {
    // add r3, #0x88
    // add r0, r1, r0
}




void sub_0208F724(void) {
    // bx lr
    // TODO: decompile
}




void sub_0208F728(void) {
    // bx lr
    // TODO: decompile
}




void sub_0208F72C(void) {
    // add r3, #0x88
}




void sub_0208F738(void) {
    // bx lr
    // TODO: decompile
}




void sub_0208F73C(void) {
    // add r3, #0x88
    // str r2, [r1, r0]
}




void sub_0208F74C(void) {
    // strb r1, [r4, r2]
}




void sub_0208F77C(void) {
    // add r3, #0x88
    sub_0203769C();
    SavePalPad_Merge(*((u32*)(r4 + 0x00002230)), r6, 1, 0x1a);
    *((u32*)(r4 + 0x60)) = 3;
}




void sub_0208F7A8(void) {
    // add r3, #0x88
    sub_0203769C();
    // add r3, r4, r1
    // add r1, r3, r1
    MIi_CpuCopyFast(r6, (r5 * (0xfb << 2)), ((0xfb << 2) - 4));
    *((u32*)(r4 + 0x60)) = 4;
    sub_020378E4(0);
}




void sub_0208F7E0(void) {
    // add r0, #0x88
    // str r1, [r0]
}




void sub_0208F7E8(void) {
}




u8 sub_0208F7F0(void) {
}




u8 sub_0208F7F4(void) {
}




void sub_0208F7F8(void) {
}




void * sub_0208F800(void) {
    // add r1, #0x88
    // add r2, r2, r1
    // mul r1, r0
    // add r0, r2, r1
}


