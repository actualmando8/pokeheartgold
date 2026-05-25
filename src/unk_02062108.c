/* Decompiled from asm/unk_02062108.s */
#include "global.h"

BOOL MapObject_AreBitsSetForMovementScriptInit(void) {
    MapObject_TestFlagsBits(1);
    MapObject_TestFlagsBits(r4, 2);
    MapObject_TestFlagsBits(r4, 0x10);
    MapObject_TestFlagsBits(r4, 0x20);
}



void MapObject_SetHeldMovement(void) {
    GF_AssertFail();
    MapObject_SetMovementCommand(r5, r4);
    MapObject_SetMovementStep(r5, 0);
    MapObject_SetFlagsBits(r5, 0x10);
    MapObject_ClearFlagsBits(r5, 0x20);
}



void MapObject_ForceSetHeldMovement(void) {
}



BOOL MapObject_IsMovementPaused(void) {
    MapObject_TestFlagsBits(0x10);
    MapObject_TestFlagsBits(r4, 0x20);
}



BOOL MapObject_ClearHeldMovementIfActive(void) {
    MapObject_TestFlagsBits(0x10);
    MapObject_TestFlagsBits(r4, 0x20);
    MapObject_ClearFlagsBits(r4, 0x30);
}



void MapObject_ClearHeldMovement(void) {
}



void EventObjectMovementMan_Create(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #4
    // mov r1, #0x14
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // bne _0206222A
    // bl GF_AssertFail
    // add r2, r4, #0
    // mov r1, #0x14
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02062230
    // add r0, r5, #0
    // bl MapObject_GetManager
    // bl MapObjectManager_GetPriority
    // sub r2, r0, #1
    // ldr r0, _0206225C ; =MovementScriptMachine
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // add r7, r0, #0
    // bne _02062254
    // bl GF_AssertFail
    // str r5, [r4, #0xc]
    // str r6, [r4, #0x10]
    // add r0, r7, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0206225C: .word MovementScriptMachine
    // TODO: decompile
}



void EventObjectMovementMan_IsFinish(void) {
}



void EventObjectMovementMan_Delete(void) {
    SysTask_GetData();
    MapObject_IsMovementPaused(*((u32*)(r0 + 0xc)));
    GF_AssertFail();
    MapObject_ClearHeldMovementIfActive(*((u32*)(r4 + 0xc)));
    Heap_FreeExplicit(4, r4);
    SysTask_Destroy(r5);
}



void MovementScriptMachine(void) {
    // push {r3, r4, r5, lr}
    // ldr r4, _020622B4 ; =sMovementScriptMachineStateFuncs
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // blx r1
    // cmp r0, #1
    // beq _020622A2
    // pop {r3, r4, r5, pc}
    // nop
    // _020622B4: .word sMovementScriptMachineStateFuncs
    // TODO: decompile
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
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    // str r1, [r0]
    *((u32*)(1 + 0x10)) = (*((u32*)(r0 + 0x10)) + 4);
    // str r1, [r0]
    *((u32*)(1 + 4)) = 1;
    // str r1, [r0]
}



u8 MovementScriptMachineSub_Done(void) {
}



void sub_0206234C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r4, r1, #0
    // cmp r7, #4
    // blt _0206235A
    // bl GF_AssertFail
    // ldr r3, _0206238C ; =_020FD198
    // ldr r6, [r3]
    // cmp r6, #0
    // beq _02062384
    // mov r1, #0
    // add r2, r1, #0
    // add r5, r6, #0
    // ldr r0, [r5]
    // cmp r4, r0
    // bne _02062374
    // lsl r0, r7, #2
    // ldr r0, [r6, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r2, r2, #1
    // add r5, r5, #4
    // cmp r2, #4
    // blt _02062368
    // add r3, r3, #4
    // ldr r6, [r3]
    // cmp r6, #0
    // bne _02062364
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0206238C: .word _020FD198
    // TODO: decompile
}



void sub_02062390(void) {
    // push {r4, r5}
    // ldr r4, _020623C4 ; =_020FD198
    // ldr r5, [r4]
    // cmp r5, #0
    // beq _020623BA
    // mov r2, #0
    // add r3, r2, #0
    // ldr r1, [r5]
    // cmp r0, r1
    // bne _020623AA
    // add r0, r3, #0
    // pop {r4, r5}
    // bx lr
    // add r3, r3, #1
    // add r5, r5, #4
    // cmp r3, #4
    // blt _0206239E
    // add r4, r4, #4
    // ldr r5, [r4]
    // cmp r5, #0
    // bne _0206239C
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, r5}
    // bx lr
    // nop
    // _020623C4: .word _020FD198
    // TODO: decompile
}



