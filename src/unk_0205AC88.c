/* Decompiled from asm/unk_0205AC88.s */
#include "global.h"

void sub_0205AC88(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0205ACF4 ; =0x000004E8
    // add r5, r0, #0
    // mov r0, #0x1f
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r2, _0205ACF4 ; =0x000004E8
    // mov r0, #0
    // add r1, r4, #0
    // bl MIi_CpuClearFast
    // mov r0, #0x4e
    // str r5, [r4]
    // mov r1, #1
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, _0205ACF8 ; =sub_0205AD60
    // add r1, r4, #0
    // mov r2, #0xb
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #4]
    // add r0, r5, #0
    // bl sub_0205A1F0
    // ldr r1, _0205ACFC ; =0x000004D4
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #8
    // ldr r0, [r0, #0xc]
    // bl SaveArray_Get
    // ldr r1, _0205AD00 ; =0x000004D8
    // ldr r2, _0205AD04 ; =0x00002710
    // str r0, [r4, r1]
    // sub r0, r1, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x57
    // ldr r0, [r0, #0x40]
    // str r0, [r4, #8]
    // mov r0, #0xb
    // bl Heap_CreateAtEnd
    // mov r0, #0x57
    // bl sub_0205B3B8
    // ldr r1, _0205AD08 ; =0x000004DC
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl sub_0205AD24
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _0205ACF4: .word 0x000004E8
    // _0205ACF8: .word sub_0205AD60
    // _0205ACFC: .word 0x000004D4
    // _0205AD00: .word 0x000004D8
    // _0205AD04: .word 0x00002710
    // _0205AD08: .word 0x000004DC
    // TODO: decompile
}


void sub_0205AD0C(void) {
    // mov r3, #0
    // mov r1, #3
    // ldrb r2, [r0, #0xd]
    // cmp r2, #0
    // beq _0205AD18
    // strb r1, [r0, #0xc]
    // add r3, r3, #1
    // add r0, #0x18
    // cmp r3, #0x33
    // blt _0205AD10
    // bx lr
    // TODO: decompile
}


void sub_0205AD24(void) {
    // mov r2, #0
    // add r1, r2, #0
    // strb r1, [r0, #0xc]
    // strb r1, [r0, #0xd]
    // strb r1, [r0, #0xe]
    // strb r1, [r0, #0xf]
    // add r2, r2, #1
    // add r0, #0x18
    // cmp r2, #0x33
    // blt _0205AD28
    // bx lr
    // TODO: decompile
}


void sub_0205AD3C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // bl SysTask_Destroy
    // ldr r0, _0205AD5C ; =0x000004DC
    // ldr r0, [r4, r0]
    // bl sub_0205B3CC
    // mov r0, #0x57
    // bl Heap_Destroy
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // _0205AD5C: .word 0x000004DC
    // TODO: decompile
}


void sub_0205AD60(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, _0205AD98 ; =0x000004D4
    // add r5, r1, #0
    // ldr r0, [r5, r0]
    // ldr r4, [r5]
    // bl FieldSystem_TaskIsRunning
    // cmp r0, #0
    // bne _0205AD96
    // ldr r3, _0205AD98 ; =0x000004D4
    // add r1, r4, #0
    // ldr r0, [r5, r3]
    // ldr r0, [r0, #0x40]
    // str r0, [r5, #8]
    // ldr r2, [r5, r3]
    // add r3, r3, #4
    // ldr r2, [r2, #0x3c]
    // ldr r3, [r5, r3]
    // add r0, r5, #0
    // bl sub_0205AEA8
    // ldr r1, _0205AD98 ; =0x000004D4
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // ldr r1, [r1, #0x3c]
    // bl sub_0205AF78
    // pop {r3, r4, r5, pc}
    // _0205AD98: .word 0x000004D4
    // TODO: decompile
}


