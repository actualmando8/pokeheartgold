/* Decompiled from asm/overlay_01_021F72DC.s */
#include "global.h"

void ov01_021F72DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl MapObject_GetSpriteID
    // cmp r0, #0xf8
    // bgt _021F7356
    // bge _021F737E
    // cmp r0, #0x62
    // bgt _021F7308
    // cmp r0, #0x61
    // blt _021F72FA
    // beq _021F737E
    // cmp r0, #0x62
    // beq _021F737E
    // b _021F7388
    // cmp r0, #0
    // bgt _021F7302
    // beq _021F737E
    // b _021F7388
    // cmp r0, #0x15
    // beq _021F737E
    // b _021F7388
    // cmp r0, #0xb0
    // bgt _021F7310
    // beq _021F737E
    // b _021F7388
    // add r1, r0, #0
    // sub r1, #0xb1
    // cmp r1, #0x18
    // bhi _021F7388
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F7324: ; jump table
    // ldr r2, _021F73C0 ; =0x00000103
    // cmp r0, r2
    // bgt _021F736E
    // bge _021F737E
    // cmp r0, #0xf9
    // bgt _021F7366
    // beq _021F737E
    // b _021F7388
    // sub r1, r2, #1
    // cmp r0, r1
    // beq _021F737E
    // b _021F7388
    // add r1, r2, #1
    // cmp r0, r1
    // bgt _021F7378
    // beq _021F737E
    // b _021F7388
    // add r1, r2, #2
    // cmp r0, r1
    // bne _021F7388
    // add r0, r4, #0
    // bl sub_0205F40C
    // ldr r0, [r0, #4]
    // pop {r4, pc}
    // mov r1, #0x6b
    // lsl r1, r1, #2
    // cmp r0, r1
    // blt _021F73A0
    // ldr r1, _021F73C4 ; =0x000003E1
    // cmp r0, r1
    // bgt _021F73A0
    // add r0, r4, #0
    // bl sub_0205F40C
    // ldr r0, [r0]
    // pop {r4, pc}
    // ldr r1, _021F73C8 ; =0x00000106
    // cmp r0, r1
    // blt _021F73B4
    // add r1, r1, #7
    // cmp r0, r1
    // bgt _021F73B4
    // add r0, r4, #0
    // bl sub_02064084
    // pop {r4, pc}
    // add r0, r4, #0
    // bl sub_0205F40C
    // ldr r0, [r0, #4]
    // pop {r4, pc}
    // nop
    // _021F73C0: .word 0x00000103
    // _021F73C4: .word 0x000003E1
    // _021F73C8: .word 0x00000106
    // TODO: decompile
}


