/* Decompiled from asm/overlay_01_021FC4C4.s */
#include "global.h"

void ov01_021FC4C4(void) {
    /* Original at 0x021FC4C4 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r2, #0\n    lsl r2, r3, #3\n    add r6, r5, r2\n    add r6, #0x18\n    str r2, [sp, #8]\n    add r2, r6, #0\n    str r0, [sp]\n    add r7, r1, #0\n    str r3, [sp, #4]\n    bl Heap_Create\n    cmp r0, #1\n    beq _021FC4E6\n    bl GF_AssertFail\n    sub r5, r6, r5\n    add r0, r7, #0\n    add r1, r5, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _021FC4F8\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r5, #0\n    bl memset\n    ldr r0, [sp]\n    str r0, [r4]\n    ldr r0, [sp, #4]\n    str r7, [r4, #4]\n    str r0, [r4, #8]\n    ldr r0, [sp, #8]\n    str r6, [r4, #0xc]\n    str r0, [r4, #0x10]\n    add r0, r4, #0\n    add r0, #0x18\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FC520(void) {
    /* Original at 0x021FC520 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r4, [r6, #8]\n    ldr r5, [r6, #0x14]\n    cmp r4, #0\n    beq _021FC542\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _021FC53A\n    ldr r1, [r5, #4]\n    add r0, r6, #0\n    bl ov01_021FC588\n    sub r4, r4, #1\n    add r5, #8\n    cmp r4, #0\n    bne _021FC52C\n    ldr r4, [r6, #4]\n    add r0, r6, #0\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Destroy\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FC554(void) {
    /* Original at 0x021FC554 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov01_021FC644\n    str r0, [sp]\n    cmp r0, #0\n    bne _021FC56C\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov01_021FC5FC\n    add r5, r0, #0\n    ldr r0, [sp]\n    add r1, r4, #0\n    add r2, r5, #0\n    bl ov01_021FC65C\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FC588(void) {
    /* Original at 0x021FC588 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl ov01_021FC624\n    add r4, r0, #0\n    bne _021FC596\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl ov01_021FC61C\n    add r0, r4, #0\n    bl ov01_021FC664\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FC5A4(void) {
    /* Original at 0x021FC5A4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl ov01_021FC624\n    add r4, r0, #0\n    bne _021FC5B2\n    bl GF_AssertFail\n    ldr r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FC5B8(void) {
    ov01_021FC624();
}

void ov01_021FC5CC(void) {
    /* Original at 0x021FC5CC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r7, r3, #0\n    add r6, r1, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl NARC_GetMemberSize\n    add r2, r0, #0\n    ldr r3, [sp, #0x18]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021FC554\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl NARC_ReadWholeMember\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FC5FC(void) {
    /* Original at 0x021FC5FC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    cmp r2, #0\n    ldr r0, [r0, #4]\n    bne _021FC60A\n    bl Heap_Alloc\n    b _021FC60E\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    cmp r4, #0\n    bne _021FC618\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FC61C(void) {
    Heap_Free();
}

void ov01_021FC624(void) {
    /* Original at 0x021FC624 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0, #8]\n    ldr r0, [r0, #0x14]\n    cmp r3, #0\n    beq _021FC63E\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _021FC638\n    ldr r2, [r0, #4]\n    cmp r2, r1\n    beq _021FC640\n    add r0, #8\n    sub r3, r3, #1\n    bne _021FC62C\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021FC644(void) {
    /* Original at 0x021FC644 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #8]\n    ldr r0, [r0, #0x14]\n    cmp r2, #0\n    beq _021FC658\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _021FC65A\n    add r0, #8\n    sub r2, r2, #1\n    bne _021FC64C\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021FC65C(void) {
    *(u32*)r0 = r2;
    ((u32*)r0)[4] = r1;
}

void ov01_021FC664(void) {
    *(u32*)r0 = 0;
    ((u32*)r0)[4] = 0;
}
