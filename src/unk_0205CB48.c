/* Decompiled from asm/unk_0205CB48.s */
#include "global.h"

void PlayerAvatar_MoveControl(void) {
    /* Original at 0x0205CB48 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    mov r1, #0\n    add r4, r2, #0\n    mvn r1, r1\n    add r5, r0, #0\n    add r6, r3, #0\n    cmp r4, r1\n    bne _0205CB66\n    add r2, sp, #8\n    ldrh r2, [r2, #0x10]\n    add r1, r6, #0\n    bl sub_0205DDD4\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205CBEC\n    cmp r0, #0\n    beq _0205CBE2\n    add r3, sp, #8\n    ldrh r3, [r3, #0x10]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_0205CC4C\n    add r0, r5, #0\n    bl Field_PlayerAvatar_ApplyTransitionFlags\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205D004\n    cmp r0, #1\n    bne _0205CB9A\n    add r0, r5, #0\n    bl ov01_021F2F24\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl PlayerAvatar_GetState\n    cmp r0, #0\n    bne _0205CBC4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205D40C\n    cmp r0, #0\n    beq _0205CBB8\n    add r0, r5, #0\n    bl ov01_021F2F24\n    b _0205CBC4\n    ldr r0, [sp, #0x1c]\n    cmp r0, #1\n    bne _0205CBC4\n    add r0, r5, #0\n    bl ov01_021F2EDC\n    add r0, sp, #8\n    ldrh r0, [r0, #0x10]\n    add r1, r7, #0\n    add r2, r4, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r3, r6, #0\n    bl sub_0205D340\n    add r0, r5, #0\n    bl sub_0205CC74\n    add r0, r5, #0\n    bl sub_0205CC94\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205CBE4(void) {
    sub_0205CBEC();
}

void sub_0205CBEC(void) {
    /* Original at 0x0205CBEC */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl PlayerAvatar_GetMapObject\n    add r6, r0, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _0205CC04\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0205CC10\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    bl MapObject_GetMovementCommand\n    bl sub_0205DE64\n    cmp r0, #1\n    bne _0205CC46\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl sub_0205DA34\n    cmp r0, #0\n    bne _0205CC30\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x20\n    bne _0205CC42\n    add r0, r5, #0\n    bl PlayerAvatar_GetState\n    cmp r0, #2\n    bne _0205CC42\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0205CC4C(void) {
    sub_0205DD9C(r3);
    sub_0205DDB8(r6);
    PlayerAvatar_SetUnk28Unk2C(r5, r4, r0);
    PlayerAvatar_ClearFlag6(r5);
}

