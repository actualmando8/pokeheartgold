/* Decompiled from asm/overlay_01_021F3610.s */
#include "global.h"

void ov01_021F3610(void) {
    // str r1, [r6, r0]
    // add r5, r6, r0
}




void ov01_021F3638(void) {
    Heap_Alloc(0x00000704);
    MIi_CpuClearFast(0, r0, 0x00000704);
    ov01_021F3610(r4, r5);
}




void ov01_021F3660(void) {
}




void ov01_021F3668(void) {
    // add r2, sp, #0
    // str r0, [r2]
    // str r0, [r3]
    // ldmia r5!, {r0, r1}
    // add r4, #0x14
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldmia r5!, {r0, r1}
    // add r4, #0x20
    // stmia r4!, {r0, r1}
    // add r3, #0x2c
    // str r0, [r4]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void ov01_021F36AC(void) {
    // add r5, r6, r0
}




void ov01_021F36DC(void) {
    // add r3, sp, #0
    // str r1, [r3]
    // add r2, r4, r7
    // str r1, [r4, r7]
    // ldmia r6!, {r0, r1}
    // add r5, #0x14
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // ldmia r6!, {r0, r1}
    // add r5, #0x20
    // stmia r5!, {r0, r1}
    // add r2, #0x2c
    // str r0, [r5]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r5, #0x10
    // str r0, [r5, r7]
}




void ov01_021F3744(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // str r0, [sp]
    // str r0, [sp]
    // ldr r5, [sp, #4]
    // ldr r0, [sp]
    // str r0, [r4]
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, #0x10
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, #0x1c
    // ldmia r3!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [r4]
    // add r0, sp, #8
    // str r1, [r0]
    // str r0, [r4]
    // add r3, sp, #8
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // add r3, sp, #8
    // str r0, [r2]
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // add r3, sp, #8
    // str r0, [r2]
    // ldmia r3!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r4, #0x38
    // add r5, #0x30
    // ldr r0, [sp, #4]
}




