/* Decompiled from asm/text_0205B4EC.s */
#include "global.h"

void sub_0205B4EC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #1
    // bne _0205B4F8
    // bl ResetAllTextPrinters
    // mov r1, #0x1a
    // add r0, r4, #0
    // lsl r1, r1, #4
    // mov r2, #4
    // bl LoadFontPal0
    // mov r1, #6
    // add r0, r4, #0
    // lsl r1, r1, #6
    // mov r2, #4
    // bl LoadFontPal1
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0205B514(void) {
    // push {lr}
    // sub sp, #0x14
    // cmp r2, #3
    // bne _0205B53C
    // mov r2, #0x13
    // str r2, [sp]
    // mov r2, #0x1b
    // str r2, [sp, #4]
    // mov r2, #4
    // str r2, [sp, #8]
    // mov r2, #0xc
    // str r2, [sp, #0xc]
    // ldr r2, _0205B560 ; =0x00000237
    // mov r3, #2
    // str r2, [sp, #0x10]
    // mov r2, #3
    // bl AddWindowParameterized
    // add sp, #0x14
    // pop {pc}
    // mov r2, #0x13
    // str r2, [sp]
    // mov r2, #0x1b
    // str r2, [sp, #4]
    // mov r2, #4
    // str r2, [sp, #8]
    // mov r2, #0xc
    // str r2, [sp, #0xc]
    // mov r2, #0x65
    // lsl r2, r2, #2
    // str r2, [sp, #0x10]
    // mov r2, #7
    // mov r3, #2
    // bl AddWindowParameterized
    // add sp, #0x14
    // pop {pc}
    // nop
    // _0205B560: .word 0x00000237
    // TODO: decompile
}


void sub_0205B564(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r5, r0, #0
    // bl GetWindowBgId
    // add r6, r0, #0
    // add r0, r4, #0
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // ldr r2, _0205B5A4 ; =0x000003E2
    // add r1, r6, #0
    // mov r3, #0xa
    // bl LoadUserFrameGfx2
    // add r0, r5, #0
    // bl sub_0205B5A8
    // ldr r2, _0205B5A4 ; =0x000003E2
    // add r0, r5, #0
    // mov r1, #0
    // mov r3, #0xa
    // bl DrawFrameAndWindow2
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _0205B5A4: .word 0x000003E2
    // TODO: decompile
}


void sub_0205B5A8(void) {
    FillWindowPixelBuffer();
}


void sub_0205B5B4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r3, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl TextFlags_SetCanABSpeedUpPrint
    // mov r0, #0
    // bl TextFlags_SetAutoScrollParam
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // add r0, r6, #0
    // bl Options_GetTextFrameDelay
    // mov r3, #0
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r1, #1
    // add r2, r4, #0
    // str r3, [sp, #8]
    // bl AddTextPrinterParameterized
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void sub_0205B5EC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, sp, #0x10
    // ldrb r0, [r0, #0x10]
    // add r6, r1, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // bl TextFlags_SetCanABSpeedUpPrint
    // ldr r0, [sp, #0x24]
    // bl TextFlags_SetAutoScrollParam
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r3, #0
    // str r3, [sp]
    // str r4, [sp, #4]
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r6, #0
    // str r3, [sp, #8]
    // bl AddTextPrinterParameterized
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void IsPrintFinished(void) {
    TextPrinterCheckActive(0, 1);
}


void sub_0205B63C(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // cmp r2, #1
    // bhi _0205B64A
    // mov r4, #9
    // mov r5, #0x14
    // b _0205B64E
    // mov r4, #2
    // mov r5, #0x1b
    // cmp r3, #3
    // bne _0205B676
    // mov r2, #0x13
    // str r2, [sp]
    // lsl r2, r5, #0x18
    // lsr r2, r2, #0x18
    // str r2, [sp, #4]
    // mov r2, #4
    // str r2, [sp, #8]
    // mov r2, #9
    // str r2, [sp, #0xc]
    // ldr r2, _0205B69C ; =0x00000237
    // lsl r3, r4, #0x18
    // str r2, [sp, #0x10]
    // mov r2, #3
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add sp, #0x14
    // pop {r4, r5, pc}
    // mov r2, #0x13
    // str r2, [sp]
    // lsl r2, r5, #0x18
    // lsr r2, r2, #0x18
    // str r2, [sp, #4]
    // mov r2, #4
    // str r2, [sp, #8]
    // mov r2, #9
    // str r2, [sp, #0xc]
    // mov r2, #0x65
    // lsl r2, r2, #2
    // lsl r3, r4, #0x18
    // str r2, [sp, #0x10]
    // mov r2, #7
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add sp, #0x14
    // pop {r4, r5, pc}
    // _0205B69C: .word 0x00000237
    // TODO: decompile
}


void sub_0205B6A0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // bl GetWindowBgId
    // add r1, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // str r6, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // ldr r2, _0205B6E4 ; =0x000002A3
    // mov r3, #9
    // bl sub_0200EC0C
    // add r0, r5, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r2, _0205B6E4 ; =0x000002A3
    // add r0, r5, #0
    // mov r1, #0
    // mov r3, #9
    // bl DrawFrameAndWindow3
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _0205B6E4: .word 0x000002A3
    // TODO: decompile
}

