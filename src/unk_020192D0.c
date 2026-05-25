/* Decompiled from asm/unk_020192D0.s */
#include "global.h"

u32 sub_020192D0(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r0, r2
    // str r0, [r1]
    // and r2, r3
    // str r2, [r0]
    // and r3, r2
    // str r3, [r1]
    // add r1, #0x50
    // and r2, r3
    // str r2, [r0]
    // strh r2, [r1]
    // add r0, #0x50
    // strh r2, [r0]
    Heap_Create(3, 0x7b, (0xa << 0xe), *((u32*)0x04001000));
    OverlayManager_CreateAndGetData(r4, 0x80, 0x7b);
    MI_CpuFill8(0, 0x80);
    OverlayManager_GetArgs(r4);
    // str r0, [r5]
    Sound_SetSceneAndPlayBGM(0xb, 0x0000047D, 1);
}




u32 sub_0201935C(void) {
    OverlayManager_GetData();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02019378: ; jump table
    sub_020194B4((*((u16*)(*((u32*)r5) + 6)) << 0x10));
    // str r0, [r5]
    sub_02034DB8(1);
    // str r1, [r0]
    ov00_021EC294(sub_02019520, sub_02019548);
    *((u32*)(r4 + 0x78)) = 1;
    // str r0, [r5]
    OverlayManager_New(_020F6288, r4, 0x7b);
    *((u32*)(r4 + 8)) = r0;
    // str r0, [r5]
    OverlayManager_Run(*((u32*)(r4 + 8)));
    OverlayManager_Delete(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 4)) = 1;
    // str r0, [r5]
    // str r0, [r5]
    sub_02087E10(*((u8*)(*((u32*)r4) + 0xc)));
    OverlayManager_New(*((u32*)*((u32*)r4)), 0x7b);
    *((u32*)(r4 + 8)) = r0;
    // str r0, [r5]
    OverlayManager_Run(*((u32*)(r4 + 8)));
    OverlayManager_Delete(*((u32*)(r4 + 8)));
    // str r0, [r5]
    OverlayManager_New(_020F6288, r4, 0x7b);
    *((u32*)(r4 + 8)) = r0;
    // str r0, [r5]
    OverlayManager_Run(*((u32*)(r4 + 8)));
    OverlayManager_Delete(*((u32*)(r4 + 8)));
    *((u32*)(r4 + 4)) = 0;
    // str r0, [r5]
    ov00_021ECB40(*((u32*)(r4 + 0x7c)));
    ov00_021EC9D4();
    // sub r0, r1, r0
    sub_0203A930(3);
}




u32 sub_02019490(void) {
}




void sub_020194B4(void) {
    LoadDwcOverlay(*((u32*)(r0 + 0x78)));
    LoadOVY38();
    sub_02039FD8(0x7b);
    Heap_Alloc(0x7b, 0x00020020);
    *((u32*)(r4 + 0xc)) = r0;
    // add r0, #0x1f
    NNS_FndCreateExpHeapEx((r0 & ~(0x1f)), (2 << 0x10), 0);
    *((u32*)(r4 + 0x10)) = r0;
    sub_02034D8C();
    Sys_ClearSleepDisableFlag(4);
}




void sub_020194F8(void) {
}




void * sub_02019520(void) {
    OS_DisableInterrupts();
    NNS_FndAllocFromExpHeapEx(*((u32*)_021D1108), r5, r4);
    OS_RestoreInterrupts(r6);
}




void sub_02019548(void) {
    OS_DisableInterrupts();
    NNS_FndFreeToExpHeap(*((u32*)_021D1108), r5);
    OS_RestoreInterrupts(r4);
}



