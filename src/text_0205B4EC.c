/* Decompiled from asm/text_0205B4EC.s */
#include "global.h"

void sub_0205B4EC(void) {
}




u32 sub_0205B514(void) {
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    AddWindowParameterized(3, 2);
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    AddWindowParameterized(7, 2);
}




void sub_0205B564(void) {
    GetWindowBgId();
    Options_GetFrame(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r5), r6, 0x000003E2, 0xa);
    sub_0205B5A8(r5);
    DrawFrameAndWindow2(r5, 0, 0x000003E2, 0xa);
}




void sub_0205B5A8(void) {
}




u32 sub_0205B5B4(void *taskMgr, void *textData, void *options, u32 font) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    return 0;
}




void sub_0205B5EC(void) {
    // add r0, sp, #0x10
    // ldr r0, [sp, #0x24]
    // str r3, [sp]
    // str r4, [sp, #4]
    // str r3, [sp, #8]
}




void IsPrintFinished(void) {
}




u32 sub_0205B63C(void) {
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    AddWindowParameterized(3, ((2 << 0x18) >> 0x18));
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    AddWindowParameterized(7, ((r4 << 0x18) >> 0x18));
}




void sub_0205B6A0(void) {
    GetWindowBgId();
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    sub_0200EC0C(*((u32*)r5), r0, 0x000002A3, 9);
    FillWindowPixelBuffer(r5, 0xf);
    // str r0, [sp]
    DrawFrameAndWindow3(r5, 0, 0x000002A3, 9);
}



