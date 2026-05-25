/* Decompiled from asm/unk_020863F4.s */
#include "global.h"

void sub_020863F4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // add r4, r0, #0
    // mov r0, #0x6c
    // bl SpriteSystem_Alloc
    // mov r7, #0x2f
    // lsl r7, r7, #4
    // add r2, sp, #0x2c
    // ldr r3, _02086484 ; =_021027F4
    // str r0, [r4, r7]
    // ldmia r3!, {r0, r1}
    // add r6, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // ldr r5, _02086488 ; =_021027C8
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x18
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // add r1, r6, #0
    // str r0, [r3]
    // ldr r0, [r4, r7]
    // mov r3, #0x20
    // bl SpriteSystem_Init
    // ldr r3, _0208648C ; =_021027DC
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r7, #0
    // ldr r0, [r4, r0]
    // bl SpriteManager_New
    // add r1, r7, #4
    // str r0, [r4, r1]
    // sub r0, r1, #4
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // mov r2, #0x80
    // bl SpriteSystem_InitSprites
    // cmp r0, #0
    // bne _02086468
    // bl GF_AssertFail
    // mov r1, #0x2f
    // lsl r1, r1, #4
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // add r2, sp, #0
    // bl SpriteSystem_InitManagerWithCapacities
    // cmp r0, #0
    // bne _02086480
    // bl GF_AssertFail
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // _02086484: .word _021027F4
    // _02086488: .word _021027C8
    // _0208648C: .word _021027DC
    // TODO: decompile
}



void sub_02086490(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // mov r1, #0x2f
    // lsl r1, r1, #4
    // add r7, r0, #0
    // add r0, r1, #4
    // ldr r5, [r7, r0]
    // add r0, r1, #0
    // add r0, #0xc
    // ldr r0, [r7, r0]
    // ldr r6, [r7, r1]
    // str r0, [sp, #0x18]
    // add r0, r1, #0
    // add r0, #8
    // ldr r0, [r7, r0]
    // mov r3, #1
    // str r0, [sp, #0x1c]
    // sub r0, r1, #4
    // ldr r4, [r7, r0]
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6c
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    // add r0, r4, #0
    // mov r1, #0xc
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6c
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    // add r0, r4, #0
    // mov r1, #0xe
    // mov r3, #1
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [sp, #0x18]
    // mov r1, #0xbe
    // mov r2, #0xd
    // mov r3, #0x6c
    // bl PaletteData_LoadNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6c
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    // add r0, r4, #0
    // mov r1, #0xf
    // mov r3, #5
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x6c
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x1c]
    // add r0, r4, #0
    // mov r1, #0x11
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // mov r1, #0xbe
    // mov r2, #0x10
    // mov r3, #0x6c
    // bl PaletteData_LoadNarc
    // str r4, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // mov r0, #0xfa
    // str r1, [sp, #0x10]
    // lsl r0, r0, #2
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // mov r1, #2
    // add r2, r6, #0
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #2
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #3
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // str r4, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, _020866C4 ; =0x000003E9
    // mov r1, #2
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r2, r6, #0
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _020866C4 ; =0x000003E9
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #4
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _020866C4 ; =0x000003E9
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #6
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _020866C4 ; =0x000003E9
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #7
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // str r4, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r1, #2
    // str r1, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, _020866C8 ; =0x000003EA
    // add r2, r6, #0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r3, r5, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _020866C8 ; =0x000003EA
    // add r1, r5, #0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #8
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _020866C8 ; =0x000003EA
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0xa
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _020866C8 ; =0x000003EA
    // add r1, r5, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // mov r3, #0xb
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r0, #0xf6
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // bl Options_GetFrame
    // add r4, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x6c
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // mov r1, #4
    // mov r2, #1
    // mov r3, #0xa
    // bl LoadUserFrameGfx2
    // add r0, r4, #0
    // bl sub_0200E640
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xb0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // mov r1, #0x26
    // mov r3, #0x6c
    // bl PaletteData_LoadNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xc0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // mov r1, #0x10
    // mov r2, #8
    // mov r3, #0x6c
    // bl PaletteData_LoadNarc
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020866C4: .word 0x000003E9
    // _020866C8: .word 0x000003EA
    // TODO: decompile
}



