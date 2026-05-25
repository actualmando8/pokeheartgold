/* Decompiled from asm/overlay_01_022053EC.s */
#include "global.h"

void ScrCmd_808(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl ScriptReadHalfword
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // bl FieldSystem_VarGet
    // ldr r6, _02205420 ; =FS_OVERLAY_ID(OVY_25)
    // add r4, r0, #0
    // add r0, r6, #0
    // mov r1, #2
    // bl HandleLoadOverlay
    // add r5, #0x80
    // ldr r0, [r5]
    // add r1, r4, #0
    // bl TrainerHouse_StartBattle
    // add r0, r6, #0
    // bl UnloadOverlayByID
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _02205420: .word FS_OVERLAY_ID(OVY_25)
    // TODO: decompile
}



void ov01_02205424(void) {
    // add r0, #0xf9
    // strb r1, [r0]
}



void ov01_0220542C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x40
    // ldr r6, _022054D0 ; =ov01_02209720
    // add r5, sp, #0x30
    // add r4, r0, #0
    // add r3, r1, #0
    // ldmia r6!, {r0, r1}
    // add r2, r5, #0
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldr r6, _022054D4 ; =ov01_02209730
    // add r5, sp, #0x20
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldr r6, _022054D8 ; =ov01_02209740
    // add r5, sp, #0x10
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldr r6, _022054DC ; =ov01_02209710
    // add r5, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // mov r1, #0
    // lsl r0, r1, #2
    // ldr r0, [r2, r0]
    // cmp r3, r0
    // bne _0220547A
    // add r0, sp, #0x20
    // lsl r1, r4, #2
    // add sp, #0x40
    // ldr r0, [r0, r1]
    // pop {r4, r5, r6, pc}
    // add r0, r1, #1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // cmp r1, #4
    // blo _02205468
    // mov r2, #0
    // add r1, sp, #0x20
    // lsl r0, r2, #2
    // ldr r0, [r1, r0]
    // cmp r3, r0
    // bne _0220549A
    // add r0, sp, #0x10
    // lsl r1, r4, #2
    // add sp, #0x40
    // ldr r0, [r0, r1]
    // pop {r4, r5, r6, pc}
    // add r0, r2, #1
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // cmp r2, #4
    // blo _02205488
    // mov r2, #0
    // add r1, sp, #0x10
    // lsl r0, r2, #2
    // ldr r0, [r1, r0]
    // cmp r3, r0
    // bne _022054BA
    // add r0, sp, #0
    // lsl r1, r4, #2
    // add sp, #0x40
    // ldr r0, [r0, r1]
    // pop {r4, r5, r6, pc}
    // add r0, r2, #1
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // cmp r2, #4
    // blo _022054A8
    // bl GF_AssertFail
    // mov r0, #0
    // add sp, #0x40
    // pop {r4, r5, r6, pc}
    // nop
    // _022054D0: .word ov01_02209720
    // _022054D4: .word ov01_02209730
    // _022054D8: .word ov01_02209740
    // _022054DC: .word ov01_02209710
    // TODO: decompile
}



void ov01_022054E0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0xc0
    // ldr r5, _02205538 ; =ov01_02209750
    // add r4, r0, #0
    // add r3, sp, #0
    // mov r2, #0x18
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _022054EC
    // add r0, r4, #0
    // bl ov01_02205584
    // cmp r0, #0
    // beq _02205504
    // add sp, #0xc0
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl sub_020659A8
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // bne _02205516
    // add sp, #0xc0
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl sub_0206599C
    // add r4, r0, #0
    // cmp r4, #0x10
    // blt _02205526
    // bl GF_AssertFail
    // sub r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x12
    // add r0, sp, #0
    // lsl r1, r4, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // add sp, #0xc0
    // pop {r3, r4, r5, pc}
    // _02205538: .word ov01_02209750
    // TODO: decompile
}



BOOL ov01_0220553C(void) {
    MapObject_GetID();
    MapObject_GetParam(r4, 2);
    // and r0, r1
}



