/* Decompiled from asm/overlay_72.s */
#include "global.h"

void ov72_022378C0(void) {
    /* Original at 0x022378C0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _022378D8 ; =_0223B820\n    mov r4, #1\n    str r4, [r3]\n    mov r4, #0\n    str r4, [r3, #4]\n    str r0, [r3, #8]\n    str r1, [r3, #0xc]\n    str r2, [r3, #0x10]\n    pop {r3, r4}\n    bx lr\n    nop\n    _022378D8: .word _0223B820"
    );
    #endif
}

void ov72_022378DC(void) {
    /* Original at 0x022378DC */
    /* Requires manual decompilation - 257 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02237B48 ; =_0223B820\n    ldr r0, [r1]\n    cmp r0, #0xc\n    bls _022378E8\n    b _02237B44\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022378F4: ; jump table\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _0223791C\n    cmp r0, #7\n    beq _02237934\n    pop {r3, pc}\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov72_02237D88\n    ldr r1, _02237B48 ; =_0223B820\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    bl ov38_0221C020\n    cmp r0, #0\n    ble _0223794A\n    ldr r0, _02237B4C ; =ov72_0223B920\n    ldrb r1, [r0, #3]\n    ldr r0, _02237B48 ; =_0223B820\n    b _02237950\n    mov r1, #1\n    ldr r0, _02237B48 ; =_0223B820\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237966\n    cmp r0, #7\n    beq _0223797E\n    pop {r3, pc}\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov72_02237D88\n    ldr r1, _02237B48 ; =_0223B820\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    bl ov38_0221C020\n    ldr r1, _02237B50 ; =0x00000A38\n    cmp r0, r1\n    bne _02237996\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0\n    str r1, [r0, #4]\n    b _022379C2\n    ldr r0, _02237B4C ; =ov72_0223B920\n    ldr r0, [r0, #8]\n    ldrb r0, [r0]\n    cmp r0, #2\n    beq _022379A6\n    cmp r0, #5\n    beq _022379B0\n    b _022379BA\n    mov r1, #2\n    ldr r0, _02237B48 ; =_0223B820\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _022379C2\n    mov r1, #1\n    ldr r0, _02237B48 ; =_0223B820\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _022379C2\n    mov r1, #4\n    ldr r0, _02237B48 ; =_0223B820\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _022379D6\n    cmp r0, #7\n    beq _022379EE\n    pop {r3, pc}\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov72_02237D88\n    ldr r1, _02237B48 ; =_0223B820\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0xc\n    ldr r2, _02237B4C ; =ov72_0223B920\n    str r1, [r0]\n    ldrb r2, [r2, #3]\n    cmp r2, #5\n    bhi _02237A2C\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _02237A08: ; jump table\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237A34\n    sub r1, #0xf\n    str r1, [r0, #4]\n    b _02237A34\n    sub r1, #0xd\n    str r1, [r0, #4]\n    b _02237A34\n    sub r1, #0xe\n    str r1, [r0, #4]\n    b _02237A34\n    mov r1, #4\n    ldr r0, _02237B48 ; =_0223B820\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237A48\n    cmp r0, #7\n    beq _02237A60\n    pop {r3, pc}\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov72_02237D88\n    ldr r1, _02237B48 ; =_0223B820\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0xc\n    ldr r2, _02237B4C ; =ov72_0223B920\n    str r1, [r0]\n    ldrb r2, [r2, #3]\n    cmp r2, #5\n    bhi _02237A9E\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _02237A7A: ; jump table\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237AA6\n    mov r1, #1\n    str r1, [r0, #4]\n    b _02237AA6\n    mov r1, #2\n    str r1, [r0, #4]\n    b _02237AA6\n    sub r1, #0xe\n    str r1, [r0, #4]\n    b _02237AA6\n    mov r1, #4\n    ldr r0, _02237B48 ; =_0223B820\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237ABA\n    cmp r0, #7\n    beq _02237AD2\n    pop {r3, pc}\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov72_02237D88\n    ldr r1, _02237B48 ; =_0223B820\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    bl ov38_0221C020\n    cmp r0, #8\n    bne _02237AE8\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237B32\n    ldr r0, _02237B4C ; =ov72_0223B920\n    ldrb r0, [r0, #3]\n    cmp r0, #5\n    bhi _02237B2A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02237AFC: ; jump table\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237B32\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #1\n    str r1, [r0, #4]\n    b _02237B32\n    ldr r0, _02237B48 ; =_0223B820\n    mov r1, #2\n    str r1, [r0, #4]\n    b _02237B32\n    mov r1, #1\n    ldr r0, _02237B48 ; =_0223B820\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237B32\n    mov r1, #4\n    ldr r0, _02237B48 ; =_0223B820\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    mov r0, #0xc\n    str r0, [r1]\n    sub r0, #0x10\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    nop\n    _02237B48: .word _0223B820\n    _02237B4C: .word ov72_0223B920\n    _02237B50: .word 0x00000A38"
    );
    #endif
}

void ov72_02237B54(void) {
    /* Original at 0x02237B54 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02237B70 ; =_0223B820\n    ldr r0, [r1]\n    cmp r0, #1\n    beq _02237B62\n    cmp r0, #0xc\n    beq _02237B66\n    b _02237B6C\n    mov r0, #1\n    bx lr\n    mov r0, #1\n    str r0, [r1]\n    bx lr\n    mov r0, #0\n    bx lr\n    _02237B70: .word _0223B820"
    );
    #endif
}

void ov72_02237B74(void) {
    /* Original at 0x02237B74 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02237B7C ; =_0223B820\n    ldr r0, [r0, #4]\n    bx lr\n    nop\n    _02237B7C: .word _0223B820"
    );
    #endif
}

void ov72_02237B80(void) {
    /* Original at 0x02237B80 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl ov38_0221BE84\n    ldr r0, _02237BC0 ; =_0223B820\n    sub r1, r4, #1\n    strb r1, [r0, #0x14]\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _02237BC4 ; =_0223B4E0\n    ldr r1, _02237BC8 ; =ov72_0223B834\n    ldr r3, _02237BCC ; =ov72_0223B923\n    mov r2, #1\n    bl ov72_02237D50\n    cmp r0, #0\n    beq _02237BAE\n    ldr r0, _02237BC0 ; =_0223B820\n    mov r1, #2\n    str r1, [r0]\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, _02237BC0 ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    sub r1, #0x11\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    add sp, #4\n    pop {r3, r4, pc}\n    _02237BC0: .word _0223B820\n    _02237BC4: .word _0223B4E0\n    _02237BC8: .word ov72_0223B834\n    _02237BCC: .word ov72_0223B923"
    );
    #endif
}

void ov72_02237BD0(void) {
    /* Original at 0x02237BD0 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, _02237C1C ; =ov72_0223B920\n    add r6, r2, #0\n    add r4, r1, #0\n    str r6, [r0, #8]\n    bl ov38_0221BE84\n    ldr r0, _02237C20 ; =_0223B820\n    sub r1, r5, #1\n    strb r1, [r0, #0x14]\n    sub r1, r4, #1\n    strb r1, [r0, #0x15]\n    ldr r0, _02237C24 ; =0x00000A38\n    ldr r1, _02237C28 ; =ov72_0223B834\n    str r0, [sp]\n    ldr r0, _02237C2C ; =ov72_0223B52C\n    mov r2, #2\n    add r3, r6, #0\n    bl ov72_02237D50\n    cmp r0, #0\n    beq _02237C0A\n    ldr r0, _02237C20 ; =_0223B820\n    mov r1, #4\n    str r1, [r0]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _02237C20 ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    sub r1, #0x11\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _02237C1C: .word ov72_0223B920\n    _02237C20: .word _0223B820\n    _02237C24: .word 0x00000A38\n    _02237C28: .word ov72_0223B834\n    _02237C2C: .word ov72_0223B52C"
    );
    #endif
}

void ov72_02237C30(void) {
    /* Original at 0x02237C30 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    bl ov38_0221BE84\n    ldr r0, _02237C94 ; =ov72_0223B834\n    add r1, r4, #0\n    mov r2, #0xe4\n    bl memcpy\n    ldr r0, _02237C98 ; =ov72_0223B900\n    sub r1, r5, #1\n    strb r1, [r0, #0x18]\n    sub r1, r6, #1\n    strb r1, [r0, #0x19]\n    ldr r3, _02237C9C ; =ov72_0223B91B\n    ldr r2, _02237CA0 ; =ov72_0223B82C\n    strb r7, [r0, #0x1a]\n    mov r1, #8\n    ldrb r0, [r2]\n    add r2, r2, #1\n    strb r0, [r3]\n    add r3, r3, #1\n    sub r1, r1, #1\n    bne _02237C5A\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _02237CA4 ; =ov72_0223B578\n    ldr r1, _02237C94 ; =ov72_0223B834\n    ldr r3, _02237CA8 ; =ov72_0223B923\n    mov r2, #0xef\n    bl ov72_02237D50\n    cmp r0, #0\n    beq _02237C82\n    ldr r0, _02237CAC ; =_0223B820\n    mov r1, #6\n    str r1, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02237CAC ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    sub r1, #0x11\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02237C94: .word ov72_0223B834\n    _02237C98: .word ov72_0223B900\n    _02237C9C: .word ov72_0223B91B\n    _02237CA0: .word ov72_0223B82C\n    _02237CA4: .word ov72_0223B578\n    _02237CA8: .word ov72_0223B923\n    _02237CAC: .word _0223B820"
    );
    #endif
}

void ov72_02237CB0(void) {
    /* Original at 0x02237CB0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov38_0221BE84\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _02237CE4 ; =ov72_0223B5C4\n    ldr r1, _02237CE8 ; =ov72_0223B834\n    ldr r3, _02237CEC ; =ov72_0223B923\n    mov r2, #0\n    bl ov72_02237D50\n    cmp r0, #0\n    beq _02237CD2\n    ldr r0, _02237CF0 ; =_0223B820\n    mov r1, #8\n    str r1, [r0]\n    pop {r3, pc}\n    ldr r0, _02237CF0 ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    sub r1, #0x11\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    nop\n    _02237CE4: .word ov72_0223B5C4\n    _02237CE8: .word ov72_0223B834\n    _02237CEC: .word ov72_0223B923\n    _02237CF0: .word _0223B820"
    );
    #endif
}

void ov72_02237CF4(void) {
    /* Original at 0x02237CF4 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x1c\n    add r4, r1, #0\n    bl OS_GetMacAddress\n    ldr r0, _02237D40 ; =ov72_0223B834\n    add r1, r5, #0\n    mov r2, #0x64\n    bl memcpy\n    ldr r0, _02237D44 ; =ov72_0223B920\n    str r4, [r0, #8]\n    bl ov38_0221BE84\n    mov r0, #8\n    str r0, [sp]\n    ldr r3, _02237D44 ; =ov72_0223B920\n    ldr r0, _02237D48 ; =ov72_0223B60C\n    ldr r1, _02237D40 ; =ov72_0223B834\n    ldr r3, [r3, #8]\n    mov r2, #0x64\n    bl ov72_02237D50\n    cmp r0, #0\n    beq _02237D30\n    ldr r0, _02237D4C ; =_0223B820\n    mov r1, #0xa\n    str r1, [r0]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02237D4C ; =_0223B820\n    mov r1, #0xc\n    str r1, [r0]\n    sub r1, #0x11\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, r4, r5, pc}\n    _02237D40: .word ov72_0223B834\n    _02237D44: .word ov72_0223B920\n    _02237D48: .word ov72_0223B60C\n    _02237D4C: .word _0223B820"
    );
    #endif
}

void ov72_02237D50(void) {
    /* Original at 0x02237D50 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    ldr r1, [sp, #0x18]\n    str r3, [sp]\n    str r1, [sp, #4]\n    add r4, r2, #0\n    ldr r1, _02237D84 ; =_0223B820\n    add r2, r5, #0\n    ldr r1, [r1, #8]\n    add r3, r4, #0\n    bl ov38_0221BEA8\n    cmp r0, #0\n    beq _02237D76\n    cmp r0, #1\n    beq _02237D7C\n    cmp r0, #2\n    b _02237D7C\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02237D84: .word _0223B820"
    );
    #endif
}

void ov72_02237D88(void) {
    /* Original at 0x02237D88 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    cmp r0, #0x20\n    bhi _02237E00\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02237D9A: ; jump table\n    mov r4, #4\n    mvn r4, r4\n    b _02237E04\n    mov r4, #4\n    mvn r4, r4\n    b _02237E04\n    mov r4, #6\n    mvn r4, r4\n    b _02237E04\n    mov r4, #6\n    mvn r4, r4\n    b _02237E04\n    mov r4, #1\n    mvn r4, r4\n    b _02237E04\n    mov r4, #1\n    mvn r4, r4\n    b _02237E04\n    mov r4, #4\n    mvn r4, r4\n    mov r0, #4\n    mvn r0, r0\n    cmp r4, r0\n    beq _02237E1C\n    bl WCM_GetPhase\n    cmp r0, #9\n    beq _02237E18\n    mov r4, #5\n    mvn r4, r4\n    bl ov00_021EC210\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void NintendoWfc_Init(void) {
    /* Original at 0x02237E20 */
    /* Requires manual decompilation - 151 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02237E36\n    cmp r0, #1\n    bne _02237E34\n    b _02237F4A\n    b _02237F60\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _02237F68 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _02237F6C ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r2, #5\n    mov r0, #3\n    mov r1, #0x43\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    bl LoadDwcOverlay\n    bl LoadOVY38\n    mov r0, #0x43\n    bl sub_02039FD8\n    ldr r1, _02237F70 ; =0x000013A4\n    add r0, r6, #0\n    mov r2, #0x43\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _02237F70 ; =0x000013A4\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #0x43\n    bl BgConfig_Alloc\n    str r0, [r4, #4]\n    ldr r0, _02237F74 ; =ov72_0223B92C\n    add r2, sp, #0\n    ldr r3, _02237F78 ; =ov72_0223B354\n    str r4, [r0, #4]\n    add r7, r2, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r7, #0\n    bl SetBothScreensModesAndDisable\n    mov r0, #0xb\n    mov r1, #0x20\n    mov r2, #0x43\n    bl MessageFormat_New_Custom\n    mov r1, #0xbd\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r2, _02237F7C ; =0x00000306\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x43\n    bl NewMsgDataFromNarc\n    ldr r1, _02237F80 ; =0x00000BD4\n    ldr r2, _02237F84 ; =0x0000030A\n    str r0, [r4, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x43\n    bl NewMsgDataFromNarc\n    ldr r1, _02237F88 ; =0x00000BD8\n    str r0, [r4, r1]\n    mov r2, #0x32\n    mov r0, #0\n    mov r1, #0x1b\n    lsl r2, r2, #4\n    mov r3, #0x43\n    bl NewMsgDataFromNarc\n    ldr r1, _02237F8C ; =0x00000BDC\n    str r0, [r4, r1]\n    mov r0, #4\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov72_02238144\n    add r0, r4, #0\n    bl ov72_022387D8\n    mov r1, #0\n    mov r0, #0x34\n    add r2, r1, #0\n    bl Sound_SetSceneAndPlayBGM\n    ldr r1, _02237F90 ; =0x00020020\n    mov r0, #0x43\n    bl Heap_Alloc\n    str r0, [r4, #0x24]\n    add r0, #0x1f\n    mov r1, #0x1f\n    bic r0, r1\n    mov r1, #2\n    lsl r1, r1, #0x10\n    mov r2, #0\n    bl NNS_FndCreateExpHeapEx\n    str r0, [r4, #0x28]\n    ldr r1, _02237F94 ; =0x0000047D\n    mov r0, #0xb\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r2, _02237F98 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    mov r0, #1\n    str r0, [r5]\n    b _02237F60\n    bl sub_02034D8C\n    mov r0, #4\n    mov r1, #0x43\n    bl FontID_Alloc\n    mov r0, #0\n    str r0, [r5]\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02237F68: .word 0xFFFFE0FF\n    _02237F6C: .word 0x04001000\n    _02237F70: .word 0x000013A4\n    _02237F74: .word ov72_0223B92C\n    _02237F78: .word ov72_0223B354\n    _02237F7C: .word 0x00000306\n    _02237F80: .word 0x00000BD4\n    _02237F84: .word 0x0000030A\n    _02237F88: .word 0x00000BD8\n    _02237F8C: .word 0x00000BDC\n    _02237F90: .word 0x00020020\n    _02237F94: .word 0x0000047D\n    _02237F98: .word 0x04000304"
    );
    #endif
}

void NintendoWfc_Main(void) {
    /* Original at 0x02237F9C */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    add r5, r0, #0\n    bl ov00_021ECB40\n    bl ov72_022378DC\n    bl ov00_021ECB40\n    ldr r1, [r4]\n    cmp r1, #5\n    bhi _02238044\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02237FC4: ; jump table\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _02238044\n    ldr r1, [r5, #0x28]\n    ldr r0, _02238054 ; =ov72_0223B92C\n    str r1, [r0]\n    ldr r0, _02238058 ; =ov72_02238778\n    ldr r1, _0223805C ; =ov72_022387A0\n    bl ov00_021EC294\n    mov r0, #1\n    str r0, [r4]\n    b _02238044\n    ldr r3, [r5, #0x10]\n    mov r2, #0xc\n    add r6, r3, #0\n    mul r6, r2\n    ldr r2, _02238060 ; =ov72_0223B654\n    add r0, r5, #0\n    ldr r2, [r2, r6]\n    blx r2\n    str r0, [r4]\n    b _02238044\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02238044\n    mov r0, #3\n    str r0, [r4]\n    b _02238044\n    ldr r3, [r5, #0x10]\n    mov r2, #0xc\n    add r6, r3, #0\n    mul r6, r2\n    ldr r2, _02238064 ; =ov72_0223B658\n    add r0, r5, #0\n    ldr r2, [r2, r6]\n    blx r2\n    str r0, [r4]\n    b _02238044\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _02238044\n    ldr r3, [r5, #0x10]\n    mov r2, #0xc\n    add r6, r3, #0\n    mul r6, r2\n    ldr r2, _02238068 ; =ov72_0223B65C\n    ldr r1, [r4]\n    ldr r2, [r2, r6]\n    add r0, r5, #0\n    blx r2\n    str r0, [r4]\n    b _02238044\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _0223806C ; =0x00000BF8\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    beq _02238050\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _02238054: .word ov72_0223B92C\n    _02238058: .word ov72_02238778\n    _0223805C: .word ov72_022387A0\n    _02238060: .word ov72_0223B654\n    _02238064: .word ov72_0223B658\n    _02238068: .word ov72_0223B65C\n    _0223806C: .word 0x00000BF8"
    );
    #endif
}

