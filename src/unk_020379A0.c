/* Decompiled from asm/unk_020379A0.s */
#include "global.h"

void sub_020379A0(void) {
    /* Original at 0x020379A0 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _020379F0 ; =_021D414C\n    ldr r1, [r1]\n    cmp r1, #0\n    bne _020379C0\n    mov r1, #0x99\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    ldr r1, _020379F0 ; =_021D414C\n    mov r2, #0x99\n    str r0, [r1]\n    mov r1, #0\n    lsl r2, r2, #2\n    bl MI_CpuFill8\n    ldr r1, _020379F0 ; =_021D414C\n    mov r3, #0\n    mov r0, #0xff\n    ldr r2, [r1]\n    add r2, r2, r3\n    add r3, r3, #1\n    strb r0, [r2, #0x10]\n    cmp r3, #8\n    blt _020379C6\n    ldr r3, _020379F0 ; =_021D414C\n    ldr r1, _020379F4 ; =0x00000261\n    ldr r2, [r3]\n    strb r0, [r2, r1]\n    ldr r4, [r3]\n    add r2, r1, #1\n    strb r0, [r4, r2]\n    ldr r2, [r3]\n    mov r4, #0\n    add r0, r1, #2\n    strb r4, [r2, r0]\n    ldr r2, [r3]\n    sub r0, r1, #1\n    strb r4, [r2, r0]\n    pop {r4, pc}\n    _020379F0: .word _021D414C\n    _020379F4: .word 0x00000261"
    );
    #endif
}

void sub_020379F8(void) {
    Heap_Free(0);
}

void sub_02037A10(void) {
    /* Original at 0x02037A10 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02037A20 ; =_021D414C\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02037A1C\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02037A20: .word _021D414C"
    );
    #endif
}

void sub_02037A24(void) {
    /* Original at 0x02037A24 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    ldrb r1, [r2]\n    add r5, r0, #0\n    add r0, sp, #0\n    strb r1, [r0]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02037A8E\n    add r0, sp, #0\n    strb r5, [r0, #1]\n    ldrb r1, [r0]\n    strb r1, [r0, #2]\n    add r1, sp, #0\n    mov r0, #0x12\n    add r1, #1\n    bl sub_02037184\n    ldr r6, _02037A94 ; =_021D414C\n    add r4, sp, #0\n    ldr r0, [r6]\n    ldrb r1, [r4]\n    add r0, r0, r5\n    mov r5, #0\n    strb r1, [r0, #0x10]\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02037A70\n    ldr r0, [r6]\n    ldrb r1, [r4]\n    add r0, r0, r5\n    ldrb r0, [r0, #0x10]\n    cmp r1, r0\n    bne _02037A8E\n    add r5, r5, #1\n    cmp r5, #8\n    blt _02037A58\n    mov r0, #0x11\n    add r1, sp, #0\n    bl sub_02037184\n    cmp r0, #0\n    bne _02037A8E\n    ldr r0, _02037A94 ; =_021D414C\n    mov r2, #1\n    ldr r1, [r0]\n    mov r0, #0x26\n    lsl r0, r0, #4\n    strb r2, [r1, r0]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02037A94: .word _021D414C"
    );
    #endif
}

void sub_02037A98(void) {
    /* Original at 0x02037A98 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02037AA8 ; =_021D414C\n    ldrb r3, [r2, #1]\n    ldr r1, [r0]\n    ldrb r0, [r2]\n    add r0, r1, r0\n    strb r3, [r0, #0x10]\n    bx lr\n    nop\n    _02037AA8: .word _021D414C"
    );
    #endif
}

void sub_02037AAC(void) {
    /* Original at 0x02037AAC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02037AB8 ; =_021D414C\n    ldrb r2, [r2]\n    ldr r1, [r0]\n    ldr r0, _02037ABC ; =0x00000261\n    strb r2, [r1, r0]\n    bx lr\n    _02037AB8: .word _021D414C\n    _02037ABC: .word 0x00000261"
    );
    #endif
}

void sub_02037AC0(void) {
    /* Original at 0x02037AC0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _02037AD4 ; =_021D414C\n    ldr r1, _02037AD8 ; =0x00000262\n    ldr r3, [r2]\n    strb r0, [r3, r1]\n    ldr r2, [r2]\n    mov r3, #1\n    add r0, r1, #1\n    strb r3, [r2, r0]\n    bx lr\n    nop\n    _02037AD4: .word _021D414C\n    _02037AD8: .word 0x00000262"
    );
    #endif
}

void sub_02037ADC(void) {
    /* Original at 0x02037ADC */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02037B30 ; =_021D414C\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02037B2C\n    ldr r1, _02037B34 ; =0x00000263\n    ldrb r0, [r2, r1]\n    cmp r0, #0\n    beq _02037B06\n    sub r1, r1, #1\n    mov r0, #0x10\n    add r1, r2, r1\n    bl sub_020376E0\n    cmp r0, #0\n    beq _02037B06\n    ldr r0, _02037B30 ; =_021D414C\n    mov r2, #0\n    ldr r1, [r0]\n    ldr r0, _02037B34 ; =0x00000263\n    strb r2, [r1, r0]\n    ldr r0, _02037B30 ; =_021D414C\n    ldr r1, [r0]\n    mov r0, #0x26\n    lsl r0, r0, #4\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _02037B2C\n    mov r0, #0x11\n    add r1, #0x10\n    bl sub_02037184\n    cmp r0, #0\n    beq _02037B2C\n    ldr r0, _02037B30 ; =_021D414C\n    mov r2, #0\n    ldr r1, [r0]\n    mov r0, #0x26\n    lsl r0, r0, #4\n    strb r2, [r1, r0]\n    pop {r3, pc}\n    nop\n    _02037B30: .word _021D414C\n    _02037B34: .word 0x00000263"
    );
    #endif
}

