/* Decompiled from asm/overlay_80_02237A70.s */
#include "global.h"

void ov80_02237A70(void) {
    /* Original at 0x02237A70 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    cmp r0, #0\n    bne _02237A8E\n    mov r0, #7\n    add r3, r2, #1\n    mul r0, r1\n    add r0, r3, r0\n    cmp r0, #0x15\n    bne _02237A86\n    ldr r0, _02237AC4 ; =0x00000139\n    pop {r3, r4, r5, pc}\n    cmp r0, #0x31\n    bne _02237A8E\n    ldr r0, _02237AC8 ; =0x0000013A\n    pop {r3, r4, r5, pc}\n    cmp r1, #8\n    blo _02237A94\n    mov r1, #7\n    cmp r2, #6\n    beq _02237A9C\n    cmp r2, #0xd\n    bne _02237AAA\n    ldr r0, _02237ACC ; =ov80_0223D4D8\n    lsl r1, r1, #3\n    ldrh r4, [r0, r1]\n    ldr r0, _02237AD0 ; =ov80_0223D4DA\n    ldrh r0, [r0, r1]\n    sub r5, r0, r4\n    b _02237AB6\n    ldr r0, _02237AD4 ; =ov80_0223D4D4\n    lsl r1, r1, #3\n    ldrh r4, [r0, r1]\n    ldr r0, _02237AD8 ; =ov80_0223D4D6\n    ldrh r0, [r0, r1]\n    sub r5, r0, r4\n    bl LCRandom\n    add r1, r5, #0\n    bl _s32_div_f\n    add r0, r4, r1\n    pop {r3, r4, r5, pc}\n    _02237AC4: .word 0x00000139\n    _02237AC8: .word 0x0000013A\n    _02237ACC: .word ov80_0223D4D8\n    _02237AD0: .word ov80_0223D4DA\n    _02237AD4: .word ov80_0223D4D4\n    _02237AD8: .word ov80_0223D4D6"
    );
    #endif
}

void ov80_02237ADC(void) {
    /* Original at 0x02237ADC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r2, #0\n    str r0, [sp]\n    str r1, [sp, #4]\n    add r7, r3, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    add r2, r4, #0\n    bl ov80_02237A70\n    mov r1, #0\n    strh r0, [r5]\n    cmp r4, #0\n    ble _02237B12\n    lsl r0, r4, #1\n    ldrh r3, [r6, r0]\n    add r2, r6, #0\n    ldrh r0, [r2]\n    cmp r0, r3\n    beq _02237B12\n    add r1, r1, #1\n    add r2, r2, #2\n    cmp r1, r4\n    blt _02237B04\n    cmp r1, r4\n    bne _02237B1A\n    add r5, r5, #2\n    add r4, r4, #1\n    cmp r4, r7\n    blt _02237AEC\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02237B24(void) {
    /* Original at 0x02237B24 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #3\n    bhi _02237B4E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02237B36: ; jump table\n    mov r0, #3\n    pop {r3, pc}\n    cmp r1, #0\n    bne _02237B4A\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #4\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #3\n    pop {r3, pc}"
    );
    #endif
}

void ov80_02237B58(void) {
    /* Original at 0x02237B58 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #3\n    bhi _02237B82\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02237B6A: ; jump table\n    mov r0, #3\n    pop {r3, pc}\n    cmp r1, #0\n    bne _02237B7E\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #4\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #3\n    pop {r3, pc}"
    );
    #endif
}

void ov80_02237B8C(void) {
    /* Original at 0x02237B8C */
    /* Requires manual decompilation - 192 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x48\n    add r5, r0, #0\n    ldrb r0, [r5, #0x10]\n    add r6, r1, #0\n    mov r1, #0\n    bl ov80_02237B24\n    str r0, [sp, #0x10]\n    ldrb r0, [r5, #0x10]\n    mov r1, #0\n    bl ov80_02237B58\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x2c]\n    bl HealParty\n    ldrb r0, [r5, #0x10]\n    bl ov80_02237D5C\n    add r1, r0, #0\n    mov r0, #0xb\n    bl BattleSetup_New\n    ldr r1, [r6, #0xc]\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, [r6, #0x1c]\n    str r1, [sp, #4]\n    ldr r2, [r6, #8]\n    ldr r3, [r6, #0x18]\n    mov r1, #0\n    bl sub_02051D18\n    mov r0, #0x53\n    mov r1, #0x15\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, [r4, #4]\n    ldr r1, [sp, #0x10]\n    bl Party_InitWithMaxSize\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02237BF0\n    mov r6, #0\n    b _02237BF2\n    mov r6, #2\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r7, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    ble _02237C2A\n    ldr r0, [r5, #0x28]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    add r1, r7, #0\n    bl CopyPokemonToPokemon\n    add r0, r4, #0\n    add r1, r7, #0\n    mov r2, #0\n    bl BattleSetup_AddMonToParty\n    ldr r0, [sp, #0x14]\n    add r6, r6, #1\n    add r1, r0, #1\n    ldr r0, [sp, #0x10]\n    str r1, [sp, #0x14]\n    cmp r1, r0\n    blt _02237C04\n    add r0, r7, #0\n    bl Heap_Free\n    add r0, r4, #0\n    bl BattleSetup_SetAllySideBattlersToPlayer\n    ldrb r1, [r5, #0x11]\n    add r0, sp, #0x18\n    mov r2, #0xb\n    lsl r1, r1, #1\n    add r1, r5, r1\n    ldrh r1, [r1, #0x30]\n    mov r3, #0xcc\n    bl ov80_02229F04\n    bl Heap_Free\n    mov r0, #0xb\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    add r0, r4, #0\n    add r1, sp, #0x18\n    mov r3, #1\n    bl ov80_0222A480\n    ldrb r0, [r5, #0x10]\n    mov r1, #0\n    bl ov80_02237B58\n    add r1, r0, #0\n    ldr r0, [r4, #8]\n    bl Party_InitWithMaxSize\n    mov r7, #0\n    add r6, r4, #0\n    add r0, r5, #0\n    bl ov80_02237E88\n    str r0, [r6, #0x34]\n    add r7, r7, #1\n    add r6, #0x34\n    cmp r7, #4\n    blt _02237C70\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r7, r0, #0\n    ldr r0, [sp, #0xc]\n    mov r6, #0\n    cmp r0, #0\n    ble _02237CB0\n    ldr r0, [r5, #0x2c]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    add r1, r7, #0\n    bl CopyPokemonToPokemon\n    add r0, r4, #0\n    add r1, r7, #0\n    mov r2, #1\n    bl BattleSetup_AddMonToParty\n    ldr r0, [sp, #0xc]\n    add r6, r6, #1\n    cmp r6, r0\n    blt _02237C90\n    add r0, r7, #0\n    bl Heap_Free\n    ldrb r0, [r5, #0x10]\n    cmp r0, #2\n    beq _02237CC0\n    cmp r0, #3\n    bne _02237D54\n    add r0, r4, #0\n    bl BattleSetup_SetAllySideBattlersToPlayer\n    bl sub_0203769C\n    mov r1, #1\n    sub r0, r1, r0\n    bl sub_02034818\n    mov r1, #1\n    lsl r1, r1, #8\n    ldr r1, [r4, r1]\n    bl PlayerProfile_Copy\n    ldrb r1, [r5, #0x11]\n    add r0, sp, #0x18\n    mov r2, #0xb\n    add r1, r1, #7\n    lsl r1, r1, #1\n    add r1, r5, r1\n    ldrh r1, [r1, #0x30]\n    mov r3, #0xcc\n    bl ov80_02229F04\n    bl Heap_Free\n    mov r0, #0xb\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    add r0, r4, #0\n    add r1, sp, #0x18\n    mov r3, #3\n    bl ov80_0222A480\n    ldrb r0, [r5, #0x10]\n    mov r1, #0\n    bl ov80_02237B58\n    add r1, r0, #0\n    ldr r0, [r4, #0x10]\n    bl Party_InitWithMaxSize\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r7, r0, #0\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    ble _02237D4E\n    add r6, r0, #0\n    ldr r0, [r5, #0x2c]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    add r1, r7, #0\n    bl CopyPokemonToPokemon\n    add r0, r4, #0\n    add r1, r7, #0\n    mov r2, #3\n    bl BattleSetup_AddMonToParty\n    ldr r0, [sp, #8]\n    add r6, r6, #1\n    add r1, r0, #1\n    ldr r0, [sp, #0xc]\n    str r1, [sp, #8]\n    cmp r1, r0\n    blt _02237D28\n    add r0, r7, #0\n    bl Heap_Free\n    add r0, r4, #0\n    add sp, #0x48\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02237D5C(void) {
    /* Original at 0x02237D5C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #3\n    bhi _02237D84\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02237D6C: ; jump table\n    mov r0, #0x81\n    bx lr\n    mov r0, #0x83\n    bx lr\n    mov r0, #0x8f\n    bx lr\n    mov r0, #0x8f\n    bx lr\n    mov r0, #0x81\n    bx lr"
    );
    #endif
}

u8 ov80_02237D88(void) {
    return 0x32;
}

void ov80_02237D8C(void) {
    /* Original at 0x02237D8C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #2\n    beq _02237D94\n    cmp r0, #3\n    bne _02237D98\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov80_02237D9C(void) {
    /* Original at 0x02237D9C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    bl Party_GetCount\n    add r6, r0, #0\n    mov r4, #0\n    cmp r6, #0\n    ble _02237DF2\n    add r0, r7, #0\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xac\n    mov r2, #0\n    add r5, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02237DEC\n    add r0, r5, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _02237DDE\n    mov r0, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0xa3\n    add r2, sp, #0\n    bl SetMonData\n    mov r0, #0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0xa0\n    add r2, sp, #0\n    bl SetMonData\n    add r4, r4, #1\n    cmp r4, r6\n    blt _02237DAC\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02237DF4(void) {
    /* Original at 0x02237DF4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r0, [r0, #4]\n    add r4, r1, #0\n    bl Save_PlayerData_GetProfile\n    mov r3, #0\n    add r1, r0, #0\n    str r3, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #4\n    bl sub_0207217C\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov80_02237E18(void) {
    ov80_02237DF4(r2);
    Party_AddMon(r5, r4);
}

void ov80_02237E30(void) {
    /* Original at 0x02237E30 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x2c]\n    bl SaveArray_Party_Init\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    bl ov80_02237B58\n    str r0, [sp]\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    ldr r0, [sp]\n    mov r7, #0\n    cmp r0, #0\n    ble _02237E7E\n    mov r0, #0xa2\n    lsl r0, r0, #2\n    add r4, r5, r0\n    add r0, r5, #0\n    bl ov80_02237D88\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov80_0222A140\n    ldr r1, [r5, #0x2c]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl ov80_02237E18\n    ldr r0, [sp]\n    add r7, r7, #1\n    add r4, #0x38\n    cmp r7, r0\n    blt _02237E5A\n    add r0, r6, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02237E88(void) {
    /* Original at 0x02237E88 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrb r1, [r0, #0x10]\n    cmp r1, #0\n    bne _02237EA8\n    ldrb r1, [r0, #0x11]\n    lsl r1, r1, #1\n    add r1, r0, r1\n    ldrh r2, [r1, #0x30]\n    ldr r1, _02237ED4 ; =0x0000FEC7\n    add r1, r2, r1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    cmp r1, #1\n    bhi _02237EA8\n    mov r0, #7\n    pop {r3, pc}\n    bl ov80_02237ED8\n    add r0, r0, #1\n    mov r1, #7\n    cmp r0, #4\n    bhi _02237ED0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02237EC0: ; jump table\n    mov r1, #0\n    b _02237ED0\n    mov r1, #1\n    add r0, r1, #0\n    pop {r3, pc}\n    _02237ED4: .word 0x0000FEC7"
    );
    #endif
}

void ov80_02237ED8(void) {
    /* Original at 0x02237ED8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x10]\n    ldrh r4, [r5, #0x16]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02237EF4\n    ldr r0, _02237EF8 ; =0x00000A12\n    ldrh r1, [r5, r0]\n    ldrh r0, [r5, #0x16]\n    cmp r1, r0\n    bls _02237EF4\n    add r4, r1, #0\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _02237EF8: .word 0x00000A12"
    );
    #endif
}

void ov80_02237EFC(void) {
    /* Original at 0x02237EFC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x48\n    add r5, r0, #0\n    add r0, r1, #0\n    add r4, r2, #0\n    bl ov80_02237ED8\n    add r1, r0, #0\n    add r0, sp, #0xc\n    bl ov80_02237F3C\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #3\n    lsl r1, r4, #0x18\n    str r0, [sp, #8]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r2, sp, #0xc\n    mov r3, #0xb\n    bl LoadRectToBgTilemapRect\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x48\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_02237F3C(void) {
    /* Original at 0x02237F3C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    add r0, r1, #0\n    bl ov80_02237F9C\n    mov r3, #0\n    add r4, sp, #4\n    mov r1, #4\n    strb r3, [r4]\n    sub r2, r1, r3\n    strb r2, [r4, #5]\n    add r3, r3, #1\n    add r4, r4, #1\n    cmp r3, #5\n    blo _02237F4E\n    mov r1, #0x60\n    mov r7, #0\n    mul r1, r0\n    mov r5, #1\n    add r1, #0x10\n    add r2, r7, #0\n    lsl r5, r5, #0xa\n    ldr r4, [sp]\n    lsl r6, r2, #1\n    mov r0, #0\n    add r3, sp, #4\n    add r4, r4, r6\n    ldrb r6, [r3]\n    add r6, r6, r1\n    strh r6, [r4]\n    cmp r0, #5\n    blo _02237F84\n    ldrh r6, [r4]\n    orr r6, r5\n    strh r6, [r4]\n    add r0, r0, #1\n    add r3, r3, #1\n    add r4, r4, #2\n    cmp r0, #0xa\n    blo _02237F74\n    add r7, r7, #1\n    add r1, #0x20\n    add r2, #0xa\n    cmp r7, #3\n    blo _02237F6A\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02237F9C(void) {
    /* Original at 0x02237F9C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #8\n    blo _02237FA2\n    mov r0, #7\n    bx lr"
    );
    #endif
}

void ov80_02237FA4(void) {
    /* Original at 0x02237FA4 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r6, r2, #0\n    bl sub_0205C1F0\n    add r7, r0, #0\n    add r0, r4, #0\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    add r3, r6, #0\n    bl sub_02031248\n    add r0, r4, #0\n    bl sub_0205C218\n    add r7, r0, #0\n    add r0, r4, #0\n    bl sub_0205C218\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    add r1, r0, r6\n    ldr r0, _02238030 ; =0x0000270F\n    cmp r1, r0\n    ble _0223800E\n    add r0, r4, #0\n    bl sub_0205C218\n    add r6, r0, #0\n    add r0, r4, #0\n    bl sub_0205C218\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r3, _02238030 ; =0x0000270F\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02031108\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl sub_0205C218\n    add r7, r0, #0\n    add r0, r4, #0\n    bl sub_0205C218\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    add r3, r6, #0\n    bl sub_02031228\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02238030: .word 0x0000270F"
    );
    #endif
}
