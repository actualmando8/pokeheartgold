/* Decompiled from asm/unk_0202C034.s */
#include "global.h"

void sub_0202C034(void) {
}




void sub_0202C03C(void) {
    MIi_CpuClearFast(0, r0, (0x23 << 6));
    // sub r1, #0x10
    // add r2, #0x1e
    // strh r4, [r6, r0]
    // strh r4, [r6, r1]
    // strb r3, [r6, r2]
    // add r6, #0x38
    sub_0203A01C(r7, (0x1d << 4), (0x1d << 4), 2);
    MI_CpuCopy8(r7, _021D2230, (0x23 << 6));
}




void sub_0202C08C(void) {
}




void sub_0202C090(void) {
    GF_AssertFail();
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0202C0B0: ; jump table
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
    // add r1, r5, r0
}




void sub_0202C190(void) {
    GF_AssertFail();
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0202C1B2: ; jump table
    // add r1, r5, r0
    // str r6, [r1, r0]
    GF_AssertFail((0x1e << 4));
    GF_AssertFail();
    GF_AssertFail();
    // add r1, r5, r0
    // strh r6, [r1, r0]
    // add r1, r5, r0
    // strb r6, [r1, r0]
    // add r1, r5, r0
    // strb r6, [r1, r0]
    // add r1, r5, r0
    // strb r6, [r1, r0]
    // add r1, r5, r0
    // strb r6, [r1, r0]
    GF_AssertFail(0x000001EF);
}




void sub_0202C23C(void) {
}




void sub_0202C254(void) {
}




void sub_0202C270(void) {
    // add r2, r5, r1
    // add r1, r2, r1
}




void sub_0202C298(void) {
}




void sub_0202C2B4(void) {
    // add r2, r5, r1
    // add r1, r2, r1
}




void sub_0202C2DC(void) {
    // add r5, #0x40
    // add r0, r5, r0
}




int sub_0202C2F8(void) {
    sub_0202C2DC(r0, 0);
}



void sub_0202C318(void) {
}




void sub_0202C338(void) {
    // str r0, [sp]
    // bmi _0202C3D8
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r6, r0, r1
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // add r0, #0x40
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r4, r0, r1
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    MI_CpuCopy8(0x38, r6, 0x38);
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    MI_CpuCopy8(0xc, r4, 0xc);
    // add r6, #0x38
    // add r4, #0xc
    // ldr r1, [sp]
    // add r2, r1, r2
    // add r1, r2, r1
    MIi_CpuClearFast(0, 0x000006C8, 0x38);
    // ldr r2, [sp]
    // add r2, #0x40
    // add r1, r2, r1
    MIi_CpuClearFast(0, (0x5d << 2), 0xc);
    // ldr r0, [sp]
    // strh r3, [r0, r2]
    // sub r1, #0x10
    // strh r3, [r0, r1]
    // add r2, #0x1e
    // strb r1, [r0, r2]
}




void sub_0202C3E8(void) {
    // str r0, [sp]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, r0, r4
    // add r1, r1, r3
    MI_CpuCopy8((0x38 << 3), 0x38, (r1 * 0x38));
    // ldr r7, [sp]
    // add r7, #0x40
    // str r0, [sp, #8]
    // add r0, r7, r0
    // add r1, r7, r1
    MI_CpuCopy8((r6 * 0xc), (r5 * 0xc), 0xc);
    // ldr r1, [sp, #4]
    // add r1, r1, r4
    MIi_CpuClearFast(0, 0x38);
    // ldr r1, [sp, #8]
    // add r1, r7, r1
    MIi_CpuClearFast(0, 0xc);
    // ldr r0, [sp]
    // add r2, r0, r4
    // strh r3, [r2, r1]
    // ldr r0, [sp, #4]
    // add r1, #0x1e
    // strh r3, [r0, r4]
    // strb r0, [r2, r1]
}




