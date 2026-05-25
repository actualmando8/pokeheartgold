/* Decompiled from asm/overlay_80_0223AC24.s */
#include "global.h"

void ov80_0223AC24(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r7, r1, #0
    // mov r0, #0xb
    // mov r1, #0x4c
    // str r2, [sp]
    // add r5, r3, #0
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x4c
    // add r4, r0, #0
    // bl memset
    // ldr r0, _0223AC64 ; =ov80_0223AC68
    // add r1, r4, #0
    // mov r2, #5
    // bl SysTask_CreateOnMainQueue
    // str r5, [r4, #0x48]
    // cmp r5, #0
    // beq _0223AC54
    // mov r0, #0
    // str r0, [r5]
    // str r6, [r4, #0xc]
    // ldr r0, [sp]
    // str r7, [r4, #0x10]
    // str r0, [r4, #0x14]
    // ldr r0, [sp, #0x18]
    // str r0, [r4, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223AC64: .word ov80_0223AC68
    // TODO: decompile
}



void ov80_0223AC68(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223AC80: ; jump table
    // str r0, [sp]
    // add r0, #0x30
    ov80_0223AD7C(r1, 0, *((u32*)(r1 + 0x14)), 2);
    // str r0, [sp]
    // add r0, #0x30
    ov80_0223AD7C(r4, 0, *((u32*)(r4 + 0x14)), 1);
    // str r0, [r4]
    // str r0, [sp]
    // add r0, #0x18
    ov80_0223AD7C(r4, 0, *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0xc)));
    // str r0, [r4]
    // add r0, #0x18
    ov80_0223AD88(r4);
    // str r0, [r4]
    // str r0, [sp]
    // add r0, #0x18
    ov80_0223AD7C(r4, *((u32*)(r4 + 0x10)), 0, *((u32*)(r4 + 0xc)));
    // str r0, [r4]
    // add r0, #0x18
    ov80_0223AD88(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [r4]
    // str r0, [r4]
    // str r1, [r4]
    *((u32*)(r4 + 8)) = 0;
    // str r1, [r2]
    SysTask_Destroy(1, 1, *((u32*)(r4 + 0x48)));
    Heap_Free(r4);
    // add r4, #0x30
    ov80_0223AD88(r4);
}



void ov80_0223AD5C(void) {
    // push {r3, lr}
    // cmp r0, #1
    // bne _0223AD6A
    // ldr r0, _0223AD74 ; =0x0400006C
    // bl GXx_SetMasterBrightness_
    // pop {r3, pc}
    // ldr r0, _0223AD78 ; =0x0400106C
    // bl GXx_SetMasterBrightness_
    // pop {r3, pc}
    // nop
    // _0223AD74: .word 0x0400006C
    // _0223AD78: .word 0x0400106C
    // TODO: decompile
}



void ov80_0223AD7C(void) {
}



void ov80_0223AD88(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov80_0223ADC8
    // add r4, r0, #0
    // ldr r0, _0223ADA0 ; =ov80_0223ADA4
    // add r1, r5, #0
    // mov r2, #0xa
    // bl SysTask_CreateOnVWaitQueue
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _0223ADA0: .word ov80_0223ADA4
    // TODO: decompile
}



void ov80_0223ADA4(void) {
}



void ov80_0223ADB8(void) {
    // str r1, [r0]
    *((u32*)(r0 + 4)) = r1;
    // sub r1, r2, r1
    *((u32*)(r0 + 8)) = r1;
    *((u32*)(r0 + 0x10)) = r3;
    *((u32*)(r0 + 0xc)) = 0;
}



void ov80_0223ADC8(void) {
    // mul r0, r1
    _s32_div_f(*((u32*)(r0 + 0xc)), *((u32*)(r0 + 0x10)));
    // add r0, r0, r1
    // str r0, [r4]
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
}



void ov80_0223ADF4(void) {
}



void ov80_0223AE0C(void) {
}



