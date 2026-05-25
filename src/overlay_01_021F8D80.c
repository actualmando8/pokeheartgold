/* Decompiled from asm/overlay_01_021F8D80.s */
#include "global.h"

void ov01_021F8D80(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // str r1, [sp]
    // add r4, r2, #0
    // add r6, r3, #0
    // bl ov01_021F9344
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl MapObject_CheckFlag4
    // add r7, r0, #0
    // add r0, r5, #0
    // bl ov01_02205564
    // ldrb r1, [r4, #0x17]
    // lsl r1, r1, #0x1d
    // lsr r1, r1, #0x1f
    // beq _021F8DBA
    // add r0, r5, #0
    // add r1, sp, #8
    // bl MapObject_CopyFacingVector
    // mov r0, #0x14
    // ldrsb r0, [r4, r0]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // b _021F8DFC
    // ldr r1, [sp, #4]
    // cmp r1, #0
    // bne _021F8DC8
    // cmp r7, #0
    // bne _021F8DC8
    // cmp r0, #0
    // beq _021F8DD8
    // add r0, r5, #0
    // add r1, sp, #8
    // bl MapObject_CopyFacingVector
    // mov r0, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // b _021F8DE0
    // mov r0, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x28]
    // cmp r0, #0
    // beq _021F8DF0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, sp, #8
    // bl ov01_021F8E70
    // add r0, r5, #0
    // bl ov01_022054E0
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // mov r0, #0x10
    // ldrsb r0, [r4, r0]
    // cmp r6, r0
    // beq _021F8E1E
    // add r0, r6, #0
    // bl ov01_021FA44C
    // add r1, r0, #0
    // ldr r0, [sp]
    // bl sub_02023EE0
    // ldr r0, [sp]
    // mov r1, #0
    // bl sub_02023F40
    // mov r0, #0
    // strb r0, [r4, #0x15]
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // bne _021F8E56
    // cmp r7, #0
    // bne _021F8E56
    // mov r1, #1
    // ldr r0, [sp]
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // lsl r0, r6, #0x18
    // ldr r2, [sp]
    // lsr r0, r0, #0x18
    // add r1, r5, #0
    // bl ov01_021F8FC0
    // cmp r0, #0
    // beq _021F8E52
    // mov r0, #2
    // ldr r1, [sp, #0xc]
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // mov r0, #1
    // strb r0, [r4, #0x15]
    // b _021F8E56
    // mov r0, #0
    // strb r0, [r4, #0x15]
    // cmp r7, #0
    // beq _021F8E64
    // mov r1, #1
    // ldr r0, [sp]
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // add r0, r5, #0
    // add r1, sp, #8
    // bl MapObject_SetFacingVector
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F8E70(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // add r6, r0, #0
    // add r1, sp, #0
    // add r4, r2, #0
    // bl MapObject_CopyFacingVector
    // add r0, r6, #0
    // bl MapObject_GetSpriteID
    // bl ov01_021FA298
    // cmp r0, #0xa
    // bne _021F8EDE
    // cmp r5, #3
    // bhi _021F8F02
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F8E9E: ; jump table
    // mov r0, #1
    // ldr r1, [r4, #8]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // add sp, #0xc
    // str r0, [r4, #8]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #1
    // ldr r1, [r4, #8]
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // add sp, #0xc
    // str r0, [r4, #8]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0xa
    // ldr r1, [r4]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // add sp, #0xc
    // str r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0xa
    // ldr r1, [r4]
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // add sp, #0xc
    // str r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // cmp r5, #2
    // beq _021F8EEA
    // cmp r5, #3
    // beq _021F8EF8
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #2
    // ldr r1, [r4]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // add sp, #0xc
    // str r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #2
    // ldr r1, [r4]
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // str r0, [r4]
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F8F08(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // add r5, r1, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // cmp r5, #0
    // beq _021F8F54
    // add r1, sp, #0
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldrb r1, [r4, #0x17]
    // mov r0, #4
    // orr r0, r1
    // strb r0, [r4, #0x17]
    // add r0, r6, #0
    // bl MapObject_GetFacingDirection
    // add r1, sp, #0
    // bl ov01_021FD9CC
    // ldr r1, [sp]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // strb r0, [r4, #0x12]
    // ldr r1, [sp, #8]
    // add sp, #0xc
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // strb r0, [r4, #0x13]
    // pop {r3, r4, r5, r6, pc}
    // ldrb r1, [r4, #0x17]
    // mov r0, #4
    // bic r1, r0
    // strb r1, [r4, #0x17]
    // mov r0, #0
    // strb r0, [r4, #0x12]
    // strb r0, [r4, #0x13]
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F8F68(void) {
    sub_0205F40C();
}


void ov01_021F8F74(void) {
    sub_0205F40C(0x14);
}


void ov01_021F8F88(void) {
    sub_0205F40C(0, 1);
}


void ov01_021F8FA0(void) {
    sub_0205F40C(0, 0x12, 0x13);
}


void ov01_021F8FC0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r2, #0
    // add r6, r1, #0
    // bl sub_02023F30
    // asr r1, r0, #0xb
    // lsr r1, r1, #0x14
    // add r1, r0, r1
    // asr r4, r1, #0xc
    // cmp r5, #3
    // bhi _021F8FF6
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F8FE4: ; jump table
    // sub r4, #0x14
    // b _021F8FF6
    // sub r4, #0x28
    // b _021F8FF6
    // sub r4, #0x3c
    // add r0, r6, #0
    // bl ov01_022055B0
    // cmp r0, #0
    // beq _021F9018
    // cmp r5, #1
    // bne _021F9010
    // cmp r4, #5
    // blt _021F900C
    // cmp r4, #0xf
    // blt _021F9028
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // cmp r4, #0xa
    // bge _021F9028
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // cmp r4, #5
    // blt _021F9020
    // cmp r4, #0xa
    // blt _021F9024
    // cmp r4, #0xf
    // blt _021F9028
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F902C(void) {
    sub_0205F40C(r1);
    ov01_02205808(r5, r4, r0);
}


void ov01_021F9048(void) {
    sub_0205F40C();
}


void ov01_021F9058(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov01_021F9140
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_0205F9A0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_021F9078(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r7, r0, #0
    // add r0, r5, #0
    // ldr r4, [r7]
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F90C0
    // cmp r4, #0
    // beq _021F90C0
    // add r0, r5, #0
    // bl sub_0205F330
    // add r3, r0, #0
    // lsl r6, r3, #2
    // ldr r3, _021F90C4 ; =ov01_02208B5C
    // add r0, r5, #0
    // ldr r3, [r3, r6]
    // add r1, r4, #0
    // add r2, r7, #0
    // blx r3
    // add r0, r5, #0
    // bl sub_0205F330
    // str r0, [r7, #0x10]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FA3E8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F91A4
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F90C4: .word ov01_02208B5C
    // TODO: decompile
}


void ov01_021F90C8(void) {
    ov01_021F91E4();
}


void ov01_021F90D0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021F90E6
    // add r1, r4, #4
    // bl ov01_021F9610
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


void ov01_021F90FC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_0205F40C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021F913C
    // ldr r0, [r4]
    // cmp r0, #0
    // bne _021F911E
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9510
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021F913C
    // add r1, r4, #4
    // bl ov01_021F9630
    // ldr r1, [r4]
    // add r0, r5, #0
    // bl ov01_021FA3E8
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0x14
    // bl MapObject_ClearFlagsBits
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F9140(void) {
    sub_0205F3E8(0x14);
    ov01_021F9510(r4, r0);
}


void ov01_021F9154(void) {
    // push {r4, lr}
    // ldr r0, [r2, #0x10]
    // add r4, r1, #0
    // cmp r0, #0
    // beq _021F916E
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
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F917C(void) {
    // push {r4, lr}
    // ldr r0, [r2, #0x10]
    // add r4, r1, #0
    // cmp r0, #1
    // beq _021F9196
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
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F91A4(void) {
    // push {r4, r5, r6, lr}
    // mov r4, #1
    // add r6, r1, #0
    // lsl r1, r4, #9
    // add r5, r0, #0
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _021F91B8
    // mov r4, #0
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _021F91D6
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl MapObject_TestFlagsBits
    // cmp r0, #0
    // bne _021F91D6
    // mov r4, #0
    // lsl r1, r4, #0x18
    // add r0, r6, #0
    // lsr r1, r1, #0x18
    // bl sub_02023EA4
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F91E4(void) {
    sub_0205F40C();
    ov01_021F95A8(r4, r0);
}


void ov01_021F91F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r4, r1, #0
    // mov r1, #1
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl MapObjectManager_GetFlagsBitsMask
    // cmp r0, #0
    // beq _021F9212
    // bl GF_AssertFail
    // add r0, r5, #0
    // bl FldObjSys_OpenMModelNarc
    // add r0, r5, #0
    // bl MapObjectManager_GetObjectCount
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // bl MapObjectManager_GetPriority
    // sub r0, r0, #1
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // bl sub_0205F1A0
    // str r4, [sp]
    // str r6, [sp, #4]
    // ldr r1, [sp, #0x30]
    // str r7, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // add r1, r5, #0
    // bl ov01_021F944C
    // add r0, r5, #0
    // mov r1, #1
    // bl MapObjectManager_SetFlagsBits
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9250(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0205F5D4
    // cmp r0, #1
    // beq _021F9260
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl sub_0205F1A0
    // bl ov01_021F94A0
    // add r0, r4, #0
    // mov r1, #1
    // bl MapObjectManager_ClearFlagsBits
    // add r0, r4, #0
    // bl FldObjSys_CloseMModelNarc
    // pop {r4, pc}
    // TODO: decompile
}


void FldObjSys_OpenMModelNarc(void) {
    NARC_New(0x51, 4);
    MapObjectManager_SetMapModelNarc(r4, r0);
}


void FldObjSys_CloseMModelNarc(void) {
    MapObjectManager_GetMapModelNarc();
    NARC_Delete();
}


void ov01_021F92A0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl MapObject_GetManager
    // mov r1, #4
    // bl MapObjectManager_GetFlagsBitsMask
    // cmp r0, #0
    // bne _021F92DA
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xe
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _021F92DA
    // add r0, r4, #0
    // bl MapObject_CheckMovementPaused
    // cmp r0, #0
    // beq _021F92D4
    // add r0, r4, #0
    // bl MapObject_CheckFlag4
    // cmp r0, #0
    // beq _021F92DA
    // add r0, r4, #0
    // bl sub_0205F484
    // pop {r4, pc}
    // TODO: decompile
}


void ObjectEvent_GetGraphicsInfo(void) {
    // push {r3, lr}
    // ldr r3, _021F92FC ; =ov01_022074A8
    // ldr r1, _021F9300 ; =0x0000FFFF
    // ldrh r2, [r3]
    // cmp r2, r0
    // bne _021F92EC
    // add r0, r3, #0
    // pop {r3, pc}
    // add r3, r3, #6
    // ldrh r2, [r3]
    // cmp r2, r1
    // bne _021F92E2
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // _021F92FC: .word ov01_022074A8
    // _021F9300: .word 0x0000FFFF
    // TODO: decompile
}


void GetMoveModelNoBySpriteId(void) {
    ObjectEvent_GetGraphicsInfo(0);
}


void ov01_021F9318(void) {
    MapObject_GetSpriteID();
    ov01_021F9324();
}


void ov01_021F9324(void) {
    ObjectEvent_GetGraphicsInfo(0);
}


void ov01_021F9344(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl MapObject_CheckMovementPaused
    // cmp r0, #1
    // bne _021F935E
    // add r0, r4, #0
    // bl MapObject_CheckFlag4
    // cmp r0, #0
    // bne _021F935E
    // mov r0, #1
    // pop {r4, pc}
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #8
    // bl MapObject_GetFlagsBitsMask
    // cmp r0, #0
    // beq _021F9370
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ReadMModelFromNarcInternal(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r2, #0
    // bl MapObjectManager_GetMapModelNarc
    // add r1, r4, #0
    // add r6, r0, #0
    // bl NARC_GetMemberSize
    // add r1, r0, #0
    // cmp r5, #1
    // bne _021F9394
    // mov r0, #4
    // bl Heap_Alloc
    // b _021F939A
    // mov r0, #4
    // bl Heap_AllocAtEnd
    // add r5, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r5, #0
    // bl NARC_ReadWholeMember
    // add r0, r5, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F93AC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x30
    // add r4, r1, #0
    // add r5, r0, #0
    // add r1, sp, #0x24
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // add r1, sp, #0x18
    // bl MapObject_CopyFacingVector
    // add r0, r5, #0
    // add r1, sp, #0xc
    // bl sub_0205F990
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_0205F9B0
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0xc]
    // add r0, r1, r0
    // ldr r3, [sp]
    // add r0, r2, r0
    // add r0, r3, r0
    // str r0, [r4]
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x10]
    // add r0, r1, r0
    // ldr r3, [sp, #4]
    // add r0, r2, r0
    // add r0, r3, r0
    // str r0, [r4, #4]
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r1, r0
    // ldr r3, [sp, #8]
    // add r0, r2, r0
    // add r0, r3, r0
    // str r0, [r4, #8]
    // add sp, #0x30
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F9408(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl MapObject_SetFacingDirection
    // add r0, r4, #0
    // bl MapObject_CheckFlag14
    // cmp r0, #1
    // bne _021F9420
    // add r0, r4, #0
    // bl sub_0205F484
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F9424(void) {
    // push {r4, lr}
    // mov r1, #1
    // add r4, r0, #0
    // bl MapObject_SetVisible
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0x14
    // bl MapObject_SetFlagsBits
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F943C(void) {
    // bx lr
    // TODO: decompile
}


void ov01_021F9440(void) {
    // bx lr
    // TODO: decompile
}


void ov01_021F9444(void) {
    // bx lr
    // TODO: decompile
}


void ov01_021F9448(void) {
    // bx lr
    // TODO: decompile
}

