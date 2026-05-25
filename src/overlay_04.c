/* Decompiled from asm/overlay_04.s */
#include "global.h"

void ov04_02253E20(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(4);
    // add r3, sp, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // str r0, [sp]
    // add r0, #0x9c
    ov01_021F3C0C(*((u32*)r5), 0x6f, r3, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x98
    // str r0, [sp, #8]
    ov01_021FB3E4(0, 0xe, 0x13, 3);
    GF_AssertFail(((*((u32*)r4) << 0x18) >> 0x18));
    // add r0, #0x9c
    ov01_021F3B4C(*((u32*)r5), 0x6f);
    // add r0, sp, #0xc
    ov01_021F3B0C(r0);
    // add r1, sp, #0xc
    // str r4, [sp, #0x10]
    ov01_021F3B1C(r6);
    // add r5, #0x98
    ov01_021FB4A0(0, r4, *((u32*)r5));
    G3X_SetEdgeColorTable(ov04_02257334);
}




void ov04_02253ED4(void) {
    Heap_AllocAtEnd(0xb, 8);
    // str r0, [r4]
    *((u32*)(r0 + 4)) = r5;
    FieldSystem_GetSaveData(r5);
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(4);
    // add r1, sp, #0
    PlayerAvatar_CopyPositionVector(*((u32*)(r5 + 0x40)));
    // ldr r1, [sp, #4]
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov04_02253F38, r4);
    // str r0, [r6]
    TaskManager_Call(1, ov04_02253F94, r4);
    // str r0, [r6]
}




void ov04_02253F38(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov01_02205A60, 0);
    // str r0, [r4]
    SysTask_CreateOnMainQueue(ov04_02253FF0, r4, 0);
    // str r0, [r4]
    Heap_Free((*((u32*)r4) + 1));
}




void ov04_02253F94(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov01_02205A60, 0);
    // str r0, [r4]
    SysTask_CreateOnMainQueue(ov04_022540C0, r4, 0);
    // str r0, [r4]
    Heap_Free((*((u32*)r4) + 1));
}




void ov04_02253FF0(void) {
    PlayerAvatar_ToggleAutomaticHeightUpdating(*((u32*)(*((u32*)(r1 + 4)) + 0x40)), 0);
    // mov r0, #SEQ_SE_DP_ELEBETA>>4
    PlaySE((r0 << 4));
    // str r0, [r5]
    // add r0, #0x9c
    ov01_021F3B4C(*((u32*)r4), 0x6f);
    // add r0, sp, #0xc
    ov01_021F3B0C(r0);
    // ldr r1, [sp, #0x10]
    // add r1, r1, r0
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x10]
    StopSE((0x61 << 4), 0);
    // str r0, [r5]
    // add r1, sp, #0
    PlayerAvatar_CopyPositionVector(*((u32*)(r4 + 0x40)));
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    // str r1, [sp, #4]
    PlayerAvatar_SetMapObjectYPosition(*((u32*)(r4 + 0x40)));
    // ldr r1, [sp, #4]
    ov01_02205A34(r4);
    // add r1, sp, #0xc
    ov01_021F3B1C(r6);
    // add r2, #0x98
    ov01_021FB4A0(0, (0x1f << 0x10), *((u32*)r4));
    PlayerAvatar_ToggleAutomaticHeightUpdatingImmediate(*((u32*)(r4 + 0x40)), 1);
    PlaySE(SEQ_SE_DP_KI_GASYAN);
    SysTask_Destroy(r6);
    // str r0, [r5]
}




void ov04_022540C0(void) {
    PlayerAvatar_ToggleAutomaticHeightUpdating(*((u32*)(*((u32*)(r1 + 4)) + 0x40)), 0);
    // mov r0, #SEQ_SE_DP_ELEBETA>>4
    PlaySE((r0 << 4));
    // str r0, [r5]
    // add r0, #0x9c
    ov01_021F3B4C(*((u32*)r4), 0x6f);
    // add r0, sp, #0xc
    ov01_021F3B0C(r0);
    // ldr r1, [sp, #0x10]
    // sub r2, r1, r0
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x10]
    StopSE((0x61 << 4), 0);
    // str r0, [r5]
    // add r1, sp, #0
    PlayerAvatar_CopyPositionVector(*((u32*)(r4 + 0x40)));
    // ldr r1, [sp, #4]
    // sub r1, r1, r0
    // str r1, [sp, #4]
    PlayerAvatar_SetMapObjectYPosition(*((u32*)(r4 + 0x40)));
    // ldr r1, [sp, #4]
    ov01_02205A34(r4);
    // add r1, sp, #0xc
    ov01_021F3B1C(r6);
    // add r2, #0x98
    ov01_021FB4A0(0, (2 << 0x10), *((u32*)r4));
    PlayerAvatar_ToggleAutomaticHeightUpdatingImmediate(*((u32*)(r4 + 0x40)), 1);
    PlaySE(SEQ_SE_DP_KI_GASYAN);
    SysTask_Destroy(r6);
    // str r0, [r5]
}




void ov04_02254190(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(5);
    Heap_Alloc(4, 0x54);
    *((u32*)(*((u32*)(r4 + 4)) + 0x24)) = r0;
    MI_CpuFill8(*((u32*)(*((u32*)(r4 + 4)) + 0x24)), 0, 0x54);
    // add r0, sp, #4
    // str r1, [r0]
    *((u32*)(*((u32*)(r4 + 4)) + 4)) = 0;
    *((u32*)(*((u32*)(r4 + 4)) + 8)) = 0;
    // add r0, r0, r2
    // str r2, [sp, #4]
    // add r1, r2, r1
    // str r1, [sp, #4]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // add r0, #0x9c
    // add r2, sp, #4
    ov01_021F3C0C(*((u32*)r4), 0x76, (*((u16*)(ov04_022575D4 + (*((u8*)(r7 + 0)) << 2))) << 0x10), 0);
    *((u32*)(r5 + 4)) = r0;
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225421E: ; jump table
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x73);
    // str r0, [sp]
    ov01_021E8970(0x73, 0, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x74);
    // str r0, [sp]
    ov01_021E8970(0x74, 0, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x7a);
    // str r0, [sp]
    ov01_021E8970(0x7a, 0, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x75);
    // str r0, [sp]
    ov01_021E8970(0x75, 0, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x73);
    // str r0, [sp]
    ov01_021E8970(0x73, 0, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x74);
    // str r0, [sp]
    ov01_021E8970(0x74, 1, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x7a);
    // str r0, [sp]
    ov01_021E8970(0x7a, 0, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x75);
    // str r0, [sp]
    ov01_021E8970(0x75, 1, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x73);
    // str r0, [sp]
    ov01_021E8970(0x73, 1, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x74);
    // str r0, [sp]
    ov01_021E8970(0x74, 0, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x7a);
    // str r0, [sp]
    ov01_021E8970(0x7a, 1, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x75);
    // str r0, [sp]
    ov01_021E8970(0x75, 0, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x73);
    // str r0, [sp]
    ov01_021E8970(0x73, 1, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x74);
    // str r0, [sp]
    ov01_021E8970(0x74, 1, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x7a);
    // str r0, [sp]
    ov01_021E8970(0x7a, 1, 1, r0);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r4), 0x75);
    // str r0, [sp]
    ov01_021E8970(0x75, 1, 1, r0);
    GF_AssertFail();
}




void FlipAzaleaGymSwitch(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(5);
    PlaySE(SEQ_SE_DP_KI_GASYAN);
    // and r0, r1
    // eor r0, r1
    *((u32*)(r4 + 4)) = *((u32*)(r4 + 4));
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r5), 0x74, *((u32*)(r4 + 4)));
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r5), 0x75);
    // str r0, [sp, #4]
    ov01_021E8A8C(*((u32*)(r5 + 0x54)), r7, 0x74, r6);
    // ldr r1, [sp, #4]
    ov01_021E8A8C(*((u32*)(r5 + 0x54)), 0x75, r6);
    // and r0, r2
    // str r0, [sp]
    ov01_021E8970(0x74, 1, 1, r7);
    // str r0, [sp]
    // ldr r3, [sp, #4]
    ov01_021E8970(0x75, 1, 1);
    // str r0, [sp]
    ov01_021E8970(0x74, 0, r7);
    // ldr r3, [sp, #4]
    // str r0, [sp]
    ov01_021E8970(0x75, 0, 1);
    // asr r2, r1, #1
    // and r0, r2
    // eor r0, r1
    *((u32*)(r4 + 4)) = 2;
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r5), 0x73);
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r5), 0x7a);
    // str r0, [sp, #8]
    ov01_021E8A8C(*((u32*)(r5 + 0x54)), r7, 0x73, r6);
    // ldr r1, [sp, #8]
    ov01_021E8A8C(*((u32*)(r5 + 0x54)), 0x7a, r6);
    // asr r0, r0, #1
    // and r0, r2
    // str r0, [sp]
    ov01_021E8970(0x73, 1, 1, r7);
    // str r0, [sp]
    // ldr r3, [sp, #8]
    ov01_021E8970(0x7a, 1, 1);
    // str r0, [sp]
    ov01_021E8970(0x73, 0, r7);
    // ldr r3, [sp, #8]
    // str r0, [sp]
    ov01_021E8970(0x7a, 0, 1);
    GF_AssertFail();
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov04_02254CA4, 0);
}