void sub_0205AD9C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // mov r5, #0
    // str r0, [sp]
    // str r3, [sp, #4]
    // cmp r2, #0
    // bne _0205ADD0
    // ldr r0, _0205AE9C ; =_020FC824
    // lsl r1, r1, #1
    // ldrh r4, [r0, r1]
    // ldr r0, [sp]
    // mov r6, #3
    // add r0, #0xc
    // str r0, [sp]
    // ldr r0, [sp]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl sub_0205AEA0
    // add r5, r5, #1
    // add r4, r4, #1
    // cmp r5, #4
    // blt _0205ADB8
    // add sp, #0x14
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r2, #0
    // str r0, [sp, #0xc]
    // add r0, #0x50
    // str r0, [sp, #0xc]
    // add r0, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, [r2, #0x50]
    // mov r2, #0x18
    // add r3, r1, #0
    // mul r3, r2
    // ldr r2, [sp]
    // add r2, r2, r3
    // ldr r2, [r2, #0x18]
    // cmp r0, r2
    // beq _0205AE14
    // ldr r0, _0205AE9C ; =_020FC824
    // lsl r1, r1, #1
    // ldrh r4, [r0, r1]
    // ldr r0, [sp]
    // mov r6, #3
    // add r0, #0xc
    // str r0, [sp]
    // ldr r0, [sp]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl sub_0205AEA0
    // add r5, r5, #1
    // add r4, r4, #1
    // cmp r5, #4
    // blt _0205ADFC
    // add sp, #0x14
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, _0205AE9C ; =_020FC824
    // lsl r1, r1, #1
    // ldrh r7, [r0, r1]
    // ldr r0, [sp, #0xc]
    // add r6, r5, #0
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #0x10]
    // add r0, #0xc
    // str r0, [sp, #0x10]
    // mov r0, #0x18
    // add r1, r7, #0
    // mul r1, r0
    // ldr r0, [sp]
    // add r4, r0, r1
    // ldrb r0, [r4, #0xd]
    // cmp r0, #0
    // beq _0205AE42
    // cmp r0, #2
    // beq _0205AE68
    // cmp r0, #4
    // beq _0205AE82
    // b _0205AE86
    // ldr r0, [sp, #0xc]
    // add r1, r0, r6
    // ldrb r0, [r1, #0x18]
    // cmp r0, #0
    // beq _0205AE86
    // mov r0, #2
    // strb r0, [r4, #0xc]
    // ldrb r1, [r1, #0x18]
    // mov r0, #0x7f
    // and r0, r1
    // strb r0, [r4, #0x14]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r1, [r1]
    // bl PalPad_PlayerIdIsFriendOrMutual
    // strb r0, [r4, #0xe]
    // mov r5, #1
    // b _0205AE86
    // ldr r0, [sp, #0xc]
    // add r0, r0, r6
    // ldrb r0, [r0, #0x18]
    // cmp r0, #0
    // bne _0205AE7E
    // ldr r0, [sp, #0x10]
    // add r1, r7, #0
    // mov r2, #3
    // bl sub_0205AEA0
    // b _0205AE86
    // mov r5, #1
    // b _0205AE86
    // mov r0, #0
    // strb r0, [r4, #0xc]
    // ldr r0, [sp, #8]
    // add r6, r6, #1
    // add r0, r0, #4
    // add r7, r7, #1
    // str r0, [sp, #8]
    // cmp r6, #4
    // blt _0205AE28
    // add r0, r5, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0205AE9C: .word _020FC824
    // TODO: decompile
}


void sub_0205AEA0(void) {
    // mov r3, #0x18
    // mul r3, r1
    // strb r2, [r0, r3]
    // bx lr
    // TODO: decompile
}


