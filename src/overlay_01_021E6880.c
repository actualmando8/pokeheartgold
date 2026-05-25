/* Decompiled from asm/overlay_01_021E6880.s */
#include "global.h"

void ov01_021E6880(void) {
    // ldrh r2, [r0]
    // mov r1, #1
    // bic r2, r1
    // strh r2, [r0]
    // ldrh r2, [r0]
    // mov r1, #2
    // bic r2, r1
    // strh r2, [r0]
    // ldrh r2, [r0]
    // mov r1, #4
    // bic r2, r1
    // strh r2, [r0]
    // ldrh r2, [r0]
    // mov r1, #0x18
    // bic r2, r1
    // strh r2, [r0]
    // ldrh r2, [r0]
    // mov r1, #0x20
    // bic r2, r1
    // strh r2, [r0]
    // ldrh r2, [r0]
    // mov r1, #0x40
    // bic r2, r1
    // strh r2, [r0]
    // ldrh r2, [r0]
    // mov r1, #0x80
    // bic r2, r1
    // strh r2, [r0]
    // ldrh r2, [r0]
    // ldr r1, _021E68F4 ; =0xFFFFFEFF
    // and r1, r2
    // strh r1, [r0]
    // ldrh r2, [r0]
    // ldr r1, _021E68F8 ; =0xFFFFFDFF
    // and r1, r2
    // strh r1, [r0]
    // ldrh r2, [r0]
    // ldr r1, _021E68FC ; =0xFFFFFBFF
    // and r1, r2
    // strh r1, [r0]
    // ldrh r2, [r0]
    // ldr r1, _021E6900 ; =0xFFFFF7FF
    // and r1, r2
    // strh r1, [r0]
    // ldrh r2, [r0]
    // ldr r1, _021E6904 ; =0xFFFFEFFF
    // and r1, r2
    // strh r1, [r0]
    // ldrh r2, [r0]
    // ldr r1, _021E6908 ; =0xFFFFDFFF
    // and r2, r1
    // strh r2, [r0]
    // mov r2, #0xff
    // strb r2, [r0, #4]
    // asr r1, r1, #0xe
    // strb r1, [r0, #5]
    // bx lr
    // nop
    // _021E68F4: .word 0xFFFFFEFF
    // _021E68F8: .word 0xFFFFFDFF
    // _021E68FC: .word 0xFFFFFBFF
    // _021E6900: .word 0xFFFFF7FF
    // _021E6904: .word 0xFFFFEFFF
    // _021E6908: .word 0xFFFFDFFF
    // TODO: decompile
}



void ov01_021E690C(void) {
}



void ov01_021E6920(void) {
}



void FieldInput_Update(void) {
    // str r2, [sp]
    ov01_021E6880();
    FieldSystem_GetPlayerAvatar(r4);
    PlayerAvatar_CheckRunningShoesLock();
    // orr r0, r6
    PlayerAvatar_GetUnk14(*((u32*)(r4 + 0x40)));
    // str r0, [sp, #0xc]
    PlayerAvatar_GetUnk10(*((u32*)(r4 + 0x40)));
    // str r0, [sp, #8]
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)));
    // ldr r0, [sp]
    *((u16*)(r5 + 6)) = r0;
    *((u16*)(r5 + 8)) = r6;
    FieldSystem_ShouldDrawStartMenuIcon(r4, 2);
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // tst r0, r1
    // add r0, #0xd0
    // ldrh r0, [r0]
    ov01_021E690C(r4, (2 << 0xa));
    // ldrh r1, [r5]
    // bic r1, r0
    // orr r0, r1
    // strh r0, [r5]
    // add r0, #0xd0
    // strh r1, [r0]
    ov01_021E690C(r4, 0);
    // ldrh r1, [r5]
    // bic r1, r0
    // orr r0, r1
    // strh r0, [r5]
    // add r0, #0xd0
    // strh r1, [r0]
    // ldrh r1, [r5]
    // orr r0, r1
    // strh r0, [r5]
    // add r0, #0xd0
    // strh r1, [r0]
    // ldr r1, [sp]
    // tst r1, r2
    ov01_021F6B00(r4, 0, (1 << 0xa));
    // add r0, r4, r0
    MenuInputStateMgr_SetState((0x43 << 2), 0);
    // ldrh r1, [r5]
    // orr r0, r1
    // strh r0, [r5]
    // ldrh r1, [r5]
    // orr r0, r1
    // strh r0, [r5]
    // ldr r0, [sp, #4]
    // ldrh r1, [r5]
    // orr r0, r1
    // strh r0, [r5]
    // add r0, #0xd0
    // ldrh r0, [r0]
    // add r0, #0xd0
    // strh r1, [r0]
    // ldr r0, [sp]
    // tst r0, r1
    // ldrh r2, [r5]
    // bic r2, r0
    // orr r0, r1
    // strh r0, [r5]
    // tst r0, r6
    // ldrh r1, [r5]
    // orr r0, r1
    // strh r0, [r5]
    // ldrh r1, [r5]
    // orr r0, r1
    // strh r0, [r5]
    // ldrh r1, [r5]
    // orr r0, r1
    // strh r0, [r5]
    // add r0, #0xd0
    // strh r1, [r0]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldrh r1, [r5]
    // orr r0, r1
    // strh r0, [r5]
    // ldr r0, [sp, #0xc]
    // ldrh r1, [r5]
    // orr r0, r1
    // strh r0, [r5]
    // tst r0, r6
    // tst r0, r6
    // tst r0, r6
    // tst r0, r6
    *((u8*)(r5 + 5)) = r7;
    // mvn r0, r0
    *((u8*)(r5 + 5)) = 0;
    // ldr r1, [sp]
    sub_0205DD94(*((u32*)(r4 + 0x40)), 0, r6);
    *((u8*)(r5 + 4)) = r0;
}



