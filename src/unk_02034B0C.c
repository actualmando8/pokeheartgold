/* Decompiled from asm/unk_02034B0C.s */
#include "global.h"

void sub_02034B0C(void) {
    /* Original at 0x02034B0C */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, _02034BCC ; =_021D4134\n    add r7, r1, #0\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _02034BCA\n    ldr r1, _02034BD0 ; =0x00000D98\n    mov r0, #0xf\n    bl Heap_Alloc\n    ldr r1, _02034BCC ; =_021D4134\n    ldr r2, _02034BD0 ; =0x00000D98\n    str r0, [r1, #8]\n    mov r1, #0\n    bl MI_CpuFill8\n    bl sub_020335B4\n    add r1, r0, #0\n    mov r0, #0xf\n    bl Heap_Alloc\n    ldr r1, _02034BCC ; =_021D4134\n    ldr r2, [r1, #8]\n    ldr r1, _02034BD4 ; =0x00000D64\n    str r0, [r2, r1]\n    bl sub_020335B4\n    add r2, r0, #0\n    ldr r0, _02034BCC ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02034BD4 ; =0x00000D64\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl MI_CpuFill8\n    bl LinkBattleRuleset_sizeof\n    add r1, r0, #0\n    mov r0, #0xf\n    bl Heap_Alloc\n    ldr r1, _02034BCC ; =_021D4134\n    ldr r2, [r1, #8]\n    ldr r1, _02034BD8 ; =0x00000D7C\n    str r0, [r2, r1]\n    bl LinkBattleRuleset_sizeof\n    add r2, r0, #0\n    ldr r0, _02034BCC ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02034BD8 ; =0x00000D7C\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl MI_CpuFill8\n    mov r0, #0xf\n    mov r1, #0x90\n    bl Heap_Alloc\n    ldr r2, _02034BCC ; =_021D4134\n    ldr r1, _02034BDC ; =0x00000D84\n    ldr r3, [r2, #8]\n    str r0, [r3, r1]\n    ldr r6, [r2, #8]\n    mov r0, #0x1f\n    ldr r5, [r6, r1]\n    add r3, r5, #0\n    and r3, r0\n    mov r0, #0x20\n    sub r0, r0, r3\n    add r3, r0, r5\n    add r0, r1, #4\n    str r3, [r6, r0]\n    ldr r5, _02034BE0 ; =0x00000333\n    ldr r3, [r2, #8]\n    sub r0, r1, #4\n    str r5, [r3, r0]\n    add r0, r1, #0\n    ldr r3, [r2, #8]\n    sub r0, #0xc\n    str r4, [r3, r0]\n    ldr r0, [r2, #8]\n    sub r1, #0x1c\n    add r0, r0, r1\n    bl MailMsg_Init\n    add r0, r7, #0\n    bl sub_02034DF0\n    bl WM_GetNextTgid\n    ldr r1, _02034BCC ; =_021D4134\n    strh r0, [r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02034BCC: .word _021D4134\n    _02034BD0: .word 0x00000D98\n    _02034BD4: .word 0x00000D64\n    _02034BD8: .word 0x00000D7C\n    _02034BDC: .word 0x00000D84\n    _02034BE0: .word 0x00000333"
    );
    #endif
}

