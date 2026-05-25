/* Decompiled from asm/overlay_80_02235438.s */
#include "global.h"

u32 FrtCmd_091(void) {
}




BOOL FrtCmd_132(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    FrontierScriptContext_ReadHalfWord(r7);
    FrontierScript_ReadVar(r7);
    // str r0, [sp]
    FrontierScript_ReadVarPtr(r7);
    Frontier_GetData(*((u32*)*((u32*)r7)));
    // sub r1, #0x21
    // bmi _022354C6
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02235490: ; jump table
    ResetSystem((*((u16*)(r6 + 6)) << 0x10));
    FrontierFieldSystem_AwardTowerBattlePoints();
    // strh r0, [r4]
    Save_GameStats_Get(*((u32*)(r5 + 8)));
    GameStats_Add(0x45, *((u16*)r4));
    // ldr r1, [sp]
    ov80_0223558C(((r1 << 0x18) >> 0x18));
    // strh r0, [r4]
    FrontierFieldSystem_GetFrontierBattleNumber();
    // strh r0, [r4]
    ov80_022358C4();
    // strh r0, [r4]
    FrontierFieldSystem_0204AC7C();
    // strh r0, [r4]
    ov80_022358E8();
    // strh r0, [r4]
    FrontierFieldSystem_GetBattleTowerMode();
    // strh r0, [r4]
    ov80_022357B4(*((u32*)(r5 + 8)));
    // ldr r1, [sp]
    ov80_02235898();
    // strh r0, [r4]
    // ldr r1, [sp]
    ov80_022358B0();
    FrontierFieldSystem_0204AD04(*((u32*)(r5 + 8)));
    FrontierFieldSystem_0204AE20(*((u32*)(r5 + 8)));
    FrontierFieldSystem_0204AF2C();
    // add r0, r0, r1
    MI_CpuFill8(0, 0x46);
    // strb r2, [r0, r1]
    // strh r0, [r4]
    // strh r0, [r4]
    GF_AssertFail(0, 0x000008D6, 1);
}




void ov80_0223558C(void) {
    // cmp r1, #2
    // bne _02235598
    // ldrb r0, [r0, #0x10]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1d
    // bx lr
    // cmp r1, #1
    // bne _022355BE
    // ldrb r1, [r0, #0xf]
    // cmp r1, #2
    // bne _022355B0
    // ldrb r0, [r0, #0x10]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1d
    // lsl r1, r0, #1
    // ldr r0, _022355CC ; =ov80_0223C034
    // ldrh r0, [r0, r1]
    // bx lr
    // ldrb r0, [r0, #0x12]
    // cmp r0, #0
    // beq _022355BA
    // mov r0, #0x61
    // bx lr
    // mov r0, #0
    // bx lr
    // ldrb r0, [r0, #0x11]
    // cmp r0, #0
    // beq _022355C8
    // mov r0, #0x61
    // bx lr
    // mov r0, #0
    // bx lr
    // _022355CC: .word ov80_0223C034
    // TODO: decompile
}




BOOL FrtCmd_133(void) {
    // add r1, r6, r1
    // add r4, #0x90
    // add r1, r4, r1
}




u32 FrtCmd_134(void) {
}




BOOL FrtCmd_135(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r5)));
    ov80_0223690C(r6);
    // str r6, [r4, r0]
    Sound_SetSceneAndPlayBGM(5, 0x0000045D, 1);
    // str r3, [sp]
    Frontier_LaunchApplication(*((u32*)*((u32*)r5)), gOverlayTemplate_Battle, r6, 0);
}




BOOL FrtCmd_136(void) {
    Frontier_GetData(*((u32*)*((u32*)r0)));
    FrontierScript_ReadVarPtr(r5);
    IsBattleResultWin(*((u32*)(*((u32*)(r4 + (0x8d << 4))) + 0x14)));
    // str r0, [r4, r1]
    // strh r0, [r6]
    BattleSetup_Delete(r5, 0x000008CC);
}




BOOL FrtCmd_137(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    FrontierScript_ReadVar(r4);
    FrontierScript_ReadVar(r4);
    FrontierScript_ReadVarPtr(r4);
    Frontier_GetData(*((u32*)*((u32*)r4)));
    ov80_02236ABC(r7);
    GF_AssertFail();
    sub_0203769C();
    // add r1, r4, r1
    sub_02037C0C(0x0000083E);
    // strh r0, [r5]
    // strh r0, [r5]
}




BOOL FrtCmd_138(void) {
    FrontierScriptContext_ReadHalfWord();
    FrontierScriptContext_ReadHalfWord(r5);
    // add r1, #0x78
    // strh r4, [r1]
    // add r1, #0x7a
    // strh r0, [r1]
    FrontierScriptContext_Pause(r5, ov80_0223573C);
}




void ov80_0223573C(void) {
    // add r0, #0x7a
    // str r0, [sp]
    // add r5, #0x78
}




BOOL ov80_02235774(void) {
    // sub r0, r1, r0
    // add r1, sp, #8
    // strh r0, [r4]
}



