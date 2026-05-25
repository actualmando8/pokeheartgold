/* Decompiled from asm/overlay_80_0222BDF4.s */
#include "global.h"

void FrontierScript_ReadVarPtr(void) {
}




void FrontierScript_ReadVar(void) {
}




void ov80_0222BE24(void) {
    // add r2, #8
    // sub r1, r1, r3
    // add r0, #8
    // add r0, r0, r1
    // add r2, #0x10
    // add r3, #8
    // sub r1, r1, r3
    ov80_0222AB2C(*((u32*)0), (r1 << 1), (2 << 0xe), (2 << 0xe));
    // add r2, #0x14
    // add r3, #0x10
    // sub r1, r1, r3
    // add r0, #0x78
    // add r0, r0, r1
    GF_AssertFail(0, (r1 << 1), r3);
}




void ov80_0222BE9C(void) {
}




u8 FrtCmd_000(void) {
}




void FrtCmd_001(void) {
}




u32 FrtCmd_002(void) {
}




void FrtCmd_003(void) {
    FrontierScript_ReadVar();
    sub_02096854(*((u32*)r4), r0, 0x0000FFFF);
    FrontierScriptContext_Pause(r5, ov80_0222BEFC);
}




u8 ov80_0222BEFC(void) {
}




u32 FrtCmd_004(void) {
}




void FrtCmd_005(void) {
    FrontierScriptContext_ReadHalfWord();
    FrontierScriptContext_ReadHalfWord(r5);
    ov80_0222BE24(r5, r0);
    // strh r4, [r0]
    // add r0, #0x78
    // strh r6, [r0]
    FrontierScriptContext_Pause(r5, ov80_0222BF5C);
}




void ov80_0222BF5C(void) {
}




u32 FrtCmd_006(void) {
}




u32 FrtCmd_007(void) {
}




u32 FrtCmd_008(void) {
}




void FrtCmd_009(void) {
    // sub r0, r1, r0
    // strh r0, [r4]
}




void ov80_0222BFE4(void) {
    // cmp r0, r1
    // bhs _0222BFEC
    // mov r0, #0
    // bx lr
    // cmp r0, r1
    // bne _0222BFF4
    // mov r0, #1
    // bx lr
    // mov r0, #2
    // bx lr
    // TODO: decompile
}




u32 FrtCmd_032(void) {
}




u32 FrtCmd_033(void) {
}




void ov80_0222C03C(void) {
}




u32 FrtCmd_010(void) {
}




void FrtCmd_011(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    FrontierScriptContext_ReadWord((*((u32*)(r0 + 0x1c)) + 1), *((u32*)(r0 + 0x1c)));
    // add r4, r4, r0
    // add r0, #0x8c
    // add r0, r3, r4
    // add r1, r2, r1
    ov80_0222C03C(r5, r0, *((u32*)(r5 + 0x1c)), ov80_0223B9D8);
}




u32 FrtCmd_012(void) {
}




void FrtCmd_013(void) {
}




void FrtCmd_014(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    FrontierScriptContext_ReadWord((*((u32*)(r0 + 0x1c)) + 1), *((u32*)(r0 + 0x1c)));
    // add r4, r4, r0
    // add r0, #0x8c
    // add r0, r3, r4
    // add r1, r2, r1
    FrontierScriptContext_Call(r5, r0, *((u32*)(r5 + 0x1c)), ov80_0223B9D8);
}




void FrtCmd_015(void) {
    // add r0, sp, #4
    // strb r3, [r0]
    // add r0, sp, #4
    // str r0, [sp]
    // add r4, #0x80
}




void FrtCmd_016(void) {
    FrontierScriptContext_ReadHalfWord();
    // str r3, [sp]
    // add r1, #0x80
    ov80_0222E268(*((u32*)r4), *((u32*)r4), r0, 0);
    FrontierScriptContext_Pause(r4, ov80_0222C17C);
}




void FrtCmd_017(void) {
    FrontierScriptContext_ReadHalfWord();
    // str r0, [sp]
    // add r1, #0x80
    ov80_0222E268(*((u32*)r4), *((u32*)r4), r0, 1);
    FrontierScriptContext_Pause(r4, ov80_0222C17C);
}




void ov80_0222C17C(void) {
    // add r0, #0x50
}




void FrtCmd_018(void) {
}




void FrtCmd_019(void) {
    // str r4, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
}




void FrtCmd_020(void) {
}




void ov80_0222C200(void) {
}




void FrtCmd_021(void) {
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r5, #0x78
    // strh r0, [r5]
}




void FrtCmd_022(void) {
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x80
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r5, #0x78
    // strh r0, [r5]
}




u32 FrtCmd_023(void) {
}




u32 FrtCmd_024(void) {
}




void FrtCmd_025(void) {
    ov80_0222E5B0(*((u32*)(*((u32*)r0) + 0x60)));
    FrontierScriptContext_Pause(r4, ov80_0222C33C);
}




void ov80_0222C33C(void) {
    // add r1, #0x78
    ov80_0222BE24(*((u16*)r0));
}




void FrtCmd_026(void) {
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r5, #0x78
    // strh r0, [r5]
}




void FrtCmd_027(void) {
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x80
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r5, #0x78
    // strh r0, [r5]
}




u32 FrtCmd_028(void) {
}




void FrtCmd_029(void) {
    ov80_0222E948(*((u32*)(*((u32*)r0) + 0x60)));
    FrontierScriptContext_Pause(r4, ov80_0222C33C);
}




void FrtCmd_030(void) {
}




