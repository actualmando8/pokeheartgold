/* Decompiled from asm/unk_02096910.s */
#include "global.h"

void sub_02096910(void) {
    // ldr r3, _0209691C ; =sub_0203410C
    // add r2, r0, #0
    // ldr r0, _02096920 ; =_02108594
    // mov r1, #0x34
    // bx r3
    // nop
    // _0209691C: .word sub_0203410C
    // _02096920: .word _02108594
    // TODO: decompile
}


void sub_02096924(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, _02096990 ; =0x000008D4
    // add r5, r3, #0
    // ldrb r1, [r5, r0]
    // add r6, r2, #0
    // mov r4, #0
    // add r1, r1, #1
    // strb r1, [r5, r0]
    // bl sub_0203769C
    // cmp r7, r0
    // beq _0209698E
    // ldrh r0, [r6]
    // mov r1, #0xe0
    // strb r0, [r5, #0x12]
    // ldrh r0, [r6, #2]
    // strh r0, [r5, #0x16]
    // ldrh r0, [r6, #4]
    // strh r0, [r5, #0x18]
    // ldrh r0, [r6, #6]
    // strh r0, [r5, #0x14]
    // ldrb r0, [r5, #0x10]
    // bic r0, r1
    // ldrb r1, [r5, #0x12]
    // add r1, r1, #5
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r1, r1, #0x1d
    // lsr r1, r1, #0x18
    // orr r0, r1
    // strb r0, [r5, #0x10]
    // ldrh r2, [r5, #0x16]
    // ldrh r1, [r5, #0x2e]
    // cmp r1, r2
    // beq _02096972
    // ldrh r0, [r5, #0x18]
    // cmp r1, r0
    // bne _02096978
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldrh r1, [r5, #0x30]
    // cmp r1, r2
    // beq _02096984
    // ldrh r0, [r5, #0x18]
    // cmp r1, r0
    // bne _0209698A
    // add r0, r4, #2
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, _02096994 ; =0x000008D8
    // strh r4, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02096990: .word 0x000008D4
    // _02096994: .word 0x000008D8
    // TODO: decompile
}


void sub_02096998(void) {
    // push {r4, lr}
    // ldr r1, _020969C0 ; =0x0000083E
    // add r4, r0, #0
    // add r1, r4, r1
    // add r0, #0x3e
    // mov r2, #0x1c
    // bl MI_CpuCopy8
    // ldr r1, _020969C0 ; =0x0000083E
    // mov r0, #0x3f
    // add r1, r4, r1
    // mov r2, #0x1c
    // bl sub_02037030
    // cmp r0, #1
    // bne _020969BC
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _020969C0: .word 0x0000083E
    // TODO: decompile
}


void sub_020969C4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _020969F4 ; =0x000008D4
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r6, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _020969F0
    // bl sub_0203769C
    // cmp r0, #0
    // beq _020969F0
    // add r4, #0x3e
    // add r0, r6, #0
    // add r1, r4, #0
    // mov r2, #0x1c
    // bl MI_CpuCopy8
    // pop {r4, r5, r6, pc}
    // nop
    // _020969F4: .word 0x000008D4
    // TODO: decompile
}


void sub_020969F8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _02096A30 ; =0x000008D8
    // add r4, r3, #0
    // mov r1, #0
    // strh r1, [r4, r0]
    // sub r1, r0, #4
    // ldrb r1, [r4, r1]
    // sub r0, r0, #4
    // add r6, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _02096A2C
    // ldrb r0, [r4, #0x10]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1f
    // bne _02096A26
    // ldrh r0, [r6]
    // cmp r0, #0
    // beq _02096A2C
    // ldr r0, _02096A30 ; =0x000008D8
    // mov r1, #1
    // strh r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _02096A30: .word 0x000008D8
    // TODO: decompile
}


