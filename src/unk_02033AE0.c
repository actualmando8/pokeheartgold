/* Decompiled from asm/unk_02033AE0.s */
#include "global.h"

void sub_02033AE0(void) {
}




void sub_02033AF0(void) {
    // str r2, [sp]
    // ldr r1, [sp]
    // ldrsh r4, [r5, r0]
    // ldrsh r1, [r5, r0]
    // ldr r0, [sp]
    // add r0, r1, r0
    // strb r2, [r1, r0]
    // ldrsh r1, [r5, r0]
    // ldr r0, [sp]
    // add r0, r1, r0
}




void sub_02033B4C(void) {
    // ldrsh r1, [r5, r1]
    // add r1, r1, r4
}




void sub_02033B68(void) {
}




void sub_02033B78(void) {
    // ldrsh r4, [r5, r0]
    // str r1, [sp]
    // add r0, r4, r7
    // ldrsh r1, [r5, r1]
    // ldr r0, [sp]
    // strb r1, [r0, r6]
    // ldrsh r0, [r5, r0]
    // add r0, r0, r7
}




void sub_02033BC4(void) {
    // ldrsh r1, [r0, r1]
    // ldrsh r2, [r0, r3]
    // ldrsh r2, [r0, r2]
    // ldrsh r0, [r0, r3]
    // add r0, r2, r0
    // sub r0, r0, r1
    // ldrsh r0, [r0, r3]
    // sub r0, r0, r1
}




void sub_02033BE4(void) {
}




void sub_02033BF4(void) {
    // ldrsh r3, [r0, r1]
    // ldrsh r1, [r0, r2]
    // ldrsh r0, [r0, r2]
    // sub r0, r3, r0
    // ldrsh r1, [r0, r1]
    // ldrsh r0, [r0, r2]
    // sub r0, r0, r3
    // sub r0, r1, r0
}




void sub_02033C14(void) {
}




void sub_02033C28(void) {
    // ldrsh r1, [r0, r1]
}




void sub_02033C30(void) {
    // add r1, #0x10
}




void sub_02033C50(void) {
    // add r1, #0x10
}




void sub_02033C70(void) {
    // str r1, [r0]
    // str r1, [r0]
}




void sub_02033C94(void) {
    // strb r1, [r2]
    // str r1, [r0]
}




void sub_02033CB0(void) {
    sub_020341DC(*((u8*)(r0 + 0xe)));
    *((u8*)(r5 + 0xf)) = (*((u8*)(r5 + 0xf)) & ~(1));
    *((u8*)(r5 + 0xf)) = (*((u8*)(r5 + 0xf)) & ~(1));
    sub_02033C94(r4, *((u8*)(r5 + 0xe)));
    // asr r1, r1, #8
    sub_02033C94(r4, ((*((u16*)(r5 + 0xc)) << 0x18) >> 0x18));
    sub_02033C94(r4, ((*((u16*)(r5 + 0xc)) << 0x18) >> 0x18));
    *((u16*)(r5 + 0xc)) = r6;
    *((u8*)(r5 + 0xf)) = (1 | (*((u8*)(r5 + 0xf)) & ~(1)));
}




void sub_02033D28(void) {
    sub_020341DC(*((u8*)(r0 + 0xe)));
    // add r0, r0, r2
    sub_02033CB0(r5, r4, 1);
    sub_02033B4C(r6, *((u32*)r4), *((u32*)(r4 + 4)), *((u16*)(r5 + 0xc)));
    // strb r1, [r0, r3]
    // add r0, r1, r0
    // str r0, [r5]
    // sub r0, r1, r0
    *((u16*)(r5 + 0xc)) = *((u32*)(r4 + 4));
    // mvn r0, r0
    *((u32*)(r4 + 4)) = 0;
    sub_02033B4C(r6, *((u32*)r4), (0 + 1), (0 + 1));
    MI_CpuCopy8(*((u32*)r5), *((u32*)r4), r3);
    // add r0, r1, r0
    // str r0, [r4]
    // sub r0, r1, r0
    *((u32*)(r4 + 4)) = *((u16*)(r5 + 0xc));
}