void FrtCmd_031(void) {
    FrontierSystem_GetFrontierMap(*((u32*)r0));
    FrontierScriptContext_ReadHalfWord(r5);
    *((u32*)(r5 + 0x1c)) = (*((u32*)(r5 + 0x1c)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    CreateYesNoMenu(*((u32*)r6), ov80_0223B9D0, 0x000003D9, 0xc);
    *((u32*)(r4 + 0x74)) = r0;
    // add r0, #0x78
    // strh r7, [r0]
    FrontierScriptContext_Pause(r5, ov80_0222C4D0);
}




void ov80_0222C4D0(void) {
    // add r1, #0x78
    ov80_0222BE24(*((u16*)r0));
    Handle2dMenuInput_DeleteOnFinish(*((u32*)(r4 + 0x74)), *((u32*)(r4 + 0x34)));
    // mvn r0, r0
    System_GetTouchNew(0);
    PlaySE(0x000005DC);
    Get2dMenuSelection(*((u32*)(r4 + 0x74)));
    Clear2dMenuWindowAndDelete(*((u32*)(r4 + 0x74)), *((u32*)(r4 + 0x34)));
    // strh r0, [r5]
}




void FrtCmd_034(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    sub_0209680C(*((u32*)*((u32*)r0)));
    // ldr r0, [sp]
    FrontierScriptContext_ReadWord();
    // ldr r1, [sp]
    // str r1, [sp, #4]
    // add r1, r1, r0
    // ldr r0, [sp]
    *((u32*)(r0 + 0x1c)) = *((u32*)(r1 + 0x1c));
    // ldr r0, [sp]
    FrontierScript_ReadVar(*((u32*)(r1 + 0x1c)));
    // add r1, sp, #0xc
    // strh r0, [r1]
    // ldr r0, [sp]
    *((u32*)(0x0000FD13 + 0x1c)) = (*((u32*)(0x0000FD13 + 0x1c)) + 1);
    *((u8*)(r1 + 2)) = *((u8*)*((u32*)(0x0000FD13 + 0x1c)));
    // ldr r0, [sp, #8]
    Frontier_GetLaunchArgs(*((u32*)0x0000EEEE), *((u16*)r1), (*((u32*)(0x0000FD13 + 0x1c)) + 1), *((u32*)(0x0000FD13 + 0x1c)));
    Save_PlayerData_GetProfile(*((u32*)(r0 + 8)));
    ov80_0222A7EC();
    // add r1, sp, #0xc
    // strh r0, [r1]
    // add r1, sp, #0xc
    ov80_0223947C(r4);
    sub_02037474((r0 + 1));
    sub_02037454();
    // add r7, sp, #0xc
    sub_02034818(0);
    ov80_0222A7EC();
    // strh r0, [r7]
    // add r1, sp, #0xc
    ov80_0223947C(r4);
    // add r1, sp, #0xc
    ov80_0223947C(r4);
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    *((u32*)(r0 + 0x1c)) = r1;
}




u32 FrtCmd_035(void) {
}




void FrtCmd_036(void) {
    // str r0, [sp, #8]
    sub_0209680C(*((u32*)*((u32*)r0)));
    // str r0, [sp, #4]
    FrontierScriptContext_ReadWord(r5);
    // add r0, r1, r0
    // str r1, [sp]
    *((u32*)(r5 + 0x1c)) = r0;
    // add r4, #0x1c
    // add r6, sp, #0xc
    // mvn r7, r7
    FrontierScript_ReadVar(r5, *((u32*)(r5 + 0x1c)));
    *((u16*)(r6 + 4)) = r0;
    FrontierScript_ReadVar(r5, *((u16*)(r6 + 4)));
    // strh r0, [r6]
    // str r0, [r4]
    *((u8*)(r6 + 0xa)) = *((u8*)*((u32*)(r5 + 0x1c)));
    FrontierScriptContext_ReadHalfWord(r5, *((u32*)(r5 + 0x1c)));
    // sub r0, #8
    *((u16*)(r6 + 6)) = r0;
    FrontierScriptContext_ReadHalfWord(r5);
    // sub r0, #0x10
    *((u16*)(r6 + 8)) = r0;
    // str r0, [r4]
    *((u8*)(r6 + 0xb)) = *((u8*)*((u32*)(r5 + 0x1c)));
    // str r0, [r4]
    *((u8*)(r6 + 0xc)) = *((u8*)*((u32*)(r5 + 0x1c)));
    *((u16*)(r6 + 2)) = 0;
    // ldr r0, [sp, #8]
    Frontier_GetLaunchArgs(*((u32*)0x0000EEEE), *((u16*)r6));
    Save_PlayerData_GetProfile(*((u32*)(r0 + 8)));
    ov80_0222A7EC();
    // strh r0, [r6]
    // str r0, [r4]
    sub_02034818(*((u8*)*((u32*)(r5 + 0x1c))), *((u32*)(r5 + 0x1c)));
    ov80_0222A7EC();
    // strh r0, [r6]
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    ov80_02239510(r7);
    // ldr r0, [sp]
    *((u32*)(r5 + 0x1c)) = r0;
}




u32 FrtCmd_037(void) {
}




void FrtCmd_038(void) {
    // str r2, [sp]
    // add r3, sp, #0
    // ldr r0, [sp]
    // ldr r0, [sp]
}




u8 FrtCmd_039(void) {
}




void FrtCmd_040(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, #0x59
    // str r0, [sp]
    // ldr r3, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, r2, r6
    // add r0, #0x59
    // add r4, #0x59
    // strb r0, [r4]
}




void ov80_0222C7B0(void) {
    // ldr r0, [sp, #0x1c]
    // str r3, [sp]
    Heap_Alloc(0x18);
    MI_CpuFill8(0, 0x18);
    *((u32*)(r4 + 0x14)) = r5;
    // ldr r0, [sp]
    *((u32*)(r4 + 0xc)) = r7;
    *((u32*)(r4 + 0x10)) = r0;
    // ldr r0, [sp, #0x18]
    *((u16*)(r4 + 4)) = r6;
    *((u32*)(r4 + 8)) = r0;
    GF_AssertFail(*((u32*)(r5 + 0x38)));
    SysTask_CreateOnMainQueue(ov80_0222EEC8, r4, 0x0000EAC4);
    *((u32*)(r5 + 0x38)) = r0;
}




void FrtCmd_041(void) {
}




void ov80_0222C80C(void) {
    // add r0, #0x59
}




void FrtCmd_042(void) {
    sub_0209680C(*((u32*)*((u32*)r0)));
    FrontierScriptContext_ReadWord(r6);
    // add r0, r1, r0
    *((u32*)(r6 + 0x1c)) = r0;
    // str r1, [sp, #4]
    NARC_New(0xb8, *((u32*)(r4 + 0x34)));
    FrontierScript_ReadVar(r6);
    // str r4, [sp]
    ov80_02239AF8(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)), r7, *((u32*)(r5 + 4)));
    ov80_0223962C(r5, r4);
    NARC_Delete(r7);
    // ldr r0, [sp, #4]
    *((u32*)(r6 + 0x1c)) = r0;
}




u32 FrtCmd_043(void) {
}




void FrtCmd_044(void) {
    sub_0209680C(*((u32*)*((u32*)r0)));
    FrontierScriptContext_ReadWord(r5);
    // add r0, r1, r0
    // str r1, [sp]
    *((u32*)(r5 + 0x1c)) = r0;
    // add r4, #0x1c
    FrontierScript_ReadVar(r5, *((u32*)(r5 + 0x1c)));
    FrontierScript_ReadVar(r5);
    // str r0, [sp, #0xc]
    FrontierScript_ReadVar(r5);
    // str r0, [sp, #0x10]
    FrontierScript_ReadVar(r5);
    // str r0, [sp, #0x14]
    // str r2, [r4]
    // str r0, [sp, #8]
    // str r0, [r4]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov80_0223968C(r6, *((u32*)(r5 + 0x1c)), r7);
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((r1 << 0x10), (r2 << 0x10));
    // ldr r1, [sp, #0x14]
    ManagedSprite_SetDrawFlag(r7);
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    ov80_02239708(r6);
    // ldr r0, [sp]
    *((u32*)(r5 + 0x1c)) = r0;
}




u32 FrtCmd_045(void) {
}




void FrtCmd_046(void) {
    // ldrb r5, [r2]
}




void FrtCmd_047(void) {
}




void FrtCmd_048(void) {
}




u32 FrtCmd_049(void) {
}




u32 FrtCmd_050(void) {
}




void FrtCmd_051(void) {
    FrontierScript_ReadVar();
    // add r1, #0x78
    // strh r0, [r1]
    FrontierScriptContext_Pause(r4, ov80_0222CA94);
}




void ov80_0222CA94(void) {
    // add r1, #0x78
    // add r5, #0x78
}




