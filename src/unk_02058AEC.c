/* Decompiled from asm/unk_02058AEC.s */
#include "global.h"

void sub_02058AEC(void) {
    // ldr r0, [sp, #0x24]
    // str r2, [sp]
    // str r3, [sp, #4]
    Heap_AllocAtEnd(0x3c);
    MI_CpuFill8(0, 0x3c);
    Save_PlayerData_GetProfile(*((u32*)(r6 + 0xc)));
    sub_0208AD34(r4, r0);
    SaveArray_IsNatDexEnabled(r5);
    *((u32*)(r4 + 0x1c)) = r0;
    sub_02088288(r5);
    *((u32*)(r4 + 0x2c)) = r0;
    Save_PlayerData_GetOptionsAddr(r5);
    *((u32*)(r4 + 4)) = r0;
    // ldr r0, [sp]
    // str r0, [r4]
    *((u8*)(r4 + 0x11)) = 1;
    // ldr r0, [sp, #4]
    *((u8*)(r4 + 0x14)) = 1;
    Party_GetCount(*((u32*)r4));
    *((u8*)(r4 + 0x13)) = r0;
    *((u16*)(r4 + 0x18)) = 0;
    // ldr r0, [sp, #0x20]
    *((u8*)(r4 + 0x12)) = 0;
    Save_SpecialRibbons_Get(r5);
    *((u32*)(r4 + 0x20)) = r0;
    *((u32*)(r4 + 0x30)) = 0;
    sub_0208828C(r5);
    *((u32*)(r4 + 0x34)) = r0;
    sub_02089D40(r4, _020FC7CC);
    FieldSystem_LaunchApplication(r6, gOverlayTemplate_PokemonSummary, r4);
    // str r4, [r7]
}




void sub_02058B84(void) {
    Heap_Alloc(r1, 0x44);
    MI_CpuFill8(0, 0x44);
    Save_PlayerData_GetOptionsAddr(*((u32*)(*((u32*)(r5 + 0x24)) + 0xc)));
    *((u32*)(r4 + 0xc)) = r0;
    // add r0, #0xa4
    *((u32*)(r4 + 0x14)) = *((u32*)*((u32*)(r5 + 0x24)));
    SaveArray_Party_Get(*((u32*)(*((u32*)(r5 + 0x24)) + 0xc)));
    // str r0, [r4]
    Save_Bag_Get(*((u32*)(*((u32*)(r5 + 0x24)) + 0xc)));
    *((u32*)(r4 + 4)) = r0;
    // add r0, r1, r0
    *((u32*)(r4 + 0x20)) = (0x43 << 2);
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, #0xa4
    LinkBattleRuleset_GetRuleValue(*((u32*)*((u32*)(r5 + 0x24))), 1);
    // add r1, #0x36
    // and r0, r2
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, #0x36
    // add r1, #0x36
    // add r0, #0x36
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, #0x36
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, #0x37
    // strb r1, [r0]
    // add r0, #0x3c
    // add r0, #0x26
    // strb r1, [r0]
    // add r0, r5, r2
    // add r0, #0x3d
    // add r0, r4, r2
    // add r0, #0x30
    // strb r1, [r0]
    FieldSystem_LaunchApplication(*((u32*)(r5 + 0x24)), gOverlayTemplate_PartyMenu, r4);
    *((u32*)(r5 + 4)) = r4;
}




void sub_02058C80(void) {
    // add r0, #0x30
    // add r1, #0x3d
    // add r0, #0x26
    // add r0, #0x26
    // add r0, #0x3c
    // strb r1, [r0]
}




void sub_02058CD8(void) {
    // add r0, #0x3c
    // strb r1, [r0]
    // str r0, [r4]
}




void sub_02058D04(void) {
}




void sub_02058D24(void) {
}




