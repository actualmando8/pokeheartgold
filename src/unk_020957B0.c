/* Decompiled from asm/unk_020957B0.s */
#include "global.h"

void sub_020957B0(void) {
    // add r5, sp, #0x10
    // ldrsb r4, [r5, r4]
    // str r4, [sp]
    sub_02095BF0();
    // str r0, [sp, #4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020957D6: ; jump table
    // ldrsb r1, [r6, r0]
    // add r0, sp, #4
    // add r2, sp, #4
    *((u8*)(1 + 4)) = r1;
    sub_02095CB8(r7, 3);
    // ldrsb r1, [r6, r0]
    // add r0, sp, #4
    // add r2, sp, #4
    *((u8*)(1 + 4)) = r1;
    sub_02095CB8(r7, 3);
    // ldrsb r1, [r6, r0]
    // add r0, sp, #4
    // add r2, sp, #4
    *((u8*)(0 + 4)) = r1;
    sub_02095CB8(r7, 5);
    // ldrsb r1, [r6, r0]
    // add r0, sp, #4
    // add r2, sp, #4
    *((u8*)(0 + 4)) = r1;
    sub_02095CB8(r7, 5);
}



void sub_02095838(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0209584C: ; jump table
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = 0;
    // ldrsb r4, [r1, r0]
    // ldrsb r3, [r1, r0]
    // ldrb r0, [r2]
    // mul r0, r3
    // add r0, r4, r0
    *((u8*)(r1 + 2)) = 1;
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = 4;
    // ldrsb r4, [r1, r0]
    // ldrsb r3, [r1, r0]
    // ldrb r0, [r2]
    // mul r0, r3
    // add r0, r4, r0
    *((u8*)(r1 + 2)) = 1;
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(r3 + 4));
    // ldrsb r4, [r1, r0]
    // ldrsb r3, [r1, r0]
    // ldrb r0, [r2]
    // mul r0, r3
    // add r0, r4, r0
    *((u8*)(r1 + 2)) = 1;
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(r3 + 4));
    // ldrsb r3, [r1, r0]
    // ldrb r0, [r2]
    // mul r0, r3
    *((u8*)(r1 + 2)) = 1;
}



void sub_020958C0(void) {
    // add r6, sp, #0x10
    // ldrsb r5, [r6, r5]
    // str r5, [sp]
    sub_02095BF0();
    // str r0, [sp, #4]
    // ldrsb r3, [r7, r2]
    // add r1, sp, #4
    *((u8*)(r1 + 4)) = r3;
    *((u8*)(r1 + 4)) = 0;
    // add r2, sp, #4
    sub_02095CB8(r4, 3, 0);
    // ldrb r0, [r0]
    *((u8*)(r1 + 4)) = r2;
    // add r2, sp, #4
    sub_02095CB8(r4, 6);
    *((u8*)(r1 + 4)) = 4;
    // add r2, sp, #4
    sub_02095CB8(r4, 2);
}



void sub_02095920(void) {
}



void sub_0209592C(void) {
    // add r6, sp, #0x10
    // ldrsb r5, [r6, r5]
    // str r5, [sp]
    sub_02095BF0();
    // str r0, [sp, #4]
    // ldrsb r1, [r7, r1]
    // add r1, sp, #4
    *((u8*)(1 + 4)) = 0;
    // add r1, sp, #4
    *((u8*)(1 + 4)) = 2;
    *((u8*)(1 + 4)) = 3;
    // add r2, sp, #4
    // ldrb r0, [r0]
    // add r0, sp, #4
    *((u8*)(*((u32*)(r4 + 4)) + 4)) = 0;
    sub_02095CB8(r4, 6, 3);
    sub_02095CB8(r4, 2);
    // add r2, sp, #4
    // ldrb r0, [r0]
    // add r0, sp, #4
    *((u8*)(*((u32*)(r4 + 4)) + 4)) = 0;
    sub_02095CB8(r4, 6);
    sub_02095CB8(r4, 2);
    // add r2, sp, #4
    sub_02095CB8(r4, 1);
}



