/* Decompiled from asm/unk_0203BA5C.s */
#include "global.h"

void SpawnIdToTableIndex(void) {
    GF_AssertFail(1);
}

void GetMomSpawnId(void) {
    /* Original at 0x0203BA70 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #1\n    bx lr"
    );
    #endif
}

void GetFlyWarpData(void) {
    /* Original at 0x0203BA74 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl SpawnIdToTableIndex\n    add r1, r0, #0\n    mov r2, #0x12\n    mul r1, r2\n    ldr r0, _0203BAA0 ; =sSpawnMaps + 6\n    sub r2, #0x13\n    ldrh r0, [r0, r1]\n    str r0, [r4]\n    ldr r0, _0203BAA4 ; =sSpawnMaps + 8\n    str r2, [r4, #4]\n    ldrh r0, [r0, r1]\n    str r0, [r4, #8]\n    ldr r0, _0203BAA8 ; =sSpawnMaps + 10\n    ldrh r0, [r0, r1]\n    str r0, [r4, #0xc]\n    mov r0, #1\n    str r0, [r4, #0x10]\n    pop {r4, pc}\n    nop\n    _0203BAA0: .word sSpawnMaps + 6\n    _0203BAA4: .word sSpawnMaps + 8\n    _0203BAA8: .word sSpawnMaps + 10"
    );
    #endif
}

void GetDeathWarpData(void) {
    /* Original at 0x0203BAAC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl SpawnIdToTableIndex\n    add r2, r0, #0\n    mov r1, #0x12\n    mul r2, r1\n    ldr r0, _0203BAE0 ; =sSpawnMaps + 2\n    sub r1, #0x13\n    ldrh r0, [r0, r2]\n    str r0, [r4]\n    ldr r0, _0203BAE4 ; =sSpawnMaps\n    str r1, [r4, #4]\n    add r1, r0, r2\n    ldrh r0, [r1, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [r4, #8]\n    ldrh r0, [r1, #4]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x18\n    str r0, [r4, #0xc]\n    mov r0, #0\n    str r0, [r4, #0x10]\n    pop {r4, pc}\n    nop\n    _0203BAE0: .word sSpawnMaps + 2\n    _0203BAE4: .word sSpawnMaps"
    );
    #endif
}

void GetSpecialSpawnWarpData(void) {
    /* Original at 0x0203BAE8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl SpawnIdToTableIndex\n    add r1, r0, #0\n    mov r2, #0x12\n    mul r1, r2\n    ldr r0, _0203BB14 ; =sSpawnMaps + 12\n    sub r2, #0x13\n    ldrh r0, [r0, r1]\n    str r0, [r4]\n    ldr r0, _0203BB18 ; =sSpawnMaps + 14\n    str r2, [r4, #4]\n    ldrh r0, [r0, r1]\n    str r0, [r4, #8]\n    ldr r0, _0203BB1C ; =sSpawnMaps + 16\n    ldrh r0, [r0, r1]\n    str r0, [r4, #0xc]\n    mov r0, #1\n    str r0, [r4, #0x10]\n    pop {r4, pc}\n    nop\n    _0203BB14: .word sSpawnMaps + 12\n    _0203BB18: .word sSpawnMaps + 14\n    _0203BB1C: .word sSpawnMaps + 16"
    );
    #endif
}

void MapHeader_GetSpawnIdForDeathWarp(void) {
    /* Original at 0x0203BB20 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _0203BB4C ; =sSpawnMaps\n    mov r2, #0\n    add r4, r3, #0\n    ldrh r1, [r3, #2]\n    cmp r0, r1\n    bne _0203BB3C\n    ldrh r1, [r4]\n    lsl r1, r1, #0x17\n    lsr r1, r1, #0x1f\n    beq _0203BB3C\n    add r0, r2, #1\n    pop {r3, r4}\n    bx lr\n    add r2, r2, #1\n    add r3, #0x12\n    add r4, #0x12\n    cmp r2, #0x1e\n    blo _0203BB28\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    _0203BB4C: .word sSpawnMaps"
    );
    #endif
}

void sub_0203BB50(void) {
    /* Original at 0x0203BB50 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0203BB6C ; =sSpawnMaps\n    mov r2, #0\n    ldrh r1, [r3, #6]\n    cmp r0, r1\n    bne _0203BB5E\n    add r0, r2, #1\n    bx lr\n    add r2, r2, #1\n    add r3, #0x12\n    cmp r2, #0x1e\n    blo _0203BB54\n    mov r0, #0\n    bx lr\n    nop\n    _0203BB6C: .word sSpawnMaps"
    );
    #endif
}

void FlypointFlagAction(void) {
    /* Original at 0x0203BB70 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _0203BBB0 ; =sSpawnMaps\n    mov r4, #0\n    add r3, r2, #0\n    ldrh r5, [r2, #6]\n    cmp r1, r5\n    bne _0203BBA2\n    ldrh r5, [r3]\n    lsl r5, r5, #0x16\n    lsr r5, r5, #0x1f\n    beq _0203BBA2\n    ldr r0, [r0, #0xc]\n    bl Save_VarsFlags_Get\n    mov r2, #0x12\n    add r3, r4, #0\n    mul r3, r2\n    ldr r2, _0203BBB0 ; =sSpawnMaps\n    mov r1, #1\n    ldrh r2, [r2, r3]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    bl Save_VarsFlags_FlypointFlagAction\n    pop {r3, r4, r5, pc}\n    add r4, r4, #1\n    add r2, #0x12\n    add r3, #0x12\n    cmp r4, #0x1e\n    blo _0203BB78\n    pop {r3, r4, r5, pc}\n    nop\n    _0203BBB0: .word sSpawnMaps"
    );
    #endif
}
