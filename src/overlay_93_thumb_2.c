/* Decompiled from asm/overlay_93_thumb_2.s */
#include "global.h"

void ov93_0225FBF0(void) {
    // str r1, [sp, #0x10]
    NARC_New(0xc9, 0x75);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x14]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u16*)(ov93_02262CEC + (r5 << 3))), r7, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    GfGfxLoader_LoadScrnDataFromOpenNarc(0x75, *((u16*)(ov93_02262CEE + r6)), r7, 7);
    // ldr r0, [sp, #0x14]
    NARC_Delete();
    MI_CpuFill8(r4, 0, 0x30);
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    *((u32*)(r4 + 0xc)) = *((u32*)((r5 << 2) + ov93_02262FD4));
    *((u32*)(r4 + 4)) = r5;
    // str r1, [r4]
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r2, [sp, #0x10]
    ov93_0225FCA4(r7, r4, (r0 * 0xc));
    PlaySE(0x000005EB);
}




void ov93_0225FC8C(void) {
}




void ov93_0225FCA4(void) {
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // str r0, [sp]
    // add r3, sp, #0x10
    // ldr r1, [sp, #0x10]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // sub r7, r0, r1
    // sub r0, r1, r0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // neg r7, r0
    // ldr r1, [sp, #0xc]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // sub r6, r0, r1
    // sub r0, r1, r0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // neg r6, r0
    // and r0, r1
    // tst r0, r1
    // neg r4, r4
    // eor r0, r1
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r3, [sp, #8]
    // ldr r0, [sp, #4]
    // sub r3, r4, r7
    // ldr r0, [sp, #4]
    // sub r3, r3, r6
}




void ov93_0225FD8C(void) {
    // add r1, r3, r6
    _s32_div_f((*((u32*)(ov93_02262CF0 + (r1 << 3))) * r2), *((u32*)((r1 << 2) + r1)), (r1 << 2), ov93_02262FD4);
    // add r2, r0, r1
    // ldr r1, [sp, #0x10]
    // str r2, [r4]
    // str r2, [r1]
    // sub r0, r0, r1
    // asr r1, r0, #0x1f
    _ll_mul((0xd << 8), 0x0000119A, 0);
    // add r3, r0, r3
    // adc r1, r5
    // add r0, r2, r1
    // str r0, [r4]
}




void ov93_0225FDF4(void) {
    // cmp r0, #0xa
    // blt _0225FDFC
    // cmp r0, #5
    // blt _0225FE04
}




void ov93_0225FE08(void) {
    // add r0, r0, r6
    *((u32*)(r1 + 0x10)) = *((u32*)(r1 + 0x10));
    _s32_div_f(*((u32*)(r1 + 0x10)), 6);
    *((u32*)(r4 + 0x14)) = r0;
    ov93_0225E3C4(r5, r7);
    // add r1, #0x18
    // add r2, r2, r6
    // str r2, [r1, r0]
    sub_0203769C((r0 << 2), r4, *((u32*)(r4 + (r0 << 2))));
    // add r0, r0, r6
    // str r0, [r5, r1]
    // add r0, r5, r0
    ov93_02262098(0x000015A8, *((u32*)(r5 + 0x00003848)));
}




void ov93_0225FE5C(void) {
    // sub r1, r1, r2
    // add r1, r1, r2
}




void ov93_0225FE80(void) {
    ov93_0225FE5C(r2);
    // add r2, #0x30
    ov93_0225FCA4(r6, r4, *((u8*)*((u32*)r5)));
}




void ov93_0225FEAC(void) {
    // add r2, r0, r1
}




void ov93_0225FEC4(void) {
    // add r2, r5, r2
    // add r2, r2, r6
    ov93_0225FF1C(r0, r1, 0x00002FDC, 0);
    // str r0, [sp]
    // add r1, r5, r1
    ov93_02261C58(r5, 0x00001560, *((u8*)(r4 + 1)), *((u8*)r4));
    // add r2, #0x18
    GF_AssertFail(1, (r3 + 1));
}




void ov93_0225FF1C(void) {
    GF_AssertFail(*((u32*)r2));
    MI_CpuFill8(r4, 0, 0x18);
    ov93_0225E3C4(r7, *((u8*)r5));
    // add r1, #0x30
    // add r1, r3, r1
    // add r6, r1, r2
    *((u16*)(r4 + 4)) = *((u8*)r5);
    *((u16*)(r4 + 6)) = *((u16*)(r5 + 2));
    *((u32*)(r4 + 8)) = *((u32*)(r5 + 8));
    *((u32*)(r4 + 0x14)) = r6;
    *((u8*)(r4 + 0xe)) = *((u8*)(r5 + 1));
    ov93_0226027C(r7, r6, (0xa * r0), ov93_02263010);
    *((u32*)(r4 + 0x10)) = r0;
    sub_0203769C();
    ov93_0225DF38(r7, *((u32*)(r5 + 4)));
    *((u16*)(r4 + 0xc)) = 0x19;
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 0);
    // str r0, [r4]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x10)), (0x16 << 0x10));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225FFB6: ; jump table
    // add r1, sp, #0
    // ldrsh r1, [r1, r0]
    // sub r5, r0, r1
    // add r1, sp, #0
    // ldrsh r5, [r1, r0]
    // sub r5, #0xcc
    // add r1, sp, #0
    // ldrsh r5, [r1, r0]
    // sub r5, #0xa4
    // add r1, sp, #0
    // ldrsh r1, [r1, r0]
    // sub r5, r0, r1
    _s32_div_f((r5 << 0xc), (5 << 0xc));
}




void ov93_0225FFF8(void) {
    // add r4, r5, r0
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0xc)) = (0xc - 1);
    // ldrsh r0, [r4, r0]
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 1);
    ov93_02260080(r5, r4);
    // str r0, [sp]
    // ldrsh r3, [r4, r3]
    // add r1, r5, r1
    ov93_0225FE08(r5, 0x00001428, *((u32*)(r4 + 8)), 4);
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x10)));
    // str r7, [r4]
    // add r4, #0x18
}




void ov93_02260080(void) {
    // str r0, [sp]
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)(r1 + 0x10)), (0x16 << 0x10));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022600AE: ; jump table
    // add r0, sp, #4
    // ldrsh r2, [r0, r1]
    // sub r6, r0, r2
    ManagedSprite_AddSpritePrecisePositionXY(*((u32*)(r4 + 0x10)), r7, (5 << 0xc));
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x10)), (0x16 << 0x10));
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // sub r5, r0, r1
    // add r1, sp, #4
    // ldrsh r6, [r1, r0]
    // sub r6, #0xcc
    ManagedSprite_AddSpritePrecisePositionXY(*((u32*)(r4 + 0x10)), 0xFFFFB000, 1);
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x10)), (0x16 << 0x10));
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // sub r5, #0xcc
    // add r0, sp, #4
    // ldrsh r6, [r0, r1]
    // sub r6, #0xa4
    ManagedSprite_AddSpritePrecisePositionXY(*((u32*)(r4 + 0x10)), 1, 0xFFFFB000);
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x10)), (0x16 << 0x10));
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // sub r5, #0xa4
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // sub r6, r0, r1
    ManagedSprite_AddSpritePrecisePositionXY(*((u32*)(r4 + 0x10)), (5 << 0xc), 1);
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)(r4 + 0x10)), (0x16 << 0x10));
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // sub r5, r0, r1
    _s32_div_f((r5 << 0xc), 0xe);
    _fflt((1 << 0xa), (1 << 0xa));
    _fdiv(0x45800000);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)), r0, r0);
    // mvn r0, r0
    // neg r1, r5
    _s32_div_f((*((u32*)(ov93_02262CA4 + (*((u8*)(r4 + 0xe)) << 2))) * r1), 0xe, (*((u8*)(r4 + 0xe)) << 2));
    _fflt((1 << 0xa), (1 << 0xa));
    _fdiv(0x45800000);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x10)), r0, r0);
    sub_0203769C();
    // ldrsh r1, [r4, r1]
    // ldr r0, [sp]
    // add r1, sp, #0xc
    ov93_022614F4(4);
    *((u8*)(r4 + 0xe)) = r0;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) << 1);
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) >> 0x1f);
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) << 1);
    // ldr r0, [sp]
    ov93_02260FB8((*((u32*)(r4 + 8)) << 1), *((u8*)(r4 + 0xe)));
    // ldr r0, [sp, #0xc]
    ov93_02261528(*((u8*)(r4 + 0xe)), 3);
    // ldr r0, [sp]
    ov93_02260F84();
    // ldr r0, [sp]
    ov93_022627E8(r0);
}