void NintendoWfc_Exit(void) {
    /* Original at 0x02238070 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _02238086\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #4\n    bl FontID_Release\n    ldr r0, [r4, #0x24]\n    bl Heap_Free\n    bl UnloadOVY38\n    bl UnloadDwcOverlay\n    add r0, r4, #0\n    bl ov72_02238800\n    ldr r0, _022380F0 ; =0x00000BDC\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _022380F4 ; =0x00000BD8\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _022380F8 ; =0x00000BD4\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    mov r0, #0xbd\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl MessageFormat_Delete\n    add r0, r4, #0\n    bl ov72_02238160\n    bl sub_02034DE0\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x43\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _022380F0: .word 0x00000BDC\n    _022380F4: .word 0x00000BD8\n    _022380F8: .word 0x00000BD4"
    );
    #endif
}

void ov72_022380FC(void) {
    /* Original at 0x022380FC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl GF_RunVramTransferTasks\n    ldr r0, [r4, #4]\n    bl DoScheduledBgGpuUpdates\n    bl OamManager_ApplyAndResetBuffers\n    ldr r3, _0223811C ; =0x027E0000\n    ldr r1, _02238120 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    _0223811C: .word 0x027E0000\n    _02238120: .word 0x00003FF8"
    );
    #endif
}

void ov72_02238124(void) {
    GfGfx_SetBanks(5);
}

void ov72_02238144(void) {
    /* Original at 0x02238144 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl OverlayManager_GetArgs\n    mov r1, #0\n    str r0, [r4]\n    add r0, r4, #0\n    add r2, r1, #0\n    str r1, [r4, #0x10]\n    bl ov72_022387D0\n    pop {r4, pc}"
    );
    #endif
}

void ov72_02238160(void) {
    /* Original at 0x02238160 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov72_02238164(void) {
    /* Original at 0x02238164 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _02238190 ; =ov72_0223B344\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl ObjCharTransfer_Init\n    mov r0, #0x14\n    mov r1, #0x43\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _02238190: .word ov72_0223B344"
    );
    #endif
}

void ov72_02238194(void) {
    /* Original at 0x02238194 */
    /* Requires manual decompilation - 253 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #0xef\n    mov r1, #0x43\n    bl NARC_New\n    str r0, [sp, #0x14]\n    mov r0, #0xee\n    mov r1, #0x43\n    bl NARC_New\n    add r7, r0, #0\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r2, #0x43\n    str r2, [sp, #0x10]\n    add r2, r0, #0\n    bl OamManager_Create\n    ldr r1, _022383AC ; =0x00000BFC\n    mov r0, #0x14\n    add r1, r5, r1\n    mov r2, #0x43\n    bl G2dRenderer_Init\n    ldr r1, _022383B0 ; =0x00000BF8\n    mov r2, #1\n    str r0, [r5, r1]\n    add r0, r1, #4\n    add r0, r5, r0\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r6, #0\n    add r4, r5, #0\n    mov r0, #3\n    add r1, r6, #0\n    mov r2, #0x43\n    bl Create2DGfxResObjMan\n    ldr r1, _022383B4 ; =0x00000D24\n    add r6, r6, #1\n    str r0, [r4, r1]\n    add r4, r4, #4\n    cmp r6, #4\n    blt _022381EC\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x43\n    str r0, [sp, #8]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    mov r2, #1\n    bl AddCharResObjFromOpenNarc\n    ldr r1, _022383B8 ; =0x00000D34\n    mov r2, #0\n    str r0, [r5, r1]\n    str r2, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x43\n    sub r1, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    add r3, r2, #0\n    bl AddPlttResObjFromOpenNarc\n    ldr r1, _022383BC ; =0x00000D38\n    mov r3, #0\n    str r0, [r5, r1]\n    str r3, [sp]\n    mov r2, #2\n    str r2, [sp, #4]\n    mov r0, #0x43\n    sub r1, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _022383C0 ; =0x00000D3C\n    mov r3, #0\n    str r0, [r5, r1]\n    str r3, [sp]\n    mov r2, #3\n    str r2, [sp, #4]\n    mov r0, #0x43\n    sub r1, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x35\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x43\n    sub r1, #0x1c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    mov r2, #5\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    ldr r1, _022383C4 ; =0x00000D44\n    mov r2, #4\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x43\n    sub r1, #0x1c\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    ldr r1, _022383C8 ; =0x00000D48\n    mov r2, #6\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x43\n    sub r1, #0x1c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _022383CC ; =0x00000D4C\n    mov r2, #7\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x43\n    sub r1, #0x1c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r7, #0\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0xd5\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x43\n    sub r1, #0x2c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x14]\n    mov r2, #0xc\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    ldr r1, _022383D0 ; =0x00000D54\n    mov r2, #0xb\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x43\n    sub r1, #0x2c\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x14]\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    ldr r1, _022383D4 ; =0x00000D58\n    mov r2, #0xd\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x43\n    sub r1, #0x2c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x14]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _022383D8 ; =0x00000D5C\n    mov r2, #0xe\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x43\n    sub r1, #0x2c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x14]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0xd6\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    sub r1, #0x2c\n    ldr r0, [r5, r1]\n    bl sub_0200ACF0\n    ldr r0, _022383C4 ; =0x00000D44\n    ldr r0, [r5, r0]\n    bl sub_0200ACF0\n    ldr r0, _022383D0 ; =0x00000D54\n    ldr r0, [r5, r0]\n    bl sub_0200ACF0\n    ldr r0, _022383BC ; =0x00000D38\n    ldr r0, [r5, r0]\n    bl sub_0200AF94\n    ldr r0, _022383C8 ; =0x00000D48\n    ldr r0, [r5, r0]\n    bl sub_0200AF94\n    ldr r0, _022383D4 ; =0x00000D58\n    ldr r0, [r5, r0]\n    bl sub_0200AF94\n    add r0, r7, #0\n    bl NARC_Delete\n    ldr r0, [sp, #0x14]\n    bl NARC_Delete\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022383AC: .word 0x00000BFC\n    _022383B0: .word 0x00000BF8\n    _022383B4: .word 0x00000D24\n    _022383B8: .word 0x00000D34\n    _022383BC: .word 0x00000D38\n    _022383C0: .word 0x00000D3C\n    _022383C4: .word 0x00000D44\n    _022383C8: .word 0x00000D48\n    _022383CC: .word 0x00000D4C\n    _022383D0: .word 0x00000D54\n    _022383D4: .word 0x00000D58\n    _022383D8: .word 0x00000D5C"
    );
    #endif
}

void ov72_022383DC(void) {
    /* Original at 0x022383DC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, _02238404 ; =0x00000BF8\n    ldr r1, [r1, r4]\n    str r1, [r0]\n    str r2, [r0, #4]\n    mov r2, #0\n    mov r1, #1\n    str r2, [r0, #0x10]\n    lsl r1, r1, #0xc\n    str r1, [r0, #0x14]\n    str r1, [r0, #0x18]\n    str r1, [r0, #0x1c]\n    strh r2, [r0, #0x20]\n    mov r1, #1\n    str r1, [r0, #0x24]\n    str r3, [r0, #0x28]\n    mov r1, #0x43\n    str r1, [r0, #0x2c]\n    pop {r3, r4}\n    bx lr\n    _02238404: .word 0x00000BF8"
    );
    #endif
}

void ov72_02238408(void) {
    /* Original at 0x02238408 */
    /* Requires manual decompilation - 262 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x5c\n    mov r1, #0\n    add r6, r0, #0\n    str r1, [sp]\n    sub r0, r1, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    ldr r2, _02238638 ; =0x00000D24\n    str r1, [sp, #0x10]\n    ldr r0, [r6, r2]\n    add r3, r1, #0\n    str r0, [sp, #0x14]\n    add r0, r2, #4\n    ldr r0, [r6, r0]\n    str r0, [sp, #0x18]\n    add r0, r2, #0\n    add r0, #8\n    ldr r0, [r6, r0]\n    str r0, [sp, #0x1c]\n    add r0, r2, #0\n    add r0, #0xc\n    ldr r0, [r6, r0]\n    add r2, #0x40\n    str r0, [sp, #0x20]\n    str r1, [sp, #0x24]\n    add r0, r6, r2\n    add r2, r1, #0\n    str r1, [sp, #0x28]\n    bl CreateSpriteResourcesHeader\n    mov r1, #1\n    str r1, [sp]\n    sub r0, r1, #2\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r3, _02238638 ; =0x00000D24\n    str r0, [sp, #0x10]\n    ldr r2, [r6, r3]\n    str r2, [sp, #0x14]\n    add r2, r3, #4\n    ldr r2, [r6, r2]\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    add r2, #8\n    ldr r2, [r6, r2]\n    str r2, [sp, #0x1c]\n    add r2, r3, #0\n    add r2, #0xc\n    ldr r2, [r6, r2]\n    add r3, #0x64\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r6, r3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl CreateSpriteResourcesHeader\n    mov r1, #2\n    str r1, [sp]\n    sub r0, r1, #3\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r3, _02238638 ; =0x00000D24\n    str r0, [sp, #0x10]\n    ldr r2, [r6, r3]\n    str r2, [sp, #0x14]\n    add r2, r3, #4\n    ldr r2, [r6, r2]\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    add r2, #8\n    ldr r2, [r6, r2]\n    str r2, [sp, #0x1c]\n    add r2, r3, #0\n    add r2, #0xc\n    ldr r2, [r6, r2]\n    add r3, #0x88\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r6, r3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r2, _0223863C ; =0x00000D64\n    add r0, sp, #0x2c\n    add r1, r6, #0\n    add r2, r6, r2\n    mov r3, #2\n    bl ov72_022383DC\n    ldr r4, _02238640 ; =ov72_0223B364\n    mov r7, #0\n    add r5, r6, #0\n    ldrh r0, [r4]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x34]\n    ldrh r0, [r4, #2]\n    lsl r1, r0, #0xc\n    mov r0, #1\n    lsl r0, r0, #0x14\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    ldr r1, _02238644 ; =0x00000DF4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _02238644 ; =0x00000DF4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02238644 ; =0x00000DF4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    add r7, r7, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r7, #3\n    blt _022384D4\n    ldr r2, _02238648 ; =0x00000D88\n    add r0, sp, #0x2c\n    add r1, r6, #0\n    add r2, r6, r2\n    mov r3, #2\n    bl ov72_022383DC\n    mov r0, #2\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x34]\n    ldr r0, _0223864C ; =0x00151000\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    mov r1, #0xe\n    lsl r1, r1, #8\n    str r0, [r6, r1]\n    ldr r0, [r6, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0xe\n    lsl r0, r0, #8\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xe\n    lsl r0, r0, #8\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #6\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x34]\n    ldr r0, _02238650 ; =0x00129000\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    ldr r1, _02238654 ; =0x00000E04\n    str r0, [r6, r1]\n    ldr r0, [r6, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _02238654 ; =0x00000E04\n    mov r1, #0\n    ldr r0, [r6, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02238654 ; =0x00000E04\n    mov r1, #0\n    ldr r0, [r6, r0]\n    bl Sprite_SetDrawFlag\n    ldr r4, _02238658 ; =ov72_0223B338\n    mov r7, #0\n    add r5, r6, #0\n    ldrh r0, [r4]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x34]\n    ldrh r0, [r4, #2]\n    lsl r1, r0, #0xc\n    mov r0, #1\n    lsl r0, r0, #0x14\n    add r0, r1, r0\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    ldr r1, _0223865C ; =0x00000E08\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _0223865C ; =0x00000E08\n    mov r1, #3\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0223865C ; =0x00000E08\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetPriority\n    ldr r0, _0223865C ; =0x00000E08\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    add r7, r7, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r7, #3\n    blt _02238592\n    ldr r2, _02238660 ; =0x00000DAC\n    add r0, sp, #0x2c\n    add r1, r6, #0\n    add r2, r6, r2\n    mov r3, #2\n    bl ov72_022383DC\n    mov r0, #2\n    lsl r0, r0, #0x12\n    str r0, [sp, #0x34]\n    ldr r0, _0223864C ; =0x00151000\n    str r0, [sp, #0x38]\n    add r0, sp, #0x2c\n    bl Sprite_CreateAffine\n    ldr r1, _02238664 ; =0x00000E14\n    str r0, [r6, r1]\n    ldr r0, [r6, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _02238664 ; =0x00000E14\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02238664 ; =0x00000E14\n    mov r1, #0\n    ldr r0, [r6, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    bl sub_0203A880\n    add sp, #0x5c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02238638: .word 0x00000D24\n    _0223863C: .word 0x00000D64\n    _02238640: .word ov72_0223B364\n    _02238644: .word 0x00000DF4\n    _02238648: .word 0x00000D88\n    _0223864C: .word 0x00151000\n    _02238650: .word 0x00129000\n    _02238654: .word 0x00000E04\n    _02238658: .word ov72_0223B338\n    _0223865C: .word 0x00000E08\n    _02238660: .word 0x00000DAC\n    _02238664: .word 0x00000E14"
    );
    #endif
}

void ov72_02238668(void) {
    /* Original at 0x02238668 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl YesNoPrompt_HandleInput\n    add r4, r0, #0\n    beq _0223867A\n    add r0, r5, #0\n    bl YesNoPrompt_Destroy\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov72_02238680(void) {
    /* Original at 0x02238680 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x1c]\n    str r2, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void ov72_02238688(void) {
    /* Original at 0x02238688 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r5, r2, #0\n    cmp r1, #0\n    ble _022386A6\n    lsl r0, r1, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _022386B4\n    lsl r0, r1, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp]\n    cmp r5, #0\n    ble _022386D0\n    lsl r0, r5, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _022386DE\n    lsl r0, r5, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov72_022386F4(void) {
    /* Original at 0x022386F4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, _02238728 ; =ov72_0223B3A4\n    lsl r3, r4, #2\n    ldr r2, _0223872C ; =ov72_0223B3A6\n    ldrh r1, [r1, r3]\n    ldrh r3, [r2, r3]\n    mov r2, #1\n    lsl r2, r2, #8\n    add r2, r3, r2\n    add r5, r0, #0\n    bl ov72_02238688\n    cmp r4, #0xa\n    bge _0223871C\n    add r0, r5, #0\n    mov r1, #1\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #2\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, r4, r5, pc}\n    nop\n    _02238728: .word ov72_0223B3A4\n    _0223872C: .word ov72_0223B3A6"
    );
    #endif
}

void ov72_02238730(void) {
    ov72_02238688(0xc);
}

void ov72_02238750(void) {
    /* Original at 0x02238750 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r2, #0\n    mov r5, #0xc\n    lsl r4, r1, #2\n    mul r3, r5\n    ldr r2, _02238770 ; =ov72_0223B366\n    ldr r1, _02238774 ; =ov72_0223B364\n    add r2, r2, r3\n    add r1, r1, r3\n    ldrh r2, [r4, r2]\n    add r5, #0xf4\n    ldrh r1, [r4, r1]\n    add r2, r2, r5\n    bl ov72_02238688\n    pop {r3, r4, r5, pc}\n    _02238770: .word ov72_0223B366\n    _02238774: .word ov72_0223B364"
    );
    #endif
}

void ov72_02238778(void) {
    /* Original at 0x02238778 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl OS_DisableInterrupts\n    add r6, r0, #0\n    ldr r0, _0223879C ; =ov72_0223B92C\n    add r1, r5, #0\n    ldr r0, [r0]\n    add r2, r4, #0\n    bl NNS_FndAllocFromExpHeapEx\n    add r4, r0, #0\n    add r0, r6, #0\n    bl OS_RestoreInterrupts\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _0223879C: .word ov72_0223B92C"
    );
    #endif
}

void ov72_022387A0(void) {
    /* Original at 0x022387A0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    beq _022387BC\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    ldr r0, _022387C0 ; =ov72_0223B92C\n    add r1, r5, #0\n    ldr r0, [r0]\n    bl NNS_FndFreeToExpHeap\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    pop {r3, r4, r5, pc}\n    nop\n    _022387C0: .word ov72_0223B92C"
    );
    #endif
}

void ov72_022387C4(void) {
    ov00_021EC9D4();
}

void ov72_022387D0(void) {
    /* Original at 0x022387D0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x14]\n    str r2, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov72_022387D8(void) {
    /* Original at 0x022387D8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_02238124\n    bl ov72_02238164\n    add r0, r4, #0\n    bl ov72_02238194\n    add r0, r4, #0\n    bl ov72_02238408\n    ldr r0, _022387FC ; =ov72_022380FC\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    pop {r4, pc}\n    nop\n    _022387FC: .word ov72_022380FC"
    );
    #endif
}

void ov72_02238800(void) {
    /* Original at 0x02238800 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _02238854 ; =0x00000D34\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    ldr r0, _02238858 ; =0x00000D44\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    ldr r0, _0223885C ; =0x00000D38\n    ldr r0, [r6, r0]\n    bl sub_0200B0A8\n    ldr r0, _02238860 ; =0x00000D48\n    ldr r0, [r6, r0]\n    bl sub_0200B0A8\n    ldr r7, _02238864 ; =0x00000D24\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5, r7]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0223882A\n    ldr r0, _02238868 ; =0x00000BF8\n    ldr r0, [r6, r0]\n    bl SpriteList_Delete\n    ldr r0, _02238868 ; =0x00000BF8\n    mov r1, #0\n    str r1, [r6, r0]\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    pop {r3, r4, r5, r6, r7, pc}\n    _02238854: .word 0x00000D34\n    _02238858: .word 0x00000D44\n    _0223885C: .word 0x00000D38\n    _02238860: .word 0x00000D48\n    _02238864: .word 0x00000D24\n    _02238868: .word 0x00000BF8"
    );
    #endif
}

void ov72_0223886C(void) {
    /* Original at 0x0223886C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov72_02239040\n    mov r0, #8\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x43\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4, #4]\n    bl ov72_022389C8\n    add r0, r4, #0\n    bl ov72_02238BEC\n    add r0, r4, #0\n    bl ov72_02238EE4\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0]\n    bl sub_0202D488\n    add r1, r4, #0\n    add r1, #0x90\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0x90\n    ldr r1, [r0]\n    add r0, r4, #0\n    add r0, #0x94\n    str r1, [r0]\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x9c\n    str r1, [r0]\n    ldr r0, _02238940 ; =0x00000F4C\n    mov r1, #0\n    str r1, [r4, r0]\n    bl ov00_021EC5B4\n    cmp r0, #0\n    bne _0223892E\n    ldr r1, [r4]\n    ldr r0, [r1, #0x24]\n    cmp r0, #0\n    beq _02238922\n    ldr r0, [r1, #0xc]\n    bl sub_02039418\n    ldr r0, _02238944 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    ldr r1, _02238948 ; =0x00000BD8\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r3, r2, #0\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #2\n    bl ov72_02238680\n    add r0, r4, #0\n    bl ov72_0223A420\n    b _0223893A\n    mov r0, #4\n    bl Sys_ClearSleepDisableFlag\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    b _0223893A\n    ldr r0, [r4]\n    ldr r0, [r0, #0xc]\n    bl sub_02039418\n    mov r0, #0x33\n    str r0, [r4, #0x1c]\n    mov r0, #2\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _02238940: .word 0x00000F4C\n    _02238944: .word 0x00000F0F\n    _02238948: .word 0x00000BD8"
    );
    #endif
}

void ov72_0223894C(void) {
    /* Original at 0x0223894C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov72_022387C4\n    bl sub_0203A930\n    ldr r4, [r5, #0x1c]\n    ldr r1, _02238978 ; =ov72_0223B660\n    lsl r2, r4, #2\n    ldr r1, [r1, r2]\n    add r0, r5, #0\n    blx r1\n    ldr r1, [r5, #0x1c]\n    cmp r4, r1\n    beq _02238976\n    mov r1, #0xfd\n    mov r2, #0\n    lsl r1, r1, #4\n    strh r2, [r5, r1]\n    add r1, r1, #2\n    strh r2, [r5, r1]\n    pop {r3, r4, r5, pc}\n    _02238978: .word ov72_0223B660"
    );
    #endif
}

void ov72_0223897C(void) {
    /* Original at 0x0223897C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _022389C0 ; =0x00000FD8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02238996\n    bl SysTask_Destroy\n    ldr r0, _022389C0 ; =0x00000FD8\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov72_02239098\n    add r0, r4, #0\n    bl ov72_02238FFC\n    ldr r0, [r4, #4]\n    bl ov72_02238AEC\n    ldr r0, _022389C4 ; =0x00000FDC\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x14]\n    str r0, [r4, #0x10]\n    cmp r0, #0\n    bne _022389BA\n    mov r0, #5\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _022389C0: .word 0x00000FD8\n    _022389C4: .word 0x00000FDC"
    );
    #endif
}

void ov72_022389C8(void) {
    /* Original at 0x022389C8 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x8c\n    ldr r5, _02238AD8 ; =ov72_0223B42C\n    add r4, r0, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0x70\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02238ADC ; =ov72_0223B410\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r5, _02238AE0 ; =ov72_0223B448\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02238AE4 ; =ov72_0223B3D8\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    ldr r5, _02238AE8 ; =ov72_0223B3F4\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #6\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x43\n    bl BG_ClearCharDataRange\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x43\n    bl BG_ClearCharDataRange\n    mov r0, #6\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x43\n    bl BG_ClearCharDataRange\n    add sp, #0x8c\n    pop {r4, r5, pc}\n    nop\n    _02238AD8: .word ov72_0223B42C\n    _02238ADC: .word ov72_0223B410\n    _02238AE0: .word ov72_0223B448\n    _02238AE4: .word ov72_0223B3D8\n    _02238AE8: .word ov72_0223B3F4"
    );
    #endif
}

void ov72_02238AEC(void) {
    /* Original at 0x02238AEC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    add r0, r4, #0\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    pop {r4, pc}"
    );
    #endif
}

void ov72_02238B18(void) {
    /* Original at 0x02238B18 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r4, [r5, #4]\n    cmp r1, #0\n    bne _02238B86\n    mov r0, #0x58\n    mov r1, #0x43\n    bl NARC_New\n    mov r1, #1\n    lsl r1, r1, #8\n    str r1, [sp]\n    mov r1, #0x43\n    str r1, [sp, #4]\n    mov r1, #3\n    mov r2, #4\n    mov r3, #0\n    add r6, r0, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x43\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0xb\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    mov r0, #6\n    str r1, [sp]\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x43\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0xc\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r0, _02238BE8 ; =0x00001304\n    mov r1, #0\n    str r1, [r5, r0]\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    mov r0, #0xee\n    mov r1, #0x43\n    bl NARC_New\n    ldr r1, _02238BE8 ; =0x00001304\n    mov r2, #1\n    str r2, [r5, r1]\n    mov r1, #0x40\n    str r1, [sp]\n    mov r1, #0x43\n    str r1, [sp, #4]\n    mov r1, #8\n    mov r2, #4\n    mov r3, #0\n    add r6, r0, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x43\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #9\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    mov r0, #6\n    str r1, [sp]\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x43\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0xa\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _02238BE8: .word 0x00001304"
    );
    #endif
}

void ov72_02238BEC(void) {
    /* Original at 0x02238BEC */
    /* Requires manual decompilation - 265 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    str r0, [sp, #0x10]\n    ldr r4, [r0, #4]\n    mov r0, #0x58\n    mov r1, #0x43\n    bl NARC_New\n    mov r2, #0\n    str r2, [sp]\n    mov r1, #0x43\n    str r1, [sp, #4]\n    mov r1, #3\n    add r3, r2, #0\n    str r0, [sp, #0x2c]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x43\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    mov r1, #3\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x43\n    bl LoadFontPal1\n    mov r1, #0x1a\n    mov r0, #4\n    lsl r1, r1, #4\n    mov r2, #0x43\n    bl LoadFontPal1\n    ldr r0, [sp, #0x10]\n    ldr r0, [r0]\n    ldr r0, [r0, #0x10]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x43\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl LoadUserFrameGfx2\n    ldr r0, [sp, #0x10]\n    ldr r0, [r0]\n    ldr r0, [r0, #0x10]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x43\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #1\n    mov r3, #0xe\n    bl LoadUserFrameGfx2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x43\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x43\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #2\n    add r2, r4, #0\n    mov r3, #1\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    mov r0, #6\n    str r1, [sp]\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x43\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #6\n    add r2, r4, #0\n    mov r3, #1\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x43\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #0xb\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    mov r0, #6\n    str r1, [sp]\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x43\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #0xc\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    add r1, r0, #0\n    bl BG_SetMaskColor\n    mov r0, #4\n    mov r1, #0\n    bl BG_SetMaskColor\n    mov r2, #0x33\n    ldr r1, _02238E28 ; =0x00000FD8\n    ldr r0, [sp, #0x10]\n    lsl r2, r2, #4\n    add r0, r0, r1\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, [sp, #0x2c]\n    mov r1, #5\n    add r2, sp, #0x38\n    mov r3, #0x43\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    add r4, r0, #0\n    ldr r0, [sp, #0x38]\n    mov r2, #0xfe\n    ldr r1, [sp, #0x10]\n    lsl r2, r2, #4\n    add r1, r1, r2\n    ldr r0, [r0, #0xc]\n    mov r2, #0x80\n    bl MIi_CpuCopy16\n    ldr r0, [sp, #0x38]\n    ldr r2, _02238E2C ; =0x00001060\n    ldr r1, [sp, #0x10]\n    ldr r0, [r0, #0xc]\n    add r1, r1, r2\n    mov r2, #0x80\n    bl MIi_CpuCopy16\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    ldr r1, _02238E2C ; =0x00001060\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    sub r1, #0x80\n    add r0, r0, r1\n    str r0, [sp, #0x14]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x28]\n    add r0, r0, #1\n    lsl r1, r0, #5\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x24]\n    cmp r0, #0x15\n    blt _02238D7A\n    bl GF_AssertFail\n    ldr r0, [sp, #0x30]\n    mov r7, #1\n    add r4, r0, #2\n    ldr r0, [sp, #0x18]\n    add r6, r0, #2\n    ldr r0, [sp, #0x14]\n    add r5, r0, #2\n    ldr r0, [sp, #0x20]\n    asr r0, r0, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x34]\n    mov r0, #0xfe\n    lsl r0, r0, #4\n    ldrh r0, [r4, r0]\n    ldr r3, [sp, #0x34]\n    add r1, r6, #0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r2, #1\n    bl BlendPalette\n    add r7, r7, #1\n    add r4, r4, #2\n    add r6, r6, #2\n    add r5, r5, #2\n    cmp r7, #0x10\n    blt _02238D92\n    ldr r0, [sp, #0x18]\n    add r0, #0x20\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x24]\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x1c]\n    cmp r0, #1\n    beq _02238DDE\n    mov r0, #3\n    ldr r1, [sp, #0x20]\n    lsl r0, r0, #8\n    add r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [sp, #0x20]\n    cmp r1, r0\n    blt _02238D70\n    str r0, [sp, #0x20]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02238D70\n    ldr r0, [sp, #0x14]\n    add r0, #0x20\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x28]\n    add r0, r0, #1\n    str r0, [sp, #0x28]\n    cmp r0, #3\n    blt _02238D5E\n    ldr r1, _02238E2C ; =0x00001060\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    mov r1, #0x2a\n    lsl r1, r1, #4\n    bl DC_FlushRange\n    ldr r1, _02238E30 ; =0x00000FDC\n    ldr r0, [sp, #0x10]\n    mov r2, #1\n    str r2, [r0, r1]\n    ldr r2, _02238E34 ; =0x00001304\n    mov r3, #0\n    str r3, [r0, r2]\n    sub r2, r1, #4\n    ldr r1, [sp, #0x10]\n    ldr r0, _02238E38 ; =ov72_02238E3C\n    add r1, r1, r2\n    mov r2, #0x14\n    bl SysTask_CreateOnVBlankQueue\n    ldr r2, _02238E28 ; =0x00000FD8\n    ldr r1, [sp, #0x10]\n    str r0, [r1, r2]\n    ldr r0, [sp, #0x2c]\n    bl NARC_Delete\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _02238E28: .word 0x00000FD8\n    _02238E2C: .word 0x00001060\n    _02238E30: .word 0x00000FDC\n    _02238E34: .word 0x00001304\n    _02238E38: .word ov72_02238E3C"
    );
    #endif
}

void ov72_02238E3C(void) {
    /* Original at 0x02238E3C */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _02238EDA\n    ldr r1, _02238EDC ; =0x0000032B\n    mov r0, #1\n    ldrb r2, [r4, r1]\n    eor r2, r0\n    strb r2, [r4, r1]\n    ldrb r2, [r4, r1]\n    tst r0, r2\n    bne _02238EDA\n    add r0, r1, #1\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bhi _02238E72\n    sub r0, r1, #3\n    ldrsh r0, [r4, r0]\n    add r2, r4, #0\n    add r2, #0x88\n    lsl r0, r0, #5\n    add r0, r2, r0\n    mov r1, #0\n    mov r2, #0x20\n    bl GX_LoadBGPltt\n    mov r0, #0xcb\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02238E80\n    cmp r0, #2\n    bne _02238E96\n    mov r0, #0xca\n    lsl r0, r0, #2\n    ldrsh r0, [r4, r0]\n    add r1, r4, #0\n    add r1, #0x88\n    lsl r0, r0, #5\n    add r0, r1, r0\n    mov r1, #0\n    mov r2, #0x20\n    bl GXS_LoadBGPltt\n    ldr r0, _02238EE0 ; =0x0000032A\n    ldrsb r1, [r4, r0]\n    cmp r1, #0\n    bne _02238EBE\n    sub r1, r0, #2\n    ldrsh r1, [r4, r1]\n    add r2, r1, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsh r1, [r4, r1]\n    cmp r1, #0x15\n    blt _02238EDA\n    mov r2, #0x13\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsb r2, [r4, r0]\n    mov r1, #1\n    eor r1, r2\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    sub r1, r0, #2\n    ldrsh r1, [r4, r1]\n    sub r2, r1, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsh r1, [r4, r1]\n    cmp r1, #0\n    bge _02238EDA\n    mov r2, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsb r1, [r4, r0]\n    eor r1, r2\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    _02238EDC: .word 0x0000032B\n    _02238EE0: .word 0x0000032A"
    );
    #endif
}

