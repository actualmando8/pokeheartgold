/* Decompiled from asm/overlay_92.s */
#include "global.h"

void ov92_0225C540(void) {
}




void ov92_0225C558(void) {
}




void ov92_0225C564(void) {
    // add r1, r1, r0
    // str r2, [r1, r0]
}




void ov92_0225C578(void) {
    // add r0, r3, r0
}




void ov92_0225C584(void) {
    // bx lr
    // TODO: decompile
}




u8 ov92_0225C588(void) {
}




u8 ov92_0225C58C(void) {
}




u8 ov92_0225C590(void) {
}




u8 ov92_0225C594(void) {
}




u8 ov92_0225C598(void) {
}




void ov92_0225C59C(void) {
    // ldr r0, _0225C5A0 ; =_0226383C
    // bx lr
    // _0225C5A0: .word _0226383C
    // TODO: decompile
}




u8 ov92_0225C5A4(void) {
}




void ov92_0225C5A8(void) {
}




void ov92_0225C5C4(void) {
    GetLCRNGSeed();
    // add r1, #0x80
    // str r0, [r1]
    ov92_0225D3CC(r5, r5);
    Main_SetVBlankIntrCB(ov92_0225D894, r5);
    HBlankInterruptDisable();
    GF_CreateVramTransferManager(0x20, 0x71);
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x00200010);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    sub_0203A880();
    sub_0203A4AC(0x71);
    // add r1, sp, #0x24
    NNS_G2dGetUnpackedPaletteData();
    // str r0, [sp]
    // ldr r1, [sp, #0x24]
    PaletteData_LoadPalette(*((u32*)(r5 + 0x5c)), *((u32*)(r1 + 0xc)), 2, 0xe0);
    Heap_Free(r4);
    sub_020347A0();
    sub_0203769C();
    *((u32*)(r5 + 0x44)) = r0;
    ov92_0225C5A8(r5);
    ov92_0225D8C4(r5);
    // add r1, #0x48
    ov92_0225EB40(r4, r5);
    // str r0, [r5]
    // add r2, #0x48
    ov92_0225EB88(r4, *((u32*)(r5 + 0x44)), r5);
    *((u32*)(r5 + 4)) = r0;
    // str r2, [r0, r1]
    // add r0, #0x80
    // str r3, [r2, r0]
    sub_020210BC((0x00002BB4 - 4), 0x00002BB4, *((u32*)(r5 + 4)), *((u32*)r5));
    sub_02021148(4);
    ov92_0225E9B4(r5);
    ov92_0225E3C4(r5);
    ov92_0225E6A4(r5, *((u32*)(r5 + 4)));
    ov92_0225DE70(*((u32*)(r5 + 4)));
    ov92_0225DE08(*((u32*)(r5 + 4)));
    ov92_0225E820(*((u32*)(r5 + 4)));
    ov92_0225E93C(*((u32*)(r5 + 4)));
    ov92_0226077C(r5, *((u32*)(r5 + 0x44)));
    ov92_0225E130(r5, r0);
    // add r3, sp, #0x38
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #0xc]
    // ldr r4, [sp, #0xc]
    // add r0, sp, #0x38
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // add r0, #0x6c
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #8]
    // add r0, r1, r0
    // add r0, r0, r4
    ov92_0225D9A8((0xb5 << 4), *((u32*)(r5 + 0x48)), *((u32*)(0x10 - 1)));
    // add r0, r1, r0
    // add r0, r0, r4
    ov92_0225D9B4((0xb5 << 4), *((u8*)(r5 + 0x14)));
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    // add r0, r1, r0
    // add r1, r1, r2
    // add r0, r0, r4
    // add r1, r1, r4
    sub_020180BC(0x00000BD8, *((u32*)(r5 + 4)), *((u32*)(r5 + 0x48)), *((u32*)(r3 + 4)));
    // add r0, r1, r0
    // add r0, r0, r4
    // add r1, r1, r2
    // add r1, r1, r4
    sub_020181D4((0xb5 << 4), *((u32*)(r5 + 4)), 0x00000BD8);
    // add r0, r1, r0
    // add r0, r0, r4
    sub_02018198(0x00000BD8, 0);
    // add r0, r1, r0
    // add r0, r0, r4
    sub_020182A0((0xb5 << 4), 0);
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // sub r2, r2, r0
    // ror r2, r1
    // add r0, r0, r2
    _fflt(r6, 0x1f, (r1 << 0x1f));
    _fadd((0x3f << 0x18), r0);
    _fflt(r6);
    _fsub((0x3f << 0x18));
    // add r1, r1, r4
    // str r1, [sp, #0x14]
    _ffix(*((u32*)(r5 + 4)));
    // ldr r2, [sp, #0x14]
    // add r2, r1, r0
    // ldr r1, [sp, #0x14]
    // str r2, [r1, r0]
    _fflt(r6, *((u32*)(r2 + (0xd3 << 4))));
    _fadd((0x3f << 0x18), r0);
    _fflt(r6);
    _fsub((0x3f << 0x18));
    // add r1, r1, r4
    // str r1, [sp, #0x18]
    _ffix(*((u32*)(r5 + 4)));
    // ldr r2, [sp, #0x18]
    // sub r2, r1, r0
    // ldr r1, [sp, #0x18]
    // str r2, [r1, r0]
    // ldr r0, [sp, #0xc]
    _fflt(((5 * ((0xd3 << 4) + 1)) << 0xc), ((0xd3 << 4) + 1));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    // add r1, r1, r4
    // str r1, [sp, #0x1c]
    _ffix(*((u32*)(r5 + 4)));
    // ldr r2, [sp, #0x1c]
    // add r2, r1, r0
    // ldr r1, [sp, #0x1c]
    // str r2, [r1, r0]
    _fflt(r6, *((u32*)(r2 + 0x00000D38)));
    _fadd((0x3f << 0x18), r0);
    _fflt(r6);
    _fsub((0x3f << 0x18));
    // add r1, r1, r4
    // str r1, [sp, #0x20]
    _ffix(*((u32*)(r5 + 4)));
    // ldr r2, [sp, #0x20]
    // sub r2, r1, r0
    // ldr r1, [sp, #0x20]
    // str r2, [r1, r0]
    // ldr r0, [sp, #8]
    // add r0, #8
    // str r0, [sp, #8]
    // add r4, r4, r0
    // add r6, r6, r0
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // add r0, r1, r0
    ov92_0225D9A8(0x00000944, *((u32*)(r5 + 0x48)), 0x47);
    // add r0, r1, r0
    ov92_0225D9B4(0x00000944, *((u8*)(r5 + 0x14)));
    // add r0, r1, r0
    sub_020182A0(0x00000944, 0);
    // add r2, sp, #0x28
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    ov92_0226077C(r5, *((u32*)(r5 + 0x44)), ov92_022638A0);
    // add r0, sp, #0x28
    // add r0, r1, r0
    ov92_0225D9A8((0x45 << 2), *((u32*)(r5 + 0x48)), *((u32*)(r0 + (r0 << 2))));
    // add r0, r1, r0
    ov92_0225D9B4((0x45 << 2), *((u8*)(r5 + 0x14)));
    // add r0, r1, r0
    ov92_0225D9A8((0x32 << 4), *((u32*)(r5 + 0x48)), 0x33);
    // add r0, r1, r0
    ov92_0225D9A8(0x0000052C, *((u32*)(r5 + 0x48)), 0x39);
    // add r0, r1, r0
    ov92_0225D9A8(0x00000738, *((u32*)(r5 + 0x48)), 0x37);
    // add r0, r1, r0
    ov92_0225D9B4((0x32 << 4), *((u8*)(r5 + 0x14)));
    // add r0, r1, r0
    ov92_0225D9B4(0x0000052C, *((u8*)(r5 + 0x14)));
    // add r0, r1, r0
    ov92_0225D9B4(0x00000738, *((u8*)(r5 + 0x14)));
    // str r0, [sp]
    // add r0, #0x6c
    // str r0, [sp, #4]
    // add r0, r4, r6
    // add r1, r4, r6
    // add r0, #0x88
    // add r1, #0x78
    sub_020180BC(r5, *((u32*)(r5 + 0x48)), 0x35);
    // add r0, r4, r6
    // add r1, #0x88
    sub_020181D4(r0);
    // add r0, r4, r6
    // add r0, #0x88
    sub_02018198(0);
    // str r0, [sp]
    // add r0, #0x6c
    // str r0, [sp, #4]
    // add r0, r4, r6
    // add r1, r4, r6
    // add r0, #0x9c
    // add r1, #0x78
    sub_020180BC(r5, *((u32*)(r5 + 0x48)), 0x34);
    // add r0, r4, r6
    // add r0, #0x9c
    sub_02018198(0);
    // str r0, [sp]
    // add r0, #0x6c
    // str r0, [sp, #4]
    // add r0, r4, r6
    // add r1, r4, r6
    // add r0, #0xb0
    // add r1, #0x78
    sub_020180BC(r5, *((u32*)(r5 + 0x48)), 0x3a);
    // add r0, r4, r6
    // add r0, #0xb0
    sub_02018198(0);
    // str r0, [sp]
    // add r0, #0x6c
    // str r0, [sp, #4]
    // add r0, r4, r6
    // add r1, r4, r6
    // add r0, #0x88
    // add r1, #0x78
    sub_020180BC(r5, *((u32*)(r5 + 0x48)), 0x38);
    // add r0, r4, r6
    // add r1, #0x88
    sub_020181D4(r0);
    // add r0, r4, r6
    // add r0, #0x88
    sub_02018198(0);
    // str r0, [sp]
    // add r0, #0x6c
    // str r0, [sp, #4]
    // add r0, r4, r6
    // add r1, r4, r6
    // add r0, #0x88
    // add r1, #0x78
    sub_020180BC(r5, *((u32*)(r5 + 0x48)), 0x36);
    // add r0, r4, r6
    // add r1, #0x88
    sub_020181D4(r0);
    // add r0, r4, r6
    // add r0, #0x88
    sub_02018198(0);
    // str r0, [r2, r1]
    // str r0, [r2, r1]
    // sub r1, #0x28
    // str r0, [r2, r1]
    // str r0, [r2, r1]
    SpriteManager_GetSpriteList(*((u32*)(r5 + 0x54)), 0x0000091C, *((u32*)(r5 + 4)));
    ov90_02258BD4(0x71);
    // add r1, #0x84
    // str r0, [r1]
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r5 + 0x5c)), 2, 0, (2 << 8));
    // add r5, #0x88
    ov00_021E69A8(0x71);
}




void ov92_0225CAB4(void) {
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r6, [sp, #4]
    // add r1, #0x88
    // str r0, [r1]
    // add r0, #0xbc
    // str r7, [r0]
    // add r0, #0xbc
    // str r4, [r0]
    // ldr r0, [sp, #4]
    // add r0, #0x88
    // ldr r0, [sp, #4]
    // str r3, [sp]
    // add r0, #0x8c
    // str r0, [sp, #4]
}




void ov92_0225CB2C(void) {
    // str r0, [r5, r3]
    // str r0, [r5, r1]
    // add r0, r5, r0
    ov92_02260628((0x45 << 2), (0xfe << 0x16), (0xc3 << 2), 0x00001FD4);
    // add r3, sp, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, r5, r1
    // add r2, r5, r2
    MTX_MultVec43(r3, (0x4d << 4), 0x00001FC8);
    // str r0, [r5, r1]
    // add r2, #8
    // str r0, [r5, r2]
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov92_02260428((0x45 << 2), *((u32*)(r5 + r3)), *((u32*)(r5 + (r3 + 4))), *((u32*)(r5 + r3)));
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov92_02260428((0x32 << 4), *((u32*)(r5 + (0x00001FD8 - 4))), *((u32*)(r5 + 0x00001FD8)), *((u32*)(r5 + (0x00001FD8 - 4))));
    // asr r7, r0, #0xc
    // sub r0, r0, r7
    _s32_div_f(0x64, 0x28);
    _fflt();
    // str r4, [r5, r0]
    // str r6, [r5, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov92_02260428((0x45 << 2), r4, r6, *((u32*)(r5 + (0x00001FD8 - 4))));
    // add r2, sp, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, r5, r1
    // add r2, r5, r2
    MTX_MultVec43(r2, (0x4d << 4), 0x00001FC8, ov92_02263878);
    IsSEPlaying(0x0000058A);
    PlaySE(0x0000058A);
    // str r4, [r5, r0]
    // str r6, [r5, r0]
}




void ov92_0225CC6C(void) {
    // add r2, sp, #0xc
    // strh r0, [r2]
    // add r0, #0xf0
    ManagedSprite_GetAnimationFrame(*((u32*)r0), (0x60 - 1), (r2 + 2), (ov92_02263A94 + 2));
    // add r0, r7, r0
    // add r0, sp, #0xc
    // ldrsh r4, [r0, r1]
    // add r0, sp, #0xc
    // add r0, #2
    // ldrsh r6, [r0, r1]
    ov92_0225CB2C(r5, 0, 0);
    // add r1, #0x80
    // add r2, #0x80
    ov92_0225CB2C(r5, r4, r6);
    // add r4, #0x58
    // add r6, #0x80
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov92_02260A38(r5, (r4 << 0x10), (r6 << 0x10));
    // add r4, #0x80
    // add r6, #0x80
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov92_02260A38(r5, (r4 << 0x10), (r6 << 0x10));
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 1);
    *((u32*)(r5 + 8)) = r7;
    // add r0, #0xf0
    ManagedSprite_GetActiveAnim(*((u32*)r5));
    // add r0, #0xf0
    ManagedSprite_SetPositionXY(*((u32*)r5), 0x80, 0x64);
    // add r0, #0xf0
    ManagedSprite_SetAnimNoRestart(*((u32*)r5), 2);
    // add r0, r5, r0
    ov92_022630E8((0xa9 << 2));
    // add r0, r5, r0
    ov92_022630E8((0xad << 2));
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r1, [sp, #8]
    ov92_02260428((0x45 << 2), 0, 0, 5);
    // mvn r3, r3
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r1, [sp, #8]
    ov92_02260428((0x45 << 2), 0, 0, 4);
    *((u32*)(r5 + 8)) = 0;
    *((u32*)(r5 + 0xc)) = 0;
    // add r0, #0xf0
    ManagedSprite_SetDrawFlag(*((u32*)r5), 0);
    // add r0, r5, r0
    ov92_022630E8((0xa9 << 2));
    // add r0, r5, r0
    ov92_022630E8((0xad << 2));
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r1, [sp, #8]
    ov92_02260428((0x45 << 2), 0, 0, 5);
    // mvn r3, r3
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r1, [sp, #8]
    ov92_02260428((0x45 << 2), 0, 0, 4);
    // add r5, #0xf0
    ManagedSprite_TickTwoFrames(*((u32*)r5));
}




void ov92_0225CDF4(void) {
    OverlayManager_GetData();
    ov92_0225D8E4();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225CE2C: ; jump table
    // add r0, #0x8c
    ov90_02258920(r4, 0x71);
    // add r1, #0x9c
    // str r0, [r1]
    ov92_0225D88C(r4, 1, 1, r7);
    // add r0, #0x9c
    ov90_022589BC(*((u32*)r4));
    ov92_0225D88C(r4, r0, 2, r7);
    // add r0, #0x9c
    ov90_022589CC(*((u32*)r4));
    *((u8*)(r4 + 0x14)) = r0;
    // add r0, #0x9c
    ov90_02258938(*((u32*)r4));
    // add r0, #0x9c
    // str r1, [r0]
    ov92_0225C5C4(r4, 0);
    ov92_0225D88C(r4, 1, 3, r7);
    ov92_0225D868(0x1b);
    ov92_0225E1A8(r4, *((u32*)(r4 + 4)));
    ov92_0225D88C(r4, r5, 4, r7);
    IsPaletteFadeFinished();
    ov92_0225D88C(r4, r0, 5, r7);
    ov92_0225E070(*((u32*)(r4 + 4)));
    ov92_0226156C(*((u32*)(r4 + 4)));
    ov92_02261B18(*((u32*)(r4 + 4)));
    ov92_0225D88C(r4, 1, 6, r7);
    ov92_0225CC6C(*((u32*)(r4 + 4)));
    ov92_0225D8C4(r4);
    // add r0, #0x80
    *((u32*)(r4 + 0x18)) = *((u32*)r4);
    // add r1, #0x14
    sub_02037030(0x16, r4, 8);
    ov92_0225D88C(r4, r5, 7, r7);
    ov92_0225D88C(r4, *((u32*)(r4 + 8)), 8, r7);
    // add r0, #0x84
    ov90_02258C8C(*((u32*)r4));
    ov92_0225D88C(r4, 1, 9, r7);
    // add r0, #0x84
    ov90_02258CE0(*((u32*)r4));
    ov92_0225E360(*((u32*)(r4 + 4)));
    ov92_0225E100(*((u32*)(r4 + 4)));
    ov92_0225D88C(r4, r5, 0xa, r7);
    ov92_0225D8C4(r4, *((u32*)(*((u32*)(r4 + 4)) + 0x00002AE4)));
    ov92_0225EB70(*((u32*)r4));
    StopSE(0x00000589, 0);
    sub_02037030(0x17, 0, 0);
    ov92_0225FC2C(*((u32*)(r4 + 4)));
    ov92_0225D88C(r4, r5, 0xb, r7);
    StopSE(0x0000058B, 0);
    StopSE(0x00000589, 0);
    // add r0, #0x84
    ov90_02258CB0(*((u32*)r4));
    ov92_0225D88C(r4, 1, 0xc, r7);
    // add r0, #0x84
    ov90_02258CE0(*((u32*)r4));
    ov92_0225D88C(r4, r0, 0xd, r7);
    _s32_div_f(*((u32*)(*((u32*)(r4 + 4)) + 0x00002AF0)), 0xa);
    *((u32*)(r4 + 0x1c)) = (0x64 * r0);
    *((u32*)(r4 + 0x1c)) = 0x000186A0;
    *((u32*)(r4 + 0x1c)) = 1;
    // add r1, #0x1c
    sub_02037030(0x19, r4, 8);
    ov92_0225D88C(r4, 1, 0xe, r7);
    // add r5, #8
    ov92_0225D88C(r4, 1, 0xf, r7);
    ov92_0225D868(0x1a);
    ov92_0225D88C(r4, r0, 0x10, r7);
    IsPaletteFadeFinished();
    ov92_0225D1FC(r4);
    ov92_0225D88C(r4, r5, 0x11, r7);
    ov92_0226077C(r4, 0);
    // add r1, r4, r0
    // add r1, #0xa0
    // str r2, [r1]
    // add r1, r4, r0
    // add r1, #0xa0
    // add r1, r4, r0
    // add r1, #0xa0
    // str r0, [r1]
    // add r5, #8
    // add r1, #0x94
    // add r0, #0xa0
    ov90_02258AA8(r4, *((u8*)r4), *((u32*)(r5 + 0x24)));
    // add r0, #0x8c
    // add r1, #0xa0
    ov90_022589EC(r4, r4, 0x71);
    // add r1, #0xb8
    // str r0, [r1]
    ov92_0225D88C(r4, 1, 0x12, r7);
    // add r0, #0xb8
    ov90_02258AA0(*((u32*)r4));
    // add r0, #0xb8
    ov90_02258AA4(*((u32*)r4));
    // add r0, #0xb8
    ov90_02258A04(*((u32*)r4));
    // add r0, #0xb8
    // str r1, [r0]
    // add r0, #0xcc
    // str r1, [r0]
    ov92_0225D344(r4, 1);
    ov92_0225D88C(r4, r5, 0, r7);
    // add r0, #0x88
    ov00_021E6A4C(*((u32*)(*((u32*)r4) + 0x3c)));
    ov92_0225D88C(r4, r5, 0x13, r7);
    sub_02037AC0(0x1b);
    // add r0, #0x88
    ov00_021E6A4C(*((u32*)(*((u32*)r4) + 0x3c)));
    ov92_0225D88C(r4, 1, 0x14, r7);
    sub_02037B38(0x1b);
    ov92_0225E008(*((u32*)(r4 + 4)));
    ov92_0225DA40(r4);
}




void ov92_0225D1FC(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GF_DestroyVramTransferManager();
    sub_02021238();
    // add r0, #0x80
    SetLCRNGSeed(*((u32*)r5));
    ov92_0225E03C(*((u32*)(r5 + 4)));
    ov92_0225DEF0(*((u32*)(r5 + 4)));
    ov92_0225DF40(*((u32*)(r5 + 4)));
    ov92_0225E918(*((u32*)(r5 + 4)));
    ov92_0225E9A8(*((u32*)(r5 + 4)));
    // add r0, r1, r0
    ov92_0225DA2C((0x45 << 2), *((u32*)(r5 + 4)));
    // add r0, r1, r0
    ov92_0225DA2C((0x32 << 4), *((u32*)(r5 + 4)));
    // add r0, r1, r0
    ov92_0225DA2C(0x0000052C, *((u32*)(r5 + 4)));
    // add r0, r1, r0
    ov92_0225DA2C(0x00000738, *((u32*)(r5 + 4)));
    // add r0, r1, r0
    ov92_0225DA2C(0x00000944, *((u32*)(r5 + 4)));
    // add r0, r1, r0
    // add r1, #0x6c
    sub_020180F8((0xea << 2), r5);
    // add r0, r1, r0
    // add r1, #0x6c
    sub_020180F8((0xef << 2), r5);
    // add r0, r1, r0
    // add r1, #0x6c
    sub_020180F8((0x3d << 4), r5);
    // add r0, r1, r0
    // add r1, #0x6c
    sub_020180F8(0x000005B4, r5);
    // add r0, r1, r0
    // add r1, #0x6c
    sub_020180F8((0x1f << 6), r5);
    // add r6, #0x6c
    // add r0, r1, r0
    // add r0, r0, r4
    ov92_0225DA2C((0xb5 << 4), *((u32*)(r5 + 4)));
    // add r0, r1, r0
    // add r0, r0, r4
    sub_020180F8(0x00000BD8, r6);
    // add r0, r1, r0
    // add r0, r0, r4
    sub_020180F8(0x00000BEC, r6);
    // add r4, r4, r0
    // add r0, #0x84
    ov90_02258C38(*((u32*)r5));
    ov92_0225D49C(r5);
    ov92_0225D8C4(r5);
    ov92_0225EB68(*((u32*)r5));
    ov92_0225ED60(*((u32*)(r5 + 4)));
    // str r0, [r5]
    *((u32*)(r5 + 4)) = 0;
}




void ov92_0225D344(void) {
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0x10)) = 0;
    *((u8*)(r0 + 0x1c)) = 0;
    // add r2, #0x1c
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    *((u8*)(r0 + 4)) = 0;
    *((u8*)(r0 + 5)) = 0;
    *((u8*)(r0 + 6)) = 0;
    *((u8*)(r0 + 7)) = 0;
    // add r0, #0x24
}




void ov92_0225D36C(void) {
    // str r0, [r5]
}




void ov92_0225D3CC(void) {
    NARC_New(0xc1, 0x71);
    *((u32*)(r4 + 0x48)) = r0;
    NARC_New(0xbd, 0x71);
    *((u32*)(r4 + 0x4c)) = r0;
    BgConfig_Alloc(0x71);
    *((u32*)(r4 + 0x58)) = r0;
    PaletteData_Init(0x71);
    *((u32*)(r4 + 0x5c)) = r0;
    // str r0, [sp]
    // str r1, [sp, #4]
    GF_3DVramMan_Create(0x71, 0, 1, 0);
    *((u32*)(r4 + 0x60)) = r0;
    Camera_New(0x71);
    *((u32*)(r4 + 0x64)) = r0;
    ov92_0225DD88(r4);
    PaletteData_SetAutoTransparent(*((u32*)(r4 + 0x5c)), 1);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x5c)), 0, (2 << 8), 0x71);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x5c)), 1, (1 << 9), 0x71);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x5c)), 2, (2 << 8), 0x71);
    PaletteData_AllocBuffers(*((u32*)(r4 + 0x5c)), 3, (2 << 8), 0x71);
    ov92_0225D594(*((u32*)(r4 + 0x58)));
    ov92_0225D7CC(r4);
    // and r3, r1
    // strh r2, [r0]
    // and r2, r1
    // strh r1, [r0]
    G3X_SetEdgeColorTable(ov92_022638B0, (0x20 | *((u16*)0x04000060)), *((u16*)0x04000060), *((u16*)0x04000060));
    // add r4, #0x6c
    HeapExp_FndInitAllocator(r4, 0x71, 0x20);
}