void sub_0205CC74(void) {
    /* Original at 0x0205CC74 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl PlayerAvatar_CheckFlag6\n    cmp r0, #1\n    bne _0205CC92\n    add r0, r4, #0\n    bl PlayerAvatar_GetUnk10\n    cmp r0, #1\n    bne _0205CC92\n    add r0, r4, #0\n    mov r1, #0\n    bl PlayerAvatar_SetFlag1\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205CC94(void) {
    /* Original at 0x0205CC94 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    bl PlayerAvatar_GetUnk10\n    cmp r0, #1\n    bne _0205CD5E\n    add r0, r6, #0\n    bl PlayerAvatar_GetMapObject\n    add r4, r0, #0\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    add r0, r4, #0\n    bl MapObject_GetMovementCommand\n    bl sub_02062390\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _0205CCC8\n    add r7, r5, #0\n    b _0205CCD2\n    add r0, r4, #0\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    add r0, r5, #0\n    bl sub_0205B984\n    cmp r0, #1\n    bne _0205CCE4\n    mov r0, #SEQ_SE_DP_FOOT3_0>>6\n    lsl r0, r0, #6\n    bl PlaySE\n    add r0, r5, #0\n    bl sub_0205B7A4\n    cmp r0, #1\n    bne _0205CCF4\n    ldr r0, _0205CD60 ; =SEQ_SE_DP_FOOT3_1\n    bl PlaySE\n    add r0, r5, #0\n    bl sub_0205B798\n    add r0, r5, #0\n    bl sub_0205B8AC\n    cmp r0, #1\n    bne _0205CD0A\n    ldr r0, _0205CD64 ; =SEQ_SE_DP_MARSH_WALK\n    bl PlaySE\n    add r0, r4, #0\n    bl MapObject_GetMovementCommand\n    str r0, [sp]\n    add r0, r6, #0\n    bl PlayerAvatar_GetState\n    ldr r0, [sp]\n    bl sub_0205DE64\n    cmp r0, #0\n    bne _0205CD56\n    add r0, r5, #0\n    bl sub_0205B6F4\n    cmp r0, #1\n    beq _0205CD36\n    add r0, r7, #0\n    bl sub_0205B6F4\n    cmp r0, #1\n    bne _0205CD3C\n    ldr r0, _0205CD68 ; =SEQ_SE_DP_KUSA\n    bl PlaySE\n    add r0, r5, #0\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    beq _0205CD50\n    add r0, r7, #0\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #1\n    bne _0205CD56\n    ldr r0, _0205CD6C ; =SEQ_SE_GS_KUSA2\n    bl PlaySE\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_0205CD70\n    pop {r3, r4, r5, r6, r7, pc}\n    _0205CD60: .word SEQ_SE_DP_FOOT3_1\n    _0205CD64: .word SEQ_SE_DP_MARSH_WALK\n    _0205CD68: .word SEQ_SE_DP_KUSA\n    _0205CD6C: .word SEQ_SE_GS_KUSA2"
    );
    #endif
}

void sub_0205CD70(void) {
    /* Original at 0x0205CD70 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    bl MapObject_GetMovementCommand\n    bl sub_02062390\n    str r0, [sp]\n    add r0, r6, #0\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    add r0, r7, #0\n    bl sub_0205B6F4\n    cmp r0, #0\n    bne _0205CE58\n    add r0, r7, #0\n    bl sub_0205B984\n    cmp r0, #1\n    beq _0205CE58\n    add r0, r7, #0\n    bl sub_0205B7A4\n    cmp r0, #1\n    beq _0205CE58\n    add r0, r7, #0\n    bl MetatileBehavior_IsEncounterGrass\n    cmp r0, #0\n    bne _0205CE58\n    mov r1, #0\n    ldr r0, [sp]\n    mvn r1, r1\n    cmp r0, r1\n    beq _0205CDD2\n    ldr r1, [sp]\n    add r0, r6, #0\n    bl sub_02060FE0\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, _0205CE5C ; =_020FCB98\n    lsl r1, r4, #2\n    ldrh r1, [r0, r1]\n    ldr r0, _0205CE60 ; =SEQ_SE_GS_EDAPAKI\n    cmp r1, r0\n    bne _0205CDE6\n    add r0, r5, #0\n    bl PlayerAvatar_ResetUnkC\n    b _0205CDFE\n    add r0, r5, #0\n    bl PlayerAvatar_GetUnk14\n    cmp r0, #0\n    bne _0205CDF8\n    add r0, r5, #0\n    bl PlayerAvatar_ResetUnkC\n    b _0205CDFE\n    add r0, r5, #0\n    bl PlayerAvatar_ToggleUnkC\n    add r0, r5, #0\n    bl PlayerAvatar_GetUnkC\n    cmp r0, #0\n    bne _0205CE58\n    add r0, r5, #0\n    bl PlayerAvatar_GetState\n    cmp r0, #1\n    beq _0205CE58\n    cmp r0, #2\n    beq _0205CE58\n    cmp r4, #0x10\n    bhs _0205CE52\n    cmp r4, #0\n    bne _0205CE2A\n    add r0, r5, #0\n    bl sub_0205DE98\n    cmp r0, #1\n    bne _0205CE2A\n    mov r4, #1\n    ldr r0, _0205CE64 ; =_020FCB98 + 2\n    lsl r1, r4, #2\n    ldrh r0, [r0, r1]\n    cmp r0, #1\n    bne _0205CE40\n    ldr r0, _0205CE5C ; =_020FCB98\n    ldrh r4, [r0, r1]\n    add r0, r4, #0\n    bl sub_02006088\n    b _0205CE4A\n    ldr r0, _0205CE5C ; =_020FCB98\n    ldrh r4, [r0, r1]\n    add r0, r4, #0\n    bl PlaySE\n    add r0, r4, #0\n    bl sub_02005BA8\n    pop {r3, r4, r5, r6, r7, pc}\n    blo _0205CE58\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0205CE5C: .word _020FCB98\n    _0205CE60: .word SEQ_SE_GS_EDAPAKI\n    _0205CE64: .word _020FCB98 + 2"
    );
    #endif
}

void PlayerAvatar_UpdateMovement(void) {
    /* Original at 0x0205CE68 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl PlayerAvatar_GetUnk10\n    add r6, r0, #0\n    add r0, r5, #0\n    bl PlayerAvatar_GetUnk14\n    add r4, r0, #0\n    add r0, r5, #0\n    bl PlayerAvatar_GetMapObject\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk14\n    mov r1, #0\n    add r0, r5, #0\n    mvn r1, r1\n    bl sub_0205D01C\n    cmp r0, #0\n    beq _0205CEA6\n    cmp r0, #2\n    beq _0205CEA6\n    add r0, r5, #0\n    mov r1, #2\n    bl PlayerAvatar_SetUnk14\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    bne _0205CEF2\n    cmp r6, #0\n    beq _0205CF40\n    cmp r6, #1\n    beq _0205CEBE\n    cmp r6, #2\n    beq _0205CEE8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl MapObject_GetMovementCommand\n    bl sub_0205DE64\n    cmp r0, #1\n    beq _0205CF40\n    cmp r4, #0\n    beq _0205CED4\n    cmp r4, #3\n    bne _0205CEDE\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetUnk14\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #2\n    bl PlayerAvatar_SetUnk14\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #2\n    bl PlayerAvatar_SetUnk14\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    bne _0205CF40\n    cmp r6, #0\n    beq _0205CF40\n    cmp r6, #1\n    beq _0205CF0A\n    cmp r6, #2\n    beq _0205CF26\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0\n    beq _0205CF40\n    cmp r4, #3\n    bne _0205CF1C\n    add r0, r5, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk14\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #3\n    bl PlayerAvatar_SetUnk14\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0\n    beq _0205CF40\n    cmp r4, #3\n    bne _0205CF38\n    add r0, r5, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk14\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #3\n    bl PlayerAvatar_SetUnk14\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205CF44(void) {
    PlayerAvatar_SetUnk10(0);
    PlayerAvatar_SetUnk14(r4, 0);
    PlayerAvatar_ClearUnk24ClearFlag2(r4);
}

void sub_0205CF60(void) {
    /* Original at 0x0205CF60 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl PlayerAvatar_GetUnk10\n    add r4, r0, #0\n    add r0, r5, #0\n    bl PlayerAvatar_GetUnk14\n    cmp r4, #0\n    bne _0205CF78\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    cmp r4, #2\n    bne _0205CF80\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    cmp r4, #1\n    bne _0205CFB6\n    cmp r0, #0\n    beq _0205CF8C\n    cmp r0, #3\n    bne _0205CF90\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl PlayerAvatar_GetMapObject\n    add r4, r0, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _0205CFA4\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl MapObject_GetMovementCommand\n    bl sub_0205DE64\n    cmp r0, #1\n    bne _0205CFB6\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205CFBC(void) {
    /* Original at 0x0205CFBC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk10\n    add r0, r4, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk14\n    add r0, r4, #0\n    bl PlayerAvatar_GetMapObject\n    add r4, r0, #0\n    add r1, r5, #0\n    bl MapObject_SetFacingDirection\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r4, #0\n    bl sub_02060F78\n    add r0, r4, #0\n    bl MapObject_ClearHeldMovement\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r4, #0\n    bl MapObject_SetHeldMovement\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205D004(void) {
    sub_0205D01C();
    sub_0205D07C(r5, r0, r4);
}

void sub_0205D01C(void) {
    /* Original at 0x0205D01C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    bl PlayerAvatar_GetMapObject\n    bl sub_0205F504\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    bl sub_0205E078\n    cmp r0, #1\n    bne _0205D040\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl PlayerAvatar_CheckFlag1\n    cmp r0, #1\n    bne _0205D04E\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r7, #0x18\n    ldr r5, _0205D074 ; =_020FCB88\n    lsr r6, r0, #0x18\n    ldr r1, [r5]\n    add r0, r6, #0\n    blx r1\n    cmp r0, #1\n    bne _0205D066\n    ldr r0, _0205D078 ; =_020FCB88 + 4\n    lsl r1, r4, #3\n    ldr r0, [r0, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r5, #8\n    ldr r0, [r5]\n    add r4, r4, #1\n    cmp r0, #0\n    bne _0205D054\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0205D074: .word _020FCB88\n    _0205D078: .word _020FCB88 + 4"
    );
    #endif
}

void sub_0205D07C(void) {
    /* Original at 0x0205D07C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r3, r1, #0\n    add r1, r2, #0\n    ldr r2, _0205D098 ; =_020FCB7C\n    lsl r3, r3, #2\n    ldr r2, [r2, r3]\n    blx r2\n    cmp r0, #1\n    bne _0205D092\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _0205D098: .word _020FCB7C"
    );
    #endif
}

void sub_0205D09C(void) {
    sub_0205D1FC();
}

void sub_0205D0A8(void) {
    /* Original at 0x0205D0A8 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl PlayerAvatar_GetMapObject\n    add r4, r0, #0\n    bl MapObject_GetNextFacingDirection\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_0205D240\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_0205DA34\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetFlag0\n    cmp r7, #0\n    beq _0205D10A\n    add r0, r4, #0\n    bl MapObject_GetFieldSystem\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetFlag1\n    add r0, r5, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk10\n    add r0, r4, #0\n    bl sub_0206D494\n    cmp r0, #0\n    bne _0205D106\n    add r0, r5, #0\n    bl sub_0205D1FC\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl sub_0205D2A0\n    cmp r0, #0\n    bne _0205D170\n    add r0, r5, #0\n    bl sub_0205D1FC\n    add r0, r6, #0\n    bl sub_020611F4\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_0205DA34\n    cmp r0, #0\n    beq _0205D136\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #6\n    bl MapObject_SetFlagsBits\n    add r0, r6, #0\n    mov r1, #8\n    bl sub_0206234C\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205DA1C\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetFlag1\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetFlag0\n    mov r1, #0\n    mvn r1, r1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl PlayerAvatar_SetUnk28Unk2C\n    b _0205D182\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #6\n    bl MapObject_SetFlagsBits\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_0205D2D0\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetUnk10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205D190(void) {
    /* Original at 0x0205D190 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl PlayerAvatar_GetMapObject\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl sub_0205DA34\n    cmp r0, #0\n    bne _0205D1CE\n    mov r0, #1\n    mov r1, #0x14\n    bl sub_0206234C\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205DA1C\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetUnk10\n    add r0, r5, #0\n    mov r1, #3\n    bl PlayerAvatar_SetUnk24\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_0206234C\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205DA1C\n    add r0, r5, #0\n    bl PlayerAvatar_ClearUnk24ClearFlag2\n    add r0, r5, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk10\n    add r0, r5, #0\n    mov r1, #0\n    bl PlayerAvatar_SetFlag2\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205D1FC(void) {
    /* Original at 0x0205D1FC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl PlayerAvatar_CheckFlag0\n    cmp r0, #1\n    bne _0205D23E\n    add r0, r4, #0\n    bl PlayerAvatar_GetMapObject\n    mov r1, #6\n    lsl r1, r1, #6\n    bl MapObject_ClearFlagsBits\n    add r0, r4, #0\n    bl PlayerAvatar_CheckFlag7\n    cmp r0, #0\n    bne _0205D226\n    add r0, r4, #0\n    bl PlayerAvatar_ClearUnk24ClearFlag2\n    add r0, r4, #0\n    mov r1, #0\n    bl PlayerAvatar_SetFlag0\n    add r0, r4, #0\n    mov r1, #0\n    bl PlayerAvatar_SetFlag7\n    add r0, r4, #0\n    mov r1, #0\n    bl PlayerAvatar_SetFlag5\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205D240(void) {
    /* Original at 0x0205D240 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    bl PlayerAvatar_GetMapObject\n    add r4, r0, #0\n    bl MapObject_GetFieldSystem\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, sp, #0xc\n    bl MapObject_CopyPositionVector\n    add r4, sp, #0xc\n    add r3, sp, #0\n    ldmia r4!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    add r1, r2, #0\n    mov r2, #1\n    str r0, [r3]\n    add r0, r5, #0\n    lsl r2, r2, #0xe\n    bl sub_02061190\n    add r0, r6, #0\n    add r1, sp, #0\n    bl sub_0206121C\n    cmp r0, #0\n    beq _0205D288\n    ldr r1, [sp, #4]\n    ldr r0, [sp, #0x10]\n    cmp r0, r1\n    bne _0205D28E\n    add sp, #0x18\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    cmp r0, r1\n    ble _0205D298\n    add sp, #0x18\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0205D2A0(void) {
    /* Original at 0x0205D2A0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl PlayerAvatar_GetUnk24\n    add r1, r0, #0\n    cmp r4, #1\n    bne _0205D2B8\n    sub r1, r1, #1\n    bpl _0205D2C4\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r4, #2\n    bne _0205D2C4\n    add r1, r1, #1\n    cmp r1, #3\n    ble _0205D2C4\n    mov r1, #3\n    add r0, r5, #0\n    bl PlayerAvatar_SetUnk24\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205D2D0(void) {
    /* Original at 0x0205D2D0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    bl PlayerAvatar_GetMapObject\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r5, #0x10\n    bl PlayerAvatar_GetUnk24\n    cmp r0, #1\n    beq _0205D2F2\n    cmp r0, #2\n    beq _0205D2F6\n    cmp r0, #3\n    beq _0205D2FA\n    b _0205D2FC\n    mov r5, #0x50\n    b _0205D2FC\n    mov r5, #0x14\n    b _0205D2FC\n    mov r5, #0x14\n    add r0, r7, #0\n    add r1, r5, #0\n    bl sub_0206234C\n    add r7, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl sub_0205DA1C\n    add r0, r4, #0\n    bl MapObject_GetFieldSystem\n    add r5, r0, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _0205D33C\n    add r0, r4, #0\n    bl MapObject_GetPreviousXCoord\n    add r6, r0, #0\n    add r0, r4, #0\n    bl MapObject_GetPreviousZCoord\n    add r5, #0xe4\n    add r2, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    add r3, r5, #0\n    bl ov01_02205990\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205D340(void) {
    /* Original at 0x0205D340 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r7, r1, #0\n    str r2, [sp, #8]\n    add r4, r3, #0\n    bl PlayerAvatar_GetState\n    add r5, r0, #0\n    add r0, r6, #0\n    bl PlayerAvatar_GetMapObject\n    add r1, r0, #0\n    cmp r5, #3\n    bhi _0205D39E\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205D36A: ; jump table\n    str r4, [sp]\n    add r0, sp, #0x10\n    ldrh r0, [r0, #0x10]\n    ldr r3, [sp, #8]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    bl sub_0205D3A8\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    str r4, [sp]\n    add r0, sp, #0x10\n    ldrh r0, [r0, #0x10]\n    ldr r3, [sp, #8]\n    add r2, r7, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    bl sub_0205D640\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205D3A8(void) {
    /* Original at 0x0205D3A8 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r3, #0\n    add r4, r1, #0\n    add r1, r6, #0\n    add r5, r0, #0\n    bl sub_0205D40C\n    cmp r0, #0\n    beq _0205D3C8\n    cmp r0, #1\n    beq _0205D3DE\n    cmp r0, #2\n    beq _0205D3F4\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    add r3, sp, #8\n    ldrh r0, [r3, #0x14]\n    add r1, r4, #0\n    add r2, r6, #0\n    str r0, [sp]\n    ldrh r3, [r3, #0x10]\n    add r0, r5, #0\n    bl sub_0205D494\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    add r3, sp, #8\n    ldrh r0, [r3, #0x14]\n    add r1, r4, #0\n    add r2, r6, #0\n    str r0, [sp]\n    ldrh r3, [r3, #0x10]\n    add r0, r5, #0\n    bl sub_0205D4B4\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    add r3, sp, #8\n    ldrh r0, [r3, #0x14]\n    add r1, r4, #0\n    add r2, r6, #0\n    str r0, [sp]\n    ldrh r3, [r3, #0x10]\n    add r0, r5, #0\n    bl sub_0205D610\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_0205D40C(void) {
    sub_0205D450();
    sub_0205D428();
    PlayerAvatar_SetUnk10(r5, r0);
}

void sub_0205D428(void) {
    GF_AssertFail(0, 0, 1, 2);
}

void sub_0205D44C(void) {
    /* Original at 0x0205D44C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r2, #0\n    bx lr"
    );
    #endif
}

void sub_0205D450(void) {
    /* Original at 0x0205D450 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0\n    mvn r1, r1\n    add r5, r0, #0\n    cmp r4, r1\n    bne _0205D468\n    mov r1, #0\n    bl PlayerAvatar_SetUnk10\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, r4\n    beq _0205D486\n    add r0, r5, #0\n    bl PlayerAvatar_GetUnk10\n    cmp r0, #1\n    beq _0205D486\n    add r0, r5, #0\n    mov r1, #2\n    bl PlayerAvatar_SetUnk10\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetUnk10\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205D494(void) {
    MapObject_GetFacingDirection(r1);
    sub_0206234C(0);
    sub_0205DA1C(r5, r4, r0);
}

void sub_0205D4B4(void) {
    /* Original at 0x0205D4B4 */
    /* Requires manual decompilation - 144 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    mov r3, #0\n    add r6, r0, #0\n    add r5, r1, #0\n    add r7, r2, #0\n    str r3, [sp, #4]\n    bl sub_0205DA34\n    add r4, r0, #0\n    add r0, r6, #0\n    bl PlayerAvatar_GetState\n    cmp r0, #2\n    beq _0205D588\n    mov r0, #4\n    tst r0, r4\n    beq _0205D4DE\n    mov r0, #0x38\n    str r0, [sp]\n    b _0205D5CE\n    cmp r4, #0\n    beq _0205D544\n    mov r0, #0x1c\n    str r0, [sp]\n    mov r0, #8\n    tst r0, r4\n    bne _0205D536\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    mov r1, #7\n    str r0, [sp, #8]\n    bl FieldSystem_IsSaveGymmickTypeEqualTo\n    cmp r0, #0\n    beq _0205D52E\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    add r0, r7, #0\n    bl GetDeltaXByFacingDirection\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    str r0, [sp, #0x10]\n    add r0, r7, #0\n    bl GetDeltaYByFacingDirection\n    ldr r1, [sp, #0xc]\n    add r2, r0, #0\n    ldr r3, [sp, #0x10]\n    ldr r0, [sp, #8]\n    add r1, r4, r1\n    add r2, r3, r2\n    bl ov04_022566EC\n    b _0205D536\n    mov r0, #SEQ_SE_DP_WALL_HIT>>8\n    lsl r0, r0, #8\n    bl PlaySE\n    add r0, r5, #0\n    add r1, r7, #0\n    bl MapObject_SetNextFacingDirection\n    mov r0, #1\n    str r0, [sp, #4]\n    b _0205D5CE\n    add r0, r6, #0\n    mov r4, #0xc\n    bl PlayerAvatar_GetPlayerSaveData\n    bl PlayerSaveData_CheckRunningShoes\n    cmp r0, #1\n    bne _0205D564\n    add r1, sp, #0x18\n    ldrh r1, [r1, #0x10]\n    add r0, r6, #0\n    bl sub_0205DE88\n    cmp r0, #1\n    bne _0205D564\n    mov r4, #0x58\n    add r0, r5, #0\n    bl sub_0205F504\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r2, r4, #0\n    bl sub_0205D44C\n    str r0, [sp]\n    add r0, r6, #0\n    bl sub_0205E048\n    add r0, r6, #0\n    bl PlayerAvatar_SetFlag6\n    b _0205D5CE\n    cmp r4, #0\n    beq _0205D590\n    cmp r4, #0x20\n    bne _0205D5B4\n    add r0, r5, #0\n    bl sub_0205F504\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #0x10\n    bl sub_0205D44C\n    str r0, [sp]\n    add r0, r6, #0\n    bl sub_0205E048\n    add r0, r6, #0\n    bl PlayerAvatar_SetFlag6\n    b _0205D5CE\n    mov r0, #0x1c\n    str r0, [sp]\n    mov r0, #8\n    tst r0, r4\n    bne _0205D5C6\n    mov r0, #SEQ_SE_DP_WALL_HIT>>8\n    lsl r0, r0, #8\n    bl PlaySE\n    add r0, r5, #0\n    add r1, r7, #0\n    bl MapObject_SetNextFacingDirection\n    ldr r1, [sp]\n    add r0, r7, #0\n    bl sub_0206234C\n    add r7, r0, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r7, #0\n    bl sub_0205DA1C\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    bne _0205D60C\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    add r4, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPreviousXCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetPreviousZCoord\n    add r4, #0xe4\n    add r2, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    add r3, r4, #0\n    bl ov01_02205990\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205D610(void) {
    sub_0206234C(r2, 0x28);
    sub_0205DA1C(r5, r4, r0);
    MapObject_SetNextFacingDirection(r4, r6);
    PlayerAvatar_ResetUnkC(r5);
    PlayerAvatar_ToggleUnkC(r5);
}

void sub_0205D640(void) {
    sub_0205D6E8();
}

void sub_0205D658(void) {
    /* Original at 0x0205D658 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r4, #0x4c\n    bl PlayerAvatar_GetUnk24\n    cmp r0, #1\n    beq _0205D670\n    cmp r0, #2\n    beq _0205D674\n    cmp r0, #3\n    beq _0205D678\n    b _0205D67A\n    mov r4, #0x10\n    b _0205D67A\n    mov r4, #0x50\n    b _0205D67A\n    mov r4, #0x14\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0206234C\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205D684(void) {
    /* Original at 0x0205D684 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r1, #1\n    mov r2, #3\n    bl PlayerAvatar_Unk24AddWithCeiling\n    add r4, r0, #0\n    add r0, r5, #0\n    bl PlayerAvatar_CheckFlag2\n    cmp r0, #0\n    bne _0205D6A8\n    cmp r4, #2\n    blt _0205D6A8\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetFlag2\n    cmp r4, #3\n    bne _0205D6B0\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205D6B4(void) {
    /* Original at 0x0205D6B4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r6, #1\n    bl PlayerAvatar_GetUnk24\n    sub r4, r0, #1\n    bpl _0205D6C6\n    mov r4, #0\n    add r6, r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl PlayerAvatar_SetUnk24\n    add r0, r5, #0\n    bl PlayerAvatar_CheckFlag2\n    cmp r0, #1\n    bne _0205D6E4\n    cmp r4, #0\n    bne _0205D6E4\n    add r0, r5, #0\n    mov r1, #0\n    bl PlayerAvatar_SetFlag2\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0205D6E8(void) {
    /* Original at 0x0205D6E8 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r1, #0\n    add r1, r3, #0\n    add r6, r0, #0\n    str r3, [sp, #4]\n    ldr r5, [sp, #0x20]\n    ldr r4, [sp, #0x24]\n    bl sub_0205D75C\n    cmp r0, #3\n    bhi _0205D758\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205D70C: ; jump table\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    add r1, r7, #0\n    add r3, r5, #0\n    str r4, [sp]\n    bl sub_0205D818\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    add r1, r7, #0\n    add r3, r5, #0\n    str r4, [sp]\n    bl sub_0205D83C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    add r1, r7, #0\n    add r3, r5, #0\n    str r4, [sp]\n    bl sub_0205D948\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    add r1, r7, #0\n    add r3, r5, #0\n    str r4, [sp]\n    bl sub_0205D978\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205D75C(void) {
    sub_0205D7AC();
    sub_0205D778();
    PlayerAvatar_SetUnk10(r5, r0);
}

void sub_0205D778(void) {
    /* Original at 0x0205D778 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #3\n    bhi _0205D7A2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205D78A: ; jump table\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_0205D7AC(void) {
    /* Original at 0x0205D7AC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl PlayerAvatar_GetUnk24\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0205D7DC\n    cmp r6, #2\n    bge _0205D7D0\n    add r0, r5, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk10\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetUnk10\n    mov r0, #3\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, r4\n    beq _0205D80C\n    add r0, r5, #0\n    bl PlayerAvatar_GetUnk10\n    cmp r0, #1\n    beq _0205D80C\n    cmp r6, #2\n    bge _0205D800\n    add r0, r5, #0\n    mov r1, #2\n    bl PlayerAvatar_SetUnk10\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetUnk10\n    mov r0, #3\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetUnk10\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0205D818(void) {
    MapObject_GetFacingDirection(r1);
    sub_0206234C(0);
    sub_0205DA1C(r5, r4, r0);
    PlayerAvatar_ClearUnk24ClearFlag2(r5);
}

void sub_0205D83C(void) {
    /* Original at 0x0205D83C */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r2, #0\n    bl sub_0205DA34\n    add r4, r0, #0\n    mov r0, #4\n    tst r0, r4\n    beq _0205D86E\n    add r0, r6, #0\n    mov r1, #0x38\n    bl sub_0206234C\n    str r0, [sp]\n    add r0, r5, #0\n    bl sub_0205D684\n    add r0, r5, #0\n    bl sub_0205E048\n    add r0, r5, #0\n    bl PlayerAvatar_SetFlag6\n    b _0205D93A\n    mov r0, #0x10\n    tst r0, r4\n    beq _0205D8C0\n    add r0, r5, #0\n    bl PlayerAvatar_GetUnk24\n    cmp r0, #3\n    blt _0205D898\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_0205D658\n    str r0, [sp]\n    add r0, r5, #0\n    bl PlayerAvatar_SetFlag6\n    add r0, r5, #0\n    mov r1, #1\n    bl PlayerAvatar_SetFlag0\n    b _0205D93A\n    add r0, r6, #0\n    mov r1, #0x1c\n    bl sub_0206234C\n    str r0, [sp]\n    mov r0, #8\n    tst r0, r4\n    bne _0205D8B0\n    mov r0, #SEQ_SE_DP_WALL_HIT>>8\n    lsl r0, r0, #8\n    bl PlaySE\n    add r0, r7, #0\n    add r1, r6, #0\n    bl MapObject_SetNextFacingDirection\n    add r0, r5, #0\n    bl PlayerAvatar_ClearUnk24ClearFlag2\n    b _0205D93A\n    mov r0, #0x40\n    tst r0, r4\n    beq _0205D8F2\n    add r0, r7, #0\n    bl MapObject_GetNextFacingDirection\n    add r4, r0, #0\n    mov r1, #0\n    bl sub_0206234C\n    str r0, [sp]\n    add r0, r7, #0\n    add r1, r4, #0\n    bl MapObject_SetNextFacingDirection\n    add r0, r5, #0\n    bl PlayerAvatar_ClearUnk24ClearFlag2\n    mov r1, #0\n    mvn r1, r1\n    add r0, r5, #0\n    add r2, r1, #0\n    bl PlayerAvatar_SetUnk28Unk2C\n    b _0205D93A\n    cmp r4, #0\n    beq _0205D91E\n    add r0, r6, #0\n    mov r1, #0x1c\n    bl sub_0206234C\n    str r0, [sp]\n    mov r0, #8\n    tst r0, r4\n    bne _0205D90E\n    mov r0, #SEQ_SE_DP_WALL_HIT>>8\n    lsl r0, r0, #8\n    bl PlaySE\n    add r0, r7, #0\n    add r1, r6, #0\n    bl MapObject_SetNextFacingDirection\n    add r0, r5, #0\n    bl PlayerAvatar_ClearUnk24ClearFlag2\n    b _0205D93A\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_0205D658\n    str r0, [sp]\n    add r0, r5, #0\n    bl sub_0205D684\n    add r0, r5, #0\n    bl sub_0205E048\n    add r0, r5, #0\n    bl PlayerAvatar_SetFlag6\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_0205DA1C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205D948(void) {
    PlayerAvatar_ClearUnk24ClearFlag2();
    sub_0206234C(r6, 0x28);
    sub_0205DA1C(r5, r4, r0);
    MapObject_SetNextFacingDirection(r4, r6);
    PlayerAvatar_ClearUnk24ClearFlag2(r5);
}

