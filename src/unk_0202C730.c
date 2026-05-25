/* Decompiled from asm/unk_0202C730.s */
#include "global.h"

void Save_FriendGroup_sizeof(void) {
}




void sub_0202C738(void) {
    // add r4, r0, r2
    // add r3, r0, r5
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void Save_FriendGroup_Init(void) {
    MIi_CpuClearFast(0, r0, (0x42 << 2));
    // strh r0, [r2]
    *((u16*)(r4 + 0x10)) = 0x0000FFFF;
    // add r2, #0x2c
    // str r4, [r0]
}




void sub_0202C78C(void) {
    // add r5, #0x2c
}




u32 Save_FriendGroup_GetGroupId(void) {
    // add r0, r0, r2
}




void sub_0202C7C0(void) {
}




void sub_0202C7DC(void) {
}




void * sub_0202C7E0(void) {
    // mul r2, r1
    // add r0, r0, r2
    // mul r2, r1
    // add r0, r0, r2
    // add r0, #0x10
}



void sub_0202C7F8(void) {
    // add r1, r4, r2
    // add r1, r4, r2
    // add r1, #0x10
}




void sub_0202C824(void) {
    // add r0, r0, r3
    // add r0, #0x20
    // strb r2, [r0]
}




u8 sub_0202C830(void) {
    // add r0, r0, r2
    // add r0, #0x20
}




u8 sub_0202C83C(void) {
    // add r0, r0, r2
    // add r0, #0x21
}




void sub_0202C848(void) {
    // add r0, r0, r3
    // add r0, #0x21
    // strb r2, [r0]
}




void Save_FriendGroup_Get(void) {
}




void sub_0202C860(void) {
}




u32 sub_0202C878(void) {
    // add r1, r3, r2
    // add r0, #0x2c
}




u32 sub_0202C88C(void) {
    StringNotEqualN(r1, r0, 8);
    // add r5, #0x2c
}




void sub_0202C8C4(void) {
    // bne _0202C8D0
    // bne _0202C8DA
    // nop
    // _0202C8E0: .word 0x0000FFFF
}




u32 sub_0202C8E4(void) {
    // add r0, #0x10
    // add r1, #0x10
    // add r0, #0x20
    // add r0, #0x20
    // add r0, #0x21
    // add r0, #0x21
}



