/* Decompiled from asm/overlay_01_021E8744.s */
#include "global.h"

void ov01_021E8744(void) {
    /* Original at 0x021E8744 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    add r6, r0, #0\n    add r0, r7, #0\n    add r5, r1, #0\n    add r4, r3, #0\n    bl ov01_02204554\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _021E8760\n    bl GF_AssertFail\n    mov r0, #0\n    add r1, r6, #0\n    ldr r2, [r1]\n    cmp r2, #0\n    beq _021E877A\n    ldr r2, [r1, #0xc]\n    cmp r4, r2\n    bne _021E877A\n    ldr r2, [r1, #4]\n    cmp r2, r5\n    bne _021E877A\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r0, #1\n    add r1, #0x10\n    cmp r0, #2\n    blt _021E8764\n    mov r2, #0\n    add r1, r6, #0\n    ldr r0, [r1]\n    cmp r0, #0\n    bne _021E879C\n    lsl r1, r2, #4\n    mov r0, #1\n    str r0, [r6, r1]\n    add r0, r6, r1\n    str r4, [r0, #0xc]\n    str r7, [r0, #8]\n    str r5, [r0, #4]\n    b _021E87A4\n    add r2, r2, #1\n    add r1, #0x10\n    cmp r2, #2\n    blt _021E8786\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E87A8(void) {
    /* Original at 0x021E87A8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0\n    add r6, r3, #0\n    mvn r0, r0\n    add r4, r1, #0\n    add r7, r2, #0\n    cmp r6, r0\n    bne _021E87BE\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #4\n    bl NARC_AllocAndReadWholeMember\n    add r5, r0, #0\n    bne _021E87D0\n    bl GF_AssertFail\n    ldr r0, [sp, #0x1c]\n    ldr r3, [sp, #0x18]\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov01_02204470\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E87E4(void) {
    /* Original at 0x021E87E4 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r1, [sp, #4]\n    mov r1, #0x4f\n    str r0, [sp]\n    mov r0, #4\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    add r7, r0, #0\n    mov r0, #0\n    add r1, r7, #0\n    add r6, r0, #0\n    str r6, [r1, #0x14]\n    str r6, [r1, #0x18]\n    str r6, [r1, #0x1c]\n    add r0, r0, #1\n    add r1, #0x10\n    cmp r0, #0x10\n    blt _021E87FE\n    mov r0, #0x11\n    lsl r0, r0, #4\n    add r2, r0, #0\n    add r3, r0, #0\n    add r5, r7, #0\n    mov r4, #0\n    add r1, r0, #4\n    add r2, #8\n    add r3, #0xc\n    str r4, [r5, r0]\n    str r4, [r5, r1]\n    str r4, [r5, r2]\n    str r4, [r5, r3]\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r6, #2\n    blt _021E881E\n    mov r0, #0x6a\n    mov r1, #4\n    bl NARC_New\n    mov r1, #0x13\n    lsl r1, r1, #4\n    str r0, [r7, r1]\n    ldr r0, [sp]\n    add r1, r1, #4\n    str r0, [r7, r1]\n    ldr r0, [sp, #4]\n    mov r1, #4\n    mov r2, #0x10\n    bl ov01_022041D8\n    mov r1, #0x4e\n    lsl r1, r1, #2\n    str r0, [r7, r1]\n    add r0, r7, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E8858(void) {
    /* Original at 0x021E8858 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    bne _021E8860\n    mov r0, #0\n    bx lr\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021E8864(void) {
    /* Original at 0x021E8864 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #8\n    bne _021E886C\n    mov r0, #0\n    bx lr\n    mov r1, #1\n    and r0, r1\n    cmp r0, #1\n    beq _021E8876\n    mov r1, #0\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov01_021E887C(void) {
    /* Original at 0x021E887C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #8\n    bne _021E8884\n    mov r0, #1\n    bx lr\n    asr r1, r0, #1\n    mov r0, #1\n    and r1, r0\n    cmp r1, #1\n    beq _021E8890\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021E8894(void) {
    /* Original at 0x021E8894 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r6, r0, #0\n    mov r0, #0x4d\n    ldr r7, [sp, #0x54]\n    lsl r0, r0, #2\n    add r4, r1, #0\n    str r2, [sp, #8]\n    ldr r0, [r7, r0]\n    add r1, r6, #0\n    add r2, sp, #0x10\n    add r5, r3, #0\n    bl NARC_ReadWholeMember\n    cmp r4, #4\n    blt _021E88B8\n    bl GF_AssertFail\n    lsl r1, r4, #2\n    add r0, sp, #0x18\n    ldr r0, [r0, r1]\n    mov r1, #0\n    mvn r1, r1\n    str r0, [sp, #0xc]\n    cmp r0, r1\n    bne _021E88CE\n    add sp, #0x28\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, sp, #0x10\n    ldrb r0, [r0, #1]\n    bl ov01_021E8864\n    ldr r1, [sp, #0x48]\n    cmp r1, r0\n    beq _021E88E2\n    add sp, #0x28\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r6, #0\n    add r4, r7, #0\n    cmp r5, #0\n    beq _021E88F4\n    ldr r0, [r4, #0x1c]\n    cmp r5, r0\n    bne _021E88F4\n    bl GF_AssertFail\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, #0x10\n    blt _021E88E6\n    mov r2, #0\n    add r1, r7, #0\n    ldr r0, [r1, #0x14]\n    cmp r0, #0\n    bne _021E895E\n    lsl r4, r2, #4\n    mov r1, #1\n    add r0, r7, r4\n    str r1, [r0, #0x14]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    bl ov01_022042FC\n    add r6, r0, #0\n    bne _021E8920\n    bl GF_AssertFail\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #0x44]\n    ldr r3, [sp, #0x40]\n    add r0, r6, #0\n    bl ov01_022044C8\n    ldr r0, [sp, #0xc]\n    add r1, r7, r4\n    str r0, [r1, #0x18]\n    str r5, [r1, #0x1c]\n    ldr r0, [sp, #0x4c]\n    mov r1, #0x13\n    str r0, [sp]\n    ldr r0, [sp, #0x50]\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r7, r1]\n    add r1, #8\n    ldr r1, [r7, r1]\n    ldr r3, [sp, #0xc]\n    add r2, r6, #0\n    bl ov01_021E87A8\n    add r7, #0x10\n    str r6, [r7, r4]\n    ldr r0, [r7, r4]\n    bl ov01_022044E0\n    add sp, #0x28\n    add r0, r7, r4\n    pop {r3, r4, r5, r6, r7, pc}\n    add r2, r2, #1\n    add r1, #0x10\n    cmp r2, #0x10\n    blt _021E8900\n    bl GF_AssertFail\n    mov r0, #0\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E8970(void) {
    /* Original at 0x021E8970 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    ldr r6, [sp, #0x30]\n    add r5, r0, #0\n    add r4, r1, #0\n    add r7, r2, #0\n    str r3, [sp]\n    cmp r6, #0\n    bne _021E898C\n    bl GF_AssertFail\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov01_021E8B9C\n    cmp r5, r0\n    blt _021E899C\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    add r1, r5, #0\n    add r2, sp, #4\n    bl NARC_ReadWholeMember\n    cmp r4, #4\n    blt _021E89B2\n    bl GF_AssertFail\n    lsl r1, r4, #2\n    add r0, sp, #0xc\n    ldr r5, [r0, r1]\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _021E89C6\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, sp, #4\n    ldrb r0, [r0, #1]\n    bl ov01_021E887C\n    cmp r7, r0\n    beq _021E89D8\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    mov r4, #0\n    add r1, r6, #0\n    ldr r0, [r1, #0x18]\n    cmp r5, r0\n    bne _021E8A1A\n    add r0, sp, #4\n    ldrb r0, [r0, #2]\n    cmp r0, #0\n    beq _021E8A02\n    lsl r2, r4, #4\n    mov r0, #0x11\n    add r2, r6, r2\n    lsl r0, r0, #4\n    lsl r3, r5, #0x18\n    ldr r1, [sp]\n    ldr r2, [r2, #0x10]\n    add r0, r6, r0\n    lsr r3, r3, #0x18\n    bl ov01_021E8744\n    b _021E8A04\n    mov r0, #1\n    cmp r0, #0\n    beq _021E8A14\n    lsl r1, r4, #4\n    add r1, r6, r1\n    ldr r0, [sp]\n    ldr r1, [r1, #0x10]\n    bl ov01_0220450C\n    add sp, #0x1c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r1, #0x10\n    cmp r4, #0x10\n    blt _021E89DC\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E8A28(void) {
    /* Original at 0x021E8A28 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    cmp r0, #0\n    beq _021E8A4C\n    mov r4, #0\n    add r2, r4, #0\n    add r1, r4, #0\n    ldr r3, [r0, #0x14]\n    cmp r3, #0\n    beq _021E8A44\n    cmp r3, #1\n    bne _021E8A40\n    str r2, [r0, #0x10]\n    str r1, [r0, #0x14]\n    str r1, [r0, #0x1c]\n    add r4, r4, #1\n    add r0, #0x10\n    cmp r4, #0x10\n    blt _021E8A34\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov01_021E8A50(void) {
    /* Original at 0x021E8A50 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    beq _021E8A88\n    cmp r5, #0\n    bne _021E8A60\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _021E8A88\n    cmp r0, #1\n    bne _021E8A82\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r5]\n    bl ov01_02204500\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r5]\n    bl ov01_0220431C\n    mov r0, #0\n    str r0, [r5, #4]\n    str r0, [r5, #0xc]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021E8A8C(void) {
    /* Original at 0x021E8A8C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    add r6, r1, #0\n    add r1, r2, #0\n    ldr r0, [r4, r0]\n    add r2, sp, #0\n    add r5, r3, #0\n    bl NARC_ReadWholeMember\n    cmp r5, #4\n    blt _021E8AAC\n    bl GF_AssertFail\n    lsl r1, r5, #2\n    add r0, sp, #8\n    ldr r5, [r0, r1]\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _021E8ABE\n    bl GF_AssertFail\n    mov r0, #0\n    lsl r1, r0, #4\n    add r1, r4, r1\n    ldr r2, [r1, #0x14]\n    cmp r2, #1\n    bne _021E8ADC\n    ldr r2, [r1, #0x18]\n    cmp r5, r2\n    bne _021E8ADC\n    ldr r1, [r1, #0x10]\n    add r0, r6, #0\n    bl ov01_02204518\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #0x10\n    blo _021E8AC0\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021E8AEC(void) {
    /* Original at 0x021E8AEC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _021E8B02\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl NARC_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021E8B04(void) {
    /* Original at 0x021E8B04 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r3, r0, #0\n    mov r0, #0x4d\n    add r5, r2, #0\n    lsl r0, r0, #2\n    add r4, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r3, #0\n    add r2, sp, #0\n    bl NARC_ReadWholeMember\n    cmp r4, #4\n    blt _021E8B24\n    bl GF_AssertFail\n    lsl r1, r4, #2\n    add r0, sp, #8\n    mov r4, #0\n    ldr r1, [r0, r1]\n    add r2, r4, #0\n    add r3, r5, #0\n    ldr r0, [r3, #0x18]\n    cmp r1, r0\n    bne _021E8B48\n    add r5, #0x10\n    lsl r0, r2, #4\n    add r4, r5, r0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _021E8B50\n    bl GF_AssertFail\n    b _021E8B50\n    add r2, r2, #1\n    add r3, #0x10\n    cmp r2, #0x10\n    blt _021E8B30\n    cmp r4, #0\n    bne _021E8B58\n    bl GF_AssertFail\n    add r0, r4, #0\n    add sp, #0x18\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021E8B60(void) {
    ov01_0220455C();
}

void ov01_021E8B6C(void) {
    ov01_022044E0();
}

void ov01_021E8B78(void) {
    ov01_02204570();
}

void ov01_021E8B84(void) {
    ov01_02204590();
}

void ov01_021E8B90(void) {
    ov01_02204560();
}

void ov01_021E8B9C(void) {
    /* Original at 0x021E8B9C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x4d\n    lsl r1, r1, #2\n    ldr r3, _021E8BA8 ; =NARC_GetFileCount\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _021E8BA8: .word NARC_GetFileCount"
    );
    #endif
}

void ov01_021E8BAC(void) {
    /* Original at 0x021E8BAC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x18\n    mov r2, #0x4d\n    lsl r2, r2, #2\n    ldr r0, [r0, r2]\n    add r2, sp, #0\n    bl NARC_ReadWholeMember\n    add r0, sp, #0\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021E8BCA\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #0\n    add r3, sp, #0\n    sub r1, r0, #1\n    lsl r2, r0, #2\n    add r2, r3, r2\n    ldr r2, [r2, #8]\n    cmp r2, r1\n    beq _021E8BE4\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #4\n    blo _021E8BD0\n    add sp, #0x18\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021E8BE8(void) {
    /* Original at 0x021E8BE8 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bne _021E8BF4\n    bl GF_AssertFail\n    mov r1, #0x10\n    mov r0, #0\n    mov r2, #0x38\n    cmp r1, #0x10\n    bne _021E8C0E\n    add r3, r0, #0\n    mul r3, r2\n    add r3, r5, r3\n    add r3, #0x34\n    ldrb r3, [r3]\n    cmp r3, #0\n    bne _021E8C0E\n    add r1, r0, #0\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #0x10\n    blo _021E8BFA\n    cmp r1, #0x10\n    beq _021E8C32\n    add r2, r1, #0\n    mov r0, #0x38\n    mul r2, r0\n    add r0, r5, r2\n    add r0, #0x34\n    strb r4, [r0]\n    add r0, r5, r2\n    mov r1, #0\n    add r0, #0x35\n    strb r1, [r0]\n    b _021E8C3A\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, r2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021E8C40(void) {
    /* Original at 0x021E8C40 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    mov r3, #0\n    add r1, #0x34\n    strb r3, [r1]\n    str r3, [r0, #0x30]\n    str r3, [r0, #0x2c]\n    add r2, r3, #0\n    lsl r1, r3, #2\n    add r1, r0, r1\n    str r2, [r1, #0x14]\n    add r1, r3, #1\n    lsl r1, r1, #0x18\n    lsr r3, r1, #0x18\n    cmp r3, #6\n    blo _021E8C4E\n    bx lr"
    );
    #endif
}

void ov01_021E8C60(void) {
    /* Original at 0x021E8C60 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r4, #0\n    add r3, r4, #0\n    add r5, r0, #0\n    add r2, r5, #0\n    add r2, #0x34\n    ldrb r2, [r2]\n    cmp r1, r2\n    bne _021E8C7A\n    mov r1, #0x38\n    mul r1, r3\n    add r4, r0, r1\n    b _021E8C82\n    add r3, r3, #1\n    add r5, #0x38\n    cmp r3, #0x10\n    blt _021E8C68\n    add r0, r4, #0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov01_021E8C88(void) {
    GF_AssertFail();
}

void ov01_021E8CA4(void) {
    GF_AssertFail();
}

void ov01_021E8CBC(void) {
    /* Original at 0x021E8CBC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    add r4, r1, #0\n    cmp r4, r0\n    blt _021E8CCE\n    bl GF_AssertFail\n    lsl r0, r4, #2\n    ldr r0, [r5, r0]\n    str r0, [sp, #4]\n    bl ov01_021E8858\n    str r0, [sp]\n    ldr r0, [r5, #0x2c]\n    bl ov01_021E8858\n    add r7, r0, #0\n    mov r4, #0\n    lsl r0, r4, #2\n    add r6, r5, r0\n    ldr r0, [r6, #0x14]\n    cmp r0, #0\n    beq _021E8CFC\n    add r1, r7, #0\n    bl ov01_02204518\n    ldr r0, [r6, #0x14]\n    ldr r1, [sp]\n    bl ov01_0220450C\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #6\n    blo _021E8CE4\n    ldr r0, [sp, #4]\n    str r0, [r5, #0x2c]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E8D10(void) {
    /* Original at 0x021E8D10 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x40]\n    str r1, [sp, #0x1c]\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0x4c]\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x4c]\n    add r0, r3, #0\n    mov r5, #0\n    str r3, [sp, #0x24]\n    ldr r6, [sp, #0x44]\n    ldr r7, [sp, #0x48]\n    cmp r0, #0\n    ble _021E8D68\n    str r6, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x1c]\n    ldr r2, [sp, #0x40]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x20]\n    add r1, r5, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    mov r3, #0\n    str r7, [sp, #0x14]\n    bl ov01_021E8894\n    add r4, r0, #0\n    bne _021E8D56\n    bl GF_AssertFail\n    ldr r0, [sp, #0x4c]\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov01_021E8CA4\n    ldr r0, [sp, #0x24]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _021E8D30\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E8D6C(void) {
    /* Original at 0x021E8D6C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    str r0, [sp]\n    ldr r0, [r6, #0x2c]\n    bl ov01_021E8858\n    add r7, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    beq _021E8D8A\n    add r1, r7, #0\n    bl ov01_02204518\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _021E8D7E\n    ldr r0, [r6, #0x10]\n    mov r5, #0\n    cmp r0, #0\n    ble _021E8DB0\n    add r4, r6, #0\n    add r7, r5, #0\n    ldr r0, [r4]\n    ldr r1, [sp]\n    bl ov01_021E8A50\n    stmia r4!, {r7}\n    ldr r0, [r6, #0x10]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _021E8D9E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E8DB4(void) {
    /* Original at 0x021E8DB4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xe\n    mov r0, #4\n    lsl r1, r1, #6\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r2, #0xe\n    mov r0, #0\n    add r1, r4, #0\n    lsl r2, r2, #6\n    bl MIi_CpuClearFast\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021E8DD4(void) {
    Heap_Free(0);
}

void ov01_021E8DE8(void) {
    /* Original at 0x021E8DE8 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r0, #0\n    add r0, r1, #0\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    add r6, r3, #0\n    bl ov01_021E8BE8\n    add r5, r0, #0\n    bne _021E8E06\n    bl GF_AssertFail\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #0x34]\n    add r2, r5, #0\n    bl ov01_021E8C88\n    add r0, sp, #0x38\n    ldrb r4, [r0]\n    cmp r4, #0\n    bne _021E8E1C\n    bl GF_AssertFail\n    cmp r4, #0\n    bne _021E8E22\n    mov r4, #1\n    ldr r0, [sp, #0x3c]\n    str r4, [sp]\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    ldr r1, [sp, #0x2c]\n    ldr r2, [sp, #0x30]\n    ldr r3, [sp, #0x34]\n    add r0, r6, #0\n    str r5, [sp, #0xc]\n    bl ov01_021E8D10\n    str r6, [r5, #0x30]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E8E40(void) {
    /* Original at 0x021E8E40 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r3, #0\n    cmp r4, #6\n    blo _021E8E52\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov01_021E8C60\n    add r5, r0, #0\n    add r5, #0x14\n    lsl r4, r4, #2\n    ldr r0, [r5, r4]\n    cmp r0, #0\n    beq _021E8E6A\n    bl GF_AssertFail\n    str r6, [r5, r4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E8E70(void) {
    /* Original at 0x021E8E70 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0\n    bne _021E8E80\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021E8C60\n    add r1, r6, #0\n    bl ov01_021E8CBC\n    mov r1, #0\n    bl ov01_021E8B60\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021E8E98(void) {
    /* Original at 0x021E8E98 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    cmp r5, #0\n    bne _021E8EAA\n    bl GF_AssertFail\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov01_021E8C60\n    add r1, r7, #0\n    bl ov01_021E8CBC\n    add r5, r0, #0\n    cmp r4, #0\n    beq _021E8EC6\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0\n    bl ov01_021E8B60\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E8ED0(void) {
    /* Original at 0x021E8ED0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bne _021E8EDE\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov01_021E8C60\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021E8D6C\n    add r0, r4, #0\n    bl ov01_021E8C40\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021E8EF8(void) {
    /* Original at 0x021E8EF8 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bne _021E8F04\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021E8C60\n    ldr r0, [r0, #0x2c]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021E8F10(void) {
    /* Original at 0x021E8F10 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl ov01_021E8EF8\n    add r4, r0, #0\n    bne _021E8F1E\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl ov01_02204560\n    cmp r0, #0\n    beq _021E8F2C\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021E8F30(void) {
    ov01_021E8C60();
}

void ov01_021E8F3C(void) {
    /* Original at 0x021E8F3C */
    /* Requires manual decompilation - 171 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r4, r0, #0\n    ldr r0, [sp, #0x50]\n    ldr r7, [sp, #0x54]\n    str r0, [sp, #0x50]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    add r0, r7, #0\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    str r3, [sp, #0x10]\n    bl ov01_021E8B9C\n    cmp r4, r0\n    bge _021E8F86\n    ldr r0, [sp, #0x50]\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021E8F86\n    mov r0, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x50]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    ldr r0, [r0, #8]\n    mvn r1, r1\n    str r0, [sp, #0x24]\n    cmp r0, r1\n    beq _021E8F86\n    ldr r0, [sp, #0x50]\n    ldrb r0, [r0, #1]\n    bl ov01_021E8864\n    cmp r0, #0\n    beq _021E8F88\n    b _021E90AC\n    ldr r0, [sp, #0x50]\n    ldrb r0, [r0, #1]\n    bl ov01_021E887C\n    cmp r0, #0\n    bne _021E8F9A\n    mov r0, #1\n    str r0, [sp, #0x14]\n    b _021E8F9E\n    mov r0, #0\n    str r0, [sp, #0x14]\n    mov r4, #0\n    add r1, r7, #0\n    ldr r0, [r1, #0x14]\n    cmp r0, #0\n    bne _021E9062\n    lsl r0, r4, #4\n    add r5, r7, r0\n    mov r0, #1\n    str r0, [r5, #0x14]\n    mov r0, #0x4e\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    bl ov01_022042FC\n    add r6, r0, #0\n    bne _021E8FC2\n    bl GF_AssertFail\n    ldr r0, [sp, #0x50]\n    ldrb r0, [r0, #2]\n    cmp r0, #0\n    beq _021E8FD8\n    mov r1, #1\n    add r0, r6, #0\n    add r2, r1, #0\n    mov r3, #0\n    bl ov01_022044C8\n    b _021E8FE6\n    mov r1, #0\n    mov r2, #0\n    add r0, r6, #0\n    mvn r1, r1\n    add r3, r2, #0\n    bl ov01_022044C8\n    ldr r0, [sp, #0x24]\n    mov r1, #0x13\n    str r0, [r5, #0x18]\n    mov r0, #0\n    str r0, [r5, #0x1c]\n    ldr r0, [sp, #8]\n    lsl r1, r1, #4\n    str r0, [sp]\n    ldr r0, [sp, #0x10]\n    ldr r3, [sp, #0x24]\n    str r0, [sp, #4]\n    ldr r0, [r7, r1]\n    add r1, #8\n    ldr r1, [r7, r1]\n    add r2, r6, #0\n    bl ov01_021E87A8\n    add r0, r6, #0\n    str r6, [r5, #0x10]\n    bl ov01_022044E0\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _021E9044\n    ldr r0, [sp, #0x50]\n    ldrb r0, [r0, #2]\n    cmp r0, #0\n    beq _021E9034\n    ldr r3, [sp, #0x24]\n    mov r0, #0x11\n    lsl r0, r0, #4\n    lsl r3, r3, #0x18\n    ldr r1, [sp, #0xc]\n    ldr r2, [r5, #0x10]\n    add r0, r7, r0\n    lsr r3, r3, #0x18\n    bl ov01_021E8744\n    b _021E9036\n    mov r0, #1\n    cmp r0, #0\n    beq _021E906A\n    ldr r0, [sp, #0xc]\n    ldr r1, [r5, #0x10]\n    bl ov01_0220450C\n    b _021E906A\n    ldr r0, [sp, #0x50]\n    ldrb r0, [r0, #1]\n    cmp r0, #8\n    bne _021E906A\n    ldr r0, [sp, #0x1c]\n    add r1, r0, #0\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x1c]\n    ldr r2, [r5, #0x10]\n    lsl r1, r0, #2\n    add r0, sp, #0x28\n    str r2, [r0, r1]\n    b _021E906A\n    add r4, r4, #1\n    add r1, #0x10\n    cmp r4, #0x10\n    blt _021E8FA2\n    cmp r4, #0x10\n    bne _021E9072\n    bl GF_AssertFail\n    ldr r0, [sp, #0x18]\n    add r0, r0, #4\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    add r0, r0, #1\n    str r0, [sp, #0x20]\n    cmp r0, #4\n    bge _021E9084\n    b _021E8F6C\n    ldr r0, [sp, #0x50]\n    ldrb r0, [r0, #1]\n    cmp r0, #8\n    bne _021E90AC\n    ldr r0, [sp, #0x58]\n    bl ov01_02204834\n    add r1, r0, #0\n    lsl r2, r1, #2\n    add r1, sp, #0x28\n    ldr r0, [sp, #0xc]\n    ldr r1, [r1, r2]\n    bl ov01_0220450C\n    ldr r0, [sp, #0x58]\n    ldr r1, [sp, #0xc]\n    add r2, sp, #0x28\n    mov r3, #4\n    bl ov01_0220476C\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E90B0(void) {
    ov01_021E8C60();
}