void ov92_0225D49C(void) {
    GfGfx_EngineATogglePlanes(1, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 0);
    GfGfx_EngineBTogglePlanes(1, 0);
    GfGfx_EngineBTogglePlanes(2, 0);
    GfGfx_EngineBTogglePlanes(4, 0);
    GfGfx_EngineBTogglePlanes(8, 0);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x58)), 0);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x58)), 1);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x58)), 2);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x58)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x58)), 4);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x58)), 5);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x58)), 6);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x58)), 7);
    Heap_Free(*((u32*)(r4 + 0x58)));
    PaletteData_FreeBuffers(*((u32*)(r4 + 0x5c)), 0);
    PaletteData_FreeBuffers(*((u32*)(r4 + 0x5c)), 1);
    PaletteData_FreeBuffers(*((u32*)(r4 + 0x5c)), 2);
    PaletteData_FreeBuffers(*((u32*)(r4 + 0x5c)), 3);
    PaletteData_Free(*((u32*)(r4 + 0x5c)));
    NARC_Delete(*((u32*)(r4 + 0x48)));
    NARC_Delete(*((u32*)(r4 + 0x4c)));
    GF_3DVramMan_Delete(*((u32*)(r4 + 0x60)));
    Camera_Delete(*((u32*)(r4 + 0x64)));
    SpriteSystem_FreeResourcesAndManager(*((u32*)(r4 + 0x50)), *((u32*)(r4 + 0x54)));
    SpriteSystem_Free(*((u32*)(r4 + 0x50)));
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    // and r0, r1
    // strh r0, [r2]
}




void ov92_0225D594(void) {
    GfGfx_DisableEngineAPlanes();
    // add r3, sp, #0x2c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #4
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #4
    GfGfx_SetBanks((5 - 1));
    MIi_CpuClear32(0, (6 << 0x18), (2 << 0x12));
    MIi_CpuClear32(0, (0x62 << 0x14), (2 << 0x10));
    MIi_CpuClear32(0, (0x19 << 0x16), (1 << 0x12));
    MIi_CpuClear32(0, (0x66 << 0x14), (2 << 0x10));
    // add r3, sp, #0xac
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    BG_ClearCharDataRange(1, 0x20, 0, 0x71);
    BG_ClearCharDataRange(2, 0x20, 0, 0x71);
    BG_ClearCharDataRange(3, 0x20, 0, 0x71);
    // add r2, sp, #0xc8
    InitBgFromTemplate(r4, 1, 0);
    // add r2, sp, #0xe4
    InitBgFromTemplate(r4, 2, 0);
    // add r2, sp, #0x100
    InitBgFromTemplate(r4, 3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    BgClearTilemapBufferAndCommit(r4, 2);
    BgClearTilemapBufferAndCommit(r4, 3);
    // add r3, sp, #0x3c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    BG_ClearCharDataRange(4, 0x20, 0, 0x71);
    BG_ClearCharDataRange(5, 0x20, 0, 0x71);
    BG_ClearCharDataRange(6, 0x20, 0, 0x71);
    BG_ClearCharDataRange(7, 0x20, 0, 0x71);
    // add r2, sp, #0x3c
    InitBgFromTemplate(r4, 4, 0);
    // add r2, sp, #0x58
    InitBgFromTemplate(r4, 5, 0);
    // add r2, sp, #0x74
    InitBgFromTemplate(r4, 6, 0);
    // add r2, sp, #0x90
    InitBgFromTemplate(r4, 7, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    BgClearTilemapBufferAndCommit(r4, 5);
    BgClearTilemapBufferAndCommit(r4, 6);
    BgClearTilemapBufferAndCommit(r4, 7);
    BG_ClearCharDataRange(4, 0x20, 0, 0x71);
    BG_ClearCharDataRange(5, 0x20, 0, 0x71);
    BG_ClearCharDataRange(6, 0x20, 0, 0x71);
    BG_ClearCharDataRange(7, 0x20, 0, 0x71);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(2, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(1, 1);
    GfGfx_EngineBTogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    *((u8*)(gSystem + 9)) = 1;
    GfGfx_SwapDisplay(gSystem, 1);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 0, 0x1e, 7);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04001050, 0, 0x11, 7);
}




void ov92_0225D7CC(void) {
    SpriteSystem_Alloc(0x71);
    // add r2, sp, #0x2c
    *((u32*)(r4 + 0x50)) = r0;
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r5, sp, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    SpriteSystem_Init(*((u32*)(r4 + 0x50)), r2, ov92_022638EC, 0x20);
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SpriteManager_New(*((u32*)(r4 + 0x50)), ov92_022638D4);
    *((u32*)(r4 + 0x54)) = r0;
    SpriteSystem_InitSprites(*((u32*)(r4 + 0x50)), *((u32*)(r4 + 0x54)), 0xff);
    GF_AssertFail();
    // add r2, sp, #0
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + 0x50)), *((u32*)(r4 + 0x54)));
    GF_AssertFail();
    SpriteSystem_GetRenderer(*((u32*)(r4 + 0x50)));
    G2dRenderer_SetSubSurfaceCoords(0, (1 << 0x14));
}




void ov92_0225D868(void) {
}




void ov92_0225D88C(void) {
    // str r2, [r3]
}




void ov92_0225D894(void) {
    GF_RunVramTransferTasks();
    SpriteSystem_TransferOam();
    PaletteData_PushTransparentBuffers(*((u32*)(r4 + 0x5c)));
    DoScheduledBgGpuUpdates(*((u32*)(r4 + 0x58)));
    // str r0, [r3, r1]
}




void ov92_0225D8C4(void) {
    // ldr r0, [r0, #0x44]
    // cmp r0, #0
    // bne _0225D8CE
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov92_0225D8D4(void) {
}




void ov92_0225D8DC(void) {
}




void ov92_0225D8E4(void) {
    // add r0, #0x8c
    // add r0, #0x7c
    // add r4, #0x7c
    // strb r0, [r4]
    // add r0, #0x8c
    // add r0, #0xb8
    // add r0, #0xb8
    // str r1, [r0]
    // add r0, #0x9c
    // add r4, #0x9c
    // str r0, [r4]
}




void ov92_0225D970(void) {
    // add r0, #0x60
}




void ov92_0225D9A8(void) {
}




void ov92_0225D9B4(void) {
    // add r1, #0x78
    sub_020181B0(r0);
    sub_020182A8(r4, 0, 0xFFFEC000, 0);
    sub_020182C4(r4, (1 << 0xc), (1 << 0xc), (1 << 0xc));
    sub_020182C4(r4, (6 << 0xa), (6 << 0xa), (6 << 0xa));
    sub_020182A0(r4, 1);
    // str r0, [r4, r2]
    // str r3, [r4, r1]
    // add r1, #8
    // str r0, [r4, r1]
    // add r1, #0x1c
    // str r0, [r4, r1]
    // add r1, #0x20
    // str r0, [r4, r1]
    // add r1, #0xc
    // str r0, [r4, r1]
    // add r2, #0x10
    // str r0, [r4, r2]
}




void ov92_0225DA2C(void) {
    // str r2, [r0, r1]
    // add r0, #0x78
}




void ov92_0225DA40(void) {
    Thunk_G3X_Reset();
    Camera_PushLookAtToNNSGlb();
    // add r3, sp, #0x18
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    VEC_Normalize(r3, r3, r3);
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    NNS_G3dGlbLightVector(0, (r1 << 0x10), (r2 << 0x10), (r3 << 0x10));
    NNS_G3dGlbLightColor(0, 0x00007FFF);
    NNS_G3dGlbMaterialColorDiffAmb(0x00007FFF, 0x00007FFF, 0);
    NNS_G3dGlbMaterialColorSpecEmi(0x00007FFF, 0x00007FFF, 0);
    // add r0, r1, r0
    // add r6, r0, r4
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    // add r1, r6, r1
    // add r2, r6, r2
    ov92_0225D970(r6, (0x1b << 4), (0x1e << 4));
    // str r0, [sp, #0x14]
    // add r1, sp, #0x14
    NNS_G3dGeBufferOP_N(0x12, 1);
    // add r0, r1, r0
    // add r0, r0, r4
    sub_02018124(0x00000BD8, (1 << 0xc));
    // add r4, r4, r0
    // sub r0, #0xfc
    // add r0, r1, r0
    sub_020182A0((0x32 << 4), 1);
    // add r0, r1, r0
    sub_020182A0(0x0000052C, 0);
    // add r0, r1, r0
    sub_020182A0(0x00000738, 0);
    // add r2, r1, r0
    // add r0, r2, r0
    sub_02018124((0x14 * *((u32*)(*((u32*)(r5 + 4)) + 0x00000514))), (1 << 0xc));
    // add r0, r1, r0
    sub_020182A0((0x32 << 4), 0);
    // add r0, r1, r0
    sub_020182A0(0x0000052C, 1);
    // add r0, r1, r0
    sub_020182A0(0x00000738, 0);
    // add r0, r1, r0
    sub_0201815C(0x000005B4, (1 << 0xc));
    // add r0, r1, r0
    sub_020182A0((0x32 << 4), 0);
    // add r0, r1, r0
    sub_020182A0(0x0000052C, 0);
    // add r0, r1, r0
    sub_020182A0(0x00000738, 1);
    // add r0, r1, r0
    sub_0201815C((0x1f << 6), (1 << 0xc));
    // add r4, r1, r0
    // add r0, #0xfc
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    // add r1, r4, r2
    // add r2, #0x30
    // add r0, r4, r6
    // add r2, r4, r2
    ov92_0225D970((0x1b << 4));
    // str r2, [sp, #0x10]
    // add r1, sp, #0x10
    NNS_G3dGeBufferOP_N(0x12, 1);
    // add r4, r1, r0
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    // add r1, r4, r2
    // add r2, #0x30
    // add r2, r4, r2
    ov92_0225D970(r4, (0x1b << 4));
    // str r2, [sp, #0xc]
    // add r1, sp, #0xc
    NNS_G3dGeBufferOP_N(0x12, 1);
    // add r4, r1, r0
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    // add r1, r4, r2
    // add r2, #0x30
    // add r2, r4, r2
    ov92_0225D970(r4, (0x1b << 4));
    // str r2, [sp, #8]
    // add r1, sp, #8
    NNS_G3dGeBufferOP_N(0x12, 1);
    // add r4, r1, r0
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    // add r1, r4, r2
    // add r2, #0x30
    // add r2, r4, r2
    ov92_0225D970(r4, (0x1b << 4));
    // str r2, [sp, #4]
    // add r1, sp, #4
    NNS_G3dGeBufferOP_N(0x12, 1);
    // add r0, r1, r0
    sub_0201815C(0x00001E44, (1 << 0xc));
    // add r0, r1, r0
    sub_0201815C(0x00001E58, (1 << 0xc));
    // str r2, [r1, r0]
    // add r4, r1, r0
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    // add r1, r4, r2
    // add r2, #0x30
    // add r2, r4, r2
    ov92_0225D970(r4, (0x1b << 4));
    // str r2, [sp]
    // add r1, sp, #0
    NNS_G3dGeBufferOP_N(0x12, 1);
    // add r0, r1, r0
    sub_02018124(0x00001C4C, (1 << 0xc));
    RequestSwap3DBuffers(0, 1);
    SpriteSystem_DrawSprites(*((u32*)(r5 + 0x54)));
}




void ov92_0225DD48(void) {
    // add r0, r5, r2
    // add r2, #0x88
    // add r3, r5, r2
    // add r1, r3, r2
    sub_020181E0(0x00000514, *((u32*)(r0 + 0x00000514)), (0x14 * *((u32*)(r0 + 0x00000514))));
    // str r4, [r5, r0]
    // add r0, r5, r1
    // add r1, #0x88
    // add r2, r5, r1
    // add r1, r2, r1
    sub_020181D4(0x00000514, (0x14 * r4));
}




void ov92_0225DD88(void) {
    // ldmia r6!, {r0, r1}
    // add r5, sp, #8
    // stmia r5!, {r0, r1}
    // add r7, sp, #0x14
    // str r3, [r7]
    *((u32*)(r7 + 4)) = 0;
    *((u32*)(r7 + 8)) = 0;
    // str r0, [r5]
    // str r3, [sp]
    // str r0, [sp, #4]
    Camera_Init_FromTargetAndPos(r7, r5, (0xb6 << 4), 0);
    Camera_SetPerspectiveClippingPlane(0xFFC18000, (0xfa << 0xe), *((u32*)(r4 + 0x64)));
    Camera_SetStaticPtr(*((u32*)(r4 + 0x64)));
}




void ov92_0225DDD8(void) {
    // strh r1, [r0]
    // ldr r1, [sp, #8]
    // ldr r4, [sp, #0xc]
}




void ov92_0225DE08(void) {
    // str r0, [sp, #8]
    // ldr r5, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x10
    // asr r1, r1, #0x10
    ov92_0225DDD8(0x0000232E, (0 << 0x10), 0x14, 1);
    // ldr r0, [sp, #0xc]
    // add r2, sp, #0x10
    SpriteSystem_NewSprite(r7);
    *((u32*)(r5 + 0x40)) = r0;
    ManagedSprite_SetPaletteOverrideOffset(3);
    _s32_div_f(r6, 0xb);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x40)), (r1 + 1));
    // add r4, #8
    // ldr r0, [sp, #8]
    ov92_0225DF0C(0, 0);
}




