/* Decompiled from asm/overlay_01_021F1AFC.s */
#include "global.h"

void Field_PlayerAvatar_OrrTransitionFlags(void) {
}




void Field_PlayerAvatar_ApplyTransitionFlags(void) {
    PlayerAvatar_GetTransitionFlags();
    // tst r0, r4
    // blx r1
    PlayerAvatar_SetTransitionFlags(r7, 0);
}




void ov01_021F1B38(void) {
}




void ov01_021F1B78(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(1, r0);
    ov01_021F3084(r4, r0);
    PlayerAvatar_SetState(r4, 1);
    PlayerAvatar_ClearUnk24ClearFlag2(r4);
    PlayerAvatar_GetUnk34(r4);
    ov01_021F1640();
    PlayerAvatar_SetUnk34(r4, 0);
    PlaySE(SEQ_SE_DP_JITENSYA);
}




void ov01_021F1BC0(void) {
    // str r0, [sp]
}




void ov01_021F1C30(void) {
}




void ov01_021F1C70(void) {
}




void ov01_021F1C7C(void) {
}




void ov01_021F1C98(void) {
}




void ov01_021F1CB4(void) {
}




void ov01_021F1CD0(void) {
}




void ov01_021F1CEC(void) {
}




void ov01_021F1D08(void) {
}




void ov01_021F1D24(void) {
}




void ov01_021F1D40(void) {
}




void ov01_021F1D5C(void) {
}




void ov01_021F1D78(void) {
}




void ov01_021F1D94(void) {
    // mvn r0, r0
}




void ov01_021F1DF4(void) {
    // str r0, [sp]
    // tst r0, r6
    // ldr r3, [sp]
    // tst r0, r6
    // ldr r3, [sp]
    // ldr r3, [sp]
}




void ov01_021F1E54(void) {
    // bic r0, r1
}




void ov01_021F1EA4(void) {
    ov01_021F30D0(0x14);
    *((u32*)(r0 + 4)) = r5;
    *((u32*)(r0 + 8)) = r4;
    *((u32*)(r0 + 0x10)) = r7;
    *((u32*)(r0 + 0xc)) = r6;
    FieldSystem_CreateTask(r4, ov01_021F1ECC, r0);
}




void ov01_021F1ECC(void) {
    TaskManager_GetEnvironment();
    PlayerAvatar_GetMapObject(*((u32*)(r0 + 0xc)));
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)(r4 + 0x10)));
    MapObject_AreBitsSetForMovementScriptInit(r6);
    sub_0205DE38(*((u32*)(r4 + 0xc)));
    sub_0206234C(*((u32*)(r4 + 4)), 8);
    MapObject_SetHeldMovement(r5, r0);
    sub_0206234C(*((u32*)(r4 + 4)), 0x20);
    MapObject_SetHeldMovement(r6, r0);
    PlaySE(SEQ_SE_DP_UG_023);
    // str r0, [r4]
    MapObject_IsMovementPaused(r5);
    MapObject_IsMovementPaused(r6);
    MapObject_ClearHeldMovementIfActive(r5);
    MapObject_ClearHeldMovementIfActive(r6);
    // str r0, [r4]
    ov01_021F30F4(r4);
    ov01_021F2004(r7, r6, r5);
}




void ov01_021F1F8C(void) {
    MapObject_GetMapID(r1);
    MapObject_GetID(r5, *((u16*)r4));
    MapObject_GetXCoord(r5, *((u16*)(r4 + 6)));
    MapObject_GetZCoord(r5, *((u16*)(r4 + 2)));
    MapObject_GetEventFlag(r5, *((u16*)(r4 + 4)));
    FieldSystem_FlagSet(r7, ((r0 << 0x10) >> 0x10));
    MapObject_Delete(r5);
    // add r1, r1, r2
    FieldSystem_FlagClear(r7, *((u16*)(ov01_02206A14 + 8)), (r6 * 0xa));
    // add r4, #0xa
}




