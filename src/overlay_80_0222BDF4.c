/* Decompiled from asm/overlay_80_0222BDF4.s */
#include "global.h"

void FrontierScript_ReadVarPtr(void) {
    /* Original at 0x0222BDF4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov80_0222BE24\n    add r4, r0, #0\n    bne _0222BE0C\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void FrontierScript_ReadVar(void) {
    /* Original at 0x0222BE10 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov80_0222BE9C\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222BE24(void) {
    /* Original at 0x0222BE24 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r3, #2\n    lsl r3, r3, #0xe\n    cmp r1, r3\n    bhs _0222BE32\n    mov r0, #0\n    pop {r3, pc}\n    add r2, r3, #0\n    add r2, #8\n    cmp r1, r2\n    bhs _0222BE44\n    sub r1, r1, r3\n    add r0, #8\n    lsl r1, r1, #1\n    add r0, r0, r1\n    pop {r3, pc}\n    add r2, r3, #0\n    add r2, #0x10\n    cmp r1, r2\n    bhs _0222BE58\n    add r3, #8\n    ldr r0, [r0]\n    sub r1, r1, r3\n    bl ov80_0222AB2C\n    pop {r3, pc}\n    add r2, r3, #0\n    add r2, #0x14\n    cmp r1, r2\n    bhs _0222BE6C\n    add r3, #0x10\n    sub r1, r1, r3\n    add r0, #0x78\n    lsl r1, r1, #1\n    add r0, r0, r1\n    pop {r3, pc}\n    ldr r0, _0222BE94 ; =0x0000FD13\n    cmp r1, r0\n    bne _0222BE76\n    mov r0, #0\n    pop {r3, pc}\n    ldr r0, _0222BE98 ; =0x0000EEEE\n    cmp r1, r0\n    bne _0222BE80\n    mov r0, #0\n    pop {r3, pc}\n    add r0, r0, #1\n    cmp r1, r0\n    bne _0222BE8A\n    mov r0, #0\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _0222BE94: .word 0x0000FD13\n    _0222BE98: .word 0x0000EEEE"
    );
    #endif
}

void ov80_0222BE9C(void) {
    ov80_0222BE24();
}

void FrtCmd_000(void) {
    /* Original at 0x0222BEB0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    bx lr"
    );
    #endif
}

void FrtCmd_001(void) {
    FrontierScriptContext_Stop();
}

void FrtCmd_002(void) {
    /* Original at 0x0222BEC0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScriptContext_Stop\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0209684C\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_003(void) {
    /* Original at 0x0222BED4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5]\n    bl FrontierScript_ReadVar\n    add r1, r0, #0\n    ldr r0, [r4]\n    ldr r2, _0222BEF4 ; =0x0000FFFF\n    bl sub_02096854\n    ldr r1, _0222BEF8 ; =ov80_0222BEFC\n    add r0, r5, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _0222BEF4: .word 0x0000FFFF\n    _0222BEF8: .word ov80_0222BEFC"
    );
    #endif
}

void ov80_0222BEFC(void) {
    /* Original at 0x0222BEFC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #1\n    bx lr"
    );
    #endif
}

void FrtCmd_004(void) {
    /* Original at 0x0222BF00 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r4, [r5]\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r2, r0, #0\n    ldr r0, [r4]\n    add r1, r6, #0\n    bl sub_02096854\n    add r0, r5, #0\n    bl FrontierScriptContext_Stop\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void FrtCmd_005(void) {
    /* Original at 0x0222BF28 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov80_0222BE24\n    strh r4, [r0]\n    add r0, r5, #0\n    add r0, #0x78\n    strh r6, [r0]\n    ldr r1, _0222BF58 ; =ov80_0222BF5C\n    add r0, r5, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _0222BF58: .word ov80_0222BF5C"
    );
    #endif
}

void ov80_0222BF5C(void) {
    ov80_0222BE24(0, 1);
}

void FrtCmd_006(void) {
    /* Original at 0x0222BF7C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    strh r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_007(void) {
    /* Original at 0x0222BF94 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    ldrh r0, [r0]\n    strh r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_008(void) {
    /* Original at 0x0222BFAC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    ldrh r1, [r4]\n    add r0, r1, r0\n    strh r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_009(void) {
    /* Original at 0x0222BFC8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    ldrh r1, [r4]\n    sub r0, r1, r0\n    strh r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_0222BFE4(void) {
    /* Original at 0x0222BFE4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, r1\n    bhs _0222BFEC\n    mov r0, #0\n    bx lr\n    cmp r0, r1\n    bne _0222BFF4\n    mov r0, #1\n    bx lr\n    mov r0, #2\n    bx lr"
    );
    #endif
}

void FrtCmd_032(void) {
    /* Original at 0x0222BFF8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov80_0222BFE4\n    add r5, #0x8c\n    strb r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_033(void) {
    /* Original at 0x0222C018 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r1, r0, #0\n    ldrh r0, [r4]\n    ldrh r1, [r1]\n    bl ov80_0222BFE4\n    add r5, #0x8c\n    strb r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov80_0222C03C(void) {
    /* Original at 0x0222C03C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x1c]\n    bx lr"
    );
    #endif
}

void FrtCmd_010(void) {
    /* Original at 0x0222C040 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadWord\n    add r2, r0, #0\n    ldr r1, [r4, #0x1c]\n    add r0, r4, #0\n    add r1, r1, r2\n    bl ov80_0222C03C\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_011(void) {
    /* Original at 0x0222C058 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r2, [r5, #0x1c]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldrb r4, [r2]\n    bl FrontierScriptContext_ReadWord\n    add r1, r0, #0\n    lsl r0, r4, #1\n    add r4, r4, r0\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r3, _0222C08C ; =ov80_0223B9D8\n    ldrb r2, [r0]\n    add r0, r3, r4\n    ldrb r0, [r2, r0]\n    cmp r0, #1\n    bne _0222C088\n    ldr r2, [r5, #0x1c]\n    add r0, r5, #0\n    add r1, r2, r1\n    bl ov80_0222C03C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0222C08C: .word ov80_0223B9D8"
    );
    #endif
}

void FrtCmd_012(void) {
    /* Original at 0x0222C090 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadWord\n    add r2, r0, #0\n    ldr r1, [r4, #0x1c]\n    add r0, r4, #0\n    add r1, r1, r2\n    bl FrontierScriptContext_Call\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_013(void) {
    FrontierScriptContext_Return();
}

void FrtCmd_014(void) {
    /* Original at 0x0222C0B4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r2, [r5, #0x1c]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldrb r4, [r2]\n    bl FrontierScriptContext_ReadWord\n    add r1, r0, #0\n    lsl r0, r4, #1\n    add r4, r4, r0\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r3, _0222C0E8 ; =ov80_0223B9D8\n    ldrb r2, [r0]\n    add r0, r3, r4\n    ldrb r0, [r2, r0]\n    cmp r0, #1\n    bne _0222C0E4\n    ldr r2, [r5, #0x1c]\n    add r0, r5, #0\n    add r1, r2, r1\n    bl FrontierScriptContext_Call\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0222C0E8: .word ov80_0223B9D8"
    );
    #endif
}

void FrtCmd_015(void) {
    /* Original at 0x0222C0EC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r2, r0, #0\n    mov r3, #0\n    add r0, sp, #4\n    strb r3, [r0]\n    strb r3, [r0, #1]\n    mov r1, #1\n    strb r1, [r0, #2]\n    strb r3, [r0, #3]\n    add r0, sp, #4\n    str r0, [sp]\n    ldr r0, [r4]\n    add r4, #0x80\n    ldr r1, [r4]\n    bl ov80_0222E268\n    mov r0, #0\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_016(void) {
    /* Original at 0x0222C11C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    mov r3, #0\n    add r1, r4, #0\n    str r3, [sp]\n    add r1, #0x80\n    add r2, r0, #0\n    ldr r0, [r4]\n    ldr r1, [r1]\n    bl ov80_0222E268\n    ldr r1, _0222C148 ; =ov80_0222C17C\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0222C148: .word ov80_0222C17C"
    );
    #endif
}

void FrtCmd_017(void) {
    /* Original at 0x0222C14C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r2, r0, #0\n    mov r0, #0\n    add r1, r4, #0\n    str r0, [sp]\n    add r1, #0x80\n    ldr r0, [r4]\n    ldr r1, [r1]\n    mov r3, #1\n    bl ov80_0222E268\n    ldr r1, _0222C178 ; =ov80_0222C17C\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, pc}\n    _0222C178: .word ov80_0222C17C"
    );
    #endif
}

void ov80_0222C17C(void) {
    /* Original at 0x0222C17C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    add r0, #0x50\n    ldrb r0, [r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222C196\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void FrtCmd_018(void) {
    ov80_0222E38C();
}

void FrtCmd_019(void) {
    /* Original at 0x0222C1A8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    str r4, [sp]\n    add r3, r0, #0\n    str r6, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r7, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    bl sub_0200FBDC\n    mov r0, #1\n    bl sub_0200FBDC\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_020(void) {
    FrontierScriptContext_Pause();
}

void ov80_0222C200(void) {
    IsPaletteFadeFinished();
}

void FrtCmd_021(void) {
    /* Original at 0x0222C214 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r1, [r5, #0x1c]\n    ldr r4, [r5]\n    add r2, r1, #1\n    str r2, [r5, #0x1c]\n    ldrb r1, [r1]\n    add r3, r2, #1\n    str r1, [sp, #0x14]\n    str r3, [r5, #0x1c]\n    ldrb r1, [r2]\n    add r2, r3, #1\n    str r1, [sp, #0x10]\n    str r2, [r5, #0x1c]\n    ldrb r7, [r3]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldrb r6, [r2]\n    bl FrontierScriptContext_ReadHalfWord\n    str r0, [sp, #0x18]\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    bl ov80_0222BE24\n    str r6, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x44]\n    add r3, r7, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    bl ov80_0222E558\n    str r0, [r4, #0x60]\n    ldr r0, [sp, #0x18]\n    add r5, #0x78\n    strh r0, [r5]\n    mov r0, #1\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_022(void) {
    /* Original at 0x0222C270 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r1, [r5, #0x1c]\n    ldr r4, [r5]\n    add r2, r1, #1\n    str r2, [r5, #0x1c]\n    ldrb r1, [r1]\n    add r3, r2, #1\n    str r1, [sp, #0x14]\n    str r3, [r5, #0x1c]\n    ldrb r1, [r2]\n    add r2, r3, #1\n    str r1, [sp, #0x10]\n    str r2, [r5, #0x1c]\n    ldrb r7, [r3]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldrb r6, [r2]\n    bl FrontierScriptContext_ReadHalfWord\n    str r0, [sp, #0x18]\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    bl ov80_0222BE24\n    str r6, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x44]\n    add r3, r7, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    bl ov80_0222E558\n    str r0, [r4, #0x60]\n    ldr r0, [sp, #0x18]\n    add r5, #0x78\n    strh r0, [r5]\n    mov r0, #1\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_023(void) {
    /* Original at 0x0222C2D0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r4, [r5]\n    bl FrontierScriptContext_ReadHalfWord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r3, r0, #0\n    ldr r0, [r4, #0x60]\n    add r1, r6, #0\n    mov r2, #0xff\n    bl ov80_0222E5A8\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void FrtCmd_024(void) {
    /* Original at 0x0222C2F4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r4, [r5]\n    bl FrontierScriptContext_ReadHalfWord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r3, r0, #0\n    ldr r0, [r4, #0x60]\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov80_0222E5A8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_025(void) {
    /* Original at 0x0222C320 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #0x60]\n    bl ov80_0222E5B0\n    ldr r1, _0222C338 ; =ov80_0222C33C\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    _0222C338: .word ov80_0222C33C"
    );
    #endif
}

void ov80_0222C33C(void) {
    /* Original at 0x0222C33C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r1, r0, #0\n    add r1, #0x78\n    ldrh r1, [r1]\n    ldr r4, [r0]\n    bl ov80_0222BE24\n    ldr r1, [r4, #0x60]\n    cmp r1, #0\n    beq _0222C354\n    mov r0, #0\n    pop {r4, pc}\n    ldrh r1, [r0]\n    ldr r0, _0222C364 ; =0x0000EEEE\n    cmp r1, r0\n    beq _0222C360\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0222C364: .word 0x0000EEEE"
    );
    #endif
}

void FrtCmd_026(void) {
    /* Original at 0x0222C368 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r1, [r5, #0x1c]\n    ldr r4, [r5]\n    add r2, r1, #1\n    str r2, [r5, #0x1c]\n    ldrb r1, [r1]\n    add r3, r2, #1\n    str r1, [sp, #0x14]\n    str r3, [r5, #0x1c]\n    ldrb r1, [r2]\n    add r2, r3, #1\n    str r1, [sp, #0x10]\n    str r2, [r5, #0x1c]\n    ldrb r7, [r3]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldrb r6, [r2]\n    bl FrontierScriptContext_ReadHalfWord\n    str r0, [sp, #0x18]\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    bl ov80_0222BE24\n    str r6, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x44]\n    add r3, r7, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    bl ov80_0222E920\n    str r0, [r4, #0x60]\n    ldr r0, [sp, #0x18]\n    add r5, #0x78\n    strh r0, [r5]\n    mov r0, #1\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_027(void) {
    /* Original at 0x0222C3C4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r1, [r5, #0x1c]\n    ldr r4, [r5]\n    add r2, r1, #1\n    str r2, [r5, #0x1c]\n    ldrb r1, [r1]\n    add r3, r2, #1\n    str r1, [sp, #0x14]\n    str r3, [r5, #0x1c]\n    ldrb r1, [r2]\n    add r2, r3, #1\n    str r1, [sp, #0x10]\n    str r2, [r5, #0x1c]\n    ldrb r7, [r3]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldrb r6, [r2]\n    bl FrontierScriptContext_ReadHalfWord\n    str r0, [sp, #0x18]\n    ldr r1, [sp, #0x18]\n    add r0, r5, #0\n    bl ov80_0222BE24\n    str r6, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x44]\n    add r3, r7, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    bl ov80_0222E920\n    str r0, [r4, #0x60]\n    ldr r0, [sp, #0x18]\n    add r5, #0x78\n    strh r0, [r5]\n    mov r0, #1\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_028(void) {
    /* Original at 0x0222C424 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r4, [r5]\n    bl FrontierScriptContext_ReadHalfWord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r3, r0, #0\n    ldr r0, [r4, #0x60]\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov80_0222E940\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_029(void) {
    /* Original at 0x0222C450 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #0x60]\n    bl ov80_0222E948\n    ldr r1, _0222C468 ; =ov80_0222C33C\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    _0222C468: .word ov80_0222C33C"
    );
    #endif
}

void FrtCmd_030(void) {
    ov80_0222EEAC();
}

void FrtCmd_031(void) {
    /* Original at 0x0222C47C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r4, [r5]\n    add r0, r4, #0\n    bl FrontierSystem_GetFrontierMap\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    ldr r1, [r5, #0x1c]\n    add r7, r0, #0\n    add r0, r1, #1\n    str r0, [r5, #0x1c]\n    ldrb r0, [r1]\n    ldr r1, _0222C4C4 ; =ov80_0223B9D0\n    ldr r2, _0222C4C8 ; =0x000003D9\n    str r0, [sp]\n    ldr r0, [r4, #0x34]\n    mov r3, #0xc\n    str r0, [sp, #4]\n    ldr r0, [r6]\n    bl CreateYesNoMenu\n    str r0, [r4, #0x74]\n    add r0, r5, #0\n    add r0, #0x78\n    strh r7, [r0]\n    ldr r1, _0222C4CC ; =ov80_0222C4D0\n    add r0, r5, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222C4C4: .word ov80_0223B9D0\n    _0222C4C8: .word 0x000003D9\n    _0222C4CC: .word ov80_0222C4D0"
    );
    #endif
}

void ov80_0222C4D0(void) {
    /* Original at 0x0222C4D0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r1, r0, #0\n    add r1, #0x78\n    ldrh r1, [r1]\n    ldr r4, [r0]\n    bl ov80_0222BE24\n    add r5, r0, #0\n    ldr r0, [r4, #0x74]\n    ldr r1, [r4, #0x34]\n    bl Handle2dMenuInput_DeleteOnFinish\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    bne _0222C516\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222C512\n    ldr r0, _0222C528 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r4, #0x74]\n    bl Get2dMenuSelection\n    add r6, r0, #0\n    ldr r0, [r4, #0x74]\n    ldr r1, [r4, #0x34]\n    bl Clear2dMenuWindowAndDelete\n    b _0222C516\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    cmp r6, #0\n    bne _0222C51E\n    mov r0, #0\n    b _0222C520\n    mov r0, #1\n    strh r0, [r5]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _0222C528: .word 0x000005DC"
    );
    #endif
}

void FrtCmd_034(void) {
    /* Original at 0x0222C52C */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    ldr r0, [r0]\n    str r0, [sp, #8]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r4, r0, #0\n    ldr r0, [sp]\n    bl FrontierScriptContext_ReadWord\n    ldr r1, [sp]\n    ldr r1, [r1, #0x1c]\n    str r1, [sp, #4]\n    add r1, r1, r0\n    ldr r0, [sp]\n    str r1, [r0, #0x1c]\n    ldr r0, [sp]\n    bl FrontierScript_ReadVar\n    add r1, sp, #0xc\n    strh r0, [r1]\n    ldrh r2, [r1]\n    ldr r0, _0222C5E4 ; =0x0000FD13\n    cmp r2, r0\n    beq _0222C5D8\n    ldr r0, [sp]\n    ldr r3, [r0, #0x1c]\n    add r2, r3, #1\n    str r2, [r0, #0x1c]\n    ldrb r0, [r3]\n    strb r0, [r1, #2]\n    ldrh r1, [r1]\n    ldr r0, _0222C5E8 ; =0x0000EEEE\n    cmp r1, r0\n    bne _0222C596\n    ldr r0, [sp, #8]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl Save_PlayerData_GetProfile\n    bl ov80_0222A7EC\n    add r1, sp, #0xc\n    strh r0, [r1]\n    add r0, r4, #0\n    add r1, sp, #0xc\n    bl ov80_0223947C\n    b _0222C550\n    add r0, r0, #1\n    cmp r1, r0\n    bne _0222C5CE\n    bl sub_02037474\n    cmp r0, #1\n    bne _0222C550\n    bl sub_02037454\n    add r6, r0, #0\n    mov r5, #0\n    cmp r6, #0\n    ble _0222C550\n    add r7, sp, #0xc\n    add r0, r5, #0\n    bl sub_02034818\n    bl ov80_0222A7EC\n    strh r0, [r7]\n    add r0, r4, #0\n    add r1, sp, #0xc\n    bl ov80_0223947C\n    add r5, r5, #1\n    cmp r5, r6\n    blt _0222C5B2\n    b _0222C550\n    add r0, r4, #0\n    add r1, sp, #0xc\n    bl ov80_0223947C\n    b _0222C550\n    ldr r1, [sp, #4]\n    ldr r0, [sp]\n    str r1, [r0, #0x1c]\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222C5E4: .word 0x0000FD13\n    _0222C5E8: .word 0x0000EEEE"
    );
    #endif
}

