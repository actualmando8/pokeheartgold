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
    /* Original at 0x02235934 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    str r0, [sp]\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    ldr r3, [sp]\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov80_02235FF8\n    strh r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_173(void) {
    /* Original at 0x02235970 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, r4, #0\n    add r1, #0x78\n    strh r0, [r1]\n    ldr r1, _0223598C ; =ov80_02235990\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0223598C: .word ov80_02235990"
    );
    #endif
}

void ov80_02235990(void) {
    /* Original at 0x02235990 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r1, r0, #0\n    add r1, #0x6f\n    ldrb r1, [r1]\n    cmp r1, #2\n    blo _022359AE\n    mov r1, #0\n    add r0, #0x6f\n    strb r1, [r0]\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void FrtCmd_202(void) {
    /* Original at 0x022359B4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, r4, #0\n    add r1, #0x78\n    strh r0, [r1]\n    ldr r1, _022359D0 ; =ov80_022359D4\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _022359D0: .word ov80_022359D4"
    );
    #endif
}

void ov80_022359D4(void) {
    /* Original at 0x022359D4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r1, r0, #0\n    add r1, #0x6f\n    ldrb r1, [r1]\n    cmp r1, #2\n    blo _022359F4\n    mov r1, #0\n    add r0, #0x6f\n    strb r1, [r0]\n    mov r0, #1\n    pop {r4, pc}\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_02037B5C\n    cmp r0, #0xaf\n    bne _02235A0E\n    ldr r1, [r4]\n    mov r0, #1\n    add r1, #0x39\n    strb r0, [r1]\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_174(void) {
    /* Original at 0x02235A14 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r0, #0x6e\n    ldrb r0, [r0]\n    cmp r6, r0\n    bne _02235A3A\n    mov r0, #1\n    b _02235A3C\n    mov r0, #0\n    strh r0, [r4]\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void FrtCmd_175(void) {
    /* Original at 0x02235A44 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVar\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r1, [r0, #0x24]\n    add r0, r4, #0\n    add r0, #0x98\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xb0\n    str r6, [r0]\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0]\n    add r2, r7, #0\n    bl ov80_02236040\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_176(void) {
    /* Original at 0x02235A8C */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r5, r0, #0\n    add r0, #0xa8\n    ldr r1, [r0]\n    add r0, r1, #0\n    add r0, #0x26\n    ldrb r0, [r0]\n    cmp r0, #7\n    bne _02235ACC\n    mov r0, #0xff\n    mov r2, #0\n    strh r0, [r4]\n    add r1, r2, #0\n    add r0, r5, r2\n    add r0, #0xa1\n    add r2, r2, #1\n    strb r1, [r0]\n    cmp r2, #2\n    blt _02235ABE\n    b _02235AF2\n    cmp r0, #6\n    bne _02235AF2\n    add r1, #0x30\n    ldrb r0, [r1]\n    strh r0, [r4]\n    ldrh r0, [r4]\n    sub r0, r0, #1\n    strh r0, [r4]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r0, #0x31\n    ldrb r0, [r0]\n    strh r0, [r6]\n    ldrh r0, [r6]\n    cmp r0, #0\n    beq _02235AF2\n    sub r0, r0, #1\n    strh r0, [r6]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    bl Heap_Free\n    mov r0, #0\n    add r5, #0xa8\n    str r0, [r5]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

u32 FrtCmd_177(void) {
    FrontierScript_ReadVarPtr();
    Frontier_GetData();
    return 0;
}