void ov01_021F73CC(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x14
    // add r5, r0, #0
    // bl sub_0205F3E8
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // strb r0, [r4, #2]
    // add r0, r5, #0
    // add r1, r4, #4
    // bl ov01_021F9510
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021F73F2
    // add r0, r5, #0
    // bl sub_0205F484
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F73F4(void) {
    sub_0205F40C();
    ov01_021F95A8(r4, (r0 + 4));
}


void ov01_021F7408(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021F7420
    // add r1, r4, #0
    // add r1, #8
    // bl ov01_021F9610
    // add r0, r5, #0
    // add r1, r4, #4
    // bl ov01_021F95A8
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F7434(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F7476
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _021F7456
    // add r0, r5, #0
    // add r1, r4, #4
    // bl ov01_021F9510
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021F7476
    // add r1, r4, #0
    // add r1, #8
    // bl ov01_021F9630
    // ldr r1, [r4, #4]
    // add r0, r5, #0
    // bl ov01_021FA3E8
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_ClearFlagsBits
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F7478(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x18
    // add r5, r0, #0
    // bl sub_0205F3E8
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // strb r0, [r4, #0x10]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9510
    // mov r0, #0
    // strb r0, [r4, #0x15]
    // ldrb r1, [r4, #0x17]
    // mov r0, #2
    // bic r1, r0
    // strb r1, [r4, #0x17]
    // ldrb r1, [r4, #0x17]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #0x17]
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021F74B2
    // add r0, r5, #0
    // bl sub_0205F484
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F74B4(void) {
    sub_0205F40C();
    ov01_021F95A8(r4, r0);
}


void ov01_021F74C8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021F74DE
    // add r1, r4, #4
    // bl ov01_021F9610
    // ldrb r1, [r4, #0x17]
    // mov r0, #2
    // bic r1, r0
    // strb r1, [r4, #0x17]
    // ldrb r1, [r4, #0x17]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #0x17]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F95A8
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F7504(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // ldrb r0, [r4, #0x17]
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // bne _021F7522
    // add r0, r5, #0
    // bl MapObject_GetID
    // cmp r0, #0xfd
    // beq _021F7524
    // b _021F7654
    // add r0, r5, #0
    // bl MapObject_GetManager
    // bl MapObjectManager_GetFieldSystem
    // str r0, [sp, #0x10]
    // ldr r0, [r0, #0xc]
    // bl SaveArray_Party_Get
    // bl GetFirstAliveMonInParty_CrashIfNone
    // str r0, [sp, #0xc]
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // ldr r0, [sp, #0xc]
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // add r6, r0, #0
    // ldr r0, [sp, #0xc]
    // bl GetMonGender
    // str r0, [sp, #8]
    // lsl r1, r6, #0x10
    // ldr r2, [sp, #8]
    // add r0, r7, #0
    // lsr r1, r1, #0x10
    // bl FollowMon_GetSpriteID
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // bl MonIsShiny
    // str r0, [sp, #4]
    // lsl r2, r6, #0x18
    // ldrb r1, [r4, #0x17]
    // mov r0, #2
    // lsr r2, r2, #0x18
    // orr r0, r1
    // strb r0, [r4, #0x17]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl FollowMon_SetObjectParams
    // ldr r1, [sp, #0x14]
    // add r0, r5, #0
    // bl MapObject_SetSpriteID
    // add r0, r5, #0
    // bl sub_0205FCD4
    // add r0, r5, #0
    // mov r1, #4
    // bl MapObject_SetFlagsBits
    // add r0, r5, #0
    // add r1, sp, #0x30
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // add r1, r0, #0
    // mov r0, #2
    // lsl r2, r1, #0x10
    // lsl r0, r0, #0xe
    // add r0, r2, r0
    // str r0, [sp, #0x30]
    // add r0, r5, #0
    // bl MapObject_SetPreviousX
    // add r0, r5, #0
    // bl MapObject_GetYCoord
    // add r1, r0, #0
    // add r0, r5, #0
    // bl MapObject_SetPreviousY
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r1, r0, #0
    // mov r0, #2
    // lsl r2, r1, #0x10
    // lsl r0, r0, #0xe
    // add r0, r2, r0
    // str r0, [sp, #0x38]
    // add r0, r5, #0
    // bl MapObject_SetPreviousZ
    // add r0, r5, #0
    // add r1, sp, #0x30
    // bl MapObject_SetPositionVector
    // add r0, r5, #0
    // bl MapObject_ClearHeldMovement
    // ldr r0, [sp, #0x10]
    // add r0, #0xf4
    // ldr r0, [r0]
    // cmp r0, r7
    // bne _021F761C
    // ldr r0, [sp, #0x10]
    // add r0, #0xfc
    // ldrh r0, [r0]
    // cmp r0, r6
    // bne _021F761C
    // ldr r0, [sp, #0x10]
    // add r0, #0xfb
    // ldrb r1, [r0]
    // ldr r0, [sp, #4]
    // cmp r1, r0
    // bne _021F761C
    // ldr r0, [sp, #0x10]
    // add r0, #0xf8
    // ldrb r1, [r0]
    // ldr r0, [sp, #8]
    // cmp r1, r0
    // beq _021F7636
    // ldr r0, [sp, #8]
    // lsl r2, r6, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #4]
    // add r1, r7, #0
    // lsr r2, r2, #0x18
    // bl FieldSystem_SetFollowerPokeParam
    // add r0, r5, #0
    // mov r1, #1
    // bl MapObject_SetFacingDirectionDirect
    // mov r1, #0
    // ldr r0, [sp, #0xc]
    // add r2, r1, #0
    // bl GetMonData
    // add r3, r0, #0
    // mov r1, #0x42
    // lsl r2, r7, #0x10
    // ldr r0, [sp, #0x10]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // ldr r1, [sp, #0xc]
    // lsr r2, r2, #0x10
    // bl FieldSystem_UnkSub108_Set
    // add r0, r5, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F7700
    // ldr r0, [r4]
    // cmp r0, #0
    // bne _021F766C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9510
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021F7700
    // ldrb r1, [r4, #0x17]
    // mov r0, #1
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r4, #0x17]
    // add r1, sp, #0x18
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // add r0, r5, #0
    // add r1, sp, #0x24
    // bl MapObject_CopyFacingVector
    // add r0, r5, #0
    // bl MapObject_GetSpriteID
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // add r1, r0, #0
    // add r0, r5, #0
    // add r2, sp, #0x18
    // bl ov01_021F8E70
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x24
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x2c]
    // add r0, r5, #0
    // bl MapObject_SetFacingVector
    // add r0, r5, #0
    // bl ov01_02205564
    // cmp r0, #0
    // beq _021F76CC
    // ldr r2, [r4]
    // mov r0, #1
    // add r1, r5, #0
    // bl ov01_0220589C
    // b _021F76E0
    // add r0, r5, #0
    // bl ov01_0220553C
    // cmp r0, #0
    // beq _021F76E0
    // ldr r2, [r4]
    // mov r0, #1
    // add r1, r5, #0
    // bl ov01_02205808
    // ldr r0, [r4]
    // add r1, r4, #4
    // bl ov01_021F9630
    // ldr r1, [r4]
    // add r0, r5, #0
    // bl ov01_021FA3E8
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_ClearFlagsBits
    // add r0, r5, #0
    // bl sub_0205F484
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F7704(void) {
    sub_0205F40C();
    *((u8*)(r0 + 0x15)) = 0;
    MapObject_GetFacingVector(r4, 0);
    *((u32*)(r0 + 4)) = 0;
}


void ov01_021F771C(void) {
    MapObjectManager_GetFirstActiveObjectByID(0xfd);
    sub_0205F40C();
}


void ov01_021F772C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl sub_0205F40C
    // str r0, [sp]
    // ldr r7, [r0, #4]
    // add r0, r4, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F779C
    // cmp r7, #0
    // beq _021F779C
    // add r0, r4, #0
    // bl MapObject_GetFacingDirection
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl sub_0205F330
    // add r5, r0, #0
    // cmp r5, #9
    // blt _021F7760
    // bl GF_AssertFail
    // lsl r6, r5, #2
    // ldr r5, _021F77A0 ; =ov01_02208AC0
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // ldr r5, [r5, r6]
    // add r0, r4, #0
    // add r1, r7, #0
    // blx r5
    // add r0, r4, #0
    // bl MapObject_GetFacingVector
    // mov r1, #2
    // lsl r1, r1, #0xa
    // str r1, [r0, #8]
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // strb r1, [r0, #2]
    // add r0, r4, #0
    // bl sub_0205F330
    // ldr r1, [sp]
    // strb r0, [r1, #3]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021FA3E8
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021F8C88
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F77A0: .word ov01_02208AC0
    // TODO: decompile
}


void ov01_021F77A4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl sub_0205F40C
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F77CE
    // ldr r5, [r5, #4]
    // cmp r5, #0
    // beq _021F77CE
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021FA3E8
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021F8C88
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F77D0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl sub_0205F40C
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F780E
    // ldr r5, [r5, #4]
    // cmp r5, #0
    // beq _021F780E
    // add r0, r4, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F77FE
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021FA3E8
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021F8C88
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F7810(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // add r0, r5, #0
    // ldr r6, [r4]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F7890
    // cmp r6, #0
    // beq _021F7890
    // ldrb r1, [r4, #0x17]
    // lsl r0, r1, #0x1f
    // lsr r0, r0, #0x1f
    // bne _021F7866
    // mov r0, #1
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r4, #0x17]
    // add r0, r5, #0
    // bl ov01_02205564
    // cmp r0, #0
    // beq _021F7852
    // ldr r2, [r4]
    // mov r0, #1
    // add r1, r5, #0
    // bl ov01_0220589C
    // b _021F7866
    // add r0, r5, #0
    // bl ov01_0220553C
    // cmp r0, #0
    // beq _021F7866
    // mov r0, #1
    // add r1, r5, #0
    // add r2, r6, #0
    // bl ov01_02205808
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // add r7, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl ov01_021F8D80
    // add r0, r5, #0
    // add r1, r6, #0
    // strb r7, [r4, #0x10]
    // bl ov01_021FA3E8
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov01_021F8C88
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F7894(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // add r0, r5, #0
    // ldr r6, [r4]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F7914
    // cmp r6, #0
    // beq _021F7914
    // ldrb r1, [r4, #0x17]
    // lsl r0, r1, #0x1f
    // lsr r0, r0, #0x1f
    // bne _021F78EA
    // mov r0, #1
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r4, #0x17]
    // add r0, r5, #0
    // bl ov01_02205564
    // cmp r0, #0
    // beq _021F78D6
    // ldr r2, [r4]
    // mov r0, #1
    // add r1, r5, #0
    // bl ov01_0220589C
    // b _021F78EA
    // add r0, r5, #0
    // bl ov01_0220553C
    // cmp r0, #0
    // beq _021F78EA
    // mov r0, #1
    // add r1, r5, #0
    // add r2, r6, #0
    // bl ov01_02205808
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // add r7, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl ov01_021F8D80
    // add r0, r5, #0
    // add r1, r6, #0
    // strb r7, [r4, #0x10]
    // bl ov01_021FA3E8
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov01_021F8C88
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F7918(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F7968
    // ldr r6, [r4]
    // cmp r6, #0
    // beq _021F7968
    // ldrb r1, [r4, #0x17]
    // lsl r0, r1, #0x1f
    // lsr r0, r0, #0x1f
    // bne _021F7958
    // mov r0, #1
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r4, #0x17]
    // add r0, r5, #0
    // bl ov01_0220553C
    // cmp r0, #0
    // beq _021F7958
    // mov r0, #1
    // add r1, r5, #0
    // add r2, r6, #0
    // bl ov01_02205808
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov01_021FA3E8
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov01_021F8C88
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F796C(void) {
    // push {r4, lr}
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // beq _021F7990
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // b _021F7996
    // add r0, r4, #0
    // bl ov01_021F8C30
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F04
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F79A0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // beq _021F79C4
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // add r0, r5, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F79D8
    // mov r1, #2
    // add r0, r4, #0
    // lsl r1, r1, #0xa
    // bl sub_02023F04
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F79DC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // beq _021F7A00
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // add r0, r5, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F7A14
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F7A18(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // beq _021F7A3C
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // add r0, r5, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F7A50
    // mov r1, #2
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F7A54(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // beq _021F7A78
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // add r0, r5, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F7A8C
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xe
    // bl sub_02023F04
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F7A90(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x1c
    // add r6, r0, #0
    // add r4, r2, #0
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // add r5, r1, #0
    // cmp r3, r0
    // beq _021F7ABC
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r0, #0
    // strh r0, [r4]
    // mov r0, #3
    // ldrsb r0, [r4, r0]
    // cmp r0, #6
    // beq _021F7AC8
    // mov r0, #0
    // strh r0, [r4]
    // add r0, r6, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F7B0C
    // ldr r6, _021F7B10 ; =ov01_02208A64
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #0
    // str r0, [r3]
    // ldrsh r1, [r4, r1]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // bl sub_02023F04
    // mov r0, #0
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
    // lsl r2, r1, #2
    // add r1, sp, #0
    // ldr r1, [r1, r2]
    // cmp r1, #0
    // bne _021F7B0C
    // strh r0, [r4]
    // add sp, #0x1c
    // pop {r3, r4, r5, r6, pc}
    // _021F7B10: .word ov01_02208A64
    // TODO: decompile
}


void ov01_021F7B14(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r4, r2, #0
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // add r5, r1, #0
    // cmp r3, r0
    // beq _021F7B40
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r0, #0
    // strh r0, [r4]
    // mov r0, #3
    // ldrsb r0, [r4, r0]
    // cmp r0, #7
    // beq _021F7B4C
    // mov r0, #0
    // strh r0, [r4]
    // add r0, r6, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F7B88
    // ldr r6, _021F7B8C ; =ov01_02208A08
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #0
    // ldrsh r1, [r4, r1]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // bl sub_02023F04
    // mov r0, #0
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
    // lsl r2, r1, #2
    // add r1, sp, #0
    // ldr r1, [r1, r2]
    // cmp r1, #0
    // bne _021F7B88
    // strh r0, [r4]
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021F7B8C: .word ov01_02208A08
    // TODO: decompile
}


void ov01_021F7B90(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x20
    // add r6, r0, #0
    // add r4, r2, #0
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // add r5, r1, #0
    // cmp r3, r0
    // beq _021F7BBC
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r0, #0
    // strh r0, [r4]
    // mov r0, #3
    // ldrsb r0, [r4, r0]
    // cmp r0, #8
    // beq _021F7BC8
    // mov r0, #0
    // strh r0, [r4]
    // add r0, r6, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F7C0C
    // ldr r6, _021F7C10 ; =ov01_02208A80
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #0
    // ldrsh r1, [r4, r1]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // bl sub_02023F04
    // mov r0, #0
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
    // lsl r2, r1, #2
    // add r1, sp, #0
    // ldr r1, [r1, r2]
    // cmp r1, #0
    // bne _021F7C0C
    // strh r0, [r4]
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // _021F7C10: .word ov01_02208A80
    // TODO: decompile
}


void ov01_021F7C14(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl sub_0205F40C
    // str r0, [sp]
    // ldr r7, [r0, #4]
    // add r0, r4, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F7C78
    // cmp r7, #0
    // beq _021F7C78
    // add r0, r4, #0
    // bl MapObject_GetFacingDirection
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl sub_0205F330
    // add r5, r0, #0
    // cmp r5, #0xa
    // blt _021F7C48
    // bl GF_AssertFail
    // lsl r6, r5, #2
    // ldr r5, _021F7C7C ; =ov01_02208B0C
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // ldr r5, [r5, r6]
    // add r0, r4, #0
    // add r1, r7, #0
    // blx r5
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // strb r1, [r0, #2]
    // add r0, r4, #0
    // bl sub_0205F330
    // ldr r1, [sp]
    // strb r0, [r1, #3]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021FA3E8
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021F8C88
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F7C7C: .word ov01_02208B0C
    // TODO: decompile
}


void ov01_021F7C80(void) {
    // push {r4, lr}
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // bne _021F7C94
    // mov r0, #3
    // ldrsb r0, [r2, r0]
    // cmp r0, #9
    // bne _021F7CAC
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // b _021F7CB2
    // add r0, r4, #0
    // bl ov01_021F8C30
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F04
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F7CBC(void) {
    // push {r4, lr}
    // mov r0, #3
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r0, #9
    // beq _021F7CD8
    // add r0, r4, #0
    // mov r1, #4
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F7CE4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r6, r0, #0
    // add r0, r5, #0
    // ldr r4, [r6, #4]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F7DA2
    // cmp r4, #0
    // beq _021F7DA2
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // add r7, r0, #0
    // add r0, r5, #0
    // bl sub_0205F330
    // cmp r0, #0
    // bne _021F7D56
    // cmp r7, #1
    // bls _021F7D1C
    // mov r0, #1
    // str r0, [sp, #4]
    // b _021F7D20
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl sub_02023EF4
    // ldr r1, [sp, #4]
    // cmp r1, r0
    // bne _021F7D34
    // mov r0, #3
    // ldrsb r0, [r6, r0]
    // cmp r0, #0
    // bne _021F7D4C
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F04
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F04
    // b _021F7D88
    // cmp r7, #1
    // bls _021F7D60
    // mov r0, #1
    // str r0, [sp]
    // b _021F7D64
    // mov r0, #0
    // str r0, [sp]
    // add r0, r4, #0
    // bl sub_02023EF4
    // ldr r1, [sp]
    // cmp r1, r0
    // beq _021F7D7E
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // strb r7, [r6, #2]
    // add r0, r5, #0
    // bl sub_0205F330
    // strb r0, [r6, #3]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FA3E8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F8C88
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F7DA8(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x14
    // add r5, r0, #0
    // bl sub_0205F3E8
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // strb r0, [r4]
    // add r0, r5, #0
    // add r1, r4, #4
    // bl ov01_021F9510
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021F7DCE
    // add r0, r5, #0
    // bl sub_0205F484
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F7DD0(void) {
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    sub_0205F40C(0);
    ov01_021F95A8(r4, (r0 + 4));
    MapObject_SetFacingVector(r4);
}


void ov01_021F7DFC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021F7E14
    // add r1, r4, #0
    // add r1, #8
    // bl ov01_021F9610
    // add r0, r5, #0
    // add r1, r4, #4
    // bl ov01_021F95A8
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F7E28(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F7E6A
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _021F7E4A
    // add r0, r5, #0
    // add r1, r4, #4
    // bl ov01_021F9510
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021F7E6A
    // add r1, r4, #0
    // add r1, #8
    // bl ov01_021F9630
    // ldr r1, [r4, #4]
    // add r0, r5, #0
    // bl ov01_021FA3E8
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_ClearFlagsBits
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F7E6C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl sub_0205F40C
    // str r0, [sp]
    // ldr r7, [r0, #4]
    // add r0, r4, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F7EDC
    // cmp r7, #0
    // beq _021F7EDC
    // add r0, r4, #0
    // bl MapObject_GetFacingDirection
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl sub_0205F330
    // add r5, r0, #0
    // cmp r5, #0xa
    // blt _021F7EA0
    // bl GF_AssertFail
    // lsl r6, r5, #2
    // ldr r5, _021F7EE0 ; =ov01_02208B34
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // ldr r5, [r5, r6]
    // add r0, r4, #0
    // add r1, r7, #0
    // blx r5
    // add r0, r4, #0
    // bl MapObject_GetFacingVector
    // mov r1, #2
    // lsl r1, r1, #0xa
    // str r1, [r0, #8]
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // strb r1, [r0]
    // add r0, r4, #0
    // bl sub_0205F330
    // ldr r1, [sp]
    // strb r0, [r1, #2]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021FA3E8
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021F8C88
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F7EE0: .word ov01_02208B34
    // TODO: decompile
}


void ov01_021F7EE4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // mov r0, #0
    // ldrsb r0, [r4, r0]
    // add r5, r1, #0
    // cmp r3, r0
    // beq _021F7F12
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // ldrb r1, [r4, #3]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #3]
    // pop {r3, r4, r5, pc}
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // cmp r0, #9
    // bne _021F7F28
    // ldrb r1, [r4, #3]
    // mov r0, #1
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r4, #3]
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, #3]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _021F7F4A
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov01_021F8C64
    // ldrb r1, [r4, #3]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #3]
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov01_021F8C30
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F7F54(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r4, r2, #0
    // mov r0, #0
    // ldrsb r0, [r4, r0]
    // add r5, r1, #0
    // cmp r3, r0
    // beq _021F7F7C
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // b _021F7FB2
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // cmp r0, #9
    // bne _021F7F92
    // ldrb r1, [r4, #3]
    // mov r0, #1
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r4, #3]
    // pop {r4, r5, r6, pc}
    // ldrb r0, [r4, #3]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _021F7FB2
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov01_021F8C64
    // ldrb r1, [r4, #3]
    // mov r0, #1
    // bic r1, r0
    // strb r1, [r4, #3]
    // add r0, r6, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F7FC6
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xa
    // bl sub_02023F04
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F7FC8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // beq _021F7FEE
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // b _021F8004
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // cmp r0, #9
    // bne _021F8004
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov01_021F8C64
    // add r0, r5, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F8018
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F801C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // beq _021F8042
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // b _021F8058
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // cmp r0, #9
    // bne _021F8058
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov01_021F8C64
    // add r0, r5, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F806C
    // mov r1, #2
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F8070(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // beq _021F8096
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // b _021F80AC
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // cmp r0, #9
    // bne _021F80AC
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov01_021F8C64
    // add r0, r5, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F80C0
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xe
    // bl sub_02023F04
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F80C4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x1c
    // add r6, r0, #0
    // add r4, r2, #0
    // mov r0, #0
    // ldrsb r0, [r4, r0]
    // add r5, r1, #0
    // cmp r3, r0
    // beq _021F80F2
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r0, #0
    // strb r0, [r4, #1]
    // b _021F8108
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // cmp r0, #9
    // bne _021F8108
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov01_021F8C64
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // cmp r0, #6
    // beq _021F8114
    // mov r0, #0
    // strb r0, [r4, #1]
    // add r0, r6, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F815A
    // ldr r6, _021F8160 ; =ov01_02208A48
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #1
    // str r0, [r3]
    // ldrsb r1, [r4, r1]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // bl sub_02023F04
    // mov r0, #1
    // ldrsb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, #1]
    // ldrsb r0, [r4, r0]
    // lsl r1, r0, #2
    // add r0, sp, #0
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // bne _021F815A
    // mov r0, #0
    // strb r0, [r4, #1]
    // add sp, #0x1c
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021F8160: .word ov01_02208A48
    // TODO: decompile
}


void ov01_021F8164(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r4, r2, #0
    // mov r0, #0
    // ldrsb r0, [r4, r0]
    // add r5, r1, #0
    // cmp r3, r0
    // beq _021F8192
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r0, #0
    // strb r0, [r4, #1]
    // b _021F81A8
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // cmp r0, #9
    // bne _021F81A8
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov01_021F8C64
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // cmp r0, #7
    // beq _021F81B4
    // mov r0, #0
    // strb r0, [r4, #1]
    // add r0, r6, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F81F2
    // ldr r6, _021F81F8 ; =ov01_022089D8
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #1
    // ldrsb r1, [r4, r1]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // bl sub_02023F04
    // mov r0, #1
    // ldrsb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, #1]
    // ldrsb r0, [r4, r0]
    // lsl r1, r0, #2
    // add r0, sp, #0
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // bne _021F81F2
    // mov r0, #0
    // strb r0, [r4, #1]
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021F81F8: .word ov01_022089D8
    // TODO: decompile
}


void ov01_021F81FC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x20
    // add r6, r0, #0
    // add r4, r2, #0
    // mov r0, #0
    // ldrsb r0, [r4, r0]
    // add r5, r1, #0
    // cmp r3, r0
    // beq _021F822A
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r0, #0
    // strb r0, [r4, #1]
    // b _021F8240
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // cmp r0, #9
    // bne _021F8240
    // add r0, r3, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov01_021F8C64
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // cmp r0, #8
    // beq _021F824C
    // mov r0, #0
    // strb r0, [r4, #1]
    // add r0, r6, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F8292
    // ldr r6, _021F8298 ; =ov01_02208AA0
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #1
    // ldrsb r1, [r4, r1]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // bl sub_02023F04
    // mov r0, #1
    // ldrsb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, #1]
    // ldrsb r0, [r4, r0]
    // lsl r1, r0, #2
    // add r0, sp, #0
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // bne _021F8292
    // mov r0, #0
    // strb r0, [r4, #1]
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // nop
    // _021F8298: .word ov01_02208AA0
    // TODO: decompile
}


void ov01_021F829C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // beq _021F82C2
    // add r0, r3, #0
    // bl ov01_021FA458
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // b _021F82DA
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // cmp r0, #9
    // beq _021F82DA
    // add r0, r3, #0
    // bl ov01_021FA458
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #4
    // bl ov01_021F8C3C
    // add r0, r5, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F82EE
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F82F0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // str r0, [sp]
    // add r0, r7, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F836C
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _021F836C
    // add r0, r7, #0
    // bl MapObject_GetFacingDirection
    // str r0, [sp, #8]
    // add r0, r7, #0
    // bl sub_0205F330
    // str r0, [sp, #4]
    // cmp r0, #0xc
    // blt _021F8328
    // bl GF_AssertFail
    // mov r1, #2
    // ldrsb r2, [r4, r1]
    // cmp r2, #0
    // bne _021F8342
    // ldr r0, [sp, #4]
    // cmp r0, r2
    // beq _021F8342
    // ldrb r0, [r4, #3]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // bne _021F8342
    // sub r0, r1, #3
    // strb r0, [r4]
    // ldr r5, [sp, #4]
    // ldr r1, [sp]
    // lsl r6, r5, #2
    // ldr r5, _021F8370 ; =ov01_02208AE4
    // ldr r3, [sp, #8]
    // ldr r5, [r5, r6]
    // add r0, r7, #0
    // add r2, r4, #0
    // blx r5
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // strb r0, [r4]
    // ldr r0, [sp, #4]
    // strb r0, [r4, #2]
    // add r0, r7, #0
    // bl ov01_021FA3E8
    // ldr r1, [sp]
    // add r0, r7, #0
    // bl ov01_021F8C88
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021F8370: .word ov01_02208AE4
    // TODO: decompile
}


void ov01_021F8374(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r3, #0
    // add r4, r2, #0
    // add r2, sp, #0
    // ldr r3, _021F83FC ; =ov01_02208A38
    // add r5, r1, #0
    // add r7, r2, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // lsl r0, r6, #2
    // ldr r1, [r7, r0]
    // mov r0, #0
    // ldrsb r0, [r4, r0]
    // cmp r6, r0
    // beq _021F83B2
    // add r0, r5, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // ldrb r1, [r4, #3]
    // mov r0, #1
    // add sp, #0x10
    // bic r1, r0
    // strb r1, [r4, #3]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #2
    // ldrsb r0, [r4, r2]
    // cmp r0, #0
    // beq _021F83CA
    // ldrb r1, [r4, #3]
    // mov r0, #1
    // add sp, #0x10
    // bic r1, r0
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r4, #3]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r4, #3]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _021F83EE
    // add r0, r5, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // ldrb r1, [r4, #3]
    // mov r0, #1
    // add sp, #0x10
    // bic r1, r0
    // strb r1, [r4, #3]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // lsl r1, r2, #0xb
    // bl sub_02023F04
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F83FC: .word ov01_02208A38
    // TODO: decompile
}


void ov01_021F8400(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r0, r3, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // str r3, [sp]
    // bl ov01_021FA464
    // add r4, r0, #0
    // mov r0, #0
    // ldrsb r1, [r6, r0]
    // ldr r0, [sp]
    // cmp r0, r1
    // bne _021F8424
    // mov r0, #2
    // ldrsb r0, [r6, r0]
    // cmp r0, #0
    // beq _021F8436
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // b _021F8466
    // cmp r0, #0xa
    // beq _021F844C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // b _021F8466
    // add r0, r5, #0
    // bl sub_02023EF4
    // cmp r4, r0
    // beq _021F8466
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // add r0, r7, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F847A
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xa
    // bl sub_02023F04
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F847C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r0, r3, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // str r3, [sp]
    // bl ov01_021FA464
    // add r4, r0, #0
    // mov r0, #0
    // ldrsb r1, [r6, r0]
    // ldr r0, [sp]
    // cmp r0, r1
    // beq _021F84AA
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // b _021F84DE
    // mov r0, #2
    // ldrsb r0, [r6, r0]
    // cmp r0, #0xb
    // beq _021F84C4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // b _021F84DE
    // add r0, r5, #0
    // bl sub_02023EF4
    // cmp r4, r0
    // beq _021F84DE
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // add r0, r7, #0
    // bl ov01_021F9344
    // cmp r0, #0
    // bne _021F84F2
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F84F4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl sub_0205F40C
    // ldr r7, [r0, #4]
    // str r0, [sp]
    // cmp r7, #0
    // beq _021F8562
    // add r0, r4, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F8562
    // add r0, r4, #0
    // bl MapObject_GetFacingDirection
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl sub_0205F330
    // add r5, r0, #0
    // cmp r5, #4
    // blt _021F8528
    // bl GF_AssertFail
    // lsl r6, r5, #2
    // ldr r5, _021F8568 ; =ov01_022089E8
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // ldr r5, [r5, r6]
    // add r0, r4, #0
    // add r1, r7, #0
    // blx r5
    // ldr r2, [sp, #4]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021F8708
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // strb r1, [r0]
    // add r0, r4, #0
    // bl sub_0205F330
    // ldr r1, [sp]
    // strb r0, [r1, #2]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021FA3E8
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021F8C88
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F8568: .word ov01_022089E8
    // TODO: decompile
}


void ov01_021F856C(void) {
    // push {r4, lr}
    // mov r0, #0
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // bne _021F8580
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // cmp r0, #0
    // beq _021F8596
    // ldr r1, _021F85B8 ; =ov01_022089F8
    // lsl r2, r3, #2
    // ldr r1, [r1, r2]
    // add r0, r4, #0
    // bl sub_02023EE0
    // mov r1, #0xf
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F40
    // add r0, r4, #0
    // bl sub_02023F70
    // mov r1, #1
    // lsl r1, r1, #0xc
    // sub r1, r0, r1
    // bpl _021F85A6
    // mov r1, #0
    // add r0, r4, #0
    // bl sub_02023F40
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F04
    // pop {r4, pc}
    // nop
    // _021F85B8: .word ov01_022089F8
    // TODO: decompile
}


void ov01_021F85BC(void) {
    // push {r4, lr}
    // mov r0, #0
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // bne _021F85D0
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // cmp r0, #1
    // beq _021F85E4
    // ldr r1, _021F85F0 ; =ov01_022089F8
    // lsl r2, r3, #2
    // ldr r1, [r1, r2]
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // pop {r4, pc}
    // _021F85F0: .word ov01_022089F8
    // TODO: decompile
}


void ov01_021F85F4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // mov r0, #0
    // ldrsb r0, [r4, r0]
    // add r5, r1, #0
    // cmp r3, r0
    // bne _021F860A
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // cmp r0, #2
    // beq _021F8628
    // ldr r1, _021F86B4 ; =ov01_022089F8
    // lsl r2, r3, #2
    // ldr r1, [r1, r2]
    // add r0, r5, #0
    // bl sub_02023EE0
    // mov r1, #0xf
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F40
    // ldrb r1, [r4, #3]
    // mov r0, #0xfe
    // bic r1, r0
    // strb r1, [r4, #3]
    // add r0, r5, #0
    // bl sub_02023F70
    // add r1, r0, #0
    // ldrb r0, [r4, #3]
    // lsl r2, r0, #0x18
    // lsr r2, r2, #0x19
    // beq _021F8642
    // cmp r2, #1
    // beq _021F8664
    // cmp r2, #2
    // beq _021F868A
    // b _021F86A4
    // mov r3, #1
    // lsl r3, r3, #0xc
    // sub r1, r1, r3
    // mov r3, #0xa
    // lsl r3, r3, #0xc
    // cmp r1, r3
    // bgt _021F86A4
    // add r2, r2, #1
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0xfe
    // lsl r2, r2, #0x19
    // bic r0, r3
    // lsr r2, r2, #0x18
    // orr r0, r2
    // strb r0, [r4, #3]
    // b _021F86A4
    // mov r3, #1
    // lsl r3, r3, #0xc
    // add r1, r1, r3
    // mov r3, #0xf
    // lsl r3, r3, #0xc
    // cmp r1, r3
    // blt _021F86A4
    // add r2, r2, #1
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0xfe
    // lsl r2, r2, #0x19
    // bic r0, r3
    // lsr r2, r2, #0x18
    // orr r0, r2
    // strb r0, [r4, #3]
    // mov r0, #0
    // strb r0, [r4, #1]
    // b _021F86A4
    // mov r0, #1
    // ldrsb r2, [r4, r0]
    // add r2, r2, #1
    // strb r2, [r4, #1]
    // ldrsb r0, [r4, r0]
    // cmp r0, #0x1e
    // blt _021F86A4
    // mov r0, #0
    // strb r0, [r4, #1]
    // ldrb r2, [r4, #3]
    // mov r0, #0xfe
    // bic r2, r0
    // strb r2, [r4, #3]
    // add r0, r5, #0
    // bl sub_02023F40
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F04
    // pop {r3, r4, r5, pc}
    // _021F86B4: .word ov01_022089F8
    // TODO: decompile
}


void ov01_021F86B8(void) {
    // push {r4, lr}
    // mov r0, #0
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // bne _021F86CC
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // cmp r0, #3
    // beq _021F86E2
    // ldr r1, _021F8704 ; =ov01_022089F8
    // lsl r2, r3, #2
    // ldr r1, [r1, r2]
    // add r0, r4, #0
    // bl sub_02023EE0
    // mov r1, #0xf
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F40
    // add r0, r4, #0
    // bl sub_02023F70
    // mov r1, #1
    // lsl r1, r1, #0xc
    // sub r1, r0, r1
    // bpl _021F86F2
    // mov r1, #0
    // add r0, r4, #0
    // bl sub_02023F40
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F04
    // pop {r4, pc}
    // nop
    // _021F8704: .word ov01_022089F8
    // TODO: decompile
}


void ov01_021F8708(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r2, #0
    // add r2, sp, #0
    // mov r0, #0
    // str r0, [r2]
    // str r0, [r2, #4]
    // str r0, [r2, #8]
    // add r0, r1, #0
    // bl sub_02023F30
    // asr r1, r0, #0xb
    // lsr r1, r1, #0x14
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // cmp r4, #3
    // bhi _021F876E
    // add r1, r4, r4
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F8738: ; jump table
    // cmp r0, #0x18
    // blt _021F876E
    // mov r0, #6
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // b _021F876E
    // cmp r0, #0x28
    // bge _021F8758
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [sp]
    // b _021F876E
    // ldr r0, _021F8784 ; =0xFFFFB000
    // str r0, [sp]
    // b _021F876E
    // cmp r0, #0x38
    // bge _021F8768
    // ldr r0, _021F8788 ; =0xFFFFF000
    // str r0, [sp]
    // b _021F876E
    // mov r0, #5
    // lsl r0, r0, #0xc
    // str r0, [sp]
    // mov r0, #2
    // ldr r1, [sp, #8]
    // lsl r0, r0, #0xa
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl MapObject_SetFacingVector
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _021F8784: .word 0xFFFFB000
    // _021F8788: .word 0xFFFFF000
    // TODO: decompile
}


void ov01_021F878C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl sub_0205F40C
    // ldr r7, [r0, #4]
    // str r0, [sp]
    // cmp r7, #0
    // beq _021F87FA
    // add r0, r4, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F87FA
    // add r0, r4, #0
    // bl MapObject_GetFacingDirection
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl sub_0205F330
    // add r5, r0, #0
    // cmp r5, #2
    // blt _021F87C0
    // bl GF_AssertFail
    // lsl r6, r5, #2
    // ldr r5, _021F8800 ; =ov01_022089CC + 4
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // ldr r5, [r5, r6]
    // add r0, r4, #0
    // add r1, r7, #0
    // blx r5
    // ldr r2, [sp, #4]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021F8874
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // strb r1, [r0]
    // add r0, r4, #0
    // bl sub_0205F330
    // ldr r1, [sp]
    // strb r0, [r1, #2]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021FA3E8
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021F8C88
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F8800: .word ov01_022089CC + 4
    // TODO: decompile
}


void ov01_021F8804(void) {
    // push {r4, lr}
    // mov r0, #0
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // bne _021F8818
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // cmp r0, #0
    // beq _021F882C
    // ldr r1, _021F8838 ; =ov01_02208A18
    // lsl r2, r3, #2
    // ldr r1, [r1, r2]
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // pop {r4, pc}
    // _021F8838: .word ov01_02208A18
    // TODO: decompile
}


void ov01_021F883C(void) {
    // push {r4, lr}
    // mov r0, #0
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // bne _021F8850
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // cmp r0, #1
    // beq _021F8864
    // ldr r1, _021F8870 ; =ov01_02208A18
    // lsl r2, r3, #2
    // ldr r1, [r1, r2]
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // pop {r4, pc}
    // _021F8870: .word ov01_02208A18
    // TODO: decompile
}


void ov01_021F8874(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r2, #0
    // add r2, sp, #0
    // mov r0, #0
    // str r0, [r2]
    // str r0, [r2, #4]
    // str r0, [r2, #8]
    // add r0, r1, #0
    // bl sub_02023F30
    // asr r1, r0, #0xb
    // lsr r1, r1, #0x14
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // cmp r4, #3
    // bhi _021F88DA
    // add r1, r4, r4
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F88A4: ; jump table
    // cmp r0, #0x18
    // blt _021F88DA
    // mov r0, #6
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // b _021F88DA
    // cmp r0, #0x28
    // bge _021F88C4
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r0, [sp]
    // b _021F88DA
    // ldr r0, _021F88E8 ; =0xFFFFB000
    // str r0, [sp]
    // b _021F88DA
    // cmp r0, #0x38
    // bge _021F88D4
    // ldr r0, _021F88EC ; =0xFFFFF000
    // str r0, [sp]
    // b _021F88DA
    // mov r0, #5
    // lsl r0, r0, #0xc
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl MapObject_SetFacingVector
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _021F88E8: .word 0xFFFFB000
    // _021F88EC: .word 0xFFFFF000
    // TODO: decompile
}


void ov01_021F88F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r6, r0, #0
    // add r0, r5, #0
    // ldr r4, [r6, #4]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F894A
    // cmp r4, #0
    // beq _021F894A
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // add r7, r0, #0
    // strb r7, [r6]
    // add r0, r5, #0
    // bl sub_0205F330
    // strb r0, [r6, #2]
    // add r0, r7, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F04
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FA3E8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F8C88
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F894C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r6, r0, #0
    // add r0, r5, #0
    // ldr r4, [r6, #4]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F89B6
    // cmp r4, #0
    // beq _021F89B6
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // strb r0, [r6]
    // add r0, r5, #0
    // bl sub_0205F330
    // strb r0, [r6, #2]
    // add r0, r4, #0
    // bl sub_02023EF4
    // cmp r0, #0
    // beq _021F8990
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // add r0, r5, #0
    // bl MapObject_GetFacingVector
    // mov r1, #2
    // lsl r1, r1, #0xa
    // str r1, [r0, #8]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FA3E8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F8C88
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F89B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r6, r0, #0
    // add r0, r5, #0
    // ldr r4, [r6, #4]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F8A48
    // cmp r4, #0
    // beq _021F8A48
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // add r7, r0, #0
    // add r0, r5, #0
    // bl sub_0205F330
    // cmp r0, #0
    // bne _021F8A0A
    // add r0, r4, #0
    // bl sub_02023EF4
    // cmp r0, #1
    // beq _021F89FE
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // b _021F8A2E
    // add r0, r4, #0
    // bl sub_02023EF4
    // cmp r0, #0
    // beq _021F8A24
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // strb r7, [r6]
    // add r0, r5, #0
    // bl sub_0205F330
    // strb r0, [r6, #2]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FA3E8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F8C88
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F8A4C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // add r0, r6, #0
    // ldr r5, [r4, #4]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F8AAE
    // cmp r5, #0
    // beq _021F8AAE
    // add r0, r6, #0
    // bl MapObject_GetFacingDirection
    // mov r1, #0
    // ldrsb r1, [r4, r1]
    // add r7, r0, #0
    // cmp r7, r1
    // beq _021F8A8A
    // bl ov01_021FA44C
    // add r1, r0, #0
    // add r0, r5, #0
    // bl sub_02023EE0
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov01_021FA3E8
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov01_021F8C88
    // add r0, r6, #0
    // strb r7, [r4]
    // bl sub_0205F330
    // strb r0, [r4, #2]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F8AB0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r6, r0, #0
    // add r0, r5, #0
    // ldr r4, [r6, #4]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F8B2C
    // cmp r4, #0
    // beq _021F8B2C
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // str r0, [sp]
    // add r0, r5, #0
    // bl sub_0205F330
    // add r7, r0, #0
    // mov r0, #2
    // ldrsb r0, [r6, r0]
    // cmp r7, r0
    // beq _021F8B00
    // cmp r7, #0
    // bne _021F8AF0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023EE0
    // b _021F8AF8
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // add r0, r5, #0
    // bl MapObject_GetFacingVector
    // mov r1, #2
    // lsl r1, r1, #0xa
    // str r1, [r0, #8]
    // ldr r0, [sp]
    // add r1, r4, #0
    // strb r0, [r6]
    // add r0, r5, #0
    // strb r7, [r6, #2]
    // bl ov01_021FA3E8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F8C88
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F8B30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl sub_0205F40C
    // ldr r7, [r0, #4]
    // str r0, [sp]
    // cmp r7, #0
    // beq _021F8B9E
    // add r0, r4, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F8B9E
    // add r0, r4, #0
    // bl MapObject_GetFacingDirection
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl sub_0205F330
    // add r5, r0, #0
    // cmp r5, #1
    // blt _021F8B64
    // bl GF_AssertFail
    // lsl r6, r5, #2
    // ldr r5, _021F8BA4 ; =ov01_022089CC
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // ldr r5, [r5, r6]
    // add r0, r4, #0
    // add r1, r7, #0
    // blx r5
    // ldr r2, [sp, #4]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021F8BE0
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // strb r1, [r0]
    // add r0, r4, #0
    // bl sub_0205F330
    // ldr r1, [sp]
    // strb r0, [r1, #2]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021FA3E8
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021F8C88
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F8BA4: .word ov01_022089CC
    // TODO: decompile
}


void ov01_021F8BA8(void) {
    // push {r4, lr}
    // mov r0, #0
    // ldrsb r0, [r2, r0]
    // add r4, r1, #0
    // cmp r3, r0
    // bne _021F8BBC
    // mov r0, #2
    // ldrsb r0, [r2, r0]
    // cmp r0, #0
    // beq _021F8BD0
    // ldr r1, _021F8BDC ; =ov01_02208A28
    // lsl r2, r3, #2
    // ldr r1, [r1, r2]
    // add r0, r4, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // pop {r4, pc}
    // _021F8BDC: .word ov01_02208A28
    // TODO: decompile
}


void ov01_021F8BE0(void) {
    MapObject_SetFacingVector(0, 2);
}


void ov01_021F8C00(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // bl sub_02023F70
    // asr r1, r0, #0xb
    // lsr r1, r1, #0x14
    // add r1, r0, r1
    // asr r4, r1, #0xc
    // add r0, r4, #0
    // add r1, r6, #0
    // bl _s32_div_f
    // sub r1, r4, r1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl sub_02023F40
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02023F04
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F8C30(void) {
    ov01_021F8C00();
}


void ov01_021F8C3C(void) {
    ov01_021F8C00(r2);
    sub_02023F70(r5);
    sub_02023EE0(r5, r4);
    sub_02023F40(r5, r6);
}


void ov01_021F8C64(void) {
    ov01_021F8C30();
    sub_02023F70(r5);
    sub_02023EE0(r5, r4);
    sub_02023F40(r5, r6);
}


void ov01_021F8C88(void) {
    // push {r4, r5, r6, lr}
    // mov r4, #1
    // add r6, r1, #0
    // lsl r1, r4, #9
    // add r5, r0, #0
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _021F8C9C
    // mov r4, #0
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _021F8CBA
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl MapObject_TestFlagsBits
    // cmp r0, #0
    // bne _021F8CBA
    // mov r4, #0
    // lsl r1, r4, #0x18
    // add r0, r6, #0
    // lsr r1, r1, #0x18
    // bl sub_02023EA4
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F8CC8(void) {
    // push {r4, lr}
    // ldr r3, _021F8CF4 ; =ov01_022073D8
    // add r2, r1, #0
    // ldr r4, [r3]
    // ldr r1, _021F8CF8 ; =0x0000FFFF
    // cmp r4, r1
    // beq _021F8CEE
    // cmp r4, r0
    // bne _021F8CE6
    // add r3, r3, #4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // pop {r4, pc}
    // add r3, #0x10
    // ldr r4, [r3]
    // cmp r4, r1
    // bne _021F8CD6
    // bl GF_AssertFail
    // pop {r4, pc}
    // _021F8CF4: .word ov01_022073D8
    // _021F8CF8: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F8CFC(void) {
    sub_0205F3E8(4);
    MapObject_GetSpriteID(r5);
    ov01_021F8CC8();
    ov01_021FD2EC(r5);
}


void ov01_021F8D24(void) {
    // bx lr
    // TODO: decompile
}


void ov01_021F8D28(void) {
    // push {r4, lr}
    // bl sub_0205F40C
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021F8D3E
    // bl ov01_021F1640
    // mov r0, #0
    // str r0, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F8D40(void) {
    // push {r4, lr}
    // bl sub_0205F40C
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021F8D56
    // bl ov01_021F1640
    // mov r0, #0
    // str r0, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F8D58(void) {
    sub_0205F40C();
    MapObject_GetSpriteID(r5);
    ov01_021F8CC8();
    ov01_021FD2EC(r5);
}

