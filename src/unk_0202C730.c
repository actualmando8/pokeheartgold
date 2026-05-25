/* Decompiled from asm/unk_0202C730.s */
#include "global.h"

void Save_FriendGroup_sizeof(void) {
    r0 = r0 << 2;
}


void sub_0202C738(void) {
    // push {r4, r5}
    // add r5, r2, #0
    // mov r3, #0x2c
    // add r2, r1, #0
    // mul r2, r3
    // mul r5, r3
    // add r4, r0, r2
    // add r3, r0, r5
    // mov r2, #5
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0202C74A
    // ldr r0, [r4]
    // str r0, [r3]
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void Save_FriendGroup_Init(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r2, #0x42
    // mov r0, #0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl MIi_CpuClearFast
    // ldr r0, _0202C784 ; =0x0000FFFF
    // mov r1, #0
    // add r2, r4, #0
    // strh r0, [r2]
    // strh r0, [r2, #0x10]
    // add r1, r1, #1
    // add r2, #0x2c
    // cmp r1, #6
    // blt _0202C772
    // ldr r0, _0202C788 ; =_021D2AF0
    // str r4, [r0]
    // pop {r4, pc}
    // _0202C784: .word 0x0000FFFF
    // _0202C788: .word _021D2AF0
    // TODO: decompile
}


void sub_0202C78C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r7, #0
    // mov r4, #0
    // cmp r6, #0
    // bls _0202C7A8
    // ldr r0, [r5, #0x28]
    // bl PRandom
    // add r4, r4, #1
    // str r0, [r5, #0x28]
    // cmp r4, r6
    // blo _0202C79A
    // add r7, r7, #1
    // add r5, #0x2c
    // cmp r7, #6
    // blo _0202C794
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void Save_FriendGroup_GetGroupId(void) {
    // mov r2, #0x2c
    // mul r2, r1
    // add r0, r0, r2
    // ldr r0, [r0, #0x24]
    // bx lr
    // TODO: decompile
}


void sub_0202C7C0(void) {
    PRandom(0x2c);
}


void sub_0202C7DC(void) {
    // ldr r0, [r0, #0x54]
    // bx lr
    // TODO: decompile
}


void sub_0202C7E0(void) {
    // cmp r2, #0
    // bne _0202C7EC
    // mov r2, #0x2c
    // mul r2, r1
    // add r0, r0, r2
    // bx lr
    // mov r2, #0x2c
    // mul r2, r1
    // add r0, r0, r2
    // add r0, #0x10
    // bx lr
    // TODO: decompile
}


void sub_0202C7F8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r2, #0
    // bne _0202C810
    // mov r2, #0x2c
    // mul r2, r1
    // add r1, r4, r2
    // add r0, r3, #0
    // mov r2, #8
    // bl CopyStringToU16Array
    // pop {r4, pc}
    // mov r2, #0x2c
    // mul r2, r1
    // add r1, r4, r2
    // add r0, r3, #0
    // add r1, #0x10
    // mov r2, #8
    // bl CopyStringToU16Array
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0202C824(void) {
    // mov r3, #0x2c
    // mul r3, r1
    // add r0, r0, r3
    // add r0, #0x20
    // strb r2, [r0]
    // bx lr
    // TODO: decompile
}


void sub_0202C830(void) {
    // mov r2, #0x2c
    // mul r2, r1
    // add r0, r0, r2
    // add r0, #0x20
    // ldrb r0, [r0]
    // bx lr
    // TODO: decompile
}


void sub_0202C83C(void) {
    // mov r2, #0x2c
    // mul r2, r1
    // add r0, r0, r2
    // add r0, #0x21
    // ldrb r0, [r0]
    // bx lr
    // TODO: decompile
}


void sub_0202C848(void) {
    // mov r3, #0x2c
    // mul r3, r1
    // add r0, r0, r3
    // add r0, #0x21
    // strb r2, [r0]
    // bx lr
    // TODO: decompile
}


void Save_FriendGroup_Get(void) {
    SaveArray_Get();
}


void sub_0202C860(void) {
    sub_0202C8C4(0, 1, 0x2c);
}


void sub_0202C878(void) {
    // mov r2, #0x2c
    // add r3, r0, #0
    // mul r2, r1
    // add r1, r3, r2
    // ldr r3, _0202C888 ; =sub_0202C8E4
    // add r0, #0x2c
    // bx r3
    // nop
    // _0202C888: .word sub_0202C8E4
    // TODO: decompile
}


void sub_0202C88C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // ldrh r1, [r6]
    // add r5, r0, #0
    // ldr r0, _0202C8C0 ; =0x0000FFFF
    // cmp r1, r0
    // bne _0202C89E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r4, #0
    // mov r7, #8
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r7, #0
    // bl StringNotEqualN
    // cmp r0, #0
    // bne _0202C8B4
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r4, r4, #1
    // add r5, #0x2c
    // cmp r4, #6
    // blt _0202C8A2
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0202C8C0: .word 0x0000FFFF
    // TODO: decompile
}


void sub_0202C8C4(void) {
    // ldrh r2, [r0]
    // ldr r1, _0202C8E0 ; =0x0000FFFF
    // cmp r2, r1
    // bne _0202C8D0
    // mov r0, #1
    // bx lr
    // ldrh r0, [r0, #0x10]
    // cmp r0, r1
    // bne _0202C8DA
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _0202C8E0: .word 0x0000FFFF
    // TODO: decompile
}


void sub_0202C8E4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r0, #0x10
    // add r1, #0x10
    // mov r2, #8
    // bl StringNotEqualN
    // cmp r0, #0
    // beq _0202C8FC
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #8
    // bl StringNotEqualN
    // cmp r0, #0
    // beq _0202C90E
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r0, #0x20
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r1, r0
    // beq _0202C922
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r0, #0x21
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // cmp r1, r0
    // beq _0202C936
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r1, [r5, #0x24]
    // ldr r0, [r4, #0x24]
    // cmp r1, r0
    // bne _0202C942
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}