void FrtCmd_035(void) {
    /* Original at 0x0222C5EC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r5, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov80_022394D8\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_036(void) {
    /* Original at 0x0222C60C */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    ldr r0, [r5]\n    str r0, [sp, #8]\n    ldr r0, [r0]\n    bl sub_0209680C\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadWord\n    ldr r1, [r5, #0x1c]\n    add r4, r5, #0\n    add r0, r1, r0\n    str r1, [sp]\n    str r0, [r5, #0x1c]\n    add r4, #0x1c\n    add r6, sp, #0xc\n    mov r7, #0\n    add r0, r5, #0\n    mvn r7, r7\n    bl FrontierScript_ReadVar\n    strh r0, [r6, #4]\n    ldrh r1, [r6, #4]\n    ldr r0, _0222C6DC ; =0x0000FD13\n    cmp r1, r0\n    beq _0222C6D0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    strh r0, [r6]\n    ldr r0, [r4]\n    ldr r1, [r5, #0x1c]\n    add r0, r0, #1\n    str r0, [r4]\n    ldrb r0, [r1]\n    strb r0, [r6, #0xa]\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    sub r0, #8\n    strh r0, [r6, #6]\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    sub r0, #0x10\n    strh r0, [r6, #8]\n    ldr r0, [r4]\n    ldr r1, [r5, #0x1c]\n    add r0, r0, #1\n    str r0, [r4]\n    ldrb r0, [r1]\n    strb r0, [r6, #0xb]\n    ldr r0, [r4]\n    ldr r1, [r5, #0x1c]\n    add r0, r0, #1\n    str r0, [r4]\n    ldrb r0, [r1]\n    strb r0, [r6, #0xc]\n    mov r0, #0\n    strh r0, [r6, #2]\n    ldrh r1, [r6]\n    ldr r0, _0222C6E0 ; =0x0000EEEE\n    cmp r1, r0\n    bne _0222C6AA\n    ldr r0, [sp, #8]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl Save_PlayerData_GetProfile\n    bl ov80_0222A7EC\n    strh r0, [r6]\n    mov r7, #0x1f\n    b _0222C6C4\n    add r0, r0, #1\n    cmp r1, r0\n    bne _0222C6C4\n    ldr r0, [r4]\n    ldr r1, [r5, #0x1c]\n    add r0, r0, #1\n    str r0, [r4]\n    ldrb r0, [r1]\n    bl sub_02034818\n    bl ov80_0222A7EC\n    strh r0, [r6]\n    ldr r0, [sp, #4]\n    add r1, sp, #0xc\n    add r2, r7, #0\n    bl ov80_02239510\n    b _0222C632\n    ldr r0, [sp]\n    str r0, [r5, #0x1c]\n    mov r0, #0\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222C6DC: .word 0x0000FD13\n    _0222C6E0: .word 0x0000EEEE"
    );
    #endif
}

void FrtCmd_037(void) {
    /* Original at 0x0222C6E4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r5, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r1, r0, #0\n    ldr r0, [r5, #0x14]\n    bl ov42_02228110\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov80_02239590\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_038(void) {
    /* Original at 0x0222C70C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    ldr r2, [r5, #0x1c]\n    add r1, r0, #0\n    add r0, r2, #1\n    str r0, [r5, #0x1c]\n    ldrb r5, [r2]\n    mov r2, #0\n    add r0, r4, #0\n    str r2, [sp]\n    add r3, sp, #0\n    bl ov80_022395E8\n    ldr r0, [sp]\n    cmp r0, #0\n    bne _0222C740\n    bl GF_AssertFail\n    ldr r0, [sp]\n    add r1, r5, #0\n    bl ov42_02229200\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_039(void) {
    /* Original at 0x0222C74C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    bx lr"
    );
    #endif
}

void FrtCmd_040(void) {
    /* Original at 0x0222C750 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r4, [r5]\n    ldr r0, [r4]\n    bl sub_0209680C\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadWord\n    add r6, r0, #0\n    ldr r0, [r4]\n    add r1, r7, #0\n    bl ov80_02239938\n    str r0, [sp, #8]\n    cmp r0, #0\n    bne _0222C782\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r0, #0x59\n    str r0, [sp]\n    ldr r0, [r4, #0x34]\n    ldr r3, [sp, #0xc]\n    str r0, [sp, #4]\n    ldr r2, [r5, #0x1c]\n    ldr r1, [sp, #8]\n    ldr r3, [r3, #0x30]\n    add r0, r7, #0\n    add r2, r2, r6\n    bl ov80_0222C7B0\n    add r0, r4, #0\n    add r0, #0x59\n    ldrb r0, [r0]\n    add r4, #0x59\n    add r0, r0, #1\n    strb r0, [r4]\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222C7B0(void) {
    /* Original at 0x0222C7B0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x18\n    add r7, r2, #0\n    str r3, [sp]\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x18\n    bl MI_CpuFill8\n    str r5, [r4, #0x14]\n    ldr r0, [sp]\n    str r7, [r4, #0xc]\n    str r0, [r4, #0x10]\n    ldr r0, [sp, #0x18]\n    strh r6, [r4, #4]\n    str r0, [r4, #8]\n    ldr r0, [r5, #0x38]\n    cmp r0, #0\n    beq _0222C7E4\n    bl GF_AssertFail\n    ldr r0, _0222C7F4 ; =ov80_0222EEC8\n    ldr r2, _0222C7F8 ; =0x0000EAC4\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #0x38]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222C7F4: .word ov80_0222EEC8\n    _0222C7F8: .word 0x0000EAC4"
    );
    #endif
}

void FrtCmd_041(void) {
    FrontierScriptContext_Pause();
}

void ov80_0222C80C(void) {
    /* Original at 0x0222C80C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    add r0, #0x59\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0222C81A\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void FrtCmd_042(void) {
    /* Original at 0x0222C820 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    ldr r4, [r6]\n    ldr r0, [r4]\n    bl sub_0209680C\n    add r5, r0, #0\n    add r0, r6, #0\n    bl FrontierScriptContext_ReadWord\n    ldr r1, [r6, #0x1c]\n    add r0, r1, r0\n    str r0, [r6, #0x1c]\n    str r1, [sp, #4]\n    ldr r1, [r4, #0x34]\n    mov r0, #0xb8\n    bl NARC_New\n    add r7, r0, #0\n    add r0, r6, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    ldr r0, _0222C880 ; =0x0000FD13\n    cmp r4, r0\n    beq _0222C86E\n    str r4, [sp]\n    ldr r0, [r5, #0x34]\n    ldr r1, [r5, #0x38]\n    ldr r3, [r5, #4]\n    add r2, r7, #0\n    bl ov80_02239AF8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov80_0223962C\n    b _0222C848\n    add r0, r7, #0\n    bl NARC_Delete\n    ldr r0, [sp, #4]\n    str r0, [r6, #0x1c]\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222C880: .word 0x0000FD13"
    );
    #endif
}

void FrtCmd_043(void) {
    /* Original at 0x0222C884 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r5, r0, #0\n    ldr r0, [r4, #0x38]\n    add r1, r5, #0\n    bl ov80_02239B7C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov80_0223965C\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_044(void) {
    /* Original at 0x0222C8B0 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadWord\n    ldr r1, [r5, #0x1c]\n    add r4, r5, #0\n    add r0, r1, r0\n    str r1, [sp]\n    str r0, [r5, #0x1c]\n    add r4, #0x1c\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r7, r0, #0\n    ldr r0, _0222C948 ; =0x0000FD13\n    cmp r7, r0\n    beq _0222C93E\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    str r0, [sp, #0x14]\n    ldr r0, [r4]\n    ldr r1, [r5, #0x1c]\n    add r2, r0, #1\n    str r2, [r4]\n    ldrb r0, [r1]\n    str r0, [sp, #8]\n    add r0, r2, #1\n    ldr r1, [r5, #0x1c]\n    add r2, r7, #0\n    str r0, [r4]\n    ldrb r0, [r1]\n    str r0, [sp, #4]\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    bl ov80_0223968C\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    lsl r1, r1, #0x10\n    lsl r2, r2, #0x10\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    add r7, r0, #0\n    bl ManagedSprite_SetPositionXY\n    ldr r1, [sp, #0x14]\n    add r0, r7, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    add r0, r6, #0\n    bl ov80_02239708\n    b _0222C8D2\n    ldr r0, [sp]\n    str r0, [r5, #0x1c]\n    mov r0, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222C948: .word 0x0000FD13"
    );
    #endif
}

void FrtCmd_045(void) {
    /* Original at 0x0222C94C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r5, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov80_022396D8\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_046(void) {
    /* Original at 0x0222C96C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    ldr r2, [r5, #0x1c]\n    add r1, r0, #0\n    add r0, r2, #1\n    str r0, [r5, #0x1c]\n    add r0, r4, #0\n    ldrb r5, [r2]\n    bl ov80_02239700\n    add r4, r0, #0\n    bne _0222C998\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_047(void) {
    /* Original at 0x0222C9A4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r5, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov80_02239700\n    add r4, r0, #0\n    bne _0222C9C8\n    bl GF_AssertFail\n    ldr r0, [r4]\n    mov r1, #1\n    bl thunk_Sprite_SetFlipMode\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_048(void) {
    /* Original at 0x0222C9D4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov80_02239700\n    add r4, r0, #0\n    bne _0222CA02\n    bl GF_AssertFail\n    cmp r5, #0\n    ldr r0, [r4]\n    bne _0222CA10\n    mov r1, #0\n    bl thunk_Sprite_SetOamMode\n    b _0222CA16\n    mov r1, #1\n    bl thunk_Sprite_SetOamMode\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void FrtCmd_049(void) {
    /* Original at 0x0222CA1C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    bl FrontierScript_ReadVar\n    add r5, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r1, r5, #0\n    add r4, r0, #0\n    bl ov80_02239700\n    add r1, r6, #0\n    bl ManagedSprite_SetAnim\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov80_02239708\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void FrtCmd_050(void) {
    /* Original at 0x0222CA54 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r1, r4, #0\n    mov r2, #0\n    bl ov80_02239708\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_051(void) {
    /* Original at 0x0222CA74 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScript_ReadVar\n    add r1, r4, #0\n    add r1, #0x78\n    strh r0, [r1]\n    ldr r1, _0222CA90 ; =ov80_0222CA94\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0222CA90: .word ov80_0222CA94"
    );
    #endif
}

void ov80_0222CA94(void) {
    /* Original at 0x0222CA94 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r1, r5, #0\n    add r1, #0x78\n    ldrh r1, [r1]\n    add r4, r0, #0\n    bl ov80_02239700\n    add r5, #0x78\n    add r6, r0, #0\n    ldrh r1, [r5]\n    add r0, r4, #0\n    bl ov80_02239734\n    cmp r0, #0\n    beq _0222CAC6\n    add r0, r6, #0\n    bl ManagedSprite_IsAnimated\n    cmp r0, #0\n    bne _0222CACA\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_0222CAD0(void) {
    /* Original at 0x0222CAD0 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r4, r2, #0\n    ldr r7, [r6]\n    cmp r4, #7\n    ble _0222CAE2\n    bl GF_AssertFail\n    ldr r0, [r7, #0x34]\n    lsl r1, r4, #1\n    bl Heap_Alloc\n    str r0, [sp, #8]\n    add r0, r6, #0\n    bl FrontierScript_ReadVar\n    ldr r5, [sp, #8]\n    str r0, [sp, #4]\n    mov r4, #0\n    add r0, r6, #0\n    bl FrontierScript_ReadVar\n    strh r0, [r5]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #3\n    blt _0222CAF8\n    mov r0, #3\n    str r0, [sp]\n    ldr r0, [r7]\n    ldr r1, [sp, #4]\n    ldr r3, [sp, #8]\n    mov r2, #1\n    bl ov80_02239BF0\n    ldr r0, [sp, #8]\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_083(void) {
    /* Original at 0x0222CB24 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl FrontierScript_ReadVar\n    mov r2, #0\n    str r2, [sp]\n    add r1, r0, #0\n    ldr r0, [r4]\n    add r3, r2, #0\n    ldr r0, [r0]\n    bl ov80_02239BF0\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void FrtCmd_084(void) {
    ov80_0222CAD0();
}

void FrtCmd_052(void) {
    /* Original at 0x0222CB54 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #4]\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0xb\n    add r2, r1, #0\n    mov r3, #8\n    str r1, [sp, #4]\n    bl NamingScreen_CreateArgs\n    add r2, r0, #0\n    ldr r0, _0222CB8C ; =ov80_0222CB94\n    ldr r1, _0222CB90 ; =gOverlayTemplate_NamingScreen\n    str r0, [sp]\n    ldr r0, [r4]\n    mov r3, #0\n    ldr r0, [r0]\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    add sp, #8\n    pop {r4, pc}\n    _0222CB8C: .word ov80_0222CB94\n    _0222CB90: .word gOverlayTemplate_NamingScreen"
    );
    #endif
}

void ov80_0222CB94(void) {
    NamingScreen_DeleteArgs();
}

void FrtCmd_108(void) {
    /* Original at 0x0222CB9C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    mov r1, #0xb\n    add r2, sp, #0\n    bl sub_0202FBF0\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void FrtCmd_109(void) {
    /* Original at 0x0222CBB4 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r4, [r5]\n    bl FrontierScriptContext_ReadHalfWord\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    str r0, [sp]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r7, r0, #0\n    ldr r0, _0222CC18 ; =0x0000270F\n    cmp r6, r0\n    bls _0222CBE2\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xb0\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0xb2\n    strh r1, [r0]\n    ldr r0, [sp, #4]\n    ldr r1, [sp]\n    bl ov80_0222CC70\n    add r1, r4, #0\n    add r1, #0xb4\n    strh r0, [r1]\n    add r0, r4, #0\n    add r0, #0xb6\n    strh r6, [r0]\n    add r4, #0xb8\n    ldr r1, _0222CC1C ; =ov80_0222CC20\n    add r0, r5, #0\n    str r7, [r4]\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222CC18: .word 0x0000270F\n    _0222CC1C: .word ov80_0222CC20"
    );
    #endif
}

void ov80_0222CC20(void) {
    /* Original at 0x0222CC20 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r4, [r0]\n    ldr r0, [r4]\n    bl Frontier_GetLaunchArgs\n    add r1, r4, #0\n    add r1, #0xb0\n    str r1, [sp]\n    add r1, r4, #0\n    add r1, #0xb2\n    str r1, [sp, #4]\n    add r1, r4, #0\n    add r2, r4, #0\n    add r1, #0xb4\n    add r2, #0xb6\n    ldrh r1, [r1]\n    ldrh r2, [r2]\n    ldr r0, [r0, #8]\n    mov r3, #0\n    bl sub_0202FE14\n    sub r1, r0, #2\n    cmp r1, #1\n    bhi _0222CC68\n    cmp r0, #2\n    bne _0222CC5A\n    mov r1, #1\n    b _0222CC5C\n    mov r1, #0\n    add r4, #0xb8\n    ldr r0, [r4]\n    add sp, #8\n    strh r1, [r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222CC70(void) {
    /* Original at 0x0222CC70 */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r4, #0xf\n    cmp r0, #6\n    bhi _0222CCB0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222CC84: ; jump table\n    cmp r1, #6\n    bhi _0222CCBA\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222CCA2: ; jump table\n    b _0222CD90\n    mov r4, #0x10\n    b _0222CD90\n    mov r4, #0x11\n    b _0222CD90\n    bl GF_AssertFail\n    b _0222CD90\n    cmp r1, #3\n    bhi _0222CCE4\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222CCD0: ; jump table\n    mov r4, #0x12\n    b _0222CD90\n    mov r4, #0x13\n    b _0222CD90\n    mov r4, #0x14\n    b _0222CD90\n    bl GF_AssertFail\n    b _0222CD90\n    cmp r1, #3\n    bhi _0222CD0E\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222CCFA: ; jump table\n    mov r4, #0x15\n    b _0222CD90\n    mov r4, #0x16\n    b _0222CD90\n    mov r4, #0x17\n    b _0222CD90\n    bl GF_AssertFail\n    b _0222CD90\n    cmp r1, #3\n    bhi _0222CD38\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222CD24: ; jump table\n    mov r4, #0x1b\n    b _0222CD90\n    mov r4, #0x1c\n    b _0222CD90\n    mov r4, #0x1d\n    b _0222CD90\n    bl GF_AssertFail\n    b _0222CD90\n    cmp r1, #3\n    bhi _0222CD62\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222CD4E: ; jump table\n    mov r4, #0x18\n    b _0222CD90\n    mov r4, #0x19\n    b _0222CD90\n    mov r4, #0x1a\n    b _0222CD90\n    bl GF_AssertFail\n    b _0222CD90\n    cmp r1, #3\n    bhi _0222CD8C\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222CD78: ; jump table\n    mov r4, #0x1e\n    b _0222CD90\n    mov r4, #0x1f\n    b _0222CD90\n    mov r4, #0x20\n    b _0222CD90\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_110(void) {
    /* Original at 0x0222CD94 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    mov r1, #0x75\n    add r4, r0, #0\n    mov r0, #0xb\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0x75\n    mov r1, #0\n    lsl r2, r2, #2\n    add r6, r0, #0\n    bl MI_CpuFill8\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r4, #8]\n    mov r1, #0xb\n    add r2, sp, #4\n    add r3, r6, #0\n    bl sub_0202FC90\n    ldr r1, _0222CDEC ; =0x0000045D\n    mov r0, #5\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r5]\n    ldr r1, _0222CDF0 ; =gOverlayTemplate_Battle\n    ldr r0, [r0]\n    add r2, r6, #0\n    mov r3, #1\n    bl Frontier_LaunchApplication\n    mov r0, #1\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0222CDEC: .word 0x0000045D\n    _0222CDF0: .word gOverlayTemplate_Battle"
    );
    #endif
}

void FrtCmd_111(void) {
    sub_0202FC24();
}

void FrtCmd_112(void) {
    /* Original at 0x0222CE00 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    mov r1, #0xb\n    add r2, sp, #0\n    mov r3, #0\n    bl sub_0202FD28\n    strh r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_114(void) {
    /* Original at 0x0222CE28 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r5, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVarPtr\n    ldr r0, [r5, #8]\n    bl SaveGameNormal\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_115(void) {
    /* Original at 0x0222CE48 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r4, [r5]\n    ldr r0, [r4]\n    bl Frontier_GetLaunchArgs\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    mov r0, #4\n    bl sub_0201A728\n    ldr r0, [r4, #0x34]\n    bl sub_0201A748\n    ldr r0, [r6, #8]\n    mov r1, #2\n    bl Save_PrepareForAsyncWrite\n    ldr r1, _0222CE7C ; =ov80_0222CE80\n    add r0, r5, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _0222CE7C: .word ov80_0222CE80"
    );
    #endif
}

void ov80_0222CE80(void) {
    /* Original at 0x0222CE80 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl Save_WriteFileAsync\n    cmp r0, #2\n    bne _0222CEA2\n    bl sub_0201A774\n    mov r0, #4\n    bl sub_0201A738\n    mov r0, #1\n    pop {r3, pc}\n    cmp r0, #3\n    bne _0222CEB4\n    bl sub_0201A774\n    mov r0, #4\n    bl sub_0201A738\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void FrtCmd_116(void) {
    /* Original at 0x0222CEB8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl Save_WipeExtraChunks\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void FrtCmd_117(void) {
    /* Original at 0x0222CECC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    bl Save_CheckExtraChunksExist\n    strh r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_119(void) {
    WaitingIcon_New(0);
}

void FrtCmd_120(void) {
    sub_0200F450();
}

void FrtCmd_121(void) {
    /* Original at 0x0222CF18 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r2, [r5, #0x1c]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldrb r4, [r2]\n    bl FrontierScript_ReadVar\n    add r2, r0, #0\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #0x44]\n    bl BufferItemName\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_122(void) {
    /* Original at 0x0222CF38 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r2, [r5, #0x1c]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldrb r4, [r2]\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    bl ov80_0222CF6C\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #0x44]\n    add r2, r6, #0\n    bl BufferIntegerAsString\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_0222CF6C(void) {
    /* Original at 0x0222CF6C */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0xa\n    add r4, r0, #0\n    bl _u32_div_f\n    cmp r0, #0\n    bne _0222CF7E\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x64\n    bl _u32_div_f\n    cmp r0, #0\n    bne _0222CF8E\n    mov r0, #2\n    pop {r4, pc}\n    mov r1, #0xfa\n    add r0, r4, #0\n    lsl r1, r1, #2\n    bl _u32_div_f\n    cmp r0, #0\n    bne _0222CFA0\n    mov r0, #3\n    pop {r4, pc}\n    ldr r1, _0222CFF4 ; =0x00002710\n    add r0, r4, #0\n    bl _u32_div_f\n    cmp r0, #0\n    bne _0222CFB0\n    mov r0, #4\n    pop {r4, pc}\n    ldr r1, _0222CFF8 ; =0x000186A0\n    add r0, r4, #0\n    bl _u32_div_f\n    cmp r0, #0\n    bne _0222CFC0\n    mov r0, #5\n    pop {r4, pc}\n    ldr r1, _0222CFFC ; =0x000F4240\n    add r0, r4, #0\n    bl _u32_div_f\n    cmp r0, #0\n    bne _0222CFD0\n    mov r0, #6\n    pop {r4, pc}\n    ldr r1, _0222D000 ; =0x00989680\n    add r0, r4, #0\n    bl _u32_div_f\n    cmp r0, #0\n    bne _0222CFE0\n    mov r0, #7\n    pop {r4, pc}\n    ldr r1, _0222D004 ; =0x05F5E100\n    add r0, r4, #0\n    bl _u32_div_f\n    cmp r0, #0\n    bne _0222CFF0\n    mov r0, #8\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    _0222CFF4: .word 0x00002710\n    _0222CFF8: .word 0x000186A0\n    _0222CFFC: .word 0x000F4240\n    _0222D000: .word 0x00989680\n    _0222D004: .word 0x05F5E100"
    );
    #endif
}

