/* Decompiled from asm/overlay_01_021FF6B0.s */
#include "global.h"

void ov01_021FF6B0(void) {
    /* Original at 0x021FF6B0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    mov r1, #4\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r5, [r4]\n    bl ov01_021FF6DC\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FF6CC(void) {
    ov01_021FF724();
    ov01_021F1448(r4);
}

void ov01_021FF6DC(void) {
    /* Original at 0x021FF6DC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #6\n    mov r2, #0x79\n    bl ov01_021F18D4\n    ldr r0, [r4]\n    mov r1, #6\n    mov r2, #0x91\n    bl ov01_021F1908\n    ldr r0, [r4]\n    mov r1, #7\n    mov r2, #0x14\n    mov r3, #1\n    bl ov01_021F1930\n    mov r0, #7\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021FF720 ; =ov01_02209200\n    mov r2, #6\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    mov r1, #8\n    add r3, r2, #0\n    bl ov01_021F1758\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _021FF720: .word ov01_02209200"
    );
    #endif
}

void ov01_021FF724(void) {
    /* Original at 0x021FF724 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #6\n    bl ov01_021F18FC\n    ldr r0, [r4]\n    mov r1, #6\n    bl ov01_021F1924\n    ldr r0, [r4]\n    mov r1, #7\n    bl ov01_021F1970\n    ldr r0, [r4]\n    mov r1, #8\n    bl ov01_021F18C8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FF74C(void) {
    /* Original at 0x021FF74C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    mov r1, #0xb\n    str r4, [sp, #0x18]\n    bl ov01_021F1450\n    str r0, [sp, #0x1c]\n    add r0, r5, #0\n    add r1, sp, #8\n    str r5, [sp, #0x20]\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r1, r0, #0\n    add r0, r6, #0\n    add r2, sp, #8\n    bl sub_020611C8\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0x14\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021FF7AC ; =ov01_022091EC\n    add r0, r4, #0\n    add r2, sp, #8\n    mov r3, #0\n    bl ov01_021F1620\n    add sp, #0x24\n    pop {r3, r4, r5, r6, pc}\n    _021FF7AC: .word ov01_022091EC"
    );
    #endif
}

void ov01_021FF7B0(void) {
    /* Original at 0x021FF7B0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    bl sub_02068D98\n    add r2, r4, #0\n    add r3, r0, #0\n    add r2, #0x10\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4, #0x1c]\n    bl MapObject_GetID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x1c]\n    bl MapObject_GetMapID\n    str r0, [r4, #8]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x14]\n    mov r1, #8\n    add r2, sp, #0\n    bl ov01_021F1740\n    str r0, [r4, #0x20]\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_021FF7F4(void) {
    sub_02023DA4();
}

void ov01_021FF800(void) {
    /* Original at 0x021FF800 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    bne _021FF82E\n    mov r1, #1\n    ldr r0, [r4, #0x20]\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    ldr r0, [r4, #0x20]\n    bl sub_02023F70\n    asr r1, r0, #0xb\n    lsr r1, r1, #0x14\n    add r1, r0, r1\n    asr r0, r1, #0xc\n    cmp r0, #9\n    blt _021FF82E\n    add r0, r5, #0\n    bl ov01_021F1640\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FF830(void) {
    /* Original at 0x021FF830 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    mov r0, #2\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x20]\n    add r1, sp, #0\n    bl sub_02023E50\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}
