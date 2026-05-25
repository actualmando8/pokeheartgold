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
    GF_AssertFail();
    *((u8*)(r0 + 8)) = r1;
    *((u8*)(r0 + 7)) = r2;
    ApricornBox_TakeApricorn();
}



void ApricornBox_GetKurtQuantity(void) {
    // ldrb r0, [r0, #7]
    // bx lr
    // TODO: decompile
}



void ApricornBox_GetKurtBall(void) {
    // ldrb r0, [r0, #8]
    // cmp r0, #7
    // blo _02031BDE
    // mov r0, #ITEM_POKE_BALL
    // bx lr
    // lsl r1, r0, #1
    // ldr r0, _02031BE8 ; =_020F68D0
    // ldrh r0, [r0, r1]
    // bx lr
    // nop
    // _02031BE8: .word _020F68D0
    // TODO: decompile
}



void sub_02031BEC(void) {
    // ldr r3, [r0, #0x1c]
    // ldr r2, _02031BFC ; =0x3FFFFFFF
    // lsl r1, r1, #0x1e
    // and r2, r3
    // orr r1, r2
    // str r1, [r0, #0x1c]
    // bx lr
    // nop
    // _02031BFC: .word 0x3FFFFFFF
    // TODO: decompile
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
    GF_AssertFail();
    // tst r0, r1
    // and r0, r6
    // add r3, r3, r6
    // lsl r0, r3
    // orr r0, r1
    *((u16*)(r5 + 0xa)) = ((7 << 0x10) >> 0x10);
    // orr r0, r1
    *((u16*)(r5 + 0xa)) = (2 << 0xe);
    *((u32*)(r5 + 0x14)) = r2;
    *((u32*)(r5 + 0x18)) = r2;
    // and r0, r1
    *((u32*)(r5 + 0x1c)) = (3 << 0x1e);
    ApricornBox_TakeApricorn(r5, r4, 1, 0);
}



void sub_02031CA0(void) {
    sub_02031C08();
}



void sub_02031CCC(void) {
    // mul r2, r1
    // add r1, r1, r2
    *((u8*)(r0 + 0xe)) = 0xff;
    *((u8*)(r0 + 0xe)) = 0xff;
}



void sub_02031CE8(void) {
    // ldrb r0, [r0, #9]
    // bx lr
    // TODO: decompile
}



void sub_02031CEC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r2, #0
    // cmp r1, #9
    // blt _02031CF6
    // mov r1, #0
    // cmp r1, #4
    // bgt _02031D12
    // ldr r0, _02031D68 ; =_020F6902
    // lsl r2, r1, #3
    // add r1, r0, r2
    // ldrh r0, [r0, r2]
    // strh r0, [r5]
    // ldrh r0, [r1, #2]
    // strh r0, [r5, #2]
    // ldrh r0, [r1, #4]
    // strh r0, [r5, #4]
    // ldrh r0, [r1, #6]
    // strh r0, [r5, #6]
    // b _02031D64
    // cmp r1, #7
    // bgt _02031D44
    // sub r1, r1, #5
    // add r0, #0x38
    // lsl r1, r1, #5
    // add r4, r0, r1
    // add r0, r4, #0
    // bl sub_02031D80
    // cmp r0, #0
    // bne _02031D32
    // add r0, r5, #0
    // bl sub_02031B5C
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrh r0, [r4]
    // strh r0, [r5]
    // ldrh r0, [r4, #2]
    // strh r0, [r5, #2]
    // ldrh r0, [r4, #4]
    // strh r0, [r5, #4]
    // ldrh r0, [r4, #6]
    // strh r0, [r5, #6]
    // b _02031D64
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bne _02031D54
    // add r0, r5, #0
    // bl sub_02031B5C
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r0, #0xc]
    // strh r1, [r5]
    // ldrh r1, [r0, #0xe]
    // strh r1, [r5, #2]
    // ldrh r1, [r0, #0x10]
    // strh r1, [r5, #4]
    // ldrh r0, [r0, #0x12]
    // strh r0, [r5, #6]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _02031D68: .word _020F6902
    // TODO: decompile
}



void sub_02031D6C(void) {
}



int sub_02031D80(void) {
    // add r1, r0, r2
    // add r1, r3, r1
}



