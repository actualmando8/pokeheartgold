/* Decompiled from asm/overlay_10_trainer_ai.s */
#include "global.h"

void ov10_0221BF44(void) {
    /* Original at 0x0221BF44 */
    /* Requires manual decompilation - 116 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    add r5, r1, #0\n    bl ov10_0221EE88\n    mov r0, #0x36\n    lsl r0, r0, #4\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    beq _0221BF9A\n    add r6, r0, #0\n    add r4, r0, #5\n    mov r0, #1\n    tst r0, r1\n    beq _0221BF80\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldrb r1, [r5, r0]\n    mov r0, #0x10\n    tst r0, r1\n    bne _0221BF78\n    mov r0, #0xd5\n    mov r1, #0\n    lsl r0, r0, #2\n    strb r1, [r5, r0]\n    ldr r0, [sp]\n    add r1, r5, #0\n    bl ov10_0221C278\n    ldr r0, [r5, r6]\n    mov r1, #0\n    lsr r0, r0, #1\n    str r0, [r5, r6]\n    ldrb r0, [r5, r4]\n    add r0, r0, #1\n    strb r0, [r5, r4]\n    ldr r0, _0221C030 ; =0x00000355\n    strb r1, [r5, r0]\n    add r0, #0xb\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    bne _0221BF5E\n    mov r3, #0xd9\n    lsl r3, r3, #2\n    ldrb r1, [r5, r3]\n    mov r0, #2\n    tst r0, r1\n    beq _0221BFAA\n    mov r0, #4\n    b _0221C01C\n    mov r0, #4\n    tst r0, r1\n    beq _0221BFB4\n    mov r0, #5\n    b _0221C01C\n    add r0, r3, #0\n    sub r0, #0xc\n    ldrsb r0, [r5, r0]\n    add r1, sp, #4\n    mov r4, #1\n    strb r0, [r1, #4]\n    mov r0, #0\n    strb r0, [r1]\n    add r3, #0x6b\n    ldrb r3, [r5, r3]\n    mov r0, #0xc0\n    add r2, r4, #0\n    mul r0, r3\n    add r0, r5, r0\n    add r3, r0, #2\n    ldr r0, _0221C034 ; =0x00002D4C\n    ldrh r0, [r3, r0]\n    cmp r0, #0\n    beq _0221C004\n    mov r0, #0xd6\n    add r6, r5, r2\n    lsl r0, r0, #2\n    ldrsb r6, [r6, r0]\n    ldrb r0, [r1, #4]\n    cmp r0, r6\n    bne _0221BFF8\n    add r0, sp, #8\n    strb r6, [r0, r4]\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    add r7, r4, #0\n    lsr r4, r0, #0x18\n    add r0, sp, #4\n    strb r2, [r0, r7]\n    ldrb r0, [r1, #4]\n    cmp r0, r6\n    bge _0221C004\n    strb r6, [r1, #4]\n    mov r4, #1\n    strb r2, [r1]\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #4\n    blt _0221BFD2\n    ldr r0, [sp]\n    bl BattleSystem_Random\n    add r1, r4, #0\n    bl _s32_div_f\n    add r0, sp, #4\n    ldrb r0, [r0, r1]\n    mov r2, #0x3d\n    lsl r2, r2, #4\n    sub r1, r2, #1\n    ldrb r1, [r5, r1]\n    ldrb r3, [r5, r2]\n    add r2, #0xa\n    add r1, r5, r1\n    strb r3, [r1, r2]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0221C030: .word 0x00000355\n    _0221C034: .word 0x00002D4C"
    );
    #endif
}

void ov10_0221C038(void) {
    /* Original at 0x0221C038 */
    /* Requires manual decompilation - 274 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r7, r0, #0\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, sp, #0x18\n    add r5, r1, #0\n    str r0, [sp, #4]\n    add r0, sp, #0x20\n    str r5, [sp, #8]\n    str r0, [sp]\n    ldr r0, _0221C264 ; =0x000003CF\n    ldrb r2, [r5, r0]\n    ldr r0, [sp, #0xc]\n    cmp r0, r2\n    beq _0221C062\n    ldr r1, _0221C268 ; =0x00002D8C\n    ldr r0, [sp, #8]\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    bne _0221C070\n    mov r1, #0\n    ldr r0, [sp, #4]\n    mvn r1, r1\n    strb r1, [r0]\n    ldr r0, [sp]\n    strh r1, [r0]\n    b _0221C190\n    add r0, r7, #0\n    add r1, r5, #0\n    mov r3, #0xf\n    bl ov10_0221BE20\n    mov r1, #0x3d\n    ldr r0, [sp, #0xc]\n    lsl r1, r1, #4\n    strb r0, [r5, r1]\n    sub r1, r1, #1\n    mov r2, #1\n    ldrb r1, [r5, r1]\n    and r0, r2\n    and r1, r2\n    cmp r0, r1\n    beq _0221C098\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov10_0221EE88\n    ldr r0, _0221C26C ; =0x00000365\n    mov r2, #0\n    add r1, r0, #0\n    strb r2, [r5, r0]\n    sub r1, #0x10\n    strb r2, [r5, r1]\n    sub r0, r0, #5\n    ldr r4, [r5, r0]\n    cmp r4, #0\n    beq _0221C0E2\n    ldr r6, _0221C26C ; =0x00000365\n    mov r0, #1\n    tst r0, r4\n    beq _0221C0D0\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldrb r1, [r5, r0]\n    mov r0, #0x10\n    tst r0, r1\n    bne _0221C0C8\n    mov r0, #0xd5\n    mov r1, #0\n    lsl r0, r0, #2\n    strb r1, [r5, r0]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov10_0221C278\n    ldrb r0, [r5, r6]\n    asr r4, r4, #1\n    mov r1, #0\n    add r0, r0, #1\n    strb r0, [r5, r6]\n    ldr r0, _0221C270 ; =0x00000355\n    cmp r4, #0\n    strb r1, [r5, r0]\n    bne _0221C0AE\n    mov r2, #0xd9\n    lsl r2, r2, #2\n    ldrb r1, [r5, r2]\n    mov r0, #2\n    tst r0, r1\n    beq _0221C0F6\n    ldr r0, [sp, #4]\n    mov r1, #4\n    strb r1, [r0]\n    b _0221C190\n    mov r0, #4\n    tst r0, r1\n    beq _0221C104\n    ldr r0, [sp, #4]\n    mov r1, #5\n    strb r1, [r0]\n    b _0221C190\n    add r0, r2, #0\n    sub r0, #0xc\n    ldrsb r1, [r5, r0]\n    add r0, sp, #0x10\n    add r2, #0x6b\n    strb r1, [r0, #4]\n    mov r1, #0\n    strb r1, [r0]\n    ldrb r3, [r5, r2]\n    mov r2, #0xc0\n    mov r4, #1\n    mul r2, r3\n    add r2, r5, r2\n    add r1, r4, #0\n    add r2, r2, #2\n    ldr r3, _0221C274 ; =0x00002D4C\n    ldrh r3, [r2, r3]\n    cmp r3, #0\n    beq _0221C14E\n    mov r3, #0xd6\n    add r6, r5, r1\n    lsl r3, r3, #2\n    ldrsb r3, [r6, r3]\n    ldrb r6, [r0, #4]\n    cmp r6, r3\n    bne _0221C142\n    add r6, sp, #0x14\n    strb r3, [r6, r4]\n    add r6, sp, #0x10\n    strb r1, [r6, r4]\n    add r4, r4, #1\n    ldrb r6, [r0, #4]\n    cmp r6, r3\n    bge _0221C14E\n    strb r3, [r0, #4]\n    strb r1, [r0]\n    mov r4, #1\n    add r1, r1, #1\n    add r2, r2, #2\n    cmp r1, #4\n    blt _0221C122\n    add r0, r7, #0\n    bl BattleSystem_Random\n    add r1, r4, #0\n    bl _s32_div_f\n    add r0, sp, #0x10\n    ldrb r1, [r0, r1]\n    ldr r0, [sp, #4]\n    strb r1, [r0]\n    add r0, sp, #0x10\n    ldrb r1, [r0, #4]\n    ldr r0, [sp]\n    strh r1, [r0]\n    ldr r0, _0221C264 ; =0x000003CF\n    ldrb r1, [r5, r0]\n    mov r0, #2\n    eor r1, r0\n    ldr r0, [sp, #0xc]\n    cmp r0, r1\n    bne _0221C190\n    ldr r0, [sp]\n    mov r1, #0\n    ldrsh r0, [r0, r1]\n    cmp r0, #0x64\n    bge _0221C190\n    ldr r0, [sp]\n    sub r1, r1, #1\n    strh r1, [r0]\n    ldr r0, [sp, #8]\n    add r0, #0xc0\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    add r0, r0, #2\n    str r0, [sp]\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    cmp r0, #4\n    bge _0221C1AE\n    b _0221C04E\n    mov r1, #0x10\n    add r0, sp, #0x10\n    ldrsh r1, [r0, r1]\n    mov r2, #0\n    mov r6, #1\n    strb r2, [r0, #0xc]\n    add r2, sp, #0x20\n    add r4, r6, #0\n    add r2, #2\n    mov r0, #0\n    ldrsh r3, [r2, r0]\n    cmp r1, r3\n    bne _0221C1CE\n    add r0, sp, #0x1c\n    strb r4, [r0, r6]\n    add r6, r6, #1\n    cmp r1, r3\n    bge _0221C1DA\n    add r0, sp, #0x10\n    add r1, r3, #0\n    strb r4, [r0, #0xc]\n    mov r6, #1\n    add r4, r4, #1\n    add r2, r2, #2\n    cmp r4, #4\n    blt _0221C1C0\n    add r0, r7, #0\n    bl BattleSystem_Random\n    add r1, r6, #0\n    bl _s32_div_f\n    add r0, sp, #0x1c\n    ldrb r3, [r0, r1]\n    ldr r0, _0221C264 ; =0x000003CF\n    ldrb r1, [r5, r0]\n    add r2, r5, r1\n    add r1, r0, #0\n    add r1, #0xb\n    strb r3, [r2, r1]\n    ldrb r2, [r5, r0]\n    add r1, r0, #0\n    add r1, #0xb\n    add r3, r5, r2\n    ldrb r1, [r3, r1]\n    add r3, sp, #0x18\n    add r0, #0x17\n    ldrsb r4, [r3, r1]\n    mov r3, #0xc0\n    mul r3, r2\n    add r3, r5, r3\n    lsl r2, r4, #1\n    add r3, r3, r2\n    ldr r2, _0221C274 ; =0x00002D4C\n    ldrh r6, [r3, r2]\n    lsl r2, r6, #4\n    add r2, r5, r2\n    ldrh r2, [r2, r0]\n    mov r0, #2\n    lsl r0, r0, #8\n    cmp r2, r0\n    bne _0221C23E\n    add r0, r7, #0\n    bl BattleSystem_GetFieldSide\n    cmp r0, #0\n    bne _0221C23E\n    ldr r0, _0221C264 ; =0x000003CF\n    ldrb r2, [r5, r0]\n    add r0, #0xb\n    add r1, r5, r2\n    strb r2, [r1, r0]\n    cmp r6, #0xae\n    bne _0221C25C\n    ldr r2, _0221C264 ; =0x000003CF\n    add r0, r5, #0\n    ldrb r2, [r5, r2]\n    add r1, r6, #0\n    bl CurseUserIsGhost\n    cmp r0, #0\n    bne _0221C25C\n    ldr r0, _0221C264 ; =0x000003CF\n    ldrb r2, [r5, r0]\n    add r0, #0xb\n    add r1, r5, r2\n    strb r2, [r1, r0]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221C264: .word 0x000003CF\n    _0221C268: .word 0x00002D8C\n    _0221C26C: .word 0x00000365\n    _0221C270: .word 0x00000355\n    _0221C274: .word 0x00002D4C"
    );
    #endif
}

void ov10_0221C278(void) {
    /* Original at 0x0221C278 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #0xd5\n    add r5, r1, #0\n    lsl r0, r0, #2\n    ldrb r0, [r5, r0]\n    cmp r0, #2\n    beq _0221C35E\n    mov r6, #0xd9\n    lsl r6, r6, #2\n    add r4, r6, #0\n    sub r4, #0x10\n    cmp r0, #0\n    beq _0221C29C\n    cmp r0, #1\n    beq _0221C2DC\n    cmp r0, #2\n    b _0221C354\n    ldr r1, _0221C360 ; =0x00000365\n    ldr r0, _0221C364 ; =0x00002134\n    ldrb r1, [r5, r1]\n    ldr r0, [r5, r0]\n    lsl r1, r1, #2\n    ldr r1, [r0, r1]\n    ldr r0, _0221C368 ; =0x00002138\n    str r1, [r5, r0]\n    ldr r0, _0221C36C ; =0x000003CF\n    ldrb r1, [r5, r0]\n    mov r0, #0xc0\n    mul r0, r1\n    add r3, r5, r0\n    ldr r0, _0221C370 ; =0x00000355\n    ldrb r2, [r5, r0]\n    ldr r0, _0221C374 ; =0x00002D6C\n    add r1, r3, r2\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _0221C2C8\n    mov r1, #0\n    b _0221C2D0\n    lsl r0, r2, #1\n    add r1, r3, r0\n    ldr r0, _0221C378 ; =0x00002D4C\n    ldrh r1, [r1, r0]\n    ldr r0, _0221C37C ; =0x00000356\n    strh r1, [r5, r0]\n    ldrb r0, [r5, r4]\n    add r0, r0, #1\n    strb r0, [r5, r4]\n    b _0221C354\n    ldr r0, _0221C37C ; =0x00000356\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _0221C2FE\n    ldr r3, _0221C368 ; =0x00002138\n    ldr r2, _0221C364 ; =0x00002134\n    ldr r3, [r5, r3]\n    ldr r2, [r5, r2]\n    lsl r3, r3, #2\n    ldr r2, [r2, r3]\n    add r0, r7, #0\n    lsl r3, r2, #2\n    ldr r2, _0221C380 ; =ov10_0222B0B4\n    add r1, r5, #0\n    ldr r2, [r2, r3]\n    blx r2\n    b _0221C314\n    ldr r0, _0221C370 ; =0x00000355\n    mov r1, #0\n    ldrb r0, [r5, r0]\n    add r2, r5, r0\n    mov r0, #0xd6\n    lsl r0, r0, #2\n    strb r1, [r2, r0]\n    ldrb r1, [r5, r6]\n    mov r0, #1\n    orr r0, r1\n    strb r0, [r5, r6]\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldrb r1, [r5, r0]\n    mov r0, #1\n    tst r0, r1\n    beq _0221C354\n    ldr r0, _0221C370 ; =0x00000355\n    ldrb r0, [r5, r0]\n    add r1, r0, #1\n    ldr r0, _0221C370 ; =0x00000355\n    strb r1, [r5, r0]\n    ldrb r0, [r5, r0]\n    cmp r0, #4\n    bhs _0221C346\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    ldrb r1, [r5, r0]\n    mov r0, #8\n    tst r0, r1\n    bne _0221C346\n    mov r0, #0xd5\n    mov r1, #0\n    lsl r0, r0, #2\n    strb r1, [r5, r0]\n    b _0221C34C\n    ldrb r0, [r5, r4]\n    add r0, r0, #1\n    strb r0, [r5, r4]\n    ldrb r1, [r5, r6]\n    mov r0, #0xfe\n    and r0, r1\n    strb r0, [r5, r6]\n    mov r0, #0xd5\n    lsl r0, r0, #2\n    ldrb r0, [r5, r0]\n    cmp r0, #2\n    bne _0221C290\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221C360: .word 0x00000365\n    _0221C364: .word 0x00002134\n    _0221C368: .word 0x00002138\n    _0221C36C: .word 0x000003CF\n    _0221C370: .word 0x00000355\n    _0221C374: .word 0x00002D6C\n    _0221C378: .word 0x00002D4C\n    _0221C37C: .word 0x00000356\n    _0221C380: .word ov10_0222B0B4"
    );
    #endif
}

void ov10_0221C384(void) {
    /* Original at 0x0221C384 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    add r0, r6, #0\n    bl BattleSystem_Random\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x18\n    sub r1, r1, r2\n    mov r0, #0x18\n    ror r1, r0\n    add r0, r2, r1\n    cmp r0, r4\n    bge _0221C3C0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221C3C4(void) {
    /* Original at 0x0221C3C4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    add r0, r6, #0\n    bl BattleSystem_Random\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x18\n    sub r1, r1, r2\n    mov r0, #0x18\n    ror r1, r0\n    add r0, r2, r1\n    cmp r0, r4\n    ble _0221C400\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221C404(void) {
    /* Original at 0x0221C404 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    add r0, r6, #0\n    bl BattleSystem_Random\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x18\n    sub r1, r1, r2\n    mov r0, #0x18\n    ror r1, r0\n    add r0, r2, r1\n    cmp r4, r0\n    bne _0221C440\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221C444(void) {
    /* Original at 0x0221C444 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    add r0, r6, #0\n    bl BattleSystem_Random\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x18\n    sub r1, r1, r2\n    mov r0, #0x18\n    ror r1, r0\n    add r0, r2, r1\n    cmp r4, r0\n    beq _0221C480\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221C484(void) {
    /* Original at 0x0221C484 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    mov r2, #0xd6\n    lsl r2, r2, #2\n    sub r3, r2, #3\n    ldrb r5, [r4, r3]\n    add r1, r4, r2\n    ldrsb r3, [r1, r5]\n    add r0, r3, r0\n    strb r0, [r1, r5]\n    sub r0, r2, #3\n    ldrb r2, [r4, r0]\n    ldrsb r0, [r1, r2]\n    cmp r0, #0\n    bge _0221C4B4\n    mov r0, #0\n    strb r0, [r1, r2]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov10_0221C4B8(void) {
    /* Original at 0x0221C4B8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r3, _0221C50C ; =0x00002D8C\n    add r2, r5, r1\n    ldr r1, [r2, r3]\n    mov r0, #0x64\n    mul r0, r1\n    add r1, r3, #4\n    ldr r1, [r2, r1]\n    bl _u32_div_f\n    cmp r0, r6\n    bhs _0221C508\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221C50C: .word 0x00002D8C"
    );
    #endif
}

void ov10_0221C510(void) {
    /* Original at 0x0221C510 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r3, _0221C564 ; =0x00002D8C\n    add r2, r5, r1\n    ldr r1, [r2, r3]\n    mov r0, #0x64\n    mul r0, r1\n    add r1, r3, #4\n    ldr r1, [r2, r1]\n    bl _u32_div_f\n    cmp r0, r6\n    bls _0221C560\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221C564: .word 0x00002D8C"
    );
    #endif
}

void ov10_0221C568(void) {
    /* Original at 0x0221C568 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r3, _0221C5BC ; =0x00002D8C\n    add r2, r5, r1\n    ldr r1, [r2, r3]\n    mov r0, #0x64\n    mul r0, r1\n    add r1, r3, #4\n    ldr r1, [r2, r1]\n    bl _u32_div_f\n    cmp r0, r6\n    bne _0221C5B8\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221C5BC: .word 0x00002D8C"
    );
    #endif
}

void ov10_0221C5C0(void) {
    /* Original at 0x0221C5C0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r3, _0221C614 ; =0x00002D8C\n    add r2, r5, r1\n    ldr r1, [r2, r3]\n    mov r0, #0x64\n    mul r0, r1\n    add r1, r3, #4\n    ldr r1, [r2, r1]\n    bl _u32_div_f\n    cmp r0, r6\n    beq _0221C610\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221C614: .word 0x00002D8C"
    );
    #endif
}

void ov10_0221C618(void) {
    /* Original at 0x0221C618 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221C660 ; =0x00002DAC\n    add r1, r5, r1\n    ldr r0, [r1, r0]\n    tst r0, r6\n    beq _0221C65C\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221C660: .word 0x00002DAC"
    );
    #endif
}

void ov10_0221C664(void) {
    /* Original at 0x0221C664 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221C6AC ; =0x00002DAC\n    add r1, r5, r1\n    ldr r0, [r1, r0]\n    tst r0, r6\n    bne _0221C6A8\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221C6AC: .word 0x00002DAC"
    );
    #endif
}

void ov10_0221C6B0(void) {
    /* Original at 0x0221C6B0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221C6F8 ; =0x00002DB0\n    add r1, r5, r1\n    ldr r0, [r1, r0]\n    tst r0, r6\n    beq _0221C6F4\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221C6F8: .word 0x00002DB0"
    );
    #endif
}

void ov10_0221C6FC(void) {
    /* Original at 0x0221C6FC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221C744 ; =0x00002DB0\n    add r1, r5, r1\n    ldr r0, [r1, r0]\n    tst r0, r6\n    bne _0221C740\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221C744: .word 0x00002DB0"
    );
    #endif
}

void ov10_0221C748(void) {
    /* Original at 0x0221C748 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    mov r0, #0xb7\n    add r1, r5, r1\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    tst r0, r6\n    beq _0221C78E\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221C790(void) {
    /* Original at 0x0221C790 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    mov r0, #0xb7\n    add r1, r5, r1\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    tst r0, r6\n    bne _0221C7D6\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221C7D8(void) {
    /* Original at 0x0221C7D8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r1, r0, #0\n    add r0, r7, #0\n    bl BattleSystem_GetFieldSide\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x6f\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    tst r0, r6\n    beq _0221C826\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221C828(void) {
    /* Original at 0x0221C828 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r1, r0, #0\n    add r0, r7, #0\n    bl BattleSystem_GetFieldSide\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x6f\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    tst r0, r6\n    bne _0221C876\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221C878(void) {
    /* Original at 0x0221C878 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, r4\n    bge _0221C8A4\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov10_0221C8A8(void) {
    /* Original at 0x0221C8A8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, r4\n    ble _0221C8D4\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov10_0221C8D8(void) {
    /* Original at 0x0221C8D8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, r4\n    bne _0221C904\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov10_0221C908(void) {
    /* Original at 0x0221C908 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r0, r4\n    beq _0221C934\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov10_0221C938(void) {
    /* Original at 0x0221C938 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    tst r0, r4\n    beq _0221C964\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov10_0221C968(void) {
    /* Original at 0x0221C968 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    tst r0, r4\n    bne _0221C994\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov10_0221C998(void) {
    /* Original at 0x0221C998 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    ldr r0, _0221C9C4 ; =0x00000356\n    ldrh r0, [r5, r0]\n    cmp r0, r4\n    bne _0221C9C2\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}\n    _0221C9C4: .word 0x00000356"
    );
    #endif
}

void ov10_0221C9C8(void) {
    /* Original at 0x0221C9C8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    ldr r0, _0221C9F4 ; =0x00000356\n    ldrh r0, [r5, r0]\n    cmp r0, r4\n    beq _0221C9F2\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}\n    _0221C9F4: .word 0x00000356"
    );
    #endif
}

void ov10_0221C9F8(void) {
    /* Original at 0x0221C9F8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov10_0221EF10\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0221CA48\n    mov r6, #0xd7\n    add r7, r1, #0\n    lsl r6, r6, #2\n    ldr r1, [r5, r6]\n    cmp r1, r0\n    bne _0221CA3A\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov10_0221EF10\n    cmp r0, r7\n    bne _0221CA2A\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221CA4C(void) {
    /* Original at 0x0221CA4C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov10_0221EF10\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0221CA92\n    mov r6, #0xd7\n    add r7, r1, #0\n    lsl r6, r6, #2\n    ldr r1, [r5, r6]\n    cmp r1, r0\n    beq _0221CA9A\n    add r4, r4, #1\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov10_0221EF10\n    cmp r0, r7\n    bne _0221CA7E\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221CA9C(void) {
    /* Original at 0x0221CA9C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r0, r6, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r6, #0\n    bl ov10_0221EEF0\n    ldr r1, _0221CAF4 ; =0x000003CF\n    mov ip, r0\n    ldrb r2, [r6, r1]\n    mov r1, #0xc0\n    mov r0, #0\n    mul r1, r2\n    add r3, r6, r1\n    ldr r7, _0221CAF8 ; =0x00002D4C\n    add r1, r3, #0\n    add r2, r0, #0\n    ldrh r4, [r1, r7]\n    cmp r4, #0\n    beq _0221CADA\n    ldr r4, _0221CAF8 ; =0x00002D4C\n    add r5, r3, r2\n    ldrh r4, [r5, r4]\n    lsl r4, r4, #4\n    add r5, r6, r4\n    ldr r4, _0221CAFC ; =0x000003E1\n    ldrb r4, [r5, r4]\n    cmp r4, #0\n    bne _0221CAE4\n    add r0, r0, #1\n    add r1, r1, #2\n    add r2, r2, #2\n    cmp r0, #4\n    blt _0221CAC2\n    cmp r0, #4\n    bge _0221CAF0\n    add r0, r6, #0\n    mov r1, ip\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221CAF4: .word 0x000003CF\n    _0221CAF8: .word 0x00002D4C\n    _0221CAFC: .word 0x000003E1"
    );
    #endif
}

void ov10_0221CB00(void) {
    /* Original at 0x0221CB00 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r0, r6, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r6, #0\n    bl ov10_0221EEF0\n    ldr r1, _0221CB58 ; =0x000003CF\n    mov ip, r0\n    ldrb r2, [r6, r1]\n    mov r1, #0xc0\n    mov r0, #0\n    mul r1, r2\n    add r3, r6, r1\n    ldr r7, _0221CB5C ; =0x00002D4C\n    add r1, r3, #0\n    add r2, r0, #0\n    ldrh r4, [r1, r7]\n    cmp r4, #0\n    beq _0221CB3E\n    ldr r4, _0221CB5C ; =0x00002D4C\n    add r5, r3, r2\n    ldrh r4, [r5, r4]\n    lsl r4, r4, #4\n    add r5, r6, r4\n    ldr r4, _0221CB60 ; =0x000003E1\n    ldrb r4, [r5, r4]\n    cmp r4, #0\n    bne _0221CB48\n    add r0, r0, #1\n    add r1, r1, #2\n    add r2, r2, #2\n    cmp r0, #4\n    blt _0221CB26\n    cmp r0, #4\n    bne _0221CB54\n    add r0, r6, #0\n    mov r1, ip\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221CB58: .word 0x000003CF\n    _0221CB5C: .word 0x00002D4C\n    _0221CB60: .word 0x000003E1"
    );
    #endif
}

void ov10_0221CB64(void) {
    ov10_0221EF24(0x15, 0xd7, 1);
}

void ov10_0221CB80(void) {
    /* Original at 0x0221CB80 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    cmp r0, #8\n    bls _0221CB9A\n    b _0221CCA4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221CBA6: ; jump table\n    ldr r1, _0221CCAC ; =0x000003CF\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    ldr r1, _0221CCAC ; =0x000003CF\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    mov r2, #0x1c\n    mov r3, #0\n    bl GetBattlerVar\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0x1c\n    mov r3, #0\n    bl GetBattlerVar\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    ldr r0, _0221CCB0 ; =0x00000356\n    ldrh r1, [r4, r0]\n    lsl r1, r1, #4\n    add r2, r4, r1\n    add r1, r0, #0\n    add r1, #0x8c\n    ldrb r1, [r2, r1]\n    add r0, r0, #6\n    str r1, [r4, r0]\n    pop {r3, r4, r5, pc}\n    ldr r1, _0221CCAC ; =0x000003CF\n    add r0, r5, #0\n    ldrb r1, [r4, r1]\n    bl BattleSystem_GetBattlerIdPartner\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    add r0, r5, #0\n    bl BattleSystem_GetBattlerIdPartner\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    ldr r1, _0221CCAC ; =0x000003CF\n    add r0, r5, #0\n    ldrb r1, [r4, r1]\n    bl BattleSystem_GetBattlerIdPartner\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0x1c\n    mov r3, #0\n    bl GetBattlerVar\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldrb r1, [r4, r1]\n    add r0, r5, #0\n    bl BattleSystem_GetBattlerIdPartner\n    add r1, r0, #0\n    add r0, r4, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    nop\n    _0221CCAC: .word 0x000003CF\n    _0221CCB0: .word 0x00000356"
    );
    #endif
}

void ov10_0221CCB4(void) {
    /* Original at 0x0221CCB4 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r6, #0x18\n    add r4, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    cmp r4, r0\n    beq _0221CCFC\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x1c\n    mov r3, #0\n    bl GetBattlerVar\n    cmp r4, r0\n    bne _0221CD06\n    mov r0, #0xd7\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    pop {r4, r5, r6, pc}\n    mov r0, #0xd7\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov10_0221CD10(void) {
    /* Original at 0x0221CD10 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    ldr r0, _0221CD30 ; =0x00000356\n    ldrh r1, [r4, r0]\n    lsl r1, r1, #4\n    add r2, r4, r1\n    add r1, r0, #0\n    add r1, #0x8b\n    ldrb r1, [r2, r1]\n    add r0, r0, #6\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _0221CD30: .word 0x00000356"
    );
    #endif
}

void ov10_0221CD34(void) {
    /* Original at 0x0221CD34 */
    /* Requires manual decompilation - 145 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r6, r1, #0\n    str r0, [sp, #0x18]\n    add r0, r6, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r6, #0\n    bl ov10_0221EEF0\n    ldr r2, _0221CE50 ; =0x00000356\n    str r0, [sp, #0x1c]\n    ldrh r3, [r6, r2]\n    add r2, #0x88\n    ldr r1, _0221CE54 ; =ov10_0222B098\n    lsl r7, r3, #4\n    add r3, r6, r7\n    ldrh r3, [r3, r2]\n    ldr r2, _0221CE58 ; =0x0000FFFF\n    mov r0, #0\n    ldrh r4, [r1]\n    cmp r3, r4\n    beq _0221CD6E\n    add r1, r1, #2\n    ldrh r4, [r1]\n    add r0, r0, #1\n    cmp r4, r2\n    bne _0221CD5E\n    ldr r2, _0221CE5C ; =ov10_0222B080\n    ldr r4, _0221CE58 ; =0x0000FFFF\n    mov r1, #0\n    ldrh r5, [r2]\n    cmp r3, r5\n    beq _0221CD84\n    add r2, r2, #2\n    ldrh r5, [r2]\n    add r1, r1, #1\n    cmp r5, r4\n    bne _0221CD74\n    lsl r2, r1, #1\n    ldr r1, _0221CE5C ; =ov10_0222B080\n    ldrh r1, [r1, r2]\n    ldr r2, _0221CE58 ; =0x0000FFFF\n    cmp r1, r2\n    bne _0221CDA4\n    ldr r1, _0221CE60 ; =0x000003E1\n    add r3, r6, r7\n    ldrb r1, [r3, r1]\n    cmp r1, #1\n    bls _0221CE42\n    lsl r1, r0, #1\n    ldr r0, _0221CE54 ; =ov10_0222B098\n    ldrh r0, [r0, r1]\n    cmp r0, r2\n    bne _0221CE42\n    ldr r7, _0221CE64 ; =0x000003CF\n    mov r4, #0\n    add r5, sp, #0x20\n    ldrb r1, [r6, r7]\n    add r2, r4, #0\n    add r0, r6, #0\n    add r2, #0xa\n    mov r3, #0\n    bl GetBattlerVar\n    strb r0, [r5]\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #6\n    blt _0221CDAA\n    ldr r0, _0221CE64 ; =0x000003CF\n    ldrb r4, [r6, r0]\n    mov r0, #0xc0\n    add r5, r4, #0\n    mul r5, r0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl GetBattlerAbility\n    add r1, sp, #0x28\n    str r1, [sp]\n    ldr r3, _0221CE68 ; =0x00002DB8\n    add r1, r6, r5\n    ldrh r1, [r1, r3]\n    add r2, r4, #0\n    str r1, [sp, #4]\n    add r1, sp, #0x20\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    mul r0, r4\n    add r1, r6, r0\n    add r0, r3, #0\n    add r0, #0x14\n    ldr r0, [r1, r0]\n    sub r3, #0x6c\n    lsl r0, r0, #0xa\n    lsr r0, r0, #0x1d\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x1c]\n    add r3, r6, r3\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    add r1, r6, #0\n    add r3, r3, r5\n    bl ov10_0221EF7C\n    ldr r0, _0221CE6C ; =0x00000355\n    add r1, sp, #0x28\n    ldrb r0, [r6, r0]\n    mov r3, #0\n    lsl r0, r0, #2\n    ldr r2, [r1, r0]\n    ldr r0, [r1]\n    cmp r0, r2\n    bgt _0221CE26\n    add r3, r3, #1\n    add r1, r1, #4\n    cmp r3, #4\n    blt _0221CE18\n    cmp r3, #4\n    bne _0221CE36\n    mov r0, #0xd7\n    mov r1, #2\n    lsl r0, r0, #2\n    add sp, #0x38\n    str r1, [r6, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd7\n    mov r1, #1\n    lsl r0, r0, #2\n    add sp, #0x38\n    str r1, [r6, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd7\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r6, r0]\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221CE50: .word 0x00000356\n    _0221CE54: .word ov10_0222B098\n    _0221CE58: .word 0x0000FFFF\n    _0221CE5C: .word ov10_0222B080\n    _0221CE60: .word 0x000003E1\n    _0221CE64: .word 0x000003CF\n    _0221CE68: .word 0x00002DB8\n    _0221CE6C: .word 0x00000355"
    );
    #endif
}

void ov10_0221CE70(void) {
    /* Original at 0x0221CE70 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    lsl r0, r0, #1\n    add r1, r4, r0\n    ldr r0, _0221CEA0 ; =0x0000307C\n    ldrh r1, [r1, r0]\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0221CEA0: .word 0x0000307C"
    );
    #endif
}

void ov10_0221CEA4(void) {
    /* Original at 0x0221CEA4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r4, r0\n    bne _0221CED0\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov10_0221CED4(void) {
    /* Original at 0x0221CED4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    cmp r4, r0\n    beq _0221CF00\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov10_0221CF04(void) {
    /* Original at 0x0221CF04 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r3, _0221CF44 ; =0x000003CF\n    add r0, r6, #0\n    ldrb r2, [r5, r3]\n    add r3, r3, #1\n    ldrb r3, [r5, r3]\n    add r1, r5, #0\n    bl CheckSortSpeed\n    cmp r4, r0\n    bne _0221CF42\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221CF44: .word 0x000003CF"
    );
    #endif
}

void ov10_0221CF48(void) {
    /* Original at 0x0221CF48 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r3, _0221CF88 ; =0x000003CF\n    add r0, r6, #0\n    ldrb r2, [r5, r3]\n    add r3, r3, #1\n    ldrb r3, [r5, r3]\n    add r1, r5, #0\n    bl CheckSortSpeed\n    cmp r4, r0\n    beq _0221CF86\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221CF88: .word 0x000003CF"
    );
    #endif
}

void ov10_0221CF8C(void) {
    /* Original at 0x0221CF8C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r2, r0, #0\n    mov r0, #0xd7\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    lsl r1, r2, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    str r0, [sp]\n    ldr r1, [sp]\n    add r0, r7, #0\n    bl BattleSystem_GetParty\n    str r0, [sp, #0xc]\n    ldr r1, [r7, #0x2c]\n    mov r0, #2\n    tst r0, r1\n    beq _0221CFE6\n    ldr r0, [sp]\n    add r1, r5, r0\n    ldr r0, _0221D060 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    ldr r1, [sp]\n    str r0, [sp, #8]\n    add r0, r7, #0\n    bl BattleSystem_GetBattlerIdPartner\n    add r1, r5, r0\n    ldr r0, _0221D060 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    str r0, [sp, #4]\n    b _0221CFF2\n    ldr r0, [sp]\n    add r1, r5, r0\n    ldr r0, _0221D060 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r1, [sp]\n    add r0, r7, #0\n    mov r4, #0\n    bl BattleSystem_GetPartySize\n    cmp r0, #0\n    ble _0221D05C\n    ldr r0, [sp, #0xc]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    ldr r1, [sp, #8]\n    add r6, r0, #0\n    cmp r4, r1\n    beq _0221D04E\n    ldr r1, [sp, #4]\n    cmp r4, r1\n    beq _0221D04E\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221D04E\n    add r0, r6, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221D04E\n    add r0, r6, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0221D064 ; =0x000001EE\n    cmp r0, r1\n    beq _0221D04E\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r1, r0, #1\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r1, [sp]\n    add r0, r7, #0\n    add r4, r4, #1\n    bl BattleSystem_GetPartySize\n    cmp r4, r0\n    blt _0221D000\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D060: .word 0x0000219C\n    _0221D064: .word 0x000001EE"
    );
    #endif
}

void ov10_0221D068(void) {
    ov10_0221EF24(1);
}

void ov10_0221D084(void) {
    /* Original at 0x0221D084 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    ldr r0, _0221D0A4 ; =0x00000356\n    ldrh r1, [r4, r0]\n    lsl r1, r1, #4\n    add r2, r4, r1\n    add r1, r0, #0\n    add r1, #0x88\n    ldrh r1, [r2, r1]\n    add r0, r0, #6\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _0221D0A4: .word 0x00000356"
    );
    #endif
}

void ov10_0221D0A8(void) {
    /* Original at 0x0221D0A8 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    lsl r1, r7, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r1, r0, #0\n    mov r3, #0xb7\n    mov r2, #2\n    mov r0, #0xc0\n    add r6, r1, #0\n    mul r6, r0\n    add r0, r5, r6\n    lsl r3, r3, #6\n    ldr r4, [r0, r3]\n    lsl r2, r2, #0x14\n    tst r2, r4\n    beq _0221D0EA\n    mov r0, #0xd7\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _0221D180 ; =0x000003CF\n    ldrb r4, [r5, r2]\n    cmp r4, r1\n    beq _0221D172\n    cmp r7, #3\n    beq _0221D172\n    add r4, r5, r1\n    add r1, r2, #0\n    sub r1, #0x3f\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    beq _0221D108\n    sub r2, #0x73\n    str r1, [r5, r2]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r3, #0\n    sub r1, #0x59\n    ldrb r1, [r0, r1]\n    cmp r1, #0x17\n    beq _0221D11A\n    cmp r1, #0x2a\n    beq _0221D11A\n    cmp r1, #0x47\n    bne _0221D122\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r3, #0x80\n    add r7, r5, r3\n    ldrh r0, [r7, r6]\n    mov r1, #0x18\n    bl GetMonBaseStat\n    add r4, r0, #0\n    ldrh r0, [r7, r6]\n    mov r1, #0x19\n    bl GetMonBaseStat\n    add r6, r0, #0\n    cmp r4, #0\n    beq _0221D15E\n    cmp r6, #0\n    beq _0221D15E\n    ldr r0, [sp]\n    bl BattleSystem_Random\n    mov r1, #1\n    tst r0, r1\n    beq _0221D156\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r4, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r6, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0\n    beq _0221D16A\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r4, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r6, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0221D184 ; =0x00002D67\n    add r1, r5, r6\n    ldrb r1, [r1, r0]\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D180: .word 0x000003CF\n    _0221D184: .word 0x00002D67"
    );
    #endif
}

void ov10_0221D188(void) {
    /* Original at 0x0221D188 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    mov r2, #2\n    mov ip, r1\n    add r6, r5, r1\n    mov r1, #0xb7\n    lsl r1, r1, #6\n    ldr r3, [r6, r1]\n    lsl r2, r2, #0x14\n    tst r2, r3\n    beq _0221D1C8\n    mov r4, #0\n    b _0221D234\n    cmp r4, #0\n    beq _0221D1D0\n    cmp r4, #2\n    bne _0221D230\n    mov r1, #0x39\n    add r2, r5, r0\n    lsl r1, r1, #4\n    ldrb r4, [r2, r1]\n    cmp r4, #0\n    beq _0221D1E2\n    sub r1, #0x34\n    str r4, [r5, r1]\n    b _0221D234\n    mov r1, ip\n    add r2, r5, r1\n    ldr r1, _0221D25C ; =0x00002D67\n    ldrb r4, [r2, r1]\n    cmp r4, #0x17\n    beq _0221D234\n    cmp r4, #0x2a\n    beq _0221D234\n    cmp r4, #0x47\n    beq _0221D234\n    sub r1, #0x27\n    add r6, r5, r1\n    mov r1, #0xc0\n    mul r1, r0\n    ldrh r0, [r6, r1]\n    str r1, [sp]\n    mov r1, #0x18\n    bl GetMonBaseStat\n    add r4, r0, #0\n    ldr r0, [sp]\n    mov r1, #0x19\n    ldrh r0, [r6, r0]\n    bl GetMonBaseStat\n    cmp r4, #0\n    beq _0221D228\n    cmp r0, #0\n    beq _0221D228\n    cmp r4, r7\n    beq _0221D224\n    cmp r0, r7\n    bne _0221D234\n    mov r4, #0\n    b _0221D234\n    cmp r4, #0\n    bne _0221D234\n    add r4, r0, #0\n    b _0221D234\n    sub r1, #0x59\n    ldrb r4, [r6, r1]\n    cmp r4, #0\n    bne _0221D242\n    mov r0, #0xd7\n    mov r1, #2\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, r7\n    bne _0221D250\n    mov r0, #0xd7\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd7\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221D25C: .word 0x00002D67"
    );
    #endif
}

void ov10_0221D260(void) {
    /* Original at 0x0221D260 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    mov r0, #0\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [sp, #0x10]\n    str r0, [r5, r1]\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, _0221D308 ; =0x000003CF\n    ldrb r2, [r5, r0]\n    mov r0, #0xc0\n    mul r0, r2\n    add r0, r5, r0\n    add r1, r4, r0\n    ldr r0, _0221D30C ; =0x00002D4C\n    ldrh r6, [r1, r0]\n    add r0, r7, #0\n    add r1, r5, #0\n    add r3, r6, #0\n    bl ov10_0221F47C\n    add r3, r0, #0\n    cmp r6, #0\n    beq _0221D2F8\n    ldr r0, _0221D308 ; =0x000003CF\n    add r1, r5, #0\n    ldrb r0, [r5, r0]\n    add r2, r6, #0\n    str r0, [sp]\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    ldrb r0, [r5, r0]\n    str r0, [sp, #4]\n    mov r0, #0x28\n    str r0, [sp, #8]\n    add r0, sp, #0x14\n    str r0, [sp, #0xc]\n    add r0, r7, #0\n    bl ov12_02251D28\n    cmp r0, #0x78\n    bne _0221D2C8\n    mov r0, #0x50\n    b _0221D2DE\n    cmp r0, #0xf0\n    bne _0221D2D0\n    mov r0, #0xa0\n    b _0221D2DE\n    cmp r0, #0x1e\n    bne _0221D2D8\n    mov r0, #0x14\n    b _0221D2DE\n    cmp r0, #0xf\n    bne _0221D2DE\n    mov r0, #0xa\n    ldr r2, [sp, #0x14]\n    ldr r1, _0221D310 ; =0x00140808\n    tst r1, r2\n    beq _0221D2E8\n    mov r0, #0\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    cmp r1, r0\n    bhs _0221D2F8\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r0, [sp, #0x10]\n    add r4, r4, #2\n    add r0, r0, #1\n    str r0, [sp, #0x10]\n    cmp r0, #4\n    blt _0221D27C\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D308: .word 0x000003CF\n    _0221D30C: .word 0x00002D4C\n    _0221D310: .word 0x00140808"
    );
    #endif
}

void ov10_0221D314(void) {
    /* Original at 0x0221D314 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r3, _0221D3A4 ; =0x000003CF\n    add r0, r5, #0\n    ldrb r6, [r4, r3]\n    sub r3, #0x79\n    ldrh r3, [r4, r3]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov10_0221F47C\n    mov r2, #0x3d\n    str r6, [sp]\n    lsl r2, r2, #4\n    add r3, r0, #0\n    ldrb r0, [r4, r2]\n    sub r2, #0x7a\n    add r1, r4, #0\n    str r0, [sp, #4]\n    mov r0, #0x28\n    str r0, [sp, #8]\n    add r0, sp, #0x14\n    str r0, [sp, #0xc]\n    ldrh r2, [r4, r2]\n    add r0, r5, #0\n    bl ov12_02251D28\n    cmp r0, #0x78\n    bne _0221D372\n    mov r0, #0x50\n    b _0221D388\n    cmp r0, #0xf0\n    bne _0221D37A\n    mov r0, #0xa0\n    b _0221D388\n    cmp r0, #0x1e\n    bne _0221D382\n    mov r0, #0x14\n    b _0221D388\n    cmp r0, #0xf\n    bne _0221D388\n    mov r0, #0xa\n    ldr r2, [sp, #0x14]\n    ldr r1, _0221D3A8 ; =0x00140808\n    tst r1, r2\n    beq _0221D392\n    mov r0, #0\n    cmp r0, r7\n    bne _0221D39E\n    ldr r1, [sp, #0x10]\n    add r0, r4, #0\n    bl ov10_0221EF24\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221D3A4: .word 0x000003CF\n    _0221D3A8: .word 0x00140808"
    );
    #endif
}

void ov10_0221D3AC(void) {
    /* Original at 0x0221D3AC */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r0, #0\n    str r1, [sp]\n    add r0, r1, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    ldr r0, [sp]\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    ldr r0, [sp]\n    bl ov10_0221EEF0\n    str r0, [sp, #0x10]\n    ldr r0, [sp]\n    bl ov10_0221EEF0\n    str r0, [sp, #0xc]\n    lsl r1, r4, #0x18\n    ldr r0, [sp]\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r6, r0, #0\n    ldr r1, [r7, #0x2c]\n    mov r0, #2\n    tst r0, r1\n    beq _0221D406\n    ldr r0, [sp]\n    add r1, r0, r6\n    ldr r0, _0221D498 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    add r1, r6, #0\n    str r0, [sp, #8]\n    add r0, r7, #0\n    bl BattleSystem_GetBattlerIdPartner\n    ldr r1, [sp]\n    add r1, r1, r0\n    ldr r0, _0221D498 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    str r0, [sp, #4]\n    b _0221D412\n    ldr r0, [sp]\n    add r1, r0, r6\n    ldr r0, _0221D498 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r7, #0\n    add r1, r6, #0\n    bl BattleSystem_GetParty\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    add r1, r6, #0\n    mov r5, #0\n    bl BattleSystem_GetPartySize\n    cmp r0, #0\n    ble _0221D494\n    ldr r0, [sp, #0x14]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    ldr r1, [sp, #8]\n    add r4, r0, #0\n    cmp r5, r1\n    beq _0221D486\n    ldr r1, [sp, #4]\n    cmp r5, r1\n    beq _0221D486\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221D486\n    add r0, r4, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221D486\n    add r0, r4, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0221D49C ; =0x000001EE\n    cmp r0, r1\n    beq _0221D486\n    add r0, r4, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp, #0x10]\n    tst r0, r1\n    beq _0221D486\n    ldr r0, [sp]\n    ldr r1, [sp, #0xc]\n    bl ov10_0221EF24\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    add r1, r6, #0\n    add r5, r5, #1\n    bl BattleSystem_GetPartySize\n    cmp r5, r0\n    blt _0221D42A\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D498: .word 0x0000219C\n    _0221D49C: .word 0x000001EE"
    );
    #endif
}

