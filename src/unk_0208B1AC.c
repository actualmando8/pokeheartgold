/* Decompiled from asm/unk_0208B1AC.s */
#include "global.h"

void sub_0208B1AC(void) {
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GF_CreateVramTransferManager(0x20, 0x13);
    SpriteSystem_Alloc(0x13);
    // str r0, [r4, r1]
    SpriteManager_New(*((u32*)(r4 + (0xff << 2))), (0xff << 2));
    // add r2, sp, #0x24
    // str r0, [r4, r7]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x10
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    SpriteSystem_Init(*((u32*)(r4 + ((1 << 0xa) - 4))), r2, _02103A50, 0x20);
    SpriteSystem_InitSprites(*((u32*)(r4 + (r7 - 4))), *((u32*)(r4 + ((r7 - 4) + 4))), 0x73);
    // add r2, sp, #0
    // strh r0, [r2]
    // add r2, sp, #0
    sub_0200D294(*((u32*)(r4 + (0xff << 2))), *((u32*)(r4 + ((0xff << 2) + 4))), (r2 + 2), (_02103A2C + 2));
}




void sub_0208B258(void) {
}




void sub_0208B278(void) {
    Sprite_UpdateAnim(*((u32*)(r0 + 0x00000458)), (1 << 0xc));
    Sprite_UpdateAnim(*((u32*)(r4 + 0x0000045C)), (1 << 0xc));
    Sprite_UpdateAnim(*((u32*)(r4 + 0x00000504)), (1 << 0xc));
    Sprite_UpdateAnim(*((u32*)(r4 + 0x00000508)), (1 << 0xc));
}




void sub_0208B2C0(void) {
    // add r2, r6, r2
    SpriteSystem_CreateSpriteFromResourceHeader(*((u32*)(r0 + (0xff << 2))), *((u32*)(r0 + (1 << 0xa))), (0x28 * 0));
    // add r1, r5, r1
    // str r0, [r1, r7]
    sub_0208B55C(r5, (r4 << 2));
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000042C)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000004A8)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000004AC)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x4b << 4))), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000004B4)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000004B8)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000004BC)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x13 << 6))), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000004C4)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000004C8)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000004CC)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x4d << 4))), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x51 << 4))), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000514)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000518)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000051C)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x52 << 4))), 0);
    sub_0208B714(r5);
    sub_0208B74C(r5);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000524)), 0);
}




void sub_0208B400(void) {
    Sprite_SetPositionXY(*((u32*)(r0 + 0x00000428)), *((u8*)(_021105B0 + (*((u8*)(*((u32*)(r0 + (0x8b << 2))) + 0x14)) << 1))), *((u8*)(_021105B0 + (*((u8*)(*((u32*)(r0 + (0x8b << 2))) + 0x14)) << 1))), (*((u8*)(*((u32*)(r0 + (0x8b << 2))) + 0x14)) << 1));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000428)), 2);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000428)), 0);
}




void sub_0208B448(void) {
    // add r4, r7, r0
    Sprite_SetDrawFlag(*((u32*)(r4 + (0 << 2))), 0);
    Sprite_SetDrawFlag(*((u32*)(r7 + 0x00000458)), 0);
    Sprite_SetDrawFlag(*((u32*)(r7 + 0x0000045C)), 0);
}




void sub_0208B48C(void) {
    // add r3, #0x18
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_ReplaceCharResObj(*((u32*)(r0 + (0xff << 2))), *((u32*)(r0 + ((0xff << 2) + 4))), 0xa2, 0x19);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, #0x31
    SpriteSystem_ReplacePlttResObj(*((u32*)(r4 + (0xff << 2))), *((u32*)(r4 + ((0xff << 2) + 4))), 0xa2, *((u8*)(_02104C68 + ((*((u8*)(r4 + 0x00000243)) << 0x18) >> 0x1a))));
}




void sub_0208B4EC(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x00000454)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000524)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000524)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000454)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000454)), ((*((u32*)(r4 + (0xa << 6))) << 4) >> 4));
    Sprite_SetDrawFlag(*((u32*)(r4 + r0)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x00000454)), 0);
}




void sub_0208B55C(void) {
    // add r0, r5, r0
    // add r1, #0xd
}




