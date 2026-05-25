/* Decompiled from asm/unk_020658D4.s */
#include "global.h"

void sub_020658D4(void) {
}



void sub_02065900(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02065CD0
    // cmp r0, #0
    // beq _02065930
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_ClearFlag18
    // ldr r6, _02065934 ; =_020FE404
    // ldrb r2, [r4]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // ldr r2, [r6, r2]
    // blx r2
    // cmp r0, #1
    // beq _02065920
    // pop {r4, r5, r6, pc}
    // nop
    // _02065934: .word _020FE404
    // TODO: decompile
}



void sub_02065938(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02065CD0
    // cmp r0, #0
    // beq _02065960
    // ldr r6, _02065964 ; =_020FE414
    // ldrb r2, [r4]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // ldr r2, [r6, r2]
    // blx r2
    // cmp r0, #1
    // beq _02065950
    // pop {r4, r5, r6, pc}
    // nop
    // _02065964: .word _020FE414
    // TODO: decompile
}



void sub_02065968(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02065CD0
    // cmp r0, #0
    // beq _02065990
    // ldr r6, _02065994 ; =_020FE424
    // ldrb r2, [r4]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // ldr r2, [r6, r2]
    // blx r2
    // cmp r0, #1
    // beq _02065980
    // pop {r4, r5, r6, pc}
    // nop
    // _02065994: .word _020FE424
    // TODO: decompile
}



void sub_02065998(void) {
    // bx lr
    // TODO: decompile
}



void sub_0206599C(void) {
}



void sub_020659A8(void) {
}



void sub_020659B8(void) {
}



void sub_020659CC(void) {
    MapObject_GetFieldSystem();
    sub_0205F394(r5);
    MapObject_ClearSingleMovement(r5);
    MapObject_ClearFlag3(r5);
    MapObject_ClearFlagsBits(r5, 0x20);
    MapObject_SetMovementCommand(r5, 0xff);
    MapObject_SetMovementStep(r5, 0);
    // strb r1, [r6]
    // add r0, #0xe8 ; ->followMon.effectTimer
    // str r1, [r0]
    // str r1, [r4, r0]
    // add r0, #0xec ; ->followMon.duration
    // str r1, [r0]
    // add r4, #0xf0 ; ->followMon.parentData
    // str r1, [r4]
    MapObject_GetXCoord(r5, 0);
    MapObject_GetYCoord(r5);
    MapObject_GetZCoord(r5);
    MapObject_GetFacingDirection(r5);
    // str r0, [sp]
    MapObject_SetPositionFromXYZAndDirection(r5, r4, r6, r7);
}



void sub_02065A4C(void) {
    MapObject_GetFieldSystem();
    MapObject_ClearSingleMovement(r5);
    MapObject_ClearFlag3(r5);
    // ldr r1, [r4, r0]
    // str r1, [r4, r0]
    sub_02065D58(r5, r6);
    MapObject_GetXCoord(r5);
    // add r1, #0xec
    MapObject_GetZCoord(r5, *((u32*)r4));
    // add r1, #0xf0
    // str r1, [r4, r0]
    // strb r0, [r6]
    sub_02069E14(r5, 0);
    sub_02069EAC(r5);
    ov01_0220329C(r5, 0);
    sub_02069E84(r5, 0);
    sub_02069DC8(r5, 0);
    sub_020664D8(r5);
    sub_02065D78(r5);
    sub_020623C8();
    FieldSystem_GetPlayerAvatar(r4);
    PlayerAvatar_GetFacingDirection();
    sub_02069E28(r5, ((r0 << 0x18) >> 0x18));
    sub_02065DF4(r5, r6);
    sub_02069E14(r5);
    sub_02069EAC(r5);
    ov01_0220329C(r5, 0);
    sub_02069E84(r5, 0);
    sub_02069DC8(r5, 0);
    sub_020664D8(r5);
    MapObject_SetSingleMovement(r5);
    // add r0, #0xfd
    // str r1, [r4, r0]
    // str r1, [r4, r0]
}



void sub_02065B70(void) {
    MapObject_ClearSingleMovement();
    MapObject_ClearFlag3(r5);
    sub_02065D24(r5, r4);
    sub_02065D58(r5, r4);
    sub_02069E14(r5);
    sub_02069EAC(r5);
    ov01_0220329C(r5, 0);
    sub_02069E84(r5, 0);
    sub_02069DC8(r5, 0);
    sub_020664D8(r5);
    sub_02065F44(r5);
    MapObject_SetSingleMovement(r5);
    // ldrb r0, [r4]
    // strb r0, [r4]
}