void sub_02033DF0(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    sub_02033C30();
    GF_AssertFail(0x0000FFFE);
    // ldr r0, [sp]
    sub_020341DC();
    // ldr r0, [sp, #0x24]
    sub_02033BE4(*((u32*)(r5 + 0x14)));
    // ldr r1, [sp, #4]
    sub_02033AF0(*((u32*)(r5 + 0x14)), (r6 + 3), r6, 0x00000109);
    sub_02033C28(*((u32*)(r5 + 0x14)));
    *((u8*)(r4 + 0xf)) = (2 | *((u8*)(r4 + 0xf)));
    // ldr r0, [sp]
    *((u16*)(r4 + 0xc)) = r6;
    *((u8*)(r4 + 0xe)) = (2 | *((u8*)(r4 + 0xf)));
    // ldr r0, [sp, #4]
    // str r0, [r4]
    *((u32*)(r5 + 4)) = r4;
    // str r4, [r5]
    *((u32*)(*((u32*)(r5 + 4)) + 8)) = r4;
    *((u32*)(r4 + 4)) = *((u32*)(r5 + 4));
    *((u32*)(r5 + 4)) = r4;
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
    // add r4, #8
}




void sub_02033ECC(void) {
    // str r2, [sp]
    // mvn r0, r0
    // ldr r7, [sp]
    // strb r1, [r0]
    // str r0, [r4]
}




void sub_02033F44(void) {
}




void sub_02033F70(void) {
}




void sub_02033F90(void) {
}




void sub_02033F9C(void) {
    // add r3, #0x10
}




void sub_02033FC4(void) {
    // add r2, sp, #0
    // strb r0, [r2]
    GF_AssertFail(*((u8*)_020F692C), (0x29 - 1), (r2 + 1), (_020F692C + 1));
    // add r0, sp, #0
}




void sub_02033FF0(void) {
    // add r2, sp, #0
    // strb r0, [r2]
    GF_AssertFail(*((u8*)_020F6955), (0x29 - 1), (r2 + 1), (_020F6955 + 1));
    // add r0, sp, #0
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
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02034056: ; jump table
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
    // sub r1, #0x13
    // bmi _020340C0
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _020340AE: ; jump table
}




void sub_020340C4(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _020340DE: ; jump table
}




void sub_0203410C(void) {
    Heap_Alloc(0xf, 0x18);
    // str r0, [r1]
    // str r5, [r1]
    *((u32*)(*((u32*)_021D412C) + 4)) = r4;
    *((u32*)(*((u32*)_021D412C) + 8)) = r6;
    // add r1, r1, r3
    *((u8*)(*((u32*)_021D412C) + 0xc)) = 0;
    *((u8*)(*((u32*)_021D412C) + 0x14)) = 0;
}




void sub_02034154(void) {
}




void sub_02034170(void) {
    GF_AssertFail(*((u32*)_021D412C), (r1 * 0xc));
    // add r0, #0x16
    sub_02037974(*((u32*)(*((u32*)_021D412C) + 4)), *((u32*)_021D412C));
    // sub r4, #0x16
    // blx r4
    // blx r4
}




void sub_020341DC(void) {
    GF_AssertFail(*((u32*)_021D412C), (r0 * 0xc));
    sub_02037974(_021D412C, *((u32*)_021D412C));
    // add r0, #0x16
    GF_AssertFail(*((u32*)(r1 + 4)));
    sub_02037974();
    // sub r5, #0x16
    // add r0, r1, r0
    // blx r0
}




void sub_02034244(void) {
    // sub r0, #0x16
    // add r0, r2, r1
}




void sub_02034280(void) {
    // blx r3
    // sub r3, #0x16
    // add r3, r5, r4
    // blx r3
}




void sub_020342B8(void) {
    // ldr r0, _020342BC ; =0x0000FFFF
    // bx lr
    // _020342BC: .word 0x0000FFFF
    // TODO: decompile
}




u8 sub_020342C0(void) {
}




u8 sub_020342C4(void) {
}




u8 sub_020342C8(void) {
}




void sub_020342CC(void) {
    sub_0203769C();
    // add r0, r0, r5
    *((u8*)(*((u32*)_021D412C) + 0xc)) = 1;
    sub_020373B4(((0 << 0x10) >> 0x10), 1);
    // add r0, r0, r5
    sub_02037108(0xe, 0, 0);
}




void sub_02034310(void) {
    // str r3, [r1]
    *((u32*)(*((u32*)_021D412C) + 4)) = 0;
    *((u32*)(*((u32*)_021D412C) + 8)) = 0;
    *((u8*)(*((u32*)_021D412C) + 0x14)) = 1;
}




void sub_02034338(void) {
}