void ov80_0223AE14(void) {
    // add r0, #0x2e
    // ldrb r0, [r0]
    GF_AssertFail();
    // ldr r3, [sp, #0x1c]
    ov80_0223ADB8(r5, r4, r6);
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r0, #0x14
    ov80_0223ADB8(r5, r7);
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    *((u32*)(r5 + 0x28)) = r0;
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r1, [sp, #0x28]
    // add r0, #0x2d
    // strb r1, [r0]
    // add r0, sp, #0x2c
    // ldrb r1, [r0]
    // add r0, #0x2f
    // strb r1, [r0]
    // add r5, #0x2e
    // strb r0, [r5]
}



void ov80_0223AE6C(void) {
    // add r1, #0x2e
    // ldrb r1, [r1]
    ov80_0223ADC8(1, r0);
    // add r0, #0x14
    ov80_0223ADC8(r5);
    // add r0, #0x2c
    // ldrb r0, [r0]
    // sub r1, r2, r1
    // asr r3, r1, #0x10
    // add r1, #0x2d
    // ldrb r2, [r1]
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // sub r1, r6, r1
    // add r0, #0x2f
    // ldrb r0, [r0]
    // asr r1, r1, #0x10
    // add r2, r1, r2
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
    ov80_0223AED4(*((u32*)(r5 + 0x28)), ((*((u32*)r5) >> 1) << 0x10), (*((u32*)r5) << 0x10));
}



void ov80_0223AED4(void) {
    // ldr r5, [sp, #0x18]
    // sub r1, r5, r3
    // str r1, [sp]
    // sub r1, r2, r4
    // str r1, [sp, #4]
    // add r1, sp, #8
    FillWindowPixelRect(*((u8*)((((((1 << 8) << 0x10) >> 0x10) << 0x10) >> 0x10) + 0x14)), ((0 << 0x10) >> 0x10), ((0 << 0x10) >> 0x10));
}



void ov80_0223AF30(void) {
    Heap_Alloc((0x19 << 4));
    memset(0, (0x19 << 4));
    ov80_0223ADF4(r6);
    *((u32*)(r5 + 4)) = r0;
}



void ov80_0223AF60(void) {
    ov80_0223AE0C(*((u32*)(r0 + 4)));
    Heap_Free(r6);
}



void ov80_0223AF80(void) {
    // push {r3, r4}
    // str r3, [r0]
    // ldr r3, _0223AFC0 ; =0xFFFFFFF8
    // add r3, sp
    // ldrb r4, [r3, #0x10]
    // mov r3, #0x63
    // lsl r3, r3, #2
    // strb r4, [r0, r3]
    // sub r4, r3, #3
    // strb r1, [r0, r4]
    // sub r1, r3, #2
    // strb r2, [r0, r1]
    // add r2, r3, #0
    // mov r1, #0
    // sub r2, #8
    // strb r1, [r0, r2]
    // sub r2, r3, #7
    // strb r1, [r0, r2]
    // sub r2, r3, #6
    // strb r1, [r0, r2]
    // sub r2, r3, #5
    // strb r1, [r0, r2]
    // sub r2, r3, #4
    // strb r1, [r0, r2]
    // sub r2, r3, #1
    // strb r1, [r0, r2]
    // mov r2, #1
    // add r1, r3, #1
    // strb r2, [r0, r1]
    // pop {r3, r4}
    // bx lr
    // nop
    // _0223AFC0: .word 0xFFFFFFF8
    // TODO: decompile
}



void ov80_0223AFC4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, _0223B1C8 ; =0x0000018D
    // ldrb r1, [r5, r0]
    // cmp r1, #0
    // bne _0223AFD8
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r1, r0, #0
    // sub r1, #9
    // ldrb r1, [r5, r1]
    // cmp r1, #0x60
    // bhs _0223AFF2
    // sub r1, r0, #2
    // ldrsb r1, [r5, r1]
    // sub r2, r1, #1
    // sub r1, r0, #2
    // strb r2, [r5, r1]
    // ldrsb r1, [r5, r1]
    // cmp r1, #0
    // ble _0223AFF4
    // b _0223B16E
    // sub r1, r0, #3
    // ldrb r2, [r5, r1]
    // sub r1, r0, #2
    // ldr r3, _0223B1CC ; =ov80_0223DBEC
    // strb r2, [r5, r1]
    // sub r1, r0, #6
    // ldrb r1, [r5, r1]
    // lsl r4, r1, #4
    // add r1, r0, #0
    // sub r1, #8
    // ldrb r2, [r5, r1]
    // add r1, r3, r4
    // sub r3, r0, #7
    // ldrb r3, [r5, r3]
    // sub r4, r0, #4
    // ldrb r1, [r2, r1]
    // lsl r3, r3, #4
    // add r3, #8
    // str r3, [sp]
    // ldrb r4, [r5, r4]
    // lsl r1, r1, #5
    // add r2, r1, #0
    // str r4, [sp, #4]
    // ldr r4, [r5]
    // add r2, #0x20
    // str r4, [sp, #8]
    // mov r4, #0x20
    // str r4, [sp, #0xc]
    // mov r4, #0x10
    // str r4, [sp, #0x10]
    // sub r4, r0, #1
    // ldrb r4, [r5, r4]
    // sub r0, #9
    // str r4, [sp, #0x14]
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #4]
    // bl ov80_0223AE14
    // ldr r0, _0223B1D0 ; =0x00000187
    // mov r1, #1
    // ldrb r2, [r5, r0]
    // ldr r3, _0223B1CC ; =ov80_0223DBEC
    // eor r1, r2
    // lsl r4, r1, #4
    // sub r1, r0, #2
    // ldrb r2, [r5, r1]
    // add r1, r3, r4
    // sub r3, r0, #1
    // ldrb r4, [r5, r3]
    // mov r3, #5
    // ldrb r1, [r2, r1]
    // sub r3, r3, r4
    // lsl r3, r3, #4
    // add r3, #8
    // str r3, [sp]
    // add r4, r0, #2
    // ldrb r4, [r5, r4]
    // lsl r1, r1, #5
    // add r2, r1, #0
    // str r4, [sp, #4]
    // ldr r4, [r5]
    // add r2, #0x20
    // str r4, [sp, #8]
    // mov r4, #0x20
    // str r4, [sp, #0xc]
    // mov r4, #0x10
    // str r4, [sp, #0x10]
    // add r4, r0, #5
    // ldrb r4, [r5, r4]
    // sub r0, r0, #3
    // str r4, [sp, #0x14]
    // ldrb r0, [r5, r0]
    // add r0, r0, #1
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #4]
    // bl ov80_0223AE14
    // ldr r0, _0223B1D0 ; =0x00000187
    // ldr r3, _0223B1CC ; =ov80_0223DBEC
    // ldrb r1, [r5, r0]
    // lsl r4, r1, #4
    // sub r1, r0, #2
    // ldrb r2, [r5, r1]
    // add r1, r3, r4
    // ldrb r1, [r2, r1]
    // sub r2, r0, #1
    // ldrb r2, [r5, r2]
    // lsl r1, r1, #5
    // add r2, r2, #6
    // lsl r3, r2, #4
    // add r3, #8
    // str r3, [sp]
    // add r2, r0, #2
    // ldrb r2, [r5, r2]
    // str r2, [sp, #4]
    // ldr r2, [r5]
    // str r2, [sp, #8]
    // mov r2, #0x20
    // str r2, [sp, #0xc]
    // mov r2, #0x10
    // str r2, [sp, #0x10]
    // add r2, r0, #5
    // ldrb r2, [r5, r2]
    // sub r0, r0, #3
    // str r2, [sp, #0x14]
    // ldrb r0, [r5, r0]
    // add r2, r1, #0
    // add r2, #0x20
    // add r0, r0, #2
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #4]
    // bl ov80_0223AE14
    // ldr r0, _0223B1D0 ; =0x00000187
    // mov r1, #1
    // ldrb r2, [r5, r0]
    // ldr r3, _0223B1CC ; =ov80_0223DBEC
    // eor r1, r2
    // lsl r4, r1, #4
    // sub r1, r0, #2
    // ldrb r2, [r5, r1]
    // add r1, r3, r4
    // ldrb r1, [r2, r1]
    // sub r2, r0, #1
    // ldrb r3, [r5, r2]
    // mov r2, #0xb
    // lsl r1, r1, #5
    // sub r2, r2, r3
    // lsl r3, r2, #4
    // add r3, #8
    // str r3, [sp]
    // add r2, r0, #2
    // ldrb r2, [r5, r2]
    // str r2, [sp, #4]
    // ldr r2, [r5]
    // str r2, [sp, #8]
    // mov r2, #0x20
    // str r2, [sp, #0xc]
    // mov r2, #0x10
    // str r2, [sp, #0x10]
    // add r2, r0, #5
    // ldrb r2, [r5, r2]
    // sub r0, r0, #3
    // str r2, [sp, #0x14]
    // ldrb r0, [r5, r0]
    // add r2, r1, #0
    // add r2, #0x20
    // add r0, r0, #3
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #4]
    // bl ov80_0223AE14
    // mov r1, #0x61
    // lsl r1, r1, #2
    // ldrb r0, [r5, r1]
    // add r0, r0, #4
    // strb r0, [r5, r1]
    // add r0, r1, #1
    // ldrb r0, [r5, r0]
    // add r2, r0, #1
    // add r0, r1, #1
    // strb r2, [r5, r0]
    // ldrb r0, [r5, r0]
    // lsr r3, r0, #0x1f
    // lsl r2, r0, #0x1d
    // sub r2, r2, r3
    // mov r0, #0x1d
    // ror r2, r0
    // add r0, r3, r2
    // bne _0223B16E
    // add r0, r1, #3
    // ldrb r2, [r5, r0]
    // mov r0, #1
    // eor r2, r0
    // add r0, r1, #3
    // strb r2, [r5, r0]
    // add r0, r1, #2
    // ldrb r0, [r5, r0]
    // add r2, r0, #1
    // add r0, r1, #2
    // strb r2, [r5, r0]
    // mov r2, #0
    // add r0, r1, #1
    // strb r2, [r5, r0]
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldrb r4, [r5, r0]
    // sub r0, r0, #4
    // ldrb r0, [r5, r0]
    // cmp r4, r0
    // bge _0223B1A4
    // lsl r0, r4, #2
    // mov r7, #0x62
    // add r6, r5, r0
    // lsl r7, r7, #2
    // ldr r0, [r6, #4]
    // bl ov80_0223AE6C
    // str r0, [sp, #0x18]
    // cmp r0, #1
    // bne _0223B196
    // ldrb r0, [r5, r7]
    // add r0, r0, #1
    // strb r0, [r5, r7]
    // mov r0, #0x61
    // lsl r0, r0, #2
    // ldrb r0, [r5, r0]
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, r0
    // blt _0223B184
    // mov r1, #0x62
    // lsl r1, r1, #2
    // ldrb r0, [r5, r1]
    // cmp r0, #0x60
    // blo _0223B1C0
    // ldr r0, [sp, #0x18]
    // cmp r0, #1
    // bne _0223B1C0
    // mov r2, #0
    // add r0, r1, #5
    // strb r2, [r5, r0]
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223B1C8: .word 0x0000018D
    // _0223B1CC: .word ov80_0223DBEC
    // _0223B1D0: .word 0x00000187
    // TODO: decompile
}



