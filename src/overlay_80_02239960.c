/* Decompiled from asm/overlay_80_02239960.s */
#include "global.h"

void ov80_02239960(void) {
}




void ov80_02239980(void) {
}




void * ov80_022399A4(void) {
    // str r3, [sp, #8]
    GF_AssertFail(*((u32*)(r0 + (r1 << 2))));
    Heap_Alloc(*((u16*)(r5 + 0x20)), (0x12 << 0xa));
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_02014DB4(ov80_02239AB0, ov80_02239AD4, r0, (0x12 << 0xa));
    sub_02015524();
    Camera_SetPerspectiveClippingPlane((1 << 0xc), (0xe1 << 0xe), r0);
    // ldr r1, [sp, #8]
    sub_02015528(r4);
    sub_02015264(0xbc, r7, *((u16*)(r5 + 0x20)));
    sub_0201526C(r4, r0, 0xa, 1);
    // str r4, [r5, r6]
}




void ov80_02239A1C(void) {
    // str r0, [r5, r4]
}




void ov80_02239A38(void) {
}




void ov80_02239A60(void) {
}




u32 ov80_02239A74(void) {
}




void ov80_02239A98(void) {
}




void * ov80_02239AB0(void) {
    // blx r3
    GF_AssertFail(0, *((u32*)NNS_GfdDefaultFuncAllocTexVram));
    sub_02015354(r4);
}




void * ov80_02239AD4(void) {
    // blx r3
    GF_AssertFail(1, *((u32*)NNS_GfdDefaultFuncAllocPlttVram));
    sub_02015394(r4);
}