void FrtCmd_123(void) {
    /* Original at 0x0222D008 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r2, [r5, #0x1c]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldr r0, [r0, #8]\n    ldrb r4, [r2]\n    bl Save_PlayerData_GetProfile\n    add r2, r0, #0\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #0x44]\n    bl BufferPlayersName\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_124(void) {
    /* Original at 0x0222D034 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r1, [r5, #0x1c]\n    add r0, r1, #1\n    str r0, [r5, #0x1c]\n    ldrb r4, [r1]\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_02034818\n    add r2, r0, #0\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #0x44]\n    bl BufferPlayersName\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_125(void) {
    /* Original at 0x0222D064 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r2, [r5, #0x1c]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldrb r4, [r2]\n    bl FrontierScript_ReadVar\n    add r2, r0, #0\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #0x44]\n    bl BufferMoveName\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_126(void) {
    /* Original at 0x0222D084 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r2, [r5, #0x1c]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldrb r6, [r2]\n    bl FrontierScript_ReadVar\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    ldr r1, [r5, #0x1c]\n    str r0, [sp, #8]\n    add r0, r1, #1\n    str r0, [r5, #0x1c]\n    ldrb r4, [r1]\n    add r0, r7, #0\n    mov r1, #0xb\n    bl ov80_0222D0D4\n    add r7, r0, #0\n    str r4, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    ldr r3, [sp, #8]\n    ldr r0, [r0, #0x44]\n    add r1, r6, #0\n    add r2, r7, #0\n    bl BufferString\n    add r0, r7, #0\n    bl String_Delete\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222D0D4(void) {
    /* Original at 0x0222D0D4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r3, r1, #0\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xed\n    bl NewMsgDataFromNarc\n    add r5, r0, #0\n    add r1, r4, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r5, #0\n    bl DestroyMsgData\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_127(void) {
    /* Original at 0x0222D0F8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r2, [r5, #0x1c]\n    add r1, r2, #1\n    str r1, [r5, #0x1c]\n    ldrb r4, [r2]\n    bl FrontierScript_ReadVar\n    add r2, r0, #0\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #0x44]\n    bl BufferTypeName\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_128(void) {
    /* Original at 0x0222D118 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r1, [r4, #0x1c]\n    add r2, r0, #0\n    add r0, r1, #1\n    str r0, [r4, #0x1c]\n    ldr r0, [r4]\n    ldrb r1, [r1]\n    ldr r0, [r0, #0x44]\n    ldr r2, [r2, #8]\n    bl BufferRivalsName\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_129(void) {
    /* Original at 0x0222D13C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    bl Save_FrontierData_Get\n    mov r1, #0\n    add r2, r1, #0\n    bl FrontierData_BattlePointAction\n    strh r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_130(void) {
    /* Original at 0x0222D168 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    bl Save_GameStats_Get\n    mov r1, #0x45\n    add r2, r5, #0\n    bl GameStats_Add\n    ldr r0, [r4, #8]\n    bl Save_FrontierData_Get\n    add r1, r5, #0\n    mov r2, #5\n    bl FrontierData_BattlePointAction\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_131(void) {
    /* Original at 0x0222D1A0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    bl Save_GameStats_Get\n    mov r1, #0x46\n    add r2, r5, #0\n    bl GameStats_Add\n    ldr r0, [r4, #8]\n    bl Save_FrontierData_Get\n    add r1, r5, #0\n    mov r2, #6\n    bl FrontierData_BattlePointAction\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_053(void) {
    /* Original at 0x0222D1D8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScript_ReadVar\n    add r1, r4, #0\n    add r1, #0x78\n    strh r0, [r1]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl sub_02037AC0\n    ldr r1, _0222D1FC ; =ov80_0222D200\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0222D1FC: .word ov80_0222D200"
    );
    #endif
}

void ov80_0222D200(void) {
    /* Original at 0x0222D200 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037454\n    cmp r0, #2\n    bge _0222D210\n    mov r0, #1\n    pop {r4, pc}\n    add r4, #0x78\n    ldrh r0, [r4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl sub_02037B38\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_054(void) {
    sub_02037BEC();
}

void FrtCmd_055(void) {
    /* Original at 0x0222D22C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02058284\n    ldr r1, _0222D240 ; =ov80_0222D244\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    _0222D240: .word ov80_0222D244"
    );
    #endif
}

void ov80_0222D244(void) {
    /* Original at 0x0222D244 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037D78\n    cmp r0, #1\n    beq _0222D25A\n    bl sub_02035650\n    cmp r0, #1\n    beq _0222D25A\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void FrtCmd_056(void) {
    /* Original at 0x0222D260 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl FrontierScript_ReadVarPtr\n    add r5, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    bl LCRandom\n    add r1, r4, #0\n    bl _s32_div_f\n    strh r1, [r5]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_057(void) {
    /* Original at 0x0222D284 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl SaveArray_Party_Get\n    bl HealParty\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void FrtCmd_058(void) {
    FrontierScriptContext_Pause();
}

void ov80_0222D2AC(void) {
    System_GetTouchNew(0, 1, 3);
}

void FrtCmd_059(void) {
    /* Original at 0x0222D2CC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScript_ReadVar\n    add r1, r4, #0\n    add r1, #0x78\n    strh r0, [r1]\n    ldr r1, _0222D2E8 ; =ov80_0222D2EC\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0222D2E8: .word ov80_0222D2EC"
    );
    #endif
}

void ov80_0222D2EC(void) {
    /* Original at 0x0222D2EC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0222D324 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0222D302\n    bl System_GetTouchNew\n    cmp r0, #0\n    beq _0222D306\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0x78\n    ldrh r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x78\n    add r4, #0x78\n    strh r1, [r0]\n    ldrh r0, [r4]\n    cmp r0, #0\n    bne _0222D320\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0222D324: .word gSystem"
    );
    #endif
}

void FrtCmd_060(void) {
    FrontierScript_ReadVarPtr();
}

void FrtCmd_061(void) {
    /* Original at 0x0222D334 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl Save_VarsFlags_Get\n    add r1, r6, #0\n    bl Save_VarsFlags_GetVarAddr\n    strh r4, [r0]\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void FrtCmd_062(void) {
    /* Original at 0x0222D360 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl Save_VarsFlags_Get\n    add r1, r6, #0\n    bl Save_VarsFlags_GetVarAddr\n    ldrh r0, [r0]\n    strh r0, [r4]\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_0222D390(void) {
    /* Original at 0x0222D390 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0222D3A2\n    cmp r0, #1\n    beq _0222D3BE\n    b _0222D3F0\n    mov r1, #0x10\n    mov r0, #2\n    add r2, r1, #0\n    add r3, r4, #0\n    str r0, [sp]\n    mov r0, #1\n    sub r2, #0x20\n    add r3, #0xc\n    bl ov80_0223AC24\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _0222D3FE\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _0222D3FE\n    mov r0, #0\n    bl sub_0200FBDC\n    mov r0, #1\n    bl sub_0200FBDC\n    mov r0, #0xc\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _0222D3FE\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0222D3FE\n    add sp, #0xc\n    mov r0, #0\n    pop {r3, r4, pc}\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov80_0222D404(void) {
    /* Original at 0x0222D404 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #3\n    bhi _0222D4CC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222D41C: ; jump table\n    mov r1, #0x10\n    mov r0, #2\n    add r2, r1, #0\n    add r3, r4, #0\n    str r0, [sp]\n    mov r0, #1\n    sub r2, #0x20\n    add r3, #0xc\n    bl ov80_0223AC24\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _0222D51A\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _0222D51A\n    mov r0, #0xb\n    mov r1, #1\n    bl AllocWindows\n    str r0, [r4, #0x28]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldr r0, [r4]\n    ldr r1, [r4, #0x28]\n    ldr r0, [r0]\n    mov r2, #1\n    bl AddWindowParameterized\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    mov r2, #2\n    ldr r0, [r0, #4]\n    add r3, r1, #0\n    bl PaletteData_FillPaletteInBuffer\n    ldr r0, [r4, #0x28]\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #0x28]\n    bl ScheduleWindowCopyToVram\n    mov r0, #0xb\n    bl ov80_0223AF30\n    str r0, [r4, #0x2c]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    mov r0, #0xf\n    str r0, [sp]\n    mov r1, #1\n    ldr r0, [r4, #0x2c]\n    ldr r3, [r4, #0x28]\n    add r2, r1, #0\n    bl ov80_0223AF80\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _0222D51A\n    ldr r0, [r4, #0x2c]\n    bl ov80_0223AFC4\n    add r5, r0, #0\n    ldr r0, [r4, #0x28]\n    bl ScheduleWindowCopyToVram\n    cmp r5, #0\n    beq _0222D51A\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _0222D51A\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0222D51A\n    ldr r0, [r4, #0x2c]\n    bl ov80_0223AF60\n    ldr r0, [r4, #0x28]\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, [r4, #0x28]\n    bl RemoveWindow\n    ldr r0, [r4, #0x28]\n    mov r1, #1\n    bl WindowArray_Delete\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0xb\n    bl BG_ClearCharDataRange\n    ldr r0, [r4]\n    mov r1, #1\n    ldr r0, [r0]\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, pc}\n    mov r0, #1\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov80_0222D520(void) {
    /* Original at 0x0222D520 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #3\n    bhi _0222D5E8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222D538: ; jump table\n    mov r1, #0x10\n    mov r0, #2\n    add r2, r1, #0\n    add r3, r4, #0\n    str r0, [sp]\n    mov r0, #1\n    sub r2, #0x20\n    add r3, #0xc\n    bl ov80_0223AC24\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _0222D636\n    ldr r0, [r4, #0xc]\n    cmp r0, #0\n    beq _0222D636\n    mov r0, #0xb\n    mov r1, #1\n    bl AllocWindows\n    str r0, [r4, #0x28]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    ldr r0, [r4]\n    ldr r1, [r4, #0x28]\n    ldr r0, [r0]\n    mov r2, #1\n    bl AddWindowParameterized\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    mov r2, #2\n    ldr r0, [r0, #4]\n    add r3, r1, #0\n    bl PaletteData_FillPaletteInBuffer\n    ldr r0, [r4, #0x28]\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #0x28]\n    bl ScheduleWindowCopyToVram\n    mov r0, #0xb\n    bl ov80_0223AF30\n    str r0, [r4, #0x2c]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    mov r0, #0xf\n    str r0, [sp]\n    mov r1, #1\n    ldr r0, [r4, #0x2c]\n    ldr r3, [r4, #0x28]\n    add r2, r1, #0\n    bl ov80_0223AF80\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _0222D636\n    ldr r0, [r4, #0x2c]\n    bl ov80_0223B1D4\n    add r5, r0, #0\n    ldr r0, [r4, #0x28]\n    bl ScheduleWindowCopyToVram\n    cmp r5, #0\n    beq _0222D636\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _0222D636\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0222D636\n    ldr r0, [r4, #0x2c]\n    bl ov80_0223AF60\n    ldr r0, [r4, #0x28]\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, [r4, #0x28]\n    bl RemoveWindow\n    ldr r0, [r4, #0x28]\n    mov r1, #1\n    bl WindowArray_Delete\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0xb\n    bl BG_ClearCharDataRange\n    ldr r0, [r4]\n    mov r1, #1\n    ldr r0, [r0]\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, pc}\n    mov r0, #1\n    add sp, #0x14\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov80_0222D63C(void) {
    /* Original at 0x0222D63C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #0x10\n    orr r0, r1\n    bx lr"
    );
    #endif
}

void ov80_0222D644(void) {
    /* Original at 0x0222D644 */
    /* Requires manual decompilation - 386 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r4, r1, #0\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    mov r1, #2\n    ldr r0, [r0]\n    ldr r7, [r4, #0x24]\n    bl GetBgHOffset\n    str r0, [sp, #0x20]\n    ldr r0, [r4]\n    mov r1, #2\n    ldr r0, [r0]\n    bl GetBgHOffset\n    str r0, [sp, #0x1c]\n    ldr r0, [r4]\n    mov r1, #3\n    ldr r0, [r0]\n    bl GetBgHOffset\n    str r0, [sp, #0x18]\n    ldr r0, [r4]\n    mov r1, #3\n    ldr r0, [r0]\n    bl GetBgHOffset\n    str r0, [sp, #0x14]\n    ldr r0, [r4, #0x10]\n    cmp r0, #1\n    beq _0222D686\n    b _0222D7F6\n    mov r0, #6\n    lsl r0, r0, #8\n    ldr r0, [r7, r0]\n    bl ov80_0223B60C\n    str r0, [sp, #0x24]\n    mov r0, #0\n    str r0, [sp, #0x28]\n    add r4, r7, #0\n    mov r0, #0\n    strh r0, [r4, #8]\n    strh r0, [r4, #0xa]\n    ldrsh r6, [r4, r0]\n    mov r0, #2\n    ldrsh r0, [r4, r0]\n    cmp r6, r0\n    blt _0222D6AA\n    b _0222D7CE\n    ldr r0, [sp, #0x24]\n    lsl r1, r6, #5\n    add r5, r0, r1\n    mov r2, #1\n    mov r0, #0\n    lsl r2, r2, #0xc\n    str r0, [sp]\n    add r0, sp, #0x2c\n    mov r1, #0\n    add r3, r2, #0\n    bl MTX22_2DAffine\n    mov r0, #8\n    ldrsh r1, [r4, r0]\n    ldr r0, [sp, #0x20]\n    add r0, r0, r1\n    mov r1, #0xa\n    ldrsh r2, [r4, r1]\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0x10\n    add r1, r1, r2\n    ldr r2, _0222D964 ; =0x00000604\n    lsl r1, r1, #0x10\n    ldr r2, [r7, r2]\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    cmp r2, #2\n    bne _0222D704\n    lsr r2, r0, #0x1f\n    lsl r3, r0, #0x18\n    sub r3, r3, r2\n    mov r0, #0x18\n    ror r3, r0\n    add r0, r2, r3\n    lsr r2, r1, #0x1f\n    lsl r3, r1, #0x18\n    lsl r0, r0, #0x10\n    sub r3, r3, r2\n    mov r1, #0x18\n    ror r3, r1\n    add r1, r2, r3\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    b _0222D730\n    cmp r2, #1\n    bne _0222D730\n    cmp r0, #0\n    bge _0222D716\n    mov r2, #1\n    lsl r2, r2, #8\n    add r0, r0, r2\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    cmp r1, #0\n    bge _0222D720\n    neg r1, r1\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    lsr r2, r0, #0x1f\n    lsl r3, r0, #0x18\n    sub r3, r3, r2\n    mov r0, #0x18\n    ror r3, r0\n    add r0, r2, r3\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp]\n    mov r2, #0\n    str r1, [sp, #4]\n    add r0, r5, #0\n    add r1, sp, #0x2c\n    add r3, r2, #0\n    bl G2x_SetBGyAffine_\n    mov r0, #8\n    ldrsh r1, [r4, r0]\n    ldr r0, [sp, #0x18]\n    add r0, r0, r1\n    mov r1, #0xa\n    ldrsh r2, [r4, r1]\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #0x10\n    add r1, r1, r2\n    ldr r2, _0222D964 ; =0x00000604\n    lsl r1, r1, #0x10\n    ldr r2, [r7, r2]\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    cmp r2, #2\n    bne _0222D782\n    lsr r2, r0, #0x1f\n    lsl r3, r0, #0x18\n    sub r3, r3, r2\n    mov r0, #0x18\n    ror r3, r0\n    add r0, r2, r3\n    lsr r2, r1, #0x1f\n    lsl r3, r1, #0x18\n    lsl r0, r0, #0x10\n    sub r3, r3, r2\n    mov r1, #0x18\n    ror r3, r1\n    add r1, r2, r3\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    b _0222D7AE\n    cmp r2, #1\n    bne _0222D7AE\n    cmp r0, #0\n    bge _0222D794\n    mov r2, #1\n    lsl r2, r2, #8\n    add r0, r0, r2\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    cmp r1, #0\n    bge _0222D79E\n    neg r1, r1\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    lsr r2, r0, #0x1f\n    lsl r3, r0, #0x18\n    sub r3, r3, r2\n    mov r0, #0x18\n    ror r3, r0\n    add r0, r2, r3\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp]\n    add r0, r5, #0\n    mov r2, #0\n    str r1, [sp, #4]\n    add r0, #0x10\n    add r1, sp, #0x2c\n    add r3, r2, #0\n    bl G2x_SetBGyAffine_\n    mov r0, #2\n    ldrsh r0, [r4, r0]\n    add r6, r6, #1\n    add r5, #0x20\n    cmp r6, r0\n    bge _0222D7CE\n    b _0222D6B0\n    ldr r0, [sp, #0x28]\n    add r4, #0x10\n    add r0, r0, #1\n    str r0, [sp, #0x28]\n    cmp r0, #0x60\n    bge _0222D7DC\n    b _0222D698\n    mov r0, #6\n    lsl r0, r0, #8\n    ldr r0, [r7, r0]\n    bl ov80_0223B5E8\n    add r0, r7, #0\n    bl Heap_Free\n    ldr r0, [sp, #8]\n    bl SysTask_Destroy\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #6\n    lsl r0, r0, #8\n    ldr r0, [r7, r0]\n    bl ov80_0223B60C\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r4, r7, #0\n    mov r0, #8\n    ldrsh r1, [r4, r0]\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    add r0, r1, r0\n    strh r0, [r4, #8]\n    mov r0, #0xa\n    ldrsh r1, [r4, r0]\n    mov r0, #6\n    ldrsh r0, [r4, r0]\n    add r0, r1, r0\n    strh r0, [r4, #0xa]\n    mov r0, #0\n    ldrsh r6, [r4, r0]\n    mov r0, #2\n    ldrsh r0, [r4, r0]\n    cmp r6, r0\n    blt _0222D82E\n    b _0222D952\n    ldr r0, [sp, #0x10]\n    lsl r1, r6, #5\n    add r5, r0, r1\n    mov r2, #1\n    mov r0, #0\n    lsl r2, r2, #0xc\n    str r0, [sp]\n    add r0, sp, #0x2c\n    mov r1, #0\n    add r3, r2, #0\n    bl MTX22_2DAffine\n    mov r0, #8\n    ldrsh r1, [r4, r0]\n    ldr r0, [sp, #0x20]\n    add r0, r0, r1\n    mov r1, #0xa\n    ldrsh r2, [r4, r1]\n    ldr r1, [sp, #0x1c]\n    lsl r0, r0, #0x10\n    add r1, r1, r2\n    ldr r2, _0222D964 ; =0x00000604\n    lsl r1, r1, #0x10\n    ldr r2, [r7, r2]\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    cmp r2, #2\n    bne _0222D888\n    lsr r2, r0, #0x1f\n    lsl r3, r0, #0x18\n    sub r3, r3, r2\n    mov r0, #0x18\n    ror r3, r0\n    add r0, r2, r3\n    lsr r2, r1, #0x1f\n    lsl r3, r1, #0x18\n    lsl r0, r0, #0x10\n    sub r3, r3, r2\n    mov r1, #0x18\n    ror r3, r1\n    add r1, r2, r3\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    b _0222D8B4\n    cmp r2, #1\n    bne _0222D8B4\n    cmp r0, #0\n    bge _0222D89A\n    mov r2, #1\n    lsl r2, r2, #8\n    add r0, r0, r2\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    cmp r1, #0\n    bge _0222D8A4\n    neg r1, r1\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    lsr r2, r0, #0x1f\n    lsl r3, r0, #0x18\n    sub r3, r3, r2\n    mov r0, #0x18\n    ror r3, r0\n    add r0, r2, r3\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp]\n    mov r2, #0\n    str r1, [sp, #4]\n    add r0, r5, #0\n    add r1, sp, #0x2c\n    add r3, r2, #0\n    bl G2x_SetBGyAffine_\n    mov r0, #8\n    ldrsh r1, [r4, r0]\n    ldr r0, [sp, #0x18]\n    add r0, r0, r1\n    mov r1, #0xa\n    ldrsh r2, [r4, r1]\n    ldr r1, [sp, #0x14]\n    lsl r0, r0, #0x10\n    add r1, r1, r2\n    ldr r2, _0222D964 ; =0x00000604\n    lsl r1, r1, #0x10\n    ldr r2, [r7, r2]\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    cmp r2, #2\n    bne _0222D906\n    lsr r2, r0, #0x1f\n    lsl r3, r0, #0x18\n    sub r3, r3, r2\n    mov r0, #0x18\n    ror r3, r0\n    add r0, r2, r3\n    lsr r2, r1, #0x1f\n    lsl r3, r1, #0x18\n    lsl r0, r0, #0x10\n    sub r3, r3, r2\n    mov r1, #0x18\n    ror r3, r1\n    add r1, r2, r3\n    lsl r1, r1, #0x10\n    asr r0, r0, #0x10\n    asr r1, r1, #0x10\n    b _0222D932\n    cmp r2, #1\n    bne _0222D932\n    cmp r0, #0\n    bge _0222D918\n    mov r2, #1\n    lsl r2, r2, #8\n    add r0, r0, r2\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    cmp r1, #0\n    bge _0222D922\n    neg r1, r1\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    lsr r2, r0, #0x1f\n    lsl r3, r0, #0x18\n    sub r3, r3, r2\n    mov r0, #0x18\n    ror r3, r0\n    add r0, r2, r3\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    str r0, [sp]\n    add r0, r5, #0\n    mov r2, #0\n    str r1, [sp, #4]\n    add r0, #0x10\n    add r1, sp, #0x2c\n    add r3, r2, #0\n    bl G2x_SetBGyAffine_\n    mov r0, #2\n    ldrsh r0, [r4, r0]\n    add r6, r6, #1\n    add r5, #0x20\n    cmp r6, r0\n    bge _0222D952\n    b _0222D834\n    ldr r0, [sp, #0xc]\n    add r4, #0x10\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    cmp r0, #0x60\n    bge _0222D960\n    b _0222D808\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _0222D964: .word 0x00000604"
    );
    #endif
}

void ov80_0222D968(void) {
    /* Original at 0x0222D968 */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _0222D97E\n    cmp r0, #1\n    beq _0222D99A\n    cmp r0, #2\n    beq _0222DA54\n    b _0222DA8E\n    mov r1, #0x10\n    mov r0, #2\n    add r2, r1, #0\n    add r3, r5, #0\n    str r0, [sp]\n    mov r0, #1\n    sub r2, #0x20\n    add r3, #0xc\n    bl ov80_0223AC24\n    ldr r0, [r5, #4]\n    add r0, r0, #1\n    str r0, [r5, #4]\n    b _0222DA94\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    beq _0222DA94\n    add r0, sp, #4\n    mov r1, #0\n    mov r2, #0x20\n    bl MI_CpuFill8\n    mov r0, #0\n    str r0, [r5, #0x10]\n    ldr r1, _0222DA9C ; =0x00000608\n    mov r0, #0x65\n    bl Heap_Alloc\n    ldr r1, _0222DAA0 ; =0x00000604\n    str r0, [r5, #0x24]\n    mov r2, #1\n    str r2, [r0, r1]\n    ldr r0, _0222DAA4 ; =0x04000020\n    add r1, sp, #4\n    mov r2, #0x65\n    bl ov80_0223B544\n    mov r7, #0\n    mov r1, #6\n    ldr r2, [r5, #0x24]\n    lsl r1, r1, #8\n    str r0, [r2, r1]\n    add r6, r7, #0\n    add r4, r7, #0\n    ldr r0, [r5, #0x24]\n    strh r6, [r0, r4]\n    ldr r1, [r5, #0x24]\n    add r0, r1, r4\n    ldrsh r1, [r1, r4]\n    add r1, r1, #2\n    strh r1, [r0, #2]\n    mov r0, #0x31\n    sub r2, r0, r7\n    lsr r1, r2, #0x1f\n    lsl r3, r2, #0x1d\n    sub r3, r3, r1\n    mov r0, #0x1d\n    ror r3, r0\n    add r0, r1, r3\n    ldr r1, [r5, #0x24]\n    add r1, r1, r4\n    strh r0, [r1, #4]\n    asr r0, r2, #1\n    lsr r0, r0, #0x1e\n    add r0, r2, r0\n    asr r1, r0, #2\n    ldr r0, [r5, #0x24]\n    add r0, r0, r4\n    strh r1, [r0, #6]\n    ldr r0, [r5, #0x24]\n    add r1, r0, r4\n    mov r0, #0\n    strh r0, [r1, #8]\n    ldr r0, [r5, #0x24]\n    add r1, r0, r4\n    mov r0, #0\n    strh r0, [r1, #0xa]\n    add r1, r0, #0\n    bl ov80_0222D63C\n    ldr r1, [r5, #0x24]\n    add r7, r7, #1\n    add r1, r1, r4\n    str r0, [r1, #0xc]\n    add r6, r6, #2\n    add r4, #0x10\n    cmp r7, #0x60\n    blt _0222D9D6\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x28\n    add r1, r0, #0\n    sub r1, #0x38\n    mov r2, #0\n    mov r3, #0x1e\n    bl StartBrightnessTransition\n    mov r2, #1\n    ldr r0, _0222DAA8 ; =ov80_0222D644\n    add r1, r5, #0\n    lsl r2, r2, #0xc\n    bl SysTask_CreateOnMainQueue\n    ldr r0, [r5, #4]\n    add r0, r0, #1\n    str r0, [r5, #4]\n    b _0222DA94\n    mov r0, #1\n    bl IsBrightnessTransitionActive\n    cmp r0, #0\n    beq _0222DA94\n    mov r0, #1\n    str r0, [r5, #0x10]\n    mov r0, #3\n    mov r1, #0\n    bl ToggleBgLayer\n    ldr r0, [r5]\n    mov r2, #0\n    ldr r0, [r0]\n    mov r1, #3\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r5]\n    mov r1, #3\n    ldr r0, [r0]\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r5, #4]\n    add r0, r0, #1\n    str r0, [r5, #4]\n    b _0222DA94\n    add sp, #0x24\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222DA9C: .word 0x00000608\n    _0222DAA0: .word 0x00000604\n    _0222DAA4: .word 0x04000020\n    _0222DAA8: .word ov80_0222D644"
    );
    #endif
}