void sub_0202C46C(void) {
    // mvn r5, r5
    // mvn r0, r0
    // mvn r0, r0
}




void sub_0202C4B0(void) {
    // add r0, sp, #0
    GF_RTC_CopyDate();
    // ldr r1, [sp]
    // add r1, r1, r0
    // add r3, r5, r2
    // strh r1, [r3, r0]
    // ldr r2, [sp, #4]
    // strb r2, [r3, r1]
    // ldr r1, [sp, #8]
    // strb r1, [r3, r0]
}




void sub_0202C4F0(void) {
    // add r5, r4, r5
    // add r2, r6, r2
    // strh r2, [r5, r0]
    // strh r2, [r5, r0]
    // add r2, r4, r2
    // add r3, r5, r3
    // strh r3, [r2, r0]
    // strh r3, [r2, r0]
    // add r2, r4, r2
    // ldr r3, [sp, #0x10]
    // add r3, r5, r3
    // strh r3, [r2, r0]
    // strh r3, [r2, r0]
    sub_0202C4B0(r0, (0x7a << 2), 0x0000270F);
}




void sub_0202C554(void) {
    // add r4, r0, r3
    // add r2, r5, r2
    // strh r2, [r4, r3]
    // strh r2, [r4, r3]
    sub_0202C4B0(0x0000270F, (0x38 * r1));
}




void sub_0202C584(void) {
    // add r4, r0, r3
    // add r2, r5, r2
    // strh r2, [r4, r3]
    // strh r2, [r4, r3]
    sub_0202C4B0(0x0000270F, (0x38 * r1));
}




void sub_0202C5B4(void) {
    // add r4, r0, r3
    // add r2, r5, r2
    // strh r2, [r4, r3]
    // strh r2, [r4, r3]
    sub_0202C4B0(0x0000270F, (0x38 * r1));
}




void sub_0202C5E4(void) {
    // add r2, r5, r3
    // add r6, r5, r4
    // add r0, r0, r3
    // strh r0, [r2, r1]
    // strh r0, [r2, r1]
    // add r6, r5, r4
    // add r2, r5, r3
    // add r0, r0, r3
    // strh r0, [r2, r1]
    // strh r0, [r2, r1]
    // add r2, r5, r3
    // add r6, r5, r4
    // add r0, r0, r3
    // strh r0, [r2, r1]
    // strh r0, [r2, r1]
    // add r2, r5, r3
    // add r6, r5, r4
    // add r0, r0, r3
    // strh r0, [r2, r1]
    // strh r0, [r2, r1]
    // add r6, r5, r4
    // add r2, r5, r3
    // add r0, r0, r3
    // strh r0, [r2, r1]
    // strh r0, [r2, r1]
    // add r2, r5, r3
    // add r6, r5, r4
    // add r0, r0, r3
    // strh r0, [r2, r1]
    // strh r0, [r2, r1]
    // add r6, r5, r4
    // add r2, r5, r3
    // add r0, r0, r3
    // strh r0, [r2, r1]
    // strh r0, [r2, r1]
    // add r6, r5, r0
    // add r0, r6, r4
    // add r1, r6, r1
    MIi_CpuCopyFast((7 << 6), (r2 * 0x38), 0x10, *((u16*)(r2 + (r2 * 0x38))));
    // add r1, r6, r4
    MIi_CpuClearFast(0, 0x38);
    // add r2, r5, r4
    // strh r1, [r2, r0]
    // strh r1, [r6, r4]
    // add r0, #0x1e
    // strb r1, [r2, r0]
}




void sub_0202C6F4(void) {
    // _0202C6F8: .word _021D2230
}




void sub_0202C6FC(void) {
    SaveArray_Get(0x19);
    MI_CpuCopy8(_021D2230, (0x23 << 6));
}




void sub_0202C714(void) {
    SaveArray_Get(0x19);
    MI_CpuCopy8(_021D2230, r0, (0x23 << 6));
}



