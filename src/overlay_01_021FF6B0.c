/* Decompiled from asm/overlay_01_021FF6B0.s */
#include "global.h"

void ov01_021FF6B0(void) {
}



void ov01_021FF6CC(void) {
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



u32 ov01_021FF7B0(void) {
    sub_02068D98();
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
    sub_02068DB8(r5);
    // add r2, sp, #0
    ov01_021F1740(*((u32*)(r4 + 0x14)), 8);
    *((u32*)(r4 + 0x20)) = r0;
}



void ov01_021FF7F4(void) {
}



void ov01_021FF800(void) {
    sub_02023F04(*((u32*)(r1 + 0x20)), (1 << 0xc));
    sub_02023F70(*((u32*)(r4 + 0x20)));
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    ov01_021F1640(r5, (r1 >> 0x14));
}



void ov01_021FF830(void) {
    // add r1, sp, #0
    sub_02068DB8();
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
    sub_02023E50(*((u32*)(r4 + 0x20)));
}