void FrtCmd_178(void) {
    /* Original at 0x02235B20 */
    /* Requires manual decompilation - 367 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r1, [r7, #0x1c]\n    add r2, r1, #1\n    str r2, [r7, #0x1c]\n    ldrb r1, [r1]\n    str r1, [sp]\n    add r1, r2, #1\n    str r1, [r7, #0x1c]\n    ldrb r6, [r2]\n    add r1, r1, #1\n    str r1, [r7, #0x1c]\n    bl FrontierScript_ReadVarPtr\n    add r5, r0, #0\n    ldr r0, [r7]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    ldr r0, [r7]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r7, r0, #0\n    ldr r0, [sp]\n    cmp r0, #0xd\n    bhi _02235BD0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02235B64: ; jump table\n    add r0, r4, #0\n    bl sub_02096910\n    b _02235E80\n    add r4, #0x86\n    ldrh r0, [r4]\n    strh r0, [r5]\n    b _02235E80\n    cmp r6, #1\n    bne _02235BDA\n    mov r0, #0\n    strh r0, [r5]\n    add r0, r4, #0\n    add r0, #0x76\n    ldrh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x86\n    ldrh r0, [r0]\n    cmp r1, r0\n    beq _02235BB2\n    add r0, r4, #0\n    add r0, #0x88\n    ldrh r0, [r0]\n    cmp r1, r0\n    bne _02235BB8\n    ldrh r0, [r5]\n    add r0, r0, #1\n    strh r0, [r5]\n    add r0, r4, #0\n    add r0, #0x78\n    ldrh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x86\n    ldrh r0, [r0]\n    cmp r1, r0\n    beq _02235BD2\n    add r4, #0x88\n    ldrh r0, [r4]\n    cmp r1, r0\n    beq _02235BD2\n    b _02235E80\n    ldrh r0, [r5]\n    add r0, r0, #2\n    strh r0, [r5]\n    b _02235E80\n    cmp r6, #5\n    bne _02235BF8\n    add r0, r4, #0\n    add r0, #0x76\n    add r4, #0x86\n    ldrh r1, [r0]\n    ldrh r0, [r4]\n    cmp r1, r0\n    bne _02235BF2\n    mov r0, #0\n    strh r0, [r5]\n    b _02235E80\n    mov r0, #1\n    strh r0, [r5]\n    b _02235E80\n    cmp r6, #4\n    beq _02235C00\n    cmp r6, #6\n    bne _02235CF6\n    mov r0, #0\n    strh r0, [r5]\n    add r0, r4, #0\n    add r0, #0x76\n    ldrh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x86\n    ldrh r0, [r0]\n    cmp r1, r0\n    beq _02235C1E\n    add r0, r4, #0\n    add r0, #0x88\n    ldrh r0, [r0]\n    cmp r1, r0\n    bne _02235C24\n    ldrh r0, [r5]\n    add r0, r0, #1\n    strh r0, [r5]\n    add r0, r4, #0\n    add r0, #0x78\n    ldrh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x86\n    ldrh r0, [r0]\n    cmp r1, r0\n    beq _02235C3C\n    add r4, #0x88\n    ldrh r0, [r4]\n    cmp r1, r0\n    bne _02235CF6\n    ldrh r0, [r5]\n    add r0, r0, #2\n    strh r0, [r5]\n    b _02235E80\n    ldr r0, [r7, #8]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    mov r0, #0x6a\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    mov r1, #0x6a\n    bl FrontierSave_GetStat\n    strh r0, [r5]\n    b _02235E80\n    ldr r0, [r7, #8]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    mov r0, #3\n    bl sub_0205C11C\n    add r6, r0, #0\n    mov r0, #3\n    bl sub_0205C11C\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    strh r0, [r5]\n    b _02235E80\n    lsl r0, r6, #1\n    add r0, r4, r0\n    add r0, #0x76\n    ldrh r0, [r0]\n    strh r0, [r5]\n    b _02235E80\n    ldr r0, [r7, #8]\n    bl sub_02030C5C\n    add r1, r0, #0\n    ldr r0, [r7, #8]\n    mov r2, #3\n    bl sub_0204F878\n    b _02235E80\n    add r4, #0xa0\n    strb r6, [r4]\n    b _02235E80\n    add r4, #0x74\n    ldrh r0, [r4]\n    strh r0, [r5]\n    b _02235E80\n    add r4, #0xa0\n    ldrb r0, [r4]\n    strh r0, [r5]\n    b _02235E80\n    add r4, #0x71\n    ldrb r0, [r4]\n    strh r0, [r5]\n    b _02235E80\n    mov r0, #1\n    strh r0, [r5]\n    add r0, r4, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    bl ov80_022385D8\n    add r6, r0, #0\n    ldr r0, [r4]\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    add r0, r6, #0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    add r1, r4, #0\n    add r1, #0x72\n    ldrh r1, [r1]\n    cmp r0, r1\n    bne _02235CF8\n    b _02235E80\n    ldr r0, [r4]\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    add r0, r6, #0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    mov r3, #0\n    bl sub_02031108\n    add r0, r4, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    bl ov80_02238610\n    add r6, r0, #0\n    ldr r0, [r4]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    add r0, r6, #0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r3, #0\n    bl sub_02031108\n    mov r0, #0\n    strh r0, [r5]\n    b _02235E80\n    add r0, r4, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    bl ov80_02238610\n    add r6, r0, #0\n    ldr r0, [r4]\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    add r0, r6, #0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    strh r0, [r5]\n    ldrh r0, [r5]\n    cmp r0, #0\n    bne _02235E50\n    add r0, r4, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    bl ov80_022385D8\n    add r5, r0, #0\n    ldr r0, [r4]\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    add r0, r5, #0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r3, #0\n    bl sub_02031108\n    add r0, r4, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02235DA8\n    ldr r0, [r4]\n    bl Save_FrontierData_Get\n    mov r1, #6\n    mov r2, #2\n    bl sub_0202D57C\n    add r0, r4, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    cmp r0, #4\n    bne _02235DE6\n    ldr r0, [r4]\n    bl Save_Frontier_GetStatic\n    add r5, r0, #0\n    mov r0, #0x88\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r5, #0\n    mov r1, #0x88\n    mov r3, #0\n    bl sub_02031108\n    ldr r0, [r4]\n    bl Save_Frontier_GetStatic\n    add r5, r0, #0\n    mov r0, #0x89\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r5, #0\n    mov r1, #0x89\n    mov r3, #0\n    bl sub_02031108\n    add r0, r4, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _02235E1A\n    ldr r0, [r4]\n    bl Save_Frontier_GetStatic\n    add r5, r0, #0\n    mov r0, #0\n    mov r1, #3\n    bl sub_0205C048\n    add r6, r0, #0\n    mov r0, #0\n    mov r1, #3\n    bl sub_0205C048\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r3, #0\n    bl sub_02031108\n    add r0, r4, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    cmp r0, #3\n    bne _02235E80\n    ldr r0, [r4]\n    bl Save_Frontier_GetStatic\n    add r5, r0, #0\n    mov r0, #1\n    mov r1, #3\n    bl sub_0205C048\n    add r4, r0, #0\n    mov r0, #1\n    mov r1, #3\n    bl sub_0205C048\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r3, #0\n    bl sub_02031108\n    b _02235E80\n    ldr r0, [r4]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    add r0, r6, #0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r3, #0\n    bl sub_02031108\n    b _02235E80\n    mov r2, #0\n    add r1, r2, #0\n    add r0, r4, r2\n    add r0, #0xa1\n    add r2, r2, #1\n    strb r1, [r0]\n    cmp r2, #2\n    blt _02235E70\n    add r4, #0x9f\n    strb r1, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_179(void) {
    /* Original at 0x02235E84 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xb4\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r7, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r6, r0, #0\n    add r4, r6, #0\n    add r3, sp, #0\n    mov r2, #0x16\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _02235EA4\n    ldr r0, [r4]\n    str r0, [r3]\n    add r0, r6, #0\n    bl ov80_02235FEC\n    ldr r0, [r7, #8]\n    mov r1, #0\n    mov r2, #6\n    bl FrontierFieldSystem_New\n    add r4, r0, #0\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl Frontier_SetData\n    ldrb r0, [r4, #0xf]\n    cmp r0, #6\n    bne _02235ED8\n    ldr r0, [r7, #8]\n    bl ov80_0222A840\n    ldrb r0, [r4, #0xe]\n    mov r2, #0\n    cmp r0, #0\n    ble _02235F10\n    add r3, sp, #0\n    add r5, r3, #0\n    add r6, r4, #0\n    add r0, r3, #0\n    add r0, #0x6a\n    ldrb r1, [r0]\n    add r0, r4, r2\n    add r0, #0x2a\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0x76\n    ldrh r0, [r0]\n    add r2, r2, #1\n    add r3, r3, #1\n    strh r0, [r6, #0x2e]\n    add r0, r5, #0\n    add r0, #0x7e\n    ldrh r0, [r0]\n    add r5, r5, #2\n    strh r0, [r6, #0x36]\n    ldrb r0, [r4, #0xe]\n    add r6, r6, #2\n    cmp r2, r0\n    blt _02235EE6\n    add r0, sp, #0x80\n    ldrh r1, [r0, #6]\n    strh r1, [r4, #0x16]\n    ldrh r0, [r0, #8]\n    mov r1, #0xe0\n    strh r0, [r4, #0x18]\n    add r0, sp, #0x40\n    ldrb r2, [r0, #0x18]\n    strb r2, [r4, #0x12]\n    ldrb r0, [r4, #0x10]\n    bic r0, r1\n    add r1, r2, #5\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1d\n    lsr r1, r1, #0x18\n    orr r0, r1\n    strb r0, [r4, #0x10]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02235F44\n    ldr r1, [r7, #8]\n    add r0, r4, #0\n    bl FrontierFieldSystem_SetRandomFrontierTrainers\n    ldr r0, [r7, #8]\n    bl SaveArray_Party_Get\n    bl HealParty\n    add r0, r4, #0\n    bl sub_02096910\n    ldr r1, _02235F60 ; =0x000008D4\n    mov r0, #0\n    strb r0, [r4, r1]\n    add sp, #0xb4\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02235F60: .word 0x000008D4"
    );
    #endif
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
