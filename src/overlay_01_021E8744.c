/* Decompiled from asm/overlay_01_021E8744.s */
#include "global.h"

void ov01_021E8744(void) {
    // mvn r1, r1
    // add r1, #0x10
    // str r0, [r6, r1]
    // add r0, r6, r1
    // add r1, #0x10
}




void ov01_021E87A8(void) {
    // mvn r0, r0
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x18]
    // str r0, [sp]
}




void ov01_021E87E4(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // add r1, #0x10
    // add r2, #8
    // add r3, #0xc
    // str r4, [r5, r0]
    // str r4, [r5, r1]
    // str r4, [r5, r2]
    // str r4, [r5, r3]
    // add r5, #0x10
    // str r0, [r7, r1]
    // ldr r0, [sp]
    // str r0, [r7, r1]
    // ldr r0, [sp, #4]
    // str r0, [r7, r1]
}




void ov01_021E8858(void) {
    // cmp r0, #0
    // bne _021E8860
    // mov r0, #0
    // bx lr
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}




void ov01_021E8864(void) {
    // and r0, r1
}




void ov01_021E887C(void) {
    // asr r1, r0, #1
    // and r1, r0
}




void ov01_021E8894(void) {
    // ldr r7, [sp, #0x54]
    // str r2, [sp, #8]
    // add r2, sp, #0x10
    // add r0, sp, #0x18
    // mvn r1, r1
    // str r0, [sp, #0xc]
    // add r0, sp, #0x10
    // ldr r1, [sp, #0x48]
    // add r4, #0x10
    // add r0, r7, r4
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x44]
    // ldr r3, [sp, #0x40]
    // ldr r0, [sp, #0xc]
    // add r1, r7, r4
    // ldr r0, [sp, #0x4c]
    // str r0, [sp]
    // ldr r0, [sp, #0x50]
    // str r0, [sp, #4]
    // add r1, #8
    // ldr r3, [sp, #0xc]
    // add r7, #0x10
    // str r6, [r7, r4]
    // add r0, r7, r4
    // add r1, #0x10
}




void ov01_021E8970(void) {
    // ldr r6, [sp, #0x30]
    // str r3, [sp]
    // add r2, sp, #4
    // add r0, sp, #0xc
    // mvn r0, r0
    // add r0, sp, #4
    // add r0, sp, #4
    // add r2, r6, r2
    // ldr r1, [sp]
    // add r0, r6, r0
    // add r1, r6, r1
    // ldr r0, [sp]
    // add r1, #0x10
}




void ov01_021E8A28(void) {
    // add r0, #0x10
}




void ov01_021E8A50(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov01_021E8A8C(void) {
    // add r2, sp, #0
    // add r0, sp, #8
    // mvn r0, r0
    // add r1, r4, r1
}




void ov01_021E8AEC(void) {
    // ldr r0, [r4, r0]
}




void ov01_021E8B04(void) {
    // add r2, sp, #0
    // add r0, sp, #8
    // add r5, #0x10
    // add r4, r5, r0
    // add r3, #0x10
}




void ov01_021E8B60(void) {
}




void ov01_021E8B6C(void) {
}




void ov01_021E8B78(void) {
}




void ov01_021E8B84(void) {
}




void ov01_021E8B90(void) {
}




void ov01_021E8B9C(void) {
    // mov r1, #0x4d
    // lsl r1, r1, #2
    // ldr r3, _021E8BA8 ; =NARC_GetFileCount
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021E8BA8: .word NARC_GetFileCount
    // TODO: decompile
}




void ov01_021E8BAC(void) {
    // add r2, sp, #0
    // add r0, sp, #0
    // add r3, sp, #0
    // add r2, r3, r2
}




void ov01_021E8BE8(void) {
    // add r3, r5, r3
    // add r3, #0x34
    // add r0, r5, r2
    // add r0, #0x34
    // strb r4, [r0]
    // add r0, r5, r2
    // add r0, #0x35
    // strb r1, [r0]
    // add r0, r5, r2
}




void ov01_021E8C40(void) {
    // add r1, #0x34
    // strb r3, [r1]
    // add r1, r0, r1
}




void ov01_021E8C60(void) {
    // add r2, #0x34
    // add r4, r0, r1
    // add r5, #0x38
}




void ov01_021E8C88(void) {
}




void ov01_021E8CA4(void) {
}




void ov01_021E8CBC(void) {
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r6, r5, r0
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
}




void ov01_021E8D10(void) {
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x40]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x4c]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x4c]
    // str r3, [sp, #0x24]
    // ldr r6, [sp, #0x44]
    // ldr r7, [sp, #0x48]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x40]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // str r7, [sp, #0x14]
    // ldr r0, [sp, #0x4c]
    // ldr r0, [sp, #0x24]
}




void ov01_021E8D6C(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // stmia r4!, {r7}
}




void ov01_021E8DB4(void) {
}




void ov01_021E8DD4(void) {
}




void ov01_021E8DE8(void) {
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x34]
    // add r0, sp, #0x38
    // ldr r0, [sp, #0x3c]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x30]
    // ldr r3, [sp, #0x34]
    // str r5, [sp, #0xc]
}




void ov01_021E8E40(void) {
    // add r5, #0x14
    // str r6, [r5, r4]
}




void ov01_021E8E70(void) {
}




void ov01_021E8E98(void) {
}




void ov01_021E8ED0(void) {
}




void ov01_021E8EF8(void) {
}




void ov01_021E8F10(void) {
}




void ov01_021E8F30(void) {
}




void ov01_021E8F3C(void) {
    // ldr r0, [sp, #0x50]
    // ldr r7, [sp, #0x54]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x1c]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r0, [sp, #0x50]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x50]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // mvn r1, r1
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x50]
    // ldr r0, [sp, #0x50]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // add r5, r7, r0
    // ldr r0, [sp, #0x50]
    // mvn r1, r1
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #0x24]
    // str r0, [sp, #4]
    // add r1, #8
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x50]
    // ldr r3, [sp, #0x24]
    // ldr r1, [sp, #0xc]
    // add r0, r7, r0
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x50]
    // ldr r0, [sp, #0x1c]
    // str r1, [sp, #0x1c]
    // add r0, sp, #0x28
    // str r2, [r0, r1]
    // add r1, #0x10
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x50]
    // ldr r0, [sp, #0x58]
    // add r1, sp, #0x28
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x58]
    // ldr r1, [sp, #0xc]
    // add r2, sp, #0x28
}




void ov01_021E90B0(void) {
}