void sub_0205D978(void) {
    /* Original at 0x0205D978 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r7, r1, #0\n    bl sub_0205D6B4\n    str r0, [sp]\n    add r0, r5, #0\n    bl PlayerAvatar_GetNextFacingDirection\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    bl sub_0205DA34\n    add r4, r0, #0\n    mov r0, #4\n    tst r0, r4\n    beq _0205D9AC\n    add r0, r6, #0\n    mov r1, #0x38\n    bl sub_0206234C\n    str r0, [sp, #4]\n    b _0205D9FE\n    mov r0, #0x40\n    tst r0, r4\n    beq _0205D9C4\n    add r0, r6, #0\n    mov r1, #0\n    bl sub_0206234C\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl PlayerAvatar_ClearUnk24ClearFlag2\n    b _0205D9FE\n    cmp r4, #0\n    beq _0205D9F4\n    mov r0, #0\n    str r0, [sp]\n    add r0, r6, #0\n    mov r1, #0x1c\n    bl sub_0206234C\n    str r0, [sp, #4]\n    mov r0, #8\n    tst r0, r4\n    bne _0205D9E4\n    mov r0, #SEQ_SE_DP_WALL_HIT>>8\n    lsl r0, r0, #8\n    bl PlaySE\n    add r0, r7, #0\n    add r1, r6, #0\n    bl MapObject_SetNextFacingDirection\n    add r0, r5, #0\n    bl PlayerAvatar_ClearUnk24ClearFlag2\n    b _0205D9FE\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_0205D658\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    cmp r0, #0\n    bne _0205DA0C\n    add r0, r5, #0\n    mov r1, #0\n    bl PlayerAvatar_SetFlag2\n    ldr r2, [sp, #4]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_0205DA1C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205DA1C(void) {
    PlayerAvatar_SetUnk8(r2);
    MapObject_SetHeldMovement(r5, r4);
}

void sub_0205DA34(void) {
    /* Original at 0x0205DA34 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    mov r4, #0\n    bl sub_0205DAA8\n    mov r1, #0xa\n    str r0, [sp]\n    tst r0, r1\n    beq _0205DA60\n    mov r0, #1\n    orr r4, r0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_0205DBF4\n    cmp r0, #0\n    beq _0205DA60\n    mov r0, #8\n    orr r4, r0\n    ldr r0, [sp]\n    mov r1, #4\n    tst r0, r1\n    beq _0205DA6C\n    mov r0, #2\n    orr r4, r0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_0205DB68\n    cmp r0, #0\n    beq _0205DA7E\n    mov r0, #4\n    orr r4, r0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_0205DCA0\n    cmp r0, #1\n    bne _0205DA90\n    mov r0, #0x20\n    orr r4, r0\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_0205DCFC\n    cmp r0, #1\n    bne _0205DAA2\n    mov r0, #1\n    orr r4, r0\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205DAA8(void) {
    /* Original at 0x0205DAA8 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    str r2, [sp, #4]\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    bl GetDeltaXByFacingDirection\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl MapObject_GetYCoord\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    bl GetDeltaYByFacingDirection\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    add r1, sp, #0x1c\n    bl MapObject_CopyPositionVector\n    ldr r1, [sp, #0x14]\n    ldr r6, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    ldr r2, [sp, #8]\n    add r0, r5, #0\n    add r1, r7, r1\n    add r3, r6, r3\n    mov r4, #0\n    bl sub_02060D94\n    cmp r0, #1\n    bne _0205DAFC\n    mov r0, #1\n    orr r4, r0\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    ldr r2, [sp, #0x14]\n    add r1, sp, #0x18\n    str r1, [sp]\n    ldr r6, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r1, sp, #0x1c\n    add r2, r7, r2\n    add r3, r6, r3\n    bl sub_020549F4\n    cmp r0, #1\n    bne _0205DB2C\n    mov r0, #2\n    orr r4, r0\n    add r1, sp, #0x18\n    mov r0, #0\n    ldrsb r0, [r1, r0]\n    cmp r0, #0\n    beq _0205DB2C\n    mov r0, #8\n    orr r4, r0\n    ldr r3, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    ldr r1, [sp, #0x14]\n    add r2, r3, r2\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    add r1, r7, r1\n    bl sub_02060DEC\n    cmp r0, #1\n    bne _0205DB46\n    mov r0, #2\n    orr r4, r0\n    add r0, r5, #0\n    ldr r1, [sp, #0x14]\n    ldr r5, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    ldr r2, [sp, #8]\n    add r1, r7, r1\n    add r3, r5, r3\n    bl sub_02060BFC\n    cmp r0, #1\n    bne _0205DB60\n    mov r0, #4\n    orr r4, r0\n    add r0, r4, #0\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205DB68(void) {
    /* Original at 0x0205DB68 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r0, #0\n    add r4, r2, #0\n    mvn r0, r0\n    add r5, r1, #0\n    cmp r4, r0\n    beq _0205DBF0\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    str r0, [sp]\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r4, #0\n    bl GetDeltaXByFacingDirection\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    add r5, r0, #0\n    add r0, r4, #0\n    bl GetDeltaYByFacingDirection\n    add r2, r0, #0\n    ldr r0, [sp]\n    add r1, r6, r7\n    add r2, r5, r2\n    bl GetMetatileBehavior\n    cmp r4, #3\n    bhi _0205DBF0\n    add r1, r4, r4\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0205DBB8: ; jump table\n    bl sub_0205B7B0\n    cmp r0, #1\n    bne _0205DBF0\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_0205B7BC\n    cmp r0, #1\n    bne _0205DBF0\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_0205B7C8\n    cmp r0, #1\n    bne _0205DBF0\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_0205B7D4\n    cmp r0, #1\n    bne _0205DBF0\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205DBF4(void) {
    /* Original at 0x0205DBF4 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r0, #0\n    add r4, r2, #0\n    mvn r0, r0\n    add r5, r1, #0\n    cmp r4, r0\n    beq _0205DC9C\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    str r0, [sp]\n    ldr r2, [sp]\n    add r0, r7, #0\n    add r1, r6, #0\n    bl GetMetatileBehavior\n    add r5, r0, #0\n    cmp r4, #3\n    bhi _0205DC74\n    add r1, r4, r4\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0205DC36: ; jump table\n    bl sub_0205B730\n    cmp r0, #1\n    bne _0205DC4A\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl sub_0205B73C\n    cmp r0, #1\n    bne _0205DC58\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl sub_0205B724\n    cmp r0, #1\n    bne _0205DC66\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl sub_0205B718\n    cmp r0, #1\n    bne _0205DC74\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl GetDeltaXByFacingDirection\n    add r5, r0, #0\n    add r0, r4, #0\n    bl GetDeltaYByFacingDirection\n    add r3, r0, #0\n    ldr r2, [sp]\n    add r0, r7, #0\n    add r1, r6, r5\n    add r2, r2, r3\n    bl GetMetatileBehavior\n    bl sub_0205B70C\n    cmp r0, #1\n    bne _0205DC9C\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205DCA0(void) {
    /* Original at 0x0205DCA0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    mov r0, #0\n    add r4, r2, #0\n    mvn r0, r0\n    add r5, r1, #0\n    cmp r4, r0\n    beq _0205DCF6\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    str r0, [sp]\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r4, #0\n    bl GetDeltaXByFacingDirection\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl GetDeltaYByFacingDirection\n    add r3, r0, #0\n    ldr r2, [sp, #4]\n    ldr r0, [sp]\n    add r1, r6, r7\n    add r2, r2, r3\n    bl GetMetatileBehavior\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_02060E54\n    cmp r0, #0\n    beq _0205DCF6\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205DCFC(void) {
    /* Original at 0x0205DCFC */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    mov r1, #0\n    add r4, r2, #0\n    mvn r1, r1\n    cmp r4, r1\n    beq _0205DD8E\n    bl PlayerAvatar_GetState\n    cmp r0, #1\n    bne _0205DD8E\n    add r0, r5, #0\n    bl MapObject_GetFieldSystem\n    str r0, [sp]\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    add r6, r0, #0\n    add r0, r4, #0\n    bl GetDeltaXByFacingDirection\n    add r7, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl GetDeltaYByFacingDirection\n    add r3, r0, #0\n    ldr r2, [sp, #4]\n    ldr r0, [sp]\n    add r1, r6, r7\n    add r2, r2, r3\n    bl GetMetatileBehavior\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060E54\n    cmp r0, #0\n    beq _0205DD5C\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060EBC\n    cmp r0, #0\n    beq _0205DD6E\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B6F4\n    cmp r0, #0\n    beq _0205DD7E\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B8AC\n    cmp r0, #0\n    beq _0205DD8E\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205DD94(void) {
    sub_0205DDD4();
}