void sub_020623C8(void) {
    // sub r0, #0x38
}



void sub_020623D8(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r3, _020623FC ; =_020FDA28
    // add r2, sp, #0
    // add r4, r0, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // cmp r4, #4
    // blt _020623F2
    // bl GF_AssertFail
    // lsl r1, r4, #2
    // add r0, sp, #0
    // ldr r0, [r0, r1]
    // add sp, #0x10
    // pop {r4, pc}
    // _020623FC: .word _020FDA28
    // TODO: decompile
}



void sub_02062400(void) {
    MapObject_GetMovementCommand(r0);
    MapObject_GetMovementStep(r5);
    MapObject_RunMovementCommand(r5, r4, r0);
}



void sub_02062428(void) {
    sub_02062400();
    MapObject_TestFlagsBits(r4, 0x20);
    MapObject_ClearFlagsBits(r4, 0x20);
    MapObject_SetMovementCommand(r4, 0xff);
    MapObject_SetMovementStep(r4, 0);
}



void MapObject_RunMovementCommand(void) {
    // push {r3, lr}
    // lsl r3, r1, #2
    // ldr r1, _0206246C ; =gMovementCmdTable
    // ldr r3, [r1, r3]
    // lsl r1, r2, #2
    // ldr r1, [r3, r1]
    // blx r1
    // pop {r3, pc}
    // _0206246C: .word gMovementCmdTable
    // TODO: decompile
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
    sub_0205F3C0(0xc);
    // add r1, sp, #8
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = r7;
    *((u32*)(r0 + 4)) = r4;
    *((u32*)(r0 + 8)) = r6;
    sub_02060F24(r5, r4);
    MapObject_SetOrQueueFacing(r5, r4);
    // add r1, sp, #8
    sub_0205F328(r5, *((u16*)(r1 + 0x10)));
    MapObject_SetFlagsBits(r5, 4);
    MapObject_IncrementMovementStep(r5);
}



void MapObjectMovementCmd090_Step1(void) {
    sub_0205F3E4();
    sub_0206101C(r5, *((u32*)(r0 + 4)), *((u32*)(r0 + 8)));
    sub_02061070(r5);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 2)) = (r1 - 1);
    // ldrsh r0, [r4, r0]
    MapObject_SetFlagsBits(r5, 0x28);
    sub_02060F78(r5);
    sub_0205F484(r5);
    sub_0205F328(r5, 0);
    MapObject_IncrementMovementStep(r5);
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
    sub_0205F3E4();
    // ldrsh r2, [r0, r1]
    *((u16*)(r0 + 2)) = (r2 - 1);
    // ldrsh r0, [r0, r1]
    MapObject_SetFlagsBits(r4, 0x20, (r2 - 1));
    sub_0205F328(r4, 0);
    MapObject_IncrementMovementStep(r4);
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
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // mov r1, #0x10
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl sub_0205F3C0
    // strb r4, [r0, #0xc]
    // str r6, [r0]
    // strb r7, [r0, #0xd]
    // add r2, sp, #8
    // ldrh r1, [r2, #0x10]
    // strb r1, [r0, #0xe]
    // mov r1, #0x14
    // ldrsh r1, [r2, r1]
    // cmp r6, #0
    // strb r1, [r0, #0xf]
    // ldrh r1, [r2, #0x18]
    // strh r1, [r0, #8]
    // bne _0206298A
    // add r0, r5, #0
    // bl sub_02060F78
    // b _02062992
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060F24
    // ldr r1, _020629C4 ; =0x00010004
    // add r0, r5, #0
    // bl MapObject_SetFlagsBits
    // add r0, r5, #0
    // add r1, r4, #0
    // bl MapObject_SetOrQueueFacing
    // add r1, sp, #8
    // ldrh r1, [r1, #0x10]
    // add r0, r5, #0
    // bl sub_0205F328
    // add r0, r5, #0
    // bl MapObject_IncrementMovementStep
    // add r0, r5, #0
    // bl MapObject_CheckVisible
    // cmp r0, #0
    // bne _020629C2
    // ldr r0, _020629C8 ; =SEQ_SE_DP_DANSA
    // bl PlaySE
    // pop {r3, r4, r5, r6, r7, pc}
    // _020629C4: .word 0x00010004
    // _020629C8: .word SEQ_SE_DP_DANSA
    // TODO: decompile
}