void ov01_021F2004(void) {
    ov01_021F1F8C(r1, r2);
    StartScriptFromMenu(r4, 0x0000271F, 0);
}




void ov01_021F202C(void) {
    ov01_021F30D0(0x2c);
    *((u32*)(r0 + 4)) = r7;
    *((u32*)(r0 + 0x1c)) = r6;
    *((u32*)(r0 + 0x20)) = *((u32*)(r6 + 0x40));
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    *((u32*)(r4 + 0x24)) = r0;
    // add r2, #0xc
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    TaskManager_Call(*((u32*)(r6 + 0x10)), ov01_021F2118, r4);
}




void CallFieldTask_Surf(void) {
    // add r2, sp, #0
    // str r0, [sp]
    // str r0, [sp]
    // add r2, sp, #0
}




void Field_PlayerCanSurfOnTile(void) {
}




void ov01_021F2118(void) {
    TaskManager_GetEnvironment();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F2134: ; jump table
    Save_VarsFlags_Get(*((u32*)(*((u32*)(r0 + 0x1c)) + 0xc)));
    CheckFlag99A();
    SndRadio_GetSeqNo();
    FieldBGM_SetOverride(*((u32*)(r4 + 0x1c)), 0);
    FieldBGM_TryFadeOut(*((u32*)(r4 + 0x1c)), 0x000003F6, 1);
    // str r0, [r4]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r4]
    // add r1, #0xc
    ov01_021F3054(*((u32*)(r4 + 0x1c)), r4);
    // str r0, [r4]
    ov02_02250780(5, 0xb);
    FieldSystem_UnkSub108_AddMonMood(*((u32*)(*((u32*)(r4 + 0x1c)) + (0x42 << 2))), 1);
    ov02_022507B4(*((u32*)(r4 + 0x1c)), 1);
    // str r0, [r4]
    GetMonData(*((u32*)(r4 + 0x14)), 5, 0);
    GetMonData(*((u32*)(r4 + 0x14)), 0x70, 0);
    PlayCry(((r5 << 0x10) >> 0x10), ((r0 << 0x18) >> 0x18));
    // str r0, [r4]
    IsCryFinished(4);
    ov01_02205EE0(r5);
    // str r0, [r4]
    // add r0, #0xc
    ov01_021F3068(r4);
    ov01_02205D68(*((u32*)(r4 + 0x1c)));
    // str r0, [r4]
    PlayerAvatar_GetXCoord(*((u32*)(r4 + 0x20)));
    GetDeltaXByFacingDirection(*((u32*)(r4 + 4)));
    PlayerAvatar_GetZCoord(*((u32*)(r4 + 0x20)));
    GetDeltaYByFacingDirection(*((u32*)(r4 + 4)));
    // str r0, [sp]
    // add r1, r5, r6
    // add r2, r7, r2
    ov01_021FE7DC(*((u32*)(r4 + 0x24)), r0, *((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x28)) = r0;
    PlayerAvatar_SetUnk34(*((u32*)(r4 + 0x20)), *((u32*)(r4 + 0x28)));
    PlayerAvatar_SetState(*((u32*)(r4 + 0x20)), 2);
    // str r0, [r4]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    PlayerAvatar_GetGender(*((u32*)(r4 + 0x20)));
    PlayerAvatar_GetSpriteByStateAndGender(0, r0);
    ov01_021F3084(*((u32*)(r4 + 0x20)), r0);
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r4]
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)(r4 + 0x24)));
    sub_0206234C(*((u32*)(r4 + 4)), 0x34);
    MapObject_SetHeldMovement(*((u32*)(r4 + 0x24)), r0);
    // str r0, [r4]
    MapObject_IsMovementPaused(*((u32*)(r4 + 0x24)));
    MapObject_ClearHeldMovementIfActive(*((u32*)(r4 + 0x24)));
    ov01_021FE9F4(*((u32*)(r4 + 0x28)), 1);
    PlayerAvatar_GetGender(*((u32*)(r4 + 0x20)));
    PlayerAvatar_GetSpriteByStateAndGender(2, r0);
    ov01_021F3084(*((u32*)(r4 + 0x20)), r0);
    FollowMon_IsActive(*((u32*)(r4 + 0x1c)));
    ov01_02205790(*((u32*)(r4 + 0x1c)), ((*((u32*)(r4 + 4)) << 0x18) >> 0x18));
    FollowMon_GetMapObject(*((u32*)(r4 + 0x1c)));
    sub_0205FC94(0x38);
    ov01_021E7F00(*((u32*)(r4 + 0x1c)), 0);
    ov01_021F30F4(r4);
}




