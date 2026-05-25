/* Decompiled from asm/unk_02031B0C.s */
#include "global.h"

u8 Save_ApricornBox_sizeof(void) {
}




u8 sub_02031B10(void) {
}




void Save_ApricornBox_Get(void) {
}




void InitApricornBox(void) {
}




void sub_02031B3C(void) {
}




void Save_ApricornBox_Init(void) {
}




void sub_02031B5C(void) {
}




void ApricornBox_GiveApricorn(void) {
}




void ApricornBox_TakeApricorn(void) {
}




void ApricornBox_CountApricorn(void) {
}




void ApricornBox_SetKurtApricorn(void) {
    // ldrb r3, [r0, r1]
}




void ApricornBox_GetKurtQuantity(void) {
    // ldrb r0, [r0, #7]
    // bx lr
    // TODO: decompile
}




int ApricornBox_GetKurtBall(void) {
    // mov r0, #ITEM_POKE_BALL
}




void sub_02031BEC(void) {
    // and r2, r3
    *((u32*)(r0 + 0x1c)) = ((r1 << 0x1e) | 0x3FFFFFFF);
}




void sub_02031C00(void) {
    // ldr r0, [r0, #0x1c]
    // lsr r0, r0, #0x1e
    // bx lr
    // TODO: decompile
}




void sub_02031C08(void) {
    // tst r0, r1
}




void sub_02031C30(void) {
    // tst r0, r1
    // and r0, r6
    // add r3, r3, r6
    // lsl r0, r3
    // and r0, r1
}




void sub_02031CA0(void) {
}




void sub_02031CCC(void) {
    // add r1, r1, r2
}




void sub_02031CE8(void) {
    // ldrb r0, [r0, #9]
    // bx lr
    // TODO: decompile
}




BOOL sub_02031CEC(void) {
    // add r1, r0, r2
    // strh r0, [r5]
    *((u16*)(r2 + 2)) = *((u16*)(0 + 2));
    *((u16*)(r2 + 4)) = *((u16*)(0 + 4));
    *((u16*)(r2 + 6)) = *((u16*)(0 + 6));
    // add r0, #0x38
    // add r4, r0, r1
    sub_02031D80(r4, ((0 - 5) << 5), (0 << 3));
    sub_02031B5C(r5);
    // strh r0, [r5]
    *((u16*)(r5 + 2)) = *((u16*)(r4 + 2));
    *((u16*)(r5 + 4)) = *((u16*)(r4 + 4));
    *((u16*)(r5 + 6)) = *((u16*)(r4 + 6));
    sub_02031B5C(r5, *((u8*)(*((u16*)(r4 + 6)) + 9)));
    // strh r1, [r5]
    *((u16*)(r5 + 2)) = *((u16*)(0 + 0xe));
    *((u16*)(r5 + 4)) = *((u16*)(0 + 0x10));
    *((u16*)(r5 + 6)) = *((u16*)(0 + 0x12));
}




void sub_02031D6C(void) {
}




int sub_02031D80(void) {
    // add r1, r0, r2
    // add r1, r3, r1
}