void sub_020959D8(void) {
    // ldrb r6, [r4]
    _s32_div_f((*((u8*)(r2 + 2)) - 1), r6);
    // mul r0, r6
    *((u8*)(r5 + 2)) = r0;
    // ldrb r1, [r4]
    _s32_div_f(*((u8*)(r5 + 2)));
    // strb r1, [r5]
    // ldrb r1, [r4]
    _s32_div_f(*((u8*)(r5 + 2)));
    *((u8*)(r5 + 1)) = r0;
    *((u8*)(r5 + 2)) = 0;
    *((u8*)(r5 + 2)) = 2;
    *((u8*)(r5 + 2)) = 1;
    // strb r0, [r5]
    *((u8*)(r5 + 1)) = *((u8*)(r5 + 2));
}



void sub_02095A34(void) {
    // add r6, sp, #0x10
    // ldrsb r5, [r6, r5]
    // str r5, [sp]
    sub_02095BF0();
    // str r0, [sp, #4]
    // add r1, sp, #4
    *((u8*)(r1 + 4)) = 0;
    // add r2, sp, #4
    sub_02095CB8(r4, 4, 0);
    // add r2, sp, #4
    sub_02095CB8(r4, 4);
}



void sub_02095A78(void) {
    // bx lr
    // TODO: decompile
}



void sub_02095A7C(void) {
    // add r5, sp, #0x10
    // ldrsb r4, [r5, r4]
    // str r4, [sp]
    sub_02095BF0();
    // str r0, [sp, #4]
    // ldrsb r2, [r7, r1]
    // add r1, sp, #4
    *((u8*)(0 + 4)) = r2;
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02095AAA: ; jump table
    // add r2, sp, #4
    // ldrb r0, [r0]
    sub_02095CB8(r6, 6);
    sub_02095CB8(r6, 2);
    // add r2, sp, #4
    // ldrb r0, [r0]
    sub_02095CB8(r6, 6);
    sub_02095CB8(r6, 2);
}



void sub_02095AF8(void) {
}



void sub_02095B04(void) {
    // add r5, sp, #0x10
    // ldrsb r4, [r5, r4]
    // str r4, [sp]
    sub_02095BF0();
    // str r0, [sp, #4]
    // ldrsb r3, [r6, r1]
    // add r2, sp, #4
    *((u8*)(r2 + 4)) = r3;
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02095B32: ; jump table
    // ldrsb r0, [r6, r0]
    *((u8*)(r2 + 4)) = 1;
    // add r2, sp, #4
    sub_02095CB8(r7, 3);
    // ldrsb r0, [r6, r0]
    *((u8*)(r2 + 4)) = 1;
    // add r2, sp, #4
    sub_02095CB8(r7, 3);
    // ldrsb r0, [r6, r1]
    *((u8*)(r2 + 4)) = r0;
    // add r2, sp, #4
    sub_02095CB8(r7, 5);
    // ldrsb r0, [r6, r1]
    *((u8*)(r2 + 4)) = r0;
    // add r2, sp, #4
    sub_02095CB8(r7, 5);
}



void sub_02095B88(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02095B9C: ; jump table
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = 0;
    // ldrsb r4, [r1, r0]
    // ldrsb r3, [r1, r0]
    // ldrb r0, [r2]
    // mul r0, r3
    // add r0, r4, r0
    *((u8*)(r1 + 2)) = 1;
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = 0;
    // ldrsb r4, [r1, r0]
    // ldrsb r3, [r1, r0]
    // ldrb r0, [r2]
    // mul r0, r3
    // add r0, r4, r0
    *((u8*)(r1 + 2)) = 1;
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = 0;
    // ldrsb r3, [r1, r0]
    // ldrb r0, [r2]
    // mul r0, r3
    *((u8*)(r1 + 2)) = 1;
}



