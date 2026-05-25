/* Decompiled from asm/unk_02033AE0.s */
#include "global.h"

void sub_02033AE0(void) {
    *(u32*)r0 = r1;
    ((u16*)r0)[0xa] = r2;
    ((u16*)r0)[4] = 0;
    ((u16*)r0)[6] = 0;
    ((u16*)r0)[8] = 0;
}


void sub_02033AF0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r2, [sp]
    // add r5, r0, #0
    // add r7, r1, #0
    // bl sub_02033BF4
    // ldr r1, [sp]
    // cmp r0, r1
    // bgt _02033B08
    // bl sub_02037974
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #8
    // ldrsh r4, [r5, r0]
    // ldrsh r1, [r5, r0]
    // ldr r0, [sp]
    // mov r6, #0
    // add r0, r1, r0
    // cmp r4, r0
    // bge _02033B3E
    // cmp r7, #0
    // bne _02033B20
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02033C14
    // ldrb r2, [r7, r6]
    // ldr r1, [r5]
    // add r4, r4, #1
    // strb r2, [r1, r0]
    // mov r0, #8
    // ldrsh r1, [r5, r0]
    // ldr r0, [sp]
    // add r6, r6, #1
    // add r0, r1, r0
    // cmp r4, r0
    // blt _02033B18
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02033C14
    // strh r0, [r5, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02033B4C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_02033B78
    // mov r1, #4
    // add r4, r0, #0
    // ldrsh r1, [r5, r1]
    // add r0, r5, #0
    // add r1, r1, r4
    // bl sub_02033C14
    // strh r0, [r5, #4]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02033B68(void) {
    sub_02033B4C();
}