void FieldInput_Process(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrh r0, [r5]
    // add r4, r1, #0
    // lsl r0, r0, #0x12
    // lsr r0, r0, #0x1f
    // bne _021E6B12
    // add r0, r4, #0
    // mov r1, #1
    // bl TryStartMapScriptByType
    // cmp r0, #1
    // bne _021E6B12
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x12
    // lsr r0, r0, #0x1f
    // bne _021E6B66
    // ldr r0, [r4, #0xc]
    // bl SaveArray_Party_Get
    // bl HasEnoughAlivePokemonForDoubleBattle
    // add r6, r0, #0
    // ldr r0, [r4, #0xc]
    // bl Save_VarsFlags_Get
    // bl Save_VarsFlags_CheckHaveFollower
    // cmp r0, #1
    // bne _021E6B36
    // mov r6, #1
    // add r0, r4, #0
    // add r1, r6, #0
    // bl TryGetSeenByNpcTrainers
    // cmp r0, #1
    // bne _021E6B66
    // ldr r0, [r4, #0x40]
    // bl sub_0205CF44
    // ldr r0, [r4, #0x3c]
    // bl MapObjectManager_PauseAllMovement
    // add r0, r4, #0
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _021E6B62
    // add r0, r4, #0
    // bl FollowMon_GetMapObject
    // bl MapObject_UnpauseMovement
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // beq _021E6B86
    // ldr r0, [r4, #0xc]
    // bl Save_VarsFlags_Get
    // bl ClearFlag965
    // add r0, r4, #0
    // bl ov01_021E7628
    // cmp r0, #1
    // bne _021E6B86
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl BugContestTimeoutCheck
    // cmp r0, #0
    // beq _021E6B94
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r1, [r5, #6]
    // ldrh r2, [r5, #8]
    // ldr r0, [r4, #0x40]
    // mov r6, #0
    // bl sub_0205DD94
    // add r7, r0, #0
    // ldr r0, [r4, #0xc]
    // bl Save_VarsFlags_Get
    // mov r1, #2
    // bl StrengthFlagAction
    // cmp r0, #0
    // beq _021E6BB6
    // mov r0, #1
    // orr r6, r0
    // ldr r0, [r4, #0xc]
    // bl SaveArray_Party_Get
    // mov r1, #MOVE_WATERFALL
    // bl GetIdxOfFirstPartyMonWithMove
    // cmp r0, #0xff
    // beq _021E6BCA
    // mov r0, #2
    // orr r6, r0
    // ldr r1, [r4, #0x40]
    // add r0, r4, #0
    // add r2, r7, #0
    // add r3, r6, #0
    // bl ov01_021F1D94
    // cmp r0, #1
    // bne _021E6BDE
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // beq _021E6C02
    // add r0, r4, #0
    // bl ov01_021E7114
    // cmp r0, #0
    // beq _021E6BF4
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl ov01_021E6DC4
    // cmp r0, #1
    // bne _021E6C02
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x1a
    // lsr r0, r0, #0x1f
    // beq _021E6C24
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // ldrb r1, [r5, #4]
    // cmp r1, r0
    // bne _021E6C24
    // add r0, r4, #0
    // bl ov01_021E6DC4
    // cmp r0, #1
    // bne _021E6C24
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _021E6D0C
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_0203DC64
    // cmp r0, #1
    // bne _021E6C86
    // ldr r0, [r4, #0x40]
    // bl sub_0205CF60
    // cmp r0, #1
    // bne _021E6C50
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // add r1, r0, #0
    // ldr r0, [r4, #0x40]
    // bl sub_0205CFBC
    // ldr r0, [sp]
    // bl MapObject_GetType
    // cmp r0, #9
    // beq _021E6C72
    // ldr r5, [sp]
    // add r0, r5, #0
    // bl MapObject_GetScriptID
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // add r2, r5, #0
    // bl StartMapSceneScript
    // b _021E6C7C
    // ldr r2, [sp]
    // add r0, r4, #0
    // mov r1, #0
    // bl StartMapSceneScript
    // mov r0, #0
    // add r4, #0xd0
    // strh r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl Field_GetBgEvents
    // add r6, r0, #0
    // add r0, r4, #0
    // bl Field_GetNumBgEvents
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl GetInteractedBackgroundEventScript
    // add r1, r0, #0
    // ldr r0, _021E6DBC ; =0x0000FFFF
    // cmp r1, r0
    // beq _021E6CBC
    // lsl r1, r1, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #0
    // add r4, #0xd0
    // strh r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl ov01_021E7B54
    // add r1, r0, #0
    // add r0, r4, #0
    // bl GetInteractedMetatileScript
    // add r1, r0, #0
    // ldr r0, _021E6DBC ; =0x0000FFFF
    // cmp r1, r0
    // beq _021E6CE8
    // lsl r1, r1, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #0
    // add r4, #0xd0
    // strh r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl ov01_021E7F38
    // add r1, r0, #0
    // ldr r0, _021E6DBC ; =0x0000FFFF
    // cmp r1, r0
    // beq _021E6D0C
    // lsl r1, r1, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #0
    // add r4, #0xd0
    // strh r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1f
    // beq _021E6D2A
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021E7198
    // cmp r0, #1
    // bne _021E6D2A
    // add r0, r4, #0
    // bl ov01_021E7C70
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x1b
    // lsr r1, r0, #0x1e
    // beq _021E6D4C
    // add r0, r4, #0
    // bl UseRegisteredItemButtonInField
    // add r6, r0, #0
    // beq _021E6D4C
    // ldrh r1, [r5]
    // add r0, r4, #0
    // lsl r1, r1, #0x1b
    // lsr r1, r1, #0x1e
    // bl ov01_021E6920
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // beq _021E6D6E
    // add r0, r4, #0
    // bl FieldSystem_MapIsNotMysteryZone
    // cmp r0, #1
    // bne _021E6D6E
    // ldr r0, _021E6DC0 ; =SEQ_SE_DP_WIN_OPEN
    // bl PlaySE
    // add r0, r4, #0
    // bl StartMenu_Init
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl ov02_02252334
    // cmp r0, #0
    // beq _021E6D88
    // mov r1, #std_revert_shaymin>>4
    // add r0, r4, #0
    // lsl r1, r1, #4
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5]
    // lsl r1, r0, #0x16
    // lsr r1, r1, #0x1f
    // beq _021E6D9E
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov01_021F6A9C
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r0, #0x17
    // lsr r0, r0, #0x1f
    // beq _021E6DB6
    // add r0, r4, #0
    // bl FieldSystem_GetGearPhoneRingManager
    // bl ov02_02251F20
    // cmp r0, #0
    // beq _021E6DB6
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E6DBC: .word 0x0000FFFF
    // _021E6DC0: .word SEQ_SE_DP_WIN_OPEN
    // TODO: decompile
}



