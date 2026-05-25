/* Decompiled from asm/overlay_01_021FC66C.s */
#include "global.h"

void CreateFishingRodTaskEnv(void) {
    // push {r3, r4, r5, lr}
    // add r0, r1, #0
    // mov r1, #0x18
    // add r5, r2, #0
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // add r2, r4, #0
    // mov r1, #0x18
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _021FC680
    // add r0, r5, #0
    // str r5, [r4, #0xc]
    // bl ov01_021FCC00
    // str r0, [r4, #4]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void Task_OverworldFish(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r4, r0, #0
    // add r0, r6, #0
    // bl TaskManager_GetEnvironment
    // add r5, r0, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _021FC6B6
    // cmp r0, #1
    // beq _021FC6E2
    // b _021FC742
    // ldr r0, [r4, #0x3c]
    // bl MapObjectManager_PauseAllMovement
    // mov r0, #0
    // str r0, [r5, #0x10]
    // add r2, r5, #0
    // ldr r1, [r5, #0xc]
    // add r0, r4, #0
    // add r2, #0x10
    // bl FieldSystem_PerformFishEncounterCheck
    // str r0, [r5, #8]
    // ldr r1, [r5, #0xc]
    // ldr r2, [r5, #8]
    // add r0, r4, #0
    // bl ov01_021FC748
    // str r0, [r5, #0x14]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _021FC742
    // ldr r0, [r5, #0x14]
    // bl ov01_021FC76C
    // cmp r0, #1
    // bne _021FC742
    // ldr r0, [r5, #0x14]
    // bl ov01_021FC778
    // add r7, r0, #0
    // ldr r0, [r5, #0x14]
    // bl ov01_021FC784
    // cmp r7, #1
    // bne _021FC728
    // add r0, r4, #0
    // bl FieldSystem_GetGearPhoneRingManager
    // bl GearPhoneRingManager_ResetIfActive
    // ldr r0, [r4, #0xc]
    // bl Save_GameStats_Get
    // mov r1, #0xb
    // bl GameStats_Inc
    // ldr r2, [r5, #0x10]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl FieldSystem_StartForcedWildBattle
    // add r0, r5, #0
    // bl Heap_Free
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // beq _021FC732
    // bl BattleSetup_Delete
    // ldr r0, [r4, #0x3c]
    // bl MapObjectManager_UnpauseAllMovement
    // add r0, r5, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FC748(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #0x4c
    // add r4, r1, #0
    // add r6, r2, #0
    // bl ov01_021FCAC4
    // add r1, r0, #0
    // str r5, [r1, #0x20]
    // str r4, [r1, #0x1c]
    // ldr r0, _021FC768 ; =ov01_021FC798
    // mov r2, #0x80
    // str r6, [r1]
    // bl SysTask_CreateOnMainQueue
    // pop {r4, r5, r6, pc}
    // _021FC768: .word ov01_021FC798
    // TODO: decompile
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
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #0x20]
    // ldr r6, [r0, #0x40]
    // add r0, r6, #0
    // bl PlayerAvatar_GetMapObject
    // ldr r7, _021FC7C0 ; =ov01_02208DC4
    // add r4, r0, #0
    // ldr r3, [r5, #0xc]
    // add r0, r5, #0
    // lsl r3, r3, #2
    // ldr r3, [r7, r3]
    // add r1, r6, #0
    // add r2, r4, #0
    // blx r3
    // cmp r0, #0
    // bne _021FC7AA
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FC7C0: .word ov01_02208DC4
    // TODO: decompile
}


void ov01_021FC7C4(void) {
    ov01_021FCB14();
    MapObject_UnpauseMovement(r4);
    *((u32*)(r5 + 0xc)) = 1;
}