void ov80_0223B1D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, _0223B3DC ; =0x0000018D
    // ldrb r1, [r5, r0]
    // cmp r1, #0
    // bne _0223B1E8
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r1, r0, #0
    // sub r1, #9
    // ldrb r1, [r5, r1]
    // cmp r1, #0x60
    // bhs _0223B202
    // sub r1, r0, #2
    // ldrsb r1, [r5, r1]
    // sub r2, r1, #1
    // sub r1, r0, #2
    // strb r2, [r5, r1]
    // ldrsb r1, [r5, r1]
    // cmp r1, #0
    // ble _0223B204
    // b _0223B384
    // sub r1, r0, #3
    // ldrb r2, [r5, r1]
    // sub r1, r0, #2
    // ldr r4, _0223B3E0 ; =ov80_0223DBE0
    // strb r2, [r5, r1]
    // sub r2, r0, #6
    // ldrb r3, [r5, r2]
    // mov r2, #6
    // add r1, r0, #0
    // mul r2, r3
    // sub r3, r0, #7
    // ldrb r3, [r5, r3]
    // add r2, r4, r2
    // sub r1, #8
    // ldrb r2, [r3, r2]
    // ldrb r1, [r5, r1]
    // lsl r3, r2, #5
    // add r2, r3, #0
    // add r2, #0x20
    // str r2, [sp]
    // sub r2, r0, #4
    // ldrb r2, [r5, r2]
    // lsl r1, r1, #4
    // add r1, #8
    // str r2, [sp, #4]
    // ldr r2, [r5]
    // str r2, [sp, #8]
    // mov r2, #0x10
    // str r2, [sp, #0xc]
    // mov r2, #0x20
    // str r2, [sp, #0x10]
    // sub r2, r0, #1
    // ldrb r2, [r5, r2]
    // sub r0, #9
    // str r2, [sp, #0x14]
    // ldrb r0, [r5, r0]
    // add r2, r1, #0
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #4]
    // bl ov80_0223AE14
    // ldr r2, _0223B3E4 ; =0x00000185
    // mov r0, #7
    // ldrb r1, [r5, r2]
    // sub r0, r0, r1
    // lsl r1, r0, #4
    // add r0, r2, #2
    // ldrb r3, [r5, r0]
    // mov r0, #1
    // add r1, #8
    // eor r3, r0
    // mov r0, #6
    // mul r0, r3
    // add r3, r2, #1
    // ldrb r3, [r5, r3]
    // add r0, r4, r0
    // ldrb r0, [r3, r0]
    // lsl r3, r0, #5
    // add r0, r3, #0
    // add r0, #0x20
    // str r0, [sp]
    // add r0, r2, #4
    // ldrb r0, [r5, r0]
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #0x20
    // str r0, [sp, #0x10]
    // add r0, r2, #7
    // ldrb r0, [r5, r0]
    // str r0, [sp, #0x14]
    // sub r0, r2, #1
    // ldrb r0, [r5, r0]
    // add r2, r1, #0
    // add r0, r0, #1
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #4]
    // bl ov80_0223AE14
    // ldr r2, _0223B3E4 ; =0x00000185
    // ldrb r0, [r5, r2]
    // add r0, #8
    // lsl r1, r0, #4
    // add r0, r2, #2
    // ldrb r3, [r5, r0]
    // mov r0, #6
    // add r1, #8
    // mul r0, r3
    // add r3, r2, #1
    // ldrb r3, [r5, r3]
    // add r0, r4, r0
    // ldrb r0, [r3, r0]
    // lsl r3, r0, #5
    // add r0, r3, #0
    // add r0, #0x20
    // str r0, [sp]
    // add r0, r2, #4
    // ldrb r0, [r5, r0]
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #0x20
    // str r0, [sp, #0x10]
    // add r0, r2, #7
    // ldrb r0, [r5, r0]
    // str r0, [sp, #0x14]
    // sub r0, r2, #1
    // ldrb r0, [r5, r0]
    // add r2, r1, #0
    // add r0, r0, #2
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #4]
    // bl ov80_0223AE14
    // ldr r2, _0223B3E4 ; =0x00000185
    // mov r0, #0xf
    // ldrb r1, [r5, r2]
    // sub r0, r0, r1
    // lsl r1, r0, #4
    // add r0, r2, #2
    // ldrb r3, [r5, r0]
    // mov r0, #1
    // add r1, #8
    // eor r3, r0
    // mov r0, #6
    // mul r0, r3
    // add r3, r2, #1
    // ldrb r3, [r5, r3]
    // add r0, r4, r0
    // ldrb r0, [r3, r0]
    // lsl r3, r0, #5
    // add r0, r3, #0
    // add r0, #0x20
    // str r0, [sp]
    // add r0, r2, #4
    // ldrb r0, [r5, r0]
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #0x20
    // str r0, [sp, #0x10]
    // add r0, r2, #7
    // ldrb r0, [r5, r0]
    // str r0, [sp, #0x14]
    // sub r0, r2, #1
    // ldrb r0, [r5, r0]
    // add r2, r1, #0
    // add r0, r0, #3
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #4]
    // bl ov80_0223AE14
    // mov r0, #0x61
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // add r1, r1, #4
    // strb r1, [r5, r0]
    // add r1, r0, #2
    // ldrb r1, [r5, r1]
    // add r2, r1, #1
    // add r1, r0, #2
    // strb r2, [r5, r1]
    // add r0, r0, #2
    // ldrb r0, [r5, r0]
    // mov r1, #6
    // bl _s32_div_f
    // cmp r1, #0
    // bne _0223B384
    // ldr r1, _0223B3E8 ; =0x00000187
    // mov r0, #1
    // ldrb r2, [r5, r1]
    // eor r0, r2
    // strb r0, [r5, r1]
    // sub r0, r1, #2
    // ldrb r0, [r5, r0]
    // add r2, r0, #1
    // sub r0, r1, #2
    // strb r2, [r5, r0]
    // mov r2, #0
    // sub r0, r1, #1
    // strb r2, [r5, r0]
    // mov r0, #0x62
    // lsl r0, r0, #2
    // ldrb r4, [r5, r0]
    // sub r0, r0, #4
    // ldrb r0, [r5, r0]
    // cmp r4, r0
    // bge _0223B3BA
    // lsl r0, r4, #2
    // mov r7, #0x62
    // add r6, r5, r0
    // lsl r7, r7, #2
    // ldr r0, [r6, #4]
    // bl ov80_0223AE6C
    // str r0, [sp, #0x18]
    // cmp r0, #1
    // bne _0223B3AC
    // ldrb r0, [r5, r7]
    // add r0, r0, #1
    // strb r0, [r5, r7]
    // mov r0, #0x61
    // lsl r0, r0, #2
    // ldrb r0, [r5, r0]
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, r0
    // blt _0223B39A
    // mov r1, #0x62
    // lsl r1, r1, #2
    // ldrb r0, [r5, r1]
    // cmp r0, #0x60
    // blo _0223B3D6
    // ldr r0, [sp, #0x18]
    // cmp r0, #1
    // bne _0223B3D6
    // mov r2, #0
    // add r0, r1, #5
    // strb r2, [r5, r0]
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _0223B3DC: .word 0x0000018D
    // _0223B3E0: .word ov80_0223DBE0
    // _0223B3E4: .word 0x00000185
    // _0223B3E8: .word 0x00000187
    // TODO: decompile
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
    sub_02014C08(*((u32*)r1));
    *((u32*)(r4 + 8)) = 0;
    sub_02014C40(*((u32*)r4));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
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
    sub_02014B08(*((u32*)r0));
}