void BeginAzaleaGymSpinarakRide(void) {
    Heap_AllocAtEnd(0xb, 8);
    // str r1, [r7]
    *((u32*)(r0 + 4)) = r6;
    *((u8*)(r4 + 0x18)) = r5;
    *((u32*)(r4 + 0x30)) = 0;
    *((u8*)(r4 + 0x14)) = 0;
    *((u8*)(r4 + 0x16)) = 1;
    *((u32*)(r4 + 0x1c)) = 0;
    FieldSystem_GetSaveData(r6, 0);
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(5);
    *((u8*)(r4 + 0x15)) = *((u32*)(r0 + 4));
    *((u8*)(r4 + 0x17)) = 0;
    GF_AssertFail(*((u8*)(r0 + 0)), (0 + 1), r0);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022545D0: ; jump table
    *((u8*)(r4 + 0x19)) = 1;
    *((u8*)(r4 + 0x1a)) = (*((u16*)(*((u32*)(ov04_022575A4 + (r5 << 2))) + (*((u8*)(r4 + 0x15)) << 3))) - 1);
    *((u8*)(r4 + 0x1b)) = 1;
    *((u8*)(r4 + 0x19)) = 0;
    *((u8*)(r4 + 0x1a)) = 0;
    *((u8*)(r4 + 0x1b)) = 0;
    // add r0, r1, r0
    // add r0, r2, r1
    *((u32*)(r4 + 0x2c)) = (*((u16*)(*((u32*)((*((u8*)(r4 + 0x15)) << 3) + 4)) + (*((u8*)(r4 + 0x1a)) << 2))) << 0x10);
    *((u32*)(r4 + 0x34)) = (*((u16*)(*((u8*)(r4 + 0x1a)) + 2)) << 0x10);
    TaskManager_Call(*((u32*)(r6 + 0x10)), ov04_0225463C, r7);
}




void ov04_0225463C(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov01_02205A60, 0);
    // str r0, [r4]
    SysTask_CreateOnMainQueue(ov04_02254724, r4, 0);
    // str r0, [r4]
    Heap_Free((*((u32*)r4) + 1));
}




void ov04_02254698(void) {
    // sub r0, r4, r0
    // str r0, [sp]
    // sub r0, r2, r0
    // str r0, [sp, #8]
    // add r2, sp, #0
    // str r0, [sp, #4]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void ov04_022546C8(void) {
    // str r2, [r1]
}




void ov04_022546E8(void) {
    // add r1, r1, r2
}




void ov04_02254710(void) {
}




void ov04_02254724(void) {
    // str r0, [sp, #0x18]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02254744: ; jump table
    FollowMon_IsActive(*((u32*)(r1 + 4)));
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    FollowMon_GetMapObject(r5);
    // str r0, [sp, #0x28]
    MapObject_SetHeldMovement(r7, 0xd);
    // ldr r0, [sp, #0x28]
    MapObject_SetHeldMovement(0xd);
    MapObject_SetHeldMovement(r7, 0xc);
    // ldr r0, [sp, #0x28]
    MapObject_SetHeldMovement(0xc);
    PlayerAvatar_GetMapObject();
    MapObject_SetHeldMovement(0xd);
    MapObject_SetHeldMovement(0xc);
    // str r0, [r6]
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    FollowMon_IsActive(r5);
    FollowMon_GetMapObject(r5);
    MapObject_AreBitsSetForMovementScriptInit(r7);
    MapObject_AreBitsSetForMovementScriptInit(r5);
    MapObject_SetHeldMovement(r7, 0x49);
    *((u32*)(r4 + 0x50)) = 0;
    // str r0, [r6]
    MapObject_AreBitsSetForMovementScriptInit(r7);
    MapObject_SetHeldMovement(r7, 0x49);
    *((u32*)(r4 + 0x50)) = 0;
    // str r0, [r6]
    *((u32*)(r4 + 0x50)) = (*((u32*)(r4 + 0x50)) + 1);
    // add r0, #0x9c
    ov01_021F3B44(*((u32*)r5), *((u8*)(r4 + 0x17)));
    ov01_021FB9E0(*((u32*)(r5 + 0x34)));
    ov01_021F3B38(r4);
    // str r0, [sp, #0x2c]
    ov01_021F3B3C(r4);
    // ldr r1, [sp, #0x2c]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    ov01_021E8DE8(*((u32*)(r5 + 0x54)), *((u32*)(r5 + 0x58)), 1, 0x76);
    ov01_021E8E70(*((u32*)(r5 + 0x58)), 1, 0);
    PlaySE(SEQ_SE_GS_ITOMARU_ROBO);
    // str r0, [r6]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x24]
    // add r0, r1, r0
    // add r1, r2, r1
    // ldr r0, [sp, #0x24]
    // add r0, r1, r0
    // add r1, r2, r1
    // add r0, r2, r0
    *((u32*)(r4 + 0x28)) = ((*((u8*)(r4 + 0x1a)) + 1) << 2);
    // add r0, sp, #0x38
    ov04_02254698(((*((u8*)(r4 + 0x1a)) + 1) << 2), (*((u8*)(r4 + 0x1a)) << 2), *((u32*)(r4 + 0x28)));
    // add r3, sp, #0x38
    // add r2, #0x38
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #0x30]
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x30]
    // add r1, #0x20
    ov04_022546C8(*((u32*)r3), r4, r4);
    // add r0, #0x38
    VEC_Normalize(r4, r4);
    // add r3, sp, #0x8c
    // ldmia r2!, {r0, r1}
    // mov ip, r3
    // stmia r3!, {r0, r1}
    // mov r1, ip
    // str r0, [r3]
    // add r0, #0x38
    VEC_DotProduct(r4, ov04_02257350);
    // str r0, [sp, #0x34]
    // add r1, #0x38
    // add r2, sp, #0x80
    // str r0, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    VEC_MultAdd((2 << 0xc), r4, r4);
    // ldr r1, [sp, #0x34]
    *((u32*)(r4 + 0x1c)) = 1;
    ov01_021F6304(*((u32*)(r5 + 0x2c)), (1 << 0xc));
    *((u32*)(r4 + 0x1c)) = 0;
    PlayerAvatar_GetPositionVector(*((u32*)(r5 + 0x40)));
    ov01_021F62E8(*((u32*)(r5 + 0x2c)));
    *((u8*)(r4 + 0x16)) = 0;
    ov04_022546E8(*((u32*)(r4 + 0x20)), *((u32*)(r4 + 0x2c)), *((u32*)(r4 + 0x38)), *((u16*)*((u32*)(r4 + 0x28))));
    // str r0, [sp, #0x20]
    ov04_022546E8(*((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x40)), *((u16*)(*((u32*)(r4 + 0x28)) + 2)));
    // ldr r1, [sp, #0x20]
    *((u32*)(r4 + 0x38)) = 0;
    *((u32*)(r4 + 0x40)) = 0;
    // ldr r1, [sp, #0x20]
    *((u32*)(r4 + 0x2c)) = (*((u16*)*((u32*)(r4 + 0x28))) << 0x10);
    *((u32*)(r4 + 0x34)) = (*((u16*)(*((u32*)(r4 + 0x28)) + 2)) << 0x10);
    *((u8*)(r4 + 0x14)) = (*((u8*)(r4 + 0x14)) + 1);
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    FieldSystem_GetSaveData(r5, (*((u16*)(((*((u8*)(r4 + 0x14)) + 1) << 2) + (r7 << 3))) - 1));
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(5);
    // ldr r1, [sp, #0x1c]
    // add r1, r1, r7
    // strb r2, [r0, r1]
    ov01_021E8ED0(*((u32*)(r5 + 0x54)), *((u32*)(r5 + 0x58)), 1);
    StopSE(SEQ_SE_GS_ITOMARU_ROBO, 1);
    // str r0, [r6]
    *((u8*)(r4 + 0x1a)) = ((*((u8*)(r4 + 0x1a)) - 1) + 1);
    *((u8*)(r4 + 0x16)) = 1;
    // add r0, #0x2c
    // add r1, #0x38
    VEC_Add(r4, r4, r4);
    // add r0, #0x9c
    // add r1, r4, r1
    ov01_021F3B44(*((u32*)r5), ((*((u32*)((*((u8*)(r4 + 0x17)) << 2) + 4)) << 0x18) >> 0x18));
    // add r2, sp, #0x74
    // add r3, #0x2c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #0x74]
    // add r0, r1, r0
    // str r0, [sp, #0x74]
    ov01_021F3B1C(r0, r2, r4);
    // add r2, sp, #0x5c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r6, #0x2c
    // str r0, [r2]
    // add r3, sp, #0x68
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    VEC_Add(ov04_02257344, r2, ov04_02257344, ov04_02257344);
    // ldrsb r0, [r4, r0]
    // ldr r1, [sp, #0x70]
    // add r0, r1, r0
    // str r0, [sp, #0x70]
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    // add r1, sp, #0x68
    MapObject_SetPositionVector();
    FollowMon_IsActive(r5);
    // ldrsb r1, [r4, r0]
    // add r3, sp, #0x50
    // sub r0, r0, r1
    // add r4, #0x2c
    // asr r6, r0, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    VEC_Add(r3, r7, r3);
    // ldr r1, [sp, #0x58]
    // add r0, r1, r0
    // str r0, [sp, #0x58]
    FollowMon_GetMapObject(r5);
    // add r1, sp, #0x50
    MapObject_SetPositionVector();
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    MapObject_SetCurrentX(*((u16*)*((u32*)(r4 + 0x28))));
    MapObject_SetCurrentY(r7, 0);
    // ldrsb r2, [r4, r2]
    // add r1, r1, r2
    MapObject_SetCurrentZ(r7, *((u16*)(*((u32*)(r4 + 0x28)) + 2)), 0x1b);
    sub_02060F78(r7);
    MapObject_SetHeldMovement(r7, 0x4a);
    FollowMon_IsActive(r5);
    FollowMon_GetMapObject(r5);
    MapObject_SetCurrentX(*((u16*)*((u32*)(r4 + 0x28))));
    MapObject_SetCurrentY(r7, 0);
    // ldrsb r2, [r4, r1]
    // sub r1, r1, r2
    // add r1, r3, r1
    MapObject_SetCurrentZ(r7, 1, *((u16*)(*((u32*)(r4 + 0x28)) + 2)));
    sub_02060F78(r7);
    *((u32*)(r4 + 0x44)) = 0;
    *((u32*)(r4 + 0x48)) = 0;
    PlayerAvatar_GetFacingDirection(*((u32*)(r5 + 0x40)));
    *((u32*)(r4 + 0x4c)) = 0xFFFFF000;
    // str r0, [r6]
    // add r0, sp, #0x44
    // str r1, [r0]
    *((u32*)((*((u32*)r6) + 1) + 4)) = 0;
    *((u32*)((*((u32*)r6) + 1) + 8)) = 0;
    // str r2, [sp, #0x4c]
    *((u32*)(r4 + 0x48)) = (*((u32*)(r4 + 0x48)) + 1);
    Camera_OffsetLookAtPosAndTarget((*((u32*)r6) + 1), *((u32*)(r5 + 0x24)), (*((u32*)(r4 + 0x48)) + 1), *((u32*)(r4 + 0x48)));
    *((u32*)(r4 + 0x44)) = (*((u32*)(r4 + 0x44)) + 1);
    *((u32*)(r4 + 0x48)) = r1;
    *((u32*)(r4 + 0x4c)) = ((r1 - 1) * *((u32*)(r4 + 0x4c)));
    *((u32*)(r4 + 0x50)) = 0;
    // str r0, [r6]
    *((u32*)(r4 + 0x50)) = (*((u32*)(r4 + 0x50)) + 1);
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)), *((u32*)(r4 + 0x50)), *((u32*)(r4 + 0x4c)));
    FollowMon_IsActive(r5);
    FollowMon_GetMapObject(r5);
    MapObject_SetHeldMovement(r7, 0xd);
    MapObject_SetHeldMovement(r5, 0xd);
    MapObject_SetHeldMovement(r7, 0xc);
    MapObject_SetHeldMovement(r5, 0xc);
    MapObject_SetHeldMovement(r7, 0xd);
    MapObject_SetHeldMovement(r7, 0xc);
    // str r0, [r6]
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    FollowMon_IsActive(r5);
    FollowMon_GetMapObject(r5);
    MapObject_AreBitsSetForMovementScriptInit(r7);
    MapObject_AreBitsSetForMovementScriptInit(r4);
    MapObject_ClearHeldMovement(r4);
    // ldr r0, [sp, #0x18]
    SysTask_Destroy();
    // str r0, [r6]
    MapObject_AreBitsSetForMovementScriptInit(r7);
    // ldr r0, [sp, #0x18]
    SysTask_Destroy();
    // str r0, [r6]
}