void sub_02031DA0(void) {
    MI_CpuFill8(r1, 0, 0xe);
    // add r0, sp, #4
    // add r0, #2
    MI_CpuFill8(0, 0xa);
    // add r1, sp, #4
    // str r0, [sp]
    // add r1, #2
    // add r2, r4, r0
    // strb r0, [r1]
    *((u8*)(r1 + 1)) = *((u8*)(r2 + 3));
    // ldr r2, [sp]
    // str r2, [sp]
    // ldr r0, [sp]
    // add r0, sp, #4
    // add r0, #2
    // mov ip, r0
    // mov r1, ip
    // add r1, r1, r2
    // add r2, sp, #4
    // strb r3, [r2]
    *((u8*)(((0 + 1) << 1) + 1)) = *((u8*)((0 + 1) + 1));
    // strb r3, [r0]
    *((u8*)((0 + 1) + 1)) = *((u8*)((r1 + 2) + 1));
    // strb r3, [r1]
    *((u8*)((r1 + 2) + 1)) = *((u8*)(((0 + 1) << 1) + 1));
    // add r0, sp, #4
    // add r3, sp, #4
    // add r3, #2
    // add r0, #0xb
    // add r1, r6, r4
    *((u8*)(((r1 + 2) + 2) + 6)) = *((u8*)*((u8*)(((0 + 1) << 1) + 1)));
    // strb r1, [r0]
    // ldr r0, [sp]
    *((u8*)(r6 + 0xc)) = r6;
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02031E7C: ; jump table
    // strh r0, [r6]
    // add r1, sp, #4
    // add r1, #2
    sub_02032588(r6, (*((u16*)r6) & ~(0xf)), 0, (*((u8*)(((0 + 1) << 1) + 1)) + 2));
    *((u16*)(r6 + 2)) = (6 | (*((u16*)(r6 + 2)) & ~(0xf)));
    // add r1, sp, #4
    // add r1, #2
    sub_02032588(r6, (*((u16*)(r6 + 2)) & ~(0xf)), 0);
    // add r1, sp, #8
    sub_02032588((r6 + 2), 1);
    *((u16*)(r6 + 4)) = (6 | (*((u16*)(r6 + 4)) & ~(0xf)));
    // add r1, sp, #4
    // add r1, #2
    sub_02032588(r6, (*((u16*)(r6 + 4)) & ~(0xf)), 0);
    // add r1, sp, #8
    sub_02032588((r6 + 2), 1);
    // add r1, sp, #8
    // add r1, #2
    sub_02032588((r6 + 4), 2);
    // add r0, sp, #4
    // sub r1, r2, r1
    // strh r1, [r6]
    // and r1, r4
    // strh r1, [r6]
    *((u16*)(r6 + 2)) = ((*((u16*)(r6 + 2)) & ~(0xf)) | 6);
    // and r1, r4
    *((u16*)(r6 + 2)) = (*((u16*)(r6 + 2)) | ((*((u8*)(r0 + 5)) << 0x18) >> 0x10));
    *((u16*)(r6 + 4)) = ((*((u16*)(r6 + 4)) & ~(0xf)) | 6);
    // and r2, r4
    *((u16*)(r6 + 4)) = (((*((u8*)(r0 + 7)) << 0x18) >> 0x10) | *((u16*)(r6 + 4)));
    *((u8*)(r6 + 0xc)) = 1;
    // strh r0, [r6]
    // strh r0, [r6]
    // strh r0, [r6]
    // add r1, sp, #4
    // add r1, #2
    sub_02032588(r6, ((*((u16*)r6) & ~(0xf0)) & ~(0xf0)), 0, 6);
    // add r1, sp, #8
    sub_02032588((r6 + 2), 1);
    // ldr r0, [sp]
    // add r1, sp, #0xc
    // add r1, #2
    sub_02032588((r6 + 4), 2);
    *((u16*)(r6 + 4)) = (5 | (*((u16*)(r6 + 4)) & ~(0xf)));
    *((u16*)(r6 + 4)) = (0x10 | (*((u16*)(r6 + 4)) & ~(0xf0)));
    // and r1, r0
    // add r0, sp, #4
    *((u16*)(r6 + 4)) = (((*((u8*)(0xFFFF00FF + 7)) << 0x18) >> 0x10) | *((u16*)(r6 + 4)));
    // ldr r0, [sp]
    *((u8*)(r6 + 0xc)) = (((*((u8*)(0xFFFF00FF + 7)) << 0x18) >> 0x10) | *((u16*)(r6 + 4)));
}




void sub_02031FE8(void) {
}




void sub_02032004(void) {
}




void sub_02032024(void) {
    // add r0, #0xc
    // and r0, r1
}