void ov72_02238EE4(void) {
    /* Original at 0x02238EE4 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    mov r3, #4\n    add r4, r0, #0\n    str r3, [sp]\n    mov r0, #0x17\n    str r0, [sp, #4]\n    mov r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0xa4\n    ldr r1, _02238FE0 ; =0x00000E58\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    bl AddWindowParameterized\n    ldr r0, _02238FE0 ; =0x00000E58\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x94\n    ldr r1, _02238FE4 ; =0x00000E38\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #0x1a\n    bl AddWindowParameterized\n    ldr r0, _02238FE4 ; =0x00000E38\n    mov r1, #0xf\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x9c\n    ldr r1, _02238FE8 ; =0x00000E28\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #0x1a\n    bl AddWindowParameterized\n    ldr r0, _02238FE8 ; =0x00000E28\n    mov r1, #0xf\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x85\n    lsl r0, r0, #2\n    ldr r1, _02238FEC ; =0x00000E48\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #4\n    bl AddWindowParameterized\n    ldr r0, _02238FEC ; =0x00000E48\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r3, #1\n    ldr r0, _02238FF0 ; =0x000F0E00\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r1, _02238FF4 ; =0x00000BE4\n    ldr r0, _02238FEC ; =0x00000E48\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #0\n    bl ov72_0223A3E0\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    ldr r1, _02238FF8 ; =0x00000E18\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #2\n    bl AddWindowParameterized\n    ldr r0, _02238FF8 ; =0x00000E18\n    mov r1, #0xf\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _02238FE0: .word 0x00000E58\n    _02238FE4: .word 0x00000E38\n    _02238FE8: .word 0x00000E28\n    _02238FEC: .word 0x00000E48\n    _02238FF0: .word 0x000F0E00\n    _02238FF4: .word 0x00000BE4\n    _02238FF8: .word 0x00000E18"
    );
    #endif
}

void ov72_02238FFC(void) {
    /* Original at 0x02238FFC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223902C ; =0x00000E18\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _02239030 ; =0x00000E48\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _02239034 ; =0x00000E28\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _02239038 ; =0x00000E38\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _0223903C ; =0x00000E58\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}\n    nop\n    _0223902C: .word 0x00000E18\n    _02239030: .word 0x00000E48\n    _02239034: .word 0x00000E28\n    _02239038: .word 0x00000E38\n    _0223903C: .word 0x00000E58"
    );
    #endif
}

void ov72_02239040(void) {
    /* Original at 0x02239040 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xb4\n    mov r1, #0x43\n    bl String_New\n    mov r1, #0xbe\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    mov r0, #4\n    mov r1, #0x43\n    bl String_New\n    ldr r1, _0223908C ; =0x00000BE8\n    str r0, [r4, r1]\n    mov r0, #3\n    mov r1, #0x43\n    bl String_New\n    ldr r1, _02239090 ; =0x00000BEC\n    str r0, [r4, r1]\n    sub r1, #0x18\n    ldr r0, [r4, r1]\n    mov r1, #0xc\n    bl NewString_ReadMsgData\n    ldr r1, _02239094 ; =0x00000BE4\n    str r0, [r4, r1]\n    mov r0, #1\n    lsl r0, r0, #8\n    mov r1, #0x43\n    bl String_New\n    mov r1, #0xbf\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _0223908C: .word 0x00000BE8\n    _02239090: .word 0x00000BEC\n    _02239094: .word 0x00000BE4"
    );
    #endif
}

void ov72_02239098(void) {
    /* Original at 0x02239098 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xbf\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _022390CC ; =0x00000BE4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _022390D0 ; =0x00000BEC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _022390D4 ; =0x00000BE8\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0xbe\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    nop\n    _022390CC: .word 0x00000BE4\n    _022390D0: .word 0x00000BEC\n    _022390D4: .word 0x00000BE8"
    );
    #endif
}

void ov72_022390D8(void) {
    /* Original at 0x022390D8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239100 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02239104 ; =0x00000BDC\n    mov r2, #0x11\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x30\n    mov r2, #1\n    bl ov72_02238680\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02239100: .word 0x00000F0F\n    _02239104: .word 0x00000BDC"
    );
    #endif
}

void ov72_02239108(void) {
    /* Original at 0x02239108 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _0223915C ; =0x0000136C\n    add r0, r4, r0\n    bl ov72_0223AF48\n    cmp r0, #0\n    beq _02239154\n    cmp r0, #2\n    bne _02239132\n    bl sub_0203946C\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov72_022387D0\n    mov r0, #0x2e\n    str r0, [r4, #0x1c]\n    b _02239154\n    ldr r0, _02239160 ; =0x00000F0F\n    ldr r1, _02239164 ; =0x00000BD8\n    str r0, [sp]\n    mov r2, #1\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    add r3, r2, #0\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #2\n    bl ov72_02238680\n    add r0, r4, #0\n    bl ov72_0223A420\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0223915C: .word 0x0000136C\n    _02239160: .word 0x00000F0F\n    _02239164: .word 0x00000BD8"
    );
    #endif
}

void ov72_02239168(void) {
    /* Original at 0x02239168 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239190 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02239194 ; =0x00000BD8\n    mov r2, #0xc\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x30\n    mov r2, #0x34\n    bl ov72_02238680\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02239190: .word 0x00000F0F\n    _02239194: .word 0x00000BD8"
    );
    #endif
}

void ov72_02239198(void) {
    /* Original at 0x02239198 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _022391E4 ; =0x0000136C\n    add r0, r4, r0\n    bl ov72_0223AF48\n    cmp r0, #0\n    beq _022391E0\n    cmp r0, #2\n    bne _022391C0\n    bl ov00_021EC5B4\n    cmp r0, #0\n    bne _022391BA\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    b _022391E0\n    mov r0, #0x29\n    str r0, [r4, #0x1c]\n    b _022391E0\n    bl ov00_021EC5B4\n    cmp r0, #0\n    bne _022391D6\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov72_022387D0\n    mov r0, #0x2e\n    b _022391D8\n    mov r0, #0x29\n    str r0, [r4, #0x1c]\n    ldr r0, [r4]\n    mov r1, #1\n    str r1, [r0, #0x20]\n    mov r0, #3\n    pop {r4, pc}\n    _022391E4: .word 0x0000136C"
    );
    #endif
}

void ov72_022391E8(void) {
    /* Original at 0x022391E8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #0xc]\n    bl sub_02039418\n    mov r0, #4\n    bl Sys_SetSleepDisableFlag\n    add r0, r4, #0\n    bl ov72_0223A414\n    add r0, r4, #0\n    add r0, #0x2c\n    mov r1, #2\n    mov r2, #1\n    mov r3, #0x14\n    bl ov00_021EC3F0\n    mov r0, #2\n    bl ov00_021EC454\n    bl ov00_021EC4A4\n    mov r0, #3\n    str r0, [r4, #0x1c]\n    pop {r4, pc}"
    );
    #endif
}

void ov72_02239220(void) {
    /* Original at 0x02239220 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x44\n    add r4, r0, #0\n    bl ov00_021EC60C\n    bl ov00_021EC5B4\n    cmp r0, #0\n    beq _022392A0\n    bl ov00_021EC724\n    cmp r0, #8\n    bhi _0223927E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02239246: ; jump table\n    add r0, sp, #4\n    bl ov00_021EC0FC\n    mov r1, #0xf5\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r2, [sp, #4]\n    add r0, r1, #4\n    str r2, [r4, r0]\n    bl ov00_021EC210\n    bl ov00_021EC8D8\n    add r0, r4, #0\n    bl ov72_0223A444\n    mov r0, #0x37\n    str r0, [r4, #0x1c]\n    b _022392A0\n    add r0, sp, #0\n    bl ov00_021EC0FC\n    add r0, r4, #0\n    bl ov72_0223A444\n    mov r1, #0x35\n    str r1, [r4, #0x1c]\n    ldr r0, _022392A8 ; =0x00000F5C\n    sub r1, #0x37\n    str r1, [r4, r0]\n    b _022392A0\n    add r0, sp, #8\n    bl ov00_021EC9E0\n    mov r0, #4\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    add sp, #0x44\n    pop {r3, r4, pc}\n    nop\n    _022392A8: .word 0x00000F5C"
    );
    #endif
}

void ov72_022392AC(void) {
    ov00_021ECD04();
}

void ov72_022392BC(void) {
    /* Original at 0x022392BC */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl ov00_021ECDC8\n    cmp r0, #5\n    bhi _02239362\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022392D6: ; jump table\n    mov r0, #6\n    str r0, [r4, #0x1c]\n    b _02239362\n    add r0, r4, #0\n    bl ov72_0223A444\n    add r0, sp, #4\n    add r1, sp, #0\n    bl ov00_021EC11C\n    mov r1, #0xf5\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r2, [sp, #4]\n    add r0, r1, #4\n    str r2, [r4, r0]\n    bl ov00_021EC210\n    bl ov00_021EC8D8\n    mov r0, #0x37\n    str r0, [r4, #0x1c]\n    ldr r1, [sp]\n    cmp r1, #7\n    bhi _02239350\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02239320: ; jump table\n    str r0, [r4, #0x1c]\n    b _02239350\n    bl ov00_021FA0D8\n    mov r0, #0x37\n    str r0, [r4, #0x1c]\n    b _02239350\n    str r0, [r4, #0x1c]\n    b _02239350\n    bl ov00_021ED9B4\n    mov r0, #0x37\n    str r0, [r4, #0x1c]\n    b _02239350\n    bl sub_020399EC\n    ldr r1, [sp, #4]\n    ldr r0, _02239368 ; =0xFFFFB1E0\n    cmp r1, r0\n    bge _02239362\n    ldr r0, _0223936C ; =0xFFFF8AD1\n    cmp r1, r0\n    blt _02239362\n    mov r0, #0x37\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    _02239368: .word 0xFFFFB1E0\n    _0223936C: .word 0xFFFF8AD1"
    );
    #endif
}