void ov10_0221D4A0(void) {
    /* Original at 0x0221D4A0 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r0, #0\n    str r1, [sp]\n    add r0, r1, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    ldr r0, [sp]\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    ldr r0, [sp]\n    bl ov10_0221EEF0\n    str r0, [sp, #0x10]\n    ldr r0, [sp]\n    bl ov10_0221EEF0\n    str r0, [sp, #0xc]\n    lsl r1, r4, #0x18\n    ldr r0, [sp]\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r6, r0, #0\n    ldr r1, [r7, #0x2c]\n    mov r0, #2\n    tst r0, r1\n    beq _0221D4FA\n    ldr r0, [sp]\n    add r1, r0, r6\n    ldr r0, _0221D58C ; =0x0000219C\n    ldrb r0, [r1, r0]\n    add r1, r6, #0\n    str r0, [sp, #8]\n    add r0, r7, #0\n    bl BattleSystem_GetBattlerIdPartner\n    ldr r1, [sp]\n    add r1, r1, r0\n    ldr r0, _0221D58C ; =0x0000219C\n    ldrb r0, [r1, r0]\n    str r0, [sp, #4]\n    b _0221D506\n    ldr r0, [sp]\n    add r1, r0, r6\n    ldr r0, _0221D58C ; =0x0000219C\n    ldrb r0, [r1, r0]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r7, #0\n    add r1, r6, #0\n    bl BattleSystem_GetParty\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    add r1, r6, #0\n    mov r5, #0\n    bl BattleSystem_GetPartySize\n    cmp r0, #0\n    ble _0221D588\n    ldr r0, [sp, #0x14]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    ldr r1, [sp, #8]\n    add r4, r0, #0\n    cmp r5, r1\n    beq _0221D57A\n    ldr r1, [sp, #4]\n    cmp r5, r1\n    beq _0221D57A\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221D57A\n    add r0, r4, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221D57A\n    add r0, r4, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0221D590 ; =0x000001EE\n    cmp r0, r1\n    beq _0221D57A\n    add r0, r4, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp, #0x10]\n    tst r0, r1\n    bne _0221D57A\n    ldr r0, [sp]\n    ldr r1, [sp, #0xc]\n    bl ov10_0221EF24\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    add r1, r6, #0\n    add r5, r5, #1\n    bl BattleSystem_GetPartySize\n    cmp r5, r0\n    blt _0221D51E\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D58C: .word 0x0000219C\n    _0221D590: .word 0x000001EE"
    );
    #endif
}

void ov10_0221D594(void) {
    /* Original at 0x0221D594 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    mov r0, #0xd7\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r1, #6\n    lsl r1, r1, #6\n    ldr r2, [r4, r1]\n    mov r1, #3\n    tst r1, r2\n    beq _0221D5B8\n    mov r1, #2\n    str r1, [r4, r0]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    mov r0, #0xc\n    tst r0, r1\n    beq _0221D5CC\n    mov r0, #0xd7\n    mov r1, #3\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    mov r0, #0x30\n    tst r0, r1\n    beq _0221D5E0\n    mov r0, #0xd7\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    mov r0, #0xc0\n    tst r0, r1\n    beq _0221D5F4\n    mov r0, #0xd7\n    mov r1, #4\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    mov r0, #2\n    lsl r0, r0, #0xe\n    tst r0, r1\n    beq _0221D60A\n    mov r0, #0xd7\n    mov r1, #5\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov10_0221D60C(void) {
    /* Original at 0x0221D60C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    ldr r0, _0221D640 ; =0x00000356\n    ldrh r2, [r5, r0]\n    add r0, #0x88\n    lsl r2, r2, #4\n    add r2, r5, r2\n    ldrh r0, [r2, r0]\n    cmp r4, r0\n    bne _0221D63E\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}\n    _0221D640: .word 0x00000356"
    );
    #endif
}

void ov10_0221D644(void) {
    /* Original at 0x0221D644 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    ldr r0, _0221D678 ; =0x00000356\n    ldrh r2, [r5, r0]\n    add r0, #0x88\n    lsl r2, r2, #4\n    add r2, r5, r2\n    ldrh r0, [r2, r0]\n    cmp r4, r0\n    beq _0221D676\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}\n    _0221D678: .word 0x00000356"
    );
    #endif
}

void ov10_0221D67C(void) {
    /* Original at 0x0221D67C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    add r0, r5, r1\n    add r1, r0, r6\n    ldr r0, _0221D6CC ; =0x00002D58\n    ldrsb r0, [r1, r0]\n    cmp r0, r7\n    bge _0221D6CA\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D6CC: .word 0x00002D58"
    );
    #endif
}

void ov10_0221D6D0(void) {
    /* Original at 0x0221D6D0 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    add r0, r5, r1\n    add r1, r0, r6\n    ldr r0, _0221D720 ; =0x00002D58\n    ldrsb r0, [r1, r0]\n    cmp r0, r7\n    ble _0221D71E\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D720: .word 0x00002D58"
    );
    #endif
}

void ov10_0221D724(void) {
    /* Original at 0x0221D724 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    add r0, r5, r1\n    add r1, r0, r6\n    ldr r0, _0221D774 ; =0x00002D58\n    ldrsb r0, [r1, r0]\n    cmp r7, r0\n    bne _0221D772\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D774: .word 0x00002D58"
    );
    #endif
}

void ov10_0221D778(void) {
    /* Original at 0x0221D778 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    add r0, r5, r1\n    add r1, r0, r6\n    ldr r0, _0221D7C8 ; =0x00002D58\n    ldrsb r0, [r1, r0]\n    cmp r7, r0\n    beq _0221D7C6\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D7C8: .word 0x00002D58"
    );
    #endif
}

void ov10_0221D7CC(void) {
    /* Original at 0x0221D7CC */
    /* Requires manual decompilation - 134 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r6, r1, #0\n    str r0, [sp, #0x14]\n    add r0, r6, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r6, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov10_0221EEF0\n    str r0, [sp, #0x1c]\n    cmp r4, #1\n    bne _0221D7FE\n    ldr r0, _0221D8D4 ; =0x00000355\n    ldrb r1, [r6, r0]\n    add r0, #0x17\n    add r1, r6, r1\n    ldrb r0, [r1, r0]\n    str r0, [sp, #0x18]\n    b _0221D802\n    mov r0, #0x64\n    str r0, [sp, #0x18]\n    ldr r2, _0221D8D8 ; =0x00000356\n    ldr r1, _0221D8DC ; =ov10_0222B098\n    ldrh r3, [r6, r2]\n    add r2, #0x88\n    mov r0, #0\n    lsl r7, r3, #4\n    add r3, r6, r7\n    ldrh r3, [r3, r2]\n    ldr r2, _0221D8E0 ; =0x0000FFFF\n    ldrh r4, [r1]\n    cmp r3, r4\n    beq _0221D824\n    add r1, r1, #2\n    ldrh r4, [r1]\n    add r0, r0, #1\n    cmp r4, r2\n    bne _0221D814\n    ldr r2, _0221D8E4 ; =ov10_0222B080\n    ldr r4, _0221D8E0 ; =0x0000FFFF\n    mov r1, #0\n    ldrh r5, [r2]\n    cmp r3, r5\n    beq _0221D83A\n    add r2, r2, #2\n    ldrh r5, [r2]\n    add r1, r1, #1\n    cmp r5, r4\n    bne _0221D82A\n    lsl r2, r1, #1\n    ldr r1, _0221D8E4 ; =ov10_0222B080\n    ldrh r1, [r1, r2]\n    ldr r2, _0221D8E0 ; =0x0000FFFF\n    cmp r1, r2\n    bne _0221D85A\n    ldr r1, _0221D8E8 ; =0x000003E1\n    add r3, r6, r7\n    ldrb r1, [r3, r1]\n    cmp r1, #1\n    bls _0221D8D0\n    lsl r1, r0, #1\n    ldr r0, _0221D8DC ; =ov10_0222B098\n    ldrh r0, [r0, r1]\n    cmp r0, r2\n    bne _0221D8D0\n    ldr r7, _0221D8EC ; =0x000003CF\n    mov r4, #0\n    add r5, sp, #0x20\n    ldrb r1, [r6, r7]\n    add r2, r4, #0\n    add r0, r6, #0\n    add r2, #0xa\n    mov r3, #0\n    bl GetBattlerVar\n    strb r0, [r5]\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #6\n    blt _0221D860\n    ldr r0, _0221D8EC ; =0x000003CF\n    ldrb r4, [r6, r0]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl GetBattlerAbility\n    add r1, sp, #0x20\n    str r1, [sp]\n    str r4, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xc0\n    mul r0, r4\n    ldr r3, _0221D8F0 ; =0x00002DCC\n    add r4, r6, r0\n    ldr r0, [r4, r3]\n    ldr r2, _0221D8D8 ; =0x00000356\n    lsl r0, r0, #0xa\n    lsr r0, r0, #0x1d\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x18]\n    sub r3, #0x14\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    ldrh r2, [r6, r2]\n    ldrh r3, [r4, r3]\n    ldr r0, [sp, #0x14]\n    add r1, r6, #0\n    bl ov10_0221F084\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldrb r2, [r6, r1]\n    mov r1, #0xc0\n    mul r1, r2\n    add r2, r6, r1\n    ldr r1, _0221D8F4 ; =0x00002D8C\n    ldr r1, [r2, r1]\n    cmp r1, r0\n    bhi _0221D8D0\n    ldr r1, [sp, #0x1c]\n    add r0, r6, #0\n    bl ov10_0221EF24\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D8D4: .word 0x00000355\n    _0221D8D8: .word 0x00000356\n    _0221D8DC: .word ov10_0222B098\n    _0221D8E0: .word 0x0000FFFF\n    _0221D8E4: .word ov10_0222B080\n    _0221D8E8: .word 0x000003E1\n    _0221D8EC: .word 0x000003CF\n    _0221D8F0: .word 0x00002DCC\n    _0221D8F4: .word 0x00002D8C"
    );
    #endif
}

void ov10_0221D8F8(void) {
    /* Original at 0x0221D8F8 */
    /* Requires manual decompilation - 134 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r6, r1, #0\n    str r0, [sp, #0x14]\n    add r0, r6, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r6, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r6, #0\n    bl ov10_0221EEF0\n    str r0, [sp, #0x1c]\n    cmp r4, #1\n    bne _0221D92A\n    ldr r0, _0221DA00 ; =0x00000355\n    ldrb r1, [r6, r0]\n    add r0, #0x17\n    add r1, r6, r1\n    ldrb r0, [r1, r0]\n    str r0, [sp, #0x18]\n    b _0221D92E\n    mov r0, #0x64\n    str r0, [sp, #0x18]\n    ldr r2, _0221DA04 ; =0x00000356\n    ldr r1, _0221DA08 ; =ov10_0222B098\n    ldrh r3, [r6, r2]\n    add r2, #0x88\n    mov r0, #0\n    lsl r7, r3, #4\n    add r3, r6, r7\n    ldrh r3, [r3, r2]\n    ldr r2, _0221DA0C ; =0x0000FFFF\n    ldrh r4, [r1]\n    cmp r3, r4\n    beq _0221D950\n    add r1, r1, #2\n    ldrh r4, [r1]\n    add r0, r0, #1\n    cmp r4, r2\n    bne _0221D940\n    ldr r2, _0221DA10 ; =ov10_0222B080\n    ldr r4, _0221DA0C ; =0x0000FFFF\n    mov r1, #0\n    ldrh r5, [r2]\n    cmp r3, r5\n    beq _0221D966\n    add r2, r2, #2\n    ldrh r5, [r2]\n    add r1, r1, #1\n    cmp r5, r4\n    bne _0221D956\n    lsl r2, r1, #1\n    ldr r1, _0221DA10 ; =ov10_0222B080\n    ldrh r1, [r1, r2]\n    ldr r2, _0221DA0C ; =0x0000FFFF\n    cmp r1, r2\n    bne _0221D986\n    ldr r1, _0221DA14 ; =0x000003E1\n    add r3, r6, r7\n    ldrb r1, [r3, r1]\n    cmp r1, #1\n    bls _0221D9FC\n    lsl r1, r0, #1\n    ldr r0, _0221DA08 ; =ov10_0222B098\n    ldrh r0, [r0, r1]\n    cmp r0, r2\n    bne _0221D9FC\n    ldr r7, _0221DA18 ; =0x000003CF\n    mov r4, #0\n    add r5, sp, #0x20\n    ldrb r1, [r6, r7]\n    add r2, r4, #0\n    add r0, r6, #0\n    add r2, #0xa\n    mov r3, #0\n    bl GetBattlerVar\n    strb r0, [r5]\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #6\n    blt _0221D98C\n    ldr r0, _0221DA18 ; =0x000003CF\n    ldrb r4, [r6, r0]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl GetBattlerAbility\n    add r1, sp, #0x20\n    str r1, [sp]\n    str r4, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xc0\n    mul r0, r4\n    ldr r3, _0221DA1C ; =0x00002DCC\n    add r4, r6, r0\n    ldr r0, [r4, r3]\n    ldr r2, _0221DA04 ; =0x00000356\n    lsl r0, r0, #0xa\n    lsr r0, r0, #0x1d\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x18]\n    sub r3, #0x14\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    ldrh r2, [r6, r2]\n    ldrh r3, [r4, r3]\n    ldr r0, [sp, #0x14]\n    add r1, r6, #0\n    bl ov10_0221F084\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldrb r2, [r6, r1]\n    mov r1, #0xc0\n    mul r1, r2\n    add r2, r6, r1\n    ldr r1, _0221DA20 ; =0x00002D8C\n    ldr r1, [r2, r1]\n    cmp r1, r0\n    bls _0221D9FC\n    ldr r1, [sp, #0x1c]\n    add r0, r6, #0\n    bl ov10_0221EF24\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221DA00: .word 0x00000355\n    _0221DA04: .word 0x00000356\n    _0221DA08: .word ov10_0222B098\n    _0221DA0C: .word 0x0000FFFF\n    _0221DA10: .word ov10_0222B080\n    _0221DA14: .word 0x000003E1\n    _0221DA18: .word 0x000003CF\n    _0221DA1C: .word 0x00002DCC\n    _0221DA20: .word 0x00002D8C"
    );
    #endif
}

void ov10_0221DA24(void) {
    /* Original at 0x0221DA24 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r6, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    cmp r6, #0\n    beq _0221DAB4\n    cmp r6, #1\n    beq _0221DA60\n    cmp r6, #3\n    beq _0221DA86\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0xc0\n    mul r2, r0\n    ldr r0, _0221DADC ; =0x00002D4C\n    mov r1, #0\n    add r3, r5, r2\n    ldrh r2, [r3, r0]\n    cmp r4, r2\n    beq _0221DA78\n    add r1, r1, #1\n    add r3, r3, #2\n    cmp r1, #4\n    blt _0221DA6A\n    cmp r1, #4\n    bge _0221DAD8\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0xc0\n    mul r1, r0\n    add r0, r5, r1\n    ldr r1, _0221DAE0 ; =0x00002D8C\n    ldr r1, [r0, r1]\n    cmp r1, #0\n    beq _0221DAD8\n    ldr r1, _0221DADC ; =0x00002D4C\n    mov r3, #0\n    ldrh r2, [r0, r1]\n    cmp r4, r2\n    beq _0221DAA6\n    add r3, r3, #1\n    add r0, r0, #2\n    cmp r3, #4\n    blt _0221DA98\n    cmp r3, #4\n    bge _0221DAD8\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r0, #3\n    add r3, r5, r0\n    mov r0, #0x37\n    mov r1, #0\n    lsl r0, r0, #4\n    ldrh r2, [r3, r0]\n    cmp r4, r2\n    beq _0221DACC\n    add r1, r1, #1\n    add r3, r3, #2\n    cmp r1, #4\n    blt _0221DABE\n    cmp r1, #4\n    bge _0221DAD8\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221DADC: .word 0x00002D4C\n    _0221DAE0: .word 0x00002D8C"
    );
    #endif
}

void ov10_0221DAE4(void) {
    /* Original at 0x0221DAE4 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r6, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    cmp r6, #0\n    beq _0221DB74\n    cmp r6, #1\n    beq _0221DB20\n    cmp r6, #3\n    beq _0221DB46\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0xc0\n    mul r2, r0\n    ldr r0, _0221DB9C ; =0x00002D4C\n    mov r1, #0\n    add r3, r5, r2\n    ldrh r2, [r3, r0]\n    cmp r4, r2\n    beq _0221DB38\n    add r1, r1, #1\n    add r3, r3, #2\n    cmp r1, #4\n    blt _0221DB2A\n    cmp r1, #4\n    bne _0221DB98\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0xc0\n    mul r1, r0\n    add r0, r5, r1\n    ldr r1, _0221DBA0 ; =0x00002D8C\n    ldr r1, [r0, r1]\n    cmp r1, #0\n    beq _0221DB98\n    ldr r1, _0221DB9C ; =0x00002D4C\n    mov r3, #0\n    ldrh r2, [r0, r1]\n    cmp r4, r2\n    beq _0221DB66\n    add r3, r3, #1\n    add r0, r0, #2\n    cmp r3, #4\n    blt _0221DB58\n    cmp r3, #4\n    bne _0221DB98\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r0, #3\n    add r3, r5, r0\n    mov r0, #0x37\n    mov r1, #0\n    lsl r0, r0, #4\n    ldrh r2, [r3, r0]\n    cmp r4, r2\n    beq _0221DB8C\n    add r1, r1, #1\n    add r3, r3, #2\n    cmp r1, #4\n    blt _0221DB7E\n    cmp r1, #4\n    bne _0221DB98\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221DB9C: .word 0x00002D4C\n    _0221DBA0: .word 0x00002D8C"
    );
    #endif
}

void ov10_0221DBA4(void) {
    /* Original at 0x0221DBA4 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r6, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    cmp r6, #0\n    beq _0221DC0C\n    cmp r6, #1\n    bne _0221DC3C\n    mov r2, #0xc0\n    mul r2, r0\n    add r0, r5, r2\n    ldr r2, _0221DC40 ; =0x000003DE\n    ldr r3, _0221DC44 ; =0x00002D4C\n    mov r1, #0\n    ldrh r6, [r0, r3]\n    cmp r6, #0\n    beq _0221DBF6\n    lsl r6, r6, #4\n    add r6, r5, r6\n    ldrh r6, [r6, r2]\n    cmp r4, r6\n    beq _0221DBFE\n    add r1, r1, #1\n    add r0, r0, #2\n    cmp r1, #4\n    blt _0221DBE6\n    cmp r1, #4\n    bge _0221DC3C\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _0221DC40 ; =0x000003DE\n    lsl r0, r0, #3\n    add r3, r2, #0\n    mov r1, #0\n    add r0, r5, r0\n    sub r3, #0x6e\n    ldrh r6, [r0, r3]\n    cmp r6, #0\n    beq _0221DC28\n    lsl r6, r6, #4\n    add r6, r5, r6\n    ldrh r6, [r6, r2]\n    cmp r4, r6\n    beq _0221DC30\n    add r1, r1, #1\n    add r0, r0, #2\n    cmp r1, #4\n    blt _0221DC18\n    cmp r1, #4\n    bge _0221DC3C\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221DC40: .word 0x000003DE\n    _0221DC44: .word 0x00002D4C"
    );
    #endif
}

void ov10_0221DC48(void) {
    /* Original at 0x0221DC48 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r6, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    cmp r6, #0\n    beq _0221DCB0\n    cmp r6, #1\n    bne _0221DCE0\n    mov r2, #0xc0\n    mul r2, r0\n    add r0, r5, r2\n    ldr r2, _0221DCE4 ; =0x000003DE\n    ldr r3, _0221DCE8 ; =0x00002D4C\n    mov r1, #0\n    ldrh r6, [r0, r3]\n    cmp r6, #0\n    beq _0221DC9A\n    lsl r6, r6, #4\n    add r6, r5, r6\n    ldrh r6, [r6, r2]\n    cmp r4, r6\n    beq _0221DCA2\n    add r1, r1, #1\n    add r0, r0, #2\n    cmp r1, #4\n    blt _0221DC8A\n    cmp r1, #4\n    bne _0221DCE0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _0221DCE4 ; =0x000003DE\n    lsl r0, r0, #3\n    add r3, r2, #0\n    mov r1, #0\n    add r0, r5, r0\n    sub r3, #0x6e\n    ldrh r6, [r0, r3]\n    cmp r6, #0\n    beq _0221DCCC\n    lsl r6, r6, #4\n    add r6, r5, r6\n    ldrh r6, [r6, r2]\n    cmp r4, r6\n    beq _0221DCD4\n    add r1, r1, #1\n    add r0, r0, #2\n    cmp r1, #4\n    blt _0221DCBC\n    cmp r1, #4\n    bne _0221DCE0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221DCE4: .word 0x000003DE\n    _0221DCE8: .word 0x00002D4C"
    );
    #endif
}

void ov10_0221DCEC(void) {
    /* Original at 0x0221DCEC */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r6, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    cmp r4, #0\n    beq _0221DD24\n    cmp r4, #1\n    beq _0221DD3E\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221DD58 ; =0x00002DC8\n    add r1, r5, r1\n    ldr r0, [r1, r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1d\n    beq _0221DD56\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221DD58 ; =0x00002DC8\n    add r1, r5, r1\n    ldr r0, [r1, r0]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1d\n    beq _0221DD56\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221DD58: .word 0x00002DC8"
    );
    #endif
}

