/* Decompiled from asm/unk_02016EDC.s */
#include "global.h"

void sub_02016EDC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // mov r1, #0xc
    // add r6, r0, #0
    // add r7, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // strb r7, [r4, #8]
    // mov r0, #0x1d
    // strb r5, [r4, #9]
    // lsl r0, r0, #4
    // add r7, r5, #0
    // mul r7, r0
    // add r0, r6, #0
    // add r1, r7, #0
    // str r6, [r4, #4]
    // bl Heap_Alloc
    // mov r1, #0
    // add r2, r7, #0
    // str r0, [r4]
    // bl MI_CpuFill8
    // mov r3, #0
    // cmp r5, #0
    // ble _02016F28
    // mov r0, #0x1d
    // add r6, r3, #0
    // mov r2, #1
    // lsl r0, r0, #4
    // ldr r1, [r4]
    // add r3, r3, #1
    // add r1, r1, r6
    // str r2, [r1, #0x20]
    // add r6, r6, r0
    // cmp r3, r5
    // blt _02016F1A
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02016F2C(void) {
    Heap_Free();
    Heap_Free(r4);
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
    GF_AssertFail(0x1d);
}


void sub_02017088(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x1d
    // lsl r0, r0, #4
    // add r4, r1, #0
    // mul r4, r0
    // ldr r0, [r5]
    // add r0, r0, r4
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // beq _020170C2
    // bl SysTask_Destroy
    // ldr r1, [r5]
    // mov r0, #0
    // add r1, r1, r4
    // str r0, [r1, #4]
    // ldr r1, [r5]
    // mov r2, #1
    // add r1, r1, r4
    // str r2, [r1, #0x20]
    // ldr r1, [r5]
    // add r1, r1, r4
    // str r0, [r1, #0x10]
    // ldr r0, [r5]
    // add r0, r0, r4
    // ldr r0, [r0, #8]
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020170C4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x54]
    // cmp r0, #0
    // bne _020170D8
    // add r0, r4, #0
    // bl sub_020170FC
    // b _020170DC
    // sub r0, r0, #1
    // str r0, [r4, #0x54]
    // ldr r0, [r4, #0x1c]
    // cmp r0, #0
    // beq _020170FA
    // mov r0, #1
    // str r0, [r4, #0x20]
    // mov r0, #0
    // str r0, [r4, #0x10]
    // add r0, r5, #0
    // bl SysTask_Destroy
    // mov r0, #0
    // str r0, [r4, #4]
    // ldr r0, [r4, #8]
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    GF_AssertFail();
}


void sub_02017208(void) {
    sub_020171F4();
}


void sub_02017214(void) {
    sub_02017208();
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
    sub_02017214();
}


void sub_02017280(void) {
    sub_02017214();
}


