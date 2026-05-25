/* Decompiled from asm/overlay_01_021E6880.s */
#include "global.h"

void ov01_021E6880(void) {
    /* Original at 0x021E6880 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r2, [r0]\n    mov r1, #1\n    bic r2, r1\n    strh r2, [r0]\n    ldrh r2, [r0]\n    mov r1, #2\n    bic r2, r1\n    strh r2, [r0]\n    ldrh r2, [r0]\n    mov r1, #4\n    bic r2, r1\n    strh r2, [r0]\n    ldrh r2, [r0]\n    mov r1, #0x18\n    bic r2, r1\n    strh r2, [r0]\n    ldrh r2, [r0]\n    mov r1, #0x20\n    bic r2, r1\n    strh r2, [r0]\n    ldrh r2, [r0]\n    mov r1, #0x40\n    bic r2, r1\n    strh r2, [r0]\n    ldrh r2, [r0]\n    mov r1, #0x80\n    bic r2, r1\n    strh r2, [r0]\n    ldrh r2, [r0]\n    ldr r1, _021E68F4 ; =0xFFFFFEFF\n    and r1, r2\n    strh r1, [r0]\n    ldrh r2, [r0]\n    ldr r1, _021E68F8 ; =0xFFFFFDFF\n    and r1, r2\n    strh r1, [r0]\n    ldrh r2, [r0]\n    ldr r1, _021E68FC ; =0xFFFFFBFF\n    and r1, r2\n    strh r1, [r0]\n    ldrh r2, [r0]\n    ldr r1, _021E6900 ; =0xFFFFF7FF\n    and r1, r2\n    strh r1, [r0]\n    ldrh r2, [r0]\n    ldr r1, _021E6904 ; =0xFFFFEFFF\n    and r1, r2\n    strh r1, [r0]\n    ldrh r2, [r0]\n    ldr r1, _021E6908 ; =0xFFFFDFFF\n    and r2, r1\n    strh r2, [r0]\n    mov r2, #0xff\n    strb r2, [r0, #4]\n    asr r1, r1, #0xe\n    strb r1, [r0, #5]\n    bx lr\n    nop\n    _021E68F4: .word 0xFFFFFEFF\n    _021E68F8: .word 0xFFFFFDFF\n    _021E68FC: .word 0xFFFFFBFF\n    _021E6900: .word 0xFFFFF7FF\n    _021E6904: .word 0xFFFFEFFF\n    _021E6908: .word 0xFFFFDFFF"
    );
    #endif
}

void ov01_021E690C(void) {
    ov01_021F6B10();
}

void ov01_021E6920(void) {
    ov01_021F6B64();
}

void FieldInput_Update(void) {
    /* Original at 0x021E6928 */
    /* Requires manual decompilation - 218 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r5, r0, #0\n    str r2, [sp]\n    add r6, r3, #0\n    bl ov01_021E6880\n    add r0, r4, #0\n    bl FieldSystem_GetPlayerAvatar\n    bl PlayerAvatar_CheckRunningShoesLock\n    cmp r0, #0\n    beq _021E694E\n    mov r0, #2\n    orr r0, r6\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetUnk14\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetUnk10\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r7, r0, #0\n    ldr r0, [sp]\n    mov r1, #2\n    strh r0, [r5, #6]\n    add r0, r4, #0\n    strh r6, [r5, #8]\n    bl FieldSystem_ShouldDrawStartMenuIcon\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    cmp r0, #3\n    beq _021E6982\n    cmp r0, #0\n    beq _021E6982\n    b _021E6A88\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _021E6992\n    mov r1, #2\n    ldr r0, [sp]\n    lsl r1, r1, #0xa\n    tst r0, r1\n    bne _021E699C\n    add r0, r4, #0\n    add r0, #0xd0\n    ldrh r0, [r0]\n    cmp r0, #9\n    bne _021E69BC\n    add r0, r4, #0\n    bl ov01_021E690C\n    cmp r0, #1\n    bne _021E6A66\n    ldrh r1, [r5]\n    mov r0, #0x18\n    bic r1, r0\n    mov r0, #8\n    orr r0, r1\n    strh r0, [r5]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xd0\n    strh r1, [r0]\n    b _021E6A66\n    cmp r0, #0xa\n    bne _021E69E0\n    add r0, r4, #0\n    bl ov01_021E690C\n    cmp r0, #1\n    bne _021E6A66\n    ldrh r1, [r5]\n    mov r0, #0x18\n    bic r1, r0\n    mov r0, #0x10\n    orr r0, r1\n    strh r0, [r5]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xd0\n    strh r1, [r0]\n    b _021E6A66\n    cmp r0, #0xb\n    bne _021E69F8\n    ldrh r1, [r5]\n    mov r0, #2\n    lsl r0, r0, #8\n    orr r0, r1\n    strh r0, [r5]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xd0\n    strh r1, [r0]\n    b _021E6A66\n    mov r2, #1\n    ldr r1, [sp]\n    lsl r2, r2, #0xa\n    tst r1, r2\n    bne _021E6A06\n    cmp r0, #0\n    beq _021E6A52\n    add r0, r4, #0\n    bl ov01_021F6B00\n    cmp r0, #4\n    bne _021E6A30\n    mov r0, #0x43\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    bl MenuInputStateMgr_SetState\n    mov r0, #2\n    ldrh r1, [r5]\n    lsl r0, r0, #8\n    orr r0, r1\n    strh r0, [r5]\n    ldrh r1, [r5]\n    mov r0, #4\n    orr r0, r1\n    strh r0, [r5]\n    b _021E6A66\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _021E6A66\n    ldrh r1, [r5]\n    mov r0, #4\n    orr r0, r1\n    strh r0, [r5]\n    add r0, r4, #0\n    add r0, #0xd0\n    ldrh r0, [r0]\n    cmp r0, #1\n    bne _021E6A66\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xd0\n    strh r1, [r0]\n    b _021E6A66\n    ldr r0, [sp]\n    mov r1, #1\n    tst r0, r1\n    beq _021E6A66\n    ldrh r2, [r5]\n    mov r0, #1\n    bic r2, r0\n    add r0, r2, #0\n    orr r0, r1\n    strh r0, [r5]\n    mov r0, #0xf0\n    tst r0, r6\n    beq _021E6A7C\n    ldrh r1, [r5]\n    mov r0, #0x20\n    orr r0, r1\n    strh r0, [r5]\n    ldrh r1, [r5]\n    mov r0, #0x40\n    orr r0, r1\n    strh r0, [r5]\n    ldrh r1, [r5]\n    mov r0, #1\n    lsl r0, r0, #8\n    orr r0, r1\n    strh r0, [r5]\n    b _021E6A90\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xd0\n    strh r1, [r0]\n    ldr r0, [sp, #0xc]\n    cmp r0, #3\n    bne _021E6AA4\n    ldr r0, [sp, #8]\n    cmp r0, #1\n    bne _021E6AA4\n    ldrh r1, [r5]\n    mov r0, #0x80\n    orr r0, r1\n    strh r0, [r5]\n    ldr r0, [sp, #0xc]\n    cmp r0, #3\n    bne _021E6AB2\n    ldrh r1, [r5]\n    mov r0, #2\n    orr r0, r1\n    strh r0, [r5]\n    cmp r7, #0\n    bne _021E6ABC\n    mov r0, #0x40\n    tst r0, r6\n    bne _021E6ADA\n    cmp r7, #1\n    bne _021E6AC6\n    mov r0, #0x80\n    tst r0, r6\n    bne _021E6ADA\n    cmp r7, #2\n    bne _021E6AD0\n    mov r0, #0x20\n    tst r0, r6\n    bne _021E6ADA\n    cmp r7, #3\n    bne _021E6ADE\n    mov r0, #0x10\n    tst r0, r6\n    beq _021E6ADE\n    strb r7, [r5, #5]\n    b _021E6AE4\n    mov r0, #0\n    mvn r0, r0\n    strb r0, [r5, #5]\n    ldr r0, [r4, #0x40]\n    ldr r1, [sp]\n    add r2, r6, #0\n    bl sub_0205DD94\n    strb r0, [r5, #4]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FieldInput_Process(void) {
    /* Original at 0x021E6AF4 */
    /* Requires manual decompilation - 304 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrh r0, [r5]\n    add r4, r1, #0\n    lsl r0, r0, #0x12\n    lsr r0, r0, #0x1f\n    bne _021E6B12\n    add r0, r4, #0\n    mov r1, #1\n    bl TryStartMapScriptByType\n    cmp r0, #1\n    bne _021E6B12\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x12\n    lsr r0, r0, #0x1f\n    bne _021E6B66\n    ldr r0, [r4, #0xc]\n    bl SaveArray_Party_Get\n    bl HasEnoughAlivePokemonForDoubleBattle\n    add r6, r0, #0\n    ldr r0, [r4, #0xc]\n    bl Save_VarsFlags_Get\n    bl Save_VarsFlags_CheckHaveFollower\n    cmp r0, #1\n    bne _021E6B36\n    mov r6, #1\n    add r0, r4, #0\n    add r1, r6, #0\n    bl TryGetSeenByNpcTrainers\n    cmp r0, #1\n    bne _021E6B66\n    ldr r0, [r4, #0x40]\n    bl sub_0205CF44\n    ldr r0, [r4, #0x3c]\n    bl MapObjectManager_PauseAllMovement\n    add r0, r4, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _021E6B62\n    add r0, r4, #0\n    bl FollowMon_GetMapObject\n    bl MapObject_UnpauseMovement\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    beq _021E6B86\n    ldr r0, [r4, #0xc]\n    bl Save_VarsFlags_Get\n    bl ClearFlag965\n    add r0, r4, #0\n    bl ov01_021E7628\n    cmp r0, #1\n    bne _021E6B86\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl BugContestTimeoutCheck\n    cmp r0, #0\n    beq _021E6B94\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r1, [r5, #6]\n    ldrh r2, [r5, #8]\n    ldr r0, [r4, #0x40]\n    mov r6, #0\n    bl sub_0205DD94\n    add r7, r0, #0\n    ldr r0, [r4, #0xc]\n    bl Save_VarsFlags_Get\n    mov r1, #2\n    bl StrengthFlagAction\n    cmp r0, #0\n    beq _021E6BB6\n    mov r0, #1\n    orr r6, r0\n    ldr r0, [r4, #0xc]\n    bl SaveArray_Party_Get\n    mov r1, #MOVE_WATERFALL\n    bl GetIdxOfFirstPartyMonWithMove\n    cmp r0, #0xff\n    beq _021E6BCA\n    mov r0, #2\n    orr r6, r0\n    ldr r1, [r4, #0x40]\n    add r0, r4, #0\n    add r2, r7, #0\n    add r3, r6, #0\n    bl ov01_021F1D94\n    cmp r0, #1\n    bne _021E6BDE\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    beq _021E6C02\n    add r0, r4, #0\n    bl ov01_021E7114\n    cmp r0, #0\n    beq _021E6BF4\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl ov01_021E6DC4\n    cmp r0, #1\n    bne _021E6C02\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    beq _021E6C24\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    ldrb r1, [r5, #4]\n    cmp r1, r0\n    bne _021E6C24\n    add r0, r4, #0\n    bl ov01_021E6DC4\n    cmp r0, #1\n    bne _021E6C24\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _021E6D0C\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_0203DC64\n    cmp r0, #1\n    bne _021E6C86\n    ldr r0, [r4, #0x40]\n    bl sub_0205CF60\n    cmp r0, #1\n    bne _021E6C50\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r1, r0, #0\n    ldr r0, [r4, #0x40]\n    bl sub_0205CFBC\n    ldr r0, [sp]\n    bl MapObject_GetType\n    cmp r0, #9\n    beq _021E6C72\n    ldr r5, [sp]\n    add r0, r5, #0\n    bl MapObject_GetScriptID\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    add r2, r5, #0\n    bl StartMapSceneScript\n    b _021E6C7C\n    ldr r2, [sp]\n    add r0, r4, #0\n    mov r1, #0\n    bl StartMapSceneScript\n    mov r0, #0\n    add r4, #0xd0\n    strh r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl Field_GetBgEvents\n    add r6, r0, #0\n    add r0, r4, #0\n    bl Field_GetNumBgEvents\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl GetInteractedBackgroundEventScript\n    add r1, r0, #0\n    ldr r0, _021E6DBC ; =0x0000FFFF\n    cmp r1, r0\n    beq _021E6CBC\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #0\n    add r4, #0xd0\n    strh r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl ov01_021E7B54\n    add r1, r0, #0\n    add r0, r4, #0\n    bl GetInteractedMetatileScript\n    add r1, r0, #0\n    ldr r0, _021E6DBC ; =0x0000FFFF\n    cmp r1, r0\n    beq _021E6CE8\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #0\n    add r4, #0xd0\n    strh r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl ov01_021E7F38\n    add r1, r0, #0\n    ldr r0, _021E6DBC ; =0x0000FFFF\n    cmp r1, r0\n    beq _021E6D0C\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #0\n    add r4, #0xd0\n    strh r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    beq _021E6D2A\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021E7198\n    cmp r0, #1\n    bne _021E6D2A\n    add r0, r4, #0\n    bl ov01_021E7C70\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x1b\n    lsr r1, r0, #0x1e\n    beq _021E6D4C\n    add r0, r4, #0\n    bl UseRegisteredItemButtonInField\n    add r6, r0, #0\n    beq _021E6D4C\n    ldrh r1, [r5]\n    add r0, r4, #0\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1e\n    bl ov01_021E6920\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    beq _021E6D6E\n    add r0, r4, #0\n    bl FieldSystem_MapIsNotMysteryZone\n    cmp r0, #1\n    bne _021E6D6E\n    ldr r0, _021E6DC0 ; =SEQ_SE_DP_WIN_OPEN\n    bl PlaySE\n    add r0, r4, #0\n    bl StartMenu_Init\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl ov02_02252334\n    cmp r0, #0\n    beq _021E6D88\n    mov r1, #std_revert_shaymin>>4\n    add r0, r4, #0\n    lsl r1, r1, #4\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r5]\n    lsl r1, r0, #0x16\n    lsr r1, r1, #0x1f\n    beq _021E6D9E\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov01_021F6A9C\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r0, #0x17\n    lsr r0, r0, #0x1f\n    beq _021E6DB6\n    add r0, r4, #0\n    bl FieldSystem_GetGearPhoneRingManager\n    bl ov02_02251F20\n    cmp r0, #0\n    beq _021E6DB6\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E6DBC: .word 0x0000FFFF\n    _021E6DC0: .word SEQ_SE_DP_WIN_OPEN"
    );
    #endif
}

void ov01_021E6DC4(void) {
    /* Original at 0x021E6DC4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl Field_GetBgEvents\n    add r5, r0, #0\n    add r0, r4, #0\n    bl Field_GetNumBgEvents\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_0203DDA4\n    add r1, r0, #0\n    ldr r0, _021E6DFC ; =0x0000FFFF\n    cmp r1, r0\n    beq _021E6DF6\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6DFC: .word 0x0000FFFF"
    );
    #endif
}

void FieldInput_Process_Colosseum(void) {
    /* Original at 0x021E6E00 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldrh r0, [r4]\n    add r5, r1, #0\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    beq _021E6E32\n    mov r0, #5\n    ldrsb r0, [r4, r0]\n    cmp r0, #1\n    bne _021E6E32\n    add r0, r5, #0\n    bl ov01_021E7B38\n    bl sub_0205B73C\n    cmp r0, #0\n    beq _021E6E32\n    ldr r1, _021E6ED0 ; =std_colosseum_exit\n    add r0, r5, #0\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    bl sub_02037958\n    cmp r0, #0\n    bne _021E6E4E\n    bl sub_0203769C\n    bl sub_02057F18\n    cmp r0, #0\n    bne _021E6E4E\n    bl sub_02058740\n    cmp r0, #0\n    bne _021E6E52\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _021E6EA2\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_0203DC64\n    cmp r0, #1\n    bne _021E6EA2\n    ldr r0, [sp]\n    bl MapObject_GetMovement\n    cmp r0, #1\n    beq _021E6EA2\n    ldr r0, [r5, #0x40]\n    bl sub_0205CF60\n    cmp r0, #1\n    bne _021E6E88\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r1, r0, #0\n    ldr r0, [r5, #0x40]\n    bl sub_0205CFBC\n    ldr r4, [sp]\n    add r0, r4, #0\n    bl MapObject_GetScriptID\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    add r0, r5, #0\n    lsr r1, r1, #0x10\n    add r2, r4, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4]\n    lsl r1, r0, #0x1f\n    lsr r1, r1, #0x1f\n    beq _021E6EB4\n    add r0, r5, #0\n    bl sub_02059D44\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    beq _021E6ECA\n    ldr r0, _021E6ED4 ; =SEQ_SE_DP_WIN_OPEN\n    bl PlaySE\n    add r0, r5, #0\n    bl sub_0203BD20\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E6ED0: .word std_colosseum_exit\n    _021E6ED4: .word SEQ_SE_DP_WIN_OPEN"
    );
    #endif
}

void ov01_021E6ED8(void) {
    /* Original at 0x021E6ED8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r5, #0\n    mov r4, #1\n    add r0, r4, #0\n    bl sub_02034818\n    cmp r0, #0\n    beq _021E6EEA\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r4, #5\n    blt _021E6EDE\n    cmp r5, #1\n    blt _021E6EF8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FieldInput_Process_UnionRoom(void) {
    /* Original at 0x021E6EFC */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl sub_02033250\n    mov r1, #0xfe\n    tst r0, r1\n    beq _021E6F2E\n    bl ov01_021E6ED8\n    cmp r0, #0\n    beq _021E6F2A\n    bl sub_02037454\n    cmp r0, #1\n    ble _021E6F2A\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _021E6F78\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_0203DC64\n    cmp r0, #1\n    bne _021E6F78\n    ldr r0, [r5, #0x40]\n    bl sub_0205CF60\n    cmp r0, #1\n    bne _021E6F5A\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r1, r0, #0\n    ldr r0, [r5, #0x40]\n    bl sub_0205CFBC\n    bl sub_020380B0\n    ldr r4, [sp]\n    add r0, r4, #0\n    bl MapObject_GetScriptID\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    add r0, r5, #0\n    lsr r1, r1, #0x10\n    add r2, r4, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    beq _021E6F98\n    add r0, r5, #0\n    bl ov01_021E7B38\n    bl sub_0205BA18\n    cmp r0, #0\n    beq _021E6F98\n    add r0, r5, #0\n    bl sub_02053F14\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    beq _021E6FCC\n    bl sub_02037454\n    cmp r0, #1\n    bgt _021E6FCC\n    add r0, r5, #0\n    bl ov01_021E690C\n    cmp r0, #0\n    beq _021E6FCC\n    ldr r0, _021E6FD0 ; =SEQ_SE_DP_WIN_OPEN\n    bl PlaySE\n    add r0, r5, #0\n    bl sub_0203BCDC\n    mov r0, #4\n    bl sub_0205A904\n    bl sub_020380CC\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _021E6FD0: .word SEQ_SE_DP_WIN_OPEN"
    );
    #endif
}

