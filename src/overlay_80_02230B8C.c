/* Decompiled from asm/overlay_80_02230B8C.s */
#include "global.h"

void FrtCmd_139(void) {
    /* Original at 0x02230B8C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    bl FrontierScript_ReadVar\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r7, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    lsl r1, r7, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp]\n    lsl r2, r4, #0x18\n    lsl r3, r6, #0x18\n    ldr r0, [r0, #8]\n    ldr r1, [sp, #4]\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl ov80_022310C4\n    add r1, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_SetData\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

u32 FrtCmd_140(void) {
    FrontierScript_ReadVar();
    Frontier_GetData();
    ov80_022313C0(r4);
    return 0;
}

u32 FrtCmd_141(void) {
    Frontier_GetData();
    ov80_022314A0();
    return 0;
}

void FrtCmd_142(void) {
    /* Original at 0x02230C10 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r7, r0, #0\n    ldr r0, [r6]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    mov r0, #0xb\n    mov r1, #0x20\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x20\n    add r5, r0, #0\n    bl MI_CpuFill8\n    ldr r0, [r7, #8]\n    ldr r1, _02230CD0 ; =0x00000704\n    str r0, [r5]\n    ldrb r0, [r4, #4]\n    add r3, r4, r1\n    sub r1, #0xf\n    strb r0, [r5, #4]\n    str r4, [r5, #0x10]\n    ldrb r2, [r4, #4]\n    lsl r0, r2, #3\n    add r0, r2, r0\n    add r0, r3, r0\n    str r0, [r5, #8]\n    mov r0, #0x99\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    str r0, [r5, #0xc]\n    ldrh r0, [r4, #8]\n    strh r0, [r5, #0x18]\n    ldrb r0, [r4, r1]\n    strb r0, [r5, #5]\n    ldr r0, _02230CD4 ; =0x00000D84\n    add r0, r4, r0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    bl SaveArray_Party_Init\n    ldr r0, [r7, #8]\n    bl SaveArray_Party_Get\n    mov r1, #0x26\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    add r7, r0, #0\n    bl Party_GetMonByIndex\n    add r1, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Party_AddMon\n    ldrb r0, [r5, #4]\n    cmp r0, #1\n    bne _02230CA4\n    ldr r1, _02230CD8 ; =0x00000261\n    add r0, r7, #0\n    ldrb r1, [r4, r1]\n    bl Party_GetMonByIndex\n    add r1, r0, #0\n    ldr r0, [r5, #0xc]\n    bl Party_AddMon\n    b _02230CB8\n    add r0, #0xfe\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _02230CB8\n    ldr r1, _02230CDC ; =0x00000D8C\n    ldr r0, [r5, #0xc]\n    ldr r1, [r4, r1]\n    bl Party_AddMon\n    ldr r0, _02230CE0 ; =ov80_02230D5C\n    ldr r1, _02230CE4 ; =ov80_0223BDEC\n    str r0, [sp]\n    ldr r0, [r6]\n    add r2, r5, #0\n    ldr r0, [r0]\n    mov r3, #0\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02230CD0: .word 0x00000704\n    _02230CD4: .word 0x00000D84\n    _02230CD8: .word 0x00000261\n    _02230CDC: .word 0x00000D8C\n    _02230CE0: .word ov80_02230D5C\n    _02230CE4: .word ov80_0223BDEC"
    );
    #endif
}

void FrtCmd_143(void) {
    /* Original at 0x02230CE8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    mov r0, #7\n    lsl r0, r0, #8\n    ldr r5, [r4, r0]\n    ldr r0, [r5, #0x14]\n    bl IsBattleResultWin\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    bl BattleSetup_Delete\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_144(void) {
    /* Original at 0x02230D0C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r1, r6, #0\n    add r4, r0, #0\n    bl ov80_022375D0\n    add r6, r0, #0\n    mov r0, #7\n    lsl r0, r0, #8\n    str r6, [r4, r0]\n    ldr r1, _02230D54 ; =0x0000045D\n    mov r0, #5\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r5]\n    ldr r1, _02230D58 ; =gOverlayTemplate_Battle\n    ldr r0, [r0]\n    add r2, r6, #0\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _02230D54: .word 0x0000045D\n    _02230D58: .word gOverlayTemplate_Battle"
    );
    #endif
}

void ov80_02230D5C(void) {
    ov80_022314DC(*((u32*)(r0 + 0x10)), r0);
    Heap_Free(r4);
}

void FrtCmd_145(void) {
    /* Original at 0x02230D70 */
    /* Requires manual decompilation - 232 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r1, [r4, #0x1c]\n    add r2, r1, #1\n    str r2, [r4, #0x1c]\n    ldrb r7, [r1]\n    add r1, r2, #1\n    str r1, [r4, #0x1c]\n    ldrb r6, [r2]\n    add r1, r1, #1\n    str r1, [r4, #0x1c]\n    bl FrontierScript_ReadVarPtr\n    add r5, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    cmp r7, #0x26\n    bls _02230DA8\n    b _02230FB6\n    add r1, r7, r7\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02230DB4: ; jump table\n    strb r6, [r4, #4]\n    b _02230FB6\n    ldr r0, _02230FBC ; =0x000006F2\n    ldrh r0, [r4, r0]\n    strh r0, [r5]\n    b _02230FB6\n    ldrh r0, [r4, #8]\n    strh r0, [r5]\n    b _02230FB6\n    ldrh r1, [r4, #8]\n    ldr r0, _02230FC0 ; =0x0000270F\n    cmp r1, r0\n    bhs _02230EB8\n    add r0, r1, #1\n    strh r0, [r4, #8]\n    b _02230FB6\n    mov r0, #0\n    bl OS_ResetSystem\n    b _02230FB6\n    ldr r0, _02230FC4 ; =0x000006F8\n    ldr r0, [r4, r0]\n    bl sub_02030B14\n    strh r0, [r5]\n    b _02230FB6\n    mov r1, #2\n    bl ov80_0223157C\n    b _02230FB6\n    bl ov80_022317C0\n    strh r0, [r5]\n    b _02230FB6\n    ldrb r0, [r4, #4]\n    cmp r0, #2\n    bne _02230E52\n    mov r0, #0xa\n    strh r0, [r5]\n    b _02230FB6\n    ldrh r0, [r4, #0xa]\n    strh r0, [r5]\n    b _02230FB6\n    add r1, r6, #0\n    bl ov80_022317D0\n    strh r0, [r5]\n    b _02230FB6\n    bl ov80_02231804\n    b _02230FB6\n    bl ov80_02231828\n    b _02230FB6\n    bl ov80_022317CC\n    strh r0, [r5]\n    b _02230FB6\n    ldr r0, _02230FC8 ; =0x00000D88\n    ldrb r0, [r4, r0]\n    strh r0, [r5]\n    b _02230FB6\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #8]\n    bl SaveArray_Party_Get\n    str r0, [sp]\n    ldrb r0, [r4, #4]\n    bl ov80_0223787C\n    add r7, r0, #0\n    mov r5, #0\n    cmp r7, #0\n    ble _02230EB8\n    ldr r0, _02230FCC ; =0x00000728\n    add r6, r4, r0\n    mov r1, #0x26\n    add r2, r4, r5\n    lsl r1, r1, #4\n    ldrb r1, [r2, r1]\n    ldr r0, [sp]\n    bl Party_GetMonByIndex\n    mov r1, #6\n    add r2, r6, #0\n    bl SetMonData\n    add r5, r5, #1\n    add r6, r6, #2\n    cmp r5, r7\n    blt _02230E9A\n    b _02230FB6\n    ldr r1, _02230FD0 ; =0x000006F5\n    ldrb r2, [r4, #4]\n    ldrb r0, [r4, r1]\n    add r1, #0xf\n    add r3, r4, r1\n    lsl r1, r2, #3\n    add r1, r2, r1\n    add r1, r3, r1\n    bl sub_02030BD0\n    add r2, r0, #0\n    cmp r2, #0xa\n    bhs _02230FB6\n    ldr r1, _02230FD0 ; =0x000006F5\n    ldrb r3, [r4, #4]\n    ldrb r0, [r4, r1]\n    add r1, #0xf\n    add r5, r4, r1\n    lsl r1, r3, #3\n    add r2, r2, #1\n    add r1, r3, r1\n    lsl r2, r2, #0x18\n    add r1, r5, r1\n    lsr r2, r2, #0x18\n    bl sub_02030BF4\n    b _02230FB6\n    bl sub_02096910\n    b _02230FB6\n    ldrb r0, [r4, #4]\n    bl ov80_0223792C\n    strh r0, [r5]\n    b _02230FB6\n    ldrb r0, [r4, #4]\n    strh r0, [r5]\n    b _02230FB6\n    cmp r6, #0\n    bne _02230F14\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    b _02230FB6\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    b _02230FB6\n    ldrb r1, [r4, #5]\n    add r0, #0x40\n    mov r2, #0xb\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldrh r1, [r1, #0x18]\n    mov r3, #0xcc\n    bl ov80_0222A474\n    ldrb r1, [r4, #5]\n    mov r0, #0x15\n    lsl r0, r0, #4\n    lsl r1, r1, #1\n    add r1, r1, #1\n    lsl r1, r1, #1\n    add r1, r4, r1\n    ldrh r1, [r1, #0x18]\n    add r0, r4, r0\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_0222A474\n    b _02230FB6\n    ldr r1, _02230FD0 ; =0x000006F5\n    ldrb r2, [r4, #4]\n    ldrb r0, [r4, r1]\n    add r1, #0xf\n    add r3, r4, r1\n    lsl r1, r2, #3\n    add r1, r2, r1\n    add r1, r3, r1\n    bl sub_02030BD0\n    strh r0, [r5]\n    b _02230FB6\n    bl ov80_02231888\n    strh r0, [r5]\n    b _02230FB6\n    ldr r0, [sp, #4]\n    ldr r0, [r0, #8]\n    bl SaveArray_Party_Get\n    mov r1, #0x26\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    bl Party_GetMonByIndex\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r5]\n    b _02230FB6\n    bl ov80_022319B0\n    b _02230FB6\n    bl ov80_02231A04\n    b _02230FB6\n    mov r0, #0\n    strh r0, [r5]\n    ldrb r0, [r4, #4]\n    cmp r0, #0\n    bne _02230FB6\n    ldrh r0, [r4, #8]\n    add r0, r0, #1\n    cmp r0, #0x32\n    bne _02230FAE\n    mov r0, #1\n    strh r0, [r5]\n    b _02230FB6\n    cmp r0, #0xaa\n    bne _02230FB6\n    mov r0, #2\n    strh r0, [r5]\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02230FBC: .word 0x000006F2\n    _02230FC0: .word 0x0000270F\n    _02230FC4: .word 0x000006F8\n    _02230FC8: .word 0x00000D88\n    _02230FCC: .word 0x00000728\n    _02230FD0: .word 0x000006F5"
    );
    #endif
}

u32 FrtCmd_146(void) {
    FrontierScript_ReadVarPtr();
    Frontier_GetData();
    return 0;
}

u32 FrtCmd_147(void) {
    FrontierScript_ReadVar();
    FrontierScript_ReadVar(r5);
    FrontierScript_ReadVarPtr(r5);
    Frontier_GetData();
    ov80_02231844(r6, r7);
    return 1;
}

void FrtCmd_148(void) {
    /* Original at 0x02231020 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, r4, #0\n    add r1, #0x78\n    strh r0, [r1]\n    ldr r1, _0223103C ; =ov80_02231040\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0223103C: .word ov80_02231040"
    );
    #endif
}

void ov80_02231040(void) {
    /* Original at 0x02231040 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x78\n    ldrh r1, [r1]\n    bl ov80_0222BE9C\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    mov r1, #0xd9\n    lsl r1, r1, #4\n    ldrb r2, [r0, r1]\n    cmp r2, #2\n    blo _02231068\n    mov r2, #0\n    strb r2, [r0, r1]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_149(void) {
    /* Original at 0x0223106C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r1, [r5, #0x1c]\n    add r0, r1, #1\n    str r0, [r5, #0x1c]\n    ldr r0, [r5]\n    ldrb r4, [r1]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r2, r0, #0\n    bne _02231090\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    lsl r1, r4, #4\n    add r1, r4, r1\n    add r2, #0x58\n    lsl r1, r1, #4\n    add r0, r5, #0\n    add r1, r2, r1\n    bl ov80_0222F44C\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

u32 FrtCmd_118(void) {
    FrontierScript_ReadVarPtr();
    Frontier_GetData();
    ov80_0223151C(r4);
    return 1;
}

u8 FrtCmd_199(void) {
    return 0;
}