void ov01_021FC7DC(void) {
    // push {r4, r5, r6, lr}
    // add r6, r2, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // add r4, r1, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _021FC80E
    // add r0, r6, #0
    // bl MapObject_ClearHeldMovementIfActive
    // add r0, r4, #0
    // mov r1, #0x20
    // bl Field_PlayerAvatar_OrrTransitionFlags
    // add r0, r4, #0
    // bl Field_PlayerAvatar_ApplyTransitionFlags
    // add r0, r6, #0
    // mov r1, #1
    // bl sub_0205F328
    // mov r0, #2
    // str r0, [r5, #0xc]
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FC814(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // add r0, r0, #1
    // str r0, [r4, #0x10]
    // cmp r0, #0xa
    // bne _021FC828
    // ldr r0, _021FC848 ; =SEQ_SE_DP_FW104
    // bl PlaySE
    // ldr r0, [r4, #0x10]
    // cmp r0, #0x22
    // bge _021FC832
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4]
    // cmp r0, #1
    // bne _021FC83C
    // mov r0, #3
    // b _021FC83E
    // mov r0, #0xc
    // str r0, [r4, #0xc]
    // mov r0, #0
    // str r0, [r4, #0x10]
    // mov r0, #1
    // pop {r4, pc}
    // _021FC848: .word SEQ_SE_DP_FW104
    // TODO: decompile
}


void ov01_021FC84C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl LCRandom
    // lsr r1, r0, #0x1f
    // lsl r0, r0, #0x1e
    // sub r0, r0, r1
    // mov r2, #0x1e
    // ror r0, r2
    // add r0, r1, r0
    // add r0, r0, #1
    // add r1, r0, #0
    // mul r1, r2
    // str r1, [r4, #0x14]
    // ldr r0, [r4, #0x1c]
    // lsl r1, r0, #2
    // ldr r0, _021FC888 ; =ov01_02208D7C
    // ldr r0, [r0, r1]
    // str r0, [r4, #0x18]
    // add r0, r4, #0
    // bl ov01_021FCCB0
    // ldr r1, [r4, #0x18]
    // add r0, r1, r0
    // str r0, [r4, #0x18]
    // mov r0, #4
    // str r0, [r4, #0xc]
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _021FC888: .word ov01_02208D7C
    // TODO: decompile
}


void ov01_021FC88C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x14]
    // add r4, r2, #0
    // sub r0, r0, #1
    // str r0, [r5, #0x14]
    // bl ov01_021FCAE8
    // cmp r0, #1
    // bne _021FC8A8
    // mov r0, #0xa
    // str r0, [r5, #0xc]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x14]
    // cmp r0, #0
    // ble _021FC8B2
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // mov r1, #2
    // bl sub_0205F328
    // add r0, r5, #0
    // bl ov01_021FCC2C
    // cmp r0, #0
    // beq _021FC8D4
    // ldr r0, [r5, #0x20]
    // bl FollowMon_GetMapObject
    // mov r1, #0
    // mov r2, #1
    // bl ov01_02200540
    // b _021FC8DE
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // bl ov01_02200540
    // str r0, [r5, #0x24]
    // mov r0, #5
    // str r0, [r5, #0xc]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FC8E8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x18]
    // sub r0, r0, #1
    // str r0, [r4, #0x18]
    // bl ov01_021FCAE8
    // cmp r0, #1
    // bne _021FC902
    // mov r0, #6
    // str r0, [r4, #0xc]
    // mov r0, #1
    // pop {r4, pc}
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // ble _021FC90C
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0xb
    // str r0, [r4, #0xc]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FC914(void) {
    ov01_02200400(*((u32*)(r0 + 0x24)));
    sub_0205F328(r5, 3);
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0xc)) = 7;
}


void ov01_021FC934(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // add r0, r0, #1
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0x24]
    // cmp r0, #0
    // beq _021FC94C
    // bl sub_02068B48
    // mov r0, #0
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #0x10]
    // cmp r0, #0xf
    // ble _021FC962
    // mov r0, #0
    // str r0, [r4, #0x10]
    // mov r0, #8
    // str r0, [r4, #0xc]
    // add r0, r4, #0
    // mov r1, #0x34
    // bl ov01_021FCB90
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FC968(void) {
    ov01_021FCBCC(0, 1, 9);
}


void ov01_021FC980(void) {
    ((u32*)r0)[8] = 1;
    ((u32*)r0)[0xc] = 0xf;
}


u32 ov01_021FC98C(void) {
    sub_0205F328(r2, 0);
    ov01_021FCB90(r4, 0x33);
    *((u32*)(r4 + 0x10)) = 0x10;
    *((u32*)(r4 + 0xc)) = 0xe;
    return 1;
}


