/* Decompiled from asm/unk_02012DD8.s */
#include "global.h"

void sub_02012DD8(void) {
    /* Original at 0x02012DD8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r4, r1, #0\n    mov r1, #0x4c\n    bl Heap_Alloc\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x20]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x14]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    bl sub_02012E6C\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02012E10(void) {
    /* Original at 0x02012E10 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    ldr r4, [r5, #0x14]\n    cmp r0, #1\n    beq _02012E28\n    cmp r0, #2\n    beq _02012E44\n    cmp r0, #3\n    beq _02012E5E\n    b _02012E62\n    add r0, r4, #0\n    bl sub_02012F54\n    cmp r0, #1\n    bne _02012E66\n    ldr r0, [r4, #0x34]\n    ldr r1, [r4, #0x44]\n    ldr r2, [r5, #0x10]\n    bl sub_02010F34\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02012E66\n    add r0, r4, #0\n    bl sub_02010EC8\n    ldr r0, [r5, #0x14]\n    bl Heap_Free\n    add r0, r6, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r6, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02012E66\n    mov r6, #1\n    b _02012E66\n    bl GF_AssertFail\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02012E6C(void) {
    /* Original at 0x02012E6C */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r4, r1, #0\n    ldr r6, [sp, #0x38]\n    str r3, [sp, #0x1c]\n    str r2, [sp, #0x18]\n    ldrb r1, [r4, #8]\n    ldr r3, [sp, #0x44]\n    add r2, r6, #0\n    add r5, r0, #0\n    ldr r7, [sp, #0x3c]\n    bl sub_02010E64\n    ldr r0, _02012F44 ; =0x007FFF80\n    mov r1, #0\n    str r0, [r5, #0x14]\n    ldrsh r1, [r4, r1]\n    lsr r0, r0, #7\n    str r1, [r5, #0xc]\n    mov r1, #2\n    ldrsh r1, [r4, r1]\n    str r1, [r5, #0x10]\n    ldr r1, [r4, #4]\n    str r1, [r5, #0x18]\n    ldr r1, [r4, #4]\n    str r1, [r5, #0x1c]\n    ldr r1, [sp, #0x18]\n    bl _s32_div_f\n    str r0, [r5, #0x20]\n    ldr r0, [sp, #0x18]\n    str r0, [r5, #0x24]\n    ldr r0, [sp, #0x1c]\n    str r0, [r5, #0x28]\n    mov r0, #0\n    str r0, [r5, #0x2c]\n    ldr r0, [sp, #0x40]\n    str r7, [r5, #0x44]\n    str r0, [r5, #0x48]\n    ldr r0, [sp, #0x44]\n    str r0, [r5, #0x30]\n    ldrb r0, [r4, #0xb]\n    str r0, [r5, #0x34]\n    ldrb r0, [r4, #8]\n    str r0, [r5, #0x38]\n    str r6, [r5, #0x3c]\n    mov r0, #1\n    str r0, [r5, #0x40]\n    add r0, r5, #0\n    bl sub_020131AC\n    ldr r0, _02012F48 ; =sub_02010F00\n    ldr r2, _02012F4C ; =0x000003FF\n    add r1, r5, #0\n    bl SysTask_CreateOnVWaitQueue\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02010EE0\n    mov r1, #3\n    str r6, [sp]\n    lsl r1, r1, #8\n    ldrsh r1, [r0, r1]\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #0x12\n    lsl r1, r1, #6\n    ldrsh r0, [r0, r1]\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x34]\n    str r0, [sp, #0x14]\n    ldrb r1, [r4, #9]\n    ldrb r2, [r4, #0xa]\n    ldrb r3, [r4, #8]\n    add r0, r7, #0\n    bl sub_02010F84\n    ldrb r0, [r4, #8]\n    cmp r0, #0\n    bne _02012F22\n    ldr r3, [r5, #0x34]\n    add r0, r7, #0\n    mov r1, #1\n    add r2, r6, #0\n    bl sub_02011068\n    b _02012F2E\n    ldr r3, [r5, #0x34]\n    add r0, r7, #0\n    mov r1, #2\n    add r2, r6, #0\n    bl sub_02011068\n    ldr r0, [sp, #0x44]\n    ldr r2, _02012F50 ; =sub_02010C38\n    str r0, [sp]\n    ldr r0, [r5, #0x48]\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_0200FF88\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02012F44: .word 0x007FFF80\n    _02012F48: .word sub_02010F00\n    _02012F4C: .word 0x000003FF\n    _02012F50: .word sub_02010C38"
    );
    #endif
}

