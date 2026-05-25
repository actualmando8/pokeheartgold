/* Decompiled from asm/overlay_80_02231BF8.s */
#include "global.h"

void FrtCmd_151(void) {
    /* Original at 0x02231BF8 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    bl FrontierScript_ReadVar\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    str r0, [sp, #0x14]\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    str r6, [sp]\n    lsl r2, r4, #0x18\n    ldr r1, [sp, #0x14]\n    str r7, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r0, #8]\n    ldr r1, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    lsr r2, r2, #0x18\n    bl ov80_022324C4\n    add r1, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_SetData\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_152(void) {
    void *r3;
    void *r4;
    void *r5;
    r5 = r0 + 0;
    FrontierScript_ReadVar();
    r4 = r0 + 0;
    /* ldr r0, [r5] */
    /* ldr r0, [r0] */
    Frontier_GetData();
    r1 = r4 + 0;
    ov80_02232824();
    r0 = 0;
}

void FrtCmd_153(void) {
    void *r3;
    /* ldr r0, [r0] */
    /* ldr r0, [r0] */
    Frontier_GetData();
    ov80_02232ABC();
    r0 = 0;
}

void FrtCmd_154(void) {
    /* Original at 0x02231C8C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r7, r0, #0\n    mov r0, #0xb\n    mov r1, #0x30\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x30\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r0, [r6, #8]\n    add r1, r7, #0\n    str r0, [r4]\n    add r0, r4, #0\n    bl ov80_02231E4C\n    ldr r0, _02231CD8 ; =ov80_02231E94\n    ldr r1, _02231CDC ; =ov80_0223BE34\n    str r0, [sp]\n    ldr r0, [r5]\n    add r2, r4, #0\n    ldr r0, [r0]\n    mov r3, #0\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _02231CD8: .word ov80_02231E94\n    _02231CDC: .word ov80_0223BE34"
    );
    #endif
}

void FrtCmd_164(void) {
    /* Original at 0x02231CE0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r7, r0, #0\n    mov r0, #0xb\n    mov r1, #0x30\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x30\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r0, [r6, #8]\n    add r1, r7, #0\n    str r0, [r4]\n    add r0, r4, #0\n    bl ov80_02231E4C\n    ldr r0, _02231D2C ; =ov80_02231E94\n    ldr r1, _02231D30 ; =ov80_0223BE24\n    str r0, [sp]\n    ldr r0, [r5]\n    add r2, r4, #0\n    ldr r0, [r0]\n    mov r3, #0\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _02231D2C: .word ov80_02231E94\n    _02231D30: .word ov80_0223BE24"
    );
    #endif
}

void FrtCmd_155(void) {
    /* Original at 0x02231D34 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    ldr r5, [r4, #0xc]\n    mov r1, #0\n    ldr r0, [r5, #4]\n    bl Party_GetMonByIndex\n    add r2, r0, #0\n    ldr r0, [r4, #0x28]\n    mov r1, #0\n    bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers\n    ldr r0, [r5, #4]\n    mov r1, #1\n    bl Party_GetMonByIndex\n    add r2, r0, #0\n    ldr r0, [r4, #0x28]\n    mov r1, #1\n    bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers\n    ldrb r0, [r4, #0x10]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02231D84\n    ldr r0, [r5, #4]\n    mov r1, #2\n    bl Party_GetMonByIndex\n    add r2, r0, #0\n    ldr r0, [r4, #0x28]\n    mov r1, #2\n    bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers\n    b _02231DA8\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Party_GetMonByIndex\n    add r2, r0, #0\n    ldr r0, [r4, #0x28]\n    mov r1, #2\n    bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    bl Party_GetMonByIndex\n    add r2, r0, #0\n    ldr r0, [r4, #0x28]\n    mov r1, #3\n    bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers\n    ldr r0, [r5, #0x14]\n    bl IsBattleResultWin\n    str r0, [r4, #0x1c]\n    add r0, r5, #0\n    bl BattleSetup_Delete\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_156(void) {
    /* Original at 0x02231DBC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r1, r6, #0\n    add r4, r0, #0\n    bl ov80_02237B8C\n    add r2, r0, #0\n    str r2, [r4, #0xc]\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, [r5]\n    ldr r1, _02231DF4 ; =gOverlayTemplate_Battle\n    ldr r0, [r0]\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _02231DF4: .word gOverlayTemplate_Battle"
    );
    #endif
}

void FrtCmd_157(void) {
    /* Original at 0x02231DF8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r7, r0, #0\n    mov r0, #0xb\n    mov r1, #0x30\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x30\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r0, [r6, #8]\n    add r1, r7, #0\n    str r0, [r4]\n    add r0, r4, #0\n    bl ov80_02231E4C\n    ldr r0, _02231E44 ; =ov80_02231E94\n    ldr r1, _02231E48 ; =ov80_0223BE44\n    str r0, [sp]\n    ldr r0, [r5]\n    add r2, r4, #0\n    ldr r0, [r0]\n    mov r3, #0\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _02231E44: .word ov80_02231E94\n    _02231E48: .word ov80_0223BE44"
    );
    #endif
}

void ov80_02231E4C(void) {
    /* Original at 0x02231E4C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    ldrb r2, [r1, #0x10]\n    mov r6, #0\n    strb r2, [r0, #4]\n    ldr r2, [r1, #0x28]\n    str r2, [r0, #0x18]\n    ldr r2, [r1, #0x2c]\n    str r2, [r0, #0x1c]\n    ldr r2, _02231E90 ; =0x00000A1C\n    str r1, [r0, #0x24]\n    ldrh r2, [r1, r2]\n    strh r2, [r0, #0x28]\n    mov r2, #0xde\n    lsl r2, r2, #2\n    add r3, r2, #4\n    mov r7, #0x37\n    add r5, r1, r6\n    lsl r7, r7, #4\n    ldrb r7, [r5, r7]\n    add r4, r0, r6\n    add r6, r6, #1\n    strb r7, [r4, #8]\n    mov r7, #0xdd\n    lsl r7, r7, #2\n    ldrb r7, [r5, r7]\n    cmp r6, #4\n    strb r7, [r4, #0xc]\n    ldrb r7, [r5, r2]\n    strb r7, [r4, #0x10]\n    ldrb r5, [r5, r3]\n    strb r5, [r4, #0x14]\n    blt _02231E6A\n    pop {r4, r5, r6, r7}\n    bx lr\n    _02231E90: .word 0x00000A1C"
    );
    #endif
}

void ov80_02231E94(void) {
    void *r4;
    r4 = r0 + 0;
    /* ldr r0, [r4, #0x24] */
    r1 = (r0 + 0) + 0;
    ov80_02232AEC();
    r0 = r4 + 0;
    Heap_Free((r4 + 0));
}

