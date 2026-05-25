/* Decompiled from asm/overlay_01_021FF464.s */
#include "global.h"

void ov01_021FF464(void) {
    /* Original at 0x021FF464 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    mov r1, #4\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r5, [r4]\n    bl ov01_021FF490\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FF480(void) {
    /* Original at 0x021FF480 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov01_021FF4D4\n    add r0, r4, #0\n    bl ov01_021F1448\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FF490(void) {
    /* Original at 0x021FF490 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #3\n    mov r2, #0x77\n    bl ov01_021F18D4\n    ldr r0, [r4]\n    mov r1, #2\n    mov r2, #0x90\n    bl ov01_021F1908\n    ldr r0, [r4]\n    mov r1, #2\n    mov r2, #0x12\n    mov r3, #1\n    bl ov01_021F1930\n    mov r3, #2\n    mov r1, #3\n    str r3, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021FF4D0 ; =ov01_022091D4\n    add r2, r1, #0\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    bl ov01_021F1758\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021FF4D0: .word ov01_022091D4"
    );
    #endif
}

void ov01_021FF4D4(void) {
    /* Original at 0x021FF4D4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #3\n    bl ov01_021F18FC\n    ldr r0, [r4]\n    mov r1, #2\n    bl ov01_021F1924\n    ldr r0, [r4]\n    mov r1, #2\n    bl ov01_021F1970\n    ldr r0, [r4]\n    mov r1, #3\n    bl ov01_021F18C8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FF4FC(void) {
    /* Original at 0x021FF4FC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    add r6, r1, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    mov r1, #0xa\n    str r4, [sp, #0x18]\n    bl ov01_021F1450\n    str r0, [sp, #0x1c]\n    add r1, sp, #8\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    add r0, r5, #0\n    mov r1, #2\n    str r5, [sp, #0x20]\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0x14\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021FF548 ; =ov01_022091C0\n    add r0, r4, #0\n    add r2, sp, #8\n    add r3, r6, #0\n    bl ov01_021F1620\n    add sp, #0x24\n    pop {r3, r4, r5, r6, pc}\n    _021FF548: .word ov01_022091C0"
    );
    #endif
}

void ov01_021FF54C(void) {
    /* Original at 0x021FF54C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r2, sp, #0\n    mov r1, #0\n    str r1, [r2]\n    str r1, [r2, #4]\n    add r5, r0, #0\n    str r1, [r2, #8]\n    bl sub_02068D98\n    add r2, r4, #0\n    add r3, r0, #0\n    add r2, #0x14\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4, #0x20]\n    bl MapObject_GetSpriteID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x20]\n    bl MapObject_GetID\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x20]\n    bl MapObject_GetMapID\n    str r0, [r4, #0xc]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    ldr r0, [r4, #0x18]\n    mov r1, #3\n    add r2, sp, #0\n    bl ov01_021F1740\n    str r0, [r4, #0x24]\n    mov r1, #2\n    ldr r0, [r4, #0x20]\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021FF5B2\n    ldr r0, [r4, #0x24]\n    mov r1, #0\n    bl sub_02023EA4\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_021FF5B8(void) {
    sub_02023DA4();
}

void ov01_021FF5C4(void) {
    /* Original at 0x021FF5C4 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    ldr r6, [r4, #0x20]\n    ldr r1, [r4, #4]\n    add r5, r0, #0\n    ldr r2, [r4, #8]\n    ldr r3, [r4, #0xc]\n    add r0, r6, #0\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _021FF5E4\n    add r0, r5, #0\n    bl ov01_021F1640\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl sub_02068D90\n    add r7, r0, #0\n    cmp r7, #1\n    bne _021FF602\n    add r0, r6, #0\n    bl MapObject_CheckFlag26\n    cmp r0, #0\n    bne _021FF602\n    add r0, r5, #0\n    bl ov01_021F1640\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #2\n    add r0, r6, #0\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    ldr r0, [r4, #0x24]\n    bne _021FF61A\n    mov r1, #0\n    bl sub_02023EA4\n    b _021FF620\n    mov r1, #1\n    bl sub_02023EA4\n    ldr r0, [r4]\n    cmp r0, #0\n    bne _021FF656\n    mov r1, #1\n    ldr r0, [r4, #0x24]\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    ldr r0, [r4, #0x24]\n    bl sub_02023F70\n    asr r1, r0, #0xb\n    lsr r1, r1, #0x14\n    add r1, r0, r1\n    asr r0, r1, #0xc\n    cmp r0, #0xc\n    blt _021FF656\n    cmp r7, #0\n    bne _021FF64E\n    add r0, r5, #0\n    bl ov01_021F1640\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4, #0x24]\n    mov r1, #0\n    bl sub_02023F1C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FF658(void) {
    /* Original at 0x021FF658 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    ldr r4, [r5, #0x20]\n    ldr r1, [r5, #4]\n    add r6, r0, #0\n    ldr r2, [r5, #8]\n    ldr r3, [r5, #0xc]\n    add r0, r4, #0\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _021FF67C\n    add r0, r6, #0\n    bl ov01_021F1640\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r1, sp, #0xc\n    bl MapObject_CopyPositionVector\n    add r0, r4, #0\n    add r1, sp, #0\n    bl MapObject_CopyFacingVector\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp]\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #8]\n    add r1, r1, r0\n    mov r0, #2\n    lsl r0, r0, #0xe\n    str r1, [sp, #0x14]\n    add r0, r1, r0\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x24]\n    add r1, sp, #0xc\n    bl sub_02023E50\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}