void ov01_021F232C(void) {
    // bic r0, r1
}




void ov01_021F2378(void) {
    ov01_021F30D0(0x18);
    *((u32*)(r0 + 4)) = r6;
    *((u32*)(r0 + 8)) = r5;
    *((u32*)(r0 + 0xc)) = r7;
    PlayerAvatar_GetMapObject(r7);
    *((u32*)(r4 + 0x10)) = r0;
    PlayerAvatar_GetUnk34(r7);
    *((u32*)(r4 + 0x14)) = r0;
    GF_AssertFail();
    FieldSystem_CreateTask(r5, ov01_021F23B8, r4);
}




void ov01_021F23B8(void) {
    // strh r0, [r4]
    // strh r0, [r4]
}




void ov01_021F24F4(void) {
}




u32 ov01_021F2538(void) {
}




void ov01_021F2548(void) {
    ov01_021F30D0(0x30);
    *((u32*)(r0 + 4)) = r7;
    *((u32*)(r0 + 0xc)) = r6;
    *((u32*)(r0 + 0x10)) = *((u32*)(r6 + 0x40));
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    *((u32*)(r4 + 0x14)) = r0;
    // add r2, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    *((u16*)(r4 + 2)) = 6;
    TaskManager_Call(*((u32*)(r6 + 0x10)), ov01_021F2628, r4);
}




void CallFieldTask_RockClimb(void) {
    // add r2, sp, #0
    // str r0, [sp]
    // str r0, [sp]
    // add r2, sp, #0
}




void MetatileBehavior_IsRockClimbInDirection(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F25FA: ; jump table
}




void ov01_021F2628(void) {
    TaskManager_GetEnvironment();
    // blx r2
    // blx r2
    ov01_02205790(*((u32*)(r0 + 0xc)), ((*((u32*)(r0 + 4)) << 0x18) >> 0x18), *((u32*)(ov01_022069F0 + (*((u16*)r0) << 2))), (*((u16*)r0) << 2));
    FollowMon_GetMapObject(*((u32*)(r4 + 0xc)));
    sub_02069DC8(1);
    ov01_0220609C(*((u32*)(r4 + 0xc)), 1);
    ov01_021F30F4(r4);
}




void ov01_021F2694(void) {
}




void ov01_021F26AC(void) {
    // add r0, #0x1c
    // strh r0, [r4]
}




void ov01_021F26CC(void) {
    // strh r0, [r4]
}




void ov01_021F2700(void) {
    // strh r0, [r5]
}




void ov01_021F2734(void) {
    // strh r0, [r4]
}




void ov01_021F2758(void) {
    PlayerAvatar_GetXCoord(*((u32*)(r0 + 0x10)));
    GetDeltaXByFacingDirection(*((u32*)(r5 + 4)));
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x10)));
    GetDeltaYByFacingDirection(*((u32*)(r5 + 4)));
    // str r0, [sp]
    // add r1, r4, r6
    // add r2, r7, r2
    ov01_021FEAB0(*((u32*)(r5 + 0x14)), r0, *((u32*)(r5 + 4)));
    *((u32*)(r5 + 0x18)) = r0;
    FollowMon_IsActive(*((u32*)(r5 + 0xc)));
    FollowMon_GetMapObject(*((u32*)(r5 + 0xc)));
    MapObject_UnpauseMovement();
    ov02_0224D9A4(*((u32*)(r5 + 0xc)));
    *((u32*)(r5 + 0x2c)) = r0;
    PlaySE(SEQ_SE_DP_UG_023);
    // strh r0, [r5]
}