void ov80_0223B468(void) {
}



void ov80_0223B484(void) {
    // blx r1
    *((u32*)(r1 + 0xc)) = 0;
}



void ov80_0223B4A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r5, #0
    // bne _0223B4B2
    // bl GF_AssertFail
    // mov r0, #1
    // str r0, [r5, #8]
    // mov r2, #0
    // str r2, [r5, #0xc]
    // str r4, [r5, #0x18]
    // str r6, [r5, #0x10]
    // ldr r0, gApp_MainMenu_SelectOption_MigrateFromAgb ; =ov80_0223B468
    // str r7, [r5, #0x14]
    // add r1, r5, #0
    // bl SysTask_CreateOnVWaitQueue
    // str r0, [r5, #4]
    // ldr r0, _0223B4DC ; =ov80_0223B484
    // add r1, r5, #0
    // mov r2, #0
    // bl SysTask_CreateOnVBlankQueue
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // gApp_MainMenu_SelectOption_MigrateFromAgb: .word ov80_0223B468
    // _0223B4DC: .word ov80_0223B484
    // TODO: decompile
}



void ov80_0223B4E0(void) {
    GF_AssertFail();
    SysTask_Destroy(*((u32*)(r4 + 4)));
    SysTask_Destroy(*((u32*)r4));
    sub_02014AA0();
}



