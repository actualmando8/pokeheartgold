/* Decompiled from asm/overlay_80_02236450.s */
#include "global.h"

void ov80_02236450(void) {
    // ldr r2, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // add r4, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
}




void ov80_022364A4(void) {
    // ldr r0, [sp, #0x9c]
    // str r2, [sp, #0x18]
    // str r0, [sp, #0x9c]
    // ldr r0, [sp, #0xa0]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0xa0]
    // ldr r0, [sp, #0xa4]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0xa4]
    // ldr r0, [sp, #0xa8]
    // str r0, [sp, #0xa8]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x88
    // add r0, sp, #0x88
    // str r4, [sp, #0x30]
    // add r0, sp, #0x74
    // str r0, [sp, #0x24]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // str r0, [sp, #0x34]
    // ldr r1, [sp, #0x34]
    // add r0, sp, #0x44
    // str r0, [sp, #0x40]
    // add r5, sp, #0x74
    // add r0, sp, #0x54
    // add r0, sp, #0x44
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x40]
    // ldr r0, [sp, #0x9c]
    // add r1, sp, #0x44
    // ldr r2, [sp, #0x9c]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x20]
    // add r5, sp, #0x74
    // add r0, sp, #0x54
    // add r0, sp, #0x44
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0xa0]
    // add r1, sp, #0x44
    // ldr r2, [sp, #0xa0]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x34]
    // ldr r0, [sp, #0x24]
    // stmia r0!, {r1}
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x74
    // str r0, [sp, #0x28]
    // add r6, sp, #0x64
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x28]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xa8]
    // ldr r3, [sp, #0x38]
    // str r0, [sp, #0x10]
    // stmia r6!, {r0}
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // add r0, #0x38
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0xa4]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x38]
    // ldr r2, [sp, #0xa4]
    // str r1, [r0]
    // add r0, sp, #0x74
    // add r1, sp, #0x64
    // ldr r4, [sp, #0xa4]
    // ldr r4, [sp, #0xa4]
    // str r4, [sp, #0xa4]
    // ldr r0, [sp, #0x2c]
}




void ov80_02236698(void) {
}




void ov80_022366D4(void) {
    MI_CpuFill8(0, (0x11 << 4));
    // str r0, [sp]
    // add r6, r1, r0
    // add r0, r1, r0
    MI_CpuCopy8((r4 * 0x30), r5, 0x30);
    // ldr r0, [sp]
    *((u16*)(r5 + 6)) = *((u16*)(ov80_0223C050 + r0));
    // add r5, #0x30
    // add r0, r6, r4
    // add r0, r7, r0
    MI_CpuCopy8((0x38 * *((u8*)(*((u16*)(ov80_0223C050 + r0)) + 2))), r5, 0x38);
    // add r5, #0x38
}




