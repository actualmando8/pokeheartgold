/* Decompiled from asm/unk_02016EDC.s */
#include "global.h"

void sub_02016EDC(void) {
    Heap_Alloc(0xc);
    *((u8*)(r0 + 8)) = r7;
    *((u8*)(r0 + 9)) = r5;
    // mul r7, r0
    *((u32*)(r0 + 4)) = r6;
    Heap_Alloc(r6, r5);
    // str r0, [r4]
    MI_CpuFill8(0, r7);
    // add r1, r1, r6
    *((u32*)(*((u32*)r4) + 0x20)) = 1;
    // add r6, r6, r0
}



void sub_02016F2C(void) {
}



void sub_02016F40(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // str r3, [sp, #4]
    // add r0, r2, #0
    // ldrh r6, [r0]
    // ldrh r0, [r0, #2]
    // add r7, r1, #0
    // ldrb r1, [r5, #9]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r2, [sp]
    // cmp r0, r1
    // blo _02016F60
    // bl GF_AssertFail
    // ldr r0, [sp, #4]
    // mov r1, #0x1d
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r0, [r5]
    // mul r4, r1
    // add r0, r0, r4
    // ldr r0, [r0, #0x10]
    // cmp r0, #0
    // beq _02016F78
    // bl GF_AssertFail
    // ldr r0, [r5]
    // mov r2, #0x1d
    // add r0, r0, r4
    // mov r1, #0
    // lsl r2, r2, #4
    // bl MI_CpuFill8
    // ldr r0, [r5]
    // mov r1, #1
    // add r0, r0, r4
    // str r1, [r0, #0x10]
    // ldr r0, [r5]
    // cmp r6, #0x8f
    // str r7, [r0, r4]
    // blt _02016F9A
    // mov r6, #0
    // str r6, [sp, #8]
    // ldr r0, [r5]
    // add r0, r0, r4
    // str r6, [r0, #0x14]
    // ldrb r0, [r5, #8]
    // cmp r0, #0
    // beq _02016FAC
    // ldr r0, [sp]
    // ldrb r2, [r0, #4]
    // b _02016FAE
    // mov r2, #0
    // ldr r0, [r5]
    // add r1, r0, r4
    // mov r0, #0x73
    // lsl r0, r0, #2
    // strb r2, [r1, r0]
    // ldr r1, [r5]
    // ldr r2, [r5, #4]
    // add r1, r1, r4
    // ldr r1, [r1, #0x14]
    // mov r0, #0x5a
    // bl AllocAtEndAndReadWholeNarcMemberByIdPair
    // ldr r1, [r5]
    // mov r2, #0
    // add r1, r1, r4
    // str r0, [r1, #8]
    // ldr r0, [r5]
    // mov r6, #0x1c
    // add r1, r0, r4
    // ldr r0, [r1, #8]
    // str r0, [r1, #0xc]
    // ldr r0, [r5]
    // add r0, r0, r4
    // str r2, [r0, #0x1c]
    // ldr r0, [r5]
    // add r0, r0, r4
    // str r2, [r0, #0x20]
    // ldr r0, [r5]
    // add r1, r0, r4
    // ldr r0, _02017060 ; =0x000001CD
    // strb r2, [r1, r0]
    // ldr r1, [r5]
    // add r3, r1, r4
    // add r1, r0, #1
    // strb r6, [r3, r1]
    // ldr r1, [r5]
    // add r0, r0, #2
    // add r1, r1, r4
    // strb r2, [r1, r0]
    // ldr r1, [r5]
    // ldr r0, _02017064 ; =sub_020170C4
    // add r1, r1, r4
    // bl SysTask_CreateOnMainQueue
    // ldr r1, [r5]
    // add r1, r1, r4
    // str r0, [r1, #4]
    // ldr r0, [r5]
    // add r1, r0, r4
    // ldr r0, [sp, #8]
    // str r0, [r1, #0x54]
    // add r0, r7, #0
    // mov r1, #0
    // bl Pokepic_GetAttr
    // ldr r1, [r5]
    // add r1, r1, r4
    // str r0, [r1, #0x58]
    // add r0, r7, #0
    // mov r1, #1
    // bl Pokepic_GetAttr
    // ldr r1, [r5]
    // add r1, r1, r4
    // str r0, [r1, #0x5c]
    // ldr r1, [r5]
    // mov r0, #0
    // add r1, r1, r4
    // str r0, [r1, #0x60]
    // ldr r1, [r5]
    // add r1, r1, r4
    // str r0, [r1, #0x64]
    // ldr r1, [r5]
    // add r1, r1, r4
    // str r0, [r1, #0x68]
    // ldr r1, [r5]
    // add r1, r1, r4
    // str r0, [r1, #0x6c]
    // ldr r1, [r5]
    // add r1, r1, r4
    // str r0, [r1, #0x70]
    // ldr r1, [r5]
    // add r1, r1, r4
    // str r0, [r1, #0x74]
    // ldr r1, [r5]
    // add r1, r1, r4
    // str r0, [r1, #0x78]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02017060: .word 0x000001CD
    // _02017064: .word sub_020170C4
    // TODO: decompile
}