void ov01_021F3834(void) {
    // ldr r0, [sp, #0x48]
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x4c]
    // str r1, [sp]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x10]
    GF_AssertFail(*((u8*)(r3 + 1)));
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x18
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp]
    // str r0, [sp, #8]
    // add r2, sp, #0x24
    // str r0, [r2]
    *((u32*)(r2 + 4)) = 0;
    // ldr r3, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    *((u32*)(r2 + 8)) = 0;
    // ldr r1, [sp, #8]
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 0xc)) = 0;
    // ldmia r5!, {r0, r1}
    // add r3, #0x14
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r3, [sp, #8]
    // ldmia r2!, {r0, r1}
    // add r3, #0x20
    // stmia r3!, {r0, r1}
    // ldr r2, [sp, #8]
    // str r0, [r3]
    // add r3, sp, #0x18
    // ldmia r3!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r2, [sp, #0x4c]
    // add r0, sp, #0x14
    GetSafariObjectConfig(*((u32*)r1), *((u8*)(r4 + 2)), r1);
    // add r1, sp, #0x14
    // ldr r0, [sp, #8]
    // str r2, [r0]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // sub r1, r0, r1
    // add r0, #0xfe
    // add r1, r2, r1
    // asr r7, r1, #0x10
    // add r1, r1, r2
    // asr r1, r1, #0x10
    // sub r0, r1, r0
    _fflt((2 << 0xc), ((((*((u8*)(r1 + 1)) << 0x1c) >> 0x1d) << 3) << 0x10), (*((u8*)(r4 + 3)) << 4));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #8]
    *((u32*)(r1 + 0x14)) = r0;
    _fflt((r5 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r5 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #8]
    *((u32*)(r1 + 0x18)) = r0;
    // sub r0, r7, r0
    _fflt(((1 << 8) << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #8]
    // add r3, sp, #0x24
    *((u32*)(r1 + 0x1c)) = r0;
    // ldmia r3!, {r0, r1}
    // add r2, #0x20
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x18
    // str r0, [r2]
    // ldr r2, [sp, #8]
    // ldmia r3!, {r0, r1}
    // add r2, #0x2c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #8]
    *((u32*)(*((u32*)r3) + 4)) = 1;
    *((u32*)(*((u32*)r3) + 0xc)) = 0;
    // ldr r0, [sp, #4]
    // sub r0, r7, r0
    // mov ip, r0
    // add r3, sp, #0x14
    // add r2, r1, r6
    // mov r2, ip
    // ldr r2, [sp, #0x48]
    // add r5, r2, r5
    // add r2, r5, r2
    // strh r0, [r2]
    // add r5, r6, r5
    // mov r1, ip
    // sub r1, #0x20
    // mov ip, r1
    // sub r1, r1, r2
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    ov01_02204154(*((u32*)(0x00008023 + (7 << 8))), *((u32*)(7 << 8)), ((*((u8*)(r3 + 1)) << 0x19) >> 0x1d));
    // ldr r0, [sp, #8]
    // str r1, [r0]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    ov01_022040F8(*((u32*)(r0 + (7 << 8))), *((u32*)(7 << 8)));
    // ldr r1, [sp, #8]
    *((u32*)(r1 + 0x10)) = r0;
    // ldr r0, [sp, #8]
    // add r0, #0x38
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov01_021F3A3C(void) {
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #8]
    // add r3, sp, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r5, [sp, #0x60]
    // str r0, [r3]
    // add r4, #0x14
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0x3c
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp, #0x3c]
    // add r0, r1, r0
    // str r0, [sp, #0x3c]
    // ldr r1, [sp, #0x44]
    // add r3, #0x2c
    // add r0, r1, r0
    // str r0, [sp, #0x44]
    // add r2, sp, #0x18
    sub_0201F990(*((u32*)(*((u32*)(r5 + 0x10)) + 0x54)), r3, r3, r5);
    // ldr r0, [sp, #8]
    ov01_021FB9F4();
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    ov01_021EA9B0(*((u32*)(*((u32*)(r5 + 0x10)) + 0x54)), 0x00000F33);
    // add r2, sp, #0x14
    ov01_021EA7F8(*((u32*)r5), r4);
    // add r0, sp, #0x14
    // add r1, sp, #0x3c
    // add r2, sp, #0x18
    // add r3, #0x2c
    GF3dRender_DrawModel(*((u32*)(r5 + 0x10)), r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0x18
    // add r3, #0x2c
    ov01_021F3B84(*((u32*)(*((u32*)(r5 + 0x10)) + 0x54)), r5);
    // add r5, #0x38
}




void ov01_021F3B04(void) {
    // add r0, #0x2c
}




void ov01_021F3B08(void) {
    // add r0, #0x20
}




void ov01_021F3B0C(void) {
    // add r2, #0x14
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void ov01_021F3B1C(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void ov01_021F3B2C(void) {
}




void ov01_021F3B30(void) {
}




void ov01_021F3B34(void) {
}




void ov01_021F3B38(void) {
}




void ov01_021F3B3C(void) {
}




void ov01_021F3B44(void) {
    // add r0, r0, r2
}




void ov01_021F3B4C(void) {
    // add r0, #0x38
}




void ov01_021F3B60(void) {
    // add r4, r5, r0
}




void ov01_021F3B84(void) {
    NNS_G3dGlbSetBaseTrans(r1);
    MI_Copy36B(r4, NNS_G3dGlb);
    *((u32*)(NNS_G3dGlb + 0x7c)) = (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0xa4));
    NNS_G3dGlbSetBaseScale(r5, NNS_G3dGlb, (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0xa4)));
    NNS_G3dGlbFlushP();
    // add r2, sp, #0
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // add r2, #2
    // add r3, sp, #0
    ov01_021EA804();
    // add r0, sp, #0
    // ldr r1, [sp, #0x18]
    ov01_021EA81C(*((u16*)r0));
    // add r0, sp, #0
    // add r2, r6, r0
    NNS_G3dDraw1Mat1Shp(r7, ((*((u16*)(r0 + (0 << 2))) << 0x18) >> 0x18), *((u16*)(r2 + 2)), 0);
    // add r0, sp, #0
}




void ov01_021F3C0C(void) {
    // mov ip, r1
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r5, r6, r1
    *((u32*)(r5 + 4)) = 1;
    // add r3, #0x14
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    *((u32*)(r5 + 0xc)) = 1;
    // ldmia r2!, {r0, r1}
    // add r3, #0x20
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    *((u32*)(r5 + 0xc)) = 0;
    // add r2, sp, #0
    // ldmia r2!, {r0, r1}
    // add r3, #0x2c
    // stmia r3!, {r0, r1}
    // mov r1, ip
    // str r0, [r3]
    // mov r0, ip
    // str r0, [r5]
    ov01_022040F8(*((u32*)(r0 + (7 << 8))), *((u32*)(r5 + 4)), r3, r5);
    *((u32*)(r5 + 0x10)) = r0;
    GF_AssertFail(r4, ((r4 + 1) << 0x18));
}




void ov01_021F3C9C(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r7, sp, #0x14
    // ldr r0, [sp, #8]
    // add r5, r0, r1
    // ldr r0, [sp, #0xc]
    ov01_021FB9F4(*((u32*)(r5 + 8)), (0 * 0x38), (4 - 1));
    // add r2, sp, #0x10
    ov01_021EA7F8(*((u32*)r5), r0);
    // add r1, #0x20
    sub_02020D2C(r7, r5);
    // add r0, sp, #0x10
    // add r5, #0x2c
    // add r1, #0x14
    GF3dRender_DrawModel(*((u32*)(r5 + 0x10)), r5, r7, r5);
    // str r6, [sp]
    // str r0, [sp, #4]
    // add r5, #0x2c
    // add r1, #0x14
    ov01_021F3B84(*((u32*)(*((u32*)(r5 + 0x10)) + 0x54)), r5, r7, r5);
}



