/* Decompiled from asm/overlay_80_022384D8.s */
#include "global.h"

void ov80_022384D8(void) {
}



void ov80_022384FC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x65
    // mov r1, #0xc
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0xc
    // bl MI_CpuFill8
    // str r5, [r4, #4]
    // mov r0, #0
    // strh r0, [r4, #8]
    // ldr r0, _02238528 ; =ov80_02238530
    // ldr r2, _0223852C ; =0x0001368C
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _02238528: .word ov80_02238530
    // _0223852C: .word 0x0001368C
    // TODO: decompile
}



void ov80_02238530(void) {
    *((u16*)(r1 + 0xa)) = (*((u16*)(r1 + 0xa)) + 1);
    *((u16*)(r1 + 0xa)) = 0;
    // eor r0, r1
    *((u16*)(r1 + 8)) = 1;
    // add r0, sp, #0xc
    ov80_0223857C(1, ((*((u16*)(r1 + 8)) << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, sp, #0xc
    LoadRectToBgTilemapRect(*((u32*)(r4 + 4)), 3, 0xe);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 4)), 3);
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


