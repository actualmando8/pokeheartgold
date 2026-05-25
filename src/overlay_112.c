/* Decompiled from asm/overlay_112.s */
#include "global.h"

void ov112_021E5900(void) {
    /* Original at 0x021E5900 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    mov r5, #2\n    mov r6, #0\n    cmp r1, #0\n    bls _021E5924\n    mov r2, #1\n    add r3, r6, #0\n    ldrb r4, [r0]\n    add r0, r0, #1\n    tst r3, r2\n    beq _021E591A\n    add r5, r5, r4\n    b _021E591E\n    lsl r3, r4, #8\n    add r5, r5, r3\n    add r6, r6, #1\n    cmp r6, r1\n    blo _021E590C\n    lsl r0, r5, #0x10\n    lsr r1, r5, #0x10\n    lsr r0, r0, #0x10\n    add r1, r1, r0\n    lsr r0, r1, #0x10\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov112_021E5938(void) {
    /* Original at 0x021E5938 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E5948 ; =_021FF9E0\n    mov r1, #1\n    str r1, [r0, #0x18]\n    ldr r1, [r0, #0x10]\n    add r1, r1, #1\n    str r1, [r0, #0x10]\n    bx lr\n    nop\n    _021E5948: .word _021FF9E0"
    );
    #endif
}

void ov112_021E594C(void) {
    /* Original at 0x021E594C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E5960 ; =_021FF9E0\n    mov r1, #0\n    strb r1, [r0]\n    str r1, [r0, #0x28]\n    str r1, [r0, #0x2c]\n    str r1, [r0, #0x18]\n    str r1, [r0, #0x24]\n    str r1, [r0, #8]\n    str r1, [r0, #0x10]\n    bx lr\n    _021E5960: .word _021FF9E0"
    );
    #endif
}

void ov112_021E5964(void) {
    /* Original at 0x021E5964 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl CARD_SpiWaitInit\n    mov r0, #0x32\n    bl CARD_SetSpiWriteWaitCycles\n    mov r0, #0x32\n    bl CARD_SetSpiReadWaitCycles\n    ldr r0, _021E599C ; =ov112_021FFA18\n    bl CARD_SpiWaitReadRange\n    bl ov112_021E594C\n    ldr r0, _021E59A0 ; =_021FF500\n    mov r1, #0xff\n    strb r1, [r0]\n    strb r1, [r0, #1]\n    bl OS_GetTick\n    ldr r1, _021E59A4 ; =_021FF9E0\n    str r0, [r1, #0x20]\n    str r0, [r1, #4]\n    mov r0, #0\n    str r0, [r1, #0xc]\n    str r0, [r1, #0x1c]\n    pop {r3, pc}\n    nop\n    _021E599C: .word ov112_021FFA18\n    _021E59A0: .word _021FF500\n    _021E59A4: .word _021FF9E0"
    );
    #endif
}

void ov112_021E59A8(void) {
    /* Original at 0x021E59A8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E59B0 ; =_021FF9E0\n    ldr r0, [r0, #0x2c]\n    bx lr\n    nop\n    _021E59B0: .word _021FF9E0"
    );
    #endif
}

void ov112_021E59B4(void) {
    /* Original at 0x021E59B4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, _021E5A0C ; =ov112_021FFA18\n    add r5, r1, #0\n    strb r2, [r4]\n    strb r3, [r4, #1]\n    ldr r1, [sp, #0x10]\n    ldr r3, _021E5A10 ; =ov112_021FFA20\n    str r1, [r4, #4]\n    mov r1, #0\n    strb r1, [r4, #2]\n    strb r1, [r4, #3]\n    b _021E59D6\n    ldrb r2, [r0]\n    add r0, r0, #1\n    add r1, r1, #1\n    strb r2, [r3]\n    add r3, r3, #1\n    cmp r1, r5\n    blt _021E59CC\n    add r5, #8\n    lsl r0, r5, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, _021E5A0C ; =ov112_021FFA18\n    add r1, r5, #0\n    bl ov112_021E5900\n    strb r0, [r4, #2]\n    asr r0, r0, #8\n    strb r0, [r4, #3]\n    mov r1, #0\n    ldr r3, _021E5A0C ; =ov112_021FFA18\n    mov r0, #0xaa\n    b _021E59FE\n    ldrb r2, [r3, r1]\n    eor r2, r0\n    strb r2, [r3, r1]\n    add r1, r1, #1\n    cmp r1, r5\n    blt _021E59F6\n    ldr r0, _021E5A0C ; =ov112_021FFA18\n    add r1, r5, #0\n    bl CARD_SpiWaitWriteRange\n    pop {r3, r4, r5, pc}\n    _021E5A0C: .word ov112_021FFA18\n    _021E5A10: .word ov112_021FFA20"
    );
    #endif
}

void ov112_021E5A14(void) {
    /* Original at 0x021E5A14 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _021E5A54 ; =_021FF9E0\n    ldr r1, [r0, #0x2c]\n    cmp r1, #0\n    beq _021E5A3E\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    bne _021E5A3E\n    cmp r4, #0\n    bne _021E5A3E\n    ldr r0, [r0, #4]\n    ldr r3, _021E5A58 ; =_021FF500\n    str r0, [sp]\n    ldrb r3, [r3]\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xf4\n    bl ov112_021E59B4\n    ldr r0, _021E5A54 ; =_021FF9E0\n    ldr r1, [r0, #0x14]\n    cmp r1, #0\n    beq _021E5A4A\n    add r0, r4, #0\n    blx r1\n    bl ov112_021E594C\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021E5A54: .word _021FF9E0\n    _021E5A58: .word _021FF500"
    );
    #endif
}

void ov112_021E5A5C(void) {
    ov112_021E5A14();
}

void ov112_021E5A68(void) {
    ov112_021E59B4();
}

void ov112_021E5A80(void) {
    /* Original at 0x021E5A80 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov112_021E5A84(void) {
    /* Original at 0x021E5A84 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #1\n    bne _021E5AA4\n    ldr r0, _021E5AC8 ; =_021FF9E0\n    ldr r0, [r0, #0x2c]\n    cmp r0, #0\n    beq _021E5A94\n    mov r0, #1\n    bx lr\n    ldr r0, _021E5ACC ; =ov112_021FFA18\n    ldrb r0, [r0]\n    cmp r0, #0xfc\n    beq _021E5AA0\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    cmp r0, #2\n    beq _021E5AAC\n    cmp r0, #3\n    bne _021E5AC4\n    mov r1, #0\n    b _021E5AB2\n    add r1, r1, #1\n    cmp r1, #4\n    blo _021E5AB0\n    mov r1, #0\n    b _021E5ABC\n    add r1, r1, #1\n    cmp r1, r0\n    blo _021E5ABA\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _021E5AC8: .word _021FF9E0\n    _021E5ACC: .word ov112_021FFA18"
    );
    #endif
}

void ov112_021E5AD0(void) {
    /* Original at 0x021E5AD0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021E5B20 ; =_021FF9E0\n    ldr r1, [r0, #0x2c]\n    cmp r1, #0\n    bne _021E5AE4\n    ldr r0, [r0, #0x24]\n    cmp r0, #0\n    bne _021E5AE4\n    mov r0, #0\n    pop {r3, pc}\n    bl OS_GetTick\n    ldr r2, _021E5B20 ; =_021FF9E0\n    ldr r3, [r2, #0x30]\n    ldr r2, [r2, #0x34]\n    sub r3, r0, r3\n    sbc r1, r2\n    lsr r0, r3, #0x1a\n    lsl r1, r1, #6\n    orr r1, r0\n    lsl r0, r3, #6\n    ldr r2, _021E5B24 ; =0x000082EA\n    mov r3, #0\n    bl _ll_udiv\n    mov r3, #0\n    mov r2, #0x64\n    sub r0, r0, r2\n    sbc r1, r3\n    bhs _021E5B10\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    bl ov112_021E5A14\n    ldr r0, _021E5B20 ; =_021FF9E0\n    mov r1, #0\n    str r1, [r0, #0x24]\n    mov r0, #1\n    pop {r3, pc}\n    _021E5B20: .word _021FF9E0\n    _021E5B24: .word 0x000082EA"
    );
    #endif
}

void ov112_021E5B28(void) {
    /* Original at 0x021E5B28 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r6, _021E5B90 ; =ov112_021FFA18\n    cmp r5, #1\n    bne _021E5B40\n    ldrb r0, [r6]\n    cmp r0, #0xfc\n    bne _021E5B3C\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    cmp r5, #4\n    bhs _021E5B48\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r6, #3]\n    ldrb r1, [r6, #2]\n    lsl r0, r0, #8\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    mov r0, #0\n    strb r0, [r6, #2]\n    strb r0, [r6, #3]\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov112_021E5900\n    strb r4, [r6, #2]\n    asr r1, r4, #8\n    strb r1, [r6, #3]\n    cmp r4, r0\n    bne _021E5B76\n    ldr r0, _021E5B94 ; =_021FF9E0\n    mov r1, #0\n    strb r1, [r0]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E5B94 ; =_021FF9E0\n    ldr r0, [r0, #0x2c]\n    cmp r0, #0\n    beq _021E5B8C\n    mov r0, #0\n    b _021E5B84\n    add r0, r0, #1\n    cmp r0, r5\n    blo _021E5B82\n    bl ov112_021E5938\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _021E5B90: .word ov112_021FFA18\n    _021E5B94: .word _021FF9E0"
    );
    #endif
}

void ov112_021E5B98(void) {
    /* Original at 0x021E5B98 */
    /* Requires manual decompilation - 183 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, _021E5D28 ; =ov112_021FFA18\n    bl CARD_SpiWaitReadRange\n    add r4, r0, #0\n    bl ov112_021E5A84\n    cmp r0, #0\n    beq _021E5BAC\n    mov r4, #0\n    cmp r4, #0\n    bne _021E5BC0\n    bl ov112_021E5AD0\n    cmp r0, #0\n    beq _021E5BBC\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov112_021E5B28\n    cmp r0, #0\n    bne _021E5BCE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    bl OS_GetTick\n    ldr r2, _021E5D2C ; =_021FF9E0\n    str r0, [r2, #0x30]\n    str r1, [r2, #0x34]\n    ldr r1, _021E5D28 ; =ov112_021FFA18\n    ldrb r0, [r1]\n    cmp r0, #0xf0\n    bhs _021E5BF6\n    ldr r0, [r2, #0x2c]\n    cmp r0, #0\n    bne _021E5BEA\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r3, [r1, #4]\n    ldr r0, [r2, #4]\n    cmp r3, r0\n    beq _021E5BF6\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r1]\n    sub r0, #0xf6\n    cmp r0, #6\n    bls _021E5C00\n    b _021E5D04\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E5C0C: ; jump table\n    ldr r1, _021E5D2C ; =_021FF9E0\n    ldr r0, [r1, #0x28]\n    cmp r0, #4\n    bhi _021E5C4E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E5C2E: ; jump table\n    mov r0, #2\n    str r0, [r1, #0x28]\n    ldr r0, [r1, #0x20]\n    ldr r3, _021E5D30 ; =_021FF500\n    str r0, [sp]\n    mov r0, #0\n    ldrb r3, [r3]\n    add r1, r0, #0\n    mov r2, #0xfa\n    bl ov112_021E59B4\n    ldr r0, _021E5D2C ; =_021FF9E0\n    ldr r1, [r0, #0x24]\n    cmp r1, #0\n    bne _021E5D24\n    mov r1, #1\n    str r1, [r0, #0x24]\n    mov r1, #2\n    str r1, [r0, #0x28]\n    mov r1, #0\n    str r1, [r0, #8]\n    cmp r4, #1\n    bls _021E5C6C\n    ldr r0, [r0, #0x2c]\n    cmp r0, #0\n    beq _021E5D24\n    ldr r0, _021E5D2C ; =_021FF9E0\n    ldr r3, _021E5D30 ; =_021FF500\n    ldr r0, [r0, #0x20]\n    mov r2, #0xfa\n    str r0, [sp]\n    ldrb r3, [r3]\n    mov r0, #0\n    add r1, r0, #0\n    bl ov112_021E59B4\n    ldr r0, _021E5D2C ; =_021FF9E0\n    ldr r0, [r0, #0x2c]\n    cmp r0, #0\n    beq _021E5C8C\n    bl ov112_021E5938\n    bl ov112_021E5A80\n    b _021E5D24\n    ldr r0, _021E5D2C ; =_021FF9E0\n    ldr r2, [r0, #0x28]\n    cmp r2, #1\n    bne _021E5D24\n    mov r2, #3\n    str r2, [r0, #0x28]\n    mov r2, #1\n    str r2, [r0, #8]\n    ldrb r2, [r1, #1]\n    ldr r3, _021E5D30 ; =_021FF500\n    strb r2, [r3, #1]\n    cmp r2, #1\n    bne _021E5D24\n    ldr r2, [r1, #4]\n    ldr r1, [r0, #0x20]\n    eor r2, r1\n    str r2, [r0, #4]\n    str r1, [sp]\n    mov r0, #0\n    ldrb r3, [r3]\n    add r1, r0, #0\n    mov r2, #0xf8\n    bl ov112_021E59B4\n    ldr r0, _021E5D2C ; =_021FF9E0\n    mov r1, #1\n    str r1, [r0, #0x2c]\n    mov r1, #0\n    str r1, [r0, #0x18]\n    str r1, [r0, #0x24]\n    b _021E5D24\n    ldr r3, _021E5D2C ; =_021FF9E0\n    ldr r0, [r3, #0x28]\n    cmp r0, #2\n    bne _021E5D24\n    mov r0, #4\n    str r0, [r3, #0x28]\n    ldrb r0, [r1, #1]\n    ldr r2, _021E5D30 ; =_021FF500\n    strb r0, [r2, #1]\n    ldr r2, [r1, #4]\n    ldr r1, [r3, #0x20]\n    eor r1, r2\n    str r1, [r3, #4]\n    mov r1, #1\n    str r1, [r3, #0x2c]\n    mov r1, #0\n    str r1, [r3, #0x18]\n    str r1, [r3, #0x24]\n    ldr r2, [r3, #0xc]\n    cmp r2, #0\n    beq _021E5D24\n    blx r2\n    b _021E5D24\n    bl ov112_021E5938\n    b _021E5D24\n    ldr r5, _021E5D2C ; =_021FF9E0\n    ldr r0, [r5, #0x18]\n    cmp r0, #1\n    beq _021E5D24\n    ldr r0, [r5, #0x2c]\n    cmp r0, #0\n    beq _021E5D24\n    ldr r3, _021E5D28 ; =ov112_021FFA18\n    sub r4, #8\n    ldrb r2, [r3]\n    lsl r1, r4, #0x18\n    ldrb r3, [r3, #1]\n    ldr r0, _021E5D34 ; =ov112_021FFA20\n    ldr r4, [r5, #0x1c]\n    lsr r1, r1, #0x18\n    blx r4\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _021E5D28: .word ov112_021FFA18\n    _021E5D2C: .word _021FF9E0\n    _021E5D30: .word _021FF500\n    _021E5D34: .word ov112_021FFA20"
    );
    #endif
}

void ov112_021E5D38(void) {
    /* Original at 0x021E5D38 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E5D40 ; =_021FF9E0\n    str r0, [r1, #0xc]\n    bx lr\n    nop\n    _021E5D40: .word _021FF9E0"
    );
    #endif
}

void ov112_021E5D44(void) {
    /* Original at 0x021E5D44 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E5D4C ; =_021FF9E0\n    str r0, [r1, #0x1c]\n    bx lr\n    nop\n    _021E5D4C: .word _021FF9E0"
    );
    #endif
}

void ov112_021E5D50(void) {
    /* Original at 0x021E5D50 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E5D58 ; =_021FF9E0\n    str r0, [r1, #0x14]\n    bx lr\n    nop\n    _021E5D58: .word _021FF9E0"
    );
    #endif
}

void ov112_021E5D5C(void) {
    /* Original at 0x021E5D5C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E5D64 ; =_021FF500\n    strb r0, [r1]\n    bx lr\n    nop\n    _021E5D64: .word _021FF500"
    );
    #endif
}

void ov112_021E5D68(void) {
    OS_Halt(3);
}

void ov112_021E5D8C(void) {
    /* Original at 0x021E5D8C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r2, [sp]\n    add r7, r1, #0\n    ldr r1, [sp]\n    add r6, r0, #0\n    mov r0, #0\n    add r1, #0x7f\n    str r0, [sp, #8]\n    asr r0, r1, #6\n    lsr r0, r0, #0x19\n    add r0, r1, r0\n    lsl r0, r0, #9\n    lsr r0, r0, #0x10\n    add r5, r3, #0\n    str r0, [sp, #4]\n    cmp r0, #0\n    ble _021E5E12\n    ldr r4, [sp]\n    add r0, r4, #0\n    cmp r0, #0x80\n    bls _021E5DBA\n    mov r4, #0x80\n    cmp r4, #0x80\n    beq _021E5DD0\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl MI_CpuCopy8\n    mov r0, #0x80\n    strb r0, [r5]\n    add r5, r5, #1\n    b _021E5DF8\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    mov r3, #0\n    bl MI_CompressLZImpl\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bne _021E5DF4\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl MI_CpuCopy8\n    mov r0, #0x80\n    strb r0, [r5]\n    add r5, r5, #1\n    b _021E5DF8\n    strb r0, [r5]\n    add r5, r5, #1\n    ldr r0, [sp]\n    add r6, #0x80\n    sub r0, r0, r4\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    add r7, #0x80\n    add r1, r0, #1\n    ldr r0, [sp, #4]\n    str r1, [sp, #8]\n    cmp r1, r0\n    blt _021E5DB0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021E5E18(void) {
    /* Original at 0x021E5E18 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E5E24 ; =ov112_021FFAA4\n    ldr r2, [r1, #0x14]\n    cmp r2, #0\n    bne _021E5E22\n    str r0, [r1, #0x14]\n    bx lr\n    _021E5E24: .word ov112_021FFAA4"
    );
    #endif
}

void ov112_021E5E28(void) {
    /* Original at 0x021E5E28 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, _021E5E44 ; =ov112_021FFAA4\n    ldr r4, [r0, #0x20]\n    add r5, r4, #0\n    add r5, #0x10\n    bl OS_GetOwnerRtcOffset\n    str r0, [r4, #0x10]\n    str r1, [r5, #4]\n    add r5, #8\n    add r0, r5, #0\n    bl OS_GetLowEntropyData\n    pop {r3, r4, r5, pc}\n    _021E5E44: .word ov112_021FFAA4"
    );
    #endif
}

void ov112_021E5E48(void) {
    /* Original at 0x021E5E48 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    add r0, sp, #0x10\n    bl RTC_GetTime\n    cmp r0, #0\n    bne _021E5EB0\n    add r0, sp, #0\n    bl RTC_GetDate\n    cmp r0, #0\n    bne _021E5EB0\n    add r0, sp, #0\n    add r1, sp, #0x10\n    bl RTC_ConvertDateTimeToSecond\n    mov r2, #0\n    mov r3, #0\n    mvn r2, r2\n    sub r2, r2, r0\n    sbc r3, r1\n    bge _021E5E7A\n    mov r0, #0\n    mvn r0, r0\n    mov r1, #0\n    mov r3, #0\n    mov r2, #0\n    sub r2, r0, r2\n    sbc r1, r3\n    bge _021E5E86\n    mov r0, #0\n    mov r3, #0xff\n    lsl r1, r0, #0x18\n    lsl r3, r3, #0x18\n    add r2, r1, #0\n    lsl r4, r0, #8\n    lsr r1, r3, #8\n    and r1, r4\n    lsr r4, r0, #0x18\n    lsl r4, r4, #0x18\n    lsr r5, r4, #0x18\n    lsr r4, r0, #8\n    lsr r0, r3, #0x10\n    and r0, r4\n    orr r0, r5\n    and r2, r3\n    orr r0, r1\n    add r1, r2, #0\n    orr r1, r0\n    ldr r0, _021E5EB4 ; =ov112_021FFAA4\n    ldr r0, [r0, #0x20]\n    str r1, [r0, #0x60]\n    add sp, #0x1c\n    pop {r4, r5, pc}\n    _021E5EB4: .word ov112_021FFAA4"
    );
    #endif
}

void ov112_021E5EB8(void) {
    /* Original at 0x021E5EB8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _021E5EC0 ; =ov112_021FFAA4\n    str r0, [r2, #0x20]\n    str r1, [r2, #0x24]\n    bx lr\n    _021E5EC0: .word ov112_021FFAA4"
    );
    #endif
}

void ov112_021E5EC4(void) {
    /* Original at 0x021E5EC4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021E5EE8 ; =ov112_021FFB24\n    str r0, [r3, #0x20]\n    str r0, [r3, #0x24]\n    str r1, [r3, #0x28]\n    str r1, [r3, #0x2c]\n    strh r2, [r3, #0x30]\n    ldrh r0, [r3, #0x30]\n    add r2, #0x7f\n    strh r0, [r3, #0x32]\n    mov r0, #0\n    strh r0, [r3, #0x36]\n    asr r0, r2, #6\n    lsr r0, r0, #0x19\n    add r0, r2, r0\n    asr r0, r0, #7\n    strh r0, [r3, #0x34]\n    bx lr\n    nop\n    _021E5EE8: .word ov112_021FFB24"
    );
    #endif
}

void ov112_021E5EEC(void) {
    /* Original at 0x021E5EEC */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x80\n    ldr r1, _021E5FF4 ; =ov112_021FFB24\n    ldr r0, [r1, #0x28]\n    ldrh r5, [r1, #0x30]\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r5, #0x80\n    bls _021E5F00\n    mov r5, #0x80\n    ldr r1, _021E5FF4 ; =ov112_021FFB24\n    mov r0, #0\n    ldrb r1, [r1, #0x1d]\n    cmp r1, #0x3a\n    beq _021E5F10\n    cmp r1, #0x3c\n    beq _021E5F1C\n    b _021E5F26\n    ldr r1, _021E5FF8 ; =ov112_021FFAA4\n    ldr r1, [r1, #0x50]\n    cmp r1, #0\n    beq _021E5F26\n    ldr r0, _021E5FFC ; =ov112_021FFAF0\n    b _021E5F26\n    ldr r1, _021E5FF8 ; =ov112_021FFAA4\n    ldr r1, [r1, #0x58]\n    cmp r1, #0\n    beq _021E5F26\n    ldr r0, _021E6000 ; =ov112_021FFAF8\n    cmp r0, #0\n    bne _021E5F84\n    mov r0, #0x7f\n    add r1, r4, #0\n    and r1, r0\n    beq _021E5F62\n    mov r0, #0x80\n    sub r0, r0, r1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, sp, #0\n    strb r4, [r0]\n    ldr r0, _021E5FF4 ; =ov112_021FFB24\n    add r1, sp, #0\n    ldr r0, [r0, #0x20]\n    add r1, #1\n    add r2, r5, #0\n    bl MI_CpuCopy8\n    add r1, r5, #1\n    asr r3, r4, #8\n    lsl r1, r1, #0x18\n    lsl r3, r3, #0x18\n    add r0, sp, #0\n    lsr r1, r1, #0x18\n    mov r2, #0xa\n    lsr r3, r3, #0x18\n    bl ov112_021E5A68\n    b _021E5FCE\n    mov r2, #0x80\n    add r3, r4, #0\n    ldr r0, _021E5FF4 ; =ov112_021FFB24\n    and r3, r2\n    mov r2, #2\n    orr r2, r3\n    asr r3, r4, #8\n    lsl r1, r5, #0x18\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #0x20]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl ov112_021E5A68\n    b _021E5FCE\n    ldr r1, [r0]\n    ldr r0, _021E5FF4 ; =ov112_021FFB24\n    ldrh r0, [r0, #0x36]\n    ldrb r6, [r1, r0]\n    cmp r6, #0x80\n    bls _021E5F94\n    bl OS_Halt\n    cmp r6, #0x80\n    bne _021E5FB6\n    mov r1, #0x80\n    add r3, r4, #0\n    ldr r0, _021E5FF4 ; =ov112_021FFB24\n    and r3, r1\n    mov r2, #2\n    orr r2, r3\n    asr r3, r4, #8\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #0x20]\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl ov112_021E5A68\n    b _021E5FCE\n    ldr r0, _021E5FF4 ; =ov112_021FFB24\n    mov r2, #0x80\n    and r2, r4\n    asr r3, r4, #8\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #0x20]\n    add r1, r6, #0\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl ov112_021E5A68\n    ldr r0, _021E5FF4 ; =ov112_021FFB24\n    ldr r1, [r0, #0x20]\n    add r1, r1, r5\n    str r1, [r0, #0x20]\n    ldr r1, [r0, #0x28]\n    add r1, r1, r5\n    str r1, [r0, #0x28]\n    ldrh r1, [r0, #0x30]\n    sub r1, r1, r5\n    strh r1, [r0, #0x30]\n    ldrh r1, [r0, #0x36]\n    add r1, r1, #1\n    strh r1, [r0, #0x36]\n    ldrh r1, [r0, #0x3a]\n    add r1, r1, #1\n    strh r1, [r0, #0x3a]\n    add sp, #0x80\n    pop {r4, r5, r6, pc}\n    nop\n    _021E5FF4: .word ov112_021FFB24\n    _021E5FF8: .word ov112_021FFAA4\n    _021E5FFC: .word ov112_021FFAF0\n    _021E6000: .word ov112_021FFAF8"
    );
    #endif
}

void ov112_021E6004(void) {
    /* Original at 0x021E6004 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl OS_GetTick\n    ldr r2, _021E6114 ; =ov112_021FFAA4\n    ldr r3, [r2, #0x3c]\n    ldr r2, [r2, #0x40]\n    sub r3, r0, r3\n    sbc r1, r2\n    lsr r0, r3, #0x1a\n    lsl r1, r1, #6\n    orr r1, r0\n    lsl r0, r3, #6\n    ldr r2, _021E6118 ; =0x000082EA\n    mov r3, #0\n    bl _ll_udiv\n    bl _f_ulltof\n    ldr r1, _021E611C ; =0x447A0000\n    bl _fdiv\n    ldr r0, _021E6120 ; =ov112_021FFB24\n    ldrb r1, [r0, #0x1d]\n    cmp r1, #0xb0\n    bgt _021E604C\n    bge _021E60F8\n    cmp r1, #0x3e\n    bgt _021E6106\n    cmp r1, #0x3a\n    blt _021E6106\n    beq _021E607C\n    cmp r1, #0x3c\n    beq _021E60A6\n    cmp r1, #0x3e\n    beq _021E60CE\n    b _021E6106\n    cmp r1, #0xb2\n    bgt _021E6054\n    beq _021E60F8\n    b _021E6106\n    sub r1, #0xb4\n    cmp r1, #0xa\n    bhi _021E6106\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E6066: ; jump table\n    ldr r0, _021E6120 ; =ov112_021FFB24\n    mov r1, #0x3c\n    strb r1, [r0, #0x1d]\n    ldr r1, _021E6114 ; =ov112_021FFAA4\n    ldr r2, _021E6124 ; =0x000028BE\n    ldr r0, [r1, #0x58]\n    cmp r0, #0\n    beq _021E6096\n    mov r1, #0xd7\n    lsl r1, r1, #8\n    bl ov112_021E5EC4\n    b _021E60A0\n    ldr r0, [r1, #0x2c]\n    mov r1, #0xd7\n    lsl r1, r1, #8\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r3, pc}\n    mov r1, #0x3e\n    strb r1, [r0, #0x1d]\n    ldr r1, _021E6114 ; =ov112_021FFAA4\n    mov r2, #0x28\n    ldr r0, [r1, #0x24]\n    ldr r1, [r1, #0x30]\n    add r0, #0x10\n    add r1, #8\n    bl MI_CpuCopy8\n    ldr r0, _021E6114 ; =ov112_021FFAA4\n    mov r2, #0x89\n    ldr r0, [r0, #0x30]\n    ldr r1, _021E6128 ; =0x0000D480\n    lsl r2, r2, #2\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r3, pc}\n    ldrb r1, [r0, #0x1c]\n    cmp r1, #0x52\n    bne _021E60EA\n    mov r1, #0x48\n    strb r1, [r0, #0x1d]\n    ldr r1, _021E6114 ; =ov112_021FFAA4\n    ldr r0, _021E612C ; =0x0000CE80\n    ldr r1, [r1, #0x38]\n    ldr r2, _021E6130 ; =0x00000D4C\n    bl ov112_021E5EC4\n    bl ov112_021E6134\n    pop {r3, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x24\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x24\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, pc}\n    mov r0, #0xc\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r3, pc}\n    nop\n    _021E6114: .word ov112_021FFAA4\n    _021E6118: .word 0x000082EA\n    _021E611C: .word 0x447A0000\n    _021E6120: .word ov112_021FFB24\n    _021E6124: .word 0x000028BE\n    _021E6128: .word 0x0000D480\n    _021E612C: .word 0x0000CE80\n    _021E6130: .word 0x00000D4C"
    );
    #endif
}

void ov112_021E6134(void) {
    /* Original at 0x021E6134 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021E6160 ; =ov112_021FFB24\n    ldrh r3, [r0, #0x30]\n    cmp r3, #0x80\n    bls _021E6140\n    mov r3, #0x80\n    ldr r0, _021E6160 ; =ov112_021FFB24\n    ldr r0, [r0, #0x20]\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    asr r1, r2, #8\n    add r0, sp, #0\n    strb r1, [r0]\n    strb r2, [r0, #1]\n    strb r3, [r0, #2]\n    add r0, sp, #0\n    mov r1, #3\n    mov r2, #0xc\n    mov r3, #2\n    bl ov112_021E5A68\n    pop {r3, pc}\n    _021E6160: .word ov112_021FFB24"
    );
    #endif
}

void ov112_021E6164(void) {
    /* Original at 0x021E6164 */
    /* Requires manual decompilation - 1000 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl OS_GetTick\n    ldr r2, _021E64C8 ; =ov112_021FFAA4\n    ldr r3, [r2, #0x3c]\n    ldr r2, [r2, #0x40]\n    sub r3, r0, r3\n    sbc r1, r2\n    lsr r0, r3, #0x1a\n    lsl r1, r1, #6\n    orr r1, r0\n    lsl r0, r3, #6\n    ldr r2, _021E64CC ; =0x000082EA\n    mov r3, #0\n    bl _ll_udiv\n    bl _f_ulltof\n    ldr r1, _021E64D0 ; =0x447A0000\n    bl _fdiv\n    ldr r1, _021E64D4 ; =ov112_021FFB24\n    ldrb r0, [r1, #0x1d]\n    sub r0, #0x46\n    cmp r0, #6\n    bls _021E619C\n    bl _021E6A50\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E61A8: ; jump table\n    mov r0, #0x48\n    strb r0, [r1, #0x1d]\n    ldr r1, _021E64C8 ; =ov112_021FFAA4\n    ldr r0, _021E64D8 ; =0x0000CE80\n    ldr r1, [r1, #0x38]\n    ldr r2, _021E64DC ; =0x00000D4C\n    bl ov112_021E5EC4\n    bl ov112_021E6134\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E64C8 ; =ov112_021FFAA4\n    mov r4, #0\n    ldr r0, [r0, #0x38]\n    add r5, r4, #0\n    ldrh r2, [r0, #0xa]\n    asr r1, r2, #8\n    lsl r1, r1, #0x18\n    lsr r3, r1, #0x18\n    mov r1, #0xff\n    lsl r2, r2, #8\n    lsl r1, r1, #8\n    and r1, r2\n    orr r1, r3\n    strh r1, [r0, #0xa]\n    ldr r0, _021E64C8 ; =ov112_021FFAA4\n    mov r1, #0xff\n    ldr r0, [r0, #0x38]\n    lsl r1, r1, #0x18\n    add r3, r0, r5\n    ldr r0, [r3, #0x70]\n    add r4, r4, #1\n    lsl r2, r0, #0x18\n    add r7, r2, #0\n    and r7, r1\n    lsl r2, r0, #8\n    lsr r1, r1, #8\n    and r2, r1\n    lsr r1, r0, #0x18\n    lsl r1, r1, #0x18\n    lsr r6, r1, #0x18\n    lsr r1, r0, #8\n    mov r0, #0xff\n    lsl r0, r0, #8\n    and r0, r1\n    orr r0, r6\n    orr r0, r2\n    orr r0, r7\n    add r5, r5, #4\n    str r0, [r3, #0x70]\n    cmp r4, #7\n    blt _021E61E8\n    ldr r7, _021E64C8 ; =ov112_021FFAA4\n    mov r1, #0xff\n    ldr r5, [r7, #0x38]\n    lsl r1, r1, #0x18\n    ldr r0, [r5]\n    lsl r2, r0, #0x18\n    add r4, r2, #0\n    lsl r3, r0, #8\n    lsr r2, r1, #8\n    and r3, r2\n    lsr r2, r0, #0x18\n    lsl r2, r2, #0x18\n    lsr r6, r2, #0x18\n    lsr r2, r0, #8\n    lsr r0, r1, #0x10\n    and r0, r2\n    orr r0, r6\n    and r4, r1\n    orr r0, r3\n    orr r0, r4\n    str r0, [r5]\n    ldr r0, [r7, #0x38]\n    mov r6, #0\n    ldr r2, [r0, #4]\n    lsl r3, r2, #0x18\n    add r5, r3, #0\n    lsl r4, r2, #8\n    lsr r3, r1, #8\n    and r4, r3\n    lsr r3, r2, #0x18\n    and r5, r1\n    lsl r3, r3, #0x18\n    lsr r2, r2, #8\n    lsr r1, r1, #0x10\n    lsr r3, r3, #0x18\n    and r1, r2\n    orr r1, r3\n    orr r1, r4\n    orr r1, r5\n    str r1, [r0, #4]\n    ldr r0, [r7, #0x38]\n    mov r7, #0xff\n    add r0, #0x8c\n    lsl r7, r7, #8\n    ldr r1, [r0]\n    mov r2, #0xff\n    lsl r3, r1, #0x18\n    add r5, r3, #0\n    lsl r2, r2, #0x18\n    lsl r3, r1, #8\n    and r5, r2\n    lsr r2, r2, #8\n    add r4, r3, #0\n    and r4, r2\n    lsr r2, r1, #0x18\n    lsl r2, r2, #0x18\n    lsr r3, r2, #0x18\n    lsr r2, r1, #8\n    mov r1, #0xff\n    lsl r1, r1, #8\n    and r1, r2\n    orr r1, r3\n    orr r1, r4\n    orr r1, r5\n    str r1, [r0]\n    add r1, r0, #0\n    add r1, #0x78\n    ldrh r2, [r1]\n    add r6, r6, #1\n    asr r1, r2, #8\n    lsl r3, r2, #8\n    mov r2, #0xff\n    lsl r1, r1, #0x18\n    lsl r2, r2, #8\n    lsr r1, r1, #0x18\n    and r2, r3\n    orr r2, r1\n    add r1, r0, #0\n    add r1, #0x78\n    strh r2, [r1]\n    add r1, r0, #0\n    add r1, #0x7a\n    ldrh r2, [r1]\n    asr r1, r2, #8\n    lsl r3, r2, #8\n    mov r2, #0xff\n    lsl r1, r1, #0x18\n    lsl r2, r2, #8\n    lsr r1, r1, #0x18\n    and r2, r3\n    orr r2, r1\n    add r1, r0, #0\n    add r1, #0x7a\n    strh r2, [r1]\n    ldr r1, [r0, #0x7c]\n    mov r2, #0xff\n    lsl r3, r1, #0x18\n    add r5, r3, #0\n    lsl r2, r2, #0x18\n    lsl r3, r1, #8\n    and r5, r2\n    lsr r2, r2, #8\n    add r4, r3, #0\n    and r4, r2\n    lsr r2, r1, #0x18\n    lsl r2, r2, #0x18\n    lsr r3, r2, #0x18\n    lsr r2, r1, #8\n    mov r1, #0xff\n    lsl r1, r1, #8\n    and r1, r2\n    orr r1, r3\n    orr r1, r4\n    orr r1, r5\n    str r1, [r0, #0x7c]\n    add r1, r0, #0\n    add r1, #0x80\n    ldr r4, [r1]\n    mov r1, #0xff\n    lsl r2, r4, #0x18\n    add r3, r2, #0\n    lsl r1, r1, #0x18\n    and r3, r1\n    lsl r2, r4, #8\n    lsr r1, r1, #8\n    and r2, r1\n    lsr r1, r4, #0x18\n    lsl r1, r1, #0x18\n    lsr r4, r4, #8\n    lsr r1, r1, #0x18\n    and r4, r7\n    orr r1, r4\n    orr r1, r2\n    add r2, r3, #0\n    orr r2, r1\n    add r1, r0, #0\n    add r1, #0x80\n    add r0, #0x88\n    str r2, [r1]\n    cmp r6, #0x18\n    blt _021E6276\n    ldr r1, _021E64D4 ; =ov112_021FFB24\n    ldrb r0, [r1, #0x1c]\n    cmp r0, #0x60\n    bgt _021E6344\n    beq _021E638C\n    b _021E63A8\n    sub r0, #0xb0\n    cmp r0, #0xe\n    bhi _021E63A8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E6356: ; jump table\n    mov r0, #0x4a\n    strb r0, [r1, #0x1d]\n    ldr r1, _021E64C8 ; =ov112_021FFAA4\n    mov r0, #0x2e\n    ldr r1, [r1, #0x34]\n    lsl r0, r0, #0xa\n    mov r2, #4\n    bl ov112_021E5EC4\n    bl ov112_021E6134\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x4c\n    strb r0, [r1, #0x1d]\n    ldr r1, _021E64C8 ; =ov112_021FFAA4\n    ldr r0, _021E64E0 ; =0x0000DE24\n    ldr r2, [r1, #0x30]\n    mov r1, #0x89\n    lsl r1, r1, #2\n    add r1, r2, r1\n    ldr r2, _021E64E4 ; =0x00001568\n    bl ov112_021E5EC4\n    bl ov112_021E6134\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E64D4 ; =ov112_021FFB24\n    mov r1, #0x4a\n    strb r1, [r0, #0x1d]\n    ldr r1, _021E64C8 ; =ov112_021FFAA4\n    mov r0, #0x2e\n    ldr r1, [r1, #0x34]\n    ldr r2, _021E64E8 ; =0x000006C8\n    lsl r0, r0, #0xa\n    bl ov112_021E5EC4\n    bl ov112_021E6134\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r1, #0x1c]\n    cmp r0, #0x52\n    bgt _021E63D0\n    bge _021E6404\n    cmp r0, #0x40\n    beq _021E6412\n    b _021E6A3E\n    add r2, r0, #0\n    sub r2, #0xb0\n    cmp r2, #0xe\n    bls _021E63DA\n    b _021E6A3E\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021E63E6: ; jump table\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x24\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x4c\n    strb r0, [r1, #0x1d]\n    ldr r1, _021E64C8 ; =ov112_021FFAA4\n    ldr r0, _021E64E0 ; =0x0000DE24\n    ldr r2, [r1, #0x30]\n    mov r1, #0x89\n    lsl r1, r1, #2\n    add r1, r2, r1\n    ldr r2, _021E64E4 ; =0x00001568\n    bl ov112_021E5EC4\n    bl ov112_021E6134\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E64C8 ; =ov112_021FFAA4\n    ldr r2, [r0, #0x34]\n    ldrb r0, [r2]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1f\n    beq _021E6448\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xb0\n    strb r0, [r1, #0x1d]\n    add r0, r2, #4\n    mov r2, #9\n    ldr r1, _021E64EC ; =0x0000B804\n    lsl r2, r2, #6\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E64C8 ; =ov112_021FFAA4\n    ldr r3, [r0, #0x34]\n    ldrb r0, [r3]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    beq _021E6478\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xb2\n    mov r2, #0x91\n    strb r0, [r1, #0x1d]\n    lsl r2, r2, #2\n    add r0, r3, r2\n    ldr r1, _021E64F0 ; =0x0000BA44\n    add r2, #0xb8\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E64C8 ; =ov112_021FFAA4\n    ldr r3, [r0, #0x34]\n    ldrb r0, [r3]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    beq _021E64AA\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0xb4\n    strb r2, [r1, #0x1d]\n    mov r0, #0x15\n    lsl r0, r0, #6\n    ldr r1, _021E64F4 ; =0x0000BD40\n    add r0, r3, r0\n    add r2, #0xd4\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E64C8 ; =ov112_021FFAA4\n    b _021E64F8\n    nop\n    _021E64C8: .word ov112_021FFAA4\n    _021E64CC: .word 0x000082EA\n    _021E64D0: .word 0x447A0000\n    _021E64D4: .word ov112_021FFB24\n    _021E64D8: .word 0x0000CE80\n    _021E64DC: .word 0x00000D4C\n    _021E64E0: .word 0x0000DE24\n    _021E64E4: .word 0x00001568\n    _021E64E8: .word 0x000006C8\n    _021E64EC: .word 0x0000B804\n    _021E64F0: .word 0x0000BA44\n    _021E64F4: .word 0x0000BD40\n    ldr r2, [r0, #0x34]\n    ldrb r2, [r2]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x1f\n    beq _021E6510\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0xb6\n    strb r2, [r1, #0x1d]\n    mov r1, #0xbf\n    ldr r0, [r0, #0xc]\n    ldr r2, _021E6824 ; =0x00000CBC\n    lsl r1, r1, #8\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _021E6828 ; =ov112_021FFAA4\n    ldr r1, [r2, #4]\n    cmp r1, #3\n    bhi _021E65A2\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E653A: ; jump table\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1f\n    beq _021E65A2\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1a\n    lsr r1, r1, #0x1f\n    beq _021E65A2\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1f\n    beq _021E65A2\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    beq _021E65A2\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _021E6828 ; =ov112_021FFAA4\n    mov r5, #0xe\n    ldr r3, [r1, #0x34]\n    ldrb r2, [r3]\n    lsl r4, r2, #0x1c\n    lsr r4, r4, #0x1c\n    and r5, r4\n    cmp r5, #0xe\n    bne _021E6640\n    mov r0, #0xf\n    bic r2, r0\n    mov r0, #1\n    orr r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    mov r0, #0xf\n    and r0, r4\n    orr r0, r2\n    strb r0, [r3]\n    ldr r0, [r1, #4]\n    cmp r0, #3\n    bhi _021E663A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E65DA: ; jump table\n    ldr r0, _021E682C ; =ov112_021FFB24\n    mov r2, #0xb0\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0x34]\n    mov r2, #9\n    ldr r1, _021E6830 ; =0x0000B804\n    add r0, r0, #4\n    lsl r2, r2, #6\n    bl ov112_021E5EC4\n    b _021E663A\n    ldr r0, _021E682C ; =ov112_021FFB24\n    mov r2, #0xb2\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0x34]\n    mov r2, #0x91\n    lsl r2, r2, #2\n    add r0, r0, r2\n    ldr r1, _021E6834 ; =0x0000BA44\n    add r2, #0xb8\n    bl ov112_021E5EC4\n    b _021E663A\n    ldr r0, _021E682C ; =ov112_021FFB24\n    mov r2, #0xb4\n    strb r2, [r0, #0x1d]\n    mov r0, #0x15\n    ldr r1, [r1, #0x34]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    ldr r1, _021E6838 ; =0x0000BD40\n    add r2, #0xd4\n    bl ov112_021E5EC4\n    b _021E663A\n    ldr r0, _021E682C ; =ov112_021FFB24\n    mov r2, #0xb6\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0xc]\n    mov r1, #0xbf\n    ldr r2, _021E6824 ; =0x00000CBC\n    lsl r1, r1, #8\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r3, #1\n    add r1, r4, #0\n    tst r1, r3\n    beq _021E6654\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9e\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _021E682C ; =ov112_021FFB24\n    mov r2, #0x24\n    strb r0, [r1, #0x1d]\n    mov r0, #0\n    add r1, r0, #0\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _021E6828 ; =ov112_021FFAA4\n    ldr r1, [r2, #4]\n    cmp r1, #3\n    bhi _021E66E0\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E6678: ; jump table\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1f\n    beq _021E66E0\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1a\n    lsr r1, r1, #0x1f\n    beq _021E66E0\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1f\n    beq _021E66E0\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    beq _021E66E0\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _021E6828 ; =ov112_021FFAA4\n    mov r5, #0xd\n    ldr r4, [r1, #0x34]\n    ldrb r2, [r4]\n    lsl r3, r2, #0x1c\n    lsr r3, r3, #0x1c\n    and r5, r3\n    cmp r5, #0xd\n    bne _021E677E\n    mov r0, #0xf\n    bic r2, r0\n    mov r0, #2\n    orr r0, r3\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x18\n    mov r0, #0xf\n    and r0, r3\n    orr r0, r2\n    strb r0, [r4]\n    ldr r0, [r1, #4]\n    cmp r0, #3\n    bhi _021E6778\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E6718: ; jump table\n    ldr r0, _021E682C ; =ov112_021FFB24\n    mov r2, #0xb0\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0x34]\n    mov r2, #9\n    ldr r1, _021E6830 ; =0x0000B804\n    add r0, r0, #4\n    lsl r2, r2, #6\n    bl ov112_021E5EC4\n    b _021E6778\n    ldr r0, _021E682C ; =ov112_021FFB24\n    mov r2, #0xb2\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0x34]\n    mov r2, #0x91\n    lsl r2, r2, #2\n    add r0, r0, r2\n    ldr r1, _021E6834 ; =0x0000BA44\n    add r2, #0xb8\n    bl ov112_021E5EC4\n    b _021E6778\n    ldr r0, _021E682C ; =ov112_021FFB24\n    mov r2, #0xb4\n    strb r2, [r0, #0x1d]\n    mov r0, #0x15\n    ldr r1, [r1, #0x34]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    ldr r1, _021E6838 ; =0x0000BD40\n    add r2, #0xd4\n    bl ov112_021E5EC4\n    b _021E6778\n    ldr r0, _021E682C ; =ov112_021FFB24\n    mov r2, #0xb6\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0xc]\n    mov r1, #0xbf\n    ldr r2, _021E6824 ; =0x00000CBC\n    lsl r1, r1, #8\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #2\n    tst r1, r3\n    beq _021E6792\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9e\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _021E682C ; =ov112_021FFB24\n    mov r2, #0x24\n    strb r0, [r1, #0x1d]\n    mov r0, #0\n    add r1, r0, #0\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _021E6828 ; =ov112_021FFAA4\n    ldr r1, [r2, #4]\n    cmp r1, #3\n    bhi _021E6820\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E67B8: ; jump table\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1f\n    beq _021E6820\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1a\n    lsr r1, r1, #0x1f\n    beq _021E6820\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1f\n    beq _021E6820\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    beq _021E6820\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _021E6828 ; =ov112_021FFAA4\n    b _021E683C\n    _021E6824: .word 0x00000CBC\n    _021E6828: .word ov112_021FFAA4\n    _021E682C: .word ov112_021FFB24\n    _021E6830: .word 0x0000B804\n    _021E6834: .word 0x0000BA44\n    _021E6838: .word 0x0000BD40\n    mov r5, #0xb\n    ldr r4, [r1, #0x34]\n    ldrb r2, [r4]\n    lsl r3, r2, #0x1c\n    lsr r3, r3, #0x1c\n    and r5, r3\n    cmp r5, #0xb\n    bne _021E68D8\n    mov r0, #0xf\n    bic r2, r0\n    mov r0, #4\n    orr r0, r3\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x18\n    mov r0, #0xf\n    and r0, r3\n    orr r0, r2\n    strb r0, [r4]\n    ldr r0, [r1, #4]\n    cmp r0, #3\n    bhi _021E68D2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E6872: ; jump table\n    ldr r0, _021E6A54 ; =ov112_021FFB24\n    mov r2, #0xb0\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0x34]\n    mov r2, #9\n    ldr r1, _021E6A58 ; =0x0000B804\n    add r0, r0, #4\n    lsl r2, r2, #6\n    bl ov112_021E5EC4\n    b _021E68D2\n    ldr r0, _021E6A54 ; =ov112_021FFB24\n    mov r2, #0xb2\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0x34]\n    mov r2, #0x91\n    lsl r2, r2, #2\n    add r0, r0, r2\n    ldr r1, _021E6A5C ; =0x0000BA44\n    add r2, #0xb8\n    bl ov112_021E5EC4\n    b _021E68D2\n    ldr r0, _021E6A54 ; =ov112_021FFB24\n    mov r2, #0xb4\n    strb r2, [r0, #0x1d]\n    mov r0, #0x15\n    ldr r1, [r1, #0x34]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    ldr r1, _021E6A60 ; =0x0000BD40\n    add r2, #0xd4\n    bl ov112_021E5EC4\n    b _021E68D2\n    ldr r0, _021E6A54 ; =ov112_021FFB24\n    mov r2, #0xb6\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0xc]\n    mov r1, #0xbf\n    ldr r2, _021E6A64 ; =0x00000CBC\n    lsl r1, r1, #8\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #4\n    tst r1, r3\n    beq _021E68EC\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9e\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _021E6A54 ; =ov112_021FFB24\n    mov r2, #0x24\n    strb r0, [r1, #0x1d]\n    mov r0, #0\n    add r1, r0, #0\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _021E6A68 ; =ov112_021FFAA4\n    ldr r1, [r2, #4]\n    cmp r1, #3\n    bhi _021E697A\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E6912: ; jump table\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1f\n    beq _021E697A\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1a\n    lsr r1, r1, #0x1f\n    beq _021E697A\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1f\n    beq _021E697A\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r2, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    beq _021E697A\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9c\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _021E6A68 ; =ov112_021FFAA4\n    mov r5, #7\n    ldr r4, [r1, #0x34]\n    ldrb r2, [r4]\n    lsl r3, r2, #0x1c\n    lsr r3, r3, #0x1c\n    and r5, r3\n    cmp r5, #7\n    bne _021E6A18\n    mov r0, #0xf\n    bic r2, r0\n    mov r0, #8\n    orr r0, r3\n    lsl r0, r0, #0x18\n    lsr r3, r0, #0x18\n    mov r0, #0xf\n    and r0, r3\n    orr r0, r2\n    strb r0, [r4]\n    ldr r0, [r1, #4]\n    cmp r0, #3\n    bhi _021E6A12\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E69B2: ; jump table\n    ldr r0, _021E6A54 ; =ov112_021FFB24\n    mov r2, #0xb0\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0x34]\n    mov r2, #9\n    ldr r1, _021E6A58 ; =0x0000B804\n    add r0, r0, #4\n    lsl r2, r2, #6\n    bl ov112_021E5EC4\n    b _021E6A12\n    ldr r0, _021E6A54 ; =ov112_021FFB24\n    mov r2, #0xb2\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0x34]\n    mov r2, #0x91\n    lsl r2, r2, #2\n    add r0, r0, r2\n    ldr r1, _021E6A5C ; =0x0000BA44\n    add r2, #0xb8\n    bl ov112_021E5EC4\n    b _021E6A12\n    ldr r0, _021E6A54 ; =ov112_021FFB24\n    mov r2, #0xb4\n    strb r2, [r0, #0x1d]\n    mov r0, #0x15\n    ldr r1, [r1, #0x34]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    ldr r1, _021E6A60 ; =0x0000BD40\n    add r2, #0xd4\n    bl ov112_021E5EC4\n    b _021E6A12\n    ldr r0, _021E6A54 ; =ov112_021FFB24\n    mov r2, #0xb6\n    strb r2, [r0, #0x1d]\n    ldr r0, [r1, #0xc]\n    mov r1, #0xbf\n    ldr r2, _021E6A64 ; =0x00000CBC\n    lsl r1, r1, #8\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #8\n    tst r1, r3\n    beq _021E6A2C\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x9e\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _021E6A54 ; =ov112_021FFB24\n    mov r2, #0x24\n    strb r0, [r1, #0x1d]\n    mov r0, #0\n    add r1, r0, #0\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    bl OS_Halt\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x24\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E6A54: .word ov112_021FFB24\n    _021E6A58: .word 0x0000B804\n    _021E6A5C: .word 0x0000BA44\n    _021E6A60: .word 0x0000BD40\n    _021E6A64: .word 0x00000CBC\n    _021E6A68: .word ov112_021FFAA4"
    );
    #endif
}

void ov112_021E6A6C(void) {
    /* Original at 0x021E6A6C */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021E6BD0 ; =ov112_021FFAA4\n    mov r2, #0\n    str r2, [r1, #0x14]\n    cmp r0, #0\n    bne _021E6A84\n    mov r0, #0xc\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r3, pc}\n    cmp r0, #2\n    bls _021E6A94\n    mov r0, #0xc\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r3, pc}\n    bl OS_GetTick\n    ldr r2, _021E6BD0 ; =ov112_021FFAA4\n    str r0, [r2, #0x3c]\n    ldr r0, _021E6BD4 ; =ov112_021FFB24\n    str r1, [r2, #0x40]\n    ldrb r0, [r0, #0x1c]\n    cmp r0, #0x60\n    bgt _021E6AC4\n    blt _021E6AAA\n    b _021E6BBC\n    cmp r0, #0x32\n    bgt _021E6AB6\n    bge _021E6BAA\n    cmp r0, #0x2a\n    beq _021E6B88\n    pop {r3, pc}\n    cmp r0, #0x40\n    bgt _021E6ABE\n    beq _021E6BAA\n    pop {r3, pc}\n    cmp r0, #0x52\n    beq _021E6BAA\n    pop {r3, pc}\n    cmp r0, #0xe2\n    bgt _021E6B04\n    bge _021E6B4A\n    cmp r0, #0xbe\n    bgt _021E6AFE\n    add r1, r0, #0\n    sub r1, #0xb0\n    bmi _021E6BCE\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E6AE0: ; jump table\n    cmp r0, #0xe0\n    beq _021E6B70\n    pop {r3, pc}\n    cmp r0, #0xf0\n    bgt _021E6B0C\n    beq _021E6B12\n    pop {r3, pc}\n    cmp r0, #0xfe\n    beq _021E6B34\n    pop {r3, pc}\n    bl ov112_021E5E28\n    ldr r0, _021E6BD0 ; =ov112_021FFAA4\n    ldr r1, _021E6BD8 ; =ov112_021FFB64\n    ldr r0, [r0, #0x20]\n    mov r2, #0x28\n    add r0, #0x10\n    bl MI_CpuCopy8\n    ldr r2, _021E6BD4 ; =ov112_021FFB24\n    ldr r0, _021E6BD8 ; =ov112_021FFB64\n    ldrb r2, [r2, #0x1c]\n    mov r1, #0x74\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, pc}\n    bl ov112_021E5E28\n    ldr r2, _021E6BD4 ; =ov112_021FFB24\n    ldr r0, _021E6BD0 ; =ov112_021FFAA4\n    ldrb r2, [r2, #0x1c]\n    ldr r0, [r0, #0x28]\n    mov r1, #8\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, pc}\n    mov r1, #0x80\n    add r0, sp, #0\n    strb r1, [r0]\n    ldrh r2, [r2]\n    mov r3, #0\n    asr r1, r2, #8\n    strb r1, [r0, #1]\n    strb r2, [r0, #2]\n    ldrb r1, [r0, #1]\n    add r2, r1, #1\n    ldrb r1, [r0, #2]\n    add r1, r2, r1\n    strb r1, [r0, #3]\n    add r0, sp, #0\n    mov r1, #4\n    mov r2, #0xa\n    bl ov112_021E5A68\n    pop {r3, pc}\n    bl ov112_021E5E28\n    ldr r0, _021E6BD0 ; =ov112_021FFAA4\n    ldr r2, _021E6BD4 ; =ov112_021FFB24\n    ldr r0, [r0, #0x20]\n    ldrb r2, [r2, #0x1c]\n    add r0, #0x10\n    mov r1, #0x28\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, pc}\n    bl ov112_021E5E28\n    ldr r0, _021E6BD0 ; =ov112_021FFAA4\n    ldr r2, _021E6BD4 ; =ov112_021FFB24\n    ldr r0, [r0, #0x20]\n    ldrb r2, [r2, #0x1d]\n    add r0, #0x10\n    mov r1, #0x28\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #0xf\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r3, pc}\n    bl ov112_021E5E48\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x20\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, pc}\n    ldr r1, _021E6BD0 ; =ov112_021FFAA4\n    mov r0, #0\n    ldr r1, [r1, #0x20]\n    mov r2, #0x20\n    str r0, [r1, #0x60]\n    add r1, r0, #0\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r3, pc}\n    _021E6BD0: .word ov112_021FFAA4\n    _021E6BD4: .word ov112_021FFB24\n    _021E6BD8: .word ov112_021FFB64"
    );
    #endif
}

void ov112_021E6BDC(void) {
    /* Original at 0x021E6BDC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E6BF4 ; =ov112_021FFB24\n    ldr r1, [r0, #0x24]\n    str r1, [r0, #0x20]\n    ldr r1, [r0, #0x2c]\n    str r1, [r0, #0x28]\n    ldrh r1, [r0, #0x32]\n    strh r1, [r0, #0x30]\n    mov r1, #0\n    strh r1, [r0, #0x36]\n    strh r1, [r0, #0x3a]\n    bx lr\n    nop\n    _021E6BF4: .word ov112_021FFB24"
    );
    #endif
}

void ov112_021E6BF8(void) {
    /* Original at 0x021E6BF8 */
    /* Requires manual decompilation - 355 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _021E6EA8 ; =ov112_021FFB24\n    ldrb r2, [r0, #0x1c]\n    cmp r2, #0x52\n    bgt _021E6C14\n    blt _021E6C06\n    b _021E6D6C\n    cmp r2, #0x32\n    bgt _021E6C0E\n    beq _021E6C52\n    b _021E6F52\n    cmp r2, #0x40\n    beq _021E6C8E\n    b _021E6F52\n    cmp r2, #0x60\n    bgt _021E6C1E\n    bne _021E6C1C\n    b _021E6E4C\n    b _021E6F52\n    add r0, r2, #0\n    sub r0, #0xb0\n    cmp r0, #0xe\n    bls _021E6C28\n    b _021E6F52\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E6C34: ; jump table\n    ldr r0, _021E6EAC ; =ov112_021FFAA4\n    ldr r1, [r0, #0x18]\n    cmp r1, #0\n    beq _021E6C7E\n    ldr r0, [r0, #0x24]\n    add r0, #0x5b\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _021E6C7E\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x36\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #4\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    ldr r0, _021E6EAC ; =ov112_021FFAA4\n    mov r1, #0x68\n    ldr r0, [r0, #0x20]\n    mov r2, #0x32\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, pc}\n    ldr r2, _021E6EAC ; =ov112_021FFAA4\n    ldr r1, [r2, #0x24]\n    add r0, r1, #0\n    add r0, #0x5b\n    ldrb r0, [r0]\n    lsl r3, r0, #0x1f\n    lsr r3, r3, #0x1f\n    bne _021E6CB6\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x44\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #5\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    bne _021E6CD4\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x44\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #6\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    ldr r0, [r2, #0x20]\n    ldr r3, [r1, #0xc]\n    ldr r2, [r0, #0xc]\n    cmp r3, r2\n    beq _021E6CF6\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x44\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #0xb\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    ldr r3, [r1, #4]\n    ldr r2, [r0, #4]\n    cmp r3, r2\n    beq _021E6D16\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x44\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #8\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    ldrh r2, [r1, #0xa]\n    lsr r3, r2, #2\n    ldrh r2, [r0, #0xa]\n    lsr r2, r2, #2\n    cmp r3, r2\n    beq _021E6D3A\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x44\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #9\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    add r1, #0x5d\n    ldrb r2, [r1]\n    add r1, r0, #0\n    add r1, #0x5d\n    ldrb r1, [r1]\n    cmp r2, r1\n    bls _021E6D60\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x44\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #0xa\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    mov r1, #0x68\n    mov r2, #0x40\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, pc}\n    ldr r2, _021E6EAC ; =ov112_021FFAA4\n    ldr r1, [r2, #0x24]\n    add r0, r1, #0\n    add r0, #0x5b\n    ldrb r0, [r0]\n    lsl r3, r0, #0x1f\n    lsr r3, r3, #0x1f\n    bne _021E6D94\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x56\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #5\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021E6DB4\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x56\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #7\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    ldr r0, [r2, #0x20]\n    ldr r3, [r1]\n    ldr r2, [r0]\n    cmp r3, r2\n    beq _021E6DD6\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x56\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #8\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    ldrh r2, [r1, #8]\n    lsr r3, r2, #2\n    ldrh r2, [r0, #8]\n    lsr r2, r2, #2\n    cmp r3, r2\n    beq _021E6DFA\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x56\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #9\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    ldr r3, [r1, #0xc]\n    ldr r2, [r0, #0xc]\n    cmp r3, r2\n    beq _021E6E1A\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x56\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #0xb\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    add r1, #0x5d\n    ldrb r2, [r1]\n    add r1, r0, #0\n    add r1, #0x5d\n    ldrb r1, [r1]\n    cmp r2, r1\n    bls _021E6E40\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x56\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #0xa\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    mov r1, #0x68\n    mov r2, #0x52\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, pc}\n    ldr r1, _021E6EAC ; =ov112_021FFAA4\n    ldr r2, [r1, #0x24]\n    add r0, r2, #0\n    add r0, #0x5b\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    ldr r0, [r1, #0x20]\n    bne _021E6E74\n    mov r1, #0x68\n    mov r2, #0x64\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #5\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    add r1, r0, #0\n    add r2, #0x5d\n    add r1, #0x5d\n    ldrb r2, [r2]\n    ldrb r1, [r1]\n    cmp r2, r1\n    bls _021E6E98\n    mov r1, #0x68\n    mov r2, #0x64\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #0xa\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    mov r1, #0x68\n    mov r2, #0x60\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, pc}\n    ldr r3, _021E6EAC ; =ov112_021FFAA4\n    b _021E6EB0\n    _021E6EA8: .word ov112_021FFB24\n    _021E6EAC: .word ov112_021FFAA4\n    ldr r1, [r3, #0x24]\n    add r0, r1, #0\n    add r0, #0x5b\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bne _021E6ED6\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xd8\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #5\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    ldr r0, [r3, #0x20]\n    ldr r4, [r1]\n    ldr r3, [r0]\n    cmp r4, r3\n    beq _021E6EF8\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xd8\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #8\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    ldrh r3, [r1, #8]\n    lsr r4, r3, #2\n    ldrh r3, [r0, #8]\n    lsr r3, r3, #2\n    cmp r4, r3\n    beq _021E6F1C\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xd8\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #9\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    add r1, #0x5d\n    ldrb r3, [r1]\n    add r1, r0, #0\n    add r1, #0x5d\n    ldrb r1, [r1]\n    cmp r3, r1\n    bls _021E6F42\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xd8\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #0xa\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}\n    sub r2, #0x10\n    lsl r2, r2, #0x18\n    mov r1, #0x68\n    lsr r2, r2, #0x18\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, pc}\n    mov r0, #0xc\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021E6F60(void) {
    /* Original at 0x021E6F60 */
    /* Requires manual decompilation - 441 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    cmp r2, #0x9e\n    bgt _021E6FE8\n    blt _021E6F6C\n    b _021E71F4\n    cmp r2, #0x44\n    bgt _021E6FB6\n    blt _021E6F74\n    b _021E7268\n    cmp r2, #0x28\n    bgt _021E6F9E\n    cmp r2, #0x22\n    blt _021E6F8C\n    beq _021E7076\n    cmp r2, #0x26\n    bne _021E6F84\n    b _021E70B0\n    cmp r2, #0x28\n    bne _021E6F8A\n    b _021E720C\n    pop {r4, r5, r6, pc}\n    cmp r2, #4\n    bgt _021E6F96\n    bne _021E6F94\n    b _021E732E\n    pop {r4, r5, r6, pc}\n    cmp r2, #0xe\n    bne _021E6F9C\n    b _021E7342\n    pop {r4, r5, r6, pc}\n    cmp r2, #0x38\n    bgt _021E6FAE\n    blt _021E6FA6\n    b _021E7242\n    cmp r2, #0x34\n    bne _021E6FAC\n    b _021E7218\n    pop {r4, r5, r6, pc}\n    cmp r2, #0x42\n    bne _021E6FB4\n    b _021E724E\n    pop {r4, r5, r6, pc}\n    cmp r2, #0x5e\n    bgt _021E6FD0\n    blt _021E6FBE\n    b _021E72AA\n    cmp r2, #0x54\n    bgt _021E6FC8\n    bne _021E6FC6\n    b _021E7274\n    pop {r4, r5, r6, pc}\n    cmp r2, #0x5a\n    bne _021E6FCE\n    b _021E729E\n    pop {r4, r5, r6, pc}\n    cmp r2, #0x64\n    bgt _021E6FE0\n    blt _021E6FD8\n    b _021E72CE\n    cmp r2, #0x62\n    bne _021E6FDE\n    b _021E72B6\n    pop {r4, r5, r6, pc}\n    cmp r2, #0x9c\n    bne _021E6FE6\n    b _021E7200\n    pop {r4, r5, r6, pc}\n    cmp r2, #0xca\n    bgt _021E7040\n    bge _021E7052\n    cmp r2, #0xc2\n    bgt _021E702E\n    bge _021E7052\n    cmp r2, #0xae\n    bgt _021E7028\n    add r0, r2, #0\n    sub r0, #0xa0\n    bmi _021E7064\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E700A: ; jump table\n    cmp r2, #0xc0\n    beq _021E7052\n    pop {r4, r5, r6, pc}\n    cmp r2, #0xc6\n    bgt _021E703A\n    bge _021E7052\n    cmp r2, #0xc4\n    beq _021E7052\n    pop {r4, r5, r6, pc}\n    cmp r2, #0xc8\n    beq _021E7052\n    pop {r4, r5, r6, pc}\n    cmp r2, #0xe2\n    bgt _021E705E\n    blt _021E7048\n    b _021E7316\n    cmp r2, #0xce\n    bgt _021E7056\n    bge _021E7052\n    cmp r2, #0xcc\n    bne _021E7054\n    b _021E72F2\n    pop {r4, r5, r6, pc}\n    cmp r2, #0xe0\n    bne _021E705C\n    b _021E7322\n    pop {r4, r5, r6, pc}\n    cmp r2, #0xf4\n    bgt _021E706E\n    blt _021E7066\n    b _021E737C\n    cmp r2, #0xf0\n    bne _021E706C\n    b _021E72FE\n    pop {r4, r5, r6, pc}\n    cmp r2, #0xfe\n    bne _021E7074\n    b _021E730A\n    pop {r4, r5, r6, pc}\n    ldr r1, _021E7380 ; =ov112_021FFAA4\n    mov r2, #0x68\n    ldr r1, [r1, #0x24]\n    bl MI_CpuCopy8\n    ldr r0, _021E7380 ; =ov112_021FFAA4\n    mov r5, #0xff\n    ldr r4, [r0, #0x24]\n    lsl r5, r5, #0x18\n    ldr r3, [r4, #0x64]\n    lsl r0, r3, #0x18\n    add r2, r0, #0\n    lsl r1, r3, #8\n    lsr r0, r5, #8\n    and r1, r0\n    lsr r0, r3, #0x18\n    lsl r0, r0, #0x18\n    lsr r6, r3, #8\n    lsr r3, r5, #0x10\n    lsr r0, r0, #0x18\n    and r3, r6\n    orr r0, r3\n    and r2, r5\n    orr r0, r1\n    orr r0, r2\n    str r0, [r4, #0x64]\n    bl ov112_021E6BF8\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E7384 ; =ov112_021FFB24\n    ldrb r2, [r0, #0x1c]\n    cmp r2, #0x52\n    bgt _021E70C8\n    bge _021E7128\n    cmp r2, #0x32\n    bgt _021E70C2\n    beq _021E7102\n    pop {r4, r5, r6, pc}\n    cmp r2, #0x40\n    beq _021E7110\n    pop {r4, r5, r6, pc}\n    cmp r2, #0x60\n    bgt _021E70D0\n    beq _021E7136\n    pop {r4, r5, r6, pc}\n    add r0, r2, #0\n    sub r0, #0xb0\n    cmp r0, #0xe\n    bhi _021E719A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E70E4: ; jump table\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x38\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x4e\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #0xf\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x5a\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x66\n    mov r3, #1\n    bl ov112_021E5A68\n    mov r0, #0xf\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xc0\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xc2\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xc4\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xc6\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E7380 ; =ov112_021FFAA4\n    ldr r1, [r0, #0x34]\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    cmp r1, #0xf\n    bne _021E71E8\n    ldr r0, [r0, #4]\n    cmp r0, #3\n    bls _021E719C\n    b _021E737C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E71A8: ; jump table\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xd0\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xd2\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xd4\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0xd6\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add r1, r0, #0\n    mov r3, #1\n    bl ov112_021E5A68\n    pop {r4, r5, r6, pc}\n    mov r0, #0xc\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    mov r0, #0xc\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    mov r0, #3\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E7384 ; =ov112_021FFB24\n    mov r1, #0x3a\n    strb r1, [r0, #0x1d]\n    ldr r1, _021E7380 ; =ov112_021FFAA4\n    ldr r2, _021E7388 ; =0x00008C50\n    ldr r0, [r1, #0x50]\n    cmp r0, #0\n    beq _021E7232\n    mov r1, #0xa\n    lsl r1, r1, #6\n    bl ov112_021E5EC4\n    b _021E723C\n    ldr r0, [r1, #0x10]\n    mov r1, #0xa\n    lsl r1, r1, #6\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r4, r5, r6, pc}\n    mov r0, #0xf\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E7384 ; =ov112_021FFB24\n    mov r1, #0x46\n    strb r1, [r0, #0x1d]\n    ldr r1, _021E7380 ; =ov112_021FFAA4\n    mov r0, #0x8f\n    ldr r1, [r1, #8]\n    lsl r0, r0, #8\n    mov r2, #0x2a\n    bl ov112_021E5EC4\n    bl ov112_021E6134\n    pop {r4, r5, r6, pc}\n    mov r0, #0xe\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E7384 ; =ov112_021FFB24\n    mov r1, #0x3c\n    strb r1, [r0, #0x1d]\n    ldr r1, _021E7380 ; =ov112_021FFAA4\n    ldr r2, _021E738C ; =0x000028BE\n    ldr r0, [r1, #0x58]\n    cmp r0, #0\n    beq _021E728E\n    mov r1, #0xd7\n    lsl r1, r1, #8\n    bl ov112_021E5EC4\n    b _021E7298\n    ldr r0, [r1, #0x2c]\n    mov r1, #0xd7\n    lsl r1, r1, #8\n    bl ov112_021E5EC4\n    bl ov112_021E5EEC\n    pop {r4, r5, r6, pc}\n    mov r0, #0xf\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    mov r0, #0xf\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E7384 ; =ov112_021FFB24\n    mov r1, #0x48\n    strb r1, [r0, #0x1d]\n    ldr r1, _021E7380 ; =ov112_021FFAA4\n    ldr r0, _021E7390 ; =0x0000CE80\n    ldr r1, [r1, #0x38]\n    ldr r2, _021E7394 ; =0x00000D4C\n    bl ov112_021E5EC4\n    bl ov112_021E6134\n    pop {r4, r5, r6, pc}\n    mov r0, #0xe\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E7384 ; =ov112_021FFB24\n    mov r1, #0x48\n    strb r1, [r0, #0x1d]\n    ldr r1, _021E7380 ; =ov112_021FFAA4\n    ldr r0, _021E7390 ; =0x0000CE80\n    ldr r1, [r1, #0x38]\n    ldr r2, _021E7394 ; =0x00000D4C\n    bl ov112_021E5EC4\n    bl ov112_021E6134\n    pop {r4, r5, r6, pc}\n    mov r0, #0xf\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    mov r0, #0xf\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    mov r0, #0xf\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    mov r0, #0xf\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    mov r0, #0xf\n    bl ov112_021E5E18\n    bl ov112_021E5A5C\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E7384 ; =ov112_021FFB24\n    ldrh r0, [r0, #0x30]\n    cmp r0, #0\n    bne _021E733C\n    bl ov112_021E6004\n    pop {r4, r5, r6, pc}\n    bl ov112_021E5EEC\n    pop {r4, r5, r6, pc}\n    ldr r1, _021E7384 ; =ov112_021FFB24\n    add r2, r4, #0\n    ldr r1, [r1, #0x28]\n    bl MI_CpuCopy8\n    ldr r0, _021E7384 ; =ov112_021FFB24\n    ldr r1, [r0, #0x20]\n    add r1, r1, r4\n    str r1, [r0, #0x20]\n    ldr r1, [r0, #0x28]\n    add r1, r1, r4\n    str r1, [r0, #0x28]\n    ldrh r1, [r0, #0x30]\n    sub r1, r1, r4\n    strh r1, [r0, #0x30]\n    ldrh r1, [r0, #0x36]\n    add r1, r1, #1\n    strh r1, [r0, #0x36]\n    ldrh r1, [r0, #0x3a]\n    add r1, r1, #1\n    strh r1, [r0, #0x3a]\n    ldrh r0, [r0, #0x30]\n    cmp r0, #0\n    bne _021E7378\n    bl ov112_021E6164\n    pop {r4, r5, r6, pc}\n    bl ov112_021E6134\n    pop {r4, r5, r6, pc}\n    nop\n    _021E7380: .word ov112_021FFAA4\n    _021E7384: .word ov112_021FFB24\n    _021E7388: .word 0x00008C50\n    _021E738C: .word 0x000028BE\n    _021E7390: .word 0x0000CE80\n    _021E7394: .word 0x00000D4C"
    );
    #endif
}

void ov112_021E7398(void) {
    /* Original at 0x021E7398 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r5, _021E73C4 ; =ov112_021FFB08\n    mov r4, #2\n    mov r6, #4\n    add r0, r5, #0\n    bl OS_LockMutex\n    bl ov112_021E5B98\n    cmp r0, #1\n    bne _021E73B4\n    add r0, r4, #0\n    bl ov112_021E5E18\n    add r0, r5, #0\n    bl OS_UnlockMutex\n    add r0, r6, #0\n    bl OS_Sleep\n    b _021E73A0\n    nop\n    _021E73C4: .word ov112_021FFB08"
    );
    #endif
}

void ov112_021E73C8(void) {
    /* Original at 0x021E73C8 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, _021E7440 ; =ov112_021FFAA4\n    mov r1, #1\n    str r1, [r0, #0x18]\n    str r1, [r0, #0x14]\n    mov r1, #0\n    str r1, [r0, #0x44]\n    add r6, r2, #0\n    str r1, [r0, #0x48]\n    bl ov112_021E5964\n    mov r0, #1\n    bl ov112_021E5D5C\n    ldr r0, _021E7444 ; =ov112_021E6A6C\n    bl ov112_021E5D38\n    ldr r0, _021E7448 ; =ov112_021E6F60\n    bl ov112_021E5D44\n    ldr r0, _021E744C ; =ov112_021E6BDC\n    bl ov112_021E5D50\n    bl CARD_SpiWaitGetStatus\n    bl CARD_SpiWaitGetStatus\n    cmp r0, #0xaa\n    bne _021E7414\n    mov r0, #0\n    bl CARD_SetSpiWriteWaitCycles\n    mov r0, #0\n    bl CARD_SetSpiReadWaitCycles\n    ldr r0, _021E7450 ; =ov112_021FFB08\n    bl OS_InitMutex\n    ldr r0, _021E7454 ; =ov112_021FFB20\n    ldr r1, _021E7458 ; =ov112_021FFAC0\n    mov r2, #1\n    bl OS_InitMessageQueue\n    str r4, [sp]\n    ldr r0, _021E745C ; =ov112_021FFBD8\n    ldr r1, _021E7460 ; =ov112_021E7398\n    mov r2, #0\n    add r3, r5, r4\n    str r6, [sp, #4]\n    bl OS_CreateThread\n    ldr r0, _021E745C ; =ov112_021FFBD8\n    bl OS_WakeupThreadDirect\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _021E7440: .word ov112_021FFAA4\n    _021E7444: .word ov112_021E6A6C\n    _021E7448: .word ov112_021E6F60\n    _021E744C: .word ov112_021E6BDC\n    _021E7450: .word ov112_021FFB08\n    _021E7454: .word ov112_021FFB20\n    _021E7458: .word ov112_021FFAC0\n    _021E745C: .word ov112_021FFBD8\n    _021E7460: .word ov112_021E7398"
    );
    #endif
}

void ov112_021E7464(void) {
    /* Original at 0x021E7464 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021E747C ; =ov112_021FFB08\n    bl OS_LockMutex\n    ldr r0, _021E7480 ; =ov112_021FFBD8\n    mov r1, #0\n    bl OS_KillThread\n    ldr r0, _021E747C ; =ov112_021FFB08\n    bl OS_UnlockMutex\n    pop {r3, pc}\n    _021E747C: .word ov112_021FFB08\n    _021E7480: .word ov112_021FFBD8"
    );
    #endif
}

void ov112_021E7484(void) {
    /* Original at 0x021E7484 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E74A0 ; =ov112_021FFB24\n    mov r2, #0x2a\n    strb r2, [r1, #0x1c]\n    cmp r0, #0\n    beq _021E7492\n    strb r2, [r1, #0x1d]\n    b _021E7496\n    mov r0, #0x2c\n    strb r0, [r1, #0x1d]\n    ldr r3, _021E74A4 ; =ov112_021E5EC4\n    mov r0, #0\n    add r1, r0, #0\n    mov r2, #0x28\n    bx r3\n    _021E74A0: .word ov112_021FFB24\n    _021E74A4: .word ov112_021E5EC4"
    );
    #endif
}

void ov112_021E74A8(void) {
    /* Original at 0x021E74A8 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _021E752C ; =ov112_021FFAA4\n    str r0, [r3, #0x10]\n    str r1, [r3, #0x2c]\n    str r2, [r3, #0x30]\n    ldr r0, _021E7530 ; =ov112_021FFB24\n    mov r1, #0x32\n    strb r1, [r0, #0x1c]\n    mov r1, #0x20\n    strb r1, [r0, #0x1d]\n    mov r0, #0\n    ldr r2, _021E7534 ; =0x00000D4C\n    add r1, r0, #0\n    bl ov112_021E5EC4\n    ldr r0, _021E7538 ; =0x0000B732\n    ldr r1, _021E7530 ; =ov112_021FFB24\n    strh r0, [r1, #0x3c]\n    mov r0, #0\n    strh r0, [r1, #0x3a]\n    ldrh r2, [r1, #0x3c]\n    add r2, #0x7f\n    asr r0, r2, #6\n    lsr r0, r0, #0x19\n    add r0, r2, r0\n    asr r0, r0, #7\n    strh r0, [r1, #0x38]\n    ldr r0, _021E752C ; =ov112_021FFAA4\n    ldr r1, [r0, #0x48]\n    cmp r1, #0\n    beq _021E752A\n    ldr r3, [r0, #0x44]\n    ldr r2, _021E753C ; =0x00008C50\n    str r3, [r0, #0x4c]\n    str r1, [r0, #0x50]\n    ldr r0, [r0, #0x10]\n    bl ov112_021E5D8C\n    ldr r2, _021E752C ; =ov112_021FFAA4\n    ldr r0, _021E7540 ; =0x00000119\n    ldr r1, [r2, #0x44]\n    add r3, r1, r0\n    str r3, [r2, #0x54]\n    ldr r1, [r2, #0x48]\n    lsl r0, r0, #7\n    add r1, r1, r0\n    str r1, [r2, #0x58]\n    ldr r0, [r2, #0x2c]\n    ldr r2, _021E7544 ; =0x000028BE\n    bl ov112_021E5D8C\n    ldr r2, _021E752C ; =ov112_021FFAA4\n    mov r0, #0x29\n    ldr r3, [r2, #0x54]\n    lsl r0, r0, #8\n    add r3, #0x52\n    str r3, [r2, #0x5c]\n    ldr r1, [r2, #0x58]\n    add r1, r1, r0\n    str r1, [r2, #0x60]\n    ldr r0, [r2, #0x30]\n    mov r2, #0x89\n    lsl r2, r2, #2\n    bl ov112_021E5D8C\n    pop {r3, pc}\n    _021E752C: .word ov112_021FFAA4\n    _021E7530: .word ov112_021FFB24\n    _021E7534: .word 0x00000D4C\n    _021E7538: .word 0x0000B732\n    _021E753C: .word 0x00008C50\n    _021E7540: .word 0x00000119\n    _021E7544: .word 0x000028BE"
    );
    #endif
}

void ov112_021E7548(void) {
    /* Original at 0x021E7548 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, _021E7584 ; =ov112_021FFAA4\n    str r0, [r4, #8]\n    str r1, [r4, #0x38]\n    str r2, [r4, #0x34]\n    ldr r0, _021E7588 ; =ov112_021FFB24\n    str r3, [r4, #0x30]\n    mov r1, #0x40\n    strb r1, [r0, #0x1c]\n    mov r1, #0x20\n    strb r1, [r0, #0x1d]\n    mov r0, #0\n    ldr r2, _021E758C ; =0x00000D4C\n    add r1, r0, #0\n    bl ov112_021E5EC4\n    ldr r0, _021E7590 ; =0x00002BCA\n    ldr r1, _021E7588 ; =ov112_021FFB24\n    strh r0, [r1, #0x3c]\n    mov r0, #0\n    strh r0, [r1, #0x3a]\n    ldrh r2, [r1, #0x3c]\n    add r2, #0x7f\n    asr r0, r2, #6\n    lsr r0, r0, #0x19\n    add r0, r2, r0\n    asr r0, r0, #7\n    strh r0, [r1, #0x38]\n    pop {r4, pc}\n    nop\n    _021E7584: .word ov112_021FFAA4\n    _021E7588: .word ov112_021FFB24\n    _021E758C: .word 0x00000D4C\n    _021E7590: .word 0x00002BCA"
    );
    #endif
}

void ov112_021E7594(void) {
    /* Original at 0x021E7594 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, _021E7608 ; =ov112_021FFAA4\n    str r0, [r4, #0x2c]\n    str r1, [r4, #0x30]\n    str r2, [r4, #0x38]\n    ldr r0, _021E760C ; =ov112_021FFB24\n    str r3, [r4, #0x34]\n    mov r1, #0x52\n    strb r1, [r0, #0x1c]\n    mov r1, #0x20\n    strb r1, [r0, #0x1d]\n    mov r0, #0\n    ldr r2, _021E7610 ; =0x00000D4C\n    add r1, r0, #0\n    bl ov112_021E5EC4\n    ldr r0, _021E7614 ; =0x0000382E\n    ldr r1, _021E760C ; =ov112_021FFB24\n    strh r0, [r1, #0x3c]\n    mov r0, #0\n    strh r0, [r1, #0x3a]\n    ldrh r2, [r1, #0x3c]\n    add r2, #0x7f\n    asr r0, r2, #6\n    lsr r0, r0, #0x19\n    add r0, r2, r0\n    add r2, r4, #0\n    asr r0, r0, #7\n    ldr r4, [r2, #0x48]\n    strh r0, [r1, #0x38]\n    cmp r4, #0\n    beq _021E7606\n    ldr r1, [r2, #0x44]\n    ldr r0, _021E7618 ; =0x00000119\n    add r3, r1, r0\n    lsl r0, r0, #7\n    str r3, [r2, #0x54]\n    add r1, r4, r0\n    str r1, [r2, #0x58]\n    ldr r0, [r2, #0x2c]\n    ldr r2, _021E761C ; =0x000028BE\n    bl ov112_021E5D8C\n    ldr r2, _021E7608 ; =ov112_021FFAA4\n    mov r0, #0x29\n    ldr r3, [r2, #0x54]\n    lsl r0, r0, #8\n    add r3, #0x52\n    str r3, [r2, #0x5c]\n    ldr r1, [r2, #0x58]\n    add r1, r1, r0\n    str r1, [r2, #0x60]\n    ldr r0, [r2, #0x30]\n    mov r2, #0x89\n    lsl r2, r2, #2\n    bl ov112_021E5D8C\n    pop {r4, pc}\n    _021E7608: .word ov112_021FFAA4\n    _021E760C: .word ov112_021FFB24\n    _021E7610: .word 0x00000D4C\n    _021E7614: .word 0x0000382E\n    _021E7618: .word 0x00000119\n    _021E761C: .word 0x000028BE"
    );
    #endif
}

void ov112_021E7620(void) {
    /* Original at 0x021E7620 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _021E7658 ; =ov112_021FFAA4\n    str r0, [r2, #0x38]\n    str r1, [r2, #0x30]\n    ldr r0, _021E765C ; =ov112_021FFB24\n    mov r1, #0x60\n    strb r1, [r0, #0x1c]\n    mov r1, #0x20\n    strb r1, [r0, #0x1d]\n    mov r0, #0\n    ldr r2, _021E7660 ; =0x00000D4C\n    add r1, r0, #0\n    bl ov112_021E5EC4\n    ldr r0, _021E7664 ; =0x000024D8\n    ldr r1, _021E765C ; =ov112_021FFB24\n    strh r0, [r1, #0x3c]\n    mov r0, #0\n    strh r0, [r1, #0x3a]\n    ldrh r2, [r1, #0x3c]\n    add r2, #0x7f\n    asr r0, r2, #6\n    lsr r0, r0, #0x19\n    add r0, r2, r0\n    asr r0, r0, #7\n    strh r0, [r1, #0x38]\n    pop {r3, pc}\n    nop\n    _021E7658: .word ov112_021FFAA4\n    _021E765C: .word ov112_021FFB24\n    _021E7660: .word 0x00000D4C\n    _021E7664: .word 0x000024D8"
    );
    #endif
}

void ov112_021E7668(void) {
    ov112_021E59A8();
}

void ov112_021E7670(void) {
    _s32_div_f(0xff);
}

void ov112_021E768C(void) {
    _s32_div_f(0xff);
}

void ov112_021E76A8(void) {
    /* Original at 0x021E76A8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _021E76C8 ; =ov112_021FFAA4\n    ldr r4, [r0, #0x14]\n    bl ov112_021E59A8\n    cmp r0, #0\n    beq _021E76BC\n    mov r1, #0\n    ldr r0, _021E76C8 ; =ov112_021FFAA4\n    b _021E76C0\n    ldr r0, _021E76C8 ; =ov112_021FFAA4\n    mov r1, #1\n    str r1, [r0, #0x14]\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _021E76C8: .word ov112_021FFAA4"
    );
    #endif
}

void ov112_021E76CC(void) {
    /* Original at 0x021E76CC */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r2, [r0]\n    ldr r1, _021E775C ; =0xFFFFE0FF\n    ldr r3, _021E7760 ; =0x04001000\n    and r2, r1\n    str r2, [r0]\n    ldr r2, [r3]\n    add r0, #0x50\n    and r1, r2\n    str r1, [r3]\n    mov r1, #0\n    strh r1, [r0]\n    add r3, #0x50\n    mov r0, #0x10\n    strh r1, [r3]\n    bl sub_0201A728\n    mov r2, #7\n    mov r0, #3\n    mov r1, #0x9a\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    ldr r1, _021E7764 ; =0x0001F378\n    add r0, r4, #0\n    mov r2, #0x9a\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _021E7764 ; =0x0001F378\n    mov r1, #0\n    add r5, r0, #0\n    bl memset\n    add r0, r4, #0\n    bl OverlayManager_GetArgs\n    ldr r0, [r0, #8]\n    str r0, [r5, #0x20]\n    add r0, r5, #0\n    bl ov112_021E795C\n    mov r0, #3\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    bl sub_020210BC\n    mov r0, #4\n    bl sub_02021148\n    add r0, r5, #0\n    bl ov112_021E7768\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021E775C: .word 0xFFFFE0FF\n    _021E7760: .word 0x04001000\n    _021E7764: .word 0x0001F378"
    );
    #endif
}

void ov112_021E7768(void) {
    /* Original at 0x021E7768 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x9a\n    bl BgConfig_Alloc\n    str r0, [r4, #0x18]\n    mov r0, #4\n    mov r1, #0x9a\n    bl FontID_Alloc\n    add r0, r4, #0\n    bl ov112_021E7C18\n    bl ov112_021E79D0\n    ldr r0, [r4, #0x18]\n    bl ov112_021E79F0\n    add r0, r4, #0\n    bl ov112_021E7B18\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021E9A78\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    add r0, r4, #0\n    bl ov112_021EA1AC\n    add r0, r4, #0\n    bl ov112_021EA4F4\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    add r0, r4, #0\n    bl ov112_021E9C98\n    ldr r0, _021E77D8 ; =ov112_021E79A8\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    ldr r2, _021E77DC ; =0x04000304\n    ldr r0, _021E77E0 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    mov r0, #4\n    mov r1, #1\n    bl ToggleBgLayer\n    pop {r4, pc}\n    nop\n    _021E77D8: .word ov112_021E79A8\n    _021E77DC: .word 0x04000304\n    _021E77E0: .word 0xFFFF7FFF"
    );
    #endif
}

void ov112_021E77E4(void) {
    /* Original at 0x021E77E4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov112_021EA1F8\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021E9C10\n    ldr r0, [r4, #0x18]\n    bl ov112_021E7AC8\n    bl sub_02021238\n    bl GF_DestroyVramTransferManager\n    add r0, r4, #0\n    bl ov112_021E9E30\n    add r0, r4, #0\n    bl ov112_021E7C6C\n    mov r0, #4\n    bl FontID_Release\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    ldr r0, _021E782C ; =0x0001E52C\n    mov r1, #0\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _021E782C: .word 0x0001E52C"
    );
    #endif
}

void ov112_021E7830(void) {
    /* Original at 0x021E7830 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #4\n    bhi _021E78E4\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E784E: ; jump table\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _021E78E4\n    mov r0, #1\n    str r0, [r5]\n    b _021E78E4\n    ldr r2, [r4]\n    mov r1, #0xc\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _021E78F8 ; =ov112_021FF54C\n    ldr r1, [r1, r3]\n    blx r1\n    str r0, [r5]\n    b _021E78E4\n    ldr r2, [r4]\n    mov r1, #0xc\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _021E78FC ; =ov112_021FF550\n    ldr r1, [r1, r3]\n    blx r1\n    str r0, [r5]\n    ldr r3, _021E7900 ; =0x0001F2E0\n    ldr r0, [r4, #0x18]\n    ldrh r3, [r4, r3]\n    mov r1, #5\n    mov r2, #0\n    bl BgSetPosTextAndCommit\n    b _021E78E4\n    ldr r2, [r4]\n    mov r1, #0xc\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _021E7904 ; =ov112_021FF554\n    ldr r1, [r1, r3]\n    blx r1\n    str r0, [r5]\n    ldr r0, [r4, #4]\n    cmp r0, #0xb\n    bne _021E78CC\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x9a\n    str r0, [sp, #8]\n    mov r0, #0\n    ldr r3, _021E7908 ; =0x00007FFF\n    add r1, r0, #0\n    add r2, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #4\n    str r0, [r5]\n    b _021E78E4\n    str r0, [r4]\n    add r0, r4, #0\n    bl ov112_021E9C94\n    b _021E78E4\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _021E78E4\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    ldr r0, _021E790C ; =0x0001E52C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021E78F0\n    bl SpriteSystem_DrawSprites\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _021E78F8: .word ov112_021FF54C\n    _021E78FC: .word ov112_021FF550\n    _021E7900: .word 0x0001F2E0\n    _021E7904: .word ov112_021FF554\n    _021E7908: .word 0x00007FFF\n    _021E790C: .word 0x0001E52C"
    );
    #endif
}

void ov112_021E7910(void) {
    /* Original at 0x021E7910 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    mov r0, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    add r0, r4, #0\n    bl ov112_021E77E4\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x9a\n    bl Heap_Destroy\n    mov r0, #0x10\n    bl sub_0201A738\n    ldr r0, _021E7954 ; =FS_OVERLAY_ID(intro_title)\n    ldr r1, _021E7958 ; =gApplication_TitleScreen\n    bl RegisterMainOverlay\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _021E7954: .word FS_OVERLAY_ID(intro_title)\n    _021E7958: .word gApplication_TitleScreen"
    );
    #endif
}

void ov112_021E795C(void) {
    /* Original at 0x021E795C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    bl Save_Bag_Get\n    ldr r1, _021E7994 ; =0x0001E434\n    str r0, [r4, r1]\n    ldr r0, [r4, #0x20]\n    bl Save_PlayerData_GetProfile\n    ldr r1, _021E7998 ; =0x0001E438\n    str r0, [r4, r1]\n    ldr r0, [r4, #0x20]\n    bl Save_PlayerData_GetOptionsAddr\n    ldr r1, _021E799C ; =0x0001E43C\n    str r0, [r4, r1]\n    ldr r0, [r4, #0x20]\n    bl Save_Pokewalker_Get\n    ldr r1, _021E79A0 ; =0x0001E440\n    str r0, [r4, r1]\n    ldr r0, [r4, #0x20]\n    bl Save_Pokedex_Get\n    ldr r1, _021E79A4 ; =0x0001E444\n    str r0, [r4, r1]\n    pop {r4, pc}\n    _021E7994: .word 0x0001E434\n    _021E7998: .word 0x0001E438\n    _021E799C: .word 0x0001E43C\n    _021E79A0: .word 0x0001E440\n    _021E79A4: .word 0x0001E444"
    );
    #endif
}

void ov112_021E79A8(void) {
    /* Original at 0x021E79A8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #0x18]\n    bl DoScheduledBgGpuUpdates\n    bl GF_RunVramTransferTasks\n    bl SpriteSystem_TransferOam\n    ldr r3, _021E79C8 ; =0x027E0000\n    ldr r1, _021E79CC ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r3, pc}\n    nop\n    _021E79C8: .word 0x027E0000\n    _021E79CC: .word 0x00003FF8"
    );
    #endif
}

void ov112_021E79D0(void) {
    GfGfx_SetBanks(5);
}

void ov112_021E79F0(void) {
    /* Original at 0x021E79F0 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    ldr r5, _021E7AAC ; =ov112_021F3684\n    add r3, sp, #0\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r2, _021E7AB0 ; =ov112_021F3704\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r2, _021E7AB4 ; =ov112_021F3720\n    add r0, r4, #0\n    mov r1, #2\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r2, _021E7AB8 ; =ov112_021F373C\n    add r0, r4, #0\n    mov r1, #3\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    ldr r2, _021E7ABC ; =ov112_021F3758\n    add r0, r4, #0\n    mov r1, #4\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r2, _021E7AC0 ; =ov112_021F3774\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r2, _021E7AC4 ; =ov112_021F3790\n    add r0, r4, #0\n    mov r1, #6\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x9a\n    bl BG_ClearCharDataRange\n    mov r0, #5\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x9a\n    bl BG_ClearCharDataRange\n    mov r0, #6\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x9a\n    bl BG_ClearCharDataRange\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021E7AAC: .word ov112_021F3684\n    _021E7AB0: .word ov112_021F3704\n    _021E7AB4: .word ov112_021F3720\n    _021E7AB8: .word ov112_021F373C\n    _021E7ABC: .word ov112_021F3758\n    _021E7AC0: .word ov112_021F3774\n    _021E7AC4: .word ov112_021F3790"
    );
    #endif
}

void ov112_021E7AC8(void) {
    /* Original at 0x021E7AC8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x1b\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    mov r0, #0x9a\n    add r1, r4, #0\n    bl Heap_FreeExplicit\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021E7B18(void) {
    /* Original at 0x021E7B18 */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0xf9\n    mov r1, #0x9a\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r1, #0x9a\n    str r1, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    mov r1, #4\n    mov r3, #3\n    add r4, r0, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x9a\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    mov r1, #8\n    mov r3, #3\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x9a\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #7\n    mov r0, #0\n    lsl r1, r1, #6\n    mov r2, #0x9a\n    bl LoadFontPal1\n    ldr r0, _021E7C10 ; =0x0001E43C\n    ldr r0, [r5, r0]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x9a\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x18]\n    ldr r2, _021E7C14 ; =0x000003E2\n    mov r1, #1\n    mov r3, #0xd\n    bl LoadUserFrameGfx2\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x9a\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #7\n    mov r0, #4\n    lsl r1, r1, #6\n    mov r2, #0x9a\n    bl LoadFontPal1\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x9a\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #6\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x9a\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    mov r1, #9\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r0, _021E7C10 ; =0x0001E43C\n    ldr r0, [r5, r0]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x9a\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x18]\n    ldr r2, _021E7C14 ; =0x000003E2\n    mov r1, #4\n    mov r3, #0xd\n    bl LoadUserFrameGfx2\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _021E7C10: .word 0x0001E43C\n    _021E7C14: .word 0x000003E2"
    );
    #endif
}

void ov112_021E7C18(void) {
    /* Original at 0x021E7C18 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x1b\n    add r2, r1, #0\n    add r4, r0, #0\n    mov r0, #0\n    add r2, #0xf7\n    mov r3, #0x9a\n    bl NewMsgDataFromNarc\n    ldr r1, _021E7C5C ; =0x0001E44C\n    mov r2, #0xde\n    str r0, [r4, r1]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r3, #0x9a\n    bl NewMsgDataFromNarc\n    ldr r1, _021E7C60 ; =0x0001E450\n    mov r2, #0x9a\n    str r0, [r4, r1]\n    mov r0, #0x10\n    mov r1, #0x20\n    bl MessageFormat_New_Custom\n    ldr r1, _021E7C64 ; =0x0001E448\n    str r0, [r4, r1]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    mov r1, #0x9a\n    bl String_New\n    ldr r1, _021E7C68 ; =0x0001E454\n    str r0, [r4, r1]\n    pop {r4, pc}\n    _021E7C5C: .word 0x0001E44C\n    _021E7C60: .word 0x0001E450\n    _021E7C64: .word 0x0001E448\n    _021E7C68: .word 0x0001E454"
    );
    #endif
}

void ov112_021E7C6C(void) {
    /* Original at 0x021E7C6C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E7C94 ; =0x0001E454\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E7C98 ; =0x0001E450\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _021E7C9C ; =0x0001E44C\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _021E7CA0 ; =0x0001E448\n    ldr r0, [r4, r0]\n    bl MessageFormat_Delete\n    pop {r4, pc}\n    nop\n    _021E7C94: .word 0x0001E454\n    _021E7C98: .word 0x0001E450\n    _021E7C9C: .word 0x0001E44C\n    _021E7CA0: .word 0x0001E448"
    );
    #endif
}

void ov112_021E7CA4(void) {
    /* Original at 0x021E7CA4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x9a\n    str r0, [sp, #0xc]\n    add r3, r1, #0\n    add r1, r2, #0\n    ldr r2, [r4, #0x18]\n    mov r0, #0xf9\n    bl GfGfxLoader_LoadScrnData\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021E7CC8(void) {
    /* Original at 0x021E7CC8 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    bl Save_PlayerData_GetProfile\n    mov r1, #0x9a\n    bl PlayerProfile_GetPlayerName_NewString\n    add r4, r0, #0\n    ldr r1, _021E7D60 ; =0x00001024\n    mov r0, #1\n    str r0, [r5, r1]\n    add r0, r1, #0\n    mov r2, #GAME_VERSION\n    add r0, #8\n    strh r2, [r5, r0]\n    add r0, r1, #0\n    add r0, #0x5b\n    ldrb r2, [r5, r0]\n    mov r0, #1\n    bic r2, r0\n    add r0, r1, #0\n    add r0, #0x5b\n    strb r2, [r5, r0]\n    mov r0, #0\n    add r1, #0x5a\n    strb r0, [r5, r1]\n    ldr r0, _021E7D64 ; =0x0001E438\n    ldr r0, [r5, r0]\n    bl PlayerProfile_GetTrainerID\n    ldr r1, _021E7D68 ; =0x00001030\n    mov r2, #8\n    str r0, [r5, r1]\n    add r1, #0x3c\n    add r0, r4, #0\n    add r1, r5, r1\n    bl CopyStringToU16Array\n    ldr r0, _021E7D6C ; =0x00001028\n    mov r1, #1\n    str r1, [r5, r0]\n    mov r1, #GAME_VERSION\n    add r0, r0, #6\n    strh r1, [r5, r0]\n    ldr r0, _021E7D70 ; =0x0001E440\n    ldr r0, [r5, r0]\n    bl sub_02032728\n    ldr r1, _021E7D74 ; =0x00001034\n    mov r2, #0x28\n    add r1, r5, r1\n    bl MIi_CpuCopyFast\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0x24\n    lsl r1, r1, #0xc\n    mov r2, #0xf\n    bl ov112_021E73C8\n    ldr r1, _021E7D60 ; =0x00001024\n    add r0, r5, r1\n    add r1, #0x68\n    add r1, r5, r1\n    bl ov112_021E5EB8\n    ldr r0, _021E7D78 ; =0x00010834\n    add r0, r5, r0\n    bl ov112_021E5D68\n    add r0, r4, #0\n    bl String_Delete\n    pop {r3, r4, r5, pc}\n    nop\n    _021E7D60: .word 0x00001024\n    _021E7D64: .word 0x0001E438\n    _021E7D68: .word 0x00001030\n    _021E7D6C: .word 0x00001028\n    _021E7D70: .word 0x0001E440\n    _021E7D74: .word 0x00001034\n    _021E7D78: .word 0x00010834"
    );
    #endif
}

void ov112_021E7D7C(void) {
    /* Original at 0x021E7D7C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021E7D9C ; =0x000010F4\n    add r4, r0, #0\n    add r1, r4, r1\n    bl ov112_021E7DFC\n    ldr r0, _021E7DA0 ; =0x0000C910\n    add r1, r4, #0\n    add r0, r4, r0\n    bl ov112_021E8CB8\n    add r0, r4, #0\n    bl ov112_021E7DC0\n    pop {r4, pc}\n    nop\n    _021E7D9C: .word 0x000010F4\n    _021E7DA0: .word 0x0000C910"
    );
    #endif
}

void ov112_021E7DA4(void) {
    /* Original at 0x021E7DA4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E7DBC ; =0x0000C910\n    add r1, r4, #0\n    add r0, r4, r0\n    bl ov112_021E8CB8\n    add r0, r4, #0\n    bl ov112_021E7DC0\n    pop {r4, pc}\n    nop\n    _021E7DBC: .word 0x0000C910"
    );
    #endif
}

void ov112_021E7DC0(void) {
    /* Original at 0x021E7DC0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0xf2\n    lsl r1, r1, #8\n    ldr r0, [r4, #0x20]\n    add r1, r4, r1\n    bl ov112_021F3244\n    ldr r0, _021E7DF0 ; =0x0000F1D0\n    mov r1, #1\n    str r1, [r4, r0]\n    mov r1, #GAME_VERSION\n    add r0, r0, #4\n    strh r1, [r4, r0]\n    ldr r0, _021E7DF4 ; =0x0001E440\n    ldr r0, [r4, r0]\n    bl sub_02032728\n    ldr r1, _021E7DF8 ; =0x0000F1D8\n    mov r2, #0x28\n    add r1, r4, r1\n    bl MIi_CpuCopyFast\n    pop {r4, pc}\n    _021E7DF0: .word 0x0000F1D0\n    _021E7DF4: .word 0x0001E440\n    _021E7DF8: .word 0x0000F1D8"
    );
    #endif
}

void ov112_021E7DFC(void) {
    /* Original at 0x021E7DFC */
    /* Requires manual decompilation - 1283 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    mov r0, #0x9a\n    add r4, r1, #0\n    add r1, r0, #0\n    add r1, #0xe6\n    bl Heap_Alloc\n    mov r3, #0\n    add r6, r0, #0\n    str r3, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldr r0, [r5, #0x18]\n    add r1, sp, #0x14\n    mov r2, #1\n    bl AddWindowParameterized\n    add r0, sp, #0x14\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _021E81D4 ; =ov112_021F5758\n    add r1, r4, #0\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    add r1, r4, #0\n    ldr r0, _021E81D8 ; =ov112_021F5858\n    add r1, #0x20\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    add r1, r4, #0\n    ldr r0, _021E81DC ; =ov112_021F5778\n    add r1, #0x40\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    add r1, r4, #0\n    ldr r0, _021E81E0 ; =ov112_021F5918\n    add r1, #0x60\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    add r1, r4, #0\n    ldr r0, _021E81E4 ; =ov112_021F5838\n    add r1, #0x80\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    add r1, r4, #0\n    ldr r0, _021E81E8 ; =ov112_021F5978\n    add r1, #0xa0\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    add r1, r4, #0\n    ldr r0, _021E81EC ; =ov112_021F5798\n    add r1, #0xc0\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    add r1, r4, #0\n    ldr r0, _021E81F0 ; =ov112_021F5878\n    add r1, #0xe0\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    mov r1, #1\n    lsl r1, r1, #8\n    ldr r0, _021E81F4 ; =ov112_021F57B8\n    add r1, r4, r1\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    mov r1, #0x12\n    lsl r1, r1, #4\n    ldr r0, _021E81F8 ; =ov112_021F58B8\n    add r1, r4, r1\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    mov r1, #5\n    lsl r1, r1, #6\n    ldr r0, _021E81FC ; =ov112_021F5818\n    add r1, r4, r1\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    mov r1, #0x16\n    lsl r1, r1, #4\n    ldr r0, _021E8200 ; =ov112_021F5938\n    add r1, r4, r1\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    mov r1, #6\n    lsl r1, r1, #6\n    ldr r0, _021E8204 ; =ov112_021F57F8\n    add r1, r4, r1\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    mov r1, #0x1a\n    lsl r1, r1, #4\n    ldr r0, _021E8208 ; =ov112_021F5998\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    mov r1, #0x9e\n    lsl r1, r1, #2\n    ldr r0, _021E820C ; =ov112_021F56C8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xa2\n    lsl r1, r1, #2\n    ldr r0, _021E8210 ; =ov112_021F5718\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xa6\n    lsl r1, r1, #2\n    ldr r0, _021E8214 ; =ov112_021F55F8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xaa\n    lsl r1, r1, #2\n    ldr r0, _021E8218 ; =ov112_021F5698\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xae\n    lsl r1, r1, #2\n    ldr r0, _021E821C ; =ov112_021F5598\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xb2\n    lsl r1, r1, #2\n    ldr r0, _021E8220 ; =ov112_021F55E8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xb6\n    lsl r1, r1, #2\n    ldr r0, _021E8224 ; =ov112_021F55D8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xba\n    lsl r1, r1, #2\n    ldr r0, _021E8228 ; =ov112_021F5688\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xbe\n    lsl r1, r1, #2\n    ldr r0, _021E822C ; =ov112_021F55C8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xc2\n    lsl r1, r1, #2\n    ldr r0, _021E8230 ; =ov112_021F56B8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xc6\n    lsl r1, r1, #2\n    ldr r0, _021E8234 ; =ov112_021F5588\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xca\n    lsl r1, r1, #2\n    ldr r0, _021E8238 ; =ov112_021F55A8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xce\n    lsl r1, r1, #2\n    ldr r0, _021E823C ; =ov112_021F5898\n    add r1, r4, r1\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    mov r1, #0xd6\n    lsl r1, r1, #2\n    ldr r0, _021E8240 ; =ov112_021F58D8\n    add r1, r4, r1\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    mov r1, #0xde\n    lsl r1, r1, #2\n    ldr r0, _021E8244 ; =ov112_021F58F8\n    add r1, r4, r1\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    mov r1, #0xee\n    lsl r1, r1, #2\n    ldr r0, _021E8248 ; =ov112_021F5668\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xf2\n    lsl r1, r1, #2\n    ldr r0, _021E824C ; =ov112_021F5638\n    add r1, r4, r1\n    mov r2, #8\n    bl MI_CpuCopy8\n    mov r1, #0x1e\n    lsl r1, r1, #4\n    ldr r0, _021E8250 ; =ov112_021F56F8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0x1f\n    lsl r1, r1, #4\n    ldr r0, _021E8254 ; =ov112_021F5628\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0x82\n    lsl r1, r1, #2\n    ldr r0, _021E8258 ; =ov112_021F5648\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0x86\n    lsl r1, r1, #2\n    ldr r0, _021E825C ; =ov112_021F5748\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0x8a\n    lsl r1, r1, #2\n    ldr r0, _021E8260 ; =ov112_021F5678\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0x8e\n    lsl r1, r1, #2\n    ldr r0, _021E8264 ; =ov112_021F56D8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0x92\n    lsl r1, r1, #2\n    ldr r0, _021E8268 ; =ov112_021F55B8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0x96\n    lsl r1, r1, #2\n    ldr r0, _021E826C ; =ov112_021F5608\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0x9a\n    lsl r1, r1, #2\n    ldr r0, _021E8270 ; =ov112_021F56E8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldr r0, _021E8274 ; =ov112_021F5618\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0x3e\n    lsl r1, r1, #4\n    ldr r0, _021E8278 ; =ov112_021F56A8\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0xe1\n    lsl r1, r1, #4\n    ldr r0, _021E827C ; =ov112_021F5B98\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    mov r1, #0xe5\n    lsl r1, r1, #4\n    ldr r0, _021E8280 ; =ov112_021F5CD8\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    mov r1, #0xe9\n    lsl r1, r1, #4\n    ldr r0, _021E8284 ; =ov112_021F5BD8\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    mov r1, #0xed\n    lsl r1, r1, #4\n    ldr r0, _021E8288 ; =ov112_021F5A18\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    mov r1, #0xf1\n    lsl r1, r1, #4\n    ldr r0, _021E828C ; =ov112_021F5C98\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    mov r1, #0xf5\n    lsl r1, r1, #4\n    ldr r0, _021E8290 ; =ov112_021F5AD8\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    mov r1, #0x69\n    lsl r1, r1, #4\n    mov r2, #5\n    ldr r0, _021E8294 ; =ov112_021F7418\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    mov r1, #0x7d\n    lsl r1, r1, #4\n    mov r2, #5\n    ldr r0, _021E8298 ; =ov112_021F7558\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    mov r1, #0x91\n    lsl r1, r1, #4\n    mov r2, #5\n    ldr r0, _021E829C ; =ov112_021F7698\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    mov r1, #0xa5\n    lsl r1, r1, #4\n    mov r2, #5\n    ldr r0, _021E82A0 ; =ov112_021F77D8\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    mov r1, #0xb9\n    lsl r1, r1, #4\n    mov r2, #5\n    ldr r0, _021E82A4 ; =ov112_021F7918\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    mov r1, #0xcd\n    lsl r1, r1, #4\n    mov r2, #5\n    ldr r0, _021E82A8 ; =ov112_021F7A58\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E82AC ; =0x000018D0\n    ldr r0, _021E82B0 ; =ov112_021F5C58\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    ldr r1, _021E82B4 ; =0x00001910\n    ldr r0, _021E82B8 ; =ov112_021F59D8\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    ldr r1, _021E82BC ; =0x00001950\n    ldr r0, _021E82C0 ; =ov112_021F6178\n    add r1, r4, r1\n    mov r2, #0x80\n    bl MI_CpuCopy8\n    ldr r1, _021E82C4 ; =0x000019D0\n    ldr r0, _021E82C8 ; =ov112_021F5E18\n    add r1, r4, r1\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    ldr r1, _021E82CC ; =0x00001A30\n    ldr r0, _021E82D0 ; =ov112_021F6DD8\n    add r1, r4, r1\n    mov r2, #0xc0\n    bl MI_CpuCopy8\n    ldr r1, _021E82D4 ; =0x00001AF0\n    ldr r0, _021E82D8 ; =ov112_021F5A58\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    ldr r1, _021E82DC ; =0x00001B30\n    ldr r0, _021E82E0 ; =ov112_021F5A98\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    ldr r1, _021E82E4 ; =0x00001B70\n    ldr r0, _021E82E8 ; =ov112_021F5B18\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    ldr r1, _021E82EC ; =0x00001BB0\n    ldr r0, _021E82F0 ; =ov112_021F5B58\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    ldr r1, _021E82F4 ; =0x00001BF0\n    ldr r0, _021E82F8 ; =ov112_021F62F8\n    add r1, r4, r1\n    mov r2, #0x80\n    bl MI_CpuCopy8\n    ldr r1, _021E82FC ; =0x00001C70\n    ldr r0, _021E8300 ; =ov112_021F6378\n    add r1, r4, r1\n    mov r2, #0x80\n    bl MI_CpuCopy8\n    ldr r1, _021E8304 ; =0x00001CF0\n    ldr r0, _021E8308 ; =ov112_021F6718\n    add r1, r4, r1\n    mov r2, #0xc0\n    bl MI_CpuCopy8\n    ldr r1, _021E830C ; =0x00001DB0\n    ldr r0, _021E8310 ; =ov112_021F5738\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    mov r1, #0x77\n    lsl r1, r1, #6\n    ldr r0, _021E8314 ; =ov112_021F5708\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    ldr r1, _021E8318 ; =0x00001DD0\n    mov r2, #3\n    ldr r0, _021E831C ; =ov112_021FE198\n    b _021E8320\n    nop\n    _021E81D4: .word ov112_021F5758\n    _021E81D8: .word ov112_021F5858\n    _021E81DC: .word ov112_021F5778\n    _021E81E0: .word ov112_021F5918\n    _021E81E4: .word ov112_021F5838\n    _021E81E8: .word ov112_021F5978\n    _021E81EC: .word ov112_021F5798\n    _021E81F0: .word ov112_021F5878\n    _021E81F4: .word ov112_021F57B8\n    _021E81F8: .word ov112_021F58B8\n    _021E81FC: .word ov112_021F5818\n    _021E8200: .word ov112_021F5938\n    _021E8204: .word ov112_021F57F8\n    _021E8208: .word ov112_021F5998\n    _021E820C: .word ov112_021F56C8\n    _021E8210: .word ov112_021F5718\n    _021E8214: .word ov112_021F55F8\n    _021E8218: .word ov112_021F5698\n    _021E821C: .word ov112_021F5598\n    _021E8220: .word ov112_021F55E8\n    _021E8224: .word ov112_021F55D8\n    _021E8228: .word ov112_021F5688\n    _021E822C: .word ov112_021F55C8\n    _021E8230: .word ov112_021F56B8\n    _021E8234: .word ov112_021F5588\n    _021E8238: .word ov112_021F55A8\n    _021E823C: .word ov112_021F5898\n    _021E8240: .word ov112_021F58D8\n    _021E8244: .word ov112_021F58F8\n    _021E8248: .word ov112_021F5668\n    _021E824C: .word ov112_021F5638\n    _021E8250: .word ov112_021F56F8\n    _021E8254: .word ov112_021F5628\n    _021E8258: .word ov112_021F5648\n    _021E825C: .word ov112_021F5748\n    _021E8260: .word ov112_021F5678\n    _021E8264: .word ov112_021F56D8\n    _021E8268: .word ov112_021F55B8\n    _021E826C: .word ov112_021F5608\n    _021E8270: .word ov112_021F56E8\n    _021E8274: .word ov112_021F5618\n    _021E8278: .word ov112_021F56A8\n    _021E827C: .word ov112_021F5B98\n    _021E8280: .word ov112_021F5CD8\n    _021E8284: .word ov112_021F5BD8\n    _021E8288: .word ov112_021F5A18\n    _021E828C: .word ov112_021F5C98\n    _021E8290: .word ov112_021F5AD8\n    _021E8294: .word ov112_021F7418\n    _021E8298: .word ov112_021F7558\n    _021E829C: .word ov112_021F7698\n    _021E82A0: .word ov112_021F77D8\n    _021E82A4: .word ov112_021F7918\n    _021E82A8: .word ov112_021F7A58\n    _021E82AC: .word 0x000018D0\n    _021E82B0: .word ov112_021F5C58\n    _021E82B4: .word 0x00001910\n    _021E82B8: .word ov112_021F59D8\n    _021E82BC: .word 0x00001950\n    _021E82C0: .word ov112_021F6178\n    _021E82C4: .word 0x000019D0\n    _021E82C8: .word ov112_021F5E18\n    _021E82CC: .word 0x00001A30\n    _021E82D0: .word ov112_021F6DD8\n    _021E82D4: .word 0x00001AF0\n    _021E82D8: .word ov112_021F5A58\n    _021E82DC: .word 0x00001B30\n    _021E82E0: .word ov112_021F5A98\n    _021E82E4: .word 0x00001B70\n    _021E82E8: .word ov112_021F5B18\n    _021E82EC: .word 0x00001BB0\n    _021E82F0: .word ov112_021F5B58\n    _021E82F4: .word 0x00001BF0\n    _021E82F8: .word ov112_021F62F8\n    _021E82FC: .word 0x00001C70\n    _021E8300: .word ov112_021F6378\n    _021E8304: .word 0x00001CF0\n    _021E8308: .word ov112_021F6718\n    _021E830C: .word 0x00001DB0\n    _021E8310: .word ov112_021F5738\n    _021E8314: .word ov112_021F5708\n    _021E8318: .word 0x00001DD0\n    _021E831C: .word ov112_021FE198\n    add r1, r4, r1\n    lsl r2, r2, #8\n    bl MI_CpuCopy8\n    mov r1, #0xf9\n    lsl r1, r1, #4\n    ldr r0, _021E86D0 ; =ov112_021F5D18\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    ldr r1, _021E86D4 ; =0x00001110\n    ldr r0, _021E86D8 ; =ov112_021F5C18\n    add r1, r4, r1\n    mov r2, #0x40\n    bl MI_CpuCopy8\n    ldr r1, _021E86DC ; =0x00001150\n    ldr r0, _021E86E0 ; =ov112_021F65D8\n    add r1, r4, r1\n    mov r2, #0xa0\n    bl MI_CpuCopy8\n    ldr r1, _021E86E4 ; =0x000011F0\n    ldr r0, _021E86E8 ; =ov112_021F61F8\n    add r1, r4, r1\n    mov r2, #0x80\n    bl MI_CpuCopy8\n    ldr r1, _021E86EC ; =0x00001270\n    ldr r0, _021E86F0 ; =ov112_021F6278\n    add r1, r4, r1\n    mov r2, #0x80\n    bl MI_CpuCopy8\n    ldr r1, _021E86EC ; =0x00001270\n    ldr r0, _021E86F4 ; =ov112_021F6538\n    add r1, r4, r1\n    mov r2, #0xa0\n    bl MI_CpuCopy8\n    ldr r1, _021E86F8 ; =0x00001310\n    mov r2, #1\n    ldr r0, _021E86FC ; =ov112_021F70D8\n    add r1, r4, r1\n    lsl r2, r2, #8\n    bl MI_CpuCopy8\n    add r0, sp, #0x14\n    add r1, r5, #0\n    bl ov112_021E90FC\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x50\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x20]\n    mov r1, #0xa\n    mov r2, #2\n    add r3, r6, #0\n    bl ov112_021E93BC\n    mov r1, #0xfd\n    lsl r1, r1, #4\n    mov r2, #5\n    add r0, r6, #0\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8700 ; =0x00001690\n    ldr r0, _021E8704 ; =ov112_021F67D8\n    add r1, r4, r1\n    mov r2, #0xc0\n    bl MI_CpuCopy8\n    ldr r1, _021E8708 ; =0x00001750\n    ldr r0, _021E870C ; =ov112_021F6898\n    add r1, r4, r1\n    mov r2, #0xc0\n    bl MI_CpuCopy8\n    ldr r1, _021E8710 ; =0x00001810\n    ldr r0, _021E8714 ; =ov112_021F7018\n    add r1, r4, r1\n    mov r2, #0xc0\n    bl MI_CpuCopy8\n    ldr r1, _021E8718 ; =0x00001410\n    ldr r0, _021E871C ; =ov112_021F6498\n    add r1, r4, r1\n    mov r2, #0xa0\n    bl MI_CpuCopy8\n    ldr r1, _021E8720 ; =0x000014B0\n    ldr r0, _021E8724 ; =ov112_021F63F8\n    add r1, r4, r1\n    mov r2, #0xa0\n    bl MI_CpuCopy8\n    ldr r1, _021E8728 ; =0x00001670\n    ldr r0, _021E872C ; =ov112_021F57D8\n    add r1, r4, r1\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    ldr r1, _021E8730 ; =0x000015B0\n    ldr r0, _021E8734 ; =ov112_021F5DB8\n    add r1, r4, r1\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    ldr r1, _021E8738 ; =0x00001610\n    ldr r0, _021E873C ; =ov112_021F6058\n    add r1, r4, r1\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    ldr r1, _021E8740 ; =0x00001550\n    ldr r0, _021E8744 ; =ov112_021F5D58\n    add r1, r4, r1\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    ldr r1, _021E8748 ; =0x000020D0\n    mov r2, #1\n    ldr r0, _021E874C ; =ov112_021F71D8\n    add r1, r4, r1\n    lsl r2, r2, #8\n    bl MI_CpuCopy8\n    ldr r1, _021E8750 ; =0x000021D0\n    ldr r0, _021E8754 ; =ov112_021F5958\n    add r1, r4, r1\n    mov r2, #0x20\n    bl MI_CpuCopy8\n    ldr r1, _021E8758 ; =0x000021F0\n    ldr r0, _021E875C ; =ov112_021F5658\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MI_CpuCopy8\n    ldr r1, _021E8760 ; =0x000022B0\n    mov r2, #6\n    ldr r0, _021E8764 ; =ov112_021FCF98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8768 ; =0x00002430\n    mov r2, #6\n    ldr r0, _021E876C ; =ov112_021F8198\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8770 ; =0x000025B0\n    mov r2, #6\n    ldr r0, _021E8774 ; =ov112_021F8318\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8778 ; =0x00002730\n    mov r2, #6\n    ldr r0, _021E877C ; =ov112_021F8498\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8780 ; =0x000028B0\n    mov r2, #6\n    ldr r0, _021E8784 ; =ov112_021FC998\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8788 ; =0x00002A30\n    mov r2, #6\n    ldr r0, _021E878C ; =ov112_021F8618\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8790 ; =0x00002BB0\n    mov r2, #6\n    ldr r0, _021E8794 ; =ov112_021F8798\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8798 ; =0x00002D30\n    mov r2, #6\n    ldr r0, _021E879C ; =ov112_021F8918\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87A0 ; =0x00002EB0\n    mov r2, #6\n    ldr r0, _021E87A4 ; =ov112_021FC398\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87A8 ; =0x00003030\n    mov r2, #6\n    ldr r0, _021E87AC ; =ov112_021F8A98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87B0 ; =0x000031B0\n    mov r2, #6\n    ldr r0, _021E87B4 ; =ov112_021F8C18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87B8 ; =0x00003330\n    mov r2, #6\n    ldr r0, _021E87BC ; =ov112_021F8D98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87C0 ; =0x000034B0\n    mov r2, #6\n    ldr r0, _021E87C4 ; =ov112_021F8F18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87C8 ; =0x00003630\n    mov r2, #6\n    ldr r0, _021E87CC ; =ov112_021F9098\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87D0 ; =0x000037B0\n    mov r2, #6\n    ldr r0, _021E87D4 ; =ov112_021F9218\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87D8 ; =0x00003930\n    mov r2, #6\n    ldr r0, _021E87DC ; =ov112_021F9398\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87E0 ; =0x00003AB0\n    mov r2, #6\n    ldr r0, _021E87E4 ; =ov112_021FB798\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87E8 ; =0x00003C30\n    mov r2, #6\n    ldr r0, _021E87EC ; =ov112_021F9518\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87F0 ; =0x00003DB0\n    mov r2, #6\n    ldr r0, _021E87F4 ; =ov112_021F9698\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E87F8 ; =0x00003F30\n    mov r2, #6\n    ldr r0, _021E87FC ; =ov112_021F9818\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8800 ; =0x000040B0\n    mov r2, #6\n    ldr r0, _021E8804 ; =ov112_021FB198\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8808 ; =0x00004230\n    mov r2, #6\n    ldr r0, _021E880C ; =ov112_021F9998\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8810 ; =0x000043B0\n    mov r2, #6\n    ldr r0, _021E8814 ; =ov112_021F9B18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8818 ; =0x00004530\n    mov r2, #6\n    ldr r0, _021E881C ; =ov112_021F9C98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8820 ; =0x000046B0\n    mov r2, #6\n    ldr r0, _021E8824 ; =ov112_021FAB98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8828 ; =0x00004830\n    mov r2, #6\n    ldr r0, _021E882C ; =ov112_021F9E18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8830 ; =0x000049B0\n    mov r2, #6\n    ldr r0, _021E8834 ; =ov112_021F9F98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8838 ; =0x00004B30\n    mov r2, #6\n    ldr r0, _021E883C ; =ov112_021FA118\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8840 ; =0x00004CB0\n    mov r2, #6\n    ldr r0, _021E8844 ; =ov112_021FA298\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8848 ; =0x00004E30\n    mov r2, #6\n    ldr r0, _021E884C ; =ov112_021FA418\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8850 ; =0x00004FB0\n    mov r2, #6\n    ldr r0, _021E8854 ; =ov112_021FA598\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8858 ; =0x00005130\n    mov r2, #6\n    ldr r0, _021E885C ; =ov112_021FA718\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8860 ; =0x000052B0\n    mov r2, #6\n    ldr r0, _021E8864 ; =ov112_021FA898\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8868 ; =0x00005430\n    mov r2, #6\n    ldr r0, _021E886C ; =ov112_021FAA18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8870 ; =0x000055B0\n    mov r2, #6\n    ldr r0, _021E8874 ; =ov112_021FAD18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8878 ; =0x00005730\n    mov r2, #6\n    ldr r0, _021E887C ; =ov112_021FAE98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8880 ; =0x000058B0\n    mov r2, #6\n    ldr r0, _021E8884 ; =ov112_021FB018\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8888 ; =0x00005A30\n    mov r2, #6\n    ldr r0, _021E888C ; =ov112_021FB318\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8890 ; =0x00005BB0\n    mov r2, #6\n    ldr r0, _021E8894 ; =ov112_021FB498\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8898 ; =0x00005D30\n    mov r2, #6\n    ldr r0, _021E889C ; =ov112_021FB618\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E88A0 ; =0x00005EB0\n    mov r2, #6\n    ldr r0, _021E88A4 ; =ov112_021FB918\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r2, _021E88A8 ; =0x00006030\n    ldr r0, _021E88AC ; =ov112_021FBA98\n    add r1, r4, r2\n    lsr r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E88B0 ; =0x000061B0\n    mov r2, #6\n    ldr r0, _021E88B4 ; =ov112_021FBC18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E88B8 ; =0x00006330\n    mov r2, #6\n    ldr r0, _021E88BC ; =ov112_021FBD98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E88C0 ; =0x000064B0\n    mov r2, #6\n    ldr r0, _021E88C4 ; =ov112_021FBF18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E88C8 ; =0x00006630\n    mov r2, #6\n    ldr r0, _021E88CC ; =ov112_021FC098\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E88D0 ; =0x000067B0\n    mov r2, #6\n    ldr r0, _021E88D4 ; =ov112_021FC218\n    b _021E88D8\n    nop\n    _021E86D0: .word ov112_021F5D18\n    _021E86D4: .word 0x00001110\n    _021E86D8: .word ov112_021F5C18\n    _021E86DC: .word 0x00001150\n    _021E86E0: .word ov112_021F65D8\n    _021E86E4: .word 0x000011F0\n    _021E86E8: .word ov112_021F61F8\n    _021E86EC: .word 0x00001270\n    _021E86F0: .word ov112_021F6278\n    _021E86F4: .word ov112_021F6538\n    _021E86F8: .word 0x00001310\n    _021E86FC: .word ov112_021F70D8\n    _021E8700: .word 0x00001690\n    _021E8704: .word ov112_021F67D8\n    _021E8708: .word 0x00001750\n    _021E870C: .word ov112_021F6898\n    _021E8710: .word 0x00001810\n    _021E8714: .word ov112_021F7018\n    _021E8718: .word 0x00001410\n    _021E871C: .word ov112_021F6498\n    _021E8720: .word 0x000014B0\n    _021E8724: .word ov112_021F63F8\n    _021E8728: .word 0x00001670\n    _021E872C: .word ov112_021F57D8\n    _021E8730: .word 0x000015B0\n    _021E8734: .word ov112_021F5DB8\n    _021E8738: .word 0x00001610\n    _021E873C: .word ov112_021F6058\n    _021E8740: .word 0x00001550\n    _021E8744: .word ov112_021F5D58\n    _021E8748: .word 0x000020D0\n    _021E874C: .word ov112_021F71D8\n    _021E8750: .word 0x000021D0\n    _021E8754: .word ov112_021F5958\n    _021E8758: .word 0x000021F0\n    _021E875C: .word ov112_021F5658\n    _021E8760: .word 0x000022B0\n    _021E8764: .word ov112_021FCF98\n    _021E8768: .word 0x00002430\n    _021E876C: .word ov112_021F8198\n    _021E8770: .word 0x000025B0\n    _021E8774: .word ov112_021F8318\n    _021E8778: .word 0x00002730\n    _021E877C: .word ov112_021F8498\n    _021E8780: .word 0x000028B0\n    _021E8784: .word ov112_021FC998\n    _021E8788: .word 0x00002A30\n    _021E878C: .word ov112_021F8618\n    _021E8790: .word 0x00002BB0\n    _021E8794: .word ov112_021F8798\n    _021E8798: .word 0x00002D30\n    _021E879C: .word ov112_021F8918\n    _021E87A0: .word 0x00002EB0\n    _021E87A4: .word ov112_021FC398\n    _021E87A8: .word 0x00003030\n    _021E87AC: .word ov112_021F8A98\n    _021E87B0: .word 0x000031B0\n    _021E87B4: .word ov112_021F8C18\n    _021E87B8: .word 0x00003330\n    _021E87BC: .word ov112_021F8D98\n    _021E87C0: .word 0x000034B0\n    _021E87C4: .word ov112_021F8F18\n    _021E87C8: .word 0x00003630\n    _021E87CC: .word ov112_021F9098\n    _021E87D0: .word 0x000037B0\n    _021E87D4: .word ov112_021F9218\n    _021E87D8: .word 0x00003930\n    _021E87DC: .word ov112_021F9398\n    _021E87E0: .word 0x00003AB0\n    _021E87E4: .word ov112_021FB798\n    _021E87E8: .word 0x00003C30\n    _021E87EC: .word ov112_021F9518\n    _021E87F0: .word 0x00003DB0\n    _021E87F4: .word ov112_021F9698\n    _021E87F8: .word 0x00003F30\n    _021E87FC: .word ov112_021F9818\n    _021E8800: .word 0x000040B0\n    _021E8804: .word ov112_021FB198\n    _021E8808: .word 0x00004230\n    _021E880C: .word ov112_021F9998\n    _021E8810: .word 0x000043B0\n    _021E8814: .word ov112_021F9B18\n    _021E8818: .word 0x00004530\n    _021E881C: .word ov112_021F9C98\n    _021E8820: .word 0x000046B0\n    _021E8824: .word ov112_021FAB98\n    _021E8828: .word 0x00004830\n    _021E882C: .word ov112_021F9E18\n    _021E8830: .word 0x000049B0\n    _021E8834: .word ov112_021F9F98\n    _021E8838: .word 0x00004B30\n    _021E883C: .word ov112_021FA118\n    _021E8840: .word 0x00004CB0\n    _021E8844: .word ov112_021FA298\n    _021E8848: .word 0x00004E30\n    _021E884C: .word ov112_021FA418\n    _021E8850: .word 0x00004FB0\n    _021E8854: .word ov112_021FA598\n    _021E8858: .word 0x00005130\n    _021E885C: .word ov112_021FA718\n    _021E8860: .word 0x000052B0\n    _021E8864: .word ov112_021FA898\n    _021E8868: .word 0x00005430\n    _021E886C: .word ov112_021FAA18\n    _021E8870: .word 0x000055B0\n    _021E8874: .word ov112_021FAD18\n    _021E8878: .word 0x00005730\n    _021E887C: .word ov112_021FAE98\n    _021E8880: .word 0x000058B0\n    _021E8884: .word ov112_021FB018\n    _021E8888: .word 0x00005A30\n    _021E888C: .word ov112_021FB318\n    _021E8890: .word 0x00005BB0\n    _021E8894: .word ov112_021FB498\n    _021E8898: .word 0x00005D30\n    _021E889C: .word ov112_021FB618\n    _021E88A0: .word 0x00005EB0\n    _021E88A4: .word ov112_021FB918\n    _021E88A8: .word 0x00006030\n    _021E88AC: .word ov112_021FBA98\n    _021E88B0: .word 0x000061B0\n    _021E88B4: .word ov112_021FBC18\n    _021E88B8: .word 0x00006330\n    _021E88BC: .word ov112_021FBD98\n    _021E88C0: .word 0x000064B0\n    _021E88C4: .word ov112_021FBF18\n    _021E88C8: .word 0x00006630\n    _021E88CC: .word ov112_021FC098\n    _021E88D0: .word 0x000067B0\n    _021E88D4: .word ov112_021FC218\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8A9C ; =0x00006930\n    mov r2, #6\n    ldr r0, _021E8AA0 ; =ov112_021FC518\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8AA4 ; =0x00006AB0\n    mov r2, #6\n    ldr r0, _021E8AA8 ; =ov112_021FC698\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8AAC ; =0x00006C30\n    mov r2, #6\n    ldr r0, _021E8AB0 ; =ov112_021FC818\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8AB4 ; =0x00006DB0\n    mov r2, #6\n    ldr r0, _021E8AB8 ; =ov112_021FCB18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8ABC ; =0x00006F30\n    mov r2, #6\n    ldr r0, _021E8AC0 ; =ov112_021FCC98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8AC4 ; =0x000070B0\n    mov r2, #6\n    ldr r0, _021E8AC8 ; =ov112_021FCE18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8ACC ; =0x00007230\n    mov r2, #6\n    ldr r0, _021E8AD0 ; =ov112_021FD118\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8AD4 ; =0x000073B0\n    mov r2, #6\n    ldr r0, _021E8AD8 ; =ov112_021FD298\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8ADC ; =0x00007530\n    mov r2, #6\n    ldr r0, _021E8AE0 ; =ov112_021FD418\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8AE4 ; =0x000076B0\n    mov r2, #6\n    ldr r0, _021E8AE8 ; =ov112_021FD598\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8AEC ; =0x00007830\n    mov r2, #6\n    ldr r0, _021E8AF0 ; =ov112_021FD718\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8AF4 ; =0x000079B0\n    mov r2, #6\n    ldr r0, _021E8AF8 ; =ov112_021FD898\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8AFC ; =0x00007B30\n    mov r2, #6\n    ldr r0, _021E8B00 ; =ov112_021FDA18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8B04 ; =0x00007CB0\n    mov r2, #6\n    ldr r0, _021E8B08 ; =ov112_021FDB98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8B0C ; =0x00007E30\n    mov r2, #6\n    ldr r0, _021E8B10 ; =ov112_021FDD18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8B14 ; =0x00007FB0\n    mov r2, #6\n    ldr r0, _021E8B18 ; =ov112_021FDE98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8B1C ; =0x00008130\n    mov r2, #6\n    ldr r0, _021E8B20 ; =ov112_021FE018\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8B24 ; =0x000082B0\n    mov r2, #6\n    ldr r0, _021E8B28 ; =ov112_021F7B98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8B2C ; =0x00008430\n    mov r2, #6\n    ldr r0, _021E8B30 ; =ov112_021F7D18\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8B34 ; =0x000085B0\n    mov r2, #6\n    ldr r0, _021E8B38 ; =ov112_021F7E98\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8B3C ; =0x00008730\n    mov r2, #6\n    ldr r0, _021E8B40 ; =ov112_021F8018\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8B44 ; =0x000088B0\n    mov r2, #6\n    ldr r0, _021E8B48 ; =ov112_021F72D8\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r1, _021E8B4C ; =0x00002210\n    ldr r0, _021E8B50 ; =ov112_021F6678\n    add r1, r4, r1\n    mov r2, #0xa0\n    bl MI_CpuCopy8\n    mov r1, #0x3f\n    lsl r1, r1, #4\n    ldr r0, _021E8B54 ; =ov112_021F5E78\n    add r1, r4, r1\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    mov r1, #0x45\n    lsl r1, r1, #4\n    ldr r0, _021E8B58 ; =ov112_021F5ED8\n    add r1, r4, r1\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    mov r1, #0x4b\n    lsl r1, r1, #4\n    ldr r0, _021E8B5C ; =ov112_021F5F38\n    add r1, r4, r1\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    mov r1, #0x51\n    lsl r1, r1, #4\n    ldr r0, _021E8B60 ; =ov112_021F5F98\n    add r1, r4, r1\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    mov r1, #0x57\n    lsl r1, r1, #4\n    ldr r0, _021E8B64 ; =ov112_021F5FF8\n    add r1, r4, r1\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    mov r1, #0x5d\n    lsl r1, r1, #4\n    ldr r0, _021E8B68 ; =ov112_021F6118\n    add r1, r4, r1\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    mov r1, #0x63\n    lsl r1, r1, #4\n    ldr r0, _021E8B6C ; =ov112_021F60B8\n    add r1, r4, r1\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    ldr r0, _021E8B70 ; =0x00008A30\n    add r0, r4, r0\n    bl ov112_021F0D48\n    add r0, r6, #0\n    bl Heap_Free\n    add r0, sp, #0x14\n    bl RemoveWindow\n    add sp, #0x24\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021E8A9C: .word 0x00006930\n    _021E8AA0: .word ov112_021FC518\n    _021E8AA4: .word 0x00006AB0\n    _021E8AA8: .word ov112_021FC698\n    _021E8AAC: .word 0x00006C30\n    _021E8AB0: .word ov112_021FC818\n    _021E8AB4: .word 0x00006DB0\n    _021E8AB8: .word ov112_021FCB18\n    _021E8ABC: .word 0x00006F30\n    _021E8AC0: .word ov112_021FCC98\n    _021E8AC4: .word 0x000070B0\n    _021E8AC8: .word ov112_021FCE18\n    _021E8ACC: .word 0x00007230\n    _021E8AD0: .word ov112_021FD118\n    _021E8AD4: .word 0x000073B0\n    _021E8AD8: .word ov112_021FD298\n    _021E8ADC: .word 0x00007530\n    _021E8AE0: .word ov112_021FD418\n    _021E8AE4: .word 0x000076B0\n    _021E8AE8: .word ov112_021FD598\n    _021E8AEC: .word 0x00007830\n    _021E8AF0: .word ov112_021FD718\n    _021E8AF4: .word 0x000079B0\n    _021E8AF8: .word ov112_021FD898\n    _021E8AFC: .word 0x00007B30\n    _021E8B00: .word ov112_021FDA18\n    _021E8B04: .word 0x00007CB0\n    _021E8B08: .word ov112_021FDB98\n    _021E8B0C: .word 0x00007E30\n    _021E8B10: .word ov112_021FDD18\n    _021E8B14: .word 0x00007FB0\n    _021E8B18: .word ov112_021FDE98\n    _021E8B1C: .word 0x00008130\n    _021E8B20: .word ov112_021FE018\n    _021E8B24: .word 0x000082B0\n    _021E8B28: .word ov112_021F7B98\n    _021E8B2C: .word 0x00008430\n    _021E8B30: .word ov112_021F7D18\n    _021E8B34: .word 0x000085B0\n    _021E8B38: .word ov112_021F7E98\n    _021E8B3C: .word 0x00008730\n    _021E8B40: .word ov112_021F8018\n    _021E8B44: .word 0x000088B0\n    _021E8B48: .word ov112_021F72D8\n    _021E8B4C: .word 0x00002210\n    _021E8B50: .word ov112_021F6678\n    _021E8B54: .word ov112_021F5E78\n    _021E8B58: .word ov112_021F5ED8\n    _021E8B5C: .word ov112_021F5F38\n    _021E8B60: .word ov112_021F5F98\n    _021E8B64: .word ov112_021F5FF8\n    _021E8B68: .word ov112_021F6118\n    _021E8B6C: .word ov112_021F60B8\n    _021E8B70: .word 0x00008A30"
    );
    #endif
}

void ov112_021E8B74(void) {
    /* Original at 0x021E8B74 */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, [sp, #0x30]\n    str r1, [sp]\n    str r0, [sp, #0x30]\n    mov r0, #0xc0\n    mul r0, r3\n    str r2, [sp, #4]\n    str r0, [sp, #0x10]\n    bl GF_RTC_TimeToSec\n    bl SetLCRNGSeed\n    mov r7, #0\n    str r7, [sp, #8]\n    bl LCRandom\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r1, r2, r1\n    ldr r0, [sp, #8]\n    ldr r2, _021E8C58 ; =ov112_021F4138\n    add r0, r0, r1\n    ldr r1, [sp, #0x10]\n    add r6, r2, r1\n    mov r1, #0x14\n    mul r1, r0\n    add r6, #8\n    str r1, [sp, #0x14]\n    add r4, r6, r1\n    ldr r1, [sp, #0x30]\n    mov r2, #0x9a\n    strb r0, [r1, r7]\n    ldr r0, [sp, #0x14]\n    ldrb r1, [r4, #6]\n    ldrh r0, [r6, r0]\n    bl AllocAndLoadMonPersonal_HandleAlternateForm\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    ldrh r0, [r6, r0]\n    add r2, r4, #0\n    add r3, r5, #0\n    strh r0, [r5]\n    ldrh r0, [r4, #4]\n    strh r0, [r5, #2]\n    ldrh r0, [r2, #8]\n    add r1, r1, #1\n    add r2, r2, #2\n    strh r0, [r3, #4]\n    add r3, r3, #2\n    cmp r1, #4\n    blt _021E8BDA\n    ldrh r0, [r4, #2]\n    mov r1, #0x1f\n    strb r0, [r5, #0xc]\n    ldrb r0, [r5, #0xd]\n    ldrb r2, [r4, #6]\n    bic r0, r1\n    mov r1, #0x1f\n    and r1, r2\n    orr r0, r1\n    strb r0, [r5, #0xd]\n    ldrb r0, [r5, #0xd]\n    mov r1, #0x60\n    bic r0, r1\n    ldrb r1, [r4, #7]\n    lsl r1, r1, #0x1e\n    lsr r1, r1, #0x19\n    orr r0, r1\n    strb r0, [r5, #0xd]\n    ldrb r1, [r5, #0xd]\n    mov r0, #0x80\n    bic r1, r0\n    strb r1, [r5, #0xd]\n    ldr r0, [sp, #0xc]\n    mov r1, #0x1c\n    bl GetPersonalAttr\n    ldrb r1, [r5, #0xe]\n    mov r2, #1\n    lsl r0, r0, #0x18\n    bic r1, r2\n    lsr r2, r0, #0x18\n    mov r0, #1\n    and r0, r2\n    orr r0, r1\n    strb r0, [r5, #0xe]\n    ldrh r1, [r4, #0x10]\n    ldr r0, [sp]\n    strh r1, [r0]\n    ldrh r1, [r4, #0x12]\n    ldr r0, [sp, #4]\n    strb r1, [r0, r7]\n    ldr r0, [sp, #0xc]\n    bl FreeMonPersonal\n    ldr r0, [sp, #8]\n    add r7, r7, #1\n    add r0, r0, #2\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    add r5, #0x10\n    add r0, r0, #2\n    str r0, [sp]\n    cmp r7, #3\n    blt _021E8B94\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E8C58: .word ov112_021F4138"
    );
    #endif
}

void ov112_021E8C5C(void) {
    /* Original at 0x021E8C5C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r5, r0, #0\n    add r4, r2, #0\n    add r0, r7, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetBoxMonData\n    add r6, r0, #0\n    add r0, r7, #0\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetBoxMonData\n    mov r3, #0\n    add r1, r0, #0\n    add r2, r3, #0\n    mov r7, #1\n    ldrb r0, [r5, r2]\n    cmp r6, r0\n    beq _021E8C8C\n    cmp r1, r0\n    bne _021E8C8E\n    add r3, r7, #0\n    add r2, r2, #1\n    cmp r2, #3\n    blt _021E8C82\n    cmp r3, #0\n    beq _021E8CB4\n    mov r5, #0\n    mov r7, #0x64\n    mov r6, #0x4b\n    ldrh r1, [r4]\n    add r0, r1, #0\n    mul r0, r6\n    add r1, r7, #0\n    bl _s32_div_f\n    strh r0, [r4]\n    add r5, r5, #1\n    add r4, r4, #2\n    cmp r5, #3\n    blt _021E8C9E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021E8CB8(void) {
    /* Original at 0x021E8CB8 */
    /* Requires manual decompilation - 476 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x130\n    add r7, r0, #0\n    ldr r0, _021E901C ; =0x0001D798\n    add r5, r1, #0\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x28]\n    mov r0, #0x9a\n    add r1, r0, #0\n    add r1, #0xe6\n    bl Heap_Alloc\n    str r0, [sp, #0x24]\n    mov r0, #0\n    ldr r6, _021E9020 ; =ov112_021F5578\n    str r0, [sp, #0x2c]\n    add r4, sp, #0x40\n    mov r0, #0\n    str r0, [sp]\n    ldrb r0, [r6]\n    add r1, r4, #0\n    mov r2, #1\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x18]\n    mov r3, #0\n    bl AddWindowParameterized\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x2c]\n    add r6, r6, #1\n    add r0, r0, #1\n    add r4, #0x10\n    str r0, [sp, #0x2c]\n    cmp r0, #0xf\n    blo _021E8CDE\n    ldr r0, _021E9024 ; =0x0001D77C\n    ldrh r0, [r5, r0]\n    strh r0, [r7]\n    ldr r0, _021E9028 ; =0x0001E430\n    ldr r0, [r5, r0]\n    bl AcquireBoxMonLock\n    mov r4, #0\n    add r6, r7, #0\n    ldr r0, _021E9028 ; =0x0001E430\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    add r1, #0x36\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r6, #4]\n    add r4, r4, #1\n    add r6, r6, #2\n    cmp r4, #4\n    blt _021E8D24\n    ldr r0, _021E9028 ; =0x0001E430\n    mov r1, #0xa1\n    ldr r0, [r5, r0]\n    mov r2, #0\n    bl GetBoxMonData\n    strb r0, [r7, #0xc]\n    ldr r0, _021E9028 ; =0x0001E430\n    mov r1, #0x70\n    ldr r0, [r5, r0]\n    mov r2, #0\n    bl GetBoxMonData\n    ldrb r1, [r7, #0xd]\n    mov r2, #0x1f\n    lsl r0, r0, #0x18\n    bic r1, r2\n    lsr r2, r0, #0x18\n    mov r0, #0x1f\n    and r0, r2\n    orr r0, r1\n    strb r0, [r7, #0xd]\n    ldrb r1, [r7, #0xd]\n    mov r0, #0x80\n    bic r1, r0\n    ldr r0, _021E9028 ; =0x0001E430\n    strb r1, [r7, #0xd]\n    ldr r0, [r5, r0]\n    bl BoxMonIsShiny\n    lsl r0, r0, #0x1f\n    ldrb r2, [r7, #0xe]\n    mov r1, #2\n    lsr r0, r0, #0x1e\n    bic r2, r1\n    orr r0, r2\n    strb r0, [r7, #0xe]\n    ldr r0, _021E9028 ; =0x0001E430\n    mov r1, #9\n    ldr r0, [r5, r0]\n    mov r2, #0\n    bl GetBoxMonData\n    add r1, r7, #0\n    add r1, #0x26\n    strb r0, [r1]\n    ldr r0, _021E9028 ; =0x0001E430\n    add r2, r7, #0\n    ldr r0, [r5, r0]\n    mov r1, #0x75\n    add r2, #0x10\n    bl GetBoxMonData\n    ldr r0, _021E9028 ; =0x0001E430\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ReleaseBoxMonLock\n    ldrh r0, [r7]\n    mov r1, #0x9a\n    bl AllocAndLoadMonPersonal\n    mov r1, #0x1c\n    add r4, r0, #0\n    bl GetPersonalAttr\n    ldrb r1, [r7, #0xe]\n    mov r2, #1\n    lsl r0, r0, #0x18\n    bic r1, r2\n    lsr r2, r0, #0x18\n    mov r0, #1\n    and r0, r2\n    orr r0, r1\n    strb r0, [r7, #0xe]\n    add r0, r4, #0\n    bl FreeMonPersonal\n    ldr r0, _021E9028 ; =0x0001E430\n    ldr r0, [r5, r0]\n    bl GetBoxMonGender\n    ldrb r2, [r7, #0xd]\n    mov r1, #0x60\n    lsl r0, r0, #0x1e\n    bic r2, r1\n    lsr r0, r0, #0x19\n    orr r0, r2\n    strb r0, [r7, #0xd]\n    ldr r0, [sp, #0x28]\n    mov r1, #0xc0\n    mul r1, r0\n    str r1, [sp, #0x20]\n    ldr r1, _021E902C ; =ov112_021F413C\n    ldr r0, [sp, #0x20]\n    ldr r0, [r1, r0]\n    str r0, [sp, #0x1c]\n    sub r1, r0, #1\n    add r0, r7, #0\n    add r0, #0x27\n    strb r1, [r0]\n    ldr r1, _021E901C ; =0x0001D798\n    ldr r0, _021E9030 ; =0x0001E44C\n    ldr r1, [r5, r1]\n    ldr r0, [r5, r0]\n    add r1, #0x5b\n    bl NewString_ReadMsgData\n    add r1, r7, #0\n    add r4, r0, #0\n    add r1, #0x28\n    mov r2, #0x15\n    bl CopyStringToU16Array\n    add r0, r4, #0\n    bl String_Delete\n    add r0, sp, #0x3c\n    str r0, [sp]\n    add r0, r7, #0\n    add r1, r7, #0\n    add r2, r7, #0\n    ldr r3, [sp, #0x28]\n    add r0, #0x52\n    add r1, #0x82\n    add r2, #0x88\n    bl ov112_021E8B74\n    ldr r1, _021E9028 ; =0x0001E430\n    add r2, r7, #0\n    ldr r4, _021E9034 ; =ov112_021F4138\n    ldr r0, [sp, #0x20]\n    ldr r1, [r5, r1]\n    add r0, r4, r0\n    add r0, #0xbc\n    add r2, #0x82\n    bl ov112_021E8C5C\n    ldr r2, [sp, #0x20]\n    add r0, sp, #0x40\n    add r1, r5, #0\n    add r2, r4, r2\n    add r3, sp, #0x3c\n    bl ov112_021E9148\n    mov r0, #0\n    str r0, [sp, #0x14]\n    add r4, r0, #0\n    ldr r0, _021E9038 ; =0x00000B7E\n    add r6, r7, #0\n    add r0, r7, r0\n    str r0, [sp, #0x34]\n    add r0, r6, #0\n    add r0, #0x52\n    ldrh r0, [r0]\n    bl ov112_021E9470\n    add r1, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xfa\n    mov r2, #1\n    mov r3, #0x9a\n    bl GfGfxLoader_LoadFromNarc\n    ldr r1, [sp, #0x34]\n    mov r2, #6\n    str r0, [sp, #0x30]\n    add r1, r1, r4\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r0, [sp, #0x30]\n    bl Heap_Free\n    mov r0, #6\n    lsl r0, r0, #6\n    add r4, r4, r0\n    ldr r0, [sp, #0x14]\n    add r6, #0x10\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    cmp r0, #3\n    blt _021E8E6C\n    add r1, r7, #0\n    add r1, #0x7f\n    add r0, r7, #0\n    ldrb r1, [r1]\n    add r0, #0x72\n    ldrh r0, [r0]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1e\n    mov r2, #0\n    bl ov112_021E9480\n    add r1, r0, #0\n    mov r2, #1\n    ldr r0, _021E903C ; =0x00000102\n    mov r3, #0x9a\n    str r2, [sp]\n    bl GfGfxLoader_LoadFromNarc\n    ldr r1, _021E9040 ; =0x00000FFE\n    mov r2, #6\n    add r4, r0, #0\n    add r1, r7, r1\n    lsl r2, r2, #8\n    bl MI_CpuCopy8\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    str r0, [sp, #0x18]\n    add r4, r0, #0\n    ldr r0, _021E9044 ; =0x000015FE\n    add r6, sp, #0x40\n    add r0, r7, r0\n    str r0, [sp, #0x38]\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x50\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    ldr r3, [sp, #0x24]\n    mov r1, #0xa\n    mov r2, #2\n    bl ov112_021E93BC\n    ldr r1, [sp, #0x38]\n    mov r2, #5\n    ldr r0, [sp, #0x24]\n    add r1, r1, r4\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    mov r0, #5\n    lsl r0, r0, #6\n    add r4, r4, r0\n    ldr r0, [sp, #0x18]\n    add r6, #0x10\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #3\n    blt _021E8EF2\n    ldr r1, _021E9034 ; =ov112_021F4138\n    ldr r0, [sp, #0x20]\n    mov r2, #0\n    add r0, r1, r0\n    add r1, r7, #0\n    add r3, r0, #0\n    add r3, #0x80\n    ldrh r4, [r3]\n    add r3, r1, #0\n    add r3, #0x8c\n    strh r4, [r3]\n    add r3, r0, #0\n    add r3, #0x82\n    ldrh r4, [r3]\n    add r3, r1, #0\n    add r3, #0xa0\n    strh r4, [r3]\n    add r3, r0, #0\n    add r3, #0x84\n    ldrh r4, [r3]\n    add r3, r7, r2\n    add r3, #0xb4\n    add r2, r2, #1\n    strb r4, [r3]\n    add r0, r0, #6\n    add r1, r1, #2\n    cmp r2, #0xa\n    blt _021E8F3A\n    ldr r0, [sp, #0x1c]\n    mov r2, #0xc0\n    lsl r1, r0, #2\n    ldr r0, _021E9048 ; =ov112_021FF528\n    ldr r0, [r0, r1]\n    add r1, r7, #0\n    add r1, #0xbe\n    bl MI_CpuCopy8\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x50\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x11c]\n    ldr r3, [sp, #0x24]\n    mov r1, #0xa\n    mov r2, #2\n    bl ov112_021E93BC\n    ldr r2, _021E904C ; =0x0000017E\n    ldr r0, [sp, #0x24]\n    add r1, r7, r2\n    sub r2, #0x3e\n    bl MI_CpuCopy8\n    ldr r0, _021E9028 ; =0x0001E430\n    ldr r0, [r5, r0]\n    bl ov112_021E9464\n    add r1, r0, #0\n    mov r2, #1\n    mov r0, #0xfa\n    mov r3, #0x9a\n    str r2, [sp]\n    bl GfGfxLoader_LoadFromNarc\n    ldr r1, _021E9050 ; =0x000002BE\n    mov r2, #6\n    add r4, r0, #0\n    add r1, r7, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r0, _021E9024 ; =0x0001D77C\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    bne _021E8FD6\n    bl GF_AssertFail\n    ldr r2, _021E9024 ; =0x0001D77C\n    add r1, r2, #0\n    ldrh r0, [r5, r2]\n    add r1, #0x1a\n    add r2, #0x18\n    ldrb r1, [r5, r1]\n    ldrb r2, [r5, r2]\n    bl ov112_021E9480\n    add r1, r0, #0\n    mov r2, #1\n    ldr r0, _021E903C ; =0x00000102\n    mov r3, #0x9a\n    str r2, [sp]\n    bl GfGfxLoader_LoadFromNarc\n    add r4, r0, #0\n    ldr r0, _021E9024 ; =0x0001D77C\n    ldrh r1, [r5, r0]\n    ldr r0, _021E9054 ; =0x00000147\n    cmp r1, r0\n    bne _021E9018\n    ldr r0, _021E9028 ; =0x0001E430\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    bl GetBoxMonData\n    add r2, r0, #0\n    ldr r1, _021E9058 ; =ov112_021FE498\n    add r0, r4, #0\n    bl ov112_021E9A30\n    ldr r1, _021E905C ; =0x0000043E\n    b _021E9060\n    _021E901C: .word 0x0001D798\n    _021E9020: .word ov112_021F5578\n    _021E9024: .word 0x0001D77C\n    _021E9028: .word 0x0001E430\n    _021E902C: .word ov112_021F413C\n    _021E9030: .word 0x0001E44C\n    _021E9034: .word ov112_021F4138\n    _021E9038: .word 0x00000B7E\n    _021E903C: .word 0x00000102\n    _021E9040: .word 0x00000FFE\n    _021E9044: .word 0x000015FE\n    _021E9048: .word ov112_021FF528\n    _021E904C: .word 0x0000017E\n    _021E9050: .word 0x000002BE\n    _021E9054: .word 0x00000147\n    _021E9058: .word ov112_021FE498\n    _021E905C: .word 0x0000043E\n    mov r2, #6\n    add r0, r4, #0\n    add r1, r7, r1\n    lsl r2, r2, #8\n    bl MI_CpuCopy8\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x50\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x12c]\n    ldr r3, [sp, #0x24]\n    mov r1, #0xa\n    mov r2, #2\n    bl ov112_021E93BC\n    ldr r1, _021E90F4 ; =0x00000A3E\n    mov r2, #5\n    ldr r0, [sp, #0x24]\n    add r1, r7, r1\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    ldr r0, _021E90F8 ; =0x000019BE\n    mov r6, #0\n    add r4, sp, #0x40\n    add r5, r6, #0\n    add r7, r7, r0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x60\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0xc]\n    ldr r3, [sp, #0x24]\n    mov r1, #0xc\n    mov r2, #2\n    bl ov112_021E93BC\n    mov r2, #6\n    ldr r0, [sp, #0x24]\n    add r1, r7, r5\n    lsl r2, r2, #6\n    bl MI_CpuCopy8\n    mov r0, #6\n    lsl r0, r0, #6\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, r5, r0\n    cmp r6, #0xa\n    blt _021E90A4\n    mov r5, #0\n    add r4, sp, #0x40\n    add r0, r4, #0\n    bl RemoveWindow\n    add r5, r5, #1\n    add r4, #0x10\n    cmp r5, #0xf\n    blo _021E90DC\n    ldr r0, [sp, #0x24]\n    bl Heap_Free\n    add sp, #0x130\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E90F4: .word 0x00000A3E\n    _021E90F8: .word 0x000019BE"
    );
    #endif
}

void ov112_021E90FC(void) {
    /* Original at 0x021E90FC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r1, #0x20]\n    bl Save_PlayerData_GetProfile\n    mov r1, #0x9a\n    bl PlayerProfile_GetPlayerName_NewString\n    add r4, r0, #0\n    mov r0, #5\n    mov r1, #0x9a\n    bl FontID_Alloc\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E9144 ; =0x00030100\n    add r2, r4, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #5\n    mov r3, #2\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #5\n    bl FontID_Release\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021E9144: .word 0x00030100"
    );
    #endif
}

void ov112_021E9148(void) {
    /* Original at 0x021E9148 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    str r0, [sp, #0x10]\n    str r1, [sp, #0x14]\n    str r2, [sp, #0x18]\n    str r3, [sp, #0x1c]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xed\n    mov r3, #0x9a\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0x20]\n    mov r0, #5\n    mov r1, #0x9a\n    bl FontID_Alloc\n    ldr r4, [sp, #0x18]\n    ldr r5, [sp, #0x10]\n    mov r7, #0\n    ldr r1, [sp, #0x14]\n    ldr r0, _021E927C ; =0x0001E450\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    add r1, #0x80\n    ldrh r1, [r1]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E9280 ; =0x00030100\n    mov r1, #5\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #2\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r7, r7, #1\n    add r4, r4, #6\n    add r5, #0x10\n    cmp r7, #0xa\n    blt _021E9170\n    mov r5, #0\n    mov r6, #1\n    mov r7, #0xff\n    ldr r1, [sp, #0x1c]\n    ldr r0, [sp, #0x20]\n    ldrb r2, [r1, r5]\n    mov r1, #0x14\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, [sp, #0x18]\n    add r1, r1, r3\n    ldrh r1, [r1, #8]\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    str r6, [sp]\n    ldr r0, _021E9280 ; =0x00030100\n    str r7, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r0, #0xa\n    lsl r1, r0, #4\n    ldr r0, [sp, #0x10]\n    add r2, r4, #0\n    add r0, r0, r1\n    mov r1, #5\n    mov r3, #2\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add r5, r5, #1\n    cmp r5, #3\n    blt _021E91B4\n    ldr r1, _021E9284 ; =0x0001E44C\n    ldr r0, [sp, #0x14]\n    ldr r2, _021E9288 ; =0x0001D798\n    ldr r0, [r0, r1]\n    ldr r1, [sp, #0x14]\n    ldr r1, [r1, r2]\n    add r1, #0x5b\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E9280 ; =0x00030100\n    add r2, r4, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    str r1, [sp, #0xc]\n    add r0, #0xd0\n    mov r1, #5\n    mov r3, #2\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #0xc\n    mov r1, #0x9a\n    bl String_New\n    add r4, r0, #0\n    ldr r1, _021E928C ; =0x0001E430\n    ldr r0, [sp, #0x14]\n    add r2, r4, #0\n    ldr r0, [r0, r1]\n    mov r1, #0x77\n    bl GetBoxMonData\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021E9280 ; =0x00030100\n    mov r1, #5\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r2, r4, #0\n    add r0, #0xe0\n    mov r3, #2\n    str r0, [sp, #0x10]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #5\n    bl FontID_Release\n    ldr r0, [sp, #0x20]\n    bl DestroyMsgData\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _021E927C: .word 0x0001E450\n    _021E9280: .word 0x00030100\n    _021E9284: .word 0x0001E44C\n    _021E9288: .word 0x0001D798\n    _021E928C: .word 0x0001E430"
    );
    #endif
}

void ov112_021E9290(void) {
    /* Original at 0x021E9290 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r4, r2, #0\n    add r6, r0, #0\n    add r5, r1, #0\n    str r3, [sp, #0x20]\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #2\n    mov r3, #0\n    bl GetBoxmonSpriteCharAndPlttNarcIds\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r1, #0\n    bl GetBoxMonData\n    add r7, r0, #0\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    mov r3, #0\n    str r3, [sp]\n    mov r1, #0xa\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    str r5, [sp, #0xc]\n    str r7, [sp, #0x10]\n    str r3, [sp, #0x14]\n    mov r1, #2\n    str r1, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    ldrh r0, [r4]\n    ldrh r1, [r4, #2]\n    mov r2, #0x9a\n    bl sub_02014494\n    mov r1, #0x32\n    add r0, r5, #0\n    lsl r1, r1, #6\n    bl DC_FlushRange\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    bne _021E9312\n    mov r1, #0x2e\n    mov r2, #0x32\n    add r0, r5, #0\n    lsl r1, r1, #6\n    lsl r2, r2, #6\n    bl GX_LoadOBJ\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x9a\n    str r0, [sp, #4]\n    ldrh r0, [r4]\n    ldrh r1, [r4, #4]\n    mov r2, #1\n    mov r3, #0x80\n    bl GfGfxLoader_GXLoadPal\n    b _021E9332\n    mov r1, #0x31\n    lsl r1, r1, #6\n    add r2, r1, #0\n    add r0, r5, #0\n    add r2, #0x40\n    bl GXS_LoadOBJ\n    mov r3, #0x20\n    str r3, [sp]\n    mov r0, #0x9a\n    str r0, [sp, #4]\n    ldrh r0, [r4]\n    ldrh r1, [r4, #4]\n    mov r2, #5\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021E9338(void) {
    /* Original at 0x021E9338 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021E9358 ; =0x0001E440\n    add r2, sp, #0\n    ldr r0, [r0, r1]\n    add r1, sp, #0\n    add r1, #2\n    bl sub_02032688\n    add r0, sp, #0\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _021E9354\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _021E9358: .word 0x0001E440"
    );
    #endif
}

void ov112_021E935C(void) {
    /* Original at 0x021E935C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    asr r5, r3, #2\n    asr r4, r2, #2\n    lsr r5, r5, #0x1d\n    lsr r4, r4, #0x1d\n    add r5, r3, r5\n    add r4, r2, r4\n    asr r5, r5, #3\n    mul r1, r5\n    asr r4, r4, #3\n    add r4, r4, r1\n    lsr r5, r2, #0x1f\n    lsl r1, r2, #0x1d\n    sub r1, r1, r5\n    mov r2, #0x1d\n    ror r1, r2\n    add r1, r5, r1\n    lsr r5, r3, #0x1f\n    lsl r3, r3, #0x1d\n    sub r3, r3, r5\n    ror r3, r2\n    add r2, r5, r3\n    lsl r2, r2, #3\n    add r2, r1, r2\n    mov r1, #1\n    and r1, r2\n    cmp r1, #1\n    bne _021E93A6\n    lsr r1, r2, #0x1f\n    add r1, r2, r1\n    asr r2, r1, #1\n    lsl r1, r4, #5\n    add r1, r2, r1\n    ldrb r0, [r0, r1]\n    asr r0, r0, #4\n    pop {r4, r5}\n    bx lr\n    lsr r1, r2, #0x1f\n    add r1, r2, r1\n    asr r2, r1, #1\n    lsl r1, r4, #5\n    add r1, r2, r1\n    ldrb r1, [r0, r1]\n    mov r0, #0xf\n    and r0, r1\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov112_021E93BC(void) {
    /* Original at 0x021E93BC */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x30]\n    str r1, [sp, #4]\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x34]\n    str r3, [sp, #8]\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x38]\n    add r1, r3, #0\n    str r0, [sp, #0x38]\n    ldr r3, [sp, #0x3c]\n    ldr r2, [sp, #0x38]\n    mov r0, #0\n    mul r3, r2\n    asr r2, r3, #2\n    lsr r2, r2, #0x1d\n    add r2, r3, r2\n    asr r2, r2, #3\n    lsl r2, r2, #1\n    str r0, [sp, #0x10]\n    bl MIi_CpuClearFast\n    mov r0, #0\n    ldr r1, [sp, #0x3c]\n    str r0, [sp, #0x14]\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    str r0, [sp, #0xc]\n    cmp r0, #0\n    ble _021E945C\n    ldr r7, [sp, #0x14]\n    ldr r0, [sp, #0x38]\n    mov r6, #0\n    cmp r0, #0\n    ble _021E944E\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0x10]\n    mov r4, #0\n    add r5, r1, r0\n    ldr r3, [sp, #0x34]\n    ldr r2, [sp, #0x30]\n    add r3, r3, r4\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    add r2, r6, r2\n    add r3, r3, r7\n    bl ov112_021E935C\n    asr r2, r0, #1\n    ldrb r1, [r5]\n    lsl r2, r4\n    orr r1, r2\n    mov r2, #1\n    strb r1, [r5]\n    and r0, r2\n    lsl r0, r4\n    ldrb r1, [r5, #1]\n    add r4, r4, #1\n    orr r0, r1\n    strb r0, [r5, #1]\n    cmp r4, #8\n    blt _021E9412\n    ldr r0, [sp, #0x10]\n    add r6, r6, #1\n    add r0, r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x38]\n    cmp r6, r0\n    blt _021E940A\n    ldr r0, [sp, #0x14]\n    add r7, #8\n    add r1, r0, #1\n    ldr r0, [sp, #0xc]\n    str r1, [sp, #0x14]\n    cmp r1, r0\n    blt _021E9402\n    ldr r0, [sp, #0x10]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021E9464(void) {
    Boxmon_GetIconNaix();
}

void ov112_021E9470(void) {
    GetMonIconNaixEx();
}

void ov112_021E9480(void) {
    /* Original at 0x021E9480 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    lsl r0, r5, #0x10\n    lsl r1, r2, #0x18\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x18\n    bl sub_02070438\n    ldr r1, _021E9598 ; =0x000001A5\n    cmp r5, r1\n    bgt _021E94EC\n    bge _021E9550\n    add r2, r1, #0\n    sub r2, #0x46\n    cmp r5, r2\n    bgt _021E94B8\n    add r2, r1, #0\n    sub r2, #0x46\n    cmp r5, r2\n    bge _021E955C\n    cmp r5, #0xac\n    bgt _021E94B2\n    beq _021E9580\n    b _021E9586\n    cmp r5, #0xc9\n    beq _021E9568\n    b _021E9586\n    add r2, r1, #0\n    sub r2, #0x23\n    cmp r5, r2\n    bgt _021E94CA\n    add r2, r1, #0\n    sub r2, #0x23\n    cmp r5, r2\n    beq _021E9562\n    b _021E9586\n    add r2, r1, #0\n    sub r2, #8\n    cmp r5, r2\n    bgt _021E9586\n    add r2, r1, #0\n    sub r2, #9\n    cmp r5, r2\n    blt _021E9586\n    add r2, r1, #0\n    sub r2, #9\n    cmp r5, r2\n    beq _021E9538\n    add r2, r1, #0\n    sub r2, #8\n    cmp r5, r2\n    beq _021E953E\n    b _021E9586\n    add r2, r1, #0\n    add r2, #0x42\n    cmp r5, r2\n    bgt _021E951C\n    add r2, r1, #0\n    add r2, #0x42\n    cmp r5, r2\n    bge _021E957A\n    add r2, r1, #2\n    cmp r5, r2\n    bgt _021E9512\n    add r2, r1, #1\n    cmp r5, r2\n    blt _021E9586\n    beq _021E9544\n    add r2, r1, #2\n    cmp r5, r2\n    beq _021E954A\n    b _021E9586\n    add r2, r1, #0\n    add r2, #0x3a\n    cmp r5, r2\n    beq _021E9574\n    b _021E9586\n    add r2, r1, #0\n    add r2, #0x47\n    cmp r5, r2\n    bgt _021E952E\n    add r2, r1, #0\n    add r2, #0x47\n    cmp r5, r2\n    beq _021E956E\n    b _021E9586\n    add r2, r1, #0\n    add r2, #0x48\n    cmp r5, r2\n    beq _021E9556\n    b _021E9586\n    add r1, #0xc9\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xcc\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xcf\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xd1\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xd3\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xd5\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xc5\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xa5\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xa9\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xe7\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xe9\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xef\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    add r1, #0xf1\n    add r0, r0, r1\n    pop {r3, r4, r5, pc}\n    cmp r4, #1\n    beq _021E958C\n    mov r4, #0\n    ldr r0, _021E959C ; =ov112_021F397E\n    lsl r2, r5, #2\n    lsl r1, r4, #1\n    add r0, r0, r2\n    ldrh r0, [r1, r0]\n    pop {r3, r4, r5, pc}\n    _021E9598: .word 0x000001A5\n    _021E959C: .word ov112_021F397E"
    );
    #endif
}

void ov112_021E95A0(void) {
    /* Original at 0x021E95A0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    ldr r0, _021E9604 ; =0x0001E440\n    add r1, sp, #4\n    ldr r0, [r6, r0]\n    add r2, sp, #0\n    bl sub_02032674\n    ldr r0, [r6, #0x20]\n    bl Save_Pokedex_Get\n    bl Pokedex_GetNatDexFlag\n    cmp r0, #0\n    beq _021E95C4\n    mov r7, #0x14\n    b _021E95C6\n    mov r7, #8\n    mov r4, #0\n    cmp r7, #0\n    bls _021E95FE\n    ldr r5, _021E9608 ; =ov112_021F4138\n    ldr r1, [r5]\n    ldr r0, [sp]\n    cmp r1, r0\n    bhi _021E95F6\n    ldr r0, _021E9604 ; =0x0001E440\n    add r1, r4, #0\n    ldr r0, [r6, r0]\n    bl Pokewalker_CourseIsUnlocked\n    cmp r0, #0\n    bne _021E95F6\n    ldr r0, _021E9604 ; =0x0001E440\n    add r1, r4, #0\n    ldr r0, [r6, r0]\n    bl Pokewalker_UnlockCourse\n    ldr r0, _021E960C ; =0x0001EC78\n    add sp, #8\n    str r4, [r6, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r5, #0xc0\n    cmp r4, r7\n    blo _021E95CE\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9604: .word 0x0001E440\n    _021E9608: .word ov112_021F4138\n    _021E960C: .word 0x0001EC78"
    );
    #endif
}

void ov112_021E9610(void) {
    /* Original at 0x021E9610 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #0x20]\n    str r1, [sp]\n    bl Save_Pokedex_Get\n    bl Pokedex_GetNatDexFlag\n    cmp r0, #0\n    beq _021E9628\n    mov r5, #0x14\n    b _021E962A\n    mov r5, #8\n    mov r4, #0\n    cmp r5, #0\n    ble _021E965C\n    ldr r7, _021E9664 ; =0x0001E440\n    ldr r0, [r6, r7]\n    add r1, r4, #0\n    bl Pokewalker_CourseIsUnlocked\n    cmp r0, #0\n    bne _021E9656\n    mov r0, #0xc0\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, _021E9668 ; =ov112_021F4138\n    ldr r1, [r0, r1]\n    ldr r0, [sp]\n    cmp r1, r0\n    bls _021E9652\n    sub r0, r1, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    cmp r4, r5\n    blt _021E9632\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9664: .word 0x0001E440\n    _021E9668: .word ov112_021F4138"
    );
    #endif
}

void ov112_021E966C(void) {
    /* Original at 0x021E966C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #2\n    mov r2, #0xd\n    bl ov112_021E7CA4\n    add r0, r5, #0\n    mov r1, #0\n    bl ov112_021EA51C\n    ldr r0, _021E96BC ; =0x000F0100\n    ldr r2, _021E96C0 ; =0x0001E514\n    str r0, [sp]\n    ldr r2, [r5, r2]\n    add r0, r5, #0\n    mov r1, #3\n    mov r3, #4\n    bl ov112_021E9FA4\n    ldr r0, _021E96BC ; =0x000F0100\n    mov r1, #4\n    str r0, [sp]\n    ldr r2, _021E96C4 ; =0x0001E518\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    add r3, r1, #0\n    bl ov112_021E9FA4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov112_021EA51C\n    ldr r0, _021E96C8 ; =0x0001EC50\n    mov r1, #0\n    str r4, [r5, r0]\n    ldr r0, _021E96CC ; =0x0001F2E2\n    strh r1, [r5, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _021E96BC: .word 0x000F0100\n    _021E96C0: .word 0x0001E514\n    _021E96C4: .word 0x0001E518\n    _021E96C8: .word 0x0001EC50\n    _021E96CC: .word 0x0001F2E2"
    );
    #endif
}

void ov112_021E96D0(void) {
    /* Original at 0x021E96D0 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _021E9740 ; =0x0001E44C\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #0x96\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r0, _021E9740 ; =0x0001E44C\n    mov r1, #0x97\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0xd\n    bl ov112_021E7CA4\n    add r0, r5, #0\n    mov r1, #0\n    bl ov112_021EA51C\n    ldr r0, _021E9744 ; =0x000F0100\n    mov r1, #3\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #4\n    bl ov112_021E9FA4\n    ldr r0, _021E9744 ; =0x000F0100\n    mov r1, #4\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r7, #0\n    add r3, r1, #0\n    bl ov112_021E9FA4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov112_021EA51C\n    ldr r0, _021E9748 ; =0x0001EC50\n    mov r1, #0\n    str r4, [r5, r0]\n    ldr r0, _021E974C ; =0x0001F2E2\n    strh r1, [r5, r0]\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E9740: .word 0x0001E44C\n    _021E9744: .word 0x000F0100\n    _021E9748: .word 0x0001EC50\n    _021E974C: .word 0x0001F2E2"
    );
    #endif
}

void ov112_021E9750(void) {
    /* Original at 0x021E9750 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E9870 ; =0x0001F2E2\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    bne _021E9840\n    mov r0, #0\n    bl ov112_021E9888\n    cmp r0, #0\n    beq _021E9774\n    cmp r0, #1\n    beq _021E9794\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _021E97B6\n    b _021E986C\n    ldr r0, _021E9874 ; =0x0001EC50\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov112_021EA51C\n    add r0, r4, #0\n    bl ov112_021EA584\n    ldr r0, _021E9878 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _021E9870 ; =0x0001F2E2\n    mov r1, #1\n    strh r1, [r4, r0]\n    b _021E986C\n    ldr r0, _021E9874 ; =0x0001EC50\n    mov r1, #2\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021EA51C\n    add r0, r4, #0\n    bl ov112_021EA584\n    ldr r0, _021E9878 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _021E9870 ; =0x0001F2E2\n    mov r1, #1\n    strh r1, [r4, r0]\n    b _021E986C\n    ldr r0, _021E987C ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _021E97DE\n    ldr r0, _021E9874 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021E97CE\n    ldr r0, _021E9880 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021EA51C\n    ldr r0, _021E9874 ; =0x0001EC50\n    mov r1, #0\n    str r1, [r4, r0]\n    b _021E986C\n    mov r1, #0x80\n    tst r1, r0\n    beq _021E9802\n    ldr r0, _021E9874 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    beq _021E97F2\n    ldr r0, _021E9880 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021EA51C\n    ldr r0, _021E9874 ; =0x0001EC50\n    mov r1, #1\n    str r1, [r4, r0]\n    b _021E986C\n    mov r1, #1\n    add r2, r0, #0\n    tst r2, r1\n    beq _021E981C\n    ldr r0, _021E9870 ; =0x0001F2E2\n    strh r1, [r4, r0]\n    add r0, r4, #0\n    bl ov112_021EA584\n    ldr r0, _021E9878 ; =0x000005DD\n    bl PlaySE\n    b _021E986C\n    mov r2, #2\n    tst r0, r2\n    beq _021E986C\n    add r0, r4, #0\n    bl ov112_021EA51C\n    add r0, r4, #0\n    bl ov112_021EA584\n    ldr r0, _021E9874 ; =0x0001EC50\n    mov r1, #1\n    str r1, [r4, r0]\n    ldr r0, _021E9870 ; =0x0001F2E2\n    strh r1, [r4, r0]\n    ldr r0, _021E9880 ; =0x000005DC\n    bl PlaySE\n    b _021E986C\n    cmp r0, #1\n    bne _021E9858\n    ldr r0, _021E9884 ; =0x0001E530\n    ldr r0, [r4, r0]\n    bl ManagedSprite_IsAnimated\n    cmp r0, #0\n    bne _021E986C\n    ldr r0, _021E9870 ; =0x0001F2E2\n    mov r1, #2\n    strh r1, [r4, r0]\n    b _021E986C\n    cmp r0, #2\n    bne _021E986C\n    ldr r0, _021E9874 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021E9868\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    _021E9870: .word 0x0001F2E2\n    _021E9874: .word 0x0001EC50\n    _021E9878: .word 0x000005DD\n    _021E987C: .word gSystem\n    _021E9880: .word 0x000005DC\n    _021E9884: .word 0x0001E530"
    );
    #endif
}

void ov112_021E9888(void) {
    /* Original at 0x021E9888 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r4, #6\n    blt _021E9894\n    bl GF_AssertFail\n    ldr r0, _021E98A0 ; =ov112_021FF514\n    lsl r1, r4, #2\n    ldr r0, [r0, r1]\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    pop {r4, pc}\n    _021E98A0: .word ov112_021FF514"
    );
    #endif
}

void ov112_021E98A4(void) {
    /* Original at 0x021E98A4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0xf9\n    mov r1, #0x9a\n    bl NARC_New\n    add r4, r0, #0\n    mov r0, #5\n    mov r1, #0\n    bl ToggleBgLayer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x9a\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    mov r1, #0x12\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #5\n    mov r1, #1\n    bl ToggleBgLayer\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021E98E8(void) {
    /* Original at 0x021E98E8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _021E98F4 ; =ToggleBgLayer\n    lsl r1, r1, #0x18\n    mov r0, #5\n    lsr r1, r1, #0x18\n    bx r3\n    nop\n    _021E98F4: .word ToggleBgLayer"
    );
    #endif
}

void ov112_021E98F8(void) {
    /* Original at 0x021E98F8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    lsr r5, r2, #0x1f\n    lsl r4, r2, #0x1d\n    sub r4, r4, r5\n    mov r3, #0x1d\n    ror r4, r3\n    add r3, r5, r4\n    lsl r4, r1, #1\n    asr r1, r2, #2\n    lsr r1, r1, #0x1d\n    add r1, r2, r1\n    asr r1, r1, #3\n    lsl r1, r1, #7\n    add r4, r4, r1\n    add r1, r4, #1\n    ldrb r1, [r0, r1]\n    ldrb r0, [r0, r4]\n    asr r1, r3\n    lsl r1, r1, #0x1f\n    lsr r2, r1, #0x1e\n    add r1, r0, #0\n    asr r1, r3\n    mov r0, #1\n    and r0, r1\n    orr r0, r2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov112_021E9934(void) {
    /* Original at 0x021E9934 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    asr r4, r2, #2\n    lsr r4, r4, #0x1d\n    add r4, r2, r4\n    lsr r6, r2, #0x1f\n    lsl r5, r2, #0x1d\n    sub r5, r5, r6\n    mov r2, #0x1d\n    ror r5, r2\n    add r2, r6, r5\n    mov r5, #2\n    mov r6, #1\n    asr r4, r4, #3\n    and r5, r3\n    tst r3, r6\n    beq _021E9964\n    add r3, r6, #0\n    lsl r3, r2\n    lsl r2, r1, #1\n    lsl r1, r4, #7\n    add r1, r2, r1\n    ldrb r2, [r0, r1]\n    orr r2, r3\n    b _021E9976\n    add r3, r6, #0\n    lsl r3, r2\n    lsl r2, r1, #1\n    lsl r1, r4, #7\n    add r1, r2, r1\n    mov r2, #0xff\n    ldrb r4, [r0, r1]\n    eor r2, r3\n    and r2, r4\n    strb r2, [r0, r1]\n    cmp r5, #0\n    beq _021E9988\n    add r2, r1, #1\n    ldrb r1, [r0, r2]\n    orr r1, r3\n    strb r1, [r0, r2]\n    pop {r3, r4, r5, r6}\n    bx lr\n    add r4, r1, #1\n    ldrb r2, [r0, r4]\n    mov r1, #0xff\n    eor r1, r3\n    and r1, r2\n    strb r1, [r0, r4]\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov112_021E9998(void) {
    /* Original at 0x021E9998 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    str r0, [sp]\n    ldr r0, [sp, #0x38]\n    str r1, [sp, #4]\n    str r0, [sp, #0x38]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    ldr r0, _021E9A2C ; =ov112_021FF504\n    str r2, [sp, #8]\n    str r3, [sp, #0xc]\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x14]\n    mov r5, #0\n    ldr r7, [r0]\n    ldrb r0, [r7]\n    cmp r0, #0xff\n    beq _021E9A10\n    ldr r0, [sp, #8]\n    mov r1, #0xf\n    add r6, r0, #0\n    and r6, r1\n    mov r1, #0xf0\n    and r0, r1\n    lsr r0, r0, #4\n    sub r6, #8\n    str r0, [sp, #0x10]\n    lsl r1, r5, #1\n    ldrb r2, [r7, r1]\n    add r0, r7, r1\n    ldr r1, [sp, #0xc]\n    add r4, r1, r2\n    ldrb r1, [r0, #1]\n    ldr r0, [sp, #0x38]\n    add r1, r0, r1\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    str r0, [sp, #0x18]\n    sub r0, #8\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0x18]\n    add r1, r6, r4\n    bl ov112_021E98F8\n    cmp r0, #2\n    bne _021E9A02\n    ldr r0, [sp]\n    ldr r2, [sp, #0x18]\n    add r1, r6, r4\n    mov r3, #1\n    bl ov112_021E9934\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    lsl r0, r5, #1\n    ldrb r0, [r7, r0]\n    cmp r0, #0xff\n    bne _021E99CE\n    ldr r0, [sp, #8]\n    lsr r0, r0, #8\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x14]\n    add r0, r0, #4\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    cmp r0, #4\n    blt _021E99B0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9A2C: .word ov112_021FF504"
    );
    #endif
}

void ov112_021E9A30(void) {
    /* Original at 0x021E9A30 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r3, #0xd\n    mvn r3, r3\n    str r3, [sp]\n    add r3, r3, #6\n    add r6, r0, #0\n    add r4, r1, #0\n    add r5, r2, #0\n    bl ov112_021E9998\n    mov r3, #0xd\n    mov r1, #3\n    mvn r3, r3\n    lsl r1, r1, #8\n    str r3, [sp]\n    add r0, r6, r1\n    add r1, r4, r1\n    add r2, r5, #0\n    sub r3, #8\n    bl ov112_021E9998\n    mov r4, #0\n    add r7, r4, #0\n    add r5, r7, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov112_021E98F8\n    add r5, r5, #1\n    cmp r5, #0x40\n    blt _021E9A60\n    add r4, r4, #1\n    cmp r4, #0x30\n    blt _021E9A5E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021E9A78(void) {
    /* Original at 0x021E9A78 */
    /* Requires manual decompilation - 174 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r1, [sp]\n    cmp r1, #8\n    blt _021E9A86\n    bl GF_AssertFail\n    ldr r0, [sp]\n    cmp r0, #7\n    bls _021E9A8E\n    b _021E9BC8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E9A9A: ; jump table\n    ldr r0, _021E9BD8 ; =0x0001EBA8\n    ldr r6, _021E9BDC ; =ov112_021FF608\n    mov r4, #0\n    add r7, r5, r0\n    ldr r0, [r5, #0x18]\n    ldr r2, [r6]\n    add r1, r7, #0\n    bl AddWindow\n    add r4, r4, #1\n    add r6, r6, #4\n    add r7, #0x10\n    cmp r4, #7\n    blo _021E9AB2\n    ldr r1, _021E9BE0 ; =0x0001EC4B\n    ldr r0, [sp]\n    strb r0, [r5, r1]\n    b _021E9BC8\n    ldr r0, _021E9BE4 ; =0x0001EA68\n    ldr r6, _021E9BE8 ; =ov112_021FF5D8\n    mov r4, #0\n    add r7, r5, r0\n    ldr r0, [r5, #0x18]\n    ldr r2, [r6]\n    add r1, r7, #0\n    bl AddWindow\n    add r4, r4, #1\n    add r6, r6, #4\n    add r7, #0x10\n    cmp r4, #6\n    blo _021E9AD6\n    ldr r1, _021E9BEC ; =0x0001EC4A\n    ldr r0, [sp]\n    strb r0, [r5, r1]\n    b _021E9BC8\n    ldr r0, _021E9BD8 ; =0x0001EBA8\n    ldr r6, _021E9BF0 ; =ov112_021FF5D0\n    mov r4, #0\n    add r7, r5, r0\n    ldr r0, [r5, #0x18]\n    ldr r2, [r6]\n    add r1, r7, #0\n    bl AddWindow\n    add r4, r4, #1\n    add r6, r6, #4\n    add r7, #0x10\n    cmp r4, #2\n    blo _021E9AFA\n    ldr r1, _021E9BE0 ; =0x0001EC4B\n    ldr r0, [sp]\n    strb r0, [r5, r1]\n    b _021E9BC8\n    ldr r0, _021E9BE4 ; =0x0001EA68\n    ldr r6, _021E9BF4 ; =ov112_021FF640\n    mov r4, #0\n    add r7, r5, r0\n    ldr r0, [r5, #0x18]\n    ldr r2, [r6]\n    add r1, r7, #0\n    bl AddWindow\n    add r4, r4, #1\n    add r6, r6, #4\n    add r7, #0x10\n    cmp r4, #8\n    blo _021E9B1E\n    ldr r1, _021E9BEC ; =0x0001EC4A\n    ldr r0, [sp]\n    strb r0, [r5, r1]\n    b _021E9BC8\n    ldr r0, _021E9BE4 ; =0x0001EA68\n    ldr r6, _021E9BF8 ; =ov112_021FF660\n    mov r4, #0\n    add r7, r5, r0\n    ldr r0, [r5, #0x18]\n    ldr r2, [r6]\n    add r1, r7, #0\n    bl AddWindow\n    add r4, r4, #1\n    add r6, r6, #4\n    add r7, #0x10\n    cmp r4, #9\n    blo _021E9B42\n    ldr r1, _021E9BEC ; =0x0001EC4A\n    ldr r0, [sp]\n    strb r0, [r5, r1]\n    b _021E9BC8\n    ldr r0, _021E9BE4 ; =0x0001EA68\n    ldr r6, _021E9BFC ; =ov112_021FF624\n    mov r4, #0\n    add r7, r5, r0\n    ldr r0, [r5, #0x18]\n    ldr r2, [r6]\n    add r1, r7, #0\n    bl AddWindow\n    add r4, r4, #1\n    add r6, r6, #4\n    add r7, #0x10\n    cmp r4, #7\n    blo _021E9B66\n    ldr r1, _021E9BEC ; =0x0001EC4A\n    ldr r0, [sp]\n    strb r0, [r5, r1]\n    b _021E9BC8\n    ldr r0, _021E9BE4 ; =0x0001EA68\n    ldr r6, _021E9C00 ; =ov112_021FF684\n    mov r4, #0\n    add r7, r5, r0\n    ldr r0, [r5, #0x18]\n    ldr r2, [r6]\n    add r1, r7, #0\n    bl AddWindow\n    add r4, r4, #1\n    add r6, r6, #4\n    add r7, #0x10\n    cmp r4, #0x10\n    blo _021E9B8A\n    ldr r1, _021E9BEC ; =0x0001EC4A\n    ldr r0, [sp]\n    strb r0, [r5, r1]\n    b _021E9BC8\n    ldr r0, _021E9BE4 ; =0x0001EA68\n    ldr r6, _021E9C04 ; =ov112_021FF5F0\n    mov r4, #0\n    add r7, r5, r0\n    ldr r0, [r5, #0x18]\n    ldr r2, [r6]\n    add r1, r7, #0\n    bl AddWindow\n    add r4, r4, #1\n    add r6, r6, #4\n    add r7, #0x10\n    cmp r4, #6\n    blo _021E9BAE\n    ldr r1, _021E9BE0 ; =0x0001EC4B\n    ldr r0, [sp]\n    strb r0, [r5, r1]\n    ldr r1, _021E9C08 ; =ov112_021FEC80\n    ldr r0, [sp]\n    ldrb r0, [r1, r0]\n    add r1, r5, r0\n    ldr r0, _021E9C0C ; =0x0001EC48\n    strb r4, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9BD8: .word 0x0001EBA8\n    _021E9BDC: .word ov112_021FF608\n    _021E9BE0: .word 0x0001EC4B\n    _021E9BE4: .word 0x0001EA68\n    _021E9BE8: .word ov112_021FF5D8\n    _021E9BEC: .word 0x0001EC4A\n    _021E9BF0: .word ov112_021FF5D0\n    _021E9BF4: .word ov112_021FF640\n    _021E9BF8: .word ov112_021FF660\n    _021E9BFC: .word ov112_021FF624\n    _021E9C00: .word ov112_021FF684\n    _021E9C04: .word ov112_021FF5F0\n    _021E9C08: .word ov112_021FEC80\n    _021E9C0C: .word 0x0001EC48"
    );
    #endif
}

void ov112_021E9C10(void) {
    /* Original at 0x021E9C10 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _021E9C78 ; =ov112_021FEC80\n    ldrb r0, [r0, r1]\n    cmp r0, #0\n    bne _021E9C48\n    ldr r0, _021E9C7C ; =0x0001EC48\n    mov r4, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _021E9C40\n    ldr r0, _021E9C80 ; =0x0001EA68\n    ldr r7, _021E9C7C ; =0x0001EC48\n    add r6, r5, r0\n    lsl r0, r4, #4\n    add r0, r6, r0\n    bl RemoveWindow\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldrb r0, [r5, r7]\n    cmp r4, r0\n    blt _021E9C2C\n    ldr r0, _021E9C84 ; =0x0001EC4A\n    mov r1, #0xff\n    strb r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E9C88 ; =0x0001EC49\n    mov r4, #0\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    ble _021E9C6E\n    ldr r0, _021E9C8C ; =0x0001EBA8\n    add r7, r0, #0\n    add r6, r5, r0\n    add r7, #0xa1\n    lsl r0, r4, #4\n    add r0, r6, r0\n    bl RemoveWindow\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldrb r0, [r5, r7]\n    cmp r4, r0\n    blt _021E9C5A\n    ldr r0, _021E9C90 ; =0x0001EC4B\n    mov r1, #0xff\n    strb r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9C78: .word ov112_021FEC80\n    _021E9C7C: .word 0x0001EC48\n    _021E9C80: .word 0x0001EA68\n    _021E9C84: .word 0x0001EC4A\n    _021E9C88: .word 0x0001EC49\n    _021E9C8C: .word 0x0001EBA8\n    _021E9C90: .word 0x0001EC4B"
    );
    #endif
}

void ov112_021E9C94(void) {
    /* Original at 0x021E9C94 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov112_021E9C98(void) {
    /* Original at 0x021E9C98 */
    /* Requires manual decompilation - 159 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E9DD4 ; =0x0001E44C\n    mov r1, #0x4c\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    ldr r1, _021E9DD8 ; =0x0001E458\n    str r0, [r4, r1]\n    sub r1, #0xc\n    ldr r0, [r4, r1]\n    mov r1, #0x49\n    bl NewString_ReadMsgData\n    ldr r1, _021E9DDC ; =0x0001E45C\n    str r0, [r4, r1]\n    sub r1, #0x10\n    ldr r0, [r4, r1]\n    mov r1, #0x4a\n    bl NewString_ReadMsgData\n    ldr r1, _021E9DE0 ; =0x0001E460\n    str r0, [r4, r1]\n    sub r1, #0x14\n    ldr r0, [r4, r1]\n    mov r1, #0x4b\n    bl NewString_ReadMsgData\n    ldr r1, _021E9DE4 ; =0x0001E464\n    str r0, [r4, r1]\n    sub r1, #0x18\n    ldr r0, [r4, r1]\n    mov r1, #0x4e\n    bl NewString_ReadMsgData\n    ldr r1, _021E9DE8 ; =0x0001E468\n    str r0, [r4, r1]\n    sub r1, #0x1c\n    ldr r0, [r4, r1]\n    mov r1, #0x4d\n    bl NewString_ReadMsgData\n    ldr r1, _021E9DEC ; =0x0001E46C\n    str r0, [r4, r1]\n    sub r1, #0x20\n    ldr r0, [r4, r1]\n    mov r1, #0x50\n    bl NewString_ReadMsgData\n    ldr r1, _021E9DF0 ; =0x0001E470\n    str r0, [r4, r1]\n    sub r1, #0x24\n    ldr r0, [r4, r1]\n    mov r1, #0x4f\n    bl NewString_ReadMsgData\n    ldr r1, _021E9DF4 ; =0x0001E474\n    str r0, [r4, r1]\n    sub r1, #0x28\n    ldr r0, [r4, r1]\n    mov r1, #0x3f\n    bl NewString_ReadMsgData\n    ldr r1, _021E9DF8 ; =0x0001E494\n    str r0, [r4, r1]\n    sub r1, #0x48\n    ldr r0, [r4, r1]\n    mov r1, #0x40\n    bl NewString_ReadMsgData\n    ldr r1, _021E9DFC ; =0x0001E498\n    str r0, [r4, r1]\n    sub r1, #0x4c\n    ldr r0, [r4, r1]\n    mov r1, #0x41\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E00 ; =0x0001E49C\n    str r0, [r4, r1]\n    sub r1, #0x50\n    ldr r0, [r4, r1]\n    mov r1, #0x42\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E04 ; =0x0001E4A0\n    str r0, [r4, r1]\n    sub r1, #0x54\n    ldr r0, [r4, r1]\n    mov r1, #0x47\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E08 ; =0x0001E4A4\n    str r0, [r4, r1]\n    sub r1, #0x58\n    ldr r0, [r4, r1]\n    mov r1, #0x3f\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E0C ; =0x0001E4A8\n    str r0, [r4, r1]\n    sub r1, #0x5c\n    ldr r0, [r4, r1]\n    mov r1, #0x47\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E10 ; =0x0001E4AC\n    str r0, [r4, r1]\n    sub r1, #0x60\n    ldr r0, [r4, r1]\n    mov r1, #0x4f\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E14 ; =0x0001E4B0\n    str r0, [r4, r1]\n    sub r1, #0x64\n    ldr r0, [r4, r1]\n    mov r1, #0x3b\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E18 ; =0x0001E4B4\n    str r0, [r4, r1]\n    sub r1, #0x68\n    ldr r0, [r4, r1]\n    mov r1, #0x3d\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E1C ; =0x0001E4BC\n    str r0, [r4, r1]\n    sub r1, #0x70\n    ldr r0, [r4, r1]\n    mov r1, #0x52\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E20 ; =0x0001E50C\n    str r0, [r4, r1]\n    sub r1, #0xc0\n    ldr r0, [r4, r1]\n    mov r1, #0x55\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E24 ; =0x0001E510\n    str r0, [r4, r1]\n    sub r1, #0xc4\n    ldr r0, [r4, r1]\n    mov r1, #0x94\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E28 ; =0x0001E514\n    str r0, [r4, r1]\n    sub r1, #0xc8\n    ldr r0, [r4, r1]\n    mov r1, #0x95\n    bl NewString_ReadMsgData\n    ldr r1, _021E9E2C ; =0x0001E518\n    str r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _021E9DD4: .word 0x0001E44C\n    _021E9DD8: .word 0x0001E458\n    _021E9DDC: .word 0x0001E45C\n    _021E9DE0: .word 0x0001E460\n    _021E9DE4: .word 0x0001E464\n    _021E9DE8: .word 0x0001E468\n    _021E9DEC: .word 0x0001E46C\n    _021E9DF0: .word 0x0001E470\n    _021E9DF4: .word 0x0001E474\n    _021E9DF8: .word 0x0001E494\n    _021E9DFC: .word 0x0001E498\n    _021E9E00: .word 0x0001E49C\n    _021E9E04: .word 0x0001E4A0\n    _021E9E08: .word 0x0001E4A4\n    _021E9E0C: .word 0x0001E4A8\n    _021E9E10: .word 0x0001E4AC\n    _021E9E14: .word 0x0001E4B0\n    _021E9E18: .word 0x0001E4B4\n    _021E9E1C: .word 0x0001E4BC\n    _021E9E20: .word 0x0001E50C\n    _021E9E24: .word 0x0001E510\n    _021E9E28: .word 0x0001E514\n    _021E9E2C: .word 0x0001E518"
    );
    #endif
}

void ov112_021E9E30(void) {
    /* Original at 0x021E9E30 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E9EE8 ; =0x0001E458\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9EEC ; =0x0001E45C\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9EF0 ; =0x0001E460\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9EF4 ; =0x0001E464\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9EF8 ; =0x0001E468\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9EFC ; =0x0001E46C\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F00 ; =0x0001E470\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F04 ; =0x0001E474\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F08 ; =0x0001E494\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F0C ; =0x0001E49C\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F10 ; =0x0001E498\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F14 ; =0x0001E4A0\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F18 ; =0x0001E4A4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F1C ; =0x0001E4A8\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F20 ; =0x0001E4AC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F24 ; =0x0001E4B0\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F28 ; =0x0001E4B4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F2C ; =0x0001E4BC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F30 ; =0x0001E50C\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F34 ; =0x0001E510\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F38 ; =0x0001E514\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _021E9F3C ; =0x0001E518\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    nop\n    _021E9EE8: .word 0x0001E458\n    _021E9EEC: .word 0x0001E45C\n    _021E9EF0: .word 0x0001E460\n    _021E9EF4: .word 0x0001E464\n    _021E9EF8: .word 0x0001E468\n    _021E9EFC: .word 0x0001E46C\n    _021E9F00: .word 0x0001E470\n    _021E9F04: .word 0x0001E474\n    _021E9F08: .word 0x0001E494\n    _021E9F0C: .word 0x0001E49C\n    _021E9F10: .word 0x0001E498\n    _021E9F14: .word 0x0001E4A0\n    _021E9F18: .word 0x0001E4A4\n    _021E9F1C: .word 0x0001E4A8\n    _021E9F20: .word 0x0001E4AC\n    _021E9F24: .word 0x0001E4B0\n    _021E9F28: .word 0x0001E4B4\n    _021E9F2C: .word 0x0001E4BC\n    _021E9F30: .word 0x0001E50C\n    _021E9F34: .word 0x0001E510\n    _021E9F38: .word 0x0001E514\n    _021E9F3C: .word 0x0001E518"
    );
    #endif
}

void ov112_021E9F40(void) {
    ov112_021E9FA4(4);
}

void ov112_021E9F5C(void) {
    /* Original at 0x021E9F5C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _021E9F98 ; =0x0001E44C\n    add r7, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r2, #0\n    add r4, r3, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r1, _021E9F9C ; =0x0001E448\n    add r2, r6, #0\n    ldr r0, [r5, r1]\n    add r1, #0xc\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    ldr r2, _021E9FA0 ; =0x0001E454\n    str r4, [sp]\n    ldr r2, [r5, r2]\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r3, #0\n    bl ov112_021E9FA4\n    add r0, r6, #0\n    bl String_Delete\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E9F98: .word 0x0001E44C\n    _021E9F9C: .word 0x0001E448\n    _021E9FA0: .word 0x0001E454"
    );
    #endif
}

void ov112_021E9FA4(void) {
    /* Original at 0x021E9FA4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r2, #0\n    ldr r2, _021E9FD4 ; =0x0001EA68\n    lsl r4, r1, #4\n    add r5, r0, r2\n    add r0, r5, r4\n    mov r1, #0\n    add r7, r3, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [sp, #0x28]\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r1, r7, #0\n    add r2, r6, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E9FD4: .word 0x0001EA68"
    );
    #endif
}

void ov112_021E9FD8(void) {
    /* Original at 0x021E9FD8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r2, #0\n    ldr r2, _021EA008 ; =0x0001EA68\n    lsl r4, r1, #4\n    add r5, r0, r2\n    add r0, r5, r4\n    mov r1, #0\n    add r7, r3, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _021EA00C ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r1, r7, #0\n    add r2, r6, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EA008: .word 0x0001EA68\n    _021EA00C: .word 0x00010200"
    );
    #endif
}

void ov112_021EA010(void) {
    /* Original at 0x021EA010 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r2, #0\n    ldr r2, _021EA040 ; =0x0001EBA8\n    lsl r4, r1, #4\n    add r5, r0, r2\n    add r0, r5, r4\n    mov r1, #0\n    add r7, r3, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [sp, #0x28]\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r1, r7, #0\n    add r2, r6, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EA040: .word 0x0001EBA8"
    );
    #endif
}

void ov112_021EA044(void) {
    /* Original at 0x021EA044 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _021EA080 ; =0x0001E44C\n    add r7, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r2, #0\n    add r4, r3, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r1, _021EA084 ; =0x0001E448\n    add r2, r6, #0\n    ldr r0, [r5, r1]\n    add r1, #0xc\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    ldr r2, _021EA088 ; =0x0001E454\n    str r4, [sp]\n    ldr r2, [r5, r2]\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r3, #0\n    bl ov112_021EA010\n    add r0, r6, #0\n    bl String_Delete\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EA080: .word 0x0001E44C\n    _021EA084: .word 0x0001E448\n    _021EA088: .word 0x0001E454"
    );
    #endif
}

void ov112_021EA08C(void) {
    /* Original at 0x021EA08C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _021EA0F4 ; =0x0001E44C\n    add r6, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r2, #0\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    ldr r0, _021EA0F8 ; =0x0001EA68\n    lsl r6, r6, #4\n    add r4, r5, r0\n    ldr r2, _021EA0FC ; =0x000003E2\n    add r0, r4, r6\n    mov r1, #1\n    mov r3, #0xd\n    bl DrawFrameAndWindow2\n    add r0, r4, r6\n    mov r1, #0xff\n    bl FillWindowPixelBuffer\n    ldr r1, _021EA100 ; =0x0001E448\n    add r2, r7, #0\n    ldr r0, [r5, r1]\n    add r1, #0xc\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    ldr r0, _021EA104 ; =0x0001E43C\n    ldr r0, [r5, r0]\n    bl Options_GetTextFrameDelay\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r2, _021EA108 ; =0x0001E454\n    str r3, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r4, r6\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add r4, r0, #0\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EA0F4: .word 0x0001E44C\n    _021EA0F8: .word 0x0001EA68\n    _021EA0FC: .word 0x000003E2\n    _021EA100: .word 0x0001E448\n    _021EA104: .word 0x0001E43C\n    _021EA108: .word 0x0001E454"
    );
    #endif
}

void ov112_021EA10C(void) {
    /* Original at 0x021EA10C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _021EA168 ; =0x0001E44C\n    add r6, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r2, #0\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    ldr r0, _021EA16C ; =0x0001EA68\n    lsl r6, r6, #4\n    add r4, r5, r0\n    ldr r2, _021EA170 ; =0x000003E2\n    add r0, r4, r6\n    mov r1, #1\n    mov r3, #0xd\n    bl DrawFrameAndWindow2\n    add r0, r4, r6\n    mov r1, #0xff\n    bl FillWindowPixelBuffer\n    ldr r1, _021EA174 ; =0x0001E448\n    add r2, r7, #0\n    ldr r0, [r5, r1]\n    add r1, #0xc\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    ldr r2, _021EA178 ; =0x0001E454\n    str r3, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r4, r6\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add r0, r7, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EA168: .word 0x0001E44C\n    _021EA16C: .word 0x0001EA68\n    _021EA170: .word 0x000003E2\n    _021EA174: .word 0x0001E448\n    _021EA178: .word 0x0001E454"
    );
    #endif
}

void ov112_021EA17C(void) {
    WaitingIcon_New();
}

void ov112_021EA19C(void) {
    /* Original at 0x021EA19C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021EA1A4 ; =0x0001EC4C\n    ldr r3, _021EA1A8 ; =sub_0200F450\n    ldr r0, [r0, r1]\n    bx r3\n    _021EA1A4: .word 0x0001EC4C\n    _021EA1A8: .word sub_0200F450"
    );
    #endif
}

void ov112_021EA1AC(void) {
    /* Original at 0x021EA1AC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0x40\n    mov r1, #0x9a\n    bl GF_CreateVramTransferManager\n    add r0, r4, #0\n    bl ov112_021EA230\n    add r0, r4, #0\n    bl ov112_021EA2C4\n    add r0, r4, #0\n    bl ov112_021EA3C0\n    ldr r0, _021EA1F4 ; =0x0001E528\n    ldr r0, [r4, r0]\n    bl SpriteSystem_GetRenderer\n    mov r2, #1\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    bl ov112_021EAB58\n    pop {r4, pc}\n    nop\n    _021EA1F4: .word 0x0001E528"
    );
    #endif
}

void ov112_021EA1F8(void) {
    /* Original at 0x021EA1F8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r6, _021EA228 ; =0x0001E530\n    mov r4, #0\n    add r5, r7, #0\n    ldr r0, [r5, r6]\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0xd9\n    blo _021EA202\n    ldr r1, _021EA22C ; =0x0001E528\n    ldr r0, [r7, r1]\n    add r1, r1, #4\n    ldr r1, [r7, r1]\n    bl SpriteSystem_FreeResourcesAndManager\n    ldr r0, _021EA22C ; =0x0001E528\n    ldr r0, [r7, r0]\n    bl SpriteSystem_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EA228: .word 0x0001E530\n    _021EA22C: .word 0x0001E528"
    );
    #endif
}

void ov112_021EA230(void) {
    /* Original at 0x021EA230 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    ldr r3, _021EA2B0 ; =ov112_021FECAC\n    add r2, sp, #0x34\n    add r4, r0, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #0x9a\n    bl SpriteSystem_Alloc\n    ldr r1, _021EA2B4 ; =0x0001E528\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    bl SpriteManager_New\n    ldr r7, _021EA2B8 ; =0x0001E52C\n    add r2, sp, #0x14\n    ldr r3, _021EA2BC ; =ov112_021FECC4\n    str r0, [r4, r7]\n    ldmia r3!, {r0, r1}\n    add r6, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    ldr r5, _021EA2C0 ; =ov112_021FEC98\n    stmia r2!, {r0, r1}\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r6, #0\n    str r0, [r3]\n    sub r0, r7, #4\n    ldr r0, [r4, r0]\n    mov r3, #0x20\n    bl SpriteSystem_Init\n    sub r1, r7, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0xd9\n    bl SpriteSystem_InitSprites\n    sub r1, r7, #4\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    add r2, sp, #0x34\n    bl SpriteSystem_InitManagerWithCapacities\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EA2B0: .word ov112_021FECAC\n    _021EA2B4: .word 0x0001E528\n    _021EA2B8: .word 0x0001E52C\n    _021EA2BC: .word ov112_021FECC4\n    _021EA2C0: .word ov112_021FEC98"
    );
    #endif
}

void ov112_021EA2C4(void) {
    /* Original at 0x021EA2C4 */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0xf9\n    mov r1, #0x9a\n    bl NARC_New\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021EA3B4 ; =0x0000C226\n    ldr r1, _021EA3B8 ; =0x0001E528\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #7\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _021EA3B4 ; =0x0000C226\n    ldr r1, _021EA3B8 ; =0x0001E528\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #3\n    bl SpriteSystem_LoadPlttResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021EA3B4 ; =0x0000C226\n    ldr r1, _021EA3B8 ; =0x0001E528\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x14\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021EA3B4 ; =0x0000C226\n    ldr r1, _021EA3B8 ; =0x0001E528\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x16\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _021EA3BC ; =0x0000C227\n    ldr r1, _021EA3B8 ; =0x0001E528\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #6\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _021EA3BC ; =0x0000C227\n    ldr r1, _021EA3B8 ; =0x0001E528\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #2\n    bl SpriteSystem_LoadPlttResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021EA3BC ; =0x0000C227\n    ldr r1, _021EA3B8 ; =0x0001E528\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x13\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _021EA3BC ; =0x0000C227\n    ldr r1, _021EA3B8 ; =0x0001E528\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x15\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021EA3B4: .word 0x0000C226\n    _021EA3B8: .word 0x0001E528\n    _021EA3BC: .word 0x0000C227"
    );
    #endif
}

void ov112_021EA3C0(void) {
    /* Original at 0x021EA3C0 */
    /* Requires manual decompilation - 126 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, _021EA4C8 ; =ov112_021FED1C\n    ldr r7, _021EA4CC ; =ov112_021FEC88\n    mov r6, #0\n    str r0, [sp]\n    add r5, r4, #0\n    ldr r0, _021EA4D0 ; =0x0001E528\n    ldr r1, _021EA4D4 ; =0x0001E52C\n    mov r3, #1\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, [sp]\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    ldr r1, _021EA4D8 ; =0x0001E530\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldrb r1, [r7]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPaletteOverride\n    ldr r0, _021EA4D8 ; =0x0001E530\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [sp]\n    add r6, r6, #1\n    add r0, #0x34\n    str r0, [sp]\n    add r5, r5, #4\n    add r7, r7, #1\n    cmp r6, #0x11\n    blo _021EA3CE\n    ldr r0, _021EA4DC ; =0x0001E534\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetPriority\n    cmp r6, #0x75\n    bhs _021EA452\n    lsl r0, r6, #2\n    ldr r7, _021EA4D8 ; =0x0001E530\n    add r5, r4, r0\n    ldr r0, _021EA4D0 ; =0x0001E528\n    ldr r1, _021EA4D4 ; =0x0001E52C\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021EA4E0 ; =ov112_021FF028\n    bl SpriteSystem_NewSprite\n    ldr r1, _021EA4D8 ; =0x0001E530\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetPaletteOverride\n    ldr r0, _021EA4D8 ; =0x0001E530\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r5, r7]\n    mov r1, #2\n    bl ManagedSprite_SetPriority\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, #0x75\n    blo _021EA41C\n    cmp r6, #0xd9\n    bhs _021EA496\n    lsl r0, r6, #2\n    ldr r7, _021EA4D8 ; =0x0001E530\n    add r5, r4, r0\n    ldr r0, _021EA4D0 ; =0x0001E528\n    ldr r1, _021EA4D4 ; =0x0001E52C\n    mov r3, #1\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, _021EA4E4 ; =ov112_021FF05C\n    lsl r3, r3, #0x14\n    bl SpriteSystem_NewSpriteWithYOffset\n    ldr r1, _021EA4D8 ; =0x0001E530\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetPaletteOverride\n    ldr r0, _021EA4D8 ; =0x0001E530\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r5, r7]\n    mov r1, #2\n    bl ManagedSprite_SetPriority\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, #0xd9\n    blo _021EA45C\n    add r0, r4, #0\n    bl ov112_021EA984\n    ldr r0, _021EA4E8 ; =0x0001E550\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawPriority\n    ldr r0, _021EA4E8 ; =0x0001E550\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAffineOverwriteMode\n    ldr r0, _021EA4EC ; =0x0001E53C\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnimateFlag\n    ldr r0, _021EA4F0 ; =0x0001E540\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnimateFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EA4C8: .word ov112_021FED1C\n    _021EA4CC: .word ov112_021FEC88\n    _021EA4D0: .word 0x0001E528\n    _021EA4D4: .word 0x0001E52C\n    _021EA4D8: .word 0x0001E530\n    _021EA4DC: .word 0x0001E534\n    _021EA4E0: .word ov112_021FF028\n    _021EA4E4: .word ov112_021FF05C\n    _021EA4E8: .word 0x0001E550\n    _021EA4EC: .word 0x0001E53C\n    _021EA4F0: .word 0x0001E540"
    );
    #endif
}

void ov112_021EA4F4(void) {
    /* Original at 0x021EA4F4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EA518 ; =0x0001E530\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnimateFlag\n    ldr r0, _021EA518 ; =0x0001E530\n    mov r1, #8\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnim\n    ldr r0, _021EA518 ; =0x0001E530\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, pc}\n    _021EA518: .word 0x0001E530"
    );
    #endif
}

void ov112_021EA51C(void) {
    /* Original at 0x021EA51C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    lsl r4, r1, #2\n    ldr r1, _021EA55C ; =ov112_021FECE4\n    ldr r2, _021EA560 ; =ov112_021FECE5\n    add r5, r0, #0\n    ldr r0, _021EA564 ; =0x0001E530\n    mov r3, #1\n    ldrb r1, [r1, r4]\n    ldrb r2, [r2, r4]\n    ldr r0, [r5, r0]\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r1, _021EA568 ; =ov112_021FECE6\n    ldr r0, _021EA564 ; =0x0001E530\n    ldrb r1, [r1, r4]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetAnim\n    ldr r1, _021EA56C ; =ov112_021FECE7\n    ldr r0, _021EA564 ; =0x0001E530\n    ldrb r1, [r1, r4]\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetPaletteOverride\n    ldr r0, _021EA564 ; =0x0001E530\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    nop\n    _021EA55C: .word ov112_021FECE4\n    _021EA560: .word ov112_021FECE5\n    _021EA564: .word 0x0001E530\n    _021EA568: .word ov112_021FECE6\n    _021EA56C: .word ov112_021FECE7"
    );
    #endif
}

void ov112_021EA570(void) {
    /* Original at 0x021EA570 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021EA57C ; =0x0001E530\n    ldr r3, _021EA580 ; =ManagedSprite_SetDrawFlag\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bx r3\n    nop\n    _021EA57C: .word 0x0001E530\n    _021EA580: .word ManagedSprite_SetDrawFlag"
    );
    #endif
}

void ov112_021EA584(void) {
    /* Original at 0x021EA584 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EA5A0 ; =0x0001E530\n    ldr r0, [r4, r0]\n    bl ManagedSprite_GetActiveAnim\n    add r1, r0, #0\n    ldr r0, _021EA5A0 ; =0x0001E530\n    add r1, r1, #3\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnim\n    pop {r4, pc}\n    nop\n    _021EA5A0: .word 0x0001E530"
    );
    #endif
}

void ov112_021EA5A4(void) {
    /* Original at 0x021EA5A4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021EA604 ; =0x0001E534\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    ldr r0, _021EA604 ; =0x0001E534\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawFlag\n    cmp r4, #0\n    bne _021EA5CE\n    ldr r0, _021EA608 ; =0x0001E538\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}\n    ble _021EA602\n    ldr r0, _021EA604 ; =0x0001E534\n    mov r1, #2\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawPriority\n    ldr r0, _021EA608 ; =0x0001E538\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawPriority\n    ldr r0, _021EA608 ; =0x0001E538\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021EA608 ; =0x0001E538\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetAnim\n    ldr r0, _021EA608 ; =0x0001E538\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetAnimateFlag\n    pop {r3, r4, r5, pc}\n    _021EA604: .word 0x0001E534\n    _021EA608: .word 0x0001E538"
    );
    #endif
}

void ov112_021EA60C(void) {
    /* Original at 0x021EA60C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _021EA648 ; =0x0001E538\n    ldr r5, [r4, r0]\n    bl ov112_021E7668\n    cmp r0, #0\n    beq _021EA632\n    add r0, r5, #0\n    bl ManagedSprite_GetActiveAnim\n    cmp r0, #2\n    bne _021EA646\n    ldr r0, _021EA648 ; =0x0001E538\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnim\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ManagedSprite_GetActiveAnim\n    cmp r0, #1\n    bne _021EA646\n    ldr r0, _021EA648 ; =0x0001E538\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnim\n    pop {r3, r4, r5, pc}\n    _021EA648: .word 0x0001E538"
    );
    #endif
}

void ov112_021EA64C(void) {
    /* Original at 0x021EA64C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EA668 ; =0x0001E534\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021EA66C ; =0x0001E538\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, pc}\n    nop\n    _021EA668: .word 0x0001E534\n    _021EA66C: .word 0x0001E538"
    );
    #endif
}

void ov112_021EA670(void) {
    /* Original at 0x021EA670 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    ldr r0, _021EA680 ; =0x0001E530\n    ldr r3, _021EA684 ; =ManagedSprite_SetDrawFlag\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bx r3\n    nop\n    _021EA680: .word 0x0001E530\n    _021EA684: .word ManagedSprite_SetDrawFlag"
    );
    #endif
}

void ov112_021EA688(void) {
    /* Original at 0x021EA688 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    ldr r0, _021EA698 ; =0x0001E530\n    ldr r3, _021EA69C ; =ManagedSprite_SetDrawFlag\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bx r3\n    nop\n    _021EA698: .word 0x0001E530\n    _021EA69C: .word ManagedSprite_SetDrawFlag"
    );
    #endif
}

void ov112_021EA6A0(void) {
    /* Original at 0x021EA6A0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #2\n    add r1, r0, r1\n    ldr r0, _021EA6B0 ; =0x0001E530\n    ldr r3, _021EA6B4 ; =ManagedSprite_SetAnim\n    ldr r0, [r1, r0]\n    add r1, r2, #0\n    bx r3\n    nop\n    _021EA6B0: .word 0x0001E530\n    _021EA6B4: .word ManagedSprite_SetAnim"
    );
    #endif
}

void ov112_021EA6B8(void) {
    ManagedSprite_SetPositionXYWithSubscreenOffset(1);
}

void ov112_021EA6D8(void) {
    /* Original at 0x021EA6D8 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r2, [sp]\n    ldr r2, [sp, #0x18]\n    add r5, r0, #0\n    add r4, r1, #0\n    add r1, r3, #0\n    cmp r2, #0\n    ldr r0, _021EA768 ; =0x0001E530\n    bge _021EA72A\n    add r6, r5, r0\n    add r0, r4, #0\n    add r0, #0x75\n    lsl r7, r0, #2\n    add r2, #0xd0\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    mov r3, #1\n    ldr r0, [r6, r7]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r1, [sp]\n    ldr r0, [r6, r7]\n    add r1, r1, #4\n    bl ManagedSprite_SetAnim\n    ldr r0, [r6, r7]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r4, #0x11\n    lsl r0, r4, #2\n    add r1, r5, r0\n    ldr r0, _021EA768 ; =0x0001E530\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    add r6, r5, r0\n    add r0, r4, #0\n    add r0, #0x11\n    lsl r7, r0, #2\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r6, r7]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r1, [sp]\n    ldr r0, [r6, r7]\n    add r1, #0x13\n    str r1, [sp]\n    bl ManagedSprite_SetAnim\n    add r4, #0x75\n    lsl r0, r4, #2\n    add r1, r5, r0\n    ldr r0, _021EA768 ; =0x0001E530\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r6, r7]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EA768: .word 0x0001E530"
    );
    #endif
}

void ov112_021EA76C(void) {
    /* Original at 0x021EA76C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EA7CC ; =0x0001EC80\n    add r0, r4, r0\n    bl ov112_021EA9A0\n    cmp r0, #0\n    blt _021EA7C8\n    ldr r1, _021EA7CC ; =0x0001EC80\n    add r2, r4, r1\n    lsl r1, r0, #4\n    mov r0, #1\n    add r4, r2, r1\n    strb r0, [r2, r1]\n    bl MTRandom\n    mov r1, #6\n    bl _u32_div_f\n    add r0, r1, #2\n    strb r0, [r4, #3]\n    bl MTRandom\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    bl _u32_div_f\n    strh r1, [r4, #0xc]\n    mov r0, #0x80\n    strh r0, [r4, #4]\n    mov r0, #0x74\n    strh r0, [r4, #6]\n    bl MTRandom\n    mov r1, #0x28\n    bl _u32_div_f\n    add r1, #0x28\n    strb r1, [r4, #2]\n    bl MTRandom\n    mov r1, #0x3c\n    bl _u32_div_f\n    add r1, #0x78\n    strh r1, [r4, #0xe]\n    pop {r4, pc}\n    nop\n    _021EA7CC: .word 0x0001EC80"
    );
    #endif
}

void ov112_021EA7D0(void) {
    /* Original at 0x021EA7D0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EA834 ; =0x0001EC80\n    add r0, r4, r0\n    bl ov112_021EA9A0\n    cmp r0, #0\n    blt _021EA832\n    ldr r1, _021EA834 ; =0x0001EC80\n    add r2, r4, r1\n    lsl r1, r0, #4\n    mov r0, #1\n    add r4, r2, r1\n    strb r0, [r2, r1]\n    bl MTRandom\n    mov r1, #5\n    bl _u32_div_f\n    mov r0, #0\n    add r1, r1, #5\n    mvn r0, r0\n    mul r0, r1\n    strb r0, [r4, #3]\n    bl MTRandom\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    bl _u32_div_f\n    strh r1, [r4, #0xc]\n    mov r0, #0x80\n    strh r0, [r4, #4]\n    sub r0, #0xed\n    strh r0, [r4, #6]\n    bl MTRandom\n    mov r1, #0x28\n    bl _u32_div_f\n    add r1, #0x28\n    strb r1, [r4, #2]\n    bl MTRandom\n    mov r1, #0x3c\n    bl _u32_div_f\n    add r1, #0x78\n    strh r1, [r4, #0xe]\n    pop {r4, pc}\n    _021EA834: .word 0x0001EC80"
    );
    #endif
}

void ov112_021EA838(void) {
    /* Original at 0x021EA838 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r1, _021EA860 ; =0x0001EC80\n    mov r3, #0\n    add r4, r0, r1\n    add r2, r3, #0\n    mov r0, #0xe\n    ldrb r1, [r4]\n    cmp r1, #0\n    beq _021EA852\n    ldrsh r1, [r4, r0]\n    add r3, r3, #1\n    sub r1, #0x14\n    strh r1, [r4, #0xe]\n    add r2, r2, #1\n    add r4, #0x10\n    cmp r2, #0x64\n    blt _021EA844\n    add r0, r3, #0\n    pop {r3, r4}\n    bx lr\n    _021EA860: .word 0x0001EC80"
    );
    #endif
}

void ov112_021EA864(void) {
    /* Original at 0x021EA864 */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r1, _021EA978 ; =0x0001EC80\n    str r0, [sp, #4]\n    mov r6, #0\n    add r4, r0, r1\n    add r5, r0, #0\n    mov r0, #2\n    ldrsb r1, [r4, r0]\n    mov r0, #6\n    ldrsh r0, [r4, r0]\n    add r0, #0xb4\n    mul r0, r1\n    mov r1, #5\n    lsl r1, r1, #6\n    bl _s32_div_f\n    add r7, r0, #0\n    ldrb r0, [r4]\n    cmp r0, #0\n    beq _021EA968\n    ldrh r0, [r4, #0xc]\n    bl GF_SinDeg\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    bl _s32_div_f\n    strh r0, [r4, #0xa]\n    ldrh r0, [r4, #0xc]\n    bl GF_CosDeg\n    add r1, r7, #0\n    mul r1, r0\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    strh r0, [r4, #8]\n    ldrh r0, [r4, #0xc]\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    add r0, #0xa\n    strh r0, [r4, #0xc]\n    ldrh r0, [r4, #0xc]\n    bl _s32_div_f\n    add r0, r1, #0\n    mov r1, #0x49\n    bl _s32_div_f\n    add r2, r0, #0\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    mov r0, #0xa\n    ldrsh r0, [r4, r0]\n    mov r3, #4\n    add r0, r1, r0\n    str r0, [sp]\n    ldrsh r7, [r4, r3]\n    mov r3, #8\n    ldrsh r3, [r4, r3]\n    ldr r0, [sp, #4]\n    add r1, r6, #0\n    add r3, r7, r3\n    bl ov112_021EA6D8\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    mov r0, #3\n    ldrsb r0, [r4, r0]\n    sub r0, r1, r0\n    strh r0, [r4, #6]\n    mov r0, #0xe\n    ldrsh r0, [r4, r0]\n    sub r0, r0, #1\n    strh r0, [r4, #0xe]\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    sub r0, #0x74\n    cmp r1, r0\n    blt _021EA914\n    mov r0, #0xe\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    blt _021EA914\n    cmp r1, #0xa0\n    ble _021EA92C\n    mov r0, #0\n    strb r0, [r4]\n    ldr r0, _021EA97C ; =0x0001E704\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021EA980 ; =0x0001E574\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldrh r0, [r4, #0xc]\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    bl _s32_div_f\n    cmp r1, #0\n    blt _021EA954\n    cmp r1, #0xb4\n    bgt _021EA954\n    ldr r0, _021EA97C ; =0x0001E704\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawPriority\n    ldr r0, _021EA980 ; =0x0001E574\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawPriority\n    b _021EA968\n    ldr r0, _021EA97C ; =0x0001E704\n    mov r1, #3\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawPriority\n    ldr r0, _021EA980 ; =0x0001E574\n    mov r1, #3\n    ldr r0, [r5, r0]\n    bl ManagedSprite_SetDrawPriority\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, r5, #4\n    cmp r6, #0x64\n    bge _021EA974\n    b _021EA872\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EA978: .word 0x0001EC80\n    _021EA97C: .word 0x0001E704\n    _021EA980: .word 0x0001E574"
    );
    #endif
}

void ov112_021EA984(void) {
    /* Original at 0x021EA984 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021EA99C ; =0x0001EC80\n    mov r2, #0\n    add r1, r0, r1\n    add r0, r2, #0\n    strb r0, [r1]\n    strh r0, [r1, #0xe]\n    add r2, r2, #1\n    add r1, #0x10\n    cmp r2, #0x64\n    blt _021EA98C\n    bx lr\n    nop\n    _021EA99C: .word 0x0001EC80"
    );
    #endif
}

void ov112_021EA9A0(void) {
    /* Original at 0x021EA9A0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    ldrb r1, [r0]\n    cmp r1, #0\n    bne _021EA9AC\n    add r0, r2, #0\n    bx lr\n    add r2, r2, #1\n    add r0, #0x10\n    cmp r2, #0x64\n    blt _021EA9A2\n    mov r0, #0\n    mvn r0, r0\n    bx lr"
    );
    #endif
}

void ov112_021EA9BC(void) {
    /* Original at 0x021EA9BC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #6\n    ldrsh r0, [r1, r0]\n    cmp r0, #0\n    bge _021EA9D4\n    ldr r0, _021EAA08 ; =0x0001E568\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    b _021EA9DE\n    ldr r0, _021EAA0C ; =0x0001E564\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021EAA08 ; =0x0001E568\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnimateFlag\n    ldr r0, _021EAA0C ; =0x0001E564\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnimateFlag\n    ldr r0, _021EAA08 ; =0x0001E568\n    mov r1, #0xa\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnim\n    ldr r0, _021EAA0C ; =0x0001E564\n    mov r1, #0x18\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnim\n    pop {r4, pc}\n    _021EAA08: .word 0x0001E568\n    _021EAA0C: .word 0x0001E564"
    );
    #endif
}

void ov112_021EAA10(void) {
    /* Original at 0x021EAA10 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EAA2C ; =0x0001E568\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021EAA30 ; =0x0001E564\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, pc}\n    nop\n    _021EAA2C: .word 0x0001E568\n    _021EAA30: .word 0x0001E564"
    );
    #endif
}

void ov112_021EAA34(void) {
    /* Original at 0x021EAA34 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r2, #0\n    bge _021EAA68\n    ldr r0, _021EAA90 ; =0x0001E568\n    add r2, #0xd0\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    mov r3, #1\n    ldr r0, [r4, r0]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    lsl r3, r3, #0x14\n    bl ManagedSprite_SetPositionXYWithSubscreenOffset\n    ldr r0, _021EAA90 ; =0x0001E568\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021EAA94 ; =0x0001E564\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, pc}\n    ldr r0, _021EAA94 ; =0x0001E564\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    ldr r0, [r4, r0]\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    ldr r0, _021EAA94 ; =0x0001E564\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021EAA90 ; =0x0001E568\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    pop {r4, pc}\n    nop\n    _021EAA90: .word 0x0001E568\n    _021EAA94: .word 0x0001E564"
    );
    #endif
}

void ov112_021EAA98(void) {
    /* Original at 0x021EAA98 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "cmp r2, #0\n    bne _021EAAAE\n    mov r2, #0x80\n    strh r2, [r1, #4]\n    mov r2, #0x82\n    strh r2, [r1, #6]\n    sub r2, #0x8c\n    strb r2, [r1, #2]\n    mov r2, #0\n    strh r2, [r1, #0xe]\n    b _021EAAD6\n    cmp r2, #1\n    bne _021EAAC4\n    mov r2, #0x80\n    strh r2, [r1, #4]\n    sub r2, #0xee\n    strh r2, [r1, #6]\n    mov r2, #0xa\n    strb r2, [r1, #2]\n    mov r2, #0\n    strh r2, [r1, #0xe]\n    b _021EAAD6\n    cmp r2, #2\n    bne _021EAAD6\n    mov r2, #0x80\n    strh r2, [r1, #4]\n    mov r2, #0x82\n    strh r2, [r1, #6]\n    mov r2, #0\n    strb r2, [r1, #2]\n    strh r2, [r1, #0xe]\n    mov r2, #0\n    strh r2, [r1, #8]\n    ldr r3, _021EAAE0 ; =ov112_021EA9BC\n    strh r2, [r1, #0xa]\n    bx r3\n    _021EAAE0: .word ov112_021EA9BC"
    );
    #endif
}

void ov112_021EAAE4(void) {
    /* Original at 0x021EAAE4 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r2, r1, #0\n    mov r1, #2\n    ldrsb r4, [r2, r1]\n    cmp r4, #0\n    bge _021EAB14\n    mov r1, #6\n    ldrsh r3, [r2, r1]\n    add r3, r3, r4\n    strh r3, [r2, #6]\n    ldrsh r3, [r2, r1]\n    sub r1, #0x74\n    cmp r3, r1\n    bge _021EAB04\n    mov r1, #0\n    strb r1, [r2, #2]\n    mov r1, #4\n    mov r3, #6\n    ldrsh r1, [r2, r1]\n    ldrsh r2, [r2, r3]\n    bl ov112_021EAA34\n    mov r0, #0\n    pop {r4, pc}\n    ble _021EAB3C\n    cmp r4, #0x64\n    bgt _021EAB3C\n    mov r1, #6\n    ldrsh r3, [r2, r1]\n    add r3, r3, r4\n    strh r3, [r2, #6]\n    ldrsh r1, [r2, r1]\n    cmp r1, #0x6c\n    ble _021EAB2C\n    mov r1, #0x65\n    strb r1, [r2, #2]\n    mov r1, #4\n    mov r3, #6\n    ldrsh r1, [r2, r1]\n    ldrsh r2, [r2, r3]\n    bl ov112_021EAA34\n    mov r0, #0\n    pop {r4, pc}\n    cmp r4, #0\n    beq _021EAB50\n    mov r1, #4\n    mov r3, #6\n    ldrsh r1, [r2, r1]\n    ldrsh r2, [r2, r3]\n    bl ov112_021EAA34\n    mov r0, #0\n    pop {r4, pc}\n    bl ov112_021EAA10\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EAB58(void) {
    /* Original at 0x021EAB58 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #8\n    bl sub_02074490\n    add r1, r0, #0\n    mov r0, #0x60\n    str r0, [sp]\n    mov r0, #0x9a\n    str r0, [sp, #4]\n    mov r0, #0x14\n    mov r2, #1\n    mov r3, #0xa0\n    bl GfGfxLoader_GXLoadPal\n    add sp, #8\n    pop {r3, pc}"
    );
    #endif
}

void ov112_021EAB78(void) {
    /* Original at 0x021EAB78 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r2, #0\n    add r7, r3, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r7, #0\n    bl GetMonIconNaixEx\n    ldr r3, _021EABDC ; =0x0001EA64\n    add r1, r0, #0\n    mov r0, #0x9a\n    str r0, [sp]\n    mov r0, #0x14\n    mov r2, #0\n    add r3, r5, r3\n    bl GfGfxLoader_GetCharData\n    ldr r1, _021EABE0 ; =0x0001EA60\n    str r0, [r5, r1]\n    add r0, r1, #4\n    ldr r0, [r5, r0]\n    mov r1, #1\n    ldr r0, [r0, #0x14]\n    lsl r1, r1, #0xa\n    bl DC_FlushRange\n    str r4, [sp]\n    add r4, #9\n    lsl r0, r4, #2\n    add r1, r5, r0\n    ldr r0, _021EABE4 ; =0x0001E530\n    add r2, r7, #0\n    ldr r0, [r1, r0]\n    add r1, r6, #0\n    str r0, [sp, #4]\n    ldr r0, _021EABDC ; =0x0001EA64\n    mov r3, #0\n    ldr r0, [r5, r0]\n    bl ov112_021EABE8\n    ldr r0, _021EABE0 ; =0x0001EA60\n    ldr r0, [r5, r0]\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EABDC: .word 0x0001EA64\n    _021EABE0: .word 0x0001EA60\n    _021EABE4: .word 0x0001E530"
    );
    #endif
}

void ov112_021EABE8(void) {
    /* Original at 0x021EABE8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    ldr r1, [sp, #0x10]\n    add r4, r2, #0\n    lsl r1, r1, #5\n    add r1, #0xc0\n    mov r2, #1\n    ldr r0, [r0, #0x14]\n    add r6, r3, #0\n    lsl r1, r1, #5\n    lsl r2, r2, #0xa\n    bl GX_LoadOBJ\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl GetMonIconPaletteEx\n    add r1, r0, #0\n    ldr r0, [sp, #0x14]\n    add r1, r1, #5\n    bl ManagedSprite_SetPaletteOverride\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov112_021EAC18(void) {
    /* Original at 0x021EAC18 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021EAC30 ; =0x00000497\n    mov r0, #0x49\n    mov r2, #0\n    bl Sound_SetSceneAndPlayBGM\n    ldr r0, _021EAC30 ; =0x00000497\n    bl PlayBGM\n    mov r0, #2\n    pop {r3, pc}\n    nop\n    _021EAC30: .word 0x00000497"
    );
    #endif
}

void ov112_021EAC34(void) {
    /* Original at 0x021EAC34 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    lsl r2, r1, #2\n    ldr r1, _021EAC54 ; =ov112_021FF6C4\n    ldr r1, [r1, r2]\n    blx r1\n    str r0, [r4, #8]\n    cmp r0, #0x1b\n    bne _021EAC50\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    _021EAC54: .word ov112_021FF6C4"
    );
    #endif
}

u8 ov112_021EAC58(void) {
    return 1;
}

void ov112_021EAC5C(void) {
    /* Original at 0x021EAC5C */
    /* Requires manual decompilation - 159 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    bl SaveArray_PCStorage_Get\n    add r4, r0, #0\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x9a\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    add r0, r4, #0\n    bl PCStorage_CountEmptySpotsInAllBoxes\n    cmp r0, #5\n    bge _021EACA0\n    add r0, r5, #0\n    mov r1, #3\n    bl ov112_021E9C10\n    add r0, r5, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    add sp, #0x14\n    mov r0, #0x14\n    pop {r4, r5, pc}\n    add r0, r4, #0\n    bl PCStorage_CountMonsInAllBoxes\n    cmp r0, #0\n    bne _021EACCC\n    ldr r0, _021EADC8 ; =0x0001E440\n    ldr r0, [r5, r0]\n    bl sub_0203263C\n    cmp r0, #0\n    bne _021EACCC\n    add r0, r5, #0\n    mov r1, #3\n    bl ov112_021E9C10\n    add r0, r5, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    add sp, #0x14\n    mov r0, #0x17\n    pop {r4, r5, pc}\n    ldr r0, _021EADC8 ; =0x0001E440\n    add r1, sp, #0x10\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #0x10\n    bl sub_02032688\n    add r0, sp, #0x10\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _021EACEC\n    cmp r0, #1\n    beq _021EAD3A\n    cmp r0, #2\n    beq _021EAD82\n    b _021EADC2\n    mov r1, #3\n    ldr r0, _021EADCC ; =0x0001D77C\n    str r1, [r5, #4]\n    mov r2, #0\n    strh r2, [r5, r0]\n    add r0, r5, #0\n    str r2, [r5, #0x10]\n    bl ov112_021E9C10\n    add r0, r5, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    ldr r0, _021EADC8 ; =0x0001E440\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    bl sub_020326A4\n    add sp, #0x14\n    mov r0, #4\n    pop {r4, r5, pc}\n    ldr r0, _021EADCC ; =0x0001D77C\n    mov r1, #0\n    strh r1, [r5, r0]\n    str r1, [r5, #0x10]\n    add r0, r5, #0\n    mov r1, #3\n    bl ov112_021E9C10\n    add r0, r5, #0\n    mov r1, #7\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add r0, r5, #0\n    mov r1, #0\n    bl ov112_021EADD0\n    add sp, #0x14\n    mov r0, #0xf\n    pop {r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #3\n    bl ov112_021E9C10\n    add r0, r5, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add r0, r5, #0\n    mov r1, #1\n    bl ov112_021EADD0\n    add sp, #0x14\n    mov r0, #0xa\n    pop {r4, r5, pc}\n    mov r0, #1\n    add sp, #0x14\n    pop {r4, r5, pc}\n    _021EADC8: .word 0x0001E440\n    _021EADCC: .word 0x0001D77C"
    );
    #endif
}

void ov112_021EADD0(void) {
    /* Original at 0x021EADD0 */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _021EAF28 ; =0x0001E440\n    add r6, r1, #0\n    ldr r0, [r5, r0]\n    add r1, sp, #0xc\n    add r2, sp, #8\n    bl sub_02032674\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021EAF2C ; =0x0001E448\n    mov r1, #7\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #8]\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021EAF2C ; =0x0001E448\n    ldr r2, [sp, #0xc]\n    ldr r0, [r5, r0]\n    mov r1, #6\n    mov r3, #7\n    bl BufferIntegerAsString\n    ldr r1, [sp, #8]\n    add r0, r5, #0\n    bl ov112_021E9610\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021EAF2C ; =0x0001E448\n    mov r1, #0xc\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    mov r3, #7\n    bl BufferIntegerAsString\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0x10\n    bl ov112_021E7CA4\n    add r0, r5, #0\n    mov r1, #1\n    bl ov112_021E98E8\n    ldr r0, _021EAF30 ; =0x0001F2E0\n    mov r3, #0\n    strh r3, [r5, r0]\n    ldr r0, _021EAF34 ; =0x00010200\n    ldr r2, _021EAF38 ; =0x0001E50C\n    str r0, [sp]\n    ldr r2, [r5, r2]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov112_021EA010\n    ldr r3, _021EAF34 ; =0x00010200\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0x53\n    bl ov112_021EA044\n    ldr r0, _021EAF34 ; =0x00010200\n    ldr r2, _021EAF3C ; =0x0001E510\n    str r0, [sp]\n    ldr r2, [r5, r2]\n    add r0, r5, #0\n    mov r1, #3\n    mov r3, #0\n    bl ov112_021EA010\n    ldr r3, _021EAF34 ; =0x00010200\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #0x54\n    bl ov112_021EA044\n    cmp r4, #0\n    ldr r3, _021EAF34 ; =0x00010200\n    bge _021EAE94\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x58\n    bl ov112_021EA044\n    b _021EAEAE\n    cmp r4, #0\n    bne _021EAEA4\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x57\n    bl ov112_021EA044\n    b _021EAEAE\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x56\n    bl ov112_021EA044\n    cmp r6, #0\n    beq _021EAF04\n    mov r0, #0x9a\n    bl AllocMonZeroed\n    add r6, r0, #0\n    bl Mon_GetBoxMon\n    add r4, r0, #0\n    ldr r0, _021EAF28 ; =0x0001E440\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Pokewalker_TryGetBoxMon\n    ldr r0, _021EAF2C ; =0x0001E448\n    mov r1, #0xd\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl BufferBoxMonNickname\n    mov r3, #0xc1\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0x59\n    lsl r3, r3, #0xa\n    bl ov112_021EA044\n    ldr r2, _021EAF40 ; =0x0001D7AC\n    add r0, r4, #0\n    add r1, r5, r2\n    sub r2, #0x10\n    add r2, r5, r2\n    mov r3, #1\n    bl ov112_021E9290\n    add r0, r5, #0\n    mov r1, #7\n    bl ov112_021EA670\n    add r0, r6, #0\n    bl Heap_Free\n    b _021EAF1E\n    add r0, r5, #0\n    mov r1, #7\n    bl ov112_021EA688\n    ldr r0, _021EAF44 ; =0x0001EBF8\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EAF44 ; =0x0001EBF8\n    add r0, r5, r0\n    bl CopyWindowToVram\n    add r0, r5, #0\n    bl ov112_021EA64C\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _021EAF28: .word 0x0001E440\n    _021EAF2C: .word 0x0001E448\n    _021EAF30: .word 0x0001F2E0\n    _021EAF34: .word 0x00010200\n    _021EAF38: .word 0x0001E50C\n    _021EAF3C: .word 0x0001E510\n    _021EAF40: .word 0x0001D7AC\n    _021EAF44: .word 0x0001EBF8"
    );
    #endif
}

void ov112_021EAF48(void) {
    IsPaletteFadeFinished();
}

void ov112_021EAF5C(void) {
    /* Original at 0x021EAF5C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r1, #1\n    bl ov112_021E9C10\n    add r0, r5, #0\n    mov r1, #3\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0x11\n    bl ov112_021E7CA4\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0x17\n    bl ov112_021E7CA4\n    ldr r7, _021EAFEC ; =0x000F0100\n    mov r4, #0\n    ldr r0, _021EAFF0 ; =0x0001E44C\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    add r1, #0x98\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #4\n    str r7, [sp]\n    bl ov112_021E9FA4\n    add r0, r6, #0\n    bl String_Delete\n    add r4, r4, #1\n    cmp r4, #4\n    blt _021EAFA2\n    add r0, r5, #0\n    mov r1, #6\n    bl ov112_021E9F40\n    ldr r1, _021EAFF4 ; =0x0001EC50\n    mov r0, #0\n    str r0, [r5, r1]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    lsl r2, r1, #2\n    ldr r1, _021EAFF8 ; =ov112_021FF0AC\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    mov r0, #3\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EAFEC: .word 0x000F0100\n    _021EAFF0: .word 0x0001E44C\n    _021EAFF4: .word 0x0001EC50\n    _021EAFF8: .word ov112_021FF0AC"
    );
    #endif
}

void ov112_021EAFFC(void) {
    /* Original at 0x021EAFFC */
    /* Requires manual decompilation - 204 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r1, _021EB1C4 ; =gSystem\n    add r4, r0, #0\n    ldr r2, [r1, #0x48]\n    mov r1, #0x40\n    tst r1, r2\n    beq _021EB02A\n    ldr r0, _021EB1C8 ; =0x0001EC50\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    ble _021EB018\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, _021EB1C8 ; =0x0001EC50\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _021EB1CC ; =ov112_021FF0AC\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    b _021EB1BE\n    mov r1, #0x80\n    tst r1, r2\n    beq _021EB04E\n    ldr r0, _021EB1C8 ; =0x0001EC50\n    ldr r1, [r4, r0]\n    cmp r1, #5\n    bge _021EB03C\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, _021EB1C8 ; =0x0001EC50\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _021EB1CC ; =ov112_021FF0AC\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    b _021EB1BE\n    mov r1, #1\n    tst r2, r1\n    beq _021EB05C\n    ldr r2, _021EB1C8 ; =0x0001EC50\n    ldr r2, [r4, r2]\n    cmp r2, #4\n    bls _021EB05E\n    b _021EB1BE\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _021EB06A: ; jump table\n    mov r0, #2\n    str r0, [r4, #4]\n    ldr r0, _021EB1D0 ; =0x0001E440\n    mov r1, #0\n    ldr r0, [r4, r0]\n    add r2, r1, #0\n    bl sub_020326A4\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    mov r0, #0x1a\n    pop {r4, pc}\n    mov r1, #3\n    ldr r2, _021EB1D4 ; =0x0001D77C\n    str r1, [r4, #4]\n    mov r3, #0\n    strh r3, [r4, r2]\n    str r3, [r4, #0x10]\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    ldr r0, _021EB1D0 ; =0x0001E440\n    mov r1, #0\n    ldr r0, [r4, r0]\n    add r2, r1, #0\n    bl sub_020326A4\n    add sp, #0x10\n    mov r0, #4\n    pop {r4, pc}\n    ldr r0, _021EB1D0 ; =0x0001E440\n    add r2, r1, #0\n    ldr r0, [r4, r0]\n    bl sub_020326A4\n    ldr r0, _021EB1D4 ; =0x0001D77C\n    mov r1, #0\n    strh r1, [r4, r0]\n    str r1, [r4, #0x10]\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #7\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    mov r0, #0xf\n    pop {r4, pc}\n    mov r1, #3\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    mov r0, #0xa\n    pop {r4, pc}\n    mov r1, #3\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    mov r0, #0xf\n    pop {r4, pc}\n    mov r0, #3\n    add sp, #0x10\n    pop {r4, pc}\n    _021EB1C4: .word gSystem\n    _021EB1C8: .word 0x0001EC50\n    _021EB1CC: .word ov112_021FF0AC\n    _021EB1D0: .word 0x0001E440\n    _021EB1D4: .word 0x0001D77C"
    );
    #endif
}

void ov112_021EB1D8(void) {
    ov112_021EC460();
}

void ov112_021EB1E8(void) {
    TextPrinterCheckActive(5, 7);
}

void ov112_021EB208(void) {
    /* Original at 0x021EB208 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #8\n    mov r3, #7\n    bl ov112_021EC460\n    mov r0, #0x18\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EB244(void) {
    /* Original at 0x021EB244 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #2\n    mov r2, #0xa\n    add r4, r0, #0\n    bl ov112_021E7CA4\n    ldr r0, _021EB280 ; =0x000F0100\n    ldr r2, _021EB284 ; =0x0001E46C\n    str r0, [sp]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #4\n    bl ov112_021E9FA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    ldr r0, _021EB288 ; =0x0001EC50\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA51C\n    mov r0, #8\n    add sp, #4\n    pop {r3, r4, pc}\n    _021EB280: .word 0x000F0100\n    _021EB284: .word 0x0001E46C\n    _021EB288: .word 0x0001EC50"
    );
    #endif
}

void ov112_021EB28C(void) {
    /* Original at 0x021EB28C */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    bl ov112_021E9888\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _021EB2B4\n    add r0, r4, #0\n    add r2, r1, #2\n    mov r3, #9\n    bl ov112_021EC440\n    ldr r0, _021EB378 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x19\n    pop {r4, pc}\n    ldr r0, _021EB37C ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _021EB2DC\n    ldr r0, _021EB380 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021EB2CC\n    ldr r0, _021EB384 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA51C\n    ldr r0, _021EB380 ; =0x0001EC50\n    mov r1, #0\n    str r1, [r4, r0]\n    b _021EB372\n    mov r1, #0x80\n    tst r1, r0\n    beq _021EB300\n    ldr r0, _021EB380 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    beq _021EB2F0\n    ldr r0, _021EB384 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EA51C\n    ldr r0, _021EB380 ; =0x0001EC50\n    mov r1, #1\n    str r1, [r4, r0]\n    b _021EB372\n    mov r1, #1\n    tst r1, r0\n    beq _021EB31E\n    ldr r0, _021EB378 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _021EB380 ; =0x0001EC50\n    mov r3, #9\n    ldr r1, [r4, r0]\n    add r0, r4, #0\n    add r2, r1, #2\n    bl ov112_021EC440\n    mov r0, #0x19\n    pop {r4, pc}\n    mov r1, #2\n    tst r0, r1\n    beq _021EB33A\n    ldr r0, _021EB378 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    mov r3, #9\n    bl ov112_021EC440\n    mov r0, #0x19\n    pop {r4, pc}\n    bl ov112_021EB9C0\n    cmp r0, #0\n    beq _021EB354\n    ldr r0, _021EB384 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EB90C\n    mov r0, #0x1a\n    pop {r4, pc}\n    bl ov112_021EB9E4\n    cmp r0, #0\n    beq _021EB372\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EB950\n    cmp r0, #0\n    beq _021EB372\n    ldr r0, _021EB384 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x1a\n    pop {r4, pc}\n    mov r0, #8\n    pop {r4, pc}\n    nop\n    _021EB378: .word 0x000005DD\n    _021EB37C: .word gSystem\n    _021EB380: .word 0x0001EC50\n    _021EB384: .word 0x000005DC"
    );
    #endif
}

void ov112_021EB388(void) {
    ov112_021EA570(0x1a, 0xb, 3);
}

void ov112_021EB3A8(void) {
    ov112_021EC460();
}

void ov112_021EB3B8(void) {
    TextPrinterCheckActive(0xb, 0xc);
}

void ov112_021EB3D8(void) {
    /* Original at 0x021EB3D8 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r1, #2\n    mov r2, #0xb\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0x10\n    bl ov112_021E7CA4\n    ldr r0, _021EB438 ; =0x000F0100\n    ldr r2, _021EB43C ; =0x0001E464\n    str r0, [sp]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    mov r1, #3\n    mov r3, #4\n    bl ov112_021E9FA4\n    ldr r0, _021EB438 ; =0x000F0100\n    mov r1, #4\n    str r0, [sp]\n    ldr r2, _021EB440 ; =0x0001E460\n    add r0, r4, #0\n    ldr r2, [r4, r2]\n    add r3, r1, #0\n    bl ov112_021E9FA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    ldr r1, _021EB444 ; =0x0001EC50\n    mov r0, #0\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    lsl r2, r1, #2\n    ldr r1, _021EB448 ; =ov112_021FF090\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    mov r0, #0xd\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021EB438: .word 0x000F0100\n    _021EB43C: .word 0x0001E464\n    _021EB440: .word 0x0001E460\n    _021EB444: .word 0x0001EC50\n    _021EB448: .word ov112_021FF090"
    );
    #endif
}

void ov112_021EB44C(void) {
    /* Original at 0x021EB44C */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #2\n    bl ov112_021E9888\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _021EB478\n    ldr r2, _021EB554 ; =ov112_021FF090\n    lsl r3, r1, #2\n    ldr r2, [r2, r3]\n    add r0, r4, #0\n    mov r3, #0xe\n    bl ov112_021EC440\n    ldr r0, _021EB558 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x19\n    pop {r4, pc}\n    ldr r0, _021EB55C ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _021EB4AA\n    ldr r0, _021EB560 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021EB498\n    ldr r0, _021EB564 ; =0x000005DC\n    bl PlaySE\n    ldr r0, _021EB560 ; =0x0001EC50\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, _021EB560 ; =0x0001EC50\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _021EB554 ; =ov112_021FF090\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    b _021EB54E\n    mov r1, #0x80\n    tst r1, r0\n    beq _021EB4D8\n    ldr r0, _021EB560 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #2\n    bge _021EB4C6\n    ldr r0, _021EB564 ; =0x000005DC\n    bl PlaySE\n    ldr r0, _021EB560 ; =0x0001EC50\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, _021EB560 ; =0x0001EC50\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _021EB554 ; =ov112_021FF090\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    b _021EB54E\n    mov r1, #1\n    tst r1, r0\n    beq _021EB4FA\n    ldr r0, _021EB558 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _021EB560 ; =0x0001EC50\n    ldr r2, _021EB554 ; =ov112_021FF090\n    ldr r1, [r4, r0]\n    add r0, r4, #0\n    lsl r3, r1, #2\n    ldr r2, [r2, r3]\n    mov r3, #0xe\n    bl ov112_021EC440\n    mov r0, #0x19\n    pop {r4, pc}\n    mov r1, #2\n    tst r0, r1\n    beq _021EB516\n    ldr r0, _021EB564 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #3\n    mov r3, #0xe\n    bl ov112_021EC440\n    mov r0, #0x19\n    pop {r4, pc}\n    bl ov112_021EB9C0\n    cmp r0, #0\n    beq _021EB530\n    ldr r0, _021EB564 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EB90C\n    mov r0, #0x1a\n    pop {r4, pc}\n    bl ov112_021EB9E4\n    cmp r0, #0\n    beq _021EB54E\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EB950\n    cmp r0, #0\n    beq _021EB54E\n    ldr r0, _021EB564 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x1a\n    pop {r4, pc}\n    mov r0, #0xd\n    pop {r4, pc}\n    nop\n    _021EB554: .word ov112_021FF090\n    _021EB558: .word 0x000005DD\n    _021EB55C: .word gSystem\n    _021EB560: .word 0x0001EC50\n    _021EB564: .word 0x000005DC"
    );
    #endif
}

void ov112_021EB568(void) {
    /* Original at 0x021EB568 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov112_021EA570\n    ldr r0, _021EB5A8 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021EB582\n    cmp r0, #1\n    beq _021EB58C\n    cmp r0, #2\n    beq _021EB596\n    b _021EB59C\n    mov r0, #3\n    str r0, [r4, #4]\n    mov r0, #1\n    str r0, [r4, #0x10]\n    b _021EB5A4\n    mov r0, #3\n    str r0, [r4, #4]\n    mov r0, #2\n    str r0, [r4, #0x10]\n    b _021EB5A4\n    mov r0, #0xb\n    str r0, [r4, #4]\n    b _021EB5A4\n    cmp r0, #3\n    blt _021EB5A4\n    bl GF_AssertFail\n    mov r0, #0x1a\n    pop {r4, pc}\n    _021EB5A8: .word 0x0001EC50"
    );
    #endif
}

void ov112_021EB5AC(void) {
    ov112_021EC460();
}

void ov112_021EB5BC(void) {
    TextPrinterCheckActive(0x10, 0x11);
}

void ov112_021EB5DC(void) {
    /* Original at 0x021EB5DC */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r1, #2\n    mov r2, #0xc\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0x10\n    bl ov112_021E7CA4\n    ldr r0, _021EB64C ; =0x000F0100\n    ldr r2, _021EB650 ; =0x0001E45C\n    str r0, [sp]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    mov r1, #3\n    mov r3, #4\n    bl ov112_021E9FA4\n    ldr r0, _021EB64C ; =0x000F0100\n    mov r1, #4\n    str r0, [sp]\n    ldr r2, _021EB654 ; =0x0001E460\n    add r0, r4, #0\n    ldr r2, [r4, r2]\n    add r3, r1, #0\n    bl ov112_021E9FA4\n    ldr r0, _021EB64C ; =0x000F0100\n    ldr r2, _021EB658 ; =0x0001E464\n    str r0, [sp]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #4\n    bl ov112_021E9FA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    ldr r1, _021EB65C ; =0x0001EC50\n    mov r0, #0\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    lsl r2, r1, #2\n    ldr r1, _021EB660 ; =ov112_021FF09C\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    mov r0, #0x12\n    add sp, #4\n    pop {r3, r4, pc}\n    _021EB64C: .word 0x000F0100\n    _021EB650: .word 0x0001E45C\n    _021EB654: .word 0x0001E460\n    _021EB658: .word 0x0001E464\n    _021EB65C: .word 0x0001EC50\n    _021EB660: .word ov112_021FF09C"
    );
    #endif
}

void ov112_021EB664(void) {
    /* Original at 0x021EB664 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #3\n    bl ov112_021E9888\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _021EB690\n    ldr r2, _021EB76C ; =ov112_021FF09C\n    lsl r3, r1, #2\n    ldr r2, [r2, r3]\n    add r0, r4, #0\n    mov r3, #0x13\n    bl ov112_021EC440\n    ldr r0, _021EB770 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x19\n    pop {r4, pc}\n    ldr r0, _021EB774 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _021EB6C2\n    ldr r0, _021EB778 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021EB6B0\n    ldr r0, _021EB77C ; =0x000005DC\n    bl PlaySE\n    ldr r0, _021EB778 ; =0x0001EC50\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, _021EB778 ; =0x0001EC50\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _021EB76C ; =ov112_021FF09C\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    b _021EB766\n    mov r1, #0x80\n    tst r1, r0\n    beq _021EB6F0\n    ldr r0, _021EB778 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #3\n    bge _021EB6DE\n    ldr r0, _021EB77C ; =0x000005DC\n    bl PlaySE\n    ldr r0, _021EB778 ; =0x0001EC50\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, _021EB778 ; =0x0001EC50\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _021EB76C ; =ov112_021FF09C\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    b _021EB766\n    mov r1, #1\n    tst r1, r0\n    beq _021EB712\n    ldr r0, _021EB770 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _021EB778 ; =0x0001EC50\n    ldr r2, _021EB76C ; =ov112_021FF09C\n    ldr r1, [r4, r0]\n    add r0, r4, #0\n    lsl r3, r1, #2\n    ldr r2, [r2, r3]\n    mov r3, #0x13\n    bl ov112_021EC440\n    mov r0, #0x19\n    pop {r4, pc}\n    mov r1, #2\n    tst r0, r1\n    beq _021EB72E\n    ldr r0, _021EB77C ; =0x000005DC\n    bl PlaySE\n    mov r1, #3\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x13\n    bl ov112_021EC440\n    mov r0, #0x19\n    pop {r4, pc}\n    bl ov112_021EB9C0\n    cmp r0, #0\n    beq _021EB748\n    ldr r0, _021EB77C ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    bl ov112_021EB90C\n    mov r0, #0x1a\n    pop {r4, pc}\n    bl ov112_021EB9E4\n    cmp r0, #0\n    beq _021EB766\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EB950\n    cmp r0, #0\n    beq _021EB766\n    ldr r0, _021EB77C ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x1a\n    pop {r4, pc}\n    mov r0, #0x12\n    pop {r4, pc}\n    nop\n    _021EB76C: .word ov112_021FF09C\n    _021EB770: .word 0x000005DD\n    _021EB774: .word gSystem\n    _021EB778: .word 0x0001EC50\n    _021EB77C: .word 0x000005DC"
    );
    #endif
}

void ov112_021EB780(void) {
    /* Original at 0x021EB780 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov112_021EA570\n    ldr r0, _021EB7D4 ; =0x0001EC50\n    ldr r1, [r4, r0]\n    cmp r1, #3\n    bhi _021EB7C8\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EB79C: ; jump table\n    mov r0, #3\n    str r0, [r4, #4]\n    mov r0, #0\n    str r0, [r4, #0x10]\n    b _021EB7D0\n    mov r0, #3\n    str r0, [r4, #4]\n    mov r0, #1\n    str r0, [r4, #0x10]\n    b _021EB7D0\n    mov r0, #3\n    str r0, [r4, #4]\n    mov r0, #2\n    str r0, [r4, #0x10]\n    b _021EB7D0\n    mov r0, #0xb\n    str r0, [r4, #4]\n    b _021EB7D0\n    cmp r1, #4\n    blt _021EB7D0\n    bl GF_AssertFail\n    mov r0, #0x1a\n    pop {r4, pc}\n    _021EB7D4: .word 0x0001EC50"
    );
    #endif
}

void ov112_021EB7D8(void) {
    /* Original at 0x021EB7D8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl ov112_021EA570\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xf\n    mov r3, #0x16\n    bl ov112_021EC460\n    mov r0, #0x18\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EB838(void) {
    /* Original at 0x021EB838 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EB858 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EB854\n    mov r0, #0xb\n    str r0, [r4, #4]\n    mov r0, #0x1a\n    pop {r4, pc}\n    mov r0, #0x15\n    pop {r4, pc}\n    _021EB858: .word 0x0001E524"
    );
    #endif
}

void ov112_021EB85C(void) {
    /* Original at 0x021EB85C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xb\n    str r1, [r0, #4]\n    mov r0, #0x1a\n    bx lr"
    );
    #endif
}

void ov112_021EB864(void) {
    /* Original at 0x021EB864 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl ov112_021EA570\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    mov r2, #0x16\n    add r0, r4, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl ov112_021EC460\n    mov r0, #0x18\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EB8C4(void) {
    TextPrinterCheckActive(0x18);
}

void ov112_021EB8E8(void) {
    ManagedSprite_IsAnimated(0x19);
}

u8 ov112_021EB908(void) {
    return 0x1b;
}

void ov112_021EB90C(void) {
    /* Original at 0x021EB90C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r2, #2\n    str r2, [r4, #4]\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    bl ov112_021EA570\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EB950(void) {
    /* Original at 0x021EB950 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, _021EB9BC ; =0x0001E440\n    add r4, r1, #0\n    add r1, sp, #0x10\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #0x10\n    bl sub_02032688\n    add r0, sp, #0x10\n    ldrh r0, [r0, #2]\n    cmp r0, #2\n    beq _021EB974\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, pc}\n    mov r0, #3\n    str r0, [r5, #4]\n    mov r0, #4\n    str r0, [r5, #0x10]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov112_021E9C10\n    add r0, r5, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add r0, r5, #0\n    bl ov112_021EA570\n    mov r0, #1\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _021EB9BC: .word 0x0001E440"
    );
    #endif
}

void ov112_021EB9C0(void) {
    /* Original at 0x021EB9C0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021EB9E0 ; =gSystem\n    mov r1, #0x80\n    ldr r2, [r0, #0x44]\n    add r0, r2, #0\n    tst r0, r1\n    beq _021EB9DC\n    lsl r0, r1, #3\n    tst r0, r2\n    beq _021EB9DC\n    lsl r0, r1, #2\n    tst r0, r2\n    beq _021EB9DC\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _021EB9E0: .word gSystem"
    );
    #endif
}

void ov112_021EB9E4(void) {
    /* Original at 0x021EB9E4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021EBA04 ; =gSystem\n    ldr r2, [r0, #0x44]\n    mov r0, #0x40\n    tst r0, r2\n    beq _021EBA00\n    mov r0, #4\n    add r1, r2, #0\n    tst r1, r0\n    beq _021EBA00\n    add r0, #0xfc\n    tst r0, r2\n    beq _021EBA00\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _021EBA04: .word gSystem"
    );
    #endif
}

void ov112_021EBA08(void) {
    BeginNormalPaletteFade(0, 0x9a, 2, 6, 1);
}

void ov112_021EBA28(void) {
    /* Original at 0x021EBA28 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    lsl r2, r1, #2\n    ldr r1, _021EBA4C ; =ov112_021FF730\n    ldr r1, [r1, r2]\n    blx r1\n    str r0, [r4, #8]\n    cmp r0, #4\n    bne _021EBA48\n    mov r0, #0xb\n    str r0, [r4, #4]\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    _021EBA4C: .word ov112_021FF730"
    );
    #endif
}

u8 ov112_021EBA50(void) {
    return 1;
}

void ov112_021EBA54(void) {
    ov112_021EA08C(1, 2, 0x93);
}

void ov112_021EBA6C(void) {
    TextPrinterCheckActive(1, 2);
}

void ov112_021EBA8C(void) {
    /* Original at 0x021EBA8C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021EBAA8 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _021EBA9E\n    ldr r0, _021EBAAC ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _021EBAA2\n    mov r0, #3\n    bx lr\n    mov r0, #2\n    bx lr\n    nop\n    _021EBAA8: .word gSystem\n    _021EBAAC: .word gSystem + 0x40"
    );
    #endif
}

u8 ov112_021EBAB0(void) {
    return 4;
}

void ov112_021EBAB4(void) {
    /* Original at 0x021EBAB4 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    add r0, r4, #0\n    bl ov112_021EA64C\n    add r0, r4, #0\n    mov r1, #7\n    bl ov112_021EA688\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    mov r0, #2\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EBB58(void) {
    /* Original at 0x021EBB58 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    lsl r2, r1, #2\n    ldr r1, _021EBB80 ; =ov112_021FF740\n    ldr r1, [r1, r2]\n    blx r1\n    str r0, [r4, #8]\n    cmp r0, #0x23\n    bne _021EBB74\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #3\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov112_021EA864\n    mov r0, #2\n    pop {r4, pc}\n    nop\n    _021EBB80: .word ov112_021FF740"
    );
    #endif
}

u32 ov112_021EBB84(void) {
    ov112_021EA688(8);
    ov112_021EA64C(r4);
    return 1;
}

void ov112_021EBB98(void) {
    ov112_021EA08C(1, 2, 3);
}

void ov112_021EBBB0(void) {
    /* Original at 0x021EBBB0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EBBD4 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EBBD0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E966C\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    _021EBBD4: .word 0x0001E524"
    );
    #endif
}

void ov112_021EBBD8(void) {
    /* Original at 0x021EBBD8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl ov112_021E9750\n    cmp r0, #0\n    beq _021EBBEC\n    cmp r0, #1\n    beq _021EBC22\n    b _021EBC2C\n    add r0, r4, #0\n    bl ov112_021EA570\n    mov r1, #0x10\n    mov r2, #0\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, _021EBC34 ; =0x0001EA98\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _021EBC38 ; =0x0001EAA8\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    add sp, #0x10\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #0xb\n    str r0, [r4, #4]\n    add sp, #0x10\n    mov r0, #0x22\n    pop {r4, pc}\n    mov r0, #2\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021EBC34: .word 0x0001EA98\n    _021EBC38: .word 0x0001EAA8"
    );
    #endif
}

void ov112_021EBC3C(void) {
    /* Original at 0x021EBC3C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #0\n    mov r2, #4\n    add r4, r0, #0\n    bl ov112_021EA08C\n    ldr r1, _021EBC78 ; =0x0001E524\n    mov r2, #0\n    str r0, [r4, r1]\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    mov r0, #4\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021EBC78: .word 0x0001E524"
    );
    #endif
}

void ov112_021EBC7C(void) {
    /* Original at 0x021EBC7C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _021EBCCC ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EBCC4\n    ldr r0, _021EBCD0 ; =0x000F0100\n    ldr r2, _021EBCD4 ; =0x0001E458\n    str r0, [sp]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #4\n    bl ov112_021E9FA4\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xa\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA51C\n    add sp, #4\n    mov r0, #5\n    pop {r3, r4, pc}\n    mov r0, #4\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021EBCCC: .word 0x0001E524\n    _021EBCD0: .word 0x000F0100\n    _021EBCD4: .word 0x0001E458"
    );
    #endif
}

void ov112_021EBCD8(void) {
    /* Original at 0x021EBCD8 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    bl ov112_021E9888\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _021EBD00\n    add r0, r4, #0\n    add r2, r1, #2\n    mov r3, #6\n    bl ov112_021EC440\n    ldr r0, _021EBD8C ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x21\n    pop {r4, pc}\n    ldr r0, _021EBD90 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _021EBD28\n    ldr r0, _021EBD94 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021EBD18\n    ldr r0, _021EBD98 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA51C\n    ldr r0, _021EBD94 ; =0x0001EC50\n    mov r1, #0\n    str r1, [r4, r0]\n    b _021EBD86\n    mov r1, #0x80\n    tst r1, r0\n    beq _021EBD4C\n    ldr r0, _021EBD94 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    beq _021EBD3C\n    ldr r0, _021EBD98 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EA51C\n    ldr r0, _021EBD94 ; =0x0001EC50\n    mov r1, #1\n    str r1, [r4, r0]\n    b _021EBD86\n    mov r1, #1\n    tst r1, r0\n    beq _021EBD6A\n    ldr r0, _021EBD8C ; =0x000005DD\n    bl PlaySE\n    ldr r0, _021EBD94 ; =0x0001EC50\n    mov r3, #6\n    ldr r1, [r4, r0]\n    add r0, r4, #0\n    add r2, r1, #2\n    bl ov112_021EC440\n    mov r0, #0x21\n    pop {r4, pc}\n    mov r1, #2\n    tst r0, r1\n    beq _021EBD86\n    ldr r0, _021EBD98 ; =0x000005DC\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    mov r3, #6\n    bl ov112_021EC440\n    mov r0, #0x21\n    pop {r4, pc}\n    mov r0, #5\n    pop {r4, pc}\n    nop\n    _021EBD8C: .word 0x000005DD\n    _021EBD90: .word gSystem\n    _021EBD94: .word 0x0001EC50\n    _021EBD98: .word 0x000005DC"
    );
    #endif
}

void ov112_021EBD9C(void) {
    /* Original at 0x021EBD9C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl ov112_021EA570\n    ldr r0, _021EBDE0 ; =0x0001EAB8\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    mov r1, #0x10\n    mov r2, #0\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, _021EBDE4 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _021EBDD6\n    add sp, #0x10\n    mov r0, #0xb\n    pop {r4, pc}\n    mov r0, #0xb\n    str r0, [r4, #4]\n    mov r0, #0x22\n    add sp, #0x10\n    pop {r4, pc}\n    _021EBDE0: .word 0x0001EAB8\n    _021EBDE4: .word 0x0001EC50"
    );
    #endif
}

void ov112_021EBDE8(void) {
    /* Original at 0x021EBDE8 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #9\n    bl ov112_021EA08C\n    ldr r1, _021EBE48 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #8\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021EBE48: .word 0x0001E524"
    );
    #endif
}

void ov112_021EBE4C(void) {
    TextPrinterCheckActive(8, 9);
}

void ov112_021EBE6C(void) {
    ov112_021E96D0();
}

void ov112_021EBE78(void) {
    /* Original at 0x021EBE78 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl ov112_021E9750\n    cmp r0, #0\n    beq _021EBE8C\n    cmp r0, #1\n    beq _021EBEC8\n    b _021EBF04\n    add r0, r4, #0\n    bl ov112_021EA570\n    mov r1, #0x10\n    mov r2, #0\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, _021EBF0C ; =0x0001EA98\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _021EBF10 ; =0x0001EAA8\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _021EBF14 ; =0x0001F2E4\n    mov r1, #0\n    strh r1, [r4, r0]\n    add sp, #0x10\n    mov r0, #0xb\n    pop {r4, pc}\n    mov r1, #0x10\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r2, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, _021EBF0C ; =0x0001EA98\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _021EBF10 ; =0x0001EAA8\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    bl ov112_021EA570\n    ldr r0, _021EBF14 ; =0x0001F2E4\n    mov r1, #1\n    strh r1, [r4, r0]\n    add sp, #0x10\n    mov r0, #0xb\n    pop {r4, pc}\n    mov r0, #0xa\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021EBF0C: .word 0x0001EA98\n    _021EBF10: .word 0x0001EAA8\n    _021EBF14: .word 0x0001F2E4"
    );
    #endif
}

void ov112_021EBF18(void) {
    /* Original at 0x021EBF18 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x10\n    mov r3, #0xd\n    bl ov112_021EC460\n    mov r0, #0xc\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EBF4C(void) {
    TextPrinterCheckActive(0xc);
}

void ov112_021EBF70(void) {
    /* Original at 0x021EBF70 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xe\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    add r0, r4, #0\n    bl ov112_021ED2F4\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #5\n    bl ov112_021EA08C\n    ldr r1, _021EBFC4 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0xe\n    add sp, #0x10\n    pop {r4, pc}\n    _021EBFC4: .word 0x0001E524"
    );
    #endif
}

void ov112_021EBFC8(void) {
    /* Original at 0x021EBFC8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EBFF8 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EBFF4\n    ldr r0, _021EBFFC ; =0x0001F2E0\n    ldrh r1, [r4, r0]\n    mov r0, #1\n    lsl r0, r0, #8\n    cmp r1, r0\n    bne _021EBFF4\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA5A4\n    mov r0, #0xf\n    pop {r4, pc}\n    mov r0, #0xe\n    pop {r4, pc}\n    _021EBFF8: .word 0x0001E524\n    _021EBFFC: .word 0x0001F2E0"
    );
    #endif
}

void ov112_021EC000(void) {
    /* Original at 0x021EC000 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    bl ov112_021E7484\n    ldr r1, _021EC028 ; =0x0000AABC\n    ldr r2, _021EC02C ; =0x000006C8\n    mov r0, #0\n    add r1, r4, r1\n    bl MIi_CpuClearFast\n    ldr r1, _021EC030 ; =0x00009D70\n    ldr r2, _021EC034 ; =0x00000D4C\n    mov r0, #0\n    add r1, r4, r1\n    bl MIi_CpuClearFast\n    mov r0, #0x10\n    pop {r4, pc}\n    nop\n    _021EC028: .word 0x0000AABC\n    _021EC02C: .word 0x000006C8\n    _021EC030: .word 0x00009D70\n    _021EC034: .word 0x00000D4C"
    );
    #endif
}

void ov112_021EC038(void) {
    ov112_021E7CC8();
}

void ov112_021EC044(void) {
    /* Original at 0x021EC044 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r5, #0x11\n    bl ov112_021E76A8\n    cmp r0, #0xf\n    bhi _021EC0C8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EC05E: ; jump table\n    mov r5, #0x12\n    b _021EC0C8\n    mov r5, #0x12\n    b _021EC0C8\n    mov r5, #0x12\n    b _021EC0C8\n    mov r5, #0x12\n    b _021EC0C8\n    mov r5, #0x12\n    b _021EC0C8\n    mov r5, #0x12\n    b _021EC0C8\n    mov r5, #0x12\n    b _021EC0C8\n    mov r5, #0x12\n    b _021EC0C8\n    ldr r0, _021EC120 ; =0x0001E538\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov112_021EC134\n    ldr r0, _021EC124 ; =0x0001E440\n    ldr r0, [r4, r0]\n    bl sub_02032624\n    ldr r0, _021EC128 ; =0x0001D758\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    bl ov112_021E7464\n    mov r0, #0x14\n    pop {r3, r4, r5, pc}\n    cmp r5, #0x11\n    beq _021EC0D0\n    bl ov112_021E7464\n    bl ov112_021E7668\n    cmp r0, #0\n    bne _021EC114\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E98E8\n    mov r0, #5\n    bl ov112_021E9888\n    cmp r0, #0\n    beq _021EC0FA\n    ldr r0, _021EC12C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _021EC0FA\n    mov r0, #2\n    tst r0, r1\n    beq _021EC11C\n    bl ov112_021E7464\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #3\n    mov r3, #0x12\n    bl ov112_021EC440\n    ldr r0, _021EC130 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x21\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021E98E8\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}\n    _021EC120: .word 0x0001E538\n    _021EC124: .word 0x0001E440\n    _021EC128: .word 0x0001D758\n    _021EC12C: .word gSystem\n    _021EC130: .word 0x000005DC"
    );
    #endif
}

void ov112_021EC134(void) {
    /* Original at 0x021EC134 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x20]\n    bl SaveArray_PCStorage_Get\n    add r4, r0, #0\n    ldr r0, _021EC1A0 ; =0x0001E440\n    add r1, sp, #0\n    ldr r0, [r5, r0]\n    add r1, #2\n    add r2, sp, #0\n    ldr r6, _021EC1A4 ; =0x0001F2E8\n    bl sub_02032688\n    ldr r0, _021EC1A0 ; =0x0001E440\n    add r1, r5, r6\n    ldr r0, [r5, r0]\n    bl Pokewalker_TryGetBoxMon\n    cmp r0, #0\n    beq _021EC192\n    add r0, sp, #0\n    ldrh r0, [r0]\n    add r1, sp, #8\n    add r2, sp, #4\n    str r0, [sp, #8]\n    add r0, r4, #0\n    bl PCStorage_FindFirstEmptySlot\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #4]\n    add r0, r4, #0\n    add r3, r5, r6\n    bl PCStorage_PlaceMonInBoxByIndexPair\n    ldr r1, [sp, #8]\n    add r0, r6, #0\n    add r0, #0x88\n    add sp, #0xc\n    strh r1, [r5, r0]\n    pop {r3, r4, r5, r6, pc}\n    mov r1, #0\n    mvn r1, r1\n    add r0, r6, #0\n    add r0, #0x88\n    strh r1, [r5, r0]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _021EC1A0: .word 0x0001E440\n    _021EC1A4: .word 0x0001F2E8"
    );
    #endif
}

void ov112_021EC1A8(void) {
    /* Original at 0x021EC1A8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #0\n    mov r2, #0x21\n    add r4, r0, #0\n    bl ov112_021EA08C\n    ldr r1, _021EC1E0 ; =0x0001E524\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov112_021EA570\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r0, #0x13\n    add sp, #0x10\n    pop {r4, pc}\n    _021EC1E0: .word 0x0001E524"
    );
    #endif
}

void ov112_021EC1E4(void) {
    /* Original at 0x021EC1E4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EC204 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EC200\n    mov r0, #0xb\n    str r0, [r4, #4]\n    mov r0, #0x22\n    pop {r4, pc}\n    mov r0, #0x13\n    pop {r4, pc}\n    _021EC204: .word 0x0001E524"
    );
    #endif
}

void ov112_021EC208(void) {
    /* Original at 0x021EC208 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x40\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x1f\n    bl ov112_021EA08C\n    ldr r1, _021EC280 ; =0x0001E524\n    mov r2, #0\n    str r0, [r4, r1]\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r0, #0x15\n    add sp, #0x10\n    pop {r4, pc}\n    _021EC280: .word 0x0001E524"
    );
    #endif
}

void ov112_021EC284(void) {
    /* Original at 0x021EC284 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EC2A4 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EC2A0\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #0x16\n    pop {r4, pc}\n    mov r0, #0x15\n    pop {r4, pc}\n    _021EC2A4: .word 0x0001E524"
    );
    #endif
}

void ov112_021EC2A8(void) {
    /* Original at 0x021EC2A8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _021EC2D8 ; =0x0001F370\n    add r4, r0, #0\n    ldrsh r0, [r4, r2]\n    cmp r0, #0\n    blt _021EC2D4\n    ldr r0, _021EC2DC ; =0x0001E448\n    sub r2, #0x88\n    ldr r0, [r4, r0]\n    mov r1, #1\n    add r2, r4, r2\n    bl BufferBoxMonNickname\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x1a\n    bl ov112_021EA08C\n    ldr r1, _021EC2E0 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0x17\n    pop {r4, pc}\n    mov r0, #0x1d\n    pop {r4, pc}\n    _021EC2D8: .word 0x0001F370\n    _021EC2DC: .word 0x0001E448\n    _021EC2E0: .word 0x0001E524"
    );
    #endif
}

void ov112_021EC2E4(void) {
    TextPrinterCheckActive(0x17, 0x18);
}

void ov112_021EC304(void) {
    /* Original at 0x021EC304 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021EC32C ; =0x0001F2D0\n    add r4, r0, #0\n    mov r2, #0\n    str r2, [r4, r1]\n    mov r1, #8\n    bl ov112_021EA688\n    ldr r2, _021EC330 ; =0x0001D7AC\n    ldr r0, _021EC334 ; =0x0001F2E8\n    add r1, r4, r2\n    sub r2, #0x10\n    add r0, r4, r0\n    add r2, r4, r2\n    mov r3, #0\n    bl ov112_021E9290\n    mov r0, #0x19\n    pop {r4, pc}\n    nop\n    _021EC32C: .word 0x0001F2D0\n    _021EC330: .word 0x0001D7AC\n    _021EC334: .word 0x0001F2E8"
    );
    #endif
}

void ov112_021EC338(void) {
    /* Original at 0x021EC338 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021EC370 ; =0x0001F2D0\n    add r4, r0, #0\n    ldr r2, [r4, r1]\n    add r2, r2, #1\n    str r2, [r4, r1]\n    ldr r1, [r4, r1]\n    cmp r1, #0xb4\n    ble _021EC354\n    mov r1, #8\n    bl ov112_021EA670\n    mov r0, #0x1a\n    pop {r4, pc}\n    bl MTRandom\n    mov r1, #0xb4\n    bl _u32_div_f\n    ldr r0, _021EC370 ; =0x0001F2D0\n    ldr r0, [r4, r0]\n    cmp r0, r1\n    bls _021EC36C\n    add r0, r4, #0\n    bl ov112_021EA7D0\n    mov r0, #0x19\n    pop {r4, pc}\n    _021EC370: .word 0x0001F2D0"
    );
    #endif
}

u8 ov112_021EC374(void) {
    return 0x1b;
}

void ov112_021EC378(void) {
    ov112_021EA08C(0x1c, 2, 0x1b);
}

void ov112_021EC390(void) {
    TextPrinterCheckActive(0x1c, 0x1d);
}

void ov112_021EC3B0(void) {
    ov112_021EA08C(0x1e, 2, 0xd);
}

void ov112_021EC3C8(void) {
    /* Original at 0x021EC3C8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EC3EC ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EC3E6\n    add r0, r4, #0\n    bl ov112_021EA17C\n    mov r0, #0x1f\n    pop {r4, pc}\n    mov r0, #0x1e\n    pop {r4, pc}\n    nop\n    _021EC3EC: .word 0x0001E524"
    );
    #endif
}

void ov112_021EC3F0(void) {
    /* Original at 0x021EC3F0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    bl SaveGameNormal\n    ldr r0, [r4, #0x20]\n    bl Save_ClearStatusFlags\n    mov r0, #0x20\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EC404(void) {
    ov112_021EA19C();
}

void ov112_021EC414(void) {
    ManagedSprite_IsAnimated(0x21);
}

void ov112_021EC434(void) {
    ov112_021EA570();
}

void ov112_021EC440(void) {
    /* Original at 0x021EC440 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r3, #0\n    ldr r3, _021EC45C ; =0x0001EC50\n    add r5, r0, #0\n    str r1, [r5, r3]\n    add r1, r2, #0\n    bl ov112_021EA51C\n    add r0, r5, #0\n    bl ov112_021EA584\n    str r4, [r5, #0xc]\n    pop {r3, r4, r5, pc}\n    nop\n    _021EC45C: .word 0x0001EC50"
    );
    #endif
}

void ov112_021EC460(void) {
    ov112_021EA08C();
}

void ov112_021EC478(void) {
    /* Original at 0x021EC478 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    add r0, r4, #0\n    mov r1, #7\n    bl ov112_021EA688\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, _021EC51C ; =0x0001F2E0\n    mov r1, #0\n    strh r1, [r4, r0]\n    mov r0, #2\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021EC51C: .word 0x0001F2E0"
    );
    #endif
}

void ov112_021EC520(void) {
    /* Original at 0x021EC520 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    lsl r2, r1, #2\n    ldr r1, _021EC548 ; =ov112_021FF7CC\n    ldr r1, [r1, r2]\n    blx r1\n    str r0, [r4, #8]\n    cmp r0, #0x43\n    bne _021EC53C\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #3\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov112_021EA864\n    mov r0, #2\n    pop {r4, pc}\n    nop\n    _021EC548: .word ov112_021FF7CC"
    );
    #endif
}

void ov112_021EC54C(void) {
    /* Original at 0x021EC54C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021EC558 ; =0x0001F2E0\n    mov r2, #0\n    strh r2, [r0, r1]\n    mov r0, #1\n    bx lr\n    nop\n    _021EC558: .word 0x0001F2E0"
    );
    #endif
}

void ov112_021EC55C(void) {
    /* Original at 0x021EC55C */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    cmp r0, #1\n    bne _021EC572\n    mov r0, #1\n    str r0, [r4, #0xc]\n    add sp, #0x10\n    mov r0, #0x13\n    pop {r4, pc}\n    cmp r0, #2\n    bne _021EC580\n    mov r0, #0x16\n    str r0, [r4, #0xc]\n    add sp, #0x10\n    mov r0, #0x13\n    pop {r4, pc}\n    cmp r0, #4\n    bne _021EC58A\n    add sp, #0x10\n    mov r0, #0x2b\n    pop {r4, pc}\n    ldr r0, _021EC63C ; =0x0001D77C\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _021EC598\n    add sp, #0x10\n    mov r0, #5\n    pop {r4, pc}\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EA688\n    add r0, r4, #0\n    mov r1, #4\n    bl ov112_021EA688\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xb\n    mov r3, #3\n    bl ov112_021EC460\n    mov r0, #0x40\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021EC63C: .word 0x0001D77C"
    );
    #endif
}

void ov112_021EC640(void) {
    /* Original at 0x021EC640 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xe\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #5\n    bl ov112_021EA08C\n    ldr r1, _021EC678 ; =0x0001E524\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov112_021ED2F4\n    mov r0, #2\n    pop {r4, pc}\n    nop\n    _021EC678: .word 0x0001E524"
    );
    #endif
}

void ov112_021EC67C(void) {
    TextPrinterCheckActive(0x1a, 2);
}

void ov112_021EC69C(void) {
    BeginNormalPaletteFade(0, 0x9a, 1, 4, 6);
}

void ov112_021EC6C0(void) {
    IsPaletteFadeFinished(0x42, 4, 7);
}

void ov112_021EC6D8(void) {
    BeginNormalPaletteFade(0, 0x9a, 6, 6, 1);
}

void ov112_021EC6F8(void) {
    IsPaletteFadeFinished();
}

void ov112_021EC70C(void) {
    /* Original at 0x021EC70C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EA688\n    add r0, r4, #0\n    mov r1, #4\n    bl ov112_021EA688\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xc\n    bl ov112_021EA08C\n    ldr r1, _021EC774 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #8\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021EC774: .word 0x0001E524"
    );
    #endif
}

void ov112_021EC778(void) {
    /* Original at 0x021EC778 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EC7B4 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EC7B0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021E9A78\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021E9A78\n    mov r0, #9\n    pop {r4, pc}\n    mov r0, #8\n    pop {r4, pc}\n    _021EC7B4: .word 0x0001E524"
    );
    #endif
}

void ov112_021EC7B8(void) {
    _s32_div_f(5);
}

void ov112_021EC7D0(void) {
    /* Original at 0x021EC7D0 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r7, _021EC88C ; =0x000F0100\n    add r5, r0, #0\n    mov r4, #0\n    ldr r0, _021EC890 ; =0x0001EC54\n    ldr r1, [r5, r0]\n    lsl r0, r1, #2\n    add r1, r1, r0\n    add r0, r5, r4\n    add r1, r1, r0\n    ldr r0, _021EC894 ; =0x0001EC58\n    ldrsb r1, [r1, r0]\n    ldr r0, _021EC898 ; =0x0001E44C\n    cmp r1, #0\n    blt _021EC7FA\n    ldr r0, [r5, r0]\n    add r1, #0x5b\n    bl NewString_ReadMsgData\n    b _021EC802\n    ldr r0, [r5, r0]\n    mov r1, #0x76\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #4\n    str r7, [sp]\n    bl ov112_021E9FA4\n    add r0, r6, #0\n    bl String_Delete\n    add r4, r4, #1\n    cmp r4, #5\n    blt _021EC7DA\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #1\n    ldr r2, _021EC890 ; =0x0001EC54\n    str r3, [sp, #4]\n    ldr r0, _021EC89C ; =0x0001E448\n    ldr r2, [r5, r2]\n    ldr r0, [r5, r0]\n    mov r1, #0xa\n    add r2, r2, #1\n    bl BufferIntegerAsString\n    add r0, r5, #0\n    bl ov112_021EC7B8\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #1\n    ldr r0, _021EC89C ; =0x0001E448\n    str r3, [sp, #4]\n    ldr r0, [r5, r0]\n    mov r1, #0xb\n    bl BufferIntegerAsString\n    ldr r1, _021EC89C ; =0x0001E448\n    mov r2, #0x51\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r3, #0x9a\n    bl ReadMsgData_ExpandPlaceholders\n    add r4, r0, #0\n    ldr r0, _021EC8A0 ; =0x00010E00\n    mov r1, #7\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #0\n    bl ov112_021E9FA4\n    add r0, r4, #0\n    bl String_Delete\n    ldr r2, _021EC890 ; =0x0001EC54\n    add r0, r5, #0\n    ldr r1, [r5, r2]\n    sub r2, r2, #4\n    ldr r2, [r5, r2]\n    bl ov112_021EC8A4\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EC88C: .word 0x000F0100\n    _021EC890: .word 0x0001EC54\n    _021EC894: .word 0x0001EC58\n    _021EC898: .word 0x0001E44C\n    _021EC89C: .word 0x0001E448\n    _021EC8A0: .word 0x00010E00"
    );
    #endif
}

void ov112_021EC8A4(void) {
    /* Original at 0x021EC8A4 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    cmp r2, #5\n    beq _021EC8B8\n    bl ov112_021ECA88\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021EC8EE\n    ldr r0, _021EC944 ; =0x0001E44C\n    mov r1, #0x76\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r0, _021EC948 ; =0x00010200\n    mov r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, r5, #0\n    add r3, r1, #0\n    bl ov112_021EA010\n    add r0, r5, #0\n    bl String_Delete\n    ldr r0, _021EC94C ; =0x0001EBB8\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _021EC94C ; =0x0001EBB8\n    add r0, r4, r0\n    bl CopyWindowToVram\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov112_021ECA88\n    add r1, r0, #0\n    ldr r0, _021EC944 ; =0x0001E44C\n    add r1, #0x5b\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r0, _021EC948 ; =0x00010200\n    mov r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, r5, #0\n    add r3, r1, #0\n    bl ov112_021EA010\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl ov112_021ECA88\n    add r1, r0, #0\n    ldr r0, _021EC944 ; =0x0001E44C\n    add r1, #0x77\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r0, _021EC948 ; =0x00010200\n    mov r1, #1\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, r5, #0\n    mov r3, #0\n    bl ov112_021EA010\n    add r0, r5, #0\n    bl String_Delete\n    pop {r3, r4, r5, pc}\n    _021EC944: .word 0x0001E44C\n    _021EC948: .word 0x00010200\n    _021EC94C: .word 0x0001EBB8"
    );
    #endif
}

void ov112_021EC950(void) {
    /* Original at 0x021EC950 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _021EC990 ; =0x0001EC54\n    mov r2, #0\n    str r2, [r6, r0]\n    sub r1, r0, #4\n    str r2, [r6, r1]\n    add r0, r0, #4\n    add r0, r6, r0\n    mov r1, #0xff\n    mov r2, #0x1e\n    bl MI_CpuFill8\n    mov r5, #0\n    ldr r7, _021EC994 ; =0x0001E440\n    add r4, r5, #0\n    ldr r0, [r6, r7]\n    add r1, r4, #0\n    bl Pokewalker_CourseIsUnlocked\n    cmp r0, #0\n    beq _021EC984\n    ldr r0, _021EC998 ; =0x0001EC58\n    add r1, r6, r5\n    strb r4, [r1, r0]\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r4, #0x1b\n    blt _021EC970\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EC990: .word 0x0001EC54\n    _021EC994: .word 0x0001E440\n    _021EC998: .word 0x0001EC58"
    );
    #endif
}

void ov112_021EC99C(void) {
    /* Original at 0x021EC99C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #0x10\n    add r4, r0, #0\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r2, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0x11\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x17\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    bl ov112_021EC950\n    ldr r1, _021ECA08 ; =0x0001EC76\n    strh r0, [r4, r1]\n    add r0, r4, #0\n    bl ov112_021EC7D0\n    add r0, r4, #0\n    mov r1, #6\n    bl ov112_021E9F40\n    ldr r1, _021ECA0C ; =0x0001EC54\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    bl ov112_021ECA18\n    ldr r1, _021ECA10 ; =0x0001EC50\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _021ECA14 ; =ov112_021FF0C4\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    mov r0, #0xa\n    add sp, #0x10\n    pop {r4, pc}\n    _021ECA08: .word 0x0001EC76\n    _021ECA0C: .word 0x0001EC54\n    _021ECA10: .word 0x0001EC50\n    _021ECA14: .word ov112_021FF0C4"
    );
    #endif
}

void ov112_021ECA18(void) {
    /* Original at 0x021ECA18 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov112_021EC7B8\n    ldr r1, _021ECA84 ; =0x0001EC76\n    ldrh r1, [r5, r1]\n    cmp r1, #5\n    bls _021ECA72\n    cmp r4, #0\n    bne _021ECA40\n    add r0, r5, #0\n    mov r1, #3\n    bl ov112_021EA688\n    add r0, r5, #0\n    mov r1, #4\n    bl ov112_021EA670\n    pop {r3, r4, r5, pc}\n    ble _021ECA5A\n    sub r1, r0, #1\n    cmp r4, r1\n    bge _021ECA5A\n    add r0, r5, #0\n    mov r1, #3\n    bl ov112_021EA670\n    add r0, r5, #0\n    mov r1, #4\n    bl ov112_021EA670\n    pop {r3, r4, r5, pc}\n    sub r0, r0, #1\n    cmp r4, r0\n    bne _021ECA82\n    add r0, r5, #0\n    mov r1, #3\n    bl ov112_021EA670\n    add r0, r5, #0\n    mov r1, #4\n    bl ov112_021EA688\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #3\n    bl ov112_021EA688\n    add r0, r5, #0\n    mov r1, #4\n    bl ov112_021EA688\n    pop {r3, r4, r5, pc}\n    _021ECA84: .word 0x0001EC76"
    );
    #endif
}

void ov112_021ECA88(void) {
    /* Original at 0x021ECA88 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, _021ECAA4 ; =0x0001EC50\n    add r1, r2, #4\n    ldr r3, [r0, r1]\n    ldr r4, [r0, r2]\n    lsl r1, r3, #2\n    add r1, r3, r1\n    add r1, r4, r1\n    add r0, r0, r1\n    add r2, #8\n    ldrsb r0, [r0, r2]\n    pop {r3, r4}\n    bx lr\n    nop\n    _021ECAA4: .word 0x0001EC50"
    );
    #endif
}

void ov112_021ECAA8(void) {
    /* Original at 0x021ECAA8 */
    /* Requires manual decompilation - 228 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #4\n    bl ov112_021E9888\n    mov r1, #0\n    add r5, r0, #0\n    mvn r1, r1\n    cmp r5, r1\n    beq _021ECB7C\n    cmp r5, #4\n    bhi _021ECB1C\n    ldr r0, _021ECCAC ; =0x0001EC50\n    str r5, [r4, r0]\n    add r0, r4, #0\n    bl ov112_021ECA88\n    cmp r0, #0\n    blt _021ECAF6\n    ldr r2, _021ECCB0 ; =ov112_021FF0C4\n    lsl r3, r5, #2\n    ldr r2, [r2, r3]\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r3, #0xb\n    bl ov112_021EC440\n    ldr r0, _021ECCB4 ; =0x000005DD\n    bl PlaySE\n    ldr r2, _021ECCB8 ; =0x0001EC54\n    add r0, r4, #0\n    ldr r1, [r4, r2]\n    sub r2, r2, #4\n    ldr r2, [r4, r2]\n    bl ov112_021EC8A4\n    mov r0, #0x41\n    pop {r3, r4, r5, pc}\n    ldr r2, _021ECCB8 ; =0x0001EC54\n    add r0, r4, #0\n    ldr r1, [r4, r2]\n    sub r2, r2, #4\n    ldr r2, [r4, r2]\n    bl ov112_021EC8A4\n    ldr r0, _021ECCBC ; =0x000005DC\n    bl PlaySE\n    ldr r1, _021ECCAC ; =0x0001EC50\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _021ECCB0 ; =ov112_021FF0C4\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    b _021ECB78\n    cmp r5, #6\n    bne _021ECB3C\n    add r0, r4, #0\n    bl ov112_021ECDA0\n    ldr r1, _021ECCB8 ; =0x0001EC54\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    bl ov112_021ECA18\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #2\n    bl ov112_021EA6A0\n    b _021ECB78\n    cmp r5, #7\n    bne _021ECB5E\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021ECDA0\n    ldr r1, _021ECCB8 ; =0x0001EC54\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    bl ov112_021ECA18\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #3\n    bl ov112_021EA6A0\n    b _021ECB78\n    ldr r2, _021ECCB0 ; =ov112_021FF0C4\n    lsl r3, r5, #2\n    ldr r2, [r2, r3]\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r3, #0xb\n    bl ov112_021EC440\n    ldr r0, _021ECCB4 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x41\n    pop {r3, r4, r5, pc}\n    mov r0, #0xa\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECCC0 ; =gSystem\n    mov r2, #0x40\n    ldr r0, [r0, #0x48]\n    tst r2, r0\n    beq _021ECBB8\n    ldr r0, _021ECCAC ; =0x0001EC50\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    ble _021ECB98\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, _021ECCBC ; =0x000005DC\n    bl PlaySE\n    ldr r1, _021ECCAC ; =0x0001EC50\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _021ECCB0 ; =ov112_021FF0C4\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    ldr r2, _021ECCB8 ; =0x0001EC54\n    add r0, r4, #0\n    ldr r1, [r4, r2]\n    sub r2, r2, #4\n    ldr r2, [r4, r2]\n    bl ov112_021EC8A4\n    b _021ECCA6\n    mov r2, #0x80\n    tst r2, r0\n    beq _021ECBF0\n    ldr r0, _021ECCAC ; =0x0001EC50\n    ldr r1, [r4, r0]\n    cmp r1, #5\n    bge _021ECBD0\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, _021ECCBC ; =0x000005DC\n    bl PlaySE\n    ldr r1, _021ECCAC ; =0x0001EC50\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _021ECCB0 ; =ov112_021FF0C4\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    ldr r2, _021ECCB8 ; =0x0001EC54\n    add r0, r4, #0\n    ldr r1, [r4, r2]\n    sub r2, r2, #4\n    ldr r2, [r4, r2]\n    bl ov112_021EC8A4\n    b _021ECCA6\n    mov r2, #0x20\n    tst r2, r0\n    beq _021ECC12\n    add r0, r4, #0\n    bl ov112_021ECDA0\n    ldr r1, _021ECCB8 ; =0x0001EC54\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    bl ov112_021ECA18\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #2\n    bl ov112_021EA6A0\n    b _021ECCA6\n    mov r1, #0x10\n    tst r1, r0\n    beq _021ECC36\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021ECDA0\n    ldr r1, _021ECCB8 ; =0x0001EC54\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    bl ov112_021ECA18\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #3\n    bl ov112_021EA6A0\n    b _021ECCA6\n    mov r1, #1\n    tst r1, r0\n    beq _021ECC8A\n    ldr r0, _021ECCAC ; =0x0001EC50\n    ldr r1, [r4, r0]\n    cmp r1, #4\n    ble _021ECC5C\n    ldr r2, _021ECCB0 ; =ov112_021FF0C4\n    lsl r3, r1, #2\n    ldr r2, [r2, r3]\n    add r0, r4, #0\n    mov r3, #0xb\n    bl ov112_021EC440\n    ldr r0, _021ECCB4 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x41\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov112_021ECA88\n    cmp r0, #0\n    blt _021ECC82\n    ldr r0, _021ECCAC ; =0x0001EC50\n    ldr r2, _021ECCB0 ; =ov112_021FF0C4\n    ldr r1, [r4, r0]\n    add r0, r4, #0\n    lsl r3, r1, #2\n    ldr r2, [r2, r3]\n    mov r3, #0xb\n    bl ov112_021EC440\n    ldr r0, _021ECCB4 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x41\n    pop {r3, r4, r5, pc}\n    ldr r0, _021ECCBC ; =0x000005DC\n    bl PlaySE\n    b _021ECCA6\n    mov r1, #2\n    tst r0, r1\n    beq _021ECCA6\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #3\n    mov r3, #0xb\n    bl ov112_021EC440\n    ldr r0, _021ECCBC ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x41\n    pop {r3, r4, r5, pc}\n    mov r0, #0xa\n    pop {r3, r4, r5, pc}\n    nop\n    _021ECCAC: .word 0x0001EC50\n    _021ECCB0: .word ov112_021FF0C4\n    _021ECCB4: .word 0x000005DD\n    _021ECCB8: .word 0x0001EC54\n    _021ECCBC: .word 0x000005DC\n    _021ECCC0: .word gSystem"
    );
    #endif
}

void ov112_021ECCC4(void) {
    /* Original at 0x021ECCC4 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl ov112_021EA570\n    ldr r0, _021ECD90 ; =0x0001EC50\n    ldr r1, [r4, r0]\n    cmp r1, #5\n    bhi _021ECD80\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021ECCE2: ; jump table\n    lsl r2, r1, #2\n    ldr r1, _021ECD94 ; =ov112_021FF0C4\n    add r0, r4, #0\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    add r0, r4, #0\n    bl ov112_021ECA88\n    cmp r0, #0\n    blt _021ECD88\n    add r0, r4, #0\n    bl ov112_021EA570\n    mov r1, #0x10\n    mov r2, #0\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    add r0, r4, #0\n    bl ov112_021ECA88\n    ldr r1, _021ECD98 ; =0x0001D798\n    add sp, #0x10\n    str r0, [r4, r1]\n    mov r0, #0xc\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021E9A78\n    ldr r0, _021ECD9C ; =0x0001D77C\n    mov r1, #0\n    strh r1, [r4, r0]\n    add r0, r4, #0\n    bl ov112_021EA570\n    mov r1, #0x10\n    mov r2, #0\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    add sp, #0x10\n    mov r0, #0\n    pop {r4, pc}\n    cmp r1, #6\n    blt _021ECD88\n    bl GF_AssertFail\n    mov r0, #0xa\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021ECD90: .word 0x0001EC50\n    _021ECD94: .word ov112_021FF0C4\n    _021ECD98: .word 0x0001D798\n    _021ECD9C: .word 0x0001D77C"
    );
    #endif
}

void ov112_021ECDA0(void) {
    /* Original at 0x021ECDA0 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    cmp r1, #0\n    ldr r1, _021ECE18 ; =0x0001EC50\n    bge _021ECDD2\n    ldr r0, [r5, r1]\n    cmp r0, #5\n    beq _021ECDFE\n    add r0, r1, #4\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    asr r0, r0, #0x18\n    cmp r0, #0\n    ble _021ECDFE\n    add r0, r1, #4\n    ldr r0, [r5, r0]\n    sub r2, r0, #1\n    add r0, r1, #4\n    str r2, [r5, r0]\n    mov r0, #0\n    str r0, [r5, r1]\n    ldr r0, _021ECE1C ; =0x000005DC\n    bl PlaySE\n    b _021ECDFE\n    ldr r2, [r5, r1]\n    cmp r2, #5\n    beq _021ECDFE\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    lsl r1, r1, #0x18\n    asr r4, r1, #0x18\n    bl ov112_021EC7B8\n    sub r0, r0, #1\n    cmp r4, r0\n    bge _021ECDFE\n    ldr r0, _021ECE20 ; =0x0001EC54\n    ldr r1, [r5, r0]\n    add r1, r1, #1\n    str r1, [r5, r0]\n    mov r1, #0\n    sub r0, r0, #4\n    str r1, [r5, r0]\n    ldr r0, _021ECE1C ; =0x000005DC\n    bl PlaySE\n    ldr r1, _021ECE18 ; =0x0001EC50\n    add r0, r5, #0\n    ldr r1, [r5, r1]\n    lsl r2, r1, #2\n    ldr r1, _021ECE24 ; =ov112_021FF0C4\n    ldr r1, [r1, r2]\n    bl ov112_021EA51C\n    add r0, r5, #0\n    bl ov112_021EC7D0\n    pop {r3, r4, r5, pc}\n    nop\n    _021ECE18: .word 0x0001EC50\n    _021ECE1C: .word 0x000005DC\n    _021ECE20: .word 0x0001EC54\n    _021ECE24: .word ov112_021FF0C4"
    );
    #endif
}

void ov112_021ECE28(void) {
    /* Original at 0x021ECE28 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EA688\n    add r0, r4, #0\n    mov r1, #4\n    bl ov112_021EA688\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021E9A78\n    ldr r2, _021ECEC0 ; =0x0001D798\n    ldr r0, _021ECEC4 ; =0x0001E448\n    ldr r2, [r4, r2]\n    ldr r0, [r4, r0]\n    lsl r2, r2, #0x18\n    mov r1, #0\n    lsr r2, r2, #0x18\n    bl BufferPokewalkerCourseName\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x15\n    bl ov112_021EA08C\n    ldr r1, _021ECEC8 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0xd\n    add sp, #0x10\n    pop {r4, pc}\n    _021ECEC0: .word 0x0001D798\n    _021ECEC4: .word 0x0001E448\n    _021ECEC8: .word 0x0001E524"
    );
    #endif
}

void ov112_021ECECC(void) {
    TextPrinterCheckActive(0xd, 0xe);
}

void ov112_021ECEEC(void) {
    ov112_021E966C();
}

void ov112_021ECEF8(void) {
    /* Original at 0x021ECEF8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov112_021E9750\n    cmp r0, #0\n    beq _021ECF0A\n    cmp r0, #1\n    beq _021ECF2A\n    b _021ECF34\n    add r0, r4, #0\n    bl ov112_021EA570\n    add r0, r4, #0\n    bl ov112_021E9338\n    cmp r0, #1\n    bne _021ECF22\n    mov r0, #0x14\n    str r0, [r4, #0xc]\n    mov r0, #0x12\n    pop {r4, pc}\n    mov r0, #0x10\n    str r0, [r4, #0xc]\n    mov r0, #0x12\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov112_021EA570\n    mov r0, #7\n    pop {r4, pc}\n    mov r0, #0xf\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021ECF38(void) {
    /* Original at 0x021ECF38 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EA688\n    add r0, r4, #0\n    mov r1, #4\n    bl ov112_021EA688\n    add r0, r4, #0\n    bl ov112_021ED2F4\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #7\n    bl ov112_021EA08C\n    ldr r1, _021ECF84 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0x11\n    pop {r4, pc}\n    _021ECF84: .word 0x0001E524"
    );
    #endif
}

void ov112_021ECF88(void) {
    /* Original at 0x021ECF88 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021ECFCC ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021ECFC6\n    ldr r0, _021ECFD0 ; =0x0001F2D6\n    ldrh r1, [r4, r0]\n    cmp r1, #0x1f\n    bne _021ECFC6\n    add r0, #0xa\n    ldrh r1, [r4, r0]\n    mov r0, #1\n    lsl r0, r0, #8\n    cmp r1, r0\n    bne _021ECFC6\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xe\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    mov r0, #0x18\n    pop {r4, pc}\n    mov r0, #0x11\n    pop {r4, pc}\n    nop\n    _021ECFCC: .word 0x0001E524\n    _021ECFD0: .word 0x0001F2D6"
    );
    #endif
}

void ov112_021ECFD4(void) {
    /* Original at 0x021ECFD4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EA688\n    add r0, r4, #0\n    mov r1, #4\n    bl ov112_021EA688\n    add r0, r4, #0\n    bl ov112_021ED0D0\n    ldr r3, [r4, #0xc]\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x10\n    bl ov112_021EC460\n    mov r0, #0x40\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021ED020(void) {
    /* Original at 0x021ED020 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r3, [r4, #0xc]\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x10\n    bl ov112_021EC460\n    mov r0, #0x40\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021ED054(void) {
    /* Original at 0x021ED054 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xe\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #5\n    bl ov112_021EA08C\n    ldr r1, _021ED08C ; =0x0001E524\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov112_021ED2F4\n    mov r0, #0x15\n    pop {r4, pc}\n    nop\n    _021ED08C: .word 0x0001E524"
    );
    #endif
}

void ov112_021ED090(void) {
    /* Original at 0x021ED090 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021ED0C0 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021ED0BC\n    ldr r0, _021ED0C4 ; =0x0001F2D6\n    ldrh r1, [r4, r0]\n    cmp r1, #0x1f\n    bne _021ED0BC\n    add r0, #0xa\n    ldrh r1, [r4, r0]\n    mov r0, #1\n    lsl r0, r0, #8\n    cmp r1, r0\n    bne _021ED0BC\n    mov r0, #0x1e\n    pop {r4, pc}\n    mov r0, #0x15\n    pop {r4, pc}\n    _021ED0C0: .word 0x0001E524\n    _021ED0C4: .word 0x0001F2D6"
    );
    #endif
}

void ov112_021ED0C8(void) {
    ov112_021ED0D0();
}

void ov112_021ED0D0(void) {
    /* Original at 0x021ED0D0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _021ED120 ; =0x0001E430\n    ldr r2, _021ED124 ; =0x0001D7AC\n    ldr r0, [r4, r0]\n    add r1, r4, r2\n    sub r2, #0x10\n    add r2, r4, r2\n    mov r3, #0\n    bl ov112_021E9290\n    ldr r0, _021ED128 ; =0x0001E550\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetOamMode\n    add r0, r4, #0\n    mov r1, #8\n    bl ov112_021EA670\n    mov r1, #0\n    ldr r0, _021ED12C ; =0x0001F2D6\n    mov r2, #8\n    strh r1, [r4, r0]\n    mov r0, #0x1f\n    str r0, [sp]\n    ldr r0, _021ED130 ; =0x04000050\n    add r3, r1, #0\n    bl G2x_SetBlendAlpha_\n    ldr r0, _021ED134 ; =ov112_021ED13C\n    add r1, r4, #0\n    mov r2, #2\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _021ED138 ; =0x0001F2D8\n    str r0, [r4, r1]\n    add sp, #4\n    pop {r3, r4, pc}\n    _021ED120: .word 0x0001E430\n    _021ED124: .word 0x0001D7AC\n    _021ED128: .word 0x0001E550\n    _021ED12C: .word 0x0001F2D6\n    _021ED130: .word 0x04000050\n    _021ED134: .word ov112_021ED13C\n    _021ED138: .word 0x0001F2D8"
    );
    #endif
}

void ov112_021ED13C(void) {
    /* Original at 0x021ED13C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021ED178 ; =0x0001F2D6\n    add r4, r1, #0\n    ldrh r1, [r4, r0]\n    add r1, r1, #2\n    strh r1, [r4, r0]\n    ldrh r1, [r4, r0]\n    cmp r1, #0x1f\n    blo _021ED154\n    mov r1, #0x1f\n    strh r1, [r4, r0]\n    ldr r0, _021ED178 ; =0x0001F2D6\n    mov r1, #0\n    ldrh r3, [r4, r0]\n    mov r0, #0x1f\n    mov r2, #8\n    sub r0, r0, r3\n    str r0, [sp]\n    ldr r0, _021ED17C ; =0x04000050\n    bl G2x_SetBlendAlpha_\n    ldr r0, _021ED178 ; =0x0001F2D6\n    ldrh r0, [r4, r0]\n    cmp r0, #0x1f\n    bne _021ED176\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}\n    _021ED178: .word 0x0001F2D6\n    _021ED17C: .word 0x04000050"
    );
    #endif
}

void ov112_021ED180(void) {
    SysTask_Destroy(1);
}

void ov112_021ED1A0(void) {
    /* Original at 0x021ED1A0 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021E9A78\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xe\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EA688\n    add r0, r4, #0\n    mov r1, #4\n    bl ov112_021EA688\n    add r0, r4, #0\n    bl ov112_021ED2F4\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #5\n    bl ov112_021EA08C\n    ldr r1, _021ED220 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0x17\n    pop {r4, pc}\n    nop\n    _021ED220: .word 0x0001E524"
    );
    #endif
}

void ov112_021ED224(void) {
    /* Original at 0x021ED224 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021ED254 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021ED250\n    ldr r0, _021ED258 ; =0x0001F2E0\n    ldrh r1, [r4, r0]\n    mov r0, #1\n    lsl r0, r0, #8\n    cmp r1, r0\n    bne _021ED250\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA5A4\n    mov r0, #0x1c\n    pop {r4, pc}\n    mov r0, #0x17\n    pop {r4, pc}\n    _021ED254: .word 0x0001E524\n    _021ED258: .word 0x0001F2E0"
    );
    #endif
}

void ov112_021ED25C(void) {
    /* Original at 0x021ED25C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    strh r1, [r0, #0x14]\n    strh r1, [r0, #0x16]\n    bx lr"
    );
    #endif
}

void ov112_021ED264(void) {
    /* Original at 0x021ED264 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021ED2D4 ; =0x0000AABC\n    add r4, r0, #0\n    ldr r2, _021ED2D8 ; =0x000006C8\n    mov r0, #0\n    add r1, r4, r1\n    bl MIi_CpuClearFast\n    ldr r1, _021ED2DC ; =0x00009D70\n    ldr r2, _021ED2E0 ; =0x00000D4C\n    mov r0, #0\n    add r1, r4, r1\n    bl MIi_CpuClearFast\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xe\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    add r0, r4, #0\n    bl ov112_021E7D7C\n    ldr r0, _021ED2E4 ; =0x000010F4\n    ldr r1, _021ED2E8 ; =0x0000C910\n    ldr r2, _021ED2EC ; =0x0000F1D0\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, r2\n    bl ov112_021E74A8\n    add r0, r4, #0\n    bl ov112_021E7CC8\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA5A4\n    ldr r0, _021ED2F0 ; =0x0001E550\n    mov r1, #0x19\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnim\n    ldr r0, _021ED2F0 ; =0x0001E550\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnimationFrame\n    add r0, r4, #0\n    bl ov112_021ED25C\n    mov r0, #0x19\n    pop {r4, pc}\n    _021ED2D4: .word 0x0000AABC\n    _021ED2D8: .word 0x000006C8\n    _021ED2DC: .word 0x00009D70\n    _021ED2E0: .word 0x00000D4C\n    _021ED2E4: .word 0x000010F4\n    _021ED2E8: .word 0x0000C910\n    _021ED2EC: .word 0x0000F1D0\n    _021ED2F0: .word 0x0001E550"
    );
    #endif
}

void ov112_021ED2F4(void) {
    /* Original at 0x021ED2F4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov112_021E98A4\n    ldr r0, _021ED30C ; =ov112_021ED180\n    add r1, r4, #0\n    mov r2, #2\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _021ED310 ; =0x0001F2DC\n    str r0, [r4, r1]\n    pop {r4, pc}\n    _021ED30C: .word ov112_021ED180\n    _021ED310: .word 0x0001F2DC"
    );
    #endif
}

void ov112_021ED314(void) {
    /* Original at 0x021ED314 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    beq _021ED32A\n    ldr r0, _021ED32C ; =0x00000934\n    bl IsSEPlaying\n    cmp r0, #0\n    bne _021ED32A\n    ldr r0, _021ED32C ; =0x00000934\n    bl PlaySE\n    pop {r3, pc}\n    _021ED32C: .word 0x00000934"
    );
    #endif
}

void ov112_021ED330(void) {
    /* Original at 0x021ED330 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov112_021E7668\n    cmp r0, #0\n    ldr r0, _021ED358 ; =0x0001D760\n    beq _021ED34E\n    ldrh r1, [r5, r0]\n    cmp r1, r4\n    bge _021ED34A\n    strh r4, [r5, r0]\n    b _021ED352\n    add r4, r1, #0\n    b _021ED352\n    mov r1, #0\n    strh r1, [r5, r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021ED358: .word 0x0001D760"
    );
    #endif
}

void ov112_021ED35C(void) {
    /* Original at 0x021ED35C */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov112_021E7670\n    bl ov112_021E768C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov112_021ED330\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    bl MTRandom\n    mov r1, #0xff\n    bl _u32_div_f\n    cmp r5, r1\n    bls _021ED388\n    add r0, r4, #0\n    bl ov112_021EA76C\n    add r0, r4, #0\n    bl ov112_021EA60C\n    add r0, r5, #0\n    bl ov112_021ED314\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov112_021EDAF4\n    cmp r5, #0xc8\n    bls _021ED3BC\n    ldr r1, _021ED4BC ; =0x0001F2D4\n    ldrh r0, [r4, r1]\n    cmp r0, #0\n    bne _021ED3C8\n    sub r1, #0x14\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r2, #2\n    bl ov112_021EAA98\n    ldr r0, _021ED4BC ; =0x0001F2D4\n    mov r1, #1\n    strh r1, [r4, r0]\n    b _021ED3C8\n    add r0, r4, #0\n    bl ov112_021EAA10\n    ldr r0, _021ED4BC ; =0x0001F2D4\n    mov r1, #0\n    strh r1, [r4, r0]\n    bl ov112_021E76A8\n    cmp r0, #0xf\n    bhi _021ED436\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021ED3DC: ; jump table\n    ldrh r0, [r4, #0x16]\n    cmp r0, #1\n    bne _021ED436\n    mov r0, #0x2a\n    strh r0, [r4, #0x14]\n    b _021ED436\n    strh r0, [r4, #0x14]\n    b _021ED436\n    ldr r0, _021ED4C0 ; =0x0001E538\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021ED4C4 ; =0x0001E440\n    ldr r0, [r4, r0]\n    bl sub_02032644\n    add r0, r4, #0\n    mov r1, #8\n    bl ov112_021EA688\n    ldr r1, _021ED4C8 ; =0x0001F2C0\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r2, #0\n    bl ov112_021EAA98\n    mov r0, #0x23\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021ED452\n    ldr r0, _021ED4C0 ; =0x0001E538\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0x3a\n    str r0, [r4, #0xc]\n    bl ov112_021E7464\n    mov r0, #0x20\n    pop {r3, r4, r5, pc}\n    bl ov112_021E7668\n    cmp r0, #0\n    bne _021ED49A\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E98E8\n    mov r0, #5\n    bl ov112_021E9888\n    cmp r0, #0\n    beq _021ED47C\n    ldr r0, _021ED4CC ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _021ED47C\n    mov r0, #2\n    tst r0, r1\n    beq _021ED4B6\n    mov r0, #0x21\n    strh r0, [r4, #0x14]\n    bl ov112_021E7464\n    mov r1, #3\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x21\n    bl ov112_021EC440\n    ldr r0, _021ED4D0 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x41\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4, #0x16]\n    cmp r0, #0\n    bne _021ED4AE\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #6\n    bl ov112_021EA10C\n    mov r0, #1\n    strh r0, [r4, #0x16]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021E98E8\n    mov r0, #0x19\n    pop {r3, r4, r5, pc}\n    nop\n    _021ED4BC: .word 0x0001F2D4\n    _021ED4C0: .word 0x0001E538\n    _021ED4C4: .word 0x0001E440\n    _021ED4C8: .word 0x0001F2C0\n    _021ED4CC: .word gSystem\n    _021ED4D0: .word 0x000005DD"
    );
    #endif
}

void ov112_021ED4D4(void) {
    /* Original at 0x021ED4D4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021ED51C ; =0x00009DFC\n    add r4, r0, #0\n    mov r2, #0x33\n    mov r0, #0\n    add r1, r4, r1\n    lsl r2, r2, #6\n    bl MIi_CpuClearFast\n    ldr r1, _021ED520 ; =0x00009D44\n    ldr r2, _021ED524 ; =0x0000AABC\n    ldr r3, _021ED528 ; =0x0000B184\n    add r0, r4, r1\n    add r1, #0x2c\n    add r1, r4, r1\n    add r2, r4, r2\n    add r3, r4, r3\n    bl ov112_021E7548\n    add r0, r4, #0\n    bl ov112_021E7CC8\n    add r0, r4, #0\n    bl ov112_021ED25C\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA5A4\n    ldr r0, _021ED52C ; =0x0001E550\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnimationFrame\n    mov r0, #0x1b\n    pop {r4, pc}\n    _021ED51C: .word 0x00009DFC\n    _021ED520: .word 0x00009D44\n    _021ED524: .word 0x0000AABC\n    _021ED528: .word 0x0000B184\n    _021ED52C: .word 0x0001E550"
    );
    #endif
}

void ov112_021ED530(void) {
    /* Original at 0x021ED530 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #0x20]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetCurrentPosition\n    ldr r1, [r0]\n    ldr r0, _021ED57C ; =0x000001F3\n    cmp r1, r0\n    beq _021ED57A\n    ldr r0, _021ED580 ; =0x00001344\n    mov r4, #9\n    add r5, r6, r0\n    ldr r0, _021ED584 ; =0x0000B1B4\n    add r7, r6, r0\n    ldr r0, _021ED588 ; =0x0000B3AC\n    ldrh r1, [r5, r0]\n    ldr r0, _021ED58C ; =0x0000FFF9\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #1\n    bhi _021ED570\n    mov r1, #0x89\n    add r2, r4, #1\n    lsl r1, r1, #2\n    mul r1, r2\n    ldr r0, [r6, #0x20]\n    add r1, r7, r1\n    bl ov112_021F328C\n    mov r0, #0x89\n    lsl r0, r0, #2\n    sub r5, r5, r0\n    sub r4, r4, #1\n    bpl _021ED550\n    pop {r3, r4, r5, r6, r7, pc}\n    _021ED57C: .word 0x000001F3\n    _021ED580: .word 0x00001344\n    _021ED584: .word 0x0000B1B4\n    _021ED588: .word 0x0000B3AC\n    _021ED58C: .word 0x0000FFF9"
    );
    #endif
}

void ov112_021ED590(void) {
    /* Original at 0x021ED590 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021ED5CC ; =0x0001E440\n    ldr r2, _021ED5D0 ; =0x0001D758\n    ldr r0, [r4, r0]\n    add r1, r4, r2\n    add r2, r2, #4\n    add r2, r4, r2\n    bl sub_02032674\n    ldr r0, _021ED5D4 ; =0x000010F0\n    ldr r2, [r4, r0]\n    ldr r0, _021ED5D0 ; =0x0001D758\n    ldr r1, [r4, r0]\n    cmp r2, r1\n    ldr r0, _021ED5CC ; =0x0001E440\n    bhs _021ED5BE\n    ldr r2, _021ED5D8 ; =0x00009D7A\n    ldr r0, [r4, r0]\n    ldrh r2, [r4, r2]\n    bl sub_02032650\n    pop {r4, pc}\n    add r1, r2, #0\n    ldr r2, _021ED5D8 ; =0x00009D7A\n    ldr r0, [r4, r0]\n    ldrh r2, [r4, r2]\n    bl sub_02032650\n    pop {r4, pc}\n    _021ED5CC: .word 0x0001E440\n    _021ED5D0: .word 0x0001D758\n    _021ED5D4: .word 0x000010F0\n    _021ED5D8: .word 0x00009D7A"
    );
    #endif
}

void ov112_021ED5DC(void) {
    /* Original at 0x021ED5DC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021ED604 ; =0x0001E440\n    ldr r2, _021ED608 ; =0x0001D758\n    ldr r0, [r4, r0]\n    add r1, r4, r2\n    add r2, r2, #4\n    add r2, r4, r2\n    bl sub_02032674\n    ldr r2, _021ED60C ; =0x00009D7A\n    ldr r0, _021ED604 ; =0x0001E440\n    ldr r1, _021ED608 ; =0x0001D758\n    ldrh r2, [r4, r2]\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    bl sub_02032650\n    pop {r4, pc}\n    nop\n    _021ED604: .word 0x0001E440\n    _021ED608: .word 0x0001D758\n    _021ED60C: .word 0x00009D7A"
    );
    #endif
}

void ov112_021ED610(void) {
    /* Original at 0x021ED610 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021ED634 ; =0x000010E7\n    ldrb r1, [r0, r1]\n    lsl r1, r1, #0x1d\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _021ED62E\n    ldr r1, _021ED638 ; =0x00009D44\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021ED62A\n    ldr r0, _021ED63C ; =0x000001ED\n    cmp r1, r0\n    bls _021ED62E\n    mov r0, #0\n    bx lr\n    mov r0, #1\n    bx lr\n    nop\n    _021ED634: .word 0x000010E7\n    _021ED638: .word 0x00009D44\n    _021ED63C: .word 0x000001ED"
    );
    #endif
}

void ov112_021ED640(void) {
    /* Original at 0x021ED640 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021ED664 ; =0x0000AABC\n    ldrb r1, [r0, r1]\n    lsl r1, r1, #0x1a\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _021ED660\n    mov r1, #0xad\n    lsl r1, r1, #8\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _021ED65C\n    ldr r0, _021ED668 ; =0x000001ED\n    cmp r1, r0\n    bls _021ED660\n    mov r0, #0\n    bx lr\n    mov r0, #1\n    bx lr\n    _021ED664: .word 0x0000AABC\n    _021ED668: .word 0x000001ED"
    );
    #endif
}

void ov112_021ED66C(void) {
    /* Original at 0x021ED66C */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov112_021E7670\n    bl ov112_021E768C\n    add r5, r0, #0\n    beq _021ED682\n    add r0, r4, #0\n    bl ov112_021EA7D0\n    add r0, r4, #0\n    bl ov112_021EA60C\n    add r0, r5, #0\n    bl ov112_021ED314\n    bl ov112_021E76A8\n    cmp r0, #0xf\n    bhi _021ED730\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021ED6A2: ; jump table\n    ldrh r0, [r4, #0x16]\n    cmp r0, #1\n    bne _021ED730\n    mov r0, #0x2a\n    strh r0, [r4, #0x14]\n    b _021ED730\n    strh r0, [r4, #0x14]\n    b _021ED730\n    ldr r0, _021ED7B8 ; =0x0001E538\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov112_021ED610\n    cmp r0, #0\n    beq _021ED700\n    ldr r0, _021ED7BC ; =0x000010E7\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021ED700\n    ldr r2, _021ED7C0 ; =0x00009D44\n    mov r1, #0x9a\n    ldrh r0, [r4, r2]\n    add r2, #0x10\n    add r2, r4, r2\n    bl GetSpeciesNameIntoArray\n    ldr r1, _021ED7C4 ; =0x0001F2C0\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r2, #1\n    bl ov112_021EAA98\n    add r0, r4, #0\n    bl ov112_021ED530\n    add r0, r4, #0\n    bl ov112_021ED590\n    add r0, r4, #0\n    bl ov112_021ED7DC\n    ldr r0, _021ED7C8 ; =0x000010F0\n    ldr r1, [r4, r0]\n    ldr r0, _021ED7CC ; =0x0001D758\n    ldr r0, [r4, r0]\n    sub r1, r1, r0\n    ldr r0, _021ED7D0 ; =0x0001EC7C\n    str r1, [r4, r0]\n    mov r0, #0x25\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021ED74C\n    ldr r0, _021ED7B8 ; =0x0001E538\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0x3c\n    str r0, [r4, #0xc]\n    bl ov112_021E7464\n    mov r0, #0x20\n    pop {r3, r4, r5, pc}\n    bl ov112_021E7668\n    cmp r0, #0\n    bne _021ED798\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E98E8\n    mov r0, #5\n    bl ov112_021E9888\n    cmp r0, #0\n    beq _021ED776\n    ldr r0, _021ED7D4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _021ED776\n    mov r0, #2\n    tst r0, r1\n    beq _021ED7B4\n    mov r0, #0x21\n    strh r0, [r4, #0x14]\n    mov r0, #0x42\n    str r0, [r4, #0xc]\n    bl ov112_021E7464\n    mov r1, #3\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x21\n    bl ov112_021EC440\n    ldr r0, _021ED7D8 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x41\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4, #0x16]\n    cmp r0, #0\n    bne _021ED7AC\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #6\n    bl ov112_021EA10C\n    mov r0, #1\n    strh r0, [r4, #0x16]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021E98E8\n    mov r0, #0x1b\n    pop {r3, r4, r5, pc}\n    _021ED7B8: .word 0x0001E538\n    _021ED7BC: .word 0x000010E7\n    _021ED7C0: .word 0x00009D44\n    _021ED7C4: .word 0x0001F2C0\n    _021ED7C8: .word 0x000010F0\n    _021ED7CC: .word 0x0001D758\n    _021ED7D0: .word 0x0001EC7C\n    _021ED7D4: .word gSystem\n    _021ED7D8: .word 0x000005DD"
    );
    #endif
}

void ov112_021ED7DC(void) {
    /* Original at 0x021ED7DC */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r0, sp, #4\n    mov r2, #0\n    str r2, [r0]\n    str r2, [r0, #4]\n    ldr r3, _021ED8C8 ; =0x00009D54\n    str r2, [r0, #8]\n    add r0, r4, r3\n    str r0, [sp, #4]\n    add r0, r3, #0\n    sub r0, #0x10\n    ldrh r1, [r4, r0]\n    add r0, sp, #0\n    mov r5, #0x1f\n    strh r1, [r0, #0xc]\n    ldrb r1, [r0, #0xe]\n    bic r1, r5\n    sub r5, r3, #3\n    ldrb r5, [r4, r5]\n    lsl r5, r5, #0x1b\n    lsr r6, r5, #0x1b\n    mov r5, #0x1f\n    and r5, r6\n    orr r1, r5\n    strb r1, [r0, #0xe]\n    ldrb r1, [r0, #0xe]\n    mov r5, #0x60\n    bic r1, r5\n    sub r5, r3, #3\n    ldrb r5, [r4, r5]\n    sub r3, r3, #2\n    lsl r5, r5, #0x19\n    lsr r5, r5, #0x1e\n    lsl r5, r5, #0x1e\n    lsr r5, r5, #0x19\n    orr r1, r5\n    strb r1, [r0, #0xe]\n    ldrb r3, [r4, r3]\n    ldrb r1, [r0, #0xe]\n    mov r5, #0x80\n    lsl r3, r3, #0x1e\n    lsr r3, r3, #0x1f\n    lsl r3, r3, #0x1f\n    bic r1, r5\n    lsr r3, r3, #0x18\n    orr r1, r3\n    strb r1, [r0, #0xe]\n    ldr r0, _021ED8CC ; =0x000010F0\n    ldr r1, [r4, r0]\n    ldr r0, _021ED8D0 ; =0x0001D758\n    ldr r0, [r4, r0]\n    cmp r1, r0\n    bhs _021ED84E\n    str r2, [sp, #8]\n    b _021ED852\n    sub r0, r1, r0\n    str r0, [sp, #8]\n    ldr r0, _021ED8D4 ; =0x0000AA34\n    add r1, sp, #4\n    add r0, r4, r0\n    bl ov112_021F30BC\n    ldr r0, _021ED8D8 ; =0x00009DFC\n    add r0, r4, r0\n    bl ov112_021F31BC\n    cmp r0, #0\n    beq _021ED8C2\n    mov r0, #0xad\n    lsl r0, r0, #8\n    ldrh r2, [r4, r0]\n    add r1, sp, #0\n    mov r3, #0x1f\n    strh r2, [r1]\n    ldrb r2, [r1, #2]\n    bic r2, r3\n    add r3, r0, #0\n    add r3, #0xd\n    ldrb r3, [r4, r3]\n    lsl r3, r3, #0x1b\n    lsr r5, r3, #0x1b\n    mov r3, #0x1f\n    and r3, r5\n    orr r2, r3\n    strb r2, [r1, #2]\n    ldrb r2, [r1, #2]\n    mov r3, #0x60\n    bic r2, r3\n    add r3, r0, #0\n    add r3, #0xd\n    ldrb r3, [r4, r3]\n    add r0, #0xe\n    lsl r3, r3, #0x19\n    lsr r3, r3, #0x1e\n    lsl r3, r3, #0x1e\n    lsr r3, r3, #0x19\n    orr r2, r3\n    strb r2, [r1, #2]\n    ldrb r0, [r4, r0]\n    ldrb r2, [r1, #2]\n    mov r3, #0x80\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    lsl r0, r0, #0x1f\n    bic r2, r3\n    lsr r0, r0, #0x18\n    orr r0, r2\n    strb r0, [r1, #2]\n    ldr r0, _021ED8D8 ; =0x00009DFC\n    add r1, sp, #0\n    add r0, r4, r0\n    bl ov112_021F3140\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021ED8C8: .word 0x00009D54\n    _021ED8CC: .word 0x000010F0\n    _021ED8D0: .word 0x0001D758\n    _021ED8D4: .word 0x0000AA34\n    _021ED8D8: .word 0x00009DFC"
    );
    #endif
}

void ov112_021ED8DC(void) {
    /* Original at 0x021ED8DC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021ED908 ; =0x0000AABC\n    add r4, r0, #0\n    ldr r2, _021ED90C ; =0x000006C8\n    mov r0, #0\n    add r1, r4, r1\n    bl MIi_CpuClearFast\n    ldr r0, _021ED910 ; =0x00009D70\n    ldr r1, _021ED914 ; =0x0000B184\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov112_021E7620\n    add r0, r4, #0\n    bl ov112_021E7CC8\n    add r0, r4, #0\n    bl ov112_021ED25C\n    mov r0, #0x1d\n    pop {r4, pc}\n    _021ED908: .word 0x0000AABC\n    _021ED90C: .word 0x000006C8\n    _021ED910: .word 0x00009D70\n    _021ED914: .word 0x0000B184"
    );
    #endif
}

void ov112_021ED918(void) {
    /* Original at 0x021ED918 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    bl ov112_021E7670\n    bl ov112_021E768C\n    add r5, r0, #0\n    beq _021ED930\n    add r0, r4, #0\n    bl ov112_021EA7D0\n    add r0, r5, #0\n    bl ov112_021ED314\n    add r0, r4, #0\n    bl ov112_021EA60C\n    bl ov112_021E76A8\n    cmp r0, #0xf\n    bhi _021ED9B4\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021ED950: ; jump table\n    ldrh r0, [r4, #0x16]\n    cmp r0, #1\n    bne _021ED9B4\n    mov r0, #0x2a\n    strh r0, [r4, #0x14]\n    b _021ED9B4\n    strh r0, [r4, #0x14]\n    b _021ED9B4\n    ldr r0, _021EDA40 ; =0x0001E538\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    add r0, sp, #0xc\n    add r1, sp, #0\n    bl RTC_GetDateTime\n    add r0, sp, #0xc\n    add r1, sp, #0\n    bl RTC_ConvertDateTimeToSecond\n    add r0, r4, #0\n    bl ov112_021ED530\n    add r0, r4, #0\n    bl ov112_021ED5DC\n    add r0, r4, #0\n    mov r1, #6\n    bl ov112_021EA670\n    add sp, #0x1c\n    mov r0, #0x29\n    pop {r4, r5, pc}\n    ldrh r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021ED9D2\n    ldr r0, _021EDA40 ; =0x0001E538\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0x3d\n    str r0, [r4, #0xc]\n    bl ov112_021E7464\n    add sp, #0x1c\n    mov r0, #0x20\n    pop {r4, r5, pc}\n    bl ov112_021E7668\n    cmp r0, #0\n    bne _021EDA1E\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E98E8\n    mov r0, #5\n    bl ov112_021E9888\n    cmp r0, #0\n    beq _021ED9FC\n    ldr r0, _021EDA44 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _021ED9FC\n    mov r0, #2\n    tst r0, r1\n    beq _021EDA3A\n    bl ov112_021E7464\n    mov r3, #0x21\n    mov r1, #3\n    strh r3, [r4, #0x14]\n    mov r0, #0x42\n    str r0, [r4, #0xc]\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov112_021EC440\n    ldr r0, _021EDA48 ; =0x000005DD\n    bl PlaySE\n    add sp, #0x1c\n    mov r0, #0x41\n    pop {r4, r5, pc}\n    ldrh r0, [r4, #0x16]\n    cmp r0, #0\n    bne _021EDA32\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #6\n    bl ov112_021EA10C\n    mov r0, #1\n    strh r0, [r4, #0x16]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021E98E8\n    mov r0, #0x1d\n    add sp, #0x1c\n    pop {r4, r5, pc}\n    _021EDA40: .word 0x0001E538\n    _021EDA44: .word gSystem\n    _021EDA48: .word 0x000005DD"
    );
    #endif
}

void ov112_021EDA4C(void) {
    /* Original at 0x021EDA4C */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov112_021E7DA4\n    ldr r0, _021EDAD4 ; =0x0000C910\n    ldr r1, _021EDAD8 ; =0x0000F1D0\n    ldr r2, _021EDADC ; =0x00009D70\n    ldr r3, _021EDAE0 ; =0x0000AABC\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, r2\n    add r3, r4, r3\n    bl ov112_021E7594\n    add r0, r4, #0\n    bl ov112_021E7CC8\n    ldr r1, _021EDAE4 ; =0x0001E42C\n    ldr r2, _021EDAE8 ; =0x0001D7AC\n    ldr r0, [r4, r1]\n    cmp r0, #0\n    beq _021EDA86\n    add r1, r4, r2\n    sub r2, #0x10\n    add r2, r4, r2\n    mov r3, #0\n    bl ov112_021E9290\n    b _021EDA96\n    add r0, r1, #4\n    add r1, r4, r2\n    sub r2, #0x10\n    ldr r0, [r4, r0]\n    add r2, r4, r2\n    mov r3, #0\n    bl ov112_021E9290\n    ldr r0, _021EDAEC ; =0x0001E550\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetOamMode\n    add r0, r4, #0\n    mov r1, #8\n    bl ov112_021EA670\n    ldr r0, _021EDAEC ; =0x0001E550\n    mov r1, #0x19\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnim\n    ldr r0, _021EDAEC ; =0x0001E550\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetAnimationFrame\n    ldr r0, _021EDAF0 ; =0x0001F2D4\n    mov r1, #0\n    strh r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA5A4\n    add r0, r4, #0\n    bl ov112_021ED25C\n    mov r0, #0x1f\n    pop {r4, pc}\n    _021EDAD4: .word 0x0000C910\n    _021EDAD8: .word 0x0000F1D0\n    _021EDADC: .word 0x00009D70\n    _021EDAE0: .word 0x0000AABC\n    _021EDAE4: .word 0x0001E42C\n    _021EDAE8: .word 0x0001D7AC\n    _021EDAEC: .word 0x0001E550\n    _021EDAF0: .word 0x0001F2D4"
    );
    #endif
}

void ov112_021EDAF4(void) {
    /* Original at 0x021EDAF4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _021EDB06\n    ldr r1, _021EDB20 ; =0x0001E550\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    pop {r3, pc}\n    cmp r1, #0x1e\n    ble _021EDB1E\n    ldr r2, _021EDB20 ; =0x0001E550\n    sub r1, #0x1e\n    ldr r0, [r0, r2]\n    asr r2, r1, #1\n    lsr r2, r2, #0x1e\n    add r2, r1, r2\n    lsl r1, r2, #0xe\n    lsr r1, r1, #0x10\n    bl ManagedSprite_SetAnimationFrame\n    pop {r3, pc}\n    _021EDB20: .word 0x0001E550"
    );
    #endif
}

void ov112_021EDB24(void) {
    /* Original at 0x021EDB24 */
    /* Requires manual decompilation - 150 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov112_021E7670\n    bl ov112_021E768C\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov112_021ED330\n    add r5, r0, #0\n    beq _021EDB46\n    add r0, r4, #0\n    bl ov112_021EA76C\n    add r0, r4, #0\n    bl ov112_021EA60C\n    add r0, r5, #0\n    bl ov112_021ED314\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov112_021EDAF4\n    cmp r5, #0xc8\n    bls _021EDB7A\n    ldr r1, _021EDC94 ; =0x0001F2D4\n    ldrh r0, [r4, r1]\n    cmp r0, #0\n    bne _021EDB86\n    sub r1, #0x14\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r2, #2\n    bl ov112_021EAA98\n    ldr r0, _021EDC94 ; =0x0001F2D4\n    mov r1, #1\n    strh r1, [r4, r0]\n    b _021EDB86\n    add r0, r4, #0\n    bl ov112_021EAA10\n    ldr r0, _021EDC94 ; =0x0001F2D4\n    mov r1, #0\n    strh r1, [r4, r0]\n    bl ov112_021E76A8\n    cmp r0, #0xf\n    bhi _021EDC0A\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EDB9A: ; jump table\n    ldrh r0, [r4, #0x16]\n    cmp r0, #1\n    bne _021EDC0A\n    mov r0, #0x2a\n    strh r0, [r4, #0x14]\n    b _021EDC0A\n    strh r0, [r4, #0x14]\n    b _021EDC0A\n    ldr r0, _021EDC98 ; =0x0001E538\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021EDC9C ; =0x0001E440\n    ldr r2, _021EDCA0 ; =0x0001D758\n    ldr r0, [r4, r0]\n    add r1, r4, r2\n    add r2, r2, #4\n    add r2, r4, r2\n    bl sub_02032674\n    add r0, r4, #0\n    bl ov112_021ED590\n    ldr r0, _021EDC9C ; =0x0001E440\n    ldr r0, [r4, r0]\n    bl sub_02032644\n    add r0, r4, #0\n    mov r1, #8\n    bl ov112_021EA688\n    ldr r1, _021EDCA4 ; =0x0001F2C0\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r2, #0\n    bl ov112_021EAA98\n    mov r0, #0x23\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4, #0x14]\n    cmp r0, #0\n    beq _021EDC26\n    ldr r0, _021EDC98 ; =0x0001E538\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0x3b\n    str r0, [r4, #0xc]\n    bl ov112_021E7464\n    mov r0, #0x20\n    pop {r3, r4, r5, pc}\n    bl ov112_021E7668\n    cmp r0, #0\n    bne _021EDC72\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E98E8\n    mov r0, #5\n    bl ov112_021E9888\n    cmp r0, #0\n    beq _021EDC50\n    ldr r0, _021EDCA8 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _021EDC50\n    mov r0, #2\n    tst r0, r1\n    beq _021EDC8E\n    mov r0, #0x21\n    strh r0, [r4, #0x14]\n    mov r0, #0x42\n    str r0, [r4, #0xc]\n    bl ov112_021E7464\n    mov r1, #3\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0x21\n    bl ov112_021EC440\n    ldr r0, _021EDCAC ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x41\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4, #0x16]\n    cmp r0, #0\n    bne _021EDC86\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #6\n    bl ov112_021EA10C\n    mov r0, #1\n    strh r0, [r4, #0x16]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021E98E8\n    mov r0, #0x1f\n    pop {r3, r4, r5, pc}\n    nop\n    _021EDC94: .word 0x0001F2D4\n    _021EDC98: .word 0x0001E538\n    _021EDC9C: .word 0x0001E440\n    _021EDCA0: .word 0x0001D758\n    _021EDCA4: .word 0x0001F2C0\n    _021EDCA8: .word gSystem\n    _021EDCAC: .word 0x000005DD"
    );
    #endif
}

void ov112_021EDCB0(void) {
    /* Original at 0x021EDCB0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x21\n    bgt _021EDCE4\n    bge _021EDD06\n    cmp r0, #0xe\n    bhi _021EDD06\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EDCC6: ; jump table\n    cmp r0, #0x2a\n    bx lr\n    mov r0, #0x22\n    bx lr\n    mov r0, #0x24\n    bx lr\n    mov r0, #0x25\n    bx lr\n    mov r0, #0x2b\n    bx lr\n    mov r0, #0x26\n    bx lr\n    mov r0, #0x27\n    bx lr\n    mov r0, #0x23\n    bx lr\n    mov r0, #0x2a\n    bx lr"
    );
    #endif
}

void ov112_021EDD08(void) {
    /* Original at 0x021EDD08 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov112_021EA570\n    ldrh r0, [r4, #0x14]\n    bl ov112_021EDCB0\n    strh r0, [r4, #0x14]\n    ldrh r2, [r4, #0x14]\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA08C\n    ldr r1, _021EDD2C ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0x22\n    pop {r4, pc}\n    nop\n    _021EDD2C: .word 0x0001E524"
    );
    #endif
}

void ov112_021EDD30(void) {
    /* Original at 0x021EDD30 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov112_021EA570\n    ldrh r0, [r4, #0x14]\n    bl ov112_021EDCB0\n    strh r0, [r4, #0x14]\n    ldrh r2, [r4, #0x14]\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA08C\n    ldr r1, _021EDD58 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0x42\n    str r0, [r4, #0xc]\n    mov r0, #0x22\n    pop {r4, pc}\n    nop\n    _021EDD58: .word 0x0001E524"
    );
    #endif
}

void ov112_021EDD5C(void) {
    /* Original at 0x021EDD5C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #7\n    bl ov112_021EA08C\n    ldr r1, _021EDD7C ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0x11\n    pop {r4, pc}\n    nop\n    _021EDD7C: .word 0x0001E524"
    );
    #endif
}

void ov112_021EDD80(void) {
    /* Original at 0x021EDD80 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #5\n    bl ov112_021EA08C\n    ldr r1, _021EDDB0 ; =0x0001E524\n    mov r2, #0xe\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    mov r0, #0x15\n    pop {r4, pc}\n    _021EDDB0: .word 0x0001E524"
    );
    #endif
}

void ov112_021EDDB4(void) {
    /* Original at 0x021EDDB4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #5\n    bl ov112_021EA08C\n    ldr r1, _021EDDE4 ; =0x0001E524\n    mov r2, #0xe\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    mov r0, #2\n    pop {r4, pc}\n    _021EDDE4: .word 0x0001E524"
    );
    #endif
}

void ov112_021EDDE8(void) {
    /* Original at 0x021EDDE8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #5\n    bl ov112_021EA08C\n    ldr r1, _021EDE18 ; =0x0001E524\n    mov r2, #0xe\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021E7CA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    mov r0, #0x17\n    pop {r4, pc}\n    _021EDE18: .word 0x0001E524"
    );
    #endif
}

void ov112_021EDE1C(void) {
    /* Original at 0x021EDE1C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, _021EDE64 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EDE5E\n    mov r2, #0\n    str r2, [r4, #4]\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0xc]\n    add sp, #0x10\n    str r0, [r4, #8]\n    pop {r4, pc}\n    mov r0, #0x22\n    add sp, #0x10\n    pop {r4, pc}\n    _021EDE64: .word 0x0001E524"
    );
    #endif
}

void ov112_021EDE68(void) {
    /* Original at 0x021EDE68 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl ov112_021E7464\n    add r0, r4, #0\n    bl ov112_021ED640\n    cmp r0, #0\n    bne _021EDE96\n    mov r1, #0xad\n    lsl r1, r1, #8\n    mov r2, #0xbf\n    mov r0, #0\n    add r1, r4, r1\n    lsl r2, r2, #2\n    bl MIi_CpuClearFast\n    ldr r1, _021EDEF8 ; =0x0000AABC\n    mov r0, #0x20\n    ldrb r2, [r4, r1]\n    bic r2, r0\n    strb r2, [r4, r1]\n    ldr r3, _021EDEFC ; =0x0001E42C\n    ldr r2, [r4, r3]\n    cmp r2, #0\n    beq _021EDEAA\n    add r3, #0x1c\n    ldr r0, [r4, r3]\n    mov r1, #1\n    bl BufferBoxMonNickname\n    b _021EDEBA\n    add r0, r3, #0\n    add r0, #0x1c\n    add r2, r3, #4\n    ldr r0, [r4, r0]\n    ldr r2, [r4, r2]\n    mov r1, #1\n    bl BufferBoxMonNickname\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x18\n    bl ov112_021EA08C\n    ldr r1, _021EDF00 ; =0x0001E524\n    str r0, [r4, r1]\n    ldr r0, _021EDF04 ; =0x000004A2\n    bl PlayFanfare\n    mov r0, #0x24\n    add sp, #0x10\n    pop {r4, pc}\n    nop\n    _021EDEF8: .word 0x0000AABC\n    _021EDEFC: .word 0x0001E42C\n    _021EDF00: .word 0x0001E524\n    _021EDF04: .word 0x000004A2"
    );
    #endif
}

void ov112_021EDF08(void) {
    /* Original at 0x021EDF08 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021EDF44 ; =0x0001F2C0\n    add r4, r0, #0\n    add r1, r4, r1\n    bl ov112_021EAAE4\n    ldr r0, _021EDF48 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EDF3E\n    add r0, r4, #0\n    bl ov112_021EA838\n    cmp r0, #0\n    bne _021EDF3E\n    bl IsFanfarePlaying\n    cmp r0, #0\n    bne _021EDF3E\n    mov r0, #5\n    str r0, [r4, #4]\n    mov r0, #0x42\n    pop {r4, pc}\n    mov r0, #0x24\n    pop {r4, pc}\n    nop\n    _021EDF44: .word 0x0001F2C0\n    _021EDF48: .word 0x0001E524"
    );
    #endif
}

void ov112_021EDF4C(void) {
    /* Original at 0x021EDF4C */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0xc\n    mov r1, #0x9a\n    bl String_New\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r5, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    add r0, r5, #0\n    bl ov112_021ED610\n    cmp r0, #0\n    beq _021EDFB8\n    ldr r1, _021EDFD8 ; =0x00009D54\n    add r0, r4, #0\n    add r1, r5, r1\n    mov r2, #0xc\n    bl CopyU16ArrayToStringN\n    mov r1, #1\n    str r1, [sp]\n    ldr r3, _021EDFDC ; =0x00009D51\n    str r1, [sp, #4]\n    ldrb r3, [r5, r3]\n    ldr r0, _021EDFE0 ; =0x0001E448\n    add r2, r4, #0\n    lsl r3, r3, #0x19\n    ldr r0, [r5, r0]\n    lsr r3, r3, #0x1e\n    bl BufferString\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0x1b\n    bl ov112_021EA08C\n    b _021EDFC2\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0x20\n    bl ov112_021EA08C\n    ldr r1, _021EDFE4 ; =0x0001E524\n    str r0, [r5, r1]\n    bl ov112_021E7464\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #0x26\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021EDFD8: .word 0x00009D54\n    _021EDFDC: .word 0x00009D51\n    _021EDFE0: .word 0x0001E448\n    _021EDFE4: .word 0x0001E524"
    );
    #endif
}

void ov112_021EDFE8(void) {
    /* Original at 0x021EDFE8 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x9a\n    mov r6, #1\n    bl AllocMonZeroed\n    add r4, r0, #0\n    ldr r0, _021EE03C ; =0x0001E440\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Pokewalker_TryGetBoxMon\n    cmp r0, #0\n    bne _021EE006\n    mov r6, #0\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    add r0, r4, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _021EE040 ; =0x00009D44\n    ldrh r2, [r5, r1]\n    cmp r2, r7\n    bne _021EE030\n    add r1, #0xd\n    ldrb r1, [r5, r1]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1b\n    cmp r1, r0\n    beq _021EE032\n    mov r6, #0\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EE03C: .word 0x0001E440\n    _021EE040: .word 0x00009D44"
    );
    #endif
}

void ov112_021EE044(void) {
    /* Original at 0x021EE044 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021EE0E0 ; =0x0001F2C0\n    add r4, r0, #0\n    add r1, r4, r1\n    bl ov112_021EAAE4\n    ldr r0, _021EE0E4 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EE0DC\n    bl IsFanfarePlaying\n    cmp r0, #0\n    bne _021EE0DC\n    add r0, r4, #0\n    bl ov112_021ED610\n    cmp r0, #0\n    bne _021EE088\n    ldr r1, _021EE0E8 ; =0x00009D44\n    mov r0, #0\n    add r1, r4, r1\n    mov r2, #0x10\n    bl MIi_CpuClearFast\n    ldr r1, _021EE0EC ; =0x000010E7\n    mov r0, #4\n    ldrb r2, [r4, r1]\n    bic r2, r0\n    strb r2, [r4, r1]\n    add r0, r4, #0\n    bl ov112_021ED640\n    cmp r0, #0\n    bne _021EE0AC\n    mov r1, #0xad\n    lsl r1, r1, #8\n    mov r2, #0xbf\n    mov r0, #0\n    add r1, r4, r1\n    lsl r2, r2, #2\n    bl MIi_CpuClearFast\n    ldr r1, _021EE0F0 ; =0x0000AABC\n    mov r0, #0x20\n    ldrb r2, [r4, r1]\n    bic r2, r0\n    strb r2, [r4, r1]\n    add r0, r4, #0\n    bl ov112_021EDFE8\n    cmp r0, #0\n    bne _021EE0D0\n    ldr r0, _021EE0F0 ; =0x0000AABC\n    ldrb r0, [r4, r0]\n    lsl r1, r0, #0x1a\n    lsr r1, r1, #0x1f\n    bne _021EE0D0\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    bne _021EE0D0\n    ldr r0, _021EE0EC ; =0x000010E7\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    beq _021EE0D8\n    mov r0, #6\n    str r0, [r4, #4]\n    mov r0, #0x42\n    pop {r4, pc}\n    mov r0, #0x27\n    pop {r4, pc}\n    mov r0, #0x26\n    pop {r4, pc}\n    _021EE0E0: .word 0x0001F2C0\n    _021EE0E4: .word 0x0001E524\n    _021EE0E8: .word 0x00009D44\n    _021EE0EC: .word 0x000010E7\n    _021EE0F0: .word 0x0000AABC"
    );
    #endif
}

void ov112_021EE0F4(void) {
    ov112_021EA08C(0x28, 2, 0x14);
}

void ov112_021EE10C(void) {
    TextPrinterCheckActive(0x28, 0x3e);
}

void ov112_021EE12C(void) {
    /* Original at 0x021EE12C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #2\n    mov r2, #0x1d\n    add r4, r0, #0\n    bl ov112_021EA08C\n    ldr r1, _021EE170 ; =0x0001E524\n    mov r2, #0\n    str r0, [r4, r1]\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    bl ov112_021E7464\n    ldr r0, _021EE174 ; =0x000004A1\n    bl PlayFanfare\n    mov r0, #0x2a\n    add sp, #0x10\n    pop {r4, pc}\n    _021EE170: .word 0x0001E524\n    _021EE174: .word 0x000004A1"
    );
    #endif
}

void ov112_021EE178(void) {
    /* Original at 0x021EE178 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EE1A0 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EE19C\n    bl IsFanfarePlaying\n    cmp r0, #0\n    bne _021EE19C\n    mov r0, #6\n    str r0, [r4, #4]\n    mov r0, #0x42\n    pop {r4, pc}\n    mov r0, #0x2a\n    pop {r4, pc}\n    _021EE1A0: .word 0x0001E524"
    );
    #endif
}

void ov112_021EE1A4(void) {
    ov112_021EA08C(0x2c, 2, 0x12);
}

void ov112_021EE1BC(void) {
    TextPrinterCheckActive(0x2c, 0x2d);
}

void ov112_021EE1DC(void) {
    ov112_021E966C();
}

void ov112_021EE1E8(void) {
    /* Original at 0x021EE1E8 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl ov112_021E9750\n    cmp r0, #0\n    beq _021EE1FC\n    cmp r0, #1\n    beq _021EE254\n    b _021EE28E\n    add r0, r4, #0\n    bl ov112_021EA570\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, _021EE294 ; =0x0001EA98\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _021EE298 ; =0x0001EAA8\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    mov r0, #0x2f\n    pop {r4, pc}\n    mov r1, #0x10\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r2, #0\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, _021EE294 ; =0x0001EA98\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _021EE298 ; =0x0001EAA8\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    bl ov112_021EA570\n    mov r0, #0\n    str r0, [r4, #4]\n    add sp, #0x10\n    mov r0, #0x42\n    pop {r4, pc}\n    mov r0, #0x2e\n    add sp, #0x10\n    pop {r4, pc}\n    _021EE294: .word 0x0001EA98\n    _021EE298: .word 0x0001EAA8"
    );
    #endif
}

void ov112_021EE29C(void) {
    ov112_021EA08C(0x30, 0, 0x13);
}

void ov112_021EE2B4(void) {
    TextPrinterCheckActive(0x30, 0x31);
}

void ov112_021EE2D4(void) {
    /* Original at 0x021EE2D4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #2\n    mov r2, #0xa\n    add r4, r0, #0\n    bl ov112_021E7CA4\n    ldr r0, _021EE310 ; =0x000F0100\n    ldr r2, _021EE314 ; =0x0001E468\n    str r0, [sp]\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    mov r1, #5\n    mov r3, #4\n    bl ov112_021E9FA4\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9F40\n    ldr r0, _021EE318 ; =0x0001EC50\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA51C\n    mov r0, #0x32\n    add sp, #4\n    pop {r3, r4, pc}\n    _021EE310: .word 0x000F0100\n    _021EE314: .word 0x0001E468\n    _021EE318: .word 0x0001EC50"
    );
    #endif
}

void ov112_021EE31C(void) {
    /* Original at 0x021EE31C */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    bl ov112_021E9888\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _021EE344\n    add r0, r4, #0\n    add r2, r1, #2\n    mov r3, #0x33\n    bl ov112_021EC440\n    ldr r0, _021EE3D0 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x41\n    pop {r4, pc}\n    ldr r0, _021EE3D4 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _021EE36C\n    add r0, r4, #0\n    mov r1, #2\n    bl ov112_021EA51C\n    ldr r0, _021EE3D8 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021EE364\n    ldr r0, _021EE3DC ; =0x000005DC\n    bl PlaySE\n    ldr r0, _021EE3D8 ; =0x0001EC50\n    mov r1, #0\n    str r1, [r4, r0]\n    b _021EE3CA\n    mov r1, #0x80\n    tst r1, r0\n    beq _021EE390\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EA51C\n    ldr r0, _021EE3D8 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    beq _021EE388\n    ldr r0, _021EE3DC ; =0x000005DC\n    bl PlaySE\n    ldr r0, _021EE3D8 ; =0x0001EC50\n    mov r1, #1\n    str r1, [r4, r0]\n    b _021EE3CA\n    mov r1, #1\n    add r2, r0, #0\n    tst r2, r1\n    beq _021EE3B0\n    ldr r0, _021EE3D8 ; =0x0001EC50\n    mov r3, #0x33\n    ldr r1, [r4, r0]\n    add r0, r4, #0\n    add r2, r1, #2\n    bl ov112_021EC440\n    ldr r0, _021EE3D0 ; =0x000005DD\n    bl PlaySE\n    mov r0, #0x41\n    pop {r4, pc}\n    mov r2, #2\n    tst r0, r2\n    beq _021EE3CA\n    add r0, r4, #0\n    mov r2, #3\n    mov r3, #0x33\n    bl ov112_021EC440\n    ldr r0, _021EE3DC ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x41\n    pop {r4, pc}\n    mov r0, #0x32\n    pop {r4, pc}\n    nop\n    _021EE3D0: .word 0x000005DD\n    _021EE3D4: .word gSystem\n    _021EE3D8: .word 0x0001EC50\n    _021EE3DC: .word 0x000005DC"
    );
    #endif
}

void ov112_021EE3E0(void) {
    /* Original at 0x021EE3E0 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl ov112_021EA570\n    ldr r0, _021EE454 ; =0x0001EC50\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _021EE44A\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, _021EE458 ; =0x0001EA98\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _021EE45C ; =0x0001EAA8\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, _021EE460 ; =0x0001EC7C\n    mov r1, #0\n    str r1, [r4, r0]\n    add sp, #0x10\n    mov r0, #0x34\n    pop {r4, pc}\n    mov r0, #0xb\n    str r0, [r4, #4]\n    mov r0, #0x42\n    add sp, #0x10\n    pop {r4, pc}\n    _021EE454: .word 0x0001EC50\n    _021EE458: .word 0x0001EA98\n    _021EE45C: .word 0x0001EAA8\n    _021EE460: .word 0x0001EC7C"
    );
    #endif
}

void ov112_021EE464(void) {
    /* Original at 0x021EE464 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _021EE4A8 ; =0x0001E440\n    ldr r5, _021EE4AC ; =0x0001F2E8\n    ldr r0, [r4, r0]\n    add r1, r4, r5\n    bl Pokewalker_TryGetBoxMon\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021EA5A4\n    ldr r0, _021EE4B0 ; =0x0001E448\n    mov r1, #1\n    ldr r0, [r4, r0]\n    add r2, r4, r5\n    bl BufferBoxMonNickname\n    ldr r2, _021EE4B4 ; =0x0001D7AC\n    add r0, r4, r5\n    add r1, r4, r2\n    sub r2, #0x10\n    add r2, r4, r2\n    mov r3, #0\n    bl ov112_021E9290\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x1a\n    mov r3, #0x35\n    bl ov112_021EC460\n    mov r0, #0x40\n    pop {r3, r4, r5, pc}\n    _021EE4A8: .word 0x0001E440\n    _021EE4AC: .word 0x0001F2E8\n    _021EE4B0: .word 0x0001E448\n    _021EE4B4: .word 0x0001D7AC"
    );
    #endif
}

void ov112_021EE4B8(void) {
    ov112_021EA688(0x36, 8, 0);
}

void ov112_021EE4D0(void) {
    /* Original at 0x021EE4D0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EE50C ; =0x0001F2D0\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0xb4\n    ble _021EE4E6\n    mov r0, #0x37\n    pop {r4, pc}\n    bl MTRandom\n    mov r1, #0xb4\n    bl _u32_div_f\n    ldr r0, _021EE50C ; =0x0001F2D0\n    ldr r0, [r4, r0]\n    cmp r0, r1\n    bls _021EE4FE\n    add r0, r4, #0\n    bl ov112_021EA7D0\n    ldr r0, _021EE50C ; =0x0001F2D0\n    ldr r0, [r4, r0]\n    bl ov112_021ED314\n    mov r0, #0x36\n    pop {r4, pc}\n    nop\n    _021EE50C: .word 0x0001F2D0"
    );
    #endif
}

u8 ov112_021EE510(void) {
    return 0x38;
}

void ov112_021EE514(void) {
    ov112_021EC460();
}

void ov112_021EE524(void) {
    /* Original at 0x021EE524 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #6\n    str r1, [r0, #4]\n    mov r0, #0x42\n    bx lr"
    );
    #endif
}

void ov112_021EE52C(void) {
    BeginNormalPaletteFade(0, 0x3f, 0x9a, 1, 6);
}

void ov112_021EE550(void) {
    /* Original at 0x021EE550 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _021EE56A\n    add r0, r4, #0\n    bl ov112_021EAA10\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #0x42\n    pop {r4, pc}\n    mov r0, #0x3f\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EE570(void) {
    TextPrinterCheckActive(0x40);
}

void ov112_021EE594(void) {
    /* Original at 0x021EE594 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EE5B4 ; =0x0001E530\n    ldr r0, [r4, r0]\n    bl ManagedSprite_IsAnimated\n    cmp r0, #0\n    bne _021EE5B0\n    add r0, r4, #0\n    bl ov112_021EA570\n    ldr r0, [r4, #0xc]\n    str r0, [r4, #8]\n    pop {r4, pc}\n    mov r0, #0x41\n    pop {r4, pc}\n    _021EE5B4: .word 0x0001E530"
    );
    #endif
}

void ov112_021EE5B8(void) {
    /* Original at 0x021EE5B8 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl ov112_021EA64C\n    add r0, r4, #0\n    mov r1, #3\n    bl ov112_021EA688\n    add r0, r4, #0\n    mov r1, #4\n    bl ov112_021EA688\n    add r0, r4, #0\n    mov r1, #8\n    bl ov112_021EA688\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    mov r0, #0x43\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

u8 ov112_021EE604(void) {
    return 2;
}

void ov112_021EE608(void) {
    /* Original at 0x021EE608 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021EE620 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #0x80\n    tst r1, r2\n    beq _021EE61A\n    mov r1, #6\n    str r1, [r0, #4]\n    mov r0, #3\n    bx lr\n    mov r0, #2\n    bx lr\n    nop\n    _021EE620: .word gSystem"
    );
    #endif
}

u8 ov112_021EE624(void) {
    return 1;
}

void ov112_021EE628(void) {
    /* Original at 0x021EE628 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    bl SaveArray_PCStorage_Get\n    add r7, r0, #0\n    ldr r0, _021EE67C ; =0x0001D770\n    mov r1, #2\n    ldr r4, [r5, r0]\n    add r0, r0, #4\n    ldr r6, [r5, r0]\n    ldr r0, _021EE680 ; =0x0001E440\n    add r2, r4, #0\n    ldr r0, [r5, r0]\n    bl sub_020326A4\n    ldr r0, _021EE680 ; =0x0001E440\n    ldr r1, _021EE684 ; =0x0001D798\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    bl sub_02032720\n    add r0, r7, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl PCStorage_GetMonByIndexPair\n    add r1, r0, #0\n    ldr r0, _021EE680 ; =0x0001E440\n    ldr r0, [r5, r0]\n    bl Pokewalker_SetBoxMon\n    add r0, r7, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl PCStorage_DeleteBoxMonByIndexPair\n    add r0, r5, #0\n    bl ov112_021EECF0\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EE67C: .word 0x0001D770\n    _021EE680: .word 0x0001E440\n    _021EE684: .word 0x0001D798"
    );
    #endif
}

void ov112_021EE688(void) {
    /* Original at 0x021EE688 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    lsl r2, r1, #2\n    ldr r1, _021EE6A8 ; =ov112_021FF8D8\n    ldr r1, [r1, r2]\n    blx r1\n    str r0, [r4, #8]\n    cmp r0, #8\n    bne _021EE6A4\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    _021EE6A8: .word ov112_021FF8D8"
    );
    #endif
}

u8 ov112_021EE6AC(void) {
    return 1;
}

void ov112_021EE6B0(void) {
    /* Original at 0x021EE6B0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #2\n    mov r2, #0xd\n    add r4, r0, #0\n    bl ov112_021EA08C\n    ldr r1, _021EE6CC ; =0x0001E524\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021EA5A4\n    mov r0, #1\n    pop {r4, pc}\n    _021EE6CC: .word 0x0001E524"
    );
    #endif
}

void ov112_021EE6D0(void) {
    /* Original at 0x021EE6D0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EE6F4 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EE6EE\n    add r0, r4, #0\n    bl ov112_021EA17C\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _021EE6F4: .word 0x0001E524"
    );
    #endif
}

void ov112_021EE6F8(void) {
    /* Original at 0x021EE6F8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    bl SaveGameNormal\n    ldr r0, [r4, #0x20]\n    bl Save_ClearStatusFlags\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EE70C(void) {
    ov112_021EA19C();
}

void ov112_021EE718(void) {
    /* Original at 0x021EE718 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EE738 ; =0x0001E440\n    ldr r0, [r4, r0]\n    bl sub_0203263C\n    cmp r0, #1\n    bne _021EE72C\n    mov r0, #5\n    pop {r4, pc}\n    mov r0, #0xa\n    str r0, [r4, #4]\n    mov r0, #3\n    str r0, [r4, #0x10]\n    mov r0, #7\n    pop {r4, pc}\n    _021EE738: .word 0x0001E440"
    );
    #endif
}

void ov112_021EE73C(void) {
    ov112_021EA08C(6, 2, 0x19);
}

void ov112_021EE754(void) {
    /* Original at 0x021EE754 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EE774 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EE770\n    mov r0, #0xb\n    str r0, [r4, #4]\n    mov r0, #7\n    pop {r4, pc}\n    mov r0, #6\n    pop {r4, pc}\n    _021EE774: .word 0x0001E524"
    );
    #endif
}

void ov112_021EE778(void) {
    /* Original at 0x021EE778 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    mov r0, #8\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EE7A8(void) {
    /* Original at 0x021EE7A8 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    bl SaveArray_PCStorage_Get\n    str r0, [sp, #4]\n    mov r0, #0x9a\n    bl AllocMonZeroed\n    add r4, r0, #0\n    bl Mon_GetBoxMon\n    add r6, r0, #0\n    ldr r0, _021EE89C ; =0x0001E440\n    add r2, sp, #8\n    ldr r0, [r5, r0]\n    add r1, sp, #8\n    add r2, #2\n    bl sub_02032688\n    add r0, sp, #8\n    ldrh r0, [r0, #2]\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _021EE8A0 ; =0x000010E7\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    bne _021EE81E\n    ldr r0, _021EE89C ; =0x0001E440\n    add r1, r6, #0\n    ldr r0, [r5, r0]\n    bl Pokewalker_TryGetBoxMon\n    add r7, r0, #0\n    beq _021EE804\n    ldr r2, _021EE8A4 ; =0x0001EC7C\n    add r0, r6, #0\n    ldr r2, [r5, r2]\n    add r1, r4, #0\n    bl ov112_021EE8BC\n    ldr r1, _021EE8A8 ; =0x0001F374\n    strh r0, [r5, r1]\n    ldr r1, _021EE8A4 ; =0x0001EC7C\n    add r0, r6, #0\n    ldr r1, [r5, r1]\n    bl ov112_021EE970\n    ldr r0, _021EE8A4 ; =0x0001EC7C\n    mov r1, #0\n    str r1, [r5, r0]\n    ldr r0, _021EE89C ; =0x0001E440\n    ldr r0, [r5, r0]\n    bl Pokewalker_ClearBoxMon\n    b _021EE854\n    ldr r7, _021EE8AC ; =0x00009D44\n    bl MTRandom\n    mov r1, #0x18\n    bl _u32_div_f\n    add r3, r1, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r1, _021EE8B0 ; =0x0001E438\n    add r0, r4, #0\n    ldr r1, [r5, r1]\n    add r2, r5, r7\n    bl ov112_021EE9A4\n    add r0, r4, #0\n    bl Mon_GetBoxMon\n    mov r1, #0x9a\n    str r1, [sp]\n    ldr r1, _021EE8B0 ; =0x0001E438\n    mov r2, #0\n    ldr r1, [r5, r1]\n    mov r3, #0xe9\n    bl BoxMonSetTrainerMemo\n    mov r7, #1\n    cmp r7, #0\n    beq _021EE890\n    ldr r0, [sp, #4]\n    add r1, sp, #0x10\n    add r2, sp, #0xc\n    bl PCStorage_FindFirstEmptySlot\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    add r3, r6, #0\n    bl PCStorage_PlaceMonInBoxByIndexPair\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    bl PCStorage_GetMonByIndexPair\n    ldr r1, _021EE8B4 ; =0x0001E430\n    str r0, [r5, r1]\n    add r1, #0x14\n    ldr r0, [r5, r1]\n    add r1, r4, #0\n    bl Pokedex_SetMonSeenFlag\n    ldr r0, _021EE8B8 ; =0x0001E444\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Pokedex_SetMonCaughtFlag\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EE89C: .word 0x0001E440\n    _021EE8A0: .word 0x000010E7\n    _021EE8A4: .word 0x0001EC7C\n    _021EE8A8: .word 0x0001F374\n    _021EE8AC: .word 0x00009D44\n    _021EE8B0: .word 0x0001E438\n    _021EE8B4: .word 0x0001E430\n    _021EE8B8: .word 0x0001E444"
    );
    #endif
}

void ov112_021EE8BC(void) {
    /* Original at 0x021EE8BC */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r6, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    mov r1, #0xa1\n    add r2, r6, #0\n    add r7, r0, #0\n    bl GetBoxMonData\n    cmp r0, #0x64\n    bhs _021EE91C\n    cmp r4, #0\n    bge _021EE8D8\n    add r4, r6, #0\n    add r0, r7, #0\n    bl CalcBoxMonExpToNextLevel\n    cmp r4, r0\n    blt _021EE8E6\n    add r4, r0, #0\n    mov r6, #1\n    add r0, r7, #0\n    mov r1, #8\n    mov r2, #0\n    bl GetBoxMonData\n    str r0, [sp]\n    add r0, r0, r4\n    str r0, [sp]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl CopyBoxPokemonToPokemon\n    add r0, r5, #0\n    mov r1, #8\n    add r2, sp, #0\n    bl SetMonData\n    add r0, r5, #0\n    bl CalcMonLevelAndStats\n    cmp r6, #0\n    beq _021EE91C\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #8\n    bl MonApplyFriendshipMod\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021EE920(void) {
    /* Original at 0x021EE920 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EE960 ; =0x0001F376\n    mov r1, #0\n    strh r1, [r4, r0]\n    ldr r0, _021EE964 ; =0x00009D78\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _021EE95C\n    ldr r0, _021EE968 ; =0x0001E440\n    ldr r0, [r4, r0]\n    bl sub_02032764\n    cmp r0, #0\n    bne _021EE95C\n    ldr r0, _021EE968 ; =0x0001E440\n    ldr r0, [r4, r0]\n    bl sub_0203276C\n    ldr r0, _021EE96C ; =0x0001E434\n    mov r1, #0xcf\n    ldr r0, [r4, r0]\n    mov r2, #1\n    mov r3, #0x9a\n    bl Bag_AddItem\n    ldr r0, _021EE960 ; =0x0001F376\n    mov r1, #1\n    strh r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _021EE960: .word 0x0001F376\n    _021EE964: .word 0x00009D78\n    _021EE968: .word 0x0001E440\n    _021EE96C: .word 0x0001E434"
    );
    #endif
}

void ov112_021EE970(void) {
    /* Original at 0x021EE970 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r2, _021EE9A0 ; =0x00001388\n    add r4, r0, #0\n    cmp r1, r2\n    blt _021EE99C\n    mov r1, #9\n    mov r2, #0\n    bl GetBoxMonData\n    add r1, sp, #0\n    strb r0, [r1]\n    ldrb r0, [r1]\n    cmp r0, #0xff\n    bhs _021EE99C\n    add r0, r0, #1\n    strb r0, [r1]\n    add r0, r4, #0\n    mov r1, #9\n    add r2, sp, #0\n    bl SetBoxMonData\n    add sp, #4\n    pop {r3, r4, pc}\n    _021EE9A0: .word 0x00001388"
    );
    #endif
}

void ov112_021EE9A4(void) {
    /* Original at 0x021EE9A4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #0x9a\n    add r7, r2, #0\n    str r3, [sp, #4]\n    bl PlayerProfile_GetPlayerName_NewString\n    add r6, r0, #0\n    add r0, r4, #0\n    bl PlayerProfile_GetTrainerID\n    add r1, r0, #0\n    ldr r0, [sp, #0x20]\n    ldr r3, [sp, #4]\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r7, #0\n    bl ov112_021EE9E4\n    add r0, r5, #0\n    mov r1, #0x91\n    add r2, r6, #0\n    bl SetMonData\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021EE9E4(void) {
    /* Original at 0x021EE9E4 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r2, #0\n    add r5, r0, #0\n    ldrb r0, [r4, #0xd]\n    add r7, r1, #0\n    mov r6, #0\n    lsl r0, r0, #0x1b\n    lsr r1, r0, #0x1b\n    add r0, sp, #0x10\n    strb r1, [r0]\n    ldrb r0, [r4, #0xd]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1e\n    cmp r0, #1\n    bne _021EEA06\n    mov r6, #0xfe\n    mov r0, #1\n    and r0, r3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #0x28]\n    lsl r2, r3, #0x18\n    str r0, [sp, #4]\n    ldrh r1, [r4]\n    add r0, r7, #0\n    lsr r2, r2, #0x18\n    add r3, r6, #0\n    bl ChangePersonalityToNatureGenderAndAbility\n    mov r1, #1\n    str r1, [sp]\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    str r7, [sp, #0xc]\n    ldrh r1, [r4]\n    ldrb r2, [r4, #0xc]\n    add r0, r5, #0\n    mov r3, #0x20\n    bl CreateMon\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #2\n    bl SetMonData\n    add r0, r5, #0\n    mov r1, #0x36\n    add r2, r4, #4\n    bl SetMonData\n    add r0, r5, #0\n    mov r1, #0x37\n    add r2, r4, #6\n    bl SetMonData\n    add r2, r4, #0\n    add r0, r5, #0\n    mov r1, #0x38\n    add r2, #8\n    bl SetMonData\n    add r4, #0xa\n    add r0, r5, #0\n    mov r1, #0x39\n    add r2, r4, #0\n    bl SetMonData\n    add r0, r5, #0\n    mov r1, #0x70\n    add r2, sp, #0x10\n    bl SetMonData\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021EEA7C(void) {
    /* Original at 0x021EEA7C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r7, _021EEADC ; =0x00009DAC\n    mov r6, #0\n    add r4, r5, #0\n    ldrh r1, [r4, r7]\n    cmp r1, #0\n    beq _021EEA98\n    ldr r0, _021EEAE0 ; =0x0001E434\n    mov r2, #1\n    ldr r0, [r5, r0]\n    mov r3, #0x9a\n    bl Bag_AddItem\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #3\n    blt _021EEA86\n    ldr r7, _021EEAE4 ; =0x00009DB8\n    mov r6, #0\n    add r4, r5, #0\n    ldrh r1, [r4, r7]\n    cmp r1, #0\n    beq _021EEAB8\n    ldr r0, _021EEAE0 ; =0x0001E434\n    mov r2, #1\n    ldr r0, [r5, r0]\n    mov r3, #0x9a\n    bl Bag_AddItem\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #0xa\n    blt _021EEAA6\n    ldr r0, _021EEAE8 ; =0x0000AABC\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    beq _021EEADA\n    ldr r1, _021EEAEC ; =0x0000B002\n    ldr r0, _021EEAE0 ; =0x0001E434\n    ldrh r1, [r5, r1]\n    ldr r0, [r5, r0]\n    mov r2, #1\n    mov r3, #0x9a\n    bl Bag_AddItem\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EEADC: .word 0x00009DAC\n    _021EEAE0: .word 0x0001E434\n    _021EEAE4: .word 0x00009DB8\n    _021EEAE8: .word 0x0000AABC\n    _021EEAEC: .word 0x0000B002"
    );
    #endif
}

void ov112_021EEAF0(void) {
    /* Original at 0x021EEAF0 */
    /* Requires manual decompilation - 209 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r6, r1, #0\n    bl SaveArray_PCStorage_Get\n    add r7, r0, #0\n    mov r0, #0x9a\n    bl AllocMonZeroed\n    add r4, r0, #0\n    ldr r0, _021EECC4 ; =0x0001E438\n    mov r1, #0x9a\n    ldr r0, [r5, r0]\n    bl PlayerProfile_GetPlayerName_NewString\n    str r0, [sp, #0xc]\n    ldr r0, _021EECC8 ; =0x0001E440\n    add r2, sp, #0x18\n    ldr r0, [r5, r0]\n    add r1, sp, #0x1c\n    add r2, #2\n    bl sub_02032688\n    cmp r6, #0\n    beq _021EEB2C\n    add r0, sp, #0x18\n    ldrh r0, [r0, #2]\n    b _021EEB2E\n    mov r0, #0\n    str r0, [sp, #0x24]\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0x20]\n    ldr r0, _021EECCC ; =0x00009D7C\n    add r6, r5, r0\n    ldrh r0, [r6]\n    cmp r0, #0\n    beq _021EEBA4\n    bl MTRandom\n    mov r1, #0x18\n    bl _u32_div_f\n    add r3, r1, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r1, _021EECC4 ; =0x0001E438\n    add r0, r4, #0\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl ov112_021EE9A4\n    add r0, r4, #0\n    bl Mon_GetBoxMon\n    mov r1, #0x9a\n    str r1, [sp]\n    ldr r1, _021EECC4 ; =0x0001E438\n    mov r2, #0\n    ldr r1, [r5, r1]\n    mov r3, #0xe9\n    bl BoxMonSetTrainerMemo\n    add r0, r4, #0\n    bl Mon_GetBoxMon\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    add r1, sp, #0x24\n    add r2, sp, #0x20\n    bl PCStorage_FindFirstEmptySlot\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #0x20]\n    ldr r3, [sp, #0x14]\n    add r0, r7, #0\n    bl PCStorage_PlaceMonInBoxByIndexPair\n    ldr r0, _021EECD0 ; =0x0001E444\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Pokedex_SetMonSeenFlag\n    ldr r0, _021EECD0 ; =0x0001E444\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Pokedex_SetMonCaughtFlag\n    ldr r0, [sp, #8]\n    add r6, #0x10\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, #3\n    blt _021EEB3A\n    ldr r0, _021EECD4 ; =0x0000AABC\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    beq _021EECB2\n    mov r0, #0x10\n    mov r1, #0x9a\n    bl String_New\n    mov r2, #0xad\n    lsl r2, r2, #8\n    add r1, r5, r2\n    str r1, [sp, #0x10]\n    ldrh r1, [r1]\n    str r0, [sp, #4]\n    cmp r1, #0\n    beq _021EECAC\n    add r2, #0x1e\n    add r1, r5, r2\n    bl CopyU16ArrayToString\n    add r0, r4, #0\n    bl ZeroMonData\n    add r0, r4, #0\n    bl Mon_GetBoxMon\n    add r6, r0, #0\n    bl MTRandom\n    mov r1, #0x18\n    bl _u32_div_f\n    ldr r0, [sp, #0x10]\n    add r3, r1, #0\n    ldrb r0, [r0, #0xe]\n    ldr r1, _021EECD8 ; =0x0000AD14\n    ldr r2, [sp, #0x10]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    str r0, [sp]\n    ldr r1, [r5, r1]\n    add r0, r4, #0\n    bl ov112_021EE9E4\n    ldr r0, _021EECDC ; =0x0000AD2E\n    add r2, sp, #0x18\n    ldrb r0, [r5, r0]\n    add r2, #1\n    lsl r0, r0, #0x1f\n    lsr r1, r0, #0x1f\n    add r0, sp, #0x18\n    strb r1, [r0, #1]\n    add r0, r6, #0\n    mov r1, #0x9d\n    bl SetBoxMonData\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0x91\n    bl SetBoxMonData\n    add r0, r4, #0\n    bl Mon_GetBoxMon\n    mov r1, #0x9a\n    str r1, [sp]\n    ldr r3, _021EECE0 ; =0x0000AD1A\n    ldr r1, _021EECC4 ; =0x0001E438\n    ldrh r3, [r5, r3]\n    ldr r1, [r5, r1]\n    mov r2, #4\n    bl BoxMonSetTrainerMemo\n    ldr r2, _021EECE4 ; =0x0000AD2F\n    add r0, r6, #0\n    mov r1, #0xa\n    add r2, r5, r2\n    bl SetBoxMonData\n    mov r1, #1\n    add r0, sp, #0x18\n    strb r1, [r0]\n    add r0, r6, #0\n    mov r1, #0x6e\n    add r2, sp, #0x18\n    bl SetBoxMonData\n    ldr r2, _021EECE8 ; =0x0000AD30\n    add r0, r6, #0\n    mov r1, #0x9b\n    add r2, r5, r2\n    bl SetBoxMonData\n    add r0, r7, #0\n    add r1, sp, #0x24\n    add r2, sp, #0x20\n    bl PCStorage_FindFirstEmptySlot\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #0x20]\n    add r0, r7, #0\n    add r3, r6, #0\n    bl PCStorage_PlaceMonInBoxByIndexPair\n    ldr r0, _021EECD0 ; =0x0001E444\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Pokedex_SetMonSeenFlag\n    ldr r0, _021EECD0 ; =0x0001E444\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Pokedex_SetMonCaughtFlag\n    ldr r0, _021EECEC ; =0x0001E430\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _021EECAC\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #0x20]\n    add r0, r7, #0\n    bl PCStorage_GetMonByIndexPair\n    ldr r1, _021EECEC ; =0x0001E430\n    str r0, [r5, r1]\n    ldr r0, [sp, #4]\n    bl String_Delete\n    ldr r0, [sp, #0xc]\n    bl String_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EECC4: .word 0x0001E438\n    _021EECC8: .word 0x0001E440\n    _021EECCC: .word 0x00009D7C\n    _021EECD0: .word 0x0001E444\n    _021EECD4: .word 0x0000AABC\n    _021EECD8: .word 0x0000AD14\n    _021EECDC: .word 0x0000AD2E\n    _021EECE0: .word 0x0000AD1A\n    _021EECE4: .word 0x0000AD2F\n    _021EECE8: .word 0x0000AD30\n    _021EECEC: .word 0x0001E430"
    );
    #endif
}

void ov112_021EECF0(void) {
    ov112_021EEAF0(1);
    ov112_021EEA7C(r4);
    ov112_021EE920(r4);
}

void ov112_021EED08(void) {
    /* Original at 0x021EED08 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021EEDE0 ; =0x0001E430\n    add r4, r0, #0\n    mov r2, #0\n    str r2, [r4, r1]\n    ldr r1, [r4, #0x10]\n    cmp r1, #1\n    bne _021EED8E\n    bl ov112_021EE7A8\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021EEAF0\n    add r0, r4, #0\n    bl ov112_021EEA7C\n    add r0, r4, #0\n    bl ov112_021EE920\n    ldr r0, _021EEDE4 ; =0x000010E7\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    bne _021EED46\n    ldr r0, _021EEDE8 ; =0x0001E440\n    mov r1, #1\n    ldr r0, [r4, r0]\n    mov r2, #0\n    bl sub_020326A4\n    ldr r0, _021EEDE0 ; =0x0001E430\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021EED76\n    ldr r2, _021EEDEC ; =0x0001D7AC\n    mov r3, #0\n    add r1, r4, r2\n    sub r2, #0x10\n    add r2, r4, r2\n    bl ov112_021E9290\n    add r0, r4, #0\n    bl ov112_021ED0C8\n    add r0, r4, #0\n    bl ov112_021EAA10\n    ldr r0, _021EEDF0 ; =0x0001F2C2\n    mov r1, #0\n    strb r1, [r4, r0]\n    ldr r0, _021EEDF4 ; =0x000004A2\n    bl PlayFanfare\n    b _021EED82\n    add r0, r4, #0\n    bl ov112_021EAA10\n    ldr r0, _021EEDF8 ; =0x0001F2D6\n    mov r1, #0x1f\n    strh r1, [r4, r0]\n    add r0, r4, #0\n    bl ov112_021E95A0\n    mov r0, #0\n    str r0, [r4, #8]\n    b _021EEDD2\n    cmp r1, #2\n    bne _021EEDA4\n    bl ov112_021EEA7C\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021EEAF0\n    mov r0, #5\n    str r0, [r4, #8]\n    b _021EEDD2\n    cmp r1, #4\n    bne _021EEDD2\n    bl ov112_021EE7A8\n    ldr r0, _021EEDE0 ; =0x0001E430\n    ldr r2, _021EEDEC ; =0x0001D7AC\n    ldr r0, [r4, r0]\n    add r1, r4, r2\n    sub r2, #0x10\n    add r2, r4, r2\n    mov r3, #0\n    bl ov112_021E9290\n    add r0, r4, #0\n    bl ov112_021ED0C8\n    mov r2, #0\n    ldr r0, _021EEDE8 ; =0x0001E440\n    str r2, [r4, #8]\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl sub_020326A4\n    ldr r1, _021EEDE4 ; =0x000010E7\n    mov r0, #4\n    ldrb r2, [r4, r1]\n    bic r2, r0\n    strb r2, [r4, r1]\n    mov r0, #2\n    pop {r4, pc}\n    _021EEDE0: .word 0x0001E430\n    _021EEDE4: .word 0x000010E7\n    _021EEDE8: .word 0x0001E440\n    _021EEDEC: .word 0x0001D7AC\n    _021EEDF0: .word 0x0001F2C2\n    _021EEDF4: .word 0x000004A2\n    _021EEDF8: .word 0x0001F2D6"
    );
    #endif
}

void ov112_021EEDFC(void) {
    /* Original at 0x021EEDFC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    lsl r2, r1, #2\n    ldr r1, _021EEE1C ; =ov112_021FF8F8\n    ldr r1, [r1, r2]\n    blx r1\n    str r0, [r4, #8]\n    cmp r0, #0xb\n    bne _021EEE18\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    _021EEE1C: .word ov112_021FF8F8"
    );
    #endif
}

void ov112_021EEE20(void) {
    ov112_021EA688();
}

void ov112_021EEE2C(void) {
    /* Original at 0x021EEE2C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #2\n    mov r2, #0xd\n    add r4, r0, #0\n    bl ov112_021EA08C\n    ldr r1, _021EEE48 ; =0x0001E524\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021EA5A4\n    mov r0, #1\n    pop {r4, pc}\n    _021EEE48: .word 0x0001E524"
    );
    #endif
}

void ov112_021EEE4C(void) {
    /* Original at 0x021EEE4C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EEE84 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EEE7E\n    ldr r0, _021EEE88 ; =0x0001F2D6\n    ldrh r0, [r4, r0]\n    cmp r0, #0x1f\n    bne _021EEE7E\n    bl sub_02006B84\n    cmp r0, #0\n    bne _021EEE7E\n    bl IsFanfarePlaying\n    add r0, r4, #0\n    bl ov112_021EA17C\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _021EEE84: .word 0x0001E524\n    _021EEE88: .word 0x0001F2D6"
    );
    #endif
}

void ov112_021EEE8C(void) {
    /* Original at 0x021EEE8C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    bl SaveGameNormal\n    ldr r0, [r4, #0x20]\n    bl Save_ClearStatusFlags\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EEEA0(void) {
    ov112_021EA19C();
}

void ov112_021EEEAC(void) {
    /* Original at 0x021EEEAC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x10]\n    cmp r1, #4\n    bne _021EEEB6\n    mov r1, #0\n    b _021EEEB8\n    mov r1, #8\n    str r1, [r0, #4]\n    mov r0, #0xa\n    bx lr"
    );
    #endif
}

void ov112_021EEEC0(void) {
    /* Original at 0x021EEEC0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #2\n    mov r2, #0xd\n    add r4, r0, #0\n    bl ov112_021EA08C\n    ldr r1, _021EEEDC ; =0x0001E524\n    str r0, [r4, r1]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021EA5A4\n    mov r0, #6\n    pop {r4, pc}\n    _021EEEDC: .word 0x0001E524"
    );
    #endif
}

void ov112_021EEEE0(void) {
    /* Original at 0x021EEEE0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EEF04 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021EEEFE\n    add r0, r4, #0\n    bl ov112_021EA17C\n    mov r0, #7\n    pop {r4, pc}\n    mov r0, #6\n    pop {r4, pc}\n    nop\n    _021EEF04: .word 0x0001E524"
    );
    #endif
}

void ov112_021EEF08(void) {
    /* Original at 0x021EEF08 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    bl SaveGameNormal\n    ldr r0, [r4, #0x20]\n    bl Save_ClearStatusFlags\n    mov r0, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EEF1C(void) {
    ov112_021EA19C();
}

void ov112_021EEF28(void) {
    /* Original at 0x021EEF28 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xa\n    str r1, [r0, #4]\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov112_021EEF30(void) {
    /* Original at 0x021EEF30 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    mov r1, #6\n    bl ov112_021EA688\n    mov r0, #0xb\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EEF68(void) {
    /* Original at 0x021EEF68 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x24\n    ldr r6, _021EF028 ; =0x0001D764\n    add r5, r0, #0\n    ldr r1, [r5, r6]\n    cmp r1, #0\n    beq _021EEF7C\n    cmp r1, #1\n    beq _021EEF86\n    b _021EF022\n    bl ov112_021E77E4\n    mov r0, #1\n    str r0, [r5, r6]\n    b _021EF022\n    mov r0, #0x9a\n    bl BgConfig_Alloc\n    str r0, [r5, #0x18]\n    bl ov112_021EF15C\n    mov r0, #0x9a\n    mov r1, #1\n    mov r2, #0x12\n    bl sub_020932E0\n    add r1, r6, #4\n    str r0, [r5, r1]\n    mov r0, #0x9a\n    bl ov112_021F039C\n    add r1, r6, #0\n    add r1, #8\n    str r0, [r5, r1]\n    ldr r0, [r5, #0x18]\n    bl ov112_021EF17C\n    bl ov112_021EF19C\n    add r0, r6, #0\n    add r0, r5, r0\n    bl ov112_021EF1CC\n    mov r1, #0\n    add r0, r6, #0\n    str r1, [r5, r0]\n    ldr r0, [r5, #0x20]\n    bl SaveArray_PCStorage_Get\n    add r4, r0, #0\n    ldr r0, [r5, #0x20]\n    bl SaveArray_Party_Get\n    mov r1, #0\n    str r1, [sp]\n    add r3, r0, #0\n    str r1, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _021EF02C ; =ov112_021EF298\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _021EF030 ; =ov112_021EF300\n    add r2, r4, #0\n    str r0, [sp, #0x14]\n    add r0, r6, #0\n    add r0, #0xc\n    add r1, r5, r0\n    str r1, [sp, #0x18]\n    ldr r1, _021EF034 ; =ov112_021EF3F8\n    sub r0, #8\n    str r1, [sp, #0x1c]\n    str r5, [sp, #0x20]\n    ldr r0, [r5, r0]\n    ldr r1, [r5, #0x18]\n    bl sub_02093440\n    add r0, r6, #0\n    add r0, #8\n    ldr r0, [r5, r0]\n    ldr r1, [r5, #0x18]\n    bl ov112_021F03BC\n    add r1, r6, #0\n    ldr r0, _021EF038 ; =ov112_021EF310\n    add r1, r5, r1\n    bl Main_SetVBlankIntrCB\n    mov r0, #0\n    str r0, [r5, r6]\n    add sp, #0x24\n    mov r0, #2\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #1\n    add sp, #0x24\n    pop {r3, r4, r5, r6, pc}\n    _021EF028: .word 0x0001D764\n    _021EF02C: .word ov112_021EF298\n    _021EF030: .word ov112_021EF300\n    _021EF034: .word ov112_021EF3F8\n    _021EF038: .word ov112_021EF310"
    );
    #endif
}

void ov112_021EF03C(void) {
    /* Original at 0x021EF03C */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _021EF0FC ; =0x0001D764\n    add r4, r5, r0\n    ldr r0, [r4]\n    cmp r0, #5\n    bhi _021EF0EA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EF058: ; jump table\n    mov r0, #1\n    str r0, [r4]\n    b _021EF0EA\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x9a\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #2\n    str r0, [r4]\n    b _021EF0EA\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021EF0EA\n    mov r0, #3\n    str r0, [r4]\n    b _021EF0EA\n    ldr r0, [r4, #4]\n    bl sub_020935E0\n    cmp r0, #2\n    bne _021EF0A8\n    mov r0, #0\n    str r0, [r4, #0x14]\n    mov r0, #4\n    str r0, [r4]\n    b _021EF0EA\n    cmp r0, #3\n    bne _021EF0EA\n    mov r0, #1\n    str r0, [r4, #0x14]\n    mov r0, #4\n    str r0, [r4]\n    b _021EF0EA\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x9a\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #5\n    str r0, [r4]\n    b _021EF0EA\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021EF0EA\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov112_021EF31C\n    add sp, #0xc\n    mov r0, #3\n    pop {r4, r5, pc}\n    ldr r0, [r4, #4]\n    bl sub_02093A40\n    ldr r0, [r4, #8]\n    bl ov112_021F050C\n    mov r0, #2\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _021EF0FC: .word 0x0001D764"
    );
    #endif
}

void ov112_021EF100(void) {
    /* Original at 0x021EF100 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021EF14C ; =0x0001D764\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4, r1]\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    ldr r0, _021EF150 ; =0x0001D768\n    ldr r0, [r4, r0]\n    bl sub_02093354\n    ldr r0, _021EF154 ; =0x0001D76C\n    ldr r0, [r4, r0]\n    bl ov112_021F051C\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    ldr r0, [r4, #0x18]\n    bl Heap_Free\n    add r0, r4, #0\n    bl ov112_021E7768\n    ldr r0, _021EF158 ; =0x0001D778\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _021EF144\n    mov r0, #0\n    b _021EF146\n    mov r0, #3\n    str r0, [r4, #4]\n    mov r0, #1\n    pop {r4, pc}\n    _021EF14C: .word 0x0001D764\n    _021EF150: .word 0x0001D768\n    _021EF154: .word 0x0001D76C\n    _021EF158: .word 0x0001D778"
    );
    #endif
}

void ov112_021EF15C(void) {
    GfGfx_SetBanks(5);
}

void ov112_021EF17C(void) {
    SetBothScreensModesAndDisable();
}

void ov112_021EF19C(void) {
    /* Original at 0x021EF19C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _021EF1C8 ; =ov112_021FF0EC\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl ObjCharTransfer_Init\n    mov r0, #0x14\n    mov r1, #0x9a\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _021EF1C8: .word ov112_021FF0EC"
    );
    #endif
}

void ov112_021EF1CC(void) {
    /* Original at 0x021EF1CC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r2, #0x9a\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    add sp, #0x14\n    pop {pc}"
    );
    #endif
}

void ov112_021EF1F0(void) {
    /* Original at 0x021EF1F0 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r3, #0\n    bl PCStorage_GetMonByIndexPair\n    mov r1, #0xac\n    mov r2, #0\n    add r4, r0, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _021EF282\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    mov r1, #0\n    str r0, [r5]\n    add r0, r4, #0\n    add r2, r1, #0\n    bl GetBoxMonData\n    str r0, [r5, #4]\n    add r0, r4, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r5, #8]\n    add r0, r4, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r5, #0xa]\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r5, #0xc]\n    mov r0, #0\n    add r2, r5, #0\n    strh r0, [r5, #0xe]\n    add r0, r4, #0\n    mov r1, #0x75\n    add r2, #0x18\n    bl GetBoxMonData\n    add r0, r4, #0\n    bl BoxMonIsShiny\n    strh r0, [r5, #0x10]\n    add r0, r4, #0\n    mov r1, #0x6f\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r5, #0x12]\n    add r0, r4, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r5, #0x14]\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r5, #0x16]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    str r0, [r5]\n    str r0, [r5, #4]\n    strh r0, [r5, #8]\n    strh r0, [r5, #0xa]\n    strh r0, [r5, #0xc]\n    strh r0, [r5, #0xe]\n    strh r0, [r5, #0x10]\n    strh r0, [r5, #0x12]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021EF298(void) {
    /* Original at 0x021EF298 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r3, #0\n    bl PCStorage_GetMonByIndexPair\n    mov r1, #0xac\n    mov r2, #0\n    add r5, r0, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _021EF2E6\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    str r0, [r4]\n    mov r2, #0\n    str r2, [r4, #4]\n    add r0, r5, #0\n    mov r1, #0x4c\n    bl GetBoxMonData\n    strh r0, [r4, #8]\n    add r0, r5, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r4, #0xa]\n    mov r0, #0\n    strh r0, [r4, #0xc]\n    strh r0, [r4, #0xe]\n    strh r0, [r4, #0x10]\n    strh r0, [r4, #0x12]\n    strh r0, [r4, #0x14]\n    strh r0, [r4, #0x16]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    str r0, [r4]\n    str r0, [r4, #4]\n    strh r0, [r4, #8]\n    strh r0, [r4, #0xa]\n    strh r0, [r4, #0xc]\n    strh r0, [r4, #0xe]\n    strh r0, [r4, #0x10]\n    strh r0, [r4, #0x12]\n    strh r0, [r4, #0x14]\n    strh r0, [r4, #0x16]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021EF300(void) {
    /* Original at 0x021EF300 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    ldr r3, _021EF30C ; =PCStorage_GetBoxName\n    bx r3\n    _021EF30C: .word PCStorage_GetBoxName"
    );
    #endif
}

void ov112_021EF310(void) {
    sub_02093594();
}

void ov112_021EF31C(void) {
    /* Original at 0x021EF31C */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    ldr r0, [r5, #0x14]\n    add r4, r1, #0\n    cmp r0, #0\n    bne _021EF3EA\n    ldr r6, [r5, #0xc]\n    ldr r0, [r4, #0x20]\n    cmp r6, #0x12\n    bne _021EF38C\n    bl SaveArray_Party_Get\n    ldr r1, [r5, #0x10]\n    bl Party_GetMonByIndex\n    add r6, r0, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r5, #0x18]\n    add r0, r6, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r1, r5, #0\n    add r1, #0x30\n    strb r0, [r1]\n    add r2, r5, #0\n    add r0, r6, #0\n    mov r1, #0x75\n    add r2, #0x1a\n    bl GetMonData\n    add r0, r6, #0\n    bl MonIsShiny\n    add r1, r5, #0\n    add r1, #0x31\n    strb r0, [r1]\n    add r0, r6, #0\n    mov r1, #0x6f\n    mov r2, #0\n    bl GetMonData\n    add r5, #0x32\n    strb r0, [r5]\n    ldr r0, _021EF3F0 ; =0x0001E42C\n    mov r1, #0\n    str r6, [r4, r0]\n    add r0, r0, #4\n    add sp, #0x30\n    str r1, [r4, r0]\n    pop {r4, r5, r6, pc}\n    bl SaveArray_PCStorage_Get\n    ldr r2, [r5, #0x10]\n    add r1, r6, #0\n    bl PCStorage_GetMonByIndexPair\n    mov r1, #0xac\n    mov r2, #0\n    add r6, r0, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _021EF3B0\n    ldr r0, _021EF3F4 ; =0x0001E430\n    mov r1, #0\n    str r6, [r4, r0]\n    sub r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x20]\n    bl SaveArray_PCStorage_Get\n    ldr r1, [r5, #0xc]\n    ldr r2, [r5, #0x10]\n    add r3, sp, #0\n    bl ov112_021EF1F0\n    ldr r0, [sp]\n    mov r2, #0xb\n    strh r0, [r5, #0x18]\n    add r0, sp, #0\n    ldrh r1, [r0, #0xa]\n    add r0, r5, #0\n    add r0, #0x30\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x1a\n    add r1, sp, #0x18\n    bl CopyU16StringArrayN\n    add r0, r5, #0\n    add r1, sp, #0\n    ldrh r2, [r1, #0x10]\n    add r0, #0x31\n    add r5, #0x32\n    strb r2, [r0]\n    ldrh r0, [r1, #0x12]\n    strb r0, [r5]\n    add sp, #0x30\n    pop {r4, r5, r6, pc}\n    nop\n    _021EF3F0: .word 0x0001E42C\n    _021EF3F4: .word 0x0001E430"
    );
    #endif
}

void ov112_021EF3F8(void) {
    /* Original at 0x021EF3F8 */
    /* Requires manual decompilation - 166 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x60\n    add r5, r0, #0\n    ldr r0, _021EF564 ; =0x0001D764\n    add r4, r1, #0\n    add r0, r2, r0\n    str r0, [sp]\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _021EF412\n    cmp r4, r0\n    bne _021EF414\n    b _021EF550\n    mov r1, #2\n    add r0, sp, #0x34\n    strb r1, [r0, #9]\n    cmp r5, #0x12\n    ldr r0, [r2, #0x20]\n    bne _021EF4D6\n    bl SaveArray_Party_Get\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #0\n    add r7, r0, #0\n    add r2, r1, #0\n    bl GetMonData\n    str r0, [sp, #0x34]\n    add r0, r7, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #4\n    strh r0, [r1, #0x34]\n    add r0, r7, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #0x34\n    strb r0, [r1, #7]\n    add r2, sp, #0x3c\n    add r0, r7, #0\n    mov r1, #0x75\n    add r2, #2\n    bl GetMonData\n    add r0, r7, #0\n    bl MonIsShiny\n    add r1, sp, #0x34\n    strb r0, [r1, #6]\n    add r0, r7, #0\n    mov r1, #0x6f\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #0x34\n    strb r0, [r1, #8]\n    add r0, r7, #0\n    mov r1, #0xb\n    mov r2, #0\n    bl GetMonData\n    mov r4, #0\n    mov r3, #1\n    add r5, r0, #0\n    add r1, r4, #0\n    add r2, sp, #0x34\n    add r0, r3, #0\n    add r6, r5, #0\n    asr r6, r4\n    tst r6, r0\n    beq _021EF49C\n    add r6, r2, r4\n    add r6, #0x20\n    strb r3, [r6]\n    b _021EF4A2\n    add r6, r2, r4\n    add r6, #0x20\n    strb r1, [r6]\n    add r4, r4, #1\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x18\n    cmp r4, #6\n    blo _021EF48C\n    add r0, r7, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #0x34\n    strh r0, [r1, #0x26]\n    add r0, r7, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #0x54\n    strb r0, [r1, #8]\n    ldr r0, [sp]\n    add r1, sp, #0x34\n    ldr r0, [r0, #8]\n    bl ov112_021F04DC\n    add sp, #0x60\n    pop {r3, r4, r5, r6, r7, pc}\n    bl SaveArray_PCStorage_Get\n    add r1, r5, #0\n    add r2, r4, #0\n    add r3, sp, #4\n    bl ov112_021EF1F0\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #4]\n    str r0, [sp, #0x34]\n    add r0, sp, #4\n    strh r1, [r0, #0x34]\n    ldrh r1, [r0, #0xa]\n    add r0, sp, #0x34\n    mov r2, #0xb\n    strb r1, [r0, #7]\n    add r0, sp, #0x3c\n    add r0, #2\n    add r1, sp, #0x1c\n    bl CopyU16StringArrayN\n    add r0, sp, #4\n    ldrh r1, [r0, #0x10]\n    add r2, sp, #0x34\n    mov r5, #0\n    strb r1, [r2, #6]\n    ldrh r1, [r0, #0x12]\n    mov r3, #1\n    strb r1, [r2, #8]\n    ldrh r4, [r0, #0x16]\n    add r1, r5, #0\n    add r0, r3, #0\n    add r6, r4, #0\n    asr r6, r5\n    tst r6, r0\n    beq _021EF526\n    add r6, r2, r5\n    add r6, #0x20\n    strb r3, [r6]\n    b _021EF52C\n    add r6, r2, r5\n    add r6, #0x20\n    strb r1, [r6]\n    add r5, r5, #1\n    lsl r5, r5, #0x18\n    lsr r5, r5, #0x18\n    cmp r5, #6\n    blo _021EF516\n    add r0, sp, #4\n    ldrh r2, [r0, #0xc]\n    add r1, sp, #0x34\n    strh r2, [r1, #0x26]\n    ldrh r2, [r0, #0x14]\n    add r0, sp, #0x54\n    strb r2, [r0, #8]\n    ldr r0, [sp]\n    ldr r0, [r0, #8]\n    bl ov112_021F04DC\n    add sp, #0x60\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add r1, sp, #0x34\n    strb r0, [r1, #9]\n    ldr r0, [sp]\n    ldr r0, [r0, #8]\n    bl ov112_021F04DC\n    add sp, #0x60\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EF564: .word 0x0001D764"
    );
    #endif
}

void ov112_021EF568(void) {
    /* Original at 0x021EF568 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    ldr r2, [r0, #0x20]\n    ldr r1, _021EF5A0 ; =0x0001D750\n    ldr r3, _021EF5A4 ; =0x00007FFF\n    str r2, [r0, r1]\n    ldr r2, _021EF5A8 ; =0x00009DFC\n    add r1, r1, #4\n    add r2, r0, r2\n    str r2, [r0, r1]\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x9a\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    mov r1, #0x10\n    bl GF_SndStartFadeOutBGM\n    mov r0, #2\n    add sp, #0xc\n    pop {pc}\n    _021EF5A0: .word 0x0001D750\n    _021EF5A4: .word 0x00007FFF\n    _021EF5A8: .word 0x00009DFC"
    );
    #endif
}

void ov112_021EF5AC(void) {
    /* Original at 0x021EF5AC */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    cmp r0, #3\n    bhi _021EF61C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EF5C2: ; jump table\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _021EF61C\n    add r0, r4, #0\n    bl ov112_021E77E4\n    ldr r0, _021EF620 ; =0x00009DFC\n    add r0, r4, r0\n    bl ov112_021F31D8\n    cmp r0, #0\n    beq _021EF5E8\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #1\n    str r0, [r4, #8]\n    b _021EF61C\n    ldr r1, _021EF624 ; =0x0001D750\n    ldr r0, _021EF628 ; =ov112_021FF124\n    add r1, r4, r1\n    mov r2, #0x9a\n    bl OverlayManager_New\n    str r0, [r4, #0x1c]\n    mov r0, #2\n    str r0, [r4, #8]\n    b _021EF61C\n    ldr r0, [r4, #0x1c]\n    bl OverlayManager_Run\n    cmp r0, #0\n    beq _021EF61C\n    ldr r0, [r4, #0x1c]\n    bl OverlayManager_Delete\n    mov r0, #3\n    str r0, [r4, #8]\n    b _021EF61C\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    _021EF620: .word 0x00009DFC\n    _021EF624: .word 0x0001D750\n    _021EF628: .word ov112_021FF124"
    );
    #endif
}

void ov112_021EF62C(void) {
    ov112_021E7768(0, 0xa, 1);
}

u8 ov112_021EF640(void) {
    return 2;
}

void ov112_021EF644(void) {
    /* Original at 0x021EF644 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021EF65C ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #0x80\n    tst r1, r2\n    beq _021EF656\n    mov r1, #3\n    str r1, [r0, #4]\n    add r0, r1, #0\n    bx lr\n    mov r0, #2\n    bx lr\n    nop\n    _021EF65C: .word gSystem"
    );
    #endif
}

u8 ov112_021EF660(void) {
    return 1;
}

u32 ov112_021EF664(void) {
    ov112_021E9C10(1);
    ov112_021E9A78(r4, 4);
    return 2;
}

void ov112_021EF67C(void) {
    /* Original at 0x021EF67C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    lsl r2, r1, #2\n    ldr r1, _021EF69C ; =ov112_021FF924\n    ldr r1, [r1, r2]\n    blx r1\n    str r0, [r4, #8]\n    cmp r0, #0x25\n    bne _021EF698\n    mov r0, #0\n    str r0, [r4, #8]\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    _021EF69C: .word ov112_021FF924"
    );
    #endif
}

void ov112_021EF6A0(void) {
    /* Original at 0x021EF6A0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #0x18]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    add r0, r4, #0\n    mov r1, #6\n    bl ov112_021E9C10\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021E9A78\n    mov r0, #1\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021EF700(void) {
    /* Original at 0x021EF700 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, [r4, #0x10]\n    cmp r0, #2\n    bne _021EF72C\n    add sp, #0x10\n    mov r0, #0x16\n    pop {r4, pc}\n    cmp r0, #3\n    bne _021EF736\n    add sp, #0x10\n    mov r0, #0x1e\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xf\n    bl ov112_021E7CA4\n    ldr r2, _021EF754 ; =0x0001E494\n    add r0, r4, #0\n    ldr r2, [r4, r2]\n    mov r1, #1\n    mov r3, #0\n    bl ov112_021E9FD8\n    mov r0, #1\n    add sp, #0x10\n    pop {r4, pc}\n    _021EF754: .word 0x0001E494"
    );
    #endif
}

void ov112_021EF758(void) {
    /* Original at 0x021EF758 */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, _021EF8A0 ; =0x0001E440\n    mov r4, #0\n    ldr r0, [r5, r0]\n    bl sub_02032718\n    add r2, r0, #0\n    ldr r0, _021EF8A4 ; =0x0001E448\n    lsl r2, r2, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #2\n    lsr r2, r2, #0x18\n    bl BufferPokewalkerCourseName\n    ldr r0, _021EF8A8 ; =0x000010F0\n    ldr r1, [r5, r0]\n    ldr r0, _021EF8AC ; =0x0001D758\n    ldr r0, [r5, r0]\n    cmp r1, r0\n    bls _021EF786\n    sub r4, r1, r0\n    ldr r0, _021EF8A0 ; =0x0001E440\n    add r1, sp, #0x10\n    ldr r0, [r5, r0]\n    add r2, sp, #0xc\n    bl sub_02032674\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021EF8A4 ; =0x0001E448\n    mov r1, #5\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    mov r3, #7\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, _021EF8B0 ; =0x00009D7A\n    ldr r0, _021EF8A4 ; =0x0001E448\n    ldrh r2, [r5, r2]\n    ldr r0, [r5, r0]\n    mov r1, #3\n    mov r3, #7\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021EF8A4 ; =0x0001E448\n    ldr r2, [sp, #0x10]\n    ldr r0, [r5, r0]\n    mov r1, #6\n    mov r3, #7\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021EF8A4 ; =0x0001E448\n    mov r1, #7\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0xc]\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    mov r3, #0xc1\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0x38\n    lsl r3, r3, #0xa\n    bl ov112_021E9F5C\n    mov r3, #0xc1\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0x39\n    lsl r3, r3, #0xa\n    bl ov112_021E9F5C\n    mov r3, #0xc1\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #0x3a\n    lsl r3, r3, #0xa\n    bl ov112_021E9F5C\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp]\n    ldr r2, _021EF8B4 ; =0x0001E4B4\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    mov r1, #5\n    mov r3, #0\n    bl ov112_021E9FA4\n    mov r3, #0xc1\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0x3c\n    lsl r3, r3, #0xa\n    bl ov112_021E9F5C\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp]\n    ldr r2, _021EF8B8 ; =0x0001E4BC\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    mov r1, #7\n    mov r3, #0\n    bl ov112_021E9FA4\n    mov r3, #0xc1\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0x3e\n    lsl r3, r3, #0xa\n    bl ov112_021E9F5C\n    add r0, r5, #0\n    mov r1, #9\n    bl ov112_021EA670\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #0xd2\n    mov r3, #0x40\n    bl ov112_021EA6B8\n    ldr r3, _021EF8BC ; =0x00009D44\n    add r0, r5, #0\n    ldrh r2, [r5, r3]\n    add r3, #0xd\n    ldrb r3, [r5, r3]\n    mov r1, #0\n    lsl r3, r3, #0x1b\n    lsr r3, r3, #0x1b\n    bl ov112_021EAB78\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x9a\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #2\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _021EF8A0: .word 0x0001E440\n    _021EF8A4: .word 0x0001E448\n    _021EF8A8: .word 0x000010F0\n    _021EF8AC: .word 0x0001D758\n    _021EF8B0: .word 0x00009D7A\n    _021EF8B4: .word 0x0001E4B4\n    _021EF8B8: .word 0x0001E4BC\n    _021EF8BC: .word 0x00009D44"
    );
    #endif
}

void ov112_021EF8C0(void) {
    IsPaletteFadeFinished();
}

void ov112_021EF8D4(void) {
    /* Original at 0x021EF8D4 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _021EF940 ; =0x0001E440\n    ldr r0, [r5, r0]\n    bl sub_02032718\n    add r2, r0, #0\n    ldr r0, _021EF944 ; =0x0001E448\n    lsl r2, r2, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #1\n    lsr r2, r2, #0x18\n    bl BufferPokewalkerCourseName\n    mov r0, #0xc\n    mov r1, #0x9a\n    bl String_New\n    ldr r1, _021EF948 ; =0x00009D54\n    mov r2, #0xb\n    add r1, r5, r1\n    add r4, r0, #0\n    bl CopyU16ArrayToStringN\n    mov r1, #1\n    ldr r0, _021EF94C ; =0x00001090\n    str r1, [sp]\n    ldr r0, [r5, r0]\n    ldr r3, _021EF950 ; =0x00009D51\n    str r0, [sp, #4]\n    ldrb r3, [r5, r3]\n    ldr r0, _021EF944 ; =0x0001E448\n    add r2, r4, #0\n    lsl r3, r3, #0x19\n    ldr r0, [r5, r0]\n    lsr r3, r3, #0x1e\n    bl BufferString\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x2c\n    bl ov112_021EA08C\n    ldr r1, _021EF954 ; =0x0001E524\n    str r0, [r5, r1]\n    mov r0, #4\n    str r0, [r5, #0xc]\n    mov r0, #0x23\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _021EF940: .word 0x0001E440\n    _021EF944: .word 0x0001E448\n    _021EF948: .word 0x00009D54\n    _021EF94C: .word 0x00001090\n    _021EF950: .word 0x00009D51\n    _021EF954: .word 0x0001E524"
    );
    #endif
}

void ov112_021EF958(void) {
    /* Original at 0x021EF958 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021EF98C ; =0x0001F374\n    add r4, r0, #0\n    ldrh r1, [r4, r1]\n    cmp r1, #0\n    bne _021EF968\n    mov r0, #5\n    pop {r4, pc}\n    mov r1, #0\n    mov r2, #0x34\n    bl ov112_021EA08C\n    ldr r1, _021EF990 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #5\n    str r0, [r4, #0xc]\n    mov r0, #0x4a\n    lsl r0, r0, #4\n    bl PlayFanfare\n    ldr r0, _021EF98C ; =0x0001F374\n    mov r1, #0\n    strh r1, [r4, r0]\n    mov r0, #0x23\n    pop {r4, pc}\n    nop\n    _021EF98C: .word 0x0001F374\n    _021EF990: .word 0x0001E524"
    );
    #endif
}

void ov112_021EF994(void) {
    /* Original at 0x021EF994 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021EF9C8 ; =0x00009D7A\n    add r4, r0, #0\n    ldrh r1, [r4, r1]\n    cmp r1, #0\n    bne _021EF9AA\n    mov r1, #0\n    mov r2, #0x2e\n    bl ov112_021EA08C\n    b _021EF9BA\n    ldr r0, _021EF9CC ; =0x000004A1\n    bl PlayFanfare\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x2d\n    bl ov112_021EA08C\n    ldr r1, _021EF9D0 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #6\n    str r0, [r4, #0xc]\n    mov r0, #0x23\n    pop {r4, pc}\n    nop\n    _021EF9C8: .word 0x00009D7A\n    _021EF9CC: .word 0x000004A1\n    _021EF9D0: .word 0x0001E524"
    );
    #endif
}

void ov112_021EF9D4(void) {
    /* Original at 0x021EF9D4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EFA10 ; =0x0001EC78\n    ldr r2, [r4, r0]\n    cmp r2, #0\n    beq _021EFA0A\n    ldr r0, _021EFA14 ; =0x0001E448\n    lsl r2, r2, #0x18\n    ldr r0, [r4, r0]\n    mov r1, #4\n    lsr r2, r2, #0x18\n    bl BufferPokewalkerCourseName\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x30\n    bl ov112_021EA08C\n    ldr r1, _021EFA18 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #7\n    str r0, [r4, #0xc]\n    ldr r0, _021EFA10 ; =0x0001EC78\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #0x23\n    pop {r4, pc}\n    mov r0, #8\n    pop {r4, pc}\n    nop\n    _021EFA10: .word 0x0001EC78\n    _021EFA14: .word 0x0001E448\n    _021EFA18: .word 0x0001E524"
    );
    #endif
}

void ov112_021EFA1C(void) {
    /* Original at 0x021EFA1C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EFA3C ; =0x000004A2\n    bl PlayFanfare\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x37\n    bl ov112_021EA08C\n    ldr r1, _021EFA40 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #8\n    str r0, [r4, #0xc]\n    mov r0, #0x23\n    pop {r4, pc}\n    _021EFA3C: .word 0x000004A2\n    _021EFA40: .word 0x0001E524"
    );
    #endif
}

void ov112_021EFA44(void) {
    /* Original at 0x021EFA44 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _021EFA6C ; =0x0001F376\n    add r4, r0, #0\n    ldrh r1, [r4, r2]\n    cmp r1, #0\n    beq _021EFA66\n    mov r1, #0\n    strh r1, [r4, r2]\n    mov r2, #0x35\n    bl ov112_021EA08C\n    ldr r1, _021EFA70 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #9\n    str r0, [r4, #0xc]\n    mov r0, #0x23\n    pop {r4, pc}\n    mov r0, #0xa\n    pop {r4, pc}\n    nop\n    _021EFA6C: .word 0x0001F376\n    _021EFA70: .word 0x0001E524"
    );
    #endif
}

void ov112_021EFA74(void) {
    /* Original at 0x021EFA74 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0\n    mov r2, #0x36\n    add r4, r0, #0\n    bl ov112_021EA08C\n    ldr r1, _021EFA94 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0xa\n    str r0, [r4, #0xc]\n    ldr r0, _021EFA98 ; =0x000004A2\n    bl PlayFanfare\n    mov r0, #0x23\n    pop {r4, pc}\n    nop\n    _021EFA94: .word 0x0001E524\n    _021EFA98: .word 0x000004A2"
    );
    #endif
}

void ov112_021EFA9C(void) {
    BeginNormalPaletteFade(0, 0x9a, 0xb, 1, 6);
}

void ov112_021EFAC0(void) {
    IsPaletteFadeFinished();
}

void ov112_021EFAD4(void) {
    /* Original at 0x021EFAD4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r2, #0\n    ldr r3, _021EFB10 ; =0x000001ED\n    add r5, r2, #0\n    ldrh r4, [r0, #0xc]\n    cmp r4, #0\n    beq _021EFAE8\n    cmp r4, r3\n    bhi _021EFAE8\n    add r2, r2, #1\n    add r5, r5, #1\n    add r0, #0x10\n    cmp r5, #3\n    blt _021EFADC\n    ldrb r0, [r1]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    beq _021EFB0A\n    mov r0, #0x91\n    lsl r0, r0, #2\n    ldrh r1, [r1, r0]\n    cmp r1, #0\n    beq _021EFB0A\n    sub r0, #0x57\n    cmp r1, r0\n    bhi _021EFB0A\n    add r2, r2, #1\n    add r0, r2, #0\n    pop {r4, r5}\n    bx lr\n    _021EFB10: .word 0x000001ED"
    );
    #endif
}

void ov112_021EFB14(void) {
    /* Original at 0x021EFB14 */
    /* Requires manual decompilation - 168 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r1, #4\n    bl ov112_021E9C10\n    add r0, r5, #0\n    mov r1, #5\n    bl ov112_021E9A78\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    ldr r0, _021EFC84 ; =0x00009D70\n    ldr r1, _021EFC88 ; =0x0000AABC\n    add r0, r5, r0\n    add r1, r5, r1\n    bl ov112_021EFAD4\n    cmp r0, #0\n    bne _021EFB60\n    add r0, r5, #0\n    mov r1, #9\n    bl ov112_021EA688\n    add sp, #0x10\n    mov r0, #0x11\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0xf\n    bl ov112_021E7CA4\n    ldr r2, _021EFC8C ; =0x0001E4A0\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    mov r1, #1\n    mov r3, #0\n    bl ov112_021E9FD8\n    ldr r2, _021EFC8C ; =0x0001E4A0\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    mov r1, #1\n    mov r3, #0\n    bl ov112_021E9FD8\n    mov r4, #0\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #9\n    bl ov112_021EA688\n    add r4, r4, #1\n    cmp r4, #4\n    blt _021EFB88\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #0x28\n    mov r3, #0x40\n    bl ov112_021EA6B8\n    add r0, r5, #0\n    mov r1, #0xa\n    mov r2, #0x90\n    mov r3, #0x40\n    bl ov112_021EA6B8\n    add r0, r5, #0\n    mov r1, #0xb\n    mov r2, #0x28\n    mov r3, #0x60\n    bl ov112_021EA6B8\n    add r0, r5, #0\n    mov r1, #0xc\n    mov r2, #0x90\n    mov r3, #0x60\n    bl ov112_021EA6B8\n    ldr r0, _021EFC90 ; =0x00009D89\n    mov r4, #0\n    add r6, r5, #0\n    add r7, r5, r0\n    ldr r0, _021EFC94 ; =0x00009D7C\n    ldrh r0, [r6, r0]\n    cmp r0, #0\n    beq _021EFC14\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #9\n    bl ov112_021EA670\n    ldr r2, _021EFC94 ; =0x00009D7C\n    ldr r0, _021EFC98 ; =0x0001E448\n    add r1, r4, #0\n    ldrh r2, [r6, r2]\n    ldr r0, [r5, r0]\n    add r1, #8\n    bl BufferSpeciesName\n    add r2, r4, #0\n    mov r3, #0xc1\n    add r0, r5, #0\n    add r1, r4, #3\n    add r2, #0x43\n    lsl r3, r3, #0xa\n    bl ov112_021E9F5C\n    ldr r2, _021EFC94 ; =0x00009D7C\n    ldrb r3, [r7]\n    ldrh r2, [r6, r2]\n    add r0, r5, #0\n    lsl r3, r3, #0x1b\n    add r1, r4, #0\n    lsr r3, r3, #0x1b\n    bl ov112_021EAB78\n    add r4, r4, #1\n    add r6, #0x10\n    add r7, #0x10\n    cmp r4, #3\n    blt _021EFBD0\n    ldr r0, _021EFC88 ; =0x0000AABC\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    beq _021EFC66\n    mov r0, #0xad\n    lsl r0, r0, #8\n    add r4, r5, r0\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _021EFC66\n    add r0, r5, #0\n    mov r1, #0xc\n    bl ov112_021EA670\n    ldr r0, _021EFC98 ; =0x0001E448\n    ldrh r2, [r4]\n    ldr r0, [r5, r0]\n    mov r1, #0xb\n    bl BufferSpeciesName\n    mov r3, #0xc1\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0x46\n    lsl r3, r3, #0xa\n    bl ov112_021E9F5C\n    ldrb r3, [r4, #0xd]\n    ldrh r2, [r4]\n    add r0, r5, #0\n    lsl r3, r3, #0x1b\n    mov r1, #3\n    lsr r3, r3, #0x1b\n    bl ov112_021EAB78\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x9a\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0xd\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EFC84: .word 0x00009D70\n    _021EFC88: .word 0x0000AABC\n    _021EFC8C: .word 0x0001E4A0\n    _021EFC90: .word 0x00009D89\n    _021EFC94: .word 0x00009D7C\n    _021EFC98: .word 0x0001E448"
    );
    #endif
}

void ov112_021EFC9C(void) {
    IsPaletteFadeFinished();
}

void ov112_021EFCB0(void) {
    /* Original at 0x021EFCB0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0\n    mov r2, #0x31\n    add r4, r0, #0\n    bl ov112_021EA08C\n    ldr r1, _021EFCD0 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0xf\n    str r0, [r4, #0xc]\n    ldr r0, _021EFCD4 ; =0x000004A2\n    bl PlayFanfare\n    mov r0, #0x23\n    pop {r4, pc}\n    nop\n    _021EFCD0: .word 0x0001E524\n    _021EFCD4: .word 0x000004A2"
    );
    #endif
}

void ov112_021EFCD8(void) {
    BeginNormalPaletteFade(0, 0x10, 0x9a, 1, 6);
}

void ov112_021EFCFC(void) {
    /* Original at 0x021EFCFC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _021EFD1E\n    mov r4, #0\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #9\n    bl ov112_021EA688\n    add r4, r4, #1\n    cmp r4, #4\n    blt _021EFD0A\n    mov r0, #0x11\n    pop {r3, r4, r5, pc}\n    mov r0, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021EFD24(void) {
    /* Original at 0x021EFD24 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    add r1, r5, #0\n    ldrh r0, [r1]\n    cmp r0, #0\n    beq _021EFD3C\n    add r4, r4, #1\n    add r1, r1, #2\n    cmp r4, #0xe\n    blt _021EFD2E\n    cmp r4, #0xe\n    blt _021EFD44\n    bl GF_AssertFail\n    lsl r0, r4, #1\n    strh r6, [r5, r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov112_021EFD4C(void) {
    /* Original at 0x021EFD4C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r1, #0\n    ldr r2, _021EFD98 ; =0x00009DAC\n    add r4, r1, #0\n    add r5, r0, #0\n    ldrh r3, [r5, r2]\n    cmp r3, #0\n    beq _021EFD5E\n    add r1, r1, #1\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #3\n    blt _021EFD56\n    ldr r2, _021EFD9C ; =0x00009DB8\n    mov r5, #0\n    add r4, r0, #0\n    ldrh r3, [r4, r2]\n    cmp r3, #0\n    beq _021EFD74\n    add r1, r1, #1\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #0xa\n    blt _021EFD6C\n    ldr r2, _021EFDA0 ; =0x0000AABC\n    ldrb r2, [r0, r2]\n    lsl r2, r2, #0x19\n    lsr r2, r2, #0x1f\n    beq _021EFD90\n    ldr r2, _021EFDA4 ; =0x0000B002\n    ldrh r0, [r0, r2]\n    cmp r0, #0\n    beq _021EFD90\n    add r1, r1, #1\n    add r0, r1, #0\n    pop {r4, r5}\n    bx lr\n    nop\n    _021EFD98: .word 0x00009DAC\n    _021EFD9C: .word 0x00009DB8\n    _021EFDA0: .word 0x0000AABC\n    _021EFDA4: .word 0x0000B002"
    );
    #endif
}

void ov112_021EFDA8(void) {
    /* Original at 0x021EFDA8 */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r7, r0, #0\n    mov r1, #5\n    bl ov112_021E9C10\n    add r0, r7, #0\n    mov r1, #6\n    bl ov112_021E9A78\n    add r0, r7, #0\n    bl ov112_021EFD4C\n    cmp r0, #0\n    bne _021EFDCC\n    add sp, #0x2c\n    mov r0, #0x24\n    pop {r4, r5, r6, r7, pc}\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r7, #0x18]\n    mov r1, #1\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    add r0, r7, #0\n    mov r1, #2\n    mov r2, #0xf\n    bl ov112_021E7CA4\n    ldr r2, _021EFEB8 ; =0x0001E4A4\n    add r0, r7, #0\n    ldr r2, [r7, r2]\n    mov r1, #1\n    mov r3, #0\n    bl ov112_021E9FD8\n    mov r0, #0\n    add r1, sp, #0x10\n    mov r2, #0x1c\n    bl MIi_CpuClearFast\n    ldr r6, _021EFEBC ; =0x00009DAC\n    mov r4, #0\n    add r5, r7, #0\n    ldrh r1, [r5, r6]\n    add r0, sp, #0x10\n    bl ov112_021EFD24\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #3\n    blt _021EFE0E\n    ldr r6, _021EFEC0 ; =0x00009DB8\n    mov r5, #0\n    add r4, r7, #0\n    ldrh r1, [r4, r6]\n    add r0, sp, #0x10\n    bl ov112_021EFD24\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #0xa\n    blt _021EFE24\n    ldr r0, _021EFEC4 ; =0x0000AABC\n    ldrb r0, [r7, r0]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    beq _021EFE60\n    ldr r1, _021EFEC8 ; =0x0000B002\n    add r0, sp, #0x10\n    ldrh r1, [r7, r1]\n    bl ov112_021EFD24\n    ldr r1, _021EFEC4 ; =0x0000AABC\n    ldr r2, _021EFECC ; =0x000006C8\n    mov r0, #0\n    add r1, r7, r1\n    bl MIi_CpuClearFast\n    ldr r1, _021EFED0 ; =0x00009D70\n    ldr r2, _021EFED4 ; =0x00000D4C\n    mov r0, #0\n    add r1, r7, r1\n    bl MIi_CpuClearFast\n    mov r0, #0x13\n    mov r1, #0x9a\n    bl String_New\n    add r6, r0, #0\n    mov r5, #0\n    add r4, sp, #0x10\n    ldrh r1, [r4]\n    cmp r1, #0\n    beq _021EFE96\n    add r0, r6, #0\n    mov r2, #0x9a\n    bl GetItemNameIntoString\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp]\n    add r0, r7, #0\n    add r1, r5, #2\n    add r2, r6, #0\n    mov r3, #0\n    bl ov112_021E9FA4\n    add r5, r5, #1\n    add r4, r4, #2\n    cmp r5, #0xe\n    blt _021EFE6E\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x9a\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0x12\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _021EFEB8: .word 0x0001E4A4\n    _021EFEBC: .word 0x00009DAC\n    _021EFEC0: .word 0x00009DB8\n    _021EFEC4: .word 0x0000AABC\n    _021EFEC8: .word 0x0000B002\n    _021EFECC: .word 0x000006C8\n    _021EFED0: .word 0x00009D70\n    _021EFED4: .word 0x00000D4C"
    );
    #endif
}

void ov112_021EFED8(void) {
    IsPaletteFadeFinished();
}

void ov112_021EFEEC(void) {
    /* Original at 0x021EFEEC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0\n    mov r2, #0x32\n    add r4, r0, #0\n    bl ov112_021EA08C\n    ldr r1, _021EFF0C ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0x14\n    str r0, [r4, #0xc]\n    ldr r0, _021EFF10 ; =0x000004A2\n    bl PlayFanfare\n    mov r0, #0x23\n    pop {r4, pc}\n    nop\n    _021EFF0C: .word 0x0001E524\n    _021EFF10: .word 0x000004A2"
    );
    #endif
}

void ov112_021EFF14(void) {
    BeginNormalPaletteFade(0, 0x15, 0x9a, 1, 6);
}

void ov112_021EFF38(void) {
    IsPaletteFadeFinished();
}

void ov112_021EFF4C(void) {
    BeginNormalPaletteFade(0, 0x17, 0x9a, 1, 6);
}

void ov112_021EFF70(void) {
    IsPaletteFadeFinished();
}

void ov112_021EFF84(void) {
    /* Original at 0x021EFF84 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    mov r4, #0\n    add r5, r0, #0\n    str r4, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    add r2, r4, #0\n    add r3, r4, #0\n    bl FillBgTilemapRect\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0xf\n    bl ov112_021E7CA4\n    ldr r2, _021F00AC ; =0x0001E498\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    mov r1, #1\n    add r3, r4, #0\n    bl ov112_021E9FD8\n    ldr r0, _021F00B0 ; =0x0001E440\n    ldr r0, [r5, r0]\n    bl sub_02032718\n    add r2, r0, #0\n    ldr r0, _021F00B4 ; =0x0001E448\n    lsl r2, r2, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #2\n    lsr r2, r2, #0x18\n    bl BufferPokewalkerCourseName\n    ldr r0, _021F00B8 ; =0x000010F0\n    ldr r1, [r5, r0]\n    ldr r0, _021F00BC ; =0x0001D758\n    ldr r0, [r5, r0]\n    cmp r1, r0\n    bls _021EFFE4\n    sub r4, r1, r0\n    ldr r0, _021F00B0 ; =0x0001E440\n    add r1, sp, #0x14\n    ldr r0, [r5, r0]\n    add r2, sp, #0x10\n    bl sub_02032674\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021F00B4 ; =0x0001E448\n    mov r1, #5\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    mov r3, #7\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, _021F00C0 ; =0x00009D7A\n    ldr r0, _021F00B4 ; =0x0001E448\n    ldrh r2, [r5, r2]\n    ldr r0, [r5, r0]\n    mov r1, #3\n    mov r3, #5\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021F00B4 ; =0x0001E448\n    ldr r2, [sp, #0x14]\n    ldr r0, [r5, r0]\n    mov r1, #6\n    mov r3, #7\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021F00B4 ; =0x0001E448\n    mov r1, #7\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x10]\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp]\n    ldr r2, _021F00C4 ; =0x0001E4B4\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    mov r1, #5\n    mov r3, #0\n    bl ov112_021E9FA4\n    mov r3, #0xc1\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0x3c\n    lsl r3, r3, #0xa\n    bl ov112_021E9F5C\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp]\n    ldr r2, _021F00C8 ; =0x0001E4BC\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    mov r1, #7\n    mov r3, #0\n    bl ov112_021E9FA4\n    mov r3, #0xc1\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0x3e\n    lsl r3, r3, #0xa\n    bl ov112_021E9F5C\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x9a\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0x19\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _021F00AC: .word 0x0001E498\n    _021F00B0: .word 0x0001E440\n    _021F00B4: .word 0x0001E448\n    _021F00B8: .word 0x000010F0\n    _021F00BC: .word 0x0001D758\n    _021F00C0: .word 0x00009D7A\n    _021F00C4: .word 0x0001E4B4\n    _021F00C8: .word 0x0001E4BC"
    );
    #endif
}

void ov112_021F00CC(void) {
    IsPaletteFadeFinished();
}

void ov112_021F00E0(void) {
    /* Original at 0x021F00E0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021F010C ; =0x00009D7A\n    add r4, r0, #0\n    ldrh r1, [r4, r1]\n    cmp r1, #0\n    bne _021F00F6\n    mov r1, #0\n    mov r2, #0x2e\n    bl ov112_021EA08C\n    b _021F00FE\n    mov r1, #0\n    mov r2, #0x2d\n    bl ov112_021EA08C\n    ldr r1, _021F0110 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0x1b\n    str r0, [r4, #0xc]\n    mov r0, #0x23\n    pop {r4, pc}\n    nop\n    _021F010C: .word 0x00009D7A\n    _021F0110: .word 0x0001E524"
    );
    #endif
}

void ov112_021F0114(void) {
    /* Original at 0x021F0114 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F0150 ; =0x0001EC78\n    ldr r2, [r4, r0]\n    cmp r2, #0\n    beq _021F014A\n    ldr r0, _021F0154 ; =0x0001E448\n    lsl r2, r2, #0x18\n    ldr r0, [r4, r0]\n    mov r1, #4\n    lsr r2, r2, #0x18\n    bl BufferPokewalkerCourseName\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x30\n    bl ov112_021EA08C\n    ldr r1, _021F0158 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #0x1c\n    str r0, [r4, #0xc]\n    ldr r0, _021F0150 ; =0x0001EC78\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #0x23\n    pop {r4, pc}\n    mov r0, #0x1c\n    pop {r4, pc}\n    nop\n    _021F0150: .word 0x0001EC78\n    _021F0154: .word 0x0001E448\n    _021F0158: .word 0x0001E524"
    );
    #endif
}

void ov112_021F015C(void) {
    BeginNormalPaletteFade(0, 0x1d, 0x9a, 1, 6);
}

void ov112_021F0180(void) {
    IsPaletteFadeFinished();
}

void ov112_021F0194(void) {
    BeginNormalPaletteFade(0, 0x1f, 0x9a, 1, 6);
}

void ov112_021F01B8(void) {
    IsPaletteFadeFinished();
}

void ov112_021F01CC(void) {
    /* Original at 0x021F01CC */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    mov r4, #0\n    add r5, r0, #0\n    str r4, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    add r2, r4, #0\n    add r3, r4, #0\n    bl FillBgTilemapRect\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0xf\n    bl ov112_021E7CA4\n    ldr r2, _021F02F4 ; =0x0001E49C\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    mov r1, #1\n    add r3, r4, #0\n    bl ov112_021E9FD8\n    ldr r0, _021F02F8 ; =0x0001E440\n    ldr r0, [r5, r0]\n    bl sub_02032718\n    add r2, r0, #0\n    ldr r0, _021F02FC ; =0x0001E448\n    lsl r2, r2, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #2\n    lsr r2, r2, #0x18\n    bl BufferPokewalkerCourseName\n    ldr r0, _021F0300 ; =0x000010F0\n    ldr r1, [r5, r0]\n    ldr r0, _021F0304 ; =0x0001D758\n    ldr r0, [r5, r0]\n    cmp r1, r0\n    bls _021F022C\n    sub r4, r1, r0\n    ldr r0, _021F02F8 ; =0x0001E440\n    add r1, sp, #0x14\n    ldr r0, [r5, r0]\n    add r2, sp, #0x10\n    bl sub_02032674\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021F02FC ; =0x0001E448\n    mov r1, #5\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    mov r3, #7\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, _021F0308 ; =0x00009D7A\n    ldr r0, _021F02FC ; =0x0001E448\n    ldrh r2, [r5, r2]\n    ldr r0, [r5, r0]\n    mov r1, #3\n    mov r3, #5\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021F02FC ; =0x0001E448\n    ldr r2, [sp, #0x14]\n    ldr r0, [r5, r0]\n    mov r1, #6\n    mov r3, #7\n    bl BufferIntegerAsString\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _021F02FC ; =0x0001E448\n    mov r1, #7\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x10]\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp]\n    ldr r2, _021F030C ; =0x0001E4B4\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    mov r1, #5\n    mov r3, #0\n    bl ov112_021E9FA4\n    mov r3, #0xc1\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0x3c\n    lsl r3, r3, #0xa\n    bl ov112_021E9F5C\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp]\n    ldr r2, _021F0310 ; =0x0001E4BC\n    add r0, r5, #0\n    ldr r2, [r5, r2]\n    mov r1, #7\n    mov r3, #0\n    bl ov112_021E9FA4\n    mov r3, #0xc1\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #0x3e\n    lsl r3, r3, #0xa\n    bl ov112_021E9F5C\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x9a\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0x21\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _021F02F4: .word 0x0001E49C\n    _021F02F8: .word 0x0001E440\n    _021F02FC: .word 0x0001E448\n    _021F0300: .word 0x000010F0\n    _021F0304: .word 0x0001D758\n    _021F0308: .word 0x00009D7A\n    _021F030C: .word 0x0001E4B4\n    _021F0310: .word 0x0001E4BC"
    );
    #endif
}

void ov112_021F0314(void) {
    IsPaletteFadeFinished();
}

void ov112_021F0328(void) {
    /* Original at 0x021F0328 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021F035C ; =0x00009D7A\n    add r4, r0, #0\n    ldrh r1, [r4, r1]\n    cmp r1, #0\n    bne _021F033E\n    mov r1, #0\n    mov r2, #0x2f\n    bl ov112_021EA08C\n    b _021F034E\n    ldr r0, _021F0360 ; =0x000004A1\n    bl PlayFanfare\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x2d\n    bl ov112_021EA08C\n    ldr r1, _021F0364 ; =0x0001E524\n    str r0, [r4, r1]\n    mov r0, #8\n    str r0, [r4, #0xc]\n    mov r0, #0x23\n    pop {r4, pc}\n    nop\n    _021F035C: .word 0x00009D7A\n    _021F0360: .word 0x000004A1\n    _021F0364: .word 0x0001E524"
    );
    #endif
}

void ov112_021F0368(void) {
    /* Original at 0x021F0368 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021F0390 ; =0x0001E524\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _021F038A\n    bl IsFanfarePlaying\n    cmp r0, #0\n    bne _021F038A\n    ldr r0, [r4, #0xc]\n    str r0, [r4, #8]\n    pop {r4, pc}\n    mov r0, #0x23\n    pop {r4, pc}\n    nop\n    _021F0390: .word 0x0001E524"
    );
    #endif
}

void ov112_021F0394(void) {
    /* Original at 0x021F0394 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    str r1, [r0, #4]\n    mov r0, #0x25\n    bx lr"
    );
    #endif
}

void ov112_021F039C(void) {
    /* Original at 0x021F039C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x96\n    lsl r1, r1, #2\n    add r5, r0, #0\n    bl Heap_Alloc\n    mov r2, #0x96\n    mov r1, #0\n    lsl r2, r2, #2\n    add r4, r0, #0\n    bl MI_CpuFill8\n    str r5, [r4]\n    str r5, [r4, #0x74]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021F03BC(void) {
    /* Original at 0x021F03BC */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    str r1, [r4, #4]\n    add r0, r1, #0\n    ldr r1, [r4]\n    bl ov112_021F05FC\n    mov r0, #9\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    mov r0, #0x1d\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #8\n    mov r2, #5\n    mov r3, #0xe\n    bl AddWindowParameterized\n    mov r0, #6\n    str r0, [sp]\n    mov r2, #5\n    add r1, r4, #0\n    str r2, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    mov r0, #0x11\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, #0x18\n    mov r3, #0x17\n    bl AddWindowParameterized\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    mov r0, #0x31\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x28\n    mov r2, #5\n    mov r3, #0xe\n    bl AddWindowParameterized\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x38\n    mov r2, #5\n    mov r3, #0xe\n    bl AddWindowParameterized\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    mov r0, #0x1b\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x48\n    mov r2, #5\n    mov r3, #0x16\n    bl AddWindowParameterized\n    mov r3, #0xe\n    str r3, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xf\n    str r0, [sp, #0xc]\n    mov r0, #0x41\n    str r0, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #0x58\n    mov r2, #5\n    bl AddWindowParameterized\n    mov r1, #0x1b\n    add r2, r1, #0\n    ldr r3, [r4]\n    mov r0, #1\n    add r2, #0xf9\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x68]\n    ldr r0, [r4]\n    bl MessageFormat_New\n    str r0, [r4, #0x6c]\n    ldr r1, [r4]\n    mov r0, #0xb\n    bl String_New\n    str r0, [r4, #0x70]\n    add r0, r4, #0\n    add r0, #0x74\n    bl ov112_021F09B4\n    add r4, #0x74\n    add r0, r4, #0\n    bl ov112_021F0B28\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x14\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov112_021F04DC(void) {
    /* Original at 0x021F04DC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldrb r2, [r4, #9]\n    add r5, r0, #0\n    cmp r2, #2\n    bne _021F04FE\n    bl ov112_021F0908\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov112_021F06CC\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    pop {r3, r4, r5, pc}\n    bl ov112_021F0980\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021F050C(void) {
    SpriteList_RenderAndAnimateSprites();
}

void ov112_021F051C(void) {
    /* Original at 0x021F051C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [r7, #0x68]\n    bl DestroyMsgData\n    ldr r0, [r7, #0x6c]\n    bl MessageFormat_Delete\n    ldr r0, [r7, #0x70]\n    bl String_Delete\n    add r0, r7, #0\n    add r0, #8\n    bl RemoveWindow\n    add r0, r7, #0\n    add r0, #0x18\n    bl RemoveWindow\n    add r0, r7, #0\n    add r0, #0x28\n    bl RemoveWindow\n    add r0, r7, #0\n    add r0, #0x38\n    bl RemoveWindow\n    add r0, r7, #0\n    add r0, #0x48\n    bl RemoveWindow\n    add r0, r7, #0\n    add r0, #0x58\n    bl RemoveWindow\n    ldr r0, [r7, #4]\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    ldr r0, [r7, #4]\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    add r5, r7, #0\n    add r5, #0x74\n    add r0, r5, #0\n    bl ov112_021F05CC\n    mov r4, #0\n    mov r0, #0x18\n    mul r0, r4\n    add r6, r5, r0\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    bl sub_0200B0A8\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #2\n    blo _021F057E\n    mov r6, #0x13\n    mov r4, #0\n    lsl r6, r6, #4\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    bl Destroy2DGfxResObjMan\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #6\n    blo _021F05A8\n    ldr r0, [r5, #4]\n    bl SpriteList_Delete\n    add r0, r7, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F05CC(void) {
    /* Original at 0x021F05CC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r6, #0x67\n    mov r4, #0\n    add r5, r7, #0\n    lsl r6, r6, #2\n    ldr r0, [r5, r6]\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _021F05D8\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    bl Sprite_Delete\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F05FC(void) {
    /* Original at 0x021F05FC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov112_021F0668\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, _021F0664 ; =0x00000103\n    mov r2, #4\n    add r3, r1, #0\n    str r4, [sp, #4]\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    ldr r0, _021F0664 ; =0x00000103\n    add r2, r5, #0\n    mov r3, #7\n    str r4, [sp, #0xc]\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _021F0664 ; =0x00000103\n    mov r1, #2\n    add r2, r5, #0\n    mov r3, #7\n    str r4, [sp, #0xc]\n    bl GfGfxLoader_LoadScrnData\n    add r0, r5, #0\n    mov r1, #7\n    bl BgCommitTilemapBufferToVram\n    mov r1, #0x1e\n    mov r0, #4\n    lsl r1, r1, #4\n    add r2, r4, #0\n    bl LoadFontPal0\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021F0664: .word 0x00000103"
    );
    #endif
}

void ov112_021F0668(void) {
    /* Original at 0x021F0668 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x38\n    ldr r5, _021F06C4 ; =ov112_021FF134\n    add r4, r0, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0x1c\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _021F06C8 ; =ov112_021FF150\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #7\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x38\n    pop {r3, r4, r5, pc}\n    nop\n    _021F06C4: .word ov112_021FF134\n    _021F06C8: .word ov112_021FF150"
    );
    #endif
}

void ov112_021F06CC(void) {
    /* Original at 0x021F06CC */
    /* Requires manual decompilation - 241 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0x28\n    ldrb r7, [r0]\n    ldrh r0, [r4, #0x26]\n    add r1, #0xa\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x70]\n    bl CopyU16ArrayToString\n    add r0, r5, #0\n    add r0, #0x38\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021F0900 ; =0x00010200\n    add r3, r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r5, #0x70]\n    add r0, #0x38\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    add r0, #0x38\n    bl CopyWindowToVram\n    ldrh r0, [r4, #4]\n    ldr r1, [r5]\n    bl GetSpeciesName\n    add r6, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r3, #2\n    str r3, [sp, #4]\n    ldr r0, [r5, #0x6c]\n    mov r1, #0\n    add r2, r6, #0\n    bl BufferString\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, [r5, #0x6c]\n    ldr r1, [r5, #0x68]\n    ldr r3, [r5]\n    mov r2, #0\n    bl ReadMsgData_ExpandPlaceholders\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #8\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021F0900 ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #8\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    add r0, #8\n    bl CopyWindowToVram\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x6c]\n    mov r1, #0\n    add r2, r7, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, [r5, #0x6c]\n    ldr r1, [r5, #0x68]\n    ldr r3, [r5]\n    mov r2, #3\n    bl ReadMsgData_ExpandPlaceholders\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x18\n    bl GetWindowWidth\n    add r7, r0, #0\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r1, r7, #3\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021F0900 ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x18\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    add r0, #0x18\n    bl CopyWindowToVram\n    add r0, r6, #0\n    bl String_Delete\n    ldrb r0, [r4, #8]\n    cmp r0, #0\n    bne _021F0820\n    ldr r0, [r5, #0x68]\n    mov r1, #1\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x48\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021F0904 ; =0x00070800\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x48\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    add r0, #0x48\n    bl CopyWindowToVram\n    add r0, r4, #0\n    bl String_Delete\n    b _021F0876\n    cmp r0, #1\n    bne _021F0864\n    ldr r0, [r5, #0x68]\n    mov r1, #2\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x48\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x48\n    add r2, r4, #0\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    add r0, #0x48\n    bl CopyWindowToVram\n    add r0, r4, #0\n    bl String_Delete\n    b _021F0876\n    add r0, r5, #0\n    add r0, #0x48\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x48\n    bl CopyWindowToVram\n    ldr r0, [r5, #0x68]\n    mov r1, #4\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x28\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021F0900 ; =0x00010200\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x28\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    add r0, #0x28\n    bl CopyWindowToVram\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, [r5, #0x6c]\n    ldr r2, [sp, #0x10]\n    mov r1, #0\n    bl BufferItemName\n    ldr r0, [r5, #0x6c]\n    ldr r1, [r5, #0x68]\n    ldr r3, [r5]\n    mov r2, #5\n    bl ReadMsgData_ExpandPlaceholders\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x58\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021F0900 ; =0x00010200\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x58\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r5, #0x58\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _021F0900: .word 0x00010200\n    _021F0904: .word 0x00070800"
    );
    #endif
}

void ov112_021F0908(void) {
    /* Original at 0x021F0908 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    add r5, r4, #0\n    add r5, #0x74\n    add r0, r5, #0\n    add r7, r1, #0\n    bl ov112_021F0C8C\n    add r0, r4, #0\n    add r0, #0x74\n    bl ov112_021F0D04\n    mov r0, #0x8a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r4, #0\n    add r0, r7, r4\n    add r0, #0x20\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021F0958\n    lsl r0, r4, #2\n    add r6, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x67\n    lsl r0, r0, #2\n    lsl r1, r4, #1\n    ldr r0, [r6, r0]\n    add r1, r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    b _021F0974\n    lsl r0, r4, #2\n    add r6, r5, r0\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    lsl r1, r4, #1\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #6\n    blo _021F092E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F0980(void) {
    /* Original at 0x021F0980 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r4, #0\n    mov r6, #0x67\n    add r5, #0x74\n    add r7, r4, #0\n    lsl r6, r6, #2\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r6]\n    add r1, r7, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #6\n    blo _021F098E\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F09B4(void) {
    /* Original at 0x021F09B4 */
    /* Requires manual decompilation - 169 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r1, r5, #0\n    ldr r2, [r5]\n    mov r0, #7\n    add r1, #8\n    bl G2dRenderer_Init\n    str r0, [r5, #4]\n    add r0, r5, #0\n    mov r2, #1\n    add r0, #8\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r7, #0x13\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #4\n    ldr r2, [r5]\n    mov r0, #2\n    add r1, r6, #0\n    bl Create2DGfxResObjMan\n    str r0, [r4, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #6\n    blt _021F09E6\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    mov r1, #0x13\n    lsl r1, r1, #4\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    sub r1, #0x2d\n    mov r2, #4\n    bl AddCharResObjFromNarc\n    mov r2, #0x52\n    lsl r2, r2, #2\n    str r0, [r5, r2]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    ldr r0, [r5]\n    sub r2, #0x14\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r2]\n    add r1, #0xff\n    mov r2, #3\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #0x53\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    mov r2, #6\n    str r0, [sp, #8]\n    add r0, r1, #0\n    sub r0, #0x14\n    ldr r0, [r5, r0]\n    sub r1, #0x49\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x15\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r3, #1\n    str r3, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    mov r2, #5\n    str r0, [sp, #8]\n    add r0, r1, #0\n    sub r0, #0x14\n    ldr r0, [r5, r0]\n    sub r1, #0x4d\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x55\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0xc\n    ldr r0, [r5, r1]\n    bl sub_0200ADA4\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200AF94\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    mov r1, #0x5d\n    str r0, [sp, #8]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r2, #9\n    mov r3, #0\n    bl AddCharResObjFromNarc\n    mov r1, #0x16\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    sub r1, #0x2c\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    mov r1, #0x5d\n    mov r2, #6\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    mov r1, #0x59\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    sub r1, #0x2c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    mov r1, #0x5d\n    mov r2, #0xa\n    mov r3, #0\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5a\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    sub r1, #0x2c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    mov r1, #0x5d\n    mov r2, #0xa\n    mov r3, #0\n    bl AddCellOrAnimResObjFromNarc\n    mov r1, #0x5b\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0xc\n    ldr r0, [r5, r1]\n    bl sub_0200ADA4\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200AF94\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F0B28(void) {
    /* Original at 0x021F0B28 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r7, #0x67\n    add r5, r0, #0\n    mov r4, #0\n    mov r6, #0x90\n    lsl r7, r7, #2\n    lsl r0, r4, #3\n    add r0, #0x18\n    str r0, [sp]\n    str r6, [sp, #4]\n    lsl r0, r4, #1\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #1\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #0\n    bl ov112_021F0B9C\n    lsl r1, r4, #2\n    add r1, r5, r1\n    str r0, [r1, r7]\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #6\n    blo _021F0B36\n    mov r0, #0x30\n    str r0, [sp]\n    mov r0, #0x58\n    str r0, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    add r0, r5, #0\n    mov r1, #2\n    add r3, r2, #0\n    str r2, [sp, #0xc]\n    bl ov112_021F0B9C\n    mov r1, #0x6d\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r1, #0x32\n    ldr r0, [r5]\n    lsl r1, r1, #6\n    bl Heap_Alloc\n    mov r1, #0x6e\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov112_021F0C50\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F0B9C(void) {
    /* Original at 0x021F0B9C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x80\n    add r4, r0, #0\n    mov r0, #0\n    str r1, [sp]\n    mvn r0, r0\n    str r0, [sp, #4]\n    add r5, r2, #0\n    str r0, [sp, #8]\n    mov r2, #0\n    mov r0, #0x13\n    str r2, [sp, #0xc]\n    lsl r0, r0, #4\n    str r3, [sp, #0x10]\n    ldr r3, [r4, r0]\n    str r3, [sp, #0x14]\n    add r3, r0, #4\n    ldr r3, [r4, r3]\n    str r3, [sp, #0x18]\n    add r3, r0, #0\n    add r3, #8\n    ldr r3, [r4, r3]\n    add r0, #0xc\n    str r3, [sp, #0x1c]\n    ldr r0, [r4, r0]\n    add r3, r1, #0\n    str r0, [sp, #0x20]\n    str r2, [sp, #0x24]\n    str r2, [sp, #0x28]\n    add r0, sp, #0x2c\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r4]\n    add r2, sp, #0x2c\n    str r0, [sp]\n    ldr r1, [r4, #4]\n    add r0, sp, #0x50\n    mov r3, #2\n    bl ov112_021F0C30\n    ldr r0, [sp, #0x90]\n    str r5, [sp, #0x74]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x58]\n    ldr r0, [sp, #0x94]\n    lsl r1, r0, #0xc\n    mov r0, #1\n    lsl r0, r0, #0x14\n    add r0, r1, r0\n    str r0, [sp, #0x5c]\n    add r0, sp, #0x50\n    bl Sprite_CreateAffine\n    mov r1, #1\n    add r4, r0, #0\n    bl Sprite_SetAnimActiveFlag\n    ldr r1, [sp, #0x98]\n    add r0, r4, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r4, #0\n    mov r1, #1\n    bl Sprite_SetPriority\n    ldr r1, [sp, #0x9c]\n    add r0, r4, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    add sp, #0x80\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021F0C30(void) {
    /* Original at 0x021F0C30 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    str r2, [r0, #4]\n    mov r2, #0\n    mov r1, #1\n    str r2, [r0, #0x10]\n    lsl r1, r1, #0xc\n    str r1, [r0, #0x14]\n    str r1, [r0, #0x18]\n    str r1, [r0, #0x1c]\n    strh r2, [r0, #0x20]\n    str r2, [r0, #0x24]\n    ldr r1, [sp]\n    str r3, [r0, #0x28]\n    str r1, [r0, #0x2c]\n    bx lr"
    );
    #endif
}

void ov112_021F0C50(void) {
    /* Original at 0x021F0C50 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x59\n    lsl r0, r0, #2\n    ldr r4, [r5, r0]\n    sub r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_0200AF00\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl SpriteTransfer_GetPaletteProxy\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #2\n    bl NNS_G2dGetImageLocation\n    mov r1, #0x77\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #2\n    bl NNS_G2dGetImagePaletteLocation\n    mov r1, #0x1e\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov112_021F0C8C(void) {
    /* Original at 0x021F0C8C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r5, r1, #0\n    add r4, r0, #0\n    ldrb r0, [r5, #6]\n    mov r3, #2\n    str r0, [sp]\n    ldrb r0, [r5, #7]\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    str r0, [sp, #8]\n    ldrh r1, [r5, #4]\n    ldrb r2, [r5, #8]\n    add r0, sp, #0x14\n    bl GetMonSpriteCharAndPlttNarcIdsEx\n    ldr r0, [r5]\n    mov r3, #0x6e\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldrh r0, [r5, #4]\n    add r1, sp, #0x10\n    lsl r3, r3, #2\n    str r0, [sp, #0xc]\n    ldrh r0, [r1, #4]\n    ldrh r1, [r1, #6]\n    ldr r2, [r4]\n    ldr r3, [r4, r3]\n    bl sub_02014540\n    add r1, sp, #0x10\n    ldrh r0, [r1, #4]\n    ldrh r1, [r1, #8]\n    ldr r2, [r4]\n    bl AllocAndReadWholeNarcMemberByIdPair\n    add r1, sp, #0x10\n    add r5, r0, #0\n    bl NNS_G2dGetUnpackedPaletteData\n    cmp r0, #1\n    beq _021F0CEA\n    bl GF_AssertFail\n    ldr r0, [sp, #0x10]\n    mov r1, #0x6f\n    lsl r1, r1, #2\n    ldr r0, [r0, #0xc]\n    add r1, r4, r1\n    mov r2, #0x20\n    bl MIi_CpuCopy16\n    add r0, r5, #0\n    bl Heap_Free\n    add sp, #0x24\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov112_021F0D04(void) {
    /* Original at 0x021F0D04 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x6e\n    lsl r0, r0, #2\n    mov r1, #0x32\n    ldr r0, [r4, r0]\n    lsl r1, r1, #6\n    bl DC_FlushRange\n    mov r1, #0x6e\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x24\n    mov r2, #0x32\n    ldr r1, [r4, r1]\n    lsl r2, r2, #6\n    bl GXS_LoadOBJ\n    mov r0, #0x6f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0x20\n    bl DC_FlushRange\n    mov r1, #0x6f\n    lsl r1, r1, #2\n    add r0, r4, r1\n    add r1, #0x24\n    ldr r1, [r4, r1]\n    mov r2, #0x20\n    bl GXS_LoadOBJPltt\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021F0D48(void) {
    /* Original at 0x021F0D48 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _021F0DB8 ; =ov112_021FF2CC\n    mov r7, #0\n    str r0, [sp]\n    add r0, r5, #0\n    str r0, [sp, #8]\n    add r0, #0x40\n    ldr r4, _021F0DBC ; =ov112_021FF244\n    str r7, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    strh r7, [r5]\n    ldrb r2, [r0]\n    mov r6, #0\n    add r0, r6, #0\n    strb r2, [r5, #2]\n    ldr r1, [r4]\n    lsr r2, r2, #1\n    beq _021F0D8A\n    ldrb r3, [r1]\n    add r0, r0, #1\n    add r3, r6, r3\n    lsl r3, r3, #0x18\n    lsr r6, r3, #0x18\n    ldrb r3, [r1, #1]\n    add r1, r1, #2\n    add r3, r6, r3\n    lsl r3, r3, #0x18\n    lsr r6, r3, #0x18\n    cmp r0, r2\n    blo _021F0D72\n    strb r6, [r5, #3]\n    ldr r1, [sp, #8]\n    ldrb r2, [r5, #2]\n    ldr r0, [r4]\n    add r1, r1, r7\n    bl MI_CpuCopy8\n    ldrb r0, [r5, #2]\n    add r5, r5, #4\n    add r4, r4, #4\n    add r0, r7, r0\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    ldr r0, [sp]\n    add r0, r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #0x10\n    blt _021F0D60\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _021F0DB8: .word ov112_021FF2CC\n    _021F0DBC: .word ov112_021FF244"
    );
    #endif
}

void ov112_021F0DC0(void) {
    /* Original at 0x021F0DC0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _021F0DEC ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _021F0DF0 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    pop {r3, pc}\n    _021F0DEC: .word 0xFFFFE0FF\n    _021F0DF0: .word 0x04001000"
    );
    #endif
}

void ov112_021F0DF4(void) {
    GfGfx_SetBanks(5);
}

void ov112_021F0E14(void) {
    /* Original at 0x021F0E14 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    cmp r5, #0\n    ble _021F0E26\n    ldr r1, _021F0E58 ; =0x000001ED\n    cmp r5, r1\n    ble _021F0E2A\n    mov r4, #1\n    b _021F0E52\n    bl SpeciesToOverworldModelIndexOffset\n    ldr r1, _021F0E5C ; =0x00000129\n    add r4, r0, r1\n    add r0, r5, #0\n    bl OverworldModelLookupHasFemaleForm\n    cmp r0, #0\n    beq _021F0E44\n    cmp r7, #1\n    bne _021F0E52\n    add r4, r4, #1\n    b _021F0E52\n    add r0, r5, #0\n    bl OverworldModelLookupFormCount\n    cmp r6, r0\n    ble _021F0E50\n    mov r6, #0\n    add r4, r4, r6\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F0E58: .word 0x000001ED\n    _021F0E5C: .word 0x00000129"
    );
    #endif
}

void ov112_021F0E60(void) {
    /* Original at 0x021F0E60 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r2, _021F0EA8 ; =ov112_021FF2DC\n    add r4, r0, #0\n    ldrb r3, [r2, #0xb]\n    add r1, sp, #0\n    add r0, sp, #0\n    strb r3, [r1]\n    ldrb r3, [r2, #0xc]\n    strb r3, [r1, #1]\n    ldrb r3, [r2, #0xd]\n    ldrb r2, [r2, #0xe]\n    strb r3, [r1, #2]\n    strb r2, [r1, #3]\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #0\n    bne _021F0E8E\n    ldr r0, _021F0EAC ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _021F0EA0\n    ldr r0, _021F0EB0 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x78]\n    bl ManagedSprite_ResetSpriteAnimCtrlState\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _021F0EA8: .word ov112_021FF2DC\n    _021F0EAC: .word gSystem\n    _021F0EB0: .word 0x000005DC"
    );
    #endif
}

void ov112_021F0EB4(void) {
    /* Original at 0x021F0EB4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021F0EF0 ; =0x0000013D\n    ldrb r0, [r0, r1]\n    cmp r0, #0\n    beq _021F0EEA\n    ldr r2, _021F0EF4 ; =ov112_021FF2DC\n    add r1, sp, #0\n    ldrb r3, [r2, #3]\n    add r0, sp, #0\n    strb r3, [r1]\n    ldrb r3, [r2, #4]\n    strb r3, [r1, #1]\n    ldrb r3, [r2, #5]\n    ldrb r2, [r2, #6]\n    strb r3, [r1, #2]\n    strb r2, [r1, #3]\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #0\n    bne _021F0EE6\n    ldr r0, _021F0EF8 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0x20\n    tst r0, r1\n    beq _021F0EEA\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _021F0EF0: .word 0x0000013D\n    _021F0EF4: .word ov112_021FF2DC\n    _021F0EF8: .word gSystem"
    );
    #endif
}

void ov112_021F0EFC(void) {
    /* Original at 0x021F0EFC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021F0F3C ; =0x0000013D\n    ldrb r2, [r0, r1]\n    add r1, r1, #1\n    ldrb r0, [r0, r1]\n    sub r0, r0, #1\n    cmp r2, r0\n    bge _021F0F38\n    ldr r2, _021F0F40 ; =ov112_021FF2DC\n    add r1, sp, #0\n    ldrb r3, [r2, #7]\n    add r0, sp, #0\n    strb r3, [r1]\n    ldrb r3, [r2, #8]\n    strb r3, [r1, #1]\n    ldrb r3, [r2, #9]\n    ldrb r2, [r2, #0xa]\n    strb r3, [r1, #2]\n    strb r2, [r1, #3]\n    bl TouchscreenHitbox_TouchNewIsIn\n    cmp r0, #0\n    bne _021F0F34\n    ldr r0, _021F0F44 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #0x10\n    tst r0, r1\n    beq _021F0F38\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _021F0F3C: .word 0x0000013D\n    _021F0F40: .word ov112_021FF2DC\n    _021F0F44: .word gSystem"
    );
    #endif
}

void ov112_021F0F48(void) {
    /* Original at 0x021F0F48 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    beq _021F0F56\n    add r0, #0x85\n    ldrb r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bx lr\n    add r0, #0x86\n    ldrb r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bx lr"
    );
    #endif
}

void ov112_021F0F60(void) {
    /* Original at 0x021F0F60 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x76\n    ldrb r0, [r0]\n    cmp r0, #8\n    blo _021F0F6A\n    mov r0, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr"
    );
    #endif
}

void ov112_021F0F70(void) {
    /* Original at 0x021F0F70 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r1]\n    ldr r0, [r0]\n    ldr r1, [r1]\n    ldr r0, [r0]\n    cmp r0, r1\n    bne _021F0F80\n    mov r0, #0\n    bx lr\n    cmp r0, r1\n    bls _021F0F88\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    mvn r0, r0\n    bx lr"
    );
    #endif
}

void ov112_021F0F90(void) {
    /* Original at 0x021F0F90 */
    /* Requires manual decompilation - 362 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0xc8\n    add r5, r0, #0\n    mov r0, #0\n    add r6, sp, #8\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    mov r4, #6\n    stmia r6!, {r0, r1, r2, r3}\n    stmia r6!, {r0, r1, r2, r3}\n    sub r4, r4, #1\n    bne _021F0FA2\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #4]\n    cmp r5, #0\n    bne _021F0FB8\n    bl GF_AssertFail\n    ldr r0, [r5]\n    cmp r0, #0\n    bne _021F0FC2\n    bl GF_AssertFail\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Save_Pokewalker_Get\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Save_PlayerData_GetProfile\n    add r4, r0, #0\n    bl PlayerProfile_GetTrainerGender\n    str r0, [r5, #0xc]\n    add r0, r4, #0\n    bl PlayerProfile_GetNamePtr\n    mov r6, #0\n    str r0, [r5, #8]\n    add r7, r6, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #4]\n    add r4, r0, r7\n    ldrh r1, [r4, #8]\n    ldr r0, _021F1268 ; =0x0000FFF9\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #1\n    bhi _021F100A\n    ldrh r1, [r4, #0xa]\n    ldr r0, _021F126C ; =0x000001ED\n    cmp r1, r0\n    bhi _021F1008\n    ldrh r1, [r4, #0xc]\n    cmp r1, r0\n    bls _021F100A\n    b _021F1122\n    add r0, r4, #0\n    add r0, #0x84\n    ldrb r0, [r0]\n    cmp r0, #0x1c\n    bgt _021F1026\n    bge _021F1040\n    cmp r0, #0xe\n    bgt _021F1052\n    cmp r0, #0xc\n    blt _021F1052\n    beq _021F102C\n    cmp r0, #0xe\n    beq _021F1036\n    b _021F1052\n    cmp r0, #0x1d\n    beq _021F104A\n    b _021F1052\n    add r1, r4, #0\n    add r1, #0x84\n    mov r0, #0xb\n    strb r0, [r1]\n    b _021F1052\n    add r1, r4, #0\n    add r1, #0x84\n    mov r0, #0xd\n    strb r0, [r1]\n    b _021F1052\n    add r1, r4, #0\n    add r1, #0x84\n    mov r0, #0xc\n    strb r0, [r1]\n    b _021F1052\n    add r1, r4, #0\n    add r1, #0x84\n    mov r0, #0xe\n    strb r0, [r1]\n    add r0, r4, #0\n    add r0, #0x84\n    ldrb r0, [r0]\n    cmp r0, #0x1c\n    blt _021F1060\n    mov r0, #0\n    b _021F10E6\n    cmp r0, #1\n    blt _021F1074\n    cmp r0, #0xa\n    bgt _021F1074\n    ldr r1, _021F1270 ; =0x00000143\n    ldrb r1, [r5, r1]\n    add r2, r1, #1\n    ldr r1, _021F1270 ; =0x00000143\n    strb r2, [r5, r1]\n    b _021F10E6\n    cmp r0, #0xc\n    bne _021F108A\n    mov r1, #0x51\n    lsl r1, r1, #2\n    ldr r2, [r5, r1]\n    add r1, #0xbc\n    orr r2, r1\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r2, [r5, r1]\n    b _021F10E6\n    cmp r0, #0xe\n    bne _021F10A0\n    mov r1, #0x51\n    lsl r1, r1, #2\n    ldr r2, [r5, r1]\n    sub r1, #0x44\n    orr r2, r1\n    mov r1, #0x51\n    lsl r1, r1, #2\n    str r2, [r5, r1]\n    b _021F10E6\n    cmp r0, #0xb\n    bne _021F10C2\n    ldr r1, _021F1274 ; =0x0000013F\n    ldrb r1, [r5, r1]\n    cmp r1, #0\n    bne _021F10E6\n    ldr r1, _021F1278 ; =0x00000141\n    ldrb r1, [r5, r1]\n    add r2, r1, #1\n    ldr r1, _021F1278 ; =0x00000141\n    strb r2, [r5, r1]\n    ldrb r1, [r5, r1]\n    cmp r1, #4\n    blo _021F10E6\n    ldr r1, _021F1274 ; =0x0000013F\n    strb r6, [r5, r1]\n    b _021F10E6\n    cmp r0, #0xd\n    bne _021F10E6\n    mov r1, #5\n    lsl r1, r1, #6\n    ldrb r1, [r5, r1]\n    cmp r1, #0\n    bne _021F10E6\n    ldr r1, _021F127C ; =0x00000142\n    ldrb r1, [r5, r1]\n    add r2, r1, #1\n    ldr r1, _021F127C ; =0x00000142\n    strb r2, [r5, r1]\n    ldrb r1, [r5, r1]\n    cmp r1, #4\n    blo _021F10E6\n    mov r1, #5\n    lsl r1, r1, #6\n    strb r6, [r5, r1]\n    cmp r0, #0\n    beq _021F1122\n    add r0, r4, #0\n    add r0, #0x84\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021F10F8\n    bl GF_AssertFail\n    ldr r1, [r4]\n    ldr r0, [sp, #4]\n    cmp r0, r1\n    bls _021F1102\n    str r1, [sp, #4]\n    ldr r0, _021F1280 ; =0x0000013E\n    ldrb r0, [r5, r0]\n    lsl r1, r0, #3\n    add r0, sp, #8\n    str r4, [r0, r1]\n    ldr r0, _021F1280 ; =0x0000013E\n    ldrb r0, [r5, r0]\n    lsl r1, r0, #3\n    add r0, sp, #8\n    add r0, r0, r1\n    str r6, [r0, #4]\n    ldr r0, _021F1280 ; =0x0000013E\n    ldrb r0, [r5, r0]\n    add r1, r0, #1\n    ldr r0, _021F1280 ; =0x0000013E\n    strb r1, [r5, r0]\n    add r6, r6, #1\n    add r7, #0x88\n    cmp r6, #0x18\n    bge _021F112C\n    b _021F0FE6\n    ldr r1, _021F1280 ; =0x0000013E\n    mov r0, #0\n    ldrb r3, [r5, r1]\n    cmp r3, #0\n    ble _021F116A\n    add r2, sp, #8\n    ldr r1, [r2]\n    add r1, #0x84\n    ldrb r1, [r1]\n    cmp r1, #0x19\n    bne _021F1162\n    add r6, sp, #8\n    lsl r4, r0, #3\n    ldr r0, [r6, r4]\n    ldr r1, [r0]\n    ldr r0, [sp, #4]\n    cmp r1, r0\n    bls _021F116A\n    cmp r0, #0\n    bne _021F1158\n    bl GF_AssertFail\n    ldr r0, [sp, #4]\n    sub r1, r0, #1\n    ldr r0, [r6, r4]\n    str r1, [r0]\n    b _021F116A\n    add r0, r0, #1\n    add r2, #8\n    cmp r0, r3\n    blt _021F1138\n    mov r0, #0\n    str r0, [sp]\n    ldr r1, _021F1280 ; =0x0000013E\n    ldr r3, _021F1284 ; =ov112_021F0F70\n    ldrb r1, [r5, r1]\n    add r0, sp, #8\n    mov r2, #8\n    bl MATH_QSort\n    ldr r0, _021F1280 ; =0x0000013E\n    ldrb r4, [r5, r0]\n    cmp r4, #2\n    bhs _021F11A6\n    sub r0, r4, #1\n    lsl r1, r0, #3\n    add r0, sp, #8\n    ldr r0, [r0, r1]\n    mov r2, #0\n    add r0, #0x76\n    strb r2, [r0]\n    bl GF_RTC_DateTimeToSec\n    ldr r1, _021F1280 ; =0x0000013E\n    ldrb r1, [r5, r1]\n    sub r1, r1, #1\n    lsl r2, r1, #3\n    add r1, sp, #8\n    ldr r1, [r1, r2]\n    str r0, [r1]\n    b _021F11EA\n    sub r1, r4, #2\n    lsl r1, r1, #3\n    add r3, sp, #8\n    ldr r2, [r3, r1]\n    sub r4, r4, #1\n    add r1, r2, #0\n    add r1, #0x76\n    lsl r4, r4, #3\n    ldr r4, [r3, r4]\n    ldrb r1, [r1]\n    add r4, #0x76\n    strb r1, [r4]\n    add r1, r2, #0\n    add r1, #0x84\n    ldrb r1, [r1]\n    cmp r1, #0x1b\n    bne _021F11DC\n    ldrb r0, [r5, r0]\n    mov r1, #0xe1\n    ldr r2, [r2]\n    sub r0, r0, #1\n    lsl r0, r0, #3\n    lsl r1, r1, #4\n    ldr r0, [r3, r0]\n    add r1, r2, r1\n    str r1, [r0]\n    b _021F11EA\n    ldrb r0, [r5, r0]\n    ldr r1, [r2]\n    sub r0, r0, #1\n    lsl r0, r0, #3\n    ldr r0, [r3, r0]\n    add r1, r1, #5\n    str r1, [r0]\n    ldr r0, _021F1280 ; =0x0000013E\n    mov r1, #0\n    ldrb r0, [r5, r0]\n    add r2, r1, #0\n    add r7, r1, #0\n    cmp r0, #0\n    ble _021F1232\n    add r6, sp, #8\n    ldr r0, [r6]\n    add r3, r0, #0\n    add r3, #0x84\n    ldrb r3, [r3]\n    add r4, r0, #0\n    add r4, #0x78\n    ldrh r4, [r4]\n    cmp r3, #0x1b\n    bne _021F1222\n    cmp r1, #0x1b\n    bne _021F1222\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    cmp r4, r1\n    bge _021F1222\n    cmp r2, r1\n    bge _021F1222\n    add r0, #0x84\n    mov r1, #0\n    strb r1, [r0]\n    ldr r0, _021F1280 ; =0x0000013E\n    add r7, r7, #1\n    ldrb r0, [r5, r0]\n    add r1, r3, #0\n    add r2, r4, #0\n    add r6, #8\n    cmp r7, r0\n    blt _021F11FA\n    mov r1, #0\n    add r4, r1, #0\n    cmp r0, #0\n    ble _021F1260\n    ldr r6, _021F1280 ; =0x0000013E\n    add r2, sp, #8\n    add r3, r5, #0\n    ldr r0, [r2]\n    add r7, r0, #0\n    add r7, #0x84\n    ldrb r7, [r7]\n    cmp r7, #0\n    beq _021F1256\n    add r7, r3, #0\n    add r7, #0xc0\n    str r0, [r7]\n    add r3, r3, #4\n    add r1, r1, #1\n    ldrb r0, [r5, r6]\n    add r4, r4, #1\n    add r2, #8\n    cmp r4, r0\n    blt _021F1240\n    ldr r0, _021F1280 ; =0x0000013E\n    strb r1, [r5, r0]\n    add sp, #0xc8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F1268: .word 0x0000FFF9\n    _021F126C: .word 0x000001ED\n    _021F1270: .word 0x00000143\n    _021F1274: .word 0x0000013F\n    _021F1278: .word 0x00000141\n    _021F127C: .word 0x00000142\n    _021F1280: .word 0x0000013E\n    _021F1284: .word ov112_021F0F70"
    );
    #endif
}

void ov112_021F1288(void) {
    /* Original at 0x021F1288 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bne _021F1292\n    bl GF_AssertFail\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    bne _021F129C\n    bl GF_AssertFail\n    mov r1, #0x1b\n    add r2, r1, #0\n    ldr r3, [r5, #4]\n    mov r0, #1\n    add r2, #0xf8\n    bl NewMsgDataFromNarc\n    str r0, [r5, #0x5c]\n    ldr r3, [r5, #4]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xed\n    bl NewMsgDataFromNarc\n    str r0, [r5, #0x60]\n    ldr r3, [r5, #4]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xde\n    bl NewMsgDataFromNarc\n    str r0, [r5, #0x64]\n    ldr r2, [r5, #4]\n    mov r0, #0xd\n    mov r1, #0x20\n    bl MessageFormat_New_Custom\n    add r4, r5, #0\n    ldr r6, _021F1320 ; =ov112_021FF350\n    str r0, [r5, #0x58]\n    mov r7, #0\n    add r4, #0x18\n    ldr r0, [r5, #0x14]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl AddWindow\n    add r7, r7, #1\n    add r6, #8\n    add r4, #0x10\n    cmp r7, #4\n    blt _021F12DC\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, [r5, #0x14]\n    mov r1, #2\n    mov r3, #1\n    bl BG_FillCharDataRange\n    mov r1, #7\n    ldr r2, [r5, #4]\n    mov r0, #0\n    lsl r1, r1, #6\n    bl LoadFontPal1\n    mov r1, #7\n    ldr r2, [r5, #4]\n    mov r0, #4\n    lsl r1, r1, #6\n    bl LoadFontPal1\n    ldr r1, [r5, #4]\n    mov r0, #4\n    bl FontID_Alloc\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F1320: .word ov112_021FF350"
    );
    #endif
}

void ov112_021F1324(void) {
    /* Original at 0x021F1324 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r6, #0\n    mov r4, #0\n    add r5, #0x18\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #4\n    blt _021F132E\n    ldr r0, [r6, #0x58]\n    bl MessageFormat_Delete\n    ldr r0, [r6, #0x5c]\n    bl DestroyMsgData\n    ldr r0, [r6, #0x60]\n    bl DestroyMsgData\n    ldr r0, [r6, #0x64]\n    bl DestroyMsgData\n    mov r0, #4\n    bl FontID_Release\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov112_021F135C(void) {
    /* Original at 0x021F135C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r1, #0\n    add r5, r0, #0\n    add r7, r2, #0\n    str r3, [sp, #0x10]\n    cmp r6, #4\n    blo _021F1370\n    bl GF_AssertFail\n    add r4, r5, #0\n    add r4, #0x18\n    lsl r6, r6, #4\n    add r0, r4, r6\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x58]\n    ldr r1, [r5, #0x5c]\n    ldr r3, [r5, #4]\n    add r2, r7, #0\n    bl ReadMsgData_ExpandPlaceholders\n    add r5, r0, #0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021F13B8 ; =0x00010200\n    add r2, r5, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r1, [sp, #0x28]\n    ldr r3, [sp, #0x10]\n    add r0, r4, r6\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl String_Delete\n    add r0, r4, r6\n    bl CopyWindowToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F13B8: .word 0x00010200"
    );
    #endif
}

void ov112_021F13BC(void) {
    ov112_021F135C();
}

void ov112_021F13CC(void) {
    /* Original at 0x021F13CC */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r1, #0\n    add r5, r0, #0\n    str r0, [sp, #0x10]\n    add r0, #0x38\n    mov r1, #0\n    add r4, r2, #0\n    str r0, [sp, #0x10]\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x58]\n    ldr r1, [r5, #0x5c]\n    ldr r3, [r5, #4]\n    add r2, r6, #0\n    bl ReadMsgData_ExpandPlaceholders\n    add r6, r0, #0\n    cmp r4, #0\n    beq _021F145A\n    ldr r0, [r5, #0x58]\n    ldr r1, [r5, #0x5c]\n    ldr r3, [r5, #4]\n    add r2, r4, #0\n    bl ReadMsgData_ExpandPlaceholders\n    add r7, r0, #0\n    add r0, r6, #0\n    bl String_GetLength\n    add r4, r0, #0\n    add r0, r7, #0\n    bl String_GetLength\n    add r0, r4, r0\n    ldr r1, [r5, #4]\n    add r0, r0, #2\n    bl String_New\n    add r1, r6, #0\n    add r4, r0, #0\n    bl String_Copy\n    mov r1, #0xe\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl String_AddChar\n    add r0, r4, #0\n    add r1, r7, #0\n    bl String_Cat\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021F1484 ; =0x00010200\n    mov r1, #1\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    add r2, r4, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl String_Delete\n    b _021F1472\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _021F1484 ; =0x00010200\n    mov r1, #1\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    add r2, r6, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, [sp, #0x10]\n    bl CopyWindowToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F1484: .word 0x00010200"
    );
    #endif
}

void ov112_021F1488(void) {
    /* Original at 0x021F1488 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #1\n    str r2, [sp, #8]\n    add r6, r1, #0\n    add r4, r3, #0\n    str r0, [sp, #0xc]\n    ldr r1, [r5, #4]\n    add r0, r4, #0\n    bl String_New\n    add r7, r0, #0\n    ldrh r0, [r6]\n    cmp r0, #0\n    beq _021F14C6\n    mov r2, #0\n    cmp r4, #0\n    ble _021F14C6\n    ldr r0, _021F14FC ; =0x0000FFFF\n    add r3, r6, #0\n    ldrh r1, [r3]\n    cmp r1, r0\n    bne _021F14BE\n    mov r0, #0\n    str r0, [sp, #0xc]\n    b _021F14C6\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, r4\n    blt _021F14B2\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    beq _021F14D6\n    ldr r1, _021F1500 ; =ov112_021FF2EC\n    add r0, r7, #0\n    bl CopyU16ArrayToString\n    b _021F14DE\n    add r0, r7, #0\n    add r1, r6, #0\n    bl CopyU16ArrayToString\n    mov r0, #1\n    str r0, [sp]\n    mov r3, #2\n    str r3, [sp, #4]\n    ldr r0, [r5, #0x58]\n    ldr r1, [sp, #8]\n    add r2, r7, #0\n    bl BufferString\n    add r0, r7, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F14FC: .word 0x0000FFFF\n    _021F1500: .word ov112_021FF2EC"
    );
    #endif
}

void ov112_021F1504(void) {
    /* Original at 0x021F1504 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    mov r0, #0x86\n    lsl r0, r0, #2\n    cmp r1, r0\n    bls _021F1514\n    add r1, r0, #0\n    ldr r0, [r5, #0x64]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    bl String_GetLength\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    add r0, r6, #0\n    add r1, sp, #0\n    mov r2, #0x13\n    bl CopyStringToU16Array\n    add r0, r5, #0\n    add r1, sp, #0\n    mov r2, #4\n    add r3, r4, #0\n    bl ov112_021F1488\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x28\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov112_021F1548(void) {
    /* Original at 0x021F1548 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, [r5, #0x60]\n    add r6, r1, #0\n    add r1, r2, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    bl String_GetLength\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    add r0, r4, #0\n    add r1, sp, #0\n    add r2, r7, #0\n    bl CopyStringToU16Array\n    add r0, r5, #0\n    add r1, sp, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov112_021F1488\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F1584(void) {
    /* Original at 0x021F1584 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldrh r0, [r1]\n    add r7, r2, #0\n    mov r4, #1\n    mov ip, r3\n    cmp r0, #0\n    beq _021F15AC\n    ldr r0, _021F15C8 ; =0x0000FFFF\n    mov r3, #0\n    add r5, r1, #0\n    ldrh r2, [r5]\n    cmp r2, r0\n    bne _021F15A4\n    mov r4, #0\n    b _021F15AC\n    add r3, r3, #1\n    add r5, r5, #2\n    cmp r3, #0xb\n    blt _021F159A\n    cmp r4, #0\n    beq _021F15BC\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r2, ip\n    bl ov112_021F1548\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add r2, r7, #0\n    mov r3, #0xb\n    bl ov112_021F1488\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F15C8: .word 0x0000FFFF"
    );
    #endif
}

void ov112_021F15CC(void) {
    BufferIntegerAsString(1);
}

void ov112_021F15E4(void) {
    /* Original at 0x021F15E4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    ldr r4, _021F1620 ; =0x0000013D\n    add r1, r0, #0\n    ldrb r0, [r1, r4]\n    mov r3, #0\n    lsl r0, r0, #2\n    add r0, r1, r0\n    add r0, #0xc0\n    ldr r2, [r0]\n    add r0, sp, #0xc\n    str r3, [r0]\n    str r3, [r0, #4]\n    str r3, [r0, #8]\n    str r3, [r0, #0xc]\n    add r0, sp, #0\n    str r3, [r0]\n    str r3, [r0, #4]\n    str r3, [r0, #8]\n    add r0, r4, #0\n    sub r0, #0x1d\n    sub r4, #0xd\n    add r0, r1, r0\n    ldr r2, [r2]\n    add r1, r1, r4\n    bl RTC_ConvertSecondToDateTime\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    nop\n    _021F1620: .word 0x0000013D"
    );
    #endif
}

void ov112_021F1624(void) {
    /* Original at 0x021F1624 */
    /* Requires manual decompilation - 158 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, _021F1788 ; =0x0000013D\n    str r1, [sp, #4]\n    ldrb r1, [r5, r0]\n    str r2, [sp, #8]\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0xc0\n    ldr r6, [r1]\n    add r1, r0, #0\n    sub r1, #0x19\n    ldr r1, [r5, r1]\n    str r1, [sp, #0x10]\n    add r1, r0, #0\n    sub r1, #0x15\n    sub r0, #0xd\n    ldr r1, [r5, r1]\n    ldr r4, [r5, r0]\n    str r1, [sp, #0xc]\n    cmp r4, #0xc\n    bge _021F165C\n    mov r7, #0x57\n    cmp r4, #0\n    bne _021F1664\n    mov r4, #0xc\n    b _021F1664\n    mov r7, #0x58\n    sub r4, #0xc\n    bne _021F1664\n    mov r4, #0xc\n    ldr r1, [r5, #8]\n    add r0, r5, #0\n    mov r2, #0\n    mov r3, #9\n    bl ov112_021F1488\n    add r1, r6, #0\n    ldrh r3, [r6, #0xa]\n    add r0, r5, #0\n    add r1, #0x20\n    mov r2, #1\n    bl ov112_021F1584\n    add r1, r6, #0\n    add r0, r5, #0\n    add r1, #0x10\n    mov r2, #2\n    mov r3, #9\n    bl ov112_021F1488\n    add r1, r6, #0\n    ldrh r3, [r6, #0xc]\n    add r0, r5, #0\n    add r1, #0x36\n    mov r2, #3\n    bl ov112_021F1584\n    ldrh r1, [r6, #0xe]\n    add r0, r5, #0\n    bl ov112_021F1504\n    add r1, r6, #0\n    ldrh r3, [r6, #0xc]\n    add r0, r5, #0\n    add r1, #0x36\n    mov r2, #5\n    bl ov112_021F1584\n    mov r0, #0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    mov r3, #2\n    bl ov112_021F15CC\n    mov r0, #0\n    add r2, r6, #0\n    str r0, [sp]\n    add r2, #0x78\n    ldrh r2, [r2]\n    add r0, r5, #0\n    mov r1, #7\n    mov r3, #5\n    bl ov112_021F15CC\n    add r6, #0x4c\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #8\n    mov r3, #0x15\n    bl ov112_021F1488\n    mov r0, #0\n    str r0, [sp]\n    ldr r2, [sp, #0x10]\n    add r0, r5, #0\n    mov r1, #9\n    mov r3, #2\n    bl ov112_021F15CC\n    mov r0, #0\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #0xa\n    mov r3, #2\n    bl ov112_021F15CC\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    add r0, r5, #0\n    bl ov112_021F13CC\n    mov r0, #1\n    str r0, [sp]\n    ldr r2, [sp, #0x10]\n    add r0, r5, #0\n    mov r1, #9\n    mov r3, #2\n    bl ov112_021F15CC\n    mov r0, #1\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #0xa\n    mov r3, #2\n    bl ov112_021F15CC\n    mov r1, #0\n    add r0, r5, #0\n    mov r2, #0x56\n    add r3, r1, #0\n    bl ov112_021F13BC\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #6\n    add r2, r4, #0\n    mov r3, #2\n    bl ov112_021F15CC\n    ldr r0, [r5, #0x58]\n    ldr r1, [r5, #0x5c]\n    ldr r3, [r5, #4]\n    add r2, r7, #0\n    bl ReadMsgData_ExpandPlaceholders\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x28\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #1\n    add r1, r4, #0\n    mov r2, #0\n    lsl r3, r3, #3\n    bl FontID_String_GetCenterAlignmentX\n    add r6, r0, #0\n    add r0, r4, #0\n    bl String_Delete\n    lsl r3, r6, #0x18\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r7, #0\n    lsr r3, r3, #0x18\n    bl ov112_021F13BC\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F1788: .word 0x0000013D"
    );
    #endif
}

void ov112_021F178C(void) {
    ov112_021F135C();
}

void ov112_021F179C(void) {
    /* Original at 0x021F179C */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0xa0\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    bl BgConfig_Alloc\n    add r3, sp, #4\n    ldr r4, _021F1808 ; =ov112_021FF2F4\n    str r0, [r5, #0x14]\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r4, _021F180C ; =ov112_021FF434\n    add r3, sp, #0x14\n    mov r2, #0x11\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F17C4\n    ldr r0, [r4]\n    ldr r4, _021F1810 ; =ov112_021FF4C0\n    str r0, [r3]\n    mov r7, #0\n    add r6, sp, #0x14\n    ldrb r1, [r4]\n    ldr r0, [r5, #0x14]\n    add r2, r6, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldrb r1, [r4]\n    ldr r0, [r5, #0x14]\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0\n    str r0, [sp]\n    ldrb r1, [r4]\n    ldr r0, [r5, #0x14]\n    mov r2, #0\n    mov r3, #1\n    bl BG_FillCharDataRange\n    add r7, r7, #1\n    add r6, #0x1c\n    add r4, r4, #1\n    cmp r7, #5\n    blt _021F17D6\n    add sp, #0xa0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F1808: .word ov112_021FF2F4\n    _021F180C: .word ov112_021FF434\n    _021F1810: .word ov112_021FF4C0"
    );
    #endif
}

void ov112_021F1814(void) {
    /* Original at 0x021F1814 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r5, _021F1834 ; =ov112_021FF4C0\n    add r6, r0, #0\n    mov r4, #0\n    ldrb r1, [r5]\n    ldr r0, [r6, #0x14]\n    bl FreeBgTilemapBuffer\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #5\n    blt _021F181C\n    ldr r0, [r6, #0x14]\n    bl Heap_Free\n    pop {r4, r5, r6, pc}\n    _021F1834: .word ov112_021FF4C0"
    );
    #endif
}

void ov112_021F1838(void) {
    /* Original at 0x021F1838 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _021F1848\n    bl GF_AssertFail\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [r4, #4]\n    add r2, r1, #0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x10]\n    add r3, r1, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    ldr r0, [r4, #4]\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4, #0x14]\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    mov r1, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4, #0x14]\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #1\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r4, #4]\n    add r3, r1, #0\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4, #0x14]\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    ldr r0, [r4, #4]\n    mov r1, #3\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4, #0x14]\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r4, #4]\n    mov r1, #9\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x10]\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    mov r1, #0xa\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4, #0x14]\n    mov r3, #4\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    mov r1, #0xb\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4, #0x14]\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021F1904(void) {
    /* Original at 0x021F1904 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    cmp r1, #6\n    blo _021F1916\n    cmp r1, #0x10\n    bhs _021F1916\n    mov r1, #0\n    b _021F1924\n    cmp r1, #0x10\n    blo _021F1922\n    cmp r1, #0x13\n    bhs _021F1922\n    mov r1, #1\n    b _021F1924\n    mov r1, #2\n    cmp r2, #5\n    bne _021F192E\n    add r0, r1, #3\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    ldr r0, [r4, #4]\n    add r1, r1, #3\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4, #0x14]\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021F194C(void) {
    /* Original at 0x021F194C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    cmp r4, #8\n    blo _021F1958\n    bl GF_AssertFail\n    ldr r0, _021F1968 ; =ov112_021FF9B8\n    lsl r1, r4, #2\n    ldr r0, [r0, r1]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl PlayBGM\n    pop {r4, pc}\n    _021F1968: .word ov112_021FF9B8"
    );
    #endif
}

void ov112_021F196C(void) {
    /* Original at 0x021F196C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x4c\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    bl SpriteSystem_Alloc\n    str r0, [r5, #0x68]\n    bl SpriteManager_New\n    add r2, sp, #0x2c\n    ldr r3, _021F19FC ; =ov112_021FF330\n    str r0, [r5, #0x6c]\n    ldmia r3!, {r0, r1}\n    add r4, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    ldr r6, _021F1A00 ; =ov112_021FF304\n    stmia r2!, {r0, r1}\n    add r3, sp, #0x18\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    add r1, r4, #0\n    str r0, [r3]\n    mov r3, #0x20\n    str r3, [sp, #0x18]\n    ldr r0, [r5, #0x68]\n    bl SpriteSystem_Init\n    ldr r0, [r5, #0x68]\n    ldr r1, [r5, #0x6c]\n    mov r2, #0x20\n    bl SpriteSystem_InitSprites\n    ldr r4, _021F1A04 ; =ov112_021FF318\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5, #0x68]\n    ldr r1, [r5, #0x6c]\n    bl SpriteSystem_InitManagerWithCapacities\n    ldr r0, [r5, #0x68]\n    bl SpriteSystem_GetRenderer\n    mov r2, #0x83\n    mov r1, #0\n    lsl r2, r2, #0xe\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x4c\n    pop {r3, r4, r5, r6, pc}\n    _021F19FC: .word ov112_021FF330\n    _021F1A00: .word ov112_021FF304\n    _021F1A04: .word ov112_021FF318"
    );
    #endif
}

void ov112_021F1A08(void) {
    /* Original at 0x021F1A08 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r6, [r5, #0x68]\n    ldr r7, [r5, #0x6c]\n    bl ov112_021F1FD0\n    mov r4, #0\n    ldr r0, [r5, #0x70]\n    cmp r0, #0\n    bne _021F1A20\n    bl GF_AssertFail\n    ldr r0, [r5, #0x70]\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0xa\n    blt _021F1A16\n    add r0, r6, #0\n    add r1, r7, #0\n    bl SpriteSystem_FreeResourcesAndManager\n    add r0, r6, #0\n    bl SpriteSystem_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F1A40(void) {
    /* Original at 0x021F1A40 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r6, [r5, #0x68]\n    ldr r4, [r5, #0x6c]\n    mov r1, #0\n    str r1, [sp]\n    mov r3, #0xc\n    str r3, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, [r5, #0x10]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl SpriteSystem_LoadPlttResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r2, [r5, #0x10]\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r3, #0xd\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x10]\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r3, #0xf\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x10]\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r3, #0xe\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x10]\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r3, #0x10\n    bl SpriteSystem_LoadPlttResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r2, [r5, #0x10]\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r3, #0x11\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x10]\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r3, #0x13\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x10]\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r3, #0x12\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov112_021F1AF4(void) {
    /* Original at 0x021F1AF4 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    ldr r4, _021F1B40 ; =ov112_021FF398\n    add r6, r2, #0\n    add r5, r3, #0\n    add r7, r0, #0\n    mov ip, r1\n    add r3, sp, #0\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F1B06\n    ldr r0, [r4]\n    add r1, sp, #0\n    str r0, [r3]\n    strh r6, [r1]\n    strh r5, [r1, #2]\n    add r0, sp, #0x38\n    ldrb r2, [r0, #0x14]\n    mov r3, #0x83\n    lsl r3, r3, #0xe\n    str r2, [sp, #8]\n    ldrb r0, [r0, #0x10]\n    add r2, sp, #0\n    strh r0, [r1, #6]\n    add r0, r7, #0\n    mov r1, ip\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #1\n    add r4, r0, #0\n    bl ManagedSprite_SetAnimateFlag\n    add r0, r4, #0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F1B40: .word ov112_021FF398"
    );
    #endif
}

void ov112_021F1B44(void) {
    /* Original at 0x021F1B44 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    ldr r4, _021F1B90 ; =ov112_021FF3CC\n    add r6, r2, #0\n    add r5, r3, #0\n    add r7, r0, #0\n    mov ip, r1\n    add r3, sp, #0\n    mov r2, #6\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F1B56\n    ldr r0, [r4]\n    add r1, sp, #0\n    str r0, [r3]\n    strh r6, [r1]\n    strh r5, [r1, #2]\n    add r0, sp, #0x38\n    ldrb r2, [r0, #0x14]\n    mov r3, #0x83\n    lsl r3, r3, #0xe\n    str r2, [sp, #8]\n    ldrb r0, [r0, #0x10]\n    add r2, sp, #0\n    strh r0, [r1, #6]\n    add r0, r7, #0\n    mov r1, ip\n    bl SpriteSystem_NewSpriteWithYOffset\n    mov r1, #1\n    add r4, r0, #0\n    bl ManagedSprite_SetAnimateFlag\n    add r0, r4, #0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F1B90: .word ov112_021FF3CC"
    );
    #endif
}

void ov112_021F1B94(void) {
    /* Original at 0x021F1B94 */
    /* Requires manual decompilation - 139 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x68]\n    ldr r1, [r4, #0x6c]\n    mov r2, #0x20\n    mov r3, #0xb0\n    bl ov112_021F1AF4\n    str r0, [r4, #0x70]\n    mov r0, #9\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x68]\n    ldr r1, [r4, #0x6c]\n    mov r2, #0x50\n    mov r3, #0xb0\n    bl ov112_021F1AF4\n    str r0, [r4, #0x74]\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x68]\n    ldr r1, [r4, #0x6c]\n    mov r2, #0xd8\n    mov r3, #0xb0\n    bl ov112_021F1AF4\n    str r0, [r4, #0x78]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x68]\n    ldr r1, [r4, #0x6c]\n    mov r2, #0x80\n    mov r3, #0x44\n    bl ov112_021F1AF4\n    str r0, [r4, #0x7c]\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x68]\n    ldr r1, [r4, #0x6c]\n    mov r2, #0x68\n    mov r3, #0x38\n    bl ov112_021F1AF4\n    add r1, r4, #0\n    add r1, #0x80\n    str r0, [r1]\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x68]\n    ldr r1, [r4, #0x6c]\n    mov r2, #0x98\n    mov r3, #0x38\n    bl ov112_021F1AF4\n    add r1, r4, #0\n    add r1, #0x84\n    str r0, [r1]\n    mov r0, #0x1a\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x68]\n    ldr r1, [r4, #0x6c]\n    mov r2, #0x68\n    mov r3, #0x28\n    bl ov112_021F1AF4\n    add r1, r4, #0\n    add r1, #0x94\n    str r0, [r1]\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x68]\n    ldr r1, [r4, #0x6c]\n    mov r2, #0x68\n    mov r3, #0x28\n    bl ov112_021F1B44\n    add r1, r4, #0\n    add r1, #0x88\n    str r0, [r1]\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x68]\n    ldr r1, [r4, #0x6c]\n    mov r2, #0x98\n    mov r3, #0x28\n    bl ov112_021F1B44\n    add r1, r4, #0\n    add r1, #0x8c\n    str r0, [r1]\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x68]\n    ldr r1, [r4, #0x6c]\n    mov r2, #0x80\n    mov r3, #0x28\n    bl ov112_021F1B44\n    add r1, r4, #0\n    add r1, #0x90\n    str r0, [r1]\n    add r0, r4, #0\n    bl ov112_021F1F80\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021F1CC8\n    ldr r0, [r4, #0x70]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F1CC4 ; =0x0000013D\n    ldrb r1, [r4, r0]\n    add r0, r0, #1\n    ldrb r0, [r4, r0]\n    sub r0, r0, #1\n    cmp r1, r0\n    bge _021F1CB6\n    mov r1, #1\n    b _021F1CB8\n    mov r1, #0\n    ldr r0, [r4, #0x74]\n    bl ManagedSprite_SetDrawFlag\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _021F1CC4: .word 0x0000013D"
    );
    #endif
}

void ov112_021F1CC8(void) {
    /* Original at 0x021F1CC8 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x98\n    add r4, r1, #0\n    bl ov112_021F1EFC\n    add r0, r5, #0\n    add r0, #0xac\n    add r1, r4, #0\n    bl ov112_021F1EFC\n    add r0, r5, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    add r1, r4, #0\n    bl ManagedSprite_SetDrawFlag\n    add r0, r5, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    add r1, r4, #0\n    bl ManagedSprite_SetDrawFlag\n    add r0, r5, #0\n    add r0, #0x88\n    ldr r0, [r0]\n    add r1, r4, #0\n    bl ManagedSprite_SetDrawFlag\n    add r0, r5, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    add r1, r4, #0\n    bl ManagedSprite_SetDrawFlag\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    add r1, r4, #0\n    bl ManagedSprite_SetDrawFlag\n    add r5, #0x90\n    ldr r0, [r5]\n    add r1, r4, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021F1D28(void) {
    /* Original at 0x021F1D28 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    lsl r5, r1, #2\n    add r4, #0x70\n    ldr r0, [r4, r5]\n    bl ManagedSprite_GetDrawFlag\n    cmp r0, #0\n    beq _021F1D56\n    ldr r0, [r4, r5]\n    bl ManagedSprite_IsAnimated\n    cmp r0, #0\n    bne _021F1D56\n    ldr r0, [r4, r5]\n    bl ManagedSprite_GetActiveAnim\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldr r0, [r4, r5]\n    bl ManagedSprite_SetAnim\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021F1D58(void) {
    /* Original at 0x021F1D58 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #8\n    blo _021F1D66\n    bl GF_AssertFail\n    ldr r0, [r5, #0x7c]\n    add r1, r4, #0\n    bl ManagedSprite_SetAnimNoRestart\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021F1D70(void) {
    /* Original at 0x021F1D70 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    str r2, [sp]\n    add r5, r3, #0\n    bl Sprite_GetVramType\n    add r4, r0, #0\n    add r0, r6, #0\n    bl Sprite_GetImageProxy\n    add r1, r4, #0\n    bl NNS_G2dGetImageLocation\n    add r6, r0, #0\n    ldr r1, [sp]\n    add r0, r7, #0\n    bl DC_FlushRange\n    cmp r4, #1\n    beq _021F1DA0\n    cmp r4, #2\n    beq _021F1DAC\n    b _021F1DB8\n    ldr r2, [sp]\n    add r0, r7, #0\n    add r1, r6, r5\n    bl GX_LoadOBJ\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [sp]\n    add r0, r7, #0\n    add r1, r6, r5\n    bl GXS_LoadOBJ\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F1DC0(void) {
    /* Original at 0x021F1DC0 */
    /* Requires manual decompilation - 143 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldrb r0, [r4, r0]\n    ldr r6, [r4, #0x68]\n    ldr r5, [r4, #0x6c]\n    cmp r0, #3\n    bls _021F1DD6\n    b _021F1EF0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F1DE2: ; jump table\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #0xc\n    bl SpriteSystem_LoadPlttResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #0xc\n    bl SpriteSystem_LoadPlttResObjFromOpenNarc\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _021F1EF4\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r2, [r4, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #0x14\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    ldr r2, [r4, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #0x14\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r2, [r4, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #0x15\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r2, [r4, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #0x16\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _021F1EF4\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r2, [r4, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #0x17\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #5\n    str r0, [sp, #8]\n    ldr r2, [r4, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #0x17\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r2, [r4, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #0x18\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    ldr r2, [r4, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #0x19\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _021F1EF4\n    add sp, #0x10\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov112_021F1EFC(void) {
    /* Original at 0x021F1EFC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bne _021F1F14\n    ldr r0, [r5, #0xc]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl ManagedSprite_SetDrawFlag\n    b _021F1F28\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _021F1F22\n    ldr r0, [r5, #0xc]\n    bl ManagedSprite_SetDrawFlag\n    b _021F1F28\n    ldr r0, [r5, #8]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r5, #4]\n    sub r0, #0x32\n    cmp r0, #1\n    bhi _021F1F32\n    mov r4, #0\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    bl ManagedSprite_SetDrawFlag\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021F1F3C(void) {
    /* Original at 0x021F1F3C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r4, r1, #0\n    bl ManagedSprite_SetAnimNoRestart\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    bl ManagedSprite_SetAnimNoRestart\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021F1F54(void) {
    /* Original at 0x021F1F54 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ManagedSprite_SetPositionXY\n    cmp r7, #0\n    bne _021F1F7C\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ManagedSprite_SetPositionXY\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F1F80(void) {
    /* Original at 0x021F1F80 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0x48\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, [r4, #0x68]\n    ldr r2, [r4, #0x6c]\n    add r0, #0x98\n    mov r3, #0x68\n    bl ov112_021F2000\n    add r0, r4, #0\n    add r0, #0x98\n    mov r1, #3\n    bl ov112_021F1F3C\n    mov r0, #0x48\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    add r0, r4, #0\n    ldr r1, [r4, #0x68]\n    ldr r2, [r4, #0x6c]\n    add r0, #0xac\n    mov r3, #0x98\n    bl ov112_021F2000\n    add r4, #0xac\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021F1F3C\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov112_021F1FD0(void) {
    /* Original at 0x021F1FD0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r7, #0\n    mov r4, #0\n    add r5, r6, #0\n    add r0, r5, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #2\n    blt _021F1FDA\n    add r0, r6, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    bl Sprite_DeleteAndFreeResources\n    add r7, r7, #1\n    add r6, #0x14\n    cmp r7, #2\n    blt _021F1FD6\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F2000(void) {
    /* Original at 0x021F2000 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x54\n    str r3, [sp, #0x14]\n    str r2, [sp, #0x10]\n    ldr r7, [sp, #0x68]\n    ldr r2, [sp, #0x70]\n    ldr r5, _021F2094 ; =ov112_021FF400\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r4, sp, #0x20\n    mov r3, #6\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    sub r3, r3, #1\n    bne _021F2016\n    ldr r0, [r5]\n    ldr r5, [sp, #8]\n    str r0, [r4]\n    add r0, sp, #0x58\n    ldrb r0, [r0, #0x14]\n    add r4, r2, #2\n    mov r6, #0\n    str r0, [sp, #0x18]\n    str r4, [sp, #0x1c]\n    ldr r1, [sp, #0x14]\n    add r0, sp, #0x20\n    strh r1, [r0]\n    strh r7, [r0, #2]\n    mov r0, #3\n    str r0, [sp, #0x28]\n    ldr r1, [sp, #0x18]\n    add r0, sp, #0x20\n    strh r1, [r0, #6]\n    ldr r0, [sp, #0x1c]\n    mov r3, #0x83\n    str r0, [sp, #0x38]\n    add r0, r6, #2\n    str r0, [sp, #0x3c]\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    str r4, [sp, #0x34]\n    add r2, sp, #0x20\n    lsl r3, r3, #0xe\n    bl SpriteSystem_NewSpriteWithYOffset\n    str r0, [r5, #8]\n    mov r1, #1\n    bl ManagedSprite_SetAnimateFlag\n    ldr r0, [r5, #8]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r6, r6, #1\n    add r4, r4, #2\n    add r5, r5, #4\n    cmp r6, #2\n    blt _021F2030\n    mov r0, #0x17\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0x14]\n    add r3, r7, #0\n    bl ov112_021F1AF4\n    ldr r1, [sp, #8]\n    str r0, [r1, #0x10]\n    add sp, #0x54\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021F2094: .word ov112_021FF400"
    );
    #endif
}

void ov112_021F2098(void) {
    /* Original at 0x021F2098 */
    /* Requires manual decompilation - 158 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r4, r1, #0\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    add r6, r2, #0\n    str r3, [sp, #0x10]\n    bl SpeciesToOverworldModelIndexOffset\n    add r2, r0, #0\n    add r0, sp, #0x30\n    mov r1, #0x8d\n    bl ReadWholeNarcMemberByIdPair\n    add r0, sp, #0x2c\n    ldrb r0, [r0, #5]\n    add r2, sp, #0x2c\n    cmp r0, #0\n    beq _021F20F2\n    ldr r0, [sp, #0xc]\n    mov r5, #2\n    ldr r0, [r0, #0xc]\n    mov r1, #1\n    ldr r0, [r0]\n    lsl r5, r5, #0xa\n    str r0, [sp, #0x1c]\n    mov r0, #8\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    str r1, [r0]\n    add r1, sp, #0x2c\n    ldr r0, [r0, #0xc]\n    add r1, #2\n    bl ManagedSprite_GetPositionXY\n    ldr r0, [sp, #0xc]\n    add r2, sp, #0x2c\n    mov r1, #2\n    mov r3, #0\n    ldrsh r1, [r2, r1]\n    ldrsh r2, [r2, r3]\n    ldr r0, [r0, #0x10]\n    bl ManagedSprite_SetPositionXY\n    b _021F2124\n    ldr r0, [sp, #0xc]\n    mov r5, #2\n    ldr r0, [r0, #8]\n    mov r1, #0\n    ldr r0, [r0]\n    lsl r5, r5, #8\n    str r0, [sp, #0x1c]\n    mov r0, #4\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    str r1, [r0]\n    add r1, sp, #0x2c\n    ldr r0, [r0, #8]\n    add r1, #2\n    bl ManagedSprite_GetPositionXY\n    ldr r0, [sp, #0xc]\n    add r2, sp, #0x2c\n    mov r1, #2\n    mov r3, #0\n    ldrsh r1, [r2, r1]\n    ldrsh r2, [r2, r3]\n    ldr r0, [r0, #0x10]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [sp, #0xc]\n    ldr r7, [sp, #0x4c]\n    str r4, [r0, #4]\n    mov r0, #0x51\n    add r1, r7, #0\n    bl NARC_New\n    str r0, [sp, #0x28]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_02070438\n    cmp r0, #0\n    bne _021F2142\n    mov r6, #0\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov112_021F0E14\n    add r1, r0, #0\n    ldr r0, [sp, #0x28]\n    add r2, r7, #0\n    bl NARC_AllocAndReadWholeMember\n    str r0, [sp, #0x24]\n    bl NNS_G3dGetTex\n    ldr r1, [r0, #0x14]\n    str r0, [sp, #0x20]\n    add r0, r0, r1\n    str r0, [sp, #0x18]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl Heap_AllocAtEnd\n    mov r7, #0\n    add r6, r0, #0\n    add r4, r7, #0\n    ldr r0, [sp, #0x14]\n    mov r2, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x14]\n    add r0, r0, r4\n    add r3, r2, #0\n    str r6, [sp, #8]\n    bl sub_020145B4\n    ldr r0, [sp, #0x1c]\n    add r1, r6, #0\n    add r2, r5, #0\n    add r3, r4, #0\n    bl ov112_021F1D70\n    add r7, r7, #1\n    add r4, r4, r5\n    cmp r7, #8\n    blt _021F2172\n    add r0, r6, #0\n    bl Heap_Free\n    ldr r0, [sp, #0x1c]\n    bl Sprite_GetVramType\n    ldr r0, [sp, #0x20]\n    ldr r1, [r0, #0x38]\n    add r4, r0, r1\n    add r0, sp, #0x38\n    ldrb r0, [r0, #0x10]\n    cmp r0, #0\n    beq _021F21B8\n    add r4, #0x20\n    add r0, r4, #0\n    mov r1, #0x20\n    bl DC_FlushRange\n    ldr r0, [sp, #0x1c]\n    bl Sprite_GetPaletteProxy\n    mov r1, #1\n    bl NNS_G2dGetImagePaletteLocation\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0x20\n    bl GX_LoadOBJPltt\n    ldr r0, [sp, #0x24]\n    bl Heap_Free\n    ldr r0, [sp, #0x28]\n    bl NARC_Delete\n    ldr r0, [sp, #0x1c]\n    mov r1, #1\n    bl thunk_Sprite_SetDrawFlag\n    ldr r0, [sp, #0xc]\n    mov r1, #1\n    ldr r0, [r0, #4]\n    sub r0, #0x32\n    cmp r0, #1\n    bhi _021F21F8\n    mov r1, #0\n    ldr r0, [sp, #0xc]\n    ldr r0, [r0, #0x10]\n    bl ManagedSprite_SetDrawFlag\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F2204(void) {
    /* Original at 0x021F2204 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _021F22AC ; =0x0000013D\n    add r6, r1, #0\n    ldrb r0, [r5, r0]\n    add r7, r2, #0\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r0, #0xc0\n    ldr r4, [r0]\n    cmp r6, #0\n    bne _021F2238\n    add r0, r5, #0\n    add r0, #0x98\n    mov r1, #0x68\n    mov r2, #0x48\n    mov r3, #0\n    bl ov112_021F1F54\n    add r0, r5, #0\n    add r0, #0x98\n    mov r1, #3\n    bl ov112_021F1F3C\n    b _021F2250\n    add r0, r5, #0\n    add r0, #0xac\n    mov r1, #0x98\n    mov r2, #0x48\n    mov r3, #0\n    bl ov112_021F1F54\n    add r0, r5, #0\n    add r0, #0xac\n    mov r1, #1\n    bl ov112_021F1F3C\n    cmp r7, #0\n    beq _021F2280\n    add r0, r4, #0\n    mov r1, #1\n    bl ov112_021F0F48\n    str r0, [sp]\n    ldr r0, [r5, #4]\n    add r5, #0x98\n    str r0, [sp, #4]\n    ldrh r1, [r4, #0xa]\n    add r4, #0x85\n    ldrb r3, [r4]\n    mov r0, #0x14\n    mul r0, r6\n    lsl r2, r3, #0x1b\n    lsl r3, r3, #0x19\n    add r0, r5, r0\n    lsr r2, r2, #0x1b\n    lsr r3, r3, #0x1e\n    bl ov112_021F2098\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021F0F48\n    str r0, [sp]\n    ldr r0, [r5, #4]\n    add r5, #0x98\n    str r0, [sp, #4]\n    ldrh r1, [r4, #0xc]\n    add r4, #0x86\n    ldrb r3, [r4]\n    mov r0, #0x14\n    mul r0, r6\n    lsl r2, r3, #0x1b\n    lsl r3, r3, #0x19\n    add r0, r5, r0\n    lsr r2, r2, #0x1b\n    lsr r3, r3, #0x1e\n    bl ov112_021F2098\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F22AC: .word 0x0000013D"
    );
    #endif
}

void ov112_021F22B0(void) {
    /* Original at 0x021F22B0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r4, #0xf\n    cmp r1, #1\n    bne _021F22BE\n    add r4, r4, #4\n    add r0, r5, #0\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ManagedSprite_SetAnim\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021F22D0(void) {
    /* Original at 0x021F22D0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    add r4, r6, #0\n    lsl r5, r2, #2\n    add r4, #0x70\n    add r7, r1, #0\n    add r1, sp, #4\n    ldr r0, [r4, r5]\n    add r1, #2\n    add r2, sp, #4\n    str r3, [sp]\n    bl ManagedSprite_GetPositionXY\n    mov r0, #0x14\n    mul r0, r7\n    add r0, r6, r0\n    add r0, #0x98\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021F22FE\n    mov r0, #0x18\n    b _021F2300\n    mov r0, #0x28\n    add r3, sp, #4\n    strh r0, [r3]\n    mov r1, #2\n    mov r2, #0\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    ldr r0, [r4, r5]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [r4, r5]\n    ldr r1, [sp]\n    bl ManagedSprite_SetAnim\n    ldr r0, [r4, r5]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F2328(void) {
    ov112_021F235C();
    ov112_021F24D8(r4);
}

void ov112_021F2338(void) {
    ov112_021F238C();
    ov112_021F24F8(r4);
}

void ov112_021F2348(void) {
    /* Original at 0x021F2348 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x52\n    lsl r2, r2, #2\n    ldr r3, [r0, r2]\n    mov r1, #1\n    bic r3, r1\n    mov r1, #1\n    orr r1, r3\n    str r1, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov112_021F235C(void) {
    /* Original at 0x021F235C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x52\n    lsl r2, r2, #2\n    ldr r3, [r0, r2]\n    mov r1, #1\n    bic r3, r1\n    str r3, [r0, r2]\n    ldr r1, [r0, r2]\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    str r1, [r0, r2]\n    ldr r3, [r0, r2]\n    ldr r1, _021F2384 ; =0xFFFFFE01\n    and r1, r3\n    str r1, [r0, r2]\n    ldr r3, [r0, r2]\n    ldr r1, _021F2388 ; =0xFFFF01FF\n    and r1, r3\n    str r1, [r0, r2]\n    bx lr\n    nop\n    _021F2384: .word 0xFFFFFE01\n    _021F2388: .word 0xFFFF01FF"
    );
    #endif
}

void ov112_021F238C(void) {
    /* Original at 0x021F238C */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r3, #0x52\n    add r5, r0, #0\n    lsl r3, r3, #2\n    ldr r2, [r5, r3]\n    lsl r0, r2, #0x1f\n    lsr r0, r0, #0x1f\n    beq _021F23AA\n    lsl r0, r2, #0x17\n    lsr r0, r0, #0x18\n    beq _021F23AE\n    cmp r0, #1\n    beq _021F2438\n    cmp r0, #2\n    bne _021F23AC\n    b _021F24B4\n    b _021F24B0\n    lsr r3, r2, #0x10\n    ldr r2, _021F24B8 ; =ov112_021FF4C8\n    add r0, r5, #0\n    ldrsb r3, [r2, r3]\n    mov r2, #0x48\n    add r0, #0xac\n    sub r2, r2, r3\n    lsl r2, r2, #0x10\n    mov r1, #0x98\n    asr r2, r2, #0x10\n    mov r3, #1\n    bl ov112_021F1F54\n    mov r1, #0x52\n    lsl r1, r1, #2\n    ldr r2, [r5, r1]\n    lsl r0, r2, #0x10\n    lsr r3, r0, #0x10\n    lsr r0, r2, #0x10\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    orr r0, r3\n    str r0, [r5, r1]\n    ldr r2, [r5, r1]\n    ldr r0, _021F24B8 ; =ov112_021FF4C8\n    lsr r3, r2, #0x10\n    ldrsb r0, [r0, r3]\n    cmp r0, #0x6f\n    bne _021F24B4\n    lsl r0, r2, #0x10\n    lsr r0, r0, #0x10\n    str r0, [r5, r1]\n    ldr r2, [r5, r1]\n    ldr r0, _021F24BC ; =0xFFFF01FF\n    and r0, r2\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x19\n    add r2, r2, #1\n    lsl r2, r2, #0x19\n    lsr r2, r2, #0x10\n    orr r0, r2\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x19\n    cmp r0, #2\n    blo _021F24B4\n    add r0, r5, #0\n    add r0, #0xac\n    mov r1, #3\n    bl ov112_021F1F3C\n    mov r1, #0x52\n    lsl r1, r1, #2\n    ldr r2, [r5, r1]\n    ldr r0, _021F24BC ; =0xFFFF01FF\n    and r0, r2\n    str r0, [r5, r1]\n    ldr r2, [r5, r1]\n    ldr r0, _021F24C0 ; =0xFFFFFE01\n    and r0, r2\n    lsl r2, r2, #0x17\n    lsr r2, r2, #0x18\n    add r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x17\n    orr r0, r2\n    str r0, [r5, r1]\n    pop {r3, r4, r5, pc}\n    lsr r0, r2, #0x10\n    lsl r1, r0, #3\n    add r1, #0x98\n    lsl r1, r1, #0x10\n    asr r4, r1, #0x10\n    lsl r1, r2, #0x10\n    add r0, r0, #1\n    lsr r1, r1, #0x10\n    lsl r0, r0, #0x10\n    orr r0, r1\n    str r0, [r5, r3]\n    ldr r0, [r5, r3]\n    lsr r0, r0, #0x10\n    cmp r0, #5\n    blo _021F2468\n    mov r1, #1\n    and r0, r1\n    cmp r0, #1\n    beq _021F2460\n    mov r1, #0\n    add r0, r5, #0\n    add r0, #0xac\n    bl ov112_021F1EFC\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    lsr r0, r0, #0x10\n    cmp r0, #7\n    blo _021F24A0\n    add r0, r5, #0\n    add r0, #0xac\n    mov r1, #0\n    bl ov112_021F1EFC\n    mov r1, #0x52\n    lsl r1, r1, #2\n    ldr r0, [r5, r1]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [r5, r1]\n    ldr r2, [r5, r1]\n    ldr r0, _021F24C0 ; =0xFFFFFE01\n    and r0, r2\n    lsl r2, r2, #0x17\n    lsr r2, r2, #0x18\n    add r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x17\n    orr r0, r2\n    str r0, [r5, r1]\n    pop {r3, r4, r5, pc}\n    add r5, #0xac\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x48\n    mov r3, #0\n    bl ov112_021F1F54\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    nop\n    _021F24B8: .word ov112_021FF4C8\n    _021F24BC: .word 0xFFFF01FF\n    _021F24C0: .word 0xFFFFFE01"
    );
    #endif
}

void ov112_021F24C4(void) {
    /* Original at 0x021F24C4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x53\n    lsl r2, r2, #2\n    ldr r3, [r0, r2]\n    mov r1, #1\n    bic r3, r1\n    mov r1, #1\n    orr r1, r3\n    str r1, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov112_021F24D8(void) {
    /* Original at 0x021F24D8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x53\n    lsl r2, r2, #2\n    ldr r3, [r0, r2]\n    mov r1, #1\n    bic r3, r1\n    str r3, [r0, r2]\n    ldr r1, [r0, r2]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [r0, r2]\n    ldr r3, [r0, r2]\n    mov r1, #0xfe\n    bic r3, r1\n    str r3, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov112_021F24F8(void) {
    /* Original at 0x021F24F8 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r3, [r4, r0]\n    lsl r1, r3, #0x1f\n    lsr r1, r1, #0x1f\n    beq _021F257A\n    lsl r2, r3, #0x18\n    lsr r1, r2, #0x19\n    beq _021F2518\n    cmp r1, #1\n    beq _021F254C\n    cmp r1, #2\n    beq _021F257A\n    b _021F2576\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    mov r1, #0x18\n    bl ManagedSprite_SetAnim\n    mov r2, #0x53\n    lsl r2, r2, #2\n    ldr r3, [r4, r2]\n    mov r1, #0xfe\n    add r0, r3, #0\n    bic r0, r1\n    lsl r1, r3, #0x18\n    lsr r1, r1, #0x19\n    add r1, r1, #1\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x18\n    orr r0, r1\n    str r0, [r4, r2]\n    pop {r4, pc}\n    lsr r1, r3, #8\n    cmp r1, #0x19\n    blo _021F256A\n    add r0, r4, #0\n    add r0, #0xac\n    mov r1, #0\n    bl ov112_021F1EFC\n    mov r1, #0x53\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [r4, r1]\n    pop {r4, pc}\n    add r1, r1, #1\n    lsr r2, r2, #0x18\n    lsl r1, r1, #8\n    orr r1, r2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021F257C(void) {
    /* Original at 0x021F257C */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r1, _021F25F8 ; =0x0000013D\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0xc0\n    ldr r4, [r1]\n    add r1, r4, #0\n    add r1, #0x84\n    ldrb r1, [r1]\n    sub r2, r1, #1\n    lsr r1, r2, #0x1f\n    add r1, r2, r1\n    asr r2, r1, #1\n    lsl r1, r2, #2\n    add r6, r2, r1\n    mov r1, #0\n    mov r2, #1\n    bl ov112_021F2204\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov112_021F2204\n    add r0, r4, #0\n    add r0, #0x78\n    ldrh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x7a\n    ldrh r0, [r0]\n    sub r0, r1, r0\n    bpl _021F25C2\n    neg r0, r0\n    add r4, #0x84\n    ldrb r1, [r4]\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1f\n    sub r2, r2, r3\n    mov r1, #0x1f\n    ror r2, r1\n    add r1, r3, r2\n    cmp r1, #1\n    bne _021F25E2\n    cmp r0, #0x64\n    blt _021F25DE\n    mov r2, #1\n    b _021F25EC\n    mov r2, #2\n    b _021F25EC\n    cmp r0, #0x64\n    blt _021F25EA\n    mov r2, #4\n    b _021F25EC\n    mov r2, #3\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r6, r2\n    bl ov112_021F1624\n    pop {r4, r5, r6, pc}\n    _021F25F8: .word 0x0000013D"
    );
    #endif
}

void ov112_021F25FC(void) {
    /* Original at 0x021F25FC */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021F267C ; =0x0000013D\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    mov r2, #1\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0xc0\n    ldr r4, [r1]\n    mov r1, #0\n    bl ov112_021F2204\n    add r0, r5, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r5, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    mov r1, #0xb\n    bl ManagedSprite_SetAnim\n    ldr r0, _021F2680 ; =0x0000013F\n    ldrb r1, [r5, r0]\n    cmp r1, #0\n    beq _021F2640\n    sub r0, r0, #2\n    ldrb r0, [r5, r0]\n    cmp r1, r0\n    bhi _021F2640\n    mov r2, #0x1b\n    b _021F2670\n    add r4, #0x78\n    ldrh r2, [r4]\n    mov r1, #0xfa\n    lsl r1, r1, #4\n    cmp r2, r1\n    blo _021F2650\n    mov r2, #0x1c\n    b _021F2670\n    ldr r0, _021F2684 ; =0x00000BB8\n    cmp r2, r0\n    blo _021F265A\n    mov r2, #0x1d\n    b _021F2670\n    lsr r0, r1, #1\n    cmp r2, r0\n    blo _021F2664\n    mov r2, #0x1e\n    b _021F2670\n    lsr r0, r1, #2\n    cmp r2, r0\n    blo _021F266E\n    mov r2, #0x1f\n    b _021F2670\n    mov r2, #0x20\n    add r0, r5, #0\n    mov r1, #0x1a\n    bl ov112_021F1624\n    pop {r3, r4, r5, pc}\n    nop\n    _021F267C: .word 0x0000013D\n    _021F2680: .word 0x0000013F\n    _021F2684: .word 0x00000BB8"
    );
    #endif
}

void ov112_021F2688(void) {
    /* Original at 0x021F2688 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _021F26E4 ; =0x0000013D\n    mov r1, #1\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r0, #0xc0\n    ldr r5, [r0]\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    mov r1, #0xd\n    bl ManagedSprite_SetAnim\n    ldrh r0, [r5, #0xa]\n    cmp r0, #0\n    beq _021F26C4\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    mov r5, #0x21\n    bl ov112_021F2204\n    b _021F26D8\n    add r0, r4, #0\n    ldr r1, [r4, #0xc]\n    add r0, #0x80\n    lsl r1, r1, #0x18\n    ldr r0, [r0]\n    lsr r1, r1, #0x18\n    mov r2, #3\n    mov r5, #0x22\n    bl ov112_021F22B0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov112_021F1624\n    pop {r3, r4, r5, pc}\n    _021F26E4: .word 0x0000013D"
    );
    #endif
}

void ov112_021F26E8(void) {
    /* Original at 0x021F26E8 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021F2760 ; =0x0000013D\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    mov r2, #1\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0xc0\n    ldr r4, [r1]\n    mov r1, #0\n    bl ov112_021F2204\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov112_021F2204\n    mov r0, #5\n    lsl r0, r0, #6\n    ldrb r1, [r5, r0]\n    cmp r1, #0\n    beq _021F2720\n    sub r0, r0, #3\n    ldrb r0, [r5, r0]\n    cmp r1, r0\n    bhi _021F2720\n    mov r2, #0x24\n    b _021F2750\n    add r4, #0x78\n    ldrh r2, [r4]\n    mov r1, #0xfa\n    lsl r1, r1, #4\n    cmp r2, r1\n    blo _021F2730\n    mov r2, #0x25\n    b _021F2750\n    ldr r0, _021F2764 ; =0x00000BB8\n    cmp r2, r0\n    blo _021F273A\n    mov r2, #0x26\n    b _021F2750\n    lsr r0, r1, #1\n    cmp r2, r0\n    blo _021F2744\n    mov r2, #0x27\n    b _021F2750\n    lsr r0, r1, #2\n    cmp r2, r0\n    blo _021F274E\n    mov r2, #0x28\n    b _021F2750\n    mov r2, #0x29\n    add r0, r5, #0\n    mov r1, #0x23\n    bl ov112_021F1624\n    add r0, r5, #0\n    bl ov112_021F24C4\n    pop {r3, r4, r5, pc}\n    _021F2760: .word 0x0000013D\n    _021F2764: .word 0x00000BB8"
    );
    #endif
}

void ov112_021F2768(void) {
    /* Original at 0x021F2768 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021F27B4 ; =0x0000013D\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0xc0\n    ldr r1, [r1]\n    ldrh r1, [r1, #0xa]\n    cmp r1, #0\n    beq _021F278A\n    mov r1, #0\n    mov r2, #1\n    mov r4, #0x2a\n    bl ov112_021F2204\n    b _021F279C\n    ldr r1, [r5, #0xc]\n    add r0, #0x80\n    lsl r1, r1, #0x18\n    ldr r0, [r0]\n    lsr r1, r1, #0x18\n    mov r2, #3\n    mov r4, #0x2b\n    bl ov112_021F22B0\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov112_021F2204\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov112_021F1624\n    pop {r3, r4, r5, pc}\n    nop\n    _021F27B4: .word 0x0000013D"
    );
    #endif
}

void ov112_021F27B8(void) {
    ov112_021F2204(0, 1);
    ov112_021F2204(r4, 1, 0);
    ov112_021F2348(r4);
    ov112_021F1624(r4, 0x2c, 0);
}

void ov112_021F27E0(void) {
    /* Original at 0x021F27E0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov112_021F2204\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov112_021F2204\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #9\n    mov r3, #0x1a\n    bl ov112_021F22D0\n    add r0, r4, #0\n    mov r1, #0x2d\n    mov r2, #0\n    bl ov112_021F1624\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021F2810(void) {
    /* Original at 0x021F2810 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r1, _021F2870 ; =0x0000013D\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    mov r4, #0\n    mov r2, #1\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0xc0\n    ldr r6, [r1]\n    add r1, r4, #0\n    bl ov112_021F2204\n    add r0, r5, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r5, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    mov r1, #0xc\n    bl ManagedSprite_SetAnim\n    add r6, #0x77\n    ldrb r0, [r6]\n    cmp r0, #0xfa\n    blo _021F284E\n    mov r4, #0x2f\n    b _021F2864\n    cmp r0, #0xc8\n    blo _021F2856\n    mov r4, #0x30\n    b _021F2864\n    cmp r0, #0x96\n    blo _021F285E\n    mov r4, #0x31\n    b _021F2864\n    cmp r0, #0x5a\n    blo _021F2864\n    mov r4, #0x32\n    add r0, r5, #0\n    mov r1, #0x2e\n    add r2, r4, #0\n    bl ov112_021F1624\n    pop {r4, r5, r6, pc}\n    _021F2870: .word 0x0000013D"
    );
    #endif
}

void ov112_021F2874(void) {
    /* Original at 0x021F2874 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021F28D8 ; =0x0000013D\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r0, #0xc0\n    ldr r1, [r0]\n    add r0, r1, #0\n    add r1, #0x84\n    ldrb r1, [r1]\n    add r0, #0x77\n    ldrb r2, [r0]\n    sub r1, #0x12\n    lsl r0, r1, #1\n    add r4, r1, r0\n    add r4, #0x33\n    cmp r2, #0xc8\n    bge _021F28A8\n    cmp r2, #0x3c\n    blt _021F28A2\n    add r4, r4, #1\n    b _021F28A8\n    cmp r2, #0\n    blt _021F28A8\n    add r4, r4, #2\n    cmp r4, #0x35\n    bne _021F28AE\n    mov r4, #0x34\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov112_021F2204\n    add r0, r5, #0\n    ldr r1, [r5, #0xc]\n    add r0, #0x84\n    lsl r1, r1, #0x18\n    ldr r0, [r0]\n    lsr r1, r1, #0x18\n    mov r2, #1\n    bl ov112_021F22B0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov112_021F1624\n    pop {r3, r4, r5, pc}\n    nop\n    _021F28D8: .word 0x0000013D"
    );
    #endif
}

void ov112_021F28DC(void) {
    /* Original at 0x021F28DC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov112_021F2204\n    add r0, r4, #0\n    ldr r1, [r4, #0xc]\n    add r0, #0x84\n    lsl r1, r1, #0x18\n    ldr r0, [r0]\n    lsr r1, r1, #0x18\n    mov r2, #3\n    bl ov112_021F22B0\n    add r0, r4, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #8\n    bl ManagedSprite_SetAnim\n    add r0, r4, #0\n    mov r1, #0x42\n    mov r2, #0\n    bl ov112_021F1624\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021F2920(void) {
    ov112_021F2204(1, 1);
    ov112_021F1F3C(r4, 3);
    ov112_021F1624(r4, 0x43, 0);
}

void ov112_021F2944(void) {
    /* Original at 0x021F2944 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _021F2988 ; =0x0000013D\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0xc0\n    ldr r1, [r1]\n    ldrh r1, [r1, #0xa]\n    cmp r1, #0\n    bne _021F295E\n    mov r4, #0x46\n    b _021F2968\n    mov r1, #0\n    mov r2, #1\n    bl ov112_021F2204\n    mov r4, #0x45\n    add r0, r5, #0\n    ldr r1, [r5, #0xc]\n    add r0, #0x84\n    lsl r1, r1, #0x18\n    ldr r0, [r0]\n    lsr r1, r1, #0x18\n    mov r2, #3\n    bl ov112_021F22B0\n    add r0, r5, #0\n    mov r1, #0x44\n    add r2, r4, #0\n    bl ov112_021F1624\n    pop {r3, r4, r5, pc}\n    nop\n    _021F2988: .word 0x0000013D"
    );
    #endif
}

void ov112_021F298C(void) {
    /* Original at 0x021F298C */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r1, _021F2A64 ; =0x0000013D\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    mov r4, #0\n    mov r2, #1\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0xc0\n    ldr r6, [r1]\n    add r1, r4, #0\n    bl ov112_021F2204\n    add r0, r5, #0\n    ldr r1, [r5, #0xc]\n    add r0, #0x84\n    lsl r1, r1, #0x18\n    ldr r0, [r0]\n    lsr r1, r1, #0x18\n    mov r2, #3\n    bl ov112_021F22B0\n    ldr r0, [r6, #0x7c]\n    mov r1, #0x64\n    bl _u32_div_f\n    ldr r1, _021F2A68 ; =0x0000028F\n    cmp r0, r1\n    ble _021F29C8\n    add r0, r1, #0\n    add r4, r4, r0\n    ldr r0, _021F2A6C ; =0x00000142\n    ldrb r1, [r5, r0]\n    mov r0, #0xa\n    mul r0, r1\n    cmp r0, #0x28\n    ble _021F29D8\n    mov r0, #0x28\n    add r4, r4, r0\n    ldr r0, _021F2A70 ; =0x00000141\n    ldrb r1, [r5, r0]\n    mov r0, #0xa\n    mul r0, r1\n    cmp r0, #0x28\n    ble _021F29E8\n    mov r0, #0x28\n    add r4, r4, r0\n    ldr r0, _021F2A74 ; =0x00000143\n    ldrb r1, [r5, r0]\n    mov r0, #0xf\n    mul r0, r1\n    cmp r0, #0x96\n    ble _021F29F8\n    mov r0, #0x96\n    mov r2, #0x51\n    lsl r2, r2, #2\n    ldr r3, [r5, r2]\n    add r0, r4, r0\n    lsl r1, r3, #0x17\n    lsr r4, r1, #0x1f\n    lsl r3, r3, #0x16\n    mov r1, #0xfa\n    add r6, r4, #0\n    lsr r3, r3, #0x1f\n    mul r6, r1\n    add r4, r3, #0\n    add r0, r0, r6\n    mul r4, r1\n    add r0, r0, r4\n    add r2, #0xe2\n    cmp r0, r2\n    blo _021F2A20\n    mov r2, #0x48\n    b _021F2A4C\n    add r1, #0x32\n    cmp r0, r1\n    blo _021F2A2A\n    mov r2, #0x49\n    b _021F2A4C\n    cmp r0, #0xc8\n    blo _021F2A32\n    mov r2, #0x4a\n    b _021F2A4C\n    cmp r0, #0x96\n    blo _021F2A3A\n    mov r2, #0x4b\n    b _021F2A4C\n    cmp r0, #0x64\n    blo _021F2A42\n    mov r2, #0x4c\n    b _021F2A4C\n    cmp r0, #0x1e\n    blo _021F2A4A\n    mov r2, #0x4d\n    b _021F2A4C\n    mov r2, #0x4e\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    cmp r0, #0xc\n    bge _021F2A5A\n    mov r1, #0x47\n    b _021F2A5C\n    mov r1, #0x5a\n    add r0, r5, #0\n    bl ov112_021F1624\n    pop {r4, r5, r6, pc}\n    _021F2A64: .word 0x0000013D\n    _021F2A68: .word 0x0000028F\n    _021F2A6C: .word 0x00000142\n    _021F2A70: .word 0x00000141\n    _021F2A74: .word 0x00000143"
    );
    #endif
}

void ov112_021F2A78(void) {
    /* Original at 0x021F2A78 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r2, _021F2B28 ; =0x0000013D\n    add r5, r0, #0\n    add r4, r1, #0\n    ldrb r1, [r5, r2]\n    sub r2, #0x11\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0xc0\n    ldr r1, [r1]\n    add r1, #0x78\n    ldrh r6, [r1]\n    cmp r6, r2\n    blo _021F2AD2\n    mov r1, #0\n    mov r2, #1\n    bl ov112_021F2204\n    add r0, r5, #0\n    ldr r1, [r5, #0xc]\n    add r0, #0x84\n    lsl r1, r1, #0x18\n    ldr r0, [r0]\n    lsr r1, r1, #0x18\n    mov r2, #3\n    bl ov112_021F22B0\n    mov r1, #0xfa\n    lsl r1, r1, #4\n    cmp r6, r1\n    blo _021F2ABA\n    mov r1, #0x4f\n    b _021F2B1C\n    lsr r0, r1, #1\n    cmp r6, r0\n    blo _021F2AC4\n    mov r1, #0x50\n    b _021F2B1C\n    lsr r0, r1, #2\n    cmp r6, r0\n    blo _021F2ACE\n    mov r1, #0x51\n    b _021F2B1C\n    mov r1, #0x52\n    b _021F2B1C\n    mov r1, #0\n    mov r2, #1\n    bl ov112_021F2204\n    add r0, r5, #0\n    add r0, #0x98\n    mov r1, #0x80\n    mov r2, #0x48\n    mov r3, #0\n    bl ov112_021F1F54\n    add r0, r5, #0\n    add r0, #0x98\n    mov r1, #0\n    bl ov112_021F1F3C\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #8\n    mov r3, #0xa\n    bl ov112_021F22D0\n    cmp r4, #0x14\n    blo _021F2B06\n    cmp r4, #0x18\n    bls _021F2B0A\n    cmp r4, #7\n    bhi _021F2B0E\n    mov r1, #0x53\n    b _021F2B1C\n    cmp r4, #0xc\n    blo _021F2B1A\n    cmp r4, #0x10\n    bhi _021F2B1A\n    mov r1, #0x54\n    b _021F2B1C\n    mov r1, #0x55\n    add r0, r5, #0\n    mov r2, #0\n    bl ov112_021F1624\n    pop {r4, r5, r6, pc}\n    nop\n    _021F2B28: .word 0x0000013D"
    );
    #endif
}

void ov112_021F2B2C(void) {
    /* Original at 0x021F2B2C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov112_021F2204\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    add r0, #0x84\n    ldr r0, [r0]\n    mov r1, #0x1b\n    bl ManagedSprite_SetAnim\n    add r0, r4, #0\n    add r0, #0xbc\n    ldr r0, [r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    mov r1, #7\n    bl ManagedSprite_SetAnim\n    add r0, r4, #0\n    mov r1, #0x19\n    mov r2, #0\n    bl ov112_021F1624\n    pop {r4, pc}"
    );
    #endif
}

void ov112_021F2B80(void) {
    /* Original at 0x021F2B80 */
    /* Requires manual decompilation - 138 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r1, _021F2CBC ; =0x0000013D\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    lsl r1, r1, #2\n    add r1, r5, r1\n    add r1, #0xc0\n    ldr r4, [r1]\n    bl ov112_021F15E4\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r6, [r5, r0]\n    add r0, r4, #0\n    bl ov112_021F0F60\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov112_021F1904\n    add r0, r4, #0\n    bl ov112_021F0F60\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov112_021F1D58\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    add r0, r4, #0\n    add r0, #0x76\n    ldrb r0, [r0]\n    cmp r1, r0\n    beq _021F2BDA\n    add r0, r4, #0\n    bl ov112_021F0F60\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov112_021F194C\n    mov r2, #0x51\n    lsl r2, r2, #2\n    ldr r0, [r5, r2]\n    mov r1, #0xff\n    bic r0, r1\n    add r1, r4, #0\n    add r1, #0x76\n    ldrb r1, [r1]\n    orr r0, r1\n    str r0, [r5, r2]\n    add r0, r4, #0\n    add r0, #0x84\n    ldrb r0, [r0]\n    cmp r0, #1\n    blo _021F2C1A\n    cmp r0, #0xa\n    bhi _021F2C1A\n    ldrh r1, [r4, #8]\n    ldr r0, _021F2CC0 ; =0x0000FFF9\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #1\n    bhi _021F2C12\n    add r0, r5, #0\n    bl ov112_021F257C\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    bl ov112_021F2B2C\n    pop {r4, r5, r6, pc}\n    cmp r0, #0xb\n    bne _021F2C26\n    add r0, r5, #0\n    bl ov112_021F25FC\n    pop {r4, r5, r6, pc}\n    cmp r0, #0xc\n    bne _021F2C32\n    add r0, r5, #0\n    bl ov112_021F2688\n    pop {r4, r5, r6, pc}\n    cmp r0, #0xd\n    bne _021F2C3E\n    add r0, r5, #0\n    bl ov112_021F26E8\n    pop {r4, r5, r6, pc}\n    cmp r0, #0xe\n    bne _021F2C4A\n    add r0, r5, #0\n    bl ov112_021F2768\n    pop {r4, r5, r6, pc}\n    cmp r0, #0xf\n    bne _021F2C56\n    add r0, r5, #0\n    bl ov112_021F27B8\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x10\n    bne _021F2C62\n    add r0, r5, #0\n    bl ov112_021F27E0\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x11\n    bne _021F2C6E\n    add r0, r5, #0\n    bl ov112_021F2810\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x12\n    blo _021F2C7E\n    cmp r0, #0x16\n    bhi _021F2C7E\n    add r0, r5, #0\n    bl ov112_021F2874\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x17\n    bne _021F2C8A\n    add r0, r5, #0\n    bl ov112_021F28DC\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x18\n    bne _021F2C96\n    add r0, r5, #0\n    bl ov112_021F2920\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x19\n    bne _021F2CA2\n    add r0, r5, #0\n    bl ov112_021F2944\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x1a\n    bne _021F2CAE\n    add r0, r5, #0\n    bl ov112_021F298C\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x1b\n    bne _021F2CBA\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov112_021F2A78\n    pop {r4, r5, r6, pc}\n    _021F2CBC: .word 0x0000013D\n    _021F2CC0: .word 0x0000FFF9"
    );
    #endif
}

void ov112_021F2CC4(void) {
    /* Original at 0x021F2CC4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x51\n    lsl r2, r2, #2\n    mov r1, #1\n    ldr r3, [r0, r2]\n    lsl r1, r1, #0xa\n    orr r1, r3\n    str r1, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov112_021F2CD4(void) {
    /* Original at 0x021F2CD4 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0x51\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    lsl r1, r0, #0x15\n    lsr r1, r1, #0x1f\n    bne _021F2CEC\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    lsl r0, r0, #0x11\n    lsr r0, r0, #0x1c\n    beq _021F2CFC\n    cmp r0, #1\n    beq _021F2D2E\n    cmp r0, #2\n    beq _021F2DA8\n    b _021F2DCA\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4, #4]\n    mov r1, #0\n    str r0, [sp, #8]\n    ldr r3, _021F2DD4 ; =0x00007FFF\n    mov r0, #3\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    mov r1, #0x51\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    ldr r0, _021F2DD8 ; =0xFFFF87FF\n    and r0, r2\n    lsl r2, r2, #0x11\n    lsr r2, r2, #0x1c\n    add r2, r2, #1\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x11\n    orr r0, r2\n    str r0, [r4, r1]\n    b _021F2DCE\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021F2DCE\n    ldr r0, _021F2DDC ; =0x0000013D\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _021F2D42\n    mov r1, #1\n    b _021F2D44\n    mov r1, #0\n    ldr r0, [r4, #0x70]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _021F2DDC ; =0x0000013D\n    ldrb r1, [r4, r0]\n    add r0, r0, #1\n    ldrb r0, [r4, r0]\n    sub r0, r0, #1\n    cmp r1, r0\n    bge _021F2D5C\n    mov r1, #1\n    b _021F2D5E\n    mov r1, #0\n    ldr r0, [r4, #0x74]\n    bl ManagedSprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl ov112_021F1CC8\n    add r0, r4, #0\n    bl ov112_021F2328\n    add r0, r4, #0\n    bl ov112_021F2B80\n    mov r0, #2\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r0, [r4, #4]\n    ldr r3, _021F2DD4 ; =0x00007FFF\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    mov r1, #0x51\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    ldr r0, _021F2DD8 ; =0xFFFF87FF\n    and r0, r2\n    lsl r2, r2, #0x11\n    lsr r2, r2, #0x1c\n    add r2, r2, #1\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x11\n    orr r0, r2\n    str r0, [r4, r1]\n    b _021F2DCE\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021F2DCE\n    mov r1, #0x51\n    lsl r1, r1, #2\n    ldr r2, [r4, r1]\n    ldr r0, _021F2DD8 ; =0xFFFF87FF\n    add sp, #0xc\n    and r0, r2\n    str r0, [r4, r1]\n    ldr r2, [r4, r1]\n    ldr r0, _021F2DE0 ; =0xFFFFFBFF\n    and r0, r2\n    str r0, [r4, r1]\n    mov r0, #1\n    pop {r3, r4, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _021F2DD4: .word 0x00007FFF\n    _021F2DD8: .word 0xFFFF87FF\n    _021F2DDC: .word 0x0000013D\n    _021F2DE0: .word 0xFFFFFBFF"
    );
    #endif
}

void ov112_021F2DE4(void) {
    /* Original at 0x021F2DE4 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl OverlayManager_GetArgs\n    add r5, r0, #0\n    bne _021F2DF4\n    bl GF_AssertFail\n    mov r0, #3\n    mov r1, #0x9b\n    lsl r2, r0, #0x11\n    bl Heap_Create\n    mov r1, #0x15\n    add r0, r4, #0\n    lsl r1, r1, #4\n    mov r2, #0x9b\n    bl OverlayManager_CreateAndGetData\n    mov r2, #0x15\n    mov r1, #0\n    lsl r2, r2, #4\n    add r4, r0, #0\n    bl MI_CpuFill8\n    mov r0, #0x9b\n    str r0, [r4, #4]\n    add r0, r4, #0\n    str r5, [r4]\n    bl ov112_021F0F90\n    bl ov112_021F0DC0\n    bl ov112_021F0DF4\n    ldr r0, _021F2E68 ; =gSystem + 0x60\n    mov r1, #1\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    ldr r1, [r4, #4]\n    mov r0, #0xfb\n    bl NARC_New\n    str r0, [r4, #0x10]\n    add r0, r4, #0\n    bl ov112_021F179C\n    add r0, r4, #0\n    bl ov112_021F1288\n    add r0, r4, #0\n    bl ov112_021F196C\n    mov r0, #0\n    bl sub_0200FBDC\n    mov r0, #1\n    bl sub_0200FBDC\n    ldr r0, _021F2E6C ; =ov112_021F2EB0\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    pop {r3, r4, r5, pc}\n    nop\n    _021F2E68: .word gSystem + 0x60\n    _021F2E6C: .word ov112_021F2EB0"
    );
    #endif
}

void ov112_021F2E70(void) {
    /* Original at 0x021F2E70 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl OverlayManager_GetData\n    add r5, r0, #0\n    bl ov112_021F1324\n    add r0, r5, #0\n    bl ov112_021F1814\n    add r0, r5, #0\n    bl ov112_021F1A08\n    ldr r0, [r5, #0x10]\n    bl NARC_Delete\n    ldr r0, _021F2EAC ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    bl ov112_021F0DC0\n    add r0, r4, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x9b\n    bl Heap_Destroy\n    pop {r3, r4, r5, pc}\n    _021F2EAC: .word gSystem + 0x60"
    );
    #endif
}

void ov112_021F2EB0(void) {
    /* Original at 0x021F2EB0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _021F2EBA\n    bl GF_AssertFail\n    ldr r0, [r4, #0x6c]\n    cmp r0, #0\n    bne _021F2EC4\n    bl GF_AssertFail\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _021F2ECE\n    bl GF_AssertFail\n    ldr r0, [r4, #0x6c]\n    bl SpriteSystem_DrawSprites\n    bl SpriteSystem_TransferOam\n    ldr r0, [r4, #0x14]\n    bl DoScheduledBgGpuUpdates\n    ldr r3, _021F2EEC ; =0x027E0000\n    ldr r1, _021F2EF0 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    _021F2EEC: .word 0x027E0000\n    _021F2EF0: .word 0x00003FF8"
    );
    #endif
}

void ov112_021F2EF4(void) {
    /* Original at 0x021F2EF4 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r6, r0, #0\n    bl OverlayManager_GetData\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #4\n    bhi _021F2F9C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021F2F14: ; jump table\n    add r0, r6, #0\n    bl ov112_021F2DE4\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F2FA0\n    bl ov112_021F1838\n    add r0, r5, #0\n    bl ov112_021F1A40\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F2FA0\n    bl ov112_021F1DC0\n    cmp r0, #0\n    beq _021F2FA0\n    add r0, r5, #0\n    bl ov112_021F1B94\n    add r0, r5, #0\n    bl ov112_021F178C\n    mov r1, #0x51\n    lsl r1, r1, #2\n    ldr r2, [r5, r1]\n    mov r0, #0xff\n    bic r2, r0\n    mov r0, #0xff\n    orr r0, r2\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov112_021F2B80\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F2FA0\n    mov r0, #6\n    mov r1, #1\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r0, [r5, #4]\n    ldr r3, _021F2FA8 ; =0x00007FFF\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F2FA0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021F2FA0\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021F2FA8: .word 0x00007FFF"
    );
    #endif
}

void ov112_021F2FAC(void) {
    /* Original at 0x021F2FAC */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _021F2FC8\n    cmp r1, #1\n    beq _021F2FDA\n    cmp r1, #2\n    beq _021F2FFA\n    b _021F300E\n    ldr r0, [r0, #0x78]\n    bl ManagedSprite_IsAnimated\n    cmp r0, #0\n    bne _021F3012\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F3012\n    mov r1, #6\n    str r1, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    ldr r0, [r0, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F3012\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021F3012\n    add r0, r5, #0\n    bl ov112_021F2E70\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov112_021F3018(void) {
    /* Original at 0x021F3018 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov112_021F2CD4\n    cmp r0, #0\n    bne _021F302C\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov112_021F0EB4\n    cmp r0, #0\n    beq _021F3050\n    ldr r0, _021F30B4 ; =0x0000013D\n    ldrb r1, [r4, r0]\n    cmp r1, #0\n    beq _021F3042\n    sub r1, r1, #1\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl ov112_021F2CC4\n    ldr r0, _021F30B8 ; =0x000005DC\n    bl PlaySE\n    b _021F3088\n    add r0, r4, #0\n    bl ov112_021F0EFC\n    cmp r0, #0\n    beq _021F307A\n    ldr r1, _021F30B4 ; =0x0000013D\n    ldrb r0, [r4, r1]\n    add r1, r1, #1\n    ldrb r1, [r4, r1]\n    add r0, r0, #1\n    bl _s32_div_f\n    ldr r0, _021F30B4 ; =0x0000013D\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl ov112_021F2CC4\n    ldr r0, _021F30B8 ; =0x000005DC\n    bl PlaySE\n    b _021F3088\n    add r0, r4, #0\n    bl ov112_021F0E60\n    cmp r0, #0\n    beq _021F3088\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov112_021F2338\n    add r0, r4, #0\n    mov r1, #5\n    bl ov112_021F1D28\n    add r0, r4, #0\n    mov r1, #6\n    bl ov112_021F1D28\n    add r0, r4, #0\n    mov r1, #7\n    bl ov112_021F1D28\n    add r0, r4, #0\n    mov r1, #8\n    bl ov112_021F1D28\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021F30B4: .word 0x0000013D\n    _021F30B8: .word 0x000005DC"
    );
    #endif
}

void ov112_021F30BC(void) {
    /* Original at 0x021F30BC */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #0\n    mov r2, #0x88\n    bl MI_CpuFill8\n    add r1, r5, #0\n    ldr r0, [r4]\n    add r1, #0x20\n    mov r2, #0x16\n    bl MI_CpuCopy8\n    ldrh r0, [r4, #8]\n    mov r1, #0x1f\n    strh r0, [r5, #0xa]\n    add r0, r5, #0\n    add r0, #0x85\n    ldrb r0, [r0]\n    bic r0, r1\n    ldrb r1, [r4, #0xa]\n    lsl r1, r1, #0x1b\n    lsr r2, r1, #0x1b\n    mov r1, #0x1f\n    and r1, r2\n    orr r1, r0\n    add r0, r5, #0\n    add r0, #0x85\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x85\n    ldrb r0, [r0]\n    mov r1, #0x60\n    bic r0, r1\n    ldrb r1, [r4, #0xa]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1e\n    lsl r1, r1, #0x1e\n    lsr r1, r1, #0x19\n    orr r1, r0\n    add r0, r5, #0\n    add r0, #0x85\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x85\n    ldrb r0, [r0]\n    mov r1, #0x80\n    bic r0, r1\n    ldrb r1, [r4, #0xa]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x18\n    orr r1, r0\n    add r0, r5, #0\n    add r0, #0x85\n    strb r1, [r0]\n    ldr r0, [r4, #4]\n    mov r1, #0x1a\n    str r0, [r5, #0x7c]\n    add r0, r5, #0\n    add r0, #0x84\n    strb r1, [r0]\n    sub r1, #0x1b\n    str r1, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov112_021F3140(void) {
    /* Original at 0x021F3140 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r6, r1, #0\n    mov r1, #0x1f\n    mov r5, #0\n    mov ip, r1\n    mov r7, #0x60\n    mov r2, #0x80\n    add r1, r0, #0\n    add r1, #0x84\n    ldrb r1, [r1]\n    cmp r1, #0x1d\n    bne _021F31AE\n    ldrh r1, [r6]\n    strh r1, [r0, #0xc]\n    add r1, r0, #0\n    add r1, #0x86\n    ldrb r4, [r1]\n    mov r1, ip\n    bic r4, r1\n    ldrb r1, [r6, #2]\n    lsl r1, r1, #0x1b\n    lsr r3, r1, #0x1b\n    mov r1, #0x1f\n    and r1, r3\n    add r3, r4, #0\n    orr r3, r1\n    add r1, r0, #0\n    add r1, #0x86\n    strb r3, [r1]\n    ldrb r3, [r6, #2]\n    add r1, r0, #0\n    add r1, #0x86\n    ldrb r1, [r1]\n    lsl r3, r3, #0x19\n    lsr r3, r3, #0x1e\n    lsl r3, r3, #0x1e\n    bic r1, r7\n    lsr r3, r3, #0x19\n    orr r3, r1\n    add r1, r0, #0\n    add r1, #0x86\n    strb r3, [r1]\n    ldrb r3, [r6, #2]\n    add r1, r0, #0\n    add r1, #0x86\n    ldrb r1, [r1]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x1f\n    lsl r3, r3, #0x1f\n    bic r1, r2\n    lsr r3, r3, #0x18\n    orr r3, r1\n    add r1, r0, #0\n    add r1, #0x86\n    strb r3, [r1]\n    add r5, r5, #1\n    add r0, #0x88\n    cmp r5, #0x18\n    blt _021F314E\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov112_021F31BC(void) {
    /* Original at 0x021F31BC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    add r1, r0, #0\n    add r1, #0x84\n    ldrb r1, [r1]\n    cmp r1, #0x1d\n    bne _021F31CC\n    mov r0, #1\n    bx lr\n    add r2, r2, #1\n    add r0, #0x88\n    cmp r2, #0x18\n    blt _021F31BE\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov112_021F31D8(void) {
    /* Original at 0x021F31D8 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r4, _021F323C ; =0x000001ED\n    ldr r5, _021F3240 ; =0x0000FFF9\n    mov r2, #0\n    add r3, r4, #0\n    add r1, r0, #0\n    add r1, #0x84\n    ldrb r1, [r1]\n    cmp r1, #0\n    beq _021F322E\n    cmp r1, #0x1e\n    blo _021F31F6\n    mov r0, #1\n    pop {r3, r4, r5, r6}\n    bx lr\n    ldrh r1, [r0, #0xa]\n    cmp r1, #0\n    bne _021F3202\n    mov r0, #1\n    pop {r3, r4, r5, r6}\n    bx lr\n    ldrh r6, [r0, #8]\n    add r6, r6, r5\n    lsl r6, r6, #0x10\n    lsr r6, r6, #0x10\n    cmp r6, #1\n    bhi _021F321E\n    cmp r1, r4\n    bhi _021F3218\n    ldrh r1, [r0, #0xc]\n    cmp r1, r3\n    bls _021F321E\n    mov r0, #1\n    pop {r3, r4, r5, r6}\n    bx lr\n    add r1, r0, #0\n    add r1, #0x76\n    ldrb r1, [r1]\n    cmp r1, #8\n    blo _021F322E\n    mov r0, #1\n    pop {r3, r4, r5, r6}\n    bx lr\n    add r2, r2, #1\n    add r0, #0x88\n    cmp r2, #0x18\n    blt _021F31E2\n    mov r0, #0\n    pop {r3, r4, r5, r6}\n    bx lr\n    _021F323C: .word 0x000001ED\n    _021F3240: .word 0x0000FFF9"
    );
    #endif
}

void ov112_021F3244(void) {
    /* Original at 0x021F3244 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl Save_PlayerData_GetProfile\n    add r0, r5, #0\n    bl SaveArray_Party_Get\n    mov r2, #0x7d\n    add r6, r0, #0\n    mov r0, #0\n    add r1, r4, #0\n    lsl r2, r2, #2\n    bl MIi_CpuClearFast\n    add r0, r4, #0\n    bl TrainerHouseSet_SetZero\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov112_021F336C\n    add r0, r4, #0\n    add r0, #0x30\n    add r1, r6, #0\n    bl ov112_021F33D8\n    ldr r1, _021F3288 ; =0x000001F2\n    add r0, r4, #0\n    bl GF_CalcCRC16\n    ldr r1, _021F3288 ; =0x000001F2\n    strh r0, [r4, r1]\n    pop {r4, r5, r6, pc}\n    _021F3288: .word 0x000001F2"
    );
    #endif
}

void ov112_021F328C(void) {
    /* Original at 0x021F328C */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #0x10]\n    str r1, [sp, #0x14]\n    str r0, [sp]\n    ldr r5, [sp, #0x10]\n    bl Save_TrainerHouse_Get\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    bl TrainerHouseSet_CheckHasData\n    cmp r0, #0\n    bne _021F32B6\n    ldr r0, [sp, #8]\n    bl ov112_021F35A4\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    ldr r1, _021F3368 ; =0x000001F2\n    bl GF_CalcCRC16\n    ldr r2, _021F3368 ; =0x000001F2\n    ldr r1, [sp, #4]\n    ldrh r1, [r1, r2]\n    cmp r1, r0\n    bne _021F3364\n    ldr r0, [sp, #8]\n    bl ov112_021F35A4\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    add r1, sp, #0x18\n    bl ov112_021F3608\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #4]\n    add r2, sp, #0x14\n    bl ov112_021F35C8\n    add r4, r0, #0\n    ldr r0, [sp, #0xc]\n    cmp r0, #0xa\n    bge _021F32F0\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _021F32FE\n    ldr r0, [sp, #0xc]\n    mov r5, #1\n    sub r0, r0, #1\n    str r0, [sp, #0xc]\n    add r0, sp, #0x18\n    ldrb r0, [r0, r4]\n    str r0, [sp, #0x10]\n    cmp r5, #0\n    beq _021F3342\n    ldr r0, [sp, #0xc]\n    cmp r4, r0\n    bge _021F3342\n    cmp r4, r0\n    bge _021F3342\n    mov r0, #6\n    lsl r0, r0, #6\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r5, r0, r1\n    add r0, sp, #0x18\n    add r6, r0, r4\n    mov r0, #6\n    lsl r0, r0, #6\n    add r3, r5, r0\n    add r7, r5, #0\n    mov r2, #0x30\n    ldmia r3!, {r0, r1}\n    stmia r7!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F3326\n    ldrb r0, [r6, #1]\n    add r4, r4, #1\n    strb r0, [r6]\n    mov r0, #6\n    lsl r0, r0, #6\n    add r5, r5, r0\n    ldr r0, [sp, #0xc]\n    add r6, r6, #1\n    cmp r4, r0\n    blt _021F331C\n    ldr r1, [sp, #0xc]\n    mov r2, #6\n    add r3, r1, #0\n    lsl r2, r2, #6\n    ldr r1, [sp, #8]\n    mul r3, r2\n    ldr r0, [sp, #4]\n    add r1, r1, r3\n    bl MI_CpuCopy8\n    ldr r2, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    add r1, sp, #0x18\n    strb r2, [r1, r0]\n    ldr r0, [sp]\n    bl ov112_021F3630\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _021F3368: .word 0x000001F2"
    );
    #endif
}

void ov112_021F336C(void) {
    /* Original at 0x021F336C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    bl Save_PlayerData_GetProfile\n    add r4, r0, #0\n    bl PlayerProfile_GetTrainerID\n    str r0, [r5]\n    add r0, r4, #0\n    bl PlayerProfile_GetTrainerGender\n    strb r0, [r5, #7]\n    add r0, r4, #0\n    bl PlayerProfile_GetLanguage\n    strb r0, [r5, #5]\n    add r0, r4, #0\n    bl PlayerProfile_GetVersion\n    strb r0, [r5, #6]\n    add r0, r4, #0\n    bl PlayerProfile_GetAvatar\n    strb r0, [r5, #4]\n    add r0, r4, #0\n    bl PlayerProfile_GetNamePtr\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #8\n    mov r2, #7\n    bl CopyU16StringArrayN\n    mov r4, #0\n    add r5, #0x18\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_0202D660\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_0202D660\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MailMsg_Copy\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, #3\n    blt _021F33B6\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov112_021F33D8(void) {
    /* Original at 0x021F33D8 */
    /* Requires manual decompilation - 207 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r6, r0, #0\n    add r0, r1, #0\n    str r1, [sp]\n    bl Party_GetCount\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    bgt _021F33F6\n    b _021F3598\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    ldr r1, [sp, #0x1c]\n    bl Party_GetMonByIndex\n    mov r1, #3\n    mov r2, #0\n    add r5, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _021F341E\n    add r0, r5, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _021F3420\n    b _021F358A\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    ldrh r1, [r6]\n    ldr r2, _021F359C ; =0xFFFFF800\n    lsr r3, r0, #0x10\n    lsr r0, r2, #0x15\n    and r1, r2\n    and r0, r3\n    orr r0, r1\n    strh r0, [r6]\n    add r0, r5, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x1b\n    ldrh r2, [r6]\n    ldr r1, _021F35A0 ; =0xFFFF07FF\n    lsr r0, r0, #0x10\n    and r1, r2\n    orr r0, r1\n    strh r0, [r6]\n    ldrh r1, [r6]\n    lsl r0, r1, #0x15\n    lsr r2, r0, #0x15\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    cmp r2, r0\n    bne _021F3482\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x1b\n    cmp r0, #1\n    bne _021F3482\n    add r0, r5, #0\n    mov r1, #0\n    bl Mon_UpdateShayminForm\n    ldrh r1, [r6]\n    ldr r0, _021F35A0 ; =0xFFFF07FF\n    and r0, r1\n    strh r0, [r6]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r6, #2]\n    add r0, r5, #0\n    mov r1, #7\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0\n    str r0, [r6, #0xc]\n    add r0, r5, #0\n    add r2, r1, #0\n    bl GetMonData\n    str r0, [r6, #0x10]\n    add r0, r5, #0\n    mov r1, #0xc\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r6, #0x1f]\n    add r0, r5, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    add r1, r6, #0\n    add r1, #0x20\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #9\n    mov r2, #0\n    bl GetMonData\n    add r1, r6, #0\n    add r1, #0x21\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    add r1, r6, #0\n    add r1, #0x22\n    strb r0, [r1]\n    add r0, r5, #0\n    mov r1, #0x75\n    add r2, sp, #0x20\n    bl GetMonData\n    add r0, r6, #0\n    add r0, #0x24\n    add r1, sp, #0x20\n    mov r2, #0xa\n    bl CopyU16StringArrayN\n    mov r4, #0\n    str r4, [sp, #0x10]\n    str r6, [sp, #8]\n    add r7, r4, #0\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x36\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp, #8]\n    mov r2, #0\n    strh r0, [r1, #4]\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x3e\n    bl GetMonData\n    add r1, r0, #0\n    lsl r1, r7\n    ldr r0, [sp, #0x10]\n    add r4, r4, #1\n    orr r0, r1\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #8]\n    add r7, r7, #2\n    add r0, r0, #2\n    str r0, [sp, #8]\n    cmp r4, #4\n    blt _021F3500\n    ldr r0, [sp, #0x10]\n    mov r4, #0\n    strb r0, [r6, #0x1e]\n    str r4, [sp, #4]\n    add r7, r4, #0\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x46\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    lsl r1, r7\n    ldr r0, [sp, #4]\n    mov r2, #0\n    orr r0, r1\n    add r1, r4, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, #0xd\n    bl GetMonData\n    add r1, r6, r4\n    add r4, r4, #1\n    add r7, r7, #5\n    strb r0, [r1, #0x18]\n    cmp r4, #6\n    blt _021F353E\n    ldr r0, [sp, #4]\n    str r0, [r6, #0x14]\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    beq _021F357E\n    add r0, r5, #0\n    mov r1, #1\n    bl Mon_UpdateShayminForm\n    ldr r0, [sp, #0x14]\n    add r6, #0x38\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    cmp r0, #6\n    bge _021F3598\n    ldr r0, [sp, #0x1c]\n    add r1, r0, #1\n    ldr r0, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    cmp r1, r0\n    bge _021F3598\n    b _021F33F6\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F359C: .word 0xFFFFF800\n    _021F35A0: .word 0xFFFF07FF"
    );
    #endif
}

void ov112_021F35A4(void) {
    /* Original at 0x021F35A4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    mov r7, #6\n    add r5, r0, #0\n    add r6, r4, #0\n    lsl r7, r7, #6\n    add r0, r5, #0\n    bl TrainerHouseSet_CheckHasData\n    cmp r0, #0\n    beq _021F35C4\n    add r4, r4, #1\n    add r5, r5, r7\n    add r6, r6, #1\n    cmp r4, #0xa\n    blt _021F35B0\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F35C8(void) {
    /* Original at 0x021F35C8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r7, #6\n    add r5, r0, #0\n    add r6, r1, #0\n    str r2, [sp]\n    mov r4, #0\n    lsl r7, r7, #6\n    add r0, r5, #0\n    bl TrainerHouseSet_CheckHasData\n    cmp r0, #0\n    beq _021F35F6\n    add r0, r5, #0\n    add r1, r6, #0\n    bl TrainerHouseTrainer_Compare\n    cmp r0, #0\n    beq _021F35F6\n    ldr r0, [sp]\n    mov r1, #1\n    str r1, [r0]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r5, r5, r7\n    cmp r4, #0xa\n    blt _021F35D6\n    ldr r1, [sp]\n    mov r0, #0\n    str r0, [r1]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov112_021F3608(void) {
    /* Original at 0x021F3608 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    bl Save_VarsFlags_Get\n    ldr r5, _021F362C ; =ov112_021FF4D4\n    add r7, r0, #0\n    mov r4, #0\n    ldrh r1, [r5]\n    add r0, r7, #0\n    bl Save_VarsFlags_CheckFlagInArray\n    strb r0, [r6, r4]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #0xa\n    blt _021F3616\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F362C: .word ov112_021FF4D4"
    );
    #endif
}

void ov112_021F3630(void) {
    /* Original at 0x021F3630 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    bl Save_VarsFlags_Get\n    ldr r5, _021F3660 ; =ov112_021FF4D4\n    add r6, r0, #0\n    mov r4, #0\n    ldrb r0, [r7, r4]\n    cmp r0, #0\n    beq _021F364E\n    ldrh r1, [r5]\n    add r0, r6, #0\n    bl Save_VarsFlags_SetFlagInArray\n    b _021F3656\n    ldrh r1, [r5]\n    add r0, r6, #0\n    bl Save_VarsFlags_ClearFlagInArray\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #0xa\n    blt _021F363E\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F3660: .word ov112_021FF4D4"
    );
    #endif
}
