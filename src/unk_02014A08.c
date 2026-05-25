/* Decompiled from asm/unk_02014A08.s */
#include "global.h"

void sub_02014A08(void) {
}




void sub_02014A38(void) {
}




void sub_02014A4C(void) {
}




void sub_02014A60(void) {
}




void sub_02014A78(void) {
}




void sub_02014A8C(void) {
    // eor r1, r2
}




void sub_02014AA0(void) {
}




void sub_02014AB0(void) {
}




HBlankDmaContext * sub_02014AD8(void) {
    Heap_Alloc(0x0000079C);
    memset(0, 0x0000079C);
    // add r2, r4, r2
    sub_02014A08(r5, r4, (3 << 8));
    // str r0, [r4, r1]
}




void sub_02014B08(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r5 + 0x00000604)));
    // strb r4, [r5, r0]
    // strb r6, [r5, r1]
    // add r1, #0xc
    // strh r2, [r5, r1]
    // add r2, sp, #8
    // ldrsh r2, [r2, r1]
    // add r1, #0xe
    // strh r2, [r5, r1]
    // ldr r2, [sp, #0x20]
    // add r0, #8
    // str r2, [r5, r1]
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x18]
    // str r1, [r5, r0]
    // add r0, r5, r0
    sub_02014C60(0x0000060C, 0xc0, r7);
    // ldr r2, [sp, #0x28]
    SysTask_CreateOnMainQueue(sub_02014CBC, r5);
    // str r0, [r5, r1]
    MIi_CpuClear32(*((u32*)(r5 + 0x00000794)), r5, (3 << 8));
    // add r1, r5, r2
    MIi_CpuClear32(*((u32*)(r5 + 0x00000794)), (3 << 8));
}




void sub_02014B9C(void) {
    GF_AssertFail();
    SysTask_Destroy(*((u32*)(r4 + 0x00000604)));
    // str r1, [r4, r0]
    sub_02014A4C(*((u32*)(r4 + (0x00000604 - 4))), 0);
    memset(*((u32*)(r4 + 0x00000794)), (3 << 8));
}




void sub_02014BD8(void) {
    // ldr r0, [r4, r0]
}




void sub_02014BF8(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _02014C04: .word sub_02014A4C
}




void sub_02014C08(void) {
    sub_02014A8C(*((u32*)(r0 + (0x00000604 - 4))), *((u32*)(r0 + 0x00000604)));
    sub_02014A4C(*((u32*)(r4 + (6 << 8))));
    MIi_CpuClear32(*((u32*)(r4 + 0x00000794)), r0, (3 << 8));
}




void sub_02014C40(void) {
    sub_02014D68(*((u32*)(r0 + 0x00000604)));
    sub_02014D70(r4);
}




void sub_02014C60(void) {
    // str r2, [sp]
    // asr r0, r3, #0x1f
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // asr r0, r4, #4
    // ldr r2, [sp, #4]
    // ldrsh r0, [r0, r1]
    // ldr r3, [sp, #8]
    // asr r1, r0, #0x1f
    _ll_mul(FX_SinCosTable_, (r0 << 2));
    // add r0, r0, r2
    // adc r1, r2
    // asr r0, r0, #0xc
    // strh r0, [r5]
    // ldr r0, [sp]
    // add r0, r4, r0
}




void sub_02014CBC(void) {
    sub_02014A4C(*((u32*)(r1 + (6 << 8))));
    // ldrsh r0, [r6, r0]
    _s32_div_f(0x00000798, 0x64);
    // add r5, r5, r0
    // asr r7, r0, #0x10
    // add r1, r6, r0
    // ldrsh r0, [r1, r0]
    // add r0, r7, r0
    // asr r1, r0, #0x10
    // stmia r5!, {r0}
    _s32_div_f((((r0 << 0x18) >> 0x18) + 1), 0xc0, *((u32*)r5), ((r0 << 0x18) >> 0x18));
    // ldrsh r2, [r6, r1]
    // ldrsh r0, [r6, r0]
    // add r4, r6, r1
    // add r0, r2, r0
    // strh r0, [r4]
    // ldrsh r0, [r6, r1]
    // ldrsh r0, [r4, r0]
    _s32_div_f(0, (0x4b << 8), ((r1 << 0x18) >> 0x18));
    // strh r1, [r4]
    // ldrsh r0, [r4, r0]
    // add r0, r0, r1
    // strh r0, [r4]
}




void sub_02014D68(void) {
}




void sub_02014D70(void) {
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
}