void ov92_0225DE70(void) {
    // add r4, sp, #0xc
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // strh r2, [r0]
    *((u16*)(*((u32*)(*((u32*)(r0 + 0x14)) + 8)) + 2)) = *((u16*)(ov92_02263B54 + 2));
    *((u16*)(*((u32*)(*((u32*)(r0 + 0x14)) + 8)) + 4)) = *((u16*)(ov92_02263B54 + 4));
    *((u16*)(*((u32*)(*((u32*)(r0 + 0x14)) + 8)) + 6)) = *((u16*)(ov92_02263B54 + 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r1, [r4, r1]
    // add r0, sp, #0x14
    ov92_0225DDD8(0x0000232C, 0, 0xe0, 1);
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #8]
    // add r2, sp, #0x14
    SpriteSystem_NewSprite(1, r7);
    // add r1, #0xd0
    // str r0, [r1]
    // add r0, #0xd0
    ManagedSprite_TickTwoFrames(*((u32*)r5), r5);
    // add r0, #0xd0
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)r5), 1);
}




void ov92_0225DEF0(void) {
}




void ov92_0225DF0C(void) {
}




void ov92_0225DF28(void) {
}




void ov92_0225DF40(void) {
}




void ov92_0225DF58(void) {
    // add r2, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r5, r0
    // add r0, #0xf4
    // add r0, r5, r6
    ManagedSprite_SetAnim(*((u32*)(*((u16*)(r1 << 1)) + 0x1c)), *((u32*)(r2 + (r2 << 3))), r1);
    // add r0, r5, r6
    // add r1, sp, #4
    ManagedSprite_SetAnim(*((u32*)(r0 + 0x28)), *((u32*)(r1 + r4)));
}




void ov92_0225DFA4(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r5, r0
    // add r0, #0xf4
    // add r0, r5, r6
    ManagedSprite_GetActiveAnim(*((u32*)(*((u16*)(r1 << 1)) + 0x1c)), ov92_02263B8C);
    // add r0, r5, r6
    ManagedSprite_GetActiveAnim(*((u32*)(r0 + 0x28)));
    // add r3, sp, #0
    // add r3, #8
    GF_AssertFail(0, *((u32*)(r3 + 4)), (0 + 1));
}




void ov92_0225E008(void) {
}




void ov92_0225E03C(void) {
}




void ov92_0225E070(void) {
    // add r0, r5, r0
    InitWindow(0x00001FE0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r5, r1
    AddWindowParameterized(*((u32*)(*((u32*)(r5 + 0x14)) + 0x10)), 0x00001FE0, 7, 2);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x00001FE0, 0xff);
    NewMsgDataFromNarc(0, 0x1b, 0xeb, 0x71);
    NewString_ReadMsgData(0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, r5, r0
    // str r1, [sp, #8]
    AddTextPrinterParameterized(0x00001FE0, 0, r0, 0);
    String_Delete(r4);
    DestroyMsgData(r6);
    // add r0, r5, r0
    DrawFrameAndWindow1(0x00001FE0, 0, 0xb4, 0xd);
    // add r0, r5, r0
    CopyWindowToVram(0x00001FE0);
}




void ov92_0225E100(void) {
    // add r0, r4, r0
    WindowIsInUse(0x00001FE0);
    // add r0, r4, r0
    sub_0200E5D4(0x00001FE0, 1);
    // add r0, r4, r0
    ClearWindowTilemapAndCopyToVram(0x00001FE0);
    // add r0, r4, r0
    RemoveWindow(0x00001FE0);
}




void ov92_0225E130(void) {
    // str r0, [sp, #0x10]
    // add r6, r2, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r6, r0
    // add r0, r5, r0
    // sub r0, #0x4c
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    PaletteData_LoadFromNarc(((*((u32*)(0x50 * *((u32*)(*((u32*)(r0 + 4)) + 4)))) << 0x14) >> 0x10), 0xc1, 0x49, 0x71);
}




void ov92_0225E188(void) {
    // sub r1, r0, r4
    // add r0, r1, r0
    // asr r0, r0, #1
}




void ov92_0225E1A8(void) {
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x24]
    // add r2, sp, #0x34
    // strh r0, [r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)*((u32*)(r1 + 0x14))), 0x4f, *((u32*)(*((u32*)(r1 + 0x14)) + 0x10)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)*((u32*)(r5 + 0x14))), 0x50, *((u32*)(*((u32*)(r5 + 0x14)) + 0x10)), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)*((u32*)(r5 + 0x14))), 0x51, *((u32*)(*((u32*)(r5 + 0x14)) + 0x10)), 7);
    GF_AssertFail();
    // str r6, [sp, #0x1c]
    // add r4, r5, r0
    // ldr r0, [sp, #0x18]
    // add r0, #0x8c
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    ov90_022588A4(*((u32*)r5), 0);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x18]
    ov90_022588CC(r6);
    // str r0, [sp, #0x2c]
    InitWindow(r4);
    // add r0, sp, #0x34
    // add r1, r0, r2
    // ldr r0, [sp, #0x1c]
    // add r7, r1, r0
    // mvn r0, r0
    // ldrsh r0, [r7, r0]
    // sub r3, #0x37
    // str r0, [sp, #0x20]
    // mvn r0, r0
    // ldrsh r0, [r7, r0]
    // str r0, [sp, #0x30]
    // mvn r0, r0
    // ldrsh r0, [r7, r0]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x10]
    // ldrsh r3, [r7, r3]
    AddWindowParameterized(*((u32*)(*((u32*)(r5 + 0x14)) + 0x10)), r4, 7, ((7 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x24]
    // add r0, r0, r2
    // str r0, [sp, #0x24]
    FillWindowPixelBuffer(r4, 0xff, (r1 * r0));
    // ldr r0, [sp, #0x2c]
    PlayerProfile_GetPlayerName_NewString(0x71);
    ov92_0225E188(r4, r0);
    // ldr r0, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    AddTextPrinterParameterizedWithColorAndSpacing(r4, 0, r7, r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    AddTextPrinterParameterizedWithColorAndSpacing(r4, 0, r7);
    String_Delete(r7);
    CopyWindowToVram(r4);
    // ldr r0, [sp, #0x1c]
    // add r4, #0x10
    // add r0, #8
    // str r0, [sp, #0x1c]
}




void ov92_0225E360(void) {
    // add r5, r6, r0
    WindowIsInUse(r5);
    sub_0200E5D4(r5, r7);
    ClearWindowTilemapAndCopyToVram(r5);
    RemoveWindow(r5);
    // add r5, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)*((u32*)(r6 + 0x14))), 0x4e, *((u32*)(*((u32*)(r6 + 0x14)) + 0x10)), 7);
}




void ov92_0225E3C4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x50)), *((u32*)(r0 + 0x54)), *((u32*)(r0 + 0x48)), 0x54);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0x53);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0x52);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 3, r6, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 0x1d);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0x1c);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0x1b);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 2, r6, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 0xd);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0xc);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0xb);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 2, r6, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 0x15);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0x13);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 2, r6, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 0x11);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0xf);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 2, r6, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 0x19);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0x18);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0x17);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 2, r6, r5);
    NARC_New(0xc8, 0x71);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r0, 0x15);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0x16);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0x17);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 2, r6, r5);
    NARC_Delete(r4);
}




void ov92_0225E6A4(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #0x18]
    // str r4, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r6, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // add r1, #0xf4
    // strh r0, [r1]
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, #0xf4
    // strh r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x1c
    // add r1, r1, r2
    // add r2, r7, r1
    // mvn r1, r1
    // ldrsh r1, [r2, r1]
    ov92_0225DDD8(0x00002328, 5, 0xf0, 2);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r2, sp, #0x1c
    SpriteSystem_NewSprite(1);
    *((u32*)(r5 + 0x1c)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x1c
    // add r1, r1, r2
    // add r2, r7, r1
    // mvn r1, r1
    // ldrsh r1, [r2, r1]
    ov92_0225DDD8(0x00002328, 5, 0xf0, 2);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r2, sp, #0x1c
    SpriteSystem_NewSprite(2);
    *((u32*)(r5 + 0x28)) = r0;
    // ldr r0, [sp, #8]
    ov92_0226077C(r4);
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r5 + 0x28)), r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x1c
    // add r1, r1, r2
    // add r2, r7, r1
    // mvn r1, r1
    // ldrsh r1, [r2, r1]
    ov92_0225DDD8(0x00002328, 5, 0xf0, 2);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r2, sp, #0x1c
    SpriteSystem_NewSprite(3);
    *((u32*)(r5 + 0x34)) = r0;
    // ldr r0, [sp, #8]
    ov92_0226077C(r4);
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r5 + 0x34)), r0);
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x34)), 5);
    ManagedSprite_TickTwoFrames(*((u32*)(r5 + 0x1c)));
    ManagedSprite_TickTwoFrames(*((u32*)(r5 + 0x28)));
    ManagedSprite_TickTwoFrames(*((u32*)(r5 + 0x34)));
    ov92_0225DF58(r6, r4, 0);
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov92_0225E7E4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #8
    ov92_0225DDD8(0x0000232B, 1);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x10]
    // add r2, sp, #8
    SpriteSystem_NewSprite(r4, r5);
    ManagedSprite_TickTwoFrames();
}




void ov92_0225E820(void) {
    // add r7, sp, #0xc
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    ov92_0225DDD8(r7, 0, 0, 1);
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x14]
    SpriteSystem_NewSprite(r6, r4, r7);
    // add r1, #0xe8
    // str r0, [r1]
    // add r0, #0xe8
    ManagedSprite_SetAnim(*((u32*)r5), 0);
    // add r0, #0xe8
    ManagedSprite_TickFrame(*((u32*)r5));
    // add r0, #0xe8
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)r5), 4);
    // add r0, #0xe8
    ManagedSprite_SetOamMode(*((u32*)r5), 1);
    // add r0, #0xe8
    ManagedSprite_SetDrawFlag(*((u32*)r5), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    ov92_0225DDD8(r7, 0, 0, 2);
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x14]
    SpriteSystem_NewSprite(r6, r4, r7);
    // add r1, #0xe0
    // str r0, [r1]
    // add r0, #0xe0
    ManagedSprite_SetAnim(*((u32*)r5), 6);
    // add r0, #0xe0
    ManagedSprite_TickFrame(*((u32*)r5));
    // add r0, #0xe0
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)r5), 0);
    // add r0, #0xe0
    ManagedSprite_SetOamMode(*((u32*)r5), 1);
    // add r0, #0xe0
    ManagedSprite_SetDrawFlag(*((u32*)r5), 0);
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov92_0225E918(void) {
    // add r0, #0xe8
    // add r0, #0xe0
}




void ov92_0225E93C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #8
    ov92_0225DDD8(0x0000232F, 0x80, 0x80, 1);
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x10]
    // add r2, sp, #8
    SpriteSystem_NewSprite(r6, r4);
    // add r1, #0xf0
    // str r0, [r1]
    // add r0, #0xf0
    ManagedSprite_SetAnim(*((u32*)r5), 1);
    // add r0, #0xf0
    ManagedSprite_SetDrawFlag(*((u32*)r5), 1);
    // add r0, #0xf0
    ManagedSprite_TickFrame(*((u32*)r5));
    // add r5, #0xf0
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)r5), 7);
}




void ov92_0225E9A8(void) {
}




void ov92_0225E9B4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov92_0225EB40(void) {
    // strb r1, [r3]
}




void ov92_0225EB68(void) {
}




void ov92_0225EB70(void) {
    // ldrsh r2, [r0, r1]
    // ldrsh r0, [r0, r1]
}




void ov92_0225EB88(void) {
    Heap_Alloc(0x71, 0x00002BBC);
    memset(0, 0x00002BBC);
    *((u32*)(r4 + 4)) = r5;
    // str r6, [r4]
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0xc)) = 0;
    *((u32*)(r4 + 0x14)) = r7;
    // str r0, [r4, r3]
    // sub r1, #0xcc
    // str r2, [r4, r1]
    // sub r2, #0xcc
    // add r2, r4, r2
    // str r2, [r4, r1]
    // sub r3, #0x24
    // str r0, [r4, r3]
    ov92_0225EBE0(r4, (0x00002228 + 4), 0x00002BB8, 0x00002BB8);
}