void MapObjectMovementCmd092_Step1(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // bl sub_0205F3E4
    // add r4, r0, #0
    // ldr r2, [r4]
    // cmp r2, #0
    // beq _02062A1C
    // mov r1, #0xc
    // ldrsb r1, [r4, r1]
    // add r0, r5, #0
    // bl sub_0206101C
    // add r0, r5, #0
    // bl sub_02061070
    // mov r0, #1
    // ldr r1, [r4, #4]
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // blt _02062A0E
    // mov r0, #0
    // str r0, [r4, #4]
    // mov r1, #0xc
    // ldrsb r1, [r4, r1]
    // add r0, r5, #0
    // bl sub_02060F24
    // add r0, r5, #0
    // mov r1, #4
    // bl MapObject_SetFlagsBits
    // ldr r1, [r4]
    // cmp r1, #0
    // bge _02062A16
    // neg r1, r1
    // ldr r0, [r4, #4]
    // add r0, r0, r1
    // str r0, [r4, #4]
    // ldrh r1, [r4, #0xa]
    // ldrh r0, [r4, #8]
    // add r0, r1, r0
    // strh r0, [r4, #0xa]
    // mov r0, #0xf
    // ldrh r1, [r4, #0xa]
    // lsl r0, r0, #8
    // cmp r1, r0
    // bls _02062A30
    // strh r0, [r4, #0xa]
    // mov r1, #0xf
    // ldrsb r1, [r4, r1]
    // ldrh r0, [r4, #0xa]
    // lsl r2, r1, #2
    // ldr r1, _02062AB0 ; =_0210FACC
    // lsr r0, r0, #8
    // lsl r0, r0, #0x10
    // ldr r2, [r1, r2]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // lsr r0, r0, #0xe
    // ldr r0, [r2, r0]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // add r0, r5, #0
    // add r1, sp, #0xc
    // bl MapObject_SetFacingVector
    // mov r0, #0xd
    // ldrsb r1, [r4, r0]
    // sub r1, r1, #1
    // strb r1, [r4, #0xd]
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // ble _02062A68
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r1, sp, #0
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // add r0, r5, #0
    // bl MapObject_SetFacingVector
    // ldr r1, _02062AB4 ; =0x00020028
    // add r0, r5, #0
    // bl MapObject_SetFlagsBits
    // add r0, r5, #0
    // bl sub_02060F78
    // add r0, r5, #0
    // bl sub_0205F484
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_0205F328
    // add r0, r5, #0
    // bl MapObject_IncrementMovementStep
    // add r0, r5, #0
    // bl MapObject_CheckVisible
    // cmp r0, #0
    // bne _02062AAA
    // ldr r0, _02062AB8 ; =SEQ_SE_DP_SUTYA2
    // bl PlaySE
    // mov r0, #1
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // _02062AB0: .word _0210FACC
    // _02062AB4: .word 0x00020028
    // _02062AB8: .word SEQ_SE_DP_SUTYA2
    // TODO: decompile
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
    sub_02062958(3, (1 << 0xe), 0xc);
}



void sub_02062D54(void) {
}



void MapObjectMovementCmd064_Step1(void) {
    sub_0205F3E4();
    // str r1, [r0]
    MapObject_IncrementMovementStep(r4, (*((u32*)r0) - 1));
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
    sub_0205F3C0(8);
    *((u32*)(r0 + 4)) = (1 << 0x10);
    sub_0205F328(r4, 0);
    MapObject_IncrementMovementStep(r4);
}



void MapObjectMovementCmd067_Step1(void) {
    sub_0205F3E4();
    // add r0, r1, r0
    // str r0, [r4]
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)(*((u32*)r0) + 4)) = 0;
    *((u32*)(*((u32*)r0) + 8)) = 0;
    // str r0, [sp, #4]
    MapObject_SetFacingVector(r5, *((u32*)r0));
    // asr r0, r1, #0xe
    // add r0, r1, r0
    // asr r0, r0, #0xf
    MapObject_IncrementMovementStep(r5, *((u32*)r4));
}



void MapObjectMovementCmd068_Step0(void) {
    // push {r4, lr}
    // mov r1, #8
    // add r4, r0, #0
    // bl sub_0205F3C0
    // mov r1, #5
    // lsl r1, r1, #0x12
    // str r1, [r0]
    // ldr r1, _02062E74 ; =0xFFFF0000
    // str r1, [r0, #4]
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0205F328
    // add r0, r4, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _02062E74: .word 0xFFFF0000
    // TODO: decompile
}