u32 ov01_021FC9AC(void) {
    sub_0205F328(r2, 0);
    ov01_021FCB90(r4, 0x32);
    *((u32*)(r4 + 0x10)) = 0x10;
    *((u32*)(r4 + 0xc)) = 0xe;
    Save_GameStats_Get(*((u32*)(*((u32*)(r4 + 0x20)) + 0xc)));
    GameStats_Inc(0x65);
    return 1;
}


void ov01_021FC9DC(void) {
    ((u32*)r0)[0x10] = 0x78;
    ((u32*)r0)[0xc] = 0xd;
}


void ov01_021FC9E8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // add r4, r2, #0
    // sub r0, r0, #1
    // str r0, [r5, #0x10]
    // bl ov01_021FCAE8
    // cmp r0, #1
    // bne _021FCA04
    // mov r0, #0xa
    // str r0, [r5, #0xc]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // beq _021FCA0E
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0205F328
    // add r0, r5, #0
    // mov r1, #0x31
    // bl ov01_021FCB90
    // mov r0, #0x10
    // str r0, [r5, #0x10]
    // mov r0, #0xe
    // str r0, [r5, #0xc]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FCA2C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x10]
    // add r1, r1, #1
    // str r1, [r4, #0x10]
    // cmp r1, #0x10
    // bge _021FCA3E
    // mov r0, #0
    // pop {r4, pc}
    // mov r1, #0x10
    // str r1, [r4, #0x10]
    // bl ov01_021FCBCC
    // cmp r0, #0
    // bne _021FCA4E
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0xf
    // str r0, [r4, #0xc]
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FCA58(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x24]
    // add r5, r1, #0
    // cmp r0, #0
    // beq _021FCA68
    // bl ov01_02200400
    // add r0, r4, #0
    // bl ov01_021FCB4C
    // add r0, r5, #0
    // bl PlayerAvatar_GetState
    // bl PlayerAvatar_GetTransitionBits
    // add r1, r0, #0
    // add r0, r5, #0
    // bl Field_PlayerAvatar_OrrTransitionFlags
    // add r0, r5, #0
    // bl Field_PlayerAvatar_ApplyTransitionFlags
    // mov r0, #0
    // str r0, [r4, #0x10]
    // mov r0, #0x10
    // str r0, [r4, #0xc]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FCA94(void) {
    // ldr r1, [r0, #0x10]
    // add r1, r1, #1
    // str r1, [r0, #0x10]
    // cmp r1, #2
    // ble _021FCAA2
    // mov r1, #0x11
    // str r1, [r0, #0xc]
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021FCAA8(void) {
    sub_02068B48(0, 0, 1);
}


void ov01_021FCAC4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #4
    // add r1, r5, #0
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // bne _021FCAD8
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r5, #0
    // bl memset
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FCAE8(void) {
    // ldr r0, _021FCAF8 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r1, r0
    // bne _021FCAF4
    // mov r0, #0
    // bx lr
    // nop
    // _021FCAF8: .word gSystem
    // TODO: decompile
}


void ov01_021FCAFC(void) {
    // ldr r0, _021FCB10 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _021FCB0A
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _021FCB10: .word gSystem
    // TODO: decompile
}


void ov01_021FCB14(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0x28
    // mov r3, #4
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x48]
    // mov r0, #1
    // lsl r0, r0, #0xa
    // mov r1, #4
    // bl String_New
    // str r0, [r4, #0x2c]
    // mov r0, #1
    // lsl r0, r0, #0xa
    // mov r1, #4
    // bl String_New
    // str r0, [r4, #0x30]
    // mov r0, #8
    // mov r1, #0x40
    // mov r2, #4
    // bl MessageFormat_New_Custom
    // str r0, [r4, #0x34]
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FCB4C(void) {
    MessageFormat_Delete(*((u32*)(r0 + 0x34)));
    String_Delete(*((u32*)(r4 + 0x2c)));
    String_Delete(*((u32*)(r4 + 0x30)));
    DestroyMsgData(*((u32*)(r4 + 0x48)));
}