void ov10_0221DD5C(void) {
    /* Original at 0x0221DD5C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    cmp r5, #0\n    beq _0221DD82\n    cmp r5, #1\n    beq _0221DDA0\n    pop {r3, r4, r5, pc}\n    ldr r2, _0221DDC0 ; =0x00000356\n    ldrh r0, [r4, r2]\n    add r2, #0x79\n    ldrb r3, [r4, r2]\n    mov r2, #0xc0\n    mul r2, r3\n    add r3, r4, r2\n    ldr r2, _0221DDC4 ; =0x00002DE8\n    ldrh r2, [r3, r2]\n    cmp r0, r2\n    bne _0221DDBC\n    add r0, r4, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}\n    ldr r2, _0221DDC0 ; =0x00000356\n    ldrh r0, [r4, r2]\n    add r2, #0x79\n    ldrb r3, [r4, r2]\n    mov r2, #0xc0\n    mul r2, r3\n    add r3, r4, r2\n    ldr r2, _0221DDC8 ; =0x00002DEC\n    ldrh r2, [r3, r2]\n    cmp r0, r2\n    bne _0221DDBC\n    add r0, r4, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}\n    nop\n    _0221DDC0: .word 0x00000356\n    _0221DDC4: .word 0x00002DE8\n    _0221DDC8: .word 0x00002DEC"
    );
    #endif
}

void ov10_0221DDCC(void) {
    ov10_0221EF24(0xb, 0xd9, 1);
}

void ov10_0221DDE8(void) {
    /* Original at 0x0221DDE8 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov10_0221DDEC(void) {
    /* Original at 0x0221DDEC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov10_0221DDF0(void) {
    /* Original at 0x0221DDF0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221DE20 ; =0x00002DB8\n    add r1, r4, r1\n    ldrh r1, [r1, r0]\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _0221DE20: .word 0x00002DB8"
    );
    #endif
}

void ov10_0221DE24(void) {
    /* Original at 0x0221DE24 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    ldr r1, _0221DE80 ; =0x000003CF\n    add r2, r0, #0\n    ldrb r0, [r4, r1]\n    cmp r0, r2\n    beq _0221DE64\n    lsl r2, r2, #1\n    add r2, r4, r2\n    sub r1, #0x3b\n    ldrh r1, [r2, r1]\n    add r0, r4, #0\n    mov r2, #1\n    bl GetItemVar\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r4, pc}\n    mov r1, #0xc0\n    mul r1, r2\n    add r2, r4, r1\n    ldr r1, _0221DE84 ; =0x00002DB8\n    add r0, r4, #0\n    ldrh r1, [r2, r1]\n    mov r2, #1\n    bl GetItemVar\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _0221DE80: .word 0x000003CF\n    _0221DE84: .word 0x00002DB8"
    );
    #endif
}

void ov10_0221DE88(void) {
    /* Original at 0x0221DE88 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r6, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r6, r0, #0\n    ldr r0, _0221DEE8 ; =0x000003CF\n    mov r1, #1\n    add r3, r6, #0\n    ldrb r2, [r5, r0]\n    and r3, r1\n    and r1, r2\n    cmp r3, r1\n    bne _0221DED2\n    mov r0, #0xc0\n    mul r0, r6\n    add r1, r5, r0\n    ldr r0, _0221DEEC ; =0x00002DB8\n    b _0221DED8\n    lsl r1, r6, #1\n    add r1, r5, r1\n    sub r0, #0x3b\n    ldrh r0, [r1, r0]\n    cmp r0, r4\n    bne _0221DEE6\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221DEE8: .word 0x000003CF\n    _0221DEEC: .word 0x00002DB8"
    );
    #endif
}

void ov10_0221DEF0(void) {
    /* Original at 0x0221DEF0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    tst r0, r4\n    beq _0221DF1C\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov10_0221DF20(void) {
    /* Original at 0x0221DF20 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r6, #0x18\n    add r4, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r1, r0, #0\n    add r0, r7, #0\n    bl BattleSystem_GetFieldSide\n    cmp r4, #4\n    beq _0221DF5E\n    mov r1, #1\n    lsl r1, r1, #0xa\n    cmp r4, r1\n    beq _0221DF74\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r0, #3\n    add r1, r5, r0\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    lsl r0, r0, #0x1e\n    lsr r1, r0, #0x1e\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r0, r0, #3\n    add r2, r5, r0\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r2, r0]\n    sub r1, #0xa4\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1e\n    str r0, [r5, r1]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221DF88(void) {
    /* Original at 0x0221DF88 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    str r1, [sp]\n    add r0, r1, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    ldr r0, [sp]\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    ldr r0, [sp]\n    bl ov10_0221EEF0\n    str r0, [sp, #8]\n    lsl r1, r4, #0x18\n    ldr r0, [sp]\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r4, #0\n    bl BattleSystem_GetPartySize\n    cmp r0, #0\n    ble _0221E010\n    ldr r0, [sp]\n    add r0, r0, r6\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl BattleSystem_GetPartyMon\n    ldr r2, [sp, #4]\n    ldr r1, _0221E014 ; =0x0000219C\n    str r0, [sp, #0xc]\n    ldrb r1, [r2, r1]\n    cmp r4, r1\n    beq _0221E002\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    ldr r0, [sp, #0xc]\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    cmp r7, r0\n    beq _0221E002\n    ldr r0, [sp]\n    ldr r1, [sp, #8]\n    bl ov10_0221EF24\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r6, #0\n    add r4, r4, #1\n    bl BattleSystem_GetPartySize\n    cmp r4, r0\n    blt _0221DFC8\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221E014: .word 0x0000219C"
    );
    #endif
}

void ov10_0221E018(void) {
    /* Original at 0x0221E018 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp]\n    str r1, [sp, #4]\n    add r0, r1, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    ldr r0, [sp, #4]\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    ldr r0, [sp, #4]\n    bl ov10_0221EEF0\n    str r0, [sp, #0x10]\n    lsl r1, r4, #0x18\n    ldr r0, [sp, #4]\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    ldr r1, [sp, #8]\n    mov r7, #0\n    bl BattleSystem_GetPartySize\n    cmp r0, #0\n    ble _0221E0B2\n    ldr r1, [sp, #4]\n    ldr r0, [sp, #8]\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    ldr r1, [sp, #8]\n    add r2, r7, #0\n    bl BattleSystem_GetPartyMon\n    add r5, r0, #0\n    ldr r1, [sp, #0xc]\n    ldr r0, _0221E0B8 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    cmp r7, r0\n    beq _0221E0A4\n    mov r4, #0\n    add r1, r4, #0\n    add r0, r5, #0\n    add r1, #0x3a\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, #0x42\n    mov r2, #0\n    bl GetMonData\n    cmp r6, r0\n    beq _0221E09A\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0x10]\n    bl ov10_0221EF24\n    b _0221E0A0\n    add r4, r4, #1\n    cmp r4, #4\n    blt _0221E072\n    cmp r4, #4\n    bne _0221E0B2\n    ldr r0, [sp]\n    ldr r1, [sp, #8]\n    add r7, r7, #1\n    bl BattleSystem_GetPartySize\n    cmp r7, r0\n    blt _0221E05A\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221E0B8: .word 0x0000219C"
    );
    #endif
}

void ov10_0221E0BC(void) {
    /* Original at 0x0221E0BC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r1, r0, #0\n    add r0, r4, #0\n    bl GetHeldItemFlingPower\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r4, pc}"
    );
    #endif
}

void ov10_0221E0EC(void) {
    /* Original at 0x0221E0EC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    ldr r1, _0221E114 ; =0x000003CF\n    mov r0, #0xc0\n    ldrb r2, [r4, r1]\n    mul r0, r2\n    add r2, r4, r0\n    add r0, r1, #0\n    sub r0, #0x7a\n    ldrb r0, [r4, r0]\n    sub r1, #0x73\n    add r2, r2, r0\n    ldr r0, _0221E118 ; =0x00002D6C\n    ldrb r0, [r2, r0]\n    str r0, [r4, r1]\n    pop {r4, pc}\n    _0221E114: .word 0x000003CF\n    _0221E118: .word 0x00002D6C"
    );
    #endif
}

void ov10_0221E11C(void) {
    /* Original at 0x0221E11C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    lsl r1, r5, #0x18\n    add r7, r0, #0\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r5, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl GetBattlerLearnedMoveCount\n    mov r1, #0xc0\n    mul r1, r5\n    add r2, r4, r1\n    ldr r1, _0221E174 ; =0x00002DCC\n    ldr r1, [r2, r1]\n    lsl r1, r1, #0x13\n    lsr r2, r1, #0x1d\n    sub r1, r0, #1\n    cmp r2, r1\n    blo _0221E170\n    cmp r0, #1\n    ble _0221E170\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221E174: .word 0x00002DCC"
    );
    #endif
}

void ov10_0221E178(void) {
    /* Original at 0x0221E178 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    ldr r0, _0221E198 ; =0x00000356\n    ldrh r1, [r4, r0]\n    lsl r1, r1, #4\n    add r2, r4, r1\n    add r1, r0, #0\n    add r1, #0x8a\n    ldrb r1, [r2, r1]\n    add r0, r0, #6\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _0221E198: .word 0x00000356"
    );
    #endif
}

void ov10_0221E19C(void) {
    /* Original at 0x0221E19C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldrb r0, [r4, r1]\n    lsl r0, r0, #1\n    add r2, r4, r0\n    ldr r0, _0221E1C8 ; =0x0000307C\n    ldrh r0, [r2, r0]\n    lsl r0, r0, #4\n    add r2, r4, r0\n    add r0, r1, #0\n    add r0, #0x10\n    ldrb r0, [r2, r0]\n    sub r1, #0x74\n    str r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _0221E1C8: .word 0x0000307C"
    );
    #endif
}

void ov10_0221E1CC(void) {
    /* Original at 0x0221E1CC */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    add r0, r1, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    ldr r0, [sp, #8]\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    ldr r0, [sp, #8]\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #4]\n    bl BattleSystem_GetMaxBattlers\n    mov r1, #0\n    str r0, [sp, #0x14]\n    cmp r0, #0\n    ble _0221E20A\n    add r2, sp, #0x24\n    ldr r0, [sp, #0x14]\n    stmia r2!, {r1}\n    add r1, r1, #1\n    cmp r1, r0\n    blt _0221E200\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x14]\n    sub r0, r0, #1\n    str r0, [sp, #0x1c]\n    cmp r0, #0\n    ble _0221E264\n    add r6, sp, #0x24\n    str r6, [sp, #0x20]\n    ldr r0, [sp, #0xc]\n    add r7, r0, #1\n    ldr r0, [sp, #0x14]\n    cmp r7, r0\n    bge _0221E256\n    ldr r0, [sp, #0x20]\n    lsl r1, r7, #2\n    add r5, r0, r1\n    ldr r0, [r6]\n    ldr r4, [r5]\n    str r0, [sp, #0x18]\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #0x18]\n    add r3, r4, #0\n    bl CheckSortSpeed\n    cmp r0, #0\n    beq _0221E24C\n    ldr r0, [sp, #0x18]\n    str r4, [r6]\n    str r0, [r5]\n    ldr r0, [sp, #0x14]\n    add r7, r7, #1\n    add r5, r5, #4\n    cmp r7, r0\n    blt _0221E22C\n    ldr r0, [sp, #0xc]\n    add r6, r6, #4\n    add r1, r0, #1\n    ldr r0, [sp, #0x1c]\n    str r1, [sp, #0xc]\n    cmp r1, r0\n    blt _0221E21C\n    ldr r1, [sp, #0x14]\n    mov r0, #0\n    cmp r1, #0\n    ble _0221E28C\n    add r3, sp, #0x24\n    ldr r2, [r3]\n    ldr r1, [sp, #0x10]\n    cmp r1, r2\n    bne _0221E282\n    mov r2, #0xd7\n    ldr r1, [sp, #8]\n    lsl r2, r2, #2\n    str r0, [r1, r2]\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0x14]\n    add r0, r0, #1\n    add r3, r3, #4\n    cmp r0, r1\n    blt _0221E26E\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221E290(void) {
    /* Original at 0x0221E290 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0x15\n    lsl r1, r1, #4\n    ldr r2, [r4, r1]\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221E2C8 ; =0x00002DD4\n    add r1, r4, r1\n    ldr r0, [r1, r0]\n    sub r1, r2, r0\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _0221E2C8: .word 0x00002DD4"
    );
    #endif
}

void ov10_0221E2CC(void) {
    /* Original at 0x0221E2CC */
    /* Requires manual decompilation - 180 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x54\n    str r0, [sp, #0x18]\n    str r1, [sp, #0x1c]\n    add r0, r1, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    ldr r0, [sp, #0x1c]\n    bl ov10_0221EEF0\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x1c]\n    bl ov10_0221EEF0\n    str r0, [sp, #0x2c]\n    mov r4, #0\n    ldr r1, _0221E450 ; =0x000003CF\n    ldr r0, [sp, #0x1c]\n    add r5, sp, #0x34\n    ldrb r0, [r0, r1]\n    add r6, r4, #0\n    str r0, [sp, #0x28]\n    add r2, r4, #0\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x28]\n    add r2, #0xa\n    add r3, r6, #0\n    bl GetBattlerVar\n    strb r0, [r5]\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #6\n    blt _0221E2FA\n    ldr r0, [sp, #0x28]\n    mov r1, #0xc0\n    add r4, r0, #0\n    mul r4, r1\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x28]\n    bl GetBattlerAbility\n    add r1, sp, #0x44\n    str r1, [sp]\n    ldr r1, [sp, #0x1c]\n    ldr r3, _0221E454 ; =0x00002DB8\n    add r2, r1, r4\n    ldrh r1, [r2, r3]\n    ldr r5, _0221E450 ; =0x000003CF\n    str r1, [sp, #4]\n    add r1, sp, #0x34\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, r3, #0\n    add r0, #0x14\n    ldr r0, [r2, r0]\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0xa\n    lsr r0, r0, #0x1d\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x30]\n    add r2, r1, #0\n    str r0, [sp, #0x14]\n    ldrb r2, [r2, r5]\n    sub r3, #0x6c\n    add r5, r1, #0\n    add r3, r5, r3\n    ldr r0, [sp, #0x18]\n    add r3, r3, r4\n    bl ov10_0221EF7C\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x28]\n    mov r7, #0\n    bl BattleSystem_GetPartySize\n    cmp r0, #0\n    ble _0221E44A\n    ldr r1, [sp, #0x1c]\n    ldr r0, [sp, #0x28]\n    add r0, r1, r0\n    str r0, [sp, #0x20]\n    ldr r1, _0221E458 ; =0x0000219C\n    ldr r0, [sp, #0x20]\n    ldrb r0, [r0, r1]\n    cmp r7, r0\n    beq _0221E43C\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x28]\n    add r2, r7, #0\n    bl BattleSystem_GetPartyMon\n    mov r1, #0xa3\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221E43C\n    add r0, r6, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221E43C\n    add r0, r6, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0221E45C ; =0x000001EE\n    cmp r0, r1\n    beq _0221E43C\n    add r5, sp, #0x38\n    mov r4, #0\n    add r5, #2\n    add r1, r4, #0\n    add r0, r6, #0\n    add r1, #0x36\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r5]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #4\n    blt _0221E3BA\n    mov r5, #0\n    add r4, sp, #0x34\n    add r1, r5, #0\n    add r0, r6, #0\n    add r1, #0x46\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r4]\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r5, #6\n    blt _0221E3D4\n    add r0, r6, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    add r4, r0, #0\n    add r0, r6, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #0x44\n    str r1, [sp]\n    lsl r1, r4, #0x10\n    lsr r1, r1, #0x10\n    str r1, [sp, #4]\n    add r1, sp, #0x34\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x30]\n    ldr r1, [sp, #0x1c]\n    str r0, [sp, #0x14]\n    ldr r3, _0221E450 ; =0x000003CF\n    add r2, r1, #0\n    ldrb r2, [r2, r3]\n    add r3, sp, #0x38\n    ldr r0, [sp, #0x18]\n    add r3, #2\n    bl ov10_0221EF7C\n    ldr r1, [sp, #0x24]\n    cmp r0, r1\n    ble _0221E43C\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x2c]\n    bl ov10_0221EF24\n    add sp, #0x54\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x28]\n    add r7, r7, #1\n    bl BattleSystem_GetPartySize\n    cmp r7, r0\n    blt _0221E374\n    add sp, #0x54\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221E450: .word 0x000003CF\n    _0221E454: .word 0x00002DB8\n    _0221E458: .word 0x0000219C\n    _0221E45C: .word 0x000001EE"
    );
    #endif
}

void ov10_0221E460(void) {
    /* Original at 0x0221E460 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    ldr r2, _0221E494 ; =0x000003CF\n    add r6, r0, #0\n    ldrb r2, [r4, r2]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r3, #1\n    bl ov10_0221FD34\n    cmp r0, #1\n    bne _0221E490\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov10_0221EF24\n    pop {r4, r5, r6, pc}\n    nop\n    _0221E494: .word 0x000003CF"
    );
    #endif
}

void ov10_0221E498(void) {
    /* Original at 0x0221E498 */
    /* Requires manual decompilation - 124 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    add r6, r1, #0\n    str r0, [sp, #0x18]\n    add r0, r6, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r6, #0\n    bl ov10_0221EEF0\n    str r0, [sp, #0x28]\n    add r0, r6, #0\n    bl ov10_0221EEF0\n    str r0, [sp, #0x24]\n    add r0, r6, #0\n    bl ov10_0221EEF0\n    ldr r7, _0221E59C ; =0x000003CF\n    str r0, [sp, #0x20]\n    mov r4, #0\n    add r5, sp, #0x2c\n    ldrb r1, [r6, r7]\n    add r2, r4, #0\n    add r0, r6, #0\n    add r2, #0xa\n    mov r3, #0\n    bl GetBattlerVar\n    strb r0, [r5]\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #6\n    blt _0221E4C6\n    ldr r0, _0221E59C ; =0x000003CF\n    ldrb r4, [r6, r0]\n    mov r0, #0xc0\n    add r5, r4, #0\n    mul r5, r0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl GetBattlerAbility\n    add r1, sp, #0x34\n    str r1, [sp]\n    ldr r3, _0221E5A0 ; =0x00002DB8\n    add r1, r6, r5\n    ldrh r1, [r1, r3]\n    add r2, r4, #0\n    str r1, [sp, #4]\n    add r1, sp, #0x2c\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    mul r0, r4\n    add r1, r6, r0\n    add r0, r3, #0\n    add r0, #0x14\n    ldr r0, [r1, r0]\n    sub r3, #0x6c\n    lsl r0, r0, #0xa\n    lsr r0, r0, #0x1d\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x24]\n    add r3, r6, r3\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    add r1, r6, #0\n    add r3, r3, r5\n    bl ov10_0221EF7C\n    ldr r1, [sp, #0x28]\n    str r0, [sp, #0x1c]\n    lsl r1, r1, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r4, r0, #0\n    ldr r0, [sp, #0x24]\n    cmp r0, #1\n    bne _0221E54A\n    ldr r0, _0221E5A4 ; =0x00000355\n    ldrb r1, [r6, r0]\n    add r0, #0x17\n    add r1, r6, r1\n    ldrb r5, [r1, r0]\n    b _0221E54C\n    mov r5, #0x64\n    mov r0, #0xc0\n    add r7, r4, #0\n    mul r7, r0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl GetBattlerAbility\n    add r1, sp, #0x2c\n    str r1, [sp]\n    str r4, [sp, #4]\n    lsl r2, r4, #1\n    add r4, r6, r2\n    ldr r3, _0221E5A8 ; =0x00002DCC\n    add r7, r6, r7\n    str r0, [sp, #8]\n    ldr r0, [r7, r3]\n    ldr r2, _0221E5AC ; =0x0000307C\n    lsl r0, r0, #0xa\n    lsr r0, r0, #0x1d\n    str r0, [sp, #0xc]\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    sub r3, #0x14\n    ldrh r2, [r4, r2]\n    ldrh r3, [r7, r3]\n    ldr r0, [sp, #0x18]\n    add r1, r6, #0\n    bl ov10_0221F084\n    ldr r1, [sp, #0x1c]\n    cmp r0, r1\n    ble _0221E596\n    ldr r1, [sp, #0x20]\n    add r0, r6, #0\n    bl ov10_0221EF24\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221E59C: .word 0x000003CF\n    _0221E5A0: .word 0x00002DB8\n    _0221E5A4: .word 0x00000355\n    _0221E5A8: .word 0x00002DCC\n    _0221E5AC: .word 0x0000307C"
    );
    #endif
}

void ov10_0221E5B0(void) {
    /* Original at 0x0221E5B0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r2, #0xd7\n    mov r3, #0xd7\n    mov r1, #0\n    lsl r2, r2, #2\n    str r1, [r4, r2]\n    mov r2, #0xc0\n    mul r2, r0\n    add r0, r4, r2\n    ldr r2, _0221E5FC ; =0x00002D58\n    lsl r3, r3, #2\n    ldrsb r5, [r0, r2]\n    cmp r5, #6\n    ble _0221E5F0\n    ldr r6, [r4, r3]\n    sub r5, r5, #6\n    add r5, r6, r5\n    str r5, [r4, r3]\n    add r1, r1, #1\n    add r0, r0, #1\n    cmp r1, #8\n    blt _0221E5E2\n    pop {r4, r5, r6, pc}\n    nop\n    _0221E5FC: .word 0x00002D58"
    );
    #endif
}

void ov10_0221E600(void) {
    /* Original at 0x0221E600 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r6, #0x18\n    add r4, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    ldr r3, _0221E648 ; =0x000003CF\n    mov r1, #0xc0\n    ldrb r6, [r5, r3]\n    add r2, r0, #0\n    mul r2, r1\n    add r0, r5, r2\n    mul r1, r6\n    add r1, r5, r1\n    ldr r2, _0221E64C ; =0x00002D58\n    add r0, r0, r4\n    add r1, r1, r4\n    ldrsb r0, [r0, r2]\n    ldrsb r1, [r1, r2]\n    sub r3, #0x73\n    sub r0, r0, r1\n    str r0, [r5, r3]\n    pop {r4, r5, r6, pc}\n    _0221E648: .word 0x000003CF\n    _0221E64C: .word 0x00002D58"
    );
    #endif
}

void ov10_0221E650(void) {
    /* Original at 0x0221E650 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r1, r0, #0\n    str r6, [sp]\n    add r0, r5, #0\n    add r2, sp, #8\n    add r3, sp, #4\n    bl ov10_0221E74C\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #4]\n    cmp r1, r0\n    bge _0221E69E\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221E6A4(void) {
    /* Original at 0x0221E6A4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r1, r0, #0\n    str r6, [sp]\n    add r0, r5, #0\n    add r2, sp, #8\n    add r3, sp, #4\n    bl ov10_0221E74C\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #4]\n    cmp r1, r0\n    ble _0221E6F2\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221E6F8(void) {
    /* Original at 0x0221E6F8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r7, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r1, r0, #0\n    str r6, [sp]\n    add r0, r5, #0\n    add r2, sp, #8\n    add r3, sp, #4\n    bl ov10_0221E74C\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #4]\n    cmp r1, r0\n    bne _0221E746\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov10_0221EF24\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov10_0221E74C(void) {
    /* Original at 0x0221E74C */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r1, r3, #0\n    ldr r3, [sp, #0x10]\n    cmp r3, #5\n    bhi _0221E824\n    add r3, r3, r3\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _0221E764: ; jump table\n    ldr r3, _0221E82C ; =0x000003CF\n    ldrb r5, [r0, r3]\n    mov r3, #0xc0\n    add r6, r5, #0\n    mul r6, r3\n    ldr r5, _0221E830 ; =0x00002D8C\n    add r6, r0, r6\n    ldr r6, [r6, r5]\n    str r6, [r2]\n    add r2, r4, #0\n    mul r2, r3\n    add r0, r0, r2\n    ldr r0, [r0, r5]\n    str r0, [r1]\n    pop {r4, r5, r6, pc}\n    ldr r3, _0221E82C ; =0x000003CF\n    ldrb r5, [r0, r3]\n    mov r3, #0xc0\n    add r6, r5, #0\n    mul r6, r3\n    ldr r5, _0221E834 ; =0x00002D42\n    add r6, r0, r6\n    ldrh r6, [r6, r5]\n    str r6, [r2]\n    add r2, r4, #0\n    mul r2, r3\n    add r0, r0, r2\n    ldrh r0, [r0, r5]\n    str r0, [r1]\n    pop {r4, r5, r6, pc}\n    ldr r3, _0221E82C ; =0x000003CF\n    ldrb r5, [r0, r3]\n    mov r3, #0xc0\n    add r6, r5, #0\n    mul r6, r3\n    ldr r5, _0221E838 ; =0x00002D44\n    add r6, r0, r6\n    ldrh r6, [r6, r5]\n    str r6, [r2]\n    add r2, r4, #0\n    mul r2, r3\n    add r0, r0, r2\n    ldrh r0, [r0, r5]\n    str r0, [r1]\n    pop {r4, r5, r6, pc}\n    ldr r3, _0221E82C ; =0x000003CF\n    ldrb r5, [r0, r3]\n    mov r3, #0xc0\n    add r6, r5, #0\n    mul r6, r3\n    ldr r5, _0221E83C ; =0x00002D48\n    add r6, r0, r6\n    ldrh r6, [r6, r5]\n    str r6, [r2]\n    add r2, r4, #0\n    mul r2, r3\n    add r0, r0, r2\n    ldrh r0, [r0, r5]\n    str r0, [r1]\n    pop {r4, r5, r6, pc}\n    ldr r3, _0221E82C ; =0x000003CF\n    ldrb r5, [r0, r3]\n    mov r3, #0xc0\n    add r6, r5, #0\n    mul r6, r3\n    ldr r5, _0221E840 ; =0x00002D4A\n    add r6, r0, r6\n    ldrh r6, [r6, r5]\n    str r6, [r2]\n    add r2, r4, #0\n    mul r2, r3\n    add r0, r0, r2\n    ldrh r0, [r0, r5]\n    str r0, [r1]\n    pop {r4, r5, r6, pc}\n    ldr r3, _0221E82C ; =0x000003CF\n    ldrb r5, [r0, r3]\n    mov r3, #0xc0\n    add r6, r5, #0\n    mul r6, r3\n    ldr r5, _0221E844 ; =0x00002D46\n    add r6, r0, r6\n    ldrh r6, [r6, r5]\n    str r6, [r2]\n    add r2, r4, #0\n    mul r2, r3\n    add r0, r0, r2\n    ldrh r0, [r0, r5]\n    str r0, [r1]\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    nop\n    _0221E82C: .word 0x000003CF\n    _0221E830: .word 0x00002D8C\n    _0221E834: .word 0x00002D42\n    _0221E838: .word 0x00002D44\n    _0221E83C: .word 0x00002D48\n    _0221E840: .word 0x00002D4A\n    _0221E844: .word 0x00002D46"
    );
    #endif
}

