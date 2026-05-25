/* Decompiled from asm/overlay_01_022006A8.s */
#include "global.h"

void ov01_022006A8(void) {
    ov01_021F1430(4, 0, 0);
    ov01_022006D4();
}


void ov01_022006C4(void) {
    ov01_02200710();
    ov01_021F1448(r4);
}


void ov01_022006D4(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #4
    // mov r2, #0x78
    // bl ov01_021F18D4
    // ldr r0, [r4]
    // mov r1, #3
    // mov r2, #0x13
    // mov r3, #1
    // bl ov01_021F1930
    // mov r0, #3
    // str r0, [sp]
    // mov r3, #0
    // mov r1, #4
    // ldr r0, _0220070C ; =ov01_0220931C
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // add r2, r1, #0
    // bl ov01_021F1758
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0220070C: .word ov01_0220931C
    // TODO: decompile
}


void ov01_02200710(void) {
    ov01_021F18FC(4);
    ov01_021F1970(3);
    ov01_021F18C8(4);
}


void ov01_02200730(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // bl ov01_021F146C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // mov r1, #0x15
    // str r4, [sp, #0x18]
    // bl ov01_021F1450
    // str r0, [sp, #0x1c]
    // add r1, sp, #8
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // add r0, r5, #0
    // mov r1, #2
    // str r5, [sp, #0x20]
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _0220077C ; =ov01_02209308
    // add r0, r4, #0
    // add r2, sp, #8
    // mov r3, #0
    // bl ov01_021F1620
    // add sp, #0x24
    // pop {r4, r5, pc}
    // nop
    // _0220077C: .word ov01_02209308
    // TODO: decompile
}


void ov01_02200780(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r2, sp, #0
    // mov r1, #0
    // str r1, [r2]
    // str r1, [r2, #4]
    // add r5, r0, #0
    // str r1, [r2, #8]
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
    // bl sub_02068DA8
    // ldr r0, [r4, #0x14]
    // mov r1, #4
    // add r2, sp, #0
    // bl ov01_021F1740
    // str r0, [r4, #0x20]
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov01_022007D0(void) {
    sub_02023DA4();
}


void ov01_022007DC(void) {
    // push {r4, lr}
    // add r2, r1, #0
    // add r4, r0, #0
    // ldr r0, [r2, #0x1c]
    // ldr r1, [r2, #4]
    // ldr r2, [r2, #8]
    // bl sub_0205F0A8
    // cmp r0, #0
    // bne _022007F6
    // add r0, r4, #0
    // bl ov01_021F1640
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_022007F8(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // ldr r4, [r5, #0x1c]
    // ldr r1, [r5, #4]
    // add r6, r0, #0
    // ldr r2, [r5, #8]
    // add r0, r4, #0
    // bl sub_0205F0A8
    // cmp r0, #0
    // bne _0220081A
    // add r0, r6, #0
    // bl ov01_021F1640
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r1, sp, #0xc
    // bl MapObject_CopyPositionVector
    // add r0, r4, #0
    // add r1, sp, #0
    // bl MapObject_CopyFacingVector
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r1, r1, r0
    // mov r0, #3
    // lsl r0, r0, #0xe
    // str r1, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x20]
    // add r1, sp, #0xc
    // bl sub_02023E50
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}