void ov80_0222CAD0(void) {
    // str r0, [sp, #8]
    // ldr r5, [sp, #8]
    // str r0, [sp, #4]
    // strh r0, [r5]
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r3, [sp, #8]
    // ldr r0, [sp, #8]
}




void FrtCmd_083(void) {
    // str r2, [sp]
}




void FrtCmd_084(void) {
}




void FrtCmd_052(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    // str r0, [sp]
    // str r1, [sp, #4]
    NamingScreen_CreateArgs(0xb, 0, 0, 8);
    // str r0, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r4)), gOverlayTemplate_NamingScreen, r0, 0);
}




void ov80_0222CB94(void) {
}




u32 FrtCmd_108(void) {
}




void FrtCmd_109(void) {
    FrontierScriptContext_ReadHalfWord();
    // str r0, [sp, #4]
    FrontierScript_ReadVar(r5);
    // str r0, [sp]
    FrontierScript_ReadVar(r5);
    FrontierScript_ReadVarPtr(r5);
    // add r0, #0xb0
    // strh r1, [r0]
    // add r0, #0xb2
    // strh r1, [r0]
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    ov80_0222CC70(r4, 0);
    // add r1, #0xb4
    // strh r0, [r1]
    // add r0, #0xb6
    // strh r6, [r0]
    // add r4, #0xb8
    // str r7, [r4]
    FrontierScriptContext_Pause(r5, ov80_0222CC20);
}




void ov80_0222CC20(void) {
    // add r1, #0xb0
    // str r1, [sp]
    // add r1, #0xb2
    // str r1, [sp, #4]
    // add r1, #0xb4
    // add r2, #0xb6
    // add r4, #0xb8
    // strh r1, [r0]
}




void ov80_0222CC70(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CC84: ; jump table
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CCA2: ; jump table
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CCD0: ; jump table
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CCFA: ; jump table
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CD24: ; jump table
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CD4E: ; jump table
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222CD78: ; jump table
}




void FrtCmd_110(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Heap_Alloc(0xb, (0x75 << 2));
    MI_CpuFill8(0, (0x75 << 2));
    // str r0, [sp]
    // add r2, sp, #4
    sub_0202FC90(*((u32*)(r4 + 8)), 0xb, r6);
    Sound_SetSceneAndPlayBGM(5, 0x0000045D, 1);
    // str r0, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r5)), gOverlayTemplate_Battle, r6, 1);
}




void FrtCmd_111(void) {
}




u32 FrtCmd_112(void) {
}




u32 FrtCmd_114(void) {
}




void FrtCmd_115(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    FrontierScript_ReadVarPtr(r5);
    sub_0201A728(4);
    sub_0201A748(*((u32*)(r4 + 0x34)));
    Save_PrepareForAsyncWrite(*((u32*)(r6 + 8)), 2);
    FrontierScriptContext_Pause(r5, ov80_0222CE80);
}




void ov80_0222CE80(void) {
}




u32 FrtCmd_116(void) {
}




u32 FrtCmd_117(void) {
}




void FrtCmd_119(void) {
}




void FrtCmd_120(void) {
}




u32 FrtCmd_121(void) {
}




void FrtCmd_122(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov80_0222CF6C(void) {
    _u32_div_f(0xa);
    _u32_div_f(r4, 0x64);
    _u32_div_f(r4, (0xfa << 2));
    _u32_div_f(r4, 0x00002710);
    _u32_div_f(r4, 0x000186A0);
    _u32_div_f(r4, 0x000F4240);
    _u32_div_f(r4, 0x00989680);
    _u32_div_f(r4, 0x05F5E100);
}




u32 FrtCmd_123(void) {
}




void FrtCmd_124(void) {
    // eor r0, r1
}




u32 FrtCmd_125(void) {
}




void FrtCmd_126(void) {
    // str r0, [sp, #8]
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
}




void ov80_0222D0D4(void) {
}




u32 FrtCmd_127(void) {
}




u32 FrtCmd_128(void) {
}




u32 FrtCmd_129(void) {
}




u32 FrtCmd_130(void) {
}




u32 FrtCmd_131(void) {
}




void FrtCmd_053(void) {
    FrontierScript_ReadVar();
    // add r1, #0x78
    // strh r0, [r1]
    sub_02037AC0(((r0 << 0x18) >> 0x18), r4);
    FrontierScriptContext_Pause(r4, ov80_0222D200);
}




void ov80_0222D200(void) {
    // add r4, #0x78
}




void FrtCmd_054(void) {
}




void FrtCmd_055(void) {
    sub_02058284();
    FrontierScriptContext_Pause(r4, ov80_0222D244);
}




void ov80_0222D244(void) {
}




u32 FrtCmd_056(void) {
}




u32 FrtCmd_057(void) {
}




void FrtCmd_058(void) {
}




void ov80_0222D2AC(void) {
}




void FrtCmd_059(void) {
    FrontierScript_ReadVar();
    // add r1, #0x78
    // strh r0, [r1]
    FrontierScriptContext_Pause(r4, ov80_0222D2EC);
}




void ov80_0222D2EC(void) {
    // tst r0, r1
    System_GetTouchNew(3, *((u32*)(gSystem + 0x48)));
    // add r0, #0x78
    // add r0, #0x78
    // add r4, #0x78
    // strh r1, [r0]
}




void FrtCmd_060(void) {
}




u32 FrtCmd_061(void) {
}




u32 FrtCmd_062(void) {
}




void ov80_0222D390(void) {
    // str r0, [sp]
    // sub r2, #0x20
    // add r3, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
}




void ov80_0222D404(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222D41C: ; jump table
    // str r0, [sp]
    // sub r2, #0x20
    // add r3, #0xc
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
}




void ov80_0222D520(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222D538: ; jump table
    // str r0, [sp]
    // sub r2, #0x20
    // add r3, #0xc
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
}




void ov80_0222D63C(void) {
    // orr r0, r1
}




void ov80_0222D644(void) {
    // str r0, [sp, #8]
    GetBgHOffset(*((u32*)*((u32*)r1)), 2);
    // str r0, [sp, #0x20]
    GetBgHOffset(*((u32*)*((u32*)r4)), 2);
    // str r0, [sp, #0x1c]
    GetBgHOffset(*((u32*)*((u32*)r4)), 3);
    // str r0, [sp, #0x18]
    GetBgHOffset(*((u32*)*((u32*)r4)), 3);
    // str r0, [sp, #0x14]
    ov80_0223B60C(*((u32*)(r7 + (6 << 8))));
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    *((u16*)(r7 + 8)) = 0;
    *((u16*)(r7 + 0xa)) = 0;
    // ldrsh r6, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp, #0x24]
    // add r5, r0, r1
    // str r0, [sp]
    // add r0, sp, #0x2c
    MTX22_2DAffine(0, 0, (1 << 0xc), (1 << 0xc));
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0x20]
    // add r0, r0, r1
    // ldrsh r2, [r4, r1]
    // ldr r1, [sp, #0x1c]
    // add r1, r1, r2
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // sub r3, r3, r2
    // ror r3, r0
    // add r0, r2, r3
    // sub r3, r3, r2
    // ror r3, r1
    // add r1, r2, r3
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // add r0, r0, r2
    // asr r0, r0, #0x10
    // neg r1, r1
    // asr r1, r1, #0x10
    // sub r3, r3, r2
    // ror r3, r0
    // add r0, r2, r3
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r1, sp, #0x2c
    G2x_SetBGyAffine_(r5, ((0x18 << 0x10) << 0x10), 0, 0);
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // ldrsh r2, [r4, r1]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r2
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // sub r3, r3, r2
    // ror r3, r0
    // add r0, r2, r3
    // sub r3, r3, r2
    // ror r3, r1
    // add r1, r2, r3
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // add r0, r0, r2
    // asr r0, r0, #0x10
    // neg r1, r1
    // asr r1, r1, #0x10
    // sub r3, r3, r2
    // ror r3, r0
    // add r0, r2, r3
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r0, #0x10
    // add r1, sp, #0x2c
    G2x_SetBGyAffine_(r5, ((0x18 << 0x10) << 0x10), 0, 0);
    // ldrsh r0, [r4, r0]
    // add r5, #0x20
    // ldr r0, [sp, #0x28]
    // add r4, #0x10
    // str r0, [sp, #0x28]
    ov80_0223B5E8(*((u32*)(r7 + (6 << 8))));
    Heap_Free(r7);
    // ldr r0, [sp, #8]
    SysTask_Destroy();
    ov80_0223B60C(*((u32*)(r7 + (6 << 8))));
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    *((u16*)(r7 + 8)) = 4;
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    *((u16*)(r7 + 0xa)) = 6;
    // ldrsh r6, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp, #0x10]
    // add r5, r0, r1
    // str r0, [sp]
    // add r0, sp, #0x2c
    MTX22_2DAffine(0, 0, (1 << 0xc), (1 << 0xc));
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0x20]
    // add r0, r0, r1
    // ldrsh r2, [r4, r1]
    // ldr r1, [sp, #0x1c]
    // add r1, r1, r2
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // sub r3, r3, r2
    // ror r3, r0
    // add r0, r2, r3
    // sub r3, r3, r2
    // ror r3, r1
    // add r1, r2, r3
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // add r0, r0, r2
    // asr r0, r0, #0x10
    // neg r1, r1
    // asr r1, r1, #0x10
    // sub r3, r3, r2
    // ror r3, r0
    // add r0, r2, r3
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r1, sp, #0x2c
    G2x_SetBGyAffine_(r5, ((0x18 << 0x10) << 0x10), 0, 0);
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // ldrsh r2, [r4, r1]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r2
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // sub r3, r3, r2
    // ror r3, r0
    // add r0, r2, r3
    // sub r3, r3, r2
    // ror r3, r1
    // add r1, r2, r3
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // add r0, r0, r2
    // asr r0, r0, #0x10
    // neg r1, r1
    // asr r1, r1, #0x10
    // sub r3, r3, r2
    // ror r3, r0
    // add r0, r2, r3
    // asr r0, r0, #0x10
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r0, #0x10
    // add r1, sp, #0x2c
    G2x_SetBGyAffine_(r5, ((0x18 << 0x10) << 0x10), 0, 0);
    // ldrsh r0, [r4, r0]
    // add r5, #0x20
    // ldr r0, [sp, #0xc]
    // add r4, #0x10
    // str r0, [sp, #0xc]
}




