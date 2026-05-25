/* Decompiled from asm/overlay_01_022001E4.s */
#include "global.h"

void ov01_022001E4(void) {
}





void ov01_022001F8(void) {
}





void ov01_02200208(void) {
    // str r1, [r0]
}





void ov01_02200210(void) {
}





void ov01_02200220(void) {
}





void ov01_02200228(void) {
}





void ov01_02200238(void) {
}





void ov01_0220024C(void) {
}





void ov01_02200260(void) {
    *((u32*)(r0 + 8)) = 1;
    ov01_021F18D4(*((u32*)(r0 + 0x10)), 1, 0x76);
    ov01_021F1908(*((u32*)(r4 + 0x10)), 1, 0x8c);
    ov01_021F1930(*((u32*)(r4 + 0x10)), 1, 0x11, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)(r4 + 0x10)), 1, 1, 1);
}





void ov01_022002AC(void) {
    *((u32*)(r0 + 0xc)) = 1;
    ov01_021F18D4(*((u32*)(r0 + 0x10)), 0xa, 0x7d);
    ov01_021F1908(*((u32*)(r4 + 0x10)), 0xa, 0x8c);
    ov01_021F1930(*((u32*)(r4 + 0x10)), 0xb, 0x18, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F1758(*((u32*)(r4 + 0x10)), 0xc, 0xa, 0xa);
}





void ov01_022002FC(void) {
}





void ov01_0220032C(void) {
}





void ov01_0220035C(void) {
}





void ov01_0220036C(void) {
}





void ov01_0220037C(void) {
}





void ov01_0220038C(void) {
}





void ov01_0220039C(void) {
}





void ov01_022003B0(void) {
}





void ov01_022003C4(void) {
    // add r4, sp, #0
    // str r5, [sp]
    // str r3, [sp, #4]
    ov01_021F1740(*((u32*)(r4 + (r1 << 2))), *((u32*)(ov01_022092C0 + 4)));
    sub_02023F90();
    NNS_G3dMdlSetMdlFogEnableFlagAll(0);
}





void ov01_022003F4(void) {
}





void ov01_02200400(void) {
}





void ov01_02200418(void) {
    sub_02068D98();
    // add r2, #0x30
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    *((u32*)(r4 + 0x28)) = (6 << 0xc);
    ov01_0220039C(*((u32*)(r4 + 0x38)), *((u32*)(r4 + 0x30)), r4, r0);
    // add r1, sp, #0
    sub_02068DB8(r5);
    // add r2, sp, #0
    ov01_022003C4(*((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x30)));
    *((u32*)(r4 + 0x40)) = r0;
    ov01_02200238(*((u32*)(r4 + 0x38)), *((u32*)(r4 + 0x30)));
    sub_02023EA4(*((u32*)(r4 + 0x40)), 0);
    sub_02068D90(r5);
    PlaySE(SEQ_SE_DP_DECIDE);
}





void ov01_02200480(void) {
    // add r1, sp, #0
    // add r0, r1, r0
    // sub r0, r1, r0
    // str r0, [r4]
    // str r0, [r4]
    // add r1, sp, #0
}





void ov01_022004EC(void) {
}





void ov01_02200508(void) {
    // add r1, sp, #0
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
}





int ov01_02200540(void) {
    ov01_021F146C();
    // str r6, [sp, #0x20]
    // str r4, [sp, #0x24]
    ov01_021F1450(9);
    // str r0, [sp, #0x28]
    // add r1, sp, #0x14
    // str r5, [sp, #0x2c]
    MapObject_CopyPositionVector(r5);
    // add r1, sp, #8
    MapObject_CopyFacingVector(r5);
    // add r0, sp, #0x14
    // add r1, sp, #8
    VEC_Add(r0);
    MapObject_GetPriority(r5);
    // add r0, sp, #0x20
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r2, sp, #0x14
    ov01_021F1620(r4, ov01_022092DC, r7);
}





void ov01_0220059C(void) {
    sub_02068D98();
    // add r2, #0x30
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    MapObject_GetID(*((u32*)(r4 + 0x3c)), r4, r0);
    *((u32*)(r4 + 8)) = r0;
    MapObject_GetMapID(*((u32*)(r4 + 0x3c)));
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0x28)) = (6 << 0xc);
    ov01_0220039C(*((u32*)(r4 + 0x38)), *((u32*)(r4 + 0x30)));
    // add r1, sp, #0
    sub_02068DB8(r5);
    // add r2, sp, #0
    ov01_022003C4(*((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x30)));
    *((u32*)(r4 + 0x40)) = r0;
    ov01_02200238(*((u32*)(r4 + 0x38)), *((u32*)(r4 + 0x30)));
    sub_02023EA4(*((u32*)(r4 + 0x40)), 0);
    sub_02068D90(r5);
    PlaySE(SEQ_SE_DP_DECIDE);
}





void ov01_02200614(void) {
    // add r1, sp, #0
    // ldr r1, [sp, #4]
    // add r1, r1, r0
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, r1, r0
    // sub r0, r1, r0
    // str r0, [r4]
    // str r0, [r4]
    // add r1, sp, #0
}