void ov10_0221E848(void) {
    /* Original at 0x0221E848 */
    /* Requires manual decompilation - 160 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r6, r1, #0\n    str r0, [sp, #0x18]\n    add r0, r6, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r6, #0\n    bl ov10_0221EEF0\n    ldr r2, _0221E984 ; =0x00000356\n    str r0, [sp, #0x20]\n    ldrh r3, [r6, r2]\n    add r2, #0x88\n    ldr r1, _0221E988 ; =ov10_0222B098\n    lsl r7, r3, #4\n    add r3, r6, r7\n    ldrh r3, [r3, r2]\n    ldr r2, _0221E98C ; =0x0000FFFF\n    mov r0, #0\n    ldrh r4, [r1]\n    cmp r3, r4\n    beq _0221E882\n    add r1, r1, #2\n    ldrh r4, [r1]\n    add r0, r0, #1\n    cmp r4, r2\n    bne _0221E872\n    ldr r2, _0221E990 ; =ov10_0222B080\n    ldr r4, _0221E98C ; =0x0000FFFF\n    mov r1, #0\n    ldrh r5, [r2]\n    cmp r3, r5\n    beq _0221E898\n    add r2, r2, #2\n    ldrh r5, [r2]\n    add r1, r1, #1\n    cmp r5, r4\n    bne _0221E888\n    lsl r2, r1, #1\n    ldr r1, _0221E990 ; =ov10_0222B080\n    ldrh r1, [r1, r2]\n    ldr r2, _0221E98C ; =0x0000FFFF\n    cmp r1, r2\n    bne _0221E8B8\n    ldr r1, _0221E994 ; =0x000003E1\n    add r3, r6, r7\n    ldrb r1, [r3, r1]\n    cmp r1, #1\n    bls _0221E976\n    lsl r1, r0, #1\n    ldr r0, _0221E988 ; =ov10_0222B098\n    ldrh r0, [r0, r1]\n    cmp r0, r2\n    bne _0221E976\n    ldr r0, _0221E998 ; =0x000003CF\n    ldrb r7, [r6, r0]\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    mov r4, #0\n    add r5, sp, #0x28\n    add r2, r4, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, #0xa\n    mov r3, #0\n    bl GetBattlerVar\n    strb r0, [r5]\n    add r4, r4, #1\n    add r5, r5, #1\n    cmp r4, #6\n    blt _0221E8C4\n    mov r0, #0xc0\n    add r4, r7, #0\n    mul r4, r0\n    add r0, r6, #0\n    add r1, r7, #0\n    bl GetBattlerAbility\n    add r1, sp, #0x30\n    str r1, [sp]\n    ldr r3, _0221E99C ; =0x00002DB8\n    add r1, r6, r4\n    ldrh r2, [r1, r3]\n    str r2, [sp, #4]\n    add r2, sp, #0x28\n    str r2, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, r3, #0\n    add r0, #0x14\n    ldr r0, [r1, r0]\n    sub r3, #0x6c\n    lsl r0, r0, #0xa\n    lsr r0, r0, #0x1d\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x20]\n    add r3, r6, r3\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    add r1, r6, #0\n    add r2, r7, #0\n    add r3, r3, r4\n    bl ov10_0221EF7C\n    ldr r1, _0221E998 ; =0x000003CF\n    ldr r0, [sp, #0x18]\n    ldrb r1, [r6, r1]\n    bl BattleSystem_GetBattlerIdPartner\n    add r7, r0, #0\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    bne _0221E93A\n    ldr r0, _0221E9A0 ; =0x00000355\n    ldrb r0, [r6, r0]\n    lsl r1, r0, #2\n    add r0, sp, #0x30\n    ldr r0, [r0, r1]\n    str r0, [sp, #0x24]\n    mov r3, #0\n    add r2, sp, #0x30\n    ldr r1, [r2]\n    ldr r0, [sp, #0x24]\n    cmp r1, r0\n    bgt _0221E94E\n    add r3, r3, #1\n    add r2, r2, #4\n    cmp r3, #4\n    blt _0221E93E\n    cmp r3, #4\n    bne _0221E95C\n    mov r0, #0xd7\n    mov r1, #2\n    lsl r0, r0, #2\n    str r1, [r6, r0]\n    b _0221E968\n    mov r0, #0xd7\n    mov r1, #1\n    lsl r0, r0, #2\n    add sp, #0x40\n    str r1, [r6, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    cmp r0, #2\n    blt _0221E8C0\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd7\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r6, r0]\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221E984: .word 0x00000356\n    _0221E988: .word ov10_0222B098\n    _0221E98C: .word 0x0000FFFF\n    _0221E990: .word ov10_0222B080\n    _0221E994: .word 0x000003E1\n    _0221E998: .word 0x000003CF\n    _0221E99C: .word 0x00002DB8\n    _0221E9A0: .word 0x00000355"
    );
    #endif
}

void ov10_0221E9A4(void) {
    /* Original at 0x0221E9A4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    cmp r4, #1\n    bne _0221E9C8\n    bl GF_AssertFail\n    cmp r4, #0\n    bne _0221E9D0\n    bl GF_AssertFail\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    bl MaskOfFlagNo\n    ldr r1, _0221E9F0 ; =0x00003108\n    ldrb r1, [r5, r1]\n    tst r0, r1\n    beq _0221E9EE\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov10_0221EF24\n    pop {r4, r5, r6, pc}\n    _0221E9F0: .word 0x00003108"
    );
    #endif
}

void ov10_0221E9F4(void) {
    /* Original at 0x0221E9F4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r6, r0, #0\n    cmp r4, #1\n    bne _0221EA18\n    bl GF_AssertFail\n    cmp r4, #0\n    bne _0221EA20\n    bl GF_AssertFail\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    bl MaskOfFlagNo\n    ldr r1, _0221EA40 ; =0x00003108\n    ldrb r1, [r5, r1]\n    tst r0, r1\n    bne _0221EA3E\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov10_0221EF24\n    pop {r4, r5, r6, pc}\n    _0221EA40: .word 0x00003108"
    );
    #endif
}

void ov10_0221EA44(void) {
    /* Original at 0x0221EA44 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221EA78 ; =0x00002DBE\n    add r1, r4, r1\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #0x1c\n    lsr r1, r0, #0x1c\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _0221EA78: .word 0x00002DBE"
    );
    #endif
}

void ov10_0221EA7C(void) {
    /* Original at 0x0221EA7C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r2, r0, #0\n    mov r1, #0xc0\n    mul r2, r1\n    ldr r0, _0221EAC4 ; =0x00002DD4\n    add r2, r4, r2\n    add r1, #0x90\n    ldr r2, [r2, r0]\n    ldr r0, [r4, r1]\n    cmp r2, r0\n    bge _0221EAB8\n    mov r0, #0xd7\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    mov r1, #1\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0221EAC4: .word 0x00002DD4"
    );
    #endif
}

void ov10_0221EAC8(void) {
    /* Original at 0x0221EAC8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221EAFC ; =0x00002DC8\n    add r1, r4, r1\n    ldr r0, [r1, r0]\n    lsl r0, r0, #8\n    lsr r1, r0, #0x1d\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    _0221EAFC: .word 0x00002DC8"
    );
    #endif
}

void ov10_0221EB00(void) {
    ov10_0221EF24(0xd7, 1);
}

void ov10_0221EB18(void) {
    /* Original at 0x0221EB18 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    lsl r0, r0, #1\n    add r1, r4, r0\n    ldr r0, _0221EB48 ; =0x00003124\n    ldrh r1, [r1, r0]\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0221EB48: .word 0x00003124"
    );
    #endif
}

void ov10_0221EB4C(void) {
    /* Original at 0x0221EB4C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    lsl r0, r0, #4\n    add r2, r4, r0\n    add r0, r1, #0\n    add r0, #0x86\n    ldrb r0, [r2, r0]\n    str r0, [r4, r1]\n    pop {r4, pc}"
    );
    #endif
}

void ov10_0221EB6C(void) {
    /* Original at 0x0221EB6C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    lsl r0, r0, #4\n    add r2, r4, r0\n    add r0, r1, #0\n    add r0, #0x85\n    ldrb r0, [r2, r0]\n    str r0, [r4, r1]\n    pop {r4, pc}"
    );
    #endif
}

void ov10_0221EB8C(void) {
    /* Original at 0x0221EB8C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    lsl r0, r0, #4\n    add r2, r4, r0\n    add r0, r1, #0\n    add r0, #0x82\n    ldrh r0, [r2, r0]\n    str r0, [r4, r1]\n    pop {r4, pc}"
    );
    #endif
}

void ov10_0221EBAC(void) {
    /* Original at 0x0221EBAC */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    lsl r1, r0, #1\n    add r2, r4, r1\n    ldr r1, _0221EC00 ; =0x0000305C\n    ldrh r1, [r2, r1]\n    cmp r1, #0xb6\n    beq _0221EBE8\n    cmp r1, #0xc5\n    beq _0221EBE8\n    cmp r1, #0xcb\n    beq _0221EBE8\n    mov r0, #0xd7\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221EC04 ; =0x00002DC8\n    add r1, r4, r1\n    ldr r0, [r1, r0]\n    lsl r0, r0, #0x13\n    lsr r1, r0, #0x1e\n    mov r0, #0xd7\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    pop {r4, pc}\n    nop\n    _0221EC00: .word 0x0000305C\n    _0221EC04: .word 0x00002DC8"
    );
    #endif
}

