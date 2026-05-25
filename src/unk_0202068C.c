/* Decompiled from asm/unk_0202068C.s */
#include "global.h"

void sub_0202068C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // mov r1, #8
    // bl Heap_Alloc
    // mov r1, #0x14
    // add r4, r0, #0
    // add r0, r6, #0
    // mul r1, r5
    // bl Heap_Alloc
    // str r0, [r4]
    // mov r6, #0
    // str r5, [r4, #4]
    // cmp r5, #0
    // ble _020206C4
    // add r5, r6, #0
    // ldr r0, [r4]
    // add r0, r0, r5
    // bl sub_02020770
    // ldr r0, [r4, #4]
    // add r6, r6, #1
    // add r5, #0x14
    // cmp r6, r0
    // blt _020206B2
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_020206C8(void) {
    sub_02020740();
    Heap_Free();
    Heap_Free(r4);
}


void sub_020206E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // mov r4, #0
    // add r7, r2, #0
    // mov ip, r1
    // add r6, r3, #0
    // add r2, r4, #0
    // cmp r0, #0
    // ble _0202070E
    // ldr r5, [r5]
    // add r3, r5, #0
    // ldr r1, [r3]
    // cmp r1, #0
    // bne _02020706
    // mov r0, #0x14
    // mul r0, r2
    // add r4, r5, r0
    // b _0202070E
    // add r2, r2, #1
    // add r3, #0x14
    // cmp r2, r0
    // blt _020206F8
    // cmp r4, #0
    // bne _02020716
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, ip
    // str r0, [r4]
    // str r7, [r4, #4]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // str r6, [r4, #8]
    // str r0, [r4, #0xc]
    // mov r0, #0xff
    // strb r0, [r4, #0x10]
    // lsl r1, r1, #4
    // strb r0, [r4, #0x11]
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // bl sub_02020780
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02020738(void) {
    sub_02020770();
}


void sub_02020740(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // mov r6, #0
    // cmp r0, #0
    // ble _02020760
    // add r4, r6, #0
    // ldr r0, [r5]
    // add r0, r0, r4
    // bl sub_02020770
    // ldr r0, [r5, #4]
    // add r6, r6, #1
    // add r4, #0x14
    // cmp r6, r0
    // blt _0202074E
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02020764(void) {
    sub_02020780();
}


void sub_02020770(void) {
    *(u32*)r0 = 0;
    ((u32*)r0)[4] = 0;
    ((u32*)r0)[8] = 0;
    ((u32*)r0)[0xc] = 0;
    ((u8*)r0)[0x10] = 0;
    ((u8*)r0)[0x11] = 0;
}


void sub_02020780(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4]
    // bl sub_02026DE0
    // add r2, sp, #0
    // strb r0, [r2]
    // lsr r0, r0, #8
    // strb r0, [r2, #1]
    // ldrb r0, [r2]
    // add r1, sp, #0
    // add r1, #2
    // strb r0, [r2, #2]
    // ldrb r0, [r2, #1]
    // strb r0, [r2, #3]
    // ldrb r3, [r4, #0x10]
    // ldrb r0, [r2, #2]
    // cmp r3, r0
    // beq _020207AE
    // add r0, r4, #0
    // bl sub_020207C8
    // add r0, sp, #0
    // ldrb r1, [r4, #0x11]
    // ldrb r0, [r0, #3]
    // cmp r1, r0
    // beq _020207C2
    // add r1, sp, #0
    // add r0, r4, #0
    // add r1, #2
    // bl sub_020207F4
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_020207C8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02020820
    // ldr r3, [r5, #8]
    // add r2, r0, #0
    // lsl r1, r3, #0x10
    // ldr r6, _020207F0 ; =0x7FFF0000
    // mov r0, #0
    // and r3, r6
    // lsr r3, r3, #0x10
    // lsr r1, r1, #0xd
    // lsl r3, r3, #4
    // bl GF_CreateNewVramTransferTask
    // ldrb r0, [r4]
    // strb r0, [r5, #0x10]
    // pop {r4, r5, r6, pc}
    // nop
    // _020207F0: .word 0x7FFF0000
    // TODO: decompile
}


void sub_020207F4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_0202082C
    // ldr r3, [r5, #0xc]
    // add r2, r0, #0
    // lsl r1, r3, #0x10
    // ldr r6, _0202081C ; =0xFFFF0000
    // mov r0, #1
    // and r3, r6
    // lsr r3, r3, #0x10
    // lsr r1, r1, #0xd
    // lsl r3, r3, #3
    // bl GF_CreateNewVramTransferTask
    // ldrb r0, [r4, #1]
    // strb r0, [r5, #0x11]
    // pop {r4, r5, r6, pc}
    // nop
    // _0202081C: .word 0xFFFF0000
    // TODO: decompile
}


void sub_02020820(void) {
    sub_02020838();
}


void sub_0202082C(void) {
    sub_02020888();
}