void sub_02096A34(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // strh r0, [r5, #8]
    // add r0, r5, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // bl ov80_022385D8
    // add r4, r0, #0
    // ldr r0, [r5]
    // bl Save_Frontier_GetStatic
    // add r6, r0, #0
    // add r0, r4, #0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl FrontierSave_GetStat
    // strh r0, [r5, #0xa]
    // add r5, #8
    // mov r0, #0x39
    // add r1, r5, #0
    // mov r2, #0x28
    // bl sub_02037030
    // cmp r0, #1
    // bne _02096A78
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02096A7C(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r6, r0, #0
    // add r0, r4, #0
    // add r0, #0x6f
    // ldrb r0, [r0]
    // add r5, r2, #0
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x6f
    // strb r1, [r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _02096AA8
    // ldrh r1, [r5]
    // add r0, r4, #0
    // add r0, #0x6e
    // strb r1, [r0]
    // ldrh r0, [r5, #2]
    // add r4, #0x72
    // strh r0, [r4]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02096AAC(void) {
    sub_02037030(0, 0x3a, 1, 0x28);
}


void sub_02096ACC(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x6f
    // ldrb r0, [r0]
    // add r6, r2, #0
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x6f
    // strb r1, [r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _02096AF0
    // ldrh r0, [r6]
    // add r4, #0x59
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02096AF4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // add r6, r2, #0
    // bl SaveArray_Party_Get
    // add r1, r5, #0
    // add r1, #0x6a
    // strb r4, [r1]
    // add r1, r5, #0
    // add r1, #0x6b
    // add r7, r0, #0
    // strb r6, [r1]
    // cmp r4, #0xff
    // bne _02096B30
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x76
    // strh r1, [r0]
    // add r0, r5, #0
    // add r0, #0x7e
    // strh r1, [r0]
    // add r0, r5, #0
    // add r0, #0x78
    // strh r1, [r0]
    // add r0, r5, #0
    // add r0, #0x80
    // strh r1, [r0]
    // b _02096B7E
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // mov r1, #MON_DATA_SPECIES
    // mov r2, #0
    // add r4, r0, #0
    // bl GetMonData
    // add r1, r5, #0
    // add r1, #0x76
    // strh r0, [r1]
    // add r0, r4, #0
    // mov r1, #MON_DATA_HELD_ITEM
    // mov r2, #0
    // bl GetMonData
    // add r1, r5, #0
    // add r1, #0x7e
    // strh r0, [r1]
    // add r0, r7, #0
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #MON_DATA_SPECIES
    // mov r2, #0
    // add r4, r0, #0
    // bl GetMonData
    // add r1, r5, #0
    // add r1, #0x78
    // strh r0, [r1]
    // add r0, r4, #0
    // mov r1, #MON_DATA_HELD_ITEM
    // mov r2, #0
    // bl GetMonData
    // add r1, r5, #0
    // add r1, #0x80
    // strh r0, [r1]
    // add r0, r5, #0
    // add r0, #0x76
    // ldrh r0, [r0]
    // mov r2, #0x28
    // strh r0, [r5, #8]
    // add r0, r5, #0
    // add r0, #0x7e
    // ldrh r0, [r0]
    // strh r0, [r5, #0xa]
    // add r0, r5, #0
    // add r0, #0x78
    // ldrh r0, [r0]
    // strh r0, [r5, #0xc]
    // add r0, r5, #0
    // add r0, #0x80
    // ldrh r0, [r0]
    // strh r0, [r5, #0xe]
    // add r5, #8
    // mov r0, #0x3b
    // add r1, r5, #0
    // bl sub_02037030
    // cmp r0, #1
    // bne _02096BB2
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02096BB8(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r6, r0, #0
    // add r0, r4, #0
    // add r0, #0x6f
    // ldrb r0, [r0]
    // add r5, r2, #0
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x6f
    // strb r1, [r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _02096BF4
    // ldrh r1, [r5]
    // add r0, r4, #0
    // add r0, #0x86
    // strh r1, [r0]
    // add r0, r4, #0
    // ldrh r1, [r5, #2]
    // add r0, #0x8e
    // strh r1, [r0]
    // add r0, r4, #0
    // ldrh r1, [r5, #4]
    // add r0, #0x88
    // add r4, #0x90
    // strh r1, [r0]
    // ldrh r0, [r5, #6]
    // strh r0, [r4]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02096BF8(void) {
    sub_02037030(0, 0x3c, 1, 0x28);
}


void sub_02096C18(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x6f
    // ldrb r0, [r0]
    // add r6, r2, #0
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x6f
    // strb r1, [r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _02096C3C
    // ldrh r0, [r6]
    // add r4, #0x74
    // strh r0, [r4]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02096C40(void) {
    sub_02037030(0, 0x3d, 1, 0x28);
}


void sub_02096C60(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x6f
    // ldrb r0, [r0]
    // add r6, r2, #0
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x6f
    // strb r1, [r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _02096C84
    // ldrh r0, [r6]
    // add r4, #0x71
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}