void FrtCmd_158(void) {
    void *r3;
    /* ldr r0, [r0] */
    /* ldr r0, [r0] */
    Frontier_GetData();
    ov80_02232F00();
    r0 = 0;
}

void FrtCmd_159(void) {
    void *r3;
    /* ldr r0, [r0] */
    /* ldr r0, [r0] */
    Frontier_GetData();
    ov80_02232F08();
    r0 = 0;
}

void FrtCmd_160(void) {
    /* Original at 0x02231ED0 */
    /* Requires manual decompilation - 391 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    ldr r3, [r0, #0x1c]\n    add r1, r0, #0\n    add r2, r3, #1\n    str r2, [r1, #0x1c]\n    ldrb r1, [r3]\n    add r3, r2, #1\n    str r0, [sp, #0x10]\n    str r1, [sp, #0x18]\n    add r1, r0, #0\n    str r3, [r1, #0x1c]\n    ldrb r6, [r2]\n    add r2, r3, #1\n    str r2, [r1, #0x1c]\n    ldrb r1, [r3]\n    str r1, [sp, #0x14]\n    bl FrontierScript_ReadVarPtr\n    add r5, r0, #0\n    ldr r0, [sp, #0x10]\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    ldr r0, [sp, #0x10]\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r7, r0, #0\n    ldr r0, [sp, #0x18]\n    cmp r0, #0x2c\n    bls _02231F18\n    b _0223228E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02231F24: ; jump table\n    strb r6, [r4, #0x10]\n    b _0223228E\n    lsl r0, r6, #1\n    add r1, r4, r0\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldrh r0, [r1, r0]\n    strh r0, [r5]\n    b _0223228E\n    ldrh r0, [r4, #0x14]\n    strh r0, [r5]\n    b _0223228E\n    ldrh r1, [r4, #0x14]\n    ldr r0, _02232294 ; =0x0000270F\n    cmp r1, r0\n    bhs _0223201E\n    add r0, r1, #1\n    strh r0, [r4, #0x14]\n    b _0223228E\n    mov r0, #0\n    bl OS_ResetSystem\n    b _0223228E\n    ldr r0, [r4, #8]\n    bl sub_02030CD8\n    strh r0, [r5]\n    b _0223228E\n    add r0, r4, #0\n    mov r1, #2\n    bl ov80_02232B58\n    b _0223228E\n    add r0, r4, #0\n    bl ov80_02232E58\n    strh r0, [r5]\n    b _0223228E\n    mov r0, #0x38\n    mul r0, r6\n    add r1, r4, r0\n    mov r0, #0xa2\n    lsl r0, r0, #2\n    ldrh r0, [r1, r0]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x15\n    strh r0, [r5]\n    b _0223228E\n    mov r0, #0x38\n    mul r0, r6\n    add r1, r4, r0\n    ldr r0, [sp, #0x14]\n    lsl r0, r0, #1\n    add r1, r1, r0\n    mov r0, #0xa3\n    lsl r0, r0, #2\n    ldrh r0, [r1, r0]\n    strh r0, [r5]\n    b _0223228E\n    ldr r0, [r7, #8]\n    bl SaveArray_Party_Get\n    add r7, r0, #0\n    ldr r0, _02232298 ; =0x0000036A\n    mov r5, #0\n    add r6, r4, r0\n    add r1, r4, r5\n    add r1, #0x24\n    ldrb r1, [r1]\n    add r0, r7, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    add r2, r6, #0\n    bl SetMonData\n    add r5, r5, #1\n    add r6, r6, #2\n    cmp r5, #3\n    blt _02232002\n    b _0223228E\n    add r0, r4, #0\n    bl ov80_02237ED8\n    strh r0, [r5]\n    b _0223228E\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov80_02232E68\n    strh r0, [r5]\n    b _0223228E\n    add r0, r4, #0\n    bl ov80_02232E9C\n    b _0223228E\n    add r0, r4, #0\n    bl ov80_02232EE0\n    b _0223228E\n    add r0, r4, #0\n    bl ov80_02232E64\n    strh r0, [r5]\n    b _0223228E\n    mov r0, #0xa1\n    lsl r0, r0, #4\n    ldrb r0, [r4, r0]\n    strh r0, [r5]\n    b _0223228E\n    ldr r0, _0223229C ; =0x00000A11\n    ldrb r0, [r4, r0]\n    strh r0, [r5]\n    b _0223228E\n    add r0, r4, #0\n    bl ov80_02233020\n    strh r0, [r5]\n    ldrb r1, [r4, #0x10]\n    ldrh r2, [r5]\n    ldr r0, [r4, #4]\n    bl ov80_022331E8\n    b _0223228E\n    add r0, r4, #0\n    bl ov80_02232F60\n    b _0223228E\n    add r0, r4, #0\n    bl sub_02096910\n    b _0223228E\n    ldr r0, _022322A0 ; =0x00000A1B\n    ldrb r0, [r4, r0]\n    cmp r0, #6\n    blo _02232094\n    sub r0, r0, #6\n    strh r0, [r5]\n    b _0223228E\n    strh r0, [r5]\n    b _0223228E\n    ldr r0, _022322A0 ; =0x00000A1B\n    mov r2, #0\n    strb r2, [r4, r0]\n    sub r1, r0, #2\n    strb r2, [r4, r1]\n    sub r0, r0, #3\n    strb r2, [r4, r0]\n    b _0223228E\n    ldr r0, _022322A4 ; =0x00000A18\n    strb r6, [r4, r0]\n    b _0223228E\n    ldr r0, _022322A0 ; =0x00000A1B\n    mov r5, #0\n    ldrb r0, [r4, r0]\n    cmp r0, #6\n    blo _022320C4\n    bl sub_0203769C\n    cmp r0, #0\n    beq _022320CE\n    mov r5, #1\n    b _022320CE\n    bl sub_0203769C\n    cmp r0, #0\n    bne _022320CE\n    mov r5, #1\n    cmp r5, #1\n    bne _022320E2\n    ldr r0, [r7, #8]\n    bl Save_Frontier_GetStatic\n    ldrb r1, [r4, #0x10]\n    mov r2, #0x32\n    bl ov80_02237FA4\n    b _0223228E\n    ldr r0, _022322A8 ; =0x00000A1C\n    ldrh r1, [r4, r0]\n    sub r1, #0x32\n    strh r1, [r4, r0]\n    b _0223228E\n    mov r0, #0\n    strh r0, [r5]\n    ldrb r0, [r4, #0x10]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02232118\n    ldr r0, _022322A0 ; =0x00000A1B\n    ldrb r0, [r4, r0]\n    cmp r0, #6\n    blo _02232110\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02232118\n    mov r0, #1\n    strh r0, [r5]\n    b _0223228E\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0223211A\n    b _0223228E\n    mov r0, #1\n    strh r0, [r5]\n    b _0223228E\n    ldrb r0, [r4, #0x10]\n    bl ov80_02237D8C\n    strh r0, [r5]\n    b _0223228E\n    ldrb r0, [r4, #0x10]\n    strh r0, [r5]\n    b _0223228E\n    ldrb r0, [r4, #0x12]\n    strh r0, [r5]\n    b _0223228E\n    ldr r0, [sp, #0x10]\n    ldr r0, [r0]\n    bl FrontierSystem_GetFrontierMap\n    ldr r0, [r0]\n    add r1, r4, #0\n    mov r2, #3\n    bl ov80_02237EFC\n    b _0223228E\n    ldrb r1, [r4, #0x11]\n    add r0, r4, #0\n    add r0, #0x4c\n    lsl r1, r1, #1\n    add r1, r4, r1\n    ldrh r1, [r1, #0x30]\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_0222A474\n    ldrb r1, [r4, #0x11]\n    mov r0, #0x57\n    lsl r0, r0, #2\n    add r1, r1, #7\n    lsl r1, r1, #1\n    add r1, r4, r1\n    ldrh r1, [r1, #0x30]\n    add r0, r4, r0\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_0222A474\n    b _0223228E\n    add r0, r4, #0\n    bl ov80_02233648\n    strh r0, [r5]\n    b _0223228E\n    ldr r0, [r7, #8]\n    bl sub_02030E08\n    mov r2, #0\n    str r2, [sp]\n    mov r1, #0xa\n    add r3, r2, #0\n    bl sub_02030E58\n    strh r0, [r5]\n    mov r1, #1\n    add r0, sp, #0x20\n    strb r1, [r0]\n    ldr r0, [r7, #8]\n    bl sub_02030E08\n    add r1, sp, #0x20\n    mov r2, #0\n    str r1, [sp]\n    mov r1, #0xa\n    add r3, r2, #0\n    bl sub_02030E18\n    b _0223228E\n    mov r0, #0\n    strh r0, [r5]\n    ldrb r0, [r4, #0x10]\n    cmp r0, #0\n    bne _0223228E\n    ldrh r0, [r4, #0x14]\n    add r0, r0, #1\n    cmp r0, #0x15\n    bne _022321CA\n    mov r0, #1\n    strh r0, [r5]\n    b _0223228E\n    cmp r0, #0x31\n    bne _0223228E\n    mov r0, #2\n    strh r0, [r5]\n    b _0223228E\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    mov r3, #0xa2\n    lsl r3, r3, #2\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #0xcd\n    add r1, r3, #0\n    add r2, r3, #0\n    str r0, [sp, #0xc]\n    add r0, r4, r3\n    sub r1, #0x1c\n    sub r2, #0x14\n    sub r3, #0x10\n    add r1, r4, r1\n    add r2, r4, r2\n    add r3, r4, r3\n    bl ov80_0222A52C\n    b _0223228E\n    add r0, r4, #0\n    bl ov80_02237E30\n    b _0223228E\n    ldrb r0, [r4, #0x13]\n    strh r0, [r5]\n    mov r0, #1\n    strb r0, [r4, #0x13]\n    b _0223228E\n    ldrb r5, [r4, #0x10]\n    cmp r5, #3\n    bne _0223228E\n    cmp r6, #0\n    ldr r0, [r7, #8]\n    bne _0223226A\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    ldrb r0, [r4, #0x10]\n    bl sub_0205C1F0\n    str r0, [sp, #0x1c]\n    add r0, r5, #0\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r1, [sp, #0x1c]\n    add r0, r6, #0\n    bl FrontierSave_GetStat\n    strh r0, [r4, #0x22]\n    ldr r0, [r7, #8]\n    bl Save_Frontier_GetStatic\n    add r5, r0, #0\n    ldrb r0, [r4, #0x10]\n    bl sub_0205C1F0\n    add r6, r0, #0\n    ldrb r0, [r4, #0x10]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r4, #0x20]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02031108\n    b _0223228E\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    ldrb r0, [r4, #0x10]\n    bl sub_0205C1F0\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r4, #0x22]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl sub_02031108\n    mov r0, #0\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _02232294: .word 0x0000270F\n    _02232298: .word 0x0000036A\n    _0223229C: .word 0x00000A11\n    _022322A0: .word 0x00000A1B\n    _022322A4: .word 0x00000A18\n    _022322A8: .word 0x00000A1C"
    );
    #endif
}

void FrtCmd_161(void) {
    void *r3;
    void *r4;
    void *r5;
    r5 = r0 + 0;
    FrontierScript_ReadVarPtr();
    r4 = r0 + 0;
    /* ldr r0, [r5] */
    /* ldr r0, [r0] */
    Frontier_GetData();
    /* ldr r0, [r0, #0x1c] */
    /* strh r0, [r4] */
    r0 = 0;
}