void sub_0208B5A8(void) {
    // add r0, r5, r0
    thunk_Sprite_SetDrawFlag(*((u32*)((0xb << 2) + 0x00000404)), 0);
    // ldrsb r0, [r5, r0]
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + (0x43 << 4))), 1);
    Sprite_SetPositionXY(*((u32*)(r5 + (0x43 << 4))), 0x6c, 0x30);
    Sprite_SetPositionXY(*((u32*)(r5 + (0x43 << 4))), 0x5b, 0x30);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000434)), 1);
    Sprite_SetPositionXY(*((u32*)(r5 + 0x00000434)), 0x7d, 0x30);
    // add r0, r5, r0
    GetMoveAttr(*((u16*)((0 << 1) + (0x99 << 2))), 3);
    // add r1, #0xd
    sub_0208BA88(r5, ((r4 << 0x18) >> 0x18), (((r4 + 5) << 0x18) >> 0x18), ((r0 << 0x18) >> 0x18));
    // add r6, r5, r0
    thunk_Sprite_SetDrawFlag(*((u32*)(r6 + 0x00000438)), 1);
    // add r2, #0x10
    // asr r2, r2, #0x10
    Sprite_SetPositionXY(*((u32*)(r6 + 0x00000438)), 0x18, ((r4 << 5) << 0x10));
    GetMoveAttr(*((u16*)(*((u32*)(r5 + (0x8b << 2))) + 0x18)), 3);
    sub_0208BA88(r5, 0x11, 9, ((r0 << 0x18) >> 0x18));
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000448)), 1);
    Sprite_SetPositionXY(*((u32*)(r5 + 0x00000448)), 0x18, 0xa0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000448)), 0);
    Sprite_SetPositionXY(*((u32*)(r5 + (0x43 << 4))), 0xc8, 0x18);
    Sprite_SetPositionXY(*((u32*)(r5 + 0x00000434)), 0xea, 0x18);
    Sprite_SetPositionXY(*((u32*)(r5 + 0x0000044C)), 0xe8, 0x28);
}




void sub_0208B714(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + (0x15 << 6))), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000005A4)), 0);
}




void sub_0208B74C(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x000005B8)), 0);
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x000005B8)), 1);
    // sub r1, r6, r4
    Sprite_SetDrawPriority(*((u32*)(r5 + r7)));
}




void sub_0208B780(void) {
    // ldr r0, [sp, #0x2c]
    // str r0, [sp]
    // ldr r3, [sp, #0x28]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // add r4, sp, #8
    // add r5, r7, r0
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x30]
}




void sub_0208B85C(void) {
    // strb r6, [r0, r4]
    // strb r5, [r0, r4]
    // strb r3, [r0, r4]
    // ldr r0, [sp, #0x10]
    // neg r0, r0
}




void sub_0208B89C(void) {
    // ldrsb r1, [r5, r1]
    sub_0208A520(*((u32*)(*((u32*)(r0 + (0x8b << 2))) + 0x34)));
    // add r0, sp, #0x14
    MI_CpuFill8(0, 5);
    // add r1, sp, #0x18
    // add r1, #2
    CalcBoxMonPokeathlonPerformance(r4);
    // add r1, sp, #0x14
    Party_GetMonAprijuiceModifiers(*((u32*)*((u32*)(r5 + (0x8b << 2)))), *((u8*)(*((u32*)(r5 + (0x8b << 2))) + 0x14)));
    // add r0, sp, #0xc
    // add r2, sp, #0x14
    CalcBoxmonPokeathlonStars(r4, 0x13);
    // add r3, sp, #0xc
    // str r0, [sp]
    // ldrsb r0, [r3, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    sub_0208B780(0x00000404, 0x4f, ((*((u16*)(r3 + 0x1e)) << 0x1a) >> 0x1d), ((*((u16*)r3) << 0x11) >> 0x1d));
    // add r3, sp, #0xc
    // str r0, [sp]
    // ldrsb r0, [r3, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    sub_0208B780(0x00000404, 0x54, ((*((u16*)(r3 + 0xe)) << 0x1a) >> 0x1d), ((*((u16*)r3) << 0x1d) >> 0x1d));
    // add r3, sp, #0xc
    // str r0, [sp]
    // ldrsb r0, [r3, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    sub_0208B780(0x00000404, 0x59, ((*((u16*)(r3 + 0x16)) << 0x1a) >> 0x1d), ((*((u16*)r3) << 0x17) >> 0x1d));
    // add r3, sp, #0xc
    // str r0, [sp]
    // ldrsb r0, [r3, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    sub_0208B780(0x00000404, 0x5e, ((*((u16*)(r3 + 0x12)) << 0x1a) >> 0x1d), ((*((u16*)r3) << 0x1a) >> 0x1d));
    // add r3, sp, #0xc
    // str r0, [sp]
    // ldrsb r0, [r3, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    sub_0208B780(0x00000404, 0x63, ((*((u16*)(r3 + 0x1a)) << 0x1a) >> 0x1d), ((*((u16*)r3) << 0x14) >> 0x1d));
    sub_0208B714(r5);
}




