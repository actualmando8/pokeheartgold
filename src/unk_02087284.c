/* Decompiled from asm/unk_02087284.s */
#include "global.h"

void sub_02087284(void) {
    // ldr r4, [sp, #0xc]
    // ldr r1, [sp, #8]
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // add r1, #0xe4
    // str r3, [r1]
    // add r1, #0xfc
    // str r2, [r1]
    // add r1, #0xf1
    // str r2, [r0, r1]
    // add r1, #0xf4
    // str r3, [r1]
    // add r1, #0xf0
    // str r3, [r1]
}




void sub_020872DC(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    _fflt(0);
    _fsub(r4);
    // str r0, [sp, #8]
    _fflt(r5);
    _fsub(r6);
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    _fmul(0, 0);
    // ldr r0, [sp, #0xc]
    _fmul(r0);
    _fadd(r4, r0);
    _fgr(0);
    _fmul(0x45800000, r4);
    _fadd((0x3f << 0x18), r0);
    _fmul(r4);
    _fsub((0x3f << 0x18));
    _ffix();
    FX_Sqrt();
    _fflt();
    _fdiv(0x45800000);
    // ldr r1, [sp, #0x30]
    _fls();
    // add r1, sp, #0x18
    // ldrsh r0, [r1, r0]
    _fflt(0x1c);
    _fgr(r4);
    _feq(0, r4);
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x30]
    _fmul(0);
    _fdiv(r4);
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x30]
    _fmul();
    _fdiv(r4);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp]
    _fadd();
    // ldr r1, [sp, #0x28]
    // str r0, [r1]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #4]
    _fadd();
    // ldr r1, [sp, #0x2c]
    // str r0, [r1]
}




void sub_020873D4(void) {
    // add r0, #0xf0
    // str r4, [sp, #0x1c]
    // str r0, [sp, #0x30]
    // add r0, #0xec
    // str r0, [sp, #0x30]
    // ldrsh r0, [r5, r0]
    *((u16*)(r1 + 0x28)) = 0x18;
    // ldrsh r0, [r5, r0]
    *((u16*)(r1 + 0x2a)) = 0x1a;
    // add r1, sp, #0x4c
    // add r2, sp, #0x48
    ManagedSprite_GetPositionFxXYWithSubscreenOffset(*((u32*)(r1 + 0x24)), *((u32*)(r1 + 0x20)));
    // ldr r0, [sp, #0x4c]
    _fflt();
    _fdiv(0x45800000);
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x48]
    _fflt();
    _fdiv(0x45800000);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // sub r0, r4, r0
    _fflt();
    _fmul(r7, r0);
    _fsub((0x41 << 0x18), r0);
    _fdiv((1 << 0x1e));
    // add r1, sp, #0x44
    // str r1, [sp]
    // add r1, sp, #0x40
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldrsh r0, [r5, r0]
    // ldrsh r1, [r5, r1]
    // ldr r2, [sp, #0x20]
    // ldr r3, [sp, #0x24]
    sub_020872DC(0x28, 0x2a);
    // ldr r0, [sp, #0x40]
    _fgr(*((u32*)(r5 + 0x2c)), 0);
    // ldr r1, [sp, #0x40]
    _fmul(0x45800000);
    _fadd(r7, r0);
    // str r0, [sp, #0x14]
    // ldr r1, [sp, #0x40]
    _fmul();
    _fsub(r7);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x44]
    _fgr(0);
    // ldr r1, [sp, #0x44]
    _fmul(0x45800000);
    _fadd(r7, r0);
    // ldr r1, [sp, #0x44]
    _fmul();
    _fsub(r7);
    _ffix();
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x14]
    _ffix();
    // ldr r1, [sp, #0x28]
    ManagedSprite_AddSpritePrecisePositionXY(*((u32*)(r5 + 0x24)), r0);
    // add r1, sp, #0x3c
    // add r1, #2
    // add r2, sp, #0x3c
    ManagedSprite_GetPositionXYWithSubscreenOffset(*((u32*)(r5 + 0x24)), *((u32*)(r6 + 0x20)));
    // add r0, #0xe8
    // str r0, [sp, #0x18]
    // add r0, #0xe8
    // str r4, [r0]
    // add r2, sp, #0x3c
    // ldrsh r0, [r6, r0]
    // ldrsh r1, [r2, r1]
    // sub r0, r0, r1
    _fflt((0x28 << 0xc), 2);
    _fadd(r7, r0);
    // str r0, [sp, #0x10]
    _fflt((r0 << 0xc));
    _fsub(r7);
    // str r0, [sp, #0x10]
    // add r2, sp, #0x3c
    // ldrsh r0, [r6, r0]
    // ldrsh r1, [r2, r1]
    // sub r0, r0, r1
    _fflt((0x2a << 0xc), 0);
    _fadd(r7, r0);
    _fflt((r0 << 0xc));
    _fsub(r7);
    _ffix();
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x10]
    _ffix();
    // ldr r0, [sp, #0x2c]
    FX_Atan2Idx(r0);
    *((u32*)(r5 + 0x30)) = r0;
    _s32_div_f((0x2d << 4), *((u32*)(r6 + 0x10)));
    // ldr r1, [sp, #0x18]
    // add r2, #0xec
    // add r1, r6, r1
    // sub r0, r1, r2
    *((u32*)(r5 + 0x30)) = r0;
    _s32_div_f(*((u32*)(r5 + 0x30)), (0x2d << 4), (*((u32*)r6) * r0));
    // ldr r0, [sp, #0x30]
    *((u32*)(r5 + 0x30)) = r1;
    // ldr r0, [sp, #0x30]
    // str r1, [r0]
    *((u32*)(r5 + 0x2c)) = (*((u32*)(r5 + 0x2c)) + 1);
    *((u32*)(r5 + 0x30)) = (*((u32*)(r5 + 0x30)) + 4);
    _s32_div_f((*((u32*)(r5 + 0x30)) + 4), (0x2d << 4));
    *((u32*)(r5 + 0x30)) = r1;
    GF_SinDeg(((r1 << 0x10) >> 0x10));
    // ldrsh r1, [r6, r1]
    // str r1, [sp, #0x34]
    // add r1, #0xfc
    // str r0, [sp, #0x38]
    GF_CosDeg(((*((u32*)(r5 + 0x30)) << 0x10) >> 0x10), *((u32*)r6));
    // ldrsh r1, [r6, r1]
    // ldr r2, [sp, #0x34]
    // ldr r1, [sp, #0x38]
    // mov ip, r0
    // add r1, r2, r1
    // mov r2, ip
    // add r2, r3, r2
    ManagedSprite_SetPositionFxXYWithSubscreenOffset(*((u32*)(r5 + 0x24)), *((u32*)(r6 + (1 << 8))), *((u32*)(r6 + 0x20)));
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // add r5, #0x10
}




