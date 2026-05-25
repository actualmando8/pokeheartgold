/* Decompiled from asm/unk_020658D4.s */
#include "global.h"

void sub_020658D4(void) {
    sub_0205F370(0xc);
    sub_02065CD0(r4, r0);
    sub_0205F328(r4, 0);
    MapObject_ClearSingleMovement(r4);
    MapObject_ClearFlag18(r4, 0);
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
    sub_0205F394();
}


void sub_020659A8(void) {
    sub_0205F394();
}


void sub_020659B8(void) {
    sub_0205F394(1, 1);
}


void sub_020659CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl MapObject_GetFieldSystem
    // add r4, r0, #0
    // add r0, r5, #0
    // bl sub_0205F394
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_ClearSingleMovement
    // add r0, r5, #0
    // bl MapObject_ClearFlag3
    // add r0, r5, #0
    // mov r1, #0x20
    // bl MapObject_ClearFlagsBits
    // add r0, r5, #0
    // mov r1, #0xff
    // bl MapObject_SetMovementCommand
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_SetMovementStep
    // mov r1, #0
    // add r0, r4, #0
    // strb r1, [r6]
    // add r0, #0xe8 ; ->followMon.effectTimer
    // str r1, [r0]
    // mov r0, #1
    // lsl r0, r0, #8 ; ->followMon.fieldSystem
    // str r1, [r4, r0]
    // add r0, r4, #0
    // add r0, #0xec ; ->followMon.duration
    // str r1, [r0]
    // add r4, #0xf0 ; ->followMon.parentData
    // add r0, r5, #0
    // str r1, [r4]
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetYCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r7, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // add r3, r7, #0
    // bl MapObject_SetPositionFromXYZAndDirection
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02065A4C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // bl MapObject_GetFieldSystem
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_ClearSingleMovement
    // add r0, r5, #0
    // bl MapObject_ClearFlag3
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r1, [r4, r0]
    // cmp r1, #1
    // bne _02065A76
    // mov r1, #2
    // str r1, [r4, r0]
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // cmp r1, #2
    // bne _02065B64
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02065D58
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // add r1, r4, #0
    // add r1, #0xec
    // ldr r1, [r1]
    // cmp r1, r0
    // bne _02065B12
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r1, r4, #0
    // add r1, #0xf0
    // ldr r1, [r1]
    // cmp r1, r0
    // bne _02065B12
    // mov r0, #1
    // mov r1, #0
    // lsl r0, r0, #8
    // str r1, [r4, r0]
    // mov r0, #3
    // strb r0, [r6]
    // add r0, r5, #0
    // bl sub_02069E14
    // cmp r0, #0
    // beq _02065AEA
    // ldrh r0, [r6, #0xa]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // bne _02065AEA
    // add r0, r5, #0
    // bl sub_02069EAC
    // cmp r0, #0
    // beq _02065ADC
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_0220329C
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02069E84
    // b _02065AE4
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02069DC8
    // add r0, r5, #0
    // bl sub_020664D8
    // add r0, r5, #0
    // bl sub_02065D78
    // bl sub_020623C8
    // cmp r0, #0
    // beq _02065B0E
    // add r0, r4, #0
    // bl FieldSystem_GetPlayerAvatar
    // bl PlayerAvatar_GetFacingDirection
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl sub_02069E28
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02065DF4
    // cmp r0, #1
    // bne _02065B6C
    // add r0, r5, #0
    // bl sub_02069E14
    // cmp r0, #0
    // beq _02065B52
    // add r0, r5, #0
    // bl sub_02069EAC
    // cmp r0, #0
    // beq _02065B44
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_0220329C
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02069E84
    // b _02065B4C
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02069DC8
    // add r0, r5, #0
    // bl sub_020664D8
    // add r0, r5, #0
    // bl MapObject_SetSingleMovement
    // mov r1, #3
    // add r0, r1, #0
    // add r0, #0xfd
    // str r1, [r4, r0]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // cmp r1, #3
    // bne _02065B6C
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02065B70(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl MapObject_ClearSingleMovement
    // add r0, r5, #0
    // bl MapObject_ClearFlag3
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02065D24
    // cmp r0, #1
    // bne _02065BE2
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02065D58
    // add r0, r5, #0
    // bl sub_02069E14
    // cmp r0, #0
    // beq _02065BC8
    // add r0, r5, #0
    // bl sub_02069EAC
    // cmp r0, #0
    // beq _02065BBA
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_0220329C
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02069E84
    // b _02065BC2
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02069DC8
    // add r0, r5, #0
    // bl sub_020664D8
    // add r0, r5, #0
    // bl sub_02065F44
    // cmp r0, #1
    // bne _02065BE2
    // add r0, r5, #0
    // bl MapObject_SetSingleMovement
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02065BE8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl MapObject_ClearSingleMovement
    // add r0, r5, #0
    // bl MapObject_ClearFlag3
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02065D24
    // cmp r0, #1
    // bne _02065C26
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02065D58
    // add r0, r5, #0
    // bl sub_02065FBC
    // cmp r0, #1
    // bne _02065C26
    // add r0, r5, #0
    // bl MapObject_SetSingleMovement
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02065C2C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02062428
    // cmp r0, #1
    // bne _02065C44
    // add r0, r5, #0
    // bl MapObject_ClearSingleMovement
    // mov r0, #0
    // strb r0, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02065C48(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02062428
    // cmp r0, #1
    // bne _02065C86
    // ldrb r0, [r4, #2]
    // add r0, r0, #1
    // strb r0, [r4, #2]
    // ldrb r0, [r4, #2]
    // cmp r0, #2
    // blo _02065C78
    // add r0, r5, #0
    // bl MapObject_ClearSingleMovement
    // mov r0, #0
    // strb r0, [r4]
    // strb r0, [r4, #3]
    // ldrh r2, [r4, #0xa]
    // mov r1, #6
    // bic r2, r1
    // strh r2, [r4, #0xa]
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl sub_02069ED4
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MapObject_ForceSetHeldMovement
    // ldrb r0, [r4, #3]
    // add r0, r0, #1
    // strb r0, [r4, #3]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02065C90(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // bl MapObject_GetFieldSystem
    // bl FieldSystem_GetPlayerAvatar
    // add r4, r0, #0
    // bl PlayerAvatar_GetMapObject
    // mov r1, #0x10
    // add r6, r0, #0
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _02065CBE
    // add r0, r6, #0
    // mov r1, #0x20
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _02065CBE
    // mov r0, #0
    // strb r0, [r5]
    // add r0, r4, #0
    // bl PlayerAvatar_GetUnk14
    // cmp r0, #3
    // bne _02065CCC
    // mov r0, #0
    // strb r0, [r5]
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02065CD0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl MapObject_GetManager
    // bl MapObjectManager_GetFirstActiveObjectWithMovement1
    // cmp r0, #0
    // bne _02065CE8
    // mov r0, #0
    // strb r0, [r4, #1]
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, #1]
    // cmp r0, #0
    // bne _02065CF6
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02065CFC
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02065CFC(void) {
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    *((u8*)(r5 + 1)) = 1;
    PlayerAvatar_GetXCoord(1);
    *((u16*)(r5 + 4)) = r0;
    PlayerAvatar_GetZCoord(r4);
    *((u16*)(r5 + 6)) = r0;
    *((u16*)(r5 + 8)) = 0xff;
}


void sub_02065D24(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // bl MapObject_GetFieldSystem
    // bl FieldSystem_GetPlayerAvatar
    // add r6, r0, #0
    // beq _02065D54
    // bl PlayerAvatar_GetXCoord
    // add r4, r0, #0
    // add r0, r6, #0
    // bl PlayerAvatar_GetZCoord
    // mov r1, #4
    // ldrsh r1, [r5, r1]
    // cmp r4, r1
    // bne _02065D50
    // mov r1, #6
    // ldrsh r1, [r5, r1]
    // cmp r0, r1
    // beq _02065D54
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02065D58(void) {
    MapObject_GetFieldSystem();
    FieldSystem_GetPlayerAvatar();
    PlayerAvatar_GetXCoord();
    *((u16*)(r5 + 4)) = r0;
    PlayerAvatar_GetZCoord(r4);
    *((u16*)(r5 + 6)) = r0;
}


void sub_02065D78(void) {
    // push {r4, lr}
    // bl MapObject_GetFieldSystem
    // add r4, r0, #0
    // bl FieldSystem_GetPlayerAvatar
    // add r4, #0xe8
    // ldr r0, [r4]
    // add r1, r0, #0
    // sub r1, #0x58
    // cmp r1, #3
    // bhi _02065DB2
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02065D9C: ; jump table
    // mov r0, #0x10
    // pop {r4, pc}
    // mov r0, #0x11
    // pop {r4, pc}
    // mov r0, #0x12
    // pop {r4, pc}
    // mov r0, #0x13
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02065DB4(void) {
    // push {r3, lr}
    // bl MapObject_GetFieldSystem
    // bl FieldSystem_GetPlayerAvatar
    // bl PlayerAvatar_GetMapObject
    // bl MapObject_GetMovementCommand
    // add r1, r0, #0
    // sub r1, #0x58
    // cmp r1, #3
    // bhi _02065DF0
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02065DDA: ; jump table
    // mov r0, #0x10
    // pop {r3, pc}
    // mov r0, #0x11
    // pop {r3, pc}
    // mov r0, #0x12
    // pop {r3, pc}
    // mov r0, #0x13
    // pop {r3, pc}
    // TODO: decompile
}


void sub_02065DF4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r1, #0
    // bl MapObject_GetFieldSystem
    // bl FieldSystem_GetPlayerAvatar
    // add r7, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // str r0, [sp, #4]
    // add r0, r7, #0
    // bl PlayerAvatar_GetPreviousXCoord
    // str r0, [sp]
    // add r0, r7, #0
    // bl PlayerAvatar_GetPreviousZCoord
    // add r6, r0, #0
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // cmp r1, r0
    // bne _02065E36
    // ldr r0, [sp, #4]
    // cmp r0, r6
    // bne _02065E36
    // b _02065F3C
    // add r0, r5, #0
    // bl sub_02065D78
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // add r3, r6, #0
    // bl sub_02061200
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // bl sub_02069EC0
    // add r6, r0, #0
    // ldr r0, [sp, #0x10]
    // bl sub_020623C8
    // mov r1, #1
    // str r1, [sp, #0xc]
    // cmp r6, #0
    // beq _02065F00
    // cmp r0, #0
    // beq _02065EB4
    // add r0, r6, #0
    // bl sub_020623D8
    // add r1, r0, #0
    // add r0, r6, #0
    // bl ov01_0220542C
    // add r6, r0, #0
    // bl sub_02066444
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // lsl r0, r0, #0x1e
    // ldrh r1, [r4, #0xa]
    // mov r2, #6
    // lsr r0, r0, #0x1d
    // bic r1, r2
    // orr r0, r1
    // lsl r1, r6, #0x18
    // strh r0, [r4, #0xa]
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl sub_02069E50
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0
    // strb r0, [r4, #2]
    // strb r0, [r4, #3]
    // add r0, r7, #0
    // bl PlayerAvatar_GetFacingDirection
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl sub_02069E28
    // b _02065F2A
    // add r0, r7, #0
    // bl PlayerAvatar_CheckFlag6
    // cmp r0, #0
    // bne _02065EC4
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #0x10]
    // add r0, r6, #0
    // bl ov01_0220542C
    // add r6, r0, #0
    // bl sub_02066444
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // lsl r0, r0, #0x1e
    // ldrh r1, [r4, #0xa]
    // mov r2, #6
    // lsr r0, r0, #0x1d
    // bic r1, r2
    // orr r0, r1
    // lsl r1, r6, #0x18
    // strh r0, [r4, #0xa]
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl sub_02069E50
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r1, #0
    // strb r1, [r4, #2]
    // add r0, r5, #0
    // strb r1, [r4, #3]
    // bl sub_02069E28
    // b _02065F2A
    // cmp r0, #0
    // beq _02065F20
    // ldr r0, [sp, #0x14]
    // bl sub_020623D8
    // add r6, r0, #0
    // add r0, r7, #0
    // bl PlayerAvatar_GetFacingDirection
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl sub_02069E28
    // b _02065F2A
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    // bl sub_0206234C
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl MapObject_ForceSetHeldMovement
    // ldr r0, [sp, #0xc]
    // add sp, #0x18
    // strb r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02065F44(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // bl MapObject_GetFieldSystem
    // bl FieldSystem_GetPlayerAvatar
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // str r0, [sp]
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r7, r0, #0
    // add r0, r4, #0
    // bl PlayerAvatar_GetPreviousXCoord
    // add r6, r0, #0
    // add r0, r4, #0
    // bl PlayerAvatar_GetPreviousZCoord
    // add r4, r0, #0
    // ldr r0, [sp]
    // cmp r0, r6
    // bne _02065F7E
    // cmp r7, r4
    // beq _02065FB4
    // add r0, r5, #0
    // bl sub_02065DB4
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, r7, #0
    // add r2, r6, #0
    // add r3, r4, #0
    // bl sub_02061200
    // ldr r1, [sp, #4]
    // cmp r1, #0xff
    // bne _02065FA2
    // bl GF_AssertFail
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl sub_0206234C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MapObject_ForceSetHeldMovement
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02065FBC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl MapObject_GetFieldSystem
    // bl FieldSystem_GetPlayerAvatar
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r0, r4, #0
    // bl PlayerAvatar_GetPreviousXCoord
    // add r0, r4, #0
    // bl PlayerAvatar_GetPreviousZCoord
    // add r0, r5, #0
    // bl sub_02065DB4
    // add r1, r0, #0
    // cmp r1, #0xff
    // bne _02065FF2
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl MapObject_ForceSetHeldMovement
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02065FFC(void) {
    sub_0205F370(0xc);
    sub_02066150(r5, r0);
    sub_0205F328(r5, 0);
    MapObject_ClearSingleMovement(r5);
    *((u8*)(r4 + 1)) = 0;
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
    sub_0205F394();
}


void sub_02066064(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl MapObject_ClearSingleMovement
    // add r0, r5, #0
    // bl MapObject_ClearFlag3
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_020661F0
    // cmp r0, #1
    // bne _0206609C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_0206623C
    // cmp r0, #1
    // bne _0206609C
    // add r0, r5, #0
    // bl MapObject_SetSingleMovement
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020660A0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02062428
    // cmp r0, #0
    // bne _020660B2
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl MapObject_ClearSingleMovement
    // mov r0, #0
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020660C0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // mov r1, #0
    // add r4, r0, #0
    // str r1, [sp, #8]
    // bl MapObject_GetType
    // str r0, [sp]
    // add r0, r4, #0
    // bl MapObject_GetMapID
    // add r6, r0, #0
    // add r0, r4, #0
    // bl sub_02064518
    // add r5, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetManager
    // ldr r1, [sp]
    // add r7, r0, #0
    // cmp r1, #8
    // bhi _02066148
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _020660FA: ; jump table
    // add r1, sp, #4
    // add r2, sp, #8
    // mov r3, #1
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #1
    // bne _02066148
    // ldr r0, [sp, #4]
    // cmp r4, r0
    // beq _02066138
    // bl MapObject_GetMapID
    // cmp r6, r0
    // bne _02066138
    // ldr r0, [sp, #4]
    // bl sub_02064518
    // cmp r5, r0
    // bne _02066138
    // ldr r0, [sp, #4]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // add r1, sp, #4
    // add r2, sp, #8
    // mov r3, #1
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #1
    // beq _0206611A
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02066150(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // str r1, [sp]
    // bl MapObject_GetManager
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl MapObject_GetMapID
    // add r7, r0, #0
    // add r0, r5, #0
    // bl sub_02064518
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, sp, #4
    // add r2, sp, #8
    // mov r3, #1
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #1
    // bne _020661C2
    // ldr r0, [sp, #4]
    // cmp r5, r0
    // beq _020661B2
    // bl MapObject_GetMapID
    // cmp r7, r0
    // bne _020661B2
    // ldr r0, [sp, #4]
    // bl sub_02064518
    // cmp r6, r0
    // bne _020661B2
    // ldr r0, [sp]
    // ldrb r0, [r0, #1]
    // cmp r0, #0
    // bne _020661AC
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r0, r5, #0
    // bl sub_020661CC
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, sp, #4
    // add r2, sp, #8
    // mov r3, #1
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #1
    // beq _02066182
    // ldr r1, [sp]
    // mov r0, #0
    // strb r0, [r1, #1]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020661CC(void) {
    *((u8*)(r1 + 1)) = 1;
    MapObject_GetXCoord(r2);
    *((u16*)(r5 + 2)) = r0;
    MapObject_GetZCoord(r4);
    *((u16*)(r5 + 4)) = r0;
    *((u16*)(r5 + 6)) = 0xff;
    *((u32*)(r5 + 8)) = r4;
}


void sub_020661F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // ldr r5, [r1, #8]
    // bl MapObject_GetXCoord
    // add r6, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetZCoord
    // add r7, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetPreviousXCoord
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetPreviousZCoord
    // cmp r6, r4
    // bne _0206621A
    // cmp r7, r0
    // beq _02066236
    // add r0, r5, #0
    // bl MapObject_CheckSingleMovement
    // cmp r0, #1
    // beq _02066232
    // mov r1, #0x61
    // add r0, r5, #0
    // lsl r1, r1, #6
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // bne _02066236
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0206623C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // add r5, r1, #0
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // ldr r0, [sp]
    // bl MapObject_GetZCoord
    // add r6, r0, #0
    // ldr r0, [r5, #8]
    // bl MapObject_GetXCoord
    // str r0, [sp, #8]
    // ldr r0, [r5, #8]
    // bl MapObject_GetZCoord
    // add r7, r0, #0
    // ldr r0, [r5, #8]
    // bl MapObject_GetPreviousXCoord
    // str r0, [sp, #4]
    // ldr r0, [r5, #8]
    // bl MapObject_GetPreviousZCoord
    // add r3, r0, #0
    // ldr r0, [sp, #8]
    // cmp r4, r0
    // bne _02066282
    // cmp r6, r7
    // bne _02066282
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r2, [sp, #4]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl sub_02061200
    // add r5, r0, #0
    // bl GetDeltaXByFacingDirection
    // add r4, r4, r0
    // add r0, r5, #0
    // bl GetDeltaYByFacingDirection
    // add r1, r6, r0
    // ldr r0, [sp, #8]
    // cmp r4, r0
    // bne _020662A6
    // cmp r1, r7
    // beq _020662BC
    // add r0, r5, #0
    // mov r1, #0xc
    // bl sub_0206234C
    // add r1, r0, #0
    // ldr r0, [sp]
    // bl MapObject_ForceSetHeldMovement
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
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
    sub_020662C4();
}


void sub_02066318(void) {
    sub_020662C4();
}


void sub_02066324(void) {
    sub_020662C4();
}


void sub_02066330(void) {
    sub_020662C4();
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
    // push {r3, lr}
    // bl sub_0206642C
    // cmp r0, #0
    // beq _0206636E
    // bl ov01_021F1640
    // pop {r3, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldrb r1, [r4, #2]
    // add r5, r0, #0
    // cmp r1, #0
    // bne _020663CE
    // ldrb r1, [r4, #1]
    // bl ov01_021FFF5C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02066420
    // add r0, r5, #0
    // bl MapObject_ClearSingleMovement
    // add r0, r5, #0
    // bl MapObject_ClearFlag3
    // ldrb r0, [r4]
    // add r0, r0, #1
    // strb r0, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020663E4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldrb r1, [r4, #2]
    // add r5, r0, #0
    // cmp r1, #0
    // bne _0206641C
    // bl sub_0206642C
    // cmp r0, #0
    // bne _02066412
    // add r0, r5, #0
    // bl sub_0205F73C
    // cmp r0, #1
    // bne _02066412
    // ldrb r1, [r4, #1]
    // add r0, r5, #0
    // bl ov01_021FFF5C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02066420
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02066420(void) {
    sub_0205F394();
}


void sub_0206642C(void) {
    sub_0205F394();
}


void sub_02066438(void) {
    sub_0205F394();
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
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // bl MapObject_GetFieldSystem
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r2, r0, #0
    // ldr r1, [sp, #8]
    // add r0, r4, #0
    // str r2, [sp, #4]
    // bl GetMetatileBehavior
    // add r6, r0, #0
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // bne _02066516
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_021FF070
    // b _0206652A
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205B6F4
    // cmp r0, #1
    // bne _0206652A
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_021FF8F0
    // add r0, r5, #0
    // bl ov01_022055DC
    // cmp r0, #0
    // beq _02066596
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // add r0, #0xfe
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _02066596
    // add r0, r5, #0
    // add r1, sp, #8
    // add r2, sp, #4
    // bl ov01_02205604
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // add r0, r4, #0
    // bl GetMetatileBehavior
    // add r4, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // bne _0206657C
    // mov r1, #1
    // str r1, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // bl ov01_021FF0E4
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205B6F4
    // cmp r0, #1
    // bne _02066596
    // mov r1, #1
    // str r1, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // bl ov01_021FF964
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}

