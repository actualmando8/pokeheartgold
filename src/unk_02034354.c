/* Decompiled from asm/unk_02034354.s */
#include "global.h"

void sub_02034354(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    *((u32*)r1) = r0;
    *((u32*)((r1 + r5) + (r0 + 0x2c))) = ((r0 + 0x2c) + r4);
    // strb r0, [r3, r1]
    // strb r0, [r4, r3]
    // sub r1, #0x58
    // strb r0, [r4, r3]
}




void sub_020343E4(void) {
    *((u32*)((r2 + r5) + r0)) = r3;
    *((u32*)r0) = r1;
}




void sub_02034420(void) {
}




void sub_02034434(void) {
    *((u32*)sp) = r0;
    *((u8*)((((r1 + 0x58) + r5) + r5) + 0x6f)) = *((u32*)sp);
    *((u8*)((((((r1 + 0x58) + r5) + r5) + 0x6f) + r5) + 0x70)) = *((u32*)sp);
    *((u8*)((*((u32*)sp) + r5) + 0x71)) = ((((((r1 + 0x58) + r5) + r5) + 0x6f) + r5) + 0x70);
}




u8 sub_02034520(void) {
}




void sub_02034524(void) {
    // strb r1, [r2, r0]
}




void sub_0203453C(void) {
    // strb r3, [r2, r0]
    // sub r0, #0x5a
    // strb r1, [r4, r3]
    // strb r2, [r1, r0]
}




void sub_020345D0(void) {
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
    // strb r2, [r1, r0]
}




void sub_02034638(void) {
    *((u8*)((r2 + r5) + 0x6e)) = r4;
    // strb r2, [r1, r0]
}




void sub_020346D4(void) {
}




void sub_020346E8(void) {
    // strb r2, [r1, r0]
}




int sub_02034714(void) {
    // add r1, r1, r0
}




int sub_02034730(void) {
    // add r1, r1, r0
}




int sub_02034750(void) {
    // add r1, r1, r0
}




void sub_0203476C(void) {
    // strb r2, [r1, r0]
}




void sub_02034780(void) {
}




/* Address: 0x020347A0
 * Counts entries with value 2 or 3 in a byte array.
 */
u32 sub_020347A0(void) {
    u32 i, count = 0;
    u32 *ptr = *_021D4130;
    u8 *data = (u8*)(ptr + 0xE7 * 4);
    
    for (i = 0; i < 8; i++) {
        u8 v = data[i];
        if (v == 2 || v == 3)
            count++;
    }
    
    return count;
}




void sub_020347CC(void) {
}




PlayerProfile * sub_02034818(void) {
    // add r2, r3, r0
    // add r1, r3, r0
}




void sub_0203484C(void) {
}




void sub_02034870(void) {
    // bx r3
}




void sub_02034884(void) {
}




void sub_020348A8(void) {
}




void sub_020348CC(void) {
}




void sub_020348F0(void) {
}




void sub_02034960(void) {
    // and r0, r1
    *((u32*)sp) = r0;
    // and r1, r0
    // strh r2, [r0, r1]
    // and r1, r0
    // strh r2, [r0, r1]
    // strh r2, [r0, r1]
}




void sub_02034A20(void) {
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = *((u32*)(sp + 8));
    // strh r0, [r7, r3]
    // strh r0, [r7, r4]
    // strh r0, [r7, r5]
}




void sub_02034AC0(void) {
}




void sub_02034AEC(void) {
}




void sub_02034B00(void) {
    *((u32*)r1) = r0;
}