void ov01_02205564(void) {
}



void ov01_02205584(void) {
    MapObject_GetParam(1);
    MapObject_GetID(r4);
    // asr r1, r0, #4
    // and r0, r1
}



void ov01_022055B0(void) {
    MapObject_GetParam(1);
    MapObject_GetID(r4);
    // and r0, r1
}



void ov01_022055DC(void) {
    MapObject_GetParam(1);
    MapObject_GetID(r4);
    // asr r1, r5, #8
    // and r0, r1
}



void ov01_02205604(void) {
    MapObject_GetFacingDirection();
    MapObject_GetXCoord(r7);
    // str r0, [r4]
    MapObject_GetZCoord(r7);
    // str r0, [r5]
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02205634: ; jump table
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r4]
    GF_AssertFail((*((u32*)r4) - 1));
}



void ov01_02205664(void) {
    MapObject_GetFacingDirection();
    MapObject_GetPreviousXCoord(r7);
    // str r0, [r4]
    MapObject_GetPreviousZCoord(r7);
    // str r0, [r5]
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02205694: ; jump table
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r4]
    GF_AssertFail((*((u32*)r4) - 1));
}



void ov01_022056C4(void) {
    MapObject_GetFieldSystem();
    MapObject_GetXCoord(r6);
    MapObject_GetZCoord(r6);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022056F0: ; jump table
    GetMetatileBehavior(r7, ((((r4 - 1) + 1) + 1) - 1), ((((r0 - 1) + 1) + 1) + 1));
}



void ov01_02205720(void) {
    // add r1, sp, #0
    MapObject_CopyPositionVector();
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02205740: ; jump table
    // ldr r1, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // add r1, sp, #0
    MapObject_SetPositionFromVectorAndDirection(r5, r6);
}



void ov01_02205784(void) {
}



void ov01_02205790(void) {
    FollowMon_IsActive();
    FollowMon_GetMapObject(r5);
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    // add r1, sp, #0
    MapObject_CopyPositionVector();
    // add r1, sp, #0
    MapObject_SetPositionFromVectorAndDirection(r6, r4);
}



void ov01_022057C4(void) {
}



void ov01_022057D0(void) {
}



void ov01_022057DC(void) {
    sub_0205F1A0();
    // add r0, #0xfc
    ov01_021FC5A4(*((u32*)r0), 0x16);
    // add r0, r1, r0
    // add r3, r0, r2
    // strb r0, [r3, r1]
}



void ov01_02205808(void) {
    MapObject_GetManager(r1);
    MapObject_GetSpriteID(r5);
    // add r2, sp, #0
    ov01_021F9744(r7, r0);
    MapObject_GetID(r5);
    // add r3, sp, #0
    ov01_02205870(r6, r5, r4);
    // add r1, sp, #0
    sub_02023EC8(r4);
    MapObject_GetFacingDirection(r5);
    ov01_021FA44C();
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
}



void ov01_02205870(void) {
    MapObject_GetManager(r1);
    sub_0205F1A0();
    // add r0, #0xfc
    ov01_021FC5A4(*((u32*)r0), 0x15);
    // add r4, #0xc
    sub_02026E18(r4);
}



