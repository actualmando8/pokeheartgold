/* Decompiled from asm/overlay_115.s */
#include "global.h"

void ov115_0225F020(void) {
    // strh r6, [r5]
    // ldr r7, [sp, #0x28]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // add r4, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // add r4, #0x14
}




void ov115_0225F09C(void) {
}




void ov115_0225F0B4(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // ldrsh r1, [r1, r0]
    // ldr r2, [sp]
    // str r1, [sp, #4]
    // ldrsh r1, [r2, r1]
    // ldr r1, [sp]
    // strh r2, [r1]
    // ldr r1, [sp, #4]
    // ldrsh r1, [r2, r1]
    // ldr r1, [sp]
    // strh r2, [r1]
    // ldrsh r0, [r1, r0]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldrsh r0, [r0, r1]
    // ldr r7, [sp]
    // ldr r6, [sp]
    // add r7, #0x14
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // add r1, sp, #0xc
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // ldrsh r0, [r1, r0]
    // add r7, #0x14
    // add r6, #0x14
    // ldr r0, [sp, #4]
}




void ov115_0225F158(void) {
    // str r0, [sp]
    // ldr r2, [sp]
}




void ov115_0225F1BC(void) {
    // str r0, [sp]
    // ldr r2, [sp]
}




void ov115_0225F220(void) {
    // add r2, r1, r1
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225F240: ; jump table
    Heap_Alloc(r1, (0xa6 << 2), (*((u16*)(r2 + 6)) << 0x10));
    *((u32*)(r5 + 0xc)) = r0;
    memset(0, (0xa6 << 2));
    // str r0, [sp]
    // str r7, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(*((u32*)(r5 + 0x20)), 0x10, 0, 0x40);
    GfGfx_EngineATogglePlanes(4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(*((u32*)(r5 + 0x10)) + 8)), (0x9f << 2), 2, 0);
    // add r0, r4, r0
    FillWindowPixelBuffer((0x9f << 2), 0);
    ov115_0225F1BC(*((u32*)(*((u32*)(r5 + 0x10)) + 0xc)), r7);
    // str r0, [sp, #0x14]
    ov115_0225F158(*((u32*)(r6 + 4)), r7);
    // str r0, [sp, #0x14]
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // add r0, r4, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((0x9f << 2), 0, 0);
    // ldr r0, [sp, #0x14]
    String_Delete();
    // add r0, #0x44
    ov01_021F05C4(r4, 8, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, #0x44
    // str r0, [sp, #8]
    // add r2, r4, r2
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov01_021F0614(*((u32*)(r5 + 0x20)), r4, (6 << 6), *((u8*)(r6 + 0xc)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x44
    // add r2, r4, r2
    ov01_021F0614(*((u32*)(r5 + 0x20)), r4, (0x6d << 2), 0x3b);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x44
    // add r1, r4, r1
    ov01_021F0718(r4, (6 << 6), (0x11 << 0x10), (0x42 << 0xc));
    // str r0, [r4, r1]
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x7a << 2))), 0);
    // str r0, [sp]
    // add r0, r4, r2
    // sub r2, #0x38
    // add r1, #0x44
    // add r2, r4, r2
    // str r7, [sp, #4]
    ov115_0225F020((0x4a << 0xc), r4, (0x7b << 2), (0x12 << 0xe));
    // str r0, [sp]
    ov115_02260254(*((u32*)(r4 + (0x7a << 2))), r7, *((u8*)(r6 + 0xc)), 0xe);
    ov01_021F0B44();
    *((u32*)(r4 + 0x40)) = r0;
    // str r0, [r5]
    // str r0, [sp]
    ov01_021EFCF8(1, 0x10, 0x10, (r5 + 4));
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov01_021F0454(*((u32*)(r5 + 0x20)), *((u8*)(r6 + 0x12)), *((u8*)(r6 + 0x11)), *((u8*)(r6 + 0x10)));
    // str r1, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    ov01_021F0B78(r5, *((u32*)(r4 + 0x40)), 6, 8);
    SetBgPriority(2, 0);
    SetBgPriority(3, 1);
    SetBgPriority(0, 2);
    GfGfx_EngineATogglePlanes(8, 1);
    GfGfx_EngineATogglePlanes(2, 0);
    // str r0, [r5]
    ov01_021EFE30((*((u32*)r5) + 1));
    // str r0, [r5]
    ov01_021F0B5C(*((u32*)(r4 + 0x40)));
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    GfGfx_EngineATogglePlanes(0x10, 1);
    // add r0, r4, r0
    ov115_0225F0B4((0x7b << 2));
    // str r0, [r5]
    // str r0, [sp]
    ov01_021EFEC8(r4, (0x11 << 0x10), *((u32*)r6), 0xFFFC0000);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x7a << 2))), 1);
    Sprite_SetPriority(*((u32*)(r4 + (0x7a << 2))), 1);
    // add r0, sp, #0x1c
    ov01_021F074C(*((u32*)r4), (0x42 << 0xc), 0);
    // add r1, sp, #0x1c
    Sprite_SetMatrix(*((u32*)(r4 + (0x7a << 2))));
    // str r0, [r5]
    ov01_021EFF28(r4);
    // add r0, sp, #0x1c
    ov01_021F074C(*((u32*)r4), (0x42 << 0xc), 0);
    // add r1, sp, #0x1c
    Sprite_SetMatrix(*((u32*)(r4 + (0x7a << 2))));
    // str r0, [r5]
    // add r0, #0x18
    ov01_021EFE34(r4, 0, 0x10, 3);
    // str r1, [r4, r0]
    // str r0, [r5]
    // str r1, [r4, r0]
    // add r0, #0x18
    ov01_021EFE44(r4, (*((u32*)(r4 + (0xa5 << 2))) - 1));
    // str r0, [sp, #0x18]
    // add r0, #0x18
    ov01_021F0DC8(r4);
    // ldr r0, [sp, #0x18]
    // str r3, [sp]
    ov115_02260254(*((u32*)(r4 + (0x7a << 2))), r7, *((u8*)(r6 + 0xc)), 0);
    // mvn r0, r0
    SetBlendBrightness(0xd, 0x21, 1);
    // asr r3, r3, #0xc
    // sub r3, #0x5c
    // neg r3, r3
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + 0x10)) + 8)), 2, 0, *((u32*)r4));
    GfGfx_EngineATogglePlanes(4, 1);
    // str r0, [r5]
    // add r0, #0x18
    ov01_021EFE34(r4, 0x10, 0, 3);
    // str r0, [r5]
    // add r0, #0x18
    ov01_021EFE44(r4);
    // add r0, #0x18
    ov01_021F0DC8(r4);
    // str r0, [r5]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r0, [r5]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0x00007FFF);
    // str r0, [r5]
    IsPaletteFadeFinished((*((u32*)r5) + 1));
    // str r0, [r5]
    sub_0200FBF4(1, 0x00007FFF);
    // str r0, [r1]
    Sprite_Delete(*((u32*)(r4 + (0x7a << 2))), *((u32*)(r5 + 0x14)));
    // add r0, r4, r0
    ov115_0225F09C((0x7b << 2));
    // add r0, #0x44
    // add r1, r4, r1
    ov01_021F06EC(r4, (6 << 6));
    // add r0, #0x44
    // add r1, r4, r1
    ov01_021F06EC(r4, (0x6d << 2));
    // add r0, #0x44
    ov01_021F05F4(r4);
    // add r0, r4, r0
    RemoveWindow((0x9f << 2));
    // and r0, r1
    // str r0, [r2]
    SetBlendBrightness(0, 0, 1);
    BgSetPosTextAndCommit(*((u32*)(*((u32*)(r5 + 0x10)) + 8)), 2, 0, 0);
    ScheduleSetBgPosText(*((u32*)(*((u32*)(r5 + 0x10)) + 8)), 3, 0, *((u32*)(r4 + ((0xa3 << 2) + 4))));
    // add r0, #0x1e
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [r4, r3]
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x44)), (*((u32*)(r4 + (0x29 << 4))) << 0x17), (*((u32*)(r4 + (0x29 << 4))) >> 0x1f), (0x29 << 4));
}