void ov80_0222DAAC(void) {
    /* Original at 0x0222DAAC */
    /* Requires manual decompilation - 165 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _0222DAC2\n    cmp r0, #1\n    beq _0222DADE\n    cmp r0, #2\n    beq _0222DBBC\n    b _0222DBF6\n    mov r1, #0x10\n    mov r0, #2\n    add r2, r1, #0\n    add r3, r5, #0\n    str r0, [sp]\n    mov r0, #1\n    sub r2, #0x20\n    add r3, #0xc\n    bl ov80_0223AC24\n    ldr r0, [r5, #4]\n    add r0, r0, #1\n    str r0, [r5, #4]\n    b _0222DBFC\n    ldr r0, [r5, #0xc]\n    cmp r0, #0\n    bne _0222DAE6\n    b _0222DBFC\n    add r0, sp, #4\n    mov r1, #0\n    mov r2, #0x20\n    bl MI_CpuFill8\n    mov r0, #0\n    str r0, [r5, #0x10]\n    ldr r1, _0222DC04 ; =0x00000608\n    mov r0, #0x65\n    bl Heap_Alloc\n    ldr r1, _0222DC08 ; =0x00000604\n    str r0, [r5, #0x24]\n    mov r2, #2\n    str r2, [r0, r1]\n    ldr r0, _0222DC0C ; =0x04000020\n    add r1, sp, #4\n    mov r2, #0x65\n    bl ov80_0223B544\n    mov r6, #0\n    mov r1, #6\n    ldr r2, [r5, #0x24]\n    lsl r1, r1, #8\n    str r0, [r2, r1]\n    add r7, r6, #0\n    add r4, r6, #0\n    ldr r0, [r5, #0x24]\n    lsr r2, r6, #0x1f\n    strh r7, [r0, r4]\n    ldr r1, [r5, #0x24]\n    add r0, r1, r4\n    ldrsh r1, [r1, r4]\n    add r1, r1, #2\n    strh r1, [r0, #2]\n    mov r0, #0x30\n    sub r1, r0, r6\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r0, r0, #3\n    add r1, r0, #1\n    ldr r0, [r5, #0x24]\n    add r0, r0, r4\n    strh r1, [r0, #4]\n    lsl r1, r6, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    beq _0222DB5A\n    ldr r0, [r5, #0x24]\n    mov r1, #4\n    add r0, r0, r4\n    ldrsh r2, [r0, r1]\n    sub r1, r1, #5\n    mul r1, r2\n    strh r1, [r0, #4]\n    cmp r6, #0x30\n    bge _0222DB66\n    ldr r0, [r5, #0x24]\n    add r0, r0, r4\n    strh r6, [r0, #6]\n    b _0222DB70\n    mov r0, #0x60\n    sub r1, r0, r6\n    ldr r0, [r5, #0x24]\n    add r0, r0, r4\n    strh r1, [r0, #6]\n    ldr r0, [r5, #0x24]\n    add r1, r0, r4\n    mov r0, #0\n    strh r0, [r1, #8]\n    ldr r0, [r5, #0x24]\n    add r1, r0, r4\n    mov r0, #0\n    strh r0, [r1, #0xa]\n    add r1, r0, #0\n    bl ov80_0222D63C\n    ldr r1, [r5, #0x24]\n    add r6, r6, #1\n    add r1, r1, r4\n    str r0, [r1, #0xc]\n    add r7, r7, #2\n    add r4, #0x10\n    cmp r6, #0x60\n    blt _0222DB1C\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x28\n    add r1, r0, #0\n    sub r1, #0x38\n    mov r2, #0\n    mov r3, #0x1c\n    bl StartBrightnessTransition\n    mov r2, #1\n    ldr r0, _0222DC10 ; =ov80_0222D644\n    add r1, r5, #0\n    lsl r2, r2, #0xc\n    bl SysTask_CreateOnMainQueue\n    ldr r0, [r5, #4]\n    add r0, r0, #1\n    str r0, [r5, #4]\n    b _0222DBFC\n    mov r0, #1\n    bl IsBrightnessTransitionActive\n    cmp r0, #0\n    beq _0222DBFC\n    mov r0, #1\n    str r0, [r5, #0x10]\n    mov r0, #3\n    mov r1, #0\n    bl ToggleBgLayer\n    ldr r0, [r5]\n    mov r2, #0\n    ldr r0, [r0]\n    mov r1, #3\n    add r3, r2, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r5]\n    mov r1, #3\n    ldr r0, [r0]\n    add r2, r1, #0\n    mov r3, #0\n    bl BgSetPosTextAndCommit\n    ldr r0, [r5, #4]\n    add r0, r0, #1\n    str r0, [r5, #4]\n    b _0222DBFC\n    add sp, #0x24\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222DC04: .word 0x00000608\n    _0222DC08: .word 0x00000604\n    _0222DC0C: .word 0x04000020\n    _0222DC10: .word ov80_0222D644"
    );
    #endif
}

void ov80_0222DC14(void) {
    /* Original at 0x0222DC14 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0222DC26\n    cmp r0, #1\n    beq _0222DC38\n    b _0222DC62\n    add r0, r4, #0\n    add r0, #0x18\n    mov r1, #0x65\n    bl ov80_0223B424\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _0222DC62\n    mov r0, #0x12\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    str r0, [sp, #4]\n    ldr r0, _0222DC68 ; =0x0400001C\n    mov r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #4\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    ldr r3, _0222DC6C ; =0x000002AA\n    add r0, #0x18\n    mov r2, #0xbf\n    bl ov80_0223B440\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    mov r0, #1\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _0222DC68: .word 0x0400001C\n    _0222DC6C: .word 0x000002AA"
    );
    #endif
}

void FrtCmd_063(void) {
    /* Original at 0x0222DC70 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r1, r5, #0\n    add r1, #0x78\n    strh r0, [r1]\n    ldr r1, _0222DCE8 ; =0x0000045D\n    mov r0, #5\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    mov r0, #0xb\n    mov r1, #0x30\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    str r0, [r4, #0x14]\n    mov r0, #0\n    str r0, [r4, #4]\n    add r0, r5, #0\n    add r0, #0x78\n    ldrh r0, [r0]\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    bl FrontierSystem_GetFrontierMap\n    str r0, [r4]\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0]\n    bl Frontier_SetData\n    ldr r1, _0222DCEC ; =ov80_0222DCF0\n    add r0, r5, #0\n    bl FrontierScriptContext_Pause\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    mov r2, #2\n    ldr r0, [r0, #4]\n    add r3, r1, #0\n    bl PaletteData_FillPaletteInBuffer\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _0222DCE8: .word 0x0000045D\n    _0222DCEC: .word ov80_0222DCF0"
    );
    #endif
}

void ov80_0222DCF0(void) {
    /* Original at 0x0222DCF0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r4, r0, #0\n    ldr r1, [r4, #8]\n    lsl r2, r1, #2\n    ldr r1, _0222DD38 ; =ov80_0223B9EC\n    ldr r1, [r1, r2]\n    blx r1\n    add r6, r0, #0\n    bne _0222DD2C\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FBF4\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FBF4\n    ldr r0, [r5]\n    ldr r1, [r4, #0x14]\n    ldr r0, [r0]\n    bl Frontier_SetData\n    add r0, r4, #0\n    bl Heap_Free\n    cmp r6, #0\n    bne _0222DD34\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _0222DD38: .word ov80_0223B9EC"
    );
    #endif
}

void FrtCmd_064(void) {
    /* Original at 0x0222DD3C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl Save_PlayerData_GetProfile\n    bl PlayerProfile_GetTrainerGender\n    cmp r0, #0\n    bne _0222DD60\n    mov r0, #0\n    b _0222DD62\n    mov r0, #0x61\n    strh r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_065(void) {
    /* Original at 0x0222DD68 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r3, r0, #0\n    ldr r0, [r4, #0x10]\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov80_022399A4\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_066(void) {
    /* Original at 0x0222DD9C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r5, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r1, r0, #0\n    ldr r0, [r5, #0x10]\n    bl ov80_02239A1C\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_067(void) {
    /* Original at 0x0222DDBC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r5, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    ldr r0, [r5, #0x10]\n    add r1, r6, #0\n    bl ov80_02239A60\n    mov r2, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl sub_02015494\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void FrtCmd_068(void) {
    FrontierScriptContext_Pause();
}

void ov80_0222DE00(void) {
    /* Original at 0x0222DE00 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl sub_0209680C\n    ldr r0, [r0, #0x10]\n    bl ov80_02239A74\n    cmp r0, #1\n    bne _0222DE18\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void FrtCmd_076(void) {
    /* Original at 0x0222DE1C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r5, r0, #0\n    add r0, #0xa4\n    ldr r0, [r0]\n    add r5, #0xa4\n    cmp r0, #0\n    beq _0222DE3E\n    bl GF_AssertFail\n    ldr r0, [r5]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r7, r0, #0\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    str r0, [sp]\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0xc\n    bl MI_CpuFill8\n    strh r6, [r5, #4]\n    ldr r0, [sp]\n    strh r7, [r5, #6]\n    strb r0, [r5, #9]\n    ldr r0, _0222DE84 ; =ov80_0222F4F0\n    ldr r2, _0222DE88 ; =0x00011170\n    add r1, r5, #0\n    strb r4, [r5, #0xa]\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222DE84: .word ov80_0222F4F0\n    _0222DE88: .word 0x00011170"
    );
    #endif
}

void FrtCmd_077(void) {
    FrontierScriptContext_Pause();
}

void ov80_0222DE9C(void) {
    sub_0209680C(0, 1);
}

void FrtCmd_078(void) {
    /* Original at 0x0222DEB8 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0209680C\n    add r4, r0, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    add r4, #0xb0\n    cmp r0, #0\n    beq _0222DEDA\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xc\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    strb r0, [r4, #4]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    strb r0, [r4, #5]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    strb r0, [r4, #6]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    strb r0, [r4, #7]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    strh r0, [r4, #8]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    strb r0, [r4, #0xa]\n    mov r2, #0x4b\n    ldr r0, _0222DF28 ; =ov80_0222F53C\n    add r1, r4, #0\n    lsl r2, r2, #2\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0222DF28: .word ov80_0222F53C"
    );
    #endif
}

void FrtCmd_079(void) {
    FrontierScriptContext_Pause();
}

void ov80_0222DF3C(void) {
    sub_0209680C(0, 1);
}

void FrtCmd_150(void) {
    FrontierScriptContext_ReadHalfWord();
}

void FrtCmd_069(void) {
    /* Original at 0x0222DF64 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl FrontierSystem_GetFrontierMap\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    str r0, [sp, #0x1c]\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl SaveArray_Party_Get\n    ldr r1, [sp, #0x18]\n    bl Party_GetMonByIndex\n    str r4, [sp]\n    add r1, r0, #0\n    str r6, [sp, #4]\n    mov r2, #0\n    str r2, [sp, #8]\n    str r2, [sp, #0xc]\n    mov r0, #8\n    str r0, [sp, #0x10]\n    str r2, [sp, #0x14]\n    ldr r3, [sp, #0x1c]\n    add r0, r7, #0\n    mov r2, #0xb\n    bl ov80_0222F030\n    mov r0, #0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void FrtCmd_070(void) {
    /* Original at 0x0222DFD4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl FrontierSystem_GetFrontierMap\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov80_0222F1D0\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_071(void) {
    /* Original at 0x0222DFF4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl FrontierSystem_GetFrontierMap\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r1, sp, #0x10\n    add r6, r0, #0\n    add r0, r4, #0\n    add r1, #2\n    add r2, sp, #0x10\n    bl ov80_022398E4\n    ldr r0, [r4, #4]\n    add r1, sp, #0x10\n    str r0, [sp]\n    add r0, r5, #0\n    add r0, #0x78\n    str r0, [sp, #4]\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    str r0, [sp, #8]\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    str r0, [sp, #0xc]\n    ldr r1, [r4]\n    ldr r2, [r4, #0x34]\n    ldr r3, [r4, #0x38]\n    add r0, r6, #0\n    bl ov80_0223A00C\n    ldr r1, _0222E054 ; =0x0000047B\n    mov r0, #5\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    ldr r1, _0222E058 ; =ov80_0222E05C\n    add r0, r5, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0222E054: .word 0x0000047B\n    _0222E058: .word ov80_0222E05C"
    );
    #endif
}

void ov80_0222E05C(void) {
    sub_0209680C(0, 1);
}

void FrtCmd_072(void) {
    /* Original at 0x0222E078 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl Save_GameStats_Get\n    add r1, r4, #0\n    bl GameStats_Inc\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_073(void) {
    /* Original at 0x0222E09C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r4, r0, #0\n    add r0, r5, #0\n    bl FrontierScript_ReadVar\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl Save_GameStats_Get\n    add r1, r4, #0\n    add r2, r6, #0\n    bl GameStats_Add\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void FrtCmd_074(void) {
    /* Original at 0x0222E0C8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScriptContext_ReadHalfWord\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl Save_GameStats_Get\n    add r1, r4, #0\n    bl GameStats_AddScore\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_075(void) {
    /* Original at 0x0222E0EC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl sub_0205C298\n    strh r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FrtCmd_113(void) {
    /* Original at 0x0222E10C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl FrontierScript_ReadVarPtr\n    add r4, r0, #0\n    bl sub_020304B4\n    strh r0, [r4]\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_183(void) {
    /* Original at 0x0222E120 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl sub_0202C6F4\n    add r4, r0, #0\n    bl ov00_021E6EBC\n    add r1, r0, #0\n    add r0, r4, #0\n    bl sub_0202C4B0\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_200(void) {
    /* Original at 0x0222E144 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #8]\n    bl sub_020270C4\n    add r0, r4, #0\n    bl FrontierScript_ReadVar\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void FrtCmd_201(void) {
    /* Original at 0x0222E160 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl FrontierScript_ReadVar\n    bl sub_020378E4\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void FrtCmd_203(void) {
    /* Original at 0x0222E170 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FrontierScript_ReadVar\n    add r1, r4, #0\n    add r1, #0x78\n    strh r0, [r1]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl sub_02037AC0\n    ldr r1, _0222E194 ; =ov80_0222E198\n    add r0, r4, #0\n    bl FrontierScriptContext_Pause\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0222E194: .word ov80_0222E198"
    );
    #endif
}

void ov80_0222E198(void) {
    /* Original at 0x0222E198 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_02037454\n    cmp r0, #2\n    bge _0222E1A8\n    mov r4, #1\n    b _0222E1B8\n    add r0, r5, #0\n    add r0, #0x78\n    ldrh r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl sub_02037B38\n    add r4, r0, #0\n    cmp r4, #0\n    bne _0222E210\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Frontier_GetData\n    add r6, r0, #0\n    beq _0222E210\n    add r0, #0x6f\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0222E210\n    add r0, r6, #0\n    add r0, #0x74\n    ldrh r1, [r0]\n    cmp r1, #1\n    beq _0222E1E0\n    ldr r0, _0222E214 ; =0x0000FFFE\n    cmp r1, r0\n    bne _0222E1EA\n    ldr r0, [r5]\n    mov r4, #1\n    add r0, #0x39\n    strb r4, [r0]\n    b _0222E210\n    cmp r1, #0\n    bne _0222E210\n    bl sub_0203769C\n    mov r1, #1\n    eor r0, r1\n    bl sub_02034818\n    bl PlayerProfile_GetVersion\n    cmp r0, #0xc\n    bne _0222E210\n    add r0, r6, #0\n    mov r1, #0\n    add r0, #0x6f\n    strb r1, [r0]\n    add r0, r6, #0\n    bl sub_02096BF8\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _0222E214: .word 0x0000FFFE"
    );
    #endif
}

void FrtCmd_204(void) {
    FrontierScript_ReadVarPtr(1);
}

void FrtCmd_205(void) {
    /* Original at 0x0222E22C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    mov r1, #0\n    add r0, #0x39\n    strb r1, [r0]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void FrtCmd_206(void) {
    ov80_0222F5D0(1);
}

void FrtCmd_207(void) {
    ov80_0222F5EC(1);
}

void ov80_0222E268(void) {
    /* Original at 0x0222E268 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp, #4]\n    ldr r4, [sp, #0x20]\n    bl ov80_0222E2B8\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl ov80_0222E328\n    cmp r4, #0\n    bne _0222E2A2\n    add r0, r5, #0\n    bl FrontierSystem_GetFrontierMap\n    ldr r0, [r0, #8]\n    bl Frontier_GetLaunchArgs\n    ldr r0, [r0, #4]\n    bl Options_GetTextFrameDelay\n    add r2, r0, #0\n    mov r0, #0\n    mov r1, #1\n    b _0222E2A8\n    ldrb r2, [r4]\n    ldrb r0, [r4, #1]\n    ldrb r1, [r4, #2]\n    str r0, [sp]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    bl ov80_0222E344\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222E2B8(void) {
    /* Original at 0x0222E2B8 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    bl FrontierSystem_GetFrontierMap\n    add r1, r4, #0\n    add r1, #0x5a\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _0222E310\n    mov r1, #0x13\n    str r1, [sp]\n    mov r1, #0x1b\n    str r1, [sp, #4]\n    mov r1, #4\n    str r1, [sp, #8]\n    mov r1, #0xd\n    str r1, [sp, #0xc]\n    ldr r1, _0222E320 ; =0x0000036D\n    mov r2, #1\n    str r1, [sp, #0x10]\n    add r1, r4, #0\n    ldr r0, [r0]\n    add r1, #0x64\n    mov r3, #2\n    bl AddWindowParameterized\n    add r0, r4, #0\n    add r0, #0x64\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    ldr r2, _0222E324 ; =0x000003E2\n    add r0, #0x64\n    mov r1, #0\n    mov r3, #0xb\n    bl DrawFrameAndWindow2\n    mov r0, #1\n    add r4, #0x5a\n    add sp, #0x14\n    strb r0, [r4]\n    pop {r3, r4, pc}\n    add r4, #0x64\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _0222E320: .word 0x0000036D\n    _0222E324: .word 0x000003E2"
    );
    #endif
}

void ov80_0222E328(void) {
    /* Original at 0x0222E328 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    ldr r2, [r4, #0x4c]\n    bl ReadMsgDataIntoString\n    ldr r0, [r4, #0x44]\n    ldr r1, [r4, #0x48]\n    ldr r2, [r4, #0x4c]\n    bl StringExpandPlaceholders\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222E344(void) {
    /* Original at 0x0222E344 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r3, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    ldr r0, [sp, #0x20]\n    bl TextFlags_SetAutoScrollParam\n    cmp r4, #0\n    beq _0222E362\n    cmp r4, #0xff\n    bne _0222E36A\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    b _0222E370\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    str r3, [sp, #8]\n    add r0, r5, #0\n    ldr r2, [r5, #0x48]\n    add r0, #0x64\n    add r1, r6, #0\n    bl AddTextPrinterParameterized\n    add r5, #0x50\n    strb r0, [r5]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov80_0222E38C(void) {
    /* Original at 0x0222E38C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x5a\n    ldrb r0, [r0]\n    cmp r0, #1\n    beq _0222E39C\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r0, #0x64\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    add r0, #0x64\n    bl RemoveWindow\n    mov r0, #0\n    add r4, #0x5a\n    strb r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222E3B8(void) {
    /* Original at 0x0222E3B8 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov80_0222E2B8\n    add r3, sp, #8\n    ldrh r0, [r3, #0x14]\n    add r1, r6, #0\n    add r2, r7, #0\n    str r0, [sp]\n    ldrh r3, [r3, #0x10]\n    ldr r0, [r5, #0x48]\n    bl ov80_0222E400\n    add r0, sp, #8\n    ldrb r3, [r0, #0x18]\n    cmp r3, #0xff\n    beq _0222E3F0\n    mov r0, #0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    bl ov80_0222E344\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    str r2, [sp]\n    bl ov80_0222E344\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222E400(void) {
    /* Original at 0x0222E400 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r0, sp, #0\n    add r7, r3, #0\n    bl MailMsg_Init\n    add r0, sp, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl MailMsg_SetMsgBankAndNum\n    add r0, sp, #0\n    mov r1, #0\n    add r2, r7, #0\n    bl MailMsg_SetFieldI\n    add r2, sp, #0x10\n    ldrh r2, [r2, #0x10]\n    add r0, sp, #0\n    mov r1, #1\n    bl MailMsg_SetFieldI\n    add r0, sp, #0\n    mov r1, #0x20\n    bl MailMsg_GetExpandedString\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl String_Copy\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222E450(void) {
    /* Original at 0x0222E450 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    ldr r1, [sp, #0x28]\n    add r7, r0, #0\n    add r4, r2, #0\n    add r5, r3, #0\n    cmp r1, #0\n    bne _0222E47E\n    ldr r3, [r7, #0x34]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xbf\n    bl NewMsgDataFromNarc\n    add r1, r6, #0\n    add r1, #0x8c\n    str r0, [r1]\n    add r0, r6, #0\n    add r0, #0x97\n    ldrb r1, [r0]\n    mov r0, #2\n    orr r1, r0\n    b _0222E48E\n    add r0, r6, #0\n    add r0, #0x8c\n    str r1, [r0]\n    add r0, r6, #0\n    add r0, #0x97\n    ldrb r1, [r0]\n    mov r0, #2\n    bic r1, r0\n    add r0, r6, #0\n    add r0, #0x97\n    strb r1, [r0]\n    add r0, r6, #0\n    ldr r1, [sp, #0x24]\n    add r0, #0x90\n    str r1, [r0]\n    add r0, r6, #0\n    ldr r1, [sp, #0x20]\n    str r7, [r6]\n    add r0, #0xa0\n    str r1, [r0]\n    add r1, r6, #0\n    add r1, #0xa0\n    ldr r1, [r1]\n    mov r0, #0\n    strh r0, [r1]\n    add r1, r6, #0\n    add r1, #0x97\n    ldrb r3, [r1]\n    mov r1, #1\n    bic r3, r1\n    add r1, sp, #8\n    ldrb r2, [r1, #0x14]\n    mov r1, #1\n    and r1, r2\n    add r2, r3, #0\n    orr r2, r1\n    add r1, r6, #0\n    add r1, #0x97\n    strb r2, [r1]\n    add r1, sp, #8\n    add r2, r6, #0\n    ldrb r1, [r1, #0x10]\n    add r2, #0x96\n    mov r3, #3\n    strb r1, [r2]\n    add r2, r6, #0\n    add r2, #0x98\n    strb r4, [r2]\n    add r2, r6, #0\n    add r2, #0x99\n    strb r5, [r2]\n    add r2, r6, #0\n    add r2, #0x9b\n    strb r0, [r2]\n    add r2, r7, #0\n    add r2, #0x64\n    str r2, [r6, #0x18]\n    add r2, r6, #0\n    add r2, #0x94\n    strb r3, [r2]\n    mov r2, #0xb5\n    lsl r2, r2, #2\n    strh r1, [r6, r2]\n    add r3, r6, #0\n    add r2, r0, #0\n    add r1, r3, #0\n    add r1, #0xb4\n    str r2, [r1]\n    add r1, r3, #0\n    add r1, #0xb8\n    add r0, r0, #1\n    add r3, #8\n    str r2, [r1]\n    cmp r0, #0x1c\n    blt _0222E500\n    add r0, r6, #0\n    add r1, r6, #0\n    mov r5, #0\n    mov r4, #0xff\n    mov r3, #0x6f\n    lsl r3, r3, #2\n    str r5, [r0, r3]\n    add r3, r3, #4\n    str r5, [r0, r3]\n    mov r3, #0xa7\n    lsl r3, r3, #2\n    strh r4, [r1, r3]\n    add r2, r2, #1\n    add r0, #8\n    add r1, r1, #2\n    cmp r2, #0x1c\n    blt _0222E51C\n    add r4, r6, #0\n    ldr r1, [r7, #0x34]\n    mov r0, #0x50\n    bl String_New\n    str r0, [r4, #0x1c]\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #0x1c\n    blt _0222E538\n    add r6, #0xa0\n    ldr r1, _0222E554 ; =0x0000EEEE\n    ldr r0, [r6]\n    strh r1, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222E554: .word 0x0000EEEE"
    );
    #endif
}

void ov80_0222E558(void) {
    /* Original at 0x0222E558 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    str r2, [sp, #0x14]\n    add r7, r1, #0\n    mov r1, #0xb6\n    ldr r0, [r5, #0x34]\n    lsl r1, r1, #2\n    add r4, r3, #0\n    bl Heap_Alloc\n    add r6, r0, #0\n    bne _0222E578\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0xb6\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    str r4, [sp]\n    add r0, sp, #0x20\n    ldrb r0, [r0, #0x10]\n    add r1, r6, #0\n    add r2, r7, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x34]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x38]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x3c]\n    str r0, [sp, #0x10]\n    ldr r3, [sp, #0x14]\n    add r0, r5, #0\n    bl ov80_0222E450\n    add r0, r6, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222E5A8(void) {
    ov80_0222E690();
}

void ov80_0222E5B0(void) {
    /* Original at 0x0222E5B0 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl FrontierSystem_GetFrontierMap\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov80_0222E714\n    mov r1, #7\n    tst r1, r0\n    bne _0222E5CE\n    lsr r0, r0, #3\n    b _0222E5D2\n    lsr r0, r0, #3\n    add r0, r0, #1\n    add r1, r5, #0\n    add r1, #0x97\n    ldrb r1, [r1]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1f\n    beq _0222E5EC\n    add r1, r5, #0\n    add r1, #0x98\n    ldrb r1, [r1]\n    sub r2, r1, r0\n    add r1, r5, #0\n    add r1, #0x98\n    strb r2, [r1]\n    add r1, r5, #0\n    add r1, #0x97\n    ldrb r1, [r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    beq _0222E60E\n    add r1, r5, #0\n    add r1, #0x99\n    ldrb r2, [r1]\n    add r1, r5, #0\n    add r1, #0x9b\n    ldrb r1, [r1]\n    lsl r1, r1, #1\n    sub r2, r2, r1\n    add r1, r5, #0\n    add r1, #0x99\n    strb r2, [r1]\n    add r1, r5, #0\n    add r1, #0x99\n    ldrb r1, [r1]\n    lsl r0, r0, #0x18\n    add r3, r5, #0\n    str r1, [sp]\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r1, r5, #0\n    mov r2, #1\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    str r2, [sp, #0x10]\n    add r3, #0x98\n    ldrb r3, [r3]\n    ldr r0, [r4]\n    add r1, #8\n    bl AddWindowParameterized\n    add r0, r5, #0\n    ldr r2, _0222E688 ; =0x000003D9\n    add r0, #8\n    mov r1, #1\n    mov r3, #0xc\n    bl DrawFrameAndWindow1\n    add r0, r5, #0\n    bl ov80_0222E754\n    ldr r2, [r5]\n    add r1, r5, #0\n    add r1, #0x96\n    ldr r2, [r2, #0x34]\n    add r0, r5, #0\n    lsl r2, r2, #0x18\n    ldrb r1, [r1]\n    add r0, #0xa4\n    lsr r2, r2, #0x18\n    bl Create2dMenu\n    add r1, r5, #0\n    add r1, #0xb0\n    str r0, [r1]\n    add r0, r5, #0\n    bl ov80_0222E8FC\n    ldr r0, _0222E68C ; =ov80_0222E7C8\n    add r1, r5, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #4]\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _0222E688: .word 0x000003D9\n    _0222E68C: .word ov80_0222E7C8"
    );
    #endif
}

void ov80_0222E690(void) {
    /* Original at 0x0222E690 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r1, [sp]\n    ldr r1, [r5]\n    mov r0, #0x50\n    ldr r1, [r1, #0x34]\n    add r6, r2, #0\n    add r7, r3, #0\n    bl String_New\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    ldr r1, [sp]\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    add r1, r5, #0\n    add r1, #0x9b\n    ldrb r1, [r1]\n    add r0, r5, #0\n    add r0, #0x90\n    lsl r1, r1, #2\n    add r1, r5, r1\n    ldr r0, [r0]\n    ldr r1, [r1, #0x1c]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r1, [r0]\n    lsl r0, r1, #2\n    add r0, r5, r0\n    lsl r1, r1, #3\n    add r1, r5, r1\n    ldr r0, [r0, #0x1c]\n    add r1, #0xb4\n    str r0, [r1]\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    lsl r0, r0, #1\n    add r1, r5, r0\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    strh r6, [r1, r0]\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    lsl r0, r0, #3\n    add r0, r5, r0\n    add r0, #0xb8\n    str r7, [r0]\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r5, #0x9b\n    add r0, r0, #1\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222E714(void) {
    /* Original at 0x0222E714 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    mov r6, #0\n    add r4, r6, #0\n    cmp r0, #0\n    ble _0222E74C\n    add r5, r7, #0\n    add r0, r5, #0\n    add r0, #0xb4\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _0222E74C\n    mov r0, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    cmp r6, r0\n    bhs _0222E73E\n    add r6, r0, #0\n    add r0, r7, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, r0\n    blt _0222E726\n    add r6, #0xc\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222E754(void) {
    /* Original at 0x0222E754 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r1, r0, #0\n    add r2, #0xb4\n    add r1, #0xa4\n    str r2, [r1]\n    add r2, r0, #0\n    add r1, r0, #0\n    add r2, #8\n    add r1, #0xa8\n    str r2, [r1]\n    add r1, r0, #0\n    mov r2, #0\n    add r1, #0xac\n    strb r2, [r1]\n    add r1, r0, #0\n    mov r2, #1\n    add r1, #0xad\n    strb r2, [r1]\n    add r1, r0, #0\n    add r1, #0x9b\n    ldrb r2, [r1]\n    add r1, r0, #0\n    add r1, #0xae\n    strb r2, [r1]\n    add r2, r0, #0\n    add r2, #0xaf\n    ldrb r3, [r2]\n    mov r2, #0xf\n    add r1, r0, #0\n    bic r3, r2\n    add r2, r0, #0\n    add r2, #0xaf\n    strb r3, [r2]\n    add r2, r0, #0\n    add r2, #0xaf\n    ldrb r3, [r2]\n    mov r2, #0x30\n    add r1, #0xaf\n    bic r3, r2\n    add r2, r0, #0\n    add r2, #0xaf\n    strb r3, [r2]\n    add r0, #0x9b\n    ldrb r0, [r0]\n    ldrb r2, [r1]\n    cmp r0, #4\n    blo _0222E7BE\n    mov r0, #0xc0\n    bic r2, r0\n    mov r0, #0x40\n    orr r0, r2\n    strb r0, [r1]\n    bx lr\n    mov r0, #0xc0\n    bic r2, r0\n    strb r2, [r1]\n    bx lr"
    );
    #endif
}

void ov80_0222E7C8(void) {
    /* Original at 0x0222E7C8 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    add r0, #0x94\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0222E7E4\n    add r0, r5, #0\n    add r0, #0x94\n    ldrb r0, [r0]\n    add r5, #0x94\n    sub r0, r0, #1\n    strb r0, [r5]\n    pop {r3, r4, r5, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0222E87E\n    add r0, r5, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    bl Handle2dMenuInput\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0222E814\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222E814\n    add r0, r5, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    bl Get2dMenuSelection\n    add r4, r0, #0\n    ldr r0, _0222E880 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x4c]\n    tst r1, r0\n    bne _0222E830\n    mov r1, #0x80\n    tst r1, r0\n    bne _0222E830\n    mov r1, #0x20\n    tst r1, r0\n    bne _0222E830\n    mov r1, #0x10\n    tst r0, r1\n    beq _0222E836\n    add r0, r5, #0\n    bl ov80_0222E8FC\n    add r0, r5, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    ldr r1, _0222E884 ; =0x0000EEDD\n    ldrh r2, [r0]\n    cmp r2, r1\n    bne _0222E84C\n    add r0, r5, #0\n    bl ov80_0222E88C\n    pop {r3, r4, r5, pc}\n    mov r1, #1\n    mvn r1, r1\n    cmp r4, r1\n    beq _0222E85C\n    add r1, r1, #1\n    cmp r4, r1\n    beq _0222E87E\n    b _0222E876\n    add r1, r5, #0\n    add r1, #0x97\n    ldrb r1, [r1]\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1f\n    cmp r1, #1\n    bne _0222E87E\n    ldr r1, _0222E888 ; =0x0000FFFE\n    strh r1, [r0]\n    add r0, r5, #0\n    bl ov80_0222E88C\n    pop {r3, r4, r5, pc}\n    strh r4, [r0]\n    add r0, r5, #0\n    bl ov80_0222E88C\n    pop {r3, r4, r5, pc}\n    _0222E880: .word gSystem\n    _0222E884: .word 0x0000EEDD\n    _0222E888: .word 0x0000FFFE"
    );
    #endif
}

void ov80_0222E88C(void) {
    /* Original at 0x0222E88C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _0222E8F8 ; =0x000005DC\n    ldr r7, [r6]\n    bl PlaySE\n    add r0, r6, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    mov r1, #0\n    bl Delete2dMenu\n    add r0, r6, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #0\n    bl sub_0200E5D4\n    add r0, r6, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    bl RemoveWindow\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x1c]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x1c\n    blt _0222E8BE\n    add r0, r6, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0222E8E4\n    add r0, r6, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl DestroyMsgData\n    ldr r0, [r6, #4]\n    bl SysTask_Destroy\n    add r0, r6, #0\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r7, #0x60]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222E8F8: .word 0x000005DC"
    );
    #endif
}

void ov80_0222E8FC(void) {
    /* Original at 0x0222E8FC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    bl Get2dMenuSelection\n    lsl r0, r0, #1\n    add r1, r4, r0\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    ldrh r1, [r1, r0]\n    cmp r1, #0xff\n    beq _0222E91E\n    add r0, r4, #0\n    mov r2, #0\n    bl ov80_0222EE14\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222E920(void) {
    ov80_0222E558();
}

void ov80_0222E940(void) {
    ov80_0222EA74();
}

void ov80_0222E948(void) {
    /* Original at 0x0222E948 */
    /* Requires manual decompilation - 139 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl FrontierSystem_GetFrontierMap\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov80_0222EB14\n    mov r1, #7\n    tst r1, r0\n    bne _0222E966\n    lsr r1, r0, #3\n    b _0222E96A\n    lsr r0, r0, #3\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1f\n    beq _0222E984\n    add r0, r5, #0\n    add r0, #0x98\n    ldrb r0, [r0]\n    sub r2, r0, r1\n    add r0, r5, #0\n    add r0, #0x98\n    strb r2, [r0]\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    cmp r0, #8\n    bls _0222E9D4\n    add r0, r5, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    beq _0222E9A8\n    add r0, r5, #0\n    add r0, #0x99\n    ldrb r2, [r0]\n    add r0, r5, #0\n    add r0, #0x99\n    sub r2, #0x10\n    strb r2, [r0]\n    add r0, r5, #0\n    add r0, #0x99\n    ldrb r0, [r0]\n    add r3, r5, #0\n    mov r2, #1\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    str r2, [sp, #0x10]\n    add r3, #0x98\n    add r1, r5, #0\n    ldrb r3, [r3]\n    ldr r0, [r4]\n    add r1, #8\n    bl AddWindowParameterized\n    b _0222EA22\n    add r2, r5, #0\n    add r2, #0x97\n    ldrb r2, [r2]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x1f\n    beq _0222E9F0\n    add r2, r5, #0\n    add r2, #0x99\n    ldrb r2, [r2]\n    lsl r0, r0, #1\n    sub r2, r2, r0\n    add r0, r5, #0\n    add r0, #0x99\n    strb r2, [r0]\n    add r0, r5, #0\n    add r0, #0x99\n    ldrb r0, [r0]\n    add r3, r5, #0\n    mov r2, #1\n    str r0, [sp]\n    lsl r0, r1, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r1, r5, #0\n    add r3, #0x98\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    str r2, [sp, #0x10]\n    ldrb r3, [r3]\n    ldr r0, [r4]\n    add r1, #8\n    bl AddWindowParameterized\n    add r0, r5, #0\n    ldr r2, _0222EA6C ; =0x000003D9\n    add r0, #8\n    mov r1, #1\n    mov r3, #0xc\n    bl DrawFrameAndWindow1\n    add r0, r5, #0\n    bl ov80_0222EB54\n    ldr r3, [r5]\n    add r2, r5, #0\n    add r2, #0x96\n    ldr r3, [r3, #0x34]\n    mov r0, #0x65\n    lsl r0, r0, #2\n    lsl r3, r3, #0x18\n    ldrb r2, [r2]\n    add r0, r5, r0\n    mov r1, #0\n    lsr r3, r3, #0x18\n    bl ListMenuInit\n    mov r1, #0x6d\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov80_0222EE7C\n    ldr r0, _0222EA70 ; =ov80_0222EC90\n    add r1, r5, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #4]\n    add sp, #0x14\n    pop {r4, r5, pc}\n    _0222EA6C: .word 0x000003D9\n    _0222EA70: .word ov80_0222EC90"
    );
    #endif
}

void ov80_0222EA74(void) {
    /* Original at 0x0222EA74 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r1, [sp]\n    ldr r1, [r5]\n    mov r0, #0x50\n    ldr r1, [r1, #0x34]\n    add r7, r2, #0\n    add r4, r3, #0\n    bl String_New\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    ldr r1, [sp]\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    add r1, r5, #0\n    add r1, #0x9b\n    ldrb r1, [r1]\n    add r0, r5, #0\n    add r0, #0x90\n    lsl r1, r1, #2\n    add r1, r5, r1\n    ldr r0, [r0]\n    ldr r1, [r1, #0x1c]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r1, [r0]\n    lsl r0, r1, #2\n    add r0, r5, r0\n    lsl r1, r1, #3\n    add r2, r5, r1\n    mov r1, #0x6f\n    ldr r0, [r0, #0x1c]\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    add r0, r6, #0\n    bl String_Delete\n    cmp r4, #0xfa\n    bne _0222EAE6\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    mov r2, #2\n    mvn r2, r2\n    lsl r0, r0, #3\n    add r1, r5, r0\n    mov r0, #7\n    lsl r0, r0, #6\n    str r2, [r1, r0]\n    b _0222EAF6\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    lsl r0, r0, #3\n    add r1, r5, r0\n    mov r0, #7\n    lsl r0, r0, #6\n    str r4, [r1, r0]\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    lsl r0, r0, #1\n    add r1, r5, r0\n    mov r0, #0xa7\n    lsl r0, r0, #2\n    strh r7, [r1, r0]\n    add r0, r5, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r5, #0x9b\n    add r0, r0, #1\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222EB14(void) {
    /* Original at 0x0222EB14 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    mov r6, #0\n    add r4, r6, #0\n    cmp r0, #0\n    ble _0222EB4C\n    add r5, r7, #0\n    mov r0, #0x6f\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    cmp r1, #0\n    beq _0222EB4C\n    mov r0, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    cmp r6, r0\n    bhs _0222EB3E\n    add r6, r0, #0\n    add r0, r7, #0\n    add r0, #0x9b\n    ldrb r0, [r0]\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, r0\n    blt _0222EB26\n    add r6, #0xc\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222EB54(void) {
    /* Original at 0x0222EB54 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r3, #0x6f\n    lsl r3, r3, #2\n    add r1, r3, #0\n    add r2, r0, r3\n    sub r1, #0x28\n    str r2, [r0, r1]\n    add r1, r3, #0\n    ldr r2, _0222EC4C ; =ov80_0222EC84\n    sub r1, #0x24\n    str r2, [r0, r1]\n    add r1, r3, #0\n    ldr r2, _0222EC50 ; =ov80_0222EC60\n    sub r1, #0x20\n    str r2, [r0, r1]\n    add r2, r0, #0\n    add r1, r3, #0\n    add r2, #8\n    sub r1, #0x1c\n    str r2, [r0, r1]\n    add r1, r0, #0\n    add r1, #0x9b\n    ldrb r2, [r1]\n    add r1, r3, #0\n    sub r1, #0x18\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    mov r2, #8\n    sub r1, #0x16\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    mov r2, #1\n    sub r1, #0x14\n    strb r2, [r0, r1]\n    add r1, r3, #0\n    mov r4, #0xc\n    sub r1, #0x13\n    strb r4, [r0, r1]\n    add r1, r3, #0\n    mov r4, #2\n    sub r1, #0x12\n    strb r4, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0x11\n    ldrb r4, [r0, r1]\n    mov r1, #0xf\n    bic r4, r1\n    orr r4, r2\n    add r2, r3, #0\n    sub r2, #0x11\n    strb r4, [r0, r2]\n    add r2, r3, #0\n    sub r2, #0x11\n    ldrb r5, [r0, r2]\n    mov r2, #0xf0\n    mov r4, #0x10\n    bic r5, r2\n    orr r5, r4\n    add r4, r3, #0\n    sub r4, #0x11\n    strb r5, [r0, r4]\n    add r4, r3, #0\n    sub r4, #0x10\n    ldrb r4, [r0, r4]\n    bic r4, r1\n    mov r1, #0xf\n    orr r4, r1\n    add r1, r3, #0\n    sub r1, #0x10\n    strb r4, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0x10\n    ldrb r4, [r0, r1]\n    mov r1, #0x20\n    bic r4, r2\n    add r2, r4, #0\n    orr r2, r1\n    add r1, r3, #0\n    sub r1, #0x10\n    strb r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0xe\n    ldrh r2, [r0, r1]\n    mov r1, #7\n    bic r2, r1\n    add r1, r3, #0\n    sub r1, #0xe\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0xe\n    ldrh r2, [r0, r1]\n    mov r1, #0x78\n    bic r2, r1\n    add r1, r3, #0\n    sub r1, #0xe\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0xe\n    ldrh r2, [r0, r1]\n    ldr r1, _0222EC54 ; =0xFFFFFE7F\n    and r2, r1\n    add r1, r3, #0\n    sub r1, #0xe\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0xe\n    ldrh r2, [r0, r1]\n    ldr r1, _0222EC58 ; =0xFFFF81FF\n    and r2, r1\n    add r1, r3, #0\n    sub r1, #0xe\n    strh r2, [r0, r1]\n    add r1, r3, #0\n    sub r1, #0xe\n    ldrh r2, [r0, r1]\n    ldr r1, _0222EC5C ; =0xFFFF7FFF\n    and r2, r1\n    add r1, r3, #0\n    sub r1, #0xe\n    strh r2, [r0, r1]\n    sub r3, #0xc\n    str r0, [r0, r3]\n    pop {r4, r5}\n    bx lr\n    _0222EC4C: .word ov80_0222EC84\n    _0222EC50: .word ov80_0222EC60\n    _0222EC54: .word 0xFFFFFE7F\n    _0222EC58: .word 0xFFFF81FF\n    _0222EC5C: .word 0xFFFF7FFF"
    );
    #endif
}

void ov80_0222EC60(void) {
    /* Original at 0x0222EC60 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r2, #2\n    mvn r2, r2\n    cmp r1, r2\n    bne _0222EC76\n    mov r1, #3\n    mov r2, #0xf\n    mov r3, #4\n    bl ListMenuOverrideSetColors\n    pop {r3, pc}\n    mov r1, #1\n    mov r2, #0xf\n    mov r3, #2\n    bl ListMenuOverrideSetColors\n    pop {r3, pc}"
    );
    #endif
}

void ov80_0222EC84(void) {
    ListMenuGetTemplateField();
}

void ov80_0222EC90(void) {
    /* Original at 0x0222EC90 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    add r0, #0x94\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0222ECAC\n    add r0, r5, #0\n    add r0, #0x94\n    ldrb r0, [r0]\n    add r5, #0x94\n    sub r0, r0, #1\n    strb r0, [r5]\n    pop {r4, r5, r6, pc}\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0222ED8C\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ListMenu_ProcessInput\n    add r4, r0, #0\n    mov r0, #0x6d\n    mov r1, #0xb5\n    lsl r0, r0, #2\n    lsl r1, r1, #2\n    ldrh r6, [r5, r1]\n    ldr r0, [r5, r0]\n    add r1, r5, r1\n    bl ListMenuGetCurrentItemArrayId\n    mov r0, #0xb5\n    lsl r0, r0, #2\n    ldrh r0, [r5, r0]\n    cmp r6, r0\n    beq _0222ECE2\n    ldr r0, _0222ED90 ; =0x000005DC\n    bl PlaySE\n    ldr r0, _0222ED94 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x4c]\n    tst r1, r0\n    bne _0222ECFE\n    mov r1, #0x80\n    tst r1, r0\n    bne _0222ECFE\n    mov r1, #0x20\n    tst r1, r0\n    bne _0222ECFE\n    mov r1, #0x10\n    tst r0, r1\n    beq _0222ED04\n    add r0, r5, #0\n    bl ov80_0222EE7C\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0222ED26\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0222ED26\n    mov r1, #0xb5\n    mov r0, #0x6d\n    lsl r1, r1, #2\n    lsl r0, r0, #2\n    ldrh r1, [r5, r1]\n    ldr r0, [r5, r0]\n    bl ListMenuGetValueByArrayId\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    ldrh r1, [r0]\n    ldr r0, _0222ED98 ; =0x0000EEDD\n    cmp r1, r0\n    bne _0222ED3E\n    add r0, r5, #0\n    mov r1, #0\n    bl ov80_0222EDA0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _0222ED4E\n    add r0, r0, #1\n    cmp r4, r0\n    beq _0222ED8C\n    b _0222ED76\n    add r0, r5, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0222ED8C\n    ldr r0, _0222ED90 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    add r0, #0xa0\n    ldr r1, _0222ED9C ; =0x0000FFFE\n    ldr r0, [r0]\n    strh r1, [r0]\n    add r0, r5, #0\n    mov r1, #1\n    bl ov80_0222EDA0\n    pop {r4, r5, r6, pc}\n    ldr r0, _0222ED90 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    add r0, #0xa0\n    ldr r0, [r0]\n    mov r1, #1\n    strh r4, [r0]\n    add r0, r5, #0\n    bl ov80_0222EDA0\n    pop {r4, r5, r6, pc}\n    nop\n    _0222ED90: .word 0x000005DC\n    _0222ED94: .word gSystem\n    _0222ED98: .word 0x0000EEDD\n    _0222ED9C: .word 0x0000FFFE"
    );
    #endif
}

void ov80_0222EDA0(void) {
    /* Original at 0x0222EDA0 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r7, [r6]\n    cmp r1, #1\n    bne _0222EDB0\n    ldr r0, _0222EE10 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x6d\n    lsl r0, r0, #2\n    mov r1, #0\n    ldr r0, [r6, r0]\n    add r2, r1, #0\n    bl DestroyListMenu\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl sub_0200E5D4\n    add r0, r6, #0\n    add r0, #8\n    bl RemoveWindow\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, #0x1c]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x1c\n    blt _0222EDD6\n    add r0, r6, #0\n    add r0, #0x97\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1e\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bne _0222EDFC\n    add r0, r6, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    bl DestroyMsgData\n    ldr r0, [r6, #4]\n    bl SysTask_Destroy\n    add r0, r6, #0\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r7, #0x60]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222EE10: .word 0x000005DC"
    );
    #endif
}

void ov80_0222EE14(void) {
    /* Original at 0x0222EE14 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    str r1, [sp, #0xc]\n    ldr r1, [r5]\n    mov r0, #0x50\n    ldr r1, [r1, #0x34]\n    add r7, r2, #0\n    bl String_New\n    ldr r1, [r5]\n    add r4, r0, #0\n    ldr r1, [r1, #0x34]\n    mov r0, #0x50\n    bl String_New\n    add r6, r0, #0\n    ldr r0, [r5, #0x18]\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x8c\n    ldr r0, [r0]\n    ldr r1, [sp, #0xc]\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    add r0, r5, #0\n    add r0, #0x90\n    ldr r0, [r0]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    mov r3, #0\n    str r3, [sp]\n    str r7, [sp, #4]\n    str r3, [sp, #8]\n    ldr r0, [r5, #0x18]\n    mov r1, #1\n    add r2, r6, #0\n    bl AddTextPrinterParameterized\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_0222EE7C(void) {
    /* Original at 0x0222EE7C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x6d\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, r1, #6\n    add r1, r4, r1\n    bl ListMenuGetCurrentItemArrayId\n    ldr r0, _0222EEA8 ; =0x000001BA\n    ldrh r1, [r4, r0]\n    add r0, #0xe2\n    lsl r1, r1, #1\n    add r1, r4, r1\n    ldrh r1, [r1, r0]\n    cmp r1, #0xff\n    beq _0222EEA6\n    add r0, r4, #0\n    mov r2, #0\n    bl ov80_0222EE14\n    pop {r4, pc}\n    _0222EEA8: .word 0x000001BA"
    );
    #endif
}

void ov80_0222EEAC(void) {
    ov80_0222EDA0(0);
}

void ov80_0222EEC8(void) {
    /* Original at 0x0222EEC8 */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r7, r0, #0\n    ldr r0, [r5, #0xc]\n    ldrh r4, [r0]\n    ldrh r6, [r0, #2]\n    ldrb r0, [r5]\n    cmp r0, #0\n    beq _0222EEE8\n    cmp r0, #1\n    beq _0222EEF6\n    cmp r0, #2\n    beq _0222EF9A\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0222EFC8 ; =0x0000FD13\n    cmp r4, r0\n    bne _0222EEF6\n    mov r0, #2\n    add sp, #8\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x14]\n    mov r1, #5\n    ldr r0, [r0]\n    bl ov42_02228188\n    cmp r0, #0\n    bne _0222EFC2\n    cmp r4, #0x20\n    blo _0222EF2E\n    cmp r4, #0x26\n    bhi _0222EF2E\n    mov r0, #2\n    ldrsh r1, [r5, r0]\n    sub r4, #0x20\n    add r1, r1, #1\n    strh r1, [r5, #2]\n    ldrsh r1, [r5, r0]\n    ldr r0, _0222EFCC ; =ov80_0223BD44\n    ldrb r0, [r0, r4]\n    cmp r1, r0\n    blt _0222EFC2\n    mov r0, #0\n    strh r0, [r5, #2]\n    ldr r0, [r5, #0xc]\n    add sp, #8\n    add r0, r0, #4\n    str r0, [r5, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r4, #0x27\n    blo _0222EF66\n    cmp r4, #0x29\n    bhs _0222EF66\n    cmp r4, #0x27\n    beq _0222EF40\n    cmp r4, #0x28\n    beq _0222EF4C\n    b _0222EF58\n    ldr r0, [r5, #0x14]\n    mov r1, #1\n    ldr r0, [r0, #4]\n    bl ov42_02229200\n    b _0222EF5C\n    ldr r0, [r5, #0x14]\n    mov r1, #0\n    ldr r0, [r0, #4]\n    bl ov42_02229200\n    b _0222EF5C\n    bl GF_AssertFail\n    ldr r0, [r5, #0xc]\n    add sp, #8\n    add r0, r0, #4\n    str r0, [r5, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r5, #0x14]\n    ldrh r2, [r5, #4]\n    ldr r1, [r1]\n    add r0, sp, #0\n    add r3, r4, #0\n    bl ov80_0222EFD0\n    ldr r0, [r5, #0x10]\n    add r1, sp, #0\n    bl ov42_022299C0\n    ldrb r0, [r5, #1]\n    add r0, r0, #1\n    strb r0, [r5, #1]\n    ldrb r0, [r5, #1]\n    cmp r0, r6\n    blt _0222EF92\n    mov r0, #0\n    strb r0, [r5, #1]\n    ldr r0, [r5, #0xc]\n    add r0, r0, #4\n    str r0, [r5, #0xc]\n    mov r0, #0\n    add sp, #8\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x14]\n    mov r1, #5\n    ldr r0, [r0]\n    bl ov42_02228188\n    cmp r0, #0\n    bne _0222EFC2\n    ldr r1, [r5, #8]\n    ldrb r0, [r1]\n    sub r0, r0, #1\n    strb r0, [r1]\n    ldr r0, [r5, #0x14]\n    mov r1, #0\n    str r1, [r0, #0x38]\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r7, #0\n    bl SysTask_Destroy\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222EFC8: .word 0x0000FD13\n    _0222EFCC: .word ov80_0223BD44"
    );
    #endif
}