void sub_02037B38(void) {
    /* Original at 0x02037B38 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02037B54 ; =_021D414C\n    ldr r2, [r1]\n    cmp r2, #0\n    bne _02037B44\n    mov r0, #1\n    bx lr\n    ldr r1, _02037B58 ; =0x00000261\n    ldrb r1, [r2, r1]\n    cmp r1, r0\n    bne _02037B50\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02037B54: .word _021D414C\n    _02037B58: .word 0x00000261"
    );
    #endif
}

void sub_02037B5C(void) {
    /* Original at 0x02037B5C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02037B68 ; =_021D414C\n    ldr r1, [r1]\n    add r0, r1, r0\n    ldrb r0, [r0, #0x10]\n    bx lr\n    nop\n    _02037B68: .word _021D414C"
    );
    #endif
}

void sub_02037B6C(void) {
    /* Original at 0x02037B6C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    lsl r4, r0, #1\n    ldr r0, _02037B84 ; =_021D414C\n    ldrb r3, [r2]\n    ldr r1, [r0]\n    strb r3, [r1, r4]\n    ldr r0, [r0]\n    ldrb r1, [r2, #1]\n    add r0, r0, r4\n    strb r1, [r0, #1]\n    pop {r3, r4}\n    bx lr\n    _02037B84: .word _021D414C"
    );
    #endif
}

u8 sub_02037B88(void) {
    return 2;
}

void sub_02037B8C(void) {
    sub_020376E0(0x13);
}

void sub_02037BA0(void) {
    /* Original at 0x02037BA0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _02037BC4 ; =_021D414C\n    ldr r3, [r2]\n    cmp r3, #0\n    bne _02037BAE\n    mov r0, #0\n    mvn r0, r0\n    bx lr\n    lsl r2, r0, #1\n    ldrb r0, [r3, r2]\n    cmp r1, r0\n    bne _02037BBC\n    add r0, r3, r2\n    ldrb r0, [r0, #1]\n    bx lr\n    mov r0, #0\n    mvn r0, r0\n    bx lr\n    nop\n    _02037BC4: .word _021D414C"
    );
    #endif
}

void sub_02037BC8(void) {
    /* Original at 0x02037BC8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    ldr r6, _02037BE8 ; =_021D414C\n    add r5, r4, #0\n    add r7, r4, #0\n    ldr r0, [r6]\n    add r1, r7, #0\n    add r0, r0, r5\n    mov r2, #2\n    bl MI_CpuFill8\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #8\n    blt _02037BD2\n    pop {r3, r4, r5, r6, r7, pc}\n    _02037BE8: .word _021D414C"
    );
    #endif
}

void sub_02037BEC(void) {
    /* Original at 0x02037BEC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r4, #0\n    mov r0, #0x96\n    ldr r1, _02037C08 ; =_021D414C\n    add r3, r4, #0\n    lsl r0, r0, #2\n    ldr r2, [r1]\n    add r2, r2, r4\n    add r4, r4, #1\n    strb r3, [r2, r0]\n    cmp r4, #8\n    blt _02037BF8\n    pop {r3, r4}\n    bx lr\n    _02037C08: .word _021D414C"
    );
    #endif
}

void sub_02037C0C(void) {
    /* Original at 0x02037C0C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02037C40 ; =_021D414C\n    ldr r3, [r2]\n    cmp r3, #0\n    beq _02037C3A\n    add r4, r0, #0\n    mov r2, #0x48\n    mul r4, r2\n    add r3, #0x18\n    add r0, r1, #0\n    add r1, r3, r4\n    mov r2, #0x46\n    bl MI_CpuCopy8\n    ldr r1, _02037C40 ; =_021D414C\n    mov r0, #0x14\n    ldr r1, [r1]\n    add r1, #0x18\n    add r1, r1, r4\n    bl sub_020376E0\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02037C40: .word _021D414C"
    );
    #endif
}

void sub_02037C44(void) {
    /* Original at 0x02037C44 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02037C64 ; =_021D414C\n    ldr r3, [r1]\n    mov r1, #0x96\n    add r2, r3, r0\n    lsl r1, r1, #2\n    ldrb r1, [r2, r1]\n    cmp r1, #0\n    beq _02037C5E\n    mov r1, #0x48\n    add r3, #0x18\n    mul r1, r0\n    add r0, r3, r1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02037C64: .word _021D414C"
    );
    #endif
}

void sub_02037C68(void) {
    /* Original at 0x02037C68 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r3, _02037C90 ; =_021D414C\n    add r1, r0, #0\n    ldr r0, [r3]\n    mov r5, #1\n    add r4, r0, r1\n    mov r0, #0x96\n    lsl r0, r0, #2\n    strb r5, [r4, r0]\n    ldr r3, [r3]\n    add r0, r2, #0\n    mov r2, #0x48\n    add r3, #0x18\n    mul r2, r1\n    add r1, r3, r2\n    mov r2, #0x46\n    bl MI_CpuCopy8\n    pop {r3, r4, r5, pc}\n    nop\n    _02037C90: .word _021D414C"
    );
    #endif
}
