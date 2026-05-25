/* Decompiled from asm/overlay_01_022006A8.s */
#include "global.h"

void ov01_022006A8(void) {
}



void ov01_022006C4(void) {
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



u32 ov01_02200780(void) {
    // add r2, sp, #0
    // str r1, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    sub_02068D98(0);
    // add r2, #0x10
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    MapObject_GetID(*((u32*)(r4 + 0x1c)), r4, r0);
    *((u32*)(r4 + 4)) = r0;
    MapObject_GetMapID(*((u32*)(r4 + 0x1c)));
    *((u32*)(r4 + 8)) = r0;
    // add r1, sp, #0
    sub_02068DA8(r5);
    // add r2, sp, #0
    ov01_021F1740(*((u32*)(r4 + 0x14)), 4);
    *((u32*)(r4 + 0x20)) = r0;
}



void ov01_022007D0(void) {
}



void ov01_022007DC(void) {
    sub_0205F0A8(*((u32*)(r1 + 0x1c)), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)));
    ov01_021F1640(r4);
}



void ov01_022007F8(void) {
    sub_0205F0A8(*((u32*)(r1 + 0x1c)), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)));
    ov01_021F1640(r6);
    // add r1, sp, #0xc
    MapObject_CopyPositionVector(r4);
    // add r1, sp, #0
    MapObject_CopyFacingVector(r4);
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
    // str r1, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // add r1, sp, #0xc
    sub_02023E50(*((u32*)(r5 + 0x20)));
}


