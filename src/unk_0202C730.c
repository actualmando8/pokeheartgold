/* Decompiled from asm/unk_0202C730.s */
#include "global.h"

void Save_FriendGroup_sizeof(void) {
}



void sub_0202C738(void) {
    // mul r2, r3
    // mul r5, r3
    // add r4, r0, r2
    // add r3, r0, r5
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
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
    PRandom(*((u32*)(r0 + 0x28)));
    *((u32*)(r5 + 0x28)) = r0;
    // add r5, #0x2c
}



u32 Save_FriendGroup_GetGroupId(void) {
    // mul r2, r1
    // add r0, r0, r2
}



void sub_0202C7C0(void) {
}



void sub_0202C7DC(void) {
    // ldr r0, [r0, #0x54]
    // bx lr
    // TODO: decompile
}



void * sub_0202C7E0(void) {
    // mul r2, r1
    // add r0, r0, r2
    // mul r2, r1
    // add r0, r0, r2
    // add r0, #0x10
}



void sub_0202C7F8(void) {
    // mul r2, r1
    // add r1, r4, r2
    CopyStringToU16Array(r3, 8);
    // mul r2, r1
    // add r1, r4, r2
    // add r1, #0x10
    CopyStringToU16Array(r3, 8);
}



void sub_0202C824(void) {
    // mul r3, r1
    // add r0, r0, r3
    // add r0, #0x20
    // strb r2, [r0]
}



u8 sub_0202C830(void) {
    // mul r2, r1
    // add r0, r0, r2
    // add r0, #0x20
    // ldrb r0, [r0]
}



u8 sub_0202C83C(void) {
    // mul r2, r1
    // add r0, r0, r2
    // add r0, #0x21
    // ldrb r0, [r0]
}



void sub_0202C848(void) {
    // mul r3, r1
    // add r0, r0, r3
    // add r0, #0x21
    // strb r2, [r0]
}



void Save_FriendGroup_Get(void) {
}



void sub_0202C860(void) {
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



u32 sub_0202C8E4(void) {
    // add r0, #0x10
    // add r1, #0x10
    StringNotEqualN(8);
    StringNotEqualN(r5, r4, 8);
    // add r0, #0x20
    // ldrb r1, [r0]
    // add r0, #0x20
    // ldrb r0, [r0]
    // add r0, #0x21
    // ldrb r1, [r0]
    // add r0, #0x21
    // ldrb r0, [r0]
}


