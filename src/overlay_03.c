/* Decompiled from asm/overlay_03.s */
#include "global.h"

void ov03_02253E20(void) {
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    // add r0, #0x94
    RemoveTextPrinter(*((u8*)*((u32*)ov03_022598A0)));
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), r5, *((u32*)(*((u32*)ov03_022598A0) + 0x10)));
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x58)), *((u32*)(*((u32*)ov03_022598A0) + 0x14)), *((u32*)(*((u32*)ov03_022598A0) + 0x10)));
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), r5, *((u32*)(*((u32*)ov03_022598A0) + 0x14)));
    // add r0, #0x40
    WindowIsInUse(*((u32*)ov03_022598A0));
    // add r1, #0x40
    sub_0205B514(*((u32*)(*((u32*)(*((u32*)ov03_022598A0) + 0x68)) + 8)), *((u32*)ov03_022598A0), 3);
    Save_PlayerData_GetOptionsAddr(*((u32*)(*((u32*)(*((u32*)ov03_022598A0) + 0x68)) + 0xc)));
    // add r0, #0x40
    sub_0205B564(*((u32*)ov03_022598A0), r0);
    Save_PlayerData_GetOptionsAddr(*((u32*)(*((u32*)(*((u32*)ov03_022598A0) + 0x68)) + 0xc)));
    // add r0, #0x40
    sub_0205B5B4(r4, *((u32*)(r4 + 0x14)), r0, 1);
    // add r1, #0x94
    // strb r0, [r1]
}




void ov03_02253ED0(void) {
    // add r0, #0x20
    WindowIsInUse(*((u32*)ov03_022598A0));
    // add r3, sp, #0x60
    // add r0, sp, #0x64
    // str r0, [sp]
    // add r0, sp, #0x68
    // str r0, [sp, #4]
    // add r0, sp, #0x6c
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x40
    // str r0, [sp, #0x10]
    // add r1, #0x20
    AddWindowParameterized(*((u32*)(*((u32*)(*((u32*)ov03_022598A0) + 0x68)) + 8)), *((u32*)ov03_022598A0), 3, *((u8*)r3));
    // add r0, #0x20
    DrawFrameAndWindow1(*((u32*)ov03_022598A0), 1, 0x000003D9, 0xb);
    // add r4, sp, #0x40
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, #0x20
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x14]
    ListMenuInit(r3, 0, 0, 4);
    *((u32*)(*((u32*)ov03_022598A0) + 0x5c)) = r0;
    // add r0, #0x20
    CopyWindowToVram(*((u32*)ov03_022598A0), ov03_022598A0, *((u32*)ov03_022598A0));
}




void ov03_02253F74(void) {
    GF_AssertFail(*((u32*)ov03_022598A0));
    Heap_Alloc(4, 0xac);
    // str r0, [r1]
    MI_CpuFill8(0, 0xac);
    // add r1, #0x88
    // str r2, [r1]
    *((u32*)(*((u32*)ov03_022598A0) + 0x68)) = r4;
    // add r0, #0x97
    // strb r2, [r0]
    NewMsgDataFromNarc(1, 0x1b, 0xb6, 4);
    *((u32*)(*((u32*)ov03_022598A0) + 0x74)) = r0;
    FieldSystem_GetSaveData(*((u32*)(*((u32*)ov03_022598A0) + 0x68)), ov03_022598A0, *((u32*)ov03_022598A0));
    Save_PlayerData_GetProfile();
    *((u32*)(*((u32*)ov03_022598A0) + 0x78)) = r0;
    PlayerProfile_New(4, *((u32*)ov03_022598A0));
    *((u32*)(*((u32*)ov03_022598A0) + 0x7c)) = r0;
    // add r0, #0x20
    InitWindow(*((u32*)ov03_022598A0), ov03_022598A0, *((u32*)ov03_022598A0));
    // add r0, #0x30
    InitWindow(*((u32*)ov03_022598A0));
    // add r0, #0x40
    InitWindow(*((u32*)ov03_022598A0));
    MessageFormat_New(4);
    *((u32*)(*((u32*)ov03_022598A0) + 0x50)) = r0;
    MessageFormat_New(4, *((u32*)ov03_022598A0));
    *((u32*)(*((u32*)ov03_022598A0) + 0x54)) = r0;
    MessageFormat_New(4, *((u32*)ov03_022598A0));
    *((u32*)(*((u32*)ov03_022598A0) + 0x58)) = r0;
    // add r0, #0x98
    // strb r2, [r0]
    // add r0, r0, r2
    // add r0, #0x80
    // strb r5, [r0]
    String_New(0x8c, 4, (0 + 1));
    // str r0, [r1, r4]
}




void ov03_02254054(void) {
    String_Delete(*((u32*)(*((u32*)ov03_022598A0) + 0)));
    Heap_Free(*((u32*)(*((u32*)ov03_022598A0) + 0x7c)));
    MessageFormat_Delete(*((u32*)(*((u32*)ov03_022598A0) + 0x50)));
    *((u32*)(*((u32*)ov03_022598A0) + 0x50)) = 0;
    MessageFormat_Delete(*((u32*)(*((u32*)ov03_022598A0) + 0x54)), 0);
    *((u32*)(*((u32*)ov03_022598A0) + 0x54)) = 0;
    MessageFormat_Delete(*((u32*)(*((u32*)ov03_022598A0) + 0x58)), 0);
    *((u32*)(*((u32*)ov03_022598A0) + 0x58)) = 0;
    DestroyMsgData(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0);
    // add r0, #0x40
    RemoveWindow(*((u32*)ov03_022598A0), *((u32*)(*((u32*)ov03_022598A0) + 0x4c)));
    Heap_Free(*((u32*)ov03_022598A0));
    // str r1, [r0]
}




void ov03_022540E8(void) {
}




void ov03_02254100(void) {
}




void ov03_02254120(void) {
}




void ov03_02254150(void) {
    sub_0203511C();
    // add r0, sp, #0xc
    // strh r2, [r0]
    // add r1, sp, #0xc
    ListMenuGetScrollAndRow(*((u32*)(*((u32*)ov03_022598A0) + 0x5c)), 0);
    // add r0, sp, #0xc
    // add r1, r1, r5
    // strh r1, [r0]
    // add r0, #0x20
    GetWindowWidth(*((u32*)ov03_022598A0), *((u16*)r0));
    // sub r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x20
    FillWindowPixelRect(*((u32*)ov03_022598A0), 0xf, 8, ((r5 << 0x10) >> 0x10));
    // add r0, sp, #0xc
    sub_020351DC(*((u16*)r0), *((u32*)(*((u32*)ov03_022598A0) + 0x7c)), *((u16*)r0));
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0xc
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 0, (*((u16*)r2) + 1), 2);
    BufferPlayersName(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 1, *((u32*)(*((u32*)ov03_022598A0) + 0x7c)));
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x4c, *((u32*)(*((u32*)ov03_022598A0) + 4)));
    // ldmia r2!, {r1, r2}
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), *((u32*)ov03_022598A0));
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x20
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)*((u32*)ov03_022598A0)), 8);
    PlayerProfile_GetTrainerID(*((u32*)(*((u32*)ov03_022598A0) + 0x7c)));
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 2, ((r0 << 0x10) >> 0x10), 5);
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x4e, *((u32*)(*((u32*)ov03_022598A0) + 0xc)));
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), *((u32*)(*((u32*)ov03_022598A0) + 8)), *((u32*)(*((u32*)ov03_022598A0) + 0xc)));
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x20
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)(*((u32*)ov03_022598A0) + 8)), 0x58);
    // str r3, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 0, (r2 + 1), 2);
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x4d, *((u32*)(*((u32*)ov03_022598A0) + 4)));
    // ldmia r2!, {r1, r2}
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), *((u32*)ov03_022598A0));
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x20
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)*((u32*)ov03_022598A0)), 8);
}




void ov03_022542C8(void) {
    // add r0, #0x30
    WindowIsInUse(*((u32*)ov03_022598A0));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x30
    AddWindowParameterized(*((u32*)(*((u32*)(*((u32*)ov03_022598A0) + 0x68)) + 8)), *((u32*)ov03_022598A0), 3, 0x17);
    // add r0, #0x30
    DrawFrameAndWindow1(*((u32*)ov03_022598A0), 1, 0x000003D9, 0xb);
    // add r0, #0x30
    FillWindowPixelBuffer(*((u32*)ov03_022598A0), 0xf);
    // add r0, #0x30
    CopyWindowToVram(*((u32*)ov03_022598A0));
    // add r0, #0x97
    // strb r1, [r0]
    SysTask_CreateOnMainQueue(ov03_02254D64, r4, 0);
    ov03_022543AC(*((u32*)ov03_022598A0));
    // add r2, sp, #0x14
    // strh r0, [r2]
    // add r0, #0x91
    // add r1, #0x92
    // add r0, #0x7a
    ov03_02253E20(*((u8*)*((u32*)ov03_022598A0)), 0, (r2 + 2), (ov03_0225927A + 2));
    // add r1, #0x92
    // add r0, #0x94
    ov03_02253E20(*((u8*)r1), 0);
    // add r0, sp, #0x14
    ov03_02253E20(*((u16*)(r0 + (r0 << 1))), 0);
    ov03_02254B4C(ov03_02254420);
}




void ov03_022543AC(void) {
    BufferPlayersName(*((u32*)(*((u32*)ov03_022598A0) + 0x54)), 0, *((u32*)(*((u32*)ov03_022598A0) + 0x78)));
    PlayerProfile_GetTrainerID(*((u32*)(*((u32*)ov03_022598A0) + 0x78)));
    // str r0, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x54)), 1, ((r0 << 0x10) >> 0x10), 5);
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x4b, *((u32*)(*((u32*)ov03_022598A0) + 0x18)));
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x54)), *((u32*)(*((u32*)ov03_022598A0) + 0x1c)), *((u32*)(*((u32*)ov03_022598A0) + 0x18)));
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x30
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)(*((u32*)ov03_022598A0) + 0x1c)), 2);
}




void ov03_02254420(void) {
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    ListMenuItems_New(0x10, 4);
    *((u32*)(*((u32*)ov03_022598A0) + 0x64)) = r0;
    // str r6, [sp]
    // str r7, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 0, (0 + 1), 2);
    ReadMsgDataIntoString(*((u32*)(*((u32*)r4) + 0x74)), 0x4d, *((u32*)(*((u32*)r4) + 4)));
    // ldmia r2!, {r1, r2}
    StringExpandPlaceholders(*((u32*)(*((u32*)r4) + 0x50)), *((u32*)r4));
    ListMenuItems_AddItem(*((u32*)(*((u32*)r4) + 0x64)), *((u32*)*((u32*)r4)), 0);
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // mov r4, sp
    // str r0, [sp, #0x1c]
    // sub r4, #0x10
    // str r1, [sp, #0x20]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1, r2, r3}
    ov03_02253ED0(0xa, 1, r4, ov03_02259164);
    // add r1, #0x9c
    // str r2, [r1]
    // add r1, #0xa0
    // strb r2, [r1]
    // add r1, #0xa2
    // strh r2, [r1]
    // add r1, #0xa1
    // strb r2, [r1]
    // add r2, #0x9c
    ov01_021F6A9C(*((u32*)(*((u32*)ov03_022598A0) + 0x68)), 7, *((u32*)ov03_022598A0));
    ov03_02254B4C(ov03_02254500);
}




void ov03_02254500(void) {
    ov03_022543AC(r1);
    ov01_021F6B10(*((u32*)(r4 + 0x68)));
    sub_02037700();
    // add r0, #0x88
    // str r1, [r0]
    ov03_02254B44(*((u32*)ov03_022598A0), 3);
    ov03_0225574C(r5, r4);
    sub_02035184();
    ListMenu_ProcessInput(*((u32*)(*((u32*)ov03_022598A0) + 0x5c)));
    // mvn r2, r2
    // add r1, #0xa2
    // add r1, sp, #0
    ListMenuGetCurrentItemArrayId(*((u32*)(*((u32*)ov03_022598A0) + 0x5c)), *((u16*)r4), 0);
    // add r0, sp, #0
    // mvn r0, r0
    // mvn r1, r1
    ov03_02254600(r4, (1 + 1));
    PlaySE(0x000005DC);
    // add r0, #0x88
    // str r1, [r0]
    ov03_02254B44(*((u32*)ov03_022598A0), 1);
    ov03_0225574C(r5, r4);
    PlaySE(0x000005DC);
    // add r1, #0x8e
    ListMenuGetCurrentItemArrayId(*((u32*)(r4 + 0x5c)), r4);
    sub_0203511C();
    // add r1, #0x8e
    ov03_02254600(r4, *((u16*)r4));
    // add r0, #0x8e
    sub_02035150(*((u16*)r4));
    // add r1, #0x8e
    // add r4, #0x8e
    // strh r0, [r1]
    sub_02058164(*((u16*)r4), r4);
    sub_02037BC8();
    ov03_02254B4C(ov03_02254660);
}




