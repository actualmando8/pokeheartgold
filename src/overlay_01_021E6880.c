/* Decompiled from asm/overlay_01_021E6880.s */
#include "global.h"

void ov01_021E6880(void) {
    // strh r2, [r0]
    // strh r2, [r0]
    // strh r2, [r0]
    // strh r2, [r0]
    // strh r2, [r0]
    // strh r2, [r0]
    // strh r2, [r0]
    // and r1, r2
    // strh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    // and r2, r1
    // strh r2, [r0]
    *((u8*)(r0 + 4)) = 0xff;
    // asr r1, r1, #0xe
    *((u8*)(r0 + 5)) = 0xFFFFDFFF;
}




void ov01_021E690C(void) {
}




void ov01_021E6920(void) {
}




void FieldInput_Update(void) {
    // str r2, [sp]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // tst r0, r1
    // add r0, #0xd0
    // strh r0, [r5]
    // add r0, #0xd0
    // strh r1, [r0]
    // strh r0, [r5]
    // add r0, #0xd0
    // strh r1, [r0]
    // strh r0, [r5]
    // add r0, #0xd0
    // strh r1, [r0]
    // ldr r1, [sp]
    // tst r1, r2
    // add r0, r4, r0
    // strh r0, [r5]
    // strh r0, [r5]
    // ldr r0, [sp, #4]
    // strh r0, [r5]
    // add r0, #0xd0
    // add r0, #0xd0
    // strh r1, [r0]
    // ldr r0, [sp]
    // tst r0, r1
    // strh r0, [r5]
    // tst r0, r6
    // strh r0, [r5]
    // strh r0, [r5]
    // strh r0, [r5]
    // add r0, #0xd0
    // strh r1, [r0]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // strh r0, [r5]
    // ldr r0, [sp, #0xc]
    // strh r0, [r5]
    // tst r0, r6
    // tst r0, r6
    // tst r0, r6
    // tst r0, r6
    // mvn r0, r0
    // ldr r1, [sp]
}




int FieldInput_Process(void) {
    TryStartMapScriptByType(r1, 1);
    SaveArray_Party_Get(*((u32*)(r4 + 0xc)));
    HasEnoughAlivePokemonForDoubleBattle();
    Save_VarsFlags_Get(*((u32*)(r4 + 0xc)));
    Save_VarsFlags_CheckHaveFollower();
    TryGetSeenByNpcTrainers(r4, 1);
    sub_0205CF44(*((u32*)(r4 + 0x40)));
    MapObjectManager_PauseAllMovement(*((u32*)(r4 + 0x3c)));
    FollowMon_IsActive(r4);
    FollowMon_GetMapObject(r4);
    MapObject_UnpauseMovement();
    Save_VarsFlags_Get(*((u32*)(r4 + 0xc)));
    ClearFlag965();
    ov01_021E7628(r4);
    BugContestTimeoutCheck(r4);
    sub_0205DD94(*((u32*)(r4 + 0x40)), *((u16*)(r5 + 6)), *((u16*)(r5 + 8)));
    Save_VarsFlags_Get(*((u32*)(r4 + 0xc)));
    StrengthFlagAction(2);
    SaveArray_Party_Get(*((u32*)(r4 + 0xc)));
    // mov r1, #MOVE_WATERFALL
    GetIdxOfFirstPartyMonWithMove();
    ov01_021F1D94(r4, *((u32*)(r4 + 0x40)), r7, (r6 | 2));
    ov01_021E7114(r4);
    ov01_021E6DC4(r4);
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)));
    ov01_021E6DC4(r4, *((u8*)(r5 + 4)));
    // add r1, sp, #0
    sub_0203DC64(r4);
    sub_0205CF60(*((u32*)(r4 + 0x40)));
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)));
    sub_0205CFBC(*((u32*)(r4 + 0x40)), r0);
    // ldr r0, [sp]
    MapObject_GetType();
    // ldr r5, [sp]
    MapObject_GetScriptID(r5);
    StartMapSceneScript(r4, ((r0 << 0x10) >> 0x10), r5);
    // ldr r2, [sp]
    StartMapSceneScript(r4, 0);
    // add r4, #0xd0
    // strh r0, [r4]
    Field_GetBgEvents(r4);
    Field_GetNumBgEvents(r4);
    GetInteractedBackgroundEventScript(r4, r6, r0);
    StartMapSceneScript(r4, ((r0 << 0x10) >> 0x10), 0);
    // add r4, #0xd0
    // strh r0, [r4]
    ov01_021E7B54(r4);
    GetInteractedMetatileScript(r4, r0);
    StartMapSceneScript(r4, ((r0 << 0x10) >> 0x10), 0);
    // add r4, #0xd0
    // strh r0, [r4]
    ov01_021E7F38(r4);
    StartMapSceneScript(r4, ((r0 << 0x10) >> 0x10), 0);
    // add r4, #0xd0
    // strh r0, [r4]
    ov01_021E7198(r4, r5);
    ov01_021E7C70(r4);
    UseRegisteredItemButtonInField(r4, ((*((u16*)r5) << 0x1b) >> 0x1e));
    ov01_021E6920(r4, ((*((u16*)r5) << 0x1b) >> 0x1e));
    FieldSystem_MapIsNotMysteryZone(r4);
    PlaySE(SEQ_SE_DP_WIN_OPEN);
    StartMenu_Init(r4);
    ov02_02252334(r4);
    // mov r1, #std_revert_shaymin>>4
    StartMapSceneScript(r4, (r1 << 4), 0);
    ov01_021F6A9C(r4, 0, 0);
    FieldSystem_GetGearPhoneRingManager(r4);
    ov02_02251F20();
}