void ov93_0226027C(void) {
    // add r4, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r1, sp, #0
    // str r0, [r4]
    // ldrsh r0, [r5, r0]
    // strh r0, [r1]
    // ldrsh r0, [r5, r0]
    *((u16*)(r1 + 2)) = 2;
    // str r0, [sp, #0xc]
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x28)), r0, (6 - 1));
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(0, 2, (0x16 << 0x10));
    ManagedSprite_SetAnim(r4, *((u16*)(r5 + 4)));
    ManagedSprite_SetAffineOverwriteMode(r4, 2);
    Sprite_TickFrame(*((u32*)r4));
}




void ov93_022602E4(void) {
    Sprite_DeleteAndFreeResources(*((u32*)(r0 + 0x00002FEC)));
    // str r6, [r5, r0]
    // add r5, #0x18
}




void ov93_02260314(void) {
    // str r2, [sp, #4]
    // str r1, [sp]
    // add r3, sp, #0x34
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // add r1, r2, r1
    // add r1, #0x2c
    ov93_0225E3C4(r0, *((u8*)r1), *((u32*)r0));
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // add r1, r2, r1
    _s32_div_f((0x24 * *((u32*)(r0 + 0x18))), *((u32*)(r0 + 0x18)));
    // ldr r1, [sp, #0xc]
    // add r1, sp, #0x24
    // str r0, [r1, r2]
    // add r0, #0x30
    // add r0, r0, r3
    // str r0, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r2, sp, #0x34
    // add r5, r0, r1
    SpriteSystem_NewSprite(*((u32*)(r7 + 0x24)), *((u32*)(r7 + 0x28)), (r1 << 2), (*((u8*)*((u32*)r7)) << 3));
    ManagedSprite_SetPositionXYWithSubscreenOffset(0x80, 0x60, (0x16 << 0x10));
    // ldr r1, [sp, #0x10]
    ManagedSprite_SetAnim(r6);
    Sprite_TickFrame(*((u32*)r6));
    LCRandom();
    // sub r2, r2, r1
    // ror r2, r0
    // add r1, r1, r2
    // add r0, r1, r0
    *((u32*)(r5 + 4)) = (2 << 0xc);
    LCRandom((2 << 0xc), (r0 >> 0x1f), (r0 << 0x13));
    // sub r2, r2, r1
    // ror r2, r0
    // add r1, r1, r2
    // add r0, r1, r0
    *((u32*)(r5 + 8)) = (2 << 0xc);
    LCRandom((2 << 0xc), (r0 >> 0x1f), (r0 << 0x12));
    _s32_div_f((0x5a << 2));
    *((u32*)(r5 + 0xc)) = (r1 << 0xc);
    LCRandom((r1 << 0xc));
    _s32_div_f((5 << 0xe));
    // add r0, r1, r0
    *((u32*)(r5 + 0x10)) = (0xa << 0xc);
    LCRandom((0xa << 0xc));
    _s32_div_f(0xf);
    // add r1, #0x14
    *((u16*)(r5 + 0x14)) = r1;
    // ldr r0, [sp]
    // add r0, r0, r1
    *((u32*)(0x18 + 4)) = r6;
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x20]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // add r0, #0x30
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x40]
    // ldr r0, [sp]
    // add r6, r0, r1
    // ldr r1, [sp, #0xc]
    // add r4, r6, r0
    // add r2, sp, #0x34
    SpriteSystem_NewSprite(*((u32*)(r7 + 0x24)), *((u32*)(r7 + 0x28)));
    ManagedSprite_SetPositionXYWithSubscreenOffset(0x80, 0x60, (0x16 << 0x10));
    LCRandom();
    _s32_div_f(3);
    // add r1, #0x1c
    ManagedSprite_SetAnim(r5);
    Sprite_TickFrame(*((u32*)r5));
    LCRandom();
    // sub r2, r2, r1
    // ror r2, r0
    // add r1, r1, r2
    // add r0, r1, r0
    *((u32*)(r4 + 4)) = (2 << 0xc);
    LCRandom((2 << 0xc), (r0 >> 0x1f), (r0 << 0x13));
    // sub r2, r2, r1
    // ror r2, r0
    // add r1, r1, r2
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = (2 << 0xc);
    LCRandom((2 << 0xc), (r0 >> 0x1f), (r0 << 0x12));
    _s32_div_f((0x5a << 2));
    *((u32*)(r4 + 0xc)) = (r1 << 0xc);
    LCRandom((r1 << 0xc));
    _s32_div_f((5 << 0xe));
    // add r0, r1, r0
    *((u32*)(r4 + 0x10)) = (1 << 0x10);
    LCRandom((1 << 0x10));
    _s32_div_f(0xf);
    // add r1, #0x14
    *((u16*)(r4 + 0x14)) = r1;
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp]
    // add r1, r0, r2
    // str r5, [r1, r0]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #4]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r6, r0, r1
    // ldr r1, [sp, #0xc]
    // add r4, r6, r0
    // add r2, sp, #0x34
    SpriteSystem_NewSprite(*((u32*)(r7 + 0x24)), *((u32*)(r7 + 0x28)), (r1 * 0x18));
    ManagedSprite_SetPositionXYWithSubscreenOffset(0x80, 0x60, (0x16 << 0x10));
    ManagedSprite_SetAnim(r5, 0xb);
    Sprite_TickFrame(*((u32*)r5));
    LCRandom();
    // sub r2, r2, r1
    // ror r2, r0
    // add r1, r1, r2
    // add r0, r1, r0
    *((u32*)(r4 + 4)) = (2 << 0xc);
    LCRandom((2 << 0xc), (r0 >> 0x1f), (r0 << 0x13));
    // sub r2, r2, r1
    // ror r2, r0
    // add r1, r1, r2
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = (2 << 0xc);
    LCRandom((2 << 0xc), (r0 >> 0x1f), (r0 << 0x12));
    _s32_div_f((0x5a << 2));
    *((u32*)(r4 + 0xc)) = (r1 << 0xc);
    LCRandom((r1 << 0xc));
    _s32_div_f((5 << 0xe));
    // add r0, r1, r0
    *((u32*)(r4 + 0x10)) = (1 << 0x10);
    LCRandom((1 << 0x10));
    _s32_div_f(0xf);
    // add r1, #0x14
    *((u16*)(r4 + 0x14)) = r1;
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp]
    // add r1, r0, r2
    // str r5, [r1, r0]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
}




void ov93_02260608(void) {
    // add r5, r6, r0
    Sprite_DeleteAndFreeResources(*((u32*)r5));
    // add r5, #0x18
    // add r4, r6, r0
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 1)));
    // add r4, #0x18
    // add r5, r6, r0
    Sprite_DeleteAndFreeResources(*((u32*)(r5 + 1)));
    // add r5, #0x18
}