void ov03_02254600(void) {
    sub_02035184();
    // add r0, #0x98
    // add r0, #0x98
    // strb r1, [r0]
    sub_02035198(*((u32*)ov03_022598A0), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x20
    FillWindowPixelRect(*((u32*)ov03_022598A0), 0xf, 8, 0);
    ov03_02254120(*((u32*)(*((u32*)ov03_022598A0) + 0x5c)), 0, 0);
    // add r0, #0x20
    CopyWindowToVram(*((u32*)ov03_022598A0));
}




void ov03_02254660(void) {
    sub_02037700();
    ov03_0225574C(r5, r4);
    ov03_02253E20(0, 0);
    ov03_02255ADC(r4);
    // add r0, #0xa1
    // strb r1, [r0]
    sub_0203769C(*((u32*)ov03_022598A0), 1);
    sub_02034818();
    sub_02037BC8();
    ov03_022546B0(r5, r4);
}




void ov03_022546B0(void) {
    sub_02037700();
    ov03_0225574C(r5, r4);
    ov03_02253E20(0, 0);
    ov03_02255ADC(r4);
    // add r0, #0xa1
    // strb r1, [r0]
    // add r0, #0x8e
    sub_020351DC(*((u16*)r4), *((u32*)(*((u32*)ov03_022598A0) + 0x7c)));
    BufferPlayersName(*((u32*)(r4 + 0x58)), 1, *((u32*)(*((u32*)ov03_022598A0) + 0x7c)));
    ov03_02255B70();
    ov03_02253E20(1, 1);
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    // add r0, #0x94
    RemoveTextPrinter(*((u8*)*((u32*)ov03_022598A0)));
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 2, *((u32*)(*((u32*)ov03_022598A0) + 0x10)));
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x58)), *((u32*)(*((u32*)ov03_022598A0) + 0x14)), *((u32*)(*((u32*)ov03_022598A0) + 0x10)));
    // add r0, #0x40
    WindowIsInUse(*((u32*)ov03_022598A0));
    // add r1, #0x40
    sub_0205B514(*((u32*)(*((u32*)(*((u32*)ov03_022598A0) + 0x68)) + 8)), *((u32*)ov03_022598A0), 3);
    Save_PlayerData_GetOptionsAddr(*((u32*)(*((u32*)(*((u32*)ov03_022598A0) + 0x68)) + 0xc)));
    // add r0, #0x40
    sub_0205B564(*((u32*)ov03_022598A0), r0);
    TextFlags_SetCanABSpeedUpPrint(1);
    TextFlags_SetAutoScrollParam(0);
    TextFlags_SetCanTouchSpeedUpPrint(0);
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x40
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 1, *((u32*)(*((u32*)ov03_022598A0) + 0x14)), 0);
    // add r1, #0x94
    // strb r0, [r1]
    // add r1, #0xa8
    // str r2, [r1]
    // add r0, #0xa1
    // strb r1, [r0]
    ov03_02254B4C(ov03_022548E0, 1, 0);
}




void ov03_022547D8(void) {
    sub_02037700();
    ov03_0225574C(r6, r4);
    ov03_02253E20(0, 0);
    ov03_02255ADC(r4);
    sub_02037BA0(0, 3);
    sub_0203769C();
    sub_02037BC8();
    ov03_0225574C(r6, r4);
    ov03_02255A70(r4);
    sub_02037BA0(0, 5);
    // mvn r1, r1
    sub_02037BC8(0);
    ov03_0225574C(r6, r4);
    ov03_02255A70(r4);
    sub_02037BA0(0, 4);
    sub_0203769C();
    ov03_02253E20(0x74, 0);
    ov03_02254B4C(ov03_02255280);
    sub_02037BA0(0, 2);
    sub_0203769C();
    sub_02037BC8();
    sub_020347A0();
    // add r1, #0x90
    // strb r0, [r1]
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)), r4);
    // add r0, #0x94
    RemoveTextPrinter(*((u8*)*((u32*)ov03_022598A0)));
    ov03_0225574C(r6, r4);
    ov03_02255804(r4);
    ov03_02255C80();
    ov03_0225574C(r6, r4);
    ov03_02255A70(r4);
}




void ov03_022548E0(void) {
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    // add r0, #0xa8
    // add r1, #0x9c
    // str r2, [r1]
    // add r1, #0xa0
    // strb r2, [r1]
    // add r1, #0xa2
    // strh r2, [r1]
    // add r1, #0xa1
    // strb r2, [r1]
    // add r2, #0x9c
    ov01_021F6A9C(*((u32*)(*((u32*)ov03_022598A0) + 0x68)), 7, *((u32*)ov03_022598A0));
    // add r4, #0xa8
    // str r0, [r4]
    ov01_021F6B10(*((u32*)(r4 + 0x68)));
    ov03_022547D8(r5, r4);
    // add r4, #0xa1
    // strb r0, [r4]
    // tst r0, r1
    // add r0, #0xa2
    PlaySE(0x000005DC, *((u32*)(gSystem + 0x48)));
    // add r4, #0xa8
    // str r1, [r4]
    ov03_02253E20(3, 0);
    ov03_02254B4C(ov03_0225499C);
}




void ov03_0225499C(void) {
    ov03_022547D8();
    // add r4, #0xa1
    // strb r0, [r4]
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    ov03_02255C84(r4);
    ov03_02254B4C(ov03_022549D8);
}




void ov03_022549D8(void) {
    // add r0, #0xa8
    ov03_02255CA0(r1);
    // add r0, #0xa8
    // str r1, [r0]
    ov03_02255CD0(r4, 1);
    ov03_022547D8(r5, r4);
    ov03_02255CE4(r4);
    ov01_021F6AEC(*((u32*)(r4 + 0x68)));
    // add r0, #0xa4
    ov03_0225574C(r5, r4);
    ov03_02253E20(6, 0);
    ov03_02255ADC(r4);
    ov03_02254B4C(ov03_022546B0);
}




void ov03_02254A54(void) {
    // add r0, sp, #0xc
    // strh r2, [r0]
    // add r1, sp, #0xc
    ListMenuGetScrollAndRow(*((u32*)(*((u32*)ov03_022598A0) + 0x5c)), 0);
    // add r0, sp, #0xc
    // add r1, r1, r4
    // strh r1, [r0]
    sub_02034818(*((u16*)r0), *((u16*)r0));
    // add r0, sp, #0xc
    sub_02034818(*((u16*)r0));
    BufferPlayersName(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 0, r0);
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x4f, *((u32*)(*((u32*)ov03_022598A0) + 4)));
    // ldmia r2!, {r1, r2}
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), *((u32*)ov03_022598A0));
    // str r4, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x20
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)*((u32*)ov03_022598A0)), 8);
    // add r0, sp, #0xc
    sub_02034818(*((u16*)r0));
    PlayerProfile_GetTrainerID_VisibleHalf();
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 2, r0, 5);
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x4e, *((u32*)(*((u32*)ov03_022598A0) + 0xc)));
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), *((u32*)(*((u32*)ov03_022598A0) + 8)), *((u32*)(*((u32*)ov03_022598A0) + 0xc)));
    // str r4, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x20
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)(*((u32*)ov03_022598A0) + 8)), 0x48);
}




void ov03_02254B2C(void) {
}




void ov03_02254B44(void) {
}




void ov03_02254B4C(void) {
    *((u32*)(*((u32*)ov03_022598A0) + 0x6c)) = r0;
}




void ov03_02254B58(void) {
    SysTask_CreateOnMainQueue(ov03_02254D64, r0, 0);
    ov03_02254BEC();
    // add r0, #0x30
    WindowIsInUse(*((u32*)ov03_022598A0));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x30
    AddWindowParameterized(*((u32*)(*((u32*)(*((u32*)ov03_022598A0) + 0x68)) + 8)), *((u32*)ov03_022598A0), 3, 0x16);
    // add r0, #0x30
    DrawFrameAndWindow1(*((u32*)ov03_022598A0), 1, 0x000003D9, 0xb);
    // add r0, #0x30
    FillWindowPixelBuffer(*((u32*)ov03_022598A0), 0xf);
    // add r0, #0x30
    CopyWindowToVram(*((u32*)ov03_022598A0));
    // add r4, #0x97
    // strb r0, [r4]
    sub_0203476C(0);
    ov03_02254B4C(ov03_02254D78);
}




void ov03_02254BEC(void) {
    // add r2, sp, #0
    // strh r0, [r2]
    // add r0, #0x91
    GF_AssertFail(*((u8*)*((u32*)ov03_022598A0)), (0x29 - 1), (r2 + 2), (ov03_0225931E + 2));
    // add r0, #0x91
    sub_020347A0(*((u8*)*((u32*)ov03_022598A0)));
    // add r0, #0x92
    // add r0, #0x7f
    ov03_02253E20(*((u8*)*((u32*)ov03_022598A0)), 0);
    // add r0, #0x92
    // add r0, #0x75
    ov03_02253E20(*((u8*)*((u32*)ov03_022598A0)), 0);
    sub_020347A0();
    // add r0, #0x92
    // add r0, #0x9a
    ov03_02253E20(*((u8*)*((u32*)ov03_022598A0)), 0);
    // add r0, #0x92
    // add r0, #0x8e
    ov03_02253E20(*((u8*)*((u32*)ov03_022598A0)), 0);
    // add r0, sp, #0
    ov03_02253E20(*((u16*)(r0 + (r0 << 1))), 0);
}




void ov03_02254C9C(void) {
    sub_020347A0();
    ov03_02255B70();
    sub_020347A0();
    ov03_02255B70(r0);
    sub_020347A0();
    // sub r2, r4, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x54)), 0, 2);
    // add r0, #0x30
    FillWindowPixelBuffer(*((u32*)ov03_022598A0), 0xf);
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), r4, *((u32*)(*((u32*)ov03_022598A0) + 0x1c)));
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x54)), *((u32*)(*((u32*)ov03_022598A0) + 0x18)), *((u32*)(*((u32*)ov03_022598A0) + 0x1c)));
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x30
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)(*((u32*)ov03_022598A0) + 0x18)), 2);
}




void ov03_02254D24(void) {
    // add r3, sp, #0
    // strh r1, [r3]
    sub_02034818(*((u16*)ov03_02259370), (0x29 - 1), (r3 + 2));
    BufferPlayersName(*((u32*)(r4 + 0x58)), 1, r0);
    // add r4, #0x91
    // add r0, sp, #0
    ov03_02253E20(*((u16*)(*((u8*)r4) + (*((u8*)r4) << 1))), 1);
}




void ov03_02254D64(void) {
    // blx r2
}




