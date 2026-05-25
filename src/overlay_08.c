/* Decompiled from asm/overlay_08.s */
#include "global.h"

void ov08_0221BE20(void) {
    /* Original at 0x0221BE20 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x11]\n    cmp r0, #5\n    bls _0221BE2E\n    mov r0, #0\n    strb r0, [r5, #0x11]\n    ldr r0, _0221BE88 ; =ov08_0221BE98\n    ldr r1, _0221BE8C ; =0x00002090\n    ldr r3, [r5, #0xc]\n    mov r2, #0\n    bl CreateSysTaskAndEnvironment\n    bl SysTask_GetData\n    ldr r2, _0221BE8C ; =0x00002090\n    add r4, r0, #0\n    mov r1, #0\n    bl memset\n    str r5, [r4]\n    ldr r0, [r5, #8]\n    bl BattleSystem_GetBgConfig\n    mov r1, #0x79\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, [r5, #8]\n    bl BattleSystem_GetPaletteData\n    mov r1, #0x7a\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    ldr r0, _0221BE90 ; =0x00002078\n    mov r1, #0\n    strb r1, [r4, r0]\n    ldrb r2, [r5, #0x11]\n    sub r1, r0, #2\n    strb r2, [r4, r1]\n    sub r1, r0, #1\n    ldrb r2, [r4, r1]\n    mov r1, #0xf0\n    sub r0, r0, #1\n    bic r2, r1\n    strb r2, [r4, r0]\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #0x28]\n    bl ov12_0223AB0C\n    ldr r1, _0221BE94 ; =0x0000208F\n    strb r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    _0221BE88: .word ov08_0221BE98\n    _0221BE8C: .word 0x00002090\n    _0221BE90: .word 0x00002078\n    _0221BE94: .word 0x0000208F"
    );
    #endif
}

void ov08_0221BE98(void) {
    /* Original at 0x0221BE98 */
    /* Requires manual decompilation - 158 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _0221C040 ; =0x00002078\n    add r4, r1, #0\n    ldrb r2, [r4, r2]\n    cmp r2, #0x1a\n    bls _0221BEA6\n    b _0221C028\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0221BEB2: ; jump table\n    add r0, r4, #0\n    bl ov08_0221C048\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C14C\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C318\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C3C8\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C488\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C58C\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C918\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C924\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C930\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C93C\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C948\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C954\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C978\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C9A4\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C9C8\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221CA08\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221CA20\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221CA34\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221CA50\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C604\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C6F8\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221C814\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221CA78\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221CA90\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221CC38\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    add r0, r4, #0\n    bl ov08_0221CD64\n    ldr r1, _0221C040 ; =0x00002078\n    strb r0, [r4, r1]\n    b _0221C028\n    bl ov08_0221CD90\n    cmp r0, #1\n    beq _0221C03C\n    add r0, r4, #0\n    bl ov08_0222145C\n    ldr r0, _0221C044 ; =0x00001FB4\n    ldr r0, [r4, r0]\n    bl SpriteSystem_DrawSprites\n    add r0, r4, #0\n    bl ov08_022220FC\n    pop {r4, pc}\n    nop\n    _0221C040: .word 0x00002078\n    _0221C044: .word 0x00001FB4"
    );
    #endif
}

void ov08_0221C048(void) {
    /* Original at 0x0221C048 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0221C13C ; =0x04001050\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, [r5]\n    add r0, #0x35\n    ldrb r0, [r0]\n    cmp r0, #3\n    ldr r0, _0221C140 ; =0x0000207A\n    bne _0221C068\n    mov r1, #6\n    strb r1, [r5, r0]\n    mov r4, #0x13\n    b _0221C06C\n    strb r1, [r5, r0]\n    mov r4, #1\n    ldr r0, [r5]\n    ldr r0, [r0, #0xc]\n    bl ov08_02224B64\n    ldr r1, _0221C144 ; =0x00002088\n    str r0, [r5, r1]\n    add r0, r5, #0\n    bl ov08_0221D184\n    add r0, r5, #0\n    bl ov08_0221CDF8\n    add r0, r5, #0\n    bl ov08_0221CF38\n    add r0, r5, #0\n    bl ov08_0221D0F4\n    ldr r1, [r5]\n    mov r0, #4\n    ldr r1, [r1, #0xc]\n    bl FontID_Alloc\n    ldr r1, _0221C140 ; =0x0000207A\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    bl ov08_0221D8B0\n    ldr r1, _0221C140 ; =0x0000207A\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    bl ov08_022221CC\n    ldr r1, _0221C140 ; =0x0000207A\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    bl ov08_02222524\n    add r0, r5, #0\n    bl ov08_022205E0\n    ldr r1, _0221C140 ; =0x0000207A\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    bl ov08_02220C5C\n    add r0, r5, #0\n    bl ov08_0221DC00\n    ldr r1, _0221C140 ; =0x0000207A\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    bl ov08_0221DD70\n    ldr r0, [r5]\n    add r0, #0x32\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0221C0EC\n    ldr r0, _0221C144 ; =0x00002088\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl ov08_02224B90\n    ldr r0, _0221C140 ; =0x0000207A\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    bne _0221C106\n    add r0, r5, #0\n    mov r1, #0\n    bl ov08_0221DB24\n    cmp r0, #1\n    bne _0221C106\n    ldr r0, [r5]\n    mov r1, #1\n    strb r1, [r0, #0x11]\n    ldr r1, _0221C140 ; =0x0000207A\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    bl ov08_0222171C\n    ldr r1, _0221C140 ; =0x0000207A\n    add r0, r5, #0\n    ldrb r1, [r5, r1]\n    bl ov08_0221D6CC\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    mov r1, #0xa\n    add r3, r1, #0\n    ldr r0, [r5, r0]\n    ldr r2, _0221C148 ; =0x0000FFFF\n    sub r3, #0x12\n    bl PaletteData_BeginPaletteFade\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0221C13C: .word 0x04001050\n    _0221C140: .word 0x0000207A\n    _0221C144: .word 0x00002088\n    _0221C148: .word 0x0000FFFF"
    );
    #endif
}

void ov08_0221C14C(void) {
    /* Original at 0x0221C14C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl PaletteData_GetSelectedBuffersBitmask\n    cmp r0, #0\n    beq _0221C162\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov08_0221D438\n    cmp r0, #1\n    bne _0221C1BA\n    ldr r1, [r4]\n    ldrb r0, [r1, #0x11]\n    cmp r0, #6\n    bne _0221C18E\n    add r1, #0x35\n    ldrb r0, [r1]\n    cmp r0, #1\n    beq _0221C1BA\n    ldr r0, _0221C1C0 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    bl ov08_022220AC\n    mov r0, #0x19\n    pop {r4, pc}\n    ldr r0, _0221C1C0 ; =0x000005DD\n    bl PlaySE\n    ldr r1, [r4]\n    add r0, r4, #0\n    ldrb r1, [r1, #0x11]\n    bl ov08_022220AC\n    ldr r0, [r4]\n    add r0, #0x35\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _0221C1B0\n    add r0, r4, #0\n    bl ov08_0221C1C8\n    pop {r4, pc}\n    ldr r0, _0221C1C4 ; =0x00002079\n    mov r1, #7\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0221C1C0: .word 0x000005DD\n    _0221C1C4: .word 0x00002079"
    );
    #endif
}

void ov08_0221C1C8(void) {
    /* Original at 0x0221C1C8 */
    /* Requires manual decompilation - 152 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5]\n    ldrb r1, [r4, #0x11]\n    cmp r1, #0\n    bne _0221C1DA\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    bne _0221C1E4\n    cmp r1, #1\n    bne _0221C200\n    ldr r0, [r4, #0x1c]\n    cmp r0, #0\n    beq _0221C200\n    add r0, r5, #0\n    bl ov08_0222057C\n    add r0, r5, #0\n    bl ov08_022201C0\n    ldr r0, [r5]\n    mov r1, #6\n    strb r1, [r0, #0x11]\n    ldr r0, _0221C30C ; =0x00002079\n    mov r1, #0x19\n    strb r1, [r5, r0]\n    mov r0, #0x11\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4, #0x22]\n    ldr r2, [r4, #0xc]\n    mov r1, #0x24\n    bl GetItemAttr\n    cmp r0, #0\n    beq _0221C236\n    ldrh r0, [r4, #0x22]\n    ldr r2, [r4, #0xc]\n    mov r1, #0x25\n    bl GetItemAttr\n    cmp r0, #0\n    bne _0221C236\n    ldrb r1, [r4, #0x11]\n    mov r0, #0x50\n    mul r0, r1\n    add r0, r5, r0\n    ldrb r0, [r0, #0x1b]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _0221C236\n    ldr r0, _0221C30C ; =0x00002079\n    mov r1, #0xd\n    strb r1, [r5, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    ldrh r0, [r4, #0x22]\n    mov r3, #0\n    str r0, [sp]\n    ldrb r2, [r4, #0x11]\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #0x28]\n    add r2, r4, r2\n    add r2, #0x2c\n    ldrb r2, [r2]\n    bl BattleSystem_RecoverStatus\n    cmp r0, #1\n    bne _0221C2E6\n    ldrh r0, [r4, #0x22]\n    ldr r2, [r4, #0xc]\n    mov r1, #0x25\n    bl GetItemAttr\n    cmp r0, #0\n    beq _0221C266\n    ldr r0, _0221C30C ; =0x00002079\n    mov r1, #0xd\n    strb r1, [r5, r0]\n    b _0221C2DC\n    ldrb r1, [r4, #0x11]\n    add r0, r5, #0\n    bl ov08_0221D5DC\n    cmp r0, #1\n    bne _0221C2D6\n    ldrh r0, [r4, #0x22]\n    ldr r2, [r4, #0xc]\n    mov r1, #0x17\n    bl GetItemAttr\n    cmp r0, #0\n    bne _0221C2D6\n    add r2, r4, #0\n    add r2, #0x33\n    ldrh r1, [r4, #0x22]\n    ldrb r2, [r2]\n    ldr r0, [r4, #8]\n    ldr r3, [r4, #0xc]\n    bl ov08_0221DBCC\n    ldrb r2, [r4, #0x11]\n    ldr r0, [r4, #8]\n    ldr r1, [r4, #0x28]\n    add r2, r4, r2\n    add r2, #0x2c\n    ldrb r2, [r2]\n    bl BattleSystem_GetPartyMon\n    ldrb r2, [r4, #0x11]\n    mov r1, #0x50\n    add r3, r2, #0\n    mul r3, r1\n    add r2, r5, r3\n    str r0, [r2, #4]\n    ldrb r0, [r4, #0x11]\n    mov r2, #0\n    mul r1, r0\n    add r0, r5, r1\n    ldr r0, [r0, #4]\n    mov r1, #0xa3\n    bl GetMonData\n    strh r0, [r4, #0x20]\n    ldrb r1, [r4, #0x11]\n    mov r0, #0x50\n    ldrh r2, [r4, #0x20]\n    mul r0, r1\n    add r0, r5, r0\n    ldrh r0, [r0, #0x14]\n    mov r1, #0x19\n    sub r0, r2, r0\n    strh r0, [r4, #0x20]\n    ldr r0, _0221C30C ; =0x00002079\n    strb r1, [r5, r0]\n    b _0221C2DC\n    ldr r0, _0221C30C ; =0x00002079\n    mov r1, #0x17\n    strb r1, [r5, r0]\n    ldr r0, _0221C310 ; =0x0000207C\n    mov r1, #0\n    strb r1, [r5, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    ldr r2, _0221C314 ; =0x00001FA8\n    mov r1, #0x51\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    add r0, r5, #0\n    bl ov08_022201C0\n    ldr r0, [r5]\n    mov r1, #6\n    strb r1, [r0, #0x11]\n    ldr r0, _0221C30C ; =0x00002079\n    mov r1, #0x19\n    strb r1, [r5, r0]\n    mov r0, #0x11\n    pop {r3, r4, r5, pc}\n    nop\n    _0221C30C: .word 0x00002079\n    _0221C310: .word 0x0000207C\n    _0221C314: .word 0x00001FA8"
    );
    #endif
}

void ov08_0221C318(void) {
    /* Original at 0x0221C318 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov08_0221D4B0\n    cmp r0, #3\n    bhi _0221C3BA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221C330: ; jump table\n    ldr r0, _0221C3C0 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #7\n    bl ov08_022220AC\n    add r0, r4, #0\n    bl ov08_0221D91C\n    cmp r0, #1\n    bne _0221C354\n    mov r0, #0x19\n    pop {r4, pc}\n    ldr r0, _0221C3C4 ; =0x00002079\n    mov r1, #0xf\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov08_0221DAC4\n    cmp r0, #1\n    beq _0221C3BA\n    ldr r0, _0221C3C0 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #8\n    bl ov08_022220AC\n    ldr r0, _0221C3C4 ; =0x00002079\n    mov r1, #8\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov08_0221DAC4\n    cmp r0, #1\n    beq _0221C3BA\n    ldr r0, _0221C3C0 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xa\n    bl ov08_022220AC\n    ldr r0, _0221C3C4 ; =0x00002079\n    mov r1, #9\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r4, pc}\n    ldr r0, _0221C3C0 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    bl ov08_022220AC\n    ldr r0, _0221C3C4 ; =0x00002079\n    mov r1, #6\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    nop\n    _0221C3C0: .word 0x000005DD\n    _0221C3C4: .word 0x00002079"
    );
    #endif
}

void ov08_0221C3C8(void) {
    /* Original at 0x0221C3C8 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov08_0221D4F8\n    cmp r0, #3\n    bhi _0221C478\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221C3E0: ; jump table\n    ldr r1, [r4]\n    mov r2, #0\n    ldrb r1, [r1, #0x11]\n    add r0, r4, #0\n    mvn r2, r2\n    bl ov08_0221D614\n    cmp r0, #0xff\n    beq _0221C478\n    ldr r1, [r4]\n    strb r0, [r1, #0x11]\n    ldr r0, _0221C47C ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xc\n    bl ov08_022220AC\n    ldr r0, _0221C480 ; =0x00002079\n    mov r1, #0xe\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r4, pc}\n    ldr r1, [r4]\n    add r0, r4, #0\n    ldrb r1, [r1, #0x11]\n    mov r2, #1\n    bl ov08_0221D614\n    cmp r0, #0xff\n    beq _0221C478\n    ldr r1, [r4]\n    strb r0, [r1, #0x11]\n    ldr r0, _0221C47C ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xd\n    bl ov08_022220AC\n    ldr r0, _0221C480 ; =0x00002079\n    mov r1, #0xe\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r4, pc}\n    ldr r0, _0221C47C ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xb\n    bl ov08_022220AC\n    ldr r0, _0221C480 ; =0x00002079\n    mov r1, #9\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r4, pc}\n    ldr r0, _0221C47C ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    bl ov08_022220AC\n    ldr r0, _0221C484 ; =0x0000208C\n    mov r1, #1\n    strb r1, [r4, r0]\n    mov r1, #7\n    sub r0, #0x13\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r4, pc}\n    mov r0, #3\n    pop {r4, pc}\n    _0221C47C: .word 0x000005DD\n    _0221C480: .word 0x00002079\n    _0221C484: .word 0x0000208C"
    );
    #endif
}

void ov08_0221C488(void) {
    /* Original at 0x0221C488 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov08_0221D540\n    add r5, r0, #0\n    cmp r5, #7\n    bhi _0221C57A\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221C4A2: ; jump table\n    ldr r0, [r4]\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r1\n    add r1, r4, r0\n    lsl r0, r5, #3\n    add r0, r1, r0\n    ldrh r0, [r0, #0x34]\n    cmp r0, #0\n    beq _0221C57A\n    ldr r0, _0221C580 ; =0x000005DD\n    bl PlaySE\n    add r1, r5, #0\n    add r1, #0xe\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov08_022220AC\n    ldr r0, [r4]\n    mov r1, #0xa\n    add r0, #0x34\n    strb r5, [r0]\n    ldr r0, _0221C584 ; =0x00002079\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4]\n    mov r2, #0\n    ldrb r1, [r1, #0x11]\n    add r0, r4, #0\n    mvn r2, r2\n    bl ov08_0221D614\n    cmp r0, #0xff\n    beq _0221C57A\n    ldr r1, [r4]\n    strb r0, [r1, #0x11]\n    ldr r0, _0221C580 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xc\n    bl ov08_022220AC\n    ldr r0, _0221C584 ; =0x00002079\n    mov r1, #0xe\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4]\n    add r0, r4, #0\n    ldrb r1, [r1, #0x11]\n    mov r2, #1\n    bl ov08_0221D614\n    cmp r0, #0xff\n    beq _0221C57A\n    ldr r1, [r4]\n    strb r0, [r1, #0x11]\n    ldr r0, _0221C580 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0xd\n    bl ov08_022220AC\n    ldr r0, _0221C584 ; =0x00002079\n    mov r1, #0xe\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    ldr r0, _0221C580 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #9\n    bl ov08_022220AC\n    ldr r0, _0221C584 ; =0x00002079\n    mov r1, #8\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    ldr r0, _0221C580 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    bl ov08_022220AC\n    ldr r0, _0221C588 ; =0x0000208C\n    mov r1, #2\n    strb r1, [r4, r0]\n    mov r1, #7\n    sub r0, #0x13\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    mov r0, #4\n    pop {r3, r4, r5, pc}\n    nop\n    _0221C580: .word 0x000005DD\n    _0221C584: .word 0x00002079\n    _0221C588: .word 0x0000208C"
    );
    #endif
}

void ov08_0221C58C(void) {
    /* Original at 0x0221C58C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov08_0221D588\n    add r5, r0, #0\n    cmp r5, #4\n    bhi _0221C5F6\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221C5A6: ; jump table\n    ldr r1, [r4]\n    add r0, r1, #0\n    add r0, #0x34\n    ldrb r0, [r0]\n    cmp r0, r5\n    beq _0221C5CE\n    ldrb r1, [r1, #0x11]\n    mov r0, #0x50\n    mul r0, r1\n    add r1, r4, r0\n    lsl r0, r5, #3\n    add r0, r1, r0\n    ldrh r0, [r0, #0x34]\n    cmp r0, #0\n    beq _0221C5F6\n    ldr r0, _0221C5FC ; =0x000005DD\n    bl PlaySE\n    ldr r0, [r4]\n    add r0, #0x34\n    strb r5, [r0]\n    mov r0, #0xa\n    pop {r3, r4, r5, pc}\n    ldr r0, _0221C5FC ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    bl ov08_022220AC\n    ldr r0, _0221C600 ; =0x00002079\n    mov r1, #9\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    mov r0, #5\n    pop {r3, r4, r5, pc}\n    nop\n    _0221C5FC: .word 0x000005DD\n    _0221C600: .word 0x00002079"
    );
    #endif
}

void ov08_0221C604(void) {
    /* Original at 0x0221C604 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0221C6E0 ; =ov08_02224F3C\n    add r4, r0, #0\n    bl ov08_0221D5D0\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _0221C62E\n    ldr r0, _0221C6E4 ; =0x00002088\n    ldr r0, [r4, r0]\n    bl ov08_02224C94\n    add r5, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    bne _0221C634\n    mov r5, #6\n    b _0221C634\n    add r0, r4, #0\n    bl ov08_022217C8\n    cmp r5, #6\n    bhi _0221C6DC\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221C644: ; jump table\n    lsl r0, r5, #0x18\n    lsr r1, r0, #0x18\n    ldr r0, [r4]\n    add r0, #0x34\n    strb r1, [r0]\n    ldr r0, _0221C6E8 ; =0x0000208D\n    strb r1, [r4, r0]\n    ldr r0, _0221C6EC ; =0x000005DD\n    bl PlaySE\n    add r5, #0x17\n    lsl r1, r5, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov08_022220AC\n    ldr r0, _0221C6F0 ; =0x00002079\n    mov r1, #0xc\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    ldr r0, _0221C6F4 ; =0x00002077\n    ldrb r3, [r4, r0]\n    lsl r1, r3, #0x18\n    lsr r1, r1, #0x1c\n    beq _0221C6DC\n    mov r2, #0xf\n    add r1, r3, #0\n    bic r1, r2\n    lsl r2, r3, #0x1c\n    lsr r3, r2, #0x1c\n    mov r2, #1\n    eor r2, r3\n    lsl r2, r2, #0x18\n    lsr r3, r2, #0x18\n    mov r2, #0xf\n    and r2, r3\n    orr r1, r2\n    strb r1, [r4, r0]\n    add r0, #0x16\n    strb r5, [r4, r0]\n    ldr r0, _0221C6EC ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #0x12\n    bl ov08_022220AC\n    ldr r0, _0221C6F0 ; =0x00002079\n    mov r1, #0xb\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4]\n    mov r1, #4\n    add r0, #0x34\n    strb r1, [r0]\n    ldr r0, _0221C6EC ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    bl ov08_022220AC\n    ldr r0, _0221C6F0 ; =0x00002079\n    mov r1, #0x19\n    strb r1, [r4, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    mov r0, #0x13\n    pop {r3, r4, r5, pc}\n    _0221C6E0: .word ov08_02224F3C\n    _0221C6E4: .word 0x00002088\n    _0221C6E8: .word 0x0000208D\n    _0221C6EC: .word 0x000005DD\n    _0221C6F0: .word 0x00002079\n    _0221C6F4: .word 0x00002077"
    );
    #endif
}

void ov08_0221C6F8(void) {
    /* Original at 0x0221C6F8 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0221C7FC ; =ov08_02224E44\n    add r5, r0, #0\n    bl ov08_0221D5D0\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0221C722\n    ldr r0, _0221C800 ; =0x00002088\n    ldr r0, [r5, r0]\n    bl ov08_02224C94\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _0221C728\n    mov r4, #2\n    b _0221C728\n    add r0, r5, #0\n    bl ov08_022217C8\n    cmp r4, #0\n    beq _0221C736\n    cmp r4, #1\n    beq _0221C792\n    cmp r4, #2\n    beq _0221C7D8\n    b _0221C7F6\n    ldr r0, _0221C804 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _0221C808 ; =0x00002077\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    bne _0221C750\n    add r0, r5, #0\n    mov r1, #0x1c\n    bl ov08_022220AC\n    b _0221C758\n    add r0, r5, #0\n    mov r1, #0x1d\n    bl ov08_022220AC\n    add r0, r5, #0\n    bl ov08_0221DB54\n    cmp r0, #1\n    bne _0221C788\n    add r0, r5, #0\n    bl ov08_0221F220\n    ldr r0, _0221C808 ; =0x00002077\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    bne _0221C77A\n    add r0, r5, #0\n    bl ov08_0221DB7C\n    b _0221C780\n    add r0, r5, #0\n    bl ov08_0221DBB4\n    ldr r0, _0221C80C ; =0x00002079\n    mov r1, #0x14\n    strb r1, [r5, r0]\n    b _0221C78E\n    ldr r0, _0221C80C ; =0x00002079\n    mov r1, #0x19\n    strb r1, [r5, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    ldr r0, _0221C808 ; =0x00002077\n    ldrb r0, [r5, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    beq _0221C7F6\n    ldr r0, _0221C804 ; =0x000005DD\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #0x12\n    bl ov08_022220AC\n    ldr r2, _0221C808 ; =0x00002077\n    mov r1, #0xf\n    ldrb r3, [r5, r2]\n    add r0, r3, #0\n    bic r0, r1\n    lsl r1, r3, #0x1c\n    lsr r3, r1, #0x1c\n    mov r1, #1\n    eor r1, r3\n    lsl r1, r1, #0x18\n    lsr r3, r1, #0x18\n    mov r1, #0xf\n    and r1, r3\n    orr r0, r1\n    strb r0, [r5, r2]\n    add r0, r2, #0\n    add r0, #0x17\n    strb r4, [r5, r0]\n    mov r1, #0xc\n    add r0, r2, #2\n    strb r1, [r5, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    ldr r0, _0221C804 ; =0x000005DD\n    bl PlaySE\n    add r0, r5, #0\n    mov r1, #6\n    bl ov08_022220AC\n    ldr r0, _0221C810 ; =0x0000208E\n    mov r1, #0\n    strb r1, [r5, r0]\n    mov r1, #0xb\n    sub r0, #0x15\n    strb r1, [r5, r0]\n    mov r0, #0x16\n    pop {r3, r4, r5, pc}\n    mov r0, #0x14\n    pop {r3, r4, r5, pc}\n    nop\n    _0221C7FC: .word ov08_02224E44\n    _0221C800: .word 0x00002088\n    _0221C804: .word 0x000005DD\n    _0221C808: .word 0x00002077\n    _0221C80C: .word 0x00002079\n    _0221C810: .word 0x0000208E"
    );
    #endif
}

void ov08_0221C814(void) {
    /* Original at 0x0221C814 */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    ldr r1, _0221C900 ; =ov08_02224E94\n    add r4, r0, #0\n    ldr r6, [r4]\n    bl ov08_0221D5D0\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _0221C842\n    ldr r0, _0221C904 ; =0x00002088\n    ldr r0, [r4, r0]\n    bl ov08_02224C94\n    add r5, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    bne _0221C848\n    mov r5, #4\n    b _0221C848\n    add r0, r4, #0\n    bl ov08_022217C8\n    cmp r5, #4\n    bhi _0221C8FA\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221C858: ; jump table\n    ldrb r1, [r6, #0x11]\n    mov r0, #0x50\n    mul r0, r1\n    add r1, r4, r0\n    lsl r0, r5, #3\n    add r0, r1, r0\n    ldrh r0, [r0, #0x34]\n    cmp r0, #0\n    beq _0221C8FA\n    ldr r0, [r4]\n    add r0, #0x34\n    strb r5, [r0]\n    ldr r0, _0221C908 ; =0x000005DD\n    bl PlaySE\n    add r1, r5, #0\n    add r1, #0x13\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl ov08_022220AC\n    ldrh r0, [r6, #0x22]\n    add r3, r5, #0\n    str r0, [sp]\n    ldrb r2, [r6, #0x11]\n    ldr r0, [r6, #8]\n    ldr r1, [r6, #0x28]\n    add r2, r6, r2\n    add r2, #0x2c\n    ldrb r2, [r2]\n    bl BattleSystem_RecoverStatus\n    cmp r0, #1\n    bne _0221C8BA\n    ldr r0, _0221C90C ; =0x0000207C\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r1, #0x17\n    sub r0, r0, #3\n    strb r1, [r4, r0]\n    add sp, #4\n    mov r0, #0x16\n    pop {r3, r4, r5, r6, pc}\n    ldr r2, _0221C910 ; =0x00001FA8\n    mov r1, #0x51\n    ldr r0, [r4, r2]\n    add r2, #8\n    ldr r2, [r4, r2]\n    bl ReadMsgDataIntoString\n    add r0, r4, #0\n    bl ov08_022201C0\n    ldr r0, [r4]\n    mov r1, #6\n    strb r1, [r0, #0x11]\n    ldr r0, _0221C914 ; =0x00002079\n    mov r1, #0x19\n    strb r1, [r4, r0]\n    add sp, #4\n    mov r0, #0x11\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _0221C908 ; =0x000005DD\n    bl PlaySE\n    add r0, r4, #0\n    mov r1, #6\n    bl ov08_022220AC\n    ldr r0, _0221C914 ; =0x00002079\n    mov r1, #6\n    strb r1, [r4, r0]\n    add sp, #4\n    mov r0, #0x16\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0x15\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _0221C900: .word ov08_02224E94\n    _0221C904: .word 0x00002088\n    _0221C908: .word 0x000005DD\n    _0221C90C: .word 0x0000207C\n    _0221C910: .word 0x00001FA8\n    _0221C914: .word 0x00002079"
    );
    #endif
}

void ov08_0221C918(void) {
    ov08_0221D840();
}

void ov08_0221C924(void) {
    ov08_0221D840();
}

void ov08_0221C930(void) {
    ov08_0221D840();
}

void ov08_0221C93C(void) {
    ov08_0221D840();
}

void ov08_0221C948(void) {
    ov08_0221D840();
}

void ov08_0221C954(void) {
    /* Original at 0x0221C954 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0221C974 ; =0x00002077\n    ldrb r1, [r0, r1]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    bne _0221C968\n    mov r1, #6\n    bl ov08_0221D840\n    b _0221C96E\n    mov r1, #8\n    bl ov08_0221D840\n    mov r0, #0x13\n    pop {r3, pc}\n    nop\n    _0221C974: .word 0x00002077"
    );
    #endif
}

void ov08_0221C978(void) {
    /* Original at 0x0221C978 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov08_022213C8\n    ldr r0, _0221C9A0 ; =0x00002077\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1c\n    bne _0221C994\n    add r0, r4, #0\n    mov r1, #7\n    bl ov08_0221D840\n    b _0221C99C\n    add r0, r4, #0\n    mov r1, #9\n    bl ov08_0221D840\n    mov r0, #0x14\n    pop {r4, pc}\n    _0221C9A0: .word 0x00002077"
    );
    #endif
}

void ov08_0221C9A4(void) {
    /* Original at 0x0221C9A4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #5\n    bl ov08_0221D840\n    ldr r2, [r4]\n    mov r1, #0x25\n    ldrh r0, [r2, #0x22]\n    ldr r2, [r2, #0xc]\n    bl GetItemAttr\n    cmp r0, #0\n    beq _0221C9C2\n    mov r0, #0x18\n    pop {r4, pc}\n    mov r0, #0x15\n    pop {r4, pc}"
    );
    #endif
}

void ov08_0221C9C8(void) {
    /* Original at 0x0221C9C8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0221CA04 ; =0x0000207A\n    add r4, r0, #0\n    ldrb r1, [r4, r1]\n    bl ov08_02220C5C\n    ldr r1, _0221CA04 ; =0x0000207A\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov08_0221DD70\n    ldr r1, _0221CA04 ; =0x0000207A\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov08_022221CC\n    ldr r1, _0221CA04 ; =0x0000207A\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov08_0221D6CC\n    ldr r0, _0221CA04 ; =0x0000207A\n    ldrb r0, [r4, r0]\n    cmp r0, #2\n    bne _0221C9FE\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #4\n    pop {r4, pc}\n    nop\n    _0221CA04: .word 0x0000207A"
    );
    #endif
}

void ov08_0221CA08(void) {
    ov08_022201C0(0x11, 0x10);
}

void ov08_0221CA20(void) {
    ClearFrameAndWindow2(2, 0);
}

void ov08_0221CA34(void) {
    TextPrinterCheckActive(0x11, 0x12);
}

void ov08_0221CA50(void) {
    /* Original at 0x0221CA50 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0221CA70 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _0221CA66\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _0221CA6C\n    ldr r0, _0221CA74 ; =0x00002079\n    ldrb r0, [r4, r0]\n    pop {r4, pc}\n    mov r0, #0x12\n    pop {r4, pc}\n    _0221CA70: .word gSystem\n    _0221CA74: .word 0x00002079"
    );
    #endif
}

void ov08_0221CA78(void) {
    /* Original at 0x0221CA78 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0221CA8C ; =0x00001FA3\n    ldrb r2, [r0, r1]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x1f\n    bne _0221CA88\n    add r1, #0xd6\n    ldrb r0, [r0, r1]\n    bx lr\n    mov r0, #0x16\n    bx lr\n    _0221CA8C: .word 0x00001FA3"
    );
    #endif
}

void ov08_0221CA90(void) {
    /* Original at 0x0221CA90 */
    /* Requires manual decompilation - 190 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _0221CC28 ; =0x0000207C\n    add r4, r0, #0\n    ldrb r1, [r4, r7]\n    ldr r5, [r4]\n    cmp r1, #4\n    bls _0221CAA0\n    b _0221CC24\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0221CAAC: ; jump table\n    ldrb r2, [r5, #0x11]\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #0x28]\n    add r2, r5, r2\n    add r2, #0x2c\n    ldrb r2, [r2]\n    bl BattleSystem_GetPartyMon\n    ldrb r2, [r5, #0x11]\n    mov r1, #0x50\n    mul r1, r2\n    add r1, r4, r1\n    str r0, [r1, #4]\n    add r0, r4, #0\n    bl ov08_02220224\n    sub r0, r7, #2\n    ldrb r0, [r4, r0]\n    ldrb r1, [r5, #0x11]\n    cmp r0, #5\n    bne _0221CB00\n    mov r0, #0x50\n    mul r0, r1\n    add r5, #0x34\n    ldrb r1, [r5]\n    add r0, r4, r0\n    ldr r0, [r0, #4]\n    add r1, #0x3a\n    mov r2, #0\n    bl GetMonData\n    add r1, r7, #4\n    strh r0, [r4, r1]\n    mov r2, #2\n    sub r0, r1, #4\n    strb r2, [r4, r0]\n    b _0221CB72\n    mov r0, #0x50\n    mul r0, r1\n    add r0, r4, r0\n    ldr r0, [r0, #4]\n    bl Pokemon_GetStatusIconId\n    add r6, r0, #0\n    ldrb r0, [r5, #0x11]\n    add r3, r4, #0\n    mov r7, #0x50\n    add r2, r0, #0\n    add r3, #0x1b\n    mul r2, r7\n    ldrb r1, [r3, r2]\n    mov r0, #0x78\n    bic r1, r0\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x19\n    orr r0, r1\n    strb r0, [r3, r2]\n    ldrb r0, [r5, #0x11]\n    add r1, r0, #0\n    mul r1, r7\n    add r1, r4, r1\n    ldrb r1, [r1, #0x1b]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1c\n    cmp r1, #7\n    bne _0221CB56\n    add r0, #0xd\n    lsl r0, r0, #2\n    add r1, r4, r0\n    ldr r0, _0221CC2C ; =0x00001FB8\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldrb r1, [r5, #0x11]\n    add r0, r4, #0\n    bl ov08_0221F5B0\n    ldrb r1, [r5, #0x11]\n    mov r0, #0x50\n    mov r2, #0\n    mul r0, r1\n    add r0, r4, r0\n    ldr r0, [r0, #4]\n    mov r1, #0xa3\n    bl GetMonData\n    ldr r1, _0221CC30 ; =0x0000207E\n    mov r2, #4\n    strh r0, [r4, r1]\n    sub r0, r1, #2\n    strb r2, [r4, r0]\n    ldr r0, _0221CC34 ; =0x000005EC\n    bl PlaySE\n    b _0221CC24\n    ldrb r1, [r5, #0x11]\n    add r6, r4, #0\n    mov r2, #0x50\n    add r3, r1, #0\n    add r6, #0x14\n    mul r3, r2\n    add r1, r7, #2\n    ldrh r2, [r4, r1]\n    ldrh r1, [r6, r3]\n    cmp r2, r1\n    beq _0221CB9C\n    add r1, r1, #1\n    strh r1, [r6, r3]\n    ldrb r1, [r5, #0x11]\n    bl ov08_0221F550\n    b _0221CC24\n    mov r0, #3\n    strb r0, [r4, r7]\n    b _0221CC24\n    ldrb r3, [r5, #0x11]\n    add r1, r4, #0\n    mov r2, #0x50\n    add r1, #0x36\n    mul r2, r3\n    add r6, r1, r2\n    add r1, r5, #0\n    add r1, #0x34\n    ldrb r1, [r1]\n    lsl r3, r1, #3\n    add r1, r7, #4\n    ldrh r2, [r4, r1]\n    ldrb r1, [r6, r3]\n    cmp r2, r1\n    beq _0221CBD4\n    add r1, r1, #1\n    strb r1, [r6, r3]\n    add r5, #0x34\n    ldrb r2, [r5]\n    add r1, r2, #1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    bl ov08_02220064\n    b _0221CC24\n    mov r0, #3\n    strb r0, [r4, r7]\n    b _0221CC24\n    add r2, r5, #0\n    add r2, #0x33\n    ldrh r1, [r5, #0x22]\n    ldrb r2, [r2]\n    ldr r0, [r5, #8]\n    ldr r3, [r5, #0xc]\n    bl ov08_0221DBCC\n    add r0, r4, #0\n    bl ov08_022201C0\n    mov r1, #0x19\n    sub r0, r7, #3\n    strb r1, [r4, r0]\n    mov r0, #0x11\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r1, [r5, #0x11]\n    add r3, r4, #0\n    mov r2, #0x50\n    mul r2, r1\n    add r1, r7, #2\n    add r3, #0x14\n    ldrh r6, [r4, r1]\n    ldrh r1, [r3, r2]\n    cmp r6, r1\n    beq _0221CC1E\n    add r1, r1, #1\n    strh r1, [r3, r2]\n    ldrb r1, [r5, #0x11]\n    bl ov08_0221F550\n    add r0, r4, #0\n    bl ov08_022225A4\n    ldr r0, _0221CC28 ; =0x0000207C\n    mov r1, #1\n    strb r1, [r4, r0]\n    mov r0, #0x17\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221CC28: .word 0x0000207C\n    _0221CC2C: .word 0x00001FB8\n    _0221CC30: .word 0x0000207E\n    _0221CC34: .word 0x000005EC"
    );
    #endif
}

void ov08_0221CC38(void) {
    /* Original at 0x0221CC38 */
    /* Requires manual decompilation - 140 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5]\n    str r0, [sp, #4]\n    ldr r0, _0221CD58 ; =0x0000207C\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    beq _0221CC54\n    cmp r0, #1\n    beq _0221CCBE\n    cmp r0, #2\n    beq _0221CD28\n    b _0221CD50\n    ldr r2, [sp, #4]\n    ldr r0, [sp, #4]\n    ldrb r3, [r2, #0x11]\n    ldr r1, [sp, #4]\n    ldr r0, [r0, #8]\n    add r2, r2, r3\n    add r2, #0x2c\n    ldrb r2, [r2]\n    ldr r1, [r1, #0x28]\n    bl BattleSystem_GetPartyMon\n    ldr r1, [sp, #4]\n    mov r7, #0\n    ldrb r2, [r1, #0x11]\n    mov r1, #0x50\n    add r6, r7, #0\n    mul r1, r2\n    add r1, r5, r1\n    str r0, [r1, #4]\n    add r4, r5, #0\n    ldr r0, [sp, #4]\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r1\n    add r1, r5, r0\n    add r0, r1, r6\n    ldrh r0, [r0, #0x34]\n    cmp r0, #0\n    beq _0221CCA0\n    ldr r0, [r1, #4]\n    add r1, r7, #0\n    add r1, #0x3a\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x82\n    lsl r1, r1, #6\n    strh r0, [r4, r1]\n    add r7, r7, #1\n    add r6, #8\n    add r4, r4, #2\n    cmp r7, #4\n    blo _0221CC7C\n    add r0, r5, #0\n    bl ov08_02220224\n    ldr r0, _0221CD5C ; =0x000005EC\n    bl PlaySE\n    ldr r0, _0221CD58 ; =0x0000207C\n    mov r1, #1\n    strb r1, [r5, r0]\n    b _0221CD50\n    mov r6, #0\n    add r4, r6, #0\n    str r6, [sp]\n    add r7, r5, #0\n    ldr r0, [sp, #4]\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r1\n    add r1, r5, r0\n    ldr r0, [sp]\n    add r1, r1, r0\n    ldrh r0, [r1, #0x34]\n    cmp r0, #0\n    bne _0221CCDE\n    add r6, r6, #1\n    b _0221CD0E\n    mov r0, #0x82\n    add r2, r1, #0\n    lsl r0, r0, #6\n    add r2, #0x36\n    ldrh r0, [r7, r0]\n    ldrb r2, [r2]\n    cmp r0, r2\n    beq _0221CD0C\n    add r0, r1, #0\n    add r0, #0x36\n    ldrb r0, [r0]\n    lsl r2, r4, #0x10\n    add r1, #0x36\n    add r0, r0, #1\n    strb r0, [r1]\n    add r1, r4, #1\n    lsl r1, r1, #0x10\n    add r0, r5, #0\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    bl ov08_02220064\n    b _0221CD0E\n    add r6, r6, #1\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r0, #8\n    add r7, r7, #2\n    str r0, [sp]\n    cmp r4, #4\n    blo _0221CCC6\n    cmp r6, #4\n    bne _0221CD50\n    ldr r0, _0221CD58 ; =0x0000207C\n    mov r1, #2\n    strb r1, [r5, r0]\n    b _0221CD50\n    ldr r2, [sp, #4]\n    ldr r1, [sp, #4]\n    ldr r0, [sp, #4]\n    add r2, #0x33\n    ldr r3, [sp, #4]\n    ldrh r1, [r1, #0x22]\n    ldrb r2, [r2]\n    ldr r0, [r0, #8]\n    ldr r3, [r3, #0xc]\n    bl ov08_0221DBCC\n    add r0, r5, #0\n    bl ov08_022201C0\n    ldr r0, _0221CD60 ; =0x00002079\n    mov r1, #0x19\n    strb r1, [r5, r0]\n    add sp, #8\n    mov r0, #0x11\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x18\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221CD58: .word 0x0000207C\n    _0221CD5C: .word 0x000005EC\n    _0221CD60: .word 0x00002079"
    );
    #endif
}

void ov08_0221CD64(void) {
    /* Original at 0x0221CD64 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    mov r2, #0\n    str r2, [sp]\n    mov r1, #0x10\n    str r1, [sp, #4]\n    mov r1, #0x7a\n    str r2, [sp, #8]\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0xa\n    add r3, r1, #0\n    ldr r2, _0221CD8C ; =0x0000FFFF\n    sub r3, #0x12\n    bl PaletteData_BeginPaletteFade\n    mov r0, #0x1a\n    add sp, #0xc\n    pop {pc}\n    nop\n    _0221CD8C: .word 0x0000FFFF"
    );
    #endif
}

void ov08_0221CD90(void) {
    /* Original at 0x0221CD90 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x7a\n    add r4, r1, #0\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl PaletteData_GetSelectedBuffersBitmask\n    cmp r0, #0\n    beq _0221CDA8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov08_0221D14C\n    add r0, r4, #0\n    bl ov08_02220A50\n    add r0, r4, #0\n    bl ov08_0221DD40\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov08_0221CF08\n    ldr r0, _0221CDF4 ; =0x00002088\n    ldr r0, [r4, r0]\n    bl ov08_02224B8C\n    ldr r1, [r4]\n    add r1, #0x32\n    strb r0, [r1]\n    ldr r0, _0221CDF4 ; =0x00002088\n    ldr r0, [r4, r0]\n    bl ov08_02224B7C\n    mov r0, #4\n    bl FontID_Release\n    ldr r0, [r4]\n    mov r1, #1\n    add r0, #0x36\n    strb r1, [r0]\n    add r0, r5, #0\n    bl DestroySysTaskAndEnvironment\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _0221CDF4: .word 0x00002088"
    );
    #endif
}

void ov08_0221CDF8(void) {
    /* Original at 0x0221CDF8 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x80\n    ldr r5, _0221CEF4 ; =ov08_02224E34\n    add r3, sp, #0x70\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    mov r1, #1\n    bl SetScreenModeAndDisable\n    ldr r5, _0221CEF8 ; =ov08_02224EAC\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #7\n    str r0, [r3]\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _0221CEFC ; =ov08_02224EE4\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _0221CF00 ; =ov08_02224F00\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0221CF04 ; =ov08_02224EC8\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r3, [r4]\n    mov r0, #5\n    ldr r3, [r3, #0xc]\n    mov r1, #0x20\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    ldr r3, [r4]\n    mov r0, #4\n    ldr r3, [r3, #0xc]\n    mov r1, #0x20\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x80\n    pop {r3, r4, r5, pc}\n    _0221CEF4: .word ov08_02224E34\n    _0221CEF8: .word ov08_02224EAC\n    _0221CEFC: .word ov08_02224EE4\n    _0221CF00: .word ov08_02224F00\n    _0221CF04: .word ov08_02224EC8"
    );
    #endif
}

void ov08_0221CF08(void) {
    /* Original at 0x0221CF08 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    pop {r4, pc}"
    );
    #endif
}

void ov08_0221CF38(void) {
    /* Original at 0x0221CF38 */
    /* Requires manual decompilation - 195 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0x47\n    ldr r1, [r1, #0xc]\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    ldr r1, [r5]\n    mov r2, #0x79\n    ldr r1, [r1, #0xc]\n    lsl r2, r2, #2\n    str r1, [sp, #0xc]\n    ldr r2, [r5, r2]\n    mov r1, #0x16\n    mov r3, #7\n    add r4, r0, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    ldr r2, [r5]\n    add r0, r4, #0\n    ldr r2, [r2, #0xc]\n    mov r1, #0x14\n    bl NARC_AllocAndReadWholeMember\n    add r1, sp, #0x10\n    add r6, r0, #0\n    bl NNS_G2dGetUnpackedScreenData\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    add r1, #0xc\n    bl ov08_022217F0\n    add r0, r6, #0\n    bl Heap_Free\n    ldr r2, [r5]\n    add r0, r4, #0\n    ldr r2, [r2, #0xc]\n    mov r1, #0x15\n    bl NARC_AllocAndReadWholeMember\n    add r1, sp, #0x10\n    add r6, r0, #0\n    bl NNS_G2dGetUnpackedScreenData\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    add r1, #0xc\n    bl ov08_02221B1C\n    add r0, r6, #0\n    bl Heap_Free\n    mov r0, #1\n    str r0, [sp]\n    lsl r0, r0, #9\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #0x7a\n    ldr r3, [r5]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [r3, #0xc]\n    mov r1, #0x47\n    mov r2, #0x17\n    bl PaletteData_LoadNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl PaletteData_GetUnfadedBuf\n    add r2, r0, #0\n    ldr r0, _0221D0F0 ; =0x00001F60\n    mov r1, #6\n    lsl r1, r1, #6\n    add r1, r2, r1\n    add r0, r5, r0\n    mov r2, #0x40\n    bl memcpy\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xd0\n    str r0, [sp, #8]\n    mov r0, #0x7a\n    ldr r3, [r5]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [r3, #0xc]\n    mov r1, #0x10\n    mov r2, #7\n    bl PaletteData_LoadNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xf0\n    str r0, [sp, #8]\n    ldr r3, [r5]\n    add r0, #0xf8\n    ldr r0, [r5, r0]\n    ldr r3, [r3, #0xc]\n    mov r1, #0x10\n    mov r2, #8\n    bl PaletteData_LoadNarc\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetFrame\n    add r4, r0, #0\n    bl sub_0200E63C\n    add r1, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r2, #0x79\n    ldr r0, [r0, #0xc]\n    lsl r2, r2, #2\n    str r0, [sp, #0xc]\n    ldr r2, [r5, r2]\n    mov r0, #0x26\n    mov r3, #4\n    bl GfGfxLoader_LoadCharData\n    add r0, r4, #0\n    bl sub_0200E640\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xe0\n    str r0, [sp, #8]\n    mov r0, #0x7a\n    ldr r3, [r5]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [r3, #0xc]\n    mov r1, #0x26\n    bl PaletteData_LoadNarc\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl PaletteData_GetUnfadedBuf\n    add r6, r0, #0\n    ldr r0, [r5]\n    mov r1, #0x20\n    ldr r0, [r0, #0xc]\n    bl Heap_Alloc\n    mov r1, #0x1a\n    lsl r1, r1, #4\n    add r1, r6, r1\n    mov r2, #0x20\n    add r4, r0, #0\n    bl memcpy\n    mov r0, #0x4d\n    lsl r0, r0, #2\n    add r1, r6, r0\n    ldrb r3, [r1]\n    add r2, r4, #0\n    add r2, #0xe\n    strb r3, [r4, #0xe]\n    ldrb r3, [r1, #1]\n    strb r3, [r2, #1]\n    ldrb r3, [r1, #2]\n    strb r3, [r2, #2]\n    ldrb r1, [r1, #3]\n    mov r3, #0xd0\n    strb r1, [r2, #3]\n    add r2, r0, #4\n    add r1, r0, #4\n    ldrb r2, [r6, r2]\n    add r1, r6, r1\n    add r0, #0xb4\n    strb r2, [r4, #6]\n    ldrb r2, [r1, #1]\n    strb r2, [r4, #7]\n    ldrb r2, [r1, #2]\n    strb r2, [r4, #8]\n    ldrb r1, [r1, #3]\n    mov r2, #1\n    strb r1, [r4, #9]\n    mov r1, #0x20\n    str r1, [sp]\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl PaletteData_LoadPalette\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0221D0F0: .word 0x00001F60"
    );
    #endif
}

void ov08_0221D0F4(void) {
    /* Original at 0x0221D0F4 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r3, [r4]\n    mov r0, #0\n    ldr r3, [r3, #0xc]\n    mov r1, #0x1b\n    mov r2, #6\n    bl NewMsgDataFromNarc\n    ldr r1, _0221D13C ; =0x00001FA8\n    mov r2, #0\n    str r0, [r4, r1]\n    ldr r3, [r4]\n    mov r0, #0xf\n    ldr r3, [r3, #0xc]\n    mov r1, #0xe\n    bl MessagePrinter_New\n    ldr r1, _0221D140 ; =0x00001FA4\n    str r0, [r4, r1]\n    ldr r0, [r4]\n    ldr r0, [r0, #0xc]\n    bl MessageFormat_New\n    ldr r1, _0221D144 ; =0x00001FAC\n    str r0, [r4, r1]\n    ldr r1, [r4]\n    mov r0, #2\n    ldr r1, [r1, #0xc]\n    lsl r0, r0, #8\n    bl String_New\n    ldr r1, _0221D148 ; =0x00001FB0\n    str r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _0221D13C: .word 0x00001FA8\n    _0221D140: .word 0x00001FA4\n    _0221D144: .word 0x00001FAC\n    _0221D148: .word 0x00001FB0"
    );
    #endif
}

void ov08_0221D14C(void) {
    /* Original at 0x0221D14C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0221D174 ; =0x00001FA8\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _0221D178 ; =0x00001FA4\n    ldr r0, [r4, r0]\n    bl MessagePrinter_Delete\n    ldr r0, _0221D17C ; =0x00001FAC\n    ldr r0, [r4, r0]\n    bl MessageFormat_Delete\n    ldr r0, _0221D180 ; =0x00001FB0\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    nop\n    _0221D174: .word 0x00001FA8\n    _0221D178: .word 0x00001FA4\n    _0221D17C: .word 0x00001FAC\n    _0221D180: .word 0x00001FB0"
    );
    #endif
}

void ov08_0221D184(void) {
    /* Original at 0x0221D184 */
    /* Requires manual decompilation - 307 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Party_GetCount\n    cmp r0, #0\n    bgt _0221D19E\n    b _0221D432\n    ldr r0, [sp, #8]\n    mov r1, #0x50\n    mul r1, r0\n    ldr r0, [sp]\n    str r1, [sp, #4]\n    add r4, r0, r1\n    ldr r0, [r0]\n    ldr r1, [sp, #8]\n    ldr r0, [r0]\n    bl Party_GetMonByIndex\n    str r0, [r4, #4]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #8]\n    ldrh r0, [r4, #8]\n    cmp r0, #0\n    bne _0221D1C8\n    b _0221D416\n    ldr r0, [sp, #8]\n    mov r1, #0x50\n    add r5, r0, #0\n    mul r5, r1\n    ldr r0, [sp]\n    mov r1, #0xa5\n    add r4, r0, r5\n    ldr r0, [r4, #4]\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0xa]\n    ldr r0, [r4, #4]\n    mov r1, #0xa6\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0xc]\n    ldr r0, [r4, #4]\n    mov r1, #0xa7\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0xe]\n    ldr r0, [r4, #4]\n    mov r1, #0xa8\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x10]\n    ldr r0, [r4, #4]\n    mov r1, #0xa9\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x12]\n    ldr r0, [r4, #4]\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x14]\n    ldr r0, [r4, #4]\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x16]\n    ldr r0, [r4, #4]\n    mov r1, #0xb1\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r4, #0x18]\n    ldr r0, [r4, #4]\n    mov r1, #0xb2\n    mov r2, #0\n    bl GetMonData\n    ldr r6, [sp]\n    strb r0, [r4, #0x19]\n    ldr r0, [r4, #4]\n    add r6, #0x1a\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    ldrb r1, [r6, r5]\n    mov r2, #0x7f\n    lsl r0, r0, #0x18\n    bic r1, r2\n    lsr r2, r0, #0x18\n    mov r0, #0x7f\n    and r0, r2\n    orr r0, r1\n    strb r0, [r6, r5]\n    ldr r0, [r4, #4]\n    mov r1, #0xb0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #1\n    ldrb r1, [r6, r5]\n    bne _0221D278\n    mov r0, #0x80\n    bic r1, r0\n    strb r1, [r6, r5]\n    b _0221D27E\n    mov r0, #0x80\n    orr r0, r1\n    strb r0, [r6, r5]\n    ldr r0, [sp]\n    add r4, r0, r5\n    add r6, r0, #0\n    ldr r0, [r4, #4]\n    add r6, #0x1b\n    bl GetMonGender\n    ldrb r1, [r6, r5]\n    mov r2, #7\n    bic r1, r2\n    mov r2, #7\n    and r0, r2\n    orr r0, r1\n    strb r0, [r6, r5]\n    ldr r0, [r4, #4]\n    bl Pokemon_GetStatusIconId\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x1c\n    ldrb r1, [r6, r5]\n    mov r2, #0x78\n    lsr r0, r0, #0x19\n    bic r1, r2\n    orr r0, r1\n    strb r0, [r6, r5]\n    ldr r0, [r4, #4]\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x1f\n    ldrb r1, [r6, r5]\n    mov r2, #0x80\n    lsr r0, r0, #0x18\n    bic r1, r2\n    orr r0, r1\n    strb r0, [r6, r5]\n    ldr r0, [r4, #4]\n    mov r1, #0xa\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x1c]\n    ldr r0, [r4, #4]\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4, #0x1e]\n    ldr r0, [r4, #4]\n    mov r1, #8\n    mov r2, #0\n    bl GetMonData\n    ldr r6, [sp]\n    str r0, [r4, #0x20]\n    add r6, #0x1a\n    ldrb r1, [r6, r5]\n    ldrh r0, [r4, #8]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x19\n    bl GetMonExpBySpeciesAndLevel\n    str r0, [r4, #0x24]\n    ldrb r0, [r6, r5]\n    lsl r0, r0, #0x19\n    lsr r1, r0, #0x19\n    cmp r1, #0x64\n    bne _0221D316\n    ldr r0, [sp]\n    add r4, r0, r5\n    ldr r0, [r4, #0x24]\n    b _0221D322\n    ldr r0, [sp]\n    add r1, r1, #1\n    add r4, r0, r5\n    ldrh r0, [r4, #8]\n    bl GetMonExpBySpeciesAndLevel\n    str r0, [r4, #0x28]\n    ldr r0, [r4, #4]\n    mov r1, #0x13\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x2c\n    strb r0, [r1]\n    ldr r0, [r4, #4]\n    mov r1, #0x14\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x2d\n    strb r0, [r1]\n    ldr r0, [r4, #4]\n    mov r1, #0x15\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x2e\n    strb r0, [r1]\n    ldr r0, [r4, #4]\n    mov r1, #0x16\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x2f\n    strb r0, [r1]\n    ldr r0, [r4, #4]\n    mov r1, #0x17\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x30\n    strb r0, [r1]\n    ldr r0, [r4, #4]\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    add r1, r4, #0\n    add r1, #0x31\n    strb r0, [r1]\n    ldr r0, [r4, #4]\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    add r4, #0x32\n    strb r0, [r4]\n    ldr r1, [sp]\n    ldr r0, [sp, #4]\n    add r1, #0x34\n    add r7, r1, r0\n    ldr r1, [sp]\n    mov r4, #0\n    add r6, r1, r0\n    lsl r0, r4, #3\n    add r1, r4, #0\n    str r0, [sp, #0xc]\n    add r5, r7, r0\n    ldr r0, [r6, #4]\n    add r1, #0x36\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp, #0xc]\n    strh r0, [r7, r1]\n    add r0, r1, #0\n    ldrh r0, [r7, r0]\n    cmp r0, #0\n    beq _0221D40C\n    add r1, r4, #0\n    ldr r0, [r6, #4]\n    add r1, #0x3a\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r5, #2]\n    add r1, r4, #0\n    ldr r0, [r6, #4]\n    add r1, #0x3e\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r5, #3]\n    ldrh r0, [r5]\n    ldrb r1, [r5, #3]\n    bl GetMoveMaxPP\n    strb r0, [r5, #3]\n    ldrh r0, [r5]\n    mov r1, #3\n    bl GetMoveAttr\n    strb r0, [r5, #4]\n    ldrh r0, [r5]\n    mov r1, #1\n    bl GetMoveAttr\n    strb r0, [r5, #5]\n    ldrh r0, [r5]\n    mov r1, #4\n    bl GetMoveAttr\n    strb r0, [r5, #6]\n    ldrh r0, [r5]\n    mov r1, #2\n    bl GetMoveAttr\n    strb r0, [r5, #7]\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #4\n    blo _0221D3A0\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Party_GetCount\n    ldr r1, [sp, #8]\n    cmp r1, r0\n    bge _0221D432\n    b _0221D19E\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_0221D438(void) {
    /* Original at 0x0221D438 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0221D4A8 ; =ov08_02224F1C\n    add r4, r0, #0\n    bl ov08_0221D5D0\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _0221D484\n    ldr r0, _0221D4AC ; =0x00002088\n    ldr r0, [r4, r0]\n    bl ov08_02224C94\n    add r5, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    bne _0221D462\n    mov r5, #6\n    b _0221D46C\n    add r0, r0, #1\n    cmp r5, r0\n    bne _0221D46C\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r5, #6\n    beq _0221D47C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov08_0221D5DC\n    cmp r0, #0\n    beq _0221D4A2\n    ldr r0, [r4]\n    strb r5, [r0, #0x11]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    cmp r5, #6\n    beq _0221D494\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov08_0221D5DC\n    cmp r0, #0\n    beq _0221D4A2\n    ldr r0, [r4]\n    strb r5, [r0, #0x11]\n    add r0, r4, #0\n    bl ov08_022217C8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0221D4A8: .word ov08_02224F1C\n    _0221D4AC: .word 0x00002088"
    );
    #endif
}

void ov08_0221D4B0(void) {
    /* Original at 0x0221D4B0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0221D4F0 ; =ov08_02224E54\n    add r5, r0, #0\n    bl ov08_0221D5D0\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0221D4E4\n    ldr r0, _0221D4F4 ; =0x00002088\n    ldr r0, [r5, r0]\n    bl ov08_02224C94\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _0221D4DA\n    mov r4, #3\n    b _0221D4EA\n    add r0, r0, #1\n    cmp r4, r0\n    bne _0221D4EA\n    mov r0, #0xff\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov08_022217C8\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    _0221D4F0: .word ov08_02224E54\n    _0221D4F4: .word 0x00002088"
    );
    #endif
}

void ov08_0221D4F8(void) {
    /* Original at 0x0221D4F8 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0221D538 ; =ov08_02224E68\n    add r5, r0, #0\n    bl ov08_0221D5D0\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0221D52C\n    ldr r0, _0221D53C ; =0x00002088\n    ldr r0, [r5, r0]\n    bl ov08_02224C94\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _0221D522\n    mov r4, #3\n    b _0221D532\n    add r0, r0, #1\n    cmp r4, r0\n    bne _0221D532\n    mov r0, #0xff\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov08_022217C8\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    _0221D538: .word ov08_02224E68\n    _0221D53C: .word 0x00002088"
    );
    #endif
}

void ov08_0221D540(void) {
    /* Original at 0x0221D540 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0221D580 ; =ov08_02224F5C\n    add r5, r0, #0\n    bl ov08_0221D5D0\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0221D574\n    ldr r0, _0221D584 ; =0x00002088\n    ldr r0, [r5, r0]\n    bl ov08_02224C94\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _0221D56A\n    mov r4, #7\n    b _0221D57A\n    add r0, r0, #1\n    cmp r4, r0\n    bne _0221D57A\n    mov r0, #0xff\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov08_022217C8\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    _0221D580: .word ov08_02224F5C\n    _0221D584: .word 0x00002088"
    );
    #endif
}

void ov08_0221D588(void) {
    /* Original at 0x0221D588 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0221D5C8 ; =ov08_02224E7C\n    add r5, r0, #0\n    bl ov08_0221D5D0\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0221D5BC\n    ldr r0, _0221D5CC ; =0x00002088\n    ldr r0, [r5, r0]\n    bl ov08_02224C94\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _0221D5B2\n    mov r4, #4\n    b _0221D5C2\n    add r0, r0, #1\n    cmp r4, r0\n    bne _0221D5C2\n    mov r0, #0xff\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl ov08_022217C8\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, pc}\n    _0221D5C8: .word ov08_02224E7C\n    _0221D5CC: .word 0x00002088"
    );
    #endif
}

void ov08_0221D5D0(void) {
    TouchscreenHitbox_FindRectAtTouchNew();
}

void ov08_0221D5DC(void) {
    /* Original at 0x0221D5DC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #0x50\n    add r5, r0, #0\n    mul r1, r4\n    add r1, r5, r1\n    ldrh r1, [r1, #8]\n    cmp r1, #0\n    bne _0221D5F2\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r4, #0\n    beq _0221D60C\n    bl ov08_0221DAE4\n    cmp r0, #0\n    bne _0221D608\n    add r0, r5, #0\n    bl ov08_0221DB04\n    cmp r0, #0\n    beq _0221D610\n    cmp r4, #1\n    bne _0221D610\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #2\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov08_0221D614(void) {
    /* Original at 0x0221D614 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    add r7, r2, #0\n    add r6, r4, #0\n    bl ov08_0221DB04\n    cmp r0, #1\n    bne _0221D68C\n    ldr r2, _0221D6C8 ; =_02224E2C\n    add r1, sp, #0\n    ldrb r3, [r2]\n    add r0, sp, #0\n    mov r4, #0\n    strb r3, [r1]\n    ldrb r3, [r2, #1]\n    strb r3, [r1, #1]\n    ldrb r3, [r2, #2]\n    strb r3, [r1, #2]\n    ldrb r3, [r2, #3]\n    strb r3, [r1, #3]\n    ldrb r3, [r2, #4]\n    ldrb r2, [r2, #5]\n    strb r3, [r1, #4]\n    strb r2, [r1, #5]\n    ldrb r1, [r0]\n    cmp r6, r1\n    beq _0221D656\n    add r4, r4, #1\n    add r0, r0, #1\n    cmp r4, #6\n    blt _0221D648\n    add r4, r4, r7\n    bpl _0221D65E\n    mov r4, #5\n    b _0221D664\n    cmp r4, #6\n    blt _0221D664\n    mov r4, #0\n    add r0, sp, #0\n    ldrb r1, [r0, r4]\n    cmp r6, r1\n    beq _0221D6C0\n    add r0, r5, #0\n    bl ov08_0221D5DC\n    cmp r0, #0\n    beq _0221D656\n    add r0, sp, #0\n    ldrb r0, [r0, r4]\n    mov r1, #0x50\n    mul r1, r0\n    add r1, r5, r1\n    ldrb r1, [r1, #0x1b]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    bne _0221D656\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, r7\n    bpl _0221D694\n    mov r4, #5\n    b _0221D69A\n    cmp r4, #6\n    blt _0221D69A\n    mov r4, #0\n    cmp r6, r4\n    beq _0221D6C0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_0221D5DC\n    cmp r0, #0\n    beq _0221D68C\n    mov r0, #0x50\n    mul r0, r4\n    add r0, r5, r0\n    ldrb r0, [r0, #0x1b]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _0221D68C\n    lsl r0, r4, #0x18\n    add sp, #8\n    lsr r0, r0, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xff\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221D6C8: .word _02224E2C"
    );
    #endif
}

void ov08_0221D6CC(void) {
    /* Original at 0x0221D6CC */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    cmp r1, #2\n    bne _0221D74A\n    ldr r0, [r6]\n    add r2, r6, #4\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r1\n    add r0, r2, r0\n    ldrb r1, [r0, #0x16]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x19\n    cmp r1, #0x64\n    bhs _0221D6F6\n    ldr r2, [r0, #0x20]\n    ldr r1, [r0, #0x24]\n    ldr r0, [r0, #0x1c]\n    sub r1, r1, r2\n    sub r0, r0, r2\n    b _0221D6FA\n    mov r1, #0\n    add r0, r1, #0\n    mov r2, #0x40\n    bl CalculateHpBarPixelsLength\n    add r4, r0, #0\n    mov r5, #0\n    mov r7, #0x1e\n    cmp r4, #8\n    blo _0221D70E\n    add r1, r7, #0\n    b _0221D716\n    add r0, r4, #0\n    add r0, #0x16\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    add r2, r5, #0\n    add r2, #0xa\n    lsl r2, r2, #0x10\n    add r0, r6, #0\n    lsr r2, r2, #0x10\n    mov r3, #8\n    bl ov08_0221D74C\n    cmp r4, #8\n    bhs _0221D72E\n    mov r4, #0\n    b _0221D734\n    sub r4, #8\n    lsl r0, r4, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #8\n    blo _0221D706\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    mov r1, #7\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_0221D74C(void) {
    /* Original at 0x0221D74C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    lsl r1, r3, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    add r4, r2, #0\n    str r1, [sp, #8]\n    mov r1, #0x10\n    str r1, [sp, #0xc]\n    mov r1, #0x79\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    lsl r3, r4, #0x18\n    mov r1, #7\n    add r2, r5, #0\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov08_0221D77C(void) {
    /* Original at 0x0221D77C */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    lsl r6, r2, #1\n    add r4, r1, #0\n    str r0, [sp, #0xc]\n    mov r0, #0x79\n    add r7, r6, #2\n    lsl r0, r0, #2\n    lsl r3, r7, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #7\n    add r2, r4, #0\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #0x79\n    add r6, r6, #3\n    lsl r0, r0, #2\n    add r2, r4, #1\n    lsl r2, r2, #0x10\n    lsl r3, r6, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #7\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    mov r0, #0xf\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #0x79\n    add r2, r4, #0\n    lsl r0, r0, #2\n    add r2, #0x20\n    lsl r2, r2, #0x10\n    lsl r3, r7, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #7\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    mov r0, #0xf\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    mov r0, #0x79\n    lsl r0, r0, #2\n    add r4, #0x21\n    lsl r2, r4, #0x10\n    lsl r3, r6, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #7\n    lsr r2, r2, #0x10\n    lsr r3, r3, #0x18\n    bl FillBgTilemapRect\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_0221D81C(void) {
    /* Original at 0x0221D81C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r6, _0221D83C ; =0x00000125\n    add r5, r0, #0\n    mov r4, #0\n    lsl r2, r4, #0x18\n    add r0, r5, #0\n    add r1, r6, #0\n    lsr r2, r2, #0x18\n    bl ov08_0221D77C\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #6\n    blo _0221D824\n    pop {r4, r5, r6, pc}\n    _0221D83C: .word 0x00000125"
    );
    #endif
}

void ov08_0221D840(void) {
    /* Original at 0x0221D840 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov08_0221D8B0\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #4\n    mov r2, #0\n    bl BgFillTilemapBufferAndSchedule\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #5\n    mov r2, #0\n    bl BgFillTilemapBufferAndSchedule\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02220C5C\n    add r0, r5, #0\n    bl ov08_0221DD28\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_0221DC3C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_0221DD70\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_0221D6CC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_0222171C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_022221CC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02222524\n    ldr r0, _0221D8AC ; =0x0000207A\n    strb r4, [r5, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _0221D8AC: .word 0x0000207A"
    );
    #endif
}

void ov08_0221D8B0(void) {
    /* Original at 0x0221D8B0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r2, _0221D918 ; =ov08_02224F80\n    add r5, r0, #0\n    lsl r0, r1, #3\n    mov r4, #0\n    add r6, r2, r0\n    ldr r2, [r5]\n    ldr r1, [r6]\n    ldr r2, [r2, #0xc]\n    mov r0, #0x47\n    bl AllocAndReadWholeNarcMemberByIdPair\n    add r1, sp, #0xc\n    add r7, r0, #0\n    bl NNS_G2dGetUnpackedScreenData\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0x79\n    lsl r0, r0, #2\n    add r1, r4, #6\n    ldr r2, [sp, #0xc]\n    lsl r1, r1, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    add r2, #0xc\n    mov r3, #0\n    bl LoadRectToBgTilemapRect\n    mov r0, #0x79\n    lsl r0, r0, #2\n    add r1, r4, #6\n    lsl r1, r1, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    bl ScheduleBgTilemapBufferTransfer\n    add r0, r7, #0\n    bl Heap_Free\n    add r4, r4, #1\n    add r6, r6, #4\n    cmp r4, #2\n    blo _0221D8BE\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221D918: .word ov08_02224F80"
    );
    #endif
}

void ov08_0221D91C(void) {
    /* Original at 0x0221D91C */
    /* Requires manual decompilation - 180 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r2, #0x50\n    ldrb r1, [r1, #0x11]\n    add r3, r5, #4\n    mul r2, r1\n    add r4, r3, r2\n    bl ov08_0221DB24\n    cmp r0, #1\n    bne _0221D978\n    ldr r0, _0221DAB8 ; =0x00001FA8\n    mov r1, #0x50\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    add r4, r0, #0\n    ldr r0, [r1, #8]\n    ldr r1, [r1, #0x28]\n    bl BattleSystem_GetBattlerIdPartner\n    add r1, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetTrainer\n    add r2, r0, #0\n    ldr r0, _0221DABC ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferTrainerNameFromDataStruct\n    ldr r1, _0221DABC ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r4, #0x10]\n    cmp r0, #0\n    bne _0221D9B4\n    ldr r0, _0221DAB8 ; =0x00001FA8\n    mov r1, #0x4d\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r0, [r4]\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _0221DABC ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _0221DABC ; =0x00001FAC\n    add r2, r6, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [r5]\n    ldrb r0, [r2, #0x11]\n    add r0, r2, r0\n    add r0, #0x2c\n    ldrb r1, [r0]\n    ldrb r0, [r2, #0x14]\n    cmp r0, r1\n    beq _0221D9CA\n    ldrb r0, [r2, #0x15]\n    cmp r0, r1\n    bne _0221DA00\n    ldr r0, _0221DAB8 ; =0x00001FA8\n    mov r1, #0x4c\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r0, [r4]\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _0221DABC ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _0221DABC ; =0x00001FAC\n    add r2, r6, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov08_0221DAC4\n    cmp r0, #1\n    bne _0221DA1C\n    ldr r2, _0221DAB8 ; =0x00001FA8\n    mov r1, #0x4f\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [r5]\n    ldrb r1, [r2, #0x12]\n    cmp r1, #6\n    beq _0221DA6C\n    ldrb r4, [r2, #0x11]\n    add r0, r2, r4\n    add r0, #0x2c\n    ldrb r0, [r0]\n    cmp r1, r0\n    bne _0221DA6C\n    ldr r0, _0221DAB8 ; =0x00001FA8\n    mov r1, #0x5d\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r0, #0x50\n    mul r0, r4\n    add r0, r5, r0\n    ldr r0, [r0, #4]\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _0221DABC ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _0221DABC ; =0x00001FAC\n    add r2, r6, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r2, #0x24]\n    cmp r0, #0\n    beq _0221DAB4\n    ldr r1, _0221DAC0 ; =0x00002076\n    mov r0, #0x50\n    ldrb r2, [r5, r1]\n    sub r1, #0xce\n    add r4, r5, #4\n    add r6, r2, #0\n    mul r6, r0\n    ldr r0, [r5, r1]\n    mov r1, #0x4e\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    ldr r0, [r4, r6]\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _0221DABC ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _0221DABC ; =0x00001FAC\n    add r2, r7, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r7, #0\n    bl String_Delete\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221DAB8: .word 0x00001FA8\n    _0221DABC: .word 0x00001FAC\n    _0221DAC0: .word 0x00002076"
    );
    #endif
}

void ov08_0221DAC4(void) {
    /* Original at 0x0221DAC4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0]\n    ldrb r2, [r1, #0x11]\n    mov r1, #0x50\n    mul r1, r2\n    add r0, r0, r1\n    ldrb r0, [r0, #0x1b]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    beq _0221DADA\n    mov r0, #1\n    b _0221DADC\n    mov r0, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr"
    );
    #endif
}

void ov08_0221DAE4(void) {
    BattleSystem_GetBattleType(0, 1, 0x12);
}

void ov08_0221DB04(void) {
    BattleSystem_GetBattleType(0, 1, 8);
}

void ov08_0221DB24(void) {
    /* Original at 0x0221DB24 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov08_0221DB04\n    cmp r0, #1\n    bne _0221DB4C\n    ldr r0, _0221DB50 ; =0x0000208F\n    ldrb r0, [r5, r0]\n    cmp r0, #2\n    bne _0221DB44\n    mov r0, #1\n    add r1, r4, #0\n    tst r1, r0\n    beq _0221DB4C\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    add r1, r4, #0\n    tst r1, r0\n    beq _0221DB4E\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0221DB50: .word 0x0000208F"
    );
    #endif
}

void ov08_0221DB54(void) {
    /* Original at 0x0221DB54 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0]\n    add r1, r2, #0\n    add r1, #0x34\n    ldrb r3, [r1]\n    cmp r3, #4\n    bne _0221DB64\n    ldrh r0, [r2, #0x24]\n    b _0221DB72\n    ldrb r2, [r2, #0x11]\n    mov r1, #0x50\n    mul r1, r2\n    add r1, r0, r1\n    lsl r0, r3, #3\n    add r0, r1, r0\n    ldrh r0, [r0, #0x34]\n    ldr r3, _0221DB78 ; =MoveIsHM\n    bx r3\n    nop\n    _0221DB78: .word MoveIsHM"
    );
    #endif
}

void ov08_0221DB7C(void) {
    /* Original at 0x0221DB7C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0221DBAC ; =0x00002020\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _0221DBB0 ; =0x00002070\n    ldr r0, [r4, r0]\n    add r0, #0xa0\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _0221DBB0 ; =0x00002070\n    ldr r0, [r4, r0]\n    add r0, #0x60\n    bl ClearWindowTilemapAndScheduleTransfer\n    ldr r0, _0221DBB0 ; =0x00002070\n    ldr r0, [r4, r0]\n    add r0, #0x70\n    bl ClearWindowTilemapAndScheduleTransfer\n    pop {r4, pc}\n    nop\n    _0221DBAC: .word 0x00002020\n    _0221DBB0: .word 0x00002070"
    );
    #endif
}

void ov08_0221DBB4(void) {
    /* Original at 0x0221DBB4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov08_0221D81C\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #7\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r4, pc}"
    );
    #endif
}

void ov08_0221DBCC(void) {
    /* Original at 0x0221DBCC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r4, #0x41\n    beq _0221DBF0\n    cmp r4, #0x43\n    beq _0221DBF0\n    cmp r4, #0x42\n    beq _0221DBF0\n    bl BattleSystem_GetBag\n    add r1, r4, #0\n    mov r2, #1\n    add r3, r7, #0\n    bl Bag_TakeItem\n    add r0, r5, #0\n    bl BattleSystem_GetBagCursor\n    add r1, r4, #0\n    add r2, r6, #0\n    bl BagCursor_Battle_SetLastUsedItem\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_0221DC00(void) {
    /* Original at 0x0221DC00 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, _0221DC30 ; =0x00002050\n    ldr r4, _0221DC34 ; =ov08_02224FD0\n    mov r6, #0\n    add r5, r7, r0\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r7, r0]\n    add r1, r5, #0\n    add r2, r4, #0\n    bl AddWindow\n    add r6, r6, #1\n    add r4, #8\n    add r5, #0x10\n    cmp r6, #2\n    blo _0221DC0C\n    ldr r1, _0221DC38 ; =0x0000207A\n    add r0, r7, #0\n    ldrb r1, [r7, r1]\n    bl ov08_0221DC3C\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221DC30: .word 0x00002050\n    _0221DC34: .word ov08_02224FD0\n    _0221DC38: .word 0x0000207A"
    );
    #endif
}

void ov08_0221DC3C(void) {
    /* Original at 0x0221DC3C */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    cmp r1, #9\n    bhi _0221DCBC\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221DC50: ; jump table\n    ldr r0, _0221DCFC ; =0x00002074\n    mov r1, #6\n    ldr r6, _0221DD00 ; =ov08_02225084\n    strb r1, [r4, r0]\n    b _0221DCBC\n    ldr r0, _0221DCFC ; =0x00002074\n    mov r1, #4\n    ldr r6, _0221DD04 ; =ov08_0222500C\n    strb r1, [r4, r0]\n    b _0221DCBC\n    ldr r0, _0221DCFC ; =0x00002074\n    mov r1, #0x23\n    ldr r6, _0221DD08 ; =ov08_0222522C\n    strb r1, [r4, r0]\n    b _0221DCBC\n    ldr r0, _0221DCFC ; =0x00002074\n    mov r1, #0xb\n    ldr r6, _0221DD0C ; =ov08_022250EC\n    strb r1, [r4, r0]\n    b _0221DCBC\n    ldr r0, _0221DCFC ; =0x00002074\n    mov r1, #0x11\n    ldr r6, _0221DD10 ; =ov08_022251A4\n    strb r1, [r4, r0]\n    b _0221DCBC\n    ldr r0, _0221DCFC ; =0x00002074\n    mov r1, #5\n    ldr r6, _0221DD14 ; =ov08_0222502C\n    strb r1, [r4, r0]\n    b _0221DCBC\n    ldr r0, _0221DCFC ; =0x00002074\n    mov r1, #6\n    ldr r6, _0221DD18 ; =ov08_02225054\n    strb r1, [r4, r0]\n    b _0221DCBC\n    ldr r0, _0221DCFC ; =0x00002074\n    mov r1, #0xc\n    ldr r6, _0221DD1C ; =ov08_02225144\n    strb r1, [r4, r0]\n    b _0221DCBC\n    ldr r0, _0221DCFC ; =0x00002074\n    mov r1, #7\n    ldr r6, _0221DD20 ; =ov08_022250B4\n    strb r1, [r4, r0]\n    ldr r1, _0221DCFC ; =0x00002074\n    ldr r0, [r4]\n    ldrb r1, [r4, r1]\n    ldr r0, [r0, #0xc]\n    bl AllocWindows\n    ldr r1, _0221DD24 ; =0x00002070\n    mov r5, #0\n    str r0, [r4, r1]\n    add r0, r1, #4\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bls _0221DCFA\n    add r7, r1, #4\n    ldr r1, _0221DD24 ; =0x00002070\n    mov r0, #0x79\n    ldr r2, [r4, r1]\n    lsl r0, r0, #2\n    lsl r1, r5, #4\n    add r1, r2, r1\n    lsl r2, r5, #3\n    ldr r0, [r4, r0]\n    add r2, r6, r2\n    bl AddWindow\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldrb r0, [r4, r7]\n    cmp r5, r0\n    blo _0221DCD8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221DCFC: .word 0x00002074\n    _0221DD00: .word ov08_02225084\n    _0221DD04: .word ov08_0222500C\n    _0221DD08: .word ov08_0222522C\n    _0221DD0C: .word ov08_022250EC\n    _0221DD10: .word ov08_022251A4\n    _0221DD14: .word ov08_0222502C\n    _0221DD18: .word ov08_02225054\n    _0221DD1C: .word ov08_02225144\n    _0221DD20: .word ov08_022250B4\n    _0221DD24: .word 0x00002070"
    );
    #endif
}

void ov08_0221DD28(void) {
    /* Original at 0x0221DD28 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0221DD38 ; =0x00002070\n    add r2, r0, #0\n    ldr r0, [r2, r1]\n    add r1, r1, #4\n    ldr r3, _0221DD3C ; =WindowArray_Delete\n    ldrb r1, [r2, r1]\n    bx r3\n    nop\n    _0221DD38: .word 0x00002070\n    _0221DD3C: .word WindowArray_Delete"
    );
    #endif
}

void ov08_0221DD40(void) {
    /* Original at 0x0221DD40 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0221DD68 ; =0x00002070\n    add r5, r0, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldrb r1, [r5, r1]\n    bl WindowArray_Delete\n    ldr r0, _0221DD6C ; =0x00002050\n    mov r4, #0\n    add r5, r5, r0\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #2\n    blo _0221DD56\n    pop {r3, r4, r5, pc}\n    nop\n    _0221DD68: .word 0x00002070\n    _0221DD6C: .word 0x00002050"
    );
    #endif
}

void ov08_0221DD70(void) {
    /* Original at 0x0221DD70 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #9\n    bhi _0221DDCA\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0221DD82: ; jump table\n    bl ov08_0221F4A4\n    pop {r3, pc}\n    bl ov08_0221F5D0\n    pop {r3, pc}\n    bl ov08_0221F900\n    pop {r3, pc}\n    bl ov08_0221F7C0\n    pop {r3, pc}\n    bl ov08_0221FB18\n    pop {r3, pc}\n    bl ov08_0221FF70\n    pop {r3, pc}\n    bl ov08_0221FC7C\n    pop {r3, pc}\n    bl ov08_0221FDA4\n    pop {r3, pc}\n    bl ov08_02220084\n    pop {r3, pc}"
    );
    #endif
}

void ov08_0221DDCC(void) {
    /* Original at 0x0221DDCC */
    /* Requires manual decompilation - 187 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r6, r0, #0\n    ldr r0, _0221DF5C ; =0x00002070\n    str r3, [sp, #0x14]\n    ldr r5, [r6, r0]\n    lsl r4, r1, #4\n    ldr r0, [sp, #0x14]\n    mov r1, #0x50\n    mul r1, r0\n    add r7, r6, #4\n    add r0, r7, r1\n    str r1, [sp, #0x24]\n    ldr r1, [r6]\n    str r0, [sp, #0x20]\n    ldr r1, [r1, #0xc]\n    mov r0, #0xc\n    str r2, [sp, #0x10]\n    bl String_New\n    ldr r1, [sp, #0x14]\n    str r0, [sp, #0x1c]\n    ldr r0, _0221DF60 ; =0x00001FA8\n    lsl r2, r1, #2\n    ldr r1, _0221DF64 ; =ov08_02224FF4\n    ldr r0, [r6, r0]\n    ldr r1, [r1, r2]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x24]\n    ldr r0, [r7, r0]\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _0221DF68 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r6, r0]\n    bl BufferBoxMonNickname\n    ldr r0, _0221DF68 ; =0x00001FAC\n    ldr r1, [sp, #0x1c]\n    ldr r0, [r6, r0]\n    ldr r2, [sp, #0x18]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x10]\n    add r3, sp, #0x38\n    cmp r0, #0\n    bne _0221DE4E\n    ldrb r7, [r3, #0x14]\n    mov r0, #0xff\n    ldr r1, [sp, #0x10]\n    str r7, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0221DF6C ; =0x000F0E00\n    ldr r2, [sp, #0x1c]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldrb r3, [r3, #0x10]\n    add r0, r5, r4\n    bl AddTextPrinterParameterizedWithColor\n    b _0221DE6A\n    ldrb r7, [r3, #0x14]\n    mov r0, #0xff\n    ldr r1, [sp, #0x10]\n    str r7, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0221DF70 ; =0x00070809\n    ldr r2, [sp, #0x1c]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldrb r3, [r3, #0x10]\n    add r0, r5, r4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    ldr r0, [sp, #0x1c]\n    bl String_Delete\n    ldr r0, [sp, #0x20]\n    ldrb r0, [r0, #0x16]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _0221DF50\n    ldr r0, [sp, #0x20]\n    ldrb r0, [r0, #0x17]\n    lsl r1, r0, #0x18\n    lsr r1, r1, #0x1f\n    bne _0221DF50\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1d\n    bne _0221DEEE\n    ldr r0, _0221DF60 ; =0x00001FA8\n    mov r1, #0x10\n    ldr r0, [r6, r0]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    add r0, r5, r4\n    bl GetWindowWidth\n    str r0, [sp, #0x28]\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    ldr r1, [sp, #0x28]\n    str r7, [sp]\n    lsl r1, r1, #3\n    sub r3, r1, r0\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    bne _0221DED2\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221DF74 ; =0x00070800\n    mov r1, #0\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r2, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    b _0221DEE6\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221DF78 ; =0x000A0B00\n    mov r1, #0\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r2, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    b _0221DF50\n    cmp r0, #1\n    bne _0221DF50\n    ldr r0, _0221DF60 ; =0x00001FA8\n    mov r1, #0x11\n    ldr r0, [r6, r0]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    add r0, r5, r4\n    bl GetWindowWidth\n    str r0, [sp, #0x2c]\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    ldr r1, [sp, #0x2c]\n    str r7, [sp]\n    lsl r1, r1, #3\n    sub r3, r1, r0\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    bne _0221DF36\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    mov r1, #0\n    add r0, r5, r4\n    add r2, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    b _0221DF4A\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221DF7C ; =0x000C0D00\n    mov r1, #0\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r2, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221DF5C: .word 0x00002070\n    _0221DF60: .word 0x00001FA8\n    _0221DF64: .word ov08_02224FF4\n    _0221DF68: .word 0x00001FAC\n    _0221DF6C: .word 0x000F0E00\n    _0221DF70: .word 0x00070809\n    _0221DF74: .word 0x00070800\n    _0221DF78: .word 0x000A0B00\n    _0221DF7C: .word 0x000C0D00"
    );
    #endif
}

void ov08_0221DF80(void) {
    /* Original at 0x0221DF80 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0221DFC4 ; =0x00002070\n    lsl r4, r1, #4\n    ldr r1, [r5, r0]\n    add r3, #8\n    add r1, r1, r4\n    str r1, [sp, #4]\n    str r3, [sp, #8]\n    add r1, sp, #0x10\n    ldrb r1, [r1, #0x10]\n    mov r3, #0x50\n    mul r3, r2\n    str r1, [sp, #0xc]\n    add r2, r5, r3\n    ldrb r2, [r2, #0x1a]\n    sub r0, #0xcc\n    ldr r0, [r5, r0]\n    lsl r2, r2, #0x19\n    mov r1, #1\n    lsr r2, r2, #0x19\n    mov r3, #3\n    bl sub_0200CE7C\n    ldr r0, _0221DFC4 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0221DFC4: .word 0x00002070"
    );
    #endif
}

void ov08_0221DFC8(void) {
    /* Original at 0x0221DFC8 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0x50\n    add r7, r3, #0\n    mul r0, r2\n    add r3, r5, #4\n    add r0, r3, r0\n    str r0, [sp, #0xc]\n    add r0, sp, #0x18\n    ldrb r6, [r0, #0x10]\n    ldr r0, _0221E040 ; =0x00002070\n    lsl r4, r1, #4\n    ldr r1, [r5, r0]\n    sub r0, #0xcc\n    add r1, r1, r4\n    str r1, [sp]\n    str r7, [sp, #4]\n    str r6, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    ldrh r1, [r1, #0x10]\n    mov r2, #3\n    mov r3, #1\n    bl PrintUIntOnWindow\n    add r3, r7, #0\n    ldr r2, _0221E044 ; =0x00001FA4\n    str r6, [sp]\n    ldr r0, [r5, r2]\n    add r2, #0xcc\n    ldr r2, [r5, r2]\n    mov r1, #0\n    add r2, r2, r4\n    add r3, #0x18\n    bl sub_0200CDAC\n    ldr r0, _0221E040 ; =0x00002070\n    add r7, #0x20\n    ldr r1, [r5, r0]\n    sub r0, #0xcc\n    add r1, r1, r4\n    str r1, [sp]\n    str r7, [sp, #4]\n    str r6, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    ldrh r1, [r1, #0x12]\n    mov r2, #3\n    mov r3, #0\n    bl PrintUIntOnWindow\n    ldr r0, _0221E040 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221E040: .word 0x00002070\n    _0221E044: .word 0x00001FA4"
    );
    #endif
}

void ov08_0221E048(void) {
    /* Original at 0x0221E048 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    mov r0, #0x50\n    str r1, [sp, #8]\n    mul r0, r2\n    add r1, r4, #4\n    str r3, [sp, #0xc]\n    add r5, r1, r0\n    ldrh r0, [r5, #0x10]\n    ldrh r1, [r5, #0x12]\n    mov r2, #0x30\n    mov r7, #1\n    bl CalculateHpBarPixelsLength\n    str r0, [sp, #0x14]\n    ldrh r0, [r5, #0x10]\n    ldrh r1, [r5, #0x12]\n    mov r2, #0x30\n    bl CalculateHpBarColor\n    cmp r0, #4\n    bhi _0221E0A6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221E082: ; jump table\n    ldr r0, _0221E11C ; =0x00002070\n    ldr r1, [r4, r0]\n    ldr r0, [sp, #8]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    b _0221E0A6\n    mov r7, #3\n    b _0221E0A6\n    mov r7, #5\n    add r0, sp, #0x20\n    ldrb r6, [r0, #0x10]\n    add r0, r7, #1\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0x10]\n    lsl r5, r0, #4\n    ldr r0, [sp, #0x14]\n    add r3, r6, #1\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221E11C ; =0x00002070\n    lsl r1, r1, #0x18\n    ldr r0, [r4, r0]\n    lsl r3, r3, #0x10\n    ldr r2, [sp, #0xc]\n    add r0, r0, r5\n    lsr r1, r1, #0x18\n    lsr r3, r3, #0x10\n    bl FillWindowPixelRect\n    ldr r0, [sp, #0x14]\n    add r3, r6, #2\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _0221E11C ; =0x00002070\n    lsl r3, r3, #0x10\n    ldr r0, [r4, r0]\n    ldr r2, [sp, #0xc]\n    add r0, r0, r5\n    add r1, r7, #0\n    lsr r3, r3, #0x10\n    bl FillWindowPixelRect\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x10]\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221E11C ; =0x00002070\n    add r3, r6, #4\n    ldr r0, [r4, r0]\n    lsl r1, r1, #0x18\n    lsl r3, r3, #0x10\n    ldr r2, [sp, #0xc]\n    add r0, r0, r5\n    lsr r1, r1, #0x18\n    lsr r3, r3, #0x10\n    bl FillWindowPixelRect\n    ldr r0, _0221E11C ; =0x00002070\n    ldr r0, [r4, r0]\n    add r0, r0, r5\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221E11C: .word 0x00002070"
    );
    #endif
}

void ov08_0221E120(void) {
    /* Original at 0x0221E120 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5]\n    mov r0, #0x10\n    ldr r1, [r1, #0xc]\n    add r7, r2, #0\n    bl String_New\n    add r6, r0, #0\n    ldr r0, _0221E198 ; =0x00001FA8\n    mov r1, #8\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    mov r2, #0x50\n    mul r2, r7\n    str r0, [sp, #0x10]\n    ldr r0, _0221E19C ; =0x00001FAC\n    add r2, r5, r2\n    ldrh r2, [r2, #0x1c]\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl BufferAbilityName\n    ldr r0, _0221E19C ; =0x00001FAC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl StringExpandPlaceholders\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E1A0 ; =0x000F0E00\n    lsl r4, r4, #4\n    str r0, [sp, #8]\n    ldr r0, _0221E1A4 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r2, r6, #0\n    add r0, r0, r4\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221E1A4 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0221E198: .word 0x00001FA8\n    _0221E19C: .word 0x00001FAC\n    _0221E1A0: .word 0x000F0E00\n    _0221E1A4: .word 0x00002070"
    );
    #endif
}

void ov08_0221E1A8(void) {
    /* Original at 0x0221E1A8 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #0x50\n    add r7, r1, #0\n    add r1, r4, #4\n    mul r0, r2\n    add r5, r1, r0\n    ldrh r0, [r5, #0x1a]\n    cmp r0, #0\n    bne _0221E1CC\n    ldr r0, _0221E234 ; =0x00001FA8\n    mov r1, #0x14\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    b _0221E202\n    ldr r1, [r4]\n    mov r0, #0x12\n    ldr r1, [r1, #0xc]\n    bl String_New\n    add r6, r0, #0\n    ldr r0, _0221E234 ; =0x00001FA8\n    mov r1, #9\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x10]\n    ldr r0, _0221E238 ; =0x00001FAC\n    ldrh r2, [r5, #0x1a]\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl BufferItemName\n    ldr r0, _0221E238 ; =0x00001FAC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r4, r0]\n    add r1, r6, #0\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E23C ; =0x000F0E00\n    lsl r5, r7, #4\n    str r0, [sp, #8]\n    ldr r0, _0221E240 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r4, r0]\n    add r2, r6, #0\n    add r0, r0, r5\n    add r3, r1, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221E240 ; =0x00002070\n    ldr r0, [r4, r0]\n    add r0, r0, r5\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0221E234: .word 0x00001FA8\n    _0221E238: .word 0x00001FAC\n    _0221E23C: .word 0x000F0E00\n    _0221E240: .word 0x00002070"
    );
    #endif
}

void ov08_0221E244(void) {
    /* Original at 0x0221E244 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    str r1, [sp, #0x10]\n    ldr r1, [r5]\n    ldr r0, _0221E2DC ; =0x00002070\n    ldr r1, [r1, #0xc]\n    ldr r4, [r5, r0]\n    mov r0, #0x10\n    str r3, [sp, #0x14]\n    lsl r6, r2, #4\n    bl String_New\n    add r7, r0, #0\n    ldr r0, _0221E2E0 ; =0x00001FA8\n    ldr r1, [sp, #0x14]\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x18]\n    ldr r0, _0221E2E4 ; =0x00001FAC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl BufferMoveName\n    ldr r0, _0221E2E4 ; =0x00001FAC\n    ldr r2, [sp, #0x18]\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl StringExpandPlaceholders\n    add r0, sp, #0x20\n    ldrh r0, [r0, #0x10]\n    cmp r0, #4\n    bne _0221E2A8\n    add r0, r4, r6\n    bl GetWindowWidth\n    add r5, r0, #0\n    add r0, sp, #0x20\n    ldrh r0, [r0, #0x10]\n    add r1, r7, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    lsl r1, r5, #3\n    sub r0, r1, r0\n    lsr r3, r0, #1\n    b _0221E2AA\n    mov r3, #0\n    add r1, sp, #0x20\n    ldrh r0, [r1, #0x14]\n    add r2, r7, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x38]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldrh r1, [r1, #0x10]\n    add r0, r4, r6\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _0221E2DC: .word 0x00002070\n    _0221E2E0: .word 0x00001FA8\n    _0221E2E4: .word 0x00001FAC"
    );
    #endif
}

void ov08_0221E2E8(void) {
    /* Original at 0x0221E2E8 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, _0221E334 ; =0x00001FA8\n    str r2, [sp, #0x10]\n    add r5, r1, #0\n    ldr r0, [r4, r0]\n    add r6, r3, #0\n    mov r1, #0xe\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    str r6, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E338 ; =0x000F0E00\n    mov r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r0, _0221E33C ; =0x00002070\n    lsl r5, r5, #4\n    ldr r0, [r4, r0]\n    ldr r3, [sp, #0x10]\n    add r0, r0, r5\n    add r2, r7, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    ldr r0, _0221E33C ; =0x00002070\n    ldr r0, [r4, r0]\n    add r0, r0, r5\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221E334: .word 0x00001FA8\n    _0221E338: .word 0x000F0E00\n    _0221E33C: .word 0x00002070"
    );
    #endif
}

void ov08_0221E340(void) {
    /* Original at 0x0221E340 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, _0221E398 ; =0x00002050\n    add r5, r1, #0\n    mov r1, #1\n    add r0, r4, r0\n    add r2, r1, #0\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    ldr r0, _0221E398 ; =0x00002050\n    mov r1, #0xf\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221E39C ; =0x00001FA8\n    add r1, r5, #0\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E3A0 ; =0x00010200\n    mov r1, #1\n    str r0, [sp, #8]\n    ldr r0, _0221E398 ; =0x00002050\n    add r2, r5, #0\n    add r0, r4, r0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl String_Delete\n    ldr r0, _0221E398 ; =0x00002050\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0221E398: .word 0x00002050\n    _0221E39C: .word 0x00001FA8\n    _0221E3A0: .word 0x00010200"
    );
    #endif
}

void ov08_0221E3A4(void) {
    /* Original at 0x0221E3A4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r3, _0221E400 ; =0x00002070\n    lsl r4, r1, #4\n    ldr r5, [r0, r3]\n    sub r3, #0xc8\n    ldr r0, [r0, r3]\n    add r1, r2, #0\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    mov r0, #4\n    add r1, r7, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    add r6, r0, #0\n    add r0, r5, r4\n    bl GetWindowWidth\n    add r3, r0, #0\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E404 ; =0x00070809\n    lsl r3, r3, #3\n    str r0, [sp, #8]\n    mov r0, #0\n    sub r3, r3, r6\n    str r0, [sp, #0xc]\n    add r0, r5, r4\n    mov r1, #4\n    add r2, r7, #0\n    lsr r3, r3, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221E400: .word 0x00002070\n    _0221E404: .word 0x00070809"
    );
    #endif
}

void ov08_0221E408(void) {
    /* Original at 0x0221E408 */
    /* Requires manual decompilation - 201 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    mov r0, #0x50\n    mul r0, r1\n    add r2, r5, #4\n    add r4, r2, r0\n    ldr r1, _0221E5C4 ; =0x00002075\n    mov r0, #0x16\n    ldrb r2, [r5, r1]\n    sub r1, #0xcd\n    mul r0, r2\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldr r0, [r5, r1]\n    mov r1, #0x17\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r7, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r2, _0221E5C8 ; =0x000F0E00\n    add r0, #0x31\n    str r2, [sp, #8]\n    ldr r2, _0221E5CC ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r2, [r5, r2]\n    add r3, r1, #0\n    add r0, r2, r0\n    add r2, r7, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    ldr r0, _0221E5D0 ; =0x00001FA8\n    mov r1, #0x18\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    str r0, [sp, #0x18]\n    ldr r1, [r1, #0xc]\n    mov r0, #8\n    bl String_New\n    mov r1, #0\n    str r0, [sp, #0x1c]\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldrb r2, [r4, #0x16]\n    ldr r0, _0221E5D4 ; =0x00001FAC\n    mov r3, #3\n    lsl r2, r2, #0x19\n    ldr r0, [r5, r0]\n    lsr r2, r2, #0x19\n    bl BufferIntegerAsString\n    ldr r0, _0221E5D4 ; =0x00001FAC\n    ldr r1, [sp, #0x1c]\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x18]\n    bl StringExpandPlaceholders\n    mov r1, #0\n    add r0, r6, #0\n    add r0, #0xb\n    lsl r7, r0, #4\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E5C8 ; =0x000F0E00\n    ldr r2, [sp, #0x1c]\n    str r0, [sp, #8]\n    ldr r0, _0221E5CC ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    add r0, r0, r7\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    ldr r0, [sp, #0x1c]\n    bl String_Delete\n    ldr r0, _0221E5D0 ; =0x00001FA8\n    mov r1, #0x19\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    mov r1, #0\n    str r0, [sp, #0x20]\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r2, _0221E5C8 ; =0x000F0E00\n    add r0, #0x41\n    str r2, [sp, #8]\n    ldr r2, _0221E5CC ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r2, [r5, r2]\n    add r3, r1, #0\n    add r0, r2, r0\n    ldr r2, [sp, #0x20]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    ldr r0, _0221E5D0 ; =0x00001FA8\n    mov r1, #0x1a\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    str r0, [sp, #0x14]\n    ldr r1, [r1, #0xc]\n    mov r0, #0xe\n    bl String_New\n    str r0, [sp, #0x10]\n    ldrb r0, [r4, #0x16]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x19\n    cmp r0, #0x64\n    bhs _0221E528\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0221E5D4 ; =0x00001FAC\n    ldr r2, [r4, #0x24]\n    ldr r3, [r4, #0x1c]\n    ldr r0, [r5, r0]\n    sub r2, r2, r3\n    mov r1, #0\n    mov r3, #6\n    bl BufferIntegerAsString\n    b _0221E53C\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0221E5D4 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    mov r3, #6\n    bl BufferIntegerAsString\n    ldr r0, _0221E5D4 ; =0x00001FAC\n    ldr r1, [sp, #0x10]\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x14]\n    bl StringExpandPlaceholders\n    ldr r0, _0221E5CC ; =0x00002070\n    add r6, #0xc\n    ldr r0, [r5, r0]\n    lsl r4, r6, #4\n    add r0, r0, r4\n    bl GetWindowWidth\n    add r6, r0, #0\n    mov r0, #0\n    ldr r1, [sp, #0x10]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r1, r6, #3\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    mov r1, #0\n    lsr r3, r0, #0x10\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E5D8 ; =0x00010200\n    ldr r2, [sp, #0x10]\n    str r0, [sp, #8]\n    ldr r0, _0221E5CC ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    ldr r0, _0221E5CC ; =0x00002070\n    ldr r1, [r5, r0]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221E5CC ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r7\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221E5CC ; =0x00002070\n    ldr r1, [r5, r0]\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221E5CC ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _0221E5C4: .word 0x00002075\n    _0221E5C8: .word 0x000F0E00\n    _0221E5CC: .word 0x00002070\n    _0221E5D0: .word 0x00001FA8\n    _0221E5D4: .word 0x00001FAC\n    _0221E5D8: .word 0x00010200"
    );
    #endif
}

void ov08_0221E5DC(void) {
    /* Original at 0x0221E5DC */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r1, #0\n    add r5, r0, #0\n    ldr r1, _0221E6C0 ; =0x00002075\n    mov r0, #0x16\n    ldrb r2, [r5, r1]\n    sub r1, #0xcd\n    mul r0, r2\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [r5, r1]\n    mov r1, #0x20\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E6C4 ; =0x000F0E00\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, _0221E6C8 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    add r0, #0xe0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221E6CC ; =0x00001FA8\n    mov r1, #0x21\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    str r0, [sp, #0x10]\n    ldr r1, [r1, #0xc]\n    mov r0, #8\n    bl String_New\n    mov r1, #0\n    mov r2, #0x50\n    add r6, r0, #0\n    mul r2, r7\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221E6D0 ; =0x00001FAC\n    add r2, r5, r2\n    ldrh r2, [r2, #0xa]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _0221E6D0 ; =0x00001FAC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    add r0, r4, #5\n    lsl r4, r0, #4\n    ldr r0, _0221E6C8 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r7\n    lsl r0, r0, #0x18\n    mov r1, #0\n    lsr r3, r0, #0x18\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E6D4 ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, _0221E6C8 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221E6C8 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0xe0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221E6C8 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221E6C0: .word 0x00002075\n    _0221E6C4: .word 0x000F0E00\n    _0221E6C8: .word 0x00002070\n    _0221E6CC: .word 0x00001FA8\n    _0221E6D0: .word 0x00001FAC\n    _0221E6D4: .word 0x00010200"
    );
    #endif
}

void ov08_0221E6D8(void) {
    /* Original at 0x0221E6D8 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r1, #0\n    add r5, r0, #0\n    ldr r1, _0221E7BC ; =0x00002075\n    mov r0, #0x16\n    ldrb r2, [r5, r1]\n    sub r1, #0xcd\n    mul r0, r2\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [r5, r1]\n    mov r1, #0x22\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E7C0 ; =0x000F0E00\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, _0221E7C4 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    add r0, #0xf0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221E7C8 ; =0x00001FA8\n    mov r1, #0x23\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    str r0, [sp, #0x10]\n    ldr r1, [r1, #0xc]\n    mov r0, #8\n    bl String_New\n    mov r1, #0\n    mov r2, #0x50\n    add r6, r0, #0\n    mul r2, r7\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221E7CC ; =0x00001FAC\n    add r2, r5, r2\n    ldrh r2, [r2, #0xc]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _0221E7CC ; =0x00001FAC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    add r0, r4, #6\n    lsl r4, r0, #4\n    ldr r0, _0221E7C4 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r7\n    lsl r0, r0, #0x18\n    mov r1, #0\n    lsr r3, r0, #0x18\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E7D0 ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, _0221E7C4 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221E7C4 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0xf0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221E7C4 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221E7BC: .word 0x00002075\n    _0221E7C0: .word 0x000F0E00\n    _0221E7C4: .word 0x00002070\n    _0221E7C8: .word 0x00001FA8\n    _0221E7CC: .word 0x00001FAC\n    _0221E7D0: .word 0x00010200"
    );
    #endif
}

void ov08_0221E7D4(void) {
    /* Original at 0x0221E7D4 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r1, #0\n    add r5, r0, #0\n    ldr r1, _0221E8BC ; =0x00002075\n    mov r0, #0x16\n    ldrb r2, [r5, r1]\n    sub r1, #0xcd\n    mul r0, r2\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [r5, r1]\n    mov r1, #0x28\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r2, #0xff\n    str r2, [sp, #4]\n    ldr r0, _0221E8C0 ; =0x000F0E00\n    add r2, r2, #1\n    str r0, [sp, #8]\n    ldr r0, _0221E8C4 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    add r0, r0, r2\n    add r2, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221E8C8 ; =0x00001FA8\n    mov r1, #0x29\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    str r0, [sp, #0x10]\n    ldr r1, [r1, #0xc]\n    mov r0, #8\n    bl String_New\n    mov r1, #0\n    mov r2, #0x50\n    add r6, r0, #0\n    mul r2, r7\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221E8CC ; =0x00001FAC\n    add r2, r5, r2\n    ldrh r2, [r2, #0xe]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _0221E8CC ; =0x00001FAC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    add r0, r4, #7\n    lsl r4, r0, #4\n    ldr r0, _0221E8C4 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r7\n    lsl r0, r0, #0x18\n    mov r1, #0\n    lsr r3, r0, #0x18\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E8D0 ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, _0221E8C4 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221E8C4 ; =0x00002070\n    ldr r1, [r5, r0]\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221E8C4 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0221E8BC: .word 0x00002075\n    _0221E8C0: .word 0x000F0E00\n    _0221E8C4: .word 0x00002070\n    _0221E8C8: .word 0x00001FA8\n    _0221E8CC: .word 0x00001FAC\n    _0221E8D0: .word 0x00010200"
    );
    #endif
}

void ov08_0221E8D4(void) {
    /* Original at 0x0221E8D4 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r1, #0\n    add r4, r0, #0\n    ldr r1, _0221E9BC ; =0x00002075\n    mov r0, #0x16\n    ldrb r2, [r4, r1]\n    sub r1, #0xcd\n    mul r0, r2\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    ldr r0, [r4, r1]\n    mov r1, #0x24\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r2, _0221E9C0 ; =0x000F0E00\n    add r0, #0x11\n    str r2, [sp, #8]\n    ldr r2, _0221E9C4 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r2, [r4, r2]\n    add r3, r1, #0\n    add r0, r2, r0\n    add r2, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221E9C8 ; =0x00001FA8\n    mov r1, #0x25\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r4]\n    str r0, [sp, #0x10]\n    ldr r1, [r1, #0xc]\n    mov r0, #8\n    bl String_New\n    mov r1, #0\n    mov r2, #0x50\n    add r6, r0, #0\n    mul r2, r7\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221E9CC ; =0x00001FAC\n    add r2, r4, r2\n    ldrh r2, [r2, #0x10]\n    ldr r0, [r4, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _0221E9CC ; =0x00001FAC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r4, r0]\n    add r1, r6, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, _0221E9C4 ; =0x00002070\n    add r5, #8\n    ldr r0, [r4, r0]\n    lsl r5, r5, #4\n    add r0, r0, r5\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r7\n    lsl r0, r0, #0x18\n    mov r1, #0\n    lsr r3, r0, #0x18\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E9D0 ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, _0221E9C4 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r4, r0]\n    add r0, r0, r5\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221E9C4 ; =0x00002070\n    ldr r1, [r4, r0]\n    mov r0, #0x11\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221E9C4 ; =0x00002070\n    ldr r0, [r4, r0]\n    add r0, r0, r5\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0221E9BC: .word 0x00002075\n    _0221E9C0: .word 0x000F0E00\n    _0221E9C4: .word 0x00002070\n    _0221E9C8: .word 0x00001FA8\n    _0221E9CC: .word 0x00001FAC\n    _0221E9D0: .word 0x00010200"
    );
    #endif
}

void ov08_0221E9D4(void) {
    /* Original at 0x0221E9D4 */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r1, #0\n    add r4, r0, #0\n    ldr r1, _0221EABC ; =0x00002075\n    mov r0, #0x16\n    ldrb r2, [r4, r1]\n    sub r1, #0xcd\n    mul r0, r2\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    ldr r0, [r4, r1]\n    mov r1, #0x26\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r2, _0221EAC0 ; =0x000F0E00\n    add r0, #0x21\n    str r2, [sp, #8]\n    ldr r2, _0221EAC4 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r2, [r4, r2]\n    add r3, r1, #0\n    add r0, r2, r0\n    add r2, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221EAC8 ; =0x00001FA8\n    mov r1, #0x27\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r4]\n    str r0, [sp, #0x10]\n    ldr r1, [r1, #0xc]\n    mov r0, #8\n    bl String_New\n    mov r1, #0\n    mov r2, #0x50\n    add r6, r0, #0\n    mul r2, r7\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221EACC ; =0x00001FAC\n    add r2, r4, r2\n    ldrh r2, [r2, #0x12]\n    ldr r0, [r4, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _0221EACC ; =0x00001FAC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r4, r0]\n    add r1, r6, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r6, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, _0221EAC4 ; =0x00002070\n    add r5, #9\n    ldr r0, [r4, r0]\n    lsl r5, r5, #4\n    add r0, r0, r5\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r7\n    lsl r0, r0, #0x18\n    mov r1, #0\n    lsr r3, r0, #0x18\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221EAD0 ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, _0221EAC4 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r4, r0]\n    add r0, r0, r5\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221EAC4 ; =0x00002070\n    ldr r1, [r4, r0]\n    mov r0, #0x12\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221EAC4 ; =0x00002070\n    ldr r0, [r4, r0]\n    add r0, r0, r5\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0221EABC: .word 0x00002075\n    _0221EAC0: .word 0x000F0E00\n    _0221EAC4: .word 0x00002070\n    _0221EAC8: .word 0x00001FA8\n    _0221EACC: .word 0x00001FAC\n    _0221EAD0: .word 0x00010200"
    );
    #endif
}

void ov08_0221EAD4(void) {
    /* Original at 0x0221EAD4 */
    /* Requires manual decompilation - 173 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    mov r0, #0x50\n    mul r0, r1\n    add r2, r5, #4\n    add r7, r2, r0\n    ldr r1, _0221EC54 ; =0x00002075\n    mov r0, #0x16\n    ldrb r2, [r5, r1]\n    sub r1, #0xcd\n    mul r0, r2\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [r5, r1]\n    mov r1, #0x1c\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221EC58 ; =0x000F0E00\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, _0221EC5C ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    add r0, #0xd0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _0221EC60 ; =0x00001FA8\n    mov r1, #0x1f\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x10]\n    mov r0, #0\n    ldr r1, [sp, #0x10]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    str r0, [sp, #0x14]\n    ldr r0, _0221EC5C ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0x40\n    bl GetWindowWidth\n    lsl r1, r0, #3\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x10]\n    sub r0, r1, r0\n    lsl r0, r0, #0xf\n    lsr r6, r0, #0x10\n    add r0, r4, #4\n    mov r1, #0\n    lsl r4, r0, #4\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221EC64 ; =0x00010200\n    add r3, r6, #0\n    str r0, [sp, #8]\n    ldr r0, _0221EC5C ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    ldr r0, _0221EC60 ; =0x00001FA8\n    mov r1, #0x1d\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    str r0, [sp, #0x18]\n    ldr r1, [r1, #0xc]\n    mov r0, #8\n    bl String_New\n    str r0, [sp, #0x1c]\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221EC68 ; =0x00001FAC\n    ldrh r2, [r7, #0x10]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _0221EC68 ; =0x00001FAC\n    ldr r1, [sp, #0x1c]\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x18]\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [sp, #0x1c]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r3, r0, #0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221EC64 ; =0x00010200\n    ldr r2, [sp, #0x1c]\n    str r0, [sp, #8]\n    ldr r0, _0221EC5C ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    sub r3, r6, r3\n    add r0, r0, r4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    ldr r0, [sp, #0x1c]\n    bl String_Delete\n    ldr r0, _0221EC60 ; =0x00001FA8\n    mov r1, #0x1e\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    str r0, [sp, #0x20]\n    ldr r1, [r1, #0xc]\n    mov r0, #8\n    bl String_New\n    mov r1, #0\n    str r0, [sp, #0x24]\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221EC68 ; =0x00001FAC\n    ldrh r2, [r7, #0x12]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _0221EC68 ; =0x00001FAC\n    ldr r1, [sp, #0x24]\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x20]\n    bl StringExpandPlaceholders\n    mov r1, #0\n    ldr r3, [sp, #0x14]\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221EC64 ; =0x00010200\n    ldr r2, [sp, #0x24]\n    str r0, [sp, #8]\n    ldr r0, _0221EC5C ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r3, r6, r3\n    add r0, r0, r4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    ldr r0, [sp, #0x24]\n    bl String_Delete\n    ldr r0, _0221EC5C ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0xd0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221EC5C ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221EC54: .word 0x00002075\n    _0221EC58: .word 0x000F0E00\n    _0221EC5C: .word 0x00002070\n    _0221EC60: .word 0x00001FA8\n    _0221EC64: .word 0x00010200\n    _0221EC68: .word 0x00001FAC"
    );
    #endif
}

void ov08_0221EC6C(void) {
    /* Original at 0x0221EC6C */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _0221ECD8 ; =0x00002075\n    add r6, r1, #0\n    ldrb r1, [r5, r0]\n    ldr r3, [r5]\n    mov r0, #0x16\n    add r4, r1, #0\n    mul r4, r0\n    ldr r2, _0221ECDC ; =0x000002D2\n    ldr r3, [r3, #0xc]\n    mov r0, #1\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    mov r1, #0x50\n    mul r1, r6\n    add r1, r5, r1\n    ldrh r1, [r1, #0x1c]\n    add r7, r0, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r1, #0\n    add r0, r4, #2\n    lsl r4, r0, #4\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221ECE0 ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, _0221ECE4 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    add r0, r0, r4\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl DestroyMsgData\n    ldr r0, _0221ECE4 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, r0, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221ECD8: .word 0x00002075\n    _0221ECDC: .word 0x000002D2\n    _0221ECE0: .word 0x00010200\n    _0221ECE4: .word 0x00002070"
    );
    #endif
}

void ov08_0221ECE8(void) {
    /* Original at 0x0221ECE8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    ldr r2, _0221ED28 ; =0x00002070\n    lsl r4, r1, #4\n    ldr r5, [r0, r2]\n    sub r2, #0xc8\n    ldr r0, [r0, r2]\n    mov r1, #0x33\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221ED2C ; =0x000F0E00\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0221ED28: .word 0x00002070\n    _0221ED2C: .word 0x000F0E00"
    );
    #endif
}

void ov08_0221ED30(void) {
    /* Original at 0x0221ED30 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r2, [sp, #0x10]\n    add r5, r0, #0\n    ldr r2, _0221EE0C ; =0x00002070\n    ldr r0, [sp, #0x10]\n    lsl r6, r1, #4\n    ldr r4, [r5, r2]\n    cmp r0, #0\n    bne _0221ED8A\n    sub r2, #0xc8\n    ldr r0, [r5, r2]\n    mov r1, #0x32\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, r4, r6\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r5\n    lsl r0, r0, #0x10\n    mov r1, #0\n    lsr r3, r0, #0x10\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221EE10 ; =0x00010200\n    add r2, r7, #0\n    str r0, [sp, #8]\n    add r0, r4, r6\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    b _0221EE00\n    sub r2, #0xc8\n    ldr r0, [r5, r2]\n    mov r1, #0x34\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    str r0, [sp, #0x14]\n    ldr r1, [r1, #0xc]\n    mov r0, #8\n    bl String_New\n    mov r1, #0\n    add r7, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221EE14 ; =0x00001FAC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _0221EE14 ; =0x00001FAC\n    ldr r2, [sp, #0x14]\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, r4, r6\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r5\n    lsl r0, r0, #0x10\n    mov r1, #0\n    lsr r3, r0, #0x10\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221EE10 ; =0x00010200\n    add r2, r7, #0\n    str r0, [sp, #8]\n    add r0, r4, r6\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221EE0C: .word 0x00002070\n    _0221EE10: .word 0x00010200\n    _0221EE14: .word 0x00001FAC"
    );
    #endif
}

void ov08_0221EE18(void) {
    /* Original at 0x0221EE18 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    ldr r2, _0221EE58 ; =0x00002070\n    lsl r4, r1, #4\n    ldr r5, [r0, r2]\n    sub r2, #0xc8\n    ldr r0, [r0, r2]\n    mov r1, #0x30\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221EE5C ; =0x000F0E00\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _0221EE58: .word 0x00002070\n    _0221EE5C: .word 0x000F0E00"
    );
    #endif
}

void ov08_0221EE60(void) {
    /* Original at 0x0221EE60 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r2, [sp, #0x10]\n    add r5, r0, #0\n    ldr r2, _0221EF3C ; =0x00002070\n    ldr r0, [sp, #0x10]\n    lsl r6, r1, #4\n    ldr r4, [r5, r2]\n    cmp r0, #1\n    bhi _0221EEBA\n    sub r2, #0xc8\n    ldr r0, [r5, r2]\n    mov r1, #0x32\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, r4, r6\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r5\n    lsl r0, r0, #0x10\n    mov r1, #0\n    lsr r3, r0, #0x10\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221EF40 ; =0x00010200\n    add r2, r7, #0\n    str r0, [sp, #8]\n    add r0, r4, r6\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    b _0221EF30\n    sub r2, #0xc8\n    ldr r0, [r5, r2]\n    mov r1, #0x31\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    str r0, [sp, #0x14]\n    ldr r1, [r1, #0xc]\n    mov r0, #8\n    bl String_New\n    mov r1, #0\n    add r7, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221EF44 ; =0x00001FAC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _0221EF44 ; =0x00001FAC\n    ldr r2, [sp, #0x14]\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    add r0, r4, r6\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r5\n    lsl r0, r0, #0x10\n    mov r1, #0\n    lsr r3, r0, #0x10\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221EF40 ; =0x00010200\n    add r2, r7, #0\n    str r0, [sp, #8]\n    add r0, r4, r6\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221EF3C: .word 0x00002070\n    _0221EF40: .word 0x00010200\n    _0221EF44: .word 0x00001FAC"
    );
    #endif
}

void ov08_0221EF48(void) {
    /* Original at 0x0221EF48 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r3, r0, #0\n    ldr r0, _0221EF9C ; =0x00002070\n    add r6, r2, #0\n    ldr r5, [r3, r0]\n    ldr r3, [r3]\n    lsl r4, r1, #4\n    ldr r2, _0221EFA0 ; =0x000002ED\n    ldr r3, [r3, #0xc]\n    mov r0, #1\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    add r1, r6, #0\n    add r7, r0, #0\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221EFA4 ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl DestroyMsgData\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221EF9C: .word 0x00002070\n    _0221EFA0: .word 0x000002ED\n    _0221EFA4: .word 0x00010200"
    );
    #endif
}

void ov08_0221EFA8(void) {
    /* Original at 0x0221EFA8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    ldr r2, _0221F004 ; =0x00002070\n    lsl r4, r1, #4\n    ldr r5, [r0, r2]\n    sub r2, #0xc8\n    ldr r0, [r0, r2]\n    mov r1, #0x35\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r0, r5, r4\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r1, r0, r6\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    lsl r0, r0, #0xf\n    mov r1, #0\n    lsr r3, r0, #0x10\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F008 ; =0x000F0E00\n    add r2, r7, #0\n    str r0, [sp, #8]\n    add r0, r5, r4\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221F004: .word 0x00002070\n    _0221F008: .word 0x000F0E00"
    );
    #endif
}

void ov08_0221F00C(void) {
    /* Original at 0x0221F00C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    ldr r3, _0221F074 ; =0x00002070\n    lsl r4, r1, #4\n    ldr r5, [r0, r3]\n    cmp r2, #0\n    beq _0221F024\n    cmp r2, #1\n    beq _0221F032\n    cmp r2, #2\n    beq _0221F040\n    b _0221F04C\n    sub r3, #0xc8\n    ldr r0, [r0, r3]\n    mov r1, #0x36\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    b _0221F04C\n    sub r3, #0xc8\n    ldr r0, [r0, r3]\n    mov r1, #0x38\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    b _0221F04C\n    sub r3, #0xc8\n    ldr r0, [r0, r3]\n    mov r1, #0x37\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F078 ; =0x00010200\n    add r2, r6, #0\n    str r0, [sp, #8]\n    add r0, r5, r4\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _0221F074: .word 0x00002070\n    _0221F078: .word 0x00010200"
    );
    #endif
}

void ov08_0221F07C(void) {
    /* Original at 0x0221F07C */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    ldr r0, _0221F1A0 ; =0x00002070\n    lsl r6, r1, #4\n    ldr r4, [r5, r0]\n    sub r0, #0xc8\n    ldr r0, [r5, r0]\n    mov r1, #0x2e\n    str r2, [sp, #0x10]\n    str r3, [sp, #0x14]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x18]\n    mov r0, #0\n    ldr r1, [sp, #0x18]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    str r0, [sp, #0x1c]\n    add r0, r4, r6\n    bl GetWindowWidth\n    lsl r1, r0, #3\n    ldr r0, [sp, #0x1c]\n    ldr r2, [sp, #0x18]\n    sub r0, r1, r0\n    lsr r7, r0, #1\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F1A4 ; =0x000F0E00\n    add r3, r7, #0\n    str r0, [sp, #8]\n    add r0, r4, r6\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    ldr r0, _0221F1A8 ; =0x00001FA8\n    mov r1, #0x2c\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    str r0, [sp, #0x20]\n    ldr r1, [r1, #0xc]\n    mov r0, #6\n    bl String_New\n    mov r1, #0\n    str r0, [sp, #0x24]\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221F1AC ; =0x00001FAC\n    ldr r2, [sp, #0x10]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _0221F1AC ; =0x00001FAC\n    ldr r1, [sp, #0x24]\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x20]\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [sp, #0x24]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r3, r0, #0\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F1A4 ; =0x000F0E00\n    ldr r2, [sp, #0x24]\n    str r0, [sp, #8]\n    add r0, r4, r6\n    sub r3, r7, r3\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    ldr r0, [sp, #0x24]\n    bl String_Delete\n    ldr r0, _0221F1A8 ; =0x00001FA8\n    mov r1, #0x2d\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    ldr r1, [r5]\n    str r0, [sp, #0x28]\n    ldr r1, [r1, #0xc]\n    mov r0, #6\n    bl String_New\n    mov r1, #0\n    str r0, [sp, #0x2c]\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221F1AC ; =0x00001FAC\n    ldr r2, [sp, #0x14]\n    ldr r0, [r5, r0]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _0221F1AC ; =0x00001FAC\n    ldr r1, [sp, #0x2c]\n    ldr r0, [r5, r0]\n    ldr r2, [sp, #0x28]\n    bl StringExpandPlaceholders\n    mov r1, #0\n    ldr r3, [sp, #0x1c]\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F1A4 ; =0x000F0E00\n    ldr r2, [sp, #0x2c]\n    str r0, [sp, #8]\n    add r0, r4, r6\n    add r3, r7, r3\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x28]\n    bl String_Delete\n    ldr r0, [sp, #0x2c]\n    bl String_Delete\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221F1A0: .word 0x00002070\n    _0221F1A4: .word 0x000F0E00\n    _0221F1A8: .word 0x00001FA8\n    _0221F1AC: .word 0x00001FAC"
    );
    #endif
}

void ov08_0221F1B0(void) {
    /* Original at 0x0221F1B0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    lsl r4, r1, #4\n    ldr r1, [r0]\n    ldr r2, _0221F218 ; =0x00002070\n    add r1, #0x34\n    ldrb r1, [r1]\n    ldr r5, [r0, r2]\n    cmp r1, #4\n    bne _0221F1D0\n    sub r2, #0xc8\n    ldr r0, [r0, r2]\n    mov r1, #0x3b\n    bl NewString_ReadMsgData\n    b _0221F1DA\n    sub r2, #0xc8\n    ldr r0, [r0, r2]\n    mov r1, #0x3a\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r0, #4\n    add r1, r6, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    add r7, r0, #0\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F21C ; =0x00070809\n    mov r3, #0x60\n    str r0, [sp, #8]\n    mov r0, #0\n    sub r3, r3, r7\n    str r0, [sp, #0xc]\n    add r0, r5, r4\n    mov r1, #4\n    add r2, r6, #0\n    lsr r3, r3, #1\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221F218: .word 0x00002070\n    _0221F21C: .word 0x00070809"
    );
    #endif
}

void ov08_0221F220(void) {
    /* Original at 0x0221F220 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, _0221F278 ; =0x0000207A\n    ldrb r1, [r4, r0]\n    cmp r1, #7\n    bne _0221F236\n    sub r0, #0xa\n    ldr r5, [r4, r0]\n    add r5, #0x80\n    b _0221F23C\n    sub r0, #0xa\n    ldr r5, [r4, r0]\n    add r5, #0x50\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221F27C ; =0x00001FA8\n    mov r1, #0x3c\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F280 ; =0x00010200\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0221F278: .word 0x0000207A\n    _0221F27C: .word 0x00001FA8\n    _0221F280: .word 0x00010200"
    );
    #endif
}

void ov08_0221F284(void) {
    /* Original at 0x0221F284 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    str r1, [sp, #0x10]\n    ldr r1, [r5]\n    ldr r0, _0221F3C0 ; =0x00002070\n    ldr r1, [r1, #0xc]\n    ldr r4, [r5, r0]\n    mov r0, #6\n    lsl r6, r2, #4\n    bl String_New\n    add r7, r0, #0\n    ldr r0, _0221F3C4 ; =0x00001FA8\n    mov r1, #0x2b\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x14]\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F3C8 ; =0x000F0E00\n    ldr r2, [sp, #0x14]\n    str r0, [sp, #8]\n    mov r1, #0\n    add r0, r4, r6\n    mov r3, #0x28\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    ldr r0, _0221F3C4 ; =0x00001FA8\n    mov r1, #0x2e\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x18]\n    mov r0, #0\n    ldr r1, [sp, #0x18]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    str r0, [sp, #0x1c]\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F3C8 ; =0x000F0E00\n    ldr r2, [sp, #0x18]\n    str r0, [sp, #8]\n    mov r1, #0\n    add r0, r4, r6\n    mov r3, #0x50\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    ldr r0, _0221F3C4 ; =0x00001FA8\n    mov r1, #0x2d\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    mov r1, #0\n    str r0, [sp, #0x20]\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x10]\n    ldr r0, _0221F3CC ; =0x00001FAC\n    ldrb r2, [r2, #3]\n    ldr r0, [r5, r0]\n    mov r3, #2\n    bl BufferIntegerAsString\n    ldr r0, _0221F3CC ; =0x00001FAC\n    ldr r2, [sp, #0x20]\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F3C8 ; =0x000F0E00\n    ldr r3, [sp, #0x1c]\n    str r0, [sp, #8]\n    mov r1, #0\n    add r3, #0x50\n    add r0, r4, r6\n    add r2, r7, #0\n    str r1, [sp, #0xc]\n    str r3, [sp, #0x1c]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    ldr r0, _0221F3C4 ; =0x00001FA8\n    mov r1, #0x2c\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    mov r1, #0\n    str r0, [sp, #0x24]\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x10]\n    ldr r0, _0221F3CC ; =0x00001FAC\n    ldrb r2, [r2, #2]\n    ldr r0, [r5, r0]\n    mov r3, #2\n    bl BufferIntegerAsString\n    ldr r0, _0221F3CC ; =0x00001FAC\n    ldr r2, [sp, #0x24]\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r5, r0, #0\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F3C8 ; =0x000F0E00\n    mov r3, #0x50\n    str r0, [sp, #8]\n    mov r1, #0\n    add r0, r4, r6\n    add r2, r7, #0\n    sub r3, r3, r5\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x24]\n    bl String_Delete\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221F3C0: .word 0x00002070\n    _0221F3C4: .word 0x00001FA8\n    _0221F3C8: .word 0x000F0E00\n    _0221F3CC: .word 0x00001FAC"
    );
    #endif
}

void ov08_0221F3D0(void) {
    /* Original at 0x0221F3D0 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    str r1, [sp, #0x10]\n    ldr r1, [r5]\n    ldr r0, _0221F494 ; =0x00002070\n    ldr r1, [r1, #0xc]\n    ldr r4, [r5, r0]\n    mov r0, #6\n    lsl r6, r2, #4\n    bl String_New\n    str r0, [sp, #0x14]\n    ldr r0, _0221F498 ; =0x00001FA8\n    mov r1, #0x2b\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x18]\n    mov r0, #0\n    ldr r1, [sp, #0x18]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r7, r0, #0\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    add r7, #0x28\n    mov r0, #0x50\n    sub r0, r0, r7\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #0x10\n    lsl r2, r7, #0x10\n    str r0, [sp, #4]\n    add r0, r4, r6\n    mov r1, #0\n    lsr r2, r2, #0x10\n    mov r3, #0x18\n    bl FillWindowPixelRect\n    ldr r0, _0221F498 ; =0x00001FA8\n    mov r1, #0x2c\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r7, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x10]\n    ldr r0, _0221F49C ; =0x00001FAC\n    ldrb r2, [r2, #2]\n    ldr r0, [r5, r0]\n    mov r3, #2\n    bl BufferIntegerAsString\n    ldr r0, _0221F49C ; =0x00001FAC\n    ldr r1, [sp, #0x14]\n    ldr r0, [r5, r0]\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [sp, #0x14]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r5, r0, #0\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F4A0 ; =0x000F0E00\n    mov r3, #0x50\n    str r0, [sp, #8]\n    mov r1, #0\n    ldr r2, [sp, #0x14]\n    add r0, r4, r6\n    sub r3, r3, r5\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221F494: .word 0x00002070\n    _0221F498: .word 0x00001FA8\n    _0221F49C: .word 0x00001FAC\n    _0221F4A0: .word 0x000F0E00"
    );
    #endif
}

void ov08_0221F4A4(void) {
    /* Original at 0x0221F4A4 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5]\n    mov r4, #0\n    ldr r0, [r0]\n    bl Party_GetCount\n    cmp r0, #0\n    ble _0221F52A\n    add r0, r4, #0\n    add r7, r5, #0\n    str r0, [sp, #8]\n    add r6, r5, #0\n    add r7, #0x1b\n    ldr r0, _0221F54C ; =0x00002070\n    ldr r1, [r5, r0]\n    ldr r0, [sp, #8]\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldrh r0, [r6, #8]\n    cmp r0, #0\n    beq _0221F512\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #7\n    lsl r3, r4, #0x10\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #4\n    lsr r3, r3, #0x10\n    bl ov08_0221DDCC\n    ldrb r0, [r7]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _0221F4FE\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov08_0221F550\n    ldr r0, [r6, #4]\n    bl Pokemon_GetStatusIconId\n    cmp r0, #7\n    bne _0221F512\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl ov08_0221F5B0\n    ldr r0, [sp, #8]\n    add r6, #0x50\n    add r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    add r7, #0x50\n    ldr r0, [r0]\n    add r4, r4, #1\n    bl Party_GetCount\n    cmp r4, r0\n    blt _0221F4C2\n    ldr r0, [r5]\n    add r0, #0x35\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _0221F540\n    add r0, r5, #0\n    mov r1, #7\n    bl ov08_0221E340\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #6\n    bl ov08_0221E340\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0221F54C: .word 0x00002070"
    );
    #endif
}

void ov08_0221F550(void) {
    /* Original at 0x0221F550 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #8\n    add r6, r1, #0\n    str r0, [sp, #4]\n    ldr r0, _0221F5AC ; =0x00002070\n    lsl r4, r6, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    add r0, r0, r4\n    mov r2, #0x38\n    mov r3, #0x20\n    bl FillWindowPixelRect\n    mov r2, #0x40\n    str r2, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    ldr r0, _0221F5AC ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r3, #0x18\n    add r0, r0, r4\n    bl FillWindowPixelRect\n    mov r0, #0x20\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r6, #0\n    mov r3, #0x38\n    bl ov08_0221DFC8\n    mov r0, #0x18\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r6, #0\n    mov r3, #0x40\n    bl ov08_0221E048\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0221F5AC: .word 0x00002070"
    );
    #endif
}

void ov08_0221F5B0(void) {
    ov08_0221DF80(0x20, 0x50, 0);
}

void ov08_0221F5D0(void) {
    /* Original at 0x0221F5D0 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0221F654 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl FillWindowPixelBuffer\n    ldr r0, _0221F654 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r4, r0]\n    add r0, #0x10\n    bl FillWindowPixelBuffer\n    ldr r0, _0221F654 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r4, r0]\n    add r0, #0x20\n    bl FillWindowPixelBuffer\n    ldr r0, _0221F654 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r4, r0]\n    add r0, #0x30\n    bl FillWindowPixelBuffer\n    ldr r1, [r4]\n    add r0, r4, #0\n    ldrb r1, [r1, #0x11]\n    bl ov08_0221F658\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xf\n    bl ov08_0221E3A4\n    ldr r0, [r4]\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r1\n    add r0, r4, r0\n    ldrb r0, [r0, #0x1b]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _0221F63E\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0x12\n    bl ov08_0221E3A4\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0x13\n    bl ov08_0221E3A4\n    pop {r4, pc}\n    ldr r0, _0221F654 ; =0x00002070\n    ldr r0, [r4, r0]\n    add r0, #0x20\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221F654 ; =0x00002070\n    ldr r0, [r4, r0]\n    add r0, #0x30\n    bl ScheduleWindowCopyToVram\n    pop {r4, pc}\n    _0221F654: .word 0x00002070"
    );
    #endif
}

void ov08_0221F658(void) {
    /* Original at 0x0221F658 */
    /* Requires manual decompilation - 156 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    ldr r0, _0221F7A4 ; =0x00002070\n    add r6, r1, #0\n    ldr r0, [r4, r0]\n    ldr r1, [r4]\n    str r0, [sp, #0x18]\n    mov r0, #0x50\n    add r7, r6, #0\n    add r5, r4, #4\n    mul r7, r0\n    add r0, r5, r7\n    str r0, [sp, #0x14]\n    ldr r1, [r1, #0xc]\n    mov r0, #0xc\n    bl String_New\n    str r0, [sp, #0x10]\n    ldr r0, _0221F7A8 ; =0x00001FA8\n    ldr r1, _0221F7AC ; =ov08_02224FF4\n    lsl r2, r6, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r1, r2]\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r0, [r5, r7]\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _0221F7B0 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl BufferBoxMonNickname\n    ldr r0, _0221F7B0 ; =0x00001FAC\n    ldr r1, [sp, #0x10]\n    ldr r0, [r4, r0]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, [sp, #0x14]\n    mov r5, #0\n    ldrb r0, [r0, #0x16]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    bne _0221F6EC\n    ldr r0, [sp, #0x14]\n    ldrb r0, [r0, #0x17]\n    lsl r1, r0, #0x18\n    lsr r1, r1, #0x1f\n    bne _0221F6EC\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1d\n    bne _0221F6DC\n    ldr r0, _0221F7A8 ; =0x00001FA8\n    mov r1, #0x10\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    b _0221F6EC\n    cmp r0, #1\n    bne _0221F6EC\n    ldr r0, _0221F7A8 ; =0x00001FA8\n    mov r1, #0x11\n    ldr r0, [r4, r0]\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r1, [sp, #0x10]\n    mov r0, #4\n    mov r2, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r5, #0\n    bne _0221F704\n    mov r7, #0\n    add r4, r7, #0\n    b _0221F714\n    mov r0, #0\n    add r1, r5, #0\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    mov r4, #8\n    ldr r0, [sp, #0x18]\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r6\n    sub r0, r0, r7\n    sub r1, r0, r4\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    lsl r0, r0, #0x17\n    lsr r7, r0, #0x18\n    mov r0, #7\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F7B4 ; =0x00070809\n    ldr r2, [sp, #0x10]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x18]\n    mov r1, #4\n    add r3, r7, #0\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    cmp r5, #0\n    beq _0221F79A\n    ldr r0, [sp, #0x14]\n    ldrb r0, [r0, #0x17]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1d\n    bne _0221F778\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F7B8 ; =0x000A0B00\n    add r3, r7, r6\n    str r0, [sp, #8]\n    mov r1, #0\n    ldr r0, [sp, #0x18]\n    add r2, r5, #0\n    add r3, r4, r3\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    b _0221F794\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221F7BC ; =0x000C0D00\n    add r3, r7, r6\n    str r0, [sp, #8]\n    mov r1, #0\n    ldr r0, [sp, #0x18]\n    add r2, r5, #0\n    add r3, r4, r3\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl String_Delete\n    ldr r0, [sp, #0x18]\n    bl ScheduleWindowCopyToVram\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _0221F7A4: .word 0x00002070\n    _0221F7A8: .word 0x00001FA8\n    _0221F7AC: .word ov08_02224FF4\n    _0221F7B0: .word 0x00001FAC\n    _0221F7B4: .word 0x00070809\n    _0221F7B8: .word 0x000A0B00\n    _0221F7BC: .word 0x000C0D00"
    );
    #endif
}

void ov08_0221F7C0(void) {
    /* Original at 0x0221F7C0 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    ldr r0, _0221F8F0 ; =0x00002075\n    mov r1, #6\n    ldrb r2, [r5, r0]\n    sub r0, r0, #5\n    mul r1, r2\n    lsl r1, r1, #0x10\n    lsr r6, r1, #0x10\n    ldr r1, [r5, r0]\n    lsl r0, r6, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #1\n    lsl r0, r0, #4\n    str r0, [sp, #0x18]\n    ldr r0, _0221F8F4 ; =0x00002070\n    ldr r1, [r5, r0]\n    ldr r0, [sp, #0x18]\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #2\n    lsl r0, r0, #4\n    str r0, [sp, #0x14]\n    ldr r0, _0221F8F4 ; =0x00002070\n    ldr r1, [r5, r0]\n    ldr r0, [sp, #0x14]\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #3\n    lsl r0, r0, #4\n    str r0, [sp, #0x10]\n    ldr r0, _0221F8F4 ; =0x00002070\n    ldr r1, [r5, r0]\n    ldr r0, [sp, #0x10]\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r6, #4\n    lsl r0, r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, _0221F8F4 ; =0x00002070\n    ldr r1, [r5, r0]\n    ldr r0, [sp, #0xc]\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221F8F4 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x50\n    bl FillWindowPixelBuffer\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    ldr r3, [r5]\n    add r0, r5, #0\n    ldrb r3, [r3, #0x11]\n    add r1, r6, #0\n    bl ov08_0221DDCC\n    add r0, r5, #0\n    str r0, [sp, #0x1c]\n    add r0, #0x34\n    mov r4, #0\n    add r7, r6, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [r5]\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp, #0x1c]\n    lsl r1, r4, #3\n    add r0, r0, r2\n    str r1, [sp, #0x20]\n    ldrh r1, [r0, r1]\n    str r0, [sp, #0x24]\n    cmp r1, #0\n    beq _0221F89C\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    ldr r0, _0221F8F8 ; =0x00070809\n    ldr r3, _0221F8FC ; =ov08_02224FE0\n    lsl r6, r4, #2\n    str r0, [sp, #8]\n    ldr r3, [r3, r6]\n    add r0, r5, #0\n    add r2, r7, r4\n    bl ov08_0221E244\n    ldr r2, [sp, #0x20]\n    ldr r1, [sp, #0x24]\n    add r0, r5, #0\n    add r1, r1, r2\n    add r2, r7, r4\n    bl ov08_0221F284\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #4\n    blo _0221F85A\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0x12\n    bl ov08_0221E3A4\n    ldr r0, _0221F8F4 ; =0x00002070\n    ldr r1, [r5, r0]\n    ldr r0, [sp, #0x18]\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221F8F4 ; =0x00002070\n    ldr r1, [r5, r0]\n    ldr r0, [sp, #0x14]\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221F8F4 ; =0x00002070\n    ldr r1, [r5, r0]\n    ldr r0, [sp, #0x10]\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221F8F4 ; =0x00002070\n    ldr r1, [r5, r0]\n    ldr r0, [sp, #0xc]\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    ldr r1, _0221F8F0 ; =0x00002075\n    mov r0, #1\n    ldrb r2, [r5, r1]\n    eor r0, r2\n    strb r0, [r5, r1]\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221F8F0: .word 0x00002075\n    _0221F8F4: .word 0x00002070\n    _0221F8F8: .word 0x00070809\n    _0221F8FC: .word ov08_02224FE0"
    );
    #endif
}

void ov08_0221F900(void) {
    /* Original at 0x0221F900 */
    /* Requires manual decompilation - 231 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _0221FB10 ; =0x00002075\n    mov r1, #0x16\n    ldrb r2, [r5, r0]\n    sub r0, r0, #5\n    add r4, r2, #0\n    mul r4, r1\n    ldr r1, [r5, r0]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0xe0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0xf0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    mov r0, #0x11\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    mov r0, #0x12\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0xd0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    mov r0, #0x15\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    lsl r0, r4, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #0\n    add r0, #0xa\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #0\n    add r0, #0xb\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #0\n    add r0, #0xc\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #5\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #6\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #7\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #0\n    add r0, #8\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #0\n    add r0, #9\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #4\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #1\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #2\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FB14 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #3\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r2, #0\n    str r2, [sp]\n    str r2, [sp, #4]\n    ldr r3, [r5]\n    add r0, r5, #0\n    ldrb r3, [r3, #0x11]\n    add r1, r4, #0\n    bl ov08_0221DDCC\n    ldr r1, [r5]\n    add r0, r5, #0\n    ldrb r1, [r1, #0x11]\n    bl ov08_0221EAD4\n    mov r3, #0\n    str r3, [sp]\n    ldr r2, [r5]\n    add r1, r4, #0\n    ldrb r2, [r2, #0x11]\n    add r0, r5, #0\n    add r1, #0xa\n    bl ov08_0221E048\n    ldr r1, [r5]\n    add r0, r5, #0\n    ldrb r1, [r1, #0x11]\n    bl ov08_0221E408\n    ldr r1, [r5]\n    add r0, r5, #0\n    ldrb r1, [r1, #0x11]\n    bl ov08_0221E5DC\n    ldr r1, [r5]\n    add r0, r5, #0\n    ldrb r1, [r1, #0x11]\n    bl ov08_0221E6D8\n    ldr r1, [r5]\n    add r0, r5, #0\n    ldrb r1, [r1, #0x11]\n    bl ov08_0221E7D4\n    ldr r1, [r5]\n    add r0, r5, #0\n    ldrb r1, [r1, #0x11]\n    bl ov08_0221E8D4\n    ldr r1, [r5]\n    add r0, r5, #0\n    ldrb r1, [r1, #0x11]\n    bl ov08_0221E9D4\n    ldr r2, [r5]\n    add r0, r5, #0\n    ldrb r2, [r2, #0x11]\n    add r1, r4, #1\n    bl ov08_0221E120\n    ldr r2, [r5]\n    add r0, r5, #0\n    ldrb r2, [r2, #0x11]\n    add r1, r4, #3\n    bl ov08_0221E1A8\n    ldr r1, [r5]\n    add r0, r5, #0\n    ldrb r1, [r1, #0x11]\n    bl ov08_0221EC6C\n    add r0, r5, #0\n    mov r1, #0x15\n    mov r2, #0x13\n    bl ov08_0221E3A4\n    ldr r1, _0221FB10 ; =0x00002075\n    mov r0, #1\n    ldrb r2, [r5, r1]\n    eor r0, r2\n    strb r0, [r5, r1]\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _0221FB10: .word 0x00002075\n    _0221FB14: .word 0x00002070"
    );
    #endif
}

void ov08_0221FB18(void) {
    /* Original at 0x0221FB18 */
    /* Requires manual decompilation - 152 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0221FC6C ; =0x00002075\n    mov r1, #0xb\n    ldrb r2, [r5, r0]\n    sub r0, r0, #5\n    ldr r0, [r5, r0]\n    add r4, r2, #0\n    mul r4, r1\n    add r0, #0x60\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FC70 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x70\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FC70 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x80\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FC70 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x90\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FC70 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0xa0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FC70 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #1\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FC70 ; =0x00002070\n    ldr r1, [r5, r0]\n    lsl r0, r4, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FC70 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #2\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FC70 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #3\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FC70 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #5\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FC70 ; =0x00002070\n    ldr r1, [r5, r0]\n    add r0, r4, #4\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r5]\n    add r2, r5, #0\n    ldrb r3, [r0, #0x11]\n    add r0, #0x34\n    ldrb r0, [r0]\n    mov r1, #0x50\n    add r2, #0x34\n    mul r1, r3\n    add r1, r2, r1\n    lsl r0, r0, #3\n    add r7, r1, r0\n    mov r2, #0\n    str r2, [sp]\n    add r0, r5, #0\n    mov r1, #6\n    str r2, [sp, #4]\n    bl ov08_0221DDCC\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #7\n    add r3, r2, #0\n    bl ov08_0221E2E8\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0221FC74 ; =0x000F0E00\n    add r2, r4, #0\n    str r0, [sp, #8]\n    ldr r3, [r5]\n    ldrh r1, [r7]\n    add r3, #0x34\n    ldrb r3, [r3]\n    add r0, r5, #0\n    lsl r6, r3, #2\n    ldr r3, _0221FC78 ; =ov08_02224FE0\n    ldr r3, [r3, r6]\n    bl ov08_0221E244\n    add r0, r5, #0\n    mov r1, #8\n    bl ov08_0221ECE8\n    ldrb r2, [r7, #6]\n    add r0, r5, #0\n    add r1, r4, #2\n    bl ov08_0221ED30\n    add r0, r5, #0\n    mov r1, #9\n    bl ov08_0221EE18\n    ldrb r2, [r7, #7]\n    add r0, r5, #0\n    add r1, r4, #3\n    bl ov08_0221EE60\n    ldrh r2, [r7]\n    add r0, r5, #0\n    add r1, r4, #4\n    bl ov08_0221EF48\n    add r0, r5, #0\n    mov r1, #0xa\n    bl ov08_0221EFA8\n    ldrb r2, [r7, #5]\n    add r0, r5, #0\n    add r1, r4, #5\n    bl ov08_0221F00C\n    ldrb r2, [r7, #2]\n    ldrb r3, [r7, #3]\n    add r0, r5, #0\n    add r1, r4, #1\n    bl ov08_0221F07C\n    ldr r1, _0221FC6C ; =0x00002075\n    mov r0, #1\n    ldrb r2, [r5, r1]\n    eor r0, r2\n    strb r0, [r5, r1]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0221FC6C: .word 0x00002075\n    _0221FC70: .word 0x00002070\n    _0221FC74: .word 0x000F0E00\n    _0221FC78: .word ov08_02224FE0"
    );
    #endif
}

void ov08_0221FC7C(void) {
    /* Original at 0x0221FC7C */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, _0221FD98 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FD98 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x10\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FD98 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x20\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FD98 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x30\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FD98 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x40\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FD98 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x50\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r3, [r5]\n    add r0, r5, #0\n    ldrb r3, [r3, #0x11]\n    add r2, r1, #0\n    bl ov08_0221DDCC\n    add r0, r5, #0\n    mov r6, #0\n    str r0, [sp, #0x10]\n    add r0, #0x34\n    ldr r7, _0221FD9C ; =ov08_02224FE0\n    add r4, r6, #0\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp, #0x10]\n    add r0, r0, r2\n    ldrh r1, [r0, r4]\n    str r0, [sp, #0xc]\n    cmp r1, #0\n    beq _0221FD20\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    ldr r0, _0221FDA0 ; =0x00070809\n    add r2, r6, #1\n    str r0, [sp, #8]\n    ldr r3, [r7]\n    add r0, r5, #0\n    bl ov08_0221E244\n    ldr r1, [sp, #0xc]\n    add r0, r5, #0\n    add r1, r1, r4\n    add r2, r6, #1\n    bl ov08_0221F284\n    add r6, r6, #1\n    add r4, #8\n    add r7, r7, #4\n    cmp r6, #4\n    blo _0221FCE8\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    ldr r0, _0221FDA0 ; =0x00070809\n    mov r2, #5\n    str r0, [sp, #8]\n    ldr r1, [r5]\n    add r0, r5, #0\n    ldrh r1, [r1, #0x24]\n    mov r3, #0x49\n    bl ov08_0221E244\n    ldr r0, [r5]\n    mov r1, #5\n    ldrh r0, [r0, #0x24]\n    bl GetMoveAttr\n    add r1, sp, #0x14\n    strb r0, [r1, #2]\n    ldrb r0, [r1, #2]\n    mov r2, #5\n    strb r0, [r1, #3]\n    add r0, r5, #0\n    add r1, sp, #0x14\n    bl ov08_0221F284\n    ldr r0, _0221FD98 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0x10\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221FD98 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0x20\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221FD98 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0x30\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221FD98 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0x40\n    bl ScheduleWindowCopyToVram\n    ldr r0, _0221FD98 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0x50\n    bl ScheduleWindowCopyToVram\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221FD98: .word 0x00002070\n    _0221FD9C: .word ov08_02224FE0\n    _0221FDA0: .word 0x00070809"
    );
    #endif
}

void ov08_0221FDA4(void) {
    /* Original at 0x0221FDA4 */
    /* Requires manual decompilation - 193 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x20\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x30\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x10\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x40\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x60\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x50\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x70\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x90\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0xa0\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x80\n    bl FillWindowPixelBuffer\n    ldr r0, _0221FF64 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0xb0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r3, [r5]\n    add r0, r5, #0\n    ldrb r3, [r3, #0x11]\n    add r2, r1, #0\n    bl ov08_0221DDCC\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl ov08_0221E2E8\n    add r0, r5, #0\n    mov r1, #4\n    bl ov08_0221ECE8\n    add r0, r5, #0\n    mov r1, #5\n    bl ov08_0221EE18\n    add r0, r5, #0\n    mov r1, #9\n    bl ov08_0221EFA8\n    ldr r1, [r5]\n    add r0, r1, #0\n    add r0, #0x34\n    ldrb r3, [r0]\n    cmp r3, #4\n    bhs _0221FEE0\n    ldrb r1, [r1, #0x11]\n    add r2, r5, #0\n    mov r0, #0x50\n    add r2, #0x34\n    mul r0, r1\n    add r7, r2, r0\n    lsl r0, r3, #3\n    str r0, [sp, #0xc]\n    add r4, r7, r0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0221FF68 ; =0x000F0E00\n    lsl r6, r3, #2\n    str r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r3, _0221FF6C ; =ov08_02224FE0\n    ldrh r1, [r7, r1]\n    ldr r3, [r3, r6]\n    add r0, r5, #0\n    mov r2, #1\n    bl ov08_0221E244\n    ldrb r2, [r4, #6]\n    add r0, r5, #0\n    mov r1, #6\n    bl ov08_0221ED30\n    ldrb r2, [r4, #7]\n    add r0, r5, #0\n    mov r1, #7\n    bl ov08_0221EE60\n    ldr r2, [sp, #0xc]\n    add r0, r5, #0\n    ldrh r2, [r7, r2]\n    mov r1, #8\n    bl ov08_0221EF48\n    ldrb r2, [r4, #5]\n    add r0, r5, #0\n    mov r1, #0xa\n    bl ov08_0221F00C\n    ldrb r2, [r4, #2]\n    ldrb r3, [r4, #3]\n    add r0, r5, #0\n    mov r1, #3\n    bl ov08_0221F07C\n    b _0221FF56\n    ldrh r0, [r1, #0x24]\n    mov r1, #5\n    bl GetMoveAttr\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0221FF68 ; =0x000F0E00\n    mov r2, #1\n    str r0, [sp, #8]\n    ldr r1, [r5]\n    add r0, r5, #0\n    ldrh r1, [r1, #0x24]\n    mov r3, #0x49\n    bl ov08_0221E244\n    ldr r2, [r5]\n    add r0, r5, #0\n    ldrh r2, [r2, #0x24]\n    mov r1, #8\n    bl ov08_0221EF48\n    ldr r0, [r5]\n    mov r1, #4\n    ldrh r0, [r0, #0x24]\n    bl GetMoveAttr\n    add r2, r0, #0\n    add r0, r5, #0\n    mov r1, #6\n    bl ov08_0221ED30\n    ldr r0, [r5]\n    mov r1, #2\n    ldrh r0, [r0, #0x24]\n    bl GetMoveAttr\n    add r2, r0, #0\n    add r0, r5, #0\n    mov r1, #7\n    bl ov08_0221EE60\n    ldr r0, [r5]\n    mov r1, #1\n    ldrh r0, [r0, #0x24]\n    bl GetMoveAttr\n    add r2, r0, #0\n    add r0, r5, #0\n    mov r1, #0xa\n    bl ov08_0221F00C\n    add r0, r5, #0\n    mov r1, #3\n    add r2, r4, #0\n    add r3, r4, #0\n    bl ov08_0221F07C\n    add r0, r5, #0\n    mov r1, #0xb\n    bl ov08_0221F1B0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221FF64: .word 0x00002070\n    _0221FF68: .word 0x000F0E00\n    _0221FF6C: .word ov08_02224FE0"
    );
    #endif
}

void ov08_0221FF70(void) {
    /* Original at 0x0221FF70 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, _02220058 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl FillWindowPixelBuffer\n    ldr r0, _02220058 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x10\n    bl FillWindowPixelBuffer\n    ldr r0, _02220058 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x20\n    bl FillWindowPixelBuffer\n    ldr r0, _02220058 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x30\n    bl FillWindowPixelBuffer\n    ldr r0, _02220058 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x40\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r3, [r5]\n    add r0, r5, #0\n    ldrb r3, [r3, #0x11]\n    add r2, r1, #0\n    bl ov08_0221DDCC\n    add r0, r5, #0\n    mov r6, #0\n    str r0, [sp, #0x10]\n    add r0, #0x34\n    ldr r7, _0222005C ; =ov08_02224FE0\n    add r4, r6, #0\n    str r0, [sp, #0x10]\n    ldr r0, [r5]\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp, #0x10]\n    add r0, r0, r2\n    ldrh r1, [r0, r4]\n    str r0, [sp, #0xc]\n    cmp r1, #0\n    beq _02220008\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #7\n    str r0, [sp, #4]\n    ldr r0, _02220060 ; =0x00070809\n    add r2, r6, #1\n    str r0, [sp, #8]\n    ldr r3, [r7]\n    add r0, r5, #0\n    bl ov08_0221E244\n    ldr r1, [sp, #0xc]\n    add r0, r5, #0\n    add r1, r1, r4\n    add r2, r6, #1\n    bl ov08_0221F284\n    add r6, r6, #1\n    add r4, #8\n    add r7, r7, #4\n    cmp r6, #4\n    blo _0221FFD0\n    ldr r2, [r5]\n    mov r1, #0x25\n    ldrh r0, [r2, #0x22]\n    ldr r2, [r2, #0xc]\n    bl GetItemAttr\n    cmp r0, #0\n    bne _0222002A\n    add r0, r5, #0\n    mov r1, #0x5e\n    bl ov08_0221E340\n    ldr r0, _02220058 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0x10\n    bl ScheduleWindowCopyToVram\n    ldr r0, _02220058 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0x20\n    bl ScheduleWindowCopyToVram\n    ldr r0, _02220058 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0x30\n    bl ScheduleWindowCopyToVram\n    ldr r0, _02220058 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0x40\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02220058: .word 0x00002070\n    _0222005C: .word ov08_02224FE0\n    _02220060: .word 0x00070809"
    );
    #endif
}

void ov08_02220064(void) {
    ov08_0221F3D0(0x50);
}

void ov08_02220084(void) {
    /* Original at 0x02220084 */
    /* Requires manual decompilation - 135 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _022201B0 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl FillWindowPixelBuffer\n    ldr r0, _022201B0 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x20\n    bl FillWindowPixelBuffer\n    ldr r0, _022201B0 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x30\n    bl FillWindowPixelBuffer\n    ldr r0, _022201B0 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x10\n    bl FillWindowPixelBuffer\n    ldr r0, _022201B0 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x40\n    bl FillWindowPixelBuffer\n    ldr r0, _022201B0 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x50\n    bl FillWindowPixelBuffer\n    ldr r0, _022201B0 ; =0x00002070\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r0, #0x60\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r3, [r5]\n    add r0, r5, #0\n    ldrb r3, [r3, #0x11]\n    add r2, r1, #0\n    bl ov08_0221DDCC\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl ov08_0221E2E8\n    ldr r0, _022201B4 ; =0x00001FA8\n    mov r1, #0x39\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _022201B8 ; =0x000F0E00\n    add r2, r4, #0\n    str r0, [sp, #8]\n    ldr r0, _022201B0 ; =0x00002070\n    str r1, [sp, #0xc]\n    ldr r0, [r5, r0]\n    add r3, r1, #0\n    add r0, #0x40\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, _022201B0 ; =0x00002070\n    ldr r0, [r5, r0]\n    add r0, #0x40\n    bl ScheduleWindowCopyToVram\n    ldr r1, [r5]\n    add r0, r1, #0\n    add r0, #0x34\n    ldrb r3, [r0]\n    cmp r3, #4\n    bhs _02220176\n    ldrb r1, [r1, #0x11]\n    add r2, r5, #0\n    mov r0, #0x50\n    mul r0, r1\n    add r2, #0x34\n    add r2, r2, r0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _022201B8 ; =0x000F0E00\n    lsl r1, r3, #3\n    str r0, [sp, #8]\n    lsl r6, r3, #2\n    ldr r3, _022201BC ; =ov08_02224FE0\n    add r4, r2, r1\n    ldrh r1, [r2, r1]\n    ldr r3, [r3, r6]\n    add r0, r5, #0\n    mov r2, #1\n    bl ov08_0221E244\n    ldrb r2, [r4, #2]\n    ldrb r3, [r4, #3]\n    add r0, r5, #0\n    mov r1, #3\n    bl ov08_0221F07C\n    b _022201A4\n    ldrh r0, [r1, #0x24]\n    mov r1, #5\n    bl GetMoveAttr\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _022201B8 ; =0x000F0E00\n    mov r2, #1\n    str r0, [sp, #8]\n    ldr r1, [r5]\n    add r0, r5, #0\n    ldrh r1, [r1, #0x24]\n    mov r3, #0x49\n    bl ov08_0221E244\n    add r0, r5, #0\n    mov r1, #3\n    add r2, r4, #0\n    add r3, r4, #0\n    bl ov08_0221F07C\n    add r0, r5, #0\n    mov r1, #6\n    bl ov08_0221F1B0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _022201B0: .word 0x00002070\n    _022201B4: .word 0x00001FA8\n    _022201B8: .word 0x000F0E00\n    _022201BC: .word ov08_02224FE0"
    );
    #endif
}

void ov08_022201C0(void) {
    /* Original at 0x022201C0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _022201E4 ; =0x00002060\n    mov r1, #1\n    add r0, r4, r0\n    add r2, r1, #0\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    ldr r0, _022201E4 ; =0x00002060\n    mov r1, #0xf\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    bl ov08_022201E8\n    pop {r4, pc}\n    _022201E4: .word 0x00002060"
    );
    #endif
}

void ov08_022201E8(void) {
    /* Original at 0x022201E8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetTextFrameDelay\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r2, _0222021C ; =0x00002060\n    str r3, [sp, #8]\n    add r0, r4, r2\n    sub r2, #0xb0\n    ldr r2, [r4, r2]\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _02220220 ; =0x0000207B\n    strb r0, [r4, r1]\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0222021C: .word 0x00002060\n    _02220220: .word 0x0000207B"
    );
    #endif
}

void ov08_02220224(void) {
    /* Original at 0x02220224 */
    /* Requires manual decompilation - 361 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0xc]\n    ldrh r0, [r0, #0x22]\n    ldr r2, [r2, #0xc]\n    bl LoadItemDataOrGfx\n    ldr r2, [sp, #0xc]\n    add r6, r0, #0\n    ldrb r3, [r2, #0x11]\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0xc]\n    add r2, r2, r3\n    add r2, #0x2c\n    ldrb r2, [r2]\n    ldr r0, [r0, #8]\n    ldr r1, [r1, #0x28]\n    bl BattleSystem_GetPartyMon\n    mov r1, #0xa3\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    add r0, r6, #0\n    mov r1, #0xf\n    mov r4, #0\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    beq _02220278\n    mov r0, #1\n    orr r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    mov r1, #0x10\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    beq _0222028C\n    mov r0, #2\n    orr r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    mov r1, #0x11\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    beq _022202A0\n    mov r0, #4\n    orr r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    mov r1, #0x12\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    beq _022202B4\n    mov r0, #8\n    orr r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    mov r1, #0x13\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    beq _022202C8\n    mov r0, #0x10\n    orr r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    mov r1, #0x14\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    beq _022202DC\n    mov r0, #0x20\n    orr r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r6, #0\n    mov r1, #0x15\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    beq _022202F0\n    mov r0, #0x40\n    orr r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, [sp, #0xc]\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r1\n    add r0, r5, r0\n    ldrh r1, [r0, #0x14]\n    cmp r1, #0\n    bne _0222033A\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    beq _0222033A\n    ldr r0, _02220574 ; =0x00001FA8\n    mov r1, #0x58\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r7, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _02220578 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _02220578 ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    b _0222056A\n    ldr r0, [sp, #8]\n    cmp r0, r1\n    beq _02220396\n    ldr r0, _02220574 ; =0x00001FA8\n    mov r1, #0x52\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r7, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _02220578 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #1\n    ldr r2, [sp, #0xc]\n    str r1, [sp, #4]\n    ldrb r3, [r2, #0x11]\n    mov r2, #0x50\n    ldr r0, _02220578 ; =0x00001FAC\n    mul r2, r3\n    add r2, r5, r2\n    ldrh r3, [r2, #0x14]\n    ldr r2, [sp, #8]\n    ldr r0, [r5, r0]\n    sub r2, r2, r3\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r1, _02220578 ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    b _0222056A\n    add r0, r6, #0\n    mov r1, #0x24\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    bne _022203AE\n    add r0, r6, #0\n    mov r1, #0x25\n    bl GetItemAttr_PreloadedItemData\n    cmp r0, #0\n    beq _022203BE\n    ldr r2, _02220574 ; =0x00001FA8\n    mov r1, #0x57\n    ldr r0, [r5, r2]\n    add r2, #8\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    b _0222056A\n    cmp r4, #1\n    ldr r0, _02220574 ; =0x00001FA8\n    bne _022203F6\n    ldr r0, [r5, r0]\n    mov r1, #0x5c\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r7, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _02220578 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _02220578 ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    b _0222056A\n    cmp r4, #2\n    bne _0222042C\n    ldr r0, [r5, r0]\n    mov r1, #0x53\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r7, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _02220578 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _02220578 ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    b _0222056A\n    cmp r4, #4\n    bne _02220462\n    ldr r0, [r5, r0]\n    mov r1, #0x55\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r7, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _02220578 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _02220578 ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    b _0222056A\n    cmp r4, #8\n    bne _02220498\n    ldr r0, [r5, r0]\n    mov r1, #0x56\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r7, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _02220578 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _02220578 ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    b _0222056A\n    cmp r4, #0x10\n    bne _022204CE\n    ldr r0, [r5, r0]\n    mov r1, #0x54\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r7, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _02220578 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _02220578 ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    b _0222056A\n    cmp r4, #0x20\n    bne _02220504\n    ldr r0, [r5, r0]\n    mov r1, #0x5a\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r7, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _02220578 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _02220578 ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    b _0222056A\n    cmp r4, #0x40\n    bne _0222053A\n    ldr r0, [r5, r0]\n    mov r1, #0x5b\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r7, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _02220578 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _02220578 ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    b _0222056A\n    ldr r0, [r5, r0]\n    mov r1, #0x59\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r7, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _02220578 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r1, _02220578 ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02220574: .word 0x00001FA8\n    _02220578: .word 0x00001FAC"
    );
    #endif
}

void ov08_0222057C(void) {
    /* Original at 0x0222057C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r3, [r5]\n    ldrb r2, [r3, #0x11]\n    ldr r0, [r3, #8]\n    ldr r1, [r3, #0x28]\n    add r2, r3, r2\n    add r2, #0x2c\n    ldrb r2, [r2]\n    bl BattleSystem_GetPartyMon\n    add r6, r0, #0\n    ldr r0, _022205D4 ; =0x00001FA8\n    mov r1, #0x5f\n    ldr r0, [r5, r0]\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r6, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _022205D8 ; =0x00001FAC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonNickname\n    ldr r0, _022205D8 ; =0x00001FAC\n    ldr r2, _022205DC ; =MOVE_EMBARGO\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl BufferMoveName\n    ldr r1, _022205D8 ; =0x00001FAC\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    pop {r4, r5, r6, pc}\n    _022205D4: .word 0x00001FA8\n    _022205D8: .word 0x00001FAC\n    _022205DC: .word MOVE_EMBARGO"
    );
    #endif
}

void ov08_022205E0(void) {
    /* Original at 0x022205E0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov08_0222061C\n    add r0, r4, #0\n    bl ov08_02220668\n    add r0, r4, #0\n    bl ov08_02220750\n    add r0, r4, #0\n    bl ov08_02220800\n    add r0, r4, #0\n    bl ov08_02220878\n    add r0, r4, #0\n    bl ov08_02220928\n    add r0, r4, #0\n    bl ov08_02220A28\n    add r0, r4, #0\n    bl ov08_0222162C\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    pop {r4, pc}"
    );
    #endif
}

void ov08_0222061C(void) {
    /* Original at 0x0222061C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    ldr r3, _02220660 ; =ov08_0222541C\n    add r2, sp, #0\n    add r5, r0, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetSpriteSystem\n    add r4, r0, #0\n    bl SpriteManager_New\n    ldr r1, _02220664 ; =0x00001FB4\n    mov r2, #0x2b\n    str r0, [r5, r1]\n    ldr r1, [r5, r1]\n    add r0, r4, #0\n    bl SpriteSystem_InitSprites\n    ldr r1, _02220664 ; =0x00001FB4\n    add r0, r4, #0\n    ldr r1, [r5, r1]\n    add r2, sp, #0\n    bl SpriteSystem_InitManagerWithCapacities\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _02220660: .word ov08_0222541C\n    _02220664: .word 0x00001FB4"
    );
    #endif
}

void ov08_02220668(void) {
    /* Original at 0x02220668 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    ldr r1, [r6]\n    mov r0, #0x14\n    ldr r1, [r1, #0xc]\n    bl NARC_New\n    add r7, r0, #0\n    ldr r0, [r6]\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetSpriteSystem\n    str r0, [sp, #0x18]\n    bl sub_02074490\n    str r7, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r1, #3\n    str r1, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _02220748 ; =0x0000B007\n    ldr r3, _0222074C ; =0x00001FB4\n    str r0, [sp, #0x14]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r6, r0]\n    ldr r2, [sp, #0x18]\n    ldr r3, [r6, r3]\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    bl sub_02074498\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _02220748 ; =0x0000B007\n    ldr r1, _0222074C ; =0x00001FB4\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x18]\n    ldr r1, [r6, r1]\n    add r2, r7, #0\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    bl sub_020744A4\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _02220748 ; =0x0000B007\n    ldr r1, _0222074C ; =0x00001FB4\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x18]\n    ldr r1, [r6, r1]\n    add r2, r7, #0\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r4, #0\n    add r5, r6, #0\n    ldrh r0, [r5, #8]\n    cmp r0, #0\n    beq _0222070E\n    ldr r0, [r5, #4]\n    bl Pokemon_GetIconNaix\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _02220748 ; =0x0000B007\n    ldr r1, _0222074C ; =0x00001FB4\n    add r0, r4, r0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    ldr r1, [r6, r1]\n    add r2, r7, #0\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    b _02220734\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    bl GetMonIconNaixEx\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _02220748 ; =0x0000B007\n    ldr r1, _0222074C ; =0x00001FB4\n    add r0, r4, r0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    ldr r1, [r6, r1]\n    add r2, r7, #0\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    add r4, r4, #1\n    add r5, #0x50\n    cmp r4, #6\n    blo _022206E4\n    add r0, r7, #0\n    bl NARC_Delete\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02220748: .word 0x0000B007\n    _0222074C: .word 0x00001FB4"
    );
    #endif
}

void ov08_02220750(void) {
    /* Original at 0x02220750 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetSpriteSystem\n    ldr r1, [r5]\n    add r4, r0, #0\n    ldr r1, [r1, #0xc]\n    mov r0, #0x27\n    bl NARC_New\n    add r6, r0, #0\n    bl sub_0208AD58\n    str r6, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _022207F4 ; =0x0000B008\n    ldr r3, _022207F8 ; =0x00001FB4\n    str r0, [sp, #0x14]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [r5, r3]\n    mov r1, #3\n    add r2, r4, #0\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    bl sub_0208AD5C\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _022207F4 ; =0x0000B008\n    ldr r1, _022207F8 ; =0x00001FB4\n    str r0, [sp, #4]\n    ldr r1, [r5, r1]\n    add r0, r4, #0\n    add r2, r6, #0\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    bl sub_0208AD60\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _022207F4 ; =0x0000B008\n    ldr r1, _022207F8 ; =0x00001FB4\n    str r0, [sp, #4]\n    ldr r1, [r5, r1]\n    add r0, r4, #0\n    add r2, r6, #0\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    bl sub_0208AD54\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _022207FC ; =0x0000B00D\n    ldr r1, _022207F8 ; =0x00001FB4\n    str r0, [sp, #8]\n    ldr r1, [r5, r1]\n    add r0, r4, #0\n    add r2, r6, #0\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    nop\n    _022207F4: .word 0x0000B008\n    _022207F8: .word 0x00001FB4\n    _022207FC: .word 0x0000B00D"
    );
    #endif
}

void ov08_02220800(void) {
    /* Original at 0x02220800 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetSpriteSystem\n    add r6, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _02220868 ; =0x0000B009\n    ldr r3, _0222086C ; =0x00001FB4\n    str r0, [sp, #4]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [r5, r3]\n    mov r1, #3\n    add r2, r6, #0\n    bl sub_02077720\n    ldr r1, _0222086C ; =0x00001FB4\n    ldr r2, _02220868 ; =0x0000B009\n    ldr r1, [r5, r1]\n    add r0, r6, #0\n    add r3, r2, #0\n    bl sub_0207775C\n    ldr r4, _02220870 ; =0x0000B00E\n    add r7, r4, #6\n    ldr r1, _0222086C ; =0x00001FB4\n    str r4, [sp]\n    ldr r1, [r5, r1]\n    add r0, r6, #0\n    mov r2, #2\n    mov r3, #0\n    bl sub_020776B8\n    add r4, r4, #1\n    cmp r4, r7\n    bls _0222083C\n    ldr r0, _02220874 ; =0x0000B015\n    ldr r1, _0222086C ; =0x00001FB4\n    str r0, [sp]\n    ldr r1, [r5, r1]\n    add r0, r6, #0\n    mov r2, #2\n    mov r3, #0\n    bl sub_02077834\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02220868: .word 0x0000B009\n    _0222086C: .word 0x00001FB4\n    _02220870: .word 0x0000B00E\n    _02220874: .word 0x0000B015"
    );
    #endif
}

void ov08_02220878(void) {
    /* Original at 0x02220878 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0x15\n    ldr r1, [r1, #0xc]\n    bl NARC_New\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetSpriteSystem\n    add r6, r0, #0\n    bl sub_0207CAA0\n    str r4, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _0222091C ; =0x0000B00A\n    ldr r3, _02220920 ; =0x00001FB4\n    str r0, [sp, #0x14]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [r5, r3]\n    mov r1, #3\n    add r2, r6, #0\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    bl sub_0207CAA4\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0222091C ; =0x0000B00A\n    ldr r1, _02220920 ; =0x00001FB4\n    str r0, [sp, #4]\n    ldr r1, [r5, r1]\n    add r0, r6, #0\n    add r2, r4, #0\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    bl sub_0207CAA8\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0222091C ; =0x0000B00A\n    ldr r1, _02220920 ; =0x00001FB4\n    str r0, [sp, #4]\n    ldr r1, [r5, r1]\n    add r0, r6, #0\n    add r2, r4, #0\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    bl sub_0207CA9C\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _02220924 ; =0x0000B016\n    ldr r1, _02220920 ; =0x00001FB4\n    str r0, [sp, #8]\n    ldr r1, [r5, r1]\n    add r0, r6, #0\n    add r2, r4, #0\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    nop\n    _0222091C: .word 0x0000B00A\n    _02220920: .word 0x00001FB4\n    _02220924: .word 0x0000B016"
    );
    #endif
}

void ov08_02220928(void) {
    /* Original at 0x02220928 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetSpriteSystem\n    add r4, r0, #0\n    mov r0, #0x47\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    ldr r0, _022209AC ; =0x0000B00B\n    ldr r3, _022209B0 ; =0x00001FB4\n    str r0, [sp, #0x14]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r3, [r5, r3]\n    mov r1, #3\n    add r2, r4, #0\n    bl SpriteSystem_LoadPaletteBuffer\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _022209AC ; =0x0000B00B\n    ldr r1, _022209B0 ; =0x00001FB4\n    str r0, [sp, #4]\n    ldr r1, [r5, r1]\n    add r0, r4, #0\n    mov r2, #0x47\n    mov r3, #0x19\n    bl SpriteSystem_LoadCellResObj\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _022209AC ; =0x0000B00B\n    ldr r1, _022209B0 ; =0x00001FB4\n    str r0, [sp, #4]\n    ldr r1, [r5, r1]\n    add r0, r4, #0\n    mov r2, #0x47\n    mov r3, #0x18\n    bl SpriteSystem_LoadAnimResObj\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _022209B4 ; =0x0000B017\n    ldr r1, _022209B0 ; =0x00001FB4\n    str r0, [sp, #8]\n    ldr r1, [r5, r1]\n    add r0, r4, #0\n    mov r2, #0x47\n    mov r3, #0x1a\n    bl SpriteSystem_LoadCharResObj\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    _022209AC: .word 0x0000B00B\n    _022209B0: .word 0x00001FB4\n    _022209B4: .word 0x0000B017"
    );
    #endif
}

void ov08_022209B8(void) {
    /* Original at 0x022209B8 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetSpriteSystem\n    mov r2, #0\n    add r1, sp, #0\n    strh r2, [r1]\n    strh r2, [r1, #2]\n    strh r2, [r1, #4]\n    strh r2, [r1, #6]\n    mov r1, #0x14\n    ldr r3, _02220A10 ; =ov08_02225654\n    mul r1, r4\n    ldr r3, [r3, r1]\n    str r2, [sp, #0xc]\n    str r3, [sp, #8]\n    mov r3, #2\n    str r3, [sp, #0x10]\n    ldr r3, _02220A14 ; =ov08_02225644\n    str r2, [sp, #0x30]\n    ldr r3, [r3, r1]\n    add r2, sp, #0\n    str r3, [sp, #0x14]\n    ldr r3, _02220A18 ; =ov08_02225648\n    ldr r3, [r3, r1]\n    str r3, [sp, #0x18]\n    ldr r3, _02220A1C ; =ov08_0222564C\n    ldr r3, [r3, r1]\n    str r3, [sp, #0x1c]\n    ldr r3, _02220A20 ; =ov08_02225650\n    ldr r1, [r3, r1]\n    str r1, [sp, #0x20]\n    mov r1, #1\n    str r1, [sp, #0x2c]\n    ldr r1, _02220A24 ; =0x00001FB4\n    ldr r1, [r5, r1]\n    bl SpriteSystem_NewSprite\n    add sp, #0x34\n    pop {r4, r5, pc}\n    _02220A10: .word ov08_02225654\n    _02220A14: .word ov08_02225644\n    _02220A18: .word ov08_02225648\n    _02220A1C: .word ov08_0222564C\n    _02220A20: .word ov08_02225650\n    _02220A24: .word 0x00001FB4"
    );
    #endif
}

void ov08_02220A28(void) {
    /* Original at 0x02220A28 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r7, _02220A4C ; =0x00001FB8\n    mov r4, #0\n    add r5, r6, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov08_022209B8\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x26\n    blo _02220A32\n    add r0, r6, #0\n    bl ov08_02220AAC\n    pop {r3, r4, r5, r6, r7, pc}\n    _02220A4C: .word 0x00001FB8"
    );
    #endif
}

void ov08_02220A50(void) {
    /* Original at 0x02220A50 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [r7]\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetSpriteSystem\n    ldr r6, _02220A84 ; =0x00001FB8\n    str r0, [sp]\n    mov r4, #0\n    add r5, r7, #0\n    ldr r0, [r5, r6]\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0x26\n    blo _02220A64\n    add r0, r7, #0\n    bl ov08_02221698\n    ldr r1, _02220A88 ; =0x00001FB4\n    ldr r0, [sp]\n    ldr r1, [r7, r1]\n    bl SpriteSystem_FreeResourcesAndManager\n    pop {r3, r4, r5, r6, r7, pc}\n    _02220A84: .word 0x00001FB8\n    _02220A88: .word 0x00001FB4"
    );
    #endif
}

void ov08_02220A8C(void) {
    /* Original at 0x02220A8C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    mov r1, #1\n    add r6, r0, #0\n    bl ManagedSprite_SetDrawFlag\n    lsl r1, r5, #0x10\n    lsl r2, r4, #0x10\n    add r0, r6, #0\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov08_02220AAC(void) {
    /* Original at 0x02220AAC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r5, #0\n    mov r7, #0\n    add r4, #0x1b\n    add r6, r5, #0\n    ldrh r0, [r5, #8]\n    cmp r0, #0\n    beq _02220AD8\n    add r1, r5, #0\n    ldrb r2, [r4]\n    add r1, #0x32\n    ldrb r1, [r1]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x1f\n    bl GetMonIconPaletteEx\n    add r1, r0, #0\n    ldr r0, _02220AE8 ; =0x00001FD4\n    ldr r0, [r6, r0]\n    bl ManagedSprite_SetPaletteOverride\n    add r7, r7, #1\n    add r5, #0x50\n    add r4, #0x50\n    add r6, r6, #4\n    cmp r7, #6\n    blt _02220AB8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02220AE8: .word 0x00001FD4"
    );
    #endif
}

void ov08_02220AEC(void) {
    /* Original at 0x02220AEC */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r3, #0\n    ldr r0, [r0, #8]\n    add r7, r1, #0\n    add r4, r2, #0\n    bl BattleSystem_GetSpriteSystem\n    str r0, [sp, #8]\n    bl sub_020776B4\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    bl sub_02077678\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r1, _02220B38 ; =0x00001FB4\n    str r4, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r1, [r5, r1]\n    ldr r2, [sp, #0xc]\n    bl SpriteSystem_ReplaceCharResObj\n    add r0, r6, #0\n    bl sub_0207769C\n    add r1, r0, #0\n    add r0, r7, #0\n    add r1, r1, #4\n    bl ManagedSprite_SetPaletteOverride\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02220B38: .word 0x00001FB4"
    );
    #endif
}

void ov08_02220B3C(void) {
    /* Original at 0x02220B3C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r2, #0\n    ldr r0, [r0, #8]\n    add r6, r1, #0\n    bl BattleSystem_GetSpriteSystem\n    add r7, r0, #0\n    bl sub_02077830\n    str r0, [sp, #8]\n    add r0, r4, #0\n    bl sub_02077800\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _02220B88 ; =0x0000B015\n    ldr r1, _02220B8C ; =0x00001FB4\n    str r0, [sp, #4]\n    ldr r1, [r5, r1]\n    ldr r2, [sp, #8]\n    add r0, r7, #0\n    bl SpriteSystem_ReplaceCharResObj\n    add r0, r4, #0\n    bl sub_02077818\n    add r1, r0, #0\n    add r0, r6, #0\n    add r1, r1, #4\n    bl ManagedSprite_SetPaletteOverride\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02220B88: .word 0x0000B015\n    _02220B8C: .word 0x00001FB4"
    );
    #endif
}

void ov08_02220B90(void) {
    /* Original at 0x02220B90 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    add r7, r3, #0\n    cmp r6, #7\n    beq _02220BB0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ManagedSprite_SetAnim\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov08_02220A8C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_02220BB4(void) {
    /* Original at 0x02220BB4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    ldr r1, _02220BF8 ; =0x00002004\n    add r5, r0, #0\n    add r6, r2, #0\n    ldrb r3, [r4, #0x14]\n    ldr r1, [r5, r1]\n    ldr r2, _02220BFC ; =0x0000B00E\n    bl ov08_02220AEC\n    ldr r0, _02220BF8 ; =0x00002004\n    ldr r1, [r6]\n    ldr r0, [r5, r0]\n    ldr r2, [r6, #4]\n    bl ov08_02220A8C\n    ldrb r3, [r4, #0x15]\n    ldrb r0, [r4, #0x14]\n    cmp r0, r3\n    beq _02220BF4\n    ldr r1, _02220C00 ; =0x00002008\n    ldr r2, _02220C04 ; =0x0000B00F\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov08_02220AEC\n    ldr r0, _02220C00 ; =0x00002008\n    ldr r1, [r6, #8]\n    ldr r0, [r5, r0]\n    ldr r2, [r6, #0xc]\n    bl ov08_02220A8C\n    pop {r4, r5, r6, pc}\n    nop\n    _02220BF8: .word 0x00002004\n    _02220BFC: .word 0x0000B00E\n    _02220C00: .word 0x00002008\n    _02220C04: .word 0x0000B00F"
    );
    #endif
}

void ov08_02220C08(void) {
    /* Original at 0x02220C08 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r0, #0\n    beq _02220C38\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _02220C26\n    add r0, r5, #0\n    mov r1, #1\n    bl ManagedSprite_SetAnim\n    b _02220C2E\n    add r0, r5, #0\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov08_02220A8C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov08_02220C3C(void) {
    /* Original at 0x02220C3C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r0, #0\n    beq _02220C5A\n    add r0, r5, #0\n    mov r1, #2\n    bl ManagedSprite_SetAnim\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov08_02220A8C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov08_02220C5C(void) {
    /* Original at 0x02220C5C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r7, _02220CF0 ; =0x00001FB8\n    str r1, [sp]\n    mov r5, #0\n    add r4, r6, #0\n    ldr r0, [r4, r7]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r5, r5, #1\n    add r4, r4, #4\n    cmp r5, #0x26\n    blo _02220C68\n    ldr r0, [sp]\n    cmp r0, #9\n    bhi _02220CEC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02220C8A: ; jump table\n    add r0, r6, #0\n    bl ov08_02220CF4\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov08_02220D90\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov08_02220DE8\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov08_02220E80\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov08_02220F58\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov08_0222114C\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov08_0222101C\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov08_02221088\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov08_02221230\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov08_022211B8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02220CF0: .word 0x00001FB8"
    );
    #endif
}

void ov08_02220CF4(void) {
    /* Original at 0x02220CF4 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    str r0, [sp]\n    add r0, #0x1b\n    ldr r4, _02220D78 ; =ov08_02225534\n    ldr r7, _02220D7C ; =ov08_02225564\n    add r5, r6, #0\n    str r0, [sp]\n    ldrh r0, [r6, #8]\n    cmp r0, #0\n    beq _02220D5A\n    ldr r0, _02220D80 ; =0x00001FD4\n    ldr r1, [r4]\n    ldr r0, [r5, r0]\n    ldr r2, [r4, #4]\n    bl ov08_02220A8C\n    ldr r0, [sp]\n    ldr r1, _02220D84 ; =0x00001FEC\n    ldrb r0, [r0]\n    ldr r1, [r5, r1]\n    ldr r2, [r7]\n    lsl r0, r0, #0x19\n    ldr r3, [r7, #4]\n    lsr r0, r0, #0x1c\n    bl ov08_02220B90\n    ldr r1, _02220D88 ; =0x00001FB8\n    ldr r2, [r4]\n    ldr r3, [r4, #4]\n    ldrh r0, [r6, #0x1e]\n    ldr r1, [r5, r1]\n    add r2, #8\n    add r3, #8\n    bl ov08_02220C08\n    add r0, r6, #0\n    add r0, #0x31\n    ldr r1, _02220D8C ; =0x00002038\n    ldr r2, [r4]\n    ldr r3, [r4, #4]\n    ldrb r0, [r0]\n    ldr r1, [r5, r1]\n    add r2, #0x10\n    add r3, #8\n    bl ov08_02220C3C\n    ldr r0, [sp]\n    add r6, #0x50\n    add r0, #0x50\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    add r4, #8\n    add r0, r0, #1\n    add r5, r5, #4\n    add r7, #8\n    str r0, [sp, #4]\n    cmp r0, #6\n    blt _02220D0C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02220D78: .word ov08_02225534\n    _02220D7C: .word ov08_02225564\n    _02220D80: .word 0x00001FD4\n    _02220D84: .word 0x00001FEC\n    _02220D88: .word 0x00001FB8\n    _02220D8C: .word 0x00002038"
    );
    #endif
}

void ov08_02220D90(void) {
    /* Original at 0x02220D90 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r1, r5, #4\n    ldrb r2, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r2\n    add r4, r1, r0\n    add r0, r2, #7\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02220DE4 ; =0x00001FB8\n    mov r2, #0x48\n    ldr r0, [r1, r0]\n    mov r1, #0x80\n    bl ov08_02220A8C\n    ldr r1, [r5]\n    ldrh r0, [r4, #0x1a]\n    ldrb r1, [r1, #0x11]\n    mov r3, #0x50\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02220DE4 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x88\n    bl ov08_02220C08\n    ldr r1, [r5]\n    add r4, #0x2d\n    ldrb r1, [r1, #0x11]\n    ldrb r0, [r4]\n    mov r3, #0x50\n    add r1, #0x20\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02220DE4 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x90\n    bl ov08_02220C3C\n    pop {r3, r4, r5, pc}\n    _02220DE4: .word 0x00001FB8"
    );
    #endif
}

void ov08_02220DE8(void) {
    /* Original at 0x02220DE8 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r1, r5, #4\n    ldrb r2, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r2\n    add r4, r1, r0\n    add r0, r2, #7\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02220E74 ; =0x00001FB8\n    mov r2, #0xc\n    ldr r0, [r1, r0]\n    mov r1, #0x18\n    bl ov08_02220A8C\n    ldr r1, [r5]\n    ldrb r0, [r4, #0x17]\n    ldrb r1, [r1, #0x11]\n    mov r3, #0x14\n    lsl r0, r0, #0x19\n    add r1, #0xd\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02220E74 ; =0x00001FB8\n    lsr r0, r0, #0x1c\n    ldr r1, [r2, r1]\n    mov r2, #0xc6\n    bl ov08_02220B90\n    ldr r2, _02220E78 ; =ov08_022253F4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02220BB4\n    ldr r1, [r5]\n    ldrh r0, [r4, #0x1a]\n    ldrb r1, [r1, #0x11]\n    mov r3, #0x14\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02220E74 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x20\n    bl ov08_02220C08\n    ldr r1, [r5]\n    add r0, r4, #0\n    ldrb r1, [r1, #0x11]\n    add r0, #0x2d\n    ldrb r0, [r0]\n    add r1, #0x20\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02220E74 ; =0x00001FB8\n    mov r3, #0x14\n    ldr r1, [r2, r1]\n    mov r2, #0x28\n    bl ov08_02220C3C\n    ldr r1, _02220E7C ; =0x00001FD0\n    ldrh r0, [r4, #0x1a]\n    ldr r1, [r5, r1]\n    mov r2, #0x14\n    mov r3, #0x84\n    bl ov08_02220C08\n    pop {r3, r4, r5, pc}\n    nop\n    _02220E74: .word 0x00001FB8\n    _02220E78: .word ov08_022253F4\n    _02220E7C: .word 0x00001FD0"
    );
    #endif
}

void ov08_02220E80(void) {
    /* Original at 0x02220E80 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    ldr r0, [r0]\n    ldrb r2, [r0, #0x11]\n    ldr r0, [sp]\n    add r1, r0, #4\n    mov r0, #0x50\n    mul r0, r2\n    add r4, r1, r0\n    add r0, r2, #7\n    lsl r1, r0, #2\n    ldr r0, [sp]\n    mov r2, #0xc\n    add r1, r0, r1\n    ldr r0, _02220F44 ; =0x00001FB8\n    ldr r0, [r1, r0]\n    mov r1, #0x18\n    bl ov08_02220A8C\n    ldr r1, [sp]\n    ldrb r0, [r4, #0x17]\n    ldr r1, [r1]\n    mov r3, #0x14\n    ldrb r1, [r1, #0x11]\n    lsl r0, r0, #0x19\n    lsr r0, r0, #0x1c\n    add r1, #0xd\n    lsl r2, r1, #2\n    ldr r1, [sp]\n    add r2, r1, r2\n    ldr r1, _02220F44 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0xc6\n    bl ov08_02220B90\n    ldr r0, [sp]\n    ldr r2, _02220F48 ; =ov08_022253D4\n    add r1, r4, #0\n    bl ov08_02220BB4\n    ldr r1, [sp]\n    ldrh r0, [r4, #0x1a]\n    ldr r1, [r1]\n    mov r3, #0x14\n    ldrb r1, [r1, #0x11]\n    lsl r2, r1, #2\n    ldr r1, [sp]\n    add r2, r1, r2\n    ldr r1, _02220F44 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x20\n    bl ov08_02220C08\n    ldr r1, [sp]\n    add r0, r4, #0\n    ldr r1, [r1]\n    add r0, #0x2d\n    ldrb r1, [r1, #0x11]\n    ldrb r0, [r0]\n    mov r3, #0x14\n    add r1, #0x20\n    lsl r2, r1, #2\n    ldr r1, [sp]\n    add r2, r1, r2\n    ldr r1, _02220F44 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x28\n    bl ov08_02220C3C\n    ldr r5, [sp]\n    ldr r6, _02220F4C ; =ov08_02225454\n    mov r7, #0\n    ldrh r0, [r4, #0x30]\n    cmp r0, #0\n    beq _02220F36\n    add r3, r4, #0\n    ldr r1, _02220F50 ; =0x0000200C\n    add r3, #0x34\n    ldr r2, _02220F54 ; =0x0000B010\n    ldrb r3, [r3]\n    ldr r0, [sp]\n    ldr r1, [r5, r1]\n    add r2, r7, r2\n    bl ov08_02220AEC\n    ldr r0, _02220F50 ; =0x0000200C\n    ldr r1, [r6]\n    ldr r0, [r5, r0]\n    ldr r2, [r6, #4]\n    bl ov08_02220A8C\n    add r7, r7, #1\n    add r4, #8\n    add r5, r5, #4\n    add r6, #8\n    cmp r7, #4\n    blo _02220F10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02220F44: .word 0x00001FB8\n    _02220F48: .word ov08_022253D4\n    _02220F4C: .word ov08_02225454\n    _02220F50: .word 0x0000200C\n    _02220F54: .word 0x0000B010"
    );
    #endif
}

void ov08_02220F58(void) {
    /* Original at 0x02220F58 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r1, r5, #4\n    ldrb r2, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r2\n    add r4, r1, r0\n    add r0, r2, #7\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02221010 ; =0x00001FB8\n    mov r2, #0xc\n    ldr r0, [r1, r0]\n    mov r1, #0x18\n    bl ov08_02220A8C\n    ldr r1, [r5]\n    ldrb r0, [r4, #0x17]\n    ldrb r1, [r1, #0x11]\n    mov r3, #0x14\n    lsl r0, r0, #0x19\n    add r1, #0xd\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02221010 ; =0x00001FB8\n    lsr r0, r0, #0x1c\n    ldr r1, [r2, r1]\n    mov r2, #0xc6\n    bl ov08_02220B90\n    ldr r2, _02221014 ; =ov08_022253E4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02220BB4\n    ldr r0, [r5]\n    mov r2, #0x30\n    add r0, #0x34\n    ldrb r0, [r0]\n    add r0, #0x15\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02221010 ; =0x00001FB8\n    ldr r0, [r1, r0]\n    mov r1, #0x88\n    bl ov08_02220A8C\n    ldr r1, [r5]\n    ldrh r0, [r4, #0x1a]\n    ldrb r1, [r1, #0x11]\n    mov r3, #0x14\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02221010 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x20\n    bl ov08_02220C08\n    ldr r1, [r5]\n    add r0, r4, #0\n    ldrb r1, [r1, #0x11]\n    add r0, #0x2d\n    ldrb r0, [r0]\n    add r1, #0x20\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02221010 ; =0x00001FB8\n    mov r3, #0x14\n    ldr r1, [r2, r1]\n    mov r2, #0x28\n    bl ov08_02220C3C\n    ldr r2, [r5]\n    ldr r1, _02221018 ; =0x00002020\n    add r2, #0x34\n    ldrb r2, [r2]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    lsl r2, r2, #3\n    add r2, r4, r2\n    add r2, #0x35\n    ldrb r2, [r2]\n    bl ov08_02220B3C\n    ldr r0, _02221018 ; =0x00002020\n    mov r1, #0x18\n    ldr r0, [r5, r0]\n    mov r2, #0x58\n    bl ov08_02220A8C\n    pop {r3, r4, r5, pc}\n    _02221010: .word 0x00001FB8\n    _02221014: .word ov08_022253E4\n    _02221018: .word 0x00002020"
    );
    #endif
}

void ov08_0222101C(void) {
    /* Original at 0x0222101C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r1, r5, #4\n    ldrb r2, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r2\n    add r4, r1, r0\n    add r0, r2, #7\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02221080 ; =0x00001FB8\n    mov r2, #0xc\n    ldr r0, [r1, r0]\n    mov r1, #0x18\n    bl ov08_02220A8C\n    ldr r2, _02221084 ; =ov08_022253C4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02220BB4\n    ldr r1, [r5]\n    ldrh r0, [r4, #0x1a]\n    ldrb r1, [r1, #0x11]\n    mov r3, #0x14\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02221080 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x20\n    bl ov08_02220C08\n    ldr r1, [r5]\n    add r4, #0x2d\n    ldrb r1, [r1, #0x11]\n    ldrb r0, [r4]\n    mov r3, #0x14\n    add r1, #0x20\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02221080 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x28\n    bl ov08_02220C3C\n    add r0, r5, #0\n    bl ov08_022213C8\n    pop {r3, r4, r5, pc}\n    _02221080: .word 0x00001FB8\n    _02221084: .word ov08_022253C4"
    );
    #endif
}

void ov08_02221088(void) {
    /* Original at 0x02221088 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r1, r5, #4\n    ldrb r2, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r2\n    add r4, r1, r0\n    add r0, r2, #7\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02221140 ; =0x00001FB8\n    mov r2, #0xc\n    ldr r0, [r1, r0]\n    mov r1, #0x18\n    bl ov08_02220A8C\n    ldr r2, _02221144 ; =ov08_022253B4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02220BB4\n    ldr r0, [r5]\n    mov r2, #0x30\n    add r0, #0x34\n    ldrb r0, [r0]\n    add r0, #0x15\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02221140 ; =0x00001FB8\n    ldr r0, [r1, r0]\n    mov r1, #0x88\n    bl ov08_02220A8C\n    ldr r1, [r5]\n    ldrh r0, [r4, #0x1a]\n    ldrb r1, [r1, #0x11]\n    mov r3, #0x14\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02221140 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x20\n    bl ov08_02220C08\n    ldr r1, [r5]\n    add r0, r4, #0\n    ldrb r1, [r1, #0x11]\n    add r0, #0x2d\n    ldrb r0, [r0]\n    add r1, #0x20\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02221140 ; =0x00001FB8\n    mov r3, #0x14\n    ldr r1, [r2, r1]\n    mov r2, #0x28\n    bl ov08_02220C3C\n    ldr r1, [r5]\n    add r0, r1, #0\n    add r0, #0x34\n    ldrb r2, [r0]\n    cmp r2, #4\n    bhs _0222111E\n    lsl r2, r2, #3\n    add r2, r4, r2\n    ldr r1, _02221148 ; =0x00002020\n    add r2, #0x35\n    ldrb r2, [r2]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov08_02220B3C\n    b _02221132\n    ldrh r0, [r1, #0x24]\n    mov r1, #1\n    bl GetMoveAttr\n    ldr r1, _02221148 ; =0x00002020\n    add r2, r0, #0\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    bl ov08_02220B3C\n    ldr r0, _02221148 ; =0x00002020\n    mov r1, #0x18\n    ldr r0, [r5, r0]\n    mov r2, #0x58\n    bl ov08_02220A8C\n    pop {r3, r4, r5, pc}\n    _02221140: .word 0x00001FB8\n    _02221144: .word ov08_022253B4\n    _02221148: .word 0x00002020"
    );
    #endif
}

void ov08_0222114C(void) {
    /* Original at 0x0222114C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r1, r5, #4\n    ldrb r2, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r2\n    add r4, r1, r0\n    add r0, r2, #7\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _022211B0 ; =0x00001FB8\n    mov r2, #0xc\n    ldr r0, [r1, r0]\n    mov r1, #0x18\n    bl ov08_02220A8C\n    ldr r2, _022211B4 ; =ov08_022253C4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02220BB4\n    ldr r1, [r5]\n    ldrh r0, [r4, #0x1a]\n    ldrb r1, [r1, #0x11]\n    mov r3, #0x14\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _022211B0 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x20\n    bl ov08_02220C08\n    ldr r1, [r5]\n    add r4, #0x2d\n    ldrb r1, [r1, #0x11]\n    ldrb r0, [r4]\n    mov r3, #0x14\n    add r1, #0x20\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _022211B0 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x28\n    bl ov08_02220C3C\n    add r0, r5, #0\n    bl ov08_022213C8\n    pop {r3, r4, r5, pc}\n    _022211B0: .word 0x00001FB8\n    _022211B4: .word ov08_022253C4"
    );
    #endif
}

void ov08_022211B8(void) {
    /* Original at 0x022211B8 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r1, r5, #4\n    ldrb r2, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r2\n    add r4, r1, r0\n    add r0, r2, #7\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _0222122C ; =0x00001FB8\n    mov r2, #0xc\n    ldr r0, [r1, r0]\n    mov r1, #0x18\n    bl ov08_02220A8C\n    ldr r0, [r5]\n    mov r2, #0x48\n    add r0, #0x34\n    ldrb r0, [r0]\n    add r0, #0x15\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _0222122C ; =0x00001FB8\n    ldr r0, [r1, r0]\n    mov r1, #0x88\n    bl ov08_02220A8C\n    ldr r1, [r5]\n    ldrh r0, [r4, #0x1a]\n    ldrb r1, [r1, #0x11]\n    mov r3, #0x14\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _0222122C ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x20\n    bl ov08_02220C08\n    ldr r1, [r5]\n    add r4, #0x2d\n    ldrb r1, [r1, #0x11]\n    ldrb r0, [r4]\n    mov r3, #0x14\n    add r1, #0x20\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _0222122C ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x28\n    bl ov08_02220C3C\n    add r0, r5, #0\n    bl ov08_02221500\n    pop {r3, r4, r5, pc}\n    nop\n    _0222122C: .word 0x00001FB8"
    );
    #endif
}

void ov08_02221230(void) {
    /* Original at 0x02221230 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r1, r5, #4\n    ldrb r2, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r2\n    add r4, r1, r0\n    add r0, r2, #7\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _02221290 ; =0x00001FB8\n    mov r2, #0xc\n    ldr r0, [r1, r0]\n    mov r1, #0x18\n    bl ov08_02220A8C\n    ldr r1, [r5]\n    ldrh r0, [r4, #0x1a]\n    ldrb r1, [r1, #0x11]\n    mov r3, #0x14\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02221290 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x20\n    bl ov08_02220C08\n    ldr r1, [r5]\n    add r4, #0x2d\n    ldrb r1, [r1, #0x11]\n    ldrb r0, [r4]\n    mov r3, #0x14\n    add r1, #0x20\n    lsl r1, r1, #2\n    add r2, r5, r1\n    ldr r1, _02221290 ; =0x00001FB8\n    ldr r1, [r2, r1]\n    mov r2, #0x28\n    bl ov08_02220C3C\n    add r0, r5, #0\n    bl ov08_022213C8\n    add r0, r5, #0\n    bl ov08_02221500\n    pop {r3, r4, r5, pc}\n    _02221290: .word 0x00001FB8"
    );
    #endif
}

void ov08_02221294(void) {
    /* Original at 0x02221294 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6]\n    add r2, r6, #4\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    mov r4, #0\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [sp]\n    ldr r0, [sp]\n    lsl r5, r4, #3\n    add r3, r0, r5\n    ldrh r0, [r3, #0x30]\n    cmp r0, #0\n    beq _022212DC\n    lsl r0, r4, #2\n    add r3, #0x34\n    add r7, r6, r0\n    ldr r1, _02221314 ; =0x0000200C\n    ldr r2, _02221318 ; =0x0000B010\n    ldrb r3, [r3]\n    ldr r1, [r7, r1]\n    add r0, r6, #0\n    add r2, r4, r2\n    bl ov08_02220AEC\n    ldr r0, _0222131C ; =ov08_0222550C\n    ldr r1, _0222131C ; =ov08_0222550C\n    add r2, r0, r5\n    ldr r0, _02221314 ; =0x0000200C\n    ldr r1, [r1, r5]\n    ldr r0, [r7, r0]\n    ldr r2, [r2, #4]\n    bl ov08_02220A8C\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #4\n    blo _022212A8\n    ldr r0, [r6]\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _02221312\n    mov r1, #3\n    bl GetMoveAttr\n    add r3, r0, #0\n    ldr r1, _02221320 ; =0x0000201C\n    lsl r3, r3, #0x18\n    ldr r1, [r6, r1]\n    ldr r2, _02221324 ; =0x0000B014\n    add r0, r6, #0\n    lsr r3, r3, #0x18\n    bl ov08_02220AEC\n    ldr r0, _02221320 ; =0x0000201C\n    mov r1, #0x58\n    ldr r0, [r6, r0]\n    mov r2, #0xb0\n    bl ov08_02220A8C\n    pop {r3, r4, r5, r6, r7, pc}\n    _02221314: .word 0x0000200C\n    _02221318: .word 0x0000B010\n    _0222131C: .word ov08_0222550C\n    _02221320: .word 0x0000201C\n    _02221324: .word 0x0000B014"
    );
    #endif
}

void ov08_02221328(void) {
    /* Original at 0x02221328 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [r7]\n    add r2, r7, #4\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    mov r4, #0\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [sp]\n    ldr r0, [sp]\n    lsl r5, r4, #3\n    add r0, r0, r5\n    ldrh r0, [r0, #0x30]\n    cmp r0, #0\n    beq _0222137A\n    lsl r1, r4, #2\n    add r6, r7, r1\n    mov r1, #0xb\n    bl GetMoveAttr\n    add r3, r0, #0\n    ldr r1, _022213B4 ; =0x0000200C\n    ldr r2, _022213B8 ; =0x0000B010\n    add r3, #0x12\n    lsl r3, r3, #0x18\n    ldr r1, [r6, r1]\n    add r0, r7, #0\n    add r2, r4, r2\n    lsr r3, r3, #0x18\n    bl ov08_02220AEC\n    ldr r0, _022213BC ; =ov08_0222550C\n    ldr r1, _022213BC ; =ov08_0222550C\n    add r2, r0, r5\n    ldr r0, _022213B4 ; =0x0000200C\n    ldr r1, [r1, r5]\n    ldr r0, [r6, r0]\n    ldr r2, [r2, #4]\n    bl ov08_02220A8C\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #4\n    blo _0222133C\n    ldr r0, [r7]\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _022213B2\n    mov r1, #0xb\n    bl GetMoveAttr\n    add r3, r0, #0\n    ldr r1, _022213C0 ; =0x0000201C\n    add r3, #0x12\n    lsl r3, r3, #0x18\n    ldr r1, [r7, r1]\n    ldr r2, _022213C4 ; =0x0000B014\n    add r0, r7, #0\n    lsr r3, r3, #0x18\n    bl ov08_02220AEC\n    ldr r0, _022213C0 ; =0x0000201C\n    mov r1, #0x58\n    ldr r0, [r7, r0]\n    mov r2, #0xb0\n    bl ov08_02220A8C\n    pop {r3, r4, r5, r6, r7, pc}\n    _022213B4: .word 0x0000200C\n    _022213B8: .word 0x0000B010\n    _022213BC: .word ov08_0222550C\n    _022213C0: .word 0x0000201C\n    _022213C4: .word 0x0000B014"
    );
    #endif
}

void ov08_022213C8(void) {
    /* Original at 0x022213C8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _022213E0 ; =0x00002077\n    ldrb r1, [r0, r1]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    bne _022213DA\n    bl ov08_02221294\n    pop {r3, pc}\n    bl ov08_02221328\n    pop {r3, pc}\n    _022213E0: .word 0x00002077"
    );
    #endif
}

void ov08_022213E4(void) {
    /* Original at 0x022213E4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ManagedSprite_GetActiveAnim\n    cmp r4, r0\n    beq _02221402\n    add r0, r5, #0\n    mov r1, #0\n    bl ManagedSprite_SetAnimationFrame\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ManagedSprite_SetAnim\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov08_02221404(void) {
    /* Original at 0x02221404 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r2, r0, #0\n    ldrh r0, [r2, #0x10]\n    cmp r0, #0\n    bne _02221412\n    mov r0, #0\n    pop {r3, pc}\n    ldrb r1, [r2, #0x17]\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x1c\n    cmp r1, #7\n    beq _02221424\n    cmp r1, #6\n    beq _02221424\n    mov r0, #5\n    pop {r3, pc}\n    ldrh r1, [r2, #0x12]\n    mov r2, #0x30\n    bl CalculateHpBarColor\n    cmp r0, #4\n    bhi _02221456\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222143C: ; jump table\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #2\n    pop {r3, pc}\n    mov r0, #3\n    pop {r3, pc}\n    mov r0, #4\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov08_0222145C(void) {
    /* Original at 0x0222145C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    mov r4, #0\n    ldr r0, [r0]\n    bl Party_GetCount\n    cmp r0, #0\n    ble _022214B4\n    add r7, r5, #4\n    mov r0, #0x50\n    add r1, r4, #0\n    mul r1, r0\n    add r0, r5, r1\n    ldrh r0, [r0, #8]\n    cmp r0, #0\n    beq _022214A2\n    add r0, r7, r1\n    bl ov08_02221404\n    add r1, r0, #0\n    lsl r0, r4, #2\n    add r6, r5, r0\n    ldr r0, _022214B8 ; =0x00001FD4\n    lsl r1, r1, #0x18\n    ldr r0, [r6, r0]\n    lsr r1, r1, #0x18\n    bl ov08_022213E4\n    ldr r0, _022214B8 ; =0x00001FD4\n    mov r1, #1\n    ldr r0, [r6, r0]\n    lsl r1, r1, #0xc\n    bl ManagedSprite_TickNFrames\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl Party_GetCount\n    cmp r4, r0\n    blt _02221470\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022214B8: .word 0x00001FD4"
    );
    #endif
}

void ov08_022214BC(void) {
    /* Original at 0x022214BC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    cmp r4, r1\n    ble _022214E2\n    add r0, #0x2c\n    sub r1, r4, r1\n    mul r1, r0\n    lsl r0, r1, #0x10\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    bl _u32_div_f\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    sub r0, r4, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    pop {r4, pc}\n    add r0, #0x2c\n    sub r1, r1, r4\n    mul r1, r0\n    lsl r0, r1, #0x10\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    bl _u32_div_f\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add r0, r4, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov08_02221500(void) {
    /* Original at 0x02221500 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6]\n    add r5, r6, #4\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    add r4, r1, #0\n    mul r4, r0\n    ldr r0, _02221618 ; =0x00002024\n    mov r1, #0\n    ldr r0, [r6, r0]\n    bl ov08_022213E4\n    ldr r0, _0222161C ; =0x00002028\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl ov08_022213E4\n    ldr r0, _02221620 ; =0x0000202C\n    mov r1, #3\n    ldr r0, [r6, r0]\n    bl ov08_022213E4\n    ldr r0, _02221624 ; =0x00002030\n    mov r1, #4\n    ldr r0, [r6, r0]\n    bl ov08_022213E4\n    ldr r0, _02221628 ; =0x00002034\n    mov r1, #2\n    ldr r0, [r6, r0]\n    bl ov08_022213E4\n    add r0, r5, r4\n    add r0, #0x28\n    mov r1, #0x90\n    ldrb r0, [r0]\n    add r2, r1, #0\n    bl ov08_022214BC\n    add r7, r0, #0\n    add r0, r5, r4\n    add r0, #0x28\n    ldrb r0, [r0]\n    mov r1, #2\n    mov r2, #0x18\n    bl ov08_022214BC\n    add r2, r0, #0\n    ldr r0, _02221618 ; =0x00002024\n    add r1, r7, #0\n    ldr r0, [r6, r0]\n    bl ov08_02220A8C\n    add r0, r5, r4\n    add r0, #0x29\n    ldrb r0, [r0]\n    mov r1, #0xa4\n    mov r2, #0x90\n    bl ov08_022214BC\n    add r7, r0, #0\n    add r0, r5, r4\n    add r0, #0x29\n    ldrb r0, [r0]\n    mov r1, #0x10\n    mov r2, #0x18\n    bl ov08_022214BC\n    add r2, r0, #0\n    ldr r0, _0222161C ; =0x00002028\n    add r1, r7, #0\n    ldr r0, [r6, r0]\n    bl ov08_02220A8C\n    add r0, r5, r4\n    add r0, #0x2a\n    ldrb r0, [r0]\n    mov r1, #0x9c\n    mov r2, #0x90\n    bl ov08_022214BC\n    add r7, r0, #0\n    add r0, r5, r4\n    add r0, #0x2a\n    ldrb r0, [r0]\n    mov r1, #0x29\n    mov r2, #0x18\n    bl ov08_022214BC\n    add r2, r0, #0\n    ldr r0, _02221620 ; =0x0000202C\n    add r1, r7, #0\n    ldr r0, [r6, r0]\n    bl ov08_02220A8C\n    add r0, r5, r4\n    add r0, #0x2b\n    ldrb r0, [r0]\n    mov r1, #0x83\n    mov r2, #0x8f\n    bl ov08_022214BC\n    add r7, r0, #0\n    add r0, r5, r4\n    add r0, #0x2b\n    ldrb r0, [r0]\n    mov r1, #0x29\n    mov r2, #0x18\n    bl ov08_022214BC\n    add r2, r0, #0\n    ldr r0, _02221624 ; =0x00002030\n    add r1, r7, #0\n    ldr r0, [r6, r0]\n    bl ov08_02220A8C\n    add r0, r5, r4\n    add r0, #0x2c\n    ldrb r0, [r0]\n    mov r1, #0x7b\n    mov r2, #0x8f\n    bl ov08_022214BC\n    add r7, r0, #0\n    add r0, r5, r4\n    add r0, #0x2c\n    ldrb r0, [r0]\n    mov r1, #0x10\n    mov r2, #0x18\n    bl ov08_022214BC\n    add r2, r0, #0\n    ldr r0, _02221628 ; =0x00002034\n    add r1, r7, #0\n    ldr r0, [r6, r0]\n    bl ov08_02220A8C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02221618: .word 0x00002024\n    _0222161C: .word 0x00002028\n    _02221620: .word 0x0000202C\n    _02221624: .word 0x00002030\n    _02221628: .word 0x00002034"
    );
    #endif
}

void ov08_0222162C(void) {
    /* Original at 0x0222162C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl BattleSystem_GetSpriteSystem\n    ldr r1, _02221688 ; =0x0000B018\n    mov r2, #0x7a\n    str r1, [sp]\n    sub r1, #0xc\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r1, _0222168C ; =0x00001FB4\n    ldr r3, [r5]\n    lsl r2, r2, #2\n    ldr r1, [r5, r1]\n    ldr r2, [r5, r2]\n    ldr r3, [r3, #0xc]\n    add r4, r0, #0\n    bl BattleCursor_LoadResources\n    ldr r3, _02221690 ; =0x0000B00C\n    mov r0, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r1, _0222168C ; =0x00001FB4\n    ldr r2, [r5]\n    ldr r1, [r5, r1]\n    ldr r2, [r2, #0xc]\n    add r0, r4, #0\n    add r3, #0xc\n    bl BattleCursor_New\n    add r1, r0, #0\n    ldr r0, _02221694 ; =0x00002088\n    ldr r0, [r5, r0]\n    bl ov08_02224B94\n    add sp, #0x14\n    pop {r4, r5, pc}\n    _02221688: .word 0x0000B018\n    _0222168C: .word 0x00001FB4\n    _02221690: .word 0x0000B00C\n    _02221694: .word 0x00002088"
    );
    #endif
}

void ov08_02221698(void) {
    /* Original at 0x02221698 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _022216C0 ; =0x00002088\n    ldr r0, [r4, r0]\n    bl ov08_02224B84\n    bl BattleCursor_Delete\n    ldr r2, _022216C4 ; =0x0000B00C\n    ldr r0, _022216C8 ; =0x00001FB4\n    str r2, [sp]\n    add r1, r2, #0\n    ldr r0, [r4, r0]\n    add r1, #0xc\n    add r3, r2, #0\n    bl BattleCursor_FreeResources\n    add sp, #4\n    pop {r3, r4, pc}\n    _022216C0: .word 0x00002088\n    _022216C4: .word 0x0000B00C\n    _022216C8: .word 0x00001FB4"
    );
    #endif
}

void ov08_022216CC(void) {
    /* Original at 0x022216CC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _022216F0 ; =0x00002077\n    ldrb r2, [r0, r1]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x1c\n    bne _022216E4\n    add r1, #0x11\n    ldr r0, [r0, r1]\n    mov r1, #0x5f\n    bl ov08_02224BF8\n    pop {r3, pc}\n    add r1, #0x11\n    ldr r0, [r0, r1]\n    mov r1, #0x7f\n    bl ov08_02224BF8\n    pop {r3, pc}\n    _022216F0: .word 0x00002077"
    );
    #endif
}

void ov08_022216F4(void) {
    /* Original at 0x022216F4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02221718 ; =0x00002077\n    ldrb r2, [r0, r1]\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x1c\n    bne _0222170C\n    add r1, #0x11\n    ldr r0, [r0, r1]\n    mov r1, #5\n    bl ov08_02224BF8\n    pop {r3, pc}\n    add r1, #0x11\n    ldr r0, [r0, r1]\n    mov r1, #7\n    bl ov08_02224BF8\n    pop {r3, pc}\n    _02221718: .word 0x00002077"
    );
    #endif
}

void ov08_0222171C(void) {
    /* Original at 0x0222171C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    ldr r0, _022217BC ; =0x00002088\n    ldr r1, _022217C0 ; =ov08_022254BC\n    lsl r2, r5, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r1, r2]\n    bl ov08_02224BCC\n    cmp r5, #9\n    bhi _022217BA\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02221740: ; jump table\n    ldr r1, [r4]\n    ldr r0, _022217BC ; =0x00002088\n    ldrb r1, [r1, #0x11]\n    ldr r0, [r4, r0]\n    bl ov08_02224B98\n    ldr r0, _022217C4 ; =0x0000208C\n    mov r1, #0\n    strb r1, [r4, r0]\n    ldr r0, [r4]\n    add r0, #0x34\n    strb r1, [r0]\n    pop {r3, r4, r5, pc}\n    ldr r1, _022217BC ; =0x00002088\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldrb r1, [r4, r1]\n    bl ov08_02224B98\n    ldr r0, [r4]\n    mov r1, #0\n    add r0, #0x34\n    strb r1, [r0]\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4]\n    ldr r0, _022217BC ; =0x00002088\n    add r1, #0x34\n    ldrb r1, [r1]\n    ldr r0, [r4, r0]\n    bl ov08_02224B98\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov08_022216CC\n    ldr r1, _022217BC ; =0x00002088\n    ldr r0, [r4, r1]\n    add r1, r1, #5\n    ldrb r1, [r4, r1]\n    bl ov08_02224B98\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl ov08_022216F4\n    ldr r1, _022217BC ; =0x00002088\n    ldr r0, [r4, r1]\n    add r1, r1, #6\n    ldrb r1, [r4, r1]\n    bl ov08_02224B98\n    pop {r3, r4, r5, pc}\n    _022217BC: .word 0x00002088\n    _022217C0: .word ov08_022254BC\n    _022217C4: .word 0x0000208C"
    );
    #endif
}

void ov08_022217C8(void) {
    /* Original at 0x022217C8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _022217EC ; =0x00002088\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ov08_02224B90\n    ldr r0, _022217EC ; =0x00002088\n    ldr r0, [r4, r0]\n    bl ov08_02224BC0\n    ldr r0, _022217EC ; =0x00002088\n    ldr r0, [r4, r0]\n    bl ov08_02224B84\n    bl BattleCursor_Disable\n    pop {r4, pc}\n    _022217EC: .word 0x00002088"
    );
    #endif
}

void ov08_022217F0(void) {
    /* Original at 0x022217F0 */
    /* Requires manual decompilation - 346 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #0x7b\n    lsl r0, r0, #2\n    mov r2, #0\n    add r0, r5, r0\n    add r3, r2, #0\n    add r4, r1, #0\n    bl ov08_02221BD0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0xab\n    lsl r0, r0, #2\n    mov r3, #6\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r2, #0\n    str r3, [sp, #4]\n    bl ov08_02221BD0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #0xdb\n    lsl r0, r0, #2\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r2, #0\n    mov r3, #0xc\n    bl ov08_02221BD0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    ldr r0, _02221AB0 ; =0x0000042C\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x12\n    bl ov08_02221BD0\n    mov r2, #0x10\n    str r2, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    ldr r0, _02221AB4 ; =0x000004EC\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r3, #0\n    bl ov08_02221BD0\n    ldr r0, _02221AB8 ; =0x000005AC\n    mov r2, #0x10\n    str r2, [sp]\n    mov r3, #6\n    add r0, r5, r0\n    add r1, r4, #0\n    str r3, [sp, #4]\n    bl ov08_02221BD0\n    mov r2, #0x10\n    str r2, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    ldr r0, _02221ABC ; =0x0000066C\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r3, #0xc\n    bl ov08_02221BD0\n    mov r2, #0x10\n    str r2, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    ldr r0, _02221AC0 ; =0x0000072C\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r3, #0x12\n    bl ov08_02221BD0\n    mov r0, #0xd\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    ldr r0, _02221AC4 ; =0x000007EC\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x27\n    bl ov08_02221BD0\n    mov r0, #0xd\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    ldr r0, _02221AC8 ; =0x0000086E\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x2c\n    bl ov08_02221BD0\n    mov r2, #0xd\n    str r2, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    mov r0, #0x8f\n    lsl r0, r0, #4\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r3, #0x27\n    bl ov08_02221BD0\n    mov r2, #0xd\n    str r2, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    ldr r0, _02221ACC ; =0x00000972\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r3, #0x2c\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02221AD0 ; =0x000009F4\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x31\n    bl ov08_02221BD0\n    ldr r0, _02221AD4 ; =0x00000A26\n    mov r2, #5\n    str r2, [sp]\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r3, #0x31\n    str r2, [sp, #4]\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02221AD8 ; =0x00000A58\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0xa\n    mov r3, #0x31\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02221ADC ; =0x00000A8A\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0xf\n    mov r3, #0x31\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02221AE0 ; =0x00000ABC\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x36\n    bl ov08_02221BD0\n    ldr r0, _02221AE4 ; =0x00000AEE\n    mov r2, #5\n    str r2, [sp]\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r3, #0x36\n    str r2, [sp, #4]\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0xb2\n    lsl r0, r0, #4\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r2, #0xa\n    mov r3, #0x36\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02221AE8 ; =0x00000B52\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0xf\n    mov r3, #0x36\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02221AEC ; =0x00000B84\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x1a\n    mov r3, #0x18\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02221AF0 ; =0x00000BB6\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x1a\n    mov r3, #0x1d\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02221AF4 ; =0x00000BE8\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x1a\n    mov r3, #0x22\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02221AF8 ; =0x00000C1A\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x1a\n    mov r3, #0x27\n    bl ov08_02221BD0\n    mov r0, #0x1a\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    mov r0, #0x6d\n    lsl r0, r0, #6\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r2, #0\n    mov r3, #0x18\n    bl ov08_02221BD0\n    mov r0, #0x1a\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    ldr r0, _02221AFC ; =0x00001C44\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x1d\n    bl ov08_02221BD0\n    mov r0, #0x1a\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    ldr r0, _02221B00 ; =0x00001D48\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x22\n    bl ov08_02221BD0\n    mov r0, #9\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _02221B04 ; =0x00001E4C\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x14\n    mov r3, #0x31\n    bl ov08_02221BD0\n    mov r0, #9\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _02221B08 ; =0x00001E94\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x14\n    mov r3, #0x35\n    bl ov08_02221BD0\n    mov r0, #9\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _02221B0C ; =0x00001EDC\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x14\n    mov r3, #0x39\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _02221B10 ; =0x00001F24\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x3b\n    bl ov08_02221BD0\n    mov r2, #5\n    str r2, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _02221B14 ; =0x00001F38\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r3, #0x3b\n    bl ov08_02221BD0\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _02221B18 ; =0x00001F4C\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0xa\n    mov r3, #0x3b\n    bl ov08_02221BD0\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02221AB0: .word 0x0000042C\n    _02221AB4: .word 0x000004EC\n    _02221AB8: .word 0x000005AC\n    _02221ABC: .word 0x0000066C\n    _02221AC0: .word 0x0000072C\n    _02221AC4: .word 0x000007EC\n    _02221AC8: .word 0x0000086E\n    _02221ACC: .word 0x00000972\n    _02221AD0: .word 0x000009F4\n    _02221AD4: .word 0x00000A26\n    _02221AD8: .word 0x00000A58\n    _02221ADC: .word 0x00000A8A\n    _02221AE0: .word 0x00000ABC\n    _02221AE4: .word 0x00000AEE\n    _02221AE8: .word 0x00000B52\n    _02221AEC: .word 0x00000B84\n    _02221AF0: .word 0x00000BB6\n    _02221AF4: .word 0x00000BE8\n    _02221AF8: .word 0x00000C1A\n    _02221AFC: .word 0x00001C44\n    _02221B00: .word 0x00001D48\n    _02221B04: .word 0x00001E4C\n    _02221B08: .word 0x00001E94\n    _02221B0C: .word 0x00001EDC\n    _02221B10: .word 0x00001F24\n    _02221B14: .word 0x00001F38\n    _02221B18: .word 0x00001F4C"
    );
    #endif
}

void ov08_02221B1C(void) {
    /* Original at 0x02221B1C */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x1e\n    str r0, [sp]\n    mov r0, #0x11\n    str r0, [sp, #4]\n    ldr r0, _02221BC4 ; =0x00000C4C\n    mov r2, #0\n    add r0, r5, r0\n    add r3, r2, #0\n    add r4, r1, #0\n    bl ov08_02221BD0\n    mov r0, #0x1e\n    str r0, [sp]\n    ldr r0, _02221BC8 ; =0x00001048\n    mov r3, #0x11\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r2, #0\n    str r3, [sp, #4]\n    bl ov08_02221BD0\n    mov r0, #0x1e\n    str r0, [sp]\n    mov r0, #0x11\n    str r0, [sp, #4]\n    ldr r0, _02221BCC ; =0x00001444\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x22\n    bl ov08_02221BD0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #0x61\n    lsl r0, r0, #6\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r2, #0\n    mov r3, #0x33\n    bl ov08_02221BD0\n    mov r2, #0x10\n    str r2, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #0x19\n    lsl r0, r0, #8\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r3, #0x33\n    bl ov08_02221BD0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #0x67\n    lsl r0, r0, #6\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r2, #0\n    mov r3, #0x39\n    bl ov08_02221BD0\n    mov r2, #0x10\n    str r2, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #0x6a\n    lsl r0, r0, #6\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r3, #0x39\n    bl ov08_02221BD0\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02221BC4: .word 0x00000C4C\n    _02221BC8: .word 0x00001048\n    _02221BCC: .word 0x00001444"
    );
    #endif
}

void ov08_02221BD0(void) {
    /* Original at 0x02221BD0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    add r0, sp, #8\n    mov lr, r3\n    ldrb r3, [r0, #0x14]\n    mov r6, #0\n    mov ip, r3\n    cmp r3, #0\n    ble _02221C1C\n    ldrb r3, [r0, #0x10]\n    lsl r2, r2, #1\n    add r7, r1, r2\n    mov r2, #0\n    cmp r3, #0\n    ble _02221C10\n    mov r0, lr\n    add r0, r0, r6\n    lsl r0, r0, #6\n    add r5, r7, r0\n    add r0, r6, #0\n    mul r0, r3\n    lsl r1, r0, #1\n    ldr r0, [sp]\n    add r4, r0, r1\n    lsl r1, r2, #1\n    ldrh r0, [r5, r1]\n    strh r0, [r4, r1]\n    add r0, r2, #1\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    cmp r2, r3\n    blt _02221C00\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    mov r0, ip\n    cmp r6, r0\n    blt _02221BE8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_02221C20(void) {
    /* Original at 0x02221C20 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0x21\n    bhi _02221D06\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02221C30: ; jump table\n    cmp r3, #0\n    bne _02221C86\n    mov r1, #0x7b\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0xc0\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02221D0C ; =0x000004EC\n    add r1, r0, r1\n    mov r0, #0xc0\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02221D10 ; =0x00000B84\n    add r1, r0, r1\n    mov r0, #0x32\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02221D14 ; =0x00000C4C\n    add r1, r0, r1\n    mov r0, #0xff\n    lsl r0, r0, #2\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02221D18 ; =0x000007EC\n    add r1, r0, r1\n    mov r0, #0x82\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02221D1C ; =0x000009F4\n    add r1, r0, r1\n    mov r0, #0x32\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02221D20 ; =0x00000ABC\n    add r1, r0, r1\n    mov r0, #0x32\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    mov r1, #0x61\n    lsl r1, r1, #6\n    add r1, r0, r1\n    mov r0, #0xc0\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    mov r1, #0x6d\n    lsl r1, r1, #6\n    add r1, r0, r1\n    lsl r0, r2, #6\n    add r0, r2, r0\n    lsl r0, r0, #2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02221D24 ; =0x00001E4C\n    add r1, r0, r1\n    mov r0, #0x48\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02221D28 ; =0x00001F24\n    add r1, r0, r1\n    mov r0, #0x14\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02221D0C: .word 0x000004EC\n    _02221D10: .word 0x00000B84\n    _02221D14: .word 0x00000C4C\n    _02221D18: .word 0x000007EC\n    _02221D1C: .word 0x000009F4\n    _02221D20: .word 0x00000ABC\n    _02221D24: .word 0x00001E4C\n    _02221D28: .word 0x00001F24"
    );
    #endif
}

void ov08_02221D2C(void) {
    /* Original at 0x02221D2C */
    /* Requires manual decompilation - 149 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r2, #0\n    add r2, r3, #0\n    add r3, sp, #0x10\n    add r4, r1, #0\n    ldrb r3, [r3, #0x10]\n    add r1, r7, #0\n    str r0, [sp]\n    bl ov08_02221C20\n    add r1, r0, #0\n    ldr r2, _02221E60 ; =ov08_02225A56\n    lsl r0, r7, #2\n    ldrb r6, [r2, r0]\n    ldr r2, _02221E64 ; =ov08_02225A57\n    ldrb r0, [r2, r0]\n    add r5, r6, #0\n    mul r5, r0\n    add r0, r4, #0\n    lsl r2, r5, #1\n    bl memcpy\n    cmp r7, #5\n    bgt _02221D7A\n    cmp r7, #0\n    blt _02221E5C\n    add r0, r7, r7\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02221D6E: ; jump table\n    cmp r7, #0x1b\n    beq _02221E3C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x50\n    add r1, r7, #0\n    mul r1, r0\n    ldr r0, [sp]\n    add r0, r0, r1\n    ldrh r1, [r0, #8]\n    cmp r1, #0\n    beq _02221E5C\n    ldrb r1, [r0, #0x1b]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x1f\n    beq _02221DE2\n    lsl r2, r6, #1\n    add r0, r2, #5\n    lsl r0, r0, #1\n    ldrh r1, [r4, r0]\n    add r0, sp, #4\n    strh r1, [r0]\n    add r1, r6, r2\n    add r1, r1, #5\n    lsl r1, r1, #1\n    ldrh r1, [r4, r1]\n    strh r1, [r0, #2]\n    mov r1, #0\n    add r0, sp, #4\n    add r5, r1, #2\n    lsl r3, r1, #1\n    add r7, r5, #0\n    mul r7, r6\n    lsl r5, r7, #1\n    ldrh r3, [r0, r3]\n    mov r2, #0\n    add r5, r4, r5\n    lsl r7, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #0x18\n    add r7, r5, r7\n    lsr r2, r2, #0x18\n    strh r3, [r7, #0xc]\n    cmp r2, #9\n    blo _02221DC4\n    add r1, r1, #1\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, #2\n    blo _02221DB4\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r0, #0x14]\n    cmp r0, #0\n    bne _02221E0C\n    mov r1, #0\n    cmp r5, #0\n    ble _02221E5C\n    mov r3, #2\n    ldr r2, _02221E68 ; =0x00000FFF\n    lsl r3, r3, #0xc\n    lsl r0, r1, #1\n    ldrh r6, [r4, r0]\n    and r6, r2\n    orr r6, r3\n    strh r6, [r4, r0]\n    add r0, r1, #1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    cmp r1, r5\n    blt _02221DF4\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    lsl r1, r7, #0x18\n    ldr r0, [sp]\n    lsr r1, r1, #0x18\n    bl ov08_0221DB24\n    cmp r0, #1\n    bne _02221E5C\n    mov r1, #0\n    cmp r5, #0\n    ble _02221E5C\n    ldr r2, _02221E68 ; =0x00000FFF\n    add r3, r2, #1\n    lsl r0, r1, #1\n    ldrh r6, [r4, r0]\n    and r6, r2\n    orr r6, r3\n    strh r6, [r4, r0]\n    add r0, r1, #1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    cmp r1, r5\n    blt _02221E24\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    cmp r5, #0\n    ble _02221E5C\n    mov r3, #0xa\n    ldr r2, _02221E68 ; =0x00000FFF\n    lsl r3, r3, #0xc\n    lsl r0, r1, #1\n    ldrh r6, [r4, r0]\n    and r6, r2\n    orr r6, r3\n    strh r6, [r4, r0]\n    add r0, r1, #1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    cmp r1, r5\n    blt _02221E48\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02221E60: .word ov08_02225A56\n    _02221E64: .word ov08_02225A57\n    _02221E68: .word 0x00000FFF"
    );
    #endif
}

void ov08_02221E6C(void) {
    /* Original at 0x02221E6C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r1, [sp, #0xc]\n    str r2, [sp, #0x10]\n    str r3, [sp, #0x14]\n    add r5, r0, #0\n    ldr r0, [sp, #0xc]\n    lsl r4, r0, #2\n    ldr r0, _02221ED8 ; =ov08_02225A57\n    ldrb r7, [r0, r4]\n    ldr r0, _02221EDC ; =ov08_02225A56\n    ldrb r6, [r0, r4]\n    ldr r0, [r5]\n    add r1, r6, #0\n    mul r1, r7\n    ldr r0, [r0, #0xc]\n    lsl r1, r1, #1\n    bl Heap_Alloc\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    bl ov08_02221D2C\n    ldr r0, _02221EE0 ; =ov08_02225A55\n    ldr r3, _02221EE4 ; =ov08_02225A54\n    ldrb r0, [r0, r4]\n    ldrb r3, [r3, r4]\n    ldr r2, [sp, #0x18]\n    str r0, [sp]\n    str r6, [sp, #4]\n    mov r0, #0x79\n    str r7, [sp, #8]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    bl LoadRectToBgTilemapRect\n    mov r0, #0x79\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [sp, #0x18]\n    bl Heap_Free\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02221ED8: .word ov08_02225A57\n    _02221EDC: .word ov08_02225A56\n    _02221EE0: .word ov08_02225A55\n    _02221EE4: .word ov08_02225A54"
    );
    #endif
}

void ov08_02221EE8(void) {
    /* Original at 0x02221EE8 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _02221F88 ; =ov08_022259CC\n    lsl r3, r1, #2\n    ldr r6, [r0, r3]\n    cmp r6, #0\n    beq _02221F86\n    cmp r1, #5\n    bhi _02221F02\n    ldr r0, _02221F8C ; =ov08_022259BC\n    ldrb r0, [r0, r2]\n    str r0, [sp]\n    b _02221F08\n    ldr r0, _02221F90 ; =ov08_022259AC\n    ldrb r0, [r0, r2]\n    str r0, [sp]\n    cmp r2, #0\n    beq _02221F16\n    cmp r2, #1\n    beq _02221F1A\n    cmp r2, #2\n    beq _02221F1E\n    b _02221F20\n    mov r7, #1\n    b _02221F20\n    mov r7, #0\n    b _02221F20\n    mov r7, #1\n    cmp r1, #0xe\n    blo _02221F54\n    cmp r1, #0x11\n    bhi _02221F54\n    ldr r1, _02221F94 ; =0x00002070\n    ldr r2, [sp]\n    ldr r0, [r5, r1]\n    add r1, r1, #5\n    ldrb r1, [r5, r1]\n    mov r3, #0\n    ldrb r1, [r6, r1]\n    lsl r1, r1, #4\n    add r0, r0, r1\n    add r1, r7, #0\n    bl ScrollWindow\n    ldr r1, _02221F94 ; =0x00002070\n    ldr r0, [r5, r1]\n    add r1, r1, #5\n    ldrb r1, [r5, r1]\n    ldrb r1, [r6, r1]\n    lsl r1, r1, #4\n    add r0, r0, r1\n    bl ScheduleWindowCopyToVram\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    ldrb r2, [r6, r4]\n    cmp r2, #0xff\n    beq _02221F86\n    ldr r0, _02221F94 ; =0x00002070\n    mov r3, #0\n    ldr r1, [r5, r0]\n    lsl r0, r2, #4\n    add r0, r1, r0\n    ldr r2, [sp]\n    add r1, r7, #0\n    bl ScrollWindow\n    ldr r0, _02221F94 ; =0x00002070\n    ldr r1, [r5, r0]\n    ldrb r0, [r6, r4]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #8\n    blo _02221F56\n    pop {r3, r4, r5, r6, r7, pc}\n    _02221F88: .word ov08_022259CC\n    _02221F8C: .word ov08_022259BC\n    _02221F90: .word ov08_022259AC\n    _02221F94: .word 0x00002070"
    );
    #endif
}

void ov08_02221F98(void) {
    /* Original at 0x02221F98 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    cmp r5, #0x1b\n    bhi _0222209C\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02221FAE: ; jump table\n    ldr r0, _022220A0 ; =ov08_022259C6\n    lsl r1, r2, #1\n    ldrsh r6, [r0, r1]\n    add r0, r5, #0\n    add r0, #0xd\n    lsl r0, r0, #2\n    add r1, r4, r0\n    ldr r0, _022220A4 ; =0x00001FB8\n    add r2, r6, #0\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_OffsetPositionXY\n    lsl r0, r5, #2\n    add r1, r4, r0\n    ldr r0, _022220A4 ; =0x00001FB8\n    add r2, r6, #0\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_OffsetPositionXY\n    add r0, r5, #7\n    lsl r0, r0, #2\n    add r1, r4, r0\n    ldr r0, _022220A4 ; =0x00001FB8\n    add r2, r6, #0\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_OffsetPositionXY\n    pop {r4, r5, r6, pc}\n    ldr r0, _022220A8 ; =ov08_022259C0\n    lsl r1, r2, #1\n    ldrsh r5, [r0, r1]\n    ldr r0, [r4]\n    ldrb r0, [r0, #0x11]\n    add r2, r5, #0\n    lsl r0, r0, #2\n    add r1, r4, r0\n    ldr r0, _022220A4 ; =0x00001FB8\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_OffsetPositionXY\n    ldr r0, [r4]\n    add r2, r5, #0\n    ldrb r0, [r0, #0x11]\n    add r0, r0, #7\n    lsl r0, r0, #2\n    add r1, r4, r0\n    ldr r0, _022220A4 ; =0x00001FB8\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_OffsetPositionXY\n    pop {r4, r5, r6, pc}\n    add r0, r5, #7\n    lsl r0, r0, #2\n    lsl r3, r2, #1\n    ldr r2, _022220A8 ; =ov08_022259C0\n    add r1, r4, r0\n    ldr r0, _022220A4 ; =0x00001FB8\n    ldrsh r2, [r2, r3]\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_OffsetPositionXY\n    pop {r4, r5, r6, pc}\n    add r0, r5, #2\n    lsl r0, r0, #2\n    lsl r3, r2, #1\n    ldr r2, _022220A8 ; =ov08_022259C0\n    add r1, r4, r0\n    ldr r0, _022220A4 ; =0x00001FB8\n    ldrsh r2, [r2, r3]\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_OffsetPositionXY\n    pop {r4, r5, r6, pc}\n    sub r0, r5, #2\n    lsl r0, r0, #2\n    lsl r3, r2, #1\n    ldr r2, _022220A8 ; =ov08_022259C0\n    add r1, r4, r0\n    ldr r0, _022220A4 ; =0x00001FB8\n    ldrsh r2, [r2, r3]\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_OffsetPositionXY\n    pop {r4, r5, r6, pc}\n    nop\n    _022220A0: .word ov08_022259C6\n    _022220A4: .word 0x00001FB8\n    _022220A8: .word ov08_022259C0"
    );
    #endif
}

void ov08_022220AC(void) {
    /* Original at 0x022220AC */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r3, _022220F4 ; =0x00001FA3\n    add r5, r0, #0\n    ldrb r6, [r5, r3]\n    mov r2, #0x70\n    add r4, r1, #0\n    bic r6, r2\n    strb r6, [r5, r3]\n    cmp r4, #5\n    bhi _022220D6\n    bl ov08_0221D5DC\n    cmp r0, #2\n    bne _022220D6\n    ldr r1, _022220F4 ; =0x00001FA3\n    mov r0, #0x70\n    ldrb r2, [r5, r1]\n    bic r2, r0\n    mov r0, #0x10\n    orr r0, r2\n    strb r0, [r5, r1]\n    ldr r0, _022220F8 ; =0x00001FA0\n    mov r2, #0\n    strb r2, [r5, r0]\n    add r1, r0, #1\n    strb r2, [r5, r1]\n    add r1, r0, #2\n    strb r4, [r5, r1]\n    add r1, r0, #3\n    ldrb r2, [r5, r1]\n    mov r1, #0x80\n    add r0, r0, #3\n    orr r1, r2\n    strb r1, [r5, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _022220F4: .word 0x00001FA3\n    _022220F8: .word 0x00001FA0"
    );
    #endif
}

void ov08_022220FC(void) {
    /* Original at 0x022220FC */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _022221C0 ; =0x00001FA3\n    add r4, r0, #0\n    ldrb r3, [r4, r2]\n    lsl r1, r3, #0x18\n    lsr r1, r1, #0x1f\n    beq _022221BC\n    sub r1, r2, #3\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    beq _0222211C\n    cmp r1, #1\n    beq _02222150\n    cmp r1, #2\n    beq _02222184\n    pop {r4, pc}\n    sub r1, r2, #1\n    ldrb r1, [r4, r1]\n    lsl r3, r3, #0x19\n    mov r2, #1\n    lsr r3, r3, #0x1d\n    bl ov08_02221E6C\n    ldr r1, _022221C4 ; =0x00001FA2\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    mov r2, #1\n    bl ov08_02221EE8\n    ldr r1, _022221C4 ; =0x00001FA2\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    mov r2, #1\n    bl ov08_02221F98\n    ldr r0, _022221C8 ; =0x00001FA1\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r1, #1\n    sub r0, r0, #1\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    sub r1, r2, #1\n    ldrb r1, [r4, r1]\n    lsl r3, r3, #0x19\n    mov r2, #2\n    lsr r3, r3, #0x1d\n    bl ov08_02221E6C\n    ldr r1, _022221C4 ; =0x00001FA2\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    mov r2, #2\n    bl ov08_02221EE8\n    ldr r1, _022221C4 ; =0x00001FA2\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    mov r2, #2\n    bl ov08_02221F98\n    ldr r0, _022221C8 ; =0x00001FA1\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r1, #2\n    sub r0, r0, #1\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    sub r1, r2, #1\n    ldrb r1, [r4, r1]\n    lsl r3, r3, #0x19\n    mov r2, #0\n    lsr r3, r3, #0x1d\n    bl ov08_02221E6C\n    ldr r1, _022221C4 ; =0x00001FA2\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    mov r2, #0\n    bl ov08_02221EE8\n    ldr r1, _022221C4 ; =0x00001FA2\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    mov r2, #0\n    bl ov08_02221F98\n    ldr r0, _022221C8 ; =0x00001FA1\n    mov r1, #0\n    strb r1, [r4, r0]\n    add r1, r0, #2\n    ldrb r2, [r4, r1]\n    mov r1, #0x80\n    add r0, r0, #2\n    bic r2, r1\n    strb r2, [r4, r0]\n    pop {r4, pc}\n    nop\n    _022221C0: .word 0x00001FA3\n    _022221C4: .word 0x00001FA2\n    _022221C8: .word 0x00001FA1"
    );
    #endif
}

void ov08_022221CC(void) {
    /* Original at 0x022221CC */
    /* Requires manual decompilation - 371 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    cmp r1, #9\n    bls _022221D6\n    b _0222251E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022221E2: ; jump table\n    mov r5, #0\n    mov r6, #3\n    mov r7, #1\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov08_0221D5DC\n    cmp r0, #0\n    bne _02222218\n    lsl r1, r5, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov08_02221E6C\n    b _0222223E\n    cmp r0, #1\n    bne _0222222C\n    lsl r1, r5, #0x18\n    mov r2, #0\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl ov08_02221E6C\n    b _0222223E\n    cmp r0, #2\n    bne _0222223E\n    lsl r1, r5, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    mov r2, #0\n    mov r3, #1\n    bl ov08_02221E6C\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #6\n    blo _022221FC\n    ldr r0, [r4]\n    add r0, #0x35\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02222260\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #3\n    mov r3, #0\n    bl ov08_02221E6C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #6\n    add r3, r2, #0\n    bl ov08_02221E6C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0\n    mov r1, #6\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #7\n    add r3, r2, #0\n    bl ov08_02221E6C\n    ldr r0, [r4]\n    ldrb r1, [r0, #0x11]\n    mov r0, #0x50\n    mul r0, r1\n    add r0, r4, r0\n    ldrb r0, [r0, #0x1b]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1f\n    beq _022222B0\n    add r0, r4, #0\n    mov r1, #8\n    mov r2, #3\n    mov r3, #0\n    bl ov08_02221E6C\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #3\n    mov r3, #0\n    bl ov08_02221E6C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #8\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0xa\n    add r3, r2, #0\n    bl ov08_02221E6C\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov08_02222564\n    cmp r0, #1\n    bne _022222EC\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0xc\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0xd\n    add r3, r2, #0\n    bl ov08_02221E6C\n    b _02222304\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #3\n    mov r3, #0\n    bl ov08_02221E6C\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #3\n    mov r3, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0xb\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #6\n    add r3, r2, #0\n    bl ov08_02221E6C\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov08_02222564\n    cmp r0, #1\n    bne _02222340\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0xc\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0xd\n    add r3, r2, #0\n    bl ov08_02221E6C\n    b _02222358\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #3\n    mov r3, #0\n    bl ov08_02221E6C\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #3\n    mov r3, #0\n    bl ov08_02221E6C\n    mov r5, #0\n    mov r7, #3\n    mov r6, #0x50\n    ldr r0, [r4]\n    lsl r1, r5, #3\n    ldrb r0, [r0, #0x11]\n    add r2, r0, #0\n    mul r2, r6\n    add r0, r4, r2\n    add r0, r1, r0\n    ldrh r0, [r0, #0x34]\n    cmp r0, #0\n    beq _02222386\n    add r1, r5, #0\n    add r1, #0xe\n    lsl r1, r1, #0x18\n    mov r2, #0\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl ov08_02221E6C\n    b _02222398\n    add r1, r5, #0\n    add r1, #0xe\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    add r2, r7, #0\n    mov r3, #0\n    bl ov08_02221E6C\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #4\n    blo _0222235E\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #9\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #6\n    add r3, r2, #0\n    bl ov08_02221E6C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0\n    mov r1, #6\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r5, #0\n    mov r6, #2\n    add r7, r5, #0\n    ldr r0, [r4]\n    add r0, #0x34\n    ldrb r0, [r0]\n    cmp r0, r5\n    bne _022223EA\n    add r1, r5, #0\n    add r1, #0x1e\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    add r2, r6, #0\n    add r3, r7, #0\n    bl ov08_02221E6C\n    b _022223FC\n    add r1, r5, #0\n    add r1, #0x1e\n    lsl r1, r1, #0x18\n    mov r2, #0\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl ov08_02221E6C\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #4\n    blo _022223CC\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r5, #0\n    mov r7, #3\n    mov r6, #0x50\n    ldr r0, [r4]\n    lsl r1, r5, #3\n    ldrb r0, [r0, #0x11]\n    add r2, r0, #0\n    mul r2, r6\n    add r0, r4, r2\n    add r0, r1, r0\n    ldrh r0, [r0, #0x34]\n    cmp r0, #0\n    beq _02222436\n    add r1, r5, #0\n    add r1, #0x13\n    lsl r1, r1, #0x18\n    mov r2, #0\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl ov08_02221E6C\n    b _02222448\n    add r1, r5, #0\n    add r1, #0x13\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    add r2, r7, #0\n    mov r3, #0\n    bl ov08_02221E6C\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #4\n    blo _0222240E\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #6\n    add r3, r2, #0\n    bl ov08_02221E6C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0\n    mov r1, #0x17\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0x18\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0x19\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0x1a\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0x1b\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #6\n    add r3, r2, #0\n    bl ov08_02221E6C\n    ldr r0, _02222520 ; =0x00002077\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    bne _0222251E\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0x12\n    add r3, r2, #0\n    bl ov08_02221E6C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0\n    mov r1, #0x1c\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #6\n    add r3, r2, #0\n    bl ov08_02221E6C\n    ldr r0, _02222520 ; =0x00002077\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    bne _0222251E\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0x12\n    add r3, r2, #0\n    bl ov08_02221E6C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0\n    mov r1, #0x1d\n    add r3, r2, #0\n    bl ov08_02221E6C\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #6\n    add r3, r2, #0\n    bl ov08_02221E6C\n    ldr r0, _02222520 ; =0x00002077\n    ldrb r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x1c\n    cmp r0, #1\n    bne _0222251E\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0x12\n    add r3, r2, #0\n    bl ov08_02221E6C\n    pop {r3, r4, r5, r6, r7, pc}\n    _02222520: .word 0x00002077"
    );
    #endif
}

void ov08_02222524(void) {
    /* Original at 0x02222524 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r2, r0, #0\n    cmp r1, #3\n    bne _02222546\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    mov r1, #0x7e\n    lsl r1, r1, #6\n    ldr r0, [r2, r0]\n    add r1, r2, r1\n    mov r2, #1\n    mov r3, #0xc0\n    bl PaletteData_LoadPalette\n    pop {r3, pc}\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x7a\n    lsl r0, r0, #2\n    ldr r1, _02222560 ; =0x00001F60\n    ldr r0, [r2, r0]\n    add r1, r2, r1\n    mov r2, #1\n    mov r3, #0xc0\n    bl PaletteData_LoadPalette\n    pop {r3, pc}\n    nop\n    _02222560: .word 0x00001F60"
    );
    #endif
}

void ov08_02222564(void) {
    /* Original at 0x02222564 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r2, #0\n    add r1, r2, #0\n    mov r3, #0x50\n    add r4, r1, #0\n    mul r4, r3\n    add r5, r0, r4\n    ldrh r4, [r5, #8]\n    cmp r4, #0\n    beq _02222586\n    ldrb r4, [r5, #0x1b]\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x1f\n    bne _02222586\n    add r2, r2, #1\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    add r1, r1, #1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    cmp r1, #6\n    blo _0222256C\n    cmp r2, #2\n    blo _02222598\n    mov r0, #1\n    b _0222259A\n    mov r0, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov08_022225A4(void) {
    /* Original at 0x022225A4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4]\n    ldrb r1, [r1, #0x11]\n    bl ov08_0221D5DC\n    cmp r0, #2\n    bne _022225C4\n    ldr r1, [r4]\n    add r0, r4, #0\n    ldrb r1, [r1, #0x11]\n    mov r2, #0\n    mov r3, #1\n    bl ov08_02221E6C\n    pop {r4, pc}\n    ldr r1, [r4]\n    mov r2, #0\n    ldrb r1, [r1, #0x11]\n    add r0, r4, #0\n    add r3, r2, #0\n    bl ov08_02221E6C\n    pop {r4, pc}"
    );
    #endif
}

void ov08_022225D4(void) {
    /* Original at 0x022225D4 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _02222664 ; =ov08_02222670\n    ldr r1, _02222668 ; =0x0000115C\n    ldr r3, [r5, #0xc]\n    mov r2, #0x64\n    bl CreateSysTaskAndEnvironment\n    bl SysTask_GetData\n    ldr r2, _02222668 ; =0x0000115C\n    add r4, r0, #0\n    mov r1, #0\n    bl memset\n    str r5, [r4]\n    ldr r0, [r5]\n    bl BattleSystem_GetBgConfig\n    str r0, [r4, #4]\n    ldr r0, [r5]\n    bl BattleSystem_GetPaletteData\n    str r0, [r4, #8]\n    ldr r0, _0222266C ; =0x0000114A\n    mov r1, #0\n    strb r1, [r4, r0]\n    ldr r0, [r5]\n    bl BattleSystem_GetBagCursor\n    add r6, r0, #0\n    mov r5, #0\n    ldr r3, [r4]\n    add r0, r6, #0\n    add r2, r3, #0\n    add r2, #0x27\n    add r3, #0x2c\n    add r1, r5, #0\n    add r2, r2, r5\n    add r3, r3, r5\n    bl BagCursor_Battle_PocketGetPosition\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #5\n    blo _02222614\n    add r0, r6, #0\n    bl BagCursor_Battle_GetLastUsedItem\n    ldr r1, [r4]\n    strh r0, [r1, #0x20]\n    add r0, r6, #0\n    bl BagCursor_Battle_GetLastUsedPocket\n    ldr r1, [r4]\n    strb r0, [r1, #0x1f]\n    add r0, r4, #0\n    bl ov08_02223B78\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl BattleSystem_GetBattleType\n    mov r1, #1\n    lsl r1, r1, #0xa\n    tst r0, r1\n    beq _02222662\n    ldr r0, [r4]\n    mov r1, #1\n    str r1, [r0, #0x14]\n    pop {r4, r5, r6, pc}\n    _02222664: .word ov08_02222670\n    _02222668: .word 0x0000115C\n    _0222266C: .word 0x0000114A"
    );
    #endif
}

void ov08_02222670(void) {
    /* Original at 0x02222670 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02222768 ; =0x0000114A\n    add r4, r1, #0\n    ldrb r2, [r4, r2]\n    cmp r2, #0xe\n    bhi _02222756\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _02222688: ; jump table\n    add r0, r4, #0\n    bl ov08_0222276C\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222840\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222918\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222AF0\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222D78\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222D84\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222D90\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222A78\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222D9C\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222DAC\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222DC4\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222DEC\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222EC4\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    add r0, r4, #0\n    bl ov08_02222E04\n    ldr r1, _02222768 ; =0x0000114A\n    strb r0, [r4, r1]\n    b _02222756\n    bl ov08_02222E2C\n    cmp r0, #1\n    beq _02222766\n    add r0, r4, #0\n    bl ov08_02224974\n    mov r0, #0xc3\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SpriteSystem_DrawSprites\n    pop {r4, pc}\n    _02222768: .word 0x0000114A"
    );
    #endif
}

void ov08_0222276C(void) {
    /* Original at 0x0222276C */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, _02222830 ; =0x04001050\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, [r4]\n    ldr r0, [r0, #0xc]\n    bl ov08_02224B64\n    str r0, [r4, #0x34]\n    add r0, r4, #0\n    bl ov08_02223000\n    add r0, r4, #0\n    bl ov08_022230F4\n    add r0, r4, #0\n    bl ov08_022231E8\n    ldr r1, [r4]\n    mov r0, #4\n    ldr r1, [r1, #0xc]\n    bl FontID_Alloc\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl BattleSystem_GetBagCursor\n    bl BagCursor_Battle_GetPocket\n    ldr r1, _02222834 ; =0x0000114D\n    strb r0, [r4, r1]\n    add r0, r4, #0\n    bl ov08_02223BF4\n    ldr r1, _02222838 ; =0x0000114C\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov08_02224A50\n    add r0, r4, #0\n    bl ov08_022233B8\n    ldr r1, _02222838 ; =0x0000114C\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov08_02223480\n    add r0, r4, #0\n    bl ov08_02223D08\n    ldr r1, _02222838 ; =0x0000114C\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov08_02223F94\n    ldr r0, [r4]\n    add r0, #0x25\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _022227F0\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov08_02224B90\n    ldr r1, _02222838 ; =0x0000114C\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov08_02224134\n    ldr r1, _02222838 ; =0x0000114C\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov08_0222421C\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r1, #0xa\n    str r0, [sp, #8]\n    add r3, r1, #0\n    ldr r0, [r4, #8]\n    ldr r2, _0222283C ; =0x0000FFFF\n    sub r3, #0x12\n    bl PaletteData_BeginPaletteFade\n    ldr r0, [r4]\n    ldr r0, [r0, #0x14]\n    cmp r0, #1\n    bne _0222282A\n    add sp, #0xc\n    mov r0, #0xc\n    pop {r3, r4, pc}\n    mov r0, #1\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _02222830: .word 0x04001050\n    _02222834: .word 0x0000114D\n    _02222838: .word 0x0000114C\n    _0222283C: .word 0x0000FFFF"
    );
    #endif
}

void ov08_02222840(void) {
    /* Original at 0x02222840 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    bl PaletteData_GetSelectedBuffersBitmask\n    cmp r0, #0\n    beq _02222852\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r1, _0222290C ; =ov08_02225B4C\n    add r0, r4, #0\n    bl ov08_02223368\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _02222878\n    ldr r0, [r4, #0x34]\n    bl ov08_02224C94\n    add r5, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    bne _0222287E\n    mov r5, #5\n    b _0222287E\n    add r0, r4, #0\n    bl ov08_0222417C\n    cmp r5, #5\n    bhi _02222908\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222288E: ; jump table\n    ldr r0, _02222910 ; =0x000005DD\n    bl PlaySE\n    lsl r0, r5, #0x18\n    lsr r1, r0, #0x18\n    ldr r0, _02222914 ; =0x0000114D\n    mov r2, #5\n    strb r1, [r4, r0]\n    sub r0, r0, #2\n    strb r2, [r4, r0]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov08_02224938\n    mov r0, #0xb\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4]\n    ldrh r0, [r0, #0x20]\n    cmp r0, #0\n    beq _02222908\n    ldr r0, _02222910 ; =0x000005DD\n    bl PlaySE\n    ldr r0, [r4]\n    ldrb r1, [r0, #0x1f]\n    ldr r0, _02222914 ; =0x0000114D\n    strb r1, [r4, r0]\n    mov r1, #6\n    sub r0, r0, #2\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    bl ov08_02223BA8\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0\n    bl ov08_02224938\n    mov r0, #0xb\n    pop {r3, r4, r5, pc}\n    ldr r0, _02222910 ; =0x000005DD\n    bl PlaySE\n    ldr r0, [r4]\n    mov r2, #0\n    strh r2, [r0, #0x1c]\n    ldr r0, [r4]\n    mov r1, #4\n    strb r1, [r0, #0x1e]\n    add r0, r4, #0\n    mov r1, #5\n    bl ov08_02224938\n    mov r0, #0xd\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _0222290C: .word ov08_02225B4C\n    _02222910: .word 0x000005DD\n    _02222914: .word 0x0000114D"
    );
    #endif
}

void ov08_02222918(void) {
    /* Original at 0x02222918 */
    /* Requires manual decompilation - 148 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _02222A64 ; =ov08_02225B68\n    add r4, r0, #0\n    bl ov08_02223368\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    bne _0222298C\n    ldr r0, [r4, #0x34]\n    bl ov08_02224B8C\n    add r6, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov08_02224B88\n    add r7, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov08_02224C94\n    add r5, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov08_02224B88\n    mov r1, #1\n    mvn r1, r1\n    cmp r5, r1\n    bne _02222956\n    mov r5, #6\n    b _02222992\n    cmp r6, #1\n    bne _02222992\n    cmp r7, r0\n    bne _02222992\n    ldr r1, _02222A68 ; =gSystem\n    mov r2, #0x20\n    ldr r1, [r1, #0x4c]\n    tst r2, r1\n    beq _02222976\n    cmp r0, #0\n    beq _02222974\n    cmp r0, #2\n    beq _02222974\n    cmp r0, #4\n    bne _02222976\n    mov r5, #7\n    mov r2, #0x10\n    tst r1, r2\n    beq _02222992\n    cmp r0, #1\n    beq _02222988\n    cmp r0, #3\n    beq _02222988\n    cmp r0, #5\n    bne _02222992\n    mov r5, #8\n    b _02222992\n    add r0, r4, #0\n    bl ov08_0222417C\n    cmp r5, #8\n    bhi _02222A60\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022229A2: ; jump table\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov08_02223CD4\n    cmp r0, #0\n    beq _02222A60\n    ldr r0, _02222A6C ; =0x000005DD\n    bl PlaySE\n    ldr r0, _02222A70 ; =0x0000114D\n    ldr r2, [r4]\n    ldrb r1, [r4, r0]\n    sub r0, r0, #2\n    add r1, r2, r1\n    add r1, #0x27\n    strb r5, [r1]\n    mov r1, #6\n    strb r1, [r4, r0]\n    add r1, r5, #6\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    mov r2, #0\n    bl ov08_02224938\n    mov r0, #0xb\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02222A6C ; =0x000005DD\n    bl PlaySE\n    ldr r0, _02222A74 ; =0x0000114B\n    mov r1, #4\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #0\n    bl ov08_02224938\n    mov r0, #0xb\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02222A70 ; =0x0000114D\n    ldrb r1, [r4, r0]\n    add r0, r0, #7\n    add r1, r4, r1\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _02222A60\n    ldr r0, _02222A6C ; =0x000005DD\n    bl PlaySE\n    ldr r0, _02222A74 ; =0x0000114B\n    mov r1, #7\n    strb r1, [r4, r0]\n    sub r1, #8\n    add r0, r0, #3\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0\n    bl ov08_02224938\n    mov r0, #0xb\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02222A70 ; =0x0000114D\n    ldrb r1, [r4, r0]\n    add r0, r0, #7\n    add r1, r4, r1\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _02222A60\n    ldr r0, _02222A6C ; =0x000005DD\n    bl PlaySE\n    ldr r0, _02222A74 ; =0x0000114B\n    mov r1, #7\n    strb r1, [r4, r0]\n    mov r1, #1\n    add r0, r0, #3\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #0\n    bl ov08_02224938\n    mov r0, #0xb\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    _02222A64: .word ov08_02225B68\n    _02222A68: .word gSystem\n    _02222A6C: .word 0x000005DD\n    _02222A70: .word 0x0000114D\n    _02222A74: .word 0x0000114B"
    );
    #endif
}

void ov08_02222A78(void) {
    /* Original at 0x02222A78 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _02222AE8 ; =0x0000114D\n    ldr r1, [r4]\n    ldrb r2, [r4, r0]\n    mov r3, #0\n    add r5, r1, r2\n    mov r1, #0x2c\n    ldrsb r2, [r5, r1]\n    add r5, #0x27\n    add r1, r0, #1\n    strb r3, [r5]\n    ldrsb r1, [r4, r1]\n    add r1, r2, r1\n    lsl r1, r1, #0x18\n    asr r2, r1, #0x18\n    ldrb r1, [r4, r0]\n    add r0, r0, #7\n    add r5, r4, r1\n    ldrb r5, [r5, r0]\n    cmp r2, r5\n    ble _02222AAE\n    ldr r0, [r4]\n    add r0, r0, r1\n    add r0, #0x2c\n    strb r3, [r0]\n    b _02222AC2\n    cmp r2, #0\n    ldr r0, [r4]\n    bge _02222ABC\n    add r0, r0, r1\n    add r0, #0x2c\n    strb r5, [r0]\n    b _02222AC2\n    add r0, r0, r1\n    add r0, #0x2c\n    strb r2, [r0]\n    add r0, r4, #0\n    bl ov08_0222377C\n    add r0, r4, #0\n    bl ov08_022237C4\n    ldr r1, _02222AEC ; =0x0000114C\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov08_02223F94\n    ldr r1, _02222AEC ; =0x0000114C\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov08_02224A50\n    mov r0, #2\n    pop {r3, r4, r5, pc}\n    nop\n    _02222AE8: .word 0x0000114D\n    _02222AEC: .word 0x0000114C"
    );
    #endif
}

void ov08_02222AF0(void) {
    /* Original at 0x02222AF0 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _02222B7C ; =ov08_02225ADC\n    add r5, r0, #0\n    bl ov08_02223368\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _02222B18\n    ldr r0, [r5, #0x34]\n    bl ov08_02224C94\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _02222B1E\n    mov r4, #1\n    b _02222B1E\n    add r0, r5, #0\n    bl ov08_0222417C\n    cmp r4, #0\n    beq _02222B28\n    cmp r4, #1\n    beq _02222B5E\n    b _02222B78\n    ldr r0, _02222B80 ; =0x000005DD\n    bl PlaySE\n    ldr r1, _02222B84 ; =0x0000114D\n    ldr r2, [r5]\n    ldrb r1, [r5, r1]\n    add r0, r5, #0\n    add r1, r2, r1\n    add r1, #0x27\n    ldrb r1, [r1]\n    bl ov08_02223CD4\n    ldr r1, [r5]\n    mov r2, #0\n    strh r0, [r1, #0x1c]\n    ldr r0, _02222B84 ; =0x0000114D\n    ldrb r1, [r5, r0]\n    ldr r0, [r5]\n    strb r1, [r0, #0x1e]\n    add r0, r5, #0\n    mov r1, #0xf\n    bl ov08_02224938\n    add r0, r5, #0\n    bl ov08_02222B8C\n    pop {r3, r4, r5, pc}\n    ldr r0, _02222B80 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _02222B88 ; =0x0000114B\n    mov r1, #5\n    strb r1, [r5, r0]\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    bl ov08_02224938\n    mov r0, #0xb\n    pop {r3, r4, r5, pc}\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _02222B7C: .word ov08_02225ADC\n    _02222B80: .word 0x000005DD\n    _02222B84: .word 0x0000114D\n    _02222B88: .word 0x0000114B"
    );
    #endif
}

void ov08_02222B8C(void) {
    /* Original at 0x02222B8C */
    /* Requires manual decompilation - 208 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _02222D6C ; =0x0000114D\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    ldr r4, [r5]\n    cmp r1, #3\n    beq _02222B9C\n    b _02222CB6\n    bl ov08_02223374\n    add r7, r0, #0\n    ldrh r0, [r4, #0x1c]\n    ldr r2, [r4, #0xc]\n    mov r1, #7\n    bl GetItemAttr\n    add r6, r0, #0\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    beq _02222C0E\n    ldrh r0, [r4, #0x1c]\n    cmp r0, #0x37\n    beq _02222C0E\n    cmp r6, #3\n    beq _02222C0E\n    ldr r0, [r4]\n    ldr r1, [r4, #0x10]\n    add r2, r7, #0\n    bl BattleSystem_GetPartyMon\n    add r6, r0, #0\n    ldr r0, [r5, #0x10]\n    mov r1, #0x2e\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r6, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [r5, #0x14]\n    mov r1, #0\n    bl BufferBoxMonNickname\n    ldr r0, [r5, #0x14]\n    ldr r2, _02222D70 ; =MOVE_EMBARGO\n    mov r1, #1\n    bl BufferMoveName\n    ldr r0, [r5, #0x14]\n    ldr r1, [r5, #0x18]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r5, #0\n    bl ov08_02223B20\n    ldr r0, _02222D74 ; =0x0000114B\n    mov r1, #8\n    strb r1, [r5, r0]\n    mov r0, #9\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r4, #0x1c]\n    add r2, r7, #0\n    mov r3, #0\n    str r0, [sp]\n    ldr r0, [r4]\n    ldr r1, [r4, #0x10]\n    bl BattleSystem_RecoverStatus\n    cmp r0, #1\n    bne _02222C34\n    ldr r2, _02222D6C ; =0x0000114D\n    ldrh r1, [r4, #0x1c]\n    ldrb r2, [r5, r2]\n    ldr r0, [r4]\n    ldr r3, [r4, #0xc]\n    bl ov08_02223390\n    mov r0, #0xd\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r6, #3\n    bne _02222C9C\n    ldr r0, [r4]\n    bl BattleSystem_GetBattleType\n    mov r1, #1\n    tst r0, r1\n    bne _02222C56\n    ldr r2, _02222D6C ; =0x0000114D\n    ldrh r1, [r4, #0x1c]\n    ldrb r2, [r5, r2]\n    ldr r0, [r4]\n    ldr r3, [r4, #0xc]\n    bl ov08_02223390\n    mov r0, #0xd\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r3, [r4, #0xc]\n    add r0, r1, #0\n    mov r1, #0x1b\n    mov r2, #0x28\n    bl NewMsgDataFromNarc\n    mov r1, #0x25\n    add r7, r0, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r0, [r5, #0x14]\n    ldr r2, [r4, #4]\n    mov r1, #0\n    bl BufferPlayersName\n    ldr r0, [r5, #0x14]\n    ldr r1, [r5, #0x18]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl DestroyMsgData\n    add r0, r5, #0\n    bl ov08_02223B20\n    ldr r0, _02222D74 ; =0x0000114B\n    mov r1, #8\n    strb r1, [r5, r0]\n    mov r0, #9\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x10]\n    ldr r2, [r5, #0x18]\n    mov r1, #0x22\n    bl ReadMsgDataIntoString\n    add r0, r5, #0\n    bl ov08_02223B20\n    ldr r0, _02222D74 ; =0x0000114B\n    mov r1, #8\n    strb r1, [r5, r0]\n    mov r0, #9\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r1, #2\n    bne _02222D66\n    add r0, r4, #0\n    add r0, #0x22\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02222CDE\n    ldr r0, [r5, #0x10]\n    ldr r2, [r5, #0x18]\n    mov r1, #0x2c\n    bl ReadMsgDataIntoString\n    add r0, r5, #0\n    bl ov08_02223B20\n    ldr r0, _02222D74 ; =0x0000114B\n    mov r1, #8\n    strb r1, [r5, r0]\n    mov r0, #9\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r0, #0x23\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02222D02\n    ldr r0, [r5, #0x10]\n    ldr r2, [r5, #0x18]\n    mov r1, #0x2f\n    bl ReadMsgDataIntoString\n    add r0, r5, #0\n    bl ov08_02223B20\n    ldr r0, _02222D74 ; =0x0000114B\n    mov r1, #8\n    strb r1, [r5, r0]\n    mov r0, #9\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02222D26\n    ldr r0, [r5, #0x10]\n    ldr r2, [r5, #0x18]\n    mov r1, #0x30\n    bl ReadMsgDataIntoString\n    add r0, r5, #0\n    bl ov08_02223B20\n    ldr r0, _02222D74 ; =0x0000114B\n    mov r1, #8\n    strb r1, [r5, r0]\n    mov r0, #9\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r4]\n    ldr r1, [r4, #0x10]\n    bl BattleSystem_GetParty\n    add r6, r0, #0\n    ldr r0, [r4]\n    bl BattleSystem_GetPcStorage\n    add r4, r0, #0\n    add r0, r6, #0\n    bl Party_GetCount\n    cmp r0, #6\n    bne _02222D66\n    add r0, r4, #0\n    bl PCStorage_FindFirstBoxWithEmptySlot\n    cmp r0, #0x12\n    bne _02222D66\n    ldr r0, [r5, #0x10]\n    ldr r2, [r5, #0x18]\n    mov r1, #0x2d\n    bl ReadMsgDataIntoString\n    add r0, r5, #0\n    bl ov08_02223B20\n    ldr r0, _02222D74 ; =0x0000114B\n    mov r1, #8\n    strb r1, [r5, r0]\n    mov r0, #9\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xd\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02222D6C: .word 0x0000114D\n    _02222D70: .word MOVE_EMBARGO\n    _02222D74: .word 0x0000114B"
    );
    #endif
}

void ov08_02222D78(void) {
    ov08_02223300();
}

void ov08_02222D84(void) {
    ov08_02223300();
}

void ov08_02222D90(void) {
    ov08_02223300();
}

void ov08_02222D9C(void) {
    ClearFrameAndWindow2();
}

void ov08_02222DAC(void) {
    TextPrinterCheckActive(0xa, 9);
}

void ov08_02222DC4(void) {
    /* Original at 0x02222DC4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02222DE4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #3\n    tst r0, r1\n    bne _02222DDA\n    bl System_GetTouchNew\n    cmp r0, #1\n    bne _02222DE0\n    ldr r0, _02222DE8 ; =0x0000114B\n    ldrb r0, [r4, r0]\n    pop {r4, pc}\n    mov r0, #0xa\n    pop {r4, pc}\n    _02222DE4: .word gSystem\n    _02222DE8: .word 0x0000114B"
    );
    #endif
}

void ov08_02222DEC(void) {
    /* Original at 0x02222DEC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02222E00 ; =0x0000113E\n    ldrb r2, [r0, r1]\n    cmp r2, #2\n    bne _02222DFA\n    add r1, #0xd\n    ldrb r0, [r0, r1]\n    bx lr\n    mov r0, #0xb\n    bx lr\n    nop\n    _02222E00: .word 0x0000113E"
    );
    #endif
}

void ov08_02222E04(void) {
    /* Original at 0x02222E04 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    mov r2, #0\n    str r2, [sp]\n    mov r1, #0x10\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    mov r1, #0xa\n    add r3, r1, #0\n    ldr r0, [r0, #8]\n    ldr r2, _02222E28 ; =0x0000FFFF\n    sub r3, #0x12\n    bl PaletteData_BeginPaletteFade\n    mov r0, #0xe\n    add sp, #0xc\n    pop {pc}\n    nop\n    _02222E28: .word 0x0000FFFF"
    );
    #endif
}

void ov08_02222E2C(void) {
    /* Original at 0x02222E2C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    ldr r0, [r5, #8]\n    bl PaletteData_GetSelectedBuffersBitmask\n    cmp r0, #0\n    beq _02222E40\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov08_02223F34\n    add r0, r5, #0\n    bl ov08_02223464\n    add r0, r5, #0\n    bl ov08_02223228\n    ldr r0, [r5, #4]\n    bl ov08_022230CC\n    ldr r0, [r5, #0x34]\n    bl ov08_02224B8C\n    ldr r1, [r5]\n    add r1, #0x25\n    strb r0, [r1]\n    ldr r0, [r5, #0x34]\n    bl ov08_02224B7C\n    mov r0, #4\n    bl FontID_Release\n    ldr r1, [r5]\n    ldrh r0, [r1, #0x1c]\n    cmp r0, #0\n    beq _02222EAC\n    ldr r0, [r1]\n    bl BattleSystem_GetBagCursor\n    add r6, r0, #0\n    mov r4, #0\n    ldr r3, [r5]\n    add r0, r6, #0\n    add r2, r3, r4\n    add r3, r3, r4\n    add r2, #0x27\n    add r3, #0x2c\n    ldrb r2, [r2]\n    ldrb r3, [r3]\n    add r1, r4, #0\n    bl BagCursor_Battle_PocketSetPosition\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #5\n    blo _02222E82\n    ldr r1, _02222EC0 ; =0x0000114D\n    add r0, r6, #0\n    ldrb r1, [r5, r1]\n    bl BagCursor_Battle_SetPocket\n    ldr r0, [r5]\n    mov r1, #1\n    add r0, #0x26\n    strb r1, [r0]\n    add r0, r7, #0\n    bl DestroySysTaskAndEnvironment\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02222EC0: .word 0x0000114D"
    );
    #endif
}

void ov08_02222EC4(void) {
    /* Original at 0x02222EC4 */
    /* Requires manual decompilation - 136 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #8]\n    bl PaletteData_GetSelectedBuffersBitmask\n    cmp r0, #0\n    beq _02222ED6\n    mov r0, #0xc\n    pop {r4, pc}\n    ldr r0, _02222FF0 ; =0x00001159\n    ldrb r0, [r4, r0]\n    cmp r0, #4\n    bls _02222EE0\n    b _02222FEA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02222EEC: ; jump table\n    ldr r0, [r4, #0x38]\n    bl ov12_0226BD50\n    cmp r0, #1\n    bne _02222F2E\n    ldr r0, _02222FF4 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _02222FF8 ; =0x0000114D\n    mov r1, #2\n    strb r1, [r4, r0]\n    mov r2, #0xc\n    sub r0, r0, #2\n    strb r2, [r4, r0]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov08_02224938\n    ldr r0, _02222FFC ; =0x0000115A\n    mov r1, #0\n    strb r1, [r4, r0]\n    sub r1, r0, #1\n    ldrb r1, [r4, r1]\n    sub r0, r0, #1\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    mov r0, #0xb\n    pop {r4, pc}\n    ldr r0, _02222FFC ; =0x0000115A\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _02222FEA\n    add r0, r4, #0\n    bl ov08_02222D84\n    ldr r0, _02222FF0 ; =0x00001159\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _02222FEA\n    ldr r0, [r4, #0x38]\n    bl ov12_0226BD50\n    cmp r0, #1\n    bne _02222F88\n    ldr r0, _02222FF4 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _02222FF8 ; =0x0000114D\n    ldr r3, [r4]\n    ldrb r1, [r4, r0]\n    mov r2, #0\n    sub r0, r0, #2\n    add r1, r3, r1\n    add r1, #0x27\n    strb r2, [r1]\n    mov r1, #0xc\n    strb r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #6\n    bl ov08_02224938\n    ldr r0, _02222FFC ; =0x0000115A\n    mov r1, #0\n    strb r1, [r4, r0]\n    sub r1, r0, #1\n    ldrb r1, [r4, r1]\n    sub r0, r0, #1\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    mov r0, #0xb\n    pop {r4, pc}\n    ldr r0, _02222FFC ; =0x0000115A\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _02222FEA\n    add r0, r4, #0\n    bl ov08_02222D90\n    ldr r0, _02222FF0 ; =0x00001159\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _02222FEA\n    ldr r0, [r4, #0x38]\n    bl ov12_0226BD50\n    cmp r0, #1\n    bne _02222FE2\n    ldr r0, _02222FF4 ; =0x000005DD\n    bl PlaySE\n    ldr r1, _02222FF8 ; =0x0000114D\n    ldr r2, [r4]\n    ldrb r1, [r4, r1]\n    add r0, r4, #0\n    add r1, r2, r1\n    add r1, #0x27\n    ldrb r1, [r1]\n    bl ov08_02223CD4\n    ldr r1, [r4]\n    mov r2, #0\n    strh r0, [r1, #0x1c]\n    ldr r0, _02222FF8 ; =0x0000114D\n    ldrb r1, [r4, r0]\n    ldr r0, [r4]\n    strb r1, [r0, #0x1e]\n    add r0, r4, #0\n    mov r1, #0xf\n    bl ov08_02224938\n    add r0, r4, #0\n    bl ov08_02222B8C\n    pop {r4, pc}\n    ldr r0, _02222FFC ; =0x0000115A\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    mov r0, #0xc\n    pop {r4, pc}\n    nop\n    _02222FF0: .word 0x00001159\n    _02222FF4: .word 0x000005DD\n    _02222FF8: .word 0x0000114D\n    _02222FFC: .word 0x0000115A"
    );
    #endif
}

void ov08_02223000(void) {
    /* Original at 0x02223000 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x64\n    ldr r5, _022230BC ; =ov08_02225AE8\n    add r3, sp, #0x54\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    mov r1, #1\n    bl SetScreenModeAndDisable\n    ldr r5, _022230C0 ; =ov08_02225B30\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    ldr r0, [r4, #4]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _022230C4 ; =ov08_02225B14\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    ldr r0, [r4, #4]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #4]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _022230C8 ; =ov08_02225AF8\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    ldr r0, [r4, #4]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #4]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r3, [r4]\n    mov r0, #5\n    ldr r3, [r3, #0xc]\n    mov r1, #0x20\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    ldr r3, [r4]\n    mov r0, #4\n    ldr r3, [r3, #0xc]\n    mov r1, #0x20\n    mov r2, #0\n    bl BG_ClearCharDataRange\n    ldr r0, [r4, #4]\n    mov r1, #5\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [r4, #4]\n    mov r1, #4\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x64\n    pop {r4, r5, pc}\n    _022230BC: .word ov08_02225AE8\n    _022230C0: .word ov08_02225B30\n    _022230C4: .word ov08_02225B14\n    _022230C8: .word ov08_02225AF8"
    );
    #endif
}

void ov08_022230CC(void) {
    GfGfx_EngineBTogglePlanes(0x17, 0);
    FreeBgTilemapBuffer(r4, 4);
    FreeBgTilemapBuffer(r4, 5);
    FreeBgTilemapBuffer(r4, 6);
}

void ov08_022230F4(void) {
    /* Original at 0x022230F4 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0x4d\n    ldr r1, [r1, #0xc]\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    ldr r1, [r5]\n    mov r3, #6\n    ldr r1, [r1, #0xc]\n    add r4, r0, #0\n    str r1, [sp, #0xc]\n    ldr r2, [r5, #4]\n    mov r1, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r5]\n    mov r3, #6\n    ldr r0, [r0, #0xc]\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #4]\n    add r0, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r2, [r5]\n    add r0, r4, #0\n    ldr r2, [r2, #0xc]\n    mov r1, #1\n    bl NARC_AllocAndReadWholeMember\n    add r1, sp, #0x10\n    add r6, r0, #0\n    bl NNS_G2dGetUnpackedScreenData\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    add r1, #0xc\n    bl ov08_02224254\n    add r0, r6, #0\n    bl Heap_Free\n    add r0, r4, #0\n    bl NARC_Delete\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #6\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r3, [r5]\n    ldr r0, [r5, #8]\n    ldr r3, [r3, #0xc]\n    mov r1, #0x4d\n    mov r2, #3\n    bl PaletteData_LoadNarc\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xf0\n    str r0, [sp, #8]\n    ldr r3, [r5]\n    ldr r0, [r5, #8]\n    ldr r3, [r3, #0xc]\n    mov r1, #0x10\n    mov r2, #8\n    bl PaletteData_LoadNarc\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl BattleSystem_GetFrame\n    add r4, r0, #0\n    bl sub_0200E63C\n    add r1, r0, #0\n    ldr r0, _022231E4 ; =0x000003E2\n    mov r3, #4\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    ldr r0, [r0, #0xc]\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #4]\n    mov r0, #0x26\n    bl GfGfxLoader_LoadCharData\n    add r0, r4, #0\n    bl sub_0200E640\n    add r2, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0xe0\n    str r0, [sp, #8]\n    ldr r3, [r5]\n    ldr r0, [r5, #8]\n    ldr r3, [r3, #0xc]\n    mov r1, #0x26\n    bl PaletteData_LoadNarc\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _022231E4: .word 0x000003E2"
    );
    #endif
}

void ov08_022231E8(void) {
    /* Original at 0x022231E8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r3, [r4]\n    mov r0, #0\n    ldr r3, [r3, #0xc]\n    mov r1, #0x1b\n    mov r2, #5\n    bl NewMsgDataFromNarc\n    str r0, [r4, #0x10]\n    ldr r3, [r4]\n    mov r0, #0xf\n    ldr r3, [r3, #0xc]\n    mov r1, #0xe\n    mov r2, #0\n    bl MessagePrinter_New\n    str r0, [r4, #0xc]\n    ldr r0, [r4]\n    ldr r0, [r0, #0xc]\n    bl MessageFormat_New\n    str r0, [r4, #0x14]\n    ldr r1, [r4]\n    mov r0, #2\n    ldr r1, [r1, #0xc]\n    lsl r0, r0, #8\n    bl String_New\n    str r0, [r4, #0x18]\n    pop {r4, pc}"
    );
    #endif
}

void ov08_02223228(void) {
    /* Original at 0x02223228 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    bl DestroyMsgData\n    ldr r0, [r4, #0xc]\n    bl MessagePrinter_Delete\n    ldr r0, [r4, #0x14]\n    bl MessageFormat_Delete\n    ldr r0, [r4, #0x18]\n    bl String_Delete\n    pop {r4, pc}"
    );
    #endif
}

void ov08_02223248(void) {
    /* Original at 0x02223248 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #0\n    beq _0222325A\n    cmp r1, #1\n    beq _02223274\n    cmp r1, #2\n    beq _02223290\n    pop {r4, pc}\n    mov r2, #0\n    ldr r0, [r4, #4]\n    mov r1, #6\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r4, #4]\n    mov r1, #6\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    pop {r4, pc}\n    mov r1, #6\n    add r3, r1, #0\n    ldr r0, [r4, #4]\n    mov r2, #0\n    add r3, #0xfa\n    bl ScheduleSetBgPosText\n    ldr r0, [r4, #4]\n    mov r1, #6\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    pop {r4, pc}\n    mov r2, #0\n    ldr r0, [r4, #4]\n    mov r1, #6\n    add r3, r2, #0\n    bl ScheduleSetBgPosText\n    mov r2, #3\n    add r3, r2, #0\n    ldr r0, [r4, #4]\n    mov r1, #6\n    add r3, #0xfd\n    bl ScheduleSetBgPosText\n    pop {r4, pc}"
    );
    #endif
}

void ov08_022232AC(void) {
    /* Original at 0x022232AC */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    cmp r1, #2\n    bne _022232F6\n    mov r0, #0x1c\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _022232FC ; =0x0000114D\n    mov r1, #6\n    ldrb r0, [r4, r0]\n    mov r2, #2\n    mov r3, #0x23\n    add r0, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    bl BgTilemapRectChangePalette\n    mov r0, #0x1c\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    ldr r0, _022232FC ; =0x0000114D\n    mov r1, #6\n    ldrb r0, [r4, r0]\n    mov r2, #2\n    mov r3, #0x28\n    add r0, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r4, #4]\n    bl BgTilemapRectChangePalette\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _022232FC: .word 0x0000114D"
    );
    #endif
}

void ov08_02223300(void) {
    /* Original at 0x02223300 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov08_022232AC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02223248\n    ldr r0, [r5, #4]\n    mov r1, #4\n    mov r2, #0\n    bl BgFillTilemapBufferAndSchedule\n    ldr r0, [r5, #4]\n    mov r1, #5\n    mov r2, #0\n    bl BgFillTilemapBufferAndSchedule\n    add r0, r5, #0\n    bl ov08_02223454\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_022233DC\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02223480\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02224A50\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02224134\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_0222421C\n    ldr r1, _02223364 ; =0x0000114C\n    add r0, r5, #0\n    strb r4, [r5, r1]\n    ldrb r1, [r5, r1]\n    bl ov08_02223F94\n    pop {r3, r4, r5, pc}\n    nop\n    _02223364: .word 0x0000114C"
    );
    #endif
}

void ov08_02223368(void) {
    TouchscreenHitbox_FindRectAtTouchNew();
}

void ov08_02223374(void) {
    /* Original at 0x02223374 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r4, [r5]\n    ldr r0, [r4]\n    bl BattleSystem_GetBattleContext\n    add r1, r0, #0\n    ldr r0, [r5]\n    ldr r3, [r4, #0x10]\n    ldr r0, [r0]\n    mov r2, #2\n    bl ov12_022581D4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov08_02223390(void) {
    BattleSystem_GetBag();
    Bag_TakeItem(r5, 1, r4);
    BattleSystem_GetBagCursor(r6);
    BagCursor_Battle_SetLastUsedItem(r5, r7);
}

void ov08_022233B8(void) {
    /* Original at 0x022233B8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    ldr r2, _022233D4 ; =ov08_02225B90\n    add r1, #0x1c\n    bl AddWindow\n    ldr r1, _022233D8 ; =0x0000114C\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov08_022233DC\n    pop {r4, pc}\n    _022233D4: .word ov08_02225B90\n    _022233D8: .word 0x0000114C"
    );
    #endif
}

void ov08_022233DC(void) {
    /* Original at 0x022233DC */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    cmp r1, #0\n    beq _022233EE\n    cmp r1, #1\n    beq _022233F8\n    cmp r1, #2\n    beq _02223402\n    b _0222340A\n    mov r1, #5\n    add r0, #0x30\n    ldr r6, _02223448 ; =ov08_02225BB8\n    strb r1, [r0]\n    b _0222340A\n    mov r1, #0x1a\n    add r0, #0x30\n    ldr r6, _0222344C ; =ov08_02225C10\n    strb r1, [r0]\n    b _0222340A\n    ldr r6, _02223450 ; =ov08_02225B98\n    mov r1, #4\n    add r0, #0x30\n    strb r1, [r0]\n    add r1, r5, #0\n    ldr r0, [r5]\n    add r1, #0x30\n    ldrb r1, [r1]\n    ldr r0, [r0, #0xc]\n    bl AllocWindows\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    add r0, #0x30\n    ldrb r0, [r0]\n    mov r4, #0\n    cmp r0, #0\n    bls _02223446\n    ldr r2, [r5, #0x2c]\n    lsl r1, r4, #4\n    add r1, r2, r1\n    lsl r2, r4, #3\n    ldr r0, [r5, #4]\n    add r2, r6, r2\n    bl AddWindow\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    add r0, r5, #0\n    add r0, #0x30\n    ldrb r0, [r0]\n    cmp r4, r0\n    blo _02223426\n    pop {r4, r5, r6, pc}\n    _02223448: .word ov08_02225BB8\n    _0222344C: .word ov08_02225C10\n    _02223450: .word ov08_02225B98"
    );
    #endif
}

void ov08_02223454(void) {
    /* Original at 0x02223454 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, [r1, #0x2c]\n    add r1, #0x30\n    ldr r3, _02223460 ; =WindowArray_Delete\n    ldrb r1, [r1]\n    bx r3\n    _02223460: .word WindowArray_Delete"
    );
    #endif
}

void ov08_02223464(void) {
    /* Original at 0x02223464 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x30\n    ldrb r1, [r1]\n    ldr r0, [r4, #0x2c]\n    bl WindowArray_Delete\n    add r4, #0x1c\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov08_02223480(void) {
    /* Original at 0x02223480 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    beq _02223490\n    cmp r1, #1\n    beq _02223496\n    cmp r1, #2\n    beq _0222349C\n    pop {r3, pc}\n    bl ov08_022234FC\n    pop {r3, pc}\n    bl ov08_022239B4\n    pop {r3, pc}\n    bl ov08_02223AA0\n    pop {r3, pc}"
    );
    #endif
}

void ov08_022234A4(void) {
    /* Original at 0x022234A4 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    ldr r5, [r0, #0x2c]\n    lsl r4, r1, #4\n    ldr r0, [r0, #0x10]\n    add r1, r2, #0\n    add r6, r3, #0\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x10]\n    add r0, r6, #0\n    mov r2, #0\n    bl FontID_String_GetWidth\n    add r7, r0, #0\n    add r0, r5, r4\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r7\n    lsr r3, r0, #1\n    ldr r0, [sp, #0x28]\n    ldr r2, [sp, #0x10]\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    add r1, r6, #0\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    add r0, r5, r4\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_022234FC(void) {
    /* Original at 0x022234FC */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r6, #0\n    add r5, r0, #0\n    add r4, r6, #0\n    add r7, r6, #0\n    ldr r0, [r5, #0x2c]\n    add r1, r7, #0\n    add r0, r0, r4\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, #5\n    blo _02223508\n    mov r0, #7\n    str r0, [sp]\n    ldr r0, _022235D0 ; =0x00030201\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r2, r1, #0\n    mov r3, #4\n    bl ov08_022234A4\n    mov r0, #0x17\n    str r0, [sp]\n    ldr r0, _022235D0 ; =0x00030201\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #4\n    bl ov08_022234A4\n    mov r0, #7\n    str r0, [sp]\n    ldr r0, _022235D0 ; =0x00030201\n    mov r1, #1\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #2\n    mov r3, #4\n    bl ov08_022234A4\n    mov r0, #0x17\n    str r0, [sp]\n    ldr r0, _022235D0 ; =0x00030201\n    mov r1, #1\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #3\n    mov r3, #4\n    bl ov08_022234A4\n    mov r2, #7\n    ldr r0, _022235D0 ; =0x00030201\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #2\n    mov r3, #4\n    bl ov08_022234A4\n    mov r0, #7\n    str r0, [sp]\n    ldr r0, _022235D0 ; =0x00030201\n    mov r1, #3\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #6\n    mov r3, #4\n    bl ov08_022234A4\n    ldr r0, [r5]\n    ldrh r0, [r0, #0x20]\n    cmp r0, #0\n    beq _022235CC\n    ldr r0, [r5, #0x10]\n    mov r1, #8\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r0, #5\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _022235D0 ; =0x00030201\n    mov r3, #0\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r0, [r5, #0x2c]\n    mov r1, #4\n    add r0, #0x40\n    add r2, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    ldr r0, [r5, #0x2c]\n    add r0, #0x40\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _022235D0: .word 0x00030201"
    );
    #endif
}

void ov08_022235D4(void) {
    /* Original at 0x022235D4 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r4, [r5, #0x2c]\n    lsl r6, r3, #4\n    add r7, r1, #0\n    add r0, r4, r6\n    mov r1, #0\n    str r2, [sp, #0x10]\n    bl FillWindowPixelBuffer\n    ldr r0, _02223670 ; =0x0000114D\n    lsl r7, r7, #2\n    ldrb r1, [r5, r0]\n    mov r0, #0x90\n    mul r0, r1\n    add r0, r5, r0\n    add r0, r0, r7\n    ldrh r0, [r0, #0x3c]\n    cmp r0, #0\n    beq _02223666\n    ldr r1, [sp, #0x10]\n    ldr r0, [r5, #0x10]\n    lsl r2, r1, #3\n    ldr r1, _02223674 ; =ov08_02225BE0\n    ldr r1, [r1, r2]\n    bl NewString_ReadMsgData\n    ldr r2, _02223670 ; =0x0000114D\n    str r0, [sp, #0x14]\n    ldrb r3, [r5, r2]\n    mov r2, #0x90\n    ldr r0, [r5, #0x14]\n    mul r2, r3\n    add r2, r5, r2\n    add r2, r2, r7\n    ldrh r2, [r2, #0x3c]\n    mov r1, #0\n    bl BufferItemName\n    ldr r0, [r5, #0x14]\n    ldr r1, [r5, #0x18]\n    ldr r2, [sp, #0x14]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x30]\n    ldr r1, [r5, #0x18]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    add r7, r0, #0\n    add r0, r4, r6\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r7\n    lsr r3, r0, #1\n    mov r0, #7\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x34]\n    ldr r1, [sp, #0x30]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r4, r6\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    add r0, r4, r6\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02223670: .word 0x0000114D\n    _02223674: .word ov08_02225BE0"
    );
    #endif
}

void ov08_02223678(void) {
    /* Original at 0x02223678 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    ldr r4, [r5, #0x2c]\n    lsl r7, r3, #4\n    add r6, r1, #0\n    add r0, r4, r7\n    mov r1, #0\n    str r2, [sp, #0x10]\n    bl FillWindowPixelBuffer\n    ldr r0, _02223704 ; =0x0000114D\n    lsl r6, r6, #2\n    ldrb r1, [r5, r0]\n    mov r0, #0x90\n    mul r0, r1\n    add r0, r5, r0\n    add r0, r0, r6\n    ldrh r0, [r0, #0x3e]\n    cmp r0, #0\n    beq _022236FA\n    ldr r1, [sp, #0x10]\n    ldr r0, [r5, #0x10]\n    lsl r2, r1, #3\n    ldr r1, _02223708 ; =ov08_02225BE4\n    ldr r1, [r1, r2]\n    bl NewString_ReadMsgData\n    mov r1, #0\n    str r0, [sp, #0x14]\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, _02223704 ; =0x0000114D\n    ldr r0, [r5, #0x14]\n    ldrb r3, [r5, r2]\n    mov r2, #0x90\n    mul r2, r3\n    add r2, r5, r2\n    add r2, r2, r6\n    ldrh r2, [r2, #0x3e]\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, [r5, #0x14]\n    ldr r1, [r5, #0x18]\n    ldr r2, [sp, #0x14]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x34]\n    mov r3, #0\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x38]\n    ldr r1, [sp, #0x30]\n    str r0, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r4, r7\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    add r0, r4, r7\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02223704: .word 0x0000114D\n    _02223708: .word ov08_02225BE4"
    );
    #endif
}

void ov08_0222370C(void) {
    /* Original at 0x0222370C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldr r0, _02223770 ; =0x0000114D\n    add r5, r1, #0\n    ldrb r0, [r6, r0]\n    ldr r1, [r6]\n    add r0, r1, r0\n    add r0, #0x2c\n    ldrb r1, [r0]\n    mov r0, #6\n    mul r0, r1\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r0, #0x31\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02223734\n    mov r4, #0\n    b _02223736\n    mov r4, #0xc\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _02223774 ; =0x00030201\n    ldr r1, [sp, #0xc]\n    lsl r7, r5, #1\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r1, r5, r1\n    add r2, r5, #0\n    add r3, r4, r7\n    bl ov08_022235D4\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, _02223778 ; =0x00010200\n    ldr r1, [sp, #0xc]\n    add r3, r4, #1\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r1, r5, r1\n    add r2, r5, #0\n    add r3, r3, r7\n    bl ov08_02223678\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02223770: .word 0x0000114D\n    _02223774: .word 0x00030201\n    _02223778: .word 0x00010200"
    );
    #endif
}

void ov08_0222377C(void) {
    /* Original at 0x0222377C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x13\n    str r0, [sp, #8]\n    mov r0, #0x11\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #4]\n    mov r1, #5\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    mov r5, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov08_0222370C\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #6\n    blo _0222379E\n    add r0, r4, #0\n    add r0, #0x31\n    ldrb r1, [r0]\n    mov r0, #1\n    add r4, #0x31\n    eor r0, r1\n    strb r0, [r4]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov08_022237C4(void) {
    /* Original at 0x022237C4 */
    /* Requires manual decompilation - 132 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #0x19\n    ldr r1, [r5, #0x2c]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x10]\n    mov r1, #0x1c\n    ldr r4, [r5, #0x2c]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x10]\n    mov r0, #0\n    ldr r1, [sp, #0x10]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r7, r0, #0\n    mov r0, #0x19\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl GetWindowWidth\n    lsl r0, r0, #3\n    sub r0, r0, r7\n    lsr r6, r0, #1\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _022238EC ; =0x00010200\n    ldr r2, [sp, #0x10]\n    str r0, [sp, #8]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    mov r1, #0\n    add r0, r4, r0\n    add r3, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    ldr r0, [r5, #0x10]\n    mov r1, #0x1d\n    bl NewString_ReadMsgData\n    mov r1, #0\n    str r0, [sp, #0x14]\n    ldr r3, _022238F0 ; =0x0000114D\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, _022238F0 ; =0x0000114D\n    add r3, r3, #7\n    ldrb r2, [r5, r2]\n    ldr r0, [r5, #0x14]\n    add r2, r5, r2\n    ldrb r2, [r2, r3]\n    mov r3, #2\n    add r2, r2, #1\n    bl BufferIntegerAsString\n    ldr r0, [r5, #0x14]\n    ldr r1, [r5, #0x18]\n    ldr r2, [sp, #0x14]\n    bl StringExpandPlaceholders\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _022238EC ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r2, [r5, #0x18]\n    add r0, r4, r0\n    add r3, r6, r7\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    ldr r0, [r5, #0x10]\n    mov r1, #0x1e\n    bl NewString_ReadMsgData\n    mov r1, #0\n    add r7, r0, #0\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r3, _022238F0 ; =0x0000114D\n    ldr r2, [r5]\n    ldrb r3, [r5, r3]\n    ldr r0, [r5, #0x14]\n    add r2, r2, r3\n    add r2, #0x2c\n    ldrb r2, [r2]\n    mov r3, #2\n    add r2, r2, #1\n    bl BufferIntegerAsString\n    ldr r0, [r5, #0x14]\n    ldr r1, [r5, #0x18]\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    mov r0, #0\n    ldr r1, [r5, #0x18]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r3, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _022238EC ; =0x00010200\n    mov r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r2, [r5, #0x18]\n    add r0, r4, r0\n    sub r3, r6, r3\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    mov r0, #0x19\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022238EC: .word 0x00010200\n    _022238F0: .word 0x0000114D"
    );
    #endif
}

void ov08_022238F4(void) {
    /* Original at 0x022238F4 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #6\n    ldr r1, [r4, #0x2c]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _022239AC ; =0x0000114D\n    ldrb r0, [r4, r0]\n    cmp r0, #3\n    bhi _022239A8\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222391C: ; jump table\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _022239B0 ; =0x00010200\n    mov r1, #0x18\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x16\n    mov r3, #0\n    bl ov08_022234A4\n    mov r0, #0x14\n    str r0, [sp]\n    ldr r0, _022239B0 ; =0x00010200\n    mov r1, #0x18\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x17\n    mov r3, #0\n    bl ov08_022234A4\n    add sp, #8\n    pop {r4, pc}\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _022239B0 ; =0x00010200\n    mov r1, #0x18\n    str r0, [sp, #4]\n    add r0, r4, #0\n    add r2, r1, #0\n    mov r3, #0\n    bl ov08_022234A4\n    mov r0, #0x14\n    str r0, [sp]\n    ldr r0, _022239B0 ; =0x00010200\n    mov r1, #0x18\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x19\n    mov r3, #0\n    bl ov08_022234A4\n    add sp, #8\n    pop {r4, pc}\n    mov r0, #0xc\n    str r0, [sp]\n    ldr r0, _022239B0 ; =0x00010200\n    mov r1, #0x18\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x1a\n    mov r3, #0\n    bl ov08_022234A4\n    add sp, #8\n    pop {r4, pc}\n    mov r0, #0xc\n    str r0, [sp]\n    ldr r0, _022239B0 ; =0x00010200\n    mov r1, #0x18\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x1b\n    mov r3, #0\n    bl ov08_022234A4\n    add sp, #8\n    pop {r4, pc}\n    _022239AC: .word 0x0000114D\n    _022239B0: .word 0x00010200"
    );
    #endif
}

void ov08_022239B4(void) {
    ov08_0222377C();
    ov08_022238F4(r4);
    ov08_022237C4(r4);
}

void ov08_022239CC(void) {
    /* Original at 0x022239CC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    add r6, r1, #0\n    mov r1, #9\n    ldr r4, [r5, #0x2c]\n    bl NewString_ReadMsgData\n    ldr r2, _02223A34 ; =0x0000114D\n    add r7, r0, #0\n    ldrb r3, [r5, r2]\n    mov r2, #0x90\n    ldr r0, [r5, #0x14]\n    mul r2, r3\n    add r2, r5, r2\n    lsl r3, r6, #2\n    add r2, r2, r3\n    ldrh r2, [r2, #0x3c]\n    mov r1, #0\n    bl BufferItemName\n    ldr r0, [r5, #0x14]\n    ldr r1, [r5, #0x18]\n    add r2, r7, #0\n    bl StringExpandPlaceholders\n    add r0, r4, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02223A38 ; =0x00010200\n    add r3, r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, [r5, #0x18]\n    add r0, r4, #0\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02223A34: .word 0x0000114D\n    _02223A38: .word 0x00010200"
    );
    #endif
}

void ov08_02223A3C(void) {
    /* Original at 0x02223A3C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r1, [r5]\n    ldr r4, [r5, #0x2c]\n    ldr r1, [r1, #0xc]\n    mov r0, #0x82\n    add r4, #0x20\n    bl String_New\n    ldr r1, _02223A98 ; =0x0000114D\n    add r7, r0, #0\n    ldrb r2, [r5, r1]\n    mov r1, #0x90\n    mul r1, r2\n    add r2, r5, r1\n    lsl r1, r6, #2\n    add r1, r2, r1\n    ldr r2, [r5]\n    ldrh r1, [r1, #0x3c]\n    ldr r2, [r2, #0xc]\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    bl GetItemDescIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02223A9C ; =0x00010200\n    add r2, r7, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r3, #4\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl ScheduleWindowCopyToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02223A98: .word 0x0000114D\n    _02223A9C: .word 0x00010200"
    );
    #endif
}

void ov08_02223AA0(void) {
    /* Original at 0x02223AA0 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    mov r6, #0\n    add r5, r0, #0\n    add r4, r6, #0\n    add r7, r6, #0\n    ldr r0, [r5, #0x2c]\n    add r1, r7, #0\n    add r0, r0, r4\n    bl FillWindowPixelBuffer\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, #4\n    blo _02223AAC\n    ldr r0, _02223B14 ; =0x0000114D\n    ldr r1, [r5]\n    ldrb r2, [r5, r0]\n    add r0, r1, r2\n    add r0, #0x27\n    ldrb r4, [r0]\n    add r0, r1, r2\n    add r0, #0x2c\n    ldrb r1, [r0]\n    mov r0, #6\n    add r6, r1, #0\n    mul r6, r0\n    add r0, r5, #0\n    add r1, r4, r6\n    bl ov08_022239CC\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, _02223B18 ; =0x00010200\n    str r2, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, r4, r6\n    mov r3, #1\n    bl ov08_02223678\n    add r0, r5, #0\n    add r1, r4, r6\n    bl ov08_02223A3C\n    mov r0, #5\n    str r0, [sp]\n    ldr r0, _02223B1C ; =0x00030201\n    mov r1, #3\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #0x1f\n    mov r3, #4\n    bl ov08_022234A4\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02223B14: .word 0x0000114D\n    _02223B18: .word 0x00010200\n    _02223B1C: .word 0x00030201"
    );
    #endif
}

void ov08_02223B20(void) {
    /* Original at 0x02223B20 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02223B44 ; =0x000003E2\n    add r4, r0, #0\n    add r0, #0x1c\n    mov r1, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    add r0, r4, #0\n    add r0, #0x1c\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    bl ov08_02223B48\n    pop {r4, pc}\n    nop\n    _02223B44: .word 0x000003E2"
    );
    #endif
}

void ov08_02223B48(void) {
    /* Original at 0x02223B48 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #1\n    bl TextFlags_SetCanABSpeedUpPrint\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl BattleSystem_GetTextFrameDelay\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    add r0, r4, #0\n    ldr r2, [r4, #0x18]\n    add r0, #0x1c\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    add r4, #0x32\n    strb r0, [r4]\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov08_02223B78(void) {
    /* Original at 0x02223B78 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r3, [r4]\n    ldrh r1, [r3, #0x20]\n    cmp r1, #0\n    bne _02223B88\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, [r3, #8]\n    ldr r3, [r3, #0xc]\n    mov r2, #1\n    bl Bag_HasItem\n    cmp r0, #0\n    bne _02223BA2\n    ldr r1, [r4]\n    mov r0, #0\n    strh r0, [r1, #0x20]\n    ldr r1, [r4]\n    strb r0, [r1, #0x1f]\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov08_02223BA8(void) {
    /* Original at 0x02223BA8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _02223BF0 ; =0x0000114D\n    ldr r6, [r5]\n    ldrb r7, [r5, r0]\n    mov r0, #0x90\n    ldrh r2, [r6, #0x20]\n    mul r0, r7\n    mov r4, #0\n    add r1, r5, r0\n    ldrh r0, [r1, #0x3c]\n    cmp r2, r0\n    bne _02223BE6\n    add r0, r4, #0\n    mov r1, #6\n    bl _u32_div_f\n    add r0, r6, r7\n    add r0, #0x27\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #6\n    bl _u32_div_f\n    ldr r1, _02223BF0 ; =0x0000114D\n    ldr r2, [r5]\n    ldrb r1, [r5, r1]\n    add r1, r2, r1\n    add r1, #0x2c\n    strb r0, [r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r1, r1, #4\n    cmp r4, #0x24\n    blo _02223BBC\n    pop {r3, r4, r5, r6, r7, pc}\n    _02223BF0: .word 0x0000114D"
    );
    #endif
}

void ov08_02223BF4(void) {
    /* Original at 0x02223BF4 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    ldr r2, [sp]\n    ldr r0, [r0, #8]\n    lsl r2, r2, #0x10\n    ldr r1, [sp, #8]\n    lsr r2, r2, #0x10\n    bl Bag_GetPocketSlotN\n    add r5, r0, #0\n    beq _02223C7C\n    ldrh r0, [r5]\n    cmp r0, #0\n    beq _02223C74\n    ldrh r1, [r5, #2]\n    cmp r1, #0\n    beq _02223C74\n    ldr r2, [r4]\n    mov r1, #0xd\n    ldr r2, [r2, #0xc]\n    bl GetItemAttr\n    add r7, r0, #0\n    ldr r1, _02223CC8 ; =ov08_02225CE0\n    mov r0, #0\n    mov r2, #1\n    lsl r2, r0\n    tst r2, r7\n    beq _02223C6C\n    ldrb r2, [r1]\n    mov r3, #0x90\n    add r6, r2, #0\n    mul r6, r3\n    add r3, r4, r2\n    ldr r2, _02223CCC ; =0x0000114F\n    ldrb r2, [r3, r2]\n    add r3, r4, r6\n    lsl r2, r2, #2\n    add r2, r2, r3\n    ldrh r3, [r5]\n    strh r3, [r2, #0x3c]\n    ldrh r3, [r5, #2]\n    strh r3, [r2, #0x3e]\n    ldrb r2, [r1]\n    add r6, r4, r2\n    ldr r2, _02223CCC ; =0x0000114F\n    ldrb r2, [r6, r2]\n    add r3, r2, #1\n    ldr r2, _02223CCC ; =0x0000114F\n    strb r3, [r6, r2]\n    add r0, r0, #1\n    add r1, r1, #1\n    cmp r0, #5\n    blo _02223C3A\n    ldr r0, [sp]\n    add r0, r0, #1\n    str r0, [sp]\n    b _02223C0A\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #8\n    blo _02223BFE\n    mov r5, #0\n    add r7, r5, #0\n    ldr r0, _02223CCC ; =0x0000114F\n    add r6, r4, r5\n    ldrb r0, [r6, r0]\n    cmp r0, #0\n    bne _02223C9A\n    ldr r0, _02223CD0 ; =0x00001154\n    strb r7, [r6, r0]\n    b _02223CA6\n    sub r0, r0, #1\n    mov r1, #6\n    bl _s32_div_f\n    ldr r1, _02223CD0 ; =0x00001154\n    strb r0, [r6, r1]\n    ldr r1, [r4]\n    ldr r0, _02223CD0 ; =0x00001154\n    add r2, r1, r5\n    add r2, #0x2c\n    ldrb r0, [r6, r0]\n    ldrb r2, [r2]\n    cmp r0, r2\n    bhs _02223CBC\n    add r1, r1, r5\n    add r1, #0x2c\n    strb r0, [r1]\n    add r5, r5, #1\n    cmp r5, #5\n    blo _02223C8A\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02223CC8: .word ov08_02225CE0\n    _02223CCC: .word 0x0000114F\n    _02223CD0: .word 0x00001154"
    );
    #endif
}

void ov08_02223CD4(void) {
    /* Original at 0x02223CD4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, _02223D04 ; =0x0000114D\n    ldr r3, [r0]\n    ldrb r2, [r0, r2]\n    add r3, r3, r2\n    add r3, #0x2c\n    ldrb r4, [r3]\n    mov r3, #6\n    mul r3, r4\n    add r1, r1, r3\n    lsl r3, r1, #2\n    mov r1, #0x90\n    mul r1, r2\n    add r0, r0, r1\n    add r1, r0, r3\n    ldrh r0, [r1, #0x3c]\n    cmp r0, #0\n    beq _02223CFE\n    ldrh r1, [r1, #0x3e]\n    cmp r1, #0\n    bne _02223D00\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    _02223D04: .word 0x0000114D"
    );
    #endif
}

void ov08_02223D08(void) {
    ov08_02223D34();
    ov08_02223D80(r4);
    ov08_02223F14(r4);
    ov08_022240A8(r4);
    ov08_0222419C(r4);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}

void ov08_02223D34(void) {
    /* Original at 0x02223D34 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    ldr r3, _02223D7C ; =ov08_02225D14\n    add r2, sp, #0\n    add r5, r0, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl BattleSystem_GetSpriteSystem\n    add r4, r0, #0\n    bl SpriteManager_New\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldr r1, [r5, r1]\n    add r0, r4, #0\n    mov r2, #0xc\n    bl SpriteSystem_InitSprites\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r4, #0\n    add r2, sp, #0\n    bl SpriteSystem_InitManagerWithCapacities\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _02223D7C: .word ov08_02225D14"
    );
    #endif
}

void ov08_02223D80(void) {
    /* Original at 0x02223D80 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    ldr r1, [r6]\n    mov r0, #0x12\n    ldr r1, [r1, #0xc]\n    bl NARC_New\n    add r7, r0, #0\n    ldr r0, [r6]\n    ldr r0, [r0]\n    bl BattleSystem_GetSpriteSystem\n    str r0, [sp, #0x18]\n    mov r4, #0\n    ldr r0, _02223E38 ; =0x0000B4B7\n    add r5, r4, r0\n    mov r0, #1\n    add r1, r0, #0\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r1, #0xc3\n    str r5, [sp, #8]\n    lsl r1, r1, #2\n    ldr r0, [sp, #0x18]\n    ldr r1, [r6, r1]\n    add r2, r7, #0\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #1\n    mov r1, #2\n    bl GetItemIndexMapping\n    str r7, [sp]\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #2\n    str r0, [sp, #0x10]\n    mov r3, #0xc3\n    str r5, [sp, #0x14]\n    lsl r3, r3, #2\n    ldr r0, [r6, #8]\n    ldr r2, [sp, #0x18]\n    ldr r3, [r6, r3]\n    mov r1, #3\n    bl SpriteSystem_LoadPaletteBufferFromOpenNarc\n    add r4, r4, #1\n    cmp r4, #6\n    blo _02223D9E\n    bl GetItemIconCell\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _02223E38 ; =0x0000B4B7\n    mov r1, #0xc3\n    str r0, [sp, #4]\n    lsl r1, r1, #2\n    ldr r0, [sp, #0x18]\n    ldr r1, [r6, r1]\n    add r2, r7, #0\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    bl GetItemIconAnim\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _02223E38 ; =0x0000B4B7\n    mov r1, #0xc3\n    str r0, [sp, #4]\n    lsl r1, r1, #2\n    ldr r0, [sp, #0x18]\n    ldr r1, [r6, r1]\n    add r2, r7, #0\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r7, #0\n    bl NARC_Delete\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02223E38: .word 0x0000B4B7"
    );
    #endif
}

void ov08_02223E3C(void) {
    /* Original at 0x02223E3C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r1, #0\n    ldr r0, [r0]\n    add r4, r2, #0\n    bl BattleSystem_GetSpriteSystem\n    add r7, r0, #0\n    add r0, r6, #0\n    mov r1, #1\n    bl GetItemIndexMapping\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0xc3\n    str r4, [sp, #4]\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    add r0, r7, #0\n    mov r2, #0x12\n    bl SpriteSystem_ReplaceCharResObj\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_02223E74(void) {
    /* Original at 0x02223E74 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #2\n    add r4, r2, #0\n    bl GetItemIndexMapping\n    add r2, r0, #0\n    mov r0, #3\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    lsl r0, r4, #0x14\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r3, [r5]\n    ldr r0, [r5, #8]\n    ldr r3, [r3, #0xc]\n    mov r1, #0x12\n    bl PaletteData_LoadNarc\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov08_02223EA4(void) {
    /* Original at 0x02223EA4 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    ldr r0, [r0]\n    bl BattleSystem_GetSpriteSystem\n    mov r2, #0\n    add r1, sp, #0\n    strh r2, [r1]\n    strh r2, [r1, #2]\n    strh r2, [r1, #4]\n    strh r2, [r1, #6]\n    mov r1, #0x14\n    ldr r3, _02223F00 ; =ov08_02225DEC\n    mul r1, r4\n    ldr r3, [r3, r1]\n    str r2, [sp, #0xc]\n    str r3, [sp, #8]\n    mov r3, #2\n    str r3, [sp, #0x10]\n    ldr r3, _02223F04 ; =ov08_02225DDC\n    str r2, [sp, #0x30]\n    ldr r3, [r3, r1]\n    add r2, sp, #0\n    str r3, [sp, #0x14]\n    ldr r3, _02223F08 ; =ov08_02225DE0\n    ldr r3, [r3, r1]\n    str r3, [sp, #0x18]\n    ldr r3, _02223F0C ; =ov08_02225DE4\n    ldr r3, [r3, r1]\n    str r3, [sp, #0x1c]\n    ldr r3, _02223F10 ; =ov08_02225DE8\n    ldr r1, [r3, r1]\n    str r1, [sp, #0x20]\n    mov r1, #1\n    str r1, [sp, #0x2c]\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    bl SpriteSystem_NewSprite\n    add sp, #0x34\n    pop {r4, r5, pc}\n    nop\n    _02223F00: .word ov08_02225DEC\n    _02223F04: .word ov08_02225DDC\n    _02223F08: .word ov08_02225DE0\n    _02223F0C: .word ov08_02225DE4\n    _02223F10: .word ov08_02225DE8"
    );
    #endif
}

void ov08_02223F14(void) {
    /* Original at 0x02223F14 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r7, #0x31\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #4\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov08_02223EA4\n    str r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blo _02223F20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_02223F34(void) {
    /* Original at 0x02223F34 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [r7]\n    ldr r0, [r0]\n    bl BattleSystem_GetSpriteSystem\n    mov r6, #0x31\n    str r0, [sp]\n    mov r4, #0\n    add r5, r7, #0\n    lsl r6, r6, #4\n    ldr r0, [r5, r6]\n    bl Sprite_DeleteAndFreeResources\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blo _02223F4A\n    add r0, r7, #0\n    bl ov08_02224108\n    add r0, r7, #0\n    bl ov08_022241F4\n    mov r1, #0xc3\n    lsl r1, r1, #2\n    ldr r0, [sp]\n    ldr r1, [r7, r1]\n    bl SpriteSystem_FreeResourcesAndManager\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_02223F74(void) {
    /* Original at 0x02223F74 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    mov r1, #1\n    add r6, r0, #0\n    bl ManagedSprite_SetDrawFlag\n    lsl r1, r5, #0x10\n    lsl r2, r4, #0x10\n    add r0, r6, #0\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov08_02223F94(void) {
    /* Original at 0x02223F94 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r6, #0x31\n    str r0, [sp]\n    add r7, r1, #0\n    mov r4, #0\n    add r5, r0, #0\n    lsl r6, r6, #4\n    ldr r0, [r5, r6]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blo _02223FA2\n    cmp r7, #0\n    beq _02223FC0\n    cmp r7, #1\n    beq _02223FC8\n    cmp r7, #2\n    beq _02223FD0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    bl ov08_02223FD8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    bl ov08_0222400C\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    bl ov08_02224064\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_02223FD8(void) {
    /* Original at 0x02223FD8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4]\n    ldrh r1, [r1, #0x20]\n    cmp r1, #0\n    beq _02224006\n    ldr r2, _02224008 ; =0x0000B4B7\n    bl ov08_02223E3C\n    ldr r1, [r4]\n    ldr r3, _02224008 ; =0x0000B4B7\n    ldrh r1, [r1, #0x20]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov08_02223E74\n    mov r0, #0x31\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x18\n    mov r2, #0xb2\n    bl ov08_02223F74\n    pop {r4, pc}\n    _02224008: .word 0x0000B4B7"
    );
    #endif
}

void ov08_0222400C(void) {
    /* Original at 0x0222400C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r6, _0222405C ; =ov08_02225D74\n    mov r4, #0\n    add r7, r5, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02223CD4\n    str r0, [sp]\n    cmp r0, #0\n    beq _0222404E\n    ldr r2, _02224060 ; =0x0000B4B7\n    ldr r1, [sp]\n    add r0, r5, #0\n    add r2, r4, r2\n    bl ov08_02223E3C\n    ldr r3, _02224060 ; =0x0000B4B7\n    lsl r2, r4, #0x10\n    ldr r1, [sp]\n    add r0, r5, #0\n    lsr r2, r2, #0x10\n    add r3, r4, r3\n    bl ov08_02223E74\n    mov r0, #0x31\n    lsl r0, r0, #4\n    ldr r0, [r7, r0]\n    ldr r1, [r6]\n    ldr r2, [r6, #4]\n    bl ov08_02223F74\n    add r4, r4, #1\n    add r6, #8\n    add r7, r7, #4\n    cmp r4, #6\n    blo _02224016\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222405C: .word ov08_02225D74\n    _02224060: .word 0x0000B4B7"
    );
    #endif
}

void ov08_02224064(void) {
    /* Original at 0x02224064 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _022240A0 ; =0x0000114D\n    add r4, r0, #0\n    ldrb r1, [r4, r1]\n    ldr r2, [r4]\n    add r1, r2, r1\n    add r1, #0x27\n    ldrb r1, [r1]\n    bl ov08_02223CD4\n    add r5, r0, #0\n    ldr r2, _022240A4 ; =0x0000B4B7\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov08_02223E3C\n    ldr r3, _022240A4 ; =0x0000B4B7\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov08_02223E74\n    mov r0, #0x31\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x28\n    mov r2, #0x2c\n    bl ov08_02223F74\n    pop {r3, r4, r5, pc}\n    _022240A0: .word 0x0000114D\n    _022240A4: .word 0x0000B4B7"
    );
    #endif
}

void ov08_022240A8(void) {
    /* Original at 0x022240A8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl BattleSystem_GetSpriteSystem\n    ldr r1, _02224104 ; =0x0000B4BE\n    add r4, r0, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    sub r1, r1, #5\n    str r1, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r1, #0xc3\n    ldr r3, [r5]\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    ldr r2, [r5, #8]\n    ldr r3, [r3, #0xc]\n    bl BattleCursor_LoadResources\n    ldr r3, _02224104 ; =0x0000B4BE\n    mov r1, #0xc3\n    str r3, [sp]\n    sub r0, r3, #5\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r2, [r5]\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    ldr r2, [r2, #0xc]\n    add r0, r4, #0\n    bl BattleCursor_New\n    add r1, r0, #0\n    ldr r0, [r5, #0x34]\n    bl ov08_02224B94\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _02224104: .word 0x0000B4BE"
    );
    #endif
}

void ov08_02224108(void) {
    /* Original at 0x02224108 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov08_02224B84\n    bl BattleCursor_Delete\n    ldr r3, _02224130 ; =0x0000B4B9\n    mov r0, #0xc3\n    add r1, r3, #5\n    str r3, [sp]\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r2, r1, #0\n    bl BattleCursor_FreeResources\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02224130: .word 0x0000B4B9"
    );
    #endif
}

void ov08_02224134(void) {
    /* Original at 0x02224134 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r1, _02224174 ; =ov08_02225CF8\n    lsl r2, r4, #2\n    ldr r0, [r5, #0x34]\n    ldr r1, [r1, r2]\n    bl ov08_02224BCC\n    cmp r4, #0\n    beq _02224152\n    cmp r4, #1\n    beq _0222415E\n    cmp r4, #2\n    pop {r3, r4, r5, pc}\n    ldr r1, _02224178 ; =0x0000114D\n    ldr r0, [r5, #0x34]\n    ldrb r1, [r5, r1]\n    bl ov08_02224B98\n    pop {r3, r4, r5, pc}\n    ldr r1, _02224178 ; =0x0000114D\n    ldr r2, [r5]\n    ldrb r1, [r5, r1]\n    ldr r0, [r5, #0x34]\n    add r1, r2, r1\n    add r1, #0x27\n    ldrb r1, [r1]\n    bl ov08_02224B98\n    pop {r3, r4, r5, pc}\n    nop\n    _02224174: .word ov08_02225CF8\n    _02224178: .word 0x0000114D"
    );
    #endif
}

void ov08_0222417C(void) {
    /* Original at 0x0222417C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov08_02224B90\n    ldr r0, [r4, #0x34]\n    bl ov08_02224BC0\n    ldr r0, [r4, #0x34]\n    bl ov08_02224B84\n    bl BattleCursor_Disable\n    pop {r4, pc}"
    );
    #endif
}

void ov08_0222419C(void) {
    /* Original at 0x0222419C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl BattleSystem_GetSpriteSystem\n    ldr r1, _022241F0 ; =0x0000B4BD\n    add r4, r0, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    sub r1, r1, #5\n    str r1, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r1, #0xc3\n    ldr r2, [r5]\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    ldr r2, [r2, #0xc]\n    ldr r3, [r5, #8]\n    bl BattleFinger_LoadResources\n    ldr r3, _022241F0 ; =0x0000B4BD\n    mov r1, #0xc3\n    str r3, [sp]\n    sub r0, r3, #5\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r2, [r5]\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    ldr r2, [r2, #0xc]\n    add r0, r4, #0\n    bl BattleFinger_New\n    str r0, [r5, #0x38]\n    add sp, #0x14\n    pop {r4, r5, pc}\n    nop\n    _022241F0: .word 0x0000B4BD"
    );
    #endif
}

void ov08_022241F4(void) {
    /* Original at 0x022241F4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #0x38]\n    bl BattleFinger_Delete\n    ldr r3, _02224218 ; =0x0000B4B8\n    mov r0, #0xc3\n    add r1, r3, #5\n    str r3, [sp]\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r2, r1, #0\n    bl BattleFinger_FreeResources\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02224218: .word 0x0000B4B8"
    );
    #endif
}

void ov08_0222421C(void) {
    /* Original at 0x0222421C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #0x14]\n    cmp r0, #1\n    bne _02224242\n    lsl r3, r1, #3\n    ldr r1, _0222424C ; =ov08_02225D2C\n    ldr r2, _02224250 ; =ov08_02225D30\n    ldr r0, [r4, #0x38]\n    ldr r1, [r1, r3]\n    ldr r2, [r2, r3]\n    bl ov12_0226BD2C\n    ldr r0, [r4, #0x38]\n    mov r1, #0x3c\n    bl ov12_0226BD4C\n    pop {r4, pc}\n    ldr r0, [r4, #0x38]\n    bl BattleFinger_Disable\n    pop {r4, pc}\n    nop\n    _0222424C: .word ov08_02225D2C\n    _02224250: .word ov08_02225D30"
    );
    #endif
}

void ov08_02224254(void) {
    /* Original at 0x02224254 */
    /* Requires manual decompilation - 347 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    mov r0, #0xca\n    lsl r0, r0, #2\n    mov r2, #0\n    add r0, r5, r0\n    add r3, r2, #0\n    add r4, r1, #0\n    bl ov08_0222458C\n    mov r0, #0x10\n    str r0, [sp]\n    ldr r0, _02224510 ; =0x00000448\n    mov r3, #9\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r2, #0\n    str r3, [sp, #4]\n    bl ov08_0222458C\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    ldr r0, _02224514 ; =0x00000568\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x12\n    bl ov08_0222458C\n    mov r0, #0x1a\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    ldr r0, _02224518 ; =0x00000688\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x1b\n    bl ov08_0222458C\n    mov r0, #0x1a\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    ldr r0, _0222451C ; =0x0000078C\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x20\n    bl ov08_0222458C\n    mov r0, #0x1a\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    mov r0, #0x89\n    lsl r0, r0, #4\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r2, #0\n    mov r3, #0x25\n    bl ov08_0222458C\n    mov r0, #0x1a\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    ldr r0, _02224520 ; =0x00000994\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x2a\n    bl ov08_0222458C\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224524 ; =0x00000A98\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x39\n    bl ov08_0222458C\n    ldr r0, _02224528 ; =0x00000ACA\n    mov r2, #5\n    str r2, [sp]\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r3, #0x39\n    str r2, [sp, #4]\n    bl ov08_0222458C\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0222452C ; =0x00000AFC\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0xa\n    mov r3, #0x39\n    bl ov08_0222458C\n    mov r2, #0x10\n    str r2, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    ldr r0, _02224530 ; =0x00000B2E\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r3, #0\n    bl ov08_0222458C\n    ldr r0, _02224534 ; =0x00000BEE\n    mov r2, #0x10\n    str r2, [sp]\n    mov r3, #6\n    add r0, r5, r0\n    add r1, r4, #0\n    str r3, [sp, #4]\n    bl ov08_0222458C\n    mov r2, #0x10\n    str r2, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    ldr r0, _02224538 ; =0x00000CAE\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r3, #0xc\n    bl ov08_0222458C\n    mov r2, #0x10\n    str r2, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    ldr r0, _0222453C ; =0x00000D6E\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r3, #0x12\n    bl ov08_0222458C\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224540 ; =0x00000E2E\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x2f\n    bl ov08_0222458C\n    mov r0, #0xe6\n    mov r2, #5\n    lsl r0, r0, #4\n    str r2, [sp]\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r3, #0x2f\n    str r2, [sp, #4]\n    bl ov08_0222458C\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224544 ; =0x00000E92\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0xa\n    mov r3, #0x2f\n    bl ov08_0222458C\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224548 ; =0x00000EC4\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0xf\n    mov r3, #0x2f\n    bl ov08_0222458C\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0222454C ; =0x00000EF6\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #0x34\n    bl ov08_0222458C\n    ldr r0, _02224550 ; =0x00000F28\n    mov r2, #5\n    str r2, [sp]\n    add r0, r5, r0\n    add r1, r4, #0\n    mov r3, #0x34\n    str r2, [sp, #4]\n    bl ov08_0222458C\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224554 ; =0x00000F5A\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0xa\n    mov r3, #0x34\n    bl ov08_0222458C\n    mov r0, #5\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224558 ; =0x00000F8C\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0xf\n    mov r3, #0x34\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0222455C ; =0x00000FBE\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x14\n    mov r3, #0x2f\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224560 ; =0x00000FDE\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x18\n    mov r3, #0x2f\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224564 ; =0x00000FFE\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x1c\n    mov r3, #0x2f\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224568 ; =0x0000101E\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x14\n    mov r3, #0x33\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0222456C ; =0x0000103E\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x18\n    mov r3, #0x33\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224570 ; =0x0000105E\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x1c\n    mov r3, #0x33\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224574 ; =0x0000107E\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x14\n    mov r3, #0x37\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224578 ; =0x0000109E\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x18\n    mov r3, #0x37\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0222457C ; =0x000010BE\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x1c\n    mov r3, #0x37\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224580 ; =0x000010DE\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x14\n    mov r3, #0x3b\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224584 ; =0x000010FE\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x18\n    mov r3, #0x3b\n    bl ov08_0222458C\n    mov r0, #4\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02224588 ; =0x0000111E\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #0x1c\n    mov r3, #0x3b\n    bl ov08_0222458C\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _02224510: .word 0x00000448\n    _02224514: .word 0x00000568\n    _02224518: .word 0x00000688\n    _0222451C: .word 0x0000078C\n    _02224520: .word 0x00000994\n    _02224524: .word 0x00000A98\n    _02224528: .word 0x00000ACA\n    _0222452C: .word 0x00000AFC\n    _02224530: .word 0x00000B2E\n    _02224534: .word 0x00000BEE\n    _02224538: .word 0x00000CAE\n    _0222453C: .word 0x00000D6E\n    _02224540: .word 0x00000E2E\n    _02224544: .word 0x00000E92\n    _02224548: .word 0x00000EC4\n    _0222454C: .word 0x00000EF6\n    _02224550: .word 0x00000F28\n    _02224554: .word 0x00000F5A\n    _02224558: .word 0x00000F8C\n    _0222455C: .word 0x00000FBE\n    _02224560: .word 0x00000FDE\n    _02224564: .word 0x00000FFE\n    _02224568: .word 0x0000101E\n    _0222456C: .word 0x0000103E\n    _02224570: .word 0x0000105E\n    _02224574: .word 0x0000107E\n    _02224578: .word 0x0000109E\n    _0222457C: .word 0x000010BE\n    _02224580: .word 0x000010DE\n    _02224584: .word 0x000010FE\n    _02224588: .word 0x0000111E"
    );
    #endif
}

void ov08_0222458C(void) {
    /* Original at 0x0222458C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    add r0, sp, #8\n    mov lr, r3\n    ldrb r3, [r0, #0x14]\n    mov r6, #0\n    mov ip, r3\n    cmp r3, #0\n    ble _022245D8\n    ldrb r3, [r0, #0x10]\n    lsl r2, r2, #1\n    add r7, r1, r2\n    mov r2, #0\n    cmp r3, #0\n    ble _022245CC\n    mov r0, lr\n    add r0, r0, r6\n    lsl r0, r0, #6\n    add r5, r7, r0\n    add r0, r6, #0\n    mul r0, r3\n    lsl r1, r0, #1\n    ldr r0, [sp]\n    add r4, r0, r1\n    lsl r1, r2, #1\n    ldrh r0, [r5, r1]\n    strh r0, [r4, r1]\n    add r0, r2, #1\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    cmp r2, r3\n    blt _022245BC\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    mov r0, ip\n    cmp r6, r0\n    blt _022245A4\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_022245DC(void) {
    /* Original at 0x022245DC */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0x10\n    bhi _0222466A\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022245EC: ; jump table\n    mov r1, #0xca\n    lsl r1, r1, #2\n    add r1, r0, r1\n    mov r0, #0x12\n    lsl r0, r0, #4\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02224670 ; =0x00000688\n    add r1, r0, r1\n    lsl r0, r2, #6\n    add r0, r2, r0\n    lsl r0, r0, #2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02224674 ; =0x00000A98\n    add r1, r0, r1\n    mov r0, #0x32\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02224678 ; =0x00000B2E\n    add r1, r0, r1\n    mov r0, #0xc0\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _0222467C ; =0x00000E2E\n    add r1, r0, r1\n    mov r0, #0x32\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02224680 ; =0x00000EF6\n    add r1, r0, r1\n    mov r0, #0x32\n    mul r0, r2\n    add r0, r1, r0\n    bx lr\n    ldr r1, _02224670 ; =0x00000688\n    add r1, r0, r1\n    lsl r0, r2, #6\n    add r0, r2, r0\n    lsl r0, r0, #2\n    add r0, r1, r0\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02224670: .word 0x00000688\n    _02224674: .word 0x00000A98\n    _02224678: .word 0x00000B2E\n    _0222467C: .word 0x00000E2E\n    _02224680: .word 0x00000EF6"
    );
    #endif
}

void ov08_02224684(void) {
    /* Original at 0x02224684 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "cmp r2, #3\n    bne _0222468C\n    mov r0, #5\n    bx lr\n    cmp r1, #0x10\n    bhi _022246EA\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0222469C: ; jump table\n    mov r0, #0\n    bx lr\n    mov r0, #3\n    bx lr\n    mov r0, #2\n    bx lr\n    ldr r1, _022246F0 ; =0x0000114D\n    ldrb r0, [r0, r1]\n    add r0, #8\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr\n    cmp r3, #2\n    bne _022246E6\n    ldr r1, _022246F0 ; =0x0000114D\n    ldrb r0, [r0, r1]\n    add r0, #8\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _022246F0: .word 0x0000114D"
    );
    #endif
}

void ov08_022246F4(void) {
    /* Original at 0x022246F4 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    cmp r2, #0\n    bne _02224704\n    ldr r2, _02224758 ; =0x00000FBE\n    add r2, r0, r2\n    lsl r0, r3, #5\n    add r0, r2, r0\n    b _0222472C\n    cmp r2, #1\n    bne _02224712\n    ldr r2, _0222475C ; =0x0000101E\n    add r2, r0, r2\n    lsl r0, r3, #5\n    add r0, r2, r0\n    b _0222472C\n    cmp r2, #2\n    bne _02224720\n    ldr r2, _02224760 ; =0x0000107E\n    add r2, r0, r2\n    lsl r0, r3, #5\n    add r0, r2, r0\n    b _0222472C\n    cmp r2, #3\n    bne _02224754\n    ldr r2, _02224764 ; =0x000010DE\n    add r2, r0, r2\n    lsl r0, r3, #5\n    add r0, r2, r0\n    mov r2, #0\n    lsl r4, r2, #3\n    lsl r5, r2, #5\n    mov r3, #0\n    add r4, r0, r4\n    add r5, r1, r5\n    lsl r6, r3, #1\n    ldrh r7, [r4, r6]\n    add r3, r3, #1\n    lsl r3, r3, #0x10\n    add r6, r5, r6\n    lsr r3, r3, #0x10\n    strh r7, [r6, #0xc]\n    cmp r3, #4\n    blo _02224738\n    add r2, r2, #1\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    cmp r2, #4\n    blo _0222472E\n    pop {r4, r5, r6, r7}\n    bx lr\n    _02224758: .word 0x00000FBE\n    _0222475C: .word 0x0000101E\n    _02224760: .word 0x0000107E\n    _02224764: .word 0x000010DE"
    );
    #endif
}

void ov08_02224768(void) {
    /* Original at 0x02224768 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    add r5, r1, #0\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    str r0, [sp]\n    bl ov08_022245DC\n    add r3, sp, #0x10\n    add r4, r0, #0\n    ldrb r3, [r3, #0x10]\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    bl ov08_02224684\n    lsl r0, r0, #0x1c\n    lsr r2, r0, #0x10\n    ldr r0, [sp, #4]\n    ldr r6, _022247D4 ; =ov08_02225E9F\n    lsl r3, r0, #2\n    ldr r0, _022247D8 ; =ov08_02225E9E\n    ldrb r6, [r6, r3]\n    ldrb r0, [r0, r3]\n    mov r1, #0\n    mul r6, r0\n    cmp r6, #0\n    ble _022247C4\n    ldr r0, _022247DC ; =ov08_02225E9C\n    ldr r7, _022247E0 ; =0x00000FFF\n    add r3, r0, r3\n    lsl r0, r1, #1\n    ldrh r6, [r4, r0]\n    and r6, r7\n    orr r6, r2\n    strh r6, [r5, r0]\n    add r0, r1, #1\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldrb r6, [r3, #2]\n    ldrb r0, [r3, #3]\n    mul r0, r6\n    cmp r1, r0\n    blt _022247AA\n    ldr r0, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r1, r5, #0\n    bl ov08_022246F4\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _022247D4: .word ov08_02225E9F\n    _022247D8: .word ov08_02225E9E\n    _022247DC: .word ov08_02225E9C\n    _022247E0: .word 0x00000FFF"
    );
    #endif
}

void ov08_022247E4(void) {
    /* Original at 0x022247E4 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r1, [sp, #0xc]\n    str r2, [sp, #0x10]\n    str r3, [sp, #0x14]\n    add r5, r0, #0\n    ldr r0, [sp, #0xc]\n    lsl r4, r0, #2\n    ldr r0, _02224848 ; =ov08_02225E9F\n    ldrb r7, [r0, r4]\n    ldr r0, _0222484C ; =ov08_02225E9E\n    ldrb r6, [r0, r4]\n    ldr r0, [r5]\n    add r1, r6, #0\n    mul r1, r7\n    ldr r0, [r0, #0xc]\n    lsl r1, r1, #1\n    bl Heap_Alloc\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #0x18]\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    bl ov08_02224768\n    ldr r0, _02224850 ; =ov08_02225E9D\n    ldr r3, _02224854 ; =ov08_02225E9C\n    ldrb r0, [r0, r4]\n    ldrb r3, [r3, r4]\n    ldr r2, [sp, #0x18]\n    str r0, [sp]\n    str r6, [sp, #4]\n    str r7, [sp, #8]\n    ldr r0, [r5, #4]\n    mov r1, #6\n    bl LoadRectToBgTilemapRect\n    ldr r0, [r5, #4]\n    mov r1, #6\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [sp, #0x18]\n    bl Heap_Free\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02224848: .word ov08_02225E9F\n    _0222484C: .word ov08_02225E9E\n    _02224850: .word ov08_02225E9D\n    _02224854: .word ov08_02225E9C"
    );
    #endif
}

void ov08_02224858(void) {
    /* Original at 0x02224858 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    cmp r1, #6\n    blo _02224876\n    cmp r1, #0xb\n    bhi _02224876\n    add r0, #0x31\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02224876\n    add r1, #0xb\n    ldr r0, _022248CC ; =ov08_02225EE0\n    lsl r1, r1, #2\n    ldr r4, [r0, r1]\n    b _0222487C\n    ldr r0, _022248CC ; =ov08_02225EE0\n    lsl r1, r1, #2\n    ldr r4, [r0, r1]\n    cmp r4, #0\n    beq _022248C8\n    cmp r2, #0\n    beq _0222488C\n    cmp r2, #1\n    beq _02224894\n    cmp r2, #2\n    bne _0222489A\n    mov r0, #1\n    str r0, [sp]\n    mov r7, #2\n    b _0222489A\n    mov r0, #0\n    str r0, [sp]\n    mov r7, #4\n    mov r5, #0\n    ldrb r0, [r4, r5]\n    cmp r0, #0xff\n    beq _022248C8\n    ldr r1, [r6, #0x2c]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    ldr r1, [sp]\n    add r2, r7, #0\n    mov r3, #0\n    bl ScrollWindow\n    ldrb r0, [r4, r5]\n    ldr r1, [r6, #0x2c]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl ScheduleWindowCopyToVram\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #8\n    blo _0222489C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022248CC: .word ov08_02225EE0"
    );
    #endif
}

void ov08_022248D0(void) {
    /* Original at 0x022248D0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    str r2, [sp]\n    cmp r1, #6\n    blo _022248EC\n    cmp r1, #0xb\n    bhi _022248EC\n    sub r0, r1, #6\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x31\n    lsl r0, r0, #4\n    ldr r6, [r1, r0]\n    b _02224910\n    cmp r1, #4\n    bne _02224934\n    mov r7, #0x31\n    mov r4, #0\n    lsl r7, r7, #4\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r6, [r0, r7]\n    add r0, r6, #0\n    bl ManagedSprite_GetDrawFlag\n    cmp r0, #0\n    bne _02224910\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #6\n    blo _022248F6\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _0222491E\n    cmp r0, #1\n    beq _0222492A\n    cmp r0, #2\n    bne _02224934\n    add r0, r6, #0\n    mov r1, #0\n    mov r2, #2\n    bl ManagedSprite_OffsetPositionXY\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    add r0, r6, #0\n    sub r2, r1, #4\n    bl ManagedSprite_OffsetPositionXY\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov08_02224938(void) {
    /* Original at 0x02224938 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r3, _02224970 ; =0x0000113E\n    mov r5, #0\n    strb r5, [r0, r3]\n    add r4, r3, #1\n    strb r5, [r0, r4]\n    add r4, r3, #2\n    strb r1, [r0, r4]\n    add r1, r3, #3\n    ldrb r4, [r0, r1]\n    mov r1, #0xf0\n    bic r4, r1\n    lsl r1, r2, #0x1c\n    lsr r1, r1, #0x18\n    add r2, r4, #0\n    orr r2, r1\n    add r1, r3, #3\n    strb r2, [r0, r1]\n    ldrb r2, [r0, r1]\n    mov r1, #0xf\n    bic r2, r1\n    mov r1, #1\n    orr r2, r1\n    add r1, r3, #3\n    strb r2, [r0, r1]\n    pop {r4, r5}\n    bx lr\n    nop\n    _02224970: .word 0x0000113E"
    );
    #endif
}

void ov08_02224974(void) {
    /* Original at 0x02224974 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _02224A48 ; =0x00001141\n    add r4, r0, #0\n    ldrb r1, [r4, r3]\n    lsl r1, r1, #0x1c\n    lsr r1, r1, #0x1c\n    beq _02224A44\n    sub r1, r3, #3\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    beq _02224994\n    cmp r1, #1\n    beq _022249CC\n    cmp r1, #2\n    beq _02224A04\n    pop {r4, pc}\n    sub r1, r3, #1\n    add r3, #0xb\n    ldrb r1, [r4, r1]\n    ldrb r3, [r4, r3]\n    mov r2, #1\n    bl ov08_022247E4\n    mov r1, #0x45\n    lsl r1, r1, #6\n    ldrb r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #1\n    bl ov08_02224858\n    mov r1, #0x45\n    lsl r1, r1, #6\n    ldrb r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #1\n    bl ov08_022248D0\n    ldr r0, _02224A4C ; =0x0000113F\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r1, #1\n    sub r0, r0, #1\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    sub r1, r3, #1\n    add r3, #0xb\n    ldrb r1, [r4, r1]\n    ldrb r3, [r4, r3]\n    mov r2, #2\n    bl ov08_022247E4\n    mov r1, #0x45\n    lsl r1, r1, #6\n    ldrb r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #2\n    bl ov08_02224858\n    mov r1, #0x45\n    lsl r1, r1, #6\n    ldrb r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #2\n    bl ov08_022248D0\n    ldr r0, _02224A4C ; =0x0000113F\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r1, #2\n    sub r0, r0, #1\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    sub r1, r3, #1\n    add r3, #0xb\n    ldrb r1, [r4, r1]\n    ldrb r3, [r4, r3]\n    mov r2, #0\n    bl ov08_022247E4\n    mov r1, #0x45\n    lsl r1, r1, #6\n    ldrb r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov08_02224858\n    mov r1, #0x45\n    lsl r1, r1, #6\n    ldrb r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov08_022248D0\n    ldr r0, _02224A4C ; =0x0000113F\n    mov r2, #0\n    strb r2, [r4, r0]\n    sub r1, r0, #1\n    strb r2, [r4, r1]\n    add r1, r0, #2\n    ldrb r2, [r4, r1]\n    mov r1, #0xf\n    add r0, r0, #2\n    bic r2, r1\n    strb r2, [r4, r0]\n    pop {r4, pc}\n    nop\n    _02224A48: .word 0x00001141\n    _02224A4C: .word 0x0000113F"
    );
    #endif
}

void ov08_02224A50(void) {
    /* Original at 0x02224A50 */
    /* Requires manual decompilation - 120 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    beq _02224A62\n    cmp r6, #1\n    beq _02224AC0\n    cmp r6, #2\n    beq _02224B46\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    add r2, r1, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    add r0, r5, #0\n    mov r1, #2\n    mov r2, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    ldr r0, [r5]\n    ldrh r0, [r0, #0x20]\n    cmp r0, #0\n    bne _02224AA6\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #3\n    add r3, r6, #0\n    bl ov08_022247E4\n    b _02224AB2\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    mov r7, #3\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov08_02223CD4\n    cmp r0, #0\n    bne _02224AE2\n    add r1, r4, #6\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    add r2, r7, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    b _02224AF2\n    add r1, r4, #6\n    lsl r1, r1, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    mov r2, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    add r4, r4, #1\n    cmp r4, #6\n    blo _02224AC4\n    ldr r0, _02224B60 ; =0x0000114D\n    ldrb r1, [r5, r0]\n    add r0, r0, #7\n    add r1, r5, r1\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _02224B20\n    add r0, r5, #0\n    mov r1, #0xc\n    mov r2, #3\n    add r3, r6, #0\n    bl ov08_022247E4\n    add r0, r5, #0\n    mov r1, #0xd\n    mov r2, #3\n    add r3, r6, #0\n    bl ov08_022247E4\n    b _02224B38\n    add r0, r5, #0\n    mov r1, #0xc\n    mov r2, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    add r0, r5, #0\n    mov r1, #0xd\n    mov r2, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    add r0, r5, #0\n    mov r1, #0xe\n    mov r2, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0xf\n    mov r2, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    add r0, r5, #0\n    mov r1, #0x10\n    mov r2, #0\n    add r3, r6, #0\n    bl ov08_022247E4\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02224B60: .word 0x0000114D"
    );
    #endif
}

void ov08_02224B64(void) {
    Heap_Alloc(0, 0x10, 0x10);
}

void ov08_02224B7C(void) {
    Heap_Free();
}

void ov08_02224B84(void) {
    /* Original at 0x02224B84 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void ov08_02224B88(void) {
    /* Original at 0x02224B88 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #9]\n    bx lr"
    );
    #endif
}

void ov08_02224B8C(void) {
    /* Original at 0x02224B8C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov08_02224B90(void) {
    /* Original at 0x02224B90 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "strb r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov08_02224B94(void) {
    /* Original at 0x02224B94 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov08_02224B98(void) {
    /* Original at 0x02224B98 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    strb r1, [r0, #9]\n    ldrb r1, [r0, #8]\n    cmp r1, #1\n    bne _02224BBC\n    ldrb r1, [r0, #9]\n    ldr r2, [r0, #4]\n    lsl r4, r1, #3\n    add r3, r2, r4\n    ldrb r1, [r3, #3]\n    str r1, [sp]\n    ldrb r1, [r2, r4]\n    ldrb r2, [r3, #2]\n    ldrb r3, [r3, #1]\n    ldr r0, [r0]\n    bl ov12_0226BAFC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov08_02224BC0(void) {
    /* Original at 0x02224BC0 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    strb r1, [r0, #9]\n    mov r1, #0xff\n    strb r1, [r0, #0xa]\n    bx lr"
    );
    #endif
}

void ov08_02224BCC(void) {
    /* Original at 0x02224BCC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    bl ov08_02224BC0\n    mov r0, #0\n    str r5, [r4, #4]\n    mvn r0, r0\n    str r0, [r4, #0xc]\n    ldrb r0, [r4, #8]\n    cmp r0, #1\n    bne _02224BF6\n    ldr r3, [r4, #4]\n    ldrb r0, [r3, #3]\n    str r0, [sp]\n    ldrb r1, [r3]\n    ldrb r2, [r3, #2]\n    ldrb r3, [r3, #1]\n    ldr r0, [r4]\n    bl ov12_0226BAFC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov08_02224BF8(void) {
    /* Original at 0x02224BF8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov08_02224BFC(void) {
    /* Original at 0x02224BFC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldrb r1, [r0, #8]\n    cmp r1, #1\n    bne _02224C0C\n    add sp, #4\n    mov r0, #1\n    pop {r3, r4, pc}\n    ldr r1, _02224C40 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #0xf3\n    tst r1, r2\n    beq _02224C38\n    mov r1, #1\n    strb r1, [r0, #8]\n    ldrb r1, [r0, #9]\n    ldr r2, [r0, #4]\n    lsl r4, r1, #3\n    add r3, r2, r4\n    ldrb r1, [r3, #3]\n    str r1, [sp]\n    ldrb r1, [r2, r4]\n    ldrb r2, [r3, #2]\n    ldrb r3, [r3, #1]\n    ldr r0, [r0]\n    bl ov12_0226BAFC\n    ldr r0, _02224C44 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02224C40: .word gSystem\n    _02224C44: .word 0x000005DC"
    );
    #endif
}

void ov08_02224C48(void) {
    /* Original at 0x02224C48 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #3\n    bhi _02224C90\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02224C58: ; jump table\n    ldrb r1, [r0, #5]\n    mov r0, #0x80\n    tst r0, r1\n    beq _02224C90\n    mov r0, #1\n    bx lr\n    ldrb r1, [r0, #4]\n    mov r0, #0x80\n    tst r0, r1\n    beq _02224C90\n    mov r0, #1\n    bx lr\n    ldrb r1, [r0, #7]\n    mov r0, #0x80\n    tst r0, r1\n    beq _02224C90\n    mov r0, #1\n    bx lr\n    ldrb r1, [r0, #6]\n    mov r0, #0x80\n    tst r0, r1\n    beq _02224C90\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov08_02224C94(void) {
    /* Original at 0x02224C94 */
    /* Requires manual decompilation - 189 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    bl ov08_02224BFC\n    cmp r0, #0\n    bne _02224CAA\n    mov r0, #0\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, _02224E20 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _02224CCE\n    mov r1, #0\n    str r1, [sp]\n    ldrb r0, [r5, #9]\n    add r2, r1, #0\n    add r3, r1, #0\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r5, #4]\n    bl DpadMenuBox_GetNeighborInDirection\n    add r4, r0, #0\n    mov r6, #0\n    b _02224D36\n    mov r1, #0x80\n    tst r1, r0\n    beq _02224CF0\n    mov r1, #0\n    str r1, [sp]\n    ldrb r0, [r5, #9]\n    add r2, r1, #0\n    add r3, r1, #0\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, [r5, #4]\n    bl DpadMenuBox_GetNeighborInDirection\n    add r4, r0, #0\n    mov r6, #1\n    b _02224D36\n    mov r1, #0x20\n    tst r1, r0\n    beq _02224D12\n    mov r1, #0\n    str r1, [sp]\n    ldrb r0, [r5, #9]\n    add r2, r1, #0\n    add r3, r1, #0\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, [r5, #4]\n    bl DpadMenuBox_GetNeighborInDirection\n    add r4, r0, #0\n    mov r6, #2\n    b _02224D36\n    mov r1, #0x10\n    tst r0, r1\n    beq _02224D34\n    mov r1, #0\n    str r1, [sp]\n    ldrb r0, [r5, #9]\n    add r2, r1, #0\n    add r3, r1, #0\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    ldr r0, [r5, #4]\n    bl DpadMenuBox_GetNeighborInDirection\n    add r4, r0, #0\n    mov r6, #3\n    b _02224D36\n    mov r4, #0xff\n    cmp r4, #0xff\n    beq _02224DF6\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0x80\n    add r1, r4, #0\n    tst r1, r0\n    beq _02224D56\n    ldrb r1, [r5, #0xa]\n    cmp r1, #0xff\n    beq _02224D50\n    add r4, r1, #0\n    b _02224D56\n    eor r0, r4\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    mov r7, #0\n    mov r0, #1\n    ldr r1, [r5, #0xc]\n    lsl r0, r4\n    tst r0, r1\n    bne _02224D90\n    str r7, [sp, #0xc]\n    str r7, [sp]\n    str r4, [sp, #4]\n    str r6, [sp, #8]\n    ldr r0, [r5, #4]\n    add r1, r7, #0\n    add r2, r7, #0\n    add r3, r7, #0\n    bl DpadMenuBox_GetNeighborInDirection\n    mov r1, #0x7f\n    and r0, r1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    cmp r1, r4\n    beq _02224D88\n    ldrb r0, [r5, #9]\n    cmp r1, r0\n    bne _02224D8C\n    ldrb r4, [r5, #9]\n    b _02224D90\n    add r4, r1, #0\n    b _02224D58\n    ldrb r0, [r5, #9]\n    cmp r0, r4\n    beq _02224DEE\n    ldr r0, [r5, #4]\n    lsl r7, r4, #3\n    add r1, sp, #0x10\n    add r2, sp, #0x10\n    add r0, r0, r7\n    add r1, #3\n    add r2, #2\n    bl DpadMenuBox_GetPosition\n    ldr r0, [r5, #4]\n    add r1, sp, #0x10\n    add r0, r0, r7\n    add r1, #1\n    add r2, sp, #0x10\n    bl DpadMenuBox_GetDimensions\n    ldr r0, [r5, #4]\n    add r1, r6, #0\n    add r0, r0, r7\n    bl ov08_02224C48\n    cmp r0, #1\n    bne _02224DD0\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    beq _02224DD0\n    ldrb r0, [r5, #9]\n    strb r0, [r5, #0xa]\n    b _02224DD4\n    mov r0, #0xff\n    strb r0, [r5, #0xa]\n    strb r4, [r5, #9]\n    add r3, sp, #0x10\n    ldrb r0, [r3]\n    str r0, [sp]\n    ldrb r1, [r3, #3]\n    ldrb r2, [r3, #1]\n    ldrb r3, [r3, #2]\n    ldr r0, [r5]\n    bl ov12_0226BAFC\n    ldr r0, _02224E24 ; =0x000005DC\n    bl PlaySE\n    mov r0, #0\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, _02224E20 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _02224E06\n    add sp, #0x14\n    ldrb r0, [r5, #9]\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #2\n    tst r1, r0\n    beq _02224E1A\n    ldr r0, _02224E28 ; =0x000005DD\n    bl PlaySE\n    mov r0, #1\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    sub r0, r0, #3\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02224E20: .word gSystem\n    _02224E24: .word 0x000005DC\n    _02224E28: .word 0x000005DD"
    );
    #endif
}