void ov01_021E6DC4(void) {
    Field_GetBgEvents();
    Field_GetNumBgEvents(r4);
    sub_0203DDA4(r4, r5, r0);
    StartMapSceneScript(r4, ((r0 << 0x10) >> 0x10), 0);
}




BOOL FieldInput_Process_Colosseum(void) {
    // ldrsb r0, [r4, r0]
    ov01_021E7B38(r1);
    sub_0205B73C();
    StartMapSceneScript(r5, std_colosseum_exit, 0);
    sub_02037958(1);
    sub_0203769C();
    sub_02057F18();
    sub_02058740();
    // add r1, sp, #0
    sub_0203DC64(r5);
    // ldr r0, [sp]
    MapObject_GetMovement();
    sub_0205CF60(*((u32*)(r5 + 0x40)));
    PlayerAvatar_GetFacingDirection(*((u32*)(r5 + 0x40)));
    sub_0205CFBC(*((u32*)(r5 + 0x40)), r0);
    // ldr r4, [sp]
    MapObject_GetScriptID(r4);
    StartMapSceneScript(r5, ((r0 << 0x10) >> 0x10), r4);
    sub_02059D44(r5, ((*((u16*)r4) << 0x1f) >> 0x1f));
    PlaySE(SEQ_SE_DP_WIN_OPEN);
    sub_0203BD20(r5);
}




void ov01_021E6ED8(void) {
}




BOOL FieldInput_Process_UnionRoom(void) {
    sub_02033250();
    // tst r0, r1
    ov01_021E6ED8(0xfe);
    sub_02037454();
    StartMapSceneScript(r5, 5, 0);
    // add r1, sp, #0
    sub_0203DC64(r5);
    sub_0205CF60(*((u32*)(r5 + 0x40)));
    PlayerAvatar_GetFacingDirection(*((u32*)(r5 + 0x40)));
    sub_0205CFBC(*((u32*)(r5 + 0x40)), r0);
    sub_020380B0();
    // ldr r4, [sp]
    MapObject_GetScriptID(r4);
    StartMapSceneScript(r5, ((r0 << 0x10) >> 0x10), r4);
    ov01_021E7B38(r5);
    sub_0205BA18();
    sub_02053F14(r5);
    sub_02037454(((*((u16*)r4) << 0x1d) >> 0x1f));
    ov01_021E690C(r5);
    PlaySE(SEQ_SE_DP_WIN_OPEN);
    sub_0203BCDC(r5);
    sub_0205A904(4);
    sub_020380CC();
}