void FieldInput_Process_BattleTower(void) {
    /* Original at 0x021E6FD4 */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldrh r0, [r5]\n    add r4, r1, #0\n    lsl r0, r0, #0x12\n    lsr r0, r0, #0x1f\n    bne _021E6FF6\n    add r0, r4, #0\n    mov r1, #1\n    bl TryStartMapScriptByType\n    cmp r0, #1\n    bne _021E6FF6\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    beq _021E70AE\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_0203DC64\n    cmp r0, #1\n    bne _021E7054\n    ldr r0, [r4, #0x40]\n    bl sub_0205CF60\n    cmp r0, #1\n    bne _021E7022\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r1, r0, #0\n    ldr r0, [r4, #0x40]\n    bl sub_0205CFBC\n    ldr r0, [sp]\n    bl MapObject_GetType\n    cmp r0, #9\n    beq _021E7044\n    ldr r5, [sp]\n    add r0, r5, #0\n    bl MapObject_GetScriptID\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    add r2, r5, #0\n    bl StartMapSceneScript\n    b _021E704E\n    ldr r2, [sp]\n    add r0, r4, #0\n    mov r1, #0\n    bl StartMapSceneScript\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    add r0, r4, #0\n    bl Field_GetBgEvents\n    add r6, r0, #0\n    add r0, r4, #0\n    bl Field_GetNumBgEvents\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl GetInteractedBackgroundEventScript\n    add r1, r0, #0\n    ldr r0, _021E710C ; =0x0000FFFF\n    cmp r1, r0\n    beq _021E7086\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    mov r2, #0\n    bl StartMapSceneScript\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    add r0, r4, #0\n    bl ov01_021E7B54\n    add r1, r0, #0\n    add r0, r4, #0\n    bl GetInteractedMetatileScript\n    add r1, r0, #0\n    ldr r0, _021E710C ; =0x0000FFFF\n    cmp r1, r0\n    beq _021E70AE\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    mov r2, #0\n    bl StartMapSceneScript\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    beq _021E70C8\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov01_021E7198\n    cmp r0, #1\n    bne _021E70C8\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x1b\n    lsr r1, r0, #0x1e\n    beq _021E70EC\n    add r0, r4, #0\n    bl UseRegisteredItemButtonInField\n    add r6, r0, #0\n    beq _021E70EC\n    ldrh r1, [r5]\n    add r0, r4, #0\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1e\n    bl ov01_021E6920\n    add sp, #4\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, pc}\n    ldrh r0, [r5]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    beq _021E7106\n    ldr r0, _021E7110 ; =SEQ_SE_DP_WIN_OPEN\n    bl PlaySE\n    add r0, r4, #0\n    bl StartMenu_Init\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _021E710C: .word 0x0000FFFF\n    _021E7110: .word SEQ_SE_DP_WIN_OPEN"
    );
    #endif
}

