/* Decompiled from asm/overlay_12_battle_controller.s */
#include "global.h"

void BattleController_SendData(void) {
    /* Original at 0x02262098 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    add r6, r3, #0\n    str r1, [sp]\n    str r2, [sp, #4]\n    cmp r1, #1\n    bne _022620BE\n    bl BattleSystem_GetRecvBufferPtr\n    add r4, r0, #0\n    add r0, r7, #0\n    bl ov12_0223A984\n    add r5, r0, #0\n    add r0, r7, #0\n    bl ov12_0223A990\n    b _022620D2\n    bl BattleSystem_GetSendBufferPtr\n    add r4, r0, #0\n    add r0, r7, #0\n    bl ov12_0223A960\n    add r5, r0, #0\n    add r0, r7, #0\n    bl ov12_0223A96C\n    add r7, r0, #0\n    add r0, sp, #0x10\n    ldrh r2, [r5]\n    ldrb r3, [r0, #0x10]\n    add r0, r2, #5\n    add r1, r0, r3\n    mov r0, #1\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bls _022620EC\n    strh r2, [r7]\n    mov r0, #0\n    strh r0, [r5]\n    ldr r1, [sp]\n    add r0, sp, #8\n    strb r1, [r0]\n    ldr r1, [sp, #4]\n    strb r1, [r0, #1]\n    add r1, sp, #0x10\n    ldrb r1, [r1, #0x10]\n    strh r1, [r0, #2]\n    add r1, sp, #8\n    mov r0, #0\n    ldrb r7, [r1, r0]\n    ldrh r2, [r5]\n    add r0, r0, #1\n    strb r7, [r4, r2]\n    ldrh r2, [r5]\n    add r2, r2, #1\n    strh r2, [r5]\n    cmp r0, #4\n    blo _02262100\n    mov r0, #0\n    cmp r3, #0\n    ble _0226212A\n    ldrb r2, [r6, r0]\n    ldrh r1, [r5]\n    add r0, r0, #1\n    strb r2, [r4, r1]\n    ldrh r1, [r5]\n    add r1, r1, #1\n    strh r1, [r5]\n    cmp r0, r3\n    blt _02262118\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void BattleController_RecvData(void) {
    /* Original at 0x02262130 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r3, r1, #0\n    ldrb r6, [r3, #3]\n    ldrb r1, [r3]\n    ldrb r7, [r3, #2]\n    lsl r6, r6, #8\n    add r5, r0, #0\n    mov r2, #0\n    orr r6, r7\n    ldrb r4, [r3, #1]\n    cmp r1, #0\n    bne _02262176\n    ldr r0, [r5, #0x30]\n    lsl r1, r4, #8\n    add r4, r0, r1\n    mov r0, #0x23\n    lsl r0, r0, #8\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bne _022621C0\n    cmp r6, #0\n    ble _02262172\n    mov r4, #0x23\n    lsl r4, r4, #8\n    add r0, r3, r2\n    ldr r7, [r5, #0x30]\n    ldrb r0, [r0, #4]\n    add r7, r1, r7\n    add r7, r2, r7\n    add r2, r2, #1\n    strb r0, [r7, r4]\n    cmp r2, r6\n    blt _02262160\n    mov r2, #1\n    b _022621C0\n    cmp r1, #1\n    bne _022621A2\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r1, [r0, #0x34]\n    add r1, #0x94\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _022621C0\n    cmp r6, #0\n    ble _0226219E\n    add r1, r3, r2\n    ldrb r4, [r1, #4]\n    ldr r1, [r0, #0x34]\n    add r1, r1, r2\n    add r1, #0x94\n    add r2, r2, #1\n    strb r4, [r1]\n    cmp r2, r6\n    blt _0226218C\n    mov r2, #1\n    b _022621C0\n    cmp r1, #2\n    bne _022621C0\n    ldrb r7, [r3, #4]\n    ldrb r6, [r3, #5]\n    bl ov12_0223B688\n    cmp r0, #0\n    beq _022621BE\n    ldr r0, [r5, #0x30]\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov12_0224ED00\n    mov r2, #1\n    add r0, r2, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov12_022621C4(void) {
    /* Original at 0x022621C4 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    cmp r1, #1\n    bne _022621EA\n    bl BattleSystem_GetRecvBufferPtr\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov12_0223A978\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov12_0223A984\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov12_0223A990\n    b _02262206\n    bl BattleSystem_GetSendBufferPtr\n    add r6, r0, #0\n    add r0, r5, #0\n    bl ov12_0223A954\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov12_0223A960\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov12_0223A96C\n    ldrh r1, [r4]\n    ldrh r2, [r7]\n    cmp r1, r2\n    beq _0226223C\n    ldrh r2, [r0]\n    cmp r1, r2\n    bne _0226221A\n    mov r1, #0\n    strh r1, [r4]\n    strh r1, [r0]\n    ldrh r1, [r4]\n    add r0, r5, #0\n    add r1, r6, r1\n    bl BattleController_RecvData\n    cmp r0, #1\n    bne _0226223C\n    ldrh r0, [r4]\n    add r1, r0, #2\n    ldrb r2, [r6, r1]\n    add r1, r0, #3\n    ldrb r1, [r6, r1]\n    lsl r1, r1, #8\n    orr r1, r2\n    add r1, r1, #4\n    add r0, r0, r1\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov12_02262240(void) {
    /* Original at 0x02262240 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    str r1, [sp, #4]\n    ldr r1, [r5, #0x2c]\n    mov r0, #4\n    add r7, r2, #0\n    add r6, r3, #0\n    tst r0, r1\n    beq _0226229A\n    ldr r0, _022622C4 ; =0x0000240C\n    ldr r1, [r5, r0]\n    mov r0, #0x10\n    tst r0, r1\n    bne _0226229A\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    bne _02262284\n    mov r4, #0\n    bl sub_02037454\n    cmp r0, #0\n    ble _02262284\n    ldrb r3, [r6]\n    ldr r0, [r5, #0x30]\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov12_0224ECC4\n    add r4, r4, #1\n    bl sub_02037454\n    cmp r4, r0\n    blt _0226226E\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x10]\n    ldr r1, [sp, #4]\n    add r2, r7, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r3, r6, #0\n    bl sub_02074F9C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    bne _022622AC\n    ldrb r3, [r6]\n    ldr r0, [r5, #0x30]\n    mov r1, #0\n    add r2, r7, #0\n    bl ov12_0224ECC4\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x10]\n    ldr r1, [sp, #4]\n    add r2, r7, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r3, r6, #0\n    bl BattleController_SendData\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022622C4: .word 0x0000240C"
    );
    #endif
}

void BattleController_EmitPlayEncounterAnimation(void) {
    /* Original at 0x022622C8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    mov r1, #1\n    add r5, r0, #0\n    str r1, [sp, #4]\n    bl BattleSystem_GetRandTemp\n    str r0, [sp, #8]\n    mov r0, #8\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void BattleController_EmitPokemonEncounter(void) {
    /* Original at 0x022622F0 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r7, r1, #0\n    mov r3, #2\n    add r2, sp, #4\n    strb r3, [r2]\n    mov r2, #0xc0\n    add r4, r7, #0\n    mul r4, r2\n    add r2, sp, #4\n    ldrb r5, [r2, #1]\n    mov r2, #3\n    add r6, r0, #0\n    bic r5, r2\n    ldr r2, [r6, #0x30]\n    add r3, r2, r4\n    ldr r2, _022623E8 ; =0x00002DBE\n    mov ip, r2\n    ldrb r2, [r3, r2]\n    lsl r2, r2, #0x1c\n    lsr r3, r2, #0x1c\n    mov r2, #3\n    and r2, r3\n    add r3, r5, #0\n    orr r3, r2\n    add r2, sp, #4\n    strb r3, [r2, #1]\n    ldrb r5, [r2, #1]\n    mov r2, #4\n    bic r5, r2\n    ldr r2, [r6, #0x30]\n    add r3, r2, r4\n    mov r2, ip\n    sub r2, #0x58\n    ldrb r2, [r3, r2]\n    add r3, r5, #0\n    lsl r2, r2, #0x1a\n    lsr r2, r2, #0x1f\n    lsl r2, r2, #0x1f\n    lsr r2, r2, #0x1d\n    orr r3, r2\n    add r2, sp, #4\n    strb r3, [r2, #1]\n    ldr r2, [r6, #0x30]\n    add r3, r2, r4\n    mov r2, ip\n    sub r2, #0x7e\n    ldrh r3, [r3, r2]\n    add r2, sp, #4\n    strh r3, [r2, #2]\n    ldr r2, [r6, #0x30]\n    add r3, r2, r4\n    mov r2, ip\n    sub r2, #0x16\n    ldr r2, [r3, r2]\n    str r2, [sp, #8]\n    bl ov12_0223AB0C\n    add r2, r0, #0\n    ldr r0, [r6, #0x30]\n    add r1, r7, #0\n    mov r3, #1\n    bl ov12_02256748\n    add r2, sp, #4\n    str r0, [sp, #0xc]\n    ldrb r0, [r2, #1]\n    mov r1, #0xf8\n    add r5, sp, #4\n    bic r0, r1\n    ldr r1, [r6, #0x30]\n    add r3, r1, r4\n    ldr r1, _022623EC ; =0x00002D66\n    mov r4, #0\n    ldrb r1, [r3, r1]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1b\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x18\n    orr r0, r1\n    strb r0, [r2, #1]\n    ldr r0, [r6, #0x30]\n    add r1, r7, #0\n    add r2, r4, #6\n    mov r3, #0\n    bl GetBattlerVar\n    strh r0, [r5, #0xc]\n    add r2, r4, #0\n    ldr r0, [r6, #0x30]\n    add r1, r7, #0\n    add r2, #0x1f\n    mov r3, #0\n    bl GetBattlerVar\n    strh r0, [r5, #0x14]\n    add r2, r4, #0\n    ldr r0, [r6, #0x30]\n    add r1, r7, #0\n    add r2, #0x27\n    mov r3, #0\n    bl GetBattlerVar\n    strh r0, [r5, #0x1c]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #4\n    blt _02262392\n    ldr r0, [r6, #0x30]\n    add r1, r7, #0\n    mov r2, #0x2d\n    add r3, sp, #0x28\n    bl GetBattlerVar\n    mov r0, #0x3c\n    str r0, [sp]\n    add r0, r6, #0\n    mov r1, #1\n    add r2, r7, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    _022623E8: .word 0x00002DBE\n    _022623EC: .word 0x00002D66"
    );
    #endif
}

void BattleController_EmitPokemonSlideIn(void) {
    /* Original at 0x022623F0 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x78\n    add r7, r1, #0\n    add r3, sp, #4\n    mov r2, #3\n    strb r2, [r3]\n    mov r2, #0xc0\n    add r4, r7, #0\n    mul r4, r2\n    add r2, r3, #0\n    ldrb r5, [r2, #1]\n    mov r2, #3\n    add r6, r0, #0\n    bic r5, r2\n    ldr r2, [r6, #0x30]\n    add r3, r2, r4\n    ldr r2, _02262518 ; =0x00002DBE\n    mov ip, r2\n    ldrb r2, [r3, r2]\n    lsl r2, r2, #0x1c\n    lsr r3, r2, #0x1c\n    mov r2, #3\n    and r2, r3\n    add r3, r5, #0\n    orr r3, r2\n    add r2, sp, #4\n    strb r3, [r2, #1]\n    ldrb r5, [r2, #1]\n    mov r2, #4\n    bic r5, r2\n    ldr r2, [r6, #0x30]\n    add r3, r2, r4\n    mov r2, ip\n    sub r2, #0x58\n    ldrb r2, [r3, r2]\n    add r3, r5, #0\n    lsl r2, r2, #0x1a\n    lsr r2, r2, #0x1f\n    lsl r2, r2, #0x1f\n    lsr r2, r2, #0x1d\n    orr r3, r2\n    add r2, sp, #4\n    strb r3, [r2, #1]\n    ldr r2, [r6, #0x30]\n    add r3, r2, r4\n    mov r2, ip\n    sub r2, #0x7e\n    ldrh r3, [r3, r2]\n    add r2, sp, #4\n    strh r3, [r2, #2]\n    ldr r2, [r6, #0x30]\n    add r3, r2, r4\n    mov r2, ip\n    sub r2, #0x16\n    ldr r2, [r3, r2]\n    str r2, [sp, #8]\n    bl ov12_0223AB0C\n    add r2, r0, #0\n    ldr r0, [r6, #0x30]\n    add r1, r7, #0\n    mov r3, #1\n    bl ov12_02256748\n    str r0, [sp, #0xc]\n    ldr r0, [r6, #0x30]\n    add r2, sp, #4\n    add r1, r0, r7\n    ldr r0, _0226251C ; =0x0000219C\n    ldrb r0, [r1, r0]\n    mov r1, #0xf8\n    str r0, [sp, #0x10]\n    ldrb r0, [r2, #1]\n    bic r0, r1\n    ldr r1, [r6, #0x30]\n    add r3, r1, r4\n    ldr r1, _02262520 ; =0x00002D66\n    ldrb r3, [r3, r1]\n    add r1, #0x59\n    lsl r3, r3, #0x1b\n    lsr r3, r3, #0x1b\n    lsl r3, r3, #0x1b\n    lsr r3, r3, #0x18\n    orr r0, r3\n    strb r0, [r2, #1]\n    ldr r0, [r6, #0x30]\n    add r0, r0, r4\n    ldrb r0, [r0, r1]\n    add r1, r7, #0\n    str r0, [sp, #0x14]\n    add r0, r6, #0\n    bl BattleSystem_GetBattlerIdPartner\n    ldr r1, [r6, #0x30]\n    ldr r2, [sp, #0x10]\n    add r1, r1, r0\n    ldr r0, _0226251C ; =0x0000219C\n    ldrb r0, [r1, r0]\n    add r1, r7, #0\n    str r0, [sp, #0x4c]\n    add r0, r6, #0\n    bl ov12_0223B854\n    mov r4, #0\n    add r5, sp, #4\n    ldr r0, [r6, #0x30]\n    add r1, r7, #0\n    add r2, r4, #6\n    mov r3, #0\n    bl GetBattlerVar\n    strh r0, [r5, #0x18]\n    add r2, r4, #0\n    ldr r0, [r6, #0x30]\n    add r1, r7, #0\n    add r2, #0x1f\n    mov r3, #0\n    bl GetBattlerVar\n    strh r0, [r5, #0x20]\n    add r2, r4, #0\n    ldr r0, [r6, #0x30]\n    add r1, r7, #0\n    add r2, #0x27\n    mov r3, #0\n    bl GetBattlerVar\n    strh r0, [r5, #0x28]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #4\n    blt _022624C2\n    ldr r0, [r6, #0x30]\n    add r1, r7, #0\n    mov r2, #0x2d\n    add r3, sp, #0x34\n    bl GetBattlerVar\n    mov r0, #0x74\n    str r0, [sp]\n    add r0, r6, #0\n    mov r1, #1\n    add r2, r7, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0x78\n    pop {r3, r4, r5, r6, r7, pc}\n    _02262518: .word 0x00002DBE\n    _0226251C: .word 0x0000219C\n    _02262520: .word 0x00002D66"
    );
    #endif
}

void BattleController_EmitPokemonSendOut(void) {
    /* Original at 0x02262524 */
    /* Requires manual decompilation - 249 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x84\n    add r7, r1, #0\n    add r4, r0, #0\n    mov r1, #4\n    add r6, sp, #0x10\n    strb r1, [r6]\n    mov r0, #0xc0\n    add r5, r7, #0\n    mul r5, r0\n    ldr r0, [r4, #0x30]\n    str r2, [sp, #4]\n    add r2, r0, r5\n    ldr r0, _02262718 ; =0x00002DB0\n    str r3, [sp, #8]\n    ldr r3, [r2, r0]\n    lsl r1, r1, #0x13\n    tst r1, r3\n    ldrb r1, [r6, #1]\n    beq _0226256E\n    mov r3, #3\n    bic r1, r3\n    add r3, r0, #0\n    add r3, #0x4a\n    ldrh r2, [r2, r3]\n    add r0, #0x34\n    lsl r2, r2, #0x18\n    lsr r3, r2, #0x18\n    mov r2, #3\n    and r2, r3\n    orr r1, r2\n    strb r1, [r6, #1]\n    ldr r1, [r4, #0x30]\n    add r1, r1, r5\n    ldr r0, [r1, r0]\n    str r0, [sp, #0x14]\n    b _0226258E\n    mov r3, #3\n    bic r1, r3\n    add r3, r0, #0\n    add r3, #0xe\n    ldrb r2, [r2, r3]\n    sub r0, #8\n    lsl r2, r2, #0x1c\n    lsr r3, r2, #0x1c\n    mov r2, #3\n    and r2, r3\n    orr r1, r2\n    strb r1, [r6, #1]\n    ldr r1, [r4, #0x30]\n    add r1, r1, r5\n    ldr r0, [r1, r0]\n    str r0, [sp, #0x14]\n    mov r0, #0xc0\n    add r6, r7, #0\n    add r3, sp, #0x10\n    mul r6, r0\n    ldrb r0, [r3, #1]\n    mov r1, #4\n    bic r0, r1\n    ldr r1, [r4, #0x30]\n    add r2, r1, r6\n    ldr r1, _0226271C ; =0x00002D66\n    ldrb r2, [r2, r1]\n    sub r1, #0x26\n    lsl r2, r2, #0x1a\n    lsr r2, r2, #0x1f\n    lsl r2, r2, #0x1f\n    lsr r2, r2, #0x1d\n    orr r0, r2\n    strb r0, [r3, #1]\n    ldr r0, [r4, #0x30]\n    add r0, r0, r6\n    ldrh r0, [r0, r1]\n    add r1, r7, #0\n    strh r0, [r3, #2]\n    add r0, r4, #0\n    bl ov12_0223AB0C\n    add r2, r0, #0\n    ldr r0, [r4, #0x30]\n    add r1, r7, #0\n    mov r3, #0\n    bl ov12_02256748\n    str r0, [sp, #0x18]\n    ldr r0, [r4, #0x30]\n    mov r2, #0xf8\n    add r1, r0, r7\n    ldr r0, _02262720 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    str r0, [sp, #0x1c]\n    add r0, sp, #0x10\n    ldrb r1, [r0, #1]\n    bic r1, r2\n    ldr r2, [r4, #0x30]\n    add r3, r2, r6\n    ldr r2, _0226271C ; =0x00002D66\n    ldrb r3, [r3, r2]\n    lsl r3, r3, #0x1b\n    lsr r3, r3, #0x1b\n    lsl r3, r3, #0x1b\n    lsr r3, r3, #0x18\n    orr r1, r3\n    strb r1, [r0, #1]\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _02262600\n    str r0, [sp, #0x20]\n    b _0226260A\n    ldr r0, [r4, #0x30]\n    add r2, #0x59\n    add r0, r0, r5\n    ldrb r0, [r0, r2]\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #8]\n    str r0, [sp, #0x24]\n    ldr r0, [r4, #0x30]\n    add r1, r0, r5\n    ldr r0, _02262718 ; =0x00002DB0\n    ldr r1, [r1, r0]\n    mov r0, #1\n    lsl r0, r0, #0x18\n    tst r0, r1\n    beq _02262622\n    mov r0, #1\n    b _02262624\n    mov r0, #0\n    ldr r2, [sp, #0x1c]\n    str r0, [sp, #0x5c]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov12_0223B854\n    mov r6, #0\n    add r5, sp, #0x10\n    ldr r0, [r4, #0x30]\n    add r1, r7, #0\n    add r2, r6, #6\n    mov r3, #0\n    bl GetBattlerVar\n    strh r0, [r5, #0x18]\n    add r2, r6, #0\n    ldr r0, [r4, #0x30]\n    add r1, r7, #0\n    add r2, #0x1f\n    mov r3, #0\n    bl GetBattlerVar\n    strh r0, [r5, #0x20]\n    add r2, r6, #0\n    ldr r0, [r4, #0x30]\n    add r1, r7, #0\n    add r2, #0x27\n    mov r3, #0\n    bl GetBattlerVar\n    strh r0, [r5, #0x28]\n    add r6, r6, #1\n    add r5, r5, #2\n    cmp r6, #4\n    blt _02262634\n    ldr r0, [r4, #0x30]\n    add r1, r7, #0\n    mov r2, #0x2d\n    add r3, sp, #0x40\n    bl GetBattlerVar\n    add r3, sp, #0x10\n    mov r2, #0\n    mov ip, r2\n    str r3, [sp, #0xc]\n    add r5, r3, #0\n    ldr r0, [r4, #0x30]\n    add r1, r0, r2\n    mov r0, #0xb5\n    lsl r0, r0, #6\n    ldrh r1, [r1, r0]\n    ldr r0, [sp, #0xc]\n    add r0, #0x50\n    strh r1, [r0]\n    ldr r0, [r4, #0x30]\n    add r1, r0, r2\n    ldr r0, _0226271C ; =0x00002D66\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #0x1a\n    lsr r1, r0, #0x1f\n    add r0, r3, #0\n    add r0, #0x5c\n    strb r1, [r0]\n    ldr r0, [r4, #0x30]\n    add r1, r0, r2\n    ldr r0, _0226271C ; =0x00002D66\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #0x1b\n    lsr r1, r0, #0x1b\n    add r0, r3, #0\n    add r0, #0x60\n    strb r1, [r0]\n    ldr r0, [r4, #0x30]\n    add r6, r0, r2\n    ldr r0, _02262718 ; =0x00002DB0\n    ldr r1, [r6, r0]\n    mov r0, #2\n    lsl r0, r0, #0x14\n    tst r0, r1\n    beq _022626D6\n    ldr r0, _02262724 ; =0x00002DFA\n    ldrh r1, [r6, r0]\n    add r0, r3, #0\n    add r0, #0x58\n    strb r1, [r0]\n    ldr r0, [r4, #0x30]\n    add r1, r0, r2\n    ldr r0, _02262728 ; =0x00002DE4\n    b _022626EA\n    ldr r0, _0226272C ; =0x00002DBE\n    ldrb r0, [r6, r0]\n    lsl r0, r0, #0x1c\n    lsr r1, r0, #0x1c\n    add r0, r3, #0\n    add r0, #0x58\n    strb r1, [r0]\n    ldr r0, [r4, #0x30]\n    add r1, r0, r2\n    ldr r0, _02262730 ; =0x00002DA8\n    ldr r0, [r1, r0]\n    add r2, #0xc0\n    str r0, [r5, #0x64]\n    ldr r0, [sp, #0xc]\n    add r3, r3, #1\n    add r0, r0, #2\n    str r0, [sp, #0xc]\n    mov r0, ip\n    add r0, r0, #1\n    add r5, r5, #4\n    mov ip, r0\n    cmp r0, #4\n    blt _02262680\n    mov r0, #0x74\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    add r3, sp, #0x10\n    bl ov12_02262240\n    add sp, #0x84\n    pop {r4, r5, r6, r7, pc}\n    _02262718: .word 0x00002DB0\n    _0226271C: .word 0x00002D66\n    _02262720: .word 0x0000219C\n    _02262724: .word 0x00002DFA\n    _02262728: .word 0x00002DE4\n    _0226272C: .word 0x00002DBE\n    _02262730: .word 0x00002DA8"
    );
    #endif
}

void BattleController_EmitRecallPokemon(void) {
    /* Original at 0x02262734 */
    /* Requires manual decompilation - 171 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r4, r1, #0\n    lsl r1, r2, #2\n    str r0, [sp, #4]\n    add r0, r0, r1\n    ldr r1, [r0, #0x34]\n    ldr r0, _02262880 ; =0x00000195\n    str r2, [sp, #8]\n    ldrb r1, [r1, r0]\n    mov r0, #1\n    tst r0, r1\n    beq _02262752\n    mov r2, #2\n    b _02262754\n    mov r2, #0\n    ldr r1, [sp, #8]\n    mov r0, #0xc0\n    mul r0, r1\n    ldr r1, [sp, #4]\n    mov r6, #5\n    ldr r1, [r1, #0x30]\n    add r5, sp, #0xc\n    add r3, r1, r0\n    ldr r1, _02262884 ; =0x00002D66\n    ldrb r3, [r3, r1]\n    strb r6, [r5]\n    ldr r5, [sp, #4]\n    lsl r3, r3, #0x1b\n    ldr r5, [r5, #0x30]\n    lsr r3, r3, #0x1b\n    add r5, r5, r0\n    add r0, r1, #0\n    add r0, #0x4a\n    ldr r6, [r5, r0]\n    mov r0, #2\n    lsl r0, r0, #0x14\n    tst r0, r6\n    beq _022627A6\n    add r0, r1, #0\n    add r0, #0x7e\n    ldr r0, [r5, r0]\n    lsl r2, r2, #0x18\n    str r0, [sp]\n    add r0, r1, #0\n    add r1, #0x94\n    ldrh r1, [r5, r1]\n    sub r0, #0x26\n    lsl r3, r3, #0x18\n    lsl r1, r1, #0x18\n    ldrh r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl GetMonPicHeightBySpeciesGenderForm\n    b _022627C8\n    add r0, r1, #0\n    add r0, #0x42\n    ldr r0, [r5, r0]\n    lsl r2, r2, #0x18\n    str r0, [sp]\n    add r0, r1, #0\n    add r1, #0x58\n    ldrb r1, [r5, r1]\n    sub r0, #0x26\n    lsl r3, r3, #0x18\n    lsl r1, r1, #0x1c\n    ldrh r0, [r5, r0]\n    lsr r1, r1, #0x1c\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl GetMonPicHeightBySpeciesGenderForm\n    add r1, sp, #0xc\n    strb r0, [r1, #1]\n    ldr r1, [sp, #8]\n    mov r0, #0xc0\n    mul r0, r1\n    ldr r1, [sp, #4]\n    ldr r2, _02262888 ; =0x00002DBF\n    ldr r1, [r1, #0x30]\n    add r1, r1, r0\n    ldrb r3, [r1, r2]\n    add r1, sp, #0xc\n    sub r2, #0xf\n    strh r3, [r1, #2]\n    ldr r1, [sp, #4]\n    ldr r1, [r1, #0x30]\n    add r0, r1, r0\n    ldr r1, [r0, r2]\n    mov r0, #1\n    lsl r0, r0, #0x18\n    tst r0, r1\n    beq _022627F6\n    mov r0, #1\n    b _022627F8\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #4]\n    add r7, sp, #0xc\n    ldr r1, [r0, #0x30]\n    ldr r0, [sp, #8]\n    add r3, r7, #0\n    add r1, r1, r0\n    ldr r0, _0226288C ; =0x0000219C\n    add r5, r7, #0\n    ldrb r0, [r1, r0]\n    str r0, [sp, #0x38]\n    mov r0, #0\n    mov ip, r0\n    ldr r0, _02262884 ; =0x00002D66\n    add r2, r4, r0\n    add r0, #0x58\n    add r6, r4, r0\n    mov r0, #0xb5\n    lsl r0, r0, #6\n    ldrh r0, [r4, r0]\n    strh r0, [r7, #8]\n    ldrb r0, [r2]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1f\n    strb r0, [r3, #0x14]\n    ldrb r0, [r2]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1b\n    strb r0, [r3, #0x18]\n    ldr r0, _02262890 ; =0x00002DB0\n    ldr r1, [r4, r0]\n    mov r0, #2\n    lsl r0, r0, #0x14\n    tst r0, r1\n    beq _02262848\n    ldr r0, _02262894 ; =0x00002DFA\n    ldrh r0, [r4, r0]\n    strb r0, [r3, #0x10]\n    ldr r0, _02262898 ; =0x00002DE4\n    b _02262852\n    ldrb r0, [r6]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    strb r0, [r3, #0x10]\n    ldr r0, _0226289C ; =0x00002DA8\n    ldr r0, [r4, r0]\n    add r4, #0xc0\n    str r0, [r5, #0x1c]\n    mov r0, ip\n    add r0, r0, #1\n    add r7, r7, #2\n    add r2, #0xc0\n    add r3, r3, #1\n    add r5, r5, #4\n    add r6, #0xc0\n    mov ip, r0\n    cmp r0, #4\n    blt _0226281A\n    mov r0, #0x30\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #8]\n    mov r1, #1\n    add r3, sp, #0xc\n    bl ov12_02262240\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _02262880: .word 0x00000195\n    _02262884: .word 0x00002D66\n    _02262888: .word 0x00002DBF\n    _0226288C: .word 0x0000219C\n    _02262890: .word 0x00002DB0\n    _02262894: .word 0x00002DFA\n    _02262898: .word 0x00002DE4\n    _0226289C: .word 0x00002DA8"
    );
    #endif
}

void ov12_022628A0(void) {
    /* Original at 0x022628A0 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r1, #0\n    add r4, r0, #0\n    lsl r0, r7, #2\n    add r0, r4, r0\n    ldr r1, [r0, #0x34]\n    ldr r0, _02262950 ; =0x00000195\n    str r2, [sp, #4]\n    ldrb r1, [r1, r0]\n    mov r0, #1\n    tst r0, r1\n    beq _022628BE\n    mov r2, #2\n    b _022628C0\n    mov r2, #0\n    mov r0, #0xc0\n    add r6, r7, #0\n    mul r6, r0\n    ldr r0, [r4, #0x30]\n    ldr r5, _02262954 ; =0x00002D66\n    add r0, r0, r6\n    ldrb r0, [r0, r5]\n    mov r1, #6\n    lsl r0, r0, #0x1b\n    lsr r3, r0, #0x1b\n    add r0, sp, #8\n    strb r1, [r0]\n    ldr r0, [r4, #0x30]\n    add r1, r0, r6\n    add r0, r5, #0\n    add r0, #0x4a\n    ldr r6, [r1, r0]\n    mov r0, #2\n    lsl r0, r0, #0x14\n    tst r0, r6\n    beq _0226290E\n    add r0, r5, #0\n    add r0, #0x7e\n    ldr r0, [r1, r0]\n    lsl r2, r2, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    sub r0, #0x26\n    add r5, #0x94\n    ldrh r0, [r1, r0]\n    ldrh r1, [r1, r5]\n    lsl r3, r3, #0x18\n    lsr r2, r2, #0x18\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsr r3, r3, #0x18\n    bl GetMonPicHeightBySpeciesGenderForm\n    b _02262930\n    add r0, r5, #0\n    add r0, #0x42\n    ldr r0, [r1, r0]\n    lsl r2, r2, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    sub r0, #0x26\n    add r5, #0x58\n    ldrh r0, [r1, r0]\n    ldrb r1, [r1, r5]\n    lsl r3, r3, #0x18\n    lsr r2, r2, #0x18\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    lsr r3, r3, #0x18\n    bl GetMonPicHeightBySpeciesGenderForm\n    add r1, sp, #8\n    strb r0, [r1, #1]\n    ldr r0, [sp, #4]\n    add r1, sp, #8\n    strh r0, [r1, #2]\n    mov r0, #4\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    add r3, sp, #8\n    bl ov12_02262240\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02262950: .word 0x00000195\n    _02262954: .word 0x00002D66"
    );
    #endif
}

void BattleController_EmitDeletePokemon(void) {
    ov12_02262240(1, 4, 7);
}

void BattleController_EmitTrainerEncounter(void) {
    /* Original at 0x02262974 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #8\n    add r2, r1, #0\n    mov r1, #8\n    add r3, sp, #4\n    strb r1, [r3]\n    mov r1, #0x34\n    mul r1, r2\n    add r1, r0, r1\n    add r1, #0xad\n    ldrb r1, [r1]\n    strh r1, [r3, #2]\n    add r1, r0, r2\n    add r1, #0xa8\n    ldrb r1, [r1]\n    strb r1, [r3, #1]\n    mov r1, #4\n    str r1, [sp]\n    mov r1, #1\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #8\n    pop {r3, pc}"
    );
    #endif
}

void BattleController_EmitThrowPokeball(void) {
    /* Original at 0x022629A4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    mov r6, #9\n    add r3, sp, #4\n    strb r6, [r3]\n    add r5, r0, #0\n    strb r2, [r3, #1]\n    add r4, r1, #0\n    bl BattleSystem_GetBattlerIdPartner\n    ldr r1, [r5, #0x30]\n    add r2, r4, #0\n    add r1, r1, r0\n    ldr r0, _022629D8 ; =0x0000219C\n    add r3, sp, #4\n    ldrb r1, [r1, r0]\n    add r0, sp, #4\n    strh r1, [r0, #2]\n    mov r0, #4\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov12_02262240\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _022629D8: .word 0x0000219C"
    );
    #endif
}

void BattleController_EmitTrainerSlideOut(void) {
    ov12_02262240(0xa, 1, 4);
}

void BattleController_EmitTrainerSlideIn(void) {
    /* Original at 0x022629F8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r3, r1, #0\n    mov r1, #0xb\n    add r4, sp, #4\n    strb r1, [r4]\n    mov r1, #0x34\n    mul r1, r3\n    add r1, r0, r1\n    add r1, #0xad\n    ldrb r1, [r1]\n    strh r1, [r4, #2]\n    add r1, r0, r3\n    add r1, #0xa8\n    ldrb r1, [r1]\n    strb r1, [r4, #1]\n    str r2, [sp, #8]\n    mov r1, #8\n    str r1, [sp]\n    add r2, r3, #0\n    mov r1, #1\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void BattleController_EmitHealthbarSlideIn(void) {
    /* Original at 0x02262A2C */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r1, #0\n    ldr r1, _02262B50 ; =0x0000219C\n    add r4, r2, #0\n    add r7, r5, r1\n    ldrb r2, [r7, r4]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    bl BattleSystem_GetPartyMon\n    add r6, r0, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x10]\n    add r0, r6, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0xc]\n    mov r0, #0xc\n    add r3, sp, #0x14\n    strb r0, [r3]\n    mov r0, #0xc0\n    add r6, r4, #0\n    mul r6, r0\n    ldr r2, _02262B54 ; =0x00002D74\n    add r0, r5, r6\n    ldrb r1, [r0, r2]\n    strb r1, [r3, #1]\n    add r1, r2, #0\n    add r1, #0x18\n    ldr r1, [r0, r1]\n    add r2, #0x1c\n    strh r1, [r3, #2]\n    ldr r0, [r0, r2]\n    add r1, r4, #0\n    strh r0, [r3, #4]\n    ldrb r0, [r7, r4]\n    strb r0, [r3, #6]\n    add r0, r5, #0\n    bl GetBattlerStatusCondition\n    add r1, sp, #0x14\n    ldrb r2, [r1, #7]\n    mov r3, #0x1f\n    lsl r0, r0, #0x18\n    bic r2, r3\n    lsr r3, r0, #0x18\n    mov r0, #0x1f\n    and r0, r3\n    orr r0, r2\n    strb r0, [r1, #7]\n    mov r0, #0xb5\n    lsl r0, r0, #6\n    add r7, r5, r0\n    ldrh r0, [r7, r6]\n    cmp r0, #0x1d\n    beq _02262AAE\n    cmp r0, #0x20\n    bne _02262AC8\n    ldr r0, _02262B58 ; =0x00002D54\n    add r1, r5, r6\n    ldr r0, [r1, r0]\n    lsr r0, r0, #0x1f\n    bne _02262AC8\n    add r0, sp, #0x14\n    ldrb r1, [r0, #7]\n    mov r2, #0x60\n    bic r1, r2\n    mov r2, #0x40\n    orr r1, r2\n    strb r1, [r0, #7]\n    b _02262AE2\n    add r3, sp, #0x14\n    ldrb r2, [r3, #7]\n    mov r0, #0x60\n    add r1, r5, r6\n    bic r2, r0\n    ldr r0, _02262B5C ; =0x00002DBE\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x19\n    orr r0, r2\n    strb r0, [r3, #7]\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    bl GetMonExpBySpeciesAndLevel\n    mov r1, #0xc0\n    mul r1, r4\n    add r2, r5, r1\n    ldr r1, _02262B60 ; =0x00002DA4\n    ldr r1, [r2, r1]\n    sub r0, r1, r0\n    ldr r1, [sp, #0xc]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x10]\n    add r1, r1, #1\n    bl GetMonExpBySpeciesAndLevel\n    add r5, r0, #0\n    ldr r0, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    bl GetMonExpBySpeciesAndLevel\n    sub r0, r5, r0\n    str r0, [sp, #0x20]\n    ldrh r1, [r7, r6]\n    ldr r0, [sp, #4]\n    bl BattleSystem_CheckMonCaught\n    add r3, sp, #0x14\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x1f\n    ldrb r1, [r3, #7]\n    mov r2, #0x80\n    lsr r0, r0, #0x18\n    bic r1, r2\n    orr r0, r1\n    strb r0, [r3, #7]\n    ldr r0, [sp, #4]\n    bl BattleSystem_GetSafariBallCount\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #8]\n    add r1, sp, #0x14\n    strb r0, [r1, #0x14]\n    mov r0, #0x18\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #0x14\n    bl ov12_02262240\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02262B50: .word 0x0000219C\n    _02262B54: .word 0x00002D74\n    _02262B58: .word 0x00002D54\n    _02262B5C: .word 0x00002DBE\n    _02262B60: .word 0x00002DA4"
    );
    #endif
}

