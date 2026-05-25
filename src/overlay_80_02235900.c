/* Decompiled from asm/overlay_80_02235900.s */
#include "global.h"

u32 FrtCmd_170(void) {
}



u32 FrtCmd_171(void) {
}



void FrtCmd_172(void) {
    FrontierScript_ReadVar();
    FrontierScript_ReadVar(r5);
    FrontierScript_ReadVar(r5);
    // str r0, [sp]
    FrontierScript_ReadVarPtr(r5);
    Frontier_GetData(*((u32*)*((u32*)r5)));
    // ldr r3, [sp]
    ov80_02235FF8(r6, r7);
    // strh r0, [r4]
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
    Frontier_GetData(*((u32*)*((u32*)r0)));
    // add r1, #0x6f
    // ldrb r1, [r1]
    // add r0, #0x6f
    // strb r1, [r0]
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
    Frontier_GetData(*((u32*)*((u32*)r0)));
    // add r1, #0x6f
    // ldrb r1, [r1]
    // add r0, #0x6f
    // strb r1, [r0]
    sub_0203769C(1, 0);
    // eor r0, r1
    sub_02037B5C(1);
    // add r1, #0x39
    // strb r0, [r1]
}



void FrtCmd_174(void) {
    FrontierScript_ReadVar();
    FrontierScript_ReadVarPtr(r5);
    Frontier_GetData(*((u32*)*((u32*)r5)));
    // add r0, #0x6e
    // ldrb r0, [r0]
    // strh r0, [r4]
}



void FrtCmd_175(void) {
    FrontierScript_ReadVar();
    FrontierScript_ReadVar(r5);
    FrontierScript_ReadVarPtr(r5);
    Frontier_GetData(*((u32*)*((u32*)r5)));
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r5)));
    // add r0, #0x98
    // str r1, [r0]
    // add r0, #0xb0
    // str r6, [r0]
    ov80_02236040(*((u32*)*((u32*)r5)), r4, r7);
}



void FrtCmd_176(void) {
    FrontierScript_ReadVarPtr();
    FrontierScript_ReadVarPtr(r5);
    Frontier_GetData(*((u32*)*((u32*)r5)));
    // add r0, #0xa8
    // add r0, #0x26
    // ldrb r0, [r0]
    // strh r0, [r4]
    // add r0, r5, r2
    // add r0, #0xa1
    // strb r1, [r0]
    // add r1, #0x30
    // ldrb r0, [r1]
    // strh r0, [r4]
    // ldrh r0, [r4]
    // strh r0, [r4]
    // add r0, #0xa8
    // add r0, #0x31
    // ldrb r0, [r0]
    // strh r0, [r6]
    // ldrh r0, [r6]
    // strh r0, [r6]
    // add r0, #0xa8
    Heap_Free(*((u32*)r0), 0, (0 + 1));
    // add r5, #0xa8
    // str r0, [r5]
}



u32 FrtCmd_177(void) {
}



