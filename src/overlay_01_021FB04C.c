/* Decompiled from asm/overlay_01_021FB04C.s */
#include "global.h"

void ov01_021FB04C(void) {
    // add r2, sp, #0
    // add r2, #8
    // add r2, #0xc
    // add r2, #0x10
    // add r4, #0x14
}




void ov01_021FB0B0(void) {
    // add r2, r4, r2
    // add r4, r4, r2
    // add r2, r2, r4
    // add r4, r4, r2
    // add r2, r2, r4
    // add r4, r4, r2
    // str r4, [r1]
    // add r2, r2, r4
    // add r4, r4, r2
    // add r2, r2, r4
    // add r0, r0, r2
    // add r1, r2, r0
}




void ov01_021FB110(void) {
    // bx r3
    // _021FB11C: .word NARC_ReadFile
}




void ov01_021FB120(void) {
    // mul r1, r2
    // bx r3
    // nop
    // _021FB130: .word NARC_ReadFile
}




void ov01_021FB134(void) {
    // bx r3
    // _021FB140: .word NARC_ReadFile
}




void ov01_021FB144(void) {
    // bx r3
    // _021FB150: .word NARC_ReadFile
}




void ov01_021FB154(void) {
    // bx r3
    // _021FB160: .word NARC_ReadFile
}




void ov01_021FB164(void) {
    // bx r3
    // _021FB170: .word NARC_ReadFile
}




u8 ov01_021FB174(void) {
    // add r0, #0x68
    // strb r1, [r0]
    // add r0, #0x68
    // add r0, #0x84
    // add r1, #0x4c
    // add r2, #0x6c
    // add r0, #0x4c
    // add r2, #0x4c
    // add r2, #0x4c
    // add r2, #0x4c
    // add r2, #0x4c
    // add r2, #0x4c
    // add r2, #0x4c
    // str r1, [r0]
    // add r0, #0x68
    // add r0, #0x68
    // strb r1, [r0]
    // add r0, #0x68
}




void ov01_021FB254(void) {
}




void ov01_021FB270(void) {
    // add r2, sp, #0x1c
}




void ov01_021FB2E8(void) {
}




void ov01_021FB2F4(void) {
    // str r1, [r0]
}




void ov01_021FB308(void) {
    Heap_AllocAtEnd(4, 0x88);
    // add r2, #0x68
    // strb r0, [r2]
    *((u32*)(r0 + 0x7c)) = r5;
    // add r2, #0x80
    // str r4, [r2]
    *((u32*)(r0 + 0x70)) = r6;
    *((u32*)(r0 + 0x78)) = r7;
    *((u32*)(r0 + 0x74)) = 0;
    *((u32*)(r0 + 0x64)) = 0;
    *((u32*)(r0 + 0x48)) = 0;
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    *((u32*)(r0 + 0x6c)) = *((u32*)0);
    // add r0, #0x84
    // str r2, [r0]
    SysTask_CreateOnMainQueue(ov01_021FB174, r0, 1);
}




void ov01_021FB354(void) {
}




void ov01_021FB360(void) {
}