void ov72_02239370(void) {
    /* Original at 0x02239370 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl Save_SysInfo_GetDwcProfileId\n    cmp r0, #0\n    bne _0223938A\n    ldr r1, [r5]\n    ldr r0, [r1, #8]\n    ldr r1, [r1, #0x1c]\n    bl Save_SysInfo_SetDwcProfileId\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl Save_SysInfo_GetDwcProfileId\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #0x14]\n    bl DWC_CreateFriendKey\n    add r3, r0, #0\n    add r2, r1, #0\n    add r0, r4, #0\n    add r1, r3, #0\n    bl ov72_022378C0\n    mov r0, #7\n    str r0, [r5, #0x1c]\n    mov r0, #3\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov72_022393B0(void) {
    ov72_02237CB0(3, 8, 0);
}

void ov72_022393CC(void) {
    /* Original at 0x022393CC */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    beq _02239484\n    bl ov72_02237B74\n    ldr r1, _022394A0 ; =0x00000FD4\n    mov r2, #0\n    str r2, [r4, r1]\n    add r2, r0, #7\n    cmp r2, #9\n    bhi _02239478\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _022393F4: ; jump table\n    add r0, r4, #0\n    bl ov72_0223A444\n    ldr r0, [r4]\n    ldr r0, [r0, #0x18]\n    cmp r0, #0\n    beq _02239420\n    cmp r0, #1\n    beq _0223942C\n    cmp r0, #2\n    beq _02239432\n    b _0223949A\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0xd\n    bl ov72_02238680\n    b _0223949A\n    mov r0, #0x19\n    str r0, [r4, #0x1c]\n    b _0223949A\n    mov r0, #0x1d\n    str r0, [r4, #0x1c]\n    b _0223949A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _0223949A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _0223949A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _0223949A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _0223949A\n    add r0, r4, #0\n    bl ov72_0223A444\n    bl sub_020399EC\n    b _0223949A\n    ldr r0, _022394A0 ; =0x00000FD4\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _0223949A\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _022394A0: .word 0x00000FD4"
    );
    #endif
}

void ov72_022394A4(void) {
    /* Original at 0x022394A4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r1, _022394D0 ; =0x00000F64\n    ldr r0, [r0, #0xc]\n    add r1, r4, r1\n    bl sub_0203189C\n    ldr r1, _022394D0 ; =0x00000F64\n    add r0, r4, r1\n    add r1, #0x64\n    add r1, r4, r1\n    bl ov72_02237CF4\n    mov r0, #0xa\n    str r0, [r4, #0x1c]\n    ldr r0, _022394D4 ; =0x00000FD4\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _022394D0: .word 0x00000F64\n    _022394D4: .word 0x00000FD4"
    );
    #endif
}

void ov72_022394D8(void) {
    /* Original at 0x022394D8 */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    bne _022394E6\n    b _022395EE\n    bl ov72_02237B74\n    add r5, r0, #0\n    ldr r0, _02239608 ; =0x00000FD4\n    mov r1, #0\n    str r1, [r4, r0]\n    add r1, r5, #7\n    cmp r1, #9\n    bhi _022395E2\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02239504: ; jump table\n    add r0, r4, #0\n    bl ov72_0223A444\n    ldr r0, _0223960C ; =0x00000FC8\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _02239530\n    cmp r1, #1\n    beq _02239586\n    cmp r1, #2\n    beq _02239586\n    b _02239596\n    add r1, r0, #4\n    ldr r1, [r4, r1]\n    cmp r1, #3\n    bhi _02239604\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02239544: ; jump table\n    ldr r0, [r4]\n    ldr r0, [r0, #0x18]\n    cmp r0, #0\n    beq _0223955E\n    cmp r0, #1\n    beq _0223956A\n    cmp r0, #2\n    beq _02239570\n    b _02239604\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0xd\n    bl ov72_02238680\n    b _02239604\n    mov r0, #0x19\n    str r0, [r4, #0x1c]\n    b _02239604\n    mov r0, #0x1d\n    str r0, [r4, #0x1c]\n    b _02239604\n    sub r0, #0x6c\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239604\n    ldr r0, _02239610 ; =0x00000F5C\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239604\n    add r0, r4, #0\n    bl ov72_0223A444\n    bl sub_020399EC\n    b _02239604\n    sub r0, #0x78\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239604\n    sub r0, #0x78\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239604\n    sub r0, #0x78\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239604\n    sub r0, #0x78\n    str r5, [r4, r0]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239604\n    add r0, r4, #0\n    bl ov72_0223A444\n    bl sub_020399EC\n    b _02239604\n    ldr r0, _02239608 ; =0x00000FD4\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _02239604\n    bl sub_020399EC\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _02239608: .word 0x00000FD4\n    _0223960C: .word 0x00000FC8\n    _02239610: .word 0x00000F5C"
    );
    #endif
}

void ov72_02239614(void) {
    /* Original at 0x02239614 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    bl ov72_02237B80\n    mov r0, #0xc\n    str r0, [r4, #0x1c]\n    ldr r0, _02239634 ; =0x00000FD4\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov72_0223A420\n    mov r0, #3\n    pop {r4, pc}\n    _02239634: .word 0x00000FD4"
    );
    #endif
}

void ov72_02239638(void) {
    /* Original at 0x02239638 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    beq _022396CA\n    bl ov72_02237B74\n    ldr r1, _022396E4 ; =0x00000FD4\n    mov r2, #0\n    str r2, [r4, r1]\n    add r2, r0, #7\n    cmp r2, #6\n    bhi _022396B4\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _02239660: ; jump table\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    b _022396C2\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    b _022396C2\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    b _022396C2\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    b _022396C2\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    b _022396C2\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    bl sub_020399EC\n    b _022396C2\n    cmp r0, #0\n    ble _022396C2\n    add r1, r4, #0\n    add r1, #0x98\n    str r0, [r1]\n    ldr r0, [r4, #0x20]\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _022396E0\n    ldr r0, _022396E4 ; =0x00000FD4\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _022396E0\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    _022396E4: .word 0x00000FD4"
    );
    #endif
}

void ov72_022396E8(void) {
    /* Original at 0x022396E8 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r0, #0x98\n    ldr r2, [r0]\n    cmp r2, #0x64\n    blt _02239720\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _02239758 ; =0x00000F0F\n    ldr r1, _0223975C ; =0x00000BD4\n    str r0, [sp]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0xb\n    mov r3, #1\n    bl ov72_0223A280\n    b _02239746\n    mov r3, #2\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl BufferIntegerAsString\n    ldr r0, _02239758 ; =0x00000F0F\n    ldr r1, _0223975C ; =0x00000BD4\n    str r0, [sp]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0\n    mov r3, #1\n    bl ov72_0223A280\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0xe\n    bl ov72_02238680\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _02239758: .word 0x00000F0F\n    _0223975C: .word 0x00000BD4"
    );
    #endif
}

void ov72_02239760(void) {
    /* Original at 0x02239760 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r2, r4, #0\n    add r2, #0x98\n    ldr r2, [r2]\n    mov r1, #1\n    bl ov72_0223A520\n    mov r0, #0xf\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov72_0223A41C\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov72_02239784(void) {
    /* Original at 0x02239784 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    bl ov72_0223A588\n    add r4, r0, #0\n    beq _022397E0\n    cmp r4, #0\n    ble _022397D2\n    add r0, sp, #0\n    add r1, sp, #0x10\n    bl ov00_021ECB94\n    add r0, r5, #0\n    add r0, #0x9c\n    add r1, r5, #0\n    add r2, r5, #0\n    str r4, [r0]\n    add r1, #0x94\n    add r2, #0x9c\n    ldr r0, [r5]\n    ldr r1, [r1]\n    ldr r2, [r2]\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    ldr r0, [r0, #4]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    add r3, sp, #0\n    bl sub_0202D720\n    cmp r0, #0\n    beq _022397CC\n    mov r0, #0x14\n    str r0, [r5, #0x1c]\n    b _022397E0\n    mov r0, #0x10\n    str r0, [r5, #0x1c]\n    b _022397E0\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl ov72_0223A41C\n    mov r0, #0x15\n    str r0, [r5, #0x1c]\n    mov r0, #3\n    add sp, #0x1c\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov72_022397E8(void) {
    /* Original at 0x022397E8 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    add r2, r4, #0\n    lsl r0, r0, #4\n    add r2, #0x9c\n    ldr r0, [r4, r0]\n    ldr r2, [r2]\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r3, #2\n    mov r0, #0xbd\n    add r2, r4, #0\n    str r3, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    lsl r0, r0, #4\n    add r2, #0x94\n    ldr r0, [r4, r0]\n    ldr r2, [r2]\n    bl BufferIntegerAsString\n    ldr r0, _02239850 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    ldr r1, _02239854 ; =0x00000BD4\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r3, r2, #0\n    bl ov72_0223A280\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x11\n    bl ov72_02238680\n    add r4, #0xa0\n    ldr r2, _02239858 ; =0x00000A38\n    mov r0, #0\n    add r1, r4, #0\n    bl MIi_CpuClearFast\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    _02239850: .word 0x00000F0F\n    _02239854: .word 0x00000BD4\n    _02239858: .word 0x00000A38"
    );
    #endif
}

void ov72_0223985C(void) {
    /* Original at 0x0223985C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239884 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02239888 ; =0x00000BD4\n    mov r2, #2\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A280\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0xd\n    bl ov72_02238680\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02239884: .word 0x00000F0F\n    _02239888: .word 0x00000BD4"
    );
    #endif
}

void ov72_0223988C(void) {
    /* Original at 0x0223988C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r0, #0x90\n    add r1, #0x9c\n    add r2, r4, #0\n    ldr r0, [r0]\n    ldr r1, [r1]\n    add r2, #0xa0\n    bl ov72_02237BD0\n    add r0, r4, #0\n    bl ov72_0223A420\n    mov r0, #0x12\n    str r0, [r4, #0x1c]\n    ldr r0, _022398B8 ; =0x00000FD4\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _022398B8: .word 0x00000FD4"
    );
    #endif
}

void ov72_022398BC(void) {
    /* Original at 0x022398BC */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    beq _022399AA\n    bl ov72_02237B74\n    ldr r1, _022399C8 ; =0x00000FD4\n    mov r2, #0\n    str r2, [r4, r1]\n    add r2, r0, #7\n    cmp r2, #7\n    bhi _022399C0\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _022398E6: ; jump table\n    add r2, r4, #0\n    add r3, r4, #0\n    add r2, #0x90\n    add r3, #0x9c\n    ldr r0, [r4]\n    ldr r2, [r2]\n    ldr r3, [r3]\n    add r1, r4, #0\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #4]\n    add r1, #0xa0\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl sub_0202D7C0\n    add r0, r4, #0\n    mov r1, #0x27\n    mov r2, #0x13\n    bl ov72_02238680\n    add r0, sp, #0\n    add r1, sp, #0x10\n    bl ov00_021ECB94\n    add r1, r4, #0\n    ldr r0, [r4]\n    add r1, #0x94\n    add r4, #0x9c\n    ldr r1, [r1]\n    ldr r2, [r4]\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x18\n    ldr r0, [r0, #4]\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    add r3, sp, #0\n    bl sub_0202D678\n    b _022399C0\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _022399C0\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _022399C0\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0xb\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _022399C0\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _022399C0\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _022399C0\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    bl sub_020399EC\n    b _022399C0\n    ldr r0, _022399C8 ; =0x00000FD4\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _022399C0\n    bl sub_020399EC\n    mov r0, #3\n    add sp, #0x1c\n    pop {r3, r4, pc}\n    nop\n    _022399C8: .word 0x00000FD4"
    );
    #endif
}

