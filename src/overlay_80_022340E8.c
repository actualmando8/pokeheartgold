/* Decompiled from asm/overlay_80_022340E8.s */
#include "global.h"

void BattleArcadeData_Alloc(void) {
    /* Original at 0x022340E8 */
    /* Requires manual decompilation - 284 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r7, r1, #0\n    add r4, r0, #0\n    str r2, [sp, #4]\n    ldr r1, _02234370 ; =0x00000A88\n    mov r0, #0xb\n    str r3, [sp, #8]\n    bl Heap_Alloc\n    ldr r1, _02234374 ; =ov80_0223DD4C\n    ldr r2, _02234370 ; =0x00000A88\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    ldr r5, [r0]\n    add r0, r4, #0\n    bl sub_02030E88\n    str r0, [r5, #8]\n    ldr r1, _02234374 ; =ov80_0223DD4C\n    str r4, [r5, #4]\n    mov r0, #0xb\n    str r0, [r5]\n    ldr r5, [r1]\n    bl SaveArray_Party_Alloc\n    str r0, [r5, #0x70]\n    mov r0, #0xb\n    bl SaveArray_Party_Alloc\n    str r0, [r5, #0x74]\n    mov r0, #0x2a\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    mov r0, #0x20\n    strb r0, [r5, #0x13]\n    add r0, r4, #0\n    ldr r6, [r5, #8]\n    bl sub_02030FA0\n    add r4, r0, #0\n    cmp r7, #0\n    bne _022341EC\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    mov r1, #0\n    ldr r2, [r0]\n    ldr r0, [sp, #4]\n    strb r0, [r2, #0x10]\n    strb r1, [r2, #0x11]\n    mov r0, #3\n    strb r0, [r2, #0x1c]\n    add r0, r6, #0\n    strb r1, [r2, #0x12]\n    bl sub_02030E7C\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    ldr r0, [r0]\n    ldrb r2, [r0, #0x10]\n    cmp r2, #3\n    bne _02234174\n    ldr r0, [r0, #4]\n    bl Save_VarsFlags_Get\n    bl Save_VarsFlags_GetVar4052\n    b _02234180\n    mov r3, #0\n    add r0, r4, #0\n    mov r1, #8\n    str r3, [sp]\n    bl sub_02030FE4\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bne _022341B8\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    ldr r5, [r0]\n    ldr r0, [r5, #4]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl sub_0205C2C0\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C2C0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    strh r0, [r5, #0x18]\n    b _022341C0\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    mov r1, #0\n    ldr r0, [r0]\n    strh r1, [r0, #0x18]\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    mov r1, #7\n    ldr r4, [r0]\n    ldrh r0, [r4, #0x18]\n    bl _s32_div_f\n    strh r0, [r4, #0x1a]\n    mov r0, #0\n    str r0, [r4, #0x24]\n    add r1, r4, #0\n    ldr r0, [sp, #8]\n    add r1, #0x2c\n    strb r0, [r1]\n    add r0, r4, #0\n    add r1, sp, #0x20\n    ldrh r2, [r1, #0x10]\n    add r0, #0x2d\n    add r4, #0x2e\n    strb r2, [r0]\n    ldrh r0, [r1, #0x14]\n    strb r0, [r4]\n    b _02234294\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    str r1, [sp]\n    bl sub_02030F34\n    ldr r1, _02234374 ; =ov80_0223DD4C\n    mov r2, #0\n    ldr r1, [r1]\n    add r3, r2, #0\n    strb r0, [r1, #0x10]\n    add r0, r6, #0\n    mov r1, #2\n    str r2, [sp]\n    bl sub_02030F34\n    ldr r1, _02234374 ; =ov80_0223DD4C\n    mov r2, #0\n    ldr r4, [r1]\n    mov r1, #3\n    strb r0, [r4, #0x11]\n    str r2, [sp]\n    add r0, r6, #0\n    add r3, r2, #0\n    bl sub_02030F34\n    strb r0, [r4, #0x1c]\n    mov r2, #0\n    str r2, [sp]\n    add r0, r6, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl sub_02030F34\n    strb r0, [r4, #0x12]\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    ldr r5, [r0]\n    ldr r0, [r5, #4]\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl sub_0205C2C0\n    str r0, [sp, #0x10]\n    ldrb r0, [r4, #0x10]\n    bl sub_0205C2C0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r1, [sp, #0x10]\n    add r0, r7, #0\n    bl FrontierSave_GetStat\n    strh r0, [r5, #0x18]\n    ldrh r0, [r5, #0x18]\n    mov r1, #7\n    bl _s32_div_f\n    mov r4, #0\n    strh r0, [r5, #0x1a]\n    add r7, r4, #0\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    lsl r2, r4, #0x18\n    ldr r5, [r0]\n    add r0, r6, #0\n    mov r1, #6\n    lsr r2, r2, #0x18\n    add r3, r7, #0\n    str r7, [sp]\n    bl sub_02030F34\n    add r1, r5, r4\n    add r1, #0x2c\n    strb r0, [r1]\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #3\n    blo _02234270\n    ldr r6, _02234374 ; =ov80_0223DD4C\n    ldr r7, _02234378 ; =0x00000412\n    mov r5, #0\n    ldr r4, [r6]\n    ldr r0, [r4, #4]\n    bl SaveArray_Party_Get\n    add r1, r4, r5\n    add r1, #0x2c\n    ldrb r1, [r1]\n    bl Party_GetMonByIndex\n    ldr r4, [r6]\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    lsl r1, r5, #1\n    add r1, r4, r1\n    strh r0, [r1, r7]\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #3\n    blo _0223429A\n    ldr r0, [r4, #4]\n    bl SaveArray_Party_Get\n    str r0, [sp, #0xc]\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    mov r1, #0\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl BattleArcade_GetMonCount\n    add r7, r0, #0\n    mov r5, #0\n    cmp r7, #0\n    ble _0223434E\n    ldr r6, _02234374 ; =ov80_0223DD4C\n    ldr r1, [r6]\n    ldr r0, [sp, #0xc]\n    add r1, r1, r5\n    add r1, #0x2c\n    ldrb r1, [r1]\n    bl Party_GetMonByIndex\n    add r1, r0, #0\n    ldr r0, [r6]\n    ldr r0, [r0, #0x70]\n    bl Party_AddMon\n    ldr r0, [r6]\n    add r1, r5, #0\n    ldr r0, [r0, #0x70]\n    bl Party_GetMonByIndex\n    mov r1, #0\n    str r1, [sp, #0x18]\n    add r4, r0, #0\n    mov r1, #6\n    add r2, sp, #0x18\n    bl SetMonData\n    add r0, r4, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0x32\n    bls _02234344\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x32\n    bl GetMonExpBySpeciesAndLevel\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    mov r1, #8\n    add r2, sp, #0x14\n    bl SetMonData\n    add r0, r4, #0\n    bl CalcMonLevelAndStats\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, r7\n    blt _022342E4\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl BattleArcade_MultiplayerCheck\n    cmp r0, #1\n    bne _02234366\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    ldr r0, [r0]\n    ldr r0, [r0, #4]\n    bl ov80_0222A840\n    ldr r0, _02234374 ; =ov80_0223DD4C\n    ldr r0, [r0]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02234370: .word 0x00000A88\n    _02234374: .word ov80_0223DD4C\n    _02234378: .word 0x00000412"
    );
    #endif
}

void BattleArcadeData_Init(void) {
    /* Original at 0x0223437C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _02234388\n    bl ov80_02234390\n    pop {r3, pc}\n    bl ov80_02234424\n    pop {r3, pc}"
    );
    #endif
}

void ov80_02234390(void) {
    /* Original at 0x02234390 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    bl ov80_02238498\n    add r1, r0, #0\n    add r2, r5, #0\n    ldrb r0, [r5, #0x10]\n    add r2, #0x78\n    mov r3, #0xe\n    bl ov80_022380A0\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    ldrb r4, [r5, #0x11]\n    bl BattleArcade_GetOpponentMonCount\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl BattleArcade_MultiplayerCheck\n    mov r3, #0x33\n    lsl r3, r3, #4\n    add r1, r5, r3\n    str r1, [sp]\n    add r1, r3, #0\n    sub r1, #0x14\n    add r1, r5, r1\n    str r1, [sp, #4]\n    add r1, r3, #0\n    sub r1, #0x10\n    add r1, r5, r1\n    add r2, r4, #7\n    str r1, [sp, #8]\n    lsl r0, r0, #0x18\n    lsl r1, r4, #1\n    lsl r2, r2, #1\n    lsr r0, r0, #0x18\n    add r1, r5, r1\n    add r2, r5, r2\n    str r0, [sp, #0xc]\n    add r1, #0x78\n    add r2, #0x78\n    sub r3, #0x1c\n    ldrh r1, [r1]\n    ldrh r2, [r2]\n    add r0, r6, #0\n    add r3, r5, r3\n    bl ov80_0222A6B8\n    add r0, r5, #0\n    bl ov80_02238498\n    ldr r3, _0223441C ; =ov80_0223BE98\n    mov r2, #0\n    ldrb r1, [r3]\n    cmp r0, r1\n    blt _02234410\n    ldr r0, _02234420 ; =ov80_0223BE98 + 1\n    lsl r1, r2, #1\n    ldrb r0, [r0, r1]\n    add sp, #0x10\n    strb r0, [r5, #0x1c]\n    pop {r4, r5, r6, pc}\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #3\n    blo _022343FE\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _0223441C: .word ov80_0223BE98\n    _02234420: .word ov80_0223BE98 + 1"
    );
    #endif
}

void ov80_02234424(void) {
    /* Original at 0x02234424 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x18c\n    add r5, r0, #0\n    bl ov80_022344D4\n    mov r4, #0\n    add r6, r5, #0\n    add r7, r4, #0\n    str r7, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #5\n    lsr r2, r2, #0x18\n    add r3, r7, #0\n    bl sub_02030F34\n    add r1, r6, #0\n    add r1, #0x78\n    add r4, r4, #1\n    add r6, r6, #2\n    strh r0, [r1]\n    cmp r4, #0xe\n    blt _02234434\n    mov r6, #0\n    add r4, sp, #0x30\n    add r7, r5, #0\n    mov r0, #0\n    str r0, [sp]\n    lsl r2, r6, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #7\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030F34\n    strh r0, [r4]\n    ldrh r1, [r4]\n    mov r0, #0xc5\n    lsl r0, r0, #2\n    strh r1, [r7, r0]\n    add r6, r6, #1\n    add r4, r4, #2\n    add r7, r7, #2\n    cmp r6, #4\n    blt _02234458\n    add r0, sp, #0x18\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #0xcd\n    str r0, [sp, #0xc]\n    add r0, sp, #0x3c\n    add r1, sp, #0x30\n    add r2, sp, #0x10\n    mov r3, #0\n    bl ov80_0222A52C\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    mov r7, #0\n    add r4, sp, #0x3c\n    add r0, r5, #0\n    bl ov80_02238370\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov80_0222A140\n    ldr r1, [r5, #0x74]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl ov80_022383A8\n    add r7, r7, #1\n    add r4, #0x38\n    cmp r7, #4\n    blt _022344A6\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #0x18c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_022344D4(void) {
    /* Original at 0x022344D4 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0x70]\n    bl Party_GetCount\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    mov r4, #0\n    cmp r7, #0\n    ble _0223451A\n    ldr r0, [r5, #0x70]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #4\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030F34\n    add r1, sp, #4\n    strh r0, [r1]\n    add r0, r6, #0\n    mov r1, #6\n    add r2, sp, #4\n    bl SetMonData\n    add r4, r4, #1\n    cmp r4, r7\n    blt _022344EA\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void BattleArcadeData_Free(void) {
    /* Original at 0x02234520 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _0223454A\n    ldr r0, [r4, #0x70]\n    cmp r0, #0\n    beq _02234530\n    bl Heap_Free\n    ldr r0, [r4, #0x74]\n    cmp r0, #0\n    beq _0223453A\n    bl Heap_Free\n    ldr r2, _0223454C ; =0x00000A88\n    add r0, r4, #0\n    mov r1, #0\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}\n    _0223454C: .word 0x00000A88"
    );
    #endif
}

void ov80_02234550(void) {
    /* Original at 0x02234550 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _02234570 ; =0x00000418\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    bl ov80_02234574\n    strh r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #6\n    blt _0223455A\n    pop {r3, r4, r5, r6, r7, pc}\n    _02234570: .word 0x00000418"
    );
    #endif
}

void ov80_02234574(void) {
    GF_AssertFail();
}

void ov80_02234588(void) {
    /* Original at 0x02234588 */
    /* Requires manual decompilation - 207 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r4, r1, #0\n    bl sub_02030FA0\n    str r0, [sp, #4]\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    bl BattleArcade_GetOpponentMonCount\n    ldrb r1, [r5, #0x10]\n    add r0, sp, #8\n    strb r1, [r0, #8]\n    mov r1, #0\n    add r0, sp, #0x10\n    str r0, [sp]\n    ldr r0, [r5, #8]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_02030EB4\n    ldr r0, [r5, #8]\n    mov r1, #1\n    bl sub_02030EA0\n    mov r2, #0\n    ldrb r1, [r5, #0x11]\n    add r0, sp, #8\n    add r3, r2, #0\n    strb r1, [r0, #8]\n    add r0, sp, #0x10\n    str r0, [sp]\n    ldr r0, [r5, #8]\n    mov r1, #2\n    bl sub_02030EB4\n    mov r2, #0\n    ldrb r1, [r5, #0x1c]\n    add r0, sp, #8\n    add r3, r2, #0\n    strb r1, [r0, #8]\n    add r0, sp, #0x10\n    str r0, [sp]\n    ldr r0, [r5, #8]\n    mov r1, #3\n    bl sub_02030EB4\n    mov r2, #0\n    ldrb r1, [r5, #0x12]\n    add r0, sp, #8\n    add r3, r2, #0\n    strb r1, [r0, #8]\n    add r0, sp, #0x10\n    str r0, [sp]\n    ldr r0, [r5, #8]\n    mov r1, #1\n    bl sub_02030EB4\n    ldr r0, [r5, #4]\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C2C0\n    add r7, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C2C0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #0x18]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl sub_02031108\n    cmp r4, #2\n    beq _0223468E\n    ldr r0, [r5, #4]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C2E8\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C2E8\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #0x18]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_0203126C\n    add r0, r5, #0\n    add r0, #0x2f\n    ldrb r1, [r0]\n    add r0, sp, #8\n    mov r3, #0\n    strb r1, [r0, #8]\n    add r0, sp, #0x10\n    str r0, [sp]\n    ldrb r2, [r5, #0x10]\n    ldr r0, [sp, #4]\n    mov r1, #8\n    bl sub_02030FB0\n    ldrb r0, [r5, #0x10]\n    cmp r0, #3\n    bne _0223468E\n    ldr r0, [r5, #4]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    mov r0, #0x6e\n    bl sub_0205C268\n    add r3, r5, #0\n    add r3, #0x2f\n    add r2, r0, #0\n    ldrb r3, [r3]\n    add r0, r4, #0\n    mov r1, #0x6e\n    bl sub_02031108\n    mov r4, #0\n    add r6, sp, #8\n    add r7, sp, #8\n    lsl r0, r4, #1\n    add r0, r5, r0\n    add r0, #0x78\n    ldrh r0, [r0]\n    lsl r2, r4, #0x18\n    mov r1, #5\n    strh r0, [r7]\n    str r6, [sp]\n    ldr r0, [r5, #8]\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030EB4\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0xe\n    blo _02234694\n    mov r4, #0\n    add r6, sp, #0x10\n    add r7, sp, #8\n    add r0, r5, r4\n    add r0, #0x2c\n    ldrb r0, [r0]\n    lsl r2, r4, #0x18\n    mov r1, #6\n    strb r0, [r7, #8]\n    str r6, [sp]\n    ldr r0, [r5, #8]\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030EB4\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #3\n    blo _022346BE\n    ldr r0, [r5, #0x70]\n    bl Party_GetCount\n    add r6, r0, #0\n    ldr r4, _02234760 ; =0x00000000\n    beq _0223471C\n    add r7, sp, #8\n    ldr r0, [r5, #0x70]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #8\n    strh r0, [r1]\n    str r7, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #4\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030EB4\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, r6\n    blo _022346EE\n    ldr r0, [r5, #0x74]\n    bl Party_GetCount\n    add r6, r0, #0\n    ldr r4, _02234760 ; =0x00000000\n    beq _0223475A\n    add r7, sp, #8\n    ldr r0, [r5, #0x74]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    lsl r0, r4, #1\n    add r1, r5, r0\n    mov r0, #0xc5\n    lsl r0, r0, #2\n    ldrh r1, [r1, r0]\n    add r0, sp, #8\n    lsl r2, r4, #0x18\n    strh r1, [r0]\n    str r7, [sp]\n    ldr r0, [r5, #8]\n    mov r1, #7\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030EB4\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, r6\n    blo _0223472A\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02234760: .word 0x00000000"
    );
    #endif
}

void ov80_02234764(void) {
    /* Original at 0x02234764 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #0x11]\n    add r1, r1, #1\n    strb r1, [r0, #0x11]\n    ldrb r0, [r0, #0x11]\n    bx lr"
    );
    #endif
}

void ov80_02234770(void) {
    /* Original at 0x02234770 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x11]\n    bx lr"
    );
    #endif
}

void ov80_02234774(void) {
    /* Original at 0x02234774 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x30\n    add r4, r0, #0\n    bl ov80_022347A8\n    lsl r1, r0, #0x18\n    lsr r1, r1, #0x17\n    add r1, r4, r1\n    add r1, #0x78\n    ldrh r1, [r1]\n    add r0, sp, #0\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_02229F04\n    bl Heap_Free\n    add r0, sp, #0\n    ldrh r0, [r0, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl ov80_0222A30C\n    add sp, #0x30\n    pop {r4, pc}"
    );
    #endif
}

void ov80_022347A8(void) {
    /* Original at 0x022347A8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r2, [r0, #0x11]\n    mov r0, #7\n    mul r0, r1\n    add r0, r2, r0\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr"
    );
    #endif
}

void ov80_022347B8(void) {
    ov80_02234588();
}

void ov80_022347C4(void) {
    /* Original at 0x022347C4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    mov r2, #1\n    add r1, #0x2f\n    strb r2, [r1]\n    ldrh r1, [r0, #0x1a]\n    cmp r1, #8\n    bhs _022347D6\n    add r1, r1, #1\n    strh r1, [r0, #0x1a]\n    ldr r3, _022347E0 ; =ov80_02234588\n    mov r1, #0\n    strb r1, [r0, #0x11]\n    bx r3\n    nop\n    _022347E0: .word ov80_02234588"
    );
    #endif
}

void BattleArcade_SetPartyBeforeBattle(void) {
    ov80_022383C0();
}

void BattleArcade_SetPartyAfterBattle(void) {
    /* Original at 0x022347EC */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    ldrb r4, [r5, #0x11]\n    bl BattleArcade_GetOpponentMonCount\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl BattleArcade_MultiplayerCheck\n    mov r3, #0x33\n    lsl r3, r3, #4\n    add r1, r5, r3\n    str r1, [sp]\n    add r1, r3, #0\n    sub r1, #0x14\n    add r1, r5, r1\n    str r1, [sp, #4]\n    add r1, r3, #0\n    sub r1, #0x10\n    add r1, r5, r1\n    add r2, r4, #7\n    str r1, [sp, #8]\n    lsl r0, r0, #0x18\n    lsl r1, r4, #1\n    lsl r2, r2, #1\n    lsr r0, r0, #0x18\n    add r1, r5, r1\n    add r2, r5, r2\n    str r0, [sp, #0xc]\n    add r1, #0x78\n    add r2, #0x78\n    sub r3, #0x1c\n    ldrh r1, [r1]\n    ldrh r2, [r2]\n    add r0, r6, #0\n    add r3, r5, r3\n    bl ov80_0222A6B8\n    add r0, r5, #0\n    bl ov80_022383C0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void BattleArcade_GetWonBattlePoints(void) {
    /* Original at 0x02234848 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldrb r0, [r6, #0x10]\n    mov r4, #0\n    add r7, r1, #0\n    str r2, [sp]\n    add r1, r4, #0\n    add r5, r3, #0\n    bl BattleArcade_GetMonCount\n    add r3, r0, #0\n    ldr r2, [sp]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov80_02234894\n    ldr r2, _0223488C ; =ov80_0223BE9E\n    add r4, r4, r0\n    mov r1, #0\n    ldrb r0, [r2]\n    cmp r5, r0\n    bge _0223487E\n    ldr r0, _02234890 ; =ov80_0223BE9F\n    lsl r1, r1, #1\n    ldrb r0, [r0, r1]\n    add r4, r4, r0\n    b _02234886\n    add r1, r1, #1\n    add r2, r2, #2\n    cmp r1, #5\n    blt _0223486E\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223488C: .word ov80_0223BE9E\n    _02234890: .word ov80_0223BE9F"
    );
    #endif
}

void ov80_02234894(void) {
    /* Original at 0x02234894 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r3, [sp, #0xc]\n    str r0, [sp]\n    mov r4, #0\n    ldr r0, [sp, #0xc]\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    add r5, r4, #0\n    add r6, r4, #0\n    cmp r0, #0\n    ble _022348F2\n    ldr r0, [sp, #4]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xac\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _022348EA\n    add r0, r7, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _022348D6\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r7, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _022348EA\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [sp, #0xc]\n    add r6, r6, #1\n    cmp r6, r0\n    blt _022348AC\n    ldr r0, [sp]\n    ldrb r0, [r0, #0x10]\n    bl BattleArcade_MultiplayerCheck\n    cmp r0, #1\n    bne _0223494C\n    ldr r0, [sp, #0xc]\n    mov r6, #0\n    cmp r0, #0\n    ble _0223494C\n    ldr r0, [sp, #8]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xac\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02234944\n    add r0, r7, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _02234930\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r7, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02234944\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [sp, #0xc]\n    add r6, r6, #1\n    cmp r6, r0\n    blt _02234906\n    ldr r0, _02234960 ; =ov80_0223BE90\n    ldrb r1, [r0, r5]\n    mov r0, #0\n    add r1, r0, r1\n    ldr r0, _02234964 ; =ov80_0223BE88\n    ldrb r0, [r0, r4]\n    add r0, r1, r0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02234960: .word ov80_0223BE90\n    _02234964: .word ov80_0223BE88"
    );
    #endif
}

void ov80_02234968(void) {
    /* Original at 0x02234968 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldrb r0, [r5, #0x13]\n    add r4, r1, #0\n    cmp r0, #0x20\n    beq _02234A1E\n    mov r0, #0xb7\n    mov r1, #0x65\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r1, #0x65\n    str r1, [sp, #0xc]\n    ldrb r2, [r5, #0x13]\n    mov r1, #6\n    add r6, r0, #0\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _02234A2C ; =ov80_0223BF5A\n    ldr r2, [r4]\n    ldrh r1, [r1, r3]\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x65\n    str r0, [sp, #0xc]\n    ldrb r2, [r5, #0x13]\n    mov r1, #6\n    add r0, r6, #0\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _02234A30 ; =ov80_0223BF5C\n    ldr r2, [r4]\n    ldrh r1, [r1, r3]\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldrb r2, [r5, #0x13]\n    mov r1, #6\n    add r0, r6, #0\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, _02234A34 ; =ov80_0223BF5E\n    add r2, sp, #0x10\n    ldrh r1, [r1, r3]\n    mov r3, #0x65\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    ldr r1, [sp, #0x10]\n    add r5, r0, #0\n    ldr r0, [r1, #0xc]\n    ldr r1, [r1, #8]\n    bl DC_FlushRange\n    bl GX_BeginLoadBGExtPltt\n    ldr r0, [sp, #0x10]\n    mov r1, #1\n    lsl r1, r1, #0xe\n    ldr r0, [r0, #0xc]\n    lsr r2, r1, #1\n    bl GX_LoadBGExtPltt\n    bl GX_EndLoadBGExtPltt\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, [r4]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02234A2C: .word ov80_0223BF5A\n    _02234A30: .word ov80_0223BF5C\n    _02234A34: .word ov80_0223BF5E"
    );
    #endif
}

void ov80_02234A38(void) {
    /* Original at 0x02234A38 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    mov r0, #0xb7\n    mov r1, #0x65\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    mov r1, #1\n    str r1, [sp, #8]\n    mov r1, #0x65\n    str r1, [sp, #0xc]\n    ldr r2, [r5]\n    mov r1, #0x39\n    mov r3, #3\n    add r4, r0, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r0, [r5]\n    mov r1, #3\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_02234A74(void) {
    /* Original at 0x02234A74 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp, #4]\n    ldrb r0, [r0, #0x10]\n    str r1, [sp, #8]\n    mov r1, #1\n    add r4, r2, #0\n    bl BattleArcade_GetMonCount\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    mov r1, #1\n    ldrb r0, [r0, #0x10]\n    bl BattleArcade_GetOpponentMonCount\n    str r0, [sp, #0xc]\n    cmp r4, #0\n    bne _02234AD8\n    mov r4, #0\n    cmp r7, #0\n    ble _02234B18\n    ldr r5, _02234B1C ; =ov80_0223BEB8\n    ldr r6, [sp, #4]\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    ldr r0, [r0, #0x70]\n    bl Party_GetMonByIndex\n    add r1, r0, #0\n    mov r0, #2\n    ldrsh r0, [r5, r0]\n    mov r3, #0\n    add r2, r4, #0\n    str r0, [sp]\n    ldrsh r3, [r5, r3]\n    ldr r0, [sp, #8]\n    bl ov80_0222F29C\n    str r0, [r6, #0x30]\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetAnimActiveFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    add r6, r6, #4\n    cmp r4, r7\n    blt _02234AA2\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r6, #0\n    cmp r0, #0\n    ble _02234B18\n    ldr r4, _02234B20 ; =ov80_0223BEC8\n    ldr r5, [sp, #4]\n    ldr r0, [sp, #4]\n    add r1, r6, #0\n    ldr r0, [r0, #0x74]\n    bl Party_GetMonByIndex\n    add r1, r0, #0\n    mov r0, #2\n    ldrsh r0, [r4, r0]\n    mov r3, #0\n    add r2, r7, #0\n    str r0, [sp]\n    ldrsh r3, [r4, r3]\n    ldr r0, [sp, #8]\n    bl ov80_0222F29C\n    str r0, [r5, #0x40]\n    ldr r0, [r0]\n    mov r1, #0\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, [sp, #0xc]\n    add r6, r6, #1\n    add r4, r4, #4\n    add r7, r7, #1\n    add r5, r5, #4\n    cmp r6, r0\n    blt _02234AE2\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02234B1C: .word ov80_0223BEB8\n    _02234B20: .word ov80_0223BEC8"
    );
    #endif
}

void ov80_02234B24(void) {
    /* Original at 0x02234B24 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x10]\n    add r7, r1, #0\n    mov r1, #1\n    add r6, r2, #0\n    bl BattleArcade_GetMonCount\n    add r4, r0, #0\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    bl BattleArcade_GetOpponentMonCount\n    str r0, [sp]\n    cmp r6, #0\n    bne _02234B5E\n    mov r6, #0\n    cmp r4, #0\n    ble _02234B7A\n    ldr r1, [r5, #0x30]\n    add r0, r7, #0\n    add r2, r6, #0\n    bl ov80_0222F324\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, r4\n    blt _02234B4A\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r6, #0\n    cmp r0, #0\n    ble _02234B7A\n    ldr r1, [r5, #0x40]\n    add r0, r7, #0\n    add r2, r4, #0\n    bl ov80_0222F324\n    ldr r0, [sp]\n    add r6, r6, #1\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r6, r0\n    blt _02234B64\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02234B7C(void) {
    /* Original at 0x02234B7C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    add r6, r2, #0\n    add r4, r3, #0\n    bl BattleArcade_GetMonCount\n    cmp r4, r0\n    bge _02234BB2\n    cmp r6, #1\n    bne _02234BA4\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x30]\n    mov r1, #1\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    pop {r4, r5, r6, pc}\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x30]\n    mov r1, #0\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_02234BB4(void) {
    /* Original at 0x02234BB4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    add r6, r2, #0\n    add r4, r3, #0\n    bl BattleArcade_GetOpponentMonCount\n    cmp r4, r0\n    bge _02234BEA\n    cmp r6, #1\n    bne _02234BDC\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x40]\n    mov r1, #1\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    pop {r4, r5, r6, pc}\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x40]\n    mov r1, #0\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_02234BEC(void) {
    /* Original at 0x02234BEC */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    ldrb r0, [r7, #0x10]\n    str r1, [sp]\n    mov r1, #1\n    add r4, r2, #0\n    bl BattleArcade_GetMonCount\n    str r0, [sp, #8]\n    ldrb r0, [r7, #0x10]\n    mov r1, #1\n    bl BattleArcade_GetOpponentMonCount\n    str r0, [sp, #4]\n    cmp r4, #0\n    bne _02234C5C\n    ldr r0, [sp, #8]\n    mov r6, #0\n    cmp r0, #0\n    ble _02234CA4\n    ldr r4, _02234CA8 ; =ov80_0223BEB8\n    add r5, r7, #0\n    mov r1, #0\n    mov r2, #2\n    ldrsh r1, [r4, r1]\n    ldrsh r2, [r4, r2]\n    ldr r0, [sp]\n    add r1, #8\n    add r2, r2, #4\n    bl ov80_0222F3FC\n    str r0, [r5, #0x50]\n    ldr r0, [r7, #0x70]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _02234C4C\n    ldr r0, [r5, #0x50]\n    mov r1, #0\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, [sp, #8]\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, r0\n    blt _02234C1A\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r6, #0\n    cmp r0, #0\n    ble _02234CA4\n    ldr r4, _02234CAC ; =ov80_0223BEC8\n    add r5, r7, #0\n    mov r1, #0\n    mov r2, #2\n    ldrsh r1, [r4, r1]\n    ldrsh r2, [r4, r2]\n    ldr r0, [sp]\n    add r1, #8\n    add r2, r2, #4\n    bl ov80_0222F3FC\n    str r0, [r5, #0x60]\n    ldr r0, [r7, #0x74]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _02234C98\n    ldr r0, [r5, #0x60]\n    mov r1, #0\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, [sp, #4]\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, r0\n    blt _02234C66\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02234CA8: .word ov80_0223BEB8\n    _02234CAC: .word ov80_0223BEC8"
    );
    #endif
}

void ov80_02234CB0(void) {
    /* Original at 0x02234CB0 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x10]\n    add r4, r1, #0\n    mov r1, #1\n    add r6, r2, #0\n    bl BattleArcade_GetMonCount\n    str r0, [sp]\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    bl BattleArcade_GetOpponentMonCount\n    add r7, r0, #0\n    cmp r6, #0\n    bne _02234CEC\n    ldr r0, [sp]\n    mov r6, #0\n    cmp r0, #0\n    ble _02234D02\n    ldr r1, [r5, #0x50]\n    add r0, r4, #0\n    bl ov80_0222F440\n    ldr r0, [sp]\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, r0\n    blt _02234CD8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r6, #0\n    cmp r7, #0\n    ble _02234D02\n    ldr r1, [r5, #0x60]\n    add r0, r4, #0\n    bl ov80_0222F440\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, r7\n    blt _02234CF2\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02234D04(void) {
    /* Original at 0x02234D04 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    add r6, r2, #0\n    add r4, r3, #0\n    bl BattleArcade_GetMonCount\n    add r7, r0, #0\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    bl BattleArcade_GetOpponentMonCount\n    cmp r6, #0\n    bne _02234D72\n    cmp r4, r7\n    bge _02234DC0\n    ldr r0, [r5, #0x70]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #8\n    ldrh r1, [r1, #0x10]\n    cmp r1, #1\n    bne _02234D62\n    cmp r0, #0\n    bne _02234D52\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x50]\n    mov r1, #0\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x50]\n    mov r1, #1\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x50]\n    mov r1, #0\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, r0\n    bge _02234DC0\n    ldr r0, [r5, #0x74]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #8\n    ldrh r1, [r1, #0x10]\n    cmp r1, #1\n    bne _02234DB2\n    cmp r0, #0\n    bne _02234DA2\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x60]\n    mov r1, #0\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x60]\n    mov r1, #1\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x60]\n    mov r1, #0\n    ldr r0, [r0]\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02234DC4(void) {
    /* Original at 0x02234DC4 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    cmp r1, #0\n    bne _02234DD6\n    mov r5, #0x1e\n    mov r6, #0xa2\n    lsl r5, r5, #4\n    b _02234DDC\n    mov r6, #0xa1\n    add r5, r6, #0\n    add r5, #0x7f\n    mov r1, #2\n    mov r0, #0x65\n    lsl r1, r1, #0xc\n    bl Heap_Alloc\n    mov r2, #2\n    mov r1, #0\n    lsl r2, r2, #0xc\n    add r4, r0, #0\n    bl memset\n    mov r0, #0xb7\n    mov r1, #0x65\n    bl NARC_New\n    add r1, r6, #0\n    add r2, sp, #8\n    mov r3, #0x65\n    str r0, [sp, #4]\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    mov r2, #1\n    ldr r0, [r0, #0xc]\n    add r1, r4, #0\n    lsl r2, r2, #0xc\n    add r3, r7, #0\n    bl BlendPalette\n    mov r1, #2\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl DC_FlushRange\n    bl GX_BeginLoadBGExtPltt\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    add r2, r5, #0\n    bl GX_LoadBGExtPltt\n    bl GX_EndLoadBGExtPltt\n    ldr r0, [sp, #4]\n    bl NARC_Delete\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02234E50(void) {
    /* Original at 0x02234E50 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #5\n    bhi _02234E94\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02234E62: ; jump table\n    bl ov80_0222BA7C\n    pop {r3, pc}\n    bl ov80_0222BAE0\n    pop {r3, pc}\n    bl ov80_0222BB54\n    pop {r3, pc}\n    add r1, r2, #0\n    bl ov80_0222BC48\n    pop {r3, pc}\n    add r1, r2, #0\n    bl ov80_0222BC94\n    pop {r3, pc}\n    bl ov80_0222BCE0\n    pop {r3, pc}"
    );
    #endif
}

void ov80_02234E98(void) {
    /* Original at 0x02234E98 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    cmp r6, #9\n    bhs _02234EAE\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    ldr r4, [r5, #0x74]\n    bl BattleArcade_GetOpponentMonCount\n    b _02234EB8\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    ldr r4, [r5, #0x70]\n    bl BattleArcade_GetMonCount\n    ldr r3, _02234EC8 ; =ov80_0223DCB8\n    add r1, r4, #0\n    lsl r4, r6, #2\n    add r2, r0, #0\n    ldr r3, [r3, r4]\n    add r0, r5, #0\n    blx r3\n    pop {r4, r5, r6, pc}\n    _02234EC8: .word ov80_0223DCB8"
    );
    #endif
}

void ov80_02234ECC(void) {
    /* Original at 0x02234ECC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r2, #0\n    mov r5, #0\n    str r1, [sp]\n    cmp r7, #0\n    ble _02234F1C\n    ldr r0, [sp]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xa4\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    add r4, r0, #0\n    bl _dfltu\n    add r2, r0, #0\n    add r3, r1, #0\n    ldr r0, _02234F20 ; =0x33333333\n    ldr r1, _02234F24 ; =0x3FF33333\n    bl _dmul\n    bl _dfixu\n    str r0, [sp, #4]\n    sub r0, r0, r4\n    str r0, [sp, #4]\n    sub r0, r4, r0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r1, #0xa3\n    add r2, sp, #4\n    bl SetMonData\n    add r5, r5, #1\n    cmp r5, r7\n    blt _02234EDA\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02234F20: .word 0x33333333\n    _02234F24: .word 0x3FF33333"
    );
    #endif
}

void ov80_02234F28(void) {
    /* Original at 0x02234F28 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r2, [sp, #8]\n    str r0, [sp]\n    mov r5, #0\n    ldr r0, [sp, #8]\n    str r1, [sp, #4]\n    str r5, [sp, #0xc]\n    cmp r0, #0\n    ble _02234F98\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    add r4, r0, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    cmp r6, #3\n    beq _02234F7A\n    cmp r7, #3\n    beq _02234F7A\n    cmp r6, #8\n    beq _02234F7A\n    cmp r7, #8\n    beq _02234F7A\n    cmp r0, #0x11\n    bne _02234F82\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    b _02234F90\n    mov r0, #8\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    mov r1, #0xa0\n    add r2, sp, #0x10\n    bl SetMonData\n    ldr r0, [sp, #8]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _02234F3C\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #8]\n    cmp r1, r0\n    blt _02234FA6\n    ldr r0, [sp]\n    mov r1, #1\n    strb r1, [r0, #0x1f]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02234FAC(void) {
    /* Original at 0x02234FAC */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r2, [sp, #8]\n    str r0, [sp]\n    mov r6, #0\n    ldr r0, [sp, #8]\n    add r5, r6, #0\n    str r1, [sp, #4]\n    cmp r0, #0\n    ble _02235012\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    add r4, r0, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    add r0, r4, #0\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    cmp r7, #4\n    beq _02234FF8\n    ldr r1, [sp, #0xc]\n    cmp r1, #4\n    beq _02234FF8\n    cmp r0, #7\n    bne _02234FFC\n    add r6, r6, #1\n    b _0223500A\n    mov r0, #0x40\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    mov r1, #0xa0\n    add r2, sp, #0x10\n    bl SetMonData\n    ldr r0, [sp, #8]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _02234FC0\n    ldr r0, [sp, #8]\n    cmp r6, r0\n    blt _0223501E\n    ldr r0, [sp]\n    mov r1, #1\n    strb r1, [r0, #0x1f]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02235024(void) {
    /* Original at 0x02235024 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r2, [sp, #8]\n    str r0, [sp]\n    mov r6, #0\n    ldr r0, [sp, #8]\n    add r5, r6, #0\n    str r1, [sp, #4]\n    cmp r0, #0\n    ble _0223508A\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    add r4, r0, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    add r0, r4, #0\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    cmp r7, #0xa\n    beq _02235070\n    ldr r1, [sp, #0xc]\n    cmp r1, #0xa\n    beq _02235070\n    cmp r0, #0x29\n    bne _02235074\n    add r6, r6, #1\n    b _02235082\n    mov r0, #0x10\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    mov r1, #0xa0\n    add r2, sp, #0x10\n    bl SetMonData\n    ldr r0, [sp, #8]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _02235038\n    ldr r0, [sp, #8]\n    cmp r6, r0\n    blt _02235096\n    ldr r0, [sp]\n    mov r1, #1\n    strb r1, [r0, #0x1f]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0223509C(void) {
    /* Original at 0x0223509C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    ldrh r0, [r0, #0x20]\n    add r5, r2, #0\n    str r1, [sp, #4]\n    add r1, r5, #0\n    mov r6, #0\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r4, r0, #0x18\n    add r7, r6, #0\n    cmp r5, #0\n    ble _0223510A\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xa\n    mov r2, #0\n    str r0, [sp, #8]\n    bl GetMonData\n    cmp r0, #0xf\n    beq _022350D4\n    cmp r0, #0x48\n    bne _022350E4\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r6, r6, #1\n    cmp r4, r5\n    blo _02235104\n    mov r4, #0\n    b _02235104\n    bl LCRandom\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    add r0, r0, #2\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    mov r1, #0xa0\n    add r2, sp, #0xc\n    bl SetMonData\n    b _0223510A\n    add r7, r7, #1\n    cmp r7, r5\n    blt _022350BA\n    cmp r6, r5\n    blt _02235114\n    ldr r0, [sp]\n    mov r1, #1\n    strb r1, [r0, #0x1f]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02235118(void) {
    /* Original at 0x02235118 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp]\n    ldrh r0, [r0, #0x20]\n    add r6, r2, #0\n    str r1, [sp, #4]\n    add r1, r6, #0\n    mov r7, #0\n    bl _s32_div_f\n    lsl r0, r1, #0x18\n    lsr r5, r0, #0x18\n    add r0, r7, #0\n    str r0, [sp, #8]\n    cmp r6, #0\n    ble _0223519C\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    add r4, r0, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp, #0xc]\n    cmp r1, #0xf\n    beq _02235172\n    ldr r1, [sp, #0x10]\n    cmp r1, #0xf\n    beq _02235172\n    cmp r0, #0x28\n    bne _02235182\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    add r7, r7, #1\n    cmp r5, r6\n    blo _02235192\n    mov r5, #0\n    b _02235192\n    mov r0, #0x20\n    str r0, [sp, #0x14]\n    add r0, r4, #0\n    mov r1, #0xa0\n    add r2, sp, #0x14\n    bl SetMonData\n    b _0223519C\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, r6\n    blt _02235138\n    cmp r7, r6\n    blt _022351A6\n    ldr r0, [sp]\n    mov r1, #1\n    strb r1, [r0, #0x1f]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_022351AC(void) {
    /* Original at 0x022351AC */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r6, r1, #0\n    add r5, r2, #0\n    bl ov80_02238498\n    cmp r0, #3\n    bhs _022351C4\n    ldr r0, _02235204 ; =ov80_0223DCA0\n    mov r1, #8\n    ldr r4, [r0]\n    b _022351D6\n    cmp r0, #6\n    bhs _022351D0\n    ldr r0, _02235204 ; =ov80_0223DCA0\n    mov r1, #0x14\n    ldr r4, [r0, #4]\n    b _022351D6\n    ldr r0, _02235204 ; =ov80_0223DCA0\n    mov r1, #0xa\n    ldr r4, [r0, #8]\n    ldrh r0, [r7, #0x20]\n    bl _s32_div_f\n    lsl r0, r1, #1\n    ldrh r1, [r4, r0]\n    add r0, sp, #0\n    mov r4, #0\n    strh r1, [r0]\n    cmp r5, #0\n    ble _02235202\n    mov r7, #6\n    add r0, r6, #0\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    add r1, r7, #0\n    add r2, sp, #0\n    bl SetMonData\n    add r4, r4, #1\n    cmp r4, r5\n    blt _022351EC\n    pop {r3, r4, r5, r6, r7, pc}\n    _02235204: .word ov80_0223DCA0"
    );
    #endif
}

void ov80_02235208(void) {
    /* Original at 0x02235208 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r6, r1, #0\n    add r5, r2, #0\n    bl ov80_02238498\n    cmp r0, #3\n    bhs _02235220\n    ldr r0, _02235260 ; =ov80_0223DCA0\n    mov r1, #0xb\n    ldr r4, [r0, #0xc]\n    b _02235232\n    cmp r0, #6\n    bhs _0223522C\n    ldr r0, _02235260 ; =ov80_0223DCA0\n    mov r1, #0xd\n    ldr r4, [r0, #0x10]\n    b _02235232\n    ldr r0, _02235260 ; =ov80_0223DCA0\n    mov r1, #0xb\n    ldr r4, [r0, #0x14]\n    ldrh r0, [r7, #0x20]\n    bl _s32_div_f\n    lsl r0, r1, #1\n    ldrh r1, [r4, r0]\n    add r0, sp, #0\n    mov r4, #0\n    strh r1, [r0]\n    cmp r5, #0\n    ble _0223525E\n    mov r7, #6\n    add r0, r6, #0\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    add r1, r7, #0\n    add r2, sp, #0\n    bl SetMonData\n    add r4, r4, #1\n    cmp r4, r5\n    blt _02235248\n    pop {r3, r4, r5, r6, r7, pc}\n    _02235260: .word ov80_0223DCA0"
    );
    #endif
}

void ov80_02235264(void) {
    /* Original at 0x02235264 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r2, #0\n    mov r4, #0\n    str r1, [sp]\n    cmp r7, #0\n    ble _022352B8\n    ldr r0, [sp]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xa1\n    mov r2, #0\n    add r5, r0, #0\n    bl GetMonData\n    add r6, r0, #3\n    cmp r6, #0x64\n    bls _02235290\n    bl GF_AssertFail\n    mov r6, #0x64\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r1, r6, #0\n    bl GetMonExpBySpeciesAndLevel\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #8\n    add r2, sp, #4\n    bl SetMonData\n    add r0, r5, #0\n    bl CalcMonLevelAndStats\n    add r4, r4, #1\n    cmp r4, r7\n    blt _02235272\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_022352BC(void) {
    /* Original at 0x022352BC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _022352C4 ; =0x000003E9\n    str r1, [r0, #0x14]\n    bx lr\n    nop\n    _022352C4: .word 0x000003E9"
    );
    #endif
}

void ov80_022352C8(void) {
    /* Original at 0x022352C8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    str r1, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov80_022352D0(void) {
    /* Original at 0x022352D0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #7\n    str r1, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov80_022352D8(void) {
    /* Original at 0x022352D8 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #4\n    str r1, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov80_022352E0(void) {
    /* Original at 0x022352E0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #9\n    str r1, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov80_022352E8(void) {
    /* Original at 0x022352E8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _022352F0 ; =0x000003EA\n    str r1, [r0, #0x14]\n    bx lr\n    nop\n    _022352F0: .word 0x000003EA"
    );
    #endif
}

void ov80_022352F4(void) {
    /* Original at 0x022352F4 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #0x1c]\n    cmp r1, #7\n    bhs _022352FE\n    add r1, r1, #1\n    strb r1, [r0, #0x1c]\n    bx lr"
    );
    #endif
}

void ov80_02235300(void) {
    /* Original at 0x02235300 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #0x1c]\n    cmp r1, #0\n    beq _0223530A\n    sub r1, r1, #1\n    strb r1, [r0, #0x1c]\n    bx lr"
    );
    #endif
}

void ov80_0223530C(void) {
    /* Original at 0x0223530C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    strb r1, [r0, #0x12]\n    bx lr"
    );
    #endif
}

void ov80_02235314(void) {
    /* Original at 0x02235314 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov80_02235318(void) {
    /* Original at 0x02235318 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov80_0223531C(void) {
    /* Original at 0x0223531C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov80_02235320(void) {
    /* Original at 0x02235320 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov80_02235324(void) {
    /* Original at 0x02235324 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r3, [r0, #0x10]\n    ldrh r2, [r0, #0x1a]\n    cmp r3, #1\n    bhi _0223533A\n    cmp r2, #8\n    blo _02235334\n    mov r1, #6\n    b _02235346\n    ldr r1, _0223535C ; =ov80_0223C01C\n    ldrb r1, [r1, r2]\n    b _02235346\n    cmp r2, #8\n    blo _02235342\n    mov r1, #0x11\n    b _02235346\n    ldr r1, _02235360 ; =ov80_0223C028\n    ldrb r1, [r1, r2]\n    cmp r3, #0\n    bne _02235356\n    ldrh r0, [r0, #0x18]\n    cmp r0, #0x15\n    beq _02235354\n    cmp r0, #0x31\n    bne _02235356\n    mov r1, #0x14\n    add r0, r1, #0\n    bx lr\n    nop\n    _0223535C: .word ov80_0223C01C\n    _02235360: .word ov80_0223C028"
    );
    #endif
}

void ov80_02235364(void) {
    /* Original at 0x02235364 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r1, r2, #0\n    add r4, r3, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #0\n    strh r0, [r1]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #6\n    add r2, sp, #0\n    bl SetMonData\n    pop {r3, r4, r5, pc}"
    );
    #endif
}
