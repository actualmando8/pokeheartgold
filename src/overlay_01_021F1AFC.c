/* Decompiled from asm/overlay_01_021F1AFC.s */
#include "global.h"

void Field_PlayerAvatar_OrrTransitionFlags(void) {
    PlayerAvatar_SetTransitionFlagsBits();
}

void Field_PlayerAvatar_ApplyTransitionFlags(void) {
    /* Original at 0x021F1B04 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r6, #0\n    bl PlayerAvatar_GetTransitionFlags\n    ldr r5, _021F1B34 ; =sPlayerAvatarBitUpdateFuncs\n    add r4, r0, #0\n    mov r0, #1\n    tst r0, r4\n    beq _021F1B1E\n    ldr r1, [r5]\n    add r0, r7, #0\n    blx r1\n    add r6, r6, #1\n    lsr r4, r4, #1\n    add r5, r5, #4\n    cmp r6, #0xf\n    blo _021F1B12\n    add r0, r7, #0\n    mov r1, #0\n    bl PlayerAvatar_SetTransitionFlags\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F1B34: .word sPlayerAvatarBitUpdateFuncs"
    );
    #endif
}

void ov01_021F1B38(void) {
    /* Original at 0x021F1B38 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl PlayerAvatar_GetGender\n    add r1, r0, #0\n    mov r0, #0\n    bl PlayerAvatar_GetSpriteByStateAndGender\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov01_021F3084\n    add r0, r4, #0\n    mov r1, #0\n    bl PlayerAvatar_SetState\n    add r0, r4, #0\n    bl PlayerAvatar_ClearUnk24ClearFlag2\n    add r0, r4, #0\n    bl PlayerAvatar_GetUnk34\n    cmp r0, #0\n    beq _021F1B6C\n    bl ov01_021F1640\n    add r0, r4, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk34\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F1B78(void) {
    /* Original at 0x021F1B78 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl PlayerAvatar_GetGender\n    add r1, r0, #0\n    mov r0, #1\n    bl PlayerAvatar_GetSpriteByStateAndGender\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov01_021F3084\n    add r0, r4, #0\n    mov r1, #1\n    bl PlayerAvatar_SetState\n    add r0, r4, #0\n    bl PlayerAvatar_ClearUnk24ClearFlag2\n    add r0, r4, #0\n    bl PlayerAvatar_GetUnk34\n    cmp r0, #0\n    beq _021F1BAC\n    bl ov01_021F1640\n    add r0, r4, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk34\n    ldr r0, _021F1BBC ; =SEQ_SE_DP_JITENSYA\n    bl PlaySE\n    pop {r4, pc}\n    _021F1BBC: .word SEQ_SE_DP_JITENSYA"
    );
    #endif
}

void ov01_021F1BC0(void) {
    /* Original at 0x021F1BC0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    bl PlayerAvatar_GetGender\n    add r1, r0, #0\n    mov r0, #2\n    bl PlayerAvatar_GetSpriteByStateAndGender\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov01_021F3084\n    add r0, r5, #0\n    mov r1, #2\n    bl PlayerAvatar_SetState\n    add r0, r5, #0\n    bl PlayerAvatar_ClearUnk24ClearFlag2\n    add r0, r5, #0\n    bl PlayerAvatar_GetUnk34\n    cmp r0, #0\n    beq _021F1BF6\n    bl ov01_021F1640\n    add r0, r5, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk34\n    add r0, r5, #0\n    bl PlayerAvatar_GetFacingDirection\n    add r4, r0, #0\n    add r0, r5, #0\n    bl PlayerAvatar_GetMapObject\n    add r6, r0, #0\n    bl MapObject_GetFieldSystem\n    mov r0, #1\n    mov r1, #0\n    str r0, [sp]\n    add r0, r6, #0\n    add r2, r1, #0\n    add r3, r4, #0\n    bl ov01_021FE7DC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl PlayerAvatar_SetUnk34\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F1C30(void) {
    /* Original at 0x021F1C30 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl PlayerAvatar_GetGender\n    add r1, r0, #0\n    mov r0, #3\n    bl PlayerAvatar_GetSpriteByStateAndGender\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov01_021F3084\n    add r0, r4, #0\n    mov r1, #3\n    bl PlayerAvatar_SetState\n    add r0, r4, #0\n    bl PlayerAvatar_ClearUnk24ClearFlag2\n    add r0, r4, #0\n    bl PlayerAvatar_GetUnk34\n    cmp r0, #0\n    beq _021F1C64\n    bl ov01_021F1640\n    add r0, r4, #0\n    mov r1, #0\n    bl PlayerAvatar_SetUnk34\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F1C70(void) {
    PlayerAvatar_SetFlag1();
}

void ov01_021F1C7C(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(5, r0);
    ov01_021F3084(r4, r0);
}

void ov01_021F1C98(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(7, r0);
    ov01_021F3084(r4, r0);
}

void ov01_021F1CB4(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(8, r0);
    ov01_021F3084(r4, r0);
}

void ov01_021F1CD0(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(9, r0);
    ov01_021F3084(r4, r0);
}

void ov01_021F1CEC(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(0xa, r0);
    ov01_021F3084(r4, r0);
}

void ov01_021F1D08(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(0xb, r0);
    ov01_021F3084(r4, r0);
}

void ov01_021F1D24(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(0xc, r0);
    ov01_021F3084(r4, r0);
}

void ov01_021F1D40(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(6, r0);
    ov01_021F3084(r4, r0);
}

void ov01_021F1D5C(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(0xd, r0);
    ov01_021F3084(r4, r0);
}

void ov01_021F1D78(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(0xe, r0);
    ov01_021F3084(r4, r0);
}

void ov01_021F1D94(void) {
    /* Original at 0x021F1D94 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r4, r2, #0\n    add r7, r3, #0\n    bl PlayerAvatar_CheckFlag0\n    cmp r0, #1\n    bne _021F1DBE\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r7, #0\n    bl ov01_021F2538\n    cmp r0, #1\n    bne _021F1DBA\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205CBE4\n    cmp r0, #0\n    bne _021F1DCE\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _021F1DDA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov01_021F1DF4\n    cmp r0, #1\n    bne _021F1DEE\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F1DF4(void) {
    /* Original at 0x021F1DF4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r6, r3, #0\n    bl sub_0205DEC0\n    str r0, [sp]\n    mov r0, #1\n    tst r0, r6\n    beq _021F1E22\n    ldr r3, [sp]\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov01_021F1E54\n    cmp r0, #1\n    bne _021F1E22\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #2\n    tst r0, r6\n    beq _021F1E3C\n    ldr r3, [sp]\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov01_021F24F4\n    cmp r0, #1\n    bne _021F1E3C\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r3, [sp]\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl ov01_021F232C\n    cmp r0, #1\n    bne _021F1E50\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F1E54(void) {
    /* Original at 0x021F1E54 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r3, #1\n    beq _021F1E64\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_021F3094\n    add r6, r0, #0\n    bne _021F1E74\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl MapObject_GetSpriteID\n    cmp r0, #0x54\n    beq _021F1E80\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_02060BB8\n    mov r1, #1\n    bic r0, r1\n    beq _021F1E92\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    add r3, r6, #0\n    bl ov01_021F1EA4\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F1EA4(void) {
    /* Original at 0x021F1EA4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x14\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov01_021F30D0\n    add r2, r0, #0\n    str r5, [r2, #4]\n    str r4, [r2, #8]\n    str r7, [r2, #0x10]\n    ldr r1, _021F1EC8 ; =ov01_021F1ECC\n    add r0, r4, #0\n    str r6, [r2, #0xc]\n    bl FieldSystem_CreateTask\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F1EC8: .word ov01_021F1ECC"
    );
    #endif
}

void ov01_021F1ECC(void) {
    /* Original at 0x021F1ECC */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl PlayerAvatar_GetMapObject\n    add r6, r0, #0\n    ldr r0, [r4]\n    ldr r5, [r4, #0x10]\n    cmp r0, #0\n    beq _021F1EF0\n    cmp r0, #1\n    beq _021F1F3C\n    cmp r0, #2\n    beq _021F1F62\n    b _021F1F82\n    add r0, r5, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _021F1F82\n    add r0, r6, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    bne _021F1F0E\n    ldr r0, [r4, #0xc]\n    bl sub_0205DE38\n    cmp r0, #0\n    beq _021F1F82\n    ldr r0, [r4, #4]\n    mov r1, #8\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r5, #0\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4, #4]\n    mov r1, #0x20\n    bl sub_0206234C\n    add r1, r0, #0\n    add r0, r6, #0\n    bl MapObject_SetHeldMovement\n    ldr r0, _021F1F88 ; =SEQ_SE_DP_UG_023\n    bl PlaySE\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F1F82\n    add r0, r5, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    beq _021F1F82\n    add r0, r6, #0\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    beq _021F1F82\n    add r0, r5, #0\n    bl MapObject_ClearHeldMovementIfActive\n    add r0, r6, #0\n    bl MapObject_ClearHeldMovementIfActive\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r6, [r4, #8]\n    add r0, r4, #0\n    bl ov01_021F30F4\n    ldr r0, [r6, #0x20]\n    ldr r0, [r0]\n    cmp r0, #0xed\n    bne _021F1F7E\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov01_021F2004\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F1F88: .word SEQ_SE_DP_UG_023"
    );
    #endif
}