void sub_02033B78(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #4
    // ldrsh r4, [r5, r0]
    // add r7, r2, #0
    // str r1, [sp]
    // add r0, r4, r7
    // mov r6, #0
    // cmp r4, r0
    // bge _02033BBE
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02033C14
    // mov r1, #6
    // ldrsh r1, [r5, r1]
    // cmp r1, r0
    // bne _02033BA0
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02033C14
    // ldr r1, [r5]
    // add r4, r4, #1
    // ldrb r1, [r1, r0]
    // ldr r0, [sp]
    // strb r1, [r0, r6]
    // mov r0, #4
    // ldrsh r0, [r5, r0]
    // add r6, r6, #1
    // add r0, r0, r7
    // cmp r4, r0
    // blt _02033B8C
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02033BC4(void) {
    // mov r1, #4
    // mov r3, #6
    // ldrsh r1, [r0, r1]
    // ldrsh r2, [r0, r3]
    // cmp r1, r2
    // ble _02033BDC
    // mov r2, #0xa
    // ldrsh r2, [r0, r2]
    // ldrsh r0, [r0, r3]
    // add r0, r2, r0
    // sub r0, r0, r1
    // bx lr
    // ldrsh r0, [r0, r3]
    // sub r0, r0, r1
    // bx lr
    // TODO: decompile
}


void sub_02033BE4(void) {
    sub_02033BC4();
}


void sub_02033BF4(void) {
    // mov r1, #4
    // mov r2, #8
    // ldrsh r3, [r0, r1]
    // ldrsh r1, [r0, r2]
    // cmp r3, r1
    // ble _02033C06
    // ldrsh r0, [r0, r2]
    // sub r0, r3, r0
    // bx lr
    // mov r1, #0xa
    // ldrsh r1, [r0, r1]
    // ldrsh r0, [r0, r2]
    // sub r0, r0, r3
    // sub r0, r1, r0
    // bx lr
    // TODO: decompile
}


void sub_02033C14(void) {
    _s32_div_f(0xa);
}


void sub_02033C28(void) {
    // mov r1, #8
    // ldrsh r1, [r0, r1]
    // strh r1, [r0, #6]
    // bx lr
    // TODO: decompile
}


void sub_02033C30(void) {
    // ldr r3, [r0, #0x1c]
    // mov r2, #0
    // ldr r1, [r0, #0x18]
    // cmp r3, #0
    // ble _02033C4C
    // ldrb r0, [r1, #0xe]
    // cmp r0, #0
    // bne _02033C44
    // add r0, r1, #0
    // bx lr
    // add r2, r2, #1
    // add r1, #0x10
    // cmp r2, r3
    // blt _02033C3A
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_02033C50(void) {
    // ldr r3, [r0, #0x1c]
    // mov r2, #0
    // ldr r1, [r0, #0x18]
    // cmp r3, #0
    // ble _02033C6C
    // ldrb r0, [r1, #0xe]
    // cmp r0, #0
    // beq _02033C64
    // mov r0, #0
    // bx lr
    // add r2, r2, #1
    // add r1, #0x10
    // cmp r2, r3
    // blt _02033C5A
    // mov r0, #1
    // bx lr
    // TODO: decompile
}


void sub_02033C70(void) {
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _02033C8E
    // ldr r1, [r1, #8]
    // cmp r1, #0
    // beq _02033C84
    // str r1, [r0]
    // mov r0, #0
    // str r0, [r1, #4]
    // b _02033C8A
    // mov r1, #0
    // str r1, [r0]
    // str r1, [r0, #4]
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_02033C94(void) {
    // ldr r2, [r0]
    // strb r1, [r2]
    // ldr r1, [r0]
    // add r1, r1, #1
    // str r1, [r0]
    // ldr r1, [r0, #4]
    // sub r1, r1, #1
    // str r1, [r0, #4]
    // bne _02033CAA
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_02033CB0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0xe]
    // add r4, r1, #0
    // bl sub_020341DC
    // add r6, r0, #0
    // ldr r0, _02033D24 ; =0x0000FFFF
    // cmp r6, r0
    // ldr r0, [r4, #4]
    // bne _02033CD6
    // cmp r0, #3
    // bge _02033CE6
    // ldrb r1, [r5, #0xf]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r5, #0xf]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // cmp r0, #1
    // bge _02033CE6
    // ldrb r1, [r5, #0xf]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r5, #0xf]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldrb r1, [r5, #0xe]
    // add r0, r4, #0
    // bl sub_02033C94
    // ldr r0, _02033D24 ; =0x0000FFFF
    // cmp r6, r0
    // bne _02033D10
    // ldrh r1, [r5, #0xc]
    // add r0, r4, #0
    // asr r1, r1, #8
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl sub_02033C94
    // ldrh r1, [r5, #0xc]
    // add r0, r4, #0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl sub_02033C94
    // b _02033D12
    // strh r6, [r5, #0xc]
    // ldrb r1, [r5, #0xf]
    // mov r0, #1
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r5, #0xf]
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _02033D24: .word 0x0000FFFF
    // TODO: decompile
}


void sub_02033D28(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0xe]
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl sub_020341DC
    // ldr r1, _02033DEC ; =0x0000FFFF
    // cmp r0, r1
    // bne _02033D42
    // mov r2, #3
    // b _02033D44
    // mov r2, #1
    // ldrh r0, [r5, #0xc]
    // ldr r1, [r4, #4]
    // add r0, r0, r2
    // cmp r1, r0
    // bge _02033D56
    // cmp r7, #0
    // bne _02033D56
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #0xf]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // beq _02033D70
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02033CB0
    // cmp r0, #0
    // beq _02033D70
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r3, [r5, #0xc]
    // ldr r2, [r4, #4]
    // cmp r2, r3
    // ldrb r0, [r5, #0xf]
    // bge _02033DBA
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // beq _02033D8A
    // ldr r1, [r4]
    // add r0, r6, #0
    // bl sub_02033B4C
    // b _02033DA0
    // mov r3, #0
    // cmp r2, #0
    // ble _02033DA0
    // ldr r0, [r5]
    // ldrb r1, [r0, r3]
    // ldr r0, [r4]
    // strb r1, [r0, r3]
    // ldr r0, [r4, #4]
    // add r3, r3, #1
    // cmp r3, r0
    // blt _02033D90
    // ldr r1, [r5]
    // ldr r0, [r4, #4]
    // add r0, r1, r0
    // str r0, [r5]
    // ldrh r1, [r5, #0xc]
    // ldr r0, [r4, #4]
    // sub r0, r1, r0
    // strh r0, [r5, #0xc]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r4, #4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // beq _02033DCC
    // ldr r1, [r4]
    // add r0, r6, #0
    // add r2, r3, #0
    // bl sub_02033B4C
    // b _02033DD6
    // ldr r0, [r5]
    // ldr r1, [r4]
    // add r2, r3, #0
    // bl MI_CpuCopy8
    // ldrh r0, [r5, #0xc]
    // ldr r1, [r4]
    // add r0, r1, r0
    // str r0, [r4]
    // ldrh r0, [r5, #0xc]
    // ldr r1, [r4, #4]
    // sub r0, r1, r0
    // str r0, [r4, #4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02033DEC: .word 0x0000FFFF
    // TODO: decompile
}


void sub_02033DF0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r7, r3, #0
    // bl sub_02033C30
    // add r4, r0, #0
    // bne _02033E0A
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02033E7C ; =0x0000FFFE
    // cmp r7, r0
    // blt _02033E14
    // bl GF_AssertFail
    // ldr r0, [sp]
    // bl sub_020341DC
    // add r6, r0, #0
    // ldr r0, _02033E80 ; =0x0000FFFF
    // cmp r6, r0
    // bne _02033E24
    // add r6, r7, #0
    // ldr r0, [sp, #0x24]
    // cmp r0, #0
    // beq _02033E56
    // ldr r0, [r5, #0x14]
    // bl sub_02033BE4
    // add r1, r6, #3
    // cmp r1, r0
    // blt _02033E3C
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x14]
    // ldr r1, [sp, #4]
    // ldr r3, _02033E84 ; =0x00000109
    // add r2, r6, #0
    // bl sub_02033AF0
    // ldr r0, [r5, #0x14]
    // bl sub_02033C28
    // ldrb r1, [r4, #0xf]
    // mov r0, #2
    // orr r0, r1
    // strb r0, [r4, #0xf]
    // ldr r0, [sp]
    // strh r6, [r4, #0xc]
    // strb r0, [r4, #0xe]
    // ldr r0, [sp, #4]
    // str r0, [r4]
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // bne _02033E6C
    // str r4, [r5, #4]
    // str r4, [r5]
    // b _02033E74
    // str r4, [r0, #8]
    // ldr r0, [r5, #4]
    // str r0, [r4, #4]
    // str r4, [r5, #4]
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02033E7C: .word 0x0000FFFE
    // _02033E80: .word 0x0000FFFF
    // _02033E84: .word 0x00000109
    // TODO: decompile
}


