/* Decompiled from asm/overlay_01_022053EC.s */
#include "global.h"

void ScrCmd_808(void) {
    ScriptReadHalfword();
    // add r0, #0x80
    FieldSystem_VarGet(*((u32*)r5), r0);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    // add r5, #0x80
    TrainerHouse_StartBattle(*((u32*)r5), r4);
    UnloadOverlayByID(r6);
}




void ov01_02205424(void) {
    // add r0, #0xf9
    // strb r1, [r0]
}




void ov01_0220542C(void) {
    // add r5, sp, #0x30
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // add r5, sp, #0x20
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // add r5, sp, #0x10
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // add r5, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // add r0, sp, #0x20
    // add r1, sp, #0x20
    // add r0, sp, #0x10
    // add r1, sp, #0x10
    // add r0, sp, #0
    GF_AssertFail(((0 + 1) << 0x18), (r0 << 2), (((0 + 1) << 0x18) >> 0x18), r1);
}




void ov01_022054E0(void) {
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    ov01_02205584(r0, (0x18 - 1));
    sub_020659A8(r4);
    sub_0206599C(r4);
    GF_AssertFail();
    // add r0, sp, #0
    // add r0, r0, r2
}




BOOL ov01_0220553C(void) {
    // and r0, r1
}




void ov01_02205564(void) {
}




void ov01_02205584(void) {
    // asr r1, r0, #4
    // and r0, r1
}




void ov01_022055B0(void) {
    // and r0, r1
}




void ov01_022055DC(void) {
    // asr r1, r5, #8
    // and r0, r1
}




void ov01_02205604(void) {
    // str r0, [r4]
    // str r0, [r5]
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02205634: ; jump table
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r4]
}




void ov01_02205664(void) {
    // str r0, [r4]
    // str r0, [r5]
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02205694: ; jump table
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r4]
}




void ov01_022056C4(void) {
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022056F0: ; jump table
}




void ov01_02205720(void) {
    // add r1, sp, #0
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02205740: ; jump table
    // ldr r1, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // add r1, sp, #0
}




void ov01_02205784(void) {
}




void ov01_02205790(void) {
    // add r1, sp, #0
    // add r1, sp, #0
}




void ov01_022057C4(void) {
}




void ov01_022057D0(void) {
}




void ov01_022057DC(void) {
    // add r0, #0xfc
    // add r0, r1, r0
    // add r3, r0, r2
    // strb r0, [r3, r1]
}




void ov01_02205808(void) {
    // add r2, sp, #0
    // add r3, sp, #0
    // add r1, sp, #0
}




void ov01_02205870(void) {
    // add r0, #0xfc
    // add r4, #0xc
}




void ov01_0220589C(void) {
    Heap_AllocAtEnd(0xb, 0x28);
    MI_CpuFill8(0, 4);
    MapObject_GetParam(r6, 2);
    ov01_02206088(((r0 << 0xf) >> 0x10));
    MapObject_GetManager(r6);
    MapObjectManager_GetMapModelNarc();
    NARC_AllocAndReadWholeMember(r7, 0xb);
    // str r0, [r4]
    NNS_G3dGetTex();
    sub_02020888(0);
    sub_02020838(r6, 0);
    *((u32*)(r4 + 4)) = r0;
    // add r1, #8
    MIi_CpuCopy16(r7, r4, 0x20);
    // add r0, #8
    TintPalette_GrayScale(r4, 0x10);
    // str r0, [sp]
    // add r0, #8
    // add r2, #0xf0
    TintPalette_CustomTone(r4, 0x10, 0x10, 0xb4);
    sub_02023FB0(r5);
    // add r2, #8
    GF_CreateNewVramTransferTask(1, ((r0 << 0x10) >> 0xd), r4, 0x20);
    sub_02023FA0(r5);
    sub_02023FA0(r5);
    // and r3, r6
    GF_CreateNewVramTransferTask(0, ((r0 << 0x10) >> 0xd), *((u32*)(r4 + 4)), ((0x7FFF0000 >> 0x10) << 4));
    SysTask_CreateOnVWaitQueue(ov01_0220596C, r4, 0);
}




void ov01_0220596C(void) {
}




void ov01_02205990(void) {
}




void ov01_022059AC(void) {
    // add r0, #0xf9
    // add r0, #0xfa
    // str r0, [sp]
    // add r1, #0xfa
    // add r0, #0xe4
    // add r0, #0xe4
    // add r0, #0xe4
    // add r0, #0xfa
    // strb r1, [r0]
    // add r5, #0xf9
    // strb r0, [r5]
}




