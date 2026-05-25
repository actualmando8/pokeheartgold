/* Decompiled from asm/unk_020957B0.s */
#include "global.h"

void sub_020957B0(void) {
    // add r5, sp, #0x10
    // ldrsb r4, [r5, r4]
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020957D6: ; jump table
    // ldrsb r1, [r6, r0]
    // add r0, sp, #4
    // add r2, sp, #4
    // ldrsb r1, [r6, r0]
    // add r0, sp, #4
    // add r2, sp, #4
    // ldrsb r1, [r6, r0]
    // add r0, sp, #4
    // add r2, sp, #4
    // ldrsb r1, [r6, r0]
    // add r0, sp, #4
    // add r2, sp, #4
}




void sub_02095838(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0209584C: ; jump table
    // strb r0, [r1]
    // ldrsb r4, [r1, r0]
    // ldrsb r3, [r1, r0]
    // add r0, r4, r0
    // strb r0, [r1]
    // ldrsb r4, [r1, r0]
    // ldrsb r3, [r1, r0]
    // add r0, r4, r0
    // strb r0, [r1]
    // ldrsb r4, [r1, r0]
    // ldrsb r3, [r1, r0]
    // add r0, r4, r0
    // strb r0, [r1]
    // ldrsb r3, [r1, r0]
}




void sub_020958C0(void) {
    // add r6, sp, #0x10
    // ldrsb r5, [r6, r5]
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldrsb r3, [r7, r2]
    // add r1, sp, #4
    // add r2, sp, #4
    // add r2, sp, #4
    // add r2, sp, #4
}




void sub_02095920(void) {
}




void sub_0209592C(void) {
    // add r6, sp, #0x10
    // ldrsb r5, [r6, r5]
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldrsb r1, [r7, r1]
    // add r1, sp, #4
    // add r1, sp, #4
    // add r2, sp, #4
    // add r0, sp, #4
    // add r2, sp, #4
    // add r0, sp, #4
    // add r2, sp, #4
}




void sub_020959D8(void) {
    // strb r1, [r5]
    // strb r0, [r5]
}




void sub_02095A34(void) {
    // add r6, sp, #0x10
    // ldrsb r5, [r6, r5]
    // str r5, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #4
    // add r2, sp, #4
    // add r2, sp, #4
}




void sub_02095A78(void) {
    // bx lr
    // TODO: decompile
}




void sub_02095A7C(void) {
    // add r5, sp, #0x10
    // ldrsb r4, [r5, r4]
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldrsb r2, [r7, r1]
    // add r1, sp, #4
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02095AAA: ; jump table
    // add r2, sp, #4
    // add r2, sp, #4
}




void sub_02095AF8(void) {
}




void sub_02095B04(void) {
    // add r5, sp, #0x10
    // ldrsb r4, [r5, r4]
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldrsb r3, [r6, r1]
    // add r2, sp, #4
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02095B32: ; jump table
    // ldrsb r0, [r6, r0]
    // add r2, sp, #4
    // ldrsb r0, [r6, r0]
    // add r2, sp, #4
    // ldrsb r0, [r6, r1]
    // add r2, sp, #4
    // ldrsb r0, [r6, r1]
    // add r2, sp, #4
}




void sub_02095B88(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02095B9C: ; jump table
    // strb r0, [r1]
    // ldrsb r4, [r1, r0]
    // ldrsb r3, [r1, r0]
    // add r0, r4, r0
    // strb r0, [r1]
    // ldrsb r4, [r1, r0]
    // ldrsb r3, [r1, r0]
    // add r0, r4, r0
    // strb r0, [r1]
    // ldrsb r3, [r1, r0]
}




void sub_02095BF0(void) {
    // mov ip, r2
    // ldrsb r2, [r4, r0]
    // add r2, r2, r3
    // asr r5, r2, #0x18
    // ldrsb r6, [r4, r2]
    // bpl _02095C14
    // add r2, r5, r2
    // strb r5, [r4]
    // add r2, r5, r2
    *((u8*)(r1 + 2)) = (r6 * *((u8*)r2));
    // add r3, sp, #0
    // ldrsb r2, [r3, r2]
    // ldrsb r5, [r4, r5]
    // ldrsb r3, [r4, r3]
    // add r2, r5, r2
    // asr r2, r2, #0x18
    // bpl _02095C5A
    // mov r5, ip
    // add r5, r3, r5
    *((u8*)(r1 + 1)) = (0x10 << 0x18);
    // add r0, r3, r0
    *((u8*)(r1 + 2)) = ((0x10 << 0x18) * *((u8*)r2));
}




void sub_02095C90(void) {
    // strb r3, [r0]
    // add r4, #0xc
}




void sub_02095CB8(void) {
    // add r4, r5, r6
    // add r1, r2, r1
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
    // strb r2, [r0]
    *((u32*)(r0 + 8)) = _02108434;
    *((u8*)(r0 + 2)) = r1;
}




void sub_02095D2C(void) {
}




void sub_02095D40(void) {
    // add r4, r2, r1
    // strb r1, [r4]
}




u8 sub_02095D88(void) {
    // str r2, [sp, #8]
    // mov ip, r1
    // add r5, r2, r1
    // add r6, r2, r3
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
    // str r1, [sp]
    // mov r3, ip
    // blx r6
    // ldr r0, [sp, #4]
}




u8 sub_02095DD8(void) {
    // ldrb r1, [r0]
    // mul r0, r1
    // ldr r0, [r2, r0]
}




u8 sub_02095DE8(void) {
    // add r0, r1, r0
}