void sub_02017294(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r1, [r0, #0xc]
    // add r1, r1, #4
    // str r1, [r0, #0xc]
    // add r0, r1, #0
    // bl sub_02017214
    // strb r0, [r4]
    // ldrb r0, [r4]
    // cmp r0, #8
    // blo _020172B0
    // bl GF_AssertFail
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020172B4(void) {
    sub_02017294();
    sub_02017294(r5, r4);
}


void sub_020172C8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // bl sub_02017294
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0]
    // cmp r0, #0x12
    // bne _02017308
    // add r1, sp, #0
    // add r0, r5, #0
    // add r1, #2
    // bl sub_02017294
    // add r0, sp, #0
    // ldrb r0, [r0, #2]
    // add r1, r6, #0
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x24]
    // str r0, [r4]
    // add r0, r5, #0
    // bl sub_0201726C
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // cmp r0, #0x13
    // bne _02017334
    // add r1, sp, #0
    // add r2, sp, #0
    // add r0, r5, #0
    // add r1, #2
    // add r2, #1
    // bl sub_020172B4
    // add r0, sp, #0
    // ldrb r1, [r0, #2]
    // add sp, #4
    // lsl r1, r1, #2
    // add r1, r5, r1
    // ldr r1, [r1, #0x24]
    // str r1, [r4]
    // ldrb r0, [r0, #1]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x24]
    // str r0, [r6]
    // pop {r3, r4, r5, r6, pc}
    // bl GF_AssertFail
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void sub_0201733C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // bl sub_02017294
    // add r1, sp, #0
    // add r0, r5, #0
    // add r1, #1
    // bl sub_02017280
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0, #1]
    // cmp r0, #0x12
    // bne _0201736E
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_0201726C
    // b _0201738E
    // cmp r0, #0x13
    // bne _0201738A
    // add r1, sp, #0
    // add r0, r5, #0
    // add r1, #3
    // bl sub_02017294
    // add r0, sp, #0
    // ldrb r0, [r0, #3]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x24]
    // str r0, [r4]
    // b _0201738E
    // bl GF_AssertFail
    // add r0, sp, #0
    // ldrb r0, [r0]
    // cmp r0, #0x12
    // bne _020173A2
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_0201726C
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // cmp r0, #0x13
    // bne _020173C0
    // add r1, sp, #0
    // add r0, r5, #0
    // add r1, #2
    // bl sub_02017294
    // add r0, sp, #0
    // ldrb r0, [r0, #2]
    // add sp, #4
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x24]
    // str r0, [r6]
    // pop {r3, r4, r5, r6, pc}
    // bl GF_AssertFail
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void sub_020173C8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r2, #0
    // add r2, sp, #0
    // add r2, #3
    // add r5, r0, #0
    // add r6, r3, #0
    // bl sub_020172B4
    // add r0, sp, #0
    // ldrb r0, [r0, #3]
    // add r1, sp, #0
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r7, [r0, #0x24]
    // add r0, r5, #0
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0]
    // cmp r0, #0x14
    // bne _020173FE
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_0201726C
    // b _0201741E
    // cmp r0, #0x15
    // bne _0201741A
    // add r1, sp, #0
    // add r0, r5, #0
    // add r1, #2
    // bl sub_02017294
    // add r0, sp, #0
    // ldrb r0, [r0, #2]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x24]
    // str r0, [r6]
    // b _0201741E
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0]
    // cmp r0, #0x14
    // bne _02017438
    // add r0, r5, #0
    // add r1, sp, #4
    // bl sub_0201726C
    // b _02017458
    // cmp r0, #0x15
    // bne _02017454
    // add r1, sp, #0
    // add r0, r5, #0
    // add r1, #1
    // bl sub_02017294
    // add r0, sp, #0
    // ldrb r0, [r0, #1]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x24]
    // str r0, [sp, #4]
    // b _02017458
    // bl GF_AssertFail
    // ldr r0, [sp, #4]
    // add r0, r7, r0
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x10
    // sub r1, r1, r2
    // mov r0, #0x10
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [r4]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02017470(void) {
    // ldr r2, [r0]
    // ldr r0, [r1]
    // sub r0, r2, r0
    // bpl _0201747C
    // mov r0, #0xf
    // bx lr
    // cmp r0, #0
    // ble _02017484
    // mov r0, #0x10
    // bx lr
    // mov r0, #0x11
    // bx lr
    // TODO: decompile
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
    sub_020174BC();
}


void sub_020174B4(void) {
    ((u32*)r0)[0x18] = 1;
}


