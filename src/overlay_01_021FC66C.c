/* Decompiled from asm/overlay_01_021FC66C.s */
#include "global.h"

void CreateFishingRodTaskEnv(void) {
    Heap_AllocAtEnd(r1, 0x18);
    // strb r0, [r2]
    *((u32*)(r0 + 0xc)) = r5;
    ov01_021FCC00(r5, (0x18 - 1), (r0 + 1));
    *((u32*)(r4 + 4)) = r0;
}



void Task_OverworldFish(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r6);
    MapObjectManager_PauseAllMovement(*((u32*)(r4 + 0x3c)));
    *((u32*)(r5 + 0x10)) = 0;
    // add r2, #0x10
    FieldSystem_PerformFishEncounterCheck(r4, *((u32*)(r5 + 0xc)), r5);
    *((u32*)(r5 + 8)) = r0;
    ov01_021FC748(r4, *((u32*)(r5 + 0xc)), *((u32*)(r5 + 8)));
    *((u32*)(r5 + 0x14)) = r0;
    // str r0, [r5]
    ov01_021FC76C(*((u32*)(r5 + 0x14)));
    ov01_021FC778(*((u32*)(r5 + 0x14)));
    ov01_021FC784(*((u32*)(r5 + 0x14)));
    FieldSystem_GetGearPhoneRingManager(r4);
    GearPhoneRingManager_ResetIfActive();
    Save_GameStats_Get(*((u32*)(r4 + 0xc)));
    GameStats_Inc(0xb);
    FieldSystem_StartForcedWildBattle(r4, r6, *((u32*)(r5 + 0x10)));
    Heap_Free(r5);
    BattleSetup_Delete(*((u32*)(r5 + 0x10)));
    MapObjectManager_UnpauseAllMovement(*((u32*)(r4 + 0x3c)));
    Heap_Free(r5);
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
}



void ov01_021FC778(void) {
}



void ov01_021FC784(void) {
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
}



void ov01_021FC7DC(void) {
    MapObject_AreBitsSetForMovementScriptInit(r2);
    MapObject_ClearHeldMovementIfActive(r6);
    Field_PlayerAvatar_OrrTransitionFlags(r4, 0x20);
    Field_PlayerAvatar_ApplyTransitionFlags(r4);
    sub_0205F328(r6, 1);
    *((u32*)(r5 + 0xc)) = 2;
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
    *((u32*)(r0 + 0x14)) = (*((u32*)(r0 + 0x14)) - 1);
    ov01_021FCAE8((*((u32*)(r0 + 0x14)) - 1));
    *((u32*)(r5 + 0xc)) = 0xa;
    sub_0205F328(r4, 2);
    ov01_021FCC2C(r5);
    FollowMon_GetMapObject(*((u32*)(r5 + 0x20)));
    ov01_02200540(0, 1);
    ov01_02200540(r4, 0, 1);
    *((u32*)(r5 + 0x24)) = r0;
    *((u32*)(r5 + 0xc)) = 5;
}



void ov01_021FC8E8(void) {
    *((u32*)(r0 + 0x18)) = (*((u32*)(r0 + 0x18)) - 1);
    ov01_021FCAE8((*((u32*)(r0 + 0x18)) - 1));
    *((u32*)(r4 + 0xc)) = 6;
    *((u32*)(r4 + 0xc)) = 0xb;
}



void ov01_021FC914(void) {
}



void ov01_021FC934(void) {
    *((u32*)(r0 + 0x10)) = (*((u32*)(r0 + 0x10)) + 1);
    sub_02068B48(*((u32*)(r0 + 0x24)));
    *((u32*)(r4 + 0x24)) = 0;
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0xc)) = 8;
    ov01_021FCB90(r4, 0x34);
}



void ov01_021FC968(void) {
}



void ov01_021FC980(void) {
}



u32 ov01_021FC98C(void) {
}



u32 ov01_021FC9AC(void) {
}



void ov01_021FC9DC(void) {
}



void ov01_021FC9E8(void) {
    *((u32*)(r0 + 0x10)) = (*((u32*)(r0 + 0x10)) - 1);
    ov01_021FCAE8((*((u32*)(r0 + 0x10)) - 1));
    *((u32*)(r5 + 0xc)) = 0xa;
    sub_0205F328(r4, 0);
    ov01_021FCB90(r5, 0x31);
    *((u32*)(r5 + 0x10)) = 0x10;
    *((u32*)(r5 + 0xc)) = 0xe;
}



void ov01_021FCA2C(void) {
    *((u32*)(r0 + 0x10)) = (*((u32*)(r0 + 0x10)) + 1);
    *((u32*)(r0 + 0x10)) = 0x10;
    ov01_021FCBCC(0, 0x10);
    *((u32*)(r4 + 0xc)) = 0xf;
}



void ov01_021FCA58(void) {
    ov01_02200400(*((u32*)(r0 + 0x24)));
    ov01_021FCB4C(r4);
    PlayerAvatar_GetState(r5);
    PlayerAvatar_GetTransitionBits();
    Field_PlayerAvatar_OrrTransitionFlags(r5, r0);
    Field_PlayerAvatar_ApplyTransitionFlags(r5);
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0xc)) = 0x10;
}



void ov01_021FCA94(void) {
    *((u32*)(r0 + 0x10)) = (*((u32*)(r0 + 0x10)) + 1);
    *((u32*)(r0 + 0xc)) = 0x11;
}



void ov01_021FCAA8(void) {
}



void ov01_021FCAC4(void) {
    Heap_AllocAtEnd(4, r0);
    GF_AssertFail();
    memset(r4, 0, r5);
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
    NewMsgDataFromNarc(1, 0x1b, 0x28, 4);
    *((u32*)(r4 + 0x48)) = r0;
    String_New((1 << 0xa), 4);
    *((u32*)(r4 + 0x2c)) = r0;
    String_New((1 << 0xa), 4);
    *((u32*)(r4 + 0x30)) = r0;
    MessageFormat_New_Custom(8, 0x40, 4);
    *((u32*)(r4 + 0x34)) = r0;
}



void ov01_021FCB4C(void) {
}



void ov01_021FCB6C(void) {
}



void ov01_021FCB90(void) {
}



void ov01_021FCBCC(void) {
    // add r0, #0x28
    // ldrb r0, [r0]
    IsPrintFinished();
    ov01_021FCAFC();
    // add r0, #0x38
    ClearFrameAndWindow2(r4, 0);
    // add r4, #0x38
    RemoveWindow(r4);
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
    PlayerAvatar_GetState(*((u32*)(*((u32*)(r0 + 0x20)) + 0x40)));
    FollowMon_IsActive(*((u32*)(r4 + 0x20)));
    SaveArray_Party_Get(*((u32*)(*((u32*)(r4 + 0x20)) + 0xc)));
    GetFirstAliveMonInParty_CrashIfNone();
    GetMonData(9, 0);
    ov01_021FCC74(((r0 << 0x18) >> 0x18));
}



void ov01_021FCC74(void) {
    LCRandom(0);
    _s32_div_f(0x64);
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