void ov10_0221EC08(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EE28(r5, r4, r0);
}

void ov10_0221EC28(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF24(r4, r0);
}

void ov10_0221EC44(void) {
    /* Original at 0x0221EC44 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov10_0221EE60\n    cmp r0, #1\n    beq _0221EC6A\n    mov r1, #0xd9\n    lsl r1, r1, #2\n    ldrb r2, [r4, r1]\n    mov r0, #1\n    orr r0, r2\n    strb r0, [r4, r1]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov10_0221EC6C(void) {
    /* Original at 0x0221EC6C */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    cmp r4, #0\n    beq _0221EC96\n    cmp r4, #1\n    beq _0221ECBC\n    cmp r4, #2\n    beq _0221ECE2\n    pop {r3, r4, r5, pc}\n    ldr r2, _0221ED08 ; =0x000003CF\n    mov r3, #0xc0\n    ldrb r0, [r5, r2]\n    add r2, r2, #1\n    ldrb r2, [r5, r2]\n    add r4, r0, #0\n    mul r4, r3\n    add r0, r5, r4\n    ldr r4, _0221ED0C ; =0x00002D74\n    mul r3, r2\n    add r2, r5, r3\n    ldrb r0, [r0, r4]\n    ldrb r2, [r2, r4]\n    cmp r0, r2\n    bls _0221ED06\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}\n    ldr r2, _0221ED08 ; =0x000003CF\n    mov r3, #0xc0\n    ldrb r0, [r5, r2]\n    add r2, r2, #1\n    ldrb r2, [r5, r2]\n    add r4, r0, #0\n    mul r4, r3\n    add r0, r5, r4\n    ldr r4, _0221ED0C ; =0x00002D74\n    mul r3, r2\n    add r2, r5, r3\n    ldrb r0, [r0, r4]\n    ldrb r2, [r2, r4]\n    cmp r0, r2\n    bhs _0221ED06\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}\n    ldr r2, _0221ED08 ; =0x000003CF\n    mov r3, #0xc0\n    ldrb r0, [r5, r2]\n    add r2, r2, #1\n    ldrb r2, [r5, r2]\n    add r4, r0, #0\n    mul r4, r3\n    add r0, r5, r4\n    ldr r4, _0221ED0C ; =0x00002D74\n    mul r3, r2\n    add r2, r5, r3\n    ldrb r0, [r0, r4]\n    ldrb r2, [r2, r4]\n    cmp r0, r2\n    bne _0221ED06\n    add r0, r5, #0\n    bl ov10_0221EF24\n    pop {r3, r4, r5, pc}\n    _0221ED08: .word 0x000003CF\n    _0221ED0C: .word 0x00002D74"
    );
    #endif
}