void ov92_0225EBE0(void) {
    // str r0, [r7, r2]
    // str r3, [r7, r1]
    // add r2, #8
    // str r0, [r7, r2]
    // str r0, [r7, r1]
    // str r0, [r7, r2]
    // str r0, [r7, r3]
    // str r0, [r7, r2]
    // str r0, [r7, r1]
    // sub r3, #0x6c
    // str r0, [r7, r1]
    // add r0, r7, r3
    ov92_022630E8(0, ((0x31 << 4) - 4), ((0x31 << 4) + 4), (0x31 << 4));
    // add r0, r7, r0
    ov92_022630E8((0xad << 2));
    // add r0, r7, r0
    ov92_022630E8((0x4b << 4));
    // add r0, r7, r0
    ov92_022630E8((0x13 << 6));
    // add r0, r7, r0
    ov92_022630E8(0x00000AD4);
    // add r0, r7, r0
    ov92_022630E8(0x00000AE4);
    // str r0, [sp, #0xc]
    // add r6, r7, r0
    // add r0, #0x10
    // add r4, r7, r0
    // add r5, r7, r0
    ov92_022630E8(r6);
    ov92_022630E8(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov92_02260428(r5, 0, 0, 5);
    // mvn r0, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov92_02260428(r5, 0, 0, (0 - 5));
    // add r6, r6, r0
    // add r4, r4, r0
    // add r5, r5, r0
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r7, r0
    // str r1, [sp, #8]
    ov92_02260428((0x45 << 2), 0, 0, 5);
    // mvn r3, r3
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r7, r0
    // str r1, [sp, #8]
    ov92_02260428((0x45 << 2), 0, 0, 4);
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r7, r0
    // str r1, [sp, #8]
    ov92_02260428((0x32 << 4), 0, 0, 5);
    // mvn r3, r3
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r7, r0
    // str r1, [sp, #8]
    ov92_02260428((0x32 << 4), 0, 0, 4);
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r7, r0
    // str r1, [sp, #8]
    ov92_02260428(0x00000944, 0, 0, 5);
    // mvn r3, r3
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r7, r0
    // str r1, [sp, #8]
    ov92_02260428(0x00000944, 0, 0, 4);
}




void ov92_0225ED60(void) {
}




void ov92_0225ED68(void) {
    // asr r0, r0, #0xc
}




void ov92_0225ED80(void) {
    // asr r1, r1, #0xc
    ov92_0225DD48(1);
    ov92_0225DD48(2);
    ov92_0225DD48(0);
}




void ov92_0225EDB4(void) {
    Heap_Alloc(0x71, 0x30);
    memset(0, 0x30);
    // add r1, #0xf4
    // add r2, r5, r2
    *((u32*)(r4 + 0xc)) = *((u32*)((*((u16*)(r5 + (r6 << 1))) << 2) + 0x1c));
    // add r0, r5, r0
    *((u32*)(r4 + 0x10)) = *((u32*)((*((u16*)(r5 + (r6 << 1))) << 2) + 0x28));
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0;
    *((u32*)(r4 + 0x2c)) = *((u32*)(r5 + 0x14));
    SysTask_CreateOnMainQueue(ov92_0225F254, r4, (1 << 0xc));
}




void ov92_0225EE04(void) {
    // add r3, r0, r2
    // add r3, r3, r2
    // sub r4, #0xac
    *((u32*)(r3 + 0x40)) = *((u32*)(r0 + 0x00002BB4));
    // add r5, r0, r4
    *((u32*)(r3 + 0x30)) = 1;
    // add r4, r5, r4
    *((u32*)(r3 + 0x2c)) = (r1 << 2);
    // add r1, r0, r1
    *((u32*)(r3 + 0x28)) = *((u32*)(r1 << 2));
    // add r1, #0xf4
    // add r1, r0, r1
    *((u32*)(r3 + 0xc)) = *((u32*)((*((u16*)(r1 << 1)) << 2) + 0x34));
    // str r1, [r3]
    *((u32*)(r3 + 4)) = 0;
    *((u32*)(r3 + 0x3c)) = *((u32*)(r0 + 0x14));
    SysTask_CreateOnMainQueue(ov92_0225F338, r3, (1 << 0xc));
}




void ov92_0225EE60(void) {
    // add r3, r0, r2
    // add r1, r3, r2
    // sub r3, #0xc8
    *((u32*)(r1 + 0x40)) = *((u32*)(r0 + 0x00002BB4));
    *((u32*)(r1 + 0x30)) = 1;
    // add r3, r0, r3
    *((u32*)(r1 + 0x2c)) = 0x00002BB4;
    *((u32*)(r1 + 0x28)) = *((u32*)0x00002BB4);
    // add r3, r0, r3
    *((u32*)(r1 + 0x34)) = 0x00001BB0;
    // add r3, r0, r3
    *((u32*)(r1 + 0x38)) = 0x00001DBC;
    // str r3, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 0x3c)) = *((u32*)(r0 + 0x14));
    SysTask_CreateOnMainQueue(ov92_0225F530, (1 << 0xc), 0);
}




void ov92_0225EEBC(void) {
    Heap_Alloc(0x71, 0x7c);
    memset(0, 0x7c);
    // add r1, r5, r0
    *((u32*)(r4 + 0xc)) = r1;
    // add r1, r5, r1
    *((u32*)(r4 + 0x10)) = (0x32 << 4);
    // add r0, r5, r0
    *((u32*)(r4 + 0x14)) = ((0x11 << 4) + 4);
    // add r2, #0x20
    // add r3, r5, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    *((u32*)(r4 + 0x74)) = *((u32*)(r5 + 0x00002BB4));
    *((u32*)(r4 + 0x78)) = *((u32*)(r5 + 0x14));
    ov92_0225DD48(r5, 0, r4);
    // add r0, r5, r0
    sub_02018198((0xea << 2), 0);
    // add r0, r5, r0
    sub_02018198(0x000005B4, 0);
    // add r0, r5, r0
    sub_02018198((0x1f << 6), 0);
    SysTask_CreateOnMainQueue(ov92_0225EF4C, r4, (1 << 0xc));
}




void ov92_0225EF4C(void) {
    // asr r5, r0, #0x10
    IsPaletteFadeFinished((*((u32*)(r1 + 0x28)) << 4));
    // add r0, #0x34
    SysTask_Destroy(r6);
    Heap_Free(r4);
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225EF90: ; jump table
    // add r0, #0x44
    // add r2, r1, r2
    ov92_02260860(r4, *((u32*)(*((u32*)(r4 + 0x10)) + (0x79 << 2))), (3 << 0xe), 4);
    // add r0, #0x5c
    // add r2, r1, r2
    ov92_02260860(r4, *((u32*)(*((u32*)(r4 + 0x10)) + (0x7a << 2))), (1 << 0x10), 4);
    // add r0, #0x5c
    // sub r2, r1, r2
    ov92_02260860(r4, *((u32*)(r1 + (0x7a << 2))), (1 << 0x10), 4);
    // add r0, #0x44
    // add r2, r1, r2
    ov92_02260860(r4, *((u32*)(r1 + (0x79 << 2))), (3 << 0x10), 8);
    // add r0, #0x5c
    // sub r2, r1, r2
    ov92_02260860(r4, *((u32*)(*((u32*)(r4 + 0x10)) + (0x7a << 2))), (1 << 0x10), 8);
    // add r0, #0x5c
    // add r2, r1, r2
    ov92_02260860(r4, *((u32*)(r1 + (0x7a << 2))), (1 << 0x10), 4);
    PlaySE(0x0000060A);
    *((u32*)(r4 + 8)) = 0;
    // str r0, [r4]
    // add r0, #0x44
    ov92_02260870(r4);
    // add r0, #0x5c
    ov92_02260870(r4);
    // str r2, [r1, r0]
    // str r3, [r2, r1]
    // str r2, [r1]
    // sub r0, #0x54
    // add r0, r1, r0
    ov92_022630E8((0x79 << 2), *((u32*)(r4 + 0x10)), 1, *((u32*)(r4 + 0x5c)));
    // add r0, r1, r0
    ov92_022630E8((0x1a << 4), *((u32*)(r4 + 0x10)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    ov92_02260428(*((u32*)(r4 + 0x10)), 0, 0, 5);
    // mvn r3, r3
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    ov92_02260428(*((u32*)(r4 + 0x10)), 0, 0, 4);
    // add r0, #0x44
    // sub r2, r1, r2
    ov92_02260860(r4, *((u32*)(*((u32*)(r4 + 0x10)) + (0x79 << 2))), (3 << 0x10), 8);
    // add r0, #0x5c
    // add r2, r1, r2
    ov92_02260860(r4, *((u32*)(*((u32*)(r4 + 0x10)) + (0x7a << 2))), (1 << 0x10), 8);
    // add r0, #0x5c
    // sub r2, r1, r2
    ov92_02260860(r4, *((u32*)(r1 + (0x7a << 2))), (1 << 0x10), 8);
    // add r0, #0x44
    // sub r2, r1, r2
    ov92_02260860(r4, *((u32*)(*((u32*)(r4 + 0x10)) + r0)), (3 << 0xe), 4);
    // add r0, #0x5c
    // sub r2, r1, r2
    ov92_02260860(r4, *((u32*)(*((u32*)(r4 + 0x10)) + (0x7a << 2))), (1 << 0x10), 4);
    // add r0, #0x5c
    // add r2, r1, r2
    ov92_02260860(r4, *((u32*)(r1 + (0x7a << 2))), (1 << 0x10), 4);
    // str r0, [r4]
    // add r0, #0x44
    ov92_02260870(r4);
    // add r0, #0x5c
    ov92_02260870(r4);
    // str r3, [r2, r1]
    // str r3, [r2, r1]
    PlaySE((0x63 << 4), ((0x79 << 2) + 4), *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x5c)));
    // str r0, [r4]
    PlaySE(0x0000058D, *((u32*)(r4 + 4)));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [r0]
    // str r0, [r4]
    // str r0, [r4]
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r1, [r0]
    PlaySE(0x0000060A, 0);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    *((u32*)(r4 + 8)) = ((*((u32*)(r4 + 4)) + 1) + 1);
    // str r2, [r1, r0]
    // str r2, [r1, r0]
    SysTask_Destroy(r6, *((u32*)(r4 + 0x10)), 0);
    Heap_Free(r4);
}




void ov92_0225F254(void) {
    // add r0, #0x34
    // add r1, sp, #0xc
    // add r2, sp, #8
    // ldr r1, [sp, #8]
    // add r0, #0x14
    // add r2, r1, r2
    // ldr r1, [sp, #8]
    // add r0, #0x14
    // sub r2, r1, r2
    // str r0, [r4]
    // add r0, #0x14
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r1, [sp, #4]
    // str r0, [r4]
    // str r0, [r4]
}




void ov92_0225F338(void) {
    IsPaletteFadeFinished();
    // add r0, #0x34
    *((u32*)(r4 + 0x30)) = 0;
    SysTask_Destroy(r5);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225F374: ; jump table
    ManagedSprite_SetAnim(*((u32*)(r4 + 0xc)), 7);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0xc)), 0);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0xc)), 2);
    // add r1, sp, #4
    // add r2, sp, #0
    ManagedSprite_GetAffineScale(*((u32*)(r4 + 0xc)));
    // ldr r0, [sp]
    _fgr(0);
    // ldr r1, [sp]
    _fmul(0x45800000);
    _fadd((0x3f << 0x18), r0);
    // ldr r1, [sp]
    _fmul();
    _fsub((0x3f << 0x18));
    _ffix();
    // add r0, #0x10
    ov92_02260860(r4, r0, (2 << 0xc), 2);
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)(r4 + 0xc)), (*((u32*)*((u32*)(r4 + 0x2c))) - 1));
    // str r0, [r4]
    // add r0, #0x10
    ov92_02260870(r4);
    _fflt(*((u32*)(r4 + 0x10)));
    _fdiv(0x45800000);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), (0xfe << 0x16), r0);
    // str r0, [r4]
    // add r0, #0x10
    ov92_02260860(r4, (2 << 0xc), 0x00000666, 4);
    // str r0, [r4]
    // add r0, #0x10
    ov92_02260870(r4);
    _fflt(*((u32*)(r4 + 0x10)));
    _fdiv(0x45800000);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), (0xfe << 0x16), r0);
    // str r0, [r4]
    // str r0, [r4]
    // add r0, #0x10
    ov92_02260860(r4, 0x00000666, 0x00000CCD, 2);
    // add r0, #0x10
    ov92_02260860(r4, 0x00000CCD, (0x00000CCD >> 1), 4);
    // str r0, [r4]
    *((u32*)(r4 + 0x28)) = *((u32*)*((u32*)(r4 + 0x2c)));
    // str r0, [r4]
    // add r0, #0x10
    ov92_02260870(r4);
    _fflt(*((u32*)(r4 + 0x10)));
    _fdiv(0x45800000);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), (0xfe << 0x16), r0);
    // str r0, [r4]
    // eor r0, r1
    *((u32*)(r4 + 4)) = 1;
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0xc)), (0xfe << 0x16), (0xfe << 0x16));
    ManagedSprite_SetAnim(*((u32*)(r4 + 0xc)), 5);
    ManagedSprite_SetDrawPriority(*((u32*)(r4 + 0xc)), 2);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0xc)), 0);
    *((u32*)(r4 + 0x30)) = 0;
    SysTask_Destroy(r5);
}




void ov92_0225F530(void) {
    IsPaletteFadeFinished();
    // add r0, #0x34
    ov92_0225DA2C(r6, *((u32*)(r4 + 0x3c)));
    ov92_0225DA2C(r5);
    // add r0, #0x88
    // add r1, #0x24
    sub_020180F8(r6, *((u32*)(r4 + 0x3c)));
    // add r6, #0x9c
    // add r1, #0x24
    sub_020180F8(r6, *((u32*)(r4 + 0x3c)));
    // add r0, #0x88
    // add r1, #0x24
    sub_020180F8(r5, *((u32*)(r4 + 0x3c)));
    // add r5, #0x9c
    // add r1, #0x24
    sub_020180F8(r5, *((u32*)(r4 + 0x3c)));
    *((u32*)(r4 + 0x30)) = 0;
    SysTask_Destroy(r7);
    // bmi _0225F5A6
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225F5BC: ; jump table
    ov92_0225D9A8(r6, *((u32*)r2), *((u32*)(ov92_02263CD0 + (0 << 3))), (0 << 3));
    ov92_0225D9B4(r6, *((u32*)(r4 + 0x40)));
    // str r0, [r4]
    // str r0, [sp]
    // add r0, #0x24
    // str r0, [sp, #4]
    // add r0, #0x88
    // add r1, #0x78
    sub_020180BC(r6, r6, *((u32*)r2), 0x27);
    // str r0, [sp]
    // add r0, #0x24
    // str r0, [sp, #4]
    // add r0, #0x9c
    // add r1, #0x78
    sub_020180BC(r6, r6, *((u32*)*((u32*)(r4 + 0x3c))), 0x28);
    // add r1, #0x88
    sub_020181D4(r6, r6);
    // add r1, #0x9c
    sub_020181D4(r6, r6);
    // add r0, #0x88
    sub_02018198(r6, 0);
    // add r0, #0x9c
    sub_02018198(r6, 0);
    sub_020182A0(r6, 0);
    // str r1, [r6, r0]
    // sub r0, #0x5c
    // add r0, r6, r0
    ov92_022630E8((0x7b << 2), 0);
    // add r0, r6, r0
    ov92_022630E8((0x1a << 4));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    ov92_02260428(r6, 0, 0, 5);
    // mvn r3, r3
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    ov92_02260428(r6, 0, 0, 4);
    // str r0, [r4]
    ov92_0225D9A8(r5, *((u32*)r2), *((u32*)(ov92_02263CD4 + (r3 << 3))), (r3 << 3));
    ov92_0225D9B4(r5, *((u32*)(r4 + 0x40)));
    // str r0, [r4]
    // str r0, [sp]
    // add r0, #0x24
    // str r0, [sp, #4]
    // add r0, #0x88
    // add r1, #0x78
    sub_020180BC(r5, r5, *((u32*)r2), 0x29);
    // str r0, [sp]
    // add r0, #0x24
    // str r0, [sp, #4]
    // add r0, #0x9c
    // add r1, #0x78
    sub_020180BC(r5, r5, *((u32*)*((u32*)(r4 + 0x3c))), 0x2a);
    // add r1, #0x88
    sub_020181D4(r5, r5);
    // add r1, #0x9c
    sub_020181D4(r5, r5);
    // add r0, #0x88
    sub_02018198(r5, 0);
    // add r0, #0x9c
    sub_02018198(r5, 0);
    sub_020182A0(r5, 1);
    // str r1, [r5, r0]
    // sub r0, #0x5c
    // add r0, r5, r0
    ov92_022630E8((0x7b << 2), 1);
    // add r0, r5, r0
    ov92_022630E8((0x1a << 4));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    ov92_02260428(r5, 0, 0, 5);
    // mvn r3, r3
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    ov92_02260428(r5, 0, 0, 4);
    sub_020182A8(r6, 0, 0xFFFF8000, 0);
    sub_020182A8(r5, 0, 0xFFFF8000, 0);
    // str r1, [r6, r0]
    // str r1, [r5, r0]
    // str r0, [r4]
    sub_020182A0(r6, 1);
    sub_020182A0(r5, 0);
    // str r1, [r6, r0]
    // str r0, [r4]
    // str r0, [r4]
    ov92_0225DA2C(r6, 1);
    ov92_0225DA2C(r5);
    // add r0, #0x88
    // add r1, #0x24
    sub_020180F8(r6, *((u32*)(r4 + 0x3c)));
    // add r6, #0x9c
    // add r1, #0x24
    sub_020180F8(r6, *((u32*)(r4 + 0x3c)));
    // add r0, #0x88
    // add r1, #0x24
    sub_020180F8(r5, *((u32*)(r4 + 0x3c)));
    // add r5, #0x9c
    // add r1, #0x24
    sub_020180F8(r5, *((u32*)(r4 + 0x3c)));
    // str r0, [r4]
    *((u32*)(r4 + 0x28)) = *((u32*)*((u32*)(r4 + 0x2c)));
    ov92_0225DA2C(r6);
    ov92_0225DA2C(r5);
    // add r0, #0x88
    // add r1, #0x24
    sub_020180F8(r6, *((u32*)(r4 + 0x3c)));
    // add r6, #0x9c
    // add r1, #0x24
    sub_020180F8(r6, *((u32*)(r4 + 0x3c)));
    // add r0, #0x88
    // add r1, #0x24
    sub_020180F8(r5, *((u32*)(r4 + 0x3c)));
    // add r5, #0x9c
    // add r1, #0x24
    sub_020180F8(r5, *((u32*)(r4 + 0x3c)));
    *((u32*)(r4 + 0x30)) = 0;
    SysTask_Destroy(r7);
}




void ov92_0225F878(void) {
    // add r2, sp, #0
    // add r1, sp, #0
    // strh r4, [r2]
    *((u16*)(r2 + 2)) = *((u16*)(ov92_02263C34 + 0x12));
    *((u16*)(r2 + 4)) = *((u16*)(ov92_02263C34 + 0x14));
    *((u16*)(r2 + 6)) = *((u16*)(ov92_02263C34 + 0x16));
    // add r1, r4, r1
    // str r1, [r0, r3]
}




void ov92_0225F8B0(void) {
    // add r1, sp, #0
    // add r2, sp, #0
    // strh r4, [r1]
    *((u16*)(r1 + 2)) = *((u16*)(ov92_02263C34 + 0x1a));
    *((u16*)(r1 + 4)) = *((u16*)(ov92_02263C34 + 0x1c));
    *((u16*)(r1 + 6)) = *((u16*)(ov92_02263C34 + 0x1e));
    // add r1, r1, r2
    // str r1, [r0, r4]
}




void ov92_0225F8EC(void) {
    // sub r1, #0x96
    // add r1, #0x96
    // sub r2, #0x30
    // str r1, [r0, r2]
    // sub r2, #0x30
    // str r1, [r0, r2]
    // sub r2, #0x30
    // str r1, [r0, r2]
    // sub r2, #0x30
    // str r1, [r0, r2]
    // sub r2, #0x30
    // str r1, [r0, r2]
    // sub r2, #0x30
    // str r1, [r0, r2]
    // sub r2, #0x2c
    // add r2, r0, r2
}




void ov92_0225F968(void) {
    // str r0, [r2]
    // str r0, [r2]
    // str r0, [r2]
    // str r0, [r2]
    // str r0, [r2]
}




void ov92_0225F9C4(void) {
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp]
    ov92_0225DFA4(r0, 0);
    ov92_0225DF58(r5, r4, 1);
    // ldrsh r1, [r6, r1]
    // ldr r2, [sp]
    ov92_0225F968(r5, (0x2b << 8));
    ov92_0225EE04(r5, r4);
    // ldrsh r0, [r6, r0]
    // strh r1, [r6, r0]
    // strh r1, [r5, r0]
    // strh r1, [r6, r0]
    // str r1, [r7, r0]
    // str r1, [r5, r0]
    ov92_0225DFA4(r5, r4);
    ov92_0225DF58(r5, r4, 3);
    ov92_0225EDB4(r5, r4);
    // str r1, [r5, r0]
    // str r1, [r5, r0]
    // sub r0, #0xba
    // strh r1, [r5, r0]
    // strh r1, [r6, r0]
    // add r0, #8
    // str r1, [r7, r0]
    // str r1, [r7, r0]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #4]
}




void ov92_0225FAB8(void) {
    // add r3, r4, r1
    // add r5, r5, r5
    // add r5, pc
    // asr r5, r5, #0x10
    // add pc, r5
    // _0225FAD8: ; jump table
    ov92_0225ED68(0, (*((u32*)r0) << 2));
    // strh r1, [r4, r0]
    ov92_0225EEBC(r4, 0);
    ov92_0225FEB4(r4);
    // add r0, r4, r0
    // str r2, [r0, r1]
    // add r2, r4, r1
    // add r1, r2, r1
    sub_02037030(0x18, (*((u32*)r4) << 2), 4);
    // str r1, [r4, r0]
    // sub r0, #0x1a
    // strh r1, [r4, r0]
    // str r1, [r4, r0]
    ov92_0225ED80(r4, 0);
    ov92_0225FC9C(r4);
    ov92_0225FF1C(r4);
    ov92_0225F878(r4);
    // add r2, r4, r0
    // ldrsh r0, [r2, r1]
    // strh r0, [r2, r1]
    // sub r0, #0xa0
    // ldrsh r0, [r4, r0]
    // sub r0, #0xa0
    // strh r2, [r4, r0]
    // sub r0, #0xa0
    // ldrsh r0, [r4, r0]
    // add r0, r4, r0
    // str r2, [r0, r1]
    // str r2, [r4, r1]
    // sub r0, #0x1a
    // strh r2, [r4, r0]
    // sub r1, #0x18
    // add r0, r4, r0
    // strh r2, [r0, r1]
    // sub r0, #0xa0
    // ldrsh r0, [r4, r0]
    // sub r2, #0x84
    // str r0, [r4, r2]
    // sub r2, #0x9e
    // strh r0, [r4, r2]
    // sub r2, #0xa0
    // strh r0, [r4, r2]
    // add r3, r4, r2
    // sub r2, #0x9c
    // strh r0, [r3, r2]
    // sub r0, #0xa4
    // sub r0, #0xa8
    // sub r1, #0xa8
    // str r2, [r4, r1]
    ov92_0225EBE0(r4, 0x00002B18, *((u32*)(r4 + 0x00002B18)));
    // add r2, r4, r1
    // add r1, r2, r1
    sub_02037030(0x18, (*((u32*)r4) << 2), 4);
    // str r0, [r3, r2]
    // sub r2, #0xa0
    // ldrsh r2, [r4, r2]
    // sub r2, #0xa0
    // strh r3, [r4, r2]
    // sub r2, #0xa0
    // ldrsh r2, [r4, r2]
    // sub r1, #0xa0
    // strh r2, [r4, r1]
    ov92_0225EBE0(0, 0, (r1 + 1));
    // add r1, r4, r0
    // str r2, [r1, r0]
}




