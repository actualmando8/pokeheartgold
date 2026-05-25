/* Decompiled from asm/overlay_80_02239960.s */
#include "global.h"

void ov80_02239960(void) {
    Heap_Alloc(0x24);
    MI_CpuFill8(0, 0x24);
    *((u16*)(r4 + 0x20)) = r5;
    sub_02014DA0();
}

void ov80_02239980(void) {
    /* Original at 0x02239980 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02239992\n    bl ov80_02239A98\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #8\n    blt _02239988\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_022399A4(void) {
    /* Original at 0x022399A4 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    lsl r6, r1, #2\n    ldr r0, [r5, r6]\n    add r7, r2, #0\n    str r3, [sp, #8]\n    cmp r0, #0\n    beq _022399BA\n    bl GF_AssertFail\n    ldrh r0, [r5, #0x20]\n    mov r1, #0x12\n    lsl r1, r1, #0xa\n    bl Heap_Alloc\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldrh r0, [r5, #0x20]\n    mov r3, #0x12\n    ldr r1, _02239A14 ; =ov80_02239AD4\n    str r0, [sp, #4]\n    ldr r0, _02239A18 ; =ov80_02239AB0\n    lsl r3, r3, #0xa\n    bl sub_02014DB4\n    add r4, r0, #0\n    bl sub_02015524\n    add r2, r0, #0\n    mov r0, #1\n    mov r1, #0xe1\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    ldr r1, [sp, #8]\n    add r0, r4, #0\n    bl sub_02015528\n    ldrh r2, [r5, #0x20]\n    mov r0, #0xbc\n    add r1, r7, #0\n    bl sub_02015264\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0xa\n    mov r3, #1\n    bl sub_0201526C\n    str r4, [r5, r6]\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02239A14: .word ov80_02239AD4\n    _02239A18: .word ov80_02239AB0"
    );
    #endif
}

void ov80_02239A1C(void) {
    /* Original at 0x02239A1C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    lsl r4, r1, #2\n    ldr r0, [r5, r4]\n    cmp r0, #0\n    bne _02239A2C\n    bl GF_AssertFail\n    ldr r0, [r5, r4]\n    bl ov80_02239A98\n    mov r0, #0\n    str r0, [r5, r4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_02239A38(void) {
    /* Original at 0x02239A38 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl Thunk_G3X_Reset\n    bl sub_02015420\n    cmp r0, #0\n    bne _02239A4A\n    mov r0, #0\n    pop {r3, pc}\n    bl sub_0201543C\n    cmp r0, #0\n    ble _02239A56\n    bl Thunk_G3X_Reset\n    bl sub_02015460\n    mov r0, #1\n    pop {r3, pc}"
    );
    #endif
}

void ov80_02239A60(void) {
    GF_AssertFail();
}

void ov80_02239A74(void) {
    /* Original at 0x02239A74 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02239A8C\n    bl sub_020154B0\n    cmp r0, #0\n    ble _02239A8C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #8\n    blt _02239A7A\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_02239A98(void) {
    sub_020154D0();
    sub_02014EBC(r5);
    Heap_Free(r4);
}

void ov80_02239AB0(void) {
    /* Original at 0x02239AB0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _02239AD0 ; =NNS_GfdDefaultFuncAllocTexVram\n    mov r2, #0\n    ldr r3, [r3]\n    blx r3\n    add r4, r0, #0\n    bne _02239AC2\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl sub_02015354\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0xd\n    pop {r4, pc}\n    nop\n    _02239AD0: .word NNS_GfdDefaultFuncAllocTexVram"
    );
    #endif
}

void ov80_02239AD4(void) {
    /* Original at 0x02239AD4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _02239AF4 ; =NNS_GfdDefaultFuncAllocPlttVram\n    mov r2, #1\n    ldr r3, [r3]\n    blx r3\n    add r4, r0, #0\n    bne _02239AE6\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl sub_02015394\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0xd\n    pop {r4, pc}\n    nop\n    _02239AF4: .word NNS_GfdDefaultFuncAllocPlttVram"
    );
    #endif
}