void ov01_021E6DC4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl Field_GetBgEvents
    // add r5, r0, #0
    // add r0, r4, #0
    // bl Field_GetNumBgEvents
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_0203DDA4
    // add r1, r0, #0
    // ldr r0, _021E6DFC ; =0x0000FFFF
    // cmp r1, r0
    // beq _021E6DF6
    // lsl r1, r1, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6DFC: .word 0x0000FFFF
    // TODO: decompile
}



void FieldInput_Process_Colosseum(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrh r0, [r4]
    // add r5, r1, #0
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1f
    // beq _021E6E32
    // mov r0, #5
    // ldrsb r0, [r4, r0]
    // cmp r0, #1
    // bne _021E6E32
    // add r0, r5, #0
    // bl ov01_021E7B38
    // bl sub_0205B73C
    // cmp r0, #0
    // beq _021E6E32
    // ldr r1, _021E6ED0 ; =std_colosseum_exit
    // add r0, r5, #0
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // bl sub_02037958
    // cmp r0, #0
    // bne _021E6E4E
    // bl sub_0203769C
    // bl sub_02057F18
    // cmp r0, #0
    // bne _021E6E4E
    // bl sub_02058740
    // cmp r0, #0
    // bne _021E6E52
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrh r0, [r4]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _021E6EA2
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_0203DC64
    // cmp r0, #1
    // bne _021E6EA2
    // ldr r0, [sp]
    // bl MapObject_GetMovement
    // cmp r0, #1
    // beq _021E6EA2
    // ldr r0, [r5, #0x40]
    // bl sub_0205CF60
    // cmp r0, #1
    // bne _021E6E88
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // add r1, r0, #0
    // ldr r0, [r5, #0x40]
    // bl sub_0205CFBC
    // ldr r4, [sp]
    // add r0, r4, #0
    // bl MapObject_GetScriptID
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // add r0, r5, #0
    // lsr r1, r1, #0x10
    // add r2, r4, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldrh r0, [r4]
    // lsl r1, r0, #0x1f
    // lsr r1, r1, #0x1f
    // beq _021E6EB4
    // add r0, r5, #0
    // bl sub_02059D44
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // beq _021E6ECA
    // ldr r0, _021E6ED4 ; =SEQ_SE_DP_WIN_OPEN
    // bl PlaySE
    // add r0, r5, #0
    // bl sub_0203BD20
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E6ED0: .word std_colosseum_exit
    // _021E6ED4: .word SEQ_SE_DP_WIN_OPEN
    // TODO: decompile
}



void ov01_021E6ED8(void) {
    sub_02034818(1);
}



void FieldInput_Process_UnionRoom(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r1, #0
    // bl sub_02033250
    // mov r1, #0xfe
    // tst r0, r1
    // beq _021E6F2E
    // bl ov01_021E6ED8
    // cmp r0, #0
    // beq _021E6F2A
    // bl sub_02037454
    // cmp r0, #1
    // ble _021E6F2A
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrh r0, [r4]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _021E6F78
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_0203DC64
    // cmp r0, #1
    // bne _021E6F78
    // ldr r0, [r5, #0x40]
    // bl sub_0205CF60
    // cmp r0, #1
    // bne _021E6F5A
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // add r1, r0, #0
    // ldr r0, [r5, #0x40]
    // bl sub_0205CFBC
    // bl sub_020380B0
    // ldr r4, [sp]
    // add r0, r4, #0
    // bl MapObject_GetScriptID
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // add r0, r5, #0
    // lsr r1, r1, #0x10
    // add r2, r4, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldrh r0, [r4]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // beq _021E6F98
    // add r0, r5, #0
    // bl ov01_021E7B38
    // bl sub_0205BA18
    // cmp r0, #0
    // beq _021E6F98
    // add r0, r5, #0
    // bl sub_02053F14
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldrh r0, [r4]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // beq _021E6FCC
    // bl sub_02037454
    // cmp r0, #1
    // bgt _021E6FCC
    // add r0, r5, #0
    // bl ov01_021E690C
    // cmp r0, #0
    // beq _021E6FCC
    // ldr r0, _021E6FD0 ; =SEQ_SE_DP_WIN_OPEN
    // bl PlaySE
    // add r0, r5, #0
    // bl sub_0203BCDC
    // mov r0, #4
    // bl sub_0205A904
    // bl sub_020380CC
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _021E6FD0: .word SEQ_SE_DP_WIN_OPEN
    // TODO: decompile
}