void sub_02032058(void) {
    // sub r6, r4, r0
    _u32_div_f(r6, 0x64);
    sub_02032340(r5, ((r0 << 0x18) >> 0x18));
    _u32_div_f(r6, 0x64);
    // sub r0, r4, r1
    *((u32*)(r5 + 0x18)) = r0;
    // and r2, r0
    // sub r1, r4, r0
    // and r0, r1
    *((u32*)(r5 + 0x1c)) = (0x3FFFFFFF | *((u32*)(r5 + 0x1c)));
    sub_02031BEC(r5, 3, *((u32*)(r5 + 0x1c)));
    sub_02031BEC(r5, 2);
    sub_02032354(r5);
}




void sub_020320E0(void) {
    Heap_AllocAtEnd(r3, 0x20);
    MI_CpuFill8(0, 0x20);
    PlayerProfile_GetTrainerID(r5);
    // str r0, [r4]
    PlayerProfile_GetTrainerGender(r5);
    *((u8*)(r4 + 4)) = r0;
    PlayerProfile_GetLanguage(r5);
    *((u8*)(r4 + 5)) = r0;
    PlayerProfile_GetVersion(r5);
    *((u8*)(r4 + 6)) = r0;
    // add r0, #8
    StringFillEOS(r4, 8);
    PlayerProfile_GetNamePtr(r5);
    // add r0, #8
    CopyU16StringArrayN(r4, r0, 7);
    // add r2, #0x18
    sub_02031CEC(r7, 8, r4);
    *((u16*)(r4 + 0x18)) = 0x0000FFFF;
    *((u16*)(r4 + 0x18)) = r6;
}




void sub_02032158(void) {
    // add r0, #8
    // add r1, #8
}




void sub_020321A0(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r4, [sp, #0x10]
    // add r5, #0x38
    // ldr r0, [sp, #0x10]
    // add r5, #0x20
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x18
    // str r4, [sp, #0x14]
    // ldr r5, [sp]
    // ldr r6, [sp, #0x14]
    // add r5, #0x20
    // str r0, [sp, #0x14]
    // add r5, #0x20
    // ldr r0, [sp, #0x10]
    // mov ip, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // mov ip, r0
    // ldr r0, [sp, #0x10]
    // mov ip, r0
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // mov r0, ip
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp]
    // add r5, r0, r1
    // add r3, #0x40
    // add r2, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, ip
    // ldr r0, [sp]
    // add r2, r0, r1
    // add r2, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0xc]
    // add r7, #0x20
    // ldr r0, [sp, #4]
    // str r1, [sp, #0xc]
}




String * sub_020322AC(void) {
    String_New(9, r2);
    NewMsgDataFromNarc(1, 0x1b, 0x15, r7);
    // add r5, #0xe
    ReadMsgDataIntoString(r5, r6);
    DestroyMsgData(r4);
    // add r0, #0x38
    // add r0, r0, r5
    sub_02031D6C(r4);
    // add r4, #0x28
    // add r1, r4, r5
    CopyU16ArrayToString(r6);
}



void sub_02032308(void) {
}




void sub_02032340(void) {
    // add r1, r2, r1
}




