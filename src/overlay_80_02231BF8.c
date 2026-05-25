/* Decompiled from asm/overlay_80_02231BF8.s */
#include "global.h"

void FrtCmd_151(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r6, [sp]
    // ldr r1, [sp, #0x14]
    // str r7, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #0x10]
}




u32 FrtCmd_152(void) {
}




u32 FrtCmd_153(void) {
}




void FrtCmd_154(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r5)));
    Heap_Alloc(0xb, 0x30);
    MI_CpuFill8(0, 0x30);
    // str r0, [r4]
    ov80_02231E4C(r4, r7);
    // str r0, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r5)), ov80_0223BE34, r4, 0);
}




void FrtCmd_164(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r5)));
    Heap_Alloc(0xb, 0x30);
    MI_CpuFill8(0, 0x30);
    // str r0, [r4]
    ov80_02231E4C(r4, r7);
    // str r0, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r5)), ov80_0223BE24, r4, 0);
}




void FrtCmd_155(void) {
}




void FrtCmd_156(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r5)));
    ov80_02237B8C(r6);
    *((u32*)(r4 + 0xc)) = r0;
    // str r3, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r5)), gOverlayTemplate_Battle, r0, 0);
}




void FrtCmd_157(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r5)));
    Heap_Alloc(0xb, 0x30);
    MI_CpuFill8(0, 0x30);
    // str r0, [r4]
    ov80_02231E4C(r4, r7);
    // str r0, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r5)), ov80_0223BE44, r4, 0);
}




void ov80_02231E4C(void) {
    *((u8*)(r0 + 4)) = *((u8*)(r1 + 0x10));
    *((u32*)(r0 + 0x18)) = *((u32*)(r1 + 0x28));
    *((u32*)(r0 + 0x1c)) = *((u32*)(r1 + 0x2c));
    *((u32*)(r0 + 0x24)) = r1;
    *((u16*)(r0 + 0x28)) = *((u16*)(r1 + 0x00000A1C));
    // add r5, r1, r6
    // add r4, r0, r6
    *((u8*)(r4 + 8)) = *((u8*)(r5 + (0x37 << 4)));
    *((u8*)(r4 + 0xc)) = *((u8*)(r5 + (0xdd << 2)));
    *((u8*)(r4 + 0x10)) = *((u8*)(r5 + (0xde << 2)));
    *((u8*)(r4 + 0x14)) = *((u8*)(r5 + ((0xde << 2) + 4)));
}




void ov80_02231E94(void) {
}




u32 FrtCmd_158(void) {
}




u32 FrtCmd_159(void) {
}




