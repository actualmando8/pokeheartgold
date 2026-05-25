/* Decompiled from asm/overlay_80_0222F608.s */
#include "global.h"

void FrtCmd_092(void) {
    FrontierScript_ReadVar();
    FrontierScript_ReadVar(r5);
    FrontierScript_ReadVar(r5);
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r5)));
    ov80_0222FD08(*((u32*)(r0 + 8)), r7, ((r4 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18));
    Frontier_SetData(*((u32*)*((u32*)r5)), r0);
}



u32 FrtCmd_093(void) {
}



u32 FrtCmd_094(void) {
}



void FrtCmd_095(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, [r6]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r7, r0, #0
    // ldr r0, [r6]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r5, r0, #0
    // mov r0, #0xb
    // mov r1, #0x24
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x24
    // add r4, r0, #0
    // bl MI_CpuFill8
    // ldr r0, [r7, #8]
    // mov r3, #0
    // str r0, [r4]
    // ldrb r0, [r5, #4]
    // add r2, r4, #0
    // strb r0, [r4, #4]
    // ldrb r0, [r5, #5]
    // strb r0, [r4, #5]
    // ldr r0, _0222F6D4 ; =0x000004D4
    // strb r3, [r4, #6]
    // ldr r1, [r5, r0]
    // add r0, r0, #4
    // str r1, [r4, #8]
    // ldr r0, [r5, r0]
    // ldr r1, _0222F6D8 ; =ov80_0223BDB4
    // str r0, [r4, #0xc]
    // ldr r0, _0222F6DC ; =ov80_0222F7CC
    // str r5, [r4, #0x1c]
    // str r0, [sp]
    // ldr r0, [r6]
    // ldr r0, [r0]
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222F6D4: .word 0x000004D4
    // _0222F6D8: .word ov80_0223BDB4
    // _0222F6DC: .word ov80_0222F7CC
    // TODO: decompile
}



void FrtCmd_096(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, [r0]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r4, r0, #0
    // ldr r0, _0222F704 ; =0x000004FC
    // ldr r5, [r4, r0]
    // ldr r0, [r5, #0x14]
    // bl IsBattleResultWin
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // bl BattleSetup_Delete
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0222F704: .word 0x000004FC
    // TODO: decompile
}



void FrtCmd_097(void) {
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
    // bl ov80_02236F24
    // add r2, r0, #0
    // ldr r0, _0222F744 ; =0x000004FC
    // mov r3, #0
    // str r2, [r4, r0]
    // str r3, [sp]
    // ldr r0, [r5]
    // ldr r1, _0222F748 ; =gOverlayTemplate_Battle
    // ldr r0, [r0]
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0222F744: .word 0x000004FC
    // _0222F748: .word gOverlayTemplate_Battle
    // TODO: decompile
}