void ov01_0220589C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // mov r0, #0xb
    // mov r1, #0x28
    // add r5, r2, #0
    // bl Heap_AllocAtEnd
    // mov r1, #0
    // mov r2, #4
    // add r4, r0, #0
    // bl MI_CpuFill8
    // add r0, r6, #0
    // mov r1, #2
    // bl MapObject_GetParam
    // lsl r0, r0, #0xf
    // lsr r0, r0, #0x10
    // bl ov01_02206088
    // add r7, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetManager
    // bl MapObjectManager_GetMapModelNarc
    // add r1, r7, #0
    // mov r2, #0xb
    // bl NARC_AllocAndReadWholeMember
    // str r0, [r4]
    // bl NNS_G3dGetTex
    // add r6, r0, #0
    // mov r1, #0
    // bl sub_02020888
    // add r7, r0, #0
    // add r0, r6, #0
    // mov r1, #0
    // bl sub_02020838
    // add r1, r4, #0
    // str r0, [r4, #4]
    // add r0, r7, #0
    // add r1, #8
    // mov r2, #0x20
    // bl MIi_CpuCopy16
    // add r0, r4, #0
    // add r0, #8
    // mov r1, #0x10
    // bl TintPalette_GrayScale
    // mov r0, #0
    // mov r1, #0x10
    // str r0, [sp]
    // add r0, r4, #0
    // add r2, r1, #0
    // add r0, #8
    // add r2, #0xf0
    // mov r3, #0xb4
    // bl TintPalette_CustomTone
    // add r0, r5, #0
    // bl sub_02023FB0
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // add r2, r4, #0
    // mov r0, #1
    // lsr r1, r1, #0xd
    // add r2, #8
    // mov r3, #0x20
    // bl GF_CreateNewVramTransferTask
    // add r0, r5, #0
    // bl sub_02023FA0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl sub_02023FA0
    // add r1, r0, #0
    // ldr r3, _02205964 ; =0x7FFF0000
    // lsl r1, r1, #0x10
    // and r3, r6
    // lsr r3, r3, #0x10
    // ldr r2, [r4, #4]
    // mov r0, #0
    // lsr r1, r1, #0xd
    // lsl r3, r3, #4
    // bl GF_CreateNewVramTransferTask
    // ldr r0, _02205968 ; =ov01_0220596C
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnVWaitQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _02205964: .word 0x7FFF0000
    // _02205968: .word ov01_0220596C
    // TODO: decompile
}



void ov01_0220596C(void) {
    GF_GetNumPendingVramTransferTasks();
    SysTask_Destroy(r5);
    Heap_Free(*((u32*)r4));
    Heap_Free(r4);
}



void ov01_02205990(void) {
    *((u32*)(r3 + 4)) = r0;
    *((u32*)(r3 + 8)) = r1;
    *((u32*)(r3 + 0xc)) = r2;
    *((u32*)(r3 + 0x1c)) = 2;
    *((u32*)(r3 + 0x1c)) = 1;
}



void ov01_022059AC(void) {
    // add r0, #0xf9
    // ldrb r0, [r0]
    // add r0, #0xfa
    // ldrb r0, [r0]
    PlayerAvatar_GetXCoord(*((u32*)(r0 + 0x40)));
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    PlayerAvatar_GetFacingDirection(*((u32*)(r5 + 0x40)));
    // str r0, [sp]
    FollowMon_InitMapObject(*((u32*)(r5 + 0x3c)), r4, r6, r0);
    // add r1, #0xfa
    // add r0, #0xe4
    // ldrb r1, [r1]
    ov01_021F9048(*((u32*)r5), r5);
    // add r0, #0xe4
    FollowMon_GetSpecies(*((u32*)r5));
    FollowMon_GetPermissionBySpeciesAndMap(*((u32*)*((u32*)(r5 + 0x20))));
    // add r0, #0xe4
    MapObject_Remove(*((u32*)r5));
    // add r0, #0xfa
    // strb r1, [r0]
    // add r5, #0xf9
    // strb r0, [r5]
}



void ov01_02205A34(void) {
    FollowMon_IsActive();
    FollowMon_GetMapObject(r4);
    // add r1, sp, #0
    MapObject_CopyPositionVector();
    // add r1, sp, #0
    // str r5, [sp, #4]
    MapObject_SetPositionVector(r4);
}



BOOL ov01_02205A60(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetStatePtr(r4);
    FollowMon_IsActive(r5);
    // add r5, #0xe4
    MapObject_CheckMovementPaused(*((u32*)r5));
    MapObject_UnpauseMovement(r5);
    // str r0, [r4]
    // str r0, [r4]
    MapObject_IsMovementPaused(r5);
    MapObject_AreBitsSetForMovementScriptInit(r5);
    MapObject_PauseMovement(r5);
    MapObject_IsMovementPaused(r5);
    MapObject_AreBitsSetForMovementScriptInit(r5);
}



