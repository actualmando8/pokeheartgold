/* Decompiled from asm/overlay_80_0223AC24.s */
#include "global.h"

void ov80_0223AC24(void) {
    // str r2, [sp]
    Heap_Alloc(0xb, 0x4c);
    memset(0, 0x4c);
    SysTask_CreateOnMainQueue(ov80_0223AC68, r4, 5);
    *((u32*)(r4 + 0x48)) = r5;
    // str r0, [r5]
    *((u32*)(r4 + 0xc)) = r6;
    // ldr r0, [sp]
    *((u32*)(r4 + 0x10)) = r7;
    *((u32*)(r4 + 0x14)) = 0;
    // ldr r0, [sp, #0x18]
    *((u32*)(r4 + 4)) = 0;
}




void ov80_0223AC68(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223AC80: ; jump table
    // str r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // add r0, #0x30
    // str r0, [r4]
    // str r0, [sp]
    // add r0, #0x18
    // str r0, [r4]
    // add r0, #0x18
    // str r0, [r4]
    // str r0, [sp]
    // add r0, #0x18
    // str r0, [r4]
    // add r0, #0x18
    // str r0, [r4]
    // str r0, [r4]
    // str r1, [r4]
    // str r1, [r2]
    // add r4, #0x30
}




void ov80_0223AD5C(void) {
    GXx_SetMasterBrightness_(0x0400006C);
    GXx_SetMasterBrightness_(0x0400106C);
}




void ov80_0223AD7C(void) {
}




void ov80_0223AD88(void) {
    ov80_0223ADC8();
    SysTask_CreateOnVWaitQueue(ov80_0223ADA4, r5, 0xa);
}




void ov80_0223ADA4(void) {
}




void ov80_0223ADB8(void) {
    // str r1, [r0]
    // sub r1, r2, r1
}




void ov80_0223ADC8(void) {
    // add r0, r0, r1
    // str r0, [r4]
}




void ov80_0223ADF4(void) {
}




void ov80_0223AE0C(void) {
}