void sub_02031DA0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r1, #0
    // add r4, r0, #0
    // add r0, r6, #0
    // mov r1, #0
    // mov r2, #0xe
    // bl MI_CpuFill8
    // add r0, sp, #4
    // add r0, #2
    // mov r1, #0
    // mov r2, #0xa
    // bl MI_CpuFill8
    // mov r0, #0
    // add r1, sp, #4
    // str r0, [sp]
    // add r1, #2
    // add r2, r4, r0
    // ldrb r2, [r2, #3]
    // strb r0, [r1]
    // strb r2, [r1, #1]
    // cmp r2, #0
    // beq _02031DDC
    // ldr r2, [sp]
    // add r2, r2, #1
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // str r2, [sp]
    // add r0, r0, #1
    // add r1, r1, #2
    // cmp r0, #5
    // blt _02031DC6
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _02031E3C
    // add r0, sp, #4
    // add r0, #2
    // mov r7, #0
    // mov ip, r0
    // add r5, r7, #1
    // cmp r5, #5
    // bge _02031E34
    // lsl r2, r5, #1
    // mov r1, ip
    // add r1, r1, r2
    // add r2, sp, #4
    // ldrb r4, [r1, #1]
    // ldrb r3, [r0, #1]
    // cmp r3, r4
    // bhi _02031E2C
    // cmp r3, r4
    // bne _02031E14
    // ldrb r4, [r0]
    // ldrb r3, [r1]
    // cmp r4, r3
    // blo _02031E2C
    // ldrb r3, [r0]
    // strb r3, [r2]
    // ldrb r3, [r0, #1]
    // strb r3, [r2, #1]
    // ldrb r3, [r1]
    // strb r3, [r0]
    // ldrb r3, [r1, #1]
    // strb r3, [r0, #1]
    // ldrb r3, [r2]
    // strb r3, [r1]
    // ldrb r3, [r2, #1]
    // strb r3, [r1, #1]
    // add r5, r5, #1
    // add r1, r1, #2
    // cmp r5, #5
    // blt _02031E00
    // add r7, r7, #1
    // add r0, r0, #2
    // cmp r7, #5
    // blt _02031DF2
    // add r0, sp, #4
    // ldrb r5, [r0, #0xb]
    // add r3, sp, #4
    // add r0, r6, #0
    // mov r4, #0
    // add r3, #2
    // add r0, #0xb
    // ldrb r2, [r3]
    // add r1, r6, r4
    // strb r2, [r1, #6]
    // ldrb r1, [r3, #1]
    // cmp r5, r1
    // bne _02031E5C
    // ldrb r1, [r0]
    // add r1, r1, #1
    // strb r1, [r0]
    // add r4, r4, #1
    // add r3, r3, #2
    // cmp r4, #5
    // blt _02031E4A
    // ldr r0, [sp]
    // strb r0, [r6, #0xc]
    // ldr r0, [sp]
    // cmp r0, #5
    // bls _02031E70
    // b _02031FDC
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02031E7C: ; jump table
    // ldrh r1, [r6]
    // mov r0, #0xf
    // add sp, #0x10
    // bic r1, r0
    // mov r0, #6
    // orr r0, r1
    // strh r0, [r6]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, sp, #4
    // add r0, r6, #0
    // add r1, #2
    // mov r2, #0
    // bl sub_02032588
    // ldrh r1, [r6, #2]
    // mov r0, #0xf
    // bic r1, r0
    // mov r0, #6
    // orr r0, r1
    // strh r0, [r6, #2]
    // b _02031FDC
    // add r1, sp, #4
    // add r0, r6, #0
    // add r1, #2
    // mov r2, #0
    // bl sub_02032588
    // add r0, r6, #2
    // add r1, sp, #8
    // mov r2, #1
    // bl sub_02032588
    // ldrh r1, [r6, #4]
    // mov r0, #0xf
    // bic r1, r0
    // mov r0, #6
    // orr r0, r1
    // strh r0, [r6, #4]
    // b _02031FDC
    // add r1, sp, #4
    // add r0, r6, #0
    // add r1, #2
    // mov r2, #0
    // bl sub_02032588
    // add r0, r6, #2
    // add r1, sp, #8
    // mov r2, #1
    // bl sub_02032588
    // add r1, sp, #8
    // add r0, r6, #4
    // add r1, #2
    // mov r2, #2
    // bl sub_02032588
    // b _02031FDC
    // add r0, sp, #4
    // ldrb r2, [r0, #3]
    // ldrb r1, [r0, #9]
    // sub r1, r2, r1
    // cmp r1, #0xc
    // bgt _02031F88
    // ldrh r3, [r6]
    // mov r2, #0xf
    // mov r1, #5
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r6]
    // ldrb r3, [r0, #3]
    // ldrh r1, [r6]
    // ldr r4, _02031FE4 ; =0xFFFF00FF
    // lsl r3, r3, #0x18
    // and r1, r4
    // lsr r3, r3, #0x10
    // orr r1, r3
    // strh r1, [r6]
    // ldrh r1, [r6, #2]
    // mov r3, #6
    // bic r1, r2
    // orr r1, r3
    // strh r1, [r6, #2]
    // ldrb r5, [r0, #5]
    // ldrh r1, [r6, #2]
    // lsl r5, r5, #0x18
    // and r1, r4
    // lsr r5, r5, #0x10
    // orr r1, r5
    // strh r1, [r6, #2]
    // ldrh r1, [r6, #4]
    // bic r1, r2
    // orr r1, r3
    // strh r1, [r6, #4]
    // ldrh r1, [r6, #4]
    // add r2, r1, #0
    // ldrb r1, [r0, #7]
    // and r2, r4
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x10
    // orr r1, r2
    // strh r1, [r6, #4]
    // mov r1, #1
    // strb r1, [r6, #0xc]
    // ldrb r0, [r0, #3]
    // cmp r0, #0x14
    // bls _02031F6A
    // ldrh r1, [r6]
    // mov r0, #0xf0
    // bic r1, r0
    // mov r0, #0x30
    // orr r0, r1
    // strh r0, [r6]
    // b _02031FDC
    // cmp r0, #7
    // ldrh r1, [r6]
    // bls _02031F7C
    // mov r0, #0xf0
    // bic r1, r0
    // mov r0, #0x20
    // orr r0, r1
    // strh r0, [r6]
    // b _02031FDC
    // mov r0, #0xf0
    // bic r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // strh r0, [r6]
    // b _02031FDC
    // add r1, sp, #4
    // add r0, r6, #0
    // add r1, #2
    // mov r2, #0
    // bl sub_02032588
    // add r0, r6, #2
    // add r1, sp, #8
    // mov r2, #1
    // bl sub_02032588
    // ldr r0, [sp]
    // cmp r0, #4
    // bne _02031FB2
    // add r1, sp, #0xc
    // add r0, r6, #4
    // add r1, #2
    // mov r2, #2
    // bl sub_02032588
    // b _02031FDC
    // ldrh r1, [r6, #4]
    // mov r0, #0xf
    // bic r1, r0
    // mov r0, #5
    // orr r0, r1
    // strh r0, [r6, #4]
    // ldrh r1, [r6, #4]
    // mov r0, #0xf0
    // bic r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // strh r0, [r6, #4]
    // ldrh r1, [r6, #4]
    // ldr r0, _02031FE4 ; =0xFFFF00FF
    // and r1, r0
    // add r0, sp, #4
    // ldrb r0, [r0, #7]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x10
    // orr r0, r1
    // strh r0, [r6, #4]
    // ldr r0, [sp]
    // strb r0, [r6, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02031FE4: .word 0xFFFF00FF
    // TODO: decompile
}