void FrtCmd_160(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x18]
    *((u32*)(r0 + 0x1c)) = ((*((u32*)(r0 + 0x1c)) + 1) + 1);
    *((u32*)(r0 + 0x1c)) = (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1);
    // str r1, [sp, #0x14]
    FrontierScript_ReadVarPtr(*((u8*)((*((u32*)(r0 + 0x1c)) + 1) + 1)), (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1), ((*((u32*)(r0 + 0x1c)) + 1) + 1));
    // ldr r0, [sp, #0x10]
    Frontier_GetData(*((u32*)*((u32*)r0)));
    // ldr r0, [sp, #0x10]
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    // ldr r0, [sp, #0x18]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231F24: ; jump table
    *((u8*)(r4 + 0x10)) = r6;
    // add r1, r4, r0
    // strh r0, [r5]
    // strh r0, [r5]
    *((u16*)(r4 + 0x14)) = (*((u16*)(r4 + 0x14)) + 1);
    OS_ResetSystem(0, *((u16*)(r4 + 0x14)));
    sub_02030CD8(*((u32*)(r4 + 8)));
    // strh r0, [r5]
    ov80_02232B58(r4, 2);
    ov80_02232E58(r4);
    // strh r0, [r5]
    // add r1, r4, r0
    // strh r0, [r5]
    // add r1, r4, r0
    // ldr r0, [sp, #0x14]
    // add r1, r1, r0
    // strh r0, [r5]
    SaveArray_Party_Get(*((u32*)(r7 + 8)));
    // add r6, r4, r0
    // add r1, r4, r5
    // add r1, #0x24
    Party_GetMonByIndex(r0, *((u8*)r1));
    SetMonData(6, r6);
    ov80_02237ED8(r4);
    // strh r0, [r5]
    ov80_02232E68(r4, r6);
    // strh r0, [r5]
    ov80_02232E9C(r4);
    ov80_02232EE0(r4);
    ov80_02232E64(r4);
    // strh r0, [r5]
    // strh r0, [r5]
    // strh r0, [r5]
    ov80_02233020(r4);
    // strh r0, [r5]
    ov80_022331E8(*((u32*)(r4 + 4)), *((u8*)(r4 + 0x10)), *((u16*)r5));
    ov80_02232F60(r4);
    sub_02096910(r4);
    // strh r0, [r5]
    // strh r0, [r5]
    // strb r2, [r4, r0]
    // strb r2, [r4, r1]
    // strb r2, [r4, r0]
    // strb r6, [r4, r0]
    sub_0203769C(*((u8*)(r4 + 0x00000A1B)), (0x00000A1B - 2), 0);
    sub_0203769C();
    Save_Frontier_GetStatic(*((u32*)(r7 + 8)));
    ov80_02237FA4(*((u8*)(r4 + 0x10)), 0x32);
    // sub r1, #0x32
    // strh r1, [r4, r0]
    // strh r0, [r5]
    ov80_02237D8C(*((u8*)(r4 + 0x10)), *((u16*)(r4 + 0x00000A1C)));
    sub_0203769C(*((u8*)(r4 + 0x00000A1B)));
    // strh r0, [r5]
    sub_0203769C(1);
    // strh r0, [r5]
    ov80_02237D8C(*((u8*)(r4 + 0x10)));
    // strh r0, [r5]
    // strh r0, [r5]
    // strh r0, [r5]
    // ldr r0, [sp, #0x10]
    FrontierSystem_GetFrontierMap(*((u32*)*((u8*)(r4 + 0x12))));
    ov80_02237EFC(*((u32*)r0), r4, 3);
    // add r0, #0x4c
    // add r1, r4, r1
    ov80_0222A474(r4, *((u16*)((*((u8*)(r4 + 0x11)) << 1) + 0x30)), 0xb, 0xcc);
    // add r1, r4, r1
    // add r0, r4, r0
    ov80_0222A474((0x57 << 2), *((u16*)(((*((u8*)(r4 + 0x11)) + 7) << 1) + 0x30)), 0xb, 0xcc);
    ov80_02233648(r4);
    // strh r0, [r5]
    sub_02030E08(*((u32*)(r7 + 8)));
    // str r2, [sp]
    sub_02030E58(0xa, 0, 0);
    // strh r0, [r5]
    // add r0, sp, #0x20
    // strb r1, [r0]
    sub_02030E08(*((u32*)(r7 + 8)), 1);
    // add r1, sp, #0x20
    // str r1, [sp]
    sub_02030E18(0xa, 0, 0);
    // strh r0, [r5]
    // strh r0, [r5]
    // strh r0, [r5]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r4, r3
    // sub r1, #0x1c
    // sub r2, #0x14
    // sub r3, #0x10
    // add r1, r4, r1
    // add r2, r4, r2
    // add r3, r4, r3
    ov80_0222A52C(0xcd, (0xa2 << 2), (0xa2 << 2), (0xa2 << 2));
    ov80_02237E30(r4);
    // strh r0, [r5]
    *((u8*)(r4 + 0x13)) = 1;
    Save_Frontier_GetStatic(*((u32*)(r7 + 8)));
    sub_0205C1F0(*((u8*)(r4 + 0x10)));
    // str r0, [sp, #0x1c]
    sub_0205C1F0(r5);
    sub_0205C268();
    // ldr r1, [sp, #0x1c]
    FrontierSave_GetStat(r6, r0);
    *((u16*)(r4 + 0x22)) = r0;
    Save_Frontier_GetStatic(*((u32*)(r7 + 8)));
    sub_0205C1F0(*((u8*)(r4 + 0x10)));
    sub_0205C1F0(*((u8*)(r4 + 0x10)));
    sub_0205C268();
    sub_02031108(r5, r6, r0, *((u16*)(r4 + 0x20)));
    Save_Frontier_GetStatic();
    sub_0205C1F0(*((u8*)(r4 + 0x10)));
    sub_0205C1F0(r5);
    sub_0205C268();
    sub_02031108(r6, r7, r0, *((u16*)(r4 + 0x22)));
}




u32 FrtCmd_161(void) {
}




u32 FrtCmd_162(void) {
}




void FrtCmd_163(void) {
    FrontierScriptContext_ReadHalfWord();
    // add r1, #0x78
    // strh r0, [r1]
    FrontierScriptContext_Pause(r4, ov80_02232318);
}




void ov80_02232318(void) {
    // add r1, #0x78
    ov80_0222BE9C(*((u16*)r0));
    Frontier_GetData(*((u32*)*((u32*)r4)));
    // strb r2, [r0, r1]
}




void FrtCmd_165(void) {
    FrontierScriptContext_ReadHalfWord();
    // add r1, #0x78
    // strh r0, [r1]
    FrontierScriptContext_Pause(r4, ov80_02232368);
}




void ov80_02232368(void) {
    // add r1, #0x78
    ov80_0222BE24(*((u16*)r0));
    Frontier_GetData(*((u32*)*((u32*)r5)));
    // strb r3, [r0, r1]
    // strh r0, [r4]
}




u32 FrtCmd_080(void) {
}




u32 FrtCmd_081(void) {
}




u32 FrtCmd_082(void) {
}




void FrtCmd_166(void) {
    // strh r0, [r6]
}




void FrtCmd_167(void) {
}




void FrtCmd_168(void) {
}




void FrtCmd_169(void) {
    // add r1, r4, r1
    // add r2, #0x64
    // add r1, r2, r1
}



