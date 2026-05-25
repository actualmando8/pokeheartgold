/* Decompiled from asm/overlay_01_021FC05C.s */
#include "global.h"

void ov01_021FC05C(void) {
    ov01_021FC14C(*((u32*)(r1 + 8)));
    ov01_021FC1A4(r4, 0, 0xa, 0x13);
    *((u32*)(r4 + 0x14)) = 0;
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 0x29, 0);
    SetBgPriority(2, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    PlaySE(SEQ_SE_DP_FW230);
}




void ov01_021FC0A8(void) {
    ov01_021FC14C(*((u32*)(r1 + 8)));
    ov01_021FC1A4(r4, 0xa, 0, 0xf);
    *((u32*)(r4 + 0x14)) = 0;
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 0x21, 0xa);
}




void ov01_021FC0DC(void) {
    // bx lr
    // TODO: decompile
}




void ov01_021FC0E0(void) {
    ov01_021FC1B4(r2);
    *((u32*)(r4 + 0x14)) = 1;
    // sub r0, r0, r1
    // strh r1, [r0]
}




void ov01_021FC10C(void) {
    // bx lr
    // TODO: decompile
}




void ov01_021FC110(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _021FC11C ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _021FC120 ; =ov01_02208BCC
    // bx r3
    // nop
    // _021FC11C: .word Field3dObjectTaskManager_CreateTask
    // _021FC120: .word ov01_02208BCC
    // TODO: decompile
}




void ov01_021FC124(void) {
}




void ov01_021FC12C(void) {
}




void ov01_021FC138(void) {
    // ldr r0, [r0, #4]
    // ldr r3, _021FC144 ; =Field3dObjectTaskManager_CreateTask
    // ldr r0, [r0, #4]
    // ldr r1, _021FC148 ; =ov01_02208BE4
    // bx r3
    // nop
    // _021FC144: .word Field3dObjectTaskManager_CreateTask
    // _021FC148: .word ov01_02208BE4
    // TODO: decompile
}




void ov01_021FC14C(void) {
    // add r0, sp, #4
    // strh r1, [r0]
    // add r1, sp, #4
    BG_LoadPlttData(2, 0x00005D5F, 2, 0xc2);
    Heap_Alloc(4, 0x20);
    memset(0x11, 0x20);
    // str r0, [sp]
    BG_LoadCharTilesData(r5, 2, r4, 0x20);
    Heap_Free(r4);
    BgFillTilemapBufferAndCommit(r5, 2, 0x00006001);
}




void ov01_021FC1A4(void) {
    // str r1, [r0]
    // sub r1, r2, r1
}




void ov01_021FC1B4(void) {
    // add r0, r0, r1
    // str r0, [r4]
}




void ov01_021FC1E0(void) {
}




void ov01_021FC1EC(void) {
    // ldr r3, _021FC1F4 ; =BG_SetMaskColor
    // mov r0, #2
    // ldr r1, _021FC1F8 ; =0x00007FFF
    // bx r3
    // _021FC1F4: .word BG_SetMaskColor
    // _021FC1F8: .word 0x00007FFF
    // TODO: decompile
}




void ov01_021FC1FC(void) {
    // add r0, sp, #4
    // strh r1, [r0]
    GfGfx_EngineATogglePlanes(4, 0);
    // strh r0, [r1]
    // add r1, sp, #4
    BG_LoadPlttData(2, 0x0400000C, 2, 0xc4);
    // str r1, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 8)), 2, 2, 1);
    BgFillTilemapBufferAndCommit(*((u32*)(r4 + 8)), 2, 0x00006002);
    GfGfx_EngineATogglePlanes(4, 1);
    ov01_021FC1E0(r4);
}




void ov01_021FC260(void) {
    // add r0, sp, #4
    // strh r1, [r0]
    GfGfx_EngineATogglePlanes(8, 0);
    // strh r2, [r1]
    // add r1, sp, #4
    BG_LoadPlttData(3, 0x0400000E, 2, 0xc4);
    // str r2, [sp]
    BG_FillCharDataRange(*((u32*)(r4 + 8)), 3, 2, 1);
    BgFillTilemapBufferAndCommit(*((u32*)(r4 + 8)), 3, 0x00006002);
    GfGfx_EngineATogglePlanes(8, 1);
    ov01_021FC1E0(r4);
}




u8 ov01_021FC2C4(void) {
}




void ov01_021FC2C8(void) {
    ov01_021EB31C(*((u32*)(*((u32*)(r0 + 4)) + 0xc)));
}




void ov01_021FC2F0(void) {
    // str r0, [r4]
}




u8 GetHoneySweetScentWorkSize(void) {
}




u32 Task_HoneyOrSweetScent(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r6);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021FC336: ; jump table
    ov01_021FC2C8(r5, (*((u16*)(*((u16*)(r0 + 8)) + 6)) << 0x10));
    *((u16*)(r4 + 8)) = 1;
    ov01_021FC2C4(r5);
    *((u32*)(r4 + 4)) = r0;
    ov01_021FC1EC(r5);
    *((u16*)(r4 + 8)) = 7;
    *((u16*)(r4 + 0xa)) = 0x14;
    ov01_021FC110(r5);
    // str r0, [r4]
    *((u16*)(r4 + 8)) = 2;
    SetBgPriority(2, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    ov01_021FC12C(*((u32*)r4));
    *((u16*)(r4 + 0xa)) = 0x16;
    *((u16*)(r4 + 8)) = 3;
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0xa)) = (0xa - 1);
    MapHeader_HasWildEncounters(*((u32*)*((u32*)(r5 + 0x20))));
    // ldrsh r0, [r4, r0]
    PlayerAvatar_GetXCoord(*((u32*)(r5 + 0x40)));
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    GetMetatileBehavior(r5, r6, r0);
    FieldSystem_CanGenerateStepEncounter(r5, r0);
    *((u16*)(r4 + 8)) = 6;
    *((u16*)(r4 + 8)) = 4;
    *((u16*)(r4 + 8)) = 4;
    ov01_021FC124(*((u32*)r4));
    ov01_021FC138(r5);
    // str r0, [r4]
    *((u16*)(r4 + 8)) = 5;
    ov01_021FC12C(*((u32*)r4));
    GfGfx_EngineATogglePlanes(4, 0);
    // strh r1, [r0]
    SetBgPriority(2, 3);
    *((u16*)(r4 + 8)) = 8;
    ov01_021FC2F0(8);
    ov01_021FC260(r5);
    FieldSystem_PerformSweetScentEncounterCheck(r5, r6);
    GF_AssertFail();
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 0xa)) = (r1 - 1);
    // ldrsh r0, [r4, r0]
    QueueScript(r6, 0x000007E3, 0, 0);
    *((u16*)(r4 + 8)) = 9;
    QueueScript(r6, 0x000007E2, 0, 0);
    *((u16*)(r4 + 8)) = 9;
    ov01_021FC2F0(9);
    ov01_021FC1FC(r5);
    BgFillTilemapBufferAndCommit(*((u32*)(r5 + 8)), 2, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    GF_AssertFail(1);
}



