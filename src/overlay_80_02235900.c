/* Decompiled from asm/overlay_80_02235900.s */
#include "global.h"

u32 FrtCmd_170(void) {
    Frontier_GetLaunchArgs();
    ov80_02235FC8(*((u32*)(r0 + 8)));
    Frontier_SetData(r0);
    return 0;
}


u32 FrtCmd_171(void) {
    Frontier_GetData();
    ov80_02235FEC();
    return 0;
}


void FrtCmd_172(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl FrontierScript_ReadVar
    // add r6, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // add r7, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // str r0, [sp]
    // add r0, r5, #0
    // bl FrontierScript_ReadVarPtr
    // add r4, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // ldr r3, [sp]
    // add r1, r6, #0
    // add r2, r7, #0
    // bl ov80_02235FF8
    // strh r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void FrtCmd_173(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r1, r4, #0
    // add r1, #0x78
    // strh r0, [r1]
    // ldr r1, _0223598C ; =ov80_02235990
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0223598C: .word ov80_02235990
    // TODO: decompile
}


void ov80_02235990(void) {
    // push {r3, lr}
    // ldr r0, [r0]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r1, r0, #0
    // add r1, #0x6f
    // ldrb r1, [r1]
    // cmp r1, #2
    // blo _022359AE
    // mov r1, #0
    // add r0, #0x6f
    // strb r1, [r0]
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void FrtCmd_202(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FrontierScriptContext_ReadHalfWord
    // add r1, r4, #0
    // add r1, #0x78
    // strh r0, [r1]
    // ldr r1, _022359D0 ; =ov80_022359D4
    // add r0, r4, #0
    // bl FrontierScriptContext_Pause
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _022359D0: .word ov80_022359D4
    // TODO: decompile
}


void ov80_022359D4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r1, r0, #0
    // add r1, #0x6f
    // ldrb r1, [r1]
    // cmp r1, #2
    // blo _022359F4
    // mov r1, #0
    // add r0, #0x6f
    // strb r1, [r0]
    // mov r0, #1
    // pop {r4, pc}
    // bl sub_0203769C
    // mov r1, #1
    // eor r0, r1
    // bl sub_02037B5C
    // cmp r0, #0xaf
    // bne _02235A0E
    // ldr r1, [r4]
    // mov r0, #1
    // add r1, #0x39
    // strb r0, [r1]
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void FrtCmd_174(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl FrontierScript_ReadVar
    // add r6, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVarPtr
    // add r4, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r0, #0x6e
    // ldrb r0, [r0]
    // cmp r6, r0
    // bne _02235A3A
    // mov r0, #1
    // b _02235A3C
    // mov r0, #0
    // strh r0, [r4]
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void FrtCmd_175(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl FrontierScript_ReadVar
    // add r0, r5, #0
    // bl FrontierScript_ReadVar
    // add r7, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVarPtr
    // add r6, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r4, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // ldr r1, [r0, #0x24]
    // add r0, r4, #0
    // add r0, #0x98
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xb0
    // str r6, [r0]
    // ldr r0, [r5]
    // add r1, r4, #0
    // ldr r0, [r0]
    // add r2, r7, #0
    // bl ov80_02236040
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void FrtCmd_176(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl FrontierScript_ReadVarPtr
    // add r4, r0, #0
    // add r0, r5, #0
    // bl FrontierScript_ReadVarPtr
    // add r6, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r5, r0, #0
    // add r0, #0xa8
    // ldr r1, [r0]
    // add r0, r1, #0
    // add r0, #0x26
    // ldrb r0, [r0]
    // cmp r0, #7
    // bne _02235ACC
    // mov r0, #0xff
    // mov r2, #0
    // strh r0, [r4]
    // add r1, r2, #0
    // add r0, r5, r2
    // add r0, #0xa1
    // add r2, r2, #1
    // strb r1, [r0]
    // cmp r2, #2
    // blt _02235ABE
    // b _02235AF2
    // cmp r0, #6
    // bne _02235AF2
    // add r1, #0x30
    // ldrb r0, [r1]
    // strh r0, [r4]
    // ldrh r0, [r4]
    // sub r0, r0, #1
    // strh r0, [r4]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // add r0, #0x31
    // ldrb r0, [r0]
    // strh r0, [r6]
    // ldrh r0, [r6]
    // cmp r0, #0
    // beq _02235AF2
    // sub r0, r0, #1
    // strh r0, [r6]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // bl Heap_Free
    // mov r0, #0
    // add r5, #0xa8
    // str r0, [r5]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


u32 FrtCmd_177(void) {
    FrontierScript_ReadVarPtr();
    Frontier_GetData();
    return 0;
}


void FrtCmd_178(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r1, [r7, #0x1c]
    // add r2, r1, #1
    // str r2, [r7, #0x1c]
    // ldrb r1, [r1]
    // str r1, [sp]
    // add r1, r2, #1
    // str r1, [r7, #0x1c]
    // ldrb r6, [r2]
    // add r1, r1, #1
    // str r1, [r7, #0x1c]
    // bl FrontierScript_ReadVarPtr
    // add r5, r0, #0
    // ldr r0, [r7]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r4, r0, #0
    // ldr r0, [r7]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r7, r0, #0
    // ldr r0, [sp]
    // cmp r0, #0xd
    // bhi _02235BD0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02235B64: ; jump table
    // add r0, r4, #0
    // bl sub_02096910
    // b _02235E80
    // add r4, #0x86
    // ldrh r0, [r4]
    // strh r0, [r5]
    // b _02235E80
    // cmp r6, #1
    // bne _02235BDA
    // mov r0, #0
    // strh r0, [r5]
    // add r0, r4, #0
    // add r0, #0x76
    // ldrh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // cmp r1, r0
    // beq _02235BB2
    // add r0, r4, #0
    // add r0, #0x88
    // ldrh r0, [r0]
    // cmp r1, r0
    // bne _02235BB8
    // ldrh r0, [r5]
    // add r0, r0, #1
    // strh r0, [r5]
    // add r0, r4, #0
    // add r0, #0x78
    // ldrh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // cmp r1, r0
    // beq _02235BD2
    // add r4, #0x88
    // ldrh r0, [r4]
    // cmp r1, r0
    // beq _02235BD2
    // b _02235E80
    // ldrh r0, [r5]
    // add r0, r0, #2
    // strh r0, [r5]
    // b _02235E80
    // cmp r6, #5
    // bne _02235BF8
    // add r0, r4, #0
    // add r0, #0x76
    // add r4, #0x86
    // ldrh r1, [r0]
    // ldrh r0, [r4]
    // cmp r1, r0
    // bne _02235BF2
    // mov r0, #0
    // strh r0, [r5]
    // b _02235E80
    // mov r0, #1
    // strh r0, [r5]
    // b _02235E80
    // cmp r6, #4
    // beq _02235C00
    // cmp r6, #6
    // bne _02235CF6
    // mov r0, #0
    // strh r0, [r5]
    // add r0, r4, #0
    // add r0, #0x76
    // ldrh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // cmp r1, r0
    // beq _02235C1E
    // add r0, r4, #0
    // add r0, #0x88
    // ldrh r0, [r0]
    // cmp r1, r0
    // bne _02235C24
    // ldrh r0, [r5]
    // add r0, r0, #1
    // strh r0, [r5]
    // add r0, r4, #0
    // add r0, #0x78
    // ldrh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // cmp r1, r0
    // beq _02235C3C
    // add r4, #0x88
    // ldrh r0, [r4]
    // cmp r1, r0
    // bne _02235CF6
    // ldrh r0, [r5]
    // add r0, r0, #2
    // strh r0, [r5]
    // b _02235E80
    // ldr r0, [r7, #8]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // mov r0, #0x6a
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0x6a
    // bl FrontierSave_GetStat
    // strh r0, [r5]
    // b _02235E80
    // ldr r0, [r7, #8]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // mov r0, #3
    // bl sub_0205C11C
    // add r6, r0, #0
    // mov r0, #3
    // bl sub_0205C11C
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl FrontierSave_GetStat
    // strh r0, [r5]
    // b _02235E80
    // lsl r0, r6, #1
    // add r0, r4, r0
    // add r0, #0x76
    // ldrh r0, [r0]
    // strh r0, [r5]
    // b _02235E80
    // ldr r0, [r7, #8]
    // bl sub_02030C5C
    // add r1, r0, #0
    // ldr r0, [r7, #8]
    // mov r2, #3
    // bl sub_0204F878
    // b _02235E80
    // add r4, #0xa0
    // strb r6, [r4]
    // b _02235E80
    // add r4, #0x74
    // ldrh r0, [r4]
    // strh r0, [r5]
    // b _02235E80
    // add r4, #0xa0
    // ldrb r0, [r4]
    // strh r0, [r5]
    // b _02235E80
    // add r4, #0x71
    // ldrb r0, [r4]
    // strh r0, [r5]
    // b _02235E80
    // mov r0, #1
    // strh r0, [r5]
    // add r0, r4, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // bl ov80_022385D8
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // add r0, r6, #0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r7, #0
    // add r1, r6, #0
    // bl FrontierSave_GetStat
    // add r1, r4, #0
    // add r1, #0x72
    // ldrh r1, [r1]
    // cmp r0, r1
    // bne _02235CF8
    // b _02235E80
    // ldr r0, [r4]
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // add r0, r6, #0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r7, #0
    // add r1, r6, #0
    // mov r3, #0
    // bl sub_02031108
    // add r0, r4, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // bl ov80_02238610
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // add r0, r6, #0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r3, #0
    // bl sub_02031108
    // mov r0, #0
    // strh r0, [r5]
    // b _02235E80
    // add r0, r4, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // bl ov80_02238610
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl Save_Frontier_GetStatic
    // add r7, r0, #0
    // add r0, r6, #0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r7, #0
    // add r1, r6, #0
    // bl FrontierSave_GetStat
    // strh r0, [r5]
    // ldrh r0, [r5]
    // cmp r0, #0
    // bne _02235E50
    // add r0, r4, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // bl ov80_022385D8
    // add r5, r0, #0
    // ldr r0, [r4]
    // bl Save_Frontier_GetStatic
    // add r6, r0, #0
    // add r0, r5, #0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r6, #0
    // add r1, r5, #0
    // mov r3, #0
    // bl sub_02031108
    // add r0, r4, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02235DA8
    // ldr r0, [r4]
    // bl Save_FrontierData_Get
    // mov r1, #6
    // mov r2, #2
    // bl sub_0202D57C
    // add r0, r4, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // cmp r0, #4
    // bne _02235DE6
    // ldr r0, [r4]
    // bl Save_Frontier_GetStatic
    // add r5, r0, #0
    // mov r0, #0x88
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r5, #0
    // mov r1, #0x88
    // mov r3, #0
    // bl sub_02031108
    // ldr r0, [r4]
    // bl Save_Frontier_GetStatic
    // add r5, r0, #0
    // mov r0, #0x89
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r5, #0
    // mov r1, #0x89
    // mov r3, #0
    // bl sub_02031108
    // add r0, r4, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _02235E1A
    // ldr r0, [r4]
    // bl Save_Frontier_GetStatic
    // add r5, r0, #0
    // mov r0, #0
    // mov r1, #3
    // bl sub_0205C048
    // add r6, r0, #0
    // mov r0, #0
    // mov r1, #3
    // bl sub_0205C048
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r3, #0
    // bl sub_02031108
    // add r0, r4, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // cmp r0, #3
    // bne _02235E80
    // ldr r0, [r4]
    // bl Save_Frontier_GetStatic
    // add r5, r0, #0
    // mov r0, #1
    // mov r1, #3
    // bl sub_0205C048
    // add r4, r0, #0
    // mov r0, #1
    // mov r1, #3
    // bl sub_0205C048
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r3, #0
    // bl sub_02031108
    // b _02235E80
    // ldr r0, [r4]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // add r0, r6, #0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r3, #0
    // bl sub_02031108
    // b _02235E80
    // mov r2, #0
    // add r1, r2, #0
    // add r0, r4, r2
    // add r0, #0xa1
    // add r2, r2, #1
    // strb r1, [r0]
    // cmp r2, #2
    // blt _02235E70
    // add r4, #0x9f
    // strb r1, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void FrtCmd_179(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xb4
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetLaunchArgs
    // add r7, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Frontier_GetData
    // add r6, r0, #0
    // add r4, r6, #0
    // add r3, sp, #0
    // mov r2, #0x16
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02235EA4
    // ldr r0, [r4]
    // str r0, [r3]
    // add r0, r6, #0
    // bl ov80_02235FEC
    // ldr r0, [r7, #8]
    // mov r1, #0
    // mov r2, #6
    // bl FrontierFieldSystem_New
    // add r4, r0, #0
    // ldr r0, [r5]
    // add r1, r4, #0
    // ldr r0, [r0]
    // bl Frontier_SetData
    // ldrb r0, [r4, #0xf]
    // cmp r0, #6
    // bne _02235ED8
    // ldr r0, [r7, #8]
    // bl ov80_0222A840
    // ldrb r0, [r4, #0xe]
    // mov r2, #0
    // cmp r0, #0
    // ble _02235F10
    // add r3, sp, #0
    // add r5, r3, #0
    // add r6, r4, #0
    // add r0, r3, #0
    // add r0, #0x6a
    // ldrb r1, [r0]
    // add r0, r4, r2
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0x76
    // ldrh r0, [r0]
    // add r2, r2, #1
    // add r3, r3, #1
    // strh r0, [r6, #0x2e]
    // add r0, r5, #0
    // add r0, #0x7e
    // ldrh r0, [r0]
    // add r5, r5, #2
    // strh r0, [r6, #0x36]
    // ldrb r0, [r4, #0xe]
    // add r6, r6, #2
    // cmp r2, r0
    // blt _02235EE6
    // add r0, sp, #0x80
    // ldrh r1, [r0, #6]
    // strh r1, [r4, #0x16]
    // ldrh r0, [r0, #8]
    // mov r1, #0xe0
    // strh r0, [r4, #0x18]
    // add r0, sp, #0x40
    // ldrb r2, [r0, #0x18]
    // strb r2, [r4, #0x12]
    // ldrb r0, [r4, #0x10]
    // bic r0, r1
    // add r1, r2, #5
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r1, r1, #0x1d
    // lsr r1, r1, #0x18
    // orr r0, r1
    // strb r0, [r4, #0x10]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02235F44
    // ldr r1, [r7, #8]
    // add r0, r4, #0
    // bl FrontierFieldSystem_SetRandomFrontierTrainers
    // ldr r0, [r7, #8]
    // bl SaveArray_Party_Get
    // bl HealParty
    // add r0, r4, #0
    // bl sub_02096910
    // ldr r1, _02235F60 ; =0x000008D4
    // mov r0, #0
    // strb r0, [r4, r1]
    // add sp, #0xb4
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02235F60: .word 0x000008D4
    // TODO: decompile
}


u32 FrtCmd_180(void) {
    FrontierScript_ReadVarPtr();
    Frontier_GetData();
    sub_02096998();
    return 1;
}


void FrtCmd_181(void) {
    FrontierScriptContext_Pause();
}


void ov80_02235F90(void) {
    Frontier_GetData(0, 1, 0);
}


u32 FrtCmd_182(void) {
    Frontier_GetData();
    FrontierFieldSystem_Free();
    return 0;
}

