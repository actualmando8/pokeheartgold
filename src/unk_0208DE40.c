/* Decompiled from asm/unk_0208DE40.s */
#include "global.h"

void sub_0208DE40(void) {
    NNS_G3dInit();
    G3X_Init();
    G3X_InitMtxStack();
    // and r2, r1
    // strh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
    // sub r3, #0x1c
    // and r4, r2
    // strh r2, [r0]
    // and r2, r1
    // strh r1, [r0]
    // and r1, r3
    // strh r1, [r0]
    G3X_SetFog(0, 0, 0, 0);
    // str r0, [sp]
    G3X_SetClearColor(0, 0, 0x00007FFF, 0x3f);
    // str r0, [r1]
    *((u32*)(0x04000540 + 0x40)) = 0xBFFF0000;
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r0, [r1]
}




void sub_0208DEDC(void) {
    NNS_G2dSetupSoftwareSpriteCamera();
    PokepicManager_DrawAll(*((u32*)(r4 + (0x2a << 4))));
    // str r1, [r0]
}




void sub_0208DEFC(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void sub_0208DF2C(void) {
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x10
    // stmia r2!, {r0, r1}
    // add r1, sp, #8
    // str r0, [r2]
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = 0;
    *((u16*)(r1 + 4)) = 0;
    *((u16*)(r1 + 6)) = 0;
    Camera_New(0x13, _02104EA4);
    // str r0, [r4, r1]
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x10
    // add r2, sp, #8
    Camera_Init_FromPosDistanceAndAngle(*((u32*)(r4 + (0xa7 << 2))), (1 << 0x10), 1, 0x000005C1);
    Camera_SetPerspectiveClippingPlane(0, (0x19 << 0xe), *((u32*)(r4 + (0xa7 << 2))));
    Camera_ClearFixedTarget(*((u32*)(r4 + (0xa7 << 2))));
    Camera_SetStaticPtr(*((u32*)(r4 + (0xa7 << 2))));
}




void sub_0208DF9C(void) {
    // strh r2, [r1]
    // strh r2, [r1]
    // ldrsh r5, [r0, r3]
    // ldrsh r3, [r0, r3]
    // add r3, r5, r4
    // strh r3, [r1]
    // ldrsh r5, [r0, r3]
    // ldrsh r3, [r0, r3]
    // add r3, r5, r4
    // ldrsh r4, [r0, r3]
    // ldrsh r0, [r0, r3]
    // add r0, r4, r2
}




void sub_0208DFF8(void) {
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r5, r0]
    // sub r7, r1, r0
    _fflt(r7);
    _fdiv(0x45800000);
    _fdiv(0x40800000);
    _fgr(0);
    _fflt(r7);
    _fdiv(0x45800000);
    _fdiv(0x40800000);
    _fmul(0x45800000, r0);
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _fflt(r7);
    _fdiv(0x45800000);
    _fdiv(0x40800000);
    _fmul(0x45800000, r0);
    _fsub((0x3f << 0x18));
    _ffix();
    // asr r0, r0, #0x10
    // strh r0, [r6]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r5, r0]
    // sub r7, r1, r0
    _fflt(r7);
    _fdiv(0x45800000);
    _fdiv(0x40800000);
    _fgr(0);
    _fflt(r7);
    _fdiv(0x45800000);
    _fdiv(0x40800000);
    _fmul(0x45800000, r0);
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _fflt(r7);
    _fdiv(0x45800000);
    _fdiv(0x40800000);
    _fmul(0x45800000, r0);
    _fsub((0x3f << 0x18));
    _ffix();
    // asr r0, r0, #0x10
    *((u16*)(r6 + 2)) = (r0 << 0x10);
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r5, r0]
    // sub r4, r1, r0
    _fflt(r4);
    _fdiv(0x45800000);
    _fdiv(0x40800000);
    _fgr(0);
    _fflt(r4);
    _fdiv(0x45800000);
    _fdiv(0x40800000);
    _fmul(0x45800000, r0);
    _fadd((0x3f << 0x18), r0);
    _ffix();
    _fflt(r4);
    _fdiv(0x45800000);
    _fdiv(0x40800000);
    _fmul(0x45800000, r0);
    _fsub((0x3f << 0x18));
    _ffix();
    // asr r0, r0, #0x10
    *((u16*)(r6 + 4)) = (r0 << 0x10);
}