BOOL FieldInput_Process_BattleTower(void) {
    TryStartMapScriptByType(r1, 1);
    // add r1, sp, #0
    sub_0203DC64(r4);
    sub_0205CF60(*((u32*)(r4 + 0x40)));
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)));
    sub_0205CFBC(*((u32*)(r4 + 0x40)), r0);
    // ldr r0, [sp]
    MapObject_GetType();
    // ldr r5, [sp]
    MapObject_GetScriptID(r5);
    StartMapSceneScript(r4, ((r0 << 0x10) >> 0x10), r5);
    // ldr r2, [sp]
    StartMapSceneScript(r4, 0);
    Field_GetBgEvents(r4);
    Field_GetNumBgEvents(r4);
    GetInteractedBackgroundEventScript(r4, r6, r0);
    StartMapSceneScript(r4, ((r0 << 0x10) >> 0x10), 0);
    ov01_021E7B54(r4);
    GetInteractedMetatileScript(r4, r0);
    StartMapSceneScript(r4, ((r0 << 0x10) >> 0x10), 0);
    ov01_021E7198(r4, r5);
    UseRegisteredItemButtonInField(r4, ((*((u16*)r5) << 0x1b) >> 0x1e));
    ov01_021E6920(r4, ((*((u16*)r5) << 0x1b) >> 0x1e));
    PlaySE(SEQ_SE_DP_WIN_OPEN);
    StartMenu_Init(r4);
}




void ov01_021E7114(void) {
    // add r0, #0x7e
    // add r0, #0x7e
    // add r0, #0x7e
    // strh r1, [r0]
    // add r1, sp, #4
    // add r2, sp, #0
    PlayerAvatar_GetStandingTileCoords(r0, (*((u16*)r0) + 1));
    Save_VarsFlags_Get(*((u32*)(r4 + 0xc)));
    Save_VarsFlags_CheckPalParkSysFlag();
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    CatchingShow_CheckWildEncounter(r4);
    CatchingShow_GetBattleDataTransfer(r4);
    sub_020511F8(r4, r0);
    MapHeader_HasWildEncounters(*((u32*)*((u32*)(r4 + 0x20))));
    FieldSystem_PerformLandOrSurfEncounterCheck(r4);
}




void ov01_021E7198(void) {
    // ldrsb r2, [r5, r1]
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // ldrsb r0, [r5, r0]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x14
    // str r3, [sp]
    // ldrsb r0, [r5, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // ldrsb r0, [r5, r0]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x14
    // str r3, [sp]
    // ldrsb r0, [r5, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x14
    // ldrsb r1, [r5, r0]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // str r3, [sp]
    // ldrsb r0, [r5, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // add r1, sp, #0x10
    // add r2, sp, #0xc
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // ldrsb r0, [r5, r0]
    // ldrsb r0, [r5, r0]
    // ldrsb r0, [r5, r0]
    // ldrsb r0, [r5, r0]
    // ldrsb r0, [r5, r0]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // add r3, sp, #0x14
    // str r3, [sp]
    // ldrsb r0, [r5, r0]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // str r3, [sp]
    // ldrsb r0, [r5, r0]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
}




void GetInteractedMetatileScript(void) {
    PlayerAvatar_GetFacingDirection(*((u32*)(r0 + 0x40)));
    PlayerAvatar_GetXCoord(*((u32*)(r5 + 0x40)));
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    GetMetatileBehavior(r5, r7, r0);
    sub_0205B78C(((r0 << 0x18) >> 0x18));
    sub_0205B7E0(r4);
    sub_0205B84C(r4);
    sub_0205B858(r4);
    sub_0205B864(r4);
    sub_0205B870(r4);
    sub_0205B87C(r4);
    sub_0205B888(r4);
    sub_0205B894(r4);
    sub_0205B8A0(r4);
    MetatileBehavior_IsTownMap(r4);
    sub_0205B9AC(r4);
    MetatileBehavior_IsHeadbutt(r4);
    MetatileBehavior_IsRockClimbInDirection(r4, r6);
    PlayerAvatar_GetState(*((u32*)(r5 + 0x40)));
    Save_PlayerData_GetProfile(*((u32*)(r5 + 0xc)));
    Field_PlayerCanSurfOnTile(*((u32*)(r5 + 0x40)), r7, r4);
    PlayerProfile_TestBadgeFlag(r6, 3);
    SaveArray_Party_Get(*((u32*)(r5 + 0xc)));
    // mov r1, #MOVE_SURF
    GetIdxOfFirstPartyMonWithMove();
    ov02_0224E35C(r5);
    ov01_021E7B70(r5);
    ov02_0224E4CC(r4, r0);
    MetatileBehavior_IsWaterfall(r4);
    MetatileBehavior_IsWhirlpool(r4);
    ov02_0224E35C(r5);
    ov01_021E7B70(r5);
    ov02_0224E4DC(r4, r0);
    Save_VarsFlags_Get(*((u32*)(r5 + 0xc)));
    Save_VarsFlags_CheckSafariSysFlag();
    Save_SafariZone_Get(*((u32*)(r5 + 0xc)));
    sub_0202F620();
    sub_0205BAEC(r4);
}