void sub_020866CC(void) {
    // ldr r0, [r6, r0]
    Sprite_DeleteAndFreeResources(*((u32*)(r0 + 0xc)));
    // ldr r0, [r6, r7]
    // add r5, #0x1c
    // ldr r0, [r6, r0]
    // ldr r0, [r4, r0]
    Sprite_DeleteAndFreeResources((0x73 << 2));
    // ldr r0, [r6, r7]
    // add r4, #0x1c
    // ldr r0, [r4, r7]
    Sprite_DeleteAndFreeResources();
    // add r4, #0x1c
    // ldr r0, [r4, r7]
    Sprite_DeleteAndFreeResources();
    // add r4, #0x1c
    sub_02086FE8(r6);
    // add r0, r6, r0
    RemoveWindow((0xe7 << 2));
}



void sub_02086758(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r1, [sp]
    // ldr r1, [r1, r0]
    // str r1, [sp, #8]
    // ldr r1, [sp]
    // ldr r1, [r1, r2]
    // add r2, sp, #0x10
    // str r1, [sp, #4]
    // ldr r1, [sp, #0xc]
    // strh r1, [r2]
    *((u16*)(((0x2f << 4) + 4) + 2)) = r1;
    *((u16*)(((0x2f << 4) + 4) + 4)) = r1;
    *((u16*)(((0x2f << 4) + 4) + 6)) = r1;
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
    // ldr r4, [r1, r0]
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    // bmi _020867DC
    // mul r1, r0
    // ldr r0, [sp]
    // add r5, r0, r1
    _u32_div_f(r4, 0xa, 1);
    // str r0, [r5]
    _u32_div_f(r4, 0xa);
    // sub r5, #0x1c
    // bpl _020867C0
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    // ldr r1, [sp]
    // ldr r1, [r1, r2]
    // add r1, r1, r0
    // ldr r4, [sp]
    // ldr r1, [r4, r0]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r2, sp, #0x10
    SpriteSystem_NewSprite(((7 << 6) + 1), (0xfb << 2), (0x2d << 4));
    // str r0, [r4, r1]
    // ldr r0, [r4, r0]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY((0x73 << 2), (r7 << 0x10), 0x18);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x73 << 2), 0x16);
    // ldr r0, [r4, r0]
    ManagedSprite_TickFrame((0x73 << 2));
    // ldr r0, [sp, #0xc]
    // add r4, #0x1c
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // add r2, sp, #0x10
    SpriteSystem_NewSprite((r0 + 1));
    *((u32*)(r5 + 0xc)) = r0;
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY((r7 << 0x10), 0x18);
    sub_02086D98(*((u32*)r5), *((u32*)(r5 + 8)));
    ManagedSprite_SetAnim(*((u32*)(r5 + 0xc)), r0);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r5 + 0xc)), 2);
    ManagedSprite_TickFrame(*((u32*)(r5 + 0xc)));
    // add r5, #0x1c
    // ldr r1, [sp]
    // ldr r0, [r1, r0]
    // ldr r1, [r2, r1]
    // add r1, r1, r0
    // add r7, #8
}



void sub_020868A0(void) {
    // ldr r6, [r5, r1]
    // ldr r4, [r5, r0]
    // add r0, sp, #0
    // strh r2, [r0]
    *((u16*)(((0x2f << 4) + 4) + 2)) = 0;
    *((u16*)(((0x2f << 4) + 4) + 4)) = 0;
    *((u16*)(((0x2f << 4) + 4) + 6)) = 0;
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
    SpriteSystem_NewSprite(r6, r4, 0);
    // str r0, [r5, r1]
    // add r2, sp, #0
    SpriteSystem_NewSprite(r6, r4);
    // str r0, [r5, r1]
    // add r2, sp, #0
    SpriteSystem_NewSprite(r6, r4);
    // str r0, [r5, r1]
    // ldr r1, [r5, r1]
    sub_02086AE4(r5, (0x3f << 4));
    // ldr r0, [r5, r0]
    ManagedSprite_SetAnim((0x22 << 4), 0);
    // ldr r0, [r5, r0]
    ManagedSprite_TickFrame((0x22 << 4));
    // strh r1, [r5, r2]
    // strh r1, [r5, r0]
    // sub r2, #0x14
    // str r0, [r5, r2]
    sub_02086B2C(r5, 0, (0x91 << 2));
    // ldr r0, [r5, r1]
    // sub r1, #0xc
    // ldr r1, [r5, r1]
    ManagedSprite_SetAnim((0x8f << 2));
    // ldr r0, [r5, r0]
    ManagedSprite_TickFrame((0x8f << 2));
    // ldr r0, [r5, r0]
    ManagedSprite_SetOamMode((0x8f << 2), 1);
    // strh r1, [r5, r2]
    // strh r1, [r5, r0]
    // sub r2, #0x14
    // str r0, [r5, r2]
    sub_02086B2C(r5, 0, (0x26 << 4));
    // ldr r0, [r5, r1]
    // sub r1, #0xc
    // ldr r1, [r5, r1]
    ManagedSprite_SetAnim((0x96 << 2));
    // ldr r0, [r5, r0]
    ManagedSprite_TickFrame((0x96 << 2));
    // ldr r0, [r5, r0]
    ManagedSprite_SetOamMode((0x96 << 2), 1);
    sub_02086AB4(r5, 1, 0);
    sub_02086AB4(r5, 2, 0);
}