void ov03_02254D78(void) {
    ov03_02254C9C(r1);
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    ListMenuItems_New(5, 4);
    *((u32*)(*((u32*)ov03_022598A0) + 0x64)) = r0;
    ListMenuItems_AppendFromMsgData(*((u32*)(*((u32*)ov03_022598A0) + 0x64)), *((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x52, 0);
    // add r0, #0x98
    // strb r2, [r0]
    // add r0, r0, r3
    // add r0, #0x80
    // strb r2, [r0]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // mov r4, sp
    // str r0, [sp, #0x1c]
    // sub r4, #0x10
    // str r1, [sp, #0x20]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1, r2, r3}
    ov03_02253ED0(0xc, 1, r4, ov03_02259144);
    ov03_02254B4C(ov03_02254E70);
    ov03_02255B84();
    // add r1, #0x9c
    // str r2, [r1]
    // add r1, #0x9c
    // str r2, [r1]
    // add r0, #0xa0
    // strb r1, [r0]
    // add r1, #0xa2
    // strh r2, [r1]
    // add r1, #0xa1
    // strb r2, [r1]
    // add r2, #0x9c
    ov01_021F6A9C(*((u32*)(*((u32*)ov03_022598A0) + 0x68)), 7, *((u32*)ov03_022598A0));
}




void ov03_02254E70(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    ov01_021F6B10(*((u32*)(r1 + 0x68)));
    // ldr r0, [sp, #4]
    ov03_02254C9C();
    sub_02034714(0);
    // add r0, r0, r5
    // add r0, #0x80
    // strb r6, [r0]
    // add r0, #0x98
    // strb r6, [r0]
    sub_02034818(r5);
    // add r0, r1, r5
    // add r0, #0x80
    // add r0, r1, r5
    // add r0, #0x80
    // strb r7, [r0]
    // add r0, #0x98
    // strb r7, [r0]
    sub_02034818(r5, *((u32*)r4));
    // add r0, r1, r5
    // add r0, #0x80
    // add r1, r1, r5
    // add r1, #0x80
    // strb r0, [r1]
    // add r1, #0x98
    // strb r0, [r1]
    // add r0, #0x98
    // add r2, #0x98
    // strb r0, [r2]
    RedrawListMenu(*((u32*)(*((u32*)ov03_022598A0) + 0x5c)), ov03_022598A0, *((u32*)ov03_022598A0));
    ListMenuGetTemplateField(*((u32*)(*((u32*)ov03_022598A0) + 0x5c)), 3);
    ov03_02254A54(*((u32*)(*((u32*)ov03_022598A0) + 0x5c)), r5, ((r5 << 0x18) >> 0x18));
    ListMenuGetTemplateField(*((u32*)(*((u32*)r4) + 0x5c)), r7);
    // ldr r0, [sp, #4]
    ListMenu_ProcessInput(*((u32*)(r0 + 0x5c)));
    sub_02034780();
    sub_02034780();
    // ldr r1, [sp, #4]
    // add r1, #0x95
    // strb r0, [r1]
    PlaySE(0x0000060C);
    // ldr r0, [sp, #4]
    // add r0, #0xa1
    // strb r1, [r0]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, #0x95
    ov03_02254D24(*((u8*)r0), 1);
    ov03_02254B4C(ov03_02255714);
    sub_02037700();
    ov03_02254B44();
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    ov03_0225574C();
    // add r0, #0x88
    // str r1, [r0]
    // mvn r0, r0
    ov03_02255B84(0, 3);
    // add r0, #0xa2
    // mvn r4, r4
    // add r0, #0xa2
    // mvn r4, r4
    // mvn r0, r0
    PlaySE(0x000005DC);
    ov03_02254B4C(ov03_0225558C);
    ov03_02255B70();
    sub_020347A0();
    // add r2, sp, #8
    // strh r0, [r2]
    PlaySE(0x000005DC, (0x29 - 1), (r2 + 2), (ov03_02259184 + 2));
    sub_020347A0();
    // ldr r1, [sp, #4]
    // add r1, #0x90
    // strb r0, [r1]
    // ldr r0, [sp, #4]
    // add r0, #0x91
    // str r0, [sp, #4]
    // add r0, sp, #8
    ov03_02253E20(*((u16*)(*((u8*)r0) + (*((u8*)r0) << 1))), 0);
    ov03_02254B4C(ov03_022553C8);
}




void ov03_02255078(void) {
    ov03_02254C9C(r1);
    // add r0, #0xa8
    ov03_02255CA0(r5);
    // add r0, #0xa8
    // str r1, [r0]
    ov03_02255CD0(r5, 1);
    // add r0, #0x95
    sub_020373B4(*((u8*)r5));
    ov03_02255CE4(r5);
    // add r0, #0x91
    ov03_02255B84(*((u8*)r5));
    sub_020373B4(((r5 << 0x10) >> 0x10));
    sub_020346E8(r5);
    sub_02037B8C(r4, ((r5 << 0x18) >> 0x18));
    ov03_02255B84();
    ov03_02253E20(0, 0);
    ov03_02254B4C(ov03_022552C8);
    // add r5, #0x95
    sub_020346E8(*((u8*)r5));
    ov03_02253E20(0, 0);
    ov03_02254B4C(ov03_022552C8);
    sub_02037700();
    ov03_02255C80();
    ov03_02255CE4(r5);
    // add r5, #0x95
    sub_020346E8(*((u8*)r5));
    ov03_02253E20(0, 0);
    ov03_02254B4C(ov03_022552C8);
    ov01_021F6AEC(*((u32*)(r5 + 0x68)));
    // add r0, #0xa4
    // add r0, #0x91
    // add r0, #0xdb
    sub_020348F0(((*((u8*)r5) << 0x18) >> 0x18));
    ov03_02253E20(0x74, 0);
    ov03_02254B4C(ov03_02255280);
    // add r5, #0x95
    sub_02037B8C(4, *((u8*)r5));
    // add r0, #0x95
    sub_0203476C(*((u8*)r5));
    // add r1, #0x95
    sub_02037B8C(2, *((u8*)r5));
    ov03_02255B84();
    sub_020347A0();
    sub_020347A0();
    // add r1, #0x90
    // strb r0, [r1]
    ov03_02255B84(r5);
    ov03_02254B4C(ov03_02255388);
    ov03_0225574C(r6, r5);
    ov03_022557CC(r5);
    ov03_02254BEC();
    ov03_02254B4C(ov03_0225530C);
    // add r0, #0x91
    ov03_02255B84(*((u8*)r5));
    sub_020373B4(((r5 << 0x10) >> 0x10));
    sub_020346E8(r5);
    sub_02037B8C(r4, ((r5 << 0x18) >> 0x18));
    ov03_02255B84();
    ov03_02254BEC();
    ov03_02254B4C(ov03_0225530C);
    // add r0, #0x95
    sub_020346E8(*((u8*)r5));
    // add r5, #0x95
    sub_02037B8C(3, *((u8*)r5));
    ov03_02254BEC();
    ov03_02254B4C(ov03_0225530C);
}




void ov03_02255280(void) {
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    ov03_0225574C(r5, r4);
    ov03_02254B44();
    // add r0, #0x88
    // str r1, [r0]
}




void ov03_022552C8(void) {
    ov03_02254C9C(r1);
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    ov03_02254BEC();
    ov03_02254B4C(ov03_0225530C);
}




void ov03_0225530C(void) {
    ov03_02254C9C(r1);
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    ov03_02254B4C(ov03_02254E70);
    ov03_02255B84();
    // add r1, #0x9c
    // str r2, [r1]
    // add r1, #0x9c
    // str r2, [r1]
    // add r0, #0xa0
    // strb r1, [r0]
    // add r1, #0xa2
    // strh r2, [r1]
    // add r1, #0xa1
    // strb r2, [r1]
    // add r2, #0x9c
    ov01_021F6A9C(*((u32*)(*((u32*)ov03_022598A0) + 0x68)), 7, *((u32*)ov03_022598A0));
}




void ov03_02255388(void) {
    // add r2, sp, #0
    // strh r0, [r2]
    ov03_02254C9C(r1, (0x29 - 1), (r2 + 2), (ov03_022591D6 + 2));
    // add r4, #0x91
    // add r0, sp, #0
    ov03_02253E20(*((u16*)(*((u8*)r4) + (*((u8*)r4) << 1))), 0);
    ov03_02254B4C(ov03_022553C8);
}




void ov03_022553C8(void) {
    ov03_02254C9C(r1);
    sub_02037EC0(0);
    ListMenu_ProcessInput(*((u32*)(r4 + 0x5c)));
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    ov03_02255C84(r4);
    ov03_02254B4C(ov03_02255404);
}




void ov03_02255404(void) {
    ov03_02254C9C(r1);
    // add r0, #0xa8
    ov03_02255CA0(r4);
    // add r0, #0xa8
    // str r1, [r0]
    ov03_02255CD0(r4, 1);
    sub_02037700();
    sub_02037454();
    // add r1, #0x90
    ov03_02255CE4(r4, *((u8*)r4));
    ov03_02254B4C(ov03_022554E0);
    ov01_021F6AEC(*((u32*)(r4 + 0x68)));
    // add r0, #0xa4
    // add r4, #0x91
    sub_02037454(*((u8*)r4));
    sub_020373B4(((r4 << 0x10) >> 0x10));
    ov03_02254B4C(ov03_022554E0);
    sub_02037454();
    sub_02037AC0(0xa);
    ov03_02254B4C(ov03_022556BC);
    sub_02037EC0(1);
    ov03_02254B44();
    ov03_0225574C(r5, r4);
    // add r0, #0x88
    // str r1, [r0]
}




void ov03_022554E0(void) {
    // add r3, sp, #0
    // strh r1, [r3]
    ov03_0225574C(r1, (0x29 - 1), (r3 + 2));
    // add r0, #0x91
    // add r1, #0x92
    // add r0, #0x89
    ov03_02253E20(*((u8*)*((u32*)ov03_022598A0)), 0);
    // add r0, #0x91
    // add r0, sp, #0
    ov03_02253E20(*((u16*)(*((u8*)r4) + (*((u8*)r4) << 1))), 0);
    sub_02058284();
    SysTask_CreateOnMainQueue(ov03_0225554C, r4, 0);
}




void ov03_0225554C(void) {
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    // add r0, #0x88
    // str r1, [r0]
    SysTask_Destroy(r4, 1);
}




void ov03_0225558C(void) {
    // add r2, sp, #0
    // strh r0, [r2]
    ov03_02254C9C(r1, (0x29 - 1), (r2 + 2), (ov03_022593C2 + 2));
    sub_020347A0();
    // add r4, #0x91
    // add r0, sp, #0
    ov03_02253E20(*((u16*)(*((u8*)r4) + (*((u8*)r4) << 1))), 0);
    ov03_02254B4C(ov03_022555F4);
    ov03_02254B44();
    ov03_0225574C(r5, r4);
    // add r0, #0x88
    // str r1, [r0]
}




void ov03_022555F4(void) {
    ov03_02254C9C(r1);
    ListMenu_ProcessInput(*((u32*)(r4 + 0x5c)));
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    ov03_02255C84(r4);
    ov03_02254B4C(ov03_0225562C);
}




void ov03_0225562C(void) {
    ov03_02254C9C(r1);
    // add r0, #0xa8
    ov03_02255CA0(r4);
    // add r0, #0xa8
    // str r1, [r0]
    ov03_02255CD0(r4, 1);
    sub_02037700();
    ov03_02255CE4(r4);
    ov03_02254BEC();
    ov03_02254B4C(ov03_0225530C);
    ov01_021F6AEC(*((u32*)(r4 + 0x68)));
    // add r0, #0xa4
    ov03_02254B44(*((u32*)r4));
    ov03_0225574C(r5, r4);
    // add r0, #0x88
    // str r1, [r0]
    ov03_02254BEC(*((u32*)ov03_022598A0), 1);
    ov03_02254B4C(ov03_0225530C);
}




void ov03_022556BC(void) {
    sub_02037700();
    sub_02037454();
    // add r1, #0x90
    ov03_02254B4C(ov03_022554E0, *((u8*)r4));
    ov03_02254C9C(r4);
    ListMenu_ProcessInput(*((u32*)(r4 + 0x5c)));
    sub_02037B38(0xa);
    sub_02037A10();
    ov03_0225574C(r5, r4);
    ov03_02255B44(r4);
}




void ov03_02255714(void) {
    ov03_02254C9C(r1);
    ListMenu_ProcessInput(*((u32*)(r4 + 0x5c)));
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    ov03_02255C84(r4);
    ov03_02254B4C(ov03_02255078);
}




void ov03_0225574C(void) {
    // add r0, #0x40
    FillWindowPixelBuffer(*((u32*)ov03_022598A0), 0xf);
    // add r0, #0x20
    sub_0200E5D4(r4, 0);
    ListMenuItems_Delete(*((u32*)(r4 + 0x64)));
    DestroyListMenu(*((u32*)(r4 + 0x5c)), 0, 0);
    *((u32*)(r4 + 0x5c)) = 0;
    // add r0, #0x20
    ClearWindowTilemapAndCopyToVram(r4);
    // add r0, #0x20
    RemoveWindow(r4);
    // add r0, #0x97
    // add r0, #0x30
    sub_0200E5D4(*((u32*)ov03_022598A0), 0);
    // add r0, #0x30
    ClearWindowTilemapAndCopyToVram(*((u32*)ov03_022598A0));
    // add r0, #0x30
    RemoveWindow(*((u32*)ov03_022598A0));
    // add r4, #0x97
    // strb r0, [r4]
    SysTask_Destroy(r5);
}




void ov03_022557CC(void) {
    sub_02034818(1);
    BufferPlayersName(*((u32*)(r4 + 0x58)), 1, r0);
    ov03_02253E20(0x45, 1);
    SysTask_CreateOnMainQueue(ov03_02254D64, r4, 0);
    ov03_02254B4C(ov03_02255860);
}




void ov03_02255804(void) {
    // add r0, #0x8e
    sub_020351DC(*((u16*)r0), *((u32*)(*((u32*)ov03_022598A0) + 0x7c)));
    BufferPlayersName(*((u32*)(r4 + 0x58)), 1, *((u32*)(*((u32*)ov03_022598A0) + 0x7c)));
    ov03_02253E20(4, 1);
    sub_02037454();
    // add r1, #0x90
    // strb r0, [r1]
    SysTask_CreateOnMainQueue(ov03_02254D64, r4, 0);
    ov03_02254B4C(ov03_02255860);
    // add r0, #0x96
    // strb r1, [r0]
}




void ov03_02255860(void) {
    sub_0203769C();
    sub_02037454();
    // add r4, #0x90
    ov03_02254B4C(ov03_02255A00, *((u8*)r4));
    ov03_02255C80();
    sub_02037700();
    ov03_02254B4C(ov03_02255A00);
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    sub_02037AC0(0xa);
    ov03_02254B4C(ov03_022558C4);
}




void ov03_022558C4(void) {
    sub_0203769C();
    sub_02037454();
    // add r1, #0x90
    ov03_02254B4C(ov03_02255A00, *((u8*)r4));
    ov03_02255C80();
    sub_02037700();
    ov03_02254B4C(ov03_02255A00);
    sub_020373B4(0);
    ov03_02254B4C(ov03_02255A00);
    sub_02037BA0(0, 5);
    // mvn r1, r1
    ov03_02254B4C(ov03_02255A00, 0);
    sub_02037B38(0xa);
    sub_02037A10();
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    // add r0, #0x94
    RemoveTextPrinter(*((u8*)*((u32*)ov03_022598A0)));
    sub_02037454();
    // add r1, #0x90
    // strb r0, [r1]
    ov03_02255B44(r4, r4);
    SysTask_Destroy(r5);
    // add r1, #0x96
    // add r1, #0x96
    // add r0, #0x96
    // strb r1, [r0]
    // add r1, #0x96
    // add r3, sp, #0
    // strh r1, [r3]
    // add r1, #0x91
    // add r0, #0x92
    // add r0, #0x84
    ov03_02253E20(*((u8*)*((u32*)ov03_022598A0)), 0, (0x29 - 1), (r3 + 2));
    // add r0, #0x92
    // add r0, #0xa0
    ov03_02253E20(*((u8*)r0), 0);
    // add r4, #0x91
    // add r0, sp, #0
    ov03_02253E20(*((u16*)(*((u8*)r4) + (*((u8*)r4) << 1))), 0);
}




void ov03_02255A00(void) {
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    ov03_02253E20(0, 0);
    ov03_02254B4C(ov03_02255A2C);
}




void ov03_02255A2C(void) {
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    SysTask_Destroy(r4);
    ov03_02254B44();
    // add r0, #0x88
    // str r1, [r0]
}




void ov03_02255A70(void) {
    // add r0, #0x8e
    sub_020351DC(*((u16*)r0), *((u32*)(*((u32*)ov03_022598A0) + 0x7c)));
    BufferPlayersName(*((u32*)(r4 + 0x58)), 1, *((u32*)(*((u32*)ov03_022598A0) + 0x7c)));
    ov03_02253E20(5, 1);
    sub_02058180();
    SysTask_CreateOnMainQueue(ov03_02255AB0, r4, 0);
}




void ov03_02255AB0(void) {
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    sub_02058180();
    ov03_022542C8(r4);
    SysTask_Destroy(r5);
}




void ov03_02255ADC(void) {
    sub_02058180();
    sub_020346E8(0);
    SysTask_CreateOnMainQueue(ov03_02255B04, r5, 0);
}




void ov03_02255B04(void) {
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    ov03_022542C8(r4);
    SysTask_Destroy(r5);
}




void ov03_02255B44(void) {
    sub_02037EC0(0);
    // add r0, #0x88
    // str r1, [r0]
    sub_020398D4(1, 1);
    sub_02034434();
    sub_020356C0(1);
}




void ov03_02255B70(void) {
    // add r0, #0x91
}




void ov03_02255B84(void) {
    // add r0, #0x91
}




void ov03_02255B98(void) {
    // add r0, #0x92
    // add r2, #0x93
    // add r0, r1, r0
}




void ov03_02255BB0(void) {
    ov03_02253F74();
    // add r0, #0x91
    // strb r4, [r0]
    // add r5, #0xa4
    // str r0, [r5]
    // add r1, #0x92
    // strb r6, [r1]
    // add r1, #0x93
    // strb r7, [r1]
    ov03_022540E8(*((u32*)ov03_022598A0), *((u32*)ov03_022598A0));
}




void ov03_02255BEC(void) {
    // ldr r0, _02255BF4 ; =ov03_022598A0
    // ldr r3, _02255BF8 ; =ov03_022542C8
    // ldr r0, [r0]
    // bx r3
    // _02255BF4: .word ov03_022598A0
    // _02255BF8: .word ov03_022542C8
    // TODO: decompile
}




void ov03_02255BFC(void) {
}




void ov03_02255C18(void) {
    ov03_02253F74();
    // add r0, #0x91
    // strb r4, [r0]
    // add r5, #0xa4
    // str r0, [r5]
    // add r1, #0x92
    // strb r6, [r1]
    // add r1, #0x93
    // strb r7, [r1]
    ov03_02254B2C(*((u32*)ov03_022598A0), *((u32*)ov03_022598A0));
}




void ov03_02255C54(void) {
    // ldr r0, _02255C5C ; =ov03_022598A0
    // ldr r3, _02255C60 ; =ov03_02254B58
    // ldr r0, [r0]
    // bx r3
    // _02255C5C: .word ov03_022598A0
    // _02255C60: .word ov03_02254B58
    // TODO: decompile
}




void ov03_02255C64(void) {
}




u8 ov03_02255C80(void) {
}




void ov03_02255C84(void) {
}




void ov03_02255CA0(void) {
    // add r5, #0xa4
}




void ov03_02255CD0(void) {
}




void ov03_02255CE4(void) {
}




void ov03_02255CF8(void) {
    // add r0, #0x54
    // add r0, #0x54
    // add r1, #0x54
    // add r0, #0x54
    // add r0, #0x54
    // add r0, #0x54
}




void ov03_02255D68(void) {
    // add r0, #0x54
    // add r0, #0x54
    // add r4, #0x54
}




void ov03_02255D8C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov03_02255DB8(void) {
    // add r4, #0x34
    Save_LinkBattleRuleset_GetByIndex(*((u32*)(*((u32*)(r0 + 0x10)) + 0xc)), 0);
    WindowIsInUse(r4);
    ListMenuItems_New((r6 + 2), 4);
    *((u32*)(r5 + 8)) = r0;
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    AddWindowParameterized(*((u32*)(*((u32*)(r5 + 0x10)) + 8)), r4, 3, 1);
    // add r0, #0x34
    DrawFrameAndWindow1(r5, 1, 0x000003D9, 0xb);
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 8)), *((u32*)(r5 + 0x68)), 0x8a, 0xc);
    ov03_02255D8C(r5, 0);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x68)), r7, *((u32*)(r5 + 0x1c)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x64)), *((u32*)(r5 + 0x20)), *((u32*)(r5 + 0x1c)));
    ListMenuItems_AddItem(*((u32*)(r5 + 8)), *((u32*)(r5 + 0x20)), r4);
    // sub r3, #0x83
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 8)), *((u32*)(r5 + 0x68)), 0x81, 0x81);
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x14
    *((u16*)(((r6 + 2) << 0x10) + 0x10)) = (((r6 + 2) << 0x10) >> 0x10);
    *((u16*)(((r6 + 2) << 0x10) + 0x12)) = (((r6 + 2) << 0x10) >> 0x10);
    // str r0, [sp, #0x14]
    // add r0, #0x34
    // str r0, [sp, #0x20]
    // str r5, [sp, #0x30]
    // add r2, #0x78
    ListMenuInit(r3, 0, *((u16*)r5), 4);
    // str r0, [r5]
    // add r5, #0x34
    CopyWindowToVram(r5);
}




