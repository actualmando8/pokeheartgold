/* Decompiled from asm/overlay_01_021EDAFC.s */
#include "global.h"

void ov01_021EDAFC(void) {
    // ldr r1, [sp, #0x2c]
    NewMsgDataFromNarc(1, 0x1b, 0xbf, 4);
    // add r1, #0x8c
    // str r0, [r1]
    // add r0, #0x97
    // add r0, #0x8c
    // str r1, [r0]
    // add r0, #0x97
    // add r0, #0x97
    // strb r1, [r0]
    // ldr r1, [sp, #0x24]
    // add r0, #0x90
    // str r1, [r0]
    // str r4, [r6]
    // ldr r1, [sp, #0x20]
    // add r0, #0xa0
    // str r1, [r0]
    // add r1, #0xa4
    // str r0, [r1]
    // add r1, #0xa8
    // str r0, [r1]
    // add r1, #0x97
    // add r4, sp, #8
    // and r1, r2
    // add r1, #0x97
    // strb r2, [r1]
    // add r1, #0x96
    // strb r2, [r1]
    // add r1, #0x97
    // add r3, #0x97
    // strb r1, [r3]
    // add r1, #0x97
    // add r3, #0x97
    // strb r1, [r3]
    // add r1, #0x98
    // strb r5, [r1]
    // add r1, #0x99
    // strb r7, [r1]
    // add r1, #0x9b
    // strb r0, [r1]
    // ldr r1, [sp, #0x28]
    *((u32*)(r6 + 0x18)) = r6;
    // add r1, #0x94
    // strb r3, [r1]
    // strh r2, [r6, r1]
    // add r1, #0xbc
    // str r3, [r1]
    // add r1, #0xc0
    // add r2, #8
    // str r3, [r1]
    // str r5, [r1, r4]
    // str r5, [r1, r4]
    // strh r0, [r2, r7]
    // add r1, #8
    String_New(0x50, 4, (r6 + 2), (0 + 1));
    *((u32*)(r4 + 0x1c)) = r0;
    // add r6, #0xa0
    // strh r1, [r0]
}




void ov01_021EDC28(void) {
    // str r2, [sp, #0x18]
    // str r5, [sp]
    // add r0, sp, #0x20
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x18]
}




void ov01_021EDC7C(void) {
}