void ov93_02260660(void) {
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // str r4, [sp, #0x14]
    // ldrsh r1, [r5, r1]
    Sprite_DeleteAndFreeResources(*((u32*)(0 + 4)), 0x14);
    // str r0, [r5]
    // add r0, r1, r0
    *((u32*)(r5 + 0xc)) = *((u32*)(r5 + 0x10));
    // add r1, r1, r0
    *((u32*)(r5 + 4)) = *((u32*)(r5 + 4));
    *((u32*)(r5 + 4)) = (0xa << 0x10);
    GF_SinDegFX32(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 4)));
    // str r0, [sp, #0x10]
    GF_CosDegFX32(*((u32*)(r5 + 0xc)));
    // str r0, [sp, #0x1c]
    // asr r1, r7, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r7, r6);
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul();
    // ldr r1, [sp, #0x28]
    // add r3, r1, r3
    // adc r6, r1
    // asr r1, r3, #0xb
    // add r1, r3, r1
    // asr r1, r1, #0xc
    // add r1, #0x80
    // asr r1, r1, #0x10
    // add r3, r7, r3
    // adc r2, r6
    // neg r3, r3
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // add r2, #0x60
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r5), (((r6 << 0x14) >> 0x14) << 0x10), (((r1 << 0x14) >> 0x14) << 0x10), (0x16 << 0x10));
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 0x14)) = (0x14 - 1);
    // ldr r0, [sp, #0x14]
    // add r5, #0x18
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // add r5, r0, r1
    // ldrsh r1, [r5, r1]
    Sprite_DeleteAndFreeResources(*((u32*)r5), 0x14);
    // str r0, [r5]
    // add r0, r1, r0
    *((u32*)(r5 + 0xc)) = *((u32*)(r5 + 0x10));
    // add r1, r1, r0
    *((u32*)(r5 + 4)) = *((u32*)(r5 + 4));
    *((u32*)(r5 + 4)) = (0xa << 0x10);
    GF_SinDegFX32(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 4)));
    // str r0, [sp, #0xc]
    GF_CosDegFX32(*((u32*)(r5 + 0xc)));
    // str r0, [sp, #0x20]
    // asr r1, r7, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r7, r6);
    // str r0, [sp, #0x2c]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul();
    // ldr r1, [sp, #0x2c]
    // add r3, r1, r3
    // adc r6, r1
    // asr r1, r3, #0xb
    // add r1, r3, r1
    // asr r1, r1, #0xc
    // add r1, #0x80
    // asr r1, r1, #0x10
    // add r3, r7, r3
    // adc r2, r6
    // neg r3, r3
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // add r2, #0x60
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r5), (((r6 << 0x14) >> 0x14) << 0x10), (((r1 << 0x14) >> 0x14) << 0x10), (0x16 << 0x10));
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 0x14)) = (0x14 - 1);
    // ldr r0, [sp]
    // add r5, #0x18
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // add r5, r0, r1
    // ldrsh r1, [r5, r1]
    Sprite_DeleteAndFreeResources(*((u32*)r5), 0x14);
    // str r0, [r5]
    // add r0, r1, r0
    *((u32*)(r5 + 0xc)) = *((u32*)(r5 + 0x10));
    // add r1, r1, r0
    *((u32*)(r5 + 4)) = *((u32*)(r5 + 4));
    *((u32*)(r5 + 4)) = (0xa << 0x10);
    GF_SinDegFX32(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 4)));
    // str r0, [sp, #8]
    GF_CosDegFX32(*((u32*)(r5 + 0xc)));
    // str r0, [sp, #0x24]
    // asr r1, r7, #0x1f
    // asr r3, r6, #0x1f
    _ll_mul(r7, r6);
    // str r0, [sp, #0x30]
    // ldr r2, [sp, #8]
    // ldr r0, [sp, #0x24]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul();
    // ldr r1, [sp, #0x30]
    // add r3, r1, r3
    // adc r6, r1
    // asr r1, r3, #0xb
    // add r1, r3, r1
    // asr r1, r1, #0xc
    // add r1, #0x80
    // asr r1, r1, #0x10
    // add r3, r7, r3
    // adc r2, r6
    // neg r3, r3
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r2, r2, #0xc
    // add r2, #0x60
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r5), (((r6 << 0x14) >> 0x14) << 0x10), (((r1 << 0x14) >> 0x14) << 0x10), (0x16 << 0x10));
    // ldrsh r0, [r5, r0]
    *((u16*)(r5 + 0x14)) = (0x14 - 1);
    // ldr r0, [sp, #4]
    // add r5, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r1, [r0]
}




void ov93_02260908(void) {
    // add r4, r5, r0
    MI_CpuFill8(r4, 0, (0x47 << 4));
    // add r1, r5, r1
    // add r2, r5, r2
    ov93_02260314(r5, 0x0000339C, 0x00001428);
    // add r1, r5, r1
    ov93_0225FC8C(*((u32*)(r5 + 0x2c)), 0x00001428);
    ov93_02260B84(r5);
    // str r2, [r5, r0]
    // str r2, [r5, r0]
    // add r0, #8
    // str r2, [r5, r0]
    // str r1, [r5, r0]
    PlaySE(0x00000594, 0, (0 + 1));
    // str r0, [r4]
}




void ov93_02260984(void) {
    // add r5, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // add r2, sp, #0
    // str r0, [r5]
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x28)), (6 - 1), r0);
    // sub r1, r1, r2
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset((0x48 << 0x10), 0x20, (0x16 << 0x10));
    ManagedSprite_SetAnim(r5, r7);
    Sprite_TickFrame(*((u32*)r5));
    ManagedSprite_SetAnimateFlag(r5, 1);
}




void ov93_022609E0(void) {
    // add r5, r7, r0
    ov93_02260A58(r0, r5, 0, 0);
    ManagedSprite_TickNFrames(*((u32*)r5), r6);
    // add r5, #0xc
    // add r6, r6, r0
}




void ov93_02260A14(void) {
}




void ov93_02260A30(void) {
    // add r5, r6, r0
    ov93_02260A8C(r5);
    ov93_02260AD8(r6, r5);
    // add r5, #0xc
}




u32 ov93_02260A58(void) {
}




void ov93_02260A8C(void) {
    // add r2, sp, #0
    // sub r0, r0, r1
    // asr r4, r0, #0x10
    // add r1, sp, #0
    // add r1, #2
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r1, r0]
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
}




void ov93_02260AD8(void) {
    ManagedSprite_IsAnimated(*((u32*)r1), *((u8*)(r1 + 5)));
    // ldrsh r1, [r4, r0]
    *((u16*)(r4 + 8)) = (r1 + 5);
    // ldrsh r0, [r4, r0]
    ov93_02260B70(8, (r1 + 5));
    *((u8*)(r4 + 4)) = r0;
    *((u8*)(r4 + 5)) = 1;
    ManagedSprite_SetAnim(*((u32*)r4), *((u8*)(r4 + 4)));
    // mvn r1, r1
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r4), 7, 0x20, (0x16 << 0x10));
    // add r3, r5, r0
    *((u8*)(r3 + 6)) = 4;
    *((u8*)(r3 + 6)) = (*((u8*)(r3 + 6)) - 1);
    // add r3, #0xc
    ov93_0225FEAC((*((u8*)(r3 + 6)) - 1), 4, (0 + 1));
    *((u8*)(r4 + 5)) = 2;
    ManagedSprite_SetAnim(*((u32*)r4), (*((u8*)(r4 + 4)) + 3));
    PlaySE(0x00000596);
}




void ov93_02260B70(void) {
    // cmp r0, #0xa
    // blt _02260B78
    // cmp r0, #5
    // blt _02260B80
}




void ov93_02260B84(void) {
    // add r1, r0, r1
    *((u8*)(0x0000380C + 5)) = 3;
    ManagedSprite_SetAnim(*((u32*)0x0000380C), 6, 0);
    // add r1, #0xc
}




void ov93_02260BB0(void) {
    // add r0, #0x30
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
}




