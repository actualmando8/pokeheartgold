/* Decompiled from asm/overlay_01_021F8D80.s */
#include "global.h"

void ov01_021F8D80(void) {
    /* Original at 0x021F8D80 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    str r1, [sp]\n    add r4, r2, #0\n    add r6, r3, #0\n    bl ov01_021F9344\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl MapObject_CheckFlag4\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov01_02205564\n    ldrb r1, [r4, #0x17]\n    lsl r1, r1, #0x1d\n    lsr r1, r1, #0x1f\n    beq _021F8DBA\n    add r0, r5, #0\n    add r1, sp, #8\n    bl MapObject_CopyFacingVector\n    mov r0, #0x14\n    ldrsb r0, [r4, r0]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    b _021F8DFC\n    ldr r1, [sp, #4]\n    cmp r1, #0\n    bne _021F8DC8\n    cmp r7, #0\n    bne _021F8DC8\n    cmp r0, #0\n    beq _021F8DD8\n    add r0, r5, #0\n    add r1, sp, #8\n    bl MapObject_CopyFacingVector\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0x10]\n    b _021F8DE0\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x28]\n    cmp r0, #0\n    beq _021F8DF0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, sp, #8\n    bl ov01_021F8E70\n    add r0, r5, #0\n    bl ov01_022054E0\n    ldr r1, [sp, #0xc]\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    mov r0, #0x10\n    ldrsb r0, [r4, r0]\n    cmp r6, r0\n    beq _021F8E1E\n    add r0, r6, #0\n    bl ov01_021FA44C\n    add r1, r0, #0\n    ldr r0, [sp]\n    bl sub_02023EE0\n    ldr r0, [sp]\n    mov r1, #0\n    bl sub_02023F40\n    mov r0, #0\n    strb r0, [r4, #0x15]\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bne _021F8E56\n    cmp r7, #0\n    bne _021F8E56\n    mov r1, #1\n    ldr r0, [sp]\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    lsl r0, r6, #0x18\n    ldr r2, [sp]\n    lsr r0, r0, #0x18\n    add r1, r5, #0\n    bl ov01_021F8FC0\n    cmp r0, #0\n    beq _021F8E52\n    mov r0, #2\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [sp, #0xc]\n    mov r0, #1\n    strb r0, [r4, #0x15]\n    b _021F8E56\n    mov r0, #0\n    strb r0, [r4, #0x15]\n    cmp r7, #0\n    beq _021F8E64\n    mov r1, #1\n    ldr r0, [sp]\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    add r0, r5, #0\n    add r1, sp, #8\n    bl MapObject_SetFacingVector\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F8E70(void) {
    /* Original at 0x021F8E70 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r6, r0, #0\n    add r1, sp, #0\n    add r4, r2, #0\n    bl MapObject_CopyFacingVector\n    add r0, r6, #0\n    bl MapObject_GetSpriteID\n    bl ov01_021FA298\n    cmp r0, #0xa\n    bne _021F8EDE\n    cmp r5, #3\n    bhi _021F8F02\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F8E9E: ; jump table\n    mov r0, #1\n    ldr r1, [r4, #8]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    add sp, #0xc\n    str r0, [r4, #8]\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #1\n    ldr r1, [r4, #8]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    add sp, #0xc\n    str r0, [r4, #8]\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0xa\n    ldr r1, [r4]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    add sp, #0xc\n    str r0, [r4]\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0xa\n    ldr r1, [r4]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    add sp, #0xc\n    str r0, [r4]\n    pop {r3, r4, r5, r6, pc}\n    cmp r5, #2\n    beq _021F8EEA\n    cmp r5, #3\n    beq _021F8EF8\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #2\n    ldr r1, [r4]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    add sp, #0xc\n    str r0, [r4]\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #2\n    ldr r1, [r4]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [r4]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F8F08(void) {
    /* Original at 0x021F8F08 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r5, r1, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    cmp r5, #0\n    beq _021F8F54\n    add r1, sp, #0\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldrb r1, [r4, #0x17]\n    mov r0, #4\n    orr r0, r1\n    strb r0, [r4, #0x17]\n    add r0, r6, #0\n    bl MapObject_GetFacingDirection\n    add r1, sp, #0\n    bl ov01_021FD9CC\n    ldr r1, [sp]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    strb r0, [r4, #0x12]\n    ldr r1, [sp, #8]\n    add sp, #0xc\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    strb r0, [r4, #0x13]\n    pop {r3, r4, r5, r6, pc}\n    ldrb r1, [r4, #0x17]\n    mov r0, #4\n    bic r1, r0\n    strb r1, [r4, #0x17]\n    mov r0, #0\n    strb r0, [r4, #0x12]\n    strb r0, [r4, #0x13]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F8F68(void) {
    sub_0205F40C();
}

void ov01_021F8F74(void) {
    sub_0205F40C(0x14);
}

void ov01_021F8F88(void) {
    sub_0205F40C(0, 1);
}

void ov01_021F8FA0(void) {
    sub_0205F40C(0, 0x12, 0x13);
}

void ov01_021F8FC0(void) {
    /* Original at 0x021F8FC0 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r2, #0\n    add r6, r1, #0\n    bl sub_02023F30\n    asr r1, r0, #0xb\n    lsr r1, r1, #0x14\n    add r1, r0, r1\n    asr r4, r1, #0xc\n    cmp r5, #3\n    bhi _021F8FF6\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F8FE4: ; jump table\n    sub r4, #0x14\n    b _021F8FF6\n    sub r4, #0x28\n    b _021F8FF6\n    sub r4, #0x3c\n    add r0, r6, #0\n    bl ov01_022055B0\n    cmp r0, #0\n    beq _021F9018\n    cmp r5, #1\n    bne _021F9010\n    cmp r4, #5\n    blt _021F900C\n    cmp r4, #0xf\n    blt _021F9028\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    cmp r4, #0xa\n    bge _021F9028\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    cmp r4, #5\n    blt _021F9020\n    cmp r4, #0xa\n    blt _021F9024\n    cmp r4, #0xf\n    blt _021F9028\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F902C(void) {
    sub_0205F40C(r1);
    ov01_02205808(r5, r4, r0);
}

void ov01_021F9048(void) {
    sub_0205F40C();
}

void ov01_021F9058(void) {
    /* Original at 0x021F9058 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov01_021F9140\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_0205F9A0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021F9078(void) {
    /* Original at 0x021F9078 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r7, r0, #0\n    add r0, r5, #0\n    ldr r4, [r7]\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F90C0\n    cmp r4, #0\n    beq _021F90C0\n    add r0, r5, #0\n    bl sub_0205F330\n    add r3, r0, #0\n    lsl r6, r3, #2\n    ldr r3, _021F90C4 ; =ov01_02208B5C\n    add r0, r5, #0\n    ldr r3, [r3, r6]\n    add r1, r4, #0\n    add r2, r7, #0\n    blx r3\n    add r0, r5, #0\n    bl sub_0205F330\n    str r0, [r7, #0x10]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021FA3E8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F91A4\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F90C4: .word ov01_02208B5C"
    );
    #endif
}

void ov01_021F90C8(void) {
    ov01_021F91E4();
}

void ov01_021F90D0(void) {
    /* Original at 0x021F90D0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021F90E6\n    add r1, r4, #4\n    bl ov01_021F9610\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F95A8\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F90FC(void) {
    /* Original at 0x021F90FC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F40C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov01_021FA2D4\n    cmp r0, #1\n    beq _021F913C\n    ldr r0, [r4]\n    cmp r0, #0\n    bne _021F911E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F9510\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _021F913C\n    add r1, r4, #4\n    bl ov01_021F9630\n    ldr r1, [r4]\n    add r0, r5, #0\n    bl ov01_021FA3E8\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0x14\n    bl MapObject_ClearFlagsBits\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9140(void) {
    sub_0205F3E8(0x14);
    ov01_021F9510(r4, r0);
}

void ov01_021F9154(void) {
    /* Original at 0x021F9154 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, [r2, #0x10]\n    add r4, r1, #0\n    cmp r0, #0\n    beq _021F916E\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F917C(void) {
    /* Original at 0x021F917C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, [r2, #0x10]\n    add r4, r1, #0\n    cmp r0, #1\n    beq _021F9196\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_02023EE0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02023F40\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl sub_02023F04\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F91A4(void) {
    /* Original at 0x021F91A4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #1\n    add r6, r1, #0\n    lsl r1, r4, #9\n    add r5, r0, #0\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021F91B8\n    mov r4, #0\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021F91D6\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl MapObject_TestFlagsBits\n    cmp r0, #0\n    bne _021F91D6\n    mov r4, #0\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    bl sub_02023EA4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F91E4(void) {
    sub_0205F40C();
    ov01_021F95A8(r4, r0);
}

void ov01_021F91F8(void) {
    /* Original at 0x021F91F8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r1, #0\n    mov r1, #1\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl MapObjectManager_GetFlagsBitsMask\n    cmp r0, #0\n    beq _021F9212\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl FldObjSys_OpenMModelNarc\n    add r0, r5, #0\n    bl MapObjectManager_GetObjectCount\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl MapObjectManager_GetPriority\n    sub r0, r0, #1\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl sub_0205F1A0\n    str r4, [sp]\n    str r6, [sp, #4]\n    ldr r1, [sp, #0x30]\n    str r7, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    add r1, r5, #0\n    bl ov01_021F944C\n    add r0, r5, #0\n    mov r1, #1\n    bl MapObjectManager_SetFlagsBits\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F9250(void) {
    /* Original at 0x021F9250 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0205F5D4\n    cmp r0, #1\n    beq _021F9260\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl sub_0205F1A0\n    bl ov01_021F94A0\n    add r0, r4, #0\n    mov r1, #1\n    bl MapObjectManager_ClearFlagsBits\n    add r0, r4, #0\n    bl FldObjSys_CloseMModelNarc\n    pop {r4, pc}"
    );
    #endif
}

void FldObjSys_OpenMModelNarc(void) {
    NARC_New(0x51, 4);
    MapObjectManager_SetMapModelNarc(r4, r0);
}

void FldObjSys_CloseMModelNarc(void) {
    MapObjectManager_GetMapModelNarc();
    NARC_Delete();
}

void ov01_021F92A0(void) {
    /* Original at 0x021F92A0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl MapObject_GetManager\n    mov r1, #4\n    bl MapObjectManager_GetFlagsBitsMask\n    cmp r0, #0\n    bne _021F92DA\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xe\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _021F92DA\n    add r0, r4, #0\n    bl MapObject_CheckMovementPaused\n    cmp r0, #0\n    beq _021F92D4\n    add r0, r4, #0\n    bl MapObject_CheckFlag4\n    cmp r0, #0\n    beq _021F92DA\n    add r0, r4, #0\n    bl sub_0205F484\n    pop {r4, pc}"
    );
    #endif
}

void ObjectEvent_GetGraphicsInfo(void) {
    /* Original at 0x021F92DC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _021F92FC ; =ov01_022074A8\n    ldr r1, _021F9300 ; =0x0000FFFF\n    ldrh r2, [r3]\n    cmp r2, r0\n    bne _021F92EC\n    add r0, r3, #0\n    pop {r3, pc}\n    add r3, r3, #6\n    ldrh r2, [r3]\n    cmp r2, r1\n    bne _021F92E2\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    _021F92FC: .word ov01_022074A8\n    _021F9300: .word 0x0000FFFF"
    );
    #endif
}

void GetMoveModelNoBySpriteId(void) {
    ObjectEvent_GetGraphicsInfo(0);
}

void ov01_021F9318(void) {
    MapObject_GetSpriteID();
    ov01_021F9324();
}

void ov01_021F9324(void) {
    ObjectEvent_GetGraphicsInfo(0);
}

void ov01_021F9344(void) {
    /* Original at 0x021F9344 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl MapObject_CheckMovementPaused\n    cmp r0, #1\n    bne _021F935E\n    add r0, r4, #0\n    bl MapObject_CheckFlag4\n    cmp r0, #0\n    bne _021F935E\n    mov r0, #1\n    pop {r4, pc}\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #8\n    bl MapObject_GetFlagsBitsMask\n    cmp r0, #0\n    beq _021F9370\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ReadMModelFromNarcInternal(void) {
    /* Original at 0x021F9374 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r2, #0\n    bl MapObjectManager_GetMapModelNarc\n    add r1, r4, #0\n    add r6, r0, #0\n    bl NARC_GetMemberSize\n    add r1, r0, #0\n    cmp r5, #1\n    bne _021F9394\n    mov r0, #4\n    bl Heap_Alloc\n    b _021F939A\n    mov r0, #4\n    bl Heap_AllocAtEnd\n    add r5, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl NARC_ReadWholeMember\n    add r0, r5, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F93AC(void) {
    /* Original at 0x021F93AC */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x30\n    add r4, r1, #0\n    add r5, r0, #0\n    add r1, sp, #0x24\n    bl MapObject_CopyPositionVector\n    add r0, r5, #0\n    add r1, sp, #0x18\n    bl MapObject_CopyFacingVector\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl sub_0205F990\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_0205F9B0\n    ldr r1, [sp, #0x24]\n    ldr r0, [sp, #0x18]\n    ldr r2, [sp, #0xc]\n    add r0, r1, r0\n    ldr r3, [sp]\n    add r0, r2, r0\n    add r0, r3, r0\n    str r0, [r4]\n    ldr r1, [sp, #0x28]\n    ldr r0, [sp, #0x1c]\n    ldr r2, [sp, #0x10]\n    add r0, r1, r0\n    ldr r3, [sp, #4]\n    add r0, r2, r0\n    add r0, r3, r0\n    str r0, [r4, #4]\n    ldr r1, [sp, #0x2c]\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x14]\n    add r0, r1, r0\n    ldr r3, [sp, #8]\n    add r0, r2, r0\n    add r0, r3, r0\n    str r0, [r4, #8]\n    add sp, #0x30\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F9408(void) {
    /* Original at 0x021F9408 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl MapObject_SetFacingDirection\n    add r0, r4, #0\n    bl MapObject_CheckFlag14\n    cmp r0, #1\n    bne _021F9420\n    add r0, r4, #0\n    bl sub_0205F484\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F9424(void) {
    /* Original at 0x021F9424 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #1\n    add r4, r0, #0\n    bl MapObject_SetVisible\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0x14\n    bl MapObject_SetFlagsBits\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F943C(void) {
    /* Original at 0x021F943C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021F9440(void) {
    /* Original at 0x021F9440 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021F9444(void) {
    /* Original at 0x021F9444 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021F9448(void) {
    /* Original at 0x021F9448 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}
