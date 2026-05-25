/* Decompiled from asm/unk_0205FD20.s */
#include "global.h"

void sub_0205FD20(void) {
}



void sub_0205FD30(void) {
    // push {r4, lr}
    // mov r1, #2
    // add r4, r0, #0
    // bl sub_0205F5E8
    // cmp r0, #0
    // bne _0205FD94
    // add r0, r4, #0
    // bl sub_0205FE0C
    // add r0, r4, #0
    // bl sub_0205FE24
    // add r0, r4, #0
    // bl sub_0205FE48
    // add r0, r4, #0
    // mov r1, #0x10
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FD64
    // add r0, r4, #0
    // bl sub_02062400
    // b _0205FD88
    // add r0, r4, #0
    // bl MapObject_CheckMovementPaused
    // cmp r0, #0
    // bne _0205FD88
    // add r0, r4, #0
    // bl sub_0205FD98
    // cmp r0, #1
    // bne _0205FD88
    // add r0, r4, #0
    // bl sub_02063A1C
    // cmp r0, #0
    // bne _0205FD88
    // add r0, r4, #0
    // bl sub_0205F430
    // add r0, r4, #0
    // bl sub_0205FE6C
    // add r0, r4, #0
    // bl sub_0205FEA4
    // pop {r4, pc}
    // TODO: decompile
}



void sub_0205FD98(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl MapObject_CheckSingleMovement
    // cmp r0, #1
    // bne _0205FDA8
    // mov r0, #1
    // pop {r4, pc}
    // mov r1, #6
    // add r0, r4, #0
    // lsl r1, r1, #0xa
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // bne _0205FDBA
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl MapObject_GetMovement
    // cmp r0, #0x32
    // bne _0205FDC8
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl MapObject_GetMovement
    // cmp r0, #0x30
    // bne _0205FDD6
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl MapObject_GetFlags
    // mov r1, #1
    // lsl r1, r1, #0xc
    // add r2, r0, #0
    // tst r2, r1
    // beq _0205FDF0
    // lsl r1, r1, #0xb
    // tst r1, r0
    // bne _0205FDF0
    // mov r0, #0
    // pop {r4, pc}
    // mov r1, #2
    // lsl r1, r1, #0xa
    // tst r0, r1
    // beq _0205FE06
    // add r0, r4, #0
    // bl sub_0205F8D0
    // cmp r0, #0
    // bne _0205FE06
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}



void sub_0205FE0C(void) {
    // push {r4, lr}
    // mov r1, #1
    // lsl r1, r1, #0xc
    // add r4, r0, #0
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FE22
    // add r0, r4, #0
    // bl sub_02061070
    // pop {r4, pc}
    // TODO: decompile
}



void sub_0205FE24(void) {
    // push {r4, lr}
    // mov r1, #2
    // lsl r1, r1, #0xa
    // add r4, r0, #0
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FE44
    // add r0, r4, #0
    // bl sub_02061108
    // cmp r0, #1
    // bne _0205FE44
    // add r0, r4, #0
    // bl MapObject_SetFlag2
    // pop {r4, pc}
    // TODO: decompile
}



void sub_0205FE48(void) {
    // push {r4, lr}
    // mov r1, #4
    // add r4, r0, #0
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FE5C
    // add r0, r4, #0
    // bl sub_0205FEDC
    // ldr r1, _0205FE68 ; =0x00010004
    // add r0, r4, #0
    // bl MapObject_ClearFlagsBits
    // pop {r4, pc}
    // nop
    // _0205FE68: .word 0x00010004
    // TODO: decompile
}



void sub_0205FE6C(void) {
    // push {r4, lr}
    // mov r1, #1
    // lsl r1, r1, #0x10
    // add r4, r0, #0
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FE84
    // add r0, r4, #0
    // bl sub_02060020
    // b _0205FE96
    // add r0, r4, #0
    // mov r1, #4
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FE96
    // add r0, r4, #0
    // bl sub_0205FF6C
    // ldr r1, _0205FEA0 ; =0x00010004
    // add r0, r4, #0
    // bl MapObject_ClearFlagsBits
    // pop {r4, pc}
    // _0205FEA0: .word 0x00010004
    // TODO: decompile
}



void sub_0205FEA4(void) {
    // push {r4, lr}
    // mov r1, #2
    // lsl r1, r1, #0x10
    // add r4, r0, #0
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FEBC
    // add r0, r4, #0
    // bl sub_02060114
    // b _0205FECE
    // add r0, r4, #0
    // mov r1, #8
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _0205FECE
    // add r0, r4, #0
    // bl sub_0206008C
    // ldr r1, _0205FED8 ; =0x00020008
    // add r0, r4, #0
    // bl MapObject_ClearFlagsBits
    // pop {r4, pc}
    // _0205FED8: .word 0x00020008
    // TODO: decompile
}



