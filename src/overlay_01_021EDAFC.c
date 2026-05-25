/* Decompiled from asm/overlay_01_021EDAFC.s */
#include "global.h"

void ov01_021EDAFC(void) {
    /* Original at 0x021EDAFC */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    ldr r1, [sp, #0x2c]\n    add r4, r0, #0\n    add r5, r2, #0\n    add r7, r3, #0\n    cmp r1, #0\n    bne _021EDB2A\n    mov r0, #1\n    mov r1, #0x1b ; msgdata/msg.narc\n    mov r2, #0xbf ; msg_0191.gmm\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    add r1, r6, #0\n    add r1, #0x8c\n    str r0, [r1]\n    add r0, r6, #0\n    add r0, #0x97\n    ldrb r1, [r0]\n    mov r0, #2\n    orr r1, r0\n    b _021EDB3A\n    add r0, r6, #0\n    add r0, #0x8c\n    str r1, [r0]\n    add r0, r6, #0\n    add r0, #0x97\n    ldrb r1, [r0]\n    mov r0, #2\n    bic r1, r0\n    add r0, r6, #0\n    add r0, #0x97\n    strb r1, [r0]\n    add r0, r6, #0\n    ldr r1, [sp, #0x24]\n    add r0, #0x90\n    str r1, [r0]\n    add r0, r6, #0\n    str r4, [r6]\n    ldr r1, [sp, #0x20]\n    add r0, #0xa0\n    str r1, [r0]\n    add r1, r6, #0\n    mov r0, #0\n    add r1, #0xa4\n    str r0, [r1]\n    add r1, r6, #0\n    add r1, #0xa8\n    str r0, [r1]\n    add r1, r6, #0\n    add r1, #0x97\n    ldrb r3, [r1]\n    add r4, sp, #8\n    mov r1, #1\n    bic r3, r1\n    ldrb r2, [r4, #0x14]\n    mov r1, #1\n    and r1, r2\n    add r2, r3, #0\n    orr r2, r1\n    add r1, r6, #0\n    add r1, #0x97\n    strb r2, [r1]\n    add r1, r6, #0\n    ldrb r2, [r4, #0x10]\n    add r1, #0x96\n    mov r3, #0x40\n    strb r2, [r1]\n    add r1, r6, #0\n    add r1, #0x97\n    ldrb r1, [r1]\n    bic r1, r3\n    add r3, r6, #0\n    add r3, #0x97\n    strb r1, [r3]\n    add r1, r6, #0\n    add r1, #0x97\n    ldrb r1, [r1]\n    mov r3, #0x80\n    bic r1, r3\n    add r3, r6, #0\n    add r3, #0x97\n    strb r1, [r3]\n    add r1, r6, #0\n    add r1, #0x98\n    strb r5, [r1]\n    add r1, r6, #0\n    add r1, #0x99\n    strb r7, [r1]\n    add r1, r6, #0\n    add r1, #0x9b\n    strb r0, [r1]\n    ldr r1, [sp, #0x28]\n    mov r3, #3\n    str r1, [r6, #0x18]\n    add r1, r6, #0\n    add r1, #0x94\n    strb r3, [r1]\n    mov r1, #0xb7\n    lsl r1, r1, #2\n    strh r2, [r6, r1]\n    add r2, r6, #0\n    add r3, r0, #0\n    add r1, r2, #0\n    add r1, #0xbc\n    str r3, [r1]\n    add r1, r2, #0\n    add r1, #0xc0\n    add r0, r0, #1\n    add r2, #8\n    str r3, [r1]\n    cmp r0, #0x1c\n    blt _021EDBCC\n    mov r7, #0xa9\n    add r1, r6, #0\n    add r2, r6, #0\n    mov r5, #0\n    mov r0, #0xff\n    lsl r7, r7, #2\n    mov r4, #0x71\n    lsl r4, r4, #2\n    str r5, [r1, r4]\n    add r4, r4, #4\n    str r5, [r1, r4]\n    strh r0, [r2, r7]\n    add r3, r3, #1\n    add r1, #8\n    add r2, r2, #2\n    cmp r3, #0x1c\n    blt _021EDBEC\n    add r4, r6, #0\n    mov r7, #0x50\n    add r0, r7, #0\n    mov r1, #4\n    bl String_New\n    str r0, [r4, #0x1c]\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #0x1c\n    blt _021EDC06\n    add r6, #0xa0\n    ldr r1, _021EDC24 ; =0x0000EEEE\n    ldr r0, [r6]\n    strh r1, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EDC24: .word 0x0000EEEE"
    );
    #endif
}

