/* Decompiled from asm/overlay_80_0222F608.s */
#include "global.h"

void FrtCmd_092(void) {
}




u32 FrtCmd_093(void) {
}




u32 FrtCmd_094(void) {
}




void FrtCmd_095(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r6)));
    Heap_Alloc(0xb, 0x24);
    MI_CpuFill8(0, 0x24);
    // str r0, [r4]
    *((u8*)(r4 + 4)) = *((u8*)(r5 + 4));
    *((u8*)(r4 + 5)) = *((u8*)(r5 + 5));
    *((u8*)(r4 + 6)) = 0;
    *((u32*)(r4 + 8)) = *((u32*)(r5 + 0x000004D4));
    *((u32*)(r4 + 0xc)) = *((u32*)(r5 + (0x000004D4 + 4)));
    *((u32*)(r4 + 0x1c)) = r5;
    // str r0, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r6)), ov80_0223BDB4, r4, 0);
}




void FrtCmd_096(void) {
    Frontier_GetData(*((u32*)*((u32*)r0)));
    IsBattleResultWin(*((u32*)(*((u32*)(r0 + 0x000004FC)) + 0x14)));
    *((u32*)(r4 + 0x14)) = r0;
    BattleSetup_Delete(r5);
}




void FrtCmd_097(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r5)));
    ov80_02236F24(r6);
    // str r2, [r4, r0]
    // str r3, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r5)), gOverlayTemplate_Battle, r0, 0);
}




void FrtCmd_098(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r6)));
    // strh r1, [r3, r0]
    Heap_Alloc(0xb, 0x24, (0 + 1), (r0 + 2));
    MI_CpuFill8(0, 0x24);
    // str r0, [r4]
    *((u8*)(r4 + 4)) = *((u8*)(r5 + 4));
    *((u8*)(r4 + 5)) = *((u8*)(r5 + 5));
    *((u8*)(r4 + 6)) = 1;
    *((u32*)(r4 + 8)) = *((u32*)(r5 + 0x000004D4));
    *((u32*)(r4 + 0xc)) = *((u32*)(r5 + (0x000004D4 + 4)));
    *((u32*)(r4 + 0x1c)) = r5;
    // str r0, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r6)), ov80_0223BDC4, r4, 0);
}




void ov80_0222F7CC(void) {
}




u32 FrtCmd_099(void) {
}




u32 FrtCmd_100(void) {
}




u32 FrtCmd_101(void) {
}




u32 FrtCmd_102(void) {
}




