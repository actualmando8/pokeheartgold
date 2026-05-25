/* Decompiled from asm/overlay_80_022384D8.s */
#include "global.h"

void ov80_022384D8(void) {
}




AnimContext ** ov80_022384FC(void) {
    Heap_Alloc(0x65, 0xc);
    MI_CpuFill8(0, 0xc);
    *((u32*)(r4 + 4)) = r5;
    *((u16*)(r4 + 8)) = 0;
    SysTask_CreateOnMainQueue(ov80_02238530, r4, 0x0001368C);
    // str r0, [r4]
}




void ov80_02238530(void) {
    // eor r0, r1
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, sp, #0xc
}




void ov80_0223857C(void) {
    // add r5, r0, r5
    // add r7, r6, r2
    // add r7, r3, r7
    // strh r7, [r5]
    // add r3, #0x10
}




void ov80_022385B0(void) {
}




void ov80_022385C4(void) {
}




u32 ov80_022385D8(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022385E8: ; jump table
}




u32 ov80_02238610(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02238620: ; jump table
}



