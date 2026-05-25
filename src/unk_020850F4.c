/* Decompiled from asm/unk_020850F4.s */
#include "global.h"

u32 sub_020850F4(void) {
    Heap_Create(3, 0x6c, (1 << 0x12));
    OverlayManager_CreateAndGetData(r5, (0xfd << 2), 0x6c);
    memset(0, (0xfd << 2));
    OverlayManager_GetArgs(r5);
    // add r3, r4, r0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    Main_SetVBlankIntrCB(0, 0, (6 - 1));
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    NARC_New(0xbe, 0x6c, 0x04001000);
    // str r0, [r4, r1]
    BgConfig_Alloc(0x6c, (0xbb << 2));
    // str r0, [r4, r1]
    PaletteData_Init(0x6c, (0xbe << 2));
    // str r0, [r4, r1]
    PaletteData_SetAutoTransparent(*((u32*)(r4 + (0xbf << 2))), 1);
    // sub r2, #0xfc
    PaletteData_AllocBuffers(*((u32*)(r4 + (0xbf << 2))), 0, (0xbf << 2), 0x6c);
    PaletteData_AllocBuffers(*((u32*)(r4 + (0xbf << 2))), 1, (1 << 9), 0x6c);
    PaletteData_AllocBuffers(*((u32*)(r4 + (0xbf << 2))), 2, (2 << 8), 0x6c);
    // sub r2, #0xfc
    PaletteData_AllocBuffers(*((u32*)(r4 + (0xbf << 2))), 3, (0xbf << 2), 0x6c);
    sub_0208545C(*((u32*)(r4 + (0xbe << 2))));
    sub_020863F4(r4);
    sub_02085688(r4);
    sub_020210BC();
    sub_02021148(4);
    sub_020860B8(r4);
    sub_0203A880(*((u32*)(r4 + (0xfa << 2))));
    sub_0203A948(1, 0x6c);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 6, 0xf);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 0, 0xe, 7);
    Main_SetVBlankIntrCB(sub_020855CC, r4);
}




u32 sub_0208524C(void) {
    // sub r0, r1, r0
}




u32 sub_0208527C(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r1]
    // ldr r1, [r4, r1]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void sub_020853B4(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // str r6, [r4]
    // add r0, r4, r0
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
}




void sub_02085400(void) {
}




void sub_0208541C(void) {
}




void sub_02085438(void) {
}




void sub_0208545C(void) {
    GfGfx_DisableEngineAPlanes();
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0
    GfGfx_SetBanks((5 - 1));
    MIi_CpuClear32(0, (6 << 0x18), (2 << 0x12));
    MIi_CpuClear32(0, (0x62 << 0x14), (2 << 0x10));
    MIi_CpuClear32(0, (0x19 << 0x16), (1 << 0x12));
    MIi_CpuClear32(0, (0x66 << 0x14), (2 << 0x10));
    // add r3, sp, #0x98
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, sp, #0x98
    InitBgFromTemplate(r4, 1, (0xa - 1), 0);
    // add r2, sp, #0xb4
    InitBgFromTemplate(r4, 2, 0);
    // add r2, sp, #0xd0
    InitBgFromTemplate(r4, 3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    BgClearTilemapBufferAndCommit(r4, 2);
    BgClearTilemapBufferAndCommit(r4, 3);
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 0);
    // add r3, sp, #0x28
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r2, sp, #0x28
    InitBgFromTemplate(r4, 4, (0xe - 1), 0);
    // add r2, sp, #0x44
    InitBgFromTemplate(r4, 5, 0);
    // add r2, sp, #0x60
    InitBgFromTemplate(r4, 6, 0);
    // add r2, sp, #0x7c
    InitBgFromTemplate(r4, 7, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    BgClearTilemapBufferAndCommit(r4, 5);
    BgClearTilemapBufferAndCommit(r4, 6);
    BgClearTilemapBufferAndCommit(r4, 7);
    GfGfx_EngineBTogglePlanes(1, 1);
    GfGfx_EngineBTogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}




void sub_020855CC(void) {
    GF_RunVramTransferTasks();
    SpriteSystem_TransferOam();
    PaletteData_PushTransparentBuffers(*((u32*)(r4 + (0xbf << 2))));
    DoScheduledBgGpuUpdates(*((u32*)(r4 + (0xbe << 2))));
    // str r0, [r3, r1]
}



