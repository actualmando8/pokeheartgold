/* Decompiled from asm/unk_02062108.s */
#include "global.h"

void MapObject_AreBitsSetForMovementScriptInit(void) {
    // push {r4, lr}
    // mov r1, #1
    // add r4, r0, #0
    // bl MapObject_TestFlagsBits
    // cmp r0, #0
    // bne _0206211A
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #2
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _0206212A
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0x10
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _02062146
    // add r0, r4, #0
    // mov r1, #0x20
    // bl MapObject_TestFlagsBits
    // cmp r0, #0
    // bne _02062146
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void MapObject_SetHeldMovement(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #0x71
    // blt _0206215A
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r4, #0
    // bl MapObject_SetMovementCommand
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_SetMovementStep
    // add r0, r5, #0
    // mov r1, #0x10
    // bl MapObject_SetFlagsBits
    // add r0, r5, #0
    // mov r1, #0x20
    // bl MapObject_ClearFlagsBits
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void MapObject_ForceSetHeldMovement(void) {
    MapObject_SetMovementCommand();
    MapObject_SetMovementStep(r4, 0);
    MapObject_ClearFlagsBits(r4, 0x20);
}


void MapObject_IsMovementPaused(void) {
    // push {r4, lr}
    // mov r1, #0x10
    // add r4, r0, #0
    // bl MapObject_TestFlagsBits
    // cmp r0, #0
    // bne _020621AA
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0x20
    // bl MapObject_TestFlagsBits
    // cmp r0, #0
    // beq _020621BA
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void MapObject_ClearHeldMovementIfActive(void) {
    // push {r4, lr}
    // mov r1, #0x10
    // add r4, r0, #0
    // bl MapObject_TestFlagsBits
    // cmp r0, #0
    // bne _020621D2
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0x20
    // bl MapObject_TestFlagsBits
    // cmp r0, #0
    // bne _020621E2
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0x30
    // bl MapObject_ClearFlagsBits
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void MapObject_ClearHeldMovement(void) {
    MapObject_ClearFlagsBits(0x10);
    MapObject_SetFlagsBits(r4, 0x20);
    MapObject_SetMovementCommand(r4, 0xff);
    MapObject_SetMovementStep(r4, 0);
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
    SysTask_GetData();
}


void EventObjectMovementMan_Delete(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl SysTask_GetData
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // bl MapObject_IsMovementPaused
    // cmp r0, #1
    // beq _02062284
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // bl MapObject_ClearHeldMovementIfActive
    // mov r0, #4
    // add r1, r4, #0
    // bl Heap_FreeExplicit
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    ((u32*)r0)[8] = 0;
    *(u32*)r0 = 1;
}


void MovementScriptMachineSub_WaitReady(void) {
    MapObject_AreBitsSetForMovementScriptInit(0, 1, 2);
}


void MovementScriptMachineSub_SetMovementCommand(void) {
    MapObject_SetHeldMovement(0, 3);
}


void MovementScriptMachineSub_WaitMovementCommand(void) {
    MapObject_IsMovementPaused(0, 1, 4);
}


void MovementScriptMachineSub_LoopCheck(void) {
    // ldr r1, [r0, #8]
    // ldr r3, [r0, #0x10]
    // add r2, r1, #1
    // str r2, [r0, #8]
    // ldrh r1, [r3, #2]
    // cmp r2, r1
    // bge _0206232A
    // mov r1, #1
    // str r1, [r0]
    // add r0, r1, #0
    // bx lr
    // add r1, r3, #4
    // str r1, [r0, #0x10]
    // ldrh r1, [r3, #4]
    // cmp r1, #0xfe ; EndMovement
    // beq _0206233C
    // mov r1, #0
    // str r1, [r0]
    // mov r0, #1
    // bx lr
    // mov r1, #1
    // str r1, [r0, #4]
    // mov r1, #5
    // str r1, [r0]
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


u8 MovementScriptMachineSub_Done(void) {
    return 0;
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
    // cmp r0, #3
    // bhi _020623D2
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetMovementCommand
    // add r4, r0, #0
    // cmp r4, #0xff
    // beq _02062424
    // add r0, r5, #0
    // bl MapObject_GetMovementStep
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl MapObject_RunMovementCommand
    // cmp r0, #0
    // bne _02062404
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02062428(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02062400
    // add r0, r4, #0
    // mov r1, #0x20
    // bl MapObject_TestFlagsBits
    // cmp r0, #0
    // bne _02062440
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0x20
    // bl MapObject_ClearFlagsBits
    // add r0, r4, #0
    // mov r1, #0xff
    // bl MapObject_SetMovementCommand
    // add r0, r4, #0
    // mov r1, #0
    // bl MapObject_SetMovementStep
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
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
    MapObject_SetFlagsBits();
}


void sub_0206247C(void) {
    MapObject_SetFacingDirection();
    sub_0205F328(r4, 0);
    sub_02060F78(r4);
    MapObject_IncrementMovementStep(r4);
}


void MapObjectMovementCmd000_Step0(void) {
    sub_0206247C();
}


void MapObjectMovementCmd001_Step0(void) {
    sub_0206247C();
}


void MapObjectMovementCmd002_Step0(void) {
    sub_0206247C();
}


void MapObjectMovementCmd003_Step0(void) {
    sub_0206247C();
}


void sub_020624CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // mov r1, #0xc
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl sub_0205F3C0
    // add r1, sp, #8
    // ldrh r1, [r1, #0x10]
    // strh r1, [r0]
    // strh r7, [r0, #2]
    // str r4, [r0, #4]
    // str r6, [r0, #8]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060F24
    // add r0, r5, #0
    // add r1, r4, #0
    // bl MapObject_SetOrQueueFacing
    // add r1, sp, #8
    // ldrh r1, [r1, #0x10]
    // add r0, r5, #0
    // bl sub_0205F328
    // add r0, r5, #0
    // mov r1, #4
    // bl MapObject_SetFlagsBits
    // add r0, r5, #0
    // bl MapObject_IncrementMovementStep
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void MapObjectMovementCmd090_Step1(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F3E4
    // add r4, r0, #0
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // add r0, r5, #0
    // bl sub_0206101C
    // add r0, r5, #0
    // bl sub_02061070
    // mov r0, #2
    // ldrsh r1, [r4, r0]
    // sub r1, r1, #1
    // strh r1, [r4, #2]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // ble _02062540
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #0x28
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
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void MapObjectMovementCmd004_Step0(void) {
    sub_020624CC(1, 0, 1, 0x20);
}


void MapObjectMovementCmd005_Step0(void) {
    sub_020624CC(1, 1, 0x20);
}


void MapObjectMovementCmd006_Step0(void) {
    sub_020624CC(1, 1, 2, 0x20);
}


void MapObjectMovementCmd007_Step0(void) {
    sub_020624CC(1, 3, 1, 0x20);
}


void MapObjectMovementCmd008_Step0(void) {
    sub_020624CC(1, 0, 2, 0x10);
}


void MapObjectMovementCmd009_Step0(void) {
    sub_020624CC(1, 1, 2, 0x10);
}


void MapObjectMovementCmd010_Step0(void) {
    sub_020624CC(1, 2, 0x10);
}


void MapObjectMovementCmd011_Step0(void) {
    sub_020624CC(1, 3, 2, 0x10);
}


void MapObjectMovementCmd012_Step0(void) {
    sub_020624CC(1, 0, 3, 2, 8);
}


void MapObjectMovementCmd013_Step0(void) {
    sub_020624CC(1, 1, 3, 8);
}


void MapObjectMovementCmd014_Step0(void) {
    sub_020624CC(1, 2, 3, 8);
}


void MapObjectMovementCmd015_Step0(void) {
    sub_020624CC(1, 3, 2, 8);
}


void MapObjectMovementCmd016_Step0(void) {
    sub_020624CC(1, 0, 4);
}


void MapObjectMovementCmd017_Step0(void) {
    sub_020624CC(1, 1, 4);
}


void MapObjectMovementCmd018_Step0(void) {
    sub_020624CC(1, 2, 4);
}


void MapObjectMovementCmd019_Step0(void) {
    sub_020624CC(1, 3, 4);
}


void MapObjectMovementCmd020_Step0(void) {
    sub_020624CC(1, 0, 5, 2, 2);
}


void MapObjectMovementCmd021_Step0(void) {
    sub_020624CC(1, 1, 5, 2);
}


void MapObjectMovementCmd022_Step0(void) {
    sub_020624CC(1, 2, 5);
}


void MapObjectMovementCmd023_Step0(void) {
    sub_020624CC(1, 3, 5, 2, 2);
}


void MapObjectMovementCmd084_Step0(void) {
    sub_020624CC(1, 0, 1, 1);
}


void MapObjectMovementCmd085_Step0(void) {
    sub_020624CC(1, 0, 1);
}


void MapObjectMovementCmd086_Step0(void) {
    sub_020624CC(1, 0, 2, 1);
}


void MapObjectMovementCmd087_Step0(void) {
    sub_020624CC(1, 0, 3, 1, 1);
}


void MapObjectMovementCmd088_Step0(void) {
    sub_020624CC(1, 0, 9, 1, 4);
}


void MapObjectMovementCmd089_Step0(void) {
    sub_020624CC(1, 1, 9, 4);
}


void MapObjectMovementCmd090_Step0(void) {
    sub_020624CC(1, 2, 9, 4);
}


void MapObjectMovementCmd091_Step0(void) {
    sub_020624CC(1, 3, 9, 1, 4);
}


void sub_020627B0(void) {
    sub_0205F3C0(0xc);
    *((u16*)(r0 + 2)) = (r6 + 1);
    MapObject_SetFacingDirection(r5, r7);
    sub_0205F328(r5, r4);
    sub_02060F78(r5);
    MapObject_IncrementMovementStep(r5);
}


void MapObjectMovementCmd040_Step1(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0205F3E4
    // mov r1, #2
    // ldrsh r2, [r0, r1]
    // sub r2, r2, #1
    // strh r2, [r0, #2]
    // ldrsh r0, [r0, r1]
    // cmp r0, #0
    // ble _020627FE
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0x20
    // bl MapObject_SetFlagsBits
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0205F328
    // add r0, r4, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void MapObjectMovementCmd024_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd025_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd026_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd027_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd028_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd029_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd030_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd031_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd032_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd033_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd034_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd035_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd036_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd037_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd038_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd039_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd040_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd041_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd042_Step0(void) {
    sub_020627B0();
}


void MapObjectMovementCmd043_Step0(void) {
    sub_020627B0();
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
    sub_02062958(1, 0, 2, 0x10);
}


void MapObjectMovementCmd045_Step0(void) {
    sub_02062958(1, 1, 2, 0, 0x10);
}


void MapObjectMovementCmd046_Step0(void) {
    sub_02062958(1, 2, 0, 0x10);
}


void MapObjectMovementCmd047_Step0(void) {
    sub_02062958(1, 2, 3, 0, 0x10);
}


void MapObjectMovementCmd048_Step0(void) {
    sub_02062958(1, 0, 3, 2, 8);
}


void MapObjectMovementCmd049_Step0(void) {
    sub_02062958(1, 1, 2, 3, 0, 8);
}


void MapObjectMovementCmd050_Step0(void) {
    sub_02062958(1, 2, 2, 3, 0, 8);
}


void MapObjectMovementCmd051_Step0(void) {
    sub_02062958(1, 3, 0, 2, 8);
}


void MapObjectMovementCmd052_Step0(void) {
    sub_02062958(1, 0, 3, 2, 8);
}


void MapObjectMovementCmd053_Step0(void) {
    sub_02062958(1, 0, 1, 2, 3, 8);
}


void MapObjectMovementCmd054_Step0(void) {
    sub_02062958(1, 0, 2, 2, 3, 8);
}


void MapObjectMovementCmd055_Step0(void) {
    sub_02062958(1, 3, 0, 2, 8);
}


void MapObjectMovementCmd056_Step0(void) {
    sub_02062958(1, 0, 2, 3, 0x10);
}


void MapObjectMovementCmd057_Step0(void) {
    sub_02062958(1, 0, 1, 3, 0x10);
}


void MapObjectMovementCmd058_Step0(void) {
    sub_02062958(1, 0, 2, 3, 0x10);
}


void MapObjectMovementCmd059_Step0(void) {
    sub_02062958(1, 3, 0, 2, 0x10);
}


void MapObjectMovementCmd092_Step0(void) {
    sub_02062958(1, 0, 0xa, 0xf0, 2, 0x10);
}


void MapObjectMovementCmd093_Step0(void) {
    sub_02062958(1, 0, 0xa, 0xf0, 3, 1, 0x10);
}


void MapObjectMovementCmd094_Step0(void) {
    sub_02062958(1, 0, 0xb, 2, 5, 0xc);
}


void MapObjectMovementCmd095_Step0(void) {
    // push {lr}
    // sub sp, #0xc
    // mov r1, #0xb
    // str r1, [sp]
    // mov r1, #0
    // str r1, [sp, #4]
    // mov r1, #5
    // lsl r1, r1, #6
    // mov r2, #1
    // str r1, [sp, #8]
    // mov r1, #3
    // lsl r2, r2, #0xe
    // mov r3, #0xc
    // bl sub_02062958
    // mov r0, #1
    // add sp, #0xc
    // pop {pc}
    // TODO: decompile
}


void sub_02062D54(void) {
    sub_0205F3C0(4);
    MapObject_IncrementMovementStep(r5);
}


void MapObjectMovementCmd064_Step1(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0205F3E4
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _02062D82
    // sub r1, r1, #1
    // str r1, [r0]
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void MapObjectMovementCmd060_Step0(void) {
    sub_02062D54();
}


void MapObjectMovementCmd061_Step0(void) {
    sub_02062D54();
}


void MapObjectMovementCmd062_Step0(void) {
    sub_02062D54();
}


void MapObjectMovementCmd063_Step0(void) {
    sub_02062D54();
}


void MapObjectMovementCmd064_Step0(void) {
    sub_02062D54();
}


void MapObjectMovementCmd065_Step0(void) {
    sub_02062D54();
}


void MapObjectMovementCmd066_Step0(void) {
    sub_02062D54();
}


void MapObjectMovementCmd067_Step0(void) {
    // push {r4, lr}
    // mov r1, #8
    // add r4, r0, #0
    // bl sub_0205F3C0
    // mov r1, #1
    // lsl r1, r1, #0x10
    // str r1, [r0, #4]
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0205F328
    // add r0, r4, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void MapObjectMovementCmd067_Step1(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // bl sub_0205F3E4
    // add r4, r0, #0
    // ldr r1, [r4]
    // ldr r0, [r4, #4]
    // add r0, r1, r0
    // str r0, [r4]
    // add r1, sp, #0
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldr r0, [r4]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl MapObject_SetFacingVector
    // ldr r1, [r4]
    // asr r0, r1, #0xe
    // lsr r0, r0, #0x11
    // add r0, r1, r0
    // asr r0, r0, #0xf
    // cmp r0, #0x28
    // bge _02062E40
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // add r0, r5, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
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
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // bl sub_0205F3E4
    // add r4, r0, #0
    // ldr r1, [r4]
    // ldr r0, [r4, #4]
    // add r0, r1, r0
    // str r0, [r4]
    // bpl _02062E92
    // mov r0, #0
    // str r0, [r4]
    // add r1, sp, #0
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldr r0, [r4]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl MapObject_SetFacingVector
    // ldr r0, [r4]
    // cmp r0, #0
    // ble _02062EB2
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, pc}
    // add r0, r5, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void MapObjectMovementCmd069_Step0(void) {
    // push {r4, lr}
    // mov r1, #2
    // add r4, r0, #0
    // lsl r1, r1, #8
    // bl MapObject_SetFlagsBits
    // add r0, r4, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void MapObjectMovementCmd070_Step0(void) {
    // push {r4, lr}
    // mov r1, #2
    // add r4, r0, #0
    // lsl r1, r1, #8
    // bl MapObject_ClearFlagsBits
    // add r0, r4, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


u32 MapObjectMovementCmd071_Step0(void) {
    MapObject_SetFlagsBits(0x80);
    MapObject_IncrementMovementStep(r4);
    return 1;
}


u32 MapObjectMovementCmd072_Step0(void) {
    MapObject_ClearFlagsBits(0x80);
    MapObject_IncrementMovementStep(r4);
    return 1;
}


void MapObjectMovementCmd073_Step0(void) {
    // push {r4, lr}
    // mov r1, #1
    // add r4, r0, #0
    // lsl r1, r1, #8
    // bl MapObject_SetFlagsBits
    // add r0, r4, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void MapObjectMovementCmd074_Step0(void) {
    // push {r4, lr}
    // mov r1, #1
    // add r4, r0, #0
    // lsl r1, r1, #8
    // bl MapObject_ClearFlagsBits
    // add r0, r4, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02062F48(void) {
    sub_0205F3C0(8);
    ov01_02200540(r5, r6, 1);
    *((u32*)(r4 + 4)) = r0;
    MapObject_IncrementMovementStep(r5);
}


void MapObjectMovementCmd075_Step1(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F3E4
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // bl ov01_022003F4
    // cmp r0, #1
    // bne _02062F90
    // ldr r0, [r4, #4]
    // bl sub_02068B48
    // add r0, r5, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void MapObjectMovementCmd075_Step0(void) {
    sub_02062F48();
}


void MapObjectMovementCmd103_Step0(void) {
    sub_02062F48();
}


void sub_02062FAC(void) {
    sub_0205F3C0(8);
    *((u16*)(r0 + 2)) = r6;
    *((u16*)(r0 + 4)) = r7;
    sub_02060F24(r5, r4);
    MapObject_SetOrQueueFacing(r5, r4);
    sub_0205F328(r5, r6);
    MapObject_SetFlagsBits(r5, 4);
    MapObject_IncrementMovementStep(r5);
}


void sub_02062FEC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // bl sub_0205F3E4
    // add r4, r0, #0
    // mov r2, #6
    // ldrsh r2, [r4, r2]
    // mov r1, #0
    // ldrsh r1, [r4, r1]
    // lsl r2, r2, #2
    // ldr r2, [r6, r2]
    // add r0, r5, #0
    // bl sub_0206101C
    // add r0, r5, #0
    // bl sub_02061070
    // mov r0, #6
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #6]
    // ldrsh r1, [r4, r0]
    // mov r0, #4
    // ldrsh r0, [r4, r0]
    // cmp r1, r0
    // bge _02063026
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // mov r1, #0x28
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
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void MapObjectMovementCmd076_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd077_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd078_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd079_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd076_Step1(void) {
    sub_02062FEC(0, 1);
}


void MapObjectMovementCmd080_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd081_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd082_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd083_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd082_Step1(void) {
    sub_02062FEC(0, 1);
}


void MapObjectMovementCmd096_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd097_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd098_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd099_Step0(void) {
    sub_02062FAC();
}


void MapObjectMovementCmd098_Step1(void) {
    sub_02062FEC(0, 1);
}


u32 MapObjectMovementCmd100_Step0(void) {
    sub_0205F3C0(4);
    sub_0205F328(r4, 9);
    MapObject_IncrementMovementStep(r4);
    return 0;
}


void MapObjectMovementCmd100_Step1(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0205F3E4
    // ldr r1, [r0]
    // add r1, r1, #1
    // str r1, [r0]
    // cmp r1, #8
    // blt _02063198
    // add r0, r4, #0
    // mov r1, #1
    // bl MapObject_SetFacingDirection
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0205F328
    // add r0, r4, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
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
    sub_0205F3C0(4);
    sub_0205F328(r4, 0);
    MapObject_IncrementMovementStep(r4);
    return 0;
}


u32 MapObjectMovementCmd104_Step0(void) {
    sub_0205F3C0(4);
    sub_0205F328(r4, 1);
    MapObject_IncrementMovementStep(r4);
    return 0;
}


void MapObjectMovementCmd102_Step1(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0205F3E4
    // ldr r1, [r0]
    // add r1, r1, #1
    // str r1, [r0]
    // cmp r1, #0x15
    // bhs _020632A6
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // bl MapObject_IncrementMovementStep
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}

