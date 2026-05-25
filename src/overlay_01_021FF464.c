/* Decompiled from asm/overlay_01_021FF464.s */
#include "global.h"

void ov01_021FF464(void) {
}



void ov01_021FF480(void) {
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



u32 ov01_021FF54C(void) {
    // add r2, sp, #0
    // str r1, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    sub_02068D98(0);
    // add r2, #0x14
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    MapObject_GetSpriteID(*((u32*)(r4 + 0x20)), r4, r0);
    *((u32*)(r4 + 4)) = r0;
    MapObject_GetID(*((u32*)(r4 + 0x20)));
    *((u32*)(r4 + 8)) = r0;
    MapObject_GetMapID(*((u32*)(r4 + 0x20)));
    *((u32*)(r4 + 0xc)) = r0;
    // add r1, sp, #0
    sub_02068DA8(r5);
    // add r2, sp, #0
    ov01_021F1740(*((u32*)(r4 + 0x18)), 3);
    *((u32*)(r4 + 0x24)) = r0;
    MapObject_TestFlagsBits(*((u32*)(r4 + 0x20)), (2 << 8));
    sub_02023EA4(*((u32*)(r4 + 0x24)), 0);
}



void ov01_021FF5B8(void) {
}



void ov01_021FF5C4(void) {
    sub_0205F0F8(*((u32*)(r1 + 0x20)), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)));
    ov01_021F1640(r5);
    sub_02068D90(r5);
    MapObject_CheckFlag26(r6);
    ov01_021F1640(r5);
    MapObject_TestFlagsBits(r6, (2 << 8));
    sub_02023EA4(*((u32*)(r4 + 0x24)), 0);
    sub_02023EA4(1);
    sub_02023F04(*((u32*)(r4 + 0x24)), (1 << 0xc));
    sub_02023F70(*((u32*)(r4 + 0x24)));
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    ov01_021F1640(r5, (r1 >> 0x14));
    sub_02023F1C(*((u32*)(r4 + 0x24)), 0);
}



void ov01_021FF658(void) {
    sub_0205F0F8(*((u32*)(r1 + 0x20)), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)));
    ov01_021F1640(r6);
    // add r1, sp, #0xc
    MapObject_CopyPositionVector(r4);
    // add r1, sp, #0
    MapObject_CopyFacingVector(r4);
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #8]
    // add r1, r1, r0
    // str r1, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // add r1, sp, #0xc
    sub_02023E50(*((u32*)(r5 + 0x24)));
}