void ov01_021EDC28(void) {
    /* Original at 0x021EDC28 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r7, r1, #0\n    mov r1, #0x2e\n    add r6, r0, #0\n    mov r0, #4\n    lsl r1, r1, #4\n    str r2, [sp, #0x18]\n    add r5, r3, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _021EDC48\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    mov r2, #0x2e\n    mov r1, #0\n    lsl r2, r2, #4\n    bl memset\n    str r5, [sp]\n    add r0, sp, #0x20\n    ldrb r0, [r0, #0x10]\n    add r1, r4, #0\n    add r2, r7, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x34]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x38]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x3c]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x40]\n    str r0, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    add r0, r6, #0\n    bl ov01_021EDAFC\n    add r0, r4, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EDC7C(void) {
    ov01_021EDD68();
}

void ov01_021EDC84(void) {
    /* Original at 0x021EDC84 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    bl ov01_021EDDD8\n    mov r1, #7\n    tst r1, r0\n    bne _021EDC98\n    lsr r0, r0, #3\n    b _021EDC9C\n    lsr r0, r0, #3\n    add r0, r0, #1\n    add r1, r4, #0\n    add r1, #0x97\n    ldrb r1, [r1]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1f\n    beq _021EDCB6\n    add r1, r4, #0\n    add r1, #0x98\n    ldrb r1, [r1]\n    sub r2, r1, r0\n    add r1, r4, #0\n    add r1, #0x98\n    strb r2, [r1]\n    add r1, r4, #0\n    add r1, #0x97\n    ldrb r1, [r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    beq _021EDCD8\n    add r1, r4, #0\n    add r1, #0x99\n    ldrb r2, [r1]\n    add r1, r4, #0\n    add r1, #0x9b\n    ldrb r1, [r1]\n    lsl r1, r1, #1\n    sub r2, r2, r1\n    add r1, r4, #0\n    add r1, #0x99\n    strb r2, [r1]\n    add r1, r4, #0\n    add r1, #0x99\n    ldrb r1, [r1]\n    lsl r0, r0, #0x18\n    add r3, r4, #0\n    str r1, [sp]\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r1, r4, #0\n    add r3, #0x98\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x3d\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    ldrb r3, [r3]\n    ldr r0, [r0, #8]\n    add r1, #8\n    mov r2, #3\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r2, _021EDD60 ; =0x000003D9\n    ldr r0, [r0, #8]\n    mov r1, #3\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    add r0, r4, #0\n    ldr r2, _021EDD60 ; =0x000003D9\n    add r0, #8\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add r0, r4, #0\n    bl ov01_021EDE18\n    add r1, r4, #0\n    add r1, #0x96\n    add r0, r4, #0\n    ldrb r1, [r1]\n    add r0, #0xac\n    mov r2, #4\n    bl Create2dMenu\n    add r1, r4, #0\n    add r1, #0xb8\n    str r0, [r1]\n    ldr r0, _021EDD64 ; =ov01_021EDE8C\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #4]\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _021EDD60: .word 0x000003D9\n    _021EDD64: .word ov01_021EDE8C"
    );
    #endif
}

void ov01_021EDD68(void) {
    /* Original at 0x021EDD68 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    mov r0, #0x50\n    mov r1, #4\n    add r6, r2, #0\n    bl String_New\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    add r1, r7, #0\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    add r1, r5, #0\n    add r1, #0x9b\n    ldrb r1, [r1]\n    add r0, r5, #0\n    add r0, #0x90\n    lsl r1, r1, #2\n    add r1, r5, r1\n    ldr r0, [r0]\n    ldr r1, [r1, #0x1c]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r2, [r0]\n    lsl r0, r2, #2\n    add r0, r5, r0\n    ldr r1, [r0, #0x1c]\n    lsl r0, r2, #3\n    add r0, r5, r0\n    add r0, #0xbc\n    str r1, [r0]\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    lsl r0, r0, #3\n    add r0, r5, r0\n    add r0, #0xc0\n    str r6, [r0]\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r5, #0x9b\n    add r0, r0, #1\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EDDD8(void) {
    /* Original at 0x021EDDD8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    mov r6, #0\n    add r4, r6, #0\n    cmp r0, #0\n    ble _021EDE10\n    add r5, r7, #0\n    add r0, r5, #0\n    add r0, #0xbc\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _021EDE10\n    mov r0, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    cmp r6, r0\n    bhs _021EDE02\n    add r6, r0, #0\n    add r0, r7, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, r0\n    blt _021EDDEA\n    add r6, #0xc\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EDE18(void) {
    /* Original at 0x021EDE18 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r1, r0, #0\n    add r2, #0xbc\n    add r1, #0xac\n    str r2, [r1]\n    add r2, r0, #0\n    add r1, r0, #0\n    add r2, #8\n    add r1, #0xb0\n    str r2, [r1]\n    add r1, r0, #0\n    mov r2, #0\n    add r1, #0xb4\n    strb r2, [r1]\n    add r1, r0, #0\n    mov r2, #1\n    add r1, #0xb5\n    strb r2, [r1]\n    add r1, r0, #0\n    add r1, #0x9b\n    ldrb r2, [r1]\n    add r1, r0, #0\n    add r1, #0xb6\n    strb r2, [r1]\n    add r2, r0, #0\n    add r2, #0xb7\n    ldrb r3, [r2]\n    mov r2, #0xf\n    add r1, r0, #0\n    bic r3, r2\n    add r2, r0, #0\n    add r2, #0xb7\n    strb r3, [r2]\n    add r2, r0, #0\n    add r2, #0xb7\n    ldrb r3, [r2]\n    mov r2, #0x30\n    add r1, #0xb7\n    bic r3, r2\n    add r2, r0, #0\n    add r2, #0xb7\n    strb r3, [r2]\n    add r0, #0x9b\n    ldrb r0, [r0]\n    ldrb r2, [r1]\n    cmp r0, #4\n    blo _021EDE82\n    mov r0, #0xc0\n    bic r2, r0\n    mov r0, #0x40\n    orr r0, r2\n    strb r0, [r1]\n    bx lr\n    mov r0, #0xc0\n    bic r2, r0\n    strb r2, [r1]\n    bx lr"
    );
    #endif
}

void ov01_021EDE8C(void) {
    /* Original at 0x021EDE8C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    add r0, #0x94\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021EDEA8\n    add r0, r4, #0\n    add r0, #0x94\n    ldrb r0, [r0]\n    add r4, #0x94\n    sub r0, r0, #1\n    strb r0, [r4]\n    pop {r4, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021EDEF8\n    add r0, r4, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    bl Handle2dMenuInput\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    beq _021EDECA\n    add r1, r1, #1\n    cmp r0, r1\n    beq _021EDEF8\n    b _021EDEEA\n    add r0, r4, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021EDEF8\n    add r0, r4, #0\n    add r0, #0xa0\n    ldr r1, _021EDEFC ; =0x0000FFFE\n    ldr r0, [r0]\n    strh r1, [r0]\n    add r0, r4, #0\n    bl ov01_021EDF38\n    pop {r4, pc}\n    add r1, r4, #0\n    add r1, #0xa0\n    ldr r1, [r1]\n    strh r0, [r1]\n    add r0, r4, #0\n    bl ov01_021EDF38\n    pop {r4, pc}\n    nop\n    _021EDEFC: .word 0x0000FFFE"
    );
    #endif
}

void ov01_021EDF00(void) {
    /* Original at 0x021EDF00 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x1c]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x1c\n    blt _021EDF08\n    add r0, r6, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021EDF2E\n    add r0, r6, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl DestroyMsgData\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021EDF38(void) {
    /* Original at 0x021EDF38 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EDF74 ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    add r0, r4, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    mov r1, #0\n    bl Delete2dMenu\n    add r0, r4, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    mov r1, #0\n    bl sub_0200E5D4\n    add r0, r4, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    bl RemoveWindow\n    ldr r0, [r4, #4]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl ov01_021EDF00\n    pop {r4, pc}\n    nop\n    _021EDF74: .word SEQ_SE_DP_SELECT"
    );
    #endif
}

void ov01_021EDF78(void) {
    ov01_021EDC28();
}

void MoveTutorMenu_SetListItem(void) {
    MoveTutorMenu_SetListItem_Internal();
}

void ov01_021EDFA4(void) {
    /* Original at 0x021EDFA4 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov01_021EE2E4\n    mov r1, #7\n    tst r1, r0\n    bne _021EDFB6\n    lsr r1, r0, #3\n    b _021EDFBA\n    lsr r0, r0, #3\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    beq _021EDFD4\n    add r0, r4, #0\n    add r0, #0x98\n    ldrb r0, [r0]\n    sub r2, r0, r1\n    add r0, r4, #0\n    add r0, #0x98\n    strb r2, [r0]\n    add r0, r4, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    beq _021EE00A\n    add r0, r4, #0\n    add r0, #0x9b\n    ldrb r3, [r0]\n    cmp r3, #8\n    bls _021EDFFA\n    add r0, r4, #0\n    add r0, #0x99\n    ldrb r2, [r0]\n    add r0, r4, #0\n    add r0, #0x99\n    sub r2, #0x10\n    strb r2, [r0]\n    b _021EE00A\n    add r0, r4, #0\n    add r0, #0x99\n    ldrb r2, [r0]\n    lsl r0, r3, #1\n    sub r2, r2, r0\n    add r0, r4, #0\n    add r0, #0x99\n    strb r2, [r0]\n    add r0, r4, #0\n    bl ov01_021EE01C\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EE014(void) {
    ov01_021EE01C();
}

void ov01_021EE01C(void) {
    /* Original at 0x021EE01C */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r0, #0x9b\n    ldrb r2, [r0]\n    cmp r2, #8\n    bls _021EE05A\n    add r0, r4, #0\n    add r0, #0x99\n    ldrb r0, [r0]\n    add r3, r4, #0\n    add r3, #0x98\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x3d\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, r4, #0\n    ldrb r3, [r3]\n    ldr r0, [r0, #8]\n    add r1, #8\n    mov r2, #3\n    bl AddWindowParameterized\n    b _021EE08A\n    add r0, r4, #0\n    add r0, #0x99\n    ldrb r0, [r0]\n    add r3, r4, #0\n    add r3, #0x98\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    lsl r0, r2, #0x19\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x3d\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    add r1, r4, #0\n    ldrb r3, [r3]\n    ldr r0, [r0, #8]\n    add r1, #8\n    mov r2, #3\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r2, _021EE0E4 ; =0x000003D9\n    ldr r0, [r0, #8]\n    mov r1, #3\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    add r0, r4, #0\n    ldr r2, _021EE0E4 ; =0x000003D9\n    add r0, #8\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add r0, r4, #0\n    bl ov01_021EE324\n    add r2, r4, #0\n    add r2, #0x96\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldrb r2, [r2]\n    add r0, r4, r0\n    mov r1, #0\n    mov r3, #4\n    bl ListMenuInit\n    mov r1, #0x6f\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov01_021EE634\n    ldr r0, _021EE0E8 ; =ov01_021EE49C\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #4]\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _021EE0E4: .word 0x000003D9\n    _021EE0E8: .word ov01_021EE49C"
    );
    #endif
}