void sub_02095BF0(void) {
    // push {r4, r5, r6, r7}
    // add r7, r2, #0
    // ldrb r2, [r7, #1]
    // add r4, r1, #0
    // mov r0, #0
    // ldrb r1, [r7]
    // mov ip, r2
    // cmp r3, #0
    // beq _02095C3C
    // ldrsb r2, [r4, r0]
    // add r2, r2, r3
    // lsl r2, r2, #0x18
    // asr r5, r2, #0x18
    // ldr r2, _02095C8C ; =FS_OVERLAY_ID(field)
    // ldrsb r6, [r4, r2]
    // bpl _02095C14
    // add r0, r2, #0
    // b _02095C2E
    // cmp r5, r1
    // blt _02095C1C
    // mov r0, #2
    // b _02095C2E
    // add r2, r6, #0
    // mul r2, r1
    // add r2, r5, r2
    // lsl r2, r2, #0x18
    // lsr r3, r2, #0x18
    // ldrb r2, [r7, #2]
    // cmp r3, r2
    // blo _02095C2E
    // mov r0, #2
    // cmp r0, #0
    // bne _02095C86
    // add r2, r6, #0
    // mul r2, r1
    // strb r5, [r4]
    // add r2, r5, r2
    // strb r2, [r4, #2]
    // add r3, sp, #0
    // mov r2, #0x10
    // ldrsb r2, [r3, r2]
    // cmp r2, #0
    // beq _02095C84
    // mov r5, #1
    // ldrsb r5, [r4, r5]
    // mov r3, #0
    // ldrsb r3, [r4, r3]
    // add r2, r5, r2
    // lsl r2, r2, #0x18
    // asr r2, r2, #0x18
    // bpl _02095C5A
    // mov r0, #3
    // b _02095C76
    // mov r5, ip
    // cmp r2, r5
    // blt _02095C64
    // mov r0, #4
    // b _02095C76
    // add r5, r2, #0
    // mul r5, r1
    // add r5, r3, r5
    // lsl r5, r5, #0x18
    // lsr r6, r5, #0x18
    // ldrb r5, [r7, #2]
    // cmp r6, r5
    // blo _02095C76
    // mov r0, #4
    // cmp r0, #0
    // bne _02095C86
    // add r0, r2, #0
    // mul r0, r1
    // strb r2, [r4, #1]
    // add r0, r3, r0
    // strb r0, [r4, #2]
    // mov r0, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // nop
    // _02095C8C: .word FS_OVERLAY_ID(field)
    // TODO: decompile
}



void sub_02095C90(void) {
    // strb r3, [r0]
    // add r4, #0xc
}



void sub_02095CB8(void) {
    sub_02095C90();
    // ldrb r1, [r4]
    // mul r6, r0
    // add r4, r5, r6
    // add r1, r2, r1
    // ldr r2, [r5, r6]
    // blx r4
}



void * sub_02095CE0(void) {
    Heap_Alloc(0x10);
    // strb r0, [r2]
    *((u8*)(r0 + 1)) = 6;
    Heap_Alloc(r6, (*((u8*)(r0 + 1)) << 2), (r0 + 1));
    *((u32*)(r4 + 0xc)) = r0;
    memset(0, (*((u8*)(r4 + 1)) << 2));
    *((u32*)(r4 + 4)) = r5;
}



void sub_02095D1C(void) {
    // mov r2, #0
    // strb r2, [r0]
    // ldr r2, _02095D28 ; =_02108434
    // str r2, [r0, #8]
    // strb r1, [r0, #2]
    // bx lr
    // _02095D28: .word _02108434
    // TODO: decompile
}



void sub_02095D2C(void) {
}



void sub_02095D40(void) {
    sub_02095C90();
    // ldrb r0, [r5]
    // add r4, r2, r1
    // mul r1, r0
    // ldr r5, [r2, r1]
    GF_AssertFail(*((u8*)(r5 + 2)), 0xc, *((u32*)(r5 + 8)));
    *((u8*)(r4 + 2)) = r6;
    *((u8*)(r4 + 2)) = 0;
    // ldrb r1, [r5]
    _s32_div_f(*((u8*)(r4 + 2)), *((u8*)(r4 + 2)));
    // strb r1, [r4]
    // ldrb r1, [r5]
    _s32_div_f(*((u8*)(r4 + 2)));
    *((u8*)(r4 + 1)) = r0;
}



u8 sub_02095D88(void) {
    // str r2, [sp, #8]
    // ldrb r7, [r4]
    // mov ip, r1
    // add r5, r2, r1
    // mul r3, r1
    // add r6, r2, r3
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
    // str r1, [sp]
    // ldr r2, [r2, r3]
    // mov r3, ip
    // blx r6
    // ldrb r0, [r4]
    // ldr r0, [sp, #4]
}



u8 sub_02095DD8(void) {
    // ldrb r1, [r0]
    // mul r0, r1
    // ldr r0, [r2, r0]
}



u8 sub_02095DE8(void) {
    // ldrb r0, [r0]
    // add r0, r1, r0
}