void sub_02065BE8(void) {
    MapObject_ClearSingleMovement();
    MapObject_ClearFlag3(r5);
    sub_02065D24(r5, r4);
    sub_02065D58(r5, r4);
    sub_02065FBC(r5);
    MapObject_SetSingleMovement(r5);
    // ldrb r0, [r4]
    // strb r0, [r4]
}



void sub_02065C2C(void) {
    sub_02062428();
    MapObject_ClearSingleMovement(r5);
    // strb r0, [r4]
}



void sub_02065C48(void) {
    sub_02062428();
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    MapObject_ClearSingleMovement(r5);
    // strb r0, [r4]
    *((u8*)(r4 + 3)) = 0;
    // bic r2, r1
    *((u16*)(r4 + 0xa)) = *((u16*)(r4 + 0xa));
    sub_02069ED4(r5, 6, *((u16*)(r4 + 0xa)));
    MapObject_ForceSetHeldMovement(r5, r0);
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) + 1);
}



void sub_02065C90(void) {
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    PlayerAvatar_GetMapObject();
    MapObject_TestFlagsBits(0x10);
    MapObject_TestFlagsBits(r6, 0x20);
    // strb r0, [r5]
    PlayerAvatar_GetUnk14(r4);
    // strb r0, [r5]
}



void sub_02065CD0(void) {
    MapObject_GetManager();
    MapObjectManager_GetFirstActiveObjectWithMovement1();
    *((u8*)(r4 + 1)) = 0;
    sub_02065CFC(r5, r4);
}



void sub_02065CFC(void) {
}



void sub_02065D24(void) {
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    PlayerAvatar_GetXCoord();
    PlayerAvatar_GetZCoord(r6);
    // ldrsh r1, [r5, r1]
    // ldrsh r1, [r5, r1]
}



void sub_02065D58(void) {
}



void sub_02065D78(void) {
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    // add r4, #0xe8
    // sub r1, #0x58
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02065D9C: ; jump table
}



void sub_02065DB4(void) {
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    PlayerAvatar_GetMapObject();
    MapObject_GetMovementCommand();
    // sub r1, #0x58
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02065DDA: ; jump table
}