void sub_0208B9C8(void) {
    // ldrsb r0, [r5, r0]
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x000005CC)), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000005B8)), 0);
    // add r0, r5, r6
    Sprite_SetDrawFlag(*((u32*)((r5 + 4) + 0x000005B8)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + r0)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000005CC)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x000005B8)), 0);
}




void sub_0208BA60(void) {
    sub_0208BA88(0xb, 3, *((u8*)(r0 + (9 << 6))));
    sub_0208BA88(r4, 0xc, 4, *((u8*)(r4 + 0x00000241)));
}




void sub_0208BA88(void) {
    sub_020776B4();
    // str r0, [sp, #8]
    sub_02077678(r7);
    // str r0, [sp]
    // str r6, [sp, #4]
    // ldr r2, [sp, #8]
    SpriteSystem_ReplaceCharResObj(*((u32*)(r5 + (0xff << 2))), *((u32*)(r5 + ((0xff << 2) + 4))), r0);
    sub_0207769C(r7);
    // add r1, r5, r0
    thunk_Sprite_SetPaletteOverride(*((u32*)(r1 + 0x00000404)), (r0 + 3), r0);
}




void sub_0208BAD8(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r0, #0x10
    // asr r7, r0, #0x10
    // ldr r1, [sp, #4]
    Sprite_GetPositionXY(*((u32*)(r0 + 0x00000438)), r3);
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp]
    // strb r6, [r0]
    // asr r6, r0, #0x10
}




void sub_0208BB24(void) {
    // add r2, sp, #4
    // add r1, sp, #0x14
    // add r2, #2
    // add r3, sp, #4
    sub_0208BAD8();
    // add r2, sp, #0
    // add r1, sp, #0x18
    // add r2, #2
    // add r3, sp, #0
    sub_0208BAD8(r4);
    // add r0, sp, #0x10
    // add r3, sp, #0
    // add r0, #0xd
    // add r1, r4, r0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    Sprite_SetPositionXY(*((u32*)(r1 + 0x00000404)), 2, 0);
    // add r0, sp, #0x10
    // add r3, sp, #0
    // add r0, #0xd
    // add r1, r4, r0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    Sprite_SetPositionXY(*((u32*)(r1 + 0x00000404)), 6, 4);
}




void sub_0208BB8C(void) {
    GetMoveAttr(r1, 1);
    sub_02077830();
    sub_02077800(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_ReplaceCharResObj(*((u32*)(r5 + (0xff << 2))), *((u32*)(r5 + ((0xff << 2) + 4))), r6, r0);
    sub_02077818(r4);
    thunk_Sprite_SetPaletteOverride(*((u32*)(r5 + 0x0000044C)), (r0 + 3));
}




void sub_0208BBDC(void) {
    // add r2, #0x28
    // asr r2, r2, #0x10
    Sprite_SetPositionXY(*((u32*)(r0 + 0x00000428)), 0x44, ((((*((u8*)(r0 + 0x000007BD)) << 0x1c) >> 0x1c) << 5) << 0x10));
    // add r2, #0x18
    // asr r2, r2, #0x10
    Sprite_SetPositionXY(*((u32*)(r4 + r0)), 0x44, ((r2 << 5) << 0x10));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000428)), 0);
    Sprite_SetPositionXY(*((u32*)(r4 + 0x00000428)), 0xdc, 0xb0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000428)), 3);
    // add r2, #0x18
    // asr r2, r2, #0x10
    Sprite_SetPositionXY(*((u32*)(r4 + 0x00000428)), 0x44, ((r2 << 5) << 0x10));
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x00000428)), 0);
}




void sub_0208BC78(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    Sprite_GetPositionXY(*((u32*)(r0 + 0x00000428)));
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    Sprite_SetPositionXY(*((u32*)(r4 + 0x0000042C)), 2, 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x0000042C)), 1);
}




void sub_0208BCB4(void) {
    Sprite_SetPositionXY(*((u32*)(r0 + 0x0000042C)), 0x44, 0xa8);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x0000042C)), 0);
}




