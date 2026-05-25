/* Decompiled from asm/unk_02025C44.s */
#include "global.h"

void GF_InitG2dRenderer(void) {
}




void sub_02025C54(void) {
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
}




void GF_SetG2dRendererSurface(void) {
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
}




u32 sub_02025C98(void) {
    // sub r3, r4, r3
    // str r3, [sp, #0x18]
    // and r0, r1
    // add r2, #8
    // sub r3, r4, r3
    // str r3, [sp, #0x14]
    // asr r3, r1, #0xb
    // and r1, r3
    // ldrsh r0, [r2, r0]
    // ldrsh r0, [r2, r0]
    // str r0, [sp, #0x10]
    // ldrsh r0, [r2, r0]
    // str r0, [sp, #0xc]
    // ldrsh r0, [r2, r0]
    // str r0, [sp, #8]
    // neg r1, r0
    // str r0, [sp, #0x10]
    // str r4, [sp, #0xc]
    // str r0, [sp, #8]
    // str r0, [sp, #0x1c]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x20]
    // asr r0, r4, #0x1f
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x24]
    // str r0, [sp, #0x28]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x2c]
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0x2c]
    _ll_mul((1 << 0xc), 1, r0, *((u32*)(r2 + 4)));
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    _ll_mul(r4);
    // ldr r1, [sp, #0x30]
    // add r0, r1, r0
    // adc r7, r4
    // add r2, r2, r1
    // adc r3, r4
    // add r1, r0, r2
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x28]
    // add r0, r0, r1
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #0x2c]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x34]
    _ll_mul((((2 << 0xa) >> 0xc) | (r7 << 0x14)), (r1 << 0x14), ((r0 >> 0xc) | (r1 << 0x14)), r1);
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x34]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    _ll_mul();
    // ldr r3, [sp, #0x38]
    // add r2, r3, r2
    // adc r4, r3
    // add r3, r0, r3
    // adc r1, r0
    // ldr r0, [sp, #0x14]
    // add r1, r2, r1
    // add r4, r0, r1
    // str r0, [sp, #0x3c]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0xc]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x44]
    // ldr r1, [sp, #0x44]
    // str r0, [sp, #0x48]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x48]
    // ldr r3, [sp, #0x4c]
    _ll_mul(*((u32*)r5), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (((2 << 0xa) >> 0xc) | (r4 << 0x14)), (2 << 0xa));
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x44]
    // ldr r2, [sp, #0x3c]
    // ldr r3, [sp, #0x40]
    _ll_mul();
    // ldr r3, [sp, #0x50]
    // add r2, r3, r2
    // adc r5, r3
    // add r3, r0, r3
    // adc r1, r0
    // ldr r0, [sp, #0x18]
    // add r1, r2, r1
    // add r5, r0, r1
    // ldr r0, [sp, #8]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x54]
    // ldr r2, [sp, #0x48]
    // ldr r3, [sp, #0x4c]
    _ll_mul((r1 << 0x14), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (((2 << 0xa) >> 0xc) | (r5 << 0x14)), (2 << 0xa));
    // str r0, [sp, #0x58]
    // str r1, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x54]
    // ldr r2, [sp, #0x3c]
    // ldr r3, [sp, #0x40]
    _ll_mul();
    // mov ip, r0
    // ldr r1, [sp, #0x58]
    // add r3, r1, r0
    // ldr r1, [sp, #4]
    // adc r1, r0
    // str r1, [sp, #4]
    // mov r3, ip
    // add r0, r3, r0
    // adc r2, r3
    // add r1, r1, r0
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // ldr r1, [sp, #0x5c]
    // ldr r4, [sp, #0x5c]
    // str r1, [sp, #0x5c]
    // ldr r1, [sp, #0x5c]
}