void sub_02017068(void) {
}



void sub_02017088(void) {
    // mul r4, r0
    // add r0, r0, r4
    SysTask_Destroy(*((u32*)(*((u32*)r0) + 4)));
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 4)) = 0;
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x20)) = 1;
    // add r1, r1, r4
    *((u32*)(*((u32*)r5) + 0x10)) = 0;
    // add r0, r0, r4
    Heap_Free(*((u32*)(*((u32*)r5) + 8)), *((u32*)r5), 1);
}



void sub_020170C4(void) {
    sub_020170FC(r1);
    *((u32*)(r4 + 0x54)) = (r0 - 1);
    *((u32*)(r4 + 0x20)) = 1;
    *((u32*)(r4 + 0x10)) = 0;
    SysTask_Destroy(r5);
    *((u32*)(r4 + 4)) = 0;
    Heap_Free(*((u32*)(r4 + 8)));
}



void sub_020170FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r6, #0
    // str r6, [r5, #0x18]
    // add r7, r5, #0
    // str r6, [r5, #0x44]
    // add r4, r6, #0
    // add r7, #0x7c
    // mov r0, #0x54
    // add r1, r4, #0
    // mul r1, r0
    // add r0, r7, r1
    // ldr r1, [r7, r1]
    // cmp r1, #0
    // beq _0201713A
    // add r1, r0, #0
    // add r1, #0x2d
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _0201712C
    // ldr r2, [r0, #0x50]
    // add r1, r5, #0
    // blx r2
    // b _02017140
    // add r1, r0, #0
    // add r1, #0x2d
    // ldrb r1, [r1]
    // add r0, #0x2d
    // sub r1, r1, #1
    // strb r1, [r0]
    // b _02017140
    // add r0, r6, #1
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _0201710C
    // cmp r6, #4
    // bne _02017154
    // ldr r0, _020171E8 ; =0x000001CD
    // mov r1, #0
    // strb r1, [r5, r0]
    // ldr r0, _020171E8 ; =0x000001CD
    // ldrb r1, [r5, r0]
    // cmp r1, #0
    // beq _0201716A
    // add r0, r5, #0
    // bl sub_020179D4
    // add r0, r5, #0
    // bl sub_02017A1C
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r0, #2
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // beq _02017182
    // ldr r0, [r5]
    // bl Pokepic_ResumePaletteFade
    // cmp r0, #0
    // bne _020171E4
    // ldr r0, _020171EC ; =0x000001CF
    // mov r1, #0
    // strb r1, [r5, r0]
    // add r6, r5, #0
    // add r4, r5, #0
    // ldr r7, _020171F0 ; =_020F61F8
    // add r6, #0xc
    // add r4, #0x44
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r0, [r5, #0xc]
    // ldr r0, [r0]
    // cmp r0, #0x22
    // blo _0201719E
    // bl GF_AssertFail
    // ldr r1, [r5, #0xc]
    // add r0, r5, #0
    // ldr r1, [r1]
    // lsl r1, r1, #2
    // ldr r1, [r7, r1]
    // blx r1
    // ldr r0, [r5, #0x1c]
    // cmp r0, #0
    // bne _020171E4
    // ldr r0, [r6]
    // add r0, r0, #4
    // str r0, [r6]
    // ldr r0, [r5, #0x18]
    // cmp r0, #0
    // bne _020171E4
    // ldr r0, _020171E8 ; =0x000001CD
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // beq _020171D2
    // add r0, r5, #0
    // bl sub_020179D4
    // add r0, r5, #0
    // bl sub_02017A1C
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // ldr r1, [r5, #0x44]
    // lsl r0, r0, #8
    // cmp r1, r0
    // blt _0201718C
    // bl GF_AssertFail
    // mov r0, #1
    // str r0, [r5, #0x1c]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020171E8: .word 0x000001CD
    // _020171EC: .word 0x000001CF
    // _020171F0: .word _020F61F8
    // TODO: decompile
}



void sub_020171F4(void) {
}



void sub_02017208(void) {
}



void sub_02017214(void) {
}



void sub_02017220(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // mov r3, #0
    // add r0, #0x7c
    // mov r2, #0x54
    // add r1, r3, #0
    // mul r1, r2
    // add r4, r0, r1
    // ldr r1, [r0, r1]
    // cmp r1, #0
    // bne _02017254
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x54
    // bl MI_CpuFill8
    // mov r0, #1
    // str r0, [r4]
    // mov r0, #0xc
    // add r1, r5, #0
    // mul r1, r0
    // ldr r0, _02017268 ; =_020F61BC
    // ldr r0, [r0, r1]
    // str r0, [r4, #0x50]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // add r1, r3, #1
    // lsl r1, r1, #0x18
    // lsr r3, r1, #0x18
    // cmp r3, #4
    // blo _0201722A
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02017268: .word _020F61BC
    // TODO: decompile
}