void FrtCmd_103(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    *((u32*)(r0 + 0x1c)) = ((*((u32*)(r0 + 0x1c)) + 1) + 1);
    *((u32*)(r0 + 0x1c)) = (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1);
    // str r1, [sp, #0x1c]
    FrontierScript_ReadVarPtr(*((u8*)((*((u32*)(r0 + 0x1c)) + 1) + 1)), ((*((u32*)(r0 + 0x1c)) + 1) + 1));
    // str r0, [sp, #0x18]
    Frontier_GetData(*((u32*)*((u32*)r6)));
    FrontierSystem_GetFrontierMap(*((u32*)r6));
    // str r0, [sp, #0x20]
    // add r0, r7, r7
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222F874: ; jump table
    *((u8*)(r4 + 7)) = r5;
    *((u8*)(r4 + 5)) = r5;
    *((u8*)(r4 + 4)) = r5;
    // add r1, r4, r0
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    *((u16*)(r4 + 0xc)) = (*((u16*)(r4 + 0xc)) + 1);
    OS_ResetSystem(0, *((u16*)(r4 + 0xc)));
    sub_0203095C(*((u32*)(r4 + 0x000004F4)));
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    ov80_0223049C(r4, 2);
    ov80_02230784(r4);
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // add r1, r4, r0
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // add r1, r4, r0
    // ldr r0, [sp, #0x1c]
    // add r1, r1, r0
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    AllocMonZeroed(0xb, *((u16*)(((*((u16*)(r1 + (0x3f << 4))) << 0x15) >> 0x15) + (0xfd << 2))));
    ov80_02237120(r4);
    // add r1, r4, r0
    // add r0, r1, r0
    ov80_0222A140((0x38 * r5), r6, r0);
    GetMonData(r6, 0xb1, 0);
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    Heap_Free(r6);
    ov80_02236DF8(*((u8*)(r4 + 4)), 1);
    // str r0, [sp, #0x14]
    // add r2, sp, #0x24
    // stmia r2!, {r0}
    AllocMonZeroed(0xb, (0 + 1));
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r6, r4, r0
    ov80_02237120(r4);
    ov80_0222A140(r6, r5, r0);
    GetMonData(r5, 0xb1, 0);
    GetMonData(r5, 0xb2, 0);
    // add r2, sp, #0x24
    // add r2, sp, #0x24
    // str r3, [r2, r1]
    // add r1, sp, #0x24
    // str r2, [r1, r0]
    // ldr r0, [sp, #0x10]
    // add r6, #0x38
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0x10]
    Heap_Free(r5, ((0xff << 2) + 1), (*((u32*)(*((u32*)(r2 + (r7 << 2))) + (0xff << 2))) + 1), (*((u32*)(r2 + (r7 << 2))) + 1));
    // add r4, sp, #0x24
    // add r1, sp, #0x24
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    ov80_022372B4((r4 + 4), 0xff, (0 << 2), r4);
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    ov80_02230794(r4, r5);
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    ov80_022307C8(r4);
    ov80_022307D4(r4);
    ov80_02230790(r4);
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    sub_02096910(r4, *((u8*)(r4 + 0x0000057D)));
    ov80_02237254(*((u8*)(r4 + 4)));
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r5, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)0xb), 3, 3, 0xa);
    // ldr r0, [sp, #0x20]
    ScheduleBgTilemapBufferTransfer(*((u32*)r0), 3);
    FrontierSystem_GetFrontierMap(*((u32*)r6));
    SysTask_CreateOnMainQueue(ov80_0222FC08, r0, 5);
    // str r0, [r4, r1]
    SysTask_Destroy(*((u32*)(r4 + (5 << 8))), (5 << 8));
    // str r1, [r4, r0]
    // add r0, #0x34
    // add r1, r4, r1
    ov80_0222A474(r4, *((u16*)((*((u8*)(r4 + 6)) << 1) + 0x18)), 0xb, 0xcc);
    // add r1, r4, r1
    // add r0, r4, r0
    ov80_0222A474((0x51 << 2), *((u16*)(((*((u8*)(r4 + 6)) + 7) << 1) + 0x18)), 0xb, 0xcc);
    ov80_02236DD4(*((u8*)(r4 + 4)));
    Party_GetMonByIndex(*((u32*)(r4 + 0x000004D4)), 0);
    Mon_GetBoxMon();
    BufferBoxMonSpeciesName(*((u32*)(*((u32*)r6) + 0x44)), r5, r0);
    ov80_02230B4C(r4);
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    ov80_02230AE4(r4);
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    ov80_022371B0(r4, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r4, r3
    // sub r1, #0x1e
    // sub r2, #0x16
    // sub r3, #0x10
    // add r1, r4, r1
    // add r2, r4, r2
    // add r3, r4, r3
    ov80_0222A52C(0xcd, (0x3f << 4), (0x3f << 4), (0x3f << 4));
    ov80_02237130(r4);
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    *((u8*)(r4 + 0xb)) = 1;
}




void ov80_0222FC08(void) {
}




u32 FrtCmd_104(void) {
}




u32 FrtCmd_105(void) {
}




void FrtCmd_106(void) {
    FrontierScriptContext_ReadHalfWord();
    // add r1, #0x78
    // strh r0, [r1]
    FrontierScriptContext_Pause(r4, ov80_0222FCA0);
}




void ov80_0222FCA0(void) {
    // add r1, #0x78
    ov80_0222BE9C(*((u16*)r0));
    Frontier_GetData(*((u32*)*((u32*)r4)));
    // strb r2, [r0, r1]
}




void FrtCmd_107(void) {
    // add r1, r4, r1
    // add r2, #0x4c
    // add r1, r2, r1
}