void ov01_021F1F8C(void) {
    /* Original at 0x021F1F8C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r4, _021F2000 ; =ov01_02206A14\n    add r7, r0, #0\n    add r5, r1, #0\n    mov r6, #0\n    add r0, r5, #0\n    bl MapObject_GetMapID\n    ldrh r1, [r4]\n    cmp r1, r0\n    bne _021F1FF4\n    add r0, r5, #0\n    bl MapObject_GetID\n    ldrh r1, [r4, #6]\n    cmp r1, r0\n    bne _021F1FF4\n    add r0, r5, #0\n    bl MapObject_GetXCoord\n    ldrh r1, [r4, #2]\n    cmp r1, r0\n    bne _021F1FF4\n    add r0, r5, #0\n    bl MapObject_GetZCoord\n    ldrh r1, [r4, #4]\n    cmp r1, r0\n    bne _021F1FF4\n    add r0, r5, #0\n    bl MapObject_GetEventFlag\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    add r0, r7, #0\n    lsr r1, r1, #0x10\n    bl FieldSystem_FlagSet\n    add r0, r5, #0\n    bl MapObject_Delete\n    mov r1, #0xa\n    add r2, r6, #0\n    mul r2, r1\n    ldr r1, _021F2000 ; =ov01_02206A14\n    add r0, r7, #0\n    add r1, r1, r2\n    ldrh r1, [r1, #8]\n    bl FieldSystem_FlagClear\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r6, r6, #1\n    add r4, #0xa\n    cmp r6, #4\n    blo _021F1F96\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F2000: .word ov01_02206A14"
    );
    #endif
}

void ov01_021F2004(void) {
    /* Original at 0x021F2004 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    bl ov01_021F1F8C\n    cmp r0, #0\n    bne _021F2018\n    mov r0, #1\n    pop {r4, pc}\n    ldr r1, _021F2028 ; =0x0000271F\n    add r0, r4, #0\n    mov r2, #0\n    bl StartScriptFromMenu\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021F2028: .word 0x0000271F"
    );
    #endif
}

void ov01_021F202C(void) {
    /* Original at 0x021F202C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x2c\n    add r7, r1, #0\n    add r5, r2, #0\n    bl ov01_021F30D0\n    add r4, r0, #0\n    str r7, [r4, #4]\n    str r6, [r4, #0x1c]\n    ldr r0, [r6, #0x40]\n    str r0, [r4, #0x20]\n    bl PlayerAvatar_GetMapObject\n    add r2, r4, #0\n    str r0, [r4, #0x24]\n    add r2, #0xc\n    ldmia r5!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r6, #0x10]\n    ldr r1, _021F2064 ; =ov01_021F2118\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F2064: .word ov01_021F2118"
    );
    #endif
}

void CallFieldTask_Surf(void) {
    /* Original at 0x021F2068 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r2, #0\n    add r5, r1, #0\n    bl TaskManager_GetFieldSystem\n    add r4, r0, #0\n    add r1, r6, #0\n    bl ov01_021F3100\n    add r1, r0, #0\n    add r0, r4, #0\n    add r2, sp, #0\n    bl ov01_021F3040\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetState\n    sub r0, r0, #1\n    cmp r0, #1\n    bhi _021F2098\n    mov r0, #1\n    str r0, [sp]\n    b _021F20B0\n    add r0, r4, #0\n    bl ov01_02206268\n    cmp r0, #0\n    beq _021F20B0\n    add r0, r4, #0\n    bl ov01_022062CC\n    cmp r6, r0\n    bne _021F20B0\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, sp, #0\n    bl ov01_021F202C\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void Field_PlayerCanSurfOnTile(void) {
    /* Original at 0x021F20C0 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r5, r1, #0\n    bl PlayerAvatar_GetMapObject\n    add r6, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl MetatileBehavior_IsSurfableWater\n    cmp r0, #1\n    bne _021F2112\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205BA30\n    cmp r0, #1\n    beq _021F20F0\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205BA24\n    cmp r0, #1\n    bne _021F20FE\n    add r0, r6, #0\n    bl MapObject_CheckFlag28\n    cmp r0, #1\n    bne _021F20FE\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B78C\n    cmp r0, #1\n    bne _021F210E\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F2118(void) {
    /* Original at 0x021F2118 */
    /* Requires manual decompilation - 214 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #9\n    bhi _021F221C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021F2134: ; jump table\n    ldr r0, [r4, #0x1c]\n    ldr r0, [r0, #0xc]\n    bl Save_VarsFlags_Get\n    bl CheckFlag99A\n    cmp r0, #0\n    bne _021F2172\n    bl SndRadio_GetSeqNo\n    cmp r0, #0\n    bne _021F2172\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    bl FieldBGM_SetOverride\n    ldr r0, [r4, #0x1c]\n    ldr r1, _021F2328 ; =0x000003F6\n    mov r2, #1\n    bl FieldBGM_TryFadeOut\n    ldr r0, [r4]\n    add r0, r0, #1\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F2324\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0xa\n    ble _021F221C\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F2324\n    ldr r0, [r4, #0xc]\n    cmp r0, #1\n    ldr r0, [r4, #0x1c]\n    bne _021F21A8\n    add r1, r4, #0\n    add r1, #0xc\n    bl ov01_021F3054\n    mov r0, #5\n    str r0, [r4]\n    b _021F2324\n    mov r1, #0xb\n    bl ov02_02250780\n    cmp r0, #0\n    beq _021F21C4\n    mov r0, #0x42\n    ldr r1, [r4, #0x1c]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl FieldSystem_UnkSub108_AddMonMood\n    mov r1, #2\n    b _021F21C6\n    mov r1, #1\n    ldr r0, [r4, #0x1c]\n    bl ov02_022507B4\n    mov r0, #3\n    str r0, [r4]\n    b _021F2324\n    ldr r0, [r4, #0x14]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r5, r0, #0\n    ldr r0, [r4, #0x14]\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    lsl r0, r5, #0x10\n    lsl r1, r1, #0x18\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x18\n    bl PlayCry\n    mov r0, #4\n    str r0, [r4]\n    b _021F2324\n    bl IsCryFinished\n    cmp r0, #0\n    bne _021F221C\n    add r0, r5, #0\n    bl ov01_02205EE0\n    mov r0, #6\n    str r0, [r4]\n    b _021F2324\n    add r0, r4, #0\n    add r0, #0xc\n    bl ov01_021F3068\n    cmp r0, #1\n    beq _021F221E\n    b _021F2324\n    ldr r0, [r4, #0x1c]\n    bl ov01_02205D68\n    mov r0, #6\n    str r0, [r4]\n    b _021F2324\n    ldr r0, [r4, #0x20]\n    bl PlayerAvatar_GetXCoord\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    bl GetDeltaXByFacingDirection\n    add r6, r0, #0\n    ldr r0, [r4, #0x20]\n    bl PlayerAvatar_GetZCoord\n    add r7, r0, #0\n    ldr r0, [r4, #4]\n    bl GetDeltaYByFacingDirection\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r4, #0x24]\n    ldr r3, [r4, #4]\n    add r1, r5, r6\n    add r2, r7, r2\n    bl ov01_021FE7DC\n    str r0, [r4, #0x28]\n    ldr r0, [r4, #0x20]\n    ldr r1, [r4, #0x28]\n    bl PlayerAvatar_SetUnk34\n    ldr r0, [r4, #0x20]\n    mov r1, #2\n    bl PlayerAvatar_SetState\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F2324\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0xa\n    ble _021F2324\n    ldr r0, [r4, #0x20]\n    bl PlayerAvatar_GetGender\n    add r1, r0, #0\n    mov r0, #0\n    bl PlayerAvatar_GetSpriteByStateAndGender\n    add r1, r0, #0\n    ldr r0, [r4, #0x20]\n    bl ov01_021F3084\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F2324\n    ldr r0, [r4, #0x24]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021F2324\n    ldr r0, [r4, #4]\n    mov r1, #0x34\n    bl sub_0206234C\n    add r1, r0, #0\n    ldr r0, [r4, #0x24]\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _021F2324\n    ldr r0, [r4, #0x24]\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    beq _021F2324\n    ldr r0, [r4, #0x24]\n    bl MapObject_ClearHeldMovementIfActive\n    ldr r0, [r4, #0x28]\n    mov r1, #1\n    bl ov01_021FE9F4\n    ldr r0, [r4, #0x20]\n    bl PlayerAvatar_GetGender\n    add r1, r0, #0\n    mov r0, #2\n    bl PlayerAvatar_GetSpriteByStateAndGender\n    add r1, r0, #0\n    ldr r0, [r4, #0x20]\n    bl ov01_021F3084\n    ldr r0, [r4, #0x1c]\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _021F2312\n    ldr r1, [r4, #4]\n    ldr r0, [r4, #0x1c]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov01_02205790\n    ldr r0, [r4, #0x1c]\n    bl FollowMon_GetMapObject\n    mov r1, #0x38\n    bl sub_0205FC94\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    bl ov01_021E7F00\n    add r0, r4, #0\n    bl ov01_021F30F4\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F2328: .word 0x000003F6"
    );
    #endif
}

void ov01_021F232C(void) {
    /* Original at 0x021F232C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r3, #1\n    bne _021F2342\n    add r0, r5, #0\n    bl PlayerAvatar_GetState\n    cmp r0, #2\n    beq _021F2346\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    bl PlayerAvatar_GetMapObject\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl sub_0205DA34\n    cmp r0, #0x20\n    bne _021F235E\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r1, #0x20\n    bic r0, r1\n    beq _021F2368\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov01_021F2378\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F2378(void) {
    /* Original at 0x021F2378 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x18\n    add r5, r1, #0\n    add r7, r2, #0\n    bl ov01_021F30D0\n    add r4, r0, #0\n    str r6, [r4, #4]\n    str r5, [r4, #8]\n    str r7, [r4, #0xc]\n    add r0, r7, #0\n    bl PlayerAvatar_GetMapObject\n    str r0, [r4, #0x10]\n    add r0, r7, #0\n    bl PlayerAvatar_GetUnk34\n    str r0, [r4, #0x14]\n    cmp r0, #0\n    bne _021F23A6\n    bl GF_AssertFail\n    ldr r1, _021F23B4 ; =ov01_021F23B8\n    add r0, r5, #0\n    add r2, r4, #0\n    bl FieldSystem_CreateTask\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F23B4: .word ov01_021F23B8"
    );
    #endif
}

void ov01_021F23B8(void) {
    /* Original at 0x021F23B8 */
    /* Requires manual decompilation - 126 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _021F23D0\n    cmp r0, #1\n    beq _021F2412\n    cmp r0, #2\n    beq _021F24B8\n    b _021F24F0\n    ldr r0, [r4, #0x10]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    beq _021F23DC\n    b _021F24F0\n    ldr r0, [r4, #0xc]\n    bl PlayerAvatar_GetGender\n    add r1, r0, #0\n    mov r0, #0\n    bl PlayerAvatar_GetSpriteByStateAndGender\n    add r1, r0, #0\n    ldr r0, [r4, #0xc]\n    bl ov01_021F3084\n    ldr r0, [r4, #4]\n    mov r1, #0x34\n    bl sub_0206234C\n    add r1, r0, #0\n    ldr r0, [r4, #0x10]\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4, #0x14]\n    mov r1, #0\n    bl ov01_021FE9F4\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    b _021F24F0\n    ldr r0, [r4, #0x10]\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    beq _021F24F0\n    ldr r0, [r4, #0x10]\n    bl MapObject_ClearHeldMovementIfActive\n    ldr r0, [r4, #0x14]\n    bl ov01_021F1640\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl PlayerAvatar_SetUnk34\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl PlayerAvatar_SetState\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl ov01_021E7F00\n    ldr r0, [r4, #8]\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _021F2476\n    ldr r1, [r4, #4]\n    ldr r0, [r4, #8]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov01_02205790\n    ldr r0, [r4, #8]\n    bl FollowMon_GetMapObject\n    mov r1, #1\n    bl sub_02069DC8\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl ov01_0220609C\n    ldr r0, [r4, #8]\n    bl FollowMon_GetMapObject\n    mov r1, #0x30\n    bl sub_0205FC94\n    ldr r0, [r4, #8]\n    ldr r0, [r0, #0xc]\n    bl Save_VarsFlags_Get\n    bl CheckFlag99A\n    cmp r0, #0\n    bne _021F249A\n    ldr r0, [r4, #8]\n    ldr r1, [r0, #0x20]\n    ldr r1, [r1]\n    bl FieldBGM_GetForMapHeader\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    mov r2, #4\n    bl FieldBGM_TryFadeOut\n    bl SndRadio_GetSeqNo\n    cmp r0, #0\n    beq _021F24AE\n    mov r0, #0x28\n    strh r0, [r4, #2]\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    b _021F24F0\n    add r0, r4, #0\n    bl ov01_021F30F4\n    mov r0, #1\n    pop {r4, pc}\n    bl SndRadio_GetSeqNo\n    cmp r0, #0\n    bne _021F24D2\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl ov01_021E7F00\n    add r0, r4, #0\n    bl ov01_021F30F4\n    mov r0, #1\n    pop {r4, pc}\n    ldrh r0, [r4, #2]\n    sub r0, r0, #1\n    strh r0, [r4, #2]\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    bne _021F24F0\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl ov01_021E7F00\n    add r0, r4, #0\n    bl ov01_021F30F4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F24F4(void) {
    /* Original at 0x021F24F4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r6, r0, #0\n    add r5, r1, #0\n    cmp r4, #1\n    bne _021F250E\n    cmp r3, #1\n    bne _021F250E\n    add r0, r5, #0\n    bl PlayerAvatar_GetState\n    cmp r0, #2\n    beq _021F2512\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205DFEC\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl MetatileBehavior_IsWaterfall\n    cmp r0, #0\n    bne _021F252A\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov01_021F28EC\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

u32 ov01_021F2538(void) {
    PlayerAvatar_GetMapObject(r1);
    MapObject_AreBitsSetForMovementScriptInit();
    return 0;
}

void ov01_021F2548(void) {
    /* Original at 0x021F2548 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x30\n    add r7, r1, #0\n    add r5, r2, #0\n    bl ov01_021F30D0\n    add r4, r0, #0\n    str r7, [r4, #4]\n    str r6, [r4, #0xc]\n    ldr r0, [r6, #0x40]\n    str r0, [r4, #0x10]\n    bl PlayerAvatar_GetMapObject\n    add r2, r4, #0\n    str r0, [r4, #0x14]\n    add r2, #0x1c\n    ldmia r5!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4, #0x1c]\n    cmp r0, #1\n    bne _021F257C\n    mov r0, #5\n    b _021F257E\n    mov r0, #6\n    strh r0, [r4, #2]\n    ldr r0, [r6, #0x10]\n    ldr r1, _021F258C ; =ov01_021F2628\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F258C: .word ov01_021F2628"
    );
    #endif
}

void CallFieldTask_RockClimb(void) {
    /* Original at 0x021F2590 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r2, #0\n    add r5, r1, #0\n    bl TaskManager_GetFieldSystem\n    add r4, r0, #0\n    add r1, r6, #0\n    bl ov01_021F3100\n    add r1, r0, #0\n    add r0, r4, #0\n    add r2, sp, #0\n    bl ov01_021F3040\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetState\n    sub r0, r0, #1\n    cmp r0, #1\n    bhi _021F25C0\n    mov r0, #1\n    str r0, [sp]\n    b _021F25D8\n    add r0, r4, #0\n    bl ov01_02206268\n    cmp r0, #0\n    beq _021F25D8\n    add r0, r4, #0\n    bl ov01_022062CC\n    cmp r6, r0\n    bne _021F25D8\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, sp, #0\n    bl ov01_021F2548\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void MetatileBehavior_IsRockClimbInDirection(void) {
    /* Original at 0x021F25E8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #3\n    bhi _021F2622\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021F25FA: ; jump table\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B834\n    cmp r0, #1\n    bne _021F2622\n    mov r0, #1\n    pop {r3, pc}\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B840\n    cmp r0, #1\n    bne _021F2622\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F2628(void) {
    /* Original at 0x021F2628 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    bl TaskManager_GetEnvironment\n    ldr r7, _021F268C ; =ov01_022069D0\n    add r4, r0, #0\n    ldr r0, [r4, #0x1c]\n    cmp r0, #1\n    bne _021F2648\n    ldrh r2, [r4]\n    add r0, r4, #0\n    add r1, r6, #0\n    lsl r2, r2, #2\n    ldr r2, [r7, r2]\n    blx r2\n    b _021F2656\n    ldrh r2, [r4]\n    add r0, r4, #0\n    add r1, r6, #0\n    lsl r3, r2, #2\n    ldr r2, _021F2690 ; =ov01_022069F0\n    ldr r2, [r2, r3]\n    blx r2\n    add r5, r0, #0\n    cmp r5, #2\n    beq _021F2634\n    cmp r5, #1\n    bne _021F2686\n    ldr r1, [r4, #4]\n    ldr r0, [r4, #0xc]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov01_02205790\n    ldr r0, [r4, #0xc]\n    bl FollowMon_GetMapObject\n    mov r1, #1\n    bl sub_02069DC8\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl ov01_0220609C\n    add r0, r4, #0\n    bl ov01_021F30F4\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F268C: .word ov01_022069D0\n    _021F2690: .word ov01_022069F0"
    );
    #endif
}

void ov01_021F2694(void) {
    ov01_021F3054(0);
}

void ov01_021F26AC(void) {
    /* Original at 0x021F26AC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x1c\n    bl ov01_021F3068\n    cmp r0, #1\n    bne _021F26C6\n    ldr r0, [r4, #0xc]\n    bl ov01_02205D68\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F26CC(void) {
    /* Original at 0x021F26CC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ov02_02250780\n    cmp r0, #0\n    beq _021F26EE\n    mov r0, #0x42\n    ldr r1, [r4, #0xc]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl FieldSystem_UnkSub108_AddMonMood\n    mov r1, #2\n    b _021F26F0\n    mov r1, #1\n    ldr r0, [r4, #0xc]\n    bl ov02_022507B4\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F2700(void) {
    /* Original at 0x021F2700 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r4, r0, #0\n    ldr r0, [r5, #0x24]\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    lsl r0, r4, #0x10\n    lsl r1, r1, #0x18\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x18\n    bl PlayCry\n    ldrh r0, [r5]\n    add r0, r0, #1\n    strh r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F2734(void) {
    /* Original at 0x021F2734 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl IsCryFinished\n    cmp r0, #0\n    beq _021F2746\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov01_02205EE0\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F2758(void) {
    /* Original at 0x021F2758 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    bl PlayerAvatar_GetXCoord\n    add r4, r0, #0\n    ldr r0, [r5, #4]\n    bl GetDeltaXByFacingDirection\n    add r6, r0, #0\n    ldr r0, [r5, #0x10]\n    bl PlayerAvatar_GetZCoord\n    add r7, r0, #0\n    ldr r0, [r5, #4]\n    bl GetDeltaYByFacingDirection\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x14]\n    ldr r3, [r5, #4]\n    add r1, r4, r6\n    add r2, r7, r2\n    bl ov01_021FEAB0\n    str r0, [r5, #0x18]\n    ldr r0, [r5, #0xc]\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _021F27A2\n    ldr r0, [r5, #0xc]\n    bl FollowMon_GetMapObject\n    bl MapObject_UnpauseMovement\n    ldr r0, [r5, #0xc]\n    bl ov02_0224D9A4\n    str r0, [r5, #0x2c]\n    ldr r0, _021F27BC ; =SEQ_SE_DP_UG_023\n    bl PlaySE\n    ldrh r0, [r5]\n    add r0, r0, #1\n    strh r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F27BC: .word SEQ_SE_DP_UG_023"
    );
    #endif
}

void ov01_021F27C0(void) {
    /* Original at 0x021F27C0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021F27E4\n    ldr r0, [r4, #4]\n    mov r1, #0x34\n    bl sub_0206234C\n    add r1, r0, #0\n    ldr r0, [r4, #0x14]\n    bl MapObject_SetHeldMovement\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F27E8(void) {
    /* Original at 0x021F27E8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    bne _021F2804\n    ldrh r0, [r4]\n    mov r1, #1\n    add r0, r0, #1\n    strh r0, [r4]\n    ldr r0, [r4, #0x18]\n    bl ov01_021FEB30\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F2808(void) {
    /* Original at 0x021F2808 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021F282C\n    ldr r0, [r4, #4]\n    mov r1, #0x10\n    bl sub_0206234C\n    add r1, r0, #0\n    ldr r0, [r4, #0x14]\n    bl MapObject_SetHeldMovement\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F2830(void) {
    /* Original at 0x021F2830 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x14]\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    bne _021F2842\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x14]\n    bl MapObject_GetNextFacingDirection\n    add r4, r0, #0\n    ldr r0, [r5, #0x14]\n    add r1, r4, #0\n    bl sub_02060FA8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    add r1, r4, #0\n    bl MetatileBehavior_IsRockClimbInDirection\n    cmp r0, #1\n    bne _021F2868\n    ldrh r0, [r5, #2]\n    strh r0, [r5]\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #4]\n    mov r1, #0x34\n    bl sub_0206234C\n    add r1, r0, #0\n    ldr r0, [r5, #0x14]\n    bl MapObject_SetHeldMovement\n    mov r1, #0\n    str r1, [r5, #8]\n    ldrh r0, [r5]\n    add r0, r0, #1\n    strh r0, [r5]\n    ldr r0, [r5, #0x18]\n    bl ov01_021FEB30\n    ldr r0, [r5, #0x2c]\n    bl ov02_0224D9B8\n    mov r0, #0\n    str r0, [r5, #0x2c]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F2894(void) {
    /* Original at 0x021F2894 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    bne _021F28A6\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x14]\n    bl MapObject_ClearHeldMovementIfActive\n    ldr r0, [r4, #0x18]\n    bl ov01_021F1640\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F28B8(void) {
    /* Original at 0x021F28B8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x54\n    add r7, r1, #0\n    add r5, r2, #0\n    bl ov01_021F30D0\n    add r4, r0, #0\n    str r7, [r4, #4]\n    str r6, [r4, #0x34]\n    ldr r0, [r6, #0x40]\n    str r0, [r4, #0x38]\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    str r0, [r4, #0x3c]\n    cmp r5, #0\n    beq _021F28E8\n    add r2, r4, #0\n    add r2, #0x40\n    ldmia r5!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F28EC(void) {
    /* Original at 0x021F28EC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0\n    add r4, r0, #0\n    bl ov01_021F28B8\n    add r2, r0, #0\n    ldr r1, _021F2904 ; =ov01_021F2944\n    add r0, r4, #0\n    bl FieldSystem_CreateTask\n    pop {r4, pc}\n    nop\n    _021F2904: .word ov01_021F2944"
    );
    #endif
}

void CallFieldTask_Waterfall(void) {
    /* Original at 0x021F2908 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r2, #0\n    add r6, r0, #0\n    add r7, r1, #0\n    bl TaskManager_GetFieldSystem\n    add r4, r0, #0\n    add r1, r5, #0\n    bl ov01_021F3100\n    add r1, r0, #0\n    add r0, r4, #0\n    add r2, sp, #0\n    bl ov01_021F3040\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, sp, #0\n    bl ov01_021F28B8\n    add r2, r0, #0\n    ldr r1, _021F2940 ; =ov01_021F2944\n    add r0, r6, #0\n    bl TaskManager_Call\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021F2940: .word ov01_021F2944"
    );
    #endif
}

void ov01_021F2944(void) {
    /* Original at 0x021F2944 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    bl TaskManager_GetEnvironment\n    ldr r6, _021F2990 ; =ov01_022069BC\n    ldr r4, _021F2994 ; =ov01_022069A8\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    bne _021F2962\n    ldr r1, [r5]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    blx r1\n    b _021F296C\n    ldr r1, [r5]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r6, r1]\n    blx r1\n    cmp r0, #2\n    beq _021F2950\n    cmp r0, #1\n    bne _021F298A\n    ldr r1, [r5, #4]\n    ldr r0, [r5, #0x34]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov01_02205790\n    add r0, r5, #0\n    bl ov01_021F30F4\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _021F2990: .word ov01_022069BC\n    _021F2994: .word ov01_022069A8"
    );
    #endif
}

void ov01_021F2998(void) {
    /* Original at 0x021F2998 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x40]\n    cmp r0, #1\n    bne _021F29B6\n    add r1, r4, #0\n    ldr r0, [r4, #0x34]\n    add r1, #0x40\n    bl ov01_021F3054\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #2\n    str r0, [r4]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F29C0(void) {
    /* Original at 0x021F29C0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x40\n    bl ov01_021F3068\n    cmp r0, #1\n    bne _021F29DA\n    ldr r0, _021F29E0 ; =SEQ_SE_DP_FW463\n    bl PlaySE\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021F29E0: .word SEQ_SE_DP_FW463"
    );
    #endif
}

void ov01_021F29E4(void) {
    /* Original at 0x021F29E4 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    ldr r0, [r5, #0x3c]\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    mov r0, #0\n    bl GetDeltaXByFacingDirection\n    lsl r0, r0, #1\n    add r4, r4, r0\n    ldr r0, [r5, #0x3c]\n    bl MapObject_GetZCoord\n    add r6, r0, #0\n    mov r0, #0\n    bl GetDeltaYByFacingDirection\n    lsl r0, r0, #1\n    add r6, r6, r0\n    add r2, r5, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, #0x28\n    bl sub_020611C8\n    ldr r0, [r5, #0x30]\n    mov r1, #1\n    str r0, [sp]\n    add r0, sp, #8\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x34]\n    ldr r2, [r5, #0x2c]\n    ldr r3, [r5, #0x28]\n    bl sub_02054790\n    str r0, [r5, #0x2c]\n    add r0, sp, #8\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _021F2A3C\n    bl GF_AssertFail\n    str r4, [r5, #0xc]\n    ldr r0, [r5, #0x2c]\n    asr r1, r0, #3\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    str r0, [r5, #0x10]\n    str r6, [r5, #0x14]\n    ldr r0, [r5, #0x3c]\n    add r1, sp, #0x18\n    bl MapObject_CopyPositionVector\n    ldr r1, [sp, #0x20]\n    ldr r0, [r5, #0x30]\n    cmp r1, r0\n    bgt _021F2A62\n    bl GF_AssertFail\n    ldr r1, [sp, #0x1c]\n    ldr r0, [r5, #0x2c]\n    cmp r1, r0\n    blt _021F2A6E\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r1, [r5, #0x2c]\n    ldr r0, [sp, #0x1c]\n    add r3, sp, #0xc\n    sub r2, r1, r0\n    ldr r1, [r5, #0x30]\n    ldr r0, [sp, #0x20]\n    str r2, [sp, #0x10]\n    sub r1, r1, r0\n    asr r0, r2, #5\n    lsr r0, r0, #0x1a\n    add r0, r2, r0\n    asr r0, r0, #6\n    str r0, [sp, #0x10]\n    asr r0, r1, #5\n    lsr r0, r0, #0x1a\n    add r0, r1, r0\n    add r2, r5, #0\n    str r1, [sp, #0x14]\n    asr r0, r0, #6\n    str r0, [sp, #0x14]\n    ldmia r3!, {r0, r1}\n    add r2, #0x1c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r5, #0x34]\n    bl ov02_0224D598\n    str r0, [r5, #0x50]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    mov r0, #0\n    add sp, #0x24\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F2AB8(void) {
    /* Original at 0x021F2AB8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    ldr r1, [sp, #4]\n    ldr r0, [r4, #0x20]\n    add r1, r1, r0\n    str r1, [sp, #4]\n    ldr r0, [r4, #0x2c]\n    cmp r1, r0\n    ble _021F2AD6\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl MapObject_SetPositionVector\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0x20\n    blt _021F2AF2\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021F2AF8(void) {
    /* Original at 0x021F2AF8 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    ldr r1, [sp, #4]\n    ldr r0, [r4, #0x20]\n    add r1, r1, r0\n    str r1, [sp, #4]\n    ldr r0, [r4, #0x2c]\n    cmp r1, r0\n    ble _021F2B16\n    str r0, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r0, [r4, #0x24]\n    add r1, r1, r0\n    str r1, [sp, #8]\n    ldr r0, [r4, #0x30]\n    cmp r1, r0\n    bge _021F2B26\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl MapObject_SetPositionVector\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0x40\n    bge _021F2B3E\n    add sp, #0xc\n    mov r0, #0\n    pop {r3, r4, pc}\n    ldr r1, [sp, #8]\n    ldr r0, [r4, #0x30]\n    cmp r1, r0\n    beq _021F2B4A\n    bl GF_AssertFail\n    ldr r1, [sp, #4]\n    ldr r0, [r4, #0x2c]\n    cmp r1, r0\n    beq _021F2B56\n    bl GF_AssertFail\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r4, #0xc]\n    bl MapObject_SetCurrentX\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r4, #0x10]\n    bl MapObject_SetCurrentY\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r4, #0x14]\n    bl MapObject_SetCurrentZ\n    ldr r0, [r4, #0x3c]\n    bl sub_02060F78\n    ldr r0, [r4, #0x50]\n    bl ov02_0224D5AC\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021F2B80(void) {
    /* Original at 0x021F2B80 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x40]\n    cmp r0, #1\n    bne _021F2B9E\n    add r1, r4, #0\n    ldr r0, [r4, #0x34]\n    add r1, #0x40\n    bl ov01_021F3054\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #2\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F2BA4(void) {
    /* Original at 0x021F2BA4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x40\n    bl ov01_021F3068\n    cmp r0, #1\n    bne _021F2BBE\n    ldr r0, _021F2BC4 ; =SEQ_SE_DP_FW463\n    bl PlaySE\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021F2BC4: .word SEQ_SE_DP_FW463"
    );
    #endif
}

void ov01_021F2BC8(void) {
    /* Original at 0x021F2BC8 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, [r5, #0x3c]\n    bl MapObject_GetXCoord\n    add r4, r0, #0\n    mov r0, #1\n    bl GetDeltaXByFacingDirection\n    lsl r0, r0, #1\n    add r4, r4, r0\n    ldr r0, [r5, #0x3c]\n    bl MapObject_GetZCoord\n    add r6, r0, #0\n    mov r0, #1\n    bl GetDeltaYByFacingDirection\n    lsl r0, r0, #1\n    add r6, r6, r0\n    add r2, r5, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, #0x28\n    bl sub_020611C8\n    add r1, r5, #0\n    ldr r0, [r5, #0x34]\n    add r1, #0x28\n    bl sub_0206121C\n    mov r0, #0\n    str r0, [r5, #0x18]\n    str r4, [r5, #0xc]\n    ldr r0, [r5, #0x2c]\n    asr r1, r0, #3\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    str r0, [r5, #0x10]\n    str r6, [r5, #0x14]\n    ldr r0, [r5, #0x3c]\n    add r1, sp, #0xc\n    bl MapObject_CopyPositionVector\n    ldr r1, [sp, #0x14]\n    ldr r0, [r5, #0x30]\n    cmp r1, r0\n    blt _021F2C32\n    bl GF_AssertFail\n    ldr r1, [sp, #0x10]\n    ldr r0, [r5, #0x2c]\n    cmp r1, r0\n    bgt _021F2C3E\n    bl GF_AssertFail\n    mov r0, #0\n    str r0, [sp]\n    ldr r1, [r5, #0x2c]\n    ldr r0, [sp, #0x10]\n    add r3, sp, #0\n    sub r2, r1, r0\n    ldr r1, [r5, #0x30]\n    ldr r0, [sp, #0x14]\n    str r2, [sp, #4]\n    sub r1, r1, r0\n    asr r0, r2, #5\n    lsr r0, r0, #0x1a\n    add r0, r2, r0\n    asr r0, r0, #6\n    str r0, [sp, #4]\n    asr r0, r1, #5\n    lsr r0, r0, #0x1a\n    add r0, r1, r0\n    add r2, r5, #0\n    str r1, [sp, #8]\n    asr r0, r0, #6\n    str r0, [sp, #8]\n    ldmia r3!, {r0, r1}\n    add r2, #0x1c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r5, #0x34]\n    bl ov02_0224D598\n    str r0, [r5, #0x50]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    mov r0, #0\n    add sp, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F2C88(void) {
    /* Original at 0x021F2C88 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    ldr r1, [sp, #8]\n    ldr r0, [r4, #0x24]\n    add r1, r1, r0\n    str r1, [sp, #8]\n    ldr r0, [r4, #0x30]\n    cmp r1, r0\n    ble _021F2CA8\n    str r0, [sp, #8]\n    b _021F2CB0\n    ldr r1, [r4, #0x18]\n    ldr r0, [r4, #0x24]\n    add r0, r1, r0\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl MapObject_SetPositionVector\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0x20\n    blt _021F2CCC\n    mov r0, #0\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021F2CD4(void) {
    /* Original at 0x021F2CD4 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    ldr r1, [sp, #4]\n    ldr r0, [r4, #0x20]\n    add r1, r1, r0\n    str r1, [sp, #4]\n    ldr r0, [r4, #0x2c]\n    cmp r1, r0\n    bge _021F2CF2\n    str r0, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r0, [r4, #0x24]\n    add r1, r1, r0\n    str r1, [sp, #8]\n    ldr r0, [r4, #0x30]\n    cmp r1, r0\n    ble _021F2D04\n    str r0, [sp, #8]\n    b _021F2D0C\n    ldr r1, [r4, #0x18]\n    ldr r0, [r4, #0x24]\n    add r0, r1, r0\n    str r0, [r4, #0x18]\n    ldr r0, [r4, #0x3c]\n    add r1, sp, #0\n    bl MapObject_SetPositionVector\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    cmp r0, #0x40\n    bge _021F2D24\n    add sp, #0xc\n    mov r0, #0\n    pop {r3, r4, pc}\n    ldr r1, [sp, #8]\n    ldr r0, [r4, #0x30]\n    cmp r1, r0\n    beq _021F2D30\n    bl GF_AssertFail\n    ldr r1, [sp, #4]\n    ldr r0, [r4, #0x2c]\n    cmp r1, r0\n    beq _021F2D3C\n    bl GF_AssertFail\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r4, #0xc]\n    bl MapObject_SetCurrentX\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r4, #0x10]\n    bl MapObject_SetCurrentY\n    ldr r0, [r4, #0x3c]\n    ldr r1, [r4, #0x14]\n    bl MapObject_SetCurrentZ\n    ldr r0, [r4, #0x3c]\n    bl sub_02060F78\n    ldr r0, [r4, #0x50]\n    bl ov02_0224D5AC\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021F2D68(void) {
    /* Original at 0x021F2D68 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x54\n    add r7, r1, #0\n    add r5, r2, #0\n    bl ov01_021F30D0\n    add r4, r0, #0\n    str r7, [r4, #4]\n    str r6, [r4, #0x34]\n    ldr r0, [r6, #0x40]\n    str r0, [r4, #0x38]\n    bl PlayerAvatar_GetMapObject\n    add r2, r4, #0\n    str r0, [r4, #0x3c]\n    add r2, #0x40\n    ldmia r5!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r6, #0x10]\n    ldr r1, _021F2DA0 ; =ov01_021F2DD0\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F2DA0: .word ov01_021F2DD0"
    );
    #endif
}

void CallFieldTask_Whirlpool(void) {
    TaskManager_GetFieldSystem();
    ov01_021F3100(r5);
    ov01_021F3040(r4, r0);
    ov01_021F2D68(r4, r6);
}

void ov01_021F2DD0(void) {
    /* Original at 0x021F2DD0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    bl TaskManager_GetEnvironment\n    ldr r6, _021F2E04 ; =ov01_02206994\n    add r5, r0, #0\n    ldr r1, [r5]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r6, r1]\n    blx r1\n    add r4, r0, #0\n    cmp r4, #2\n    beq _021F2DDA\n    cmp r4, #1\n    bne _021F2E00\n    ldr r1, [r5, #4]\n    ldr r0, [r5, #0x34]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov01_02205790\n    add r0, r5, #0\n    bl ov01_021F30F4\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _021F2E04: .word ov01_02206994"
    );
    #endif
}

void ov01_021F2E08(void) {
    ov01_021F3054(0);
}

void ov01_021F2E20(void) {
    ov01_021F3068(0);
}

void ov01_021F2E38(void) {
    /* Original at 0x021F2E38 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _021F2E50\n    ldr r0, [r4, #0x34]\n    bl FollowMon_GetMapObject\n    bl MapObject_UnpauseMovement\n    ldr r0, [r4, #0x34]\n    bl ov02_0224D67C\n    str r0, [r4, #0x50]\n    ldr r0, _021F2E68 ; =SEQ_SE_DP_FW463\n    bl PlaySE\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}\n    _021F2E68: .word SEQ_SE_DP_FW463"
    );
    #endif
}

void ov01_021F2E6C(void) {
    /* Original at 0x021F2E6C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021F2E90\n    ldr r0, [r4, #4]\n    mov r1, #4\n    bl sub_0206234C\n    add r1, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F2E94(void) {
    /* Original at 0x021F2E94 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl MapObject_IsMovementPaused\n    cmp r0, #0\n    bne _021F2EA6\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x3c]\n    bl MapObject_GetNextFacingDirection\n    ldr r0, [r4, #0x3c]\n    bl sub_0205F504\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl MetatileBehavior_IsWhirlpool\n    cmp r0, #1\n    bne _021F2EC6\n    mov r0, #3\n    str r0, [r4]\n    mov r0, #2\n    pop {r4, pc}\n    ldr r0, [r4, #0x50]\n    bl ov02_0224D690\n    mov r0, #0\n    str r0, [r4, #0x50]\n    ldr r0, [r4, #0x3c]\n    bl MapObject_ClearHeldMovementIfActive\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F2EDC(void) {
    /* Original at 0x021F2EDC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl sub_0205F73C\n    cmp r0, #0\n    beq _021F2F22\n    add r0, r4, #0\n    bl PlayerAvatar_GetState\n    cmp r0, #0\n    bne _021F2F22\n    add r0, r5, #0\n    bl MapObject_GetSpriteID\n    sub r0, #0xc4\n    cmp r0, #1\n    bls _021F2F22\n    add r0, r4, #0\n    bl PlayerAvatar_GetTransitionFlags\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #0x40\n    bl Field_PlayerAvatar_OrrTransitionFlags\n    add r0, r4, #0\n    bl Field_PlayerAvatar_ApplyTransitionFlags\n    add r0, r4, #0\n    add r1, r5, #0\n    bl Field_PlayerAvatar_OrrTransitionFlags\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F2F24(void) {
    /* Original at 0x021F2F24 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl PlayerAvatar_GetMapObject\n    add r5, r0, #0\n    bl sub_0205F73C\n    cmp r0, #0\n    beq _021F2F6C\n    add r0, r4, #0\n    bl PlayerAvatar_GetState\n    cmp r0, #0\n    bne _021F2F6C\n    add r0, r5, #0\n    bl MapObject_GetSpriteID\n    cmp r0, #0xc4\n    beq _021F2F4E\n    cmp r0, #0xc5\n    bne _021F2F6C\n    add r0, r4, #0\n    bl PlayerAvatar_GetTransitionFlags\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl Field_PlayerAvatar_OrrTransitionFlags\n    add r0, r4, #0\n    bl Field_PlayerAvatar_ApplyTransitionFlags\n    add r0, r4, #0\n    add r1, r5, #0\n    bl Field_PlayerAvatar_OrrTransitionFlags\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void Field_PlayerMovementSavingSet(void) {
    /* Original at 0x021F2F70 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r6, [r7, #0x40]\n    add r0, r6, #0\n    bl PlayerAvatar_GetState\n    add r4, r0, #0\n    beq _021F2F88\n    cmp r4, #3\n    beq _021F2F88\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl PlayerAvatar_GetMapObject\n    str r0, [sp]\n    mov r0, #4\n    mov r1, #0x10\n    bl Heap_AllocAtEnd\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [r5]\n    str r7, [r5, #8]\n    str r6, [r5, #0xc]\n    str r4, [r5, #4]\n    cmp r4, #0\n    bne _021F2FAC\n    mov r4, #0x80\n    b _021F2FBC\n    cmp r4, #3\n    bne _021F2FB6\n    mov r4, #1\n    lsl r4, r4, #0xe\n    b _021F2FBC\n    bl GF_AssertFail\n    mov r4, #0x80\n    ldr r0, [sp]\n    bl MapObject_UnpauseMovement\n    add r0, r6, #0\n    add r1, r4, #0\n    bl Field_PlayerAvatar_OrrTransitionFlags\n    add r0, r6, #0\n    bl Field_PlayerAvatar_ApplyTransitionFlags\n    ldr r0, _021F2FE8 ; =ov01_021F3030\n    ldr r2, _021F2FEC ; =0x0000FFFF\n    add r1, r5, #0\n    bl SysTask_CreateOnMainQueue\n    add r4, r0, #0\n    bne _021F2FE2\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021F2FE8: .word ov01_021F3030\n    _021F2FEC: .word 0x0000FFFF"
    );
    #endif
}

void Field_PlayerMovementSavingClear(void) {
    /* Original at 0x021F2FF0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    beq _021F302E\n    bl SysTask_GetData\n    add r6, r0, #0\n    ldr r0, [r6, #4]\n    ldr r4, [r6, #0xc]\n    cmp r0, #0\n    bne _021F300C\n    add r0, r4, #0\n    bl ov01_021F1B38\n    b _021F3022\n    cmp r0, #3\n    bne _021F3018\n    add r0, r4, #0\n    bl ov01_021F1C30\n    b _021F3022\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl ov01_021F1B38\n    add r0, r6, #0\n    bl Heap_Free\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F3030(void) {
    /* Original at 0x021F3030 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r1, #0xc]\n    bl PlayerAvatar_GetMapObject\n    bl sub_0205F484\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021F3040(void) {
    PlayerAvatar_GetGender(1);
}

void ov01_021F3054(void) {
    ov02_02249458(0);
}

void ov01_021F3068(void) {
    /* Original at 0x021F3068 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl ov02_0224953C\n    cmp r0, #1\n    bne _021F3080\n    ldr r0, [r4, #0xc]\n    bl ov02_02249548\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021F3084(void) {
    PlayerAvatar_GetMapObject();
    ov01_021FA930(r4);
}

void ov01_021F3094(void) {
    /* Original at 0x021F3094 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    bl PlayerAvatar_GetXCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl GetDeltaXByFacingDirection\n    add r7, r0, #0\n    add r0, r4, #0\n    bl PlayerAvatar_GetZCoord\n    str r0, [sp]\n    add r0, r5, #0\n    bl GetDeltaYByFacingDirection\n    add r5, r0, #0\n    add r0, r4, #0\n    bl PlayerAvatar_GetMapObject\n    bl MapObject_GetManager\n    ldr r2, [sp]\n    add r1, r6, r7\n    add r2, r2, r5\n    mov r3, #0\n    bl MapObjectManager_GetFirstObjectWithXAndZ\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021F30D0(void) {
    /* Original at 0x021F30D0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #4\n    add r1, r5, #0\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    bne _021F30E4\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r5, #0\n    bl memset\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F30F4(void) {
    Heap_FreeExplicit();
}

void ov01_021F3100(void) {
    /* Original at 0x021F3100 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, [r0, #0xc]\n    add r4, r1, #0\n    bl SaveArray_Party_Get\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    pop {r4, pc}"
    );
    #endif
}
