/* Decompiled from asm/unk_0205CB48.s */
#include "global.h"

void PlayerAvatar_MoveControl(void) {
    // mvn r1, r1
    // add r2, sp, #8
    sub_0205DDD4(r3, *((u16*)(r2 + 0x10)));
    sub_0205CBEC(r5, r0);
    // add r3, sp, #8
    sub_0205CC4C(r5, r4, r6, *((u16*)(r3 + 0x10)));
    Field_PlayerAvatar_ApplyTransitionFlags(r5);
    sub_0205D004(r5, r4);
    ov01_021F2F24(r5);
    PlayerAvatar_GetState(r5);
    sub_0205D40C(r5, r4);
    ov01_021F2F24(r5);
    // ldr r0, [sp, #0x1c]
    ov01_021F2EDC(r5);
    // add r0, sp, #8
    // str r0, [sp]
    sub_0205D340(r5, r7, r4, r6);
    sub_0205CC74(r5);
    sub_0205CC94(r5);
}




void sub_0205CBE4(void) {
}




void sub_0205CBEC(void) {
    PlayerAvatar_GetMapObject();
    MapObject_AreBitsSetForMovementScriptInit();
    // mvn r0, r0
    MapObject_GetMovementCommand(r6);
    sub_0205DE64();
    sub_0205DA34(r5, r6, r4);
    PlayerAvatar_GetState(r5);
}




void sub_0205CC4C(void) {
}




void sub_0205CC74(void) {
    PlayerAvatar_CheckFlag6();
    PlayerAvatar_GetUnk10(r4);
    PlayerAvatar_SetFlag1(r4, 0);
}




void sub_0205CC94(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // bl PlayerAvatar_GetUnk10
    // cmp r0, #1
    // bne _0205CD5E
    // add r0, r6, #0
    // bl PlayerAvatar_GetMapObject
    // add r4, r0, #0
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // add r0, r4, #0
    // bl MapObject_GetMovementCommand
    // bl sub_02062390
    // add r1, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // bne _0205CCC8
    // add r7, r5, #0
    // b _0205CCD2
    // add r0, r4, #0
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // add r0, r5, #0
    // bl sub_0205B984
    // cmp r0, #1
    // bne _0205CCE4
    // mov r0, #SEQ_SE_DP_FOOT3_0>>6
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r5, #0
    // bl sub_0205B7A4
    // cmp r0, #1
    // bne _0205CCF4
    // ldr r0, _0205CD60 ; =SEQ_SE_DP_FOOT3_1
    // bl PlaySE
    // add r0, r5, #0
    // bl sub_0205B798
    // add r0, r5, #0
    // bl sub_0205B8AC
    // cmp r0, #1
    // bne _0205CD0A
    // ldr r0, _0205CD64 ; =SEQ_SE_DP_MARSH_WALK
    // bl PlaySE
    // add r0, r4, #0
    // bl MapObject_GetMovementCommand
    // str r0, [sp]
    // add r0, r6, #0
    // bl PlayerAvatar_GetState
    // ldr r0, [sp]
    // bl sub_0205DE64
    // cmp r0, #0
    // bne _0205CD56
    // add r0, r5, #0
    // bl sub_0205B6F4
    // cmp r0, #1
    // beq _0205CD36
    // add r0, r7, #0
    // bl sub_0205B6F4
    // cmp r0, #1
    // bne _0205CD3C
    // ldr r0, _0205CD68 ; =SEQ_SE_DP_KUSA
    // bl PlaySE
    // add r0, r5, #0
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // beq _0205CD50
    // add r0, r7, #0
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // bne _0205CD56
    // ldr r0, _0205CD6C ; =SEQ_SE_GS_KUSA2
    // bl PlaySE
    // add r0, r4, #0
    // add r1, r6, #0
    // bl sub_0205CD70
    // pop {r3, r4, r5, r6, r7, pc}
    // _0205CD60: .word SEQ_SE_DP_FOOT3_1
    // _0205CD64: .word SEQ_SE_DP_MARSH_WALK
    // _0205CD68: .word SEQ_SE_DP_KUSA
    // _0205CD6C: .word SEQ_SE_GS_KUSA2
    // TODO: decompile
}