void BattleController_EmitHealthbarSlideOut(void) {
    ov12_02262240(0xd, 1, 4);
}

void ov12_02262B80(void) {
    /* Original at 0x02262B80 */
    /* Requires manual decompilation - 413 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x54\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    mov r0, #0\n    add r1, sp, #0x28\n    mov r2, #0x2c\n    add r6, r3, #0\n    bl MIi_CpuClearFast\n    ldr r0, [sp, #4]\n    bl BattleSystem_GetBattleContext\n    ldr r1, [sp, #0xc]\n    bl BattleBuffer_Clear\n    mov r5, #0\n    ldr r0, [sp, #4]\n    add r4, r5, #0\n    bl BattleSystem_GetMaxBattlers\n    cmp r0, #0\n    ble _02262BD0\n    ldr r0, [sp, #8]\n    add r1, r4, #0\n    bl Battler_CanSelectAction\n    cmp r0, #0\n    bne _02262BC4\n    add r0, r4, #0\n    bl MaskOfFlagNo\n    orr r5, r0\n    ldr r0, [sp, #4]\n    add r4, r4, #1\n    bl BattleSystem_GetMaxBattlers\n    cmp r4, r0\n    blt _02262BB0\n    mov r1, #0xe\n    add r0, sp, #0x28\n    strb r1, [r0]\n    strb r6, [r0, #1]\n    ldr r1, _02262ED0 ; =0x00003108\n    ldr r0, [sp, #8]\n    ldrb r0, [r0, r1]\n    add r1, r0, #0\n    orr r1, r5\n    add r0, sp, #0x48\n    strb r1, [r0, #9]\n    ldr r0, [sp, #4]\n    bl BattleSystem_GetBattleType\n    mov r1, #2\n    str r0, [sp, #0x20]\n    tst r0, r1\n    beq _02262C06\n    ldr r0, [sp, #0x20]\n    mov r1, #8\n    tst r0, r1\n    bne _02262C06\n    ldr r0, [sp, #0xc]\n    mov r1, #1\n    add r4, r0, #0\n    and r4, r1\n    b _02262C08\n    ldr r4, [sp, #0xc]\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    bl BattleSystem_GetParty\n    str r0, [sp, #0x24]\n    mov r7, #0\n    bl Party_GetCount\n    cmp r0, #0\n    ble _02262C9E\n    mov r0, #6\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r5, sp, #0x28\n    add r6, r0, r1\n    mov r1, #0xa9\n    ldr r0, [sp, #0x20]\n    lsl r1, r1, #2\n    and r0, r1\n    str r0, [sp, #0x1c]\n    ldr r1, _02262ED4 ; =0x0000312C\n    ldr r0, [sp, #0x24]\n    ldrb r1, [r6, r1]\n    bl Party_GetMonByIndex\n    mov r1, #0xae\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262C90\n    ldr r1, _02262ED8 ; =0x000001EE\n    cmp r0, r1\n    beq _02262C90\n    add r0, r4, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262C78\n    add r0, r4, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262C72\n    mov r0, #3\n    strb r0, [r5, #8]\n    b _02262C7C\n    mov r0, #1\n    strb r0, [r5, #8]\n    b _02262C7C\n    mov r0, #2\n    strb r0, [r5, #8]\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    beq _02262C86\n    mov r0, #0\n    b _02262C8C\n    add r0, r4, #0\n    bl GetPercentProgressTowardsNextLevel\n    strb r0, [r5, #2]\n    add r5, r5, #1\n    ldr r0, [sp, #0x24]\n    add r6, r6, #1\n    add r7, r7, #1\n    bl Party_GetCount\n    cmp r7, r0\n    blt _02262C32\n    ldr r0, [sp, #0x20]\n    mov r1, #0xc\n    and r0, r1\n    cmp r0, #0xc\n    beq _02262CBC\n    ldr r0, [sp, #0x20]\n    mov r1, #0x10\n    tst r0, r1\n    bne _02262CBC\n    ldr r0, [sp, #0x20]\n    cmp r0, #0x4b\n    beq _02262CBC\n    cmp r0, #0xcb\n    beq _02262CBC\n    b _02262DF4\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0xc]\n    bl BattleSystem_GetFieldSide\n    cmp r0, #0\n    beq _02262CD2\n    ldr r0, [sp, #4]\n    mov r1, #2\n    bl BattleSystem_GetBattlerFromBattlerType\n    b _02262CDA\n    ldr r0, [sp, #4]\n    mov r1, #3\n    bl BattleSystem_GetBattlerFromBattlerType\n    add r4, r0, #0\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    bl BattleSystem_GetParty\n    str r0, [sp, #0x10]\n    mov r7, #0\n    bl Party_GetCount\n    cmp r0, #0\n    ble _02262D56\n    mov r0, #6\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r5, sp, #0x28\n    add r4, r0, r1\n    ldr r1, _02262ED4 ; =0x0000312C\n    ldr r0, [sp, #0x10]\n    ldrb r1, [r4, r1]\n    bl Party_GetMonByIndex\n    mov r1, #0xae\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262D48\n    ldr r1, _02262ED8 ; =0x000001EE\n    cmp r0, r1\n    beq _02262D48\n    add r0, r6, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262D42\n    add r0, r6, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262D3C\n    mov r0, #3\n    strb r0, [r5, #0xe]\n    b _02262D46\n    mov r0, #1\n    strb r0, [r5, #0xe]\n    b _02262D46\n    mov r0, #2\n    strb r0, [r5, #0xe]\n    add r5, r5, #1\n    ldr r0, [sp, #0x10]\n    add r4, r4, #1\n    add r7, r7, #1\n    bl Party_GetCount\n    cmp r7, r0\n    blt _02262CFC\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0xc]\n    bl BattleSystem_GetFieldSide\n    cmp r0, #0\n    beq _02262D6C\n    ldr r0, [sp, #4]\n    mov r1, #4\n    bl BattleSystem_GetBattlerFromBattlerType\n    b _02262D74\n    ldr r0, [sp, #4]\n    mov r1, #5\n    bl BattleSystem_GetBattlerFromBattlerType\n    add r4, r0, #0\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    bl BattleSystem_GetParty\n    str r0, [sp, #0x14]\n    mov r7, #0\n    bl Party_GetCount\n    cmp r0, #0\n    ble _02262E7A\n    mov r0, #6\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r5, sp, #0x28\n    add r4, r0, r1\n    add r5, #3\n    ldr r1, _02262ED4 ; =0x0000312C\n    ldr r0, [sp, #0x14]\n    ldrb r1, [r4, r1]\n    bl Party_GetMonByIndex\n    mov r1, #0xae\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262DE4\n    ldr r1, _02262ED8 ; =0x000001EE\n    cmp r0, r1\n    beq _02262DE4\n    add r0, r6, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262DDE\n    add r0, r6, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262DD8\n    mov r0, #3\n    strb r0, [r5, #0xe]\n    b _02262DE2\n    mov r0, #1\n    strb r0, [r5, #0xe]\n    b _02262DE2\n    mov r0, #2\n    strb r0, [r5, #0xe]\n    add r5, r5, #1\n    ldr r0, [sp, #0x14]\n    add r4, r4, #1\n    add r7, r7, #1\n    bl Party_GetCount\n    cmp r7, r0\n    blt _02262D98\n    b _02262E7A\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0xc]\n    mov r2, #2\n    bl ov12_0223ABB8\n    add r4, r0, #0\n    ldr r0, [sp, #4]\n    add r1, r4, #0\n    bl BattleSystem_GetParty\n    str r0, [sp, #0x18]\n    mov r7, #0\n    bl Party_GetCount\n    cmp r0, #0\n    ble _02262E7A\n    mov r0, #6\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r5, sp, #0x28\n    add r4, r0, r1\n    ldr r1, _02262ED4 ; =0x0000312C\n    ldr r0, [sp, #0x18]\n    ldrb r1, [r4, r1]\n    bl Party_GetMonByIndex\n    mov r1, #0xae\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262E6C\n    ldr r1, _02262ED8 ; =0x000001EE\n    cmp r0, r1\n    beq _02262E6C\n    add r0, r6, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262E66\n    add r0, r6, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02262E60\n    mov r0, #3\n    strb r0, [r5, #0xe]\n    b _02262E6A\n    mov r0, #1\n    strb r0, [r5, #0xe]\n    b _02262E6A\n    mov r0, #2\n    strb r0, [r5, #0xe]\n    add r5, r5, #1\n    ldr r0, [sp, #0x18]\n    add r4, r4, #1\n    add r7, r7, #1\n    bl Party_GetCount\n    cmp r7, r0\n    blt _02262E20\n    mov r5, #0\n    add r6, sp, #0x28\n    add r4, r6, #0\n    add r7, r5, #0\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    add r2, r5, #6\n    add r3, r7, #0\n    bl GetBattlerVar\n    strh r0, [r6, #0x14]\n    add r2, r5, #0\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    add r2, #0x1f\n    mov r3, #0\n    bl GetBattlerVar\n    strb r0, [r4, #0x1c]\n    add r2, r5, #0\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    add r2, #0x27\n    mov r3, #0\n    bl GetBattlerVar\n    add r1, r4, #0\n    add r1, #0x20\n    add r5, r5, #1\n    strb r0, [r1]\n    add r6, r6, #2\n    add r4, r4, #1\n    cmp r5, #4\n    blt _02262E82\n    ldr r0, [sp, #0xc]\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r3, sp, #0x28\n    add r0, r0, r1\n    ldr r1, _02262EDC ; =0x00002D8C\n    b _02262EE0\n    nop\n    _02262ED0: .word 0x00003108\n    _02262ED4: .word 0x0000312C\n    _02262ED8: .word 0x000001EE\n    _02262EDC: .word 0x00002D8C\n    ldr r2, [r0, r1]\n    strh r2, [r3, #0x24]\n    add r2, r1, #4\n    ldr r2, [r0, r2]\n    strh r2, [r3, #0x26]\n    mov r2, #0x24\n    ldrsh r2, [r3, r2]\n    cmp r2, #0\n    beq _02262F08\n    add r1, #0x20\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    add r0, sp, #0x48\n    beq _02262F02\n    mov r1, #3\n    strb r1, [r0, #8]\n    b _02262F0E\n    mov r1, #1\n    strb r1, [r0, #8]\n    b _02262F0E\n    mov r1, #2\n    add r0, sp, #0x48\n    strb r1, [r0, #8]\n    mov r0, #0x2c\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    mov r1, #1\n    add r3, sp, #0x28\n    bl ov12_02262240\n    add sp, #0x54\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov12_02262F24(void) {
    ov12_02262240(0, 4);
}

void ov12_02262F40(void) {
    /* Original at 0x02262F40 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    str r2, [sp, #0xc]\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    bl BattleSystem_GetBattleContext\n    ldr r1, [sp, #0xc]\n    bl BattleBuffer_Clear\n    mov r0, #0xf\n    add r2, sp, #0x14\n    strb r0, [r2]\n    add r7, sp, #0x14\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0xc]\n    add r5, r7, #0\n    add r1, r1, r0\n    ldr r0, _02262FD0 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    mov r1, #0xc0\n    strb r0, [r2, #1]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r6, r0, r1\n    add r4, r6, #0\n    ldr r0, _02262FD4 ; =0x00002D4C\n    ldr r1, _02262FD8 ; =0x00002D70\n    ldrh r0, [r6, r0]\n    strh r0, [r7, #4]\n    ldr r0, _02262FDC ; =0x00002D6C\n    ldrb r0, [r4, r0]\n    strb r0, [r5, #0xc]\n    ldr r0, _02262FD4 ; =0x00002D4C\n    ldrb r1, [r4, r1]\n    ldrh r0, [r6, r0]\n    bl GetMoveMaxPP\n    strb r0, [r5, #0x10]\n    ldr r0, [sp, #0x10]\n    add r6, r6, #2\n    add r0, r0, #1\n    add r7, r7, #2\n    add r4, r4, #1\n    add r5, r5, #1\n    str r0, [sp, #0x10]\n    cmp r0, #4\n    blt _02262F7A\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #0xc]\n    mov r3, #0\n    bl StruggleCheck\n    add r1, sp, #0x14\n    strh r0, [r1, #2]\n    mov r0, #0x14\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    mov r1, #1\n    add r3, sp, #0x14\n    bl ov12_02262240\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _02262FD0: .word 0x0000219C\n    _02262FD4: .word 0x00002D4C\n    _02262FD8: .word 0x00002D70\n    _02262FDC: .word 0x00002D6C"
    );
    #endif
}

void ov12_02262FE0(void) {
    ov12_02262240(0, 4);
}

void ov12_02262FFC(void) {
    /* Original at 0x02262FFC */
    /* Requires manual decompilation - 136 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    add r0, r1, #0\n    add r1, r3, #0\n    add r4, r2, #0\n    str r3, [sp, #0xc]\n    bl BattleBuffer_Clear\n    ldr r0, [sp, #4]\n    bl BattleSystem_GetBattleType\n    mov r2, #0x10\n    add r1, sp, #0x1c\n    strb r2, [r1]\n    strh r4, [r1, #2]\n    mov r1, #2\n    add r2, r0, #0\n    and r2, r1\n    beq _02263036\n    mov r1, #8\n    tst r0, r1\n    bne _02263036\n    cmp r2, #0\n    beq _0226303E\n    ldr r0, [sp, #0xc]\n    cmp r0, #2\n    blt _0226303E\n    mov r1, #1\n    add r0, sp, #0x1c\n    strb r1, [r0, #1]\n    b _02263044\n    mov r1, #0\n    add r0, sp, #0x1c\n    strb r1, [r0, #1]\n    ldr r2, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r1, _02263108 ; =0x00002D54\n    add r0, r2, #0\n    add r7, r0, r1\n    add r1, #0x6a\n    add r5, r0, r1\n    mov r0, #3\n    add r4, sp, #0x20\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x10]\n    mov r0, #4\n    add r3, sp, #0x1c\n    add r4, #1\n    mov ip, r0\n    ldr r0, _0226310C ; =0x00002D8C\n    ldr r0, [r2, r0]\n    cmp r0, #0\n    beq _022630D2\n    strh r0, [r3, #8]\n    ldr r0, _02263110 ; =0x00002D90\n    ldr r0, [r2, r0]\n    strh r0, [r3, #0xa]\n    ldrb r1, [r4]\n    mov r0, #4\n    orr r0, r1\n    strb r0, [r4]\n    mov r0, #0xb5\n    lsl r0, r0, #6\n    ldrh r0, [r2, r0]\n    cmp r0, #0x1d\n    beq _0226308A\n    cmp r0, #0x20\n    bne _0226309E\n    ldr r0, [r7]\n    lsr r0, r0, #0x1f\n    bne _0226309E\n    ldrb r0, [r4]\n    ldr r1, [sp, #0x10]\n    bic r0, r1\n    mov r1, #2\n    orr r0, r1\n    strb r0, [r4]\n    b _022630B2\n    ldrb r6, [r4]\n    ldr r0, [sp, #0x14]\n    bic r6, r0\n    ldrb r0, [r5]\n    lsl r0, r0, #0x1c\n    lsr r1, r0, #0x1c\n    mov r0, #3\n    and r0, r1\n    orr r0, r6\n    strb r0, [r4]\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0x18]\n    add r1, r1, r0\n    ldr r0, _02263114 ; =0x0000219C\n    ldrb r0, [r1, r0]\n    strb r0, [r3, #4]\n    ldr r0, _02263118 ; =0x00002DAC\n    ldr r0, [r2, r0]\n    cmp r0, #0\n    beq _022630CC\n    mov r0, #3\n    strb r0, [r3, #6]\n    b _022630DE\n    mov r0, #1\n    strb r0, [r3, #6]\n    b _022630DE\n    ldrb r1, [r4]\n    mov r0, ip\n    bic r1, r0\n    strb r1, [r4]\n    mov r0, #2\n    strb r0, [r3, #6]\n    ldr r0, [sp, #0x18]\n    add r2, #0xc0\n    add r0, r0, #1\n    add r3, #8\n    add r4, #8\n    add r7, #0xc0\n    add r5, #0xc0\n    str r0, [sp, #0x18]\n    cmp r0, #4\n    blt _02263064\n    mov r0, #0x24\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    mov r1, #1\n    add r3, sp, #0x1c\n    bl ov12_02262240\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02263108: .word 0x00002D54\n    _0226310C: .word 0x00002D8C\n    _02263110: .word 0x00002D90\n    _02263114: .word 0x0000219C\n    _02263118: .word 0x00002DAC"
    );
    #endif
}

void ov12_0226311C(void) {
    ov12_02262240(0, 4);
}

void ov12_02263138(void) {
    /* Original at 0x02263138 */
    /* Requires manual decompilation - 184 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    add r0, r1, #0\n    add r1, r2, #0\n    str r2, [sp, #0xc]\n    bl BattleBuffer_Clear\n    add r6, sp, #0x10\n    mov r1, #0x11\n    add r0, sp, #0x10\n    strb r1, [r0]\n    mov r0, #0\n    ldr r4, [sp, #8]\n    mov ip, r0\n    ldr r1, _022632AC ; =0x00002DCC\n    add r0, r4, #0\n    add r7, r0, r1\n    ldr r0, _022632B0 ; =0x0000312C\n    add r5, r6, #0\n    ldr r2, [sp, #8]\n    mov r1, ip\n    add r2, r2, r1\n    ldr r1, _022632B4 ; =0x0000219C\n    mov r3, #0\n    ldrb r1, [r2, r1]\n    strb r1, [r6, #4]\n    add r1, r4, r3\n    ldrb r2, [r1, r0]\n    add r1, r5, r3\n    add r3, r3, #1\n    strb r2, [r1, #8]\n    cmp r3, #6\n    blt _02263170\n    ldr r1, [r7]\n    add r4, r4, #6\n    lsl r1, r1, #0xa\n    lsr r2, r1, #0x1d\n    add r1, r6, #0\n    add r1, #0x20\n    strb r2, [r1]\n    mov r1, ip\n    add r1, r1, #1\n    add r6, r6, #1\n    add r5, r5, #6\n    add r7, #0xc0\n    mov ip, r1\n    cmp r1, #4\n    blt _02263162\n    ldr r0, [sp, #4]\n    bl BattleSystem_GetBattleType\n    cmp r0, #0x4a\n    bne _0226324E\n    mov r0, #1\n    bl MaskOfFlagNo\n    ldr r2, _022632B8 ; =0x00003108\n    ldr r1, [sp, #8]\n    ldrb r1, [r1, r2]\n    tst r0, r1\n    bne _022631D4\n    mov r0, #3\n    bl MaskOfFlagNo\n    ldr r2, _022632B8 ; =0x00003108\n    ldr r1, [sp, #8]\n    ldrb r1, [r1, r2]\n    tst r0, r1\n    bne _022631D4\n    mov r1, #1\n    add r0, sp, #0x10\n    strb r1, [r0, #1]\n    mov r1, #0\n    strb r1, [r0, #2]\n    strb r1, [r0, #3]\n    b _02263298\n    mov r0, #1\n    bl MaskOfFlagNo\n    ldr r2, _022632B8 ; =0x00003108\n    ldr r1, [sp, #8]\n    add r3, sp, #0x10\n    ldrb r1, [r1, r2]\n    tst r0, r1\n    bne _0226321A\n    mov r0, #0\n    mov r2, #0xba\n    ldr r1, [sp, #8]\n    strb r0, [r3, #1]\n    lsl r2, r2, #6\n    ldr r4, [r1, r2]\n    ldr r1, _022632BC ; =0x200400C0\n    tst r1, r4\n    beq _02263200\n    mov r1, #1\n    strb r1, [r3, #2]\n    strb r0, [r3, #3]\n    b _02263298\n    ldr r1, [sp, #8]\n    sub r2, #0x10\n    ldr r2, [r1, r2]\n    mov r1, #1\n    lsl r1, r1, #0x18\n    tst r1, r2\n    strb r0, [r3, #2]\n    beq _02263216\n    mov r0, #1\n    strb r0, [r3, #3]\n    b _02263298\n    strb r0, [r3, #3]\n    b _02263298\n    mov r0, #0\n    mov r2, #3\n    ldr r1, [sp, #8]\n    strb r0, [r3, #1]\n    lsl r2, r2, #0xc\n    ldr r4, [r1, r2]\n    ldr r1, _022632BC ; =0x200400C0\n    tst r1, r4\n    beq _02263234\n    mov r1, #1\n    strb r1, [r3, #2]\n    strb r0, [r3, #3]\n    b _02263298\n    ldr r1, [sp, #8]\n    sub r2, #0x10\n    ldr r2, [r1, r2]\n    mov r1, #1\n    lsl r1, r1, #0x18\n    tst r1, r2\n    strb r0, [r3, #2]\n    beq _0226324A\n    mov r0, #1\n    strb r0, [r3, #3]\n    b _02263298\n    strb r0, [r3, #3]\n    b _02263298\n    ldr r0, [sp, #4]\n    bl BattleSystem_GetBattleType\n    cmp r0, #0\n    bne _0226328E\n    mov r2, #0xba\n    mov r0, #0\n    add r3, sp, #0x10\n    ldr r1, [sp, #8]\n    strb r0, [r3, #1]\n    lsl r2, r2, #6\n    ldr r4, [r1, r2]\n    ldr r1, _022632BC ; =0x200400C0\n    tst r1, r4\n    beq _02263274\n    mov r1, #1\n    strb r1, [r3, #2]\n    strb r0, [r3, #3]\n    b _02263298\n    ldr r1, [sp, #8]\n    sub r2, #0x10\n    ldr r2, [r1, r2]\n    mov r1, #1\n    lsl r1, r1, #0x18\n    tst r1, r2\n    strb r0, [r3, #2]\n    beq _0226328A\n    mov r0, #1\n    strb r0, [r3, #3]\n    b _02263298\n    strb r0, [r3, #3]\n    b _02263298\n    mov r1, #0\n    add r0, sp, #0x10\n    strb r1, [r0, #1]\n    strb r1, [r0, #2]\n    strb r1, [r0, #3]\n    mov r0, #0x24\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    mov r1, #1\n    add r3, sp, #0x10\n    bl ov12_02262240\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    _022632AC: .word 0x00002DCC\n    _022632B0: .word 0x0000312C\n    _022632B4: .word 0x0000219C\n    _022632B8: .word 0x00003108\n    _022632BC: .word 0x200400C0"
    );
    #endif
}

void ov12_022632C0(void) {
    ov12_02262240(0, 4);
}

void BattleController_EmitShowMonList(void) {
    /* Original at 0x022632DC */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    add r0, r1, #0\n    add r1, r2, #0\n    str r2, [sp, #0xc]\n    add r4, r3, #0\n    bl BattleBuffer_Clear\n    mov r0, #0x12\n    add r1, sp, #0x10\n    strb r0, [r1]\n    ldr r0, [sp, #0xc]\n    add r7, sp, #0x10\n    strb r0, [r1, #1]\n    ldr r0, [sp, #0x50]\n    strb r4, [r1, #2]\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x54]\n    ldr r5, [sp, #8]\n    strb r0, [r1, #3]\n    ldr r1, _02263354 ; =0x00003108\n    ldr r0, [sp, #8]\n    mov r3, #0\n    ldrb r1, [r0, r1]\n    add r0, sp, #0x30\n    add r6, r7, #0\n    strb r1, [r0, #4]\n    ldr r0, _02263358 ; =0x0000312C\n    ldr r1, [sp, #8]\n    mov r4, #0\n    add r2, r1, r3\n    ldr r1, _0226335C ; =0x0000219C\n    ldrb r1, [r2, r1]\n    strb r1, [r7, #4]\n    add r1, r5, r4\n    ldrb r2, [r1, r0]\n    add r1, r6, r4\n    add r4, r4, #1\n    strb r2, [r1, #8]\n    cmp r4, #6\n    blt _02263324\n    add r3, r3, #1\n    add r7, r7, #1\n    add r5, r5, #6\n    add r6, r6, #6\n    cmp r3, #4\n    blt _02263318\n    mov r0, #0x28\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    mov r1, #1\n    add r3, sp, #0x10\n    bl ov12_02262240\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02263354: .word 0x00003108\n    _02263358: .word 0x0000312C\n    _0226335C: .word 0x0000219C"
    );
    #endif
}