void ov01_02205AEC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xb
    // mov r1, #0x48
    // bl Heap_AllocAtEnd
    // add r2, r0, #0
    // mov r0, #0
    // strb r0, [r2]
    // strb r0, [r2, #1]
    // strb r0, [r2, #2]
    // strb r0, [r2, #3]
    // ldr r0, [r4, #0x10]
    // ldr r1, _02205B10 ; =ov01_02205B14
    // bl TaskManager_Call
    // pop {r4, pc}
    // nop
    // _02205B10: .word ov01_02205B14
    // TODO: decompile
}



void ov01_02205B14(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x30
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrb r1, [r4]
    // cmp r1, #7
    // bhi _02205BD2
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02205B3A: ; jump table
    // add r0, r5, #0
    // bl FollowMon_IsActive
    // cmp r0, #0
    // bne _02205B60
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x30
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // bl ov01_022057C4
    // cmp r0, #0
    // beq _02205B76
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x30
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // bl MapObject_UnpauseMovement
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // beq _02205BD2
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_02205CF0
    // strb r0, [r4]
    // b _02205CDA
    // ldr r0, _02205CE0 ; =ov01_022096E0
    // ldr r1, [r0, #8]
    // ldr r0, [r0, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // add r5, r0, #0
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // beq _02205BD2
    // ldrb r1, [r4, #3]
    // add r0, r1, #1
    // lsl r2, r1, #2
    // add r1, sp, #0x10
    // strb r0, [r4, #3]
    // ldr r1, [r1, r2]
    // add r0, r5, #0
    // bl MapObject_SetHeldMovement
    // ldrb r0, [r4, #3]
    // cmp r0, #2
    // bhs _02205BD4
    // b _02205CDA
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02205CDA
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // add r5, r0, #0
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // beq _02205CDA
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_SetHeldMovement
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02205CDA
    // ldr r3, _02205CE4 ; =ov01_022096F0
    // add r2, sp, #8
    // mov r1, #8
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02205C02
    // ldr r3, _02205CE8 ; =ov01_022096E0
    // add r2, sp, #0
    // mov r1, #8
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02205C14
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // add r6, r0, #0
    // mov r5, #2
    // ldr r0, [r4, #0x44]
    // lsl r5, r5, #0xc
    // cmp r0, #0
    // bne _02205C38
    // mov r0, #0
    // mvn r0, r0
    // mul r5, r0
    // add r0, r6, #0
    // add r1, sp, #0x24
    // bl MapObject_CopyPositionVector
    // ldrb r2, [r4, #1]
    // add r1, sp, #8
    // ldr r0, [sp, #0x2c]
    // ldrsb r1, [r1, r2]
    // ldr r2, [sp, #0x28]
    // lsl r1, r1, #0xc
    // sub r0, r0, r1
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x24]
    // add r0, r0, r5
    // str r0, [sp, #0x24]
    // ldrb r1, [r4, #1]
    // add r0, sp, #0
    // ldrsb r0, [r0, r1]
    // add r1, sp, #0x24
    // lsl r0, r0, #0xc
    // add r0, r2, r0
    // str r0, [sp, #0x28]
    // add r0, r6, #0
    // bl MapObject_SetPositionVector
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // ldrb r0, [r4, #1]
    // cmp r0, #8
    // blo _02205CDA
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02205CDA
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // mov r1, #3
    // bl ov01_0220329C
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02205CDA
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // ldrb r0, [r4, #2]
    // cmp r0, #0x14
    // blo _02205CDA
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_02205790
    // ldr r3, _02205CEC ; =ov01_02209704
    // add r2, sp, #0x18
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r5, #0x3c]
    // bl ov01_021F771C
    // add r1, sp, #0x18
    // bl sub_02023E78
    // add r5, #0xe4
    // ldr r0, [r5]
    // mov r1, #1
    // bl sub_02069E84
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // b _02205CDA
    // bl Heap_Free
    // add sp, #0x30
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #0x30
    // pop {r4, r5, r6, pc}
    // _02205CE0: .word ov01_022096E0
    // _02205CE4: .word ov01_022096F0
    // _02205CE8: .word ov01_022096E0
    // _02205CEC: .word ov01_02209704
    // TODO: decompile
}