void ov93_02260BF0(void) {
    // str r0, [sp, #0xc]
    // add r0, #0x30
    // str r0, [sp, #4]
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r5, [sp]
    // add r0, #0x8c
    // add r3, r7, r4
    PaletteData_GetBufferColorAtIndex(*((u32*)r0), 1, 1, ((r3 << 0x10) >> 0x10));
    // strh r0, [r5]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // add r0, #0x30
    // ldr r0, [sp, #0xc]
    sub_0203769C(*((u32*)r6), *((u8*)*((u32*)r6)));
    // add r1, #0x30
    // add r1, #0x2c
    // add r0, #0x8c
    PaletteData_GetUnfadedBuf(*((u32*)r6), 1, (0 + 1), (*((u32*)r6) + 1));
    // str r0, [sp, #8]
    // add r0, #0x8c
    PaletteData_GetFadedBuf(*((u32*)r6), 1);
    // add r0, #0x30
    // add r1, r1, r4
    // add r1, #0x2c
    ov93_0225E3C4(r6, *((u8*)*((u32*)r6)));
    // add r0, r0, r2
    // add r1, sp, #0x10
    // add r1, r1, r3
    // ldr r2, [sp, #8]
    // add r2, r2, r3
    // add r3, r7, r3
    // strh r5, [r2]
    // strh r5, [r3]
    // add r0, #0x30
}




void ov93_02260CF8(void) {
    SpriteManager_FindPlttResourceOffset(*((u32*)(r0 + 0x28)), 0x00002716, 2);
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x18]
    // add r0, #0x30
    // str r0, [sp, #8]
    // add r0, sp, #0x1c
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r5, [sp, #4]
    // ldr r0, [sp]
    // add r4, r1, r0
    // add r0, #0x8c
    PaletteData_GetBufferColorAtIndex(*((u32*)r7), 3, 1, ((r4 << 0x10) >> 0x10));
    // strh r0, [r5]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0x20
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // add r0, #0x30
    // ldr r0, [sp, #0x18]
    sub_0203769C(*((u32*)r7), *((u8*)*((u32*)r7)));
    // add r1, #0x30
    // add r1, #0x2c
    // add r0, #0x8c
    PaletteData_GetUnfadedBuf(*((u32*)r7), 3, (0 + 1), (*((u32*)r7) + 1));
    // str r0, [sp, #0x14]
    // add r0, #0x8c
    PaletteData_GetFadedBuf(*((u32*)r7), 3);
    // str r0, [sp, #0x10]
    // add r0, #0x30
    // ldr r0, [sp, #0xc]
    // add r1, r1, r4
    // add r1, #0x2c
    ov93_0225E3C4(r7, *((u8*)*((u32*)r7)));
    // add r0, r0, r2
    // add r1, sp, #0x1c
    // add r2, r6, r0
    // add r1, r1, r3
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // add r2, r2, r5
    // add r3, r3, r5
    // strh r5, [r2]
    // strh r5, [r3]
    // add r0, #0x30
}




void ov93_02260E1C(void) {
    SpriteManager_FindPlttResourceOffset(*((u32*)(r0 + 0x28)), 0x00002716, 2);
    // str r0, [sp, #4]
    // str r0, [sp, #0x10]
    // add r0, #0x30
    // ldr r0, [sp, #4]
    // add r4, sp, #0x14
    // str r0, [sp]
    // ldr r3, [sp]
    // add r0, #0x8c
    // add r3, r6, r3
    PaletteData_GetBufferColorAtIndex(*((u32*)r5), 3, 1, ((r3 << 0x10) >> 0x10));
    // strh r0, [r4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // add r0, #0x30
    // ldr r0, [sp, #0x10]
    sub_0203769C(*((u32*)r5), *((u8*)*((u32*)r5)));
    // add r1, #0x30
    // add r1, #0x2c
    // add r0, #0x8c
    PaletteData_GetUnfadedBuf(*((u32*)r5), 3, (0 + 1), (*((u32*)r5) + 1));
    // str r0, [sp, #0xc]
    // add r0, #0x8c
    PaletteData_GetFadedBuf(*((u32*)r5), 3);
    // str r0, [sp, #8]
    // add r0, #0x30
    // ldr r0, [sp, #4]
    // add r1, r1, r4
    // add r1, #0x2c
    ov93_0225E3C4(r5, *((u8*)*((u32*)r5)));
    // add r0, r0, r2
    // add r2, sp, #0x14
    // add r0, r7, r0
    // ldr r2, [sp, #0xc]
    // strh r3, [r2, r0]
    // add r2, sp, #0x14
    // ldr r1, [sp, #8]
    // strh r2, [r1, r0]
    // add r0, #0x30
}




void ov93_02260F14(void) {
}




void ov93_02260F3C(void) {
    // sub r0, r1, r0
    // sub r1, r1, r5
    // ror r1, r0
    // add r0, r5, r1
    // add r1, r4, r0
    // sub r0, #0x84
    // add r5, r1, r0
    // ldmia r3!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r4, r2]
}




void ov93_02260F84(void) {
    // str r2, [r0, r1]
    // sub r1, #0x80
    // add r3, r0, r1
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r3, r0
}




void ov93_02260FB8(void) {
    // sub r1, r1, r3
    // ror r1, r0
    // add r1, r3, r1
    // sub r5, r5, r3
    // ror r5, r0
    // add r0, r3, r5
    // add r6, r2, r3
    // add r2, r2, r0
    // add r4, r2, r0
    // add r6, #0x10
    // add r6, r2, r3
    // add r3, r2, r3
    // add r4, r3, r1
    // add r6, #0x10
    // add r1, r2, r0
    // add r4, r1, r0
    // add r5, #0x10
    GF_AssertFail((0 << 4), 0x00002F38, r0, *((u8*)(r0 + 0x00002F38)));
    GF_AssertFail(*((u8*)(r4 + 1)));
    *((u8*)(r4 + 1)) = r7;
    *((u8*)(r4 + 0xc)) = 1;
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 4)) << 1);
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 4)) >> 0x1f);
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 4)) << 1);
}




void ov93_022610B0(void) {
    // str r1, [sp]
    // add r3, sp, #4
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r4, [sp]
    // str r0, [r3]
    // add r2, sp, #4
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x28)), (6 - 1));
    // str r0, [r4]
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(0, 2, (0x16 << 0x10));
    // add r1, r6, r1
    // asr r1, r1, #1
    // add r1, #0x1f
    ManagedSprite_SetAnim(*((u32*)r4), (r6 >> 0x1f));
    Sprite_TickFrame(*((u32*)*((u32*)r4)));
    // add r0, #0x30
    // ldr r0, [sp]
    ManagedSprite_SetDrawFlag(*((u32*)(*((u8*)*((u32*)r7)) + 8)), 0);
    // ldr r0, [sp]
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 0xc)), 0);
    // ldr r0, [sp]
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 4)), 0);
}




void ov93_0226114C(void) {
}




void ov93_02261164(void) {
    // str r1, [sp]
    // add r3, sp, #0xc
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r4, [sp]
    // str r0, [r3]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r0, #0xe4
    // add r0, r1, r0
    GF_SinDegFX32(*((u32*)(ov93_02262E9C + 0xc)), *((u32*)0), (6 - 1));
    // asr r1, r0, #0x1f
    _ll_mul(0x4c, 0);
    // add r2, r0, r2
    // adc r1, r0
    // ldr r0, [sp]
    // add r6, #0x80
    // add r0, #0xe4
    // add r0, r1, r0
    GF_CosDegFX32(*((u32*)(r4 + 0xc)), *((u32*)(r1 << 0x14)), (2 << 0xa));
    // asr r1, r0, #0x1f
    _ll_mul(0x44, 0);
    // add r0, r0, r2
    // adc r1, r2
    // sub r0, r0, r2
    // str r0, [sp, #4]
    // add r2, sp, #0xc
    SpriteSystem_NewSprite(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), ((r0 >> 0xc) | (r1 << 0x14)));
    // ldr r2, [sp, #4]
    // sub r2, #0x18
    // str r0, [r4]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset((r6 << 0x10), (r2 << 0x10), (0x16 << 0x10));
    ManagedSprite_SetAnim(*((u32*)r4), *((u16*)(r7 + 2)));
    Sprite_TickFrame(*((u32*)*((u32*)r4)));
    ManagedSprite_SetDrawFlag(*((u32*)r4), 0);
    SpriteSystem_NewSprite(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), ov93_02262ED0);
    *((u32*)(r4 + 4)) = r0;
    ManagedSprite_SetPositionXYWithSubscreenOffset(0, 0, (0x16 << 0x10));
    ManagedSprite_SetAnim(*((u32*)(r4 + 4)), 0x21);
    Sprite_TickFrame(*((u32*)*((u32*)(r4 + 4))));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 0);
    SpriteSystem_NewSprite(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), ov93_02262F04);
    // ldr r2, [sp, #4]
    *((u32*)(r4 + 8)) = r0;
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset((r6 << 0x10), (r2 << 0x10), (0x16 << 0x10));
    ManagedSprite_SetOamMode(*((u32*)(r4 + 8)), 1);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 8)), 1);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 8)), (0xfe << 0x16), (0xfe << 0x16));
    // ldr r1, [sp, #8]
    // add r1, #0x22
    ManagedSprite_SetAnim(*((u32*)(r4 + 8)));
    Sprite_TickFrame(*((u32*)*((u32*)(r4 + 8))));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 8)), 0);
    // add r1, #0x30
    ov93_02262444(r5, r4);
    // ldr r0, [sp, #8]
    // add r4, #0x4c
    // str r0, [sp, #8]
    // ldr r0, [sp]
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 1)), 1);
    // ldr r0, [sp]
    ManagedSprite_SetDrawFlag(*((u32*)(r0 + 8)), 1);
}




