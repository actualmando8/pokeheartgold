/* Decompiled from asm/overlay_80_022384D8.s */
#include "global.h"

void ov80_022384D8(void) {
    Heap_Alloc(0x65, 8);
    MI_CpuFill8(0, 8);
    ov80_022384FC(r5);
    *((u32*)(r4 + 4)) = r0;
}

void ov80_022384FC(void) {
    /* Original at 0x022384FC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x65\n    mov r1, #0xc\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0xc\n    bl MI_CpuFill8\n    str r5, [r4, #4]\n    mov r0, #0\n    strh r0, [r4, #8]\n    ldr r0, _02238528 ; =ov80_02238530\n    ldr r2, _0223852C ; =0x0001368C\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _02238528: .word ov80_02238530\n    _0223852C: .word 0x0001368C"
    );
    #endif
}

void ov80_02238530(void) {
    /* Original at 0x02238530 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    ldrh r0, [r4, #0xa]\n    cmp r0, #2\n    bhs _02238544\n    add r0, r0, #1\n    add sp, #0x14\n    strh r0, [r4, #0xa]\n    pop {r3, r4, pc}\n    mov r0, #0\n    strh r0, [r4, #0xa]\n    ldrh r1, [r4, #8]\n    mov r0, #1\n    eor r0, r1\n    strh r0, [r4, #8]\n    ldrh r1, [r4, #8]\n    add r0, sp, #0xc\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov80_0223857C\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    mov r1, #3\n    add r2, sp, #0xc\n    mov r3, #0xe\n    bl LoadRectToBgTilemapRect\n    ldr r0, [r4, #4]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x14\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov80_0223857C(void) {
    /* Original at 0x0223857C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    cmp r1, #0\n    bne _02238586\n    mov r6, #0xc\n    b _02238588\n    mov r6, #0xe\n    mov r1, #0\n    mov r3, #0x60\n    add r4, r1, #0\n    lsl r5, r4, #1\n    mov r2, #0\n    add r5, r0, r5\n    add r7, r6, r2\n    add r7, r3, r7\n    strh r7, [r5]\n    add r2, r2, #1\n    add r5, r5, #2\n    cmp r2, #2\n    blo _02238594\n    add r1, r1, #1\n    add r3, #0x10\n    add r4, r4, #2\n    cmp r1, #2\n    blo _0223858E\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
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
    /* Original at 0x022385D8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #6\n    bhi _0223860C\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022385E8: ; jump table\n    mov r0, #0x73\n    bx lr\n    mov r0, #0x77\n    bx lr\n    mov r0, #0x87\n    bx lr\n    mov r0, #0x7b\n    bx lr\n    mov r0, #0x8f\n    bx lr\n    mov r0, #0x71\n    bx lr"
    );
    #endif
}

void ov80_02238610(void) {
    /* Original at 0x02238610 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #6\n    bhi _02238644\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02238620: ; jump table\n    mov r0, #0x66\n    bx lr\n    mov r0, #0x68\n    bx lr\n    mov r0, #0x6c\n    bx lr\n    mov r0, #0x6a\n    bx lr\n    mov r0, #0x6e\n    bx lr\n    mov r0, #0x64\n    bx lr"
    );
    #endif
}