void ov12_02263360(void) {
    ov12_02262240(0, 4);
}

void BattleController_EmitDrawYesNoBox(void) {
    /* Original at 0x0226337C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r2, #0\n    add r6, r0, #0\n    add r0, r1, #0\n    add r1, r5, #0\n    add r4, r3, #0\n    bl BattleBuffer_Clear\n    mov r1, #0x13\n    add r0, sp, #4\n    strb r1, [r0]\n    ldr r1, [sp, #0x20]\n    strh r4, [r0, #2]\n    strb r1, [r0, #1]\n    ldr r0, [sp, #0x24]\n    mov r1, #1\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x28]\n    add r2, r5, #0\n    str r0, [sp, #0xc]\n    mov r0, #0xc\n    str r0, [sp]\n    add r0, r6, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void BattleController_EmitPrintAttackMessage(void) {
    /* Original at 0x022633B8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r2, r1, #0\n    mov r1, #0x14\n    add r3, sp, #4\n    strb r1, [r3]\n    ldr r1, [r2, #0x64]\n    add r4, r2, r1\n    ldr r1, _022633E8 ; =0x0000219C\n    ldrb r1, [r4, r1]\n    strb r1, [r3, #1]\n    ldr r1, _022633EC ; =0x00003044\n    ldr r1, [r2, r1]\n    strh r1, [r3, #2]\n    mov r1, #4\n    str r1, [sp]\n    ldr r2, [r2, #0x64]\n    mov r1, #1\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _022633E8: .word 0x0000219C\n    _022633EC: .word 0x00003044"
    );
    #endif
}

void BattleController_EmitPrintMessage(void) {
    ov12_02262240(0x15, 0x24, 1);
}

void BattleController_SetMoveAnimation(void) {
    /* Original at 0x0226340C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x68\n    mov r3, #0\n    add r4, r1, #0\n    str r3, [sp]\n    ldr r6, [r4, #0x64]\n    add r5, r0, #0\n    str r6, [sp, #4]\n    ldr r6, [r4, #0x6c]\n    str r6, [sp, #8]\n    str r2, [sp, #0xc]\n    add r2, sp, #0x10\n    bl ov12_022643C8\n    mov r0, #0x58\n    str r0, [sp]\n    ldr r2, [r4, #0x64]\n    add r0, r5, #0\n    mov r1, #1\n    add r3, sp, #0x10\n    bl ov12_02262240\n    add sp, #0x68\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov12_0226343C(void) {
    /* Original at 0x0226343C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x68\n    add r4, r3, #0\n    mov r3, #0\n    str r3, [sp]\n    ldr r6, [sp, #0x78]\n    str r4, [sp, #4]\n    str r6, [sp, #8]\n    str r2, [sp, #0xc]\n    add r2, sp, #0x10\n    add r5, r0, #0\n    bl ov12_022643C8\n    mov r0, #0x58\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #0x10\n    bl ov12_02262240\n    add sp, #0x68\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void BattleController_EmitMonFlicker(void) {
    ov12_02262240(0x17, 1, 4);
}

void BattleController_EmitHealthbarUpdate(void) {
    /* Original at 0x02263488 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r1, #0\n    str r2, [sp, #8]\n    add r1, r2, #0\n    add r3, r5, r2\n    ldr r2, _0226354C ; =0x0000219C\n    str r0, [sp, #4]\n    ldrb r2, [r3, r2]\n    bl BattleSystem_GetPartyMon\n    add r4, r0, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    add r0, r4, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    add r6, r0, #0\n    mov r0, #0x18\n    add r3, sp, #0xc\n    strb r0, [r3]\n    ldr r0, [sp, #8]\n    mov r1, #0xc0\n    add r4, r0, #0\n    mul r4, r1\n    ldr r0, _02263550 ; =0x00002D74\n    add r1, r5, r4\n    ldrb r2, [r1, r0]\n    strb r2, [r3, #1]\n    add r2, r0, #0\n    add r2, #0x18\n    ldr r2, [r1, r2]\n    strh r2, [r3, #2]\n    add r2, r0, #0\n    add r2, #0x1c\n    ldr r2, [r1, r2]\n    sub r0, #0x34\n    strh r2, [r3, #4]\n    ldr r2, _02263554 ; =0x0000215C\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x14]\n    ldrh r0, [r1, r0]\n    cmp r0, #0x1d\n    beq _022634EE\n    cmp r0, #0x20\n    bne _02263500\n    ldr r0, _02263558 ; =0x00002D54\n    add r1, r5, r4\n    ldr r0, [r1, r0]\n    lsr r0, r0, #0x1f\n    bne _02263500\n    mov r1, #2\n    add r0, sp, #0xc\n    strb r1, [r0, #7]\n    b _0226350E\n    ldr r0, _0226355C ; =0x00002DBE\n    add r1, r5, r4\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #0x1c\n    lsr r1, r0, #0x1c\n    add r0, sp, #0xc\n    strb r1, [r0, #7]\n    add r0, r7, #0\n    add r1, r6, #0\n    bl GetMonExpBySpeciesAndLevel\n    ldr r1, _02263560 ; =0x00002DA4\n    add r2, r5, r4\n    ldr r1, [r2, r1]\n    sub r0, r1, r0\n    str r0, [sp, #0x18]\n    add r0, r7, #0\n    add r1, r6, #1\n    bl GetMonExpBySpeciesAndLevel\n    add r4, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    bl GetMonExpBySpeciesAndLevel\n    sub r0, r4, r0\n    str r0, [sp, #0x1c]\n    mov r0, #0x14\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #8]\n    mov r1, #1\n    add r3, sp, #0xc\n    bl ov12_02262240\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226354C: .word 0x0000219C\n    _02263550: .word 0x00002D74\n    _02263554: .word 0x0000215C\n    _02263558: .word 0x00002D54\n    _0226355C: .word 0x00002DBE\n    _02263560: .word 0x00002DA4"
    );
    #endif
}

void ov12_02263564(void) {
    /* Original at 0x02263564 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r4, r2, #0\n    add r5, r1, #0\n    str r3, [sp, #8]\n    ldr r2, _022635E0 ; =0x0000219C\n    add r3, r5, r4\n    ldrb r2, [r3, r2]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    bl BattleSystem_GetPartyMon\n    add r6, r0, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    add r0, r6, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    add r6, r0, #0\n    mov r1, #0x19\n    add r0, sp, #0xc\n    strb r1, [r0]\n    ldr r0, [sp, #8]\n    add r1, r6, #0\n    str r0, [sp, #0x10]\n    add r0, r7, #0\n    bl GetMonExpBySpeciesAndLevel\n    mov r1, #0xc0\n    mul r1, r4\n    add r2, r5, r1\n    ldr r1, _022635E4 ; =0x00002DA4\n    ldr r1, [r2, r1]\n    sub r0, r1, r0\n    str r0, [sp, #0x14]\n    add r0, r7, #0\n    add r1, r6, #1\n    bl GetMonExpBySpeciesAndLevel\n    add r5, r0, #0\n    add r0, r7, #0\n    add r1, r6, #0\n    bl GetMonExpBySpeciesAndLevel\n    sub r0, r5, r0\n    str r0, [sp, #0x18]\n    mov r0, #0x10\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #0xc\n    bl ov12_02262240\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022635E0: .word 0x0000219C\n    _022635E4: .word 0x00002DA4"
    );
    #endif
}

void BattleController_EmitPlayFaintAnimation(void) {
    /* Original at 0x022635E8 */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    str r0, [sp, #4]\n    add r0, r1, #0\n    mov ip, r2\n    mov r5, #0xb5\n    mov r2, #0x1a\n    add r1, sp, #0xc\n    strb r2, [r1]\n    mov r3, #0xc0\n    mov r2, ip\n    mul r3, r2\n    add r2, r0, r3\n    lsl r5, r5, #6\n    ldrh r4, [r2, r5]\n    strh r4, [r1, #2]\n    add r4, r5, #0\n    add r4, #0x26\n    ldrb r2, [r2, r4]\n    add r5, #0x70\n    lsl r2, r2, #0x1b\n    lsr r2, r2, #0x1b\n    strb r2, [r1, #8]\n    add r2, r0, r5\n    mov r1, #1\n    ldr r4, [r2, r3]\n    lsl r1, r1, #0x18\n    tst r1, r4\n    beq _02263626\n    mov r4, #1\n    b _02263628\n    mov r4, #0\n    add r1, sp, #0xc\n    strb r4, [r1, #9]\n    mov r1, #2\n    ldr r4, [r2, r3]\n    lsl r1, r1, #0x14\n    tst r1, r4\n    beq _0226363A\n    mov r4, #1\n    b _0226363C\n    mov r4, #0\n    add r1, sp, #0xc\n    strb r4, [r1, #0xa]\n    ldr r4, [r2, r3]\n    mov r2, #2\n    lsl r2, r2, #0x14\n    tst r2, r4\n    beq _0226365A\n    ldr r2, _022636E4 ; =0x00002DFA\n    add r4, r0, r3\n    ldrh r3, [r4, r2]\n    sub r2, #0x16\n    strb r3, [r1, #1]\n    ldr r1, [r4, r2]\n    str r1, [sp, #0x10]\n    b _0226366C\n    ldr r2, _022636E8 ; =0x00002DBE\n    add r4, r0, r3\n    ldrb r3, [r4, r2]\n    sub r2, #0x16\n    lsl r3, r3, #0x1c\n    lsr r3, r3, #0x1c\n    strb r3, [r1, #1]\n    ldr r1, [r4, r2]\n    str r1, [sp, #0x10]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r1, _022636EC ; =0x00002D66\n    add r7, sp, #0xc\n    add r3, r0, r1\n    add r1, #0x58\n    add r4, r7, #0\n    add r5, r7, #0\n    add r6, r0, r1\n    mov r1, #0xb5\n    lsl r1, r1, #6\n    ldrh r1, [r0, r1]\n    strh r1, [r7, #0xc]\n    ldrb r1, [r3]\n    lsl r1, r1, #0x1a\n    lsr r1, r1, #0x1f\n    strb r1, [r4, #0x18]\n    ldrb r1, [r3]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1b\n    strb r1, [r4, #0x1c]\n    ldr r1, _022636F0 ; =0x00002DB0\n    ldr r2, [r0, r1]\n    mov r1, #2\n    lsl r1, r1, #0x14\n    tst r1, r2\n    beq _022636AC\n    ldr r1, _022636E4 ; =0x00002DFA\n    ldrh r1, [r0, r1]\n    strb r1, [r4, #0x14]\n    ldr r1, _022636F4 ; =0x00002DE4\n    b _022636B6\n    ldrb r1, [r6]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    strb r1, [r4, #0x14]\n    ldr r1, _022636F8 ; =0x00002DA8\n    ldr r1, [r0, r1]\n    add r0, #0xc0\n    str r1, [r5, #0x20]\n    ldr r1, [sp, #8]\n    add r7, r7, #2\n    add r1, r1, #1\n    add r3, #0xc0\n    add r4, r4, #1\n    add r5, r5, #4\n    add r6, #0xc0\n    str r1, [sp, #8]\n    cmp r1, #4\n    blt _0226367E\n    mov r0, #0x30\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    mov r1, #1\n    mov r2, ip\n    add r3, sp, #0xc\n    bl ov12_02262240\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _022636E4: .word 0x00002DFA\n    _022636E8: .word 0x00002DBE\n    _022636EC: .word 0x00002D66\n    _022636F0: .word 0x00002DB0\n    _022636F4: .word 0x00002DE4\n    _022636F8: .word 0x00002DA8"
    );
    #endif
}