void sub_0201726C(void) {
}



void sub_02017280(void) {
}



void sub_02017294(void) {
    *((u32*)(r0 + 0xc)) = (*((u32*)(r0 + 0xc)) + 4);
    sub_02017214((*((u32*)(r0 + 0xc)) + 4), (*((u32*)(r0 + 0xc)) + 4));
    // strb r0, [r4]
    // ldrb r0, [r4]
    GF_AssertFail();
}



void sub_020172B4(void) {
}



void sub_020172C8(void) {
    sub_02017294();
    // add r1, sp, #0
    sub_02017280(r5);
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add r1, sp, #0
    // add r1, #2
    sub_02017294(r5);
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [r4]
    sub_0201726C(r5, r6);
    // add r1, sp, #0
    // add r2, sp, #0
    // add r1, #2
    // add r2, #1
    sub_020172B4(r5);
    // add r0, sp, #0
    // add r1, r5, r1
    // str r1, [r4]
    // add r0, r5, r0
    // str r0, [r6]
    GF_AssertFail(*((u32*)((*((u8*)(r0 + 1)) << 2) + 0x24)), *((u32*)((*((u8*)(r0 + 2)) << 2) + 0x24)));
}



void sub_0201733C(void) {
    sub_02017294();
    // add r1, sp, #0
    // add r1, #1
    sub_02017280(r5);
    // add r1, sp, #0
    sub_02017280(r5);
    // add r0, sp, #0
    sub_0201726C(r5, r4);
    // add r1, sp, #0
    // add r1, #3
    sub_02017294(r5);
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [r4]
    GF_AssertFail(*((u32*)((*((u8*)(r0 + 3)) << 2) + 0x24)));
    // add r0, sp, #0
    // ldrb r0, [r0]
    sub_0201726C(r5, r6);
    // add r1, sp, #0
    // add r1, #2
    sub_02017294(r5);
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [r6]
    GF_AssertFail(*((u32*)((*((u8*)(r0 + 2)) << 2) + 0x24)));
}