void FrtCmd_098(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, [r6]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r7, r0, #0
    // ldr r0, [r6]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r5, r0, #0
    // mov r2, #0
    // ldr r0, _0222F7BC ; =0x000004DC
    // add r3, r5, #0
    // add r1, r2, #0
    // add r2, r2, #1
    // strh r1, [r3, r0]
    // add r3, r3, #2
    // cmp r2, #6
    // blt _0222F76C
    // mov r0, #0xb
    // mov r1, #0x24
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x24
    // add r4, r0, #0
    // bl MI_CpuFill8
    // ldr r0, [r7, #8]
    // add r2, r4, #0
    // str r0, [r4]
    // ldrb r0, [r5, #4]
    // mov r3, #0
    // strb r0, [r4, #4]
    // ldrb r0, [r5, #5]
    // strb r0, [r4, #5]
    // mov r0, #1
    // strb r0, [r4, #6]
    // ldr r0, _0222F7C0 ; =0x000004D4
    // ldr r1, [r5, r0]
    // add r0, r0, #4
    // str r1, [r4, #8]
    // ldr r0, [r5, r0]
    // ldr r1, _0222F7C4 ; =ov80_0223BDC4
    // str r0, [r4, #0xc]
    // ldr r0, _0222F7C8 ; =ov80_0222F7CC
    // str r5, [r4, #0x1c]
    // str r0, [sp]
    // ldr r0, [r6]
    // ldr r0, [r0]
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222F7BC: .word 0x000004DC
    // _0222F7C0: .word 0x000004D4
    // _0222F7C4: .word ov80_0223BDC4
    // _0222F7C8: .word ov80_0222F7CC
    // TODO: decompile
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
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x6c
    // add r6, r0, #0
    // ldr r2, [r6, #0x1c]
    // add r1, r2, #1
    // str r1, [r6, #0x1c]
    // ldrb r7, [r2]
    // add r2, r1, #1
    // str r2, [r6, #0x1c]
    // ldrb r5, [r1]
    // add r1, r2, #1
    // str r1, [r6, #0x1c]
    // ldrb r1, [r2]
    // str r1, [sp, #0x1c]
    // bl FrontierScript_ReadVarPtr
    // str r0, [sp, #0x18]
    // ldr r0, [r6]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r4, r0, #0
    // ldr r0, [r6]
    // bl FrontierSystem_GetFrontierMap
    // str r0, [sp, #0x20]
    // cmp r7, #0x29
    // bhi _0222F8F2
    // add r0, r7, r7
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222F874: ; jump table
    // strb r5, [r4, #7]
    // b _0222FBE6
    // strb r5, [r4, #5]
    // b _0222FBE6
    // strb r5, [r4, #4]
    // b _0222FBE6
    // lsl r0, r5, #1
    // add r1, r4, r0
    // ldr r0, _0222FBEC ; =0x000004DC
    // ldrh r1, [r1, r0]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // b _0222FBE6
    // ldrh r1, [r4, #0xc]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // b _0222FBE6
    // ldrh r1, [r4, #0xc]
    // ldr r0, _0222FBF0 ; =0x0000270F
    // cmp r1, r0
    // blo _0222F8F4
    // b _0222FBE6
    // add r0, r1, #1
    // strh r0, [r4, #0xc]
    // b _0222FBE6
    // mov r0, #0
    // bl OS_ResetSystem
    // b _0222FBE6
    // ldr r0, _0222FBF4 ; =0x000004F4
    // ldr r0, [r4, r0]
    // bl sub_0203095C
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // b _0222FBE6
    // add r0, r4, #0
    // mov r1, #2
    // bl ov80_0223049C
    // b _0222FBE6
    // add r0, r4, #0
    // bl ov80_02230784
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // b _0222FBE6
    // mov r0, #0x38
    // mul r0, r5
    // add r1, r4, r0
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // ldrh r0, [r1, r0]
    // lsl r0, r0, #0x15
    // lsr r1, r0, #0x15
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // b _0222FBE6
    // mov r0, #0x38
    // mul r0, r5
    // add r1, r4, r0
    // ldr r0, [sp, #0x1c]
    // lsl r0, r0, #1
    // add r1, r1, r0
    // mov r0, #0xfd
    // lsl r0, r0, #2
    // ldrh r1, [r1, r0]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // b _0222FBE6
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r6, r0, #0
    // add r0, r4, #0
    // bl ov80_02237120
    // add r2, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // add r1, r4, r0
    // mov r0, #0x38
    // mul r0, r5
    // add r0, r1, r0
    // add r1, r6, #0
    // bl ov80_0222A140
    // add r0, r6, #0
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // add r0, r6, #0
    // bl Heap_Free
    // b _0222FBE6
    // ldrb r0, [r4, #4]
    // mov r1, #1
    // bl ov80_02236DF8
    // mov r1, #0
    // str r0, [sp, #0x14]
    // add r2, sp, #0x24
    // add r0, r1, #0
    // add r1, r1, #1
    // stmia r2!, {r0}
    // cmp r1, #0x12
    // blt _0222F99C
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // ble _0222FA12
    // mov r0, #0x3f
    // lsl r0, r0, #4
    // add r6, r4, r0
    // add r0, r4, #0
    // bl ov80_02237120
    // add r2, r0, #0
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov80_0222A140
    // add r0, r5, #0
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #0xb2
    // mov r2, #0
    // bl GetMonData
    // cmp r7, r0
    // bne _0222F9E8
    // mov r0, #0xff
    // lsl r1, r7, #2
    // add r2, sp, #0x24
    // ldr r2, [r2, r1]
    // add r3, r2, #1
    // add r2, sp, #0x24
    // str r3, [r2, r1]
    // cmp r0, #0xff
    // beq _0222FA04
    // lsl r0, r0, #2
    // add r1, r2, #0
    // ldr r1, [r1, r0]
    // add r2, r1, #1
    // add r1, sp, #0x24
    // str r2, [r1, r0]
    // ldr r0, [sp, #0x10]
    // add r6, #0x38
    // add r1, r0, #1
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0x10]
    // cmp r1, r0
    // blt _0222F9BC
    // add r0, r5, #0
    // bl Heap_Free
    // mov r0, #0
    // add r4, sp, #0x24
    // add r5, r0, #0
    // add r3, r4, #0
    // lsl r1, r0, #2
    // ldr r2, [r3, r1]
    // ldr r1, [r4]
    // cmp r2, r1
    // bge _0222FA2C
    // add r0, r5, #0
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #0x12
    // blt _0222FA20
    // lsl r2, r0, #2
    // add r1, sp, #0x24
    // ldr r1, [r1, r2]
    // cmp r1, #1
    // bgt _0222FA46
    // ldr r0, [sp, #0x18]
    // mov r1, #0xff
    // strh r1, [r0]
    // b _0222FBE6
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // b _0222FBE6
    // add r0, r4, #0
    // bl ov80_022372B4
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // b _0222FBE6
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov80_02230794
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // b _0222FBE6
    // add r0, r4, #0
    // bl ov80_022307C8
    // b _0222FBE6
    // add r0, r4, #0
    // bl ov80_022307D4
    // b _0222FBE6
    // add r0, r4, #0
    // bl ov80_02230790
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // b _0222FBE6
    // ldr r0, _0222FBF8 ; =0x0000057C
    // ldrb r1, [r4, r0]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // b _0222FBE6
    // ldr r0, _0222FBFC ; =0x0000057D
    // ldrb r1, [r4, r0]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // b _0222FBE6
    // add r0, r4, #0
    // bl sub_02096910
    // b _0222FBE6
    // ldrb r0, [r4, #4]
    // bl ov80_02237254
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // b _0222FBE6
    // ldrb r1, [r4, #4]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // b _0222FBE6
    // mov r0, #0x1a
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // mov r1, #3
    // ldr r0, [sp, #0x20]
    // str r5, [sp, #8]
    // ldr r0, [r0]
    // add r2, r1, #0
    // mov r3, #0xa
    // bl BgTilemapRectChangePalette
    // ldr r0, [sp, #0x20]
    // mov r1, #3
    // ldr r0, [r0]
    // bl ScheduleBgTilemapBufferTransfer
    // b _0222FBE6
    // ldr r0, [r6]
    // bl FrontierSystem_GetFrontierMap
    // add r1, r0, #0
    // ldr r0, _0222FC00 ; =ov80_0222FC08
    // mov r2, #5
    // bl SysTask_CreateOnMainQueue
    // mov r1, #5
    // lsl r1, r1, #8
    // str r0, [r4, r1]
    // b _0222FBE6
    // mov r0, #5
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0222FBE6
    // bl SysTask_Destroy
    // mov r0, #5
    // mov r1, #0
    // lsl r0, r0, #8
    // str r1, [r4, r0]
    // b _0222FBE6
    // ldrb r1, [r4, #6]
    // add r0, r4, #0
    // add r0, #0x34
    // lsl r1, r1, #1
    // add r1, r4, r1
    // ldrh r1, [r1, #0x18]
    // mov r2, #0xb
    // mov r3, #0xcc
    // bl ov80_0222A474
    // ldrb r1, [r4, #6]
    // mov r0, #0x51
    // lsl r0, r0, #2
    // add r1, r1, #7
    // lsl r1, r1, #1
    // add r1, r4, r1
    // ldrh r1, [r1, #0x18]
    // add r0, r4, r0
    // mov r2, #0xb
    // mov r3, #0xcc
    // bl ov80_0222A474
    // b _0222FBE6
    // ldrb r0, [r4, #4]
    // bl ov80_02236DD4
    // add r7, r0, #0
    // mov r5, #0
    // cmp r7, #0
    // ble _0222FBE6
    // ldr r0, _0222FC04 ; =0x000004D4
    // add r1, r5, #0
    // ldr r0, [r4, r0]
    // bl Party_GetMonByIndex
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, [r6]
    // add r1, r5, #0
    // ldr r0, [r0, #0x44]
    // bl BufferBoxMonSpeciesName
    // add r5, r5, #1
    // cmp r5, r7
    // blt _0222FB42
    // b _0222FBE6
    // add r0, r4, #0
    // bl ov80_02230B4C
    // ldr r1, [sp, #0x18]
    // strh r0, [r1]
    // b _0222FBE6
    // add r0, r4, #0
    // bl ov80_02230AE4
    // b _0222FBE6
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // strh r1, [r0]
    // ldrb r0, [r4, #4]
    // cmp r0, #0
    // bne _0222FBE6
    // ldrh r0, [r4, #0xc]
    // add r0, r0, #1
    // cmp r0, #0x15
    // bne _0222FB94
    // ldr r0, [sp, #0x18]
    // mov r1, #1
    // strh r1, [r0]
    // b _0222FBE6
    // cmp r0, #0x31
    // bne _0222FBE6
    // ldr r0, [sp, #0x18]
    // mov r1, #2
    // strh r1, [r0]
    // b _0222FBE6
    // add r0, r4, #0
    // bl ov80_022371B0
    // b _0222FBE6
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // mov r3, #0x3f
    // lsl r3, r3, #4
    // str r0, [sp, #4]
    // mov r0, #0xb
    // str r0, [sp, #8]
    // mov r0, #0xcd
    // add r1, r3, #0
    // add r2, r3, #0
    // str r0, [sp, #0xc]
    // add r0, r4, r3
    // sub r1, #0x1e
    // sub r2, #0x16
    // sub r3, #0x10
    // add r1, r4, r1
    // add r2, r4, r2
    // add r3, r4, r3
    // bl ov80_0222A52C
    // b _0222FBE6
    // add r0, r4, #0
    // bl ov80_02237130
    // b _0222FBE6
    // ldrb r1, [r4, #0xb]
    // ldr r0, [sp, #0x18]
    // strh r1, [r0]
    // mov r0, #1
    // strb r0, [r4, #0xb]
    // mov r0, #0
    // add sp, #0x6c
    // pop {r4, r5, r6, r7, pc}
    // _0222FBEC: .word 0x000004DC
    // _0222FBF0: .word 0x0000270F
    // _0222FBF4: .word 0x000004F4
    // _0222FBF8: .word 0x0000057C
    // _0222FBFC: .word 0x0000057D
    // _0222FC00: .word ov80_0222FC08
    // _0222FC04: .word 0x000004D4
    // TODO: decompile
}



