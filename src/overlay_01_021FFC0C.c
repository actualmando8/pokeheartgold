/* Decompiled from asm/overlay_01_021FFC0C.s */
#include "global.h"

void ov01_021FFC0C(void) {
}



void ov01_021FFC28(void) {
}



void ov01_021FFC38(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #8
    // mov r2, #0x7b
    // bl ov01_021F18D4
    // ldr r0, [r4]
    // mov r1, #8
    // mov r2, #0x93
    // bl ov01_021F1908
    // ldr r0, [r4]
    // mov r1, #9
    // mov r2, #0x16
    // mov r3, #1
    // bl ov01_021F1930
    // mov r0, #9
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021FFC7C ; =ov01_02209258
    // mov r2, #8
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // mov r1, #0xa
    // add r3, r2, #0
    // bl ov01_021F1758
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _021FFC7C: .word ov01_02209258
    // TODO: decompile
}



void ov01_021FFC80(void) {
}



u32 ov01_021FFCA8(void) {
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
    // ldr r1, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
    sub_02068DA8(r5);
    // add r2, sp, #0
    ov01_021F1740(*((u32*)(r4 + 0x28)), 0xa);
    *((u32*)(r4 + 0x3c)) = r0;
    MapObject_TestFlagsBits(*((u32*)(r4 + 0x30)), (2 << 8));
    sub_02023EA4(*((u32*)(r4 + 0x3c)), 0);
    sub_02068D90(r5);
    sub_02023F1C(*((u32*)(r4 + 0x3c)), (2 << 0xc));
    // str r0, [r4]
}



void ov01_021FFD64(void) {
}



void ov01_021FFD70(void) {
    sub_0205F0F8(*((u32*)(r1 + 0x30)), *((u32*)(r1 + 4)), *((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)));
    ov01_021F1640(r6);
    MapObject_TestFlagsBits(r7, (2 << 8));
    sub_02023EA4(*((u32*)(r5 + 0x3c)), 0);
    sub_02023EA4(1);
    // add r1, sp, #0xc
    sub_02068DB8(r6);
    // add r1, sp, #0
    // str r0, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    sub_0206121C(*((u32*)(r5 + 0x24)));
    *((u32*)(r5 + 0x14)) = r0;
    // ldr r0, [sp, #4]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    sub_02068DA8(r6);
    sub_02023F04(*((u32*)(r5 + 0x3c)), (1 << 0xc));
    sub_02023F70(*((u32*)(r5 + 0x3c)));
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // str r0, [r5]
    sub_02023F1C(*((u32*)(r5 + 0x3c)), (2 << 0xc));
    sub_02023F04(*((u32*)(r5 + 0x3c)), 0);
    // str r0, [r5]
    sub_0205F0F8(r7, *((u32*)(r5 + 4)), *((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)));
    ov01_021F1640(r6);
    MapObject_GetXCoord(r7);
    MapObject_GetZCoord(r7);
    ov01_021F1640(r6, *((u32*)(r5 + 0x20)));
    // ldrsb r1, [r5, r0]
    // sub r0, #0x39
    MapObject_GetFacingDirection(r7);
    // ldrsb r1, [r5, r1]
    ov01_021F1640(r6, 0x38);
}



void ov01_021FFE98(void) {
    sub_0205F0A8(*((u32*)(r1 + 0x30)), *((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)));
    ov01_021F1640(r5);
    // add r1, sp, #0
    sub_02068DB8(r5);
    // add r1, sp, #0
    sub_02023E50(*((u32*)(r4 + 0x3c)));
}


