/* Decompiled from asm/text_0205B4EC.s */
#include "global.h"

void sub_0205B4EC(void) {
    /* Original at 0x0205B4EC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #1\n    bne _0205B4F8\n    bl ResetAllTextPrinters\n    mov r1, #0x1a\n    add r0, r4, #0\n    lsl r1, r1, #4\n    mov r2, #4\n    bl LoadFontPal0\n    mov r1, #6\n    add r0, r4, #0\n    lsl r1, r1, #6\n    mov r2, #4\n    bl LoadFontPal1\n    pop {r4, pc}"
    );
    #endif
}

void sub_0205B514(void) {
    /* Original at 0x0205B514 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x14\n    cmp r2, #3\n    bne _0205B53C\n    mov r2, #0x13\n    str r2, [sp]\n    mov r2, #0x1b\n    str r2, [sp, #4]\n    mov r2, #4\n    str r2, [sp, #8]\n    mov r2, #0xc\n    str r2, [sp, #0xc]\n    ldr r2, _0205B560 ; =0x00000237\n    mov r3, #2\n    str r2, [sp, #0x10]\n    mov r2, #3\n    bl AddWindowParameterized\n    add sp, #0x14\n    pop {pc}\n    mov r2, #0x13\n    str r2, [sp]\n    mov r2, #0x1b\n    str r2, [sp, #4]\n    mov r2, #4\n    str r2, [sp, #8]\n    mov r2, #0xc\n    str r2, [sp, #0xc]\n    mov r2, #0x65\n    lsl r2, r2, #2\n    str r2, [sp, #0x10]\n    mov r2, #7\n    mov r3, #2\n    bl AddWindowParameterized\n    add sp, #0x14\n    pop {pc}\n    nop\n    _0205B560: .word 0x00000237"
    );
    #endif
}

void sub_0205B564(void) {
    /* Original at 0x0205B564 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    bl GetWindowBgId\n    add r6, r0, #0\n    add r0, r4, #0\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    ldr r2, _0205B5A4 ; =0x000003E2\n    add r1, r6, #0\n    mov r3, #0xa\n    bl LoadUserFrameGfx2\n    add r0, r5, #0\n    bl sub_0205B5A8\n    ldr r2, _0205B5A4 ; =0x000003E2\n    add r0, r5, #0\n    mov r1, #0\n    mov r3, #0xa\n    bl DrawFrameAndWindow2\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0205B5A4: .word 0x000003E2"
    );
    #endif
}

void sub_0205B5A8(void) {
    FillWindowPixelBuffer();
}

void sub_0205B5B4(void) {
    /* Original at 0x0205B5B4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r3, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    mov r0, #0\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    add r0, r6, #0\n    bl Options_GetTextFrameDelay\n    mov r3, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r4, #0\n    str r3, [sp, #8]\n    bl AddTextPrinterParameterized\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_0205B5EC(void) {
    /* Original at 0x0205B5EC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, sp, #0x10\n    ldrb r0, [r0, #0x10]\n    add r6, r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    bl TextFlags_SetCanABSpeedUpPrint\n    ldr r0, [sp, #0x24]\n    bl TextFlags_SetAutoScrollParam\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r6, #0\n    str r3, [sp, #8]\n    bl AddTextPrinterParameterized\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void IsPrintFinished(void) {
    TextPrinterCheckActive(0, 1);
}

void sub_0205B63C(void) {
    /* Original at 0x0205B63C */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    cmp r2, #1\n    bhi _0205B64A\n    mov r4, #9\n    mov r5, #0x14\n    b _0205B64E\n    mov r4, #2\n    mov r5, #0x1b\n    cmp r3, #3\n    bne _0205B676\n    mov r2, #0x13\n    str r2, [sp]\n    lsl r2, r5, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp, #4]\n    mov r2, #4\n    str r2, [sp, #8]\n    mov r2, #9\n    str r2, [sp, #0xc]\n    ldr r2, _0205B69C ; =0x00000237\n    lsl r3, r4, #0x18\n    str r2, [sp, #0x10]\n    mov r2, #3\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add sp, #0x14\n    pop {r4, r5, pc}\n    mov r2, #0x13\n    str r2, [sp]\n    lsl r2, r5, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp, #4]\n    mov r2, #4\n    str r2, [sp, #8]\n    mov r2, #9\n    str r2, [sp, #0xc]\n    mov r2, #0x65\n    lsl r2, r2, #2\n    lsl r3, r4, #0x18\n    str r2, [sp, #0x10]\n    mov r2, #7\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add sp, #0x14\n    pop {r4, r5, pc}\n    _0205B69C: .word 0x00000237"
    );
    #endif
}

void sub_0205B6A0(void) {
    /* Original at 0x0205B6A0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    bl GetWindowBgId\n    add r1, r0, #0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    str r6, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    ldr r2, _0205B6E4 ; =0x000002A3\n    mov r3, #9\n    bl sub_0200EC0C\n    add r0, r5, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r2, _0205B6E4 ; =0x000002A3\n    add r0, r5, #0\n    mov r1, #0\n    mov r3, #9\n    bl DrawFrameAndWindow3\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _0205B6E4: .word 0x000002A3"
    );
    #endif
}