void sub_0205CD70(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // bl MapObject_GetMovementCommand
    // bl sub_02062390
    // str r0, [sp]
    // add r0, r6, #0
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r6, #0
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // add r0, r7, #0
    // bl sub_0205B6F4
    // cmp r0, #0
    // bne _0205CE58
    // add r0, r7, #0
    // bl sub_0205B984
    // cmp r0, #1
    // beq _0205CE58
    // add r0, r7, #0
    // bl sub_0205B7A4
    // cmp r0, #1
    // beq _0205CE58
    // add r0, r7, #0
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #0
    // bne _0205CE58
    // mov r1, #0
    // ldr r0, [sp]
    // mvn r1, r1
    // cmp r0, r1
    // beq _0205CDD2
    // ldr r1, [sp]
    // add r0, r6, #0
    // bl sub_02060FE0
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, _0205CE5C ; =_020FCB98
    // lsl r1, r4, #2
    // ldrh r1, [r0, r1]
    // ldr r0, _0205CE60 ; =SEQ_SE_GS_EDAPAKI
    // cmp r1, r0
    // bne _0205CDE6
    // add r0, r5, #0
    // bl PlayerAvatar_ResetUnkC
    // b _0205CDFE
    // add r0, r5, #0
    // bl PlayerAvatar_GetUnk14
    // cmp r0, #0
    // bne _0205CDF8
    // add r0, r5, #0
    // bl PlayerAvatar_ResetUnkC
    // b _0205CDFE
    // add r0, r5, #0
    // bl PlayerAvatar_ToggleUnkC
    // add r0, r5, #0
    // bl PlayerAvatar_GetUnkC
    // cmp r0, #0
    // bne _0205CE58
    // add r0, r5, #0
    // bl PlayerAvatar_GetState
    // cmp r0, #1
    // beq _0205CE58
    // cmp r0, #2
    // beq _0205CE58
    // cmp r4, #0x10
    // bhs _0205CE52
    // cmp r4, #0
    // bne _0205CE2A
    // add r0, r5, #0
    // bl sub_0205DE98
    // cmp r0, #1
    // bne _0205CE2A
    // mov r4, #1
    // ldr r0, _0205CE64 ; =_020FCB98 + 2
    // lsl r1, r4, #2
    // ldrh r0, [r0, r1]
    // cmp r0, #1
    // bne _0205CE40
    // ldr r0, _0205CE5C ; =_020FCB98
    // ldrh r4, [r0, r1]
    // add r0, r4, #0
    // bl sub_02006088
    // b _0205CE4A
    // ldr r0, _0205CE5C ; =_020FCB98
    // ldrh r4, [r0, r1]
    // add r0, r4, #0
    // bl PlaySE
    // add r0, r4, #0
    // bl sub_02005BA8
    // pop {r3, r4, r5, r6, r7, pc}
    // blo _0205CE58
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0205CE5C: .word _020FCB98
    // _0205CE60: .word SEQ_SE_GS_EDAPAKI
    // _0205CE64: .word _020FCB98 + 2
    // TODO: decompile
}




