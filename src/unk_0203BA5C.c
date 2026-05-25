/* Decompiled from asm/unk_0203BA5C.s */
#include "global.h"

void SpawnIdToTableIndex(void) {
    GF_AssertFail(1);
}


u8 GetMomSpawnId(void) {
    return 1;
}


void GetFlyWarpData(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl SpawnIdToTableIndex
    // add r1, r0, #0
    // mov r2, #0x12
    // mul r1, r2
    // ldr r0, _0203BAA0 ; =sSpawnMaps + 6
    // sub r2, #0x13
    // ldrh r0, [r0, r1]
    // str r0, [r4]
    // ldr r0, _0203BAA4 ; =sSpawnMaps + 8
    // str r2, [r4, #4]
    // ldrh r0, [r0, r1]
    // str r0, [r4, #8]
    // ldr r0, _0203BAA8 ; =sSpawnMaps + 10
    // ldrh r0, [r0, r1]
    // str r0, [r4, #0xc]
    // mov r0, #1
    // str r0, [r4, #0x10]
    // pop {r4, pc}
    // nop
    // _0203BAA0: .word sSpawnMaps + 6
    // _0203BAA4: .word sSpawnMaps + 8
    // _0203BAA8: .word sSpawnMaps + 10
    // TODO: decompile
}


void GetDeathWarpData(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl SpawnIdToTableIndex
    // add r2, r0, #0
    // mov r1, #0x12
    // mul r2, r1
    // ldr r0, _0203BAE0 ; =sSpawnMaps + 2
    // sub r1, #0x13
    // ldrh r0, [r0, r2]
    // str r0, [r4]
    // ldr r0, _0203BAE4 ; =sSpawnMaps
    // str r1, [r4, #4]
    // add r1, r0, r2
    // ldrh r0, [r1, #4]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [r4, #8]
    // ldrh r0, [r1, #4]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x18
    // str r0, [r4, #0xc]
    // mov r0, #0
    // str r0, [r4, #0x10]
    // pop {r4, pc}
    // nop
    // _0203BAE0: .word sSpawnMaps + 2
    // _0203BAE4: .word sSpawnMaps
    // TODO: decompile
}


void GetSpecialSpawnWarpData(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl SpawnIdToTableIndex
    // add r1, r0, #0
    // mov r2, #0x12
    // mul r1, r2
    // ldr r0, _0203BB14 ; =sSpawnMaps + 12
    // sub r2, #0x13
    // ldrh r0, [r0, r1]
    // str r0, [r4]
    // ldr r0, _0203BB18 ; =sSpawnMaps + 14
    // str r2, [r4, #4]
    // ldrh r0, [r0, r1]
    // str r0, [r4, #8]
    // ldr r0, _0203BB1C ; =sSpawnMaps + 16
    // ldrh r0, [r0, r1]
    // str r0, [r4, #0xc]
    // mov r0, #1
    // str r0, [r4, #0x10]
    // pop {r4, pc}
    // nop
    // _0203BB14: .word sSpawnMaps + 12
    // _0203BB18: .word sSpawnMaps + 14
    // _0203BB1C: .word sSpawnMaps + 16
    // TODO: decompile
}


void MapHeader_GetSpawnIdForDeathWarp(void) {
    // push {r3, r4}
    // ldr r3, _0203BB4C ; =sSpawnMaps
    // mov r2, #0
    // add r4, r3, #0
    // ldrh r1, [r3, #2]
    // cmp r0, r1
    // bne _0203BB3C
    // ldrh r1, [r4]
    // lsl r1, r1, #0x17
    // lsr r1, r1, #0x1f
    // beq _0203BB3C
    // add r0, r2, #1
    // pop {r3, r4}
    // bx lr
    // add r2, r2, #1
    // add r3, #0x12
    // add r4, #0x12
    // cmp r2, #0x1e
    // blo _0203BB28
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // _0203BB4C: .word sSpawnMaps
    // TODO: decompile
}


void sub_0203BB50(void) {
    // ldr r3, _0203BB6C ; =sSpawnMaps
    // mov r2, #0
    // ldrh r1, [r3, #6]
    // cmp r0, r1
    // bne _0203BB5E
    // add r0, r2, #1
    // bx lr
    // add r2, r2, #1
    // add r3, #0x12
    // cmp r2, #0x1e
    // blo _0203BB54
    // mov r0, #0
    // bx lr
    // nop
    // _0203BB6C: .word sSpawnMaps
    // TODO: decompile
}


void FlypointFlagAction(void) {
    // push {r3, r4, r5, lr}
    // ldr r2, _0203BBB0 ; =sSpawnMaps
    // mov r4, #0
    // add r3, r2, #0
    // ldrh r5, [r2, #6]
    // cmp r1, r5
    // bne _0203BBA2
    // ldrh r5, [r3]
    // lsl r5, r5, #0x16
    // lsr r5, r5, #0x1f
    // beq _0203BBA2
    // ldr r0, [r0, #0xc]
    // bl Save_VarsFlags_Get
    // mov r2, #0x12
    // add r3, r4, #0
    // mul r3, r2
    // ldr r2, _0203BBB0 ; =sSpawnMaps
    // mov r1, #1
    // ldrh r2, [r2, r3]
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // bl Save_VarsFlags_FlypointFlagAction
    // pop {r3, r4, r5, pc}
    // add r4, r4, #1
    // add r2, #0x12
    // add r3, #0x12
    // cmp r4, #0x1e
    // blo _0203BB78
    // pop {r3, r4, r5, pc}
    // nop
    // _0203BBB0: .word sSpawnMaps
    // TODO: decompile
}

