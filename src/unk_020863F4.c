/* Decompiled from asm/unk_020863F4.s */
#include "global.h"

void sub_020863F4(void) {
    SpriteSystem_Alloc(0x6c);
    // add r2, sp, #0x2c
    // str r0, [r4, r7]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x18
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    SpriteSystem_Init(*((u32*)(r4 + (0x2f << 4))), r2, _021027F4, 0x20);
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SpriteManager_New(*((u32*)(r4 + r7)), _021027DC);
    // str r0, [r4, r1]
    SpriteSystem_InitSprites(*((u32*)(r4 + ((r7 + 4) - 4))), *((u32*)(r4 + (r7 + 4))), 0x80);
    GF_AssertFail();
    // add r2, sp, #0
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + (0x2f << 4))), *((u32*)(r4 + ((0x2f << 4) + 4))));
    GF_AssertFail();
}




void sub_02086490(void) {
    // add r0, #0xc
    // str r0, [sp, #0x18]
    // add r0, #8
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r0 + ((0x2f << 4) - 4))), 0xc, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0xe, 1);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [sp, #0x18]
    PaletteData_LoadNarc(0x20, 0xbe, 0xd, 0x6c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 0xf, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0x11, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    PaletteData_LoadNarc(0, 0xbe, 0x10, 0x6c);
    // str r4, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadPaletteBufferFromOpenNarc((0xfa << 2), 2, r6, r5);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 3);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(0x000003E9, 2, r6, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 7);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(0x000003EA, 2, r6, r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(r6, r5, r4, 8);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(r6, r5, r4, 0xa);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(r6, r5, r4, 0xb);
    Options_GetFrame(*((u32*)(r7 + (0xf6 << 2))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    LoadUserFrameGfx2(0x6c, 4, 1, 0xa);
    sub_0200E640(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    PaletteData_LoadNarc(0xb0, 0x26, r0, 0x6c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    PaletteData_LoadNarc(0xc0, 0x10, 8, 0x6c);
}




void sub_020866CC(void) {
    // add r5, #0x1c
    // add r4, #0x1c
    // add r4, #0x1c
    // add r4, #0x1c
    // add r0, r6, r0
}




void sub_02086758(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    // str r1, [sp, #8]
    // ldr r1, [sp]
    // add r2, sp, #0x10
    // str r1, [sp, #4]
    // ldr r1, [sp, #0xc]
    // strh r1, [r2]
    // str r1, [sp, #0x18]
    // ldr r1, [sp, #0xc]
    // str r1, [sp, #0x3c]
    // str r1, [sp, #0x40]
    // str r1, [sp, #0x1c]
    // add r1, #0xf8
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // str r1, [sp, #0x2c]
    // str r1, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // ldr r1, [sp]
    // str r2, [sp, #0x20]
    // add r0, #0xf0
    // ldr r0, [sp]
    // bmi _020867DC
    // ldr r0, [sp]
    // add r5, r0, r1
    // str r0, [r5]
    // sub r5, #0x1c
    // bpl _020867C0
    // ldr r0, [sp]
    // ldr r1, [sp]
    // add r1, r1, r0
    // ldr r4, [sp]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r2, sp, #0x10
    // str r0, [r4, r1]
    // asr r1, r1, #0x10
    // ldr r0, [sp, #0xc]
    // add r4, #0x1c
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r2, sp, #0x10
    // asr r1, r1, #0x10
    // add r5, #0x1c
    // ldr r1, [sp]
    // add r1, r1, r0
    // add r7, #8
}




void sub_020868A0(void) {
    // add r0, sp, #0
    // strh r2, [r0]
    // add r1, #0xf9
    // str r0, [sp, #0x10]
    // str r2, [sp, #8]
    // str r2, [sp, #0x2c]
    // str r2, [sp, #0x30]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r2, sp, #0
    // str r0, [r5, r1]
    // add r2, sp, #0
    // str r0, [r5, r1]
    // add r2, sp, #0
    // str r0, [r5, r1]
    // strh r1, [r5, r2]
    // strh r1, [r5, r0]
    // sub r2, #0x14
    // str r0, [r5, r2]
    // sub r1, #0xc
    // strh r1, [r5, r2]
    // strh r1, [r5, r0]
    // sub r2, #0x14
    // str r0, [r5, r2]
    // sub r1, #0xc
}




void sub_020869BC(void) {
    // add r1, sp, #0
    // strh r0, [r1]
    // add r2, #0xfa
    // str r1, [sp, #8]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // add r2, sp, #0
    // str r0, [r5, r1]
    // str r0, [sp, #0xc]
    // add r2, sp, #0
    // str r0, [r5, r2]
    // add r1, #0xde
    // add r1, #0xdf
    // sub r0, #0x1c
    // add r3, r3, r1
    // add r1, r3, r1
    // add r3, #0xdc
    // add r2, #0xdd
    // asr r1, r1, #0x10
    // add r3, r3, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
    // add r1, #0xe2
    // add r1, #0xe3
    // add r3, r3, r1
    // add r1, r3, r1
    // add r3, #0xe0
    // add r2, #0xe1
    // asr r1, r1, #0x10
    // add r3, r3, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
}




void sub_02086AB4(void) {
    // add r1, r0, r2
    // add r1, r0, r2
}




void sub_02086AE4(void) {
    // add r0, r4, r0
    // str r1, [r4, r2]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, #0x10
    // asr r2, r2, #0x10
}




void sub_02086B2C(void) {
    // add r1, #0x10
    // add r3, r3, r1
    // add r1, #0xca
    // add r1, #0xcb
    // add r4, r4, r1
    // add r1, r4, r1
    // add r4, #0xc8
    // add r2, #0xc9
    // asr r1, r1, #0x10
    // add r3, r4, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
}




void sub_02086B6C(void) {
    // add r1, #0x10
    // add r0, r3, r0
    // add r3, r3, r1
    // add r1, #0xe6
    // add r1, #0xe7
    // add r4, r4, r1
    // add r1, r4, r1
    // add r4, #0xe4
    // add r2, #0xe5
    // asr r1, r1, #0x10
    // add r3, r4, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
}




void sub_02086BB4(void) {
    // add r4, #0x1c
    // add r4, #0x1c
}




void sub_02086C80(void) {
}




void sub_02086C8C(void) {
    // str r0, [sp]
    // add r1, r1, r0
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // sub r0, #0x28
    // asr r7, r0, #0x10
    // add r1, r1, r0
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // asr r6, r0, #0x10
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    ManagedSprite_SetAnim(*((u32*)(r0 + (0x9d << 2))), 1);
    sub_02086C80(*((u32*)(r5 + (0xdf << 2))), r7, r6);
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x9d << 2))), 2);
    sub_02086C80(*((u32*)(r5 + (0xdf << 2))), r7, (r6 - 1));
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x9d << 2))), 0);
    sub_02086C80(*((u32*)(r5 + (0xdf << 2))), r7, r6);
    // str r1, [r4, r0]
    ManagedSprite_SetAnim(*((u32*)(r4 + (0x9d << 2))), 0);
    sub_02086C80(*((u32*)(r5 + (0xdf << 2))), r7, r6);
    // str r1, [r4, r0]
    // ldr r0, [sp]
    // add r4, #0x1c
    // str r0, [sp]
}




