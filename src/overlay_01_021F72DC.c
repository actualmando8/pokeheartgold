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
    sub_0205F3E8(0x14);
    // mvn r0, r0
    *((u8*)(r0 + 2)) = 0;
    ov01_021F9510(r5, (r0 + 4));
    sub_0205F484(r5);
}



void ov01_021F73F4(void) {
}



void ov01_021F7408(void) {
    sub_0205F40C();
    // add r1, #8
    ov01_021F9610(*((u32*)(r0 + 4)), r0);
    ov01_021F95A8(r5, (r4 + 4));
    MapObject_SetFlagsBits(r5, (2 << 0x14));
}



void ov01_021F7434(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    ov01_021F9510(r5, (r4 + 4));
    // add r1, #8
    ov01_021F9630(*((u32*)(r4 + 4)), r4);
    ov01_021FA3E8(r5, *((u32*)(r4 + 4)));
    MapObject_ClearFlagsBits(r5, (2 << 0x14));
}



void ov01_021F7478(void) {
    sub_0205F3E8(0x18);
    // mvn r0, r0
    *((u8*)(r0 + 0x10)) = 0;
    ov01_021F9510(r5, r0);
    *((u8*)(r4 + 0x15)) = 0;
    // bic r1, r0
    *((u8*)(r4 + 0x17)) = *((u8*)(r4 + 0x17));
    // bic r1, r0
    *((u8*)(r4 + 0x17)) = *((u8*)(r4 + 0x17));
    sub_0205F484(r5, *((u8*)(r4 + 0x17)));
}



void ov01_021F74B4(void) {
}



void ov01_021F74C8(void) {
    sub_0205F40C();
    ov01_021F9610(*((u32*)r0), (r0 + 4));
    // bic r1, r0
    *((u8*)(r4 + 0x17)) = *((u8*)(r4 + 0x17));
    // bic r1, r0
    *((u8*)(r4 + 0x17)) = *((u8*)(r4 + 0x17));
    ov01_021F95A8(r5, r4);
    MapObject_SetFlagsBits(r5, (2 << 0x14));
}



void ov01_021F7504(void) {
    sub_0205F40C();
    MapObject_GetID(r5);
    MapObject_GetManager(r5);
    MapObjectManager_GetFieldSystem();
    // str r0, [sp, #0x10]
    SaveArray_Party_Get(*((u32*)(r0 + 0xc)));
    GetFirstAliveMonInParty_CrashIfNone();
    // str r0, [sp, #0xc]
    GetMonData(5, 0);
    // ldr r0, [sp, #0xc]
    GetMonData(0x70, 0);
    // ldr r0, [sp, #0xc]
    GetMonGender();
    // str r0, [sp, #8]
    // ldr r2, [sp, #8]
    FollowMon_GetSpriteID(r7, ((r6 << 0x10) >> 0x10));
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    MonIsShiny();
    // str r0, [sp, #4]
    // orr r0, r1
    *((u8*)(r4 + 0x17)) = 2;
    // ldr r3, [sp, #4]
    FollowMon_SetObjectParams(r5, r7, ((r6 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x14]
    MapObject_SetSpriteID(r5);
    sub_0205FCD4(r5);
    MapObject_SetFlagsBits(r5, 4);
    // add r1, sp, #0x30
    MapObject_CopyPositionVector(r5);
    MapObject_GetXCoord(r5);
    // add r0, r2, r0
    // str r0, [sp, #0x30]
    MapObject_SetPreviousX(r5, r0, (r0 << 0x10));
    MapObject_GetYCoord(r5);
    MapObject_SetPreviousY(r5, r0);
    MapObject_GetZCoord(r5);
    // add r0, r2, r0
    // str r0, [sp, #0x38]
    MapObject_SetPreviousZ(r5, r0, (r0 << 0x10));
    // add r1, sp, #0x30
    MapObject_SetPositionVector(r5);
    MapObject_ClearHeldMovement(r5);
    // ldr r0, [sp, #0x10]
    // add r0, #0xf4
    // ldr r0, [sp, #0x10]
    // add r0, #0xfc
    // ldrh r0, [r0]
    // ldr r0, [sp, #0x10]
    // add r0, #0xfb
    // ldrb r1, [r0]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // add r0, #0xf8
    // ldrb r1, [r0]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #4]
    FieldSystem_SetFollowerPokeParam(*((u32*)r0), r7, ((r6 << 0x18) >> 0x18));
    MapObject_SetFacingDirectionDirect(r5, 1);
    // ldr r0, [sp, #0xc]
    GetMonData(0, 0);
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0, r1]
    // ldr r1, [sp, #0xc]
    FieldSystem_UnkSub108_Set((0x42 << 2), ((r7 << 0x10) >> 0x10), r0);
    ov01_021FA2D4(r5);
    ov01_021F9510(r5, r4);
    // bic r1, r0
    // orr r0, r1
    *((u8*)(r4 + 0x17)) = 1;
    // add r1, sp, #0x18
    // str r0, [r1]
    *((u32*)(*((u8*)(r4 + 0x17)) + 4)) = 0;
    *((u32*)(*((u8*)(r4 + 0x17)) + 8)) = 0;
    // add r1, sp, #0x24
    MapObject_CopyFacingVector(r5, *((u8*)(r4 + 0x17)));
    MapObject_GetSpriteID(r5);
    MapObject_GetFacingDirection(r5);
    // add r2, sp, #0x18
    ov01_021F8E70(r5, r0);
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x24
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x2c]
    MapObject_SetFacingVector(r5);
    ov01_02205564(r5);
    ov01_0220589C(1, r5, *((u32*)r4));
    ov01_0220553C(r5);
    ov01_02205808(1, r5, *((u32*)r4));
    ov01_021F9630(*((u32*)r4), (r4 + 4));
    ov01_021FA3E8(r5, *((u32*)r4));
    MapObject_ClearFlagsBits(r5, (2 << 0x14));
    sub_0205F484(r5);
}