void sub_02031FE8(void) {
}



void sub_02032004(void) {
}



void sub_02032024(void) {
    *((u8*)(r0 + 9)) = (0 - 1);
    // add r0, #0xc
    sub_02031B5C(r0);
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    // and r0, r1
    *((u32*)(r4 + 0x1c)) = (3 << 0x1e);
}



void sub_02032058(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldrh r0, [r5, #0xa]
    // add r4, r1, #0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x1f
    // bne _0203206C
    // ldrb r0, [r5, #9]
    // cmp r0, #0
    // beq _020320D8
    // ldr r0, [r5, #0x18]
    // sub r6, r4, r0
    // cmp r6, #0x64
    // blo _02032094
    // add r0, r6, #0
    // mov r1, #0x64
    // bl _u32_div_f
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl sub_02032340
    // add r0, r6, #0
    // mov r1, #0x64
    // bl _u32_div_f
    // sub r0, r4, r1
    // str r0, [r5, #0x18]
    // ldrh r0, [r5, #0xa]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x1f
    // beq _020320D8
    // ldr r1, [r5, #0x1c]
    // mov r0, #3
    // lsl r0, r0, #0x1e
    // add r2, r1, #0
    // and r2, r0
    // ldr r0, [r5, #0x14]
    // sub r1, r4, r0
    // ldr r0, _020320DC ; =0x3FFFFFFF
    // and r0, r1
    // orr r0, r2
    // str r0, [r5, #0x1c]
    // lsl r0, r0, #2
    // lsr r0, r0, #2
    // cmp r0, #0x64
    // blo _020320D8
    // ldrb r0, [r5, #9]
    // cmp r0, #0
    // beq _020320CA
    // add r0, r5, #0
    // mov r1, #3
    // bl sub_02031BEC
    // b _020320D2
    // add r0, r5, #0
    // mov r1, #2
    // bl sub_02031BEC
    // add r0, r5, #0
    // bl sub_02032354
    // pop {r4, r5, r6, pc}
    // nop
    // _020320DC: .word 0x3FFFFFFF
    // TODO: decompile
}



void sub_020320E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r0, r3, #0
    // mov r1, #0x20
    // add r6, r2, #0
    // bl Heap_AllocAtEnd
    // mov r1, #0
    // mov r2, #0x20
    // add r4, r0, #0
    // bl MI_CpuFill8
    // add r0, r5, #0
    // bl PlayerProfile_GetTrainerID
    // str r0, [r4]
    // add r0, r5, #0
    // bl PlayerProfile_GetTrainerGender
    // strb r0, [r4, #4]
    // add r0, r5, #0
    // bl PlayerProfile_GetLanguage
    // strb r0, [r4, #5]
    // add r0, r5, #0
    // bl PlayerProfile_GetVersion
    // strb r0, [r4, #6]
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #8
    // bl StringFillEOS
    // add r0, r5, #0
    // bl PlayerProfile_GetNamePtr
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #8
    // mov r2, #7
    // bl CopyU16StringArrayN
    // add r2, r4, #0
    // add r0, r7, #0
    // mov r1, #8
    // add r2, #0x18
    // bl sub_02031CEC
    // ldr r0, _02032154 ; =0x0000FFFF
    // cmp r6, r0
    // bls _0203214C
    // strh r0, [r4, #0x18]
    // b _0203214E
    // strh r6, [r4, #0x18]
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02032154: .word 0x0000FFFF
    // TODO: decompile
}



