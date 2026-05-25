/* Decompiled from asm/unk_02096C88.s */
#include "global.h"

void sub_02096C88(void) {
    /* Original at 0x02096C88 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    mov r1, #0x58\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02096C9E\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x58\n    bl memset\n    ldr r1, _02096CC4 ; =0x00001BD0\n    add r0, r6, #0\n    str r5, [r4]\n    bl Heap_Alloc\n    str r0, [r4, #0x4c]\n    ldr r1, _02096CC4 ; =0x00001BD0\n    add r0, r6, #0\n    bl Heap_Alloc\n    str r0, [r4, #0x50]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02096CC4: .word 0x00001BD0"
    );
    #endif
}

void sub_02096CC8(void) {
    /* Original at 0x02096CC8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    bl Heap_Free\n    ldr r0, [r4, #0x50]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void sub_02096CE0(void) {
    /* Original at 0x02096CE0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02096CEC ; =sub_0203410C\n    add r2, r0, #0\n    ldr r0, _02096CF0 ; =_0210884C\n    mov r1, #0x87\n    bx r3\n    nop\n    _02096CEC: .word sub_0203410C\n    _02096CF0: .word _0210884C"
    );
    #endif
}

void sub_02096CF4(void) {
    /* Original at 0x02096CF4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #2\n    bl sub_02038C1C\n    bl sub_02037FF0\n    ldr r0, [r4]\n    ldr r0, [r0, #0x20]\n    bl sub_0205AD24\n    mov r0, #0\n    bl sub_0205A904\n    pop {r4, pc}"
    );
    #endif
}

void sub_02096D14(void) {
    /* Original at 0x02096D14 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    add r6, r3, #0\n    str r2, [sp]\n    cmp r5, #0x12\n    blo _02096D26\n    bl GF_AssertFail\n    add r0, r6, #4\n    cmp r0, #0x18\n    bls _02096D30\n    bl GF_AssertFail\n    add r4, r7, #4\n    ldr r1, [sp]\n    add r0, r4, #4\n    add r2, r6, #0\n    str r5, [r7, #4]\n    bl memcpy\n    mov r0, #0x82\n    add r1, r4, #0\n    mov r2, #0x18\n    bl sub_02037030\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02096D4C(void) {
    sub_02096D14();
}

void sub_02096D60(void) {
    GF_AssertFail();
}

void sub_02096D80(void) {
    /* Original at 0x02096D80 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r1, r0, #0\n    mov r0, #0x46\n    add r4, r2, #0\n    ldrsh r2, [r3, r0]\n    mov r0, #1\n    lsl r0, r1\n    orr r2, r0\n    add r0, r3, #0\n    add r0, #0x46\n    strh r2, [r0]\n    add r0, r3, #0\n    bl sub_02097018\n    mov r2, #0x59\n    add r1, r4, #0\n    lsl r2, r2, #4\n    bl memcpy\n    pop {r4, pc}"
    );
    #endif
}

void sub_02096DA8(void) {
    /* Original at 0x02096DA8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    bne _02096DB0\n    ldrb r0, [r2]\n    str r0, [r3, #0x28]\n    bx lr"
    );
    #endif
}

void sub_02096DB4(void) {
    /* Original at 0x02096DB4 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r3, #0x20]\n    add r0, r0, #1\n    str r0, [r3, #0x20]\n    bx lr"
    );
    #endif
}

void sub_02096DBC(void) {
    /* Original at 0x02096DBC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r3, #0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _02096DE0\n    mov r0, #0\n    str r0, [r4, #0x20]\n    mov r0, #1\n    str r0, [r4, #0x24]\n    ldr r0, [r4]\n    lsl r2, r5, #0x18\n    ldr r0, [r0, #0x38]\n    mov r1, #0x1f\n    lsr r2, r2, #0x18\n    bl ov85_021E9C84\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02096DE4(void) {
    /* Original at 0x02096DE4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r3]\n    ldr r3, _02096DF0 ; =ov85_021E9C84\n    ldr r0, [r0, #0x38]\n    mov r1, #2\n    mov r2, #0\n    bx r3\n    _02096DF0: .word ov85_021E9C84"
    );
    #endif
}

void sub_02096DF4(void) {
    /* Original at 0x02096DF4 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r0, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    cmp r6, #0\n    beq _02096E7E\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02096ECC\n    ldrb r1, [r5]\n    add r0, sp, #0\n    strb r1, [r0]\n    ldrb r1, [r5, #1]\n    strb r1, [r0, #1]\n    ldrb r1, [r5, #2]\n    strb r1, [r0, #2]\n    ldrb r1, [r5, #3]\n    strb r1, [r0, #3]\n    strb r6, [r0]\n    ldr r1, [r4, #0x2c]\n    strb r1, [r0, #1]\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    beq _02096E2C\n    cmp r0, #1\n    b _02096E6E\n    bl sub_02037454\n    ldr r1, [r4, #0x2c]\n    cmp r1, r0\n    bne _02096E4E\n    bl sub_02096FFC\n    ldr r1, [r4, #0x2c]\n    cmp r1, r0\n    bne _02096E4E\n    bl sub_02033250\n    bl MATH_CountPopulation\n    ldr r1, [r4, #0x2c]\n    cmp r1, r0\n    beq _02096E56\n    mov r1, #0\n    add r0, sp, #0\n    strb r1, [r0, #3]\n    b _02096E6E\n    mov r1, #1\n    add r0, r1, #0\n    ldr r2, [r4, #0x30]\n    lsl r0, r6\n    orr r0, r2\n    str r0, [r4, #0x30]\n    add r0, sp, #0\n    strb r1, [r0, #3]\n    bl sub_02037454\n    bl sub_02038C1C\n    add r0, r4, #0\n    mov r1, #2\n    add r2, sp, #0\n    mov r3, #4\n    bl sub_02096D4C\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldrb r0, [r5, #2]\n    cmp r0, #0\n    beq _02096E8C\n    cmp r0, #1\n    beq _02096EC0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldrb r6, [r5]\n    bl sub_0203769C\n    cmp r6, r0\n    bne _02096ECC\n    ldrb r0, [r5, #3]\n    cmp r0, #0\n    bne _02096EAC\n    ldr r0, [r4]\n    mov r1, #8\n    ldr r0, [r0, #0x38]\n    add r2, r6, #0\n    bl ov85_021E9C84\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldrb r0, [r5, #1]\n    mov r1, #7\n    strh r0, [r4, #0x38]\n    ldr r0, [r4]\n    ldrb r2, [r5]\n    ldr r0, [r0, #0x38]\n    bl ov85_021E9C84\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, [r4]\n    ldrb r2, [r5]\n    ldr r0, [r0, #0x38]\n    mov r1, #0x13\n    bl ov85_021E9C84\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_02096ED0(void) {
    /* Original at 0x02096ED0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r3, #0\n    ldr r0, [r4]\n    ldrb r2, [r2]\n    ldr r0, [r0, #0x38]\n    mov r1, #1\n    bl ov85_021E9D9C\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02096EEC\n    mov r0, #0\n    str r0, [r4, #0x34]\n    pop {r4, pc}"
    );
    #endif
}

void sub_02096EF0(void) {
    /* Original at 0x02096EF0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r3, #0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _02096F08\n    ldr r0, [r4]\n    mov r1, #0xd\n    ldr r0, [r0, #0x38]\n    mov r2, #0\n    bl ov85_021E9C84\n    pop {r4, pc}"
    );
    #endif
}

void sub_02096F0C(void) {
    /* Original at 0x02096F0C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r3, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02096F2A\n    add r0, sp, #0\n    strb r5, [r0]\n    add r0, r4, #0\n    mov r1, #0\n    add r2, sp, #0\n    mov r3, #1\n    bl sub_02096D4C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02096F2C(void) {
    /* Original at 0x02096F2C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r3, #0\n    add r0, #0x40\n    ldrh r1, [r0]\n    ldrh r0, [r2]\n    add r3, #0x40\n    orr r0, r1\n    strh r0, [r3]\n    bx lr"
    );
    #endif
}

void sub_02096F3C(void) {
    /* Original at 0x02096F3C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r3, #0\n    add r1, #0x42\n    ldrh r2, [r1]\n    mov r1, #1\n    lsl r1, r0\n    add r0, r2, #0\n    orr r0, r1\n    add r3, #0x42\n    strh r0, [r3]\n    bx lr"
    );
    #endif
}

void sub_02096F50(void) {
    /* Original at 0x02096F50 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r3]\n    ldr r3, _02096F5C ; =ov85_021E8680\n    ldr r0, [r0, #0x34]\n    add r1, r2, #0\n    bx r3\n    nop\n    _02096F5C: .word ov85_021E8680"
    );
    #endif
}

void sub_02096F60(void) {
    /* Original at 0x02096F60 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r3]\n    ldr r3, _02096F6C ; =ov85_021E86AC\n    ldr r0, [r0, #0x34]\n    ldr r1, [r2]\n    bx r3\n    nop\n    _02096F6C: .word ov85_021E86AC"
    );
    #endif
}

void sub_02096F70(void) {
    /* Original at 0x02096F70 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r3]\n    ldr r3, _02096F7C ; =ov85_021E85C4\n    ldr r0, [r0, #0x34]\n    ldrb r1, [r2]\n    bx r3\n    nop\n    _02096F7C: .word ov85_021E85C4"
    );
    #endif
}

void sub_02096F80(void) {
    /* Original at 0x02096F80 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    add r5, r3, #0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _02096F98\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #0x34]\n    bl ov85_021E85CC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02096F9C(void) {
    /* Original at 0x02096F9C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, [r3]\n    ldr r3, _02096FA8 ; =ov85_021E8740\n    ldr r0, [r0, #0x34]\n    ldr r2, [r2]\n    bx r3\n    _02096FA8: .word ov85_021E8740"
    );
    #endif
}

void sub_02096FAC(void) {
    /* Original at 0x02096FAC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r3]\n    ldr r3, _02096FB8 ; =ov85_021E8748\n    ldr r0, [r0, #0x34]\n    add r1, r2, #0\n    bx r3\n    nop\n    _02096FB8: .word ov85_021E8748"
    );
    #endif
}

void sub_02096FBC(void) {
    /* Original at 0x02096FBC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r3, #0\n    add r1, #0x48\n    ldrh r2, [r1]\n    mov r1, #1\n    lsl r1, r0\n    add r0, r2, #0\n    orr r0, r1\n    add r3, #0x48\n    strh r0, [r3]\n    bx lr"
    );
    #endif
}

void sub_02096FD0(void) {
    /* Original at 0x02096FD0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r3, #0\n    add r1, #0x4a\n    ldrh r2, [r1]\n    mov r1, #1\n    lsl r1, r0\n    add r0, r2, #0\n    orr r0, r1\n    add r3, #0x4a\n    strh r0, [r3]\n    bx lr"
    );
    #endif
}

u8 sub_02096FE4(void) {
    return 0x18;
}

void sub_02096FE8(void) {
    /* Original at 0x02096FE8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0x59\n    lsl r0, r0, #4\n    bx lr"
    );
    #endif
}

void sub_02096FF0(void) {
    /* Original at 0x02096FF0 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r1, #0x4c]\n    mov r1, #0x59\n    lsl r1, r1, #4\n    mul r1, r0\n    add r0, r2, r1\n    bx lr"
    );
    #endif
}

void sub_02096FFC(void) {
    sub_02034818(0);
}

void sub_02097018(void) {
    /* Original at 0x02097018 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #0x50]\n    mov r0, #0x59\n    lsl r0, r0, #4\n    mul r0, r1\n    add r0, r2, r0\n    bx lr"
    );
    #endif
}