void ov92_0225FC2C(void) {
    ov92_0225FAB8((0x4b << 4), *((u32*)(r0 + 0x00002AE4)));
    ov92_0225F9C4(r4);
    ov92_0225F8EC(r4);
    ov92_0225EE60(r4, *((u32*)r4));
    ov92_0225F8B0(r4);
    PlaySE(0x0000058C);
    ov92_0225FEE4(r4);
    // str r0, [r4, r1]
    // sub r0, #0x34
    // sub r0, #0x34
    // str r2, [r4, r0]
    // sub r0, #0x1a
    // ldrsh r0, [r4, r0]
    // sub r1, #0x1a
    // strh r0, [r4, r1]
}




void ov92_0225FC9C(void) {
    // add r0, sp, #0x10
    // add r1, sp, #0xc
    System_GetTouchHeldCoords();
    // str r1, [r5, r0]
    // add r0, #0x30
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    TouchscreenHitbox_FindHitboxAtPoint(ov92_02263C3C, 0);
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    TouchscreenHitbox_FindHitboxAtPoint(ov92_02263C34);
    // mvn r1, r1
    // str r0, [r5, r3]
    // str r0, [r5, r1]
    // add r0, r5, r0
    ov92_02260628((0x45 << 2), (0xfe << 0x16), (0xc3 << 2), 0x00001FD4);
    // add r0, r5, r0
    ov92_02260628((0x32 << 4), (0x3f << 0x18));
    // add r3, sp, #0x20
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, r5, r1
    // add r2, r5, r2
    MTX_MultVec43(r3, (0x4d << 4), 0x00001FC8);
    // str r1, [r5, r0]
    // str r0, [r5, r1]
    // add r2, #8
    // str r0, [r5, r2]
    // str r2, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov92_02260428((0x45 << 2), *((u32*)(r5 + r3)), *((u32*)(r5 + (r3 + 4))), *((u32*)(r5 + r3)));
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    ov92_02260428((0x32 << 4), *((u32*)(r5 + (0x00001FD8 - 4))), *((u32*)(r5 + 0x00001FD8)), *((u32*)(r5 + (0x00001FD8 - 4))));
    // asr r4, r0, #0xc
    // sub r0, r0, r4
    _s32_div_f(0x64, 0x28);
    _fflt();
    _f2d(0x3DCCCCCD);
    _dgeq(0xC28F5C29, 0x3FCC28F5);
    _f2d(r6);
    _dsub(0xC28F5C29, 0x3FCC28F5, r0, r1);
    _d2f();
    // ldr r1, [sp, #0x10]
    // str r1, [r5, r0]
    // ldr r1, [sp, #0xc]
    // str r1, [r5, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // add r0, r5, r0
    ov92_02260428((0x45 << 2), *((u32*)(r5 + 0x00001FD4)), *((u32*)(r5 + (0x00001FD8 - 4))));
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // add r0, r5, r0
    ov92_02260428((0x32 << 4), *((u32*)(r5 + (0x00001FD8 - 4))));
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, r5, r1
    // add r2, r5, r2
    MTX_MultVec43(r3, (0x4d << 4), 0x00001FC8);
    // str r2, [r5, r0]
    // add r1, #0x10
    // add r0, #0x10
    // str r2, [r5, r0]
    // ldr r0, [sp, #0x10]
    IsSEPlaying(0x0000058A, *((u32*)(r5 + 0x00002B84)), 1);
    PlaySE(0x0000058A);
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov92_02260A38(r5, (r1 << 0x10), (r2 << 0x10));
    // ldr r1, [sp, #0x10]
    // str r1, [r5, r0]
    // ldr r1, [sp, #0xc]
    // str r1, [r5, r0]
}




void ov92_0225FEB4(void) {
    // strh r3, [r0, r2]
    // sub r1, #0x40
    // str r3, [r0, r1]
    // add r1, #0x64
    // str r3, [r0, r1]
    // add r1, #0x68
    // str r3, [r0, r1]
    // add r1, #0x6c
    // str r3, [r0, r1]
    // add r1, #0x70
    // str r3, [r0, r1]
    // sub r2, #0x34
    // str r3, [r0, r2]
}




void ov92_0225FEE4(void) {
    // ldrsh r1, [r0, r2]
    // sub r1, #0xa
    // str r3, [r0, r1]
    // sub r1, #0xa
    // sub r1, #0xa
    // str r3, [r0, r1]
    // strh r1, [r0, r2]
    // str r2, [r0, r1]
}




void ov92_0225FF1C(void) {
    // add r0, sp, #0x18
    // add r2, sp, #0x18
    // strh r3, [r0]
    *((u16*)(r0 + 2)) = *((u16*)(ov92_02263C34 + 0x22));
    *((u16*)(r0 + 4)) = *((u16*)(ov92_02263C34 + 0x24));
    *((u16*)(r0 + 6)) = *((u16*)(ov92_02263C34 + 0x26));
    // str r0, [r5, r1]
    // add r0, #0x40
    // ldrsh r0, [r5, r0]
    // add r0, #0x42
    // ldrsh r0, [r5, r0]
    // add r0, #0x74
    // add r0, #0x8c
    // add r1, #0x74
    // add r0, r5, r1
    ov92_022607F8(0x00002AE0, 0x00002AE0, *((u16*)(ov92_02263C34 + 0x24)));
    // str r0, [sp, #0x10]
    // add r0, r5, r0
    ov92_022607F8(0x00002B6C);
    // add r2, #0x18
    // sub r1, r1, r7
    // asr r1, r1, #0x10
    // str r1, [sp, #0xc]
    // sub r1, r1, r6
    // asr r4, r1, #0x10
    // ldr r1, [sp, #0x10]
    // sub r0, r0, r7
    // str r0, [r5, r1]
    // add r0, #0x18
    // add r1, #0x18
    // sub r0, r0, r6
    // str r0, [r5, r1]
    // add r0, #0x74
    // add r1, #0x8c
    // asr r0, r0, #0x10
    // str r0, [sp, #0xc]
    // asr r4, r0, #0x10
    // add r0, #0x44
    // add r0, #0x5c
    // add r1, #0x44
    // add r0, r5, r1
    ov92_022607F8(0x00002B54, 0x00002B54, 0x00002B54);
    // str r0, [sp, #0x14]
    // add r0, r5, r0
    ov92_022607F8(0x00002B3C);
    // add r2, #0x18
    // sub r1, r1, r7
    // asr r1, r1, #0x10
    // str r1, [sp, #0xc]
    // sub r1, r1, r6
    // asr r4, r1, #0x10
    // ldr r1, [sp, #0x14]
    // str r1, [r5, r0]
    // sub r1, #0x64
    // sub r2, r1, r7
    // sub r1, #0x64
    // str r2, [r5, r1]
    // sub r1, #0x4c
    // sub r0, #0x4c
    // sub r1, r1, r6
    // str r1, [r5, r0]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r3, [sp, #0xc]
    // add r0, r5, r0
    ov92_02260428((0x45 << 2), 0, 0);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r3, [sp, #0xc]
    // add r0, r5, r0
    ov92_02260428((0x32 << 4), 0, 0);
    // add r3, sp, #0x38
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, r5, r1
    // add r2, r5, r2
    MTX_MultVec43(r3, (0x4d << 4), 0x00001FC8);
    // ldrsh r1, [r5, r0]
    // strh r1, [r5, r0]
    // ldrsh r1, [r5, r1]
    // strh r1, [r5, r0]
    // add r1, #0xc
    // ldrsh r1, [r2, r1]
    _s32_div_f(*((u32*)(r5 + ((0x00002B22 - 2) - 1))), (*((u32*)(r5 + ((0x00002B22 - 2) - 1))) << 1));
    // str r1, [r5, r0]
    // add r0, #0xac
    // str r1, [r5, r0]
    // sub r0, #0x48
    // sub r1, #0x60
    // asr r4, r0, #0x10
    // asr r6, r0, #0x10
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r1, [sp, #8]
    ov92_02260428((0x45 << 2), 0, 0, r6);
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r1, [sp, #8]
    ov92_02260428((0x32 << 4), 0, 0, r6);
    // add r3, sp, #0x2c
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, r5, r1
    // add r2, r5, r2
    MTX_MultVec43(r3, (0x4d << 4), 0x00001FC8);
    // sub r0, #0x4c
    // sub r1, #0x64
    // asr r4, r0, #0x10
    // asr r6, r0, #0x10
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r1, [sp, #8]
    ov92_02260428((0x45 << 2), 0, 0, r6);
    // str r4, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r0
    // str r1, [sp, #8]
    ov92_02260428((0x32 << 4), 0, 0, r6);
    // add r3, sp, #0x20
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r1, r5, r1
    // add r2, r5, r2
    MTX_MultVec43(r3, (0x4d << 4), 0x00001FC8);
    // sub r1, #8
    GetLCRNGSeed(*((u32*)(r5 + 0x00002B90)), 0x00002B90);
    LCRandom();
    SetLCRNGSeed(r4);
    _u32_div_f(r6, 0x64);
    // add r0, r0, r7
    // add r6, r3, r0
    // add r2, r2, r6
    // add r3, #8
    // add r0, r0, r7
    // add r1, #8
    // asr r7, r0, #0x10
    // asr r0, r0, #0x10
    LCRandom((*((u32*)(r5 + 0x00001FC8)) << 4), *((u32*)(r5 + 0x00001FC8)), *((u32*)(ov92_02263D88 + (*((u32*)(r5 + 0x00002AEC)) << 5))), 0);
    // sub r0, r0, r1
    // ror r0, r4
    // add r0, r1, r0
    // sub r4, #0x20
    // mvn r0, r0
    // neg r0, r0
    // asr r4, r0, #0x10
    LCRandom(*((u32*)(r5 + 0x00001FC8)), (r0 >> 0x1f));
    // sub r0, r0, r2
    // ror r0, r1
    // add r0, r2, r0
    // sub r1, #0x20
    // mvn r1, r1
    // mvn r0, r0
    // asr r1, r0, #0x10
    // asr r7, r0, #0x10
    // asr r6, r0, #0x10
    // asr r4, r0, #0x10
    // strh r7, [r5, r0]
    // asr r1, r1, #0x10
    // strh r6, [r5, r0]
    _fflt((((0 * 0x14) << 0x10) << 0xc), ((0 * 0x14) << 0x10), (0 * 0x14));
    _fadd((0x3f << 0x18), r0);
    _fflt((r1 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp]
    // add r0, r5, r0
    ov92_02260798(0x00002B54, 0, r0, 0);
    _fflt((r4 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r4 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp]
    // add r0, r5, r0
    ov92_02260798(0x00002B6C, 0, r0, 0);
    _fflt((r7 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r7 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp]
    // add r0, r5, r0
    ov92_02260798(0x00002B24, 0, r0, 0);
    _fflt((r6 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r6 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp]
    // add r0, r5, r0
    ov92_02260798(0x00002B3C, 0, r0, 0);
    // strh r1, [r5, r0]
    // strh r1, [r5, r2]
    // strh r7, [r5, r2]
    // strh r6, [r5, r2]
    // add r2, #0x64
    // str r1, [r5, r2]
    // add r2, #0x6c
    // str r1, [r5, r2]
    // add r2, #0x68
    // str r1, [r5, r2]
    // add r0, #0x70
    // str r1, [r5, r0]
}




void ov92_02260428(void) {
    // ldr r0, [sp, #0x64]
    _f2d();
    // str r0, [sp, #0x10]
    // sub r0, r4, r6
    // str r1, [sp, #4]
    _dflt();
    _dmul(0x147AE148, 0x3F7547AE, r0, r1);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #4]
    _dmul(r0, r1);
    _d2f();
    // ldr r0, [sp, #0x64]
    _f2d();
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x60]
    // sub r0, r7, r0
    _dflt();
    _dmul(0x55555555, 0x3F755555, r0, r1);
    // ldr r0, [sp, #0x14]
    _dmul(r4, r0, r1);
    _d2f();
    // ldr r0, [sp, #0x68]
    // str r6, [r5, r0]
    // str r4, [r5, r1]
    // str r2, [r5, r1]
    _fflt(*((u32*)(r5 + ((0x7f << 2) - 4))), ((0x7f << 2) - 4), 8);
    _fdiv(*((u32*)(r5 + (0x7f << 2))), r0);
    // str r0, [r5, r1]
    // sub r1, #0xc
    _fflt(*((u32*)(r5 + (0x81 << 2))), (0x81 << 2));
    _fdiv(*((u32*)(r5 + (2 << 8))), r0);
    // str r0, [r5, r1]
    _fmul(r6, r6);
    _fmul(r4, r4);
    _fadd(r7, r0);
    _fgr(0);
    _fmul(0x45800000, r7);
    _fadd((0x3f << 0x18), r0);
    _fmul(r7);
    _fsub((0x3f << 0x18));
    _ffix();
    FX_Sqrt();
    _fflt();
    _fdiv(0x45800000);
    // str r0, [sp, #0x18]
    _f2d();
    _dneq(0, 0, r0, r1);
    FX_SinFx64c(r7);
    // str r0, [sp, #0x1c]
    // str r1, [sp, #0xc]
    FX_CosFx64c(r7);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0xc]
    _f_lltof();
    _fdiv(0x4F800000);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    _f_lltof(r7);
    _fdiv(0x4F800000);
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x18]
    _fdiv();
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x28]
    // str r7, [sp, #0x3c]
    _fmul(r4);
    // str r0, [sp, #0x40]
    // ldr r1, [sp, #0x28]
    _fmul(r6);
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, r5, r2
    // add r2, #0x10
    // add r1, sp, #0x3c
    // add r2, r5, r2
    ov92_02263108(0, (0x19 << 4));
    // add r0, r5, r1
    // add r1, #0x40
    // add r1, r5, r1
    ov92_022632E8((0x15 << 4));
    // add r0, r5, r1
    // sub r1, #0x10
    // add r1, r5, r1
    ov92_022630F8((0x1a << 4));
    // add r0, r5, r1
    // add r1, #0x60
    // add r1, r5, r1
    ov92_02263824((0x15 << 4));
    // add r0, r5, r0
    ov92_0226325C((0x19 << 4));
    // add r3, sp, #0x2c
    // add r4, r5, r7
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r5, r7
    ov92_022632B4(r3, r0);
}




void ov92_02260628(void) {
    // add r1, #8
    // str r0, [sp]
    _fsub(*((u32*)(r0 + (0x7f << 2))), *((u32*)(r0 + (0x7f << 2))));
    // str r0, [r5, r1]
    // add r1, #0xc
    _fsub(*((u32*)(r5 + ((0x7f << 2) + 4))), *((u32*)(r5 + (0x7f << 2))));
    // str r0, [r5, r1]
    // sub r0, #8
    // sub r1, #8
    // str r0, [r5, r1]
    _fmul(r4, r4);
    // ldr r0, [sp]
    _fmul(r0);
    _fadd(r6, r0);
    _fgr(0);
    _fmul(0x45800000, r6);
    _fadd((0x3f << 0x18), r0);
    _fmul(r6);
    _fsub((0x3f << 0x18));
    _ffix();
    FX_Sqrt();
    _fflt();
    _fdiv(0x45800000);
    // str r0, [sp, #4]
    _f2d();
    _dneq(0, 0, r0, r1);
    FX_SinFx64c(r6);
    // str r0, [sp, #8]
    FX_CosFx64c(r6);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    _f_lltof(r7);
    _fdiv(0x4F800000);
    // ldr r0, [sp, #0xc]
    _f_lltof(r6);
    _fdiv(0x4F800000);
    // ldr r1, [sp, #4]
    _fdiv(r7);
    // ldr r0, [sp]
    // str r6, [sp, #0x10]
    _fmul(r0);
    // str r0, [sp, #0x14]
    _fmul(r4, r7);
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, r5, r2
    // add r2, #0x10
    // add r1, sp, #0x10
    // add r2, r5, r2
    ov92_02263108(0, (0x19 << 4));
    // add r0, r5, r1
    // add r1, #0x40
    // add r1, r5, r1
    ov92_022632E8((0x15 << 4));
    // add r0, r5, r1
    // sub r1, #0x10
    // add r1, r5, r1
    ov92_022630F8((0x1a << 4));
    // add r0, r5, r1
    // add r1, #0x60
    // add r1, r5, r1
    ov92_02263824((0x15 << 4));
}




void ov92_0226077C(void) {
    // add r2, #0xbc
}




void ov92_02260798(void) {
    // ldr r4, [sp, #0x18]
    // str r3, [sp]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // sub r0, r7, r6
    // add r2, r2, r7
    // adc r1, r3
    // sub r2, r0, r2
    // asr r1, r2, #0x1f
    // add r0, r0, r7
    // adc r1, r3
    // str r6, [r5]
    // ldr r1, [sp]
}




void ov92_022607F8(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r0, r0, r2
    // adc r1, r3
    // add r0, r4, r0
    // add r0, r1, r0
    // str r0, [r5]
}




void ov92_02260860(void) {
    // str r1, [r0]
    // sub r1, r2, r1
}




void ov92_02260870(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r0, r0, r2
    // adc r1, r3
    // add r0, r0, r1
    // str r0, [r5]
}




void ov92_022608B8(void) {
    // str r1, [sp, #4]
    // str r0, [sp, #0x18]
    // add r2, sp, #0x3c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r2, sp, #0x24
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    IsPaletteFadeFinished(1, ov92_02263E88);
    // ldr r0, [sp, #4]
    // add r0, #0xa4
    // add r0, #0x34
    // ldr r5, [sp, #4]
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 8)));
    // ldr r0, [sp, #4]
    // str r1, [r0]
    SysTask_Destroy(r6, 0);
    // ldr r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r7, sp, #0x3c
    // str r0, [sp, #0x10]
    // add r6, #0x14
    // add r4, sp, #0x24
    // add r5, #0x2c
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x20
    // add r2, sp, #0x1c
    ManagedSprite_GetSpritePositionFxXY(*((u32*)(0 + 8)));
    // ldr r1, [sp, #0x20]
    // str r0, [sp]
    // add r2, r1, r2
    ov92_02260798(r6, *((u32*)r7), 0x000004CD);
    // ldr r1, [sp, #0x1c]
    // str r0, [sp]
    // add r2, r1, r2
    ov92_02260798(r5, *((u32*)r4), 0x00000333);
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r6, #0x30
    // add r5, #0x30
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    *((u32*)(*((u32*)(((r0 + 4) + 1) + 4)) + 4)) = (*((u32*)(((r0 + 4) + 1) + 4)) + 1);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // ldr r7, [sp, #4]
    // ldr r6, [sp, #4]
    // str r0, [sp, #0x14]
    // add r0, #0x14
    // str r0, [sp, #0x14]
    // add r4, sp, #0x54
    // add r7, #0x2c
    // ldr r0, [sp, #0x14]
    ov92_022607F8(0, (*((u32*)(((r0 + 4) + 1) + 4)) + 1));
    // str r0, [r4]
    ov92_022607F8(r7);
    *((u32*)(r4 + 4)) = r0;
    ManagedSprite_SetPositonFxXY(*((u32*)(r5 + 8)), *((u32*)(r6 + 0x14)), *((u32*)(r6 + 0x2c)));
    // str r0, [sp, #0x18]
    ManagedSprite_TickFrame(*((u32*)(r5 + 8)));
    // ldr r0, [sp, #0x14]
    // add r4, #8
    // add r0, #0x30
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // add r7, #0x30
    // add r6, #0x30
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    *((u32*)(*((u32*)((r0 + 1) + 4)) + 4)) = (*((u32*)((r0 + 1) + 4)) + 1);
    // ldr r4, [sp, #4]
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 8)), (*((u32*)((r0 + 1) + 4)) + 1));
    // ldr r0, [sp, #4]
    // str r1, [r0]
    SysTask_Destroy(r6, 0);
}