void PlayerAvatar_UpdateMovement(void) {
    PlayerAvatar_GetUnk10();
    PlayerAvatar_GetUnk14(r5);
    PlayerAvatar_GetMapObject(r5);
    PlayerAvatar_SetUnk14(r5, 0);
    // mvn r1, r1
    sub_0205D01C(r5, 0);
    PlayerAvatar_SetUnk14(r5, 2);
    MapObject_AreBitsSetForMovementScriptInit(r7);
    MapObject_GetMovementCommand(r7);
    sub_0205DE64();
    PlayerAvatar_SetUnk14(r5, 1);
    PlayerAvatar_SetUnk14(r5, 2);
    PlayerAvatar_SetUnk14(r5, 2);
    MapObject_IsMovementPaused(r7);
    PlayerAvatar_SetUnk14(r5, 0);
    PlayerAvatar_SetUnk14(r5, 3);
    PlayerAvatar_SetUnk14(r5, 0);
    PlayerAvatar_SetUnk14(r5, 3);
}




void sub_0205CF44(void) {
}




BOOL sub_0205CF60(void) {
    PlayerAvatar_GetUnk10();
    PlayerAvatar_GetUnk14(r5);
    PlayerAvatar_GetMapObject(r5);
    MapObject_AreBitsSetForMovementScriptInit();
    MapObject_GetMovementCommand(r4);
    sub_0205DE64();
}




void sub_0205CFBC(void) {
}




void sub_0205D004(void) {
}




void sub_0205D01C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r4, #0
    // bl PlayerAvatar_GetMapObject
    // bl sub_0205F504
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r6, #0
    // bl sub_0205E078
    // cmp r0, #1
    // bne _0205D040
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl PlayerAvatar_CheckFlag1
    // cmp r0, #1
    // bne _0205D04E
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r7, #0x18
    // ldr r5, _0205D074 ; =_020FCB88
    // lsr r6, r0, #0x18
    // ldr r1, [r5]
    // add r0, r6, #0
    // blx r1
    // cmp r0, #1
    // bne _0205D066
    // ldr r0, _0205D078 ; =_020FCB88 + 4
    // lsl r1, r4, #3
    // ldr r0, [r0, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r5, #8
    // ldr r0, [r5]
    // add r4, r4, #1
    // cmp r0, #0
    // bne _0205D054
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0205D074: .word _020FCB88
    // _0205D078: .word _020FCB88 + 4
    // TODO: decompile
}




void sub_0205D07C(void) {
    // push {r3, lr}
    // add r3, r1, #0
    // add r1, r2, #0
    // ldr r2, _0205D098 ; =_020FCB7C
    // lsl r3, r3, #2
    // ldr r2, [r2, r3]
    // blx r2
    // cmp r0, #1
    // bne _0205D092
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _0205D098: .word _020FCB7C
    // TODO: decompile
}




void sub_0205D09C(void) {
}




void sub_0205D0A8(void) {
    PlayerAvatar_GetMapObject();
    MapObject_GetNextFacingDirection();
    sub_0205D240(r5, r0);
    // str r0, [sp]
    sub_0205DA34(r5, r4, r6);
    PlayerAvatar_SetFlag0(r5, 1);
    MapObject_GetFieldSystem(r4);
    PlayerAvatar_SetFlag1(r5, 1);
    PlayerAvatar_SetUnk10(r5, 0);
    sub_0206D494(r4);
    sub_0205D1FC(r5);
    // ldr r1, [sp]
    sub_0205D2A0(r5);
    sub_0205D1FC(r5);
    sub_020611F4(r6);
    sub_0205DA34(r5, r4, r0);
    MapObject_SetFlagsBits(r4, (6 << 6));
    sub_0206234C(r6, 8);
    sub_0205DA1C(r5, r4, r0);
    PlayerAvatar_SetFlag1(r5, 1);
    PlayerAvatar_SetFlag0(r5, 1);
    // mvn r1, r1
    PlayerAvatar_SetUnk28Unk2C(r5, 0, 0);
    MapObject_SetFlagsBits(r4, (6 << 6));
    sub_0205D2D0(r5, r6);
    PlayerAvatar_SetUnk10(r5, 1);
}