void FrtCmd_162(void) {
    void *r3;
    void *r4;
    void *r5;
    void *r6;
    void *r7;
    r5 = r0 + 0;
    FrontierScript_ReadVar();
    r6 = r0 + 0;
    r0 = r5 + 0;
    FrontierScript_ReadVar((r5 + 0));
    r7 = r0 + 0;
    r0 = r5 + 0;
    FrontierScript_ReadVarPtr((r5 + 0));
    r4 = r0 + 0;
    /* ldr r0, [r5] */
    /* ldr r0, [r0] */
    Frontier_GetData();
    r1 = r6 + 0;
    r2 = r7 + 0;
    ov80_02233280();
    /* strh r0, [r4] */
    r0 = 1;
}

void FrtCmd_163(void) {
    /* Original at 0x022322F8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, r4, #0\n    add r1, #0x78\n    strh r0, [r1]\n    ldr r1, _02232314 ; =ov80_02232318\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _02232314: .word ov80_02232318"
    );
    #endif
}

void ov80_02232318(void) {
    /* Original at 0x02232318 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x78\n    ldrh r1, [r1]\n    bl ov80_0222BE9C\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    ldr r1, _02232344 ; =0x00000A1A\n    ldrb r2, [r0, r1]\n    cmp r2, #2\n    blo _0223233E\n    mov r2, #0\n    strb r2, [r0, r1]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02232344: .word 0x00000A1A"
    );
    #endif
}

void FrtCmd_165(void) {
    /* Original at 0x02232348 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, r4, #0\n    add r1, #0x78\n    strh r0, [r1]\n    ldr r1, _02232364 ; =ov80_02232368\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _02232364: .word ov80_02232368"
    );
    #endif
}

void ov80_02232368(void) {
    /* Original at 0x02232368 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x78\n    ldrh r1, [r1]\n    bl ov80_0222BE24\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    ldr r2, _0223239C ; =0x00000A1B\n    ldrb r1, [r0, r2]\n    cmp r1, #0\n    bne _0223238C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r3, #0\n    sub r1, r2, #1\n    strb r3, [r0, r1]\n    ldrb r0, [r0, r2]\n    strh r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _0223239C: .word 0x00000A1B"
    );
    #endif
}

void FrtCmd_080(void) {
    void *r4;
    r4 = r0 + 0;
    /* ldr r0, [r4] */
    /* ldr r0, [r0] */
    Frontier_GetData();
    r1 = r0 + 0;
    /* ldr r0, [r4] */
    ov80_022332D0();
    r0 = 0;
}