void ov80_0222D968(void) {
    // str r0, [sp]
    // sub r2, #0x20
    // add r3, #0xc
    ov80_0223AC24(1, 0x10, 0x10, r0);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
    // add r0, sp, #4
    MI_CpuFill8(*((u32*)(r5 + 0xc)), 0, 0x20);
    *((u32*)(r5 + 0x10)) = 0;
    Heap_Alloc(0x65, 0x00000608);
    *((u32*)(r5 + 0x24)) = r0;
    // str r2, [r0, r1]
    // add r1, sp, #4
    ov80_0223B544(0x04000020, 0x00000604, 0x65);
    // str r0, [r2, r1]
    // strh r6, [r0, r4]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    *((u16*)(*((u32*)(r5 + 0x24)) + 2)) = (*((u32*)(r5 + 0x24)) + 2);
    // sub r2, r0, r7
    // sub r3, r3, r1
    // ror r3, r0
    // add r0, r1, r3
    // add r1, r1, r4
    *((u16*)(*((u32*)(r5 + 0x24)) + 4)) = 0x1d;
    // asr r0, r2, #1
    // add r0, r2, r0
    // asr r1, r0, #2
    // add r0, r0, r4
    *((u16*)(*((u32*)(r5 + 0x24)) + 6)) = *((u32*)(r5 + 0x24));
    // add r1, r0, r4
    *((u16*)(*((u32*)(r5 + 0x24)) + 8)) = 0;
    // add r1, r0, r4
    *((u16*)(*((u32*)(r5 + 0x24)) + 0xa)) = 0;
    ov80_0222D63C(0, 0, *((u32*)(r5 + 0x24)), (*((u32*)(r5 + 0x24)) << 0x1d));
    // add r1, r1, r4
    *((u32*)(*((u32*)(r5 + 0x24)) + 0xc)) = r0;
    // add r4, #0x10
    // str r0, [sp]
    // sub r1, #0x38
    StartBrightnessTransition(0x28, 0x28, 0, 0x1e);
    SysTask_CreateOnMainQueue(ov80_0222D644, r5, (1 << 0xc));
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
    IsBrightnessTransitionActive(1);
    *((u32*)(r5 + 0x10)) = 1;
    ToggleBgLayer(3, 0);
    BgSetPosTextAndCommit(*((u32*)*((u32*)r5)), 3, 0, 0);
    BgSetPosTextAndCommit(*((u32*)*((u32*)r5)), 3, 3, 0);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
}




void ov80_0222DAAC(void) {
    // str r0, [sp]
    // sub r2, #0x20
    // add r3, #0xc
    ov80_0223AC24(1, 0x10, 0x10, r0);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
    // add r0, sp, #4
    MI_CpuFill8(*((u32*)(r5 + 0xc)), 0, 0x20);
    *((u32*)(r5 + 0x10)) = 0;
    Heap_Alloc(0x65, 0x00000608);
    *((u32*)(r5 + 0x24)) = r0;
    // str r2, [r0, r1]
    // add r1, sp, #4
    ov80_0223B544(0x04000020, 0x00000604, 0x65);
    // str r0, [r2, r1]
    // strh r7, [r0, r4]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    *((u16*)(*((u32*)(r5 + 0x24)) + 2)) = (*((u32*)(r5 + 0x24)) + 2);
    // sub r1, r0, r6
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r0, r0, #3
    // add r0, r0, r4
    *((u16*)(*((u32*)(r5 + 0x24)) + 4)) = ((0x30 >> 0x1d) + 1);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r0, r4
    // ldrsh r2, [r0, r1]
    *((u16*)(*((u32*)(r5 + 0x24)) + 4)) = ((4 - 5) * (0 >> 0x1f));
    // add r0, r0, r4
    *((u16*)(*((u32*)(r5 + 0x24)) + 6)) = 0;
    // sub r1, r0, r6
    // add r0, r0, r4
    *((u16*)(*((u32*)(r5 + 0x24)) + 6)) = ((4 - 5) * (0 >> 0x1f));
    // add r1, r0, r4
    *((u16*)(((4 - 5) * (0 >> 0x1f)) + 8)) = 0;
    // add r1, r0, r4
    *((u16*)(((4 - 5) * (0 >> 0x1f)) + 0xa)) = 0;
    ov80_0222D63C(0, 0, (0 >> 0x1f));
    // add r1, r1, r4
    *((u32*)(*((u32*)(r5 + 0x24)) + 0xc)) = r0;
    // add r4, #0x10
    // str r0, [sp]
    // sub r1, #0x38
    StartBrightnessTransition(0x28, 0x28, 0, 0x1c);
    SysTask_CreateOnMainQueue(ov80_0222D644, r5, (1 << 0xc));
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
    IsBrightnessTransitionActive(1);
    *((u32*)(r5 + 0x10)) = 1;
    ToggleBgLayer(3, 0);
    BgSetPosTextAndCommit(*((u32*)*((u32*)r5)), 3, 0, 0);
    BgSetPosTextAndCommit(*((u32*)*((u32*)r5)), 3, 3, 0);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
}




void ov80_0222DC14(void) {
    // add r0, #0x18
    ov80_0223B424(r0, 0x65);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0x18
    ov80_0223B440(r4, 0, 0xbf, 0x000002AA);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
}




void FrtCmd_063(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    FrontierScript_ReadVar(r5);
    // add r1, #0x78
    // strh r0, [r1]
    Sound_SetSceneAndPlayBGM(5, 0x0000045D, 1);
    Heap_Alloc(0xb, 0x30);
    Frontier_GetData(*((u32*)*((u32*)r5)));
    *((u32*)(r4 + 0x14)) = r0;
    *((u32*)(r4 + 4)) = 0;
    // add r0, #0x78
    *((u32*)(r4 + 8)) = *((u16*)r5);
    FrontierSystem_GetFrontierMap(*((u32*)r5));
    // str r0, [r4]
    Frontier_SetData(*((u32*)*((u32*)r5)), r4);
    FrontierScriptContext_Pause(r5, ov80_0222DCF0);
    // str r1, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(*((u32*)r4) + 4)), 0, 2, 0);
}




