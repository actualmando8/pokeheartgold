/* Decompiled from asm/unk_02062108.s */
#include "global.h"

BOOL MapObject_AreBitsSetForMovementScriptInit(void) {
}




void MapObject_SetHeldMovement(void) {
}




void MapObject_ForceSetHeldMovement(void) {
}




BOOL MapObject_IsMovementPaused(void) {
}




BOOL MapObject_ClearHeldMovementIfActive(void) {
}




void MapObject_ClearHeldMovement(void) {
}




EventObjectMovementMan * EventObjectMovementMan_Create(void) {
    Heap_AllocAtEnd(4, 0x14);
    GF_AssertFail();
    // strb r0, [r2]
    MapObject_GetManager(r5, (0x14 - 1), (r4 + 1));
    MapObjectManager_GetPriority();
    SysTask_CreateOnMainQueue(MovementScriptMachine, r4, (r0 - 1));
    GF_AssertFail();
    *((u32*)(r4 + 0xc)) = r5;
    *((u32*)(r4 + 0x10)) = r6;
}




void EventObjectMovementMan_IsFinish(void) {
}




void EventObjectMovementMan_Delete(void) {
}




void MovementScriptMachine(void) {
    // blx r1
}




void MovementScriptMachineSub_Init(void) {
}




void MovementScriptMachineSub_WaitReady(void) {
}




void MovementScriptMachineSub_SetMovementCommand(void) {
}




void MovementScriptMachineSub_WaitMovementCommand(void) {
}




void MovementScriptMachineSub_LoopCheck(void) {
    // str r1, [r0]
    // str r1, [r0]
    // str r1, [r0]
}




u8 MovementScriptMachineSub_Done(void) {
}




void sub_0206234C(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)(*((u32*)_020FD198) + (r7 << 2))), 0, (0 + 1), (_020FD198 + 4));
}




void sub_02062390(void) {
    // mvn r0, r0
}




void sub_020623C8(void) {
    // sub r0, #0x38
}




void sub_020623D8(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    GF_AssertFail(_020FDA28);
    // add r0, sp, #0
}




void sub_02062400(void) {
}




void sub_02062428(void) {
}




void MapObject_RunMovementCommand(void) {
    // blx r1
}




void MapObjectMovementCmd098_Step2(void) {
}




void sub_0206247C(void) {
}




void MapObjectMovementCmd000_Step0(void) {
}




void MapObjectMovementCmd001_Step0(void) {
}




void MapObjectMovementCmd002_Step0(void) {
}




void MapObjectMovementCmd003_Step0(void) {
}




void sub_020624CC(void) {
    // add r1, sp, #8
    // strh r1, [r0]
    // add r1, sp, #8
}




void MapObjectMovementCmd090_Step1(void) {
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
}




void MapObjectMovementCmd004_Step0(void) {
}




void MapObjectMovementCmd005_Step0(void) {
}




void MapObjectMovementCmd006_Step0(void) {
}




void MapObjectMovementCmd007_Step0(void) {
}




void MapObjectMovementCmd008_Step0(void) {
}




void MapObjectMovementCmd009_Step0(void) {
}




void MapObjectMovementCmd010_Step0(void) {
}




void MapObjectMovementCmd011_Step0(void) {
}




void MapObjectMovementCmd012_Step0(void) {
}




void MapObjectMovementCmd013_Step0(void) {
}




void MapObjectMovementCmd014_Step0(void) {
}




void MapObjectMovementCmd015_Step0(void) {
}




void MapObjectMovementCmd016_Step0(void) {
}




void MapObjectMovementCmd017_Step0(void) {
}




void MapObjectMovementCmd018_Step0(void) {
}




void MapObjectMovementCmd019_Step0(void) {
}




void MapObjectMovementCmd020_Step0(void) {
}




void MapObjectMovementCmd021_Step0(void) {
}




void MapObjectMovementCmd022_Step0(void) {
}




void MapObjectMovementCmd023_Step0(void) {
}




void MapObjectMovementCmd084_Step0(void) {
}




void MapObjectMovementCmd085_Step0(void) {
}




void MapObjectMovementCmd086_Step0(void) {
}




void MapObjectMovementCmd087_Step0(void) {
}




void MapObjectMovementCmd088_Step0(void) {
}




void MapObjectMovementCmd089_Step0(void) {
}




void MapObjectMovementCmd090_Step0(void) {
}




void MapObjectMovementCmd091_Step0(void) {
}




void sub_020627B0(void) {
}




void MapObjectMovementCmd040_Step1(void) {
    // ldrsh r2, [r0, r1]
    // ldrsh r0, [r0, r1]
}




void MapObjectMovementCmd024_Step0(void) {
}