void ov80_02236734(void) {
    // str r3, [sp]
    MI_CpuFill8(r1, 0, 0x38);
    ov80_02236AF0(*((u8*)(r4 + 0xf)));
    // add r0, sp, #8
    ov80_02229EF4(r6, r0);
    // add r2, sp, #8
    // and r0, r1
    // and r1, r3
    // strh r0, [r5]
    // and r1, r0
    // strh r0, [r5]
    // ldr r0, [sp, #0x3c]
    // add r0, sp, #0x20
    *((u16*)(r5 + 2)) = *((u16*)(r2 + 0xc));
    // str r0, [sp, #4]
    // add r1, sp, #8
    *((u16*)(r5 + 4)) = *((u16*)((*((u8*)((((*((u16*)(r2 + 0xe)) << 0x1b) >> 0x10) | *((u16*)r5)) + 0x18)) << 1) + 2));
    // str r3, [sp, #4]
    // ldr r0, [sp]
    // ldr r7, [sp, #0x30]
    *((u32*)(r5 + 0xc)) = (0 + 1);
    FrontierFieldSystem_0204B510(r4, ((*((u8*)((((*((u16*)(r2 + 0xe)) << 0x1b) >> 0x10) | *((u16*)r5)) + 0x18)) << 1) + 2), (r5 + 2), 0);
    FrontierFieldSystem_0204B510(r4);
    GetNatureFromPersonality((r6 | (r0 << 0x10)));
    // add r1, sp, #8
    // ldr r0, [sp]
    CalcShininessByOtIdAndPersonality(r7);
    *((u32*)(r5 + 0x10)) = r7;
    *((u32*)(r5 + 0x10)) = r7;
    // add r0, sp, #0x20
    // and r0, r1
    // and r2, r0
    // and r2, r1
    // and r2, r1
    // and r2, r1
    // and r1, r2
    *((u32*)(r5 + 0x14)) = (((*((u8*)(r0 + 0x14)) << 0x1b) >> 2) | 0xC1FFFFFF);
    MaskOfFlagNo(0, 0xC1FFFFFF, ((((((*((u32*)(r5 + 0x14)) & ~(0x1f)) | 0x1f) | ((*((u8*)(r0 + 0x14)) << 0x1b) >> 0x16)) | ((*((u8*)(r0 + 0x14)) << 0x1b) >> 0x11)) | ((*((u8*)(r0 + 0x14)) << 0x1b) >> 0xc)) | ((*((u8*)(r0 + 0x14)) << 0x1b) >> 7)));
    // add r1, sp, #8
    // tst r0, r1
    _s32_div_f(0x000001FE, (r6 + 1));
    MaskOfFlagNo(0);
    // add r1, sp, #8
    // tst r0, r1
    // add r0, r5, r4
    *((u8*)(r0 + 0x18)) = r6;
    *((u8*)(r5 + 0x1e)) = 0;
    *((u8*)(r5 + 0x1f)) = *((u8*)gGameLanguage);
    GetMonBaseStat(((*((u16*)r5) << 0x15) >> 0x15), 0x19);
    // tst r1, r2
    // add r1, #0x20
    // strb r0, [r1]
    GetMonBaseStat(((*((u16*)r5) << 0x15) >> 0x15), 0x18, *((u32*)(r5 + 0x10)));
    // add r1, #0x20
    // strb r0, [r1]
    GetMonBaseStat(((*((u16*)r5) << 0x15) >> 0x15), 0x18);
    // add r1, #0x20
    // strb r0, [r1]
    // ldr r0, [sp, #4]
    // add r1, #0x21
    // strb r0, [r1]
    // add r5, #0x22
    // ldr r1, [sp, #0x40]
    GetSpeciesNameIntoArray(((*((u16*)r5) << 0x15) >> 0x15), r5, r5);
}




void ov80_0223690C(void) {
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [r7, r0]
    // str r1, [r7, r0]
    // add r1, r5, r6
    // add r1, #0x2a
    // ldr r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, sp, #0xc
    // str r0, [sp]
    // add r1, #0x78
    // add r1, #0x34
    // str r0, [sp]
    // add r1, r5, r1
    // add r2, r3, r2
    // add r1, r1, r2
    // str r0, [sp]
    // add r1, r5, r1
}




void ov80_02236A34(void) {
    // ldr r4, [sp, #0x28]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r4, [sp]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #8]
    // add r5, #0x30
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // add r5, #0x38
}




void ov80_02236A88(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02236A98: ; jump table
}




void ov80_02236ABC(void) {
    *((u8*)(r0 + 0x10)) = (((((r1 << 0x18) >> 0x18) << 0x1f) >> 0x1c) | (*((u8*)(r0 + 0x10)) & ~(8)));
    // strh r1, [r0, r2]
}




void ov80_02236AD8(void) {
    // ldrh r0, [r1]
}




void ov80_02236AF0(void) {
}




void ov80_02236B04(void) {
}




void ov80_02236B18(void) {
}




void ov80_02236B30(void) {
}