void ov80_0222DCF0(void) {
    Frontier_GetData(*((u32*)*((u32*)r0)));
    // blx r1
    sub_0200FBF4(0, 0, (*((u32*)(r0 + 8)) << 2));
    sub_0200FBF4(1, 0);
    Frontier_SetData(*((u32*)*((u32*)r5)), *((u32*)(r4 + 0x14)));
    Heap_Free(r4);
}




void FrtCmd_064(void) {
    // strh r0, [r4]
}




u32 FrtCmd_065(void) {
}




u32 FrtCmd_066(void) {
}




u32 FrtCmd_067(void) {
}




void FrtCmd_068(void) {
}




void ov80_0222DE00(void) {
}




void FrtCmd_076(void) {
    sub_0209680C(*((u32*)*((u32*)r0)));
    // add r0, #0xa4
    // add r5, #0xa4
    GF_AssertFail(*((u32*)r0));
    SysTask_Destroy(*((u32*)r5));
    FrontierScript_ReadVar(r4);
    FrontierScript_ReadVar(r4);
    FrontierScript_ReadVar(r4);
    // str r0, [sp]
    FrontierScript_ReadVar(r4);
    MI_CpuFill8(r5, 0, 0xc);
    *((u16*)(r5 + 4)) = r6;
    // ldr r0, [sp]
    *((u16*)(r5 + 6)) = r7;
    *((u8*)(r5 + 9)) = r0;
    *((u8*)(r5 + 0xa)) = r4;
    SysTask_CreateOnMainQueue(ov80_0222F4F0, r5, 0x00011170);
    // str r0, [r5]
}




void FrtCmd_077(void) {
}




void ov80_0222DE9C(void) {
}




void FrtCmd_078(void) {
    sub_0209680C(*((u32*)*((u32*)r0)));
    // add r0, #0xb0
    // add r4, #0xb0
    GF_AssertFail(*((u32*)r0));
    SysTask_Destroy(*((u32*)r4));
    MI_CpuFill8(r4, 0, 0xc);
    FrontierScript_ReadVar(r5);
    *((u8*)(r4 + 4)) = r0;
    FrontierScript_ReadVar(r5);
    *((u8*)(r4 + 5)) = r0;
    FrontierScript_ReadVar(r5);
    *((u8*)(r4 + 6)) = r0;
    FrontierScript_ReadVar(r5);
    *((u8*)(r4 + 7)) = r0;
    FrontierScript_ReadVar(r5);
    *((u16*)(r4 + 8)) = r0;
    FrontierScript_ReadVar(r5);
    *((u8*)(r4 + 0xa)) = r0;
    SysTask_CreateOnMainQueue(ov80_0222F53C, r4, (0x4b << 2));
    // str r0, [r4]
}




void FrtCmd_079(void) {
}




void ov80_0222DF3C(void) {
}




void FrtCmd_150(void) {
}




void FrtCmd_069(void) {
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // str r4, [sp]
    // str r6, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // ldr r3, [sp, #0x1c]
}




u32 FrtCmd_070(void) {
}




void FrtCmd_071(void) {
    FrontierSystem_GetFrontierMap(*((u32*)r0));
    FrontierScriptContext_ReadHalfWord(r5);
    // add r1, sp, #0x10
    // add r1, #2
    // add r2, sp, #0x10
    ov80_022398E4(r4);
    // add r1, sp, #0x10
    // str r0, [sp]
    // add r0, #0x78
    // str r0, [sp, #4]
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #8]
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0xc]
    ov80_0223A00C(r6, *((u32*)r4), *((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x38)));
    Sound_SetSceneAndPlayBGM(5, 0x0000047B, 1);
    FrontierScriptContext_Pause(r5, ov80_0222E05C);
}




void ov80_0222E05C(void) {
}




u32 FrtCmd_072(void) {
}




u32 FrtCmd_073(void) {
}




u32 FrtCmd_074(void) {
}




u32 FrtCmd_075(void) {
}




u32 FrtCmd_113(void) {
}




u32 FrtCmd_183(void) {
}




u32 FrtCmd_200(void) {
}




u32 FrtCmd_201(void) {
}




void FrtCmd_203(void) {
    FrontierScript_ReadVar();
    // add r1, #0x78
    // strh r0, [r1]
    sub_02037AC0(((r0 << 0x18) >> 0x18), r4);
    FrontierScriptContext_Pause(r4, ov80_0222E198);
}




void ov80_0222E198(void) {
    sub_02037454();
    // add r0, #0x78
    sub_02037B38(((*((u16*)r5) << 0x18) >> 0x18));
    Frontier_GetData(*((u32*)*((u32*)r5)));
    // add r0, #0x6f
    // add r0, #0x74
    // add r0, #0x39
    // strb r4, [r0]
    sub_0203769C(*((u32*)r5), *((u16*)r0));
    // eor r0, r1
    sub_02034818(1);
    PlayerProfile_GetVersion();
    // add r0, #0x6f
    // strb r1, [r0]
    sub_02096BF8(r6, 0);
}




void FrtCmd_204(void) {
}




void FrtCmd_205(void) {
    // add r0, #0x39
    // strb r1, [r0]
}




void FrtCmd_206(void) {
}




void FrtCmd_207(void) {
}




void ov80_0222E268(void) {
    // str r3, [sp, #4]
    // ldr r4, [sp, #0x20]
    // str r0, [sp]
    // ldr r3, [sp, #4]
}




void ov80_0222E2B8(void) {
    FrontierSystem_GetFrontierMap();
    // add r1, #0x5a
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, #0x64
    AddWindowParameterized(*((u32*)r0), r4, 1, 2);
    // add r0, #0x64
    FillWindowPixelBuffer(r4, 0xf);
    // add r0, #0x64
    DrawFrameAndWindow2(r4, 0, 0x000003E2, 0xb);
    // add r4, #0x5a
    // strb r0, [r4]
    // add r4, #0x64
    FillWindowPixelBuffer(r4, 0xf);
}




void ov80_0222E328(void) {
}




void ov80_0222E344(void) {
    // ldr r0, [sp, #0x20]
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x64
    // add r5, #0x50
    // strb r0, [r5]
}




void ov80_0222E38C(void) {
    // add r0, #0x5a
    // add r0, #0x64
    // add r0, #0x64
    // add r4, #0x5a
    // strb r0, [r4]
}




void ov80_0222E3B8(void) {
    // add r3, sp, #8
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp]
    // str r2, [sp]
}




void ov80_0222E400(void) {
    // add r0, sp, #0
    // add r0, sp, #0
    // add r0, sp, #0
    // add r2, sp, #0x10
    // add r0, sp, #0
    // add r0, sp, #0
}




