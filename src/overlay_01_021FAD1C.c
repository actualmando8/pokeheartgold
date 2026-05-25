/* Decompiled from asm/overlay_01_021FAD1C.s */
#include "global.h"

void ov01_021FAD1C(void) {
    // push {r3, r4, r5, r6}
    // ldr r4, [r0]
    // ldr r3, [r1]
    // cmp r4, r3
    // bgt _021FAD2C
    // add r3, r0, #0
    // add r4, r1, #0
    // b _021FAD30
    // add r3, r1, #0
    // add r4, r0, #0
    // ldr r6, [r0, #4]
    // ldr r5, [r1, #4]
    // cmp r6, r5
    // bgt _021FAD3E
    // add r5, r0, #4
    // add r0, r1, #4
    // b _021FAD42
    // add r5, r1, #4
    // add r0, r0, #4
    // ldr r6, [r2]
    // ldr r1, [r3]
    // cmp r1, r6
    // bgt _021FAD64
    // ldr r1, [r4]
    // cmp r6, r1
    // bgt _021FAD64
    // ldr r2, [r2, #4]
    // ldr r1, [r5]
    // cmp r1, r2
    // bgt _021FAD64
    // ldr r0, [r0]
    // cmp r2, r0
    // bgt _021FAD64
    // mov r0, #1
    // pop {r3, r4, r5, r6}
    // bx lr
    // mov r0, #0
    // pop {r3, r4, r5, r6}
    // bx lr
    // TODO: decompile
}




void ov01_021FAD6C(void) {
}




void ov01_021FAD9C(void) {
}




void ov01_021FADBC(void) {
}




void ov01_021FADD4(void) {
    // str r2, [r0]
    // add r0, #0xc
}




u32 ov01_021FADEC(void) {
    // strh r0, [r3]
    // add r5, r1, r5
    // asr r5, r5, #1
    // add r6, r4, r5
    // add r5, r6, r5
    // asr r5, r5, #1
    // strh r5, [r3]
    // add r6, r5, r1
    // add r5, r6, r5
    // asr r5, r5, #1
    // strh r0, [r3]
}




u32 ov01_021FAE50(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0xe4]
    // ldr r5, [sp, #0xe0]
    // str r0, [sp, #0xe4]
    // str r1, [sp, #4]
    // str r2, [sp, #0x30]
    // str r3, [sp, #0x34]
    // add r0, sp, #0x54
    ov01_021FADD4(0);
    // ldr r2, [sp, #0x34]
    // add r3, sp, #0x28
    ov01_021FADEC(*((u32*)(r5 + 8)), ((*((u32*)(r5 + 0x1c)) << 0x10) >> 0x10));
    // add r0, sp, #0x28
    // add r1, r6, r0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r7, sp, #0x54
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    // add r2, sp, #0x44
    ov01_021FAD6C(r5, *((u16*)(((*((u16*)(r1 + 6)) << 1) << 1) + (*((u16*)(r1 + 6)) << 1))), *((u32*)(r5 + 0xc)));
    // add r0, sp, #0x44
    // add r1, sp, #0x4c
    // add r2, sp, #0x30
    ov01_021FAD1C();
    // add r2, sp, #0x38
    ov01_021FAD9C(r5, r6);
    // add r2, sp, #0x2c
    ov01_021FADBC(r5, r6);
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x30]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul();
    // str r0, [sp, #0x1c]
    // ldr r2, [sp, #0x34]
    // ldr r0, [sp, #0x40]
    // str r1, [sp, #0xc]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul();
    // ldr r0, [sp, #0x2c]
    // ldr r2, [sp, #0x1c]
    // mov ip, r0
    // add r0, r2, r0
    // ldr r3, [sp, #0xc]
    // adc r3, r2
    // str r3, [sp, #0xc]
    // add r3, r6, r2
    // adc r1, r2
    // add r1, r0, r2
    // mov r0, ip
    // add r0, r0, r1
    // ldr r1, [sp, #0x3c]
    // neg r0, r0
    FX_Div((((2 << 0xa) >> 0xc) | (r3 << 0x14)), (r1 << 0x14), ((r3 >> 0xc) | (r1 << 0x14)));
    // str r0, [r7]
    // add r7, #0xc
    // ldr r0, [sp, #0x18]
    // str r1, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp]
    // add r0, sp, #0x54
    // add r0, sp, #0x54
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x54]
    sub_02020B94(((r0 + 1) << 0x10), (((0 + 1) << 0x10) >> 0x10), *((u32*)(((r0 + 1) << 0x10) + (0 * 0xc))), 0xc);
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x54]
    sub_02020B8C();
    // sub r7, r5, r0
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x54
    // ldr r0, [sp, #4]
    sub_02020B94((0xc * 1), *((u32*)(r2 + r1)));
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    // add r2, sp, #0x54
    // ldr r0, [sp, #4]
    sub_02020B8C(*((u32*)(r2 + r1)));
    // ldr r1, [sp, #0x24]
    // sub r0, r1, r0
    // add r0, sp, #0x54
    // ldr r0, [sp, #0xe4]
    // str r1, [r0]
    // ldr r1, [sp, #0x54]
    // ldr r0, [sp, #0xe4]
    // str r1, [r0]
    // ldr r1, [sp, #0x54]
    // ldr r0, [sp, #0xe4]
    // str r1, [r0]
}



