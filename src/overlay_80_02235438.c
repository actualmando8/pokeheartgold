/* Decompiled from asm/overlay_80_02235438.s */
#include "global.h"

u32 FrtCmd_091(void) {
}



void FrtCmd_132(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, [r7]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r5, r0, #0
    // add r0, r7, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r6, r0, #0
    // add r0, r7, #0
    // bl FrontierScript_ReadVar
    // str r0, [sp]
    // add r0, r7, #0
    // bl FrontierScript_ReadVarPtr
    // add r4, r0, #0
    // ldr r0, [r7]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // cmp r6, #0x3b
    // bgt _022354CC
    // add r1, r6, #0
    // sub r1, #0x21
    // bmi _022354C6
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02235490: ; jump table
    // cmp r6, #2
    // beq _022354D2
    // b _0223557A
    // cmp r6, #0x64
    // beq _0223556A
    // b _0223557A
    // bl ResetSystem
    // b _0223557E
    // bl FrontierFieldSystem_AwardTowerBattlePoints
    // strh r0, [r4]
    // ldr r0, [r5, #8]
    // bl Save_GameStats_Get
    // ldrh r2, [r4]
    // mov r1, #0x45
    // bl GameStats_Add
    // b _0223557E
    // ldr r1, [sp]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov80_0223558C
    // strh r0, [r4]
    // b _0223557E
    // bl FrontierFieldSystem_GetFrontierBattleNumber
    // strh r0, [r4]
    // b _0223557E
    // bl ov80_022358C4
    // strh r0, [r4]
    // b _0223557E
    // bl FrontierFieldSystem_0204AC7C
    // strh r0, [r4]
    // b _0223557E
    // bl ov80_022358E8
    // strh r0, [r4]
    // b _0223557E
    // bl FrontierFieldSystem_GetBattleTowerMode
    // strh r0, [r4]
    // b _0223557E
    // ldr r1, [r5, #8]
    // bl ov80_022357B4
    // b _0223557E
    // ldr r1, [sp]
    // bl ov80_02235898
    // strh r0, [r4]
    // b _0223557E
    // ldr r1, [sp]
    // bl ov80_022358B0
    // b _0223557E
    // ldr r1, [r5, #8]
    // bl FrontierFieldSystem_0204AD04
    // b _0223557E
    // ldr r1, [r5, #8]
    // bl FrontierFieldSystem_0204AE20
    // b _0223557E
    // bl FrontierFieldSystem_0204AF2C
    // b _0223557E
    // ldr r1, _02235584 ; =0x00000884
    // mov r2, #0x46
    // add r0, r0, r1
    // mov r1, #0
    // bl MI_CpuFill8
    // b _0223557E
    // ldr r1, _02235588 ; =0x000008D6
    // mov r2, #1
    // strb r2, [r0, r1]
    // b _0223557E
    // cmp r0, #0
    // bne _02235574
    // mov r0, #1
    // strh r0, [r4]
    // b _0223557E
    // mov r0, #0
    // strh r0, [r4]
    // b _0223557E
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02235584: .word 0x00000884
    // _02235588: .word 0x000008D6
    // TODO: decompile
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
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    *((u32*)(r5 + 0x1c)) = (*((u32*)(r5 + 0x1c)) + 1);
    // ldrb r6, [r1]
    Frontier_GetData(*((u32*)*((u32*)r5)), *((u32*)(r5 + 0x1c)));
    ov80_02236B18(*((u8*)(r0 + 0xf)));
    // add r1, r6, r1
    // add r4, #0x90
    // add r1, r4, r1
    ov80_0222F458(r5, ((r6 << 4) << 4), r0);
}



u32 FrtCmd_134(void) {
}



void FrtCmd_135(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r6, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r1, r6, #0
    // add r4, r0, #0
    // bl ov80_0223690C
    // add r6, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #4
    // str r6, [r4, r0]
    // ldr r1, _0223566C ; =0x0000045D
    // mov r0, #5
    // mov r2, #1
    // bl Sound_SetSceneAndPlayBGM
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, [r5]
    // ldr r1, _02235670 ; =gOverlayTemplate_Battle
    // ldr r0, [r0]
    // add r2, r6, #0
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0223566C: .word 0x0000045D
    // _02235670: .word gOverlayTemplate_Battle
    // TODO: decompile
}



void FrtCmd_136(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r4, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVarPtr
    // add r6, r0, #0
    // mov r0, #0x8d
    // lsl r0, r0, #4
    // ldr r5, [r4, r0]
    // ldr r0, [r5, #0x14]
    // bl IsBattleResultWin
    // ldr r1, _022356A8 ; =0x000008CC
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // strh r0, [r6]
    // add r0, r5, #0
    // bl BattleSetup_Delete
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _022356A8: .word 0x000008CC
    // TODO: decompile
}



void FrtCmd_137(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r0, r4, #0
    // bl FrontierScript_ReadVar
    // add r6, r0, #0
    // add r0, r4, #0
    // bl FrontierScript_ReadVar
    // add r7, r0, #0
    // add r0, r4, #0
    // bl FrontierScript_ReadVarPtr
    // add r5, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r4, r0, #0
    // cmp r6, #2
    // bne _022356E6
    // add r1, r7, #0
    // bl ov80_02236ABC
    // b _022356EA
    // bl GF_AssertFail
    // bl sub_0203769C
    // ldr r1, _0223570C ; =0x0000083E
    // add r1, r4, r1
    // bl sub_02037C0C
    // cmp r0, #1
    // bne _02235700
    // mov r0, #1
    // strh r0, [r5]
    // b _02235708
    // mov r0, #0
    // strh r0, [r5]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223570C: .word 0x0000083E
    // TODO: decompile
}



void FrtCmd_138(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r4, r0, #0
    // add r0, r5, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r1, r5, #0
    // add r1, #0x78
    // strh r4, [r1]
    // add r1, r5, #0
    // add r1, #0x7a
    // strh r0, [r1]
    // ldr r1, _02235738 ; =ov80_0223573C
    // add r0, r5, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _02235738: .word ov80_0223573C
    // TODO: decompile
}



void ov80_0223573C(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r5)));
    // add r0, #0x7a
    // ldrh r0, [r0]
    // str r0, [sp]
    // add r5, #0x78
    // ldrh r3, [r5]
    ov80_02235774(r5, r0, *((u32*)(r4 + 8)));
}



BOOL ov80_02235774(void) {
    sub_0203769C();
    // sub r0, r1, r0
    sub_02037C44(1);
    // add r1, sp, #8
    ov80_0222BE24(r4, *((u16*)(r1 + 0x10)));
    ov80_02236AD8(r6, r7);
    // strh r0, [r4]
    GF_AssertFail();
}