void BattleController_EmitPlaySE(void) {
    ov12_02262240(1, 4, 0x1b);
}

void BattleController_EmitFadeOutBattle(void) {
    ov12_02262240(0x1c, 1, 4, 0);
}

void BattleController_EmitToggleVanish(void) {
    /* Original at 0x02263738 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    mov ip, r1\n    mov r3, #0x1d\n    add r1, sp, #8\n    strb r3, [r1]\n    strb r2, [r1, #1]\n    ldr r3, [r0, #0x30]\n    mov r2, #0xc0\n    mov r1, ip\n    mul r2, r1\n    ldr r1, _022637F0 ; =0x00002DB0\n    add r2, r3, r2\n    ldr r2, [r2, r1]\n    mov r1, #1\n    lsl r1, r1, #0x18\n    tst r1, r2\n    beq _02263760\n    mov r2, #1\n    b _02263762\n    mov r2, #0\n    add r7, sp, #8\n    add r1, sp, #8\n    mov r3, #0\n    strb r2, [r1, #2]\n    str r3, [sp, #4]\n    add r4, r7, #0\n    add r5, r7, #0\n    ldr r1, [r0, #0x30]\n    add r2, r1, r3\n    mov r1, #0xb5\n    lsl r1, r1, #6\n    ldrh r1, [r2, r1]\n    strh r1, [r7, #4]\n    ldr r1, [r0, #0x30]\n    add r2, r1, r3\n    ldr r1, _022637F4 ; =0x00002D66\n    ldrb r1, [r2, r1]\n    lsl r1, r1, #0x1a\n    lsr r1, r1, #0x1f\n    strb r1, [r4, #0x10]\n    ldr r1, [r0, #0x30]\n    add r2, r1, r3\n    ldr r1, _022637F4 ; =0x00002D66\n    ldrb r1, [r2, r1]\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1b\n    strb r1, [r4, #0x14]\n    ldr r1, [r0, #0x30]\n    add r6, r1, r3\n    ldr r1, _022637F0 ; =0x00002DB0\n    ldr r2, [r6, r1]\n    mov r1, #2\n    lsl r1, r1, #0x14\n    tst r1, r2\n    beq _022637B6\n    ldr r1, _022637F8 ; =0x00002DFA\n    ldrh r1, [r6, r1]\n    strb r1, [r4, #0xc]\n    ldr r1, [r0, #0x30]\n    add r2, r1, r3\n    ldr r1, _022637FC ; =0x00002DE4\n    b _022637C6\n    ldr r1, _02263800 ; =0x00002DBE\n    ldrb r1, [r6, r1]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    strb r1, [r4, #0xc]\n    ldr r1, [r0, #0x30]\n    add r2, r1, r3\n    ldr r1, _02263804 ; =0x00002DA8\n    ldr r1, [r2, r1]\n    add r3, #0xc0\n    str r1, [r5, #0x18]\n    ldr r1, [sp, #4]\n    add r7, r7, #2\n    add r1, r1, #1\n    add r4, r4, #1\n    add r5, r5, #4\n    str r1, [sp, #4]\n    cmp r1, #4\n    blt _02263770\n    mov r1, #0x28\n    str r1, [sp]\n    mov r1, #1\n    mov r2, ip\n    add r3, sp, #8\n    bl ov12_02262240\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022637F0: .word 0x00002DB0\n    _022637F4: .word 0x00002D66\n    _022637F8: .word 0x00002DFA\n    _022637FC: .word 0x00002DE4\n    _02263800: .word 0x00002DBE\n    _02263804: .word 0x00002DA8"
    );
    #endif
}

void BattleController_EmitHealthbarStatus(void) {
    ov12_02262240(1, 4, 0x1e);
}

void BattleController_EmitPrintTrainerMessage(void) {
    ov12_02262240(1, 4, 0x1f);
}

void BattleController_EmitSetStatus2Effect(void) {
    /* Original at 0x02263848 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x68\n    add r4, r2, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    str r4, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    add r2, sp, #0x10\n    mov r3, #1\n    add r5, r0, #0\n    bl ov12_022643C8\n    mov r0, #0x58\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #0x10\n    bl ov12_02262240\n    add sp, #0x68\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void BattleController_EmitCopyStatus2Effect(void) {
    /* Original at 0x02263878 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x68\n    add r4, r2, #0\n    ldr r2, [sp, #0x78]\n    add r5, r0, #0\n    str r2, [sp]\n    str r4, [sp, #4]\n    str r3, [sp, #8]\n    mov r2, #0\n    str r2, [sp, #0xc]\n    add r2, sp, #0x10\n    mov r3, #1\n    bl ov12_022643C8\n    mov r0, #0x58\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #0x10\n    bl ov12_02262240\n    add sp, #0x68\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void BattleController_EmitPrintReturnMessage(void) {
    /* Original at 0x022638A8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r2, #0\n    mov r2, #0x20\n    add r0, sp, #4\n    strb r2, [r0]\n    strb r3, [r0, #1]\n    ldr r0, _022638E4 ; =0x00003122\n    ldrsh r2, [r1, r0]\n    ldr r0, _022638E8 ; =0x00002E4C\n    ldr r0, [r1, r0]\n    sub r1, r2, r0\n    mov r0, #0x64\n    mul r0, r1\n    add r1, r2, #0\n    bl _s32_div_f\n    add r1, sp, #4\n    strh r0, [r1, #2]\n    mov r0, #4\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _022638E4: .word 0x00003122\n    _022638E8: .word 0x00002E4C"
    );
    #endif
}

void BattleController_EmitPrintSendOutMessage(void) {
    /* Original at 0x022638EC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    mov r1, #0x21\n    add r0, sp, #4\n    strb r1, [r0]\n    ldr r2, _02263934 ; =0x00002E4C\n    strb r3, [r0, #1]\n    ldr r1, [r6, r2]\n    cmp r1, #0\n    bne _0226390E\n    mov r1, #0xfa\n    lsl r1, r1, #2\n    strh r1, [r0, #2]\n    b _02263920\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    mul r0, r1\n    add r1, r2, #4\n    ldr r1, [r6, r1]\n    bl _u32_div_f\n    add r1, sp, #4\n    strh r0, [r1, #2]\n    mov r0, #4\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _02263934: .word 0x00002E4C"
    );
    #endif
}

void BattleController_EmitPrintEncounterMessage(void) {
    ov12_02262240(0x22, 1, 4);
}

void BattleController_EmitPrintFirstSendOutMessage(void) {
    /* Original at 0x02263950 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r1, #0\n    str r2, [sp, #4]\n    mov r2, #0x23\n    add r1, sp, #8\n    add r6, r0, #0\n    strb r2, [r1]\n    mov r4, #0\n    bl BattleSystem_GetMaxBattlers\n    cmp r0, #0\n    ble _02263982\n    add r5, sp, #8\n    ldr r0, _02263998 ; =0x0000219C\n    add r1, r7, r4\n    ldrb r0, [r1, r0]\n    add r4, r4, #1\n    strb r0, [r5, #4]\n    add r0, r6, #0\n    add r5, r5, #1\n    bl BattleSystem_GetMaxBattlers\n    cmp r4, r0\n    blt _0226396C\n    mov r0, #8\n    str r0, [sp]\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    mov r1, #1\n    add r3, sp, #8\n    bl ov12_02262240\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02263998: .word 0x0000219C"
    );
    #endif
}

void ov12_0226399C(void) {
    ov12_02262240(0x24, 1, 4);
}

void ov12_022639B8(void) {
    /* Original at 0x022639B8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, r5, r6, lr}\n    sub sp, #0x2c\n    add r4, r1, #0\n    add r5, r0, #0\n    bl BattleSystem_GetBattleContext\n    add r1, r4, #0\n    bl BattleBuffer_Clear\n    mov r1, #0x25\n    add r0, sp, #4\n    strb r1, [r0]\n    add r6, sp, #0x48\n    add r3, sp, #8\n    mov r2, #4\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _022639D8\n    ldr r0, [r6]\n    mov r1, #1\n    str r0, [r3]\n    mov r0, #0x28\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0x2c\n    pop {r3, r4, r5, r6}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov12_02263A00(void) {
    ov12_02262240(0, 1, 4);
}

void ov12_02263A1C(void) {
    /* Original at 0x02263A1C */
    /* Requires manual decompilation - 137 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r1, #0\n    ldr r1, _02263B38 ; =0x0000219C\n    add r4, r2, #0\n    add r7, r5, r1\n    ldrb r2, [r7, r4]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    bl BattleSystem_GetPartyMon\n    add r6, r0, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #8]\n    mov r0, #0x26\n    add r3, sp, #0x10\n    strb r0, [r3]\n    mov r0, #0xc0\n    add r6, r4, #0\n    mul r6, r0\n    ldr r2, _02263B3C ; =0x00002D74\n    add r0, r5, r6\n    ldrb r1, [r0, r2]\n    strb r1, [r3, #1]\n    add r1, r2, #0\n    add r1, #0x18\n    ldr r1, [r0, r1]\n    add r2, #0x1c\n    strh r1, [r3, #2]\n    ldr r0, [r0, r2]\n    add r1, r4, #0\n    strh r0, [r3, #4]\n    ldrb r0, [r7, r4]\n    strb r0, [r3, #6]\n    add r0, r5, #0\n    bl GetBattlerStatusCondition\n    add r1, sp, #0x10\n    ldrb r2, [r1, #7]\n    mov r3, #0x1f\n    lsl r0, r0, #0x18\n    bic r2, r3\n    lsr r3, r0, #0x18\n    mov r0, #0x1f\n    and r0, r3\n    orr r0, r2\n    strb r0, [r1, #7]\n    mov r0, #0xb5\n    lsl r0, r0, #6\n    add r7, r5, r0\n    ldrh r0, [r7, r6]\n    cmp r0, #0x1d\n    beq _02263A9C\n    cmp r0, #0x20\n    bne _02263AB6\n    ldr r0, _02263B40 ; =0x00002D54\n    add r1, r5, r6\n    ldr r0, [r1, r0]\n    lsr r0, r0, #0x1f\n    bne _02263AB6\n    add r0, sp, #0x10\n    ldrb r1, [r0, #7]\n    mov r2, #0x60\n    bic r1, r2\n    mov r2, #0x40\n    orr r1, r2\n    strb r1, [r0, #7]\n    b _02263AD0\n    add r3, sp, #0x10\n    ldrb r2, [r3, #7]\n    mov r0, #0x60\n    add r1, r5, r6\n    bic r2, r0\n    ldr r0, _02263B44 ; =0x00002DBE\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x19\n    orr r0, r2\n    strb r0, [r3, #7]\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #8]\n    bl GetMonExpBySpeciesAndLevel\n    mov r1, #0xc0\n    mul r1, r4\n    add r2, r5, r1\n    ldr r1, _02263B48 ; =0x00002DA4\n    ldr r1, [r2, r1]\n    sub r0, r1, r0\n    ldr r1, [sp, #8]\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0xc]\n    add r1, r1, #1\n    bl GetMonExpBySpeciesAndLevel\n    add r5, r0, #0\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #8]\n    bl GetMonExpBySpeciesAndLevel\n    sub r0, r5, r0\n    str r0, [sp, #0x1c]\n    ldrh r1, [r7, r6]\n    ldr r0, [sp, #4]\n    bl BattleSystem_CheckMonCaught\n    add r3, sp, #0x10\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x1f\n    ldrb r1, [r3, #7]\n    mov r2, #0x80\n    lsr r0, r0, #0x18\n    bic r1, r2\n    orr r0, r1\n    strb r0, [r3, #7]\n    ldr r0, [sp, #4]\n    bl BattleSystem_GetSafariBallCount\n    str r0, [sp, #0x20]\n    mov r0, #0x14\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #0x10\n    bl ov12_02262240\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02263B38: .word 0x0000219C\n    _02263B3C: .word 0x00002D74\n    _02263B40: .word 0x00002D54\n    _02263B44: .word 0x00002DBE\n    _02263B48: .word 0x00002DA4"
    );
    #endif
}

void BattleController_EmitBattleMonToPartyMonCopy(void) {
    /* Original at 0x02263B4C */
    /* Requires manual decompilation - 166 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r6, r1, #0\n    str r2, [sp, #8]\n    mov r1, #0x27\n    add r2, sp, #0x10\n    strb r1, [r2]\n    ldrb r1, [r2, #1]\n    mov r3, #0xf\n    str r0, [sp, #4]\n    bic r1, r3\n    ldr r3, [sp, #8]\n    add r4, r6, r3\n    ldr r3, _02263C88 ; =0x0000219C\n    ldrb r4, [r4, r3]\n    mov r3, #0xf\n    and r3, r4\n    orr r1, r3\n    strb r1, [r2, #1]\n    ldr r1, [sp, #8]\n    mov r3, #0xc0\n    mul r3, r1\n    ldrb r4, [r2, #1]\n    mov r1, #0xf0\n    str r3, [sp, #0xc]\n    bic r4, r1\n    add r1, r3, #0\n    add r3, r6, r1\n    ldr r1, _02263C8C ; =0x00002DCC\n    ldr r5, [r3, r1]\n    lsl r5, r5, #0x1a\n    lsr r5, r5, #0x1c\n    lsl r5, r5, #0x18\n    lsr r5, r5, #0x18\n    lsl r5, r5, #0x1c\n    lsr r5, r5, #0x18\n    orr r4, r5\n    strb r4, [r2, #1]\n    add r4, r1, #0\n    sub r4, #0x40\n    ldr r4, [r3, r4]\n    sub r1, #0x14\n    strh r4, [r2, #2]\n    ldrh r1, [r3, r1]\n    strh r1, [r2, #0xc]\n    ldr r1, [sp, #8]\n    bl BattleSystem_GetFieldSide\n    lsl r0, r0, #3\n    add r1, r6, r0\n    mov r0, #0x71\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r7, _02263C90 ; =0x00002D6C\n    lsl r0, r0, #3\n    lsr r0, r0, #0x1a\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0xc]\n    add r2, r6, r0\n    ldr r0, _02263C94 ; =0x00002D66\n    ldrb r1, [r2, r0]\n    add r0, r0, #1\n    lsl r1, r1, #0x1b\n    lsr r3, r1, #0x1b\n    add r1, sp, #0x10\n    strh r3, [r1, #0x20]\n    ldrb r0, [r2, r0]\n    ldr r1, [sp, #8]\n    mov r2, #0xc0\n    mul r2, r1\n    add r1, r6, r2\n    mov ip, r2\n    add r2, sp, #0x10\n    str r0, [sp, #0x34]\n    mov r0, #0\n    add r3, r1, #0\n    add r4, r2, #0\n    ldr r5, _02263C98 ; =0x00002D4C\n    add r0, r0, #1\n    ldrh r5, [r1, r5]\n    add r1, r1, #2\n    strh r5, [r2, #0xe]\n    ldrb r5, [r3, r7]\n    add r2, r2, #2\n    add r3, r3, #1\n    strb r5, [r4, #0x16]\n    add r4, r4, #1\n    cmp r0, #4\n    blt _02263BE6\n    add r1, sp, #0x10\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    cmp r0, #0\n    beq _02263C1E\n    mov r0, ip\n    add r3, r6, r0\n    ldr r0, _02263C9C ; =0x00002DAC\n    ldr r1, _02263CA0 ; =0xFFFFF0FF\n    ldr r2, [r3, r0]\n    add r0, r0, #4\n    and r1, r2\n    str r1, [sp, #0x14]\n    ldr r0, [r3, r0]\n    str r0, [sp, #0x2c]\n    b _02263C2C\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    add r1, r6, r0\n    ldr r0, _02263CA4 ; =0x00002DB0\n    ldr r0, [r1, r0]\n    str r0, [sp, #0x2c]\n    mov r1, #0x85\n    lsl r1, r1, #6\n    mov r0, #1\n    ldr r2, [r6, r1]\n    lsl r0, r0, #0x1a\n    tst r0, r2\n    add r0, sp, #0x10\n    beq _02263C4A\n    mov r2, #1\n    strh r2, [r0, #0x2a]\n    ldr r2, [r6, r1]\n    ldr r0, _02263CA8 ; =0xFBFFFFFF\n    and r0, r2\n    str r0, [r6, r1]\n    b _02263C4E\n    mov r1, #0\n    strh r1, [r0, #0x2a]\n    mov r1, #0x85\n    lsl r1, r1, #6\n    mov r0, #2\n    ldr r2, [r6, r1]\n    lsl r0, r0, #0x1a\n    tst r0, r2\n    add r0, sp, #0x10\n    beq _02263C6E\n    mov r2, #1\n    strh r2, [r0, #0x28]\n    strh r2, [r0, #0x2a]\n    ldr r2, [r6, r1]\n    ldr r0, _02263CAC ; =0xF7FFFFFF\n    and r0, r2\n    str r0, [r6, r1]\n    b _02263C72\n    mov r1, #0\n    strh r1, [r0, #0x28]\n    mov r0, #0x2c\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #8]\n    mov r1, #1\n    add r3, sp, #0x10\n    bl ov12_02262240\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02263C88: .word 0x0000219C\n    _02263C8C: .word 0x00002DCC\n    _02263C90: .word 0x00002D6C\n    _02263C94: .word 0x00002D66\n    _02263C98: .word 0x00002D4C\n    _02263C9C: .word 0x00002DAC\n    _02263CA0: .word 0xFFFFF0FF\n    _02263CA4: .word 0x00002DB0\n    _02263CA8: .word 0xFBFFFFFF\n    _02263CAC: .word 0xF7FFFFFF"
    );
    #endif
}

void BattleController_EmitBackgroundSlideIn(void) {
    ov12_02262240(0x28, 1, 4);
}

void ov12_02263CCC(void) {
    ov12_02262240(0x29, 1, 4);
}

void BattleControl_EmitPartyStatusHeal(void) {
    /* Original at 0x02263CE8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    mov r5, #0x2a\n    add r4, sp, #4\n    strb r5, [r4]\n    strh r3, [r4, #2]\n    mov r3, #0xc0\n    mul r3, r2\n    add r3, r1, r3\n    ldr r1, _02263D10 ; =0x00002D67\n    ldrb r1, [r3, r1]\n    add r3, sp, #4\n    strb r1, [r4, #1]\n    mov r1, #4\n    str r1, [sp]\n    mov r1, #1\n    bl ov12_02262240\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _02263D10: .word 0x00002D67"
    );
    #endif
}

void ov12_02263D14(void) {
    /* Original at 0x02263D14 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r7, r0, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl BattleSystem_GetBattleContext\n    add r1, r5, #0\n    bl BattleBuffer_Clear\n    mov r1, #0x2b\n    add r0, sp, #4\n    strb r1, [r0]\n    strh r4, [r0, #2]\n    strb r6, [r0, #1]\n    mov r0, #4\n    str r0, [sp]\n    add r0, r7, #0\n    mov r1, #1\n    add r2, r5, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void BattleController_EmitPlayMosaicAnimation(void) {
    ov12_02262240(1, 4, 0x2c);
}

void BattleController_EmitChangeForm(void) {
    /* Original at 0x02263D6C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r7, r1, #0\n    mov r1, #0x2d\n    add r3, sp, #4\n    strb r1, [r3]\n    mov r1, #0xc0\n    add r6, r7, #0\n    mul r6, r1\n    ldr r1, [r0, #0x30]\n    add r2, r1, r6\n    mov r1, #0xb5\n    lsl r1, r1, #6\n    ldrh r2, [r2, r1]\n    strh r2, [r3, #2]\n    ldr r2, [r0, #0x30]\n    add r4, r2, r6\n    add r2, r1, #0\n    add r2, #0x26\n    ldrb r2, [r4, r2]\n    lsl r2, r2, #0x1a\n    lsr r2, r2, #0x1f\n    strb r2, [r3, #5]\n    ldr r2, [r0, #0x30]\n    add r5, r2, r6\n    add r2, r1, #0\n    add r2, #0x70\n    ldr r4, [r5, r2]\n    mov r2, #2\n    lsl r2, r2, #0x14\n    tst r2, r4\n    beq _02263DC0\n    add r2, r1, #0\n    add r2, #0xba\n    ldrh r2, [r5, r2]\n    add r1, #0xa4\n    strb r2, [r3, #4]\n    ldr r2, [r0, #0x30]\n    add r2, r2, r6\n    ldr r1, [r2, r1]\n    str r1, [sp, #0xc]\n    b _02263DD6\n    add r2, r1, #0\n    add r2, #0x7e\n    ldrb r2, [r5, r2]\n    add r1, #0x68\n    lsl r2, r2, #0x1c\n    lsr r2, r2, #0x1c\n    strb r2, [r3, #4]\n    ldr r2, [r0, #0x30]\n    add r2, r2, r6\n    ldr r1, [r2, r1]\n    str r1, [sp, #0xc]\n    ldr r1, [r0, #0x30]\n    add r3, sp, #4\n    add r2, r1, r6\n    ldr r1, _02263DF8 ; =0x00002D66\n    ldrb r1, [r2, r1]\n    lsl r1, r1, #0x1b\n    lsr r2, r1, #0x1b\n    add r1, sp, #4\n    strb r2, [r1, #1]\n    mov r1, #0xc\n    str r1, [sp]\n    mov r1, #1\n    add r2, r7, #0\n    bl ov12_02262240\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02263DF8: .word 0x00002D66"
    );
    #endif
}

void BattleController_EmitSetBattleBackground(void) {
    ov12_02262240(0x2e, 1, 4);
}

void ov12_02263E18(void) {
    ov12_02262240(0x2f, 1, 4);
}

void BattleController_EmitInitStartBallGauge(void) {
    /* Original at 0x02263E34 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    str r4, [sp]\n    ldr r1, [r5, #0x30]\n    add r2, sp, #4\n    mov r3, #0x30\n    bl ov12_022645F8\n    mov r0, #8\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void BattleController_EmitDeleteStartBallGauge(void) {
    /* Original at 0x02263E5C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    str r4, [sp]\n    ldr r1, [r5, #0x30]\n    add r2, sp, #4\n    mov r3, #0x31\n    bl ov12_022645F8\n    mov r0, #8\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void BattleController_EmitInitBallGauge(void) {
    /* Original at 0x02263E84 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    str r4, [sp]\n    ldr r1, [r5, #0x30]\n    add r2, sp, #4\n    mov r3, #0x32\n    bl ov12_022645F8\n    mov r0, #8\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void BattleController_EmitDeleteBallGauge(void) {
    /* Original at 0x02263EAC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    str r4, [sp]\n    ldr r1, [r5, #0x30]\n    add r2, sp, #4\n    mov r3, #0x33\n    bl ov12_022645F8\n    mov r0, #8\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void BattleController_EmitLoadBallGfx(void) {
    ov12_02262240(0x34, 1, 4, 0);
}

void BattleController_EmitDeleteBallGfx(void) {
    ov12_02262240(0x35, 1, 4, 0);
}

void BattleController_EmitIncrementGameStat(void) {
    ov12_02262240(1, 4, 0x36);
}

void BattleController_EmitShowWaitMessage(void) {
    /* Original at 0x02263F30 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    add r4, r1, #0\n    bl BattleSystem_GetBattleType\n    mov r2, #0x37\n    add r1, sp, #4\n    strb r2, [r1]\n    mov r2, #0\n    strh r2, [r1, #2]\n    mov r1, #4\n    tst r0, r1\n    beq _02263F84\n    bl sub_0202FC48\n    cmp r0, #1\n    bne _02263F84\n    ldr r0, _02263F88 ; =0x0000240C\n    ldr r1, [r5, r0]\n    mov r0, #0x10\n    tst r0, r1\n    bne _02263F84\n    add r0, r5, #0\n    add r1, sp, #8\n    bl ov12_0223BE68\n    add r1, sp, #4\n    strh r0, [r1, #2]\n    ldrh r0, [r1, #2]\n    cmp r0, #0x1c\n    blo _02263F74\n    bl GF_AssertFail\n    mov r0, #0x20\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0x24\n    pop {r4, r5, pc}\n    _02263F88: .word 0x0000240C"
    );
    #endif
}

void ov12_02263F8C(void) {
    /* Original at 0x02263F8C */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x64\n    str r0, [sp, #4]\n    add r3, r1, #0\n    mov r1, #0x38\n    add r0, sp, #0xc\n    strb r1, [r0]\n    mov r0, #0\n    add r7, sp, #0xc\n    str r2, [sp, #8]\n    ldr r4, _02264024 ; =0x00002D66\n    mov ip, r0\n    add r0, r3, r4\n    add r4, #0x58\n    add r1, r7, #0\n    add r2, r7, #0\n    add r6, r3, r4\n    mov r4, #0xb5\n    lsl r4, r4, #6\n    ldrh r4, [r3, r4]\n    strh r4, [r7, #0x18]\n    ldrb r4, [r0]\n    lsl r4, r4, #0x1a\n    lsr r5, r4, #0x1f\n    add r4, r1, #0\n    add r4, #0x24\n    strb r5, [r4]\n    ldrb r4, [r0]\n    lsl r4, r4, #0x1b\n    lsr r5, r4, #0x1b\n    add r4, r1, #0\n    add r4, #0x28\n    strb r5, [r4]\n    ldr r4, _02264028 ; =0x00002DB0\n    ldr r5, [r3, r4]\n    mov r4, #2\n    lsl r4, r4, #0x14\n    tst r4, r5\n    beq _02263FE8\n    ldr r4, _0226402C ; =0x00002DFA\n    ldrh r5, [r3, r4]\n    add r4, r1, #0\n    add r4, #0x20\n    strb r5, [r4]\n    ldr r4, _02264030 ; =0x00002DE4\n    b _02263FF6\n    ldrb r4, [r6]\n    lsl r4, r4, #0x1c\n    lsr r5, r4, #0x1c\n    add r4, r1, #0\n    add r4, #0x20\n    strb r5, [r4]\n    ldr r4, _02264034 ; =0x00002DA8\n    ldr r4, [r3, r4]\n    add r3, #0xc0\n    str r4, [r2, #0x2c]\n    mov r4, ip\n    add r4, r4, #1\n    add r7, r7, #2\n    add r0, #0xc0\n    add r1, r1, #1\n    add r2, r2, #4\n    add r6, #0xc0\n    mov ip, r4\n    cmp r4, #4\n    blt _02263FAE\n    mov r0, #0x58\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #8]\n    mov r1, #1\n    add r3, sp, #0xc\n    bl ov12_02262240\n    add sp, #0x64\n    pop {r4, r5, r6, r7, pc}\n    _02264024: .word 0x00002D66\n    _02264028: .word 0x00002DB0\n    _0226402C: .word 0x00002DFA\n    _02264030: .word 0x00002DE4\n    _02264034: .word 0x00002DA8"
    );
    #endif
}