void sub_0208E174(void) {
    // add r1, r5, r1
    sub_0208DF9C(_02104EB0, (0xe6 << 2), *((u8*)(r0 + 0x00000275)));
    // add r1, r5, r1
    sub_0208DF9C(_02104EC2, 0x0000039E, *((u8*)(r5 + 0x00000276)));
    // add r1, r5, r1
    sub_0208DF9C(_02104ED4, 0x000003AA, *((u8*)(r5 + 0x00000277)));
    // add r1, r5, r1
    sub_0208DF9C(_02104EE6, (0xe9 << 2), 0);
    // add r1, r5, r1
    sub_0208DF9C(_02104EF8, (0x3b << 4), *((u8*)(r5 + 0x00000279)));
    // add r1, r5, r1
    sub_0208DF9C(_02104F0A, 0x000003B6, *((u8*)(r5 + 0x00000275)));
    // add r1, r5, r1
    sub_0208DF9C(_02104F1C, 0x000003C2, 0);
    // add r1, r5, r1
    sub_0208DF9C(_02104F2E, (0xef << 2), *((u8*)(r5 + (0x9e << 2))));
    // add r1, r5, r1
    sub_0208DF9C(_02104F40, (0xf2 << 2), *((u8*)(r5 + 0x00000279)));
    // add r1, r5, r1
    sub_0208DF9C(_02104F52, 0x000003CE, 0);
    // add r1, r5, r1
    sub_0208DF9C(_02104F64, 0x000003DA, *((u8*)(r5 + 0x00000277)));
    // add r1, r5, r1
    sub_0208DF9C(_02104F76, (0xf5 << 2), *((u8*)(r5 + (0x9e << 2))));
    // add r1, r5, r1
    sub_0208DF9C(_02104F88, (0x3e << 4), 0);
    // add r1, r5, r1
    sub_0208DF9C(_02104F9A, 0x000003E6, *((u8*)(r5 + 0x00000276)));
    // add r1, r5, r1
    sub_0208DF9C(_02104FAC, 0x000003F2, *((u8*)(r5 + 0x00000277)));
    // add r1, r5, r1
    sub_0208DF9C(_02104FBE, (0xfb << 2), *((u8*)(r5 + (0x9e << 2))));
    // str r0, [sp, #0x24]
    // add r1, r5, r0
    // str r1, [sp, #0x20]
    // add r1, #0x60
    // add r1, r5, r1
    // str r1, [sp, #0x1c]
    // sub r1, #0x60
    // add r1, r5, r1
    // str r1, [sp, #0x18]
    // add r1, r5, r1
    // str r1, [sp, #0x14]
    // add r1, #0x66
    // add r1, r5, r1
    // str r1, [sp, #0x10]
    // sub r1, #0x5a
    // add r1, r5, r1
    // str r1, [sp, #0xc]
    // add r1, #0xc
    // add r1, r5, r1
    // str r1, [sp, #8]
    // add r1, #0x6c
    // add r1, r5, r1
    // str r1, [sp, #4]
    // sub r1, #0x54
    // add r1, r5, r1
    // str r1, [sp]
    // add r1, #0x12
    // add r7, r5, r1
    // add r1, #0x72
    // sub r0, #0x4e
    // add r6, r5, r1
    // add r4, r5, r0
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    sub_0208DFF8((0xce << 2), (0xce << 2));
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    sub_0208DFF8();
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    sub_0208DFF8();
    sub_0208DFF8(r4, r6, r7);
    // ldr r0, [sp, #0x20]
    // add r7, #0x18
    // add r0, #0x18
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r6, #0x18
    // add r0, #0x18
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r4, #0x18
    // add r0, #0x18
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, #0x18
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x18
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // str r1, [r5, r0]
}




void sub_0208E3AC(void) {
    PokepicManager_Create(0x13);
    // str r0, [r4, r1]
    sub_0208A520(r4, (0x2a << 4));
    // add r0, sp, #0x10
    GetBoxmonSpriteCharAndPlttNarcIds(*((u8*)(*((u32*)(r4 + (0x8b << 2))) + 0x11)), r0, 2, 0);
    GetPokemonSpriteCharAndPlttNarcIds(2);
    // add r1, r4, r2
    // sub r2, #0x68
    NARC_ReadPokepicAnimScript(*((u32*)(r4 + 0x000007B8)), *((u16*)(r4 + (0xa9 << 2))), 1);
    // str r2, [r4, r1]
    // str r2, [sp]
    // sub r0, #0x30
    // str r2, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // sub r1, #0x34
    // add r1, sp, #0x10
    PokepicManager_CreatePokepic(*((u32*)(r4 + (0xb5 << 2))), (0xb5 << 2), 0xd0, 0x68);
    // str r0, [r4, r1]
    Pokepic_SetAttr(*((u32*)(r4 + (0x2d << 4))), 6, 1);
    Pokepic_SetAttr(*((u32*)(r4 + (0x2d << 4))), 0x23, 0);
}




void sub_0208E444(void) {
    // str r0, [sp]
    // add r0, #0x54
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r1, #0x4c
    // add r2, #0x50
    sub_0207294C(*((u32*)(r0 + 0x000007B8)), *((u32*)(r0 + (0xa << 6))), *((u32*)(r0 + (0xa << 6))), 0);
    // add r2, #0x50
    Pokepic_StartAnim(*((u32*)(r4 + r2)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, #0x98
    // sub r1, #8
    sub_0207294C(*((u32*)(r4 + 0x000007B8)), *((u32*)(r4 + (0xb5 << 2))), *((u32*)(r4 + ((0xb5 << 2) - 4))), *((u16*)(r4 + (0xb5 << 2))));
}




void sub_0208E4B4(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void sub_0208E4DC(void) {
    // mvn r0, r0
    TouchscreenHitbox_FindRectAtTouchNew(_02104FFC, (0x8b << 2));
    // mvn r1, r1
    TouchscreenHitbox_FindRectAtTouchNew(_02104FFC, (r0 << 2));
    // mvn r0, r0
    // mvn r1, r1
}




void sub_0208E544(void) {
}