void sub_02086D98(void) {
    // add r0, r2, r0
}




void sub_02086DA4(void) {
    // add r4, #0x1c
}




void sub_02086DE4(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp]
    // str r4, [sp, #8]
    // add r2, r0, r2
    // sub r0, #0x34
    // ldrsh r5, [r2, r0]
    // ldr r0, [sp]
    // ldr r7, [sp]
    // ldr r1, [sp]
    // add r5, #0x14
    // asr r5, r0, #0x10
    // add r5, #0x20
    // asr r5, r0, #0x10
    // add r5, #0x14
    // asr r5, r0, #0x10
    // add r5, #8
    // asr r5, r0, #0x10
    // add r1, sp, #0xc
    // add r1, #2
    // add r2, sp, #0xc
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    // ldrsh r2, [r3, r2]
    // add r1, sp, #0xc
    // ldrsh r0, [r1, r0]
    // sub r1, r5, r0
    // add r0, r1, r0
    // asr r0, r0, #1
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r1, sp, #0xc
    // add r1, #2
    // add r2, sp, #0xc
    // ldr r1, [sp]
    // add r5, #8
    // asr r5, r0, #0x10
    // add r5, #0x14
    // asr r5, r0, #0x10
    // add r5, #8
    // asr r5, r0, #0x10
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    // ldrsh r2, [r3, r2]
    // add r1, sp, #0xc
    // ldrsh r0, [r1, r0]
    // sub r1, r5, r0
    // add r0, r1, r0
    // asr r1, r0, #1
    // strh r1, [r6, r0]
    // strh r1, [r6, r0]
    // strb r1, [r6, r0]
    // ldr r0, [sp, #8]
    // add r6, #0x1c
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // add r7, #0x1c
}