void ov93_022612E0(void) {
    // add r1, #0x30
    // add r5, #0x4c
}




void ov93_02261310(void) {
    // add r1, #0xf4
    _s32_div_f((0x1e << 0xc), *((u8*)(ov93_02262CC4 + (*((u8*)r1) << 2))), (*((u8*)r1) << 2));
    // add r1, #0xe8
    // str r0, [r1]
    *((u32*)(r4 + 0xc)) = (0 << 0xc);
    *((u8*)(r4 + 0x14)) = (0 + 1);
    // add r2, #0x5a
    // add r3, #0x4c
    *((u8*)(r4 + 0x10)) = 2;
    // add r4, #0xf1
    // strb r0, [r4]
}




void ov93_02261354(void) {
    // add r0, #0xf1
    // add r0, #0xec
    // add r0, #0xec
    // str r1, [r0]
    // add r0, #0xf2
    // add r0, #0xe4
    // add r0, #0xe8
    // add r1, r1, r0
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, #0xf3
    // add r0, #0xf3
    // strb r1, [r0]
    // add r1, #0xf4
    // add r0, #0xf3
    // add r0, #0xf3
    // strb r5, [r0]
    // add r0, #0xf0
    // add r0, #0xf0
    // strb r1, [r0]
    // add r0, #0xf0
    // add r0, #0xe4
    // str r2, [r0]
    // add r0, #0xf4
    // add r0, #0xf2
    // strb r1, [r0]
    // add r0, #0xf2
    // add r0, #0xf2
    // strb r1, [r0]
    // add r0, #0xf2
    // add r0, #0xf0
    // add r0, #0xf0
    // strb r5, [r0]
    // add r0, #0xf4
    // add r0, #0xf4
    // strb r1, [r0]
    // add r0, #0xf4
    // add r0, #0xf4
    // strb r1, [r0]
    // add r1, #0xf4
    _s32_div_f((0x1e << 0xc), *((u8*)(ov93_02262CC4 + (*((u8*)r1) << 2))), (*((u8*)r1) << 2));
    // add r1, #0xe8
    // str r0, [r1]
    // add r0, #0xf4
    // add r2, r3, r2
    // add r5, r5, r3
    // add r0, #0xec
    // sub r5, #0xf
    // add r0, #0x4c
    ov93_02261528(r4, 1, *((u8*)(ov93_02262CC4 + 1)), (*((u8*)(ov93_02262CC4 + 1)) * 0xc));
    // add r2, r3, r2
    // add r5, r5, r3
    // add r0, #0xec
    // sub r5, #0xf
    // add r0, #0x98
    ov93_02261528(r4, 1, *((u8*)(ov93_02262CC4 + 1)), (*((u8*)(ov93_02262CC4 + 1)) * 0xc));
    ov93_02261538(r6, r4, r4);
    // add r2, #0x30
    ov93_02262540(r6, r5, r5);
    // add r5, #0x4c
}




void ov93_022614F4(void) {
    // add r2, r0, r2
    // add r0, r2, r0
    // str r0, [r1]
    // add r4, #0x4c
    // str r0, [r1]
}




void ov93_02261528(void) {
}




void ov93_02261538(void) {
    // blx r3
}




void ov93_0226154C(void) {
}




void ov93_02261554(void) {
    // ldrsh r0, [r5, r0]
    // add r1, sp, #0
    *((u16*)(r1 + 2)) = 0x1c;
    // ldrsh r0, [r5, r0]
    // strh r0, [r1]
    ManagedSprite_SetDrawFlag(*((u32*)r2), 1);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 8)), 1);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)r5), (0x16 << 0x10));
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    *((u16*)(r5 + 0x1c)) = 2;
    // ldrsh r0, [r1, r0]
    *((u16*)(r5 + 0x1e)) = 0;
    *((u8*)(r5 + 0x11)) = (*((u8*)(r5 + 0x11)) + 1);
    // ldrsh r0, [r5, r0]
    // add r0, #0x20
    // asr r0, r0, #0x10
    _s32_div_f(((0x1e << 0x10) * *((u8*)(r5 + 0x12))), 0xf, *((u32*)(r5 + 0xc)));
    // asr r1, r0, #0x10
    // sub r1, #0x20
    // add r0, sp, #0
    // strh r1, [r0]
    // ldrsh r2, [r5, r0]
    // sub r0, r2, r0
    // asr r0, r0, #0x10
    _s32_div_f((((0x12 << 4) << 0x10) * *((u8*)(r5 + 0x12))), 0xf);
    // asr r1, r0, #0x10
    // add r1, r1, r0
    // add r0, sp, #0
    *((u16*)((0x12 << 4) + 2)) = r1;
    // ldrsh r0, [r5, r0]
    // sub r0, #0xe4
    // asr r0, r0, #0x10
    _s32_div_f(((0x1e << 0x10) * *((u8*)(r5 + 0x12))), 0xf);
    // asr r1, r0, #0x10
    // add r1, #0xe4
    // add r0, sp, #0
    // strh r1, [r0]
    // ldrsh r0, [r5, r0]
    // add r0, #0x20
    // asr r0, r0, #0x10
    _s32_div_f(((0x1c << 0x10) * *((u8*)(r5 + 0x12))), 0xf);
    // asr r1, r0, #0x10
    // sub r1, #0x20
    // add r0, sp, #0
    *((u16*)((r0 << 0x10) + 2)) = r1;
    GF_AssertFail((r0 << 0x10));
    // ldrsh r1, [r5, r1]
    // ldrsh r2, [r5, r2]
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r5), 0x1c, 0x1e, (0x16 << 0x10));
    // ldrsh r2, [r5, r2]
    // add r2, #0x18
    // ldrsh r1, [r5, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r5 + 8)), 0x1c, (0x1e << 0x10), (0x16 << 0x10));
    ov93_02261528(r5, 2);
    // add r5, #0x30
    ov93_0226249C(r4, r5, r5);
    _s32_div_f(((0xb4 * r1) << 0xc), 0xf);
    GF_SinDegFX32();
    // asr r1, r0, #0x1f
    _ll_mul((6 << 0xe), 0);
    // add r3, r0, r3
    // adc r1, r2
    // neg r1, r1
    // asr r0, r1, #0xb
    // add r3, sp, #0
    // add r0, r1, r0
    // asr r4, r0, #0xc
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, r2, r4
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r5), 2, (0 << 0x10), (0x16 << 0x10));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, #0x18
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r5 + 8)), 2, (0 << 0x10), (0x16 << 0x10));
    // neg r0, r4
    _s32_div_f(3);
    _s32_div_f((r0 << 0xc), 0x18);
    // sub r0, r1, r0
    _fflt((1 << 0xc));
    _fdiv(0x45800000);
    ManagedSprite_SetAffineScale(*((u32*)(r5 + 8)), r0, r0);
    *((u8*)(r5 + 0x12)) = (*((u8*)(r5 + 0x12)) + 1);
}




