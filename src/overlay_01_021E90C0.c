/* Decompiled from asm/overlay_01_021E90C0.s */
#include "global.h"

void ov01_021E90C0(void) {
    Heap_AllocAtEnd(4, 0, 0x20);
}

void ov01_021E90D4(void) {
    Heap_Free();
}

void ov01_021E90DC(void) {
    ((u32*)r2)[4] = r0;
    ((u32*)r2)[8] = r1;
}

void ov01_021E90E4(void) {
    /* Original at 0x021E90E4 */
    /* Requires manual decompilation - 279 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x58\n    add r4, r1, #0\n    add r6, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0x64\n    bgt _021E9112\n    blt _021E90F6\n    b _021E9308\n    cmp r0, #5\n    bhi _021E9118\n    add r1, r0, r0\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E9106: ; jump table\n    cmp r0, #0x65\n    bne _021E9118\n    b _021E9336\n    b _021E934C\n    mov r0, #0\n    str r0, [r4, #0x10]\n    strb r0, [r4, #0xd]\n    mov r0, #3\n    str r0, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    add r0, sp, #0x48\n    str r0, [sp, #8]\n    sub r2, r2, #2\n    ldr r0, [r4, #4]\n    ldr r1, [r4, #8]\n    add r3, r2, #0\n    bl sub_02054A60\n    mov r0, #1\n    strb r0, [r4, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    ldr r0, [r6, #0x34]\n    bl ov01_021FB904\n    str r0, [sp, #0x1c]\n    mov r0, #0\n    mov r1, #4\n    str r0, [sp]\n    add r0, r6, #0\n    add r2, r1, #0\n    add r3, sp, #0x48\n    bl sub_02054D10\n    str r0, [sp, #0x18]\n    mov r7, #0\n    add r5, r0, #0\n    ldr r1, [r5]\n    cmp r1, #0\n    beq _021E9190\n    ldr r0, [sp, #0x1c]\n    add r2, sp, #0x30\n    bl NARC_ReadWholeMember\n    add r0, sp, #0x2c\n    ldrb r0, [r0, #8]\n    cmp r0, #0\n    beq _021E9190\n    ldr r1, [sp, #0x18]\n    lsl r5, r7, #2\n    ldr r1, [r1, r5]\n    add r0, r6, #0\n    add r2, sp, #0x48\n    add r3, sp, #0x2c\n    bl sub_02054AE4\n    mov r0, #1\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x18]\n    ldr r0, [r0, r5]\n    str r0, [sp, #0x20]\n    b _021E9198\n    add r7, r7, #1\n    add r5, r5, #4\n    cmp r7, #4\n    blt _021E915E\n    ldr r0, [sp, #0x18]\n    bl Heap_Free\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    beq _021E91F4\n    ldr r0, [r6, #0x54]\n    ldr r1, [sp, #0x20]\n    bl ov01_021E8BAC\n    add r7, r0, #0\n    bne _021E91B6\n    add sp, #0x58\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r6, #0x34]\n    bl ov01_021FB9E0\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    bl ov01_021F3B38\n    add r5, r0, #0\n    ldr r0, [sp, #0x2c]\n    bl ov01_021F3B3C\n    str r5, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    mov r2, #1\n    str r0, [sp, #8]\n    str r7, [sp, #0xc]\n    str r2, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    ldr r3, [sp, #0x20]\n    bl ov01_021E8DE8\n    mov r1, #1\n    ldr r0, [r6, #0x58]\n    add r2, r1, #0\n    bl ov01_021E90B0\n    b _021E91FA\n    add sp, #0x58\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x20]\n    bl ov01_021E9700\n    strh r0, [r4, #0x1e]\n    ldrh r1, [r4, #0x1e]\n    ldr r0, _021E9368 ; =0x0000FFFF\n    cmp r1, r0\n    beq _021E9210\n    mov r0, #0x64\n    str r0, [r4]\n    b _021E934C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E934C\n    ldr r0, [r6, #0x58]\n    mov r1, #1\n    bl ov01_021E8F30\n    add r5, r0, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov01_021EA1F4\n    cmp r0, #0\n    bne _021E9238\n    ldr r0, [r6, #0x24]\n    bl Camera_ClearFixedTarget\n    mov r0, #1\n    str r0, [r4, #0x10]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl GetDoorSE\n    add r3, r0, #0\n    ldr r0, [r6, #0x58]\n    mov r1, #1\n    mov r2, #0\n    bl ov01_021E8E98\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E934C\n    ldr r0, [r6, #0x58]\n    mov r1, #1\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _021E934C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E934C\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    mov r1, #0xc\n    add r5, r0, #0\n    bl MapObject_SetHeldMovement\n    add r0, r6, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _021E92A8\n    add r0, r6, #0\n    bl ov01_022057C4\n    cmp r0, #0\n    bne _021E92A8\n    add r0, r5, #0\n    bl MapObject_GetPreviousXCoord\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPreviousZCoord\n    add r3, r6, #0\n    add r2, r0, #0\n    mov r0, #0xc\n    add r1, r7, #0\n    add r3, #0xe4\n    bl ov01_02205990\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E934C\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    bne _021E934C\n    add r0, r6, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _021E92EE\n    add r0, r6, #0\n    bl FollowMon_GetMapObject\n    add r7, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    bne _021E934C\n    add r0, r5, #0\n    bl MapObject_ClearHeldMovementIfActive\n    add r0, r7, #0\n    bl MapObject_ClearHeldMovementIfActive\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E934C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E934C\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    mov r1, #1\n    bl MapObject_SetVisible\n    add sp, #0x58\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x96\n    ldr r1, _021E936C ; =0x00456000\n    ldr r2, [r6, #0x24]\n    lsl r0, r0, #0xc\n    bl Camera_SetPerspectiveClippingPlane\n    ldr r1, [r6, #0x24]\n    mov r0, #4\n    bl CreateCameraTranslationWrapper\n    str r0, [r4, #0x18]\n    ldrh r2, [r4, #0x1e]\n    mov r1, #0x14\n    ldr r3, _021E9370 ; =ov01_02206428\n    mul r1, r2\n    add r1, r3, r1\n    mov r2, #0x18\n    bl SetCameraTranslationPath\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E934C\n    ldr r0, [r4, #0x18]\n    bl IsCameraTranslationFinished\n    cmp r0, #0\n    beq _021E934C\n    ldr r0, [r4, #0x18]\n    bl DeleteCameraTranslationWrapper\n    mov r0, #1\n    strh r0, [r4, #0x1c]\n    str r0, [r4]\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _021E9362\n    ldrh r0, [r4, #0x1c]\n    cmp r0, #0\n    bne _021E9362\n    add r4, #0xd\n    ldr r0, [r6, #0x24]\n    add r1, r4, #0\n    bl ov01_021E95CC\n    mov r0, #0\n    add sp, #0x58\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E9368: .word 0x0000FFFF\n    _021E936C: .word 0x00456000\n    _021E9370: .word ov01_02206428"
    );
    #endif
}

void ov01_021E9374(void) {
    /* Original at 0x021E9374 */
    /* Requires manual decompilation - 254 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x58\n    add r6, r1, #0\n    add r4, r0, #0\n    ldr r0, [r6]\n    cmp r0, #6\n    bls _021E9384\n    b _021E95B0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E9390: ; jump table\n    mov r3, #0\n    str r3, [r6, #0x10]\n    strb r3, [r6, #0xd]\n    mov r0, #3\n    str r0, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    add r0, sp, #0x48\n    str r0, [sp, #8]\n    ldr r0, [r6, #4]\n    ldr r1, [r6, #8]\n    sub r2, r2, #2\n    bl sub_02054A60\n    mov r0, #1\n    strb r0, [r6, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    ldr r0, [r4, #0x34]\n    bl ov01_021FB904\n    str r0, [sp, #0x1c]\n    mov r0, #0\n    mov r1, #4\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, sp, #0x48\n    bl sub_02054D10\n    str r0, [sp, #0x18]\n    mov r7, #0\n    add r5, r0, #0\n    ldr r1, [r5]\n    cmp r1, #0\n    beq _021E9412\n    ldr r0, [sp, #0x1c]\n    add r2, sp, #0x30\n    bl NARC_ReadWholeMember\n    add r0, sp, #0x2c\n    ldrb r0, [r0, #8]\n    cmp r0, #0\n    beq _021E9412\n    ldr r1, [sp, #0x18]\n    lsl r5, r7, #2\n    ldr r1, [r1, r5]\n    add r0, r4, #0\n    add r2, sp, #0x48\n    add r3, sp, #0x2c\n    bl sub_02054AE4\n    mov r0, #1\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x18]\n    ldr r0, [r0, r5]\n    str r0, [sp, #0x20]\n    b _021E941A\n    add r7, r7, #1\n    add r5, r5, #4\n    cmp r7, #4\n    blt _021E93E0\n    ldr r0, [sp, #0x18]\n    bl Heap_Free\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    beq _021E9476\n    ldr r0, [r4, #0x54]\n    ldr r1, [sp, #0x20]\n    bl ov01_021E8BAC\n    add r7, r0, #0\n    bne _021E9442\n    mov r0, #1\n    bl ov01_021E636C\n    mov r0, #6\n    str r0, [r6]\n    add sp, #0x58\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4, #0x34]\n    bl ov01_021FB9E0\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    bl ov01_021F3B38\n    add r5, r0, #0\n    ldr r0, [sp, #0x2c]\n    bl ov01_021F3B3C\n    str r5, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    mov r2, #1\n    str r0, [sp, #8]\n    str r7, [sp, #0xc]\n    str r2, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r4, #0x54]\n    ldr r1, [r4, #0x58]\n    ldr r3, [sp, #0x20]\n    bl ov01_021E8DE8\n    b _021E9486\n    mov r0, #1\n    bl ov01_021E636C\n    mov r0, #6\n    str r0, [r6]\n    add sp, #0x58\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4, #0x24]\n    bl Camera_GetPerspectiveAngle\n    strh r0, [r6, #0xe]\n    ldr r1, [sp, #0x20]\n    add r0, r4, #0\n    bl ov01_021EA1F4\n    cmp r0, #0\n    bne _021E94A2\n    ldr r0, _021E95C8 ; =0x0000FFA0\n    ldr r1, [r4, #0x24]\n    bl Camera_AdjustPerspectiveAngle\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _021E95B0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x10]\n    mov r2, #9\n    bl NewFieldFadeEnvironment\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl ov01_021E8F30\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021EA1F4\n    cmp r0, #0\n    bne _021E94DC\n    mov r0, #1\n    str r0, [r6, #0x10]\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl GetDoorSE\n    add r3, r0, #0\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    mov r2, #0\n    bl ov01_021E8E98\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _021E95B0\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _021E95B0\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    mov r1, #0\n    bl MapObject_SetVisible\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _021E95B0\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    mov r1, #0xd\n    bl MapObject_SetHeldMovement\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _021E95B0\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    bne _021E95B0\n    add r0, r5, #0\n    bl MapObject_ClearHeldMovementIfActive\n    add r0, r4, #0\n    mov r1, #1\n    bl ov01_02205790\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl ov01_021E8F30\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0\n    bl GetDoorSE\n    add r3, r0, #0\n    mov r1, #1\n    ldr r0, [r4, #0x58]\n    add r2, r1, #0\n    bl ov01_021E8E98\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _021E95B0\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _021E95B0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E95B0\n    ldr r0, [r4, #0x24]\n    bl Camera_GetPerspectiveAngle\n    ldrh r1, [r6, #0xe]\n    cmp r1, r0\n    bne _021E95B0\n    ldr r0, [r4, #0x54]\n    ldr r1, [r4, #0x58]\n    mov r2, #1\n    bl ov01_021E8ED0\n    add sp, #0x58\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E95B0\n    add sp, #0x58\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r6, #0x10]\n    cmp r0, #0\n    beq _021E95C0\n    add r6, #0xd\n    ldr r0, [r4, #0x24]\n    add r1, r6, #0\n    bl ov01_021E9610\n    mov r0, #0\n    add sp, #0x58\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E95C8: .word 0x0000FFA0"
    );
    #endif
}

void ov01_021E95CC(void) {
    /* Original at 0x021E95CC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    ldrb r0, [r5]\n    mov r4, #0xc\n    add r1, r0, #0\n    mul r1, r4\n    cmp r1, #0x60\n    bgt _021E960C\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #0x60\n    bls _021E95EC\n    sub r0, #0x60\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    bl Camera_GetPerspectiveAngle\n    sub r0, r0, r4\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    beq _021E9606\n    neg r0, r4\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    add r1, r6, #0\n    bl Camera_AdjustPerspectiveAngle\n    ldrb r0, [r5]\n    add r0, r0, #1\n    strb r0, [r5]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021E9610(void) {
    /* Original at 0x021E9610 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    ldrb r0, [r5]\n    lsl r0, r0, #4\n    cmp r0, #0x60\n    bge _021E964C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    cmp r0, #0x60\n    bls _021E962E\n    sub r0, #0x60\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    b _021E9630\n    mov r4, #0x10\n    add r0, r6, #0\n    bl Camera_GetPerspectiveAngle\n    add r0, r0, r4\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    beq _021E9646\n    add r0, r4, #0\n    add r1, r6, #0\n    bl Camera_AdjustPerspectiveAngle\n    ldrb r0, [r5]\n    add r0, r0, #1\n    strb r0, [r5]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void GetDoorSE(void) {
    /* Original at 0x021E9650 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    ldr r0, [r0, #0x34]\n    add r5, r1, #0\n    add r4, r2, #0\n    bl ov01_021FB904\n    add r1, r5, #0\n    add r2, sp, #0\n    bl NARC_ReadWholeMember\n    cmp r4, #0\n    add r0, sp, #0\n    beq _021E96AA\n    ldrb r0, [r0, #4]\n    cmp r0, #4\n    bhi _021E96A0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E967E: ; jump table\n    add sp, #0x18\n    ldr r0, _021E96E8 ; =SEQ_SE_DP_DOOR_OPEN\n    pop {r3, r4, r5, pc}\n    add sp, #0x18\n    ldr r0, _021E96EC ; =SEQ_SE_DP_DOOR10\n    pop {r3, r4, r5, pc}\n    add sp, #0x18\n    ldr r0, _021E96F0 ; =SEQ_SE_PL_DOOR_OPEN5\n    pop {r3, r4, r5, pc}\n    add sp, #0x18\n    ldr r0, _021E96F4 ; =SEQ_SE_GS_HIKIDO_OPEN\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    add sp, #0x18\n    ldr r0, _021E96E8 ; =SEQ_SE_DP_DOOR_OPEN\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r0, #4]\n    cmp r0, #4\n    bhi _021E96DE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E96BC: ; jump table\n    add sp, #0x18\n    ldr r0, _021E96F8 ; =SEQ_SE_DP_DOOR_CLOSE2\n    pop {r3, r4, r5, pc}\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add sp, #0x18\n    ldr r0, _021E96FC ; =SEQ_SE_GS_HIKIDO_CLOSE\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    ldr r0, _021E96F8 ; =SEQ_SE_DP_DOOR_CLOSE2\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    _021E96E8: .word SEQ_SE_DP_DOOR_OPEN\n    _021E96EC: .word SEQ_SE_DP_DOOR10\n    _021E96F0: .word SEQ_SE_PL_DOOR_OPEN5\n    _021E96F4: .word SEQ_SE_GS_HIKIDO_OPEN\n    _021E96F8: .word SEQ_SE_DP_DOOR_CLOSE2\n    _021E96FC: .word SEQ_SE_GS_HIKIDO_CLOSE"
    );
    #endif
}

void ov01_021E9700(void) {
    /* Original at 0x021E9700 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E9718 ; =0x0000FFFF\n    cmp r0, #0x3d\n    beq _021E970C\n    cmp r0, #0xe0\n    beq _021E9710\n    b _021E9712\n    mov r1, #0\n    b _021E9712\n    mov r1, #1\n    add r0, r1, #0\n    bx lr\n    nop\n    _021E9718: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021E971C(void) {
    /* Original at 0x021E971C */
    /* Requires manual decompilation - 195 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r4, r1, #0\n    add r6, r0, #0\n    ldr r0, [r4]\n    add r5, r2, #0\n    cmp r0, #5\n    bls _021E972E\n    b _021E98E0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E973A: ; jump table\n    ldr r3, _021E98E8 ; =ov01_02206408\n    add r2, sp, #0x20\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    cmp r5, #2\n    bne _021E9770\n    mov r0, #2\n    str r0, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    add r0, sp, #0x30\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    ldr r1, [r4, #8]\n    sub r2, r2, #2\n    mov r3, #0\n    bl sub_02054A60\n    b _021E9788\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, sp, #0x30\n    str r0, [sp, #8]\n    mov r2, #0\n    ldr r0, [r4, #4]\n    ldr r1, [r4, #8]\n    add r3, r2, #0\n    bl sub_02054A60\n    mov r0, #2\n    strb r0, [r4, #0xc]\n    add r0, sp, #0x1c\n    str r0, [sp]\n    add r0, sp, #0x18\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r1, sp, #0x20\n    mov r2, #4\n    add r3, sp, #0x30\n    bl sub_02054B74\n    cmp r0, #0\n    beq _021E97D6\n    ldr r0, [r6, #0x34]\n    bl ov01_021FB9E0\n    add r7, r0, #0\n    ldr r0, [sp, #0x1c]\n    bl ov01_021F3B38\n    add r5, r0, #0\n    ldr r0, [sp, #0x1c]\n    bl ov01_021F3B3C\n    str r5, [sp]\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x14]\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    ldr r3, [sp, #0x18]\n    mov r2, #2\n    bl ov01_021E8DE8\n    b _021E97E0\n    bl GF_AssertFail\n    add sp, #0x40\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021E97FA\n    add r0, r5, #0\n    mov r1, #0x49\n    bl MapObject_SetHeldMovement\n    b _021E97FE\n    bl GF_AssertFail\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E98E0\n    mov r0, #1\n    bl ov01_021E636C\n    ldr r0, [r6, #0x58]\n    ldr r3, _021E98EC ; =SEQ_SE_DP_ESUKA\n    mov r1, #2\n    mov r2, #0\n    bl ov01_021E8E98\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r6, r0, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021E983A\n    cmp r5, #3\n    bne _021E9830\n    mov r1, #0xb\n    b _021E9832\n    mov r1, #0xa\n    add r0, r6, #0\n    bl MapObject_SetHeldMovement\n    b _021E983E\n    bl GF_AssertFail\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E98E0\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021E98E0\n    add r0, r5, #0\n    mov r1, #0x4a\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E98E0\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r6, r0, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021E98E0\n    cmp r5, #3\n    bne _021E987E\n    mov r1, #0xb\n    b _021E9880\n    mov r1, #0xa\n    add r0, r6, #0\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E98E0\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r7, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    bne _021E98E0\n    add r0, r7, #0\n    bl MapObject_ClearHeldMovementIfActive\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov01_02205790\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E98E0\n    ldr r0, [r6, #0x58]\n    mov r1, #2\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _021E98E0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E98E0\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    mov r2, #2\n    bl ov01_021E8ED0\n    ldr r0, _021E98EC ; =SEQ_SE_DP_ESUKA\n    mov r1, #0\n    bl StopSE\n    add sp, #0x40\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E98E8: .word ov01_02206408\n    _021E98EC: .word SEQ_SE_DP_ESUKA"
    );
    #endif
}

void ov01_021E98F0(void) {
    /* Original at 0x021E98F0 */
    /* Requires manual decompilation - 192 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    add r4, r1, #0\n    add r6, r0, #0\n    ldr r0, [r4]\n    add r5, r2, #0\n    cmp r0, #4\n    bls _021E9902\n    b _021E9AAC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E990E: ; jump table\n    ldr r3, _021E9AB4 ; =ov01_02206418\n    add r2, sp, #0x24\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    cmp r5, #2\n    bne _021E9942\n    mov r0, #2\n    str r0, [sp]\n    mov r2, #1\n    str r2, [sp, #4]\n    add r0, sp, #0x34\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    ldr r1, [r4, #8]\n    sub r2, r2, #2\n    mov r3, #0\n    bl sub_02054A60\n    b _021E995A\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, sp, #0x34\n    str r0, [sp, #8]\n    mov r2, #0\n    ldr r0, [r4, #4]\n    ldr r1, [r4, #8]\n    add r3, r2, #0\n    bl sub_02054A60\n    mov r0, #2\n    strb r0, [r4, #0xc]\n    add r0, sp, #0x20\n    str r0, [sp]\n    add r0, sp, #0x1c\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r1, sp, #0x24\n    mov r2, #4\n    add r3, sp, #0x34\n    bl sub_02054B74\n    cmp r0, #0\n    beq _021E99AA\n    ldr r0, [r6, #0x34]\n    bl ov01_021FB9E0\n    add r7, r0, #0\n    ldr r0, [sp, #0x20]\n    bl ov01_021F3B38\n    add r5, r0, #0\n    ldr r0, [sp, #0x20]\n    bl ov01_021F3B3C\n    str r5, [sp]\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    ldr r3, [sp, #0x1c]\n    mov r2, #2\n    bl ov01_021E8DE8\n    b _021E99B4\n    bl GF_AssertFail\n    add sp, #0x44\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021E99CE\n    add r0, r5, #0\n    mov r1, #0x49\n    bl MapObject_SetHeldMovement\n    b _021E99D2\n    bl GF_AssertFail\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E9AAC\n    ldr r0, [r6, #0x58]\n    ldr r3, _021E9AB8 ; =SEQ_SE_DP_ESUKA\n    mov r1, #2\n    mov r2, #0\n    bl ov01_021E8E98\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r7, r0, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021E9A30\n    cmp r5, #2\n    bne _021E99FE\n    mov r5, #0xa\n    b _021E9A00\n    mov r5, #0xb\n    add r0, r7, #0\n    add r1, r5, #0\n    bl MapObject_SetHeldMovement\n    add r0, r6, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _021E9A34\n    add r0, r7, #0\n    bl MapObject_GetPreviousXCoord\n    str r0, [sp, #0x18]\n    add r0, r7, #0\n    bl MapObject_GetPreviousZCoord\n    add r6, #0xe4\n    add r2, r0, #0\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    add r3, r6, #0\n    bl ov01_02205990\n    b _021E9A34\n    bl GF_AssertFail\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E9AAC\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021E9AAC\n    add r0, r5, #0\n    mov r1, #0x4a\n    bl MapObject_SetHeldMovement\n    mov r0, #0\n    bl ov01_021E636C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E9AAC\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    bne _021E9AAC\n    add r0, r5, #0\n    bl MapObject_ClearHeldMovementIfActive\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021E9AAC\n    ldr r0, [r6, #0x58]\n    mov r1, #2\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _021E9AAC\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E9AAC\n    ldr r0, [r6, #0x54]\n    ldr r1, [r6, #0x58]\n    mov r2, #2\n    bl ov01_021E8ED0\n    ldr r0, _021E9AB8 ; =SEQ_SE_DP_ESUKA\n    mov r1, #0\n    bl StopSE\n    add sp, #0x44\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E9AB4: .word ov01_02206418\n    _021E9AB8: .word SEQ_SE_DP_ESUKA"
    );
    #endif
}

void ov01_021E9ABC(void) {
    /* Original at 0x021E9ABC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrb r1, [r4]\n    ldr r0, [r5, #0x58]\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _021E9AE4\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021E9AE8(void) {
    /* Original at 0x021E9AE8 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x54\n    add r7, r0, #0\n    str r3, [sp, #0x18]\n    mov r0, #3\n    str r0, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    add r0, sp, #0x44\n    str r0, [sp, #8]\n    add r0, r1, #0\n    add r1, r2, #0\n    sub r2, r3, #2\n    mov r3, #0\n    bl sub_02054A60\n    ldr r0, [r7, #0x34]\n    bl ov01_021FB904\n    add r6, r0, #0\n    mov r0, #0\n    mov r1, #4\n    str r0, [sp]\n    add r0, r7, #0\n    add r2, r1, #0\n    add r3, sp, #0x44\n    bl sub_02054D10\n    mov r4, #0\n    str r0, [sp, #0x1c]\n    str r4, [sp, #0x24]\n    add r5, r0, #0\n    ldr r1, [r5]\n    cmp r1, #0\n    beq _021E9B5A\n    add r0, r6, #0\n    add r2, sp, #0x2c\n    bl NARC_ReadWholeMember\n    add r0, sp, #0x28\n    ldrb r0, [r0, #8]\n    cmp r0, #0\n    beq _021E9B5A\n    ldr r1, [sp, #0x1c]\n    lsl r4, r4, #2\n    ldr r1, [r1, r4]\n    add r0, r7, #0\n    add r2, sp, #0x44\n    add r3, sp, #0x28\n    bl sub_02054AE4\n    mov r0, #1\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x1c]\n    ldr r0, [r0, r4]\n    str r0, [sp, #0x20]\n    b _021E9B62\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021E9B28\n    ldr r0, [sp, #0x1c]\n    bl Heap_Free\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    beq _021E9BB0\n    ldr r0, [r7, #0x54]\n    ldr r1, [sp, #0x20]\n    bl ov01_021E8BAC\n    add r5, r0, #0\n    beq _021E9BB4\n    ldr r0, [r7, #0x34]\n    bl ov01_021FB9E0\n    add r6, r0, #0\n    ldr r0, [sp, #0x28]\n    bl ov01_021F3B38\n    add r4, r0, #0\n    ldr r0, [sp, #0x28]\n    bl ov01_021F3B3C\n    str r4, [sp]\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    str r5, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r7, #0x54]\n    ldr r1, [r7, #0x58]\n    ldr r2, [sp, #0x18]\n    ldr r3, [sp, #0x20]\n    bl ov01_021E8DE8\n    add sp, #0x54\n    pop {r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    add sp, #0x54\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E9BB8(void) {
    ov01_021E8F30(*((u32*)(r0 + 0x58)));
    GetDoorSE(r5, r0, 1);
    ov01_021E8E98(*((u32*)(r5 + 0x58)), r4, 0, r0);
}

void ov01_021E9BDC(void) {
    ov01_021E8F30(*((u32*)(r0 + 0x58)));
    GetDoorSE(r5, r0, 0);
    ov01_021E8E98(*((u32*)(r5 + 0x58)), r4, 1, r0);
}

void ov01_021E9C00(void) {
    /* Original at 0x021E9C00 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #4\n    mov r1, #1\n    bl Heap_AllocAtEnd\n    add r2, r0, #0\n    strb r4, [r2]\n    ldr r0, [r5, #0x10]\n    ldr r1, _021E9C1C ; =ov01_021E9ABC\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    _021E9C1C: .word ov01_021E9ABC"
    );
    #endif
}

void ov01_021E9C20(void) {
    /* Original at 0x021E9C20 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    add r2, r1, #0\n    ldr r0, [r3, #0x54]\n    ldr r1, [r3, #0x58]\n    ldr r3, _021E9C2C ; =ov01_021E8ED0\n    bx r3\n    _021E9C2C: .word ov01_021E8ED0"
    );
    #endif
}

void ov01_021E9C30(void) {
    Heap_AllocAtEnd();
}

void ov01_021E9C40(void) {
    /* Original at 0x021E9C40 */
    /* Requires manual decompilation - 283 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x5c\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r4, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetEnvironment\n    add r6, r0, #0\n    ldr r0, [r6]\n    cmp r0, #8\n    bls _021E9C5C\n    b _021E9ECC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E9C68: ; jump table\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    str r0, [sp, #0x28]\n    mov r0, #0\n    str r0, [r6, #0x10]\n    strb r0, [r6, #0xd]\n    ldr r0, [r4, #0x24]\n    bl Camera_GetPerspectiveAngle\n    strh r0, [r6, #0xe]\n    ldr r0, _021E9EE4 ; =0x0000FFA0\n    ldr r1, [r4, #0x24]\n    bl Camera_AdjustPerspectiveAngle\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    ldr r3, _021E9EE8 ; =0x00007FFF\n    mov r0, #0\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    str r0, [r6, #0x10]\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, #1\n    bne _021E9D88\n    mov r1, #1\n    strb r1, [r6, #0xc]\n    mov r2, #3\n    str r2, [sp]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    str r1, [sp, #4]\n    add r0, sp, #0x4c\n    str r0, [sp, #8]\n    ldr r0, [r6, #4]\n    ldr r1, [r6, #8]\n    ldr r3, [sp, #0x24]\n    sub r2, r2, #4\n    bl sub_02054A60\n    ldr r0, [r4, #0x34]\n    bl ov01_021FB904\n    str r0, [sp, #0x1c]\n    mov r0, #0\n    mov r1, #4\n    str r0, [sp]\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, sp, #0x4c\n    bl sub_02054D10\n    str r0, [sp, #0x18]\n    mov r7, #0\n    add r5, r0, #0\n    ldr r1, [r5]\n    cmp r1, #0\n    beq _021E9D2A\n    ldr r0, [sp, #0x1c]\n    add r2, sp, #0x34\n    bl NARC_ReadWholeMember\n    add r0, sp, #0x30\n    ldrb r0, [r0, #8]\n    cmp r0, #0\n    beq _021E9D2A\n    ldr r1, [sp, #0x18]\n    lsl r5, r7, #2\n    ldr r1, [r1, r5]\n    add r0, r4, #0\n    add r2, sp, #0x4c\n    add r3, sp, #0x30\n    bl sub_02054AE4\n    mov r0, #1\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x18]\n    ldr r0, [r0, r5]\n    str r0, [sp, #0x20]\n    b _021E9D32\n    add r7, r7, #1\n    add r5, r5, #4\n    cmp r7, #4\n    blt _021E9CF8\n    ldr r0, [sp, #0x18]\n    bl Heap_Free\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    beq _021E9D88\n    ldr r0, [r4, #0x54]\n    ldr r1, [sp, #0x20]\n    bl ov01_021E8BAC\n    add r7, r0, #0\n    bne _021E9D50\n    add sp, #0x5c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r4, #0x34]\n    bl ov01_021FB9E0\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x30]\n    bl ov01_021F3B38\n    add r5, r0, #0\n    ldr r0, [sp, #0x30]\n    bl ov01_021F3B3C\n    str r5, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    mov r2, #1\n    str r0, [sp, #8]\n    str r7, [sp, #0xc]\n    str r2, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r4, #0x54]\n    ldr r1, [r4, #0x58]\n    ldr r3, [sp, #0x20]\n    bl ov01_021E8DE8\n    mov r0, #4\n    str r0, [r6]\n    b _021E9ECC\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, #1\n    bne _021E9DA0\n    ldr r0, [sp, #0x28]\n    mov r1, #1\n    bl MapObject_SetVisible\n    mov r0, #1\n    str r0, [r6]\n    b _021E9ECC\n    ldr r0, [sp, #0x28]\n    mov r1, #0\n    bl MapObject_SetVisible\n    mov r0, #3\n    str r0, [r6]\n    b _021E9ECC\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    mov r1, #0\n    bl MapObject_SetVisible\n    add r0, r5, #0\n    mov r1, #0xd\n    bl MapObject_SetHeldMovement\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _021E9ECC\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    bne _021E9ECC\n    add r0, r5, #0\n    bl MapObject_ClearHeldMovementIfActive\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _021E9ECC\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E9ECC\n    ldr r0, [r4, #0x24]\n    bl Camera_GetPerspectiveAngle\n    ldrh r1, [r6, #0xe]\n    cmp r1, r0\n    bne _021E9ECC\n    add sp, #0x5c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl ov01_021E8F30\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #1\n    bl GetDoorSE\n    add r3, r0, #0\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    mov r2, #0\n    bl ov01_021E8E98\n    mov r0, #5\n    str r0, [r6]\n    b _021E9ECC\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _021E9ECC\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    mov r1, #0\n    bl MapObject_SetVisible\n    mov r0, #6\n    str r0, [r6]\n    b _021E9ECC\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    mov r1, #0xd\n    bl MapObject_SetHeldMovement\n    mov r0, #7\n    str r0, [r6]\n    b _021E9ECC\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    bne _021E9ECC\n    add r0, r5, #0\n    bl MapObject_ClearHeldMovementIfActive\n    add r0, r4, #0\n    mov r1, #1\n    bl ov01_02205790\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl ov01_021E8F30\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0\n    bl GetDoorSE\n    add r3, r0, #0\n    mov r1, #1\n    ldr r0, [r4, #0x58]\n    add r2, r1, #0\n    bl ov01_021E8E98\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _021E9ECC\n    ldr r0, [r4, #0x58]\n    mov r1, #1\n    bl ov01_021E8F10\n    cmp r0, #0\n    beq _021E9ECC\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E9ECC\n    ldr r0, [r4, #0x24]\n    bl Camera_GetPerspectiveAngle\n    ldrh r1, [r6, #0xe]\n    cmp r1, r0\n    bne _021E9ECC\n    ldr r0, [r4, #0x54]\n    ldr r1, [r4, #0x58]\n    mov r2, #1\n    bl ov01_021E8ED0\n    add sp, #0x5c\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [r6, #0x10]\n    cmp r0, #0\n    beq _021E9EDC\n    add r6, #0xd\n    ldr r0, [r4, #0x24]\n    add r1, r6, #0\n    bl ov01_021E9610\n    mov r0, #0\n    add sp, #0x5c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021E9EE4: .word 0x0000FFA0\n    _021E9EE8: .word 0x00007FFF"
    );
    #endif
}

void ov01_021E9EEC(void) {
    /* Original at 0x021E9EEC */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r4, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetEnvironment\n    add r5, r0, #0\n    ldrb r0, [r5]\n    cmp r0, #0\n    beq _021E9F0C\n    cmp r0, #1\n    beq _021E9F48\n    b _021E9F5C\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetMapObject\n    mov r1, #1\n    bl MapObject_SetVisible\n    mov r0, #0\n    str r0, [r5, #4]\n    strb r0, [r5, #1]\n    ldr r0, _021E9F70 ; =SEQ_SE_DP_KAIDAN2\n    bl PlaySE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #0\n    ldr r3, _021E9F74 ; =0x00007FFF\n    add r1, r0, #0\n    add r2, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #1\n    str r0, [r5, #4]\n    ldrb r0, [r5]\n    add r0, r0, #1\n    strb r0, [r5]\n    b _021E9F5C\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E9F5C\n    add r0, r5, #0\n    bl Heap_Free\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, pc}\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _021E9F6A\n    ldr r0, [r4, #0x24]\n    add r1, r5, #1\n    bl ov01_021E95CC\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _021E9F70: .word SEQ_SE_DP_KAIDAN2\n    _021E9F74: .word 0x00007FFF"
    );
    #endif
}