void ov04_02254CA4(void) {
}




void ov04_02254CBC(void) {
    // add r0, #0x1c
    // str r1, [r5, r0]
    // str r0, [sp]
    // str r3, [sp, #4]
    // mvn r1, r1
    // add r2, sp, #0x14
    // strb r0, [r2]
    // add r1, sp, #0x14
    // add r1, sp, #8
    // str r0, [sp]
    // add r0, #0x9c
    // add r2, sp, #8
    // str r0, [r4]
    // add r0, #0x9c
}




void ov04_02254D84(void) {
}




void ov04_02254D98(void) {
    FieldSysGetAttrAddr(0x1e);
    ov04_MortyGymTrainerObjectToCandleIdx(*((u32*)r0));
    GF_AssertFail();
    *((u32*)(r5 + 0x10)) = r0;
    *((u32*)(r5 + 0x18)) = *((u32*)r4);
    SysTask_CreateOnMainQueue(ov04_02254E20, r6, 0);
    *((u32*)(r5 + 0x14)) = r0;
}




void ov04_02254DD0(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _02254DDC ; =sub_0200E390
    // ldr r0, [r0, #0x24]
    // ldr r0, [r0, #0x14]
    // bx r3
    // nop
    // _02254DDC: .word SysTask_Destroy
    // TODO: decompile
}




void ov04_02254DE0(void) {
    FieldSysGetAttrAddr(*((u32*)(r0 + 4)));
    ov04_MortyGymTrainerObjectToCandleIdx(*((u32*)r0));
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 0x18)) = *((u32*)r6);
    Heap_AllocAtEnd(0xb, 0x10);
    // str r1, [r2]
    *((u32*)(r0 + 4)) = 1;
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0xc)) = r5;
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov04_02254E50, r0);
}




void ov04_02254E20(void) {
    // add r1, sp, #0
    // add r5, #0x9c
    // add r1, sp, #0
}




void ov04_02254E50(void) {
    TaskManager_GetEnvironment();
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    PlaySE(SEQ_SE_GS_ROUSOKU_KIERU, *((u32*)(r0 + 8)));
    // str r0, [r4]
    // add r1, #0x9c
    ov01_021F3B44(*((u32*)r1), ((*((u32*)(r5 + (*((u32*)(r5 + 0x10)) << 2))) << 0x18) >> 0x18));
    ov01_021F3B2C(1);
    FieldSystem_GetSaveData(*((u32*)(r4 + 0xc)));
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(1);
    // strb r2, [r0, r1]
    ov01_021FA930(*((u32*)(r5 + 0x18)), 0xfa, 1);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = (r1 + 1);
    ov01_021F3B04(r6);
    _s32_div_f((1 << 0xc), *((u32*)(r4 + 4)));
    // str r0, [r5]
    _s32_div_f((1 << 0xc), *((u32*)(r4 + 4)));
    *((u32*)(r5 + 4)) = r0;
    _s32_div_f((1 << 0xc), *((u32*)(r4 + 4)));
    *((u32*)(r5 + 8)) = r0;
    ov01_021FA2D4(*((u32*)(r5 + 0x18)));
    ov04_02254F44(*((u32*)(r4 + 0xc)));
    Heap_Free(r4);
}




void ov04_MortyGymTrainerObjectToCandleIdx(void) {
    MapObject_GetID();
}




