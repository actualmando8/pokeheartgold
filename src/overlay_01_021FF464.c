/* Decompiled from asm/overlay_01_021FF464.s */
#include "global.h"

void ov01_021FF464(void) {
    ov01_021F1430(4, 0, 0);
    ov01_021FF490();
}


void ov01_021FF480(void) {
    ov01_021FF4D4();
    ov01_021F1448(r4);
}


void ov01_021FF490(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #3
    // mov r2, #0x77
    // bl ov01_021F18D4
    // ldr r0, [r4]
    // mov r1, #2
    // mov r2, #0x90
    // bl ov01_021F1908
    // ldr r0, [r4]
    // mov r1, #2
    // mov r2, #0x12
    // mov r3, #1
    // bl ov01_021F1930
    // mov r3, #2
    // mov r1, #3
    // str r3, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021FF4D0 ; =ov01_022091D4
    // add r2, r1, #0
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // bl ov01_021F1758
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _021FF4D0: .word ov01_022091D4
    // TODO: decompile
}


void ov01_021FF4D4(void) {
    ov01_021F18FC(3);
    ov01_021F1924(2);
    ov01_021F1970(2);
    ov01_021F18C8(3);
}


void ov01_021FF4FC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // add r6, r1, #0
    // bl ov01_021F146C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetFieldSystem
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // mov r1, #0xa
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
    // ldr r1, _021FF548 ; =ov01_022091C0
    // add r0, r4, #0
    // add r2, sp, #8
    // add r3, r6, #0
    // bl ov01_021F1620
    // add sp, #0x24
    // pop {r3, r4, r5, r6, pc}
    // _021FF548: .word ov01_022091C0
    // TODO: decompile
}


void ov01_021FF54C(void) {
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
    // add r2, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4, #0x20]
    // bl MapObject_GetSpriteID
    // str r0, [r4, #4]
    // ldr r0, [r4, #0x20]
    // bl MapObject_GetID
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x20]
    // bl MapObject_GetMapID
    // str r0, [r4, #0xc]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // ldr r0, [r4, #0x18]
    // mov r1, #3
    // add r2, sp, #0
    // bl ov01_021F1740
    // str r0, [r4, #0x24]
    // mov r1, #2
    // ldr r0, [r4, #0x20]
    // lsl r1, r1, #8
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _021FF5B2
    // ldr r0, [r4, #0x24]
    // mov r1, #0
    // bl sub_02023EA4
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov01_021FF5B8(void) {
    sub_02023DA4();
}


void ov01_021FF5C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // ldr r6, [r4, #0x20]
    // ldr r1, [r4, #4]
    // add r5, r0, #0
    // ldr r2, [r4, #8]
    // ldr r3, [r4, #0xc]
    // add r0, r6, #0
    // bl sub_0205F0F8
    // cmp r0, #0
    // bne _021FF5E4
    // add r0, r5, #0
    // bl ov01_021F1640
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl sub_02068D90
    // add r7, r0, #0
    // cmp r7, #1
    // bne _021FF602
    // add r0, r6, #0
    // bl MapObject_CheckFlag26
    // cmp r0, #0
    // bne _021FF602
    // add r0, r5, #0
    // bl ov01_021F1640
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #2
    // add r0, r6, #0
    // lsl r1, r1, #8
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // ldr r0, [r4, #0x24]
    // bne _021FF61A
    // mov r1, #0
    // bl sub_02023EA4
    // b _021FF620
    // mov r1, #1
    // bl sub_02023EA4
    // ldr r0, [r4]
    // cmp r0, #0
    // bne _021FF656
    // mov r1, #1
    // ldr r0, [r4, #0x24]
    // lsl r1, r1, #0xc
    // bl sub_02023F04
    // ldr r0, [r4, #0x24]
    // bl sub_02023F70
    // asr r1, r0, #0xb
    // lsr r1, r1, #0x14
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // cmp r0, #0xc
    // blt _021FF656
    // cmp r7, #0
    // bne _021FF64E
    // add r0, r5, #0
    // bl ov01_021F1640
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #0x24]
    // mov r1, #0
    // bl sub_02023F1C
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FF658(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // ldr r4, [r5, #0x20]
    // ldr r1, [r5, #4]
    // add r6, r0, #0
    // ldr r2, [r5, #8]
    // ldr r3, [r5, #0xc]
    // add r0, r4, #0
    // bl sub_0205F0F8
    // cmp r0, #0
    // bne _021FF67C
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
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r1, r1, r0
    // mov r0, #2
    // lsl r0, r0, #0xe
    // str r1, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x24]
    // add r1, sp, #0xc
    // bl sub_02023E50
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}

