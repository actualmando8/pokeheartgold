/* Decompiled from asm/overlay_01_022006A8.s */
#include "global.h"

void ov01_022006A8(void) {
    /* Original at 0x022006A8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    mov r1, #4\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r5, [r4]\n    bl ov01_022006D4\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_022006C4(void) {
    ov01_02200710();
    ov01_021F1448(r4);
}

void ov01_022006D4(void) {
    /* Original at 0x022006D4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #4\n    mov r2, #0x78\n    bl ov01_021F18D4\n    ldr r0, [r4]\n    mov r1, #3\n    mov r2, #0x13\n    mov r3, #1\n    bl ov01_021F1930\n    mov r0, #3\n    str r0, [sp]\n    mov r3, #0\n    mov r1, #4\n    ldr r0, _0220070C ; =ov01_0220931C\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    add r2, r1, #0\n    bl ov01_021F1758\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0220070C: .word ov01_0220931C"
    );
    #endif
}

void ov01_02200710(void) {
    /* Original at 0x02200710 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #4\n    bl ov01_021F18FC\n    ldr r0, [r4]\n    mov r1, #3\n    bl ov01_021F1970\n    ldr r0, [r4]\n    mov r1, #4\n    bl ov01_021F18C8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_02200730(void) {
    /* Original at 0x02200730 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    mov r1, #0x15\n    str r4, [sp, #0x18]\n    bl ov01_021F1450\n    str r0, [sp, #0x1c]\n    add r1, sp, #8\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    add r0, r5, #0\n    mov r1, #2\n    str r5, [sp, #0x20]\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0x14\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _0220077C ; =ov01_02209308\n    add r0, r4, #0\n    add r2, sp, #8\n    mov r3, #0\n    bl ov01_021F1620\n    add sp, #0x24\n    pop {r4, r5, pc}\n    nop\n    _0220077C: .word ov01_02209308"
    );
    #endif
}

void ov01_02200780(void) {
    /* Original at 0x02200780 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r2, sp, #0\n    mov r1, #0\n    str r1, [r2]\n    str r1, [r2, #4]\n    add r5, r0, #0\n    str r1, [r2, #8]\n    bl sub_02068D98\n    add r2, r4, #0\n    add r3, r0, #0\n    add r2, #0x10\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4, #0x1c]\n    bl MapObject_GetID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x1c]\n    bl MapObject_GetMapID\n    str r0, [r4, #8]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0x14]\n    mov r1, #4\n    add r2, sp, #0\n    bl ov01_021F1740\n    str r0, [r4, #0x20]\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_022007D0(void) {
    sub_02023DA4();
}

void ov01_022007DC(void) {
    /* Original at 0x022007DC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r2, r1, #0\n    add r4, r0, #0\n    ldr r0, [r2, #0x1c]\n    ldr r1, [r2, #4]\n    ldr r2, [r2, #8]\n    bl sub_0205F0A8\n    cmp r0, #0\n    bne _022007F6\n    add r0, r4, #0\n    bl ov01_021F1640\n    pop {r4, pc}"
    );
    #endif
}

void ov01_022007F8(void) {
    /* Original at 0x022007F8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    ldr r4, [r5, #0x1c]\n    ldr r1, [r5, #4]\n    add r6, r0, #0\n    ldr r2, [r5, #8]\n    add r0, r4, #0\n    bl sub_0205F0A8\n    cmp r0, #0\n    bne _0220081A\n    add r0, r6, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r1, sp, #0xc\n    bl MapObject_CopyPositionVector\n    add r0, r4, #0\n    add r1, sp, #0\n    bl MapObject_CopyFacingVector\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp]\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r0, [sp, #4]\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #8]\n    add r1, r1, r0\n    mov r0, #3\n    lsl r0, r0, #0xe\n    str r1, [sp, #0x14]\n    add r0, r1, r0\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x20]\n    add r1, sp, #0xc\n    bl sub_02023E50\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}