void ov04_02254F44(void) {
    // str r0, [sp]
    // add r7, sp, #0
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov04_02254F8C(void) {
    // str r0, [sp, #4]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x38
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #4]
    FieldSystem_GetSaveData(*((u32*)ov04_0225762C), ov04_0225762C);
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(6);
    // str r0, [sp, #0x10]
    Heap_Alloc(4, 0x00000754);
    // ldr r1, [sp, #4]
    *((u32*)(*((u32*)(r1 + 4)) + 0x24)) = r0;
    // ldr r0, [sp, #4]
    MI_CpuFill8(*((u32*)(*((u32*)(r0 + 4)) + 0x24)), 0, 0x00000754);
    // ldr r0, [sp, #4]
    // add r3, sp, #0x14
    // ldr r0, [sp, #4]
    // ldr r4, [sp, #0x10]
    // str r0, [r6]
    // add r0, sp, #0x38
    // str r0, [sp, #0xc]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r3, sp, #0x14
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x2c
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, sp, #0x20
    // str r1, [r0]
    *((u32*)(*((u32*)r3) + 4)) = 0;
    *((u32*)(*((u32*)r3) + 8)) = 0;
    // ldr r0, [sp, #0x10]
    // mov r2, ip
    // add r0, r0, r5
    // str r0, [sp, #8]
    // add r3, sp, #0x20
    // neg r0, r0
    // str r0, [sp, #0x24]
    // add r0, r1, r0
    // str r0, [sp, #0x2c]
    // add r0, r1, r0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, #0x9c
    ov01_021F3C0C(*((u32*)*((u32*)((2 << 0xe) + 0x54))), *((u32*)(*((u16*)(r4 + 6)) << 0x10)), ov04_02257620);
    *((u8*)(r6 + 0xb)) = r0;
    // str r7, [sp]
    // ldr r1, [sp, #8]
    ov04_02255140(((r5 << 0x18) >> 0x18), *((u8*)(r1 + 0xc)), *((u16*)r4), *((u16*)(r4 + 6)));
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // add r6, r6, r0
    // add r7, r7, r0
}




void ov04_0225507C(void) {
}




void ov04_02255090(void) {
}




BOOL ov04_022550D4(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // mov ip, r0
    // ldr r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r1, [r0]
    // add r1, #8
    // add r7, r7, r0
    // mov r0, ip
    // mov ip, r0
    // ldr r0, [sp]
    // ldr r1, [sp, #0x18]
    // str r0, [r1]
}




void ov04_02255140(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #4]
    // str r1, [sp, #0x38]
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #8]
    // ldr r2, [sp, #4]
    // ldr r2, [sp, #8]
    // str r0, [r1]
    // ldr r1, [sp, #4]
    // ldr r4, [sp, #0x38]
    // str r1, [sp, #0x1c]
    // ldr r1, [sp, #8]
    // str r1, [sp, #0x20]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #8]
    // str r3, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // add r1, r2, r0
    // add r4, #8
    // ldr r0, [sp, #4]
    // ldr r3, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // add r0, r1, r4
    // add r3, #8
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r4, #0xa8
    // str r1, [r4]
    // add r4, #0xac
    // str r0, [r4]
    // add r4, #0xa8
    // add r5, r4, r3
    // add r4, #0xa8
    // add r2, #8
    // str r5, [r4]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r4, #0xd0
    // str r1, [r4]
    // add r4, #0xd4
    // str r0, [r4]
    // add r4, #0xd0
    // add r5, r4, r3
    // add r4, #0xd0
    // add r2, #8
    // str r5, [r4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r6, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r4, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // sub r2, r0, r6
    // ldr r0, [sp, #0x10]
    // str r2, [sp, #0x1c]
    // ldr r0, [sp, #0x38]
    // add r5, r0, r1
    // add r0, #0xf8
    // str r2, [r0]
    // add r0, #0xfc
    // str r4, [r0]
    // add r0, #0xfc
    // sub r1, r0, r3
    // add r0, #0xfc
    // add r5, #8
    // str r1, [r0]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // ldr r3, [sp, #0x38]
    // str r2, [r3, r5]
    // str r1, [r3, r5]
    // add r5, r5, r4
    // str r5, [r3, r0]
    // ldr r5, [sp, #0x38]
    // add r3, #8
    // ldr r0, [sp, #0x38]
    // str r1, [r0]
    // ldr r0, [sp, #4]
    // ldr r4, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // add r0, r1, r3
    // add r4, #8
    // ldr r0, [sp, #4]
    // ldr r3, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // add r0, r1, r4
    // add r3, #8
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r4, #0xa8
    // str r1, [r4]
    // add r4, #0xac
    // str r0, [r4]
    // add r4, #0xa8
    // add r5, r4, r3
    // add r4, #0xa8
    // add r2, #8
    // str r5, [r4]
    // ldr r0, [sp, #4]
    // ldr r2, [sp, #0x38]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r4, #0xd0
    // str r1, [r4]
    // add r4, #0xd4
    // str r0, [r4]
    // add r4, #0xd0
    // add r5, r4, r3
    // add r4, #0xd0
    // add r2, #8
    // str r5, [r4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r6, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r4, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // sub r2, r0, r6
    // ldr r0, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // ldr r0, [sp, #0x38]
    // add r5, r0, r1
    // add r0, #0xf8
    // str r2, [r0]
    // add r0, #0xfc
    // str r4, [r0]
    // add r0, #0xfc
    // sub r1, r0, r3
    // add r0, #0xfc
    // add r5, #8
    // str r1, [r0]
    // ldr r0, [sp, #0x18]
    // add r0, #8
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x38]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // ldr r3, [sp, #0x38]
    // str r2, [r3, r5]
    // str r1, [r3, r5]
    // add r5, r5, r4
    // str r5, [r3, r0]
    // ldr r5, [sp, #0x38]
    // add r3, #8
    // ldr r0, [sp, #8]
    // str r7, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // mov ip, r1
    // ldr r3, [sp, #0x38]
    // add r5, r3, r5
    // add r3, r7, r0
    // str r3, [r5, r6]
    // str r2, [r5, r4]
    // add r5, #8
    // mov r0, ip
    // mov ip, r0
    // ldr r1, [sp]
    // ldr r0, [sp, #0x38]
    // ldr r3, [sp, #0x38]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
}




void ov04_02255480(void) {
    // ldr r5, [sp, #8]
    // sub r4, r4, r1
    // sub r3, r3, r2
    // neg r0, r3
    // str r0, [r5]
    // neg r0, r4
    // str r0, [r5]
    // neg r0, r3
    // str r3, [r5]
    // neg r0, r4
    // add r0, r0, r1
    // str r0, [r5]
    // add r0, r0, r2
}




void ov04_022554C4(void) {
    // add r3, r3, r0
    // str r3, [r2]
    // add r2, #8
}




void ov04_022554E0(void) {
    // add r3, r3, r0
    // add r2, #8
}




void ov04_022554FC(void) {
    // str r3, [sp, #4]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // ldr r3, [sp, #4]
    // add r3, #0x10
    // str r3, [sp]
    // ldr r3, [sp, #4]
    // add r3, #0x18
    // str r3, [sp]
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x24]
    // ldr r7, [sp, #4]
    // add r7, #0x28
    // str r7, [sp, #0x28]
    // ldr r3, [sp, #0x28]
    // str r7, [sp]
    // ldr r0, [sp, #0x28]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x48]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #0x48]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // ldr r7, [sp, #4]
    // add r7, #0x68
    // str r7, [sp, #0x2c]
    // ldr r3, [sp, #0x2c]
    // str r7, [sp]
    // ldr r0, [sp, #0x2c]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // ldr r7, [sp, #4]
    // add r7, #0xa8
    // str r7, [sp, #0x30]
    // ldr r3, [sp, #0x30]
    // str r7, [sp]
    // ldr r0, [sp, #0x30]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // ldr r7, [sp, #4]
    // add r7, #0xd0
    // str r7, [sp, #0x34]
    // ldr r3, [sp, #0x34]
    // str r7, [sp]
    // ldr r0, [sp, #0x34]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x44]
    // ldr r7, [sp, #4]
    // add r7, #0xf8
    // str r7, [sp, #0x38]
    // ldr r3, [sp, #0x38]
    // str r7, [sp]
    // ldr r0, [sp, #0x38]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x44]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #4]
    // add r7, r0, r1
    // str r7, [sp, #0x3c]
    // ldr r3, [sp, #0x3c]
    // str r7, [sp]
    // ldr r0, [sp, #0x3c]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #4]
    // add r7, r0, r1
    // str r7, [sp, #0x40]
    // ldr r3, [sp, #0x40]
    // str r7, [sp]
    // ldr r0, [sp, #0x40]
    // add r7, #8
    // add r0, #8
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
}




void ov04_022556AC(void) {
    // add r5, r0, r5
    // strb r4, [r3]
    // strb r4, [r3]
    // strb r4, [r3]
}




void ov04_02255708(void) {
    // add r3, sp, #0
    ov04_022556AC();
    Heap_AllocAtEnd(0xb, 0x74);
    *((u32*)(r0 + 0x70)) = *((u32*)r5);
    // add r2, #0x4c
    // str r1, [r4]
    // add r0, sp, #0
    // strb r3, [r2]
    *((u32*)(r0 + 0x50)) = r6;
    // str r0, [r4]
    PlaySE(SEQ_SE_GS_GONDORA_IDOU, 0, r0, *((u8*)*((u32*)r5)));
    FieldSystem_CreateTask(*((u32*)r5), ov04_02255AC4, r4);
    // str r1, [r4]
    // add r2, #0x4d
    // strb r1, [r2]
    // add r2, r5, r6
    // add r2, #0x4e
    // strb r6, [r2]
    // add r0, r5, r2
    ov04_022558B4(*((u8*)(*((u8*)r0) + 0xa)), 1, (*((u8*)r0) * (0x27 << 4)), (0x27 << 4));
    // add r1, #0x58
    *((u32*)(r4 + 0x54)) = r0;
    ov04_022558D0(r4);
    PlaySE(SEQ_SE_GS_GONDORA_IDOU);
    FieldSystem_CreateTask(*((u32*)r5), ov04_022559C8, r4);
    // str r1, [r4]
    // add r2, #0x4d
    // strb r1, [r2]
    // add r1, r5, r3
    // add r1, #0x4e
    // strb r3, [r1]
    // add r0, r5, r1
    ov04_022558B4(*((u8*)(*((u8*)r0) + 0xa)), 1, (0x27 << 4), *((u8*)(*((u8*)r0) + 8)));
    // add r1, #0x58
    *((u32*)(r4 + 0x54)) = r0;
    ov04_022558D0(r4);
    PlaySE(SEQ_SE_GS_GONDORA_IDOU);
    FieldSystem_CreateTask(*((u32*)r5), ov04_022559C8, r4);
}