void ov80_0222EFD0(void) {
    /* Original at 0x0222EFD0 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    strb r2, [r4, #7]\n    ldr r0, _0222F028 ; =ov80_0223DC22\n    lsl r2, r3, #2\n    ldrh r0, [r0, r2]\n    strb r0, [r4, #6]\n    ldr r0, _0222F02C ; =_0223DC20\n    ldrh r0, [r0, r2]\n    strh r0, [r4, #4]\n    cmp r0, #2\n    beq _0222EFF2\n    cmp r0, #3\n    beq _0222EFF2\n    cmp r0, #6\n    bne _0222F00C\n    add r0, r1, #0\n    bl ov42_022282E8\n    add r1, sp, #0\n    strh r0, [r1, #4]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #6]\n    ldrh r0, [r1, #4]\n    add sp, #8\n    strh r0, [r4]\n    ldrh r0, [r1, #6]\n    strh r0, [r4, #2]\n    pop {r4, pc}\n    add r0, r1, #0\n    bl ov42_022282DC\n    add r1, sp, #0\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r4]\n    ldrh r0, [r1, #2]\n    strh r0, [r4, #2]\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0222F028: .word ov80_0223DC22\n    _0222F02C: .word _0223DC20"
    );
    #endif
}

void ov80_0222F030(void) {
    /* Original at 0x0222F030 */
    /* Requires manual decompilation - 184 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x7c\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    str r1, [sp, #0x20]\n    str r0, [sp, #0x2c]\n    ldr r7, [r5, #0x34]\n    ldr r6, [r5, #0x38]\n    mov r0, #8\n    add r1, r2, #0\n    str r2, [sp, #0x24]\n    add r4, r3, #0\n    bl NARC_New\n    str r0, [sp, #0x30]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x30]\n    add r0, r7, #0\n    add r1, r6, #0\n    mov r3, #0x70\n    str r4, [sp, #8]\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    ldr r0, [sp, #0x30]\n    mov r1, #2\n    str r0, [sp]\n    mov r0, #0x6f\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x2c]\n    add r2, r7, #0\n    add r3, r6, #0\n    str r4, [sp, #0x14]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r2, [sp, #0x30]\n    add r0, r7, #0\n    add r1, r6, #0\n    mov r3, #0x71\n    str r4, [sp, #4]\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r2, [sp, #0x30]\n    add r0, r7, #0\n    add r1, r6, #0\n    mov r3, #0x72\n    str r4, [sp, #4]\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    ldr r0, [sp, #0x30]\n    bl NARC_Delete\n    add r0, sp, #0x38\n    mov r1, #0\n    mov r2, #0x34\n    bl MI_CpuFill8\n    ldr r0, [sp, #0x90]\n    add r1, sp, #0x38\n    strh r0, [r1]\n    ldr r0, [sp, #0x94]\n    strh r0, [r1, #2]\n    mov r0, #0\n    strh r0, [r1, #4]\n    strh r0, [r1, #6]\n    ldr r1, [sp, #0x98]\n    str r0, [sp, #0x44]\n    str r1, [sp, #0x40]\n    mov r1, #1\n    str r1, [sp, #0x48]\n    ldr r1, [sp, #0x9c]\n    str r0, [sp, #0x68]\n    str r1, [sp, #0x64]\n    add r1, sp, #0x38\n    add r0, r0, #1\n    str r4, [r1, #0x14]\n    add r1, r1, #4\n    cmp r0, #6\n    blt _0222F0DA\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, sp, #0x38\n    bl SpriteSystem_NewSprite\n    add r6, r0, #0\n    bl ManagedSprite_TickFrame\n    mov r1, #0x32\n    ldr r0, [sp, #0x24]\n    lsl r1, r1, #6\n    bl Heap_Alloc\n    str r0, [sp, #0x28]\n    mov r1, #0\n    ldr r0, [sp, #0x20]\n    add r2, r1, #0\n    bl GetMonData\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x20]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    add r7, r0, #0\n    ldr r1, [sp, #0x20]\n    add r0, sp, #0x6c\n    mov r2, #2\n    bl GetPokemonSpriteCharAndPlttNarcIds\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x28]\n    add r1, sp, #0x38\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x34]\n    ldr r2, [sp, #0x24]\n    str r0, [sp, #0x10]\n    str r3, [sp, #0x14]\n    mov r0, #2\n    str r0, [sp, #0x18]\n    str r7, [sp, #0x1c]\n    ldrh r0, [r1, #0x34]\n    ldrh r1, [r1, #0x36]\n    bl sub_02014494\n    ldr r0, [r6]\n    bl Sprite_GetImageProxy\n    add r7, r0, #0\n    ldr r0, [sp, #0x28]\n    mov r1, #4\n    bl DC_FlushRange\n    mov r2, #0x32\n    ldr r0, [sp, #0x28]\n    ldr r1, [r7, #4]\n    lsl r2, r2, #6\n    bl GX_LoadOBJ\n    ldr r0, [r6]\n    bl Sprite_GetPaletteProxy\n    mov r1, #1\n    bl ObjPlttTransfer_GetPaletteVramOffset\n    lsl r7, r0, #4\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    add r2, sp, #0x38\n    ldrh r1, [r2, #0x34]\n    ldrh r2, [r2, #0x38]\n    ldr r0, [sp, #0x2c]\n    ldr r3, [sp, #0x24]\n    bl PaletteData_LoadNarc\n    ldr r0, [sp, #0xa0]\n    cmp r0, #0\n    ble _0222F1AE\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r0, sp, #0x80\n    ldrh r0, [r0, #0x24]\n    lsl r2, r7, #0x10\n    mov r1, #2\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    lsr r2, r2, #0x10\n    mov r3, #0x10\n    bl PaletteData_BlendPalette\n    ldr r0, [sp, #0x28]\n    bl Heap_Free\n    ldr r0, _0222F1CC ; =0x0000C350\n    add r5, #0x80\n    sub r0, r4, r0\n    lsl r4, r0, #2\n    ldr r0, [r5, r4]\n    cmp r0, #0\n    beq _0222F1C6\n    bl GF_AssertFail\n    str r6, [r5, r4]\n    add sp, #0x7c\n    pop {r4, r5, r6, r7, pc}\n    _0222F1CC: .word 0x0000C350"
    );
    #endif
}

void ov80_0222F1D0(void) {
    /* Original at 0x0222F1D0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0222F20C ; =0x0000C350\n    add r6, r1, #0\n    add r4, r5, #0\n    sub r0, r6, r0\n    add r4, #0x80\n    lsl r7, r0, #2\n    ldr r0, [r4, r7]\n    bl Sprite_DeleteAndFreeResources\n    mov r0, #0\n    str r0, [r4, r7]\n    ldr r0, [r5, #0x38]\n    add r1, r6, #0\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, [r5, #0x38]\n    add r1, r6, #0\n    bl SpriteManager_UnloadPlttObjById\n    ldr r0, [r5, #0x38]\n    add r1, r6, #0\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, [r5, #0x38]\n    add r1, r6, #0\n    bl SpriteManager_UnloadAnimObjById\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222F20C: .word 0x0000C350"
    );
    #endif
}

void ov80_0222F210(void) {
    /* Original at 0x0222F210 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    bl sub_02074490\n    mov r1, #0x14\n    str r1, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #3\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    str r0, [sp, #0x14]\n    ldr r0, [r4, #4]\n    ldr r2, [r4, #0x34]\n    ldr r3, [r4, #0x38]\n    mov r1, #2\n    bl SpriteSystem_LoadPaletteBuffer\n    bl sub_02074498\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x34]\n    ldr r1, [r4, #0x38]\n    mov r2, #0x14\n    bl SpriteSystem_LoadCellResObj\n    bl sub_020744A4\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x34]\n    ldr r1, [r4, #0x38]\n    mov r2, #0x14\n    bl SpriteSystem_LoadAnimResObj\n    add sp, #0x18\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222F278(void) {
    /* Original at 0x0222F278 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0x7d\n    ldr r0, [r4, #0x38]\n    lsl r1, r1, #4\n    bl SpriteManager_UnloadCellObjById\n    mov r1, #0x7d\n    ldr r0, [r4, #0x38]\n    lsl r1, r1, #4\n    bl SpriteManager_UnloadAnimObjById\n    mov r1, #0x7d\n    ldr r0, [r4, #0x38]\n    lsl r1, r1, #4\n    bl SpriteManager_UnloadPlttObjById\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222F29C(void) {
    /* Original at 0x0222F29C */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    add r4, r2, #0\n    add r5, r0, #0\n    add r7, r1, #0\n    str r3, [sp, #0xc]\n    cmp r4, #8\n    blt _0222F2B0\n    bl GF_AssertFail\n    add r0, r7, #0\n    bl Pokemon_GetIconNaix\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    add r0, r4, r0\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x34]\n    ldr r1, [r5, #0x38]\n    mov r2, #0x14\n    bl SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType\n    ldr r6, _0222F320 ; =ov80_0223BD80\n    add r3, sp, #0x10\n    mov r2, #6\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0222F2D8\n    ldr r0, [r6]\n    add r1, sp, #0x10\n    str r0, [r3]\n    ldr r0, [sp, #0x24]\n    add r2, sp, #0x10\n    add r0, r0, r4\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0xc]\n    strh r0, [r1]\n    ldr r0, [sp, #0x58]\n    strh r0, [r1, #2]\n    mov r0, #0xc8\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0x34]\n    ldr r1, [r5, #0x38]\n    bl SpriteSystem_NewSprite\n    add r4, r0, #0\n    add r0, r7, #0\n    bl Pokemon_GetIconPalette\n    add r1, r0, #0\n    ldr r0, [r4]\n    bl Sprite_SetPalOffsetRespectVramOffset\n    add r0, r4, #0\n    bl ManagedSprite_TickFrame\n    add r0, r4, #0\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222F320: .word ov80_0223BD80"
    );
    #endif
}