void ov01_02205CF0(void) {
    PlayerAvatar_GetMapObject(*((u32*)(r0 + 0x40)));
    MapObject_GetXCoord();
    // str r0, [sp]
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    MapObject_GetZCoord();
    FollowMon_GetMapObject(r5);
    MapObject_GetXCoord();
    FollowMon_GetMapObject(r5);
    MapObject_GetZCoord();
    // ldr r1, [sp]
    *((u32*)(r4 + 0x44)) = 1;
    // ldr r1, [sp]
    *((u32*)(r4 + 0x44)) = 0;
    // ldr r1, [sp]
    *((u32*)(r4 + 0x44)) = 1;
    GF_AssertFail(3, ((r7 + 1) + 1), (r6 + 1));
}



void ov01_02205D68(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FollowMon_IsActive
    // cmp r0, #0
    // bne _02205D78
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov01_022057C4
    // cmp r0, #0
    // beq _02205D94
    // add r0, r4, #0
    // bl sub_0206A054
    // add r0, r4, #0
    // mov r1, #0
    // bl ov01_02205790
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0xb
    // mov r1, #0x44
    // bl Heap_AllocAtEnd
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [r2]
    // ldr r0, [r4, #0x10]
    // ldr r1, _02205DB0 ; =ov01_02205DB4
    // bl TaskManager_Call
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _02205DB0: .word ov01_02205DB4
    // TODO: decompile
}



void ov01_02205DB4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r6, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetStatePtr
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #4
    // bhi _02205ED2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02205DE2: ; jump table
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // bl MapObject_UnpauseMovement
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // beq _02205ED2
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02205ED2
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // str r0, [sp]
    // bl MapObject_GetSpriteID
    // bl ov01_02206088
    // add r7, r0, #0
    // ldr r0, [r5, #0x3c]
    // bl MapObjectManager_GetMapModelNarc
    // add r1, r7, #0
    // mov r2, #0xb
    // bl NARC_AllocAndReadWholeMember
    // add r5, r0, #0
    // bl NNS_G3dGetTex
    // ldr r1, [r0, #0x38]
    // mov r2, #0x40
    // add r0, r0, r1
    // add r1, r6, #4
    // bl MIi_CpuCopy16
    // add r0, r5, #0
    // bl Heap_Free
    // ldr r0, [sp]
    // mov r1, #1
    // bl ov01_0220329C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02205ED2
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // cmp r0, #0x14
    // blt _02205ED2
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_02205790
    // ldr r3, _02205ED8 ; =ov01_022096F8
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r5, #0x3c]
    // bl ov01_021F771C
    // add r7, r0, #0
    // add r1, sp, #8
    // bl sub_02023E78
    // add r0, r7, #0
    // bl sub_02023FB0
    // str r0, [sp, #4]
    // add r0, r7, #0
    // bl sub_02023FB0
    // add r1, r0, #0
    // add r2, r6, #4
    // lsl r1, r1, #0x10
    // ldr r6, _02205EDC ; =0xFFFF0000
    // ldr r3, [sp, #4]
    // mov r0, #1
    // and r3, r6
    // lsr r3, r3, #0x10
    // lsr r1, r1, #0xd
    // lsl r3, r3, #3
    // bl GF_CreateNewVramTransferTask
    // add r0, r5, #0
    // bl sub_0206A054
    // add r0, r5, #0
    // bl FollowMon_GetMapObject
    // mov r1, #0
    // bl sub_02069E28
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02205ED2
    // add r0, r6, #0
    // bl Heap_Free
    // add sp, #0x14
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02205ED8: .word ov01_022096F8
    // _02205EDC: .word 0xFFFF0000
    // TODO: decompile
}