void sub_02086F44(void) {
    // str r0, [sp]
    // str r0, [sp]
    // add r2, sp, #4
    // add r1, sp, #4
    // add r2, #2
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // sub r1, r0, r7
    // strb r1, [r0]
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // ldr r0, [sp]
    // sub r1, r1, r0
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // add r1, r0, r7
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // ldr r0, [sp]
    // add r1, r1, r0
    // add r5, #0x1c
}




void sub_02086FCC(void) {
    // str r0, [r4, r1]
}




void sub_02086FE8(void) {
    // add r0, r4, r0
    // add r0, r4, r0
}




void sub_02087028(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r4, [sp, #0x14]
    // sub r0, #0xef
    // sub r2, #0xfb
    // sub r4, #0xf7
    SpriteSystem_LoadPaletteBuffer(*((u32*)(r0 + 0x000003EB)), 2, *((u32*)(r0 + 0x000003EB)), *((u32*)(r0 + 0x000003EB)));
}




void sub_02087064(void) {
    // str r1, [sp]
    // str r0, [sp]
}




void sub_02087090(void) {
    NewMsgDataFromNarc(0, 0x1b, 0x26, 0x6c);
    // str r0, [sp, #0x14]
    NewString_ReadMsgData((r4 + 2));
    // str r0, [sp, #0x18]
    // add r0, sp, #0x1c
    InitWindow();
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x1c
    AddTextWindowTopLeftCorner(*((u32*)(r5 + (0xbe << 2))), 0xa, 2);
    // ldr r1, [sp, #0x18]
    FontID_String_GetCenterAlignmentX(2, 0, 0x50);
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, sp, #0x1c
    AddTextPrinterParameterizedWithColor(0x000F0D02, 2, r0);
    // add r0, sp, #0x1c
    sub_02013688(1, 0x6c);
    // add r3, r5, r3
    // add r3, r3, r6
    sub_02021AC8(1, 1, (0xe1 << 2));
    // add r0, #0x1a
    // add r3, r5, r0
    // add r2, r1, r2
    // add r1, r2, r1
    // asr r7, r1, #0x10
    // add r2, r2, r1
    // add r1, r2, r1
    // asr r1, r1, #0x10
    // str r1, [sp, #0x10]
    // add r1, #0x72
    // sub r0, #0x12
    // str r1, [sp, #0x2c]
    // add r1, sp, #0x1c
    // str r1, [sp, #0x30]
    SpriteManager_GetSpriteList(*((u32*)(r5 + 0x00000306)), *((u32*)(r5 + 0x00000306)), *((u8*)(r3 + (0x00000306 - 2))));
    // str r0, [sp, #0x34]
    // add r1, #0xf7
    SpriteManager_FindPlttResourceProxy(*((u32*)(r5 + (0xbd << 2))), (0xbd << 2));
    // str r0, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // add r2, r5, r6
    // sub r0, #0xc
    // add r5, r5, r0
    // sub r7, #0x28
    // str r2, [sp, #0x40]
    // asr r2, r2, #0x10
    // str r2, [sp, #0x44]
    // ldr r2, [sp, #0x10]
    // asr r2, r2, #0x10
    // str r1, [sp, #0x4c]
    // str r1, [sp, #0x50]
    // str r1, [sp, #0x54]
    // str r2, [sp, #0x48]
    // str r1, [sp, #0x58]
    // add r0, sp, #0x2c
    sub_020135D8((0xe2 << 2), 0x6c, (((r7 << 0x10) - 7) << 0x10));
    // str r0, [r5, r4]
    // ldr r1, [sp, #0x70]
    sub_020138E0(*((u32*)(r5 + r4)));
    // ldr r0, [sp, #0x18]
    String_Delete();
    // ldr r0, [sp, #0x14]
    DestroyMsgData();
    // add r0, sp, #0x1c
    RemoveWindow();
}




void sub_020871C4(void) {
    // ldr r0, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x38]
}




void sub_02087230(void) {
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
}



