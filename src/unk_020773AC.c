/* Decompiled from asm/unk_020773AC.s */
#include "global.h"

void sub_020773AC(void) {
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
}




void sub_020773D4(void) {
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 0xe, 0xb);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 0, 0xe, 7);
}




void sub_02077400(void) {
}




void sub_0207741C(void) {
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r1, [r0]
    // add r0, #0x58
    // and r2, r1
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r3, r2
    // strh r3, [r0]
    // sub r2, #0x1c
    // and r3, r1
    // strh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    G3X_SetFog(0, 0, 0, 0);
    // str r0, [sp]
    G3X_SetClearColor(0, 0, 0x00007FFF, 0x3f);
    // str r1, [r0]
}




void sub_020774A0(void) {
    // blx r3
    // blx r3
    GF_AssertFail(0xa0, 0, 0, *((u32*)NNS_GfdDefaultFuncAllocPlttVram));
    GF_AssertFail();
    sub_02014DA0();
}




void sub_020774E0(void) {
}




void sub_02077504(void) {
}




void sub_02077520(void) {
}




SPLEmitter * sub_0207753C(void) {
    Heap_Alloc((0x12 << 0xa));
    // str r0, [sp]
    // str r4, [sp, #4]
    sub_02014DB4(sub_02077504, sub_02077520, r0, (0x12 << 0xa));
    sub_02015524();
    Camera_SetPerspectiveClippingPlane((1 << 0xc), (0xe1 << 0xe), r0);
}




void sub_02077584(void) {
}




void sub_020775AC(void) {
}




void sub_020775C4(void) {
    // add r1, sp, #0
    // str r2, [r1]
    // str r2, [sp]
    // str r2, [sp, #8]
    // str r1, [sp, #4]
    // add r1, r2, r1
    // ldr r2, [sp, #4]
    // add r1, r2, r1
    // ldr r2, [sp, #8]
    // add r1, r2, r1
}




void * sub_02077604(void) {
    Heap_Alloc(*((u32*)r0), 0x10);
    GF_AssertFail();
    // str r0, [r4]
    *((u32*)(r4 + 4)) = *((u32*)(r5 + 4));
    sub_02077584(*((u32*)r4), 0x77, *((u32*)(r5 + 4)));
    *((u32*)(r4 + 0xc)) = r0;
    sub_02015528(1);
}



void sub_02077634(void) {
    sub_02015494(*((u32*)(r0 + 0xc)), sub_020775C4, r0);
    sub_02015528(*((u32*)(r4 + 0xc)), 1);
}




void sub_02077650(void) {
}




void sub_02077664(void) {
}