void ov72_022399CC(void) {
    /* Original at 0x022399CC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239A00 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02239A04 ; =0x00000BD4\n    mov r2, #3\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x2d\n    bl ov72_02238680\n    add r0, r4, #0\n    bl ov72_0223A444\n    ldr r0, [r4]\n    mov r1, #0\n    str r1, [r0, #0x20]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02239A00: .word 0x00000F0F\n    _02239A04: .word 0x00000BD4"
    );
    #endif
}

void ov72_02239A08(void) {
    /* Original at 0x02239A08 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239A34 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02239A38 ; =0x00000BD4\n    mov r2, #7\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x1a\n    bl ov72_02238680\n    add r0, r4, #0\n    bl ov72_0223A420\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _02239A34: .word 0x00000F0F\n    _02239A38: .word 0x00000BD4"
    );
    #endif
}

void ov72_02239A3C(void) {
    /* Original at 0x02239A3C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0]\n    bl sub_0202D568\n    add r4, r0, #0\n    ldr r0, [r5]\n    add r1, sp, #0\n    ldr r0, [r0, #4]\n    bl sub_0202D7F0\n    ldr r0, [r5]\n    ldr r2, _02239A80 ; =0x00000AD8\n    ldr r0, [r0, #0xc]\n    mov r1, #1\n    add r2, r5, r2\n    bl sub_02069528\n    add r1, sp, #0\n    ldrb r0, [r1]\n    ldr r3, _02239A80 ; =0x00000AD8\n    ldrb r1, [r1, #1]\n    add r2, r4, #0\n    add r3, r5, r3\n    bl ov72_02237C30\n    mov r0, #0x1b\n    str r0, [r5, #0x1c]\n    ldr r0, _02239A84 ; =0x00000FD4\n    mov r1, #0\n    str r1, [r5, r0]\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _02239A80: .word 0x00000AD8\n    _02239A84: .word 0x00000FD4"
    );
    #endif
}

void ov72_02239A88(void) {
    /* Original at 0x02239A88 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    beq _02239B3C\n    bl ov72_02237B74\n    ldr r1, _02239B58 ; =0x00000FD4\n    mov r2, #0\n    str r2, [r4, r1]\n    add r2, r0, #7\n    cmp r2, #7\n    bhi _02239B52\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _02239AB0: ; jump table\n    ldr r0, [r4]\n    mov r1, #5\n    ldr r0, [r0]\n    mov r2, #2\n    bl sub_0202D5DC\n    add r0, r4, #0\n    mov r1, #0x27\n    mov r2, #0x1c\n    bl ov72_02238680\n    b _02239B52\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239B52\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239B52\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239B52\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239B52\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239B52\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    bl sub_020399EC\n    b _02239B52\n    ldr r0, _02239B58 ; =0x00000FD4\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _02239B52\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _02239B58: .word 0x00000FD4"
    );
    #endif
}

void ov72_02239B5C(void) {
    /* Original at 0x02239B5C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239B90 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02239B94 ; =0x00000BD4\n    mov r2, #8\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x2d\n    bl ov72_02238680\n    add r0, r4, #0\n    bl ov72_0223A444\n    ldr r0, [r4]\n    mov r1, #0\n    str r1, [r0, #0x20]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02239B90: .word 0x00000F0F\n    _02239B94: .word 0x00000BD4"
    );
    #endif
}

void ov72_02239B98(void) {
    /* Original at 0x02239B98 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239BC0 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02239BC4 ; =0x00000BD4\n    mov r2, #5\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x1e\n    bl ov72_02238680\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02239BC0: .word 0x00000F0F\n    _02239BC4: .word 0x00000BD4"
    );
    #endif
}

void ov72_02239BC8(void) {
    /* Original at 0x02239BC8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #1\n    add r2, #0x94\n    str r1, [r2]\n    add r2, r1, #0\n    bl ov72_0223A41C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0xa\n    bl ov72_0223A520\n    mov r0, #0x1f\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov72_02239BEC(void) {
    /* Original at 0x02239BEC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_0223A588\n    cmp r0, #0\n    beq _02239C10\n    ble _02239C0C\n    add r1, r4, #0\n    add r1, #0x94\n    str r0, [r1]\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #0x20\n    bl ov72_02238680\n    b _02239C10\n    mov r0, #0x17\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov72_02239C14(void) {
    /* Original at 0x02239C14 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r0, #0x98\n    ldr r2, [r0]\n    cmp r2, #0x64\n    blt _02239C4C\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    ldr r0, _02239C84 ; =0x00000F0F\n    ldr r1, _02239C88 ; =0x00000BD4\n    str r0, [sp]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0xa\n    mov r3, #1\n    bl ov72_0223A280\n    b _02239C72\n    mov r3, #2\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl BufferIntegerAsString\n    ldr r0, _02239C84 ; =0x00000F0F\n    ldr r1, _02239C88 ; =0x00000BD4\n    str r0, [sp]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #6\n    mov r3, #1\n    bl ov72_0223A280\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x21\n    bl ov72_02238680\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _02239C84: .word 0x00000F0F\n    _02239C88: .word 0x00000BD4"
    );
    #endif
}

void ov72_02239C8C(void) {
    /* Original at 0x02239C8C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r2, r4, #0\n    mov r1, #1\n    add r2, #0x9c\n    str r1, [r2]\n    add r2, r4, #0\n    add r2, #0x98\n    ldr r2, [r2]\n    bl ov72_0223A520\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    bl ov72_0223A41C\n    mov r0, #0x22\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov72_02239CB4(void) {
    /* Original at 0x02239CB4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_0223A588\n    cmp r0, #0\n    beq _02239CD2\n    ble _02239CCE\n    add r1, r4, #0\n    add r1, #0x9c\n    str r0, [r1]\n    mov r0, #0x23\n    str r0, [r4, #0x1c]\n    b _02239CD2\n    mov r0, #0x1d\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov72_02239CD8(void) {
    /* Original at 0x02239CD8 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    add r2, r4, #0\n    lsl r0, r0, #4\n    add r2, #0x9c\n    ldr r0, [r4, r0]\n    ldr r2, [r2]\n    mov r1, #0\n    mov r3, #3\n    bl BufferIntegerAsString\n    mov r3, #2\n    mov r0, #0xbd\n    add r2, r4, #0\n    str r3, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    lsl r0, r0, #4\n    add r2, #0x94\n    ldr r0, [r4, r0]\n    ldr r2, [r2]\n    bl BufferIntegerAsString\n    ldr r0, _02239D34 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    ldr r1, _02239D38 ; =0x00000BD4\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r3, r2, #0\n    bl ov72_0223A280\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x24\n    bl ov72_02238680\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    _02239D34: .word 0x00000F0F\n    _02239D38: .word 0x00000BD4"
    );
    #endif
}

void ov72_02239D3C(void) {
    /* Original at 0x02239D3C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r0, #0x94\n    add r1, #0x9c\n    add r2, r4, #0\n    ldr r0, [r0]\n    ldr r1, [r1]\n    add r2, #0xa0\n    bl ov72_02237BD0\n    mov r0, #0x25\n    str r0, [r4, #0x1c]\n    ldr r0, _02239D68 ; =0x00000FD4\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov72_0223A420\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _02239D68: .word 0x00000FD4"
    );
    #endif
}

void ov72_02239D6C(void) {
    /* Original at 0x02239D6C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_02237B54\n    cmp r0, #0\n    beq _02239E34\n    bl ov72_02237B74\n    ldr r1, _02239E50 ; =0x00000FD4\n    mov r2, #0\n    str r2, [r4, r1]\n    add r2, r0, #7\n    cmp r2, #7\n    bhi _02239E4A\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _02239D94: ; jump table\n    add r2, r4, #0\n    add r3, r4, #0\n    add r2, #0x94\n    add r3, #0x9c\n    ldr r0, [r4]\n    ldr r2, [r2]\n    ldr r3, [r3]\n    ldr r1, _02239E54 ; =0x000006DC\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #4]\n    add r1, r4, r1\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl sub_0202D8A4\n    add r0, r4, #0\n    mov r1, #0x27\n    mov r2, #0x26\n    bl ov72_02238680\n    b _02239E4A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239E4A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239E4A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0xb\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239E4A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239E4A\n    mov r2, #0xb\n    str r2, [r4, #0x1c]\n    sub r1, #0x78\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov72_0223A444\n    b _02239E4A\n    sub r1, #0x78\n    str r0, [r4, r1]\n    mov r0, #0x35\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    bl sub_020399EC\n    b _02239E4A\n    ldr r0, _02239E50 ; =0x00000FD4\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _02239E4A\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _02239E50: .word 0x00000FD4\n    _02239E54: .word 0x000006DC"
    );
    #endif
}

void ov72_02239E58(void) {
    /* Original at 0x02239E58 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239E8C ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02239E90 ; =0x00000BD4\n    mov r2, #3\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x2d\n    bl ov72_02238680\n    add r0, r4, #0\n    bl ov72_0223A444\n    ldr r0, [r4]\n    mov r1, #0\n    str r1, [r0, #0x20]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02239E8C: .word 0x00000F0F\n    _02239E90: .word 0x00000BD4"
    );
    #endif
}

void ov72_02239E94(void) {
    /* Original at 0x02239E94 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x29\n    str r1, [r0, #0x1c]\n    mov r0, #3\n    bx lr"
    );
    #endif
}

void ov72_02239E9C(void) {
    Save_PrepareForAsyncWrite(0x28, 3, 2);
}

void ov72_02239EB4(void) {
    /* Original at 0x02239EB4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #0xc]\n    bl Save_WriteFileAsync\n    cmp r0, #2\n    bne _02239ECE\n    ldr r0, [r4, #0x20]\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    bl ov72_0223A444\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov72_02239ED4(void) {
    /* Original at 0x02239ED4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239EFC ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02239F00 ; =0x00000BD4\n    mov r2, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x30\n    mov r2, #0x16\n    bl ov72_02238680\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02239EFC: .word 0x00000F0F\n    _02239F00: .word 0x00000BD4"
    );
    #endif
}

void ov72_02239F04(void) {
    /* Original at 0x02239F04 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02239F2C ; =0x0000136C\n    add r0, r4, r0\n    bl ov72_0223AF48\n    cmp r0, #0\n    beq _02239F28\n    cmp r0, #2\n    bne _02239F1E\n    mov r0, #0xd\n    str r0, [r4, #0x1c]\n    b _02239F28\n    mov r0, #0x29\n    str r0, [r4, #0x1c]\n    ldr r0, [r4]\n    mov r1, #1\n    str r1, [r0, #0x20]\n    mov r0, #3\n    pop {r4, pc}\n    _02239F2C: .word 0x0000136C"
    );
    #endif
}

void ov72_02239F30(void) {
    /* Original at 0x02239F30 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239F58 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02239F5C ; =0x00000BD4\n    mov r2, #9\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x30\n    mov r2, #0x18\n    bl ov72_02238680\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02239F58: .word 0x00000F0F\n    _02239F5C: .word 0x00000BD4"
    );
    #endif
}

void ov72_02239F60(void) {
    /* Original at 0x02239F60 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02239F88 ; =0x0000136C\n    add r0, r4, r0\n    bl ov72_0223AF48\n    cmp r0, #0\n    beq _02239F84\n    cmp r0, #2\n    bne _02239F7A\n    mov r0, #0x1d\n    str r0, [r4, #0x1c]\n    b _02239F84\n    mov r0, #0x29\n    str r0, [r4, #0x1c]\n    ldr r0, [r4]\n    mov r1, #1\n    str r1, [r0, #0x20]\n    mov r0, #3\n    pop {r4, pc}\n    _02239F88: .word 0x0000136C"
    );
    #endif
}

void ov72_02239F8C(void) {
    /* Original at 0x02239F8C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239FB4 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02239FB8 ; =0x00000BDC\n    mov r2, #0x1a\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x2f\n    mov r2, #0x2a\n    bl ov72_02238680\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02239FB4: .word 0x00000F0F\n    _02239FB8: .word 0x00000BDC"
    );
    #endif
}

void ov72_02239FBC(void) {
    /* Original at 0x02239FBC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov00_021EC8D8\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov72_022387D0\n    mov r0, #0x2b\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov72_02239FD8(void) {
    /* Original at 0x02239FD8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0223A008 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _0223A00C ; =0x00000BDC\n    mov r2, #0x1b\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r4, #0\n    mov r1, #0x31\n    mov r2, #0x2e\n    bl ov72_02238680\n    mov r0, #0xf6\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0223A008: .word 0x00000F0F\n    _0223A00C: .word 0x00000BDC"
    );
    #endif
}

void ov72_0223A010(void) {
    /* Original at 0x0223A010 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #3\n    bx lr"
    );
    #endif
}

void ov72_0223A014(void) {
    /* Original at 0x0223A014 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl sub_0203A914\n    bl sub_0203946C\n    mov r0, #8\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x43\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    mov r0, #4\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov72_0223A044(void) {
    /* Original at 0x0223A044 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223A068 ; =0x00001308\n    ldr r0, [r4, r0]\n    bl ov72_02238668\n    cmp r0, #0\n    beq _0223A062\n    cmp r0, #2\n    bne _0223A05E\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    b _0223A062\n    mov r0, #0x29\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223A068: .word 0x00001308"
    );
    #endif
}

void ov72_0223A06C(void) {
    /* Original at 0x0223A06C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0223A0D4 ; =0x00000F5C\n    mov r4, #0\n    ldr r0, [r5, r0]\n    add r0, r0, #7\n    cmp r0, #9\n    bhi _0223A0AE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223A088: ; jump table\n    mov r4, #0xf\n    b _0223A0AE\n    mov r4, #0xd\n    b _0223A0AE\n    mov r4, #0xe\n    b _0223A0AE\n    mov r4, #0x10\n    b _0223A0AE\n    mov r4, #0x11\n    add r0, r5, #0\n    bl ov72_0223A444\n    ldr r0, _0223A0D8 ; =0x00000F0F\n    ldr r1, _0223A0DC ; =0x00000BD4\n    str r0, [sp]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #1\n    bl ov72_0223A350\n    add r0, r5, #0\n    mov r1, #0x2f\n    mov r2, #0x36\n    bl ov72_02238680\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _0223A0D4: .word 0x00000F5C\n    _0223A0D8: .word 0x00000F0F\n    _0223A0DC: .word 0x00000BD4"
    );
    #endif
}

void ov72_0223A0E0(void) {
    /* Original at 0x0223A0E0 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0xfd\n    add r4, r0, #0\n    lsl r1, r1, #4\n    ldrsh r2, [r4, r1]\n    cmp r2, #3\n    bhi _0223A17C\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0223A0FC: ; jump table\n    sub r1, #0xc1\n    str r1, [sp]\n    ldr r1, _0223A1A0 ; =0x00000BD4\n    mov r2, #0x12\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    mov r0, #0xfd\n    lsl r0, r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _0223A198\n    ldr r0, _0223A1A4 ; =0x00000BF4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0223A198\n    bl sub_0203946C\n    bl ov00_021EC8D8\n    mov r0, #0xfd\n    lsl r0, r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _0223A198\n    sub r1, #0xc1\n    str r1, [sp]\n    ldr r1, _0223A1A0 ; =0x00000BD4\n    mov r2, #0x13\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov72_0223A350\n    mov r0, #0xfd\n    lsl r0, r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _0223A198\n    ldr r0, _0223A1A4 ; =0x00000BF4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0223A198\n    mov r0, #0xfd\n    lsl r0, r0, #4\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _0223A198\n    ldr r0, _0223A1A8 ; =0x00000FD2\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x1e\n    ble _0223A198\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov72_022387D0\n    mov r0, #0x2e\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0223A1A0: .word 0x00000BD4\n    _0223A1A4: .word 0x00000BF4\n    _0223A1A8: .word 0x00000FD2"
    );
    #endif
}

void ov72_0223A1AC(void) {
    TextPrinterCheckActive(3);
}

void ov72_0223A1CC(void) {
    /* Original at 0x0223A1CC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223A1FC ; =0x00000BF4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0223A1F8\n    mov r0, #0xf6\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0x1e\n    ble _0223A1EE\n    ldr r0, [r4, #0x20]\n    str r0, [r4, #0x1c]\n    mov r0, #0xf6\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    _0223A1FC: .word 0x00000BF4"
    );
    #endif
}

void ov72_0223A200(void) {
    /* Original at 0x0223A200 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223A274 ; =0x00000BF4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0223A26E\n    ldr r0, _0223A278 ; =0x00000E14\n    ldr r1, [r4, r0]\n    ldr r0, _0223A27C ; =0x00001370\n    str r1, [r4, r0]\n    ldr r2, [r4, #4]\n    sub r1, r0, #4\n    str r2, [r4, r1]\n    add r1, r0, #0\n    mov r2, #0x43\n    add r1, #0x24\n    str r2, [r4, r1]\n    add r1, r0, #0\n    mov r2, #0\n    add r1, #0x28\n    strb r2, [r4, r1]\n    add r1, r0, #0\n    mov r2, #0xa\n    add r1, #0x2a\n    strb r2, [r4, r1]\n    add r1, r0, #0\n    mov r2, #6\n    add r1, #0x2b\n    strb r2, [r4, r1]\n    add r1, r0, #0\n    mov r2, #4\n    add r1, #0x2e\n    strb r2, [r4, r1]\n    add r1, r0, #0\n    mov r2, #0xb\n    add r1, #0x2c\n    strb r2, [r4, r1]\n    add r1, r0, #0\n    mov r2, #1\n    add r1, #0x2d\n    strb r2, [r4, r1]\n    add r1, r0, #0\n    sub r0, r0, #4\n    add r2, #0xff\n    add r1, #0x30\n    add r0, r4, r0\n    str r2, [r4, r1]\n    bl ov72_0223AF1C\n    ldr r0, [r4, #0x20]\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223A274: .word 0x00000BF4\n    _0223A278: .word 0x00000E14\n    _0223A27C: .word 0x00001370"
    );
    #endif
}

void ov72_0223A280(void) {
    /* Original at 0x0223A280 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    add r4, r3, #0\n    bl NewString_ReadMsgData\n    mov r1, #0xbd\n    add r6, r0, #0\n    lsl r1, r1, #4\n    ldr r0, [r5, r1]\n    add r1, #0x10\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl StringExpandPlaceholders\n    ldr r0, _0223A2E0 ; =0x00000E18\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _0223A2E0 ; =0x00000E18\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    mov r2, #0xbe\n    ldr r0, _0223A2E0 ; =0x00000E18\n    str r3, [sp, #8]\n    lsl r2, r2, #4\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _0223A2E4 ; =0x00000BF4\n    str r0, [r5, r1]\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _0223A2E0: .word 0x00000E18\n    _0223A2E4: .word 0x00000BF4"
    );
    #endif
}

void ov72_0223A2E8(void) {
    /* Original at 0x0223A2E8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0223A310 ; =0x00000F54\n    add r4, r0, #0\n    ldr r0, [r4, r1]\n    add r1, r1, #4\n    ldr r1, [r4, r1]\n    neg r0, r0\n    bl ov00_021E6A70\n    ldr r2, _0223A310 ; =0x00000F54\n    add r1, r0, #0\n    ldr r2, [r4, r2]\n    add r0, r4, #0\n    neg r2, r2\n    bl ov72_0223A4DC\n    mov r0, #0x38\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}\n    _0223A310: .word 0x00000F54"
    );
    #endif
}

void ov72_0223A314(void) {
    /* Original at 0x0223A314 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223A344 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _0223A330\n    mov r0, #2\n    tst r0, r1\n    bne _0223A330\n    ldr r0, _0223A348 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _0223A33E\n    ldr r0, _0223A34C ; =0x00000E58\n    mov r1, #0\n    add r0, r4, r0\n    bl sub_0200E5D4\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223A344: .word gSystem\n    _0223A348: .word gSystem + 0x40\n    _0223A34C: .word 0x00000E58"
    );
    #endif
}

void ov72_0223A350(void) {
    /* Original at 0x0223A350 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    mov r2, #0xbe\n    lsl r2, r2, #4\n    ldr r2, [r5, r2]\n    add r4, r3, #0\n    bl ReadMsgDataIntoString\n    ldr r0, _0223A3A0 ; =0x00000E18\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _0223A3A0 ; =0x00000E18\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    mov r2, #0xbe\n    ldr r0, _0223A3A0 ; =0x00000E18\n    str r3, [sp, #8]\n    lsl r2, r2, #4\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _0223A3A4 ; =0x00000BF4\n    str r0, [r5, r1]\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0223A3A0: .word 0x00000E18\n    _0223A3A4: .word 0x00000BF4"
    );
    #endif
}

void ov72_0223A3A8(void) {
    /* Original at 0x0223A3A8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r3, #1\n    beq _0223A3B6\n    cmp r3, #2\n    beq _0223A3CC\n    b _0223A3DA\n    ldr r0, [sp, #0xc]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    ldrb r1, [r4, #7]\n    lsl r1, r1, #3\n    sub r1, r1, r0\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r2, r0, #1\n    b _0223A3DA\n    ldr r0, [sp, #0xc]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    ldrb r1, [r4, #7]\n    lsl r1, r1, #3\n    sub r2, r1, r0\n    add r0, r2, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov72_0223A3E0(void) {
    /* Original at 0x0223A3E0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r3, #0\n    ldr r3, [sp, #0x24]\n    add r5, r0, #0\n    str r3, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    ldr r3, [sp, #0x20]\n    add r6, r1, #0\n    bl ov72_0223A3A8\n    add r3, r0, #0\n    str r4, [sp]\n    mov r1, #0\n    ldr r0, [sp, #0x24]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov72_0223A414(void) {
    sub_0203A880();
}

void ov72_0223A41C(void) {
    /* Original at 0x0223A41C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov72_0223A420(void) {
    /* Original at 0x0223A420 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223A43C ; =0x00000F4C\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0223A43A\n    ldr r0, _0223A440 ; =0x00000E18\n    mov r1, #1\n    add r0, r4, r0\n    bl WaitingIcon_New\n    ldr r1, _0223A43C ; =0x00000F4C\n    str r0, [r4, r1]\n    pop {r4, pc}\n    _0223A43C: .word 0x00000F4C\n    _0223A440: .word 0x00000E18"
    );
    #endif
}

void ov72_0223A444(void) {
    sub_0200F450(0);
}

void ov72_0223A460(void) {
    /* Original at 0x0223A460 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #1\n    add r6, r1, #0\n    lsl r0, r0, #8\n    mov r1, #0x43\n    bl String_New\n    add r4, r0, #0\n    ldr r0, _0223A4D0 ; =0x00000BDC\n    add r1, r6, #0\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    mov r1, #0xbd\n    lsl r1, r1, #4\n    ldr r0, [r5, r1]\n    add r1, #0x20\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    ldr r0, _0223A4D4 ; =0x00000E58\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _0223A4D4 ; =0x00000E58\n    mov r1, #1\n    add r0, r5, r0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    mov r2, #0xbf\n    ldr r0, _0223A4D4 ; =0x00000E58\n    str r3, [sp, #8]\n    lsl r2, r2, #4\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _0223A4D8 ; =0x00000BF4\n    str r0, [r5, r1]\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0223A4D0: .word 0x00000BDC\n    _0223A4D4: .word 0x00000E58\n    _0223A4D8: .word 0x00000BF4"
    );
    #endif
}

void ov72_0223A4DC(void) {
    /* Original at 0x0223A4DC */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0\n    add r4, r1, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _0223A4EE\n    mov r4, #0xb\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0xbd\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    mov r3, #5\n    bl BufferIntegerAsString\n    ldr r0, _0223A51C ; =0x00000E18\n    mov r1, #1\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov72_0223A460\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _0223A51C: .word 0x00000E18"
    );
    #endif
}