void sub_02033E88(void) {
    // ldr r1, [r0, #0x10]
    // cmp r1, #0
    // beq _02033E92
    // add r0, r1, #0
    // bx lr
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _02033E9C
    // add r0, r1, #0
    // bx lr
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // bne _02033EA4
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_02033EA8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x10]
    // cmp r1, #0
    // beq _02033EB8
    // mov r0, #0
    // str r0, [r4, #0x10]
    // pop {r4, pc}
    // bl sub_02033C70
    // cmp r0, #0
    // bne _02033EC8
    // add r4, #8
    // add r0, r4, #0
    // bl sub_02033C70
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02033ECC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // mov r7, #1
    // str r2, [sp]
    // cmp r0, #0
    // ble _02033F22
    // add r0, r5, #0
    // bl sub_02033E88
    // add r6, r0, #0
    // beq _02033F22
    // add r0, r5, #0
    // bl sub_02033EA8
    // ldr r2, [r5, #0x14]
    // add r0, r6, #0
    // add r1, r4, #0
    // add r3, r7, #0
    // bl sub_02033D28
    // cmp r0, #0
    // bne _02033F00
    // str r6, [r5, #0x10]
    // b _02033F22
    // mov r0, #0
    // ldr r1, [r4, #4]
    // mvn r0, r0
    // cmp r1, r0
    // bne _02033F10
    // str r6, [r5, #0x10]
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // mov r1, #0
    // mov r2, #0x10
    // bl MI_CpuFill8
    // ldr r0, [r4, #4]
    // ldr r7, [sp]
    // cmp r0, #0
    // bgt _02033EDC
    // ldr r0, [r4, #4]
    // mov r2, #0
    // cmp r0, #0
    // ble _02033F3E
    // mov r1, #0xee
    // ldr r0, [r4]
    // add r2, r2, #1
    // strb r1, [r0]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r0, [r4, #4]
    // cmp r2, r0
    // blt _02033F2C
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02033F44(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r6, r2, #0
    // mov r1, #0
    // mov r2, #0x20
    // add r5, r0, #0
    // bl MI_CpuFill8
    // lsl r7, r4, #4
    // mov r0, #0xf
    // add r1, r7, #0
    // bl Heap_Alloc
    // mov r1, #0
    // add r2, r7, #0
    // str r0, [r5, #0x18]
    // bl MI_CpuFill8
    // str r4, [r5, #0x1c]
    // str r6, [r5, #0x14]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02033F70(void) {
    MI_CpuFill8(0, 0);
}


