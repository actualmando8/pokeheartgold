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
    /* Original at 0x021EA910 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp, #8]\n    add r7, r1, #0\n    mov r4, #0\n    add r5, r0, #0\n    add r6, r0, #0\n    mov r0, #1\n    lsl r0, r4\n    tst r0, r7\n    beq _021EA938\n    mov r1, #0\n    mov r2, #2\n    mov r3, #4\n    ldrsh r1, [r5, r1]\n    ldrsh r2, [r5, r2]\n    ldrsh r3, [r5, r3]\n    add r0, r4, #0\n    bl NNS_G3dGlbLightVector\n    add r1, r4, #4\n    mov r0, #1\n    lsl r0, r1\n    tst r0, r7\n    beq _021EA94A\n    ldrh r1, [r6, #0x18]\n    add r0, r4, #0\n    bl NNS_G3dGlbLightColor\n    add r4, r4, #1\n    add r5, r5, #6\n    add r6, r6, #2\n    cmp r4, #4\n    blt _021EA91E\n    mov r0, #3\n    lsl r0, r0, #8\n    tst r0, r7\n    beq _021EA96C\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #8]\n    ldrh r0, [r0, #0x20]\n    ldrh r1, [r1, #0x22]\n    ldr r2, [r2, #0x28]\n    bl NNS_G3dGlbMaterialColorDiffAmb\n    mov r0, #3\n    lsl r0, r0, #0xa\n    tst r0, r7\n    beq _021EA984\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #8]\n    ldrh r0, [r0, #0x24]\n    ldrh r1, [r1, #0x26]\n    ldr r2, [r2, #0x2c]\n    bl NNS_G3dGlbMaterialColorSpecEmi\n    mov r0, #1\n    lsl r0, r0, #0xc\n    cmp r7, r0\n    blt _021EA9AC\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #8]\n    ldr r0, [r0, #0x40]\n    ldr r2, [sp, #8]\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    ldr r3, [sp, #8]\n    ldr r0, [r0, #0x44]\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r1, [r1, #0x34]\n    ldr r0, [r0, #0x30]\n    ldr r2, [r2, #0x38]\n    ldr r3, [r3, #0x3c]\n    bl NNS_G3dGlbPolygonAttr\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EA9B0(void) {
    /* Original at 0x021EA9B0 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #1\n    add r4, r2, #0\n    lsl r0, r0, #8\n    add r6, r1, #0\n    tst r0, r4\n    beq _021EA9C8\n    ldrh r1, [r5, #0x20]\n    add r0, r6, #0\n    bl NNS_G3dMdlSetMdlDiffAll\n    mov r0, #2\n    lsl r0, r0, #8\n    tst r0, r4\n    beq _021EA9D8\n    ldrh r1, [r5, #0x22]\n    add r0, r6, #0\n    bl NNS_G3dMdlSetMdlAmbAll\n    mov r0, #1\n    lsl r0, r0, #0xa\n    tst r0, r4\n    beq _021EA9E8\n    ldrh r1, [r5, #0x24]\n    add r0, r6, #0\n    bl NNS_G3dMdlSetMdlSpecAll\n    mov r0, #2\n    lsl r0, r0, #0xa\n    tst r0, r4\n    beq _021EA9F8\n    ldrh r1, [r5, #0x26]\n    add r0, r6, #0\n    bl NNS_G3dMdlSetMdlEmiAll\n    mov r0, #1\n    lsl r0, r0, #0xc\n    tst r0, r4\n    beq _021EAA08\n    ldr r1, [r5, #0x30]\n    add r0, r6, #0\n    bl NNS_G3dMdlSetMdlLightEnableFlagAll\n    mov r0, #2\n    lsl r0, r0, #0xc\n    tst r0, r4\n    beq _021EAA18\n    ldr r1, [r5, #0x34]\n    add r0, r6, #0\n    bl NNS_G3dMdlSetMdlPolygonModeAll\n    mov r0, #1\n    lsl r0, r0, #0xe\n    tst r0, r4\n    beq _021EAA28\n    ldr r1, [r5, #0x38]\n    add r0, r6, #0\n    bl NNS_G3dMdlSetMdlCullModeAll\n    mov r0, #2\n    lsl r0, r0, #0xe\n    tst r0, r4\n    beq _021EAA38\n    ldr r1, [r5, #0x3c]\n    add r0, r6, #0\n    bl NNS_G3dMdlSetMdlPolygonIDAll\n    mov r0, #1\n    lsl r0, r0, #0x10\n    tst r0, r4\n    beq _021EAA48\n    ldr r1, [r5, #0x40]\n    add r0, r6, #0\n    bl NNS_G3dMdlSetMdlAlphaAll\n    mov r1, #2\n    lsl r1, r1, #0x10\n    add r0, r4, #0\n    tst r0, r1\n    beq _021EAA5E\n    ldr r2, [r5, #0x44]\n    lsr r1, r1, #2\n    add r0, r6, #0\n    and r1, r2\n    bl NNS_G3dMdlSetMdlFogEnableFlagAll\n    mov r1, #1\n    lsl r1, r1, #0x12\n    add r0, r4, #0\n    tst r0, r1\n    beq _021EAA74\n    ldr r2, [r5, #0x44]\n    lsr r1, r1, #4\n    add r0, r6, #0\n    and r1, r2\n    bl NNS_G3dMdlSetMdlDepthTestCondAll\n    mov r1, #2\n    lsl r1, r1, #0x12\n    add r0, r4, #0\n    tst r0, r1\n    beq _021EAA8A\n    ldr r2, [r5, #0x44]\n    lsr r1, r1, #6\n    add r0, r6, #0\n    and r1, r2\n    bl NNS_G3dMdlSetMdl1DotAll\n    mov r1, #1\n    lsl r1, r1, #0x14\n    add r0, r4, #0\n    tst r0, r1\n    beq _021EAAA0\n    ldr r2, [r5, #0x44]\n    lsr r1, r1, #8\n    add r0, r6, #0\n    and r1, r2\n    bl NNS_G3dMdlSetMdlFarClipAll\n    mov r1, #2\n    lsl r1, r1, #0x14\n    add r0, r4, #0\n    tst r0, r1\n    beq _021EAAB6\n    ldr r2, [r5, #0x44]\n    lsr r1, r1, #0xa\n    add r0, r6, #0\n    and r1, r2\n    bl NNS_G3dMdlSetMdlXLDepthUpdateAll\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021EAAB8(void) {
    /* Original at 0x021EAAB8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #6\n    add r4, r1, #0\n    mul r4, r0\n    strh r2, [r5, r4]\n    add r2, r5, #2\n    strh r3, [r2, r4]\n    add r6, sp, #0\n    mov r0, #0x10\n    ldrsh r0, [r6, r0]\n    add r3, r5, #4\n    strh r0, [r3, r4]\n    add r0, r1, #0\n    ldrsh r1, [r5, r4]\n    ldrsh r2, [r2, r4]\n    ldrsh r3, [r3, r4]\n    bl NNS_G3dGlbLightVector\n    pop {r4, r5, r6, pc}"
    );
    #endif
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
    /* Original at 0x021EAB80 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r2, #1\n    ldr r2, [r0, #0x44]\n    bne _021EAB8E\n    tst r2, r1\n    beq _021EAB92\n    pop {r3, pc}\n    tst r2, r1\n    beq _021EABA4\n    ldr r2, [r0, #0x44]\n    eor r1, r2\n    str r1, [r0, #0x44]\n    cmp r3, #1\n    bne _021EABA4\n    mov r1, #1\n    lsl r1, r1, #0xc\n    bl ov01_021EA910\n    pop {r3, pc}"
    );
    #endif
}