void ov10_0221ED10(void) {
    /* Original at 0x0221ED10 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    ldrb r2, [r4, r0]\n    mov r0, #0xc0\n    mul r0, r2\n    add r2, r4, r0\n    ldr r0, _0221ED44 ; =0x00002DC8\n    ldr r0, [r2, r0]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x1d\n    beq _0221ED40\n    add r0, r4, #0\n    bl ov10_0221EF24\n    pop {r4, pc}\n    nop\n    _0221ED44: .word 0x00002DC8"
    );
    #endif
}

void ov10_0221ED48(void) {
    /* Original at 0x0221ED48 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    ldrb r2, [r4, r0]\n    mov r0, #0xc0\n    mul r0, r2\n    add r2, r4, r0\n    ldr r0, _0221ED7C ; =0x00002DC8\n    ldr r0, [r2, r0]\n    lsl r0, r0, #0x15\n    lsr r0, r0, #0x1d\n    bne _0221ED78\n    add r0, r4, #0\n    bl ov10_0221EF24\n    pop {r4, pc}\n    nop\n    _0221ED7C: .word 0x00002DC8"
    );
    #endif
}

void ov10_0221ED80(void) {
    /* Original at 0x0221ED80 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    ldr r2, _0221EDB0 ; =0x000003CF\n    add r1, r0, #0\n    ldrb r0, [r4, r2]\n    add r2, r2, #1\n    mov r3, #1\n    ldrb r2, [r4, r2]\n    and r0, r3\n    and r2, r3\n    cmp r0, r2\n    bne _0221EDAC\n    add r0, r4, #0\n    bl ov10_0221EF24\n    pop {r4, pc}\n    nop\n    _0221EDB0: .word 0x000003CF"
    );
    #endif
}

void ov10_0221EDB4(void) {
    /* Original at 0x0221EDB4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov10_0221EEF0\n    lsl r1, r4, #0x18\n    add r6, r0, #0\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221EDF4 ; =0x00002DC8\n    add r1, r5, r1\n    ldr r0, [r1, r0]\n    lsr r0, r0, #0x1f\n    beq _0221EDF0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov10_0221EF24\n    pop {r4, r5, r6, pc}\n    nop\n    _0221EDF4: .word 0x00002DC8"
    );
    #endif
}

void ov10_0221EDF8(void) {
    /* Original at 0x0221EDF8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    mov r1, #1\n    bl ov10_0221EF24\n    add r0, r4, #0\n    bl ov10_0221EEF0\n    add r1, r0, #0\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov10_0221EF34\n    add r1, r0, #0\n    add r0, r4, #0\n    bl GetBattlerAbility\n    mov r1, #0xd7\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r4, pc}"
    );
    #endif
}

void ov10_0221EE28(void) {
    /* Original at 0x0221EE28 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0xf3\n    lsl r1, r1, #2\n    ldrb r5, [r4, r1]\n    add r0, r5, #1\n    strb r0, [r4, r1]\n    ldr r0, _0221EE5C ; =0x00002138\n    sub r1, #0x20\n    ldr r3, [r4, r0]\n    lsl r0, r5, #2\n    add r0, r4, r0\n    str r3, [r0, r1]\n    add r0, r4, #0\n    add r1, r2, #0\n    bl ov10_0221EF24\n    mov r0, #0xf3\n    lsl r0, r0, #2\n    ldrb r0, [r4, r0]\n    cmp r0, #8\n    bls _0221EE58\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    nop\n    _0221EE5C: .word 0x00002138"
    );
    #endif
}

void ov10_0221EE60(void) {
    /* Original at 0x0221EE60 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0xf3\n    lsl r0, r0, #2\n    ldrb r2, [r1, r0]\n    cmp r2, #0\n    beq _0221EE80\n    sub r2, r2, #1\n    strb r2, [r1, r0]\n    ldrb r2, [r1, r0]\n    sub r0, #0x20\n    lsl r2, r2, #2\n    add r2, r1, r2\n    ldr r2, [r2, r0]\n    ldr r0, _0221EE84 ; =0x00002138\n    str r2, [r1, r0]\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0221EE84: .word 0x00002138"
    );
    #endif
}

void ov10_0221EE88(void) {
    /* Original at 0x0221EE88 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r2, #0x3d\n    lsl r2, r2, #4\n    str r1, [sp]\n    ldrb r1, [r1, r2]\n    mov r7, #0x37\n    lsl r7, r7, #4\n    mov lr, r1\n    mov r3, lr\n    lsl r4, r3, #1\n    ldr r3, [sp]\n    ldr r2, [sp]\n    lsl r1, r1, #3\n    add r4, r3, r4\n    ldr r3, _0221EEEC ; =0x0000307C\n    mov r0, #0\n    add r5, r2, r1\n    mov ip, r1\n    ldrh r3, [r4, r3]\n    add r1, r5, #0\n    add r2, r0, #0\n    add r6, r7, #0\n    ldrh r4, [r1, r6]\n    cmp r3, r4\n    beq _0221EEEA\n    add r4, r5, r2\n    ldrh r4, [r4, r7]\n    cmp r4, #0\n    bne _0221EEE0\n    mov r1, lr\n    lsl r2, r1, #1\n    ldr r1, [sp]\n    ldr r3, [sp]\n    add r2, r1, r2\n    ldr r1, _0221EEEC ; =0x0000307C\n    lsl r0, r0, #1\n    ldrh r1, [r2, r1]\n    mov r2, ip\n    add r2, r3, r2\n    add r2, r2, r0\n    mov r0, #0x37\n    lsl r0, r0, #4\n    strh r1, [r2, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r0, #1\n    add r1, r1, #2\n    add r2, r2, #2\n    cmp r0, #4\n    blt _0221EEB4\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221EEEC: .word 0x0000307C"
    );
    #endif
}

void ov10_0221EEF0(void) {
    /* Original at 0x0221EEF0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0221EF0C ; =0x00002134\n    add r2, r1, #4\n    ldr r2, [r0, r2]\n    ldr r3, [r0, r1]\n    lsl r2, r2, #2\n    ldr r3, [r3, r2]\n    add r2, r1, #4\n    ldr r2, [r0, r2]\n    add r1, r1, #4\n    add r2, r2, #1\n    str r2, [r0, r1]\n    add r0, r3, #0\n    bx lr\n    nop\n    _0221EF0C: .word 0x00002134"
    );
    #endif
}

void ov10_0221EF10(void) {
    /* Original at 0x0221EF10 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0221EF20 ; =0x00002134\n    ldr r3, [r0, r2]\n    add r2, r2, #4\n    ldr r0, [r0, r2]\n    add r0, r0, r1\n    lsl r0, r0, #2\n    ldr r0, [r3, r0]\n    bx lr\n    _0221EF20: .word 0x00002134"
    );
    #endif
}

void ov10_0221EF24(void) {
    /* Original at 0x0221EF24 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0221EF30 ; =0x00002138\n    ldr r3, [r0, r2]\n    add r1, r3, r1\n    str r1, [r0, r2]\n    bx lr\n    nop\n    _0221EF30: .word 0x00002138"
    );
    #endif
}

void ov10_0221EF34(void) {
    /* Original at 0x0221EF34 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #3\n    bhi _0221EF52\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0221EF44: ; jump table\n    ldr r1, _0221EF78 ; =0x000003CF\n    ldrb r0, [r0, r1]\n    bx lr\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldrb r0, [r0, r1]\n    bx lr\n    ldr r1, _0221EF78 ; =0x000003CF\n    ldrb r1, [r0, r1]\n    mov r0, #2\n    eor r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldrb r1, [r0, r1]\n    mov r0, #2\n    eor r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr\n    _0221EF78: .word 0x000003CF"
    );
    #endif
}

void ov10_0221EF7C(void) {
    /* Original at 0x0221EF7C */
    /* Requires manual decompilation - 126 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x44]\n    ldr r6, [sp, #0x40]\n    str r0, [sp, #0x44]\n    ldr r0, [sp, #0x48]\n    add r7, r1, #0\n    str r0, [sp, #0x48]\n    ldr r0, [sp, #0x4c]\n    str r2, [sp, #0x18]\n    str r0, [sp, #0x4c]\n    ldr r0, [sp, #0x50]\n    str r3, [sp, #0x1c]\n    str r0, [sp, #0x50]\n    ldr r0, [sp, #0x54]\n    str r0, [sp, #0x54]\n    mov r0, #0\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    ldr r2, [sp, #0x1c]\n    ldr r3, _0221F070 ; =0x000003DE\n    ldrh r2, [r2]\n    ldr r1, _0221F074 ; =ov10_0222B098\n    mov r0, #0\n    mov ip, r2\n    lsl r2, r2, #4\n    add r2, r7, r2\n    ldrh r3, [r2, r3]\n    str r2, [sp, #0x20]\n    ldr r2, _0221F078 ; =0x0000FFFF\n    ldrh r4, [r1]\n    cmp r4, r3\n    beq _0221EFCA\n    add r1, r1, #2\n    ldrh r4, [r1]\n    add r0, r0, #1\n    cmp r4, r2\n    bne _0221EFBA\n    ldr r2, _0221F07C ; =ov10_0222B080\n    ldr r4, _0221F078 ; =0x0000FFFF\n    mov r1, #0\n    ldrh r5, [r2]\n    cmp r5, r3\n    beq _0221EFE0\n    add r2, r2, #2\n    ldrh r5, [r2]\n    add r1, r1, #1\n    cmp r5, r4\n    bne _0221EFD0\n    lsl r2, r1, #1\n    ldr r1, _0221F07C ; =ov10_0222B080\n    ldrh r1, [r1, r2]\n    ldr r2, _0221F078 ; =0x0000FFFF\n    cmp r1, r2\n    bne _0221F006\n    mov r1, ip\n    cmp r1, #0\n    beq _0221F03C\n    lsl r1, r0, #1\n    ldr r0, _0221F074 ; =ov10_0222B098\n    ldrh r0, [r0, r1]\n    cmp r0, r2\n    bne _0221F03C\n    ldr r1, _0221F080 ; =0x000003E1\n    ldr r0, [sp, #0x20]\n    ldrb r0, [r0, r1]\n    cmp r0, #1\n    bls _0221F03C\n    ldr r0, [sp, #0x54]\n    cmp r0, #1\n    bne _0221F018\n    ldr r0, [sp, #0x28]\n    add r1, r7, r0\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    b _0221F01A\n    mov r0, #0x64\n    ldr r1, [sp, #0x48]\n    mov r2, ip\n    str r1, [sp]\n    ldr r1, [sp, #0x18]\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x4c]\n    str r1, [sp, #8]\n    ldr r1, [sp, #0x50]\n    str r1, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #0x44]\n    add r1, r7, #0\n    bl ov10_0221F084\n    str r0, [r6]\n    b _0221F040\n    mov r0, #0\n    str r0, [r6]\n    ldr r0, [sp, #0x1c]\n    add r6, r6, #4\n    add r0, r0, #2\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x28]\n    add r0, r0, #1\n    str r0, [sp, #0x28]\n    cmp r0, #4\n    blt _0221EFA4\n    ldr r2, [sp, #0x40]\n    mov r3, #0\n    ldr r1, [r2]\n    ldr r0, [sp, #0x24]\n    cmp r0, r1\n    bge _0221F060\n    str r1, [sp, #0x24]\n    add r3, r3, #1\n    add r2, r2, #4\n    cmp r3, #4\n    blt _0221F056\n    ldr r0, [sp, #0x24]\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221F070: .word 0x000003DE\n    _0221F074: .word ov10_0222B098\n    _0221F078: .word 0x0000FFFF\n    _0221F07C: .word ov10_0222B080\n    _0221F080: .word 0x000003E1"
    );
    #endif
}

void ov10_0221F084(void) {
    /* Original at 0x0221F084 */
    /* Requires manual decompilation - 466 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    add r6, r1, #0\n    ldr r1, [sp, #0x60]\n    str r3, [sp, #0x1c]\n    str r1, [sp, #0x60]\n    ldr r1, [sp, #0x64]\n    str r0, [sp, #0x18]\n    str r1, [sp, #0x64]\n    mov r1, #0x3d\n    lsl r1, r1, #4\n    ldrb r1, [r6, r1]\n    add r5, r2, #0\n    bl BattleSystem_GetFieldSide\n    mov r4, #0\n    str r0, [sp, #0x28]\n    add r0, r4, #0\n    add r7, r4, #0\n    str r4, [sp, #0x20]\n    str r0, [sp, #0x48]\n    cmp r5, #0xd8\n    bgt _0221F0EA\n    blt _0221F0B6\n    b _0221F2F4\n    cmp r5, #0x52\n    bgt _0221F0D8\n    blt _0221F0BE\n    b _0221F2B8\n    cmp r5, #0x31\n    bgt _0221F0C8\n    bne _0221F0C6\n    b _0221F36E\n    b _0221F3B0\n    cmp r5, #0x45\n    bgt _0221F0D6\n    cmp r5, #0x43\n    blt _0221F0D6\n    beq _0221F120\n    cmp r5, #0x45\n    beq _0221F0DE\n    b _0221F3B0\n    cmp r5, #0x65\n    bgt _0221F0E2\n    bne _0221F0E0\n    b _0221F2BE\n    b _0221F3B0\n    cmp r5, #0x95\n    bne _0221F0E8\n    b _0221F2CE\n    b _0221F3B0\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    cmp r5, r0\n    bgt _0221F110\n    blt _0221F0F6\n    b _0221F28E\n    cmp r5, #0xde\n    bgt _0221F10A\n    cmp r5, #0xda\n    blt _0221F108\n    bne _0221F102\n    b _0221F30E\n    cmp r5, #0xde\n    bne _0221F108\n    b _0221F32C\n    b _0221F3B0\n    cmp r5, #0xed\n    beq _0221F1E8\n    b _0221F3B0\n    add r1, r0, #0\n    add r1, #0x57\n    cmp r5, r1\n    bgt _0221F12A\n    add r1, r0, #0\n    add r1, #0x57\n    cmp r5, r1\n    blt _0221F122\n    b _0221F374\n    add r0, r0, #3\n    cmp r5, r0\n    beq _0221F132\n    b _0221F3B0\n    add r0, #0x59\n    cmp r5, r0\n    beq _0221F15A\n    b _0221F3B0\n    ldr r0, [sp, #0x68]\n    cmp r0, #0x67\n    beq _0221F166\n    ldr r0, [sp, #0x6c]\n    cmp r0, #0\n    bne _0221F166\n    ldr r1, [sp, #0x1c]\n    add r0, r6, #0\n    mov r2, #0xb\n    bl GetItemVar\n    add r4, r0, #0\n    beq _0221F166\n    ldr r1, [sp, #0x1c]\n    add r0, r6, #0\n    mov r2, #0xc\n    bl GetItemVar\n    add r7, r0, #0\n    b _0221F3B4\n    ldr r0, [sp, #0x68]\n    cmp r0, #0x67\n    beq _0221F166\n    ldr r0, [sp, #0x6c]\n    cmp r0, #0\n    beq _0221F168\n    b _0221F3B4\n    ldr r1, [sp, #0x1c]\n    add r0, r6, #0\n    mov r2, #1\n    bl GetItemVar\n    sub r0, #0x7e\n    cmp r0, #0xf\n    bhi _0221F1E4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221F184: ; jump table\n    mov r7, #1\n    b _0221F3B4\n    mov r7, #2\n    b _0221F3B4\n    mov r7, #3\n    b _0221F3B4\n    mov r7, #4\n    b _0221F3B4\n    mov r7, #5\n    b _0221F3B4\n    mov r7, #6\n    b _0221F3B4\n    mov r7, #7\n    b _0221F3B4\n    mov r7, #8\n    b _0221F3B4\n    mov r7, #0xa\n    b _0221F3B4\n    mov r7, #0xb\n    b _0221F3B4\n    mov r7, #0xc\n    b _0221F3B4\n    mov r7, #0xd\n    b _0221F3B4\n    mov r7, #0xe\n    b _0221F3B4\n    mov r7, #0xf\n    b _0221F3B4\n    mov r7, #0x10\n    b _0221F3B4\n    mov r7, #0x11\n    b _0221F3B4\n    mov r7, #0\n    b _0221F3B4\n    ldr r0, [sp, #0x60]\n    ldr r1, [sp, #0x60]\n    ldrb r0, [r0, #1]\n    ldrb r3, [r1, #4]\n    ldrb r1, [r1, #5]\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x60]\n    str r1, [sp, #0x34]\n    ldrb r0, [r0]\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1a\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x60]\n    str r1, [sp, #0x38]\n    ldrb r2, [r0, #2]\n    lsl r1, r3, #0x1f\n    lsr r1, r1, #0x1b\n    ldrb r0, [r0, #3]\n    str r1, [sp, #0x3c]\n    mov r4, #1\n    lsl r1, r0, #0x1f\n    lsr r1, r1, #0x1c\n    str r1, [sp, #0x40]\n    lsl r1, r2, #0x1f\n    lsr r7, r1, #0x1d\n    ldr r1, [sp, #0x30]\n    and r1, r4\n    ldr r4, [sp, #0x2c]\n    lsl r4, r4, #0x1f\n    lsr r4, r4, #0x1e\n    orr r1, r4\n    add r4, r7, #0\n    orr r4, r1\n    ldr r1, [sp, #0x40]\n    orr r4, r1\n    ldr r1, [sp, #0x3c]\n    orr r4, r1\n    ldr r1, [sp, #0x38]\n    orr r1, r4\n    str r1, [sp, #0x24]\n    mov r1, #2\n    ldr r4, [sp, #0x34]\n    and r3, r1\n    and r4, r1\n    lsl r4, r4, #4\n    str r4, [sp, #0x44]\n    and r0, r1\n    lsl r4, r3, #3\n    lsl r3, r0, #2\n    add r0, r2, #0\n    and r0, r1\n    lsl r2, r0, #1\n    ldr r0, [sp, #0x30]\n    and r0, r1\n    asr r7, r0, #1\n    ldr r0, [sp, #0x2c]\n    and r0, r1\n    orr r0, r7\n    orr r0, r2\n    orr r0, r3\n    add r1, r4, #0\n    orr r1, r0\n    ldr r0, [sp, #0x44]\n    orr r1, r0\n    mov r0, #0x28\n    mul r0, r1\n    mov r1, #0x3f\n    bl _s32_div_f\n    add r4, r0, #0\n    ldr r1, [sp, #0x24]\n    mov r0, #0xf\n    mul r0, r1\n    mov r1, #0x3f\n    add r4, #0x1e\n    bl _s32_div_f\n    add r7, r0, #1\n    cmp r7, #9\n    bge _0221F28A\n    b _0221F3B4\n    add r7, r7, #1\n    b _0221F3B4\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    ldrb r0, [r6, r0]\n    ldr r2, _0221F454 ; =0x000021F0\n    lsl r0, r0, #2\n    add r0, r6, r0\n    ldr r1, [r0, r2]\n    mov r0, #0x19\n    mul r0, r1\n    ldr r1, [sp, #0x64]\n    lsl r1, r1, #2\n    add r1, r6, r1\n    ldr r1, [r1, r2]\n    bl _u32_div_f\n    add r4, r0, #1\n    cmp r4, #0x96\n    ble _0221F2B4\n    mov r4, #0x96\n    mov r7, #0\n    b _0221F3B4\n    mov r0, #0x28\n    str r0, [sp, #0x20]\n    b _0221F3B4\n    ldr r0, [sp, #0x64]\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221F458 ; =0x00002D74\n    add r1, r6, r1\n    ldrb r0, [r1, r0]\n    str r0, [sp, #0x20]\n    b _0221F3B4\n    ldr r0, [sp, #0x18]\n    bl BattleSystem_Random\n    mov r1, #0xb\n    bl _s32_div_f\n    ldr r0, [sp, #0x64]\n    mov r2, #0xc0\n    mul r2, r0\n    ldr r0, _0221F458 ; =0x00002D74\n    add r2, r6, r2\n    ldrb r2, [r2, r0]\n    add r0, r1, #5\n    mov r1, #0xa\n    mul r0, r2\n    bl _s32_div_f\n    str r0, [sp, #0x20]\n    b _0221F3B4\n    ldr r0, [sp, #0x64]\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221F45C ; =0x00002D75\n    add r1, r6, r1\n    ldrb r1, [r1, r0]\n    mov r0, #0xa\n    mul r0, r1\n    mov r1, #0x19\n    bl _s32_div_f\n    add r4, r0, #0\n    b _0221F3B4\n    ldr r0, [sp, #0x64]\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, _0221F45C ; =0x00002D75\n    add r1, r6, r1\n    ldrb r1, [r1, r0]\n    mov r0, #0xff\n    sub r1, r0, r1\n    mov r0, #0xa\n    mul r0, r1\n    mov r1, #0x19\n    bl _s32_div_f\n    add r4, r0, #0\n    b _0221F3B4\n    ldr r0, [sp, #0x18]\n    bl BattleSystem_Random\n    mov r1, #0x64\n    bl _s32_div_f\n    cmp r1, #5\n    bge _0221F340\n    mov r4, #0xa\n    b _0221F36A\n    cmp r1, #0xf\n    bge _0221F348\n    mov r4, #0x1e\n    b _0221F36A\n    cmp r1, #0x23\n    bge _0221F350\n    mov r4, #0x32\n    b _0221F36A\n    cmp r1, #0x41\n    bge _0221F358\n    mov r4, #0x46\n    b _0221F36A\n    cmp r1, #0x55\n    bge _0221F360\n    mov r4, #0x5a\n    b _0221F36A\n    cmp r1, #0x5f\n    bge _0221F368\n    mov r4, #0x6e\n    b _0221F36A\n    mov r4, #0x96\n    mov r7, #0\n    b _0221F3B4\n    mov r0, #0x14\n    str r0, [sp, #0x20]\n    b _0221F3B4\n    mov r2, #0x3d\n    lsl r2, r2, #4\n    ldrb r3, [r6, r2]\n    mov r2, #0xc0\n    ldr r1, _0221F460 ; =ov10_0222B068\n    mul r2, r3\n    add r3, r6, r2\n    ldr r2, _0221F464 ; =0x00002D60\n    ldr r4, _0221F468 ; =0x0000FFFF\n    ldr r2, [r3, r2]\n    mov r0, #0\n    ldrh r3, [r1]\n    cmp r3, r2\n    bge _0221F39A\n    add r1, r1, #4\n    ldrh r3, [r1]\n    add r0, r0, #1\n    cmp r3, r4\n    bne _0221F38A\n    ldr r1, _0221F460 ; =ov10_0222B068\n    lsl r0, r0, #2\n    ldrh r2, [r1, r0]\n    ldr r1, _0221F468 ; =0x0000FFFF\n    cmp r2, r1\n    beq _0221F3AC\n    ldr r1, _0221F46C ; =ov10_0222B06A\n    ldrh r4, [r1, r0]\n    b _0221F3B4\n    mov r4, #0x78\n    b _0221F3B4\n    mov r4, #0\n    add r7, r4, #0\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    bne _0221F3FE\n    mov r0, #6\n    lsl r0, r0, #6\n    mov ip, r0\n    ldr r0, [r6, r0]\n    ldr r3, [sp, #0x28]\n    str r0, [sp]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x64]\n    lsl r3, r3, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    ldrb r0, [r6, r0]\n    add r4, r6, r3\n    mov r3, ip\n    str r0, [sp, #0x10]\n    mov r0, #1\n    str r0, [sp, #0x14]\n    add r3, #0x3c\n    ldr r0, [sp, #0x18]\n    ldr r3, [r4, r3]\n    add r1, r6, #0\n    add r2, r5, #0\n    bl CalcMoveDamage\n    str r0, [sp, #0x20]\n    b _0221F40A\n    ldr r1, _0221F470 ; =0x0000213C\n    mov r0, #2\n    ldr r2, [r6, r1]\n    lsl r0, r0, #0xa\n    orr r0, r2\n    str r0, [r6, r1]\n    ldr r0, [sp, #0x64]\n    add r1, r6, #0\n    str r0, [sp]\n    mov r0, #0x3d\n    lsl r0, r0, #4\n    ldrb r0, [r6, r0]\n    add r2, r5, #0\n    add r3, r7, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x20]\n    str r0, [sp, #8]\n    add r0, sp, #0x48\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x18]\n    bl ov12_02251D28\n    ldr r2, _0221F470 ; =0x0000213C\n    ldr r1, _0221F474 ; =0xFFFFF7FF\n    ldr r3, [r6, r2]\n    and r1, r3\n    str r1, [r6, r2]\n    ldr r2, [sp, #0x48]\n    ldr r1, _0221F478 ; =0x00140808\n    tst r1, r2\n    beq _0221F442\n    add sp, #0x4c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r1, sp, #0x70\n    ldrb r1, [r1]\n    mul r1, r0\n    add r0, r1, #0\n    mov r1, #0x64\n    bl DamageDivide\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}\n    _0221F454: .word 0x000021F0\n    _0221F458: .word 0x00002D74\n    _0221F45C: .word 0x00002D75\n    _0221F460: .word ov10_0222B068\n    _0221F464: .word 0x00002D60\n    _0221F468: .word 0x0000FFFF\n    _0221F46C: .word ov10_0222B06A\n    _0221F470: .word 0x0000213C\n    _0221F474: .word 0xFFFFF7FF\n    _0221F478: .word 0x00140808"
    );
    #endif
}

void ov10_0221F47C(void) {
    /* Original at 0x0221F47C */
    /* Requires manual decompilation - 165 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    ldr r2, _0221F5E8 ; =0x00000137\n    add r7, r0, #0\n    add r4, r1, #0\n    cmp r3, r2\n    bgt _0221F494\n    blt _0221F48E\n    b _0221F590\n    cmp r3, #0xed\n    beq _0221F536\n    b _0221F5E2\n    add r0, r2, #0\n    add r0, #0x34\n    cmp r3, r0\n    bgt _0221F4A4\n    add r2, #0x34\n    cmp r3, r2\n    beq _0221F4AC\n    b _0221F5E2\n    add r2, #0x8a\n    cmp r3, r2\n    beq _0221F4B8\n    b _0221F5E2\n    add r0, r4, #0\n    add r1, r6, #0\n    bl GetNaturalGiftType\n    add r5, r0, #0\n    b _0221F5E4\n    add r0, r4, #0\n    add r1, r6, #0\n    bl GetBattlerHeldItemEffect\n    sub r0, #0x7e\n    cmp r0, #0xf\n    bhi _0221F532\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221F4D2: ; jump table\n    mov r5, #1\n    b _0221F5E4\n    mov r5, #2\n    b _0221F5E4\n    mov r5, #3\n    b _0221F5E4\n    mov r5, #4\n    b _0221F5E4\n    mov r5, #5\n    b _0221F5E4\n    mov r5, #6\n    b _0221F5E4\n    mov r5, #7\n    b _0221F5E4\n    mov r5, #8\n    b _0221F5E4\n    mov r5, #0xa\n    b _0221F5E4\n    mov r5, #0xb\n    b _0221F5E4\n    mov r5, #0xc\n    b _0221F5E4\n    mov r5, #0xd\n    b _0221F5E4\n    mov r5, #0xe\n    b _0221F5E4\n    mov r5, #0xf\n    b _0221F5E4\n    mov r5, #0x10\n    b _0221F5E4\n    mov r5, #0x11\n    b _0221F5E4\n    mov r5, #0\n    b _0221F5E4\n    ldr r0, _0221F5EC ; =0x00002D54\n    add r1, r4, r0\n    mov r0, #0xc0\n    mul r0, r6\n    ldr r4, [r1, r0]\n    lsl r0, r4, #2\n    lsr r0, r0, #0x1b\n    lsl r0, r0, #0x1f\n    lsr r5, r0, #0x1a\n    lsl r0, r4, #7\n    lsr r0, r0, #0x1b\n    lsl r0, r0, #0x1f\n    lsr r3, r0, #0x1b\n    lsl r0, r4, #0xc\n    lsr r0, r0, #0x1b\n    lsl r0, r0, #0x1f\n    lsr r2, r0, #0x1c\n    lsl r0, r4, #0x11\n    lsr r0, r0, #0x1b\n    lsl r0, r0, #0x1f\n    lsr r1, r0, #0x1d\n    lsl r0, r4, #0x1b\n    lsl r4, r4, #0x16\n    lsr r4, r4, #0x1b\n    lsr r6, r0, #0x1b\n    mov r0, #1\n    lsl r4, r4, #0x1f\n    and r0, r6\n    lsr r4, r4, #0x1e\n    orr r0, r4\n    orr r0, r1\n    orr r0, r2\n    orr r0, r3\n    add r1, r5, #0\n    orr r1, r0\n    mov r0, #0xf\n    mul r0, r1\n    mov r1, #0x3f\n    bl _s32_div_f\n    add r5, r0, #1\n    cmp r5, #9\n    blt _0221F5E4\n    add r5, r5, #1\n    b _0221F5E4\n    mov r2, #0xd\n    str r2, [sp]\n    mov r2, #8\n    mov r3, #0\n    bl CheckAbilityActive\n    cmp r0, #0\n    bne _0221F5E4\n    mov r0, #0x4c\n    str r0, [sp]\n    add r0, r7, #0\n    add r1, r4, #0\n    mov r2, #8\n    mov r3, #0\n    bl CheckAbilityActive\n    cmp r0, #0\n    bne _0221F5E4\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    ldr r1, _0221F5F0 ; =0x000080FF\n    tst r1, r0\n    beq _0221F5E4\n    mov r1, #3\n    tst r1, r0\n    beq _0221F5C8\n    mov r5, #0xb\n    mov r1, #0xc\n    tst r1, r0\n    beq _0221F5D0\n    mov r5, #5\n    mov r1, #0x30\n    tst r1, r0\n    beq _0221F5D8\n    mov r5, #0xa\n    mov r1, #0xc0\n    tst r0, r1\n    beq _0221F5E4\n    mov r5, #0xf\n    b _0221F5E4\n    mov r5, #0\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221F5E8: .word 0x00000137\n    _0221F5EC: .word 0x00002D54\n    _0221F5F0: .word 0x000080FF"
    );
    #endif
}

void ov10_0221F5F4(void) {
    /* Original at 0x0221F5F4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r2, #0xc0\n    mul r2, r1\n    add r5, r0, r2\n    mov r2, #0xb7\n    lsl r2, r2, #6\n    ldr r4, [r5, r2]\n    mov r3, #0x20\n    tst r3, r4\n    beq _0221F620\n    add r2, #8\n    ldr r2, [r5, r2]\n    lsl r2, r2, #0x11\n    lsr r2, r2, #0x1e\n    bne _0221F620\n    add r1, r0, r1\n    ldr r0, _0221F628 ; =0x000021A4\n    mov r2, #6\n    strb r2, [r1, r0]\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    mov r0, #0\n    pop {r4, r5}\n    bx lr\n    nop\n    _0221F628: .word 0x000021A4"
    );
    #endif
}

void ov10_0221F62C(void) {
    /* Original at 0x0221F62C */
    /* Requires manual decompilation - 202 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    str r0, [sp, #0x14]\n    add r5, r1, #0\n    str r2, [sp, #0x18]\n    bl BattleSystem_GetBattleType\n    mov r1, #2\n    tst r0, r1\n    beq _0221F646\n    add sp, #0x44\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x18]\n    mov r1, #1\n    add r4, r0, #0\n    eor r4, r1\n    mov r1, #0xc0\n    add r0, r4, #0\n    mul r0, r1\n    add r2, r5, r0\n    ldr r0, _0221F7DC ; =0x00002D67\n    ldrb r0, [r2, r0]\n    cmp r0, #0x19\n    bne _0221F6C4\n    mov r0, #0\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x18]\n    mul r1, r0\n    add r6, r5, r1\n    ldr r0, _0221F7E0 ; =0x00002D4C\n    ldr r2, [sp, #0x18]\n    ldrh r7, [r6, r0]\n    ldr r0, [sp, #0x14]\n    add r1, r5, #0\n    add r3, r7, #0\n    bl ov10_0221F47C\n    add r3, r0, #0\n    cmp r7, #0\n    beq _0221F6A8\n    mov r0, #0\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0x18]\n    add r1, r5, #0\n    str r0, [sp]\n    str r4, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, sp, #0x40\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x14]\n    add r2, r7, #0\n    bl ov12_02251D28\n    ldr r1, [sp, #0x40]\n    mov r0, #2\n    tst r0, r1\n    beq _0221F6A8\n    add sp, #0x44\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x28]\n    add r6, r6, #2\n    add r0, r0, #1\n    str r0, [sp, #0x28]\n    cmp r0, #4\n    blt _0221F668\n    mov r0, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    bl BattleSystem_GetPartySize\n    cmp r0, #0\n    bgt _0221F6C6\n    b _0221F7D6\n    ldr r0, [sp, #0x18]\n    add r0, r5, r0\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x20]\n    bl BattleSystem_GetPartyMon\n    mov r1, #0xa3\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221F7C0\n    add r0, r6, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221F7C0\n    add r0, r6, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0221F7E4 ; =0x000001EE\n    cmp r0, r1\n    beq _0221F7C0\n    ldr r1, _0221F7E8 ; =0x0000219C\n    ldr r0, [sp, #0x24]\n    ldrb r1, [r0, r1]\n    ldr r0, [sp, #0x20]\n    cmp r0, r1\n    beq _0221F7C0\n    mov r7, #0\n    add r1, r7, #0\n    add r0, r6, #0\n    add r1, #0x36\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #0x1c]\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov12_02258BB4\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    beq _0221F7BA\n    mov r0, #0\n    str r0, [sp, #0x40]\n    add r0, r6, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x30]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GetBattlerAbility\n    str r0, [sp, #0x34]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GetBattlerHeldItemEffect\n    str r0, [sp, #0x38]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    str r0, [sp, #0x3c]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x1c\n    mov r3, #0\n    bl GetBattlerVar\n    ldr r1, [sp, #0x34]\n    ldr r2, [sp, #0x2c]\n    str r1, [sp]\n    ldr r1, [sp, #0x38]\n    ldr r3, [sp, #0x30]\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x3c]\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, sp, #0x40\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x1c]\n    add r0, r5, #0\n    bl ov12_02252054\n    ldr r1, [sp, #0x40]\n    mov r0, #2\n    tst r0, r1\n    beq _0221F7BA\n    ldr r0, [sp, #0x14]\n    bl BattleSystem_Random\n    mov r1, #3\n    bl _s32_div_f\n    cmp r1, #2\n    bge _0221F7BA\n    ldr r0, [sp, #0x18]\n    ldr r1, _0221F7EC ; =0x000021A4\n    add r2, r5, r0\n    ldr r0, [sp, #0x20]\n    add sp, #0x44\n    strb r0, [r2, r1]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    add r7, r7, #1\n    cmp r7, #4\n    blt _0221F710\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x14]\n    bl BattleSystem_GetPartySize\n    ldr r1, [sp, #0x20]\n    cmp r1, r0\n    bge _0221F7D6\n    b _0221F6CC\n    mov r0, #0\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    _0221F7DC: .word 0x00002D67\n    _0221F7E0: .word 0x00002D4C\n    _0221F7E4: .word 0x000001EE\n    _0221F7E8: .word 0x0000219C\n    _0221F7EC: .word 0x000021A4"
    );
    #endif
}

void ov10_0221F7F0(void) {
    /* Original at 0x0221F7F0 */
    /* Requires manual decompilation - 614 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xbc\n    add r7, r0, #0\n    add r5, r1, #0\n    str r2, [sp, #0x14]\n    bl BattleSystem_GetBattleType\n    mov r4, #2\n    tst r0, r4\n    beq _0221F808\n    mov r6, #0\n    b _0221F80C\n    mov r6, #0\n    add r4, r6, #0\n    ldr r1, [sp, #0x14]\n    mov r0, #0\n    str r0, [sp, #0x5c]\n    str r0, [sp, #0x74]\n    mov r0, #0xc0\n    add r2, r1, #0\n    mul r2, r0\n    add r1, r5, r2\n    str r1, [sp, #0x44]\n    add r1, r6, #0\n    mul r1, r0\n    mul r0, r4\n    add r1, r5, r1\n    add r0, r5, r0\n    str r1, [sp, #0x3c]\n    str r0, [sp, #0x38]\n    ldr r1, [sp, #0x44]\n    ldr r0, _0221FB5C ; =0x00002D4C\n    ldr r2, [sp, #0x14]\n    ldrh r0, [r1, r0]\n    add r1, r5, #0\n    str r0, [sp, #0x40]\n    ldr r3, [sp, #0x40]\n    add r0, r7, #0\n    bl ov10_0221F47C\n    str r0, [sp, #0x64]\n    ldr r0, [sp, #0x40]\n    cmp r0, #0\n    beq _0221F8C6\n    lsl r0, r0, #4\n    add r1, r5, r0\n    ldr r0, _0221FB60 ; =0x000003E1\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _0221F8C6\n    ldr r0, [sp, #0x5c]\n    ldr r1, [sp, #0x3c]\n    add r0, r0, #1\n    str r0, [sp, #0x5c]\n    mov r0, #0\n    str r0, [sp, #0xb8]\n    ldr r0, _0221FB64 ; =0x00002D8C\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0221F882\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x40]\n    str r0, [sp]\n    str r6, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, sp, #0xb8\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x64]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov12_02251D28\n    ldr r1, [sp, #0xb8]\n    mov r0, #8\n    tst r0, r1\n    bne _0221F890\n    add sp, #0xbc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [sp, #0xb8]\n    ldr r1, [sp, #0x38]\n    ldr r0, _0221FB64 ; =0x00002D8C\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0221F8B8\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x40]\n    str r0, [sp]\n    str r4, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, sp, #0xb8\n    str r0, [sp, #0xc]\n    ldr r3, [sp, #0x64]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov12_02251D28\n    ldr r1, [sp, #0xb8]\n    mov r0, #8\n    tst r0, r1\n    bne _0221F8C6\n    add sp, #0xbc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x44]\n    add r0, r0, #2\n    str r0, [sp, #0x44]\n    ldr r0, [sp, #0x74]\n    add r0, r0, #1\n    str r0, [sp, #0x74]\n    cmp r0, #4\n    blt _0221F82C\n    ldr r0, [sp, #0x5c]\n    cmp r0, #2\n    bge _0221F8E2\n    add sp, #0xbc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x14]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x6c]\n    add r0, r7, #0\n    bl BattleSystem_GetBattleType\n    mov r1, #0x10\n    tst r0, r1\n    bne _0221F902\n    add r0, r7, #0\n    bl BattleSystem_GetBattleType\n    mov r1, #8\n    tst r0, r1\n    beq _0221F908\n    ldr r0, [sp, #0x6c]\n    str r0, [sp, #0x68]\n    b _0221F916\n    ldr r1, [sp, #0x14]\n    add r0, r7, #0\n    bl BattleSystem_GetBattlerIdPartner\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x68]\n    ldr r1, [sp, #0x14]\n    add r0, r7, #0\n    bl BattleSystem_GetPartySize\n    str r0, [sp, #0x60]\n    mov r0, #0\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x60]\n    cmp r0, #0\n    bgt _0221F92C\n    b _0221FB0E\n    ldr r0, [sp, #0x6c]\n    add r0, r5, r0\n    str r0, [sp, #0x4c]\n    ldr r0, [sp, #0x68]\n    add r0, r5, r0\n    str r0, [sp, #0x48]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x30]\n    add r0, r7, #0\n    bl BattleSystem_GetPartyMon\n    mov r1, #0xa3\n    mov r2, #0\n    str r0, [sp, #0x58]\n    bl GetMonData\n    cmp r0, #0\n    beq _0221F99E\n    ldr r0, [sp, #0x58]\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221F99E\n    ldr r0, [sp, #0x58]\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0221FB68 ; =0x000001EE\n    cmp r0, r1\n    beq _0221F99E\n    ldr r0, _0221FB6C ; =0x0000219C\n    ldr r1, [sp, #0x4c]\n    ldrb r2, [r1, r0]\n    ldr r1, [sp, #0x30]\n    cmp r1, r2\n    beq _0221F99E\n    ldr r1, [sp, #0x48]\n    ldrb r2, [r1, r0]\n    ldr r1, [sp, #0x30]\n    cmp r1, r2\n    beq _0221F99E\n    add r2, r0, #0\n    ldr r1, [sp, #0x4c]\n    add r2, #8\n    ldrb r2, [r1, r2]\n    ldr r1, [sp, #0x30]\n    cmp r1, r2\n    beq _0221F99E\n    ldr r1, [sp, #0x48]\n    add r0, #8\n    ldrb r1, [r1, r0]\n    ldr r0, [sp, #0x30]\n    cmp r0, r1\n    bne _0221F9A0\n    b _0221FB00\n    mov r0, #0\n    str r0, [sp, #0x70]\n    ldr r1, [sp, #0x70]\n    ldr r0, [sp, #0x58]\n    add r1, #0x36\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x28]\n    ldr r2, [sp, #0x58]\n    ldr r3, [sp, #0x28]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov12_02258BB4\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x28]\n    cmp r0, #0\n    beq _0221F9D6\n    lsl r0, r0, #4\n    add r1, r5, r0\n    ldr r0, _0221FB60 ; =0x000003E1\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _0221F9D8\n    b _0221FAF4\n    mov r0, #0\n    str r0, [sp, #0xb8]\n    ldr r1, [sp, #0x3c]\n    ldr r0, _0221FB64 ; =0x00002D8C\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0221FA3E\n    ldr r0, [sp, #0x58]\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x78]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl GetBattlerAbility\n    str r0, [sp, #0x7c]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl GetBattlerHeldItemEffect\n    str r0, [sp, #0x80]\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    str r0, [sp, #0x84]\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x1c\n    mov r3, #0\n    bl GetBattlerVar\n    ldr r1, [sp, #0x7c]\n    ldr r2, [sp, #0x20]\n    str r1, [sp]\n    ldr r1, [sp, #0x80]\n    ldr r3, [sp, #0x78]\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x84]\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, sp, #0xb8\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x28]\n    add r0, r5, #0\n    bl ov12_02252054\n    ldr r1, [sp, #0xb8]\n    mov r0, #2\n    tst r0, r1\n    beq _0221FA66\n    add r0, r7, #0\n    bl BattleSystem_Random\n    mov r1, #3\n    bl _s32_div_f\n    cmp r1, #2\n    bge _0221FA66\n    ldr r0, [sp, #0x14]\n    ldr r1, _0221FB70 ; =0x000021A4\n    add r2, r5, r0\n    ldr r0, [sp, #0x30]\n    add sp, #0xbc\n    strb r0, [r2, r1]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [sp, #0xb8]\n    ldr r1, [sp, #0x38]\n    ldr r0, _0221FB64 ; =0x00002D8C\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0221FACC\n    ldr r0, [sp, #0x58]\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x88]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GetBattlerAbility\n    str r0, [sp, #0x8c]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GetBattlerHeldItemEffect\n    str r0, [sp, #0x90]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    str r0, [sp, #0x94]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x1c\n    mov r3, #0\n    bl GetBattlerVar\n    ldr r1, [sp, #0x8c]\n    ldr r2, [sp, #0x20]\n    str r1, [sp]\n    ldr r1, [sp, #0x90]\n    ldr r3, [sp, #0x88]\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x94]\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, sp, #0xb8\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x28]\n    add r0, r5, #0\n    bl ov12_02252054\n    ldr r1, [sp, #0xb8]\n    mov r0, #2\n    tst r0, r1\n    beq _0221FAF4\n    add r0, r7, #0\n    bl BattleSystem_Random\n    mov r1, #3\n    bl _s32_div_f\n    cmp r1, #2\n    bge _0221FAF4\n    ldr r0, [sp, #0x14]\n    ldr r1, _0221FB70 ; =0x000021A4\n    add r2, r5, r0\n    ldr r0, [sp, #0x30]\n    add sp, #0xbc\n    strb r0, [r2, r1]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x70]\n    add r0, r0, #1\n    str r0, [sp, #0x70]\n    cmp r0, #4\n    bge _0221FB00\n    b _0221F9A4\n    ldr r0, [sp, #0x30]\n    add r1, r0, #1\n    ldr r0, [sp, #0x60]\n    str r1, [sp, #0x30]\n    cmp r1, r0\n    bge _0221FB0E\n    b _0221F938\n    mov r0, #0\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x60]\n    cmp r0, #0\n    bgt _0221FB1A\n    b _0221FD1C\n    ldr r0, [sp, #0x6c]\n    add r0, r5, r0\n    str r0, [sp, #0x54]\n    ldr r0, [sp, #0x68]\n    add r0, r5, r0\n    str r0, [sp, #0x50]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x34]\n    add r0, r7, #0\n    bl BattleSystem_GetPartyMon\n    mov r1, #0xa3\n    mov r2, #0\n    str r0, [sp, #0x1c]\n    bl GetMonData\n    cmp r0, #0\n    beq _0221FBA8\n    ldr r0, [sp, #0x1c]\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221FBA8\n    ldr r0, [sp, #0x1c]\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0221FB68 ; =0x000001EE\n    b _0221FB74\n    nop\n    _0221FB5C: .word 0x00002D4C\n    _0221FB60: .word 0x000003E1\n    _0221FB64: .word 0x00002D8C\n    _0221FB68: .word 0x000001EE\n    _0221FB6C: .word 0x0000219C\n    _0221FB70: .word 0x000021A4\n    cmp r0, r1\n    beq _0221FBA8\n    ldr r0, _0221FD24 ; =0x0000219C\n    ldr r1, [sp, #0x54]\n    ldrb r2, [r1, r0]\n    ldr r1, [sp, #0x34]\n    cmp r1, r2\n    beq _0221FBA8\n    ldr r1, [sp, #0x50]\n    ldrb r2, [r1, r0]\n    ldr r1, [sp, #0x34]\n    cmp r1, r2\n    beq _0221FBA8\n    add r2, r0, #0\n    ldr r1, [sp, #0x54]\n    add r2, #8\n    ldrb r2, [r1, r2]\n    ldr r1, [sp, #0x34]\n    cmp r1, r2\n    beq _0221FBA8\n    ldr r1, [sp, #0x50]\n    add r0, #8\n    ldrb r1, [r1, r0]\n    ldr r0, [sp, #0x34]\n    cmp r0, r1\n    bne _0221FBAA\n    b _0221FD0E\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp, #0x1c]\n    add r1, #0x36\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x2c]\n    ldr r2, [sp, #0x1c]\n    ldr r3, [sp, #0x2c]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov12_02258BB4\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x2c]\n    cmp r0, #0\n    beq _0221FBE0\n    lsl r0, r0, #4\n    add r1, r5, r0\n    ldr r0, _0221FD28 ; =0x000003E1\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _0221FBE2\n    b _0221FD02\n    mov r0, #0\n    str r0, [sp, #0xb8]\n    ldr r1, [sp, #0x3c]\n    ldr r0, _0221FD2C ; =0x00002D8C\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0221FC48\n    ldr r0, [sp, #0x1c]\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x98]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl GetBattlerAbility\n    str r0, [sp, #0x9c]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl GetBattlerHeldItemEffect\n    str r0, [sp, #0xa0]\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    str r0, [sp, #0xa4]\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #0x1c\n    mov r3, #0\n    bl GetBattlerVar\n    ldr r1, [sp, #0x9c]\n    ldr r2, [sp, #0x24]\n    str r1, [sp]\n    ldr r1, [sp, #0xa0]\n    ldr r3, [sp, #0x98]\n    str r1, [sp, #4]\n    ldr r1, [sp, #0xa4]\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, sp, #0xb8\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x2c]\n    add r0, r5, #0\n    bl ov12_02252054\n    ldr r0, [sp, #0xb8]\n    cmp r0, #0\n    bne _0221FC72\n    add r0, r7, #0\n    bl BattleSystem_Random\n    lsr r1, r0, #0x1f\n    lsl r2, r0, #0x1f\n    sub r2, r2, r1\n    mov r0, #0x1f\n    ror r2, r0\n    add r0, r1, r2\n    bne _0221FC72\n    ldr r0, [sp, #0x14]\n    ldr r1, _0221FD30 ; =0x000021A4\n    add r2, r5, r0\n    ldr r0, [sp, #0x34]\n    add sp, #0xbc\n    strb r0, [r2, r1]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [sp, #0xb8]\n    ldr r1, [sp, #0x38]\n    ldr r0, _0221FD2C ; =0x00002D8C\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0221FCD8\n    ldr r0, [sp, #0x1c]\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0xa8]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GetBattlerAbility\n    str r0, [sp, #0xac]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GetBattlerHeldItemEffect\n    str r0, [sp, #0xb0]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    str r0, [sp, #0xb4]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x1c\n    mov r3, #0\n    bl GetBattlerVar\n    ldr r1, [sp, #0xac]\n    ldr r2, [sp, #0x24]\n    str r1, [sp]\n    ldr r1, [sp, #0xb0]\n    ldr r3, [sp, #0xa8]\n    str r1, [sp, #4]\n    ldr r1, [sp, #0xb4]\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, sp, #0xb8\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x2c]\n    add r0, r5, #0\n    bl ov12_02252054\n    ldr r0, [sp, #0xb8]\n    cmp r0, #0\n    bne _0221FD02\n    add r0, r7, #0\n    bl BattleSystem_Random\n    lsr r1, r0, #0x1f\n    lsl r2, r0, #0x1f\n    sub r2, r2, r1\n    mov r0, #0x1f\n    ror r2, r0\n    add r0, r1, r2\n    bne _0221FD02\n    ldr r0, [sp, #0x14]\n    ldr r1, _0221FD30 ; =0x000021A4\n    add r2, r5, r0\n    ldr r0, [sp, #0x34]\n    add sp, #0xbc\n    strb r0, [r2, r1]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #4\n    bge _0221FD0E\n    b _0221FBAE\n    ldr r0, [sp, #0x34]\n    add r1, r0, #1\n    ldr r0, [sp, #0x60]\n    str r1, [sp, #0x34]\n    cmp r1, r0\n    bge _0221FD1C\n    b _0221FB26\n    mov r0, #0\n    add sp, #0xbc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221FD24: .word 0x0000219C\n    _0221FD28: .word 0x000003E1\n    _0221FD2C: .word 0x00002D8C\n    _0221FD30: .word 0x000021A4"
    );
    #endif
}

void ov10_0221FD34(void) {
    /* Original at 0x0221FD34 */
    /* Requires manual decompilation - 156 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r6, r2, #0\n    add r4, r1, #0\n    add r1, r6, #0\n    add r5, r0, #0\n    str r3, [sp, #0x10]\n    bl ov12_0223AB0C\n    mov r1, #1\n    eor r0, r1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    add r0, r5, #0\n    bl BattleSystem_GetBattlerFromBattlerType\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x24]\n    bl MaskOfFlagNo\n    ldr r1, _0221FE84 ; =0x00003108\n    ldrb r1, [r4, r1]\n    tst r0, r1\n    bne _0221FDDC\n    mov r0, #0\n    str r0, [sp, #0x28]\n    mov r0, #0xc0\n    mul r0, r6\n    add r7, r4, r0\n    ldr r0, _0221FE88 ; =0x00002D4C\n    add r1, r4, #0\n    ldrh r0, [r7, r0]\n    add r2, r6, #0\n    str r0, [sp, #0x20]\n    ldr r3, [sp, #0x20]\n    add r0, r5, #0\n    bl ov10_0221F47C\n    add r3, r0, #0\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    beq _0221FDD0\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x24]\n    str r6, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, sp, #0x2c\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0x20]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov12_02251D28\n    ldr r1, [sp, #0x2c]\n    mov r0, #2\n    tst r0, r1\n    beq _0221FDD0\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    beq _0221FDBA\n    add sp, #0x30\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl BattleSystem_Random\n    mov r1, #0xa\n    bl _s32_div_f\n    cmp r1, #0\n    beq _0221FDD0\n    add sp, #0x30\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x28]\n    add r7, r7, #2\n    add r0, r0, #1\n    str r0, [sp, #0x28]\n    cmp r0, #4\n    blt _0221FD70\n    add r0, r5, #0\n    bl BattleSystem_GetBattleType\n    mov r1, #2\n    tst r0, r1\n    bne _0221FDEE\n    add sp, #0x30\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0x24]\n    add r0, r5, #0\n    bl BattleSystem_GetBattlerIdPartner\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x1c]\n    bl MaskOfFlagNo\n    ldr r1, _0221FE84 ; =0x00003108\n    ldrb r1, [r4, r1]\n    tst r0, r1\n    bne _0221FE7E\n    mov r0, #0\n    str r0, [sp, #0x18]\n    mov r0, #0xc0\n    mul r0, r6\n    add r7, r4, r0\n    ldr r0, _0221FE88 ; =0x00002D4C\n    add r1, r4, #0\n    ldrh r0, [r7, r0]\n    add r2, r6, #0\n    str r0, [sp, #0x14]\n    ldr r3, [sp, #0x14]\n    add r0, r5, #0\n    bl ov10_0221F47C\n    add r3, r0, #0\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _0221FE72\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #0x1c]\n    str r6, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, sp, #0x2c\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0x14]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov12_02251D28\n    ldr r1, [sp, #0x2c]\n    mov r0, #2\n    tst r0, r1\n    beq _0221FE72\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    beq _0221FE5C\n    add sp, #0x30\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl BattleSystem_Random\n    mov r1, #0xa\n    bl _s32_div_f\n    cmp r1, #0\n    beq _0221FE72\n    add sp, #0x30\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x18]\n    add r7, r7, #2\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #4\n    blt _0221FE12\n    mov r0, #0\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221FE84: .word 0x00003108\n    _0221FE88: .word 0x00002D4C"
    );
    #endif
}

void ov10_0221FE8C(void) {
    /* Original at 0x0221FE8C */
    /* Requires manual decompilation - 175 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    mov r3, #1\n    add r6, r0, #0\n    str r1, [sp]\n    str r2, [sp, #4]\n    bl ov10_0221FD34\n    cmp r0, #0\n    beq _0221FEB6\n    add r0, r6, #0\n    bl BattleSystem_Random\n    mov r1, #3\n    bl _s32_div_f\n    cmp r1, #0\n    beq _0221FEB6\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    lsl r1, r0, #1\n    ldr r0, [sp]\n    add r1, r0, r1\n    ldr r0, _0221FFFC ; =0x00003064\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    bne _0221FECC\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    lsl r1, r0, #4\n    ldr r0, [sp]\n    add r2, r0, r1\n    ldr r0, _02220000 ; =0x000003E1\n    ldrb r1, [r2, r0]\n    cmp r1, #0\n    bne _0221FEE0\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r0, #1\n    ldrb r0, [r2, r0]\n    cmp r0, #0xa\n    bne _0221FEEE\n    mov r0, #0x12\n    str r0, [sp, #0x10]\n    b _0221FF08\n    cmp r0, #0xb\n    bne _0221FEF8\n    mov r0, #0xb\n    str r0, [sp, #0x10]\n    b _0221FF08\n    cmp r0, #0xd\n    bne _0221FF02\n    mov r0, #0xa\n    str r0, [sp, #0x10]\n    b _0221FF08\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    bl GetBattlerAbility\n    ldr r1, [sp, #0x10]\n    cmp r1, r0\n    bne _0221FF1C\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    bl BattleSystem_GetBattleType\n    mov r1, #0x10\n    tst r0, r1\n    bne _0221FF3A\n    add r0, r6, #0\n    bl BattleSystem_GetBattleType\n    mov r1, #8\n    tst r0, r1\n    beq _0221FF3E\n    add r7, r4, #0\n    b _0221FF4A\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    bl BattleSystem_GetBattlerIdPartner\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    bl BattleSystem_GetPartySize\n    mov r5, #0\n    str r0, [sp, #0xc]\n    cmp r0, #0\n    ble _0221FFF4\n    ldr r0, [sp]\n    add r0, r0, r4\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    add r7, r0, r7\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    add r2, r5, #0\n    bl BattleSystem_GetPartyMon\n    mov r1, #0xa3\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221FFEC\n    add r0, r4, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221FFEC\n    add r0, r4, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02220004 ; =0x000001EE\n    cmp r0, r1\n    beq _0221FFEC\n    ldr r1, [sp, #8]\n    ldr r0, _02220008 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    cmp r5, r0\n    beq _0221FFEC\n    ldr r0, _02220008 ; =0x0000219C\n    ldrb r0, [r7, r0]\n    cmp r5, r0\n    beq _0221FFEC\n    ldr r0, _0222000C ; =0x000021A4\n    ldrb r0, [r1, r0]\n    cmp r5, r0\n    beq _0221FFEC\n    ldr r0, _0222000C ; =0x000021A4\n    ldrb r0, [r7, r0]\n    cmp r5, r0\n    beq _0221FFEC\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    ldr r0, [sp, #0x10]\n    cmp r0, r1\n    bne _0221FFEC\n    add r0, r6, #0\n    bl BattleSystem_Random\n    mov r1, #1\n    tst r0, r1\n    beq _0221FFEC\n    ldr r1, [sp]\n    ldr r0, [sp, #4]\n    add sp, #0x14\n    add r1, r1, r0\n    ldr r0, _0222000C ; =0x000021A4\n    strb r5, [r1, r0]\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0xc]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _0221FF64\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221FFFC: .word 0x00003064\n    _02220000: .word 0x000003E1\n    _02220004: .word 0x000001EE\n    _02220008: .word 0x0000219C\n    _0222000C: .word 0x000021A4"
    );
    #endif
}

void ov10_02220010(void) {
    /* Original at 0x02220010 */
    /* Requires manual decompilation - 272 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x60\n    add r5, r1, #0\n    add r1, r2, #0\n    lsl r6, r1, #1\n    str r3, [sp, #0x1c]\n    ldr r1, _02220258 ; =0x00003064\n    add r3, r5, r6\n    str r2, [sp, #0x18]\n    ldrh r2, [r3, r1]\n    str r0, [sp, #0x14]\n    cmp r2, #0\n    beq _02220032\n    add r1, #8\n    ldrh r1, [r3, r1]\n    cmp r1, #0xff\n    bne _02220038\n    add sp, #0x60\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r1, r2, #4\n    add r2, r5, r1\n    ldr r1, _0222025C ; =0x000003E1\n    ldrb r1, [r2, r1]\n    cmp r1, #0\n    bne _0222004A\n    add sp, #0x60\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0x18]\n    lsl r1, r1, #0x18\n    lsr r4, r1, #0x18\n    bl BattleSystem_GetBattleType\n    mov r1, #0x10\n    tst r0, r1\n    bne _02220066\n    ldr r0, [sp, #0x14]\n    bl BattleSystem_GetBattleType\n    mov r1, #8\n    tst r0, r1\n    beq _0222006A\n    add r7, r4, #0\n    b _02220076\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    bl BattleSystem_GetBattlerIdPartner\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    bl BattleSystem_GetPartySize\n    str r0, [sp, #0x30]\n    mov r0, #0\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x30]\n    cmp r0, #0\n    bgt _0222008C\n    b _02220250\n    add r0, r5, r4\n    str r0, [sp, #0x2c]\n    add r0, r5, r7\n    str r0, [sp, #0x28]\n    add r0, sp, #0x68\n    ldrb r0, [r0, #0x10]\n    add r4, r5, r6\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    ldr r2, [sp, #0x34]\n    bl BattleSystem_GetPartyMon\n    mov r1, #0xa3\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02220102\n    add r0, r6, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02220102\n    add r0, r6, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02220260 ; =0x000001EE\n    cmp r0, r1\n    beq _02220102\n    ldr r0, _02220264 ; =0x0000219C\n    ldr r1, [sp, #0x2c]\n    ldrb r2, [r1, r0]\n    ldr r1, [sp, #0x34]\n    cmp r1, r2\n    beq _02220102\n    ldr r1, [sp, #0x28]\n    ldrb r2, [r1, r0]\n    ldr r1, [sp, #0x34]\n    cmp r1, r2\n    beq _02220102\n    add r2, r0, #0\n    ldr r1, [sp, #0x2c]\n    add r2, #8\n    ldrb r2, [r1, r2]\n    ldr r1, [sp, #0x34]\n    cmp r1, r2\n    beq _02220102\n    ldr r1, [sp, #0x28]\n    add r0, #8\n    ldrb r1, [r1, r0]\n    ldr r0, [sp, #0x34]\n    cmp r0, r1\n    bne _02220104\n    b _02220242\n    mov r0, #0\n    str r0, [sp, #0x5c]\n    ldr r3, _02220268 ; =0x0000306C\n    ldr r0, [sp, #0x14]\n    ldrh r2, [r4, r3]\n    sub r3, #8\n    ldrh r3, [r4, r3]\n    add r1, r5, #0\n    bl ov10_0221F47C\n    ldr r1, _02220268 ; =0x0000306C\n    str r0, [sp, #0x38]\n    ldrh r1, [r4, r1]\n    add r0, r5, #0\n    bl GetBattlerAbility\n    str r0, [sp, #0x3c]\n    add r0, r6, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x40]\n    add r0, r6, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    add r1, r0, #0\n    lsl r1, r1, #0x10\n    add r0, r5, #0\n    lsr r1, r1, #0x10\n    mov r2, #1\n    bl GetItemVar\n    str r0, [sp, #0x44]\n    add r0, r6, #0\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    add r0, r6, #0\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp, #0x40]\n    ldr r2, [sp, #0x38]\n    str r1, [sp]\n    ldr r1, [sp, #0x44]\n    ldr r3, [sp, #0x3c]\n    str r1, [sp, #4]\n    str r7, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, sp, #0x5c\n    str r0, [sp, #0x10]\n    ldr r1, _02220258 ; =0x00003064\n    add r0, r5, #0\n    ldrh r1, [r4, r1]\n    bl ov12_02252054\n    ldr r1, [sp, #0x5c]\n    ldr r0, [sp, #0x1c]\n    tst r0, r1\n    beq _02220242\n    mov r7, #0\n    add r1, r7, #0\n    add r0, r6, #0\n    add r1, #0x36\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #0x20]\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov12_02258BB4\n    str r0, [sp, #0x48]\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    beq _0222023C\n    mov r0, #0\n    str r0, [sp, #0x5c]\n    add r0, r6, #0\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02220268 ; =0x0000306C\n    str r0, [sp, #0x4c]\n    ldrh r1, [r4, r1]\n    add r0, r5, #0\n    bl GetBattlerAbility\n    ldr r1, _02220268 ; =0x0000306C\n    str r0, [sp, #0x50]\n    ldrh r1, [r4, r1]\n    add r0, r5, #0\n    bl GetBattlerHeldItemEffect\n    ldr r1, _02220268 ; =0x0000306C\n    str r0, [sp, #0x54]\n    ldrh r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    ldr r1, _02220268 ; =0x0000306C\n    str r0, [sp, #0x58]\n    ldrh r1, [r4, r1]\n    add r0, r5, #0\n    mov r2, #0x1c\n    mov r3, #0\n    bl GetBattlerVar\n    ldr r1, [sp, #0x50]\n    ldr r2, [sp, #0x48]\n    str r1, [sp]\n    ldr r1, [sp, #0x54]\n    ldr r3, [sp, #0x4c]\n    str r1, [sp, #4]\n    ldr r1, [sp, #0x58]\n    str r1, [sp, #8]\n    str r0, [sp, #0xc]\n    add r0, sp, #0x5c\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x20]\n    add r0, r5, #0\n    bl ov12_02252054\n    ldr r1, [sp, #0x5c]\n    mov r0, #2\n    tst r0, r1\n    beq _0222023C\n    ldr r0, [sp, #0x14]\n    bl BattleSystem_Random\n    ldr r1, [sp, #0x24]\n    bl _s32_div_f\n    cmp r1, #0\n    bne _0222023C\n    ldr r0, [sp, #0x18]\n    ldr r1, _0222026C ; =0x000021A4\n    add r2, r5, r0\n    ldr r0, [sp, #0x34]\n    add sp, #0x60\n    strb r0, [r2, r1]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r7, r7, #1\n    cmp r7, #4\n    blt _0222018A\n    ldr r0, [sp, #0x34]\n    add r1, r0, #1\n    ldr r0, [sp, #0x30]\n    str r1, [sp, #0x34]\n    cmp r1, r0\n    bge _02220250\n    b _0222009C\n    mov r0, #0\n    add sp, #0x60\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02220258: .word 0x00003064\n    _0222025C: .word 0x000003E1\n    _02220260: .word 0x000001EE\n    _02220264: .word 0x0000219C\n    _02220268: .word 0x0000306C\n    _0222026C: .word 0x000021A4"
    );
    #endif
}

void ov10_02220270(void) {
    /* Original at 0x02220270 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    add r4, r2, #0\n    mov r0, #0xc0\n    add r5, r1, #0\n    mul r0, r4\n    add r1, r5, r0\n    ldr r0, _02220358 ; =0x00002DAC\n    ldr r1, [r1, r0]\n    mov r0, #7\n    tst r0, r1\n    beq _022202AA\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GetBattlerAbility\n    cmp r0, #0x1e\n    bne _022202AA\n    mov r0, #0xc0\n    mul r0, r4\n    ldr r1, _0222035C ; =0x00002D8C\n    add r2, r5, r0\n    ldr r0, [r2, r1]\n    add r1, r1, #4\n    ldr r1, [r2, r1]\n    lsr r1, r1, #1\n    cmp r0, r1\n    bhs _022202B0\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02220360 ; =0x00003064\n    add r7, r5, r0\n    lsl r0, r4, #1\n    str r0, [sp, #4]\n    ldrh r0, [r7, r0]\n    cmp r0, #0\n    bne _022202D8\n    add r0, r6, #0\n    bl BattleSystem_Random\n    mov r1, #1\n    tst r0, r1\n    beq _022202D8\n    ldr r0, _02220364 ; =0x000021A4\n    mov r3, #6\n    add r2, r5, r4\n    strb r3, [r2, r0]\n    add sp, #8\n    add r0, r1, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    ldrh r0, [r7, r0]\n    lsl r0, r0, #4\n    add r1, r5, r0\n    ldr r0, _02220368 ; =0x000003E1\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _02220302\n    add r0, r6, #0\n    bl BattleSystem_Random\n    mov r1, #1\n    tst r0, r1\n    beq _02220302\n    ldr r0, _02220364 ; =0x000021A4\n    mov r3, #6\n    add r2, r5, r4\n    strb r3, [r2, r0]\n    add sp, #8\n    add r0, r1, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #8\n    bl ov10_02220010\n    cmp r0, #0\n    beq _0222031C\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    str r0, [sp]\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, #4\n    bl ov10_02220010\n    cmp r0, #0\n    beq _02220336\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl BattleSystem_Random\n    mov r1, #1\n    tst r0, r1\n    beq _02220350\n    ldr r0, _02220364 ; =0x000021A4\n    mov r3, #6\n    add r2, r5, r4\n    strb r3, [r2, r0]\n    add sp, #8\n    add r0, r1, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02220358: .word 0x00002DAC\n    _0222035C: .word 0x00002D8C\n    _02220360: .word 0x00003064\n    _02220364: .word 0x000021A4\n    _02220368: .word 0x000003E1"
    );
    #endif
}

void ov10_0222036C(void) {
    /* Original at 0x0222036C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r4, #0xc0\n    mul r4, r2\n    mov r3, #0\n    ldr r2, _022203A0 ; =0x00002D58\n    add r0, r3, #0\n    add r4, r1, r4\n    ldrsb r1, [r4, r2]\n    cmp r1, #6\n    ble _02220388\n    sub r1, r1, #6\n    add r1, r3, r1\n    lsl r1, r1, #0x18\n    lsr r3, r1, #0x18\n    add r0, r0, #1\n    add r4, r4, #1\n    cmp r0, #8\n    blt _0222037A\n    cmp r3, #4\n    blo _0222039A\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    _022203A0: .word 0x00002D58"
    );
    #endif
}

void ov10_022203A4(void) {
    /* Original at 0x022203A4 */
    /* Requires manual decompilation - 241 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r2, #0\n    mov r2, #0xc0\n    add r3, r6, #0\n    mul r3, r2\n    add r2, r1, #0\n    add r5, r2, r3\n    ldr r2, _022205A8 ; =0x00002DB0\n    ldr r3, _022205AC ; =0x0400E000\n    ldr r4, [r5, r2]\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    tst r4, r3\n    bne _02220424\n    add r2, #0x10\n    ldr r4, [r5, r2]\n    lsr r2, r3, #0x10\n    tst r2, r4\n    bne _02220424\n    mov r2, #0x17\n    str r2, [sp]\n    mov r2, #2\n    add r3, r6, #0\n    bl CheckAbilityActive\n    cmp r0, #0\n    bne _02220424\n    mov r0, #0x47\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    mov r2, #2\n    add r3, r6, #0\n    bl CheckAbilityActive\n    cmp r0, #0\n    bne _02220424\n    mov r0, #0x2a\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    mov r2, #6\n    add r3, r6, #0\n    bl CheckAbilityActive\n    cmp r0, #0\n    beq _0222042A\n    ldr r0, [sp, #8]\n    add r1, r6, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl GetBattlerVar\n    cmp r0, #8\n    beq _02220424\n    ldr r0, [sp, #8]\n    add r1, r6, #0\n    mov r2, #0x1c\n    mov r3, #0\n    bl GetBattlerVar\n    cmp r0, #8\n    bne _0222042A\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [sp, #0x14]\n    lsl r0, r6, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, [sp, #4]\n    bl BattleSystem_GetBattleType\n    mov r1, #0x10\n    tst r0, r1\n    bne _0222044A\n    ldr r0, [sp, #4]\n    bl BattleSystem_GetBattleType\n    mov r1, #8\n    tst r0, r1\n    beq _0222044E\n    add r7, r4, #0\n    b _0222045A\n    ldr r0, [sp, #4]\n    add r1, r6, #0\n    bl BattleSystem_GetBattlerIdPartner\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #4]\n    add r1, r6, #0\n    bl BattleSystem_GetPartySize\n    mov r5, #0\n    str r0, [sp, #0x10]\n    cmp r0, #0\n    ble _022204DA\n    ldr r0, [sp, #8]\n    add r0, r0, r4\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r7, r0, r7\n    ldr r0, [sp, #4]\n    add r1, r6, #0\n    add r2, r5, #0\n    bl BattleSystem_GetPartyMon\n    mov r1, #0xa3\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _022204D2\n    add r0, r4, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _022204D2\n    add r0, r4, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _022205B0 ; =0x000001EE\n    cmp r0, r1\n    beq _022204D2\n    ldr r1, [sp, #0xc]\n    ldr r0, _022205B4 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    cmp r5, r0\n    beq _022204D2\n    ldr r0, _022205B4 ; =0x0000219C\n    ldrb r0, [r7, r0]\n    cmp r5, r0\n    beq _022204D2\n    ldr r0, _022205B8 ; =0x000021A4\n    ldrb r0, [r1, r0]\n    cmp r5, r0\n    beq _022204D2\n    ldr r0, _022205B8 ; =0x000021A4\n    ldrb r0, [r7, r0]\n    cmp r5, r0\n    beq _022204D2\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x10]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _02220474\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _022205A0\n    ldr r0, [sp, #8]\n    add r1, r6, #0\n    bl ov10_0221F5F4\n    cmp r0, #0\n    beq _022204F2\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    add r2, r6, #0\n    bl ov10_0221F62C\n    cmp r0, #0\n    beq _02220506\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    add r2, r6, #0\n    bl ov10_0221F7F0\n    cmp r0, #0\n    beq _0222051A\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    add r2, r6, #0\n    bl ov10_0221FE8C\n    cmp r0, #0\n    beq _0222052E\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    add r2, r6, #0\n    bl ov10_02220270\n    cmp r0, #0\n    beq _02220542\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    add r2, r6, #0\n    mov r3, #0\n    bl ov10_0221FD34\n    cmp r0, #0\n    beq _02220558\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    add r2, r6, #0\n    bl ov10_0222036C\n    cmp r0, #0\n    beq _0222056C\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    add r2, r6, #0\n    mov r3, #8\n    bl ov10_02220010\n    cmp r0, #0\n    beq _02220586\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #3\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    add r2, r6, #0\n    mov r3, #4\n    bl ov10_02220010\n    cmp r0, #0\n    beq _022205A0\n    add sp, #0x18\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022205A8: .word 0x00002DB0\n    _022205AC: .word 0x0400E000\n    _022205B0: .word 0x000001EE\n    _022205B4: .word 0x0000219C\n    _022205B8: .word 0x000021A4"
    );
    #endif
}

void ov10_022205BC(void) {
    /* Original at 0x022205BC */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r1, #0\n    add r1, r0, #0\n    str r0, [sp]\n    ldr r5, [r1, #0x30]\n    bl BattleSystem_GetBattleType\n    add r6, r0, #0\n    mov r0, #1\n    tst r0, r6\n    bne _022205E0\n    ldr r0, [sp]\n    add r1, r7, #0\n    bl BattleSystem_GetFieldSide\n    cmp r0, #0\n    bne _022206A0\n    ldr r0, [sp]\n    add r1, r5, #0\n    add r2, r7, #0\n    bl ov10_022203A4\n    cmp r0, #0\n    beq _0222068E\n    ldr r0, _022206A8 ; =0x000021A4\n    add r0, r5, r0\n    str r0, [sp, #0x10]\n    ldrb r0, [r0, r7]\n    cmp r0, #6\n    bne _02220688\n    ldr r0, [sp]\n    add r1, r7, #0\n    bl ov12_02258800\n    add r4, r0, #0\n    cmp r4, #6\n    bne _02220684\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    mov r0, #0x10\n    tst r0, r6\n    bne _0222061A\n    mov r0, #8\n    tst r0, r6\n    beq _02220620\n    ldr r0, [sp, #0xc]\n    str r0, [sp, #8]\n    b _0222062E\n    ldr r0, [sp]\n    add r1, r7, #0\n    bl BattleSystem_GetBattlerIdPartner\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    add r1, r7, #0\n    bl BattleSystem_GetPartySize\n    mov r4, #0\n    str r0, [sp, #4]\n    cmp r0, #0\n    ble _02220684\n    ldr r0, [sp, #0xc]\n    add r6, r5, r0\n    ldr r0, [sp, #8]\n    add r5, r5, r0\n    ldr r0, [sp]\n    add r1, r7, #0\n    add r2, r4, #0\n    bl BattleSystem_GetPartyMon\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0222067C\n    ldr r0, _022206AC ; =0x0000219C\n    ldrb r0, [r6, r0]\n    cmp r4, r0\n    beq _0222067C\n    ldr r0, _022206AC ; =0x0000219C\n    ldrb r0, [r5, r0]\n    cmp r4, r0\n    beq _0222067C\n    ldr r0, _022206A8 ; =0x000021A4\n    ldrb r0, [r6, r0]\n    cmp r4, r0\n    beq _0222067C\n    ldr r0, _022206A8 ; =0x000021A4\n    ldrb r0, [r5, r0]\n    cmp r4, r0\n    bne _02220684\n    ldr r0, [sp, #4]\n    add r4, r4, #1\n    cmp r4, r0\n    blt _02220646\n    ldr r0, [sp, #0x10]\n    strb r4, [r0, r7]\n    add sp, #0x14\n    mov r0, #3\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    add r1, r7, #0\n    bl ov10_022206B0\n    cmp r0, #0\n    beq _022206A0\n    add sp, #0x14\n    mov r0, #2\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022206A8: .word 0x000021A4\n    _022206AC: .word 0x0000219C"
    );
    #endif
}