void sub_02012F54(void) {
    /* Original at 0x02012F54 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x2c]\n    add r1, r0, #1\n    str r1, [r4, #0x2c]\n    ldr r0, [r4, #0x28]\n    cmp r1, r0\n    blt _02012FF0\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    ldr r0, [r4, #0x24]\n    sub r0, r0, #1\n    cmp r0, #0\n    ble _02012FE2\n    ldr r2, [r4, #0x1c]\n    ldr r1, [r4, #0x20]\n    add r0, r4, #0\n    add r1, r2, r1\n    str r1, [r4, #0x1c]\n    ldr r1, [r4, #0x24]\n    ldr r2, _02012FF4 ; =0x0000FFFF\n    sub r1, r1, #1\n    str r1, [r4, #0x24]\n    ldr r1, [r4, #0x1c]\n    add r0, #0x1c\n    cmp r1, r2\n    blt _02012F98\n    add r3, r2, #0\n    ldr r1, [r0]\n    sub r1, r1, r2\n    str r1, [r0]\n    ldr r1, [r4, #0x1c]\n    cmp r1, r3\n    bge _02012F8C\n    cmp r1, #0\n    bge _02012FAE\n    add r2, r4, #0\n    ldr r0, _02012FF4 ; =0x0000FFFF\n    add r2, #0x1c\n    ldr r1, [r2]\n    add r1, r1, r0\n    str r1, [r2]\n    ldr r1, [r4, #0x1c]\n    cmp r1, #0\n    blt _02012FA2\n    ldr r0, _02012FF8 ; =0x00007FFF\n    cmp r1, r0\n    blt _02012FD0\n    ldr r0, [r4, #0x18]\n    cmp r1, r0\n    bge _02012FD0\n    ldr r0, [r4, #0x40]\n    cmp r0, #1\n    bne _02012FD0\n    ldr r0, [r4, #0x44]\n    ldr r1, [r4, #0x38]\n    ldr r2, [r4, #0x3c]\n    ldr r3, [r4, #0x34]\n    bl sub_02010FEC\n    mov r0, #0\n    str r0, [r4, #0x40]\n    add r0, r4, #0\n    bl sub_020131AC\n    ldr r0, _02012FFC ; =sub_02010F00\n    ldr r2, _02013000 ; =0x000003FF\n    add r1, r4, #0\n    bl SysTask_CreateOnVWaitQueue\n    b _02012FF0\n    ldr r0, [r4, #0x48]\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0x30]\n    bl sub_0200FFB4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _02012FF4: .word 0x0000FFFF\n    _02012FF8: .word 0x00007FFF\n    _02012FFC: .word sub_02010F00\n    _02013000: .word 0x000003FF"
    );
    #endif
}

void sub_02013004(void) {
    /* Original at 0x02013004 */
    /* Requires manual decompilation - 206 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    ldr r0, [sp, #0x28]\n    add r5, r3, #0\n    str r0, [sp, #0x10]\n    asr r0, r0, #4\n    add r4, r2, #0\n    lsl r2, r0, #1\n    add r0, r2, #1\n    str r1, [sp]\n    lsl r1, r0, #1\n    ldr r0, _020131A4 ; =FX_SinCosTable_\n    ldr r3, [sp, #0x2c]\n    ldrsh r1, [r0, r1]\n    ldr r0, _020131A8 ; =0x0000FFFF\n    ldr r6, [sp, #0x30]\n    mul r0, r1\n    asr r1, r0, #0xc\n    ldr r0, [sp]\n    ldr r7, [sp, #0x34]\n    add r0, r0, r1\n    str r0, [sp, #0xc]\n    ldr r0, _020131A4 ; =FX_SinCosTable_\n    lsl r1, r2, #1\n    ldrsh r1, [r0, r1]\n    ldr r0, _020131A8 ; =0x0000FFFF\n    mul r0, r1\n    asr r0, r0, #0xc\n    add r1, r4, r0\n    asr r0, r3, #4\n    lsl r0, r0, #1\n    mov ip, r0\n    add r0, r0, #1\n    lsl r2, r0, #1\n    ldr r0, _020131A4 ; =FX_SinCosTable_\n    ldrsh r2, [r0, r2]\n    ldr r0, _020131A8 ; =0x0000FFFF\n    mul r0, r2\n    asr r2, r0, #0xc\n    ldr r0, [sp]\n    add r0, r0, r2\n    str r0, [sp, #8]\n    mov r0, ip\n    lsl r2, r0, #1\n    ldr r0, _020131A4 ; =FX_SinCosTable_\n    ldrsh r2, [r0, r2]\n    ldr r0, _020131A8 ; =0x0000FFFF\n    mul r0, r2\n    asr r0, r0, #0xc\n    add r0, r4, r0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    sub r2, r3, r0\n    ldr r0, _020131A8 ; =0x0000FFFF\n    lsr r0, r0, #1\n    cmp r2, r0\n    bne _0201308C\n    cmp r5, #0\n    blt _0201307E\n    cmp r5, r4\n    blt _02013080\n    b _020131A0\n    mov r0, #0\n    str r0, [r6]\n    mov r0, #0xff\n    add sp, #0x14\n    str r0, [r7]\n    pop {r4, r5, r6, r7, pc}\n    cmp r3, #0\n    blt _02013100\n    ldr r0, _020131A8 ; =0x0000FFFF\n    lsr r0, r0, #1\n    cmp r3, r0\n    bge _02013100\n    cmp r1, r4\n    bge _020130A0\n    add r0, r1, #0\n    b _020130A2\n    add r0, r4, #0\n    cmp r1, r4\n    ble _020130AA\n    add r2, r1, #0\n    b _020130AC\n    add r2, r4, #0\n    cmp r0, r5\n    bgt _020130CC\n    cmp r5, r2\n    bgt _020130CC\n    ldr r2, [sp, #0xc]\n    ldr r0, [sp]\n    sub r2, r2, r0\n    sub r0, r5, r1\n    mul r0, r2\n    sub r1, r1, r4\n    bl _s32_div_f\n    ldr r1, [sp, #0xc]\n    add r0, r1, r0\n    str r0, [r6]\n    b _020130E6\n    ldr r1, [sp, #8]\n    ldr r0, [sp]\n    sub r1, r1, r0\n    ldr r0, [sp, #4]\n    sub r0, r5, r0\n    mul r0, r1\n    ldr r1, [sp, #4]\n    sub r1, r1, r4\n    bl _s32_div_f\n    ldr r1, [sp, #8]\n    add r0, r1, r0\n    str r0, [r6]\n    ldr r0, [r6]\n    cmp r0, #0xff\n    ble _020130F0\n    mov r0, #0xff\n    b _020130F6\n    cmp r0, #0\n    bge _020130F6\n    mov r0, #0\n    str r0, [r6]\n    mov r0, #0xff\n    add sp, #0x14\n    str r0, [r7]\n    pop {r4, r5, r6, r7, pc}\n    cmp r1, r4\n    bge _02013108\n    add r0, r1, #0\n    b _0201310A\n    add r0, r4, #0\n    cmp r1, r4\n    ble _02013112\n    add r2, r1, #0\n    b _02013114\n    add r2, r4, #0\n    cmp r0, r5\n    bgt _02013144\n    cmp r5, r2\n    bgt _02013144\n    ldr r2, [sp, #0xc]\n    ldr r0, [sp]\n    sub r2, r2, r0\n    sub r0, r5, r1\n    mul r0, r2\n    sub r1, r1, r4\n    bl _s32_div_f\n    ldr r1, [sp, #0xc]\n    add r0, r1, r0\n    str r0, [r6]\n    cmp r0, #0xff\n    ble _0201313A\n    mov r0, #0xff\n    b _02013140\n    cmp r0, #0\n    bge _02013140\n    mov r0, #0\n    str r0, [r6]\n    b _02013148\n    mov r0, #0\n    str r0, [r6]\n    ldr r0, [sp, #4]\n    cmp r0, r4\n    bge _02013152\n    add r1, r0, #0\n    b _02013154\n    add r1, r4, #0\n    ldr r0, [sp, #4]\n    cmp r0, r4\n    bgt _0201315C\n    add r0, r4, #0\n    cmp r1, r5\n    bgt _02013190\n    cmp r5, r0\n    bgt _02013190\n    ldr r1, [sp, #8]\n    ldr r0, [sp]\n    sub r1, r1, r0\n    ldr r0, [sp, #4]\n    sub r0, r5, r0\n    mul r0, r1\n    ldr r1, [sp, #4]\n    sub r1, r1, r4\n    bl _s32_div_f\n    ldr r1, [sp, #8]\n    add r0, r1, r0\n    str r0, [r7]\n    cmp r0, #0xff\n    ble _02013186\n    mov r0, #0xff\n    b _0201318C\n    cmp r0, #0\n    bge _0201318C\n    mov r0, #0\n    str r0, [r7]\n    b _02013194\n    ldr r0, [r6]\n    str r0, [r7]\n    ldr r1, [r7]\n    ldr r0, [r6]\n    cmp r0, r1\n    ble _020131A0\n    str r1, [r6]\n    str r0, [r7]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _020131A4: .word FX_SinCosTable_\n    _020131A8: .word 0x0000FFFF"
    );
    #endif
}

void sub_020131AC(void) {
    /* Original at 0x020131AC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    mov r1, #0\n    add r5, r0, #0\n    bl sub_02010EE0\n    add r4, r0, #0\n    mov r6, #0\n    add r7, sp, #0x14\n    ldr r0, [r5, #0x18]\n    add r3, r6, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x1c]\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    add r0, sp, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x14]\n    ldr r1, [r5, #0xc]\n    ldr r2, [r5, #0x10]\n    bl sub_02013004\n    mov r0, #3\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #8\n    strh r1, [r4, r0]\n    mov r0, #0x12\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    add r6, r6, #1\n    add r4, r4, #2\n    cmp r6, #0xc0\n    blt _020131BE\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020131F4(void) {
    /* Original at 0x020131F4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    ldr r1, _02013218 ; =0xFFFF1FFF\n    bne _0201320A\n    mov r3, #1\n    lsl r3, r3, #0x1a\n    ldr r2, [r3]\n    lsl r0, r0, #0xd\n    and r1, r2\n    orr r0, r1\n    str r0, [r3]\n    bx lr\n    ldr r3, _0201321C ; =0x04001000\n    lsl r0, r0, #0xd\n    ldr r2, [r3]\n    and r1, r2\n    orr r0, r1\n    str r0, [r3]\n    bx lr\n    _02013218: .word 0xFFFF1FFF\n    _0201321C: .word 0x04001000"
    );
    #endif
}

void sub_02013220(void) {
    /* Original at 0x02013220 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    cmp r2, #0\n    bne _02013262\n    cmp r3, #0\n    bne _02013246\n    ldr r2, _0201329C ; =0x04000048\n    ldrh r3, [r2]\n    mov r2, #0x3f\n    bic r3, r2\n    add r2, r3, #0\n    orr r2, r0\n    cmp r1, #0\n    beq _0201323E\n    mov r0, #0x20\n    orr r2, r0\n    ldr r0, _0201329C ; =0x04000048\n    strh r2, [r0]\n    pop {r3, r4}\n    bx lr\n    ldr r2, _020132A0 ; =0x04001048\n    ldrh r3, [r2]\n    mov r2, #0x3f\n    bic r3, r2\n    add r2, r3, #0\n    orr r2, r0\n    cmp r1, #0\n    beq _0201325A\n    mov r0, #0x20\n    orr r2, r0\n    ldr r0, _020132A0 ; =0x04001048\n    strh r2, [r0]\n    pop {r3, r4}\n    bx lr\n    cmp r3, #0\n    ldr r2, _020132A4 ; =0xFFFFC0FF\n    bne _02013282\n    ldr r4, _0201329C ; =0x04000048\n    lsl r0, r0, #8\n    ldrh r3, [r4]\n    and r2, r3\n    orr r2, r0\n    cmp r1, #0\n    beq _0201327A\n    lsr r0, r4, #0xd\n    orr r2, r0\n    ldr r0, _0201329C ; =0x04000048\n    strh r2, [r0]\n    pop {r3, r4}\n    bx lr\n    ldr r4, _020132A0 ; =0x04001048\n    lsl r0, r0, #8\n    ldrh r3, [r4]\n    and r2, r3\n    orr r2, r0\n    cmp r1, #0\n    beq _02013294\n    lsr r0, r4, #0xd\n    orr r2, r0\n    ldr r0, _020132A0 ; =0x04001048\n    strh r2, [r0]\n    pop {r3, r4}\n    bx lr\n    _0201329C: .word 0x04000048\n    _020132A0: .word 0x04001048\n    _020132A4: .word 0xFFFFC0FF"
    );
    #endif
}

void sub_020132A8(void) {
    /* Original at 0x020132A8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "cmp r2, #0\n    bne _020132C6\n    ldr r2, _020132E0 ; =0x0400004A\n    ldrh r3, [r2]\n    mov r2, #0x3f\n    bic r3, r2\n    add r2, r3, #0\n    orr r2, r0\n    cmp r1, #0\n    beq _020132C0\n    mov r0, #0x20\n    orr r2, r0\n    ldr r0, _020132E0 ; =0x0400004A\n    strh r2, [r0]\n    bx lr\n    ldr r2, _020132E4 ; =0x0400104A\n    ldrh r3, [r2]\n    mov r2, #0x3f\n    bic r3, r2\n    add r2, r3, #0\n    orr r2, r0\n    cmp r1, #0\n    beq _020132DA\n    mov r0, #0x20\n    orr r2, r0\n    ldr r0, _020132E4 ; =0x0400104A\n    strh r2, [r0]\n    bx lr\n    _020132E0: .word 0x0400004A\n    _020132E4: .word 0x0400104A"
    );
    #endif
}

void sub_020132E8(void) {
    /* Original at 0x020132E8 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3}\n    sub sp, #4\n    cmp r0, #0\n    bne _02013308\n    cmp r1, #0\n    bne _020132FE\n    ldr r0, _0201332C ; =0x04000048\n    ldrb r1, [r0]\n    add r0, sp, #0\n    strb r1, [r0]\n    b _0201331E\n    ldr r0, _02013330 ; =0x04001048\n    ldrb r1, [r0]\n    add r0, sp, #0\n    strb r1, [r0]\n    b _0201331E\n    cmp r1, #0\n    bne _02013316\n    ldr r0, _02013334 ; =0x04000049\n    ldrb r1, [r0]\n    add r0, sp, #0\n    strb r1, [r0]\n    b _0201331E\n    ldr r0, _02013338 ; =0x04001049\n    ldrb r1, [r0]\n    add r0, sp, #0\n    strb r1, [r0]\n    add r1, sp, #0\n    mov r0, #0\n    ldrsb r0, [r1, r0]\n    add sp, #4\n    pop {r3}\n    bx lr\n    nop\n    _0201332C: .word 0x04000048\n    _02013330: .word 0x04001048\n    _02013334: .word 0x04000049\n    _02013338: .word 0x04001049"
    );
    #endif
}

void sub_0201333C(void) {
    /* Original at 0x0201333C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3}\n    sub sp, #4\n    cmp r0, #0\n    bne _02013348\n    ldr r0, _0201335C ; =0x0400004A\n    b _0201334A\n    ldr r0, _02013360 ; =0x0400104A\n    ldrb r1, [r0]\n    add r0, sp, #0\n    strb r1, [r0]\n    add r1, sp, #0\n    mov r0, #0\n    ldrsb r0, [r1, r0]\n    add sp, #4\n    pop {r3}\n    bx lr\n    _0201335C: .word 0x0400004A\n    _02013360: .word 0x0400104A"
    );
    #endif
}

void sub_02013364(void) {
    /* Original at 0x02013364 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    add r4, r2, #0\n    add r2, r3, #0\n    ldr r3, [sp, #8]\n    cmp r3, #0\n    bne _020133C2\n    ldr r3, [sp, #0xc]\n    cmp r3, #0\n    bne _0201339C\n    lsl r0, r0, #8\n    mov r3, #0xff\n    add r5, r0, #0\n    lsl r3, r3, #8\n    lsl r0, r4, #0x18\n    and r5, r3\n    lsl r1, r1, #8\n    and r3, r1\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    lsr r0, r0, #0x18\n    add r4, r5, #0\n    orr r4, r0\n    ldr r0, _02013414 ; =0x04000040\n    orr r1, r3\n    strh r4, [r0]\n    strh r1, [r0, #4]\n    pop {r4, r5}\n    bx lr\n    lsl r0, r0, #8\n    mov r3, #0xff\n    add r5, r0, #0\n    lsl r3, r3, #8\n    lsl r0, r4, #0x18\n    and r5, r3\n    lsl r1, r1, #8\n    and r3, r1\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    lsr r0, r0, #0x18\n    add r4, r5, #0\n    orr r4, r0\n    ldr r0, _02013418 ; =0x04001040\n    orr r1, r3\n    strh r4, [r0]\n    strh r1, [r0, #4]\n    pop {r4, r5}\n    bx lr\n    ldr r3, [sp, #0xc]\n    cmp r3, #0\n    bne _020133EE\n    lsl r0, r0, #8\n    mov r3, #0xff\n    add r5, r0, #0\n    lsl r3, r3, #8\n    lsl r0, r4, #0x18\n    and r5, r3\n    lsl r1, r1, #8\n    and r3, r1\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    lsr r0, r0, #0x18\n    add r4, r5, #0\n    orr r4, r0\n    ldr r0, _0201341C ; =0x04000042\n    orr r1, r3\n    strh r4, [r0]\n    strh r1, [r0, #4]\n    pop {r4, r5}\n    bx lr\n    lsl r0, r0, #8\n    mov r3, #0xff\n    add r5, r0, #0\n    lsl r3, r3, #8\n    lsl r0, r4, #0x18\n    and r5, r3\n    lsl r1, r1, #8\n    and r3, r1\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    lsr r0, r0, #0x18\n    add r4, r5, #0\n    orr r4, r0\n    ldr r0, _02013420 ; =0x04001042\n    orr r1, r3\n    strh r4, [r0]\n    strh r1, [r0, #4]\n    pop {r4, r5}\n    bx lr\n    _02013414: .word 0x04000040\n    _02013418: .word 0x04001040\n    _0201341C: .word 0x04000042\n    _02013420: .word 0x04001042"
    );
    #endif
}

void sub_02013424(void) {
    SysTask_CreateOnVWaitQueue(1);
}

void sub_02013440(void) {
    /* Original at 0x02013440 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r5, [sp, #0x10]\n    add r0, #0x10\n    lsl r4, r5, #5\n    add r6, r0, r4\n    lsl r0, r3, #4\n    add r4, r6, r0\n    str r1, [r6, r0]\n    str r2, [r4, #4]\n    str r3, [r4, #8]\n    ldr r0, _02013464 ; =sub_020134D0\n    add r1, r4, #0\n    mov r2, #1\n    str r5, [r4, #0xc]\n    bl SysTask_CreateOnVWaitQueue\n    pop {r4, r5, r6, pc}\n    nop\n    _02013464: .word sub_020134D0"
    );
    #endif
}

void sub_02013468(void) {
    SysTask_CreateOnVWaitQueue(1, 0xc);
}

void sub_02013488(void) {
    /* Original at 0x02013488 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r5, [sp, #0x20]\n    add r7, r1, #0\n    add r0, #0x80\n    lsl r1, r5, #5\n    add r6, r0, r1\n    add r4, r2, #0\n    ldr r0, [sp, #0x1c]\n    add r2, r3, #0\n    lsl r3, r0, #4\n    add r1, r6, r3\n    strh r7, [r6, r3]\n    strh r4, [r1, #2]\n    strh r2, [r1, #4]\n    ldr r2, [sp, #0x18]\n    strh r2, [r1, #6]\n    str r0, [r1, #8]\n    ldr r0, _020134B8 ; =sub_02013504\n    mov r2, #1\n    str r5, [r1, #0xc]\n    bl SysTask_CreateOnVWaitQueue\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020134B8: .word sub_02013504"
    );
    #endif
}

void sub_020134BC(void) {
    /* Original at 0x020134BC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldmia r1!, {r0, r1}\n    bl sub_020131F4\n    add r0, r4, #0\n    bl SysTask_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void sub_020134D0(void) {
    sub_02013220(*((u32*)(r1 + 4)), *((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)));
    SysTask_Destroy(r4);
}

void sub_020134EC(void) {
    sub_020132A8(*((u32*)(r1 + 4)), *((u32*)(r1 + 8)));
    SysTask_Destroy(r4);
}

void sub_02013504(void) {
    /* Original at 0x02013504 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r3, r1, #0\n    add r4, r0, #0\n    ldr r0, [r3, #8]\n    mov r1, #2\n    str r0, [sp]\n    ldr r0, [r3, #0xc]\n    mov r2, #4\n    str r0, [sp, #4]\n    mov r0, #0\n    mov r5, #6\n    ldrsh r0, [r3, r0]\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    ldrsh r3, [r3, r5]\n    bl sub_02013364\n    add r0, r4, #0\n    bl SysTask_Destroy\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