void ov115_0225F704(void) {
    ov115_0225F220(r1, 4, ov115_022603B0);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F728(void) {
    ov115_0225F220(r1, 4, ov115_022603C4);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F74C(void) {
    ov115_0225F220(r1, 4, ov115_022603D8);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F770(void) {
    ov115_0225F220(r1, 4, ov115_022603EC);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F794(void) {
    ov115_0225F220(r1, 4, ov115_02260400);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F7B8(void) {
    ov115_0225F220(r1, 4, ov115_02260414);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F7DC(void) {
    ov115_0225F220(r1, 4, ov115_02260428);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F800(void) {
    ov115_0225F220(r1, 4, ov115_0226043C);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F824(void) {
    ov115_0225F220(r1, 4, ov115_02260450);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F848(void) {
    ov115_0225F220(r1, 4, ov115_02260464);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F86C(void) {
    ov115_0225F220(r1, 4, ov115_02260478);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F890(void) {
    ov115_0225F220(r1, 4, ov115_0226048C);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F8B4(void) {
    ov115_0225F220(r1, 4, ov115_022604A0);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F8D8(void) {
    ov115_0225F220(r1, 4, ov115_022604B4);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F8FC(void) {
    ov115_0225F220(r1, 4, ov115_022604C8);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F920(void) {
    ov115_0225F220(r1, 4, ov115_022604DC);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F944(void) {
    ov115_0225F220(r1, 4, _02260374);
    ov01_021EFCDC(r4, r5);
}




void ov115_0225F968(void) {
}




void ov115_0225F978(void) {
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    _0226021C(*((u32*)r0));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225F99A: ; jump table
    Heap_Alloc(r1, (0xc5 << 2));
    *((u32*)(r6 + 0xc)) = r0;
    memset(0, (0xc5 << 2));
    // add r0, #0x5c
    ov01_021F05C4(*((u32*)(r6 + 0xc)), 0xa, 4);
    ov115_0225F968(*((u32*)(r6 + 0x10)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xc6
    // add r1, #0x5c
    // add r2, r4, r2
    ov01_021F0614(*((u32*)(r6 + 0x20)), r4, 0xd2, 0xcf);
    // str r1, [r4, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xc2
    // add r1, #0x5c
    // add r2, r4, r2
    ov01_021F0614(*((u32*)(r6 + 0x20)), r4, 0xd6, 0xd3);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x5c
    // add r2, r4, r2
    ov01_021F0614(*((u32*)(r6 + 0x20)), r4, (0x73 << 2), *((u16*)((0xc1 << 2) + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r3, [sp, #0x18]
    // add r1, #0x5c
    // add r2, r4, r2
    ov01_021F0614(*((u32*)(r6 + 0x20)), r4, (2 << 8), *((u8*)(r3 + 2)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x5c
    // add r2, r4, r2
    ov01_021F0614(*((u32*)(r6 + 0x20)), r4, (0x8d << 2), 0x3b);
    // str r0, [r6]
    // add r0, sp, #0x2c
    ov01_021F074C((*((u32*)r6) + 1), (2 << 0xc), (2 << 0xc), 0);
    // add r0, r4, r0
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #0x5c
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // add r1, r0, r2
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    ov01_021F0718(0, (0 - 1), 0, 0);
    // str r0, [r5, r1]
    Sprite_SetDrawFlag(*((u32*)(r5 + (0x9a << 2))), 0);
    // ldr r1, [sp, #0x20]
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + (0x9a << 2))));
    Sprite_SetPriority(*((u32*)(r5 + (0x9a << 2))), 1);
    // ldr r0, [sp, #0x1c]
    // add r0, #0x34
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // add r2, #0xa0
    // ldr r1, [sp, #0x14]
    ov115_02260254(*((u32*)(r4 + (0x9a << 2))), *((u32*)(r4 + (0x9a << 2))), 0xe);
    // str r0, [sp]
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    ov115_02260254(*((u32*)(r4 + (0x9b << 2))), *((u16*)r2), 0xe);
    GfGfx_EngineATogglePlanes(0x10, 1);
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // add r0, r4, r2
    // sub r2, #0x5c
    // add r1, #0x5c
    // add r2, r4, r2
    ov115_0225F020((6 << 0x10), r4, (0x29 << 4), (2 << 0x12));
    ov01_021F0DDC(*((u32*)(r6 + 0x10)));
    // str r0, [r6]
    // str r0, [sp]
    ov01_021EFCF8(1, 0x10, 0x10, (r6 + 4));
    *((u32*)(r6 + 8)) = 0;
    // str r0, [r6]
    *((u32*)(r6 + 8)) = (*((u32*)(r6 + 8)) + 1);
    ov01_021F0E74((*((u32*)(r6 + 8)) + 1));
    // str r0, [r6]
    ov01_021F0E90((*((u32*)r6) + 1));
    ov01_021F0F08(*((u32*)(r6 + 0x20)), 0x97);
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 1, 0x1e, 0);
    // str r0, [r6]
    // str r0, [sp]
    ov01_021EFEC8(r4, 0xFFF80000, (0xe << 0xe), (5 << 0x10));
    // add r0, sp, #0x38
    ov01_021F074C(*((u32*)r4), (0x17 << 0xe), 0);
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x9a << 2))));
    // ldr r1, [sp, #0x3c]
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x27 << 4))));
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x9a << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x27 << 4))), 1);
    // str r1, [sp]
    // add r0, #0x30
    ov01_021EFEC8(r4, (6 << 0x12), (0x32 << 0xe), 0xFFFB0000);
    // add r0, sp, #0x38
    ov01_021F074C(*((u32*)(r4 + 0x30)), (0x17 << 0xe), 0);
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x9b << 2))));
    // ldr r1, [sp, #0x3c]
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // sub r0, r1, r0
    // str r0, [sp, #0x38]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x9d << 2))));
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x9b << 2))), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + (0x9d << 2))), 1);
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(*((u32*)(r6 + 0x20)), 0x10, 0, 0x40);
    GfGfx_EngineATogglePlanes(4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, r4, r1
    AddWindowParameterized(*((u32*)(*((u32*)(r6 + 0x10)) + 8)), (0xbd << 2), 2, 0x15);
    // add r0, r4, r0
    FillWindowPixelBuffer((0xbd << 2), 0);
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    ov115_0225F158(*((u16*)(r0 + 6)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r0
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor((0xbd << 2), 0, r0, 0);
    String_Delete(r5);
    *((u32*)(r6 + 4)) = 3;
    // str r0, [r6]
    *((u32*)(r6 + 4)) = (*((u32*)(r6 + 4)) - 1);
    ov01_021F0FB8(3);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(4, 1);
    // add r0, r4, r0
    ov115_0225F0B4((0x29 << 4));
    ov01_021EFF28(r4);
    // add r0, sp, #0x38
    ov01_021F074C(*((u32*)r4), (0x17 << 0xe), 0);
    // add r5, sp, #0x38
    // add r3, r4, r2
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, #0x10
    // str r0, [r3]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x9e << 2))), (0x9e << 2));
    // ldr r1, [sp, #0x3c]
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x27 << 4))));
    // add r0, #0x30
    ov01_021EFF28(r4);
    // add r0, sp, #0x38
    ov01_021F074C(*((u32*)(r4 + 0x30)), (0x17 << 0xe), 0);
    // add r5, sp, #0x38
    // add r3, r4, r2
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, #0x18
    // str r0, [r3]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0xa1 << 2))), (0xa1 << 2));
    // ldr r1, [sp, #0x3c]
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // sub r0, r1, r0
    // str r0, [sp, #0x38]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x9d << 2))));
    // str r0, [r6]
    // add r0, r4, r0
    ov115_0225F0B4((0x29 << 4));
    ov01_021F1044();
    // add r0, #0x48
    ov01_021EFE34(r4, 0, 0x10, 3);
    ov01_021F1060();
    // str r0, [r6]
    // add r0, #0x48
    ov01_021EFE44(r4);
    // add r0, #0x48
    ov01_021F0DC8(r4);
    // str r3, [sp]
    // add r2, #0xa0
    // ldr r1, [sp, #0x14]
    ov115_02260254(*((u32*)(r4 + (0x9a << 2))), *((u32*)(r4 + (0x9a << 2))), 0);
    // ldr r2, [sp, #0x18]
    // str r3, [sp]
    // ldr r1, [sp, #0x14]
    ov115_02260254(*((u32*)(r4 + (0x9b << 2))), *((u16*)r2), 0);
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + (0x27 << 4))), 1);
    Sprite_SetAnimSpeed(*((u32*)(r4 + (0x27 << 4))), (2 << 0xc));
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + (0x9d << 2))), 1);
    Sprite_SetAnimSpeed(*((u32*)(r4 + (0x9d << 2))), (2 << 0xc));
    ov01_021F0F08(*((u32*)(r6 + 0x20)), 0x98);
    // str r0, [r6]
    // add r0, #0x48
    ov01_021EFE34(r4, 0x10, 0, 6);
    ov01_021F0FB8(4);
    SetBgPriority(0, 1);
    // str r0, [r6]
    // add r0, #0x48
    ov01_021EFE44(r4);
    // add r0, #0x48
    ov01_021F0DC8(r4);
    // str r0, [r6]
    *((u32*)(r6 + 4)) = 8;
    *((u32*)(r6 + 4)) = (*((u32*)(r6 + 4)) - 1);
    // str r0, [sp]
    ov01_021EFEC8(r4, 0, 0xFFFFE000, 0);
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // add r0, #0x18
    ov01_021EFEC8(r4, 0, 0xFFFFE000, 0);
    *((u32*)(r6 + 4)) = 0;
    // str r0, [r6]
    *((u32*)(r6 + 4)) = (*((u32*)(r6 + 4)) + 1);
    ov01_021EFF28(r4);
    // add r0, #0x18
    ov01_021EFF28(r4);
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, sp, #0x38
    // add r1, r3, r1
    // add r2, r3, r2
    ov01_021F074C(0x1f, *((u32*)r4), *((u32*)(r4 + 0x18)), 0);
    // sub r1, r3, r1
    // sub r2, r3, r2
    ov01_021F074C(*((u32*)r4), *((u32*)(r4 + 0x18)), 0);
    // add r3, sp, #0x38
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x9a << 2))));
    // ldr r1, [sp, #0x3c]
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x27 << 4))));
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // add r0, sp, #0x38
    // sub r1, r3, r1
    // sub r2, r3, r2
    ov01_021F074C(0x1f, *((u32*)r4), *((u32*)(r4 + 0x18)), 0);
    // add r1, r3, r1
    // add r2, r3, r2
    ov01_021F074C(*((u32*)r4), *((u32*)(r4 + 0x18)), 0);
    // add r3, sp, #0x38
    // add r2, r4, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x9b << 2))));
    // ldr r1, [sp, #0x3c]
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // sub r0, r1, r0
    // str r0, [sp, #0x38]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x9d << 2))));
    // str r0, [r6]
    GfGfx_EngineATogglePlanes(4, 0);
    // str r0, [sp]
    ov01_021EFEC8(r4, 0, (3 << 0x12), ((3 << 0x12) >> 3));
    // str r0, [sp]
    // add r0, #0x18
    ov01_021EFEC8(r4, 0, (3 << 0x12), ((3 << 0x12) >> 3));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0x00007FFF);
    ov01_021EFF28(r4);
    // add r0, #0x18
    ov01_021EFF28(r4);
    // sub r1, r3, r1
    // add r0, sp, #0x38
    // sub r2, r3, r2
    ov01_021F074C(*((u32*)r4), *((u32*)(r4 + 0x18)), 0);
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x9a << 2))));
    // ldr r1, [sp, #0x3c]
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x27 << 4))));
    // add r1, r3, r1
    // add r0, sp, #0x38
    // add r2, r3, r2
    ov01_021F074C(*((u32*)r4), *((u32*)(r4 + 0x18)), 0);
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x9b << 2))));
    // ldr r1, [sp, #0x3c]
    // add r1, r1, r0
    // str r1, [sp, #0x3c]
    // ldr r1, [sp, #0x38]
    // sub r0, r1, r0
    // str r0, [sp, #0x38]
    // add r1, sp, #0x38
    Sprite_SetMatrix(*((u32*)(r4 + (0x9d << 2))));
    IsPaletteFadeFinished();
    // str r0, [r6]
    sub_0200FBF4(1, 0x00007FFF);
    // str r0, [r1]
    // add r0, r4, r0
    ov115_0225F09C((0x29 << 4), *((u32*)(r6 + 0x14)));
    // add r0, r4, r0
    RemoveWindow((0xbd << 2));
    Sprite_Delete(*((u32*)(r4 + (0x9a << 2))));
    // add r5, r4, r0
    // add r7, #0x5c
    ov01_021F06EC(r4, (r5 + 4));
    // add r5, #0x34
    // add r4, #0x5c
    ov01_021F05F4(r4);
    ov01_021F1060();
    ov01_021F0EC0();
    // strh r1, [r0]
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x5c)), 0);
    Thunk_G3X_Reset(*((u32*)r6));
    ov01_021F1008();
    ov01_021F0EAC();
    RequestSwap3DBuffers(0, 0);
}




void ov115_02260254(void) {
    // str r3, [sp, #4]
    // add r2, sp, #8
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #4]
}




void ov115_022602C0(void) {
    ov115_0225F978(r1, 4, ov115_02260388);
    ov01_021EFCDC(r4, r5);
}




void ov115_022602E4(void) {
    ov115_0225F978(r1, 4, ov115_02260390);
    ov01_021EFCDC(r4, r5);
}




void ov115_02260308(void) {
    ov115_0225F978(r1, 4, ov115_02260398);
    ov01_021EFCDC(r4, r5);
}




void ov115_0226032C(void) {
    ov115_0225F978(r1, 4, ov115_022603A0);
    ov01_021EFCDC(r4, r5);
}




void ov115_02260350(void) {
    ov115_0225F978(r1, 4, ov115_022603A8);
    ov01_021EFCDC(r4, r5);
}