void MapObjectMovementCmd025_Step0(void) {
}




void MapObjectMovementCmd026_Step0(void) {
}




void MapObjectMovementCmd027_Step0(void) {
}




void MapObjectMovementCmd028_Step0(void) {
}




void MapObjectMovementCmd029_Step0(void) {
}




void MapObjectMovementCmd030_Step0(void) {
}




void MapObjectMovementCmd031_Step0(void) {
}




void MapObjectMovementCmd032_Step0(void) {
}




void MapObjectMovementCmd033_Step0(void) {
}




void MapObjectMovementCmd034_Step0(void) {
}




void MapObjectMovementCmd035_Step0(void) {
}




void MapObjectMovementCmd036_Step0(void) {
}




void MapObjectMovementCmd037_Step0(void) {
}




void MapObjectMovementCmd038_Step0(void) {
}




void MapObjectMovementCmd039_Step0(void) {
}




void MapObjectMovementCmd040_Step0(void) {
}




void MapObjectMovementCmd041_Step0(void) {
}




void MapObjectMovementCmd042_Step0(void) {
}




void MapObjectMovementCmd043_Step0(void) {
}




void sub_02062958(void) {
    sub_0205F3C0(0x10);
    *((u8*)(r0 + 0xc)) = r4;
    // str r6, [r0]
    *((u8*)(r0 + 0xd)) = r7;
    // add r2, sp, #8
    *((u8*)(r0 + 0xe)) = *((u16*)(r2 + 0x10));
    // ldrsh r1, [r2, r1]
    *((u8*)(r0 + 0xf)) = 0x14;
    *((u16*)(r0 + 8)) = *((u16*)(r2 + 0x18));
    sub_02060F78(r5, *((u16*)(r2 + 0x18)));
    sub_02060F24(r5, r4);
    MapObject_SetFlagsBits(r5, 0x00010004);
    MapObject_SetOrQueueFacing(r5, r4);
    // add r1, sp, #8
    sub_0205F328(r5, *((u16*)(r1 + 0x10)));
    MapObject_IncrementMovementStep(r5);
    MapObject_CheckVisible(r5);
    PlaySE(SEQ_SE_DP_DANSA);
}




void MapObjectMovementCmd092_Step1(void) {
    sub_0205F3E4();
    // ldrsb r1, [r4, r1]
    sub_0206101C(r5, 0xc, *((u32*)r0));
    sub_02061070(r5);
    *((u32*)(r4 + 4)) = 0;
    // ldrsb r1, [r4, r1]
    sub_02060F24(r5, 0xc);
    MapObject_SetFlagsBits(r5, 4);
    // neg r1, r1
    // add r0, r0, r1
    *((u32*)(r4 + 4)) = *((u32*)(r4 + 4));
    // add r0, r1, r0
    *((u16*)(r4 + 0xa)) = *((u16*)(r4 + 8));
    *((u16*)(r4 + 0xa)) = (0xf << 8);
    // ldrsb r1, [r4, r1]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // add r1, sp, #0xc
    MapObject_SetFacingVector(r5, 0, *((u32*)(_0210FACC + (0xf << 2))));
    // ldrsb r1, [r4, r0]
    *((u8*)(r4 + 0xd)) = (r1 - 1);
    // ldrsb r0, [r4, r0]
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)((r1 - 1) + 4)) = 0;
    *((u32*)((r1 - 1) + 8)) = 0;
    MapObject_SetFacingVector(r5, (r1 - 1));
    MapObject_SetFlagsBits(r5, 0x00020028);
    sub_02060F78(r5);
    sub_0205F484(r5);
    sub_0205F328(r5, 0);
    MapObject_IncrementMovementStep(r5);
    MapObject_CheckVisible(r5);
    PlaySE(SEQ_SE_DP_SUTYA2);
}




void MapObjectMovementCmd044_Step0(void) {
}




void MapObjectMovementCmd045_Step0(void) {
}




void MapObjectMovementCmd046_Step0(void) {
}




void MapObjectMovementCmd047_Step0(void) {
}




void MapObjectMovementCmd048_Step0(void) {
}




void MapObjectMovementCmd049_Step0(void) {
}




void MapObjectMovementCmd050_Step0(void) {
}




void MapObjectMovementCmd051_Step0(void) {
}




void MapObjectMovementCmd052_Step0(void) {
}




void MapObjectMovementCmd053_Step0(void) {
}




void MapObjectMovementCmd054_Step0(void) {
}




void MapObjectMovementCmd055_Step0(void) {
}




void MapObjectMovementCmd056_Step0(void) {
}




void MapObjectMovementCmd057_Step0(void) {
}




