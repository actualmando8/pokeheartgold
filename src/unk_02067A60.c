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
    // add r0, #0xac
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02067A88(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // mov r1, #0
    // bl StrengthFlagAction
    // ldr r1, [r5, #0x20]
    // add r0, r5, #0
    // ldr r1, [r1]
    // bl FlypointFlagAction
    // ldr r0, [r5, #0xc]
    // bl Save_Roamers_Get
    // mov r1, #0
    // bl RoamerSave_SetFlute
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x7e
    // strh r1, [r0]
    // add r0, r5, #0
    // add r0, #0x7c
    // strh r1, [r0]
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // bl Save_VarsFlags_CheckSafariSysFlag
    // cmp r0, #0
    // bne _02067AE0
    // ldr r0, [r5, #0xc]
    // bl Save_Roamers_Get
    // ldr r1, [r5, #0x20]
    // add r4, r0, #0
    // ldr r1, [r1]
    // bl UpdatePlayerLocationHistoryIfAnyRoamersActive
    // add r0, r4, #0
    // bl Save_UpdateRoamersLocation
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02067AE4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // cmp r0, #1
    // beq _02067B84
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // bl ClearFlag972
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // mov r1, #0
    // bl StrengthFlagAction
    // ldr r1, [r5, #0x20]
    // add r0, r5, #0
    // ldr r1, [r1]
    // bl FlypointFlagAction
    // ldr r0, [r5, #0xc]
    // bl Save_Roamers_Get
    // mov r1, #0
    // bl RoamerSave_SetFlute
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x7e
    // strh r1, [r0]
    // add r0, r5, #0
    // add r0, #0x7c
    // strh r1, [r0]
    // ldr r0, [r5, #0xc]
    // bl Save_Roamers_Get
    // ldr r1, [r5, #0x20]
    // ldr r1, [r1]
    // bl UpdatePlayerLocationHistoryIfAnyRoamersActive
    // ldr r0, [r5, #0x20]
    // ldr r0, [r0]
    // bl MapHeader_IsCave
    // cmp r0, #0
    // bne _02067B56
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // add r4, r0, #0
    // bl SysFlagFlashClear
    // add r0, r4, #0
    // bl SysFlagDefogClear
    // ldr r0, [r5, #0xc]
    // bl Save_LocalFieldData_Get
    // bl LocalFieldData_GetPlayer
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #1
    // bne _02067B7A
    // ldr r0, [r5, #0x20]
    // ldr r0, [r0]
    // bl MapHeader_IsBikeAllowed
    // cmp r0, #0
    // bne _02067B7A
    // mov r0, #0
    // str r0, [r4, #4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #4]
    // cmp r0, #2
    // bne _02067B84
    // mov r0, #0
    // str r0, [r4, #4]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // mov r1, #0x1c
    // add r4, r2, #0
    // add r6, r3, #0
    // bl Heap_AllocAtEnd
    // add r3, r0, #0
    // mov r2, #0x1c
    // mov r1, #0
    // strb r1, [r3]
    // add r3, r3, #1
    // sub r2, r2, #1
    // bne _02067C0C
    // str r5, [r0]
    // str r4, [r0, #0x10]
    // add r2, sp, #0
    // ldrh r1, [r2, #0x10]
    // strh r1, [r0, #8]
    // mov r1, #0x14
    // ldrsh r1, [r2, r1]
    // strh r1, [r0, #0xa]
    // mov r1, #0x18
    // ldrsh r1, [r2, r1]
    // strh r1, [r0, #0xc]
    // strh r6, [r0, #0xe]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02067C30(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r6, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r6, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrh r0, [r4, #4]
    // cmp r0, #6
    // bls _02067C4C
    // b _02067DE4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02067C58: ; jump table
    // ldr r1, _02067DEC ; =ov01_02205A60
    // add r0, r6, #0
    // mov r2, #0
    // bl TaskManager_Call
    // ldrh r0, [r4, #4]
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // b _02067DE4
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetState
    // sub r0, r0, #1
    // cmp r0, #1
    // bhi _02067C8E
    // mov r0, #4
    // strh r0, [r4, #4]
    // mov r0, #0
    // strh r0, [r4, #6]
    // b _02067DE4
    // ldr r0, [r5, #0xc]
    // bl SaveArray_Party_Get
    // bl GetIdxOfFirstAliveMonInParty_CrashIfNone
    // ldrh r1, [r4, #0xe]
    // cmp r1, r0
    // beq _02067CAE
    // ldr r0, [r4]
    // bl ov01_02205D68
    // mov r0, #4
    // strh r0, [r4, #4]
    // mov r0, #0
    // strh r0, [r4, #6]
    // b _02067DE4
    // add r0, r5, #0
    // bl FollowMon_IsVisible
    // cmp r0, #0
    // beq _02067CE8
    // add r0, r5, #0
    // mov r1, #2
    // bl ov02_02250780
    // cmp r0, #0
    // beq _02067CD4
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // mov r6, #2
    // bl FieldSystem_UnkSub108_AddMonMood
    // b _02067CD6
    // mov r6, #1
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov02_022507B4
    // mov r0, #1
    // strh r0, [r4, #6]
    // mov r0, #2
    // strh r0, [r4, #4]
    // b _02067DE4
    // mov r0, #4
    // strh r0, [r4, #4]
    // mov r0, #0
    // strh r0, [r4, #6]
    // b _02067DE4
    // ldr r0, [r4, #0x10]
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // add r5, r0, #0
    // ldr r0, [r4, #0x10]
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // lsl r0, r5, #0x10
    // lsl r1, r1, #0x18
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x18
    // bl PlayCry
    // ldrh r0, [r4, #4]
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // b _02067DE4
    // bl IsCryFinished
    // cmp r0, #0
    // bne _02067DE4
    // ldrh r0, [r4, #4]
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // b _02067DE4
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // ldr r1, _02067DF0 ; =_020FE7AC
    // bl EventObjectMovementMan_Create
    // str r0, [r4, #0x18]
    // ldrh r0, [r4, #4]
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // b _02067DE4
    // ldr r0, [r4, #0x18]
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #0
    // beq _02067DE4
    // ldr r0, [r4, #0x18]
    // bl EventObjectMovementMan_Delete
    // ldrh r0, [r4, #6]
    // cmp r0, #0
    // ldr r0, [r4]
    // bne _02067D70
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetGender
    // add r3, r0, #0
    // ldr r0, [r4]
    // ldr r2, [r4, #0x10]
    // mov r1, #1
    // bl ov02_02249458
    // b _02067D82
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetGender
    // add r3, r0, #0
    // ldr r0, [r4]
    // ldr r2, [r4, #0x10]
    // mov r1, #2
    // bl ov02_02249458
    // str r0, [r4, #0x14]
    // ldrh r0, [r4, #4]
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // b _02067DE4
    // ldr r0, [r4, #0x14]
    // bl ov02_0224953C
    // cmp r0, #0
    // beq _02067DE4
    // ldr r0, [r4, #0x14]
    // bl ov02_02249548
    // ldr r0, [r5, #0xc]
    // bl Save_LocalFieldData_Get
    // add r7, r0, #0
    // ldrh r0, [r4, #8]
    // bl sub_0203BB50
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // bne _02067DB4
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, sp, #8
    // bl GetFlyWarpData
    // add r0, r7, #0
    // bl LocalFieldData_GetSpecialSpawnWarpPtr
    // add r1, r0, #0
    // add r0, r5, #0
    // bl GetSpecialSpawnWarpData
    // ldr r0, [sp, #0x14]
    // mov r2, #1
    // str r0, [sp]
    // str r2, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r3, [sp, #0x10]
    // add r0, r6, #0
    // sub r2, r2, #2
    // bl sub_02053908
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02067DEC: .word ov01_02205A60
    // _02067DF0: .word _020FE7AC
    // TODO: decompile
}