void FieldInput_Process_BattleTower(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // ldrh r0, [r5]
    // add r4, r1, #0
    // lsl r0, r0, #0x12
    // lsr r0, r0, #0x1f
    // bne _021E6FF6
    // add r0, r4, #0
    // mov r1, #1
    // bl TryStartMapScriptByType
    // cmp r0, #1
    // bne _021E6FF6
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _021E70AE
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_0203DC64
    // cmp r0, #1
    // bne _021E7054
    // ldr r0, [r4, #0x40]
    // bl sub_0205CF60
    // cmp r0, #1
    // bne _021E7022
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // add r1, r0, #0
    // ldr r0, [r4, #0x40]
    // bl sub_0205CFBC
    // ldr r0, [sp]
    // bl MapObject_GetType
    // cmp r0, #9
    // beq _021E7044
    // ldr r5, [sp]
    // add r0, r5, #0
    // bl MapObject_GetScriptID
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // add r2, r5, #0
    // bl StartMapSceneScript
    // b _021E704E
    // ldr r2, [sp]
    // add r0, r4, #0
    // mov r1, #0
    // bl StartMapSceneScript
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // bl Field_GetBgEvents
    // add r6, r0, #0
    // add r0, r4, #0
    // bl Field_GetNumBgEvents
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl GetInteractedBackgroundEventScript
    // add r1, r0, #0
    // ldr r0, _021E710C ; =0x0000FFFF
    // cmp r1, r0
    // beq _021E7086
    // lsl r1, r1, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // mov r2, #0
    // bl StartMapSceneScript
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, #0
    // bl ov01_021E7B54
    // add r1, r0, #0
    // add r0, r4, #0
    // bl GetInteractedMetatileScript
    // add r1, r0, #0
    // ldr r0, _021E710C ; =0x0000FFFF
    // cmp r1, r0
    // beq _021E70AE
    // lsl r1, r1, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // mov r2, #0
    // bl StartMapSceneScript
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1f
    // beq _021E70C8
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021E7198
    // cmp r0, #1
    // bne _021E70C8
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x1b
    // lsr r1, r0, #0x1e
    // beq _021E70EC
    // add r0, r4, #0
    // bl UseRegisteredItemButtonInField
    // add r6, r0, #0
    // beq _021E70EC
    // ldrh r1, [r5]
    // add r0, r4, #0
    // lsl r1, r1, #0x1b
    // lsr r1, r1, #0x1e
    // bl ov01_021E6920
    // add sp, #4
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, pc}
    // ldrh r0, [r5]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // beq _021E7106
    // ldr r0, _021E7110 ; =SEQ_SE_DP_WIN_OPEN
    // bl PlaySE
    // add r0, r4, #0
    // bl StartMenu_Init
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _021E710C: .word 0x0000FFFF
    // _021E7110: .word SEQ_SE_DP_WIN_OPEN
    // TODO: decompile
}



void ov01_021E7114(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // add r0, #0x7e
    // ldrh r1, [r0]
    // ldr r0, _021E7194 ; =0x0000FFFF
    // cmp r1, r0
    // bhs _021E7132
    // add r0, r4, #0
    // add r0, #0x7e
    // ldrh r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x7e
    // strh r1, [r0]
    // add r0, r4, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // bl PlayerAvatar_GetStandingTileCoords
    // ldr r0, [r4, #0xc]
    // bl Save_VarsFlags_Get
    // bl Save_VarsFlags_CheckPalParkSysFlag
    // cmp r0, #1
    // bne _021E7172
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r0, r4, #0
    // bl CatchingShow_CheckWildEncounter
    // cmp r0, #1
    // bne _021E716C
    // add r0, r4, #0
    // bl CatchingShow_GetBattleDataTransfer
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_020511F8
    // add sp, #8
    // mov r0, #1
    // pop {r4, pc}
    // add sp, #8
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0x20]
    // ldr r0, [r0]
    // bl MapHeader_HasWildEncounters
    // cmp r0, #0
    // beq _021E718E
    // add r0, r4, #0
    // bl FieldSystem_PerformLandOrSurfEncounterCheck
    // cmp r0, #1
    // bne _021E718E
    // add sp, #8
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r4, pc}
    // _021E7194: .word 0x0000FFFF
    // TODO: decompile
}



void ov01_021E7198(void) {
    // ldrsb r2, [r5, r1]
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    PlayerAvatar_GetStandingTileCoords(0, (5 - 6));
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    GetMetatileBehavior(r6);
    sub_0205BAA0();
    // ldrsb r0, [r5, r0]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x14
    ov01_021E7B90(r6);
    // str r3, [sp]
    // ldrsb r0, [r5, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    NewFieldTransitionEnvironment(r6, 0);
    sub_0205BAAC(r4);
    // ldrsb r0, [r5, r0]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x14
    ov01_021E7B90(r6);
    // str r3, [sp]
    // ldrsb r0, [r5, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    NewFieldTransitionEnvironment(r6, 0);
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    PlayerAvatar_GetFacingTileCoords(r6);
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    sub_020548C0(r6);
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x14
    ov01_021E7B90(r6);
    // ldrsb r1, [r5, r0]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    GetMetatileBehavior(r6);
    sub_0205B70C();
    // str r3, [sp]
    // ldrsb r0, [r5, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    NewFieldTransitionEnvironment(r6, 0);
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    PlayerAvatar_GetStandingTileCoords(r6);
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    GetMetatileBehavior(r6);
    sub_0205B718();
    sub_0205B748(r4);
    // ldrsb r0, [r5, r0]
    sub_0205B724(r4);
    sub_0205B754(r4);
    // ldrsb r0, [r5, r0]
    sub_0205B73C(r4);
    sub_0205B76C(r4);
    // ldrsb r0, [r5, r0]
    sub_0205B810(r4);
    // ldrsb r0, [r5, r0]
    sub_0205B81C(r4);
    // ldrsb r0, [r5, r0]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x14
    ov01_021E7B90(r6);
    sub_0205B70C(r4);
    sub_0205B810(r4, 1);
    sub_0205B81C(r4, 3);
    sub_0205B718(r4, 3);
    sub_0205B748(r4);
    sub_0205B724(r4);
    sub_0205B754(r4);
    sub_0205B73C(r4);
    sub_0205B76C(r4);
    // str r3, [sp]
    // ldrsb r0, [r5, r0]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    sub_02055CD8(r6, 0);
    // str r3, [sp]
    // ldrsb r0, [r5, r0]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    NewFieldTransitionEnvironment(r6, 0);
}