void MapObjectMovementCmd058_Step0(void) {
}




void MapObjectMovementCmd059_Step0(void) {
}




void MapObjectMovementCmd092_Step0(void) {
}




void MapObjectMovementCmd093_Step0(void) {
}




void MapObjectMovementCmd094_Step0(void) {
}




void MapObjectMovementCmd095_Step0(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
}




void sub_02062D54(void) {
}




void MapObjectMovementCmd064_Step1(void) {
    // str r1, [r0]
}




void MapObjectMovementCmd060_Step0(void) {
}




void MapObjectMovementCmd061_Step0(void) {
}




void MapObjectMovementCmd062_Step0(void) {
}




void MapObjectMovementCmd063_Step0(void) {
}




void MapObjectMovementCmd064_Step0(void) {
}




void MapObjectMovementCmd065_Step0(void) {
}




void MapObjectMovementCmd066_Step0(void) {
}




void MapObjectMovementCmd067_Step0(void) {
}




void MapObjectMovementCmd067_Step1(void) {
    // add r0, r1, r0
    // str r0, [r4]
    // add r1, sp, #0
    // str r0, [r1]
    // str r0, [sp, #4]
    // asr r0, r1, #0xe
    // add r0, r1, r0
    // asr r0, r0, #0xf
}




void MapObjectMovementCmd068_Step0(void) {
    sub_0205F3C0(8);
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0xFFFF0000;
    sub_0205F328(r4, 0);
    MapObject_IncrementMovementStep(r4);
}




void MapObjectMovementCmd068_Step1(void) {
    // add r0, r1, r0
    // str r0, [r4]
    // bpl _02062E92
    // str r0, [r4]
    // add r1, sp, #0
    // str r0, [r1]
    // str r0, [sp, #4]
}




void MapObjectMovementCmd069_Step0(void) {
}




void MapObjectMovementCmd070_Step0(void) {
}




u32 MapObjectMovementCmd071_Step0(void) {
}




u32 MapObjectMovementCmd072_Step0(void) {
}




void MapObjectMovementCmd073_Step0(void) {
}




void MapObjectMovementCmd074_Step0(void) {
}




void sub_02062F48(void) {
}




void MapObjectMovementCmd075_Step1(void) {
}




void MapObjectMovementCmd075_Step0(void) {
}




void MapObjectMovementCmd103_Step0(void) {
}




void sub_02062FAC(void) {
}




void sub_02062FEC(void) {
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // ldrsh r1, [r4, r0]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
}




void MapObjectMovementCmd076_Step0(void) {
}




void MapObjectMovementCmd077_Step0(void) {
}




void MapObjectMovementCmd078_Step0(void) {
}




void MapObjectMovementCmd079_Step0(void) {
}




void MapObjectMovementCmd076_Step1(void) {
}




void MapObjectMovementCmd080_Step0(void) {
}




void MapObjectMovementCmd081_Step0(void) {
}




void MapObjectMovementCmd082_Step0(void) {
}




void MapObjectMovementCmd083_Step0(void) {
}




void MapObjectMovementCmd082_Step1(void) {
}




void MapObjectMovementCmd096_Step0(void) {
}




void MapObjectMovementCmd097_Step0(void) {
}




void MapObjectMovementCmd098_Step0(void) {
}




void MapObjectMovementCmd099_Step0(void) {
}




void MapObjectMovementCmd098_Step1(void) {
}




u32 MapObjectMovementCmd100_Step0(void) {
}




void MapObjectMovementCmd100_Step1(void) {
    // str r1, [r0]
}




void MapObjectMovementCmd101_Step0(void) {
    sub_0205F3C0(4);
    sub_0206642C(r4);
    sub_02068B48();
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    MapObject_SetFacingVector(r4);
    ov01_022000DC(r4);
    MapObject_SetFlagsBits(r4, 0x00010004);
    MapObject_ClearFlagsBits(r4, (1 << 0x14));
    MapObject_IncrementMovementStep(r4);
}




void MapObjectMovementCmd101_Step1(void) {
    sub_0205F3E4();
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // str r0, [sp, #4]
    MapObject_SetFacingVector(r5, *((u32*)_0210FACC));
    // str r0, [r4]
    // str r0, [sp, #4]
    // add r1, sp, #0
    MapObject_SetFacingVector(r5);
    MapObject_SetFlagsBits(r5, 0x00020028);
    sub_02066438(r5);
    MapObject_IncrementMovementStep(r5);
}




u32 MapObjectMovementCmd102_Step0(void) {
}




u32 MapObjectMovementCmd104_Step0(void) {
}




void MapObjectMovementCmd102_Step1(void) {
    // str r1, [r0]
}