void sub_0205FEDC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_02061108
    // add r0, r5, #0
    // bl sub_0205F73C
    // cmp r0, #1
    // bne _0205FF6A
    // add r0, r5, #0
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r5, #0
    // bl sub_0205F514
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // bl ov01_021F9318
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060AB8
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020601BC
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_0206039C
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020603DC
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020601A4
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060698
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060700
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020607D8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_0205FF6C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_02061108
    // add r0, r5, #0
    // bl sub_0205F73C
    // cmp r0, #1
    // bne _0206001E
    // add r0, r5, #0
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r5, #0
    // bl sub_0205F514
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // bl ov01_021F9318
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060AB8
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060274
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060328
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_0206039C
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020603F8
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020606CC
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060704
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060708
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060770
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020607D8
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060AF0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02060020(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_02061108
    // add r0, r5, #0
    // bl sub_0205F73C
    // cmp r0, #1
    // bne _0206008A
    // add r0, r5, #0
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r5, #0
    // bl sub_0205F514
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // bl ov01_021F9318
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060AB8
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020603F8
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020607D8
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020603D0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060AF0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_0206008C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205F514
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // add r0, r5, #0
    // bl sub_0205F51C
    // add r0, r5, #0
    // bl sub_02061108
    // add r0, r5, #0
    // bl sub_0205F73C
    // cmp r0, #1
    // bne _02060112
    // add r0, r5, #0
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r5, #0
    // bl sub_0205F514
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // bl ov01_021F9318
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020601A4
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_0206073C
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020607A4
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_0206039C
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020609D4
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060530
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02060114(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_02061108
    // add r0, r5, #0
    // bl sub_0205F73C
    // cmp r0, #1
    // bne _020601A2
    // add r0, r5, #0
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r5, #0
    // bl sub_0205F514
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // bl ov01_021F9318
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020601A4
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_0206073C
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020607A4
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_0206039C
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_020609D4
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060530
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_02060274
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl sub_0206064C
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_020601A4(void) {
}



void sub_020601BC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r6, r1, #0
    // add r5, r0, #0
    // bl MapObject_GetID
    // add r4, r0, #0
    // add r0, r6, #0
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // bne _020601EE
    // cmp r4, #0xfd
    // bne _020601E6
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #8
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // beq _02060270
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_021FF070
    // add r0, r5, #0
    // bl MapObject_GetID
    // cmp r0, #0xfd
    // bne _02060270
    // add r0, r5, #0
    // bl ov01_022055DC
    // cmp r0, #0
    // beq _02060270
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // add r4, #0xfe
    // add r6, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _02060270
    // add r0, r5, #0
    // add r1, sp, #8
    // add r2, sp, #4
    // bl ov01_02205604
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // bl GetMetatileBehavior
    // add r4, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // bne _02060254
    // mov r0, #1
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_021FF0E4
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205B6F4
    // cmp r0, #1
    // bne _02060270
    // mov r0, #1
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_021FF964
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}



void sub_02060274(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r6, r1, #0
    // add r5, r0, #0
    // bl MapObject_GetID
    // add r4, r0, #0
    // add r0, r6, #0
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // bne _020602A6
    // cmp r4, #0xfd
    // bne _0206029E
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #8
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // beq _02060324
    // add r0, r5, #0
    // mov r1, #1
    // bl ov01_021FF070
    // add r0, r5, #0
    // bl MapObject_GetID
    // cmp r0, #0xfd
    // bne _02060324
    // add r0, r5, #0
    // bl ov01_022055DC
    // cmp r0, #0
    // beq _02060324
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // add r4, #0xfe
    // add r6, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _02060324
    // add r0, r5, #0
    // add r1, sp, #8
    // add r2, sp, #4
    // bl ov01_02205604
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // bl GetMetatileBehavior
    // add r4, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // bne _0206030A
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
    // bne _02060324
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



void sub_02060328(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r5, r0, #0
    // ldrh r0, [r4]
    // add r6, r2, #0
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x1c
    // beq _0206039A
    // add r0, r6, #0
    // bl sub_0205BA94
    // cmp r0, #1
    // bne _0206035E
    // ldrh r0, [r4]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x1c
    // cmp r0, #1
    // bne _02060354
    // add r0, r5, #0
    // bl ov01_021FE3E8
    // b _0206035E
    // cmp r0, #2
    // bne _0206035E
    // add r0, r5, #0
    // bl ov01_021FE3F4
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02060EA4
    // cmp r0, #1
    // bne _02060388
    // ldrh r0, [r4]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x1c
    // cmp r0, #1
    // bne _0206037C
    // add r0, r5, #0
    // bl ov01_021FE3C4
    // pop {r4, r5, r6, pc}
    // cmp r0, #2
    // bne _0206039A
    // add r0, r5, #0
    // bl ov01_021FE3D0
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02060ED4
    // cmp r0, #1
    // bne _0206039A
    // add r0, r5, #0
    // bl ov01_021FE3DC
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_0206039C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, r1, #0
    // bl sub_0205B7A4
    // cmp r0, #1
    // bne _020603C6
    // add r0, r4, #0
    // bl MapObject_CheckFlag26
    // cmp r0, #0
    // bne _020603CE
    // add r0, r4, #0
    // mov r1, #1
    // bl ov01_021FF4FC
    // add r0, r4, #0
    // mov r1, #1
    // bl MapObject_SetFlag26
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0
    // bl MapObject_SetFlag26
    // pop {r4, pc}
    // TODO: decompile
}



void sub_020603D0(void) {
}



void sub_020603DC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r3, #0
    // bl sub_0205F524
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r6, #0
    // bl sub_020603F8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_020603F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl MapObject_GetManager
    // bl sub_0205F610
    // cmp r0, #0
    // beq _02060416
    // ldrh r0, [r7]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1d
    // bne _02060418
    // b _0206052E
    // cmp r0, #2
    // bne _020604B0
    // add r0, r4, #0
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // beq _02060484
    // add r0, r4, #0
    // bl sub_0205B6F4
    // cmp r0, #1
    // beq _02060484
    // add r0, r6, #0
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // beq _02060484
    // add r0, r6, #0
    // bl sub_0205B6F4
    // cmp r0, #1
    // beq _02060484
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060E54
    // cmp r0, #1
    // beq _02060484
    // add r0, r4, #0
    // bl sub_0205B984
    // cmp r0, #1
    // beq _02060484
    // add r0, r4, #0
    // bl sub_0205B7A4
    // cmp r0, #1
    // beq _02060484
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060EBC
    // cmp r0, #1
    // beq _02060484
    // add r0, r4, #0
    // bl sub_0205B8AC
    // cmp r0, #1
    // beq _02060484
    // add r0, r4, #0
    // bl sub_0205BA70
    // cmp r0, #0
    // beq _02060490
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xe
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // bne _0206052E
    // add r0, r5, #0
    // bl ov01_021FD684
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xe
    // bl MapObject_SetFlagsBits
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // beq _02060504
    // add r0, r4, #0
    // bl sub_0205B6F4
    // cmp r0, #1
    // beq _02060504
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060E54
    // cmp r0, #1
    // beq _02060504
    // add r0, r4, #0
    // bl sub_0205B984
    // cmp r0, #1
    // beq _02060504
    // add r0, r4, #0
    // bl sub_0205B7A4
    // cmp r0, #1
    // beq _02060504
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060EBC
    // cmp r0, #1
    // beq _02060504
    // add r0, r4, #0
    // bl sub_0205B8AC
    // cmp r0, #1
    // beq _02060504
    // add r0, r4, #0
    // bl sub_0205BA70
    // cmp r0, #0
    // beq _02060510
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xe
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // bne _0206052E
    // add r0, r5, #0
    // bl ov01_021FD640
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xe
    // bl MapObject_SetFlagsBits
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02060530(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r3, #0
    // bl MapObject_GetManager
    // bl sub_0205F610
    // cmp r0, #0
    // bne _02060546
    // b _0206064A
    // ldrh r0, [r6]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1d
    // beq _0206064A
    // cmp r0, #2
    // bne _020605E0
    // add r0, r5, #0
    // bl sub_0205F524
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // add r0, r4, #0
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // beq _020605C8
    // add r0, r4, #0
    // bl sub_0205B6F4
    // cmp r0, #1
    // beq _020605C8
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // beq _020605C8
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205B6F4
    // cmp r0, #1
    // beq _020605C8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060E54
    // cmp r0, #1
    // beq _020605C8
    // add r0, r4, #0
    // bl sub_0205B984
    // cmp r0, #1
    // beq _020605C8
    // add r0, r4, #0
    // bl sub_0205B7A4
    // cmp r0, #1
    // beq _020605C8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060EBC
    // cmp r0, #1
    // beq _020605C8
    // add r0, r4, #0
    // bl sub_0205B8AC
    // cmp r0, #1
    // beq _020605C8
    // add r0, r4, #0
    // bl sub_0205BA70
    // cmp r0, #0
    // beq _020605D4
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // pop {r4, r5, r6, pc}
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_ClearFlagsBits
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // bl MetatileBehavior_IsEncounterGrass
    // cmp r0, #1
    // beq _02060634
    // add r0, r4, #0
    // bl sub_0205B6F4
    // cmp r0, #1
    // beq _02060634
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060E54
    // cmp r0, #1
    // beq _02060634
    // add r0, r4, #0
    // bl sub_0205B984
    // cmp r0, #1
    // beq _02060634
    // add r0, r4, #0
    // bl sub_0205B7A4
    // cmp r0, #1
    // beq _02060634
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060EBC
    // cmp r0, #1
    // beq _02060634
    // add r0, r4, #0
    // bl sub_0205B8AC
    // cmp r0, #1
    // beq _02060634
    // add r0, r4, #0
    // bl sub_0205BA70
    // cmp r0, #0
    // beq _02060640
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // pop {r4, r5, r6, pc}
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_ClearFlagsBits
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_0206064C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02060E54
    // cmp r0, #1
    // beq _02060694
    // add r0, r4, #0
    // bl sub_0205B7A4
    // cmp r0, #1
    // beq _02060694
    // add r0, r4, #0
    // bl sub_0205B828
    // cmp r0, #1
    // beq _02060694
    // add r0, r4, #0
    // bl sub_0205B8AC
    // cmp r0, #1
    // beq _02060694
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02060EBC
    // cmp r0, #1
    // beq _02060694
    // add r0, r5, #0
    // bl MapObject_CheckVisible
    // cmp r0, #0
    // bne _02060694
    // add r0, r5, #0
    // bl ov01_021FF74C
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void sub_02060698(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // bl MapObject_GetID
    // add r4, r0, #0
    // add r0, r6, #0
    // bl sub_0205B6F4
    // cmp r0, #1
    // bne _020606C8
    // cmp r4, #0xfd
    // bne _020606C0
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #8
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // beq _020606C8
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_021FF8F0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_020606CC(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // bl MapObject_GetID
    // add r4, r0, #0
    // add r0, r6, #0
    // bl sub_0205B6F4
    // cmp r0, #1
    // bne _020606FC
    // cmp r4, #0xfd
    // bne _020606F4
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #8
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // beq _020606FC
    // add r0, r5, #0
    // mov r1, #1
    // bl ov01_021FF8F0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_02060700(void) {
    // bx lr
    // TODO: decompile
}



void sub_02060704(void) {
    // bx lr
    // TODO: decompile
}



void sub_02060708(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r2, #0
    // bl sub_0205B984
    // cmp r0, #1
    // bne _02060738
    // add r0, r5, #0
    // bl MapObject_GetPreviousXCoord
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetPreviousYCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetPreviousZCoord
    // add r3, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov01_021FECA0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_0206073C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // bl sub_0205B984
    // cmp r0, #1
    // bne _0206076C
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetYCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r3, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov01_021FECA0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_02060770(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r2, #0
    // bl sub_0205B8AC
    // cmp r0, #1
    // bne _020607A0
    // add r0, r5, #0
    // bl MapObject_GetPreviousXCoord
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetPreviousYCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetPreviousZCoord
    // add r3, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov01_021FEE04
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_020607A4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // bl sub_0205B8AC
    // cmp r0, #1
    // bne _020607D4
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetYCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r3, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov01_021FEE04
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void sub_020607D8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r1, #0
    // ldrh r1, [r3]
    // add r5, r0, #0
    // lsl r1, r1, #0x13
    // lsr r1, r1, #0x1e
    // beq _020607F0
    // bl MapObject_CheckFlag24
    // cmp r0, #1
    // bne _020607F2
    // b _020609CE
    // bl sub_0205BA6C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetID
    // cmp r0, #0xfd
    // beq _02060804
    // b _0206096A
    // add r0, r5, #0
    // bl ov01_022055DC
    // cmp r0, #0
    // beq _02060902
    // add r0, r5, #0
    // bl MapObject_CheckFlag24
    // cmp r0, #0
    // beq _0206081A
    // b _020609CE
    // add r0, r6, #0
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _02060828
    // add r4, r6, #0
    // b _020608CA
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // mov r1, #3
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r1, #2
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov01_022056C4
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov01_022056C4
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, [sp, #0xc]
    // mov r6, #0
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _02060880
    // ldr r0, [sp, #0xc]
    // mov r6, #1
    // str r0, [sp, #0x10]
    // b _020608C4
    // ldr r0, [sp, #8]
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _02060892
    // ldr r0, [sp, #8]
    // mov r6, #1
    // str r0, [sp, #0x10]
    // b _020608C4
    // ldr r0, [sp, #4]
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _020608A4
    // ldr r0, [sp, #4]
    // mov r6, #1
    // str r0, [sp, #0x10]
    // b _020608C4
    // ldr r0, [sp]
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _020608B6
    // ldr r0, [sp]
    // mov r6, #1
    // str r0, [sp, #0x10]
    // b _020608C4
    // add r0, r7, #0
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _020608C4
    // str r7, [sp, #0x10]
    // mov r6, #1
    // cmp r6, #1
    // bne _020608CA
    // ldr r4, [sp, #0x10]
    // bl sub_0205BA6C
    // cmp r4, r0
    // beq _020609CE
    // add r0, r5, #0
    // mov r1, #1
    // bl MapObject_SetFlag24
    // add r0, r4, #0
    // bl sub_0205BA70
    // cmp r0, #1
    // bne _020608E8
    // mov r1, #5
    // b _020608F8
    // add r0, r4, #0
    // bl sub_0205B984
    // cmp r0, #1
    // bne _020608F6
    // mov r1, #3
    // b _020608F8
    // mov r1, #4
    // add r0, r5, #0
    // bl ov01_021FDF88
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl MapObject_CheckFlag24
    // cmp r0, #0
    // bne _020609CE
    // add r0, r6, #0
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _0206091A
    // add r4, r6, #0
    // b _02060932
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r6, #0
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _02060932
    // add r4, r6, #0
    // bl sub_0205BA6C
    // cmp r4, r0
    // beq _020609CE
    // add r0, r5, #0
    // mov r1, #1
    // bl MapObject_SetFlag24
    // add r0, r4, #0
    // bl sub_0205BA70
    // cmp r0, #1
    // bne _02060950
    // mov r1, #2
    // b _02060960
    // add r0, r4, #0
    // bl sub_0205B984
    // cmp r0, #1
    // bne _0206095E
    // mov r1, #0
    // b _02060960
    // mov r1, #1
    // add r0, r5, #0
    // bl ov01_021FDF88
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl MapObject_CheckFlag24
    // cmp r0, #0
    // bne _020609CE
    // add r0, r6, #0
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _02060982
    // add r4, r6, #0
    // b _0206099A
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r6, #0
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _0206099A
    // add r4, r6, #0
    // bl sub_0205BA6C
    // cmp r4, r0
    // beq _020609CE
    // add r0, r5, #0
    // mov r1, #1
    // bl MapObject_SetFlag24
    // add r0, r4, #0
    // bl sub_0205BA70
    // cmp r0, #1
    // bne _020609B8
    // mov r1, #2
    // b _020609C8
    // add r0, r4, #0
    // bl sub_0205B984
    // cmp r0, #1
    // bne _020609C6
    // mov r1, #0
    // b _020609C8
    // mov r1, #1
    // add r0, r5, #0
    // bl ov01_021FDA74
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_020609D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // ldrh r1, [r3]
    // add r5, r0, #0
    // lsl r1, r1, #0x13
    // lsr r1, r1, #0x1e
    // beq _02060AB2
    // bl MapObject_CheckFlag24
    // cmp r0, #0
    // beq _02060AB2
    // add r0, r5, #0
    // bl MapObject_GetID
    // cmp r0, #0xfd
    // bne _02060A96
    // add r0, r5, #0
    // bl ov01_022055DC
    // cmp r0, #0
    // beq _02060A96
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r1, #3
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r1, #2
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #4
    // bl ov01_022056C4
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // add r0, r5, #0
    // mov r1, #5
    // bl ov01_022056C4
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // ldr r0, [sp, #8]
    // mov r4, #0
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _02060A50
    // mov r4, #1
    // b _02060A86
    // ldr r0, [sp, #4]
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _02060A5E
    // mov r4, #1
    // b _02060A86
    // ldr r0, [sp]
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _02060A6C
    // mov r4, #1
    // b _02060A86
    // add r0, r7, #0
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _02060A7A
    // mov r4, #1
    // b _02060A86
    // add r0, r6, #0
    // bl sub_0205B9B8
    // cmp r0, #1
    // bne _02060A86
    // mov r4, #1
    // cmp r4, #0
    // bne _02060AB2
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_SetFlag24
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205B9B8
    // cmp r0, #0
    // bne _02060AB2
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_SetFlag24
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02060AB8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl sub_0205BA24
    // cmp r0, #1
    // bne _02060AD2
    // add r0, r5, #0
    // mov r1, #1
    // bl MapObject_SetFlag28
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl MapObject_CheckFlag28
    // cmp r0, #1
    // bne _02060AEE
    // add r0, r4, #0
    // bl sub_0205BA30
    // cmp r0, #0
    // bne _02060AEE
    // add r0, r5, #0
    // mov r1, #0
    // bl MapObject_SetFlag28
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void sub_02060AF0(void) {
    // bx lr
    // TODO: decompile
}



void sub_02060AF4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // ldr r7, [sp, #0x28]
    // add r5, r2, #0
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // add r2, r3, #0
    // add r1, r5, #0
    // add r3, r7, #0
    // add r6, r0, #0
    // mov r4, #0
    // bl sub_02060D94
    // cmp r0, #1
    // bne _02060B16
    // mov r0, #1
    // orr r4, r0
    // add r0, r6, #0
    // bl MapObject_GetFieldSystem
    // add r1, sp, #0xc
    // str r1, [sp]
    // ldr r1, [sp, #4]
    // add r2, r5, #0
    // add r3, r7, #0
    // bl sub_020549A8
    // cmp r0, #1
    // bne _02060B40
    // mov r0, #2
    // orr r4, r0
    // add r1, sp, #0xc
    // mov r0, #0
    // ldrsb r0, [r1, r0]
    // cmp r0, #0
    // beq _02060B40
    // mov r0, #8
    // orr r4, r0
    // ldr r3, [sp, #0x2c]
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r7, #0
    // bl sub_02060DEC
    // cmp r0, #1
    // bne _02060B54
    // mov r0, #2
    // orr r4, r0
    // bl sub_0203993C
    // bl sub_0203401C
    // cmp r0, #0
    // beq _02060B76
    // ldr r2, [sp, #8]
    // add r0, r6, #0
    // add r1, r5, #0
    // add r3, r7, #0
    // bl sub_02060BFC
    // cmp r0, #1
    // bne _02060B8A
    // mov r0, #4
    // orr r4, r0
    // b _02060B8A
    // ldr r2, [sp, #8]
    // add r0, r6, #0
    // add r1, r5, #0
    // add r3, r7, #0
    // bl sub_02060CA8
    // cmp r0, #1
    // bne _02060B8A
    // mov r0, #4
    // orr r4, r0
    // add r0, r4, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02060B90(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r1, #0
    // add r1, sp, #8
    // add r5, r0, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // bl MapObject_CopyPositionVector
    // ldr r0, [sp, #0x28]
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, sp, #8
    // add r2, r6, #0
    // add r3, r7, #0
    // bl sub_02060AF4
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02060BB8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // bl MapObject_GetXCoord
    // add r6, r0, #0
    // add r0, r4, #0
    // bl GetDeltaXByFacingDirection
    // add r7, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetYCoord
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // str r0, [sp, #8]
    // add r0, r4, #0
    // bl GetDeltaYByFacingDirection
    // str r4, [sp]
    // add r3, r0, #0
    // ldr r4, [sp, #8]
    // ldr r2, [sp, #4]
    // add r0, r5, #0
    // add r1, r6, r7
    // add r3, r4, r3
    // bl sub_02060B90
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02060BFC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl MapObject_GetManager
    // add r5, r0, #0
    // bl MapObjectManager_GetObjects2
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl MapObjectManager_GetObjectCount
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // cmp r0, r1
    // beq _02060C94
    // mov r1, #1
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _02060C94
    // mov r1, #1
    // ldr r0, [sp, #8]
    // lsl r1, r1, #0x12
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // bne _02060C94
    // ldr r0, [sp, #8]
    // bl MapObject_GetXCoord
    // add r5, r0, #0
    // ldr r0, [sp, #8]
    // bl MapObject_GetZCoord
    // cmp r5, r4
    // bne _02060C68
    // cmp r0, r7
    // bne _02060C68
    // ldr r0, [sp, #8]
    // bl MapObject_GetYCoord
    // sub r0, r0, r6
    // bpl _02060C5E
    // neg r0, r0
    // cmp r0, #2
    // bge _02060C68
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // bl MapObject_GetPreviousXCoord
    // add r5, r0, #0
    // ldr r0, [sp, #8]
    // bl MapObject_GetPreviousZCoord
    // cmp r5, r4
    // bne _02060C94
    // cmp r0, r7
    // bne _02060C94
    // ldr r0, [sp, #8]
    // bl MapObject_GetYCoord
    // sub r0, r0, r6
    // bpl _02060C8A
    // neg r0, r0
    // cmp r0, #2
    // bge _02060C94
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r0, sp, #8
    // bl MapObjectArray_NextObject
    // ldr r0, [sp, #4]
    // sub r0, r0, #1
    // str r0, [sp, #4]
    // bne _02060C1C
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02060CA8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // add r5, r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // bl MapObject_GetManager
    // add r7, r0, #0
    // bl MapObjectManager_GetObjects2
    // str r0, [sp, #4]
    // add r0, r7, #0
    // bl MapObjectManager_GetObjectCount
    // add r7, r0, #0
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // cmp r0, r1
    // beq _02060D84
    // mov r1, #1
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _02060D84
    // ldr r0, [sp, #4]
    // bl MapObject_GetXCoord
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // bl MapObject_GetZCoord
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // cmp r1, r5
    // bne _02060D0A
    // cmp r0, r6
    // bne _02060D0A
    // ldr r0, [sp, #4]
    // bl MapObject_GetYCoord
    // sub r0, r0, r4
    // bpl _02060D00
    // neg r0, r0
    // cmp r0, #2
    // bge _02060D0A
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // bl MapObject_GetPreviousXCoord
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // bl MapObject_GetPreviousZCoord
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // cmp r1, r5
    // bne _02060D3A
    // cmp r0, r6
    // bne _02060D3A
    // ldr r0, [sp, #4]
    // bl MapObject_GetYCoord
    // sub r0, r0, r4
    // bpl _02060D30
    // neg r0, r0
    // cmp r0, #2
    // bge _02060D3A
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // bl MapObject_GetID
    // cmp r0, #0xfd
    // bne _02060D84
    // ldr r0, [sp, #4]
    // bl ov01_022055DC
    // cmp r0, #0
    // beq _02060D84
    // ldr r0, [sp, #4]
    // bl MapObject_CheckVisible
    // cmp r0, #0
    // bne _02060D84
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ov01_02205664
    // ldr r0, [sp, #0xc]
    // cmp r0, r5
    // bne _02060D84
    // ldr r0, [sp, #8]
    // cmp r0, r6
    // bne _02060D84
    // ldr r0, [sp, #4]
    // bl MapObject_GetYCoord
    // sub r0, r0, r4
    // bpl _02060D7A
    // neg r0, r0
    // cmp r0, #2
    // bge _02060D84
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, sp, #4
    // bl MapObjectArray_NextObject
    // sub r7, r7, #1
    // bne _02060CC8
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02060D94(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r4, r3, #0
    // bl MapObject_GetInitialX
    // add r7, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetXRange
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _02060DC0
    // add r1, r7, r0
    // sub r0, r7, r0
    // cmp r0, r5
    // bgt _02060DBC
    // cmp r1, r5
    // bge _02060DC0
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl MapObject_GetInitialZ
    // add r5, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetYRange
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _02060DE6
    // add r1, r5, r0
    // sub r0, r5, r0
    // cmp r0, r4
    // bgt _02060DE2
    // cmp r1, r4
    // bge _02060DE6
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02060DEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // add r5, r3, #0
    // bl sub_0205F8D0
    // cmp r0, #0
    // bne _02060E46
    // add r0, r4, #0
    // bl MapObject_GetFieldSystem
    // str r0, [sp]
    // add r0, r4, #0
    // bl sub_0205F504
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, [sp]
    // add r1, r6, #0
    // add r2, r7, #0
    // bl GetMetatileBehavior
    // add r6, r0, #0
    // bl sub_0205BA6C
    // cmp r6, r0
    // bne _02060E28
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _02060E4C ; =_020FD4CC
    // lsl r5, r5, #2
    // ldr r1, [r1, r5]
    // add r0, r4, #0
    // blx r1
    // cmp r0, #1
    // beq _02060E42
    // ldr r1, _02060E50 ; =_020FD4BC
    // add r0, r6, #0
    // ldr r1, [r1, r5]
    // blx r1
    // cmp r0, #1
    // bne _02060E46
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02060E4C: .word _020FD4CC
    // _02060E50: .word _020FD4BC
    // TODO: decompile
}



void sub_02060E54(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205BA54
    // cmp r0, #0
    // beq _02060E74
    // add r0, r5, #0
    // bl MapObject_CheckFlag28
    // cmp r0, #0
    // bne _02060EA0
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl MetatileBehavior_IsSurfableWater
    // cmp r0, #0
    // beq _02060E84
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205B78C
    // cmp r0, #0
    // beq _02060EA0
    // add r0, r5, #0
    // bl MapObject_GetSpriteID
    // sub r0, #0xb2
    // cmp r0, #1
    // bhi _02060EA0
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void sub_02060EA4(void) {
}



void sub_02060EBC(void) {
}



void sub_02060ED4(void) {
}



void sub_02060EEC(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl MapObject_CheckFlag28
    // cmp r0, #1
    // bne _02060F08
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205BA30
    // cmp r0, #1
    // bne _02060F08
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}



void GetDeltaXByFacingDirection(void) {
    // lsl r1, r0, #2
    // ldr r0, _02060F14 ; =_020FD4AC
    // ldr r0, [r0, r1]
    // bx lr
    // _02060F14: .word _020FD4AC
    // TODO: decompile
}



void GetDeltaYByFacingDirection(void) {
    // lsl r1, r0, #2
    // ldr r0, _02060F20 ; =_020FD49C
    // ldr r0, [r0, r1]
    // bx lr
    // _02060F20: .word _020FD49C
    // TODO: decompile
}



void sub_02060F24(void) {
    MapObject_GetXCoord();
    MapObject_SetPreviousX(r5, r0);
    MapObject_GetYCoord(r5);
    MapObject_SetPreviousY(r5, r0);
    MapObject_GetZCoord(r5);
    MapObject_SetPreviousZ(r5, r0);
    GetDeltaXByFacingDirection(r4);
    MapObject_AddCurrentX(r5, r0);
    MapObject_AddCurrentY(r5, 0);
    GetDeltaYByFacingDirection(r4);
    MapObject_AddCurrentZ(r5, r0);
}



void sub_02060F78(void) {
}



void sub_02060FA8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // bl MapObject_GetXCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl GetDeltaXByFacingDirection
    // add r7, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetZCoord
    // str r0, [sp]
    // add r0, r5, #0
    // bl GetDeltaYByFacingDirection
    // add r5, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetFieldSystem
    // ldr r2, [sp]
    // add r1, r6, r7
    // add r2, r2, r5
    // bl GetMetatileBehavior
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02060FE0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // bl MapObject_GetXCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl GetDeltaXByFacingDirection
    // add r7, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetZCoord
    // str r0, [sp]
    // add r0, r5, #0
    // bl GetDeltaYByFacingDirection
    // add r5, r0, #0
    // add r0, r4, #0
    // bl MapObject_GetFieldSystem
    // ldr r2, [sp]
    // add r1, r6, r7
    // add r2, r2, r5
    // bl sub_020548EC
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_0206101C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // add r1, sp, #0
    // add r6, r0, #0
    // add r4, r2, #0
    // bl MapObject_CopyPositionVector
    // cmp r5, #3
    // bhi _02061062
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0206103C: ; jump table
    // ldr r0, [sp, #8]
    // sub r0, r0, r4
    // str r0, [sp, #8]
    // b _02061062
    // ldr r0, [sp, #8]
    // add r0, r0, r4
    // str r0, [sp, #8]
    // b _02061062
    // ldr r0, [sp]
    // sub r0, r0, r4
    // str r0, [sp]
    // b _02061062
    // ldr r0, [sp]
    // add r0, r0, r4
    // str r0, [sp]
    // add r0, r6, #0
    // add r1, sp, #0
    // bl MapObject_SetPositionVector
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}



void sub_02061070(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r1, sp, #0xc
    // add r5, r0, #0
    // bl MapObject_CopyPositionVector
    // add r3, sp, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, r5, #0
    // bl MapObject_CheckIgnoreHeights
    // cmp r0, #1
    // bne _020610A2
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl MapObject_ClearFlagsBits
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl MapObject_CheckFlag29
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // add r1, sp, #0
    // add r2, r4, #0
    // bl sub_02061248
    // add r4, r0, #0
    // cmp r4, #1
    // bne _020610F6
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // bl MapObject_SetPositionVector
    // add r0, r5, #0
    // bl MapObject_GetYCoord
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MapObject_SetPreviousY
    // ldr r1, [sp, #0x10]
    // add r0, r5, #0
    // asr r2, r1, #3
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // bl MapObject_SetCurrentY
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl MapObject_ClearFlagsBits
    // b _02061100
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl MapObject_SetFlagsBits
    // add r0, r4, #0
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void sub_02061108(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205BA6C
    // add r6, r0, #0
    // add r0, r5, #0
    // add r4, r6, #0
    // bl sub_0205F8D0
    // cmp r0, #0
    // bne _0206115A
    // add r0, r5, #0
    // bl MapObject_GetPreviousXCoord
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetPreviousZCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // add r1, r4, #0
    // add r2, r6, #0
    // add r7, r0, #0
    // bl GetMetatileBehavior
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r2, r0, #0
    // add r0, r7, #0
    // add r1, r4, #0
    // bl GetMetatileBehavior
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_0205F50C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_0205F4FC
    // add r0, r4, #0
    // bl MetatileBehavior_IsNone
    // cmp r0, #1
    // bne _02061182
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xa
    // bl MapObject_SetFlagsBits
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xa
    // bl MapObject_ClearFlagsBits
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void sub_02061190(void) {
    // cmp r0, #3
    // bhi _020611C6
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _020611A0: ; jump table
    // ldr r0, [r1, #8]
    // sub r0, r0, r2
    // str r0, [r1, #8]
    // bx lr
    // ldr r0, [r1, #8]
    // add r0, r0, r2
    // str r0, [r1, #8]
    // bx lr
    // ldr r0, [r1]
    // sub r0, r0, r2
    // str r0, [r1]
    // bx lr
    // ldr r0, [r1]
    // add r0, r0, r2
    // str r0, [r1]
    // bx lr
    // TODO: decompile
}



void sub_020611C8(void) {
    // lsl r3, r0, #0x10
    // mov r0, #2
    // lsl r0, r0, #0xe
    // add r3, r3, r0
    // lsl r1, r1, #0x10
    // str r3, [r2]
    // add r0, r1, r0
    // str r0, [r2, #8]
    // bx lr
    // TODO: decompile
}



void sub_020611DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl MapObject_GetMovement
    // sub r0, #0x33
    // cmp r0, #3
    // bhi _020611F0
    // add r0, r4, #0
    // bl sub_0205F430
    // pop {r4, pc}
    // TODO: decompile
}



void sub_020611F4(void) {
    // lsl r1, r0, #2
    // ldr r0, _020611FC ; =_020FD4DC
    // ldr r0, [r0, r1]
    // bx lr
    // _020611FC: .word _020FD4DC
    // TODO: decompile
}



void sub_02061200(void) {
    // cmp r0, r2
    // ble _02061208
    // mov r0, #2
    // bx lr
    // cmp r0, r2
    // bge _02061210
    // mov r0, #3
    // bx lr
    // cmp r1, r3
    // bgt _02061218
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void sub_0206121C(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r1, sp, #4
    // str r1, [sp]
    // ldr r1, [r4, #4]
    // ldr r2, [r4]
    // ldr r3, [r4, #8]
    // bl sub_02054940
    // add r1, sp, #4
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _0206123E
    // add sp, #8
    // mov r0, #0
    // pop {r4, pc}
    // str r0, [r4, #4]
    // mov r0, #1
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}



void sub_02061248(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r1, sp, #4
    // str r1, [sp]
    // add r4, r2, #0
    // ldr r1, [r5, #4]
    // ldr r2, [r5]
    // ldr r3, [r5, #8]
    // bl sub_02054940
    // add r1, sp, #4
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _0206126C
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // cmp r1, #2
    // bne _0206127A
    // cmp r4, #0
    // bne _0206127A
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // str r0, [r5, #4]
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


