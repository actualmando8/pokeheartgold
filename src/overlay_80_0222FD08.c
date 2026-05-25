/* Decompiled from asm/overlay_80_0222FD08.s */
#include "global.h"

void ov80_0222FD08(void) {
    /* Original at 0x0222FD08 */
    /* Requires manual decompilation - 200 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r4, r0, #0\n    ldr r1, _0222FED4 ; =0x00000708\n    mov r0, #0xb\n    add r7, r2, #0\n    str r3, [sp]\n    bl Heap_Alloc\n    ldr r1, _0222FED8 ; =_0223DD40\n    ldr r2, _0222FED4 ; =0x00000708\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _0222FED8 ; =_0223DD40\n    ldr r5, [r0]\n    add r0, r4, #0\n    bl sub_0203094C\n    ldr r1, _0222FEDC ; =0x000004F4\n    str r0, [r5, r1]\n    add r0, r1, #4\n    str r4, [r5, r0]\n    mov r0, #0xb\n    ldr r1, _0222FED8 ; =_0223DD40\n    str r0, [r5]\n    ldr r5, [r1]\n    bl SaveArray_Party_Alloc\n    ldr r1, _0222FEE0 ; =0x000004D4\n    str r0, [r5, r1]\n    mov r0, #0xb\n    bl SaveArray_Party_Alloc\n    ldr r1, _0222FEE4 ; =0x000004D8\n    str r0, [r5, r1]\n    add r1, #0x1c\n    add r0, r4, #0\n    ldr r5, [r5, r1]\n    bl sub_02030AE8\n    add r4, r0, #0\n    cmp r6, #0\n    bne _0222FE1A\n    ldr r0, _0222FED8 ; =_0223DD40\n    ldr r1, [r0]\n    strb r7, [r1, #4]\n    ldr r0, [sp]\n    strb r0, [r1, #5]\n    mov r0, #0\n    strb r0, [r1, #6]\n    add r0, r5, #0\n    bl sub_02030940\n    ldr r0, _0222FED8 ; =_0223DD40\n    ldr r2, [r0]\n    ldrb r3, [r2, #4]\n    cmp r3, #3\n    bne _0222FD8E\n    ldr r0, _0222FEE8 ; =0x000004F8\n    ldr r0, [r2, r0]\n    bl Save_VarsFlags_Get\n    bl Save_VarsFlags_GetVar4052\n    b _0222FDA2\n    ldrb r2, [r2, #5]\n    add r0, r4, #0\n    mov r1, #0xa\n    lsl r2, r2, #2\n    add r2, r3, r2\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030AD4\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bne _0222FE0A\n    ldr r0, _0222FED8 ; =_0223DD40\n    ldr r5, [r0]\n    ldr r0, _0222FEE8 ; =0x000004F8\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205BFF0\n    add r6, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205BFF0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    strh r0, [r5, #0xc]\n    ldr r0, _0222FED8 ; =_0223DD40\n    ldr r4, [r0]\n    ldr r0, _0222FEE8 ; =0x000004F8\n    ldr r0, [r4, r0]\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    ldrb r0, [r4, #5]\n    ldrb r1, [r4, #4]\n    bl sub_0205C048\n    add r7, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C048\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    b _0222FE12\n    ldr r0, _0222FED8 ; =_0223DD40\n    ldr r4, [r0]\n    mov r0, #0\n    strh r0, [r4, #0xc]\n    strh r0, [r4, #8]\n    mov r0, #0\n    str r0, [r4, #0x10]\n    b _0222FEA8\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl sub_02030A24\n    ldr r1, _0222FED8 ; =_0223DD40\n    ldr r4, [r1]\n    mov r1, #0\n    strb r0, [r4, #4]\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_02030A24\n    mov r2, #0\n    strb r0, [r4, #5]\n    add r0, r5, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl sub_02030A24\n    strb r0, [r4, #6]\n    ldr r0, _0222FED8 ; =_0223DD40\n    ldr r5, [r0]\n    ldr r0, _0222FEE8 ; =0x000004F8\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205BFF0\n    add r7, r0, #0\n    ldrb r0, [r4, #5]\n    ldrb r1, [r4, #4]\n    bl sub_0205BFF0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    strh r0, [r5, #0xc]\n    ldr r0, _0222FED8 ; =_0223DD40\n    ldr r4, [r0]\n    ldr r0, _0222FEE8 ; =0x000004F8\n    ldr r0, [r4, r0]\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    ldrb r0, [r4, #5]\n    ldrb r1, [r4, #4]\n    bl sub_0205C048\n    add r7, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C048\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    strh r0, [r4, #8]\n    ldr r0, _0222FED8 ; =_0223DD40\n    mov r1, #7\n    ldr r4, [r0]\n    ldrh r0, [r4, #0xc]\n    bl _s32_div_f\n    strh r0, [r4, #0xe]\n    ldrb r0, [r4, #4]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _0222FECC\n    ldr r0, _0222FED8 ; =_0223DD40\n    ldr r1, [r0]\n    ldr r0, _0222FEE8 ; =0x000004F8\n    ldr r0, [r1, r0]\n    bl ov80_0222A840\n    ldr r0, _0222FED8 ; =_0223DD40\n    ldr r0, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222FED4: .word 0x00000708\n    _0222FED8: .word _0223DD40\n    _0222FEDC: .word 0x000004F4\n    _0222FEE0: .word 0x000004D4\n    _0222FEE4: .word 0x000004D8\n    _0222FEE8: .word 0x000004F8"
    );
    #endif
}

void ov80_0222FEEC(void) {
    /* Original at 0x0222FEEC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _0222FEF8\n    bl ov80_0222FF00\n    pop {r3, pc}\n    bl ov80_02230270\n    pop {r3, pc}"
    );
    #endif
}

void ov80_0222FF00(void) {
    /* Original at 0x0222FF00 */
    /* Requires manual decompilation - 211 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1fc\n    sub sp, #0xd8\n    add r4, r0, #0\n    bl ov80_022372B4\n    add r1, r0, #0\n    add r2, r4, #0\n    ldrb r0, [r4, #4]\n    add r2, #0x18\n    mov r3, #0xe\n    bl ov80_02236BE4\n    add r0, r4, #0\n    bl ov80_022372B4\n    mov r3, #0x26\n    lsl r3, r3, #4\n    add r1, r4, r3\n    str r1, [sp]\n    add r1, r3, #0\n    add r2, r3, #0\n    add r1, #8\n    add r1, r4, r1\n    str r1, [sp, #4]\n    ldrh r1, [r4, #8]\n    sub r2, #0xc\n    add r3, #0x20\n    str r1, [sp, #8]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    str r1, [sp, #0x10]\n    ldrb r1, [r4, #5]\n    add r2, r4, r2\n    add r3, r4, r3\n    bl ov80_02236E24\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0\n    bl ov80_022300D4\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl ov80_022300D4\n    mov r0, #6\n    str r0, [sp, #0x18]\n    mov r0, #0\n    mov ip, r0\n    add r3, r4, #0\n    add r5, sp, #0x34\n    mov r0, #0xa\n    lsl r0, r0, #6\n    add r2, r3, r0\n    add r7, r5, #0\n    mov r6, #7\n    ldmia r2!, {r0, r1}\n    stmia r7!, {r0, r1}\n    sub r6, r6, #1\n    bne _0222FF74\n    mov r0, ip\n    add r0, r0, #1\n    add r3, #0x38\n    add r5, #0x38\n    mov ip, r0\n    cmp r0, #6\n    blt _0222FF6A\n    ldrb r0, [r4, #4]\n    bl ov80_02237254\n    cmp r0, #1\n    bne _02230038\n    mov r0, #0xa\n    lsl r0, r0, #6\n    ldr r7, _022300C4 ; =0x00000282\n    mov r5, #0\n    add r0, r4, r0\n    add r1, sp, #0x28\n    add r2, r4, #0\n    add r3, sp, #0x1c\n    ldrh r6, [r0]\n    add r5, r5, #1\n    add r0, #0x38\n    lsl r6, r6, #0x15\n    lsr r6, r6, #0x15\n    strh r6, [r1]\n    ldrh r6, [r2, r7]\n    add r1, r1, #2\n    add r2, #0x38\n    strh r6, [r3]\n    add r3, r3, #2\n    cmp r5, #6\n    blt _0222FFA4\n    add r0, r4, #0\n    bl ov80_022372B4\n    mov r3, #0x59\n    lsl r3, r3, #4\n    add r1, r4, r3\n    str r1, [sp]\n    add r1, r3, #0\n    add r1, #8\n    add r1, r4, r1\n    str r1, [sp, #4]\n    add r1, r3, #0\n    add r2, r3, #0\n    sub r1, #0x10\n    ldrh r1, [r4, r1]\n    sub r2, #0xc\n    add r3, #0x20\n    str r1, [sp, #8]\n    add r1, sp, #0x28\n    str r1, [sp, #0xc]\n    add r1, sp, #0x1c\n    str r1, [sp, #0x10]\n    ldrb r1, [r4, #5]\n    add r2, r4, r2\n    add r3, r4, r3\n    bl ov80_02236E24\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov80_022300D4\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #1\n    bl ov80_022300D4\n    mov r0, #0xc\n    str r0, [sp, #0x18]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    add r5, r4, #0\n    add r6, sp, #0x34\n    mov r0, #0x5b\n    lsl r0, r0, #4\n    add r3, r5, r0\n    mov r0, #0x15\n    lsl r0, r0, #4\n    add r2, r6, r0\n    mov r7, #7\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    sub r7, r7, #1\n    bne _02230022\n    ldr r0, [sp, #0x14]\n    add r5, #0x38\n    add r0, r0, #1\n    add r6, #0x38\n    str r0, [sp, #0x14]\n    cmp r0, #6\n    blt _02230014\n    ldrb r0, [r4, #4]\n    mov r1, #1\n    bl ov80_02236DF8\n    ldr r2, _022300C8 ; =0x000003D2\n    add r3, sp, #0x34\n    add r1, r4, r2\n    str r1, [sp]\n    add r1, r2, #0\n    add r1, #0x1e\n    add r1, r4, r1\n    str r1, [sp, #4]\n    add r1, r2, #0\n    add r1, #8\n    add r1, r4, r1\n    add r2, #0xe\n    str r1, [sp, #8]\n    add r1, r4, r2\n    str r1, [sp, #0xc]\n    ldr r1, [sp, #0x18]\n    str r1, [sp, #0x10]\n    ldrb r1, [r4, #6]\n    ldrb r2, [r4, #5]\n    lsl r1, r1, #1\n    add r1, r4, r1\n    ldrh r1, [r1, #0x18]\n    bl ov80_02236E90\n    mov r0, #0xa\n    lsl r0, r0, #6\n    mov r7, #0\n    add r6, r4, r0\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r5, r0, #0\n    add r0, r4, #0\n    bl ov80_02237120\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    bl ov80_0222A140\n    ldr r0, _022300CC ; =0x000004F8\n    ldr r1, _022300D0 ; =0x000004D4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    add r2, r5, #0\n    bl ov80_0222A3BC\n    add r0, r5, #0\n    bl Heap_Free\n    add r7, r7, #1\n    add r6, #0x38\n    cmp r7, #6\n    blt _02230078\n    ldr r6, _022300D0 ; =0x000004D4\n    mov r5, #0\n    ldr r0, [r4, r6]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    add r5, r5, #1\n    cmp r5, #6\n    blt _022300B0\n    add sp, #0x1fc\n    add sp, #0xd8\n    pop {r4, r5, r6, r7, pc}\n    _022300C4: .word 0x00000282\n    _022300C8: .word 0x000003D2\n    _022300CC: .word 0x000004F8\n    _022300D0: .word 0x000004D4"
    );
    #endif
}

void ov80_022300D4(void) {
    /* Original at 0x022300D4 */
    /* Requires manual decompilation - 203 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xdc\n    add r4, r0, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    bl LCRandom\n    mov r1, #6\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    lsr r2, r0, #0x10\n    cmp r6, #0\n    bne _022301B0\n    mov r0, #0x95\n    lsl r0, r0, #2\n    add r1, r4, r0\n    lsl r3, r5, #1\n    str r1, [sp, #0x5c]\n    ldrh r1, [r1, r3]\n    str r3, [sp, #0x20]\n    add r6, sp, #0xa4\n    str r1, [sp, #0x1c]\n    add r1, r0, #0\n    add r1, #0xc\n    add r1, r4, r1\n    str r1, [sp, #0x24]\n    ldrb r1, [r1, r5]\n    mov r7, #7\n    str r1, [sp, #0x18]\n    add r1, r0, #0\n    add r1, #0x14\n    add r1, r4, r1\n    str r1, [sp, #0x28]\n    lsl r1, r5, #2\n    ldr r3, [sp, #0x28]\n    str r1, [sp, #0x2c]\n    ldr r1, [r3, r1]\n    add r0, #0x2c\n    str r1, [sp, #0x14]\n    add r1, r4, r0\n    mov r0, #0x38\n    mul r0, r5\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    str r0, [sp, #0x30]\n    ldr r3, [sp, #0x30]\n    sub r7, r7, #1\n    ldmia r3!, {r0, r1}\n    str r3, [sp, #0x30]\n    stmia r6!, {r0, r1}\n    bne _02230130\n    mov r0, #0x95\n    lsl r0, r0, #2\n    add r1, r4, r0\n    str r1, [sp, #0x34]\n    ldr r3, [sp, #0x34]\n    lsl r1, r2, #1\n    ldrh r6, [r3, r1]\n    str r1, [sp, #0x38]\n    ldr r3, [sp, #0x20]\n    ldr r1, [sp, #0x5c]\n    strh r6, [r1, r3]\n    add r1, r0, #0\n    add r1, #0xc\n    add r1, r4, r1\n    ldrb r3, [r1, r2]\n    str r1, [sp, #0x3c]\n    ldr r1, [sp, #0x24]\n    strb r3, [r1, r5]\n    add r1, r0, #0\n    add r1, #0x14\n    add r7, r4, r1\n    lsl r1, r2, #2\n    str r1, [sp, #0x60]\n    ldr r5, [r7, r1]\n    ldr r3, [sp, #0x28]\n    ldr r1, [sp, #0x2c]\n    add r0, #0x2c\n    str r5, [r3, r1]\n    add r1, r4, r0\n    mov r0, #0x38\n    mul r0, r2\n    add r6, r1, r0\n    add r5, r6, #0\n    mov r4, #7\n    ldr r3, [sp, #0x10]\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    str r3, [sp, #0x10]\n    sub r4, r4, #1\n    bne _02230180\n    ldr r3, [sp, #0x1c]\n    ldr r1, [sp, #0x34]\n    ldr r0, [sp, #0x38]\n    strh r3, [r1, r0]\n    ldr r1, [sp, #0x18]\n    ldr r0, [sp, #0x3c]\n    add r3, sp, #0xa4\n    strb r1, [r0, r2]\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0x60]\n    mov r2, #7\n    str r1, [r7, r0]\n    ldmia r3!, {r0, r1}\n    stmia r6!, {r0, r1}\n    sub r2, r2, #1\n    bne _022301A4\n    add sp, #0xdc\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, _0223026C ; =0x00000584\n    lsl r3, r5, #1\n    add r1, r4, r0\n    str r1, [sp, #0x64]\n    ldrh r1, [r1, r3]\n    str r3, [sp, #0x40]\n    add r6, sp, #0x6c\n    str r1, [sp, #8]\n    add r1, r0, #0\n    add r1, #0xc\n    add r1, r4, r1\n    str r1, [sp, #0x44]\n    ldrb r1, [r1, r5]\n    mov r7, #7\n    str r1, [sp, #4]\n    add r1, r0, #0\n    add r1, #0x14\n    add r1, r4, r1\n    str r1, [sp, #0x48]\n    lsl r1, r5, #2\n    ldr r3, [sp, #0x48]\n    str r1, [sp, #0x4c]\n    ldr r1, [r3, r1]\n    add r0, #0x2c\n    str r1, [sp]\n    add r1, r4, r0\n    mov r0, #0x38\n    mul r0, r5\n    add r0, r1, r0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x50]\n    ldr r3, [sp, #0x50]\n    sub r7, r7, #1\n    ldmia r3!, {r0, r1}\n    str r3, [sp, #0x50]\n    stmia r6!, {r0, r1}\n    bne _022301EE\n    ldr r3, _0223026C ; =0x00000584\n    add r0, r4, r3\n    str r0, [sp, #0x54]\n    ldr r1, [sp, #0x54]\n    lsl r0, r2, #1\n    ldrh r6, [r1, r0]\n    str r0, [sp, #0x58]\n    ldr r1, [sp, #0x40]\n    ldr r0, [sp, #0x64]\n    strh r6, [r0, r1]\n    add r0, r3, #0\n    add r0, #0xc\n    add r0, r4, r0\n    ldrb r1, [r0, r2]\n    mov ip, r0\n    ldr r0, [sp, #0x44]\n    strb r1, [r0, r5]\n    add r0, r3, #0\n    add r0, #0x14\n    add r7, r4, r0\n    lsl r0, r2, #2\n    str r0, [sp, #0x68]\n    ldr r5, [r7, r0]\n    ldr r1, [sp, #0x48]\n    ldr r0, [sp, #0x4c]\n    add r3, #0x2c\n    str r5, [r1, r0]\n    mov r0, #0x38\n    add r1, r4, r3\n    mul r0, r2\n    add r5, r1, r0\n    add r6, r5, #0\n    mov r4, #7\n    ldr r3, [sp, #0xc]\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    str r3, [sp, #0xc]\n    sub r4, r4, #1\n    bne _0223023C\n    ldr r3, [sp, #8]\n    ldr r1, [sp, #0x54]\n    ldr r0, [sp, #0x58]\n    strh r3, [r1, r0]\n    ldr r1, [sp, #4]\n    mov r0, ip\n    strb r1, [r0, r2]\n    ldr r1, [sp]\n    ldr r0, [sp, #0x68]\n    add r3, sp, #0x6c\n    str r1, [r7, r0]\n    mov r2, #7\n    ldmia r3!, {r0, r1}\n    stmia r5!, {r0, r1}\n    sub r2, r2, #1\n    bne _02230260\n    add sp, #0xdc\n    pop {r4, r5, r6, r7, pc}\n    _0223026C: .word 0x00000584"
    );
    #endif
}

void ov80_02230270(void) {
    /* Original at 0x02230270 */
    /* Requires manual decompilation - 192 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x19c\n    add r5, r0, #0\n    ldrb r0, [r5, #4]\n    bl ov80_02236DD4\n    ldr r7, _0223040C ; =0x000004F4\n    mov r4, #0\n    add r6, r5, #0\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r7]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030A24\n    strh r0, [r6, #0x18]\n    add r4, r4, #1\n    add r6, r6, #2\n    cmp r4, #0xe\n    blt _02230282\n    add r0, sp, #0x28\n    mov r4, #0\n    add r6, sp, #0x40\n    str r0, [sp, #0x14]\n    add r7, sp, #0x20\n    str r5, [sp, #0x10]\n    ldr r0, _0223040C ; =0x000004F4\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #4\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030A24\n    strh r0, [r6]\n    ldr r0, _0223040C ; =0x000004F4\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #6\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030A24\n    ldr r1, [sp, #0x14]\n    lsl r2, r4, #0x18\n    str r0, [r1]\n    ldr r0, _0223040C ; =0x000004F4\n    mov r1, #5\n    ldr r0, [r5, r0]\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030A24\n    strb r0, [r7]\n    ldrh r2, [r6]\n    ldr r1, [sp, #0x10]\n    ldr r0, _02230410 ; =0x000004E8\n    add r4, r4, #1\n    strh r2, [r1, r0]\n    ldr r0, [sp, #0x14]\n    add r6, r6, #2\n    add r0, r0, #4\n    str r0, [sp, #0x14]\n    add r0, r1, #0\n    add r0, r0, #2\n    add r7, r7, #1\n    str r0, [sp, #0x10]\n    cmp r4, #4\n    blt _022302A6\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #0xcd\n    str r0, [sp, #0xc]\n    add r0, sp, #0x4c\n    add r1, sp, #0x40\n    add r2, sp, #0x20\n    add r3, sp, #0x28\n    bl ov80_0222A52C\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    mov r7, #0\n    add r4, sp, #0x4c\n    add r0, r5, #0\n    bl ov80_02237120\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov80_0222A140\n    ldr r0, _02230414 ; =0x000004F8\n    ldr r1, _02230418 ; =0x000004D4\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl ov80_0222A3BC\n    add r7, r7, #1\n    add r4, #0x38\n    cmp r7, #4\n    blt _02230324\n    add r0, r6, #0\n    bl Heap_Free\n    add r0, sp, #0x28\n    mov r4, #0\n    add r6, sp, #0x40\n    str r0, [sp, #0x1c]\n    add r7, sp, #0x20\n    str r5, [sp, #0x18]\n    ldr r0, _0223040C ; =0x000004F4\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #7\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030A24\n    strh r0, [r6]\n    ldr r0, _0223040C ; =0x000004F4\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #9\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030A24\n    ldr r1, [sp, #0x1c]\n    lsl r2, r4, #0x18\n    str r0, [r1]\n    ldr r0, _0223040C ; =0x000004F4\n    mov r1, #8\n    ldr r0, [r5, r0]\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030A24\n    strb r0, [r7]\n    ldrh r2, [r6]\n    ldr r1, [sp, #0x18]\n    ldr r0, _0223041C ; =0x000003D2\n    add r4, r4, #1\n    strh r2, [r1, r0]\n    ldr r0, [sp, #0x1c]\n    add r6, r6, #2\n    add r0, r0, #4\n    str r0, [sp, #0x1c]\n    add r0, r1, #0\n    add r0, r0, #2\n    add r7, r7, #1\n    str r0, [sp, #0x18]\n    cmp r4, #4\n    blt _0223035C\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #0xcd\n    str r0, [sp, #0xc]\n    add r0, sp, #0x4c\n    add r1, sp, #0x40\n    add r2, sp, #0x20\n    add r3, sp, #0x28\n    bl ov80_0222A52C\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    mov r7, #0\n    add r4, sp, #0x4c\n    add r0, r5, #0\n    bl ov80_02237120\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov80_0222A140\n    ldr r0, _02230414 ; =0x000004F8\n    ldr r1, _02230420 ; =0x000004D8\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl ov80_0222A3BC\n    add r7, r7, #1\n    add r4, #0x38\n    cmp r7, #4\n    blt _022303DA\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #0x19c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223040C: .word 0x000004F4\n    _02230410: .word 0x000004E8\n    _02230414: .word 0x000004F8\n    _02230418: .word 0x000004D4\n    _0223041C: .word 0x000003D2\n    _02230420: .word 0x000004D8"
    );
    #endif
}

void ov80_02230424(void) {
    /* Original at 0x02230424 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _02230452\n    ldr r0, _02230454 ; =0x000004D4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02230436\n    bl Heap_Free\n    ldr r0, _02230458 ; =0x000004D8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02230442\n    bl Heap_Free\n    ldr r2, _0223045C ; =0x00000708\n    add r0, r4, #0\n    mov r1, #0\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}\n    _02230454: .word 0x000004D4\n    _02230458: .word 0x000004D8\n    _0223045C: .word 0x00000708"
    );
    #endif
}

void ov80_02230460(void) {
    /* Original at 0x02230460 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _02230480 ; =0x000004DC\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    bl ov80_02230484\n    strh r0, [r5, r7]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #6\n    blt _0223046A\n    pop {r3, r4, r5, r6, r7, pc}\n    _02230480: .word 0x000004DC"
    );
    #endif
}

void ov80_02230484(void) {
    GF_AssertFail(0);
}

void ov80_0223049C(void) {
    /* Original at 0x0223049C */
    /* Requires manual decompilation - 311 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    ldr r0, _02230768 ; =0x000004F8\n    add r6, r1, #0\n    ldr r0, [r5, r0]\n    bl sub_02030AE8\n    str r0, [sp]\n    ldr r0, _02230768 ; =0x000004F8\n    ldr r0, [r5, r0]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    ldrb r0, [r5, #4]\n    bl ov80_02236DD4\n    ldrb r0, [r5, #4]\n    mov r1, #1\n    bl ov80_02236DF8\n    ldrb r1, [r5, #5]\n    add r0, sp, #4\n    add r3, sp, #0xc\n    strb r1, [r0, #8]\n    ldr r0, _0223076C ; =0x000004F4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r1, #0\n    bl sub_02030978\n    ldrb r1, [r5, #4]\n    add r0, sp, #4\n    mov r2, #0\n    strb r1, [r0, #8]\n    ldr r0, _0223076C ; =0x000004F4\n    mov r1, #1\n    ldr r0, [r5, r0]\n    add r3, sp, #0xc\n    bl sub_02030978\n    ldr r0, _0223076C ; =0x000004F4\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl sub_02030964\n    ldrb r1, [r5, #6]\n    add r0, sp, #4\n    mov r2, #0\n    strb r1, [r0, #8]\n    ldr r0, _0223076C ; =0x000004F4\n    mov r1, #2\n    ldr r0, [r5, r0]\n    add r3, sp, #0xc\n    bl sub_02030978\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C048\n    add r7, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C048\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #8]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl sub_02031108\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205BFF0\n    add r7, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205BFF0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #0xc]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl sub_02031108\n    cmp r6, #2\n    beq _02230648\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C01C\n    add r6, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C01C\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    add r6, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C01C\n    add r7, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C01C\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #0xc]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl sub_0203126C\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C01C\n    add r7, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C01C\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    ldrh r1, [r5, #0xc]\n    cmp r1, r6\n    bne _022305E2\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C074\n    add r6, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C074\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #8]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_0203126C\n    b _02230608\n    cmp r6, r0\n    bhs _02230608\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C074\n    add r6, r0, #0\n    ldrb r0, [r5, #5]\n    ldrb r1, [r5, #4]\n    bl sub_0205C074\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #8]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_02031108\n    ldrb r1, [r5, #0xa]\n    add r0, sp, #4\n    strb r1, [r0, #8]\n    ldrb r2, [r5, #5]\n    ldrb r3, [r5, #4]\n    ldr r0, [sp]\n    lsl r2, r2, #2\n    add r2, r3, r2\n    lsl r2, r2, #0x18\n    mov r1, #0xa\n    lsr r2, r2, #0x18\n    add r3, sp, #0xc\n    bl sub_02030AA4\n    ldrb r0, [r5, #4]\n    cmp r0, #3\n    bne _02230648\n    ldrb r0, [r5, #5]\n    cmp r0, #0\n    bne _02230634\n    mov r6, #0x66\n    b _02230636\n    mov r6, #0x68\n    add r0, r6, #0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrb r3, [r5, #0xa]\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_02031108\n    ldr r7, _0223076C ; =0x000004F4\n    mov r4, #0\n    add r6, sp, #4\n    lsl r0, r4, #1\n    add r0, r5, r0\n    ldrh r0, [r0, #0x18]\n    lsl r2, r4, #0x18\n    mov r1, #3\n    strh r0, [r6]\n    ldr r0, [r5, r7]\n    lsr r2, r2, #0x18\n    add r3, sp, #4\n    bl sub_02030978\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0xe\n    blo _0223064E\n    ldr r0, _02230770 ; =0x000004D4\n    ldr r0, [r5, r0]\n    bl Party_GetCount\n    add r7, r0, #0\n    ldr r4, _02230774 ; =0x00000000\n    beq _022306E8\n    ldr r0, _02230770 ; =0x000004D4\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    add r6, r0, #0\n    lsl r0, r4, #1\n    add r1, r5, r0\n    ldr r0, _02230778 ; =0x000004E8\n    lsl r2, r4, #0x18\n    ldrh r1, [r1, r0]\n    add r0, sp, #4\n    lsr r2, r2, #0x18\n    strh r1, [r0]\n    ldr r0, _0223076C ; =0x000004F4\n    mov r1, #4\n    ldr r0, [r5, r0]\n    add r3, sp, #4\n    bl sub_02030978\n    add r0, r6, #0\n    mov r1, #0x47\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #4\n    strb r0, [r1, #8]\n    ldr r0, _0223076C ; =0x000004F4\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #5\n    lsr r2, r2, #0x18\n    add r3, sp, #0xc\n    bl sub_02030978\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r1, #0\n    bl GetMonData\n    str r0, [sp, #0x10]\n    ldr r0, _0223076C ; =0x000004F4\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #6\n    lsr r2, r2, #0x18\n    add r3, sp, #0x10\n    bl sub_02030978\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, r7\n    blo _0223067C\n    ldr r0, _0223077C ; =0x000004D8\n    ldr r0, [r5, r0]\n    bl Party_GetCount\n    add r7, r0, #0\n    ldr r4, _02230774 ; =0x00000000\n    beq _02230762\n    ldr r0, _0223077C ; =0x000004D8\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    add r6, r0, #0\n    lsl r0, r4, #1\n    add r1, r5, r0\n    ldr r0, _02230780 ; =0x000003D2\n    lsl r2, r4, #0x18\n    ldrh r1, [r1, r0]\n    add r0, sp, #4\n    lsr r2, r2, #0x18\n    strh r1, [r0]\n    ldr r0, _0223076C ; =0x000004F4\n    mov r1, #7\n    ldr r0, [r5, r0]\n    add r3, sp, #4\n    bl sub_02030978\n    add r0, r6, #0\n    mov r1, #0x47\n    mov r2, #0\n    bl GetMonData\n    add r1, sp, #4\n    strb r0, [r1, #8]\n    ldr r0, _0223076C ; =0x000004F4\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #8\n    lsr r2, r2, #0x18\n    add r3, sp, #0xc\n    bl sub_02030978\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r1, #0\n    bl GetMonData\n    str r0, [sp, #0x10]\n    ldr r0, _0223076C ; =0x000004F4\n    lsl r2, r4, #0x18\n    ldr r0, [r5, r0]\n    mov r1, #9\n    lsr r2, r2, #0x18\n    add r3, sp, #0x10\n    bl sub_02030978\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, r7\n    blo _022306F6\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02230768: .word 0x000004F8\n    _0223076C: .word 0x000004F4\n    _02230770: .word 0x000004D4\n    _02230774: .word 0x00000000\n    _02230778: .word 0x000004E8\n    _0223077C: .word 0x000004D8\n    _02230780: .word 0x000003D2"
    );
    #endif
}

void ov80_02230784(void) {
    /* Original at 0x02230784 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #6]\n    add r1, r1, #1\n    strb r1, [r0, #6]\n    ldrb r0, [r0, #6]\n    bx lr"
    );
    #endif
}

void ov80_02230790(void) {
    /* Original at 0x02230790 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #6]\n    bx lr"
    );
    #endif
}

void ov80_02230794(void) {
    /* Original at 0x02230794 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x30\n    add r2, r0, #0\n    ldrb r4, [r2, #6]\n    mov r3, #7\n    mul r3, r1\n    add r1, r4, r3\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x17\n    add r1, r2, r1\n    ldrh r1, [r1, #0x18]\n    add r0, sp, #0\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_02229F04\n    bl Heap_Free\n    add r0, sp, #0\n    ldrh r0, [r0, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl ov80_0222A30C\n    add sp, #0x30\n    pop {r4, pc}"
    );
    #endif
}

void ov80_022307C8(void) {
    ov80_0223049C();
}

void ov80_022307D4(void) {
    /* Original at 0x022307D4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    strb r1, [r0, #0xa]\n    ldrh r1, [r0, #0xe]\n    cmp r1, #8\n    bhs _022307E2\n    add r1, r1, #1\n    strh r1, [r0, #0xe]\n    ldr r3, _022307EC ; =ov80_0223049C\n    mov r1, #0\n    strb r1, [r0, #6]\n    bx r3\n    nop\n    _022307EC: .word ov80_0223049C"
    );
    #endif
}

void ov80_022307F0(void) {
    /* Original at 0x022307F0 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldrb r0, [r5, #4]\n    bl ov80_02236DD4\n    str r0, [sp, #4]\n    ldrb r0, [r5, #4]\n    mov r1, #1\n    bl ov80_02236DF8\n    str r0, [sp]\n    ldr r0, _022308B0 ; =0x000004D4\n    ldr r0, [r5, r0]\n    bl SaveArray_Party_Init\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    ldr r0, [sp, #4]\n    mov r7, #0\n    cmp r0, #0\n    ble _0223086E\n    mov r0, #0xa\n    lsl r0, r0, #6\n    add r0, r5, r0\n    add r4, r5, #0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl ov80_02237120\n    add r2, r0, #0\n    ldr r0, _022308B4 ; =0x000004DC\n    mov r1, #0x38\n    ldrh r0, [r4, r0]\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r0, r0, r1\n    add r1, r6, #0\n    bl ov80_0222A140\n    ldr r0, _022308B8 ; =0x000004F8\n    ldr r1, _022308B0 ; =0x000004D4\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl ov80_0222A3BC\n    ldr r0, _022308B4 ; =0x000004DC\n    add r7, r7, #1\n    ldrh r0, [r4, r0]\n    lsl r0, r0, #1\n    add r1, r5, r0\n    mov r0, #0x95\n    lsl r0, r0, #2\n    ldrh r1, [r1, r0]\n    ldr r0, _022308BC ; =0x000004E8\n    strh r1, [r4, r0]\n    ldr r0, [sp, #4]\n    add r4, r4, #2\n    cmp r7, r0\n    blt _0223082A\n    ldr r0, [sp]\n    mov r7, #0\n    cmp r0, #0\n    ble _022308A4\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    add r4, r5, r0\n    add r0, r5, #0\n    bl ov80_02237120\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov80_0222A140\n    ldr r0, _022308B8 ; =0x000004F8\n    ldr r1, _022308C0 ; =0x000004D8\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    add r2, r6, #0\n    bl ov80_0222A3BC\n    ldr r0, [sp]\n    add r7, r7, #1\n    add r4, #0x38\n    cmp r7, r0\n    blt _0223087C\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022308B0: .word 0x000004D4\n    _022308B4: .word 0x000004DC\n    _022308B8: .word 0x000004F8\n    _022308BC: .word 0x000004E8\n    _022308C0: .word 0x000004D8"
    );
    #endif
}

void ov80_022308C4(void) {
    /* Original at 0x022308C4 */
    /* Requires manual decompilation - 139 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    mov r1, #0\n    add r5, r0, #0\n    add r2, sp, #0x3c\n    add r3, sp, #0x2c\n    add r0, r1, #0\n    add r1, r1, #1\n    strh r0, [r2]\n    strh r0, [r3]\n    add r2, r2, #2\n    add r3, r3, #2\n    cmp r1, #8\n    blt _022308D2\n    ldrb r0, [r5, #4]\n    mov r1, #1\n    bl ov80_02236DF8\n    str r0, [sp, #0x1c]\n    ldr r0, _022309EC ; =0x000004D4\n    ldr r0, [r5, r0]\n    bl Party_GetCount\n    mov r7, #0\n    str r0, [sp, #0x20]\n    cmp r0, #0\n    ble _0223092C\n    add r6, sp, #0x3c\n    add r4, sp, #0x2c\n    ldr r0, _022309EC ; =0x000004D4\n    add r1, r7, #0\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    str r0, [sp, #0x24]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r6]\n    ldr r0, [sp, #0x24]\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4]\n    ldr r0, [sp, #0x20]\n    add r7, r7, #1\n    add r6, r6, #2\n    add r4, r4, #2\n    cmp r7, r0\n    blt _022308FE\n    ldr r0, _022309F0 ; =0x000004D8\n    ldr r0, [r5, r0]\n    bl Party_GetCount\n    mov r7, #0\n    str r0, [sp, #0x14]\n    cmp r0, #0\n    ble _0223098A\n    ldr r0, [sp, #0x20]\n    str r5, [sp, #0x18]\n    lsl r1, r0, #1\n    add r0, sp, #0x3c\n    add r6, r0, r1\n    add r0, sp, #0x2c\n    add r4, r0, r1\n    ldr r0, _022309F0 ; =0x000004D8\n    add r1, r7, #0\n    ldr r0, [r5, r0]\n    bl Party_GetMonByIndex\n    str r0, [sp, #0x28]\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r6]\n    ldr r0, [sp, #0x28]\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r4]\n    ldr r1, [sp, #0x18]\n    ldr r0, _022309F4 ; =0x000003D2\n    add r7, r7, #1\n    ldrh r2, [r1, r0]\n    mov r0, #0x95\n    lsl r0, r0, #2\n    strh r2, [r1, r0]\n    add r0, r1, #0\n    add r0, r0, #2\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    add r6, r6, #2\n    add r4, r4, #2\n    cmp r7, r0\n    blt _0223094A\n    ldrb r0, [r5, #6]\n    ldrb r1, [r5, #5]\n    lsl r0, r0, #1\n    add r0, r5, r0\n    ldrh r0, [r0, #0x18]\n    bl ov80_02236C2C\n    ldr r1, _022309F4 ; =0x000003D2\n    ldr r3, [sp, #0x20]\n    add r2, r5, r1\n    str r2, [sp]\n    mov r2, #0xb\n    str r2, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    ldr r2, [sp, #0x14]\n    add r1, #8\n    str r0, [sp, #0xc]\n    add r0, r5, r1\n    str r0, [sp, #0x10]\n    add r2, r3, r2\n    ldr r3, [sp, #0x1c]\n    add r0, sp, #0x3c\n    add r1, sp, #0x2c\n    bl ov80_02236C9C\n    mov r2, #0x3e\n    lsl r2, r2, #4\n    add r0, r5, r2\n    str r0, [sp]\n    ldr r0, [sp, #0x1c]\n    add r1, r2, #0\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #0xcd\n    str r0, [sp, #0xc]\n    add r0, r2, #0\n    add r0, #0x10\n    sub r1, #0xe\n    sub r2, r2, #6\n    add r0, r5, r0\n    add r1, r5, r1\n    add r2, r5, r2\n    mov r3, #0\n    bl ov80_0222A52C\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}\n    _022309EC: .word 0x000004D4\n    _022309F0: .word 0x000004D8\n    _022309F4: .word 0x000003D2"
    );
    #endif
}

void ov80_022309F8(void) {
    /* Original at 0x022309F8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02230A50 ; =0x000004DC\n    add r4, r0, #0\n    ldrh r0, [r4, r1]\n    cmp r0, #0xff\n    beq _02230A4C\n    sub r0, r1, #4\n    add r1, r1, #2\n    ldrh r1, [r4, r1]\n    ldr r0, [r4, r0]\n    bl Party_GetMonByIndex\n    ldr r1, _02230A54 ; =0x000004D4\n    add r2, r0, #0\n    ldr r0, [r4, r1]\n    add r1, #8\n    ldrh r1, [r4, r1]\n    bl Party_SafeCopyMonToSlot_ResetAprijuiceModifiers\n    ldr r1, _02230A58 ; =0x000004DE\n    ldrh r0, [r4, r1]\n    lsl r0, r0, #1\n    add r2, r4, r0\n    mov r0, #0x95\n    lsl r0, r0, #2\n    ldrh r2, [r2, r0]\n    sub r0, r1, #2\n    ldrh r0, [r4, r0]\n    add r1, #0xa\n    lsl r0, r0, #1\n    add r0, r4, r0\n    strh r2, [r0, r1]\n    add r0, r4, #0\n    bl ov80_02230AE4\n    ldr r0, _02230A5C ; =0x000004F8\n    ldr r0, [r4, r0]\n    bl Save_GameStats_Get\n    mov r1, #0x41\n    bl GameStats_Inc\n    pop {r4, pc}\n    nop\n    _02230A50: .word 0x000004DC\n    _02230A54: .word 0x000004D4\n    _02230A58: .word 0x000004DE\n    _02230A5C: .word 0x000004F8"
    );
    #endif
}

void ov80_02230A60(void) {
    /* Original at 0x02230A60 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #4]\n    bl ov80_02236DD4\n    ldrb r0, [r4, #4]\n    mov r1, #1\n    bl ov80_02236DF8\n    add r6, r0, #0\n    ldr r0, _02230ADC ; =0x000004D8\n    ldr r0, [r4, r0]\n    bl SaveArray_Party_Init\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r7, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    cmp r6, #0\n    ble _02230ABC\n    mov r0, #0x3f\n    lsl r0, r0, #4\n    add r5, r4, r0\n    add r0, r4, #0\n    bl ov80_02237120\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov80_0222A140\n    ldr r0, _02230AE0 ; =0x000004F8\n    ldr r1, _02230ADC ; =0x000004D8\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    add r2, r7, #0\n    bl ov80_0222A3BC\n    ldr r0, [sp]\n    add r5, #0x38\n    add r0, r0, #1\n    str r0, [sp]\n    cmp r0, r6\n    blt _02230A92\n    add r0, r7, #0\n    bl Heap_Free\n    mov r5, #0\n    cmp r6, #0\n    ble _02230AD8\n    ldr r7, _02230ADC ; =0x000004D8\n    ldr r0, [r4, r7]\n    add r1, r5, #0\n    bl Party_GetMonByIndex\n    add r5, r5, #1\n    cmp r5, r6\n    blt _02230ACA\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02230ADC: .word 0x000004D8\n    _02230AE0: .word 0x000004F8"
    );
    #endif
}

void ov80_02230AE4(void) {
    /* Original at 0x02230AE4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r2, [r0, #8]\n    ldr r1, _02230AF4 ; =0x0000270F\n    cmp r2, r1\n    bhs _02230AF0\n    add r1, r2, #1\n    strh r1, [r0, #8]\n    bx lr\n    nop\n    _02230AF4: .word 0x0000270F"
    );
    #endif
}

void ov80_02230AF8(void) {
    /* Original at 0x02230AF8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #6\n    bhi _02230B48\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02230B0A: ; jump table\n    bl ov80_0222B108\n    pop {r3, pc}\n    bl ov80_0222B174\n    pop {r3, pc}\n    bl ov80_0222B1DC\n    pop {r3, pc}\n    bl ov80_0222B2C4\n    pop {r3, pc}\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    bl ov80_0222B3B0\n    pop {r3, pc}\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    bl ov80_0222B3FC\n    pop {r3, pc}\n    bl ov80_0222B448\n    pop {r3, pc}"
    );
    #endif
}

void ov80_02230B4C(void) {
    /* Original at 0x02230B4C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r3, [r0, #4]\n    ldrh r2, [r0, #0xe]\n    cmp r3, #1\n    bhi _02230B62\n    cmp r2, #8\n    blo _02230B5C\n    mov r1, #9\n    b _02230B6E\n    ldr r1, _02230B84 ; =ov80_0223BDD4\n    ldrb r1, [r1, r2]\n    b _02230B6E\n    cmp r2, #8\n    blo _02230B6A\n    mov r1, #0x15\n    b _02230B6E\n    ldr r1, _02230B88 ; =ov80_0223BDE0\n    ldrb r1, [r1, r2]\n    cmp r3, #0\n    bne _02230B7E\n    ldrh r0, [r0, #0xc]\n    cmp r0, #0x15\n    beq _02230B7C\n    cmp r0, #0x31\n    bne _02230B7E\n    mov r1, #0x14\n    add r0, r1, #0\n    bx lr\n    nop\n    _02230B84: .word ov80_0223BDD4\n    _02230B88: .word ov80_0223BDE0"
    );
    #endif
}
