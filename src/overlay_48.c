/* Decompiled from asm/overlay_48.s */
#include "global.h"

void ov48_02258800(void) {
    OverlayManager_GetArgs();
    Heap_Create(3, 0x70, (5 << 0x10));
    OverlayManager_CreateAndGetData(r4, 0x0000C724, 0x70);
    memset(0, 0x0000C724);
    Save_WiFiHistory_Get(*((u32*)(r5 + 4)));
    *((u32*)(r4 + 0xc)) = r0;
    Save_PlayerData_GetOptionsAddr(*((u32*)(r5 + 4)));
    *((u32*)(r4 + 0x10)) = r0;
    WifiHistory_GetPlayerCountry(*((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x14)) = r0;
    WiFiHistory_GetPlayerRegion(*((u32*)(r4 + 0xc)));
    *((u32*)(r4 + 0x18)) = r0;
    *((u32*)(r4 + 0x1c)) = *((u32*)(r5 + 8));
    ov48_022593F4(r4, r5);
    // add r0, #0x20
    ov48_02259464(r4, *((u32*)(r4 + 0x10)), 0x70);
    // add r0, r4, r0
    // add r1, #0x20
    ov48_02259824((0x5e << 2), r4, 0x70);
    // add r0, r4, r0
    ov48_0225B068((0x5a << 2), 0x70);
    // str r0, [sp, #4]
    // mov r2, sp
    // str r1, [r2]
    *((u32*)((r2 - 4) + 4)) = *((u32*)(r4 + 8));
    // add r0, r4, r0
    // add r2, #0x20
    ov48_022598EC((0x89 << 2), *((u32*)r5), r4, *((u32*)(r2 - 4)));
    // ldmia r3!, {r1, r2}
    // add r0, r4, r0
    ov48_02259BC0(0x0000C3CC, 0x70);
    // add r0, r4, r0
    // add r1, #0x20
    // add r2, r4, r2
    ov48_02259D00(0x0000C3E0, r4, (0x5a << 2), 0x70);
    // str r2, [sp]
    // add r2, #0xf8
    // add r0, r4, r0
    // add r1, #0x20
    // add r2, r4, r2
    ov48_02259EAC((0xc7 << 8), r4, 0x70, *((u32*)(r5 + 4)));
    // add r0, r4, r0
    // add r1, #0x20
    // add r2, r4, r2
    ov48_0225A00C(0x0000C40C, r4, (0x5a << 2), 0x70);
    ov48_02259130(r4, r5);
    Main_SetVBlankIntrCB(ov48_02259090, r4);
    HBlankInterruptDisable();
}




void ov48_02258920(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02258948: ; jump table
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [r4]
}




void ov48_022589FC(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r5);
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    // add r0, r4, r0
    // add r1, #0x20
    ov48_0225A108(0x0000C40C, r4);
    // add r0, r4, r0
    ov48_02259F14((0xc7 << 8));
    // add r0, r4, r0
    ov48_02259D94(0x0000C3E0);
    // add r0, r4, r0
    ov48_02259C38(0x0000C3CC);
    // add r0, r4, r0
    ov48_02259868((0x5e << 2));
    // add r0, r4, r0
    ov48_02259984((0x89 << 2));
    // add r0, r4, r0
    ov48_0225B0A4((0x5a << 2));
    // add r4, #0x20
    ov48_022594A8(r4);
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x70);
}




void ov48_02258A80(void) {
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [r5]
    // str r2, [sp]
    // add r1, sp, #0x2c
    // str r1, [sp, #4]
    // ldr r3, [sp, #0x10]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // str r0, [r5]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // add r0, sp, #0x28
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x10]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // str r0, [r5]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
}




void ov48_02258B7C(void) {
    // mov ip, r1
    // add r3, sp, #0xc
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // mov r0, ip
    // add r0, r4, r5
    *((u16*)(*((u32*)ov48_0225B1EC) + 4)) = r2;
    *((u16*)(*((u32*)ov48_0225B1EC) + 6)) = r3;
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // add r1, sp, #0
    // str r7, [sp]
    // str r6, [sp, #4]
    ov48_02258C6C(0, 0x30, (4 - 1));
    // add r3, r4, r5
    // add r6, sp, #0xc
    // add r3, #8
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #0x50]
    // add r2, sp, #0x38
    ov48_02259A68(*((u32*)r6), *((u16*)((4 - 1) + 0x10)), *((u16*)((4 - 1) + 0x14)));
    // add r1, r4, r5
    *((u16*)(r1 + 0x2c)) = r0;
    // add r0, sp, #0x38
    // add r1, r4, r5
    *((u16*)(r1 + 0x2e)) = *((u16*)(r0 + 0x10));
    *((u16*)(r1 + 0x30)) = *((u16*)(r0 + 0x14));
}