void sub_02034BE4(void) {
    /* Original at 0x02034BE4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02034BF4 ; =_021D4134\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _02034BF0\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02034BF4: .word _021D4134"
    );
    #endif
}

void sub_02034BF8(void) {
    /* Original at 0x02034BF8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r5, #0\n    cmp r2, #0\n    ble _02034C18\n    ldrb r4, [r0]\n    ldrb r3, [r1]\n    cmp r4, r3\n    beq _02034C0E\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    add r5, r5, #1\n    add r0, r0, #1\n    add r1, r1, #1\n    cmp r5, r2\n    blt _02034C00\n    mov r0, #1\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void sub_02034C20(void) {
    /* Original at 0x02034C20 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    bl sub_0203993C\n    add r5, r0, #0\n    bl sub_02039954\n    add r4, r6, #0\n    add r7, r0, #0\n    add r4, #0x50\n    cmp r5, #0xe\n    beq _02034C62\n    ldrb r0, [r4, #4]\n    bl sub_0203401C\n    cmp r0, #0\n    beq _02034C4C\n    add r0, r5, #0\n    bl sub_0203401C\n    cmp r0, #0\n    bne _02034C62\n    add r0, r4, #0\n    add r0, #0x54\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02034C5C\n    ldrb r0, [r4, #4]\n    cmp r0, #0xa\n    beq _02034C88\n    ldrb r0, [r4, #4]\n    cmp r0, r5\n    bne _02034C88\n    cmp r5, #0xe\n    beq _02034C6C\n    ldrb r0, [r4, #5]\n    cmp r0, r7\n    bne _02034C88\n    ldr r1, _02034C8C ; =_021D4134\n    add r0, r6, #0\n    ldr r1, [r1, #8]\n    mov r2, #0xc0\n    add r1, #0x54\n    bl MI_CpuCopy8\n    ldr r0, _02034C8C ; =_021D4134\n    ldr r1, _02034C90 ; =0x00000D95\n    ldr r3, [r0, #8]\n    mov r0, #0x40\n    ldrb r2, [r3, r1]\n    orr r0, r2\n    strb r0, [r3, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02034C8C: .word _021D4134\n    _02034C90: .word 0x00000D95"
    );
    #endif
}

void sub_02034C94(void) {
    /* Original at 0x02034C94 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _02034D50 ; =_021D4134\n    ldr r1, _02034D54 ; =0x00000D95\n    ldr r3, [r0, #8]\n    ldrb r2, [r3, r1]\n    add r7, r3, #0\n    add r7, #0x54\n    lsl r0, r2, #0x19\n    lsr r0, r0, #0x1f\n    beq _02034D4E\n    mov r0, #0x40\n    mov r6, #0\n    bic r2, r0\n    strb r2, [r3, r1]\n    add r4, r6, #0\n    add r5, r6, #0\n    ldr r0, _02034D50 ; =_021D4134\n    ldr r1, _02034D58 ; =0x00000D44\n    ldr r0, [r0, #8]\n    add r2, r0, r4\n    ldrh r1, [r2, r1]\n    cmp r1, #0\n    beq _02034CFC\n    mov r1, #0x46\n    lsl r1, r1, #2\n    add r0, r0, r1\n    add r0, r0, r5\n    add r1, r7, #4\n    mov r2, #6\n    bl sub_02034BF8\n    cmp r0, #0\n    beq _02034CFC\n    ldr r2, _02034D50 ; =_021D4134\n    mov r1, #0x4b\n    ldr r3, [r2, #8]\n    lsl r0, r6, #1\n    add r3, r3, r0\n    ldr r0, _02034D58 ; =0x00000D44\n    lsl r1, r1, #2\n    strh r1, [r3, r0]\n    ldr r2, [r2, #8]\n    sub r1, #0x18\n    add r3, r2, r1\n    mov r2, #0xc0\n    add r1, r6, #0\n    mul r1, r2\n    add r0, r7, #0\n    add r1, r3, r1\n    bl MI_CpuCopy8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r6, r6, #1\n    add r4, r4, #2\n    add r5, #0xc0\n    cmp r6, #0x10\n    blt _02034CB4\n    ldr r0, _02034D50 ; =_021D4134\n    ldr r1, _02034D58 ; =0x00000D44\n    ldr r0, [r0, #8]\n    mov r3, #0\n    add r4, r0, #0\n    ldrh r2, [r4, r1]\n    cmp r2, #0\n    beq _02034D1E\n    add r3, r3, #1\n    add r4, r4, #2\n    cmp r3, #0x10\n    blt _02034D10\n    cmp r3, #0x10\n    bge _02034D4E\n    lsl r2, r3, #1\n    mov r1, #0x4b\n    add r2, r0, r2\n    ldr r0, _02034D58 ; =0x00000D44\n    lsl r1, r1, #2\n    strh r1, [r2, r0]\n    ldr r2, _02034D50 ; =_021D4134\n    sub r1, #0x18\n    ldr r2, [r2, #8]\n    add r0, r7, #0\n    add r4, r2, r1\n    mov r2, #0xc0\n    add r1, r3, #0\n    mul r1, r2\n    add r1, r4, r1\n    bl MI_CpuCopy8\n    ldr r0, _02034D50 ; =_021D4134\n    mov r2, #1\n    ldr r1, [r0, #8]\n    ldr r0, _02034D5C ; =0x00000D74\n    strb r2, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02034D50: .word _021D4134\n    _02034D54: .word 0x00000D95\n    _02034D58: .word 0x00000D44\n    _02034D5C: .word 0x00000D74"
    );
    #endif
}

void sub_02034D60(void) {
    OS_Terminate(2);
}

void sub_02034D78(void) {
    /* Original at 0x02034D78 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02034D84 ; =_021D4134\n    mov r1, #0\n    str r1, [r0, #4]\n    ldr r3, _02034D88 ; =Sys_ClearSleepDisableFlag\n    mov r0, #4\n    bx r3\n    _02034D84: .word _021D4134\n    _02034D88: .word Sys_ClearSleepDisableFlag"
    );
    #endif
}

void sub_02034D8C(void) {
    /* Original at 0x02034D8C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #4\n    bl Sys_SetSleepDisableFlag\n    ldr r0, _02034DB0 ; =_021D4134\n    mov r1, #1\n    str r1, [r0, #4]\n    ldr r1, _02034DB4 ; =sub_02034D60\n    mov r0, #8\n    mov r2, #0\n    bl WVR_StartUpAsync\n    cmp r0, #1\n    beq _02034DAC\n    bl OS_Terminate\n    pop {r3, pc}\n    nop\n    _02034DB0: .word _021D4134\n    _02034DB4: .word sub_02034D60"
    );
    #endif
}

void sub_02034DB8(void) {
    /* Original at 0x02034DB8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02034DC8 ; =_021D4134\n    ldr r0, [r0, #4]\n    cmp r0, #2\n    bne _02034DC4\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02034DC8: .word _021D4134"
    );
    #endif
}

void sub_02034DCC(void) {
    /* Original at 0x02034DCC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02034DDC ; =_021D4134\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _02034DD8\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02034DDC: .word _021D4134"
    );
    #endif
}

void sub_02034DE0(void) {
    /* Original at 0x02034DE0 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02034DE8 ; =WVR_TerminateAsync\n    ldr r0, _02034DEC ; =sub_02034D78\n    mov r1, #0\n    bx r3\n    _02034DE8: .word WVR_TerminateAsync\n    _02034DEC: .word sub_02034D78"
    );
    #endif
}

void sub_02034DF0(void) {
    /* Original at 0x02034DF0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02034E28 ; =_021D4134\n    add r1, r0, #0\n    mov r0, #0xd7\n    ldr r3, [r2, #8]\n    mov r4, #0\n    lsl r0, r0, #4\n    str r4, [r3, r0]\n    ldr r2, [r2, #8]\n    sub r0, #0xc\n    ldr r3, [r2, r0]\n    mov r0, #0x1f\n    add r2, r3, #0\n    and r2, r0\n    mov r0, #0x20\n    sub r0, r0, r2\n    add r0, r3, r0\n    bl sub_02033528\n    ldr r0, _02034E28 ; =_021D4134\n    ldr r1, [r0, #8]\n    mov r0, #0x36\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    bl sub_02033234\n    pop {r4, pc}\n    nop\n    _02034E28: .word _021D4134"
    );
    #endif
}

void sub_02034E2C(void) {
    /* Original at 0x02034E2C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r4, #0\n    ldr r2, _02034E5C ; =_021D4134\n    ldr r0, _02034E60 ; =0x00000D44\n    add r5, r4, #0\n    add r1, r4, #0\n    ldr r3, [r2, #8]\n    add r4, r4, #1\n    add r3, r3, r5\n    add r5, r5, #2\n    strh r1, [r3, r0]\n    cmp r4, #0x10\n    blt _02034E38\n    ldr r0, _02034E5C ; =_021D4134\n    ldr r2, [r0, #8]\n    mov r0, #0x45\n    lsl r0, r0, #2\n    add r0, r2, r0\n    mov r2, #3\n    lsl r2, r2, #0xa\n    bl MI_CpuFill8\n    pop {r3, r4, r5, pc}\n    nop\n    _02034E5C: .word _021D4134\n    _02034E60: .word 0x00000D44"
    );
    #endif
}

void sub_02034E64(void) {
    /* Original at 0x02034E64 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r1, _02034E84 ; =_021D4134\n    lsl r0, r0, #0x18\n    ldr r2, [r1, #8]\n    ldr r4, _02034E88 ; =0x00000D95\n    lsr r0, r0, #0x18\n    ldrb r1, [r2, r4]\n    mov r3, #8\n    lsl r0, r0, #0x1f\n    bic r1, r3\n    lsr r0, r0, #0x1c\n    orr r0, r1\n    strb r0, [r2, r4]\n    pop {r3, r4}\n    bx lr\n    nop\n    _02034E84: .word _021D4134\n    _02034E88: .word 0x00000D95"
    );
    #endif
}

void sub_02034E8C(void) {
    /* Original at 0x02034E8C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r1, _02034EE8 ; =_021D4134\n    ldr r0, _02034EEC ; =0x00000D74\n    ldr r3, [r1, #8]\n    mov r2, #0\n    strb r2, [r3, r0]\n    add r3, r0, #0\n    ldr r5, [r1, #8]\n    add r3, #0x21\n    ldrb r4, [r5, r3]\n    mov r3, #1\n    bic r4, r3\n    add r3, r0, #0\n    add r3, #0x21\n    strb r4, [r5, r3]\n    add r3, r0, #0\n    ldr r5, [r1, #8]\n    add r3, #0x21\n    ldrb r4, [r5, r3]\n    mov r3, #4\n    bic r4, r3\n    add r3, r0, #0\n    add r3, #0x21\n    strb r4, [r5, r3]\n    add r3, r0, #0\n    ldr r4, [r1, #8]\n    add r3, #0x1e\n    strb r2, [r4, r3]\n    add r3, r0, #0\n    ldr r5, [r1, #8]\n    add r3, #0x21\n    ldrb r4, [r5, r3]\n    mov r3, #0x10\n    bic r4, r3\n    add r3, r0, #0\n    add r3, #0x21\n    strb r4, [r5, r3]\n    add r3, r0, #0\n    ldr r4, [r1, #8]\n    add r3, #0x20\n    strb r2, [r4, r3]\n    ldr r1, [r1, #8]\n    add r0, #0x1f\n    strb r2, [r1, r0]\n    pop {r4, r5}\n    bx lr\n    _02034EE8: .word _021D4134\n    _02034EEC: .word 0x00000D74"
    );
    #endif
}

void sub_02034EF0(void) {
    /* Original at 0x02034EF0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl sub_02034E8C\n    add r0, r5, #0\n    bl sub_02034E64\n    bl sub_02033A68\n    ldr r0, _02034F54 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02034F58 ; =0x00000D93\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _02034F22\n    ldr r0, _02034F5C ; =sub_02036904\n    mov r1, #0xe\n    bl sub_020337D0\n    ldr r0, _02034F54 ; =_021D4134\n    mov r2, #1\n    ldr r1, [r0, #8]\n    ldr r0, _02034F58 ; =0x00000D93\n    strb r2, [r1, r0]\n    ldr r0, _02034F54 ; =_021D4134\n    ldr r3, _02034F60 ; =0x00000D95\n    ldr r1, [r0, #8]\n    mov r2, #0x20\n    ldrb r0, [r1, r3]\n    bic r0, r2\n    lsl r2, r4, #0x18\n    lsr r2, r2, #0x18\n    lsl r2, r2, #0x1f\n    lsr r2, r2, #0x1a\n    orr r0, r2\n    strb r0, [r1, r3]\n    bl sub_02033298\n    cmp r0, #1\n    bne _02034F4E\n    bl sub_020332C0\n    cmp r0, #0\n    beq _02034F4E\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02034F54: .word _021D4134\n    _02034F58: .word 0x00000D93\n    _02034F5C: .word sub_02036904\n    _02034F60: .word 0x00000D95"
    );
    #endif
}

void sub_02034F64(void) {
    /* Original at 0x02034F64 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r1, #0\n    bl sub_02034E8C\n    cmp r4, #0\n    beq _02034F76\n    bl sub_02034E2C\n    ldr r0, _02034FD4 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02034FD8 ; =0x00000D93\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _02034F94\n    ldr r0, _02034FDC ; =sub_020367A8\n    mov r1, #0xe\n    bl sub_020337D0\n    ldr r0, _02034FD4 ; =_021D4134\n    mov r2, #1\n    ldr r1, [r0, #8]\n    ldr r0, _02034FD8 ; =0x00000D93\n    strb r2, [r1, r0]\n    bl sub_02033298\n    cmp r0, #1\n    bne _02034FCC\n    ldr r2, _02034FE0 ; =_020F6A88\n    add r0, sp, #0\n    ldrb r3, [r2]\n    add r1, sp, #0\n    strb r3, [r0]\n    ldrb r3, [r2, #1]\n    strb r3, [r0, #1]\n    ldrb r3, [r2, #2]\n    strb r3, [r0, #2]\n    ldrb r3, [r2, #3]\n    strb r3, [r0, #3]\n    ldrb r3, [r2, #4]\n    ldrb r2, [r2, #5]\n    strb r3, [r0, #4]\n    strb r2, [r0, #5]\n    ldr r0, _02034FE4 ; =sub_02034C20\n    mov r2, #0\n    bl sub_02032C1C\n    cmp r0, #0\n    beq _02034FCC\n    add sp, #8\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _02034FD4: .word _021D4134\n    _02034FD8: .word 0x00000D93\n    _02034FDC: .word sub_020367A8\n    _02034FE0: .word _020F6A88\n    _02034FE4: .word sub_02034C20"
    );
    #endif
}

void sub_02034FE8(void) {
    /* Original at 0x02034FE8 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02035074 ; =_021D4134\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    bne _02034FF6\n    mov r0, #1\n    pop {r3, pc}\n    ldr r0, _02035078 ; =0x00000D94\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _02035008\n    cmp r0, #1\n    beq _02035038\n    cmp r0, #2\n    beq _02035050\n    b _0203506E\n    bl sub_02033990\n    cmp r0, #0\n    beq _02035020\n    bl sub_02032E24\n    ldr r0, _02035074 ; =_021D4134\n    mov r2, #1\n    ldr r1, [r0, #8]\n    ldr r0, _02035078 ; =0x00000D94\n    strb r2, [r1, r0]\n    b _0203506E\n    bl sub_0203393C\n    cmp r0, #0\n    bne _0203506E\n    bl sub_02033858\n    ldr r0, _02035074 ; =_021D4134\n    mov r2, #2\n    ldr r1, [r0, #8]\n    ldr r0, _02035078 ; =0x00000D94\n    strb r2, [r1, r0]\n    b _0203506E\n    bl sub_0203393C\n    cmp r0, #0\n    bne _0203506E\n    bl sub_02033858\n    ldr r0, _02035074 ; =_021D4134\n    mov r2, #2\n    ldr r1, [r0, #8]\n    ldr r0, _02035078 ; =0x00000D94\n    strb r2, [r1, r0]\n    b _0203506E\n    bl sub_02033920\n    cmp r0, #0\n    beq _0203505C\n    mov r0, #1\n    pop {r3, pc}\n    bl sub_02033958\n    cmp r0, #0\n    beq _0203506E\n    ldr r0, _02035074 ; =_021D4134\n    mov r2, #1\n    ldr r1, [r0, #8]\n    ldr r0, _02035078 ; =0x00000D94\n    strb r2, [r1, r0]\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _02035074: .word _021D4134\n    _02035078: .word 0x00000D94"
    );
    #endif
}

void sub_0203507C(void) {
    /* Original at 0x0203507C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020350A0 ; =_021D4134\n    ldr r2, [r0, #8]\n    cmp r2, #0\n    beq _0203509A\n    ldr r0, _020350A4 ; =0x00000D92\n    ldrb r1, [r2, r0]\n    cmp r1, #0\n    bne _0203509A\n    mov r1, #1\n    strb r1, [r2, r0]\n    bl sub_02033858\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _020350A0: .word _021D4134\n    _020350A4: .word 0x00000D92"
    );
    #endif
}

void sub_020350A8(void) {
    /* Original at 0x020350A8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _020350CC ; =_021D4134\n    ldr r2, [r1, #8]\n    cmp r2, #0\n    beq _020350C8\n    cmp r0, #0\n    ldr r0, _020350D0 ; =0x00000D92\n    beq _020350BE\n    mov r1, #2\n    strb r1, [r2, r0]\n    pop {r3, pc}\n    mov r1, #0\n    strb r1, [r2, r0]\n    mov r0, #1\n    bl sub_02034DF0\n    pop {r3, pc}\n    nop\n    _020350CC: .word _021D4134\n    _020350D0: .word 0x00000D92"
    );
    #endif
}

void sub_020350D4(void) {
    /* Original at 0x020350D4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0203510C ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02035110 ; =0x00000D7C\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r0, _0203510C ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02035114 ; =0x00000D64\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r0, _0203510C ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02035118 ; =0x00000D84\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r0, _0203510C ; =_021D4134\n    ldr r0, [r0, #8]\n    bl Heap_Free\n    ldr r0, _0203510C ; =_021D4134\n    mov r1, #0\n    str r1, [r0, #8]\n    pop {r3, pc}\n    nop\n    _0203510C: .word _021D4134\n    _02035110: .word 0x00000D7C\n    _02035114: .word 0x00000D64\n    _02035118: .word 0x00000D84"
    );
    #endif
}

void sub_0203511C(void) {
    /* Original at 0x0203511C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_02037474\n    cmp r0, #0\n    bne _0203512A\n    mov r0, #0\n    pop {r4, pc}\n    ldr r1, _02035148 ; =_021D4134\n    mov r0, #0\n    ldr r4, [r1, #8]\n    ldr r1, _0203514C ; =0x00000D44\n    add r3, r0, #0\n    ldrh r2, [r4, r1]\n    cmp r2, #0\n    beq _0203513C\n    add r0, r0, #1\n    add r3, r3, #1\n    add r4, r4, #2\n    cmp r3, #0x10\n    blt _02035134\n    pop {r4, pc}\n    nop\n    _02035148: .word _021D4134\n    _0203514C: .word 0x00000D44"
    );
    #endif
}

void sub_02035150(void) {
    /* Original at 0x02035150 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0203517C ; =_021D4134\n    mov r4, #0\n    ldr r5, [r1, #8]\n    ldr r1, _02035180 ; =0x00000D44\n    add r3, r4, #0\n    ldrh r2, [r5, r1]\n    cmp r2, #0\n    beq _0203516C\n    cmp r4, r0\n    bne _0203516A\n    add r0, r3, #0\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    add r3, r3, #1\n    add r5, r5, #2\n    cmp r3, #0x10\n    blt _0203515C\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0203517C: .word _021D4134\n    _02035180: .word 0x00000D44"
    );
    #endif
}

void sub_02035184(void) {
    /* Original at 0x02035184 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02035190 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02035194 ; =0x00000D74\n    ldrb r0, [r1, r0]\n    bx lr\n    nop\n    _02035190: .word _021D4134\n    _02035194: .word 0x00000D74"
    );
    #endif
}

void sub_02035198(void) {
    /* Original at 0x02035198 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020351A4 ; =_021D4134\n    mov r2, #0\n    ldr r1, [r0, #8]\n    ldr r0, _020351A8 ; =0x00000D74\n    strb r2, [r1, r0]\n    bx lr\n    _020351A4: .word _021D4134\n    _020351A8: .word 0x00000D74"
    );
    #endif
}

void sub_020351AC(void) {
    /* Original at 0x020351AC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020351D4 ; =_021D4134\n    ldr r3, [r1, #8]\n    lsl r1, r0, #1\n    add r2, r3, r1\n    ldr r1, _020351D8 ; =0x00000D44\n    ldrh r1, [r2, r1]\n    cmp r1, #0\n    beq _020351D0\n    mov r1, #0xc0\n    add r2, r0, #0\n    mul r2, r1\n    add r0, r3, r2\n    add r1, #0xaa\n    ldrb r0, [r0, r1]\n    cmp r0, #0\n    bne _020351D2\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _020351D4: .word _021D4134\n    _020351D8: .word 0x00000D44"
    );
    #endif
}

void sub_020351DC(void) {
    /* Original at 0x020351DC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    ldr r1, _02035210 ; =_021D4134\n    mov r5, #0\n    ldr r6, [r1, #8]\n    ldr r1, _02035214 ; =0x00000D44\n    add r3, r5, #0\n    ldrh r2, [r6, r1]\n    cmp r2, #0\n    beq _02035204\n    cmp r0, r5\n    bne _02035202\n    add r0, r3, #0\n    bl sub_02035798\n    add r1, r4, #0\n    bl PlayerProfile_Copy\n    pop {r4, r5, r6, pc}\n    add r5, r5, #1\n    add r3, r3, #1\n    add r6, r6, #2\n    cmp r3, #0x10\n    blt _020351EA\n    pop {r4, r5, r6, pc}\n    nop\n    _02035210: .word _021D4134\n    _02035214: .word 0x00000D44"
    );
    #endif
}

void sub_02035218(void) {
    /* Original at 0x02035218 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_02033298\n    cmp r0, #2\n    bne _0203522C\n    bl sub_02032E24\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    bl sub_02033298\n    cmp r0, #1\n    bne _02035282\n    bl sub_0203993C\n    ldr r2, _02035288 ; =_021D4134\n    mov r1, #0xc0\n    add r4, r5, #0\n    mul r4, r1\n    ldr r3, [r2, #8]\n    add r1, #0x8a\n    add r2, r3, r4\n    ldrh r2, [r2, r1]\n    mov r1, #0xd9\n    lsl r1, r1, #4\n    strb r2, [r3, r1]\n    bl sub_0203401C\n    cmp r0, #0\n    beq _0203526C\n    ldr r1, _02035288 ; =_021D4134\n    mov r0, #1\n    ldr r2, [r1, #8]\n    mov r1, #0x46\n    lsl r1, r1, #2\n    add r1, r2, r1\n    add r1, r1, r4\n    mov r2, #0\n    bl sub_02032B84\n    b _0203527E\n    ldr r1, _02035288 ; =_021D4134\n    mov r0, #1\n    ldr r2, [r1, #8]\n    mov r1, #0x45\n    lsl r1, r1, #2\n    add r1, r2, r1\n    add r1, r1, r4\n    bl sub_0203373C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02035288: .word _021D4134"
    );
    #endif
}

void sub_0203528C(void) {
    /* Original at 0x0203528C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl sub_02034C94\n    mov r4, #0\n    ldr r1, _020352CC ; =_021D4134\n    ldr r0, _020352D0 ; =0x00000D44\n    add r5, r4, #0\n    mov r2, #1\n    ldr r3, [r1, #8]\n    add r3, r3, r5\n    ldrh r6, [r3, r0]\n    cmp r6, #0\n    beq _020352C0\n    beq _020352C0\n    ldr r6, _020352D0 ; =0x00000D44\n    ldrh r6, [r3, r6]\n    sub r7, r6, #1\n    ldr r6, _020352D0 ; =0x00000D44\n    strh r7, [r3, r6]\n    ldr r3, [r1, #8]\n    add r7, r3, r5\n    ldrh r6, [r7, r6]\n    cmp r6, #0\n    bne _020352C0\n    ldr r6, _020352D4 ; =0x00000D74\n    strb r2, [r3, r6]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #0x10\n    blt _0203529C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020352CC: .word _021D4134\n    _020352D0: .word 0x00000D44\n    _020352D4: .word 0x00000D74"
    );
    #endif
}

void sub_020352D8(void) {
    /* Original at 0x020352D8 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl sub_0203993C\n    add r5, r0, #0\n    bl sub_02035784\n    add r4, r0, #0\n    cmp r5, #0xf\n    beq _02035360\n    ldr r0, _020353A8 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _020353AC ; =0x00000D88\n    ldr r5, [r1, r0]\n    bl LinkBattleRuleset_sizeof\n    cmp r0, #0x20\n    ble _020352FE\n    bl GF_AssertFail\n    bl PlayerProfile_sizeof\n    cmp r0, #0x20\n    beq _0203530A\n    bl GF_AssertFail\n    bl PlayerProfile_sizeof\n    add r1, r5, #0\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, #0x10\n    bl MI_CpuCopy8\n    bl LinkBattleRuleset_sizeof\n    add r2, r0, #0\n    ldr r0, _020353A8 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _020353B0 ; =0x00000D7C\n    ldr r0, [r1, r0]\n    add r1, r5, #0\n    add r1, #0x30\n    bl MI_CpuCopy8\n    add r0, r4, #0\n    bl PlayerProfile_GetTrainerID\n    str r0, [r5]\n    bl sub_0203993C\n    strb r0, [r5, #4]\n    bl sub_02039954\n    strb r0, [r5, #5]\n    ldr r0, _020353A8 ; =_021D4134\n    mov r2, #8\n    ldr r1, [r0, #8]\n    ldr r0, _020353B4 ; =0x00000D68\n    add r0, r1, r0\n    add r1, r5, #0\n    add r1, #8\n    bl MI_CpuCopy8\n    bl sub_02033AB8\n    add r5, #0x54\n    strb r0, [r5]\n    b _02035388\n    ldr r1, _020353A8 ; =_021D4134\n    ldr r2, [r1, #8]\n    ldr r1, _020353AC ; =0x00000D88\n    ldr r4, [r2, r1]\n    bl PlayerProfile_GetTrainerID\n    str r0, [r4]\n    bl sub_0203993C\n    strb r0, [r4, #4]\n    bl sub_02039954\n    strb r0, [r4, #5]\n    ldr r0, _020353A8 ; =_021D4134\n    add r4, #8\n    ldr r0, [r0, #8]\n    add r1, r4, #0\n    mov r2, #0x54\n    bl MI_CpuCopy8\n    ldr r0, _020353A8 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _020353AC ; =0x00000D88\n    ldr r0, [r1, r0]\n    mov r1, #0x5c\n    bl DC_FlushRange\n    ldr r0, _020353A8 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _020353AC ; =0x00000D88\n    ldr r0, [r1, r0]\n    mov r1, #0x5c\n    bl sub_02033240\n    pop {r3, r4, r5, pc}\n    nop\n    _020353A8: .word _021D4134\n    _020353AC: .word 0x00000D88\n    _020353B0: .word 0x00000D7C\n    _020353B4: .word 0x00000D68"
    );
    #endif
}

void sub_020353B8(void) {
    /* Original at 0x020353B8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _02035404 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02035408 ; =0x00000D88\n    ldr r4, [r1, r0]\n    bl sub_02035610\n    ldrb r1, [r4, #6]\n    cmp r1, r0\n    beq _02035402\n    bl sub_02035610\n    strb r0, [r4, #6]\n    ldr r0, _02035404 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02035408 ; =0x00000D88\n    ldr r0, [r1, r0]\n    mov r1, #0x5c\n    bl DC_FlushRange\n    ldr r0, _02035404 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02035408 ; =0x00000D88\n    ldr r0, [r1, r0]\n    mov r1, #0x5c\n    bl sub_02033240\n    ldr r3, _02035404 ; =_021D4134\n    ldr r2, _02035408 ; =0x00000D88\n    ldr r4, [r3, #8]\n    ldrh r3, [r3]\n    ldr r0, [r4, r2]\n    sub r2, #8\n    ldr r2, [r4, r2]\n    mov r1, #0x5c\n    bl sub_020339B4\n    pop {r4, pc}\n    _02035404: .word _021D4134\n    _02035408: .word 0x00000D88"
    );
    #endif
}

void sub_0203540C(void) {
    /* Original at 0x0203540C */
    /* Requires manual decompilation - 188 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl sub_02033298\n    add r5, r0, #0\n    bl sub_020347CC\n    add r6, r0, #0\n    bl sub_020353B8\n    bl sub_020338F4\n    cmp r0, #0\n    bne _0203544A\n    bl sub_0203567C\n    cmp r0, #0\n    bne _0203544A\n    ldr r0, _020355AC ; =_021D4134\n    ldr r3, _020355B0 ; =0x00000D95\n    ldr r1, [r0, #8]\n    ldrb r0, [r1, r3]\n    lsl r2, r0, #0x1d\n    lsr r2, r2, #0x1f\n    beq _0203544A\n    mov r2, #1\n    bic r0, r2\n    mov r2, #1\n    orr r0, r2\n    strb r0, [r1, r3]\n    ldr r0, _020355AC ; =_021D4134\n    ldr r3, _020355B4 ; =0x00000D8E\n    ldr r2, [r0, #8]\n    ldr r0, _020355B8 ; =0x0000FFFF\n    ldrh r1, [r2, r3]\n    cmp r1, r0\n    bne _0203545A\n    strh r4, [r2, r3]\n    ldr r0, _020355AC ; =_021D4134\n    ldr r3, _020355B0 ; =0x00000D95\n    ldr r1, [r0, #8]\n    ldrb r0, [r1, r3]\n    lsl r2, r0, #0x1e\n    lsr r2, r2, #0x1f\n    beq _02035490\n    sub r2, r3, #7\n    ldrh r2, [r1, r2]\n    cmp r2, r4\n    bls _0203547A\n    mov r2, #1\n    bic r0, r2\n    mov r2, #1\n    orr r0, r2\n    strb r0, [r1, r3]\n    cmp r6, #0\n    beq _02035490\n    ldr r0, _020355AC ; =_021D4134\n    ldr r2, _020355B0 ; =0x00000D95\n    ldr r0, [r0, #8]\n    mov r1, #1\n    ldrb r3, [r0, r2]\n    bic r3, r1\n    mov r1, #1\n    orr r1, r3\n    strb r1, [r0, r2]\n    bl sub_020332AC\n    cmp r0, #0x19\n    bne _0203549E\n    mov r0, #0\n    bl sub_020399DC\n    cmp r5, #9\n    bls _020354A4\n    b _020355A6\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _020354B0: ; jump table\n    ldr r0, _020355AC ; =_021D4134\n    ldr r2, [r0, #8]\n    ldr r0, _020355BC ; =0x00000D92\n    ldrb r1, [r2, r0]\n    cmp r1, #1\n    bne _020354D8\n    bl sub_020350D4\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    cmp r1, #2\n    bne _020355A6\n    mov r1, #3\n    strb r1, [r2, r0]\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    ldr r0, _020355AC ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _020355BC ; =0x00000D92\n    ldrb r0, [r1, r0]\n    cmp r0, #1\n    bne _020354F8\n    bl sub_020338D0\n    cmp r0, #0\n    bne _020355A6\n    ldr r0, _020355AC ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _020355BC ; =0x00000D92\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    bne _020355A6\n    bl sub_020338D0\n    add sp, #8\n    cmp r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, _020355AC ; =_021D4134\n    ldr r3, [r0, #8]\n    cmp r3, #0\n    beq _020355A6\n    ldr r1, _020355B0 ; =0x00000D95\n    mov r0, #1\n    ldrb r2, [r3, r1]\n    add sp, #8\n    bic r2, r0\n    mov r0, #1\n    orr r0, r2\n    strb r0, [r3, r1]\n    pop {r4, r5, r6, pc}\n    bl sub_02033468\n    ldr r3, _020355AC ; =_021D4134\n    ldr r2, _020355C0 ; =0x00000D91\n    ldr r4, [r3, #8]\n    ldrb r1, [r4, r2]\n    cmp r1, #0\n    bne _02035544\n    sub r1, r2, #5\n    strh r0, [r4, r1]\n    ldr r0, [r3, #8]\n    mov r1, #5\n    strb r1, [r0, r2]\n    b _02035548\n    sub r0, r1, #1\n    strb r0, [r4, r2]\n    ldr r0, _020355AC ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _020355C4 ; =0x00000D8C\n    ldrh r5, [r1, r0]\n    add r0, #9\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1f\n    beq _02035562\n    bl WM_GetNextTgid\n    ldr r1, _020355AC ; =_021D4134\n    strh r0, [r1]\n    bl sub_020352D8\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    add r4, r0, #0\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02035724\n    str r0, [sp]\n    ldr r1, _020355AC ; =_021D4134\n    ldr r0, _020355B0 ; =0x00000D95\n    ldr r2, [r1, #8]\n    add r3, r4, #0\n    ldrb r0, [r2, r0]\n    add r2, r5, #0\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    str r0, [sp, #4]\n    ldrh r1, [r1]\n    mov r0, #0\n    bl sub_02033668\n    ldr r0, _020355AC ; =_021D4134\n    ldr r1, [r0, #8]\n    mov r0, #0xd9\n    lsl r0, r0, #4\n    strb r5, [r1, r0]\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _020355AC: .word _021D4134\n    _020355B0: .word 0x00000D95\n    _020355B4: .word 0x00000D8E\n    _020355B8: .word 0x0000FFFF\n    _020355BC: .word 0x00000D92\n    _020355C0: .word 0x00000D91\n    _020355C4: .word 0x00000D8C"
    );
    #endif
}

void sub_020355C8(void) {
    sub_0203540C();
}

void sub_020355DC(void) {
    /* Original at 0x020355DC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0203560C ; =_021D4134\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _020355EC\n    mov r0, #0\n    pop {r4, pc}\n    bl sub_02033298\n    cmp r0, #4\n    beq _020355F8\n    mov r0, #0\n    pop {r4, pc}\n    bl sub_02033250\n    mov r2, #1\n    add r1, r2, #0\n    lsl r1, r4\n    tst r0, r1\n    bne _02035608\n    mov r2, #0\n    add r0, r2, #0\n    pop {r4, pc}\n    _0203560C: .word _021D4134"
    );
    #endif
}

void sub_02035610(void) {
    sub_020355DC(0);
}

void sub_02035630(void) {
    /* Original at 0x02035630 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02035648 ; =_021D4134\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    beq _02035644\n    ldr r0, _0203564C ; =0x00000D92\n    ldrb r0, [r1, r0]\n    cmp r0, #3\n    bne _02035644\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02035648: .word _021D4134\n    _0203564C: .word 0x00000D92"
    );
    #endif
}

void sub_02035650(void) {
    /* Original at 0x02035650 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02035660 ; =_021D4134\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _0203565C\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02035660: .word _021D4134"
    );
    #endif
}

void sub_02035664(void) {
    sub_02033920(1);
}

void sub_0203567C(void) {
    sub_02033250(0);
}

void sub_0203569C(void) {
    /* Original at 0x0203569C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020356B8 ; =_021D4134\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    beq _020356B2\n    ldr r0, _020356BC ; =0x00000D95\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _020356B2\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _020356B8: .word _021D4134\n    _020356BC: .word 0x00000D95"
    );
    #endif
}

void sub_020356C0(void) {
    /* Original at 0x020356C0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r1, _020356E4 ; =_021D4134\n    ldr r2, [r1, #8]\n    cmp r2, #0\n    beq _020356DE\n    ldr r4, _020356E8 ; =0x00000D95\n    lsl r0, r0, #0x18\n    ldrb r1, [r2, r4]\n    lsr r0, r0, #0x18\n    mov r3, #4\n    lsl r0, r0, #0x1f\n    bic r1, r3\n    lsr r0, r0, #0x1d\n    orr r0, r1\n    strb r0, [r2, r4]\n    pop {r3, r4}\n    bx lr\n    nop\n    _020356E4: .word _021D4134\n    _020356E8: .word 0x00000D95"
    );
    #endif
}

void sub_020356EC(void) {
    /* Original at 0x020356EC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r5, _02035718 ; =_021D4134\n    ldr r2, [r5, #8]\n    cmp r2, #0\n    beq _02035712\n    ldr r4, _0203571C ; =0x00000D95\n    lsl r0, r0, #0x18\n    ldrb r1, [r2, r4]\n    lsr r0, r0, #0x18\n    mov r3, #2\n    lsl r0, r0, #0x1f\n    bic r1, r3\n    lsr r0, r0, #0x1e\n    orr r0, r1\n    strb r0, [r2, r4]\n    ldr r2, _02035720 ; =0x0000FFFF\n    ldr r1, [r5, #8]\n    sub r0, r4, #7\n    strh r2, [r1, r0]\n    pop {r4, r5}\n    bx lr\n    nop\n    _02035718: .word _021D4134\n    _0203571C: .word 0x00000D95\n    _02035720: .word 0x0000FFFF"
    );
    #endif
}

void sub_02035724(void) {
    /* Original at 0x02035724 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl WM_GetDispersionBeaconPeriod\n    add r4, r0, #0\n    cmp r5, #0x29\n    blo _02035736\n    bl GF_AssertFail\n    cmp r5, #0xa\n    bne _02035740\n    lsl r0, r4, #0xe\n    lsr r0, r0, #0x10\n    pop {r3, r4, r5, pc}\n    cmp r5, #9\n    beq _02035748\n    cmp r5, #0xd\n    bne _0203574E\n    lsl r0, r4, #0xe\n    lsr r0, r0, #0x10\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02035754(void) {
    /* Original at 0x02035754 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203577C ; =_021D4134\n    ldr r3, [r1, #8]\n    cmp r3, #0\n    beq _02035776\n    lsl r1, r0, #1\n    add r2, r3, r1\n    ldr r1, _02035780 ; =0x00000D44\n    ldrh r1, [r2, r1]\n    cmp r1, #0\n    beq _02035776\n    mov r1, #0x45\n    lsl r1, r1, #2\n    add r2, r3, r1\n    mov r1, #0xc0\n    mul r1, r0\n    add r0, r2, r1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _0203577C: .word _021D4134\n    _02035780: .word 0x00000D44"
    );
    #endif
}

void sub_02035784(void) {
    /* Original at 0x02035784 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02035790 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02035794 ; =0x00000D78\n    ldr r0, [r1, r0]\n    bx lr\n    nop\n    _02035790: .word _021D4134\n    _02035794: .word 0x00000D78"
    );
    #endif
}

void sub_02035798(void) {
    /* Original at 0x02035798 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020357BC ; =_021D4134\n    ldr r3, [r1, #8]\n    lsl r1, r0, #1\n    add r2, r3, r1\n    ldr r1, _020357C0 ; =0x00000D44\n    ldrh r1, [r2, r1]\n    cmp r1, #0\n    bne _020357AC\n    mov r0, #0\n    bx lr\n    mov r1, #0x59\n    lsl r1, r1, #2\n    add r2, r3, r1\n    mov r1, #0xc0\n    mul r1, r0\n    add r0, r2, r1\n    add r0, #0x10\n    bx lr\n    _020357BC: .word _021D4134\n    _020357C0: .word 0x00000D44"
    );
    #endif
}

void sub_020357C4(void) {
    /* Original at 0x020357C4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _020357F4 ; =_021D4134\n    add r4, r1, #0\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _020357F0\n    cmp r4, #8\n    blt _020357DA\n    bl GF_AssertFail\n    ldr r1, _020357F4 ; =_021D4134\n    add r0, r5, #0\n    ldr r2, [r1, #8]\n    ldr r1, _020357F8 ; =0x00000D14\n    add r3, r2, r1\n    mov r2, #6\n    add r1, r4, #0\n    mul r1, r2\n    add r1, r3, r1\n    bl MI_CpuCopy8\n    pop {r3, r4, r5, pc}\n    nop\n    _020357F4: .word _021D4134\n    _020357F8: .word 0x00000D14"
    );
    #endif
}

void sub_020357FC(void) {
    /* Original at 0x020357FC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02035814 ; =_021D4134\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    beq _0203580E\n    ldr r0, _02035818 ; =0x00000D95\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1f\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02035814: .word _021D4134\n    _02035818: .word 0x00000D95"
    );
    #endif
}

void sub_0203581C(void) {
    /* Original at 0x0203581C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02035830 ; =_021D4134\n    ldr r3, [r0, #8]\n    cmp r3, #0\n    beq _0203582E\n    ldr r1, _02035834 ; =0x00000D95\n    mov r0, #0x10\n    ldrb r2, [r3, r1]\n    orr r0, r2\n    strb r0, [r3, r1]\n    bx lr\n    _02035830: .word _021D4134\n    _02035834: .word 0x00000D95"
    );
    #endif
}

void sub_02035838(void) {
    /* Original at 0x02035838 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02035848 ; =_021D4134\n    ldr r3, _0203584C ; =MI_CpuCopy8\n    ldr r2, [r1, #8]\n    ldr r1, _02035850 ; =0x00000D68\n    add r1, r2, r1\n    mov r2, #8\n    bx r3\n    nop\n    _02035848: .word _021D4134\n    _0203584C: .word MI_CpuCopy8\n    _02035850: .word 0x00000D68"
    );
    #endif
}

void sub_02035854(void) {
    /* Original at 0x02035854 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl LinkBattleRuleset_sizeof\n    ldr r1, _02035870 ; =_021D4134\n    add r2, r0, #0\n    ldr r3, [r1, #8]\n    ldr r1, _02035874 ; =0x00000D7C\n    add r0, r4, #0\n    ldr r1, [r3, r1]\n    bl MI_CpuCopy8\n    pop {r4, pc}\n    nop\n    _02035870: .word _021D4134\n    _02035874: .word 0x00000D7C"
    );
    #endif
}

void sub_02035878(void) {
    /* Original at 0x02035878 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02035884 ; =_021D4134\n    ldr r1, [r0, #8]\n    ldr r0, _02035888 ; =0x00000D7C\n    ldr r0, [r1, r0]\n    bx lr\n    nop\n    _02035884: .word _021D4134\n    _02035888: .word 0x00000D7C"
    );
    #endif
}

void sub_0203588C(void) {
    /* Original at 0x0203588C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_020352D8\n    ldr r3, _020358A8 ; =_021D4134\n    ldr r2, _020358AC ; =0x00000D88\n    ldr r4, [r3, #8]\n    ldrh r3, [r3]\n    ldr r0, [r4, r2]\n    sub r2, #8\n    ldr r2, [r4, r2]\n    mov r1, #0x5c\n    bl sub_020339B4\n    pop {r4, pc}\n    _020358A8: .word _021D4134\n    _020358AC: .word 0x00000D88"
    );
    #endif
}

void sub_020358B0(void) {
    sub_02033A44();
}

void sub_020358B8(void) {
    /* Original at 0x020358B8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _020358CC ; =_021D4134\n    mov r2, #0x54\n    ldr r1, [r1, #8]\n    bl MI_CpuCopy8\n    bl sub_0203588C\n    pop {r3, pc}\n    nop\n    _020358CC: .word _021D4134"
    );
    #endif
}

void sub_020358D0(void) {
    /* Original at 0x020358D0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020358F8 ; =_021D4134\n    ldr r3, [r1, #8]\n    cmp r3, #0\n    beq _020358F4\n    lsl r1, r0, #1\n    add r2, r3, r1\n    ldr r1, _020358FC ; =0x00000D44\n    ldrh r1, [r2, r1]\n    cmp r1, #0\n    beq _020358F4\n    mov r1, #0x59\n    lsl r1, r1, #2\n    add r2, r3, r1\n    mov r1, #0xc0\n    mul r1, r0\n    add r0, r2, r1\n    add r0, #8\n    bx lr\n    mov r0, #0\n    bx lr\n    _020358F8: .word _021D4134\n    _020358FC: .word 0x00000D44"
    );
    #endif
}