void ov01_021EDC84(void) {
    ov01_021EDDD8();
    // tst r1, r0
    // add r1, #0x97
    // add r1, #0x98
    // sub r2, r1, r0
    // add r1, #0x98
    // strb r2, [r1]
    // add r1, #0x97
    // add r1, #0x99
    // add r1, #0x9b
    // sub r2, r2, r1
    // add r1, #0x99
    // strb r2, [r1]
    // add r1, #0x99
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x9b
    // add r3, #0x98
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #8
    AddWindowParameterized(*((u32*)(*((u32*)r4) + 8)), r4, 3, *((u8*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(*((u32*)r4) + 8)), 3, 0x000003D9, 0xb);
    // add r0, #8
    DrawFrameAndWindow1(r4, 1, 0x000003D9, 0xb);
    ov01_021EDE18(r4);
    // add r1, #0x96
    // add r0, #0xac
    Create2dMenu(r4, *((u8*)r4), 4);
    // add r1, #0xb8
    // str r0, [r1]
    SysTask_CreateOnMainQueue(ov01_021EDE8C, r4, 0);
    *((u32*)(r4 + 4)) = r0;
}




void ov01_021EDD68(void) {
    // add r0, #0x8c
    // add r1, #0x9b
    // add r0, #0x90
    // add r1, r5, r1
    // add r0, #0x9b
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, #0xbc
    // str r1, [r0]
    // add r0, #0x9b
    // add r0, r5, r0
    // add r0, #0xc0
    // str r6, [r0]
    // add r0, #0x9b
    // add r5, #0x9b
    // strb r0, [r5]
}




void ov01_021EDDD8(void) {
    // add r0, #0x9b
    // add r0, #0xbc
    // add r0, #0x9b
    // add r5, #8
    // add r6, #0xc
}




void ov01_021EDE18(void) {
    // add r2, #0xbc
    // add r1, #0xac
    // str r2, [r1]
    // add r2, #8
    // add r1, #0xb0
    // str r2, [r1]
    // add r1, #0xb4
    // strb r2, [r1]
    // add r1, #0xb5
    // strb r2, [r1]
    // add r1, #0x9b
    // add r1, #0xb6
    // strb r2, [r1]
    // add r2, #0xb7
    // add r2, #0xb7
    // strb r3, [r2]
    // add r2, #0xb7
    // add r1, #0xb7
    // add r2, #0xb7
    // strb r3, [r2]
    // add r0, #0x9b
    // strb r0, [r1]
    // strb r2, [r1]
}




void ov01_021EDE8C(void) {
    // add r0, #0x94
    // add r0, #0x94
    // add r4, #0x94
    // strb r0, [r4]
    IsPaletteFadeFinished((*((u8*)r1) - 1));
    // add r0, #0xb8
    Handle2dMenuInput(*((u32*)r4));
    // mvn r1, r1
    // add r0, #0x97
    // add r0, #0xa0
    // strh r1, [r0]
    ov01_021EDF38(r4, 0x0000FFFE);
    // add r1, #0xa0
    // strh r0, [r1]
    ov01_021EDF38(r4, *((u32*)r4));
}




void ov01_021EDF00(void) {
    // add r0, #0x97
    // add r0, #0x8c
}




void ov01_021EDF38(void) {
    PlaySE(SEQ_SE_DP_SELECT);
    // add r0, #0xb8
    Delete2dMenu(*((u32*)r4), 0);
    // add r0, #0xb0
    sub_0200E5D4(*((u32*)r4), 0);
    // add r0, #0xb0
    RemoveWindow(*((u32*)r4));
    SysTask_Destroy(*((u32*)(r4 + 4)));
    ov01_021EDF00(r4);
}




void ov01_021EDF78(void) {
}




void MoveTutorMenu_SetListItem(void) {
}




void ov01_021EDFA4(void) {
    // tst r1, r0
    // add r0, #0x97
    // add r0, #0x98
    // sub r2, r0, r1
    // add r0, #0x98
    // strb r2, [r0]
    // add r0, #0x97
    // add r0, #0x9b
    // add r0, #0x99
    // add r0, #0x99
    // sub r2, #0x10
    // strb r2, [r0]
    // add r0, #0x99
    // sub r2, r2, r0
    // add r0, #0x99
    // strb r2, [r0]
}




void ov01_021EE014(void) {
}




void ov01_021EE01C(void) {
    // add r0, #0x9b
    // add r0, #0x99
    // add r3, #0x98
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #8
    AddWindowParameterized(*((u32*)(*((u32*)r0) + 8)), r0, 3, *((u8*)r0));
    // add r0, #0x99
    // add r3, #0x98
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #8
    AddWindowParameterized(*((u32*)(*((u32*)r4) + 8)), r4, 3, *((u8*)r4));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(*((u32*)r4) + 8)), 3, 0x000003D9, 0xb);
    // add r0, #8
    DrawFrameAndWindow1(r4, 1, 0x000003D9, 0xb);
    ov01_021EE324(r4);
    // add r2, #0x96
    // add r0, r4, r0
    ListMenuInit((0x67 << 2), 0, *((u8*)r4), 4);
    // str r0, [r4, r1]
    ov01_021EE634(r4, (0x6f << 2));
    SysTask_CreateOnMainQueue(ov01_021EE49C, r4, 0);
    *((u32*)(r4 + 4)) = r0;
}