void ov01_021EE0EC(void) {
    /* Original at 0x021EE0EC */
    /* Requires manual decompilation - 161 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov01_021EE2E4\n    mov r1, #7\n    tst r1, r0\n    bne _021EE104\n    lsr r1, r0, #3\n    b _021EE108\n    lsr r0, r0, #3\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    beq _021EE122\n    add r0, r5, #0\n    add r0, #0x98\n    ldrb r0, [r0]\n    sub r2, r0, r1\n    add r0, r5, #0\n    add r0, #0x98\n    strb r2, [r0]\n    add r0, r5, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    beq _021EE158\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r3, [r0]\n    cmp r3, #8\n    bls _021EE148\n    add r0, r5, #0\n    add r0, #0x99\n    ldrb r2, [r0]\n    add r0, r5, #0\n    add r0, #0x99\n    sub r2, #0x10\n    strb r2, [r0]\n    b _021EE158\n    add r0, r5, #0\n    add r0, #0x99\n    ldrb r2, [r0]\n    lsl r0, r3, #1\n    sub r2, r2, r0\n    add r0, r5, #0\n    add r0, #0x99\n    strb r2, [r0]\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    cmp r0, #8\n    bls _021EE192\n    add r0, r5, #0\n    add r0, #0x99\n    ldrb r0, [r0]\n    add r3, r5, #0\n    add r3, #0x98\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x3d\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r1, r5, #0\n    ldrb r3, [r3]\n    ldr r0, [r0, #8]\n    add r1, #8\n    mov r2, #3\n    bl AddWindowParameterized\n    b _021EE1C2\n    add r2, r5, #0\n    add r2, #0x99\n    ldrb r2, [r2]\n    lsl r1, r1, #0x18\n    lsl r0, r0, #0x19\n    str r2, [sp]\n    lsr r1, r1, #0x18\n    str r1, [sp, #4]\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x3d\n    add r3, r5, #0\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r3, #0x98\n    add r1, r5, #0\n    ldrb r3, [r3]\n    ldr r0, [r0, #8]\n    add r1, #8\n    mov r2, #3\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    ldr r2, _021EE23C ; =0x000003D9\n    ldr r0, [r0, #8]\n    mov r1, #3\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    add r0, r5, #0\n    ldr r2, _021EE23C ; =0x000003D9\n    add r0, #8\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add r0, r5, #0\n    bl ov01_021EE324\n    add r0, r5, #0\n    add r0, #0xa4\n    str r4, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    str r6, [r0]\n    add r0, r5, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    mov r3, #4\n    ldrh r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    ldrh r0, [r0]\n    add r1, r1, r0\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    strh r1, [r5, r0]\n    mov r0, #0x67\n    lsl r0, r0, #2\n    ldrh r1, [r4]\n    ldrh r2, [r6]\n    add r0, r5, r0\n    bl ListMenuInit\n    mov r1, #0x6f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov01_021EE634\n    ldr r0, _021EE240 ; =ov01_021EE49C\n    add r1, r5, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #4]\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _021EE23C: .word 0x000003D9\n    _021EE240: .word ov01_021EE49C"
    );
    #endif
}

void MoveTutorMenu_SetListItem_Internal(void) {
    /* Original at 0x021EE244 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r1, [sp]\n    mov r0, #0x50\n    mov r1, #4\n    add r7, r2, #0\n    add r4, r3, #0\n    bl String_New\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    ldr r1, [sp]\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    add r1, r5, #0\n    add r1, #0x9b\n    ldrb r1, [r1]\n    add r0, r5, #0\n    add r0, #0x90\n    lsl r1, r1, #2\n    add r1, r5, r1\n    ldr r0, [r0]\n    ldr r1, [r1, #0x1c]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r1, [r0]\n    lsl r0, r1, #2\n    add r0, r5, r0\n    lsl r1, r1, #3\n    add r2, r5, r1\n    mov r1, #0x71\n    ldr r0, [r0, #0x1c]\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    add r0, r6, #0\n    bl String_Delete\n    cmp r4, #0xfa\n    bne _021EE2B4\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    mov r2, #2\n    mvn r2, r2\n    lsl r0, r0, #3\n    add r1, r5, r0\n    mov r0, #0x72\n    lsl r0, r0, #2\n    str r2, [r1, r0]\n    b _021EE2C4\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    lsl r0, r0, #3\n    add r1, r5, r0\n    mov r0, #0x72\n    lsl r0, r0, #2\n    str r4, [r1, r0]\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    lsl r0, r0, #1\n    add r1, r5, r0\n    mov r0, #0xa9\n    lsl r0, r0, #2\n    strh r7, [r1, r0]\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r5, #0x9b\n    add r0, r0, #1\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EE2E4(void) {
    /* Original at 0x021EE2E4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    mov r6, #0\n    add r4, r6, #0\n    cmp r0, #0\n    ble _021EE31C\n    add r5, r7, #0\n    mov r0, #0x71\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    beq _021EE31C\n    mov r0, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    cmp r6, r0\n    bhs _021EE30E\n    add r6, r0, #0\n    add r0, r7, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, r0\n    blt _021EE2F6\n    add r6, #0xc\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EE324(void) {
    /* Original at 0x021EE324 */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r3, #0x71\n    lsl r3, r3, #2\n    add r1, r3, #0\n    add r2, r0, r3\n    sub r1, #0x28\n    str r2, [r0, r1]\n    add r1, r3, #0\n    ldr r2, _021EE420 ; =ov01_021EE458\n    sub r1, #0x24\n    str r2, [r0, r1]\n    add r1, r3, #0\n    ldr r2, _021EE424 ; =ov01_021EE434\n    sub r1, #0x20\n    str r2, [r0, r1]\n    add r2, r0, #0\n    add r1, r3, #0\n    add r2, #8\n    sub r1, #0x1c\n    str r2, [r0, r1]\n    add r1, r0, #0\n    add r1, #0x9b\n    ldrb r2, [r1]\n    add r1, r3, #0\n    sub r1, #0x18\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    mov r2, #8\n    sub r1, #0x16\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    mov r2, #1\n    sub r1, #0x14\n    strb r2, [r0, r1]\n    add r1, r3, #0\n    mov r4, #0xc\n    sub r1, #0x13\n    strb r4, [r0, r1]\n    add r1, r3, #0\n    mov r4, #2\n    sub r1, #0x12\n    strb r4, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0x11\n    ldrb r4, [r0, r1]\n    mov r1, #0xf\n    bic r4, r1\n    orr r4, r2\n    add r2, r3, #0\n    sub r2, #0x11\n    strb r4, [r0, r2]\n    add r2, r3, #0\n    sub r2, #0x11\n    ldrb r5, [r0, r2]\n    mov r2, #0xf0\n    mov r4, #0x10\n    bic r5, r2\n    orr r5, r4\n    add r4, r3, #0\n    sub r4, #0x11\n    strb r5, [r0, r4]\n    add r4, r3, #0\n    sub r4, #0x10\n    ldrb r4, [r0, r4]\n    bic r4, r1\n    mov r1, #0xf\n    orr r4, r1\n    add r1, r3, #0\n    sub r1, #0x10\n    strb r4, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0x10\n    ldrb r4, [r0, r1]\n    mov r1, #0x20\n    bic r4, r2\n    add r2, r4, #0\n    orr r2, r1\n    add r1, r3, #0\n    sub r1, #0x10\n    strb r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0xe\n    ldrh r2, [r0, r1]\n    mov r1, #7\n    bic r2, r1\n    add r1, r3, #0\n    sub r1, #0xe\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0xe\n    ldrh r2, [r0, r1]\n    mov r1, #0x78\n    bic r2, r1\n    add r1, r3, #0\n    sub r1, #0xe\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0xe\n    ldrh r2, [r0, r1]\n    ldr r1, _021EE428 ; =0xFFFFFE7F\n    and r2, r1\n    mov r1, #0x80\n    orr r2, r1\n    add r1, r3, #0\n    sub r1, #0xe\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0xe\n    ldrh r2, [r0, r1]\n    ldr r1, _021EE42C ; =0xFFFF81FF\n    and r2, r1\n    add r1, r3, #0\n    sub r1, #0xe\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0xe\n    ldrh r2, [r0, r1]\n    ldr r1, _021EE430 ; =0xFFFF7FFF\n    and r2, r1\n    add r1, r3, #0\n    sub r1, #0xe\n    strh r2, [r0, r1]\n    sub r3, #0xc\n    str r0, [r0, r3]\n    pop {r4, r5}\n    bx lr\n    _021EE420: .word ov01_021EE458\n    _021EE424: .word ov01_021EE434\n    _021EE428: .word 0xFFFFFE7F\n    _021EE42C: .word 0xFFFF81FF\n    _021EE430: .word 0xFFFF7FFF"
    );
    #endif
}