void sub_020173C8(void) {
    // add r2, sp, #0
    // add r2, #3
    sub_020172B4();
    // add r0, sp, #0
    // add r1, sp, #0
    // add r0, r5, r0
    sub_02017280(r5);
    // add r0, sp, #0
    // ldrb r0, [r0]
    sub_0201726C(r5, r6);
    // add r1, sp, #0
    // add r1, #2
    sub_02017294(r5);
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [r6]
    GF_AssertFail(*((u32*)((*((u8*)(r0 + 2)) << 2) + 0x24)));
    // add r1, sp, #0
    sub_02017280(r5);
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add r1, sp, #4
    sub_0201726C(r5);
    // add r1, sp, #0
    // add r1, #1
    sub_02017294(r5);
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [sp, #4]
    GF_AssertFail(*((u32*)((*((u8*)(r0 + 1)) << 2) + 0x24)));
    // ldr r0, [sp, #4]
    // add r0, r7, r0
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [r4]
}



void sub_02017470(void) {
    // sub r0, r2, r0
    // bpl _0201747C
}



void sub_02017488(void) {
    // add r2, r0, #0
    // ldr r0, [r2]
    // ldr r2, [r2, #0x74]
    // mov r1, #1
    // neg r3, r2
    // asr r2, r3, #2
    // lsr r2, r2, #0x1d
    // add r2, r3, r2
    // ldr r3, _020174A0 ; =Pokepic_AddAttr
    // asr r2, r2, #3
    // bx r3
    // nop
    // _020174A0: .word Pokepic_AddAttr
    // TODO: decompile
}



void sub_020174A4(void) {
}



void sub_020174B4(void) {
}



void sub_020174BC(void) {
    Pokepic_SetAttr(*((u32*)r0), 0, *((u32*)(r0 + 0x58)));
    Pokepic_SetAttr(*((u32*)r4), 1, *((u32*)(r4 + 0x5c)));
    Pokepic_SetAttr(*((u32*)r4), 9, 0);
    Pokepic_SetAttr(*((u32*)r4), 0xa, 0);
    // add r2, #0xf4
    Pokepic_SetAttr(*((u32*)r4), 0xc, 0xc);
    // add r2, #0xf3
    Pokepic_SetAttr(*((u32*)r4), 0xd, 0xd);
}



void sub_02017504(void) {
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    sub_020172B4();
    // add r0, sp, #0
    // ldrb r1, [r0]
    // add r1, r4, r1
    // add r0, r4, r0
    *((u32*)((*((u8*)(r0 + 1)) << 2) + 0x24)) = *((u32*)((r1 << 2) + 0x24));
}



void sub_0201752C(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    sub_020172C8();
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // add r1, r1, r0
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add r0, r4, r0
    *((u32*)((r0 << 2) + 0x24)) = r1;
}



void sub_02017550(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    sub_020172C8();
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // mul r2, r0
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add r0, r4, r0
    *((u32*)((r0 << 2) + 0x24)) = r1;
}



void sub_02017578(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    sub_0201733C();
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // sub r1, r1, r0
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add r0, r4, r0
    *((u32*)((r0 << 2) + 0x24)) = r1;
}



void sub_0201759C(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    sub_0201733C();
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    _s32_div_f();
    // add r1, sp, #0
    // ldrb r1, [r1]
    // add r1, r4, r1
    *((u32*)((r1 << 2) + 0x24)) = r0;
}



void sub_020175C4(void) {
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    sub_0201733C();
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    _s32_div_f();
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add r0, r4, r0
    *((u32*)((r0 << 2) + 0x24)) = r1;
}



void sub_020175EC(void) {
    // add r1, sp, #0
    sub_02017280();
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add r1, sp, #0
    // add r1, #3
    sub_02017294(r5);
    // add r0, sp, #0
    // add r1, sp, #8
    // add r0, r5, r0
    // str r0, [sp, #0xc]
    sub_0201726C(r5);
    // add r1, sp, #0
    // add r2, sp, #0
    // add r1, #3
    // add r2, #2
    sub_020172B4(r5);
    // add r0, sp, #0
    // add r1, r5, r1
    // str r1, [sp, #0xc]
    // add r0, r5, r0
    // str r0, [sp, #8]
    GF_AssertFail(*((u32*)((*((u8*)(r0 + 2)) << 2) + 0x24)), *((u32*)((*((u8*)(r0 + 3)) << 2) + 0x24)));
    // add r1, sp, #0
    // add r1, #1
    sub_02017280(r5);
    // add r0, sp, #0
    GF_AssertFail(*((u8*)(r0 + 1)));
    // add r0, sp, #0xc
    // add r1, sp, #8
    sub_02017470();
    // add r1, sp, #0
    sub_02017280(r5);
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add r1, sp, #0
    // add r1, #3
    sub_02017294(r5);
    // add r1, sp, #4
    sub_0201726C(r5);
    // add r1, sp, #0
    // add r2, sp, #0
    // add r1, #3
    // add r2, #2
    sub_020172B4(r5);
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [sp, #4]
    GF_AssertFail(*((u32*)((*((u8*)(r0 + 2)) << 2) + 0x24)));
    // add r0, sp, #0
    // ldr r1, [sp, #4]
    // add r0, r5, r0
    *((u32*)((*((u8*)(r0 + 3)) << 2) + 0x24)) = *((u8*)(r0 + 1));
}



void sub_020176CC(void) {
    // add r1, sp, #0
    sub_02017294();
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 4);
    sub_02017214((*((u32*)(r4 + 0xc)) + 4));
    // add r1, sp, #0
    // ldrb r1, [r1]
    // add r1, r4, r1
    *((u32*)((r1 << 2) + 0x24)) = r0;
}



void sub_020176F0(void) {
    GF_AssertFail(*((u32*)(r0 + 0x50)));
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 4);
    *((u32*)(r4 + 0x50)) = (*((u32*)(r4 + 0xc)) + 4);
    sub_02017214(*((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x48)) = r0;
    *((u32*)(r4 + 0x4c)) = 0;
}



void sub_02017714(void) {
    *((u32*)(r0 + 0x4c)) = (*((u32*)(r0 + 0x4c)) + 1);
    *((u32*)(r0 + 0x50)) = 0;
    *((u32*)(r0 + 0x4c)) = 0;
    *((u32*)(r0 + 0x48)) = 0;
    *((u32*)(r0 + 0xc)) = *((u32*)(r0 + 0x50));
}



void sub_02017730(void) {
    // add r1, sp, #4
    sub_0201726C();
    // add r1, sp, #0
    sub_02017294(r4);
    // add r2, sp, #0
    // ldrb r2, [r2]
    // ldr r1, [sp, #4]
    // add r2, r4, r2
    Pokepic_SetAttr(*((u32*)r4), *((u32*)((r2 << 2) + 0x24)));
}



void sub_0201775C(void) {
    // add r1, sp, #4
    sub_0201726C();
    // add r1, sp, #0
    sub_02017294(r4);
    // add r2, sp, #0
    // ldrb r2, [r2]
    // ldr r1, [sp, #4]
    // add r2, r4, r2
    Pokepic_AddAttr(*((u32*)r4), *((u32*)((r2 << 2) + 0x24)));
}



void sub_02017788(void) {
    // add r1, sp, #8
    sub_0201726C();
    // add r1, sp, #0
    // add r1, #1
    sub_02017280(r4);
    // add r0, sp, #0
    // add r1, sp, #4
    sub_0201726C(r4);
    // add r1, sp, #0
    // add r1, #2
    sub_02017294(r4);
    // add r0, sp, #0
    // add r0, r4, r0
    // str r0, [sp, #4]
    GF_AssertFail(*((u32*)((*((u8*)(r0 + 2)) << 2) + 0x24)));
    // add r1, sp, #0
    sub_02017280(r4);
    // add r0, sp, #0
    // ldrb r0, [r0]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    Pokepic_SetAttr(*((u32*)r4));
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    Pokepic_AddAttr(*((u32*)r4));
    GF_AssertFail();
}



void sub_02017808(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // add r4, r0, #0
    // bl sub_020173C8
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #4]
    // asr r0, r0, #4
    // lsl r1, r0, #2
    // ldr r0, _02017838 ; =FX_SinCosTable_
    // ldrsh r0, [r0, r1]
    // mul r0, r2
    // asr r1, r0, #0xc
    // add r0, sp, #0
    // ldrb r0, [r0]
    // lsl r0, r0, #2
    // add r0, r4, r0
    // str r1, [r0, #0x24]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _02017838: .word FX_SinCosTable_
    // TODO: decompile
}



void sub_0201783C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // add r4, r0, #0
    // bl sub_020173C8
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // asr r1, r1, #4
    // lsl r1, r1, #1
    // add r1, r1, #1
    // lsl r2, r1, #1
    // ldr r1, _02017870 ; =FX_SinCosTable_
    // ldrsh r1, [r1, r2]
    // mul r1, r0
    // add r0, sp, #0
    // ldrb r0, [r0]
    // asr r1, r1, #0xc
    // lsl r0, r0, #2
    // add r0, r4, r0
    // str r1, [r0, #0x24]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _02017870: .word FX_SinCosTable_
    // TODO: decompile
}



