/* Decompiled from asm/unk_020210A0.s */
#include "global.h"

void GF_TouchpadInit(void) {
    /* Original at 0x020210A0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    ldr r3, _020210B8 ; =_021D2198\n    add r1, r0, #0\n    mov r2, #5\n    stmia r3!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _020210A8\n    stmia r3!, {r0, r1}\n    str r0, [r3]\n    bx lr\n    nop\n    _020210B8: .word _021D2198"
    );
    #endif
}

void sub_020210BC(void) {
    GF_AssertFail(0);
}

void sub_020210D8(void) {
    /* Original at 0x020210D8 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _02021144 ; =_021D2198 + 0x40\n    add r6, r1, #0\n    ldrh r1, [r0, #0x1a]\n    add r4, r2, #0\n    cmp r1, #0\n    beq _02021104\n    mov r0, #0\n    str r0, [sp]\n    lsl r0, r4, #1\n    str r0, [sp, #4]\n    mov r0, #1\n    add r1, r0, #0\n    add r2, r5, #0\n    add r3, r6, #0\n    bl sub_020211AC\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    cmp r4, #5\n    bhs _0202110C\n    cmp r4, #0\n    bne _02021112\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldrh r0, [r0, #0x18]\n    cmp r0, #0\n    beq _0202111E\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl GF_TouchpadStartAutoSampling\n    cmp r0, #1\n    bne _0202113E\n    mov r0, #0\n    str r0, [sp]\n    lsl r0, r4, #1\n    str r0, [sp, #4]\n    mov r0, #1\n    add r1, r0, #0\n    add r2, r5, #0\n    add r3, r6, #0\n    bl sub_020211AC\n    mov r0, #1\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _02021144: .word _021D2198 + 0x40"
    );
    #endif
}

void sub_02021148(void) {
    /* Original at 0x02021148 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r1, _020211A8 ; =_021D2198 + 0x40\n    add r4, r0, #0\n    ldrh r2, [r1, #0x1a]\n    cmp r2, #0\n    beq _0202116E\n    mov r2, #0\n    str r2, [sp]\n    lsl r0, r4, #1\n    str r0, [sp, #4]\n    mov r0, #2\n    mov r1, #1\n    add r3, r2, #0\n    bl sub_020211AC\n    add sp, #8\n    mov r0, #1\n    pop {r4, pc}\n    cmp r4, #5\n    bhs _02021176\n    cmp r4, #0\n    bne _0202117C\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    ldrh r1, [r1, #0x18]\n    cmp r1, #0\n    beq _02021188\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    bl GF_TouchpadStartAutoSampling\n    cmp r0, #1\n    bne _020211A4\n    mov r2, #0\n    str r2, [sp]\n    lsl r0, r4, #1\n    str r0, [sp, #4]\n    mov r0, #2\n    mov r1, #1\n    add r3, r2, #0\n    bl sub_020211AC\n    mov r0, #1\n    add sp, #8\n    pop {r4, pc}\n    _020211A8: .word _021D2198 + 0x40"
    );
    #endif
}

void sub_020211AC(void) {
    /* Original at 0x020211AC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, _020211D0 ; =_021D2198 + 0x40\n    strh r0, [r4, #0x18]\n    ldr r0, _020211D4 ; =gSystem + 0x60\n    strb r1, [r0, #8]\n    ldr r0, _020211D8 ; =_021D2198\n    ldr r1, [sp, #0xc]\n    str r2, [r0]\n    str r3, [r0, #4]\n    str r1, [r0, #8]\n    ldr r1, [sp, #8]\n    str r1, [r0, #0x54]\n    ldr r0, _020211DC ; =_021D2198 + 0xC\n    mov r1, #9\n    bl sub_020211E0\n    pop {r4, pc}\n    nop\n    _020211D0: .word _021D2198 + 0x40\n    _020211D4: .word gSystem + 0x60\n    _020211D8: .word _021D2198\n    _020211DC: .word _021D2198 + 0xC"
    );
    #endif
}

void sub_020211E0(void) {
    /* Original at 0x020211E0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    cmp r1, #0\n    ble _020211F2\n    add r2, r3, #0\n    add r3, r3, #1\n    strh r2, [r0, #4]\n    add r0, #8\n    cmp r3, r1\n    blt _020211E8\n    bx lr"
    );
    #endif
}

void GF_TouchpadStopAutoSampling(void) {
    /* Original at 0x020211F4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r0, _02021234 ; =_021D2198 + 0x40\n    mov r5, #0\n    ldrh r0, [r0, #0x18]\n    cmp r0, #0\n    bne _02021204\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r4, #4\n    add r6, r4, #0\n    bl TP_RequestAutoSamplingStopAsync\n    add r0, r4, #0\n    bl TP_WaitBusy\n    add r0, r6, #0\n    bl TP_CheckBusy\n    cmp r0, #0\n    beq _0202121E\n    add r5, r5, #1\n    cmp r0, #0\n    beq _02021226\n    cmp r5, #5\n    bls _02021208\n    cmp r5, #5\n    bls _0202122E\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _02021234: .word _021D2198 + 0x40"
    );
    #endif
}

void sub_02021238(void) {
    /* Original at 0x02021238 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r0, _0202127C ; =_021D2198 + 0x40\n    ldrh r0, [r0, #0x1a]\n    cmp r0, #0\n    beq _0202125A\n    mov r0, #0\n    str r0, [sp]\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    str r0, [sp, #4]\n    bl sub_020211AC\n    add sp, #8\n    mov r0, #1\n    pop {r4, pc}\n    bl GF_TouchpadStopAutoSampling\n    add r4, r0, #0\n    cmp r4, #1\n    bne _02021274\n    mov r0, #0\n    str r0, [sp]\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    str r0, [sp, #4]\n    bl sub_020211AC\n    add r0, r4, #0\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0202127C: .word _021D2198 + 0x40"
    );
    #endif
}

void sub_02021280(void) {
    /* Original at 0x02021280 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    ldr r2, _020212E4 ; =_021D2198 + 0x40\n    add r4, r1, #0\n    ldrh r3, [r2, #0x1a]\n    add r5, r0, #0\n    mov r1, #3\n    cmp r3, #0\n    beq _020212A6\n    cmp r5, #0\n    beq _0202129A\n    bl sub_02021528\n    cmp r4, #2\n    bne _020212A2\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r2, #0x18]\n    cmp r0, #0\n    beq _020212DE\n    bl TP_GetLatestIndexInAuto\n    add r6, r0, #0\n    ldr r0, _020212E8 ; =_021D2198 + 0xC\n    mov r1, #9\n    bl sub_020212EC\n    cmp r5, #0\n    beq _020212C6\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02021540\n    ldr r0, _020212E4 ; =_021D2198 + 0x40\n    ldrh r0, [r0, #0x18]\n    cmp r0, #1\n    bne _020212DC\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_020213C8\n    add r1, r0, #0\n    b _020212DE\n    mov r1, #1\n    add r0, r1, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020212E4: .word _021D2198 + 0x40\n    _020212E8: .word _021D2198 + 0xC"
    );
    #endif
}

void sub_020212EC(void) {
    /* Original at 0x020212EC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r7, #0\n    str r1, [sp]\n    add r0, r1, #0\n    beq _02021322\n    add r4, r5, #0\n    add r6, sp, #4\n    add r0, sp, #4\n    add r1, r5, #0\n    bl TP_GetCalibratedPoint\n    ldrh r0, [r6]\n    add r7, r7, #1\n    add r5, #8\n    strh r0, [r4]\n    ldrh r0, [r6, #2]\n    strh r0, [r4, #2]\n    ldrh r0, [r6, #4]\n    strh r0, [r4, #4]\n    ldrh r0, [r6, #6]\n    strh r0, [r4, #6]\n    ldr r0, [sp]\n    add r4, #8\n    cmp r7, r0\n    blo _020212FE\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void GF_TouchpadResumeOnLidOpen(void) {
    /* Original at 0x02021328 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02021354 ; =_021D2198 + 0x40\n    ldrh r1, [r0, #0x1a]\n    cmp r1, #0\n    beq _02021350\n    ldrh r0, [r0, #0x18]\n    cmp r0, #0\n    beq _02021350\n    ldr r0, _02021358 ; =_021D2198\n    ldr r0, [r0, #8]\n    lsr r0, r0, #1\n    bl GF_TouchpadStartAutoSampling\n    cmp r0, #1\n    beq _0202134A\n    bl GF_AssertFail\n    ldr r0, _02021354 ; =_021D2198 + 0x40\n    mov r1, #0\n    strh r1, [r0, #0x1a]\n    pop {r3, pc}\n    nop\n    _02021354: .word _021D2198 + 0x40\n    _02021358: .word _021D2198"
    );
    #endif
}

void GF_TouchpadPauseOnLidClose(void) {
    /* Original at 0x0202135C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02021380 ; =_021D2198 + 0x40\n    ldrh r1, [r0, #0x1a]\n    cmp r1, #1\n    beq _0202137E\n    ldrh r0, [r0, #0x18]\n    cmp r0, #0\n    beq _0202137E\n    bl GF_TouchpadStopAutoSampling\n    cmp r0, #1\n    beq _02021378\n    bl GF_AssertFail\n    ldr r0, _02021380 ; =_021D2198 + 0x40\n    mov r1, #1\n    strh r1, [r0, #0x1a]\n    pop {r3, pc}\n    _02021380: .word _021D2198 + 0x40"
    );
    #endif
}

void GF_TouchpadStartAutoSampling(void) {
    /* Original at 0x02021384 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r5, #0\n    lsl r0, r0, #0x10\n    ldr r7, _020213C4 ; =_021D2198 + 0xC\n    add r6, r5, #0\n    lsr r4, r0, #0x10\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    mov r3, #9\n    bl TP_RequestAutoSamplingStartAsync\n    mov r0, #2\n    bl TP_WaitBusy\n    mov r0, #2\n    bl TP_CheckBusy\n    cmp r0, #0\n    beq _020213AE\n    add r5, r5, #1\n    cmp r0, #0\n    beq _020213B6\n    cmp r5, #5\n    ble _02021390\n    cmp r5, #5\n    ble _020213BE\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020213C4: .word _021D2198 + 0xC"
    );
    #endif
}

void sub_020213C8(void) {
    /* Original at 0x020213C8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #5\n    bhi _020213F2\n    add r3, r0, r0\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _020213DA: ; jump table\n    bl sub_020213F8\n    pop {r3, pc}\n    bl sub_020214B0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}"
    );
    #endif
}

void sub_020213F8(void) {
    /* Original at 0x020213F8 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r5, _020214A8 ; =_021D2198\n    str r1, [sp, #4]\n    ldr r1, [r5, #8]\n    str r0, [sp]\n    add r7, r2, #0\n    mov r4, #0\n    cmp r1, #0\n    bls _0202149E\n    ldr r0, [sp, #4]\n    sub r0, r0, r1\n    add r0, r4, r0\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    bpl _02021420\n    add r0, #9\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    lsl r1, r0, #3\n    ldr r0, _020214AC ; =_021D2198\n    add r1, r0, r1\n    ldrh r0, [r1, #0x10]\n    cmp r0, #1\n    bne _02021496\n    ldrh r0, [r1, #0x12]\n    cmp r0, #0\n    bne _02021496\n    ldr r2, [r5, #0x54]\n    ldr r0, [r5]\n    lsl r2, r2, #3\n    add r2, r0, r2\n    add r0, r2, #0\n    sub r0, #8\n    ldrh r3, [r1, #0xc]\n    ldrh r0, [r0]\n    cmp r0, r3\n    blt _0202144A\n    sub r3, r0, r3\n    b _0202144C\n    sub r3, r3, r0\n    sub r6, r2, #6\n    ldrh r0, [r1, #0xe]\n    ldrh r6, [r6]\n    cmp r6, r0\n    blt _0202145A\n    sub r0, r6, r0\n    b _0202145C\n    sub r0, r0, r6\n    cmp r3, r7\n    bhs _02021464\n    cmp r0, r7\n    blo _02021496\n    ldrh r0, [r1, #0xc]\n    strh r0, [r2]\n    ldrh r0, [r1, #0xe]\n    strh r0, [r2, #2]\n    ldrh r0, [r1, #0x10]\n    strh r0, [r2, #4]\n    ldrh r0, [r1, #0x12]\n    strh r0, [r2, #6]\n    ldr r0, [r5, #0x54]\n    add r0, r0, #1\n    str r0, [r5, #0x54]\n    ldr r1, [r5, #4]\n    cmp r0, r1\n    blo _02021496\n    ldr r2, [sp]\n    cmp r2, #1\n    bne _0202148E\n    bl _u32_div_f\n    str r1, [r5, #0x54]\n    b _02021496\n    mov r0, #0\n    add sp, #8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r5, #8]\n    add r4, r4, #1\n    cmp r4, r1\n    blo _0202140C\n    ldr r0, _020214A8 ; =_021D2198\n    ldr r0, [r0, #0x54]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020214A8: .word _021D2198\n    _020214AC: .word _021D2198"
    );
    #endif
}

void sub_020214B0(void) {
    /* Original at 0x020214B0 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r5, _02021520 ; =_021D2198\n    str r1, [sp]\n    ldr r1, [r5, #8]\n    add r7, r0, #0\n    mov r4, #0\n    cmp r1, #0\n    bls _02021518\n    ldr r0, [sp]\n    sub r0, r0, r1\n    add r0, r4, r0\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    asr r1, r0, #0x10\n    bpl _020214D4\n    add r1, #9\n    lsl r0, r1, #0x10\n    asr r1, r0, #0x10\n    ldr r0, [r5, #0x54]\n    lsl r1, r1, #3\n    lsl r3, r0, #3\n    ldr r0, _02021524 ; =_021D2198\n    ldr r6, [r5]\n    add r2, r0, r1\n    ldrh r0, [r2, #0xc]\n    add r1, r6, r3\n    strh r0, [r6, r3]\n    ldrh r0, [r2, #0xe]\n    strh r0, [r1, #2]\n    ldrh r0, [r2, #0x10]\n    strh r0, [r1, #4]\n    ldrh r0, [r2, #0x12]\n    strh r0, [r1, #6]\n    ldr r0, [r5, #0x54]\n    add r0, r0, #1\n    str r0, [r5, #0x54]\n    ldr r1, [r5, #4]\n    cmp r0, r1\n    blo _02021510\n    cmp r7, #4\n    bne _0202150A\n    bl _u32_div_f\n    str r1, [r5, #0x54]\n    b _02021510\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r5, #8]\n    add r4, r4, #1\n    cmp r4, r1\n    blo _020214C0\n    ldr r0, _02021520 ; =_021D2198\n    ldr r0, [r0, #0x54]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02021520: .word _021D2198\n    _02021524: .word _021D2198"
    );
    #endif
}

void sub_02021528(void) {
    /* Original at 0x02021528 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    strh r2, [r0]\n    add r1, r2, #0\n    strh r1, [r0, #8]\n    strh r1, [r0, #6]\n    strh r1, [r0, #2]\n    strh r1, [r0, #4]\n    add r2, r2, #1\n    add r0, #8\n    cmp r2, #8\n    blt _0202152E\n    bx lr"
    );
    #endif
}

void sub_02021540(void) {
    /* Original at 0x02021540 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02021528\n    ldr r0, _02021598 ; =_021D2198\n    mov r6, #0\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    bls _02021596\n    ldr r2, _0202159C ; =_021D2198\n    sub r1, r4, r1\n    add r1, r6, r1\n    add r1, r1, #1\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    bpl _02021568\n    add r1, #9\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    lsl r1, r1, #3\n    add r3, r2, r1\n    ldrh r1, [r3, #0x12]\n    cmp r1, #0\n    bne _0202158E\n    ldrh r1, [r5]\n    ldrh r7, [r3, #0xc]\n    lsl r1, r1, #3\n    add r1, r5, r1\n    strh r7, [r1, #2]\n    ldrh r7, [r3, #0xe]\n    strh r7, [r1, #4]\n    ldrh r7, [r3, #0x10]\n    strh r7, [r1, #6]\n    ldrh r3, [r3, #0x12]\n    strh r3, [r1, #8]\n    ldrh r1, [r5]\n    add r1, r1, #1\n    strh r1, [r5]\n    ldr r1, [r0, #8]\n    add r6, r6, #1\n    cmp r6, r1\n    blo _02021556\n    pop {r3, r4, r5, r6, r7, pc}\n    _02021598: .word _021D2198\n    _0202159C: .word _021D2198"
    );
    #endif
}