void ov01_021E7628(void) {
    // ldr r0, [r5, r0]
}




void ov01_021E774C(void) {
    Field_GetCoordEvents();
    Field_GetNumCoordEvents(r4);
    sub_0203DE04(r4, r5, r0);
    StartMapSceneScript(r4, r0, 0);
}




void ov01_021E7784(void) {
    // add r3, sp, #0xc
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
}




void ov01_021E788C(void) {
    SaveArray_Party_Get(*((u32*)(r0 + 0xc)));
    Save_Daycare_Get(*((u32*)(r4 + 0xc)));
    HandleDaycareStep(r5, r4);
    Save_GameStats_Get(*((u32*)(r4 + 0xc)));
    GameStats_Inc(0xc);
    GameStats_AddScore(r5, 0xf);
    StartMapSceneScript(r4, std_hatch_egg, 0);
}




void ov01_021E78D8(void) {
}




void ov01_021E78E4(void) {
}




void ov01_021E790C(void) {
}




void ov01_021E794C(void) {
    SaveArray_Party_Get(*((u32*)(r0 + 0xc)));
    Save_LocalFieldData_Get(*((u32*)(r5 + 0xc)));
    LocalFieldData_GetPoisonStepCounter();
    // strh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    MapHeader_GetMapSec(*((u32*)*((u32*)(r5 + 0x20))), 3, *((u16*)r0));
    ApplyPoisonStep(r4, ((r0 << 0x10) >> 0x10));
    ov01_021FB630(*((u32*)(*((u32*)(r5 + 4)) + 0x20)));
    ov01_021FB630(*((u32*)(*((u32*)(r5 + 4)) + 0x20)));
    StartMapSceneScript(r5, std_survive_poisoning, 0);
}




void SafariBallsOutCheck(void) {
    Save_VarsFlags_Get(*((u32*)(r0 + 0xc)));
    Save_VarsFlags_CheckSafariSysFlag();
    Save_LocalFieldData_Get(*((u32*)(r4 + 0xc)));
    LocalFieldData_GetSafariBallsCounter();
    StartMapSceneScript(r4, std_safari_balls_out, 0);
}




void ov01_021E7A08(void) {
    SaveData_GetPhoneCallPersistentState(*((u32*)(r0 + 0xc)));
    Save_VarsFlags_Get(*((u32*)(r4 + 0xc)));
    Save_VarsFlags_CheckFlagInArray(FLAG_SYS_GOT_BIKE_SHOP_CALL);
    PhoneCallPersistentState_CheckCallTriggerFlag(r5, 2);
    Save_GameStats_Get(*((u32*)(r4 + 0xc)));
    GameStats_GetCapped(1);
    FieldSystem_GetGearPhoneRingManager(r4, (1 << 0xa));
    // mov r1, #CALL_TRIGGER_BIKE_SHOP_STEPS
    sub_02092E14(1);
}




void BugContestTimeoutCheck(void) {
    FieldSystem_BugContest_Get();
    Save_VarsFlags_Get(*((u32*)(r4 + 0xc)));
    Save_VarsFlags_CheckBugContestFlag();
    StartMapSceneScript(r4, std_bug_contest_time_up, 0);
}




void ov01_021E7A98(void) {
}




void PlayerAvatar_GetStandingTileCoords(void) {
}




void PlayerAvatar_GetFacingTileCoords(void) {
}




void ShiftFieldCoordsByCompassDirection(void) {
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
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
}




void ov01_021E7B54(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
}




void ov01_021E7B70(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
}




