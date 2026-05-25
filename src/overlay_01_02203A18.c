/* Decompiled from asm/overlay_01_02203A18.s */
#include "global.h"

void ov01_02203A18(void) {
    /* Original at 0x02203A18 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    mov r1, #8\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r5, [r4]\n    mov r1, #0\n    str r1, [r4, #4]\n    bl ov01_02203B28\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_02203A38(void) {
    ov01_02203B70();
    ov01_021F1448(r4);
}

void ov01_02203A48(void) {
    /* Original at 0x02203A48 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_021F146C\n    add r6, r0, #0\n    mov r1, #0x12\n    str r6, [sp, #0x20]\n    bl ov01_021F1450\n    str r0, [sp, #0x24]\n    str r5, [sp, #0x28]\n    ldr r1, [r0, #4]\n    cmp r1, #0\n    beq _02203A6E\n    add sp, #0x2c\n    mov r0, #0\n    pop {r3, r4, r5, r6, pc}\n    mov r1, #1\n    str r1, [r0, #4]\n    add r0, r5, #0\n    add r1, sp, #0x14\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    add r1, sp, #8\n    bl MapObject_CopyFacingVector\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, sp, #0x14\n    add r1, sp, #8\n    add r2, r0, #0\n    bl VEC_Add\n    add r0, r5, #0\n    bl MapObject_GetPriority\n    add r1, r0, #1\n    add r0, sp, #0x20\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r1, _02203AB0 ; =ov01_02209518\n    add r0, r6, #0\n    add r2, sp, #0x14\n    add r3, r4, #0\n    bl ov01_021F1620\n    add sp, #0x2c\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02203AB0: .word ov01_02209518"
    );
    #endif
}

void ov01_02203AB4(void) {
    /* Original at 0x02203AB4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #4\n    mov r1, #8\n    add r6, r2, #0\n    bl Heap_AllocAtEnd\n    add r2, r0, #0\n    str r6, [r2]\n    str r4, [r2, #4]\n    ldr r0, [r5, #0x10]\n    ldr r1, _02203AD4 ; =ov01_02203AD8\n    bl TaskManager_Call\n    pop {r4, r5, r6, pc}\n    _02203AD4: .word ov01_02203AD8"
    );
    #endif
}

void ov01_02203AD8(void) {
    /* Original at 0x02203AD8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl TaskManager_GetStatePtr\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02203AF6\n    cmp r0, #1\n    beq _02203B06\n    b _02203B22\n    ldr r0, [r4, #4]\n    ldr r1, [r4]\n    bl ov01_02203A48\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02203B22\n    ldr r0, [r4, #4]\n    bl ov01_021F146C\n    mov r1, #0x12\n    bl ov01_021F1450\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    bne _02203B22\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_02203B28(void) {
    /* Original at 0x02203B28 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0xc\n    mov r2, #0x82\n    bl ov01_021F18D4\n    ldr r0, [r4]\n    mov r1, #0xc\n    mov r2, #0x8c\n    bl ov01_021F1908\n    ldr r0, [r4]\n    mov r1, #0xd\n    mov r2, #0x1c\n    mov r3, #1\n    bl ov01_021F1930\n    mov r0, #0xd\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _02203B6C ; =ov01_0220952C\n    mov r2, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    mov r1, #0xe\n    add r3, r2, #0\n    bl ov01_021F1758\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _02203B6C: .word ov01_0220952C"
    );
    #endif
}

void ov01_02203B70(void) {
    /* Original at 0x02203B70 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #0xc\n    bl ov01_021F18FC\n    ldr r0, [r4]\n    mov r1, #0xc\n    bl ov01_021F1924\n    ldr r0, [r4]\n    mov r1, #0xd\n    bl ov01_021F1970\n    ldr r0, [r4]\n    mov r1, #0xe\n    bl ov01_021F18C8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_02203B98(void) {
    ov01_021F1740(0xe, r1);
    sub_02023F90();
    NNS_G3dMdlSetMdlFogEnableFlagAll(0);
}

void ov01_02203BB4(void) {
    /* Original at 0x02203BB4 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r4, r1, #0\n    bl sub_02068D98\n    add r3, r0, #0\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x30\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r4, #0x38]\n    bl MapObject_GetID\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x38]\n    bl MapObject_GetMapID\n    str r0, [r4, #0xc]\n    mov r0, #6\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x28]\n    add r0, r6, #0\n    bl sub_02068D90\n    lsl r5, r0, #3\n    ldr r1, _02203C94 ; =ov01_02209544\n    ldr r0, [r4, #0x30]\n    ldr r1, [r1, r5]\n    mov r2, #1\n    bl ov01_021F14B4\n    ldr r1, _02203C98 ; =ov01_02209544 + 4\n    str r0, [r4, #0x58]\n    ldr r0, [r4, #0x30]\n    ldr r1, [r1, r5]\n    mov r2, #1\n    bl ov01_021F14B4\n    add r1, r4, #0\n    str r0, [r4, #0x54]\n    add r1, #0x40\n    bl sub_02026E18\n    ldr r0, [r4, #0x58]\n    bl NNS_G3dGetTex\n    str r0, [r4, #0x50]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x64\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x66\n    strh r1, [r0]\n    ldr r0, [r4, #0x30]\n    mov r1, #0xd\n    bl ov01_021F1AD4\n    add r5, r0, #0\n    mov r1, #0\n    bl sub_020209AC\n    str r0, [r4, #0x60]\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02020910\n    str r0, [r4, #0x5c]\n    ldr r0, [r4, #0x50]\n    mov r1, #0\n    bl sub_02020838\n    add r2, r0, #0\n    ldr r1, [r4, #0x5c]\n    ldr r3, [r4, #0x60]\n    mov r0, #0\n    bl GF_CreateNewVramTransferTask\n    ldr r0, [r5, #0x2c]\n    mov r1, #0\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0xd\n    ldr r0, [r4, #0x50]\n    bl sub_02020888\n    add r2, r0, #0\n    mov r0, #1\n    add r1, r5, #0\n    mov r3, #0x20\n    bl GF_CreateNewVramTransferTask\n    add r0, r6, #0\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x30]\n    add r1, sp, #0\n    bl ov01_02203B98\n    mov r1, #0\n    str r0, [r4, #0x3c]\n    bl sub_02023EA4\n    ldr r0, _02203C9C ; =SEQ_SE_DP_DECIDE\n    bl PlaySE\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _02203C94: .word ov01_02209544\n    _02203C98: .word ov01_02209544 + 4\n    _02203C9C: .word SEQ_SE_DP_DECIDE"
    );
    #endif
}

void ov01_02203CA0(void) {
    /* Original at 0x02203CA0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #0x3c]\n    bl sub_02023DA4\n    ldr r0, [r4, #0x54]\n    bl Heap_Free\n    ldr r0, [r4, #0x58]\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov01_02203CB8(void) {
    /* Original at 0x02203CB8 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x3c\n    add r4, r1, #0\n    ldr r5, [r4, #0x38]\n    ldr r1, [r4, #8]\n    add r6, r0, #0\n    ldr r2, [r4, #0xc]\n    add r0, r5, #0\n    bl sub_0205F0A8\n    cmp r0, #0\n    bne _02203CD4\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, sp, #0x24\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    add r1, sp, #0x18\n    bl MapObject_CopyFacingVector\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl sub_0205F990\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_0205F9B0\n    ldr r3, [sp, #0x24]\n    ldr r2, [sp, #0x18]\n    ldr r0, [sp, #0xc]\n    add r2, r3, r2\n    add r0, r0, r2\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r0, r1, r0\n    str r0, [sp, #0x30]\n    ldr r1, [sp, #0x28]\n    ldr r0, [sp, #0x10]\n    ldr r3, [sp, #8]\n    add r0, r1, r0\n    add r5, r2, r0\n    ldr r1, [sp, #0x2c]\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r1, r0\n    mov r1, #2\n    add r0, r2, r0\n    lsl r1, r1, #0x10\n    add r0, r3, r0\n    add r2, r5, r1\n    str r5, [sp, #0x34]\n    lsr r1, r1, #5\n    str r0, [sp, #0x38]\n    add r0, r0, r1\n    str r2, [sp, #0x34]\n    str r0, [sp, #0x38]\n    ldr r0, [r4]\n    cmp r0, #3\n    bhi _02203DB4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02203D40: ; jump table\n    ldr r0, [r4, #0x3c]\n    mov r1, #1\n    bl sub_02023EA4\n    ldr r1, [r4, #0x1c]\n    ldr r0, [r4, #0x28]\n    add r0, r1, r0\n    str r0, [r4, #0x1c]\n    cmp r0, #0\n    ble _02203D68\n    mov r0, #2\n    ldr r1, [r4, #0x28]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [r4, #0x28]\n    b _02203DB4\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    str r0, [r4, #0x28]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02203DB4\n    add r0, r4, #0\n    add r0, #0x40\n    bl ov01_02203DF8\n    cmp r0, #0\n    beq _02203DB4\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02203DB4\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    cmp r0, #2\n    blt _02203DB4\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r0, #1\n    str r0, [r4, #0x14]\n    b _02203DB4\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    str r1, [r0, #4]\n    add r0, r6, #0\n    bl ov01_021F1640\n    add sp, #0x3c\n    pop {r3, r4, r5, r6, pc}\n    add r0, r6, #0\n    add r1, sp, #0x30\n    bl sub_02068DA8\n    add sp, #0x3c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_02203DC0(void) {
    /* Original at 0x02203DC0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r1, [r4, #0x10]\n    cmp r1, #1\n    beq _02203DF2\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r1, [sp]\n    ldr r0, [r4, #0x18]\n    add r0, r1, r0\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    ldr r0, [r4, #0x1c]\n    add r0, r1, r0\n    str r0, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r0, [r4, #0x20]\n    add r0, r1, r0\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl sub_02023E50\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_02203DF8(void) {
    /* Original at 0x02203DF8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #0x24]\n    add r0, r0, #1\n    strh r0, [r4, #0x24]\n    ldrh r1, [r4, #0x26]\n    ldr r2, [r4]\n    ldrh r3, [r4, #0x24]\n    lsl r0, r1, #1\n    ldrh r0, [r2, r0]\n    cmp r3, r0\n    blo _02203E3A\n    add r0, r1, #1\n    strh r0, [r4, #0x26]\n    mov r0, #0\n    strh r0, [r4, #0x24]\n    ldrh r2, [r4, #0x26]\n    ldr r0, [r4, #0xc]\n    cmp r2, r0\n    blo _02203E24\n    mov r0, #1\n    pop {r4, pc}\n    ldr r1, [r4, #4]\n    ldr r0, [r4, #0x10]\n    ldrb r1, [r1, r2]\n    bl sub_02020838\n    add r2, r0, #0\n    ldr r1, [r4, #0x1c]\n    ldr r3, [r4, #0x20]\n    mov r0, #0\n    bl GF_CreateNewVramTransferTask\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}
