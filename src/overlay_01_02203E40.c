/* Decompiled from asm/overlay_01_02203E40.s */
#include "global.h"

void * ov01_02203E40(void) {
    ov01_021F1430(0x68, 0, 0);
    // str r5, [r4]
    *((u32*)(r0 + 0x60)) = 0;
    *((u32*)(r0 + 0x64)) = (0xfe << 0x16);
    ov01_02203E74((0xfe << 0x16));
}



void ov01_02203E64(void) {
}




void ov01_02203E74(void) {
}




void ov01_02203E94(void) {
}




void ov01_02203EA0(void) {
    ov01_021F146C();
    ov01_021F1468();
    // str r4, [sp, #0x2c]
    ov01_021F1450(r4, 0x13);
    // str r0, [sp, #0x30]
    // str r5, [sp, #0x34]
    // add r1, sp, #0x14
    MapObject_CopyPositionVector(r5);
    // add r0, sp, #8
    Camera_GetLookAtCamPos(*((u32*)(r6 + 0x24)));
    // add r0, sp, #8
    // add r1, sp, #0x14
    // add r2, sp, #0x3c
    VEC_Subtract();
    // add r0, sp, #8
    // add r1, sp, #0x14
    VEC_Distance();
    // str r0, [sp, #0x38]
    _s32_div_f(3);
    // str r0, [sp, #0x38]
    // add r0, sp, #0x3c
    VEC_Normalize(r0);
    // add r1, sp, #0x20
    MapObject_CopyPositionVector(r5);
    MapObject_GetPriorityPlusValue(r5, 2);
    // add r1, sp, #0x2c
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0x20
    ov01_021F1620(r4, ov01_022095B4, 0);
    // ldr r1, [sp, #0x30]
    *((u32*)(r1 + 0x60)) = r0;
    // ldr r0, [sp, #0x30]
}




void ov01_02203F2C(void) {
}




u32 ov01_02203F3C(void) {
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [r4]
}




void ov01_02203F68(void) {
    // bx lr
    // TODO: decompile
}




void ov01_02203F6C(void) {
}




void ov01_02203F98(void) {
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    _fmul(0x45800000, *((u32*)(*((u32*)(r1 + 8)) + 0x64)), (4 - 1));
    _ffix();
    // str r0, [sp, #0x24]
    _fmul(0x45800000, *((u32*)(*((u32*)(r4 + 8)) + 0x64)));
    _ffix();
    // str r0, [sp, #0x28]
    _fmul(0x45800000, *((u32*)(*((u32*)(r4 + 8)) + 0x64)));
    _ffix();
    // str r0, [sp, #0x2c]
    // add r1, sp, #0x30
    sub_02068DB8(r5);
    // add r1, sp, #0x30
    // add r2, sp, #0
    // add r3, sp, #0x24
    GF3dRender_DrawModel((*((u32*)(r4 + 8)) + 4));
}