void ov01_02205A34(void) {
    // add r1, sp, #0
    // add r1, sp, #0
    // str r5, [sp, #4]
}




BOOL ov01_02205A60(void) {
    // add r5, #0xe4
    // str r0, [r4]
    // str r0, [r4]
}




void ov01_02205AEC(void) {
    Heap_AllocAtEnd(0xb, 0x48);
    // strb r0, [r2]
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    TaskManager_Call(*((u32*)(r4 + 0x10)), ov01_02205B14, r0);
}




void ov01_02205B14(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02205B3A: ; jump table
    FollowMon_IsActive(r5, (*((u16*)(*((u8*)r0) + 6)) << 0x10));
    Heap_Free(r4);
    ov01_022057C4(r5);
    Heap_Free(r4);
    FollowMon_GetMapObject(r5);
    MapObject_UnpauseMovement();
    // strb r0, [r4]
    FollowMon_GetMapObject(r5);
    MapObject_IsMovementPaused();
    ov01_02205CF0(r5, r4);
    // strb r0, [r4]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    FollowMon_GetMapObject(r5, *((u32*)(ov01_022096E0 + 8)));
    MapObject_IsMovementPaused();
    // add r1, sp, #0x10
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) + 1);
    MapObject_SetHeldMovement(r5, *((u32*)(*((u8*)(r4 + 3)) + (*((u8*)(r4 + 3)) << 2))), (*((u8*)(r4 + 3)) << 2));
    // strb r0, [r4]
    FollowMon_GetMapObject(r5);
    MapObject_IsMovementPaused();
    MapObject_SetHeldMovement(r5, 0);
    // strb r0, [r4]
    // add r2, sp, #8
    // strb r0, [r2]
    // add r2, sp, #0
    // strb r0, [r2]
    FollowMon_GetMapObject(r5, (8 - 1), ((r2 + 1) + 1), (ov01_022096E0 + 1));
    // mvn r0, r0
    // add r1, sp, #0x24
    MapObject_CopyPositionVector(r0);
    // add r1, sp, #8
    // ldr r0, [sp, #0x2c]
    // ldrsb r1, [r1, r2]
    // ldr r2, [sp, #0x28]
    // sub r0, r0, r1
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x24]
    // add r0, r0, r5
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    // ldrsb r0, [r0, r1]
    // add r1, sp, #0x24
    // add r0, r2, r0
    // str r0, [sp, #0x28]
    MapObject_SetPositionVector(r6, *((u8*)(r4 + 1)), *((u8*)(r4 + 1)));
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    // strb r0, [r4]
    FollowMon_GetMapObject(r5);
    ov01_0220329C(3);
    // strb r0, [r4]
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    ov01_02205790(r5, 0);
    // add r2, sp, #0x18
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    ov01_021F771C(*((u32*)(r5 + 0x3c)), ov01_02209704);
    // add r1, sp, #0x18
    sub_02023E78();
    // add r5, #0xe4
    sub_02069E84(*((u32*)r5), 1);
    // strb r0, [r4]
    Heap_Free((*((u8*)r4) + 1));
}




void ov01_02205CF0(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // ldr r1, [sp]
    // ldr r1, [sp]
}




void ov01_02205D68(void) {
    FollowMon_IsActive();
    ov01_022057C4(r4);
    sub_0206A054(r4);
    ov01_02205790(r4, 0);
    Heap_AllocAtEnd(0xb, 0x44);
    // str r0, [r2]
    TaskManager_Call(*((u32*)(r4 + 0x10)), ov01_02205DB4, r0);
}




void ov01_02205DB4(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    TaskManager_GetStatePtr(r4);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02205DE2: ; jump table
    FollowMon_GetMapObject(r5);
    MapObject_UnpauseMovement();
    // str r0, [r4]
    FollowMon_GetMapObject(r5);
    MapObject_IsMovementPaused();
    // str r0, [r4]
    FollowMon_GetMapObject(r5);
    // str r0, [sp]
    MapObject_GetSpriteID();
    ov01_02206088();
    MapObjectManager_GetMapModelNarc(*((u32*)(r5 + 0x3c)));
    NARC_AllocAndReadWholeMember(r7, 0xb);
    NNS_G3dGetTex();
    // add r0, r0, r1
    MIi_CpuCopy16((r6 + 4), 0x40);
    Heap_Free(r5);
    // ldr r0, [sp]
    ov01_0220329C(1);
    // str r0, [r4]
    // str r0, [r6]
    ov01_02205790(r5, 0);
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    ov01_021F771C(*((u32*)(r5 + 0x3c)), ov01_022096F8);
    // add r1, sp, #8
    sub_02023E78();
    sub_02023FB0(r7);
    // str r0, [sp, #4]
    sub_02023FB0(r7);
    // ldr r3, [sp, #4]
    // and r3, r6
    GF_CreateNewVramTransferTask(1, ((r0 << 0x10) >> 0xd), (r6 + 4), ((r3 >> 0x10) << 3));
    sub_0206A054(r5);
    FollowMon_GetMapObject(r5);
    sub_02069E28(0);
    // str r0, [r4]
    Heap_Free(r6);
}