void ov04_02255804(void) {
    // add r5, #8
    // add r1, #8
    // add r4, #8
    // add r1, #8
}




void ov04_02255858(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02255870: ; jump table
    // mvn r0, r0
    // mvn r0, r0
}




void ov04_022558B4(void) {
    // add r0, r1, r0
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}




void ov04_022558D0(void) {
    // str r2, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022558E8: ; jump table
    // str r0, [r1]
    *((u32*)(r1 + 8)) = (2 << 0xe);
    // str r0, [r1]
    *((u32*)(r1 + 8)) = 0xFFFF8000;
}




void ov04_02255910(void) {
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // add r4, #8
    // ldr r0, [sp]
}




void ov04_02255960(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // add r5, #8
    // ldr r0, [sp, #4]
}




void ov04_022559C8(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    // add r0, #0x4c
    // add r0, r2, r0
    ov04_02255804(((0x27 << 4) * *((u8*)r0)), r0, (*((u32*)(*((u32*)(r6 + 4)) + 0x24)) + 4));
    SysTask_CreateOnMainQueue(ov04_02255D88, r4, 0);
    // str r0, [r4]
    // add r1, #0x4c
    // add r1, r5, r1
    // add r0, #0x9c
    ov01_021F3B44(*((u32*)r6), *((u8*)(((0x27 << 4) * *((u8*)r4)) + 0xb)), *((u8*)r4));
    // add r0, sp, #8
    ov01_021F3B0C(r0);
    // ldr r1, [sp, #8]
    // asr r0, r1, #0xf
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #4]
    // asr r0, r1, #0xf
    // add r0, r1, r0
    // add r1, #0x4c
    // asr r7, r0, #0x10
    // add r5, r0, r1
    FieldSystem_GetSaveData(r6, ((0x27 << 4) * *((u8*)r4)), *((u8*)r4));
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(6);
    // ldr r1, [sp, #4]
    // add r1, #0x4c
    // strh r2, [r0, r1]
    // add r1, #0x4c
    // add r0, r0, r1
    *((u16*)(r0 + 6)) = ((r7 << 0x10) >> 0x10);
    // str r5, [sp]
    // add r0, #0x4c
    ov04_02255140(*((u8*)r4), *((u8*)(r5 + 6)), ((r1 << 0x10) >> 0x10), ((r7 << 0x10) >> 0x10));
    // str r0, [r4]
    StopSE(SEQ_SE_GS_GONDORA_IDOU, 0);
    Heap_Free(r4);
}




void ov04_02255AC4(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    // sub r0, #8
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02255AEE: ; jump table
    // add r0, #0x4c
    // add r1, r2, r1
    // add r0, #0x4f
    // strb r3, [r0]
    // add r2, sp, #0
    ov04_02255CBC(r5, (*((u8*)r0) * (0x27 << 4)), (*((u32*)(*((u32*)(r5 + 4)) + 0x24)) + 4), 0);
    // str r0, [r4]
    // add r1, #0x4c
    // add r1, r6, r1
    // add r5, #0x9c
    ov01_021F3B44(*((u32*)r5), *((u8*)(((0x27 << 4) * *((u8*)r4)) + 0xb)), *((u8*)r4));
    ov01_021F3B08();
    // add r1, sp, #0
    *((u32*)(r4 + 0x68)) = *((u16*)r1);
    *((u32*)(r4 + 0x6c)) = *((u32*)(r0 + 4));
    *((u32*)(r4 + 0x64)) = 0;
    // str r0, [r4]
    PlaySE(SEQ_SE_GS_GONDORA_KABEHIT, *((u16*)r1));
    // str r0, [r4]
    // add r1, #0x4c
    // add r1, r6, r1
    // add r0, #0x9c
    ov01_021F3B44(*((u32*)r5), *((u8*)(((0x27 << 4) * *((u8*)r4)) + 0xb)), *((u8*)r4));
    ov01_021F3B08();
    // sub r1, r2, r1
    *((u32*)(r0 + 4)) = (1 << 0xa);
    // add r0, #0x4f
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, #0x4f
    // add r0, #0x4c
    // add r7, r2, r0
    // add r0, #0x4f
    // strb r1, [r0]
    FieldSystem_GetSaveData(r5, 0, (r6 + 4));
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(6);
    // mov ip, r0
    // add r0, #0x4c
    // add r3, #0xc
    // sub r6, r6, r1
    // ror r6, r0
    // add r0, r1, r6
    // strb r0, [r3, r2]
    // add r0, #0x4c
    // mov r0, ip
    // add r0, r0, r1
    *((u8*)(r7 + 6)) = *((u8*)(r4 + 0xc));
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)), *((u8*)r4), *((u8*)r4), r0);
    MapObject_GetXCoord();
    MapObject_GetZCoord(r6);
    ov04_022554FC(1, ((r5 << 0x10) >> 0x10), ((r0 << 0x10) >> 0x10), r7);
    // str r0, [r4]
    // add r1, #0x4c
    // add r1, r6, r1
    // add r5, #0x9c
    ov01_021F3B44(*((u32*)r5), *((u8*)(((0x27 << 4) * *((u8*)r4)) + 0xb)), *((u8*)r4));
    ov01_021F3B08();
    // sub r2, r2, r1
    *((u32*)(r0 + 4)) = *((u32*)(r0 + 4));
    // add r1, r2, r1
    *((u32*)(r4 + 0x64)) = (1 << 0xa);
    // sub r1, r1, r2
    *((u32*)(r0 + 4)) = *((u32*)(r4 + 0x6c));
    // str r0, [r4]
    // add r1, #0x4c
    // add r1, r6, r1
    // add r5, #0x9c
    ov01_021F3B44(*((u32*)r5), *((u8*)(((0x27 << 4) * *((u8*)r4)) + 0xb)), *((u8*)r4));
    ov01_021F3B08();
    // add r2, r2, r1
    *((u32*)(r0 + 4)) = *((u32*)(r0 + 4));
    // sub r1, r2, r1
    *((u32*)(r4 + 0x64)) = (1 << 0xa);
    *((u32*)(r0 + 4)) = *((u32*)(r4 + 0x6c));
    // str r0, [r4]
    StopSE(SEQ_SE_GS_GONDORA_IDOU, 0, *((u32*)(r4 + 0x64)));
    Heap_Free(r4);
}




void ov04_02255CBC(void) {
    // add r2, #0xa8
    // add r2, #0xd0
    // add r2, #0x68
    // add r2, #0x28
    // strh r0, [r6]
}




void ov04_02255D34(void) {
    // add r2, #0xf8
    // str r0, [sp]
    ov04_02255960(r0, 0x18, r1, ov04_02257648);
    // ldr r1, [sp]
    // add r2, r5, r2
    ov04_02255960(r7, (0x6e << 2), r4);
}