void GetInteractedMetatileScript(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x40]
    // add r4, r1, #0
    // bl PlayerAvatar_GetFacingDirection
    // add r6, r0, #0
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetXCoord
    // add r7, r0, #0
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetZCoord
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl GetMetatileBehavior
    // add r7, r0, #0
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205B78C
    // cmp r0, #0
    // beq _021E7450
    // ldr r0, _021E75DC ; =0x0000FFFF
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0205B7E0
    // cmp r0, #0
    // beq _021E7462
    // cmp r6, #0
    // bne _021E7462
    // ldr r0, _021E75E0 ; =std_pokecenter_pc
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0205B84C
    // cmp r0, #0
    // beq _021E7470
    // ldr r0, _021E75E4 ; =std_picture_books
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0205B858
    // cmp r0, #0
    // beq _021E747E
    // ldr r0, _021E75E8 ; =std_books_for_pkmn
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0205B864
    // cmp r0, #0
    // beq _021E748C
    // ldr r0, _021E75EC ; =std_chock_full
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0205B870
    // cmp r0, #0
    // beq _021E749A
    // ldr r0, _021E75F0 ; =std_magazines
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0205B87C
    // cmp r0, #0
    // beq _021E74A8
    // ldr r0, _021E75F4 ; =std_trash_empty
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0205B888
    // cmp r0, #0
    // beq _021E74B6
    // ldr r0, _021E75F8 ; =std_vibrant_pkmn_goods
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0205B894
    // cmp r0, #0
    // beq _021E74C4
    // ldr r0, _021E75FC ; =std_convenient_items
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0205B8A0
    // cmp r0, #0
    // beq _021E74D2
    // ldr r0, _021E7600 ; =std_pkmn_merchandise
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl MetatileBehavior_IsTownMap
    // cmp r0, #0
    // beq _021E74E0
    // ldr r0, _021E7604 ; =std_town_map
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0205B9AC
    // cmp r0, #0
    // beq _021E74F2
    // cmp r6, #0
    // bne _021E74F2
    // ldr r0, _021E7608 ; =std_tv
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl MetatileBehavior_IsHeadbutt
    // cmp r0, #0
    // beq _021E7500
    // ldr r0, _021E760C ; =std_field_headbutt
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, r6, #0
    // bl MetatileBehavior_IsRockClimbInDirection
    // cmp r0, #0
    // beq _021E7510
    // ldr r0, _021E7610 ; =std_field_rock_climb
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetState
    // cmp r0, #2
    // beq _021E7570
    // ldr r0, [r5, #0xc]
    // bl Save_PlayerData_GetProfile
    // add r6, r0, #0
    // ldr r0, [r5, #0x40]
    // add r1, r7, #0
    // add r2, r4, #0
    // bl Field_PlayerCanSurfOnTile
    // cmp r0, #0
    // beq _021E7550
    // add r0, r6, #0
    // mov r1, #3
    // bl PlayerProfile_TestBadgeFlag
    // cmp r0, #0
    // beq _021E7550
    // ldr r0, [r5, #0xc]
    // bl SaveArray_Party_Get
    // mov r1, #MOVE_SURF
    // bl GetIdxOfFirstPartyMonWithMove
    // cmp r0, #0xff
    // beq _021E7550
    // ldr r0, _021E7614 ; =std_field_surf
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl ov02_0224E35C
    // cmp r0, #0
    // beq _021E75AC
    // add r0, r5, #0
    // bl ov01_021E7B70
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov02_0224E4CC
    // cmp r0, #0
    // beq _021E75AC
    // ldr r0, _021E7618 ; =std_safari_place_object
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl MetatileBehavior_IsWaterfall
    // cmp r0, #0
    // beq _021E757E
    // ldr r0, _021E761C ; =std_field_waterfall
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl MetatileBehavior_IsWhirlpool
    // cmp r0, #0
    // beq _021E758C
    // ldr r0, _021E7620 ; =std_field_whirlpool
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl ov02_0224E35C
    // cmp r0, #0
    // beq _021E75AC
    // add r0, r5, #0
    // bl ov01_021E7B70
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov02_0224E4DC
    // cmp r0, #0
    // beq _021E75AC
    // ldr r0, _021E7618 ; =std_safari_place_object
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // bl Save_VarsFlags_CheckSafariSysFlag
    // cmp r0, #0
    // beq _021E75D6
    // ldr r0, [r5, #0xc]
    // bl Save_SafariZone_Get
    // bl sub_0202F620
    // cmp r0, #0
    // bne _021E75D6
    // add r0, r4, #0
    // bl sub_0205BAEC
    // cmp r0, #0
    // beq _021E75D6
    // ldr r0, _021E7624 ; =std_safari_remove_object
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _021E75DC ; =0x0000FFFF
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E75DC: .word 0x0000FFFF
    // _021E75E0: .word std_pokecenter_pc
    // _021E75E4: .word std_picture_books
    // _021E75E8: .word std_books_for_pkmn
    // _021E75EC: .word std_chock_full
    // _021E75F0: .word std_magazines
    // _021E75F4: .word std_trash_empty
    // _021E75F8: .word std_vibrant_pkmn_goods
    // _021E75FC: .word std_convenient_items
    // _021E7600: .word std_pkmn_merchandise
    // _021E7604: .word std_town_map
    // _021E7608: .word std_tv
    // _021E760C: .word std_field_headbutt
    // _021E7610: .word std_field_rock_climb
    // _021E7614: .word std_field_surf
    // _021E7618: .word std_safari_place_object
    // _021E761C: .word std_field_waterfall
    // _021E7620: .word std_field_whirlpool
    // _021E7624: .word std_safari_remove_object
    // TODO: decompile
}



