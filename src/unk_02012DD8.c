/* Decompiled from asm/unk_02012DD8.s */
#include "global.h"

void sub_02012DD8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void sub_02012E10(void) {
}




void sub_02012E6C(void) {
    // ldr r6, [sp, #0x38]
    // str r3, [sp, #0x1c]
    // str r2, [sp, #0x18]
    // ldr r3, [sp, #0x44]
    // ldr r7, [sp, #0x3c]
    sub_02010E64(*((u8*)(r1 + 8)), r6);
    *((u32*)(r5 + 0x14)) = 0x007FFF80;
    // ldrsh r1, [r4, r1]
    *((u32*)(r5 + 0xc)) = 0;
    // ldrsh r1, [r4, r1]
    *((u32*)(r5 + 0x10)) = 2;
    *((u32*)(r5 + 0x18)) = *((u32*)(r4 + 4));
    *((u32*)(r5 + 0x1c)) = *((u32*)(r4 + 4));
    // ldr r1, [sp, #0x18]
    _s32_div_f((0x007FFF80 >> 7), *((u32*)(r4 + 4)));
    *((u32*)(r5 + 0x20)) = r0;
    // ldr r0, [sp, #0x18]
    *((u32*)(r5 + 0x24)) = r0;
    // ldr r0, [sp, #0x1c]
    *((u32*)(r5 + 0x28)) = r0;
    *((u32*)(r5 + 0x2c)) = 0;
    // ldr r0, [sp, #0x40]
    *((u32*)(r5 + 0x44)) = r7;
    *((u32*)(r5 + 0x48)) = 0;
    // ldr r0, [sp, #0x44]
    *((u32*)(r5 + 0x30)) = 0;
    *((u32*)(r5 + 0x34)) = *((u8*)(r4 + 0xb));
    *((u32*)(r5 + 0x38)) = *((u8*)(r4 + 8));
    *((u32*)(r5 + 0x3c)) = r6;
    *((u32*)(r5 + 0x40)) = 1;
    sub_020131AC(r5);
    SysTask_CreateOnVWaitQueue(sub_02010F00, r5, 0x000003FF);
    sub_02010EE0(r5, 0);
    // str r6, [sp]
    // ldrsh r1, [r0, r1]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    sub_02010F84(r7, *((u8*)(r4 + 9)), *((u8*)(r4 + 0xa)), *((u8*)(r4 + 8)));
    sub_02011068(r7, 1, r6, *((u32*)(r5 + 0x34)));
    sub_02011068(r7, 2, r6, *((u32*)(r5 + 0x34)));
    // ldr r0, [sp, #0x44]
    // str r0, [sp]
    sub_0200FF88(*((u32*)(r5 + 0x48)), r5, sub_02010C38, r6);
}




void sub_02012F54(void) {
    *((u32*)(r0 + 0x2c)) = (*((u32*)(r0 + 0x2c)) + 1);
    *((u32*)(r0 + 0x2c)) = 0;
    // add r1, r2, r1
    *((u32*)(r0 + 0x1c)) = *((u32*)(r0 + 0x20));
    *((u32*)(r0 + 0x24)) = (*((u32*)(r0 + 0x24)) - 1);
    // add r0, #0x1c
    // sub r1, r1, r2
    // str r1, [r0]
    // add r2, #0x1c
    // add r1, r1, r0
    // str r1, [r2]
    sub_02010FEC(*((u32*)(r0 + 0x44)), *((u32*)(r0 + 0x38)), *((u32*)(r0 + 0x3c)), *((u32*)(r0 + 0x34)));
    *((u32*)(r4 + 0x40)) = 0;
    sub_020131AC(r4);
    SysTask_CreateOnVWaitQueue(sub_02010F00, r4, 0x000003FF);
    sub_0200FFB4(*((u32*)(r4 + 0x48)), *((u32*)(r4 + 8)), *((u32*)(r4 + 0x30)));
}