void ov80_0222E450(void) {
    // ldr r1, [sp, #0x28]
    NewMsgDataFromNarc(1, 0x1b, 0xbf, *((u32*)(r0 + 0x34)));
    // add r1, #0x8c
    // str r0, [r1]
    // add r0, #0x97
    // add r0, #0x8c
    // str r1, [r0]
    // add r0, #0x97
    // add r0, #0x97
    // strb r1, [r0]
    // ldr r1, [sp, #0x24]
    // add r0, #0x90
    // str r1, [r0]
    // ldr r1, [sp, #0x20]
    // str r7, [r6]
    // add r0, #0xa0
    // str r1, [r0]
    // add r1, #0xa0
    // strh r0, [r1]
    // add r1, #0x97
    // add r1, sp, #8
    // and r1, r2
    // add r1, #0x97
    // strb r2, [r1]
    // add r1, sp, #8
    // add r2, #0x96
    // strb r1, [r2]
    // add r2, #0x98
    // strb r4, [r2]
    // add r2, #0x99
    // strb r5, [r2]
    // add r2, #0x9b
    // strb r0, [r2]
    // add r2, #0x64
    *((u32*)(r6 + 0x18)) = r7;
    // add r2, #0x94
    // strb r3, [r2]
    // strh r1, [r6, r2]
    // add r1, #0xb4
    // str r2, [r1]
    // add r1, #0xb8
    // add r3, #8
    // str r2, [r1]
    // str r5, [r0, r3]
    // str r5, [r0, r3]
    // strh r4, [r1, r3]
    // add r0, #8
    String_New(0x50, *((u32*)(r7 + 0x34)), (0 + 1), (0xa7 << 2));
    *((u32*)(r4 + 0x1c)) = r0;
    // add r6, #0xa0
    // strh r1, [r0]
}




void ov80_0222E558(void) {
    // str r2, [sp, #0x14]
    // str r4, [sp]
    // add r0, sp, #0x20
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x10]
    // ldr r3, [sp, #0x14]
}




void ov80_0222E5A8(void) {
}




void ov80_0222E5B0(void) {
    FrontierSystem_GetFrontierMap(*((u32*)r0));
    ov80_0222E714(r5);
    // tst r1, r0
    // add r1, #0x97
    // add r1, #0x98
    // sub r2, r1, r0
    // add r1, #0x98
    // strb r2, [r1]
    // add r1, #0x97
    // add r1, #0x99
    // add r1, #0x9b
    // sub r2, r2, r1
    // add r1, #0x99
    // strb r2, [r1]
    // add r1, #0x99
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, #0x9b
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r3, #0x98
    // add r1, #8
    AddWindowParameterized(*((u32*)r4), r5, 1, *((u8*)r5));
    // add r0, #8
    DrawFrameAndWindow1(r5, 1, 0x000003D9, 0xc);
    ov80_0222E754(r5);
    // add r1, #0x96
    // add r0, #0xa4
    Create2dMenu(r5, *((u8*)r5), ((*((u32*)(*((u32*)r5) + 0x34)) << 0x18) >> 0x18));
    // add r1, #0xb0
    // str r0, [r1]
    ov80_0222E8FC(r5, r5);
    SysTask_CreateOnMainQueue(ov80_0222E7C8, r5, 0);
    *((u32*)(r5 + 4)) = r0;
}




void ov80_0222E690(void) {
    // str r1, [sp]
    // add r0, #0x8c
    // ldr r1, [sp]
    // add r1, #0x9b
    // add r0, #0x90
    // add r1, r5, r1
    // add r0, #0x9b
    // add r0, r5, r0
    // add r1, r5, r1
    // add r1, #0xb4
    // str r0, [r1]
    // add r0, #0x9b
    // add r1, r5, r0
    // strh r6, [r1, r0]
    // add r0, #0x9b
    // add r0, r5, r0
    // add r0, #0xb8
    // str r7, [r0]
    // add r0, #0x9b
    // add r5, #0x9b
    // strb r0, [r5]
}




void ov80_0222E714(void) {
    // add r0, #0x9b
    // add r0, #0xb4
    // add r0, #0x9b
    // add r5, #8
    // add r6, #0xc
}




void ov80_0222E754(void) {
    // add r2, #0xb4
    // add r1, #0xa4
    // str r2, [r1]
    // add r2, #8
    // add r1, #0xa8
    // str r2, [r1]
    // add r1, #0xac
    // strb r2, [r1]
    // add r1, #0xad
    // strb r2, [r1]
    // add r1, #0x9b
    // add r1, #0xae
    // strb r2, [r1]
    // add r2, #0xaf
    // add r2, #0xaf
    // strb r3, [r2]
    // add r2, #0xaf
    // add r1, #0xaf
    // add r2, #0xaf
    // strb r3, [r2]
    // add r0, #0x9b
    // strb r0, [r1]
    // strb r2, [r1]
}




void ov80_0222E7C8(void) {
    // add r0, #0x94
    // add r0, #0x94
    // add r5, #0x94
    // strb r0, [r5]
    IsPaletteFadeFinished((*((u8*)r1) - 1));
    // add r0, #0xb0
    Handle2dMenuInput(*((u32*)r5));
    // mvn r0, r0
    System_GetTouchNew(0);
    // add r0, #0xb0
    Get2dMenuSelection(*((u32*)r5));
    // tst r1, r0
    // tst r1, r0
    // tst r1, r0
    // tst r0, r1
    ov80_0222E8FC(r5, 0x10);
    // add r0, #0xa0
    ov80_0222E88C(r5, 0x0000EEDD, *((u16*)*((u32*)r5)));
    // mvn r1, r1
    // add r1, #0x97
    // strh r1, [r0]
    ov80_0222E88C(r5, 0x0000FFFE);
    // strh r4, [r0]
    ov80_0222E88C(r5);
}




void ov80_0222E88C(void) {
    PlaySE(0x000005DC);
    // add r0, #0xb0
    Delete2dMenu(*((u32*)r6), 0);
    // add r0, #0xa8
    sub_0200E5D4(*((u32*)r6), 0);
    // add r0, #0xa8
    RemoveWindow(*((u32*)r6));
    String_Delete(*((u32*)(r6 + 0x1c)));
    // add r0, #0x97
    // add r0, #0x8c
    DestroyMsgData(*((u32*)r6));
    SysTask_Destroy(*((u32*)(r6 + 4)));
    Heap_Free(r6);
    *((u32*)(r7 + 0x60)) = 0;
}




void ov80_0222E8FC(void) {
    // add r0, #0xb0
    // add r1, r4, r0
}




void ov80_0222E920(void) {
}




void ov80_0222E940(void) {
}




void ov80_0222E948(void) {
    FrontierSystem_GetFrontierMap(*((u32*)r0));
    ov80_0222EB14(r5);
    // tst r1, r0
    // add r0, #0x97
    // add r0, #0x98
    // sub r2, r0, r1
    // add r0, #0x98
    // strb r2, [r0]
    // add r0, #0x9b
    // add r0, #0x97
    // add r0, #0x99
    // add r0, #0x99
    // sub r2, #0x10
    // strb r2, [r0]
    // add r0, #0x99
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r3, #0x98
    // add r1, #8
    AddWindowParameterized(*((u32*)r4), r5, 1, *((u8*)r5));
    // add r2, #0x97
    // add r2, #0x99
    // sub r2, r2, r0
    // add r0, #0x99
    // strb r2, [r0]
    // add r0, #0x99
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x9b
    // add r3, #0x98
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // add r1, #8
    AddWindowParameterized(*((u32*)r4), r5, 1, *((u8*)r5));
    // add r0, #8
    DrawFrameAndWindow1(r5, 1, 0x000003D9, 0xc);
    ov80_0222EB54(r5);
    // add r2, #0x96
    // add r0, r5, r0
    ListMenuInit((0x65 << 2), 0, *((u8*)r5), ((*((u32*)(*((u32*)r5) + 0x34)) << 0x18) >> 0x18));
    // str r0, [r5, r1]
    ov80_0222EE7C(r5, (0x6d << 2));
    SysTask_CreateOnMainQueue(ov80_0222EC90, r5, 0);
    *((u32*)(r5 + 4)) = r0;
}