void ov01_021E7628(void) {
    FieldSystem_IsSaveGymmickTypeEqualTo(6);
    ov04_02255090(r5);
    PlayerAvatar_GetFacingDirection(*((u32*)(r5 + 0x40)));
    ov01_021F3114(r5, *((u32*)(r5 + 0x40)), r0);
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    sub_0205F504();
    ov04_02256BE4(r5, ((r0 << 0x18) >> 0x18));
    PlayerAvatar_GetXCoord(1);
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    ov01_021E7DFC(r5, r4, r0);
    GetMetatileBehavior(r5, r4, r6);
    ov01_021E774C(r5);
    ov01_021E7784(r5, r4, r6, r7);
    ov01_021E7C70(r5);
    PlayerAvatar_CheckFlag0(*((u32*)(r5 + 0x40)));
    ov01_021F6830(r5, 5, 1);
    ov01_021E7A98(r5);
    ov01_021E794C(r5);
    SafariBallsOutCheck(r5);
    ov01_021E788C(r5);
    ov01_021E78D8(r5);
    ov01_021E7A08(r5);
    ov01_021E78E4(r5);
    ov01_021E790C(r5);
    FollowMon_IsVisible(r5);
    // ldr r0, [r5, r0]
    FieldSystem_UnkSub108_MoveMoodTowardsNeutral((0x42 << 2));
}



void ov01_021E774C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl Field_GetCoordEvents
    // add r5, r0, #0
    // add r0, r4, #0
    // bl Field_GetNumCoordEvents
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl sub_0203DE04
    // add r1, r0, #0
    // ldr r0, _021E7780 ; =0x0000FFFF
    // cmp r1, r0
    // beq _021E777A
    // add r0, r4, #0
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E7780: .word 0x0000FFFF
    // TODO: decompile
}



void ov01_021E7784(void) {
    // add r3, sp, #0xc
    ov01_021E7B90();
    sub_0205B7F8(r5);
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)));
    GF_AssertFail(2);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    NewFieldTransitionEnvironment(r4, 0);
    sub_0205B804(r5);
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)));
    GF_AssertFail();
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    NewFieldTransitionEnvironment(r4, 0);
    sub_0205B730(r5);
    sub_0205B760(r5);
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    sub_02055CD8(r4, 0);
    sub_0205BA18(r5);
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    sub_02053E08(r4);
    sub_0205BAB8(r5);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    NewFieldTransitionEnvironment(r4, 0);
}



void ov01_021E788C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // bl SaveArray_Party_Get
    // add r5, r0, #0
    // ldr r0, [r4, #0xc]
    // bl Save_Daycare_Get
    // add r1, r5, #0
    // add r2, r4, #0
    // bl HandleDaycareStep
    // cmp r0, #1
    // bne _021E78CE
    // ldr r0, [r4, #0xc]
    // bl Save_GameStats_Get
    // add r5, r0, #0
    // mov r1, #0xc
    // bl GameStats_Inc
    // add r0, r5, #0
    // mov r1, #0xf
    // bl GameStats_AddScore
    // ldr r1, _021E78D4 ; =std_hatch_egg
    // add r0, r4, #0
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E78D4: .word std_hatch_egg
    // TODO: decompile
}



void ov01_021E78D8(void) {
}



void ov01_021E78E4(void) {
    Save_VarsFlags_Get(*((u32*)(r0 + 0xc)));
    Save_VarsFlags_GetVar404B();
    Save_VarsFlags_SetVar404B(r4, r5);
}



void ov01_021E790C(void) {
    SaveArray_Party_Get(*((u32*)(r0 + 0xc)));
    MapHeader_GetMapSec(*((u32*)*((u32*)(r4 + 0x20))));
    Party_GetCount(r6);
    Party_GetMonByIndex(r6, 0);
    MonApplyFriendshipMod(5, r5);
}



void ov01_021E794C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // bl SaveArray_Party_Get
    // add r4, r0, #0
    // ldr r0, [r5, #0xc]
    // bl Save_LocalFieldData_Get
    // bl LocalFieldData_GetPoisonStepCounter
    // ldrh r1, [r0]
    // add r1, r1, #1
    // strh r1, [r0]
    // ldrh r2, [r0]
    // mov r1, #3
    // and r1, r2
    // strh r1, [r0]
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _021E797A
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x20]
    // ldr r0, [r0]
    // bl MapHeader_GetMapSec
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // add r0, r4, #0
    // lsr r1, r1, #0x10
    // bl ApplyPoisonStep
    // cmp r0, #0
    // beq _021E799C
    // cmp r0, #1
    // beq _021E79A0
    // cmp r0, #2
    // beq _021E79AC
    // b _021E79C2
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #4]
    // ldr r0, [r0, #0x20]
    // bl ov01_021FB630
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #4]
    // ldr r0, [r0, #0x20]
    // bl ov01_021FB630
    // ldr r1, _021E79C8 ; =std_survive_poisoning
    // add r0, r5, #0
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E79C8: .word std_survive_poisoning
    // TODO: decompile
}



void SafariBallsOutCheck(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // bl Save_VarsFlags_Get
    // bl Save_VarsFlags_CheckSafariSysFlag
    // cmp r0, #0
    // bne _021E79E2
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0xc]
    // bl Save_LocalFieldData_Get
    // bl LocalFieldData_GetSafariBallsCounter
    // ldrh r0, [r0]
    // cmp r0, #0
    // bne _021E7A00
    // ldr r1, _021E7A04 ; =std_safari_balls_out
    // add r0, r4, #0
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _021E7A04: .word std_safari_balls_out
    // TODO: decompile
}



void ov01_021E7A08(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // bl SaveData_GetPhoneCallPersistentState
    // add r5, r0, #0
    // ldr r0, [r4, #0xc]
    // bl Save_VarsFlags_Get
    // ldr r1, _021E7A5C ; =FLAG_SYS_GOT_BIKE_SHOP_CALL
    // bl Save_VarsFlags_CheckFlagInArray
    // cmp r0, #0
    // bne _021E7A56
    // add r0, r5, #0
    // mov r1, #2
    // bl PhoneCallPersistentState_CheckCallTriggerFlag
    // cmp r0, #0
    // bne _021E7A56
    // ldr r0, [r4, #0xc]
    // bl Save_GameStats_Get
    // mov r1, #1
    // bl GameStats_GetCapped
    // mov r1, #1
    // lsl r1, r1, #0xa
    // cmp r0, r1
    // blo _021E7A56
    // add r0, r4, #0
    // bl FieldSystem_GetGearPhoneRingManager
    // mov r1, #CALL_TRIGGER_BIKE_SHOP_STEPS
    // mov r2, #1  // TRUE
    // bl sub_02092E14
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E7A5C: .word FLAG_SYS_GOT_BIKE_SHOP_CALL
    // TODO: decompile
}



