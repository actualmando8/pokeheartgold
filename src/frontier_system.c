/* Decompiled from asm/frontier_system.s */
#include "global.h"

void * FrontierSystem_Create(void) {
    Heap_Alloc(r1, 0xbc);
    MI_CpuFill8(0, 0xbc);
    // str r7, [r4]
    *((u32*)(r4 + 0x34)) = r5;
    // add r0, #0x52
    // strh r6, [r0]
    // add r0, #0x40
    // add r1, #0x3c
    ov80_0222AA40(r4, r4, r6, r5);
    MessageFormat_New_Custom(8, 0x40, r5);
    *((u32*)(r4 + 0x44)) = r0;
    String_New((1 << 0xa), r5);
    *((u32*)(r4 + 0x48)) = r0;
    String_New((1 << 0xa), r5);
    *((u32*)(r4 + 0x4c)) = r0;
    FrontierSystem_deadstripped_0222AA3C(r4, ((r6 << 0x10) >> 0x10), 0, 0);
}



u8 FrontierSystem_Main(void) {
    // str r0, [sp]
    // ldrsb r0, [r0, r1]
    // ldr r0, [sp]
    // add r0, #0x38
    // ldr r5, [sp]
    // add r6, #0x51
    // ldr r0, [sp]
    // ldrsb r0, [r6, r0]
    // strb r0, [r6]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldrsb r0, [r0, r1]
}




void ov80_0222A920(void) {
    // ldrsb r0, [r4, r0]
}




void FrontierSystem_AddTask(void) {
    Heap_Alloc(*((u32*)(r0 + 0x34)), 0x90);
    MI_CpuFill8(0, 0x90);
    FrontierScriptContext_Init(r4, gFrontierCommandTable, *((u32*)ov80_0223B9CC));
    // str r5, [r4]
    // add r0, #0x52
    // add r0, #0x84
    // str r1, [r0]
    // add r0, #0x80
    // str r1, [r0]
    // add r0, #0x84
    // add r1, #0x80
    ov80_0222AA40(r4, r4, r6, *((u32*)(r5 + 0x34)));
    // add r1, #0x84
    FrontierScriptContext_Start(r4, *((u32*)r4));
    ov80_0222AB14(r4, r7);
    ov80_0222A9DC(r5, r4);
}




u8 ov80_0222A9DC(void) {
    // add r2, r0, r2
    // ldrsb r1, [r0, r1]
    // add r0, #0x51
    // strb r1, [r0]
}




void ov80_0222AA0C(void) {
    // add r0, #0x80
    // add r0, #0x84
}




void FrontierSystem_deadstripped_0222AA3C(void) {
    // bx lr
    // TODO: decompile
}




void ov80_0222AA40(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // str r0, [r5]
    // str r0, [r4]
}




void ov80_0222AA7C(void) {
    // add r0, #0x52
    // add r3, #0x80
    // add r0, #0x80
    // str r4, [r0]
}




void * ov80_0222AAD8(void) {
    Heap_Alloc(r1, 0x10);
    // add r4, #0x24
    // ldrh r1, [r4]
    // strh r1, [r3]
}



void ov80_0222AAF8(void) {
}




void ov80_0222AB14(void) {
}




void * ov80_0222AB2C(void) {
    // add r0, #0x24
    // add r0, r0, r1
}



void FrontierSystem_GetFrontierMap(void) {
}



