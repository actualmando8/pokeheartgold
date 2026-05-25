/* Decompiled from asm/unk_02096910.s */
#include "global.h"

void sub_02096910(void) {
    // bx r3
    // nop
    // _0209691C: .word sub_0203410C
    // _02096920: .word _02108594
}




void sub_02096924(void) {
    // strb r1, [r5, r0]
    sub_0203769C(0x000008D4, (*((u8*)(r3 + 0x000008D4)) + 1));
    *((u8*)(r5 + 0x12)) = *((u16*)r6);
    *((u16*)(r5 + 0x16)) = *((u16*)(r6 + 2));
    *((u16*)(r5 + 0x18)) = *((u16*)(r6 + 4));
    *((u16*)(r5 + 0x14)) = *((u16*)(r6 + 6));
    *((u8*)(r5 + 0x10)) = ((*((u8*)(r5 + 0x10)) & ~(0xe0)) | (((((*((u8*)(r5 + 0x12)) + 5) << 0x18) >> 0x18) << 0x1d) >> 0x18));
    // strh r4, [r5, r0]
}




u32 sub_02096998(void) {
    // add r1, r4, r1
    // add r0, #0x3e
    MI_CpuCopy8(0x0000083E, 0x1c);
    // add r1, r4, r1
    sub_02037030(0x3f, 0x0000083E, 0x1c);
}




void sub_020969C4(void) {
    // strb r1, [r4, r0]
    sub_0203769C(0x000008D4, (*((u8*)(r3 + 0x000008D4)) + 1));
    sub_0203769C();
    // add r4, #0x3e
    MI_CpuCopy8(r6, r4, 0x1c);
}




void sub_020969F8(void) {
    // strh r1, [r4, r0]
    // strb r1, [r4, r0]
    sub_0203769C((0x000008D8 - 4), (*((u8*)(r3 + (0x000008D8 - 4))) + 1));
    // strh r1, [r4, r0]
}




u32 sub_02096A34(void) {
    // add r0, #0xa0
    // add r0, #0xa0
    // add r5, #8
}




void sub_02096A7C(void) {
    // add r0, #0x6f
    // add r0, #0x6f
    // strb r1, [r0]
    // add r0, #0x6e
    // strb r1, [r0]
    // add r4, #0x72
    // strh r0, [r4]
}




void sub_02096AAC(void) {
}




void sub_02096ACC(void) {
    // add r0, #0x6f
    // add r0, #0x6f
    // strb r1, [r0]
    // add r4, #0x59
    // strb r0, [r4]
}




u32 sub_02096AF4(void) {
    // add r1, #0x6a
    // strb r4, [r1]
    // add r1, #0x6b
    // strb r6, [r1]
    // add r0, #0x76
    // strh r1, [r0]
    // add r0, #0x7e
    // strh r1, [r0]
    // add r0, #0x78
    // strh r1, [r0]
    // add r0, #0x80
    // strh r1, [r0]
    // mov r1, #MON_DATA_SPECIES
    // add r1, #0x76
    // strh r0, [r1]
    // mov r1, #MON_DATA_HELD_ITEM
    // add r1, #0x7e
    // strh r0, [r1]
    // mov r1, #MON_DATA_SPECIES
    // add r1, #0x78
    // strh r0, [r1]
    // mov r1, #MON_DATA_HELD_ITEM
    // add r1, #0x80
    // strh r0, [r1]
    // add r0, #0x76
    // add r0, #0x7e
    // add r0, #0x78
    // add r0, #0x80
    // add r5, #8
}




void sub_02096BB8(void) {
    // add r0, #0x6f
    // add r0, #0x6f
    // strb r1, [r0]
    // add r0, #0x86
    // strh r1, [r0]
    // add r0, #0x8e
    // strh r1, [r0]
    // add r0, #0x88
    // add r4, #0x90
    // strh r1, [r0]
    // strh r0, [r4]
}




void sub_02096BF8(void) {
}




void sub_02096C18(void) {
    // add r0, #0x6f
    // add r0, #0x6f
    // strb r1, [r0]
    // add r4, #0x74
    // strh r0, [r4]
}




void sub_02096C40(void) {
}




void sub_02096C60(void) {
    // add r0, #0x6f
    // add r0, #0x6f
    // strb r1, [r0]
    // add r4, #0x71
    // strb r0, [r4]
}