void sub_0205DD9C(void) {
    /* Original at 0x0205DD9C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x20\n    tst r1, r0\n    beq _0205DDA6\n    mov r0, #2\n    bx lr\n    mov r1, #0x10\n    tst r0, r1\n    beq _0205DDB0\n    mov r1, #3\n    b _0205DDB2\n    sub r1, #0x11\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void sub_0205DDB8(void) {
    /* Original at 0x0205DDB8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x40\n    tst r1, r0\n    beq _0205DDC2\n    mov r0, #0\n    bx lr\n    mov r1, #0x80\n    tst r0, r1\n    beq _0205DDCC\n    mov r1, #1\n    b _0205DDCE\n    sub r1, #0x81\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void sub_0205DDD4(void) {
    /* Original at 0x0205DDD4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r2, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl sub_0205DD9C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl sub_0205DDB8\n    mov r1, #0\n    mvn r1, r1\n    add r5, r0, #0\n    cmp r4, r1\n    beq _0205DE34\n    cmp r5, r1\n    bne _0205DDFA\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl PlayerAvatar_GetNextFacingDirection\n    add r7, r0, #0\n    add r0, r6, #0\n    bl PlayerAvatar_GetUnk28\n    str r0, [sp]\n    add r0, r6, #0\n    bl PlayerAvatar_GetUnk2C\n    mov r1, #0\n    mvn r1, r1\n    cmp r7, r1\n    beq _0205DE32\n    ldr r1, [sp]\n    cmp r4, r1\n    bne _0205DE26\n    cmp r5, r0\n    bne _0205DE26\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r5, r0\n    beq _0205DE2E\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205DE38(void) {
    /* Original at 0x0205DE38 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl PlayerAvatar_GetMapObject\n    add r4, r0, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _0205DE4C\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl MapObject_GetMovementCommand\n    bl sub_0205DE64\n    cmp r0, #1\n    bne _0205DE5E\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205DE64(void) {
    /* Original at 0x0205DE64 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "sub r0, #0x1c\n    cmp r0, #3\n    bhi _0205DE82\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205DE76: ; jump table\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_0205DE88(void) {
    /* Original at 0x0205DE88 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #2\n    tst r0, r1\n    beq _0205DE92\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_0205DE98(void) {
    /* Original at 0x0205DE98 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl PlayerAvatar_GetUnk8\n    sub r0, #0x58\n    cmp r0, #3\n    bhi _0205DEBC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205DEB0: ; jump table\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_0205DEC0(void) {
    /* Original at 0x0205DEC0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl PlayerAvatar_GetState\n    cmp r0, #3\n    bhi _0205DF02\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205DEDA: ; jump table\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_0205D450\n    bl sub_0205D428\n    add r4, r0, #0\n    b _0205DF08\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_0205D7AC\n    bl sub_0205D778\n    add r4, r0, #0\n    b _0205DF08\n    mov r4, #0\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205DF0C(void) {
    /* Original at 0x0205DF0C */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    bl sub_0205DDD4\n    str r0, [sp]\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl sub_0205DEC0\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl PlayerAvatar_SetUnk10\n    cmp r4, #0\n    bne _0205DF3E\n    add r0, r5, #0\n    bl PlayerAvatar_GetFacingDirection\n    mov r1, #0\n    bl sub_0206234C\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #2\n    bne _0205DF4C\n    ldr r0, [sp]\n    mov r1, #0x28\n    bl sub_0206234C\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl PlayerAvatar_GetMapObject\n    ldr r0, [sp, #0x1c]\n    mov r4, #4\n    add r1, r0, #0\n    tst r1, r4\n    beq _0205DF60\n    mov r4, #0x38\n    b _0205DFBE\n    cmp r0, #0\n    beq _0205DF76\n    mov r1, #8\n    mov r4, #0x1c\n    tst r0, r1\n    bne _0205DFBE\n    mov r0, #SEQ_SE_DP_WALL_HIT>>8\n    lsl r0, r0, #8\n    bl PlaySE\n    b _0205DFBE\n    cmp r6, #5\n    bhi _0205DFA8\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0205DF86: ; jump table\n    b _0205DFAA\n    mov r4, #8\n    b _0205DFAA\n    mov r4, #0xc\n    b _0205DFAA\n    mov r4, #0x4c\n    b _0205DFAA\n    mov r4, #0x10\n    b _0205DFAA\n    mov r4, #0x14\n    b _0205DFAA\n    mov r4, #4\n    ldr r0, [sp, #0x18]\n    cmp r0, #1\n    bne _0205DFBE\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_0205DE88\n    cmp r0, #1\n    bne _0205DFBE\n    mov r4, #0x58\n    ldr r0, [sp]\n    add r1, r4, #0\n    bl sub_0206234C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0205DFC8(void) {
    PlayerAvatar_GetMapObject();
    MapObject_AreBitsSetForMovementScriptInit();
}