void ov01_021E9F78(void) {
    /* Original at 0x021E9F78 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrb r0, [r4]\n    cmp r0, #0\n    beq _021E9F98\n    cmp r0, #1\n    beq _021E9FCA\n    b _021E9FDE\n    mov r0, #0\n    str r0, [r4, #4]\n    strb r0, [r4, #1]\n    ldr r0, _021E9FF4 ; =SEQ_SE_DP_KAIDAN2\n    bl PlaySE\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    mov r2, #0x10\n    add r3, r1, #0\n    bl NewFieldFadeEnvironment\n    mov r0, #1\n    str r0, [r4, #4]\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _021E9FDE\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021E9FDE\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x10\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021E9FEC\n    ldr r0, [r6, #0x24]\n    add r1, r4, #1\n    bl ov01_021E95CC\n    mov r0, #0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _021E9FF4: .word SEQ_SE_DP_KAIDAN2"
    );
    #endif
}

void ov01_021E9FF8(void) {
    /* Original at 0x021E9FF8 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp, #0x10]\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    ldr r0, [sp, #0x10]\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrb r0, [r4]\n    cmp r0, #3\n    bhi _021EA110\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EA01E: ; jump table\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    cmp r7, #1\n    bne _021EA048\n    ldr r0, [sp, #0x14]\n    mov r1, #1\n    bl MapObject_SetVisible\n    mov r0, #1\n    b _021EA052\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    bl MapObject_SetVisible\n    mov r0, #3\n    strb r0, [r4]\n    mov r0, #0\n    str r0, [r4, #4]\n    strb r0, [r4, #1]\n    ldr r0, [r5, #0x24]\n    bl Camera_GetPerspectiveAngle\n    strh r0, [r4, #2]\n    ldr r0, _021EA124 ; =0x0000FFA0\n    ldr r1, [r5, #0x24]\n    bl Camera_AdjustPerspectiveAngle\n    cmp r7, #3\n    bhi _021EA092\n    add r0, r7, r7\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EA07A: ; jump table\n    mov r6, #3\n    b _021EA096\n    mov r6, #5\n    b _021EA096\n    mov r6, #7\n    b _021EA096\n    mov r6, #0x27\n    b _021EA096\n    bl GF_AssertFail\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x10]\n    add r2, r6, #0\n    bl NewFieldFadeEnvironment\n    mov r0, #1\n    str r0, [r4, #4]\n    b _021EA110\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r6, r0, #0\n    mov r1, #0\n    bl MapObject_SetVisible\n    add r0, r6, #0\n    mov r1, #0xd\n    bl MapObject_SetHeldMovement\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _021EA110\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r6, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    bne _021EA110\n    add r0, r6, #0\n    bl MapObject_ClearHeldMovementIfActive\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _021EA110\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021EA110\n    ldr r0, [r5, #0x24]\n    bl Camera_GetPerspectiveAngle\n    ldrh r1, [r4, #2]\n    cmp r1, r0\n    bne _021EA110\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _021EA11E\n    ldr r0, [r5, #0x24]\n    add r1, r4, #1\n    bl ov01_021E9610\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _021EA124: .word 0x0000FFA0"
    );
    #endif
}

void ov01_021EA128(void) {
    /* Original at 0x021EA128 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r7, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrb r0, [r4]\n    cmp r0, #3\n    bhi _021EA1EE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021EA14E: ; jump table\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r6, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bne _021EA178\n    add r0, r6, #0\n    mov r1, #1\n    bl MapObject_SetVisible\n    mov r0, #1\n    b _021EA182\n    add r0, r6, #0\n    mov r1, #0\n    bl MapObject_SetVisible\n    mov r0, #3\n    strb r0, [r4]\n    mov r1, #0\n    mov r2, #1\n    str r1, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    mov r0, #0xb\n    str r0, [sp, #0xc]\n    add r0, r7, #0\n    add r3, r2, #0\n    bl NewFieldFadeEnvironment\n    b _021EA1EE\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    mov r1, #0\n    bl MapObject_SetVisible\n    add r0, r5, #0\n    mov r1, #0xd\n    bl MapObject_SetHeldMovement\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _021EA1EE\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    bne _021EA1EE\n    add r0, r5, #0\n    bl MapObject_ClearHeldMovementIfActive\n    ldrb r0, [r4]\n    add r0, r0, #1\n    strb r0, [r4]\n    b _021EA1EE\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _021EA1EE\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EA1F4(void) {
    /* Original at 0x021EA1F4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, [r0, #0x20]\n    add r4, r1, #0\n    ldr r0, [r0]\n    bl MapHeader_IsInBuilding\n    cmp r0, #0\n    beq _021EA214\n    cmp r4, #0x3f\n    beq _021EA210\n    cmp r4, #0xa2\n    beq _021EA210\n    cmp r4, #0xc5\n    bne _021EA21C\n    mov r0, #1\n    pop {r4, pc}\n    cmp r4, #0x7c\n    bne _021EA21C\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EA220(void) {
    /* Original at 0x021EA220 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    cmp r6, #5\n    blo _021EA22E\n    bl GF_AssertFail\n    mov r0, #4\n    mov r1, #0x14\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r0, _021EA280 ; =ov01_02206450\n    lsl r1, r6, #2\n    ldr r0, [r0, r1]\n    str r5, [r4, #0xc]\n    add r1, r4, #4\n    bl ov01_021EA3E0\n    str r0, [r4]\n    mov r0, #0\n    str r0, [r4, #8]\n    bl GF_RTC_TimeToSec\n    lsr r1, r0, #0x1f\n    add r1, r0, r1\n    asr r3, r1, #1\n    ldr r5, [r4]\n    mov r1, #0\n    cmp r5, #0\n    bls _021EA272\n    ldr r2, [r4, #4]\n    ldr r0, [r2]\n    cmp r0, r3\n    bls _021EA26A\n    str r1, [r4, #8]\n    b _021EA272\n    add r1, r1, #1\n    add r2, #0x30\n    cmp r1, r5\n    blo _021EA260\n    mov r0, #1\n    str r0, [r4, #0x10]\n    add r0, r4, #0\n    bl ov01_021EA398\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _021EA280: .word ov01_02206450"
    );
    #endif
}

void ov01_021EA284(void) {
    /* Original at 0x021EA284 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _021EA28E\n    bl GF_AssertFail\n    ldr r0, [r4]\n    add r0, r0, #4\n    bl ov01_021EA564\n    ldr r1, [r4]\n    mov r0, #4\n    bl Heap_FreeExplicit\n    mov r0, #0\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EA2A4(void) {
    /* Original at 0x021EA2A4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bne _021EA2AE\n    bl GF_AssertFail\n    bl GF_RTC_TimeToSec\n    lsr r1, r0, #0x1f\n    add r1, r0, r1\n    asr r0, r1, #1\n    ldr r1, [r4]\n    cmp r1, #1\n    bls _021EA2FC\n    ldr r1, [r4, #8]\n    sub r5, r1, #1\n    bmi _021EA2CE\n    mov r2, #0x30\n    ldr r3, [r4, #4]\n    mul r2, r5\n    ldr r2, [r3, r2]\n    b _021EA2D0\n    mov r2, #0\n    mov r3, #0x30\n    ldr r5, [r4, #4]\n    mul r3, r1\n    ldr r1, [r5, r3]\n    cmp r0, r1\n    bge _021EA2E0\n    cmp r0, r2\n    bge _021EA2FC\n    ldr r0, [r4, #8]\n    add r1, r0, #1\n    str r1, [r4, #8]\n    ldr r0, [r4]\n    cmp r1, r0\n    blo _021EA2F0\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    beq _021EA2FC\n    add r0, r4, #0\n    bl ov01_021EA398\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EA300(void) {
    /* Original at 0x021EA300 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp, #4]\n    add r6, r1, #0\n    mov r4, #0\n    add r5, r0, #0\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    ldrb r1, [r0, #4]\n    mov r0, #1\n    lsl r0, r4\n    tst r0, r1\n    beq _021EA33C\n    mov r0, #0x12\n    ldrsh r0, [r5, r0]\n    mov r2, #0xe\n    mov r3, #0x10\n    str r0, [sp]\n    ldrsh r2, [r5, r2]\n    ldrsh r3, [r5, r3]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov01_021EAAB8\n    ldrh r2, [r7, #6]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov01_021EAAE0\n    b _021EA356\n    mov r0, #0\n    mov r2, #0\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov01_021EAAB8\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov01_021EAAE0\n    add r4, r4, #1\n    add r5, r5, #6\n    add r7, r7, #2\n    cmp r4, #4\n    blt _021EA30E\n    ldr r1, [sp, #4]\n    mov r2, #0\n    ldrh r1, [r1, #0x26]\n    add r0, r6, #0\n    add r3, r2, #0\n    bl ov01_021EAAF4\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    ldrh r1, [r1, #0x28]\n    mov r2, #1\n    bl ov01_021EAB08\n    ldr r1, [sp, #4]\n    mov r2, #0\n    ldrh r1, [r1, #0x2a]\n    add r0, r6, #0\n    add r3, r2, #0\n    bl ov01_021EAB1C\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    ldrh r1, [r1, #0x2c]\n    mov r2, #1\n    bl ov01_021EAB30\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EA398(void) {
    /* Original at 0x021EA398 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    ldr r1, [r3, #8]\n    mov r0, #0x30\n    mul r0, r1\n    ldr r2, [r3, #4]\n    ldr r1, [r3, #0xc]\n    ldr r3, _021EA3AC ; =ov01_021EA300\n    add r0, r2, r0\n    bx r3\n    nop\n    _021EA3AC: .word ov01_021EA300"
    );
    #endif
}

void ov01_021EA3B0(void) {
    /* Original at 0x021EA3B0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x40\n    bl NNSi_G3dModifyMatFlag\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x80\n    bl NNSi_G3dModifyMatFlag\n    mov r2, #2\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #8\n    bl NNSi_G3dModifyMatFlag\n    mov r2, #1\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #0xa\n    bl NNSi_G3dModifyMatFlag\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EA3E0(void) {
    /* Original at 0x021EA3E0 */
    /* Requires manual decompilation - 170 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1fc\n    sub sp, #0x20\n    add r2, r0, #0\n    str r1, [sp]\n    mov r0, #4\n    add r1, r2, #0\n    bl Sys_AllocAndReadFile\n    mov r1, #0\n    str r0, [sp, #0x14]\n    str r1, [sp, #8]\n    add r5, sp, #0x11c\n    mov r6, #1\n    mov r7, #2\n    add r4, r1, #0\n    add r1, r5, #0\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    ldrsb r1, [r5, r4]\n    cmp r1, #0x45\n    bne _021EA41A\n    ldrsb r1, [r5, r6]\n    cmp r1, #0x4f\n    bne _021EA41A\n    ldrsb r1, [r5, r7]\n    cmp r1, #0x46\n    beq _021EA468\n    add r1, r5, #0\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    add r1, r5, #0\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    add r1, r5, #0\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    add r1, r5, #0\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    add r1, r5, #0\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    add r1, r5, #0\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    add r1, r5, #0\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    add r1, r5, #0\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    add r1, r5, #0\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    ldr r1, [sp, #8]\n    add r1, r1, #1\n    str r1, [sp, #8]\n    mov r1, #0\n    ldrsb r1, [r5, r1]\n    cmp r1, #0x45\n    bne _021EA400\n    mov r1, #1\n    ldrsb r1, [r5, r1]\n    cmp r1, #0x4f\n    bne _021EA400\n    mov r1, #2\n    ldrsb r1, [r5, r1]\n    cmp r1, #0x46\n    bne _021EA400\n    ldr r0, [sp, #8]\n    mov r1, #0x30\n    add r4, r0, #0\n    mul r4, r1\n    mov r0, #4\n    add r1, r4, #0\n    bl Heap_Alloc\n    ldr r1, [sp]\n    add r2, r4, #0\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    mov r1, #0\n    str r1, [sp, #0x18]\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0x14]\n    cmp r1, #0\n    ble _021EA54E\n    ldr r1, [sp, #0x18]\n    str r1, [sp, #0x10]\n    ldr r1, [sp]\n    mov r2, #0xd\n    ldr r5, [r1]\n    ldr r1, [sp, #0x10]\n    add r4, r5, r1\n    add r1, sp, #0x11c\n    bl Ascii_GetDelim\n    str r0, [sp, #4]\n    add r0, sp, #0x11c\n    add r1, sp, #0x1c\n    mov r2, #0x2c\n    bl Ascii_GetDelim\n    add r0, sp, #0x1c\n    bl Ascii_StrToL\n    ldr r1, [sp, #0x10]\n    add r6, r4, #0\n    str r0, [r5, r1]\n    add r0, r4, #6\n    mov r7, #0\n    add r6, #0xe\n    str r0, [sp, #0xc]\n    add r5, r4, #0\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0xc]\n    add r2, r6, #0\n    bl ov01_021EA578\n    str r0, [sp, #4]\n    ldrh r1, [r5, #6]\n    ldr r0, _021EA560 ; =0x0000FFFF\n    cmp r1, r0\n    beq _021EA4FE\n    mov r0, #1\n    ldrb r1, [r4, #4]\n    lsl r0, r7\n    orr r0, r1\n    strb r0, [r4, #4]\n    b _021EA502\n    mov r0, #0\n    strh r0, [r5, #6]\n    ldr r0, [sp, #0xc]\n    add r7, r7, #1\n    add r0, r0, #2\n    add r6, r6, #6\n    add r5, r5, #2\n    str r0, [sp, #0xc]\n    cmp r7, #4\n    blt _021EA4DE\n    add r1, r4, #0\n    ldr r0, [sp, #4]\n    add r1, #0x26\n    bl ov01_021EA668\n    add r1, r4, #0\n    add r1, #0x28\n    bl ov01_021EA668\n    add r1, r4, #0\n    add r1, #0x2a\n    bl ov01_021EA668\n    add r4, #0x2c\n    add r1, r4, #0\n    bl ov01_021EA668\n    add r1, sp, #0x11c\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    ldr r1, [sp, #0x10]\n    add r1, #0x30\n    str r1, [sp, #0x10]\n    ldr r1, [sp, #0x18]\n    add r2, r1, #1\n    ldr r1, [sp, #8]\n    str r2, [sp, #0x18]\n    cmp r2, r1\n    blt _021EA4AC\n    ldr r1, [sp, #0x14]\n    mov r0, #4\n    bl Heap_FreeExplicit\n    ldr r0, [sp, #8]\n    add sp, #0x1fc\n    add sp, #0x20\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EA560: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EA564(void) {
    Heap_FreeExplicit(0, 4);
}

void ov01_021EA578(void) {
    /* Original at 0x021EA578 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1fc\n    sub sp, #0x20\n    str r1, [sp, #4]\n    add r7, r2, #0\n    add r1, sp, #0x11c\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    str r0, [sp]\n    add r0, sp, #0x11c\n    add r1, sp, #0x1c\n    mov r2, #0x2c\n    bl Ascii_GetDelim\n    add r4, r0, #0\n    add r0, sp, #0x1c\n    bl Ascii_StrToL\n    cmp r0, #1\n    bne _021EA650\n    mov r6, #0\n    add r5, sp, #8\n    add r0, r4, #0\n    add r1, sp, #0x1c\n    mov r2, #0x2c\n    bl Ascii_GetDelim\n    add r4, r0, #0\n    add r0, sp, #0x1c\n    bl Ascii_StrToL\n    strh r0, [r5]\n    add r6, r6, #1\n    add r5, r5, #2\n    cmp r6, #3\n    blt _021EA5A6\n    add r1, sp, #8\n    ldrh r0, [r1, #4]\n    ldrh r2, [r1]\n    ldrh r1, [r1, #2]\n    lsl r0, r0, #0xa\n    mov r6, #0\n    lsl r1, r1, #5\n    orr r1, r2\n    orr r1, r0\n    ldr r0, [sp, #4]\n    add r5, sp, #0x10\n    strh r1, [r0]\n    add r0, r4, #0\n    add r1, sp, #0x1c\n    mov r2, #0x2c\n    bl Ascii_GetDelim\n    add r4, r0, #0\n    add r0, sp, #0x1c\n    bl Ascii_StrToL\n    add r6, r6, #1\n    stmia r5!, {r0}\n    cmp r6, #3\n    blt _021EA5DA\n    ldr r0, [sp, #0x10]\n    strh r0, [r7]\n    ldr r0, [sp, #0x14]\n    strh r0, [r7, #2]\n    ldr r0, [sp, #0x18]\n    strh r0, [r7, #4]\n    mov r0, #0\n    ldrsh r1, [r7, r0]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    ble _021EA60E\n    strh r0, [r7]\n    mov r0, #0\n    ldrsh r1, [r7, r0]\n    ldr r0, _021EA660 ; =0xFFFFF000\n    cmp r1, r0\n    bge _021EA61A\n    strh r0, [r7]\n    mov r0, #2\n    ldrsh r2, [r7, r0]\n    lsl r1, r0, #0xb\n    cmp r2, r1\n    ble _021EA628\n    lsl r0, r0, #0xb\n    strh r0, [r7, #2]\n    mov r0, #2\n    ldrsh r1, [r7, r0]\n    ldr r0, _021EA660 ; =0xFFFFF000\n    cmp r1, r0\n    bge _021EA634\n    strh r0, [r7, #2]\n    mov r0, #4\n    ldrsh r2, [r7, r0]\n    lsl r1, r0, #0xa\n    cmp r2, r1\n    ble _021EA642\n    lsl r0, r0, #0xa\n    strh r0, [r7, #4]\n    mov r0, #4\n    ldrsh r1, [r7, r0]\n    ldr r0, _021EA660 ; =0xFFFFF000\n    cmp r1, r0\n    bge _021EA656\n    strh r0, [r7, #4]\n    b _021EA656\n    ldr r1, _021EA664 ; =0x0000FFFF\n    ldr r0, [sp, #4]\n    strh r1, [r0]\n    ldr r0, [sp]\n    add sp, #0x1fc\n    add sp, #0x20\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021EA660: .word 0xFFFFF000\n    _021EA664: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021EA668(void) {
    /* Original at 0x021EA668 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x1fc\n    sub sp, #0x14\n    str r1, [sp, #4]\n    add r1, sp, #0x10c\n    add r1, #2\n    mov r2, #0xd\n    bl Ascii_GetDelim\n    add r6, sp, #0x10c\n    add r7, sp, #0xc\n    str r0, [sp]\n    add r6, #2\n    mov r4, #0\n    add r5, sp, #8\n    add r7, #2\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r2, #0x2c\n    bl Ascii_GetDelim\n    add r6, r0, #0\n    add r0, r7, #0\n    bl Ascii_StrToL\n    strh r0, [r5]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #3\n    blt _021EA688\n    add r0, sp, #8\n    ldrh r1, [r0, #4]\n    lsl r2, r1, #0xa\n    ldrh r1, [r0]\n    ldrh r0, [r0, #2]\n    lsl r0, r0, #5\n    orr r0, r1\n    add r1, r2, #0\n    orr r1, r0\n    ldr r0, [sp, #4]\n    strh r1, [r0]\n    ldr r0, [sp]\n    add sp, #0x1fc\n    add sp, #0x14\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void LoadAreaOrDungeonLightTxt(void) {
    /* Original at 0x021EA6C4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r0, #0\n    add r6, r1, #0\n    cmp r4, #5\n    blo _021EA6D4\n    bl GF_AssertFail\n    ldr r0, _021EA720 ; =ov01_02206450\n    lsl r1, r4, #2\n    ldr r0, [r0, r1]\n    add r1, sp, #0\n    bl ov01_021EA3E0\n    add r4, r0, #0\n    bl GF_RTC_TimeToSec\n    lsr r1, r0, #0x1f\n    add r1, r0, r1\n    asr r3, r1, #1\n    mov r1, #0\n    cmp r4, #0\n    ble _021EA706\n    ldr r2, [sp]\n    ldr r0, [r2]\n    cmp r0, r3\n    bls _021EA6FE\n    add r5, r1, #0\n    b _021EA706\n    add r1, r1, #1\n    add r2, #0x30\n    cmp r1, r4\n    blt _021EA6F4\n    mov r0, #0x30\n    ldr r1, [sp]\n    mul r0, r5\n    add r0, r1, r0\n    add r1, r6, #0\n    bl ov01_021EA300\n    add r0, sp, #0\n    bl ov01_021EA564\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _021EA720: .word ov01_02206450"
    );
    #endif
}
