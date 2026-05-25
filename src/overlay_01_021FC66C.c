/* Decompiled from asm/overlay_01_021FC66C.s */
#include "global.h"

void CreateFishingRodTaskEnv(void) {
    /* Original at 0x021FC66C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r0, r1, #0\n    mov r1, #0x18\n    add r5, r2, #0\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #0x18\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _021FC680\n    add r0, r5, #0\n    str r5, [r4, #0xc]\n    bl ov01_021FCC00\n    str r0, [r4, #4]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void Task_OverworldFish(void) {
    /* Original at 0x021FC698 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r4, r0, #0\n    add r0, r6, #0\n    bl TaskManager_GetEnvironment\n    add r5, r0, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _021FC6B6\n    cmp r0, #1\n    beq _021FC6E2\n    b _021FC742\n    ldr r0, [r4, #0x3c]\n    bl MapObjectManager_PauseAllMovement\n    mov r0, #0\n    str r0, [r5, #0x10]\n    add r2, r5, #0\n    ldr r1, [r5, #0xc]\n    add r0, r4, #0\n    add r2, #0x10\n    bl FieldSystem_PerformFishEncounterCheck\n    str r0, [r5, #8]\n    ldr r1, [r5, #0xc]\n    ldr r2, [r5, #8]\n    add r0, r4, #0\n    bl ov01_021FC748\n    str r0, [r5, #0x14]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _021FC742\n    ldr r0, [r5, #0x14]\n    bl ov01_021FC76C\n    cmp r0, #1\n    bne _021FC742\n    ldr r0, [r5, #0x14]\n    bl ov01_021FC778\n    add r7, r0, #0\n    ldr r0, [r5, #0x14]\n    bl ov01_021FC784\n    cmp r7, #1\n    bne _021FC728\n    add r0, r4, #0\n    bl FieldSystem_GetGearPhoneRingManager\n    bl GearPhoneRingManager_ResetIfActive\n    ldr r0, [r4, #0xc]\n    bl Save_GameStats_Get\n    mov r1, #0xb\n    bl GameStats_Inc\n    ldr r2, [r5, #0x10]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl FieldSystem_StartForcedWildBattle\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    beq _021FC732\n    bl BattleSetup_Delete\n    ldr r0, [r4, #0x3c]\n    bl MapObjectManager_UnpauseAllMovement\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021FC748(void) {
    /* Original at 0x021FC748 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x4c\n    add r4, r1, #0\n    add r6, r2, #0\n    bl ov01_021FCAC4\n    add r1, r0, #0\n    str r5, [r1, #0x20]\n    str r4, [r1, #0x1c]\n    ldr r0, _021FC768 ; =ov01_021FC798\n    mov r2, #0x80\n    str r6, [r1]\n    bl SysTask_CreateOnMainQueue\n    pop {r4, r5, r6, pc}\n    _021FC768: .word ov01_021FC798"
    );
    #endif
}

void ov01_021FC76C(void) {
    SysTask_GetData();
}

void ov01_021FC778(void) {
    SysTask_GetData();
}

void ov01_021FC784(void) {
    SysTask_GetData();
    Heap_Free();
    SysTask_Destroy(r4);
}

void ov01_021FC798(void) {
    /* Original at 0x021FC798 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #0x20]\n    ldr r6, [r0, #0x40]\n    add r0, r6, #0\n    bl PlayerAvatar_GetMapObject\n    ldr r7, _021FC7C0 ; =ov01_02208DC4\n    add r4, r0, #0\n    ldr r3, [r5, #0xc]\n    add r0, r5, #0\n    lsl r3, r3, #2\n    ldr r3, [r7, r3]\n    add r1, r6, #0\n    add r2, r4, #0\n    blx r3\n    cmp r0, #0\n    bne _021FC7AA\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FC7C0: .word ov01_02208DC4"
    );
    #endif
}

void ov01_021FC7C4(void) {
    /* Original at 0x021FC7C4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    bl ov01_021FCB14\n    add r0, r4, #0\n    bl MapObject_UnpauseMovement\n    mov r0, #1\n    str r0, [r5, #0xc]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FC7DC(void) {
    /* Original at 0x021FC7DC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r2, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    add r4, r1, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #1\n    bne _021FC80E\n    add r0, r6, #0\n    bl MapObject_ClearHeldMovementIfActive\n    add r0, r4, #0\n    mov r1, #0x20\n    bl Field_PlayerAvatar_OrrTransitionFlags\n    add r0, r4, #0\n    bl Field_PlayerAvatar_ApplyTransitionFlags\n    add r0, r6, #0\n    mov r1, #1\n    bl sub_0205F328\n    mov r0, #2\n    str r0, [r5, #0xc]\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FC814(void) {
    /* Original at 0x021FC814 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    add r0, r0, #1\n    str r0, [r4, #0x10]\n    cmp r0, #0xa\n    bne _021FC828\n    ldr r0, _021FC848 ; =SEQ_SE_DP_FW104\n    bl PlaySE\n    ldr r0, [r4, #0x10]\n    cmp r0, #0x22\n    bge _021FC832\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4]\n    cmp r0, #1\n    bne _021FC83C\n    mov r0, #3\n    b _021FC83E\n    mov r0, #0xc\n    str r0, [r4, #0xc]\n    mov r0, #0\n    str r0, [r4, #0x10]\n    mov r0, #1\n    pop {r4, pc}\n    _021FC848: .word SEQ_SE_DP_FW104"
    );
    #endif
}

void ov01_021FC84C(void) {
    /* Original at 0x021FC84C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl LCRandom\n    lsr r1, r0, #0x1f\n    lsl r0, r0, #0x1e\n    sub r0, r0, r1\n    mov r2, #0x1e\n    ror r0, r2\n    add r0, r1, r0\n    add r0, r0, #1\n    add r1, r0, #0\n    mul r1, r2\n    str r1, [r4, #0x14]\n    ldr r0, [r4, #0x1c]\n    lsl r1, r0, #2\n    ldr r0, _021FC888 ; =ov01_02208D7C\n    ldr r0, [r0, r1]\n    str r0, [r4, #0x18]\n    add r0, r4, #0\n    bl ov01_021FCCB0\n    ldr r1, [r4, #0x18]\n    add r0, r1, r0\n    str r0, [r4, #0x18]\n    mov r0, #4\n    str r0, [r4, #0xc]\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _021FC888: .word ov01_02208D7C"
    );
    #endif
}

void ov01_021FC88C(void) {
    /* Original at 0x021FC88C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x14]\n    add r4, r2, #0\n    sub r0, r0, #1\n    str r0, [r5, #0x14]\n    bl ov01_021FCAE8\n    cmp r0, #1\n    bne _021FC8A8\n    mov r0, #0xa\n    str r0, [r5, #0xc]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x14]\n    cmp r0, #0\n    ble _021FC8B2\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #2\n    bl sub_0205F328\n    add r0, r5, #0\n    bl ov01_021FCC2C\n    cmp r0, #0\n    beq _021FC8D4\n    ldr r0, [r5, #0x20]\n    bl FollowMon_GetMapObject\n    mov r1, #0\n    mov r2, #1\n    bl ov01_02200540\n    b _021FC8DE\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov01_02200540\n    str r0, [r5, #0x24]\n    mov r0, #5\n    str r0, [r5, #0xc]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FC8E8(void) {
    /* Original at 0x021FC8E8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    sub r0, r0, #1\n    str r0, [r4, #0x18]\n    bl ov01_021FCAE8\n    cmp r0, #1\n    bne _021FC902\n    mov r0, #6\n    str r0, [r4, #0xc]\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    ble _021FC90C\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0xb\n    str r0, [r4, #0xc]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FC914(void) {
    /* Original at 0x021FC914 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x24]\n    add r5, r2, #0\n    bl ov01_02200400\n    add r0, r5, #0\n    mov r1, #3\n    bl sub_0205F328\n    mov r0, #0\n    str r0, [r4, #0x10]\n    mov r1, #7\n    str r1, [r4, #0xc]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FC934(void) {
    /* Original at 0x021FC934 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    add r0, r0, #1\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #0x24]\n    cmp r0, #0\n    beq _021FC94C\n    bl sub_02068B48\n    mov r0, #0\n    str r0, [r4, #0x24]\n    ldr r0, [r4, #0x10]\n    cmp r0, #0xf\n    ble _021FC962\n    mov r0, #0\n    str r0, [r4, #0x10]\n    mov r0, #8\n    str r0, [r4, #0xc]\n    add r0, r4, #0\n    mov r1, #0x34\n    bl ov01_021FCB90\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FC968(void) {
    ov01_021FCBCC(0, 1, 9);
}

void ov01_021FC980(void) {
    /* Original at 0x021FC980 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #1\n    str r2, [r0, #8]\n    mov r1, #0xf\n    str r1, [r0, #0xc]\n    add r0, r2, #0\n    bx lr"
    );
    #endif
}

void ov01_021FC98C(void) {
    /* Original at 0x021FC98C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r2, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r4, #0\n    mov r1, #0x33\n    bl ov01_021FCB90\n    mov r0, #0x10\n    str r0, [r4, #0x10]\n    mov r0, #0xe\n    str r0, [r4, #0xc]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FC9AC(void) {
    /* Original at 0x021FC9AC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r2, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r4, #0\n    mov r1, #0x32\n    bl ov01_021FCB90\n    mov r0, #0x10\n    str r0, [r4, #0x10]\n    mov r0, #0xe\n    str r0, [r4, #0xc]\n    ldr r0, [r4, #0x20]\n    ldr r0, [r0, #0xc]\n    bl Save_GameStats_Get\n    mov r1, #0x65\n    bl GameStats_Inc\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FC9DC(void) {
    /* Original at 0x021FC9DC */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x78\n    str r1, [r0, #0x10]\n    mov r1, #0xd\n    str r1, [r0, #0xc]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov01_021FC9E8(void) {
    /* Original at 0x021FC9E8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    add r4, r2, #0\n    sub r0, r0, #1\n    str r0, [r5, #0x10]\n    bl ov01_021FCAE8\n    cmp r0, #1\n    bne _021FCA04\n    mov r0, #0xa\n    str r0, [r5, #0xc]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, [r5, #0x10]\n    cmp r0, #0\n    beq _021FCA0E\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    mov r1, #0x31\n    bl ov01_021FCB90\n    mov r0, #0x10\n    str r0, [r5, #0x10]\n    mov r0, #0xe\n    str r0, [r5, #0xc]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FCA2C(void) {
    /* Original at 0x021FCA2C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x10]\n    add r1, r1, #1\n    str r1, [r4, #0x10]\n    cmp r1, #0x10\n    bge _021FCA3E\n    mov r0, #0\n    pop {r4, pc}\n    mov r1, #0x10\n    str r1, [r4, #0x10]\n    bl ov01_021FCBCC\n    cmp r0, #0\n    bne _021FCA4E\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0xf\n    str r0, [r4, #0xc]\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FCA58(void) {
    /* Original at 0x021FCA58 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x24]\n    add r5, r1, #0\n    cmp r0, #0\n    beq _021FCA68\n    bl ov01_02200400\n    add r0, r4, #0\n    bl ov01_021FCB4C\n    add r0, r5, #0\n    bl PlayerAvatar_GetState\n    bl PlayerAvatar_GetTransitionBits\n    add r1, r0, #0\n    add r0, r5, #0\n    bl Field_PlayerAvatar_OrrTransitionFlags\n    add r0, r5, #0\n    bl Field_PlayerAvatar_ApplyTransitionFlags\n    mov r0, #0\n    str r0, [r4, #0x10]\n    mov r0, #0x10\n    str r0, [r4, #0xc]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FCA94(void) {
    /* Original at 0x021FCA94 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x10]\n    add r1, r1, #1\n    str r1, [r0, #0x10]\n    cmp r1, #2\n    ble _021FCAA2\n    mov r1, #0x11\n    str r1, [r0, #0xc]\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_021FCAA8(void) {
    sub_02068B48(0, 0, 1);
}

void ov01_021FCAC4(void) {
    /* Original at 0x021FCAC4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #4\n    add r1, r5, #0\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    bne _021FCAD8\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r5, #0\n    bl memset\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FCAE8(void) {
    /* Original at 0x021FCAE8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021FCAF8 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r1, r0\n    bne _021FCAF4\n    mov r0, #0\n    bx lr\n    nop\n    _021FCAF8: .word gSystem"
    );
    #endif
}

void ov01_021FCAFC(void) {
    /* Original at 0x021FCAFC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021FCB10 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    beq _021FCB0A\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _021FCB10: .word gSystem"
    );
    #endif
}

void ov01_021FCB14(void) {
    /* Original at 0x021FCB14 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0x28\n    mov r3, #4\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x48]\n    mov r0, #1\n    lsl r0, r0, #0xa\n    mov r1, #4\n    bl String_New\n    str r0, [r4, #0x2c]\n    mov r0, #1\n    lsl r0, r0, #0xa\n    mov r1, #4\n    bl String_New\n    str r0, [r4, #0x30]\n    mov r0, #8\n    mov r1, #0x40\n    mov r2, #4\n    bl MessageFormat_New_Custom\n    str r0, [r4, #0x34]\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FCB4C(void) {
    /* Original at 0x021FCB4C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    bl MessageFormat_Delete\n    ldr r0, [r4, #0x2c]\n    bl String_Delete\n    ldr r0, [r4, #0x30]\n    bl String_Delete\n    ldr r0, [r4, #0x48]\n    bl DestroyMsgData\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FCB6C(void) {
    /* Original at 0x021FCB6C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5, #0x20]\n    add r1, r5, #0\n    ldr r0, [r4, #8]\n    add r1, #0x38\n    mov r2, #3\n    bl sub_0205B514\n    ldr r0, [r4, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r5, #0x38\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_0205B564\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FCB90(void) {
    /* Original at 0x021FCB90 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    bl ov01_021FCB6C\n    ldr r0, [r5, #0x48]\n    ldr r2, [r5, #0x30]\n    add r1, r6, #0\n    ldr r4, [r5, #0x20]\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x34]\n    ldr r1, [r5, #0x2c]\n    ldr r2, [r5, #0x30]\n    bl StringExpandPlaceholders\n    ldr r0, [r4, #0xc]\n    bl Save_PlayerData_GetOptionsAddr\n    add r2, r0, #0\n    add r0, r5, #0\n    ldr r1, [r5, #0x2c]\n    add r0, #0x38\n    mov r3, #1\n    bl sub_0205B5B4\n    add r5, #0x28\n    strb r0, [r5]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FCBCC(void) {
    /* Original at 0x021FCBCC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x28\n    ldrb r0, [r0]\n    bl IsPrintFinished\n    cmp r0, #1\n    bne _021FCBFA\n    bl ov01_021FCAFC\n    cmp r0, #1\n    bne _021FCBFA\n    add r0, r4, #0\n    add r0, #0x38\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r4, #0x38\n    add r0, r4, #0\n    bl RemoveWindow\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FCC00(void) {
    /* Original at 0x021FCC00 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    beq _021FCC12\n    cmp r0, #1\n    beq _021FCC16\n    cmp r0, #2\n    beq _021FCC1A\n    bl GF_AssertFail\n    ldr r0, _021FCC20 ; =0x000001BD\n    pop {r3, pc}\n    ldr r0, _021FCC24 ; =0x000001BE\n    pop {r3, pc}\n    ldr r0, _021FCC28 ; =0x000001BF\n    pop {r3, pc}\n    nop\n    _021FCC20: .word 0x000001BD\n    _021FCC24: .word 0x000001BE\n    _021FCC28: .word 0x000001BF"
    );
    #endif
}

void ov01_021FCC2C(void) {
    /* Original at 0x021FCC2C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetState\n    cmp r0, #2\n    bne _021FCC40\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r4, #0x20]\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _021FCC6E\n    ldr r0, [r4, #0x20]\n    ldr r0, [r0, #0xc]\n    bl SaveArray_Party_Get\n    bl GetFirstAliveMonInParty_CrashIfNone\n    mov r1, #9\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl ov01_021FCC74\n    cmp r0, #0\n    beq _021FCC6E\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FCC74(void) {
    /* Original at 0x021FCC74 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    cmp r0, #0x63\n    bhi _021FCC7E\n    mov r0, #0\n    pop {r4, pc}\n    cmp r0, #0x95\n    bhi _021FCC86\n    mov r4, #0x14\n    b _021FCC98\n    cmp r0, #0xc7\n    bhi _021FCC8E\n    mov r4, #0x1e\n    b _021FCC98\n    cmp r0, #0xf9\n    bhi _021FCC96\n    mov r4, #0x28\n    b _021FCC98\n    mov r4, #0x32\n    bl LCRandom\n    mov r1, #0x64\n    bl _s32_div_f\n    cmp r1, r4\n    bge _021FCCAA\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021FCCB0(void) {
    /* Original at 0x021FCCB0 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x20]\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _021FCD24\n    mov r0, #0x42\n    ldr r1, [r4, #0x20]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl FieldSystem_UnkSub108_GetMonMood\n    mov r1, #9\n    mvn r1, r1\n    cmp r0, r1\n    bgt _021FCCD6\n    mov r3, #0\n    b _021FCCFE\n    add r1, r1, #1\n    cmp r0, r1\n    blt _021FCCE4\n    cmp r0, #9\n    bgt _021FCCE4\n    mov r3, #1\n    b _021FCCFE\n    cmp r0, #0xa\n    blt _021FCCF0\n    cmp r0, #0x32\n    bge _021FCCF0\n    mov r3, #2\n    b _021FCCFE\n    cmp r0, #0x32\n    blt _021FCCFC\n    cmp r0, #0x64\n    bge _021FCCFC\n    mov r3, #3\n    b _021FCCFE\n    mov r3, #4\n    ldr r0, [r4, #0x1c]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    cmp r1, #2\n    bls _021FCD10\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #0xc\n    add r2, r3, #0\n    mul r2, r0\n    ldr r0, _021FCD28 ; =ov01_02208D88\n    lsl r1, r1, #2\n    add r0, r0, r2\n    ldr r0, [r1, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _021FCD28: .word ov01_02208D88"
    );
    #endif
}