void ov01_021E7B90(void) {
    // str r2, [sp]
    Field_GetWarpEventAtXYPos();
    // mvn r0, r0
    Field_GetWarpEventI(r4, r0);
    GF_AssertFail(0x00000FFF, *((u16*)(0 + 4)), *((u16*)(0 + 6)));
    Save_LocalFieldData_Get(*((u32*)(r4 + 0xc)));
    LocalFieldData_GetDynamicWarp();
    // ldmia r2!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // str r0, [r5]
    *((u32*)(r5 + 4)) = r3;
    *((u32*)(r5 + 8)) = *((u16*)*((u32*)r0));
    *((u32*)(r5 + 0xc)) = *((u16*)(*((u32*)r0) + 2));
    *((u32*)(r5 + 0x10)) = 1;
    Save_LocalFieldData_Get(*((u32*)(r4 + 0xc)), *((u16*)*((u32*)r0)), *((u16*)(*((u32*)r0) + 2)));
    LocalFieldData_GetEntrancePosition();
    PlayerAvatar_GetFacingDirection(*((u32*)(r4 + 0x40)));
    // str r1, [r5]
    *((u32*)(r5 + 4)) = r6;
    // ldr r1, [sp]
    *((u32*)(r5 + 8)) = r7;
    *((u32*)(r5 + 0xc)) = *((u32*)*((u32*)(r4 + 0x20)));
    *((u32*)(r5 + 0x10)) = r0;
}




void ov01_021E7C28(void) {
    // str r2, [sp]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp]
    // str r0, [r6]
    // mvn r0, r0
}




void ov01_021E7C70(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r3, sp, #8
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r3, sp, #8
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
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
    Save_VarsFlags_Get(*((u32*)(r0 + 0xc)));
    // add r0, r4, r0
    Save_LocalFieldData_Get(*((u32*)(r5 + 0xc)), (*((u8*)((r7 << 3) + 4)) << 2));
    LocalFieldData_GetCurrentPosition();
    CheckDisabledCianwoodWaterfall(r6);
    CheckSolvedLtSurgeGym(r6, *((u32*)r5));
    CheckBattledSnorlax(r6);
    CheckBattledRedGyarados(r6);
}




void ov01_021E7DFC(void) {
    sub_02054874();
    // add r0, #0xc4
    // mvn r1, r1
    // add r0, #0xc4
    // str r1, [r0]
    // add r0, #0xc4
    // str r1, [r0]
    ov01_021E7D00(r0, r4, r7);
    // mvn r1, r1
    ov01_021E7D58(r5, r6, r0);
    // str r0, [sp]
    // add r2, #0xc4
    sub_02006088(*((u16*)(ov01_022063BC + (*((u8*)((r6 + 4) + (r7 << 3))) << 2))), *((u16*)(ov01_022063BC + (*((u8*)((r6 + 4) + (r7 << 3))) << 2))), ov01_022063BC);
    PlaySE();
    // ldr r0, [sp]
    // add r5, #0xc4
    // str r0, [r5]
    GF_SndHandleMoveVolume(0, *((u8*)(ov01_02206388 + *((u8*)((r6 + 5) + r4)))), 0xf);
    // ldr r1, [sp]
    // add r3, r2, r1
    // add r1, r1, r3
    GF_SndHandleMoveVolume(5, *((u8*)(*((u8*)(r5 + r4)) + ov01_0220638C)), 5);
    GF_AssertFail();
    // add r0, #0xc4
    StopSE(((*((u32*)r5) << 0x10) >> 0x10), 0xa);
    GF_SndHandleMoveVolume(0, 0x80, 0xf);
    // mvn r0, r0
    // add r5, #0xc4
    // str r0, [r5]
}




void ov01_021E7F00(void) {
    // add r0, #0xac
    // mvn r1, r1
    // add r0, #0xc4
    // str r1, [r0]
}




void ov01_021E7F38(void) {
}




void ov01_021E7F54(void) {
    // add r1, sp, #0
    sub_0203DC64();
    // ldr r0, [sp]
    MapObject_GetType();
    Field_GetBgEvents(r5);
    Field_GetNumBgEvents(r5);
    GetInteractedBackgroundEventScript(r5, r4, r0);
}




void FieldSystem_FacingModelIsHeadbuttTree(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
}



