/* Decompiled from asm/overlay_01_021F1AFC.s */
#include "global.h"

void Field_PlayerAvatar_OrrTransitionFlags(void) {
    PlayerAvatar_SetTransitionFlagsBits();
}


void Field_PlayerAvatar_ApplyTransitionFlags(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r6, #0
    // bl PlayerAvatar_GetTransitionFlags
    // ldr r5, _021F1B34 ; =sPlayerAvatarBitUpdateFuncs
    // add r4, r0, #0
    // mov r0, #1
    // tst r0, r4
    // beq _021F1B1E
    // ldr r1, [r5]
    // add r0, r7, #0
    // blx r1
    // add r6, r6, #1
    // lsr r4, r4, #1
    // add r5, r5, #4
    // cmp r6, #0xf
    // blo _021F1B12
    // add r0, r7, #0
    // mov r1, #0
    // bl PlayerAvatar_SetTransitionFlags
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F1B34: .word sPlayerAvatarBitUpdateFuncs
    // TODO: decompile
}


void ov01_021F1B38(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl PlayerAvatar_GetGender
    // add r1, r0, #0
    // mov r0, #0
    // bl PlayerAvatar_GetSpriteByStateAndGender
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov01_021F3084
    // add r0, r4, #0
    // mov r1, #0
    // bl PlayerAvatar_SetState
    // add r0, r4, #0
    // bl PlayerAvatar_ClearUnk24ClearFlag2
    // add r0, r4, #0
    // bl PlayerAvatar_GetUnk34
    // cmp r0, #0
    // beq _021F1B6C
    // bl ov01_021F1640
    // add r0, r4, #0
    // mov r1, #0
    // bl PlayerAvatar_SetUnk34
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F1B78(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl PlayerAvatar_GetGender
    // add r1, r0, #0
    // mov r0, #1
    // bl PlayerAvatar_GetSpriteByStateAndGender
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov01_021F3084
    // add r0, r4, #0
    // mov r1, #1
    // bl PlayerAvatar_SetState
    // add r0, r4, #0
    // bl PlayerAvatar_ClearUnk24ClearFlag2
    // add r0, r4, #0
    // bl PlayerAvatar_GetUnk34
    // cmp r0, #0
    // beq _021F1BAC
    // bl ov01_021F1640
    // add r0, r4, #0
    // mov r1, #0
    // bl PlayerAvatar_SetUnk34
    // ldr r0, _021F1BBC ; =SEQ_SE_DP_JITENSYA
    // bl PlaySE
    // pop {r4, pc}
    // _021F1BBC: .word SEQ_SE_DP_JITENSYA
    // TODO: decompile
}


void ov01_021F1BC0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // bl PlayerAvatar_GetGender
    // add r1, r0, #0
    // mov r0, #2
    // bl PlayerAvatar_GetSpriteByStateAndGender
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov01_021F3084
    // add r0, r5, #0
    // mov r1, #2
    // bl PlayerAvatar_SetState
    // add r0, r5, #0
    // bl PlayerAvatar_ClearUnk24ClearFlag2
    // add r0, r5, #0
    // bl PlayerAvatar_GetUnk34
    // cmp r0, #0
    // beq _021F1BF6
    // bl ov01_021F1640
    // add r0, r5, #0
    // mov r1, #0
    // bl PlayerAvatar_SetUnk34
    // add r0, r5, #0
    // bl PlayerAvatar_GetFacingDirection
    // add r4, r0, #0
    // add r0, r5, #0
    // bl PlayerAvatar_GetMapObject
    // add r6, r0, #0
    // bl MapObject_GetFieldSystem
    // mov r0, #1
    // mov r1, #0
    // str r0, [sp]
    // add r0, r6, #0
    // add r2, r1, #0
    // add r3, r4, #0
    // bl ov01_021FE7DC
    // add r1, r0, #0
    // add r0, r5, #0
    // bl PlayerAvatar_SetUnk34
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F1C30(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl PlayerAvatar_GetGender
    // add r1, r0, #0
    // mov r0, #3
    // bl PlayerAvatar_GetSpriteByStateAndGender
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov01_021F3084
    // add r0, r4, #0
    // mov r1, #3
    // bl PlayerAvatar_SetState
    // add r0, r4, #0
    // bl PlayerAvatar_ClearUnk24ClearFlag2
    // add r0, r4, #0
    // bl PlayerAvatar_GetUnk34
    // cmp r0, #0
    // beq _021F1C64
    // bl ov01_021F1640
    // add r0, r4, #0
    // mov r1, #0
    // bl PlayerAvatar_SetUnk34
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F1C70(void) {
    PlayerAvatar_SetFlag1();
}


void ov01_021F1C7C(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(5, r0);
    ov01_021F3084(r4, r0);
}


void ov01_021F1C98(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(7, r0);
    ov01_021F3084(r4, r0);
}


void ov01_021F1CB4(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(8, r0);
    ov01_021F3084(r4, r0);
}


void ov01_021F1CD0(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(9, r0);
    ov01_021F3084(r4, r0);
}


void ov01_021F1CEC(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(0xa, r0);
    ov01_021F3084(r4, r0);
}


void ov01_021F1D08(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(0xb, r0);
    ov01_021F3084(r4, r0);
}


void ov01_021F1D24(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(0xc, r0);
    ov01_021F3084(r4, r0);
}


void ov01_021F1D40(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(6, r0);
    ov01_021F3084(r4, r0);
}


void ov01_021F1D5C(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(0xd, r0);
    ov01_021F3084(r4, r0);
}


void ov01_021F1D78(void) {
    PlayerAvatar_GetGender();
    PlayerAvatar_GetSpriteByStateAndGender(0xe, r0);
    ov01_021F3084(r4, r0);
}


void ov01_021F1D94(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // add r4, r2, #0
    // add r7, r3, #0
    // bl PlayerAvatar_CheckFlag0
    // cmp r0, #1
    // bne _021F1DBE
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r7, #0
    // bl ov01_021F2538
    // cmp r0, #1
    // bne _021F1DBA
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_0205CBE4
    // cmp r0, #0
    // bne _021F1DCE
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _021F1DDA
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl ov01_021F1DF4
    // cmp r0, #1
    // bne _021F1DEE
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F1DF4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r6, r3, #0
    // bl sub_0205DEC0
    // str r0, [sp]
    // mov r0, #1
    // tst r0, r6
    // beq _021F1E22
    // ldr r3, [sp]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // bl ov01_021F1E54
    // cmp r0, #1
    // bne _021F1E22
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #2
    // tst r0, r6
    // beq _021F1E3C
    // ldr r3, [sp]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // bl ov01_021F24F4
    // cmp r0, #1
    // bne _021F1E3C
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r3, [sp]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // bl ov01_021F232C
    // cmp r0, #1
    // bne _021F1E50
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F1E54(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r3, #1
    // beq _021F1E64
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F3094
    // add r6, r0, #0
    // bne _021F1E74
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl MapObject_GetSpriteID
    // cmp r0, #0x54
    // beq _021F1E80
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // add r1, r4, #0
    // bl sub_02060BB8
    // mov r1, #1
    // bic r0, r1
    // beq _021F1E92
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // add r3, r6, #0
    // bl ov01_021F1EA4
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F1EA4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0x14
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov01_021F30D0
    // add r2, r0, #0
    // str r5, [r2, #4]
    // str r4, [r2, #8]
    // str r7, [r2, #0x10]
    // ldr r1, _021F1EC8 ; =ov01_021F1ECC
    // add r0, r4, #0
    // str r6, [r2, #0xc]
    // bl FieldSystem_CreateTask
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F1EC8: .word ov01_021F1ECC
    // TODO: decompile
}


void ov01_021F1ECC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // bl PlayerAvatar_GetMapObject
    // add r6, r0, #0
    // ldr r0, [r4]
    // ldr r5, [r4, #0x10]
    // cmp r0, #0
    // beq _021F1EF0
    // cmp r0, #1
    // beq _021F1F3C
    // cmp r0, #2
    // beq _021F1F62
    // b _021F1F82
    // add r0, r5, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _021F1F82
    // add r0, r6, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // bne _021F1F0E
    // ldr r0, [r4, #0xc]
    // bl sub_0205DE38
    // cmp r0, #0
    // beq _021F1F82
    // ldr r0, [r4, #4]
    // mov r1, #8
    // bl sub_0206234C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MapObject_SetHeldMovement
    // ldr r0, [r4, #4]
    // mov r1, #0x20
    // bl sub_0206234C
    // add r1, r0, #0
    // add r0, r6, #0
    // bl MapObject_SetHeldMovement
    // ldr r0, _021F1F88 ; =SEQ_SE_DP_UG_023
    // bl PlaySE
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021F1F82
    // add r0, r5, #0
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // beq _021F1F82
    // add r0, r6, #0
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // beq _021F1F82
    // add r0, r5, #0
    // bl MapObject_ClearHeldMovementIfActive
    // add r0, r6, #0
    // bl MapObject_ClearHeldMovementIfActive
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r6, [r4, #8]
    // add r0, r4, #0
    // bl ov01_021F30F4
    // ldr r0, [r6, #0x20]
    // ldr r0, [r0]
    // cmp r0, #0xed
    // bne _021F1F7E
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // bl ov01_021F2004
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F1F88: .word SEQ_SE_DP_UG_023
    // TODO: decompile
}


void ov01_021F1F8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r4, _021F2000 ; =ov01_02206A14
    // add r7, r0, #0
    // add r5, r1, #0
    // mov r6, #0
    // add r0, r5, #0
    // bl MapObject_GetMapID
    // ldrh r1, [r4]
    // cmp r1, r0
    // bne _021F1FF4
    // add r0, r5, #0
    // bl MapObject_GetID
    // ldrh r1, [r4, #6]
    // cmp r1, r0
    // bne _021F1FF4
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // ldrh r1, [r4, #2]
    // cmp r1, r0
    // bne _021F1FF4
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // ldrh r1, [r4, #4]
    // cmp r1, r0
    // bne _021F1FF4
    // add r0, r5, #0
    // bl MapObject_GetEventFlag
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // add r0, r7, #0
    // lsr r1, r1, #0x10
    // bl FieldSystem_FlagSet
    // add r0, r5, #0
    // bl MapObject_Delete
    // mov r1, #0xa
    // add r2, r6, #0
    // mul r2, r1
    // ldr r1, _021F2000 ; =ov01_02206A14
    // add r0, r7, #0
    // add r1, r1, r2
    // ldrh r1, [r1, #8]
    // bl FieldSystem_FlagClear
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r6, r6, #1
    // add r4, #0xa
    // cmp r6, #4
    // blo _021F1F96
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F2000: .word ov01_02206A14
    // TODO: decompile
}


void ov01_021F2004(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // bl ov01_021F1F8C
    // cmp r0, #0
    // bne _021F2018
    // mov r0, #1
    // pop {r4, pc}
    // ldr r1, _021F2028 ; =0x0000271F
    // add r0, r4, #0
    // mov r2, #0
    // bl StartScriptFromMenu
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _021F2028: .word 0x0000271F
    // TODO: decompile
}


void ov01_021F202C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0x2c
    // add r7, r1, #0
    // add r5, r2, #0
    // bl ov01_021F30D0
    // add r4, r0, #0
    // str r7, [r4, #4]
    // str r6, [r4, #0x1c]
    // ldr r0, [r6, #0x40]
    // str r0, [r4, #0x20]
    // bl PlayerAvatar_GetMapObject
    // add r2, r4, #0
    // str r0, [r4, #0x24]
    // add r2, #0xc
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r6, #0x10]
    // ldr r1, _021F2064 ; =ov01_021F2118
    // add r2, r4, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F2064: .word ov01_021F2118
    // TODO: decompile
}


void CallFieldTask_Surf(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r2, #0
    // add r5, r1, #0
    // bl TaskManager_GetFieldSystem
    // add r4, r0, #0
    // add r1, r6, #0
    // bl ov01_021F3100
    // add r1, r0, #0
    // add r0, r4, #0
    // add r2, sp, #0
    // bl ov01_021F3040
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetState
    // sub r0, r0, #1
    // cmp r0, #1
    // bhi _021F2098
    // mov r0, #1
    // str r0, [sp]
    // b _021F20B0
    // add r0, r4, #0
    // bl ov01_02206268
    // cmp r0, #0
    // beq _021F20B0
    // add r0, r4, #0
    // bl ov01_022062CC
    // cmp r6, r0
    // bne _021F20B0
    // mov r0, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, sp, #0
    // bl ov01_021F202C
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void Field_PlayerCanSurfOnTile(void) {
    // push {r4, r5, r6, lr}
    // add r4, r2, #0
    // add r5, r1, #0
    // bl PlayerAvatar_GetMapObject
    // add r6, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl MetatileBehavior_IsSurfableWater
    // cmp r0, #1
    // bne _021F2112
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205BA30
    // cmp r0, #1
    // beq _021F20F0
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205BA24
    // cmp r0, #1
    // bne _021F20FE
    // add r0, r6, #0
    // bl MapObject_CheckFlag28
    // cmp r0, #1
    // bne _021F20FE
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205B78C
    // cmp r0, #1
    // bne _021F210E
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F2118(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #9
    // bhi _021F221C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F2134: ; jump table
    // ldr r0, [r4, #0x1c]
    // ldr r0, [r0, #0xc]
    // bl Save_VarsFlags_Get
    // bl CheckFlag99A
    // cmp r0, #0
    // bne _021F2172
    // bl SndRadio_GetSeqNo
    // cmp r0, #0
    // bne _021F2172
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl FieldBGM_SetOverride
    // ldr r0, [r4, #0x1c]
    // ldr r1, _021F2328 ; =0x000003F6
    // mov r2, #1
    // bl FieldBGM_TryFadeOut
    // ldr r0, [r4]
    // add r0, r0, #1
    // add r0, r0, #1
    // str r0, [r4]
    // b _021F2324
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #0xa
    // ble _021F221C
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021F2324
    // ldr r0, [r4, #0xc]
    // cmp r0, #1
    // ldr r0, [r4, #0x1c]
    // bne _021F21A8
    // add r1, r4, #0
    // add r1, #0xc
    // bl ov01_021F3054
    // mov r0, #5
    // str r0, [r4]
    // b _021F2324
    // mov r1, #0xb
    // bl ov02_02250780
    // cmp r0, #0
    // beq _021F21C4
    // mov r0, #0x42
    // ldr r1, [r4, #0x1c]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl FieldSystem_UnkSub108_AddMonMood
    // mov r1, #2
    // b _021F21C6
    // mov r1, #1
    // ldr r0, [r4, #0x1c]
    // bl ov02_022507B4
    // mov r0, #3
    // str r0, [r4]
    // b _021F2324
    // ldr r0, [r4, #0x14]
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // add r5, r0, #0
    // ldr r0, [r4, #0x14]
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // lsl r0, r5, #0x10
    // lsl r1, r1, #0x18
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x18
    // bl PlayCry
    // mov r0, #4
    // str r0, [r4]
    // b _021F2324
    // bl IsCryFinished
    // cmp r0, #0
    // bne _021F221C
    // add r0, r5, #0
    // bl ov01_02205EE0
    // mov r0, #6
    // str r0, [r4]
    // b _021F2324
    // add r0, r4, #0
    // add r0, #0xc
    // bl ov01_021F3068
    // cmp r0, #1
    // beq _021F221E
    // b _021F2324
    // ldr r0, [r4, #0x1c]
    // bl ov01_02205D68
    // mov r0, #6
    // str r0, [r4]
    // b _021F2324
    // ldr r0, [r4, #0x20]
    // bl PlayerAvatar_GetXCoord
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // bl GetDeltaXByFacingDirection
    // add r6, r0, #0
    // ldr r0, [r4, #0x20]
    // bl PlayerAvatar_GetZCoord
    // add r7, r0, #0
    // ldr r0, [r4, #4]
    // bl GetDeltaYByFacingDirection
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [r4, #0x24]
    // ldr r3, [r4, #4]
    // add r1, r5, r6
    // add r2, r7, r2
    // bl ov01_021FE7DC
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #0x20]
    // ldr r1, [r4, #0x28]
    // bl PlayerAvatar_SetUnk34
    // ldr r0, [r4, #0x20]
    // mov r1, #2
    // bl PlayerAvatar_SetState
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021F2324
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #0xa
    // ble _021F2324
    // ldr r0, [r4, #0x20]
    // bl PlayerAvatar_GetGender
    // add r1, r0, #0
    // mov r0, #0
    // bl PlayerAvatar_GetSpriteByStateAndGender
    // add r1, r0, #0
    // ldr r0, [r4, #0x20]
    // bl ov01_021F3084
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021F2324
    // ldr r0, [r4, #0x24]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _021F2324
    // ldr r0, [r4, #4]
    // mov r1, #0x34
    // bl sub_0206234C
    // add r1, r0, #0
    // ldr r0, [r4, #0x24]
    // bl MapObject_SetHeldMovement
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021F2324
    // ldr r0, [r4, #0x24]
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // beq _021F2324
    // ldr r0, [r4, #0x24]
    // bl MapObject_ClearHeldMovementIfActive
    // ldr r0, [r4, #0x28]
    // mov r1, #1
    // bl ov01_021FE9F4
    // ldr r0, [r4, #0x20]
    // bl PlayerAvatar_GetGender
    // add r1, r0, #0
    // mov r0, #2
    // bl PlayerAvatar_GetSpriteByStateAndGender
    // add r1, r0, #0
    // ldr r0, [r4, #0x20]
    // bl ov01_021F3084
    // ldr r0, [r4, #0x1c]
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _021F2312
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #0x1c]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov01_02205790
    // ldr r0, [r4, #0x1c]
    // bl FollowMon_GetMapObject
    // mov r1, #0x38
    // bl sub_0205FC94
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl ov01_021E7F00
    // add r0, r4, #0
    // bl ov01_021F30F4
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F2328: .word 0x000003F6
    // TODO: decompile
}


void ov01_021F232C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r3, #1
    // bne _021F2342
    // add r0, r5, #0
    // bl PlayerAvatar_GetState
    // cmp r0, #2
    // beq _021F2346
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // bl PlayerAvatar_GetMapObject
    // add r1, r0, #0
    // add r0, r5, #0
    // add r2, r4, #0
    // bl sub_0205DA34
    // cmp r0, #0x20
    // bne _021F235E
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r1, #0x20
    // bic r0, r1
    // beq _021F2368
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // bl ov01_021F2378
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F2378(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0x18
    // add r5, r1, #0
    // add r7, r2, #0
    // bl ov01_021F30D0
    // add r4, r0, #0
    // str r6, [r4, #4]
    // str r5, [r4, #8]
    // str r7, [r4, #0xc]
    // add r0, r7, #0
    // bl PlayerAvatar_GetMapObject
    // str r0, [r4, #0x10]
    // add r0, r7, #0
    // bl PlayerAvatar_GetUnk34
    // str r0, [r4, #0x14]
    // cmp r0, #0
    // bne _021F23A6
    // bl GF_AssertFail
    // ldr r1, _021F23B4 ; =ov01_021F23B8
    // add r0, r5, #0
    // add r2, r4, #0
    // bl FieldSystem_CreateTask
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F23B4: .word ov01_021F23B8
    // TODO: decompile
}


void ov01_021F23B8(void) {
    // push {r4, lr}
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _021F23D0
    // cmp r0, #1
    // beq _021F2412
    // cmp r0, #2
    // beq _021F24B8
    // b _021F24F0
    // ldr r0, [r4, #0x10]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // beq _021F23DC
    // b _021F24F0
    // ldr r0, [r4, #0xc]
    // bl PlayerAvatar_GetGender
    // add r1, r0, #0
    // mov r0, #0
    // bl PlayerAvatar_GetSpriteByStateAndGender
    // add r1, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov01_021F3084
    // ldr r0, [r4, #4]
    // mov r1, #0x34
    // bl sub_0206234C
    // add r1, r0, #0
    // ldr r0, [r4, #0x10]
    // bl MapObject_SetHeldMovement
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl ov01_021FE9F4
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // b _021F24F0
    // ldr r0, [r4, #0x10]
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // beq _021F24F0
    // ldr r0, [r4, #0x10]
    // bl MapObject_ClearHeldMovementIfActive
    // ldr r0, [r4, #0x14]
    // bl ov01_021F1640
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl PlayerAvatar_SetUnk34
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl PlayerAvatar_SetState
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl ov01_021E7F00
    // ldr r0, [r4, #8]
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _021F2476
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #8]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov01_02205790
    // ldr r0, [r4, #8]
    // bl FollowMon_GetMapObject
    // mov r1, #1
    // bl sub_02069DC8
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl ov01_0220609C
    // ldr r0, [r4, #8]
    // bl FollowMon_GetMapObject
    // mov r1, #0x30
    // bl sub_0205FC94
    // ldr r0, [r4, #8]
    // ldr r0, [r0, #0xc]
    // bl Save_VarsFlags_Get
    // bl CheckFlag99A
    // cmp r0, #0
    // bne _021F249A
    // ldr r0, [r4, #8]
    // ldr r1, [r0, #0x20]
    // ldr r1, [r1]
    // bl FieldBGM_GetForMapHeader
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // mov r2, #4
    // bl FieldBGM_TryFadeOut
    // bl SndRadio_GetSeqNo
    // cmp r0, #0
    // beq _021F24AE
    // mov r0, #0x28
    // strh r0, [r4, #2]
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // b _021F24F0
    // add r0, r4, #0
    // bl ov01_021F30F4
    // mov r0, #1
    // pop {r4, pc}
    // bl SndRadio_GetSeqNo
    // cmp r0, #0
    // bne _021F24D2
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl ov01_021E7F00
    // add r0, r4, #0
    // bl ov01_021F30F4
    // mov r0, #1
    // pop {r4, pc}
    // ldrh r0, [r4, #2]
    // sub r0, r0, #1
    // strh r0, [r4, #2]
    // ldrh r0, [r4, #2]
    // cmp r0, #0
    // bne _021F24F0
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl ov01_021E7F00
    // add r0, r4, #0
    // bl ov01_021F30F4
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F24F4(void) {
    // push {r4, r5, r6, lr}
    // add r4, r2, #0
    // add r6, r0, #0
    // add r5, r1, #0
    // cmp r4, #1
    // bne _021F250E
    // cmp r3, #1
    // bne _021F250E
    // add r0, r5, #0
    // bl PlayerAvatar_GetState
    // cmp r0, #2
    // beq _021F2512
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_0205DFEC
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl MetatileBehavior_IsWaterfall
    // cmp r0, #0
    // bne _021F252A
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov01_021F28EC
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


u32 ov01_021F2538(void) {
    PlayerAvatar_GetMapObject(r1);
    MapObject_AreBitsSetForMovementScriptInit();
    return 0;
}


void ov01_021F2548(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0x30
    // add r7, r1, #0
    // add r5, r2, #0
    // bl ov01_021F30D0
    // add r4, r0, #0
    // str r7, [r4, #4]
    // str r6, [r4, #0xc]
    // ldr r0, [r6, #0x40]
    // str r0, [r4, #0x10]
    // bl PlayerAvatar_GetMapObject
    // add r2, r4, #0
    // str r0, [r4, #0x14]
    // add r2, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4, #0x1c]
    // cmp r0, #1
    // bne _021F257C
    // mov r0, #5
    // b _021F257E
    // mov r0, #6
    // strh r0, [r4, #2]
    // ldr r0, [r6, #0x10]
    // ldr r1, _021F258C ; =ov01_021F2628
    // add r2, r4, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F258C: .word ov01_021F2628
    // TODO: decompile
}


void CallFieldTask_RockClimb(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r2, #0
    // add r5, r1, #0
    // bl TaskManager_GetFieldSystem
    // add r4, r0, #0
    // add r1, r6, #0
    // bl ov01_021F3100
    // add r1, r0, #0
    // add r0, r4, #0
    // add r2, sp, #0
    // bl ov01_021F3040
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetState
    // sub r0, r0, #1
    // cmp r0, #1
    // bhi _021F25C0
    // mov r0, #1
    // str r0, [sp]
    // b _021F25D8
    // add r0, r4, #0
    // bl ov01_02206268
    // cmp r0, #0
    // beq _021F25D8
    // add r0, r4, #0
    // bl ov01_022062CC
    // cmp r6, r0
    // bne _021F25D8
    // mov r0, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, sp, #0
    // bl ov01_021F2548
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void MetatileBehavior_IsRockClimbInDirection(void) {
    // push {r3, lr}
    // cmp r1, #3
    // bhi _021F2622
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F25FA: ; jump table
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205B834
    // cmp r0, #1
    // bne _021F2622
    // mov r0, #1
    // pop {r3, pc}
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205B840
    // cmp r0, #1
    // bne _021F2622
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void ov01_021F2628(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // bl TaskManager_GetEnvironment
    // ldr r7, _021F268C ; =ov01_022069D0
    // add r4, r0, #0
    // ldr r0, [r4, #0x1c]
    // cmp r0, #1
    // bne _021F2648
    // ldrh r2, [r4]
    // add r0, r4, #0
    // add r1, r6, #0
    // lsl r2, r2, #2
    // ldr r2, [r7, r2]
    // blx r2
    // b _021F2656
    // ldrh r2, [r4]
    // add r0, r4, #0
    // add r1, r6, #0
    // lsl r3, r2, #2
    // ldr r2, _021F2690 ; =ov01_022069F0
    // ldr r2, [r2, r3]
    // blx r2
    // add r5, r0, #0
    // cmp r5, #2
    // beq _021F2634
    // cmp r5, #1
    // bne _021F2686
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #0xc]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov01_02205790
    // ldr r0, [r4, #0xc]
    // bl FollowMon_GetMapObject
    // mov r1, #1
    // bl sub_02069DC8
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl ov01_0220609C
    // add r0, r4, #0
    // bl ov01_021F30F4
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F268C: .word ov01_022069D0
    // _021F2690: .word ov01_022069F0
    // TODO: decompile
}


void ov01_021F2694(void) {
    ov01_021F3054(0);
}


void ov01_021F26AC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x1c
    // bl ov01_021F3068
    // cmp r0, #1
    // bne _021F26C6
    // ldr r0, [r4, #0xc]
    // bl ov01_02205D68
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F26CC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ov02_02250780
    // cmp r0, #0
    // beq _021F26EE
    // mov r0, #0x42
    // ldr r1, [r4, #0xc]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl FieldSystem_UnkSub108_AddMonMood
    // mov r1, #2
    // b _021F26F0
    // mov r1, #1
    // ldr r0, [r4, #0xc]
    // bl ov02_022507B4
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F2700(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x24]
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // add r4, r0, #0
    // ldr r0, [r5, #0x24]
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // lsl r0, r4, #0x10
    // lsl r1, r1, #0x18
    // lsr r0, r0, #0x10
    // lsr r1, r1, #0x18
    // bl PlayCry
    // ldrh r0, [r5]
    // add r0, r0, #1
    // strh r0, [r5]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F2734(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r1, #0
    // bl IsCryFinished
    // cmp r0, #0
    // beq _021F2746
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov01_02205EE0
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F2758(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // bl PlayerAvatar_GetXCoord
    // add r4, r0, #0
    // ldr r0, [r5, #4]
    // bl GetDeltaXByFacingDirection
    // add r6, r0, #0
    // ldr r0, [r5, #0x10]
    // bl PlayerAvatar_GetZCoord
    // add r7, r0, #0
    // ldr r0, [r5, #4]
    // bl GetDeltaYByFacingDirection
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x14]
    // ldr r3, [r5, #4]
    // add r1, r4, r6
    // add r2, r7, r2
    // bl ov01_021FEAB0
    // str r0, [r5, #0x18]
    // ldr r0, [r5, #0xc]
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _021F27A2
    // ldr r0, [r5, #0xc]
    // bl FollowMon_GetMapObject
    // bl MapObject_UnpauseMovement
    // ldr r0, [r5, #0xc]
    // bl ov02_0224D9A4
    // str r0, [r5, #0x2c]
    // ldr r0, _021F27BC ; =SEQ_SE_DP_UG_023
    // bl PlaySE
    // ldrh r0, [r5]
    // add r0, r0, #1
    // strh r0, [r5]
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F27BC: .word SEQ_SE_DP_UG_023
    // TODO: decompile
}


void ov01_021F27C0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x14]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _021F27E4
    // ldr r0, [r4, #4]
    // mov r1, #0x34
    // bl sub_0206234C
    // add r1, r0, #0
    // ldr r0, [r4, #0x14]
    // bl MapObject_SetHeldMovement
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F27E8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x14]
    // bl MapObject_IsMovementPaused
    // cmp r0, #1
    // bne _021F2804
    // ldrh r0, [r4]
    // mov r1, #1
    // add r0, r0, #1
    // strh r0, [r4]
    // ldr r0, [r4, #0x18]
    // bl ov01_021FEB30
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F2808(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x14]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _021F282C
    // ldr r0, [r4, #4]
    // mov r1, #0x10
    // bl sub_0206234C
    // add r1, r0, #0
    // ldr r0, [r4, #0x14]
    // bl MapObject_SetHeldMovement
    // ldrh r0, [r4]
    // add r0, r0, #1
    // strh r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F2830(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x14]
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // bne _021F2842
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x14]
    // bl MapObject_GetNextFacingDirection
    // add r4, r0, #0
    // ldr r0, [r5, #0x14]
    // add r1, r4, #0
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // add r1, r4, #0
    // bl MetatileBehavior_IsRockClimbInDirection
    // cmp r0, #1
    // bne _021F2868
    // ldrh r0, [r5, #2]
    // strh r0, [r5]
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #4]
    // mov r1, #0x34
    // bl sub_0206234C
    // add r1, r0, #0
    // ldr r0, [r5, #0x14]
    // bl MapObject_SetHeldMovement
    // mov r1, #0
    // str r1, [r5, #8]
    // ldrh r0, [r5]
    // add r0, r0, #1
    // strh r0, [r5]
    // ldr r0, [r5, #0x18]
    // bl ov01_021FEB30
    // ldr r0, [r5, #0x2c]
    // bl ov02_0224D9B8
    // mov r0, #0
    // str r0, [r5, #0x2c]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F2894(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x14]
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // bne _021F28A6
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0x14]
    // bl MapObject_ClearHeldMovementIfActive
    // ldr r0, [r4, #0x18]
    // bl ov01_021F1640
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F28B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0x54
    // add r7, r1, #0
    // add r5, r2, #0
    // bl ov01_021F30D0
    // add r4, r0, #0
    // str r7, [r4, #4]
    // str r6, [r4, #0x34]
    // ldr r0, [r6, #0x40]
    // str r0, [r4, #0x38]
    // ldr r0, [r6, #0x40]
    // bl PlayerAvatar_GetMapObject
    // str r0, [r4, #0x3c]
    // cmp r5, #0
    // beq _021F28E8
    // add r2, r4, #0
    // add r2, #0x40
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F28EC(void) {
    // push {r4, lr}
    // mov r2, #0
    // add r4, r0, #0
    // bl ov01_021F28B8
    // add r2, r0, #0
    // ldr r1, _021F2904 ; =ov01_021F2944
    // add r0, r4, #0
    // bl FieldSystem_CreateTask
    // pop {r4, pc}
    // nop
    // _021F2904: .word ov01_021F2944
    // TODO: decompile
}


void CallFieldTask_Waterfall(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r2, #0
    // add r6, r0, #0
    // add r7, r1, #0
    // bl TaskManager_GetFieldSystem
    // add r4, r0, #0
    // add r1, r5, #0
    // bl ov01_021F3100
    // add r1, r0, #0
    // add r0, r4, #0
    // add r2, sp, #0
    // bl ov01_021F3040
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, sp, #0
    // bl ov01_021F28B8
    // add r2, r0, #0
    // ldr r1, _021F2940 ; =ov01_021F2944
    // add r0, r6, #0
    // bl TaskManager_Call
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F2940: .word ov01_021F2944
    // TODO: decompile
}


void ov01_021F2944(void) {
    // push {r4, r5, r6, lr}
    // bl TaskManager_GetEnvironment
    // ldr r6, _021F2990 ; =ov01_022069BC
    // ldr r4, _021F2994 ; =ov01_022069A8
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // bne _021F2962
    // ldr r1, [r5]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // blx r1
    // b _021F296C
    // ldr r1, [r5]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r6, r1]
    // blx r1
    // cmp r0, #2
    // beq _021F2950
    // cmp r0, #1
    // bne _021F298A
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x34]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov01_02205790
    // add r0, r5, #0
    // bl ov01_021F30F4
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _021F2990: .word ov01_022069BC
    // _021F2994: .word ov01_022069A8
    // TODO: decompile
}


void ov01_021F2998(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x40]
    // cmp r0, #1
    // bne _021F29B6
    // add r1, r4, #0
    // ldr r0, [r4, #0x34]
    // add r1, #0x40
    // bl ov01_021F3054
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #2
    // str r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F29C0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x40
    // bl ov01_021F3068
    // cmp r0, #1
    // bne _021F29DA
    // ldr r0, _021F29E0 ; =SEQ_SE_DP_FW463
    // bl PlaySE
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _021F29E0: .word SEQ_SE_DP_FW463
    // TODO: decompile
}


void ov01_021F29E4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // ldr r0, [r5, #0x3c]
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // mov r0, #0
    // bl GetDeltaXByFacingDirection
    // lsl r0, r0, #1
    // add r4, r4, r0
    // ldr r0, [r5, #0x3c]
    // bl MapObject_GetZCoord
    // add r6, r0, #0
    // mov r0, #0
    // bl GetDeltaYByFacingDirection
    // lsl r0, r0, #1
    // add r6, r6, r0
    // add r2, r5, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, #0x28
    // bl sub_020611C8
    // ldr r0, [r5, #0x30]
    // mov r1, #1
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x34]
    // ldr r2, [r5, #0x2c]
    // ldr r3, [r5, #0x28]
    // bl sub_02054790
    // str r0, [r5, #0x2c]
    // add r0, sp, #8
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021F2A3C
    // bl GF_AssertFail
    // str r4, [r5, #0xc]
    // ldr r0, [r5, #0x2c]
    // asr r1, r0, #3
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [r5, #0x10]
    // str r6, [r5, #0x14]
    // ldr r0, [r5, #0x3c]
    // add r1, sp, #0x18
    // bl MapObject_CopyPositionVector
    // ldr r1, [sp, #0x20]
    // ldr r0, [r5, #0x30]
    // cmp r1, r0
    // bgt _021F2A62
    // bl GF_AssertFail
    // ldr r1, [sp, #0x1c]
    // ldr r0, [r5, #0x2c]
    // cmp r1, r0
    // blt _021F2A6E
    // bl GF_AssertFail
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r1, [r5, #0x2c]
    // ldr r0, [sp, #0x1c]
    // add r3, sp, #0xc
    // sub r2, r1, r0
    // ldr r1, [r5, #0x30]
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #0x10]
    // sub r1, r1, r0
    // asr r0, r2, #5
    // lsr r0, r0, #0x1a
    // add r0, r2, r0
    // asr r0, r0, #6
    // str r0, [sp, #0x10]
    // asr r0, r1, #5
    // lsr r0, r0, #0x1a
    // add r0, r1, r0
    // add r2, r5, #0
    // str r1, [sp, #0x14]
    // asr r0, r0, #6
    // str r0, [sp, #0x14]
    // ldmia r3!, {r0, r1}
    // add r2, #0x1c
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r5, #0x34]
    // bl ov02_0224D598
    // str r0, [r5, #0x50]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // mov r0, #0
    // add sp, #0x24
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F2AB8(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #0x3c]
    // add r1, sp, #0
    // bl MapObject_CopyPositionVector
    // ldr r1, [sp, #4]
    // ldr r0, [r4, #0x20]
    // add r1, r1, r0
    // str r1, [sp, #4]
    // ldr r0, [r4, #0x2c]
    // cmp r1, r0
    // ble _021F2AD6
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x3c]
    // add r1, sp, #0
    // bl MapObject_SetPositionVector
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #0x20
    // blt _021F2AF2
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_021F2AF8(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #0x3c]
    // add r1, sp, #0
    // bl MapObject_CopyPositionVector
    // ldr r1, [sp, #4]
    // ldr r0, [r4, #0x20]
    // add r1, r1, r0
    // str r1, [sp, #4]
    // ldr r0, [r4, #0x2c]
    // cmp r1, r0
    // ble _021F2B16
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [r4, #0x24]
    // add r1, r1, r0
    // str r1, [sp, #8]
    // ldr r0, [r4, #0x30]
    // cmp r1, r0
    // bge _021F2B26
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x3c]
    // add r1, sp, #0
    // bl MapObject_SetPositionVector
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #0x40
    // bge _021F2B3E
    // add sp, #0xc
    // mov r0, #0
    // pop {r3, r4, pc}
    // ldr r1, [sp, #8]
    // ldr r0, [r4, #0x30]
    // cmp r1, r0
    // beq _021F2B4A
    // bl GF_AssertFail
    // ldr r1, [sp, #4]
    // ldr r0, [r4, #0x2c]
    // cmp r1, r0
    // beq _021F2B56
    // bl GF_AssertFail
    // ldr r0, [r4, #0x3c]
    // ldr r1, [r4, #0xc]
    // bl MapObject_SetCurrentX
    // ldr r0, [r4, #0x3c]
    // ldr r1, [r4, #0x10]
    // bl MapObject_SetCurrentY
    // ldr r0, [r4, #0x3c]
    // ldr r1, [r4, #0x14]
    // bl MapObject_SetCurrentZ
    // ldr r0, [r4, #0x3c]
    // bl sub_02060F78
    // ldr r0, [r4, #0x50]
    // bl ov02_0224D5AC
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_021F2B80(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x40]
    // cmp r0, #1
    // bne _021F2B9E
    // add r1, r4, #0
    // ldr r0, [r4, #0x34]
    // add r1, #0x40
    // bl ov01_021F3054
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #2
    // str r0, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F2BA4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x40
    // bl ov01_021F3068
    // cmp r0, #1
    // bne _021F2BBE
    // ldr r0, _021F2BC4 ; =SEQ_SE_DP_FW463
    // bl PlaySE
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _021F2BC4: .word SEQ_SE_DP_FW463
    // TODO: decompile
}


void ov01_021F2BC8(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, [r5, #0x3c]
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // mov r0, #1
    // bl GetDeltaXByFacingDirection
    // lsl r0, r0, #1
    // add r4, r4, r0
    // ldr r0, [r5, #0x3c]
    // bl MapObject_GetZCoord
    // add r6, r0, #0
    // mov r0, #1
    // bl GetDeltaYByFacingDirection
    // lsl r0, r0, #1
    // add r6, r6, r0
    // add r2, r5, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, #0x28
    // bl sub_020611C8
    // add r1, r5, #0
    // ldr r0, [r5, #0x34]
    // add r1, #0x28
    // bl sub_0206121C
    // mov r0, #0
    // str r0, [r5, #0x18]
    // str r4, [r5, #0xc]
    // ldr r0, [r5, #0x2c]
    // asr r1, r0, #3
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r0, [r5, #0x10]
    // str r6, [r5, #0x14]
    // ldr r0, [r5, #0x3c]
    // add r1, sp, #0xc
    // bl MapObject_CopyPositionVector
    // ldr r1, [sp, #0x14]
    // ldr r0, [r5, #0x30]
    // cmp r1, r0
    // blt _021F2C32
    // bl GF_AssertFail
    // ldr r1, [sp, #0x10]
    // ldr r0, [r5, #0x2c]
    // cmp r1, r0
    // bgt _021F2C3E
    // bl GF_AssertFail
    // mov r0, #0
    // str r0, [sp]
    // ldr r1, [r5, #0x2c]
    // ldr r0, [sp, #0x10]
    // add r3, sp, #0
    // sub r2, r1, r0
    // ldr r1, [r5, #0x30]
    // ldr r0, [sp, #0x14]
    // str r2, [sp, #4]
    // sub r1, r1, r0
    // asr r0, r2, #5
    // lsr r0, r0, #0x1a
    // add r0, r2, r0
    // asr r0, r0, #6
    // str r0, [sp, #4]
    // asr r0, r1, #5
    // lsr r0, r0, #0x1a
    // add r0, r1, r0
    // add r2, r5, #0
    // str r1, [sp, #8]
    // asr r0, r0, #6
    // str r0, [sp, #8]
    // ldmia r3!, {r0, r1}
    // add r2, #0x1c
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r5, #0x34]
    // bl ov02_0224D598
    // str r0, [r5, #0x50]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // mov r0, #0
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F2C88(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #0x3c]
    // add r1, sp, #0
    // bl MapObject_CopyPositionVector
    // ldr r1, [sp, #8]
    // ldr r0, [r4, #0x24]
    // add r1, r1, r0
    // str r1, [sp, #8]
    // ldr r0, [r4, #0x30]
    // cmp r1, r0
    // ble _021F2CA8
    // str r0, [sp, #8]
    // b _021F2CB0
    // ldr r1, [r4, #0x18]
    // ldr r0, [r4, #0x24]
    // add r0, r1, r0
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x3c]
    // add r1, sp, #0
    // bl MapObject_SetPositionVector
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #0x20
    // blt _021F2CCC
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_021F2CD4(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #0x3c]
    // add r1, sp, #0
    // bl MapObject_CopyPositionVector
    // ldr r1, [sp, #4]
    // ldr r0, [r4, #0x20]
    // add r1, r1, r0
    // str r1, [sp, #4]
    // ldr r0, [r4, #0x2c]
    // cmp r1, r0
    // bge _021F2CF2
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [r4, #0x24]
    // add r1, r1, r0
    // str r1, [sp, #8]
    // ldr r0, [r4, #0x30]
    // cmp r1, r0
    // ble _021F2D04
    // str r0, [sp, #8]
    // b _021F2D0C
    // ldr r1, [r4, #0x18]
    // ldr r0, [r4, #0x24]
    // add r0, r1, r0
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x3c]
    // add r1, sp, #0
    // bl MapObject_SetPositionVector
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #0x40
    // bge _021F2D24
    // add sp, #0xc
    // mov r0, #0
    // pop {r3, r4, pc}
    // ldr r1, [sp, #8]
    // ldr r0, [r4, #0x30]
    // cmp r1, r0
    // beq _021F2D30
    // bl GF_AssertFail
    // ldr r1, [sp, #4]
    // ldr r0, [r4, #0x2c]
    // cmp r1, r0
    // beq _021F2D3C
    // bl GF_AssertFail
    // ldr r0, [r4, #0x3c]
    // ldr r1, [r4, #0xc]
    // bl MapObject_SetCurrentX
    // ldr r0, [r4, #0x3c]
    // ldr r1, [r4, #0x10]
    // bl MapObject_SetCurrentY
    // ldr r0, [r4, #0x3c]
    // ldr r1, [r4, #0x14]
    // bl MapObject_SetCurrentZ
    // ldr r0, [r4, #0x3c]
    // bl sub_02060F78
    // ldr r0, [r4, #0x50]
    // bl ov02_0224D5AC
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_021F2D68(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0x54
    // add r7, r1, #0
    // add r5, r2, #0
    // bl ov01_021F30D0
    // add r4, r0, #0
    // str r7, [r4, #4]
    // str r6, [r4, #0x34]
    // ldr r0, [r6, #0x40]
    // str r0, [r4, #0x38]
    // bl PlayerAvatar_GetMapObject
    // add r2, r4, #0
    // str r0, [r4, #0x3c]
    // add r2, #0x40
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r6, #0x10]
    // ldr r1, _021F2DA0 ; =ov01_021F2DD0
    // add r2, r4, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F2DA0: .word ov01_021F2DD0
    // TODO: decompile
}


void CallFieldTask_Whirlpool(void) {
    TaskManager_GetFieldSystem();
    ov01_021F3100(r5);
    ov01_021F3040(r4, r0);
    ov01_021F2D68(r4, r6);
}


void ov01_021F2DD0(void) {
    // push {r4, r5, r6, lr}
    // bl TaskManager_GetEnvironment
    // ldr r6, _021F2E04 ; =ov01_02206994
    // add r5, r0, #0
    // ldr r1, [r5]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r6, r1]
    // blx r1
    // add r4, r0, #0
    // cmp r4, #2
    // beq _021F2DDA
    // cmp r4, #1
    // bne _021F2E00
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x34]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov01_02205790
    // add r0, r5, #0
    // bl ov01_021F30F4
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _021F2E04: .word ov01_02206994
    // TODO: decompile
}


void ov01_021F2E08(void) {
    ov01_021F3054(0);
}


void ov01_021F2E20(void) {
    ov01_021F3068(0);
}


void ov01_021F2E38(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _021F2E50
    // ldr r0, [r4, #0x34]
    // bl FollowMon_GetMapObject
    // bl MapObject_UnpauseMovement
    // ldr r0, [r4, #0x34]
    // bl ov02_0224D67C
    // str r0, [r4, #0x50]
    // ldr r0, _021F2E68 ; =SEQ_SE_DP_FW463
    // bl PlaySE
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // _021F2E68: .word SEQ_SE_DP_FW463
    // TODO: decompile
}


void ov01_021F2E6C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x3c]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _021F2E90
    // ldr r0, [r4, #4]
    // mov r1, #4
    // bl sub_0206234C
    // add r1, r0, #0
    // ldr r0, [r4, #0x3c]
    // bl MapObject_SetHeldMovement
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F2E94(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x3c]
    // bl MapObject_IsMovementPaused
    // cmp r0, #0
    // bne _021F2EA6
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0x3c]
    // bl MapObject_GetNextFacingDirection
    // ldr r0, [r4, #0x3c]
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl MetatileBehavior_IsWhirlpool
    // cmp r0, #1
    // bne _021F2EC6
    // mov r0, #3
    // str r0, [r4]
    // mov r0, #2
    // pop {r4, pc}
    // ldr r0, [r4, #0x50]
    // bl ov02_0224D690
    // mov r0, #0
    // str r0, [r4, #0x50]
    // ldr r0, [r4, #0x3c]
    // bl MapObject_ClearHeldMovementIfActive
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F2EDC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl PlayerAvatar_GetMapObject
    // add r5, r0, #0
    // bl sub_0205F73C
    // cmp r0, #0
    // beq _021F2F22
    // add r0, r4, #0
    // bl PlayerAvatar_GetState
    // cmp r0, #0
    // bne _021F2F22
    // add r0, r5, #0
    // bl MapObject_GetSpriteID
    // sub r0, #0xc4
    // cmp r0, #1
    // bls _021F2F22
    // add r0, r4, #0
    // bl PlayerAvatar_GetTransitionFlags
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #0x40
    // bl Field_PlayerAvatar_OrrTransitionFlags
    // add r0, r4, #0
    // bl Field_PlayerAvatar_ApplyTransitionFlags
    // add r0, r4, #0
    // add r1, r5, #0
    // bl Field_PlayerAvatar_OrrTransitionFlags
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F2F24(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl PlayerAvatar_GetMapObject
    // add r5, r0, #0
    // bl sub_0205F73C
    // cmp r0, #0
    // beq _021F2F6C
    // add r0, r4, #0
    // bl PlayerAvatar_GetState
    // cmp r0, #0
    // bne _021F2F6C
    // add r0, r5, #0
    // bl MapObject_GetSpriteID
    // cmp r0, #0xc4
    // beq _021F2F4E
    // cmp r0, #0xc5
    // bne _021F2F6C
    // add r0, r4, #0
    // bl PlayerAvatar_GetTransitionFlags
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl Field_PlayerAvatar_OrrTransitionFlags
    // add r0, r4, #0
    // bl Field_PlayerAvatar_ApplyTransitionFlags
    // add r0, r4, #0
    // add r1, r5, #0
    // bl Field_PlayerAvatar_OrrTransitionFlags
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void Field_PlayerMovementSavingSet(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r6, [r7, #0x40]
    // add r0, r6, #0
    // bl PlayerAvatar_GetState
    // add r4, r0, #0
    // beq _021F2F88
    // cmp r4, #3
    // beq _021F2F88
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl PlayerAvatar_GetMapObject
    // str r0, [sp]
    // mov r0, #4
    // mov r1, #0x10
    // bl Heap_AllocAtEnd
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [r5]
    // str r7, [r5, #8]
    // str r6, [r5, #0xc]
    // str r4, [r5, #4]
    // cmp r4, #0
    // bne _021F2FAC
    // mov r4, #0x80
    // b _021F2FBC
    // cmp r4, #3
    // bne _021F2FB6
    // mov r4, #1
    // lsl r4, r4, #0xe
    // b _021F2FBC
    // bl GF_AssertFail
    // mov r4, #0x80
    // ldr r0, [sp]
    // bl MapObject_UnpauseMovement
    // add r0, r6, #0
    // add r1, r4, #0
    // bl Field_PlayerAvatar_OrrTransitionFlags
    // add r0, r6, #0
    // bl Field_PlayerAvatar_ApplyTransitionFlags
    // ldr r0, _021F2FE8 ; =ov01_021F3030
    // ldr r2, _021F2FEC ; =0x0000FFFF
    // add r1, r5, #0
    // bl SysTask_CreateOnMainQueue
    // add r4, r0, #0
    // bne _021F2FE2
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F2FE8: .word ov01_021F3030
    // _021F2FEC: .word 0x0000FFFF
    // TODO: decompile
}


void Field_PlayerMovementSavingClear(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // beq _021F302E
    // bl SysTask_GetData
    // add r6, r0, #0
    // ldr r0, [r6, #4]
    // ldr r4, [r6, #0xc]
    // cmp r0, #0
    // bne _021F300C
    // add r0, r4, #0
    // bl ov01_021F1B38
    // b _021F3022
    // cmp r0, #3
    // bne _021F3018
    // add r0, r4, #0
    // bl ov01_021F1C30
    // b _021F3022
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl ov01_021F1B38
    // add r0, r6, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F3030(void) {
    PlayerAvatar_GetMapObject(*((u32*)(r1 + 0xc)));
    sub_0205F484();
}


void ov01_021F3040(void) {
    PlayerAvatar_GetGender(1);
}


void ov01_021F3054(void) {
    ov02_02249458(0);
}


void ov01_021F3068(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // bl ov02_0224953C
    // cmp r0, #1
    // bne _021F3080
    // ldr r0, [r4, #0xc]
    // bl ov02_02249548
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F3084(void) {
    PlayerAvatar_GetMapObject();
    ov01_021FA930(r4);
}


void ov01_021F3094(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // bl PlayerAvatar_GetXCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl GetDeltaXByFacingDirection
    // add r7, r0, #0
    // add r0, r4, #0
    // bl PlayerAvatar_GetZCoord
    // str r0, [sp]
    // add r0, r5, #0
    // bl GetDeltaYByFacingDirection
    // add r5, r0, #0
    // add r0, r4, #0
    // bl PlayerAvatar_GetMapObject
    // bl MapObject_GetManager
    // ldr r2, [sp]
    // add r1, r6, r7
    // add r2, r2, r5
    // mov r3, #0
    // bl MapObjectManager_GetFirstObjectWithXAndZ
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F30D0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #4
    // add r1, r5, #0
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // bne _021F30E4
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r5, #0
    // bl memset
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F30F4(void) {
    Heap_FreeExplicit();
}


void ov01_021F3100(void) {
    SaveArray_Party_Get(*((u32*)(r0 + 0xc)));
    Party_GetMonByIndex(r4);
}

