/* Decompiled from asm/unk_020163E0.s */
#include "global.h"

void sub_020163E0(void) {
    /* Original at 0x020163E0 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    ldr r0, _02016488 ; =sub_020164D0\n    mov r1, #0x50\n    mov r2, #0\n    bl CreateSysTaskAndEnvironment\n    str r0, [sp, #4]\n    bl SysTask_GetData\n    add r4, r0, #0\n    cmp r5, #0\n    beq _02016424\n    cmp r6, #0\n    bne _02016414\n    add r0, r5, #0\n    mov r1, #0\n    bl PaletteData_GetUnfadedBuf\n    str r0, [sp]\n    ldr r0, _0201648C ; =sub_020165D4\n    str r0, [r4, #4]\n    b _0201643E\n    add r0, r5, #0\n    mov r1, #1\n    bl PaletteData_GetUnfadedBuf\n    str r0, [sp]\n    ldr r0, _02016490 ; =sub_020165F0\n    str r0, [r4, #4]\n    b _0201643E\n    cmp r6, #0\n    bne _02016434\n    bl GetMainBgPlttAddr\n    str r0, [sp]\n    ldr r0, _02016494 ; =sub_020165A4\n    str r0, [r4, #4]\n    b _0201643E\n    bl GetSubBgPlttAddr\n    str r0, [sp]\n    ldr r0, _02016498 ; =sub_020165BC\n    str r0, [r4, #4]\n    ldr r1, [sp]\n    lsl r0, r7, #5\n    str r0, [sp, #8]\n    add r0, r1, r0\n    add r1, r4, #0\n    add r1, #0xc\n    mov r2, #0x20\n    bl MIi_CpuCopy16\n    ldr r1, [sp]\n    ldr r0, [sp, #8]\n    mov r2, #0x20\n    add r0, r1, r0\n    add r1, r4, #0\n    add r1, #0x2c\n    bl MIi_CpuCopy16\n    ldr r0, [sp, #4]\n    mov r1, #1\n    str r0, [r4]\n    add r0, r4, #0\n    str r5, [r4, #8]\n    add r0, #0x4c\n    strb r6, [r0]\n    add r0, r4, #0\n    add r0, #0x4d\n    strb r7, [r0]\n    add r0, r4, #0\n    add r0, #0x4e\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x4f\n    strb r1, [r0]\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02016488: .word sub_020164D0\n    _0201648C: .word sub_020165D4\n    _02016490: .word sub_020165F0\n    _02016494: .word sub_020165A4\n    _02016498: .word sub_020165BC"
    );
    #endif
}

void sub_0201649C(void) {
    /* Original at 0x0201649C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    beq _020164AA\n    cmp r1, #1\n    beq _020164B2\n    cmp r1, #2\n    beq _020164BA\n    bx lr\n    mov r1, #0\n    add r0, #0x4e\n    strb r1, [r0]\n    bx lr\n    mov r1, #2\n    add r0, #0x4e\n    strb r1, [r0]\n    bx lr\n    mov r1, #3\n    add r0, #0x4e\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_020164C4(void) {
    DestroySysTaskAndEnvironment();
}

void sub_020164D0(void) {
    /* Original at 0x020164D0 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x4e\n    ldrb r0, [r0]\n    cmp r0, #3\n    bhi _02016546\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _020164EC: ; jump table\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x4f\n    strb r1, [r0]\n    mov r0, #1\n    add r4, #0x4e\n    strb r0, [r4]\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl sub_02016548\n    cmp r0, #1\n    bne _02016518\n    add r1, r4, #0\n    ldr r2, [r4, #4]\n    add r0, r4, #0\n    add r1, #0x2c\n    blx r2\n    add r0, r4, #0\n    add r0, #0x4f\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x4f\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4f\n    ldrb r0, [r0]\n    cmp r0, #0x20\n    bne _02016546\n    mov r0, #0\n    add r4, #0x4f\n    strb r0, [r4]\n    pop {r3, r4, r5, pc}\n    ldr r2, [r4, #4]\n    add r0, r4, #0\n    add r1, #0xc\n    blx r2\n    add r0, r5, #0\n    bl DestroySysTaskAndEnvironment\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02016548(void) {
    /* Original at 0x02016548 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    add r1, r0, #0\n    add r1, #0x4f\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _02016576\n    mov r1, #0x1e\n    mov r4, #0\n    mov r3, #1\n    lsl r1, r1, #0xa\n    add r2, r3, #0\n    lsl r2, r4\n    tst r2, r1\n    beq _02016568\n    ldrh r2, [r0, #0xc]\n    strh r2, [r0, #0x2c]\n    add r4, r4, #1\n    add r0, r0, #2\n    cmp r4, #0x10\n    blo _0201655C\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    cmp r1, #0x18\n    bne _0201659E\n    mov r1, #0x1e\n    mov r5, #0\n    add r4, r0, #0\n    mov r3, #1\n    lsl r1, r1, #0xa\n    add r2, r3, #0\n    lsl r2, r5\n    tst r2, r1\n    beq _02016590\n    ldrh r2, [r0, #0x2a]\n    strh r2, [r4, #0x2c]\n    add r5, r5, #1\n    add r4, r4, #2\n    cmp r5, #0x10\n    blo _02016584\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    mov r0, #0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void sub_020165A4(void) {
    BG_LoadPlttData(0, 0x20);
}

void sub_020165BC(void) {
    BG_LoadPlttData(4, 0x20);
}

void sub_020165D4(void) {
    PaletteData_LoadPalette(0x20, 0);
}

void sub_020165F0(void) {
    PaletteData_LoadPalette(0x20, 1);
}