void ov72_0223A520(void) {
    /* Original at 0x0223A520 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _0223A580 ; =0x0000130C\n    mov r4, #0\n    strb r1, [r0, r3]\n    add r1, r3, #1\n    strb r2, [r0, r1]\n    add r1, r3, #2\n    strb r4, [r0, r1]\n    add r1, r3, #3\n    strb r4, [r0, r1]\n    cmp r2, #0x64\n    beq _0223A544\n    add r1, r3, #4\n    mov r2, #1\n    strh r2, [r0, r1]\n    add r3, #0x5c\n    str r2, [r0, r3]\n    b _0223A54C\n    add r1, r3, #4\n    strh r4, [r0, r1]\n    add r3, #0x5c\n    str r4, [r0, r3]\n    ldr r3, _0223A584 ; =0x00001312\n    mov r1, #0\n    strb r1, [r0, r3]\n    sub r4, r1, #1\n    add r2, r3, #2\n    strb r4, [r0, r2]\n    add r2, r3, #3\n    strb r4, [r0, r2]\n    add r2, r3, #4\n    strb r4, [r0, r2]\n    add r2, r3, #0\n    add r2, #0x52\n    strh r1, [r0, r2]\n    mov r2, #1\n    add r3, #0x54\n    strh r2, [r0, r3]\n    mov r2, #0xe\n    lsl r2, r2, #8\n    ldr r0, [r0, r2]\n    cmp r0, #0\n    beq _0223A57A\n    bl ov72_022386F4\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0223A580: .word 0x0000130C\n    _0223A584: .word 0x00001312"
    );
    #endif
}

void ov72_0223A588(void) {
    /* Original at 0x0223A588 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0223A5A8 ; =0x00001312\n    add r4, r0, #0\n    ldrb r1, [r4, r1]\n    lsl r2, r1, #2\n    ldr r1, _0223A5AC ; =ov72_0223B744\n    ldr r1, [r1, r2]\n    blx r1\n    cmp r0, #1\n    bne _0223A5A2\n    ldr r0, _0223A5B0 ; =0x0000130E\n    ldrsb r0, [r4, r0]\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0223A5A8: .word 0x00001312\n    _0223A5AC: .word ov72_0223B744\n    _0223A5B0: .word 0x0000130E"
    );
    #endif
}

void ov72_0223A5B4(void) {
    /* Original at 0x0223A5B4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r1, #0x43\n    str r1, [sp, #8]\n    mov r1, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, _0223A5DC ; =0x00001312\n    mov r1, #1\n    strb r1, [r4, r0]\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0223A5DC: .word 0x00001312"
    );
    #endif
}

void ov72_0223A5E0(void) {
    /* Original at 0x0223A5E0 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223A65E\n    add r0, r4, #0\n    bl ov72_0223A680\n    ldr r2, _0223A664 ; =0x00001310\n    ldr r0, _0223A668 ; =0x00000E04\n    ldrsh r1, [r4, r2]\n    add r2, #0x58\n    ldr r0, [r4, r0]\n    ldr r2, [r4, r2]\n    bl ov72_02238730\n    add r0, r4, #0\n    mov r1, #1\n    bl ov72_02238B18\n    add r0, r4, #0\n    bl ov72_0223ACA8\n    ldr r1, _0223A66C ; =0x00000BD4\n    ldr r0, _0223A670 ; =0x00001328\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #0x14\n    bl ov72_0223AD20\n    ldr r1, _0223A66C ; =0x00000BD4\n    ldr r0, _0223A674 ; =0x00001338\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #0x15\n    bl ov72_0223AD20\n    ldr r1, _0223A66C ; =0x00000BD4\n    ldr r0, _0223A678 ; =0x00001348\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #0x16\n    bl ov72_0223AD20\n    mov r0, #4\n    mov r1, #1\n    bl ToggleBgLayer\n    mov r0, #4\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r2, #0x43\n    str r2, [sp, #8]\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    ldr r0, _0223A67C ; =0x00001312\n    mov r1, #2\n    strb r1, [r4, r0]\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0223A664: .word 0x00001310\n    _0223A668: .word 0x00000E04\n    _0223A66C: .word 0x00000BD4\n    _0223A670: .word 0x00001328\n    _0223A674: .word 0x00001338\n    _0223A678: .word 0x00001348\n    _0223A67C: .word 0x00001312"
    );
    #endif
}

void ov72_0223A680(void) {
    /* Original at 0x0223A680 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _0223A6FC ; =0x0000130D\n    ldrb r0, [r6, r0]\n    cmp r0, #0x64\n    bne _0223A696\n    ldr r0, _0223A700 ; =0x00000DF4\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0223A704 ; =0x00000DF8\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0223A708 ; =0x00000DFC\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl Sprite_SetDrawFlag\n    ldr r7, _0223A70C ; =0x00001368\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, _0223A700 ; =0x00000DF4\n    ldr r2, [r6, r7]\n    ldr r0, [r5, r0]\n    add r1, r4, #0\n    bl ov72_02238750\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #3\n    blt _0223A6B0\n    mov r0, #0xe\n    lsl r0, r0, #8\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, _0223A710 ; =0x00000E04\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0223A714 ; =0x00000E08\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0223A718 ; =0x00000E0C\n    mov r1, #1\n    ldr r0, [r6, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223A6FC: .word 0x0000130D\n    _0223A700: .word 0x00000DF4\n    _0223A704: .word 0x00000DF8\n    _0223A708: .word 0x00000DFC\n    _0223A70C: .word 0x00001368\n    _0223A710: .word 0x00000E04\n    _0223A714: .word 0x00000E08\n    _0223A718: .word 0x00000E0C"
    );
    #endif
}

void ov72_0223A71C(void) {
    IsPaletteFadeFinished(0, 3);
}

void ov72_0223A738(void) {
    /* Original at 0x0223A738 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0223A754 ; =0x0000130D\n    ldrb r0, [r0, r1]\n    cmp r0, #0x64\n    bne _0223A74A\n    ldr r0, _0223A758 ; =ov72_0223B774\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    pop {r3, pc}\n    ldr r0, _0223A75C ; =ov72_0223B7B8\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    pop {r3, pc}\n    nop\n    _0223A754: .word 0x0000130D\n    _0223A758: .word ov72_0223B774\n    _0223A75C: .word ov72_0223B7B8"
    );
    #endif
}

void ov72_0223A760(void) {
    /* Original at 0x0223A760 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _0223A7E0 ; =ov72_0223B48C\n    lsl r4, r0, #2\n    add r3, r3, r4\n    ldrb r1, [r1, r3]\n    cmp r1, #0xd\n    bne _0223A776\n    ldrh r1, [r2]\n    ldr r0, _0223A7E4 ; =ov72_0223B464\n    ldrb r1, [r0, r1]\n    b _0223A7D8\n    cmp r1, #0xe\n    bne _0223A782\n    ldrh r1, [r2]\n    ldr r0, _0223A7E8 ; =ov72_0223B466\n    ldrb r1, [r0, r1]\n    b _0223A7D8\n    cmp r1, #0xf\n    bne _0223A78E\n    ldrh r1, [r2, #2]\n    ldr r0, _0223A7EC ; =ov72_0223B468\n    ldrb r1, [r0, r1]\n    b _0223A7D8\n    cmp r1, #0x10\n    bne _0223A79A\n    ldrh r1, [r2, #2]\n    ldr r0, _0223A7F0 ; =ov72_0223B46A\n    ldrb r1, [r0, r1]\n    b _0223A7D8\n    cmp r1, #0xa\n    bne _0223A7BA\n    cmp r0, #5\n    beq _0223A7A6\n    cmp r0, #0\n    bne _0223A7AC\n    mov r0, #0\n    strh r0, [r2]\n    b _0223A7D8\n    cmp r0, #1\n    beq _0223A7B4\n    cmp r0, #6\n    bne _0223A7D8\n    mov r0, #1\n    strh r0, [r2]\n    b _0223A7D8\n    cmp r1, #0xc\n    bne _0223A7D8\n    cmp r0, #3\n    beq _0223A7C6\n    cmp r0, #8\n    bne _0223A7CC\n    mov r0, #0\n    strh r0, [r2, #2]\n    b _0223A7D8\n    cmp r0, #4\n    beq _0223A7D4\n    cmp r0, #9\n    bne _0223A7D8\n    mov r0, #1\n    strh r0, [r2, #2]\n    add r0, r1, #0\n    pop {r3, r4}\n    bx lr\n    nop\n    _0223A7E0: .word ov72_0223B48C\n    _0223A7E4: .word ov72_0223B464\n    _0223A7E8: .word ov72_0223B466\n    _0223A7EC: .word ov72_0223B468\n    _0223A7F0: .word ov72_0223B46A"
    );
    #endif
}

void ov72_0223A7F4(void) {
    /* Original at 0x0223A7F4 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r7, r0, #0\n    add r6, r1, #0\n    mov r0, #0x64\n    mov r4, #3\n    mov r1, #0\n    add r2, sp, #0x18\n    mov r3, #8\n    add r5, r7, r1\n    ldrsb r5, [r5, r3]\n    add r1, r1, #1\n    cmp r1, #3\n    stmia r2!, {r5}\n    blt _0223A806\n    mov r1, #0\n    mvn r1, r1\n    cmp r6, r1\n    beq _0223A824\n    mov r1, #4\n    ldrsh r1, [r7, r1]\n    lsl r2, r1, #2\n    add r1, sp, #0x18\n    str r6, [r1, r2]\n    mov r1, #0\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    add r5, r1, #0\n    add r6, sp, #0x18\n    add r2, r7, r5\n    mov r1, #8\n    ldrsb r1, [r2, r1]\n    cmp r1, #0\n    bne _0223A83E\n    ldr r1, [sp, #8]\n    cmp r1, #0\n    beq _0223A844\n    ldr r2, [r6]\n    cmp r2, #0\n    bge _0223A84E\n    mov r1, #0xa\n    bl _s32_div_f\n    sub r4, r4, #1\n    b _0223A860\n    mov r1, #1\n    ldr r3, [sp, #4]\n    str r1, [sp, #8]\n    ldr r1, [sp, #4]\n    add r3, r3, #1\n    str r3, [sp, #4]\n    lsl r1, r1, #2\n    add r3, sp, #0xc\n    str r2, [r3, r1]\n    add r5, r5, #1\n    add r6, r6, #4\n    cmp r5, #3\n    blt _0223A82E\n    mov r6, #0\n    str r6, [sp]\n    cmp r4, #0\n    ble _0223A88A\n    add r5, sp, #0xc\n    ldr r1, [r5]\n    mul r1, r0\n    add r6, r6, r1\n    mov r1, #0xa\n    bl _s32_div_f\n    ldr r1, [sp]\n    add r5, r5, #4\n    add r1, r1, #1\n    str r1, [sp]\n    cmp r1, r4\n    blt _0223A872\n    ldrb r0, [r7, #1]\n    cmp r6, r0\n    ble _0223A898\n    mov r0, #0\n    add sp, #0x24\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov72_0223A8A0(void) {
    /* Original at 0x0223A8A0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #1]\n    cmp r1, #0x64\n    beq _0223A8BA\n    mov r1, #9\n    ldrsb r1, [r0, r1]\n    cmp r1, #0\n    blt _0223A8D6\n    mov r1, #0xa\n    ldrsb r0, [r0, r1]\n    cmp r0, #0\n    blt _0223A8D6\n    mov r0, #1\n    bx lr\n    mov r1, #8\n    ldrsb r1, [r0, r1]\n    cmp r1, #0\n    blt _0223A8D6\n    mov r1, #9\n    ldrsb r1, [r0, r1]\n    cmp r1, #0\n    blt _0223A8D6\n    mov r1, #0xa\n    ldrsb r0, [r0, r1]\n    cmp r0, #0\n    blt _0223A8D6\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov72_0223A8DC(void) {
    ov72_0223A8A0(0xb);
}

void ov72_0223A8F0(void) {
    /* Original at 0x0223A8F0 */
    /* Requires manual decompilation - 170 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    cmp r5, #0xf\n    bls _0223A8FC\n    b _0223AA6A\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223A908: ; jump table\n    ldr r0, _0223AA6C ; =0x0000130C\n    sub r1, r5, #3\n    add r0, r4, r0\n    bl ov72_0223A7F4\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _0223A99A\n    ldr r1, _0223AA70 ; =0x00001310\n    sub r3, r5, #3\n    ldrsh r0, [r4, r1]\n    add r2, r4, r0\n    add r0, r1, #4\n    strb r3, [r2, r0]\n    ldrsh r0, [r4, r1]\n    cmp r0, #2\n    bge _0223A950\n    add r0, r0, #1\n    strh r0, [r4, r1]\n    ldr r2, _0223AA70 ; =0x00001310\n    ldr r0, _0223AA74 ; =0x00000E04\n    ldrsh r1, [r4, r2]\n    add r2, #0x58\n    ldr r0, [r4, r0]\n    ldr r2, [r4, r2]\n    bl ov72_02238730\n    ldr r0, _0223AA78 ; =0x0000130F\n    sub r1, r5, #3\n    strb r1, [r4, r0]\n    sub r0, r0, #3\n    add r0, r4, r0\n    bl ov72_0223A8DC\n    ldr r1, _0223AA78 ; =0x0000130F\n    strb r0, [r4, r1]\n    mov r0, #0xe\n    lsl r0, r0, #8\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, r0]\n    bl ov72_022386F4\n    ldr r0, _0223AA7C ; =0x000005DC\n    bl PlaySE\n    sub r0, r5, #3\n    lsl r3, r0, #1\n    ldr r1, _0223AA80 ; =ov72_0223B478\n    ldr r2, _0223AA84 ; =ov72_0223B479\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    add r0, r4, #0\n    mov r3, #3\n    bl ov72_0223AED0\n    pop {r3, r4, r5, pc}\n    ldr r0, _0223AA88 ; =0x000005F2\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    ldr r1, _0223AA70 ; =0x00001310\n    mov r3, #0\n    ldrsh r0, [r4, r1]\n    mvn r3, r3\n    add r2, r4, r0\n    add r0, r1, #4\n    strb r3, [r2, r0]\n    ldrsh r0, [r4, r1]\n    sub r0, r0, #1\n    strh r0, [r4, r1]\n    sub r0, r1, #3\n    ldrb r0, [r4, r0]\n    cmp r0, #0x64\n    ldrsh r0, [r4, r1]\n    bne _0223A9CA\n    cmp r0, #0\n    bge _0223A9D2\n    mov r0, #0\n    strh r0, [r4, r1]\n    b _0223A9D2\n    cmp r0, #1\n    bge _0223A9D2\n    mov r0, #1\n    strh r0, [r4, r1]\n    ldr r0, _0223AA7C ; =0x000005DC\n    bl PlaySE\n    ldr r2, _0223AA70 ; =0x00001310\n    ldr r0, _0223AA74 ; =0x00000E04\n    ldrsh r1, [r4, r2]\n    add r2, #0x58\n    ldr r0, [r4, r0]\n    ldr r2, [r4, r2]\n    bl ov72_02238730\n    ldr r0, _0223AA8C ; =0x00000E08\n    mov r1, #5\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, r4, r5, pc}\n    ldr r1, _0223AA78 ; =0x0000130F\n    sub r0, r5, #3\n    strb r0, [r4, r1]\n    mov r0, #0xe\n    lsl r0, r0, #8\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, r0]\n    bl ov72_022386F4\n    ldr r0, _0223AA6C ; =0x0000130C\n    mov r1, #0\n    add r0, r4, r0\n    mvn r1, r1\n    bl ov72_0223A7F4\n    ldr r1, _0223AA90 ; =0x0000130E\n    strb r0, [r4, r1]\n    ldrsb r0, [r4, r1]\n    cmp r0, #0\n    bgt _0223AA20\n    mov r0, #1\n    strb r0, [r4, r1]\n    ldr r0, _0223AA94 ; =0x00001312\n    mov r1, #7\n    strb r1, [r4, r0]\n    ldr r0, _0223AA7C ; =0x000005DC\n    bl PlaySE\n    ldr r0, _0223AA98 ; =0x00000E0C\n    mov r1, #5\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, r4, r5, pc}\n    ldr r1, _0223AA78 ; =0x0000130F\n    sub r0, r5, #3\n    mov r2, #0\n    strb r0, [r4, r1]\n    mvn r2, r2\n    sub r0, r1, #1\n    strb r2, [r4, r0]\n    mov r0, #0xe\n    lsl r0, r0, #8\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, r0]\n    bl ov72_022386F4\n    ldr r0, _0223AA94 ; =0x00001312\n    mov r1, #7\n    strb r1, [r4, r0]\n    ldr r0, _0223AA7C ; =0x000005DC\n    bl PlaySE\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #5\n    bl Sprite_SetAnimCtrlSeq\n    pop {r3, r4, r5, pc}\n    _0223AA6C: .word 0x0000130C\n    _0223AA70: .word 0x00001310\n    _0223AA74: .word 0x00000E04\n    _0223AA78: .word 0x0000130F\n    _0223AA7C: .word 0x000005DC\n    _0223AA80: .word ov72_0223B478\n    _0223AA84: .word ov72_0223B479\n    _0223AA88: .word 0x000005F2\n    _0223AA8C: .word 0x00000E08\n    _0223AA90: .word 0x0000130E\n    _0223AA94: .word 0x00001312\n    _0223AA98: .word 0x00000E0C"
    );
    #endif
}

void ov72_0223AA9C(void) {
    /* Original at 0x0223AA9C */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0223AB78 ; =gSystem\n    mov r3, #0x40\n    ldr r2, [r1, #0x4c]\n    add r4, r0, #0\n    tst r3, r2\n    beq _0223AAD0\n    ldr r2, _0223AB7C ; =0x0000130F\n    mov r1, #0\n    ldrb r0, [r4, r2]\n    add r2, #0x55\n    add r2, r4, r2\n    bl ov72_0223A760\n    ldr r1, _0223AB7C ; =0x0000130F\n    strb r0, [r4, r1]\n    mov r0, #0xe\n    lsl r0, r0, #8\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, r0]\n    bl ov72_022386F4\n    ldr r0, _0223AB80 ; =0x000005DC\n    bl PlaySE\n    b _0223AB74\n    mov r3, #0x80\n    tst r3, r2\n    beq _0223AAFC\n    ldr r2, _0223AB7C ; =0x0000130F\n    mov r1, #1\n    ldrb r0, [r4, r2]\n    add r2, #0x55\n    add r2, r4, r2\n    bl ov72_0223A760\n    ldr r1, _0223AB7C ; =0x0000130F\n    strb r0, [r4, r1]\n    mov r0, #0xe\n    lsl r0, r0, #8\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, r0]\n    bl ov72_022386F4\n    ldr r0, _0223AB80 ; =0x000005DC\n    bl PlaySE\n    b _0223AB74\n    mov r3, #0x20\n    tst r3, r2\n    beq _0223AB28\n    ldr r2, _0223AB7C ; =0x0000130F\n    mov r1, #2\n    ldrb r0, [r4, r2]\n    add r2, #0x55\n    add r2, r4, r2\n    bl ov72_0223A760\n    ldr r1, _0223AB7C ; =0x0000130F\n    strb r0, [r4, r1]\n    mov r0, #0xe\n    lsl r0, r0, #8\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, r0]\n    bl ov72_022386F4\n    ldr r0, _0223AB80 ; =0x000005DC\n    bl PlaySE\n    b _0223AB74\n    mov r3, #0x10\n    tst r2, r3\n    beq _0223AB54\n    ldr r2, _0223AB7C ; =0x0000130F\n    mov r1, #3\n    ldrb r0, [r4, r2]\n    add r2, #0x55\n    add r2, r4, r2\n    bl ov72_0223A760\n    ldr r1, _0223AB7C ; =0x0000130F\n    strb r0, [r4, r1]\n    mov r0, #0xe\n    lsl r0, r0, #8\n    ldrb r1, [r4, r1]\n    ldr r0, [r4, r0]\n    bl ov72_022386F4\n    ldr r0, _0223AB80 ; =0x000005DC\n    bl PlaySE\n    b _0223AB74\n    ldr r2, [r1, #0x48]\n    mov r1, #1\n    tst r1, r2\n    beq _0223AB68\n    ldr r1, _0223AB7C ; =0x0000130F\n    ldrb r1, [r4, r1]\n    add r1, r1, #3\n    bl ov72_0223A8F0\n    b _0223AB74\n    mov r1, #2\n    tst r1, r2\n    beq _0223AB74\n    mov r1, #0xd\n    bl ov72_0223A8F0\n    mov r0, #0\n    pop {r4, pc}\n    _0223AB78: .word gSystem\n    _0223AB7C: .word 0x0000130F\n    _0223AB80: .word 0x000005DC"
    );
    #endif
}