void sub_0208BCD4(void) {
    // strb r1, [r0, r2]
    // strb r1, [r0, r3]
    // strb r1, [r0, r3]
    // strb r1, [r0, r2]
    // strb r3, [r0, r1]
    // asr r3, r1, #8
    // strb r3, [r0, r1]
    // add r5, #0x74
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x00000404)), 0, ((0x1f << 6) + 1), 0xc);
    Sprite_SetAnimationFrame(*((u32*)(r5 + r6)), 0);
}




void sub_0208BD38(void) {
    // lsl r0, r4
    // tst r0, r1
    Sprite_SetAnimCtrlSeq(*((u32*)(r0 + (0x46 << 4))), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x46 << 4))), 0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r6 + 0x000004D4)), 1);
    thunk_Sprite_SetDrawFlag(*((u32*)(r6 + 0x000004D4)), 0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r6 + 0x000004D8)), 1);
    thunk_Sprite_SetDrawFlag(*((u32*)(r6 + r0)), 0);
}




void sub_0208BDC8(void) {
    // lsl r0, r4
    // tst r0, r1
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(*((u8*)(r0 + 0x000007BE)) + 0x000004A8)), 1);
}




void sub_0208BE00(void) {
    // add r1, r5, r0
    Sprite_GetImageProxy(*((u32*)(r1 + 0x00000404)));
    NNS_G2dGetImageLocation(2);
    Boxmon_GetIconNaix(r4);
    Pokemon_GetIconNaix(r4);
    // str r0, [sp]
    // add r3, sp, #4
    GfGfxLoader_GetCharData(0x14, r0, 0);
    // ldr r0, [sp, #4]
    DC_FlushRange(*((u32*)(r0 + 0x14)), (2 << 8));
    // ldr r0, [sp, #4]
    GXS_LoadOBJ(*((u32*)(r0 + 0x14)), r6, (2 << 8));
    Heap_Free(r4);
}




void sub_0208BE70(void) {
    // add r2, #0x44
    // add r1, #0x42
    // add r1, #0xc
    // add r1, #0x42
    // eor r1, r2
}




void sub_0208BECC(void) {
    sub_0208A520();
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp]
    sub_0208A520(r6, *((u32*)(r6 + (0x8b << 2))));
    Pokemon_GetIconPalette();
    // add r1, #0xc
    thunk_Sprite_SetPaletteOverride(*((u32*)(r5 + 0x00000528)), r0);
    Boxmon_GetIconPalette(r7);
    // add r1, #0xc
    thunk_Sprite_SetPaletteOverride(*((u32*)(r5 + 0x00000528)), r0);
    Party_GetMonByIndex(*((u32*)r1), r4);
    Pokemon_GetIconPalette();
    // add r1, #0xc
    thunk_Sprite_SetPaletteOverride(*((u32*)(r5 + 0x00000528)), r0);
    // add r2, #0x49
    sub_0208BE00(r6, r7, r4);
    // ldr r0, [sp]
    // add r5, r6, r0
    thunk_Sprite_SetDrawFlag(*((u32*)((r5 + 4) + 0x00000528)), 0);
}




void sub_0208BF9C(void) {
    Sprite_SetPositionXY(*((u32*)(r0 + 0x00000528)), 0xd7, 0x50);
    Sprite_SetPositionXY(*((u32*)(r4 + 0x0000052C)), 0xd7, 0x50);
}




void sub_0208BFD0(void) {
    sub_0208A520(*((u8*)(*((u32*)(r0 + (0x8b << 2))) + 0x11)));
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000528)), 1);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000052C)), 0);
    sub_0208BE00(r5, r4, 0x49);
    Boxmon_GetIconPalette(r4);
    // add r1, #0xc
    thunk_Sprite_SetPaletteOverride(*((u32*)(r5 + 0x00000528)), r0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + r0)), 0);
    thunk_Sprite_SetDrawFlag(*((u32*)(r5 + 0x0000052C)), 1);
    sub_0208BE00(r5, r4, 0x4a);
    Boxmon_GetIconPalette(r4);
    // add r1, #0xc
    thunk_Sprite_SetPaletteOverride(*((u32*)(r5 + 0x0000052C)), r0);
    // eor r0, r2
    // str r0, [r5, r1]
}




void sub_0208C068(void) {
    // ldrsb r0, [r4, r0]
    Sprite_SetPositionXY(*((u32*)(r0 + (0x45 << 4))), 0xa0, 0x10);
    Sprite_SetPositionXY(*((u32*)(r4 + (0x45 << 4))), 0x20, 0x44);
    thunk_Sprite_SetDrawFlag(*((u32*)(r4 + (0x45 << 4))), 1);
}