void ov01_021EE0EC(void) {
    ov01_021EE2E4();
    // tst r1, r0
    // add r0, #0x97
    // add r0, #0x98
    // sub r2, r0, r1
    // add r0, #0x98
    // strb r2, [r0]
    // add r0, #0x97
    // add r0, #0x9b
    // add r0, #0x99
    // add r0, #0x99
    // sub r2, #0x10
    // strb r2, [r0]
    // add r0, #0x99
    // sub r2, r2, r0
    // add r0, #0x99
    // strb r2, [r0]
    // add r0, #0x9b
    // add r0, #0x99
    // add r3, #0x98
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #8
    AddWindowParameterized(*((u32*)(*((u32*)r5) + 8)), r5, 3, *((u8*)r5));
    // add r2, #0x99
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r3, #0x98
    // add r1, #8
    AddWindowParameterized(*((u32*)(*((u32*)r5) + 8)), r5, 3, *((u8*)r5));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(*((u32*)r5) + 8)), 3, 0x000003D9, 0xb);
    // add r0, #8
    DrawFrameAndWindow1(r5, 1, 0x000003D9, 0xb);
    ov01_021EE324(r5);
    // add r0, #0xa4
    // str r4, [r0]
    // add r0, #0xa8
    // str r6, [r0]
    // add r0, #0xa4
    // add r0, #0xa8
    // add r1, r1, r0
    // strh r1, [r5, r0]
    // add r0, r5, r0
    ListMenuInit((0x67 << 2), *((u16*)r4), *((u16*)r6), 4);
    // str r0, [r5, r1]
    ov01_021EE634(r5, (0x6f << 2));
    SysTask_CreateOnMainQueue(ov01_021EE49C, r5, 0);
    *((u32*)(r5 + 4)) = r0;
}




void MoveTutorMenu_SetListItem_Internal(void) {
    // str r1, [sp]
    // add r0, #0x8c
    // ldr r1, [sp]
    // add r1, #0x9b
    // add r0, #0x90
    // add r1, r5, r1
    // add r0, #0x9b
    // add r0, r5, r0
    // add r2, r5, r1
    // str r0, [r2, r1]
    // add r0, #0x9b
    // mvn r2, r2
    // add r1, r5, r0
    // str r2, [r1, r0]
    // add r0, #0x9b
    // add r1, r5, r0
    // str r4, [r1, r0]
    // add r0, #0x9b
    // add r1, r5, r0
    // strh r7, [r1, r0]
    // add r0, #0x9b
    // add r5, #0x9b
    // strb r0, [r5]
}




void ov01_021EE2E4(void) {
    // add r0, #0x9b
    // add r0, #0x9b
    // add r5, #8
    // add r6, #0xc
}




void ov01_021EE324(void) {
    // add r2, r0, r3
    // sub r1, #0x28
    // str r2, [r0, r1]
    // sub r1, #0x24
    // str r2, [r0, r1]
    // sub r1, #0x20
    // str r2, [r0, r1]
    // add r2, #8
    // sub r1, #0x1c
    // str r2, [r0, r1]
    // add r1, #0x9b
    // sub r1, #0x18
    // strh r2, [r0, r1]
    // sub r1, #0x16
    // strh r2, [r0, r1]
    // sub r1, #0x14
    // strb r2, [r0, r1]
    // sub r1, #0x13
    // strb r4, [r0, r1]
    // sub r1, #0x12
    // strb r4, [r0, r1]
    // sub r1, #0x11
    // sub r2, #0x11
    // strb r4, [r0, r2]
    // sub r2, #0x11
    // sub r4, #0x11
    // strb r5, [r0, r4]
    // sub r4, #0x10
    // sub r1, #0x10
    // strb r4, [r0, r1]
    // sub r1, #0x10
    // sub r1, #0x10
    // strb r2, [r0, r1]
    // sub r1, #0xe
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r1, #0xe
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r1, #0xe
    // and r2, r1
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r1, #0xe
    // and r2, r1
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r1, #0xe
    // and r2, r1
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r3, #0xc
    // str r0, [r0, r3]
}




void ov01_021EE434(void) {
    // mvn r2, r2
}




void ov01_021EE458(void) {
    // add r1, sp, #0
    // strh r2, [r1]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r0, #0xa4
    // add r0, #0xa8
    // add r0, sp, #0
    // add r4, #0xa8
    // strh r1, [r2]
    // strh r1, [r0]
}