void sub_02013004(void) {
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x10]
    // asr r0, r0, #4
    // str r1, [sp]
    // ldr r3, [sp, #0x2c]
    // ldrsh r1, [r0, r1]
    // ldr r6, [sp, #0x30]
    // asr r1, r0, #0xc
    // ldr r0, [sp]
    // ldr r7, [sp, #0x34]
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    // ldrsh r1, [r0, r1]
    // asr r0, r0, #0xc
    // add r1, r4, r0
    // asr r0, r3, #4
    // mov ip, r0
    // ldrsh r2, [r0, r2]
    // asr r2, r0, #0xc
    // ldr r0, [sp]
    // add r0, r0, r2
    // str r0, [sp, #8]
    // mov r0, ip
    // ldrsh r2, [r0, r2]
    // asr r0, r0, #0xc
    // add r0, r4, r0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // sub r2, r3, r0
    // str r0, [r6]
    // str r0, [r7]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp]
    // sub r2, r2, r0
    // sub r0, r5, r1
    // sub r1, r1, r4
    _s32_div_f((r2 * r2), ((r0 << 1) << 1), r2);
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [r6]
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // sub r1, r1, r0
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // ldr r1, [sp, #4]
    // sub r1, r1, r4
    _s32_div_f((r0 * r1));
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [r6]
    // str r0, [r6]
    // str r0, [r7]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp]
    // sub r2, r2, r0
    // sub r0, r5, r1
    // sub r1, r1, r4
    _s32_div_f((r4 * r4), r4);
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [r6]
    // str r0, [r6]
    // str r0, [r6]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // sub r1, r1, r0
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // ldr r1, [sp, #4]
    // sub r1, r1, r4
    _s32_div_f((r4 * r4), r4);
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [r7]
    // str r0, [r7]
    // str r0, [r7]
    // str r1, [r6]
    // str r0, [r7]
}




void sub_020131AC(void) {
    // add r7, sp, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r0, sp, #0x10
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // strh r1, [r4, r0]
    // ldr r1, [sp, #0x10]
    // strh r1, [r4, r0]
}




void sub_020131F4(void) {
    // and r1, r2
    // str r0, [r3]
    // and r1, r2
    // str r0, [r3]
}




void sub_02013220(void) {
    // strh r2, [r0]
    // strh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
}




void sub_020132A8(void) {
    // strh r2, [r0]
    // strh r2, [r0]
}




void sub_020132E8(void) {
    // add r0, sp, #0
    // strb r1, [r0]
    // add r0, sp, #0
    // strb r1, [r0]
    // add r0, sp, #0
    // strb r1, [r0]
    // add r0, sp, #0
    // strb r1, [r0]
    // add r1, sp, #0
    // ldrsb r0, [r1, r0]
}




void sub_0201333C(void) {
    // add r0, sp, #0
    // strb r1, [r0]
    // add r1, sp, #0
    // ldrsb r0, [r1, r0]
}




void sub_02013364(void) {
    // ldr r3, [sp, #8]
    // ldr r3, [sp, #0xc]
    // and r5, r3
    // and r3, r1
    // strh r4, [r0]
    *((u16*)(0x04000040 + 4)) = (((r3 << 0x18) >> 0x18) | (0xff << 8));
    // and r5, r3
    // and r3, r1
    // strh r4, [r0]
    *((u16*)(0x04001040 + 4)) = (((r3 << 0x18) >> 0x18) | (0xff << 8));
    // ldr r3, [sp, #0xc]
    // and r5, r3
    // and r3, r1
    // strh r4, [r0]
    *((u16*)(0x04000042 + 4)) = (((r3 << 0x18) >> 0x18) | (0xff << 8));
    // and r5, r3
    // and r3, r1
    // strh r4, [r0]
    *((u16*)(0x04001042 + 4)) = (((r3 << 0x18) >> 0x18) | (0xff << 8));
}




void sub_02013424(void) {
}




void sub_02013440(void) {
    // ldr r5, [sp, #0x10]
    // add r0, #0x10
    // add r6, r0, r4
    // add r4, r6, r0
    // str r1, [r6, r0]
    *((u32*)((r5 << 5) + 4)) = r2;
    *((u32*)((r5 << 5) + 8)) = r3;
    *((u32*)((r5 << 5) + 0xc)) = r5;
    SysTask_CreateOnVWaitQueue(sub_020134D0, (r5 << 5), 1);
}




void sub_02013468(void) {
}




void sub_02013488(void) {
    // ldr r5, [sp, #0x20]
    // add r0, #0x80
    // add r6, r0, r1
    // ldr r0, [sp, #0x1c]
    // add r1, r6, r3
    // strh r7, [r6, r3]
    *((u16*)((r5 << 5) + 2)) = r2;
    *((u16*)((r5 << 5) + 4)) = r3;
    // ldr r2, [sp, #0x18]
    *((u16*)((r5 << 5) + 6)) = r3;
    *((u32*)((r5 << 5) + 8)) = r0;
    *((u32*)((r5 << 5) + 0xc)) = r5;
    SysTask_CreateOnVWaitQueue(sub_02013504, (r5 << 5), 1, (r0 << 4));
}




void sub_020134BC(void) {
    // ldmia r1!, {r0, r1}
}




void sub_020134D0(void) {
}




void sub_020134EC(void) {
}




void sub_02013504(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r0, [r3, r0]
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r5]
}