void ov92_02260A38(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r3, [sp]
    // str r1, [sp, #0xc]
    // ldr r1, [sp]
    // ldr r1, [sp, #0xc]
    // add r4, r2, r1
    // str r3, [r4, r2]
    // sub r1, #0xa0
    // str r7, [r4, r1]
    // ldr r1, [sp]
    // sub r2, #0xa4
    // add r1, r1, r2
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // str r3, [r2, r1]
    // ldr r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    ov92_0225E7E4(0, ((0 + 1) * 0), r2, 1);
    // str r0, [r4, r1]
    // ldr r0, [sp, #8]
    // add r1, r6, r5
    // add r0, r0, r1
    _s32_div_f(3);
    ManagedSprite_SetAnim(*((u32*)(r4 + 0x00002498)));
    // add r6, r6, r5
    // ldr r2, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r1, r2, r1
    SysTask_CreateOnMainQueue(ov92_022608B8, (1 << 0xc));
    // add r3, #0xa8
}




void ov92_02260AE0(void) {
    // str r1, [sp]
    IsPaletteFadeFinished(*((u32*)r1));
    // add r5, #0x34
    // ldr r0, [sp]
    // str r1, [r0]
    SysTask_Destroy(r4, 0);
    // ldr r0, [sp]
    Heap_Free();
    // ldr r0, [sp]
    // ldr r0, [sp]
    *((u32*)(*((u32*)(r0 + 4)) + 0xc)) = 0;
    // ldr r0, [sp]
    *((u32*)(*((u32*)(*((u32*)(r0 + 4)) + 4)) + 4)) = (*((u32*)(*((u32*)(r0 + 4)) + 4)) + 1);
    // add r2, sp, #0x1c
    // strh r0, [r2]
    // ldr r0, [sp]
    // add r0, sp, #0x1c
    // ldrsh r0, [r0, r1]
    // str r5, [sp, #0xc]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x1c
    // add r0, #2
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0x14]
    // ldr r0, [sp]
    *((u32*)(*((u32*)(*((u16*)ov92_02263E5C) + 0xc)) + 8)) = 0;
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // add r0, #0x3a
    // strb r1, [r0]
    _s32_div_f(0, 3, (0 >> 0x1f), (ov92_02263E5C + 2));
    // sub r0, r0, r7
    // asr r1, r0, #0x10
    // add r0, #0x42
    // strh r1, [r0]
    // add r0, #0x44
    // strh r1, [r0]
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 0x40));
    _s32_div_f(r5, 3);
    *((u32*)(r4 + 0x3c)) = (0x1e * r0);
    _s32_div_f((0x1e * r0), (0x5a << 2));
    *((u32*)(r4 + 0x3c)) = r1;
    // add r1, #0x40
    // strh r0, [r1]
    // neg r1, r0
    // add r0, #0x46
    // strh r1, [r0]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #8]
    _ffltu(r4, r4);
    _fadd(r6, r0);
    // ldr r0, [sp, #8]
    _ffltu();
    _fsub(r6);
    _ffix();
    *((u32*)(r4 + 0x20)) = r0;
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    _ffltu();
    _fadd(r6, r0);
    // ldr r0, [sp, #4]
    _ffltu();
    _fsub(r6);
    _ffix();
    *((u32*)(r4 + 0x24)) = r0;
    *((u32*)(r4 + 0x30)) = 0;
    *((u32*)(r4 + 0x34)) = 0;
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x28)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
    // add r1, #0x38
    // strb r0, [r1]
    // add r1, #0x39
    // strb r0, [r1]
    // add r1, #0x3b
    // strb r0, [r1]
    // add r1, #0x38
    // strb r0, [r1]
    // add r1, #0x38
    // strb r0, [r1]
    // ldrsh r0, [r4, r0]
    _fflt((0x42 << 0xc), r4);
    _fadd(r6, r0);
    _fflt((r0 << 0xc));
    _fsub(r6);
    _ffix();
    GF_SinDeg(((*((u32*)(r4 + 0x3c)) << 0x10) >> 0x10));
    // asr r1, r0, #0x1f
    // asr r3, r7, #0x1f
    _ll_mul(r7);
    // add r2, r0, r2
    // adc r1, r0
    *((u32*)(r4 + 0x30)) = (((2 << 0xa) >> 0xc) | (r1 << 0x14));
    // ldrsh r0, [r4, r0]
    _fflt((0x44 << 0xc), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa));
    _fadd(r6, r0);
    _fflt((r0 << 0xc));
    _fsub(r6);
    _ffix();
    GF_CosDeg(((*((u32*)(r4 + 0x3c)) << 0x10) >> 0x10));
    // asr r1, r0, #0x1f
    // asr r3, r7, #0x1f
    _ll_mul(r7);
    // add r2, r0, r2
    // adc r1, r0
    *((u32*)(r4 + 0x34)) = (((2 << 0xa) >> 0xc) | (r1 << 0x14));
    // ldrsh r0, [r4, r0]
    _fflt((0x40 << 0xc), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa));
    _fadd(r6, r0);
    _fflt((r0 << 0xc));
    _fsub(r6);
    _ffix();
    // add r0, r1, r0
    *((u32*)(r4 + 0x1c)) = r0;
    // mov ip, r0
    // add r1, r2, r1
    // add r1, r7, r1
    // add r1, r3, r1
    // add r2, r3, r2
    // add r2, r7, r2
    // mov r3, ip
    // add r2, r3, r2
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x20)), *((u32*)(r4 + 0x24)), (0xe << 0x10));
    // ldr r0, [sp, #0xc]
    // add r4, #0x34
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [sp]
    *((u32*)(*((u32*)((r0 + 4) + 4)) + 4)) = (*((u32*)((r0 + 4) + 4)) + 1);
    // ldr r0, [sp]
    // ldr r0, [sp]
    *((u32*)(*((u32*)(*((u32*)((r0 + 4) + 4)) + 8)) + 8)) = (*((u32*)(*((u32*)((r0 + 4) + 4)) + 8)) + 1);
    ov92_0225DF0C(*((u32*)*((u32*)(*((u32*)((r0 + 4) + 4)) + 8))), 1, 0);
    PlaySE(0x0000058B);
    // ldr r0, [sp]
    // ldr r0, [sp]
    *((u32*)(*((u32*)(r0 + 8)) + 4)) = 1;
    // ldr r1, [sp]
    *((u32*)(1 + 0xc)) = (*((u32*)(*((u32*)(r0 + 8)) + 0xc)) + 1);
    _s32_div_f((*((u32*)(*((u32*)(r0 + 8)) + 0xc)) + 1), 5);
    // ldr r0, [sp]
    *((u32*)(r0 + 0xc)) = r1;
    ov92_0225DF0C(*((u32*)r0), 0, 1);
    // ldr r0, [sp]
    *((u32*)(r0 + 8)) = (r0 + 1);
    // ldr r5, [sp]
    // str r0, [sp, #0x10]
    // ldrsh r0, [r5, r0]
    // add r0, #0x46
    // strh r1, [r0]
    // ldrsh r1, [r5, r0]
    // add r0, #0x3a
    // add r0, #0xa
    ManagedSprite_SetAnim(*((u32*)(r5 + 0x14)), 0);
    // ldrsh r1, [r5, r0]
    // add r0, #0x3a
    // add r0, #0x12
    // add r1, #0x39
    // strb r0, [r1]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, #0x39
    // eor r1, r0
    // add r0, #0x39
    // strb r1, [r0]
    // add r1, #0x39
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x14)), *((u8*)r5), (r5 >> 0x1f));
    // add r0, #0x3b
    *((u32*)(r5 + 0x28)) = 0xFFFFF000;
    *((u32*)(r5 + 0x28)) = 0;
    *((u32*)(r5 + 0x28)) = (1 << 0xc);
    // add r0, #0x3b
    // add r0, #0x3b
    // strb r1, [r0]
    // add r0, #0x3b
    _s32_div_f(*((u8*)r5), 3);
    // add r0, #0x3b
    // strb r1, [r0]
    // ldrsh r1, [r5, r0]
    // add r0, #0x38
    _s32_div_f((r1 + 5), 6);
    // add r1, #0x40
    // strh r0, [r1]
    _s32_div_f((r5 + 5), 6);
    // add r1, #0x40
    // strh r0, [r1]
    _s32_div_f((r5 + 5), 7);
    // add r1, #0x40
    // strh r0, [r1]
    // add r0, #0x38
    // ldrsh r0, [r5, r0]
    // sub r2, r1, r2
    // asr r1, r2, #2
    // add r1, r2, r1
    // sub r2, r0, r2
    // asr r0, r2, #2
    // add r0, r2, r0
    // asr r1, r1, #0x10
    // asr r0, r0, #0x10
    // ldrsh r0, [r5, r0]
    // sub r2, r1, r2
    // asr r1, r2, #2
    // add r1, r2, r1
    // sub r2, r0, r2
    // asr r0, r2, #2
    // add r0, r2, r0
    // asr r1, r1, #0x10
    // asr r0, r0, #0x10
    // ldrsh r0, [r5, r0]
    // sub r2, r1, r2
    // asr r1, r2, #2
    // add r1, r2, r1
    // sub r2, r0, r2
    // asr r0, r2, #2
    // add r0, r2, r0
    // asr r1, r1, #0x10
    // asr r0, r0, #0x10
    // ldrsh r2, [r5, r2]
    // add r2, r2, r1
    // ldrsh r1, [r5, r1]
    // add r1, #0x42
    // strh r2, [r1]
    // ldrsh r1, [r5, r1]
    // add r1, r1, r0
    // ldrsh r0, [r5, r0]
    // add r0, #0x44
    // strh r1, [r0]
    // ldrsh r0, [r5, r0]
    _fflt((0x42 << 0xc), (0x44 + 1), (0x42 + 1));
    _fadd(r4, r0);
    _fflt((r0 << 0xc));
    _fsub(r4);
    _ffix();
    GF_SinDeg(((*((u32*)(r5 + 0x3c)) << 0x10) >> 0x10));
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r2, r0, r2
    // adc r1, r0
    *((u32*)(r5 + 0x30)) = (((2 << 0xa) >> 0xc) | (r1 << 0x14));
    // ldrsh r0, [r5, r0]
    _fflt((0x44 << 0xc), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa));
    _fadd(r4, r0);
    _fflt((r0 << 0xc));
    _fsub(r4);
    _ffix();
    GF_CosDeg(((*((u32*)(r5 + 0x3c)) << 0x10) >> 0x10));
    // asr r1, r0, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r6);
    // add r2, r0, r2
    // adc r1, r0
    *((u32*)(r5 + 0x34)) = (((2 << 0xa) >> 0xc) | (r1 << 0x14));
    // ldrsh r0, [r5, r0]
    _fflt((0x40 << 0xc), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa));
    _fadd(r4, r0);
    _fflt((r0 << 0xc));
    _fsub(r4);
    _ffix();
    // add r7, r1, r0
    *((u32*)(r5 + 0x1c)) = r7;
    // add r1, r2, r1
    // add r1, r3, r1
    // add r1, r6, r1
    // add r2, r3, r2
    // add r2, r6, r2
    // add r2, r7, r2
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x20)), *((u32*)(r5 + 0x24)), (0xe << 0x10));
    // ldr r0, [sp, #0x10]
    // add r5, #0x34
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    *((u32*)(*((u32*)(*((u32*)*((u32*)((r0 + 1) + 0x10))) + 4)) + 4)) = (*((u32*)(*((u32*)*((u32*)((r0 + 1) + 0x10))) + 4)) + 1);
    // ldr r0, [sp]
    ov92_0225DF0C(*((u32*)*((u32*)(*((u32*)*((u32*)((r0 + 1) + 0x10))) + 4))), 0, 0);
    // ldr r0, [sp]
    Heap_Free();
    SysTask_Destroy(r4);
    // ldr r0, [sp]
    ov92_0225DF28(*((u32*)r0));
}




void ov92_022610E8(void) {
    Heap_Alloc(0x71, 0x00000764);
    // str r5, [r1]
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0x10)) = r4;
    SysTask_CreateOnMainQueue(ov92_02260AE0, r0, (1 << 0xc));
}




void ov92_02261118(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0226113C: ; jump table
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4]
    // str r1, [sp]
    // add r3, r4, r3
    // str r0, [sp]
    // add r3, r4, r3
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r4]
    // str r1, [sp]
    // add r3, r4, r3
    // str r0, [sp]
    // add r3, r4, r3
    // str r1, [r4]
}




void ov92_02261208(void) {
    // add r3, sp, #0x20
    // add r6, sp, #0x14
    *((u16*)(r6 + 4)) = *((u16*)ov92_02263E04);
    // add r7, sp, #0x18
    *((u16*)(r6 + 6)) = *((u16*)(ov92_02263E04 + 2));
    *((u16*)(r6 + 8)) = *((u16*)(ov92_02263E04 + 4));
    *((u16*)(r6 + 0xa)) = *((u16*)(ov92_02263E04 + 6));
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #0x10]
    // str r5, [sp, #8]
    // ldr r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)(0 + 8)), *((u16*)(ov92_02263E04 + 4)), ov92_02263E3C);
    // ldrsh r1, [r6, r0]
    // ldrsh r0, [r7, r0]
    // strh r0, [r6]
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    // ldr r0, [sp, #0xc]
    ManagedSprite_SetPositionXY((r1 - 6), 2, 0);
    // str r0, [r4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    *((u32*)(r5 + 0x28)) = 0;
    *((u32*)(r5 + 0x50)) = 0;
    // str r0, [r5]
    *((u32*)(r5 + 0x28)) = (*((u32*)(r5 + 0x28)) + 1);
    // str r0, [r5]
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)(r5 + 8)));
    // ldrsh r0, [r6, r0]
    // strh r0, [r6]
    // ldrsh r1, [r6, r1]
    // ldrsh r2, [r6, r2]
    // ldr r0, [sp]
    ManagedSprite_SetPositionXY((0 + 6), 2, 0);
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    // str r0, [r5]
    *((u32*)(r5 + 0x50)) = 0;
    *((u32*)(r5 + 4)) = 0;
    // str r0, [r5]
    ManagedSprite_TickTwoFrames(*((u32*)(r5 + 8)));
}




void ov92_0226135C(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // ldr r4, [sp]
    // add r0, #0x88
    // add r5, #0x14
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r1, [r0]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r1, [r0]
    // ldr r4, [sp]
    // ldr r0, [sp]
    // str r1, [r0]
}




void ov92_022613F0(void) {
    // add r1, #0x54
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
}




void ov92_02261448(void) {
    IsPaletteFadeFinished((0x99 << 2));
    // add r5, #0x34
    SysTask_Destroy(r6);
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02261480: ; jump table
    // str r1, [r4, r0]
    // add r0, #0x4c
    // str r1, [r4, r0]
    PlaySE(0x0000060E, 0);
    // str r1, [r4, r0]
    // add r0, #0x4c
    // str r1, [r4, r0]
    // add r0, #0xfc
    // add r0, #0xfc
    // str r1, [r0]
    // str r1, [r4, r0]
    // add r0, #0x84
    PlaySE(0x00000589, 0);
    // add r0, #0x84
    // str r1, [r0]
    // add r0, #0xd0
    // str r1, [r0]
    *((u32*)(r4 + 0xc)) = 1;
    *((u32*)(r4 + 0x58)) = 0;
    *((u32*)(r4 + 0x58)) = 1;
    // add r0, #0xd0
    // str r2, [r0]
    // str r2, [r4, r1]
    // add r0, #0x78
    // str r2, [r4, r0]
    // add r1, #0xf0
    // str r2, [r4, r1]
    StopSE(0x00000589, 0, 1);
    // add r0, #8
    ov92_02261118(r4);
    // add r0, #0x80
    ov92_02261208(r4);
    // add r0, #0xf8
    ov92_0226135C(r4);
    // add r0, r4, r0
    ov92_02261208((0x17 << 4));
    // add r0, r4, r0
    ov92_022613F0((0x7a << 2));
    // str r0, [r4]
}




