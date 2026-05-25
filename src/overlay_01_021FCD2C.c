/* Decompiled from asm/overlay_01_021FCD2C.s */
#include "global.h"

void ov01_021FCD2C(void) {
    /* Original at 0x021FCD2C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #0x34\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x34\n    bl memset\n    str r6, [r4]\n    mov r0, #0\n    str r0, [r4, #0xc]\n    str r5, [r4, #0x2c]\n    ldr r0, [r5, #0x24]\n    str r0, [r4, #0x30]\n    bl Camera_GetDistance\n    str r0, [r4, #0x10]\n    str r0, [r4, #0x20]\n    ldr r0, _021FCD64 ; =ov01_021FCDA8\n    ldr r2, _021FCD68 ; =0x0000FFFF\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    pop {r4, r5, r6, pc}\n    _021FCD64: .word ov01_021FCDA8\n    _021FCD68: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021FCD6C(void) {
    SysTask_GetData();
}

void ov01_021FCD78(void) {
    /* Original at 0x021FCD78 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl SysTask_GetData\n    bl Heap_Free\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FCD8C(void) {
    SysTask_GetData(0);
}

void ov01_021FCDA8(void) {
    /* Original at 0x021FCDA8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r0, r1, #0\n    ldr r1, [r1, #0xc]\n    lsl r2, r1, #2\n    ldr r1, _021FCDB8 ; =ov01_02208E0C\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r3, pc}\n    _021FCDB8: .word ov01_02208E0C"
    );
    #endif
}

void ov01_021FCDBC(void) {
    /* Original at 0x021FCDBC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    str r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov01_021FCDC4(void) {
    /* Original at 0x021FCDC4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #0\n    beq _021FCDD4\n    cmp r1, #1\n    beq _021FCDDE\n    pop {r4, pc}\n    bl ov01_021FCE44\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    add r0, r4, #0\n    bl ov01_021FCE74\n    cmp r0, #1\n    bne _021FCDF2\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    mov r0, #1\n    str r0, [r4, #8]\n    add r0, r4, #0\n    bl ov01_021FCE34\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FCDFC(void) {
    /* Original at 0x021FCDFC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #0\n    beq _021FCE0C\n    cmp r1, #1\n    beq _021FCE16\n    pop {r4, pc}\n    bl ov01_021FCE5C\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    add r0, r4, #0\n    bl ov01_021FCE74\n    cmp r0, #1\n    bne _021FCE2A\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    mov r0, #1\n    str r0, [r4, #8]\n    add r0, r4, #0\n    bl ov01_021FCE34\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FCE34(void) {
    /* Original at 0x021FCE34 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021FCE40 ; =Camera_SetDistance\n    add r1, r0, #0\n    ldr r0, [r1, #0x20]\n    ldr r1, [r1, #0x30]\n    bx r3\n    nop\n    _021FCE40: .word Camera_SetDistance"
    );
    #endif
}

void ov01_021FCE44(void) {
    _s32_div_f();
}

void ov01_021FCE5C(void) {
    _s32_div_f();
}

void ov01_021FCE74(void) {
    /* Original at 0x021FCE74 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #0x20]\n    ldr r1, [r0, #0x28]\n    add r1, r2, r1\n    str r1, [r0, #0x20]\n    ldr r1, [r0, #0x24]\n    add r2, r1, #1\n    str r2, [r0, #0x24]\n    ldr r1, [r0, #0x1c]\n    cmp r2, r1\n    blo _021FCE92\n    str r1, [r0, #0x24]\n    ldr r1, [r0, #0x18]\n    str r1, [r0, #0x20]\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}