void ov01_021FCB6C(void) {
    sub_0205B514(*((u32*)(*((u32*)(r0 + 0x20)) + 8)), r0, 3);
    Save_PlayerData_GetOptionsAddr(*((u32*)(r4 + 0xc)));
    sub_0205B564(r5, r0);
}


void ov01_021FCB90(void) {
    ov01_021FCB6C();
    ReadMsgDataIntoString(*((u32*)(r5 + 0x48)), r6, *((u32*)(r5 + 0x30)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x2c)), *((u32*)(r5 + 0x30)));
    Save_PlayerData_GetOptionsAddr(*((u32*)(r4 + 0xc)));
    sub_0205B5B4(r5, *((u32*)(r5 + 0x2c)), r0, 1);
}


void ov01_021FCBCC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x28
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #1
    // bne _021FCBFA
    // bl ov01_021FCAFC
    // cmp r0, #1
    // bne _021FCBFA
    // add r0, r4, #0
    // add r0, #0x38
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // add r4, #0x38
    // add r0, r4, #0
    // bl RemoveWindow
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FCC00(void) {
    // push {r3, lr}
    // cmp r0, #0
    // beq _021FCC12
    // cmp r0, #1
    // beq _021FCC16
    // cmp r0, #2
    // beq _021FCC1A
    // bl GF_AssertFail
    // ldr r0, _021FCC20 ; =0x000001BD
    // pop {r3, pc}
    // ldr r0, _021FCC24 ; =0x000001BE
    // pop {r3, pc}
    // ldr r0, _021FCC28 ; =0x000001BF
    // pop {r3, pc}
    // nop
    // _021FCC20: .word 0x000001BD
    // _021FCC24: .word 0x000001BE
    // _021FCC28: .word 0x000001BF
    // TODO: decompile
}


void ov01_021FCC2C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x20]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetState
    // cmp r0, #2
    // bne _021FCC40
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0x20]
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _021FCC6E
    // ldr r0, [r4, #0x20]
    // ldr r0, [r0, #0xc]
    // bl SaveArray_Party_Get
    // bl GetFirstAliveMonInParty_CrashIfNone
    // mov r1, #9
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl ov01_021FCC74
    // cmp r0, #0
    // beq _021FCC6E
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FCC74(void) {
    // push {r4, lr}
    // cmp r0, #0x63
    // bhi _021FCC7E
    // mov r0, #0
    // pop {r4, pc}
    // cmp r0, #0x95
    // bhi _021FCC86
    // mov r4, #0x14
    // b _021FCC98
    // cmp r0, #0xc7
    // bhi _021FCC8E
    // mov r4, #0x1e
    // b _021FCC98
    // cmp r0, #0xf9
    // bhi _021FCC96
    // mov r4, #0x28
    // b _021FCC98
    // mov r4, #0x32
    // bl LCRandom
    // mov r1, #0x64
    // bl _s32_div_f
    // cmp r1, r4
    // bge _021FCCAA
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FCCB0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x20]
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _021FCD24
    // mov r0, #0x42
    // ldr r1, [r4, #0x20]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl FieldSystem_UnkSub108_GetMonMood
    // mov r1, #9
    // mvn r1, r1
    // cmp r0, r1
    // bgt _021FCCD6
    // mov r3, #0
    // b _021FCCFE
    // add r1, r1, #1
    // cmp r0, r1
    // blt _021FCCE4
    // cmp r0, #9
    // bgt _021FCCE4
    // mov r3, #1
    // b _021FCCFE
    // cmp r0, #0xa
    // blt _021FCCF0
    // cmp r0, #0x32
    // bge _021FCCF0
    // mov r3, #2
    // b _021FCCFE
    // cmp r0, #0x32
    // blt _021FCCFC
    // cmp r0, #0x64
    // bge _021FCCFC
    // mov r3, #3
    // b _021FCCFE
    // mov r3, #4
    // ldr r0, [r4, #0x1c]
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // cmp r1, #2
    // bls _021FCD10
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0xc
    // add r2, r3, #0
    // mul r2, r0
    // ldr r0, _021FCD28 ; =ov01_02208D88
    // lsl r1, r1, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _021FCD28: .word ov01_02208D88
    // TODO: decompile
}