void sub_020869BC(void) {
    // ldr r6, [r5, r2]
    // ldr r4, [r5, r0]
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = 0;
    *((u16*)(r1 + 4)) = 0;
    *((u16*)(r1 + 6)) = 0;
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
    SpriteSystem_NewSprite(r6, r4, (0x2f << 4));
    // str r0, [r5, r1]
    // str r0, [sp, #0xc]
    // add r2, sp, #0
    SpriteSystem_NewSprite(r6, r4);
    // str r0, [r5, r2]
    // add r1, #0xde
    // ldrb r3, [r5, r1]
    // add r1, #0xdf
    // ldrb r1, [r5, r1]
    // sub r0, #0x1c
    // add r3, r3, r1
    // add r1, r3, r1
    // add r3, #0xdc
    // add r2, #0xdd
    // ldrb r3, [r5, r3]
    // ldrb r2, [r5, r2]
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    // add r3, r3, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0x29 << 4), ((r3 >> 0x1f) << 0xf), (((0x29 << 4) >> 0x1f) << 0xf), (0x29 << 4));
    // ldr r0, [r5, r0]
    ManagedSprite_SetAnim((0x9d << 2), 0);
    // ldr r0, [r5, r0]
    ManagedSprite_TickFrame((0x9d << 2));
    // add r1, #0xe2
    // ldrb r3, [r5, r1]
    // add r1, #0xe3
    // ldrb r1, [r5, r1]
    // ldr r0, [r5, r2]
    // add r3, r3, r1
    // add r1, r3, r1
    // add r3, #0xe0
    // add r2, #0xe1
    // ldrb r3, [r5, r3]
    // ldrb r2, [r5, r2]
    // asr r1, r1, #0x10
    // add r3, r3, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(((r3 >> 0x1f) << 0xf), (((0x29 << 4) >> 0x1f) << 0xf), (0x29 << 4));
    // ldr r0, [r5, r0]
    ManagedSprite_SetAnim((0x29 << 4), 0);
    // ldr r0, [r5, r0]
    ManagedSprite_TickFrame((0x29 << 4));
}



void sub_02086AB4(void) {
    // mul r2, r1
    // add r1, r0, r2
    // ldr r0, [r1, r0]
    ManagedSprite_SetDrawFlag((0x22 << 4), 1, 0x1c);
    // mul r2, r1
    // add r1, r0, r2
    // ldr r0, [r1, r0]
    ManagedSprite_SetDrawFlag((0x22 << 4), 0, 0x1c);
}



void sub_02086AE4(void) {
    // ldr r0, [r4, r0]
    // mul r0, r1
    // add r0, r4, r0
    // str r1, [r4, r2]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(0x1c + 0xc)), (0x85 << 2));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, #0x10
    // ldr r0, [r4, r0]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((0x22 << 4), 2, (0 << 0x10));
}



void sub_02086B2C(void) {
    // add r1, #0x10
    // ldr r0, [r3, r2]
    // add r3, r3, r1
    // add r1, #0xca
    // ldrb r4, [r3, r1]
    // add r1, #0xcb
    // ldrb r1, [r3, r1]
    // add r4, r4, r1
    // add r1, r4, r1
    // add r4, #0xc8
    // add r2, #0xc9
    // ldrb r4, [r3, r4]
    // ldrb r2, [r3, r2]
    // asr r1, r1, #0x10
    // add r3, r4, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(((r4 >> 0x1f) << 0xf), ((r0 >> 0x1f) << 0xf), r0);
}