void sub_020174BC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r2, [r4, #0x58]
    // mov r1, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4]
    // ldr r2, [r4, #0x5c]
    // mov r1, #1
    // bl Pokepic_SetAttr
    // ldr r0, [r4]
    // mov r1, #9
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4]
    // mov r1, #0xa
    // mov r2, #0
    // bl Pokepic_SetAttr
    // mov r1, #0xc
    // add r2, r1, #0
    // ldr r0, [r4]
    // add r2, #0xf4
    // bl Pokepic_SetAttr
    // mov r1, #0xd
    // add r2, r1, #0
    // ldr r0, [r4]
    // add r2, #0xf3
    // bl Pokepic_SetAttr
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02017504(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // add r4, r0, #0
    // bl sub_020172B4
    // add r0, sp, #0
    // ldrb r1, [r0]
    // ldrb r0, [r0, #1]
    // lsl r1, r1, #2
    // add r1, r4, r1
    // lsl r0, r0, #2
    // ldr r1, [r1, #0x24]
    // add r0, r4, r0
    // str r1, [r0, #0x24]
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_0201752C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // add r4, r0, #0
    // bl sub_020172C8
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // add r1, r1, r0
    // add r0, sp, #0
    // ldrb r0, [r0]
    // lsl r0, r0, #2
    // add r0, r4, r0
    // str r1, [r0, #0x24]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_02017550(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // add r4, r0, #0
    // bl sub_020172C8
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // add r2, r1, #0
    // mul r2, r0
    // add r0, sp, #0
    // ldrb r0, [r0]
    // lsl r0, r0, #2
    // add r0, r4, r0
    // str r2, [r0, #0x24]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_02017578(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // add r4, r0, #0
    // bl sub_0201733C
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // sub r1, r1, r0
    // add r0, sp, #0
    // ldrb r0, [r0]
    // lsl r0, r0, #2
    // add r0, r4, r0
    // str r1, [r0, #0x24]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_0201759C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // add r4, r0, #0
    // bl sub_0201733C
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // bl _s32_div_f
    // add r1, sp, #0
    // ldrb r1, [r1]
    // lsl r1, r1, #2
    // add r1, r4, r1
    // str r0, [r1, #0x24]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_020175C4(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r1, sp, #0
    // add r2, sp, #8
    // add r3, sp, #4
    // add r4, r0, #0
    // bl sub_0201733C
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // bl _s32_div_f
    // add r0, sp, #0
    // ldrb r0, [r0]
    // lsl r0, r0, #2
    // add r0, r4, r0
    // str r1, [r0, #0x24]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_020175EC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r1, sp, #0
    // add r5, r0, #0
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0]
    // cmp r0, #0x14
    // bne _02017620
    // add r1, sp, #0
    // add r0, r5, #0
    // add r1, #3
    // bl sub_02017294
    // add r0, sp, #0
    // ldrb r0, [r0, #3]
    // add r1, sp, #8
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x24]
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // bl sub_0201726C
    // b _0201764E
    // cmp r0, #0x15
    // bne _0201764A
    // add r1, sp, #0
    // add r2, sp, #0
    // add r0, r5, #0
    // add r1, #3
    // add r2, #2
    // bl sub_020172B4
    // add r0, sp, #0
    // ldrb r1, [r0, #3]
    // lsl r1, r1, #2
    // add r1, r5, r1
    // ldr r1, [r1, #0x24]
    // str r1, [sp, #0xc]
    // ldrb r0, [r0, #2]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x24]
    // str r0, [sp, #8]
    // b _0201764E
    // bl GF_AssertFail
    // add r1, sp, #0
    // add r0, r5, #0
    // add r1, #1
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0, #1]
    // cmp r0, #0x11
    // bls _02017664
    // bl GF_AssertFail
    // add r0, sp, #0xc
    // add r1, sp, #8
    // bl sub_02017470
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0]
    // cmp r0, #0x14
    // bne _02017692
    // add r1, sp, #0
    // add r0, r5, #0
    // add r1, #3
    // bl sub_02017294
    // add r0, r5, #0
    // add r1, sp, #4
    // bl sub_0201726C
    // b _020176B6
    // cmp r0, #0x15
    // bne _020176B2
    // add r1, sp, #0
    // add r2, sp, #0
    // add r0, r5, #0
    // add r1, #3
    // add r2, #2
    // bl sub_020172B4
    // add r0, sp, #0
    // ldrb r0, [r0, #2]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x24]
    // str r0, [sp, #4]
    // b _020176B6
    // bl GF_AssertFail
    // add r0, sp, #0
    // ldrb r1, [r0, #1]
    // cmp r1, r4
    // bne _020176C8
    // ldrb r0, [r0, #3]
    // ldr r1, [sp, #4]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // str r1, [r0, #0x24]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020176CC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // add r1, sp, #0
    // bl sub_02017294
    // ldr r0, [r4, #0xc]
    // add r0, r0, #4
    // str r0, [r4, #0xc]
    // bl sub_02017214
    // add r1, sp, #0
    // ldrb r1, [r1]
    // lsl r1, r1, #2
    // add r1, r4, r1
    // str r0, [r1, #0x24]
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_020176F0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x50]
    // cmp r0, #0
    // beq _020176FE
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // add r0, r0, #4
    // str r0, [r4, #0xc]
    // str r0, [r4, #0x50]
    // ldr r0, [r4, #0xc]
    // bl sub_02017214
    // str r0, [r4, #0x48]
    // mov r0, #0
    // str r0, [r4, #0x4c]
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02017714(void) {
    // ldr r1, [r0, #0x4c]
    // add r2, r1, #1
    // str r2, [r0, #0x4c]
    // ldr r1, [r0, #0x48]
    // cmp r2, r1
    // blt _0201772A
    // mov r1, #0
    // str r1, [r0, #0x50]
    // str r1, [r0, #0x4c]
    // str r1, [r0, #0x48]
    // bx lr
    // ldr r1, [r0, #0x50]
    // str r1, [r0, #0xc]
    // bx lr
    // TODO: decompile
}