void ov01_021F27C0(void) {
    // strh r0, [r4]
}




void ov01_021F27E8(void) {
    // strh r0, [r4]
}




void ov01_021F2808(void) {
    // strh r0, [r4]
}




void ov01_021F2830(void) {
    // strh r0, [r5]
    // strh r0, [r5]
}




void ov01_021F2894(void) {
}




void ov01_021F28B8(void) {
    // add r2, #0x40
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
}




void ov01_021F28EC(void) {
    ov01_021F28B8(0);
    FieldSystem_CreateTask(r4, ov01_021F2944, r0);
}




void CallFieldTask_Waterfall(void) {
    TaskManager_GetFieldSystem();
    ov01_021F3100(r5);
    // add r2, sp, #0
    ov01_021F3040(r4, r0);
    // add r2, sp, #0
    ov01_021F28B8(r4, r7);
    TaskManager_Call(r6, ov01_021F2944, r0);
}




void ov01_021F2944(void) {
    TaskManager_GetEnvironment();
    // blx r1
    // blx r1
    ov01_02205790(*((u32*)(r0 + 0x34)), ((*((u32*)(r0 + 4)) << 0x18) >> 0x18));
    ov01_021F30F4(r5);
}




void ov01_021F2998(void) {
    // add r1, #0x40
    // str r0, [r4]
    // str r0, [r4]
}




void ov01_021F29C0(void) {
    // add r0, #0x40
    ov01_021F3068();
    PlaySE(SEQ_SE_DP_FW463);
    // str r0, [r4]
}




void ov01_021F29E4(void) {
    // add r4, r4, r0
    // add r6, r6, r0
    // add r2, #0x28
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // add r0, sp, #8
    // asr r1, r0, #3
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // add r1, sp, #0x18
    // ldr r1, [sp, #0x20]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // add r3, sp, #0xc
    // sub r2, r1, r0
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x10]
    // sub r1, r1, r0
    // asr r0, r2, #5
    // add r0, r2, r0
    // asr r0, r0, #6
    // str r0, [sp, #0x10]
    // asr r0, r1, #5
    // add r0, r1, r0
    // str r1, [sp, #0x14]
    // asr r0, r0, #6
    // str r0, [sp, #0x14]
    // ldmia r3!, {r0, r1}
    // add r2, #0x1c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [r5]
}




void ov01_021F2AB8(void) {
    // add r1, sp, #0
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    // str r1, [sp, #4]
    // str r0, [sp, #4]
    // add r1, sp, #0
    // str r0, [r4]
}




void ov01_021F2AF8(void) {
    // add r1, sp, #0
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    // str r1, [sp, #4]
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r1, r1, r0
    // str r1, [sp, #8]
    // str r0, [sp, #8]
    // add r1, sp, #0
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
}




void ov01_021F2B80(void) {
    // add r1, #0x40
    // str r0, [r4]
    // str r0, [r4]
}




void ov01_021F2BA4(void) {
    // add r0, #0x40
    ov01_021F3068();
    PlaySE(SEQ_SE_DP_FW463);
    // str r0, [r4]
}




void ov01_021F2BC8(void) {
    // add r4, r4, r0
    // add r6, r6, r0
    // add r2, #0x28
    // add r1, #0x28
    // asr r1, r0, #3
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // add r1, sp, #0xc
    // ldr r1, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // add r3, sp, #0
    // sub r2, r1, r0
    // ldr r0, [sp, #0x14]
    // str r2, [sp, #4]
    // sub r1, r1, r0
    // asr r0, r2, #5
    // add r0, r2, r0
    // asr r0, r0, #6
    // str r0, [sp, #4]
    // asr r0, r1, #5
    // add r0, r1, r0
    // str r1, [sp, #8]
    // asr r0, r0, #6
    // str r0, [sp, #8]
    // ldmia r3!, {r0, r1}
    // add r2, #0x1c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [r5]
}