void ov80_0223AE14(void) {
    // add r0, #0x2e
    // ldr r3, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r0, #0x14
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r1, [sp, #0x28]
    // add r0, #0x2d
    // strb r1, [r0]
    // add r0, sp, #0x2c
    // add r0, #0x2f
    // strb r1, [r0]
    // add r5, #0x2e
    // strb r0, [r5]
}




void ov80_0223AE6C(void) {
    // add r1, #0x2e
    // add r0, #0x14
    // add r0, #0x2c
    // sub r1, r2, r1
    // asr r3, r1, #0x10
    // add r1, #0x2d
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // sub r1, r6, r1
    // add r0, #0x2f
    // asr r1, r1, #0x10
    // add r2, r1, r2
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
}




void ov80_0223AED4(void) {
    // ldr r5, [sp, #0x18]
    // sub r1, r5, r3
    // str r1, [sp]
    // sub r1, r2, r4
    // str r1, [sp, #4]
    // add r1, sp, #8
}




void ov80_0223AF30(void) {
}




void ov80_0223AF60(void) {
}




void ov80_0223AF80(void) {
    // str r3, [r0]
    // add r3, sp
    // strb r4, [r0, r3]
    // strb r1, [r0, r4]
    // strb r2, [r0, r1]
    // sub r2, #8
    // strb r1, [r0, r2]
    // strb r1, [r0, r2]
    // strb r1, [r0, r2]
    // strb r1, [r0, r2]
    // strb r1, [r0, r2]
    // strb r1, [r0, r2]
    // strb r2, [r0, r1]
}




void ov80_0223AFC4(void) {
    // sub r1, #9
    // ldrsb r1, [r5, r1]
    // strb r2, [r5, r1]
    // ldrsb r1, [r5, r1]
    // strb r2, [r5, r1]
    // sub r1, #8
    // add r1, r3, r4
    // add r3, #8
    // str r3, [sp]
    // str r4, [sp, #4]
    // add r2, #0x20
    // str r4, [sp, #8]
    // str r4, [sp, #0xc]
    // str r4, [sp, #0x10]
    // sub r0, #9
    // str r4, [sp, #0x14]
    // add r0, r5, r0
    ov80_0223AE14(*((u32*)((*((u8*)(r0 + 1)) << 2) + 4)), (*((u8*)(*((u8*)(r0 + 1)) + 1)) << 5), (*((u8*)(*((u8*)(r0 + 1)) + 1)) << 5), (*((u8*)(r0 + (1 - 7))) << 4));
    // eor r1, r2
    // add r1, r3, r4
    // sub r3, r3, r4
    // add r3, #8
    // str r3, [sp]
    // str r4, [sp, #4]
    // add r2, #0x20
    // str r4, [sp, #8]
    // str r4, [sp, #0xc]
    // str r4, [sp, #0x10]
    // str r4, [sp, #0x14]
    // add r0, r5, r0
    ov80_0223AE14(*((u32*)(((*((u8*)(r5 + (0x00000187 - 3))) + 1) << 2) + 4)), (*((u8*)(*((u8*)(r5 + (0x00000187 - 2))) + (0x00000187 - 2))) << 5), (*((u8*)(*((u8*)(r5 + (0x00000187 - 2))) + (0x00000187 - 2))) << 5), (5 << 4));
    // add r1, r3, r4
    // add r3, #8
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r2, #0x20
    // add r0, r5, r0
    ov80_0223AE14(*((u32*)(((*((u8*)(r5 + (0x00000187 - 3))) + 2) << 2) + 4)), (*((u8*)(*((u8*)(r5 + (0x00000187 - 2))) + (0x00000187 - 2))) << 5), (*((u8*)(*((u8*)(r5 + (0x00000187 - 2))) + (0x00000187 - 2))) << 5), ((*((u8*)(r5 + (0x00000187 - 1))) + 6) << 4));
    // eor r1, r2
    // add r1, r3, r4
    // sub r2, r2, r3
    // add r3, #8
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r2, #0x20
    // add r0, r5, r0
    ov80_0223AE14(*((u32*)(((*((u8*)(r5 + (0x00000187 - 3))) + 3) << 2) + 4)), (*((u8*)(*((u8*)(r5 + (0x00000187 - 2))) + (0x00000187 - 2))) << 5), (*((u8*)(*((u8*)(r5 + (0x00000187 - 2))) + (0x00000187 - 2))) << 5), (0xb << 4));
    // strb r0, [r5, r1]
    // strb r2, [r5, r0]
    // sub r2, r2, r3
    // ror r2, r0
    // add r0, r3, r2
    // eor r2, r0
    // strb r2, [r5, r0]
    // strb r2, [r5, r0]
    // strb r2, [r5, r0]
    // add r6, r5, r0
    ov80_0223AE6C(*((u32*)(r6 + 4)), (0x61 << 2), 0, (*((u8*)(r5 + ((0x61 << 2) + 1))) >> 0x1f));
    // str r0, [sp, #0x18]
    // strb r0, [r5, r7]
    // ldr r0, [sp, #0x18]
    // strb r2, [r5, r0]
}




void ov80_0223B1D4(void) {
    // sub r1, #9
    // ldrsb r1, [r5, r1]
    // strb r2, [r5, r1]
    // ldrsb r1, [r5, r1]
    // strb r2, [r5, r1]
    // add r2, r4, r2
    // sub r1, #8
    // add r2, #0x20
    // str r2, [sp]
    // add r1, #8
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // sub r0, #9
    // str r2, [sp, #0x14]
    // add r0, r5, r0
    ov80_0223AE14(*((u32*)((*((u8*)(r0 + 1)) << 2) + 4)), (*((u8*)(r0 + 1)) << 4), (*((u8*)(r0 + 1)) << 4), (*((u8*)(*((u8*)(r0 + (1 - 7))) + (6 * *((u8*)(r0 + (1 - 6)))))) << 5));
    // sub r0, r0, r1
    // add r1, #8
    // eor r3, r0
    // add r0, r4, r0
    // add r0, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r5, r0
    ov80_0223AE14(*((u32*)(((*((u8*)(r5 + (0x00000185 - 1))) + 1) << 2) + 4)), (7 << 4), (7 << 4), (*((u8*)(*((u8*)(r5 + (0x00000185 + 1))) + (6 * *((u8*)(r5 + (0x00000185 + 2)))))) << 5));
    // add r0, #8
    // add r1, #8
    // add r0, r4, r0
    // add r0, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r5, r0
    ov80_0223AE14(*((u32*)(((*((u8*)(r5 + (0x00000185 - 1))) + 2) << 2) + 4)), (*((u8*)(r5 + 0x00000185)) << 4), (*((u8*)(r5 + 0x00000185)) << 4), (*((u8*)(*((u8*)(r5 + (0x00000185 + 1))) + (6 * *((u8*)(r5 + (0x00000185 + 2)))))) << 5));
    // sub r0, r0, r1
    // add r1, #8
    // eor r3, r0
    // add r0, r4, r0
    // add r0, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r5, r0
    ov80_0223AE14(*((u32*)(((*((u8*)(r5 + (0x00000185 - 1))) + 3) << 2) + 4)), (0xf << 4), (0xf << 4), (*((u8*)(*((u8*)(r5 + (0x00000185 + 1))) + (6 * *((u8*)(r5 + (0x00000185 + 2)))))) << 5));
    // strb r1, [r5, r0]
    // strb r2, [r5, r1]
    _s32_div_f(*((u8*)(r5 + ((0x61 << 2) + 2))), 6, (*((u8*)(r5 + ((0x61 << 2) + 2))) + 1));
    // eor r0, r2
    // strb r0, [r5, r1]
    // strb r2, [r5, r0]
    // strb r2, [r5, r0]
    // add r6, r5, r0
    ov80_0223AE6C(*((u32*)(r6 + 4)), 0x00000187, 0);
    // str r0, [sp, #0x18]
    // strb r0, [r5, r7]
    // ldr r0, [sp, #0x18]
    // strb r2, [r5, r0]
}




void ov80_0223B3EC(void) {
    // ldr r3, _0223B3F8 ; =SysTask_CreateOnVBlankQueue
    // mov r2, #1
    // add r1, r0, #0
    // ldr r0, _0223B3FC ; =ov80_0223B400
    // lsl r2, r2, #0xa
    // bx r3
    // _0223B3F8: .word SysTask_CreateOnVBlankQueue
    // _0223B3FC: .word ov80_0223B400
    // TODO: decompile
}




void ov80_0223B400(void) {
}




void ov80_0223B424(void) {
}




void ov80_0223B440(void) {
    // ldr r4, [sp, #0x20]
    // add r5, sp, #0x10
    // str r4, [sp]
    // ldrsh r4, [r5, r4]
    // str r4, [sp, #4]
    // ldr r4, [sp, #0x28]
    // str r4, [sp, #8]
    // ldr r4, [sp, #0x2c]
    // str r4, [sp, #0xc]
    // ldr r4, [sp, #0x30]
    // str r4, [sp, #0x10]
}




void ov80_0223B468(void) {
}




void ov80_0223B484(void) {
    // blx r1
}




void ov80_0223B4A0(void) {
    GF_AssertFail();
    *((u32*)(r5 + 8)) = 1;
    *((u32*)(r5 + 0xc)) = 0;
    *((u32*)(r5 + 0x18)) = r4;
    *((u32*)(r5 + 0x10)) = r6;
    *((u32*)(r5 + 0x14)) = r7;
    SysTask_CreateOnVWaitQueue(ov80_0223B468, r5, 0);
    *((u32*)(r5 + 4)) = r0;
    SysTask_CreateOnVBlankQueue(ov80_0223B484, r5, 0);
    // str r0, [r5]
}




void ov80_0223B4E0(void) {
}




void ov80_0223B504(void) {
    sub_02014A60(*((u32*)(r0 + 0x1c)));
    sub_02014AA0();
    sub_02014AB0(r5, *((u32*)(r4 + 0x00003020)), 0x20, 1);
}




void ov80_0223B528(void) {
}




void ov80_0223B53C(void) {
}




void ov80_0223B544(void) {
    Heap_Alloc(r2, 0x00003024);
    // str r0, [sp]
    memset(0, 0x00003024);
    // ldr r0, [sp]
    GF_AssertFail();
    // ldr r1, [sp]
    // ldr r2, [sp]
    // add r1, #0x20
    // add r2, r2, r3
    sub_02014A08(r5, 0x00001820);
    // ldr r1, [sp]
    *((u32*)(r1 + 0x1c)) = r0;
    GF_AssertFail();
    // ldr r0, [sp]
    // str r4, [r0, r1]
    // add r3, #0x20
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r4, r6, r0
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldr r0, [sp]
    ov80_0223B4A0(0x00001820, 0x00001820, ov80_0223B528, ov80_0223B53C);
    // ldr r0, [sp]
}




void ov80_0223B5E8(void) {
}




void ov80_0223B60C(void) {
}