void sub_0205D190(void) {
    PlayerAvatar_GetMapObject();
    sub_0205DA34(r5, r0, 1);
    sub_0206234C(1, 0x14);
    sub_0205DA1C(r5, r4, r0);
    PlayerAvatar_SetUnk10(r5, 1);
    PlayerAvatar_SetUnk24(r5, 3);
    sub_0206234C(1, 1);
    sub_0205DA1C(r5, r4, r0);
    PlayerAvatar_ClearUnk24ClearFlag2(r5);
    PlayerAvatar_SetUnk10(r5, 0);
    PlayerAvatar_SetFlag2(r5, 0);
}




void sub_0205D1FC(void) {
    PlayerAvatar_CheckFlag0();
    PlayerAvatar_GetMapObject(r4);
    MapObject_ClearFlagsBits((6 << 6));
    PlayerAvatar_CheckFlag7(r4);
    PlayerAvatar_ClearUnk24ClearFlag2(r4);
    PlayerAvatar_SetFlag0(r4, 0);
    PlayerAvatar_SetFlag7(r4, 0);
    PlayerAvatar_SetFlag5(r4, 0);
}




void sub_0205D240(void) {
    PlayerAvatar_GetMapObject();
    MapObject_GetFieldSystem();
    // add r1, sp, #0xc
    MapObject_CopyPositionVector(r4);
    // add r4, sp, #0xc
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    sub_02061190(r5, r3, (1 << 0xe));
    // add r1, sp, #0
    sub_0206121C(r6);
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0x10]
}




void sub_0205D2A0(void) {
    PlayerAvatar_GetUnk24();
    // bpl _0205D2C4
    PlayerAvatar_SetUnk24(r5, 3);
}




void sub_0205D2D0(void) {
    PlayerAvatar_GetMapObject();
    PlayerAvatar_GetUnk24(r6);
    sub_0206234C(r7, 0x14);
    sub_0205DA1C(r6, r4, r0);
    MapObject_GetFieldSystem(r4);
    FollowMon_IsActive();
    MapObject_GetPreviousXCoord(r4);
    MapObject_GetPreviousZCoord(r4);
    // add r5, #0xe4
    ov01_02205990(r7, r6, r0, r5);
}




void sub_0205D340(void) {
    // str r2, [sp, #8]
    PlayerAvatar_GetState();
    PlayerAvatar_GetMapObject(r6);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205D36A: ; jump table
    // str r4, [sp]
    // add r0, sp, #0x10
    // ldr r3, [sp, #8]
    // str r0, [sp, #4]
    sub_0205D3A8(r6, r0, r7);
    // str r4, [sp]
    // add r0, sp, #0x10
    // ldr r3, [sp, #8]
    // str r0, [sp, #4]
    sub_0205D640(r6, r7);
    GF_AssertFail();
}




void sub_0205D3A8(void) {
    sub_0205D40C(r3);
    // add r3, sp, #8
    // str r0, [sp]
    sub_0205D494(r5, r4, r6, *((u16*)(r3 + 0x10)));
    // add r3, sp, #8
    // str r0, [sp]
    sub_0205D4B4(r5, r4, r6, *((u16*)(r3 + 0x10)));
    // add r3, sp, #8
    // str r0, [sp]
    sub_0205D610(r5, r4, r6, *((u16*)(r3 + 0x10)));
}




void sub_0205D40C(void) {
}




void sub_0205D428(void) {
}




void sub_0205D44C(void) {
    // add r0, r2, #0
    // bx lr
    // TODO: decompile
}




void sub_0205D450(void) {
    // mvn r1, r1
    PlayerAvatar_SetUnk10(0);
    PlayerAvatar_GetFacingDirection(0);
    PlayerAvatar_GetUnk10(r5);
    PlayerAvatar_SetUnk10(r5, 2);
    PlayerAvatar_SetUnk10(r5, 1);
}




void sub_0205D494(void) {
}