void ov80_0222F324(void) {
    /* Original at 0x0222F324 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r1, #0x7d\n    lsl r1, r1, #4\n    ldr r0, [r0, #0x38]\n    add r1, r2, r1\n    bl SpriteManager_UnloadCharObjById\n    add r0, r4, #0\n    bl Sprite_DeleteAndFreeResources\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222F33C(void) {
    /* Original at 0x0222F33C */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #0x15\n    mov r1, #0x65\n    bl NARC_New\n    add r4, r0, #0\n    bl sub_0207CAA0\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, _0222F3C4 ; =0x000007D1\n    mov r1, #2\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #4]\n    ldr r2, [r5, #0x34]\n    ldr r3, [r5, #0x38]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    bl sub_0207CAA4\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0222F3C4 ; =0x000007D1\n    add r2, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x34]\n    ldr r1, [r5, #0x38]\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    bl sub_0207CAA8\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0222F3C4 ; =0x000007D1\n    add r2, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x34]\n    ldr r1, [r5, #0x38]\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    bl sub_0207CA9C\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0222F3C8 ; =0x000007D9\n    mov r2, #0x15\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x34]\n    ldr r1, [r5, #0x38]\n    bl SpriteSystem_LoadCharResObjAtEndWithHardwareMappingType\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    _0222F3C4: .word 0x000007D1\n    _0222F3C8: .word 0x000007D9"
    );
    #endif
}