void ov80_0222FC08(void) {
    Bg_GetYpos(*((u32*)r1), 2);
    ScheduleSetBgPosText(*((u32*)r4), 2, 3, 0);
    ScheduleSetBgPosText(2, 4, 1);
}



u32 FrtCmd_104(void) {
}



u32 FrtCmd_105(void) {
}



void FrtCmd_106(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r1, r4, #0
    // add r1, #0x78
    // strh r0, [r1]
    // ldr r1, _0222FC9C ; =ov80_0222FCA0
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0222FC9C: .word ov80_0222FCA0
    // TODO: decompile
}



void ov80_0222FCA0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // add r1, #0x78
    // ldrh r1, [r1]
    // bl ov80_0222BE9C
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // ldr r1, _0222FCCC ; =0x00000702
    // ldrb r2, [r0, r1]
    // cmp r2, #2
    // blo _0222FCC6
    // mov r2, #0
    // strb r2, [r0, r1]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0222FCCC: .word 0x00000702
    // TODO: decompile
}



void FrtCmd_107(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    *((u32*)(r5 + 0x1c)) = (*((u32*)(r5 + 0x1c)) + 1);
    // ldrb r4, [r1]
    Frontier_GetData(*((u32*)*((u32*)r5)), *((u32*)(r5 + 0x1c)));
    // add r1, r4, r1
    // add r2, #0x4c
    // add r1, r2, r1
    ov80_0222F44C(r5, ((r4 << 4) << 4), r0);
}


