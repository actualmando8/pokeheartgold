/* Decompiled from asm/overlay_80_02231BF8.s */
#include "global.h"

void FrtCmd_151(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // bl FrontierScript_ReadVar
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // add r4, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // add r6, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // add r7, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVarPtr
    // str r0, [sp, #0x14]
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // str r6, [sp]
    // lsl r2, r4, #0x18
    // ldr r1, [sp, #0x14]
    // str r7, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r0, #8]
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // lsr r2, r2, #0x18
    // bl ov80_022324C4
    // add r1, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_SetData
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


u32 FrtCmd_152(void) {
    FrontierScript_ReadVar();
    Frontier_GetData();
    ov80_02232824(r4);
    return 0;
}


u32 FrtCmd_153(void) {
    Frontier_GetData();
    ov80_02232ABC();
    return 0;
}


void FrtCmd_154(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r6, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r7, r0, #0
    // mov r0, #0xb
    // mov r1, #0x30
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x30
    // add r4, r0, #0
    // bl MI_CpuFill8
    // ldr r0, [r6, #8]
    // add r1, r7, #0
    // str r0, [r4]
    // add r0, r4, #0
    // bl ov80_02231E4C
    // ldr r0, _02231CD8 ; =ov80_02231E94
    // ldr r1, _02231CDC ; =ov80_0223BE34
    // str r0, [sp]
    // ldr r0, [r5]
    // add r2, r4, #0
    // ldr r0, [r0]
    // mov r3, #0
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _02231CD8: .word ov80_02231E94
    // _02231CDC: .word ov80_0223BE34
    // TODO: decompile
}


void FrtCmd_164(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r6, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r7, r0, #0
    // mov r0, #0xb
    // mov r1, #0x30
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x30
    // add r4, r0, #0
    // bl MI_CpuFill8
    // ldr r0, [r6, #8]
    // add r1, r7, #0
    // str r0, [r4]
    // add r0, r4, #0
    // bl ov80_02231E4C
    // ldr r0, _02231D2C ; =ov80_02231E94
    // ldr r1, _02231D30 ; =ov80_0223BE24
    // str r0, [sp]
    // ldr r0, [r5]
    // add r2, r4, #0
    // ldr r0, [r0]
    // mov r3, #0
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _02231D2C: .word ov80_02231E94
    // _02231D30: .word ov80_0223BE24
    // TODO: decompile
}


void FrtCmd_155(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, [r0]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r4, r0, #0
    // ldr r5, [r4, #0xc]
    // mov r1, #0
    // ldr r0, [r5, #4]
    // bl Party_GetMonByIndex
    // add r2, r0, #0
    // ldr r0, [r4, #0x28]
    // mov r1, #0
    // bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers
    // ldr r0, [r5, #4]
    // mov r1, #1
    // bl Party_GetMonByIndex
    // add r2, r0, #0
    // ldr r0, [r4, #0x28]
    // mov r1, #1
    // bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers
    // ldrb r0, [r4, #0x10]
    // bl ov80_02237D8C
    // cmp r0, #0
    // bne _02231D84
    // ldr r0, [r5, #4]
    // mov r1, #2
    // bl Party_GetMonByIndex
    // add r2, r0, #0
    // ldr r0, [r4, #0x28]
    // mov r1, #2
    // bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers
    // b _02231DA8
    // ldr r0, [r5, #0xc]
    // mov r1, #0
    // bl Party_GetMonByIndex
    // add r2, r0, #0
    // ldr r0, [r4, #0x28]
    // mov r1, #2
    // bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // bl Party_GetMonByIndex
    // add r2, r0, #0
    // ldr r0, [r4, #0x28]
    // mov r1, #3
    // bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers
    // ldr r0, [r5, #0x14]
    // bl IsBattleResultWin
    // str r0, [r4, #0x1c]
    // add r0, r5, #0
    // bl BattleSetup_Delete
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void FrtCmd_156(void) {
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
    // bl ov80_02237B8C
    // add r2, r0, #0
    // str r2, [r4, #0xc]
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, [r5]
    // ldr r1, _02231DF4 ; =gOverlayTemplate_Battle
    // ldr r0, [r0]
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _02231DF4: .word gOverlayTemplate_Battle
    // TODO: decompile
}


void FrtCmd_157(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r6, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r7, r0, #0
    // mov r0, #0xb
    // mov r1, #0x30
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x30
    // add r4, r0, #0
    // bl MI_CpuFill8
    // ldr r0, [r6, #8]
    // add r1, r7, #0
    // str r0, [r4]
    // add r0, r4, #0
    // bl ov80_02231E4C
    // ldr r0, _02231E44 ; =ov80_02231E94
    // ldr r1, _02231E48 ; =ov80_0223BE44
    // str r0, [sp]
    // ldr r0, [r5]
    // add r2, r4, #0
    // ldr r0, [r0]
    // mov r3, #0
    // bl Frontier_LaunchApplication
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _02231E44: .word ov80_02231E94
    // _02231E48: .word ov80_0223BE44
    // TODO: decompile
}


void ov80_02231E4C(void) {
    // push {r4, r5, r6, r7}
    // ldrb r2, [r1, #0x10]
    // mov r6, #0
    // strb r2, [r0, #4]
    // ldr r2, [r1, #0x28]
    // str r2, [r0, #0x18]
    // ldr r2, [r1, #0x2c]
    // str r2, [r0, #0x1c]
    // ldr r2, _02231E90 ; =0x00000A1C
    // str r1, [r0, #0x24]
    // ldrh r2, [r1, r2]
    // strh r2, [r0, #0x28]
    // mov r2, #0xde
    // lsl r2, r2, #2
    // add r3, r2, #4
    // mov r7, #0x37
    // add r5, r1, r6
    // lsl r7, r7, #4
    // ldrb r7, [r5, r7]
    // add r4, r0, r6
    // add r6, r6, #1
    // strb r7, [r4, #8]
    // mov r7, #0xdd
    // lsl r7, r7, #2
    // ldrb r7, [r5, r7]
    // cmp r6, #4
    // strb r7, [r4, #0xc]
    // ldrb r7, [r5, r2]
    // strb r7, [r4, #0x10]
    // ldrb r5, [r5, r3]
    // strb r5, [r4, #0x14]
    // blt _02231E6A
    // pop {r4, r5, r6, r7}
    // bx lr
    // _02231E90: .word 0x00000A1C
    // TODO: decompile
}


void ov80_02231E94(void) {
    ov80_02232AEC(*((u32*)(r0 + 0x24)), r0);
    Heap_Free(r4);
}


u32 FrtCmd_158(void) {
    Frontier_GetData();
    ov80_02232F00();
    return 0;
}


u32 FrtCmd_159(void) {
    Frontier_GetData();
    ov80_02232F08();
    return 0;
}


void FrtCmd_160(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // ldr r3, [r0, #0x1c]
    // add r1, r0, #0
    // add r2, r3, #1
    // str r2, [r1, #0x1c]
    // ldrb r1, [r3]
    // add r3, r2, #1
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x18]
    // add r1, r0, #0
    // str r3, [r1, #0x1c]
    // ldrb r6, [r2]
    // add r2, r3, #1
    // str r2, [r1, #0x1c]
    // ldrb r1, [r3]
    // str r1, [sp, #0x14]
    // bl FrontierScript_ReadVarPtr
    // add r5, r0, #0
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r4, r0, #0
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r7, r0, #0
    // ldr r0, [sp, #0x18]
    // cmp r0, #0x2c
    // bls _02231F18
    // b _0223228E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02231F24: ; jump table
    // strb r6, [r4, #0x10]
    // b _0223228E
    // lsl r0, r6, #1
    // add r1, r4, r0
    // mov r0, #0xe
    // lsl r0, r0, #6
    // ldrh r0, [r1, r0]
    // strh r0, [r5]
    // b _0223228E
    // ldrh r0, [r4, #0x14]
    // strh r0, [r5]
    // b _0223228E
    // ldrh r1, [r4, #0x14]
    // ldr r0, _02232294 ; =0x0000270F
    // cmp r1, r0
    // bhs _0223201E
    // add r0, r1, #1
    // strh r0, [r4, #0x14]
    // b _0223228E
    // mov r0, #0
    // bl OS_ResetSystem
    // b _0223228E
    // ldr r0, [r4, #8]
    // bl sub_02030CD8
    // strh r0, [r5]
    // b _0223228E
    // add r0, r4, #0
    // mov r1, #2
    // bl ov80_02232B58
    // b _0223228E
    // add r0, r4, #0
    // bl ov80_02232E58
    // strh r0, [r5]
    // b _0223228E
    // mov r0, #0x38
    // mul r0, r6
    // add r1, r4, r0
    // mov r0, #0xa2
    // lsl r0, r0, #2
    // ldrh r0, [r1, r0]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x15
    // strh r0, [r5]
    // b _0223228E
    // mov r0, #0x38
    // mul r0, r6
    // add r1, r4, r0
    // ldr r0, [sp, #0x14]
    // lsl r0, r0, #1
    // add r1, r1, r0
    // mov r0, #0xa3
    // lsl r0, r0, #2
    // ldrh r0, [r1, r0]
    // strh r0, [r5]
    // b _0223228E
    // ldr r0, [r7, #8]
    // bl SaveArray_Party_Get
    // add r7, r0, #0
    // ldr r0, _02232298 ; =0x0000036A
    // mov r5, #0
    // add r6, r4, r0
    // add r1, r4, r5
    // add r1, #0x24
    // ldrb r1, [r1]
    // add r0, r7, #0
    // bl Party_GetMonByIndex
    // mov r1, #6
    // add r2, r6, #0
    // bl SetMonData
    // add r5, r5, #1
    // add r6, r6, #2
    // cmp r5, #3
    // blt _02232002
    // b _0223228E
    // add r0, r4, #0
    // bl ov80_02237ED8
    // strh r0, [r5]
    // b _0223228E
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov80_02232E68
    // strh r0, [r5]
    // b _0223228E
    // add r0, r4, #0
    // bl ov80_02232E9C
    // b _0223228E
    // add r0, r4, #0
    // bl ov80_02232EE0
    // b _0223228E
    // add r0, r4, #0
    // bl ov80_02232E64
    // strh r0, [r5]
    // b _0223228E
    // mov r0, #0xa1
    // lsl r0, r0, #4
    // ldrb r0, [r4, r0]
    // strh r0, [r5]
    // b _0223228E
    // ldr r0, _0223229C ; =0x00000A11
    // ldrb r0, [r4, r0]
    // strh r0, [r5]
    // b _0223228E
    // add r0, r4, #0
    // bl ov80_02233020
    // strh r0, [r5]
    // ldrb r1, [r4, #0x10]
    // ldrh r2, [r5]
    // ldr r0, [r4, #4]
    // bl ov80_022331E8
    // b _0223228E
    // add r0, r4, #0
    // bl ov80_02232F60
    // b _0223228E
    // add r0, r4, #0
    // bl sub_02096910
    // b _0223228E
    // ldr r0, _022322A0 ; =0x00000A1B
    // ldrb r0, [r4, r0]
    // cmp r0, #6
    // blo _02232094
    // sub r0, r0, #6
    // strh r0, [r5]
    // b _0223228E
    // strh r0, [r5]
    // b _0223228E
    // ldr r0, _022322A0 ; =0x00000A1B
    // mov r2, #0
    // strb r2, [r4, r0]
    // sub r1, r0, #2
    // strb r2, [r4, r1]
    // sub r0, r0, #3
    // strb r2, [r4, r0]
    // b _0223228E
    // ldr r0, _022322A4 ; =0x00000A18
    // strb r6, [r4, r0]
    // b _0223228E
    // ldr r0, _022322A0 ; =0x00000A1B
    // mov r5, #0
    // ldrb r0, [r4, r0]
    // cmp r0, #6
    // blo _022320C4
    // bl sub_0203769C
    // cmp r0, #0
    // beq _022320CE
    // mov r5, #1
    // b _022320CE
    // bl sub_0203769C
    // cmp r0, #0
    // bne _022320CE
    // mov r5, #1
    // cmp r5, #1
    // bne _022320E2
    // ldr r0, [r7, #8]
    // bl Save_Frontier_GetStatic
    // ldrb r1, [r4, #0x10]
    // mov r2, #0x32
    // bl ov80_02237FA4
    // b _0223228E
    // ldr r0, _022322A8 ; =0x00000A1C
    // ldrh r1, [r4, r0]
    // sub r1, #0x32
    // strh r1, [r4, r0]
    // b _0223228E
    // mov r0, #0
    // strh r0, [r5]
    // ldrb r0, [r4, #0x10]
    // bl ov80_02237D8C
    // cmp r0, #1
    // bne _02232118
    // ldr r0, _022322A0 ; =0x00000A1B
    // ldrb r0, [r4, r0]
    // cmp r0, #6
    // blo _02232110
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02232118
    // mov r0, #1
    // strh r0, [r5]
    // b _0223228E
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0223211A
    // b _0223228E
    // mov r0, #1
    // strh r0, [r5]
    // b _0223228E
    // ldrb r0, [r4, #0x10]
    // bl ov80_02237D8C
    // strh r0, [r5]
    // b _0223228E
    // ldrb r0, [r4, #0x10]
    // strh r0, [r5]
    // b _0223228E
    // ldrb r0, [r4, #0x12]
    // strh r0, [r5]
    // b _0223228E
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0]
    // bl FrontierSystem_GetFrontierMap
    // ldr r0, [r0]
    // add r1, r4, #0
    // mov r2, #3
    // bl ov80_02237EFC
    // b _0223228E
    // ldrb r1, [r4, #0x11]
    // add r0, r4, #0
    // add r0, #0x4c
    // lsl r1, r1, #1
    // add r1, r4, r1
    // ldrh r1, [r1, #0x30]
    // mov r2, #0xb
    // mov r3, #0xcc
    // bl ov80_0222A474
    // ldrb r1, [r4, #0x11]
    // mov r0, #0x57
    // lsl r0, r0, #2
    // add r1, r1, #7
    // lsl r1, r1, #1
    // add r1, r4, r1
    // ldrh r1, [r1, #0x30]
    // add r0, r4, r0
    // mov r2, #0xb
    // mov r3, #0xcc
    // bl ov80_0222A474
    // b _0223228E
    // add r0, r4, #0
    // bl ov80_02233648
    // strh r0, [r5]
    // b _0223228E
    // ldr r0, [r7, #8]
    // bl sub_02030E08
    // mov r2, #0
    // str r2, [sp]
    // mov r1, #0xa
    // add r3, r2, #0
    // bl sub_02030E58
    // strh r0, [r5]
    // mov r1, #1
    // add r0, sp, #0x20
    // strb r1, [r0]
    // ldr r0, [r7, #8]
    // bl sub_02030E08
    // add r1, sp, #0x20
    // mov r2, #0
    // str r1, [sp]
    // mov r1, #0xa
    // add r3, r2, #0
    // bl sub_02030E18
    // b _0223228E
    // mov r0, #0
    // strh r0, [r5]
    // ldrb r0, [r4, #0x10]
    // cmp r0, #0
    // bne _0223228E
    // ldrh r0, [r4, #0x14]
    // add r0, r0, #1
    // cmp r0, #0x15
    // bne _022321CA
    // mov r0, #1
    // strh r0, [r5]
    // b _0223228E
    // cmp r0, #0x31
    // bne _0223228E
    // mov r0, #2
    // strh r0, [r5]
    // b _0223228E
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // mov r3, #0xa2
    // lsl r3, r3, #2
    // str r0, [sp, #4]
    // mov r0, #0xb
    // str r0, [sp, #8]
    // mov r0, #0xcd
    // add r1, r3, #0
    // add r2, r3, #0
    // str r0, [sp, #0xc]
    // add r0, r4, r3
    // sub r1, #0x1c
    // sub r2, #0x14
    // sub r3, #0x10
    // add r1, r4, r1
    // add r2, r4, r2
    // add r3, r4, r3
    // bl ov80_0222A52C
    // b _0223228E
    // add r0, r4, #0
    // bl ov80_02237E30
    // b _0223228E
    // ldrb r0, [r4, #0x13]
    // strh r0, [r5]
    // mov r0, #1
    // strb r0, [r4, #0x13]
    // b _0223228E
    // ldrb r5, [r4, #0x10]
    // cmp r5, #3
    // bne _0223228E
    // cmp r6, #0
    // ldr r0, [r7, #8]
    // bne _0223226A
    // bl Save_Frontier_GetStatic
    // add r6, r0, #0
    // ldrb r0, [r4, #0x10]
    // bl sub_0205C1F0
    // str r0, [sp, #0x1c]
    // add r0, r5, #0
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldr r1, [sp, #0x1c]
    // add r0, r6, #0
    // bl FrontierSave_GetStat
    // strh r0, [r4, #0x22]
    // ldr r0, [r7, #8]
    // bl Save_Frontier_GetStatic
    // add r5, r0, #0
    // ldrb r0, [r4, #0x10]
    // bl sub_0205C1F0
    // add r6, r0, #0
    // ldrb r0, [r4, #0x10]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldrh r3, [r4, #0x20]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02031108
    // b _0223228E
    // bl Save_Frontier_GetStatic
    // add r6, r0, #0
    // ldrb r0, [r4, #0x10]
    // bl sub_0205C1F0
    // add r7, r0, #0
    // add r0, r5, #0
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // ldrh r3, [r4, #0x22]
    // add r0, r6, #0
    // add r1, r7, #0
    // bl sub_02031108
    // mov r0, #0
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _02232294: .word 0x0000270F
    // _02232298: .word 0x0000036A
    // _0223229C: .word 0x00000A11
    // _022322A0: .word 0x00000A1B
    // _022322A4: .word 0x00000A18
    // _022322A8: .word 0x00000A1C
    // TODO: decompile
}


u32 FrtCmd_161(void) {
    FrontierScript_ReadVarPtr();
    Frontier_GetData();
    return 0;
}


u32 FrtCmd_162(void) {
    FrontierScript_ReadVar();
    FrontierScript_ReadVar(r5);
    FrontierScript_ReadVarPtr(r5);
    Frontier_GetData();
    ov80_02233280(r6, r7);
    return 1;
}


void FrtCmd_163(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r1, r4, #0
    // add r1, #0x78
    // strh r0, [r1]
    // ldr r1, _02232314 ; =ov80_02232318
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _02232314: .word ov80_02232318
    // TODO: decompile
}


void ov80_02232318(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // add r1, #0x78
    // ldrh r1, [r1]
    // bl ov80_0222BE9C
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // ldr r1, _02232344 ; =0x00000A1A
    // ldrb r2, [r0, r1]
    // cmp r2, #2
    // blo _0223233E
    // mov r2, #0
    // strb r2, [r0, r1]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02232344: .word 0x00000A1A
    // TODO: decompile
}


void FrtCmd_165(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r1, r4, #0
    // add r1, #0x78
    // strh r0, [r1]
    // ldr r1, _02232364 ; =ov80_02232368
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _02232364: .word ov80_02232368
    // TODO: decompile
}


void ov80_02232368(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r1, r5, #0
    // add r1, #0x78
    // ldrh r1, [r1]
    // bl ov80_0222BE24
    // add r4, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // ldr r2, _0223239C ; =0x00000A1B
    // ldrb r1, [r0, r2]
    // cmp r1, #0
    // bne _0223238C
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r3, #0
    // sub r1, r2, #1
    // strb r3, [r0, r1]
    // ldrb r0, [r0, r2]
    // strh r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _0223239C: .word 0x00000A1B
    // TODO: decompile
}


u32 FrtCmd_080(void) {
    Frontier_GetData();
    ov80_022332D0(r0);
    return 0;
}


u32 FrtCmd_081(void) {
    Frontier_GetData();
    ov80_022333F0(r0);
    return 0;
}


u32 FrtCmd_082(void) {
    Frontier_GetData();
    ov80_02233490(r0);
    return 0;
}


void FrtCmd_166(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl FrontierScript_ReadVar
    // add r4, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVarPtr
    // add r6, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // ldr r0, [r0, #8]
    // bl Save_Frontier_GetStatic
    // add r5, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205C1F0
    // add r7, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl FrontierSave_GetStat
    // strh r0, [r6]
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void FrtCmd_167(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl FrontierScript_ReadVar
    // add r4, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // add r6, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // ldr r0, [r0, #8]
    // bl Save_Frontier_GetStatic
    // lsl r1, r4, #0x18
    // lsr r1, r1, #0x18
    // add r2, r6, #0
    // bl ov80_02237FA4
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void FrtCmd_168(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl FrontierScript_ReadVar
    // add r4, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // add r6, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // lsl r1, r4, #0x18
    // ldr r0, [r0, #8]
    // lsr r1, r1, #0x18
    // add r2, r6, #0
    // bl ov80_022331E8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void FrtCmd_169(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // ldr r1, [r5, #0x1c]
    // add r0, r1, #1
    // str r0, [r5, #0x1c]
    // ldr r0, [r5]
    // ldrb r4, [r1]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r2, r0, #0
    // bne _022324B0
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // lsl r1, r4, #4
    // add r1, r4, r1
    // add r2, #0x64
    // lsl r1, r1, #4
    // add r0, r5, #0
    // add r1, r2, r1
    // bl ov80_0222F44C
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}