void ov01_021E7114(void) {
    /* Original at 0x021E7114 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r0, #0x7e\n    ldrh r1, [r0]\n    ldr r0, _021E7194 ; =0x0000FFFF\n    cmp r1, r0\n    bhs _021E7132\n    add r0, r4, #0\n    add r0, #0x7e\n    ldrh r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x7e\n    strh r1, [r0]\n    add r0, r4, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl PlayerAvatar_GetStandingTileCoords\n    ldr r0, [r4, #0xc]\n    bl Save_VarsFlags_Get\n    bl Save_VarsFlags_CheckPalParkSysFlag\n    cmp r0, #1\n    bne _021E7172\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r4, #0\n    bl CatchingShow_CheckWildEncounter\n    cmp r0, #1\n    bne _021E716C\n    add r0, r4, #0\n    bl CatchingShow_GetBattleDataTransfer\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_020511F8\n    add sp, #8\n    mov r0, #1\n    pop {r4, pc}\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_HasWildEncounters\n    cmp r0, #0\n    beq _021E718E\n    add r0, r4, #0\n    bl FieldSystem_PerformLandOrSurfEncounterCheck\n    cmp r0, #1\n    bne _021E718E\n    add sp, #8\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r4, pc}\n    _021E7194: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021E7198(void) {
    /* Original at 0x021E7198 */
    /* Requires manual decompilation - 284 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x28\n    add r5, r1, #0\n    mov r1, #5\n    ldrsb r2, [r5, r1]\n    sub r1, r1, #6\n    add r6, r0, #0\n    cmp r2, r1\n    bne _021E71B0\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r1, sp, #0x10\n    add r2, sp, #0xc\n    bl PlayerAvatar_GetStandingTileCoords\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    add r0, r6, #0\n    bl GetMetatileBehavior\n    add r4, r0, #0\n    bl sub_0205BAA0\n    cmp r0, #0\n    beq _021E7208\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    cmp r0, #0\n    bne _021E7202\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    add r0, r6, #0\n    add r3, sp, #0x14\n    bl ov01_021E7B90\n    cmp r0, #0\n    beq _021E7202\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    str r0, [sp, #4]\n    mov r0, #7\n    str r0, [sp, #8]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    bl NewFieldTransitionEnvironment\n    add sp, #0x28\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl sub_0205BAAC\n    cmp r0, #0\n    beq _021E724E\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    cmp r0, #1\n    bne _021E7248\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    add r0, r6, #0\n    add r3, sp, #0x14\n    bl ov01_021E7B90\n    cmp r0, #0\n    beq _021E7248\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    str r0, [sp, #4]\n    mov r0, #7\n    str r0, [sp, #8]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    bl NewFieldTransitionEnvironment\n    add sp, #0x28\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    add r1, sp, #0x10\n    add r2, sp, #0xc\n    bl PlayerAvatar_GetFacingTileCoords\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    add r0, r6, #0\n    bl sub_020548C0\n    cmp r0, #0\n    bne _021E726C\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    add r0, r6, #0\n    add r3, sp, #0x14\n    bl ov01_021E7B90\n    cmp r0, #0\n    beq _021E72B6\n    mov r0, #5\n    ldrsb r1, [r5, r0]\n    sub r0, r0, #6\n    cmp r1, r0\n    beq _021E72B6\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    add r0, r6, #0\n    bl GetMetatileBehavior\n    bl sub_0205B70C\n    cmp r0, #0\n    beq _021E72B6\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    bl NewFieldTransitionEnvironment\n    add sp, #0x28\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    add r1, sp, #0x10\n    add r2, sp, #0xc\n    bl PlayerAvatar_GetStandingTileCoords\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    add r0, r6, #0\n    bl GetMetatileBehavior\n    add r4, r0, #0\n    bl sub_0205B718\n    cmp r0, #0\n    bne _021E72DE\n    add r0, r4, #0\n    bl sub_0205B748\n    cmp r0, #0\n    beq _021E72EC\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    cmp r0, #3\n    beq _021E7360\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl sub_0205B724\n    cmp r0, #0\n    bne _021E7300\n    add r0, r4, #0\n    bl sub_0205B754\n    cmp r0, #0\n    beq _021E730E\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    cmp r0, #2\n    beq _021E7360\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl sub_0205B73C\n    cmp r0, #0\n    bne _021E7322\n    add r0, r4, #0\n    bl sub_0205B76C\n    cmp r0, #0\n    beq _021E7330\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    cmp r0, #1\n    beq _021E7360\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl sub_0205B810\n    cmp r0, #0\n    beq _021E7348\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    cmp r0, #3\n    beq _021E7360\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl sub_0205B81C\n    cmp r0, #0\n    beq _021E7360\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    cmp r0, #2\n    beq _021E7360\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    add r0, r6, #0\n    add r3, sp, #0x14\n    bl ov01_021E7B90\n    cmp r0, #0\n    bne _021E7376\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl sub_0205B70C\n    cmp r0, #0\n    beq _021E7384\n    mov r1, #1\n    b _021E73FC\n    add r0, r4, #0\n    bl sub_0205B810\n    cmp r0, #0\n    beq _021E7392\n    mov r1, #3\n    b _021E73FC\n    add r0, r4, #0\n    bl sub_0205B81C\n    cmp r0, #0\n    beq _021E73A0\n    mov r1, #3\n    b _021E73FC\n    add r0, r4, #0\n    bl sub_0205B718\n    cmp r0, #0\n    bne _021E73DC\n    add r0, r4, #0\n    bl sub_0205B748\n    cmp r0, #0\n    bne _021E73DC\n    add r0, r4, #0\n    bl sub_0205B724\n    cmp r0, #0\n    bne _021E73DC\n    add r0, r4, #0\n    bl sub_0205B754\n    cmp r0, #0\n    bne _021E73DC\n    add r0, r4, #0\n    bl sub_0205B73C\n    cmp r0, #0\n    bne _021E73DC\n    add r0, r4, #0\n    bl sub_0205B76C\n    cmp r0, #0\n    beq _021E73F6\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    bl sub_02055CD8\n    add sp, #0x28\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #5\n    ldrsb r0, [r5, r0]\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x18]\n    add r0, r6, #0\n    bl NewFieldTransitionEnvironment\n    mov r0, #1\n    add sp, #0x28\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void GetInteractedMetatileScript(void) {
    /* Original at 0x021E7418 */
    /* Requires manual decompilation - 208 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x40]\n    add r4, r1, #0\n    bl PlayerAvatar_GetFacingDirection\n    add r6, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetXCoord\n    add r7, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl GetMetatileBehavior\n    add r7, r0, #0\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205B78C\n    cmp r0, #0\n    beq _021E7450\n    ldr r0, _021E75DC ; =0x0000FFFF\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B7E0\n    cmp r0, #0\n    beq _021E7462\n    cmp r6, #0\n    bne _021E7462\n    ldr r0, _021E75E0 ; =std_pokecenter_pc\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B84C\n    cmp r0, #0\n    beq _021E7470\n    ldr r0, _021E75E4 ; =std_picture_books\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B858\n    cmp r0, #0\n    beq _021E747E\n    ldr r0, _021E75E8 ; =std_books_for_pkmn\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B864\n    cmp r0, #0\n    beq _021E748C\n    ldr r0, _021E75EC ; =std_chock_full\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B870\n    cmp r0, #0\n    beq _021E749A\n    ldr r0, _021E75F0 ; =std_magazines\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B87C\n    cmp r0, #0\n    beq _021E74A8\n    ldr r0, _021E75F4 ; =std_trash_empty\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B888\n    cmp r0, #0\n    beq _021E74B6\n    ldr r0, _021E75F8 ; =std_vibrant_pkmn_goods\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B894\n    cmp r0, #0\n    beq _021E74C4\n    ldr r0, _021E75FC ; =std_convenient_items\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B8A0\n    cmp r0, #0\n    beq _021E74D2\n    ldr r0, _021E7600 ; =std_pkmn_merchandise\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl MetatileBehavior_IsTownMap\n    cmp r0, #0\n    beq _021E74E0\n    ldr r0, _021E7604 ; =std_town_map\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205B9AC\n    cmp r0, #0\n    beq _021E74F2\n    cmp r6, #0\n    bne _021E74F2\n    ldr r0, _021E7608 ; =std_tv\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl MetatileBehavior_IsHeadbutt\n    cmp r0, #0\n    beq _021E7500\n    ldr r0, _021E760C ; =std_field_headbutt\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r6, #0\n    bl MetatileBehavior_IsRockClimbInDirection\n    cmp r0, #0\n    beq _021E7510\n    ldr r0, _021E7610 ; =std_field_rock_climb\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetState\n    cmp r0, #2\n    beq _021E7570\n    ldr r0, [r5, #0xc]\n    bl Save_PlayerData_GetProfile\n    add r6, r0, #0\n    ldr r0, [r5, #0x40]\n    add r1, r7, #0\n    add r2, r4, #0\n    bl Field_PlayerCanSurfOnTile\n    cmp r0, #0\n    beq _021E7550\n    add r0, r6, #0\n    mov r1, #3\n    bl PlayerProfile_TestBadgeFlag\n    cmp r0, #0\n    beq _021E7550\n    ldr r0, [r5, #0xc]\n    bl SaveArray_Party_Get\n    mov r1, #MOVE_SURF\n    bl GetIdxOfFirstPartyMonWithMove\n    cmp r0, #0xff\n    beq _021E7550\n    ldr r0, _021E7614 ; =std_field_surf\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov02_0224E35C\n    cmp r0, #0\n    beq _021E75AC\n    add r0, r5, #0\n    bl ov01_021E7B70\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov02_0224E4CC\n    cmp r0, #0\n    beq _021E75AC\n    ldr r0, _021E7618 ; =std_safari_place_object\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl MetatileBehavior_IsWaterfall\n    cmp r0, #0\n    beq _021E757E\n    ldr r0, _021E761C ; =std_field_waterfall\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl MetatileBehavior_IsWhirlpool\n    cmp r0, #0\n    beq _021E758C\n    ldr r0, _021E7620 ; =std_field_whirlpool\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov02_0224E35C\n    cmp r0, #0\n    beq _021E75AC\n    add r0, r5, #0\n    bl ov01_021E7B70\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov02_0224E4DC\n    cmp r0, #0\n    beq _021E75AC\n    ldr r0, _021E7618 ; =std_safari_place_object\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    bl Save_VarsFlags_CheckSafariSysFlag\n    cmp r0, #0\n    beq _021E75D6\n    ldr r0, [r5, #0xc]\n    bl Save_SafariZone_Get\n    bl sub_0202F620\n    cmp r0, #0\n    bne _021E75D6\n    add r0, r4, #0\n    bl sub_0205BAEC\n    cmp r0, #0\n    beq _021E75D6\n    ldr r0, _021E7624 ; =std_safari_remove_object\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E75DC ; =0x0000FFFF\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E75DC: .word 0x0000FFFF\n    _021E75E0: .word std_pokecenter_pc\n    _021E75E4: .word std_picture_books\n    _021E75E8: .word std_books_for_pkmn\n    _021E75EC: .word std_chock_full\n    _021E75F0: .word std_magazines\n    _021E75F4: .word std_trash_empty\n    _021E75F8: .word std_vibrant_pkmn_goods\n    _021E75FC: .word std_convenient_items\n    _021E7600: .word std_pkmn_merchandise\n    _021E7604: .word std_town_map\n    _021E7608: .word std_tv\n    _021E760C: .word std_field_headbutt\n    _021E7610: .word std_field_rock_climb\n    _021E7614: .word std_field_surf\n    _021E7618: .word std_safari_place_object\n    _021E761C: .word std_field_waterfall\n    _021E7620: .word std_field_whirlpool\n    _021E7624: .word std_safari_remove_object"
    );
    #endif
}

void ov01_021E7628(void) {
    /* Original at 0x021E7628 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #6\n    add r5, r0, #0\n    bl FieldSystem_IsSaveGymmickTypeEqualTo\n    cmp r0, #0\n    beq _021E7644\n    add r0, r5, #0\n    bl ov04_02255090\n    cmp r0, #0\n    beq _021E7644\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r2, r0, #0\n    ldr r1, [r5, #0x40]\n    add r0, r5, #0\n    bl ov01_021F3114\n    cmp r0, #1\n    ldr r0, [r5, #0x40]\n    bne _021E7672\n    bl PlayerAvatar_GetMapObject\n    bl sub_0205F504\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov04_02256BE4\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl PlayerAvatar_GetXCoord\n    add r4, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021E7DFC\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl GetMetatileBehavior\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov01_021E774C\n    cmp r0, #1\n    bne _021E76A4\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov01_021E7784\n    cmp r0, #1\n    bne _021E76BE\n    add r0, r5, #0\n    bl ov01_021E7C70\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_CheckFlag0\n    cmp r0, #0\n    beq _021E76CC\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #1\n    bl ov01_021F6830\n    add r0, r5, #0\n    bl ov01_021E7A98\n    add r0, r5, #0\n    bl ov01_021E794C\n    cmp r0, #1\n    bne _021E76EA\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl SafariBallsOutCheck\n    cmp r0, #1\n    bne _021E76F8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov01_021E788C\n    cmp r0, #1\n    bne _021E7706\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov01_021E78D8\n    cmp r0, #1\n    bne _021E7714\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov01_021E7A08\n    cmp r0, #1\n    bne _021E7722\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov01_021E78E4\n    cmp r0, #0\n    beq _021E7732\n    add r0, r5, #0\n    bl ov01_021E790C\n    add r0, r5, #0\n    bl FollowMon_IsVisible\n    cmp r0, #0\n    beq _021E7746\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl FieldSystem_UnkSub108_MoveMoodTowardsNeutral\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E774C(void) {
    /* Original at 0x021E774C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl Field_GetCoordEvents\n    add r5, r0, #0\n    add r0, r4, #0\n    bl Field_GetNumCoordEvents\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_0203DE04\n    add r1, r0, #0\n    ldr r0, _021E7780 ; =0x0000FFFF\n    cmp r1, r0\n    beq _021E777A\n    add r0, r4, #0\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E7780: .word 0x0000FFFF"
    );
    #endif
}

void ov01_021E7784(void) {
    /* Original at 0x021E7784 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x20\n    add r5, r3, #0\n    add r3, sp, #0xc\n    add r4, r0, #0\n    bl ov01_021E7B90\n    cmp r0, #0\n    bne _021E779C\n    add sp, #0x20\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl sub_0205B7F8\n    cmp r0, #1\n    bne _021E77E0\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, #2\n    bne _021E77B4\n    mov r0, #3\n    b _021E77C6\n    cmp r0, #3\n    bne _021E77BC\n    mov r0, #2\n    b _021E77C6\n    bl GF_AssertFail\n    add sp, #0x20\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    bl NewFieldTransitionEnvironment\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl sub_0205B804\n    cmp r0, #1\n    bne _021E781C\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, #2\n    beq _021E7802\n    cmp r0, #3\n    beq _021E7802\n    bl GF_AssertFail\n    add sp, #0x20\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    bl NewFieldTransitionEnvironment\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl sub_0205B730\n    cmp r0, #0\n    bne _021E7830\n    add r0, r5, #0\n    bl sub_0205B760\n    cmp r0, #0\n    beq _021E7846\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    bl sub_02055CD8\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl sub_0205BA18\n    cmp r0, #0\n    beq _021E7860\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    bl sub_02053E08\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl sub_0205BAB8\n    cmp r0, #0\n    beq _021E7884\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    bl NewFieldTransitionEnvironment\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #0x20\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021E788C(void) {
    /* Original at 0x021E788C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl SaveArray_Party_Get\n    add r5, r0, #0\n    ldr r0, [r4, #0xc]\n    bl Save_Daycare_Get\n    add r1, r5, #0\n    add r2, r4, #0\n    bl HandleDaycareStep\n    cmp r0, #1\n    bne _021E78CE\n    ldr r0, [r4, #0xc]\n    bl Save_GameStats_Get\n    add r5, r0, #0\n    mov r1, #0xc\n    bl GameStats_Inc\n    add r0, r5, #0\n    mov r1, #0xf\n    bl GameStats_AddScore\n    ldr r1, _021E78D4 ; =std_hatch_egg\n    add r0, r4, #0\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E78D4: .word std_hatch_egg"
    );
    #endif
}

void ov01_021E78D8(void) {
    PlayerStepEvent_RepelCounterDecrement();
}

void ov01_021E78E4(void) {
    /* Original at 0x021E78E4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0, #0xc]\n    mov r5, #0\n    bl Save_VarsFlags_Get\n    add r4, r0, #0\n    bl Save_VarsFlags_GetVar404B\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    cmp r1, #0x80\n    blo _021E7902\n    add r1, r5, #0\n    mov r5, #1\n    add r0, r4, #0\n    bl Save_VarsFlags_SetVar404B\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021E790C(void) {
    /* Original at 0x021E790C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl SaveArray_Party_Get\n    add r6, r0, #0\n    ldr r0, [r4, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_GetMapSec\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, r6, #0\n    bl Party_GetCount\n    add r7, r0, #0\n    mov r4, #0\n    cmp r7, #0\n    ble _021E7948\n    add r0, r6, #0\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #5\n    add r2, r5, #0\n    bl MonApplyFriendshipMod\n    add r4, r4, #1\n    cmp r4, r7\n    blt _021E7932\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E794C(void) {
    /* Original at 0x021E794C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    bl SaveArray_Party_Get\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetPoisonStepCounter\n    ldrh r1, [r0]\n    add r1, r1, #1\n    strh r1, [r0]\n    ldrh r2, [r0]\n    mov r1, #3\n    and r1, r2\n    strh r1, [r0]\n    ldrh r0, [r0]\n    cmp r0, #0\n    beq _021E797A\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_GetMapSec\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    bl ApplyPoisonStep\n    cmp r0, #0\n    beq _021E799C\n    cmp r0, #1\n    beq _021E79A0\n    cmp r0, #2\n    beq _021E79AC\n    b _021E79C2\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #4]\n    ldr r0, [r0, #0x20]\n    bl ov01_021FB630\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #4]\n    ldr r0, [r0, #0x20]\n    bl ov01_021FB630\n    ldr r1, _021E79C8 ; =std_survive_poisoning\n    add r0, r5, #0\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E79C8: .word std_survive_poisoning"
    );
    #endif
}

void SafariBallsOutCheck(void) {
    /* Original at 0x021E79CC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl Save_VarsFlags_Get\n    bl Save_VarsFlags_CheckSafariSysFlag\n    cmp r0, #0\n    bne _021E79E2\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0xc]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetSafariBallsCounter\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _021E7A00\n    ldr r1, _021E7A04 ; =std_safari_balls_out\n    add r0, r4, #0\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _021E7A04: .word std_safari_balls_out"
    );
    #endif
}

void ov01_021E7A08(void) {
    /* Original at 0x021E7A08 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl SaveData_GetPhoneCallPersistentState\n    add r5, r0, #0\n    ldr r0, [r4, #0xc]\n    bl Save_VarsFlags_Get\n    ldr r1, _021E7A5C ; =FLAG_SYS_GOT_BIKE_SHOP_CALL\n    bl Save_VarsFlags_CheckFlagInArray\n    cmp r0, #0\n    bne _021E7A56\n    add r0, r5, #0\n    mov r1, #2\n    bl PhoneCallPersistentState_CheckCallTriggerFlag\n    cmp r0, #0\n    bne _021E7A56\n    ldr r0, [r4, #0xc]\n    bl Save_GameStats_Get\n    mov r1, #1\n    bl GameStats_GetCapped\n    mov r1, #1\n    lsl r1, r1, #0xa\n    cmp r0, r1\n    blo _021E7A56\n    add r0, r4, #0\n    bl FieldSystem_GetGearPhoneRingManager\n    mov r1, #CALL_TRIGGER_BIKE_SHOP_STEPS\n    mov r2, #1  // TRUE\n    bl sub_02092E14\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E7A5C: .word FLAG_SYS_GOT_BIKE_SHOP_CALL"
    );
    #endif
}

void BugContestTimeoutCheck(void) {
    /* Original at 0x021E7A60 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl FieldSystem_BugContest_Get\n    add r5, r0, #0\n    ldr r0, [r4, #0xc]\n    bl Save_VarsFlags_Get\n    bl Save_VarsFlags_CheckBugContestFlag\n    cmp r0, #0\n    bne _021E7A7C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x1c]\n    cmp r0, #0x14\n    blo _021E7A90\n    ldr r1, _021E7A94 ; =std_bug_contest_time_up\n    add r0, r4, #0\n    mov r2, #0\n    bl StartMapSceneScript\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _021E7A94: .word std_bug_contest_time_up"
    );
    #endif
}

void ov01_021E7A98(void) {
    /* Original at 0x021E7A98 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_GameStats_Get\n    mov r1, #0\n    bl GameStats_GetCapped\n    add r4, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_ApricornBox_Get\n    add r1, r4, #0\n    bl sub_02032058\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void PlayerAvatar_GetStandingTileCoords(void) {
    /* Original at 0x021E7AB8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x40]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl PlayerAvatar_GetXCoord\n    str r0, [r4]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    str r0, [r6]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void PlayerAvatar_GetFacingTileCoords(void) {
    /* Original at 0x021E7AD4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x40]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl PlayerAvatar_GetFacingDirection\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl ShiftFieldCoordsByCompassDirection\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ShiftFieldCoordsByCompassDirection(void) {
    /* Original at 0x021E7AF0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r5, r3, #0\n    add r6, r1, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl PlayerAvatar_GetStandingTileCoords\n    cmp r6, #3\n    bhi _021E7B36\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E7B10: ; jump table\n    ldr r0, [r5]\n    sub r0, r0, #1\n    str r0, [r5]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4]\n    sub r0, r0, #1\n    str r0, [r4]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021E7B38(void) {
    /* Original at 0x021E7B38 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r1, sp, #4\n    add r2, sp, #0\n    add r4, r0, #0\n    bl PlayerAvatar_GetStandingTileCoords\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r4, #0\n    bl GetMetatileBehavior\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021E7B54(void) {
    /* Original at 0x021E7B54 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r1, sp, #4\n    add r2, sp, #0\n    add r4, r0, #0\n    bl PlayerAvatar_GetFacingTileCoords\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r4, #0\n    bl GetMetatileBehavior\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021E7B70(void) {
    /* Original at 0x021E7B70 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r1, sp, #4\n    add r2, sp, #0\n    add r4, r0, #0\n    bl PlayerAvatar_GetFacingTileCoords\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r4, #0\n    bl sub_020548C0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021E7B90(void) {
    /* Original at 0x021E7B90 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    add r7, r1, #0\n    str r2, [sp]\n    add r5, r3, #0\n    bl Field_GetWarpEventAtXYPos\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    bne _021E7BAC\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r6, #0\n    bl Field_GetWarpEventI\n    cmp r0, #0\n    bne _021E7BBC\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r3, [r0, #6]\n    mov r1, #1\n    lsl r1, r1, #8\n    cmp r3, r1\n    bne _021E7BEC\n    ldrh r1, [r0, #4]\n    ldr r0, _021E7C24 ; =0x00000FFF\n    cmp r1, r0\n    beq _021E7BD2\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetDynamicWarp\n    add r2, r0, #0\n    ldmia r2!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldmia r2!, {r0, r1}\n    stmia r5!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r5]\n    b _021E7BFE\n    ldrh r2, [r0, #2]\n    ldrh r1, [r0]\n    ldrh r0, [r0, #4]\n    str r0, [r5]\n    str r3, [r5, #4]\n    str r1, [r5, #8]\n    str r2, [r5, #0xc]\n    mov r0, #1\n    str r0, [r5, #0x10]\n    ldr r0, [r4, #0xc]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetEntrancePosition\n    add r5, r0, #0\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    ldr r1, [r4, #0x20]\n    ldr r1, [r1]\n    str r1, [r5]\n    str r6, [r5, #4]\n    ldr r1, [sp]\n    str r7, [r5, #8]\n    str r1, [r5, #0xc]\n    str r0, [r5, #0x10]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E7C24: .word 0x00000FFF"
    );
    #endif
}

void ov01_021E7C28(void) {
    /* Original at 0x021E7C28 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r7, r1, #0\n    str r2, [sp]\n    add r4, r3, #0\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetSpecialSpawnWarpPtr\n    add r6, r0, #0\n    ldr r3, [r5, #0x20]\n    add r2, r6, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    cmp r4, #0\n    str r0, [r2]\n    str r4, [r6, #0x10]\n    ldr r0, [sp]\n    str r7, [r6, #8]\n    str r0, [r6, #0xc]\n    bne _021E7C60\n    ldr r0, [r6, #0xc]\n    add r0, r0, #1\n    str r0, [r6, #0xc]\n    ldr r0, [r5, #0x20]\n    ldr r0, [r0]\n    str r0, [r6]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r6, #4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021E7C70(void) {
    /* Original at 0x021E7C70 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r1, sp, #4\n    add r2, sp, #0\n    add r4, r0, #0\n    bl PlayerAvatar_GetStandingTileCoords\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r4, #0\n    add r3, sp, #8\n    bl ov01_021E7B90\n    cmp r0, #0\n    beq _021E7CBA\n    ldr r0, [r4, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_MapIsOnMainMatrix\n    cmp r0, #1\n    bne _021E7CFC\n    ldr r0, [sp, #8]\n    bl MapHeader_MapIsOnMainMatrix\n    cmp r0, #0\n    bne _021E7CFC\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r3, r0, #0\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r4, #0\n    bl ov01_021E7C28\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    add r0, r4, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    bl PlayerAvatar_GetFacingTileCoords\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r4, #0\n    add r3, sp, #8\n    bl ov01_021E7B90\n    cmp r0, #0\n    beq _021E7CFC\n    ldr r0, [r4, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_MapIsOnMainMatrix\n    cmp r0, #1\n    bne _021E7CFC\n    ldr r0, [sp, #8]\n    bl MapHeader_MapIsOnMainMatrix\n    cmp r0, #0\n    bne _021E7CFC\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    add r3, r0, #0\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r4, #0\n    bl ov01_021E7C28\n    add sp, #0x1c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021E7D00(void) {
    /* Original at 0x021E7D00 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    add r5, r0, #0\n    lsr r4, r1, #0x1f\n    lsl r0, r1, #0x1b\n    sub r0, r0, r4\n    mov r6, #0x1b\n    ror r0, r6\n    add r1, r4, r0\n    lsr r4, r2, #0x1f\n    lsl r0, r2, #0x1b\n    sub r0, r0, r4\n    ror r0, r6\n    add r2, r4, r0\n    ldrh r4, [r5, #2]\n    mov r3, #0\n    mvn r3, r3\n    lsr r4, r4, #3\n    mov r0, #0\n    cmp r4, #0\n    ble _021E7D50\n    add r4, r5, #0\n    ldrb r6, [r4, #8]\n    cmp r6, r1\n    bgt _021E7D44\n    ldrb r6, [r4, #0xa]\n    cmp r1, r6\n    bgt _021E7D44\n    ldrb r6, [r4, #9]\n    cmp r6, r2\n    bgt _021E7D44\n    ldrb r6, [r4, #0xb]\n    cmp r2, r6\n    bgt _021E7D44\n    add r3, r0, #0\n    ldrh r6, [r5, #2]\n    add r0, r0, #1\n    add r4, #8\n    lsr r6, r6, #3\n    cmp r0, r6\n    blt _021E7D2A\n    add r0, r3, #0\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov01_021E7D58(void) {
    /* Original at 0x021E7D58 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    add r7, r2, #0\n    add r4, r1, #0\n    bl Save_VarsFlags_Get\n    add r6, r0, #0\n    lsl r0, r7, #3\n    add r0, r4, r0\n    ldrb r0, [r0, #4]\n    lsl r1, r0, #2\n    ldr r0, _021E7DE4 ; =ov01_022063BC\n    ldrh r4, [r0, r1]\n    ldr r0, [r5, #0xc]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetCurrentPosition\n    add r5, r0, #0\n    ldr r0, [r5]\n    cmp r0, #0x8b\n    bne _021E7D9A\n    add r0, r6, #0\n    bl CheckDisabledCianwoodWaterfall\n    cmp r0, #0\n    beq _021E7D9A\n    ldr r0, _021E7DE8 ; =0x0000085F\n    cmp r4, r0\n    bne _021E7D9A\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r5]\n    ldr r0, _021E7DEC ; =0x0000016D\n    cmp r1, r0\n    bne _021E7DB6\n    add r0, r6, #0\n    bl CheckSolvedLtSurgeGym\n    cmp r0, #0\n    beq _021E7DB6\n    ldr r0, _021E7DF0 ; =0x00000866\n    cmp r4, r0\n    bne _021E7DB6\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl CheckBattledSnorlax\n    cmp r0, #1\n    bne _021E7DCA\n    ldr r0, _021E7DF4 ; =0x00000865\n    cmp r4, r0\n    bne _021E7DCA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl CheckBattledRedGyarados\n    cmp r0, #0\n    beq _021E7DDE\n    ldr r0, _021E7DF8 ; =0x0000085D\n    cmp r4, r0\n    bne _021E7DDE\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7DE4: .word ov01_022063BC\n    _021E7DE8: .word 0x0000085F\n    _021E7DEC: .word 0x0000016D\n    _021E7DF0: .word 0x00000866\n    _021E7DF4: .word 0x00000865\n    _021E7DF8: .word 0x0000085D"
    );
    #endif
}

void ov01_021E7DFC(void) {
    /* Original at 0x021E7DFC */
    /* Requires manual decompilation - 116 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r7, r2, #0\n    bl sub_02054874\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0xc4\n    mov r1, #1\n    ldr r2, [r0]\n    mvn r1, r1\n    cmp r2, r1\n    bne _021E7E22\n    add r0, r5, #0\n    add r1, r1, #1\n    add r0, #0xc4\n    str r1, [r0]\n    b _021E7E30\n    sub r0, r1, #1\n    cmp r2, r0\n    bne _021E7E30\n    add r0, r5, #0\n    add r1, r1, #1\n    add r0, #0xc4\n    str r1, [r0]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov01_021E7D00\n    mov r1, #0\n    add r7, r0, #0\n    mvn r1, r1\n    cmp r7, r1\n    beq _021E7EC6\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov01_021E7D58\n    cmp r0, #0\n    beq _021E7EEC\n    add r0, r6, #4\n    lsl r4, r7, #3\n    str r0, [sp]\n    ldrb r0, [r0, r4]\n    cmp r0, #0x10\n    bhs _021E7EBC\n    lsl r1, r0, #2\n    ldr r0, _021E7EF0 ; =ov01_022063BC\n    add r2, r5, #0\n    add r2, #0xc4\n    ldrh r0, [r0, r1]\n    ldr r2, [r2]\n    cmp r2, r0\n    beq _021E7E80\n    ldr r2, _021E7EF4 ; =ov01_022063BC + 2\n    ldrh r1, [r2, r1]\n    cmp r1, #1\n    bne _021E7E7C\n    bl sub_02006088\n    b _021E7E80\n    bl PlaySE\n    ldr r0, [sp]\n    add r5, #0xc4\n    ldrb r0, [r0, r4]\n    lsl r1, r0, #2\n    ldr r0, _021E7EF0 ; =ov01_022063BC\n    ldrh r0, [r0, r1]\n    str r0, [r5]\n    add r5, r6, #5\n    ldrb r2, [r5, r4]\n    cmp r2, #3\n    bhs _021E7EEC\n    ldr r1, _021E7EF8 ; =ov01_02206388\n    mov r0, #0\n    ldrb r1, [r1, r2]\n    mov r2, #0xf\n    bl GF_SndHandleMoveVolume\n    ldr r1, [sp]\n    mov r0, #5\n    ldrb r2, [r1, r4]\n    lsl r1, r2, #1\n    add r3, r2, r1\n    ldr r1, _021E7EFC ; =ov01_0220638C\n    ldrb r2, [r5, r4]\n    add r1, r1, r3\n    ldrb r1, [r2, r1]\n    add r2, r0, #0\n    bl GF_SndHandleMoveVolume\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r7, #0x10\n    blt _021E7EEC\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r0, #0xc4\n    ldr r0, [r0]\n    cmp r0, r1\n    beq _021E7EEC\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    mov r1, #0xa\n    bl StopSE\n    mov r0, #0\n    mov r1, #0x80\n    mov r2, #0xf\n    bl GF_SndHandleMoveVolume\n    mov r0, #0\n    mvn r0, r0\n    add r5, #0xc4\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7EF0: .word ov01_022063BC\n    _021E7EF4: .word ov01_022063BC + 2\n    _021E7EF8: .word ov01_02206388\n    _021E7EFC: .word ov01_0220638C"
    );
    #endif
}

void ov01_021E7F00(void) {
    /* Original at 0x021E7F00 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    add r4, r1, #0\n    cmp r0, #0\n    bne _021E7F34\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetXCoord\n    add r6, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    add r2, r0, #0\n    cmp r4, #0\n    beq _021E7F2C\n    mov r1, #0\n    add r0, r5, #0\n    mvn r1, r1\n    add r0, #0xc4\n    str r1, [r0]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021E7DFC\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021E7F38(void) {
    FieldSystem_FacingModelIsHeadbuttTree();
}

void ov01_021E7F54(void) {
    /* Original at 0x021E7F54 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r1, sp, #0\n    add r5, r0, #0\n    bl sub_0203DC64\n    cmp r0, #1\n    bne _021E7F7C\n    ldr r0, [sp]\n    bl MapObject_GetType\n    cmp r0, #0\n    beq _021E7F74\n    cmp r0, #3\n    bne _021E7F78\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl Field_GetBgEvents\n    add r4, r0, #0\n    add r0, r5, #0\n    bl Field_GetNumBgEvents\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GetInteractedBackgroundEventScript\n    ldr r1, _021E7FA4 ; =0x0000FFFF\n    cmp r0, r1\n    beq _021E7F9E\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021E7FA4: .word 0x0000FFFF"
    );
    #endif
}

void FieldSystem_FacingModelIsHeadbuttTree(void) {
    /* Original at 0x021E7FA8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r1, sp, #4\n    add r2, sp, #0\n    add r4, r0, #0\n    bl PlayerAvatar_GetFacingTileCoords\n    ldr r1, [sp, #4]\n    ldr r2, [sp]\n    add r0, r4, #0\n    bl MapCoordToMatrixIndex\n    ldr r1, [r4, #0x30]\n    bl GetMapModelNo\n    bl MapModel_IsHeadbuttTree\n    cmp r0, #0\n    beq _021E7FD4\n    add sp, #8\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}