void FrtCmd_081(void) {
    void *r4;
    r4 = r0 + 0;
    /* ldr r0, [r4] */
    /* ldr r0, [r0] */
    Frontier_GetData();
    r1 = r0 + 0;
    /* ldr r0, [r4] */
    ov80_022333F0();
    r0 = 0;
}

void FrtCmd_082(void) {
    void *r4;
    r4 = r0 + 0;
    /* ldr r0, [r4] */
    /* ldr r0, [r0] */
    Frontier_GetData();
    r1 = r0 + 0;
    /* ldr r0, [r4] */
    ov80_02233490();
    r0 = 0;
}

void FrtCmd_166(void) {
    /* Original at 0x022323E8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl Save_Frontier_GetStatic\n    add r5, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205C1F0\n    add r7, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    strh r0, [r6]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_167(void) {
    void *r4;
    void *r5;
    void *r6;
    r5 = r0 + 0;
    FrontierScript_ReadVar();
    r4 = r0 + 0;
    r0 = r5 + 0;
    FrontierScript_ReadVar((r5 + 0));
    r6 = r0 + 0;
    /* ldr r0, [r5] */
    /* ldr r0, [r0] */
    Frontier_GetLaunchArgs();
    /* ldr r0, [r0, #8] */
    Save_Frontier_GetStatic();
    /* lsl r1, r4, #0x18 */
    /* lsr r1, r1, #0x18 */
    r2 = r6 + 0;
    ov80_02237FA4();
    r0 = 0;
}

void FrtCmd_168(void) {
    void *r4;
    void *r5;
    void *r6;
    r5 = r0 + 0;
    FrontierScript_ReadVar();
    r4 = r0 + 0;
    r0 = r5 + 0;
    FrontierScript_ReadVar((r5 + 0));
    r6 = r0 + 0;
    /* ldr r0, [r5] */
    /* ldr r0, [r0] */
    Frontier_GetLaunchArgs();
    /* lsl r1, r4, #0x18 */
    /* ldr r0, [r0, #8] */
    /* lsr r1, r1, #0x18 */
    r2 = r6 + 0;
    ov80_022331E8();
    r0 = 0;
}

void FrtCmd_169(void) {
    /* Original at 0x0223248C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r1, [r5, #0x1c]\n    add r0, r1, #1\n    str r0, [r5, #0x1c]\n    ldr r0, [r5]\n    ldrb r4, [r1]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r2, r0, #0\n    bne _022324B0\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    lsl r1, r4, #4\n    add r1, r4, r1\n    add r2, #0x64\n    lsl r1, r1, #4\n    add r0, r5, #0\n    add r1, r2, r1\n    bl ov80_0222F44C\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
