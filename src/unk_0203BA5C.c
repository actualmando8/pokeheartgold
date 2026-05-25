/* Decompiled from asm/unk_0203BA5C.s */
#include "global.h"

void SpawnIdToTableIndex(void) {
}



u8 GetMomSpawnId(void) {
}



void GetFlyWarpData(void) {
    SpawnIdToTableIndex();
    // sub r2, #0x13
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0x12;
    *((u32*)(r4 + 8)) = *((u16*)(sSpawnMaps + (r0 * 0x12)));
    *((u32*)(r4 + 0xc)) = *((u16*)(sSpawnMaps + (r0 * 0x12)));
    *((u32*)(r4 + 0x10)) = 1;
}



void GetDeathWarpData(void) {
    SpawnIdToTableIndex();
    // sub r1, #0x13
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0x12;
    // add r1, r0, r2
    *((u32*)(r4 + 8)) = ((*((u16*)(0x12 + 4)) << 0x18) >> 0x18);
    *((u32*)(r4 + 0xc)) = ((*((u16*)(0x12 + 4)) << 0x10) >> 0x18);
    *((u32*)(r4 + 0x10)) = 0;
}



void GetSpecialSpawnWarpData(void) {
    SpawnIdToTableIndex();
    // sub r2, #0x13
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0x12;
    *((u32*)(r4 + 8)) = *((u16*)(sSpawnMaps + (r0 * 0x12)));
    *((u32*)(r4 + 0xc)) = *((u16*)(sSpawnMaps + (r0 * 0x12)));
    *((u32*)(r4 + 0x10)) = 1;
}



u32 MapHeader_GetSpawnIdForDeathWarp(void) {
    // add r3, #0x12
    // add r4, #0x12
}



void sub_0203BB50(void) {
    // add r3, #0x12
}



void FlypointFlagAction(void) {
    Save_VarsFlags_Get(*((u32*)(r0 + 0xc)), sSpawnMaps, sSpawnMaps);
    Save_VarsFlags_FlypointFlagAction(1, ((*((u16*)(sSpawnMaps + (r4 * 0x12))) << 0x18) >> 0x18), (r4 * 0x12));
    // add r2, #0x12
    // add r3, #0x12
}


