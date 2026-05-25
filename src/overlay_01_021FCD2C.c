/* Decompiled from asm/overlay_01_021FCD2C.s */
#include "global.h"

void ov01_021FCD2C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // mov r1, #0x34
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x34
    // bl memset
    // str r6, [r4]
    // mov r0, #0
    // str r0, [r4, #0xc]
    // str r5, [r4, #0x2c]
    // ldr r0, [r5, #0x24]
    // str r0, [r4, #0x30]
    // bl Camera_GetDistance
    // str r0, [r4, #0x10]
    // str r0, [r4, #0x20]
    // ldr r0, _021FCD64 ; =ov01_021FCDA8
    // ldr r2, _021FCD68 ; =0x0000FFFF
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r4, r5, r6, pc}
    // _021FCD64: .word ov01_021FCDA8
    // _021FCD68: .word 0x0000FFFF
    // TODO: decompile
}



void ov01_021FCD6C(void) {
}



void ov01_021FCD78(void) {
}



void ov01_021FCD8C(void) {
}



void ov01_021FCDA8(void) {
    // push {r3, lr}
    // add r0, r1, #0
    // ldr r1, [r1, #0xc]
    // lsl r2, r1, #2
    // ldr r1, _021FCDB8 ; =ov01_02208E0C
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r3, pc}
    // _021FCDB8: .word ov01_02208E0C
    // TODO: decompile
}



void ov01_021FCDBC(void) {
}



void ov01_021FCDC4(void) {
    ov01_021FCE44(*((u32*)(r0 + 4)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov01_021FCE74(r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 8)) = 1;
    ov01_021FCE34(r4);
}



void ov01_021FCDFC(void) {
    ov01_021FCE5C(*((u32*)(r0 + 4)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    ov01_021FCE74(r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 8)) = 1;
    ov01_021FCE34(r4);
}



void ov01_021FCE34(void) {
    // ldr r3, _021FCE40 ; =Camera_SetDistance
    // add r1, r0, #0
    // ldr r0, [r1, #0x20]
    // ldr r1, [r1, #0x30]
    // bx r3
    // nop
    // _021FCE40: .word Camera_SetDistance
    // TODO: decompile
}



void ov01_021FCE44(void) {
}



void ov01_021FCE5C(void) {
}



u32 ov01_021FCE74(void) {
    // add r1, r2, r1
    *((u32*)(r0 + 0x20)) = *((u32*)(r0 + 0x28));
    *((u32*)(r0 + 0x24)) = (*((u32*)(r0 + 0x24)) + 1);
    *((u32*)(r0 + 0x24)) = *((u32*)(r0 + 0x1c));
    *((u32*)(r0 + 0x20)) = *((u32*)(r0 + 0x18));
}