void sub_0205DFD4(void) {
    PlayerAvatar_GetMapObject();
    sub_0205DA1C(r5, r0, r4);
}

void sub_0205DFEC(void) {
    PlayerAvatar_GetMapObject();
    sub_02060FA8(r4);
}

void sub_0205DFFC(void) {
    /* Original at 0x0205DFFC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    str r0, [sp]\n    add r6, r2, #0\n    add r7, r3, #0\n    bl PlayerAvatar_GetXCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl GetDeltaXByFacingDirection\n    add r0, r4, r0\n    str r0, [r6]\n    ldr r0, [sp]\n    bl PlayerAvatar_GetZCoord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl GetDeltaYByFacingDirection\n    add r0, r4, r0\n    str r0, [r7]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void PlayerAvatar_GetCoordsInFront(void) {
    PlayerAvatar_GetFacingDirection();
    sub_0205DFFC(r5, r0, r4, r6);
}

void sub_0205E048(void) {
    /* Original at 0x0205E048 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_GetFieldSystem\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_GameStats_Get\n    mov r1, #0\n    add r4, r0, #0\n    bl GameStats_Inc\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetState\n    cmp r0, #1\n    bne _0205E074\n    add r0, r4, #0\n    mov r1, #1\n    bl GameStats_Inc\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0205E078(void) {
    /* Original at 0x0205E078 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0\n    mvn r1, r1\n    add r5, r0, #0\n    cmp r2, r1\n    beq _0205E08A\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    bl PlayerAvatar_GetState\n    cmp r0, #1\n    beq _0205E096\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl PlayerAvatar_CheckBikeStateLocked\n    cmp r0, #0\n    bne _0205E0A4\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl PlayerAvatar_GetMapObject\n    add r1, r4, #0\n    bl sub_02060EEC\n    cmp r0, #1\n    bne _0205E0B8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