void sub_02065DF4(void) {
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    MapObject_GetXCoord(r5);
    // str r0, [sp, #8]
    MapObject_GetZCoord(r5);
    // str r0, [sp, #4]
    PlayerAvatar_GetPreviousXCoord(r7);
    // str r0, [sp]
    PlayerAvatar_GetPreviousZCoord(r7);
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    sub_02065D78(r5);
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    sub_02061200(r6);
    // str r0, [sp, #0x14]
    sub_02069EC0(r5);
    // ldr r0, [sp, #0x10]
    sub_020623C8();
    // str r1, [sp, #0xc]
    sub_020623D8(r6, 1);
    ov01_0220542C(r6, r0);
    sub_02066444();
    // bic r1, r2
    // orr r0, r1
    *((u16*)(r4 + 0xa)) = ((((r0 << 0x10) >> 0x10) << 0x1e) >> 0x1d);
    sub_02069E50(r5, ((r6 << 0x18) >> 0x18), 6);
    // str r0, [sp, #0xc]
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 3)) = 0;
    PlayerAvatar_GetFacingDirection(r7);
    sub_02069E28(r5, ((r0 << 0x18) >> 0x18));
    PlayerAvatar_CheckFlag6(r7);
    // ldr r1, [sp, #0x10]
    ov01_0220542C(r6);
    sub_02066444();
    // bic r1, r2
    // orr r0, r1
    *((u16*)(r4 + 0xa)) = ((((r0 << 0x10) >> 0x10) << 0x1e) >> 0x1d);
    sub_02069E50(r5, ((r6 << 0x18) >> 0x18), 6);
    // str r0, [sp, #0xc]
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 3)) = 0;
    sub_02069E28(r5, 0);
    // ldr r0, [sp, #0x14]
    sub_020623D8();
    PlayerAvatar_GetFacingDirection(r7);
    sub_02069E28(r5, ((r0 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    sub_0206234C();
    MapObject_ForceSetHeldMovement(r5, r0);
    // ldr r0, [sp, #0xc]
    // strb r0, [r4]
}



void sub_02065F44(void) {
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    MapObject_GetXCoord(r5);
    // str r0, [sp]
    MapObject_GetZCoord(r5);
    PlayerAvatar_GetPreviousXCoord(r4);
    PlayerAvatar_GetPreviousZCoord(r4);
    // ldr r0, [sp]
    sub_02065DB4(r5);
    // str r0, [sp, #4]
    // ldr r0, [sp]
    sub_02061200(r7, r6, r4);
    // ldr r1, [sp, #4]
    GF_AssertFail();
    sub_0206234C(0);
    MapObject_ForceSetHeldMovement(r5, r0);
}



void sub_02065FBC(void) {
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    MapObject_GetXCoord(r5);
    MapObject_GetZCoord(r5);
    PlayerAvatar_GetPreviousXCoord(r4);
    PlayerAvatar_GetPreviousZCoord(r4);
    sub_02065DB4(r5);
    MapObject_ForceSetHeldMovement(r5, r0);
}



void sub_02065FFC(void) {
}



void sub_02066024(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02066150
    // cmp r0, #0
    // beq _0206604C
    // ldr r6, _02066050 ; =_020FE3D4
    // ldrb r2, [r4]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // ldr r2, [r6, r2]
    // blx r2
    // cmp r0, #1
    // beq _0206603C
    // pop {r4, r5, r6, pc}
    // nop
    // _02066050: .word _020FE3D4
    // TODO: decompile
}



void sub_02066054(void) {
    // bx lr
    // TODO: decompile
}



void sub_02066058(void) {
}



void sub_02066064(void) {
    MapObject_ClearSingleMovement();
    MapObject_ClearFlag3(r5);
    sub_020661F0(r5, r4);
    sub_0206623C(r5, r4);
    MapObject_SetSingleMovement(r5);
    // ldrb r0, [r4]
    // strb r0, [r4]
}



void sub_020660A0(void) {
    sub_02062428();
    MapObject_ClearSingleMovement(r5);
    // strb r0, [r4]
}



LocalMapObject * sub_020660C0(void) {
    // str r1, [sp, #8]
    MapObject_GetType(0);
    // str r0, [sp]
    MapObject_GetMapID(r4);
    sub_02064518(r4);
    MapObject_GetManager(r4);
    // ldr r1, [sp]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _020660FA: ; jump table
    // add r1, sp, #4
    // add r2, sp, #8
    MapObjectManager_GetNextObjectWithFlagFromIndex((*((u16*)(r1 + 6)) << 0x10), 1);
    // ldr r0, [sp, #4]
    MapObject_GetMapID();
    // ldr r0, [sp, #4]
    sub_02064518();
    // ldr r0, [sp, #4]
    // add r1, sp, #4
    // add r2, sp, #8
    MapObjectManager_GetNextObjectWithFlagFromIndex(r7, 1);
}



void sub_02066150(void) {
    // str r1, [sp]
    MapObject_GetManager();
    // str r0, [sp, #8]
    MapObject_GetMapID(r5);
    sub_02064518(r5);
    // add r1, sp, #4
    // add r2, sp, #8
    MapObjectManager_GetNextObjectWithFlagFromIndex(r4, 1);
    // ldr r0, [sp, #4]
    MapObject_GetMapID();
    // ldr r0, [sp, #4]
    sub_02064518();
    // ldr r0, [sp]
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    sub_020661CC(r5);
    // add r1, sp, #4
    // add r2, sp, #8
    MapObjectManager_GetNextObjectWithFlagFromIndex(r4, 1);
    // ldr r1, [sp]
    *((u8*)(r1 + 1)) = 0;
}



void sub_020661CC(void) {
}



void sub_020661F0(void) {
    MapObject_GetXCoord();
    MapObject_GetZCoord(r4);
    MapObject_GetPreviousXCoord(r5);
    MapObject_GetPreviousZCoord(r5);
    MapObject_CheckSingleMovement(r5);
    MapObject_GetFlagsBitsMask(r5, (0x61 << 6));
}



void sub_0206623C(void) {
    // str r0, [sp]
    MapObject_GetXCoord();
    // ldr r0, [sp]
    MapObject_GetZCoord();
    MapObject_GetXCoord(*((u32*)(r5 + 8)));
    // str r0, [sp, #8]
    MapObject_GetZCoord(*((u32*)(r5 + 8)));
    MapObject_GetPreviousXCoord(*((u32*)(r5 + 8)));
    // str r0, [sp, #4]
    MapObject_GetPreviousZCoord(*((u32*)(r5 + 8)));
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #4]
    sub_02061200(r4, r6, r0);
    GetDeltaXByFacingDirection();
    // add r4, r4, r0
    GetDeltaYByFacingDirection(r5);
    // add r1, r6, r0
    // ldr r0, [sp, #8]
    sub_0206234C(r5, 0xc);
    // ldr r0, [sp]
    MapObject_ForceSetHeldMovement(r0);
}



void sub_020662C4(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // add r4, r0, #0
    // mov r1, #8
    // bl sub_0205F370
    // strb r5, [r0, #1]
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_0205F328
    // add r0, r4, #0
    // bl MapObject_ClearSingleMovement
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // ldr r5, _02066308 ; =_020FE3DC
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // add r1, r2, #0
    // str r0, [r3]
    // add r0, r4, #0
    // bl MapObject_SetFacingVector
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _02066308: .word _020FE3DC
    // TODO: decompile
}



void sub_0206630C(void) {
}



void sub_02066318(void) {
}



void sub_02066324(void) {
}



void sub_02066330(void) {
}



void sub_0206633C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl sub_0205F394
    // ldr r6, _0206635C ; =_020FE3CC
    // add r4, r0, #0
    // ldrb r2, [r4]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r2, r2, #2
    // ldr r2, [r6, r2]
    // blx r2
    // cmp r0, #1
    // beq _02066348
    // pop {r4, r5, r6, pc}
    // nop
    // _0206635C: .word _020FE3CC
    // TODO: decompile
}



void sub_02066360(void) {
    sub_0206642C();
    ov01_021F1640();
}



void sub_02066370(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl sub_0205F394
    // add r5, r0, #0
    // mov r1, #0
    // strb r1, [r5]
    // add r0, r4, #0
    // bl sub_02066420
    // ldrb r0, [r5, #2]
    // cmp r0, #0
    // bne _020663AC
    // ldr r5, _020663B0 ; =_020FE3E8
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // add r1, r2, #0
    // str r0, [r3]
    // add r0, r4, #0
    // bl MapObject_SetFacingVector
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _020663B0: .word _020FE3E8
    // TODO: decompile
}



void sub_020663B4(void) {
    ov01_021FFF5C(*((u8*)(r1 + 1)));
    sub_02066420(r5, r0);
    MapObject_ClearSingleMovement(r5);
    MapObject_ClearFlag3(r5);
    // ldrb r0, [r4]
    // strb r0, [r4]
}



void sub_020663E4(void) {
    sub_0206642C(*((u8*)(r1 + 2)));
    sub_0205F73C(r5);
    ov01_021FFF5C(r5, *((u8*)(r4 + 1)));
    sub_02066420(r5, r0);
    MapObject_SetFlagsBits(r5, (1 << 0x14));
}



void sub_02066420(void) {
}



void sub_0206642C(void) {
}



void sub_02066438(void) {
}



void sub_02066444(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x30
    // ldr r5, _020664CC ; =_020FE3F4
    // add r3, r0, #0
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0x20
    // add r2, r4, #0
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldr r5, _020664D0 ; =_020FE434
    // add r4, sp, #0x10
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldr r5, _020664D4 ; =_020FE444
    // add r4, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // mov r1, #0
    // lsl r0, r1, #2
    // ldr r0, [r2, r0]
    // cmp r3, r0
    // bne _02066480
    // add sp, #0x30
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // add r0, r1, #1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // cmp r1, #4
    // blo _02066472
    // mov r2, #0
    // add r1, sp, #0x10
    // lsl r0, r2, #2
    // ldr r0, [r1, r0]
    // cmp r3, r0
    // bne _0206649C
    // add sp, #0x30
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // add r0, r2, #1
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // cmp r2, #4
    // blo _0206648E
    // mov r2, #0
    // add r1, sp, #0
    // lsl r0, r2, #2
    // ldr r0, [r1, r0]
    // cmp r3, r0
    // bne _020664B8
    // add sp, #0x30
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r2, #1
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // cmp r2, #4
    // blo _020664AA
    // bl GF_AssertFail
    // mov r0, #0
    // add sp, #0x30
    // pop {r3, r4, r5, pc}
    // _020664CC: .word _020FE3F4
    // _020664D0: .word _020FE434
    // _020664D4: .word _020FE444
    // TODO: decompile
}



void sub_020664D8(void) {
    MapObject_GetFieldSystem();
    MapObject_GetXCoord(r5);
    // str r0, [sp, #8]
    MapObject_GetZCoord(r5);
    // ldr r1, [sp, #8]
    // str r2, [sp, #4]
    GetMetatileBehavior(r4, r0);
    MetatileBehavior_IsEncounterGrass(((r0 << 0x18) >> 0x18));
    ov01_021FF070(r5, 0);
    sub_0205B6F4(((r6 << 0x18) >> 0x18));
    ov01_021FF8F0(r5, 0);
    ov01_022055DC(r5);
    MapObject_GetFacingDirection(r5);
    // add r0, #0xfe
    // add r1, sp, #8
    // add r2, sp, #4
    ov01_02205604(r5);
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    GetMetatileBehavior(r4);
    MetatileBehavior_IsEncounterGrass(((r0 << 0x18) >> 0x18));
    // str r1, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    ov01_021FF0E4(r5, 1);
    sub_0205B6F4(((r4 << 0x18) >> 0x18));
    // str r1, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    ov01_021FF964(r5, 1);
}