void sub_02017874(void) {
    // add r1, sp, #0
    // add r1, #1
    sub_02017294();
    // add r1, sp, #0
    sub_02017280(r4);
    // add r0, sp, #0
    // ldrb r1, [r0]
    // add r0, r4, r0
    *((u32*)(r4 + 0x60)) = *((u32*)((*((u8*)(r0 + 1)) << 2) + 0x24));
    // add r0, r4, r0
    *((u32*)(r4 + 0x64)) = *((u32*)((*((u8*)(*((u32*)((*((u8*)(r0 + 1)) << 2) + 0x24)) + 1)) << 2) + 0x24));
    GF_AssertFail(*((u32*)((*((u8*)(*((u32*)((*((u8*)(r0 + 1)) << 2) + 0x24)) + 1)) << 2) + 0x24)));
}



void sub_020178BC(void) {
    // add r1, sp, #0
    // add r1, #1
    sub_02017294();
    // add r1, sp, #0
    sub_02017280(r4);
    // add r0, sp, #0
    // ldrb r1, [r0]
    // add r0, r4, r0
    // add r0, r1, r0
    *((u32*)(r4 + 0x60)) = *((u32*)((*((u8*)(r0 + 1)) << 2) + 0x24));
    // add r0, r4, r0
    // add r0, r1, r0
    *((u32*)(r4 + 0x64)) = *((u32*)((*((u8*)(*((u32*)((*((u8*)(r0 + 1)) << 2) + 0x24)) + 1)) << 2) + 0x24));
    GF_AssertFail(*((u32*)((*((u8*)(*((u32*)((*((u8*)(r0 + 1)) << 2) + 0x24)) + 1)) << 2) + 0x24)), *((u32*)(r4 + 0x64)));
}



void sub_0201790C(void) {
    // add r1, sp, #0
    // add r1, #3
    sub_02017280();
    // add r0, sp, #0
    // add r4, #0x60
    // add r4, #0x64
    // add r4, #0x68
    // add r4, #0x6c
    // add r4, #0x70
    // add r4, #0x74
    // add r4, #0x78
    GF_AssertFail(*((u8*)(r0 + 3)));
    // add r1, sp, #0
    // add r1, #1
    sub_02017280(r5);
    // add r0, sp, #0
    // add r1, sp, #4
    sub_0201726C(r5);
    // add r1, sp, #0
    // add r1, #2
    sub_02017294(r5);
    // add r0, sp, #0
    // add r0, r5, r0
    // str r0, [sp, #4]
    GF_AssertFail(*((u32*)((*((u8*)(r0 + 2)) << 2) + 0x24)));
    // add r1, sp, #0
    sub_02017280(r5);
    // add r0, sp, #0
    // ldrb r0, [r0]
    // ldr r0, [sp, #4]
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // str r0, [r4]
    GF_AssertFail(*((u32*)r4));
}



void sub_020179D4(void) {
    // ldrb r0, [r4, r0]
    // add r2, r3, r2
    // sub r2, r5, r2
    Pokepic_SetAttr(*((u32*)r0), 0, *((u32*)(r0 + 0x68)), *((u32*)(r0 + 0x60)));
    // add r2, r3, r2
    // add r2, r5, r2
    Pokepic_SetAttr(0, *((u32*)(r4 + 0x60)), *((u32*)(r4 + 0x58)));
    // add r2, r3, r2
    // add r2, r5, r2
    Pokepic_SetAttr(*((u32*)r4), 1, *((u32*)(r4 + 0x64)), *((u32*)(r4 + 0x5c)));
}