void ov48_02258BF4(void) {
    // asr r1, r1, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    MTX_RotY33_(((((*((u32*)(r1 + 4)) << 0x10) >> 0x10) << 1) << 1), (((((*((u32*)(r1 + 4)) << 0x10) >> 0x10) << 1) + 1) << 1), FX_SinCosTable_);
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotX33_(((*((u32*)r4) << 0x10) >> 0x10), ((((*((u32*)r4) << 0x10) >> 0x10) << 1) << 1), (((((*((u32*)r4) << 0x10) >> 0x10) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0
    MTX_Concat33(r5, r5);
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotZ33_(((*((u32*)(r4 + 8)) << 0x10) >> 0x10), ((((*((u32*)(r4 + 8)) << 0x10) >> 0x10) << 1) << 1), (((((*((u32*)(r4 + 8)) << 0x10) >> 0x10) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0
    MTX_Concat33(r5, r5);
}




void ov48_02258C6C(void) {
    // asr r1, r1, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    MTX_RotY33_(((((*((u32*)r1) << 0x10) >> 0x10) << 1) << 1), (((((*((u32*)r1) << 0x10) >> 0x10) << 1) + 1) << 1), FX_SinCosTable_);
    // neg r0, r0
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotX33_(((*((u32*)(r4 + 4)) << 0x10) >> 0x10), ((((*((u32*)(r4 + 4)) << 0x10) >> 0x10) << 1) << 1), (((((*((u32*)(r4 + 4)) << 0x10) >> 0x10) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0
    MTX_Concat33(r5, r5);
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotZ33_(((*((u32*)(r4 + 8)) << 0x10) >> 0x10), (((((*((u32*)(r4 + 8)) << 0x10) >> 0x10) << 1) + 1) << 1), ((((*((u32*)(r4 + 8)) << 0x10) >> 0x10) << 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0
    MTX_Concat33(r5, r5);
}




void ov48_02258CE4(void) {
    // mov lr, r0
    // mov ip, r1
    // mov r0, lr
    // sub r3, r5, r0
    // bpl _02258D0E
    // eor r3, r0
    // str r1, [r7]
    // and r0, r1
    // str r0, [r6]
    // mov r0, ip
    // sub r4, r3, r0
    // bpl _02258D36
    // sub r1, #0x40
    // eor r4, r1
    // ldr r0, [sp, #0x18]
    // str r2, [r0]
    // and r1, r0
    // ldr r0, [sp, #0x1c]
    // str r1, [r0]
}




void ov48_02258D54(void) {
    // str r0, [sp, #8]
    // str r1, [sp]
    // add r0, r4, r0
    // add r1, sp, #0xc
    ov48_022598CC((0x5e << 2));
    // add r0, r4, r0
    ov48_02259E5C(0x0000C3E0, 0);
    // add r0, r4, r0
    ov48_02259E5C(0x0000C3E0, 1);
    // str r0, [sp, #4]
    // add r0, r4, r0
    ov48_02259E5C(0x0000C3E0, 2);
    // add r0, r4, r0
    ov48_02259CFC(0x0000C3CC);
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // asr r2, r2, #0x10
    // mov ip, r2
    // ldr r2, [sp]
    // asr r0, r0, #0x10
    // tst r2, r3
    // tst r2, r3
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #4]
    // tst r1, r2
    // tst r1, r2
    // ldr r1, [sp, #0x10]
    // add r1, r1, r3
    // str r1, [sp, #0x10]
    // mov r1, ip
    // ldr r1, [sp, #0x10]
    // add r1, r1, r3
    // str r1, [sp, #0x10]
    // tst r1, r2
    // tst r1, r2
    // ldr r1, [sp, #0x10]
    // sub r1, r1, r3
    // str r1, [sp, #0x10]
    // mov r1, ip
    // ldr r1, [sp, #0x10]
    // sub r1, r1, r3
    // str r1, [sp, #0x10]
    // tst r2, r1
    // tst r1, r6
    // add r2, r0, r5
    // ldr r1, [sp, #0xc]
    // add r1, r1, r5
    // str r1, [sp, #0xc]
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // add r1, r1, r5
    // str r1, [sp, #0xc]
    // tst r2, r1
    // tst r1, r6
    // sub r1, r0, r5
    // ldr r0, [sp, #0xc]
    // sub r0, r0, r5
    // str r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // sub r0, r0, r5
    // str r0, [sp, #0xc]
    // add r0, r4, r0
    // add r1, sp, #0xc
    ov48_022598DC((0x5e << 2), (0x13 << 8), r7, 0x20);
}




void ov48_02258F0C(void) {
    _s32_div_f(*((u32*)r0), 0x0000FFFF);
    // str r1, [r4]
    // neg r0, r0
    _s32_div_f(0x0000FFFF);
    // add r0, r2, r0
    // str r0, [r4]
    _s32_div_f(*((u32*)(r4 + 4)), 0x0000FFFF, *((u32*)r4));
    *((u32*)(r4 + 4)) = r1;
    // neg r0, r0
    _s32_div_f(0x0000FFFF);
    // add r0, r2, r0
    *((u32*)(r4 + 4)) = (0x0000FFFF * (r0 + 1));
}




void ov48_02258F64(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02258F7A: ; jump table
    ov48_0225909C((*((u16*)(*((u16*)r0) + 6)) << 0x10));
    // add r0, r4, r0
    ov48_02259C4C(0x0000C3CC);
    // strh r0, [r4]
    // strh r0, [r4]
    // add r0, r4, r0
    // add r1, r4, r1
    ov48_02259C78(0x0000C3CC, (0x89 << 2));
    // strh r0, [r4]
    // add r0, r4, r0
    ov48_02259F48((0xc7 << 8));
    // add r0, r4, r0
    ov48_0225A1D0(0x0000C40C);
    // add r0, r4, r0
    ov48_02259E78(0x0000C3E0);
    // strh r0, [r4]
    // add r0, r4, r0
    ov48_02259F8C((0xc7 << 8));
    // add r0, r4, r0
    ov48_0225A1EC(0x0000C40C);
    // add r0, r4, r0
    ov48_02259FEC((0xc7 << 8));
    // add r0, r4, r0
    ov48_02259E90(0x0000C3E0);
    // strh r0, [r4]
    GF_AssertFail(1);
}




void ov48_02259030(void) {
}




void ov48_02259050(void) {
    Thunk_G3X_Reset();
    // add r0, r4, r0
    ov48_02259C44(0x0000C3CC);
    // add r0, r4, r0
    ov48_02259874((0x5e << 2));
    // add r0, r4, r1
    // sub r1, #0xac
    // add r1, r4, r1
    ov48_022599A0((0x89 << 2));
    // add r4, #0x20
    ov48_022594D0(r4);
    RequestSwap3DBuffers(0, 1);
}




void ov48_02259090(void) {
}




void ov48_0225909C(void) {
    // add r0, r5, r0
    ov48_02259DA0(0x0000C3E0);
    // tst r1, r0
    PlaySE(0x000005DD, *((u32*)(r5 + 0x0000C3E0)));
    // tst r0, r1
    // add r1, sp, #0
    ov48_02259188(r5, *((u32*)(gSystem + 0x48)), gSystem);
    // add r1, sp, #0
    // add r0, r5, r0
    ov48_0225A244(0x0000C40C);
    // add r1, sp, #0
    // add r0, r5, r0
    ov48_0225A20C(0x0000C40C);
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    ov48_022593B4(r5, ((r1 << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18));
    PlaySE(0x000005D6);
    ov48_02258D54(r5, *((u32*)(r2 + 0x44)));
}




void ov48_02259130(void) {
}




void ov48_02259188(void) {
    // add r0, r5, r0
    // add r2, #0x1c
    // str r0, [r4]
    // add r0, r5, r0
    // add r0, r5, r0
}




void ov48_022591D8(void) {
    // add r0, r5, r0
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    // add r1, sp, #0x28
    // ldr r1, [sp, #0x28]
    // sub r0, #0x80
    // asr r0, r0, #0x10
    // add r1, #0x80
    // str r0, [sp, #4]
    // asr r0, r0, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // sub r1, #0x80
    // asr r6, r1, #0x10
    // add r1, #0x80
    // asr r1, r1, #0x10
    // str r1, [sp, #0x18]
    // sub r2, r1, r6
    // bpl _02259224
    // neg r2, r2
    // asr r6, r0, #0x10
    // str r6, [sp, #0x18]
    // sub r0, r6, r0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, r6, r0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // sub r6, #0x80
    // add r0, #0x80
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // sub r0, #0x80
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x80
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // str r6, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // add r1, sp, #0x1c
    // add r0, r5, r0
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #4]
    // ldr r2, [sp]
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x18]
    // ldr r2, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // add r0, sp, #0x28
    // add r0, sp, #0x1c
    // add r0, sp, #0x28
    // add r1, sp, #0x1c
    // str r4, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #8]
}




void ov48_022592E0(void) {
    // sub r4, r3, r2
    // bpl _022592EC
    // neg r4, r4
    // sub r5, r2, r0
    // bpl _022592F6
    // neg r5, r5
    GF_DegreeToSinCosIdxNoWrap(0xb4, *((u32*)(r0 + 4)), *((u32*)r0));
    // sub r4, r0, r4
    GF_DegreeToSinCosIdxNoWrap(0xb4);
    // sub r5, r0, r5
    // add r0, r1, r0
    FX_Sqrt(((r5 * r5) << 0xc), (r4 * r4));
    // asr r0, r0, #0xc
}




void ov48_0225932C(void) {
    // add r0, sp, #0x30
    // add r0, r5, r0
    ov48_02259B10((0x89 << 2), 0xdb, 3);
    // add r0, r5, r0
    ov48_02259BBC((0x89 << 2));
    GF_AssertFail();
    // add r0, r5, r0
    // add r1, sp, #0xc
    ov48_02259B3C((0x89 << 2), r6);
    // add r0, r5, r0
    // add r1, sp, #0
    ov48_02259B3C((0x89 << 2), r7);
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    _s32_div_f((0x18 * ((r0 << 0x10) >> 0x10)), 0x0000FFFF);
    // add r4, r4, r0
    // bpl _02259394
    // add r4, #0x18
    _s32_div_f(r4, 0x18);
}




void ov48_022593B4(void) {
    // add r0, r4, r0
    // add r3, sp, #0xc
    // add r0, r4, r0
    // add r1, sp, #0
    // ldr r0, [sp, #8]
    // add r1, sp, #0xc
    // str r0, [sp, #0x14]
    // add r0, r4, r0
}




void ov48_022593F4(void) {
    *((u32*)(r0 + 4)) = ((*((u32*)(r0 + 4)) & ~(2)) & ~(1));
    *((u32*)(r0 + 4)) = (2 | *((u32*)(r0 + 4)));
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) & ~((2 | *((u32*)(r0 + 4)))));
    // add r7, r2, r4
    *((u32*)(r0 + 4)) = ((*((u32*)(r0 + 4)) & ~(1)) | 1);
    *((u32*)(r0 + 4)) = (1 | (((*((u32*)(r0 + 4)) & ~(1)) | 1) & ~(1)));
}




void ov48_02259464(void) {
    NARC_New(0xc0, r2);
    // str r0, [r5, r1]
    GF_CreateVramTransferManager(0x40, r4);
    GfGfx_SetBanks(ov48_0225B210);
    ov48_022594F0(r5, r6, r4);
    ov48_02259688(r5, r4);
    ov48_02259750(r5, r4);
}




void ov48_022594A8(void) {
    // ldr r0, [r4, r0]
}




void ov48_022594D0(void) {
}




void ov48_022594DC(void) {
}




void ov48_022594F0(void) {
    // str r1, [sp, #0x10]
    SetBothScreensModesAndDisable(ov48_0225B190);
    BgConfig_Alloc(r7);
    // str r0, [r5]
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    // str r0, [sp, #0x14]
    InitBgFromTemplate(*((u32*)r5), ((*((u32*)ov48_0225B1B0) << 0x18) >> 0x18), ov48_0225B2A4, 0);
    BG_ClearCharDataRange(((*((u32*)r4) << 0x18) >> 0x18), 0x20, 0, r7);
    BgClearTilemapBufferAndCommit(*((u32*)r5), ((*((u32*)r4) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x14]
    // add r6, #0x1c
    // str r0, [sp, #0x14]
    // str r3, [sp]
    // str r7, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(*((u32*)(r5 + (0x51 << 2))), 5, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + (0x51 << 2))), 0xb, *((u32*)r5), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + (0x51 << 2))), 0xc, *((u32*)r5), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r5 + (0x51 << 2))), 4, *((u32*)r5), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r7, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r5 + (0x51 << 2))), 0x12, *((u32*)r5), 7);
    LoadFontPal1(0, 0x20, r7);
    LoadFontPal1(4, (0x16 << 4), r7);
    // str r3, [sp]
    // str r7, [sp, #4]
    LoadUserFrameGfx1(*((u32*)r5), 1, 0x1f, 0);
    // str r3, [sp]
    // str r7, [sp, #4]
    LoadUserFrameGfx1(*((u32*)r5), 1, 0x1f, 0);
    // ldr r0, [sp, #0x10]
    Options_GetFrame();
    // str r4, [sp]
    // str r7, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r5), 4, 0xa, 0xa);
    // str r4, [sp]
    // str r7, [sp, #4]
    LoadUserFrameGfx2(*((u32*)r5), 1, 1, 2);
    BG_SetMaskColor(0, 0x000072CA);
}




void ov48_02259650(void) {
    FreeBgTilemapBuffer(*((u32*)r0), ((*((u32*)ov48_0225B1B0) << 0x18) >> 0x18));
    Heap_Free(*((u32*)r6));
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
}




void ov48_02259688(void) {
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r6, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x1f);
    ObjCharTransfer_InitEx(ov48_0225B1A0, 0x10, 0x10);
    ObjPlttTransfer_Init(0x20, r6);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x10);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    // add r1, #8
    G2dRenderer_Init(0x20, r5, r6);
    *((u32*)(r5 + 4)) = r0;
    // add r0, #8
    G2dRenderer_SetSubSurfaceCoords(r5, 0, (1 << 0x14));
    Create2DGfxResObjMan(0x20, 0, r6);
    // str r0, [r5, r7]
    sub_0203A880();
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}




void ov48_02259724(void) {
    // ldr r0, [r5, r6]
}




void ov48_02259750(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    GF_3DVramMan_Create(r1, 0, 2, 0);
    // str r0, [r4, r1]
    NNS_G3dGlbLightVector(0, 0, 0, 0xFFFFF001);
}




void ov48_02259788(void) {
    // mov r1, #5
    // lsl r1, r1, #6
    // ldr r3, _02259794 ; =GF_3DVramMan_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _02259794: .word GF_3DVramMan_Delete
    // TODO: decompile
}




void ov48_02259798(void) {
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r1, [r0]
    // add r0, #0x58
    // and r2, r1
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r1
    // strh r1, [r0]
    G3X_SetFog(0, 0, 0, 0);
    // str r1, [sp]
    G3X_SetClearColor(0x00006B5A, 0, 0x00007FFF, 0x3f);
    // str r1, [r0]
}




void ov48_02259824(void) {
    // str r2, [r4]
    // add r0, #0x9c
    // add r4, #0x9c
    // add r0, #0x24
}




void ov48_02259868(void) {
}




void ov48_02259874(void) {
}




void ov48_022598AC(void) {
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void ov48_022598BC(void) {
    // add r2, #0x18
}




void ov48_022598CC(void) {
    // add r2, #0x18
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void ov48_022598DC(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0x18
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void ov48_022598EC(void) {
    // str r2, [sp, #4]
    // ldr r2, [sp, #0x34]
    // str r0, [sp]
    // str r2, [sp, #0x34]
    ov48_02258A80();
    // ldr r0, [sp]
    // add r5, r0, r1
    // add r6, r0, r1
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #0x34]
    sub_02018030(r5, *((u32*)(r2 + (0x51 << 2))), *((u32*)ov48_0225B178));
    sub_020181B0(r6, r5);
    // add r5, #0x10
    // add r6, #0x78
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp]
    // str r3, [r0, r2]
    // str r3, [r0, r1]
    // add r2, #8
    // str r1, [r0, r2]
    // ldr r0, [sp]
    // str r3, [r0, r2]
    // str r3, [r0, r1]
    // add r2, #8
    // str r3, [r0, r2]
}




void ov48_02259984(void) {
}




void ov48_022599A0(void) {
    // add r1, sp, #4
    ov48_022598AC(r1);
    // add r1, sp, #0x10
    ov48_022598BC(r4);
    // add r4, r5, r0
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #0xc]
    sub_020182A8(r4);
    // add r3, r3, r7
    sub_020182C4(r4, *((u32*)(r5 + 0x0000C004)), *((u32*)(r5 + 0x0000C008)), *((u32*)(r5 + 0x0000C00C)));
    sub_020182C4(r4, *((u32*)(r5 + r1)), *((u32*)(r5 + 0x0000C008)), *((u32*)(r5 + 0x0000C00C)));
    // add r4, #0x78
    // add r0, sp, #0x34
    MTX_Identity33_();
    // add r0, r5, r0
    // add r1, sp, #0x34
    sub_02018288((0xc1 << 8));
    // add r0, r5, r0
    // add r6, #8
    // str r0, [sp]
    // add r1, sp, #0x10
    // add r2, sp, #0x34
    MTX_Concat33(r5);
    // ldr r0, [sp]
    // add r0, r0, r1
    // add r1, sp, #0x34
    sub_02018288(0x78, (*((u16*)(r4 + 0x2c)) * 0x78), *((u16*)(r4 + 0x2c)));
    // add r6, #0x30
    // add r4, #0x30
}




void ov48_02259A68(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
}




void ov48_02259AD0(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    // ldr r2, [sp]
    // ldr r1, [sp, #4]
}




void ov48_02259B10(void) {
    // add r0, #0x30
}




void ov48_02259B3C(void) {
    // add r1, r5, r0
    // ldrsh r0, [r1, r0]
    // str r0, [r4]
    // ldrsh r0, [r1, r0]
}




void ov48_02259B68(void) {
}




void ov48_02259B84(void) {
}




void ov48_02259BA0(void) {
}




void ov48_02259BBC(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}




void ov48_02259BC0(void) {
    Camera_New(r3);
    // str r0, [r4]
    // str r3, [sp]
    // str r0, [sp, #4]
    Camera_Init_FromTargetAndPos(ov48_0225B184, ov48_0225B16C, 0x000005C1, 0);
    Camera_SetPerspectiveClippingPlane(0, (0x19 << 0xe), *((u32*)r4));
    Camera_ApplyPerspectiveType(0, *((u32*)r4));
    Camera_SetStaticPtr(*((u32*)r4));
    // ldr r0, [sp, #0x14]
    *((u16*)(r4 + 0x10)) = 1;
    *((u16*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0xc)) = (0x4a << 0xe);
    Camera_SetDistance(*((u32*)(r4 + 0xc)), *((u32*)r4));
}




void ov48_02259C38(void) {
}




void ov48_02259C44(void) {
}




void ov48_02259C4C(void) {
    *((u16*)(r0 + 0x10)) = 1;
    PlaySE(0x000005D5);
    *((u16*)(r4 + 0x10)) = 0;
    PlaySE(0x000005D5);
    *((u16*)(r4 + 0x12)) = 1;
}




void ov48_02259C78(void) {
    // sub r0, r3, r0
    *((u32*)(r0 + 0xc)) = (2 << 0xe);
    // sub r3, #0x80
    // str r3, [r1, r0]
    // str r3, [r1, r0]
    *((u32*)(r0 + 0xc)) = (5 << 0x10);
    *((u16*)(r0 + 0x12)) = 0;
    // add r0, r3, r0
    *((u32*)(r0 + 0xc)) = (2 << 0xe);
    // add r3, #0x80
    // str r3, [r1, r0]
    // str r3, [r1, r0]
    *((u32*)(r0 + 0xc)) = (0x4a << 0xe);
    *((u16*)(r0 + 0x12)) = 0;
    Camera_SetDistance(*((u32*)(r0 + 0xc)), *((u32*)r0), r0, *((u32*)(r1 + 0x0000C004)));
}




void ov48_02259CFC(void) {
    // ldrh r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}




void ov48_02259D00(void) {
    memset(0, 0x2c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x1c
    AddWindowParameterized(*((u32*)r4), r5, 1, 0x19);
    // add r0, #0x1c
    FillWindowPixelBuffer(r5, 0xf);
    ov48_0225B0C4(r6, 1);
    FontID_Alloc(2, r7);
    FontID_String_GetCenterAlignmentX(2, r4, 0, 0x30);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x1c
    AddTextPrinterParameterizedWithColor(r5, 2, r4, r0);
    FontID_Release(2);
    // add r5, #0x1c
    DrawFrameAndWindow1(r5, 0, 0x1f, 0);
}




void ov48_02259D94(void) {
}




void ov48_02259DA0(void) {
    // str r0, [r4]
    // str r0, [r4]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0x18)) = 0;
    // str r0, [r4]
    *((u32*)(r0 + 8)) = *((u16*)(gSystem + 0x20));
    *((u32*)(r0 + 0xc)) = *((u16*)(gSystem + 0x22));
    *((u32*)(r0 + 0x18)) = 4;
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 1);
    *((u32*)(r0 + 0x18)) = ((*((u32*)(r0 + 4)) + 1) - 1);
    // add r0, sp, #0xc
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // add r2, sp, #0x14
    // add r3, sp, #0x10
    ov48_02258CE4(*((u32*)(r0 + 8)), *((u32*)(r0 + 0xc)));
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // str r0, [r4]
    // ldr r0, [sp, #0x10]
    *((u32*)(r4 + 0x10)) = (r0 | r1);
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 0x14)) = (r0 | r1);
    *((u32*)(r4 + 8)) = *((u16*)(gSystem + 0x20));
    *((u32*)(r4 + 0xc)) = *((u16*)(gSystem + 0x22));
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0;
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    *((u32*)(r4 + 0x18)) = 0;
}




void ov48_02259E5C(void) {
    // cmp r1, #0
    // beq _02259E6A
    // cmp r1, #1
    // beq _02259E6E
    // cmp r1, #2
    // beq _02259E72
    // bx lr
    // ldr r0, [r0]
    // bx lr
    // ldr r0, [r0, #0x10]
    // bx lr
    // ldr r0, [r0, #0x14]
    // bx lr
    // TODO: decompile
}




void ov48_02259E78(void) {
}




void ov48_02259E90(void) {
}




void ov48_02259EAC(void) {
    // ldr r1, [sp, #0x28]
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x10
    // add r0, #0x10
    // ldr r0, [sp, #0x28]
}




void ov48_02259F14(void) {
    // add r4, #0x10
}




void ov48_02259F48(void) {
    // add r0, #0x10
    // add r0, #0x10
    // add r0, #0x10
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, #0x10
    // str r0, [r4]
}




void ov48_02259F8C(void) {
    TextPrinterCheckActive(((*((u32*)(r0 + 4)) << 0x18) >> 0x18));
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0x10
    GetWindowBgConfig(r5, ov48_0225B1C4);
    // str r0, [sp]
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(*((u32*)(r5 + 0x20)));
    // str r0, [r5]
    YesNoPrompt_HandleInput(*((u32*)(r5 + 0x20)));
}




void ov48_02259FEC(void) {
}




void ov48_0225A00C(void) {
    // str r1, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // str r0, [sp, #0x14]
    // str r3, [sp, #0x20]
    // str r2, [r1]
    ov48_0225A288(r0, 0);
    // ldr r5, [sp, #0x14]
    // add r5, #0xa0
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    ov48_0225A894(r5, ov48_0225B268, *((u8*)_0225B164));
    // add r6, #0xc
    // add r5, #0x28
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r3
    AddWindowParameterized(*((u32*)0x28), 4, 2);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    FillWindowPixelBuffer(0xf);
    // ldr r0, [sp, #0x1c]
    ov48_0225B0C4(0);
    // str r3, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x14]
    // add r1, #0xa9
    // add r0, r0, r1
    // str r3, [sp, #8]
    AddTextPrinterParameterized(1, r0, 0);
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    DrawFrameAndWindow2(0, 0xa, 0xa);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x20]
    ov48_0225A6DC();
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r3, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r3, #0x98
    GfGfxLoader_GetScrnDataFromOpenNarc(*((u32*)(r0 + (0x51 << 2))), 0x13, 0);
    // ldr r1, [sp, #0x14]
    // add r1, #0x94
    // str r0, [r1]
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // ldr r2, [sp, #0x14]
    // add r2, r2, r3
    // ldr r1, [sp, #0x18]
    // ldr r3, [sp, #0x20]
    ov48_0225AAAC((0x6e << 2), (0xb9 << 2));
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    ov48_0225A5C4((0xb9 << 2));
}




void ov48_0225A108(void) {
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, #0x94
    // add r0, r5, r0
    // add r5, #0xa0
    // add r5, #0x28
}




void ov48_0225A158(void) {
    // add r3, r3, r3
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _0225A170: ; jump table
    // add r0, r4, r0
    // add r1, r4, r1
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
}




void ov48_0225A1D0(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}




void ov48_0225A1EC(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}




void ov48_0225A20C(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225A220: ; jump table
    // str r2, [r0]
    // str r1, [r0]
}




void ov48_0225A244(void) {
    // add r7, sp, #0
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #8]
}




void ov48_0225A288(void) {
}




void ov48_0225A294(void) {
}




void ov48_0225A2A0(void) {
    // sub r2, r2, r3
    // ror r2, r1
    // add r2, r3, r2
    // add r0, r5, r0
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}




void ov48_0225A2EC(void) {
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
}




void ov48_0225A30C(void) {
    // sub r2, r1, r2
    // bpl _0225A322
    // add r0, r0, r1
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void ov48_0225A338(void) {
}




void ov48_0225A354(void) {
    // str r1, [sp]
    // add r0, #0x40
    // add r4, #0xa0
    // add r4, #0x28
    // add r0, r5, r0
    // str r0, [sp, #8]
    // add r0, #0xa0
    // str r0, [sp, #8]
    // mvn r7, r7
    // str r0, [sp, #0xc]
    // add r0, #0x3e
    // str r7, [sp, #0x10]
    // str r0, [sp, #0xc]
    // sub r4, r0, r6
    // add r1, sp, #0x14
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // ldr r3, [sp]
    // add r2, sp, #0x14
    // add r1, r5, r0
    // ldr r0, [sp, #4]
    // add r1, #0x88
    // str r0, [r1]
    // ldr r2, [sp, #0x14]
    // add r0, r5, r0
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // strh r1, [r0]
    // ldr r7, [sp, #0x14]
    // add r1, r5, r0
    // add r1, #0x88
    // ldr r7, [sp, #0x10]
    // str r0, [r1]
}




void ov48_0225A41C(void) {
}




void ov48_0225A428(void) {
}




void ov48_0225A430(void) {
}




void ov48_0225A43C(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, r5, r0
    // add r0, r5, r0
}




void ov48_0225A4B4(void) {
    // add r0, r0, r1
    // add r0, #0x40
    // strb r2, [r0]
}




void ov48_0225A4C0(void) {
    // str r2, [sp]
    // add r0, r5, r2
    // add r0, #0x40
    // add r0, #0x41
    // ldrsb r4, [r0, r2]
    // add r6, r0, r2
    // sub r7, r0, r1
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // add r0, r5, r0
    // add r0, #0x88
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // ldr r2, [sp]
    // add r0, r5, r0
    // asr r1, r1, #0x10
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // ldr r0, [sp, #8]
    // add r5, #0xa0
    // add r0, r5, r1
    // ldr r2, [sp]
    // ldrsb r1, [r6, r0]
    // strb r1, [r6]
}




void ov48_0225A57C(void) {
    // add r0, #0x98
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r2, #0xc
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov48_0225A5C4(void) {
    // and r3, r2
    // str r2, [r1]
    // add r5, #0x4a
    // strh r2, [r5]
    // add r1, #0x48
    // strh r3, [r1]
    // and r3, r5
    // strh r2, [r1]
    ov48_0225A650(0, 0, 0xFFFFC0FF);
    ov48_0225A668(r4, 0, 0);
    SysTask_CreateOnVWaitQueue(ov48_0225A680, r4, 0);
    *((u32*)(r4 + 0xc)) = r0;
}




void ov48_0225A634(void) {
}




void ov48_0225A650(void) {
    // strh r3, [r0]
}




void ov48_0225A668(void) {
}




void ov48_0225A680(void) {
    // ldrsh r0, [r1, r4]
    // ldrsh r2, [r1, r0]
    // ldrsh r5, [r1, r0]
    // strh r3, [r0]
    // and r3, r5
    *((u16*)(0x04001040 + 4)) = (((r2 << 0x18) >> 0x18) | (0xff << 8));
    // strh r4, [r1]
    // ldrsh r0, [r1, r0]
    // ldrsh r2, [r1, r0]
    // ldrsh r4, [r1, r0]
    // strh r3, [r0]
    // and r3, r4
    *((u16*)(0x04001042 + 4)) = ((((((r2 << 0x18) >> 0x18) | (0xff << 8)) << 0x18) >> 0x18) | (0xff << 8));
    *((u16*)(r1 + 2)) = 0;
}




void ov48_0225A6DC(void) {
    // str r1, [sp, #0x18]
    // add r1, #0xd4
    // str r0, [sp, #0x14]
    // add r5, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r6, #0xa2
    // add r5, #0x10
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r1, r1, r2
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
}




void ov48_0225A768(void) {
    // add r5, r6, r0
    // add r5, #0x10
    // add r0, r6, r0
}




void ov48_0225A790(void) {
    GF_AssertFail();
    // add r5, r5, r0
    // add r0, r5, r4
    FillWindowPixelBuffer((0x5a << 2), 0);
    ov48_0225B038(*((u32*)r6));
    // str r0, [sp, #0x10]
    ov48_0225B0C4(r7, 2);
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r4
    AddTextPrinterParameterizedWithColor(*((u32*)(ov48_0225B1D8 + (0xff << 2))), 1, r0, 0);
    ov48_0225B0E0(r7, *((u32*)(r6 + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r4
    AddTextPrinterParameterizedWithColor(0x00010200, 1, r0, 0);
    ov48_0225B108(r7, *((u32*)(r6 + 4)), *((u32*)(r6 + 8)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x00010200, 1, r0, 0);
}




void ov48_0225A834(void) {
    // add r1, r5, r0
    // add r0, r1, r0
}




void ov48_0225A858(void) {
    // add r0, r2, r0
}




void ov48_0225A868(void) {
    // add r2, r0, r2
    // add r0, r2, r0
    // add r0, r0, r1
}




void ov48_0225A894(void) {
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x28]
    // str r2, [sp, #8]
    // str r1, [sp, #0x28]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r4, [sp, #8]
    // add r6, #0x10
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x24
    // strb r1, [r0]
    // ldr r0, [sp, #8]
    // add r0, #0x26
    // strb r1, [r0]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r3, [sp, #0x28]
    // add r2, #0x20
}




void ov48_0225A928(void) {
    // add r0, #0x24
}




void ov48_0225A95C(void) {
    // str r0, [sp, #0x20]
    // add r0, #0x24
    // str r0, [sp, #0x1c]
    // strh r1, [r5]
    // ldr r0, [sp, #0x20]
    // add r0, r5, r6
    // add r0, r5, r0
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, #0x24
    // add r0, #0x25
    // ldr r0, [sp, #0x1c]
    // add r1, #0x25
    // strb r0, [r1]
    // add r1, #0x26
    // add r5, #0x25
    // add r2, r3, r2
}




void ov48_0225AA38(void) {
}




void ov48_0225AA50(void) {
}




void ov48_0225AA5C(void) {
    // add r0, r0, r2
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r2, #0xc
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
}




void ov48_0225AAAC(void) {
    // str r0, [sp, #0x2c]
    // str r2, [sp, #0x30]
    // add r2, sp, #0x44
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x2c]
    // str r3, [sp, #0x34]
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0x34]
    // str r0, [sp, #0x44]
    // add r0, sp, #0x64
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x58]
    // str r3, [sp, #0x60]
    // str r2, [sp, #0x5c]
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // ldr r2, [sp, #0x34]
    // add r0, #0xf4
    // str r2, [sp, #0xc]
    // add r1, #0xc4
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x40]
    // ldr r4, [sp, #0x2c]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x40]
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x3c]
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x38]
    // str r6, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x64
    // add r0, sp, #0x44
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x3c]
    // add r4, #0x10
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x30]
}




void ov48_0225AC34(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    StopSE(0x000005D8, 0);
    // ldr r7, [sp]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    Sprite_Delete(*((u32*)(0 + 0x3c)));
    sub_0200AEB0(*((u32*)(r7 + 0x6c)));
    // ldr r0, [sp, #8]
    sub_0200B0A8(*((u32*)(r7 + 0x70)));
    // ldr r1, [sp, #4]
    DestroySingle2DGfxResObj(*((u32*)(r1 + (0x4d << 2))), *((u32*)(r7 + 0x70)));
    // ldr r5, [sp, #4]
    DestroySingle2DGfxResObj(*((u32*)(r5 + (0x13 << 4))), *((u32*)(r7 + 0x6c)));
    // ldr r0, [sp]
    // add r7, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov48_0225ACAC(void) {
    // add r1, #0x34
    // strb r3, [r1]
    // add r2, #0x34
    // add r1, #0x38
    // strb r3, [r1]
    // add r2, #0x38
}




void ov48_0225ACD8(void) {
    // add r0, r5, r4
    // str r3, [sp]
    // add r0, #0x34
    // strb r1, [r0]
    // add r6, #0x38
    ov48_0225B050(r2, 1);
    // strb r0, [r6, r4]
    // add r1, r3, r1
    // add r0, r5, r7
    // add r1, r1, r7
    ov48_0225AE3C((0x30 * *((u8*)(r6 + r4))), *((u8*)(r6 + r4)), ov48_0225B330);
    // ldr r0, [sp]
    ov48_0225B050();
    // add r0, r5, r0
    ov48_0225AE5C(((r4 + 1) << 4), 1);
    // add r0, r5, r7
    ov48_0225AE58(1);
}




void ov48_0225AD38(void) {
}




void ov48_0225AD54(void) {
    // ldrsh r2, [r5, r1]
    *((u16*)(r0 + 0x32)) = (r2 - 1);
    // ldrsh r1, [r5, r1]
    // ldrsh r1, [r5, r1]
    ov48_0225ADBC(0x30, r1);
    PlaySE(0x000005D8);
    // ldrsh r1, [r5, r1]
    ov48_0225ADF8(0x30, r4);
    // ldrsh r0, [r5, r1]
    // bmi _0225ADA6
    *((u16*)(r5 + 0x30)) = (r0 - 1);
    // ldrsh r1, [r5, r1]
    ov48_0225ADBC(r5, 0x30, r4);
    StopSE(0x000005D8, 0);
    *((u16*)(r5 + 0x30)) = 2;
    *((u16*)(r5 + 0x32)) = 0x80;
}




void ov48_0225ADBC(void) {
    // add r0, r5, r4
    // add r0, #0x34
    // add r0, r5, r0
    // add r0, r5, r4
    // add r0, #0x38
    // add r0, r5, r0
}




void ov48_0225ADF8(void) {
    // add r0, r5, r4
    // add r0, #0x34
    // add r0, r5, r0
    // add r0, r5, r4
    // add r0, #0x38
    // add r0, r5, r0
}




void ov48_0225AE3C(void) {
    // ldrsh r2, [r1, r3]
    // strh r2, [r0]
    // ldrsh r1, [r1, r2]
    // add r1, #0x10
}




void ov48_0225AE58(void) {
}




void ov48_0225AE5C(void) {
}




void ov48_0225AE60(void) {
    // ldrsh r3, [r5, r1]
    // ldrsh r1, [r2, r1]
    // ldrsh r0, [r5, r0]
    // ldrsh r0, [r5, r0]
    // ldrsh r0, [r1, r0]
}




void ov48_0225AEA8(void) {
}




void ov48_0225AEC4(void) {
    // ldrsh r2, [r0, r2]
    // str r2, [r1]
    // ldrsh r0, [r0, r2]
    // add r0, r3, r0
}




void ov48_0225AEDC(void) {
    // ldrsh r0, [r2, r0]
    // sub r0, #0x10
    // asr r7, r0, #0x10
    // ldrsh r7, [r2, r0]
    // ldrsh r0, [r2, r0]
    // add r0, #0x10
    // asr r4, r0, #0x10
    // ldrsh r4, [r2, r0]
    // ldrsh r6, [r2, r0]
    // ldrsh r1, [r5, r0]
    // ldrsh r0, [r2, r0]
    // sub r0, r0, r6
    // ldrsh r1, [r2, r1]
    _s32_div_f((4 * r1), 8, *((u32*)(r0 + 0xc)));
    // add r0, r6, r0
    // strh r0, [r5]
    // ldrsh r1, [r5, r0]
    // sub r0, r7, r4
    // ldrsh r1, [r2, r1]
    _s32_div_f((4 * r1), 8, *((u32*)(r5 + 0xc)));
    // add r0, r4, r0
    *((u16*)(r5 + 2)) = r0;
    // ldrsh r1, [r5, r0]
    // ldrsh r1, [r4, r1]
    _s32_div_f((0x0000FFFF * r1), 0xc);
    // asr r0, r0, #4
    // ldrsh r6, [r0, r1]
    // ldrsh r0, [r4, r0]
    _fflt((0xa << 0xc), (((r0 << 0x10) >> 0x10) << 2));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r3, r0, r3
    // adc r1, r4
    // ldrsh r2, [r5, r4]
    // asr r0, r1, #0xc
    // add r0, r2, r0
    // strh r0, [r5]
}




void ov48_0225AFB4(void) {
    // ldrsh r1, [r1, r0]
    // ldrsh r2, [r5, r0]
    // sub r0, #0x10
    // add r2, #0x20
    // asr r2, r2, #0x10
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r5, r0]
    // sub r0, #0x10
    // sub r1, #0x20
    // asr r1, r1, #0x10
}




void ov48_0225B010(void) {
    // add r0, r5, r0
    // add r1, sp, #0
    // add r0, r5, r4
    // add r0, #0x38
    // add r1, sp, #0
    // add r0, r5, r0
}




void ov48_0225B038(void) {
}




void ov48_0225B050(void) {
}




void ov48_0225B068(void) {
    NewMsgDataFromNarc(0, 0x1b, 0x00000321, r1);
    // str r0, [r5]
    MessageFormat_New_Custom(8, 0x40, r4);
    *((u32*)(r5 + 4)) = r0;
    String_New(0x80, r4);
    *((u32*)(r5 + 8)) = r0;
    String_New(0x80, r4);
    *((u32*)(r5 + 0xc)) = r0;
}




void ov48_0225B0A4(void) {
}




void ov48_0225B0C4(void) {
}




void ov48_0225B0D4(void) {
}




void ov48_0225B0E0(void) {
}




void ov48_0225B108(void) {
}




void ov48_0225B13C(void) {
}