void sub_02032158(void) {
    // add r0, #8
    // add r1, #8
    StringNotEqual(0, *((u8*)(r1 + 5)), *((u8*)(0 + 5)));
}



void sub_020321A0(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // str r4, [sp, #0x10]
    // add r5, #0x38
    sub_02031D6C(r0);
    // ldr r0, [sp, #0x10]
    // add r5, #0x20
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x18
    sub_02031D6C(r7);
    // str r4, [sp, #0x14]
    // ldr r5, [sp]
    // ldr r6, [sp, #0x14]
    // add r5, #0x20
    sub_02032158(r7, r5);
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
    *((u8*)(r0 + 0xe)) = 0xff;
    *((u8*)(r0 + 0xe)) = 0xff;
}



void sub_02032354(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // str r0, [sp]
    // ldrh r0, [r0, #0xa]
    // add r1, sp, #0x34
    // add r1, #1
    // str r0, [sp, #0x14]
    // ldr r0, [sp]
    // add r0, #0xc
    // bl sub_020324F4
    // mov r0, #0
    // str r0, [sp, #0x28]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // mov r1, #7
    // and r0, r1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // bne _02032380
    // b _020324CA
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x1c]
    // sub r0, r1, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x30
    // strb r0, [r1]
    // add r0, r0, #1
    // add r1, r1, #1
    // cmp r0, #5
    // blt _02032398
    // mov r0, #0
    // add r2, sp, #0x30
    // add r7, sp, #0x34
    // str r0, [sp, #4]
    // add r7, #1
    // mov ip, r2
    // ldr r0, [sp, #4]
    // add r1, r0, #1
    // cmp r1, #5
    // bge _020323DE
    // mov r0, ip
    // add r3, r0, r1
    // mov r0, #0
    // mov r5, #0
    // ldrsb r4, [r3, r0]
    // ldrsb r5, [r2, r5]
    // ldrsb r0, [r7, r4]
    // ldrsb r6, [r7, r5]
    // cmp r6, r0
    // bgt _020323D6
    // cmp r6, r0
    // bne _020323D2
    // cmp r5, r4
    // blt _020323D6
    // strb r4, [r2]
    // strb r5, [r3]
    // add r1, r1, #1
    // add r3, r3, #1
    // cmp r1, #5
    // blt _020323BA
    // ldr r0, [sp, #4]
    // add r2, r2, #1
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #2
    // blt _020323AE
    // ldr r0, [sp, #0x20]
    // ldr r2, _020324F0 ; =_020F68DE
    // lsl r1, r0, #2
    // add r0, r0, r1
    // add r1, r2, r0
    // add r2, sp, #0x34
    // mov r4, #0
    // add r3, sp, #0x30
    // ldrsb r0, [r3, r4]
    // add r2, #1
    // str r0, [sp, #8]
    // add r0, r2, r0
    // str r0, [sp, #0xc]
    // mov r0, #1
    // ldrsb r7, [r3, r0]
    // add r0, r2, r7
    // str r0, [sp, #0x2c]
    // mov r0, #0
    // ldrsb r5, [r1, r0]
    // ldrsb r3, [r2, r0]
    // add r0, r3, r5
    // lsl r0, r0, #0x18
    // asr r0, r0, #0x18
    // cmp r5, #0
    // ble _0203243E
    // ldr r6, [sp, #0xc]
    // mov r5, #0
    // ldrsb r5, [r6, r5]
    // cmp r5, #0
    // beq _0203243E
    // ldr r5, [sp, #8]
    // cmp r5, r4
    // beq _0203243E
    // ldr r5, [sp, #0x2c]
    // mov r6, #0
    // ldrsb r5, [r5, r6]
    // cmp r5, #0
    // beq _0203243E
    // cmp r7, r4
    // beq _0203243E
    // mov r5, #1
    // str r5, [sp, #0x10]
    // cmp r0, #0x3f
    // blt _02032446
    // mov r0, #0x3f
    // b _0203244C
    // cmp r0, #0
    // bge _0203244C
    // mov r0, #0
    // ldr r5, [sp, #0x20]
    // cmp r5, #6
    // beq _02032456
    // cmp r0, r3
    // bgt _02032468
    // ldr r3, [sp, #0x1c]
    // cmp r0, r3
    // ble _02032468
    // lsl r3, r0, #0x18
    // lsr r3, r3, #0x18
    // str r3, [sp, #0x1c]
    // lsl r3, r4, #0x18
    // lsr r3, r3, #0x18
    // str r3, [sp, #0x18]
    // strb r0, [r2]
    // ldr r3, [sp, #0x24]
    // add r4, r4, #1
    // add r0, r3, r0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x24]
    // add r1, r1, #1
    // add r2, r2, #1
    // cmp r4, #5
    // blt _0203240C
    // ldr r0, [sp, #0x14]
    // lsl r0, r0, #0xd
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // beq _0203249E
    // ldr r0, [sp]
    // ldrb r1, [r0, #0xe]
    // cmp r1, #0xa
    // bhs _0203249A
    // mov r1, #0
    // strb r1, [r0, #0xe]
    // b _0203249E
    // sub r1, #0xa
    // strb r1, [r0, #0xe]
    // ldr r0, [sp, #0x20]
    // cmp r0, #5
    // beq _020324BE
    // ldr r0, [sp, #0x24]
    // cmp r0, #0x64
    // bls _020324BE
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
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #5
    // bge _020324CA
    // b _0203236E
    // mov r4, #0
    // add r3, sp, #0x34
    // add r3, #1
    // add r1, r4, #0
    // ldrsb r2, [r3, r1]
    // ldr r0, [sp]
    // add r3, r3, #1
    // add r0, r0, r4
    // add r4, r4, #1
    // strb r2, [r0, #0xf]
    // cmp r4, #5
    // blt _020324D2
    // ldr r0, [sp]
    // mov r1, #3
    // strb r1, [r0, #9]
    // mov r1, #0
    // strh r1, [r0, #0xa]
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _020324F0: .word _020F68DE
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrh r0, [r4]
    // ldrb r5, [r1]
    // mov r3, #0xf
    // bic r0, r3
    // mov r3, #0xf
    // and r3, r5
    // orr r0, r3
    // strh r0, [r4]
    // ldrh r3, [r4]
    // ldr r0, _020325C8 ; =0xFFFF00FF
    // and r3, r0
    // ldrb r0, [r1, #1]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x10
    // orr r0, r3
    // strh r0, [r4]
    // lsl r0, r2, #0x18
    // ldrb r1, [r1, #1]
    // lsr r0, r0, #0x18
    // bl sub_02032504
    // lsl r0, r0, #0x1c
    // ldrh r2, [r4]
    // mov r1, #0xf0
    // lsr r0, r0, #0x18
    // bic r2, r1
    // orr r0, r2
    // strh r0, [r4]
    // pop {r3, r4, r5, pc}
    // nop
    // _020325C8: .word 0xFFFF00FF
    // TODO: decompile
}



void sub_020325CC(void) {
}