void ov12_02264038(void) {
    ov12_02262240(0x39, 1, 4);
}

void ov12_02264054(void) {
    ov12_02262240(0x3a, 1, 4);
}

void BattleController_EmitPrintResultMessage(void) {
    ov12_02262240(0x3b, 1, 4, 0);
}

void BattleController_EmitRunAwayMessage(void) {
    /* Original at 0x0226408C */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r6, r0, #0\n    add r5, r1, #0\n    bl BattleSystem_GetBattleType\n    str r0, [sp, #4]\n    mov r1, #0x3c\n    add r0, sp, #8\n    strb r1, [r0]\n    mov r4, #0\n    strb r4, [r0, #1]\n    strh r4, [r0, #2]\n    add r0, r6, #0\n    bl BattleSystem_GetMaxBattlers\n    cmp r0, #0\n    ble _022640D4\n    add r7, sp, #8\n    ldr r0, _02264118 ; =0x000021A8\n    ldr r0, [r5, r0]\n    cmp r0, #0x10\n    bne _022640C6\n    add r0, r4, #0\n    bl MaskOfFlagNo\n    ldrb r1, [r7, #1]\n    orr r0, r1\n    strb r0, [r7, #1]\n    add r0, r6, #0\n    add r5, #0x10\n    add r4, r4, #1\n    bl BattleSystem_GetMaxBattlers\n    cmp r4, r0\n    blt _022640B2\n    ldr r0, [sp, #4]\n    mov r1, #4\n    tst r0, r1\n    beq _02264104\n    bl sub_0202FC48\n    cmp r0, #1\n    bne _02264104\n    ldr r0, _0226411C ; =0x0000240C\n    ldr r1, [r6, r0]\n    mov r0, #0x10\n    tst r0, r1\n    bne _02264104\n    add r0, r6, #0\n    add r1, sp, #0xc\n    bl ov12_0223BE68\n    add r1, sp, #8\n    strh r0, [r1, #2]\n    ldrh r0, [r1, #2]\n    cmp r0, #0x1c\n    blo _02264104\n    bl GF_AssertFail\n    mov r0, #0x20\n    str r0, [sp]\n    add r0, r6, #0\n    mov r1, #1\n    mov r2, #0\n    add r3, sp, #8\n    bl ov12_02262240\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _02264118: .word 0x000021A8\n    _0226411C: .word 0x0000240C"
    );
    #endif
}

