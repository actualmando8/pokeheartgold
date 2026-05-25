/* Decompiled from asm/overlay_01_021EA8E0.s */
#include "global.h"

void ov01_021EA8E0(void) {
    Heap_Alloc(4, 0x48);
    MIi_CpuClear32(0, r0, 0x48);
}


void ov01_021EA8FC(void) {
    Heap_FreeExplicit(0, 4);
}


void ov01_021EA910(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp, #8]
    // add r7, r1, #0
    // mov r4, #0
    // add r5, r0, #0
    // add r6, r0, #0
    // mov r0, #1
    // lsl r0, r4
    // tst r0, r7
    // beq _021EA938
    // mov r1, #0
    // mov r2, #2
    // mov r3, #4
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // add r0, r4, #0
    // bl NNS_G3dGlbLightVector
    // add r1, r4, #4
    // mov r0, #1
    // lsl r0, r1
    // tst r0, r7
    // beq _021EA94A
    // ldrh r1, [r6, #0x18]
    // add r0, r4, #0
    // bl NNS_G3dGlbLightColor
    // add r4, r4, #1
    // add r5, r5, #6
    // add r6, r6, #2
    // cmp r4, #4
    // blt _021EA91E
    // mov r0, #3
    // lsl r0, r0, #8
    // tst r0, r7
    // beq _021EA96C
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #8]
    // ldrh r0, [r0, #0x20]
    // ldrh r1, [r1, #0x22]
    // ldr r2, [r2, #0x28]
    // bl NNS_G3dGlbMaterialColorDiffAmb
    // mov r0, #3
    // lsl r0, r0, #0xa
    // tst r0, r7
    // beq _021EA984
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #8]
    // ldrh r0, [r0, #0x24]
    // ldrh r1, [r1, #0x26]
    // ldr r2, [r2, #0x2c]
    // bl NNS_G3dGlbMaterialColorSpecEmi
    // mov r0, #1
    // lsl r0, r0, #0xc
    // cmp r7, r0
    // blt _021EA9AC
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r0, [r0, #0x40]
    // ldr r2, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #8]
    // ldr r0, [r0, #0x44]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [r1, #0x34]
    // ldr r0, [r0, #0x30]
    // ldr r2, [r2, #0x38]
    // ldr r3, [r3, #0x3c]
    // bl NNS_G3dGlbPolygonAttr
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021EA9B0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #1
    // add r4, r2, #0
    // lsl r0, r0, #8
    // add r6, r1, #0
    // tst r0, r4
    // beq _021EA9C8
    // ldrh r1, [r5, #0x20]
    // add r0, r6, #0
    // bl NNS_G3dMdlSetMdlDiffAll
    // mov r0, #2
    // lsl r0, r0, #8
    // tst r0, r4
    // beq _021EA9D8
    // ldrh r1, [r5, #0x22]
    // add r0, r6, #0
    // bl NNS_G3dMdlSetMdlAmbAll
    // mov r0, #1
    // lsl r0, r0, #0xa
    // tst r0, r4
    // beq _021EA9E8
    // ldrh r1, [r5, #0x24]
    // add r0, r6, #0
    // bl NNS_G3dMdlSetMdlSpecAll
    // mov r0, #2
    // lsl r0, r0, #0xa
    // tst r0, r4
    // beq _021EA9F8
    // ldrh r1, [r5, #0x26]
    // add r0, r6, #0
    // bl NNS_G3dMdlSetMdlEmiAll
    // mov r0, #1
    // lsl r0, r0, #0xc
    // tst r0, r4
    // beq _021EAA08
    // ldr r1, [r5, #0x30]
    // add r0, r6, #0
    // bl NNS_G3dMdlSetMdlLightEnableFlagAll
    // mov r0, #2
    // lsl r0, r0, #0xc
    // tst r0, r4
    // beq _021EAA18
    // ldr r1, [r5, #0x34]
    // add r0, r6, #0
    // bl NNS_G3dMdlSetMdlPolygonModeAll
    // mov r0, #1
    // lsl r0, r0, #0xe
    // tst r0, r4
    // beq _021EAA28
    // ldr r1, [r5, #0x38]
    // add r0, r6, #0
    // bl NNS_G3dMdlSetMdlCullModeAll
    // mov r0, #2
    // lsl r0, r0, #0xe
    // tst r0, r4
    // beq _021EAA38
    // ldr r1, [r5, #0x3c]
    // add r0, r6, #0
    // bl NNS_G3dMdlSetMdlPolygonIDAll
    // mov r0, #1
    // lsl r0, r0, #0x10
    // tst r0, r4
    // beq _021EAA48
    // ldr r1, [r5, #0x40]
    // add r0, r6, #0
    // bl NNS_G3dMdlSetMdlAlphaAll
    // mov r1, #2
    // lsl r1, r1, #0x10
    // add r0, r4, #0
    // tst r0, r1
    // beq _021EAA5E
    // ldr r2, [r5, #0x44]
    // lsr r1, r1, #2
    // add r0, r6, #0
    // and r1, r2
    // bl NNS_G3dMdlSetMdlFogEnableFlagAll
    // mov r1, #1
    // lsl r1, r1, #0x12
    // add r0, r4, #0
    // tst r0, r1
    // beq _021EAA74
    // ldr r2, [r5, #0x44]
    // lsr r1, r1, #4
    // add r0, r6, #0
    // and r1, r2
    // bl NNS_G3dMdlSetMdlDepthTestCondAll
    // mov r1, #2
    // lsl r1, r1, #0x12
    // add r0, r4, #0
    // tst r0, r1
    // beq _021EAA8A
    // ldr r2, [r5, #0x44]
    // lsr r1, r1, #6
    // add r0, r6, #0
    // and r1, r2
    // bl NNS_G3dMdlSetMdl1DotAll
    // mov r1, #1
    // lsl r1, r1, #0x14
    // add r0, r4, #0
    // tst r0, r1
    // beq _021EAAA0
    // ldr r2, [r5, #0x44]
    // lsr r1, r1, #8
    // add r0, r6, #0
    // and r1, r2
    // bl NNS_G3dMdlSetMdlFarClipAll
    // mov r1, #2
    // lsl r1, r1, #0x14
    // add r0, r4, #0
    // tst r0, r1
    // beq _021EAAB6
    // ldr r2, [r5, #0x44]
    // lsr r1, r1, #0xa
    // add r0, r6, #0
    // and r1, r2
    // bl NNS_G3dMdlSetMdlXLDepthUpdateAll
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021EAAB8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #6
    // add r4, r1, #0
    // mul r4, r0
    // strh r2, [r5, r4]
    // add r2, r5, #2
    // strh r3, [r2, r4]
    // add r6, sp, #0
    // mov r0, #0x10
    // ldrsh r0, [r6, r0]
    // add r3, r5, #4
    // strh r0, [r3, r4]
    // add r0, r1, #0
    // ldrsh r1, [r5, r4]
    // ldrsh r2, [r2, r4]
    // ldrsh r3, [r3, r4]
    // bl NNS_G3dGlbLightVector
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021EAAE0(void) {
    NNS_G3dGlbLightColor();
}


void ov01_021EAAF4(void) {
    ov01_021EA910(1);
}


void ov01_021EAB08(void) {
    ov01_021EA910(2);
}


void ov01_021EAB1C(void) {
    ov01_021EA910(1);
}


void ov01_021EAB30(void) {
    ov01_021EA910(2);
}


void ov01_021EAB44(void) {
    ov01_021EA910(2);
}


void ov01_021EAB58(void) {
    ov01_021EA910(1);
}


void ov01_021EAB6C(void) {
    ov01_021EA910(1);
}


void ov01_021EAB80(void) {
    // push {r3, lr}
    // cmp r2, #1
    // ldr r2, [r0, #0x44]
    // bne _021EAB8E
    // tst r2, r1
    // beq _021EAB92
    // pop {r3, pc}
    // tst r2, r1
    // beq _021EABA4
    // ldr r2, [r0, #0x44]
    // eor r1, r2
    // str r1, [r0, #0x44]
    // cmp r3, #1
    // bne _021EABA4
    // mov r1, #1
    // lsl r1, r1, #0xc
    // bl ov01_021EA910
    // pop {r3, pc}
    // TODO: decompile
}