void ov93_02261744(void) {
    // str r0, [sp]
    // add r0, #0xf3
    // add r1, #0xf4
    _s32_div_f((0xb << 0xe), *((u8*)(ov93_02262CC4 + (*((u8*)r1) << 2))), (*((u8*)r1) << 2));
    ManagedSprite_TickNFrames(*((u32*)r4), r0);
    ManagedSprite_SetAnimationFrame(*((u32*)r4), 0);
    // add r0, #0xf3
    // add r1, #0xf4
    _s32_div_f(((0xb4 * *((u8*)r5)) << 0xc), *((u8*)(ov93_02262CC4 + (*((u8*)r5) << 2))), (*((u8*)r5) << 2));
    GF_SinDegFX32();
    // asr r1, r0, #0x1f
    _ll_mul((3 << 0xe), 0);
    // add r2, r0, r2
    // adc r1, r3
    // neg r1, r1
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r7, r0, #0xc
    // add r0, #0xe4
    // add r0, r1, r0
    GF_SinDegFX32(*((u32*)(r4 + 0xc)), *((u32*)r5), (2 << 0xa), 0);
    // asr r1, r0, #0x1f
    _ll_mul(0x4c, 0);
    // add r2, r0, r2
    // adc r1, r3
    // add r0, #0xe4
    // add r6, #0x80
    // add r0, r1, r0
    GF_CosDegFX32(*((u32*)(r4 + 0xc)), *((u32*)r5), (2 << 0xa), 0);
    // asr r1, r0, #0x1f
    _ll_mul(0x44, 0);
    // add r0, r2, r0
    // adc r1, r3
    // sub r0, r0, r2
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // sub r2, #0x18
    // add r2, r2, r7
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r4), (r6 << 0x10), ((((2 << 0xa) >> 0xc) | (r1 << 0x14)) << 0x10), (0x16 << 0x10));
    // ldr r2, [sp, #4]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 8)), (r6 << 0x10), (r2 << 0x10), (0x16 << 0x10));
    // neg r0, r7
    _s32_div_f(3);
    _s32_div_f((r0 << 0xc), 0xc);
    // sub r0, r1, r0
    _fflt((1 << 0xc));
    _fdiv(0x45800000);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 8)), r0, r0);
    // add r1, #0xf4
    // add r0, #0xf3
    // ldr r0, [sp]
    // add r2, #0x30
    ov93_0226249C(*((u8*)r5), r4, r4);
    // add r5, #0xe4
    // add r0, r1, r0
    // asr r0, r0, #0xc
    _s32_div_f(*((u32*)(r4 + 0xc)), (0x5a << 2));
    *((u8*)(r4 + 0x15)) = 0;
}




void ov93_022618C4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022618E0: ; jump table
    PlaySE(0x00000593);
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)r4), (0x16 << 0x10));
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // sub r2, #0x20
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 4)), 6, (4 << 0x10), (0x16 << 0x10));
    ManagedSprite_SetAnim(*((u32*)(r4 + 4)), 0x21);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 1);
    ManagedSprite_SetAnim(*((u32*)r4), (*((u16*)(ov93_02262C7A + (*((u8*)(r4 + 0x14)) << 1))) + 2), (*((u8*)(r4 + 0x14)) << 1));
    // add r0, #0xf4
    // add r5, #0xf4
    *((u8*)(r4 + 0x12)) = *((u8*)(ov93_02262CC6 + (*((u8*)r5) << 2)));
    *((u8*)(r4 + 0x13)) = (*((u8*)(ov93_02262CC6 + (*((u8*)r5) << 2))) >> 1);
    *((u8*)(r4 + 0x11)) = (*((u8*)(r4 + 0x11)) + 1);
    ManagedSprite_SetAnim(*((u32*)r4), (*((u16*)(ov93_02262C7A + (*((u8*)(r4 + 0x14)) << 1))) + 1), (*((u8*)(r4 + 0x14)) << 1));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 0);
    ManagedSprite_TickNFrames(*((u32*)(r4 + 4)), (1 << 0xe));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 0);
    ManagedSprite_SetAnim(*((u32*)r4), *((u16*)(ov93_02262C7A + (*((u8*)(r4 + 0x14)) << 1))), (*((u8*)(r4 + 0x14)) << 1));
    *((u8*)(r4 + 0x11)) = (*((u8*)(r4 + 0x11)) + 1);
    *((u8*)(r4 + 0x12)) = ((*((u8*)(r4 + 0x11)) + 1) - 1);
    // add r0, #0xf2
    // add r0, #0xf4
    // add r3, #0xf3
    // add r5, #0xf0
    // sub r3, r0, r3
    // add r3, r2, r3
    // add r1, r3, r1
    // add r6, r1, r0
    // add r1, r2, r0
    // add r0, #0xf0
    // add r5, #0xf4
    // add r6, r1, r0
    // add r5, #0xf4
    // add r6, r1, r2
    _s32_div_f(*((u32*)(r4 + 0xc)), (0x1e << 0xc), *((u8*)(ov93_02262CC4 + (*((u8*)1) << 2))), (*((u8*)1) << 2));
    // add r0, r5, r0
    _s32_div_f(0xc);
    GF_SinDegFX32((r1 * (0x1e << 0xc)));
    GF_CosDegFX32(r7);
    // str r0, [sp]
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)r4), (0x16 << 0x10));
    // add r1, sp, #4
    // ldrsh r0, [r1, r3]
    // add r0, #0x18
    // strh r0, [r1]
    // ldrsh r7, [r1, r0]
    // asr r1, r5, #0x1f
    _ll_mul(r5, 0x4c, 0);
    // add r2, r0, r2
    // adc r1, r3
    // add r1, #0x80
    // asr r0, r0, #0x10
    // sub r0, r0, r7
    _s32_div_f((((((2 << 0xa) >> 0xc) | (r1 << 0x14)) << 0x10) << 0xc), r6, (2 << 0xa), 0);
    *((u32*)(r4 + 0x20)) = r0;
    // add r0, sp, #4
    // ldrsh r5, [r0, r3]
    // ldr r0, [sp]
    // asr r1, r0, #0x1f
    _ll_mul(0x44, 0);
    // add r0, r2, r0
    // adc r1, r3
    // sub r0, r0, r2
    // asr r0, r0, #0x10
    // sub r0, r0, r5
    _s32_div_f(((0x62 << 0x10) << 0xc), r6, (((2 << 0xa) >> 0xc) | (r1 << 0x14)), 0);
    *((u32*)(r4 + 0x24)) = r0;
    *((u32*)(r4 + 0x28)) = (r7 << 0xc);
    *((u32*)(r4 + 0x2c)) = (r5 << 0xc);
    *((u8*)(r4 + 0x12)) = r6;
    *((u32*)(r4 + 0x18)) = r6;
    *((u8*)(r4 + 0x11)) = (*((u8*)(r4 + 0x11)) + 1);
    // add r0, r1, r0
    *((u32*)(r4 + 0x28)) = *((u32*)(r4 + 0x20));
    // add r0, r1, r0
    *((u32*)(r4 + 0x2c)) = *((u32*)(r4 + 0x24));
    _s32_div_f(((0xb4 * *((u8*)(r4 + 0x12))) << 0xc), *((u32*)(r4 + 0x18)));
    GF_SinDegFX32();
    // asr r1, r0, #0x1f
    _ll_mul((3 << 0xe), 0);
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r3, r2, #0xb
    // add r3, r2, r3
    // asr r3, r3, #0xc
    // asr r1, r1, #0x10
    // sub r3, #0x18
    // add r2, r5, r2
    // adc r6, r7
    // neg r5, r2
    // asr r2, r5, #0xb
    // add r2, r5, r2
    // asr r2, r2, #0xc
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r4), ((r1 >> 0x14) << 4), (((((2 << 0xa) >> 0xc) | (r1 << 0x14)) >> 0x14) << 0x10), (0x16 << 0x10));
    _s32_div_f((0xb << 0xe), *((u32*)(r4 + 0x18)));
    ManagedSprite_TickNFrames(*((u32*)r4), r0);
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 8)), ((r1 >> 0x14) << 4), ((*((u32*)(r4 + 0x28)) >> 0x14) << 4), (0x16 << 0x10));
    *((u8*)(r4 + 0x12)) = (*((u8*)(r4 + 0x12)) - 1);
    ManagedSprite_SetAnim(*((u32*)r4), *((u16*)(ov93_02262C7A + (*((u8*)(r4 + 0x14)) << 1))), (*((u8*)(r4 + 0x14)) << 1));
    ManagedSprite_SetAnimationFrame(*((u32*)r4), r7);
    ov93_02261528(r4, 2);
}