void sub_02086B6C(void) {
    // mul r0, r2
    // add r1, #0x10
    // add r0, r3, r0
    // add r3, r3, r1
    // add r1, #0xe6
    // ldrb r4, [r3, r1]
    // add r1, #0xe7
    // ldrb r1, [r3, r1]
    // ldr r0, [r0, r2]
    // add r4, r4, r1
    // add r1, r4, r1
    // add r4, #0xe4
    // add r2, #0xe5
    // ldrb r4, [r3, r4]
    // ldrb r2, [r3, r2]
    // asr r1, r1, #0x10
    // add r3, r4, r2
    // add r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(0x1c, ((r4 >> 0x1f) << 0xf), ((r0 >> 0x1f) << 0xf), r0);
}



void sub_02086BB4(void) {
    // ldr r0, [r5, r0]
    ManagedSprite_TickFrame((0x22 << 4));
    // ldr r0, [r5, r0]
    ManagedSprite_TickFrame((0x8f << 2));
    // ldr r0, [r5, r0]
    ManagedSprite_TickFrame((0x96 << 2));
    // add r4, #0x1c
    // ldr r0, [r4, r7]
    ManagedSprite_GetActiveAnim();
    // ldr r0, [r4, r0]
    ManagedSprite_IsAnimated((0x22 << 4));
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    ManagedSprite_SetAnim((0x22 << 4), (0x85 << 2));
    // ldr r0, [r5, r0]
    sub_02086AB4(r5, 1, 0);
    sub_02086AB4(r5, 1, 1);
    sub_02086AB4(r5, 2, 0);
    // ldr r1, [r4, r1]
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x22 << 4), (0x85 << 2));
    // ldr r0, [r5, r0]
    ManagedSprite_GetActiveAnim((0x96 << 2));
    // ldr r0, [r5, r0]
    sub_02086AB4(r5, 1, 0);
    sub_02086AB4(r5, 1, 1);
    // add r4, #0x1c
}



void sub_02086C80(void) {
}



void sub_02086C8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // add r4, r5, #0
    // ldr r0, _02086D94 ; =0x0000036E
    // ldrb r1, [r5, r0]
    // add r0, r0, #1
    // ldrb r0, [r5, r0]
    // add r1, r1, r0
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // lsl r0, r0, #0xf
    // asr r0, r0, #0x10
    // sub r0, #0x28
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // mov r0, #0xdb
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // add r0, r0, #1
    // ldrb r0, [r5, r0]
    // add r1, r1, r0
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // lsl r0, r0, #0xf
    // asr r0, r0, #0x10
    // sub r0, r0, #7
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // mov r0, #0x9a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02086CD8
    // cmp r0, #1
    // beq _02086CE2
    // b _02086D60
    // mov r0, #0xa
    // mov r1, #0
    // lsl r0, r0, #6
    // strb r1, [r4, r0]
    // b _02086D82
    // mov r0, #0xa
    // lsl r0, r0, #6
    // ldrb r0, [r4, r0]
    // add r1, r0, #1
    // mov r0, #0xa
    // lsl r0, r0, #6
    // strb r1, [r4, r0]
    // ldrb r0, [r4, r0]
    // cmp r0, #1
    // bne _02086D12
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // mov r0, #0xdf
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // add r2, r6, #0
    // bl sub_02086C80
    // b _02086D82
    // cmp r0, #2
    // bne _02086D32
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #2
    // bl ManagedSprite_SetAnim
    // mov r0, #0xdf
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // sub r2, r6, #1
    // bl sub_02086C80
    // b _02086D82
    // cmp r0, #0xa
    // bne _02086D82
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #0xdf
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // add r2, r6, #0
    // bl sub_02086C80
    // mov r0, #0x9a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r0, #1
    // mov r0, #0x9a
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // b _02086D82
    // mov r0, #0x9d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #0xdf
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // add r2, r6, #0
    // bl sub_02086C80
    // mov r0, #0x9a
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, [sp]
    // add r5, r5, #4
    // add r0, r0, #1
    // add r4, #0x1c
    // str r0, [sp]
    // cmp r0, #2
    // blt _02086C96
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02086D94: .word 0x0000036E
    // TODO: decompile
}



void sub_02086D98(void) {
    // add r0, r2, r0
}



void sub_02086DA4(void) {
    // ldr r1, [r0, r1]
    // ldr r5, [r0, r7]
    // ldr r5, [r0, r6]
    *((u32*)(r0 + 8)) = 1;
    *((u32*)(r0 + 8)) = 0;
    // ldr r5, [r0, r5]
    // add r4, #0x1c
}



