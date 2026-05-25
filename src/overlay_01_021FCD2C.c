/* Decompiled from asm/overlay_01_021FCD2C.s */
#include "global.h"

void * ov01_021FCD2C(void) {
    Heap_AllocAtEnd(r1, 0x34);
    memset(0, 0x34);
    // str r6, [r4]
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 0x2c)) = r5;
    *((u32*)(r4 + 0x30)) = *((u32*)(r5 + 0x24));
    Camera_GetDistance(*((u32*)(r5 + 0x24)));
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 0x20)) = r0;
    SysTask_CreateOnMainQueue(ov01_021FCDA8, r4, 0x0000FFFF);
}




void ov01_021FCD6C(void) {
}




void ov01_021FCD78(void) {
}




void ov01_021FCD8C(void) {
}




void ov01_021FCDA8(void) {
    // blx r1
}




void ov01_021FCDBC(void) {
}




void ov01_021FCDC4(void) {
}




void ov01_021FCDFC(void) {
}




void ov01_021FCE34(void) {
    // bx r3
    // nop
    // _021FCE40: .word Camera_SetDistance
}




void ov01_021FCE44(void) {
}




void ov01_021FCE5C(void) {
}




u32 ov01_021FCE74(void) {
    // add r1, r2, r1
}



