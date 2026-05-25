/* Decompiled from asm/overlay_80_02230B8C.s */
#include "global.h"

void FrtCmd_139(void) {
    FrontierScript_ReadVar();
    // str r0, [sp, #4]
    FrontierScript_ReadVar(r5);
    FrontierScript_ReadVar(r5);
    FrontierScript_ReadVar(r5);
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r5)));
    // str r1, [sp]
    // ldr r1, [sp, #4]
    ov80_022310C4(*((u32*)(r0 + 8)), ((r7 << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18));
    Frontier_SetData(*((u32*)*((u32*)r5)), r0);
}



u32 FrtCmd_140(void) {
}



u32 FrtCmd_141(void) {
}



void FrtCmd_142(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, [r6]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r7, r0, #0
    // ldr r0, [r6]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r4, r0, #0
    // mov r0, #0xb
    // mov r1, #0x20
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x20
    // add r5, r0, #0
    // bl MI_CpuFill8
    // ldr r0, [r7, #8]
    // ldr r1, _02230CD0 ; =0x00000704
    // str r0, [r5]
    // ldrb r0, [r4, #4]
    // add r3, r4, r1
    // sub r1, #0xf
    // strb r0, [r5, #4]
    // str r4, [r5, #0x10]
    // ldrb r2, [r4, #4]
    // lsl r0, r2, #3
    // add r0, r2, r0
    // add r0, r3, r0
    // str r0, [r5, #8]
    // mov r0, #0x99
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // str r0, [r5, #0xc]
    // ldrh r0, [r4, #8]
    // strh r0, [r5, #0x18]
    // ldrb r0, [r4, r1]
    // strb r0, [r5, #5]
    // ldr r0, _02230CD4 ; =0x00000D84
    // add r0, r4, r0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // bl SaveArray_Party_Init
    // ldr r0, [r7, #8]
    // bl SaveArray_Party_Get
    // mov r1, #0x26
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // add r7, r0, #0
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // ldr r0, [r5, #0xc]
    // bl Party_AddMon
    // ldrb r0, [r5, #4]
    // cmp r0, #1
    // bne _02230CA4
    // ldr r1, _02230CD8 ; =0x00000261
    // add r0, r7, #0
    // ldrb r1, [r4, r1]
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // ldr r0, [r5, #0xc]
    // bl Party_AddMon
    // b _02230CB8
    // add r0, #0xfe
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _02230CB8
    // ldr r1, _02230CDC ; =0x00000D8C
    // ldr r0, [r5, #0xc]
    // ldr r1, [r4, r1]
    // bl Party_AddMon
    // ldr r0, _02230CE0 ; =ov80_02230D5C
    // ldr r1, _02230CE4 ; =ov80_0223BDEC
    // str r0, [sp]
    // ldr r0, [r6]
    // add r2, r5, #0
    // ldr r0, [r0]
    // mov r3, #0
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02230CD0: .word 0x00000704
    // _02230CD4: .word 0x00000D84
    // _02230CD8: .word 0x00000261
    // _02230CDC: .word 0x00000D8C
    // _02230CE0: .word ov80_02230D5C
    // _02230CE4: .word ov80_0223BDEC
    // TODO: decompile
}



void FrtCmd_143(void) {
    Frontier_GetData(*((u32*)*((u32*)r0)));
    // ldr r5, [r4, r0]
    IsBattleResultWin(*((u32*)(r5 + 0x14)));
    *((u32*)(r4 + 0x14)) = r0;
    BattleSetup_Delete(r5);
}



void FrtCmd_144(void) {
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
    // bl ov80_022375D0
    // add r6, r0, #0
    // mov r0, #7
    // lsl r0, r0, #8
    // str r6, [r4, r0]
    // ldr r1, _02230D54 ; =0x0000045D
    // mov r0, #5
    // mov r2, #1
    // bl Sound_SetSceneAndPlayBGM
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, [r5]
    // ldr r1, _02230D58 ; =gOverlayTemplate_Battle
    // ldr r0, [r0]
    // add r2, r6, #0
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _02230D54: .word 0x0000045D
    // _02230D58: .word gOverlayTemplate_Battle
    // TODO: decompile
}



