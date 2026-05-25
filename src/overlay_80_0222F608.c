/* Decompiled from asm/overlay_80_0222F608.s */
#include "global.h"

void FrtCmd_092(void) {
    /* Original at 0x0222F608 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVar\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    lsl r2, r4, #0x18\n    lsl r3, r6, #0x18\n    ldr r0, [r0, #8]\n    add r1, r7, #0\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl ov80_0222FD08\n    add r1, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_SetData\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

u32 FrtCmd_093(void) {
    FrontierScript_ReadVar();
    Frontier_GetData();
    ov80_0222FEEC(r4);
    return 0;
}

u32 FrtCmd_094(void) {
    Frontier_GetData();
    ov80_02230424();
    return 0;
}

void FrtCmd_095(void) {
    /* Original at 0x0222F678 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r7, r0, #0\n    ldr r0, [r6]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r5, r0, #0\n    mov r0, #0xb\n    mov r1, #0x24\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x24\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r0, [r7, #8]\n    mov r3, #0\n    str r0, [r4]\n    ldrb r0, [r5, #4]\n    add r2, r4, #0\n    strb r0, [r4, #4]\n    ldrb r0, [r5, #5]\n    strb r0, [r4, #5]\n    ldr r0, _0222F6D4 ; =0x000004D4\n    strb r3, [r4, #6]\n    ldr r1, [r5, r0]\n    add r0, r0, #4\n    str r1, [r4, #8]\n    ldr r0, [r5, r0]\n    ldr r1, _0222F6D8 ; =ov80_0223BDB4\n    str r0, [r4, #0xc]\n    ldr r0, _0222F6DC ; =ov80_0222F7CC\n    str r5, [r4, #0x1c]\n    str r0, [sp]\n    ldr r0, [r6]\n    ldr r0, [r0]\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222F6D4: .word 0x000004D4\n    _0222F6D8: .word ov80_0223BDB4\n    _0222F6DC: .word ov80_0222F7CC"
    );
    #endif
}

void FrtCmd_096(void) {
    /* Original at 0x0222F6E0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    ldr r0, _0222F704 ; =0x000004FC\n    ldr r5, [r4, r0]\n    ldr r0, [r5, #0x14]\n    bl IsBattleResultWin\n    str r0, [r4, #0x14]\n    add r0, r5, #0\n    bl BattleSetup_Delete\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222F704: .word 0x000004FC"
    );
    #endif
}

void FrtCmd_097(void) {
    /* Original at 0x0222F708 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r1, r6, #0\n    add r4, r0, #0\n    bl ov80_02236F24\n    add r2, r0, #0\n    ldr r0, _0222F744 ; =0x000004FC\n    mov r3, #0\n    str r2, [r4, r0]\n    str r3, [sp]\n    ldr r0, [r5]\n    ldr r1, _0222F748 ; =gOverlayTemplate_Battle\n    ldr r0, [r0]\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0222F744: .word 0x000004FC\n    _0222F748: .word gOverlayTemplate_Battle"
    );
    #endif
}

void FrtCmd_098(void) {
    /* Original at 0x0222F74C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r7, r0, #0\n    ldr r0, [r6]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r5, r0, #0\n    mov r2, #0\n    ldr r0, _0222F7BC ; =0x000004DC\n    add r3, r5, #0\n    add r1, r2, #0\n    add r2, r2, #1\n    strh r1, [r3, r0]\n    add r3, r3, #2\n    cmp r2, #6\n    blt _0222F76C\n    mov r0, #0xb\n    mov r1, #0x24\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x24\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r0, [r7, #8]\n    add r2, r4, #0\n    str r0, [r4]\n    ldrb r0, [r5, #4]\n    mov r3, #0\n    strb r0, [r4, #4]\n    ldrb r0, [r5, #5]\n    strb r0, [r4, #5]\n    mov r0, #1\n    strb r0, [r4, #6]\n    ldr r0, _0222F7C0 ; =0x000004D4\n    ldr r1, [r5, r0]\n    add r0, r0, #4\n    str r1, [r4, #8]\n    ldr r0, [r5, r0]\n    ldr r1, _0222F7C4 ; =ov80_0223BDC4\n    str r0, [r4, #0xc]\n    ldr r0, _0222F7C8 ; =ov80_0222F7CC\n    str r5, [r4, #0x1c]\n    str r0, [sp]\n    ldr r0, [r6]\n    ldr r0, [r0]\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222F7BC: .word 0x000004DC\n    _0222F7C0: .word 0x000004D4\n    _0222F7C4: .word ov80_0223BDC4\n    _0222F7C8: .word ov80_0222F7CC"
    );
    #endif
}

void ov80_0222F7CC(void) {
    ov80_02230460(*((u32*)(r0 + 0x1c)), r0);
    Heap_Free(r4);
}

u32 FrtCmd_099(void) {
    Frontier_GetData();
    ov80_022307F0();
    return 0;
}

u32 FrtCmd_100(void) {
    Frontier_GetData();
    ov80_022308C4();
    return 0;
}

u32 FrtCmd_101(void) {
    Frontier_GetData();
    ov80_022309F8();
    return 0;
}

u32 FrtCmd_102(void) {
    Frontier_GetData();
    ov80_02230A60();
    return 0;
}

void FrtCmd_103(void) {
    /* Original at 0x0222F830 */
    /* Requires manual decompilation - 402 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x6c\n    add r6, r0, #0\n    ldr r2, [r6, #0x1c]\n    add r1, r2, #1\n    str r1, [r6, #0x1c]\n    ldrb r7, [r2]\n    add r2, r1, #1\n    str r2, [r6, #0x1c]\n    ldrb r5, [r1]\n    add r1, r2, #1\n    str r1, [r6, #0x1c]\n    ldrb r1, [r2]\n    str r1, [sp, #0x1c]\n    bl FrontierScript_ReadVarPtr\n    str r0, [sp, #0x18]\n    ldr r0, [r6]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    ldr r0, [r6]\n    bl FrontierSystem_GetFrontierMap\n    str r0, [sp, #0x20]\n    cmp r7, #0x29\n    bhi _0222F8F2\n    add r0, r7, r7\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222F874: ; jump table\n    strb r5, [r4, #7]\n    b _0222FBE6\n    strb r5, [r4, #5]\n    b _0222FBE6\n    strb r5, [r4, #4]\n    b _0222FBE6\n    lsl r0, r5, #1\n    add r1, r4, r0\n    ldr r0, _0222FBEC ; =0x000004DC\n    ldrh r1, [r1, r0]\n    ldr r0, [sp, #0x18]\n    strh r1, [r0]\n    b _0222FBE6\n    ldrh r1, [r4, #0xc]\n    ldr r0, [sp, #0x18]\n    strh r1, [r0]\n    b _0222FBE6\n    ldrh r1, [r4, #0xc]\n    ldr r0, _0222FBF0 ; =0x0000270F\n    cmp r1, r0\n    blo _0222F8F4\n    b _0222FBE6\n    add r0, r1, #1\n    strh r0, [r4, #0xc]\n    b _0222FBE6\n    mov r0, #0\n    bl OS_ResetSystem\n    b _0222FBE6\n    ldr r0, _0222FBF4 ; =0x000004F4\n    ldr r0, [r4, r0]\n    bl sub_0203095C\n    ldr r1, [sp, #0x18]\n    strh r0, [r1]\n    b _0222FBE6\n    add r0, r4, #0\n    mov r1, #2\n    bl ov80_0223049C\n    b _0222FBE6\n    add r0, r4, #0\n    bl ov80_02230784\n    ldr r1, [sp, #0x18]\n    strh r0, [r1]\n    b _0222FBE6\n    mov r0, #0x38\n    mul r0, r5\n    add r1, r4, r0\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    ldrh r0, [r1, r0]\n    lsl r0, r0, #0x15\n    lsr r1, r0, #0x15\n    ldr r0, [sp, #0x18]\n    strh r1, [r0]\n    b _0222FBE6\n    mov r0, #0x38\n    mul r0, r5\n    add r1, r4, r0\n    ldr r0, [sp, #0x1c]\n    lsl r0, r0, #1\n    add r1, r1, r0\n    mov r0, #0xfd\n    lsl r0, r0, #2\n    ldrh r1, [r1, r0]\n    ldr r0, [sp, #0x18]\n    strh r1, [r0]\n    b _0222FBE6\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov80_02237120\n    add r2, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    add r1, r4, r0\n    mov r0, #0x38\n    mul r0, r5\n    add r0, r1, r0\n    add r1, r6, #0\n    bl ov80_0222A140\n    add r0, r6, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp, #0x18]\n    strh r0, [r1]\n    add r0, r6, #0\n    bl Heap_Free\n    b _0222FBE6\n    ldrb r0, [r4, #4]\n    mov r1, #1\n    bl ov80_02236DF8\n    mov r1, #0\n    str r0, [sp, #0x14]\n    add r2, sp, #0x24\n    add r0, r1, #0\n    add r1, r1, #1\n    stmia r2!, {r0}\n    cmp r1, #0x12\n    blt _0222F99C\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    ble _0222FA12\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    add r6, r4, r0\n    add r0, r4, #0\n    bl ov80_02237120\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov80_0222A140\n    add r0, r5, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetMonData\n    cmp r7, r0\n    bne _0222F9E8\n    mov r0, #0xff\n    lsl r1, r7, #2\n    add r2, sp, #0x24\n    ldr r2, [r2, r1]\n    add r3, r2, #1\n    add r2, sp, #0x24\n    str r3, [r2, r1]\n    cmp r0, #0xff\n    beq _0222FA04\n    lsl r0, r0, #2\n    add r1, r2, #0\n    ldr r1, [r1, r0]\n    add r2, r1, #1\n    add r1, sp, #0x24\n    str r2, [r1, r0]\n    ldr r0, [sp, #0x10]\n    add r6, #0x38\n    add r1, r0, #1\n    ldr r0, [sp, #0x14]\n    str r1, [sp, #0x10]\n    cmp r1, r0\n    blt _0222F9BC\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #0\n    add r4, sp, #0x24\n    add r5, r0, #0\n    add r3, r4, #0\n    lsl r1, r0, #2\n    ldr r2, [r3, r1]\n    ldr r1, [r4]\n    cmp r2, r1\n    bge _0222FA2C\n    add r0, r5, #0\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #0x12\n    blt _0222FA20\n    lsl r2, r0, #2\n    add r1, sp, #0x24\n    ldr r1, [r1, r2]\n    cmp r1, #1\n    bgt _0222FA46\n    ldr r0, [sp, #0x18]\n    mov r1, #0xff\n    strh r1, [r0]\n    b _0222FBE6\n    ldr r1, [sp, #0x18]\n    strh r0, [r1]\n    b _0222FBE6\n    add r0, r4, #0\n    bl ov80_022372B4\n    ldr r1, [sp, #0x18]\n    strh r0, [r1]\n    b _0222FBE6\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov80_02230794\n    ldr r1, [sp, #0x18]\n    strh r0, [r1]\n    b _0222FBE6\n    add r0, r4, #0\n    bl ov80_022307C8\n    b _0222FBE6\n    add r0, r4, #0\n    bl ov80_022307D4\n    b _0222FBE6\n    add r0, r4, #0\n    bl ov80_02230790\n    ldr r1, [sp, #0x18]\n    strh r0, [r1]\n    b _0222FBE6\n    ldr r0, _0222FBF8 ; =0x0000057C\n    ldrb r1, [r4, r0]\n    ldr r0, [sp, #0x18]\n    strh r1, [r0]\n    b _0222FBE6\n    ldr r0, _0222FBFC ; =0x0000057D\n    ldrb r1, [r4, r0]\n    ldr r0, [sp, #0x18]\n    strh r1, [r0]\n    b _0222FBE6\n    add r0, r4, #0\n    bl sub_02096910\n    b _0222FBE6\n    ldrb r0, [r4, #4]\n    bl ov80_02237254\n    ldr r1, [sp, #0x18]\n    strh r0, [r1]\n    b _0222FBE6\n    ldrb r1, [r4, #4]\n    ldr r0, [sp, #0x18]\n    strh r1, [r0]\n    b _0222FBE6\n    mov r0, #0x1a\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r1, #3\n    ldr r0, [sp, #0x20]\n    str r5, [sp, #8]\n    ldr r0, [r0]\n    add r2, r1, #0\n    mov r3, #0xa\n    bl BgTilemapRectChangePalette\n    ldr r0, [sp, #0x20]\n    mov r1, #3\n    ldr r0, [r0]\n    bl ScheduleBgTilemapBufferTransfer\n    b _0222FBE6\n    ldr r0, [r6]\n    bl FrontierSystem_GetFrontierMap\n    add r1, r0, #0\n    ldr r0, _0222FC00 ; =ov80_0222FC08\n    mov r2, #5\n    bl SysTask_CreateOnMainQueue\n    mov r1, #5\n    lsl r1, r1, #8\n    str r0, [r4, r1]\n    b _0222FBE6\n    mov r0, #5\n    lsl r0, r0, #8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0222FBE6\n    bl SysTask_Destroy\n    mov r0, #5\n    mov r1, #0\n    lsl r0, r0, #8\n    str r1, [r4, r0]\n    b _0222FBE6\n    ldrb r1, [r4, #6]\n    add r0, r4, #0\n    add r0, #0x34\n    lsl r1, r1, #1\n    add r1, r4, r1\n    ldrh r1, [r1, #0x18]\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_0222A474\n    ldrb r1, [r4, #6]\n    mov r0, #0x51\n    lsl r0, r0, #2\n    add r1, r1, #7\n    lsl r1, r1, #1\n    add r1, r4, r1\n    ldrh r1, [r1, #0x18]\n    add r0, r4, r0\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_0222A474\n    b _0222FBE6\n    ldrb r0, [r4, #4]\n    bl ov80_02236DD4\n    add r7, r0, #0\n    mov r5, #0\n    cmp r7, #0\n    ble _0222FBE6\n    ldr r0, _0222FC04 ; =0x000004D4\n    add r1, r5, #0\n    ldr r0, [r4, r0]\n    bl Party_GetMonByIndex\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [r6]\n    add r1, r5, #0\n    ldr r0, [r0, #0x44]\n    bl BufferBoxMonSpeciesName\n    add r5, r5, #1\n    cmp r5, r7\n    blt _0222FB42\n    b _0222FBE6\n    add r0, r4, #0\n    bl ov80_02230B4C\n    ldr r1, [sp, #0x18]\n    strh r0, [r1]\n    b _0222FBE6\n    add r0, r4, #0\n    bl ov80_02230AE4\n    b _0222FBE6\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    strh r1, [r0]\n    ldrb r0, [r4, #4]\n    cmp r0, #0\n    bne _0222FBE6\n    ldrh r0, [r4, #0xc]\n    add r0, r0, #1\n    cmp r0, #0x15\n    bne _0222FB94\n    ldr r0, [sp, #0x18]\n    mov r1, #1\n    strh r1, [r0]\n    b _0222FBE6\n    cmp r0, #0x31\n    bne _0222FBE6\n    ldr r0, [sp, #0x18]\n    mov r1, #2\n    strh r1, [r0]\n    b _0222FBE6\n    add r0, r4, #0\n    bl ov80_022371B0\n    b _0222FBE6\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    mov r3, #0x3f\n    lsl r3, r3, #4\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #0xcd\n    add r1, r3, #0\n    add r2, r3, #0\n    str r0, [sp, #0xc]\n    add r0, r4, r3\n    sub r1, #0x1e\n    sub r2, #0x16\n    sub r3, #0x10\n    add r1, r4, r1\n    add r2, r4, r2\n    add r3, r4, r3\n    bl ov80_0222A52C\n    b _0222FBE6\n    add r0, r4, #0\n    bl ov80_02237130\n    b _0222FBE6\n    ldrb r1, [r4, #0xb]\n    ldr r0, [sp, #0x18]\n    strh r1, [r0]\n    mov r0, #1\n    strb r0, [r4, #0xb]\n    mov r0, #0\n    add sp, #0x6c\n    pop {r4, r5, r6, r7, pc}\n    _0222FBEC: .word 0x000004DC\n    _0222FBF0: .word 0x0000270F\n    _0222FBF4: .word 0x000004F4\n    _0222FBF8: .word 0x0000057C\n    _0222FBFC: .word 0x0000057D\n    _0222FC00: .word ov80_0222FC08\n    _0222FC04: .word 0x000004D4"
    );
    #endif
}

void ov80_0222FC08(void) {
    /* Original at 0x0222FC08 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4]\n    mov r1, #2\n    bl Bg_GetYpos\n    cmp r0, #0xff\n    ldr r0, [r4]\n    blt _0222FC26\n    mov r1, #2\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    pop {r4, pc}\n    mov r1, #2\n    mov r2, #4\n    mov r3, #1\n    bl ScheduleSetBgPosText\n    pop {r4, pc}"
    );
    #endif
}

u32 FrtCmd_104(void) {
    FrontierScript_ReadVarPtr();
    Frontier_GetData();
    return 0;
}

u32 FrtCmd_105(void) {
    FrontierScript_ReadVar();
    FrontierScript_ReadVar(r5);
    FrontierScript_ReadVarPtr(r5);
    Frontier_GetData();
    ov80_02230AF8(r6, r7);
    return 1;
}

void FrtCmd_106(void) {
    /* Original at 0x0222FC80 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, r4, #0\n    add r1, #0x78\n    strh r0, [r1]\n    ldr r1, _0222FC9C ; =ov80_0222FCA0\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0222FC9C: .word ov80_0222FCA0"
    );
    #endif
}

void ov80_0222FCA0(void) {
    /* Original at 0x0222FCA0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x78\n    ldrh r1, [r1]\n    bl ov80_0222BE9C\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    ldr r1, _0222FCCC ; =0x00000702\n    ldrb r2, [r0, r1]\n    cmp r2, #2\n    blo _0222FCC6\n    mov r2, #0\n    strb r2, [r0, r1]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0222FCCC: .word 0x00000702"
    );
    #endif
}

void FrtCmd_107(void) {
    /* Original at 0x0222FCD0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r1, [r5, #0x1c]\n    add r0, r1, #1\n    str r0, [r5, #0x1c]\n    ldr r0, [r5]\n    ldrb r4, [r1]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r2, r0, #0\n    bne _0222FCF4\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    lsl r1, r4, #4\n    add r1, r4, r1\n    add r2, #0x4c\n    lsl r1, r1, #4\n    add r0, r5, #0\n    add r1, r2, r1\n    bl ov80_0222F44C\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