void ov01_02205EE0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xb
    // mov r1, #4
    // bl Heap_AllocAtEnd
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [r2]
    // ldr r1, _02205EFC ; =ov01_02205F00
    // add r0, r4, #0
    // bl TaskManager_Call
    // pop {r4, pc}
    // _02205EFC: .word ov01_02205F00
    // TODO: decompile
}



void ov01_02205F00(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r5);
    TaskManager_GetStatePtr(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02205F2E: ; jump table
    // add r0, #0xe4
    sub_020659CC(*((u32*)r4));
    // add r4, #0xe4
    sub_0205F484(*((u32*)r4));
    // str r0, [r5]
    // add r0, #0xe4
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)r4));
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    // add r4, #0xe4
    ov01_02206028(*((u32*)r4));
    // str r0, [r5]
    // add r0, #0xe4
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)r4));
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    MapObject_GetFacingDirection();
    // add r4, #0xe4
    MapObject_SetFacingDirection(*((u32*)r4), r0);
    // str r0, [r5]
    // str r0, [r6]
    // str r0, [r5]
    // add r0, #0xe4
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)r4));
    // add r0, #0xe4
    sub_0206A040(*((u32*)r4), 0);
    PlayerAvatar_GetMapObject(*((u32*)(r4 + 0x40)));
    MapObject_GetFacingDirection();
    sub_0206234C(0x34);
    // add r4, #0xe4
    MapObject_SetHeldMovement(*((u32*)r4), r0);
    // str r0, [r5]
    // add r0, #0xe4
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)r4));
    // add r0, #0xe4
    ov01_0220329C(*((u32*)r4), 2);
    sub_0206A054(r4);
    // str r0, [r5]
    Heap_Free(r6);
}



void ov01_02206028(void) {
    // str r0, [sp]
    MapObject_GetXCoord();
    // ldr r0, [sp]
    MapObject_GetZCoord();
    MapObject_GetXCoord(r5);
    MapObject_GetZCoord(r5);
    // sub r6, r6, r4
    // sub r4, r7, r0
    // ldr r0, [sp]
    MapObject_GetFacingDirection();
    MapObject_SetHeldMovement(r5, 0xa);
    MapObject_SetHeldMovement(r5, 0xb);
    MapObject_SetHeldMovement(r5, 8);
    MapObject_SetHeldMovement(r5, 9);
}



void ov01_02206088(void) {
    GetMoveModelNoBySpriteId();
    GF_AssertFail();
}



void ov01_0220609C(void) {
    FollowMon_IsActive();
    // add r5, #0xe4
    MapObject_SetFacingDirection(*((u32*)r5), r4);
}



void ov01_022060B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r7, r2, #0
    // bl FollowMon_IsActive
    // cmp r0, #0
    // bne _022060CC
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov01_022057C4
    // cmp r0, #0
    // beq _022060DA
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r5, #0
    // bne _022060E2
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xb
    // mov r1, #0x84
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x84
    // bl MI_CpuFill8
    // strb r5, [r4, #1]
    // strb r7, [r4, #3]
    // ldr r0, [r6, #0x10]
    // ldr r1, _02206108 ; =ov01_0220610C
    // add r2, r4, #0
    // bl TaskManager_Call
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02206108: .word ov01_0220610C
    // TODO: decompile
}



