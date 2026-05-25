/* Decompiled from asm/frontier.s */
#include "global.h"

u8 Frontier_Init(void) {
    Frontier_LoadOverlays();
    OverlayManager_CreateAndGetData(r5, 0x00000A54, 0xb);
    MI_CpuFill8(0, 0x00000A54);
    sub_02096780(r4);
    sub_02096884(r4);
    OverlayManager_GetArgs(r5);
    // str r0, [r4]
    GF_AssertFail();
    // add r2, #0x20
    FrontierSystem_Create(r4, 0xb, *((u8*)*((u32*)r4)));
    *((u32*)(r4 + 0x14)) = r0;
    // add r1, #0x20
    FrontierSystem_AddTask(*((u8*)*((u32*)r4)), 0);
    Frontier_CreateMap(r4);
}




u8 Frontier_Main(void) {
    OverlayManager_GetData();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02096626: ; jump table
    // str r0, [r5]
    // add r0, #0x22
    // str r0, [r5]
    // str r0, [r5]
    FrontierSystem_Main(*((u32*)(r0 + 0x14)), (*((u16*)(*((u32*)r5) + 6)) << 0x10));
    // str r0, [r5]
    ov80_022389C4(*((u32*)(r4 + 0x18)));
    Frontier_FreeMap(r4);
    Frontier_UnloadOverlays();
    // str r0, [r5]
    OverlayManager_Run(*((u32*)(r4 + 4)));
    OverlayManager_Delete(*((u32*)(r4 + 4)));
    Frontier_LoadOverlays();
    // blx r1
    Heap_Free(*((u32*)(r4 + 8)), *((u8*)(r4 + 0x10)));
    *((u32*)(r4 + 4)) = 0;
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 8)) = 0;
    Frontier_CreateMap(r4);
    ov80_02238A18(*((u32*)(r4 + 0x18)));
    // str r0, [r5]
    Frontier_FreeMap(1);
    sub_02096780(r4);
    // str r0, [r5]
    Frontier_CreateMap(6);
    // add r1, #0x20
    ov80_0222AA7C(*((u32*)(r4 + 0x14)), *((u8*)*((u32*)r4)), 0xb);
    ov80_0222AAD8(0xb);
    ov80_0222A920(*((u32*)(r4 + 0x14)));
    // add r2, #0x20
    FrontierSystem_Create(r4, 0xb, *((u8*)*((u32*)r4)));
    *((u32*)(r4 + 0x14)) = r0;
    // add r1, #0x20
    FrontierSystem_AddTask(*((u8*)*((u32*)r4)), *((u16*)(r4 + 0x20)));
    ov80_0222AAF8(*((u32*)(r4 + 0x14)), r6);
    *((u8*)(r4 + 0x1e)) = 0;
    // str r0, [r5]
}




u32 Frontier_Exit(void) {
}




void Frontier_CreateMap(void) {
}




void Frontier_FreeMap(void) {
}




void sub_02096780(void) {
    *((u16*)(r0 + 0x24)) = 0x0000FFFF;
    // add r0, #0x84
    MI_CpuFill8(r0, 0, (0x1e << 6));
    // add r0, #0x90
    // add r4, #0x3c
    // strh r1, [r0]
}




void Frontier_LoadOverlays(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
}




void Frontier_UnloadOverlays(void) {
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOverlayByID(FS_OVERLAY_ID);
}




void Frontier_GetLaunchArgs(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}




void sub_0209680C(void) {
    // ldr r0, [r0, #0x18]
    // bx lr
    // TODO: decompile
}




void Frontier_GetData(void) {
    // ldr r0, [r0]
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}




void Frontier_SetData(void) {
    // str r1, [r0]
}




void Frontier_LaunchApplication(void) {
    // ldr r0, [sp, #0x18]
}




void sub_0209684C(void) {
    // add r0, #0x22
    // strb r1, [r0]
}




void sub_02096854(void) {
    // add r3, #0x20
    // strb r1, [r3]
}




u16 * sub_02096864(void) {
    // add r0, #0x24
}



u16 * sub_02096868(void) {
    // add r0, #0x84
}



u16 * sub_0209686C(void) {
    // add r0, #0x84
    // mul r2, r1
    // add r0, r0, r2
}



void * sub_02096878(void) {
    // add r0, r0, r1
}




void sub_02096884(void) {
    // add r0, r4, r0
    MI_CpuFill8(0x00000A04, 0, 8);
    // strh r1, [r4, r0]
}