void ov03_02255EBC(void) {
    // add r0, #0x34
    // add r1, #0x38
    // add r0, #0x34
    // str r0, [r4]
}




void ov03_02255EF8(void) {
    ListMenu_ProcessInput(*((u32*)r0));
    // add r2, #0x78
    ListMenuGetScrollAndRow(*((u32*)r5), 0, r5);
    // add r0, #0x80
    // add r1, #0x80
    ListMenuGetCurrentItemArrayId(*((u32*)r5), r5);
    // add r0, #0x80
    PlaySE(0x000005DC);
    // mvn r0, r0
    PlaySE(0x000005DC);
    // add r0, #0xa4
    // str r1, [r0]
    ov03_02255EBC(r5, 0);
    PlaySE(0x000005DC);
    // add r0, #0xa4
    // str r1, [r0]
    ov03_02255EBC(r5, 0);
    // mvn r0, r0
    PlaySE(0x000005DC);
    sub_020291E8(*((u32*)(*((u32*)(r5 + 0x10)) + 0xc)), r4);
    // add r1, #0xa4
    // str r0, [r1]
}




void ov03_02255F98(void) {
    ListMenuItems_New(3, 4);
    *((u32*)(r5 + 0xc)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x44
    AddWindowParameterized(*((u32*)(*((u32*)(r5 + 0x10)) + 8)), r5, 3, 0x16);
    // add r0, #0x44
    DrawFrameAndWindow1(r5, 1, 0x000003D9, 0xb);
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 0x68)), *((u32*)r4), *((u32*)(r4 + 4)));
    // add r4, #8
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x14
    *((u16*)(r0 + 0x10)) = 3;
    *((u16*)(r0 + 0x12)) = 3;
    // str r0, [sp, #0x14]
    // add r0, #0x44
    // str r0, [sp, #0x20]
    // str r5, [sp, #0x30]
    // add r2, #0x7a
    ListMenuInit(r3, 0, *((u16*)r5), 4);
    *((u32*)(r5 + 4)) = r0;
    // add r5, #0x44
    CopyWindowToVram(r5);
}




void ov03_0225604C(void) {
    ListMenu_ProcessInput(*((u32*)(r0 + 4)));
    // add r2, #0x7a
    ListMenuGetScrollAndRow(*((u32*)(r5 + 4)), 0, r5);
    // add r0, #0x82
    // add r1, #0x82
    ListMenuGetCurrentItemArrayId(*((u32*)(r5 + 4)), r5);
    // add r0, #0x82
    PlaySE(0x000005DC);
    // mvn r0, r0
    PlaySE(0x000005DC);
    // mvn r4, r4
    PlaySE(0x000005DC);
    ov03_02255EBC(r5);
    DestroyListMenu(*((u32*)(r5 + 4)), 0, 0);
    // add r0, #0x44
    sub_0200E5D4(r5, 1);
    // add r1, #0x48
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x44)), *((u8*)r5));
    // add r0, #0x44
    RemoveWindow(r5);
    ListMenuItems_Delete(*((u32*)(r5 + 0xc)));
    *((u32*)(r5 + 4)) = 0;
}




void ov03_022560EC(void) {
    // str r0, [sp, #0x14]
    NewMsgDataFromNarc(0, 0x1b, 0xb6, 4);
    // str r0, [sp, #0x30]
    String_New(0xb4, 4);
    // str r0, [sp, #0x2c]
    String_New(0xb4, 4);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x24]
    // add r0, #0x24
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    AddWindowParameterized(*((u32*)(*((u32*)(1 + 0x10)) + 8)), 3, 4);
    // ldr r0, [sp, #0x24]
    DrawFrameAndWindow1(1, 0x000003D9, 0xb);
    // ldr r0, [sp, #0x24]
    FillWindowPixelBuffer(0xf);
    // ldr r0, [sp, #0x14]
    // add r1, #0x78
    ov03_02255D8C((*((u16*)r0) - 1));
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x2c]
    ReadMsgDataIntoString(0x71);
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x2c]
    StringExpandPlaceholders(r6);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(0xff, 0, 0x39);
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x2c]
    // add r1, #0x5d
    ReadMsgDataIntoString(0);
    // str r4, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x2c]
    AddTextPrinterParameterized(0, 0, 2);
    // add r4, #0xf
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // add r0, #0xa4
    LinkBattleRuleset_GetRuleValue(*((u32*)*((u32*)(0x10 + 0x10))), *((u8*)ov03_02259820));
    // ldr r0, [sp, #0x20]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022561F0: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r0, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r4, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r4, 3);
    _s32_div_f((0x00002710 * r4), 0xfe);
    _s32_div_f((r0 + 5), 0xa);
    // neg r1, r4
    _s32_div_f((r0 * r1), 0xfe);
    _s32_div_f((r0 + 5), 0xa);
    // neg r4, r0
    _s32_div_f(r4, 0xc);
    abs();
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r0, 2);
    _s32_div_f(r4, 0xc);
    abs(r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 1, r0, 2);
    // add r0, r1, r0
    _s32_div_f(0x0000C350, 0x000186A0);
    // neg r1, r4
    // add r0, r2, r0
    _s32_div_f(0x0000C350, 0x000186A0, (r1 * r0));
    // neg r4, r0
    abs(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r0, 3);
    // ldr r0, [sp, #0x14]
    // add r0, #0xa4
    LinkBattleRuleset_GetRuleValue(*((u32*)*((u32*)(r0 + 0x10))), 0xd);
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x2c]
    ReadMsgDataIntoString(((0x73 + 1) + 1));
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x2c]
    StringExpandPlaceholders(r6);
    // ldr r1, [sp, #0x28]
    FontID_String_GetWidth(0, 0);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    // sub r3, r3, r4
    AddTextPrinterParameterized(0, 0, 0xbf);
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r0, #0xf
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x2c]
    String_Delete(((r0 + 1) + 1));
    // ldr r0, [sp, #0x28]
    String_Delete();
    // ldr r0, [sp, #0x30]
    DestroyMsgData();
    // ldr r0, [sp, #0x24]
    CopyWindowToVram();
}




void ov03_022563D4(void) {
}




