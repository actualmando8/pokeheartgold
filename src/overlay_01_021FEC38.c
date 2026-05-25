/* Decompiled from asm/overlay_01_021FEC38.s */
#include "global.h"

void ov01_021FEC38(void) {
    ov01_021F1430(0x3c, 0, 0);
    ov01_021FEC64();
}


void ov01_021FEC54(void) {
    ov01_021FEC8C();
    ov01_021F1448(r4);
}


void ov01_021FEC64(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r2, #0
    // add r4, r0, #0
    // str r2, [sp]
    // ldr r0, [r4]
    // add r1, r4, #4
    // mov r3, #0x1d
    // bl ov01_021F19F4
    // mov r2, #0
    // str r2, [sp]
    // ldr r0, [r4]
    // add r4, #0x18
    // add r1, r4, #0
    // mov r3, #0x86
    // bl ov01_021F1A18
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_021FEC8C(void) {
    sub_02069784((r0 + 4));
    sub_020698D0(r4);
}


void ov01_021FECA0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r6, r1, #0
    // mov r1, #2
    // lsl r1, r1, #8
    // add r5, r0, #0
    // add r4, r2, #0
    // add r7, r3, #0
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // beq _021FED0A
    // add r0, r5, #0
    // bl ov01_021F146C
    // mov r1, #6
    // str r0, [sp, #8]
    // bl ov01_021F1450
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // add r1, r7, #0
    // add r2, sp, #0x10
    // bl sub_020611C8
    // mov r0, #1
    // ldr r2, [sp, #0x18]
    // lsl r1, r4, #3
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // add r0, r2, r0
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // bl MapObject_GetPreviousYCoord
    // lsl r1, r0, #0xf
    // mov r0, #2
    // lsl r0, r0, #0xe
    // sub r0, r1, r0
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, _021FED10 ; =ov01_02209110
    // add r2, sp, #0x10
    // mov r3, #0
    // bl ov01_021F1620
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021FED10: .word ov01_02209110
    // TODO: decompile
}


void ov01_021FED14(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r1, #0
    // bl sub_02068D98
    // ldr r3, [r0, #4]
    // ldr r1, [r0]
    // mov r0, #0
    // str r1, [r4, #0x78]
    // str r3, [r4, #0x7c]
    // str r0, [sp]
    // add r2, r3, #4
    // ldr r0, [r4, #0x78]
    // add r1, r4, #0
    // add r3, #0x18
    // bl ov01_021F1A34
    // ldr r1, [r4, #0x7c]
    // add r0, r4, #0
    // add r0, #0x24
    // add r1, r1, #4
    // add r2, r4, #0
    // bl sub_02069998
    // mov r0, #1
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_021FED4C(void) {
    sub_020698D0();
}


void ov01_021FED58(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl sub_02069948
    // cmp r0, #1
    // bne _021FED70
    // add r0, r5, #0
    // bl ov01_021F1640
    // pop {r3, r4, r5, pc}
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // mov r2, #0
    // bl sub_020698E8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FED80(void) {
    sub_02068DB8();
    sub_020699BC(r4);
}