void sub_0205D4B4(void) {
    // str r3, [sp, #4]
    sub_0205DA34(0);
    PlayerAvatar_GetState(r6);
    // tst r0, r4
    // str r0, [sp]
    // str r0, [sp]
    // tst r0, r4
    MapObject_GetFieldSystem(r5);
    // str r0, [sp, #8]
    FieldSystem_IsSaveGymmickTypeEqualTo(7);
    MapObject_GetXCoord(r5);
    GetDeltaXByFacingDirection(r7);
    // str r0, [sp, #0xc]
    MapObject_GetZCoord(r5);
    // str r0, [sp, #0x10]
    GetDeltaYByFacingDirection(r7);
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r1, r4, r1
    // add r2, r3, r2
    ov04_022566EC(r0);
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    PlaySE((r0 << 8));
    MapObject_SetNextFacingDirection(r5, r7);
    // str r0, [sp, #4]
    PlayerAvatar_GetPlayerSaveData(r6);
    PlayerSaveData_CheckRunningShoes();
    // add r1, sp, #0x18
    sub_0205DE88(r6, *((u16*)(r1 + 0x10)));
    sub_0205F504(r5);
    sub_0205D44C(r5, ((r0 << 0x18) >> 0x18), r4);
    // str r0, [sp]
    sub_0205E048(r6);
    PlayerAvatar_SetFlag6(r6);
    sub_0205F504(r5);
    sub_0205D44C(r5, ((r0 << 0x18) >> 0x18), 0x10);
    // str r0, [sp]
    sub_0205E048(r6);
    PlayerAvatar_SetFlag6(r6);
    // str r0, [sp]
    // tst r0, r4
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    PlaySE((8 << 8));
    MapObject_SetNextFacingDirection(r5, r7);
    // ldr r1, [sp]
    sub_0206234C(r7);
    sub_0205DA1C(r6, r5, r0);
    // ldr r0, [sp, #4]
    MapObject_GetFieldSystem(r5);
    MapObject_GetPreviousXCoord(r5);
    MapObject_GetPreviousZCoord(r5);
    // add r4, #0xe4
    ov01_02205990(r7, r6, r0, r4);
}




void sub_0205D610(void) {
}




void sub_0205D640(void) {
}




void sub_0205D658(void) {
    PlayerAvatar_GetUnk24();
    sub_0206234C(r5, 0x14);
}




void sub_0205D684(void) {
    PlayerAvatar_Unk24AddWithCeiling(1, 3);
    PlayerAvatar_CheckFlag2(r5);
    PlayerAvatar_SetFlag2(r5, 1);
}




void sub_0205D6B4(void) {
    PlayerAvatar_GetUnk24();
    // bpl _0205D6C6
    PlayerAvatar_SetUnk24(r5, 0);
    PlayerAvatar_CheckFlag2(r5);
    PlayerAvatar_SetFlag2(r5, 0);
}




void sub_0205D6E8(void) {
    // str r3, [sp, #4]
    // ldr r5, [sp, #0x20]
    // ldr r4, [sp, #0x24]
    sub_0205D75C(r3);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205D70C: ; jump table
    // ldr r2, [sp, #4]
    // str r4, [sp]
    sub_0205D818(r6, r7, r5);
    // ldr r2, [sp, #4]
    // str r4, [sp]
    sub_0205D83C(r6, r7, r5);
    // ldr r2, [sp, #4]
    // str r4, [sp]
    sub_0205D948(r6, r7, r5);
    // ldr r2, [sp, #4]
    // str r4, [sp]
    sub_0205D978(r6, r7, r5);
}




void sub_0205D75C(void) {
}




void sub_0205D778(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205D78A: ; jump table
    GF_AssertFail(1);
}




void sub_0205D7AC(void) {
    PlayerAvatar_GetUnk24();
    // mvn r0, r0
    PlayerAvatar_SetUnk10(r5, 0);
    PlayerAvatar_SetUnk10(r5, 1);
    PlayerAvatar_GetFacingDirection(r5);
    PlayerAvatar_GetUnk10(r5);
    PlayerAvatar_SetUnk10(r5, 2);
    PlayerAvatar_SetUnk10(r5, 1);
    PlayerAvatar_SetUnk10(r5, 1);
}




