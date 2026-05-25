/* Decompiled from asm/overlay_01_021FD41C.s */
#include "global.h"

void ov01_021FD41C(void) {
    /* Original at 0x021FD41C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x72\n    mov r2, #0\n    lsl r1, r1, #2\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r5, [r4, #0x20]\n    bl ov01_021FD5CC\n    add r0, r4, #0\n    bl ov01_021FD458\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FD440(void) {
    /* Original at 0x021FD440 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov01_021FD47C\n    add r0, r4, #0\n    bl ov01_021FD60C\n    add r0, r4, #0\n    bl ov01_021F1448\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FD458(void) {
    /* Original at 0x021FD458 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    bl ov01_021F1468\n    ldr r0, [r0, #0x3c]\n    bl MapObjectManager_GetPriority\n    sub r2, r0, #1\n    ldr r0, _021FD478 ; =ov01_021FD4F4\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #0x24]\n    pop {r4, pc}\n    nop\n    _021FD478: .word ov01_021FD4F4"
    );
    #endif
}

void ov01_021FD47C(void) {
    sub_0200E390();
}

void ov01_021FD488(void) {
    /* Original at 0x021FD488 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x14\n    add r3, r1, #0\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    bx lr"
    );
    #endif
}

void ov01_021FD498(void) {
    /* Original at 0x021FD498 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "asr r1, r0, #0xb\n    lsr r1, r1, #0x14\n    add r1, r0, r1\n    asr r0, r1, #0xc\n    bx lr"
    );
    #endif
}

void ov01_021FD4A4(void) {
    /* Original at 0x021FD4A4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #4]\n    lsl r2, r1, #2\n    ldr r1, _021FD4C8 ; =ov01_02208EB4\n    ldr r1, [r1, r2]\n    str r1, [r0, #0x10]\n    ldr r2, [r0, #4]\n    mov r1, #0xc\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _021FD4CC ; =ov01_02208F38\n    add r2, r0, #0\n    add r3, r1, r3\n    ldmia r3!, {r0, r1}\n    add r2, #0x14\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    bx lr\n    _021FD4C8: .word ov01_02208EB4\n    _021FD4CC: .word ov01_02208F38"
    );
    #endif
}

void ov01_021FD4D0(void) {
    /* Original at 0x021FD4D0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0]\n    cmp r3, r1\n    bge _021FD4E2\n    add r2, r3, r2\n    str r2, [r0]\n    cmp r2, r1\n    ble _021FD4F0\n    str r1, [r0]\n    bx lr\n    cmp r3, r1\n    ble _021FD4F0\n    sub r2, r3, r2\n    str r2, [r0]\n    cmp r2, r1\n    bge _021FD4F0\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021FD4F4(void) {
    /* Original at 0x021FD4F4 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    bl GF_RTC_GetTimeOfDay\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #0\n    beq _021FD512\n    cmp r1, #1\n    beq _021FD534\n    cmp r1, #2\n    beq _021FD53E\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    str r4, [r5, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FD4A4\n    ldr r0, [r5, #0x10]\n    bl ov01_021FD498\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021FD624\n    ldr r0, [r5]\n    add sp, #0x10\n    add r0, r0, #1\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #4]\n    cmp r0, r4\n    beq _021FD5C0\n    add r0, r1, #1\n    str r0, [r5]\n    ldr r0, _021FD5C4 ; =ov01_02208EB4\n    lsl r1, r4, #2\n    ldr r6, [r0, r1]\n    mov r0, #0xc\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, _021FD5C8 ; =ov01_02208F38\n    add r2, sp, #4\n    add r3, r0, r1\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, r5, #0\n    ldr r1, [sp, #4]\n    add r0, #0x14\n    mov r2, #0x10\n    bl ov01_021FD4D0\n    ldr r0, [sp, #8]\n    mov r2, #0x10\n    str r0, [sp]\n    add r0, r5, #0\n    ldr r1, [sp]\n    add r0, #0x18\n    bl ov01_021FD4D0\n    ldr r7, [sp, #0xc]\n    add r0, r5, #0\n    add r0, #0x1c\n    add r1, r7, #0\n    mov r2, #0x10\n    bl ov01_021FD4D0\n    add r0, r5, #0\n    mov r2, #2\n    add r0, #0x10\n    add r1, r6, #0\n    lsl r2, r2, #8\n    bl ov01_021FD4D0\n    ldr r0, [r5, #0x10]\n    bl ov01_021FD498\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021FD624\n    ldr r1, [sp, #4]\n    ldr r0, [r5, #0x14]\n    cmp r1, r0\n    bne _021FD5C0\n    ldr r1, [r5, #0x18]\n    ldr r0, [sp]\n    cmp r0, r1\n    bne _021FD5C0\n    ldr r0, [r5, #0x1c]\n    cmp r7, r0\n    bne _021FD5C0\n    ldr r0, [r5, #0x10]\n    cmp r6, r0\n    bne _021FD5C0\n    str r4, [r5, #4]\n    mov r0, #1\n    str r0, [r5]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FD5C4: .word ov01_02208EB4\n    _021FD5C8: .word ov01_02208F38"
    );
    #endif
}

void ov01_021FD5CC(void) {
    /* Original at 0x021FD5CC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r5, r0, #0\n    ldr r6, _021FD608 ; =ov01_02208E90\n    str r0, [sp, #4]\n    mov r7, #0\n    add r4, #0x28\n    add r5, #0x78\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r3, [r6]\n    ldr r0, [r0, #0x20]\n    add r1, r4, #0\n    mov r2, #0\n    bl ov01_021F19F4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02069978\n    add r7, r7, #1\n    add r6, r6, #4\n    add r4, #0x14\n    add r5, #0x54\n    cmp r7, #4\n    blt _021FD5DE\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FD608: .word ov01_02208E90"
    );
    #endif
}

void ov01_021FD60C(void) {
    sub_02069784(0);
}

void ov01_021FD624(void) {
    /* Original at 0x021FD624 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r2, #0x1f\n    add r4, r1, #0\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    lsl r2, r2, #0x10\n    bl NNSi_G3dModifyPolygonAttrMask\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    bl NNS_G3dMdlSetMdlAlphaAll\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FD640(void) {
    /* Original at 0x021FD640 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    mov r1, #0\n    str r4, [sp, #0x14]\n    bl ov01_021F1450\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    add r1, sp, #8\n    str r5, [sp, #0x1c]\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0x14\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021FD680 ; =ov01_02208EA0\n    add r0, r4, #0\n    add r2, sp, #8\n    mov r3, #0\n    bl ov01_021F1620\n    add sp, #0x20\n    pop {r3, r4, r5, pc}\n    nop\n    _021FD680: .word ov01_02208EA0"
    );
    #endif
}

void ov01_021FD684(void) {
    /* Original at 0x021FD684 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    mov r1, #0\n    str r4, [sp, #0x14]\n    bl ov01_021F1450\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    add r1, sp, #8\n    str r5, [sp, #0x1c]\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0x14\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021FD6C4 ; =ov01_02208EC8\n    add r0, r4, #0\n    add r2, sp, #8\n    mov r3, #3\n    bl ov01_021F1620\n    add sp, #0x20\n    pop {r3, r4, r5, pc}\n    nop\n    _021FD6C4: .word ov01_02208EC8"
    );
    #endif
}

void ov01_021FD6C8(void) {
    /* Original at 0x021FD6C8 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r0, #0\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x14\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, r5, #0\n    bl sub_02068D90\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #0x1c]\n    bl MapObject_GetSpriteID\n    str r0, [r4]\n    ldr r0, [r4, #0x1c]\n    bl MapObject_GetID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x1c]\n    bl MapObject_CheckFlag25\n    cmp r0, #1\n    ldr r0, [r4, #0x1c]\n    bne _021FD70A\n    bl sub_0205F544\n    b _021FD70E\n    bl MapObject_GetMapID\n    str r0, [r4, #8]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FD714(void) {
    /* Original at 0x021FD714 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021FD718(void) {
    /* Original at 0x021FD718 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r6, [r4, #0x1c]\n    ldr r1, [r4]\n    add r5, r0, #0\n    ldr r2, [r4, #4]\n    ldr r3, [r4, #8]\n    add r0, r6, #0\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _021FD73C\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    add r0, r6, #0\n    mov r1, #8\n    bl sub_0205F5E8\n    cmp r0, #0\n    beq _021FD752\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    str r0, [r4, #0xc]\n    ldr r1, _021FD780 ; =0x00100200\n    add r0, r6, #0\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021FD76A\n    mov r0, #1\n    add sp, #0xc\n    str r0, [r4, #0xc]\n    pop {r3, r4, r5, r6, pc}\n    add r0, r6, #0\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021FD780: .word 0x00100200"
    );
    #endif
}

void ov01_021FD784(void) {
    /* Original at 0x021FD784 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r0, #0\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x14\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, r5, #0\n    bl sub_02068D90\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #0x1c]\n    bl MapObject_GetSpriteID\n    str r0, [r4]\n    ldr r0, [r4, #0x1c]\n    bl MapObject_GetID\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x1c]\n    bl MapObject_CheckFlag25\n    cmp r0, #1\n    ldr r0, [r4, #0x1c]\n    bne _021FD7C6\n    bl sub_0205F544\n    b _021FD7CA\n    bl MapObject_GetMapID\n    str r0, [r4, #8]\n    mov r0, #1\n    str r0, [r4, #0xc]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FD7D4(void) {
    /* Original at 0x021FD7D4 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x3c\n    add r2, r1, #0\n    add r4, r0, #0\n    ldr r0, [r2, #0xc]\n    cmp r0, #0\n    bne _021FD82E\n    ldr r6, _021FD834 ; =ov01_02208F14\n    add r5, sp, #0\n    mov r3, #4\n    ldmia r6!, {r0, r1}\n    stmia r5!, {r0, r1}\n    sub r3, r3, #1\n    bne _021FD7E8\n    ldr r0, [r6]\n    add r1, sp, #0x24\n    str r0, [r5]\n    ldr r5, [r2, #0x18]\n    add r0, r5, #0\n    bl ov01_021FD488\n    add r0, r4, #0\n    add r1, sp, #0x30\n    bl sub_02068DB8\n    mov r0, #2\n    ldr r1, [sp, #0x30]\n    lsl r0, r0, #0xa\n    sub r1, r1, r0\n    str r1, [sp, #0x30]\n    lsl r1, r0, #3\n    ldr r2, [sp, #0x34]\n    lsl r0, r0, #1\n    sub r1, r2, r1\n    str r1, [sp, #0x34]\n    ldr r1, [sp, #0x38]\n    add r5, #0x78\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    add r0, r5, #0\n    add r1, sp, #0x30\n    add r2, sp, #0x24\n    add r3, sp, #0\n    bl sub_020699AC\n    add sp, #0x3c\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021FD834: .word ov01_02208F14"
    );
    #endif
}

void ov01_021FD838(void) {
    /* Original at 0x021FD838 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x48\n    add r2, r1, #0\n    add r6, r0, #0\n    ldr r0, [r2, #0xc]\n    cmp r0, #0\n    bne _021FD8E0\n    ldr r5, _021FD8E4 ; =ov01_02208EF0\n    add r4, sp, #0xc\n    mov r3, #4\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    sub r3, r3, #1\n    bne _021FD84C\n    ldr r0, [r5]\n    add r1, sp, #0x30\n    str r0, [r4]\n    ldr r0, [r2, #0x18]\n    ldr r4, [r2, #0x1c]\n    add r5, r0, #0\n    add r5, #0x78\n    bl ov01_021FD488\n    add r0, r4, #0\n    bl ov01_021F8F88\n    cmp r0, #0\n    add r1, sp, #0x3c\n    beq _021FD8A0\n    add r0, r6, #0\n    bl sub_02068DB8\n    mov r0, #2\n    ldr r1, [sp, #0x3c]\n    lsl r0, r0, #0xa\n    sub r1, r1, r0\n    str r1, [sp, #0x3c]\n    lsl r1, r0, #3\n    ldr r2, [sp, #0x40]\n    lsl r0, r0, #1\n    sub r1, r2, r1\n    str r1, [sp, #0x40]\n    ldr r1, [sp, #0x44]\n    add r0, r1, r0\n    str r0, [sp, #0x44]\n    add r0, r4, #0\n    bl MapObject_GetFacingDirection\n    add r1, sp, #0x3c\n    bl ov01_021FD9CC\n    b _021FD8D4\n    add r0, r4, #0\n    bl MapObject_CopyPositionVector\n    add r0, r4, #0\n    add r1, sp, #0\n    bl ov01_021F8FA0\n    ldr r1, [sp, #0x3c]\n    ldr r0, [sp]\n    ldr r3, [sp, #0x40]\n    add r2, r1, r0\n    ldr r1, [sp, #0x44]\n    ldr r0, [sp, #8]\n    str r2, [sp, #0x3c]\n    add r0, r1, r0\n    mov r1, #2\n    lsl r1, r1, #0xa\n    sub r2, r2, r1\n    str r2, [sp, #0x3c]\n    lsl r2, r1, #3\n    sub r2, r3, r2\n    lsl r1, r1, #1\n    str r0, [sp, #0x44]\n    add r0, r0, r1\n    str r2, [sp, #0x40]\n    str r0, [sp, #0x44]\n    add r0, r5, #0\n    add r1, sp, #0x3c\n    add r2, sp, #0x30\n    add r3, sp, #0xc\n    bl sub_020699AC\n    add sp, #0x48\n    pop {r4, r5, r6, pc}\n    _021FD8E4: .word ov01_02208EF0"
    );
    #endif
}

void ov01_021FD8E8(void) {
    /* Original at 0x021FD8E8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F146C\n    add r6, r0, #0\n    mov r1, #0\n    str r6, [sp, #0x14]\n    bl ov01_021F1450\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    add r1, sp, #8\n    str r5, [sp, #0x1c]\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #0x14\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r1, _021FD928 ; =ov01_02208EDC\n    add r0, r6, #0\n    add r2, sp, #8\n    add r3, r4, #0\n    bl ov01_021F1620\n    add sp, #0x20\n    pop {r4, r5, r6, pc}\n    _021FD928: .word ov01_02208EDC"
    );
    #endif
}

void ov01_021FD92C(void) {
    /* Original at 0x021FD92C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r6, [r4, #0x1c]\n    ldr r1, [r4]\n    add r5, r0, #0\n    ldr r2, [r4, #4]\n    ldr r3, [r4, #8]\n    add r0, r6, #0\n    bl sub_0205F0F8\n    cmp r0, #0\n    bne _021FD950\n    add r0, r5, #0\n    bl ov01_021F1640\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    str r0, [r4, #0xc]\n    ldr r1, _021FD97C ; =0x00100200\n    add r0, r6, #0\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021FD968\n    mov r0, #1\n    add sp, #0xc\n    str r0, [r4, #0xc]\n    pop {r3, r4, r5, r6, pc}\n    add r0, r6, #0\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DA8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _021FD97C: .word 0x00100200"
    );
    #endif
}

void ov01_021FD980(void) {
    /* Original at 0x021FD980 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r1, [r4, #0xc]\n    add r6, r0, #0\n    cmp r1, #1\n    beq _021FD9C6\n    bl sub_02068D90\n    ldr r5, [r4, #0x18]\n    add r4, r0, #0\n    mov r1, #0x54\n    mul r4, r1\n    add r0, r6, #0\n    add r1, sp, #0\n    add r5, #0x78\n    bl sub_02068DB8\n    mov r0, #2\n    ldr r1, [sp]\n    lsl r0, r0, #0xa\n    sub r1, r1, r0\n    str r1, [sp]\n    lsl r1, r0, #3\n    ldr r2, [sp, #4]\n    lsl r0, r0, #1\n    sub r1, r2, r1\n    str r1, [sp, #4]\n    ldr r1, [sp, #8]\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r1, sp, #0\n    bl sub_020699BC\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FD9CC(void) {
    /* Original at 0x021FD9CC */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #3\n    bhi _021FDA12\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FD9DC: ; jump table\n    mov r0, #2\n    ldr r2, [r1, #8]\n    lsl r0, r0, #0xc\n    add r0, r2, r0\n    str r0, [r1, #8]\n    bx lr\n    mov r0, #2\n    ldr r2, [r1, #8]\n    lsl r0, r0, #0xc\n    sub r0, r2, r0\n    str r0, [r1, #8]\n    bx lr\n    mov r0, #6\n    ldr r2, [r1]\n    lsl r0, r0, #0xc\n    add r0, r2, r0\n    str r0, [r1]\n    bx lr\n    mov r0, #6\n    ldr r2, [r1]\n    lsl r0, r0, #0xc\n    sub r0, r2, r0\n    str r0, [r1]\n    bx lr"
    );
    #endif
}