void sub_02017A1C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #0xc
    // add r2, r1, #0
    // ldr r3, [r4, #0x70]
    // add r2, #0xf4
    // ldr r0, [r4]
    // add r2, r3, r2
    // bl Pokepic_SetAttr
    // mov r1, #0xd
    // add r2, r1, #0
    // ldr r3, [r4, #0x74]
    // add r2, #0xf3
    // ldr r0, [r4]
    // add r2, r3, r2
    // bl Pokepic_SetAttr
    // ldr r2, [r4, #0x78]
    // ldr r0, [r4]
    // lsl r2, r2, #0x10
    // mov r1, #9
    // lsr r2, r2, #0x10
    // bl Pokepic_SetAttr
    // ldr r0, _02017A80 ; =0x000001CE
    // ldrb r0, [r4, r0]
    // cmp r0, #0x1b
    // bne _02017A64
    // ldr r0, [r4, #0x74]
    // cmp r0, #0
    // bge _02017A7E
    // add r0, r4, #0
    // bl sub_02017488
    // pop {r4, pc}
    // cmp r0, #0x1d
    // bne _02017A76
    // ldr r0, [r4, #0x74]
    // cmp r0, #0
    // beq _02017A7E
    // add r0, r4, #0
    // bl sub_02017488
    // pop {r4, pc}
    // cmp r0, #0x1c
    // beq _02017A7E
    // bl GF_AssertFail
    // pop {r4, pc}
    // _02017A80: .word 0x000001CE
    // TODO: decompile
}



void sub_02017A84(void) {
    // add r1, sp, #0
    sub_02017294();
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 4);
    sub_02017214((*((u32*)(r4 + 0xc)) + 4));
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add r0, r4, r0
    *((u32*)(r4 + 0x68)) = *((u32*)((((r0 << 0x18) >> 0x18) << 2) + 0x24));
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add r0, r4, r0
    *((u32*)(r4 + 0x6c)) = *((u32*)((*((u32*)((((r0 << 0x18) >> 0x18) << 2) + 0x24)) << 2) + 0x24));
    GF_AssertFail(*((u32*)((*((u32*)((((r0 << 0x18) >> 0x18) << 2) + 0x24)) << 2) + 0x24)));
}



void sub_02017AD8(void) {
}



void sub_02017AEC(void) {
    // add r1, sp, #4
    // add r1, #2
    sub_02017280();
    // add r1, sp, #4
    // add r1, #1
    sub_02017280(r4);
    // add r1, sp, #4
    sub_02017280(r4);
    // add r1, sp, #8
    sub_0201726C(r4);
    // ldr r0, [sp, #8]
    // add r3, sp, #4
    // str r0, [sp]
    // ldrb r3, [r3]
    Pokepic_StartPaletteFade(*((u32*)r4), *((u8*)(r3 + 2)), *((u8*)(r3 + 1)));
}



void sub_02017B2C(void) {
}



void sub_02017B48(void) {
    // ldr r1, _02017B50 ; =0x000001CD
    // mov r2, #1
    // strb r2, [r0, r1]
    // bx lr
    // _02017B50: .word 0x000001CD
    // TODO: decompile
}



void sub_02017B54(void) {
    // push {r4, lr}
    // ldr r1, _02017B88 ; =0x000001CE
    // add r4, r0, #0
    // add r1, r4, r1
    // bl sub_02017280
    // ldr r0, _02017B88 ; =0x000001CE
    // mov r1, #1
    // ldrb r0, [r4, r0]
    // add r2, r1, #0
    // cmp r0, #0x1b
    // beq _02017B72
    // cmp r0, #0x1d
    // beq _02017B72
    // mov r2, #0
    // cmp r2, #0
    // bne _02017B7C
    // cmp r0, #0x1c
    // beq _02017B7C
    // mov r1, #0
    // cmp r1, #0
    // bne _02017B84
    // bl GF_AssertFail
    // pop {r4, pc}
    // nop
    // _02017B88: .word 0x000001CE
    // TODO: decompile
}



void sub_02017B8C(void) {
}



void sub_02017B98(void) {
}



void sub_02017BA4(void) {
}



void sub_02017BB0(void) {
}



void sub_02017BBC(void) {
}



void sub_02017BC8(void) {
    // str r0, [r3]
    // add r0, r1, r0
    // str r0, [r3]
    // add r0, r1, r0
    // str r0, [r3]
    GF_AssertFail(*((u32*)r2), *((u32*)r3));
}