void ov03_022563F8(void) {
    SaveArray_Party_Get(*((u32*)(*((u32*)(r0 + 0x10)) + 0xc)));
    // add r0, #0xa4
    sub_02074CD0(*((u32*)*((u32*)(r4 + 0x10))), r0, *((u32*)(r4 + 0x6c)));
    PlaySE(0x000005F3);
    // add r1, #0x78
    ov03_02255D8C(r4, (*((u16*)r4) - 1));
    // add r0, #0xa4
    LinkBattleRuleset_GetRuleValue(*((u32*)*((u32*)(r4 + 0x10))), 1);
    // str r1, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(*((u32*)(r4 + 0x64)), 1, r0, 1);
    ov03_02255CF8(r4, 0x7a);
    PlaySE(0x000005F3);
    // add r1, #0x78
    ov03_02255D8C(r4, (*((u16*)r4) - 1));
    // add r0, #0xa4
    LinkBattleRuleset_GetRuleValue(*((u32*)*((u32*)(r4 + 0x10))), 3);
    // str r0, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(*((u32*)(r4 + 0x64)), 1, r0, 3);
    ov03_02255CF8(r4, 0x88);
}




void ov03_022564A8(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022564CC: ; jump table
    ov03_02255CF8(0x78);
    *((u32*)(r4 + 0x7c)) = (*((u32*)(r4 + 0x7c)) + 1);
    IsPrintFinished(((*((u32*)(r4 + 0x74)) << 0x18) >> 0x18));
    ov03_02255DB8(r4);
    *((u32*)(r4 + 0x7c)) = (*((u32*)(r4 + 0x7c)) + 1);
    ov03_02255EF8((*((u32*)(r4 + 0x7c)) + 1));
    // mvn r1, r1
    // strh r1, [r0]
    *((u32*)(r4 + 0x7c)) = 0xb;
    // strh r1, [r0]
    *((u32*)(r4 + 0x7c)) = 0xb;
    *((u32*)(r4 + 0x7c)) = 3;
    ov03_02255F98(3, 3);
    *((u32*)(r4 + 0x7c)) = (*((u32*)(r4 + 0x7c)) + 1);
    ov03_0225604C((*((u32*)(r4 + 0x7c)) + 1));
    // mvn r1, r1
    *((u32*)(r4 + 0x7c)) = 2;
    *((u32*)(r4 + 0x7c)) = 5;
    *((u32*)(r4 + 0x7c)) = 7;
    ov03_022563F8(7, 0);
    // strh r1, [r0]
    *((u32*)(r4 + 0x7c)) = 0xb;
    *((u32*)(r4 + 0x7c)) = 6;
    IsPrintFinished(((*((u32*)(r4 + 0x74)) << 0x18) >> 0x18), 1);
    // tst r0, r1
    *((u32*)(r4 + 0x7c)) = 0;
    ov03_02255D68(0, 1);
    ov03_022560EC(r4);
    *((u32*)(r4 + 0x7c)) = (*((u32*)(r4 + 0x7c)) + 1);
    // tst r1, r2
    ov03_022563D4((*((u32*)(r4 + 0x7c)) + 1), 3, *((u32*)(gSystem + 0x48)));
    ov03_02255CF8(r4, 0x78);
    ov03_02255DB8(r4);
    *((u32*)(r4 + 0x7c)) = 9;
    IsPrintFinished(((*((u32*)(r4 + 0x74)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x7c)) = 3;
    ov03_02255EBC(3);
    ov03_02255D68(r4, 0);
    MessageFormat_Delete(*((u32*)(r4 + 0x64)));
    DestroyMsgData(*((u32*)(r4 + 0x68)));
    String_Delete(*((u32*)(r4 + 0x14)));
    String_Delete(*((u32*)(r4 + 0x18)));
    String_Delete(*((u32*)(r4 + 0x1c)));
    String_Delete(*((u32*)(r4 + 0x20)));
    PokedexData_UnloadAndDelete(*((u32*)(r4 + 0x6c)));
    Heap_Free(r4);
}




void ov03_02256644(void) {
    // add r5, #0xa4
    // str r0, [r5]
}




void ov03_022566B0(void) {
    TaskManager_GetFieldSystem();
    ov03_02256644();
    *((u32*)(r0 + 0x70)) = r4;
    TaskManager_Call(r5, ov03_022564A8, r0);
}




void ov03_022566D0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov03_02256710(void) {
}




void ov03_02256730(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    AddWindowParameterized(*((u32*)(1 + 8)), 3, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    LoadUserFrameGfx1(*((u32*)(4 + 8)), 3, 0x000003D9, 0xb);
    // ldr r0, [sp, #0x18]
    DrawFrameAndWindow1(1, 0x000003D9, 0xb);
    // ldr r0, [sp, #0x18]
    FillWindowPixelBuffer(0xf);
    NewMsgDataFromNarc(0, 0x1b, 0xb6, 4);
    // str r0, [sp, #0x30]
    MessageFormat_New(4);
    String_New(0xb4, 4);
    String_New(0xb4, 4);
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x14]
    ov03_022566D0(r6, r4);
    // ldr r0, [sp, #0x30]
    ReadMsgDataIntoString(0x71, r7);
    // ldr r1, [sp, #0x2c]
    StringExpandPlaceholders(r6, r7);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(0xff, 0, 0x39);
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x30]
    // add r1, #0x5d
    ReadMsgDataIntoString(ov03_0225982C, r7);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    AddTextPrinterParameterized(0, 0, r7, 2);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    // add r0, #0xa4
    LinkBattleRuleset_GetRuleValue(*((u32*)r0), *((u8*)r1));
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225683E: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r0, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r4, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r4, 3);
    _s32_div_f((0x00002710 * r4), 0xfe);
    _s32_div_f((r0 + 5), 0xa);
    // neg r1, r4
    _s32_div_f((r0 * r1), 0xfe);
    _s32_div_f((r0 + 5), 0xa);
    // neg r4, r0
    _s32_div_f(r4, 0xc);
    abs();
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r0, 2);
    _s32_div_f(r4, 0xc);
    abs(r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 1, r0, 2);
    // add r0, r1, r0
    _s32_div_f(0x0000C350, 0x000186A0);
    // neg r1, r4
    // add r0, r2, r0
    _s32_div_f(0x0000C350, 0x000186A0, (r1 * r0));
    // neg r4, r0
    abs(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r0, 3);
    // ldr r0, [sp, #0x14]
    // add r0, #0xa4
    LinkBattleRuleset_GetRuleValue(*((u32*)r0), 0xd);
    // ldr r0, [sp, #0x30]
    ReadMsgDataIntoString(((0x73 + 1) + 1), r7);
    // ldr r1, [sp, #0x2c]
    StringExpandPlaceholders(r6, r7);
    // ldr r1, [sp, #0x2c]
    FontID_String_GetWidth(0, 0);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // sub r3, r3, r4
    AddTextPrinterParameterized(0, 0, 0xbf);
    // ldr r0, [sp, #0x1c]
    // add r0, #0xf
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    String_Delete((((r0 + 1) + 1) + 1));
    String_Delete(r7);
    MessageFormat_Delete(r6);
    // ldr r0, [sp, #0x30]
    DestroyMsgData();
    // ldr r0, [sp, #0x18]
    CopyWindowToVram();
}




u16 ov03_02256A2C(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // add r0, #0xa4
    // ldr r0, [sp, #0x14]
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02256AAA: ; jump table
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r0, #0xa4
    // str r0, [sp, #8]
    // str r1, [sp]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // str r1, [sp]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r0, #0xa4
    // str r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
}




u32 ov03_02256B40(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02256B50: ; jump table
    // mvn r0, r0
}




void ScrCmd_710(void) {
}




void ov03_02256BA8(void) {
    // add r0, #0xc0
    Field3dObjectList_GetRenderObjectByID(*((u32*)r0), *((u16*)(ov03_0225945C + (r1 << 1))));
    GF_AssertFail();
    Save_VarsFlags_Get(*((u32*)(r5 + 0xc)));
    sub_020669B4(r6);
    // str r0, [sp]
    ov01_021E8970(r4, r0, 1, r7);
}




void ov03_02256BEC(void) {
    // push {r3, r4}
    // sub r2, r2, #3
    // cmp r2, #1
    // ldr r3, _02256C28 ; =0x0000FFFF
    // bhi _02256C0C
    // mov r0, #1
    // mov r2, #0
    // lsl r0, r0, #8
    // ldrh r4, [r1]
    // cmp r4, r3
    // beq _02256C20
    // add r2, r2, #1
    // add r1, r1, #4
    // cmp r2, r0
    // blt _02256BFC
    // b _02256C20
    // mov r1, #1
    // mov r2, #0
    // lsl r1, r1, #8
    // ldrh r4, [r0]
    // cmp r4, r3
    // beq _02256C20
    // add r2, r2, #1
    // add r0, r0, #2
    // cmp r2, r1
    // blt _02256C12
    // add r0, r2, #0
    // pop {r3, r4}
    // bx lr
    // nop
    // _02256C28: .word 0x0000FFFF
    // TODO: decompile
}




void ov03_02256C2C(void) {
    // mov ip, r2
    // mov r2, ip
    // strb r5, [r4, r2]
    // strh r6, [r5, r2]
    // strh r6, [r5, r2]
}




void ov03_02256C84(void) {
    // add r5, #8
    // strh r7, [r6, r3]
}




void ov03_02256CB4(void) {
    ov03_02256BEC(r1, r3, *((u8*)(r0 + 0x00000283)));
    // strb r0, [r5, r1]
    GF_AssertFail(*((u8*)(r5 + (0x27 << 4))), (0x27 << 4));
    Heap_Alloc(0xb, (*((u8*)(r5 + (0x27 << 4))) << 1));
    // str r0, [r5, r1]
    // add r1, #0x1b
    // add r0, #0xfd
    ov03_02256C84(r5, r7);
    ov03_02256C2C(r5, r4, r6);
}




void ov03_02256D18(void) {
}




void InitMartUI(void) {
    // str r2, [sp]
    ov03_02256D18();
    // str r0, [r4]
    String_New(0x60, 0xb);
    // str r0, [r4, r1]
    Save_PlayerData_GetProfile(*((u32*)(r5 + 0xc)), (0x9d << 2));
    // str r0, [r4, r1]
    Save_PlayerData_GetOptionsAddr(*((u32*)(r5 + 0xc)), (0x92 << 2));
    // str r0, [r4, r1]
    Save_GameStats_Get(*((u32*)(r5 + 0xc)), (0x25 << 4));
    // str r0, [r4, r1]
    Save_VarsFlags_Get(*((u32*)(r5 + 0xc)), (0x97 << 2));
    // str r0, [r4, r1]
    Save_ApricornBox_Get(*((u32*)(r5 + 0xc)), (0x26 << 4));
    // str r0, [r4, r1]
    // ldr r2, [sp, #0x1c]
    // add r0, #0xc
    // str r2, [r4, r0]
    // add r0, #0x2b
    // strb r6, [r4, r0]
    // add r2, #0x19
    // strb r0, [r4, r2]
    // add r2, #0x38
    // str r0, [r4, r2]
    // add r2, #0x3c
    // str r3, [r4, r2]
    // add r1, #0x40
    // str r0, [r4, r1]
    Save_Pokeathlon_Get(*((u32*)(r5 + 0xc)), (0x96 << 2), (0x96 << 2), (0 - 1));
    // str r0, [r4, r1]
    // ldr r2, [sp, #0x20]
    // add r0, #0x18
    // str r2, [r4, r0]
    // add r0, sp, #8
    // add r0, #0x1f
    // add r1, #0x2f
    // strb r2, [r4, r0]
    // add r0, #0xfd
    Save_Bag_Get(*((u32*)(r5 + 0xc)), (0x95 << 2), *((u8*)((0x95 << 2) + 0x10)));
    // str r0, [r4, r1]
    Save_SealCase_Get(*((u32*)(r5 + 0xc)), (0x93 << 2));
    // str r0, [r4, r1]
    CheckFlag09A(*((u32*)(r4 + (0x26 << 4))), (0x93 << 2));
    // ldr r1, [sp]
    // ldr r3, [sp, #0x20]
    ov03_02256CB4(r4, r0);
    TaskManager_Call(r7, ov03_02256E2C, r4);
}