void ov01_0220610C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r5, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // add r0, r5, #0
    // bl TaskManager_GetStatePtr
    // add r5, r0, #0
    // ldr r0, [r5]
    // cmp r0, #3
    // bls _0220612E
    // b _0220625A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0220613A: ; jump table
    // add r0, r6, #0
    // bl FollowMon_GetMapObject
    // bl MapObject_GetSpriteID
    // bl ov01_02206088
    // add r7, r0, #0
    // ldr r0, [r6, #0x3c]
    // bl MapObjectManager_GetMapModelNarc
    // add r1, r7, #0
    // mov r2, #0xb
    // bl NARC_AllocAndReadWholeMember
    // add r6, r0, #0
    // bl NNS_G3dGetTex
    // ldr r1, [r0, #0x38]
    // mov r2, #0x40
    // add r0, r0, r1
    // add r1, r4, #4
    // bl MIi_CpuCopy16
    // add r0, r6, #0
    // bl Heap_Free
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0220625A
    // ldrb r0, [r4, #2]
    // cmp r0, #0
    // beq _0220618C
    // sub r0, r0, #1
    // strb r0, [r4, #2]
    // b _0220625A
    // mov r0, #0
    // ldrsb r2, [r4, r0]
    // ldrb r1, [r4, #1]
    // add r1, r2, r1
    // strb r1, [r4]
    // ldrsb r0, [r4, r0]
    // cmp r0, #0x10
    // blt _022061A6
    // mov r0, #0x10
    // strb r0, [r4]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // ldr r0, _02206260 ; =0x0000FFFF
    // add r1, r4, #0
    // str r0, [sp]
    // ldrb r3, [r4]
    // add r0, r4, #4
    // add r1, #0x44
    // mov r2, #0x20
    // bl BlendPalette
    // ldr r0, [r6, #0x3c]
    // bl ov01_021F771C
    // add r6, r0, #0
    // bl sub_02023FB0
    // add r5, r0, #0
    // add r0, r6, #0
    // bl sub_02023FB0
    // add r1, r0, #0
    // ldr r3, _02206264 ; =0xFFFF0000
    // lsl r1, r1, #0x10
    // and r3, r5
    // add r2, r4, #0
    // lsr r3, r3, #0x10
    // mov r0, #1
    // lsr r1, r1, #0xd
    // add r2, #0x44
    // lsl r3, r3, #3
    // bl GF_CreateNewVramTransferTask
    // ldrb r0, [r4, #3]
    // strb r0, [r4, #2]
    // b _0220625A
    // ldrb r0, [r4, #2]
    // cmp r0, #0
    // beq _022061F6
    // sub r0, r0, #1
    // strb r0, [r4, #2]
    // b _0220625A
    // mov r0, #0
    // ldrsb r2, [r4, r0]
    // ldrb r1, [r4, #1]
    // sub r1, r2, r1
    // strb r1, [r4]
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // bgt _0220620C
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // ldr r0, _02206260 ; =0x0000FFFF
    // add r1, r4, #0
    // str r0, [sp]
    // ldrb r3, [r4]
    // add r0, r4, #4
    // add r1, #0x44
    // mov r2, #0x20
    // bl BlendPalette
    // ldr r0, [r6, #0x3c]
    // bl ov01_021F771C
    // add r6, r0, #0
    // bl sub_02023FB0
    // add r5, r0, #0
    // add r0, r6, #0
    // bl sub_02023FB0
    // add r1, r0, #0
    // ldr r3, _02206264 ; =0xFFFF0000
    // lsl r1, r1, #0x10
    // and r3, r5
    // add r2, r4, #0
    // lsr r3, r3, #0x10
    // mov r0, #1
    // lsr r1, r1, #0xd
    // add r2, #0x44
    // lsl r3, r3, #3
    // bl GF_CreateNewVramTransferTask
    // ldrb r0, [r4, #3]
    // strb r0, [r4, #2]
    // b _0220625A
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02206260: .word 0x0000FFFF
    // _02206264: .word 0xFFFF0000
    // TODO: decompile
}



void ov01_02206268(void) {
    FollowMon_IsVisible();
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    // add r5, #0xe4
    MapObject_GetXCoord();
    MapObject_GetZCoord(r4);
    MapObject_GetXCoord(r7);
    MapObject_GetZCoord(r7);
}



void ov01_022062CC(void) {
}


