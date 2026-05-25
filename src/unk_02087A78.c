/* Decompiled from asm/unk_02087A78.s */
#include "global.h"

void sub_02087A78(void) {
}




void sub_02087A84(void) {
}




void sub_02087A8C(void) {
    Heap_Create(3, 0x7e, (1 << 0x10));
    OverlayManager_CreateAndGetData(r5, 0x2c, 0x7e);
    MI_CpuFill8(0, 0x2c);
    OverlayManager_GetArgs(r5);
    *((u32*)(r4 + 0x28)) = r0;
    *((u32*)(r4 + 0xc)) = *((u32*)(r0 + 0xc));
    Heap_Alloc(0x7e, 0x00004170);
    *((u32*)(r4 + 0x14)) = r0;
    MI_CpuFill8(0, 0x00004170);
    // add r2, #0x18
    // str r2, [r1, r0]
    // sub r0, #0x38
    // str r2, [r1, r0]
    // str r6, [r0]
    sub_02087FF8(*((u32*)(r4 + 0x14)), *((u32*)*((u32*)(r4 + 0x14))), *((u32*)(r4 + 0xc)));
    // add r2, r4, r1
    // str r0, [r2, r1]
}




void sub_02087B10(void) {
}




void sub_02087B1C(void) {
}




void sub_02087B28(void) {
}




void sub_02087B34(void) {
}




void sub_02087B40(void) {
}




void sub_02087B4C(void) {
}




void sub_02087B58(void) {
}




u32 sub_02087B64(void) {
    // str r0, [r5]
    // str r0, [r4]
    // str r0, [r5]
    // str r0, [r4]
}




u32 sub_02087BAC(void) {
}




void sub_02087BE8(void) {
    OverlayManager_New(_021028B4, r0, r1);
    OverlayManager_New(_021028C4, r4);
    *((u32*)(r4 + 8)) = r0;
    // str r0, [r4]
    OverlayManager_Run(*((u32*)(r4 + 8)));
    OverlayManager_Delete(*((u32*)(r4 + 8)));
}




void sub_02087C38(void) {
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOVY38();
    // str r0, [r5]
    BattleSetup_New(r4, 0);
    *((u32*)(r5 + 0x10)) = r0;
    sub_0202FC48();
    // add r2, sp, #4
    // str r0, [sp]
    sub_0202FC90(*((u32*)(r5 + 0xc)), r4, *((u32*)(r5 + 0x10)));
    sub_020304F0(*((u32*)(r5 + 0x10)), *((u32*)(r5 + 0xc)));
    // str r0, [sp, #4]
    BagCursor_New(r4);
    // str r0, [r2, r1]
    Save_GameStats_Get(*((u32*)(r5 + 0xc)), (0x43 << 2), *((u32*)(r5 + 0x10)));
    // str r0, [r2, r1]
    HandleLoadOverlay(FS_OVERLAY_ID, 2, *((u32*)(r5 + 0x10)));
    sub_0202FC5C();
    ov40_02244920(*((u32*)(r5 + 0x10)), r4);
    UnloadOverlayByID(r6);
    // str r2, [r1, r0]
    // ldr r0, [sp, #4]
    Heap_Free(*((u32*)(*((u32*)(r5 + 0x10)) + (0x43 << 2))), *((u32*)(r5 + 0x10)), 1);
    BattleSetup_Delete(*((u32*)(r5 + 0x10)));
    // str r0, [r5]
    // str r0, [r5]
    GF_SndHandleSetPlayerVolume(1, 0x7f);
    GF_SndHandleSetPlayerVolume(7, 0x7f);
    sub_02005B68(1);
    // add r0, #0x5d
    sub_02087E34(*((u8*)*((u32*)(r5 + 0x10))));
    Sound_SetSceneAndPlayBGM(5, 0x0000047B, 1);
    Sound_SetSceneAndPlayBGM(5, 0x0000045D, 1);
    OverlayManager_New(gOverlayTemplate_Battle, *((u32*)(r5 + 0x10)), r4);
    *((u32*)(r5 + 8)) = r0;
    // str r0, [r5]
    OverlayManager_Run(*((u32*)(r5 + 8)));
    // str r2, [r1, r0]
    // strb r1, [r0]
    Heap_Free(*((u32*)(*((u32*)(r5 + 0x10)) + (0x43 << 2))), *((u32*)(r5 + 0x10)), *((u32*)(r5 + 0x14)));
    BattleSetup_Delete(*((u32*)(r5 + 0x10)));
    OverlayManager_Delete(*((u32*)(r5 + 8)));
    sub_02005B68(0);
    Sound_SetScene(0);
    FieldBGM_GetEffective(*((u32*)(r5 + 0x28)), *((u32*)*((u32*)(*((u32*)(r5 + 0x28)) + 0x20))));
    FieldBGM_GetForMapHeader(*((u32*)(r5 + 0x28)), *((u32*)*((u32*)(*((u32*)(r5 + 0x28)) + 0x20))));
    Sound_SetFieldBGM();
    sub_02055198(0, r4);
    // str r0, [r5]
    LoadOVY38(*((u32*)*((u32*)(r5 + 0x14))));
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
}




void sub_02087E10(void) {
    // lsl r1, r0, #2
    // ldr r0, _02087E18 ; =_02110594
    // ldr r0, [r0, r1]
    // bx lr
    // _02087E18: .word _02110594
    // TODO: decompile
}




u32 sub_02087E1C(void) {
    // ldr r0, [r0, r1]
}




u32 sub_02087E34(void) {
    // ldmia r5!, {r0, r1}
    // add r4, sp, #0
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}