void sub_02020838(void) {
    // push {r3, r4}
    // cmp r0, #0
    // beq _02020864
    // add r2, r0, #0
    // add r2, #0x3c
    // beq _02020860
    // add r3, r0, #0
    // add r3, #0x3d
    // ldrb r3, [r3]
    // cmp r1, r3
    // bhs _02020860
    // add r3, r0, #0
    // add r3, #0x42
    // ldrh r4, [r3]
    // add r3, r2, r4
    // ldrh r2, [r2, r4]
    // add r3, r3, #4
    // mul r1, r2
    // add r3, r3, r1
    // b _02020866
    // mov r3, #0
    // b _02020866
    // mov r3, #0
    // cmp r3, #0
    // bne _02020870
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // ldr r1, [r0, #0x14]
    // add r2, r0, r1
    // ldr r1, [r3]
    // ldr r0, [r0, #8]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // add r0, r1, r0
    // lsl r0, r0, #3
    // add r0, r2, r0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void sub_02020888(void) {
    // push {r3, r4}
    // cmp r0, #0
    // beq _020208B0
    // ldrh r2, [r0, #0x34]
    // cmp r2, #0
    // beq _020208B0
    // add r4, r0, r2
    // beq _020208AC
    // ldrb r2, [r4, #1]
    // cmp r1, r2
    // bhs _020208AC
    // ldrh r2, [r4, #6]
    // add r3, r4, r2
    // ldrh r2, [r4, r2]
    // add r3, r3, #4
    // mul r1, r2
    // add r2, r3, r1
    // b _020208B2
    // mov r2, #0
    // b _020208B2
    // mov r2, #0
    // cmp r2, #0
    // bne _020208BC
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // ldr r1, [r0, #0x38]
    // add r1, r0, r1
    // ldrh r0, [r2]
    // lsl r0, r0, #3
    // add r0, r1, r0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void sub_020208CC(void) {
    // ldr r1, [r1]
    // ldr r0, [r0, #8]
    // lsl r1, r1, #0x10
    // lsl r0, r0, #0x10
    // lsr r1, r1, #0xd
    // lsr r0, r0, #0xd
    // add r0, r1, r0
    // bx lr
    // TODO: decompile
}


void sub_020208DC(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // add r0, sp, #0
    // bl sub_02020B3C
    // cmp r4, #0
    // beq _020208FA
    // add r0, r4, #0
    // add r0, #0x3c
    // add r1, sp, #0
    // bl NNS_G3dGetResDataByName
    // add r1, r0, #0
    // b _020208FC
    // mov r1, #0
    // cmp r1, #0
    // bne _02020906
    // add sp, #0x10
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // bl sub_020208CC
    // add sp, #0x10
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02020910(void) {
    // push {r4, lr}
    // cmp r0, #0
    // beq _0202093C
    // add r2, r0, #0
    // add r2, #0x3c
    // beq _02020938
    // add r3, r0, #0
    // add r3, #0x3d
    // ldrb r3, [r3]
    // cmp r1, r3
    // bhs _02020938
    // add r3, r0, #0
    // add r3, #0x42
    // ldrh r4, [r3]
    // add r3, r2, r4
    // ldrh r2, [r2, r4]
    // add r3, r3, #4
    // mul r1, r2
    // add r1, r3, r1
    // b _0202093E
    // mov r1, #0
    // b _0202093E
    // mov r1, #0
    // cmp r1, #0
    // bne _02020946
    // mov r0, #0
    // pop {r4, pc}
    // bl sub_020208CC
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0202094C(void) {
    // push {r3, lr}
    // ldr r0, [r1]
    // mov r1, #7
    // lsl r1, r1, #0x1a
    // and r1, r0
    // lsr r1, r1, #0x1a
    // cmp r1, #6
    // bhi _0202098A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02020968: ; jump table
    // mov r1, #4
    // b _0202098E
    // mov r1, #2
    // b _0202098E
    // mov r1, #1
    // b _0202098E
    // mov r1, #1
    // b _0202098E
    // mov r1, #1
    // b _0202098E
    // mov r0, #0
    // pop {r3, pc}
    // mov r3, #7
    // lsl r3, r3, #0x14
    // add r2, r0, #0
    // and r2, r3
    // lsl r3, r3, #3
    // and r0, r3
    // lsr r2, r2, #0x14
    // lsr r0, r0, #0x17
    // lsl r2, r2, #4
    // lsl r0, r0, #4
    // mul r0, r2
    // bl _u32_div_f
    // pop {r3, pc}
    // TODO: decompile
}


void sub_020209AC(void) {
    // push {r4, lr}
    // cmp r0, #0
    // beq _020209D8
    // add r2, r0, #0
    // add r2, #0x3c
    // beq _020209D4
    // add r3, r0, #0
    // add r3, #0x3d
    // ldrb r3, [r3]
    // cmp r1, r3
    // bhs _020209D4
    // add r3, r0, #0
    // add r3, #0x42
    // ldrh r4, [r3]
    // add r3, r2, r4
    // ldrh r2, [r2, r4]
    // add r3, r3, #4
    // mul r1, r2
    // add r1, r3, r1
    // b _020209DA
    // mov r1, #0
    // b _020209DA
    // mov r1, #0
    // bl sub_0202094C
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020209E0(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // add r0, sp, #0
    // bl sub_02020B3C
    // cmp r4, #0
    // beq _020209FE
    // add r0, r4, #0
    // add r0, #0x3c
    // add r1, sp, #0
    // bl NNS_G3dGetResDataByName
    // add r1, r0, #0
    // b _02020A00
    // mov r1, #0
    // add r0, r4, #0
    // bl sub_0202094C
    // add sp, #0x10
    // pop {r4, pc}
    // TODO: decompile
}

