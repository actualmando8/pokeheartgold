/* Decompiled from asm/overlay_01_021F8D80.s */
#include "global.h"

void ov01_021F8D80(void) {
    // str r1, [sp]
    ov01_021F9344();
    // str r0, [sp, #4]
    MapObject_CheckFlag4(r5);
    ov01_02205564(r5);
    // add r1, sp, #8
    MapObject_CopyFacingVector(r5, ((*((u8*)(r4 + 0x17)) << 0x1d) >> 0x1f));
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #4]
    // add r1, sp, #8
    MapObject_CopyFacingVector(r5);
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x28]
    // add r2, sp, #8
    ov01_021F8E70(r5, r6);
    ov01_022054E0(r5);
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r6);
    // ldr r0, [sp]
    sub_02023EE0(r0);
    // ldr r0, [sp]
    sub_02023F40(0);
    *((u8*)(r4 + 0x15)) = 0;
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    sub_02023F04(0, (1 << 0xc));
    // ldr r2, [sp]
    ov01_021F8FC0(((r6 << 0x18) >> 0x18), r5);
    // ldr r1, [sp, #0xc]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    *((u8*)(r4 + 0x15)) = 1;
    *((u8*)(r4 + 0x15)) = 0;
    // ldr r0, [sp]
    sub_02023F04(0, (1 << 0xc));
    // add r1, sp, #8
    MapObject_SetFacingVector(r5);
}



void ov01_021F8E70(void) {
    // add r1, sp, #0
    MapObject_CopyFacingVector();
    MapObject_GetSpriteID(r6);
    ov01_021FA298();
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F8E9E: ; jump table
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = (1 << 0xc);
    // sub r0, r1, r0
    *((u32*)(r4 + 8)) = (1 << 0xc);
    // add r0, r1, r0
    // str r0, [r4]
    // sub r0, r1, r0
    // str r0, [r4]
    // add r0, r1, r0
    // str r0, [r4]
    // sub r0, r1, r0
    // str r0, [r4]
}



void ov01_021F8F08(void) {
    sub_0205F40C();
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // orr r0, r1
    *((u8*)(r0 + 0x17)) = 4;
    MapObject_GetFacingDirection(r6, *((u8*)(r0 + 0x17)));
    // add r1, sp, #0
    ov01_021FD9CC();
    // ldr r1, [sp]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    *((u8*)(r4 + 0x12)) = (r0 >> 0x14);
    // ldr r1, [sp, #8]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    *((u8*)(r4 + 0x13)) = ((r0 >> 0x14) >> 0x14);
    // bic r1, r0
    *((u8*)(r4 + 0x17)) = *((u8*)(r4 + 0x17));
    *((u8*)(r4 + 0x12)) = 0;
    *((u8*)(r4 + 0x13)) = 0;
}



void ov01_021F8F68(void) {
}



void ov01_021F8F74(void) {
}



void ov01_021F8F88(void) {
}



void ov01_021F8FA0(void) {
}



void ov01_021F8FC0(void) {
    sub_02023F30(r2);
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r4, r1, #0xc
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F8FE4: ; jump table
    // sub r4, #0x14
    // sub r4, #0x28
    // sub r4, #0x3c
    ov01_022055B0(r6, (r1 >> 0x14));
}



void ov01_021F902C(void) {
}



void ov01_021F9048(void) {
}



void ov01_021F9058(void) {
    ov01_021F9140();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
    sub_0205F9A0(r4);
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
}



void ov01_021F90D0(void) {
    sub_0205F40C();
    ov01_021F9610(*((u32*)r0), (r0 + 4));
    ov01_021F95A8(r5, r4);
    MapObject_SetFlagsBits(r5, (2 << 0x14));
}



void ov01_021F90FC(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    ov01_021F9510(r5, r4);
    ov01_021F9630(*((u32*)r4), (r4 + 4));
    ov01_021FA3E8(r5, *((u32*)r4));
    MapObject_ClearFlagsBits(r5, (2 << 0x14));
}



void ov01_021F9140(void) {
}



void ov01_021F9154(void) {
    sub_02023EE0(r1, 0);
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
}



void ov01_021F917C(void) {
    sub_02023EE0(r1, 1);
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
}



void ov01_021F91A4(void) {
    MapObject_TestFlagsBits((1 << 9));
    MapObject_TestFlagsBits(r5, (1 << 0xc));
    MapObject_TestFlagsBits(r5, (2 << 0xc));
    sub_02023EA4(r6, ((0 << 0x18) >> 0x18));
}



void ov01_021F91E4(void) {
}



void ov01_021F91F8(void) {
    MapObjectManager_GetFlagsBitsMask(1);
    GF_AssertFail();
    FldObjSys_OpenMModelNarc(r5);
    MapObjectManager_GetObjectCount(r5);
    // str r0, [sp, #0x14]
    MapObjectManager_GetPriority(r5);
    // str r0, [sp, #0x10]
    sub_0205F1A0(r5);
    // str r4, [sp]
    // str r6, [sp, #4]
    // ldr r1, [sp, #0x30]
    // str r7, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    ov01_021F944C(r5);
    MapObjectManager_SetFlagsBits(r5, 1);
}



void ov01_021F9250(void) {
    sub_0205F5D4();
    GF_AssertFail();
    sub_0205F1A0(r4);
    ov01_021F94A0();
    MapObjectManager_ClearFlagsBits(r4, 1);
    FldObjSys_CloseMModelNarc(r4);
}



void FldObjSys_OpenMModelNarc(void) {
}



void FldObjSys_CloseMModelNarc(void) {
}



void ov01_021F92A0(void) {
    MapObject_GetManager();
    MapObjectManager_GetFlagsBitsMask(4);
    MapObject_GetFlagsBitsMask(r4, (1 << 0xe));
    MapObject_CheckMovementPaused(r4);
    MapObject_CheckFlag4(r4);
    sub_0205F484(r4);
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
}



void ov01_021F9318(void) {
}



void ov01_021F9324(void) {
}



void ov01_021F9344(void) {
    MapObject_CheckMovementPaused();
    MapObject_CheckFlag4(r4);
    MapObject_GetFlagsBitsMask(r4, (1 << 8));
}



void ReadMModelFromNarcInternal(void) {
    MapObjectManager_GetMapModelNarc();
    NARC_GetMemberSize(r4);
    Heap_Alloc(4, r0);
    Heap_AllocAtEnd(4);
    NARC_ReadWholeMember(r6, r4, r0);
}



void ov01_021F93AC(void) {
    // add r1, sp, #0x24
    MapObject_CopyPositionVector();
    // add r1, sp, #0x18
    MapObject_CopyFacingVector(r5);
    // add r1, sp, #0xc
    sub_0205F990(r5);
    // add r1, sp, #0
    sub_0205F9B0(r5);
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
    *((u32*)(r4 + 4)) = r0;
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r1, r0
    // ldr r3, [sp, #8]
    // add r0, r2, r0
    // add r0, r3, r0
    *((u32*)(r4 + 8)) = r0;
}



void ov01_021F9408(void) {
    MapObject_SetFacingDirection();
    MapObject_CheckFlag14(r4);
    sub_0205F484(r4);
}



void ov01_021F9424(void) {
    MapObject_SetVisible(1);
    MapObject_SetFlagsBits(r4, (1 << 0x14));
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