void ov93_02261BBC(void) {
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x28)), (6 - 1));
    // str r0, [r4]
    ManagedSprite_SetPositionXYWithSubscreenOffset(0, 0, r7);
    ManagedSprite_SetDrawFlag(*((u32*)r4), 0);
    SpriteSystem_NewSprite(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), ov93_02262ED0);
    *((u32*)(r4 + 4)) = r0;
    ManagedSprite_SetPositionXYWithSubscreenOffset(0, 0, r7);
    ManagedSprite_SetAnim(*((u32*)(r4 + 4)), 0x21);
    Sprite_TickFrame(*((u32*)*((u32*)(r4 + 4))));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 0);
    // add r4, #0x18
}




void ov93_02261C3C(void) {
    // add r5, #0x18
}




void ov93_02261C58(void) {
    // str r3, [sp]
    sub_0203769C();
    // ldr r1, [sp]
    // add r4, r7, r1
    // add r2, #0x18
    // ldr r1, [sp]
    ov93_0225E3C4(r6, (0x18 * r4), r7);
    // add r1, #0x30
    // add r2, r2, r3
    ManagedSprite_SetPaletteOverride(*((u32*)r4), *((u16*)((r0 << 1) + ov93_02262D2C)), ov93_02262D2C, (*((u8*)*((u32*)r6)) << 3));
    ManagedSprite_SetAnim(*((u32*)r4), *((u16*)(ov93_02262C7A + (r5 << 1))), (r5 << 1));
    // add r0, #0x30
    // add r0, r0, r1
    // ldrsh r1, [r1, r2]
    // ldrsh r0, [r0, r2]
    // sub r0, #0x18
    *((u16*)(r4 + 0x10)) = ov93_02262CB6;
    // ldrsh r2, [r4, r2]
    // sub r2, #0x60
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r4), ov93_02262CB4, (0x10 << 0x10), (0x16 << 0x10));
    Sprite_TickFrame(*((u32*)*((u32*)r4)));
    // ldr r0, [sp, #0x18]
    *((u8*)(r4 + 0x12)) = r5;
    // sub r0, #0xc
    *((u16*)(r4 + 0x16)) = r0;
    *((u8*)(r4 + 0x13)) = 0;
    *((u8*)(r4 + 0x15)) = 1;
}




void ov93_02261D1C(void) {
    // add r5, #0x18
}




void ov93_02261D3C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261D56: ; jump table
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)r1), (0x16 << 0x10));
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    *((u32*)(r4 + 8)) = (2 << 0xc);
    // ldrsh r0, [r1, r0]
    *((u32*)(r4 + 0xc)) = (0 << 0xc);
    *((u8*)(r4 + 0x13)) = (*((u8*)(r4 + 0x13)) + 1);
    // ldrsh r0, [r4, r0]
    *((u16*)(r4 + 0x16)) = (0x16 - 1);
    ManagedSprite_SetDrawFlag(*((u32*)r4), 1);
    // add r2, r1, r0
    *((u32*)(r4 + 0xc)) = r2;
    // ldrsh r1, [r4, r0]
    // asr r0, r2, #0xb
    // add r0, r2, r0
    // asr r0, r0, #0xc
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) << 0xc);
    *((u8*)(r4 + 0x13)) = (*((u8*)(r4 + 0x13)) + 1);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)r4), *((u32*)(r4 + 0xc)), (0x16 << 0x10));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // sub r2, #0x20
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r4 + 4)), 2, (0 << 0x10), (0x16 << 0x10));
    ManagedSprite_SetAnim(*((u32*)(r4 + 4)), 0x21);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 1);
    PlaySE(0x00000593);
    ManagedSprite_SetAnim(*((u32*)r4), (*((u16*)(ov93_02262C7A + (*((u8*)(r4 + 0x12)) << 1))) + 2), (*((u8*)(r4 + 0x12)) << 1));
    *((u8*)(r4 + 0x14)) = 8;
    *((u8*)(r4 + 0x13)) = (*((u8*)(r4 + 0x13)) + 1);
    *((u8*)(r4 + 0x14)) = (*((u8*)(r4 + 0x14)) - 1);
    ManagedSprite_TickNFrames(*((u32*)(r4 + 4)), (1 << 0xe));
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + 4)), 0);
    ManagedSprite_SetAnim(*((u32*)r4), *((u16*)(ov93_02262C7A + (*((u8*)(r4 + 0x12)) << 1))), (*((u8*)(r4 + 0x12)) << 1));
    *((u8*)(r4 + 0x13)) = (*((u8*)(r4 + 0x13)) + 1);
    // sub r1, r1, r0
    // asr r0, r1, #0xb
    // add r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0xc));
    // asr r1, r0, #0xc
    // ldrsh r0, [r4, r0]
    // sub r0, #0x60
    ManagedSprite_SetDrawFlag(*((u32*)r4), 0);
    *((u8*)(r4 + 0x13)) = 0;
    *((u8*)(r4 + 0x15)) = 0;
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r2, r3, #0xb
    // add r2, r3, r2
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r4), ((r1 >> 0x14) << 4), ((*((u32*)(r4 + 8)) >> 0x14) << 4), (0x16 << 0x10));
}




void ov93_02261EB8(void) {
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // ldr r0, [sp, #0x8c]
    // ldr r1, [sp, #0x88]
    // ldr r4, [sp, #0x9c]
    // asr r1, r7, #2
    // add r1, r7, r1
    // asr r6, r1, #3
    // add r0, sp, #0x30
    // ldr r3, [sp, #0xb0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x30
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x90]
    // ldr r1, [sp, #0x8c]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r2, [sp, #0x88]
    // add r0, sp, #0x30
    // str r3, [sp, #0x14]
    // add r0, sp, #0x30
    // add r3, sp, #0x24
    // ldr r0, [sp, #0xa4]
    // add r0, r7, r0
    // asr r0, r0, #1
    // sub r4, r4, r0
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x40]
    // add r0, sp, #0x30
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x98]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x28]
    // str r4, [sp, #0x58]
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0xa0]
    // str r0, [sp, #0x5c]
    // ldr r0, [sp, #0xa8]
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0xac]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x6c]
    // add r0, sp, #0x40
    // ldr r1, [sp, #0x94]
    // ldr r2, [sp, #0xa0]
    // add r0, sp, #0x30
    // str r6, [r5]
    // add r3, sp, #0x24
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
}




void ov93_02261FB0(void) {
}




void ov93_02261FC8(void) {
    // str r0, [sp]
    // ldr r0, [sp]
    // add r1, r0, r7
    // sub r6, r0, r1
    // sub r4, #0x50
    // sub r4, r0, r1
    // sub r4, #0x10
    // sub r6, #0x50
    // sub r1, #0xa0
    // sub r6, r0, r1
    // sub r4, #0x50
    // add r1, sp, #8
    // add r2, sp, #4
    // ldr r1, [sp, #8]
    // sub r2, r2, r6
    // ldr r1, [sp, #8]
    // sub r2, r2, r4
    // add r5, #0x28
}




void ov93_02262034(void) {
    // ldrsb r1, [r4, r0]
    // strb r1, [r4, r0]
    ov93_02262108(r1, (r1 - 1));
    ov93_022620D4(r4);
    // strb r1, [r4, r0]
    ov93_02262130(r4, (*((u8*)(r4 + (0x1a << 4))) + 1));
    ov93_02261FC8(r4);
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
}