void ov01_021F7704(void) {
}



void ov01_021F771C(void) {
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
    sub_0205F40C();
    ov01_021FA2D4(r4);
    ov01_021FA3E8(r4, *((u32*)(r5 + 4)));
    ov01_021F8C88(r4, r5);
}



void ov01_021F77D0(void) {
    sub_0205F40C();
    ov01_021FA2D4(r4);
    ov01_021F9344(r4);
    sub_02023F04(r5, (1 << 0xc));
    ov01_021FA3E8(r4, r5);
    ov01_021F8C88(r4, r5);
}



void ov01_021F7810(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    // bic r1, r0
    // orr r0, r1
    *((u8*)(r4 + 0x17)) = 1;
    ov01_02205564(r5, *((u8*)(r4 + 0x17)));
    ov01_0220589C(1, r5, *((u32*)r4));
    ov01_0220553C(r5);
    ov01_02205808(1, r5, r6);
    MapObject_GetFacingDirection(r5);
    // str r0, [sp]
    ov01_021F8D80(r5, r6, r4, r0);
    *((u8*)(r4 + 0x10)) = r7;
    ov01_021FA3E8(r5, r6);
    ov01_021F8C88(r5, r6);
}



void ov01_021F7894(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    // bic r1, r0
    // orr r0, r1
    *((u8*)(r4 + 0x17)) = 1;
    ov01_02205564(r5, *((u8*)(r4 + 0x17)));
    ov01_0220589C(1, r5, *((u32*)r4));
    ov01_0220553C(r5);
    ov01_02205808(1, r5, r6);
    MapObject_GetFacingDirection(r5);
    // str r0, [sp]
    ov01_021F8D80(r5, r6, r4, r0);
    *((u8*)(r4 + 0x10)) = r7;
    ov01_021FA3E8(r5, r6);
    ov01_021F8C88(r5, r6);
}



void ov01_021F7918(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    // bic r1, r0
    // orr r0, r1
    *((u8*)(r4 + 0x17)) = 1;
    ov01_0220553C(r5, *((u8*)(r4 + 0x17)));
    ov01_02205808(1, r5, r6);
    ov01_021FA3E8(r5, r6);
    ov01_021F8C88(r5, r6);
}



void ov01_021F796C(void) {
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
    ov01_021F8C30(r4);
    sub_02023F04(r4, 0);
}



void ov01_021F79A0(void) {
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
    ov01_021F9344(r5);
    sub_02023F04(r4, (2 << 0xa));
}



void ov01_021F79DC(void) {
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
    ov01_021F9344(r5);
    sub_02023F04(r4, (1 << 0xc));
}



void ov01_021F7A18(void) {
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
    ov01_021F9344(r5);
    sub_02023F04(r4, (2 << 0xc));
}



void ov01_021F7A54(void) {
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
    ov01_021F9344(r5);
    sub_02023F04(r4, (1 << 0xe));
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
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
    ov01_021F8C30(r4);
    sub_02023F04(r4, 0);
}



