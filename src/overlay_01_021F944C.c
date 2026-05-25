/* Decompiled from asm/overlay_01_021F944C.s */
#include "global.h"

void ov01_021F944C(void) {
    /* Original at 0x021F944C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    mov r2, #0x41\n    add r5, r0, #0\n    lsl r2, r2, #2\n    str r1, [r5, r2]\n    add r1, r4, #0\n    bl ov01_021FA2EC\n    ldr r2, [sp, #0x24]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FA854\n    mov r2, #4\n    mov r1, #8\n    ldr r0, [sp, #0x18]\n    str r2, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x1c]\n    add r3, r1, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl ov01_021F9808\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9698\n    ldr r1, [sp, #0x20]\n    ldr r2, _021F9498 ; =ov01_02207260\n    ldr r3, _021F949C ; =ov01_02206CF0\n    add r0, r5, #0\n    bl ov01_021F9A8C\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _021F9498: .word ov01_02207260\n    _021F949C: .word ov01_02206CF0"
    );
    #endif
}

void ov01_021F94A0(void) {
    /* Original at 0x021F94A0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov01_021FA8F8\n    add r0, r4, #0\n    bl ov01_021F96E4\n    add r0, r4, #0\n    bl ov01_021FA1D0\n    bl ov01_021FA314\n    add r0, r4, #0\n    bl ov01_021F9890\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F94C0(void) {
    /* Original at 0x021F94C0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    mov r1, #0\n    add r6, r2, #0\n    add r7, r0, #0\n    str r1, [r5]\n    bl ov01_021FA3DC\n    add r1, r6, #0\n    str r0, [sp]\n    bl ov01_021F9DA4\n    add r4, r0, #0\n    bne _021F94EA\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov01_021F9654\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, r4, #3\n    cmp r0, #1\n    bhi _021F9500\n    ldr r0, [sp]\n    add r1, r7, #0\n    add r2, r5, #0\n    add r3, r6, #0\n    bl ov01_021FA75C\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov01_021F9528\n    str r0, [r5]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9510(void) {
    /* Original at 0x021F9510 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_GetSpriteID\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F94C0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9528(void) {
    /* Original at 0x021F9528 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r5, r1, #0\n    bl ov01_021FA3DC\n    add r4, r0, #0\n    bl ov01_021FA1D0\n    add r7, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021F9F84\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021F9704\n    add r4, r0, #0\n    bne _021F9554\n    bl GF_AssertFail\n    add r0, r6, #0\n    add r1, sp, #0\n    bl ov01_021F93AC\n    add r0, r7, #0\n    add r1, r4, #0\n    add r2, sp, #0\n    bl ov01_021FA31C\n    add r4, r0, #0\n    bne _021F956E\n    bl GF_AssertFail\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9574(void) {
    /* Original at 0x021F9574 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5]\n    add r4, r2, #0\n    bl sub_02023DA4\n    mov r0, #0\n    str r0, [r5]\n    add r0, r6, #0\n    bl MapObject_GetManager\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov01_021F97BC\n    cmp r0, #0\n    bne _021F95A4\n    add r0, r6, #0\n    bl ov01_021FA3DC\n    add r1, r4, #0\n    bl ov01_021F9778\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F95A8(void) {
    /* Original at 0x021F95A8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    bl ov01_021F9688\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021F95C8\n    add r0, r5, #0\n    bl MapObject_GetSpriteID\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9574\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F95CC(void) {
    /* Original at 0x021F95CC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r4, r2, #0\n    bl ov01_021F9688\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _021F95E6\n    bl sub_02023DA4\n    mov r0, #0\n    str r0, [r5]\n    ldr r0, _021F960C ; =0x0000FFFF\n    cmp r4, r0\n    beq _021F960A\n    add r0, r6, #0\n    bl MapObject_GetManager\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov01_021F97BC\n    cmp r0, #0\n    bne _021F960A\n    add r0, r6, #0\n    bl ov01_021FA3DC\n    add r1, r4, #0\n    bl ov01_021F9778\n    pop {r4, r5, r6, pc}\n    _021F960C: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F9610(void) {
    /* Original at 0x021F9610 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02023EB8\n    str r0, [r4]\n    add r0, r5, #0\n    bl sub_02023EF4\n    strh r0, [r4, #6]\n    add r0, r5, #0\n    bl sub_02023F30\n    str r0, [r4, #8]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9630(void) {
    /* Original at 0x021F9630 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    add r5, r0, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl sub_02023EA4\n    ldrh r1, [r4, #6]\n    add r0, r5, #0\n    bl sub_02023EE0\n    ldr r1, [r4, #8]\n    add r0, r5, #0\n    bl sub_02023F1C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9654(void) {
    /* Original at 0x021F9654 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA3DC\n    add r1, r6, #0\n    add r7, r0, #0\n    bl ov01_021F9974\n    cmp r0, #0\n    bne _021F9678\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021F9528\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ov01_021FA75C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9688(void) {
    /* Original at 0x021F9688 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov01_021FA3DC\n    add r1, r4, #0\n    bl ov01_021FA798\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F9698(void) {
    /* Original at 0x021F9698 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    mov r1, #0x28\n    add r7, r0, #0\n    mov r0, #4\n    mul r1, r5\n    bl Heap_Alloc\n    add r6, r0, #0\n    add r0, r7, #0\n    add r0, #0xe4\n    str r6, [r0]\n    cmp r6, #0\n    bne _021F96B8\n    bl GF_AssertFail\n    mov r0, #4\n    lsl r1, r5, #3\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r7, #0xf4\n    str r4, [r7]\n    cmp r4, #0\n    bne _021F96CE\n    bl GF_AssertFail\n    ldr r0, _021F96E0 ; =0x0000FFFF\n    str r0, [r4]\n    str r6, [r4, #4]\n    add r4, #8\n    add r6, #0x28\n    sub r5, r5, #1\n    bne _021F96D0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F96E0: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F96E4(void) {
    /* Original at 0x021F96E4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov01_021F9798\n    add r1, r4, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    mov r0, #4\n    bl Heap_FreeExplicit\n    add r4, #0xf4\n    ldr r1, [r4]\n    mov r0, #4\n    bl Heap_FreeExplicit\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F9704(void) {
    /* Original at 0x021F9704 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r2, r0, #0\n    add r2, #0xf4\n    ldr r4, [r2]\n    ldr r2, [r0, #4]\n    add r6, r4, #0\n    add r5, r2, #0\n    ldr r3, [r6]\n    cmp r3, r1\n    bne _021F971C\n    ldr r0, [r6, #4]\n    pop {r4, r5, r6, pc}\n    add r6, #8\n    sub r5, r5, #1\n    bne _021F9712\n    ldr r3, _021F9740 ; =0x0000FFFF\n    ldr r5, [r4]\n    cmp r5, r3\n    bne _021F9736\n    str r1, [r4]\n    ldr r2, [r4, #4]\n    bl ov01_021FA370\n    ldr r0, [r4, #4]\n    pop {r4, r5, r6, pc}\n    add r4, #8\n    sub r2, r2, #1\n    bne _021F9724\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _021F9740: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F9744(void) {
    /* Original at 0x021F9744 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl sub_0205F1A0\n    add r1, r0, #0\n    add r1, #0xf4\n    ldr r2, [r1]\n    ldr r1, [r0, #4]\n    ldr r0, [r2]\n    cmp r0, r5\n    bne _021F976C\n    ldr r3, [r2, #4]\n    mov r2, #5\n    ldmia r3!, {r0, r1}\n    stmia r4!, {r0, r1}\n    sub r2, r2, #1\n    bne _021F9760\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r2, #8\n    sub r1, r1, #1\n    bne _021F9756\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9778(void) {
    /* Original at 0x021F9778 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0xf4\n    ldr r3, [r2]\n    ldr r2, [r0, #4]\n    ldr r0, [r3]\n    cmp r0, r1\n    bne _021F978C\n    ldr r0, _021F9794 ; =0x0000FFFF\n    str r0, [r3]\n    bx lr\n    add r3, #8\n    sub r2, r2, #1\n    bne _021F9780\n    bx lr\n    _021F9794: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F9798(void) {
    /* Original at 0x021F9798 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    add r1, r0, #0\n    add r1, #0xf4\n    ldr r4, [r1]\n    ldr r1, _021F97B8 ; =0x0000FFFF\n    ldr r3, [r0, #4]\n    add r0, r1, #0\n    ldr r2, [r4]\n    cmp r2, r0\n    beq _021F97AE\n    str r1, [r4]\n    add r4, #8\n    sub r3, r3, #1\n    bne _021F97A6\n    pop {r3, r4}\n    bx lr\n    _021F97B8: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F97BC(void) {
    /* Original at 0x021F97BC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    bl MapObjectManager_GetObjectCount\n    add r4, r0, #0\n    add r0, r7, #0\n    bl MapObjectManager_GetObjects2\n    ldr r7, _021F9804 ; =0x0000FFFF\n    str r0, [sp]\n    ldr r0, [sp]\n    cmp r0, r5\n    beq _021F97F4\n    bl MapObject_CheckActive\n    cmp r0, #1\n    bne _021F97F4\n    ldr r0, [sp]\n    bl MapObject_GetSpriteID\n    cmp r0, r7\n    beq _021F97F4\n    cmp r0, r6\n    bne _021F97F4\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, sp, #0\n    bl MapObjectArray_NextObject\n    sub r4, r4, #1\n    bne _021F97D4\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F9804: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F9808(void) {
    /* Original at 0x021F9808 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    mov r0, #4\n    mov r1, #0x3f\n    lsl r2, r4, #0xc\n    add r3, r4, #0\n    bl ov01_021FC4C4\n    add r1, r5, #0\n    add r1, #0xf8\n    str r0, [r1]\n    add r0, r5, #0\n    bl ov01_021F9B00\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021FA208\n    add r0, r5, #0\n    sub r1, r4, r6\n    bl ov01_021FA210\n    mov r0, #4\n    mov r1, #0x40\n    lsl r2, r7, #7\n    add r3, r7, #0\n    bl ov01_021FC4C4\n    add r1, r5, #0\n    add r1, #0xfc\n    str r0, [r1]\n    add r0, r5, #0\n    bl ov01_021F9C24\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    bl ov01_021FA218\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    sub r1, r7, r1\n    bl ov01_021FA220\n    ldr r0, [sp, #0x1c]\n    mov r1, #4\n    bl GF3dGfxRawResMan_Create\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA1EC\n    add r0, r5, #0\n    bl ov01_021F9D48\n    ldr r1, [sp, #0x20]\n    add r0, r5, #0\n    bl ov01_021FA228\n    ldr r2, [sp, #0x1c]\n    ldr r1, [sp, #0x20]\n    add r0, r5, #0\n    sub r1, r2, r1\n    bl ov01_021FA230\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9890(void) {
    /* Original at 0x021F9890 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bl ov01_021FC520\n    add r0, r4, #0\n    add r0, #0xfc\n    ldr r0, [r0]\n    bl ov01_021FC520\n    add r0, r4, #0\n    bl ov01_021FA1F4\n    bl GF3dGfxRawResMan_Destroy\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F98B4(void) {
    /* Original at  */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r3, [r2]\n    cmp r3, r0\n    bne _021F98BE\n    add r0, r2, #0\n    bx lr\n    add r2, r2, #4\n    ldrh r3, [r2]\n    cmp r3, r1\n    bne _021F98B4\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021F98CC(void) {
    /* Original at 0x021F98CC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r4, r2, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    add r7, r3, #0\n    bl ov01_021FC5B8\n    cmp r0, #1\n    bne _021F98E6\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov01_021F98B4\n    add r7, r0, #0\n    bne _021F98F8\n    bl GF_AssertFail\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl MapObjectManager_GetMapModelNarc\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldrh r3, [r7, #2]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov01_021FC5CC\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9918(void) {
    /* Original at 0x021F9918 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0xf0\n    add r4, r2, #0\n    add r6, r1, #0\n    ldr r0, [r0]\n    add r1, r4, #0\n    bl GF3dGfxRawResMan_DoesNotHaveObjWithId\n    cmp r0, #0\n    bne _021F9932\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FA524\n    cmp r0, #0\n    beq _021F9942\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl GetMoveModelNoBySpriteId\n    add r2, r0, #0\n    bpl _021F9950\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r6, #0\n    bl ov01_021FA470\n    cmp r0, #1\n    bne _021F9962\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F9968(void) {
    ov01_021F9918();
}

void ov01_021F9974(void) {
    ov01_021F9918();
}

void ov01_021F9980(void) {
    /* Original at 0x021F9980 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r1, [r4]\n    ldr r0, _021F99A0 ; =0x0000FFFF\n    cmp r1, r0\n    beq _021F999E\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021F9968\n    add r4, r4, #4\n    ldr r1, [r4]\n    cmp r1, r6\n    bne _021F9990\n    pop {r4, r5, r6, pc}\n    _021F99A0: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F99A4(void) {
    /* Original at 0x021F99A4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA1DC\n    ldr r0, _021F99CC ; =ov01_02207294\n    add r1, r5, #0\n    str r0, [sp]\n    add r1, #0xf8\n    ldr r1, [r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #0xff\n    bl ov01_021F98CC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9B10\n    pop {r3, r4, r5, pc}\n    _021F99CC: .word ov01_02207294"
    );
    #endif
}

void ov01_021F99D0(void) {
    /* Original at 0x021F99D0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA1DC\n    ldr r0, _021F99F8 ; =ov01_02207294\n    add r1, r5, #0\n    str r0, [sp]\n    add r1, #0xf8\n    ldr r1, [r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #0xff\n    bl ov01_021F98CC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9B54\n    pop {r3, r4, r5, pc}\n    _021F99F8: .word ov01_02207294"
    );
    #endif
}

void ov01_021F99FC(void) {
    ov01_021F99A4();
}

void ov01_021F9A18(void) {
    /* Original at 0x021F9A18 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA1E4\n    ldr r0, _021F9A40 ; =ov01_022072CC\n    add r1, r5, #0\n    str r0, [sp]\n    add r1, #0xfc\n    ldr r1, [r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #0xff\n    bl ov01_021F98CC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9C34\n    pop {r3, r4, r5, pc}\n    _021F9A40: .word ov01_022072CC"
    );
    #endif
}

void ov01_021F9A44(void) {
    /* Original at 0x021F9A44 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA1E4\n    ldr r0, _021F9A6C ; =ov01_022072CC\n    add r1, r5, #0\n    str r0, [sp]\n    add r1, #0xfc\n    ldr r1, [r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #0xff\n    bl ov01_021F98CC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9C78\n    pop {r3, r4, r5, pc}\n    _021F9A6C: .word ov01_022072CC"
    );
    #endif
}

void ov01_021F9A70(void) {
    ov01_021F9A18();
}

void ov01_021F9A8C(void) {
    /* Original at 0x021F9A8C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl ov01_021F9980\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F99FC\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021F9A70\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F9AAC(void) {
    /* Original at  */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "stmia r0!, {r1}\n    sub r2, r2, #1\n    bne _021F9AAC\n    bx lr"
    );
    #endif
}