void sub_02017BF8(void) {
    // sub r0, #0x23
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02017C0C: ; jump table
    // add r0, #0x3c
    *((u32*)(r1 + 0x24)) = r1;
    // add r0, #0x68
    *((u32*)(r1 + 0x28)) = r2;
    *((u32*)(r1 + 0x30)) = *((u32*)(r2 + 0x68));
    // add r0, #0x40
    *((u32*)(r1 + 0x24)) = r1;
    // add r0, #0x6c
    *((u32*)(r1 + 0x28)) = r2;
    *((u32*)(r1 + 0x30)) = *((u32*)(r2 + 0x6c));
    // add r0, #0x44
    *((u32*)(r1 + 0x24)) = r1;
    // add r0, #0x70
    *((u32*)(r1 + 0x28)) = r2;
    *((u32*)(r1 + 0x30)) = *((u32*)(r2 + 0x70));
    // add r0, #0x48
    *((u32*)(r1 + 0x24)) = r1;
    // add r0, #0x74
    *((u32*)(r1 + 0x28)) = r2;
    *((u32*)(r1 + 0x30)) = *((u32*)(r2 + 0x74));
    // add r0, #0x4c
    *((u32*)(r1 + 0x24)) = r1;
    // add r0, #0x78
    *((u32*)(r1 + 0x28)) = r2;
    *((u32*)(r1 + 0x30)) = *((u32*)(r2 + 0x78));
    GF_AssertFail(*((u32*)(r2 + 0x78)));
}



void sub_02017C78(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // lsl r1, r6, #0x18
    // lsr r1, r1, #0x18
    // add r5, r0, #0
    // bl sub_02017220
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, r5, #0
    // add r1, #0x2c
    // bl sub_02017280
    // ldr r1, [sp, #4]
    // add r0, r5, #0
    // add r1, #0x2d
    // bl sub_02017280
    // mov r0, #0xc
    // mul r0, r6
    // ldr r1, _02017D14 ; =_020F61C0
    // str r0, [sp]
    // ldr r0, [r1, r0]
    // mov r4, #0
    // cmp r0, #0
    // ble _02017CCE
    // ldr r1, _02017D18 ; =_020F61BC
    // ldr r0, [sp]
    // add r6, r1, r0
    // ldr r0, [sp, #4]
    // add r7, r0, #4
    // lsl r1, r4, #2
    // add r0, r5, #0
    // add r1, r7, r1
    // bl sub_0201726C
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, [r6, #4]
    // cmp r4, r0
    // blt _02017CB8
    // ldr r1, _02017D1C ; =_020F61C4
    // ldr r0, [sp]
    // add r2, r5, #0
    // ldr r0, [r1, r0]
    // lsl r1, r0, #2
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // ldr r0, [r0, #4]
    // ldr r1, [sp, #4]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl sub_02017BF8
    // ldr r0, [sp, #4]
    // add r0, #0x2d
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02017D00
    // ldr r0, [sp, #4]
    // add r1, r5, #0
    // add r2, r0, #0
    // ldr r2, [r2, #0x50]
    // blx r2
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // add r0, #0x2d
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // ldr r0, [sp, #4]
    // add r0, #0x2d
    // str r0, [sp, #4]
    // strb r1, [r0]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02017D14: .word _020F61C0
    // _02017D18: .word _020F61BC
    // _02017D1C: .word _020F61C4
    // TODO: decompile
}



void sub_02017D20(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x1c]
    // ldr r1, [r4, #0x10]
    // add r0, r0, #1
    // ldr r2, [r4, #0x14]
    // mul r0, r1
    // add r0, r2, r0
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // ldr r0, [r4, #4]
    // sub r0, #0x1e
    // cmp r0, #3
    // bhi _02017DAC
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02017D48: ; jump table
    // asr r0, r1, #4
    // lsl r1, r0, #2
    // ldr r0, _02017DD4 ; =FX_SinCosTable_
    // ldr r2, [r4, #0xc]
    // ldrsh r0, [r0, r1]
    // mul r0, r2
    // asr r1, r0, #0xc
    // ldr r0, [r4, #0x24]
    // str r1, [r0]
    // b _02017DB0
    // asr r1, r1, #4
    // lsl r1, r1, #1
    // add r1, r1, #1
    // lsl r2, r1, #1
    // ldr r1, _02017DD4 ; =FX_SinCosTable_
    // ldr r0, [r4, #0xc]
    // ldrsh r1, [r1, r2]
    // mul r1, r0
    // ldr r0, [r4, #0x24]
    // asr r1, r1, #0xc
    // str r1, [r0]
    // b _02017DB0
    // asr r0, r1, #4
    // lsl r1, r0, #2
    // ldr r0, _02017DD4 ; =FX_SinCosTable_
    // ldr r2, [r4, #0xc]
    // ldrsh r0, [r0, r1]
    // mul r0, r2
    // asr r0, r0, #0xc
    // neg r1, r0
    // ldr r0, [r4, #0x24]
    // str r1, [r0]
    // b _02017DB0
    // asr r1, r1, #4
    // lsl r1, r1, #1
    // add r1, r1, #1
    // lsl r2, r1, #1
    // ldr r1, _02017DD4 ; =FX_SinCosTable_
    // ldr r0, [r4, #0xc]
    // ldrsh r1, [r1, r2]
    // mul r1, r0
    // asr r0, r1, #0xc
    // neg r1, r0
    // ldr r0, [r4, #0x24]
    // str r1, [r0]
    // b _02017DB0
    // bl GF_AssertFail
    // add r0, r4, #0
    // add r0, #0x2c
    // ldrb r0, [r0]
    // add r1, r4, #0
    // ldr r2, [r4, #0x24]
    // ldr r3, [r4, #0x28]
    // add r1, #0x30
    // bl sub_02017BC8
    // ldr r0, [r4, #0x1c]
    // add r1, r0, #1
    // str r1, [r4, #0x1c]
    // ldr r0, [r4, #0x18]
    // cmp r1, r0
    // blt _02017DD2
    // mov r0, #0
    // str r0, [r4]
    // pop {r4, pc}
    // _02017DD4: .word FX_SinCosTable_
    // TODO: decompile
}