void FrtCmd_178(void) {
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) + 1);
    // ldrb r1, [r1]
    // str r1, [sp]
    *((u32*)(r0 + 0x1c)) = ((*((u32*)(r0 + 0x1c)) + 1) + 1);
    // ldrb r6, [r2]
    *((u32*)(r0 + 0x1c)) = (((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1);
    FrontierScript_ReadVarPtr((((*((u32*)(r0 + 0x1c)) + 1) + 1) + 1), (*((u32*)(r0 + 0x1c)) + 1));
    Frontier_GetData(*((u32*)*((u32*)r7)));
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r7)));
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02235B64: ; jump table
    sub_02096910(r4);
    // add r4, #0x86
    // ldrh r0, [r4]
    // strh r0, [r5]
    // strh r0, [r5]
    // add r0, #0x76
    // ldrh r1, [r0]
    // add r0, #0x86
    // ldrh r0, [r0]
    // add r0, #0x88
    // ldrh r0, [r0]
    // ldrh r0, [r5]
    // strh r0, [r5]
    // add r0, #0x78
    // ldrh r1, [r0]
    // add r0, #0x86
    // ldrh r0, [r0]
    // add r4, #0x88
    // ldrh r0, [r4]
    // ldrh r0, [r5]
    // strh r0, [r5]
    // add r0, #0x76
    // add r4, #0x86
    // ldrh r1, [r0]
    // ldrh r0, [r4]
    // strh r0, [r5]
    // strh r0, [r5]
    // strh r0, [r5]
    // add r0, #0x76
    // ldrh r1, [r0]
    // add r0, #0x86
    // ldrh r0, [r0]
    // add r0, #0x88
    // ldrh r0, [r0]
    // ldrh r0, [r5]
    // strh r0, [r5]
    // add r0, #0x78
    // ldrh r1, [r0]
    // add r0, #0x86
    // ldrh r0, [r0]
    // add r4, #0x88
    // ldrh r0, [r4]
    // ldrh r0, [r5]
    // strh r0, [r5]
    Save_Frontier_GetStatic(*((u32*)(r7 + 8)));
    sub_0205C268(0x6a);
    FrontierSave_GetStat(r4, 0x6a, r0);
    // strh r0, [r5]
    Save_Frontier_GetStatic(*((u32*)(r7 + 8)));
    sub_0205C11C(3);
    sub_0205C11C(3);
    sub_0205C268();
    FrontierSave_GetStat(r4, r6, r0);
    // strh r0, [r5]
    // add r0, r4, r0
    // add r0, #0x76
    // ldrh r0, [r0]
    // strh r0, [r5]
    sub_02030C5C(*((u32*)(r7 + 8)));
    sub_0204F878(*((u32*)(r7 + 8)), r0, 3);
    // add r4, #0xa0
    // strb r6, [r4]
    // add r4, #0x74
    // ldrh r0, [r4]
    // strh r0, [r5]
    // add r4, #0xa0
    // ldrb r0, [r4]
    // strh r0, [r5]
    // add r4, #0x71
    // ldrb r0, [r4]
    // strh r0, [r5]
    // strh r0, [r5]
    // add r0, #0xa0
    // ldrb r0, [r0]
    ov80_022385D8(r4);
    Save_Frontier_GetStatic(*((u32*)r4));
    sub_0205C268(r6);
    FrontierSave_GetStat(r7, r6, r0);
    // add r1, #0x72
    // ldrh r1, [r1]
    Save_Frontier_GetStatic(*((u32*)r4), r4);
    sub_0205C268(r6);
    sub_02031108(r7, r6, r0, 0);
    // add r0, #0xa0
    // ldrb r0, [r0]
    ov80_02238610(r4);
    Save_Frontier_GetStatic(*((u32*)r4));
    sub_0205C268(r6);
    sub_02031108(r4, r6, r0, 0);
    // strh r0, [r5]
    // add r0, #0xa0
    // ldrb r0, [r0]
    ov80_02238610(r4);
    Save_Frontier_GetStatic(*((u32*)r4));
    sub_0205C268(r6);
    FrontierSave_GetStat(r7, r6, r0);
    // strh r0, [r5]
    // ldrh r0, [r5]
    // add r0, #0xa0
    // ldrb r0, [r0]
    ov80_022385D8(r4);
    Save_Frontier_GetStatic(*((u32*)r4));
    sub_0205C268(r5);
    sub_02031108(r6, r5, r0, 0);
    // add r0, #0xa0
    // ldrb r0, [r0]
    Save_FrontierData_Get(*((u32*)r4));
    sub_0202D57C(6, 2);
    // add r0, #0xa0
    // ldrb r0, [r0]
    Save_Frontier_GetStatic(*((u32*)r4));
    sub_0205C268(0x88);
    sub_02031108(r5, 0x88, r0, 0);
    Save_Frontier_GetStatic(*((u32*)r4));
    sub_0205C268(0x89);
    sub_02031108(r5, 0x89, r0, 0);
    // add r0, #0xa0
    // ldrb r0, [r0]
    Save_Frontier_GetStatic(*((u32*)r4));
    sub_0205C048(0, 3);
    sub_0205C048(0, 3);
    sub_0205C268();
    sub_02031108(r5, r6, r0, 0);
    // add r0, #0xa0
    // ldrb r0, [r0]
    Save_Frontier_GetStatic(*((u32*)r4));
    sub_0205C048(1, 3);
    sub_0205C048(1, 3);
    sub_0205C268();
    sub_02031108(r5, r4, r0, 0);
    Save_Frontier_GetStatic(*((u32*)r4));
    sub_0205C268(r6);
    sub_02031108(r4, r6, r0, 0);
    // add r0, r4, r2
    // add r0, #0xa1
    // strb r1, [r0]
    // add r4, #0x9f
    // strb r1, [r4]
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
}



void FrtCmd_181(void) {
}



void ov80_02235F90(void) {
}



u32 FrtCmd_182(void) {
}