void ov92_0226156C(void) {
    // str r1, [r4, r0]
    // add r1, r4, r0
    // str r1, [r4, r0]
    // str r2, [r4, r1]
    // add r5, r4, r0
    // str r1, [r5]
    *((u32*)(r5 + 4)) = 0;
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022615A4: ; jump table
    // add r0, r4, r0
    *((u32*)(r5 + 8)) = 0x00000944;
    // add r1, r4, r0
    *((u32*)(r5 + 0xc)) = 0;
    // add r0, r4, r0
    *((u32*)(r5 + 0x14)) = ((0x42 << 2) + 4);
    *((u32*)(r5 + 0x10)) = *((u32*)(*((u32*)(r0 + 0x14)) + 0x14));
    // add r0, #0xd0
    // add r2, sp, #4
    *((u32*)(r5 + 8)) = *((u32*)r0);
    // add r0, #0xd4
    *((u32*)(r5 + 0xc)) = *((u32*)r0);
    *((u32*)(r5 + 0x10)) = 0;
    *((u32*)(r5 + 0x14)) = 0;
    // add r0, #0xd0
    // add r1, sp, #4
    // add r1, #2
    ManagedSprite_GetPositionXY(*((u32*)r0), 0, *((u32*)*((u32*)(r0 + 0x0000222C))));
    // add r0, #0xd0
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    ManagedSprite_SetPositionXY(*((u32*)r4), 6, 0xe0);
    // add r0, #0xd4
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)r4));
    // add r0, #0xd4
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    ManagedSprite_SetPositionXY(*((u32*)r4), 6, 0xe0);
    // add r2, r4, r0
    *((u32*)(r5 + 8)) = r2;
    // add r2, r2, r0
    *((u32*)(r5 + 8)) = (r1 + 1);
    *((u32*)(r5 + 0xc)) = (r1 + 1);
    // add r0, #0xd8
    // add r1, sp, #0
    *((u32*)(r5 + 0x10)) = *((u32*)r4);
    // add r0, #0xdc
    // add r1, #2
    *((u32*)(r5 + 0x14)) = *((u32*)r4);
    // add r0, #0xd8
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)r4), (r1 + 1), (r5 + 4));
    // add r0, #0xd8
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    ManagedSprite_SetPositionXY(*((u32*)r4), 2, 0xe0);
    // add r0, #0xdc
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)r4));
    // add r0, #0xdc
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    ManagedSprite_SetPositionXY(*((u32*)r4), 2, 0xe0);
    *((u32*)(r5 + 8)) = r4;
    // add r5, #0x78
    // add r1, r4, r1
    SysTask_CreateOnMainQueue(ov92_02261448, 0x00002228, (1 << 0xc));
    // str r0, [r4, r1]
}




void ov92_022616D8(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // add r0, #0x14
    // add r1, #0x24
    // add r0, r5, r1
    ov92_02260860(*((u32*)(r0 + (0x57 << 2))), 0, (0xa << 0xe), 0xa);
    // add r0, r5, r0
    ov92_02260860((0x66 << 2), 0, (5 << 0x10), 0xa);
    // add r0, r5, r0
    ov92_02260860((0x1b << 4), 0, 0xFFFB0000, 0xa);
    // str r1, [r5, r0]
    // add r1, #0x24
    // add r6, r5, r1
    // add r4, sp, #0xc
    ov92_02260870(r6, (*((u32*)(r5 + (0x17 << 4))) + 1));
    // add r6, #0x18
    // stmia r4!, {r0}
    // asr r3, r3, #0xc
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x10)), 7, 3, *((u32*)(r5 + (3 << 7))));
    // add r3, #0x1c
    // asr r3, r3, #0xc
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x10)), 5, 0, *((u32*)(r5 + (0x5f << 2))));
    // add r3, #0x34
    // asr r3, r3, #0xc
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x10)), 6, 0, *((u32*)(r5 + (0x5f << 2))));
    // add r3, #0x1c
    // asr r3, r3, #0xc
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x10)), 1, 0, *((u32*)(r5 + (0x5f << 2))));
    // add r3, #0x34
    // asr r3, r3, #0xc
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x10)), 2, 0, *((u32*)(r5 + (0x5f << 2))));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r1, [r5, r0]
    // add r0, #0x1c
    // str r2, [r5, r0]
    // add r1, #0x14
    // str r0, [r5, r1]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // str r1, [r0]
    // ldr r3, [sp, #8]
    // str r1, [sp]
    // ldr r3, [sp, #4]
    // add r3, r4, r3
    PaletteData_BlendPalettes(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x14)), 0, 1, ((*((u32*)r3) << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r3, [sp, #8]
    // ldr r3, [sp, #4]
    // add r3, r4, r3
    PaletteData_BlendPalettes(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x14)), 1, 1, ((*((u32*)r3) << 0x18) >> 0x18));
}




void ov92_02261850(void) {
    // str r0, [sp, #8]
    // str r0, [sp, #4]
    // add r0, #0x14
    // add r1, #0x24
    // add r0, r5, r1
    ov92_02260860(*((u32*)(r0 + (0x57 << 2))), (0xa << 0xe), 0, 0xa);
    // add r0, r5, r0
    ov92_02260860((0x66 << 2), (5 << 0x10), 0, 0xa);
    // add r0, r5, r0
    ov92_02260860((0x1b << 4), 0xFFFB0000, 0, 0xa);
    // str r1, [r5, r0]
    // add r1, #0x24
    // add r6, r5, r1
    // add r4, sp, #0xc
    ov92_02260870(r6, (*((u32*)(r5 + (0x17 << 4))) + 1));
    // add r6, #0x18
    // stmia r4!, {r0}
    // asr r3, r3, #0xc
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x10)), 7, 3, *((u32*)(r5 + (3 << 7))));
    // add r3, #0x1c
    // asr r3, r3, #0xc
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x10)), 5, 0, *((u32*)(r5 + (0x5f << 2))));
    // add r3, #0x34
    // asr r3, r3, #0xc
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x10)), 6, 0, *((u32*)(r5 + (0x5f << 2))));
    // add r3, #0x1c
    // asr r3, r3, #0xc
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x10)), 1, 0, *((u32*)(r5 + (0x5f << 2))));
    // add r3, #0x34
    // asr r3, r3, #0xc
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x10)), 2, 0, *((u32*)(r5 + (0x5f << 2))));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // str r1, [r5, r0]
    // add r0, #0x1c
    // str r2, [r5, r0]
    // add r1, #0x14
    // str r2, [r5, r1]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // str r1, [r0]
    // ldr r3, [sp, #8]
    // str r1, [sp]
    // ldr r3, [sp, #4]
    // add r3, r4, r3
    PaletteData_BlendPalettes(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x14)), 0, 1, ((*((u32*)r3) << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r3, [sp, #8]
    // ldr r3, [sp, #4]
    // add r3, r4, r3
    PaletteData_BlendPalettes(*((u32*)(*((u32*)(r5 + (0x5f << 2))) + 0x14)), 1, 1, ((*((u32*)r3) << 0x18) >> 0x18));
}




void ov92_022619C4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022619D4: ; jump table
}




void ov92_02261A18(void) {
    IsPaletteFadeFinished(*((u32*)(r1 + (0x56 << 2))));
    // add r0, #0x34
    SysTask_Destroy(r5, (0x5f << 2));
    // sub r0, #8
    ov92_022616D8(r6);
    // str r2, [sp]
    // ldr r3, [sp]
    // str r3, [r6, r1]
    // str r7, [r6, r3]
    // ldr r3, [sp]
    // str r3, [r6, r0]
    // ldr r0, [sp]
    // sub r0, #0x20
    // str r3, [r6, r0]
    // sub r1, #0x1c
    // str r0, [r6, r1]
    // ldr r0, [sp]
    // add r4, r2, r0
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)r6), (*((u32*)(ov92_02263EA4 + 0xc)) + 4), ov92_02263EA0, *((u32*)(ov92_02263EA8 + (0x28 << 3))));
    // add r0, #0xa0
    ManagedSprite_SetPaletteOverrideOffset(*((u32*)r5), *((u32*)(r4 + 0x18)));
    // add r5, #0x50
    // ldr r0, [sp]
    SysTask_CreateOnMainQueue(*((u32*)(ov92_02263EC4 + r0)), r6, 0x00001001);
    // sub r0, #0x18
    ov92_02261850(r6);
    // str r1, [r6, r0]
}




void ov92_02261B18(void) {
    // add r1, r4, r0
    // str r1, [r4, r0]
    // add r3, r4, r1
    // str r3, [r4, r2]
    // add r2, r4, r1
    // add r1, #8
    // str r2, [r4, r1]
    // add r1, #0x24
    // str r2, [r4, r1]
    // add r2, #0xc
    // str r1, [r4, r2]
    // add r2, #0x18
    // str r1, [r4, r2]
    // add r0, #0x1c
    // str r1, [r4, r0]
    // add r0, #0xa0
    // add r5, #0xe8
    // str r5, [r3, r6]
    // add r5, #0xe0
    // str r5, [r3, r0]
    // add r3, #0x50
    // add r1, r4, r1
    SysTask_CreateOnMainQueue(ov92_02261A18, 0x00002030, (1 << 0xc), r0);
    // str r0, [r4, r1]
}




void ov92_02261BA0(void) {
    // add r0, #0x34
    // sub r0, #0x14
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261BE0: ; jump table
    // add r0, #0xa8
    // strh r1, [r0]
    // add r0, #0xb4
    // strh r1, [r0]
    // add r0, #0xb6
    // strh r1, [r0]
    // add r0, #0xb8
    // str r1, [r0]
    // add r0, #0xbc
    // str r1, [r0]
    // add r0, #0xa0
    // add r1, sp, #4
    // add r2, sp, #0
    // ldrsh r1, [r4, r1]
    // add r5, r2, r0
    // ldrsh r1, [r4, r1]
    // add r6, r2, r0
    // add r0, #0x20
    // add r2, r5, r2
    // add r0, #0x38
    // sub r2, r6, r2
    // add r0, #0xa0
    // add r1, sp, #4
    // add r2, sp, #0
    // add r0, #0xa8
    // ldrsh r1, [r4, r1]
    // add r1, #0xb8
    // add r6, r2, r0
    // add r0, #0xa8
    // ldrsh r1, [r4, r1]
    // add r1, #0xbc
    // sub r5, r2, r0
    // add r0, #0xa0
    // add r0, #0xc0
    // sub r2, r6, r2
    // add r0, #0xd8
    // add r2, r5, r2
    // add r0, #0xa0
    // str r1, [r4, r0]
    // add r0, #0xa0
    // add r0, #0xa0
    // str r1, [r4, r0]
    // sub r1, #0x38
    // add r0, #0xa0
    // add r0, #0xa0
    // str r1, [r4, r0]
    // sub r1, #0x38
    // add r0, #0xa0
    // add r0, #0xa0
    // str r1, [r4, r0]
    // sub r1, #0x38
    // add r0, #0xa0
    // add r0, #0xa0
    // str r1, [r4, r0]
}




void ov92_02261E80(void) {
}




void ov92_02261E88(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r6, [sp, #4]
    // add r0, #0x20
    // sub r2, r6, r2
    // ldr r6, [sp, #4]
    // add r0, #0x20
    // add r2, r6, r2
    // ldr r6, [sp]
    // add r0, #0x38
    // sub r2, r6, r2
    // ldr r6, [sp]
    // add r0, #0x38
    // add r2, r6, r2
    // add r0, #0x20
    // add r0, #0x38
}




void ov92_02261F60(void) {
    ov92_022619C4(r1);
    // add r0, #0x20
    ov92_02260860(r5, (0x4d << 0xe), (2 << 0x12), r0);
    ov92_022619C4(r4);
    // add r0, #0x20
    ov92_02260860(r5, 0xFFFC2000, (2 << 0x12), r0);
    ov92_022619C4(r4);
    // add r0, #0x38
    ov92_02260860(r5, (0xa << 0x10), (0x22 << 0xe), r0);
    ov92_022619C4(r4);
    // add r0, #0x38
    ov92_02260860(r5, (0xa << 0x10), (0x2e << 0xe), r0);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
    // add r0, #0x20
    ov92_02260870(r5);
    // add r0, #0x38
    ov92_02260870(r5);
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)r5), *((u32*)(r5 + 0x20)), *((u32*)(r5 + 0x38)), (1 << 0x14));
}




void ov92_02262018(void) {
    ov92_022619C4(r1);
    // add r0, #0x20
    ov92_02260860(r5, (0x4d << 0xe), (2 << 0x12), r0);
    ov92_022619C4(r4);
    // add r0, #0x20
    ov92_02260860(r5, 0xFFFC2000, (2 << 0x12), r0);
    ov92_022619C4(r4);
    // add r0, #0x38
    ov92_02260860(r5, (6 << 0x10), (0x12 << 0xe), r0);
    ov92_022619C4(r4);
    // add r0, #0x38
    ov92_02260860(r5, (6 << 0x10), (0x1e << 0xe), r0);
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
    // add r0, #0x20
    ov92_02260870(r5);
    // add r0, #0x38
    ov92_02260870(r5);
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)r5), *((u32*)(r5 + 0x20)), *((u32*)(r5 + 0x38)), (1 << 0x14));
}




void ov92_022620D0(void) {
    // ldrsh r2, [r4, r1]
    // add r0, r2, r0
    // ldrsh r1, [r4, r1]
    // add r1, sp, #4
    // add r2, sp, #0
    // ldrsh r1, [r4, r1]
    // sub r5, r2, r0
    // ldrsh r1, [r4, r1]
    // add r5, r2, r0
    // ldrsh r1, [r4, r1]
    // sub r2, r2, r0
    // ldrsh r0, [r4, r0]
}




void ov92_022621A4(void) {
    // add r2, sp, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    IsPaletteFadeFinished(ov92_02263E1C);
    // add r1, #0x34
    SysTask_Destroy(r5, *((u8*)*((u32*)(r4 + (0x5f << 2)))));
    // sub r1, #0x14
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022621F0: ; jump table
    // sub r0, #0x3c
    // str r1, [sp]
    *((u16*)(r4 + 8)) = 0;
    *((u16*)(r4 + 0x14)) = 0x80;
    *((u16*)(r4 + 0x16)) = 0xa0;
    *((u32*)(r4 + 0x18)) = 0x40;
    *((u32*)(r4 + 0x1c)) = 0x18;
    ManagedSprite_SetDrawFlag(*((u32*)r4), 1);
    // add r1, #0xa8
    // strh r0, [r1]
    // add r1, #0xb4
    // strh r0, [r1]
    // add r1, #0xb6
    // strh r0, [r1]
    // add r1, #0xb8
    // str r0, [r1]
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, #0xa0
    ManagedSprite_SetDrawFlag(*((u32*)r5), 1);
    // add r1, sp, #8
    // add r2, sp, #4
    ManagedSprite_GetPositionFxXYWithSubscreenOffset(*((u32*)r5), (1 << 0x14));
    GF_SinDeg(*((u16*)(r5 + 8)));
    // ldrsh r1, [r5, r1]
    GF_CosDeg(*((u16*)(r5 + 8)), *((u32*)(r5 + 0x18)));
    // ldrsh r1, [r5, r1]
    // add r2, r3, r2
    // add r1, r6, r7
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)r5), *((u32*)(r5 + 0x1c)), (*((u32*)(r5 + 0x1c)) * r0), (1 << 0x14));
    // add r0, #0xa0
    // add r1, sp, #8
    // add r2, sp, #4
    ManagedSprite_GetPositionFxXYWithSubscreenOffset(*((u32*)r5), (1 << 0x14));
    // add r0, #0xa8
    GF_SinDeg(*((u16*)r5));
    // ldrsh r1, [r5, r1]
    // add r1, #0xb8
    // add r0, #0xa8
    GF_CosDeg(*((u16*)r5), *((u32*)r5));
    // ldrsh r1, [r5, r1]
    // add r2, #0xbc
    // sub r2, r1, r0
    // add r0, #0xa0
    // add r1, r6, r7
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)r5), (0xb6 << 0xc), *((u32*)r5), (1 << 0x14));
    // ldr r0, [sp]
    // add r5, #0x50
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, #0xa0
    ov92_02261E80(r4, *((u32*)(r4 + (5 << 6))));
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x50)), 0);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_02261E88(r4, *((u32*)(r4 + (0x51 << 2))), 0, 3);
    // str r0, [sp, #0xc]
    // add r0, #0xf0
    ov92_02261F60(r4, *((u32*)(r4 + (0x51 << 2))), 0, 2);
    // str r0, [sp, #0x10]
    ov92_02262018(r4, *((u32*)(r4 + (0x52 << 2))), 1, 3);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // add r0, #0xa0
    ov92_02261E80(r4, 1);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x50)), 1);
    // str r1, [r4, r0]
    // str r3, [sp, #0xc]
    // add r0, #0xf0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 0, 1);
    // str r0, [sp, #0x10]
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // str r0, [sp, #0x14]
    // add r0, #0x50
    ov92_02262018(r4, *((u32*)(r4 + (0x52 << 2))), 1, 3);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_02261F60(r4, *((u32*)(r4 + (0x51 << 2))), 0, 2);
    // str r0, [sp, #0xc]
    // add r0, #0xf0
    ov92_02261E88(r4, *((u32*)(r4 + (0x51 << 2))), 0, 3);
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r0, #0x50
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 0, 1);
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r0, #0x50
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r0, [r4, r1]
    // add r1, #0x1c
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // add r0, #0x1c
    // add r1, #0x1c
    // str r0, [r4, r1]
    SysTask_Destroy(r5, (0x53 << 2));
}