void sub_02086DE4(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // ldr r0, [r0, r1]
    // ldr r0, [sp]
    // str r4, [sp, #8]
    // add r2, r0, r2
    // sub r0, #0x34
    // ldrsh r5, [r2, r0]
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    // ldr r7, [sp]
    // ldr r1, [sp]
    // ldr r0, [r1, r0]
    // ldr r1, [r2, r1]
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
    ManagedSprite_GetPositionXY(*((u32*)(r7 + 0xc)), (0x2e << 4), ((0xb5 << 2) - 4));
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    // ldrsh r2, [r3, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r7 + 0xc)), r5, 0);
    // add r1, sp, #0xc
    // ldrsh r0, [r1, r0]
    // sub r1, r5, r0
    // add r0, r1, r0
    // asr r0, r0, #1
    *((u16*)(r7 + 0x14)) = (r1 >> 0x1f);
    *((u16*)(r7 + 0x16)) = 0;
    *((u8*)(r7 + 0x18)) = 2;
    *((u8*)(r7 + 0x19)) = 0;
    // ldr r0, [r6, r0]
    // ldr r1, [sp]
    // ldr r1, [r1, r0]
    // ldr r0, [sp, #8]
    // add r1, sp, #0xc
    // ldr r0, [r6, r0]
    // add r1, #2
    // add r2, sp, #0xc
    ManagedSprite_GetPositionXY((0x73 << 2));
    // ldr r1, [sp]
    // ldr r0, [r1, r0]
    // ldr r1, [r2, r1]
    // add r5, #8
    // asr r5, r0, #0x10
    // add r5, #0x14
    // asr r5, r0, #0x10
    // add r5, #8
    // asr r5, r0, #0x10
    // ldr r0, [sp, #4]
    // add r3, sp, #0xc
    // ldrsh r2, [r3, r2]
    // ldr r0, [r6, r0]
    ManagedSprite_SetPositionXY((0x73 << 2), r5, 0);
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
    // ldr r0, [r1, r0]
    // add r7, #0x1c
}



void sub_02086F44(void) {
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // ldr r0, [r6, r0]
    // str r0, [sp]
    // str r0, [sp]
    // add r2, sp, #4
    // add r1, sp, #4
    // add r2, #2
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0xc)));
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // sub r1, r0, r7
    // strb r1, [r0]
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // ldr r0, [sp]
    // sub r1, r1, r0
    *((u8*)(*((u32*)(r5 + 0x10)) + 2)) = r1;
    // add r1, sp, #4
    // ldrsh r0, [r1, r0]
    // add r1, r0, r7
    *((u8*)(*((u32*)(r5 + 0x10)) + 1)) = r1;
    // add r1, sp, #4
    // ldrsh r1, [r1, r0]
    // ldr r0, [sp]
    // add r1, r1, r0
    // add r5, #0x1c
    *((u8*)(*((u32*)(r5 + 0x10)) + 3)) = r1;
    // ldr r0, [r6, r0]
}



void sub_02086FCC(void) {
    FontSystem_NewInit(2, 0x6c);
    // str r0, [r4, r1]
    FontID_Alloc(2, 0x6c);
}



void sub_02086FE8(void) {
    FontID_Release(2);
    // ldr r0, [r4, r0]
    FontOAM_Delete((0xdf << 2));
    // add r0, r4, r0
    sub_02021B5C((0xe1 << 2));
    // ldr r0, [r4, r0]
    FontOAM_Delete((0xe << 6));
    // add r0, r4, r0
    sub_02021B5C((0x39 << 4));
    // ldr r0, [r4, r0]
    sub_020135AC((0xde << 2));
}



void sub_02087028(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r3, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // ldr r4, _02087060 ; =0x000003EB
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // add r2, r4, #0
    // str r4, [sp, #0x14]
    // sub r0, #0xef
    // sub r2, #0xfb
    // sub r4, #0xf7
    // ldr r0, [r3, r0]
    // ldr r2, [r3, r2]
    // ldr r3, [r3, r4]
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBuffer
    // add sp, #0x18
    // pop {r4, pc}
    // nop
    // _02087060: .word 0x000003EB
    // TODO: decompile
}



void sub_02087064(void) {
    sub_02087028();
    // str r1, [sp]
    sub_02087090(r4, 0, 0x4e, 0xa5);
    // str r0, [sp]
    sub_02087090(r4, 1, 0xac, 0xa5);
}