void ov03_02256E2C(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r6);
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02256E52: ; jump table
    ov03_0225706C(0x00000272, (*((u16*)(*((u8*)(r0 + 0x00000272)) + 6)) << 0x10));
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    ov03_022570D4(r5, r4);
    ov01_021F6A9C(r5, 2, r4);
    // strb r1, [r4, r0]
    ov03_02257334(r5, r4);
    // strb r0, [r4, r1]
    // add r1, #0x22
    // mvn r2, r2
    ov03_02257510(*((u32*)(r4 + 0x00000272)), 0);
    // strb r0, [r4, r1]
    ov03_0225761C(0x00000272);
    // strb r0, [r4, r1]
    // mvn r0, r0
    // add r1, #0x22
    // str r0, [r4, r1]
    // strb r0, [r4, r1]
    // sub r1, #0x52
    Sprite_IsAnimated(*((u32*)(r4 + 0x00000272)), 0x00000272);
    // add r2, #0x28
    // add r3, #9
    // add r2, r5, r2
    ov03_02257874(r4, *((u16*)(*((u32*)(r4 + (0x9a << 2))) + (*((u8*)(r4 + (0x9a << 2))) << 1))), (*((u8*)(r4 + (0x9a << 2))) << 1), (0x9a << 2));
    // strb r0, [r4, r1]
    ov03_02257944(0x00000272);
    // strb r0, [r4, r1]
    // add r1, #0x22
    // mvn r2, r2
    ov03_02257ADC(*((u32*)(r4 + 0x00000272)), 0);
    // strb r0, [r4, r1]
    ov03_02257B4C(0x00000272);
    // strb r0, [r4, r1]
    // mvn r0, r0
    // add r1, #0x22
    // str r0, [r4, r1]
    ov03_022579E0(0, 0x00000272);
    // strb r0, [r4, r1]
    ov03_02257A70(0x00000272);
    // strb r0, [r4, r1]
    ov03_02257D6C(0x00000272);
    // strb r0, [r4, r1]
    // add r1, #0x22
    // mvn r2, r2
    ov03_02257D90(*((u32*)(r4 + 0x00000272)), 0);
    // strb r0, [r4, r1]
    // mvn r0, r0
    // add r1, #0x22
    // str r0, [r4, r1]
    ov03_02257E6C(0, 0x00000272);
    // strb r0, [r4, r1]
    ov03_02257F24(0x00000272);
    // strb r0, [r4, r1]
    ov03_02257FF8(0x00000272);
    // strb r0, [r4, r1]
    ov03_02258078(0x00000272);
    // strb r0, [r4, r1]
    ov03_022577D0(0x00000272);
    // strb r0, [r4, r1]
    ov03_022572EC(0x00000272);
    ov03_02258164(r5, r4);
    // strb r1, [r4, r0]
    ov03_02258170(r5, r4);
    // strb r0, [r4, r1]
    ov03_022576F8(0x00000272);
    // strb r0, [r4, r1]
    ov03_02257728(0x00000272);
    // strb r0, [r4, r1]
    ov03_022586E0(0x00000272);
    // strb r0, [r4, r1]
    ov03_0225874C(r5, r4);
    ov03_02258764(r6);
    ov03_022587D4(r5, r4);
    // strb r0, [r4, r1]
    ov03_0225709C(r5, r4);
    Sprite_UpdateAnim(*((u32*)(r4 + (0x7e << 2))), (1 << 0xc));
    // add r4, #0x94
    SpriteList_RenderAndAnimateSprites(*((u32*)r4));
}




void ov03_0225706C(void) {
}




void ov03_02257074(void) {
    NewMsgDataFromNarc(0, 0x1b, 0x000001B3, 0xb);
    // add r1, #0x88
    // str r0, [r1]
    MessageFormat_New(0xb, r4);
    // add r4, #0x8c
    // str r0, [r4]
}




void ov03_0225709C(void) {
    // add r0, #0x88
    // add r0, #0x8c
}




void ov03_022570D4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r1), 3, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 3);
    ov03_02257134(r4);
    Camera_New(0xb);
    // add r1, #0x90
    // str r0, [r1]
    // add r1, #0x90
    Camera_Copy(*((u32*)(r5 + 0x24)), *((u32*)r4));
    // add r0, #0x90
    Camera_SetStaticPtr(*((u32*)r4));
    // strb r1, [r4, r0]
}




void ov03_02257134(void) {
    // add r4, #8
    AddWindow(*((u32*)r0), r0, ov03_02259464);
    AddWindow(*((u32*)r5), r4, r7);
    // add r4, #0x10
    // add r7, #8
}




void ov03_02257184(void) {
    // add r0, #0x28
    // add r5, #8
    // add r5, #0x10
}




void ov03_022571AC(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x3c, 0, *((u32*)r0), 1);
    // add r0, #0xfd
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x3c, 2, *((u32*)r4), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x3c, 3, *((u32*)r4), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x3c, 1, 0, 0);
    // str r0, [sp]
    // str r3, [sp, #4]
    LoadUserFrameGfx1(*((u32*)r4), 3, 0x1f, 0xb);
    Options_GetFrame(*((u32*)(r4 + (0x25 << 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r4), 3, 1, 0xa);
}




void ov03_0225725C(void) {
    GfGfx_EngineAGetPlanes();
    // str r0, [r4, r1]
    GetBgPriority(*((u32*)r4), 0);
    // strb r0, [r4, r1]
    GetBgPriority(*((u32*)r4), 1);
    // strb r0, [r4, r1]
    GetBgPriority(*((u32*)r4), 2);
    // strb r0, [r4, r1]
    GetBgPriority(*((u32*)r4), 3);
    // strb r0, [r4, r1]
    SetBgPriority(0, 3);
    SetBgPriority(1, 2);
    SetBgPriority(2, 1);
    SetBgPriority(3, 0);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(2, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(8, 1);
}




void ov03_022572EC(void) {
    SetBgPriority(0, *((u8*)(r0 + (0x9e << 2))));
    SetBgPriority(1, *((u8*)(r4 + 0x00000279)));
    SetBgPriority(2, *((u8*)(r4 + 0x0000027A)));
    SetBgPriority(3, *((u8*)(r4 + 0x0000027B)));
    GfGfx_EngineASetPlanes(*((u32*)(r4 + (0x9f << 2))));
}




void ov03_02257334(void) {
    ov01_021F6B10();
    // strb r1, [r4, r0]
    ov03_022571AC(r4, 0);
    ov03_0225725C(r4);
    ov03_022573D4(r4, *((u32*)(r4 + (0x29 << 4))));
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x81 << 2))), 1);
}




void ov03_02257378(void) {
    // add r1, #0x70
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + (0x22 << 4))), *((u8*)(ov03_022594A0 + (*((u32*)(r0 + (0x22 << 4))) << 2))), (*((u32*)(r0 + (0x22 << 4))) << 2));
    thunk_Sprite_SetPaletteOverride(*((u32*)(r4 + (0x22 << 4))), *((u8*)(ov03_022594A1 + (r5 << 2))));
    Sprite_SetPositionXY(*((u32*)(r4 + (0x22 << 4))), *((u8*)(ov03_0225949E + r5)), *((u8*)(ov03_0225949F + r5)));
}




void ov03_022573D4(void) {
    // add r2, #0x28
    // add r3, #9
    // add r2, r5, r2
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02257402: ; jump table
    // add r0, #0x18
    FillWindowPixelBuffer(r0, 0, (*((u8*)(r0 + (0x9a << 2))) << 1), (0x9a << 2));
    // sub r0, #0x1f
    // add r1, r1, r0
    // sub r0, #0x20
    // sub r0, #0xd
    // add r0, #0xfd
    String_New(0x82, 0xb, (0x29 << 4));
    GetItemDescIntoString(r5, 0xb);
    // add r2, #0x51
    NewMsgDataFromNarc(0, 0x1b, 0xb);
    // add r1, #0x8a
    NewString_ReadMsgData(r5);
    DestroyMsgData(r7);
    // sub r2, #0xde
    NewMsgDataFromNarc(0, 0x1b, 0xb);
    sub_020910B8(((r5 << 0x18) >> 0x18));
    NewString_ReadMsgData(r7, r0);
    DestroyMsgData(r7);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x18
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r4, 0, r6, 0);
    String_Delete(r6);
    ov03_022585A4(r4, r5);
    // sub r2, #0x8c
    Sprite_SetDrawFlag(*((u32*)(r4 + r2)), 0);
    // add r4, #0x18
    ScheduleWindowCopyToVram(r4);
    // add r0, #0x18
    FillWindowPixelBuffer(r4, 0);
    ov03_022585A4(r4, 0x0000FFFF);
    // add r4, #0x18
    ScheduleWindowCopyToVram(r4);
}




void ov03_02257510(void) {
    // tst r2, r1
    // str r1, [r5, r0]
    PlaySE(0x000005DC, *((u8*)(ov03_0225947A + (*((u32*)(r0 + (0x29 << 4))) << 2))), (*((u32*)(r0 + (0x29 << 4))) << 2));
    // tst r2, r1
    // str r1, [r5, r0]
    PlaySE(0x000005DC, *((u8*)(ov03_0225947B + (*((u32*)(r5 + (0x29 << 4))) << 2))), (*((u32*)(r5 + (0x29 << 4))) << 2));
    // tst r2, r1
    ov03_0225761C(6, (0x29 << 4), *((u8*)(ov03_0225947C + (*((u32*)(r5 + (0x29 << 4))) << 2))));
    // str r3, [r5, r2]
    PlaySE(0x000005DC);
    // tst r1, r2
    ov03_0225761C(7, (0x29 << 4), *((u8*)(ov03_0225947D + (*((u32*)(r5 + (0x29 << 4))) << 2))));
    // str r3, [r5, r2]
    PlaySE(0x000005DC);
    ov03_02257378(r5, *((u32*)(r5 + (0x29 << 4))), 0);
    ov03_022573D4(r5, *((u32*)(r5 + (0x29 << 4))));
    // tst r0, r1
    PlaySE((0x25 << 6), *((u32*)(gSystem + 0x48)));
    ov03_022586CC(r5, 0xd, 0x10);
    // tst r0, r1
    ov03_0225761C(r5, *((u32*)(r5 + (0x29 << 4))));
}




void ov03_0225761C(void) {
    // add r2, r1, r1
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02257630: ; jump table
    // add r5, r1, r2
    // add r2, #0x1f
    // str r1, [r4, r2]
    // add r3, #0x1f
    ov03_02257378(*((u32*)(r0 + 0x00000271)), 0, 0x00000271);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x22 << 4))), 0x13);
    PlaySE(0x000005DC);
    ov03_022573D4(r4, *((u32*)(r4 + (0x29 << 4))));
    PlaySE(0x000005DC);
    ov03_022586CC(r4, 0xb, 0x13);
    PlaySE(0x000005DC, (*((u8*)(r4 + 0x00000271)) + 6));
    ov03_022586CC(r4, 0xc, 0x14);
    ov03_02257378(0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x22 << 4))), 7);
    PlaySE((0x25 << 6));
    ov03_022573D4(r4, 8);
    ov03_022586CC(r4, 0xd, 0x10);
}




void ov03_022576F8(void) {
    // strb r1, [r4, r2]
    ov03_02257758(*((u8*)(r0 + 0x00000271)), *((u8*)(r0 + (0x00000271 - 1))));
    // str r0, [r4, r1]
    // sub r1, #8
    ov03_022573D4(r4, *((u32*)(r4 + (0xa6 << 2))));
}




void ov03_02257728(void) {
    // strb r1, [r4, r2]
    ov03_02257758(*((u8*)(r0 + 0x00000271)), *((u8*)(r0 + (0x00000271 - 1))));
    // str r0, [r4, r1]
    // sub r1, #8
    ov03_022573D4(r4, *((u32*)(r4 + (0xa6 << 2))));
}




void ov03_02257758(void) {
    // str r0, [sp]
    // str r4, [sp, #8]
    // sub r7, r2, r1
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r3, [sp, #4]
    // add r6, r3, r6
    // ldr r3, [sp, #8]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
}




void ov03_022577D0(void) {
    // ldr r0, [r4, r0]
}




void ov03_022577F4(void) {
    // ldr r0, [r0, r1]
    // ldr r0, [r0, r1]
}




void ov03_02257814(void) {
    // sub r1, #0x12
    // add r2, #0xd
    // sub r0, #0x2f
    // add r1, r2, r1
    PokeathlonSave_GetUnkB7C_AtIndex(*((u32*)(r0 + 0x00000283)), *((u8*)(r0 + 0x00000283)), *((u32*)(r0 + 0x00000283)));
    // sub r0, #0x2f
    // sub r1, #0x8a
    // sub r1, r2, r1
    PokeathlonSave_GetUnkB78_AtIndex(*((u32*)(r5 + r1)), *((u16*)(r5 + (r1 + 1))));
}




void ov03_02257874(void) {
    Sprite_GetDrawFlag(*((u32*)(r0 + (0x7e << 2))));
    // strh r0, [r5, r1]
    // sub r1, #0x48
    Sprite_GetDrawFlag(*((u32*)(r5 + (0x91 << 2))), (0x91 << 2));
    // strh r0, [r5, r1]
    // sub r1, #0x4e
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000246)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x7f << 2))), 0);
    ov03_022586BC(r5, 1);
    // strh r4, [r5, r1]
    // strh r2, [r5, r0]
    ov03_02258120(r5, *((u16*)(r5 + (0xa1 << 2))), 1);
    // str r0, [r5, r1]
    // sub r1, #9
    ov03_022577F4(r5, *((u8*)(r5 + (0xa3 << 2))));
    ov03_02257814(r5, r0);
    // str r1, [r5, r0]
    _u32_div_f(r4, *((u32*)(r5 + (0xa3 << 2))));
    // strh r0, [r5, r1]
    // strh r0, [r5, r1]
    // add r0, #0xfd
    ov03_02257CA0(r5, (0xa2 << 2));
    ov03_022582C0(r5, 1);
    // str r1, [r5, r0]
}