void sub_0205D818(void) {
}




void sub_0205D83C(void) {
    sub_0205DA34();
    // tst r0, r4
    sub_0206234C(r6, 0x38);
    // str r0, [sp]
    sub_0205D684(r5);
    sub_0205E048(r5);
    PlayerAvatar_SetFlag6(r5);
    // tst r0, r4
    PlayerAvatar_GetUnk24(r5);
    sub_0205D658(r5, r6);
    // str r0, [sp]
    PlayerAvatar_SetFlag6(r5);
    PlayerAvatar_SetFlag0(r5, 1);
    sub_0206234C(r6, 0x1c);
    // str r0, [sp]
    // tst r0, r4
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    PlaySE((8 << 8));
    MapObject_SetNextFacingDirection(r7, r6);
    PlayerAvatar_ClearUnk24ClearFlag2(r5);
    // tst r0, r4
    MapObject_GetNextFacingDirection(r7);
    sub_0206234C(0);
    // str r0, [sp]
    MapObject_SetNextFacingDirection(r7, r4);
    PlayerAvatar_ClearUnk24ClearFlag2(r5);
    // mvn r1, r1
    PlayerAvatar_SetUnk28Unk2C(r5, 0, 0);
    sub_0206234C(r6, 0x1c);
    // str r0, [sp]
    // tst r0, r4
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    PlaySE((8 << 8));
    MapObject_SetNextFacingDirection(r7, r6);
    PlayerAvatar_ClearUnk24ClearFlag2(r5);
    sub_0205D658(r5, r6);
    // str r0, [sp]
    sub_0205D684(r5);
    sub_0205E048(r5);
    PlayerAvatar_SetFlag6(r5);
    // ldr r2, [sp]
    sub_0205DA1C(r5, r7);
}




void sub_0205D948(void) {
}




void sub_0205D978(void) {
    sub_0205D6B4();
    // str r0, [sp]
    PlayerAvatar_GetNextFacingDirection(r5);
    sub_0205DA34(r5, r7, r0);
    // tst r0, r4
    sub_0206234C(r6, 0x38);
    // str r0, [sp, #4]
    // tst r0, r4
    sub_0206234C(r6, 0);
    // str r0, [sp, #4]
    PlayerAvatar_ClearUnk24ClearFlag2(r5);
    // str r0, [sp]
    sub_0206234C(r6, 0x1c);
    // str r0, [sp, #4]
    // tst r0, r4
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    PlaySE((8 << 8));
    MapObject_SetNextFacingDirection(r7, r6);
    PlayerAvatar_ClearUnk24ClearFlag2(r5);
    sub_0205D658(r5, r6);
    // str r0, [sp, #4]
    // ldr r0, [sp]
    PlayerAvatar_SetFlag2(r5, 0);
    // ldr r2, [sp, #4]
    sub_0205DA1C(r5, r7);
}




void sub_0205DA1C(void) {
}




void sub_0205DA34(void) {
    sub_0205DAA8();
    // str r0, [sp]
    // tst r0, r1
    // orr r4, r0
    sub_0205DBF4(r5, r6, r7);
    // orr r4, r0
    // ldr r0, [sp]
    // tst r0, r1
    // orr r4, r0
    sub_0205DB68(r5, r6, r7);
    // orr r4, r0
    sub_0205DCA0(r5, r6, r7);
    // orr r4, r0
    sub_0205DCFC(r5, r6, r7);
    // orr r4, r0
}