void ov72_0223AB84(void) {
    /* Original at 0x0223AB84 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov72_0223A738\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _0223AB9E\n    add r0, r4, #0\n    bl ov72_0223AA9C\n    b _0223ABA4\n    add r0, r4, #0\n    bl ov72_0223A8F0\n    add r0, r4, #0\n    bl ov72_0223ABB0\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov72_0223ABB0(void) {
    /* Original at 0x0223ABB0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    sub r7, r4, #1\n    ldr r0, _0223ABEC ; =0x00001314\n    add r1, r6, r4\n    ldrsb r1, [r1, r0]\n    cmp r1, r7\n    bne _0223ABD0\n    ldr r0, _0223ABF0 ; =0x00000DF4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    b _0223ABE2\n    cmp r1, #0\n    blt _0223ABE2\n    cmp r1, #9\n    bgt _0223ABE2\n    ldr r0, _0223ABF0 ; =0x00000DF4\n    add r1, r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #3\n    blt _0223ABBA\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223ABEC: .word 0x00001314\n    _0223ABF0: .word 0x00000DF4"
    );
    #endif
}

void ov72_0223ABF4(void) {
    /* Original at 0x0223ABF4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    bx lr"
    );
    #endif
}

void ov72_0223ABF8(void) {
    /* Original at 0x0223ABF8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    bx lr"
    );
    #endif
}

void ov72_0223ABFC(void) {
    /* Original at 0x0223ABFC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    bx lr"
    );
    #endif
}

void ov72_0223AC00(void) {
    /* Original at 0x0223AC00 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r1, #0x43\n    str r1, [sp, #8]\n    mov r1, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, _0223AC28 ; =0x00001312\n    mov r1, #8\n    strb r1, [r4, r0]\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0223AC28: .word 0x00001312"
    );
    #endif
}

void ov72_0223AC2C(void) {
    /* Original at 0x0223AC2C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0223AC62\n    add r0, r4, #0\n    bl ov72_0223AD94\n    add r0, r4, #0\n    mov r1, #0\n    bl ov72_02238B18\n    mov r0, #4\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r2, #0x43\n    str r2, [sp, #8]\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    ldr r0, _0223AC68 ; =0x00001312\n    mov r1, #9\n    strb r1, [r4, r0]\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0223AC68: .word 0x00001312"
    );
    #endif
}

void ov72_0223AC6C(void) {
    ov72_0223AE6C(0);
}

void ov72_0223AC88(void) {
    IsPaletteFadeFinished(0, 0xb);
}

void ov72_0223ACA4(void) {
    /* Original at 0x0223ACA4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #1\n    bx lr"
    );
    #endif
}

void ov72_0223ACA8(void) {
    /* Original at 0x0223ACA8 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r1, _0223AD14 ; =0x00001328\n    ldr r5, _0223AD18 ; =ov72_0223B46C\n    str r0, [sp, #0x14]\n    mov r7, #0\n    mov r4, #0x1f\n    add r6, r0, r1\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r3, [r5]\n    ldr r0, [r0, #4]\n    lsl r3, r3, #0x18\n    add r1, r6, #0\n    mov r2, #4\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add r7, r7, #1\n    add r4, #0x40\n    add r5, r5, #4\n    add r6, #0x10\n    cmp r7, #3\n    blt _0223ACB8\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r2, #4\n    str r2, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x4f\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r3, _0223AD1C ; =0x00001318\n    ldr r1, [sp, #0x14]\n    ldr r0, [r0, #4]\n    add r1, r1, r3\n    mov r3, #2\n    bl AddWindowParameterized\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223AD14: .word 0x00001328\n    _0223AD18: .word ov72_0223B46C\n    _0223AD1C: .word 0x00001318"
    );
    #endif
}

void ov72_0223AD20(void) {
    /* Original at 0x0223AD20 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _0223AD60 ; =0x000F0200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r1, #4\n    add r2, r4, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0223AD60: .word 0x000F0200"
    );
    #endif
}

void ov72_0223AD64(void) {
    /* Original at 0x0223AD64 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _0223AD8C ; =0x00001328\n    mov r4, #0\n    add r5, r6, r0\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _0223AD6E\n    ldr r0, _0223AD90 ; =0x00001318\n    add r0, r6, r0\n    bl RemoveWindow\n    pop {r4, r5, r6, pc}\n    _0223AD8C: .word 0x00001328\n    _0223AD90: .word 0x00001318"
    );
    #endif
}

void ov72_0223AD94(void) {
    /* Original at 0x0223AD94 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl ov72_0223AD64\n    ldr r0, _0223AE08 ; =0x00000DF4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0223AE0C ; =0x00000DF8\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0223AE10 ; =0x00000DFC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0xe\n    lsl r0, r0, #8\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _0223AE14 ; =0x00000E04\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0223AE18 ; =0x00000E08\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _0223AE1C ; =0x00000E0C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r4, #0\n    ldr r6, _0223AE08 ; =0x00000DF4\n    add r7, r4, #0\n    ldr r0, [r5, r6]\n    add r1, r7, #0\n    bl Sprite_SetAnimCtrlSeq\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #3\n    blt _0223ADF6\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223AE08: .word 0x00000DF4\n    _0223AE0C: .word 0x00000DF8\n    _0223AE10: .word 0x00000DFC\n    _0223AE14: .word 0x00000E04\n    _0223AE18: .word 0x00000E08\n    _0223AE1C: .word 0x00000E0C"
    );
    #endif
}

void ov72_0223AE20(void) {
    /* Original at 0x0223AE20 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0223AE64 ; =0x00001358\n    add r4, r5, r0\n    ldrb r0, [r4]\n    cmp r0, #0\n    bne _0223AE42\n    ldrb r0, [r4, #2]\n    lsl r0, r0, #2\n    add r2, r5, r0\n    ldr r0, _0223AE68 ; =0x00000DF4\n    ldr r0, [r2, r0]\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0xc\n    pop {r4, r5, pc}\n    ldrb r0, [r4, #4]\n    str r0, [sp]\n    ldrb r0, [r4, #5]\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldrb r1, [r4, #2]\n    ldrb r2, [r4, #6]\n    ldrb r3, [r4, #7]\n    ldr r0, [r5, #4]\n    bl BgTilemapRectChangePalette\n    ldrb r1, [r4, #2]\n    ldr r0, [r5, #4]\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0223AE64: .word 0x00001358\n    _0223AE68: .word 0x00000DF4"
    );
    #endif
}

void ov72_0223AE6C(void) {
    /* Original at 0x0223AE6C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0223AECC ; =0x00001358\n    add r4, r0, r1\n    ldrb r1, [r4, #1]\n    cmp r1, #0\n    beq _0223AE82\n    cmp r1, #1\n    beq _0223AE94\n    cmp r1, #2\n    beq _0223AEB6\n    b _0223AEC6\n    ldrh r1, [r4, #8]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov72_0223AE20\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    b _0223AEC6\n    ldrb r1, [r4, #3]\n    add r1, r1, #1\n    strb r1, [r4, #3]\n    ldrb r1, [r4, #3]\n    cmp r1, #4\n    bne _0223AEC6\n    ldrh r1, [r4, #0xa]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov72_0223AE20\n    mov r0, #0\n    strb r0, [r4, #3]\n    ldrb r0, [r4, #1]\n    add r0, r0, #1\n    strb r0, [r4, #1]\n    b _0223AEC6\n    ldrb r0, [r4, #3]\n    add r0, r0, #1\n    strb r0, [r4, #3]\n    ldrb r0, [r4, #3]\n    cmp r0, #2\n    bne _0223AEC6\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0223AECC: .word 0x00001358"
    );
    #endif
}

void ov72_0223AED0(void) {
    /* Original at 0x0223AED0 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    ldr r4, _0223AF18 ; =0x00001358\n    mov r5, #1\n    strb r5, [r0, r4]\n    mov r5, #0\n    add r6, r4, #3\n    strb r5, [r0, r6]\n    add r6, r4, #1\n    strb r5, [r0, r6]\n    mov r7, #5\n    add r6, r4, #2\n    strb r7, [r0, r6]\n    add r7, r4, #0\n    add r7, #8\n    mov r6, #1\n    strh r6, [r0, r7]\n    add r6, r4, #0\n    add r6, #0xa\n    strh r5, [r0, r6]\n    add r5, r4, #6\n    strb r1, [r0, r5]\n    add r1, r4, #7\n    strb r2, [r0, r1]\n    mov r2, #6\n    add r1, r4, #4\n    strb r2, [r0, r1]\n    add r1, r4, #5\n    strb r2, [r0, r1]\n    add r1, r4, #0\n    sub r1, #0x45\n    strb r3, [r0, r1]\n    mov r1, #0xa\n    sub r4, #0x46\n    strb r1, [r0, r4]\n    pop {r4, r5, r6, r7}\n    bx lr\n    _0223AF18: .word 0x00001358"
    );
    #endif
}

void ov72_0223AF1C(void) {
    /* Original at 0x0223AF1C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    mov r2, #0\n    add r1, #0x2d\n    strb r2, [r1]\n    add r1, r4, #0\n    add r1, #0x2c\n    ldrb r2, [r1]\n    add r1, r4, #0\n    add r1, #0x33\n    strb r2, [r1]\n    bl ov72_0223B0C4\n    add r0, r4, #0\n    bl ov72_0223B1C8\n    add r0, r4, #0\n    bl ov72_0223B2E4\n    pop {r4, pc}"
    );
    #endif
}

void ov72_0223AF48(void) {
    /* Original at 0x0223AF48 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x2d\n    ldrb r1, [r1]\n    lsl r2, r1, #2\n    ldr r1, _0223AF6C ; =ov72_0223B7FC\n    ldr r1, [r1, r2]\n    blx r1\n    cmp r0, #1\n    bne _0223AF66\n    add r4, #0x33\n    ldrb r0, [r4]\n    add r0, r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0223AF6C: .word ov72_0223B7FC"
    );
    #endif
}

void ov72_0223AF70(void) {
    /* Original at 0x0223AF70 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    add r0, #0x2d\n    strb r1, [r0]\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov72_0223AF7C(void) {
    /* Original at 0x0223AF7C */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, _0223B078 ; =ov72_0223B4C8\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    add r5, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r5, r0\n    beq _0223AFE6\n    ldr r0, _0223B07C ; =0x000005DC\n    bl PlaySE\n    cmp r5, #0\n    bne _0223AFBE\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x33\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x33\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov72_0223B2FC\n    ldr r0, [r4, #4]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #3\n    add r4, #0x2d\n    strb r0, [r4]\n    b _0223B074\n    cmp r5, #1\n    bne _0223B074\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x33\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x33\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov72_0223B2FC\n    ldr r0, [r4, #4]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #3\n    add r4, #0x2d\n    strb r0, [r4]\n    b _0223B074\n    ldr r0, _0223B080 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _0223B00A\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x33\n    strb r1, [r0]\n    add r0, r4, #0\n    add r4, #0x33\n    ldrb r1, [r4]\n    bl ov72_0223B2FC\n    ldr r0, _0223B07C ; =0x000005DC\n    bl PlaySE\n    b _0223B074\n    mov r1, #0x80\n    tst r1, r0\n    beq _0223B02A\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x33\n    strb r1, [r0]\n    add r0, r4, #0\n    add r4, #0x33\n    ldrb r1, [r4]\n    bl ov72_0223B2FC\n    ldr r0, _0223B07C ; =0x000005DC\n    bl PlaySE\n    b _0223B074\n    mov r2, #1\n    add r1, r0, #0\n    tst r1, r2\n    beq _0223B048\n    ldr r0, [r4, #4]\n    mov r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #3\n    add r4, #0x2d\n    strb r0, [r4]\n    ldr r0, _0223B07C ; =0x000005DC\n    bl PlaySE\n    b _0223B074\n    mov r1, #2\n    tst r0, r1\n    beq _0223B074\n    add r0, r4, #0\n    add r0, #0x33\n    add r1, r4, #0\n    strb r2, [r0]\n    add r1, #0x33\n    ldrb r1, [r1]\n    add r0, r4, #0\n    bl ov72_0223B2FC\n    add r0, r4, #0\n    mov r1, #3\n    add r0, #0x2d\n    strb r1, [r0]\n    ldr r0, [r4, #4]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0223B07C ; =0x000005DC\n    bl PlaySE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0223B078: .word ov72_0223B4C8\n    _0223B07C: .word 0x000005DC\n    _0223B080: .word gSystem"
    );
    #endif
}

