/* Decompiled from asm/overlay_01_021FB04C.s */
#include "global.h"

void ov01_021FB04C(void) {
    MIi_CpuClear32(0, 0x18);
    // add r2, sp, #0
    NARC_ReadFile(r5, 4);
    NARC_ReadFile(r5, 2, r4);
    NARC_ReadFile(r5, 2, (r4 + 4));
    // add r2, #8
    NARC_ReadFile(r5, 2, r4);
    // add r2, #0xc
    NARC_ReadFile(r5, 2, r4);
    // add r2, #0x10
    NARC_ReadFile(r5, 2, r4);
    // add r4, #0x14
    NARC_ReadFile(r5, 2, r4);
}



void ov01_021FB0B0(void) {
    *((u32*)(r1 + 0x10)) = *((u32*)r2);
    // add r2, r4, r2
    // add r4, r4, r2
    *((u32*)(r1 + 0x14)) = *((u32*)r2);
    // mul r4, r5
    // add r2, r2, r4
    // add r4, r4, r2
    *((u32*)(r1 + 4)) = *((u32*)r2);
    // add r2, r2, r4
    // add r4, r4, r2
    // str r4, [r1]
    // add r2, r2, r4
    // add r4, r4, r2
    *((u32*)(r1 + 8)) = *((u32*)r2);
    // add r2, r2, r4
    // add r0, r0, r2
    *((u32*)(r1 + 0xc)) = *((u32*)r2);
    // add r1, r2, r0
    GF_AssertFail((9 << 0xc), (*((u32*)r0) << 3), r0);
}



void ov01_021FB110(void) {
    // add r3, r1, #0
    // ldr r1, [r2]
    // ldr r2, [r3, #0x10]
    // ldr r3, _021FB11C ; =NARC_ReadFile
    // lsl r1, r1, #3
    // bx r3
    // _021FB11C: .word NARC_ReadFile
    // TODO: decompile
}



void ov01_021FB120(void) {
    // ldr r2, [r2, #4]
    // add r3, r1, #0
    // mov r1, #0xc
    // mul r1, r2
    // ldr r2, [r3, #0x14]
    // ldr r3, _021FB130 ; =NARC_ReadFile
    // bx r3
    // nop
    // _021FB130: .word NARC_ReadFile
    // TODO: decompile
}



void ov01_021FB134(void) {
    // add r3, r1, #0
    // ldr r1, [r2, #8]
    // ldr r2, [r3, #4]
    // ldr r3, _021FB140 ; =NARC_ReadFile
    // lsl r1, r1, #2
    // bx r3
    // _021FB140: .word NARC_ReadFile
    // TODO: decompile
}



void ov01_021FB144(void) {
    // add r3, r1, #0
    // ldr r1, [r2, #0xc]
    // ldr r2, [r3]
    // ldr r3, _021FB150 ; =NARC_ReadFile
    // lsl r1, r1, #3
    // bx r3
    // _021FB150: .word NARC_ReadFile
    // TODO: decompile
}



void ov01_021FB154(void) {
    // add r3, r1, #0
    // ldr r1, [r2, #0x10]
    // ldr r2, [r3, #8]
    // ldr r3, _021FB160 ; =NARC_ReadFile
    // lsl r1, r1, #3
    // bx r3
    // _021FB160: .word NARC_ReadFile
    // TODO: decompile
}



void ov01_021FB164(void) {
    // add r3, r1, #0
    // ldr r1, [r2, #0x14]
    // ldr r2, [r3, #0xc]
    // ldr r3, _021FB170 ; =NARC_ReadFile
    // lsl r1, r1, #1
    // bx r3
    // _021FB170: .word NARC_ReadFile
    // TODO: decompile
}



u8 ov01_021FB174(void) {
    // add r0, #0x68
    // strb r1, [r0]
    // add r0, #0x68
    // ldrb r0, [r0]
    // add r0, #0x84
    // add r1, #0x4c
    ov01_021FB04C(*((u32*)(r1 + 0x7c)), r1, 0);
    // add r2, #0x6c
    *((u32*)(*((u32*)(r4 + 0x70)) + 0x1c)) = *((u32*)(r4 + 0x5c));
    // add r0, #0x4c
    ov01_021FB0B0(r4, *((u32*)(r4 + 0x70)), r4);
    // add r2, #0x4c
    ov01_021FB110(*((u32*)(r4 + 0x7c)), *((u32*)(r4 + 0x70)), r4);
    // add r2, #0x4c
    ov01_021FB120(*((u32*)(r4 + 0x7c)), *((u32*)(r4 + 0x70)), r4);
    // add r2, #0x4c
    ov01_021FB134(*((u32*)(r4 + 0x7c)), *((u32*)(r4 + 0x70)), r4);
    // add r2, #0x4c
    ov01_021FB144(*((u32*)(r4 + 0x7c)), *((u32*)(r4 + 0x70)), r4);
    // add r2, #0x4c
    ov01_021FB154(*((u32*)(r4 + 0x7c)), *((u32*)(r4 + 0x70)), r4);
    // add r2, #0x4c
    ov01_021FB164(*((u32*)(r4 + 0x7c)), *((u32*)(r4 + 0x70)), r4);
    // str r1, [r0]
    Heap_Free(r4, 0, 1);
    SysTask_Destroy(r5);
    // add r0, #0x68
    // ldrb r0, [r0]
    // add r0, #0x68
    // strb r1, [r0]
    // add r0, #0x68
    // ldrb r0, [r0]
    *((u32*)(*((u32*)(r4 + 0x70)) + 0x18)) = 1;
}



void ov01_021FB254(void) {
}



void ov01_021FB270(void) {
    Heap_AllocAtEnd(4, 0x18);
    ov01_021FB04C(r6, r0);
    *((u32*)(r5 + 0x1c)) = *((u32*)(r4 + 0x10));
    // add r2, sp, #0x1c
    ov01_021FB0B0(r4, r5);
    ov01_021FB110(r6, r5, r4);
    ov01_021FB120(r6, r5, r4);
    ov01_021FB134(r6, r5, r4);
    ov01_021FB144(r6, r5, r4);
    ov01_021FB154(r6, r5, r4);
    ov01_021FB164(r6, r5, r4);
    Heap_Free(r4);
    *((u32*)(r5 + 0x18)) = 1;
}



void ov01_021FB2E8(void) {
}



void ov01_021FB2F4(void) {
    *((u32*)(r0 + 0x18)) = 0;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = 0;
    // str r1, [r0]
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0xc)) = 0;
}



void ov01_021FB308(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #4
    // mov r1, #0x88
    // add r6, r2, #0
    // add r7, r3, #0
    // bl Heap_AllocAtEnd
    // add r1, r0, #0
    // add r2, r1, #0
    // mov r0, #0
    // add r2, #0x68
    // strb r0, [r2]
    // add r2, r1, #0
    // str r5, [r1, #0x7c]
    // add r2, #0x80
    // str r4, [r2]
    // str r6, [r1, #0x70]
    // str r7, [r1, #0x78]
    // str r0, [r1, #0x74]
    // str r0, [r1, #0x64]
    // str r0, [r1, #0x48]
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    // ldr r0, [r0]
    // str r0, [r1, #0x6c]
    // add r0, r1, #0
    // add r0, #0x84
    // str r2, [r0]
    // ldr r0, _021FB350 ; =ov01_021FB174
    // mov r2, #1
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FB350: .word ov01_021FB174
    // TODO: decompile
}



void ov01_021FB354(void) {
}



void ov01_021FB360(void) {
}