void ov03_02257944(void) {
    // ldrb r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov03_02257978(void) {
    // add r0, #0xfd
    // add r0, #0x73
    // sub r1, r1, r3
    ApricornBox_CountApricorn(*((u32*)(r0 + 0x000001E5)), r0, 0x000001E5);
    // add r1, #0x38
    Bag_GetQuantity(*((u32*)(r2 + (0x93 << 2))), *((u16*)(r2 + (0x93 << 2))), 0xb);
    // sub r0, #0x37
    SealCase_CountSealOccurrenceAnywhere(*((u32*)(r2 + r3)), *((u16*)(r2 + (r3 + 1))));
}




void ov03_022579E0(void) {
    // add r0, #0x48
    // add r0, #0x38
    // add r0, #0x58
    // str r1, [r4, r0]
    // sub r0, #0x58
}




void ov03_02257A70(void) {
    // add r0, #0x48
    // add r0, #0x38
    // add r0, #0x58
    // add r1, #0x4c
    // add r1, #0x4a
    // str r1, [r4, r0]
    // sub r0, #0x6c
}




void ov03_02257ADC(void) {
    // add r0, r4, r1
    sub_020881C0(*((u16*)(r0 + (0x00000286 + 2))));
    PlaySE(0x00000637);
    // str r1, [r4, r0]
    // tst r0, r1
    PlaySE(0x000005DC, *((u32*)(gSystem + 0x48)));
    ov03_022586CC(r4, 0x12, 8);
    // tst r0, r1
    PlaySE((0x25 << 6));
    ov03_022586CC(r4, 0xd, 9);
}




void ov03_02257B4C(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02257B60: ; jump table
    // ldrsh r0, [r4, r0]
    ov03_022587E8(((0xa2 << 2) - 2), *((u16*)(r0 + (0xa2 << 2))), 0xa);
    // strh r0, [r4, r1]
    // sub r1, #0x56
    Sprite_SetAnimationFrame(*((u32*)(r4 + 0x00000286)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x23 << 4))), 0xd);
    PlaySE(0x00000637);
    // str r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    ov03_022587E8(((0xa2 << 2) - 2), *((u16*)(r4 + (0xa2 << 2))), 1);
    // strh r0, [r4, r1]
    // sub r1, #0x52
    Sprite_SetAnimationFrame(*((u32*)(r4 + 0x00000286)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x8d << 2))), 0xd);
    PlaySE(0x00000637);
    // str r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // mvn r2, r2
    ov03_022587E8(((0xa2 << 2) - 2), *((u16*)(r4 + (0xa2 << 2))), 9);
    // strh r0, [r4, r1]
    // sub r1, #0x4e
    Sprite_SetAnimationFrame(*((u32*)(r4 + 0x00000286)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x8e << 2))), 0xf);
    PlaySE(0x00000637);
    // str r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // mvn r2, r2
    ov03_022587E8(((0xa2 << 2) - 2), *((u16*)(r4 + (0xa2 << 2))), 0);
    // strh r0, [r4, r1]
    // sub r1, #0x4a
    Sprite_SetAnimationFrame(*((u32*)(r4 + 0x00000286)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + (0x8f << 2))), 0xf);
    PlaySE(0x00000637);
    // str r1, [r4, r0]
    PlaySE(0x000005DC, 6);
    ov03_022586CC(r4, 0x12, 8);
    PlaySE((0x25 << 6));
    ov03_022586CC(r4, 0xd, 9);
}




void ov03_02257CA0(void) {
    // sub r0, #0x37
    Bag_HasSpaceForItem(*((u32*)(r0 + 0x00000283)), *((u16*)(r0 + (0x00000283 + 1))), *((u16*)(r0 + (0x00000283 + 3))), 0xb);
    // add r0, #0xfd
    // sub r0, #0x9e
    // sub r0, #0x98
    // sub r0, #0x2b
    // sub r2, #0x9e
    // sub r1, r1, r2
    ApricornBox_CountApricorn(*((u32*)(r4 + r2)), *((u16*)(r4 + (r2 + 1))));
    // str r1, [r4, r0]
    // add r2, #0x3a
    Bag_HasSpaceForItem(*((u32*)(r4 + (0x93 << 2))), 0xc, *((u16*)(r4 + (0x93 << 2))), 0xb);
    // str r1, [r4, r0]
    ov03_022582C0(r4, 2);
    // str r1, [r4, r0]
    // sub r0, #0x37
    // ldrsh r2, [r4, r2]
    SealCase_CheckSealQuantity(*((u32*)(r4 + r2)), *((u16*)(r4 + (r2 + 1))), (r2 + 3));
    // strh r1, [r4, r0]
    // add r0, #0x12
    // str r1, [r4, r0]
}




void ov03_02257D6C(void) {
    // str r1, [r4, r0]
}




void ov03_02257D90(void) {
    // str r1, [r4, r0]
    // add r0, #0x58
    // add r1, #0x4c
    // add r1, #0x4a
    // str r1, [r4, r0]
}




void ov03_02257DF8(void) {
    // add r0, #0xfd
    // sub r3, #0x2f
    PokeathlonSave_SubAthletePoints(*((u32*)(r0 + 0x00000283)), ((r1 << 0x10) >> 0x10), r0, 0x00000283);
    // add r1, #9
    // ldrsh r1, [r2, r1]
    // sub r0, #0x3b
    PlayerProfile_SubMoney(*((u32*)(r2 + r3)), ((r3 + 3) * *((u32*)(r2 + r3))));
}




void ov03_02257E34(void) {
    // add r0, #0x73
    // sub r1, r1, r2
    ApricornBox_GiveApricorn(*((u32*)(r0 + 0x000001E5)), 1, r0);
    // add r1, #0x38
    Bag_AddItem(*((u32*)(r3 + (0x93 << 2))), *((u16*)(r3 + (0x93 << 2))), 1, 0xb);
}




void ov03_02257E6C(void) {
    IsPrintFinished(*((u8*)(r0 + (0xa << 6))));
    // sub r0, #0x37
    Bag_AddItem(*((u32*)(r4 + 0x00000283)), *((u16*)(r4 + (0x00000283 + 1))), *((u16*)(r4 + (0x00000283 + 3))), 0xb);
    ov03_02257E34(r4, *((u16*)(r4 + (r2 + 1))));
    // add r1, #0x3c
    // add r2, #0x1d
    // add r1, r3, r1
    PokeathlonSave_SetUnkB7C_AtIndex(*((u32*)(r4 + (0x95 << 2))), *((u8*)(r4 + (0x95 << 2))), (0x95 << 2), *((u32*)(r4 + (0x95 << 2))));
    // sub r0, #0x2f
    // sub r2, #0x8a
    // sub r1, r1, r2
    PokeathlonSave_SetUnkB78_AtIndex(*((u32*)(r4 + r2)), *((u16*)(r4 + (r2 + 1))));
    // sub r0, #0x37
    // ldrsh r2, [r4, r2]
    GiveOrTakeSeal(*((u32*)(r4 + r2)), *((u16*)(r4 + (r2 + 1))), (r2 + 3));
    // ldrsh r1, [r4, r1]
    ov03_02257DF8(r4, (((0xa3 << 2) - 6) * *((u32*)(r4 + (0xa3 << 2)))), *((u32*)(r4 + (0xa3 << 2))));
    // add r2, #0x30
    // add r3, #0x2a
    // ldrsh r2, [r4, r3]
    GameStats_Add(*((u32*)(r4 + (0x97 << 2))), 0x24, ((0x97 << 2) * *((u32*)(r4 + (0x97 << 2)))), (0x97 << 2));
}




void ov03_02257F24(void) {
    IsPrintFinished(*((u8*)(r0 + (0xa << 6))));
    // tst r0, r1
    sub_02066D80(*((u32*)(r4 + ((0x99 << 2) - 4))), *((u32*)(r4 + (0x99 << 2))));
    // ldrsh r0, [r4, r0]
    // sub r1, #0x37
    Bag_AddItem(*((u32*)(r4 + 0x00000283)), 0xc, 1, 0xb);
    // str r1, [r4, r0]
    // sub r0, #0x3c
    GameStats_Inc(*((u32*)(r4 + (0xa6 << 2))), 0x33);
    // add r0, #0x58
    ClearFrameAndWindow2(r4, 0);
    ov03_02258560(r4, 0);
    // add r1, #0x4c
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x7e << 2))), *((u16*)(r4 + (0x7e << 2))));
    // add r1, #0x4a
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x7f << 2))), *((u16*)(r4 + (0x7f << 2))));
    ov03_022586BC(r4, 0);
    ov03_022582C0(r4, 0);
    // str r0, [r4, r1]
}




void ov03_02257FF8(void) {
    IsPrintFinished(*((u8*)(r0 + (0xa << 6))));
    // tst r0, r1
    // add r0, #0x58
    ClearFrameAndWindow2(r4, 0);
    ov03_02258560(r4, 0);
    // add r1, #0x4c
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x7e << 2))), *((u16*)(r4 + (0x7e << 2))));
    // add r1, #0x4a
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x7f << 2))), *((u16*)(r4 + (0x7f << 2))));
    ov03_022586BC(r4, 0);
    ov03_022582C0(r4, 0);
    // str r1, [r4, r0]
}




void ov03_02258078(void) {
    IsPrintFinished(*((u8*)(r0 + (0xa << 6))));
    // tst r0, r1
    // add r0, #0x58
    ClearFrameAndWindow2(r4, 0);
    ov03_02258560(r4, 0);
    // add r1, #0x4c
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x7e << 2))), *((u16*)(r4 + (0x7e << 2))));
    // add r1, #0x4a
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x7f << 2))), *((u16*)(r4 + (0x7f << 2))));
    ov03_022586BC(r4, 0);
    ov03_022582C0(r4, 0);
    // str r1, [r4, r0]
}




void ov03_022580F8(void) {
    // add r0, r1, r0
}




void ov03_02258120(void) {
    GetItemAttr(r1, 0, 0xb, 0x00000283);
    // add r0, #0xfd
    // sub r1, #0x17
    // sub r3, #0x13
    ov03_022580F8(r1, *((u32*)(r2 + r3)), *((u8*)(r2 + r3)));
}




void ov03_02258164(void) {
}




void ov03_02258170(void) {
    ov01_021F6B10();
    ov01_021F6B00(r5);
    // strb r1, [r4, r0]
    // add r0, #0x90
    Camera_Copy(*((u32*)r4), *((u32*)(r5 + 0x24)));
    // add r0, #0x90
    Camera_Delete(*((u32*)r4));
    Camera_SetStaticPtr(*((u32*)(r5 + 0x24)));
    ov03_02258288(r4);
}




void ov03_022581BC(void) {
    // add r0, #0x94
    UnkFieldSpriteRenderer_ov01_021E7FDC_Init(ov03_0225946C, 0x13, 0xb);
    // str r0, [sp]
    // add r0, #0x94
    // str r0, [sp]
    // ldr r0, [sp]
    ov01_021E81F0(r7, ov03_022594F8);
    // str r0, [r5, r1]
    // add r4, #0x28
    // add r0, #0x34
    Sprite_SetPriority(*((u32*)(r7 + (0x7e << 2))), 1);
    Sprite_SetPriority(*((u32*)(r7 + (9 << 6))), 1);
    Sprite_SetAnimActiveFlag(*((u32*)(r7 + (0x22 << 4))), 1);
    Sprite_SetDrawFlag(*((u32*)(r7 + (2 << 8))), 0);
    Sprite_SetDrawFlag(*((u32*)(r7 + (0x7e << 2))), 0);
    Sprite_SetDrawFlag(*((u32*)(r7 + (0x7f << 2))), 0);
    Sprite_SetDrawFlag(*((u32*)(r7 + (0x81 << 2))), 0);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    ov03_022582C0(r7, 0);
    ov03_02257378(r7, *((u32*)(r7 + (0x29 << 4))), 0);
    ov03_02257758(r7, *((u8*)(r7 + 0x00000271)), *((u8*)(r7 + (0x00000271 - 1))));
}




void ov03_02258288(void) {
    // str r0, [sp]
    // str r6, [r5, r7]
    // ldr r0, [sp]
    // add r0, #0x94
    // ldr r0, [sp]
    // add r0, #0x94
    // str r0, [sp]
    // str r1, [r0]
}