void sub_0205DAA8(void) {
    // str r2, [sp, #4]
    MapObject_GetXCoord(r1);
    // ldr r0, [sp, #4]
    GetDeltaXByFacingDirection();
    // str r0, [sp, #0x14]
    MapObject_GetYCoord(r5);
    // str r0, [sp, #8]
    MapObject_GetZCoord(r5);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    GetDeltaYByFacingDirection();
    // str r0, [sp, #0x10]
    // add r1, sp, #0x1c
    MapObject_CopyPositionVector(r5);
    // ldr r1, [sp, #0x14]
    // ldr r6, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // ldr r2, [sp, #8]
    // add r1, r7, r1
    // add r3, r6, r3
    sub_02060D94(r5);
    // orr r4, r0
    MapObject_GetFieldSystem(r5);
    // ldr r2, [sp, #0x14]
    // add r1, sp, #0x18
    // str r1, [sp]
    // ldr r6, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r1, sp, #0x1c
    // add r2, r7, r2
    // add r3, r6, r3
    sub_020549F4();
    // orr r4, r0
    // add r1, sp, #0x18
    // ldrsb r0, [r1, r0]
    // orr r4, r0
    // ldr r3, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r2, r3, r2
    // ldr r3, [sp, #4]
    // add r1, r7, r1
    sub_02060DEC(r5);
    // orr r4, r0
    // ldr r1, [sp, #0x14]
    // ldr r5, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // ldr r2, [sp, #8]
    // add r1, r7, r1
    // add r3, r5, r3
    sub_02060BFC(r5);
    // orr r4, r0
}




void sub_0205DB68(void) {
    // mvn r0, r0
    MapObject_GetFieldSystem(r1);
    // str r0, [sp]
    MapObject_GetXCoord(r5);
    GetDeltaXByFacingDirection(r4);
    MapObject_GetZCoord(r5);
    GetDeltaYByFacingDirection(r4);
    // ldr r0, [sp]
    // add r1, r6, r7
    // add r2, r5, r2
    GetMetatileBehavior(r0);
    // add r1, r4, r4
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0205DBB8: ; jump table
    sub_0205B7B0((*((u16*)(r1 + 6)) << 0x10));
    sub_0205B7BC(1);
    sub_0205B7C8(1);
    sub_0205B7D4(1);
}




void sub_0205DBF4(void) {
    // mvn r0, r0
    MapObject_GetFieldSystem(r1);
    MapObject_GetXCoord(r5);
    MapObject_GetZCoord(r5);
    // str r0, [sp]
    // ldr r2, [sp]
    GetMetatileBehavior(r7, r6);
    // add r1, r4, r4
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0205DC36: ; jump table
    sub_0205B730((*((u16*)(r1 + 6)) << 0x10));
    sub_0205B73C(r5);
    sub_0205B724(r5);
    sub_0205B718(r5);
    GetDeltaXByFacingDirection(r4);
    GetDeltaYByFacingDirection(r4);
    // ldr r2, [sp]
    // add r1, r6, r5
    // add r2, r2, r3
    GetMetatileBehavior(r7, r0);
    sub_0205B70C();
}




void sub_0205DCA0(void) {
    // mvn r0, r0
    MapObject_GetFieldSystem(r1);
    // str r0, [sp]
    MapObject_GetXCoord(r5);
    GetDeltaXByFacingDirection(r4);
    MapObject_GetZCoord(r5);
    // str r0, [sp, #4]
    GetDeltaYByFacingDirection(r4);
    // ldr r2, [sp, #4]
    // ldr r0, [sp]
    // add r1, r6, r7
    // add r2, r2, r3
    GetMetatileBehavior(r0);
    sub_02060E54(r5, r0);
}




void sub_0205DCFC(void) {
    // mvn r1, r1
    PlayerAvatar_GetState(0);
    MapObject_GetFieldSystem(r5);
    // str r0, [sp]
    MapObject_GetXCoord(r5);
    GetDeltaXByFacingDirection(r4);
    MapObject_GetZCoord(r5);
    // str r0, [sp, #4]
    GetDeltaYByFacingDirection(r4);
    // ldr r2, [sp, #4]
    // ldr r0, [sp]
    // add r1, r6, r7
    // add r2, r2, r3
    GetMetatileBehavior(r0);
    sub_02060E54(r5, r0);
    sub_02060EBC(r5, r4);
    sub_0205B6F4(r4);
    sub_0205B8AC(r4);
}