void ov80_0222F3CC(void) {
    /* Original at 0x0222F3CC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x38]\n    ldr r1, _0222F3F4 ; =0x000007D9\n    bl SpriteManager_UnloadCharObjById\n    ldr r0, [r4, #0x38]\n    ldr r1, _0222F3F8 ; =0x000007D1\n    bl SpriteManager_UnloadCellObjById\n    ldr r0, [r4, #0x38]\n    ldr r1, _0222F3F8 ; =0x000007D1\n    bl SpriteManager_UnloadAnimObjById\n    ldr r0, [r4, #0x38]\n    ldr r1, _0222F3F8 ; =0x000007D1\n    bl SpriteManager_UnloadPlttObjById\n    pop {r4, pc}\n    nop\n    _0222F3F4: .word 0x000007D9\n    _0222F3F8: .word 0x000007D1"
    );
    #endif
}

void ov80_0222F3FC(void) {
    /* Original at 0x0222F3FC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    ldr r5, _0222F43C ; =ov80_0223BD4C\n    add r6, r2, #0\n    add r3, r0, #0\n    add r7, r1, #0\n    add r4, sp, #0\n    mov r2, #6\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    sub r2, r2, #1\n    bne _0222F40C\n    ldr r0, [r5]\n    add r2, sp, #0\n    str r0, [r4]\n    add r0, sp, #0\n    strh r7, [r0]\n    strh r6, [r0, #2]\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    str r0, [sp, #8]\n    ldr r0, [r3, #0x34]\n    ldr r1, [r3, #0x38]\n    bl SpriteSystem_NewSprite\n    add r4, r0, #0\n    bl ManagedSprite_TickFrame\n    add r0, r4, #0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222F43C: .word ov80_0223BD4C"
    );
    #endif
}

void ov80_0222F440(void) {
    Sprite_DeleteAndFreeResources();
}

void ov80_0222F44C(void) {
    ov80_0222F458();
}

void ov80_0222F458(void) {
    /* Original at 0x0222F458 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r6, r2, #0\n    bl Frontier_GetLaunchArgs\n    ldrh r2, [r4]\n    ldr r1, _0222F4C8 ; =0x0000FFFF\n    cmp r2, r1\n    bne _0222F498\n    mov r0, #1\n    mov r1, #0x1b\n    add r2, r6, #0\n    mov r3, #0x20\n    bl NewMsgDataFromNarc\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldrh r2, [r4, #2]\n    ldr r0, [r5]\n    add r1, r6, #0\n    mov r3, #1\n    bl ov80_0222E268\n    add r0, r6, #0\n    bl DestroyMsgData\n    b _0222F4BC\n    ldr r0, [r0, #8]\n    bl Save_PlayerData_GetOptionsAddr\n    bl Options_GetTextFrameDelay\n    add r1, r0, #0\n    ldrh r0, [r4, #4]\n    str r0, [sp]\n    mov r0, #6\n    ldrsh r0, [r4, r0]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldrh r2, [r4]\n    ldrh r3, [r4, #2]\n    ldr r0, [r5]\n    bl ov80_0222E3B8\n    ldr r1, _0222F4CC ; =ov80_0222F4D0\n    add r0, r5, #0\n    bl FrontierScriptContext_Pause\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _0222F4C8: .word 0x0000FFFF\n    _0222F4CC: .word ov80_0222F4D0"
    );
    #endif
}

void ov80_0222F4D0(void) {
    /* Original at 0x0222F4D0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0]\n    add r0, #0x50\n    ldrb r0, [r0]\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0222F4EA\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov80_0222F4F0(void) {
    /* Original at 0x0222F4F0 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    mov r1, #8\n    ldrsb r2, [r4, r1]\n    add r2, r2, #1\n    strb r2, [r4, #8]\n    ldrsb r2, [r4, r1]\n    mov r1, #9\n    ldrsb r1, [r4, r1]\n    cmp r2, r1\n    ble _0222F538\n    mov r1, #0\n    strb r1, [r4, #8]\n    mov r1, #0xa\n    ldrsb r2, [r4, r1]\n    sub r2, r2, #1\n    strb r2, [r4, #0xa]\n    ldrsb r1, [r4, r1]\n    cmp r1, #0\n    bge _0222F528\n    bl SysTask_Destroy\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xc\n    bl MI_CpuFill8\n    pop {r4, pc}\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    neg r0, r0\n    strh r0, [r4, #4]\n    mov r0, #6\n    ldrsh r0, [r4, r0]\n    neg r0, r0\n    strh r0, [r4, #6]\n    pop {r4, pc}"
    );
    #endif
}

void ov80_0222F53C(void) {
    /* Original at 0x0222F53C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    mov r1, #8\n    add r7, r0, #0\n    ldrsh r0, [r4, r1]\n    cmp r0, #0\n    bgt _0222F5C2\n    mov r0, #0xa\n    ldrsb r0, [r4, r0]\n    cmp r0, #1\n    bne _0222F5A6\n    ldr r2, _0222F5C8 ; =0x04000048\n    mov r1, #0x3f\n    ldrh r3, [r2]\n    mov r0, #0xf\n    mov r5, #0x20\n    bic r3, r1\n    orr r0, r3\n    orr r0, r5\n    strh r0, [r2]\n    ldrh r3, [r2, #2]\n    mov r0, #0x1f\n    bic r3, r1\n    orr r0, r3\n    orr r0, r5\n    strh r0, [r2, #2]\n    ldrb r3, [r4, #4]\n    ldrb r1, [r4, #7]\n    ldrb r0, [r4, #5]\n    lsl r6, r3, #8\n    mov r3, #0xff\n    lsl r3, r3, #8\n    and r6, r3\n    ldrb r3, [r4, #6]\n    orr r6, r3\n    add r3, r2, #0\n    sub r3, #8\n    strh r6, [r3]\n    lsl r3, r0, #8\n    mov r0, #0xff\n    lsl r0, r0, #8\n    and r0, r3\n    orr r1, r0\n    sub r0, r2, #4\n    strh r1, [r0]\n    lsl r2, r5, #0x15\n    ldr r1, [r2]\n    ldr r0, _0222F5CC ; =0xFFFF1FFF\n    and r1, r0\n    lsl r0, r5, #8\n    orr r0, r1\n    str r0, [r2]\n    b _0222F5B0\n    lsl r2, r1, #0x17\n    ldr r1, [r2]\n    ldr r0, _0222F5CC ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    add r0, r7, #0\n    bl SysTask_Destroy\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0xc\n    bl MI_CpuFill8\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, r0, #1\n    strh r0, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222F5C8: .word 0x04000048\n    _0222F5CC: .word 0xFFFF1FFF"
    );
    #endif
}

void ov80_0222F5D0(void) {
    /* Original at 0x0222F5D0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x97\n    ldrb r3, [r2]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r2, #0x40\n    lsl r1, r1, #0x1f\n    bic r3, r2\n    lsr r1, r1, #0x19\n    orr r1, r3\n    add r0, #0x97\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void ov80_0222F5EC(void) {
    /* Original at 0x0222F5EC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x97\n    ldrb r3, [r2]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    mov r2, #0x80\n    lsl r1, r1, #0x1f\n    bic r3, r2\n    lsr r1, r1, #0x18\n    orr r1, r3\n    add r0, #0x97\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}
