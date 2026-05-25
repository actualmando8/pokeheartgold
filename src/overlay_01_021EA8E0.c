/* Decompiled from asm/overlay_01_021EA8E0.s */
#include "global.h"

void ov01_021EA8E0(void) {
}



void ov01_021EA8FC(void) {
}



void ov01_021EA910(void) {
    // str r0, [sp, #8]
    // lsl r0, r4
    // tst r0, r7
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    NNS_G3dGlbLightVector(0, 0, 2, 4);
    // lsl r0, r1
    // tst r0, r7
    NNS_G3dGlbLightColor(r4, *((u16*)(r6 + 0x18)));
    // tst r0, r7
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #8]
    NNS_G3dGlbMaterialColorDiffAmb(*((u16*)((3 << 8) + 0x20)), *((u16*)(r1 + 0x22)), *((u32*)(r2 + 0x28)));
    // tst r0, r7
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #8]
    NNS_G3dGlbMaterialColorSpecEmi(*((u16*)((3 << 0xa) + 0x24)), *((u16*)(r1 + 0x26)), *((u32*)(r2 + 0x2c)));
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #8]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    NNS_G3dGlbPolygonAttr(*((u32*)(*((u32*)(*((u32*)((1 << 0xc) + 0x40)) + 0x44)) + 0x30)), *((u32*)(r1 + 0x34)), *((u32*)(r2 + 0x38)), *((u32*)(r3 + 0x3c)));
}



void ov01_021EA9B0(void) {
    // tst r0, r4
    NNS_G3dMdlSetMdlDiffAll(r1, *((u16*)(r0 + 0x20)));
    // tst r0, r4
    NNS_G3dMdlSetMdlAmbAll(r6, *((u16*)(r5 + 0x22)));
    // tst r0, r4
    NNS_G3dMdlSetMdlSpecAll(r6, *((u16*)(r5 + 0x24)));
    // tst r0, r4
    NNS_G3dMdlSetMdlEmiAll(r6, *((u16*)(r5 + 0x26)));
    // tst r0, r4
    NNS_G3dMdlSetMdlLightEnableFlagAll(r6, *((u32*)(r5 + 0x30)));
    // tst r0, r4
    NNS_G3dMdlSetMdlPolygonModeAll(r6, *((u32*)(r5 + 0x34)));
    // tst r0, r4
    NNS_G3dMdlSetMdlCullModeAll(r6, *((u32*)(r5 + 0x38)));
    // tst r0, r4
    NNS_G3dMdlSetMdlPolygonIDAll(r6, *((u32*)(r5 + 0x3c)));
    // tst r0, r4
    NNS_G3dMdlSetMdlAlphaAll(r6, *((u32*)(r5 + 0x40)));
    // tst r0, r1
    // and r1, r2
    NNS_G3dMdlSetMdlFogEnableFlagAll(r6, ((2 << 0x10) >> 2), *((u32*)(r5 + 0x44)));
    // tst r0, r1
    // and r1, r2
    NNS_G3dMdlSetMdlDepthTestCondAll(r6, ((1 << 0x12) >> 4), *((u32*)(r5 + 0x44)));
    // tst r0, r1
    // and r1, r2
    NNS_G3dMdlSetMdl1DotAll(r6, ((2 << 0x12) >> 6), *((u32*)(r5 + 0x44)));
    // tst r0, r1
    // and r1, r2
    NNS_G3dMdlSetMdlFarClipAll(r6, ((1 << 0x14) >> 8), *((u32*)(r5 + 0x44)));
    // tst r0, r1
    // and r1, r2
    NNS_G3dMdlSetMdlXLDepthUpdateAll(r6, ((2 << 0x14) >> 0xa), *((u32*)(r5 + 0x44)));
}



void ov01_021EAAB8(void) {
    // mul r4, r0
    // strh r2, [r5, r4]
    // strh r3, [r2, r4]
    // add r6, sp, #0
    // ldrsh r0, [r6, r0]
    // strh r0, [r3, r4]
    // ldrsh r1, [r5, r4]
    // ldrsh r2, [r2, r4]
    // ldrsh r3, [r3, r4]
    NNS_G3dGlbLightVector(r1, (r0 + 2), (r0 + 4));
}



void ov01_021EAAE0(void) {
}



void ov01_021EAAF4(void) {
}



void ov01_021EAB08(void) {
}



void ov01_021EAB1C(void) {
}



void ov01_021EAB30(void) {
}



void ov01_021EAB44(void) {
}



void ov01_021EAB58(void) {
}



void ov01_021EAB6C(void) {
}



void ov01_021EAB80(void) {
    // tst r2, r1
    // tst r2, r1
    // eor r1, r2
    *((u32*)(r0 + 0x44)) = r1;
    ov01_021EA910((1 << 0xc), *((u32*)(r0 + 0x44)));
}