void sub_02017730(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // add r1, sp, #4
    // bl sub_0201726C
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_02017294
    // add r2, sp, #0
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // ldr r1, [sp, #4]
    // lsl r2, r2, #2
    // add r2, r4, r2
    // ldr r2, [r2, #0x24]
    // bl Pokepic_SetAttr
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0201775C(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // add r1, sp, #4
    // bl sub_0201726C
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_02017294
    // add r2, sp, #0
    // ldrb r2, [r2]
    // ldr r0, [r4]
    // ldr r1, [sp, #4]
    // lsl r2, r2, #2
    // add r2, r4, r2
    // ldr r2, [r2, #0x24]
    // bl Pokepic_AddAttr
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02017788(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r1, sp, #8
    // add r4, r0, #0
    // bl sub_0201726C
    // add r1, sp, #0
    // add r0, r4, #0
    // add r1, #1
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0, #1]
    // cmp r0, #0x14
    // bne _020177B0
    // add r0, r4, #0
    // add r1, sp, #4
    // bl sub_0201726C
    // b _020177D0
    // cmp r0, #0x15
    // bne _020177CC
    // add r1, sp, #0
    // add r0, r4, #0
    // add r1, #2
    // bl sub_02017294
    // add r0, sp, #0
    // ldrb r0, [r0, #2]
    // lsl r0, r0, #2
    // add r0, r4, r0
    // ldr r0, [r0, #0x24]
    // str r0, [sp, #4]
    // b _020177D0
    // bl GF_AssertFail
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0]
    // cmp r0, #0x16
    // bne _020177EE
    // ldr r0, [r4]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // bl Pokepic_SetAttr
    // add sp, #0xc
    // pop {r3, r4, pc}
    // cmp r0, #0x17
    // bne _02017800
    // ldr r0, [r4]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // bl Pokepic_AddAttr
    // add sp, #0xc
    // pop {r3, r4, pc}
    // bl GF_AssertFail
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
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
    // push {r3, r4, lr}
    // sub sp, #4
    // add r1, sp, #0
    // add r4, r0, #0
    // add r1, #1
    // bl sub_02017294
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r1, [r0]
    // cmp r1, #8
    // bne _020178A0
    // ldrb r0, [r0, #1]
    // add sp, #4
    // lsl r0, r0, #2
    // add r0, r4, r0
    // ldr r0, [r0, #0x24]
    // str r0, [r4, #0x60]
    // pop {r3, r4, pc}
    // cmp r1, #9
    // bne _020178B2
    // ldrb r0, [r0, #1]
    // add sp, #4
    // lsl r0, r0, #2
    // add r0, r4, r0
    // ldr r0, [r0, #0x24]
    // str r0, [r4, #0x64]
    // pop {r3, r4, pc}
    // bl GF_AssertFail
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_020178BC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r1, sp, #0
    // add r4, r0, #0
    // add r1, #1
    // bl sub_02017294
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r1, [r0]
    // cmp r1, #8
    // bne _020178EC
    // ldrb r0, [r0, #1]
    // ldr r1, [r4, #0x60]
    // add sp, #4
    // lsl r0, r0, #2
    // add r0, r4, r0
    // ldr r0, [r0, #0x24]
    // add r0, r1, r0
    // str r0, [r4, #0x60]
    // pop {r3, r4, pc}
    // cmp r1, #9
    // bne _02017902
    // ldrb r0, [r0, #1]
    // ldr r1, [r4, #0x64]
    // add sp, #4
    // lsl r0, r0, #2
    // add r0, r4, r0
    // ldr r0, [r0, #0x24]
    // add r0, r1, r0
    // str r0, [r4, #0x64]
    // pop {r3, r4, pc}
    // bl GF_AssertFail
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_0201790C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r1, sp, #0
    // add r1, #3
    // add r5, r0, #0
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0, #3]
    // cmp r0, #8
    // bne _02017928
    // add r4, r5, #0
    // add r4, #0x60
    // b _02017968
    // cmp r0, #9
    // bne _02017932
    // add r4, r5, #0
    // add r4, #0x64
    // b _02017968
    // cmp r0, #0xa
    // bne _0201793C
    // add r4, r5, #0
    // add r4, #0x68
    // b _02017968
    // cmp r0, #0xb
    // bne _02017946
    // add r4, r5, #0
    // add r4, #0x6c
    // b _02017968
    // cmp r0, #0xc
    // bne _02017950
    // add r4, r5, #0
    // add r4, #0x70
    // b _02017968
    // cmp r0, #0xd
    // bne _0201795A
    // add r4, r5, #0
    // add r4, #0x74
    // b _02017968
    // cmp r0, #0xe
    // bne _02017964
    // add r4, r5, #0
    // add r4, #0x78
    // b _02017968
    // bl GF_AssertFail
    // add r1, sp, #0
    // add r0, r5, #0
    // add r1, #1
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0, #1]
    // cmp r0, #0x14
    // bne _02017984
    // add r0, r5, #0
    // add r1, sp, #4
    // bl sub_0201726C
    // b _020179A4
    // cmp r0, #0x15
    // bne _020179A0
    // add r1, sp, #0
    // add r0, r5, #0
    // add r1, #2
    // bl sub_02017294
    // add r0, sp, #0
    // ldrb r0, [r0, #2]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, #0x24]
    // str r0, [sp, #4]
    // b _020179A4
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02017280
    // add r0, sp, #0
    // ldrb r0, [r0]
    // cmp r0, #0x16
    // bne _020179BC
    // ldr r0, [sp, #4]
    // add sp, #8
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // cmp r0, #0x17
    // bne _020179CC
    // ldr r0, [sp, #4]
    // ldr r1, [r4]
    // add sp, #8
    // add r0, r1, r0
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // bl GF_AssertFail
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020179D4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // ldr r0, [r4]
    // beq _020179F6
    // ldr r3, [r4, #0x60]
    // ldr r2, [r4, #0x68]
    // ldr r5, [r4, #0x58]
    // add r2, r3, r2
    // mov r1, #0
    // sub r2, r5, r2
    // bl Pokepic_SetAttr
    // b _02017A06
    // ldr r3, [r4, #0x58]
    // ldr r2, [r4, #0x60]
    // ldr r5, [r4, #0x68]
    // add r2, r3, r2
    // mov r1, #0
    // add r2, r5, r2
    // bl Pokepic_SetAttr
    // ldr r3, [r4, #0x5c]
    // ldr r2, [r4, #0x64]
    // ldr r5, [r4, #0x6c]
    // add r2, r3, r2
    // ldr r0, [r4]
    // mov r1, #1
    // add r2, r5, r2
    // bl Pokepic_SetAttr
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // add r1, sp, #0
    // bl sub_02017294
    // ldr r0, [r4, #0xc]
    // add r0, r0, #4
    // str r0, [r4, #0xc]
    // bl sub_02017214
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #8
    // beq _02017AA6
    // cmp r0, #0xa
    // bne _02017AB6
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add sp, #4
    // lsl r0, r0, #2
    // add r0, r4, r0
    // ldr r0, [r0, #0x24]
    // str r0, [r4, #0x68]
    // pop {r3, r4, pc}
    // cmp r0, #9
    // beq _02017ABE
    // cmp r0, #0xb
    // bne _02017ACE
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add sp, #4
    // lsl r0, r0, #2
    // add r0, r4, r0
    // ldr r0, [r0, #0x24]
    // str r0, [r4, #0x6c]
    // pop {r3, r4, pc}
    // bl GF_AssertFail
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_02017AD8(void) {
    sub_0201726C(1);
}


void sub_02017AEC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r1, sp, #4
    // add r1, #2
    // add r4, r0, #0
    // bl sub_02017280
    // add r1, sp, #4
    // add r0, r4, #0
    // add r1, #1
    // bl sub_02017280
    // add r0, r4, #0
    // add r1, sp, #4
    // bl sub_02017280
    // add r0, r4, #0
    // add r1, sp, #8
    // bl sub_0201726C
    // ldr r0, [sp, #8]
    // add r3, sp, #4
    // str r0, [sp]
    // ldrb r1, [r3, #2]
    // ldrb r2, [r3, #1]
    // ldrb r3, [r3]
    // ldr r0, [r4]
    // bl Pokepic_StartPaletteFade
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_02017B2C(void) {
    Pokepic_ResumePaletteFade(1);
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
    sub_02017C78();
}


void sub_02017B98(void) {
    sub_02017C78();
}


void sub_02017BA4(void) {
    sub_02017C78();
}


void sub_02017BB0(void) {
    sub_02017C78();
}


void sub_02017BBC(void) {
    sub_02017C78();
}


void sub_02017BC8(void) {
    // push {r3, lr}
    // cmp r0, #0x18
    // bne _02017BD4
    // ldr r0, [r2]
    // str r0, [r3]
    // pop {r3, pc}
    // cmp r0, #0x19
    // bne _02017BE2
    // ldr r1, [r1]
    // ldr r0, [r2]
    // add r0, r1, r0
    // str r0, [r3]
    // pop {r3, pc}
    // cmp r0, #0x1a
    // bne _02017BF0
    // ldr r1, [r3]
    // ldr r0, [r2]
    // add r0, r1, r0
    // str r0, [r3]
    // pop {r3, pc}
    // bl GF_AssertFail
    // pop {r3, pc}
    // TODO: decompile
}


void sub_02017BF8(void) {
    // push {r3, lr}
    // sub r0, #0x23
    // cmp r0, #4
    // bhi _02017C70
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02017C0C: ; jump table
    // add r0, r1, #0
    // add r0, #0x3c
    // str r0, [r1, #0x24]
    // add r0, r2, #0
    // add r0, #0x68
    // str r0, [r1, #0x28]
    // ldr r0, [r2, #0x68]
    // str r0, [r1, #0x30]
    // pop {r3, pc}
    // add r0, r1, #0
    // add r0, #0x40
    // str r0, [r1, #0x24]
    // add r0, r2, #0
    // add r0, #0x6c
    // str r0, [r1, #0x28]
    // ldr r0, [r2, #0x6c]
    // str r0, [r1, #0x30]
    // pop {r3, pc}
    // add r0, r1, #0
    // add r0, #0x44
    // str r0, [r1, #0x24]
    // add r0, r2, #0
    // add r0, #0x70
    // str r0, [r1, #0x28]
    // ldr r0, [r2, #0x70]
    // str r0, [r1, #0x30]
    // pop {r3, pc}
    // add r0, r1, #0
    // add r0, #0x48
    // str r0, [r1, #0x24]
    // add r0, r2, #0
    // add r0, #0x74
    // str r0, [r1, #0x28]
    // ldr r0, [r2, #0x74]
    // str r0, [r1, #0x30]
    // pop {r3, pc}
    // add r0, r1, #0
    // add r0, #0x4c
    // str r0, [r1, #0x24]
    // add r0, r2, #0
    // add r0, #0x78
    // str r0, [r1, #0x28]
    // ldr r0, [r2, #0x78]
    // str r0, [r1, #0x30]
    // pop {r3, pc}
    // bl GF_AssertFail
    // pop {r3, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x24]
    // ldr r3, [r4, #0xc]
    // ldr r2, [r4, #0x14]
    // ldr r5, [r4, #8]
    // mul r2, r3
    // ldr r0, [r1]
    // add r2, r5, r2
    // add r0, r0, r2
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x2c
    // add r1, r4, #0
    // ldrb r0, [r0]
    // ldr r2, [r4, #0x24]
    // ldr r3, [r4, #0x28]
    // add r1, #0x30
    // bl sub_02017BC8
    // ldr r0, [r4, #0x14]
    // add r1, r0, #1
    // str r1, [r4, #0x14]
    // ldr r0, [r4, #0x10]
    // cmp r1, r0
    // blt _02017ED0
    // mov r0, #0
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02017ED4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // add r1, r0, #1
    // ldr r0, [r4, #8]
    // mul r0, r1
    // ldr r1, [r4, #0xc]
    // bl _s32_div_f
    // ldr r1, [r4, #0x24]
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x2c
    // add r1, r4, #0
    // ldrb r0, [r0]
    // ldr r2, [r4, #0x24]
    // ldr r3, [r4, #0x28]
    // add r1, #0x30
    // bl sub_02017BC8
    // ldr r0, [r4, #0x10]
    // add r1, r0, #1
    // str r1, [r4, #0x10]
    // ldr r0, [r4, #0xc]
    // cmp r1, r0
    // blt _02017F0C
    // mov r0, #0
    // str r0, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02017F10(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #8]
    // mul r0, r1
    // ldr r1, [r4, #0x24]
    // add r2, r2, r0
    // ldr r0, [r1]
    // add r0, r0, r2
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x2c
    // ldrb r0, [r0]
    // cmp r0, #0x18
    // beq _02017F34
    // cmp r0, #0x1a
    // bne _02017F5A
    // cmp r2, #0
    // ldr r2, [r4, #0x10]
    // bge _02017F4A
    // ldr r1, [r4, #0x24]
    // ldr r0, [r1]
    // cmp r0, r2
    // bgt _02017F90
    // str r2, [r1]
    // mov r0, #0
    // str r0, [r4]
    // b _02017F90
    // ldr r1, [r4, #0x24]
    // ldr r0, [r1]
    // cmp r0, r2
    // blt _02017F90
    // str r2, [r1]
    // mov r0, #0
    // str r0, [r4]
    // b _02017F90
    // cmp r0, #0x19
    // bne _02017F8C
    // ldr r1, [r4, #0x24]
    // ldr r3, [r4, #0x30]
    // ldr r0, [r1]
    // add r3, r3, r0
    // cmp r2, #0
    // ldr r2, [r4, #0x10]
    // bge _02017F7C
    // cmp r3, r2
    // bgt _02017F90
    // sub r2, r2, r3
    // add r0, r0, r2
    // str r0, [r1]
    // mov r0, #0
    // str r0, [r4]
    // b _02017F90
    // cmp r3, r2
    // blt _02017F90
    // sub r2, r3, r2
    // sub r0, r0, r2
    // str r0, [r1]
    // mov r0, #0
    // str r0, [r4]
    // b _02017F90
    // bl GF_AssertFail
    // add r0, r4, #0
    // add r0, #0x2c
    // ldrb r0, [r0]
    // add r1, r4, #0
    // ldr r2, [r4, #0x24]
    // ldr r3, [r4, #0x28]
    // add r1, #0x30
    // bl sub_02017BC8
    // ldr r0, [r4, #0x14]
    // add r0, r0, #1
    // str r0, [r4, #0x14]
    // pop {r4, pc}
    // TODO: decompile
}