void ov04_02255D88(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02255DA8: ; jump table
    // add r0, #0x4f
    // strb r1, [r0]
    // add r1, #0x4c
    // add r1, r5, r1
    ov04_02255910(*((u32*)(r1 + 0x70)), *((u8*)(((0x27 << 4) * *((u8*)r1)) + 9)), (r1 + 4));
    // str r0, [r4]
    // str r0, [r4]
    // add r1, #0x4c
    // add r1, r5, r1
    // add r0, #0x9c
    ov01_021F3B44(*((u32*)r6), *((u8*)(((0x27 << 4) * *((u8*)r4)) + 0xb)), *((u8*)r4));
    // str r0, [sp]
    // ldr r1, [sp]
    // add r0, sp, #0x34
    ov01_021F3B0C();
    // add r0, sp, #0x34
    // add r1, #0x58
    VEC_Add(r4, r0);
    // ldr r0, [sp]
    // add r1, sp, #0x34
    ov01_021F3B1C();
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    // add r1, sp, #0x28
    MapObject_CopyPositionVector();
    // add r0, sp, #0x28
    // add r1, #0x58
    VEC_Add(r4, r0);
    // add r1, sp, #0x28
    MapObject_SetPositionVector(r6);
    // add r0, #0x4f
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, #0x4f
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, #0x4c
    // add r0, r5, r0
    ov04_02255858(*((u8*)(((0x27 << 4) * *((u8*)r4)) + 9)), r4);
    // add r0, #0x4d
    // add r0, #0x4d
    // strb r1, [r0]
    // add r0, #0x4d
    // add r0, #0x4e
    // add r1, sp, #0x1c
    MapObject_CopyPositionVector(r6, *((u8*)r4));
    // ldr r2, [sp, #0x1c]
    // asr r1, r2, #0xf
    // add r1, r2, r1
    // asr r1, r1, #0x10
    MapObject_SetCurrentX(r6, (r1 >> 0x10));
    // ldr r2, [sp, #0x24]
    // asr r1, r2, #0xf
    // add r1, r2, r1
    // asr r1, r1, #0x10
    MapObject_SetCurrentZ(r6, (r1 >> 0x10));
    sub_02060F78(r6);
    SysTask_Destroy(r7);
    // str r0, [r4]
    // str r0, [r4]
    PlaySE(SEQ_SE_GS_GONDORA_KABEHIT);
    // str r0, [r4]
    // add r1, #0x4d
    SysTask_Destroy(5, *((u8*)r4));
    // str r0, [r4]
    // mvn r0, r0
    *((u32*)(r4 + 0x58)) = (*((u32*)(r4 + 0x58)) * 0);
    *((u32*)(r4 + 0x60)) = (0 * *((u32*)(r4 + 0x60)));
    // str r0, [r4]
    // add r1, #0x4c
    // add r1, r5, r1
    // add r0, #0x9c
    ov01_021F3B44(*((u32*)r6), *((u8*)(((0x27 << 4) * *((u8*)r4)) + 0xb)), *((u8*)r4));
    // add r0, sp, #0x10
    ov01_021F3B0C(r0);
    // add r0, sp, #0x10
    // add r1, #0x58
    VEC_Add(r4, r0);
    // add r1, sp, #0x10
    ov01_021F3B1C(r5);
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    // add r1, sp, #4
    MapObject_CopyPositionVector();
    // add r0, sp, #4
    // add r1, #0x58
    VEC_Add(r4, r0);
    // add r1, sp, #4
    MapObject_SetPositionVector(r5);
    // add r0, #0x4f
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, #0x4f
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, #0x4d
    // add r0, #0x4d
    // strb r1, [r0]
    // add r0, #0x4d
    SysTask_Destroy(r7, (*((u8*)r4) - 1));
    // str r0, [r4]
}




void ov04_02255FC0(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(2);
    Heap_Alloc(4, 4);
    *((u32*)(*((u32*)(r5 + 4)) + 0x24)) = r0;
    MI_CpuFill8(*((u32*)(*((u32*)(r5 + 4)) + 0x24)), 0, 4);
    // str r5, [r0]
    ov04_02256278(r5);
    ov01_021E8B04(0xae, 0x00000000, *((u32*)(r5 + 0x54)));
    ov01_021E8B60(1);
    ov01_021E8B78(r6);
    ov01_021E8B04(0xaf, 0, *((u32*)(r5 + 0x54)));
    ov01_021E8B60(1);
    ov01_021E8B78(r4);
}




void ov04_02256044(void) {
}




int ov04_02256058(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_GetType();
    Save_Gymmick_AssertMagic_GetData(r4, 2);
    ov04_0225609C(*((u32*)(*((u32*)(r5 + 4)) + 0x24)), *((u32*)(*((u32*)(r5 + 4)) + 0x24)));
}



void ov04_0225609C(void) {
    FieldSystem_GetSaveData(*((u32*)r0));
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(2);
    Heap_AllocAtEnd(0xb, 0xc);
    // str r0, [r2]
    // str r0, [r4]
    TaskManager_Call(*((u32*)(*((u32*)r5) + 0x10)), ov04_022560D4, r0);
}




void ov04_022560D4(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    PlayerAvatar_GetMapObject(*((u32*)(r6 + 0x40)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02256102: ; jump table
    // add r0, sp, #0xc
    Camera_GetAngle((*((u16*)(*((u32*)r4) + 6)) << 0x10), *((u32*)(r6 + 0x24)));
    // add r0, sp, #4
    *((u16*)(r0 + 0x18)) = *((u16*)(r0 + 8));
    *((u16*)(r0 + 0x1a)) = *((u16*)(r0 + 0xa));
    *((u16*)(r0 + 0x1c)) = *((u16*)(r0 + 0xc));
    *((u16*)(r0 + 0x1e)) = *((u16*)(r0 + 0xe));
    // add r0, sp, #0x44
    // strh r1, [r0]
    Camera_GetPerspectiveAngle(*((u32*)(r6 + 0x24)), *((u16*)(r0 + 0x18)));
    // add r1, sp, #0x44
    *((u16*)(r1 + 2)) = r0;
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x48
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    Camera_GetDistance(*((u32*)(r6 + 0x24)), ov04_02257660);
    // str r0, [sp, #0x54]
    CreateCameraTranslationWrapper(4, *((u32*)(r6 + 0x24)));
    *((u32*)(r4 + 8)) = r0;
    // add r1, sp, #0x44
    SetCameraTranslationPath(0x18);
    // str r0, [r4]
    IsCameraTranslationFinished(*((u32*)(r4 + 8)));
    DeleteCameraTranslationWrapper(*((u32*)(r4 + 8)));
    // str r0, [r4]
    ov04_02256278(r6);
    // str r0, [sp]
    ov01_021E8B04(0xae, 0, *((u32*)(r6 + 0x54)));
    ov01_021E8B84(1);
    ov01_021E8B6C(r7);
    // ldr r0, [sp]
    ov01_021E8B04(0xaf, 0, *((u32*)(r6 + 0x54)));
    ov01_021E8B84(1);
    ov01_021E8B6C(r5);
    // str r0, [r4]
    ov01_021E8B04(0xaf, 0, *((u32*)(r6 + 0x54)));
    ov01_021E8B90();
    // str r0, [r4]
    // add r1, sp, #0x24
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // add r0, sp, #4
    Camera_GetAngle(0, *((u32*)(r6 + 0x24)));
    // add r0, sp, #4
    *((u16*)(r0 + 0x10)) = *((u16*)r0);
    *((u16*)(r0 + 0x12)) = *((u16*)(r0 + 2));
    *((u16*)(r0 + 0x14)) = *((u16*)(r0 + 4));
    *((u16*)(r0 + 0x16)) = *((u16*)(r0 + 6));
    *((u16*)(r0 + 0x2c)) = *((u16*)(r0 + 0x10));
    Camera_GetPerspectiveAngle(*((u32*)(r6 + 0x24)), *((u16*)(r0 + 0x10)));
    // add r1, sp, #4
    // add r3, sp, #0x24
    *((u16*)(r1 + 0x2e)) = r0;
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x34
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    Camera_GetDistance(*((u32*)(r6 + 0x24)));
    // str r0, [sp, #0x40]
    CreateCameraTranslationWrapper(4, *((u32*)(r6 + 0x24)));
    *((u32*)(r4 + 8)) = r0;
    // add r1, sp, #0x30
    SetCameraTranslationPath(0x18);
    // str r0, [r4]
    IsCameraTranslationFinished(*((u32*)(r4 + 8)));
    DeleteCameraTranslationWrapper(*((u32*)(r4 + 8)));
    // str r0, [r4]
    Heap_Free(r4);
}




void ov04_02256278(void) {
    // add r0, #0xc0
    // add r0, #0xc0
    // add r0, #0xc0
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r3, [sp, #4]
    // str r0, [sp]
}




void ov04_02256304(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(3);
    // str r0, [sp]
    Heap_Alloc(4, 4);
    *((u32*)(*((u32*)(r5 + 4)) + 0x24)) = r0;
    MI_CpuFill8(*((u32*)(*((u32*)(r5 + 4)) + 0x24)), 0, 4);
    // str r5, [r0]
    // ldr r0, [sp]
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r5), 0xc7);
    ov01_021E8BAC(*((u32*)(r5 + 0x54)), 0xc7);
    ov01_021E8A8C(*((u32*)(r5 + 0x54)), r7, 0xc7, 0x00000000);
    // ldr r0, [sp]
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r5), 0xc8);
    ov01_021E8BAC(*((u32*)(r5 + 0x54)), 0xc8);
    ov01_021E8A8C(*((u32*)(r5 + 0x54)), r7, 0xc8, 0x00000000);
}




void ov04_022563B0(void) {
}




BOOL ov04_022563C4(void) {
    // ldrb r0, [r0]
}