void ov01_021EE49C(void) {
    // add r0, #0x94
    // add r0, #0x94
    // add r5, #0x94
    // strb r0, [r5]
    IsPaletteFadeFinished((*((u8*)r1) - 1));
    ListMenu_ProcessInput(*((u32*)(r5 + (0x6f << 2))));
    // add r1, r5, r1
    ListMenuGetCurrentItemArrayId(*((u32*)(r5 + (0x6f << 2))), (0xb7 << 2));
    PlaySE(SEQ_SE_DP_SELECT);
    // tst r1, r0
    // tst r1, r0
    // tst r1, r0
    // tst r0, r1
    ov01_021EE634(r5, 0x10);
    // mvn r0, r0
    // add r0, #0x97
    PlaySE(SEQ_SE_DP_SELECT);
    // add r0, #0xa0
    // strh r1, [r0]
    ov01_021EE568(r5, 0x0000FFFE);
    PlaySE(SEQ_SE_DP_SELECT);
    // add r0, #0xa0
    // strh r4, [r0]
    ov01_021EE568(r5);
}




void ov01_021EE568(void) {
    PlaySE(SEQ_SE_DP_SELECT);
    DestroyListMenu(*((u32*)(r6 + (0x6f << 2))), 0, 0);
    sub_0200E5D4(*((u32*)(r6 + (0x6a << 2))), 0);
    // add r0, #8
    RemoveWindow(r6);
    String_Delete(*((u32*)(r6 + 0x1c)));
    // add r0, #0x97
    // add r0, #0x8c
    DestroyMsgData(*((u32*)r6));
    SysTask_Destroy(*((u32*)(r6 + 4)));
    Heap_Free(r6);
}




void ov01_021EE5D0(void) {
    // str r1, [sp, #0xc]
    // add r0, #0x8c
    // ldr r1, [sp, #0xc]
    // add r0, #0x90
    // str r3, [sp]
    // str r7, [sp, #4]
    // str r3, [sp, #8]
}




void ov01_021EE634(void) {
    // add r1, r4, r1
    ListMenuGetCurrentItemArrayId(*((u32*)(r0 + (0x6f << 2))), ((0x6f << 2) + 6));
    // add r0, #0xe2
    // add r1, r4, r1
    ov01_021EE5D0(r4, *((u16*)((*((u16*)(r4 + 0x000001C2)) << 1) + 0x000001C2)), 0);
}




void PrintCurFloorInNewWindow(void) {
    // str r4, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x28]
    // str r3, [sp, #8]
    // str r4, [sp, #0xc]
    // str r4, [sp, #0x10]
    ov01_021EDC28(0);
    GetFontAttribute(r4, r4);
    // tst r0, r1
    // add r0, #0x99
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r3, #0x98
    // add r1, #8
    AddWindowParameterized(*((u32*)(*((u32*)r5) + 8)), r5, 3, *((u8*)r5));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(*((u32*)r5) + 8)), 3, 0x000003D9, 0xb);
    // add r0, #8
    DrawFrameAndWindow1(r5, 1, 0x000003D9, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #8
    FillWindowPixelRect(r5, 0xf, 0, 0);
    ov01_021EE754(r5, 0x10, 0, 0);
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    ov01_021EE934(*((u32*)*((u32*)(r6 + 0x20))), *((u16*)(r1 + 0x14)));
    // add r2, sp, #0x14
    ov01_021EE754(r5, ((r0 << 0x10) >> 0x10), *((u8*)r2), 0x10);
    // add r0, #8
    // add r1, #0xb0
    // str r0, [r1]
    CopyWindowToVram(r5, r5);
    SysTask_CreateOnMainQueue(ov01_021EE7B8, r5, 0);
    *((u32*)(r5 + 4)) = r0;
}




void ov01_021EE754(void) {
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r0, #0x8c
    // ldr r1, [sp, #0xc]
    // add r0, #0x90
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r5, #8
    // ldr r3, [sp, #0x10]
}