void ov72_0223B084(void) {
    /* Original at 0x0223B084 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    bx lr"
    );
    #endif
}

void ov72_0223B088(void) {
    /* Original at 0x0223B088 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    beq _0223B09A\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0x2f\n    ldrb r0, [r0]\n    mov r1, #0\n    bl ToggleBgLayer\n    add r0, r4, #0\n    add r0, #0x32\n    ldrb r0, [r0]\n    mov r1, #0\n    bl ToggleBgLayer\n    add r0, r4, #0\n    bl ov72_0223B2C0\n    ldr r0, [r4, #4]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov72_0223B0C4(void) {
    /* Original at 0x0223B0C4 */
    /* Requires manual decompilation - 116 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    ldr r1, [r4, #0x28]\n    mov r0, #0xef\n    bl NARC_New\n    add r1, r4, #0\n    add r1, #0x2f\n    ldrb r1, [r1]\n    str r0, [sp, #0x14]\n    cmp r1, #3\n    bhi _0223B108\n    mov r1, #0x20\n    str r1, [sp]\n    ldr r1, [r4, #0x28]\n    add r3, r4, #0\n    str r1, [sp, #4]\n    add r3, #0x2e\n    ldrb r3, [r3]\n    mov r1, #0\n    add r2, r1, #0\n    lsl r3, r3, #5\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    add r1, r4, #0\n    add r1, #0x30\n    ldrb r1, [r1]\n    ldr r2, [r4, #0x28]\n    mov r0, #0\n    lsl r1, r1, #5\n    bl LoadFontPal0\n    b _0223B130\n    mov r1, #0x20\n    str r1, [sp]\n    ldr r1, [r4, #0x28]\n    add r3, r4, #0\n    str r1, [sp, #4]\n    add r3, #0x2e\n    ldrb r3, [r3]\n    mov r1, #0\n    mov r2, #4\n    lsl r3, r3, #5\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    add r1, r4, #0\n    add r1, #0x30\n    ldrb r1, [r1]\n    ldr r2, [r4, #0x28]\n    mov r0, #4\n    lsl r1, r1, #5\n    bl LoadFontPal0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x28]\n    add r3, r4, #0\n    str r0, [sp, #0xc]\n    add r3, #0x2f\n    ldrb r3, [r3]\n    ldr r0, [sp, #0x14]\n    ldr r2, [r4]\n    mov r1, #1\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    ldr r0, [r4, #0x28]\n    mov r1, #0xa\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    mov r2, #0\n    add r3, sp, #0x18\n    bl GfGfxLoader_GetScrnDataFromOpenNarc\n    add r1, r4, #0\n    add r1, #0x2f\n    str r0, [sp, #0x10]\n    ldrb r1, [r1]\n    ldr r0, [r4]\n    bl GetBgTilemapBuffer\n    ldr r2, [sp, #0x18]\n    mov r5, #3\n    ldr r7, _0223B1C4 ; =0x00000FFF\n    add r3, r0, #0\n    mov r1, #0\n    add r2, #0xc\n    lsl r5, r5, #8\n    add r0, r4, #0\n    add r0, #0x2e\n    ldrh r6, [r2]\n    ldrb r0, [r0]\n    add r1, r1, #1\n    and r6, r7\n    lsl r0, r0, #0xc\n    orr r0, r6\n    strh r0, [r3]\n    add r2, r2, #2\n    add r3, r3, #2\n    cmp r1, r5\n    blt _0223B178\n    add r1, r4, #0\n    add r1, #0x2f\n    ldrb r1, [r1]\n    ldr r0, [r4]\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [sp, #0x10]\n    bl Heap_Free\n    ldr r0, [sp, #0x14]\n    bl NARC_Delete\n    add r0, r4, #0\n    add r0, #0x2f\n    ldrb r0, [r0]\n    mov r1, #1\n    bl ToggleBgLayer\n    add r4, #0x32\n    ldrb r0, [r4]\n    mov r1, #1\n    bl ToggleBgLayer\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _0223B1C4: .word 0x00000FFF"
    );
    #endif
}

void ov72_0223B1C8(void) {
    /* Original at 0x0223B1C8 */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r3, [r5, #0x28]\n    mov r0, #1\n    mov r1, #0x1b\n    mov r2, #0xbf\n    bl NewMsgDataFromNarc\n    add r4, r0, #0\n    mov r0, #8\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x30\n    ldrb r0, [r0]\n    add r2, r5, #0\n    add r1, r5, #0\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r0, #0x31\n    ldrb r0, [r0]\n    add r2, #0x32\n    add r1, #8\n    str r0, [sp, #0x10]\n    ldrb r2, [r2]\n    ldr r0, [r5]\n    mov r3, #0xc\n    bl AddWindowParameterized\n    add r0, r5, #0\n    add r0, #8\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x30\n    ldrb r0, [r0]\n    add r2, r5, #0\n    add r1, r5, #0\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r0, #0x31\n    ldrb r0, [r0]\n    add r2, #0x32\n    add r1, #0x18\n    add r0, #0x10\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldrb r2, [r2]\n    ldr r0, [r5]\n    mov r3, #0xc\n    bl AddWindowParameterized\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    mov r1, #0x2e\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    add r0, r4, #0\n    mov r1, #0x2f\n    bl NewString_ReadMsgData\n    mov r3, #0\n    add r7, r0, #0\n    str r3, [sp]\n    ldr r0, _0223B2BC ; =0x000F0100\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #8\n    mov r1, #4\n    add r2, r6, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _0223B2BC ; =0x000F0100\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0x18\n    mov r1, #4\n    add r2, r7, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    add r0, #8\n    bl CopyWindowToVram\n    add r5, #0x18\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, #0\n    bl DestroyMsgData\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223B2BC: .word 0x000F0100"
    );
    #endif
}

void ov72_0223B2C0(void) {
    /* Original at 0x0223B2C0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, #0x18\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #8\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r4, #0\n    add r0, #0x18\n    bl RemoveWindow\n    add r4, #8\n    add r0, r4, #0\n    bl RemoveWindow\n    pop {r4, pc}"
    );
    #endif
}

void ov72_0223B2E4(void) {
    /* Original at 0x0223B2E4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    add r4, #0x2c\n    ldrb r1, [r4]\n    bl ov72_0223B2FC\n    pop {r4, pc}"
    );
    #endif
}

void ov72_0223B2FC(void) {
    /* Original at 0x0223B2FC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    lsl r3, r1, #2\n    ldr r1, _0223B328 ; =ov72_0223B4C0\n    ldrh r1, [r1, r3]\n    lsl r1, r1, #0xc\n    str r1, [sp]\n    ldr r1, _0223B32C ; =ov72_0223B4C2\n    ldr r2, [r0, #0x34]\n    ldrh r1, [r1, r3]\n    add r1, r2, r1\n    lsl r1, r1, #0xc\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    ldr r0, [r0, #4]\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {pc}\n    nop\n    _0223B328: .word ov72_0223B4C0\n    _0223B32C: .word ov72_0223B4C2"
    );
    #endif
}