void ov04_0225640C(void) {
    // str r2, [sp]
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(3);
    Heap_AllocAtEnd(0xb, 0x18);
    *((u32*)(r0 + 0x10)) = 0xc7;
    // ldr r0, [sp]
    *((u8*)(r0 + 0x16)) = 2;
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov04_022564A0, r0);
    *((u8*)(r6 + 2)) = 0;
    *((u8*)(r4 + 0x16)) = 1;
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov04_022564A0, r4);
    *((u8*)(r6 + 2)) = 1;
    *((u32*)(r4 + 0x10)) = 0xc8;
    // ldr r0, [sp]
    GF_AssertFail(0xc8);
    Heap_Free(r4);
    *((u8*)(r4 + 0x16)) = 1;
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov04_022564A0, r4);
    *((u8*)(r6 + 3)) = 1;
    GF_AssertFail(1);
}




void ov04_022564A0(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r5);
    TaskManager_GetStatePtr(r5);
    // str r0, [sp, #0xc]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022564D0: ; jump table
    MapObjectManager_GetFirstActiveObjectByID(*((u32*)(r6 + 0x3c)), 3);
    *((u32*)(r4 + 4)) = r0;
    MapObjectManager_GetFirstActiveObjectByID(*((u32*)(r6 + 0x3c)), 4);
    *((u32*)(r4 + 8)) = r0;
    MapObjectManager_GetFirstActiveObjectByID(*((u32*)(r6 + 0x3c)), 5);
    MapObjectManager_GetFirstActiveObjectByID(0);
    *((u32*)(r4 + 4)) = r0;
    MapObjectManager_GetFirstActiveObjectByID(*((u32*)(r6 + 0x3c)), 1);
    *((u32*)(r4 + 8)) = r0;
    MapObjectManager_GetFirstActiveObjectByID(*((u32*)(r6 + 0x3c)), 2);
    *((u32*)(r4 + 0xc)) = r0;
    *((u16*)(r4 + 0x14)) = 0;
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    MapObject_SetHeldMovement(*((u32*)(r4 + 4)), 0x16);
    MapObject_SetHeldMovement(*((u32*)(r4 + 8)), 0x16);
    MapObject_SetHeldMovement(*((u32*)(r4 + 0xc)), 0x17);
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    MapObject_SetHeldMovement(*((u32*)(r4 + 4)), 0x17);
    MapObject_SetHeldMovement(*((u32*)(r4 + 8)), 0x17);
    MapObject_SetHeldMovement(*((u32*)(r4 + 0xc)), 0x16);
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    // add r0, r4, r0
    MapObject_AreBitsSetForMovementScriptInit(*((u32*)((0 << 2) + 4)), 3);
    *((u16*)(r4 + 0x14)) = (*((u16*)(r4 + 0x14)) + 1);
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r6), *((u32*)(r4 + 0x10)));
    // str r0, [sp, #8]
    ov01_021E8BAC(*((u32*)(r6 + 0x54)), *((u32*)(r4 + 0x10)));
    // ldr r1, [sp, #8]
    ov01_021E8A8C(*((u32*)(r6 + 0x54)), *((u32*)(r4 + 0x10)), 0x00000000);
    PlaySE(SEQ_SE_DP_UG_020);
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r6), *((u32*)(r4 + 0x10)));
    // str r0, [sp, #4]
    ov01_021E8BAC(*((u32*)(r6 + 0x54)), *((u32*)(r4 + 0x10)));
    // ldr r3, [sp, #4]
    // str r0, [sp]
    ov01_021E8970(*((u32*)(r4 + 0x10)), 0x00000000, 0);
    PlaySE(SEQ_SE_DP_UG_020);
    // ldr r0, [sp, #0xc]
    // str r1, [r0]
    Heap_Free(r4, 6);
}




void ov04_02256650(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(7);
    Heap_Alloc(4, 0x00001DD8);
    *((u32*)(*((u32*)(r4 + 4)) + 0x24)) = r0;
    MI_CpuFill8(*((u32*)(*((u32*)(r4 + 4)) + 0x24)), 0, 0x00001DD8);
    ov04_02256758(*((u32*)(*((u32*)(r4 + 4)) + 0x24)), 4);
    // strh r1, [r4, r0]
    // add r4, #0xc
}




void ov04_022566A0(void) {
    // str r0, [sp]
    ov04_0225686C(*((u32*)(*((u32*)(r0 + 4)) + 0x24)));
    // add r1, r5, r0
    SysTask_Destroy(*((u32*)(r1 + 0x00001DBC)));
    Heap_Free(r5);
    // ldr r0, [sp]
    *((u32*)(*((u32*)(r0 + 4)) + 0x24)) = 0;
}




void ov04_022566EC(void) {
    ov04_022568F0(r1, r2);
    // bpl _0225670A
    // mov r0, #SEQ_SE_DP_WALL_HIT>>8
    PlaySE((r0 << 8));
    // add r0, r5, r0
    ov04_02256920(0x00001DB4, r4);
    ov04_02256950(r5, r6, ((r4 << 0x18) >> 0x18));
    PlaySE(SEQ_SE_GS_TOUMEINAKABEHIT);
}




void ov04_02256734(void) {
    // add r4, #0x54
}




void ov04_02256758(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r0, r0, r4
    // add r0, #0xd4
    // str r1, [r0]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // add r1, #0x10
    // str r0, [sp, #0x10]
    // add r0, r1, r0
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0xc]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // add r0, #0xd8
    // add r0, r0, r4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x24]
    // add r0, #0x10
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r2
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // str r1, [r0, r2]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x14]
    // ldr r2, [sp, #0x24]
    // ldr r1, [sp, #0x10]
    // add r0, r4, r0
    // add r1, r2, r1
    // add r3, r6, r3
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // ldr r1, [sp, #0x10]
    // add r0, #0x54
    // add r1, r2, r1
    // ldr r0, [sp, #0x20]
    // add r7, #0x54
    // add r1, r4, r6
    // add r0, r4, r6
    // add r0, sp, #0x28
    // str r1, [r0]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x2c]
    // ldr r3, [sp, #0x30]
    // add r0, #0x54
    // ldr r0, [sp, #0x20]
    // add r0, #0x54
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
}