void sub_02058D4C(void) {
    TaskManager_GetEnvironment();
    TaskManager_GetFieldSystem(r5);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02058D72: ; jump table
    // add r0, #0x43
    // add r0, #0x43
    // strb r1, [r0]
    // add r0, #0x43
    *((u32*)(r4 + 0x34)) = 1;
    sub_02057E08(1, (*((u8*)r4) - 1));
    ReadMsgDataIntoString(*((u32*)(r4 + 0x2c)), 1, *((u32*)(r4 + 0xc)));
    sub_02059478(r4, *((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 2;
    IsPrintFinished(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    sub_02037AC0(0x5d);
    *((u32*)(r4 + 0x34)) = 3;
    sub_02037B38(0x5d);
    *((u32*)(r4 + 0x34)) = 7;
    sub_0205F55C(*((u32*)(*((u32*)(r4 + 0x24)) + 0x3c)));
    // blx r2
    // tst r0, r1
    *((u32*)(r4 + 0x34)) = 4;
    sub_02037AC0(0x5c, *((u32*)(gSystem + 0x48)), *((u32*)(r4 + 8)));
    // add r4, #0x43
    // strb r0, [r4]
    sub_02037B38(0x5d);
    *((u32*)(r4 + 0x34)) = 7;
    sub_0205F55C(*((u32*)(*((u32*)(r4 + 0x24)) + 0x3c)));
    // blx r2
    // add r0, #0x43
    // add r0, #0x43
    // strb r1, [r0]
    // add r0, #0x43
    *((u32*)(r4 + 0x34)) = 8;
    sub_02059650(r4, (*((u8*)r4) - 1), *((u32*)(r4 + 8)));
    Heap_Free(r4);
    sub_02059650(r4);
    Heap_Free(r4);
    sub_02057F70();
    sub_02037B38(0x5d);
    *((u32*)(r4 + 0x34)) = 5;
    // blx r2
    // blx r2
    *((u32*)(r4 + 0x34)) = 5;
    *((u32*)(r4 + 0x34)) = 0xa;
    // add r4, #0x44
    // strb r0, [r4]
    // add r1, #0x44
    // add r0, #0x44
    // add r4, #0x44
    // strb r0, [r4]
    PlayerAvatar_GetMapObject(*((u32*)((*((u8*)r4) - 1) + 0x40)), *((u8*)r4), *((u32*)(r4 + 8)));
    MapObject_IsMovementPaused();
    *((u32*)(r4 + 0x34)) = 0xb;
    sub_02057E08(0xb);
    ReadMsgDataIntoString(*((u32*)(r4 + 0x2c)), 0xd, *((u32*)(r4 + 0xc)));
    sub_02059478(r4, *((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0xc;
    IsPrintFinished(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x34)) = 0xd;
    ov01_021E636C(0);
    *((u32*)(r4 + 0x34)) = 0xe;
    // add r0, #0x43
    // add r0, #0x43
    // strb r1, [r0]
    // add r0, #0x43
    sub_02057E08(*((u8*)r4), (*((u8*)r4) - 1));
    *((u32*)(r4 + 0x34)) = 0xf;
    sub_020594C8(r4, 0);
    sub_02058B84(r4, 0xb);
    *((u32*)(r4 + 0x34)) = 0x10;
    sub_02058C80(r4, *((u32*)(r4 + 0x24)));
    *((u32*)(r4 + 0x34)) = 0x14;
    *((u32*)(r4 + 0x34)) = 0x13;
    *((u32*)(r4 + 0x34)) = 0x11;
    SaveArray_Party_Get(*((u32*)(*((u32*)(r4 + 0x24)) + 0xc)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0x3c
    sub_02058AEC(r4, *((u32*)(r4 + 0x24)), r0, *((u8*)r4));
    *((u32*)(r4 + 0x34)) = 0x12;
    sub_02058CD8(r4, *((u32*)(r4 + 0x24)));
    *((u32*)(r4 + 0x34)) = 0xf;
    FieldSystem_LoadFieldOverlay(*((u32*)(r4 + 0x24)));
    // add r0, #0x88
    // add r0, #0x43
    // strb r1, [r0]
    *((u32*)(r4 + 0x34)) = 0x15;
    *((u32*)(r4 + 0x34)) = 0x1a;
    // add r0, #0x3d
    sub_0203996C(r4, 5);
    sub_02058D04(r4);
    // add r0, #0x43
    // strb r1, [r0]
    *((u32*)(r4 + 0x34)) = 0;
    FieldSystem_LoadFieldOverlay(*((u32*)(r4 + 0x24)), 5);
    // add r0, #0x88
    *((u32*)(r4 + 0x34)) = 0x16;
    *((u32*)(r4 + 0x34)) = 0x1a;
    sub_02058D04(r4);
    *((u32*)(r4 + 0x34)) = 8;
    // add r0, #0x44
    // add r0, #0x44
    // strb r1, [r0]
    // add r0, #0x44
    *((u32*)(r4 + 0x34)) = 0x18;
    sub_02057E08(0x18, (*((u8*)r4) - 1));
    ReadMsgDataIntoString(*((u32*)(r4 + 0x2c)), 0x13, *((u32*)(r4 + 0xc)));
    sub_02059478(r4, *((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0x19;
    IsPrintFinished(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    *((u32*)(r4 + 0x34)) = 0xd;
    sub_02058D04(r4);
    sub_02058D24();
    *((u32*)(r4 + 0x34)) = 5;
    // add r0, #0x82
    // strb r1, [r0]
    // add r1, #0x82
    sub_020596A8(r4, *((u8*)r4));
    sub_02037AC0(0);
    BufferPlayersName(*((u32*)(r4 + 0x28)), 0, *((u32*)(r4 + 0x74)));
    ReadMsgDataIntoString(*((u32*)(r4 + 0x2c)), 0xe, *((u32*)(r4 + 0xc)));
    StringExpandPlaceholders(*((u32*)(r4 + 0x28)), *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0xc)));
    sub_02059478(r4, *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0x1b;
    IsPrintFinished(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    sub_02058D24();
    *((u32*)(r4 + 0x34)) = 5;
    sub_02037B38(0);
    sub_020596F0(r4);
    *((u32*)(r4 + 0x34)) = 0x1c;
    sub_02059738(r4);
    sub_02037AC0(1);
    *((u32*)(r4 + 0x34)) = 0x1d;
    sub_02037B38(1);
    sub_02059748(r4);
    // add r1, #0x83
    // strb r0, [r1]
    // add r0, #0x82
    // add r0, #0x83
    ReadMsgDataIntoString(*((u32*)(r4 + 0x2c)), 0x14, *((u32*)(r4 + 0xc)));
    sub_02059478(r4, *((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0x1e;
    *((u32*)(r4 + 0x34)) = 0x2a;
    IsPrintFinished(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    // add r0, #0x89
    // strb r1, [r0]
    ReadMsgDataIntoString(*((u32*)(r4 + 0x2c)), 0x11, *((u32*)(r4 + 0xc)));
    sub_02059478(r4, *((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x30)) = r0;
    // add r0, #0x84
    // strb r1, [r0]
    *((u32*)(r4 + 0x34)) = 0x1f;
    IsPrintFinished(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18), 0);
    sub_020597A8(r4);
    // add r1, #0x84
    sub_02059820(r4, *((u8*)r4));
    *((u32*)(r4 + 0x34)) = 0x20;
    sub_02059A08(r4);
    sub_02059AD8(r4);
    // ldrsb r1, [r4, r0]
    // add r0, #0x84
    // strb r1, [r0]
    *((u32*)(r4 + 0x34)) = 0x24;
    sub_02059AD8(r4);
    // add r0, #0x84
    // strb r1, [r0]
    ReadMsgDataIntoString(*((u32*)(r4 + 0x2c)), 0xf, *((u32*)(r4 + 0xc)));
    sub_02059478(r4, *((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x30)) = r0;
    sub_02037AC0(2);
    *((u32*)(r4 + 0x34)) = 0x27;
    // add r1, #0x84
    Party_GetMonByIndex(*((u32*)(r4 + 0x50)), *((u8*)r4));
    Mon_GetBoxMon();
    BufferBoxMonSpeciesName(*((u32*)(r4 + 0x28)), 1, r0);
    ReadMsgDataIntoString(*((u32*)(r4 + 0x2c)), 0x12, *((u32*)(r4 + 0xc)));
    StringExpandPlaceholders(*((u32*)(r4 + 0x28)), *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0xc)));
    sub_02059478(r4, *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0x25;
    IsPrintFinished(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    sub_0205993C(r4, 0);
    *((u32*)(r4 + 0x34)) = 0x26;
    sub_02059A08(r4);
    sub_02059AD8(r4);
    ReadMsgDataIntoString(*((u32*)(r4 + 0x2c)), 0x11, *((u32*)(r4 + 0xc)));
    sub_02059478(r4, *((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x34)) = 0x1f;
    // ldrsb r0, [r4, r0]
    sub_02059AD8(r4);
    ReadMsgDataIntoString(*((u32*)(r4 + 0x2c)), 0xe, *((u32*)(r4 + 0xc)));
    StringExpandPlaceholders(*((u32*)(r4 + 0x28)), *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0xc)));
    sub_02059478(r4, *((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x30)) = r0;
    sub_02037AC0(2);
    *((u32*)(r4 + 0x34)) = 0x27;
    ov01_021E636C(0);
    *((u32*)(r4 + 0x34)) = 0x21;
    IsPaletteFadeFinished(0x21);
    sub_020594C8(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0x84
    sub_02058AEC(r4, *((u32*)(r4 + 0x24)), *((u32*)(r4 + 0x50)), *((u8*)r4));
    *((u32*)(r4 + 0x34)) = 0x22;
    sub_02058CD8(r4, *((u32*)(r4 + 0x24)));
    FieldSystem_LoadFieldOverlay(*((u32*)(r4 + 0x24)));
    *((u32*)(r4 + 0x34)) = 0x23;
    sub_02058D04(r4);
    *((u32*)(r4 + 0x34)) = 0x24;
    IsPrintFinished(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18));
    sub_02037B38(2);
    sub_0205975C(r4);
    *((u32*)(r4 + 0x34)) = 0x29;
    sub_02059798(r4);
    // add r0, #0x84
    sub_02037AC0(4);
    *((u32*)(r4 + 0x34)) = 0x2c;
    // add r0, #0x85
    *((u32*)(r4 + 0x34)) = 0x2a;
    sub_020597D4(r4);
    sub_02037AC0(0x5d);
    *((u32*)(r4 + 0x34)) = 2;
    ReadMsgDataIntoString(*((u32*)(r4 + 0x2c)), 0xf, *((u32*)(r4 + 0xc)));
    sub_02059478(r4, *((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x30)) = r0;
    // add r0, #0x43
    // strb r1, [r0]
    *((u32*)(r4 + 0x34)) = 0x2b;
    IsPrintFinished(((*((u32*)(r4 + 0x30)) << 0x18) >> 0x18), 0);
    // add r0, #0x43
    // add r0, #0x43
    // strb r1, [r0]
    // add r0, #0x43
    sub_02037AC0(4, (*((u8*)r4) + 1));
    *((u32*)(r4 + 0x34)) = 0x2c;
    sub_02037B38(4);
    // add r0, #0x14
    ClearFrameAndWindow2(r4, 0);
    // blx r2
    *((u32*)(r4 + 0x34)) = 5;
}




void sub_02059478(void) {
    // add r4, #0x14
}




void sub_020594C8(void) {
    // add r0, #0x14
    // add r0, #0x14
    // add r0, #0x14
    // add r0, #0x14
    // add r0, #0x14
    // add r0, #0x54
    // add r0, #0x54
    // add r0, #0x54
    // add r0, #0x64
    // add r0, #0x64
    // add r5, #0x64
}




void sub_02059538(void) {
    Heap_AllocAtEnd(0xb, 0x8c);
    MI_CpuFill8(0, 0x8c);
    // add r0, #0x43
    // strb r1, [r0]
    *((u32*)(r4 + 0x24)) = r5;
    *((u32*)(r4 + 8)) = r6;
    MessageFormat_New(0xb, 5);
    *((u32*)(r4 + 0x28)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0xe, 0xb);
    *((u32*)(r4 + 0x2c)) = r0;
    String_New(0xc8, 0xb);
    *((u32*)(r4 + 0xc)) = r0;
    String_New(0xc8, 0xb);
    *((u32*)(r4 + 0x10)) = r0;
    // add r0, #0x14
    InitWindow(r4);
    // add r0, #0x54
    InitWindow(r4);
    // add r0, #0x64
    InitWindow(r4);
    ListMenuCursorNew(0xb);
    *((u32*)(r4 + 0x78)) = r0;
    sub_0203993C();
    // add r1, #0x88
    // strb r0, [r1]
    *((u32*)(r4 + 0x4c)) = 0;
    *((u32*)(r4 + 0x48)) = 0;
    *((u32*)(r4 + 0x50)) = 0;
    // add r0, #0x89
    // strb r1, [r0]
    sub_0203769C(r4, 0);
    // add r1, #0x86
    // strh r0, [r1]
    // add r0, #0x86
    // eor r0, r1
    sub_02034818(1, *((u16*)r4));
    *((u32*)(r4 + 0x74)) = r0;
    // add r0, #0x88
    sub_02059B08(*((u8*)r4));
    Heap_AllocAtEnd(0xb, r0);
    *((u32*)(r4 + 0x4c)) = r0;
    Heap_AllocAtEnd(0xb, r6);
    *((u32*)(r4 + 0x48)) = r0;
    SaveArray_Party_Alloc(0xb);
    *((u32*)(r4 + 0x50)) = r0;
    Party_InitWithMaxSize(3);
    // add r0, #0x44
    // strb r1, [r0]
    *((u32*)(r4 + 0x34)) = 0x17;
    *((u32*)(r4 + 0x34)) = 9;
    // add r0, #0xa4
    *((u32*)(r4 + 0x34)) = 9;
    *((u32*)(r4 + 0x34)) = 0;
    FieldSystem_CreateTask(r5, sub_02058D4C, r4);
}




void sub_02059650(void) {
}




void sub_0205969C(void) {
}




void sub_020596A8(void) {
    // str r0, [sp]
    // add r0, r6, r0
    // str r5, [r4, r0]
    // add r1, r7, r5
    // add r1, #0x3d
    // ldr r0, [sp]
    // add r4, r4, r6
}




void sub_020596F0(void) {
    // add r0, #0x89
    // tst r1, r0
    // add r0, #0x86
    // add r1, #0x89
    // add r5, #0x89
    // strb r1, [r5]
}




void sub_02059738(void) {
    // add r0, #0x89
}




void sub_02059748(void) {
}




void sub_0205975C(void) {
    // add r0, #0x86
    // add r1, #0x84
    // add r1, #0x84
    // add r1, #0x89
    // add r4, #0x89
    // strb r1, [r4]
}




void sub_02059798(void) {
    // add r0, #0x89
}




void sub_020597A8(void) {
    // add r1, r2, r1
}




void sub_020597D4(void) {
    // add r0, #0x84
    // add r0, r2, r1
    // add r1, #0x85
    // add r1, r3, r2
    // add r1, r2, r1
}




void sub_02059820(void) {
    // str r0, [sp, #0x20]
    // add r0, #0x54
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // add r0, r0, r6
    // ldr r0, [sp, #0x18]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r6, r6, r0
    // add r4, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // ldr r3, [sp, #0x14]
    // add r1, #0x54
    // add r0, #0x54
    // ldr r0, [sp, #0x14]
    // add r1, #0x81
    // strb r0, [r1]
    // add r0, #0x80
    // strb r1, [r0]
    // ldr r0, [sp, #0x20]
}




void sub_0205993C(void) {
    // add r7, #0x64
    // str r1, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, #0x16
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r4, #0x10
    // add r0, #0x80
    // strb r1, [r0]
    // ldr r0, [sp, #0x14]
    // add r1, #0x81
    // strb r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x14]
}




void sub_02059A08(void) {
    // tst r1, r0
    // ldrsb r0, [r4, r0]
    // add r0, #0x80
    // add r0, #0x81
    // strb r1, [r0]
    // tst r1, r0
    // ldrsb r1, [r4, r0]
    // add r0, #0x80
    // add r0, #0x81
    // strb r1, [r0]
    // tst r1, r0
    PlaySE(0x000005DC, 1);
    // ldrsb r1, [r4, r0]
    // add r4, #0x80
    // tst r0, r1
    PlaySE(0x000005DC, 2);
    PlaySE(0x000005DC);
    // str r1, [sp]
    // str r1, [sp, #4]
    FillWindowPixelRect(*((u32*)(r4 + 0x7c)), 0xf, 0, 0);
    // ldrsb r3, [r4, r3]
    ListMenuUpdateCursorObj(*((u32*)(r4 + 0x78)), *((u32*)(r4 + 0x7c)), 0, (0x81 << 4));
    CopyWindowPixelsToVram_TextMode(*((u32*)(r4 + 0x7c)));
}




void sub_02059AD8(void) {
}




void sub_02059AE4(void) {
    // add r1, #0x86
    // add r1, #0x89
    // add r0, #0x89
    // strb r1, [r0]
}




void sub_02059B08(void) {
}




void sub_02059B18(void) {
}




void sub_02059B34(void) {
    // add r1, #0x86
    // add r1, #0x85
    // strb r2, [r1]
    // add r1, #0x89
    // add r0, #0x89
    // strb r1, [r0]
}




void sub_02059B64(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    sub_020588DC(*((u32*)(r0 + 0x24)), 0, 0);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02059B96: ; jump table
    MessageFormat_New(4, (*((u16*)(*((u32*)(r4 + 0x28)) + 6)) << 0x10));
    *((u32*)(r4 + 0x18)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0xe, 4);
    *((u32*)(r4 + 0x1c)) = r0;
    String_New(0xc8, 4);
    // str r0, [r4]
    String_New(0xc8, 4);
    *((u32*)(r4 + 4)) = r0;
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02059BE2: ; jump table
    ReadMsgDataIntoString(*((u32*)(r4 + 0x1c)), 2, *((u32*)r4));
    sub_02034818(*((u32*)(r4 + 0x24)));
    BufferPlayersName(*((u32*)(r4 + 0x18)), 0, r0);
    StringExpandPlaceholders(*((u32*)(r4 + 0x18)), *((u32*)(r4 + 4)), *((u32*)r4));
    // add r1, #8
    sub_0205B514(*((u32*)(r5 + 8)), r4, 3);
    Save_PlayerData_GetOptionsAddr(*((u32*)(r5 + 0xc)));
    // add r0, #8
    sub_0205B564(r4, r0);
    Save_PlayerData_GetOptionsAddr(*((u32*)(r5 + 0xc)));
    // add r0, #8
    sub_0205B5B4(r4, *((u32*)(r4 + 4)), r0, 1);
    *((u32*)(r4 + 0x20)) = r0;
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    IsPrintFinished(((*((u32*)(r4 + 0x20)) << 0x18) >> 0x18));
    // tst r0, r1
    DestroyMsgData(*((u32*)(r4 + 0x1c)), *((u32*)(gSystem + 0x48)));
    MessageFormat_Delete(*((u32*)(r4 + 0x18)));
    String_Delete(*((u32*)r4));
    String_Delete(*((u32*)(r4 + 4)));
    // add r0, #8
    ClearFrameAndWindow2(r4, 0);
    // add r0, #8
    RemoveWindow(r4);
    ov01_021E636C(0);
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    IsPaletteFadeFinished((*((u32*)(r4 + 0x28)) + 1));
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    // add r1, #0x2c
    MI_CpuCopy8((*((u32*)(r4 + 0x28)) + 1), r4, 0x0000066C);
    // add r1, #0x2c
    TrainerCard_LaunchApp(r5, r4);
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    FieldSystem_ApplicationIsRunning(r5);
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    FieldSystem_LoadFieldOverlay(r5);
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    sub_020505C8(r5);
    ov01_021E636C(1);
    sub_02056E60();
    *((u32*)(r4 + 0x28)) = (*((u32*)(r4 + 0x28)) + 1);
    sub_02057F70((*((u32*)(r4 + 0x28)) + 1));
    Heap_Free(r4);
}




void sub_02059D44(void) {
    // str r0, [sp]
    sub_0203769C();
    sub_02057ADC();
    sub_02057B14(r5);
    sub_02037454();
    sub_02057A34(r4);
    sub_02057A88(r4);
    Heap_AllocAtEnd(0xb, 0x000006A8);
    *((u32*)(r0 + 0x24)) = r4;
    *((u32*)(r0 + 0x28)) = 0;
    // ldr r0, [sp]
    FieldSystem_CreateTask(0, sub_02059B64, r0);
    sub_0203E2F4();
    sub_02037454();
}




struct UnkStruct_02059E1C * sub_02059DB0(void) {
    GF_AssertFail();
    // add r0, #0x80
    Heap_CreateAtEnd(3, 0x1f, (0x2a << 6));
    sub_02059E1C(r4);
    // add r0, #0x80
    sub_02091574(r4);
    sub_02038C1C(2);
    sub_0205A034(r5, sub_02059E88, 0x28);
}




void sub_02059E04(void) {
}




void sub_02059E1C(void) {
    // add r1, #0x80
    FieldSystem_GetSaveData(0, *((u32*)r0));
    sub_02037F18();
    Heap_Alloc(0x1f, (0x19 << 4));
    MI_CpuFill8(0, (0x19 << 4));
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0x14)) = 0x28;
    SysTask_CreateOnMainQueue(sub_0205A03C, r4, 0xa);
    *((u32*)(r4 + 0xc)) = r0;
    // str r5, [r4]
    *((u32*)(r4 + 4)) = r6;
    Save_PlayerData_GetProfile(r6);
    *((u32*)(r4 + 8)) = r0;
    sub_0205ABBC(r4);
    // add r0, r4, r0
    sub_0203778C((0x15 << 4));
}




void sub_02059E88(void) {
    sub_02035650();
    // add r0, sp, #0
    MailMsg_Init_Default();
    // add r0, sp, #0
    sub_0205AB88();
    // add r1, sp, #0
    sub_0205AA6C(r4);
    sub_0205A034(r4, sub_02059EBC, 0x28);
}




void sub_02059EBC(void) {
    sub_02037FCC();
    // str r2, [r0]
    sub_0205A034(r4, sub_02059F78, 0);
    *((u32*)(r4 + 0x28)) = 2;
    sub_0203894C(*((u32*)(r4 + 0x18)));
    sub_0203898C(*((u32*)(r4 + 0x18)));
    sub_02037F64();
    sub_0208F814(0);
    sub_02038918(*((u32*)(r4 + 0x18)));
    sub_0205A034(r4, sub_0205A0B4, 0xc);
}




void sub_02059F30(void) {
    sub_02038070();
    sub_02091574(*((u32*)r4));
    sub_0205A034(r4, sub_02059EBC, 2);
}




void sub_02059F54(void) {
}




void sub_02059F78(void) {
    *((u32*)(r0 + 0x14)) = (*((u32*)(r0 + 0x14)) - 1);
    // str r1, [r0]
    sub_02035878(_021D41CC, (*((u32*)_021D41CC) + 1));
    sub_020376F8();
    sub_02059F54();
    sub_02034434(*((u8*)(r5 + 0x1c)));
    sub_020398D4(1, 1);
    sub_0205A904(0xb);
    sub_0205A034(r4, sub_02059FF8, 0);
    sub_02037FCC();
    sub_02037FF0();
    sub_0205ABBC(r4);
    sub_0205A904(0);
    sub_0205A034(r4, sub_02059F30, 2);
}




void sub_02059FF8(void) {
    sub_02039918();
    sub_020376F8();
    sub_020376F8();
    sub_02037FF0();
    sub_0205ABBC(r4);
    sub_0205A904(0);
    sub_0205A034(r4, sub_02059F30, 2);
}




void sub_0205A034(void) {
}




void sub_0205A03C(void) {
    // str r1, [sp]
    SysTask_Destroy();
    sub_02035754(0);
    // str r0, [r4, r1]
    // stmia r5!, {r0}
    // ldr r0, [sp]
    // blx r1
}




void sub_0205A07C(void) {
    *((u32*)(r0 + 0x14)) = (*((u32*)(r0 + 0x14)) - 1);
    sub_02038094((*((u32*)(r0 + 0x14)) - 1));
    sub_0205A034(r4, sub_0205A0A0, 0);
}




void sub_0205A0A0(void) {
}




void sub_0205A0B4(void) {
    sub_02037F94();
    sub_02034434();
    sub_0205A034(r4, sub_0205A144, 3);
    sub_020376F8();
    *((u32*)(r4 + 0x20)) = 0;
    *((u32*)(r4 + 0x1c)) = 3;
    sub_0205A034(r4, sub_02059F78, 0);
    sub_02037F94();
    sub_0205A034(r4, sub_0205A114, 2);
    *((u32*)(r4 + 0x24)) = 0;
    *((u32*)(r4 + 0x1c)) = 2;
    *((u32*)(r4 + 0x20)) = 0;
    *((u32*)(r4 + 0x44)) = 0;
}




void sub_0205A114(void) {
    FieldSystem_TaskIsRunning(*((u32*)r0));
    sub_02037FF0();
    sub_0205ABBC(r4);
    sub_0205A904(0);
    sub_0205A034(r4, sub_02059F30, 2);
}




void sub_0205A144(void) {
    sub_02037F94();
    sub_0203769C();
    sub_02034818();
    *((u32*)(r4 + 0x20)) = 0;
    *((u32*)(r4 + 0x1c)) = 1;
    *((u32*)(r4 + 0x44)) = 0;
    sub_020398D4(1, 1);
    sub_0205A034(r4, sub_0205A1AC, 3);
    sub_02037F94();
    sub_02037FF0();
    sub_0205ABBC(r4);
    sub_0205A034(r4, sub_02059F30, 2);
    *((u32*)(r4 + 0x24)) = 0;
    *((u32*)(r4 + 0x1c)) = 2;
    *((u32*)(r4 + 0x20)) = 0;
    *((u32*)(r4 + 0x44)) = 0;
}




void sub_0205A1AC(void) {
    sub_02037F94();
    sub_02037FF0();
    sub_0205ABBC(r4);
    sub_0205A034(r4, sub_02059F30, 2);
}




void sub_0205A1D4(void) {
}




void sub_0205A1F0(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}




void sub_0205A1F4(void) {
    // add r1, r0, r1
}




int sub_0205A200(void) {
    sub_02035798((r1 - 1));
    sub_0205ABB0(r4);
    // add r1, r4, r0
    // add r1, #0x50
    // add r1, #0x30
    *((u32*)(_021D41CC + 4)) = *((u32*)(r1 + (0x11 << 4)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205A24A: ; jump table
}




int sub_0205A284(void) {
    // add r4, r0, r3
    // add r4, #0x50
    // add r4, #0x30
    *((u32*)(_021D41CC + 4)) = *((u32*)(r4 + (0x11 << 4)));
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _0205A2B6: ; jump table
    *((u32*)(5 + 0x30)) = 5;
    *((u32*)(5 + 0x18)) = (r1 - 1);
    *((u32*)(5 + 0x20)) = 1;
    *((u32*)(5 + 0x24)) = 0;
    *((u32*)(5 + 0x1c)) = 0;
    *((u32*)(5 + 0x18)) = 0;
    *((u32*)(5 + 0x20)) = 1;
    *((u32*)(5 + 0x24)) = 0;
    *((u32*)(5 + 0x1c)) = 0;
    *((u32*)(5 + 0x18)) = 0;
    *((u32*)(5 + 0x20)) = 2;
    *((u32*)(5 + 0x24)) = 0;
    *((u32*)(5 + 0x1c)) = 0;
    *((u32*)(5 + 0x30)) = 6;
    *((u32*)(5 + 0x18)) = 0;
    *((u32*)(5 + 0x20)) = 1;
    *((u32*)(5 + 0x1c)) = 0;
}




void sub_0205A358(void) {
    // ldr r0, [r0, #0x1c]
    // bx lr
    // TODO: decompile
}




u32 sub_0205A35C(void) {
}




void sub_0205A39C(void) {
}




void sub_0205A3B0(void) {
    // add r0, sp, #0
    // add r1, sp, #0
    // add r1, #2
    // add r1, sp, #0
    // add r1, #1
    // strb r1, [r0]
    // add r1, sp, #0
}




void sub_0205A408(void) {
    // bx lr
    // TODO: decompile
}




void sub_0205A40C(void) {
    // bx lr
    // TODO: decompile
}




void sub_0205A410(void) {
    // add r0, #0x80
    sub_0205A034(*((u32*)r3), sub_02059EBC, 2);
    // add r4, #0x80
    sub_0205ABBC(*((u32*)r4));
}




void sub_0205A430(void) {
    // add r3, #0x80
    *((u32*)(*((u32*)r3) + 0x30)) = *((u8*)r2);
    *((u32*)(_021D41CC + 8)) = *((u8*)r2);
}