void ov01_021EE434(void) {
    /* Original at 0x021EE434 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r2, #2\n    mvn r2, r2\n    cmp r1, r2\n    bne _021EE44A\n    mov r1, #3\n    mov r2, #0xf\n    mov r3, #4\n    bl ListMenuOverrideSetColors\n    pop {r3, pc}\n    mov r1, #1\n    mov r2, #0xf\n    mov r3, #2\n    bl ListMenuOverrideSetColors\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021EE458(void) {
    /* Original at 0x021EE458 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    add r1, sp, #0\n    strh r2, [r1, #2]\n    strh r2, [r1]\n    mov r1, #0x13\n    add r5, r0, #0\n    bl ListMenuGetTemplateField\n    add r1, sp, #0\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, #2\n    add r2, sp, #0\n    bl ListMenuGetScrollAndRow\n    add r0, r4, #0\n    add r0, #0xa4\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _021EE49A\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021EE49A\n    add r0, sp, #0\n    ldrh r1, [r0, #2]\n    add r4, #0xa8\n    strh r1, [r2]\n    ldrh r1, [r0]\n    ldr r0, [r4]\n    strh r1, [r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EE49C(void) {
    /* Original at 0x021EE49C */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    add r0, #0x94\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _021EE4B8\n    add r0, r5, #0\n    add r0, #0x94\n    ldrb r0, [r0]\n    add r5, #0x94\n    sub r0, r0, #1\n    strb r0, [r5]\n    pop {r4, r5, r6, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021EE55A\n    mov r0, #0x6f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenu_ProcessInput\n    add r4, r0, #0\n    mov r0, #0x6f\n    mov r1, #0xb7\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldrh r6, [r5, r1]\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    bl ListMenuGetCurrentItemArrayId\n    mov r0, #0xb7\n    lsl r0, r0, #2\n    ldrh r0, [r5, r0]\n    cmp r6, r0\n    beq _021EE4EE\n    ldr r0, _021EE55C ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    ldr r0, _021EE560 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x4c]\n    tst r1, r0\n    bne _021EE50A\n    mov r1, #0x80\n    tst r1, r0\n    bne _021EE50A\n    mov r1, #0x20\n    tst r1, r0\n    bne _021EE50A\n    mov r1, #0x10\n    tst r0, r1\n    beq _021EE510\n    add r0, r5, #0\n    bl ov01_021EE634\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _021EE520\n    add r0, r0, #1\n    cmp r4, r0\n    beq _021EE55A\n    b _021EE546\n    add r0, r5, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021EE55A\n    ldr r0, _021EE55C ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    add r0, r5, #0\n    add r0, #0xa0\n    ldr r1, _021EE564 ; =0x0000FFFE\n    ldr r0, [r0]\n    strh r1, [r0]\n    add r0, r5, #0\n    bl ov01_021EE568\n    pop {r4, r5, r6, pc}\n    ldr r0, _021EE55C ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    add r0, r5, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    strh r4, [r0]\n    add r0, r5, #0\n    bl ov01_021EE568\n    pop {r4, r5, r6, pc}\n    _021EE55C: .word SEQ_SE_DP_SELECT\n    _021EE560: .word gSystem\n    _021EE564: .word 0x0000FFFE"
    );
    #endif
}