void ov01_021EE7B8(void) {
    // add r0, #0xa0
    // add r0, #0xb0
    sub_0200E5D4(*((u32*)r1), 0);
    // add r0, #0xb0
    RemoveWindow(*((u32*)r6));
    String_Delete(*((u32*)(r6 + 0x1c)));
    // add r0, #0x97
    // add r0, #0x8c
    DestroyMsgData(*((u32*)r6));
    SysTask_Destroy(*((u32*)(r6 + 4)));
    Heap_Free(r6);
}




void MapNumToFloorNo(void) {
    // sub r1, #MAP_GOLDENROD_RADIO_TOWER_5F
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EE848: ; jump table
    // sub r1, r1, #MAP_CELADON_DEPARTMENT_STORE_2F-MAP_CELADON_DEPARTMENT_STORE_1F
    // add r1, r1, #MAP_CELADON_DEPARTMENT_STORE_3F-MAP_CELADON_DEPARTMENT_STORE_2F
    // add r2, r1, #MAP_CELADON_CONDOMINIUMS_2F-MAP_CELADON_DEPARTMENT_STORE_4F
    // add r2, r1, #MAP_CELADON_DEPARTMENT_STORE_ROOF-MAP_CELADON_DEPARTMENT_STORE_4F
    // add r1, r1, #MAP_CELADON_DEPARTMENT_STORE_5F-MAP_CELADON_DEPARTMENT_STORE_4F
    // add r1, r1, #MAP_CELADON_CONDOMINIUMS_1F-MAP_CELADON_DEPARTMENT_STORE_4F
    // add r2, #MAP_SAFFRON_SILPH_CO_HQ-MAP_CELADON_DEPARTMENT_STORE_4F
    // add r2, #MAP_SAFFRON_SILPH_CO_HQ-MAP_CELADON_DEPARTMENT_STORE_4F
    // add r2, r1, #MAP_CELADON_CONDOMINIUMS_ROOF-MAP_CELADON_DEPARTMENT_STORE_4F
    // add r2, r1, #MAP_CELADON_CONDOMINIUMS_3F-MAP_CELADON_DEPARTMENT_STORE_4F
    // add r1, r1, #MAP_CELADON_CONDOMINIUMS_ROOF-MAP_CELADON_DEPARTMENT_STORE_4F
    // add r1, #MAP_SAFFRON_SILPH_CO_ROTOM_ROOM-MAP_CELADON_DEPARTMENT_STORE_4F
    GF_AssertFail(3, MAP_CELADON_DEPARTMENT_STORE_2F, MAP_CELADON_DEPARTMENT_STORE_2F);
}




void ov01_021EE934(void) {
    // strb r0, [r2]
    // strb r0, [r2]
    // strb r0, [r2]
}




void ov01_021EE974(void) {
    ov01_021EDDD8();
    // tst r1, r0
    // add r0, #0x9b
    // str r0, [sp, #0x14]
    _s32_div_f(*((u8*)r5), r6);
    // ldr r0, [sp, #0x14]
    _s32_div_f((r0 << 0x18), r6);
    // add r0, #0x99
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r3, #0x98
    // add r1, #8
    AddWindowParameterized(*((u32*)(*((u32*)r5) + 8)), r5, 3, *((u8*)r5));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(*((u32*)r5) + 8)), 3, 0x000003D9, 0xb);
    // add r0, #8
    DrawFrameAndWindow1(r5, 1, 0x000003D9, 0xb);
    ov01_021EEA44(r5, r6, r4);
    // add r1, #0x96
    // add r0, #0xac
    Create2dMenu(r5, *((u8*)r5), 4);
    // add r1, #0xb8
    // str r0, [r1]
    SysTask_CreateOnMainQueue(ov01_021EDE8C, r5, 0);
    *((u32*)(r5 + 4)) = r0;
}




void ov01_021EEA44(void) {
    // add r4, #0xbc
    // add r3, #0xac
    // str r4, [r3]
    // add r4, #8
    // add r3, #0xb0
    // str r4, [r3]
    // add r3, #0xb4
    // strb r4, [r3]
    // add r3, #0xb5
    // strb r1, [r3]
    // add r1, #0xb6
    // strb r2, [r1]
    // add r1, #0xb7
    // add r1, #0xb7
    // strb r2, [r1]
    // add r1, #0xb7
    // add r0, #0xb7
    // strb r2, [r0]
}