void MapObjectMovementCmd068_Step1(void) {
    sub_0205F3E4();
    // add r0, r1, r0
    // str r0, [r4]
    // bpl _02062E92
    // str r0, [r4]
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)(*((u32*)r0) + 4)) = 0;
    *((u32*)(*((u32*)r0) + 8)) = 0;
    // str r0, [sp, #4]
    MapObject_SetFacingVector(r5, *((u32*)r0));
    MapObject_IncrementMovementStep(r5);
}



void MapObjectMovementCmd069_Step0(void) {
    MapObject_SetFlagsBits((2 << 8));
    MapObject_IncrementMovementStep(r4);
}



void MapObjectMovementCmd070_Step0(void) {
    MapObject_ClearFlagsBits((2 << 8));
    MapObject_IncrementMovementStep(r4);
}



u32 MapObjectMovementCmd071_Step0(void) {
}



u32 MapObjectMovementCmd072_Step0(void) {
}



void MapObjectMovementCmd073_Step0(void) {
    MapObject_SetFlagsBits((1 << 8));
    MapObject_IncrementMovementStep(r4);
}



void MapObjectMovementCmd074_Step0(void) {
    MapObject_ClearFlagsBits((1 << 8));
    MapObject_IncrementMovementStep(r4);
}



void sub_02062F48(void) {
}



void MapObjectMovementCmd075_Step1(void) {
    sub_0205F3E4();
    ov01_022003F4(*((u32*)(r0 + 4)));
    sub_02068B48(*((u32*)(r4 + 4)));
    MapObject_IncrementMovementStep(r5);
}



void MapObjectMovementCmd075_Step0(void) {
}



void MapObjectMovementCmd103_Step0(void) {
}



void sub_02062FAC(void) {
}



void sub_02062FEC(void) {
    sub_0205F3E4();
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // ldr r2, [r6, r2]
    sub_0206101C(r5, 0, (6 << 2));
    sub_02061070(r5);
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 6)) = (r1 + 1);
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    MapObject_SetFlagsBits(r5, 0x28);
    sub_02060F78(r5);
    sub_0205F484(r5);
    sub_0205F328(r5, 0);
    MapObject_IncrementMovementStep(r5);
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
    sub_0205F3E4();
    // str r1, [r0]
    MapObject_SetFacingDirection(r4, 1);
    sub_0205F328(r4, 0);
    MapObject_IncrementMovementStep(r4);
}



void MapObjectMovementCmd101_Step0(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r1, #4
    // bl sub_0205F3C0
    // add r0, r4, #0
    // bl sub_0206642C
    // cmp r0, #0
    // beq _020631B6
    // bl sub_02068B48
    // add r1, sp, #0
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // add r0, r4, #0
    // bl MapObject_SetFacingVector
    // add r0, r4, #0
    // bl ov01_022000DC
    // ldr r1, _020631EC ; =0x00010004
    // add r0, r4, #0
    // bl MapObject_SetFlagsBits
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0x14
    // bl MapObject_ClearFlagsBits
    // add r0, r4, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _020631EC: .word 0x00010004
    // TODO: decompile
}



void MapObjectMovementCmd101_Step1(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // bl sub_0205F3E4
    // add r4, r0, #0
    // ldr r0, _02063250 ; =_0210FACC
    // add r1, sp, #0
    // ldr r2, [r0]
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldr r0, [r4]
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl MapObject_SetFacingVector
    // ldr r0, [r4]
    // add r0, r0, #2
    // str r0, [r4]
    // cmp r0, #0x10
    // bhs _02063228
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl MapObject_SetFacingVector
    // ldr r1, _02063254 ; =0x00020028
    // add r0, r5, #0
    // bl MapObject_SetFlagsBits
    // add r0, r5, #0
    // bl sub_02066438
    // add r0, r5, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _02063250: .word _0210FACC
    // _02063254: .word 0x00020028
    // TODO: decompile
}



u32 MapObjectMovementCmd102_Step0(void) {
}



u32 MapObjectMovementCmd104_Step0(void) {
}



void MapObjectMovementCmd102_Step1(void) {
    sub_0205F3E4();
    // str r1, [r0]
    MapObject_IncrementMovementStep(r4, (*((u32*)r0) + 1));
}