void ov80_0223B504(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x1c]
    // bl sub_02014A60
    // add r5, r0, #0
    // bl sub_02014AA0
    // ldr r1, _0223B524 ; =0x00003020
    // add r0, r5, #0
    // ldr r1, [r4, r1]
    // mov r2, #0x20
    // mov r3, #1
    // bl sub_02014AB0
    // pop {r3, r4, r5, pc}
    // _0223B524: .word 0x00003020
    // TODO: decompile
}



void ov80_0223B528(void) {
}



void ov80_0223B53C(void) {
}



void ov80_0223B544(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // add r5, r2, #0
    // add r4, r0, #0
    // ldr r1, _0223B5D4 ; =0x00003024
    // add r0, r5, #0
    // bl Heap_Alloc
    // ldr r2, _0223B5D4 ; =0x00003024
    // str r0, [sp]
    // mov r1, #0
    // bl memset
    // ldr r0, [sp]
    // cmp r0, #0
    // bne _0223B568
    // bl GF_AssertFail
    // ldr r1, [sp]
    // ldr r3, _0223B5D8 ; =0x00001820
    // ldr r2, [sp]
    // add r0, r5, #0
    // add r1, #0x20
    // add r2, r2, r3
    // bl sub_02014A08
    // ldr r1, [sp]
    // cmp r0, #0
    // str r0, [r1, #0x1c]
    // bne _0223B584
    // bl GF_AssertFail
    // ldr r0, [sp]
    // ldr r1, _0223B5DC ; =0x00003020
    // mov r5, #0
    // str r4, [r0, r1]
    // add r6, r0, #0
    // add r3, r6, #0
    // add r4, r7, #0
    // add r3, #0x20
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, _0223B5D8 ; =0x00001820
    // add r3, r7, #0
    // add r4, r6, r0
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // add r5, r5, #1
    // add r6, r2, #0
    // stmia r4!, {r0, r1}
    // cmp r5, #0xc0
    // blt _0223B58E
    // ldr r0, [sp]
    // ldr r2, _0223B5E0 ; =ov80_0223B528
    // ldr r3, _0223B5E4 ; =ov80_0223B53C
    // add r1, r0, #0
    // bl ov80_0223B4A0
    // ldr r0, [sp]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223B5D4: .word 0x00003024
    // _0223B5D8: .word 0x00001820
    // _0223B5DC: .word 0x00003020
    // _0223B5E0: .word ov80_0223B528
    // _0223B5E4: .word ov80_0223B53C
    // TODO: decompile
}



void ov80_0223B5E8(void) {
    GF_AssertFail();
    ov80_0223B4E0(r4);
    sub_02014A38(*((u32*)(r4 + 0x1c)));
    Heap_Free(r4);
}



void ov80_0223B60C(void) {
    GF_AssertFail();
    sub_02014A4C(*((u32*)(r4 + 0x1c)));
}