void ov80_02230D5C(void) {
}



void FrtCmd_145(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r1, [r4, #0x1c]
    // add r2, r1, #1
    // str r2, [r4, #0x1c]
    // ldrb r7, [r1]
    // add r1, r2, #1
    // str r1, [r4, #0x1c]
    // ldrb r6, [r2]
    // add r1, r1, #1
    // str r1, [r4, #0x1c]
    // bl FrontierScript_ReadVarPtr
    // add r5, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r4, r0, #0
    // cmp r7, #0x26
    // bls _02230DA8
    // b _02230FB6
    // add r1, r7, r7
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02230DB4: ; jump table
    // strb r6, [r4, #4]
    // b _02230FB6
    // ldr r0, _02230FBC ; =0x000006F2
    // ldrh r0, [r4, r0]
    // strh r0, [r5]
    // b _02230FB6
    // ldrh r0, [r4, #8]
    // strh r0, [r5]
    // b _02230FB6
    // ldrh r1, [r4, #8]
    // ldr r0, _02230FC0 ; =0x0000270F
    // cmp r1, r0
    // bhs _02230EB8
    // add r0, r1, #1
    // strh r0, [r4, #8]
    // b _02230FB6
    // mov r0, #0
    // bl OS_ResetSystem
    // b _02230FB6
    // ldr r0, _02230FC4 ; =0x000006F8
    // ldr r0, [r4, r0]
    // bl sub_02030B14
    // strh r0, [r5]
    // b _02230FB6
    // mov r1, #2
    // bl ov80_0223157C
    // b _02230FB6
    // bl ov80_022317C0
    // strh r0, [r5]
    // b _02230FB6
    // ldrb r0, [r4, #4]
    // cmp r0, #2
    // bne _02230E52
    // mov r0, #0xa
    // strh r0, [r5]
    // b _02230FB6
    // ldrh r0, [r4, #0xa]
    // strh r0, [r5]
    // b _02230FB6
    // add r1, r6, #0
    // bl ov80_022317D0
    // strh r0, [r5]
    // b _02230FB6
    // bl ov80_02231804
    // b _02230FB6
    // bl ov80_02231828
    // b _02230FB6
    // bl ov80_022317CC
    // strh r0, [r5]
    // b _02230FB6
    // ldr r0, _02230FC8 ; =0x00000D88
    // ldrb r0, [r4, r0]
    // strh r0, [r5]
    // b _02230FB6
    // ldr r0, [sp, #4]
    // ldr r0, [r0, #8]
    // bl SaveArray_Party_Get
    // str r0, [sp]
    // ldrb r0, [r4, #4]
    // bl ov80_0223787C
    // add r7, r0, #0
    // mov r5, #0
    // cmp r7, #0
    // ble _02230EB8
    // ldr r0, _02230FCC ; =0x00000728
    // add r6, r4, r0
    // mov r1, #0x26
    // add r2, r4, r5
    // lsl r1, r1, #4
    // ldrb r1, [r2, r1]
    // ldr r0, [sp]
    // bl Party_GetMonByIndex
    // mov r1, #6
    // add r2, r6, #0
    // bl SetMonData
    // add r5, r5, #1
    // add r6, r6, #2
    // cmp r5, r7
    // blt _02230E9A
    // b _02230FB6
    // ldr r1, _02230FD0 ; =0x000006F5
    // ldrb r2, [r4, #4]
    // ldrb r0, [r4, r1]
    // add r1, #0xf
    // add r3, r4, r1
    // lsl r1, r2, #3
    // add r1, r2, r1
    // add r1, r3, r1
    // bl sub_02030BD0
    // add r2, r0, #0
    // cmp r2, #0xa
    // bhs _02230FB6
    // ldr r1, _02230FD0 ; =0x000006F5
    // ldrb r3, [r4, #4]
    // ldrb r0, [r4, r1]
    // add r1, #0xf
    // add r5, r4, r1
    // lsl r1, r3, #3
    // add r2, r2, #1
    // add r1, r3, r1
    // lsl r2, r2, #0x18
    // add r1, r5, r1
    // lsr r2, r2, #0x18
    // bl sub_02030BF4
    // b _02230FB6
    // bl sub_02096910
    // b _02230FB6
    // ldrb r0, [r4, #4]
    // bl ov80_0223792C
    // strh r0, [r5]
    // b _02230FB6
    // ldrb r0, [r4, #4]
    // strh r0, [r5]
    // b _02230FB6
    // cmp r6, #0
    // bne _02230F14
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // b _02230FB6
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // b _02230FB6
    // ldrb r1, [r4, #5]
    // add r0, #0x40
    // mov r2, #0xb
    // lsl r1, r1, #2
    // add r1, r4, r1
    // ldrh r1, [r1, #0x18]
    // mov r3, #0xcc
    // bl ov80_0222A474
    // ldrb r1, [r4, #5]
    // mov r0, #0x15
    // lsl r0, r0, #4
    // lsl r1, r1, #1
    // add r1, r1, #1
    // lsl r1, r1, #1
    // add r1, r4, r1
    // ldrh r1, [r1, #0x18]
    // add r0, r4, r0
    // mov r2, #0xb
    // mov r3, #0xcc
    // bl ov80_0222A474
    // b _02230FB6
    // ldr r1, _02230FD0 ; =0x000006F5
    // ldrb r2, [r4, #4]
    // ldrb r0, [r4, r1]
    // add r1, #0xf
    // add r3, r4, r1
    // lsl r1, r2, #3
    // add r1, r2, r1
    // add r1, r3, r1
    // bl sub_02030BD0
    // strh r0, [r5]
    // b _02230FB6
    // bl ov80_02231888
    // strh r0, [r5]
    // b _02230FB6
    // ldr r0, [sp, #4]
    // ldr r0, [r0, #8]
    // bl SaveArray_Party_Get
    // mov r1, #0x26
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // bl Party_GetMonByIndex
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r5]
    // b _02230FB6
    // bl ov80_022319B0
    // b _02230FB6
    // bl ov80_02231A04
    // b _02230FB6
    // mov r0, #0
    // strh r0, [r5]
    // ldrb r0, [r4, #4]
    // cmp r0, #0
    // bne _02230FB6
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // cmp r0, #0x32
    // bne _02230FAE
    // mov r0, #1
    // strh r0, [r5]
    // b _02230FB6
    // cmp r0, #0xaa
    // bne _02230FB6
    // mov r0, #2
    // strh r0, [r5]
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02230FBC: .word 0x000006F2
    // _02230FC0: .word 0x0000270F
    // _02230FC4: .word 0x000006F8
    // _02230FC8: .word 0x00000D88
    // _02230FCC: .word 0x00000728
    // _02230FD0: .word 0x000006F5
    // TODO: decompile
}



u32 FrtCmd_146(void) {
}



u32 FrtCmd_147(void) {
}



void FrtCmd_148(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r1, r4, #0
    // add r1, #0x78
    // strh r0, [r1]
    // ldr r1, _0223103C ; =ov80_02231040
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0223103C: .word ov80_02231040
    // TODO: decompile
}



void ov80_02231040(void) {
    // add r1, #0x78
    // ldrh r1, [r1]
    ov80_0222BE9C(r0);
    Frontier_GetData(*((u32*)*((u32*)r4)));
    // ldrb r2, [r0, r1]
    // strb r2, [r0, r1]
}



void FrtCmd_149(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    *((u32*)(r5 + 0x1c)) = (*((u32*)(r5 + 0x1c)) + 1);
    // ldrb r4, [r1]
    Frontier_GetData(*((u32*)*((u32*)r5)), *((u32*)(r5 + 0x1c)));
    // add r1, r4, r1
    // add r2, #0x58
    // add r1, r2, r1
    ov80_0222F44C(r5, ((r4 << 4) << 4), r0);
}



u32 FrtCmd_118(void) {
}



u8 FrtCmd_199(void) {
}


