/* Decompiled from asm/overlay_13_thumb_2.s */
#include "global.h"

void ov13_022208E8(void) {
    /* Original at 0x022208E8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _022208F4 ; =ov13_0224DD80\n    ldr r1, [r1]\n    blx r1\n    pop {r3, pc}\n    nop\n    _022208F4: .word ov13_0224DD80"
    );
    #endif
}

void ov13_022208F8(void) {
    /* Original at 0x022208F8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02220904 ; =ov13_0224DD8C\n    ldr r1, [r1]\n    blx r1\n    pop {r3, pc}\n    nop\n    _02220904: .word ov13_0224DD8C"
    );
    #endif
}

void ov13_02220908(void) {
    /* Original at 0x02220908 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _022209DC ; =0x00000106\n    add r4, r0, #0\n    ldrsh r0, [r4, r2]\n    cmp r0, #0\n    beq _02220958\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    blt _02220958\n    add r0, r2, #2\n    ldrsh r0, [r4, r0]\n    cmp r0, r1\n    blt _02220958\n    add r0, r2, #4\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    beq _02220958\n    cmp r0, r1\n    blt _02220958\n    add r0, r2, #6\n    ldrsh r0, [r4, r0]\n    cmp r0, r1\n    blt _02220958\n    add r0, r2, #0\n    add r0, #8\n    ldrsh r0, [r4, r0]\n    cmp r0, r1\n    blt _02220958\n    ldrh r1, [r4, #4]\n    cmp r1, #0\n    beq _02220958\n    sub r0, r2, #6\n    cmp r1, r0\n    bhi _02220958\n    sub r0, r1, #1\n    add r0, r4, r0\n    ldrb r0, [r0, #6]\n    cmp r0, #0\n    beq _0222095E\n    mov r1, #0\n    mvn r1, r1\n    b _02220960\n    mov r1, #0\n    ldr r0, _022209E0 ; =ov13_0224DD80\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02220970\n    ldr r0, _022209E4 ; =ov13_0224DD8C\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02220974\n    mov r1, #0\n    mvn r1, r1\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _0222098C\n    ldr r0, _022209E8 ; =0x00000116\n    mov r1, #0xf\n    strb r1, [r4, r0]\n    bl ov13_02221428\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}\n    ldr r0, _022209EC ; =0x000005F8\n    bl ov13_022208E8\n    ldr r1, _022209F0 ; =_0224CF98\n    cmp r0, #0\n    str r0, [r1, #0x14]\n    bne _022209AA\n    ldr r0, _022209E8 ; =0x00000116\n    mov r1, #0xf\n    strb r1, [r4, r0]\n    bl ov13_02221428\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}\n    mov r0, #0\n    mvn r0, r0\n    bl ov13_022217D0\n    add r0, r4, #0\n    bl ov13_022209F8\n    add r4, r0, #0\n    ldr r0, _022209F0 ; =_0224CF98\n    ldr r0, [r0, #0x14]\n    bl ov13_022208F8\n    bl ov13_02221428\n    ldr r0, _022209F4 ; =ov13_022459B4\n    mov r1, #0\n    ldr r0, [r0]\n    mvn r1, r1\n    cmp r0, r1\n    beq _022209D6\n    bl ov13_02222A14\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _022209DC: .word 0x00000106\n    _022209E0: .word ov13_0224DD80\n    _022209E4: .word ov13_0224DD8C\n    _022209E8: .word 0x00000116\n    _022209EC: .word 0x000005F8\n    _022209F0: .word _0224CF98\n    _022209F4: .word ov13_022459B4"
    );
    #endif
}

void ov13_022209F8(void) {
    /* Original at 0x022209F8 */
    /* Requires manual decompilation - 1127 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0xc8\n    ldr r1, _02220D4C ; =_0224267C\n    str r0, [sp, #8]\n    ldrh r2, [r1]\n    ldrh r1, [r1, #2]\n    add r0, sp, #0x2c\n    strh r2, [r0, #0x30]\n    strh r1, [r0, #0x32]\n    mov r0, #0\n    add r1, sp, #0x58\n    strh r0, [r1]\n    str r0, [sp, #0x24]\n    strh r0, [r1, #2]\n    mov r0, #1\n    str r0, [sp, #0x54]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x24]\n    str r0, [sp, #0x50]\n    str r0, [sp, #0x1c]\n    add r0, sp, #0xb0\n    mov r2, #0x18\n    bl ov13_02222978\n    ldr r1, _02220D50 ; =0x00000106\n    ldr r0, [sp, #8]\n    ldrsh r0, [r0, r1]\n    add r1, sp, #0x2c\n    strh r0, [r1, #0x30]\n    mov r0, #0x30\n    ldrsh r2, [r1, r0]\n    sub r0, #0x31\n    cmp r2, r0\n    bne _02220A40\n    mov r0, #0xa\n    strh r0, [r1, #0x30]\n    ldr r1, _02220D54 ; =0x0000010A\n    ldr r0, [sp, #8]\n    ldrsh r0, [r0, r1]\n    add r1, sp, #0x2c\n    strh r0, [r1, #0x2c]\n    mov r0, #0x2c\n    ldrsh r2, [r1, r0]\n    sub r0, #0x2d\n    cmp r2, r0\n    bne _02220A58\n    mov r0, #0xa\n    strh r0, [r1, #0x2c]\n    mov r1, #0x42\n    ldr r0, [sp, #8]\n    lsl r1, r1, #2\n    ldrsh r0, [r0, r1]\n    add r1, sp, #0x2c\n    strh r0, [r1, #0x32]\n    mov r0, #0x32\n    ldrsh r2, [r1, r0]\n    sub r0, #0x33\n    cmp r2, r0\n    bne _02220A72\n    mov r0, #0x64\n    strh r0, [r1, #0x32]\n    mov r1, #0x43\n    ldr r0, [sp, #8]\n    lsl r1, r1, #2\n    ldrsh r0, [r0, r1]\n    add r1, sp, #0x2c\n    strh r0, [r1, #0x2e]\n    mov r0, #0x2e\n    ldrsh r2, [r1, r0]\n    sub r0, #0x2f\n    cmp r2, r0\n    bne _02220A8C\n    mov r0, #0x64\n    strh r0, [r1, #0x2e]\n    ldr r1, _02220D58 ; =0x0000010E\n    ldr r0, [sp, #8]\n    ldrsh r0, [r0, r1]\n    mov r1, #0\n    mvn r1, r1\n    str r0, [sp, #0xc]\n    cmp r0, r1\n    bne _02220AA2\n    mov r0, #0x7d\n    lsl r0, r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    bl ov13_02221454\n    ldr r0, _02220D5C ; =_0224CF98\n    ldr r1, [r0, #0x2c]\n    mov r0, #1\n    and r0, r1\n    cmp r0, #1\n    beq _02220ACE\n    mov r0, #0x13\n    bl ov13_022214AC\n    ldr r1, _02220D60 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    add r0, r4, #0\n    bl ov13_022217D0\n    add r1, sp, #0x2c\n    mov r0, #0x32\n    ldrsh r6, [r1, r0]\n    mov r0, #0x30\n    ldrsh r7, [r1, r0]\n    ldr r5, _02220D5C ; =_0224CF98\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _02220AF0\n    bl ov13_022208F8\n    mov r0, #0\n    str r0, [r5, #4]\n    ldr r0, _02220D64 ; =ov13_0224CF9C\n    bl ov13_02222DB0\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _02220B12\n    ldr r1, _02220D60 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #4]\n    bl ov13_022216E0\n    cmp r0, #4\n    bne _02220B30\n    ldr r1, _02220D60 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #2\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0\n    beq _02220B5A\n    cmp r4, r7\n    blt _02220B4C\n    ldr r1, _02220D60 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #1\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov13_022230F8\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    b _02220AE2\n    mov r0, #1\n    bl ov13_022217D0\n    add r0, sp, #0x74\n    mov r1, #0\n    mov r2, #0x3c\n    bl ov13_02222978\n    add r0, sp, #0x74\n    bl ov13_0222175C\n    cmp r0, #0\n    beq _02220B88\n    ldr r1, _02220D60 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x58\n    bl ov13_022208E8\n    ldr r1, _02220D5C ; =_0224CF98\n    cmp r0, #0\n    str r0, [r1, #0xc]\n    bne _02220BAA\n    ldr r1, _02220D60 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    mov r2, #0x58\n    bl ov13_02222978\n    add r1, sp, #0x2c\n    mov r0, #0x30\n    ldrsh r5, [r1, r0]\n    mov r4, #0\n    cmp r5, #0\n    ble _02220C02\n    ldr r7, _02220D5C ; =_0224CF98\n    ldr r1, [r7, #0xc]\n    add r0, sp, #0x74\n    bl ov13_02222F28\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _02220BE4\n    ldr r1, _02220D60 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0\n    bne _02220BF2\n    bne _02220C02\n    ldr r0, [r7, #0xc]\n    ldr r0, [r0]\n    cmp r0, #1\n    beq _02220C02\n    add r0, r6, #0\n    bl ov13_022230F8\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    cmp r4, r5\n    blt _02220BC0\n    add r0, sp, #0x2c\n    mov r1, #0x30\n    ldrsh r0, [r0, r1]\n    cmp r4, r0\n    bne _02220C20\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    add r1, #0xe6\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02220D68 ; =0xC0A80B65\n    mov r1, #0xff\n    mvn r1, r1\n    add r2, r0, #0\n    bl ov13_022228CC\n    cmp r0, #0\n    beq _02220C4A\n    mov r0, #0xc\n    bl ov13_022214AC\n    ldr r1, _02220D60 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov13_02221428\n    mov r3, #0x11\n    ldr r2, [sp, #8]\n    lsl r3, r3, #4\n    mov r0, #3\n    add r1, sp, #0xb0\n    add r2, r2, r3\n    bl ov13_022217A0\n    mov r0, #2\n    add r1, r0, #0\n    mov r2, #0\n    bl ov13_02222A00\n    ldr r1, _02220D6C ; =ov13_022459B4\n    cmp r0, #0\n    str r0, [r1]\n    bge _02220C84\n    ldr r1, _02220D60 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #4\n    str r1, [sp]\n    ldr r1, _02220D70 ; =0x0000FFFF\n    mov r2, #1\n    add r3, sp, #0x54\n    bl ov13_022229FC\n    cmp r0, #0\n    bge _02220CB0\n    mov r0, #0xb\n    bl ov13_022214AC\n    ldr r1, _02220D60 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, sp, #0x2c\n    mov r1, #0\n    mov r2, #8\n    bl ov13_02222978\n    mov r1, #2\n    add r0, sp, #0x2c\n    strb r1, [r0, #1]\n    ldr r0, _02220D68 ; =0xC0A80B65\n    bl ov13_02222A1C\n    str r0, [sp, #0x30]\n    ldr r0, _02220D74 ; =0x00005790\n    bl ov13_02222A44\n    add r1, sp, #0x2c\n    strh r0, [r1, #2]\n    ldr r0, _02220D6C ; =ov13_022459B4\n    add r1, sp, #0x2c\n    ldr r0, [r0]\n    mov r2, #8\n    bl ov13_02222A08\n    cmp r0, #0\n    bge _02220CF6\n    ldr r1, _02220D60 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02220D5C ; =_0224CF98\n    mov r1, #0\n    ldr r0, [r0, #0x14]\n    mov r2, #0x14\n    str r0, [sp, #0x18]\n    add r0, sp, #0x60\n    bl ov13_02222978\n    ldr r0, _02220D68 ; =0xC0A80B65\n    mov r1, #0xfa\n    str r0, [sp, #0x70]\n    sub r0, #0x64\n    str r0, [sp, #0x60]\n    ldr r0, [sp, #0xc]\n    lsl r1, r1, #2\n    bl _s32_div_f\n    str r0, [sp, #0x14]\n    mov r1, #0xfa\n    ldr r0, [sp, #0xc]\n    lsl r1, r1, #2\n    bl _s32_div_f\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    mul r0, r1\n    str r0, [sp, #0x10]\n    mov r1, #0x30\n    add r0, sp, #0x2c\n    ldrsh r7, [r0, r1]\n    ldr r5, _02220D5C ; =_0224CF98\n    ldr r0, [sp, #0x24]\n    cmp r0, #1\n    bne _02220D44\n    ldr r1, _02220D78 ; =ov13_0224CFB8\n    mov r0, #0x1c\n    ldrsb r0, [r1, r0]\n    cmp r0, #1\n    bne _02220D46\n    b _02220FC0\n    ldr r0, _02220D6C ; =ov13_022459B4\n    b _02220D7C\n    nop\n    _02220D4C: .word _0224267C\n    _02220D50: .word 0x00000106\n    _02220D54: .word 0x0000010A\n    _02220D58: .word 0x0000010E\n    _02220D5C: .word _0224CF98\n    _02220D60: .word 0x00000116\n    _02220D64: .word ov13_0224CF9C\n    _02220D68: .word 0xC0A80B65\n    _02220D6C: .word ov13_022459B4\n    _02220D70: .word 0x0000FFFF\n    _02220D74: .word 0x00005790\n    _02220D78: .word ov13_0224CFB8\n    mov r1, #0\n    ldr r0, [r0]\n    mvn r1, r1\n    cmp r0, r1\n    beq _02220D8A\n    bl ov13_02222A14\n    mov r1, #0\n    ldr r0, _022210BC ; =ov13_022459B4\n    mvn r1, r1\n    str r1, [r0]\n    bl ov13_02222924\n    cmp r0, #0\n    beq _02220DAE\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x58\n    bl ov13_022208E8\n    str r0, [r5, #4]\n    cmp r0, #0\n    bne _02220DCE\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _02220DDC\n    bl ov13_022208F8\n    mov r0, #0\n    str r0, [r5, #4]\n    ldr r0, _022210C4 ; =ov13_0224CF9C\n    bl ov13_02222DB0\n    mov r1, #0\n    mvn r1, r1\n    str r0, [sp, #0x28]\n    cmp r0, r1\n    bne _02220E00\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #4]\n    bl ov13_022216E0\n    cmp r0, #4\n    bne _02220E1E\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #2\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0\n    beq _02220E48\n    cmp r4, r7\n    blt _02220E3A\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #1\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov13_022230F8\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    b _02220DCE\n    mov r0, #0\n    ldr r1, [sp, #0x28]\n    mvn r0, r0\n    cmp r1, r0\n    bne _02220E66\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0x58\n    bl ov13_022208E8\n    str r0, [r5, #0xc]\n    cmp r0, #0\n    bne _02220E86\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    mov r2, #0x58\n    bl ov13_02222978\n    mov r4, #0\n    cmp r7, #0\n    ble _02220ED6\n    ldr r1, [r5, #0xc]\n    add r0, sp, #0x74\n    bl ov13_02222F28\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _02220EB8\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0\n    bne _02220EC6\n    bne _02220ED6\n    ldr r0, [r5, #0xc]\n    ldr r0, [r0]\n    cmp r0, #1\n    beq _02220ED6\n    add r0, r6, #0\n    bl ov13_022230F8\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    cmp r4, r7\n    blt _02220E94\n    cmp r4, r7\n    bne _02220EEE\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x34]\n    ldr r1, [r5, #0x38]\n    bl ov13_02221410\n    ldr r1, [r5, #0x38]\n    add r2, r0, #0\n    str r0, [sp, #0x1c]\n    bl ov13_022228CC\n    cmp r0, #0\n    beq _02220F1E\n    mov r0, #0xc\n    bl ov13_022214AC\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _022210C8 ; =ov13_0224CFB8\n    mov r1, #1\n    strb r1, [r0, #0x1c]\n    bl ov13_02221428\n    mov r0, #2\n    add r1, r0, #0\n    mov r2, #0\n    bl ov13_02222A00\n    ldr r1, _022210BC ; =ov13_022459B4\n    cmp r0, #0\n    str r0, [r1]\n    bge _02220F4E\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #4\n    str r1, [sp]\n    ldr r1, _022210CC ; =0x0000FFFF\n    mov r2, #1\n    add r3, sp, #0x54\n    bl ov13_022229FC\n    cmp r0, #0\n    bge _02220F7A\n    mov r0, #0xb\n    bl ov13_022214AC\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, sp, #0x2c\n    mov r1, #0\n    mov r2, #8\n    bl ov13_02222978\n    mov r1, #2\n    add r0, sp, #0x2c\n    strb r1, [r0, #1]\n    ldr r0, [sp, #0x1c]\n    bl ov13_02222A1C\n    str r0, [sp, #0x30]\n    ldr r0, _022210D0 ; =0x00005790\n    bl ov13_02222A44\n    add r1, sp, #0x2c\n    strh r0, [r1, #2]\n    ldr r0, _022210BC ; =ov13_022459B4\n    add r1, sp, #0x2c\n    ldr r0, [r0]\n    mov r2, #8\n    bl ov13_02222A08\n    cmp r0, #0\n    bge _02220FC0\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r3, _022210BC ; =ov13_022459B4\n    ldr r0, [sp, #0x24]\n    ldr r3, [r3]\n    add r1, sp, #0x60\n    add r2, sp, #0xb0\n    bl ov13_022220B4\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _02220FF6\n    mov r1, #1\n    ldr r0, [sp, #0x24]\n    lsl r1, r1, #0xc\n    add r0, r0, r1\n    bl ov13_022214AC\n    ldr r1, _022210C0 ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x18]\n    ldr r2, _022210D4 ; =0x000005F8\n    mov r1, #0\n    bl ov13_02222978\n    add r0, sp, #0x3c\n    bl ov13_02222B20\n    ldr r0, _022210BC ; =ov13_022459B4\n    add r1, sp, #0x3c\n    ldr r0, [r0]\n    bl ov13_02222B2C\n    ldr r0, [sp, #0x14]\n    mov r2, #0\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x10]\n    add r1, sp, #0x3c\n    str r0, [sp, #0x38]\n    add r0, sp, #0x34\n    str r0, [sp]\n    ldr r0, _022210BC ; =ov13_022459B4\n    add r3, r2, #0\n    ldr r0, [r0]\n    add r0, r0, #1\n    bl ov13_02222998\n    cmp r0, #0\n    bgt _02221070\n    ldr r0, [sp, #0x50]\n    add r1, sp, #0x2c\n    add r2, r0, #1\n    str r2, [sp, #0x50]\n    mov r0, #0x2c\n    ldrsh r0, [r1, r0]\n    cmp r2, r0\n    ble _02221066\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    bne _0222104E\n    mov r0, #0xf\n    bl ov13_022214AC\n    b _02221060\n    cmp r0, #1\n    bne _0222105A\n    mov r0, #0x10\n    bl ov13_022214AC\n    b _02221060\n    mov r0, #0x11\n    bl ov13_022214AC\n    mov r5, #0\n    mvn r5, r5\n    b _0222134E\n    mov r0, #0x2e\n    ldrsh r0, [r1, r0]\n    bl ov13_022230F8\n    b _02220D34\n    mov r0, #8\n    str r0, [sp, #0x44]\n    add r0, sp, #0x48\n    str r0, [sp]\n    add r0, sp, #0x44\n    str r0, [sp, #4]\n    ldr r0, _022210BC ; =ov13_022459B4\n    ldr r1, [sp, #0x18]\n    ldr r0, [r0]\n    ldr r2, _022210D8 ; =0x000005DC\n    add r1, #0xc\n    mov r3, #0\n    bl ov13_02222984\n    ldr r1, _022210BC ; =ov13_022459B4\n    lsl r0, r0, #0x10\n    ldr r2, [r1]\n    ldr r1, [sp, #0x18]\n    lsr r0, r0, #0x10\n    str r2, [r1]\n    bl ov13_02222A84\n    ldr r1, [sp, #0x18]\n    add r2, sp, #0x50\n    str r0, [r1, #4]\n    ldr r0, _022210BC ; =ov13_022459B4\n    add r3, sp, #0xb0\n    ldr r0, [r0]\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    bl ov13_022217FC\n    str r0, [sp, #0x20]\n    cmp r0, #0x64\n    bne _022210DC\n    mov r5, #0\n    b _0222134E\n    nop\n    _022210BC: .word ov13_022459B4\n    _022210C0: .word 0x00000116\n    _022210C4: .word ov13_0224CF9C\n    _022210C8: .word ov13_0224CFB8\n    _022210CC: .word 0x0000FFFF\n    _022210D0: .word 0x00005790\n    _022210D4: .word 0x000005F8\n    _022210D8: .word 0x000005DC\n    mov r5, #0\n    mvn r5, r5\n    cmp r0, r5\n    bne _022210E6\n    b _0222134E\n    ldr r1, [sp, #0x24]\n    cmp r1, r0\n    bne _022210EE\n    b _02221310\n    cmp r0, #2\n    beq _022210F4\n    b _0222130A\n    ldr r0, _022213F8 ; =ov13_022459B4\n    ldr r0, [r0]\n    cmp r0, r5\n    beq _02221100\n    bl ov13_02222A14\n    mov r1, #0\n    ldr r0, _022213F8 ; =ov13_022459B4\n    mvn r1, r1\n    str r1, [r0]\n    bl ov13_02222924\n    cmp r0, #0\n    beq _02221124\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #4\n    mov r4, #0\n    bl ov13_022217D0\n    add r1, sp, #0x2c\n    mov r0, #0x30\n    ldrsh r7, [r1, r0]\n    ldr r5, _02221400 ; =_0224CF98\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _02221142\n    bl ov13_022208F8\n    mov r0, #0\n    str r0, [r5, #4]\n    ldr r0, _02221404 ; =ov13_0224CF9C\n    bl ov13_02222DB0\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _02221164\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #4]\n    bl ov13_022216E0\n    cmp r0, #4\n    bne _02221182\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #2\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0\n    beq _022211AC\n    cmp r4, r7\n    blt _0222119E\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #1\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    bl ov13_022230F8\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    b _02221134\n    mov r0, #0x58\n    bl ov13_022208E8\n    ldr r1, _02221400 ; =_0224CF98\n    cmp r0, #0\n    str r0, [r1, #0xc]\n    bne _022211CE\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0\n    mov r2, #0x58\n    bl ov13_02222978\n    add r1, sp, #0x2c\n    mov r0, #0x30\n    ldrsh r5, [r1, r0]\n    mov r4, #0\n    cmp r5, #0\n    ble _02221226\n    ldr r7, _02221400 ; =_0224CF98\n    ldr r1, [r7, #0xc]\n    add r0, sp, #0x74\n    bl ov13_02222F28\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _02221208\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0\n    bne _02221216\n    bne _02221226\n    ldr r0, [r7, #0xc]\n    ldr r0, [r0]\n    cmp r0, #1\n    beq _02221226\n    add r0, r6, #0\n    bl ov13_022230F8\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    cmp r4, r5\n    blt _022211E4\n    add r0, sp, #0x2c\n    mov r1, #0x30\n    ldrsh r0, [r0, r1]\n    cmp r4, r0\n    bne _02221244\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    add r1, #0xe6\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _02221400 ; =_0224CF98\n    ldr r0, [sp, #0x1c]\n    ldr r1, [r1, #0x38]\n    add r2, r0, #0\n    bl ov13_022228CC\n    cmp r0, #0\n    beq _0222126E\n    mov r0, #0xc\n    bl ov13_022214AC\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov13_02221428\n    mov r0, #2\n    add r1, r0, #0\n    mov r2, #0\n    bl ov13_02222A00\n    ldr r1, _022213F8 ; =ov13_022459B4\n    cmp r0, #0\n    str r0, [r1]\n    bge _02221298\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #4\n    str r1, [sp]\n    ldr r1, _02221408 ; =0x0000FFFF\n    mov r2, #1\n    add r3, sp, #0x54\n    bl ov13_022229FC\n    cmp r0, #0\n    bge _022212C4\n    mov r0, #0xb\n    bl ov13_022214AC\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, sp, #0x2c\n    mov r1, #0\n    mov r2, #8\n    bl ov13_02222978\n    mov r1, #2\n    add r0, sp, #0x2c\n    strb r1, [r0, #1]\n    ldr r0, [sp, #0x1c]\n    bl ov13_02222A1C\n    str r0, [sp, #0x30]\n    ldr r0, _0222140C ; =0x00005790\n    bl ov13_02222A44\n    add r1, sp, #0x2c\n    strh r0, [r1, #2]\n    ldr r0, _022213F8 ; =ov13_022459B4\n    add r1, sp, #0x2c\n    ldr r0, [r0]\n    mov r2, #8\n    bl ov13_02222A08\n    cmp r0, #0\n    bge _0222130A\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x20]\n    str r0, [sp, #0x24]\n    b _02220CF6\n    str r0, [sp, #0x24]\n    add r1, sp, #0x2c\n    mov r0, #0x2c\n    ldrsh r0, [r1, r0]\n    ldr r2, [sp, #0x50]\n    cmp r2, r0\n    ble _02221344\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    bne _0222132C\n    mov r0, #0xf\n    bl ov13_022214AC\n    b _0222133E\n    cmp r0, #1\n    bne _02221338\n    mov r0, #0x10\n    bl ov13_022214AC\n    b _0222133E\n    mov r0, #0x11\n    bl ov13_022214AC\n    mov r5, #0\n    mvn r5, r5\n    b _0222134E\n    mov r0, #0x2e\n    ldrsh r0, [r1, r0]\n    bl ov13_022230F8\n    b _02220CF6\n    ldr r0, _022213F8 ; =ov13_022459B4\n    mov r1, #0\n    ldr r0, [r0]\n    mvn r1, r1\n    cmp r0, r1\n    beq _0222135E\n    bl ov13_02222A14\n    mov r1, #0\n    ldr r0, _022213F8 ; =ov13_022459B4\n    mvn r1, r1\n    str r1, [r0]\n    bl ov13_02222924\n    cmp r0, #0\n    beq _02221382\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #0xf\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r5, #0\n    beq _022213D2\n    bl ov13_022214B8\n    sub r0, #0xf\n    cmp r0, #6\n    bhi _022213BE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222139C: ; jump table\n    mov r2, #3\n    b _022213C0\n    mov r2, #4\n    b _022213C0\n    mov r2, #5\n    b _022213C0\n    mov r2, #7\n    b _022213C0\n    mov r2, #8\n    b _022213C0\n    mov r2, #0xf\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    bl ov13_022214C4\n    cmp r0, #0\n    beq _022213F0\n    ldr r1, _022213FC ; =0x00000116\n    ldr r0, [sp, #8]\n    mov r2, #6\n    strb r2, [r0, r1]\n    bl ov13_02221428\n    mov r0, #0\n    add sp, #0xc8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022213F8: .word ov13_022459B4\n    _022213FC: .word 0x00000116\n    _02221400: .word _0224CF98\n    _02221404: .word ov13_0224CF9C\n    _02221408: .word 0x0000FFFF\n    _0222140C: .word 0x00005790"
    );
    #endif
}

void ov13_02221410(void) {
    /* Original at 0x02221410 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    and r2, r1\n    mvn r1, r1\n    and r0, r1\n    add r0, r0, #1\n    orr r0, r2\n    orr r1, r2\n    cmp r0, r1\n    blo _02221426\n    mov r0, #1\n    orr r0, r2\n    bx lr"
    );
    #endif
}

void ov13_02221428(void) {
    /* Original at 0x02221428 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02221450 ; =_0224CF98\n    ldr r0, [r0, #0xc]\n    cmp r0, #0\n    beq _0222143C\n    bl ov13_022208F8\n    ldr r0, _02221450 ; =_0224CF98\n    mov r1, #0\n    str r1, [r0, #0xc]\n    ldr r0, _02221450 ; =_0224CF98\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _0222144E\n    bl ov13_022208F8\n    ldr r0, _02221450 ; =_0224CF98\n    mov r1, #0\n    str r1, [r0, #4]\n    pop {r3, pc}\n    _02221450: .word _0224CF98"
    );
    #endif
}

void ov13_02221454(void) {
    /* Original at 0x02221454 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02221498 ; =ov13_0224DCF8\n    mov r1, #0\n    mov r2, #8\n    bl ov13_02222978\n    ldr r0, _0222149C ; =_0224CF98\n    mov r1, #1\n    str r1, [r0, #0x10]\n    ldr r0, _022214A0 ; =ov13_0224CFBC\n    mov r1, #0\n    mov r2, #0x1c\n    bl ov13_02222978\n    ldr r1, _0222149C ; =_0224CF98\n    add r0, r4, #6\n    str r0, [r1, #0x24]\n    ldrh r0, [r4, #4]\n    mov r3, #0\n    str r0, [r1, #0x28]\n    ldrh r2, [r4]\n    mov r0, #0xf\n    and r0, r2\n    str r0, [r1, #0x2c]\n    ldrb r2, [r4, #2]\n    ldr r0, _022214A4 ; =ov13_0224CFB8\n    strb r2, [r0, #0x1d]\n    ldr r2, _022214A8 ; =0xC0A80B01\n    str r3, [r1, #0x30]\n    str r2, [r1, #0x34]\n    strb r3, [r0, #0x1c]\n    pop {r4, pc}\n    nop\n    _02221498: .word ov13_0224DCF8\n    _0222149C: .word _0224CF98\n    _022214A0: .word ov13_0224CFBC\n    _022214A4: .word ov13_0224CFB8\n    _022214A8: .word 0xC0A80B01"
    );
    #endif
}

void ov13_022214AC(void) {
    /* Original at 0x022214AC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _022214B4 ; =_0224CF98\n    str r0, [r1, #0x10]\n    bx lr\n    nop\n    _022214B4: .word _0224CF98"
    );
    #endif
}

void ov13_022214B8(void) {
    /* Original at 0x022214B8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _022214C0 ; =_0224CF98\n    ldr r0, [r0, #0x10]\n    bx lr\n    nop\n    _022214C0: .word _0224CF98"
    );
    #endif
}

void ov13_022214C4(void) {
    /* Original at 0x022214C4 */
    /* Requires manual decompilation - 214 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r0, #0\n    ldr r0, _0222169C ; =ov13_0224D8C0\n    ldr r2, _022216A0 ; =0x00000117\n    str r0, [sp, #4]\n    ldr r0, _022216A4 ; =ov13_0224D930\n    add r4, r7, r2\n    ldr r6, _022216A8 ; =ov13_0224D660\n    ldr r5, _022216AC ; =ov13_0224D790\n    str r0, [sp]\n    bne _022214E4\n    mov r0, #0\n    add sp, #8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _022216B0 ; =_0224CF98\n    add r2, #0x3d\n    ldr r0, [r1, #0x2c]\n    ldr r1, [r1, #0x30]\n    and r0, r1\n    strh r0, [r7]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov13_02222978\n    ldrh r1, [r7]\n    mov r0, #1\n    tst r0, r1\n    beq _02221562\n    add r1, r6, #0\n    ldr r2, [r6, #4]\n    add r0, r4, #0\n    add r1, #0x30\n    bl ov13_02222968\n    add r1, r6, #0\n    ldr r2, [r6, #4]\n    add r0, r4, #6\n    add r1, #0x70\n    bl ov13_02222968\n    add r0, r4, #0\n    add r1, r6, #0\n    ldr r2, [r6, #4]\n    add r0, #0xc\n    add r1, #0xb0\n    bl ov13_02222968\n    add r0, r4, #0\n    add r1, r6, #0\n    ldr r2, [r6, #4]\n    add r0, #0x12\n    add r1, #0xf0\n    bl ov13_02222968\n    add r0, r6, #0\n    add r0, #8\n    bl ov13_02222A9C\n    add r1, r0, #0\n    add r0, r6, #0\n    add r0, #8\n    bl ov13_022216BC\n    cmp r0, #0\n    beq _0222154C\n    b _02221688\n    add r0, r6, #0\n    add r0, #8\n    bl ov13_02222A9C\n    add r2, r0, #0\n    add r0, r4, #0\n    add r6, #8\n    add r0, #0x18\n    add r1, r6, #0\n    bl ov13_02222968\n    ldrh r1, [r7]\n    mov r0, #2\n    tst r0, r1\n    beq _022215CE\n    add r0, r4, #0\n    add r1, r5, #0\n    ldr r2, [r5, #4]\n    add r0, #0x39\n    add r1, #0x30\n    bl ov13_02222968\n    add r0, r4, #0\n    add r1, r5, #0\n    ldr r2, [r5, #4]\n    add r0, #0x47\n    add r1, #0x70\n    bl ov13_02222968\n    add r0, r4, #0\n    add r1, r5, #0\n    ldr r2, [r5, #4]\n    add r0, #0x55\n    add r1, #0xb0\n    bl ov13_02222968\n    add r0, r4, #0\n    add r1, r5, #0\n    ldr r2, [r5, #4]\n    add r0, #0x63\n    add r1, #0xf0\n    bl ov13_02222968\n    add r0, r5, #0\n    add r0, #8\n    bl ov13_02222A9C\n    add r1, r0, #0\n    add r0, r5, #0\n    add r0, #8\n    bl ov13_022216BC\n    cmp r0, #0\n    bne _02221688\n    add r0, r5, #0\n    add r0, #8\n    bl ov13_02222A9C\n    add r2, r0, #0\n    add r0, r4, #0\n    add r5, #8\n    add r0, #0x71\n    add r1, r5, #0\n    bl ov13_02222968\n    ldrh r1, [r7]\n    mov r0, #4\n    tst r0, r1\n    beq _02221626\n    ldr r1, [sp, #4]\n    ldr r0, [sp, #4]\n    ldr r1, [r1, #4]\n    add r0, #0x30\n    sub r1, r1, #1\n    bl ov13_022216BC\n    cmp r0, #0\n    bne _02221688\n    ldr r2, [sp, #4]\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    ldr r2, [r2, #4]\n    add r0, #0x92\n    add r1, #0x30\n    bl ov13_02222968\n    ldr r0, [sp, #4]\n    add r0, #8\n    bl ov13_02222A9C\n    add r1, r0, #0\n    ldr r0, [sp, #4]\n    add r0, #8\n    bl ov13_022216BC\n    cmp r0, #0\n    bne _02221688\n    ldr r0, [sp, #4]\n    add r0, #8\n    bl ov13_02222A9C\n    ldr r1, [sp, #4]\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, #8\n    add r0, #0xd2\n    str r1, [sp, #4]\n    bl ov13_02222968\n    ldrh r1, [r7]\n    mov r0, #8\n    tst r0, r1\n    beq _0222167E\n    ldr r1, [sp]\n    ldr r0, [sp]\n    ldr r1, [r1, #4]\n    add r0, #0x30\n    sub r1, r1, #1\n    bl ov13_022216BC\n    cmp r0, #0\n    bne _02221688\n    ldr r2, [sp]\n    ldr r1, [sp]\n    add r0, r4, #0\n    ldr r2, [r2, #4]\n    add r0, #0xf3\n    add r1, #0x30\n    bl ov13_02222968\n    ldr r0, [sp]\n    add r0, #8\n    bl ov13_02222A9C\n    add r1, r0, #0\n    ldr r0, [sp]\n    add r0, #8\n    bl ov13_022216BC\n    cmp r0, #0\n    bne _02221688\n    ldr r0, [sp]\n    add r0, #8\n    bl ov13_02222A9C\n    add r2, r0, #0\n    ldr r0, _022216B4 ; =0x00000133\n    ldr r1, [sp]\n    add r0, r4, r0\n    add r1, #8\n    str r1, [sp]\n    bl ov13_02222968\n    ldr r1, _022216B8 ; =0x00000116\n    mov r0, #0\n    add sp, #8\n    strb r0, [r7, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0x55\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl ov13_02222978\n    mov r0, #0\n    mvn r0, r0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _0222169C: .word ov13_0224D8C0\n    _022216A0: .word 0x00000117\n    _022216A4: .word ov13_0224D930\n    _022216A8: .word ov13_0224D660\n    _022216AC: .word ov13_0224D790\n    _022216B0: .word _0224CF98\n    _022216B4: .word 0x00000133\n    _022216B8: .word 0x00000116"
    );
    #endif
}

void ov13_022216BC(void) {
    /* Original at 0x022216BC */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    cmp r1, #0\n    ble _022216DA\n    ldrb r2, [r0]\n    add r0, r0, #1\n    cmp r2, #0x20\n    blo _022216CE\n    cmp r2, #0x7f\n    bls _022216D4\n    mov r0, #0\n    mvn r0, r0\n    bx lr\n    add r3, r3, #1\n    cmp r3, r1\n    blt _022216C2\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov13_022216E0(void) {
    /* Original at 0x022216E0 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5]\n    mov r4, #0\n    str r4, [sp, #4]\n    str r0, [sp]\n    cmp r0, #0\n    bne _022216F8\n    add sp, #8\n    mov r0, #5\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0x40\n    bls _02221700\n    mov r0, #0x40\n    str r0, [sp]\n    ldr r0, [sp]\n    mov r7, #0\n    cmp r0, #0\n    ble _02221742\n    add r6, r5, #0\n    add r6, #8\n    ldr r1, [r5, #0x54]\n    mov r0, #1\n    tst r0, r1\n    beq _02221736\n    ldr r0, _02221758 ; =ov13_02245A14\n    bl ov13_02222A9C\n    ldr r1, [r5, #4]\n    cmp r1, r0\n    bne _02221736\n    ldr r0, _02221758 ; =ov13_02245A14\n    bl ov13_02222A9C\n    add r2, r0, #0\n    ldr r1, _02221758 ; =ov13_02245A14\n    add r0, r6, #0\n    bl ov13_02222948\n    cmp r0, #0\n    bne _02221736\n    add r4, r4, #1\n    ldr r0, [sp]\n    add r7, r7, #1\n    add r5, #0x54\n    add r6, #0x54\n    cmp r7, r0\n    blt _0222170C\n    cmp r4, #1\n    ble _0222174A\n    mov r0, #4\n    str r0, [sp, #4]\n    cmp r4, #0\n    bne _02221752\n    mov r0, #5\n    str r0, [sp, #4]\n    ldr r0, [sp, #4]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02221758: .word ov13_02245A14"
    );
    #endif
}

void ov13_0222175C(void) {
    /* Original at 0x0222175C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02221798 ; =ov13_02245A14\n    bl ov13_02222A9C\n    str r0, [r4]\n    ldr r1, _02221798 ; =ov13_02245A14\n    ldr r2, [r4]\n    add r0, r4, #4\n    bl ov13_02222968\n    mov r0, #1\n    str r0, [r4, #0x24]\n    ldr r0, _0222179C ; =ov13_02245A20\n    bl ov13_02222A9C\n    add r2, r0, #0\n    str r0, [r4, #0x28]\n    cmp r2, #0xd\n    bls _0222178A\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}\n    add r4, #0x2c\n    ldr r1, _0222179C ; =ov13_02245A20\n    add r0, r4, #0\n    bl ov13_02222968\n    mov r0, #0\n    pop {r4, pc}\n    _02221798: .word ov13_02245A14\n    _0222179C: .word ov13_02245A20"
    );
    #endif
}

void ov13_022217A0(void) {
    /* Original at 0x022217A0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r7, r2, #0\n    mov r4, #0\n    cmp r6, #0\n    ble _022217CE\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r2, #6\n    bl ov13_02222968\n    bl ov13_02222AB0\n    strh r0, [r5, #6]\n    ldrh r0, [r5, #6]\n    bl ov13_02222A44\n    strh r0, [r5, #6]\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, r6\n    blt _022217AE\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_022217D0(void) {
    /* Original at 0x022217D0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _022217E2\n    ldr r1, _022217F8 ; =ov13_022459B4\n    str r0, [r1, #4]\n    mov r0, #0\n    pop {r3, pc}\n    ldr r1, _022217F8 ; =ov13_022459B4\n    ldr r2, [r1, #4]\n    cmp r2, r0\n    beq _022217F2\n    str r0, [r1, #4]\n    bl ov13_02223100\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _022217F8: .word ov13_022459B4"
    );
    #endif
}

void ov13_022217FC(void) {
    /* Original at 0x022217FC */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    ldrh r0, [r6, #0xc]\n    add r7, r6, #0\n    add r4, r2, #0\n    str r3, [sp]\n    add r7, #0xc\n    bl ov13_02222A84\n    cmp r0, #1\n    bhs _0222181E\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r7, #0xf]\n    cmp r0, #0x11\n    beq _0222182E\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add r0, #0xc\n    bl ov13_02221AF4\n    cmp r0, #0\n    ble _02221844\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r7, #6]\n    bl ov13_02222A84\n    ldr r1, _02221890 ; =0x00001010\n    cmp r0, r1\n    beq _0222185E\n    ldr r1, _02221894 ; =0x00002010\n    cmp r0, r1\n    beq _0222186E\n    ldr r1, _02221898 ; =0x00003010\n    cmp r0, r1\n    beq _0222187E\n    b _0222188C\n    ldr r3, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov13_0222189C\n    add r5, r0, #0\n    b _0222188C\n    ldr r3, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov13_02221978\n    add r5, r0, #0\n    b _0222188C\n    ldr r3, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov13_02221A50\n    add r5, r0, #0\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02221890: .word 0x00001010\n    _02221894: .word 0x00002010\n    _02221898: .word 0x00003010"
    );
    #endif
}

void ov13_0222189C(void) {
    /* Original at 0x0222189C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r2, #0\n    cmp r6, #0\n    beq _022218AE\n    ldr r1, [r5]\n    add r1, r1, #1\n    str r1, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r7, r1, #0\n    add r7, #0xc\n    add r4, r1, #0\n    add r1, r7, #0\n    add r0, r3, #0\n    add r1, #0x10\n    add r4, #0x24\n    bl ov13_02221C2C\n    cmp r0, #0\n    bge _022218CE\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r4, #2]\n    bl ov13_02222A84\n    cmp r0, #0\n    bne _022218E2\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r4]\n    cmp r0, #7\n    bne _02221920\n    ldr r0, [r4, #4]\n    bl ov13_02222A5C\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    bne _022218FE\n    mov r0, #0x14\n    bl ov13_022214AC\n    b _0222191A\n    ldr r0, [r4, #4]\n    bl ov13_02222A5C\n    mov r1, #2\n    mvn r1, r1\n    cmp r0, r1\n    bne _02221914\n    mov r0, #0x15\n    bl ov13_022214AC\n    b _0222191A\n    mov r0, #0x18\n    bl ov13_022214AC\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #1\n    beq _0222192E\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _02221970 ; =ov13_0224CFD8\n    add r0, r4, #4\n    bl ov13_02221C78\n    cmp r0, #0\n    bge _02221958\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    bne _0222194E\n    mov r0, #0x16\n    bl ov13_022214AC\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r7, #0xc]\n    bl ov13_02222A84\n    bl ov13_022220A4\n    ldr r1, _02221974 ; =_0224CF98\n    str r0, [r1]\n    mov r0, #0\n    str r0, [r5]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02221970: .word ov13_0224CFD8\n    _02221974: .word _0224CF98"
    );
    #endif
}

void ov13_02221978(void) {
    /* Original at 0x02221978 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r2, #0\n    cmp r6, #1\n    beq _0222198A\n    ldr r1, [r5]\n    add r1, r1, #1\n    str r1, [r5]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r7, r1, #0\n    add r7, #0xc\n    add r4, r1, #0\n    add r3, #8\n    add r1, r7, #0\n    add r0, r3, #0\n    add r1, #0x10\n    add r4, #0x24\n    bl ov13_02221C2C\n    cmp r0, #0\n    bge _022219AC\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r4, #2]\n    bl ov13_02222A84\n    cmp r0, #0\n    bne _022219C0\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r4]\n    cmp r0, #7\n    bne _022219FE\n    ldr r0, [r4, #4]\n    bl ov13_02222A5C\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    bne _022219DC\n    mov r0, #0x14\n    bl ov13_022214AC\n    b _022219F8\n    ldr r0, [r4, #4]\n    bl ov13_02222A5C\n    mov r1, #2\n    mvn r1, r1\n    cmp r0, r1\n    bne _022219F2\n    mov r0, #0x15\n    bl ov13_022214AC\n    b _022219F8\n    mov r0, #0x18\n    bl ov13_022214AC\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0x6a\n    ldr r0, _02221A44 ; =ov13_0224D658\n    mov r1, #0\n    lsl r2, r2, #4\n    bl ov13_02222978\n    ldrh r0, [r7, #0xa]\n    bl ov13_02222A84\n    add r2, r0, #0\n    ldr r0, _02221A48 ; =ov13_0224CFD8\n    ldr r3, _02221A44 ; =ov13_0224D658\n    str r0, [sp]\n    mov r0, #0\n    add r1, r4, #0\n    bl ov13_02221F94\n    cmp r0, #0\n    bge _02221A2E\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02221A4C ; =_0224CF98\n    ldr r1, [r0, #0x30]\n    ldr r0, [r0, #0x2c]\n    tst r0, r1\n    bne _02221A3C\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [r5]\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    _02221A44: .word ov13_0224D658\n    _02221A48: .word ov13_0224CFD8\n    _02221A4C: .word _0224CF98"
    );
    #endif
}

void ov13_02221A50(void) {
    /* Original at 0x02221A50 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r2, #0\n    cmp r6, #2\n    beq _02221A62\n    ldr r1, [r5]\n    add r1, r1, #1\n    str r1, [r5]\n    pop {r4, r5, r6, pc}\n    add r4, r1, #0\n    add r3, #0x10\n    add r1, #0xc\n    add r0, r3, #0\n    add r1, #0x10\n    add r4, #0x24\n    bl ov13_02221C2C\n    cmp r0, #0\n    bge _02221A80\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    ldrb r0, [r4]\n    cmp r0, #7\n    beq _02221A90\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    ldrh r0, [r4, #2]\n    bl ov13_02222A84\n    cmp r0, #0\n    bne _02221AA4\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #4]\n    bl ov13_02222A5C\n    cmp r0, #0\n    bne _02221AB2\n    mov r0, #0x64\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #4]\n    bl ov13_02222A5C\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    bne _02221ACC\n    mov r0, #0x14\n    bl ov13_022214AC\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #4]\n    bl ov13_02222A5C\n    mov r1, #2\n    mvn r1, r1\n    cmp r0, r1\n    bne _02221AE6\n    mov r0, #0x15\n    bl ov13_022214AC\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    mov r0, #0x18\n    bl ov13_022214AC\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov13_02221AF4(void) {
    /* Original at 0x02221AF4 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r1, r5, #0\n    add r4, r5, #0\n    add r0, sp, #0xc\n    add r1, #0x10\n    mov r2, #8\n    add r4, #0x18\n    bl ov13_02222968\n    ldr r0, _02221BE0 ; =ov13_02245A20\n    bl ov13_02222A9C\n    add r3, r0, #0\n    ldr r2, _02221BE0 ; =ov13_02245A20\n    add r0, sp, #0xc\n    mov r1, #8\n    bl ov13_022227A0\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    bne _02221B32\n    mov r0, #2\n    bl ov13_022214AC\n    mov r0, #0x63\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    ldrh r0, [r5, #6]\n    bl ov13_02222A84\n    add r1, sp, #0xc\n    bl ov13_02221BE8\n    cmp r0, #0\n    bne _02221BDA\n    ldrh r0, [r5, #6]\n    bl ov13_02222A84\n    mov r1, #1\n    lsl r1, r1, #0xc\n    cmp r0, r1\n    bne _02221B5A\n    ldr r0, _02221BE4 ; =ov13_0224DCF8\n    add r1, sp, #0xc\n    mov r2, #8\n    bl ov13_02222968\n    ldrh r0, [r5, #0xc]\n    bl ov13_02222A84\n    mov r1, #0xf\n    tst r0, r1\n    bne _02221B6C\n    add sp, #0x14\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    ldrh r0, [r4]\n    bl ov13_02222A84\n    add r6, r0, #0\n    bl ov13_022208E8\n    add r7, r0, #0\n    bne _02221B88\n    mov r0, #2\n    bl ov13_022214AC\n    add sp, #0x14\n    mov r0, #0x64\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #2\n    str r0, [sp]\n    ldr r0, _02221BE4 ; =ov13_0224DCF8\n    add r1, r7, #0\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    ldrb r3, [r5, #0xe]\n    add r0, r4, #4\n    add r2, r6, #0\n    bl ov13_022225B0\n    cmp r0, #0\n    bge _02221BBE\n    add r0, r7, #0\n    bl ov13_022208F8\n    bl ov13_022214B8\n    cmp r0, #2\n    bne _02221BB8\n    add sp, #0x14\n    mov r0, #0x64\n    pop {r4, r5, r6, r7, pc}\n    add sp, #0x14\n    mov r0, #0xc8\n    pop {r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    bl ov13_02222968\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    bl ov13_02222A44\n    strh r0, [r5, #0xa]\n    add r0, r7, #0\n    bl ov13_022208F8\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02221BE0: .word ov13_02245A20\n    _02221BE4: .word ov13_0224DCF8"
    );
    #endif
}

void ov13_02221BE8(void) {
    /* Original at 0x02221BE8 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #0\n    ldr r6, _02221C28 ; =ov13_0224DCF8\n    add r5, r4, #0\n    add r3, r4, #0\n    ldrb r2, [r6]\n    cmp r2, #0\n    beq _02221BFC\n    mov r5, #1\n    b _02221C04\n    add r3, r3, #1\n    add r6, r6, #1\n    cmp r3, #6\n    blt _02221BF2\n    cmp r5, #0\n    beq _02221C18\n    ldr r0, _02221C28 ; =ov13_0224DCF8\n    mov r2, #6\n    bl ov13_02222948\n    cmp r0, #0\n    beq _02221C22\n    mov r4, #1\n    b _02221C22\n    mov r1, #1\n    lsl r1, r1, #0xc\n    cmp r0, r1\n    beq _02221C22\n    mov r4, #2\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02221C28: .word ov13_0224DCF8"
    );
    #endif
}

void ov13_02221C2C(void) {
    /* Original at 0x02221C2C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _02221C74 ; =ov13_02245A20\n    add r5, r1, #0\n    mov r4, #0\n    bl ov13_02222A9C\n    add r3, r0, #0\n    ldr r2, _02221C74 ; =ov13_02245A20\n    add r0, r5, #0\n    mov r1, #8\n    bl ov13_022227A0\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r2, #6\n    bl ov13_02222948\n    cmp r0, #0\n    beq _02221C58\n    sub r4, r4, #1\n    b _02221C6E\n    ldrh r0, [r6, #6]\n    bl ov13_02222A84\n    add r6, r0, #0\n    ldrh r0, [r5, #6]\n    bl ov13_02222A84\n    add r1, r6, #1\n    cmp r1, r0\n    beq _02221C6E\n    sub r4, r4, #2\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02221C74: .word ov13_02245A20"
    );
    #endif
}

void ov13_02221C78(void) {
    /* Original at 0x02221C78 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    mov r2, #0x41\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl ov13_02222978\n    add r7, r5, #0\n    add r4, r6, #0\n    add r7, #0x80\n    ldrh r0, [r4, #2]\n    bl ov13_02222A84\n    add r2, r0, #0\n    cmp r2, #0\n    bgt _02221CA2\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r4]\n    cmp r0, #6\n    bhi _02221D18\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02221CB4: ; jump table\n    add r0, r5, #0\n    add r1, r4, #6\n    bl ov13_02222968\n    b _02221D1E\n    add r0, r7, #0\n    add r1, r4, #6\n    bl ov13_02222968\n    b _02221D1E\n    mov r0, #1\n    lsl r0, r0, #8\n    add r0, r5, r0\n    add r1, r4, #6\n    bl ov13_02222968\n    b _02221D1E\n    ldrb r0, [r4, #6]\n    bl ov13_02222A84\n    cmp r0, #0\n    bgt _02221D1E\n    mov r0, #1\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #6\n    add r1, r2, #0\n    bl ov13_02221D34\n    bl ov13_02222A5C\n    ldr r1, _02221D30 ; =_0224CF98\n    str r0, [r1, #0x34]\n    b _02221D1E\n    add r0, r4, #6\n    add r1, r2, #0\n    bl ov13_02221D34\n    bl ov13_02222A5C\n    ldr r1, _02221D30 ; =_0224CF98\n    str r0, [r1, #0x38]\n    b _02221D1E\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r4, #4]\n    cmp r0, #0\n    beq _02221D2C\n    bl ov13_02222A84\n    add r4, r6, r0\n    b _02221C90\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02221D30: .word _0224CF98"
    );
    #endif
}

void ov13_02221D34(void) {
    /* Original at 0x02221D34 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r3, #0\n    sub r2, r1, #1\n    add r5, r0, r2\n    add r4, r3, #0\n    cmp r1, #0\n    ble _02221D50\n    ldrb r0, [r5]\n    lsl r2, r3, #8\n    add r4, r4, #1\n    sub r5, r5, #1\n    add r3, r2, r0\n    cmp r4, r1\n    blt _02221D42\n    add r0, r3, #0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov13_02221D58(void) {
    /* Original at 0x02221D58 */
    /* Requires manual decompilation - 152 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r1, #0\n    add r5, r0, #6\n    add r0, r6, #0\n    str r0, [sp, #0xc]\n    add r0, #8\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    str r0, [sp, #8]\n    add r0, #0xf0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    str r0, [sp, #4]\n    add r0, #0xb0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    str r0, [sp]\n    add r0, #0x70\n    add r7, r6, #0\n    str r0, [sp]\n    add r7, #0x30\n    str r5, [sp, #0x10]\n    ldrh r0, [r5, #2]\n    bl ov13_02222A84\n    add r4, r0, #0\n    ldrb r0, [r5]\n    cmp r0, #0x21\n    bgt _02221DBE\n    bge _02221DDC\n    cmp r0, #0x15\n    bgt _02221DB8\n    add r1, r0, #0\n    sub r1, #0x10\n    bmi _02221DF4\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02221DAC: ; jump table\n    cmp r0, #0x20\n    beq _02221DDC\n    b _02221DF4\n    cmp r0, #0x23\n    bgt _02221DCA\n    bge _02221DDC\n    cmp r0, #0x22\n    beq _02221DDC\n    b _02221DF4\n    cmp r0, #0x25\n    beq _02221DE8\n    b _02221DF4\n    cmp r4, #5\n    bls _02221DF4\n    mov r0, #0\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    cmp r4, #0xd\n    bls _02221DF4\n    mov r0, #0\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    cmp r4, #0x21\n    bls _02221DF4\n    mov r0, #0\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    cmp r0, #0x21\n    bgt _02221E22\n    bge _02221E42\n    cmp r0, #0x15\n    bgt _02221E1C\n    add r1, r0, #0\n    sub r1, #0x10\n    bmi _02221E8C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02221E10: ; jump table\n    cmp r0, #0x20\n    beq _02221E34\n    b _02221E8C\n    cmp r0, #0x23\n    bgt _02221E2E\n    bge _02221E5E\n    cmp r0, #0x22\n    beq _02221E50\n    b _02221E8C\n    cmp r0, #0x25\n    beq _02221E6C\n    b _02221E8C\n    add r0, r7, #0\n    add r1, r5, #6\n    add r2, r4, #0\n    bl ov13_02222968\n    str r4, [r6, #4]\n    b _02221E94\n    ldr r0, [sp]\n    add r1, r5, #6\n    add r2, r4, #0\n    bl ov13_02222968\n    str r4, [r6, #4]\n    b _02221E94\n    ldr r0, [sp, #4]\n    add r1, r5, #6\n    add r2, r4, #0\n    bl ov13_02222968\n    str r4, [r6, #4]\n    b _02221E94\n    ldr r0, [sp, #8]\n    add r1, r5, #6\n    add r2, r4, #0\n    bl ov13_02222968\n    str r4, [r6, #4]\n    b _02221E94\n    cmp r4, #0\n    beq _02221E80\n    add r0, r5, r4\n    ldrb r0, [r0, #5]\n    cmp r0, #0\n    beq _02221E80\n    mov r0, #0\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0xc]\n    add r1, r5, #6\n    add r2, r4, #0\n    bl ov13_02222968\n    b _02221E94\n    mov r0, #0\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    ldrh r0, [r5, #4]\n    cmp r0, #0\n    beq _02221EA4\n    bl ov13_02222A84\n    ldr r1, [sp, #0x10]\n    add r5, r1, r0\n    b _02221D86\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_02221EAC(void) {
    /* Original at 0x02221EAC */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    add r4, r0, #6\n    add r0, r6, #0\n    str r0, [sp]\n    add r0, #8\n    add r7, r6, #0\n    str r0, [sp]\n    add r7, #0x30\n    str r4, [sp, #4]\n    ldrh r0, [r4, #2]\n    bl ov13_02222A84\n    add r5, r0, #0\n    ldrb r0, [r4]\n    cmp r0, #0x35\n    bgt _02221ED8\n    bge _02221EF2\n    cmp r0, #0x30\n    beq _02221EE6\n    b _02221EFE\n    cmp r0, #0x40\n    bgt _02221EE0\n    beq _02221EE6\n    b _02221EFE\n    cmp r0, #0x45\n    beq _02221EF2\n    b _02221EFE\n    cmp r5, #0x40\n    bls _02221EFE\n    mov r0, #0\n    add sp, #8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r5, #0x21\n    bls _02221EFE\n    mov r0, #0\n    add sp, #8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #0x35\n    bgt _02221F0A\n    bge _02221F26\n    cmp r0, #0x30\n    beq _02221F18\n    b _02221F46\n    cmp r0, #0x40\n    bgt _02221F12\n    beq _02221F18\n    b _02221F46\n    cmp r0, #0x45\n    beq _02221F26\n    b _02221F46\n    add r0, r7, #0\n    add r1, r4, #6\n    add r2, r5, #0\n    bl ov13_02222968\n    str r5, [r6, #4]\n    b _02221F4E\n    cmp r5, #0\n    beq _02221F3A\n    add r0, r4, r5\n    ldrb r0, [r0, #5]\n    cmp r0, #0\n    beq _02221F3A\n    mov r0, #0\n    add sp, #8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    add r1, r4, #6\n    add r2, r5, #0\n    bl ov13_02222968\n    b _02221F4E\n    mov r0, #0\n    add sp, #8\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r0, [r4, #4]\n    cmp r0, #0\n    beq _02221F5E\n    bl ov13_02222A84\n    ldr r1, [sp, #4]\n    add r4, r1, r0\n    b _02221EC2\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_02221F64(void) {
    /* Original at 0x02221F64 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #6\n    ldrh r0, [r4, #2]\n    add r5, r1, #0\n    bl ov13_02222A84\n    add r2, r0, #0\n    cmp r2, #0\n    bgt _02221F7C\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4]\n    cmp r0, #0x70\n    beq _02221F88\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #6\n    bl ov13_02222968\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov13_02221F94(void) {
    /* Original at 0x02221F94 */
    /* Requires manual decompilation - 116 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r2, #0\n    str r0, [sp]\n    add r4, r1, #0\n    mov r5, #0\n    str r3, [sp, #4]\n    cmp r6, #0\n    bgt _02221FAC\n    add sp, #0x14\n    sub r0, r5, #2\n    pop {r4, r5, r6, r7, pc}\n    ldr r7, _0222209C ; =_022459B0\n    ldr r2, [sp]\n    ldrb r0, [r4]\n    ldrb r2, [r7, r2]\n    add r1, r4, #0\n    cmp r0, r2\n    beq _02221FD2\n    ldrh r0, [r4, #2]\n    bl ov13_02222A84\n    add r0, r0, #4\n    sub r6, r6, r0\n    add r4, r4, r0\n    cmp r6, #0\n    bgt _02221FAE\n    mov r0, #3\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    ldrh r0, [r1, #2]\n    add r4, r4, #4\n    bl ov13_02222A84\n    add r7, r0, #0\n    mov r1, #0x35\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    mul r1, r0\n    ldr r0, [sp, #4]\n    add r6, r0, r1\n    ldr r0, [sp, #0x28]\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    add r0, r0, #3\n    lsl r0, r0, #7\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    str r0, [sp, #0x10]\n    add r0, #8\n    str r0, [sp, #0x10]\n    ldrb r0, [r4]\n    cmp r0, #0xa\n    bhi _02222076\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0222200E: ; jump table\n    ldr r1, [sp, #0x10]\n    add r0, r4, #0\n    bl ov13_02221D58\n    mov r1, #1\n    orr r5, r1\n    b _0222207A\n    mov r1, #0x4e\n    lsl r1, r1, #2\n    add r0, r4, #0\n    add r1, r6, r1\n    bl ov13_02221D58\n    mov r1, #2\n    orr r5, r1\n    b _0222207A\n    mov r1, #0x9a\n    lsl r1, r1, #2\n    add r0, r4, #0\n    add r1, r6, r1\n    bl ov13_02221EAC\n    mov r1, #4\n    orr r5, r1\n    b _0222207A\n    mov r1, #0xb6\n    lsl r1, r1, #2\n    add r0, r4, #0\n    add r1, r6, r1\n    bl ov13_02221EAC\n    mov r1, #8\n    orr r5, r1\n    b _0222207A\n    ldr r2, [sp, #8]\n    ldr r1, [sp, #0xc]\n    add r0, r4, #0\n    add r1, r2, r1\n    bl ov13_02221F64\n    b _0222207A\n    mov r0, #2\n    mvn r0, r0\n    cmp r0, #0\n    bne _02222098\n    ldrh r0, [r4, #2]\n    bl ov13_02222A84\n    add r0, r0, #4\n    sub r7, r7, r0\n    add r4, r4, r0\n    cmp r7, #0\n    bgt _02221FFC\n    ldr r0, _022220A0 ; =_0224CF98\n    ldr r1, [r0, #0x30]\n    orr r1, r5\n    str r1, [r0, #0x30]\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0222209C: .word _022459B0\n    _022220A0: .word _0224CF98"
    );
    #endif
}

void ov13_022220A4(void) {
    /* Original at 0x022220A4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x10\n    mov r2, #0\n    tst r0, r1\n    beq _022220AE\n    mov r2, #1\n    add r0, r2, #0\n    bx lr"
    );
    #endif
}

void ov13_022220B4(void) {
    /* Original at 0x022220B4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r0, #0\n    beq _022220CA\n    cmp r0, #1\n    beq _022220DC\n    cmp r0, #2\n    beq _022220EE\n    b _02222100\n    mov r0, #2\n    bl ov13_022217D0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov13_02222108\n    pop {r4, r5, r6, pc}\n    mov r0, #3\n    bl ov13_022217D0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov13_0222224C\n    pop {r4, r5, r6, pc}\n    mov r0, #5\n    bl ov13_022217D0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov13_02222328\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov13_02222108(void) {
    /* Original at 0x02222108 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r7, r1, #0\n    mov r1, #0\n    add r0, sp, #0x10\n    strb r1, [r0]\n    strh r1, [r0, #4]\n    strh r1, [r0, #2]\n    ldr r0, _0222223C ; =_0224CF98\n    str r2, [sp, #0xc]\n    ldr r5, [r0, #0x14]\n    ldr r2, _02222240 ; =0x000005DC\n    add r0, r5, #0\n    bl ov13_02222978\n    mov r0, #0x21\n    lsl r0, r0, #4\n    bl ov13_022208E8\n    add r4, r0, #0\n    bne _02222140\n    mov r0, #2\n    bl ov13_022214AC\n    mov r0, #0\n    add sp, #0x20\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r2, #0x21\n    mov r1, #0\n    lsl r2, r2, #4\n    bl ov13_02222978\n    add r6, r5, #0\n    ldr r0, _02222244 ; =ov13_0224DCF8\n    add r1, r7, #0\n    mov r2, #8\n    add r6, #0x18\n    bl ov13_02222968\n    add r0, sp, #0x14\n    ldr r1, _02222244 ; =ov13_0224DCF8\n    add r0, #2\n    mov r2, #8\n    bl ov13_02222968\n    add r0, r4, #4\n    bl ov13_02222394\n    add r1, sp, #0x10\n    strh r0, [r1, #4]\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    cmp r0, #0\n    bge _0222218E\n    mov r0, #3\n    bl ov13_022214AC\n    cmp r4, #0\n    beq _02222186\n    add r0, r4, #0\n    bl ov13_022208F8\n    mov r0, #0\n    add sp, #0x20\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    strb r0, [r4]\n    ldrh r0, [r1, #4]\n    bl ov13_02222A44\n    strh r0, [r4, #2]\n    add r1, sp, #0x10\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    add r2, r4, #0\n    add r3, sp, #0x14\n    add r0, r0, #4\n    strh r0, [r1, #4]\n    add r0, sp, #0x10\n    add r0, #2\n    str r0, [sp]\n    add r0, sp, #0x10\n    str r0, [sp, #4]\n    mov r0, #0\n    add r1, r6, #0\n    bl ov13_02222420\n    add r1, sp, #0x10\n    mov r0, #2\n    ldrsh r2, [r1, r0]\n    mov r0, #0x10\n    mov r3, #6\n    orr r0, r2\n    strh r0, [r1, #2]\n    add r0, sp, #0x14\n    ldr r2, _02222248 ; =ov13_02245A20\n    add r0, #2\n    mov r1, #8\n    bl ov13_022227A0\n    cmp r0, #0\n    beq _022221F0\n    mov r0, #2\n    bl ov13_022214AC\n    cmp r4, #0\n    beq _022221E8\n    add r0, r4, #0\n    bl ov13_022208F8\n    mov r0, #0\n    add sp, #0x20\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r3, sp, #0x10\n    mov r0, #0\n    ldrsb r0, [r3, r0]\n    mov r1, #1\n    mov r2, #4\n    str r0, [sp]\n    mov r0, #0x11\n    str r0, [sp, #4]\n    add r0, sp, #0x14\n    add r0, #2\n    str r0, [sp, #8]\n    mov r6, #2\n    ldrsh r2, [r3, r2]\n    ldrsh r3, [r3, r6]\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl ov13_02222474\n    add r2, sp, #0x10\n    mov r1, #4\n    ldrsh r0, [r2, r1]\n    ldr r3, [sp, #0xc]\n    add r0, #0x18\n    strh r0, [r2, #4]\n    ldrsh r1, [r2, r1]\n    add r0, r5, #0\n    mov r2, #0xff\n    bl ov13_022224CC\n    cmp r4, #0\n    beq _02222234\n    add r0, r4, #0\n    bl ov13_022208F8\n    mov r0, #0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222223C: .word _0224CF98\n    _02222240: .word 0x000005DC\n    _02222244: .word ov13_0224DCF8\n    _02222248: .word ov13_02245A20"
    );
    #endif
}

void ov13_0222224C(void) {
    /* Original at 0x0222224C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x24\n    add r5, r1, #0\n    mov r1, #0\n    add r0, sp, #0xc\n    strb r1, [r0]\n    strh r1, [r0, #4]\n    strh r1, [r0, #2]\n    ldr r0, _0222231C ; =_0224CF98\n    add r6, r2, #0\n    ldr r4, [r0, #0x14]\n    add r0, sp, #0x14\n    mov r2, #8\n    bl ov13_02222978\n    ldr r2, _02222320 ; =0x000005DC\n    add r0, r4, #0\n    mov r1, #0\n    bl ov13_02222978\n    mov r1, #2\n    add r0, sp, #0xc\n    strb r1, [r0, #8]\n    mov r1, #0\n    strb r1, [r0, #9]\n    mov r0, #4\n    bl ov13_02222A44\n    add r1, sp, #0xc\n    strh r0, [r1, #0xa]\n    ldr r0, _0222231C ; =_0224CF98\n    ldr r0, [r0, #0x2c]\n    str r0, [sp, #0x18]\n    bl ov13_02222A1C\n    str r0, [sp, #0x18]\n    mov r1, #8\n    add r0, sp, #0xc\n    strh r1, [r0, #4]\n    add r0, sp, #0xc\n    add r0, #2\n    str r0, [sp]\n    add r0, sp, #0xc\n    str r0, [sp, #4]\n    ldr r0, _0222231C ; =_0224CF98\n    add r1, r4, #0\n    ldr r0, [r0]\n    add r1, #0x18\n    add r2, sp, #0x14\n    add r3, sp, #0x10\n    bl ov13_02222420\n    add r5, #8\n    add r0, sp, #0x1c\n    add r1, r5, #0\n    mov r2, #8\n    bl ov13_02222968\n    ldr r2, _02222324 ; =ov13_02245A20\n    add r0, sp, #0x1c\n    mov r1, #8\n    mov r3, #6\n    bl ov13_022227A0\n    cmp r0, #0\n    beq _022222DE\n    mov r0, #2\n    bl ov13_022214AC\n    mov r0, #0\n    add sp, #0x24\n    mvn r0, r0\n    pop {r3, r4, r5, r6, pc}\n    add r3, sp, #0xc\n    mov r0, #0\n    ldrsb r0, [r3, r0]\n    mov r1, #2\n    mov r2, #4\n    str r0, [sp]\n    mov r0, #0x11\n    str r0, [sp, #4]\n    add r0, sp, #0x1c\n    str r0, [sp, #8]\n    mov r5, #2\n    ldrsh r2, [r3, r2]\n    ldrsh r3, [r3, r5]\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    bl ov13_02222474\n    add r2, sp, #0xc\n    mov r1, #4\n    ldrsh r0, [r2, r1]\n    add r3, r6, #0\n    add r0, #0x18\n    strh r0, [r2, #4]\n    ldrsh r1, [r2, r1]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov13_022224CC\n    mov r0, #0\n    add sp, #0x24\n    pop {r3, r4, r5, r6, pc}\n    _0222231C: .word _0224CF98\n    _02222320: .word 0x000005DC\n    _02222324: .word ov13_02245A20"
    );
    #endif
}

void ov13_02222328(void) {
    /* Original at 0x02222328 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    ldr r0, _02222388 ; =_0224CF98\n    add r6, r2, #0\n    ldr r4, [r0, #0x14]\n    ldr r2, _0222238C ; =0x000005DC\n    add r5, r1, #0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov13_02222978\n    add r5, #0x10\n    add r0, sp, #0xc\n    add r1, r5, #0\n    mov r2, #8\n    bl ov13_02222968\n    ldr r0, _02222390 ; =ov13_02245A20\n    bl ov13_02222A9C\n    add r3, r0, #0\n    ldr r2, _02222390 ; =ov13_02245A20\n    add r0, sp, #0xc\n    mov r1, #8\n    bl ov13_022227A0\n    mov r2, #0\n    mov r1, #3\n    str r2, [sp]\n    mov r0, #0x11\n    str r0, [sp, #4]\n    add r0, sp, #0xc\n    str r0, [sp, #8]\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    add r3, r2, #0\n    bl ov13_02222474\n    add r0, r4, #0\n    mov r1, #0x18\n    mov r2, #0\n    add r3, r6, #0\n    bl ov13_022224CC\n    mov r0, #0\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02222388: .word _0224CF98\n    _0222238C: .word 0x000005DC\n    _02222390: .word ov13_02245A20"
    );
    #endif
}

void ov13_02222394(void) {
    /* Original at 0x02222394 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r1, _02222418 ; =ov13_0224CFB8\n    add r5, r0, #0\n    mov r0, #0x1d\n    ldrsb r0, [r1, r0]\n    ldr r1, _0222241C ; =_0224CF98\n    mov r6, #0\n    strb r0, [r5]\n    mov r0, #1\n    strb r0, [r5, #1]\n    ldr r0, [r1, #0x28]\n    ldr r1, [r1, #0x24]\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    add r0, r5, #6\n    add r2, r4, #0\n    bl ov13_02222968\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl ov13_02222A44\n    strh r0, [r5, #2]\n    add r0, r4, #6\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add r1, r0, #1\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r0, r0, #1\n    lsl r0, r0, #0x11\n    asr r7, r0, #0x10\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    bl ov13_02222A44\n    strh r0, [r5, #4]\n    add r0, r6, r7\n    lsl r0, r0, #0x10\n    asr r6, r0, #0x10\n    mov r0, #0x60\n    strb r0, [r5, r7]\n    add r4, r5, r7\n    mov r0, #0\n    strb r0, [r4, #1]\n    bl ov13_02222A44\n    strh r0, [r4, #4]\n    mov r0, #0xe\n    bl ov13_02222A1C\n    str r0, [sp]\n    add r0, r4, #6\n    add r1, sp, #0\n    mov r2, #4\n    bl ov13_02222968\n    mov r0, #4\n    bl ov13_02222A44\n    add r6, #0xa\n    strh r0, [r4, #2]\n    lsl r0, r6, #0x10\n    asr r0, r0, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02222418: .word ov13_0224CFB8\n    _0222241C: .word _0224CF98"
    );
    #endif
}

void ov13_02222420(void) {
    /* Original at 0x02222420 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r4, r3, #0\n    cmp r0, #1\n    bne _02222460\n    ldr r0, [sp, #0x18]\n    mov r1, #1\n    strh r1, [r0]\n    add r0, r5, #2\n    str r0, [sp]\n    ldr r0, _02222470 ; =ov13_0224DCF8\n    ldr r3, [sp, #0x1c]\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    add r0, r2, #0\n    mov r2, #0\n    ldrsh r2, [r4, r2]\n    add r1, r5, #4\n    bl ov13_02222534\n    ldrh r0, [r4]\n    bl ov13_02222A44\n    strh r0, [r5]\n    mov r0, #0\n    ldrsh r0, [r4, r0]\n    add sp, #0xc\n    add r0, r0, #4\n    strh r0, [r4]\n    pop {r4, r5, pc}\n    add r1, r2, #0\n    mov r2, #0\n    ldrsh r2, [r4, r2]\n    add r0, r5, #0\n    bl ov13_02222968\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _02222470: .word ov13_0224DCF8"
    );
    #endif
}

void ov13_02222474(void) {
    /* Original at 0x02222474 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #1\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl ov13_02222A44\n    strh r0, [r5]\n    mov r0, #0\n    strh r0, [r5, #2]\n    strh r0, [r5, #4]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl ov13_02222A44\n    strh r0, [r5, #6]\n    mov r0, #0\n    strh r0, [r5, #8]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    bl ov13_02222A44\n    strh r0, [r5, #0xa]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    bl ov13_02222A44\n    strh r0, [r5, #0xc]\n    add r1, sp, #8\n    mov r0, #0x10\n    ldrsb r0, [r1, r0]\n    mov r2, #8\n    strb r0, [r5, #0xe]\n    mov r0, #0x14\n    ldrsb r0, [r1, r0]\n    ldr r1, [sp, #0x20]\n    strb r0, [r5, #0xf]\n    add r5, #0x10\n    add r0, r5, #0\n    bl ov13_02222968\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_022224CC(void) {
    /* Original at 0x022224CC */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    add r0, sp, #8\n    mov r1, #0\n    mov r2, #8\n    add r7, r3, #0\n    bl ov13_02222978\n    mov r1, #2\n    add r0, sp, #8\n    strb r1, [r0, #1]\n    ldr r0, _02222528 ; =0x00005790\n    bl ov13_02222A44\n    add r1, sp, #8\n    strh r0, [r1, #2]\n    ldr r0, _0222252C ; =_0224CF98\n    ldr r0, [r0, #0x34]\n    bl ov13_02222A1C\n    str r0, [sp, #0xc]\n    cmp r4, #0xff\n    beq _0222250A\n    ldr r1, _02222530 ; =ov13_0224CFB8\n    mov r0, #0x1c\n    ldrsb r0, [r1, r0]\n    cmp r0, #0\n    bne _02222510\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0xc]\n    add r0, sp, #8\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    mov r3, #0\n    bl ov13_022229EC\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02222528: .word 0x00005790\n    _0222252C: .word _0224CF98\n    _02222530: .word ov13_0224CFB8"
    );
    #endif
}

void ov13_02222534(void) {
    /* Original at 0x02222534 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r2, #0\n    add r7, r1, #0\n    add r4, r3, #0\n    add r1, r5, #0\n    add r6, r0, #0\n    bl ov13_02222708\n    strb r0, [r4]\n    add r0, r5, #0\n    bl ov13_022208E8\n    str r0, [sp, #0xc]\n    cmp r0, #0\n    bne _0222255C\n    mov r0, #0\n    add sp, #0x14\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    bl ov13_02222AB0\n    add r1, sp, #0\n    strh r0, [r1]\n    ldr r0, [sp, #0x28]\n    add r1, sp, #0\n    mov r2, #2\n    bl ov13_02222968\n    ldr r0, _022225A8 ; =ov13_0224DD00\n    ldr r1, [sp, #0x28]\n    mov r2, #2\n    bl ov13_02222968\n    ldr r0, _022225AC ; =ov13_0224DD02\n    ldr r1, [sp, #0x2c]\n    ldr r2, [sp, #0x30]\n    bl ov13_02222968\n    ldr r2, [sp, #0x30]\n    ldr r1, _022225A8 ; =ov13_0224DD00\n    add r0, sp, #4\n    add r2, r2, #2\n    add r3, r5, #0\n    bl ov13_02222638\n    add r0, sp, #4\n    add r1, r7, #0\n    add r2, r6, #0\n    add r3, r5, #0\n    bl ov13_0222269C\n    ldr r0, [sp, #0xc]\n    bl ov13_022208F8\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _022225A8: .word ov13_0224DD00\n    _022225AC: .word ov13_0224DD02"
    );
    #endif
}

void ov13_022225B0(void) {
    /* Original at 0x022225B0 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r2, #0\n    add r7, r0, #0\n    add r0, r4, #0\n    add r5, r1, #0\n    add r6, r3, #0\n    bl ov13_022208E8\n    str r0, [sp, #8]\n    cmp r0, #0\n    bne _022225D6\n    mov r0, #2\n    bl ov13_022214AC\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02222630 ; =ov13_0224DD00\n    ldr r1, [sp, #0x28]\n    mov r2, #2\n    bl ov13_02222968\n    ldr r0, _02222634 ; =ov13_0224DD02\n    ldr r1, [sp, #0x2c]\n    ldr r2, [sp, #0x30]\n    bl ov13_02222968\n    ldr r2, [sp, #0x30]\n    ldr r1, _02222630 ; =ov13_0224DD00\n    add r0, sp, #0\n    add r2, r2, #2\n    add r3, r4, #0\n    bl ov13_02222638\n    add r0, sp, #0\n    add r1, r5, #0\n    add r2, r7, #0\n    add r3, r4, #0\n    bl ov13_0222269C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov13_02222708\n    cmp r0, r6\n    beq _02222624\n    mov r0, #0x12\n    bl ov13_022214AC\n    ldr r0, [sp, #8]\n    bl ov13_022208F8\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #8]\n    bl ov13_022208F8\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02222630: .word ov13_0224DD00\n    _02222634: .word ov13_0224DD02"
    );
    #endif
}

void ov13_02222638(void) {
    /* Original at 0x02222638 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r4, [r0, #8]\n    ldr r1, [sp]\n    mov r0, #0\n    str r0, [r1, #4]\n    str r2, [sp, #8]\n    str r0, [r1]\n    add r2, r3, #0\n    str r2, [r1, #0xc]\n    str r3, [sp, #0xc]\n    add r1, r3, #0\n    beq _02222660\n    ldr r1, [sp, #0xc]\n    strb r0, [r4, r0]\n    add r0, r0, #1\n    cmp r0, r1\n    blo _02222656\n    ldr r0, [sp, #0xc]\n    mov r1, #0\n    add r6, r1, #0\n    add r5, r1, #0\n    cmp r0, #0\n    bls _02222696\n    ldr r0, [sp, #4]\n    ldrb r7, [r4, r5]\n    ldrb r0, [r0, r6]\n    add r0, r1, r0\n    ldr r1, [sp]\n    add r0, r7, r0\n    ldr r1, [r1, #0xc]\n    bl _u32_div_f\n    ldrb r0, [r4, r1]\n    add r6, r6, #1\n    strb r7, [r4, r1]\n    strb r0, [r4, r5]\n    ldr r0, [sp, #8]\n    cmp r6, r0\n    blo _0222268E\n    mov r6, #0\n    ldr r0, [sp, #0xc]\n    add r5, r5, #1\n    cmp r5, r0\n    blo _0222266C\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_0222269C(void) {
    /* Original at 0x0222269C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    add r5, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    ldr r4, _022226C4 ; =0x00000000\n    beq _022226C0\n    ldr r0, [sp]\n    bl ov13_022226C8\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    ldrb r0, [r6, r4]\n    eor r0, r1\n    strb r0, [r5, r4]\n    add r4, r4, #1\n    cmp r4, r7\n    blo _022226AA\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022226C4: .word 0x00000000"
    );
    #endif
}

void ov13_022226C8(void) {
    /* Original at 0x022226C8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    ldr r4, [r5, #8]\n    str r0, [sp]\n    ldr r0, [r5]\n    ldr r1, [sp]\n    add r0, r0, #1\n    bl _u32_div_f\n    lsl r0, r1, #0x18\n    lsr r7, r0, #0x18\n    ldrb r6, [r4, r7]\n    ldr r0, [r5, #4]\n    ldr r1, [sp]\n    add r0, r6, r0\n    bl _u32_div_f\n    lsl r0, r1, #0x18\n    lsr r1, r0, #0x18\n    ldrb r0, [r4, r1]\n    str r7, [r5]\n    str r1, [r5, #4]\n    strb r6, [r4, r1]\n    strb r0, [r4, r7]\n    ldr r1, [r5, #0xc]\n    add r0, r6, r0\n    bl _u32_div_f\n    ldrb r0, [r4, r1]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_02222708(void) {
    /* Original at 0x02222708 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r3, r0, #0\n    ldr r0, _0222272C ; =ov13_0224D258\n    add r2, r1, #0\n    str r0, [sp]\n    mov r0, #0\n    add r1, r3, #0\n    mvn r0, r0\n    mov r3, #0\n    bl ov13_02222730\n    mov r1, #0\n    mvn r1, r1\n    eor r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r3, pc}\n    nop\n    _0222272C: .word ov13_0224D258"
    );
    #endif
}

void ov13_02222730(void) {
    /* Original at 0x02222730 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    add r4, r2, #0\n    ldr r6, [sp, #0x18]\n    cmp r3, #0\n    bne _02222746\n    add r0, r3, #0\n    add r1, r6, #0\n    bl ov13_02222768\n    mov r1, #0\n    cmp r4, #0\n    ble _02222762\n    ldrb r2, [r7, r1]\n    lsr r0, r5, #8\n    add r1, r1, #1\n    eor r2, r5\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x16\n    ldr r2, [r6, r2]\n    add r5, r0, #0\n    eor r5, r2\n    cmp r1, r4\n    blt _0222274C\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_02222768(void) {
    /* Original at 0x02222768 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    mov r5, #1\n    add r3, r5, #0\n    ldr r4, _0222279C ; =0xEDB88320\n    mov r0, #0\n    add r3, #0xff\n    add r7, r0, #0\n    mov r2, #0\n    add r6, r7, #0\n    tst r6, r5\n    beq _02222786\n    lsr r6, r7, #1\n    add r7, r6, #0\n    eor r7, r4\n    b _02222788\n    lsr r7, r7, #1\n    add r2, r2, #1\n    cmp r2, #8\n    blt _02222778\n    add r0, r0, #1\n    stmia r1!, {r7}\n    cmp r0, r3\n    blt _02222774\n    pop {r4, r5, r6, r7}\n    bx lr\n    nop\n    _0222279C: .word 0xEDB88320"
    );
    #endif
}

void ov13_022227A0(void) {
    /* Original at 0x022227A0 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    add r7, r0, #0\n    lsr r0, r5, #0x1f\n    add r0, r5, r0\n    asr r0, r0, #1\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    bl ov13_022208E8\n    add r6, r0, #0\n    bne _022227C2\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov13_022208E8\n    str r0, [sp, #0xc]\n    cmp r0, #0\n    bne _022227DC\n    add r0, r6, #0\n    bl ov13_022208F8\n    mov r0, #0\n    add sp, #0x10\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    ldr r0, [sp, #8]\n    ldr r3, [sp, #4]\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl ov13_0222281C\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, r5, #0\n    bl ov13_02222850\n    ldr r2, [sp, #0xc]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl ov13_02222874\n    add r4, r4, #1\n    cmp r4, #2\n    blt _022227DE\n    add r0, r6, #0\n    bl ov13_022208F8\n    ldr r0, [sp, #0xc]\n    bl ov13_022208F8\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_0222281C(void) {
    /* Original at 0x0222281C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    lsr r1, r2, #0x1f\n    add r1, r2, r1\n    ldr r6, [sp, #0x18]\n    asr r4, r1, #1\n    add r1, r6, #0\n    add r7, r3, #0\n    bl _s32_div_f\n    mov r0, #0\n    cmp r4, #0\n    ble _0222284E\n    strb r0, [r5, r0]\n    ldrsb r2, [r7, r1]\n    ldrsb r3, [r5, r0]\n    add r1, r1, #1\n    eor r2, r3\n    strb r2, [r5, r0]\n    cmp r1, r6\n    blt _02222848\n    mov r1, #0\n    add r0, r0, #1\n    cmp r0, r4\n    blt _02222836\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_02222850(void) {
    /* Original at 0x02222850 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    lsr r3, r2, #0x1f\n    add r3, r2, r3\n    asr r4, r3, #1\n    mov r3, #0\n    cmp r4, #0\n    ble _02222870\n    add r5, r1, r4\n    ldrsb r1, [r0, r3]\n    ldrb r2, [r5]\n    add r3, r3, #1\n    eor r1, r2\n    strb r1, [r5]\n    add r5, r5, #1\n    cmp r3, r4\n    blt _02222860\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov13_02222874(void) {
    /* Original at 0x02222874 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    lsr r0, r6, #0x1f\n    add r0, r6, r0\n    asr r7, r0, #1\n    add r4, r2, #0\n    add r0, r4, #0\n    add r1, r5, r7\n    add r2, r7, #0\n    bl ov13_02222968\n    add r0, r4, r7\n    add r1, r5, #0\n    add r2, r7, #0\n    bl ov13_02222968\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov13_02222968\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_022228A4(void) {
    /* Original at 0x022228A4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    ble _022228B4\n    add r0, r1, #0\n    ldr r1, _022228B8 ; =ov13_0224DD80\n    ldr r1, [r1]\n    blx r1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _022228B8: .word ov13_0224DD80"
    );
    #endif
}

void ov13_022228BC(void) {
    /* Original at 0x022228BC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r0, r1, #0\n    ldr r1, _022228C8 ; =ov13_0224DD8C\n    ldr r1, [r1]\n    blx r1\n    pop {r3, pc}\n    _022228C8: .word ov13_0224DD8C"
    );
    #endif
}

void ov13_022228CC(void) {
    /* Original at 0x022228CC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl ov13_02222A1C\n    ldr r1, _02222918 ; =ov13_022459B4\n    str r0, [r1, #0x18]\n    add r0, r5, #0\n    bl ov13_02222A1C\n    ldr r1, _02222918 ; =ov13_022459B4\n    str r0, [r1, #0x1c]\n    add r0, r4, #0\n    bl ov13_02222A1C\n    ldr r1, _02222918 ; =ov13_022459B4\n    str r0, [r1, #0x20]\n    ldr r0, _0222291C ; =ov13_022459BC\n    bl SOC_Startup\n    cmp r0, #0\n    bge _022228FE\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    ldr r5, _02222920 ; =_021D4670\n    ldr r0, [r5]\n    cmp r0, #0\n    bne _02222914\n    mov r4, #0x64\n    add r0, r4, #0\n    bl OS_Sleep\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02222908\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _02222918: .word ov13_022459B4\n    _0222291C: .word ov13_022459BC\n    _02222920: .word _021D4670"
    );
    #endif
}

void ov13_02222924(void) {
    /* Original at 0x02222924 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl SOC_Cleanup\n    cmp r0, #0\n    bge _02222934\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, pc}\n    bl ov13_02222D78\n    cmp r0, #0\n    beq _02222940\n    mov r0, #1\n    b _02222942\n    mov r0, #0\n    neg r0, r0\n    pop {r3, pc}"
    );
    #endif
}

void ov13_02222948(void) {
    /* Original at 0x02222948 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r3, #0\n    b _02222952\n    add r0, r0, #1\n    add r1, r1, #1\n    add r4, r2, #0\n    sub r2, r2, #1\n    cmp r4, #0\n    ble _02222962\n    ldrb r4, [r0]\n    ldrb r3, [r1]\n    sub r3, r4, r3\n    beq _0222294E\n    add r0, r3, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov13_02222968(void) {
    /* Original at 0x02222968 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    add r0, r1, #0\n    add r1, r3, #0\n    ldr r3, _02222974 ; =MI_CpuCopy8\n    bx r3\n    nop\n    _02222974: .word MI_CpuCopy8"
    );
    #endif
}

void ov13_02222978(void) {
    MI_CpuFill8();
}

void ov13_02222984(void) {
    SOC_RecvFrom();
}

void ov13_02222998(void) {
    /* Original at 0x02222998 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    ldr r2, [r1]\n    ldr r0, [r1, #4]\n    ldr r5, [sp, #0x18]\n    str r2, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    mov r4, #0\n    ldr r2, _022229E8 ; =0x01FF6210\n    asr r1, r0, #0x1f\n    add r3, r4, #0\n    bl _ll_mul\n    lsr r3, r0, #6\n    lsl r2, r1, #0x1a\n    orr r3, r2\n    lsr r0, r1, #6\n    add r6, r4, r3\n    adc r4, r0\n    ldr r0, [r5, #4]\n    ldr r2, _022229E8 ; =0x01FF6210\n    asr r1, r0, #0x1f\n    mov r3, #0\n    bl _ll_mul\n    lsr r3, r0, #6\n    lsl r2, r1, #0x1a\n    orr r3, r2\n    lsr r0, r1, #6\n    add r2, r6, r3\n    adc r4, r0\n    add r0, sp, #0\n    mov r1, #1\n    add r3, r4, #0\n    bl SOC_Poll\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _022229E8: .word 0x01FF6210"
    );
    #endif
}

void ov13_022229EC(void) {
    SOC_SendTo();
}

void ov13_022229FC(void) {
    /* Original at 0x022229FC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov13_02222A00(void) {
    SOC_Socket();
}

void ov13_02222A08(void) {
    SOC_Bind();
}

void ov13_02222A14(void) {
    SOC_Close();
}

void ov13_02222A1C(void) {
    /* Original at 0x02222A1C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r3, #0xff\n    lsl r1, r0, #0x18\n    lsl r3, r3, #0x18\n    add r2, r1, #0\n    lsl r4, r0, #8\n    lsr r1, r3, #8\n    and r1, r4\n    lsr r4, r0, #0x18\n    lsl r4, r4, #0x18\n    lsr r5, r4, #0x18\n    lsr r4, r0, #8\n    lsr r0, r3, #0x10\n    and r0, r4\n    orr r0, r5\n    and r2, r3\n    orr r0, r1\n    orr r0, r2\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov13_02222A44(void) {
    /* Original at 0x02222A44 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "asr r1, r0, #8\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    lsl r1, r0, #8\n    mov r0, #0xff\n    lsl r0, r0, #8\n    and r0, r1\n    orr r0, r2\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr"
    );
    #endif
}

void ov13_02222A5C(void) {
    /* Original at 0x02222A5C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r3, #0xff\n    lsl r1, r0, #0x18\n    lsl r3, r3, #0x18\n    add r2, r1, #0\n    lsl r4, r0, #8\n    lsr r1, r3, #8\n    and r1, r4\n    lsr r4, r0, #0x18\n    lsl r4, r4, #0x18\n    lsr r5, r4, #0x18\n    lsr r4, r0, #8\n    lsr r0, r3, #0x10\n    and r0, r4\n    orr r0, r5\n    and r2, r3\n    orr r0, r1\n    orr r0, r2\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov13_02222A84(void) {
    /* Original at 0x02222A84 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "asr r1, r0, #8\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    lsl r1, r0, #8\n    mov r0, #0xff\n    lsl r0, r0, #8\n    and r0, r1\n    orr r0, r2\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr"
    );
    #endif
}

void ov13_02222A9C(void) {
    /* Original at 0x02222A9C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    ldrsb r1, [r0, r2]\n    cmp r1, #0\n    beq _02222AAC\n    add r2, r2, #1\n    ldrsb r1, [r0, r2]\n    cmp r1, #0\n    bne _02222AA4\n    add r0, r2, #0\n    bx lr"
    );
    #endif
}

void ov13_02222AB0(void) {
    /* Original at 0x02222AB0 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    ldr r0, _02222B10 ; =_0224CF98\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _02222AF2\n    mov r4, #0\n    add r0, sp, #0\n    add r1, r4, #0\n    mov r2, #0xc\n    bl ov13_02222978\n    add r0, sp, #0\n    bl RTC_GetTime\n    cmp r0, #0\n    bne _02222AE2\n    ldr r0, [sp]\n    lsl r0, r0, #0xa\n    add r1, r4, r0\n    ldr r0, [sp, #4]\n    lsl r0, r0, #3\n    add r1, r1, r0\n    ldr r0, [sp, #8]\n    add r4, r1, r0\n    ldr r0, _02222B10 ; =_0224CF98\n    ldr r1, _02222B14 ; =0x5D588B65\n    str r4, [r0, #0x18]\n    str r1, [r0, #0x1c]\n    ldr r1, _02222B18 ; =0x00269EC3\n    str r1, [r0, #0x20]\n    mov r1, #1\n    str r1, [r0, #8]\n    ldr r0, _02222B10 ; =_0224CF98\n    ldr r2, [r0, #0x1c]\n    ldr r1, [r0, #0x18]\n    ldr r3, [r0, #0x20]\n    mul r1, r2\n    add r1, r3, r1\n    str r1, [r0, #0x18]\n    ldr r0, _02222B1C ; =0x00007FFF\n    lsr r1, r1, #0x10\n    mul r0, r1\n    lsr r0, r0, #0x10\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _02222B10: .word _0224CF98\n    _02222B14: .word 0x5D588B65\n    _02222B18: .word 0x00269EC3\n    _02222B1C: .word 0x00007FFF"
    );
    #endif
}

void ov13_02222B20(void) {
    /* Original at 0x02222B20 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    str r1, [r0]\n    strh r1, [r0, #4]\n    strh r1, [r0, #6]\n    bx lr"
    );
    #endif
}

void ov13_02222B2C(void) {
    /* Original at 0x02222B2C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "str r0, [r1]\n    mov r0, #1\n    strh r0, [r1, #4]\n    bx lr"
    );
    #endif
}

void ov13_02222B34(void) {
    /* Original at 0x02222B34 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #0xa]\n    add r4, r1, #0\n    add r1, r4, #4\n    str r0, [r4]\n    add r0, r5, #0\n    add r0, #0xc\n    mov r2, #0x20\n    bl MIi_CpuCopy16\n    ldrh r0, [r5, #0x36]\n    add r1, r4, #0\n    add r1, #0x30\n    str r0, [r4, #0x24]\n    add r0, r5, #4\n    mov r2, #6\n    bl MIi_CpuCopy16\n    mov r1, #0\n    ldr r2, _02222BBC ; =ov13_02245A28\n    add r0, r1, #0\n    mov r6, #0x80\n    ldrh r7, [r5, #0x30]\n    ldrh r3, [r2]\n    tst r3, r7\n    beq _02222B8C\n    ldrb r7, [r2, #2]\n    add r3, r4, r1\n    add r3, #0x3c\n    strb r7, [r3]\n    ldrh r7, [r5, #0x2e]\n    ldrh r3, [r2]\n    tst r3, r7\n    beq _02222B8A\n    add r3, r4, r1\n    add r3, #0x3c\n    ldrb r3, [r3]\n    add r7, r3, #0\n    add r3, r4, r1\n    orr r7, r6\n    add r3, #0x3c\n    strb r7, [r3]\n    add r1, r1, #1\n    add r0, r0, #1\n    add r2, r2, #4\n    cmp r0, #0xc\n    blt _02222B62\n    str r1, [r4, #0x38]\n    ldrh r0, [r5, #0x32]\n    str r0, [r4, #0x4c]\n    ldrh r1, [r5, #0x2c]\n    mov r0, #3\n    and r0, r1\n    cmp r0, #1\n    bne _02222BAA\n    mov r0, #1\n    str r0, [r4, #0x50]\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r0, #2\n    bne _02222BB4\n    mov r0, #2\n    str r0, [r4, #0x50]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [r4, #0x50]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02222BBC: .word ov13_02245A28"
    );
    #endif
}

void ov13_02222BC0(void) {
    /* Original at 0x02222BC0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0\n    add r1, #0xc\n    mov r2, #0x20\n    bl MIi_CpuClear16\n    ldr r0, [r5]\n    add r1, r4, #0\n    strh r0, [r4, #0xa]\n    ldrh r2, [r4, #0xa]\n    add r0, r5, #4\n    add r1, #0xc\n    bl MI_CpuCopy8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov13_02222BE4(void) {
    /* Original at 0x02222BE4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    add r0, r1, #0\n    str r2, [r3]\n    add r1, r3, #4\n    ldr r3, _02222BF0 ; =ov13_02222B34\n    bx r3\n    _02222BF0: .word ov13_02222B34"
    );
    #endif
}

void ov13_02222BF4(void) {
    /* Original at 0x02222BF4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02222C00 ; =OS_SendMessage\n    add r1, r0, #0\n    ldr r0, _02222C04 ; =ov13_0224DDA0\n    mov r2, #0\n    bx r3\n    nop\n    _02222C00: .word OS_SendMessage\n    _02222C04: .word ov13_0224DDA0"
    );
    #endif
}

void ov13_02222C08(void) {
    /* Original at 0x02222C08 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02222C14 ; =OS_SendMessage\n    add r1, r0, #0\n    ldr r0, _02222C18 ; =ov13_0224DDA0\n    mov r2, #0\n    bx r3\n    nop\n    _02222C14: .word OS_SendMessage\n    _02222C18: .word ov13_0224DDA0"
    );
    #endif
}

void ov13_02222C1C(void) {
    /* Original at 0x02222C1C */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    ldr r0, _02222CCC ; =ov13_0224DDA0\n    ldr r1, _02222CD0 ; =ov13_0224DD90\n    mov r2, #4\n    mov r4, #1\n    bl OS_InitMessageQueue\n    cmp r5, #0\n    beq _02222C36\n    cmp r6, #0\n    bne _02222C3C\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl OS_DisableInterrupts\n    ldr r1, _02222CD4 ; =ov13_0224DD80\n    str r5, [r1]\n    str r6, [r1, #0xc]\n    bl OS_RestoreInterrupts\n    ldr r1, _02222CD4 ; =ov13_0224DD80\n    ldr r0, _02222CD8 ; =0x00005890\n    ldr r1, [r1]\n    blx r1\n    add r1, r0, #0\n    ldr r0, _02222CD4 ; =ov13_0224DD80\n    str r1, [r0, #8]\n    bne _02222C5E\n    sub r0, r4, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02222CDC ; =ov13_02222BF4\n    ldr r2, _02222CD8 ; =0x00005890\n    bl ov13_022236B8\n    cmp r0, #0\n    bne _02222C6C\n    mov r4, #0\n    cmp r4, #0\n    beq _02222CBC\n    ldr r5, _02222CCC ; =ov13_0224DDA0\n    add r6, sp, #0\n    mov r7, #1\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl OS_ReceiveMessage\n    ldr r0, [sp]\n    cmp r0, #0xf\n    bhi _02222CB6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02222C92: ; jump table\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    cmp r4, #0\n    bne _02222C76\n    ldr r1, _02222CD4 ; =ov13_0224DD80\n    ldr r0, [r1, #8]\n    ldr r1, [r1, #0xc]\n    blx r1\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02222CCC: .word ov13_0224DDA0\n    _02222CD0: .word ov13_0224DD90\n    _02222CD4: .word ov13_0224DD80\n    _02222CD8: .word 0x00005890\n    _02222CDC: .word ov13_02222BF4"
    );
    #endif
}

void ov13_02222CE0(void) {
    /* Original at 0x02222CE0 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _02222D70 ; =ov13_0224DD80\n    mov r4, #1\n    ldr r0, [r0, #0xc]\n    sub r5, r4, #2\n    cmp r0, #0\n    bne _02222CF2\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov13_022235DC\n    cmp r0, #0\n    bne _02222CFE\n    sub r0, r4, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r7, _02222D74 ; =ov13_0224DDA0\n    ldr r6, _02222D70 ; =ov13_0224DD80\n    add r0, r7, #0\n    add r1, sp, #0\n    mov r2, #1\n    bl OS_ReceiveMessage\n    ldr r0, [sp]\n    cmp r0, #0x14\n    bhi _02222D54\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02222D1E: ; jump table\n    ldr r0, [r6, #8]\n    mov r4, #0\n    ldr r1, [r6, #0xc]\n    add r5, r4, #0\n    blx r1\n    b _02222D56\n    mov r4, #0\n    cmp r4, #0\n    bne _02222D02\n    bl OS_DisableInterrupts\n    ldr r1, _02222D70 ; =ov13_0224DD80\n    mov r2, #0\n    str r2, [r1]\n    str r2, [r1, #0xc]\n    bl OS_RestoreInterrupts\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02222D70: .word ov13_0224DD80\n    _02222D74: .word ov13_0224DDA0"
    );
    #endif
}

void ov13_02222D78(void) {
    /* Original at 0x02222D78 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r5, #0\n    mvn r5, r5\n    bl ov13_022235A4\n    cmp r0, #0\n    beq _02222DA8\n    ldr r4, _02222DAC ; =ov13_0224DDA0\n    add r6, sp, #0\n    mov r7, #1\n    add r0, r4, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl OS_ReceiveMessage\n    ldr r0, [sp]\n    cmp r0, #0xe\n    bne _02222DA2\n    mov r0, #0\n    add r5, r0, #0\n    b _02222DA4\n    mov r0, #0\n    cmp r0, #0\n    bne _02222D8C\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02222DAC: .word ov13_0224DDA0"
    );
    #endif
}

void ov13_02222DB0(void) {
    /* Original at 0x02222DB0 */
    /* Requires manual decompilation - 153 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    str r0, [sp, #4]\n    mov r0, #0\n    mvn r0, r0\n    str r0, [sp, #0x10]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r6, #0\n    ldr r0, _02222F14 ; =ov13_0224DD80\n    add r7, r6, #0\n    ldr r1, [r0]\n    add r5, r6, #0\n    cmp r1, #0\n    beq _02222DD4\n    ldr r0, [r0, #0xc]\n    cmp r0, #0\n    bne _02222DDC\n    mov r0, #0\n    add sp, #0x44\n    mvn r0, r0\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #3\n    lsl r0, r0, #0xc\n    blx r1\n    add r4, r0, #0\n    bne _02222DEC\n    add sp, #0x44\n    sub r0, r6, #1\n    pop {r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    ldr r3, _02222F18 ; =0x0030BFFE\n    add r1, r0, #0\n    add r2, r0, #0\n    str r4, [sp, #8]\n    bl ov13_02223478\n    cmp r0, #0\n    bne _02222E00\n    b _02222F04\n    add r0, sp, #0x18\n    bl OS_CreateAlarm\n    mov r0, #0x13\n    str r0, [sp]\n    ldr r1, _02222F1C ; =0x003FEC42\n    ldr r3, _02222F20 ; =ov13_02222C08\n    add r0, sp, #0x18\n    add r2, r6, #0\n    bl OS_SetAlarm\n    ldr r0, _02222F24 ; =ov13_0224DDA0\n    add r1, sp, #0x14\n    mov r2, #1\n    bl OS_ReceiveMessage\n    ldr r0, [sp, #0x14]\n    cmp r0, #0x13\n    bhi _02222EEA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02222E32: ; jump table\n    cmp r6, #0\n    bne _02222EA0\n    cmp r5, #0\n    beq _02222E6C\n    add r0, r4, #0\n    mov r1, #0x40\n    bl ov13_02223434\n    add r7, r0, #0\n    bl ov13_02223568\n    cmp r0, #0\n    beq _02222EEA\n    mov r6, #1\n    b _02222EA0\n    cmp r6, #0\n    bne _02222EA0\n    cmp r5, #8\n    bge _02222E84\n    add r5, r5, #1\n    b _02222EA0\n    add r0, r4, #0\n    mov r1, #0x40\n    bl ov13_02223434\n    add r7, r0, #0\n    bl ov13_02223568\n    cmp r0, #0\n    beq _02222EEA\n    mov r6, #1\n    b _02222EA0\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    bne _02222E16\n    cmp r7, #0\n    beq _02222EBE\n    sub r1, r7, #1\n    mov r0, #0x54\n    mul r0, r1\n    ldr r1, _02222F14 ; =ov13_0224DD80\n    add r0, #0x58\n    ldr r1, [r1]\n    blx r1\n    cmp r0, #0\n    bne _02222ECA\n    b _02222EEA\n    ldr r1, _02222F14 ; =ov13_0224DD80\n    mov r0, #0x58\n    ldr r1, [r1]\n    blx r1\n    cmp r0, #0\n    beq _02222EEA\n    ldr r1, [sp, #4]\n    mov r6, #0\n    str r0, [r1]\n    str r7, [r0]\n    cmp r7, #0\n    ble _02222EEA\n    add r5, r0, #4\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov13_02222B34\n    add r6, r6, #1\n    add r4, #0xc0\n    add r5, #0x54\n    cmp r6, r7\n    blt _02222ED8\n    add r0, sp, #0x18\n    bl OS_CancelAlarm\n    ldr r5, _02222F24 ; =ov13_0224DDA0\n    add r4, sp, #0x14\n    mov r6, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl OS_ReceiveMessage\n    cmp r0, #1\n    beq _02222EF6\n    ldr r1, _02222F14 ; =ov13_0224DD80\n    ldr r0, [sp, #8]\n    ldr r1, [r1, #0xc]\n    blx r1\n    ldr r0, [sp, #0x10]\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02222F14: .word ov13_0224DD80\n    _02222F18: .word 0x0030BFFE\n    _02222F1C: .word 0x003FEC42\n    _02222F20: .word ov13_02222C08\n    _02222F24: .word ov13_0224DDA0"
    );
    #endif
}

void ov13_02222F28(void) {
    /* Original at 0x02222F28 */
    /* Requires manual decompilation - 189 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    mov r4, #1\n    add r7, r0, #0\n    sub r0, r4, #2\n    str r0, [sp, #0xc]\n    ldr r0, [r7, #0x24]\n    mov r6, #0\n    str r1, [sp, #4]\n    cmp r0, #0\n    bne _02222F42\n    lsl r5, r4, #0x13\n    b _02222F4A\n    cmp r0, #1\n    bne _02222F4A\n    mov r5, #3\n    lsl r5, r5, #0x12\n    mov r0, #3\n    lsl r0, r0, #0x10\n    orr r5, r0\n    ldr r0, _022230DC ; =ov13_0224DE80\n    mov r1, #0\n    mov r2, #0x60\n    bl MI_CpuFill8\n    ldr r0, [r7, #0x28]\n    cmp r0, #5\n    bne _02222F68\n    ldr r0, _022230DC ; =ov13_0224DE80\n    mov r1, #1\n    strb r1, [r0]\n    b _02222F88\n    cmp r0, #0xd\n    bne _02222F74\n    ldr r0, _022230DC ; =ov13_0224DE80\n    mov r1, #2\n    strb r1, [r0]\n    b _02222F88\n    cmp r0, #0x10\n    bne _02222F80\n    ldr r0, _022230DC ; =ov13_0224DE80\n    mov r1, #3\n    strb r1, [r0]\n    b _02222F88\n    mov r0, #0\n    add sp, #0x40\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0x14\n    ldr r2, _022230DC ; =ov13_0224DE80\n    mul r1, r6\n    add r1, r1, #2\n    add r0, r7, #0\n    strb r6, [r2, #1]\n    add r1, r2, r1\n    ldr r2, [r7, #0x28]\n    add r0, #0x2c\n    bl MI_CpuCopy8\n    bl WCM_ClearApList\n    ldr r2, [r7]\n    ldr r3, _022230E0 ; =0x0030BFFE\n    mov r0, #0\n    add r1, r7, #4\n    bl ov13_02223478\n    cmp r0, #0\n    bne _02222FB4\n    b _022230C2\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, sp, #0x14\n    bl OS_CreateAlarm\n    mov r0, #0x12\n    str r0, [sp]\n    ldr r1, _022230E4 ; =0x003FEC42\n    ldr r3, _022230E8 ; =ov13_02222C08\n    add r0, sp, #0x14\n    mov r2, #0\n    bl OS_SetAlarm\n    b _022230A4\n    ldr r0, _022230EC ; =ov13_0224DDA0\n    add r1, sp, #0x10\n    mov r2, #1\n    bl OS_ReceiveMessage\n    ldr r0, [sp, #0x10]\n    cmp r0, #0x13\n    bhi _022230A2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02222FEC: ; jump table\n    cmp r6, #0\n    bne _022230A4\n    mov r4, #0\n    b _022230A4\n    cmp r6, #0\n    bne _022230A4\n    add r0, sp, #0x14\n    bl OS_CancelAlarm\n    ldr r0, _022230F0 ; =ov13_0224DDC0\n    mov r1, #1\n    bl ov13_02223434\n    cmp r0, #1\n    beq _02223036\n    mov r4, #0\n    b _022230A4\n    ldr r1, _022230F0 ; =ov13_0224DDC0\n    add r0, r7, #0\n    bl ov13_02222BC0\n    ldr r1, _022230F4 ; =ov13_0224DDC0\n    mov r0, #0\n    ldrh r1, [r1, #0xa]\n    b _02223048\n    add r0, r0, #1\n    cmp r0, r1\n    blt _02223046\n    ldr r0, _022230F0 ; =ov13_0224DDC0\n    ldr r1, _022230DC ; =ov13_0224DE80\n    add r2, r5, #0\n    bl ov13_02223634\n    cmp r0, #0\n    bne _0222305E\n    mov r4, #0\n    b _022230A4\n    mov r6, #1\n    b _022230A4\n    ldr r1, _022230F0 ; =ov13_0224DDC0\n    add r0, r7, #0\n    bl ov13_02222BC0\n    ldr r0, _022230F0 ; =ov13_0224DDC0\n    ldr r1, _022230DC ; =ov13_0224DE80\n    add r2, r5, #0\n    bl ov13_02223634\n    cmp r0, #0\n    bne _022230A4\n    mov r4, #0\n    b _022230A4\n    mov r4, #0\n    str r4, [sp, #0xc]\n    b _022230A4\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    str r0, [sp, #8]\n    cmp r0, #3\n    bge _0222309E\n    ldr r0, _022230F0 ; =ov13_0224DDC0\n    ldr r1, _022230DC ; =ov13_0224DE80\n    add r2, r5, #0\n    bl ov13_02223634\n    cmp r0, #0\n    bne _022230A4\n    mov r4, #0\n    b _022230A4\n    mov r4, #0\n    b _022230A4\n    mov r4, #0\n    cmp r4, #0\n    bne _02222FD0\n    add r0, sp, #0x14\n    bl OS_CancelAlarm\n    ldr r5, _022230EC ; =ov13_0224DDA0\n    add r4, sp, #0x10\n    mov r6, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl OS_ReceiveMessage\n    cmp r0, #1\n    beq _022230B4\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    bne _022230CC\n    mov r2, #1\n    b _022230CE\n    mov r2, #0\n    ldr r0, [sp, #4]\n    ldr r1, _022230F0 ; =ov13_0224DDC0\n    bl ov13_02222BE4\n    ldr r0, [sp, #0xc]\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    _022230DC: .word ov13_0224DE80\n    _022230E0: .word 0x0030BFFE\n    _022230E4: .word 0x003FEC42\n    _022230E8: .word ov13_02222C08\n    _022230EC: .word ov13_0224DDA0\n    _022230F0: .word ov13_0224DDC0\n    _022230F4: .word ov13_0224DDC0"
    );
    #endif
}

void ov13_022230F8(void) {
    OS_Sleep();
}

void ov13_02223100(void) {
    /* Original at 0x02223100 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02223110 ; =ov13_0224DD80\n    ldr r1, [r1, #4]\n    cmp r1, #0\n    beq _0222310C\n    blx r1\n    mov r0, #0\n    pop {r3, pc}\n    _02223110: .word ov13_0224DD80"
    );
    #endif
}

void ov13_02223114(void) {
    /* Original at 0x02223114 */
    /* Requires manual decompilation - 331 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    bne _0222311C\n    b _022233C4\n    mov r1, #0\n    ldrsh r2, [r0, r1]\n    cmp r2, #7\n    bls _02223126\n    b _022233B6\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _02223132: ; jump table\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _022231AE\n    ldr r2, _022233C8 ; =ov13_0224DEE0\n    ldr r0, [r2, #0x18]\n    cmp r0, #4\n    bne _02223162\n    mov r0, #3\n    str r0, [r2, #0x18]\n    ldr r2, [r2, #0x1c]\n    cmp r2, #0\n    beq _022231BA\n    mov r0, #6\n    blx r2\n    pop {r3, pc}\n    cmp r0, #6\n    bne _02223188\n    ldr r0, [r2, #0x10]\n    ldr r1, [r2, #0x14]\n    ldr r2, [r2, #4]\n    bl WCM_SearchAsync\n    cmp r0, #3\n    beq _022231BA\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r1, #3\n    str r1, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022231BA\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    cmp r0, #8\n    bne _022231BA\n    ldr r0, [r2, #0x20]\n    ldr r1, [r2, #0x24]\n    ldr r2, [r2, #0xc]\n    bl WCM_ConnectAsync\n    cmp r0, #3\n    beq _022231BA\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r1, #3\n    str r1, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022231BA\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r3, #1\n    str r3, [r0, #0x18]\n    ldr r3, [r0, #0x1c]\n    cmp r3, #0\n    bne _022231BC\n    b _022233C4\n    add r0, r2, #0\n    blx r3\n    pop {r3, pc}\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _022231E2\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    ldr r2, [r0, #0x18]\n    cmp r2, #6\n    bne _022232BE\n    mov r2, #5\n    str r2, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022232BE\n    mov r0, #8\n    blx r2\n    pop {r3, pc}\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r2, #3\n    str r2, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022232BE\n    mov r0, #9\n    blx r2\n    pop {r3, pc}\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _02223214\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    ldr r2, [r0, #0x18]\n    cmp r2, #8\n    bne _022232BE\n    mov r2, #7\n    str r2, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022232BE\n    mov r0, #0xc\n    blx r2\n    pop {r3, pc}\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r2, #3\n    str r2, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022232BE\n    mov r0, #0xd\n    blx r2\n    pop {r3, pc}\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _022232B2\n    ldr r2, _022233C8 ; =ov13_0224DEE0\n    ldr r0, [r2, #0x18]\n    cmp r0, #4\n    bne _02223246\n    mov r0, #3\n    str r0, [r2, #0x18]\n    ldr r2, [r2, #0x1c]\n    cmp r2, #0\n    beq _022232BE\n    mov r0, #0xa\n    blx r2\n    pop {r3, pc}\n    cmp r0, #6\n    bne _0222326C\n    ldr r0, [r2, #0x10]\n    ldr r1, [r2, #0x14]\n    ldr r2, [r2, #4]\n    bl WCM_SearchAsync\n    cmp r0, #3\n    beq _022232BE\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r1, #3\n    str r1, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022232BE\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    cmp r0, #2\n    bne _0222328C\n    bl WCM_CleanupAsync\n    cmp r0, #3\n    beq _022232BE\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r1, #3\n    str r1, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022232BE\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    cmp r0, #8\n    bne _022232BE\n    ldr r0, [r2, #0x20]\n    ldr r1, [r2, #0x24]\n    ldr r2, [r2, #0xc]\n    bl WCM_ConnectAsync\n    cmp r0, #3\n    beq _022232BE\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r1, #3\n    str r1, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022232BE\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r2, #3\n    str r2, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    bne _022232C0\n    b _022233C4\n    mov r0, #0xb\n    blx r2\n    pop {r3, pc}\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _02223358\n    ldr r2, _022233C8 ; =ov13_0224DEE0\n    ldr r0, [r2, #0x18]\n    cmp r0, #4\n    bne _022232E6\n    mov r0, #3\n    str r0, [r2, #0x18]\n    ldr r2, [r2, #0x1c]\n    cmp r2, #0\n    beq _022233C4\n    mov r0, #0xe\n    blx r2\n    pop {r3, pc}\n    cmp r0, #6\n    bne _0222330C\n    ldr r0, [r2, #0x10]\n    ldr r1, [r2, #0x14]\n    ldr r2, [r2, #4]\n    bl WCM_SearchAsync\n    cmp r0, #3\n    beq _022233C4\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r1, #3\n    str r1, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022233C4\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    cmp r0, #2\n    bne _0222332C\n    bl WCM_CleanupAsync\n    cmp r0, #3\n    beq _022233C4\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r1, #3\n    str r1, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022233C4\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    cmp r0, #8\n    bne _02223352\n    ldr r0, [r2, #0x20]\n    ldr r1, [r2, #0x24]\n    ldr r2, [r2, #0xc]\n    bl WCM_ConnectAsync\n    cmp r0, #3\n    beq _022233C4\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r1, #3\n    str r1, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022233C4\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    mov r0, #3\n    str r0, [r2, #0x18]\n    pop {r3, pc}\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r2, #3\n    str r2, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022233C4\n    mov r0, #0xf\n    blx r2\n    pop {r3, pc}\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _02223390\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    ldr r0, [r0, #0x18]\n    cmp r0, #2\n    bne _022233C4\n    bl WCM_Finish\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r1, #0\n    str r1, [r0, #0x18]\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022233C4\n    mov r0, #0x14\n    blx r2\n    pop {r3, pc}\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    mov r3, #3\n    str r3, [r0, #0x18]\n    ldr r3, [r0, #0x1c]\n    cmp r3, #0\n    beq _022233C4\n    add r0, r2, #0\n    blx r3\n    pop {r3, pc}\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    ldr r2, [r0, #0x18]\n    cmp r2, #5\n    bne _022233C4\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022233C4\n    mov r0, #5\n    blx r2\n    pop {r3, pc}\n    ldr r0, _022233C8 ; =ov13_0224DEE0\n    ldr r2, [r0, #0x1c]\n    cmp r2, #0\n    beq _022233C4\n    mov r0, #1\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    nop\n    _022233C8: .word ov13_0224DEE0"
    );
    #endif
}

void ov13_022233CC(void) {
    /* Original at 0x022233CC */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0222342C ; =ov13_0224DEE0\n    ldr r0, [r1, #0x18]\n    cmp r0, #8\n    bhi _02223422\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022233E2: ; jump table\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    bl WCM_SearchAsync\n    cmp r0, #3\n    beq _02223426\n    mov r0, #0\n    pop {r3, pc}\n    bl WCM_DisconnectAsync\n    cmp r0, #3\n    beq _02223426\n    mov r0, #0\n    pop {r3, pc}\n    ldr r0, [r1, #8]\n    ldr r1, _02223430 ; =ov13_02223114\n    bl WCM_StartupAsync\n    cmp r0, #3\n    beq _02223426\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _0222342C: .word ov13_0224DEE0\n    _02223430: .word ov13_02223114"
    );
    #endif
}

void ov13_02223434(void) {
    /* Original at 0x02223434 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #1\n    add r7, r1, #0\n    bl WCM_LockApList\n    bl WCM_CountApList\n    add r6, r0, #0\n    cmp r6, #0\n    ble _0222346C\n    mov r4, #0\n    cmp r6, #0\n    ble _0222346C\n    cmp r4, r7\n    bge _0222346C\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl WCM_PointApList\n    add r1, r5, #0\n    mov r2, #0xc0\n    bl MIi_CpuCopy32\n    add r4, r4, #1\n    add r5, #0xc0\n    cmp r4, r6\n    blt _02223450\n    mov r0, #0\n    bl WCM_LockApList\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_02223478(void) {
    /* Original at 0x02223478 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r3, [sp]\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl OS_DisableInterrupts\n    add r7, r0, #0\n    ldr r1, _02223554 ; =ov13_0224DEE0\n    ldr r0, [sp]\n    cmp r5, #0\n    str r0, [r1, #4]\n    beq _022234AC\n    ldr r2, _02223558 ; =ov13_0224DF08\n    mov r1, #0\n    ldrb r0, [r5]\n    add r1, r1, #1\n    add r5, r5, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    cmp r1, #6\n    blt _02223496\n    ldr r1, _02223558 ; =ov13_0224DF08\n    ldr r0, _02223554 ; =ov13_0224DEE0\n    str r1, [r0, #0x10]\n    b _022234BC\n    ldr r0, _02223558 ; =ov13_0224DF08\n    mov r1, #0xff\n    mov r2, #6\n    bl MI_CpuFill8\n    ldr r1, _0222355C ; =_02108FC0\n    ldr r0, _02223554 ; =ov13_0224DEE0\n    str r1, [r0, #0x10]\n    cmp r4, #0\n    beq _022234FA\n    cmp r6, #0\n    ble _022234FA\n    cmp r6, #0x20\n    bgt _022234FA\n    mov r0, #0\n    cmp r6, #0\n    ble _022234DE\n    ldr r2, _02223560 ; =ov13_0224DF10\n    ldrb r1, [r4]\n    add r0, r0, #1\n    add r4, r4, #1\n    strb r1, [r2]\n    add r2, r2, #1\n    cmp r0, r6\n    blt _022234D0\n    cmp r0, #0x20\n    bge _022234F2\n    ldr r1, _02223560 ; =ov13_0224DF10\n    add r2, r1, r0\n    mov r1, #0\n    add r0, r0, #1\n    strb r1, [r2]\n    add r2, r2, #1\n    cmp r0, #0x20\n    blt _022234E8\n    ldr r1, _02223560 ; =ov13_0224DF10\n    ldr r0, _02223554 ; =ov13_0224DEE0\n    str r1, [r0, #0x14]\n    b _0222350A\n    ldr r0, _02223560 ; =ov13_0224DF10\n    mov r1, #0xff\n    mov r2, #0x20\n    bl MI_CpuFill8\n    ldr r1, _02223564 ; =_02108FC8\n    ldr r0, _02223554 ; =ov13_0224DEE0\n    str r1, [r0, #0x14]\n    ldr r2, _02223554 ; =ov13_0224DEE0\n    ldr r0, [r2, #0x18]\n    cmp r0, #3\n    bne _02223530\n    ldr r0, [r2, #0x10]\n    ldr r1, [r2, #0x14]\n    ldr r2, [r2, #4]\n    bl WCM_SearchAsync\n    cmp r0, #3\n    bne _02223548\n    ldr r0, _02223554 ; =ov13_0224DEE0\n    mov r1, #6\n    str r1, [r0, #0x18]\n    add r0, r7, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov13_022233CC\n    cmp r0, #1\n    bne _02223548\n    ldr r0, _02223554 ; =ov13_0224DEE0\n    mov r1, #6\n    str r1, [r0, #0x18]\n    add r0, r7, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02223554: .word ov13_0224DEE0\n    _02223558: .word ov13_0224DF08\n    _0222355C: .word _02108FC0\n    _02223560: .word ov13_0224DF10\n    _02223564: .word _02108FC8"
    );
    #endif
}

void ov13_02223568(void) {
    /* Original at 0x02223568 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    ldr r0, _022235A0 ; =ov13_0224DEE0\n    ldr r0, [r0, #0x18]\n    cmp r0, #5\n    bne _02223596\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    bl WCM_SearchAsync\n    cmp r0, #3\n    bne _02223596\n    ldr r0, _022235A0 ; =ov13_0224DEE0\n    mov r1, #4\n    str r1, [r0, #0x18]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r4, pc}\n    _022235A0: .word ov13_0224DEE0"
    );
    #endif
}

void ov13_022235A4(void) {
    /* Original at 0x022235A4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    ldr r0, _022235D8 ; =ov13_0224DEE0\n    ldr r0, [r0, #0x18]\n    cmp r0, #7\n    bne _022235CC\n    bl WCM_DisconnectAsync\n    cmp r0, #3\n    bne _022235CC\n    ldr r0, _022235D8 ; =ov13_0224DEE0\n    mov r1, #4\n    str r1, [r0, #0x18]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _022235D8: .word ov13_0224DEE0"
    );
    #endif
}

void ov13_022235DC(void) {
    /* Original at 0x022235DC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    ldr r0, _02223630 ; =ov13_0224DEE0\n    ldr r0, [r0, #0x18]\n    cmp r0, #3\n    bne _0222360E\n    bl WCM_CleanupAsync\n    cmp r0, #3\n    beq _022235FE\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _02223630 ; =ov13_0224DEE0\n    mov r1, #2\n    str r1, [r0, #0x18]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r4, pc}\n    bl ov13_022233CC\n    cmp r0, #1\n    bne _02223626\n    ldr r0, _02223630 ; =ov13_0224DEE0\n    mov r1, #2\n    str r1, [r0, #0x18]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r4, pc}\n    _02223630: .word ov13_0224DEE0"
    );
    #endif
}

void ov13_02223634(void) {
    /* Original at 0x02223634 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    bl OS_DisableInterrupts\n    ldr r1, _022236B4 ; =ov13_0224DEE0\n    add r4, r0, #0\n    str r6, [r1, #0xc]\n    cmp r5, #0\n    beq _02223656\n    ldr r1, [r1, #0x24]\n    add r0, r5, #0\n    mov r2, #0x50\n    bl MI_CpuCopy8\n    b _02223660\n    ldr r0, [r1, #0x24]\n    mov r1, #0\n    mov r2, #0x50\n    bl MI_CpuFill8\n    ldr r1, _022236B4 ; =ov13_0224DEE0\n    add r0, r7, #0\n    ldr r1, [r1, #0x20]\n    mov r2, #0xc0\n    bl MIi_CpuCopy32\n    bl ov13_022233CC\n    cmp r0, #1\n    bne _02223684\n    ldr r0, _022236B4 ; =ov13_0224DEE0\n    mov r1, #8\n    str r1, [r0, #0x18]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _022236B4 ; =ov13_0224DEE0\n    ldr r0, [r2, #0x18]\n    cmp r0, #3\n    bne _022236AA\n    ldr r0, [r2, #0x20]\n    ldr r1, [r2, #0x24]\n    ldr r2, [r2, #0xc]\n    bl WCM_ConnectAsync\n    cmp r0, #3\n    bne _022236AA\n    ldr r0, _022236B4 ; =ov13_0224DEE0\n    mov r1, #8\n    str r1, [r0, #0x18]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _022236B4: .word ov13_0224DEE0"
    );
    #endif
}

void ov13_022236B8(void) {
    /* Original at 0x022236B8 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    str r2, [sp]\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    add r0, r5, #0\n    ldr r2, _02223764 ; =ov13_0224DEE0\n    add r0, #0x53\n    mov r1, #3\n    bic r0, r1\n    add r6, r0, #0\n    str r5, [r2, #0x24]\n    add r6, #0x2f\n    mov r1, #0x1f\n    ldr r3, _02223768 ; =0x0000231F\n    str r0, [r2, #8]\n    bic r6, r1\n    str r6, [r2]\n    add r6, r6, r3\n    bic r6, r1\n    str r6, [r2, #0x20]\n    add r6, #0xdf\n    bic r6, r1\n    str r6, [r0, #4]\n    ldr r1, [sp]\n    ldr r0, [r2, #8]\n    add r5, r5, r1\n    ldr r1, [r0, #4]\n    sub r1, r5, r1\n    str r1, [r0, #8]\n    ldr r0, [r2, #8]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    ldr r0, [r2, #8]\n    mov r1, #3\n    str r1, [r0]\n    str r7, [r2, #0x1c]\n    ldr r0, [r2, #0x18]\n    cmp r0, #0\n    bne _0222372A\n    sub r3, #0x1f\n    ldr r0, [r2]\n    add r1, r3, #0\n    bl WCM_Init\n    cmp r0, #0\n    beq _02223724\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02223764 ; =ov13_0224DEE0\n    mov r1, #1\n    str r1, [r0, #0x18]\n    ldr r0, _02223764 ; =ov13_0224DEE0\n    ldr r1, [r0, #0x18]\n    cmp r1, #1\n    bne _02223758\n    ldr r0, [r0, #8]\n    ldr r1, _0222376C ; =ov13_02223114\n    bl WCM_StartupAsync\n    cmp r0, #3\n    beq _02223748\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02223764 ; =ov13_0224DEE0\n    mov r1, #4\n    str r1, [r0, #0x18]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02223764: .word ov13_0224DEE0\n    _02223768: .word 0x0000231F\n    _0222376C: .word ov13_02223114"
    );
    #endif
}

void ov13_02223770(void) {
    /* Original at 0x02223770 */
    /* Requires manual decompilation - 370 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    bne _02223778\n    b _02223A72\n    mov r1, #0\n    ldrsh r2, [r0, r1]\n    cmp r2, #9\n    bls _02223782\n    b _02223A64\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0222378E: ; jump table\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _02223814\n    ldr r2, _02223A74 ; =ov13_0224DF30\n    ldr r0, [r2, #0x2c]\n    cmp r0, #4\n    bne _022237C4\n    mov r0, #3\n    str r0, [r2, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223858\n    mov r0, #6\n    blx r2\n    pop {r3, pc}\n    cmp r0, #6\n    bne _022237EC\n    ldr r0, [r2, #0x44]\n    ldr r1, [r2, #0x48]\n    ldr r2, [r2, #0x60]\n    bl WCM_SearchAsync\n    cmp r0, #3\n    beq _02223858\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r1, #3\n    str r1, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223858\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    cmp r0, #8\n    bne _02223858\n    ldr r0, [r2, #0x4c]\n    ldr r1, [r2, #0x28]\n    ldr r2, [r2, #0x58]\n    bl WCM_ConnectAsync\n    cmp r0, #3\n    beq _02223858\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r1, #3\n    str r1, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223858\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r3, #1\n    str r3, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r3, [r0]\n    cmp r3, #0\n    beq _02223858\n    add r0, r2, #0\n    blx r3\n    pop {r3, pc}\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _0222384A\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    ldr r2, [r0, #0x2c]\n    cmp r2, #6\n    bne _02223858\n    mov r2, #5\n    str r2, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223858\n    mov r0, #8\n    blx r2\n    pop {r3, pc}\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r2, #3\n    str r2, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    bne _0222385A\n    b _02223A72\n    mov r0, #9\n    blx r2\n    pop {r3, pc}\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _02223882\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    ldr r2, [r0, #0x2c]\n    cmp r2, #8\n    bne _0222395A\n    mov r2, #7\n    str r2, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _0222395A\n    mov r0, #0xc\n    blx r2\n    pop {r3, pc}\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r2, #3\n    str r2, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _0222395A\n    mov r0, #0xd\n    blx r2\n    pop {r3, pc}\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _0222392A\n    ldr r2, _02223A74 ; =ov13_0224DF30\n    ldr r0, [r2, #0x2c]\n    cmp r0, #4\n    bne _022238B8\n    mov r0, #3\n    str r0, [r2, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _0222395A\n    mov r0, #0xa\n    blx r2\n    pop {r3, pc}\n    cmp r0, #6\n    bne _022238E0\n    ldr r0, [r2, #0x44]\n    ldr r1, [r2, #0x48]\n    ldr r2, [r2, #0x60]\n    bl WCM_SearchAsync\n    cmp r0, #3\n    beq _0222395A\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r1, #3\n    str r1, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _0222395A\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    cmp r0, #2\n    bne _02223902\n    bl WCM_CleanupAsync\n    cmp r0, #3\n    beq _0222395A\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r1, #3\n    str r1, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _0222395A\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    cmp r0, #8\n    bne _0222395A\n    ldr r0, [r2, #0x4c]\n    ldr r1, [r2, #0x28]\n    ldr r2, [r2, #0x58]\n    bl WCM_ConnectAsync\n    cmp r0, #3\n    beq _0222395A\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r1, #3\n    str r1, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _0222395A\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r2, #3\n    str r2, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _0222395A\n    mov r0, #0xb\n    blx r2\n    pop {r3, pc}\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _022239DE\n    ldr r2, _02223A74 ; =ov13_0224DF30\n    ldr r0, [r2, #0x2c]\n    cmp r0, #4\n    bne _02223962\n    mov r0, #3\n    str r0, [r2, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    bne _0222395C\n    b _02223A72\n    mov r0, #0xe\n    blx r2\n    pop {r3, pc}\n    cmp r0, #6\n    bne _0222398A\n    ldr r0, [r2, #0x44]\n    ldr r1, [r2, #0x48]\n    ldr r2, [r2, #0x60]\n    bl WCM_SearchAsync\n    cmp r0, #3\n    beq _02223A72\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r1, #3\n    str r1, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223A72\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    cmp r0, #2\n    bne _022239AC\n    bl WCM_CleanupAsync\n    cmp r0, #3\n    beq _02223A72\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r1, #3\n    str r1, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223A72\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    cmp r0, #8\n    bne _022239D4\n    ldr r0, [r2, #0x4c]\n    ldr r1, [r2, #0x28]\n    ldr r2, [r2, #0x58]\n    bl WCM_ConnectAsync\n    cmp r0, #3\n    beq _02223A72\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r1, #3\n    str r1, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223A72\n    mov r0, #2\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    cmp r0, #7\n    bne _02223A72\n    mov r0, #3\n    str r0, [r2, #0x2c]\n    pop {r3, pc}\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r2, #3\n    str r2, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223A72\n    mov r0, #0xf\n    blx r2\n    pop {r3, pc}\n    mov r2, #2\n    ldrsh r0, [r0, r2]\n    cmp r0, #0\n    bne _02223A1A\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    ldr r0, [r0, #0x2c]\n    cmp r0, #2\n    bne _02223A72\n    bl WCM_Finish\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r1, #0\n    str r1, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223A72\n    mov r0, #0x14\n    blx r2\n    pop {r3, pc}\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    mov r3, #3\n    str r3, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r3, [r0]\n    cmp r3, #0\n    beq _02223A72\n    add r0, r2, #0\n    blx r3\n    pop {r3, pc}\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    ldr r0, [r0, #0x2c]\n    cmp r0, #5\n    bne _02223A72\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223A72\n    mov r0, #5\n    blx r2\n    pop {r3, pc}\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223A72\n    mov r0, #4\n    blx r2\n    pop {r3, pc}\n    ldr r0, _02223A74 ; =ov13_0224DF30\n    str r1, [r0, #0x2c]\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223A72\n    mov r0, #3\n    blx r2\n    pop {r3, pc}\n    ldr r0, _02223A78 ; =ov13_0224DFB0\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02223A72\n    mov r0, #1\n    mov r1, #0\n    blx r2\n    pop {r3, pc}\n    _02223A74: .word ov13_0224DF30\n    _02223A78: .word ov13_0224DFB0"
    );
    #endif
}

void ov13_02223A7C(void) {
    /* Original at 0x02223A7C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02223ADC ; =ov13_0224DF30\n    ldr r0, [r1, #0x2c]\n    cmp r0, #8\n    bhi _02223AD2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02223A92: ; jump table\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    bl WCM_SearchAsync\n    cmp r0, #3\n    beq _02223AD6\n    mov r0, #0\n    pop {r3, pc}\n    bl WCM_DisconnectAsync\n    cmp r0, #3\n    beq _02223AD6\n    mov r0, #0\n    pop {r3, pc}\n    ldr r0, [r1, #8]\n    ldr r1, _02223AE0 ; =ov13_02223770\n    bl WCM_StartupAsync\n    cmp r0, #3\n    beq _02223AD6\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _02223ADC: .word ov13_0224DF30\n    _02223AE0: .word ov13_02223770"
    );
    #endif
}

void ov13_02223AE4(void) {
    /* Original at 0x02223AE4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #1\n    add r7, r1, #0\n    bl WCM_LockApList\n    bl WCM_CountApList\n    add r6, r0, #0\n    cmp r6, #0\n    ble _02223B1C\n    mov r4, #0\n    cmp r6, #0\n    ble _02223B1C\n    cmp r4, r7\n    bge _02223B1C\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl WCM_PointApList\n    add r1, r5, #0\n    mov r2, #0xc0\n    bl MIi_CpuCopy32\n    add r4, r4, #1\n    add r5, #0xc0\n    cmp r4, r6\n    blt _02223B00\n    mov r0, #0\n    bl WCM_LockApList\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_02223B28(void) {
    /* Original at 0x02223B28 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r3, [sp]\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl OS_DisableInterrupts\n    add r7, r0, #0\n    ldr r1, _02223BFC ; =ov13_0224DF30\n    ldr r0, [sp]\n    cmp r5, #0\n    str r0, [r1, #0x60]\n    ldr r0, _02223C00 ; =ov13_0224E3E8\n    str r0, [r1, #0x44]\n    beq _02223B58\n    mov r2, #0\n    ldrb r1, [r5]\n    add r2, r2, #1\n    add r5, r5, #1\n    strb r1, [r0]\n    add r0, r0, #1\n    cmp r2, #6\n    blt _02223B48\n    b _02223B66\n    mov r1, #0xff\n    mov r2, #6\n    bl MI_CpuFill8\n    ldr r1, _02223C04 ; =_02108FC0\n    ldr r0, _02223BFC ; =ov13_0224DF30\n    str r1, [r0, #0x44]\n    ldr r2, _02223C08 ; =ov13_0224E420\n    ldr r0, _02223BFC ; =ov13_0224DF30\n    cmp r4, #0\n    str r2, [r0, #0x48]\n    beq _02223BA2\n    cmp r6, #0\n    ble _02223BA2\n    cmp r6, #0x20\n    bge _02223BA2\n    mov r0, #0\n    cmp r6, #0\n    ble _02223B8C\n    ldrb r1, [r4]\n    add r0, r0, #1\n    add r4, r4, #1\n    strb r1, [r2]\n    add r2, r2, #1\n    cmp r0, r6\n    blt _02223B7E\n    cmp r0, #0x20\n    bge _02223BB2\n    ldr r1, _02223C08 ; =ov13_0224E420\n    add r2, r1, r0\n    mov r1, #0\n    add r0, r0, #1\n    strb r1, [r2]\n    add r2, r2, #1\n    cmp r0, #0x20\n    blt _02223B96\n    b _02223BB2\n    ldr r0, _02223C08 ; =ov13_0224E420\n    mov r1, #0xff\n    mov r2, #0x20\n    bl MI_CpuFill8\n    ldr r1, _02223C0C ; =_02108FC8\n    ldr r0, _02223BFC ; =ov13_0224DF30\n    str r1, [r0, #0x48]\n    ldr r2, _02223BFC ; =ov13_0224DF30\n    ldr r0, [r2, #0x2c]\n    cmp r0, #3\n    bne _02223BD8\n    ldr r1, [r2, #0x48]\n    ldr r0, _02223C00 ; =ov13_0224E3E8\n    ldr r2, [r2, #0x60]\n    bl WCM_SearchAsync\n    cmp r0, #3\n    bne _02223BF0\n    ldr r0, _02223BFC ; =ov13_0224DF30\n    mov r1, #6\n    str r1, [r0, #0x2c]\n    add r0, r7, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov13_02223A7C\n    cmp r0, #1\n    bne _02223BF0\n    ldr r0, _02223BFC ; =ov13_0224DF30\n    mov r1, #6\n    str r1, [r0, #0x2c]\n    add r0, r7, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02223BFC: .word ov13_0224DF30\n    _02223C00: .word ov13_0224E3E8\n    _02223C04: .word _02108FC0\n    _02223C08: .word ov13_0224E420\n    _02223C0C: .word _02108FC8"
    );
    #endif
}

void ov13_02223C10(void) {
    /* Original at 0x02223C10 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    ldr r0, _02223C44 ; =ov13_0224DF30\n    ldr r0, [r0, #0x2c]\n    cmp r0, #7\n    bne _02223C38\n    bl WCM_DisconnectAsync\n    cmp r0, #3\n    bne _02223C38\n    ldr r0, _02223C44 ; =ov13_0224DF30\n    mov r1, #4\n    str r1, [r0, #0x2c]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02223C44: .word ov13_0224DF30"
    );
    #endif
}

void ov13_02223C48(void) {
    /* Original at 0x02223C48 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    ldr r0, _02223C9C ; =ov13_0224DF30\n    ldr r0, [r0, #0x2c]\n    cmp r0, #3\n    bne _02223C7A\n    bl WCM_CleanupAsync\n    cmp r0, #3\n    beq _02223C6A\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _02223C9C ; =ov13_0224DF30\n    mov r1, #2\n    str r1, [r0, #0x2c]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r4, pc}\n    bl ov13_02223A7C\n    cmp r0, #1\n    bne _02223C92\n    ldr r0, _02223C9C ; =ov13_0224DF30\n    mov r1, #2\n    str r1, [r0, #0x2c]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r4, pc}\n    _02223C9C: .word ov13_0224DF30"
    );
    #endif
}

void ov13_02223CA0(void) {
    /* Original at 0x02223CA0 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    bl OS_DisableInterrupts\n    ldr r1, _02223D20 ; =ov13_0224DF30\n    add r4, r0, #0\n    str r6, [r1, #0x58]\n    cmp r5, #0\n    beq _02223CC2\n    ldr r1, [r1, #0x28]\n    add r0, r5, #0\n    mov r2, #0x60\n    bl MI_CpuCopy8\n    b _02223CCC\n    ldr r0, [r1, #0x28]\n    mov r1, #0\n    mov r2, #0x60\n    bl MI_CpuFill8\n    ldr r1, _02223D20 ; =ov13_0224DF30\n    add r0, r7, #0\n    ldr r1, [r1, #0x4c]\n    mov r2, #0xc0\n    bl MIi_CpuCopy32\n    bl ov13_02223A7C\n    cmp r0, #1\n    bne _02223CF0\n    ldr r0, _02223D20 ; =ov13_0224DF30\n    mov r1, #8\n    str r1, [r0, #0x2c]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _02223D20 ; =ov13_0224DF30\n    ldr r0, [r2, #0x2c]\n    cmp r0, #3\n    bne _02223D16\n    ldr r0, [r2, #0x4c]\n    ldr r1, [r2, #0x28]\n    ldr r2, [r2, #0x58]\n    bl WCM_ConnectAsync\n    cmp r0, #3\n    bne _02223D16\n    ldr r0, _02223D20 ; =ov13_0224DF30\n    mov r1, #8\n    str r1, [r0, #0x2c]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02223D20: .word ov13_0224DF30"
    );
    #endif
}

void ov13_02223D24(void) {
    /* Original at 0x02223D24 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    str r2, [sp]\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    add r0, r5, #0\n    ldr r2, _02223DD0 ; =ov13_0224DF30\n    add r0, #0x63\n    mov r1, #3\n    bic r0, r1\n    add r6, r0, #0\n    str r5, [r2, #0x28]\n    add r6, #0x2f\n    mov r1, #0x1f\n    ldr r3, _02223DD4 ; =0x0000231F\n    str r0, [r2, #8]\n    bic r6, r1\n    str r6, [r2, #0x3c]\n    add r6, r6, r3\n    bic r6, r1\n    str r6, [r2, #0x4c]\n    add r6, #0xdf\n    bic r6, r1\n    str r6, [r0, #4]\n    ldr r1, [sp]\n    ldr r0, [r2, #8]\n    add r5, r5, r1\n    ldr r1, [r0, #4]\n    sub r1, r5, r1\n    str r1, [r0, #8]\n    ldr r0, [r2, #8]\n    mov r1, #0\n    str r1, [r0, #0xc]\n    ldr r0, [r2, #8]\n    mov r1, #3\n    str r1, [r0]\n    ldr r0, _02223DD8 ; =ov13_0224DFB0\n    str r7, [r0]\n    ldr r0, [r2, #0x2c]\n    cmp r0, #0\n    bne _02223D98\n    sub r3, #0x1f\n    ldr r0, [r2, #0x3c]\n    add r1, r3, #0\n    bl WCM_Init\n    cmp r0, #0\n    beq _02223D92\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02223DD0 ; =ov13_0224DF30\n    mov r1, #1\n    str r1, [r0, #0x2c]\n    ldr r0, _02223DD0 ; =ov13_0224DF30\n    ldr r1, [r0, #0x2c]\n    cmp r1, #1\n    bne _02223DC6\n    ldr r0, [r0, #8]\n    ldr r1, _02223DDC ; =ov13_02223770\n    bl WCM_StartupAsync\n    cmp r0, #3\n    beq _02223DB6\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02223DD0 ; =ov13_0224DF30\n    mov r1, #4\n    str r1, [r0, #0x2c]\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02223DD0: .word ov13_0224DF30\n    _02223DD4: .word 0x0000231F\n    _02223DD8: .word ov13_0224DFB0\n    _02223DDC: .word ov13_02223770"
    );
    #endif
}

void ov13_02223DE0(void) {
    /* Original at 0x02223DE0 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02223DE8 ; =ov13_0224DF30\n    ldr r0, [r0, #0x2c]\n    bx lr\n    nop\n    _02223DE8: .word ov13_0224DF30"
    );
    #endif
}

void ov13_02223DEC(void) {
    /* Original at 0x02223DEC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    cmp r4, #0\n    ble _02223E0E\n    ldr r0, _02223E14 ; =ov13_0224DFC4\n    bl OS_LockMutex\n    ldr r1, _02223E18 ; =ov13_0224DF30\n    add r0, r4, #0\n    ldr r1, [r1, #4]\n    blx r1\n    add r4, r0, #0\n    ldr r0, _02223E14 ; =ov13_0224DFC4\n    bl OS_UnlockMutex\n    add r0, r4, #0\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02223E14: .word ov13_0224DFC4\n    _02223E18: .word ov13_0224DF30"
    );
    #endif
}

void ov13_02223E1C(void) {
    /* Original at 0x02223E1C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    beq _02223E3A\n    cmp r2, #0\n    ble _02223E3A\n    ldr r0, _02223E3C ; =ov13_0224DFC4\n    bl OS_LockMutex\n    ldr r1, _02223E40 ; =ov13_0224DF30\n    add r0, r4, #0\n    ldr r1, [r1, #0xc]\n    blx r1\n    ldr r0, _02223E3C ; =ov13_0224DFC4\n    bl OS_UnlockMutex\n    pop {r4, pc}\n    _02223E3C: .word ov13_0224DFC4\n    _02223E40: .word ov13_0224DF30"
    );
    #endif
}

void ov13_02223E44(void) {
    /* Original at 0x02223E44 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl OS_DisableInterrupts\n    ldr r1, _02223E64 ; =ov13_0224DF30\n    mov r2, #0\n    str r2, [r1, #0x68]\n    str r2, [r1, #0x6c]\n    ldr r3, _02223E68 ; =ov13_0224DFB4\n    add r1, r2, #0\n    add r2, r2, #1\n    stmia r3!, {r1}\n    cmp r2, #4\n    blt _02223E56\n    bl OS_RestoreInterrupts\n    pop {r3, pc}\n    _02223E64: .word ov13_0224DF30\n    _02223E68: .word ov13_0224DFB4"
    );
    #endif
}

void ov13_02223E6C(void) {
    /* Original at 0x02223E6C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl OS_DisableInterrupts\n    ldr r1, _02223E9C ; =ov13_0224DF30\n    ldr r5, [r1, #0x6c]\n    ldr r2, [r1, #0x68]\n    cmp r2, r5\n    bne _02223E80\n    mov r4, #0\n    b _02223E92\n    ldr r2, _02223EA0 ; =ov13_0224DFB4\n    lsl r3, r5, #2\n    ldr r4, [r2, r3]\n    add r2, r5, #1\n    str r2, [r1, #0x6c]\n    cmp r2, #4\n    blt _02223E92\n    mov r2, #0\n    str r2, [r1, #0x6c]\n    bl OS_RestoreInterrupts\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02223E9C: .word ov13_0224DF30\n    _02223EA0: .word ov13_0224DFB4"
    );
    #endif
}

void ov13_02223EA4(void) {
    /* Original at 0x02223EA4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r1, _02223ECC ; =ov13_0224DF30\n    ldr r3, [r1, #0x68]\n    ldr r2, [r1, #0x6c]\n    add r4, r3, #1\n    cmp r4, r2\n    beq _02223EC8\n    add r2, r2, #3\n    cmp r3, r2\n    beq _02223EC8\n    ldr r2, _02223ED0 ; =ov13_0224DFB4\n    lsl r3, r3, #2\n    str r0, [r2, r3]\n    str r4, [r1, #0x68]\n    cmp r4, #4\n    blt _02223EC8\n    mov r0, #0\n    str r0, [r1, #0x68]\n    pop {r3, r4}\n    bx lr\n    _02223ECC: .word ov13_0224DF30\n    _02223ED0: .word ov13_0224DFB4"
    );
    #endif
}

void ov13_02223ED4(void) {
    ov13_02223EA4();
}

void ov13_02223EE0(void) {
    /* Original at 0x02223EE0 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _02223F74 ; =ov13_0224DF30\n    mov r4, #1\n    str r6, [r0, #0x70]\n    bl ov13_02223E44\n    mov r0, #0xd0\n    add r7, r6, #0\n    mul r7, r0\n    ldr r0, _02223F78 ; =0x000024D0\n    add r1, r7, r0\n    mov r0, #0xc0\n    mul r0, r6\n    add r0, r1, r0\n    ldr r1, _02223F74 ; =ov13_0224DF30\n    ldr r1, [r1, #4]\n    blx r1\n    ldr r6, _02223F74 ; =ov13_0224DF30\n    cmp r0, #0\n    str r0, [r6, #0x54]\n    bne _02223F10\n    sub r0, r4, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r1, #0x1f\n    add r2, r0, r1\n    add r0, r1, #0\n    sub r0, #0x3f\n    add r3, r2, #0\n    and r3, r0\n    ldr r0, _02223F7C ; =0x00002490\n    str r3, [r6, #0x40]\n    add r2, r7, r0\n    add r0, r3, r2\n    add r0, r0, r1\n    sub r1, #0x3f\n    and r0, r1\n    str r0, [r6, #0x5c]\n    ldr r0, _02223F80 ; =ov13_02223EA4\n    add r1, r3, #0\n    bl ov13_02223D24\n    cmp r0, #0\n    bne _02223F3C\n    sub r0, r4, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r6, #0\n    add r7, r4, #0\n    mov r0, #0xa\n    bl OS_Sleep\n    bl ov13_02223E6C\n    cmp r0, #0\n    beq _02223F6C\n    cmp r0, #4\n    beq _02223F64\n    cmp r0, #5\n    beq _02223F64\n    cmp r0, #6\n    bne _02223F60\n    add r4, r6, #0\n    add r5, r7, #0\n    b _02223F64\n    mov r4, #0\n    sub r5, r4, #2\n    bl ov13_02223E6C\n    cmp r0, #0\n    bne _02223F4E\n    cmp r4, #0\n    bne _02223F40\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02223F74: .word ov13_0224DF30\n    _02223F78: .word 0x000024D0\n    _02223F7C: .word 0x00002490\n    _02223F80: .word ov13_02223EA4"
    );
    #endif
}

void ov13_02223F84(void) {
    /* Original at 0x02223F84 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r5, #1\n    bl ov13_02223C48\n    cmp r0, #0\n    beq _02223FC2\n    mov r6, #0\n    add r4, r6, #0\n    mov r7, #0xa\n    add r0, r7, #0\n    bl OS_Sleep\n    bl ov13_02223E6C\n    cmp r0, #0\n    beq _02223FBE\n    cmp r0, #4\n    beq _02223FB6\n    cmp r0, #5\n    beq _02223FB6\n    cmp r0, #0x14\n    bne _02223FB4\n    add r5, r4, #0\n    b _02223FB6\n    add r5, r6, #0\n    bl ov13_02223E6C\n    cmp r0, #0\n    bne _02223FA4\n    cmp r5, #0\n    bne _02223F96\n    ldr r1, _02223FD8 ; =ov13_0224DF30\n    ldr r0, [r1, #0x54]\n    cmp r0, #0\n    beq _02223FD4\n    ldr r1, [r1, #0xc]\n    blx r1\n    ldr r0, _02223FD8 ; =ov13_0224DF30\n    mov r1, #0\n    str r1, [r0, #0x54]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _02223FD8: .word ov13_0224DF30"
    );
    #endif
}

void ov13_02223FDC(void) {
    /* Original at 0x02223FDC */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    ldr r0, _022240EC ; =ov13_0224DF30\n    mov r4, #1\n    ldr r3, [r0, #0x5c]\n    ldr r0, [r0, #0x18]\n    mov r2, #0xc0\n    add r1, r0, #0\n    mul r1, r2\n    sub r5, r4, #3\n    add r6, r3, r1\n    bne _02223FFA\n    add sp, #0x30\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    mov r1, #0\n    lsl r2, r2, #0xa\n    bl ov13_02223CA0\n    cmp r0, #0\n    bne _0222400E\n    add sp, #0x30\n    sub r0, r4, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, sp, #4\n    bl OS_CreateAlarm\n    mov r0, #0x12\n    str r0, [sp]\n    ldr r1, _022240F0 ; =0x003FEC42\n    ldr r3, _022240F4 ; =ov13_02223ED4\n    add r0, sp, #4\n    mov r2, #0\n    bl OS_SetAlarm\n    mov r7, #0\n    bl ov13_02226CBC\n    ldr r1, _022240F8 ; =ov13_02245A58\n    ldr r1, [r1, #0xc]\n    cmp r0, r1\n    blo _02224038\n    mov r5, #2\n    mvn r5, r5\n    b _022240B8\n    ldr r0, _022240EC ; =ov13_0224DF30\n    ldr r0, [r0, #0x10]\n    cmp r0, #0\n    beq _02224046\n    mov r5, #7\n    mvn r5, r5\n    b _022240B8\n    mov r0, #0xa\n    bl OS_Sleep\n    bl ov13_02223E6C\n    cmp r0, #0\n    beq _022240B4\n    cmp r0, #0xc\n    bgt _0222406A\n    bge _0222407E\n    cmp r0, #5\n    bgt _022240AA\n    cmp r0, #4\n    blt _022240AA\n    beq _022240AC\n    cmp r0, #5\n    beq _022240AC\n    b _022240AA\n    cmp r0, #0x13\n    bgt _022240AA\n    cmp r0, #0xd\n    blt _022240AA\n    beq _02224084\n    cmp r0, #0x12\n    beq _022240AC\n    cmp r0, #0x13\n    beq _022240AC\n    b _022240AA\n    add r4, r7, #0\n    mov r5, #1\n    b _022240AC\n    ldr r0, _022240EC ; =ov13_0224DF30\n    ldr r0, [r0, #0x10]\n    cmp r0, #0\n    beq _02224094\n    mov r4, #0\n    add r5, r4, #0\n    sub r5, #8\n    b _022240AC\n    mov r2, #3\n    add r0, r6, #0\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl ov13_02223CA0\n    cmp r0, #0\n    bne _022240AC\n    add sp, #0x30\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    bl ov13_02223E6C\n    cmp r0, #0\n    bne _02224054\n    cmp r4, #0\n    bne _02224026\n    add r0, sp, #4\n    bl OS_CancelAlarm\n    bl ov13_02223E6C\n    cmp r0, #0\n    bne _022240BE\n    cmp r5, #0\n    ble _022240E6\n    ldr r0, _022240EC ; =ov13_0224DF30\n    mov r1, #1\n    str r1, [r0, #0x20]\n    ldr r0, _022240FC ; =ov13_02245A6C\n    bl SOC_Startup\n    cmp r0, #0\n    bge _022240E0\n    mov r5, #1\n    mvn r5, r5\n    b _022240E6\n    ldr r0, _022240EC ; =ov13_0224DF30\n    mov r1, #1\n    str r1, [r0, #0x24]\n    add r0, r5, #0\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _022240EC: .word ov13_0224DF30\n    _022240F0: .word 0x003FEC42\n    _022240F4: .word ov13_02223ED4\n    _022240F8: .word ov13_02245A58\n    _022240FC: .word ov13_02245A6C"
    );
    #endif
}

void ov13_02224100(void) {
    /* Original at 0x02224100 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _02224160 ; =ov13_0224DF30\n    mov r5, #1\n    ldr r0, [r0, #0x20]\n    cmp r0, #0\n    beq _0222414C\n    bl ov13_02223C10\n    cmp r0, #0\n    beq _02224146\n    mov r6, #0\n    add r4, r6, #0\n    mov r7, #0xa\n    add r0, r7, #0\n    bl OS_Sleep\n    bl ov13_02223E6C\n    cmp r0, #0\n    beq _02224142\n    cmp r0, #4\n    beq _0222413A\n    cmp r0, #5\n    beq _0222413A\n    cmp r0, #0xe\n    bne _02224138\n    add r5, r4, #0\n    b _0222413A\n    add r5, r6, #0\n    bl ov13_02223E6C\n    cmp r0, #0\n    bne _02224128\n    cmp r5, #0\n    bne _0222411A\n    ldr r0, _02224160 ; =ov13_0224DF30\n    mov r1, #0\n    str r1, [r0, #0x20]\n    ldr r0, _02224160 ; =ov13_0224DF30\n    ldr r1, [r0, #0x24]\n    cmp r1, #0\n    beq _0222415C\n    mov r1, #0\n    str r1, [r0, #0x24]\n    bl SOC_Cleanup\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02224160: .word ov13_0224DF30"
    );
    #endif
}

void ov13_02224164(void) {
    /* Original at 0x02224164 */
    /* Requires manual decompilation - 217 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x6c\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp]\n    str r1, [sp, #4]\n    add r6, r0, #4\n    add r0, r1, #0\n    add r4, r0, #4\n    ldr r0, [sp, #0x20]\n    str r2, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    ldr r0, [r0]\n    cmp r0, #0\n    bls _02224238\n    add r2, sp, #0x48\n    add r2, #2\n    mov r1, #0x22\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02224190\n    add r0, sp, #0x48\n    add r0, #2\n    add r1, r6, #4\n    mov r2, #0x20\n    bl memcpy\n    add r0, sp, #0x48\n    ldr r1, [r6]\n    mov r7, #0\n    add r0, #2\n    strb r7, [r0, r1]\n    ldr r0, [sp, #4]\n    ldr r0, [r0]\n    str r0, [sp, #0x10]\n    cmp r0, #0\n    bls _0222421C\n    add r0, r6, #0\n    str r0, [sp, #0x24]\n    add r0, #0x28\n    ldr r5, [r6]\n    str r0, [sp, #0x24]\n    cmp r5, #0\n    beq _0222421C\n    cmp r5, #0x20\n    bhi _0222421C\n    cmp r5, #1\n    bne _022241D8\n    ldrb r0, [r6, #4]\n    cmp r0, #0\n    beq _0222421C\n    cmp r0, #0x20\n    beq _0222421C\n    add r0, sp, #0x48\n    add r0, #2\n    bl strlen\n    add r2, r0, #0\n    add r0, sp, #0x48\n    add r0, #2\n    add r1, r4, #4\n    bl memcmp\n    cmp r0, #0\n    bne _02224212\n    add r1, r4, #0\n    ldr r0, [sp, #0x24]\n    add r1, #0x28\n    mov r2, #6\n    bl memcmp\n    cmp r0, #0\n    bne _02224212\n    ldrh r1, [r6, #0x2e]\n    ldrh r0, [r4, #0x2e]\n    cmp r1, r0\n    beq _02224212\n    cmp r1, #0\n    bne _02224212\n    mov r0, #1\n    str r0, [sp, #0x20]\n    b _0222421C\n    ldr r0, [sp, #0x10]\n    add r7, r7, #1\n    add r4, #0x30\n    cmp r7, r0\n    blo _022241C2\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    bne _02224238\n    ldr r0, [sp, #4]\n    add r6, #0x30\n    add r4, r0, #4\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    ldr r1, [r0]\n    ldr r0, [sp, #0xc]\n    cmp r0, r1\n    blo _02224188\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    bne _02224314\n    add r2, sp, #0x28\n    mov r1, #0x22\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02224244\n    mov r0, #0\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x14]\n    ldr r0, [sp]\n    ldr r6, [sp, #0x18]\n    add r4, r0, #4\n    ldr r0, [sp, #4]\n    add r5, r0, #4\n    ldr r0, [r0]\n    cmp r0, #0\n    bls _022242A0\n    add r7, sp, #0x28\n    add r0, r7, #0\n    add r1, r5, #4\n    mov r2, #0x20\n    bl memcpy\n    ldr r1, [r5]\n    mov r0, #0\n    strb r0, [r7, r1]\n    ldr r0, _0222432C ; =ov13_02245AC4\n    bl strlen\n    add r2, r0, #0\n    ldr r1, _0222432C ; =ov13_02245AC4\n    add r0, r7, #0\n    bl memcmp\n    cmp r0, #0\n    bne _02224294\n    ldrh r0, [r5, #0x2e]\n    cmp r0, #0\n    bne _02224294\n    mov r0, #1\n    str r0, [sp, #0x14]\n    b _022242A0\n    ldr r0, [sp, #4]\n    add r6, r6, #1\n    ldr r0, [r0]\n    add r5, #0x30\n    cmp r6, r0\n    blo _02224264\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    ldr r0, [r0]\n    cmp r0, #0\n    bls _02224304\n    ldr r7, _0222432C ; =ov13_02245AC4\n    add r5, sp, #0x28\n    add r0, r5, #0\n    add r1, r4, #4\n    mov r2, #0x20\n    bl memcpy\n    ldr r1, [r4]\n    mov r0, #0\n    strb r0, [r5, r1]\n    add r0, r5, #0\n    bl strlen\n    add r6, r0, #0\n    add r0, r7, #0\n    bl strlen\n    cmp r6, r0\n    bne _022242F2\n    add r0, r7, #0\n    bl strlen\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl memcmp\n    cmp r0, #0\n    bne _022242F2\n    ldrh r0, [r4, #0x2e]\n    cmp r0, #0\n    bne _022242F2\n    mov r0, #1\n    str r0, [sp, #0x18]\n    b _02224304\n    ldr r0, [sp, #0xc]\n    add r4, #0x30\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, [sp]\n    ldr r1, [r0]\n    ldr r0, [sp, #0xc]\n    cmp r0, r1\n    blo _022242B0\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    beq _02224314\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    bne _02224314\n    mov r0, #1\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    beq _02224324\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp, #8]\n    str r1, [r0]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x1c]\n    add sp, #0x6c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222432C: .word ov13_02245AC4"
    );
    #endif
}

void ov13_02224330(void) {
    /* Original at 0x02224330 */
    /* Requires manual decompilation - 280 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x70\n    mov r0, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0x20]\n    ldr r0, _022245A8 ; =ov13_0224DF30\n    mov r4, #0\n    ldr r1, [r0, #0x70]\n    mov r0, #0x30\n    mul r0, r1\n    str r0, [sp, #0x10]\n    add r0, #0x34\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x10]\n    mov r0, #1\n    mvn r4, r4\n    bl ov13_02226CD8\n    str r0, [sp, #0xc]\n    cmp r0, #0\n    beq _02224368\n    ldr r1, [sp, #0x10]\n    mov r0, #1\n    bl ov13_02226CD8\n    str r0, [sp, #8]\n    cmp r0, #0\n    bne _0222436A\n    b _0222458E\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    b _02224556\n    bl ov13_02226CBC\n    ldr r1, _022245AC ; =ov13_02245A58\n    ldr r1, [r1, #0xc]\n    cmp r0, r1\n    bhs _0222445A\n    mov r0, #0\n    ldr r3, _022245B0 ; =0x0030BFFE\n    add r1, r0, #0\n    add r2, r0, #0\n    bl ov13_02223B28\n    cmp r0, #0\n    bne _02224392\n    mov r4, #1\n    mvn r4, r4\n    b _0222458E\n    add r0, sp, #0x24\n    bl OS_CreateAlarm\n    mov r0, #0x13\n    str r0, [sp]\n    ldr r1, _022245B4 ; =0x000FFB10\n    ldr r3, _022245B8 ; =ov13_02223ED4\n    add r0, sp, #0x24\n    mov r2, #0\n    bl OS_SetAlarm\n    ldr r7, _022245A8 ; =ov13_0224DF30\n    mov r5, #1\n    mov r4, #0\n    add r6, sp, #0x24\n    mov r0, #0xa\n    bl OS_Sleep\n    bl ov13_02226CBC\n    ldr r1, _022245AC ; =ov13_02245A58\n    ldr r1, [r1, #0xc]\n    cmp r0, r1\n    bhs _02224444\n    ldr r0, [r7, #0x10]\n    cmp r0, #0\n    bne _02224444\n    bl ov13_02223E6C\n    cmp r0, #0\n    beq _02224440\n    cmp r0, #0x13\n    bhi _02224436\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022243E0: ; jump table\n    mov r5, #0\n    b _02224438\n    ldr r0, [r7, #0x5c]\n    ldr r1, [r7, #0x70]\n    bl ov13_02223AE4\n    cmp r0, r4\n    ble _02224438\n    add r4, r0, #0\n    add r0, r6, #0\n    bl OS_CancelAlarm\n    mov r0, #0x13\n    str r0, [sp]\n    ldr r1, _022245B4 ; =0x000FFB10\n    ldr r3, _022245B8 ; =ov13_02223ED4\n    add r0, r6, #0\n    mov r2, #0\n    bl OS_SetAlarm\n    b _02224438\n    mov r5, #0\n    b _02224438\n    mov r5, #0\n    bl ov13_02223E6C\n    cmp r0, #0\n    bne _022243D0\n    cmp r5, #0\n    bne _022243B0\n    add r0, sp, #0x24\n    bl OS_CancelAlarm\n    bl ov13_02223E6C\n    cmp r0, #0\n    bne _0222444A\n    ldr r1, _022245A8 ; =ov13_0224DF30\n    ldr r0, [r1, #0x10]\n    cmp r0, #0\n    beq _0222445C\n    b _02224566\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r1, #0x70]\n    cmp r4, r0\n    blt _0222446C\n    ldr r0, [sp, #0x14]\n    sub r4, r0, #6\n    b _0222458E\n    ldr r0, [sp, #0x14]\n    ldr r5, [r1, #0x5c]\n    str r0, [sp, #0x18]\n    cmp r4, #0\n    ble _022244E2\n    ble _022244E2\n    ldr r0, [sp, #0xc]\n    ldr r7, [sp, #0xc]\n    str r0, [sp, #4]\n    add r0, #8\n    add r6, r7, #0\n    str r0, [sp, #4]\n    add r6, #0x2c\n    add r1, r5, #0\n    ldr r0, [sp, #4]\n    add r1, #0xc\n    mov r2, #0x20\n    bl memcpy\n    ldrh r0, [r5, #0xa]\n    str r0, [r7, #4]\n    ldrh r0, [r5, #0xa]\n    add r1, r7, r0\n    mov r0, #0\n    strb r0, [r1, #8]\n    ldrh r1, [r5, #0x2c]\n    mov r0, #0x10\n    tst r0, r1\n    beq _022244AA\n    mov r0, #1\n    b _022244AC\n    mov r0, #0\n    strh r0, [r7, #0x32]\n    ldrb r0, [r5, #4]\n    add r7, #0x30\n    strb r0, [r6]\n    ldrb r0, [r5, #5]\n    strb r0, [r6, #1]\n    ldrb r0, [r5, #6]\n    strb r0, [r6, #2]\n    ldrb r0, [r5, #7]\n    strb r0, [r6, #3]\n    ldrb r0, [r5, #8]\n    strb r0, [r6, #4]\n    ldrb r0, [r5, #9]\n    add r5, #0xc0\n    strb r0, [r6, #5]\n    ldr r0, [sp, #4]\n    add r6, #0x30\n    add r0, #0x30\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, r4\n    blt _02224486\n    ldr r0, [sp, #0xc]\n    str r4, [r0]\n    ldr r0, _022245A8 ; =ov13_0224DF30\n    ldr r0, [r0, #0x38]\n    cmp r0, #1\n    beq _0222453C\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #8]\n    add r2, sp, #0x20\n    bl ov13_02224164\n    cmp r0, #0\n    beq _0222453C\n    ldr r0, [sp, #0xc]\n    ldr r2, [sp, #0x20]\n    add r1, r0, #4\n    mov r0, #0x30\n    mul r0, r2\n    add r4, r1, r0\n    ldr r0, _022245A8 ; =ov13_0224DF30\n    add r1, r4, #4\n    str r2, [r0, #0x18]\n    ldr r0, _022245BC ; =ov13_0224E440\n    bl strcpy\n    add r0, r4, #0\n    add r4, #0x28\n    ldrb r2, [r4]\n    ldr r1, _022245C0 ; =ov13_0224E3E0\n    add r0, #0x28\n    strb r2, [r1]\n    ldrb r2, [r0, #1]\n    strb r2, [r1, #1]\n    ldrb r2, [r0, #2]\n    strb r2, [r1, #2]\n    ldrb r2, [r0, #3]\n    strb r2, [r1, #3]\n    ldrb r2, [r0, #4]\n    strb r2, [r1, #4]\n    ldrb r0, [r0, #5]\n    strb r0, [r1, #5]\n    add r0, sp, #0x50\n    bl ov13_02226D40\n    b _02224566\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x10]\n    bl memcpy\n    ldr r0, _022245A8 ; =ov13_0224DF30\n    mov r1, #2\n    str r1, [r0, #0x38]\n    bl ov13_02226F3C\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0x1e\n    bge _02224566\n    ldr r0, _022245A8 ; =ov13_0224DF30\n    ldr r0, [r0, #0x10]\n    cmp r0, #0\n    bne _02224566\n    b _02224370\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0x1e\n    bge _02224578\n    bl ov13_02226CBC\n    ldr r1, _022245AC ; =ov13_02245A58\n    ldr r1, [r1, #0xc]\n    cmp r0, r1\n    bls _0222457E\n    mov r4, #2\n    mvn r4, r4\n    b _0222458E\n    ldr r0, _022245A8 ; =ov13_0224DF30\n    ldr r0, [r0, #0x10]\n    cmp r0, #0\n    beq _0222458C\n    mov r4, #7\n    mvn r4, r4\n    b _0222458E\n    mov r4, #1\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    beq _02224598\n    bl ov13_02226CFC\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    beq _022245A2\n    bl ov13_02226CFC\n    add r0, r4, #0\n    add sp, #0x70\n    pop {r3, r4, r5, r6, r7, pc}\n    _022245A8: .word ov13_0224DF30\n    _022245AC: .word ov13_02245A58\n    _022245B0: .word 0x0030BFFE\n    _022245B4: .word 0x000FFB10\n    _022245B8: .word ov13_02223ED4\n    _022245BC: .word ov13_0224E440\n    _022245C0: .word ov13_0224E3E0"
    );
    #endif
}

void ov13_022245C4(void) {
    SOC_SendTo(3, 0);
}

void ov13_022245DC(void) {
    /* Original at 0x022245DC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r1, #8\n    add r0, sp, #4\n    strb r1, [r0, #4]\n    mov r1, #2\n    strb r1, [r0, #5]\n    sub r1, r1, #3\n    str r1, [sp, #0xc]\n    ldr r1, _02224614 ; =0x000001E6\n    add r4, r2, #0\n    strh r1, [r0, #6]\n    bl SOCL_GetHostID\n    add r1, sp, #4\n    bl SOC_U32to4U8\n    add r0, r5, #0\n    add r1, sp, #8\n    add r2, sp, #4\n    add r3, r6, #0\n    str r4, [sp]\n    bl ov13_022245C4\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _02224614: .word 0x000001E6"
    );
    #endif
}

void ov13_02224618(void) {
    ov13_022245DC();
}

void ov13_02224624(void) {
    /* Original at 0x02224624 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldrh r5, [r0]\n    mov r3, #0\n    asr r4, r5, #8\n    lsl r4, r4, #0x18\n    lsr r6, r4, #0x18\n    lsl r4, r5, #8\n    mov r5, #0xff\n    lsl r5, r5, #8\n    and r4, r5\n    orr r4, r6\n    lsl r4, r4, #0x10\n    lsr r4, r4, #0x10\n    str r4, [r1]\n    ldrh r6, [r0, #2]\n    asr r1, r6, #8\n    lsl r1, r1, #0x18\n    lsr r4, r1, #0x18\n    lsl r1, r6, #8\n    and r1, r5\n    orr r1, r4\n    lsl r1, r1, #0x10\n    lsr r4, r1, #0x10\n    add r1, r0, #6\n    str r4, [r2]\n    add r2, r1, r4\n    add r4, r0, #0\n    cmp r0, r2\n    bhs _02224668\n    ldrb r1, [r4]\n    add r4, r4, #1\n    add r3, r3, r1\n    cmp r4, r2\n    blo _0222465E\n    ldrh r5, [r2]\n    lsl r1, r3, #0x10\n    lsr r1, r1, #0x10\n    asr r2, r5, #8\n    lsl r2, r2, #0x18\n    lsr r4, r2, #0x18\n    mov r2, #0xff\n    lsl r3, r5, #8\n    lsl r2, r2, #8\n    and r2, r3\n    orr r2, r4\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    cmp r1, r2\n    beq _0222468C\n    mov r0, #0\n    pop {r3, r4, r5, r6}\n    bx lr\n    add r0, r0, #6\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov13_02224694(void) {
    /* Original at 0x02224694 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, r1\n    blo _022246A4\n    mov r0, #0\n    pop {r3, r4, r5, r6}\n    bx lr\n    ldrh r5, [r0]\n    asr r1, r5, #8\n    lsl r1, r1, #0x18\n    lsr r6, r1, #0x18\n    lsl r1, r5, #8\n    mov r5, #0xff\n    lsl r5, r5, #8\n    and r1, r5\n    orr r1, r6\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    str r1, [r2]\n    ldrh r6, [r0, #2]\n    add r0, r0, #4\n    asr r1, r6, #8\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    lsl r1, r6, #8\n    and r1, r5\n    orr r1, r2\n    lsl r1, r1, #0x10\n    lsr r2, r1, #0x10\n    str r2, [r3]\n    add r2, #0xb\n    mov r1, #7\n    bic r2, r1\n    sub r1, r2, #4\n    add r1, r0, r1\n    str r1, [r4]\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov13_022246E4(void) {
    /* Original at 0x022246E4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r5, #8\n    str r5, [sp]\n    add r3, r2, #0\n    ldrh r2, [r0]\n    add r4, r1, #0\n    add r0, sp, #0\n    asr r1, r2, #8\n    lsl r6, r2, #8\n    mov r2, #0xff\n    lsl r1, r1, #0x18\n    lsl r2, r2, #8\n    lsr r1, r1, #0x18\n    and r2, r6\n    orr r1, r2\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    add r1, r5, r1\n    add r2, r4, #0\n    bl ov13_02224694\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov13_02224718(void) {
    /* Original at 0x02224718 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r3, #0\n    add r6, r0, #0\n    add r0, r7, #0\n    sub r0, #8\n    str r1, [sp, #4]\n    lsl r0, r0, #0x10\n    add r1, r2, #0\n    mov r5, #0\n    strb r5, [r1]\n    lsr r0, r0, #0x10\n    strb r5, [r1, #1]\n    asr r2, r0, #8\n    strb r5, [r1, #2]\n    lsl r2, r2, #0x18\n    strb r5, [r1, #3]\n    lsr r3, r2, #0x18\n    lsl r2, r0, #8\n    mov r0, #0xff\n    strb r5, [r1, #4]\n    lsl r0, r0, #8\n    strb r5, [r1, #5]\n    and r0, r2\n    strb r5, [r1, #6]\n    orr r0, r3\n    strb r5, [r1, #7]\n    ldr r3, [sp, #0x20]\n    add r4, r6, #0\n    strh r0, [r1]\n    cmp r3, #0\n    beq _02224768\n    mov r0, #0x10\n    str r0, [sp]\n    add r0, r6, #6\n    add r2, r7, #0\n    bl ov13_02225358\n    add r7, #8\n    b _02224770\n    add r0, r6, #6\n    add r2, r7, #0\n    bl memcpy\n    mov r0, #0\n    strb r0, [r6]\n    strb r0, [r6, #1]\n    strb r0, [r6, #2]\n    strb r0, [r6, #3]\n    strb r0, [r6, #4]\n    strb r0, [r6, #5]\n    ldr r0, [sp, #4]\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    asr r0, r1, #8\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r1, r0\n    orr r1, r2\n    strh r1, [r6]\n    lsl r1, r7, #0x10\n    lsr r2, r1, #0x10\n    asr r1, r2, #8\n    lsl r1, r1, #0x18\n    lsl r2, r2, #8\n    lsr r1, r1, #0x18\n    and r0, r2\n    orr r0, r1\n    strh r0, [r6, #2]\n    add r0, r4, #6\n    add r4, r0, r7\n    add r1, r6, #0\n    cmp r6, r4\n    bhs _022247BC\n    ldrb r0, [r1]\n    add r1, r1, #1\n    add r5, r5, r0\n    cmp r1, r4\n    blo _022247B2\n    lsl r0, r5, #0x10\n    lsr r1, r0, #0x10\n    asr r0, r1, #8\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r0, r1\n    orr r0, r2\n    strh r0, [r4]\n    add r0, r4, #2\n    sub r0, r0, r6\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_022247DC(void) {
    /* Original at 0x022247DC */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    lsl r0, r1, #0x10\n    add r4, r3, #0\n    mov r3, #0\n    lsr r0, r0, #0x10\n    add r7, r2, #0\n    strb r3, [r5]\n    asr r1, r0, #8\n    lsl r2, r0, #8\n    mov r0, #0xff\n    strb r3, [r5, #1]\n    lsl r1, r1, #0x18\n    lsl r0, r0, #8\n    strb r3, [r5, #2]\n    lsr r1, r1, #0x18\n    and r2, r0\n    orr r1, r2\n    strb r3, [r5, #3]\n    add r2, r4, #0\n    strh r1, [r5]\n    add r2, #0xb\n    mov r1, #7\n    bic r2, r1\n    lsl r1, r4, #0x10\n    sub r6, r2, #4\n    lsr r2, r1, #0x10\n    asr r1, r2, #8\n    lsl r1, r1, #0x18\n    lsl r2, r2, #8\n    and r0, r2\n    lsr r1, r1, #0x18\n    orr r0, r1\n    strh r0, [r5, #2]\n    add r5, r5, #4\n    add r0, r5, #0\n    add r1, r3, #0\n    add r2, r6, #0\n    bl memset\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl memcpy\n    add r0, r5, r6\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_0222483C(void) {
    /* Original at 0x0222483C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0\n    strb r0, [r4]\n    strb r0, [r4, #1]\n    strb r0, [r4, #2]\n    strb r0, [r4, #3]\n    strb r0, [r4, #4]\n    strb r0, [r4, #5]\n    strb r0, [r4, #6]\n    strb r0, [r4, #7]\n    add r0, r4, #0\n    add r0, #8\n    bl ov13_022247DC\n    sub r0, r0, r4\n    add r1, r0, #0\n    sub r1, #8\n    strh r1, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov13_02224864(void) {
    /* Original at 0x02224864 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r1, [sp]\n    add r1, sp, #0x18\n    add r2, sp, #0x14\n    bl ov13_02224624\n    mov r6, #0\n    add r5, r0, #0\n    add r7, r6, #0\n    str r5, [sp, #8]\n    str r6, [sp, #4]\n    cmp r5, #0\n    bne _02224886\n    add sp, #0x1c\n    add r0, r6, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x18]\n    cmp r0, #1\n    beq _02224892\n    add sp, #0x1c\n    add r0, r6, #0\n    pop {r4, r5, r6, r7, pc}\n    ldr r4, [sp, #0x14]\n    add r0, r5, #0\n    add r0, #8\n    str r0, [sp, #8]\n    add r0, sp, #8\n    add r1, r5, r4\n    add r2, sp, #0x10\n    add r3, sp, #0xc\n    bl ov13_02224694\n    cmp r0, #0\n    beq _02224912\n    ldr r1, [sp, #0x10]\n    cmp r1, #1\n    beq _022248BA\n    cmp r1, #2\n    beq _022248D2\n    cmp r1, #5\n    beq _022248EC\n    b _02224902\n    ldrh r1, [r0]\n    asr r0, r1, #8\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r0, r1\n    orr r0, r2\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    b _02224902\n    ldrh r1, [r0]\n    asr r0, r1, #8\n    lsl r2, r1, #8\n    mov r1, #0xff\n    lsl r0, r0, #0x18\n    lsl r1, r1, #8\n    lsr r0, r0, #0x18\n    and r1, r2\n    orr r0, r1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    b _02224902\n    ldrh r1, [r0]\n    asr r0, r1, #8\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r0, r1\n    orr r0, r2\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    add r0, sp, #8\n    add r1, r5, r4\n    add r2, sp, #0x10\n    add r3, sp, #0xc\n    bl ov13_02224694\n    cmp r0, #0\n    bne _022248AA\n    cmp r6, #1\n    bne _0222491C\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    beq _02224922\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    cmp r7, #1\n    blt _0222492C\n    mov r1, #1\n    ldr r0, [sp]\n    b _02224930\n    ldr r0, [sp]\n    mov r1, #0\n    str r1, [r0]\n    mov r0, #1\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_02224938(void) {
    /* Original at 0x02224938 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r6, r2, #0\n    add r1, sp, #8\n    add r2, sp, #4\n    add r4, r3, #0\n    bl ov13_02224624\n    add r1, r0, #0\n    bne _02224954\n    add sp, #0xc\n    mov r0, #0\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, [sp, #8]\n    cmp r0, r5\n    beq _02224960\n    add sp, #0xc\n    mov r0, #0\n    pop {r3, r4, r5, r6, pc}\n    cmp r4, #0\n    beq _0222497A\n    mov r0, #0x10\n    str r0, [sp]\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    add r3, r4, #0\n    bl ov13_02225510\n    ldr r0, [sp, #4]\n    sub r0, #8\n    str r0, [sp, #4]\n    b _02224982\n    ldr r2, [sp, #4]\n    add r0, r6, #0\n    bl memcpy\n    ldr r0, [sp, #4]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov13_02224988(void) {
    /* Original at 0x02224988 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    mov r1, #1\n    add r4, r0, #0\n    add r2, sp, #4\n    lsl r1, r1, #8\n    add r0, sp, #4\n    strh r1, [r0]\n    ldr r3, _02224A10 ; =ov13_02242680\n    add r2, #2\n    mov r1, #7\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0222499E\n    ldr r0, _02224A14 ; =ov13_02245A58\n    mov r1, #1\n    ldr r0, [r0]\n    add r2, sp, #4\n    mov r3, #2\n    bl ov13_022247DC\n    mov r1, #2\n    add r2, sp, #4\n    add r3, r1, #0\n    bl ov13_022247DC\n    ldr r1, _02224A18 ; =ov13_0224DF30\n    ldr r1, [r1, #0x50]\n    cmp r1, #0\n    beq _022249D4\n    mov r1, #5\n    add r2, sp, #4\n    mov r3, #2\n    bl ov13_022247DC\n    add r2, sp, #4\n    mov r1, #3\n    add r2, #2\n    mov r3, #7\n    bl ov13_022247DC\n    ldr r1, _02224A18 ; =ov13_0224DF30\n    add r3, r0, #0\n    ldr r1, [r1, #0x50]\n    cmp r1, #0\n    beq _022249F6\n    ldr r2, _02224A1C ; =ov13_0224E3D8\n    mov r1, #4\n    mov r3, #6\n    bl ov13_022247DC\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    add r0, r4, #0\n    ldr r4, _02224A14 ; =ov13_02245A58\n    ldr r2, _02224A20 ; =ov13_0224E464\n    ldr r4, [r4]\n    mov r1, #2\n    sub r3, r3, r4\n    add r3, #8\n    bl ov13_02224718\n    add sp, #0x10\n    pop {r4, pc}\n    _02224A10: .word ov13_02242680\n    _02224A14: .word ov13_02245A58\n    _02224A18: .word ov13_0224DF30\n    _02224A1C: .word ov13_0224E3D8\n    _02224A20: .word ov13_0224E464"
    );
    #endif
}

void ov13_02224A24(void) {
    OS_GetMacAddress();
}

void ov13_02224A30(void) {
    /* Original at 0x02224A30 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x4c\n    ldr r1, _02224B1C ; =ov13_02245B18\n    add r4, r0, #0\n    ldrb r0, [r1]\n    add r2, r4, #0\n    add r2, #0xc\n    strb r0, [r4, #0xc]\n    ldrb r0, [r1, #1]\n    strb r0, [r2, #1]\n    ldrb r0, [r1, #2]\n    strb r0, [r2, #2]\n    ldrb r0, [r1, #3]\n    add r1, sp, #4\n    add r1, #2\n    strb r0, [r2, #3]\n    ldr r0, _02224B20 ; =ov13_0224E3E0\n    ldrb r2, [r0]\n    strb r2, [r1]\n    ldrb r2, [r0, #1]\n    strb r2, [r1, #1]\n    ldrb r2, [r0, #2]\n    strb r2, [r1, #2]\n    ldrb r2, [r0, #3]\n    strb r2, [r1, #3]\n    ldrb r2, [r0, #4]\n    ldrb r0, [r0, #5]\n    strb r2, [r1, #4]\n    strb r0, [r1, #5]\n    add r1, sp, #0\n    ldrb r2, [r1, #6]\n    mov r0, #0xfd\n    and r0, r2\n    strb r0, [r1, #6]\n    add r0, sp, #0\n    bl ov13_02224A24\n    add r1, sp, #0\n    ldrb r2, [r1]\n    ldr r0, _02224B24 ; =ov13_0224E3D8\n    strb r2, [r0]\n    ldrb r2, [r1, #1]\n    strb r2, [r0, #1]\n    ldrb r2, [r1, #2]\n    strb r2, [r0, #2]\n    ldrb r2, [r1, #3]\n    strb r2, [r0, #3]\n    ldrb r2, [r1, #4]\n    strb r2, [r0, #4]\n    ldrb r2, [r1, #5]\n    strb r2, [r0, #5]\n    add r0, sp, #4\n    add r0, #2\n    mov r2, #6\n    bl memcmp\n    cmp r0, #0\n    bgt _02224AC4\n    add r1, sp, #0\n    ldrb r0, [r1]\n    strb r0, [r4]\n    ldrb r0, [r1, #1]\n    strb r0, [r4, #1]\n    ldrb r0, [r1, #2]\n    strb r0, [r4, #2]\n    ldrb r0, [r1, #3]\n    strb r0, [r4, #3]\n    ldrb r0, [r1, #4]\n    strb r0, [r4, #4]\n    ldrb r0, [r1, #5]\n    add r1, sp, #4\n    add r1, #2\n    strb r0, [r4, #5]\n    b _02224AE2\n    add r1, sp, #4\n    add r1, #2\n    ldrb r0, [r1]\n    strb r0, [r4]\n    ldrb r0, [r1, #1]\n    strb r0, [r4, #1]\n    ldrb r0, [r1, #2]\n    strb r0, [r4, #2]\n    ldrb r0, [r1, #3]\n    strb r0, [r4, #3]\n    ldrb r0, [r1, #4]\n    strb r0, [r4, #4]\n    ldrb r0, [r1, #5]\n    add r1, sp, #0\n    strb r0, [r4, #5]\n    ldrb r0, [r1]\n    strb r0, [r4, #6]\n    ldrb r0, [r1, #1]\n    strb r0, [r4, #7]\n    ldrb r0, [r1, #2]\n    strb r0, [r4, #8]\n    ldrb r0, [r1, #3]\n    strb r0, [r4, #9]\n    ldrb r0, [r1, #4]\n    strb r0, [r4, #0xa]\n    ldrb r0, [r1, #5]\n    strb r0, [r4, #0xb]\n    ldr r0, _02224B28 ; =ov13_02245A58\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _02224B14\n    add r0, sp, #0x2c\n    add r1, sp, #0\n    bl ov13_02226D40\n    add r1, sp, #4\n    add r0, sp, #0xc\n    add r1, #2\n    bl ov13_02226D40\n    mov r0, #1\n    add sp, #0x4c\n    pop {r3, r4, pc}\n    nop\n    _02224B1C: .word ov13_02245B18\n    _02224B20: .word ov13_0224E3E0\n    _02224B24: .word ov13_0224E3D8\n    _02224B28: .word ov13_02245A58"
    );
    #endif
}

void ov13_02224B2C(void) {
    /* Original at 0x02224B2C */
    /* Requires manual decompilation - 211 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r1, r0, #0\n    str r1, [sp, #4]\n    add r1, #8\n    str r1, [sp, #4]\n    str r1, [sp, #0x14]\n    mov r1, #0\n    str r1, [sp]\n    ldrh r1, [r0]\n    add r3, sp, #0xc\n    asr r0, r1, #8\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r0, r1\n    orr r0, r2\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    ldr r2, [sp, #4]\n    ldr r1, [sp, #8]\n    add r0, sp, #0x14\n    add r1, r2, r1\n    add r2, sp, #0x10\n    bl ov13_02224694\n    add r5, r0, #0\n    bne _02224B6C\n    b _02224CDC\n    ldr r2, [sp, #0x10]\n    ldr r0, _02224CE4 ; =0x00000201\n    sub r1, r2, r0\n    cmp r1, #9\n    bhi _02224BFA\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02224B82: ; jump table\n    ldr r3, _02224CE8 ; =ov13_0224E284\n    mov r0, #0\n    add r2, r3, #0\n    add r1, r0, #0\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r2, [sp, #0xc]\n    add r0, r3, #0\n    add r1, r5, #0\n    bl memcpy\n    mov r0, #1\n    str r0, [sp]\n    b _02224CC6\n    ldrh r1, [r5]\n    asr r0, r1, #8\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r0, r1\n    orr r0, r2\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldr r0, _02224CEC ; =ov13_0224E2B0\n    str r1, [r0]\n    b _02224CC6\n    ldrh r3, [r5]\n    ldr r1, _02224CF0 ; =ov13_0224E184\n    mov r0, #0\n    asr r2, r3, #8\n    lsl r2, r2, #0x18\n    lsr r4, r2, #0x18\n    mov r2, #0xff\n    lsl r3, r3, #8\n    lsl r2, r2, #8\n    and r2, r3\n    orr r2, r4\n    lsl r2, r2, #0x10\n    lsr r3, r2, #0x10\n    mov r2, #0x57\n    lsl r2, r2, #2\n    add r0, r0, #1\n    str r3, [r1, r2]\n    add r1, #0x28\n    cmp r0, #4\n    blt _02224BF0\n    b _02224CC6\n    ldrh r3, [r5]\n    ldr r0, _02224CF0 ; =ov13_0224E184\n    mov r1, #0\n    asr r2, r3, #8\n    lsl r2, r2, #0x18\n    lsr r4, r2, #0x18\n    mov r2, #0xff\n    lsl r3, r3, #8\n    lsl r2, r2, #8\n    and r2, r3\n    orr r2, r4\n    lsl r2, r2, #0x10\n    lsr r3, r2, #0x10\n    mov r2, #0x16\n    lsl r2, r2, #4\n    add r1, r1, #1\n    str r3, [r0, r2]\n    add r0, #0x28\n    cmp r1, #4\n    blt _02224C1A\n    b _02224CC6\n    ldrh r1, [r5]\n    asr r0, r1, #8\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r0, r1\n    orr r0, r2\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldr r0, _02224CEC ; =ov13_0224E2B0\n    str r1, [r0, #4]\n    b _02224CC6\n    add r0, r0, #5\n    sub r2, r2, r0\n    mov r0, #0x28\n    mul r0, r2\n    ldr r1, _02224CF4 ; =ov13_0224E2E8\n    mov r2, #0x20\n    add r0, r1, r0\n    mov r1, #0\n    bl memset\n    ldr r0, _02224CEC ; =ov13_0224E2B0\n    ldr r1, _02224CF8 ; =0x00000206\n    ldr r0, [r0, #0x30]\n    cmp r0, #1\n    bne _02224C8C\n    ldr r2, [sp, #0x10]\n    ldr r0, _02224CF4 ; =ov13_0224E2E8\n    sub r2, r2, r1\n    mov r1, #0x28\n    mul r1, r2\n    add r4, r0, r1\n    ldr r0, [sp, #0xc]\n    mov r6, #0\n    cmp r0, #0\n    ble _02224CC6\n    add r7, r6, #0\n    ldrsb r1, [r5, r7]\n    add r0, r4, #0\n    add r5, r5, #1\n    bl ov13_02226D0C\n    add r4, r4, r0\n    ldr r0, [sp, #0xc]\n    add r6, r6, #1\n    cmp r6, r0\n    blt _02224C76\n    b _02224CC6\n    ldr r2, [sp, #0x10]\n    ldr r0, _02224CF4 ; =ov13_0224E2E8\n    sub r2, r2, r1\n    mov r1, #0x28\n    mul r1, r2\n    add r0, r0, r1\n    ldr r2, [sp, #0xc]\n    add r1, r5, #0\n    bl memcpy\n    b _02224CC6\n    ldr r3, _02224CFC ; =ov13_0224E380\n    mov r0, #0\n    add r2, r3, #0\n    add r1, r0, #0\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r2, [sp, #0xc]\n    add r0, r3, #0\n    add r1, r5, #0\n    bl memcpy\n    ldr r2, [sp, #4]\n    ldr r1, [sp, #8]\n    add r0, sp, #0x14\n    add r1, r2, r1\n    add r2, sp, #0x10\n    add r3, sp, #0xc\n    bl ov13_02224694\n    add r5, r0, #0\n    beq _02224CDC\n    b _02224B6C\n    ldr r0, [sp]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02224CE4: .word 0x00000201\n    _02224CE8: .word ov13_0224E284\n    _02224CEC: .word ov13_0224E2B0\n    _02224CF0: .word ov13_0224E184\n    _02224CF4: .word ov13_0224E2E8\n    _02224CF8: .word 0x00000206\n    _02224CFC: .word ov13_0224E380"
    );
    #endif
}

void ov13_02224D00(void) {
    /* Original at 0x02224D00 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r4, r2, #0\n    mov r2, #0\n    add r5, r1, #0\n    add r3, r2, #0\n    cmp r4, #0\n    ble _02224DAE\n    mov r7, #0x1f\n    ldrsb r1, [r5, r3]\n    cmp r1, #0x63\n    bgt _02224D66\n    bge _02224D7E\n    cmp r1, #0x61\n    bgt _02224D60\n    bge _02224D7E\n    add r6, r1, #0\n    sub r6, #0x30\n    cmp r6, #0x16\n    bhi _02224D8A\n    add r6, r6, r6\n    add r6, pc\n    ldrh r6, [r6, #6]\n    lsl r6, r6, #0x10\n    asr r6, r6, #0x10\n    add pc, r6\n    _02224D32: ; jump table\n    cmp r1, #0x62\n    beq _02224D7E\n    b _02224D8A\n    cmp r1, #0x65\n    bgt _02224D72\n    bge _02224D7E\n    cmp r1, #0x64\n    beq _02224D7E\n    b _02224D8A\n    cmp r1, #0x66\n    beq _02224D7E\n    b _02224D8A\n    sub r1, #0x30\n    add r2, r2, r1\n    b _02224D90\n    sub r1, #0x57\n    add r2, r2, r1\n    b _02224D90\n    sub r1, #0x37\n    add r2, r2, r1\n    b _02224D90\n    mov r0, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    lsr r6, r3, #0x1f\n    lsl r1, r3, #0x1f\n    sub r1, r1, r6\n    ror r1, r7\n    add r1, r6, r1\n    bne _02224DA0\n    lsl r2, r2, #4\n    b _02224DA8\n    add r6, r3, r6\n    asr r1, r6, #1\n    strb r2, [r0, r1]\n    mov r2, #0\n    add r3, r3, #1\n    cmp r3, r4\n    blt _02224D10\n    mov r0, #1\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov13_02224DB4(void) {
    /* Original at 0x02224DB4 */
    /* Requires manual decompilation - 179 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _02224F1C ; =ov13_0224E09C\n    ldr r1, _02224F20 ; =ov13_0224E284\n    bl strcpy\n    ldr r1, _02224F24 ; =ov13_0224E2B0\n    ldr r0, [r1]\n    cmp r0, #3\n    bls _02224DCE\n    b _02224F0E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02224DDA: ; jump table\n    ldr r0, _02224F28 ; =ov13_0224E0B0\n    mov r1, #0\n    str r1, [r0, #0xc]\n    b _02224F14\n    ldr r1, [r1, #4]\n    cmp r1, #0\n    bne _02224DF8\n    mov r0, #6\n    mvn r0, r0\n    str r0, [sp]\n    b _02224F14\n    ldr r0, _02224F28 ; =ov13_0224E0B0\n    ldr r6, _02224F2C ; =ov13_0224E2E8\n    ldr r5, _02224F30 ; =ov13_0224E0C4\n    str r1, [r0, #0x10]\n    mov r7, #0\n    add r4, sp, #4\n    add r0, sp, #4\n    add r1, r6, #0\n    mov r2, #0x20\n    bl memcpy\n    mov r1, #0\n    add r0, sp, #0x24\n    strb r1, [r0]\n    add r0, sp, #4\n    bl strlen\n    cmp r0, #0x10\n    bhi _02224E3C\n    cmp r0, #0xa\n    blo _02224E2E\n    beq _02224E66\n    cmp r0, #0xd\n    beq _02224E78\n    cmp r0, #0x10\n    beq _02224EA4\n    b _02224ED0\n    cmp r0, #0\n    bhi _02224E36\n    beq _02224ED6\n    b _02224ED0\n    cmp r0, #5\n    beq _02224E4A\n    b _02224ED0\n    cmp r0, #0x1a\n    bhi _02224E44\n    beq _02224E92\n    b _02224ED0\n    cmp r0, #0x20\n    beq _02224EBE\n    b _02224ED0\n    ldr r0, _02224F28 ; =ov13_0224E0B0\n    mov r1, #1\n    str r1, [r0, #0xc]\n    ldrb r0, [r4]\n    strb r0, [r5]\n    ldrb r0, [r4, #1]\n    strb r0, [r5, #1]\n    ldrb r0, [r4, #2]\n    strb r0, [r5, #2]\n    ldrb r0, [r4, #3]\n    strb r0, [r5, #3]\n    ldrb r0, [r4, #4]\n    strb r0, [r5, #4]\n    b _02224ED6\n    ldr r0, _02224F28 ; =ov13_0224E0B0\n    mov r1, #1\n    str r1, [r0, #0xc]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0xa\n    bl ov13_02224D00\n    b _02224ED6\n    ldr r0, _02224F28 ; =ov13_0224E0B0\n    mov r1, #2\n    str r1, [r0, #0xc]\n    add r3, r4, #0\n    add r2, r5, #0\n    mov r1, #0xd\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02224E84\n    b _02224ED6\n    ldr r0, _02224F28 ; =ov13_0224E0B0\n    mov r1, #2\n    str r1, [r0, #0xc]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x1a\n    bl ov13_02224D00\n    b _02224ED6\n    ldr r0, _02224F28 ; =ov13_0224E0B0\n    mov r1, #3\n    str r1, [r0, #0xc]\n    add r3, r4, #0\n    add r2, r5, #0\n    mov r1, #0x10\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02224EB0\n    b _02224ED6\n    ldr r0, _02224F28 ; =ov13_0224E0B0\n    mov r1, #3\n    str r1, [r0, #0xc]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x20\n    bl ov13_02224D00\n    b _02224ED6\n    mov r0, #6\n    mvn r0, r0\n    str r0, [sp]\n    add r7, r7, #1\n    add r6, #0x28\n    add r5, #0x20\n    cmp r7, #4\n    blt _02224E04\n    b _02224F14\n    ldr r0, _02224F28 ; =ov13_0224E0B0\n    mov r1, #4\n    ldr r4, _02224F34 ; =ov13_0224E144\n    ldr r3, _02224F38 ; =ov13_0224E380\n    str r1, [r0, #0xc]\n    mov r2, #8\n    ldmia r3!, {r0, r1}\n    stmia r4!, {r0, r1}\n    sub r2, r2, #1\n    bne _02224EEE\n    b _02224F14\n    ldr r0, _02224F28 ; =ov13_0224E0B0\n    mov r1, #5\n    ldr r4, _02224F34 ; =ov13_0224E144\n    ldr r3, _02224F38 ; =ov13_0224E380\n    str r1, [r0, #0xc]\n    mov r2, #8\n    ldmia r3!, {r0, r1}\n    stmia r4!, {r0, r1}\n    sub r2, r2, #1\n    bne _02224F04\n    b _02224F14\n    mov r0, #6\n    mvn r0, r0\n    str r0, [sp]\n    ldr r0, [sp]\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02224F1C: .word ov13_0224E09C\n    _02224F20: .word ov13_0224E284\n    _02224F24: .word ov13_0224E2B0\n    _02224F28: .word ov13_0224E0B0\n    _02224F2C: .word ov13_0224E2E8\n    _02224F30: .word ov13_0224E0C4\n    _02224F34: .word ov13_0224E144\n    _02224F38: .word ov13_0224E380"
    );
    #endif
}

void ov13_02224F3C(void) {
    /* Original at 0x02224F3C */
    /* Requires manual decompilation - 428 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    mov r4, #0\n    sub r0, r4, #5\n    str r0, [sp, #8]\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #1\n    str r4, [sp, #0xc]\n    str r4, [sp, #4]\n    add r6, r4, #0\n    str r1, [r0, #0x1c]\n    b _022252EE\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    bl OS_Sleep\n    ldr r0, _02225284 ; =ov13_0224DF30\n    ldr r0, [r0, #0x1c]\n    cmp r0, #0xa\n    bls _02224F66\n    b _022252EE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02224F72: ; jump table\n    bl ov13_02224330\n    str r0, [sp, #8]\n    cmp r0, #1\n    beq _02224F96\n    mov r6, #1\n    b _022252EE\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #3\n    str r1, [r0, #0x38]\n    bl ov13_02226F3C\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #2\n    str r1, [r0, #0x1c]\n    b _022252EE\n    bl ov13_02223FDC\n    str r0, [sp, #8]\n    cmp r0, #1\n    beq _02224FB6\n    mov r6, #1\n    b _022252EE\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #3\n    str r1, [r0, #0x1c]\n    b _022252EE\n    mov r0, #2\n    add r1, r0, #0\n    mov r2, #0\n    bl SOC_Socket\n    add r4, r0, #0\n    bpl _02224FD6\n    mov r0, #1\n    mvn r0, r0\n    str r0, [sp, #8]\n    mov r6, #1\n    b _022252EE\n    add r5, sp, #0x24\n    mov r1, #0\n    str r1, [r5]\n    str r1, [r5, #4]\n    mov r3, #8\n    add r2, sp, #0x10\n    strb r3, [r2, #0x14]\n    mov r3, #2\n    strb r3, [r2, #0x15]\n    ldr r3, _02225288 ; =0x000001E6\n    strh r3, [r2, #0x16]\n    str r1, [sp, #0x28]\n    add r1, r5, #0\n    bl SOC_Bind\n    str r0, [sp, #8]\n    cmp r0, #0\n    bge _02225004\n    mov r0, #1\n    mvn r0, r0\n    str r0, [sp, #8]\n    mov r6, #1\n    b _022252EE\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #4\n    str r1, [r0, #0x1c]\n    b _022252EE\n    bl ov13_02226CBC\n    ldr r1, _0222528C ; =ov13_02245A58\n    ldr r1, [r1, #0xc]\n    cmp r0, r1\n    blo _02225028\n    add r0, r4, #0\n    bl SOC_Close\n    mov r0, #2\n    mvn r0, r0\n    str r0, [sp, #8]\n    mov r6, #1\n    b _022252EE\n    mov r1, #8\n    add r0, sp, #0x10\n    strb r1, [r0, #0xc]\n    ldr r0, _02225290 ; =ov13_0224E3F0\n    add r1, sp, #0x1c\n    bl ov13_02224A30\n    add r0, sp, #0x1c\n    mov r2, #2\n    str r0, [sp]\n    ldr r1, _02225294 ; =ov13_0224EC64\n    add r0, r4, #0\n    lsl r2, r2, #0xa\n    mov r3, #4\n    bl SOC_RecvFrom\n    cmp r0, #0\n    ble _02225126\n    ldr r0, _02225294 ; =ov13_0224EC64\n    ldr r1, _02225298 ; =ov13_0224DF80\n    bl ov13_02224864\n    cmp r0, #0\n    beq _02225126\n    bl ov13_02226CBC\n    ldr r1, _0222529C ; =0x00007530\n    add r1, r0, r1\n    ldr r0, _0222528C ; =ov13_02245A58\n    str r1, [r0, #0xc]\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #5\n    str r1, [r0, #0x1c]\n    mov r1, #4\n    str r1, [r0, #0x38]\n    bl ov13_02226F3C\n    b _022252EE\n    ldr r0, _02225294 ; =ov13_0224EC64\n    bl ov13_02224988\n    add r3, r0, #0\n    ldr r0, _02225284 ; =ov13_0224DF30\n    ldr r2, _02225294 ; =ov13_0224EC64\n    str r3, [r0, #0x14]\n    add r0, r4, #0\n    add r1, sp, #0x1c\n    bl ov13_02224618\n    bl ov13_02226CBC\n    str r0, [sp, #0xc]\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #6\n    str r1, [r0, #0x1c]\n    b _022252EE\n    bl ov13_02226CBC\n    ldr r1, _0222528C ; =ov13_02245A58\n    ldr r1, [r1, #0xc]\n    cmp r0, r1\n    blo _022250B4\n    add r0, r4, #0\n    bl SOC_Close\n    mov r0, #3\n    mvn r0, r0\n    str r0, [sp, #8]\n    mov r6, #1\n    b _022252EE\n    add r0, sp, #0x1c\n    mov r2, #2\n    str r0, [sp]\n    ldr r1, _02225294 ; =ov13_0224EC64\n    add r0, r4, #0\n    lsl r2, r2, #0xa\n    mov r3, #4\n    bl SOC_RecvFrom\n    cmp r0, #0\n    ble _02225128\n    ldr r0, _02225294 ; =ov13_0224EC64\n    ldr r2, _022252A0 ; =ov13_0224E464\n    ldr r3, _02225290 ; =ov13_0224E3F0\n    mov r1, #3\n    bl ov13_02224938\n    cmp r0, #0\n    beq _02225128\n    ldr r0, _022252A0 ; =ov13_0224E464\n    add r1, sp, #0x18\n    add r2, sp, #0x14\n    bl ov13_022246E4\n    add r5, r0, #0\n    ldr r1, [sp, #0x18]\n    ldr r0, _022252A4 ; =0x00000101\n    cmp r1, r0\n    bne _02225126\n    bl ov13_02226CBC\n    ldr r2, _022252A8 ; =ov13_0224E400\n    str r0, [sp, #0x10]\n    mov r1, #8\n    ldrb r0, [r5]\n    add r5, r5, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _022250F8\n    ldr r0, _022252AC ; =ov13_0224E408\n    add r1, sp, #0x10\n    mov r2, #4\n    bl ov13_02226C94\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #7\n    str r1, [r0, #0x1c]\n    mov r1, #5\n    str r1, [r0, #0x38]\n    ldr r0, _0222528C ; =ov13_02245A58\n    sub r1, r1, #6\n    str r1, [r0, #0xc]\n    bl ov13_02226F3C\n    b _022252EE\n    bl ov13_02226CBC\n    mov r2, #0xfa\n    ldr r1, [sp, #0xc]\n    lsl r2, r2, #2\n    add r1, r1, r2\n    cmp r0, r1\n    bhs _0222513A\n    b _022252EE\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #5\n    str r1, [r0, #0x1c]\n    b _022252EE\n    ldr r0, _022252A0 ; =ov13_0224E464\n    ldr r1, _022252B0 ; =0x00000102\n    ldr r2, _022252AC ; =ov13_0224E408\n    mov r3, #8\n    bl ov13_0222483C\n    ldr r3, _02225284 ; =ov13_0224DF30\n    ldr r2, _022252A0 ; =ov13_0224E464\n    str r0, [r3, #0x34]\n    ldr r0, _02225290 ; =ov13_0224E3F0\n    mov r1, #4\n    str r0, [sp]\n    ldr r0, _02225294 ; =ov13_0224EC64\n    ldr r3, [r3, #0x34]\n    bl ov13_02224718\n    add r3, r0, #0\n    ldr r0, _02225284 ; =ov13_0224DF30\n    ldr r2, _02225294 ; =ov13_0224EC64\n    str r3, [r0, #0x14]\n    add r0, r4, #0\n    add r1, sp, #0x1c\n    bl ov13_02224618\n    bl ov13_02226CBC\n    str r0, [sp, #0xc]\n    mov r0, #0\n    mov r5, #0x12\n    ldr r7, _022252B4 ; =ov13_0224E184\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    mov ip, r5\n    stmia r7!, {r0, r1, r2, r3}\n    mov r5, ip\n    sub r5, r5, #1\n    stmia r7!, {r0, r1, r2, r3}\n    mov ip, r5\n    bne _02225186\n    stmia r7!, {r0, r1, r2, r3}\n    str r0, [r7]\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #8\n    str r1, [r0, #0x1c]\n    b _022252EE\n    add r0, sp, #0x1c\n    mov r2, #2\n    str r0, [sp]\n    ldr r1, _02225294 ; =ov13_0224EC64\n    add r0, r4, #0\n    lsl r2, r2, #0xa\n    mov r3, #4\n    bl SOC_RecvFrom\n    cmp r0, #0\n    ble _022251F4\n    ldr r0, _02225294 ; =ov13_0224EC64\n    ldr r2, _022252A0 ; =ov13_0224E464\n    ldr r3, _022252A8 ; =ov13_0224E400\n    mov r1, #5\n    bl ov13_02224938\n    ldr r1, _02225284 ; =ov13_0224DF30\n    cmp r0, #0\n    str r0, [r1, #0x34]\n    beq _022251F4\n    ldr r0, _022252A0 ; =ov13_0224E464\n    bl ov13_02224B2C\n    cmp r0, #0\n    beq _022251F4\n    ldr r1, _022252B8 ; =ov13_0224E270\n    mov r0, #0x14\n    ldrsb r0, [r1, r0]\n    cmp r0, #0\n    beq _022251E2\n    mov r1, #1\n    ldr r0, _02225284 ; =ov13_0224DF30\n    b _022251E6\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #0\n    strb r1, [r0]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #9\n    str r1, [r0, #0x1c]\n    b _022252EE\n    bl ov13_02226CBC\n    mov r2, #0xfa\n    ldr r1, [sp, #0xc]\n    lsl r2, r2, #2\n    add r1, r1, r2\n    cmp r0, r1\n    blo _022252EE\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #0xa\n    blt _0222521E\n    add r0, r4, #0\n    bl SOC_Close\n    mov r0, #1\n    mvn r0, r0\n    str r0, [sp, #8]\n    mov r6, #1\n    b _022252EE\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #7\n    str r1, [r0, #0x1c]\n    b _022252EE\n    ldr r0, _022252A0 ; =ov13_0224E464\n    ldr r1, _022252BC ; =0x00000301\n    ldr r2, _022252C0 ; =ov13_0224DF30\n    mov r3, #1\n    bl ov13_0222483C\n    ldr r3, _02225284 ; =ov13_0224DF30\n    ldr r2, _022252A0 ; =ov13_0224E464\n    str r0, [r3, #0x34]\n    ldr r0, _022252A8 ; =ov13_0224E400\n    mov r1, #6\n    str r0, [sp]\n    ldr r0, _02225294 ; =ov13_0224EC64\n    ldr r3, [r3, #0x34]\n    bl ov13_02224718\n    ldr r1, _02225284 ; =ov13_0224DF30\n    str r0, [r1, #0x14]\n    bl ov13_02223DE0\n    cmp r0, #7\n    beq _02225268\n    bl ov13_02226CBC\n    mov r1, #0xfa\n    lsl r1, r1, #2\n    add r0, r0, r1\n    str r0, [sp, #0xc]\n    mov r0, #0xa\n    ldr r1, _02225284 ; =ov13_0224DF30\n    str r0, [sp, #4]\n    str r0, [r1, #0x1c]\n    b _022252EE\n    ldr r3, _02225284 ; =ov13_0224DF30\n    ldr r2, _02225294 ; =ov13_0224EC64\n    ldr r3, [r3, #0x14]\n    add r0, r4, #0\n    add r1, sp, #0x1c\n    bl ov13_02224618\n    bl ov13_02226CBC\n    str r0, [sp, #0xc]\n    ldr r0, _02225284 ; =ov13_0224DF30\n    mov r1, #0xa\n    str r1, [r0, #0x1c]\n    b _022252EE\n    _02225284: .word ov13_0224DF30\n    _02225288: .word 0x000001E6\n    _0222528C: .word ov13_02245A58\n    _02225290: .word ov13_0224E3F0\n    _02225294: .word ov13_0224EC64\n    _02225298: .word ov13_0224DF80\n    _0222529C: .word 0x00007530\n    _022252A0: .word ov13_0224E464\n    _022252A4: .word 0x00000101\n    _022252A8: .word ov13_0224E400\n    _022252AC: .word ov13_0224E408\n    _022252B0: .word 0x00000102\n    _022252B4: .word ov13_0224E184\n    _022252B8: .word ov13_0224E270\n    _022252BC: .word 0x00000301\n    _022252C0: .word ov13_0224DF30\n    bl ov13_02226CBC\n    mov r2, #0xfa\n    ldr r1, [sp, #0xc]\n    lsl r2, r2, #2\n    add r1, r1, r2\n    cmp r0, r1\n    blo _022252EE\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    cmp r0, #0xa\n    blt _022252E8\n    mov r6, #1\n    bl ov13_02224DB4\n    str r0, [sp, #8]\n    b _022252EE\n    ldr r0, _0222531C ; =ov13_0224DF30\n    mov r1, #9\n    str r1, [r0, #0x1c]\n    cmp r6, #0\n    bne _022252FC\n    ldr r0, _0222531C ; =ov13_0224DF30\n    ldr r0, [r0, #0x10]\n    cmp r0, #0\n    bne _022252FC\n    b _02224F54\n    cmp r4, #0\n    beq _02225306\n    add r0, r4, #0\n    bl SOC_Close\n    ldr r0, _0222531C ; =ov13_0224DF30\n    ldr r0, [r0, #0x10]\n    cmp r0, #0\n    beq _02225314\n    mov r0, #7\n    mvn r0, r0\n    str r0, [sp, #8]\n    ldr r0, [sp, #8]\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0222531C: .word ov13_0224DF30"
    );
    #endif
}

void ov13_02225320(void) {
    /* Original at 0x02225320 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl ov13_02224F3C\n    add r4, r0, #0\n    ldr r0, _02225350 ; =ov13_0224DF30\n    str r4, [r0, #0x78]\n    bl ov13_02224100\n    cmp r4, #1\n    bne _0222533A\n    mov r1, #6\n    ldr r0, _02225350 ; =ov13_0224DF30\n    b _0222533E\n    ldr r0, _02225350 ; =ov13_0224DF30\n    mov r1, #7\n    str r1, [r0, #0x38]\n    mov r1, #0\n    ldr r0, _02225354 ; =ov13_02245A58\n    mvn r1, r1\n    str r1, [r0, #0xc]\n    bl ov13_02226F3C\n    pop {r4, pc}\n    nop\n    _02225350: .word ov13_0224DF30\n    _02225354: .word ov13_02245A58"
    );
    #endif
}

void ov13_02225358(void) {
    /* Original at 0x02225358 */
    /* Requires manual decompilation - 214 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x1a8\n    str r0, [sp]\n    ldr r0, _0222550C ; =0xA6A6A6A6\n    add r4, r2, #0\n    add r5, r1, #0\n    str r0, [sp, #0x48]\n    str r0, [sp, #0x4c]\n    mov r0, #7\n    add r1, r4, #0\n    tst r1, r0\n    bne _02225376\n    ldr r2, [sp, #0x1c0]\n    tst r0, r2\n    beq _0222537C\n    add sp, #0x1a8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    lsr r0, r4, #3\n    str r0, [sp, #0x14]\n    cmp r0, #2\n    bge _0222538A\n    add sp, #0x1a8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, sp, #0x68\n    add r1, r3, #0\n    lsl r2, r2, #3\n    bl ov13_02225710\n    str r0, [sp, #0x1c]\n    ldr r0, [sp]\n    add r1, r5, #0\n    add r0, #8\n    add r2, r4, #0\n    bl memcpy\n    add r3, sp, #0x58\n    add r2, sp, #0x48\n    mov r1, #8\n    ldrb r0, [r2]\n    add r2, r2, #1\n    strb r0, [r3]\n    add r3, r3, #1\n    sub r1, r1, #1\n    bne _022253A8\n    mov r0, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x14]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x14]\n    mov r4, #1\n    cmp r0, #1\n    bge _022253C8\n    b _022254E4\n    ldr r2, [sp, #0x20]\n    ldr r1, [sp, #0x18]\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r1, [sp, #8]\n    str r0, [sp, #0x28]\n    mov r0, #0\n    mov r1, #0\n    str r0, [sp, #0x30]\n    add r0, r1, #0\n    orr r0, r1\n    str r0, [sp, #0x40]\n    ldr r0, [sp]\n    lsl r1, r4, #3\n    add r5, r0, r1\n    add r3, r5, #0\n    add r2, sp, #0x60\n    mov r1, #8\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _022253F2\n    add r2, sp, #0x58\n    ldr r1, [sp, #0x1c]\n    add r0, sp, #0x68\n    add r3, r2, #0\n    bl ov13_02225B58\n    ldr r0, [sp, #0xc]\n    asr r1, r4, #0x1f\n    add r3, r4, r0\n    ldr r0, [sp, #8]\n    adc r1, r0\n    mov r0, #0xff\n    lsl r0, r0, #0x18\n    and r0, r1\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x24]\n    mov r0, #0xff\n    lsl r0, r0, #0x10\n    and r0, r1\n    lsr r0, r0, #8\n    str r0, [sp, #0x2c]\n    mov r0, #0xff\n    lsl r0, r0, #8\n    mov r2, #0\n    and r0, r1\n    and r2, r3\n    lsl r6, r0, #8\n    lsr r2, r2, #0x18\n    str r2, [sp, #0x34]\n    orr r2, r6\n    lsr r0, r0, #0x18\n    str r2, [sp, #0x34]\n    str r0, [sp, #0x38]\n    mov r0, #0xff\n    mov r2, #0\n    and r0, r1\n    and r2, r3\n    lsl r6, r0, #0x18\n    lsr r2, r2, #8\n    str r2, [sp, #0x44]\n    orr r2, r6\n    lsr r0, r0, #8\n    str r2, [sp, #0x44]\n    str r0, [sp, #0x3c]\n    mov r0, #0\n    add r2, r1, #0\n    and r2, r0\n    mov r0, #0xff\n    lsl r0, r0, #0x18\n    and r0, r3\n    lsr r6, r0, #0x18\n    lsl r0, r0, #8\n    mov ip, r0\n    mov r0, #0\n    and r1, r0\n    mov r0, #0xff\n    lsl r0, r0, #0x10\n    lsl r2, r2, #8\n    and r0, r3\n    orr r2, r6\n    lsr r6, r0, #8\n    lsl r7, r0, #0x18\n    mov r0, #0xff\n    lsl r1, r1, #0x18\n    and r0, r3\n    orr r1, r6\n    lsl r6, r0, #0x18\n    mov r0, #0xff\n    lsl r0, r0, #8\n    and r0, r3\n    lsl r0, r0, #8\n    orr r0, r6\n    orr r1, r0\n    ldr r0, [sp, #0x40]\n    add r3, r7, #0\n    orr r3, r0\n    mov r0, ip\n    orr r1, r2\n    add r2, r0, #0\n    ldr r0, [sp, #0x3c]\n    orr r2, r3\n    orr r1, r0\n    ldr r0, [sp, #0x44]\n    orr r2, r0\n    ldr r0, [sp, #0x38]\n    orr r1, r0\n    ldr r0, [sp, #0x34]\n    orr r2, r0\n    ldr r0, [sp, #0x30]\n    orr r1, r0\n    ldr r0, [sp, #0x2c]\n    orr r2, r0\n    ldr r0, [sp, #0x28]\n    orr r1, r0\n    ldr r0, [sp, #0x24]\n    str r1, [sp, #0x54]\n    orr r0, r2\n    str r0, [sp, #0x50]\n    add r0, sp, #0x58\n    add r1, sp, #0x50\n    add r2, r0, #0\n    bl ov13_022256C8\n    add r2, sp, #0x60\n    mov r1, #8\n    ldrb r0, [r2]\n    add r2, r2, #1\n    strb r0, [r5]\n    add r5, r5, #1\n    sub r1, r1, #1\n    bne _022254D0\n    ldr r0, [sp, #0x14]\n    add r4, r4, #1\n    cmp r4, r0\n    ble _022253E6\n    ldr r0, [sp, #0x20]\n    add r0, r0, #1\n    str r0, [sp, #0x20]\n    cmp r0, #6\n    bge _022254F0\n    b _022253BE\n    add r3, sp, #0x58\n    mov r2, #8\n    ldrb r1, [r3]\n    ldr r0, [sp]\n    add r3, r3, #1\n    strb r1, [r0]\n    add r0, r0, #1\n    str r0, [sp]\n    sub r2, r2, #1\n    bne _022254F4\n    mov r0, #1\n    add sp, #0x1a8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0222550C: .word 0xA6A6A6A6"
    );
    #endif
}

void ov13_02225510(void) {
    /* Original at 0x02225510 */
    /* Requires manual decompilation - 213 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x1a8\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    ldr r0, _022256C4 ; =0xA6A6A6A6\n    add r4, r2, #0\n    add r5, r1, #0\n    str r0, [sp, #0x48]\n    str r0, [sp, #0x4c]\n    mov r0, #7\n    add r1, r4, #0\n    tst r1, r0\n    bne _02225532\n    ldr r2, [sp, #0x1c0]\n    tst r0, r2\n    beq _02225538\n    add sp, #0x1a8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r0, r4, #1\n    lsr r0, r0, #3\n    str r0, [sp, #0x14]\n    cmp r0, #2\n    bge _02225548\n    add sp, #0x1a8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, sp, #0x68\n    add r1, r3, #0\n    lsl r2, r2, #3\n    bl ov13_022259C8\n    str r0, [sp, #0x20]\n    add r3, sp, #0x58\n    add r2, r5, #0\n    mov r1, #8\n    ldrb r0, [r2]\n    add r2, r2, #1\n    strb r0, [r3]\n    add r3, r3, #1\n    sub r1, r1, #1\n    bne _0222555A\n    add r5, #8\n    ldr r0, [sp]\n    add r1, r5, #0\n    sub r2, r4, #1\n    bl memcpy\n    mov r0, #5\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x14]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0x18]\n    ldr r4, [sp, #0x14]\n    add r0, r4, #0\n    cmp r0, #0\n    bgt _02225586\n    b _022256A0\n    ldr r2, [sp, #0x24]\n    ldr r1, [sp, #0x18]\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    str r0, [sp, #0xc]\n    mov r0, #0\n    str r1, [sp, #8]\n    str r0, [sp, #0x2c]\n    mov r0, #0\n    mov r1, #0\n    str r0, [sp, #0x34]\n    add r0, r1, #0\n    orr r0, r1\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0xc]\n    asr r1, r4, #0x1f\n    add r5, r4, r0\n    ldr r0, [sp, #8]\n    adc r1, r0\n    mov r0, #0xff\n    lsl r0, r0, #0x18\n    and r0, r1\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x28]\n    mov r0, #0xff\n    lsl r0, r0, #0x10\n    and r0, r1\n    lsr r0, r0, #8\n    str r0, [sp, #0x30]\n    mov r0, #0xff\n    lsl r0, r0, #8\n    add r2, r1, #0\n    and r2, r0\n    mov r0, #0\n    add r3, r5, #0\n    and r3, r0\n    lsl r0, r2, #8\n    lsr r3, r3, #0x18\n    orr r3, r0\n    lsr r0, r2, #0x18\n    str r0, [sp, #0x38]\n    mov r0, #0xff\n    mov r2, #0\n    and r0, r1\n    and r2, r5\n    lsl r6, r0, #0x18\n    lsr r2, r2, #8\n    str r2, [sp, #0x44]\n    orr r2, r6\n    lsr r0, r0, #8\n    str r2, [sp, #0x44]\n    str r0, [sp, #0x3c]\n    mov r0, #0\n    add r2, r1, #0\n    and r2, r0\n    mov r0, #0xff\n    lsl r0, r0, #0x18\n    and r0, r5\n    lsr r6, r0, #0x18\n    lsl r0, r0, #8\n    mov ip, r0\n    mov r0, #0\n    and r1, r0\n    mov r0, #0xff\n    lsl r0, r0, #0x10\n    lsl r2, r2, #8\n    and r0, r5\n    orr r2, r6\n    lsr r6, r0, #8\n    lsl r7, r0, #0x18\n    mov r0, #0xff\n    lsl r1, r1, #0x18\n    and r0, r5\n    orr r1, r6\n    lsl r6, r0, #0x18\n    mov r0, #0xff\n    lsl r0, r0, #8\n    and r0, r5\n    lsl r0, r0, #8\n    orr r0, r6\n    orr r1, r0\n    ldr r0, [sp, #0x40]\n    add r5, r7, #0\n    orr r5, r0\n    mov r0, ip\n    orr r1, r2\n    add r2, r0, #0\n    ldr r0, [sp, #0x3c]\n    orr r2, r5\n    orr r1, r0\n    ldr r0, [sp, #0x44]\n    orr r2, r0\n    ldr r0, [sp, #0x38]\n    orr r2, r3\n    orr r1, r0\n    ldr r0, [sp, #0x34]\n    orr r1, r0\n    ldr r0, [sp, #0x30]\n    orr r2, r0\n    ldr r0, [sp, #0x2c]\n    orr r1, r0\n    ldr r0, [sp, #0x28]\n    str r1, [sp, #0x54]\n    orr r0, r2\n    str r0, [sp, #0x50]\n    add r0, sp, #0x58\n    add r1, sp, #0x50\n    add r2, r0, #0\n    bl ov13_022256C8\n    sub r0, r4, #1\n    lsl r1, r0, #3\n    ldr r0, [sp]\n    add r2, sp, #0x60\n    add r5, r0, r1\n    add r3, r5, #0\n    mov r1, #8\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02225672\n    add r2, sp, #0x58\n    ldr r1, [sp, #0x20]\n    add r0, sp, #0x68\n    add r3, r2, #0\n    bl ov13_02225F14\n    add r2, sp, #0x60\n    mov r1, #8\n    ldrb r0, [r2]\n    add r2, r2, #1\n    strb r0, [r5]\n    add r5, r5, #1\n    sub r1, r1, #1\n    bne _0222568E\n    sub r4, r4, #1\n    cmp r4, #0\n    bgt _022255A4\n    ldr r0, [sp, #0x24]\n    sub r0, r0, #1\n    str r0, [sp, #0x24]\n    bmi _022256AA\n    b _0222557C\n    add r0, sp, #0x48\n    add r1, sp, #0x58\n    mov r2, #8\n    bl memcmp\n    cmp r0, #0\n    beq _022256BC\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x1c]\n    add sp, #0x1a8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022256C4: .word 0xA6A6A6A6"
    );
    #endif
}

void ov13_022256C8(void) {
    /* Original at 0x022256C8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldrb r4, [r0]\n    ldrb r3, [r1]\n    eor r3, r4\n    strb r3, [r2]\n    ldrb r4, [r0, #1]\n    ldrb r3, [r1, #1]\n    eor r3, r4\n    strb r3, [r2, #1]\n    ldrb r4, [r0, #2]\n    ldrb r3, [r1, #2]\n    eor r3, r4\n    strb r3, [r2, #2]\n    ldrb r4, [r0, #3]\n    ldrb r3, [r1, #3]\n    eor r3, r4\n    strb r3, [r2, #3]\n    ldrb r4, [r0, #4]\n    ldrb r3, [r1, #4]\n    eor r3, r4\n    strb r3, [r2, #4]\n    ldrb r4, [r0, #5]\n    ldrb r3, [r1, #5]\n    eor r3, r4\n    strb r3, [r2, #5]\n    ldrb r4, [r0, #6]\n    ldrb r3, [r1, #6]\n    eor r3, r4\n    strb r3, [r2, #6]\n    ldrb r3, [r0, #7]\n    ldrb r0, [r1, #7]\n    eor r0, r3\n    strb r0, [r2, #7]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov13_02225710(void) {
    /* Original at 0x02225710 */
    /* Requires manual decompilation - 346 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r3, r1, #0\n    add r1, r2, #0\n    mov r2, #0\n    str r2, [sp]\n    ldrb r2, [r3, #2]\n    ldrb r6, [r3, #1]\n    ldrb r5, [r3, #3]\n    lsl r4, r2, #8\n    ldrb r2, [r3]\n    lsl r6, r6, #0x10\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r4\n    eor r2, r5\n    str r2, [r0]\n    ldrb r2, [r3, #6]\n    ldrb r6, [r3, #5]\n    ldrb r5, [r3, #7]\n    lsl r4, r2, #8\n    ldrb r2, [r3, #4]\n    lsl r6, r6, #0x10\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r4\n    eor r2, r5\n    str r2, [r0, #4]\n    ldrb r2, [r3, #0xa]\n    ldrb r6, [r3, #9]\n    ldrb r5, [r3, #0xb]\n    lsl r4, r2, #8\n    ldrb r2, [r3, #8]\n    lsl r6, r6, #0x10\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r4\n    eor r2, r5\n    str r2, [r0, #8]\n    ldrb r2, [r3, #0xe]\n    ldrb r6, [r3, #0xd]\n    ldrb r5, [r3, #0xf]\n    lsl r4, r2, #8\n    ldrb r2, [r3, #0xc]\n    lsl r6, r6, #0x10\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r4\n    eor r2, r5\n    str r2, [r0, #0xc]\n    cmp r1, #0x80\n    bne _022257F4\n    ldr r5, _022259C0 ; =ov13_02242688\n    ldr r2, _022259C4 ; =ov13_022442B0\n    ldr r4, [r0, #0xc]\n    ldr r3, [r5]\n    lsr r1, r4, #0x18\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    add r5, r5, #4\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #8]\n    lsl r1, r4, #0x18\n    lsr r1, r1, #0x16\n    ldr r6, [r2, r1]\n    mov r1, #0xff\n    lsl r1, r1, #8\n    add r7, r6, #0\n    and r7, r1\n    ldr r1, [r0]\n    str r1, [sp, #4]\n    lsr r1, r4, #0x10\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x16\n    ldr r6, [r2, r1]\n    mov r1, #0xff\n    lsl r1, r1, #0x18\n    lsr r4, r4, #8\n    and r6, r1\n    ldr r1, [sp, #4]\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    eor r1, r6\n    ldr r6, [r2, r4]\n    mov r4, #0xff\n    lsl r4, r4, #0x10\n    and r4, r6\n    eor r1, r4\n    add r4, r7, #0\n    eor r4, r1\n    ldr r1, [sp, #8]\n    eor r1, r4\n    eor r3, r1\n    str r3, [r0, #0x10]\n    ldr r1, [r0, #4]\n    eor r3, r1\n    str r3, [r0, #0x14]\n    ldr r1, [r0, #8]\n    eor r3, r1\n    str r3, [r0, #0x18]\n    ldr r1, [r0, #0xc]\n    eor r1, r3\n    str r1, [r0, #0x1c]\n    ldr r1, [sp]\n    add r1, r1, #1\n    str r1, [sp]\n    cmp r1, #0xa\n    blt _022257F0\n    add sp, #0x18\n    mov r0, #0xa\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, #0x10\n    b _0222577C\n    ldrb r2, [r3, #0x12]\n    ldrb r6, [r3, #0x11]\n    ldrb r5, [r3, #0x13]\n    lsl r4, r2, #8\n    ldrb r2, [r3, #0x10]\n    lsl r6, r6, #0x10\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r4\n    eor r2, r5\n    str r2, [r0, #0x10]\n    ldrb r2, [r3, #0x16]\n    ldrb r6, [r3, #0x15]\n    ldrb r5, [r3, #0x17]\n    lsl r4, r2, #8\n    ldrb r2, [r3, #0x14]\n    lsl r6, r6, #0x10\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r4\n    eor r2, r5\n    str r2, [r0, #0x14]\n    cmp r1, #0xc0\n    bne _022258B0\n    ldr r5, _022259C0 ; =ov13_02242688\n    ldr r3, _022259C4 ; =ov13_022442B0\n    ldr r4, [r0, #0x14]\n    ldr r6, [r5]\n    lsr r1, r4, #0x18\n    lsl r1, r1, #2\n    ldr r1, [r3, r1]\n    add r5, r5, #4\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0xc]\n    lsl r1, r4, #0x18\n    lsr r1, r1, #0x16\n    ldr r2, [r3, r1]\n    mov r1, #0xff\n    lsl r1, r1, #8\n    add r7, r2, #0\n    and r7, r1\n    ldr r1, [r0]\n    mov lr, r1\n    lsr r1, r4, #0x10\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x16\n    ldr r2, [r3, r1]\n    mov r1, #0xff\n    lsl r1, r1, #0x18\n    and r1, r2\n    mov r2, lr\n    eor r1, r2\n    lsr r2, r4, #8\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x16\n    ldr r4, [r3, r2]\n    mov r2, #0xff\n    lsl r2, r2, #0x10\n    and r2, r4\n    eor r1, r2\n    add r2, r7, #0\n    eor r2, r1\n    ldr r1, [sp, #0xc]\n    eor r1, r2\n    add r2, r6, #0\n    eor r2, r1\n    str r2, [r0, #0x18]\n    ldr r1, [r0, #4]\n    eor r2, r1\n    str r2, [r0, #0x1c]\n    ldr r1, [r0, #8]\n    eor r2, r1\n    str r2, [r0, #0x20]\n    ldr r1, [r0, #0xc]\n    eor r1, r2\n    str r1, [r0, #0x24]\n    ldr r1, [sp]\n    add r1, r1, #1\n    str r1, [sp]\n    cmp r1, #8\n    blt _0222589E\n    add sp, #0x18\n    mov r0, #0xc\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [r0, #0x10]\n    ldr r1, [r0, #0x24]\n    eor r2, r1\n    str r2, [r0, #0x28]\n    ldr r1, [r0, #0x14]\n    eor r1, r2\n    str r1, [r0, #0x2c]\n    add r0, #0x18\n    b _02225828\n    ldrb r2, [r3, #0x1a]\n    ldrb r6, [r3, #0x19]\n    ldrb r5, [r3, #0x1b]\n    lsl r4, r2, #8\n    ldrb r2, [r3, #0x18]\n    lsl r6, r6, #0x10\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r4\n    eor r2, r5\n    str r2, [r0, #0x18]\n    ldrb r2, [r3, #0x1e]\n    ldrb r5, [r3, #0x1f]\n    lsl r4, r2, #8\n    ldrb r2, [r3, #0x1c]\n    ldrb r3, [r3, #0x1d]\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x10\n    eor r2, r3\n    eor r2, r4\n    eor r2, r5\n    str r2, [r0, #0x1c]\n    mov r2, #1\n    lsl r2, r2, #8\n    cmp r1, r2\n    bne _022259BA\n    ldr r5, _022259C0 ; =ov13_02242688\n    ldr r3, _022259C4 ; =ov13_022442B0\n    ldr r4, [r0, #0x1c]\n    ldr r6, [r5]\n    lsr r1, r4, #0x18\n    lsl r1, r1, #2\n    ldr r1, [r3, r1]\n    add r5, r5, #4\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x10]\n    lsl r1, r4, #0x18\n    lsr r1, r1, #0x16\n    ldr r2, [r3, r1]\n    mov r1, #0xff\n    lsl r1, r1, #8\n    add r7, r2, #0\n    and r7, r1\n    ldr r1, [r0]\n    mov ip, r1\n    lsr r1, r4, #0x10\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x16\n    ldr r2, [r3, r1]\n    mov r1, #0xff\n    lsl r1, r1, #0x18\n    and r1, r2\n    mov r2, ip\n    eor r1, r2\n    lsr r2, r4, #8\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x16\n    ldr r4, [r3, r2]\n    mov r2, #0xff\n    lsl r2, r2, #0x10\n    and r2, r4\n    eor r1, r2\n    add r2, r7, #0\n    eor r2, r1\n    ldr r1, [sp, #0x10]\n    eor r1, r2\n    add r2, r6, #0\n    eor r2, r1\n    str r2, [r0, #0x20]\n    ldr r1, [r0, #4]\n    eor r2, r1\n    str r2, [r0, #0x24]\n    ldr r1, [r0, #8]\n    eor r2, r1\n    str r2, [r0, #0x28]\n    ldr r1, [r0, #0xc]\n    eor r1, r2\n    str r1, [r0, #0x2c]\n    ldr r1, [sp]\n    add r1, r1, #1\n    str r1, [sp]\n    cmp r1, #7\n    blt _0222595E\n    add sp, #0x18\n    mov r0, #0xe\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r6, [r0, #0x2c]\n    ldr r7, [r0, #0x10]\n    lsl r1, r6, #0x18\n    lsr r1, r1, #0x16\n    ldr r1, [r3, r1]\n    lsl r1, r1, #0x18\n    lsr r4, r1, #0x18\n    lsr r1, r6, #8\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x16\n    ldr r2, [r3, r1]\n    mov r1, #0xff\n    lsl r1, r1, #8\n    and r1, r2\n    str r1, [sp, #0x14]\n    lsr r1, r6, #0x18\n    lsl r1, r1, #2\n    ldr r2, [r3, r1]\n    mov r1, #0xff\n    lsl r1, r1, #0x18\n    and r1, r2\n    lsr r2, r6, #0x10\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x16\n    ldr r6, [r3, r2]\n    mov r2, #0xff\n    lsl r2, r2, #0x10\n    eor r1, r7\n    and r2, r6\n    eor r2, r1\n    ldr r1, [sp, #0x14]\n    eor r1, r2\n    add r2, r4, #0\n    eor r2, r1\n    str r2, [r0, #0x30]\n    ldr r1, [r0, #0x14]\n    eor r2, r1\n    str r2, [r0, #0x34]\n    ldr r1, [r0, #0x18]\n    eor r2, r1\n    str r2, [r0, #0x38]\n    ldr r1, [r0, #0x1c]\n    eor r1, r2\n    str r1, [r0, #0x3c]\n    add r0, #0x20\n    b _022258E8\n    ldr r0, [sp]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _022259C0: .word ov13_02242688\n    _022259C4: .word ov13_022442B0"
    );
    #endif
}

void ov13_022259C8(void) {
    /* Original at 0x022259C8 */
    /* Requires manual decompilation - 194 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    bl ov13_02225710\n    mov ip, r0\n    mov r1, ip\n    lsl r6, r1, #2\n    mov r0, #0\n    cmp r6, #0\n    ble _02225A0E\n    lsl r2, r6, #2\n    add r1, r4, #0\n    add r2, r4, r2\n    ldr r5, [r1]\n    ldr r3, [r2]\n    add r0, r0, #4\n    str r3, [r1]\n    str r5, [r2]\n    ldr r5, [r1, #4]\n    ldr r3, [r2, #4]\n    sub r6, r6, #4\n    str r3, [r1, #4]\n    str r5, [r2, #4]\n    ldr r5, [r1, #8]\n    ldr r3, [r2, #8]\n    str r3, [r1, #8]\n    str r5, [r2, #8]\n    ldr r5, [r1, #0xc]\n    ldr r3, [r2, #0xc]\n    str r3, [r1, #0xc]\n    str r5, [r2, #0xc]\n    add r1, #0x10\n    sub r2, #0x10\n    cmp r0, r6\n    blt _022259E2\n    mov r0, #1\n    str r0, [sp]\n    mov r0, ip\n    cmp r0, #1\n    bgt _02225A1A\n    b _02225B3E\n    ldr r2, _02225B44 ; =ov13_022442B0\n    ldr r7, _02225B48 ; =ov13_02242AB0\n    add r4, #0x10\n    ldr r3, [r4]\n    lsl r0, r3, #0x18\n    lsr r0, r0, #0x16\n    ldr r0, [r2, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    ldr r1, [r7, r0]\n    lsr r0, r3, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    ldr r0, [r2, r0]\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x16\n    ldr r0, _02225B4C ; =ov13_022426B0\n    ldr r6, [r0, r5]\n    lsr r0, r3, #0x18\n    lsl r0, r0, #2\n    lsr r3, r3, #0x10\n    ldr r0, [r2, r0]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x16\n    lsl r0, r0, #0x18\n    ldr r3, [r2, r3]\n    lsr r5, r0, #0x16\n    ldr r0, _02225B50 ; =ov13_022446B0\n    lsl r3, r3, #0x18\n    ldr r0, [r0, r5]\n    lsr r5, r3, #0x16\n    ldr r3, _02225B54 ; =ov13_02244AB0\n    ldr r3, [r3, r5]\n    eor r0, r3\n    eor r0, r6\n    eor r0, r1\n    str r0, [r4]\n    ldr r3, [r4, #4]\n    lsl r0, r3, #0x18\n    lsr r0, r0, #0x16\n    ldr r0, [r2, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    ldr r1, [r7, r0]\n    lsr r0, r3, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    ldr r0, [r2, r0]\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x16\n    ldr r0, _02225B4C ; =ov13_022426B0\n    ldr r6, [r0, r5]\n    lsr r0, r3, #0x18\n    lsl r0, r0, #2\n    lsr r3, r3, #0x10\n    ldr r0, [r2, r0]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x16\n    lsl r0, r0, #0x18\n    ldr r3, [r2, r3]\n    lsr r5, r0, #0x16\n    ldr r0, _02225B50 ; =ov13_022446B0\n    lsl r3, r3, #0x18\n    ldr r0, [r0, r5]\n    lsr r5, r3, #0x16\n    ldr r3, _02225B54 ; =ov13_02244AB0\n    ldr r3, [r3, r5]\n    eor r0, r3\n    eor r0, r6\n    eor r0, r1\n    str r0, [r4, #4]\n    ldr r3, [r4, #8]\n    lsl r0, r3, #0x18\n    lsr r0, r0, #0x16\n    ldr r0, [r2, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    ldr r1, [r7, r0]\n    lsr r0, r3, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    ldr r0, [r2, r0]\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x16\n    ldr r0, _02225B4C ; =ov13_022426B0\n    ldr r6, [r0, r5]\n    lsr r0, r3, #0x18\n    lsl r0, r0, #2\n    lsr r3, r3, #0x10\n    ldr r0, [r2, r0]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x16\n    lsl r0, r0, #0x18\n    ldr r3, [r2, r3]\n    lsr r5, r0, #0x16\n    ldr r0, _02225B50 ; =ov13_022446B0\n    lsl r3, r3, #0x18\n    ldr r0, [r0, r5]\n    lsr r5, r3, #0x16\n    ldr r3, _02225B54 ; =ov13_02244AB0\n    ldr r3, [r3, r5]\n    eor r0, r3\n    eor r0, r6\n    eor r0, r1\n    str r0, [r4, #8]\n    ldr r3, [r4, #0xc]\n    lsl r0, r3, #0x18\n    lsr r0, r0, #0x16\n    ldr r0, [r2, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    ldr r1, [r7, r0]\n    lsr r0, r3, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    ldr r0, [r2, r0]\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x16\n    ldr r0, _02225B4C ; =ov13_022426B0\n    ldr r6, [r0, r5]\n    lsr r0, r3, #0x18\n    lsl r0, r0, #2\n    lsr r3, r3, #0x10\n    ldr r0, [r2, r0]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x16\n    lsl r0, r0, #0x18\n    ldr r3, [r2, r3]\n    lsr r5, r0, #0x16\n    ldr r0, _02225B50 ; =ov13_022446B0\n    lsl r3, r3, #0x18\n    ldr r0, [r0, r5]\n    lsr r5, r3, #0x16\n    ldr r3, _02225B54 ; =ov13_02244AB0\n    ldr r3, [r3, r5]\n    eor r0, r3\n    eor r0, r6\n    eor r0, r1\n    str r0, [r4, #0xc]\n    ldr r0, [sp]\n    add r1, r0, #1\n    mov r0, ip\n    str r1, [sp]\n    cmp r1, r0\n    bge _02225B3E\n    b _02225A1E\n    mov r0, ip\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02225B44: .word ov13_022442B0\n    _02225B48: .word ov13_02242AB0\n    _02225B4C: .word ov13_022426B0\n    _02225B50: .word ov13_022446B0\n    _02225B54: .word ov13_02244AB0"
    );
    #endif
}

void ov13_02225B58(void) {
    /* Original at 0x02225B58 */
    /* Requires manual decompilation - 473 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    add r7, r1, #0\n    add r1, r2, #0\n    ldrb r2, [r1, #2]\n    str r3, [sp]\n    ldrb r6, [r1, #1]\n    lsl r3, r2, #8\n    ldrb r2, [r1]\n    ldrb r4, [r1, #3]\n    lsl r6, r6, #0x10\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r3\n    eor r2, r4\n    ldr r5, [r0]\n    ldrb r6, [r1, #5]\n    eor r2, r5\n    str r2, [sp, #0xc]\n    ldrb r2, [r1, #6]\n    ldrb r4, [r1, #7]\n    lsl r6, r6, #0x10\n    lsl r3, r2, #8\n    ldrb r2, [r1, #4]\n    ldr r5, [r0, #4]\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r3\n    eor r2, r4\n    eor r2, r5\n    str r2, [sp, #8]\n    ldrb r2, [r1, #0xa]\n    ldrb r6, [r1, #9]\n    ldrb r4, [r1, #0xb]\n    lsl r3, r2, #8\n    ldrb r2, [r1, #8]\n    lsl r6, r6, #0x10\n    ldr r5, [r0, #8]\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r3\n    eor r2, r4\n    eor r5, r2\n    ldrb r2, [r1, #0xe]\n    ldrb r4, [r1, #0xf]\n    ldr r6, [r0, #0xc]\n    lsl r3, r2, #8\n    ldrb r2, [r1, #0xc]\n    ldrb r1, [r1, #0xd]\n    lsl r2, r2, #0x18\n    lsl r1, r1, #0x10\n    eor r1, r2\n    eor r1, r3\n    eor r1, r4\n    eor r6, r1\n    asr r1, r7, #1\n    str r1, [sp, #4]\n    lsl r1, r6, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _02225F00 ; =ov13_02243EB0\n    ldr r4, [r0, #0x10]\n    ldr r3, [r1, r2]\n    lsr r1, r5, #8\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _02225F04 ; =ov13_02243AB0\n    ldr r1, [r1, r2]\n    str r1, [sp, #0x40]\n    ldr r1, [sp, #0xc]\n    lsr r1, r1, #0x18\n    lsl r2, r1, #2\n    ldr r1, _02225F08 ; =ov13_022432B0\n    ldr r7, [r1, r2]\n    ldr r1, [sp, #8]\n    lsr r1, r1, #0x10\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _02225F0C ; =ov13_022436B0\n    ldr r1, [r1, r2]\n    add r2, r7, #0\n    eor r2, r1\n    ldr r1, [sp, #0x40]\n    eor r1, r2\n    eor r1, r3\n    eor r1, r4\n    str r1, [sp, #0x10]\n    ldr r1, [sp, #0xc]\n    ldr r4, [r0, #0x14]\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _02225F00 ; =ov13_02243EB0\n    ldr r3, [r1, r2]\n    lsr r1, r6, #8\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _02225F04 ; =ov13_02243AB0\n    ldr r1, [r1, r2]\n    str r1, [sp, #0x48]\n    ldr r1, [sp, #8]\n    lsr r1, r1, #0x18\n    lsl r2, r1, #2\n    ldr r1, _02225F08 ; =ov13_022432B0\n    ldr r7, [r1, r2]\n    lsr r1, r5, #0x10\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _02225F0C ; =ov13_022436B0\n    ldr r1, [r1, r2]\n    add r2, r7, #0\n    eor r2, r1\n    ldr r1, [sp, #0x48]\n    eor r1, r2\n    eor r1, r3\n    eor r1, r4\n    str r1, [sp, #0x44]\n    ldr r1, [sp, #8]\n    ldr r4, [r0, #0x18]\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _02225F00 ; =ov13_02243EB0\n    ldr r3, [r1, r2]\n    ldr r1, [sp, #0xc]\n    lsr r1, r1, #8\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _02225F04 ; =ov13_02243AB0\n    ldr r1, [r1, r2]\n    str r1, [sp, #0x14]\n    lsr r1, r5, #0x18\n    lsl r2, r1, #2\n    ldr r1, _02225F08 ; =ov13_022432B0\n    ldr r7, [r1, r2]\n    lsr r1, r6, #0x10\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _02225F0C ; =ov13_022436B0\n    ldr r1, [r1, r2]\n    add r2, r7, #0\n    eor r2, r1\n    ldr r1, [sp, #0x14]\n    ldr r7, [r0, #0x1c]\n    eor r1, r2\n    eor r1, r3\n    add r2, r4, #0\n    eor r2, r1\n    lsl r1, r5, #0x18\n    lsr r3, r1, #0x16\n    ldr r1, _02225F00 ; =ov13_02243EB0\n    add r0, #0x20\n    ldr r3, [r1, r3]\n    ldr r1, [sp, #8]\n    lsr r1, r1, #8\n    lsl r1, r1, #0x18\n    lsr r4, r1, #0x16\n    ldr r1, _02225F04 ; =ov13_02243AB0\n    ldr r1, [r1, r4]\n    lsr r4, r6, #0x18\n    lsl r5, r4, #2\n    ldr r4, _02225F08 ; =ov13_022432B0\n    ldr r6, [r4, r5]\n    ldr r4, [sp, #0xc]\n    lsr r4, r4, #0x10\n    lsl r4, r4, #0x18\n    lsr r5, r4, #0x16\n    ldr r4, _02225F0C ; =ov13_022436B0\n    ldr r4, [r4, r5]\n    eor r4, r6\n    eor r1, r4\n    eor r1, r3\n    ldr r3, [sp, #4]\n    eor r1, r7\n    sub r3, r3, #1\n    str r3, [sp, #4]\n    beq _02225D94\n    lsl r3, r1, #0x18\n    lsr r5, r3, #0x16\n    ldr r3, _02225F00 ; =ov13_02243EB0\n    ldr r4, [r0]\n    ldr r3, [r3, r5]\n    lsr r5, r2, #8\n    lsl r5, r5, #0x18\n    lsr r6, r5, #0x16\n    ldr r5, _02225F04 ; =ov13_02243AB0\n    ldr r7, [r5, r6]\n    ldr r5, [sp, #0x10]\n    lsr r5, r5, #0x18\n    lsl r6, r5, #2\n    ldr r5, _02225F08 ; =ov13_022432B0\n    ldr r5, [r5, r6]\n    str r5, [sp, #0x18]\n    ldr r5, [sp, #0x44]\n    lsr r5, r5, #0x10\n    lsl r5, r5, #0x18\n    lsr r6, r5, #0x16\n    ldr r5, _02225F0C ; =ov13_022436B0\n    ldr r6, [r5, r6]\n    ldr r5, [sp, #0x18]\n    eor r5, r6\n    eor r5, r7\n    eor r3, r5\n    eor r3, r4\n    str r3, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    ldr r4, [r0, #4]\n    lsl r3, r3, #0x18\n    lsr r5, r3, #0x16\n    ldr r3, _02225F00 ; =ov13_02243EB0\n    ldr r3, [r3, r5]\n    lsr r5, r1, #8\n    lsl r5, r5, #0x18\n    lsr r6, r5, #0x16\n    ldr r5, _02225F04 ; =ov13_02243AB0\n    ldr r7, [r5, r6]\n    ldr r5, [sp, #0x44]\n    lsr r5, r5, #0x18\n    lsl r6, r5, #2\n    ldr r5, _02225F08 ; =ov13_022432B0\n    ldr r5, [r5, r6]\n    str r5, [sp, #0x1c]\n    lsr r5, r2, #0x10\n    lsl r5, r5, #0x18\n    lsr r6, r5, #0x16\n    ldr r5, _02225F0C ; =ov13_022436B0\n    ldr r6, [r5, r6]\n    ldr r5, [sp, #0x1c]\n    eor r5, r6\n    eor r5, r7\n    eor r3, r5\n    eor r3, r4\n    str r3, [sp, #8]\n    ldr r3, [sp, #0x44]\n    ldr r6, [r0, #8]\n    lsl r3, r3, #0x18\n    lsr r4, r3, #0x16\n    ldr r3, _02225F00 ; =ov13_02243EB0\n    ldr r5, [r3, r4]\n    ldr r3, [sp, #0x10]\n    lsr r3, r3, #8\n    lsl r3, r3, #0x18\n    lsr r4, r3, #0x16\n    ldr r3, _02225F04 ; =ov13_02243AB0\n    ldr r3, [r3, r4]\n    str r3, [sp, #0x20]\n    lsr r3, r2, #0x18\n    lsl r4, r3, #2\n    ldr r3, _02225F08 ; =ov13_022432B0\n    lsl r2, r2, #0x18\n    ldr r7, [r3, r4]\n    lsr r3, r1, #0x10\n    lsl r3, r3, #0x18\n    lsr r4, r3, #0x16\n    ldr r3, _02225F0C ; =ov13_022436B0\n    lsr r1, r1, #0x18\n    ldr r3, [r3, r4]\n    add r4, r7, #0\n    eor r4, r3\n    ldr r3, [sp, #0x20]\n    ldr r7, [r0, #0xc]\n    eor r3, r4\n    eor r3, r5\n    add r5, r6, #0\n    eor r5, r3\n    lsr r3, r2, #0x16\n    ldr r2, _02225F00 ; =ov13_02243EB0\n    ldr r3, [r2, r3]\n    ldr r2, [sp, #0x44]\n    lsr r2, r2, #8\n    lsl r2, r2, #0x18\n    lsr r4, r2, #0x16\n    ldr r2, _02225F04 ; =ov13_02243AB0\n    ldr r2, [r2, r4]\n    lsl r4, r1, #2\n    ldr r1, _02225F08 ; =ov13_022432B0\n    ldr r6, [r1, r4]\n    ldr r1, [sp, #0x10]\n    lsr r1, r1, #0x10\n    lsl r1, r1, #0x18\n    lsr r4, r1, #0x16\n    ldr r1, _02225F0C ; =ov13_022436B0\n    ldr r1, [r1, r4]\n    eor r1, r6\n    eor r1, r2\n    eor r1, r3\n    add r6, r7, #0\n    eor r6, r1\n    b _02225BCA\n    ldr r3, [r0]\n    mov r6, #0xff\n    str r3, [sp, #0x24]\n    lsl r3, r1, #0x18\n    lsr r4, r3, #0x16\n    ldr r3, _02225F10 ; =ov13_022442B0\n    lsl r6, r6, #0x10\n    ldr r4, [r3, r4]\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x18\n    str r4, [sp, #0x28]\n    lsr r4, r2, #8\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #8\n    and r4, r5\n    str r4, [sp, #0x2c]\n    ldr r4, [sp, #0x10]\n    lsr r4, r4, #0x18\n    lsl r4, r4, #2\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #0x18\n    and r5, r4\n    ldr r4, [sp, #0x44]\n    lsr r4, r4, #0x10\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r4, [r3, r4]\n    and r4, r6\n    eor r5, r4\n    ldr r4, [sp, #0x2c]\n    eor r5, r4\n    ldr r4, [sp, #0x28]\n    eor r5, r4\n    ldr r4, [sp, #0x24]\n    eor r4, r5\n    ldr r5, [sp]\n    lsr r6, r4, #0x18\n    strb r6, [r5]\n    lsr r6, r4, #0x10\n    strb r6, [r5, #1]\n    lsr r6, r4, #8\n    strb r6, [r5, #2]\n    strb r4, [r5, #3]\n    ldr r4, [r0, #4]\n    mov r6, #0xff\n    str r4, [sp, #0x30]\n    ldr r4, [sp, #0x10]\n    lsl r6, r6, #0x10\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r4, [r3, r4]\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x18\n    str r4, [sp, #0x34]\n    lsr r4, r1, #8\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #8\n    and r4, r5\n    str r4, [sp, #0x38]\n    ldr r4, [sp, #0x44]\n    lsr r4, r4, #0x18\n    lsl r4, r4, #2\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #0x18\n    and r5, r4\n    lsr r4, r2, #0x10\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r4, [r3, r4]\n    and r4, r6\n    eor r5, r4\n    ldr r4, [sp, #0x38]\n    eor r5, r4\n    ldr r4, [sp, #0x34]\n    eor r5, r4\n    ldr r4, [sp, #0x30]\n    eor r4, r5\n    ldr r5, [sp]\n    lsr r6, r4, #0x18\n    strb r6, [r5, #4]\n    lsr r6, r4, #0x10\n    strb r6, [r5, #5]\n    lsr r6, r4, #8\n    strb r6, [r5, #6]\n    strb r4, [r5, #7]\n    ldr r4, [r0, #8]\n    str r4, [sp, #0x3c]\n    ldr r4, [sp, #0x44]\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r4, [r3, r4]\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x18\n    mov lr, r4\n    ldr r4, [sp, #0x10]\n    lsr r4, r4, #8\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #8\n    and r4, r5\n    mov ip, r4\n    lsr r4, r2, #0x18\n    lsl r4, r4, #2\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #0x18\n    add r6, r5, #0\n    and r6, r4\n    lsr r4, r1, #0x10\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #0x10\n    and r4, r5\n    eor r4, r6\n    mov r5, ip\n    eor r5, r4\n    mov r4, lr\n    eor r5, r4\n    ldr r4, [sp, #0x3c]\n    eor r4, r5\n    ldr r5, [sp]\n    lsr r6, r4, #0x18\n    strb r6, [r5, #8]\n    lsr r6, r4, #0x10\n    strb r6, [r5, #9]\n    lsr r6, r4, #8\n    strb r6, [r5, #0xa]\n    strb r4, [r5, #0xb]\n    ldr r5, [r0, #0xc]\n    lsl r0, r2, #0x18\n    lsr r0, r0, #0x16\n    ldr r0, [r3, r0]\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, [sp, #0x44]\n    lsr r0, r0, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    ldr r2, [r3, r0]\n    mov r0, #0xff\n    lsl r0, r0, #8\n    and r2, r0\n    lsr r0, r1, #0x18\n    lsl r0, r0, #2\n    ldr r1, [r3, r0]\n    mov r0, #0xff\n    lsl r0, r0, #0x18\n    and r0, r1\n    ldr r1, [sp, #0x10]\n    lsr r1, r1, #0x10\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x16\n    ldr r3, [r3, r1]\n    mov r1, #0xff\n    lsl r1, r1, #0x10\n    and r1, r3\n    eor r0, r1\n    eor r0, r2\n    eor r0, r4\n    eor r0, r5\n    ldr r1, [sp]\n    lsr r2, r0, #0x18\n    strb r2, [r1, #0xc]\n    lsr r2, r0, #0x10\n    strb r2, [r1, #0xd]\n    lsr r2, r0, #8\n    strb r2, [r1, #0xe]\n    strb r0, [r1, #0xf]\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}\n    _02225F00: .word ov13_02243EB0\n    _02225F04: .word ov13_02243AB0\n    _02225F08: .word ov13_022432B0\n    _02225F0C: .word ov13_022436B0\n    _02225F10: .word ov13_022442B0"
    );
    #endif
}

void ov13_02225F14(void) {
    /* Original at 0x02225F14 */
    /* Requires manual decompilation - 473 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x48\n    add r7, r1, #0\n    add r1, r2, #0\n    ldrb r2, [r1, #2]\n    str r3, [sp]\n    ldrb r6, [r1, #1]\n    lsl r3, r2, #8\n    ldrb r2, [r1]\n    ldrb r4, [r1, #3]\n    lsl r6, r6, #0x10\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r3\n    eor r2, r4\n    ldr r5, [r0]\n    ldrb r6, [r1, #5]\n    eor r2, r5\n    str r2, [sp, #0xc]\n    ldrb r2, [r1, #6]\n    ldrb r4, [r1, #7]\n    lsl r6, r6, #0x10\n    lsl r3, r2, #8\n    ldrb r2, [r1, #4]\n    ldr r5, [r0, #4]\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r3\n    eor r2, r4\n    eor r2, r5\n    str r2, [sp, #8]\n    ldrb r2, [r1, #0xa]\n    ldrb r6, [r1, #9]\n    ldrb r4, [r1, #0xb]\n    lsl r3, r2, #8\n    ldrb r2, [r1, #8]\n    lsl r6, r6, #0x10\n    ldr r5, [r0, #8]\n    lsl r2, r2, #0x18\n    eor r2, r6\n    eor r2, r3\n    eor r2, r4\n    eor r2, r5\n    str r2, [sp, #0x40]\n    ldrb r2, [r1, #0xe]\n    ldr r5, [r0, #0xc]\n    ldrb r4, [r1, #0xf]\n    lsl r3, r2, #8\n    ldrb r2, [r1, #0xc]\n    ldrb r1, [r1, #0xd]\n    add r6, r5, #0\n    lsl r2, r2, #0x18\n    lsl r1, r1, #0x10\n    eor r1, r2\n    eor r1, r3\n    eor r1, r4\n    eor r6, r1\n    asr r1, r7, #1\n    str r1, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r5, [r0, #0x10]\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _022262BC ; =ov13_02242AB0\n    ldr r4, [r1, r2]\n    ldr r1, [sp, #0x40]\n    lsr r1, r1, #8\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _022262C0 ; =ov13_022426B0\n    ldr r3, [r1, r2]\n    ldr r1, [sp, #0xc]\n    lsr r1, r1, #0x18\n    lsl r2, r1, #2\n    ldr r1, _022262C4 ; =ov13_022446B0\n    ldr r7, [r1, r2]\n    lsr r1, r6, #0x10\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _022262C8 ; =ov13_02244AB0\n    ldr r1, [r1, r2]\n    eor r1, r7\n    eor r1, r3\n    eor r1, r4\n    eor r1, r5\n    str r1, [sp, #0x10]\n    ldr r1, [sp, #0x40]\n    ldr r5, [r0, #0x14]\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _022262BC ; =ov13_02242AB0\n    ldr r4, [r1, r2]\n    lsr r1, r6, #8\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _022262C0 ; =ov13_022426B0\n    ldr r3, [r1, r2]\n    ldr r1, [sp, #8]\n    lsr r1, r1, #0x18\n    lsl r2, r1, #2\n    ldr r1, _022262C4 ; =ov13_022446B0\n    ldr r7, [r1, r2]\n    ldr r1, [sp, #0xc]\n    lsr r1, r1, #0x10\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _022262C8 ; =ov13_02244AB0\n    ldr r1, [r1, r2]\n    eor r1, r7\n    eor r1, r3\n    eor r1, r4\n    eor r1, r5\n    str r1, [sp, #0x44]\n    lsl r1, r6, #0x18\n    lsr r2, r1, #0x16\n    ldr r1, _022262BC ; =ov13_02242AB0\n    ldr r3, [r0, #0x18]\n    ldr r2, [r1, r2]\n    ldr r1, [sp, #0xc]\n    lsr r1, r1, #8\n    lsl r1, r1, #0x18\n    lsr r4, r1, #0x16\n    ldr r1, _022262C0 ; =ov13_022426B0\n    ldr r1, [r1, r4]\n    str r1, [sp, #0x14]\n    ldr r1, [sp, #0x40]\n    lsr r1, r1, #0x18\n    lsl r4, r1, #2\n    ldr r1, _022262C4 ; =ov13_022446B0\n    ldr r1, [r1, r4]\n    ldr r4, [sp, #8]\n    lsr r4, r4, #0x10\n    lsl r4, r4, #0x18\n    lsr r5, r4, #0x16\n    ldr r4, _022262C8 ; =ov13_02244AB0\n    ldr r4, [r4, r5]\n    eor r4, r1\n    ldr r1, [sp, #0x14]\n    eor r1, r4\n    eor r1, r2\n    add r2, r3, #0\n    eor r2, r1\n    ldr r1, [sp, #0xc]\n    ldr r3, [r0, #0x1c]\n    lsl r1, r1, #0x18\n    lsr r4, r1, #0x16\n    ldr r1, _022262BC ; =ov13_02242AB0\n    add r0, #0x20\n    ldr r1, [r1, r4]\n    ldr r4, [sp, #8]\n    lsr r4, r4, #8\n    lsl r4, r4, #0x18\n    lsr r5, r4, #0x16\n    ldr r4, _022262C0 ; =ov13_022426B0\n    ldr r7, [r4, r5]\n    lsr r4, r6, #0x18\n    lsl r5, r4, #2\n    ldr r4, _022262C4 ; =ov13_022446B0\n    ldr r6, [r4, r5]\n    ldr r4, [sp, #0x40]\n    lsr r4, r4, #0x10\n    lsl r4, r4, #0x18\n    lsr r5, r4, #0x16\n    ldr r4, _022262C8 ; =ov13_02244AB0\n    ldr r4, [r4, r5]\n    eor r4, r6\n    eor r4, r7\n    eor r1, r4\n    eor r1, r3\n    ldr r3, [sp, #4]\n    sub r3, r3, #1\n    str r3, [sp, #4]\n    beq _0222614E\n    ldr r3, [sp, #0x44]\n    ldr r4, [r0]\n    lsl r3, r3, #0x18\n    lsr r5, r3, #0x16\n    ldr r3, _022262BC ; =ov13_02242AB0\n    ldr r3, [r3, r5]\n    lsr r5, r2, #8\n    lsl r5, r5, #0x18\n    lsr r6, r5, #0x16\n    ldr r5, _022262C0 ; =ov13_022426B0\n    ldr r7, [r5, r6]\n    ldr r5, [sp, #0x10]\n    lsr r5, r5, #0x18\n    lsl r6, r5, #2\n    ldr r5, _022262C4 ; =ov13_022446B0\n    ldr r5, [r5, r6]\n    str r5, [sp, #0x18]\n    lsr r5, r1, #0x10\n    lsl r5, r5, #0x18\n    lsr r6, r5, #0x16\n    ldr r5, _022262C8 ; =ov13_02244AB0\n    ldr r6, [r5, r6]\n    ldr r5, [sp, #0x18]\n    eor r5, r6\n    eor r5, r7\n    eor r3, r5\n    eor r3, r4\n    str r3, [sp, #0xc]\n    lsl r3, r2, #0x18\n    lsr r5, r3, #0x16\n    ldr r3, _022262BC ; =ov13_02242AB0\n    ldr r4, [r0, #4]\n    ldr r3, [r3, r5]\n    lsr r5, r1, #8\n    lsl r5, r5, #0x18\n    lsr r6, r5, #0x16\n    ldr r5, _022262C0 ; =ov13_022426B0\n    ldr r7, [r5, r6]\n    ldr r5, [sp, #0x44]\n    lsr r5, r5, #0x18\n    lsl r6, r5, #2\n    ldr r5, _022262C4 ; =ov13_022446B0\n    ldr r5, [r5, r6]\n    str r5, [sp, #0x1c]\n    ldr r5, [sp, #0x10]\n    lsr r5, r5, #0x10\n    lsl r5, r5, #0x18\n    lsr r6, r5, #0x16\n    ldr r5, _022262C8 ; =ov13_02244AB0\n    ldr r6, [r5, r6]\n    ldr r5, [sp, #0x1c]\n    eor r5, r6\n    eor r5, r7\n    eor r3, r5\n    eor r3, r4\n    str r3, [sp, #8]\n    lsl r3, r1, #0x18\n    lsr r4, r3, #0x16\n    ldr r3, _022262BC ; =ov13_02242AB0\n    ldr r6, [r0, #8]\n    ldr r5, [r3, r4]\n    ldr r3, [sp, #0x10]\n    lsr r1, r1, #0x18\n    lsr r3, r3, #8\n    lsl r3, r3, #0x18\n    lsr r4, r3, #0x16\n    ldr r3, _022262C0 ; =ov13_022426B0\n    ldr r3, [r3, r4]\n    str r3, [sp, #0x20]\n    lsr r3, r2, #0x18\n    lsl r4, r3, #2\n    ldr r3, _022262C4 ; =ov13_022446B0\n    lsr r2, r2, #0x10\n    ldr r7, [r3, r4]\n    ldr r3, [sp, #0x44]\n    lsl r2, r2, #0x18\n    lsr r3, r3, #0x10\n    lsl r3, r3, #0x18\n    lsr r4, r3, #0x16\n    ldr r3, _022262C8 ; =ov13_02244AB0\n    ldr r3, [r3, r4]\n    add r4, r7, #0\n    eor r4, r3\n    ldr r3, [sp, #0x20]\n    eor r3, r4\n    eor r3, r5\n    eor r3, r6\n    str r3, [sp, #0x40]\n    ldr r3, [sp, #0x10]\n    ldr r5, [r0, #0xc]\n    lsl r3, r3, #0x18\n    lsr r4, r3, #0x16\n    ldr r3, _022262BC ; =ov13_02242AB0\n    ldr r4, [r3, r4]\n    ldr r3, [sp, #0x44]\n    lsr r3, r3, #8\n    lsl r3, r3, #0x18\n    lsr r6, r3, #0x16\n    ldr r3, _022262C0 ; =ov13_022426B0\n    ldr r3, [r3, r6]\n    lsl r6, r1, #2\n    ldr r1, _022262C4 ; =ov13_022446B0\n    ldr r1, [r1, r6]\n    lsr r6, r2, #0x16\n    ldr r2, _022262C8 ; =ov13_02244AB0\n    ldr r2, [r2, r6]\n    add r6, r5, #0\n    eor r1, r2\n    eor r1, r3\n    eor r1, r4\n    eor r6, r1\n    b _02225F8A\n    ldr r3, [r0]\n    mov r6, #0xff\n    str r3, [sp, #0x24]\n    ldr r3, [sp, #0x44]\n    lsl r6, r6, #0x10\n    lsl r3, r3, #0x18\n    lsr r4, r3, #0x16\n    ldr r3, _022262CC ; =ov13_02242EB0\n    ldr r4, [r3, r4]\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x18\n    str r4, [sp, #0x28]\n    lsr r4, r2, #8\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #8\n    and r4, r5\n    str r4, [sp, #0x2c]\n    ldr r4, [sp, #0x10]\n    lsr r4, r4, #0x18\n    lsl r4, r4, #2\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #0x18\n    and r5, r4\n    lsr r4, r1, #0x10\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r4, [r3, r4]\n    and r4, r6\n    eor r5, r4\n    ldr r4, [sp, #0x2c]\n    eor r5, r4\n    ldr r4, [sp, #0x28]\n    eor r5, r4\n    ldr r4, [sp, #0x24]\n    eor r4, r5\n    ldr r5, [sp]\n    lsr r6, r4, #0x18\n    strb r6, [r5]\n    lsr r6, r4, #0x10\n    strb r6, [r5, #1]\n    lsr r6, r4, #8\n    strb r6, [r5, #2]\n    strb r4, [r5, #3]\n    ldr r4, [r0, #4]\n    mov r6, #0xff\n    str r4, [sp, #0x30]\n    lsl r4, r2, #0x18\n    lsr r4, r4, #0x16\n    ldr r4, [r3, r4]\n    lsl r6, r6, #0x10\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x18\n    str r4, [sp, #0x34]\n    lsr r4, r1, #8\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #8\n    and r4, r5\n    str r4, [sp, #0x38]\n    ldr r4, [sp, #0x44]\n    lsr r4, r4, #0x18\n    lsl r4, r4, #2\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #0x18\n    and r5, r4\n    ldr r4, [sp, #0x10]\n    lsr r4, r4, #0x10\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r4, [r3, r4]\n    and r4, r6\n    eor r5, r4\n    ldr r4, [sp, #0x38]\n    eor r5, r4\n    ldr r4, [sp, #0x34]\n    eor r5, r4\n    ldr r4, [sp, #0x30]\n    eor r4, r5\n    ldr r5, [sp]\n    lsr r6, r4, #0x18\n    strb r6, [r5, #4]\n    lsr r6, r4, #0x10\n    strb r6, [r5, #5]\n    lsr r6, r4, #8\n    strb r6, [r5, #6]\n    strb r4, [r5, #7]\n    ldr r4, [r0, #8]\n    str r4, [sp, #0x3c]\n    lsl r4, r1, #0x18\n    lsr r4, r4, #0x16\n    ldr r4, [r3, r4]\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x18\n    mov lr, r4\n    ldr r4, [sp, #0x10]\n    lsr r4, r4, #8\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #8\n    and r4, r5\n    mov ip, r4\n    lsr r4, r2, #0x18\n    lsl r4, r4, #2\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #0x18\n    add r6, r5, #0\n    and r6, r4\n    ldr r4, [sp, #0x44]\n    lsr r4, r4, #0x10\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x16\n    ldr r5, [r3, r4]\n    mov r4, #0xff\n    lsl r4, r4, #0x10\n    and r4, r5\n    eor r4, r6\n    mov r5, ip\n    eor r5, r4\n    mov r4, lr\n    eor r5, r4\n    ldr r4, [sp, #0x3c]\n    eor r4, r5\n    ldr r5, [sp]\n    lsr r6, r4, #0x18\n    strb r6, [r5, #8]\n    lsr r6, r4, #0x10\n    strb r6, [r5, #9]\n    lsr r6, r4, #8\n    strb r6, [r5, #0xa]\n    strb r4, [r5, #0xb]\n    ldr r5, [r0, #0xc]\n    ldr r0, [sp, #0x10]\n    lsr r2, r2, #0x10\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    ldr r0, [r3, r0]\n    lsr r1, r1, #0x18\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, [sp, #0x44]\n    lsl r2, r2, #0x18\n    lsr r0, r0, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    ldr r6, [r3, r0]\n    mov r0, #0xff\n    lsl r0, r0, #8\n    lsl r1, r1, #2\n    and r0, r6\n    mov r6, #0xff\n    lsr r2, r2, #0x16\n    ldr r1, [r3, r1]\n    ldr r3, [r3, r2]\n    mov r2, #0xff\n    lsl r6, r6, #0x18\n    lsl r2, r2, #0x10\n    and r1, r6\n    and r2, r3\n    eor r1, r2\n    eor r0, r1\n    eor r0, r4\n    eor r0, r5\n    ldr r1, [sp]\n    lsr r2, r0, #0x18\n    strb r2, [r1, #0xc]\n    lsr r2, r0, #0x10\n    strb r2, [r1, #0xd]\n    lsr r2, r0, #8\n    strb r2, [r1, #0xe]\n    strb r0, [r1, #0xf]\n    add sp, #0x48\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022262BC: .word ov13_02242AB0\n    _022262C0: .word ov13_022426B0\n    _022262C4: .word ov13_022446B0\n    _022262C8: .word ov13_02244AB0\n    _022262CC: .word ov13_02242EB0"
    );
    #endif
}

void ov13_022262D0(void) {
    /* Original at 0x022262D0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    str r1, [r0, #0x14]\n    str r1, [r0, #0x10]\n    ldr r1, _022262E8 ; =0x67452301\n    str r1, [r0]\n    ldr r1, _022262EC ; =0xEFCDAB89\n    str r1, [r0, #4]\n    ldr r1, _022262F0 ; =0x98BADCFE\n    str r1, [r0, #8]\n    ldr r1, _022262F4 ; =0x10325476\n    str r1, [r0, #0xc]\n    bx lr\n    _022262E8: .word 0x67452301\n    _022262EC: .word 0xEFCDAB89\n    _022262F0: .word 0x98BADCFE\n    _022262F4: .word 0x10325476"
    );
    #endif
}

void ov13_022262F8(void) {
    /* Original at 0x022262F8 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    ldr r1, [r5, #0x10]\n    add r6, r2, #0\n    lsr r2, r1, #3\n    mov r0, #0x3f\n    and r0, r2\n    lsl r2, r6, #3\n    add r1, r1, r2\n    str r1, [r5, #0x10]\n    cmp r1, r2\n    bhs _02226318\n    ldr r1, [r5, #0x14]\n    add r1, r1, #1\n    str r1, [r5, #0x14]\n    ldr r2, [r5, #0x14]\n    lsr r1, r6, #0x1d\n    add r1, r2, r1\n    str r1, [r5, #0x14]\n    mov r1, #0x40\n    sub r4, r1, r0\n    cmp r6, r4\n    blo _0222635E\n    add r1, r5, #0\n    add r1, #0x18\n    add r0, r1, r0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl ov13_02226C64\n    add r1, r5, #0\n    add r0, r5, #0\n    add r1, #0x18\n    bl ov13_022263C4\n    add r0, r4, #0\n    add r0, #0x3f\n    cmp r0, r6\n    bhs _0222635A\n    add r0, r5, #0\n    add r1, r7, r4\n    bl ov13_022263C4\n    add r4, #0x40\n    add r0, r4, #0\n    add r0, #0x3f\n    cmp r0, r6\n    blo _02226348\n    mov r0, #0\n    b _02226360\n    mov r4, #0\n    add r5, #0x18\n    add r0, r5, r0\n    add r1, r7, r4\n    sub r2, r6, r4\n    bl ov13_02226C64\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_02226370(void) {
    /* Original at 0x02226370 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, sp, #0\n    add r1, #0x10\n    mov r2, #8\n    bl ov13_02226C0C\n    ldr r0, [r4, #0x10]\n    lsr r1, r0, #3\n    mov r0, #0x3f\n    and r1, r0\n    cmp r1, #0x38\n    bhs _02226392\n    mov r0, #0x38\n    b _02226394\n    mov r0, #0x78\n    sub r2, r0, r1\n    ldr r1, _022263C0 ; =ov13_02245AD8\n    add r0, r4, #0\n    bl ov13_022262F8\n    add r0, r4, #0\n    add r1, sp, #0\n    mov r2, #8\n    bl ov13_022262F8\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x10\n    bl ov13_02226C0C\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x58\n    bl ov13_02226C7C\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _022263C0: .word ov13_02245AD8"
    );
    #endif
}

void ov13_022263C4(void) {
    /* Original at 0x022263C4 */
    /* Requires manual decompilation - 994 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x84\n    add r7, r0, #0\n    ldr r0, [r7]\n    mov r2, #0x40\n    str r0, [sp]\n    add r0, sp, #0x44\n    ldr r4, [r7, #4]\n    ldr r5, [r7, #8]\n    ldr r6, [r7, #0xc]\n    bl ov13_02226C38\n    ldr r0, [sp, #0x44]\n    add r1, r4, #0\n    str r0, [sp, #4]\n    mvn r0, r4\n    and r1, r5\n    and r0, r6\n    orr r1, r0\n    ldr r0, [sp, #4]\n    add r1, r0, r1\n    ldr r0, _0222679C ; =0x28955B88\n    sub r1, r1, r0\n    ldr r0, [sp]\n    add r0, r0, r1\n    lsl r1, r0, #7\n    lsr r0, r0, #0x19\n    orr r0, r1\n    add r3, r0, r4\n    ldr r0, [sp, #0x48]\n    mvn r1, r3\n    str r0, [sp, #8]\n    add r0, r3, #0\n    and r0, r4\n    and r1, r5\n    orr r1, r0\n    ldr r0, [sp, #8]\n    add r1, r0, r1\n    ldr r0, _022267A0 ; =0x173848AA\n    sub r0, r1, r0\n    add r0, r6, r0\n    lsl r1, r0, #0xc\n    lsr r0, r0, #0x14\n    orr r0, r1\n    add r2, r0, r3\n    ldr r0, [sp, #0x4c]\n    mvn r1, r2\n    str r0, [sp, #0xc]\n    add r0, r2, #0\n    and r0, r3\n    and r1, r4\n    orr r1, r0\n    ldr r0, [sp, #0xc]\n    add r1, r0, r1\n    ldr r0, _022267A4 ; =0x242070DB\n    add r0, r1, r0\n    add r0, r5, r0\n    lsl r1, r0, #0x11\n    lsr r0, r0, #0xf\n    orr r0, r1\n    add r1, r0, r2\n    ldr r0, [sp, #0x50]\n    mvn r5, r1\n    str r0, [sp, #0x10]\n    add r0, r1, #0\n    and r0, r2\n    and r5, r3\n    orr r5, r0\n    ldr r0, [sp, #0x10]\n    add r5, r0, r5\n    ldr r0, _022267A8 ; =0x3E423112\n    sub r0, r5, r0\n    add r0, r4, r0\n    lsl r4, r0, #0x16\n    lsr r0, r0, #0xa\n    orr r0, r4\n    ldr r4, [sp, #0x54]\n    add r0, r0, r1\n    str r4, [sp, #0x14]\n    add r4, r0, #0\n    mvn r5, r0\n    and r4, r1\n    and r5, r2\n    orr r5, r4\n    ldr r4, [sp, #0x14]\n    add r5, r4, r5\n    ldr r4, _022267AC ; =0x0A83F051\n    sub r4, r5, r4\n    add r3, r3, r4\n    lsl r4, r3, #7\n    lsr r3, r3, #0x19\n    orr r3, r4\n    ldr r4, [sp, #0x58]\n    add r3, r3, r0\n    str r4, [sp, #0x18]\n    add r4, r3, #0\n    mvn r5, r3\n    and r4, r0\n    and r5, r1\n    orr r5, r4\n    ldr r4, [sp, #0x18]\n    add r5, r4, r5\n    ldr r4, _022267B0 ; =0x4787C62A\n    add r4, r5, r4\n    add r2, r2, r4\n    lsl r4, r2, #0xc\n    lsr r2, r2, #0x14\n    orr r2, r4\n    ldr r4, [sp, #0x5c]\n    add r2, r2, r3\n    str r4, [sp, #0x1c]\n    add r4, r2, #0\n    mvn r5, r2\n    and r4, r3\n    and r5, r0\n    orr r5, r4\n    ldr r4, [sp, #0x1c]\n    add r5, r4, r5\n    ldr r4, _022267B4 ; =0x57CFB9ED\n    sub r4, r5, r4\n    add r1, r1, r4\n    lsl r4, r1, #0x11\n    lsr r1, r1, #0xf\n    orr r1, r4\n    ldr r4, [sp, #0x60]\n    add r1, r1, r2\n    str r4, [sp, #0x20]\n    add r4, r1, #0\n    mvn r5, r1\n    and r4, r2\n    and r5, r3\n    orr r5, r4\n    ldr r4, [sp, #0x20]\n    add r5, r4, r5\n    ldr r4, _022267B8 ; =0x02B96AFF\n    sub r4, r5, r4\n    add r0, r0, r4\n    lsl r4, r0, #0x16\n    lsr r0, r0, #0xa\n    orr r0, r4\n    ldr r4, [sp, #0x64]\n    add r0, r0, r1\n    str r4, [sp, #0x24]\n    add r4, r0, #0\n    mvn r5, r0\n    and r4, r1\n    and r5, r2\n    orr r5, r4\n    ldr r4, [sp, #0x24]\n    add r5, r4, r5\n    ldr r4, _022267BC ; =0x698098D8\n    add r4, r5, r4\n    add r3, r3, r4\n    lsl r4, r3, #7\n    lsr r3, r3, #0x19\n    orr r3, r4\n    ldr r4, [sp, #0x68]\n    add r3, r3, r0\n    str r4, [sp, #0x28]\n    add r4, r3, #0\n    mvn r5, r3\n    and r4, r0\n    and r5, r1\n    orr r5, r4\n    ldr r4, [sp, #0x28]\n    add r5, r4, r5\n    ldr r4, _022267C0 ; =0x74BB0851\n    sub r4, r5, r4\n    add r2, r2, r4\n    lsl r4, r2, #0xc\n    lsr r2, r2, #0x14\n    orr r2, r4\n    ldr r4, [sp, #0x6c]\n    add r2, r2, r3\n    str r4, [sp, #0x2c]\n    add r4, r2, #0\n    mvn r5, r2\n    and r4, r3\n    and r5, r0\n    orr r5, r4\n    ldr r4, [sp, #0x2c]\n    add r5, r4, r5\n    ldr r4, _022267C4 ; =0x0000A44F\n    sub r4, r5, r4\n    add r1, r1, r4\n    lsl r4, r1, #0x11\n    lsr r1, r1, #0xf\n    orr r1, r4\n    ldr r4, [sp, #0x70]\n    add r1, r1, r2\n    str r4, [sp, #0x30]\n    add r4, r1, #0\n    mvn r5, r1\n    and r4, r2\n    and r5, r3\n    orr r5, r4\n    ldr r4, [sp, #0x30]\n    add r5, r4, r5\n    ldr r4, _022267C8 ; =0x76A32842\n    sub r4, r5, r4\n    add r0, r0, r4\n    lsl r4, r0, #0x16\n    lsr r0, r0, #0xa\n    orr r0, r4\n    add r0, r0, r1\n    ldr r4, [sp, #0x74]\n    mvn r5, r0\n    str r4, [sp, #0x34]\n    add r4, r0, #0\n    and r4, r1\n    and r5, r2\n    orr r5, r4\n    ldr r4, [sp, #0x34]\n    add r5, r4, r5\n    ldr r4, _022267CC ; =0x6B901122\n    add r4, r5, r4\n    add r3, r3, r4\n    lsl r4, r3, #7\n    lsr r3, r3, #0x19\n    orr r3, r4\n    add r4, r3, r0\n    ldr r3, [sp, #0x78]\n    mvn r5, r4\n    str r3, [sp, #0x38]\n    add r3, r4, #0\n    and r3, r0\n    and r5, r1\n    orr r5, r3\n    ldr r3, [sp, #0x38]\n    add r5, r3, r5\n    ldr r3, _022267D0 ; =0x02678E6D\n    sub r3, r5, r3\n    add r2, r2, r3\n    lsl r3, r2, #0xc\n    lsr r2, r2, #0x14\n    orr r2, r3\n    add r3, r2, r4\n    mvn r2, r3\n    str r2, [sp, #0x3c]\n    ldr r2, [sp, #0x7c]\n    ldr r5, [sp, #0x3c]\n    str r2, [sp, #0x40]\n    add r2, r3, #0\n    and r2, r4\n    and r5, r0\n    orr r5, r2\n    ldr r2, [sp, #0x40]\n    add r5, r2, r5\n    ldr r2, _022267D4 ; =0x5986BC72\n    sub r2, r5, r2\n    add r1, r1, r2\n    lsl r2, r1, #0x11\n    lsr r1, r1, #0xf\n    orr r1, r2\n    add r2, r1, r3\n    ldr r1, [sp, #0x80]\n    add r5, r2, #0\n    mvn r6, r2\n    mov ip, r1\n    add r1, r6, #0\n    and r5, r3\n    and r1, r4\n    orr r5, r1\n    mov r1, ip\n    add r5, r1, r5\n    ldr r1, _022267D8 ; =0x49B40821\n    add r1, r5, r1\n    add r0, r0, r1\n    lsl r1, r0, #0x16\n    lsr r0, r0, #0xa\n    orr r0, r1\n    add r1, r0, r2\n    ldr r5, [sp, #0x3c]\n    add r0, r1, #0\n    and r0, r3\n    and r5, r2\n    orr r5, r0\n    ldr r0, [sp, #8]\n    add r5, r0, r5\n    ldr r0, _022267DC ; =0x09E1DA9E\n    sub r0, r5, r0\n    add r0, r4, r0\n    lsl r4, r0, #5\n    lsr r0, r0, #0x1b\n    orr r0, r4\n    add r0, r0, r1\n    add r4, r0, #0\n    add r5, r1, #0\n    and r4, r2\n    bic r5, r2\n    orr r5, r4\n    ldr r4, [sp, #0x1c]\n    add r5, r4, r5\n    ldr r4, _022267E0 ; =0x3FBF4CC0\n    sub r4, r5, r4\n    add r3, r3, r4\n    lsl r4, r3, #9\n    lsr r3, r3, #0x17\n    orr r3, r4\n    add r3, r3, r0\n    add r4, r3, #0\n    mvn r5, r1\n    and r4, r1\n    and r5, r0\n    orr r5, r4\n    ldr r4, [sp, #0x30]\n    add r5, r4, r5\n    ldr r4, _022267E4 ; =0x265E5A51\n    add r4, r5, r4\n    add r2, r2, r4\n    lsl r4, r2, #0xe\n    lsr r2, r2, #0x12\n    orr r2, r4\n    add r2, r2, r3\n    add r4, r2, #0\n    mvn r5, r0\n    and r4, r0\n    and r5, r3\n    orr r5, r4\n    ldr r4, [sp, #4]\n    add r5, r4, r5\n    ldr r4, _022267E8 ; =0x16493856\n    sub r4, r5, r4\n    add r1, r1, r4\n    lsl r4, r1, #0x14\n    lsr r1, r1, #0xc\n    orr r1, r4\n    add r1, r1, r2\n    add r4, r1, #0\n    mvn r5, r3\n    and r4, r3\n    and r5, r2\n    orr r5, r4\n    ldr r4, [sp, #0x18]\n    add r5, r4, r5\n    ldr r4, _022267EC ; =0x29D0EFA3\n    sub r4, r5, r4\n    add r0, r0, r4\n    lsl r4, r0, #5\n    lsr r0, r0, #0x1b\n    orr r0, r4\n    add r4, r0, r1\n    add r0, r4, #0\n    mvn r5, r2\n    and r0, r2\n    and r5, r1\n    orr r5, r0\n    ldr r0, [sp, #0x2c]\n    add r5, r0, r5\n    ldr r0, _022267F0 ; =0x02441453\n    add r0, r5, r0\n    add r0, r3, r0\n    lsl r3, r0, #9\n    lsr r0, r0, #0x17\n    orr r0, r3\n    add r3, r0, r4\n    add r0, r3, #0\n    mvn r5, r1\n    and r0, r1\n    and r5, r4\n    orr r5, r0\n    mov r0, ip\n    add r5, r0, r5\n    ldr r0, _022267F4 ; =0x275E197F\n    sub r0, r5, r0\n    add r0, r2, r0\n    lsl r2, r0, #0xe\n    lsr r0, r0, #0x12\n    orr r0, r2\n    add r0, r0, r3\n    add r2, r0, #0\n    mvn r5, r4\n    and r2, r4\n    and r5, r3\n    orr r5, r2\n    ldr r2, [sp, #0x14]\n    add r5, r2, r5\n    ldr r2, _022267F8 ; =0x182C0438\n    sub r2, r5, r2\n    add r1, r1, r2\n    lsl r2, r1, #0x14\n    lsr r1, r1, #0xc\n    orr r1, r2\n    add r5, r1, r0\n    add r1, r5, #0\n    mvn r2, r3\n    and r1, r3\n    and r2, r0\n    orr r2, r1\n    ldr r1, [sp, #0x28]\n    add r2, r1, r2\n    ldr r1, _022267FC ; =0x21E1CDE6\n    add r1, r2, r1\n    add r1, r4, r1\n    lsl r2, r1, #5\n    lsr r1, r1, #0x1b\n    orr r1, r2\n    add r2, r1, r5\n    add r1, r2, #0\n    mvn r4, r0\n    and r1, r0\n    and r4, r5\n    orr r4, r1\n    ldr r1, [sp, #0x40]\n    add r4, r1, r4\n    ldr r1, _02226800 ; =0x3CC8F82A\n    sub r1, r4, r1\n    add r1, r3, r1\n    lsl r3, r1, #9\n    lsr r1, r1, #0x17\n    orr r1, r3\n    add r1, r1, r2\n    add r3, r1, #0\n    mvn r4, r5\n    and r3, r5\n    and r4, r2\n    orr r4, r3\n    ldr r3, [sp, #0x10]\n    add r4, r3, r4\n    ldr r3, _02226804 ; =0x0B2AF279\n    sub r3, r4, r3\n    add r0, r0, r3\n    lsl r3, r0, #0xe\n    lsr r0, r0, #0x12\n    orr r0, r3\n    add r4, r0, r1\n    add r0, r4, #0\n    mvn r3, r2\n    and r0, r2\n    and r3, r1\n    orr r3, r0\n    ldr r0, [sp, #0x24]\n    add r3, r0, r3\n    ldr r0, _02226808 ; =0x455A14ED\n    add r0, r3, r0\n    add r0, r5, r0\n    lsl r3, r0, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r3\n    add r3, r0, r4\n    add r0, r3, #0\n    mvn r5, r1\n    and r0, r1\n    and r5, r4\n    orr r5, r0\n    ldr r0, [sp, #0x38]\n    add r5, r0, r5\n    ldr r0, _0222680C ; =0x561C16FB\n    sub r0, r5, r0\n    add r0, r2, r0\n    lsl r2, r0, #5\n    lsr r0, r0, #0x1b\n    orr r0, r2\n    add r0, r0, r3\n    add r2, r0, #0\n    mvn r5, r4\n    and r2, r4\n    and r5, r3\n    orr r5, r2\n    ldr r2, [sp, #0xc]\n    add r5, r2, r5\n    ldr r2, _02226810 ; =0x03105C08\n    sub r2, r5, r2\n    add r1, r1, r2\n    lsl r2, r1, #9\n    lsr r1, r1, #0x17\n    orr r1, r2\n    add r5, r1, r0\n    add r1, r5, #0\n    mvn r2, r3\n    and r1, r3\n    and r2, r0\n    orr r2, r1\n    ldr r1, [sp, #0x20]\n    add r2, r1, r2\n    ldr r1, _02226814 ; =0x676F02D9\n    add r1, r2, r1\n    add r1, r4, r1\n    lsl r2, r1, #0xe\n    lsr r1, r1, #0x12\n    orr r1, r2\n    add r2, r1, r5\n    add r1, r2, #0\n    mvn r4, r0\n    and r1, r0\n    and r4, r5\n    orr r4, r1\n    ldr r1, [sp, #0x34]\n    add r4, r1, r4\n    ldr r1, _02226818 ; =0x72D5B376\n    b _0222681C\n    nop\n    _0222679C: .word 0x28955B88\n    _022267A0: .word 0x173848AA\n    _022267A4: .word 0x242070DB\n    _022267A8: .word 0x3E423112\n    _022267AC: .word 0x0A83F051\n    _022267B0: .word 0x4787C62A\n    _022267B4: .word 0x57CFB9ED\n    _022267B8: .word 0x02B96AFF\n    _022267BC: .word 0x698098D8\n    _022267C0: .word 0x74BB0851\n    _022267C4: .word 0x0000A44F\n    _022267C8: .word 0x76A32842\n    _022267CC: .word 0x6B901122\n    _022267D0: .word 0x02678E6D\n    _022267D4: .word 0x5986BC72\n    _022267D8: .word 0x49B40821\n    _022267DC: .word 0x09E1DA9E\n    _022267E0: .word 0x3FBF4CC0\n    _022267E4: .word 0x265E5A51\n    _022267E8: .word 0x16493856\n    _022267EC: .word 0x29D0EFA3\n    _022267F0: .word 0x02441453\n    _022267F4: .word 0x275E197F\n    _022267F8: .word 0x182C0438\n    _022267FC: .word 0x21E1CDE6\n    _02226800: .word 0x3CC8F82A\n    _02226804: .word 0x0B2AF279\n    _02226808: .word 0x455A14ED\n    _0222680C: .word 0x561C16FB\n    _02226810: .word 0x03105C08\n    _02226814: .word 0x676F02D9\n    _02226818: .word 0x72D5B376\n    sub r1, r4, r1\n    add r1, r3, r1\n    lsl r3, r1, #0x14\n    lsr r1, r1, #0xc\n    orr r1, r3\n    add r1, r1, r2\n    add r3, r1, #0\n    eor r3, r2\n    add r4, r5, #0\n    eor r4, r3\n    ldr r3, [sp, #0x18]\n    add r4, r3, r4\n    ldr r3, _02226B8C ; =0x0005C6BE\n    sub r3, r4, r3\n    add r0, r0, r3\n    lsl r3, r0, #4\n    lsr r0, r0, #0x1c\n    orr r0, r3\n    add r4, r0, r1\n    add r0, r4, #0\n    eor r0, r1\n    add r3, r2, #0\n    eor r3, r0\n    ldr r0, [sp, #0x24]\n    add r3, r0, r3\n    ldr r0, _02226B90 ; =0x788E097F\n    sub r0, r3, r0\n    add r0, r5, r0\n    lsl r3, r0, #0xb\n    lsr r0, r0, #0x15\n    orr r0, r3\n    add r3, r0, r4\n    add r0, r3, #0\n    eor r0, r4\n    add r5, r1, #0\n    eor r5, r0\n    ldr r0, [sp, #0x30]\n    add r5, r0, r5\n    ldr r0, _02226B94 ; =0x6D9D6122\n    add r0, r5, r0\n    add r0, r2, r0\n    lsl r2, r0, #0x10\n    lsr r0, r0, #0x10\n    orr r0, r2\n    add r0, r0, r3\n    add r2, r0, #0\n    eor r2, r3\n    add r5, r4, #0\n    eor r5, r2\n    ldr r2, [sp, #0x40]\n    add r5, r2, r5\n    ldr r2, _02226B98 ; =0x021AC7F4\n    sub r2, r5, r2\n    add r1, r1, r2\n    lsl r2, r1, #0x17\n    lsr r1, r1, #9\n    orr r1, r2\n    add r5, r1, r0\n    add r1, r5, #0\n    eor r1, r0\n    add r2, r3, #0\n    eor r2, r1\n    ldr r1, [sp, #8]\n    add r2, r1, r2\n    ldr r1, _02226B9C ; =0x5B4115BC\n    sub r1, r2, r1\n    add r1, r4, r1\n    lsl r2, r1, #4\n    lsr r1, r1, #0x1c\n    orr r1, r2\n    add r2, r1, r5\n    add r1, r2, #0\n    eor r1, r5\n    add r4, r0, #0\n    eor r4, r1\n    ldr r1, [sp, #0x14]\n    add r4, r1, r4\n    ldr r1, _02226BA0 ; =0x4BDECFA9\n    add r1, r4, r1\n    add r1, r3, r1\n    lsl r3, r1, #0xb\n    lsr r1, r1, #0x15\n    orr r1, r3\n    add r1, r1, r2\n    add r3, r1, #0\n    eor r3, r2\n    add r4, r5, #0\n    eor r4, r3\n    ldr r3, [sp, #0x20]\n    add r4, r3, r4\n    ldr r3, _02226BA4 ; =0x0944B4A0\n    sub r3, r4, r3\n    add r0, r0, r3\n    lsl r3, r0, #0x10\n    lsr r0, r0, #0x10\n    orr r0, r3\n    add r4, r0, r1\n    add r0, r4, #0\n    eor r0, r1\n    add r3, r2, #0\n    eor r3, r0\n    ldr r0, [sp, #0x2c]\n    add r3, r0, r3\n    ldr r0, _02226BA8 ; =0x41404390\n    sub r0, r3, r0\n    add r0, r5, r0\n    lsl r3, r0, #0x17\n    lsr r0, r0, #9\n    orr r0, r3\n    add r3, r0, r4\n    add r0, r3, #0\n    eor r0, r4\n    add r5, r1, #0\n    eor r5, r0\n    ldr r0, [sp, #0x38]\n    add r5, r0, r5\n    ldr r0, _02226BAC ; =0x289B7EC6\n    add r0, r5, r0\n    add r0, r2, r0\n    lsl r2, r0, #4\n    lsr r0, r0, #0x1c\n    orr r0, r2\n    add r0, r0, r3\n    add r2, r0, #0\n    eor r2, r3\n    add r5, r4, #0\n    eor r5, r2\n    ldr r2, [sp, #4]\n    add r5, r2, r5\n    ldr r2, _02226BB0 ; =0x155ED806\n    sub r2, r5, r2\n    add r1, r1, r2\n    lsl r2, r1, #0xb\n    lsr r1, r1, #0x15\n    orr r1, r2\n    add r5, r1, r0\n    add r1, r5, #0\n    eor r1, r0\n    add r2, r3, #0\n    eor r2, r1\n    ldr r1, [sp, #0x10]\n    add r2, r1, r2\n    ldr r1, _02226BB4 ; =0x2B10CF7B\n    sub r1, r2, r1\n    add r1, r4, r1\n    lsl r2, r1, #0x10\n    lsr r1, r1, #0x10\n    orr r1, r2\n    add r2, r1, r5\n    add r1, r2, #0\n    eor r1, r5\n    add r4, r0, #0\n    eor r4, r1\n    ldr r1, [sp, #0x1c]\n    add r4, r1, r4\n    ldr r1, _02226BB8 ; =0x04881D05\n    add r1, r4, r1\n    add r1, r3, r1\n    lsl r3, r1, #0x17\n    lsr r1, r1, #9\n    orr r1, r3\n    add r1, r1, r2\n    add r3, r1, #0\n    eor r3, r2\n    add r4, r5, #0\n    eor r4, r3\n    ldr r3, [sp, #0x28]\n    add r4, r3, r4\n    ldr r3, _02226BBC ; =0x262B2FC7\n    sub r3, r4, r3\n    add r0, r0, r3\n    lsl r3, r0, #4\n    lsr r0, r0, #0x1c\n    orr r0, r3\n    add r4, r0, r1\n    add r0, r4, #0\n    eor r0, r1\n    add r3, r2, #0\n    eor r3, r0\n    ldr r0, [sp, #0x34]\n    add r3, r0, r3\n    ldr r0, _02226BC0 ; =0x1924661B\n    sub r0, r3, r0\n    add r0, r5, r0\n    lsl r3, r0, #0xb\n    lsr r0, r0, #0x15\n    orr r0, r3\n    add r3, r0, r4\n    add r0, r3, #0\n    eor r0, r4\n    add r5, r1, #0\n    eor r5, r0\n    mov r0, ip\n    add r5, r0, r5\n    ldr r0, _02226BC4 ; =0x1FA27CF8\n    add r0, r5, r0\n    add r0, r2, r0\n    lsl r2, r0, #0x10\n    lsr r0, r0, #0x10\n    orr r0, r2\n    add r0, r0, r3\n    add r2, r0, #0\n    eor r2, r3\n    add r5, r4, #0\n    eor r5, r2\n    ldr r2, [sp, #0xc]\n    add r5, r2, r5\n    ldr r2, _02226BC8 ; =0x3B53A99B\n    sub r2, r5, r2\n    add r1, r1, r2\n    lsl r2, r1, #0x17\n    lsr r1, r1, #9\n    orr r1, r2\n    add r5, r1, r0\n    mvn r1, r3\n    orr r1, r5\n    add r2, r0, #0\n    eor r2, r1\n    ldr r1, [sp, #4]\n    add r2, r1, r2\n    ldr r1, _02226BCC ; =0x0BD6DDBC\n    sub r1, r2, r1\n    add r1, r4, r1\n    lsl r2, r1, #6\n    lsr r1, r1, #0x1a\n    orr r1, r2\n    add r2, r1, r5\n    mvn r1, r0\n    orr r1, r2\n    add r4, r5, #0\n    eor r4, r1\n    ldr r1, [sp, #0x20]\n    add r4, r1, r4\n    ldr r1, _02226BD0 ; =0x432AFF97\n    add r1, r4, r1\n    add r1, r3, r1\n    lsl r3, r1, #0xa\n    lsr r1, r1, #0x16\n    orr r1, r3\n    add r1, r1, r2\n    mvn r3, r5\n    orr r3, r1\n    add r4, r2, #0\n    eor r4, r3\n    ldr r3, [sp, #0x40]\n    add r4, r3, r4\n    ldr r3, _02226BD4 ; =0x546BDC59\n    sub r3, r4, r3\n    add r0, r0, r3\n    lsl r3, r0, #0xf\n    lsr r0, r0, #0x11\n    orr r0, r3\n    add r4, r0, r1\n    mvn r0, r2\n    orr r0, r4\n    add r3, r1, #0\n    eor r3, r0\n    ldr r0, [sp, #0x18]\n    add r3, r0, r3\n    ldr r0, _02226BD8 ; =0x036C5FC7\n    sub r0, r3, r0\n    add r0, r5, r0\n    lsl r3, r0, #0x15\n    lsr r0, r0, #0xb\n    orr r0, r3\n    add r3, r0, r4\n    mvn r0, r1\n    orr r0, r3\n    add r5, r4, #0\n    eor r5, r0\n    ldr r0, [sp, #0x34]\n    add r5, r0, r5\n    ldr r0, _02226BDC ; =0x655B59C3\n    add r0, r5, r0\n    add r0, r2, r0\n    lsl r2, r0, #6\n    lsr r0, r0, #0x1a\n    orr r0, r2\n    add r0, r0, r3\n    mvn r2, r4\n    orr r2, r0\n    add r5, r3, #0\n    eor r5, r2\n    ldr r2, [sp, #0x10]\n    add r5, r2, r5\n    ldr r2, _02226BE0 ; =0x70F3336E\n    sub r2, r5, r2\n    add r1, r1, r2\n    lsl r2, r1, #0xa\n    lsr r1, r1, #0x16\n    orr r1, r2\n    add r5, r1, r0\n    mvn r1, r3\n    orr r1, r5\n    add r2, r0, #0\n    eor r2, r1\n    ldr r1, [sp, #0x2c]\n    add r2, r1, r2\n    ldr r1, _02226BE4 ; =0x00100B83\n    sub r1, r2, r1\n    add r1, r4, r1\n    lsl r2, r1, #0xf\n    lsr r1, r1, #0x11\n    orr r1, r2\n    add r2, r1, r5\n    mvn r1, r0\n    orr r1, r2\n    add r4, r5, #0\n    eor r4, r1\n    ldr r1, [sp, #8]\n    add r4, r1, r4\n    ldr r1, _02226BE8 ; =0x7A7BA22F\n    sub r1, r4, r1\n    add r1, r3, r1\n    lsl r3, r1, #0x15\n    lsr r1, r1, #0xb\n    orr r1, r3\n    add r1, r1, r2\n    mvn r3, r5\n    orr r3, r1\n    add r4, r2, #0\n    eor r4, r3\n    ldr r3, [sp, #0x24]\n    add r4, r3, r4\n    ldr r3, _02226BEC ; =0x6FA87E4F\n    add r3, r4, r3\n    add r0, r0, r3\n    lsl r3, r0, #6\n    lsr r0, r0, #0x1a\n    orr r0, r3\n    add r3, r0, r1\n    mvn r0, r2\n    orr r0, r3\n    eor r0, r1\n    mov r4, ip\n    add r4, r4, r0\n    ldr r0, _02226BF0 ; =0x01D31920\n    sub r0, r4, r0\n    add r0, r5, r0\n    lsl r4, r0, #0xa\n    lsr r0, r0, #0x16\n    orr r0, r4\n    add r0, r0, r3\n    mvn r4, r1\n    orr r4, r0\n    add r5, r3, #0\n    eor r5, r4\n    ldr r4, [sp, #0x1c]\n    add r5, r4, r5\n    ldr r4, _02226BF4 ; =0x5CFEBCEC\n    sub r4, r5, r4\n    add r2, r2, r4\n    lsl r4, r2, #0xf\n    lsr r2, r2, #0x11\n    orr r2, r4\n    add r4, r2, r0\n    mvn r2, r3\n    orr r2, r4\n    add r5, r0, #0\n    eor r5, r2\n    ldr r2, [sp, #0x38]\n    add r5, r2, r5\n    ldr r2, _02226BF8 ; =0x4E0811A1\n    add r2, r5, r2\n    add r1, r1, r2\n    lsl r2, r1, #0x15\n    lsr r1, r1, #0xb\n    orr r1, r2\n    add r2, r1, r4\n    mvn r1, r0\n    orr r1, r2\n    add r5, r4, #0\n    eor r5, r1\n    ldr r1, [sp, #0x14]\n    add r5, r1, r5\n    ldr r1, _02226BFC ; =0x08AC817E\n    sub r1, r5, r1\n    add r1, r3, r1\n    lsl r3, r1, #6\n    lsr r1, r1, #0x1a\n    orr r1, r3\n    add r1, r1, r2\n    mvn r3, r4\n    orr r3, r1\n    add r5, r2, #0\n    eor r5, r3\n    ldr r3, [sp, #0x30]\n    add r5, r3, r5\n    ldr r3, _02226C00 ; =0x42C50DCB\n    sub r3, r5, r3\n    add r0, r0, r3\n    lsl r3, r0, #0xa\n    lsr r0, r0, #0x16\n    orr r0, r3\n    add r5, r0, r1\n    mvn r0, r2\n    orr r0, r5\n    add r3, r1, #0\n    eor r3, r0\n    ldr r0, [sp, #0xc]\n    add r3, r0, r3\n    ldr r0, _02226C04 ; =0x2AD7D2BB\n    add r0, r3, r0\n    add r0, r4, r0\n    lsl r3, r0, #0xf\n    lsr r0, r0, #0x11\n    orr r0, r3\n    add r3, r0, r5\n    mvn r0, r1\n    orr r0, r3\n    add r4, r5, #0\n    eor r4, r0\n    ldr r0, [sp, #0x28]\n    add r4, r0, r4\n    ldr r0, _02226C08 ; =0x14792C6F\n    sub r0, r4, r0\n    add r0, r2, r0\n    lsl r2, r0, #0x15\n    lsr r0, r0, #0xb\n    orr r0, r2\n    ldr r2, [r7]\n    add r0, r0, r3\n    add r1, r2, r1\n    str r1, [r7]\n    ldr r1, [r7, #4]\n    mov r2, #0x40\n    add r0, r1, r0\n    str r0, [r7, #4]\n    ldr r0, [r7, #8]\n    mov r1, #0\n    add r0, r0, r3\n    str r0, [r7, #8]\n    ldr r0, [r7, #0xc]\n    add r0, r0, r5\n    str r0, [r7, #0xc]\n    add r0, sp, #0x44\n    bl ov13_02226C7C\n    add sp, #0x84\n    pop {r4, r5, r6, r7, pc}\n    _02226B8C: .word 0x0005C6BE\n    _02226B90: .word 0x788E097F\n    _02226B94: .word 0x6D9D6122\n    _02226B98: .word 0x021AC7F4\n    _02226B9C: .word 0x5B4115BC\n    _02226BA0: .word 0x4BDECFA9\n    _02226BA4: .word 0x0944B4A0\n    _02226BA8: .word 0x41404390\n    _02226BAC: .word 0x289B7EC6\n    _02226BB0: .word 0x155ED806\n    _02226BB4: .word 0x2B10CF7B\n    _02226BB8: .word 0x04881D05\n    _02226BBC: .word 0x262B2FC7\n    _02226BC0: .word 0x1924661B\n    _02226BC4: .word 0x1FA27CF8\n    _02226BC8: .word 0x3B53A99B\n    _02226BCC: .word 0x0BD6DDBC\n    _02226BD0: .word 0x432AFF97\n    _02226BD4: .word 0x546BDC59\n    _02226BD8: .word 0x036C5FC7\n    _02226BDC: .word 0x655B59C3\n    _02226BE0: .word 0x70F3336E\n    _02226BE4: .word 0x00100B83\n    _02226BE8: .word 0x7A7BA22F\n    _02226BEC: .word 0x6FA87E4F\n    _02226BF0: .word 0x01D31920\n    _02226BF4: .word 0x5CFEBCEC\n    _02226BF8: .word 0x4E0811A1\n    _02226BFC: .word 0x08AC817E\n    _02226C00: .word 0x42C50DCB\n    _02226C04: .word 0x2AD7D2BB\n    _02226C08: .word 0x14792C6F"
    );
    #endif
}

void ov13_02226C0C(void) {
    /* Original at 0x02226C0C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r4, #0\n    cmp r2, #0\n    bls _02226C34\n    ldr r5, [r1]\n    add r3, r0, r4\n    strb r5, [r0, r4]\n    ldr r5, [r1]\n    add r4, r4, #4\n    lsr r5, r5, #8\n    strb r5, [r3, #1]\n    ldr r5, [r1]\n    lsr r5, r5, #0x10\n    strb r5, [r3, #2]\n    ldr r5, [r1]\n    add r1, r1, #4\n    lsr r5, r5, #0x18\n    strb r5, [r3, #3]\n    cmp r4, r2\n    blo _02226C14\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov13_02226C38(void) {
    /* Original at 0x02226C38 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    mov r7, #0\n    cmp r2, #0\n    bls _02226C5E\n    add r6, r1, r7\n    ldrb r3, [r6, #3]\n    lsl r5, r3, #0x18\n    ldrb r3, [r6, #2]\n    ldrb r6, [r6, #1]\n    lsl r4, r3, #0x10\n    ldrb r3, [r1, r7]\n    lsl r6, r6, #8\n    add r7, r7, #4\n    orr r3, r6\n    orr r3, r4\n    orr r3, r5\n    stmia r0!, {r3}\n    cmp r7, r2\n    blo _02226C40\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov13_02226C64(void) {
    /* Original at 0x02226C64 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r4, #0\n    cmp r2, #0\n    bls _02226C76\n    ldrb r3, [r1, r4]\n    strb r3, [r0, r4]\n    add r4, r4, #1\n    cmp r4, r2\n    blo _02226C6C\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov13_02226C7C(void) {
    /* Original at 0x02226C7C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    cmp r2, #0\n    bls _02226C90\n    lsl r1, r1, #0x18\n    asr r1, r1, #0x18\n    add r3, r3, #1\n    strb r1, [r0]\n    add r0, r0, #1\n    cmp r3, r2\n    blo _02226C86\n    bx lr"
    );
    #endif
}

void ov13_02226C94(void) {
    ov13_022262D0();
    ov13_022262F8(r4, r6);
    ov13_02226370(r5);
}

void ov13_02226CBC(void) {
    /* Original at 0x02226CBC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl OS_GetTick\n    lsr r2, r0, #0x1a\n    lsl r1, r1, #6\n    orr r1, r2\n    ldr r2, _02226CD4 ; =0x000082EA\n    lsl r0, r0, #6\n    mov r3, #0\n    bl _ll_udiv\n    pop {r3, pc}\n    _02226CD4: .word 0x000082EA"
    );
    #endif
}

void ov13_02226CD8(void) {
    /* Original at 0x02226CD8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mul r4, r1\n    ldr r1, _02226CF8 ; =ov13_0224DF30\n    add r0, r4, #0\n    ldr r1, [r1, #4]\n    blx r1\n    add r5, r0, #0\n    beq _02226CF2\n    mov r1, #0\n    add r2, r4, #0\n    bl memset\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02226CF8: .word ov13_0224DF30"
    );
    #endif
}

void ov13_02226CFC(void) {
    /* Original at 0x02226CFC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02226D08 ; =ov13_0224DF30\n    ldr r1, [r1, #0xc]\n    blx r1\n    pop {r3, pc}\n    nop\n    _02226D08: .word ov13_0224DF30"
    );
    #endif
}

void ov13_02226D0C(void) {
    /* Original at 0x02226D0C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    lsl r1, r1, #0x18\n    lsr r3, r1, #0x18\n    mov r1, #0xf0\n    and r1, r3\n    asr r5, r1, #4\n    mov r1, #0xf\n    add r2, r0, #0\n    mov r4, #0\n    and r1, r3\n    cmp r5, #9\n    bgt _02226D28\n    add r5, #0x30\n    b _02226D2A\n    add r5, #0x37\n    add r4, r4, #1\n    strb r5, [r2]\n    add r2, r2, #1\n    add r5, r1, #0\n    cmp r4, #2\n    blt _02226D20\n    mov r1, #0\n    strb r1, [r2]\n    sub r0, r2, r0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov13_02226D40(void) {
    /* Original at 0x02226D40 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    add r6, r1, #0\n    add r4, r0, #0\n    mov r5, #0\n    mov r7, #0x3a\n    mov r1, #0\n    ldrsb r1, [r6, r1]\n    add r0, r4, #0\n    add r6, r6, #1\n    bl ov13_02226D0C\n    add r0, r4, r0\n    add r4, r0, #0\n    cmp r5, #5\n    bge _02226D64\n    add r4, r0, #1\n    strb r7, [r0]\n    add r5, r5, #1\n    cmp r5, #6\n    blt _02226D4C\n    mov r0, #0\n    strb r0, [r4]\n    ldr r0, [sp]\n    sub r0, r4, r0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov13_02226D74(void) {
    /* Original at 0x02226D74 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r0, _02226E44 ; =ov13_0224DF30\n    ldr r0, [r0, #0x38]\n    cmp r0, #1\n    blt _02226D8E\n    cmp r0, #5\n    bgt _02226D8E\n    mov r0, #9\n    add sp, #8\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    ldr r5, _02226E48 ; =ov13_02245A58\n    ldr r0, _02226E44 ; =ov13_0224DF30\n    mov r6, #7\n    str r1, [r5, #0x10]\n    str r6, [r0, #0x38]\n    str r2, [r0, #0x7c]\n    ldr r2, [sp, #0x18]\n    str r3, [r0, #4]\n    str r2, [r0, #0xc]\n    ldr r0, [sp, #0x1c]\n    str r0, [r5, #8]\n    add r0, r1, #0\n    bl ov13_02223EE0\n    mov r2, #1\n    ldr r1, _02226E44 ; =ov13_0224DF30\n    cmp r0, #0\n    str r2, [r1, #0x74]\n    bge _02226DBA\n    str r0, [r1, #0x78]\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    ldr r0, [r0, #8]\n    ldr r1, [r1, #4]\n    blx r1\n    ldr r1, _02226E44 ; =ov13_0224DF30\n    cmp r0, #0\n    str r0, [r1, #0x30]\n    bne _02226DD4\n    add r0, r6, #0\n    sub r0, #8\n    str r0, [r1, #0x78]\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    bl OS_IsThreadAvailable\n    cmp r0, #1\n    beq _02226DE8\n    add r0, r6, #0\n    ldr r1, _02226E44 ; =ov13_0224DF30\n    sub r0, #0x10\n    str r0, [r1, #0x78]\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    ldr r3, [r0, #8]\n    ldr r0, _02226E4C ; =ov13_0224DFDC\n    str r3, [sp]\n    str r4, [sp, #4]\n    ldr r4, _02226E44 ; =ov13_0224DF30\n    ldr r1, _02226E50 ; =ov13_02225320\n    ldr r5, [r4, #0x30]\n    mov r4, #7\n    bic r3, r4\n    mov r2, #0\n    add r3, r5, r3\n    bl OS_CreateThread\n    ldr r0, _02226E44 ; =ov13_0224DF30\n    mov r1, #1\n    str r1, [r0, #0x38]\n    bl ov13_02226CBC\n    ldr r1, _02226E54 ; =0x0000EA60\n    ldr r5, _02226E58 ; =ov13_0224E09C\n    add r1, r0, r1\n    ldr r0, _02226E48 ; =ov13_02245A58\n    add r4, r6, #0\n    str r1, [r0, #0xc]\n    mov r0, #0\n    ldr r1, _02226E44 ; =ov13_0224DF30\n    add r2, r0, #0\n    str r0, [r1, #0x10]\n    add r1, r0, #0\n    add r3, r0, #0\n    stmia r5!, {r0, r1, r2, r3}\n    stmia r5!, {r0, r1, r2, r3}\n    sub r4, r4, #1\n    bne _02226E26\n    stmia r5!, {r0, r1}\n    bl ov13_02226F3C\n    ldr r0, _02226E4C ; =ov13_0224DFDC\n    bl OS_WakeupThreadDirect\n    ldr r1, _02226E44 ; =ov13_0224DF30\n    mov r0, #1\n    str r0, [r1, #0x64]\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _02226E44: .word ov13_0224DF30\n    _02226E48: .word ov13_02245A58\n    _02226E4C: .word ov13_0224DFDC\n    _02226E50: .word ov13_02225320\n    _02226E54: .word 0x0000EA60\n    _02226E58: .word ov13_0224E09C"
    );
    #endif
}

void ov13_02226E5C(void) {
    /* Original at 0x02226E5C */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r4, _02226EE8 ; =ov13_0224DF30\n    ldr r0, [r4, #0x64]\n    cmp r0, #0\n    beq _02226ECC\n    ldr r6, [r4, #0x38]\n    mov r0, #1\n    str r0, [r4, #0x10]\n    mov r5, #0x64\n    b _02226E76\n    add r0, r5, #0\n    bl OS_Sleep\n    ldr r0, [r4, #0x38]\n    cmp r0, #1\n    blt _02226E80\n    cmp r0, #5\n    ble _02226E70\n    mov r0, #0x7d\n    lsl r0, r0, #2\n    bl OS_Sleep\n    ldr r0, _02226EEC ; =ov13_0224DFDC\n    bl OS_IsThreadTerminated\n    cmp r0, #0\n    bne _02226EAA\n    ldr r4, _02226EEC ; =ov13_0224DFDC\n    add r0, r4, #0\n    bl OS_WakeupThreadDirect\n    add r0, r4, #0\n    bl OS_JoinThread\n    add r0, r4, #0\n    bl OS_IsThreadTerminated\n    cmp r0, #0\n    beq _02226E94\n    ldr r1, _02226EE8 ; =ov13_0224DF30\n    ldr r0, [r1, #0x30]\n    cmp r0, #0\n    beq _02226EBC\n    ldr r1, [r1, #0xc]\n    blx r1\n    ldr r0, _02226EE8 ; =ov13_0224DF30\n    mov r1, #0\n    str r1, [r0, #0x30]\n    ldr r0, _02226EE8 ; =ov13_0224DF30\n    mov r1, #0\n    str r1, [r0, #0x64]\n    ldr r0, [r0, #0x38]\n    cmp r6, r0\n    beq _02226ECC\n    bl ov13_02226F3C\n    ldr r0, _02226EE8 ; =ov13_0224DF30\n    ldr r0, [r0, #0x74]\n    cmp r0, #0\n    ble _02226EE0\n    bl ov13_02223F84\n    ldr r1, _02226EE8 ; =ov13_0224DF30\n    mov r2, #0\n    str r2, [r1, #0x74]\n    pop {r4, r5, r6, pc}\n    mov r0, #9\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    nop\n    _02226EE8: .word ov13_0224DF30\n    _02226EEC: .word ov13_0224DFDC"
    );
    #endif
}

void ov13_02226EF0(void) {
    /* Original at 0x02226EF0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02226F20 ; =ov13_0224DF30\n    ldr r0, [r0, #0x38]\n    str r0, [r4]\n    ldr r0, _02226F24 ; =ov13_02245A58\n    ldr r1, [r0, #0xc]\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    bne _02226F08\n    b _02226F12\n    bl ov13_02226CBC\n    ldr r1, _02226F24 ; =ov13_02245A58\n    ldr r1, [r1, #0xc]\n    sub r0, r1, r0\n    str r0, [r4, #4]\n    ldr r0, _02226F20 ; =ov13_0224DF30\n    ldr r0, [r0, #0x78]\n    str r0, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _02226F20: .word ov13_0224DF30\n    _02226F24: .word ov13_02245A58"
    );
    #endif
}

void ov13_02226F28(void) {
    memcpy();
}

void ov13_02226F3C(void) {
    ov13_02226EF0();
}
