/* Decompiled from asm/unk_02067A60.s */
#include "global.h"

void sub_02067A60(void) {
    Heap_Alloc(0x24);
    MIi_CpuClearFast(0, r0, 0x24);
}

void sub_02067A78(void) {
    Heap_Free();
}

void sub_02067A80(void) {
    /* Original at 0x02067A80 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xac\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02067A88(void) {
    /* Original at 0x02067A88 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    mov r1, #0\n    bl StrengthFlagAction\n    ldr r1, [r5, #0x20]\n    add r0, r5, #0\n    ldr r1, [r1]\n    bl FlypointFlagAction\n    ldr r0, [r5, #0xc]\n    bl Save_Roamers_Get\n    mov r1, #0\n    bl RoamerSave_SetFlute\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x7e\n    strh r1, [r0]\n    add r0, r5, #0\n    add r0, #0x7c\n    strh r1, [r0]\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    bl Save_VarsFlags_CheckSafariSysFlag\n    cmp r0, #0\n    bne _02067AE0\n    ldr r0, [r5, #0xc]\n    bl Save_Roamers_Get\n    ldr r1, [r5, #0x20]\n    add r4, r0, #0\n    ldr r1, [r1]\n    bl UpdatePlayerLocationHistoryIfAnyRoamersActive\n    add r0, r4, #0\n    bl Save_UpdateRoamersLocation\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02067AE4(void) {
    /* Original at 0x02067AE4 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    cmp r0, #1\n    beq _02067B84\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    bl ClearFlag972\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    mov r1, #0\n    bl StrengthFlagAction\n    ldr r1, [r5, #0x20]\n    add r0, r5, #0\n    ldr r1, [r1]\n    bl FlypointFlagAction\n    ldr r0, [r5, #0xc]\n    bl Save_Roamers_Get\n    mov r1, #0\n    bl RoamerSave_SetFlute\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x7e\n    strh r1, [r0]\n    add r0, r5, #0\n    add r0, #0x7c\n    strh r1, [r0]\n    ldr r0, [r5, #0xc]\n    bl Save_Roamers_Get\n    ldr r1, [r5, #0x20]\n    ldr r1, [r1]\n    bl UpdatePlayerLocationHistoryIfAnyRoamersActive\n    ldr r0, [r5, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_IsCave\n    cmp r0, #0\n    bne _02067B56\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    add r4, r0, #0\n    bl SysFlagFlashClear\n    add r0, r4, #0\n    bl SysFlagDefogClear\n    ldr r0, [r5, #0xc]\n    bl Save_LocalFieldData_Get\n    bl LocalFieldData_GetPlayer\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #1\n    bne _02067B7A\n    ldr r0, [r5, #0x20]\n    ldr r0, [r0]\n    bl MapHeader_IsBikeAllowed\n    cmp r0, #0\n    bne _02067B7A\n    mov r0, #0\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #4]\n    cmp r0, #2\n    bne _02067B84\n    mov r0, #0\n    str r0, [r4, #4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02067B88(void) {
    Save_VarsFlags_Get(*((u32*)(r0 + 0xc)));
    Save_VarsFlags_ClearSafariSysFlag();
    Save_Roamers_Get(*((u32*)(r4 + 0xc)));
    Save_RandomizeRoamersLocation();
}

void sub_02067BA4(void) {
    Save_VarsFlags_Get(*((u32*)(r0 + 0xc)));
    Save_VarsFlags_ClearSafariSysFlag();
    Save_Roamers_Get(*((u32*)(r4 + 0xc)));
    Save_RandomizeRoamersLocation();
}

void sub_02067BC0(void) {
    Save_VarsFlags_Get(*((u32*)(r0 + 0xc)));
    Save_VarsFlags_ClearSafariSysFlag();
}

void FieldSystem_ClearFollowingTrainer(void) {
    Save_VarsFlags_Get(*((u32*)(r0 + 0xc)));
    Save_VarsFlags_ClearHaveFollowerFlag();
    Save_VarsFlags_SetFollowerTrainerNum(r4, 0);
}

void sub_02067BE8(void) {
    Save_Roamers_Get(*((u32*)(r0 + 0xc)));
    Save_RandomizeRoamersLocation();
}

void sub_02067BF8(void) {
    /* Original at 0x02067BF8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    mov r1, #0x1c\n    add r4, r2, #0\n    add r6, r3, #0\n    bl Heap_AllocAtEnd\n    add r3, r0, #0\n    mov r2, #0x1c\n    mov r1, #0\n    strb r1, [r3]\n    add r3, r3, #1\n    sub r2, r2, #1\n    bne _02067C0C\n    str r5, [r0]\n    str r4, [r0, #0x10]\n    add r2, sp, #0\n    ldrh r1, [r2, #0x10]\n    strh r1, [r0, #8]\n    mov r1, #0x14\n    ldrsh r1, [r2, r1]\n    strh r1, [r0, #0xa]\n    mov r1, #0x18\n    ldrsh r1, [r2, r1]\n    strh r1, [r0, #0xc]\n    strh r6, [r0, #0xe]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02067C30(void) {
    /* Original at 0x02067C30 */
    /* Requires manual decompilation - 185 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r6, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldrh r0, [r4, #4]\n    cmp r0, #6\n    bls _02067C4C\n    b _02067DE4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02067C58: ; jump table\n    ldr r1, _02067DEC ; =ov01_02205A60\n    add r0, r6, #0\n    mov r2, #0\n    bl TaskManager_Call\n    ldrh r0, [r4, #4]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    b _02067DE4\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetState\n    sub r0, r0, #1\n    cmp r0, #1\n    bhi _02067C8E\n    mov r0, #4\n    strh r0, [r4, #4]\n    mov r0, #0\n    strh r0, [r4, #6]\n    b _02067DE4\n    ldr r0, [r5, #0xc]\n    bl SaveArray_Party_Get\n    bl GetIdxOfFirstAliveMonInParty_CrashIfNone\n    ldrh r1, [r4, #0xe]\n    cmp r1, r0\n    beq _02067CAE\n    ldr r0, [r4]\n    bl ov01_02205D68\n    mov r0, #4\n    strh r0, [r4, #4]\n    mov r0, #0\n    strh r0, [r4, #6]\n    b _02067DE4\n    add r0, r5, #0\n    bl FollowMon_IsVisible\n    cmp r0, #0\n    beq _02067CE8\n    add r0, r5, #0\n    mov r1, #2\n    bl ov02_02250780\n    cmp r0, #0\n    beq _02067CD4\n    mov r0, #0x42\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    mov r6, #2\n    bl FieldSystem_UnkSub108_AddMonMood\n    b _02067CD6\n    mov r6, #1\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov02_022507B4\n    mov r0, #1\n    strh r0, [r4, #6]\n    mov r0, #2\n    strh r0, [r4, #4]\n    b _02067DE4\n    mov r0, #4\n    strh r0, [r4, #4]\n    mov r0, #0\n    strh r0, [r4, #6]\n    b _02067DE4\n    ldr r0, [r4, #0x10]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r5, r0, #0\n    ldr r0, [r4, #0x10]\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    lsl r0, r5, #0x10\n    lsl r1, r1, #0x18\n    lsr r0, r0, #0x10\n    lsr r1, r1, #0x18\n    bl PlayCry\n    ldrh r0, [r4, #4]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    b _02067DE4\n    bl IsCryFinished\n    cmp r0, #0\n    bne _02067DE4\n    ldrh r0, [r4, #4]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    b _02067DE4\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    ldr r1, _02067DF0 ; =_020FE7AC\n    bl EventObjectMovementMan_Create\n    str r0, [r4, #0x18]\n    ldrh r0, [r4, #4]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    b _02067DE4\n    ldr r0, [r4, #0x18]\n    bl EventObjectMovementMan_IsFinish\n    cmp r0, #0\n    beq _02067DE4\n    ldr r0, [r4, #0x18]\n    bl EventObjectMovementMan_Delete\n    ldrh r0, [r4, #6]\n    cmp r0, #0\n    ldr r0, [r4]\n    bne _02067D70\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetGender\n    add r3, r0, #0\n    ldr r0, [r4]\n    ldr r2, [r4, #0x10]\n    mov r1, #1\n    bl ov02_02249458\n    b _02067D82\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetGender\n    add r3, r0, #0\n    ldr r0, [r4]\n    ldr r2, [r4, #0x10]\n    mov r1, #2\n    bl ov02_02249458\n    str r0, [r4, #0x14]\n    ldrh r0, [r4, #4]\n    add r0, r0, #1\n    strh r0, [r4, #4]\n    b _02067DE4\n    ldr r0, [r4, #0x14]\n    bl ov02_0224953C\n    cmp r0, #0\n    beq _02067DE4\n    ldr r0, [r4, #0x14]\n    bl ov02_02249548\n    ldr r0, [r5, #0xc]\n    bl Save_LocalFieldData_Get\n    add r7, r0, #0\n    ldrh r0, [r4, #8]\n    bl sub_0203BB50\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    bne _02067DB4\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, sp, #8\n    bl GetFlyWarpData\n    add r0, r7, #0\n    bl LocalFieldData_GetSpecialSpawnWarpPtr\n    add r1, r0, #0\n    add r0, r5, #0\n    bl GetSpecialSpawnWarpData\n    ldr r0, [sp, #0x14]\n    mov r2, #1\n    str r0, [sp]\n    str r2, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r3, [sp, #0x10]\n    add r0, r6, #0\n    sub r2, r2, #2\n    bl sub_02053908\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02067DEC: .word ov01_02205A60\n    _02067DF0: .word _020FE7AC"
    );
    #endif
}