void FieldSystem_ShowMoneyBox(void) {
    AllocWindows(4, 1);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 8)), r0, 3, r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r5 + 8)), 3, 0x000003D9, 0xb);
    DrawFrameAndWindow1(r4, 1, 0x000003D9, 0xb);
    FillWindowPixelBuffer(r4, 0xf);
    NewMsgDataFromNarc(0, 0x1b, 0x000001B3, 4);
    NewString_ReadMsgData(0x1e);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(r4, 0, r0, 0);
    DestroyMsgData(r7);
    String_Delete(r6);
    MoneyBoxSys_Update(r5, r4);
}




void MoneyBoxSys_Delete(void) {
}




void MoneyBoxSys_Update(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    FillWindowPixelRect(r1, 0xf, 0, 0x10);
    NewMsgDataFromNarc(0, 0x1b, 0x000001B3, 4);
    // str r0, [sp, #0xc]
    MessageFormat_New(4);
    String_New(0x10, 4);
    // ldr r0, [sp, #0xc]
    NewString_ReadMsgData(0x1f);
    // str r0, [sp, #0x10]
    Save_PlayerData_GetProfile(*((u32*)(r7 + 0xc)));
    PlayerProfile_GetMoney();
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r0, 6);
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(r6, r4);
    FontID_String_GetWidth(0, r4, 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(r5, 0, r4);
    // ldr r0, [sp, #0x10]
    String_Delete();
    String_Delete(r4);
    MessageFormat_Delete(r6);
    // ldr r0, [sp, #0xc]
    DestroyMsgData();
    ScheduleWindowCopyToVram(r5);
}




void ov01_021EEC00(void) {
    // str r2, [sp, #0x14]
    AllocWindows(4, 1);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    AddWindowParameterized(*((u32*)(r5 + 8)), r0, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r5 + 8)), 3, 0x000003D9, 0xb);
    DrawFrameAndWindow1(r4, 1, 0x000003D9, 0xb);
    ov01_021EEC7C(r5, r4, r7);
}




void ov01_021EEC68(void) {
}




void ov01_021EEC7C(void) {
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // sub r3, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
}




Window * ov01_021EED60(void) {
    AllocWindows(4, 1);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r5 + 8)), r0, 3, r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r5 + 8)), 3, 0x000003D9, 0xb);
    DrawFrameAndWindow1(r4, 1, 0x000003D9, 0xb);
    FillWindowPixelBuffer(r4, 0xf);
    NewMsgDataFromNarc(0, 0x1b, 0xbf, 4);
    NewString_ReadMsgData(0x0000014A);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(r4, 0, r0, 0);
    String_Delete(r6);
    NewString_ReadMsgData(r7, 0x0000014B);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(r4, 0, r0, 0);
    String_Delete(r6);
    DestroyMsgData(r7);
    ov01_021EEE44(r5, r4);
}




void ov01_021EEE30(void) {
}




void ov01_021EEE44(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // sub r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // sub r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
}




void ov01_021EEF58(void) {
    // add r0, r0, r1
}




void ov01_021EEF60(void) {
    // add r0, #0x9b
}




void ov01_021EEF68(void) {
}




void ov01_021EEF88(void) {
}




void ov01_021EEF9C(void) {
    // add r4, r5, r0
    // str r0, [sp, #0xc]
    // add r0, #0x8c
    // add r0, #0x90
    // ldr r1, [sp, #0xc]
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp, #0xc]
}




void ov01_021EF00C(void) {
    // add r0, #0x97
}




void ov01_021EF018(void) {
    // add r2, #0x97
    // add r0, #0x97
    // strb r1, [r0]
}




void ov01_021EF034(void) {
    // add r2, #0x97
    // add r0, #0x97
    // strb r1, [r0]
}