void ov92_02262548(void) {
    // add r2, sp, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    IsPaletteFadeFinished(ov92_02263E0C);
    // add r1, #0x34
    SysTask_Destroy(r5, *((u8*)*((u32*)(r4 + (0x5f << 2)))));
    // sub r1, #0x14
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02262594: ; jump table
    // sub r0, #0x3c
    // str r1, [sp]
    *((u16*)(r4 + 8)) = 0;
    *((u16*)(r4 + 0x14)) = 0x80;
    *((u16*)(r4 + 0x16)) = 0xa0;
    *((u32*)(r4 + 0x18)) = 0x40;
    *((u32*)(r4 + 0x1c)) = 0x18;
    ManagedSprite_SetDrawFlag(*((u32*)r4), 1);
    // add r1, #0xa8
    // strh r0, [r1]
    // add r1, #0xb4
    // strh r0, [r1]
    // add r1, #0xb6
    // strh r0, [r1]
    // add r1, #0xb8
    // str r0, [r1]
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, #0xa0
    ManagedSprite_SetDrawFlag(*((u32*)r5), 1);
    // add r1, sp, #8
    // add r2, sp, #4
    ManagedSprite_GetPositionFxXYWithSubscreenOffset(*((u32*)r5), (1 << 0x14));
    GF_SinDeg(*((u16*)(r5 + 8)));
    // ldrsh r1, [r5, r1]
    GF_CosDeg(*((u16*)(r5 + 8)), *((u32*)(r5 + 0x18)));
    // ldrsh r1, [r5, r1]
    // add r2, r3, r2
    // add r1, r6, r7
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)r5), *((u32*)(r5 + 0x1c)), (*((u32*)(r5 + 0x1c)) * r0), (1 << 0x14));
    // add r0, #0xa0
    // add r1, sp, #8
    // add r2, sp, #4
    ManagedSprite_GetPositionFxXYWithSubscreenOffset(*((u32*)r5), (1 << 0x14));
    // add r0, #0xa8
    GF_SinDeg(*((u16*)r5));
    // ldrsh r1, [r5, r1]
    // add r1, #0xb8
    // add r0, #0xa8
    GF_CosDeg(*((u16*)r5), *((u32*)r5));
    // ldrsh r1, [r5, r1]
    // add r2, #0xbc
    // sub r2, r1, r0
    // add r0, #0xa0
    // add r1, r6, r7
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)r5), (0xb6 << 0xc), *((u32*)r5), (1 << 0x14));
    // ldr r0, [sp]
    // add r5, #0x50
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, #0xa0
    ov92_02261E80(r4, *((u32*)(r4 + (5 << 6))));
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x50)), 0);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_02261E88(r4, *((u32*)(r4 + (0x51 << 2))), 0, 3);
    // str r0, [sp, #0xc]
    // add r0, #0xf0
    ov92_02261F60(r4, *((u32*)(r4 + (0x51 << 2))), 0, 2);
    // str r0, [sp, #0x10]
    ov92_02262018(r4, *((u32*)(r4 + (0x52 << 2))), 1, 3);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // add r0, #0xa0
    ov92_02261E80(r4, 1);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x50)), 1);
    // str r1, [r4, r0]
    // str r0, [sp, #0xc]
    // add r0, #0xf0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 0, 2);
    // str r0, [sp, #0x10]
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // str r0, [sp, #0x14]
    // add r0, #0x50
    ov92_02262018(r4, *((u32*)(r4 + (0x52 << 2))), 1, 3);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_02261F60(r4, *((u32*)(r4 + (0x51 << 2))), 0, 2);
    // str r0, [sp, #0xc]
    // add r0, #0xf0
    ov92_02261E88(r4, *((u32*)(r4 + (0x51 << 2))), 0, 3);
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r0, #0x50
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 0, 2);
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r0, #0x50
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r0, [r4, r1]
    // add r1, #0x1c
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // add r0, #0x1c
    // add r1, #0x1c
    // str r0, [r4, r1]
    SysTask_Destroy(r5, (0x53 << 2));
}




void ov92_022628F0(void) {
    // add r2, sp, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    IsPaletteFadeFinished(ov92_02263E2C);
    // add r1, #0x34
    SysTask_Destroy(r5, *((u8*)*((u32*)(r4 + (0x5f << 2)))));
    // sub r1, #0x14
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0226293C: ; jump table
    // sub r0, #0x3c
    // str r1, [sp]
    *((u16*)(r4 + 8)) = 0;
    *((u16*)(r4 + 0x14)) = 0x80;
    *((u16*)(r4 + 0x16)) = 0xa0;
    *((u32*)(r4 + 0x18)) = 0x40;
    *((u32*)(r4 + 0x1c)) = 0x18;
    ManagedSprite_SetDrawFlag(*((u32*)r4), 1);
    // add r1, #0xa8
    // strh r0, [r1]
    // add r1, #0xb4
    // strh r0, [r1]
    // add r1, #0xb6
    // strh r0, [r1]
    // add r1, #0xb8
    // str r0, [r1]
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, #0xa0
    ManagedSprite_SetDrawFlag(*((u32*)r5), 1);
    // add r1, sp, #8
    // add r2, sp, #4
    ManagedSprite_GetPositionFxXYWithSubscreenOffset(*((u32*)r5), (1 << 0x14));
    GF_SinDeg(*((u16*)(r5 + 8)));
    // ldrsh r1, [r5, r1]
    GF_CosDeg(*((u16*)(r5 + 8)), *((u32*)(r5 + 0x18)));
    // ldrsh r1, [r5, r1]
    // add r2, r3, r2
    // add r1, r6, r7
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)r5), *((u32*)(r5 + 0x1c)), (*((u32*)(r5 + 0x1c)) * r0), (1 << 0x14));
    // add r0, #0xa0
    // add r1, sp, #8
    // add r2, sp, #4
    ManagedSprite_GetPositionFxXYWithSubscreenOffset(*((u32*)r5), (1 << 0x14));
    // add r0, #0xa8
    GF_SinDeg(*((u16*)r5));
    // ldrsh r1, [r5, r1]
    // add r1, #0xb8
    // add r0, #0xa8
    GF_CosDeg(*((u16*)r5), *((u32*)r5));
    // ldrsh r1, [r5, r1]
    // add r2, #0xbc
    // sub r2, r1, r0
    // add r0, #0xa0
    // add r1, r6, r7
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)r5), (0xb6 << 0xc), *((u32*)r5), (1 << 0x14));
    // ldr r0, [sp]
    // add r5, #0x50
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, #0xa0
    ov92_02261E80(r4, *((u32*)(r4 + (5 << 6))));
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x50)), 0);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_02261E88(r4, *((u32*)(r4 + (0x51 << 2))), 0, 3);
    // str r0, [sp, #0xc]
    // add r0, #0xf0
    ov92_02261F60(r4, *((u32*)(r4 + (0x51 << 2))), 0, 2);
    // str r0, [sp, #0x10]
    ov92_02262018(r4, *((u32*)(r4 + (0x52 << 2))), 1, 3);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // add r0, #0xa0
    ov92_02261E80(r4, 1);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x50)), 1);
    // str r1, [r4, r0]
    // str r3, [sp, #0xc]
    // add r0, #0xf0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 0, 1);
    // str r0, [sp, #0x10]
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // str r0, [sp, #0x14]
    // add r0, #0x50
    ov92_02262018(r4, *((u32*)(r4 + (0x52 << 2))), 1, 3);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xf0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 1, 1);
    // str r0, [sp, #0x10]
    // add r0, #0xf0
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_02261F60(r4, *((u32*)(r4 + (0x51 << 2))), 0, 2);
    // str r0, [sp, #0xc]
    // add r0, #0xf0
    ov92_02261E88(r4, *((u32*)(r4 + (0x51 << 2))), 0, 3);
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r0, #0x50
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 0, 1);
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r0, #0x50
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 1, 1);
    // str r0, [sp, #0xc]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // str r0, [r4, r1]
    // add r1, #0x1c
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // add r0, #0x1c
    // add r1, #0x1c
    // str r0, [r4, r1]
    SysTask_Destroy(r5, (0x53 << 2));
}




void ov92_02262CEC(void) {
    // add r2, sp, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    IsPaletteFadeFinished(ov92_02263E4C);
    // add r1, #0x34
    SysTask_Destroy(r5, *((u8*)*((u32*)(r4 + (0x5f << 2)))));
    // sub r1, #0x14
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02262D38: ; jump table
    // sub r0, #0x3c
    // str r1, [sp]
    *((u16*)(r4 + 8)) = 0;
    *((u16*)(r4 + 0x14)) = 0x80;
    *((u16*)(r4 + 0x16)) = 0xa0;
    *((u32*)(r4 + 0x18)) = 0x40;
    *((u32*)(r4 + 0x1c)) = 0x18;
    ManagedSprite_SetDrawFlag(*((u32*)r4), 1);
    // add r1, #0xa8
    // strh r0, [r1]
    // add r1, #0xb4
    // strh r0, [r1]
    // add r1, #0xb6
    // strh r0, [r1]
    // add r1, #0xb8
    // str r0, [r1]
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, #0xa0
    ManagedSprite_SetDrawFlag(*((u32*)r5), 1);
    // add r1, sp, #8
    // add r2, sp, #4
    ManagedSprite_GetPositionFxXYWithSubscreenOffset(*((u32*)r5), (1 << 0x14));
    GF_SinDeg(*((u16*)(r5 + 8)));
    // ldrsh r1, [r5, r1]
    GF_CosDeg(*((u16*)(r5 + 8)), *((u32*)(r5 + 0x18)));
    // ldrsh r1, [r5, r1]
    // add r2, r3, r2
    // add r1, r6, r7
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)r5), *((u32*)(r5 + 0x1c)), (*((u32*)(r5 + 0x1c)) * r0), (1 << 0x14));
    // add r0, #0xa0
    // add r1, sp, #8
    // add r2, sp, #4
    ManagedSprite_GetPositionFxXYWithSubscreenOffset(*((u32*)r5), (1 << 0x14));
    // add r0, #0xa8
    GF_SinDeg(*((u16*)r5));
    // ldrsh r1, [r5, r1]
    // add r1, #0xb8
    // add r0, #0xa8
    GF_CosDeg(*((u16*)r5), *((u32*)r5));
    // ldrsh r1, [r5, r1]
    // add r2, #0xbc
    // sub r2, r1, r0
    // add r0, #0xa0
    // add r1, r6, r7
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)r5), (0xb6 << 0xc), *((u32*)r5), (1 << 0x14));
    // ldr r0, [sp]
    // add r5, #0x50
    // str r0, [sp]
    // ldr r0, [sp]
    // add r0, #0xa0
    ov92_02261E80(r4, *((u32*)(r4 + (5 << 6))));
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x50)), 0);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_02261E88(r4, *((u32*)(r4 + (0x51 << 2))), 0, 3);
    // str r0, [sp, #0xc]
    // add r0, #0xf0
    ov92_02261F60(r4, *((u32*)(r4 + (0x51 << 2))), 0, 2);
    // str r0, [sp, #0x10]
    ov92_02262018(r4, *((u32*)(r4 + (0x52 << 2))), 1, 3);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // add r0, #0xa0
    ov92_02261E80(r4, 1);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x50)), 1);
    // str r1, [r4, r0]
    // str r3, [sp, #0xc]
    // add r0, #0xf0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 0, 1);
    // str r0, [sp, #0x10]
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // str r0, [sp, #0x14]
    // add r0, #0x50
    ov92_02262018(r4, *((u32*)(r4 + (0x52 << 2))), 1, 3);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xf0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 1, 1);
    // str r0, [sp, #0x10]
    // add r0, #0xf0
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_02261F60(r4, *((u32*)(r4 + (0x51 << 2))), 0, 2);
    // str r0, [sp, #0xc]
    // add r0, #0xf0
    ov92_02261E88(r4, *((u32*)(r4 + (0x51 << 2))), 0, 3);
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r0, #0x50
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 0, 1);
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r0, #0x50
    ov92_02261E88(r4, *((u32*)(r4 + (0x52 << 2))), 1, 2);
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // add r0, #0xf0
    ov92_02261E80(r4);
    ov92_02261E80(r4);
    // add r0, #0x50
    ov92_02261E80(r4);
    // str r1, [r4, r0]
    // add r0, #0xa0
    ov92_022620D0(r4, *((u32*)(r4 + (0x51 << 2))), 1, 1);
    // str r0, [sp, #0xc]
    // add r0, #0xa0
    ov92_02261E80(r4);
    // str r0, [r4, r1]
    // add r1, #0x1c
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // add r0, #0x1c
    // add r1, #0x1c
    // str r0, [r4, r1]
    SysTask_Destroy(r5, (0x53 << 2));
}




void ov92_022630E8(void) {
}




void ov92_022630F8(void) {
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
}




void ov92_02263108(void) {
    // str r0, [r6]
    // str r0, [sp]
    // ldr r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
}




void ov92_02263218(void) {
}




void ov92_0226325C(void) {
    ov92_02263218();
    _fgr(0);
    ov92_02263218(r4);
    _fmul(0x45800000, r0);
    _fadd((0x3f << 0x18), r0);
    ov92_02263218(r4);
    _fmul(0x45800000, r0);
    _fsub((0x3f << 0x18));
    _ffix();
    FX_Sqrt();
    _fflt();
    _fdiv(0x45800000);
}




void ov92_022632B4(void) {
}




void ov92_022632E8(void) {
    _fmul(*((u32*)(r1 + 4)), *((u32*)(r1 + 4)));
    _f2d();
    _dmul(0, (1 << 0x1e), r0, r1);
    _d2f();
    // str r0, [sp, #8]
    _fmul(*((u32*)(r5 + 8)), *((u32*)(r5 + 8)));
    _f2d();
    _dmul(0, (1 << 0x1e), r0, r1);
    _d2f();
    // str r0, [sp, #0xc]
    _fmul(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 0xc)));
    _f2d();
    _dmul(0, (1 << 0x1e), r0, r1);
    _d2f();
    _fmul(*((u32*)(r5 + 4)), *((u32*)(r5 + 8)));
    _f2d();
    _dmul(0, (1 << 0x1e), r0, r1);
    _d2f();
    // str r0, [sp, #0x10]
    _fmul(*((u32*)(r5 + 8)), *((u32*)(r5 + 0xc)));
    _f2d();
    _dmul(0, (1 << 0x1e), r0, r1);
    _d2f();
    // str r0, [sp, #0x14]
    _fmul(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 4)));
    _f2d();
    _dmul(0, (1 << 0x1e), r0, r1);
    _d2f();
    // str r0, [sp, #0x18]
    _fmul(*((u32*)(r5 + 4)), *((u32*)r5));
    _f2d();
    _dmul(0, (1 << 0x1e), r0, r1);
    _d2f();
    // str r0, [sp, #0x1c]
    _fmul(*((u32*)(r5 + 8)), *((u32*)r5));
    _f2d();
    _dmul(0, (1 << 0x1e), r0, r1);
    _d2f();
    _fmul(*((u32*)(r5 + 0xc)), *((u32*)r5));
    _f2d();
    _dmul(0, (1 << 0x1e), r0, r1);
    _d2f();
    // ldr r0, [sp, #0xc]
    _f2d();
    _dsub(0, 0x3FF00000, r0, r1);
    // str r0, [sp, #0x20]
    // str r1, [sp, #4]
    _f2d(r6);
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #4]
    _dsub(r0, r1);
    _d2f();
    // str r0, [r4]
    // ldr r0, [sp, #0x10]
    _fadd(r5);
    *((u32*)(r4 + 4)) = r0;
    // ldr r0, [sp, #0x18]
    _fsub(r7);
    *((u32*)(r4 + 8)) = r0;
    *((u32*)(r4 + 0xc)) = 0;
    // ldr r0, [sp, #0x10]
    _fsub(0, r5);
    *((u32*)(r4 + 0x10)) = r0;
    _f2d(r6);
    _dsub(0, 0x3FF00000, r0, r1);
    // ldr r0, [sp, #8]
    _f2d();
    _dsub(r6, r5, r0, r1);
    _d2f();
    *((u32*)(r4 + 0x14)) = r0;
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    _fadd();
    *((u32*)(r4 + 0x18)) = r0;
    *((u32*)(r4 + 0x1c)) = 0;
    // ldr r0, [sp, #0x18]
    _fadd(0, r7);
    *((u32*)(r4 + 0x20)) = r0;
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    _fsub();
    *((u32*)(r4 + 0x24)) = r0;
    // ldr r0, [sp, #8]
    _f2d();
    _dsub(0, 0x3FF00000, r0, r1);
    // ldr r0, [sp, #0xc]
    _f2d();
    _dsub(r6, r5, r0, r1);
    _d2f();
    *((u32*)(r4 + 0x28)) = r0;
    *((u32*)(r4 + 0x2c)) = 0;
    *((u32*)(r4 + 0x30)) = 0;
    *((u32*)(r4 + 0x34)) = 0;
    *((u32*)(r4 + 0x38)) = 0;
    *((u32*)(r4 + 0x3c)) = (0xfe << 0x16);
}




void ov92_022634F8(void) {
    _fgr(*((u32*)r0), 0);
    _fmul(0x45800000, *((u32*)r5));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)r5));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [r4]
    _fgr(*((u32*)(r5 + 4)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 4)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 4)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 4)) = r0;
    _fgr(*((u32*)(r5 + 8)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 8)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 8)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 8)) = r0;
    _fgr(*((u32*)(r5 + 0xc)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0xc)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0xc)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0xc)) = r0;
    _fgr(*((u32*)(r5 + 0x10)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x10)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x10)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x10)) = r0;
    _fgr(*((u32*)(r5 + 0x14)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x14)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x14)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x14)) = r0;
    _fgr(*((u32*)(r5 + 0x18)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x18)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x18)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x18)) = r0;
    _fgr(*((u32*)(r5 + 0x1c)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x1c)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x1c)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x1c)) = r0;
    _fgr(*((u32*)(r5 + 0x20)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x20)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x20)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x20)) = r0;
    _fgr(*((u32*)(r5 + 0x24)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x24)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x24)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x24)) = r0;
    _fgr(*((u32*)(r5 + 0x28)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x28)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x28)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x28)) = r0;
    _fgr(*((u32*)(r5 + 0x2c)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x2c)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x2c)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x2c)) = r0;
    _fgr(*((u32*)(r5 + 0x30)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x30)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x30)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x30)) = r0;
    _fgr(*((u32*)(r5 + 0x34)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x34)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x34)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x34)) = r0;
    _fgr(*((u32*)(r5 + 0x38)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x38)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x38)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x38)) = r0;
    _fgr(*((u32*)(r5 + 0x3c)), 0);
    _fmul(0x45800000, *((u32*)(r5 + 0x3c)));
    _fadd((0x3f << 0x18), r0);
    _fmul(*((u32*)(r5 + 0x3c)));
    _fsub((0x3f << 0x18));
    _ffix();
    *((u32*)(r4 + 0x3c)) = r0;
}




void ov92_02263824(void) {
}