void BattleController_EmitForefitMessage(void) {
    /* Original at 0x02264120 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    bl BattleSystem_GetBattleType\n    mov r2, #0x3d\n    add r1, sp, #4\n    strb r2, [r1]\n    mov r2, #0\n    strh r2, [r1, #2]\n    mov r1, #4\n    tst r0, r1\n    beq _02264162\n    bl sub_0202FC48\n    cmp r0, #1\n    bne _02264162\n    ldr r0, _02264178 ; =0x0000240C\n    ldr r1, [r4, r0]\n    mov r0, #0x10\n    tst r0, r1\n    bne _02264162\n    add r0, r4, #0\n    add r1, sp, #8\n    bl ov12_0223BE68\n    add r1, sp, #4\n    strh r0, [r1, #2]\n    ldrh r0, [r1, #2]\n    cmp r0, #0x1c\n    blo _02264162\n    bl GF_AssertFail\n    mov r0, #0x20\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0x24\n    pop {r3, r4, pc}\n    nop\n    _02264178: .word 0x0000240C"
    );
    #endif
}

void BattleController_EmitSwapToSubstituteSprite(void) {
    /* Original at 0x0226417C */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x64\n    str r0, [sp, #4]\n    add r3, r1, #0\n    mov r1, #0x3e\n    add r0, sp, #0xc\n    strb r1, [r0]\n    mov r0, #0\n    add r7, sp, #0xc\n    str r2, [sp, #8]\n    ldr r4, _02264214 ; =0x00002D66\n    mov ip, r0\n    add r0, r3, r4\n    add r4, #0x58\n    add r1, r7, #0\n    add r2, r7, #0\n    add r6, r3, r4\n    mov r4, #0xb5\n    lsl r4, r4, #6\n    ldrh r4, [r3, r4]\n    strh r4, [r7, #0x18]\n    ldrb r4, [r0]\n    lsl r4, r4, #0x1a\n    lsr r5, r4, #0x1f\n    add r4, r1, #0\n    add r4, #0x24\n    strb r5, [r4]\n    ldrb r4, [r0]\n    lsl r4, r4, #0x1b\n    lsr r5, r4, #0x1b\n    add r4, r1, #0\n    add r4, #0x28\n    strb r5, [r4]\n    ldr r4, _02264218 ; =0x00002DB0\n    ldr r5, [r3, r4]\n    mov r4, #2\n    lsl r4, r4, #0x14\n    tst r4, r5\n    beq _022641D8\n    ldr r4, _0226421C ; =0x00002DFA\n    ldrh r5, [r3, r4]\n    add r4, r1, #0\n    add r4, #0x20\n    strb r5, [r4]\n    ldr r4, _02264220 ; =0x00002DE4\n    b _022641E6\n    ldrb r4, [r6]\n    lsl r4, r4, #0x1c\n    lsr r5, r4, #0x1c\n    add r4, r1, #0\n    add r4, #0x20\n    strb r5, [r4]\n    ldr r4, _02264224 ; =0x00002DA8\n    ldr r4, [r3, r4]\n    add r3, #0xc0\n    str r4, [r2, #0x2c]\n    mov r4, ip\n    add r4, r4, #1\n    add r7, r7, #2\n    add r0, #0xc0\n    add r1, r1, #1\n    add r2, r2, #4\n    add r6, #0xc0\n    mov ip, r4\n    cmp r4, #4\n    blt _0226419E\n    mov r0, #0x58\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #8]\n    mov r1, #1\n    add r3, sp, #0xc\n    bl ov12_02262240\n    add sp, #0x64\n    pop {r4, r5, r6, r7, pc}\n    _02264214: .word 0x00002D66\n    _02264218: .word 0x00002DB0\n    _0226421C: .word 0x00002DFA\n    _02264220: .word 0x00002DE4\n    _02264224: .word 0x00002DA8"
    );
    #endif
}

