/* Decompiled from asm/overlay_01_021FF854.s */
#include "global.h"

void ov01_021FF854(void) {
}



void ov01_021FF870(void) {
}



void ov01_021FF880(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #7
    // mov r2, #0x7a
    // bl ov01_021F18D4
    // ldr r0, [r4]
    // mov r1, #7
    // mov r2, #0x92
    // bl ov01_021F1908
    // ldr r0, [r4]
    // mov r1, #8
    // mov r2, #0x15
    // mov r3, #1
    // bl ov01_021F1930
    // mov r0, #8
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021FF8C4 ; =ov01_0220922C
    // mov r2, #7
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // mov r1, #9
    // add r3, r2, #0
    // bl ov01_021F1758
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _021FF8C4: .word ov01_0220922C
    // TODO: decompile
}



void ov01_021FF8C8(void) {
}



void ov01_021FF8F0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x38
    // add r5, r0, #0
    // add r6, r1, #0
    // bl ov01_021F146C
    // add r4, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetXCoord
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl MapObject_GetYCoord
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // str r0, [sp, #0x10]
    // mov r1, #0
    // add r0, sp, #8
    // strh r1, [r0, #0x1c]
    // strh r1, [r0, #0x1e]
    // sub r1, r1, #1
    // add r0, sp, #0x28
    // strb r1, [r0]
    // add r0, r4, #0
    // str r4, [sp, #0x18]
    // bl ov01_021F1468
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov01_021F1450
    // str r0, [sp, #0x1c]
    // add r0, r5, #0
    // add r1, sp, #0x2c
    // str r5, [sp, #0x20]
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _021FF960 ; =ov01_02209218
    // add r0, r4, #0
    // add r2, sp, #0x2c
    // add r3, r6, #0
    // bl ov01_021F1620
    // add sp, #0x38
    // pop {r4, r5, r6, pc}
    // _021FF960: .word ov01_02209218
    // TODO: decompile
}



void ov01_021FF964(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r5, r0, #0
    // str r1, [sp, #8]
    // add r4, r2, #0
    // add r6, r3, #0
    // bl ov01_021F146C
    // add r7, r0, #0
    // add r0, r5, #0
    // str r4, [sp, #0xc]
    // bl MapObject_GetYCoord
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // str r6, [sp, #0x14]
    // bl MapObject_GetXCoord
    // sub r1, r0, r4
    // add r0, sp, #0xc
    // strh r1, [r0, #0x1c]
    // add r0, r5, #0
    // bl MapObject_GetZCoord
    // sub r1, r0, r6
    // add r0, sp, #0xc
    // strh r1, [r0, #0x1e]
    // ldr r0, [sp, #0x50]
    // cmp r0, #0
    // beq _021FF9AC
    // add r0, r5, #0
    // bl MapObject_GetFacingDirection
    // add r1, sp, #0x2c
    // strb r0, [r1]
    // b _021FF9B4
    // mov r1, #0
    // mvn r1, r1
    // add r0, sp, #0x2c
    // strb r1, [r0]
    // add r0, r7, #0
    // str r7, [sp, #0x1c]
    // bl ov01_021F1468
    // str r0, [sp, #0x18]
    // add r0, r7, #0
    // mov r1, #0xc
    // bl ov01_021F1450
    // str r0, [sp, #0x20]
    // add r0, r5, #0
    // add r1, sp, #0x30
    // str r5, [sp, #0x24]
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #0xc
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _021FF9F0 ; =ov01_02209218
    // ldr r3, [sp, #8]
    // add r0, r7, #0
    // add r2, sp, #0x30
    // bl ov01_021F1620
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _021FF9F0: .word ov01_02209218
    // TODO: decompile
}



BOOL ov01_021FF9F4(void) {
    sub_02068D98();
    // add r3, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    MapObject_GetSpriteID(*((u32*)(r4 + 0x30)), (4 - 1), r4);
    *((u32*)(r4 + 4)) = r0;
    MapObject_GetID(*((u32*)(r4 + 0x30)));
    *((u32*)(r4 + 8)) = r0;
    MapObject_GetMapID(*((u32*)(r4 + 0x30)));
    *((u32*)(r4 + 0xc)) = r0;
    // str r0, [sp]
    // str r0, [sp, #8]
    MapObject_GetPositionVectorYCoord(*((u32*)(r4 + 0x30)));
    // str r0, [sp, #4]
    // add r1, sp, #0
    sub_0206121C(*((u32*)(r4 + 0x24)));
    *((u32*)(r4 + 0x14)) = r0;
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
    sub_02068DA8(r5);
    // add r2, sp, #0
    ov01_021F1740(*((u32*)(r4 + 0x28)), 9);
    *((u32*)(r4 + 0x3c)) = r0;
    MapObject_TestFlagsBits(*((u32*)(r4 + 0x30)), (2 << 8));
    sub_02023EA4(*((u32*)(r4 + 0x3c)), 0);
    sub_02068D90(r5);
    sub_02023F1C(*((u32*)(r4 + 0x3c)), (3 << 0xe));
    sub_02023F04(*((u32*)(r4 + 0x3c)), 0);
    // str r0, [r4]
}



void ov01_021FFAB0(void) {
}



void ov01_021FFABC(void) {
    sub_0205F0F8(*((u32*)(r1 + 0x30)), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)));
    ov01_021F1640(r5);
    MapObject_TestFlagsBits(r6, (2 << 8));
    sub_02023EA4(*((u32*)(r4 + 0x3c)), 0);
    sub_02023EA4(1);
    // add r1, sp, #0xc
    sub_02068DB8(r5);
    // add r1, sp, #0
    // str r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    sub_0206121C(*((u32*)(r4 + 0x24)));
    *((u32*)(r4 + 0x14)) = r0;
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    sub_02068DA8(r5);
    sub_02023F04(*((u32*)(r4 + 0x3c)), (1 << 0xc));
    sub_02023F70(*((u32*)(r4 + 0x3c)));
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // str r0, [r4]
    sub_02023F1C(*((u32*)(r4 + 0x3c)), (3 << 0xe));
    sub_02023F04(*((u32*)(r4 + 0x3c)), 0);
    // str r0, [r4]
    MapObject_GetXCoord(r6);
    // ldrsh r1, [r4, r1]
    // sub r7, r0, r1
    MapObject_GetZCoord(r6, 0x34);
    // ldrsh r1, [r4, r1]
    // sub r1, r0, r1
    ov01_021F1640(r5, 0x36);
    // ldrsb r1, [r4, r0]
    // sub r0, #0x39
    MapObject_GetFacingDirection(r6);
    // ldrsb r1, [r4, r1]
    ov01_021F1640(r5, 0x38);
}



void ov01_021FFBD4(void) {
    sub_0205F0F8(*((u32*)(r1 + 0x30)), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)));
    ov01_021F1640(r5);
    // add r1, sp, #0
    sub_02068DB8(r5);
    // add r1, sp, #0
    sub_02023E50(*((u32*)(r4 + 0x3c)));
}