void sub_02032354(void) {
    // str r0, [sp]
    // add r1, sp, #0x34
    // add r1, #1
    // str r0, [sp, #0x14]
    // ldr r0, [sp]
    // add r0, #0xc
    sub_020324F4(*((u16*)(r0 + 0xa)));
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // and r0, r1
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x30
    // strb r0, [r1]
    // add r2, sp, #0x30
    // add r7, sp, #0x34
    // str r0, [sp, #4]
    // add r7, #1
    // mov ip, r2
    // ldr r0, [sp, #4]
    // mov r0, ip
    // add r3, r0, r1
    // ldrsb r4, [r3, r0]
    // ldrsb r5, [r2, r5]
    // ldrsb r0, [r7, r4]
    // ldrsb r6, [r7, r5]
    // strb r4, [r2]
    // strb r5, [r3]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // add r0, r0, r1
    // add r1, r2, r0
    // add r2, sp, #0x34
    // add r3, sp, #0x30
    // ldrsb r0, [r3, r4]
    // add r2, #1
    // str r0, [sp, #8]
    // add r0, r2, r0
    // str r0, [sp, #0xc]
    // ldrsb r7, [r3, r0]
    // add r0, r2, r7
    // str r0, [sp, #0x2c]
    // ldrsb r5, [r1, r0]
    // ldrsb r3, [r2, r0]
    // add r0, r3, r5
    // asr r0, r0, #0x18
    // ldr r6, [sp, #0xc]
    // ldrsb r5, [r6, r5]
    // ldr r5, [sp, #8]
    // ldr r5, [sp, #0x2c]
    // ldrsb r5, [r5, r6]
    // str r5, [sp, #0x10]
    // ldr r5, [sp, #0x20]
    // ldr r3, [sp, #0x1c]
    // str r3, [sp, #0x1c]
    // str r3, [sp, #0x18]
    // strb r0, [r2]
    // ldr r3, [sp, #0x24]
    // add r0, r3, r0
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp]
    *((u8*)(((((0 << 0x18) >> 0x18) << 0xd) >> 0x10) + 0xe)) = 0;
    // sub r1, #0xa
    *((u8*)(((((0 << 0x18) >> 0x18) << 0xd) >> 0x10) + 0xe)) = 0;
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // add r2, sp, #0x34
    // ldr r0, [sp, #0x18]
    // add r2, #1
    // ldrsb r1, [r2, r0]
    // ldr r0, [sp, #0x24]
    // sub r0, #0x64
    // str r0, [sp, #0x24]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x18]
    // strb r1, [r2, r0]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // add r3, sp, #0x34
    // add r3, #1
    // ldrsb r2, [r3, r1]
    // ldr r0, [sp]
    // add r0, r0, r4
    *((u8*)((((((0 << 0x18) >> 0x18) << 0xd) >> 0x10) + 1) + 0xf)) = (_020F68DE + 1);
    // ldr r0, [sp]
    *((u8*)((((((0 << 0x18) >> 0x18) << 0xd) >> 0x10) + 1) + 9)) = 3;
    *((u16*)((((((0 << 0x18) >> 0x18) << 0xd) >> 0x10) + 1) + 0xa)) = 0;
}




void sub_020324F4(void) {
    // add r2, r0, r3
    // strb r2, [r1, r3]
}




void sub_02032504(void) {
    // cmp r1, #0
    // bne _0203250C
    // mov r0, #0
    // bx lr
    // cmp r0, #0
    // beq _0203251A
    // cmp r0, #1
    // beq _0203254A
    // cmp r0, #2
    // beq _0203256A
    // b _02032582
    // cmp r1, #0x3e
    // bls _02032522
    // mov r0, #6
    // bx lr
    // cmp r1, #0x32
    // bls _0203252A
    // mov r0, #5
    // bx lr
    // cmp r1, #0x28
    // bls _02032532
    // mov r0, #4
    // bx lr
    // cmp r1, #0x1e
    // bls _0203253A
    // mov r0, #3
    // bx lr
    // cmp r1, #0x14
    // bls _02032542
    // mov r0, #2
    // bx lr
    // cmp r1, #0
    // beq _02032582
    // mov r0, #1
    // bx lr
    // cmp r1, #0x28
    // bls _02032552
    // mov r0, #4
    // bx lr
    // cmp r1, #0x1e
    // bls _0203255A
    // mov r0, #3
    // bx lr
    // cmp r1, #0x14
    // bls _02032562
    // mov r0, #2
    // bx lr
    // cmp r1, #0
    // beq _02032582
    // mov r0, #1
    // bx lr
    // cmp r1, #0x14
    // bls _02032572
    // mov r0, #3
    // bx lr
    // cmp r1, #0xa
    // bls _0203257A
    // mov r0, #2
    // bx lr
    // cmp r1, #0
    // beq _02032582
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void sub_02032588(void) {
    // and r3, r5
    // strh r0, [r4]
    // and r3, r0
    // strh r0, [r4]
    sub_02032504(((r2 << 0x18) >> 0x18), *((u8*)(r1 + 1)), *((u16*)r0));
    // strh r0, [r4]
}




void sub_020325CC(void) {
}