void ov01_021EE568(void) {
    /* Original at 0x021EE568 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _021EE5CC ; =SEQ_SE_DP_SELECT\n    bl PlaySE\n    mov r0, #0x6f\n    lsl r0, r0, #2\n    mov r1, #0\n    ldr r0, [r6, r0]\n    add r2, r1, #0\n    bl DestroyListMenu\n    mov r0, #0x6a\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl sub_0200E5D4\n    add r0, r6, #0\n    add r0, #8\n    bl RemoveWindow\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x1c]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x1c\n    blt _021EE598\n    add r0, r6, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021EE5BE\n    add r0, r6, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl DestroyMsgData\n    ldr r0, [r6, #4]\n    bl SysTask_Destroy\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}\n    _021EE5CC: .word SEQ_SE_DP_SELECT"
    );
    #endif
}

void ov01_021EE5D0(void) {
    /* Original at 0x021EE5D0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    str r1, [sp, #0xc]\n    mov r0, #0x5a\n    mov r1, #4\n    add r7, r2, #0\n    bl String_New\n    add r4, r0, #0\n    mov r0, #0x5a\n    mov r1, #4\n    bl String_New\n    add r6, r0, #0\n    ldr r0, [r5, #0x18]\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    ldr r1, [sp, #0xc]\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    add r0, r5, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    mov r3, #0\n    str r3, [sp]\n    str r7, [sp, #4]\n    str r3, [sp, #8]\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    add r2, r6, #0\n    bl AddTextPrinterParameterized\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EE634(void) {
    /* Original at 0x021EE634 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x6f\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #6\n    add r1, r4, r1\n    bl ListMenuGetCurrentItemArrayId\n    ldr r0, _021EE660 ; =0x000001C2\n    ldrh r1, [r4, r0]\n    add r0, #0xe2\n    lsl r1, r1, #1\n    add r1, r4, r1\n    ldrh r1, [r1, r0]\n    cmp r1, #0xff\n    beq _021EE65E\n    add r0, r4, #0\n    mov r2, #0\n    bl ov01_021EE5D0\n    pop {r4, pc}\n    _021EE660: .word 0x000001C2"
    );
    #endif
}

void PrintCurFloorInNewWindow(void) {
    /* Original at 0x021EE664 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    mov r4, #0\n    str r4, [sp]\n    str r3, [sp, #4]\n    ldr r3, [sp, #0x28]\n    add r6, r0, #0\n    str r3, [sp, #8]\n    str r4, [sp, #0xc]\n    add r3, r4, #0\n    str r4, [sp, #0x10]\n    bl ov01_021EDC28\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, r0, #0\n    bl GetFontAttribute\n    lsl r1, r0, #3\n    mov r0, #7\n    tst r0, r1\n    bne _021EE694\n    lsr r4, r1, #3\n    b _021EE698\n    lsr r0, r1, #3\n    add r4, r0, #1\n    add r0, r5, #0\n    add r0, #0x99\n    ldrb r0, [r0]\n    add r3, r5, #0\n    add r1, r5, #0\n    str r0, [sp]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0xdd\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r3, #0x98\n    ldrb r3, [r3]\n    ldr r0, [r0, #8]\n    add r1, #8\n    mov r2, #3\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    ldr r2, _021EE74C ; =0x000003D9\n    ldr r0, [r0, #8]\n    mov r1, #3\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    add r0, r5, #0\n    ldr r2, _021EE74C ; =0x000003D9\n    add r0, #8\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    lsl r0, r4, #0x13\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #0\n    add r0, #8\n    mov r1, #0xf\n    add r3, r2, #0\n    bl FillWindowPixelRect\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #0x10\n    add r3, r2, #0\n    bl ov01_021EE754\n    ldr r0, [r6, #0x20]\n    add r1, sp, #0x18\n    ldrh r1, [r1, #0x14]\n    ldr r0, [r0]\n    add r2, sp, #0x14\n    bl ov01_021EE934\n    add r1, r0, #0\n    add r2, sp, #0x14\n    lsl r1, r1, #0x10\n    ldrb r2, [r2]\n    add r0, r5, #0\n    lsr r1, r1, #0x10\n    mov r3, #0x10\n    bl ov01_021EE754\n    add r0, r5, #0\n    add r1, r5, #0\n    add r0, #8\n    add r1, #0xb0\n    str r0, [r1]\n    bl CopyWindowToVram\n    ldr r0, _021EE750 ; =ov01_021EE7B8\n    add r1, r5, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #4]\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    _021EE74C: .word 0x000003D9\n    _021EE750: .word ov01_021EE7B8"
    );
    #endif
}

void ov01_021EE754(void) {
    /* Original at 0x021EE754 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r1, [sp, #0xc]\n    add r5, r0, #0\n    mov r0, #0x5a\n    mov r1, #4\n    str r2, [sp, #0x10]\n    add r7, r3, #0\n    bl String_New\n    add r4, r0, #0\n    mov r0, #0x5a\n    mov r1, #4\n    bl String_New\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    ldr r1, [sp, #0xc]\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    add r0, r5, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    str r7, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    add r5, #8\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl AddTextPrinterParameterized\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EE7B8(void) {
    /* Original at 0x021EE7B8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r0, r6, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    ldrh r1, [r0]\n    ldr r0, _021EE818 ; =0x0000FFFF\n    cmp r1, r0\n    bne _021EE816\n    add r0, r6, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    mov r1, #0\n    bl sub_0200E5D4\n    add r0, r6, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    bl RemoveWindow\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x1c]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x1c\n    blt _021EE7E4\n    add r0, r6, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _021EE80A\n    add r0, r6, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl DestroyMsgData\n    ldr r0, [r6, #4]\n    bl SysTask_Destroy\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r4, r5, r6, pc}\n    _021EE818: .word 0x0000FFFF"
    );
    #endif
}

void MapNumToFloorNo(void) {
    /* Original at 0x021EE81C */
    /* Requires manual decompilation - 126 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _021EE92C ; =MAP_CELADON_DEPARTMENT_STORE_4F\n    cmp r0, r1\n    bgt _021EE878\n    bge _021EE906\n    cmp r0, #MAP_OLIVINE_LIGHTHOUSE_LIGHT_ROOM\n    bgt _021EE860\n    bge _021EE8D2\n    cmp r0, #MAP_OLIVINE_LIGHTHOUSE_1F\n    bgt _021EE834\n    beq _021EE8CE\n    b _021EE922\n    add r1, r0, #0\n    sub r1, #MAP_GOLDENROD_RADIO_TOWER_5F\n    cmp r1, #0xb\n    bhi _021EE922\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021EE848: ; jump table\n    ldr r1, _021EE930 ; =MAP_CELADON_DEPARTMENT_STORE_2F\n    cmp r0, r1\n    bgt _021EE870\n    bge _021EE8FE\n    sub r1, r1, #MAP_CELADON_DEPARTMENT_STORE_2F-MAP_CELADON_DEPARTMENT_STORE_1F\n    cmp r0, r1\n    beq _021EE8FA\n    b _021EE922\n    add r1, r1, #MAP_CELADON_DEPARTMENT_STORE_3F-MAP_CELADON_DEPARTMENT_STORE_2F\n    cmp r0, r1\n    beq _021EE902\n    b _021EE922\n    add r2, r1, #MAP_CELADON_CONDOMINIUMS_2F-MAP_CELADON_DEPARTMENT_STORE_4F\n    cmp r0, r2\n    bgt _021EE898\n    bge _021EE916\n    add r2, r1, #MAP_CELADON_DEPARTMENT_STORE_ROOF-MAP_CELADON_DEPARTMENT_STORE_4F\n    cmp r0, r2\n    bgt _021EE890\n    bge _021EE90E\n    add r1, r1, #MAP_CELADON_DEPARTMENT_STORE_5F-MAP_CELADON_DEPARTMENT_STORE_4F\n    cmp r0, r1\n    beq _021EE90A\n    b _021EE922\n    add r1, r1, #MAP_CELADON_CONDOMINIUMS_1F-MAP_CELADON_DEPARTMENT_STORE_4F\n    cmp r0, r1\n    beq _021EE912\n    b _021EE922\n    add r2, r1, #0\n    add r2, #MAP_SAFFRON_SILPH_CO_HQ-MAP_CELADON_DEPARTMENT_STORE_4F\n    cmp r0, r2\n    bgt _021EE8BE\n    add r2, r1, #0\n    add r2, #MAP_SAFFRON_SILPH_CO_HQ-MAP_CELADON_DEPARTMENT_STORE_4F\n    cmp r0, r2\n    bge _021EE8D6\n    add r2, r1, #MAP_CELADON_CONDOMINIUMS_ROOF-MAP_CELADON_DEPARTMENT_STORE_4F\n    cmp r0, r2\n    bgt _021EE922\n    add r2, r1, #MAP_CELADON_CONDOMINIUMS_3F-MAP_CELADON_DEPARTMENT_STORE_4F\n    cmp r0, r2\n    blt _021EE922\n    beq _021EE91A\n    add r1, r1, #MAP_CELADON_CONDOMINIUMS_ROOF-MAP_CELADON_DEPARTMENT_STORE_4F\n    cmp r0, r1\n    beq _021EE91E\n    b _021EE922\n    add r1, #MAP_SAFFRON_SILPH_CO_ROTOM_ROOM-MAP_CELADON_DEPARTMENT_STORE_4F\n    cmp r0, r1\n    beq _021EE8DA\n    b _021EE922\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #3\n    pop {r3, pc}\n    mov r0, #4\n    pop {r3, pc}\n    mov r0, #5\n    pop {r3, pc}\n    mov r0, #6\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #3\n    pop {r3, pc}\n    mov r0, #4\n    pop {r3, pc}\n    mov r0, #5\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #3\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _021EE92C: .word MAP_CELADON_DEPARTMENT_STORE_4F\n    _021EE930: .word MAP_CELADON_DEPARTMENT_STORE_2F"
    );
    #endif
}

void ov01_021EE934(void) {
    /* Original at 0x021EE934 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, _021EE970 ; =0x000001B9\n    cmp r0, r4\n    beq _021EE94A\n    add r3, r4, #2\n    cmp r0, r3\n    beq _021EE958\n    add r3, r4, #3\n    cmp r0, r3\n    beq _021EE958\n    b _021EE966\n    cmp r1, #0\n    bne _021EE966\n    mov r0, #0x20\n    strb r0, [r2]\n    mov r0, #0x7a\n    pop {r3, r4}\n    bx lr\n    cmp r1, #3\n    bne _021EE966\n    mov r0, #0x10\n    strb r0, [r2]\n    mov r0, #0x7d\n    pop {r3, r4}\n    bx lr\n    mov r0, #0x20\n    strb r0, [r2]\n    mov r0, #0x11\n    pop {r3, r4}\n    bx lr\n    _021EE970: .word 0x000001B9"
    );
    #endif
}

void ov01_021EE974(void) {
    /* Original at 0x021EE974 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r6, r1, #0\n    bl ov01_021EDDD8\n    mov r1, #7\n    tst r1, r0\n    bne _021EE98A\n    lsr r7, r0, #3\n    b _021EE98E\n    lsr r0, r0, #3\n    add r7, r0, #1\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r1, r6, #0\n    str r0, [sp, #0x14]\n    bl _s32_div_f\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, [sp, #0x14]\n    add r1, r6, #0\n    bl _s32_div_f\n    cmp r1, #0\n    beq _021EE9B2\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    add r0, #0x99\n    ldrb r0, [r0]\n    add r3, r5, #0\n    add r1, r5, #0\n    str r0, [sp]\n    add r0, r7, #0\n    mul r0, r6\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    lsl r0, r4, #0x19\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x3d\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    add r3, #0x98\n    ldrb r3, [r3]\n    ldr r0, [r0, #8]\n    add r1, #8\n    mov r2, #3\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    ldr r2, _021EEA3C ; =0x000003D9\n    ldr r0, [r0, #8]\n    mov r1, #3\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    add r0, r5, #0\n    ldr r2, _021EEA3C ; =0x000003D9\n    add r0, #8\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov01_021EEA44\n    add r1, r5, #0\n    add r1, #0x96\n    add r0, r5, #0\n    ldrb r1, [r1]\n    add r0, #0xac\n    mov r2, #4\n    bl Create2dMenu\n    add r1, r5, #0\n    add r1, #0xb8\n    str r0, [r1]\n    ldr r0, _021EEA40 ; =ov01_021EDE8C\n    add r1, r5, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #4]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EEA3C: .word 0x000003D9\n    _021EEA40: .word ov01_021EDE8C"
    );
    #endif
}

void ov01_021EEA44(void) {
    /* Original at 0x021EEA44 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    add r4, r0, #0\n    add r3, r0, #0\n    add r4, #0xbc\n    add r3, #0xac\n    str r4, [r3]\n    add r4, r0, #0\n    add r3, r0, #0\n    add r4, #8\n    add r3, #0xb0\n    str r4, [r3]\n    add r3, r0, #0\n    mov r4, #0\n    add r3, #0xb4\n    strb r4, [r3]\n    add r3, r0, #0\n    add r3, #0xb5\n    strb r1, [r3]\n    add r1, r0, #0\n    add r1, #0xb6\n    strb r2, [r1]\n    add r1, r0, #0\n    add r1, #0xb7\n    ldrb r2, [r1]\n    mov r1, #0xf\n    bic r2, r1\n    add r1, r0, #0\n    add r1, #0xb7\n    strb r2, [r1]\n    add r1, r0, #0\n    add r1, #0xb7\n    ldrb r2, [r1]\n    mov r1, #0x30\n    add r0, #0xb7\n    bic r2, r1\n    strb r2, [r0]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void FieldSystem_ShowMoneyBox(void) {
    /* Original at 0x021EEA90 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r2, #0\n    mov r0, #4\n    mov r1, #1\n    bl AllocWindows\n    add r4, r0, #0\n    str r6, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    mov r2, #3\n    add r3, r7, #0\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, #8]\n    ldr r2, _021EEB30 ; =0x000003D9\n    mov r1, #3\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    ldr r2, _021EEB30 ; =0x000003D9\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r2, _021EEB34 ; =0x000001B3\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    mov r1, #0x1e\n    add r7, r0, #0\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r6, #0\n    add r3, r1, #0\n    str r1, [sp, #8]\n    bl AddTextPrinterParameterized\n    add r0, r7, #0\n    bl DestroyMsgData\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, #0\n    add r1, r4, #0\n    bl MoneyBoxSys_Update\n    add r0, r4, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EEB30: .word 0x000003D9\n    _021EEB34: .word 0x000001B3"
    );
    #endif
}

void MoneyBoxSys_Delete(void) {
    /* Original at 0x021EEB38 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl sub_0200E5D4\n    add r0, r4, #0\n    mov r1, #1\n    bl WindowArray_Delete\n    pop {r4, pc}"
    );
    #endif
}

void MoneyBoxSys_Update(void) {
    /* Original at 0x021EEB4C */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    add r5, r1, #0\n    mov r0, #0x50\n    str r0, [sp]\n    mov r3, #0x10\n    add r0, r5, #0\n    mov r1, #0xf\n    mov r2, #0\n    str r3, [sp, #4]\n    bl FillWindowPixelRect\n    ldr r2, _021EEBFC ; =0x000001B3\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0xc]\n    mov r0, #4\n    bl MessageFormat_New\n    add r6, r0, #0\n    mov r0, #0x10\n    mov r1, #4\n    bl String_New\n    add r4, r0, #0\n    ldr r0, [sp, #0xc]\n    mov r1, #0x1f\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x10]\n    ldr r0, [r7, #0xc]\n    bl Save_PlayerData_GetProfile\n    bl PlayerProfile_GetMoney\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0\n    mov r3, #6\n    bl BufferIntegerAsString\n    ldr r2, [sp, #0x10]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x50\n    sub r3, r1, r0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    str r1, [sp, #8]\n    bl AddTextPrinterParameterized\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl MessageFormat_Delete\n    ldr r0, [sp, #0xc]\n    bl DestroyMsgData\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EEBFC: .word 0x000001B3"
    );
    #endif
}