void BugContestTimeoutCheck(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl FieldSystem_BugContest_Get
    // add r5, r0, #0
    // ldr r0, [r4, #0xc]
    // bl Save_VarsFlags_Get
    // bl Save_VarsFlags_CheckBugContestFlag
    // cmp r0, #0
    // bne _021E7A7C
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x1c]
    // cmp r0, #0x14
    // blo _021E7A90
    // ldr r1, _021E7A94 ; =std_bug_contest_time_up
    // add r0, r4, #0
    // mov r2, #0
    // bl StartMapSceneScript
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _021E7A94: .word std_bug_contest_time_up
    // TODO: decompile
}



void ov01_021E7A98(void) {
}



void PlayerAvatar_GetStandingTileCoords(void) {
}



void PlayerAvatar_GetFacingTileCoords(void) {
}



void ShiftFieldCoordsByCompassDirection(void) {
    PlayerAvatar_GetStandingTileCoords(r2, r3);
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E7B10: ; jump table
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r4]
}



void ov01_021E7B38(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    PlayerAvatar_GetStandingTileCoords();
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    GetMetatileBehavior(r4);
}



void ov01_021E7B54(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    PlayerAvatar_GetFacingTileCoords();
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    GetMetatileBehavior(r4);
}



void ov01_021E7B70(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    PlayerAvatar_GetFacingTileCoords();
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    sub_020548C0(r4);
}



void ov01_021E7B90(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // add r7, r1, #0
    // str r2, [sp]
    // add r5, r3, #0
    // bl Field_GetWarpEventAtXYPos
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // bne _021E7BAC
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, r6, #0
    // bl Field_GetWarpEventI
    // cmp r0, #0
    // bne _021E7BBC
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r3, [r0, #6]
    // mov r1, #1
    // lsl r1, r1, #8
    // cmp r3, r1
    // bne _021E7BEC
    // ldrh r1, [r0, #4]
    // ldr r0, _021E7C24 ; =0x00000FFF
    // cmp r1, r0
    // beq _021E7BD2
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // bl Save_LocalFieldData_Get
    // bl LocalFieldData_GetDynamicWarp
    // add r2, r0, #0
    // ldmia r2!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldr r0, [r2]
    // str r0, [r5]
    // b _021E7BFE
    // ldrh r2, [r0, #2]
    // ldrh r1, [r0]
    // ldrh r0, [r0, #4]
    // str r0, [r5]
    // str r3, [r5, #4]
    // str r1, [r5, #8]
    // str r2, [r5, #0xc]
    // mov r0, #1
    // str r0, [r5, #0x10]
    // ldr r0, [r4, #0xc]
    // bl Save_LocalFieldData_Get
    // bl LocalFieldData_GetEntrancePosition
    // add r5, r0, #0
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // ldr r1, [r4, #0x20]
    // ldr r1, [r1]
    // str r1, [r5]
    // str r6, [r5, #4]
    // ldr r1, [sp]
    // str r7, [r5, #8]
    // str r1, [r5, #0xc]
    // str r0, [r5, #0x10]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E7C24: .word 0x00000FFF
    // TODO: decompile
}



void ov01_021E7C28(void) {
    // str r2, [sp]
    Save_LocalFieldData_Get(*((u32*)(r0 + 0xc)));
    LocalFieldData_GetSpecialSpawnWarpPtr();
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u32*)(r0 + 0x10)) = r4;
    // ldr r0, [sp]
    *((u32*)(r0 + 8)) = r7;
    *((u32*)(r0 + 0xc)) = *((u32*)*((u32*)(r5 + 0x20)));
    *((u32*)(r0 + 0xc)) = (*((u32*)(r0 + 0xc)) + 1);
    // str r0, [r6]
    // mvn r0, r0
    *((u32*)(r0 + 4)) = 0;
}



void ov01_021E7C70(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    PlayerAvatar_GetStandingTileCoords();
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r3, sp, #8
    ov01_021E7B90(r4);
    MapHeader_MapIsOnMainMatrix(*((u32*)*((u32*)(r4 + 0x20))));
    // ldr r0, [sp, #8]
    MapHeader_MapIsOnMainMatrix();
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)));
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov01_021E7C28(r4, r0);
    // add r1, sp, #4
    // add r2, sp, #0
    PlayerAvatar_GetFacingTileCoords(r4);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r3, sp, #8
    ov01_021E7B90(r4);
    MapHeader_MapIsOnMainMatrix(*((u32*)*((u32*)(r4 + 0x20))));
    // ldr r0, [sp, #8]
    MapHeader_MapIsOnMainMatrix();
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)));
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov01_021E7C28(r4, r0);
}



void ov01_021E7D00(void) {
    // sub r0, r0, r4
    // ror r0, r6
    // add r1, r4, r0
    // sub r0, r0, r4
    // ror r0, r6
    // add r2, r4, r0
    // mvn r3, r3
    // add r4, #8
}