void ov01_021F9AB4(void) {
    /* Original at 0x021F9AB4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0]\n    cmp r4, r2\n    bne _021F9AC4\n    str r1, [r0]\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    add r0, r0, #4\n    sub r3, r3, #1\n    bne _021F9AB6\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov01_021F9AD0(void) {
    /* Original at  */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0]\n    cmp r3, r1\n    bne _021F9ADA\n    mov r0, #1\n    bx lr\n    add r0, r0, #4\n    sub r2, r2, #1\n    bne _021F9AD0\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021F9AE4(void) {
    /* Original at 0x021F9AE4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0]\n    cmp r4, r1\n    bne _021F9AF4\n    str r2, [r0]\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    add r0, r0, #4\n    sub r3, r3, #1\n    bne _021F9AE6\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov01_021F9B00(void) {
    /* Original at 0x021F9B00 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov01_021FA200\n    mov r1, #0xff\n    mov r2, #8\n    bl ov01_021F9AAC\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F9B10(void) {
    /* Original at 0x021F9B10 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA20C\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA200\n    add r1, r4, #0\n    mov r2, #0xff\n    add r3, r6, #0\n    bl ov01_021F9AB4\n    cmp r0, #0\n    bne _021F9B34\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F9B38(void) {
    /* Original at 0x021F9B38 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA20C\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA200\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021F9AD0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F9B54(void) {
    /* Original at 0x021F9B54 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    bl ov01_021FA200\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA20C\n    lsl r4, r0, #2\n    add r0, r5, #0\n    bl ov01_021FA214\n    add r3, r0, #0\n    add r0, r6, r4\n    add r1, r7, #0\n    mov r2, #0xff\n    bl ov01_021F9AB4\n    cmp r0, #0\n    bne _021F9B82\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9B84(void) {
    /* Original at 0x021F9B84 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    bl ov01_021FA200\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA20C\n    lsl r4, r0, #2\n    add r0, r5, #0\n    bl ov01_021FA214\n    add r2, r0, #0\n    add r0, r6, r4\n    add r1, r7, #0\n    bl ov01_021F9AD0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9BAC(void) {
    /* Original at 0x021F9BAC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    bl ov01_021FA200\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA20C\n    lsl r4, r0, #2\n    add r0, r5, #0\n    bl ov01_021FA214\n    add r3, r0, #0\n    add r0, r6, r4\n    add r1, r7, #0\n    mov r2, #0xff\n    bl ov01_021F9AE4\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9BD4(void) {
    /* Original at 0x021F9BD4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r7, r0, #0\n    add r0, r6, #0\n    bl ov01_021FA1DC\n    add r0, r6, #0\n    bl ov01_021FA200\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov01_021FA20C\n    lsl r0, r0, #2\n    add r5, r4, r0\n    add r0, r6, #0\n    bl ov01_021FA214\n    add r4, r0, #0\n    ldr r1, [r5]\n    cmp r1, #0xff\n    beq _021F9C1C\n    add r0, r7, #0\n    mov r2, #0\n    bl ov01_021FA01C\n    cmp r0, #0\n    bne _021F9C1C\n    add r0, r6, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    ldr r1, [r5]\n    bl ov01_021FC588\n    mov r0, #0xff\n    str r0, [r5]\n    add r5, r5, #4\n    sub r4, r4, #1\n    bne _021F9BFA\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9C24(void) {
    /* Original at 0x021F9C24 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov01_021FA204\n    mov r1, #0xff\n    mov r2, #8\n    bl ov01_021F9AAC\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F9C34(void) {
    /* Original at 0x021F9C34 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA21C\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA204\n    add r1, r4, #0\n    mov r2, #0xff\n    add r3, r6, #0\n    bl ov01_021F9AB4\n    cmp r0, #0\n    bne _021F9C58\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F9C5C(void) {
    /* Original at 0x021F9C5C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA21C\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA204\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021F9AD0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F9C78(void) {
    /* Original at 0x021F9C78 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    bl ov01_021FA204\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA21C\n    lsl r4, r0, #2\n    add r0, r5, #0\n    bl ov01_021FA224\n    add r3, r0, #0\n    add r0, r6, r4\n    add r1, r7, #0\n    mov r2, #0xff\n    bl ov01_021F9AB4\n    cmp r0, #0\n    bne _021F9CA6\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9CA8(void) {
    /* Original at 0x021F9CA8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    bl ov01_021FA204\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA21C\n    lsl r4, r0, #2\n    add r0, r5, #0\n    bl ov01_021FA224\n    add r2, r0, #0\n    add r0, r6, r4\n    add r1, r7, #0\n    bl ov01_021F9AD0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9CD0(void) {
    /* Original at 0x021F9CD0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    bl ov01_021FA204\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA21C\n    lsl r4, r0, #2\n    add r0, r5, #0\n    bl ov01_021FA224\n    add r3, r0, #0\n    add r0, r6, r4\n    add r1, r7, #0\n    mov r2, #0xff\n    bl ov01_021F9AE4\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9CF8(void) {
    /* Original at 0x021F9CF8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r7, r0, #0\n    add r0, r6, #0\n    bl ov01_021FA1E4\n    add r0, r6, #0\n    bl ov01_021FA204\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov01_021FA21C\n    lsl r0, r0, #2\n    add r5, r4, r0\n    add r0, r6, #0\n    bl ov01_021FA224\n    add r4, r0, #0\n    ldr r1, [r5]\n    cmp r1, #0xff\n    beq _021F9D40\n    add r0, r7, #0\n    mov r2, #0\n    bl ov01_021FA094\n    cmp r0, #0\n    bne _021F9D40\n    add r0, r6, #0\n    add r0, #0xfc\n    ldr r0, [r0]\n    ldr r1, [r5]\n    bl ov01_021FC588\n    mov r0, #0xff\n    str r0, [r5]\n    add r5, r5, #4\n    sub r4, r4, #1\n    bne _021F9D1E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9D48(void) {
    /* Original at 0x021F9D48 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov01_021FA1FC\n    ldr r1, _021F9D58 ; =0x0000FFFF\n    mov r2, #0x20\n    bl ov01_021F9AAC\n    pop {r3, pc}\n    _021F9D58: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F9D5C(void) {
    /* Original at 0x021F9D5C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA22C\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA1FC\n    ldr r2, _021F9D84 ; =0x0000FFFF\n    add r1, r4, #0\n    add r3, r6, #0\n    bl ov01_021F9AB4\n    cmp r0, #0\n    bne _021F9D80\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    nop\n    _021F9D84: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F9D88(void) {
    /* Original at 0x021F9D88 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA22C\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA1FC\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021F9AD0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F9DA4(void) {
    /* Original at 0x021F9DA4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F9D88\n    cmp r0, #1\n    bne _021F9DB6\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9E9C\n    cmp r0, #1\n    bne _021F9DC6\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FA524\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9DD0(void) {
    /* Original at 0x021F9DD0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    bl ov01_021FA1FC\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA22C\n    lsl r4, r0, #2\n    add r0, r5, #0\n    bl ov01_021FA234\n    add r3, r0, #0\n    ldr r2, _021F9E00 ; =0x0000FFFF\n    add r0, r6, r4\n    add r1, r7, #0\n    bl ov01_021F9AB4\n    cmp r0, #0\n    bne _021F9DFE\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F9E00: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F9E04(void) {
    /* Original at 0x021F9E04 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    bl ov01_021FA1FC\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA22C\n    lsl r4, r0, #2\n    add r0, r5, #0\n    bl ov01_021FA234\n    add r3, r0, #0\n    ldr r2, _021F9E2C ; =0x0000FFFF\n    add r0, r6, r4\n    add r1, r7, #0\n    bl ov01_021F9AE4\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F9E2C: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F9E30(void) {
    /* Original at 0x021F9E30 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    str r0, [sp]\n    add r0, r6, #0\n    bl ov01_021FA1F4\n    str r0, [sp, #4]\n    add r0, r6, #0\n    bl ov01_021FA1FC\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov01_021FA22C\n    lsl r0, r0, #2\n    add r5, r4, r0\n    add r0, r6, #0\n    bl ov01_021FA234\n    add r7, r0, #0\n    ldr r4, [r5]\n    ldr r0, _021F9E98 ; =0x0000FFFF\n    cmp r4, r0\n    beq _021F9E8C\n    ldr r0, [sp]\n    add r1, r4, #0\n    mov r2, #0\n    bl ov01_021F9FCC\n    cmp r0, #0\n    bne _021F9E8C\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    bl GF3dGfxRawResMan_FreeObjById\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov01_021FA4F0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov01_021FA6A4\n    ldr r0, _021F9E98 ; =0x0000FFFF\n    str r0, [r5]\n    add r5, r5, #4\n    sub r7, r7, #1\n    bne _021F9E5A\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F9E98: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021F9E9C(void) {
    /* Original at 0x021F9E9C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    bl ov01_021FA1FC\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA22C\n    lsl r4, r0, #2\n    add r0, r5, #0\n    bl ov01_021FA234\n    add r2, r0, #0\n    add r0, r6, r4\n    add r1, r7, #0\n    bl ov01_021F9AD0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9EC4(void) {
    /* Original at 0x021F9EC4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F9D88\n    cmp r0, #1\n    bne _021F9ED6\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9E9C\n    cmp r0, #1\n    bne _021F9EE6\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9EEC(void) {
    /* Original at 0x021F9EEC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F9B38\n    cmp r0, #1\n    bne _021F9EFE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9B84\n    cmp r0, #1\n    bne _021F9F0E\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9F14(void) {
    /* Original at 0x021F9F14 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F9C5C\n    cmp r0, #1\n    bne _021F9F26\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9CA8\n    cmp r0, #1\n    bne _021F9F36\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9F3C(void) {
    /* Original at 0x021F9F3C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F9DA4\n    cmp r0, #0\n    bne _021F9F52\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9974\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9F54(void) {
    /* Original at 0x021F9F54 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F9EEC\n    cmp r0, #2\n    bne _021F9F6A\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F99D0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9F6C(void) {
    /* Original at 0x021F9F6C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F9F14\n    cmp r0, #2\n    bne _021F9F82\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9A44\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9F84(void) {
    /* Original at 0x021F9F84 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov01_021FA28C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021F9F54\n    add r0, r4, #0\n    bl ov01_021FA2A0\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021F9F6C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9F3C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9FB0(void) {
    /* Original at 0x021F9FB0 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F9BD4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9CF8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9E30\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9FCC(void) {
    /* Original at 0x021F9FCC */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    mov r1, #0\n    add r4, r2, #0\n    str r1, [sp, #4]\n    str r1, [sp]\n    add r1, sp, #0\n    add r2, sp, #4\n    mov r3, #1\n    add r6, r0, #0\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #1\n    bne _021FA016\n    add r7, sp, #0\n    cmp r4, #0\n    beq _021F9FF6\n    ldr r0, [sp]\n    cmp r4, r0\n    beq _021FA006\n    ldr r0, [sp]\n    bl MapObject_GetSpriteID\n    cmp r0, r5\n    bne _021FA006\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, sp, #4\n    mov r3, #1\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #1\n    beq _021F9FEC\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FA01C(void) {
    /* Original at 0x021FA01C */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    mov r1, #0\n    add r5, r2, #0\n    str r1, [sp, #4]\n    str r1, [sp]\n    add r1, sp, #0\n    add r2, sp, #4\n    mov r3, #1\n    add r7, r0, #0\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #1\n    bne _021FA088\n    cmp r5, #0\n    beq _021FA044\n    ldr r0, [sp]\n    cmp r5, r0\n    beq _021FA078\n    ldr r0, [sp]\n    bl MapObject_GetSpriteID\n    add r4, r0, #0\n    ldr r0, _021FA090 ; =0x0000FFFF\n    cmp r4, r0\n    beq _021FA078\n    ldr r0, [sp]\n    bl ov01_021F9318\n    ldrh r0, [r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    bne _021FA078\n    ldr r0, _021FA090 ; =0x0000FFFF\n    cmp r4, r0\n    beq _021FA078\n    add r0, r4, #0\n    bl ov01_021FA28C\n    cmp r6, r0\n    bne _021FA078\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    add r1, sp, #0\n    add r2, sp, #4\n    mov r3, #1\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #1\n    beq _021FA03A\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FA090: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021FA094(void) {
    /* Original at 0x021FA094 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    mov r1, #0\n    add r5, r2, #0\n    str r1, [sp, #4]\n    str r1, [sp]\n    add r1, sp, #0\n    add r2, sp, #4\n    mov r3, #1\n    add r7, r0, #0\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #1\n    bne _021FA0FE\n    cmp r5, #0\n    beq _021FA0BC\n    ldr r0, [sp]\n    cmp r0, r5\n    beq _021FA0EE\n    ldr r0, _021FA104 ; =0x0000FFFF\n    cmp r4, r0\n    beq _021FA0EE\n    ldr r0, [sp]\n    bl ov01_021F9318\n    ldrh r0, [r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    bne _021FA0EE\n    ldr r0, [sp]\n    bl MapObject_GetSpriteID\n    ldr r1, _021FA104 ; =0x0000FFFF\n    add r4, r0, #0\n    cmp r4, r1\n    beq _021FA0EE\n    bl ov01_021FA2A0\n    cmp r6, r0\n    bne _021FA0EE\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    add r1, sp, #0\n    add r2, sp, #4\n    mov r3, #1\n    bl MapObjectManager_GetNextObjectWithFlagFromIndex\n    cmp r0, #1\n    beq _021FA0B2\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021FA104: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021FA108(void) {
    /* Original at 0x021FA108 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r6, r0, #0\n    add r7, r2, #0\n    bl sub_0205F1A0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA28C\n    str r0, [sp]\n    ldr r1, [sp]\n    add r0, r4, #0\n    bl ov01_021F9EEC\n    cmp r0, #1\n    bne _021FA14E\n    ldr r1, [sp]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl ov01_021FA01C\n    cmp r0, #0\n    bne _021FA14E\n    add r0, r4, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    ldr r1, [sp]\n    bl ov01_021FC588\n    ldr r1, [sp]\n    add r0, r4, #0\n    bl ov01_021F9BAC\n    add r0, r5, #0\n    bl ov01_021FA2A0\n    str r0, [sp, #4]\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov01_021F9F14\n    cmp r0, #1\n    bne _021FA184\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    add r2, r7, #0\n    bl ov01_021FA094\n    cmp r0, #0\n    bne _021FA184\n    add r0, r4, #0\n    add r0, #0xfc\n    ldr r0, [r0]\n    ldr r1, [sp, #4]\n    bl ov01_021FC588\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov01_021F9CD0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021F9EC4\n    cmp r0, #1\n    bne _021FA1C2\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r7, #0\n    bl ov01_021F9FCC\n    cmp r0, #0\n    bne _021FA1C2\n    add r0, r4, #0\n    bl ov01_021FA1F4\n    add r1, r5, #0\n    bl GF3dGfxRawResMan_FreeObjById\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021F9E04\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021FA4F0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021FA6A4\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FA1C8(void) {
    /* Original at 0x021FA1C8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xe0\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021FA1D0(void) {
    /* Original at 0x021FA1D0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xe0\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021FA1D8(void) {
    /* Original at 0x021FA1D8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #4]\n    bx lr"
    );
    #endif
}

void ov01_021FA1DC(void) {
    /* Original at 0x021FA1DC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xe8\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021FA1E4(void) {
    /* Original at 0x021FA1E4 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xec\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021FA1EC(void) {
    /* Original at 0x021FA1EC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xf0\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021FA1F4(void) {
    /* Original at 0x021FA1F4 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xf0\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021FA1FC(void) {
    /* Original at 0x021FA1FC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x60\n    bx lr"
    );
    #endif
}

void ov01_021FA200(void) {
    /* Original at 0x021FA200 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x20\n    bx lr"
    );
    #endif
}

void ov01_021FA204(void) {
    /* Original at 0x021FA204 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x40\n    bx lr"
    );
    #endif
}

void ov01_021FA208(void) {
    /* Original at 0x021FA208 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov01_021FA20C(void) {
    /* Original at 0x021FA20C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov01_021FA210(void) {
    /* Original at 0x021FA210 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov01_021FA214(void) {
    /* Original at 0x021FA214 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov01_021FA218(void) {
    /* Original at 0x021FA218 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov01_021FA21C(void) {
    /* Original at 0x021FA21C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void ov01_021FA220(void) {
    /* Original at 0x021FA220 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov01_021FA224(void) {
    /* Original at 0x021FA224 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov01_021FA228(void) {
    /* Original at 0x021FA228 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov01_021FA22C(void) {
    /* Original at 0x021FA22C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov01_021FA230(void) {
    /* Original at 0x021FA230 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x1c]\n    bx lr"
    );
    #endif
}

void ov01_021FA234(void) {
    /* Original at 0x021FA234 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x1c]\n    bx lr"
    );
    #endif
}

void FldObjSys_ReadMModelFromNarc(void) {
    /* Original at 0x021FA238 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0x41\n    lsl r3, r3, #2\n    ldr r0, [r0, r3]\n    ldr r3, _021FA244 ; =ReadMModelFromNarcInternal\n    bx r3\n    nop\n    _021FA244: .word ReadMModelFromNarcInternal"
    );
    #endif
}

void sub_021FA248(void) {
    /* Original at 0x021FA248 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _021FA280 ; =ov01_022074A8\n    ldr r1, _021FA284 ; =0x0000FFFF\n    ldrh r2, [r3]\n    cmp r2, r0\n    bne _021FA270\n    ldrh r0, [r3, #4]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x1a\n    cmp r0, #0xff ; Never eq due to data type limitations\n    bne _021FA268\n    bne _021FA264\n    bl GF_AssertFail\n    ldr r0, _021FA288 ; =ov01_02207318\n    pop {r3, pc}\n    ldr r1, _021FA288 ; =ov01_02207318\n    lsl r0, r0, #3\n    add r0, r1, r0\n    pop {r3, pc}\n    add r3, r3, #6\n    ldrh r2, [r3]\n    cmp r2, r1\n    bne _021FA24E\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    _021FA280: .word ov01_022074A8\n    _021FA284: .word 0x0000FFFF\n    _021FA288: .word ov01_02207318"
    );
    #endif
}

void ov01_021FA28C(void) {
    sub_021FA248();
}

void ov01_021FA298(void) {
    ov01_021FA28C();
}

void ov01_021FA2A0(void) {
    sub_021FA248();
}

void ov01_021FA2AC(void) {
    sub_021FA248();
}

void ov01_021FA2B8(void) {
    /* Original at 0x021FA2B8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #1\n    bne _021FA2C8\n    mov r1, #1\n    lsl r1, r1, #0x16\n    bl MapObject_SetFlagsBits\n    pop {r3, pc}\n    mov r1, #1\n    lsl r1, r1, #0x16\n    bl MapObject_ClearFlagsBits\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021FA2D4(void) {
    MapObject_GetFlagsBitsMask(0, 1, 1);
}

void ov01_021FA2EC(void) {
    /* Original at 0x021FA2EC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #4\n    add r4, r1, #0\n    str r0, [sp, #4]\n    add r0, sp, #0\n    str r4, [sp]\n    bl sub_020237EC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA1C8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FA1D8\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FA314(void) {
    sub_02023874();
}

void ov01_021FA31C(void) {
    /* Original at 0x021FA31C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x20\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldmia r2!, {r0, r1}\n    add r3, sp, #8\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    add r2, sp, #0x14\n    str r0, [r3]\n    ldr r3, _021FA36C ; =ov01_02208B64\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, sp, #0\n    bl sub_02023D44\n    add r4, r0, #0\n    beq _021FA364\n    mov r1, #0\n    bl sub_02023EA4\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    add r0, r4, #0\n    bl sub_02023F90\n    bl ov01_021EA3B0\n    add r0, r4, #0\n    add sp, #0x20\n    pop {r4, pc}\n    nop\n    _021FA36C: .word ov01_02208B64"
    );
    #endif
}

void ov01_021FA370(void) {
    /* Original at 0x021FA370 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r4, r2, #0\n    bl ov01_021FA28C\n    add r1, r0, #0\n    add r0, r6, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bl ov01_021FC5A4\n    str r0, [r4]\n    add r0, r5, #0\n    bl ov01_021FA2A0\n    add r1, r0, #0\n    add r0, r6, #0\n    add r0, #0xfc\n    ldr r0, [r0]\n    bl ov01_021FC5A4\n    add r1, r4, #0\n    add r1, #0xc\n    bl sub_02026E18\n    add r0, r6, #0\n    bl ov01_021FA1F4\n    add r1, r5, #0\n    bl GF3dGfxRawResMan_GetObjById\n    add r6, r0, #0\n    bl GF3dGfxRawResObj_GetTex\n    str r0, [r4, #4]\n    add r0, r6, #0\n    bl GF3dGfxRawResObj_GetTexKey\n    str r0, [r4, #0x1c]\n    add r0, r6, #0\n    bl GF3dGfxRawResObj_GetTex4x4Key\n    str r0, [r4, #0x20]\n    add r0, r6, #0\n    bl GF3dGfxRawResObj_GetPlttKey\n    str r0, [r4, #0x24]\n    add r0, r5, #0\n    bl ov01_021FA2AC\n    str r0, [r4, #8]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FA3DC(void) {
    /* Original at 0x021FA3DC */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl MapObject_GetManager\n    bl sub_0205F1A0\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021FA3E8(void) {
    /* Original at 0x021FA3E8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r1, sp, #0\n    bl ov01_021F93AC\n    mov r0, #6\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_02023E50\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021FA40C(void) {
    /* Original at 0x021FA40C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #1\n    add r6, r1, #0\n    lsl r1, r4, #9\n    add r5, r0, #0\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021FA420\n    mov r4, #0\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021FA43E\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl MapObject_TestFlagsBits\n    cmp r0, #0\n    bne _021FA43E\n    mov r4, #0\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    bl sub_02023EA4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FA44C(void) {
    /* Original at 0x021FA44C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r0, #2\n    ldr r0, _021FA454 ; =ov01_02208B70\n    ldr r0, [r0, r1]\n    bx lr\n    _021FA454: .word ov01_02208B70"
    );
    #endif
}

void ov01_021FA458(void) {
    /* Original at 0x021FA458 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r0, #2\n    ldr r0, _021FA460 ; =ov01_02208B80\n    ldr r0, [r0, r1]\n    bx lr\n    _021FA460: .word ov01_02208B80"
    );
    #endif
}

void ov01_021FA464(void) {
    /* Original at 0x021FA464 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r0, #2\n    ldr r0, _021FA46C ; =ov01_02208B90\n    ldr r0, [r0, r1]\n    bx lr\n    _021FA46C: .word ov01_02208B90"
    );
    #endif
}

void ov01_021FA470(void) {
    /* Original at 0x021FA470 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r4, [r5, r0]\n    mov r0, #4\n    add r6, r1, #0\n    ldrsh r1, [r4, r0]\n    mov r0, #2\n    ldrsh r0, [r4, r0]\n    add r7, r2, #0\n    str r3, [sp]\n    cmp r1, r0\n    bge _021FA49A\n    add r0, r5, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    bl sub_020238F8\n    cmp r0, #1\n    bne _021FA4CC\n    mov r2, #0\n    ldrsh r3, [r4, r2]\n    ldr r0, [r4, #0xc]\n    cmp r3, #0\n    ble _021FA4C4\n    ldr r1, [r0, #0xc]\n    cmp r1, #0\n    bne _021FA4BC\n    add r5, #0xf0\n    ldr r1, [r5]\n    str r1, [r0, #0xc]\n    ldr r1, [sp]\n    str r1, [r0, #8]\n    str r6, [r0, #4]\n    str r7, [r0]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r2, r2, #1\n    add r0, #0x10\n    cmp r2, r3\n    blt _021FA4A4\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r2, #0\n    bl FldObjSys_ReadMModelFromNarc\n    add r2, r0, #0\n    ldr r3, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021FA61C\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FA4F0(void) {
    /* Original at 0x021FA4F0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r2, #1\n    lsl r2, r2, #8\n    ldr r0, [r0, r2]\n    mov r3, #0\n    ldrsh r4, [r0, r3]\n    ldr r2, [r0, #0xc]\n    cmp r4, #0\n    ble _021FA51E\n    ldr r0, [r2, #4]\n    cmp r0, r1\n    bne _021FA516\n    ldr r0, [r2, #0xc]\n    cmp r0, #0\n    beq _021FA516\n    mov r0, #0\n    str r0, [r2, #0xc]\n    pop {r3, r4}\n    bx lr\n    add r3, r3, #1\n    add r2, #0x10\n    cmp r3, r4\n    blt _021FA502\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov01_021FA524(void) {
    /* Original at 0x021FA524 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r2, #1\n    lsl r2, r2, #8\n    ldr r0, [r0, r2]\n    mov r3, #0\n    ldrsh r4, [r0, r3]\n    ldr r2, [r0, #0xc]\n    cmp r4, #0\n    ble _021FA55C\n    ldr r0, [r2, #4]\n    cmp r0, r1\n    bne _021FA554\n    ldr r0, [r2, #0xc]\n    cmp r0, #0\n    beq _021FA554\n    ldr r0, [r2, #8]\n    cmp r0, #0\n    bne _021FA54E\n    mov r0, #3\n    pop {r3, r4}\n    bx lr\n    mov r0, #4\n    pop {r3, r4}\n    bx lr\n    add r3, r3, #1\n    add r2, #0x10\n    cmp r3, r4\n    blt _021FA536\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov01_021FA564(void) {
    /* Original at 0x021FA564 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r1, [sp]\n    mov r1, #1\n    ldr r0, [sp]\n    lsl r1, r1, #8\n    ldr r4, [r0, r1]\n    add r0, #0xe0\n    ldr r0, [r0]\n    mov r6, #0\n    ldr r5, [r4, #0xc]\n    bl sub_020238F8\n    cmp r0, #1\n    beq _021FA618\n    add r7, r4, #4\n    b _021FA5AE\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    beq _021FA5AA\n    ldr r0, [sp]\n    ldr r1, [r5]\n    mov r2, #0\n    bl FldObjSys_ReadMModelFromNarc\n    add r2, r0, #0\n    ldr r0, [sp]\n    ldr r1, [r5, #4]\n    ldr r3, [r5, #8]\n    bl ov01_021FA61C\n    mov r0, #0\n    str r0, [r5, #0xc]\n    ldrsh r0, [r7, r0]\n    add r0, r0, #1\n    strh r0, [r7]\n    add r5, #0x10\n    add r6, r6, #1\n    mov r0, #4\n    ldrsh r1, [r4, r0]\n    mov r0, #2\n    ldrsh r0, [r4, r0]\n    cmp r1, r0\n    bge _021FA5C2\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    cmp r6, r0\n    blt _021FA584\n    mov r6, #0\n    ldrsh r0, [r4, r6]\n    ldr r7, [r4, #0xc]\n    sub r1, r0, #1\n    cmp r1, #0\n    ble _021FA614\n    add r5, r7, #0\n    ldr r1, [r5, #0xc]\n    cmp r1, #0\n    bne _021FA606\n    add r2, r6, #1\n    cmp r2, r0\n    bge _021FA606\n    lsl r1, r2, #4\n    add r3, r7, r1\n    ldr r1, [r3, #0xc]\n    cmp r1, #0\n    beq _021FA5FE\n    lsl r0, r2, #4\n    add r3, r7, r0\n    mov ip, r3\n    add r2, r5, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r1, #0\n    mov r0, ip\n    str r1, [r0, #0xc]\n    b _021FA606\n    add r2, r2, #1\n    add r3, #0x10\n    cmp r2, r0\n    blt _021FA5E0\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add r6, r6, #1\n    add r5, #0x10\n    sub r1, r0, #1\n    cmp r6, r1\n    blt _021FA5D0\n    mov r0, #0\n    strh r0, [r4, #4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FA61C(void) {
    /* Original at 0x021FA61C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    add r0, r5, #0\n    add r0, #0xf0\n    add r4, r1, #0\n    add r6, r3, #0\n    add r1, r2, #0\n    ldr r0, [r0]\n    add r2, r4, #0\n    mov r3, #1\n    bl GF3dGfxRawResMan_AllocObjAndKeys\n    cmp r0, #0\n    bne _021FA642\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FA668\n    cmp r6, #0\n    bne _021FA65A\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9D5C\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9DD0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FA668(void) {
    /* Original at 0x021FA668 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r3, #1\n    lsl r3, r3, #8\n    ldr r3, [r0, r3]\n    mov r5, #1\n    ldr r4, [r3, #0x10]\n    mov r2, #0\n    strh r5, [r3, #6]\n    ldrsh r6, [r3, r2]\n    cmp r6, #0\n    ble _021FA69C\n    ldr r5, [r4, #8]\n    cmp r5, #0\n    bne _021FA694\n    add r0, #0xf0\n    ldr r0, [r0]\n    str r0, [r4, #8]\n    str r1, [r4, #4]\n    mov r0, #0\n    str r0, [r4]\n    strh r0, [r3, #6]\n    pop {r4, r5, r6, pc}\n    add r2, r2, #1\n    add r4, #0xc\n    cmp r2, r6\n    blt _021FA67E\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FA6A4(void) {
    /* Original at 0x021FA6A4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r2, #1\n    lsl r2, r2, #8\n    ldr r2, [r0, r2]\n    mov r0, #1\n    ldr r4, [r2, #0x10]\n    mov r3, #0\n    strh r0, [r2, #6]\n    ldrsh r5, [r2, r3]\n    cmp r5, #0\n    ble _021FA6D6\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _021FA6CE\n    ldr r0, [r4, #4]\n    cmp r0, r1\n    bne _021FA6CE\n    mov r0, #0\n    str r0, [r4, #8]\n    str r0, [r4]\n    b _021FA6D6\n    add r3, r3, #1\n    add r4, #0xc\n    cmp r3, r5\n    blt _021FA6BA\n    mov r0, #0\n    strh r0, [r2, #6]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov01_021FA6E0(void) {
    /* Original at 0x021FA6E0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r6, [r1, r0]\n    ldrh r0, [r6, #6]\n    cmp r0, #1\n    beq _021FA71A\n    mov r4, #0\n    ldrsh r0, [r6, r4]\n    ldr r5, [r6, #0x10]\n    cmp r0, #0\n    ble _021FA71A\n    mov r7, #1\n    ldr r0, [r5]\n    cmp r0, #0\n    bne _021FA70E\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _021FA70E\n    ldr r1, [r5, #4]\n    bl GF3dGfxRawResMan_LoadObjTexById\n    str r7, [r5]\n    mov r0, #0\n    ldrsh r0, [r6, r0]\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, r0\n    blt _021FA6FA\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FA71C(void) {
    /* Original at 0x021FA71C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r6, [r1, r0]\n    mov r4, #0\n    ldr r5, [r6, #0x10]\n    mov r0, #1\n    strh r0, [r6, #6]\n    ldrsh r0, [r6, r4]\n    cmp r0, #0\n    ble _021FA756\n    add r7, r4, #0\n    ldr r0, [r5]\n    cmp r0, #1\n    bne _021FA74A\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _021FA74A\n    ldr r1, [r5, #4]\n    bl GF3dGfxRawResMan_FreeObjVramAndSecondaryHeaderById\n    str r7, [r5]\n    str r7, [r5, #8]\n    mov r0, #0\n    ldrsh r0, [r6, r0]\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, r0\n    blt _021FA734\n    mov r0, #0\n    strh r0, [r6, #6]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FA75C(void) {
    /* Original at 0x021FA75C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r5, #1\n    lsl r5, r5, #8\n    ldr r5, [r0, r5]\n    mov r4, #0\n    ldrsh r6, [r5, r4]\n    ldr r0, [r5, #8]\n    cmp r6, #0\n    ble _021FA792\n    ldr r5, [r0, #4]\n    cmp r5, #0\n    bne _021FA78A\n    str r1, [r0, #4]\n    str r2, [r0, #8]\n    str r3, [r0]\n    ldr r0, [r0, #8]\n    mov r2, #0\n    str r2, [r0]\n    add r0, r1, #0\n    mov r1, #1\n    bl ov01_021FA2B8\n    pop {r4, r5, r6, pc}\n    add r4, r4, #1\n    add r0, #0xc\n    cmp r4, r6\n    blt _021FA76E\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FA798(void) {
    /* Original at 0x021FA798 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r2, #1\n    lsl r2, r2, #8\n    ldr r0, [r0, r2]\n    mov r3, #0\n    ldrsh r4, [r0, r3]\n    ldr r2, [r0, #8]\n    cmp r4, #0\n    ble _021FA7C2\n    ldr r0, [r2, #4]\n    cmp r0, r1\n    bne _021FA7BA\n    mov r0, #0\n    str r0, [r2, #4]\n    str r0, [r2, #8]\n    pop {r3, r4}\n    bx lr\n    add r3, r3, #1\n    add r2, #0xc\n    cmp r3, r4\n    blt _021FA7AA\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov01_021FA7C8(void) {
    /* Original at 0x021FA7C8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r6, [r7, r0]\n    mov r4, #0\n    ldrsh r0, [r6, r4]\n    ldr r5, [r6, #8]\n    cmp r0, #0\n    ble _021FA7F6\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _021FA7EA\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov01_021FA804\n    mov r0, #0\n    ldrsh r0, [r6, r0]\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, r0\n    blt _021FA7DC\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FA7F8(void) {
    ov01_021FA7C8();
}

void ov01_021FA804(void) {
    /* Original at 0x021FA804 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    bl ov01_021F9EC4\n    cmp r0, #2\n    beq _021FA852\n    ldr r0, [r4, #4]\n    ldr r1, [r4]\n    bl ov01_021F9528\n    ldr r1, [r4, #8]\n    str r0, [r1]\n    ldr r0, [r4, #8]\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _021FA82A\n    bl GF_AssertFail\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl ov01_021FA2B8\n    mov r1, #2\n    ldr r0, [r4, #4]\n    lsl r1, r1, #0x14\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    ldr r0, [r4, #4]\n    bne _021FA848\n    bl sub_0205F4C0\n    b _021FA84C\n    bl sub_0205F484\n    mov r0, #0\n    str r0, [r4, #4]\n    str r0, [r4, #8]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FA854(void) {
    /* Original at 0x021FA854 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    add r5, r0, #0\n    mov r0, #0xc\n    add r7, r6, #0\n    mul r7, r0\n    lsl r0, r6, #4\n    lsl r1, r7, #1\n    str r0, [sp, #4]\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, #0x28\n    str r0, [sp, #8]\n    ldr r1, [sp, #8]\n    mov r0, #4\n    str r2, [sp]\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _021FA882\n    bl GF_AssertFail\n    ldr r2, [sp, #8]\n    add r0, r4, #0\n    mov r1, #0\n    bl memset\n    ldr r0, [sp]\n    strh r6, [r4]\n    strh r0, [r4, #2]\n    add r0, r4, #0\n    add r0, #0x28\n    str r0, [r4, #8]\n    add r1, r0, r7\n    ldr r0, [sp, #4]\n    str r1, [r4, #0xc]\n    add r0, r1, r0\n    str r0, [r4, #0x10]\n    mov r0, #1\n    lsl r0, r0, #8\n    str r4, [r5, r0]\n    add r0, r0, #4\n    ldr r0, [r5, r0]\n    bl MapObjectManager_GetPriority\n    add r6, r0, #0\n    ldr r0, _021FA8E8 ; =ov01_021FA564\n    add r1, r5, #0\n    add r2, r6, #1\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #0x18]\n    ldr r0, _021FA8EC ; =ov01_021FA7F8\n    add r1, r5, #0\n    add r2, r6, #2\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #0x1c]\n    ldr r0, _021FA8F0 ; =ov01_021FA6E0\n    add r1, r5, #0\n    mov r2, #0xff\n    bl SysTask_CreateOnVBlankQueue\n    str r0, [r4, #0x20]\n    ldr r0, _021FA8F4 ; =ov01_021FA71C\n    add r1, r5, #0\n    mov r2, #0xff\n    bl SysTask_CreateOnVWaitQueue\n    str r0, [r4, #0x24]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021FA8E8: .word ov01_021FA564\n    _021FA8EC: .word ov01_021FA7F8\n    _021FA8F0: .word ov01_021FA6E0\n    _021FA8F4: .word ov01_021FA71C"
    );
    #endif
}

void ov01_021FA8F8(void) {
    /* Original at 0x021FA8F8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r4, [r5, r0]\n    mov r0, #1\n    strh r0, [r4, #6]\n    ldr r0, [r4, #0x18]\n    bl SysTask_Destroy\n    ldr r0, [r4, #0x1c]\n    bl SysTask_Destroy\n    ldr r0, [r4, #0x20]\n    bl SysTask_Destroy\n    ldr r0, [r4, #0x24]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    mov r1, #0\n    lsl r0, r0, #8\n    str r1, [r5, r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FA930(void) {
    /* Original at 0x021FA930 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021FA948\n    add r0, r5, #0\n    bl ov01_021F72DC\n    cmp r0, #0\n    bne _021FA972\n    add r0, r5, #0\n    bl MapObject_GetSpriteID\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetManager\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_0205E420\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov01_021FA108\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205E38C\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FA97C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FA97C(void) {
    /* Original at 0x021FA97C */
    /* Requires manual decompilation - 217 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r6, r0, #0\n    str r1, [sp, #8]\n    bl ov01_021FA3DC\n    add r7, r0, #0\n    bl ov01_021FA1D0\n    str r0, [sp, #0x14]\n    add r0, r6, #0\n    bl ov01_021F72DC\n    str r0, [sp, #0x10]\n    mov r0, #4\n    mov r1, #0x58\n    bl Heap_AllocAtEnd\n    mov r1, #0\n    mov r2, #0x58\n    add r5, r0, #0\n    bl memset\n    ldr r0, [sp, #8]\n    str r0, [r5]\n    add r0, r6, #0\n    str r6, [r5, #0x50]\n    bl MapObject_GetID\n    cmp r0, #0xff\n    bne _021FA9CE\n    add r0, r6, #0\n    bl ov01_021F72DC\n    bl sub_02023F90\n    mov r1, #0\n    bl NNS_G3dMdlGetMdlFogEnableFlag\n    str r0, [sp, #0x1c]\n    b _021FA9D2\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    add r0, r6, #0\n    bl MapObject_GetSpriteID\n    str r0, [sp, #0x18]\n    bl ov01_021FA28C\n    ldr r4, _021FAB90 ; =ov01_02207294\n    ldrh r1, [r4]\n    cmp r1, r0\n    beq _021FA9EE\n    add r4, r4, #4\n    ldrh r1, [r4]\n    cmp r1, #0xff\n    bne _021FA9E0\n    cmp r1, #0xff\n    bne _021FA9F6\n    bl GF_AssertFail\n    ldrh r1, [r4, #2]\n    add r0, r7, #0\n    mov r2, #0\n    bl FldObjSys_ReadMModelFromNarc\n    str r0, [r5, #8]\n    ldr r0, [sp, #0x18]\n    bl ov01_021FA2A0\n    ldr r4, _021FAB94 ; =ov01_022072CC\n    ldrh r1, [r4]\n    cmp r1, r0\n    beq _021FAA18\n    add r4, r4, #4\n    ldrh r1, [r4]\n    cmp r1, #0xff\n    bne _021FAA0A\n    cmp r1, #0xff\n    bne _021FAA20\n    bl GF_AssertFail\n    ldrh r1, [r4, #2]\n    add r0, r7, #0\n    mov r2, #0\n    bl FldObjSys_ReadMModelFromNarc\n    add r1, r5, #0\n    add r1, #0x14\n    str r0, [r5, #0xc]\n    bl sub_02026E18\n    ldr r0, [sp, #0x18]\n    bl GetMoveModelNoBySpriteId\n    add r1, r0, #0\n    bpl _021FAA44\n    bl GF_AssertFail\n    mov r1, #0\n    add r0, r7, #0\n    mov r2, #0\n    bl FldObjSys_ReadMModelFromNarc\n    str r0, [r5, #0x10]\n    bl NNS_G3dGetTex\n    add r4, r0, #0\n    ldr r0, [sp, #0x18]\n    bl ov01_021FA2AC\n    add r3, r0, #0\n    add r0, r5, #0\n    add r0, #0x14\n    str r0, [sp]\n    add r0, r5, #0\n    ldr r1, [r5, #8]\n    add r0, #0x28\n    add r2, r4, #0\n    bl sub_02023E2C\n    ldr r0, [sp, #0x10]\n    bl sub_02023E68\n    add r3, r0, #0\n    add r2, sp, #0x2c\n    ldmia r3!, {r0, r1}\n    add r4, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, r5, #0\n    str r0, [r2]\n    ldr r0, [sp, #0x14]\n    add r1, #0x28\n    add r2, r4, #0\n    bl ov01_021FA31C\n    str r0, [r5, #0x24]\n    cmp r0, #0\n    bne _021FAA98\n    bl GF_AssertFail\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    bne _021FAAAA\n    ldr r0, [r5, #0x24]\n    bl sub_02023F90\n    mov r1, #0\n    bl NNS_G3dMdlSetMdlFogEnableFlagAll\n    ldr r0, [sp, #0x10]\n    bl sub_02023EF4\n    add r1, r0, #0\n    ldr r0, [r5, #0x24]\n    bl sub_02023EE0\n    ldr r0, [sp, #0x10]\n    bl sub_02023F70\n    add r1, r0, #0\n    ldr r0, [r5, #0x24]\n    bl sub_02023F40\n    ldr r0, [sp, #0x10]\n    bl sub_02023F30\n    add r1, r0, #0\n    ldr r0, [r5, #0x24]\n    bl sub_02023F1C\n    ldr r0, [r5, #0x24]\n    mov r1, #0\n    bl sub_02023F04\n    ldr r0, [r5, #0x24]\n    mov r1, #1\n    bl sub_02023EA4\n    ldr r0, [r5, #0x24]\n    bl sub_02023FC0\n    add r0, r6, #0\n    bl MapObject_CheckFlag24\n    cmp r0, #1\n    bne _021FAB4A\n    add r0, r6, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #1\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r4, #0\n    bl sub_0205BA70\n    cmp r0, #1\n    bne _021FAB18\n    mov r4, #2\n    b _021FAB28\n    add r0, r4, #0\n    bl sub_0205B984\n    cmp r0, #1\n    bne _021FAB26\n    mov r4, #0\n    b _021FAB28\n    mov r4, #1\n    add r0, r6, #0\n    add r1, sp, #0x20\n    bl MapObject_CopyPositionVector\n    add r0, r6, #0\n    bl ov01_021F146C\n    ldr r1, [sp, #0xc]\n    str r4, [sp]\n    str r1, [sp, #4]\n    add r1, r5, #0\n    ldr r2, [r5, #0x24]\n    add r1, #0x28\n    add r3, sp, #0x20\n    bl ov01_021FDE64\n    str r0, [r5, #0x54]\n    add r0, r6, #0\n    bl sub_0205E420\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    ldr r1, [sp, #0x18]\n    add r2, r6, #0\n    bl ov01_021FA108\n    ldr r1, [sp, #8]\n    add r0, r6, #0\n    bl sub_0205E38C\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    bl MapObjectManager_GetPriority\n    ldr r0, _021FAB98 ; =ov01_021FAB9C\n    add r1, r5, #0\n    mov r2, #0xff\n    bl SysTask_CreateOnVWaitQueue\n    add r4, r0, #0\n    bne _021FAB82\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021FAB9C\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FAB90: .word ov01_02207294\n    _021FAB94: .word ov01_022072CC\n    _021FAB98: .word ov01_021FAB9C"
    );
    #endif
}

void ov01_021FAB9C(void) {
    /* Original at 0x021FAB9C */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5, #4]\n    ldr r4, [r5, #0x50]\n    cmp r0, #0\n    beq _021FABB0\n    cmp r0, #1\n    beq _021FAC08\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl MapObject_CheckActive\n    cmp r0, #0\n    beq _021FABC4\n    add r0, r4, #0\n    bl ov01_021FA2D4\n    cmp r0, #0\n    bne _021FABF4\n    ldr r0, [r5, #0x54]\n    cmp r0, #0\n    beq _021FABCE\n    bl sub_02068B48\n    ldr r0, [r5, #0x24]\n    bl sub_02023DA4\n    ldr r0, [r5, #8]\n    bl Heap_Free\n    ldr r0, [r5, #0xc]\n    bl Heap_Free\n    ldr r0, [r5, #0x10]\n    bl Heap_Free\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r6, #0\n    bl SysTask_Destroy\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl MapObject_GetSpriteID\n    ldr r1, [r5]\n    cmp r1, r0\n    beq _021FAC40\n    ldr r0, [r5, #4]\n    add r0, r0, #1\n    str r0, [r5, #4]\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl ov01_021FA2D4\n    cmp r0, #0\n    bne _021FAC40\n    ldr r0, [r5, #0x54]\n    cmp r0, #0\n    beq _021FAC1C\n    bl sub_02068B48\n    ldr r0, [r5, #0x24]\n    bl sub_02023DA4\n    ldr r0, [r5, #8]\n    bl Heap_Free\n    ldr r0, [r5, #0xc]\n    bl Heap_Free\n    ldr r0, [r5, #0x10]\n    bl Heap_Free\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r6, #0\n    bl SysTask_Destroy\n    pop {r4, r5, r6, pc}"
    );
    #endif
}