void sub_0208763C(void) {
    // str r1, [sp, #0x18]
    SpriteManager_UnloadPlttObjById(*((u32*)(r0 + 8)), 0x000056CF);
    SpriteManager_UnloadPlttObjById(r5, 0x000056D0);
    // str r4, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 2, r5);
    // str r4, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r7, 3, r5);
}




void sub_020876B0(void) {
    // add r5, r3, r1
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r5, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r0 + 0xc)), 2, *((u32*)(r0 + 4)), *((u32*)(r0 + 8)));
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r5, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r1, 2, r7, r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r7, r6, r4, 0x5f);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r5, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r1, 3, r7, r6);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r5, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(r1, 3, r7, r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r5, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r7, r6, r4, 0x5f);
    // str r0, [sp]
    // str r5, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r7, r6, r4, 0x5d);
    // str r0, [sp]
    // str r5, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r7, r6, r4, 0x5e);
}




void sub_020877B4(void) {
    // str r0, [sp]
    // add r0, sp, #4
    // strh r1, [r0]
    *((u16*)(*((u32*)(r0 + 4)) + 2)) = 0x60;
    *((u16*)(*((u32*)(r0 + 4)) + 4)) = 0;
    *((u16*)(*((u32*)(r0 + 4)) + 6)) = 0;
    // str r6, [sp, #0xc]
    // str r0, [sp, #0x14]
    // str r6, [sp, #0x30]
    // str r6, [sp, #0x34]
    // str r6, [sp, #0x10]
    // add r1, r1, r0
    // str r1, [sp, #0x18]
    // add r1, r1, r0
    // str r1, [sp, #0x1c]
    // add r1, r1, r0
    // str r1, [sp, #0x20]
    // add r0, r1, r0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp]
    // add r2, sp, #4
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x10)), *((u32*)(r0 + 8)));
    *((u32*)(r4 + 0x24)) = r0;
    ManagedSprite_TickFrame();
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x24)), 0x80, 0x60);
    // add r4, #0x10
}




void sub_02087830(void) {
    // add r1, r2, r1
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 8)), 0x000056CE, *((u32*)(r0 + 0x18)));
    // add r1, r2, r1
    SpriteManager_UnloadCellObjById(*((u32*)(r5 + 8)), 0x000056CE, *((u32*)(r5 + 0x18)));
    // add r1, r1, r7
    SpriteManager_UnloadAnimObjById(*((u32*)(r5 + 8)), *((u32*)(r5 + 0x18)));
    Sprite_DeleteAndFreeResources(*((u32*)(r4 + 0x24)));
    // add r4, #0x10
}




void sub_02087878(void) {
    NARC_New(0xbf, *((u32*)(r0 + 0x14)));
    // str r0, [r5]
    sub_020876B0(r5, r4);
    sub_020877B4(r5);
    SysTask_CreateOnVBlankQueue(sub_020873D4, r5, (1 << 0xc));
    // add r5, #0xf4
    // str r0, [r5]
}




void sub_020878B0(void) {
}




void sub_020878B8(void) {
    // add r1, #0xe8
    // str r2, [r1]
    // add r1, #0xec
    // str r3, [r1]
    // add r4, #0x10
}




void sub_020878EC(void) {
    // add r0, #0xe8
    // str r1, [r0]
    // add r0, #0xec
    // str r2, [r0]
    // add r3, #0x10
}




void sub_02087930(void) {
    // ldrsh r3, [r0, r3]
    // ldrsh r0, [r0, r1]
}




void sub_02087948(void) {
    // str r2, [sp]
    // add r0, #0xe8
    // str r1, [r0]
    // add r0, #0xec
    // str r7, [r0]
    // ldr r0, [sp]
    // ldr r2, [sp]
    // add r4, #0x10
}




void sub_02087988(void) {
    // add r1, #0xe4
    // add r0, #0xe4
    // add r4, #0xe4
    // str r0, [r4]
    // add r0, #0xf4
    // add r0, #0xe4
    // add r4, #0xe4
    // str r0, [r4]
}




void sub_020879E0(void) {
    // add r5, #0x10
}




void sub_02087A08(void) {
    // add r3, #0xfc
    // str r1, [r3]
    // str r2, [r0, r1]
    // add r1, #0xfc
    // str r2, [r1]
    // add r1, #0xf1
    // str r2, [r0, r1]
}




void sub_02087A30(void) {
    // add r5, #0x10
}




void sub_02087A54(void) {
    // add r5, #0x10
}