void ov93_02262098(void) {
    _s32_div_f(r1, 0x000186A0);
    // add r1, r7, r4
    // strb r2, [r1, r0]
    // sub r6, r6, r0
    _s32_div_f(r5, 0xa, (r0 << 4), r0);
}




void ov93_022620D4(void) {
    // add r4, r0, r5
    // strb r7, [r4, r6]
    // sub r6, r6, r5
    // strb r6, [r4, r1]
    // strb r3, [r4, r2]
    // strb r3, [r0, r1]
}




void ov93_02262108(void) {
    // add r3, r0, r5
}




void ov93_02262130(void) {
    // str r4, [sp]
    // ldr r0, [sp]
    // add r5, r6, r7
    // mov ip, r0
    // ldrsb r0, [r5, r0]
    // ldrsb r0, [r5, r0]
    // strb r1, [r5, r0]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // add r2, #0x17
    // strb r2, [r5, r1]
    // add r1, #0xa0
    // strb r1, [r5, r0]
    // mov r0, ip
    // strb r1, [r5, r0]
    // sub r0, #0xc
    // strb r1, [r5, r0]
    // add r0, #0x1f
    // strb r1, [r6, r0]
    _s32_div_f(*((u8*)(r5 + (6 << 6))), 0xa0, *((u8*)(r5 + (6 << 6))), *((u8*)(r5 + ((6 << 6) + 6))));
    // strb r1, [r5, r0]
}




void ov93_02262230(void) {
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x28)), ov93_02262F6C);
    Sprite_TickFrame(*((u32*)r0));
}




void ov93_02262250(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r6, #0x64
    // add r5, r7, r0
    // add r4, #0xc8
    // add r5, #0x64
    GF_AssertFail(*((u32*)(r0 + 0x000016B0)));
    // ldr r0, [sp, #0x2c]
    _u32_div_f(0xa);
    // add r0, #0x80
    NewString_ReadMsgData(*((u32*)r7), (r1 + 4));
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x2c]
    _u32_div_f(0xa);
    // str r0, [sp, #0x2c]
    // add r1, sp, #0x3c
    // add r2, sp, #0x38
    sub_02013794(*((u32*)(r4 + 0x000015AC)));
    // ldr r0, [sp, #0x34]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, #0x90
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    ov93_02261EB8(*((u32*)(r7 + 0x2c)), *((u32*)(r7 + 0x28)), *((u32*)r7), r5);
    // ldr r0, [sp, #0x34]
    String_Delete();
    // ldr r0, [sp, #0x30]
    // sub r6, #0x14
    // sub r4, #0x28
    // sub r5, #0x14
    // str r0, [sp, #0x30]
    // bpl _0226226E
}




void ov93_02262310(void) {
    // add r4, r5, r0
    ov93_02261FB0(r4);
    // add r5, #0x14
    // add r4, #0x14
}




void ov93_02262338(void) {
}




void ov93_02262344(void) {
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x28)), ov93_02262FA0);
    ManagedSprite_SetDrawFlag(0);
    Sprite_TickFrame(*((u32*)r4));
}




void ov93_02262368(void) {
}




void ov93_02262374(void) {
    // ldrsh r1, [r4, r0]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0226238C: ; jump table
    // ldrsh r0, [r4, r0]
    // ldrsh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
}




void ov93_02262444(void) {
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x28)), ov93_02262F38);
    ManagedSprite_SetAnim(0x1b);
    ManagedSprite_SetOamMode(r4, 1);
    ManagedSprite_SetDrawFlag(r4, 0);
    Sprite_TickFrame(*((u32*)r4));
    // stmia r5!, {r4}
}




void ov93_02262484(void) {
}




void ov93_0226249C(void) {
    // add r1, sp, #4
    // str r2, [sp]
    // add r1, #2
    // add r2, sp, #4
    // ldr r5, [sp]
    // add r6, sp, #4
    // ldrsh r2, [r6, r2]
    // add r2, #0x1c
    // ldrsh r1, [r6, r1]
    // asr r2, r2, #0x10
    // sub r2, r2, r1
    // ror r2, r0
    // add r1, r1, r2
    // add r0, r1, r0
    // sub r2, r2, r1
    // ror r2, r0
    // add r1, r1, r2
    // add r0, r1, r0
    // tst r0, r7
    // mvn r0, r0
    // ldr r0, [sp]
}




void ov93_02262540(void) {
    // neg r2, r2
}




u32 ov93_02262598(void) {
}




void ov93_022625BC(void) {
    // add r1, #0x3d
    // add r1, #0x3e
    // add r0, #0x3e
    // add r1, #0x3e
    // strb r0, [r1]
    // add r0, #0x3e
    // add r1, #0x3e
    // strb r0, [r1]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02262654: ; jump table
    // add r0, #0x31
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
    // add r1, #0x10
    // str r0, [r5]
    // str r0, [r5]
}




u32 ov93_022626E8(void) {
}




void ov93_022626FC(void) {
    // bx r3
    // nop
    // _02262708: .word sub_0203410C
    // _0226270C: .word ov93_022630E4
}




u8 ov93_02262710(void) {
}




u8 ov93_02262714(void) {
}




void ov93_02262718(void) {
}




void ov93_02262724(void) {
}




void ov93_0226273C(void) {
    // str r1, [r3, r0]
}




void ov93_02262748(void) {
}




void ov93_02262760(void) {
    // add r5, #0x30
    // add r6, #0x2c
    // add r0, r4, r0
    // add r0, #0x30
}




void ov93_022627A4(void) {
}




void ov93_022627C0(void) {
    // blx r2
    MI_CpuFill8(r1, 0, 0x14, (*((u32*)r1) << 2));
}




void ov93_022627E8(void) {
    // add r0, sp, #0
    // str r0, [sp]
    // add r2, sp, #4
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r1, sp, #0
}




void ov93_02262814(void) {
}




void ov93_02262830(void) {
    // add r0, sp, #0
    // str r0, [sp]
    // add r0, sp, #0
    // add r1, sp, #0
}




void ov93_02262860(void) {
    // str r2, [r5, r1]
    ov93_02260908(0x00002FD0, (*((u32*)(r0 + 0x00002FD0)) + 1));
    ov93_0225E48C(r5, *((u8*)(r4 + 6)), *((u8*)(r4 + 7)));
}




void ov93_02262884(void) {
    // add r0, sp, #0
    // str r0, [sp]
    // add r0, sp, #0
    // add r1, sp, #0
}




void ov93_022628B8(void) {
    // str r1, [r5, r0]
    // add r1, #0x30
    // add r3, r5, r3
    ov93_0225FBF0(*((u32*)(r0 + 0x2c)), *((u8*)*((u32*)r0)), *((u8*)(r1 + 6)), 0x00001428);
    // str r1, [r5, r0]
    ov93_0225E48C(r5, *((u8*)(r4 + 7)), *((u8*)(r4 + 8)));
}




void ov93_022628F4(void) {
    // add r0, sp, #0
    // str r0, [sp]
    // add r0, sp, #0
    // add r1, sp, #0
}




void ov93_02262920(void) {
    *((u32*)(r0 + 0x20)) = 3;
}




void ov93_02262934(void) {
    // add r0, sp, #0
    // str r0, [sp]
    // add r0, sp, #0
    // add r1, sp, #0
}




void ov93_02262960(void) {
    // str r2, [r0, r1]
    *((u32*)(r0 + 0x20)) = 6;
}




void ov93_0226297C(void) {
    // add r0, sp, #0
    // str r0, [sp]
    // add r0, sp, #0
    // add r1, sp, #0
}




void ov93_022629A8(void) {
    // bx r3
    // nop
    // _022629B4: .word ov93_0225E48C
}




void ov93_022629B8(void) {
    // add r0, sp, #0
    // str r0, [sp]
    // add r0, sp, #0
    // add r1, sp, #0
}




void ov93_022629E4(void) {
    *((u32*)(r0 + 0x20)) = 1;
}