void ov10_022206B0(void) {
    /* Original at 0x022206B0 */
    /* Requires manual decompilation - 469 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    mov r2, #0\n    str r2, [sp, #0x14]\n    add r2, r1, #0\n    asr r2, r2, #1\n    ldr r4, [r5, #0x30]\n    str r2, [sp, #0xc]\n    add r6, r4, r2\n    ldr r2, [sp, #0x14]\n    ldr r3, _022209C4 ; =0x000003D3\n    str r2, [sp, #0x1c]\n    strb r2, [r6, r3]\n    ldr r3, [r5, #0x2c]\n    mov r2, #0x4b\n    and r2, r3\n    str r1, [sp]\n    cmp r2, #0x4b\n    bne _022206E6\n    bl ov12_0223AB0C\n    cmp r0, #4\n    bne _022206E6\n    add sp, #0x20\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    mov r1, #0xc0\n    mul r1, r0\n    mov r0, #0xb7\n    str r1, [sp, #8]\n    add r1, r4, r1\n    lsl r0, r0, #6\n    ldr r1, [r1, r0]\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    tst r0, r1\n    beq _02220704\n    add sp, #0x20\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl BattleSystem_GetParty\n    add r7, r0, #0\n    mov r5, #0\n    bl Party_GetCount\n    cmp r0, #0\n    ble _02220762\n    add r0, r7, #0\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xa3\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02220756\n    add r0, r6, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02220756\n    add r0, r6, #0\n    mov r1, #0xae\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _022209C8 ; =0x000001EE\n    cmp r0, r1\n    beq _02220756\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    add r5, r5, #1\n    bl Party_GetCount\n    cmp r5, r0\n    blt _02220718\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    lsl r0, r0, #3\n    str r0, [sp, #0x10]\n    add r0, r4, r0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0xc]\n    add r5, r4, r0\n    ldr r0, [sp, #8]\n    add r7, r4, r0\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _0222078C\n    ldr r0, _022209CC ; =0x000003CD\n    ldrb r1, [r5, r0]\n    ldr r0, [sp, #4]\n    sub r1, r1, r0\n    ldr r0, [sp, #0x14]\n    cmp r0, r1\n    bgt _02220798\n    mov r0, #0xe7\n    ldr r1, [sp, #0x18]\n    lsl r0, r0, #2\n    ldrh r6, [r1, r0]\n    cmp r6, #0\n    bne _0222079A\n    b _02220A88\n    cmp r6, #0x17\n    bne _022207BC\n    ldr r1, _022209D0 ; =0x00002D90\n    ldr r0, _022209D4 ; =0x00002D8C\n    ldr r1, [r7, r1]\n    ldr r0, [r7, r0]\n    lsr r1, r1, #2\n    cmp r0, r1\n    bhs _02220816\n    cmp r0, #0\n    beq _02220816\n    ldr r0, _022209D8 ; =0x000003D1\n    mov r1, #0\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x26\n    bl GetItemVar\n    cmp r0, #0\n    beq _022207FE\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x36\n    bl GetItemVar\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    beq _02220816\n    ldr r0, _022209D4 ; =0x00002D8C\n    ldr r1, [r7, r0]\n    cmp r1, #0\n    beq _02220816\n    add r0, r0, #4\n    ldr r3, [r7, r0]\n    lsr r0, r3, #2\n    cmp r1, r0\n    blo _022207F2\n    sub r0, r3, r1\n    cmp r0, r2\n    bls _02220816\n    ldr r0, _022209D8 ; =0x000003D1\n    mov r1, #1\n    strb r1, [r5, r0]\n    add r0, r1, #0\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0xf\n    bl GetItemVar\n    cmp r0, #0\n    beq _02220834\n    ldr r0, _022209DC ; =0x00002DAC\n    ldr r1, [r7, r0]\n    mov r0, #7\n    tst r0, r1\n    bne _02220818\n    b _02220A62\n    mov r0, #5\n    bl MaskOfFlagNo\n    ldr r1, _022209C4 ; =0x000003D3\n    ldrb r1, [r5, r1]\n    orr r1, r0\n    ldr r0, _022209C4 ; =0x000003D3\n    strb r1, [r5, r0]\n    mov r1, #2\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x10\n    bl GetItemVar\n    cmp r0, #0\n    beq _0222086E\n    ldr r0, _022209DC ; =0x00002DAC\n    mov r1, #8\n    ldr r0, [r7, r0]\n    tst r1, r0\n    bne _02220852\n    mov r1, #0x80\n    tst r0, r1\n    beq _02220922\n    mov r0, #4\n    bl MaskOfFlagNo\n    ldr r1, _022209C4 ; =0x000003D3\n    ldrb r1, [r5, r1]\n    orr r1, r0\n    ldr r0, _022209C4 ; =0x000003D3\n    strb r1, [r5, r0]\n    mov r1, #2\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x11\n    bl GetItemVar\n    cmp r0, #0\n    beq _022208A2\n    ldr r0, _022209DC ; =0x00002DAC\n    ldr r1, [r7, r0]\n    mov r0, #0x10\n    tst r0, r1\n    beq _02220922\n    mov r0, #3\n    bl MaskOfFlagNo\n    ldr r1, _022209C4 ; =0x000003D3\n    ldrb r1, [r5, r1]\n    orr r1, r0\n    ldr r0, _022209C4 ; =0x000003D3\n    strb r1, [r5, r0]\n    mov r1, #2\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x12\n    bl GetItemVar\n    cmp r0, #0\n    beq _022208D6\n    ldr r0, _022209DC ; =0x00002DAC\n    ldr r1, [r7, r0]\n    mov r0, #0x20\n    tst r0, r1\n    beq _02220922\n    mov r0, #2\n    bl MaskOfFlagNo\n    ldr r1, _022209C4 ; =0x000003D3\n    ldrb r1, [r5, r1]\n    orr r1, r0\n    ldr r0, _022209C4 ; =0x000003D3\n    strb r1, [r5, r0]\n    mov r1, #2\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x13\n    bl GetItemVar\n    cmp r0, #0\n    beq _0222090A\n    ldr r0, _022209DC ; =0x00002DAC\n    ldr r1, [r7, r0]\n    mov r0, #0x40\n    tst r0, r1\n    beq _02220922\n    mov r0, #1\n    bl MaskOfFlagNo\n    ldr r1, _022209C4 ; =0x000003D3\n    ldrb r1, [r5, r1]\n    orr r1, r0\n    ldr r0, _022209C4 ; =0x000003D3\n    strb r1, [r5, r0]\n    mov r1, #2\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x14\n    bl GetItemVar\n    cmp r0, #0\n    beq _02220940\n    ldr r0, _022209E0 ; =0x00002DB0\n    ldr r1, [r7, r0]\n    mov r0, #7\n    tst r0, r1\n    bne _02220924\n    b _02220A62\n    mov r0, #0\n    bl MaskOfFlagNo\n    ldr r1, _022209C4 ; =0x000003D3\n    ldrb r1, [r5, r1]\n    orr r1, r0\n    ldr r0, _022209C4 ; =0x000003D3\n    strb r1, [r5, r0]\n    mov r1, #2\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    ldr r0, _022209E4 ; =0x00002DD4\n    ldr r1, [r7, r0]\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    sub r0, r1, r0\n    bpl _02220950\n    b _02220A5C\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x1b\n    bl GetItemVar\n    cmp r0, #0\n    beq _02220970\n    ldr r0, _022209C4 ; =0x000003D3\n    mov r1, #1\n    strb r1, [r5, r0]\n    mov r1, #3\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x1c\n    bl GetItemVar\n    cmp r0, #0\n    beq _02220990\n    ldr r0, _022209C4 ; =0x000003D3\n    mov r1, #2\n    strb r1, [r5, r0]\n    mov r1, #3\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x1d\n    bl GetItemVar\n    cmp r0, #0\n    beq _022209B0\n    ldr r0, _022209C4 ; =0x000003D3\n    mov r1, #4\n    strb r1, [r5, r0]\n    mov r1, #3\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x1e\n    bl GetItemVar\n    cmp r0, #0\n    beq _022209F8\n    ldr r0, _022209C4 ; =0x000003D3\n    b _022209E8\n    nop\n    _022209C4: .word 0x000003D3\n    _022209C8: .word 0x000001EE\n    _022209CC: .word 0x000003CD\n    _022209D0: .word 0x00002D90\n    _022209D4: .word 0x00002D8C\n    _022209D8: .word 0x000003D1\n    _022209DC: .word 0x00002DAC\n    _022209E0: .word 0x00002DB0\n    _022209E4: .word 0x00002DD4\n    mov r1, #5\n    strb r1, [r5, r0]\n    mov r1, #3\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x1f\n    bl GetItemVar\n    cmp r0, #0\n    beq _02220A16\n    ldr r0, _02220AA0 ; =0x000003D3\n    mov r1, #3\n    strb r1, [r5, r0]\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x20\n    bl GetItemVar\n    cmp r0, #0\n    beq _02220A36\n    ldr r0, _02220AA0 ; =0x000003D3\n    mov r1, #6\n    strb r1, [r5, r0]\n    mov r1, #3\n    sub r0, r0, #2\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r2, #0x16\n    bl GetItemVar\n    cmp r0, #0\n    beq _02220A62\n    mov r0, #7\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    mov r0, #0x40\n    tst r0, r1\n    bne _02220A62\n    ldr r0, _02220AA4 ; =0x000003D1\n    mov r1, #4\n    strb r1, [r5, r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02220A62\n    ldr r0, _02220AA4 ; =0x000003D1\n    mov r1, #5\n    strb r1, [r5, r0]\n    ldr r0, [sp, #0x1c]\n    cmp r0, #1\n    bne _02220A88\n    ldr r0, [sp]\n    mov r1, #1\n    bic r0, r1\n    ldr r1, [sp, #0x10]\n    str r0, [sp]\n    add r3, r4, r1\n    ldr r1, [sp, #4]\n    ldr r2, _02220AA8 ; =0x000003D6\n    add r0, r4, r0\n    strh r6, [r0, r2]\n    lsl r1, r1, #1\n    mov r0, #0\n    add r1, r3, r1\n    sub r2, #0x3a\n    strh r0, [r1, r2]\n    b _02220A9A\n    ldr r0, [sp, #0x18]\n    add r0, r0, #2\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #4\n    bge _02220A9A\n    b _02220778\n    ldr r0, [sp, #0x1c]\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _02220AA0: .word 0x000003D3\n    _02220AA4: .word 0x000003D1\n    _02220AA8: .word 0x000003D6"
    );
    #endif
}