void sub_02017DD8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x1c]
    // ldr r1, [r4, #0x10]
    // add r0, r0, #1
    // mul r0, r1
    // ldr r1, [r4, #0x18]
    // bl _s32_div_f
    // ldr r1, [r4, #0x14]
    // add r0, r1, r0
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // ldr r0, [r4, #4]
    // sub r0, #0x1e
    // cmp r0, #3
    // bhi _02017E6A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02017E06: ; jump table
    // asr r0, r1, #4
    // lsl r1, r0, #2
    // ldr r0, _02017E94 ; =FX_SinCosTable_
    // ldr r2, [r4, #0xc]
    // ldrsh r0, [r0, r1]
    // mul r0, r2
    // asr r1, r0, #0xc
    // ldr r0, [r4, #0x24]
    // str r1, [r0]
    // b _02017E6E
    // asr r1, r1, #4
    // lsl r1, r1, #1
    // add r1, r1, #1
    // lsl r2, r1, #1
    // ldr r1, _02017E94 ; =FX_SinCosTable_
    // ldr r0, [r4, #0xc]
    // ldrsh r1, [r1, r2]
    // mul r1, r0
    // ldr r0, [r4, #0x24]
    // asr r1, r1, #0xc
    // str r1, [r0]
    // b _02017E6E
    // asr r0, r1, #4
    // lsl r1, r0, #2
    // ldr r0, _02017E94 ; =FX_SinCosTable_
    // ldr r2, [r4, #0xc]
    // ldrsh r0, [r0, r1]
    // mul r0, r2
    // asr r0, r0, #0xc
    // neg r1, r0
    // ldr r0, [r4, #0x24]
    // str r1, [r0]
    // b _02017E6E
    // asr r1, r1, #4
    // lsl r1, r1, #1
    // add r1, r1, #1
    // lsl r2, r1, #1
    // ldr r1, _02017E94 ; =FX_SinCosTable_
    // ldr r0, [r4, #0xc]
    // ldrsh r1, [r1, r2]
    // mul r1, r0
    // asr r0, r1, #0xc
    // neg r1, r0
    // ldr r0, [r4, #0x24]
    // str r1, [r0]
    // b _02017E6E
    // bl GF_AssertFail
    // add r0, r4, #0
    // add r0, #0x2c
    // ldrb r0, [r0]
    // add r1, r4, #0
    // ldr r2, [r4, #0x24]
    // ldr r3, [r4, #0x28]
    // add r1, #0x30
    // bl sub_02017BC8
    // ldr r0, [r4, #0x1c]
    // add r1, r0, #1
    // str r1, [r4, #0x1c]
    // ldr r0, [r4, #0x18]
    // cmp r1, r0
    // blt _02017E90
    // mov r0, #0
    // str r0, [r4]
    // pop {r4, pc}
    // nop
    // _02017E94: .word FX_SinCosTable_
    // TODO: decompile
}



void sub_02017E98(void) {
    // mul r2, r3
    // add r2, r5, r2
    // add r0, r0, r2
    // str r0, [r1]
    // add r0, #0x2c
    // ldrb r0, [r0]
    // add r1, #0x30
    sub_02017BC8(r0, r0, *((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x28)));
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) + 1);
    // str r0, [r4]
}



void sub_02017ED4(void) {
    // mul r0, r1
    _s32_div_f(*((u32*)(r0 + 8)), *((u32*)(r0 + 0xc)));
    // str r0, [r1]
    // add r0, #0x2c
    // ldrb r0, [r0]
    // add r1, #0x30
    sub_02017BC8(r4, r4, *((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 0x10)) = (*((u32*)(r4 + 0x10)) + 1);
    // str r0, [r4]
}



void sub_02017F10(void) {
    // mul r0, r1
    // add r2, r2, r0
    // add r0, r0, r2
    // str r0, [r1]
    // add r0, #0x2c
    // ldrb r0, [r0]
    // str r2, [r1]
    // str r0, [r4]
    // str r2, [r1]
    // str r0, [r4]
    // add r3, r3, r0
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1]
    // str r0, [r4]
    // sub r2, r3, r2
    // sub r0, r0, r2
    // str r0, [r1]
    // str r0, [r4]
    GF_AssertFail(0, *((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x10)), *((u32*)(r0 + 0x30)));
    // add r0, #0x2c
    // ldrb r0, [r0]
    // add r1, #0x30
    sub_02017BC8(r4, r4, *((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) + 1);
}