void ov01_021F7CBC(void) {
    // ldrsb r0, [r2, r0]
    sub_02023EE0(r1, 4);
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
}



void ov01_021F7CE4(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    MapObject_GetFacingDirection(r5);
    sub_0205F330(r5);
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    sub_02023EF4(r4);
    // ldr r1, [sp, #4]
    // ldrsb r0, [r6, r0]
    // ldr r1, [sp, #4]
    sub_02023EE0(r4);
    sub_02023F40(r4, 0);
    sub_02023F04(r4, 0);
    sub_02023F04(r4, 0);
    // str r0, [sp]
    // str r0, [sp]
    sub_02023EF4(r4);
    // ldr r1, [sp]
    sub_02023EE0(r4);
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
    *((u8*)(r6 + 2)) = r7;
    sub_0205F330(r5);
    *((u8*)(r6 + 3)) = r0;
    ov01_021FA3E8(r5, r4);
    ov01_021F8C88(r5, r4);
}



void ov01_021F7DA8(void) {
    sub_0205F3E8(0x14);
    // mvn r0, r0
    // strb r0, [r4]
    ov01_021F9510(r5, (r0 + 4));
    sub_0205F484(r5);
}



void ov01_021F7DD0(void) {
}



void ov01_021F7DFC(void) {
    sub_0205F40C();
    // add r1, #8
    ov01_021F9610(*((u32*)(r0 + 4)), r0);
    ov01_021F95A8(r5, (r4 + 4));
    MapObject_SetFlagsBits(r5, (2 << 0x14));
}



void ov01_021F7E28(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    ov01_021F9510(r5, (r4 + 4));
    // add r1, #8
    ov01_021F9630(*((u32*)(r4 + 4)), r4);
    ov01_021FA3E8(r5, *((u32*)(r4 + 4)));
    MapObject_ClearFlagsBits(r5, (2 << 0x14));
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
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r5, r0);
    sub_02023F40(r5, 0);
    // bic r1, r0
    *((u8*)(r4 + 3)) = *((u8*)(r4 + 3));
    // ldrsb r0, [r4, r0]
    // bic r1, r0
    // orr r0, r1
    *((u8*)(r4 + 3)) = 1;
    ov01_021FA44C(r3, *((u8*)(r4 + 3)));
    ov01_021F8C64(r5, r0);
    // bic r1, r0
    *((u8*)(r4 + 3)) = *((u8*)(r4 + 3));
    ov01_021F8C30(r5, *((u8*)(r4 + 3)));
}



void ov01_021F7F54(void) {
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r5, r0);
    sub_02023F40(r5, 0);
    // ldrsb r0, [r4, r0]
    // bic r1, r0
    // orr r0, r1
    *((u8*)(r4 + 3)) = 1;
    ov01_021FA44C(r3, *((u8*)(r4 + 3)));
    ov01_021F8C64(r5, r0);
    // bic r1, r0
    *((u8*)(r4 + 3)) = *((u8*)(r4 + 3));
    ov01_021F9344(r6, *((u8*)(r4 + 3)));
    sub_02023F04(r5, (2 << 0xa));
}



void ov01_021F7FC8(void) {
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    ov01_021F8C64(r4, r0);
    ov01_021F9344(r5);
    sub_02023F04(r4, (1 << 0xc));
}



void ov01_021F801C(void) {
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    ov01_021F8C64(r4, r0);
    ov01_021F9344(r5);
    sub_02023F04(r4, (2 << 0xc));
}



void ov01_021F8070(void) {
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
    // ldrsb r0, [r2, r0]
    ov01_021FA44C(r3);
    ov01_021F8C64(r4, r0);
    ov01_021F9344(r5);
    sub_02023F04(r4, (1 << 0xe));
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
    // ldrsb r0, [r2, r0]
    ov01_021FA458(r3);
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
    // ldrsb r0, [r2, r0]
    ov01_021FA458(r3);
    ov01_021F8C3C(r4, r0, 4);
    ov01_021F9344(r5);
    sub_02023F04(r4, (1 << 0xc));
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
    // str r3, [sp]
    ov01_021FA464(r3);
    // ldrsb r1, [r6, r0]
    // ldr r0, [sp]
    // ldrsb r0, [r6, r0]
    sub_02023EE0(r5, r0);
    sub_02023F40(r5, 0);
    sub_02023EE0(r5, r4);
    sub_02023F40(r5, 0);
    sub_02023EF4(r5);
    sub_02023EE0(r5, r4);
    sub_02023F40(r5, 0);
    ov01_021F9344(r7);
    sub_02023F04(r5, (2 << 0xa));
}