void ov01_021F2C88(void) {
    // add r1, sp, #0
    // ldr r1, [sp, #8]
    // add r1, r1, r0
    // str r1, [sp, #8]
    // str r0, [sp, #8]
    // add r0, r1, r0
    // add r1, sp, #0
    // str r0, [r4]
}




void ov01_021F2CD4(void) {
    // add r1, sp, #0
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    // str r1, [sp, #4]
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r1, r1, r0
    // str r1, [sp, #8]
    // str r0, [sp, #8]
    // add r0, r1, r0
    // add r1, sp, #0
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #4]
}




void ov01_021F2D68(void) {
    ov01_021F30D0(0x54);
    *((u32*)(r0 + 4)) = r7;
    *((u32*)(r0 + 0x34)) = r6;
    *((u32*)(r0 + 0x38)) = *((u32*)(r6 + 0x40));
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    *((u32*)(r4 + 0x3c)) = r0;
    // add r2, #0x40
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    TaskManager_Call(*((u32*)(r6 + 0x10)), ov01_021F2DD0, r4);
}




void CallFieldTask_Whirlpool(void) {
}




void ov01_021F2DD0(void) {
    TaskManager_GetEnvironment();
    // blx r1
    ov01_02205790(*((u32*)(r0 + 0x34)), ((*((u32*)(r0 + 4)) << 0x18) >> 0x18));
    ov01_021F30F4(r5);
}




void ov01_021F2E08(void) {
}




void ov01_021F2E20(void) {
}




void ov01_021F2E38(void) {
    FollowMon_IsActive(*((u32*)(r0 + 0x34)));
    FollowMon_GetMapObject(*((u32*)(r4 + 0x34)));
    MapObject_UnpauseMovement();
    ov02_0224D67C(*((u32*)(r4 + 0x34)));
    *((u32*)(r4 + 0x50)) = r0;
    PlaySE(SEQ_SE_DP_FW463);
    // str r0, [r4]
}




void ov01_021F2E6C(void) {
    // str r0, [r4]
}




void ov01_021F2E94(void) {
    // str r0, [r4]
}




void ov01_021F2EDC(void) {
    // sub r0, #0xc4
}




void ov01_021F2F24(void) {
}




void Field_PlayerMovementSavingSet(void) {
    PlayerAvatar_GetState(*((u32*)(r0 + 0x40)));
    PlayerAvatar_GetMapObject(r6);
    // str r0, [sp]
    Heap_AllocAtEnd(4, 0x10);
    // str r0, [r5]
    *((u32*)(r0 + 8)) = r7;
    *((u32*)(r0 + 0xc)) = r6;
    *((u32*)(r0 + 4)) = r4;
    GF_AssertFail(0);
    // ldr r0, [sp]
    MapObject_UnpauseMovement();
    Field_PlayerAvatar_OrrTransitionFlags(r6, r4);
    Field_PlayerAvatar_ApplyTransitionFlags(r6);
    SysTask_CreateOnMainQueue(ov01_021F3030, r5, 0x0000FFFF);
    GF_AssertFail();
}




void Field_PlayerMovementSavingClear(void) {
}




void ov01_021F3030(void) {
}




void ov01_021F3040(void) {
}




void ov01_021F3054(void) {
}




void ov01_021F3068(void) {
}




void ov01_021F3084(void) {
}




void ov01_021F3094(void) {
    // str r0, [sp]
    // ldr r2, [sp]
    // add r1, r6, r7
    // add r2, r2, r5
}




void ov01_021F30D0(void) {
}




void ov01_021F30F4(void) {
}




void ov01_021F3100(void) {
}