void BattleController_EmitPlayMoveSE(void) {
    /* Original at 0x02264228 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    mov r3, #0x3f\n    add r4, sp, #4\n    strb r3, [r4]\n    ldr r3, _02264264 ; =0x0000216C\n    ldr r5, [r1, r3]\n    mov r1, #2\n    add r3, r5, #0\n    tst r3, r1\n    beq _02264242\n    strb r1, [r4, #1]\n    b _02264252\n    mov r1, #4\n    tst r1, r5\n    beq _0226424E\n    mov r1, #1\n    strb r1, [r4, #1]\n    b _02264252\n    mov r1, #0\n    strb r1, [r4, #1]\n    mov r1, #4\n    str r1, [sp]\n    mov r1, #1\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02264264: .word 0x0000216C"
    );
    #endif
}

void BattleController_EmitPlaySong(void) {
    ov12_02262240(1, 4, 0x40);
}

void BattleController_EmitSetBattleResults(void) {
    /* Original at 0x02264288 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    bl BattleSystem_GetBattleType\n    add r4, r0, #0\n    mov r1, #0x41\n    add r0, sp, #4\n    strb r1, [r0]\n    add r0, r5, #0\n    bl BattleSystem_GetBattleOutcomeFlags\n    str r0, [sp, #8]\n    mov r1, #0\n    add r0, sp, #4\n    strh r1, [r0, #2]\n    mov r0, #4\n    tst r0, r4\n    beq _022642D6\n    bl sub_0202FC48\n    cmp r0, #1\n    bne _022642D6\n    ldr r0, _022642EC ; =0x0000240C\n    ldr r1, [r5, r0]\n    mov r0, #0x10\n    tst r0, r1\n    bne _022642D6\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl ov12_0223BE68\n    add r1, sp, #4\n    strh r0, [r1, #2]\n    ldrh r0, [r1, #2]\n    cmp r0, #0x1c\n    bls _022642D6\n    bl GF_AssertFail\n    mov r0, #0x24\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #0x28\n    pop {r3, r4, r5, pc}\n    nop\n    _022642EC: .word 0x0000240C"
    );
    #endif
}

void BattleController_EmitBlankMessage(void) {
    ov12_02262240(0x42, 1, 4, 0);
}

void ov12_0226430C(void) {
    /* Original at 0x0226430C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r0, sp, #4\n    add r4, r1, #0\n    strb r2, [r0]\n    bl sub_0203769C\n    add r1, sp, #4\n    strb r0, [r1, #1]\n    mov r0, #4\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r4, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov12_02264334(void) {
    /* Original at 0x02264334 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    mov r1, #1\n    ldrb r3, [r5, #3]\n    str r1, [sp]\n    ldrb r2, [r5]\n    ldrb r1, [r5, #2]\n    lsl r3, r3, #8\n    add r4, r0, #0\n    orr r1, r3\n    ldrb r6, [r5, #1]\n    cmp r2, #0\n    bne _0226436E\n    mov r2, #0\n    cmp r1, #0\n    ble _022643C2\n    mov r7, #0x23\n    lsl r3, r6, #8\n    lsl r7, r7, #8\n    add r0, r5, r2\n    ldr r6, [r4, #0x30]\n    ldrb r0, [r0, #4]\n    add r6, r3, r6\n    add r6, r2, r6\n    add r2, r2, #1\n    strb r0, [r6, r7]\n    cmp r2, r1\n    blt _0226435A\n    b _022643C2\n    cmp r2, #1\n    bne _022643A6\n    lsl r0, r6, #2\n    add r0, r4, r0\n    mov r3, #0x6a\n    ldr r4, [r0, #0x34]\n    lsl r3, r3, #2\n    ldrb r2, [r4, r3]\n    cmp r2, #0\n    bne _022643A0\n    ldr r2, [sp]\n    strb r2, [r4, r3]\n    mov r2, #0\n    cmp r1, #0\n    ble _022643C2\n    add r3, r5, r2\n    ldrb r4, [r3, #4]\n    ldr r3, [r0, #0x34]\n    add r3, r3, r2\n    add r3, #0x94\n    add r2, r2, #1\n    strb r4, [r3]\n    cmp r2, r1\n    blt _0226438C\n    b _022643C2\n    mov r0, #0\n    str r0, [sp]\n    b _022643C2\n    cmp r2, #2\n    bne _022643C2\n    ldrb r7, [r5, #4]\n    ldrb r5, [r5, #5]\n    bl ov12_0223B688\n    cmp r0, #0\n    beq _022643C2\n    ldr r0, [r4, #0x30]\n    add r1, r5, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov12_0224ED00\n    ldr r0, [sp]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov12_022643C8(void) {
    /* Original at 0x022643C8 */
    /* Requires manual decompilation - 241 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r1, [sp, #8]\n    ldr r1, [sp, #0x24]\n    add r4, r2, #0\n    str r1, [sp, #0x24]\n    ldr r1, [sp, #0x28]\n    str r0, [sp, #4]\n    str r1, [sp, #0x28]\n    mov r1, #0x16\n    strb r1, [r4]\n    add r1, sp, #0x10\n    ldrh r1, [r1, #0x1c]\n    strh r1, [r4, #2]\n    ldr r1, [sp, #0x24]\n    strh r1, [r4, #0x14]\n    ldr r1, [sp, #0x28]\n    strh r1, [r4, #0x16]\n    ldr r1, [sp, #0x20]\n    str r3, [r4, #0x4c]\n    str r1, [r4, #0x50]\n    bl BattleSystem_GetTerrainId\n    str r0, [r4, #0x54]\n    ldrh r1, [r4, #0xe]\n    mov r0, #4\n    bic r1, r0\n    strh r1, [r4, #0xe]\n    ldrh r1, [r4, #0xe]\n    mov r0, #8\n    bic r1, r0\n    ldr r0, [sp, #8]\n    strh r1, [r4, #0xe]\n    cmp r0, #0\n    bne _02264410\n    b _0226459A\n    ldr r1, _022645A0 ; =0x00002144\n    ldr r0, [r0, r1]\n    add r1, #0x10\n    str r0, [r4, #4]\n    ldr r0, [sp, #8]\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    beq _02264422\n    b _02264430\n    add r0, sp, #0x10\n    ldrh r0, [r0, #0x1c]\n    lsl r1, r0, #4\n    ldr r0, [sp, #8]\n    add r1, r0, r1\n    ldr r0, _022645A4 ; =0x000003E1\n    ldrb r0, [r1, r0]\n    strh r0, [r4, #8]\n    ldr r0, [sp, #0x24]\n    mov r1, #0xc0\n    mul r1, r0\n    ldr r0, [sp, #8]\n    mov r2, #8\n    add r1, r0, r1\n    ldr r0, _022645A8 ; =0x00002D75\n    mov r3, #0\n    ldrb r0, [r1, r0]\n    ldr r1, [sp, #8]\n    strh r0, [r4, #0xc]\n    mov r0, #0xd\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    bl CheckAbilityActive\n    cmp r0, #0\n    bne _02264476\n    mov r0, #0x4c\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #8]\n    mov r2, #8\n    mov r3, #0\n    bl CheckAbilityActive\n    cmp r0, #0\n    bne _02264476\n    mov r1, #6\n    ldr r0, [sp, #8]\n    lsl r1, r1, #6\n    ldr r0, [r0, r1]\n    str r0, [r4, #0x10]\n    b _0226447A\n    mov r0, #0\n    str r0, [r4, #0x10]\n    ldr r1, _022645AC ; =0x00002164\n    ldr r0, [sp, #8]\n    ldr r0, [r0, r1]\n    ldr r1, _022645B0 ; =0x00002DB0\n    strh r0, [r4, #0xa]\n    ldr r0, [sp, #8]\n    add r2, r0, r1\n    ldr r0, [sp, #0x24]\n    mov r1, #0xc0\n    mul r1, r0\n    mov r0, #1\n    ldr r3, [r2, r1]\n    lsl r0, r0, #0x18\n    tst r0, r3\n    beq _0226449C\n    mov r5, #1\n    b _0226449E\n    mov r5, #0\n    ldrh r0, [r4, #0xe]\n    mov r3, #1\n    bic r0, r3\n    lsl r3, r5, #0x10\n    lsr r5, r3, #0x10\n    mov r3, #1\n    and r5, r3\n    orr r0, r5\n    strh r0, [r4, #0xe]\n    ldr r1, [r2, r1]\n    lsl r0, r3, #0x15\n    tst r0, r1\n    bne _022644BA\n    mov r3, #0\n    ldrh r0, [r4, #0xe]\n    mov r1, #2\n    ldr r5, _022645B4 ; =0x00002D66\n    bic r0, r1\n    lsl r1, r3, #0x10\n    lsr r1, r1, #0x10\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1e\n    orr r0, r1\n    ldr r1, [sp, #8]\n    strh r0, [r4, #0xe]\n    add r2, r1, #0\n    add r6, r2, r5\n    add r5, #0x58\n    add r3, r1, #0\n    mov r0, #0\n    mov ip, r4\n    add r2, r4, #0\n    add r7, r3, r5\n    mov r3, #0xb5\n    lsl r3, r3, #6\n    ldrh r5, [r1, r3]\n    mov r3, ip\n    strh r5, [r3, #0x18]\n    ldrb r3, [r6]\n    lsl r3, r3, #0x1a\n    lsr r5, r3, #0x1f\n    add r3, r4, r0\n    add r3, #0x24\n    strb r5, [r3]\n    ldrb r3, [r6]\n    lsl r3, r3, #0x1b\n    lsr r5, r3, #0x1b\n    add r3, r4, r0\n    add r3, #0x28\n    strb r5, [r3]\n    mov r3, #0xb7\n    lsl r3, r3, #6\n    ldr r3, [r1, r3]\n    str r3, [r2, #0x3c]\n    ldr r3, _022645B0 ; =0x00002DB0\n    ldr r5, [r1, r3]\n    mov r3, #2\n    lsl r3, r3, #0x14\n    tst r3, r5\n    beq _02264524\n    ldr r3, _022645B8 ; =0x00002DFA\n    ldrh r5, [r1, r3]\n    add r3, r4, r0\n    add r3, #0x20\n    strb r5, [r3]\n    ldr r3, _022645BC ; =0x00002DE4\n    b _02264532\n    ldrb r3, [r7]\n    lsl r3, r3, #0x1c\n    lsr r5, r3, #0x1c\n    add r3, r4, r0\n    add r3, #0x20\n    strb r5, [r3]\n    ldr r3, _022645C0 ; =0x00002DA8\n    ldr r3, [r1, r3]\n    add r0, r0, #1\n    str r3, [r2, #0x2c]\n    mov r3, ip\n    add r3, r3, #2\n    add r1, #0xc0\n    mov ip, r3\n    add r6, #0xc0\n    add r2, r2, #4\n    add r7, #0xc0\n    cmp r0, #4\n    blt _022644E0\n    ldr r0, [sp, #0x24]\n    cmp r0, #0xff\n    beq _02264572\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0x24]\n    bl ov12_0223C140\n    cmp r0, #0xff\n    beq _02264572\n    ldr r2, [sp, #8]\n    ldr r1, [sp, #0x24]\n    add r2, r2, r1\n    ldr r1, _022645C4 ; =0x0000219C\n    ldrb r1, [r2, r1]\n    cmp r0, r1\n    bne _02264572\n    ldrh r1, [r4, #0xe]\n    mov r0, #4\n    orr r0, r1\n    strh r0, [r4, #0xe]\n    ldr r0, [sp, #0x28]\n    cmp r0, #0xff\n    beq _0226459A\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0x28]\n    bl ov12_0223C140\n    cmp r0, #0xff\n    beq _0226459A\n    ldr r2, [sp, #8]\n    ldr r1, [sp, #0x28]\n    add r2, r2, r1\n    ldr r1, _022645C4 ; =0x0000219C\n    ldrb r1, [r2, r1]\n    cmp r0, r1\n    bne _0226459A\n    ldrh r1, [r4, #0xe]\n    mov r0, #8\n    orr r0, r1\n    strh r0, [r4, #0xe]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022645A0: .word 0x00002144\n    _022645A4: .word 0x000003E1\n    _022645A8: .word 0x00002D75\n    _022645AC: .word 0x00002164\n    _022645B0: .word 0x00002DB0\n    _022645B4: .word 0x00002D66\n    _022645B8: .word 0x00002DFA\n    _022645BC: .word 0x00002DE4\n    _022645C0: .word 0x00002DA8\n    _022645C4: .word 0x0000219C"
    );
    #endif
}

void ov12_022645C8(void) {
    /* Original at 0x022645C8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r2, #0\n    add r0, sp, #4\n    mov r1, #0\n    mov r2, #4\n    bl MI_CpuFill8\n    mov r1, #0x43\n    add r0, sp, #4\n    strb r1, [r0]\n    strb r4, [r0, #1]\n    mov r0, #4\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    add r3, sp, #4\n    bl ov12_02262240\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov12_022645F8(void) {
    /* Original at 0x022645F8 */
    /* Requires manual decompilation - 247 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    str r0, [sp]\n    ldr r0, [sp, #0x38]\n    add r5, r2, #0\n    str r1, [sp, #4]\n    str r0, [sp, #0x38]\n    mov r0, #0\n    add r1, r5, #0\n    mov r2, #8\n    add r6, r3, #0\n    bl MIi_CpuClearFast\n    ldr r0, [sp]\n    bl BattleSystem_GetBattleType\n    add r4, r0, #0\n    mov r0, #0xc\n    and r0, r4\n    strb r6, [r5]\n    cmp r0, #0xc\n    beq _0226464C\n    mov r0, #0x10\n    tst r0, r4\n    beq _02264636\n    ldr r0, [sp]\n    ldr r1, [sp, #0x38]\n    bl BattleSystem_GetFieldSide\n    cmp r0, #0\n    bne _0226464C\n    cmp r4, #0x4b\n    bne _02264646\n    ldr r0, [sp]\n    ldr r1, [sp, #0x38]\n    bl BattleSystem_GetFieldSide\n    cmp r0, #0\n    bne _0226464C\n    cmp r4, #0xcb\n    beq _0226464C\n    b _02264782\n    ldr r0, [sp]\n    ldr r1, [sp, #0x38]\n    bl ov12_0223AB0C\n    cmp r0, #2\n    beq _02264664\n    ldr r0, [sp]\n    ldr r1, [sp, #0x38]\n    bl ov12_0223AB0C\n    cmp r0, #3\n    bne _02264672\n    ldr r6, [sp, #0x38]\n    ldr r0, [sp]\n    add r1, r6, #0\n    bl BattleSystem_GetBattlerIdPartner\n    str r0, [sp, #0x38]\n    b _0226467C\n    ldr r0, [sp]\n    ldr r1, [sp, #0x38]\n    bl BattleSystem_GetBattlerIdPartner\n    add r6, r0, #0\n    ldr r0, [sp]\n    add r1, r6, #0\n    bl BattleSystem_GetParty\n    mov r4, #0\n    str r0, [sp, #0x10]\n    add r7, r4, #0\n    bl Party_GetCount\n    cmp r0, #0\n    ble _022646FC\n    mov r0, #6\n    add r1, r6, #0\n    mul r1, r0\n    ldr r0, [sp, #4]\n    add r6, r0, r1\n    ldr r1, _0226481C ; =0x0000312C\n    ldr r0, [sp, #0x10]\n    ldrb r1, [r6, r1]\n    bl Party_GetMonByIndex\n    mov r1, #0xae\n    mov r2, #0\n    str r0, [sp, #0x14]\n    bl GetMonData\n    cmp r0, #0\n    beq _022646EE\n    ldr r1, _02264820 ; =0x000001EE\n    cmp r0, r1\n    beq _022646EE\n    ldr r0, [sp, #0x14]\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _022646E6\n    ldr r0, [sp, #0x14]\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _022646DE\n    add r1, r5, r4\n    mov r0, #3\n    strb r0, [r1, #2]\n    b _022646EC\n    add r1, r5, r4\n    mov r0, #1\n    strb r0, [r1, #2]\n    b _022646EC\n    add r1, r5, r4\n    mov r0, #2\n    strb r0, [r1, #2]\n    add r4, r4, #1\n    ldr r0, [sp, #0x10]\n    add r6, r6, #1\n    add r7, r7, #1\n    bl Party_GetCount\n    cmp r7, r0\n    blt _0226469C\n    ldr r0, [sp]\n    ldr r1, [sp, #0x38]\n    bl BattleSystem_GetParty\n    str r0, [sp, #8]\n    mov r4, #3\n    mov r7, #0\n    bl Party_GetCount\n    cmp r0, #0\n    bgt _02264714\n    b _02264816\n    ldr r0, [sp, #0x38]\n    mov r1, #6\n    mul r1, r0\n    ldr r0, [sp, #4]\n    add r6, r0, r1\n    ldr r1, _0226481C ; =0x0000312C\n    ldr r0, [sp, #8]\n    ldrb r1, [r6, r1]\n    bl Party_GetMonByIndex\n    mov r1, #0xae\n    mov r2, #0\n    str r0, [sp, #0x18]\n    bl GetMonData\n    cmp r0, #0\n    beq _02264770\n    ldr r1, _02264820 ; =0x000001EE\n    cmp r0, r1\n    beq _02264770\n    ldr r0, [sp, #0x18]\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02264768\n    ldr r0, [sp, #0x18]\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02264760\n    add r1, r5, r4\n    mov r0, #3\n    strb r0, [r1, #2]\n    b _0226476E\n    add r1, r5, r4\n    mov r0, #1\n    strb r0, [r1, #2]\n    b _0226476E\n    add r1, r5, r4\n    mov r0, #2\n    strb r0, [r1, #2]\n    add r4, r4, #1\n    ldr r0, [sp, #8]\n    add r6, r6, #1\n    add r7, r7, #1\n    bl Party_GetCount\n    cmp r7, r0\n    blt _0226471E\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #2\n    tst r0, r4\n    beq _02264796\n    mov r0, #8\n    tst r0, r4\n    bne _02264796\n    ldr r0, [sp, #0x38]\n    mov r1, #1\n    and r0, r1\n    str r0, [sp, #0x38]\n    ldr r0, [sp]\n    ldr r1, [sp, #0x38]\n    bl BattleSystem_GetParty\n    mov r4, #0\n    str r0, [sp, #0xc]\n    add r7, r4, #0\n    bl Party_GetCount\n    cmp r0, #0\n    ble _02264816\n    ldr r0, [sp, #0x38]\n    mov r1, #6\n    mul r1, r0\n    ldr r0, [sp, #4]\n    add r6, r0, r1\n    ldr r1, _0226481C ; =0x0000312C\n    ldr r0, [sp, #0xc]\n    ldrb r1, [r6, r1]\n    bl Party_GetMonByIndex\n    mov r1, #0xae\n    mov r2, #0\n    str r0, [sp, #0x1c]\n    bl GetMonData\n    cmp r0, #0\n    beq _02264808\n    ldr r1, _02264820 ; =0x000001EE\n    cmp r0, r1\n    beq _02264808\n    ldr r0, [sp, #0x1c]\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02264800\n    ldr r0, [sp, #0x1c]\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _022647F8\n    add r1, r5, r4\n    mov r0, #3\n    strb r0, [r1, #2]\n    b _02264806\n    add r1, r5, r4\n    mov r0, #1\n    strb r0, [r1, #2]\n    b _02264806\n    add r1, r5, r4\n    mov r0, #2\n    strb r0, [r1, #2]\n    add r4, r4, #1\n    ldr r0, [sp, #0xc]\n    add r6, r6, #1\n    add r7, r7, #1\n    bl Party_GetCount\n    cmp r7, r0\n    blt _022647B6\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0226481C: .word 0x0000312C\n    _02264820: .word 0x000001EE"
    );
    #endif
}