void ov80_0222EA74(void) {
    // str r1, [sp]
    // add r0, #0x8c
    // ldr r1, [sp]
    // add r1, #0x9b
    // add r0, #0x90
    // add r1, r5, r1
    // add r0, #0x9b
    // add r0, r5, r0
    // add r2, r5, r1
    // str r0, [r2, r1]
    // add r0, #0x9b
    // mvn r2, r2
    // add r1, r5, r0
    // str r2, [r1, r0]
    // add r0, #0x9b
    // add r1, r5, r0
    // str r4, [r1, r0]
    // add r0, #0x9b
    // add r1, r5, r0
    // strh r7, [r1, r0]
    // add r0, #0x9b
    // add r5, #0x9b
    // strb r0, [r5]
}




void ov80_0222EB14(void) {
    // add r0, #0x9b
    // add r0, #0x9b
    // add r5, #8
    // add r6, #0xc
}




void ov80_0222EB54(void) {
    // add r2, r0, r3
    // sub r1, #0x28
    // str r2, [r0, r1]
    // sub r1, #0x24
    // str r2, [r0, r1]
    // sub r1, #0x20
    // str r2, [r0, r1]
    // add r2, #8
    // sub r1, #0x1c
    // str r2, [r0, r1]
    // add r1, #0x9b
    // sub r1, #0x18
    // strh r2, [r0, r1]
    // sub r1, #0x16
    // strh r2, [r0, r1]
    // sub r1, #0x14
    // strb r2, [r0, r1]
    // sub r1, #0x13
    // strb r4, [r0, r1]
    // sub r1, #0x12
    // strb r4, [r0, r1]
    // sub r1, #0x11
    // sub r2, #0x11
    // strb r4, [r0, r2]
    // sub r2, #0x11
    // sub r4, #0x11
    // strb r5, [r0, r4]
    // sub r4, #0x10
    // sub r1, #0x10
    // strb r4, [r0, r1]
    // sub r1, #0x10
    // sub r1, #0x10
    // strb r2, [r0, r1]
    // sub r1, #0xe
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r1, #0xe
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r1, #0xe
    // and r2, r1
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r1, #0xe
    // and r2, r1
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r1, #0xe
    // and r2, r1
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r3, #0xc
    // str r0, [r0, r3]
}




void ov80_0222EC60(void) {
    // mvn r2, r2
}




void ov80_0222EC84(void) {
}




void ov80_0222EC90(void) {
    // add r0, #0x94
    // add r0, #0x94
    // add r5, #0x94
    // strb r0, [r5]
    IsPaletteFadeFinished((*((u8*)r1) - 1));
    ListMenu_ProcessInput(*((u32*)(r5 + (0x6d << 2))));
    // add r1, r5, r1
    ListMenuGetCurrentItemArrayId(*((u32*)(r5 + (0x6d << 2))), (0xb5 << 2));
    PlaySE(0x000005DC);
    // tst r1, r0
    // tst r1, r0
    // tst r1, r0
    // tst r0, r1
    ov80_0222EE7C(r5, 0x10);
    // mvn r0, r0
    System_GetTouchNew(0);
    ListMenuGetValueByArrayId(*((u32*)(r5 + (0x6d << 2))), *((u16*)(r5 + (0xb5 << 2))));
    // add r0, #0xa0
    ov80_0222EDA0(r5, 0);
    // mvn r0, r0
    // add r0, #0x97
    PlaySE(0x000005DC);
    // add r0, #0xa0
    // strh r1, [r0]
    ov80_0222EDA0(r5, 1);
    PlaySE(0x000005DC);
    // add r0, #0xa0
    // strh r4, [r0]
    ov80_0222EDA0(r5, 1);
}




void ov80_0222EDA0(void) {
    PlaySE(0x000005DC);
    DestroyListMenu(*((u32*)(r6 + (0x6d << 2))), 0, 0);
    sub_0200E5D4(*((u32*)(r6 + (0x1a << 4))), 0);
    // add r0, #8
    RemoveWindow(r6);
    String_Delete(*((u32*)(r6 + 0x1c)));
    // add r0, #0x97
    // add r0, #0x8c
    DestroyMsgData(*((u32*)r6));
    SysTask_Destroy(*((u32*)(r6 + 4)));
    Heap_Free(r6);
    *((u32*)(r7 + 0x60)) = 0;
}




void ov80_0222EE14(void) {
    // str r1, [sp, #0xc]
    // add r0, #0x8c
    // ldr r1, [sp, #0xc]
    // add r0, #0x90
    // str r3, [sp]
    // str r7, [sp, #4]
    // str r3, [sp, #8]
}




void ov80_0222EE7C(void) {
    // add r1, r4, r1
    ListMenuGetCurrentItemArrayId(*((u32*)(r0 + (0x6d << 2))), ((0x6d << 2) + 6));
    // add r0, #0xe2
    // add r1, r4, r1
    ov80_0222EE14(r4, *((u16*)((*((u16*)(r4 + 0x000001BA)) << 1) + 0x000001BA)), 0);
}




void ov80_0222EEAC(void) {
}




void ov80_0222EEC8(void) {
    // strb r0, [r5]
    ov42_02228188(*((u32*)*((u32*)(r1 + 0x14))), 5);
    // ldrsh r1, [r5, r0]
    // sub r4, #0x20
    *((u16*)(r5 + 2)) = (r1 + 1);
    // ldrsh r1, [r5, r0]
    *((u16*)(r5 + 2)) = 0;
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 4);
    ov42_02229200(*((u32*)(*((u32*)(r5 + 0x14)) + 4)), 1);
    ov42_02229200(*((u32*)(*((u32*)(r5 + 0x14)) + 4)), 0);
    GF_AssertFail();
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 4);
    // add r0, sp, #0
    ov80_0222EFD0((*((u32*)(r5 + 0xc)) + 4), *((u32*)*((u32*)(r5 + 0x14))), *((u16*)(r5 + 4)), r4);
    // add r1, sp, #0
    ov42_022299C0(*((u32*)(r5 + 0x10)));
    *((u8*)(r5 + 1)) = (*((u8*)(r5 + 1)) + 1);
    *((u8*)(r5 + 1)) = 0;
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 4);
    // strb r0, [r5]
    ov42_02228188(*((u32*)*((u32*)(r5 + 0x14))), 5);
    // strb r0, [r1]
    *((u32*)(*((u32*)(r5 + 0x14)) + 0x38)) = 0;
    Heap_Free(r5, 0);
    SysTask_Destroy(r7);
}




void ov80_0222EFD0(void) {
    *((u8*)(r0 + 7)) = r2;
    *((u8*)(r0 + 6)) = *((u16*)(ov80_0223DC22 + (r3 << 2)));
    *((u16*)(r0 + 4)) = *((u16*)(_0223DC20 + (r3 << 2)));
    ov42_022282E8(r1, (r3 << 2));
    // add r1, sp, #0
    *((u16*)(r1 + 4)) = r0;
    *((u16*)(r1 + 6)) = (r0 >> 0x10);
    // strh r0, [r4]
    *((u16*)(r4 + 2)) = *((u16*)(r1 + 6));
    ov42_022282DC(r1);
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // strh r0, [r4]
    *((u16*)(r4 + 2)) = *((u16*)(r1 + 2));
}