void sub_02033F90(void) {
    Heap_Free();
}


void sub_02033F9C(void) {
    // push {r3, r4}
    // ldr r4, [r0, #0x1c]
    // mov r2, #0
    // ldr r3, [r0, #0x18]
    // cmp r4, #0
    // ble _02033FBC
    // ldrb r0, [r3, #0xe]
    // cmp r0, r1
    // bne _02033FB4
    // mov r0, #1
    // pop {r3, r4}
    // bx lr
    // add r2, r2, #1
    // add r3, #0x10
    // cmp r2, r4
    // blt _02033FA8
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void sub_02033FC4(void) {
    // push {r3, r4, lr}
    // sub sp, #0x2c
    // ldr r3, _02033FEC ; =_020F692C
    // add r4, r0, #0
    // add r2, sp, #0
    // mov r1, #0x29
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02033FD0
    // cmp r4, #0x29
    // blo _02033FE4
    // bl GF_AssertFail
    // add r0, sp, #0
    // ldrb r0, [r0, r4]
    // add sp, #0x2c
    // pop {r3, r4, pc}
    // _02033FEC: .word _020F692C
    // TODO: decompile
}


void sub_02033FF0(void) {
    // push {r3, r4, lr}
    // sub sp, #0x2c
    // ldr r3, _02034018 ; =_020F6955
    // add r4, r0, #0
    // add r2, sp, #0
    // mov r1, #0x29
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02033FFC
    // cmp r4, #0x29
    // blo _02034010
    // bl GF_AssertFail
    // add r0, sp, #0
    // ldrb r0, [r0, r4]
    // add sp, #0x2c
    // pop {r3, r4, pc}
    // _02034018: .word _020F6955
    // TODO: decompile
}


void sub_0203401C(void) {
    // cmp r0, #0x12
    // bgt _02034036
    // bge _0203403A
    // cmp r0, #0xd
    // bgt _0203403E
    // cmp r0, #7
    // blt _0203403E
    // beq _0203403A
    // cmp r0, #9
    // beq _0203403A
    // cmp r0, #0xd
    // beq _0203403A
    // b _0203403E
    // cmp r0, #0x1a
    // bne _0203403E
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_02034044(void) {
    // sub r0, #0x13
    // cmp r0, #0x11
    // bhi _0203407E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02034056: ; jump table
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_02034084(void) {
    // cmp r0, #0x1d
    // beq _02034090
    // cmp r0, #0x21
    // beq _02034090
    // cmp r0, #0x23
    // bne _02034094
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_02034098(void) {
    // cmp r0, #0x17
    // bgt _020340B8
    // add r1, r0, #0
    // sub r1, #0x13
    // bmi _020340C0
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _020340AE: ; jump table
    // cmp r0, #0x22
    // bne _020340C0
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_020340C4(void) {
    // cmp r0, #0x26
    // bgt _020340F6
    // bge _02034102
    // cmp r0, #8
    // bgt _020340F0
    // cmp r0, #0
    // blt _02034106
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _020340DE: ; jump table
    // cmp r0, #0x25
    // beq _02034102
    // b _02034106
    // cmp r0, #0x27
    // bgt _020340FE
    // beq _02034102
    // b _02034106
    // cmp r0, #0x28
    // bne _02034106
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_0203410C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _02034150 ; =_021D412C
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r6, r2, #0
    // cmp r0, #0
    // bne _02034128
    // mov r0, #0xf
    // mov r1, #0x18
    // bl Heap_Alloc
    // ldr r1, _02034150 ; =_021D412C
    // str r0, [r1]
    // ldr r0, _02034150 ; =_021D412C
    // mov r3, #0
    // ldr r1, [r0]
    // add r2, r3, #0
    // str r5, [r1]
    // ldr r1, [r0]
    // str r4, [r1, #4]
    // ldr r1, [r0]
    // str r6, [r1, #8]
    // ldr r1, [r0]
    // add r1, r1, r3
    // add r3, r3, #1
    // strb r2, [r1, #0xc]
    // cmp r3, #8
    // blt _0203413A
    // ldr r0, _02034150 ; =_021D412C
    // ldr r0, [r0]
    // strb r2, [r0, #0x14]
    // pop {r4, r5, r6, pc}
    // nop
    // _02034150: .word _021D412C
    // TODO: decompile
}


void sub_02034154(void) {
    Heap_Free(0);
}


void sub_02034170(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r4, #0x16
    // bge _02034188
    // mov r0, #0xc
    // mul r1, r0
    // ldr r0, _020341D4 ; =_020F6980
    // ldr r4, [r0, r1]
    // b _020341B0
    // ldr r0, _020341D8 ; =_021D412C
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02034194
    // bl GF_AssertFail
    // ldr r0, _020341D8 ; =_021D412C
    // ldr r1, [r0]
    // ldr r0, [r1, #4]
    // add r0, #0x16
    // cmp r4, r0
    // ble _020341A6
    // bl sub_02037974
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r1]
    // sub r4, #0x16
    // mov r0, #0xc
    // mul r0, r4
    // ldr r4, [r1, r0]
    // cmp r4, #0
    // beq _020341D2
    // ldr r0, _020341D8 ; =_021D412C
    // ldr r3, [r0]
    // cmp r3, #0
    // beq _020341C8
    // ldr r3, [r3, #8]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // blx r4
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // mov r3, #0
    // blx r4
    // pop {r3, r4, r5, r6, r7, pc}
    // _020341D4: .word _020F6980
    // _020341D8: .word _021D412C
    // TODO: decompile
}


void sub_020341DC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r4, #0
    // cmp r5, #0x16
    // bge _020341F2
    // mov r0, #0xc
    // add r1, r5, #0
    // mul r1, r0
    // ldr r0, _0203423C ; =_020F6980 + 4
    // ldr r0, [r0, r1]
    // b _0203422E
    // ldr r0, _02034240 ; =_021D412C
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _020341FE
    // bl GF_AssertFail
    // ldr r0, _02034240 ; =_021D412C
    // ldr r1, [r0]
    // cmp r1, #0
    // bne _0203420E
    // bl sub_02037974
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r1, #4]
    // add r0, #0x16
    // cmp r5, r0
    // ble _02034222
    // bl GF_AssertFail
    // bl sub_02037974
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r1, [r1]
    // sub r5, #0x16
    // mov r0, #0xc
    // mul r0, r5
    // add r0, r1, r0
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // beq _02034236
    // blx r0
    // add r4, r0, #0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0203423C: .word _020F6980 + 4
    // _02034240: .word _021D412C
    // TODO: decompile
}


void sub_02034244(void) {
    // cmp r0, #0x16
    // bge _0203425C
    // mov r1, #0xc
    // mul r1, r0
    // ldr r0, _02034278 ; =_020F6980 + 8
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // beq _02034258
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // ldr r1, _0203427C ; =_021D412C
    // sub r0, #0x16
    // ldr r1, [r1]
    // ldr r2, [r1]
    // mov r1, #0xc
    // mul r1, r0
    // add r0, r2, r1
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _02034274
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02034278: .word _020F6980 + 8
    // _0203427C: .word _021D412C
    // TODO: decompile
}


void sub_02034280(void) {
    // push {r3, r4, r5, lr}
    // add r3, r0, #0
    // cmp r3, #0x16
    // bge _02034298
    // mov r4, #0xc
    // mul r4, r3
    // ldr r3, _020342B0 ; =_020F6980 + 8
    // add r0, r1, #0
    // ldr r3, [r3, r4]
    // mov r1, #0
    // blx r3
    // pop {r3, r4, r5, pc}
    // ldr r0, _020342B4 ; =_021D412C
    // sub r3, #0x16
    // ldr r4, [r0]
    // add r0, r1, #0
    // ldr r1, [r4, #8]
    // ldr r5, [r4]
    // mov r4, #0xc
    // mul r4, r3
    // add r3, r5, r4
    // ldr r3, [r3, #8]
    // blx r3
    // pop {r3, r4, r5, pc}
    // _020342B0: .word _020F6980 + 8
    // _020342B4: .word _021D412C
    // TODO: decompile
}


void sub_020342B8(void) {
    // ldr r0, _020342BC ; =0x0000FFFF
    // bx lr
    // _020342BC: .word 0x0000FFFF
    // TODO: decompile
}


u8 sub_020342C0(void) {
    return 0;
}


u8 sub_020342C4(void) {
    return 1;
}


u8 sub_020342C8(void) {
    return 2;
}


void sub_020342CC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0203430A
    // ldr r4, _0203430C ; =_021D412C
    // mov r1, #1
    // ldr r0, [r4]
    // add r0, r0, r5
    // strb r1, [r0, #0xc]
    // mov r5, #0
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // bl sub_020373B4
    // cmp r0, #0
    // beq _020342FA
    // ldr r0, [r4]
    // add r0, r0, r5
    // ldrb r0, [r0, #0xc]
    // cmp r0, #0
    // beq _0203430A
    // add r5, r5, #1
    // cmp r5, #8
    // blt _020342E4
    // mov r1, #0
    // mov r0, #0xe
    // add r2, r1, #0
    // bl sub_02037108
    // pop {r3, r4, r5, pc}
    // _0203430C: .word _021D412C
    // TODO: decompile
}


void sub_02034310(void) {
    // ldr r0, _02034330 ; =_021D412C
    // mov r3, #0
    // ldr r1, [r0]
    // str r3, [r1]
    // ldr r1, [r0]
    // str r3, [r1, #4]
    // ldr r1, [r0]
    // str r3, [r1, #8]
    // ldr r0, [r0]
    // mov r1, #1
    // strb r1, [r0, #0x14]
    // ldr r3, _02034334 ; =sub_020376E0
    // mov r0, #0xf
    // add r1, r2, #0
    // bx r3
    // nop
    // _02034330: .word _021D412C
    // _02034334: .word sub_020376E0
    // TODO: decompile
}


void sub_02034338(void) {
    sub_0203769C(0);
}