void sub_0205AEA8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r0, [sp]
    // add r5, r0, #0
    // str r0, [sp, #0x10]
    // add r0, #0xc
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // mov r4, #0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r1, r4, #0
    // bl sub_0205A1F4
    // add r6, r0, #0
    // beq _0205AED6
    // add r7, r6, #0
    // add r7, #0x50
    // add r0, r7, #0
    // str r0, [sp, #0xc]
    // add r0, #0x10
    // str r0, [sp, #0xc]
    // b _0205AEDC
    // mov r7, #0
    // add r0, r7, #0
    // str r0, [sp, #0xc]
    // ldrb r0, [r5, #0xd]
    // cmp r0, #0
    // beq _0205AEEC
    // cmp r0, #2
    // beq _0205AF28
    // cmp r0, #4
    // beq _0205AF66
    // b _0205AF6A
    // cmp r6, #0
    // beq _0205AF6A
    // ldr r0, [sp, #0xc]
    // bl PlayerProfile_GetAvatar
    // strb r0, [r5, #0x14]
    // ldr r0, [sp, #0xc]
    // bl PlayerProfile_GetTrainerID
    // add r1, r0, #0
    // ldr r0, [sp, #8]
    // bl PalPad_PlayerIdIsFriendOrMutual
    // strb r0, [r5, #0xe]
    // ldr r0, [r7]
    // ldr r3, [sp, #8]
    // str r0, [r5, #0x18]
    // ldr r0, [sp]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl sub_0205AD9C
    // cmp r0, #0
    // beq _0205AF22
    // mov r0, #2
    // strb r0, [r5, #0xc]
    // b _0205AF6A
    // mov r0, #1
    // strb r0, [r5, #0xc]
    // b _0205AF6A
    // cmp r6, #0
    // bne _0205AF38
    // ldr r0, [sp, #0x10]
    // add r1, r4, #0
    // mov r2, #3
    // bl sub_0205AEA0
    // b _0205AF4A
    // ldr r1, [r7]
    // ldr r0, [r5, #0x18]
    // cmp r1, r0
    // beq _0205AF4A
    // ldr r0, [sp, #0x10]
    // add r1, r4, #0
    // mov r2, #3
    // bl sub_0205AEA0
    // ldr r0, [sp]
    // ldr r3, [sp, #8]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl sub_0205AD9C
    // cmp r0, #0
    // beq _0205AF6A
    // ldrb r0, [r5, #0x15]
    // cmp r0, #1
    // bne _0205AF6A
    // mov r0, #3
    // strb r0, [r5, #0xc]
    // b _0205AF6A
    // mov r0, #0
    // strb r0, [r5, #0xc]
    // add r4, r4, #1
    // add r5, #0x18
    // cmp r4, #0xa
    // blt _0205AEBC
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0205AF78(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // ldr r0, [r0, #8]
    // str r1, [sp, #4]
    // cmp r0, #0
    // bne _0205AF8A
    // bl GF_AssertFail
    // ldr r0, [sp]
    // ldr r0, [r0, #8]
    // bl PlayerAvatar_GetXCoord
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [r0, #8]
    // bl PlayerAvatar_GetZCoord
    // ldr r4, [sp]
    // str r0, [sp, #8]
    // add r6, r4, #0
    // mov r7, #0
    // add r6, #0xc
    // ldr r0, [sp, #4]
    // add r1, r7, #1
    // bl MapObjectManager_GetFirstActiveObjectByID
    // add r5, r0, #0
    // bne _0205AFB6
    // bl GF_AssertFail
    // ldrb r0, [r4, #0xd]
    // cmp r0, #4
    // bhi _0205B0AA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205AFC8: ; jump table
    // add r0, r5, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _0205B0AA
    // ldrb r0, [r4, #0xc]
    // sub r0, r0, #1
    // cmp r0, #1
    // bhi _0205B0AA
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #8]
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_0205B13C
    // b _0205B0AA
    // add r0, r5, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _0205B0AA
    // ldrb r0, [r4, #0xc]
    // cmp r0, #3
    // bne _0205B012
    // mov r0, #0
    // strb r0, [r4, #0xd]
    // strb r0, [r4, #0xc]
    // add r0, r6, #0
    // mov r1, #1
    // bl sub_0205B0DC
    // b _0205B0AA
    // add r0, r5, #0
    // bl MapObject_ClearHeldMovementIfActive
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_SetFlag19
    // ldrb r0, [r4, #0xc]
    // cmp r0, #1
    // bne _0205B048
    // ldrb r0, [r4, #0x15]
    // cmp r0, #0
    // bne _0205B048
    // add r0, r5, #0
    // mov r1, #3
    // bl sub_0205FC94
    // add r0, r5, #0
    // mov r1, #1
    // bl MapObject_SetXRange
    // add r0, r5, #0
    // mov r1, #1
    // bl MapObject_SetYRange
    // mov r0, #1
    // strb r0, [r4, #0x15]
    // mov r0, #2
    // strb r0, [r4, #0xd]
    // mov r0, #0
    // strb r0, [r4, #0xc]
    // b _0205B0AA
    // add r0, r5, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _0205B0AA
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_0205B218
    // ldrb r0, [r4, #0xc]
    // cmp r0, #3
    // bne _0205B072
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_0205B1E4
    // add r0, r6, #0
    // bl sub_0205B118
    // b _0205B0AA
    // add r0, r5, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _0205B0AA
    // add r0, r5, #0
    // bl MapObject_ClearHeldMovementIfActive
    // mov r0, #4
    // strb r0, [r4, #0xd]
    // mov r0, #0
    // strb r0, [r4, #0xc]
    // strb r0, [r4, #0x15]
    // add r0, r5, #0
    // mov r1, #1
    // bl MapObject_SetVisible
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_ClearFlag18
    // b _0205B0AA
    // mov r0, #0
    // strb r0, [r4, #0xd]
    // add r7, r7, #1
    // add r4, #0x18
    // add r6, #0x18
    // cmp r7, #0x32
    // bge _0205B0B6
    // b _0205AFA6
    // ldr r0, [sp]
    // ldr r0, [r0, #8]
    // bl PlayerAvatar_GetMapObject
    // add r1, r0, #0
    // ldr r2, _0205B0D8 ; =0x000004BC
    // ldr r0, [sp]
    // add r0, r0, r2
    // bl sub_0205B218
    // ldr r1, _0205B0D8 ; =0x000004BC
    // ldr r0, [sp]
    // add r0, r0, r1
    // bl sub_0205B118
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0205B0D8: .word 0x000004BC
    // TODO: decompile
}


void sub_0205B0DC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // add r4, r1, #0
    // cmp r0, #0
    // beq _0205B0FA
    // bl sub_02068CCC
    // cmp r0, #0
    // beq _0205B0F6
    // ldr r0, [r5, #0x10]
    // bl sub_02068B48
    // mov r0, #0
    // str r0, [r5, #0x10]
    // cmp r4, #0
    // beq _0205B116
    // ldr r0, [r5, #0x14]
    // cmp r0, #0
    // beq _0205B116
    // bl sub_02068CCC
    // cmp r0, #0
    // beq _0205B112
    // ldr r0, [r5, #0x14]
    // bl sub_02068B48
    // mov r0, #0
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_0205B118(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #4]
    // cmp r1, #0
    // beq _0205B138
    // ldrh r1, [r4, #6]
    // sub r1, r1, #1
    // strh r1, [r4, #6]
    // ldrh r1, [r4, #6]
    // cmp r1, #0
    // bne _0205B138
    // mov r1, #0
    // bl sub_0205B0DC
    // mov r0, #0
    // strb r0, [r4, #4]
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0205B13C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // bl MapObject_GetInitialX
    // add r7, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetInitialY
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // bl MapObject_GetInitialZ
    // add r6, r0, #0
    // ldr r0, [sp, #4]
    // cmp r7, r0
    // bne _0205B16C
    // ldr r0, [sp, #8]
    // cmp r6, r0
    // beq _0205B1DC
    // ldr r0, _0205B1E0 ; =0x0000064E
    // bl PlaySE
    // ldrb r1, [r5, #8]
    // add r0, r4, #0
    // bl sub_0205E3AC
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_0205B0DC
    // mov r0, #1
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // add r0, r4, #0
    // add r1, r7, #0
    // add r3, r6, #0
    // bl MapObject_SetPositionFromXYZAndDirection
    // add r0, r4, #0
    // mov r1, #1
    // bl MapObject_SetFacingDirectionDirect
    // add r0, r4, #0
    // mov r1, #0x44
    // bl MapObject_SetHeldMovement
    // add r0, r4, #0
    // mov r1, #0
    // bl MapObject_SetVisible
    // add r0, r4, #0
    // mov r1, #1
    // bl MapObject_ClearFlag18
    // mov r1, #1
    // strb r1, [r5, #1]
    // ldrb r0, [r5, #2]
    // cmp r0, #0
    // beq _0205B1DC
    // cmp r0, #1
    // bne _0205B1CA
    // add r0, r4, #0
    // bl ov01_021FD8E8
    // str r0, [r5, #0x14]
    // b _0205B1D8
    // cmp r0, #2
    // blo _0205B1D8
    // add r0, r4, #0
    // mov r1, #2
    // bl ov01_021FD8E8
    // str r0, [r5, #0x14]
    // mov r0, #0
    // strb r0, [r5, #2]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0205B1E0: .word 0x0000064E
    // TODO: decompile
}


void sub_0205B1E4(void) {
    MapObject_SetHeldMovement(r1, 0x43);
    MapObject_SetFlag19(r5, 1);
    sub_0205FC94(r5, 0);
    sub_0205B0DC(r4, 1);
    *((u8*)(r4 + 4)) = 0;
    *((u16*)(r4 + 6)) = 0;
    *((u8*)(r4 + 1)) = 3;
}


void sub_0205B218(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #3]
    // cmp r0, #1
    // bne _0205B23C
    // ldrb r0, [r4, #4]
    // cmp r0, #0
    // bne _0205B23C
    // add r0, r1, #0
    // bl ov01_02200730
    // str r0, [r4, #0x10]
    // mov r0, #0x1e
    // strh r0, [r4, #6]
    // mov r0, #0
    // strb r0, [r4, #3]
    // mov r0, #1
    // strb r0, [r4, #4]
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0205B240(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r2, #0
    // add r7, r0, #0
    // cmp r5, r6
    // bge _0205B27A
    // add r0, r7, #0
    // add r1, r5, #0
    // bl MapObjectManager_GetFirstActiveObjectByID
    // add r4, r0, #0
    // bne _0205B25C
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #1
    // bl MapObject_SetVisible
    // add r0, r4, #0
    // mov r1, #0
    // bl MapObject_ClearFlag18
    // add r0, r4, #0
    // mov r1, #1
    // bl MapObject_SetFlag19
    // add r5, r5, #1
    // cmp r5, r6
    // blt _0205B24C
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0205B27C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // mov r1, #0
    // add r7, r0, #0
    // bl MapObjectManager_GetFirstActiveObjectByID
    // add r4, r0, #0
    // bne _0205B290
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #1
    // bne _0205B336
    // bl sub_02037FCC
    // cmp r0, #0
    // bne _0205B2AA
    // bl sub_02037F94
    // cmp r0, #0
    // beq _0205B32C
    // mov r6, #0
    // add r5, #0xc
    // ldrb r0, [r5, #1]
    // cmp r0, #1
    // bne _0205B318
    // add r0, r7, #0
    // add r1, r6, #1
    // bl MapObjectManager_GetFirstActiveObjectByID
    // add r4, r0, #0
    // bne _0205B2C4
    // bl GF_AssertFail
    // ldrb r1, [r5, #8]
    // add r0, r4, #0
    // bl sub_0205E3AC
    // add r0, r4, #0
    // mov r1, #1
    // bl MapObject_SetFacingDirectionDirect
    // add r0, r4, #0
    // mov r1, #0x44
    // bl MapObject_SetHeldMovement
    // add r0, r4, #0
    // mov r1, #0
    // bl MapObject_SetVisible
    // add r0, r4, #0
    // mov r1, #1
    // bl MapObject_ClearFlag18
    // mov r0, #1
    // strb r0, [r5, #1]
    // ldrb r0, [r5, #2]
    // cmp r0, #0
    // beq _0205B318
    // cmp r0, #1
    // bne _0205B306
    // add r0, r4, #0
    // mov r1, #1
    // bl ov01_021FD8E8
    // str r0, [r5, #0x14]
    // b _0205B314
    // cmp r0, #2
    // blo _0205B314
    // add r0, r4, #0
    // mov r1, #2
    // bl ov01_021FD8E8
    // str r0, [r5, #0x14]
    // mov r0, #0
    // strb r0, [r5, #2]
    // add r6, r6, #1
    // add r5, #0x18
    // cmp r6, #0xa
    // blt _0205B2AE
    // add r0, r7, #0
    // mov r1, #0xb
    // mov r2, #0x33
    // bl sub_0205B240
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // mov r1, #1
    // mov r2, #0x33
    // bl sub_0205B240
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0205B338(void) {
    String_New(8, 0x57);
    *((u32*)(r4 + 4)) = 0;
    *((u32*)(r4 + 8)) = 0;
    MailMsg_Init_WithBank(r4, 0);
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0xc)) = 0;
}


void sub_0205B35C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // mov r4, #0
    // add r5, r6, #0
    // add r0, r5, #0
    // bl sub_0205B338
    // add r4, r4, #1
    // add r5, #0x1c
    // cmp r4, #0x1e
    // blt _0205B364
    // mov r0, #0xd2
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r6, r0]
    // add r0, r0, #4
    // str r1, [r6, r0]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_0205B380(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // bl Heap_Free
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _0205B394
    // bl String_Delete
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _0205B39E
    // bl String_Delete
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0205B3A0(void) {
    sub_0205B380(0);
}


void sub_0205B3B8(void) {
    // push {r4, lr}
    // mov r1, #0x35
    // lsl r1, r1, #4
    // bl Heap_Alloc
    // add r4, r0, #0
    // bl sub_0205B35C
    // add r0, r4, #0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0205B3CC(void) {
    sub_0205B3A0();
    Heap_Free(r4);
}