void ov04_0225686C(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x10
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0xd8
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // add r0, r0, r2
    // add r0, r4, r0
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov04_022568F0(void) {
    // asr r3, r2, #0x10
    // add r4, #0x14
    // mvn r0, r0
}




void ov04_02256920(void) {
    // add r6, r0, r5
    // ldrsh r5, [r6, r3]
}




void ov04_02256950(void) {
    // add r2, #0xd0
    // str r1, [sp]
    // add r1, r6, r1
    // add r5, r1, r2
    GF_AssertFail(*((u16*)(0x00001DB4 + (0xc * *((u32*)r0)))), (0xc * *((u32*)r0)), *((u32*)r0));
    ov04_02256AC4(r7);
    // strh r0, [r5]
    // add r0, #0xd4
    *((u16*)(r5 + 2)) = r7;
    // add r0, r0, r1
    ov04_02256A90(r6, ((0x9a << 2) * ((*((u16*)(ov04_02257674 + (r7 * 0x14))) << 0x18) >> 0x18)), ((*((u16*)(ov04_02257674 + (r7 * 0x14))) << 0x18) >> 0x18));
    *((u32*)(r5 + 4)) = r0;
    SysTask_CreateOnMainQueue(ov04_02256734, r5, 0);
    *((u32*)(r5 + 8)) = r0;
    // add r0, #0x54
    Field3dObject_SetActiveFlag(*((u32*)(r5 + 4)), 1);
    // add r1, sp, #4
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // ldr r0, [sp]
    PlayerAvatar_GetMapObject(*((u32*)(0 + 0x40)));
    // add r1, sp, #4
    MapObject_CopyPositionVector();
    // ldrsb r2, [r2, r4]
    // add r1, #8
    // ldrsb r0, [r0, r4]
    // add r0, r1, r0
    // str r1, [sp, #4]
    // add r0, #8
    // add r0, r0, r2
    // str r3, [sp, #0xc]
    // ldr r2, [sp, #8]
    // add r0, #0x54
    Field3dObject_SetPosEx(*((u32*)(r5 + 4)), ((ov04_02257676 << 4) << 0xc), (ov04_02257677 << 4), ((*((u32*)(ov04_02257670 + r4)) << 4) << 0xc));
    // add r0, r1, r0
    Field3dModelAnimation_FrameSet((0 * 0x14), 0);
    // add r0, #0xd0
    _s32_div_f((*((u32*)r6) + 1), 3);
    // add r6, #0xd0
    // str r1, [r6]
}




void ov04_02256A54(void) {
    // add r0, r7, r0
}




void ov04_02256A90(void) {
    // add r0, r5, r0
    // str r0, [r4, r6]
    // str r1, [r5]
    // add r0, r4, r6
}




void ov04_02256AC4(void) {
    // str r0, [sp, #4]
    // add r0, r2, r0
    // str r0, [sp]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // ldrsb r1, [r0, r1]
    // ldrsb r6, [r0, r1]
    // add r0, r4, r1
    // ldrsh r0, [r0, r3]
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    ov04_02256B3C(0x00001DB4, (0 * 0xc), 0, 0x00001DB6);
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}




void ov04_02256B3C(void) {
    // add r0, #0x54
    // str r1, [r0]
    // strh r1, [r4]
}




void ov04_02256B64(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(8);
    Heap_Alloc(4, 0x00000708);
    *((u32*)(*((u32*)(r4 + 4)) + 0x24)) = r0;
    MI_CpuFill8(*((u32*)(*((u32*)(r4 + 4)) + 0x24)), 0, 0x00000708);
    ov04_02256C20(*((u32*)(*((u32*)(r4 + 4)) + 0x24)), 4);
}




void ov04_02256BA0(void) {
    // str r0, [sp]
    // sub r6, #0x50
    // add r1, r5, r0
    // ldr r0, [sp]
}




void ov04_02256BE4(void) {
    // add r0, #0x54
    // add r0, r0, r6
}




void ov04_02256C20(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    HeapExp_FndInitAllocator(0x20);
    // ldr r4, [sp, #8]
    // add r4, #0x10
    // ldr r3, [sp, #0xc]
    // add r0, r4, r0
    Field3dModel_LoadFromFilesystem((0 << 4), 0x00000101, (0 + 4));
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    *((u32*)(0 + 0x50)) = 0;
    // ldr r0, [sp, #0x14]
    // add r2, #0x54
    // add r7, r2, r1
    // str r4, [r2, r1]
    *((u32*)(r7 + 4)) = 0;
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r6, #0x1c
    // str r0, [sp, #0x1c]
    // add r0, #0x10
    // str r1, [sp, #0x18]
    // add r7, #8
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r1, r2, r1
    // str r0, [sp, #4]
    // add r0, r7, r5
    Field3dModelAnimation_LoadFromFilesystem(0x8c, (0x8c * 0), 0x00000101, 0);
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #0x10]
    // add r0, r6, r5
    // add r1, r2, r1
    Field3dObject_InitFromModel();
    // add r0, r6, r5
    // add r1, r7, r5
    Field3dObject_AddAnimation();
    // add r0, r7, r5
    Field3dModelAnimation_FrameSet(0);
    // add r0, sp, #0x20
    // str r1, [r0]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    // add r0, r6, r0
    Field3dObject_SetPosEx(0);
    // add r0, r6, r5
    Field3dObject_SetActiveFlag(0);
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
}




void ov04_02256D00(void) {
    // add r5, #0x10
    // add r0, r5, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x54
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r4, r0, r2
    // add r4, #8
    // add r0, r4, r0
    // ldr r0, [sp]
    // str r0, [sp]
}




void ov04_02256D68(void) {
    // sub r2, #0x40
    // str r5, [r4]
    // add r0, r2, r2
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02256D86: ; jump table
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    *((u32*)(r4 + 4)) = r5;
    SysTask_CreateOnMainQueue(ov04_02256DFC, r4, 0);
    // str r0, [r4, r1]
    // add r5, #0x1c
    // add r0, r5, r6
    Field3dObject_SetActiveFlag(0x8c, 1);
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    PlayerAvatar_GetMapObject(*((u32*)(r7 + 0x40)));
    // add r1, sp, #0
    MapObject_CopyPositionVector();
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    // add r0, r5, r6
    Field3dObject_SetPosEx();
    // add r4, #8
    // add r0, r4, r6
    Field3dModelAnimation_FrameSet(0);
}




void ov04_02256DFC(void) {
    // add r0, #8
    // add r0, r0, r4
    // add r0, #0x1c
    // add r0, r0, r4
    // str r0, [r5]
    // str r1, [r5, r0]
    // add r5, #0x1c
    // add r0, r5, r4
}




void ov04_02256E48(void) {
}




void ov04_02256E60(void) {
    FieldSystem_GetSaveData();
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(9);
    Heap_Alloc(4, (0x8e << 2));
    *((u32*)(*((u32*)(r5 + 4)) + 0x24)) = r0;
    MI_CpuFill8(*((u32*)(*((u32*)(r5 + 4)) + 0x24)), 0, (0x8e << 2));
    // str r5, [r4]
    ov04_02256F50(*((u32*)(*((u32*)(r5 + 4)) + 0x24)));
    SysTask_CreateOnMainQueue(ov04_02257148, r4, 1);
    // str r0, [r4, r1]
}




void ov04_02256EB0(void) {
    // ldr r0, [r4, r0]
}




void ov04_02256ED8(void) {
    // add r4, #0x4c
    // add r0, r4, r0
}




void ov04_02256F00(void) {
    GF_AssertFail(*((u32*)(r0 + 4)));
    // add r0, #0x4c
    Field3dObject_GetActiveFlag(r4);
    GF_AssertFail();
    FieldSystem_GetSaveData(r5);
    Save_GetGymmickPtr();
    Save_Gymmick_AssertMagic_GetData(9);
    // str r6, [r0]
    // str r1, [r4, r0]
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov04_02257308, r4);
}




void ov04_02256F50(void) {
    // str r0, [sp, #8]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x54
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x48
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #8]
    HeapExp_FndInitAllocator((*((u32*)ov04_02257B1C) + 4), 4, 0x20, ov04_02257B1C);
    // ldr r4, [sp, #8]
    // add r4, #0x14
    // add r6, sp, #0x48
    // add r0, r4, r0
    Field3dModel_LoadFromFilesystem((0 * 0xb4), 0xae, *((u32*)(r6 + (0 << 2))), 4);
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x14]
    // add r0, #0x14
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x18]
    // add r0, #0x24
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r0, sp, #0x54
    // add r6, r0, r1
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r4, r0, r7
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // add r1, r1, r7
    Field3dModelAnimation_LoadFromFilesystem((0x14 * 0), ((0 + 4) << 3), 0xae, *((u32*)(r6 + (0 << 2))));
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r4, [sp, #8]
    // ldr r6, [sp, #8]
    // add r4, #0x4c
    // add r6, #0x14
    // add r0, r4, r1
    // add r1, r6, r1
    Field3dObject_InitFromModel((((((r5 + 1) << 0x18) + 1) << 0x18) >> 0x18), (0 * 0xb4));
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r7, [sp, #8]
    // str r0, [sp, #0x20]
    // add r0, #0x24
    // str r0, [sp, #0x20]
    // add r7, #0x4c
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // add r4, r0, r6
    // add r0, r7, r6
    // add r1, r4, r1
    Field3dObject_AddAnimation(0xb4, (0x14 * 0));
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r6, [sp, #8]
    // ldr r7, [sp, #8]
    // add r6, #0x4c
    // add r7, #0x24
    // add r0, r6, r4
    Field3dObject_SetActiveFlag(0xb4, 1);
    // add r0, r7, r4
    ov04_022572E0(2, 0);
    // add r3, sp, #0x24
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #8]
    // add r4, sp, #0x24
    // add r0, #0x4c
    // str r0, [sp, #8]
    // add r3, r4, r1
    // ldr r0, [sp, #8]
    // add r0, r0, r2
    Field3dObject_SetPosEx(*((u32*)ov04_02257B40), *((u32*)(ov04_02257B40 + (0 * 0xc))), *((u32*)(r3 + 4)), *((u32*)(r3 + 8)));
}




void ov04_022570EC(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #0xc]
    // add r0, #0x14
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, #0x24
    // str r0, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // add r5, r1, r0
    // add r0, r5, r0
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp]
    // add r0, r1, r0
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
}




void ov04_02257148(void) {
    // add r1, sp, #4
    // strb r0, [r1]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225717A: ; jump table
    // add r0, sp, #4
    // strb r1, [r0]
    // add r0, sp, #4
    // add r0, sp, #4
    // add r4, #0x14
    // add r6, sp, #4
    // add r0, r4, r0
    // str r0, [sp]
    // add r4, #0x4c
    // add r0, r4, r0
    // ldr r0, [sp]
    // str r1, [r7, r0]
    // add r6, sp, #8
    // add r7, #0x14
    // add r0, r7, r0
    // add r0, #0x10
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // str r0, [r6, r4]
    // str r1, [r6, r4]
    // ldr r4, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r5, [sp, #0x10]
    // ldr r0, [sp, #8]
}




void ov04_02257240(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // str r2, [sp, #8]
    // add r0, #0xb0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r4, [sp]
    // add r4, #0x10
    // add r0, r4, r7
    // add r1, r0, r1
    // ldr r0, [sp, #0xc]
    // add r0, r4, r7
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r1, #0xb0
    // str r0, [r1]
    // ldr r0, [sp]
    // add r0, #0xb0
    // add r0, r4, r7
    // ldr r0, [sp, #4]
}




void ov04_022572E0(void) {
    // add r0, r6, r0
}




void ov04_02257308(void) {
    // ldr r0, [r0, r1]
}



