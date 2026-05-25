/* Decompiled from asm/unk_02078834.s */
#include "global.h"

void sub_02078834(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r6);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0207885A: ; jump table
    // str r1, [r0]
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    sub_0203A05C(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 0xc)));
    *((u32*)(r4 + 4)) = 0xa;
    // strh r1, [r0]
    CallApplicationAsTask(r6, _02101290, *((u32*)r4));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    sub_0203A05C(*((u32*)(r5 + 0xc)));
    Save_VarsFlags_Get(*((u32*)(r5 + 0xc)));
    SetFlag970();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020788F4: ; jump table
    *((u8*)(r4 + 0xc)) = 0;
    *((u8*)(r4 + 0xd)) = 0;
    *((u32*)(r4 + 4)) = 4;
    *((u8*)(r4 + 0xc)) = 0x32;
    *((u8*)(r4 + 0xd)) = 0;
    *((u32*)(r4 + 4)) = 4;
    *((u8*)(r4 + 0xc)) = 0x64;
    *((u8*)(r4 + 0xd)) = 0;
    *((u32*)(r4 + 4)) = 4;
    *((u8*)(r4 + 0xc)) = 0;
    *((u8*)(r4 + 0xd)) = 1;
    *((u32*)(r4 + 4)) = 4;
    *((u8*)(r4 + 0xc)) = 0x32;
    *((u8*)(r4 + 0xd)) = 1;
    *((u32*)(r4 + 4)) = 4;
    *((u8*)(r4 + 0xc)) = 0x64;
    *((u8*)(r4 + 0xd)) = 1;
    *((u32*)(r4 + 4)) = 4;
    *((u32*)(r4 + 4)) = 6;
    // strh r1, [r0]
    *((u32*)(r4 + 4)) = 0xb;
    *((u32*)(r4 + 4)) = 9;
    *((u32*)(r4 + 4)) = 0xc;
    *((u32*)(r4 + 4)) = 0xe;
    *((u32*)(r4 + 4)) = 0x12;
    *((u32*)(r4 + 4)) = 0x16;
    *((u32*)(r4 + 4)) = 8;
    CallTask_02050960(r6, *((u32*)(*((u32*)r4) + 8)), *((u8*)(r4 + 0xc)), *((u8*)(r4 + 0xd)));
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 4)) = 2;
    CallTask_WirelessTrade(r6);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 4)) = 2;
    Heap_Create(3, 0x35, 0x00040100);
    LoadOVY13();
    ov13_0221BA00(0x35);
    OS_ResetSystem(0);
    Heap_Free(*((u32*)r4));
    Heap_Free(r4);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    sub_020378E4(0);
    sub_020968B0(r5, 0);
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    FieldSystem_ApplicationIsRunning(r5);
    Heap_Free(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 4)) = 2;
    sub_02078B9C(2, r5, 0xb, 1);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    FieldSystem_ApplicationIsRunning(r5);
    sub_02078BD8(r4);
    *((u32*)(r4 + 4)) = r0;
    sub_02078C18(r5, 0xb, *((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    FieldSystem_ApplicationIsRunning(r5);
    *((u32*)(r4 + 4)) = 2;
    sub_02078C60(*((u32*)(r4 + 0x10)));
    sub_02078B9C(r5, 0xb, 2);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    FieldSystem_ApplicationIsRunning(r5);
    sub_02078BD8(r4);
    *((u32*)(r4 + 4)) = r0;
    sub_02078C74(r5, 0xb, *((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    FieldSystem_ApplicationIsRunning(r5);
    *((u32*)(r4 + 4)) = 2;
    sub_02078CB4(*((u32*)(r4 + 0x10)));
    sub_02078B9C(r5, 0xb, 3);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    FieldSystem_ApplicationIsRunning(r5);
    sub_02078BD8(r4);
    *((u32*)(r4 + 4)) = r0;
    sub_02078CC8(r5, 0xb, *((u32*)(r4 + 0x14)));
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    FieldSystem_ApplicationIsRunning(r5);
    *((u32*)(r4 + 4)) = 2;
    sub_02078D10(*((u32*)(r4 + 0x10)));
}




void sub_02078B2C(void) {
}




void sub_02078B58(void) {
    sub_02078B2C();
    *((u32*)(*((u32*)r0) + 4)) = 2;
    TaskManager_Call(r4, sub_02078834, r0);
}




void sub_02078B78(void) {
    sub_02078B2C();
    *((u32*)(*((u32*)r0) + 4)) = 1;
    *((u32*)(r0 + 8)) = r4;
    TaskManager_Call(r5, sub_02078834, r0);
}




void sub_02078B9C(void) {
    Heap_Alloc(r2, 0xc);
    // strb r4, [r2]
    *((u8*)(r0 + 1)) = 2;
    *((u8*)(r0 + 2)) = *((u8*)(_0210125C + r4));
    *((u8*)(r0 + 3)) = 0;
    *((u8*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = *((u32*)(r5 + 0xc));
    *((u32*)(r6 + 0x10)) = r0;
    FieldSystem_LaunchApplication(r5, _02101280, r0);
}




void sub_02078BD8(void) {
    // ldrb r1, [r0]
}




void sub_02078C18(void) {
    Heap_Alloc(r1, 0x3c);
    memset(0, 0x3c);
    // add r0, #0x38
    // strb r6, [r0]
    // add r0, #0x39
    // strb r1, [r0]
    *((u32*)(r4 + 0x34)) = *((u32*)(r5 + 0xc));
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    FieldSystem_LaunchApplication(r5, _02101260, r4);
}




void sub_02078C60(void) {
    Heap_Free();
    UnloadOverlayByID(FS_OVERLAY_ID);
}




void sub_02078C74(void) {
    Heap_Alloc(r1, 0x40);
    memset(0, 0x40);
    *((u32*)(r4 + 0x3c)) = r6;
    *((u32*)(r4 + 0x38)) = 0;
    *((u32*)(r4 + 0x34)) = *((u32*)(r5 + 0xc));
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    FieldSystem_LaunchApplication(r5, _02101270, r4);
}




void sub_02078CB4(void) {
    Heap_Free();
    UnloadOverlayByID(FS_OVERLAY_ID);
}




void sub_02078CC8(void) {
    Heap_Alloc(r1, 0x3c);
    MI_CpuFill8(0, 0x3c);
    // add r0, #0x38
    // strb r6, [r0]
    // add r0, #0x39
    // strb r1, [r0]
    *((u32*)(r4 + 0x34)) = *((u32*)(r5 + 0xc));
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    FieldSystem_LaunchApplication(r5, _021012A0, r4);
}




void sub_02078D10(void) {
    Heap_Free();
    UnloadOverlayByID(FS_OVERLAY_ID);
}




void sub_02078D24(void) {
    // add r0, r0, r1
    // add r0, #0x3f
}



