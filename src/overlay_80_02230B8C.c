/* Decompiled from asm/overlay_80_02230B8C.s */
#include "global.h"

void FrtCmd_139(void) {
    // str r0, [sp, #4]
    // str r1, [sp]
    // ldr r1, [sp, #4]
}




u32 FrtCmd_140(void) {
}




u32 FrtCmd_141(void) {
}




void FrtCmd_142(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r6)));
    Heap_Alloc(0xb, 0x20);
    MI_CpuFill8(0, 0x20);
    // str r0, [r5]
    // add r3, r4, r1
    // sub r1, #0xf
    *((u8*)(r5 + 4)) = *((u8*)(r4 + 4));
    *((u32*)(r5 + 0x10)) = r4;
    // add r0, r2, r0
    // add r0, r3, r0
    *((u32*)(r5 + 8)) = (*((u8*)(r4 + 4)) << 3);
    *((u32*)(r5 + 0xc)) = *((u32*)(r4 + (0x99 << 2)));
    *((u16*)(r5 + 0x18)) = *((u16*)(r4 + 8));
    *((u8*)(r5 + 5)) = *((u8*)(r4 + 0x00000704));
    // add r0, r4, r0
    *((u32*)(r5 + 0x14)) = 0x00000D84;
    SaveArray_Party_Init(*((u32*)(r5 + 0xc)), 0x00000704, *((u8*)(r4 + 4)));
    SaveArray_Party_Get(*((u32*)(r7 + 8)));
    Party_GetMonByIndex(*((u8*)(r4 + (0x26 << 4))));
    Party_AddMon(*((u32*)(r5 + 0xc)), r0);
    Party_GetMonByIndex(r7, *((u8*)(r4 + 0x00000261)));
    Party_AddMon(*((u32*)(r5 + 0xc)), r0);
    // add r0, #0xfe
    Party_AddMon(*((u32*)(r5 + 0xc)), *((u32*)(r4 + 0x00000D8C)));
    // str r0, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r6)), ov80_0223BDEC, r5, 0);
}




void FrtCmd_143(void) {
    // ldr r5, [r4, r0]
}




void FrtCmd_144(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r5)));
    ov80_022375D0(r6);
    // str r6, [r4, r0]
    Sound_SetSceneAndPlayBGM(5, 0x0000045D, 1);
    // str r3, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r5)), gOverlayTemplate_Battle, r6, 0);
}




void ov80_02230D5C(void) {
}




void FrtCmd_145(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    *((u32*)(r0 + 0x1c)) = ((*((u32*)(r0 + 0x1c)) + 1) + 1);
    *((u32*)(r0 + 0x1c)) = (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1);
    FrontierScript_ReadVarPtr((((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1), (*((u32*)(r0 + 0x1c)) + 1));
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r4)));
    // str r0, [sp, #4]
    Frontier_GetData(*((u32*)*((u32*)r4)));
    // add r1, r7, r7
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02230DB4: ; jump table
    *((u8*)(r0 + 4)) = r6;
    // strh r0, [r5]
    // strh r0, [r5]
    *((u16*)(r0 + 8)) = (*((u16*)(r0 + 8)) + 1);
    OS_ResetSystem(0, *((u16*)(r0 + 8)));
    sub_02030B14(*((u32*)(r4 + 0x000006F8)));
    // strh r0, [r5]
    ov80_0223157C(2);
    ov80_022317C0();
    // strh r0, [r5]
    // strh r0, [r5]
    // strh r0, [r5]
    ov80_022317D0(*((u16*)(r4 + 0xa)), r6);
    // strh r0, [r5]
    ov80_02231804();
    ov80_02231828();
    ov80_022317CC();
    // strh r0, [r5]
    // strh r0, [r5]
    // ldr r0, [sp, #4]
    SaveArray_Party_Get(*((u32*)(*((u8*)(r4 + 0x00000D88)) + 8)));
    // str r0, [sp]
    ov80_0223787C(*((u8*)(r4 + 4)));
    // add r6, r4, r0
    // add r2, r4, r5
    // ldr r0, [sp]
    Party_GetMonByIndex(0x00000728, *((u8*)(r2 + (0x26 << 4))));
    SetMonData(6, r6);
    // add r1, #0xf
    // add r3, r4, r1
    // add r1, r2, r1
    // add r1, r3, r1
    sub_02030BD0(*((u8*)(r4 + 0x000006F5)), (*((u8*)(r4 + 4)) << 3), *((u8*)(r4 + 4)));
    // add r1, #0xf
    // add r5, r4, r1
    // add r1, r3, r1
    // add r1, r5, r1
    sub_02030BF4(*((u8*)(r4 + 0x000006F5)), (*((u8*)(r4 + 4)) << 3), (((r0 + 1) << 0x18) >> 0x18), *((u8*)(r4 + 4)));
    sub_02096910();
    ov80_0223792C(*((u8*)(r4 + 4)));
    // strh r0, [r5]
    // strh r0, [r5]
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    // add r0, #0x40
    // add r1, r4, r1
    ov80_0222A474(*((u16*)((*((u8*)(r4 + 5)) << 2) + 0x18)), 0xb, 0xcc);
    // add r1, r4, r1
    // add r0, r4, r0
    ov80_0222A474((0x15 << 4), *((u16*)((((*((u8*)(r4 + 5)) << 1) + 1) << 1) + 0x18)), 0xb, 0xcc);
    // add r1, #0xf
    // add r3, r4, r1
    // add r1, r2, r1
    // add r1, r3, r1
    sub_02030BD0(*((u8*)(r4 + 0x000006F5)), (*((u8*)(r4 + 4)) << 3), *((u8*)(r4 + 4)));
    // strh r0, [r5]
    ov80_02231888();
    // strh r0, [r5]
    // ldr r0, [sp, #4]
    SaveArray_Party_Get(*((u32*)(r0 + 8)));
    Party_GetMonByIndex(*((u8*)(r4 + (0x26 << 4))));
    GetMonData(5, 0);
    // strh r0, [r5]
    ov80_022319B0();
    ov80_02231A04();
    // strh r0, [r5]
    // strh r0, [r5]
    // strh r0, [r5]
}




u32 FrtCmd_146(void) {
}




u32 FrtCmd_147(void) {
}




void FrtCmd_148(void) {
    FrontierScriptContext_ReadHalfWord();
    // add r1, #0x78
    // strh r0, [r1]
    FrontierScriptContext_Pause(r4, ov80_02231040);
}




void ov80_02231040(void) {
    // add r1, #0x78
    // strb r2, [r0, r1]
}




void FrtCmd_149(void) {
    // add r1, r4, r1
    // add r2, #0x58
    // add r1, r2, r1
}




u32 FrtCmd_118(void) {
}




u8 FrtCmd_199(void) {
}



