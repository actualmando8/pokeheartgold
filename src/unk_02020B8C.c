/* Decompiled from asm/unk_02020B8C.s */
#include "global.h"

void sub_02020B8C(void) {
    // blt _02020B92
}




void sub_02020B94(void) {
    // bgt _02020B9A
}




fx32 GetDistanceFromPointToLine(void) {
    // add r3, sp, #0x14
    // str r0, [r3]
    *((u32*)(r3 + 4)) = 0;
    *((u32*)(r3 + 8)) = 0;
    // add r2, sp, #0x44
    VEC_Subtract(r2);
    // add r2, sp, #0x38
    VEC_Subtract(r5, r4);
    // ldr r0, [sp, #0x48]
    // ldr r5, [sp, #0x4c]
    // str r0, [sp]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x44]
    // asr r4, r5, #0x1f
    // str r0, [sp, #4]
    // asr r7, r0, #0x1f
    // add r0, sp, #0x44
    // add r1, sp, #0x38
    VEC_DotProduct();
    // str r0, [sp, #8]
    _ll_mul(r5, r4, r5, r4);
    // ldr r0, [sp, #4]
    _ll_mul(r7, r0, r7);
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [sp, #0x10]
    _ll_mul(r0, r1);
    // add r2, r6, r2
    // adc r4, r1
    // orr r2, r4
    // ldr r6, [sp, #0xc]
    // add r4, r6, r4
    // adc r5, r1
    // orr r4, r5
    // add r5, r7, r5
    // adc r3, r1
    // orr r3, r1
    // add r1, r4, r3
    // ldr r0, [sp, #8]
    // add r1, r2, r1
    FX_Div((r1 << 0x14), ((2 << 0xa) >> 0xc), ((2 << 0xa) >> 0xc));
    // add r1, sp, #0x44
    // add r2, sp, #0x14
    // add r3, sp, #0x20
    VEC_MultAdd();
    // add r0, sp, #0x20
    // add r1, sp, #0x38
    // add r2, sp, #0x2c
    VEC_Subtract();
    // add r0, sp, #0x2c
    VEC_Mag();
}



u16 CalcAngleBetweenVecs(void) {
    // add r1, sp, #0x24
    VEC_Normalize();
    // add r1, sp, #0x18
    VEC_Normalize(r4);
    // ldr r0, [sp, #0x24]
    // ldr r4, [sp, #0x18]
    // str r0, [sp]
    // asr r0, r0, #0x1f
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // asr r6, r4, #0x1f
    // str r0, [sp, #8]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // ldr r2, [sp, #8]
    // asr r7, r0, #0x1f
    // ldr r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    _ll_mul(r7);
    // str r0, [sp, #0x14]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    _ll_mul(r4, r6);
    // ldr r3, [sp, #0x14]
    // add r3, r3, r2
    // adc r5, r2
    // add r0, r0, r2
    // adc r1, r2
    // add r5, r3, r0
    // ldr r0, [sp, #0x10]
    _ll_mul(((r0 >> 0xc) | (r1 << 0x14)), r7, r4, r6);
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #0xc]
    _ll_mul();
    // add r6, r6, r2
    // adc r4, r3
    // add r4, r0, r2
    // adc r1, r3
    // sub r0, r6, r1
    FX_Atan2Idx((3 << 0xe), r5, (2 << 0xa), 0);
}




void sub_02020D2C(void) {
    // asr r1, r1, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    MTX_RotX33_(((((*((u32*)r1) << 0x10) >> 0x10) << 1) << 1), (((((*((u32*)r1) << 0x10) >> 0x10) << 1) + 1) << 1), FX_SinCosTable_);
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotY33_(((*((u32*)(r4 + 4)) << 0x10) >> 0x10), ((((*((u32*)(r4 + 4)) << 0x10) >> 0x10) << 1) << 1), (((((*((u32*)(r4 + 4)) << 0x10) >> 0x10) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0
    MTX_Concat33(r5, r5);
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotZ33_(((*((u32*)(r4 + 8)) << 0x10) >> 0x10), ((((*((u32*)(r4 + 8)) << 0x10) >> 0x10) << 1) << 1), (((((*((u32*)(r4 + 8)) << 0x10) >> 0x10) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0
    MTX_Concat33(r5, r5);
}




void sub_02020DA4(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, sp, #4
    // ldr r0, [sp]
    // add r1, sp, #4
    // add r0, sp, #4
    // ldr r0, [sp]
    // add r1, sp, #4
}




void sub_02020E10(void) {
    // asr r0, r0, #4
    // ldrsh r0, [r1, r0]
    // ldrsh r1, [r1, r2]
    // ldr r4, [sp, #0x18]
    FX_Div(((r0 << 1) << 1), FX_SinCosTable_, (((r0 << 1) + 1) << 1));
    // asr r1, r6, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(r6, r0);
    // add r0, r0, r6
    // adc r1, r2
    // asr r3, r0, #0x1f
    // add r0, r0, r6
    // adc r3, r2
    // asr r1, r0, #0x1f
    // asr r3, r7, #0x1f
    // str r0, [r4]
    _ll_mul((((((r0 >> 0xc) | (r1 << 0x14)) << 0xd) >> 0xc) | (((r3 << 0xd) | (((r0 >> 0xc) | (r1 << 0x14)) >> 0x13)) << 0x14)), (((r3 << 0xd) | (((r0 >> 0xc) | (r1 << 0x14)) >> 0x13)) << 0x14), r7, ((r3 << 0xd) | (((r0 >> 0xc) | (r1 << 0x14)) >> 0x13)));
    // add r2, r0, r2
    // adc r1, r3
    // str r1, [r5]
}




void sub_02020E80(void) {
}




BOOL sub_02020EB0(void) {
    // str r2, [sp]
    // eor r0, r6
    // ldr r0, [sp]
    // ldr r0, [sp]
    // eor r0, r5
}




void sub_02020EF4(void) {
    // sub r1, r3, r4
    // ldr r0, [sp, #0x18]
    // sub r0, r0, r6
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // str r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r3, r0, r3
    // adc r1, r4
    // ldr r0, [sp]
    // sub r1, r2, r1
    // str r0, [r5]
    // str r1, [sp, #4]
}




BOOL sub_02020F4C(void) {
    // ldr r4, [sp, #0x48]
    // str r2, [sp, #4]
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0x0000FFFF;
    // ldr r2, [sp, #4]
    sub_02020EB0(r0, r1, r3);
    // str r0, [sp]
    // add r0, sp, #0x24
    sub_02020EF4(*((u32*)(r5 + 4)), *((u32*)r7), *((u32*)(r7 + 4)), *((u32*)r5));
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // ldr r2, [sp, #4]
    // add r0, sp, #0x1c
    sub_02020EF4(*((u32*)(r6 + 4)), *((u32*)r1), *((u32*)(r2 + 4)), *((u32*)r6));
    // ldr r1, [sp, #0x1c]
    // ldr r3, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    // sub r1, r3, r1
    // sub r0, r2, r0
    FX_Div(0);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0xc]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul();
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x10]
    // add r0, r2, r0
    // adc r1, r3
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // add r1, sp, #0x30
    FX_Modf((((2 << 0xa) >> 0xc) | (r1 << 0x14)), (r1 << 0x14), r0, 0);
    // ldr r2, [sp, #0x30]
    // add r0, r2, r0
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x10]
    // asr r0, r0, #0xc
    // str r0, [r4]
    // ldr r0, [sp, #0x14]
    // add r0, r1, r0
    // add r1, sp, #0x2c
    FX_Modf(((2 << 0xa) << 1), (2 << 0xa));
    // ldr r2, [sp, #0x2c]
    // add r0, r2, r0
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x2c]
    // asr r0, r0, #0xc
    *((u32*)(r4 + 4)) = ((2 << 0xa) << 1);
    // mov ip, r0
    // mov ip, r1
    // str r0, [sp, #8]
    // str r2, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x18]
    // str r3, [sp, #0x18]
    // ldr r0, [sp, #4]
    // mov r6, ip
    // ldr r4, [sp, #8]
    // ldr r2, [sp, #0x18]
}



