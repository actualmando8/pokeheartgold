/* Decompiled from asm/overlay_80_022384D8.s */
#include "global.h"

void ov80_022384D8(void) {
    Heap_Alloc(0x65, 8);
    MI_CpuFill8(0, 8);
    ov80_022384FC(r5);
    *((u32*)(r4 + 4)) = r0;
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
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r1, #0
    // ldrh r0, [r4, #0xa]
    // cmp r0, #2
    // bhs _02238544
    // add r0, r0, #1
    // add sp, #0x14
    // strh r0, [r4, #0xa]
    // pop {r3, r4, pc}
    // mov r0, #0
    // strh r0, [r4, #0xa]
    // ldrh r1, [r4, #8]
    // mov r0, #1
    // eor r0, r1
    // strh r0, [r4, #8]
    // ldrh r1, [r4, #8]
    // add r0, sp, #0xc
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov80_0223857C
    // mov r0, #2
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r4, #4]
    // mov r1, #3
    // add r2, sp, #0xc
    // mov r3, #0xe
    // bl LoadRectToBgTilemapRect
    // ldr r0, [r4, #4]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x14
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov80_0223857C(void) {
    // push {r4, r5, r6, r7}
    // cmp r1, #0
    // bne _02238586
    // mov r6, #0xc
    // b _02238588
    // mov r6, #0xe
    // mov r1, #0
    // mov r3, #0x60
    // add r4, r1, #0
    // lsl r5, r4, #1
    // mov r2, #0
    // add r5, r0, r5
    // add r7, r6, r2
    // add r7, r3, r7
    // strh r7, [r5]
    // add r2, r2, #1
    // add r5, r5, #2
    // cmp r2, #2
    // blo _02238594
    // add r1, r1, #1
    // add r3, #0x10
    // add r4, r4, #2
    // cmp r1, #2
    // blo _0223858E
    // pop {r4, r5, r6, r7}
    // bx lr
    // TODO: decompile
}


void ov80_022385B0(void) {
    ov80_022385C4(*((u32*)(r0 + 4)));
    Heap_Free(r4);
}


void ov80_022385C4(void) {
    SysTask_Destroy();
    Heap_Free(r4);
}


void ov80_022385D8(void) {
    // cmp r0, #6
    // bhi _0223860C
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022385E8: ; jump table
    // mov r0, #0x73
    // bx lr
    // mov r0, #0x77
    // bx lr
    // mov r0, #0x87
    // bx lr
    // mov r0, #0x7b
    // bx lr
    // mov r0, #0x8f
    // bx lr
    // mov r0, #0x71
    // bx lr
    // TODO: decompile
}


void ov80_02238610(void) {
    // cmp r0, #6
    // bhi _02238644
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02238620: ; jump table
    // mov r0, #0x66
    // bx lr
    // mov r0, #0x68
    // bx lr
    // mov r0, #0x6c
    // bx lr
    // mov r0, #0x6a
    // bx lr
    // mov r0, #0x6e
    // bx lr
    // mov r0, #0x64
    // bx lr
    // TODO: decompile
}