void ov01_021EEC00(void) {
    /* Original at 0x021EEC00 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    add r7, r1, #0\n    str r2, [sp, #0x14]\n    add r6, r3, #0\n    mov r0, #4\n    mov r1, #1\n    bl AllocWindows\n    add r4, r0, #0\n    str r6, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x29\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #8]\n    ldr r3, [sp, #0x14]\n    add r1, r4, #0\n    mov r2, #3\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, #8]\n    ldr r2, _021EEC64 ; =0x000003D9\n    mov r1, #3\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    ldr r2, _021EEC64 ; =0x000003D9\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov01_021EEC7C\n    add r0, r4, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EEC64: .word 0x000003D9"
    );
    #endif
}

void ov01_021EEC68(void) {
    /* Original at 0x021EEC68 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl sub_0200E5D4\n    add r0, r4, #0\n    mov r1, #1\n    bl WindowArray_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EEC7C(void) {
    /* Original at 0x021EEC7C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    str r1, [sp, #0xc]\n    add r0, r1, #0\n    mov r1, #0xf\n    add r4, r2, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xbf\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    add r7, r0, #0\n    mov r0, #4\n    bl MessageFormat_New\n    str r0, [sp, #0x10]\n    mov r0, #0x10\n    mov r1, #4\n    bl String_New\n    add r6, r0, #0\n    cmp r4, #0\n    beq _021EECBA\n    cmp r4, #1\n    beq _021EECD2\n    cmp r4, #2\n    b _021EECEE\n    add r0, r7, #0\n    mov r1, #0xc1\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetCoinsAddr\n    bl Coins_GetValue\n    add r2, r0, #0\n    b _021EED04\n    add r0, r7, #0\n    mov r1, #0xdc\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_FrontierData_Get\n    mov r1, #0\n    add r2, r1, #0\n    bl FrontierData_BattlePointAction\n    add r2, r0, #0\n    b _021EED04\n    add r0, r7, #0\n    mov r1, #0xdf\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_Pokeathlon_Get\n    bl PokeathlonSave_GetAthletePoints\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    mov r1, #0\n    mov r3, #5\n    bl BufferIntegerAsString\n    ldr r0, [sp, #0x10]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x50\n    sub r3, r1, r0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    add r2, r6, #0\n    str r1, [sp, #8]\n    bl AddTextPrinterParameterized\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, [sp, #0x10]\n    bl MessageFormat_Delete\n    add r0, r7, #0\n    bl DestroyMsgData\n    ldr r0, [sp, #0xc]\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EED60(void) {
    /* Original at 0x021EED60 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r2, #0\n    mov r0, #4\n    mov r1, #1\n    bl AllocWindows\n    add r4, r0, #0\n    str r6, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    mov r2, #3\n    add r3, r7, #0\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, #8]\n    ldr r2, _021EEE24 ; =0x000003D9\n    mov r1, #3\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    ldr r2, _021EEE24 ; =0x000003D9\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xbf\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    ldr r1, _021EEE28 ; =0x0000014A\n    add r7, r0, #0\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r6, #0\n    add r3, r1, #0\n    str r1, [sp, #8]\n    bl AddTextPrinterParameterized\n    add r0, r6, #0\n    bl String_Delete\n    ldr r1, _021EEE2C ; =0x0000014B\n    add r0, r7, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0xff\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r6, #0\n    add r3, r1, #0\n    str r1, [sp, #8]\n    bl AddTextPrinterParameterized\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl DestroyMsgData\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021EEE44\n    add r0, r4, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _021EEE24: .word 0x000003D9\n    _021EEE28: .word 0x0000014A\n    _021EEE2C: .word 0x0000014B"
    );
    #endif
}

void ov01_021EEE30(void) {
    /* Original at 0x021EEE30 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl sub_0200E5D4\n    add r0, r4, #0\n    mov r1, #1\n    bl WindowArray_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EEE44(void) {
    /* Original at 0x021EEE44 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    mov r3, #0x80\n    add r7, r0, #0\n    add r5, r1, #0\n    str r3, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0xf\n    mov r2, #0\n    bl FillWindowPixelRect\n    mov r0, #0x80\n    str r0, [sp]\n    mov r0, #0x10\n    mov r3, #6\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0xf\n    mov r2, #0\n    lsl r3, r3, #6\n    bl FillWindowPixelRect\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xbf\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    str r0, [sp, #0xc]\n    mov r0, #4\n    bl MessageFormat_New\n    add r6, r0, #0\n    mov r0, #0x10\n    mov r1, #4\n    bl String_New\n    add r4, r0, #0\n    mov r1, #0x53\n    ldr r0, [sp, #0xc]\n    lsl r1, r1, #2\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x10]\n    ldr r0, [r7, #0xc]\n    bl SaveData_GetPhoneCallPersistentState\n    mov r1, #0\n    add r2, r1, #0\n    bl PhoneCallPersistentState_MomSavings_BalanceAction\n    mov r1, #0\n    add r2, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r3, #6\n    bl BufferIntegerAsString\n    ldr r2, [sp, #0x10]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x80\n    sub r3, r1, r0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    str r1, [sp, #8]\n    bl AddTextPrinterParameterized\n    ldr r0, [r7, #0xc]\n    bl Save_PlayerData_GetProfile\n    bl PlayerProfile_GetMoney\n    mov r1, #0\n    add r2, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r3, #6\n    bl BufferIntegerAsString\n    ldr r2, [sp, #0x10]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r4, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    mov r1, #0x80\n    sub r3, r1, r0\n    mov r0, #0x30\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    str r1, [sp, #8]\n    bl AddTextPrinterParameterized\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl MessageFormat_Delete\n    ldr r0, [sp, #0xc]\n    bl DestroyMsgData\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EEF58(void) {
    /* Original at 0x021EEF58 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x71\n    lsl r1, r1, #2\n    add r0, r0, r1\n    bx lr"
    );
    #endif
}

void ov01_021EEF60(void) {
    /* Original at 0x021EEF60 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x9b\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021EEF68(void) {
    /* Original at 0x021EEF68 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #4\n    mov r1, #1\n    bl AllocWindows\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov03_02256730\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021EEF88(void) {
    /* Original at 0x021EEF88 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl sub_0200E5D4\n    add r0, r4, #0\n    mov r1, #1\n    bl WindowArray_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EEF9C(void) {
    /* Original at 0x021EEF9C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0xa9\n    lsl r0, r0, #2\n    add r4, r5, r0\n    lsl r6, r1, #1\n    ldrh r0, [r4, r6]\n    cmp r0, #0xff\n    beq _021EF006\n    mov r0, #0x5a\n    mov r1, #4\n    bl String_New\n    add r7, r0, #0\n    mov r0, #0x5a\n    mov r1, #4\n    bl String_New\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x18]\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x8c\n    ldrh r1, [r4, r6]\n    ldr r0, [r0]\n    add r2, r7, #0\n    bl ReadMsgDataIntoString\n    add r0, r5, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    ldr r1, [sp, #0xc]\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    ldr r0, [r5, #0x18]\n    ldr r2, [sp, #0xc]\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add r0, r7, #0\n    bl String_Delete\n    ldr r0, [sp, #0xc]\n    bl String_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EF00C(void) {
    /* Original at 0x021EF00C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bx lr"
    );
    #endif
}

void ov01_021EF018(void) {
    /* Original at 0x021EF018 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x97\n    ldrb r3, [r2]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r2, #0x40\n    lsl r1, r1, #0x1f\n    bic r3, r2\n    lsr r1, r1, #0x19\n    orr r1, r3\n    add r0, #0x97\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_021EF034(void) {
    /* Original at 0x021EF034 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x97\n    ldrb r3, [r2]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r2, #0x80\n    lsl r1, r1, #0x1f\n    bic r3, r2\n    lsr r1, r1, #0x18\n    orr r1, r3\n    add r0, #0x97\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}