void sub_0208C0A4(void) {
    // add r0, #0x2c
    // sub r1, r4, r1
    // asr r0, r0, #0x10
    // sub r0, r4, r0
    // asr r0, r0, #0x10
    // add r0, #0x2c
    // sub r1, r1, r4
    // asr r0, r0, #0x10
    // add r0, r4, r0
    // asr r0, r0, #0x10
}




void sub_0208C0E8(void) {
    sub_0208C0A4(*((u8*)(r0 + 0x00000275)), 0x58, 0x58);
    sub_0208C0A4(*((u8*)(r4 + 0x00000275)), 0x31, 0x49);
    Sprite_SetPositionXY(*((u32*)(r4 + (0x13 << 6))), r5, r0);
    sub_0208C0A4(*((u8*)(r4 + 0x00000276)), 0x6e, 0x58);
    sub_0208C0A4(*((u8*)(r4 + 0x00000276)), 0x41, 0x49);
    Sprite_SetPositionXY(*((u32*)(r4 + 0x000004C4)), r5, r0);
    sub_0208C0A4(*((u8*)(r4 + 0x00000277)), 0x67, 0x58);
    sub_0208C0A4(*((u8*)(r4 + 0x00000277)), 0x5c, 0x49);
    Sprite_SetPositionXY(*((u32*)(r4 + 0x000004C8)), r5, r0);
    sub_0208C0A4(*((u8*)(r4 + (0x9e << 2))), 0x48, 0x57);
    sub_0208C0A4(*((u8*)(r4 + (0x9e << 2))), 0x5c, 0x49);
    Sprite_SetPositionXY(*((u32*)(r4 + 0x000004CC)), r5, r0);
    sub_0208C0A4(*((u8*)(r4 + 0x00000279)), 0x41, 0x57);
    sub_0208C0A4(*((u8*)(r4 + 0x00000279)), 0x41, 0x49);
    Sprite_SetPositionXY(*((u32*)(r4 + (0x4d << 4))), r5, r0);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x13 << 6))), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x000004C4)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x000004C8)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x000004CC)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x4d << 4))), 1);
}




void sub_0208C208(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + (0x13 << 6))), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x000004C4)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x000004C8)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x000004CC)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x4d << 4))), 0);
}




void sub_0208C250(void) {
    GetRibbonAttr(r1, 1);
    // str r0, [sp]
    // add r0, #0x19
    // str r0, [sp, #4]
    SpriteSystem_ReplaceCharResObj(*((u32*)(r5 + (0xff << 2))), *((u32*)(r5 + ((0xff << 2) + 4))), 0x27, r0);
    GetRibbonAttr(r6, 2);
    // add r4, #0x36
    // add r1, r5, r0
    thunk_Sprite_SetPaletteOverride(*((u32*)(r1 + 0x00000404)), (r0 + 7), r0);
}




void sub_0208C2A0(void) {
    // add r0, r5, r0
    Sprite_SetDrawFlag(*((u32*)((0x36 << 2) + 0x00000404)), 0);
    // ldrsb r0, [r5, r0]
    // add r0, r5, r0
    Sprite_SetDrawFlag(*((u32*)((0 << 2) + 0x000004DC)), 1);
    sub_0208ACDC(r5, ((r4 << 0x18) >> 0x18));
    sub_0208C250(r5, r0, ((r4 << 0x18) >> 0x18));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x0000050C)), 0);
}




void sub_0208C320(void) {
    // add r0, r1, r0
    // add r1, r4, r0
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(*((u8*)(r0 + 0x000007C5)) + 0x000004DC)), 1);
    sub_0208ACDC(r5, ((r4 << 0x18) >> 0x18));
    sub_0208C250(r5, r0, ((r4 << 0x18) >> 0x18));
    // add r1, r5, r0
    Sprite_SetDrawFlag(*((u32*)(r1 + 0x000004DC)), 0);
}




void sub_0208C380(void) {
    _s32_div_f(*((u8*)(r0 + 0x000007C4)), 3);
    _s32_div_f(r6, 3);
    // add r1, #0x20
    // add r3, #0x18
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    Sprite_SetPositionXY(*((u32*)(r5 + (5 << 8))), ((r4 << 5) << 0x10), ((0x28 * r0) << 0x10), (0x28 * r0));
}




void sub_0208C3C0(void) {
    Sprite_GetDrawFlag(*((u32*)(r0 + 0x0000050C)));
    Sprite_UpdateAnim(*((u32*)(r4 + 0x0000050C)), (1 << 0xc));
}



