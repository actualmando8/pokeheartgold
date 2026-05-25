/* Decompiled from asm/overlay_01_021FE590.s */
#include "global.h"

void ov01_021FE590(void) {
    ov01_021F1430(0xc, 0);
}

void ov01_021FE5A4(void) {
    ov01_021FE61C();
    ov01_021F1448(r4);
}

void ov01_021FE5B4(void) {
    /* Original at 0x021FE5B4 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0]\n    add r1, r1, #1\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021FE5BC(void) {
    GF_AssertFail();
}

void ov01_021FE5CC(void) {
    /* Original at 0x021FE5CC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _021FE614\n    mov r0, #1\n    str r0, [r4, #4]\n    ldr r0, [r4, #8]\n    mov r1, #0xb\n    mov r2, #0x80\n    bl ov01_021F18D4\n    ldr r0, [r4, #8]\n    mov r1, #0xb\n    mov r2, #0x95\n    bl ov01_021F1908\n    ldr r0, [r4, #8]\n    mov r1, #0xc\n    mov r2, #0x1a\n    mov r3, #1\n    bl ov01_021F1930\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _021FE618 ; =ov01_022090AC\n    mov r2, #0xb\n    str r0, [sp, #8]\n    ldr r0, [r4, #8]\n    mov r1, #0xd\n    add r3, r2, #0\n    bl ov01_021F1758\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021FE618: .word ov01_022090AC"
    );
    #endif
}

void ov01_021FE61C(void) {
    /* Original at 0x021FE61C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #1\n    bne _021FE64A\n    mov r0, #0\n    str r0, [r4, #4]\n    ldr r0, [r4, #8]\n    mov r1, #0xb\n    bl ov01_021F18FC\n    ldr r0, [r4, #8]\n    mov r1, #0xb\n    bl ov01_021F1924\n    ldr r0, [r4, #8]\n    mov r1, #0xc\n    bl ov01_021F1970\n    ldr r0, [r4, #8]\n    mov r1, #0xd\n    bl ov01_021F18C8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FE64C(void) {
    ov01_021FE5CC();
}

void ov01_021FE65C(void) {
    ov01_021FE61C();
}

void ov01_021FE66C(void) {
    /* Original at 0x021FE66C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    bl ov01_021F146C\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, sp, #0x14\n    bl ov01_021F93AC\n    mov r0, #2\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x1c]\n    add r0, r4, #0\n    mov r1, #0x10\n    str r4, [sp, #8]\n    bl ov01_021F1450\n    str r0, [sp, #0xc]\n    add r0, sp, #8\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r1, _021FE6B0 ; =ov01_02209084\n    add r0, r4, #0\n    add r2, sp, #0x14\n    mov r3, #0\n    bl ov01_021F1620\n    add sp, #0x20\n    pop {r3, r4, r5, pc}\n    nop\n    _021FE6B0: .word ov01_02209084"
    );
    #endif
}

void ov01_021FE6B4(void) {
    /* Original at 0x021FE6B4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r0, #0\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0xc\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r4, #0x10]\n    bl ov01_021FE64C\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0xc]\n    mov r1, #0xd\n    add r2, sp, #0\n    bl ov01_021F1740\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x10]\n    bl ov01_021FE5B4\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov01_021FE6F4(void) {
    sub_02023DA4(*((u32*)(r1 + 0x18)));
    ov01_021FE5BC(*((u32*)(r4 + 0x10)));
    ov01_021FE65C(*((u32*)(r4 + 0x10)));
}

void ov01_021FE70C(void) {
    /* Original at 0x021FE70C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    ldr r5, _021FE764 ; =ov01_02209098\n    add r2, r0, #0\n    add r4, r1, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r3]\n    ldr r0, [r4, #8]\n    cmp r0, #1\n    bne _021FE748\n    mov r1, #0\n    str r1, [r4, #8]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #5\n    blt _021FE742\n    add r0, r2, #0\n    bl ov01_021F1640\n    add sp, #0x14\n    pop {r4, r5, pc}\n    ldr r0, [r4, #0x18]\n    bl sub_02023F1C\n    ldr r1, [r4, #4]\n    ldr r0, [r4, #0x18]\n    lsl r2, r1, #2\n    add r1, sp, #0\n    ldr r1, [r1, r2]\n    bl sub_02023F04\n    cmp r0, #1\n    bne _021FE75E\n    mov r0, #1\n    str r0, [r4, #8]\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _021FE764: .word ov01_02209098"
    );
    #endif
}

void ov01_021FE768(void) {
    sub_02068DB8();
    sub_02023E50(*((u32*)(r4 + 0x18)));
}