void ov03_022582C0(void) {
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #0x18]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldrsh r0, [r4, r0]
    // add r1, sp, #0x18
    // str r0, [sp, #0x20]
    Sprite_SetMatrix(*((u32*)(r0 + (0x82 << 2))), (0xa6 << 0xc));
    // add r4, #0x28
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)((*((u8*)(r5 + 0x00000271)) + 6) + (0x7e << 2))), 1);
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7e << 2))), 0);
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7e << 2))), 0);
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7e << 2))), 1);
    // add r1, r0, r6
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7e << 2))), 1);
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7e << 2))), 0);
    // add r2, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r2 + (0x7e << 2))));
    Sprite_SetAnimationFrame(*((u32*)(r5 + (0x8b << 2))), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x8b << 2))), 6);
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r7, [sp, #0xc]
    // add r1, r5, r0
    // add r1, sp, #0xc
    Sprite_SetMatrix(*((u32*)(*((u8*)(ov03_02259850 + 2)) + (0x7e << 2))), *((u8*)(ov03_02259850 + 2)));
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7e << 2))), 1);
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7e << 2))), 0);
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(*((u16*)(r5 + (0xa2 << 2))) + (0x7e << 2))), 0);
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7e << 2))), 1);
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(*((u16*)(r5 + (0xa2 << 2))) + (0x7e << 2))), 0);
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7e << 2))), 1);
    // add r2, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r2 + (0x7e << 2))));
    Sprite_SetAnimationFrame(*((u32*)(r5 + (0x8b << 2))), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x8b << 2))), 0x1a);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp]
    // add r1, r5, r0
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r1 + (0x7e << 2))));
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7e << 2))), 1);
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + (0x7e << 2))), 0);
}




void ov03_02258560(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov03_022585A4(void) {
    // sub r0, #0x7f
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x00000283)), 0);
    SpriteResourceCollection_Find(*((u32*)(r4 + (0x71 << 2))), 2);
    GetItemIndexMapping(r6, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    ReplaceCharResObjFromNarc(*((u32*)(r4 + (0x71 << 2))), r5, 0x12, r0);
    sub_0200AE8C(r5);
    SpriteResourceCollection_Find(*((u32*)(r4 + (0x72 << 2))), 1);
    GetItemIndexMapping(r6, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    ReplacePlttResObjFromNarc(*((u32*)(r4 + (0x72 << 2))), r5, 0x12, r0);
    sub_0200B084(r5);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x81 << 2))), 1);
}




void ov03_02258648(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov03_022586BC(void) {
    // mov r2, #2
    // lsl r2, r2, #8
    // ldr r3, _022586C8 ; =thunk_Sprite_SetPaletteOverride
    // ldr r0, [r0, r2]
    // bx r3
    // nop
    // _022586C8: .word thunk_Sprite_SetPaletteOverride
    // TODO: decompile
}




void ov03_022586CC(void) {
    // add r3, r0, r3
    // strb r1, [r3]
}




void ov03_022586E0(void) {
    // add r4, r0, r1
    // sub r1, #0xa4
    // add r0, r0, r2
    // sub r1, #0xa4
    // add r0, r0, r2
}




void ov03_0225874C(void) {
}




void ov03_02258764(void) {
    IsPaletteFadeFinished();
    TaskManager_GetFieldSystem(r6);
    TaskManager_GetEnvironment(r6);
    Save_Bag_Get(*((u32*)(r5 + 0xc)));
    Bag_CreateView(ov03_022597F0, 0xb);
    *((u32*)(r4 + 4)) = r0;
    // add r0, r5, r0
    // str r0, [sp]
    // add r3, #0x94
    sub_0207789C(*((u32*)(r4 + 4)), *((u32*)(r5 + 0xc)), 2, *((u32*)r5));
    Bag_LaunchApp(r5, *((u32*)(r4 + 4)));
    TaskManager_Jump(r6, sub_02092B04, r4);
    // strb r1, [r4, r0]
}




void ov03_022587D4(void) {
}




void ov03_022587E8(void) {
    // add r0, r0, r2
    // add r0, r0, r2
}




void ov03_02258810(void) {
}




void ov03_02258814(void) {
    // ldr r3, _02258820 ; =sub_0203410C
    // add r2, r0, #0
    // ldr r0, _02258824 ; =ov03_022597FC
    // mov r1, #1
    // bx r3
    // nop
    // _02258820: .word sub_0203410C
    // _02258824: .word ov03_022597FC
    // TODO: decompile
}




void ov03_02258828(void) {
}




void ov03_02258830(void) {
}




void ov03_0225884C(void) {
}




void ov03_02258878(void) {
    Heap_AllocAtEnd(0xb, 0x000005D8);
    MI_CpuFill8(0, 0x000005D8);
}




void ov03_02258894(void) {
    // blx r1
}




void ov03_022588B0(void) {
    // sub r0, r1, r0
}




void ov03_022588D4(void) {
    sub_02037B38(0xc);
    sub_02034818(1);
    SafariZone_GetAreaSet(*((u32*)(r4 + 4)), 0);
    sub_020376D4(0x16, r0);
    sub_02037AC0(0xd);
    ov03_02258810(ov03_022588B0, r4);
}




void ov03_02258910(void) {
    ov03_02258878();
    Save_SafariZone_Get(*((u32*)(r5 + 0xc)));
    *((u32*)(r4 + 4)) = r0;
    ov03_02258814(r4);
    sub_02037AC0(0xc);
    ov03_02258810(ov03_022588D4, r4);
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov03_02258894, r4);
}




void ScrCmd_716(void) {
    // add r0, #0x80
    FieldSysGetAttrAddr(*((u32*)r0), 0x14);
    // add r0, #0x80
    SafariAreaCustomizer_LaunchApp(*((u32*)r5));
    // str r0, [r4]
    SetupNativeScript(r5, ScrNative_WaitApplication_DestroyTaskData);
}




u32 ScrCmd_717(void) {
}




void ScrCmd_718(void) {
    // add r0, #0x80
    // add r5, #0x80
}




u32 ScrCmd_719(void) {
}




void ScrCmd_720(void) {
    // add r0, #0x80
    // add r4, #0x80
    // str r0, [sp]
    // str r0, [sp, #0x14]
    // add r2, r6, r7
    // sub r2, #0x20
    // asr r1, r2, #4
    // add r1, r2, r1
    // ldr r2, [sp, #0x14]
    // asr r1, r1, #5
    // add r2, r2, r0
    // sub r2, #0x20
    // asr r0, r2, #4
    // add r0, r2, r0
    // asr r2, r0, #5
    // add r0, r2, r0
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r2, sp, #0x20
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // ldr r0, [sp]
    // add r4, r1, r0
    // add r0, sp, #0x1c
    // mov ip, r0
    // add r0, sp, #0x1c
    // mov r0, ip
    // sub r1, r0, r1
    // mov r0, ip
    // mov r0, ip
    // add r7, sp, #0x1c
    // add r0, r1, r0
    // ldr r0, [sp, #4]
    // add r0, r0, r6
    // add r2, r0, r1
    // ldr r0, [sp, #8]
    // add r3, r0, r3
    // add r3, r3, r0
    // strh r0, [r3]
    // add r0, r0, r5
    // add r1, sp, #0x1c
    // mov r0, ip
    // mov ip, r0
    // sub r6, #0x20
    // sub r1, r0, r1
    // mov r0, ip
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // add r0, sp, #0x24
    // ldr r0, [sp, #0x2c]
    // asr r1, r0, #0xc
    // add r1, #0xf8
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r3, r0, #0x10
    // ldr r0, [sp, #0x24]
    // asr r1, r0, #0xc
    // add r1, #0xf8
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r1, r0, #0x10
    // add r6, sp, #0x1c
    // add r2, r2, r6
    // sub r0, r0, r1
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
}




u32 ScrCmd_721(void) {
}




void ScrCmd_791(void) {
    // add r1, sp, #0x14
    // strh r3, [r1]
    *((u16*)(r1 + 2)) = *((u16*)(ov03_02259808 + 2));
    // add r1, #0x80
    *((u32*)(r0 + 8)) = (*((u32*)(r0 + 8)) + 1);
    // str r1, [sp, #8]
    ScriptReadHalfword(*((u8*)*((u32*)(r0 + 8))), *((u32*)(r0 + 8)), *((u16*)ov03_02259808));
    // add r5, #0x80
    GetVarPointer(*((u32*)r5), r0);
    // str r0, [sp]
    SaveArray_Party_Get(*((u32*)(r4 + 0xc)));
    // str r0, [sp, #4]
    Party_GetCount();
    Save_PlayerData_GetProfile(*((u32*)(r4 + 0xc)));
    PlayerProfile_GetTrainerID();
    // str r0, [sp, #0xc]
    MapHeader_GetMapSec(0x00000165);
    // ldr r0, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    Party_GetMonByIndex(((r0 << 0x10) << 1), 0);
    GetMonData(0x4c, 0);
    GetMonData(r4, 7, 0);
    // ldr r1, [sp, #0xc]
    GetMonData(r4, 5, 0);
    // ldr r1, [sp, #0x10]
    // add r2, sp, #0x14
    GetMonData(r4, 0x98, 0);
    GetMonData(r4, 0x99, 0);
    // ldr r0, [sp]
    // strh r1, [r0]
    // ldr r1, [sp]
    // strh r0, [r1]
}




u32 ScrCmd_792(void) {
}




void ov03_02258CFC(void) {
    TaskManager_GetFieldSystem();
    Heap_Alloc(0xb, 0x40);
    // str r0, [r4]
    *((u32*)(r0 + 4)) = r6;
    *((u32*)(r0 + 0xc)) = *((u32*)(r5 + 8));
    *((u32*)(r0 + 8)) = r5;
    Save_Pokeathlon_Get(*((u32*)(r5 + 0xc)));
    *((u32*)(r4 + 0x20)) = r0;
    PokeathlonSave_GetUnkB00();
    *((u32*)(r4 + 0x24)) = r0;
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov03_02258D3C, r4);
}




void ov03_02258D3C(void) {
    // str r0, [r4]
}




void ov03_02258D88(void) {
    System_GetTouchNew();
    PlaySE(0x000005DD);
    // add r0, r1, r0
    MenuInputStateMgr_SetState((0x43 << 2), 1);
    // tst r0, r1
    // add r0, r1, r0
    MenuInputStateMgr_SetState((0x43 << 2), 0);
    // tst r0, r1
    PlaySE(0x000005DD, *((u32*)(gSystem + 0x48)));
}




void ov03_02258DE8(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, #0x10
    AddWindowParameterized(*((u32*)(r0 + 0xc)), r0, 3, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r4 + 0xc)), 3, 0x000003D9, 0xb);
    // add r0, #0x10
    DrawFrameAndWindow1(r4, 1, 0x000003D9, 0xb);
    // add r0, #0x10
    FillWindowPixelBuffer(r4, 0xf);
    // add r2, #0xfa
    NewMsgDataFromNarc(0, 0x1b, 0x1b, 4);
    *((u32*)(r4 + 0x28)) = r0;
    MessageFormat_New_Custom(3, 0x10, 4);
    *((u32*)(r4 + 0x2c)) = r0;
    String_New(0x80, 4);
    *((u32*)(r4 + 0x30)) = r0;
    String_New(0x80, 4);
    *((u32*)(r4 + 0x34)) = r0;
    NewString_ReadMsgData(*((u32*)(r4 + 0x28)), 1);
    *((u32*)(r4 + 0x38)) = r0;
    NewString_ReadMsgData(*((u32*)(r4 + 0x28)), 3);
    *((u32*)(r4 + 0x3c)) = r0;
}




void ov03_02258E88(void) {
    // add r0, #0x10
    // add r0, #0x10
}




void ov03_02258ECC(void) {
}




void ov03_02258EE8(void) {
    // str r0, [sp]
    ov03_02258ECC(r0, (r1 * 0xa), ov03_0225980C);
    ov03_02258F8C(r6, r5, r4);
    ov03_02258F48(r6, r5);
    // ldr r0, [sp]
    // add r5, #0x10
    // add r0, #0x10
    ScheduleWindowCopyToVram(r6, ov03_0225980C);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r6 + 0xc)), 3);
}




void ov03_02258F48(void) {
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x10
    AddTextPrinterParameterizedWithColor(r0, 0, *((u32*)(r0 + 0x3c)), 8);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x10
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r5 + 0x38)), 8);
}




void ov03_02258F8C(void) {
    ReadMsgDataIntoString(*((u32*)(r0 + 0x28)), (r2 + 4), *((u32*)(r0 + 0x34)));
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x10
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r5 + 0x34)), 8);
    ov03_02259070(*((u32*)(r5 + 0x24)), r6);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x28)), 2, *((u32*)(r5 + 0x30)));
    _u32_div_f(r7, 0x3c);
    _u32_div_f(r7, 0x3c);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x2c)), 0, 0x000003E7, 3);
    // str r3, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x2c)), 1, r7, 2);
    StringExpandPlaceholders(*((u32*)(r5 + 0x2c)), *((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x30)));
    // str r3, [sp]
    String16_FormatInteger(*((u32*)(r5 + 0x34)), r7, 7, 1);
    FontID_String_GetWidth(0, *((u32*)(r5 + 0x34)), 0);
    // sub r3, r1, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x10
    // sub r3, #8
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r5 + 0x34)));
}




void ov03_02259070(void) {
    // sub r1, #0xa
    // add r0, r0, r1
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02259092: ; jump table
    // add r3, r3, r1
}



