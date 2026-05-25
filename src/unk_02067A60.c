/* Decompiled from asm/unk_02067A60.s */
#include "global.h"

void sub_02067A60(void) {
}




void sub_02067A78(void) {
}




void sub_02067A80(void) {
    // add r0, #0xac
    // str r1, [r0]
}




void sub_02067A88(void) {
    // add r0, #0x7e
    // strh r1, [r0]
    // add r0, #0x7c
    // strh r1, [r0]
}




void sub_02067AE4(void) {
    // add r0, #0xac
    // add r0, #0x7e
    // strh r1, [r0]
    // add r0, #0x7c
    // strh r1, [r0]
}




void sub_02067B88(void) {
}




void sub_02067BA4(void) {
}




void sub_02067BC0(void) {
}




void FieldSystem_ClearFollowingTrainer(void) {
}




void sub_02067BE8(void) {
}




struct UnkStruct_02067BF8 * sub_02067BF8(void) {
    Heap_AllocAtEnd(0x1c);
    // strb r1, [r3]
    // str r5, [r0]
    *((u32*)(r0 + 0x10)) = r4;
    // add r2, sp, #0
    *((u16*)(r0 + 8)) = *((u16*)((0x1c - 1) + 0x10));
    // ldrsh r1, [r2, r1]
    *((u16*)(r0 + 0xa)) = 0x14;
    // ldrsh r1, [r2, r1]
    *((u16*)(r0 + 0xc)) = 0x18;
    *((u16*)(r0 + 0xe)) = r6;
}



BOOL sub_02067C30(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r6);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02067C58: ; jump table
    TaskManager_Call(r6, ov01_02205A60, 0);
    *((u16*)(r4 + 4)) = (*((u16*)(r4 + 4)) + 1);
    PlayerAvatar_GetState(*((u32*)(r5 + 0x40)));
    *((u16*)(r4 + 4)) = 4;
    *((u16*)(r4 + 6)) = 0;
    SaveArray_Party_Get(*((u32*)(r5 + 0xc)));
    GetIdxOfFirstAliveMonInParty_CrashIfNone();
    ov01_02205D68(*((u32*)r4), *((u16*)(r4 + 0xe)));
    *((u16*)(r4 + 4)) = 4;
    *((u16*)(r4 + 6)) = 0;
    FollowMon_IsVisible(r5);
    ov02_02250780(r5, 2);
    FieldSystem_UnkSub108_AddMonMood(*((u32*)(r5 + (0x42 << 2))), 1);
    ov02_022507B4(r5, 1);
    *((u16*)(r4 + 6)) = 1;
    *((u16*)(r4 + 4)) = 2;
    *((u16*)(r4 + 4)) = 4;
    *((u16*)(r4 + 6)) = 0;
    GetMonData(*((u32*)(r4 + 0x10)), 5, 0);
    GetMonData(*((u32*)(r4 + 0x10)), 0x70, 0);
    PlayCry(((r5 << 0x10) >> 0x10), ((r0 << 0x18) >> 0x18));
    *((u16*)(r4 + 4)) = (*((u16*)(r4 + 4)) + 1);
    IsCryFinished((*((u16*)(r4 + 4)) + 1));
    *((u16*)(r4 + 4)) = (*((u16*)(r4 + 4)) + 1);
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    EventObjectMovementMan_Create(_020FE7AC);
    *((u32*)(r4 + 0x18)) = r0;
    *((u16*)(r4 + 4)) = (*((u16*)(r4 + 4)) + 1);
    EventObjectMovementMan_IsFinish(*((u32*)(r4 + 0x18)));
    EventObjectMovementMan_Delete(*((u32*)(r4 + 0x18)));
    PlayerAvatar_GetGender(*((u32*)(*((u32*)r4) + 0x40)));
    ov02_02249458(*((u32*)r4), 1, *((u32*)(r4 + 0x10)), r0);
    PlayerAvatar_GetGender(*((u32*)(r0 + 0x40)));
    ov02_02249458(*((u32*)r4), 2, *((u32*)(r4 + 0x10)), r0);
    *((u32*)(r4 + 0x14)) = r0;
    *((u16*)(r4 + 4)) = (*((u16*)(r4 + 4)) + 1);
    ov02_0224953C(*((u32*)(r4 + 0x14)));
    ov02_02249548(*((u32*)(r4 + 0x14)));
    Save_LocalFieldData_Get(*((u32*)(r5 + 0xc)));
    sub_0203BB50(*((u16*)(r4 + 8)));
    GF_AssertFail((r0 << 0x10));
    // add r1, sp, #8
    GetFlyWarpData(r5);
    LocalFieldData_GetSpecialSpawnWarpPtr(r7);
    GetSpecialSpawnWarpData(r5, r0);
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // str r2, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r3, [sp, #0x10]
    sub_02053908(r6, (1 - 2));
    Heap_Free(r4);
}