void ov01_021E7D58(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // add r7, r2, #0
    // add r4, r1, #0
    // bl Save_VarsFlags_Get
    // add r6, r0, #0
    // lsl r0, r7, #3
    // add r0, r4, r0
    // ldrb r0, [r0, #4]
    // lsl r1, r0, #2
    // ldr r0, _021E7DE4 ; =ov01_022063BC
    // ldrh r4, [r0, r1]
    // ldr r0, [r5, #0xc]
    // bl Save_LocalFieldData_Get
    // bl LocalFieldData_GetCurrentPosition
    // add r5, r0, #0
    // ldr r0, [r5]
    // cmp r0, #0x8b
    // bne _021E7D9A
    // add r0, r6, #0
    // bl CheckDisabledCianwoodWaterfall
    // cmp r0, #0
    // beq _021E7D9A
    // ldr r0, _021E7DE8 ; =0x0000085F
    // cmp r4, r0
    // bne _021E7D9A
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r5]
    // ldr r0, _021E7DEC ; =0x0000016D
    // cmp r1, r0
    // bne _021E7DB6
    // add r0, r6, #0
    // bl CheckSolvedLtSurgeGym
    // cmp r0, #0
    // beq _021E7DB6
    // ldr r0, _021E7DF0 ; =0x00000866
    // cmp r4, r0
    // bne _021E7DB6
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl CheckBattledSnorlax
    // cmp r0, #1
    // bne _021E7DCA
    // ldr r0, _021E7DF4 ; =0x00000865
    // cmp r4, r0
    // bne _021E7DCA
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl CheckBattledRedGyarados
    // cmp r0, #0
    // beq _021E7DDE
    // ldr r0, _021E7DF8 ; =0x0000085D
    // cmp r4, r0
    // bne _021E7DDE
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E7DE4: .word ov01_022063BC
    // _021E7DE8: .word 0x0000085F
    // _021E7DEC: .word 0x0000016D
    // _021E7DF0: .word 0x00000866
    // _021E7DF4: .word 0x00000865
    // _021E7DF8: .word 0x0000085D
    // TODO: decompile
}



void ov01_021E7DFC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r7, r2, #0
    // bl sub_02054874
    // add r6, r0, #0
    // add r0, r5, #0
    // add r0, #0xc4
    // mov r1, #1
    // ldr r2, [r0]
    // mvn r1, r1
    // cmp r2, r1
    // bne _021E7E22
    // add r0, r5, #0
    // add r1, r1, #1
    // add r0, #0xc4
    // str r1, [r0]
    // b _021E7E30
    // sub r0, r1, #1
    // cmp r2, r0
    // bne _021E7E30
    // add r0, r5, #0
    // add r1, r1, #1
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl ov01_021E7D00
    // mov r1, #0
    // add r7, r0, #0
    // mvn r1, r1
    // cmp r7, r1
    // beq _021E7EC6
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl ov01_021E7D58
    // cmp r0, #0
    // beq _021E7EEC
    // add r0, r6, #4
    // lsl r4, r7, #3
    // str r0, [sp]
    // ldrb r0, [r0, r4]
    // cmp r0, #0x10
    // bhs _021E7EBC
    // lsl r1, r0, #2
    // ldr r0, _021E7EF0 ; =ov01_022063BC
    // add r2, r5, #0
    // add r2, #0xc4
    // ldrh r0, [r0, r1]
    // ldr r2, [r2]
    // cmp r2, r0
    // beq _021E7E80
    // ldr r2, _021E7EF4 ; =ov01_022063BC + 2
    // ldrh r1, [r2, r1]
    // cmp r1, #1
    // bne _021E7E7C
    // bl sub_02006088
    // b _021E7E80
    // bl PlaySE
    // ldr r0, [sp]
    // add r5, #0xc4
    // ldrb r0, [r0, r4]
    // lsl r1, r0, #2
    // ldr r0, _021E7EF0 ; =ov01_022063BC
    // ldrh r0, [r0, r1]
    // str r0, [r5]
    // add r5, r6, #5
    // ldrb r2, [r5, r4]
    // cmp r2, #3
    // bhs _021E7EEC
    // ldr r1, _021E7EF8 ; =ov01_02206388
    // mov r0, #0
    // ldrb r1, [r1, r2]
    // mov r2, #0xf
    // bl GF_SndHandleMoveVolume
    // ldr r1, [sp]
    // mov r0, #5
    // ldrb r2, [r1, r4]
    // lsl r1, r2, #1
    // add r3, r2, r1
    // ldr r1, _021E7EFC ; =ov01_0220638C
    // ldrb r2, [r5, r4]
    // add r1, r1, r3
    // ldrb r1, [r2, r1]
    // add r2, r0, #0
    // bl GF_SndHandleMoveVolume
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r7, #0x10
    // blt _021E7EEC
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // cmp r0, r1
    // beq _021E7EEC
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // mov r1, #0xa
    // bl StopSE
    // mov r0, #0
    // mov r1, #0x80
    // mov r2, #0xf
    // bl GF_SndHandleMoveVolume
    // mov r0, #0
    // mvn r0, r0
    // add r5, #0xc4
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E7EF0: .word ov01_022063BC
    // _021E7EF4: .word ov01_022063BC + 2
    // _021E7EF8: .word ov01_02206388
    // _021E7EFC: .word ov01_0220638C
    // TODO: decompile
}



void ov01_021E7F00(void) {
    // add r0, #0xac
    PlayerAvatar_GetXCoord(*((u32*)(r0 + 0x40)));
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    // mvn r1, r1
    // add r0, #0xc4
    // str r1, [r0]
    ov01_021E7DFC(r5, r6, r0);
}



void ov01_021E7F38(void) {
}



void ov01_021E7F54(void) {
    // push {r3, r4, r5, lr}
    // add r1, sp, #0
    // add r5, r0, #0
    // bl sub_0203DC64
    // cmp r0, #1
    // bne _021E7F7C
    // ldr r0, [sp]
    // bl MapObject_GetType
    // cmp r0, #0
    // beq _021E7F74
    // cmp r0, #3
    // bne _021E7F78
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl Field_GetBgEvents
    // add r4, r0, #0
    // add r0, r5, #0
    // bl Field_GetNumBgEvents
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GetInteractedBackgroundEventScript
    // ldr r1, _021E7FA4 ; =0x0000FFFF
    // cmp r0, r1
    // beq _021E7F9E
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E7FA4: .word 0x0000FFFF
    // TODO: decompile
}



void FieldSystem_FacingModelIsHeadbuttTree(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    PlayerAvatar_GetFacingTileCoords();
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    MapCoordToMatrixIndex(r4);
    GetMapModelNo(*((u32*)(r4 + 0x30)));
    MapModel_IsHeadbuttTree();
}


