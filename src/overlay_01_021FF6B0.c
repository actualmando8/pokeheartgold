/* Decompiled from asm/overlay_01_021FF6B0.s */
#include "global.h"

void ov01_021FF6B0(void) {
    ov01_021F1430(4, 0, 0);
    ov01_021FF6DC();
}


void ov01_021FF6CC(void) {
    ov01_021FF724();
    ov01_021F1448(r4);
}


void ov01_021FF6DC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #6
    // mov r2, #0x79
    // bl ov01_021F18D4
    // ldr r0, [r4]
    // mov r1, #6
    // mov r2, #0x91
    // bl ov01_021F1908
    // ldr r0, [r4]
    // mov r1, #7
    // mov r2, #0x14
    // mov r3, #1
    // bl ov01_021F1930
    // mov r0, #7
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021FF720 ; =ov01_02209200
    // mov r2, #6
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // mov r1, #8
    // add r3, r2, #0
    // bl ov01_021F1758
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _021FF720: .word ov01_02209200
    // TODO: decompile
}


void ov01_021FF724(void) {
    ov01_021F18FC(6);
    ov01_021F1924(6);
    ov01_021F1970(7);
    ov01_021F18C8(8);
}


void ov01_021FF74C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // bl ov01_021F146C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // mov r1, #0xb
    // str r4, [sp, #0x18]
    // bl ov01_021F1450
    // str r0, [sp, #0x1c]
    // add r0, r5, #0
    // add r1, sp, #8
    // str r5, [sp, #0x20]
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // add r1, r0, #0
    // add r0, r6, #0
    // add r2, sp, #8
    // bl sub_020611C8
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _021FF7AC ; =ov01_022091EC
    // add r0, r4, #0
    // add r2, sp, #8
    // mov r3, #0
    // bl ov01_021F1620
    // add sp, #0x24
    // pop {r3, r4, r5, r6, pc}
    // _021FF7AC: .word ov01_022091EC
    // TODO: decompile
}


void ov01_021FF7B0(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // bl sub_02068D98
    // add r2, r4, #0
    // add r3, r0, #0
    // add r2, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4, #0x1c]
    // bl MapObject_GetID
    // str r0, [r4, #4]
    // ldr r0, [r4, #0x1c]
    // bl MapObject_GetMapID
    // str r0, [r4, #8]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r0, [r4, #0x14]
    // mov r1, #8
    // add r2, sp, #0
    // bl ov01_021F1740
    // str r0, [r4, #0x20]
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov01_021FF7F4(void) {
    sub_02023DA4();
}


void ov01_021FF800(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // bne _021FF82E
    // mov r1, #1
    // ldr r0, [r4, #0x20]
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // ldr r0, [r4, #0x20]
    // bl sub_02023F70
    // asr r1, r0, #0xb
    // lsr r1, r1, #0x14
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // cmp r0, #9
    // blt _021FF82E
    // add r0, r5, #0
    // bl ov01_021F1640
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FF830(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r1, sp, #0
    // bl sub_02068DB8
    // mov r0, #2
    // ldr r1, [sp, #8]
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x20]
    // add r1, sp, #0
    // bl sub_02023E50
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}