void sub_02087090(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x5c
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0x26
    // mov r3, #0x6c
    // bl NewMsgDataFromNarc
    // add r1, r4, #2
    // str r0, [sp, #0x14]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x18]
    // add r0, sp, #0x1c
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0xbe
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, sp, #0x1c
    // mov r2, #0xa
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // ldr r1, [sp, #0x18]
    // mov r0, #2
    // mov r2, #0
    // mov r3, #0x50
    // bl FontID_String_GetCenterAlignmentX
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _020871BC ; =0x000F0D02
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, sp, #0x1c
    // mov r1, #2
    // bl AddTextPrinterParameterizedWithColor
    // add r0, sp, #0x1c
    // mov r1, #1
    // mov r2, #0x6c
    // bl sub_02013688
    // mov r3, #0xe1
    // lsl r3, r3, #2
    // mov r1, #0xc
    // add r6, r4, #0
    // mul r6, r1
    // mov r1, #1
    // add r3, r5, r3
    // add r2, r1, #0
    // add r3, r3, r6
    // bl sub_02021AC8
    // add r0, r4, #0
    // add r0, #0x1a
    // lsl r0, r0, #2
    // add r3, r5, r0
    // ldr r0, _020871C0 ; =0x00000306
    // add r2, r0, #1
    // ldrb r1, [r3, r0]
    // ldrb r2, [r3, r2]
    // add r2, r1, r2
    // lsr r1, r2, #0x1f
    // add r1, r2, r1
    // lsl r1, r1, #0xf
    // asr r7, r1, #0x10
    // sub r1, r0, #2
    // ldrb r2, [r3, r1]
    // sub r1, r0, #1
    // ldrb r1, [r3, r1]
    // add r2, r2, r1
    // lsr r1, r2, #0x1f
    // add r1, r2, r1
    // lsl r1, r1, #0xf
    // asr r1, r1, #0x10
    // str r1, [sp, #0x10]
    // add r1, r0, #0
    // add r1, #0x72
    // ldr r1, [r5, r1]
    // sub r0, #0x12
    // str r1, [sp, #0x2c]
    // add r1, sp, #0x1c
    // str r1, [sp, #0x30]
    // ldr r0, [r5, r0]
    // bl SpriteManager_GetSpriteList
    // mov r1, #0xbd
    // lsl r1, r1, #2
    // str r0, [sp, #0x34]
    // ldr r0, [r5, r1]
    // add r1, #0xf7
    // bl SpriteManager_FindPlttResourceProxy
    // str r0, [sp, #0x38]
    // mov r1, #0
    // mov r0, #0xe2
    // str r1, [sp, #0x3c]
    // add r2, r5, r6
    // lsl r0, r0, #2
    // ldr r2, [r2, r0]
    // sub r0, #0xc
    // add r5, r5, r0
    // sub r7, #0x28
    // str r2, [sp, #0x40]
    // lsl r2, r7, #0x10
    // asr r2, r2, #0x10
    // str r2, [sp, #0x44]
    // ldr r2, [sp, #0x10]
    // lsl r4, r4, #2
    // sub r2, r2, #7
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // str r1, [sp, #0x4c]
    // str r1, [sp, #0x50]
    // mov r1, #1
    // str r1, [sp, #0x54]
    // mov r1, #0x6c
    // str r2, [sp, #0x48]
    // str r1, [sp, #0x58]
    // add r0, sp, #0x2c
    // bl sub_020135D8
    // str r0, [r5, r4]
    // ldr r0, [r5, r4]
    // ldr r1, [sp, #0x70]
    // bl sub_020138E0
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // ldr r0, [sp, #0x14]
    // bl DestroyMsgData
    // add r0, sp, #0x1c
    // bl RemoveWindow
    // add sp, #0x5c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _020871BC: .word 0x000F0D02
    // _020871C0: .word 0x00000306
    // TODO: decompile
}



void sub_020871C4(void) {
    InitWindow(r1);
    // ldr r0, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x10]
    AddWindowParameterized(r7, r5, ((r4 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18));
    DrawFrameAndWindow2(r5, 1, 1, 0xb);
    FillWindowPixelBuffer(r5, 0xf);
    CopyWindowToVram(r5);
    // ldr r1, [sp, #0x38]
    sub_02087230(r5);
}



void sub_02087230(void) {
    FillWindowPixelBuffer(0xf);
    NewMsgDataFromNarc(0, 0x1b, 0x26, 0x6c);
    NewString_ReadMsgData(r5);
    FillWindowPixelBuffer(r4, 0xf);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    AddTextPrinterParameterized(r4, 1, r5, 0);
    CopyWindowToVram(r4);
    String_Delete(r5);
    DestroyMsgData(r6);
}