void sub_0205DD94(void) {
}




void sub_0205DD9C(void) {
    // tst r1, r0
    // tst r0, r1
    // sub r1, #0x11
}




void sub_0205DDB8(void) {
    // tst r1, r0
    // tst r0, r1
    // sub r1, #0x81
}




void sub_0205DDD4(void) {
    sub_0205DD9C(r2);
    sub_0205DDB8(r5);
    // mvn r1, r1
    PlayerAvatar_GetNextFacingDirection(r6, 0);
    PlayerAvatar_GetUnk28(r6);
    // str r0, [sp]
    PlayerAvatar_GetUnk2C(r6);
    // mvn r1, r1
    // ldr r1, [sp]
}




void sub_0205DE38(void) {
    PlayerAvatar_GetMapObject();
    MapObject_AreBitsSetForMovementScriptInit();
    MapObject_GetMovementCommand(r4);
    sub_0205DE64();
}




void sub_0205DE64(void) {
    // sub r0, #0x1c
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205DE76: ; jump table
}




void sub_0205DE88(void) {
    // tst r0, r1
}




BOOL sub_0205DE98(void) {
    PlayerAvatar_GetUnk8();
    // sub r0, #0x58
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205DEB0: ; jump table
}




void sub_0205DEC0(void) {
    PlayerAvatar_GetState();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205DEDA: ; jump table
    sub_0205D450(r4, r5);
    sub_0205D428();
    sub_0205D7AC(r0, r5);
    sub_0205D778();
    GF_AssertFail();
}




void sub_0205DF0C(void) {
    sub_0205DDD4();
    // str r0, [sp]
    // ldr r1, [sp]
    sub_0205DEC0(r5);
    PlayerAvatar_SetUnk10(r5, r0);
    PlayerAvatar_GetFacingDirection(r5);
    sub_0206234C(0);
    // ldr r0, [sp]
    sub_0206234C(0x28);
    PlayerAvatar_GetMapObject(r5);
    // ldr r0, [sp, #0x1c]
    // tst r1, r4
    // tst r0, r1
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    PlaySE((r0 << 8), 8);
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205DF86: ; jump table
    // ldr r0, [sp, #0x18]
    sub_0205DE88(r5, r7);
    // ldr r0, [sp]
    sub_0206234C(0x58);
}




void sub_0205DFC8(void) {
}




void sub_0205DFD4(void) {
}




void sub_0205DFEC(void) {
}




void sub_0205DFFC(void) {
    // str r0, [sp]
    PlayerAvatar_GetXCoord();
    GetDeltaXByFacingDirection(r5);
    // add r0, r4, r0
    // str r0, [r6]
    // ldr r0, [sp]
    PlayerAvatar_GetZCoord();
    GetDeltaYByFacingDirection(r5);
    // add r0, r4, r0
    // str r0, [r7]
}




void PlayerAvatar_GetCoordsInFront(void) {
}




void sub_0205E048(void) {
    PlayerAvatar_GetMapObject();
    MapObject_GetFieldSystem();
    Save_GameStats_Get(*((u32*)(r0 + 0xc)));
    GameStats_Inc(0);
    PlayerAvatar_GetState(*((u32*)(r5 + 0x40)));
    GameStats_Inc(r4, 1);
}




void sub_0205E078(void) {
    // mvn r1, r1
    PlayerAvatar_GetState(0, 0);
    PlayerAvatar_CheckBikeStateLocked(r5);
    PlayerAvatar_GetMapObject(r5);
    sub_02060EEC(r4);
}