void ov80_0222F030(void) {
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x2c]
    // str r2, [sp, #0x24]
    NARC_New(8, r2);
    // str r0, [sp, #0x30]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x30]
    // str r4, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r7, r6, 0x70);
    // ldr r0, [sp, #0x30]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // str r4, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(1, 2, r7, r6);
    // str r0, [sp]
    // ldr r2, [sp, #0x30]
    // str r4, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r7, r6, 0x71);
    // str r0, [sp]
    // ldr r2, [sp, #0x30]
    // str r4, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r7, r6, 0x72);
    // ldr r0, [sp, #0x30]
    NARC_Delete();
    // add r0, sp, #0x38
    MI_CpuFill8(0, 0x34);
    // ldr r0, [sp, #0x90]
    // add r1, sp, #0x38
    // strh r0, [r1]
    // ldr r0, [sp, #0x94]
    *((u16*)(r1 + 2)) = r0;
    *((u16*)(r1 + 4)) = 0;
    *((u16*)(r1 + 6)) = 0;
    // ldr r1, [sp, #0x98]
    // str r0, [sp, #0x44]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x48]
    // ldr r1, [sp, #0x9c]
    // str r0, [sp, #0x68]
    // str r1, [sp, #0x64]
    // add r1, sp, #0x38
    *((u32*)(1 + 0x14)) = r4;
    // add r2, sp, #0x38
    SpriteSystem_NewSprite(r7, r6);
    ManagedSprite_TickFrame();
    // ldr r0, [sp, #0x24]
    Heap_Alloc((0x32 << 6));
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x20]
    GetMonData(0, 0);
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x20]
    GetMonData(5, 0);
    // ldr r1, [sp, #0x20]
    // add r0, sp, #0x6c
    GetPokemonSpriteCharAndPlttNarcIds(2);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0x38
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x34]
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r7, [sp, #0x1c]
    sub_02014494(*((u16*)(r1 + 0x34)), *((u16*)(r1 + 0x36)), 0);
    Sprite_GetImageProxy(*((u32*)r6));
    // ldr r0, [sp, #0x28]
    DC_FlushRange(4);
    // ldr r0, [sp, #0x28]
    GX_LoadOBJ(*((u32*)(r7 + 4)), (0x32 << 6));
    Sprite_GetPaletteProxy(*((u32*)r6));
    ObjPlttTransfer_GetPaletteVramOffset(1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, sp, #0x38
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0x24]
    PaletteData_LoadNarc((((r0 << 4) << 0x10) >> 0x10), *((u16*)(r2 + 0x34)), *((u16*)(r2 + 0x38)));
    // ldr r0, [sp, #0xa0]
    // str r0, [sp]
    // add r0, sp, #0x80
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    PaletteData_BlendPalette(*((u16*)(((r0 << 0x18) >> 0x18) + 0x24)), 2, ((r7 << 0x10) >> 0x10), 0x10);
    // ldr r0, [sp, #0x28]
    Heap_Free();
    // add r5, #0x80
    // sub r0, r4, r0
    GF_AssertFail(*((u32*)(r5 + (0x0000C350 << 2))));
    // str r6, [r5, r4]
}




void ov80_0222F1D0(void) {
    // sub r0, r6, r0
    // add r4, #0x80
    Sprite_DeleteAndFreeResources(*((u32*)(r0 + (0x0000C350 << 2))));
    // str r0, [r4, r7]
    SpriteManager_UnloadCharObjById(*((u32*)(r5 + 0x38)), r6);
    SpriteManager_UnloadPlttObjById(*((u32*)(r5 + 0x38)), r6);
    SpriteManager_UnloadCellObjById(*((u32*)(r5 + 0x38)), r6);
    SpriteManager_UnloadAnimObjById(*((u32*)(r5 + 0x38)), r6);
}




void ov80_0222F210(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov80_0222F278(void) {
}




void ov80_0222F29C(void) {
    // str r3, [sp, #0xc]
    GF_AssertFail();
    Pokemon_GetIconNaix(r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)), 0x14, r0);
    // add r3, sp, #0x10
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, sp, #0x10
    // str r0, [r3]
    // ldr r0, [sp, #0x24]
    // add r2, sp, #0x10
    // add r0, r0, r4
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0xc]
    // strh r0, [r1]
    // ldr r0, [sp, #0x58]
    *((u16*)(r1 + 2)) = *((u32*)ov80_0223BD80);
    // str r0, [sp, #0x18]
    SpriteSystem_NewSprite(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)), (6 - 1));
    Pokemon_GetIconPalette(r7);
    Sprite_SetPalOffsetRespectVramOffset(*((u32*)r4), r0);
    ManagedSprite_TickFrame(r4);
}




void ov80_0222F324(void) {
    // add r1, r2, r1
}




void ov80_0222F33C(void) {
    NARC_New(0x15, 0x65);
    sub_0207CAA0();
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r5 + 4)), 2, *((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)));
    sub_0207CAA4();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)), r4, r0);
    sub_0207CAA8();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)), r4, r0);
    sub_0207CA9C();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType(*((u32*)(r5 + 0x34)), *((u32*)(r5 + 0x38)), 0x15, r0);
    NARC_Delete(r4);
}




void ov80_0222F3CC(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x38)), 0x000007D9);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x38)), 0x000007D1);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x38)), 0x000007D1);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x38)), 0x000007D1);
}




void ov80_0222F3FC(void) {
    // add r4, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r2, sp, #0
    // str r0, [r4]
    // add r0, sp, #0
    // strh r7, [r0]
    *((u16*)(*((u32*)ov80_0223BD4C) + 2)) = r2;
    // str r0, [sp, #8]
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x34)), *((u32*)(r0 + 0x38)), (6 - 1), r0);
    ManagedSprite_TickFrame();
}




void ov80_0222F440(void) {
}




void ov80_0222F44C(void) {
}




void ov80_0222F458(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    NewMsgDataFromNarc(1, 0x1b, r6, 0x20);
    // str r0, [sp]
    ov80_0222E268(*((u32*)r5), r0, *((u16*)(r4 + 2)), 1);
    DestroyMsgData(r6);
    Save_PlayerData_GetOptionsAddr(*((u32*)(r0 + 8)));
    Options_GetTextFrameDelay();
    // str r0, [sp]
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov80_0222E3B8(*((u32*)r5), r0, *((u16*)r4), *((u16*)(r4 + 2)));
    FrontierScriptContext_Pause(r5, ov80_0222F4D0);
}




void ov80_0222F4D0(void) {
    // add r0, #0x50
}




void ov80_0222F4F0(void) {
    // ldrsb r2, [r4, r1]
    // ldrsb r2, [r4, r1]
    // ldrsb r1, [r4, r1]
    // ldrsb r2, [r4, r1]
    // ldrsb r1, [r4, r1]
    // ldrsh r0, [r4, r0]
    // neg r0, r0
    // ldrsh r0, [r4, r0]
    // neg r0, r0
}




void ov80_0222F53C(void) {
    // ldrsh r0, [r4, r1]
    // ldrsb r0, [r4, r0]
    // strh r0, [r2]
    *((u16*)(0x04000048 + 2)) = ((0x1f | (*((u16*)(0x04000048 + 2)) & ~(0x3f))) | 0x20);
    // and r6, r3
    // sub r3, #8
    // strh r6, [r3]
    // and r0, r3
    // strh r1, [r0]
    // and r1, r0
    // str r0, [r2]
    // and r0, r1
    // str r0, [r2]
    SysTask_Destroy(r0, *((u32*)(*((u32*)(0x20 << 0x15)) << 0x17)), (*((u32*)(0x20 << 0x15)) << 0x17), (*((u8*)(r1 + 5)) << 8));
    MI_CpuFill8(r4, 0, 0xc);
    *((u16*)(r4 + 8)) = (r0 - 1);
}




void ov80_0222F5D0(void) {
    // add r2, #0x97
    // add r0, #0x97
    // strb r1, [r0]
}




void ov80_0222F5EC(void) {
    // add r2, #0x97
    // add r0, #0x97
    // strb r1, [r0]
}