void ov01_021F847C(void) {
    // str r3, [sp]
    ov01_021FA464(r3);
    // ldrsb r1, [r6, r0]
    // ldr r0, [sp]
    sub_02023EE0(r5, r0);
    sub_02023F40(r5, 0);
    // ldrsb r0, [r6, r0]
    sub_02023EE0(r5, r4);
    sub_02023F40(r5, 0);
    sub_02023EF4(r5);
    sub_02023EE0(r5, r4);
    sub_02023F40(r5, 0);
    ov01_021F9344(r7);
    sub_02023F04(r5, (1 << 0xc));
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
    sub_0205F40C();
    ov01_021FA2D4(r5);
    MapObject_GetFacingDirection(r5);
    // strb r7, [r6]
    sub_0205F330(r5);
    *((u8*)(r6 + 2)) = r0;
    ov01_021FA44C(r7);
    sub_02023EE0(r4, r0);
    sub_02023F40(r4, 0);
    sub_02023F04(r4, 0);
    ov01_021FA3E8(r5, r4);
    ov01_021F8C88(r5, r4);
}



void ov01_021F894C(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    MapObject_GetFacingDirection(r5);
    // strb r0, [r6]
    sub_0205F330(r5);
    *((u8*)(r6 + 2)) = r0;
    sub_02023EF4(r4);
    sub_02023EE0(r4, 0);
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
    MapObject_GetFacingVector(r5);
    *((u32*)(r0 + 8)) = (2 << 0xa);
    ov01_021FA3E8(r5, r4);
    ov01_021F8C88(r5, r4);
}



void ov01_021F89B8(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    MapObject_GetFacingDirection(r5);
    sub_0205F330(r5);
    sub_02023EF4(r4);
    sub_02023EE0(r4, 1);
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
    sub_02023EF4(r4);
    sub_02023EE0(r4, 0);
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
    // strb r7, [r6]
    sub_0205F330(r5);
    *((u8*)(r6 + 2)) = r0;
    ov01_021FA3E8(r5, r4);
    ov01_021F8C88(r5, r4);
}



void ov01_021F8A4C(void) {
    sub_0205F40C();
    ov01_021FA2D4(r6);
    MapObject_GetFacingDirection(r6);
    // ldrsb r1, [r4, r1]
    ov01_021FA44C(0);
    sub_02023EE0(r5, r0);
    sub_02023F40(r5, 0);
    sub_02023F04(r5, (1 << 0xc));
    ov01_021FA3E8(r6, r5);
    ov01_021F8C88(r6, r5);
    // strb r7, [r4]
    sub_0205F330(r6);
    *((u8*)(r4 + 2)) = r0;
}



void ov01_021F8AB0(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    MapObject_GetFacingDirection(r5);
    // str r0, [sp]
    sub_0205F330(r5);
    // ldrsb r0, [r6, r0]
    sub_02023EE0(r4, 0);
    sub_02023EE0(r4, 1);
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
    MapObject_GetFacingVector(r5);
    *((u32*)(r0 + 8)) = (2 << 0xa);
    // ldr r0, [sp]
    // strb r0, [r6]
    *((u8*)(r6 + 2)) = r7;
    ov01_021FA3E8(r5, r4);
    ov01_021F8C88(r5, r4);
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
}



void ov01_021F8C00(void) {
    sub_02023F70();
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r4, r1, #0xc
    _s32_div_f(r4, r6);
    // sub r1, r4, r1
    sub_02023F40(r5, (r1 << 0xc));
    sub_02023F04(r5, 0);
}



void ov01_021F8C30(void) {
}



void ov01_021F8C3C(void) {
}



void ov01_021F8C64(void) {
}



void ov01_021F8C88(void) {
    MapObject_TestFlagsBits((1 << 9));
    MapObject_TestFlagsBits(r5, (1 << 0xc));
    MapObject_TestFlagsBits(r5, (2 << 0xc));
    sub_02023EA4(r6, ((0 << 0x18) >> 0x18));
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
}



void ov01_021F8D24(void) {
    // bx lr
    // TODO: decompile
}



void ov01_021F8D28(void) {
    sub_0205F40C();
    ov01_021F1640(*((u32*)r0));
    // str r0, [r4]
}



void ov01_021F8D40(void) {
    sub_0205F40C();
    ov01_021F1640(*((u32*)r0));
    // str r0, [r4]
}



void ov01_021F8D58(void) {
}