void ov01_02205EE0(void) {
    Heap_AllocAtEnd(0xb, 4);
    // str r0, [r2]
    TaskManager_Call(r4, ov01_02205F00, r0);
}




void ov01_02205F00(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02205F2E: ; jump table
    // add r0, #0xe4
    // add r4, #0xe4
    // str r0, [r5]
    // add r0, #0xe4
    // add r4, #0xe4
    // str r0, [r5]
    // add r0, #0xe4
    // add r4, #0xe4
    // str r0, [r5]
    // str r0, [r6]
    // str r0, [r5]
    // add r0, #0xe4
    // add r0, #0xe4
    // add r4, #0xe4
    // str r0, [r5]
    // add r0, #0xe4
    // add r0, #0xe4
    // str r0, [r5]
}




void ov01_02206028(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // sub r6, r6, r4
    // sub r4, r7, r0
    // ldr r0, [sp]
}




void ov01_02206088(void) {
}




void ov01_0220609C(void) {
    // add r5, #0xe4
}




void ov01_022060B8(void) {
    FollowMon_IsActive();
    ov01_022057C4(r6);
    Heap_AllocAtEnd(0xb, 0x84);
    MI_CpuFill8(0, 0x84);
    *((u8*)(r4 + 1)) = r5;
    *((u8*)(r4 + 3)) = r7;
    TaskManager_Call(*((u32*)(r6 + 0x10)), ov01_0220610C, r4);
}




void ov01_0220610C(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r5);
    TaskManager_GetStatePtr(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0220613A: ; jump table
    FollowMon_GetMapObject(r6);
    MapObject_GetSpriteID();
    ov01_02206088();
    MapObjectManager_GetMapModelNarc(*((u32*)(r6 + 0x3c)));
    NARC_AllocAndReadWholeMember(r7, 0xb);
    NNS_G3dGetTex();
    // add r0, r0, r1
    MIi_CpuCopy16((r4 + 4), 0x40);
    Heap_Free(r6);
    // str r0, [r5]
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) - 1);
    // ldrsb r2, [r4, r0]
    // add r1, r2, r1
    // strb r1, [r4]
    // ldrsb r0, [r4, r0]
    // strb r0, [r4]
    // str r0, [r5]
    // str r0, [sp]
    // add r1, #0x44
    BlendPalette((r4 + 4), r4, 0x20, *((u8*)r4));
    ov01_021F771C(*((u32*)(r6 + 0x3c)));
    sub_02023FB0();
    sub_02023FB0(r6);
    // and r3, r5
    // add r2, #0x44
    GF_CreateNewVramTransferTask(1, ((r0 << 0x10) >> 0xd), r4, ((0xFFFF0000 >> 0x10) << 3));
    *((u8*)(r4 + 2)) = *((u8*)(r4 + 3));
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) - 1);
    // ldrsb r2, [r4, r0]
    // sub r1, r2, r1
    // strb r1, [r4]
    // ldrsb r0, [r4, r0]
    // str r0, [r5]
    // str r0, [sp]
    // add r1, #0x44
    BlendPalette((r4 + 4), r4, 0x20, *((u8*)r4));
    ov01_021F771C(*((u32*)(r6 + 0x3c)));
    sub_02023FB0();
    sub_02023FB0(r6);
    // and r3, r5
    // add r2, #0x44
    GF_CreateNewVramTransferTask(1, ((r0 << 0x10) >> 0xd), r4, ((0xFFFF0000 >> 0x10) << 3));
    *((u8*)(r4 + 2)) = *((u8*)(r4 + 3));
    Heap_Free(r4);
}




void ov01_02206268(void) {
    // add r5, #0xe4
}




void ov01_022062CC(void) {
}



