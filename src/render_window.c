/* Decompiled from asm/render_window.s */
#include "global.h"

void sub_0200E398(void) {
    // str r2, [sp]
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x26, 0, r0, r1);
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x26, 1, r5, r4);
}



u8 sub_0200E3D8(void) {
}



void LoadUserFrameGfx1(void) {
    // add r0, sp, #0x10
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x26, 0, r0, r1);
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x26, 0x19, 0, (r4 << 5));
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x26, 4, (r4 << 5));
}



void sub_0200E448(void) {
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // ldr r2, [sp, #0x1c]
    // ldr r5, [sp, #0x40]
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #0x10]
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // str r5, [sp, #0xc]
    // add r2, sp, #0x28
    FillBgTilemapRect(*((u16*)(1 + 0x1c)), (((r2 - 1) << 0x18) >> 0x18));
    // add r1, sp, #0x28
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    FillBgTilemapRect(1, (((*((u16*)(r1 + 0x1c)) + 1) << 0x10) >> 0x10));
    // add r0, sp, #0x28
    // ldr r0, [sp, #0x18]
    // add r0, r0, r1
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x20]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, *((u8*)(r0 + 0x10)), (((r4 + 2) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x28
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(*((u8*)(1 + 0x14)), (((r4 + 3) << 0x10) >> 0x10), ((r6 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, sp, #0x28
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(*((u8*)(1 + 0x14)), (((r4 + 5) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // add r0, sp, #0x28
    // ldr r0, [sp, #0x1c]
    // add r7, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, *((u8*)(r0 + 0x14)), (((r4 + 6) << 0x10) >> 0x10), ((r6 << 0x18) >> 0x18));
    // str r0, [sp]
    // add r0, sp, #0x28
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    FillBgTilemapRect(1, (((r4 + 7) << 0x10) >> 0x10));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x20]
    // str r5, [sp, #0xc]
    // add r4, #8
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
}



void DrawFrameAndWindow1(void) {
    GetWindowBgId();
    // str r0, [sp, #0x10]
    GetWindowX(r5);
    // str r0, [sp, #0x14]
    GetWindowY(r5);
    // str r0, [sp, #0x18]
    GetWindowWidth(r5);
    // str r0, [sp, #0x1c]
    GetWindowHeight(r5);
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x14]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0x18]
    sub_0200E448(*((u32*)r5));
    CopyWindowToVram(r5);
}



void sub_0200E5D4(void) {
    GetWindowBgId();
    // str r0, [sp, #0x10]
    GetWindowX(r5);
    GetWindowY(r5);
    GetWindowWidth(r5);
    // str r0, [sp, #0x14]
    GetWindowHeight(r5);
    // str r1, [sp]
    // ldr r1, [sp, #0x14]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(*((u32*)r5), ((((((r7 - 1) << 0x18) >> 0x18) + 2) << 0x18) >> 0x18), 0, (((r6 - 1) << 0x18) >> 0x18));
    ClearWindowTilemapAndCopyToVram(r5);
}



void sub_0200E63C(void) {
    // add r0, r0, #2
    // bx lr
    // TODO: decompile
}



void sub_0200E640(void) {
    // add r0, #0x1a
}



void LoadUserFrameGfx2(void) {
    // str r0, [sp, #0x10]
    // add r0, sp, #0x18
    sub_0200E63C(*((u8*)(r0 + 0x10)));
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x26, r0, r5);
    sub_0200E640(r7);
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x26, r0, 0, (r4 << 5));
    sub_0200E640(r7);
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x26, r0, 4, (r4 << 5));
}



void sub_0200E6B4(void) {
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // ldr r2, [sp, #0x4c]
    // str r2, [sp, #0x4c]
    // ldr r2, [sp, #0x18]
    // ldr r5, [sp, #0x50]
    // ldr r2, [sp, #0x14]
    // str r2, [sp, #0x28]
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // ldr r3, [sp, #0x28]
    // str r5, [sp, #0xc]
    // add r2, sp, #0x38
    FillBgTilemapRect(*((u16*)(1 + 0x1c)), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x24]
    // add r0, sp, #0x38
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x24]
    // str r5, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, (((*((u16*)((r0 - 1) + 0x1c)) + 1) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // add r0, sp, #0x38
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    FillBgTilemapRect(r7, (((r4 + 2) << 0x10) >> 0x10));
    // add r0, sp, #0x38
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // str r0, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x2c]
    // str r5, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, *((u8*)(r0 + 0x10)), (((r4 + 3) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x20]
    // str r5, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, (((r4 + 4) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x1c]
    // str r5, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, (((r4 + 5) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, (((r4 + 6) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x4c]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, (((r4 + 7) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x4c]
    // ldr r3, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // add r2, #9
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x4c]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // add r2, #0xa
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x4c]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // add r2, #0xb
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r3, [sp, #0x28]
    // add r2, #0xc
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x4c]
    // add r6, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x24]
    // str r5, [sp, #0xc]
    // add r2, #0xd
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // add r0, sp, #0x38
    // add r2, #0xe
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    FillBgTilemapRect(r7, ((r4 << 0x10) >> 0x10));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x2c]
    // str r5, [sp, #0xc]
    // add r2, #0xf
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x20]
    // str r5, [sp, #0xc]
    // add r2, #0x10
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x1c]
    // str r5, [sp, #0xc]
    // add r4, #0x11
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(r7, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
}



void sub_0200E948(void) {
    GetWindowBgId();
    // str r0, [sp, #0x10]
    GetWindowX(r5);
    // str r0, [sp, #0x14]
    GetWindowY(r5);
    // str r0, [sp, #0x18]
    GetWindowWidth(r5);
    GetWindowHeight(r5);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    sub_0200E6B4(*((u32*)r5));
}



void DrawFrameAndWindow2(void) {
    sub_0200E948(r2, r3);
    CopyWindowToVram(r5);
    TextPrinter_SetDownArrowBaseTile(r6);
}



void ClearFrameAndWindow2(void) {
    GetWindowBgId();
    // str r0, [sp, #0x10]
    GetWindowX(r5);
    GetWindowY(r5);
    GetWindowWidth(r5);
    // str r0, [sp, #0x14]
    GetWindowHeight(r5);
    // str r1, [sp]
    // ldr r1, [sp, #0x14]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    FillBgTilemapRect(*((u32*)r5), ((((((r7 - 1) << 0x18) >> 0x18) + 5) << 0x18) >> 0x18), 0, (((r6 - 2) << 0x18) >> 0x18));
    ClearWindowTilemapAndCopyToVram(r5);
}



void sub_0200EA24(void) {
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x14
    *((u16*)(r1 + 0xc)) = r3;
    // add r0, sp, #0x20
    *((u16*)(r1 + 0xe)) = *((u16*)(r0 + 0x10));
    // ldr r2, [sp, #0x34]
    // str r2, [sp, #0x14]
    *((u16*)(r1 + 4)) = *((u16*)(r0 + 0x18));
    *((u16*)(r1 + 6)) = *((u16*)(r0 + 0x1c));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r1, sp, #0x14
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, sp, #0x1c
    BlitBitmapRect4Bit(0, *((u16*)(r0 + 0x28)), r1, r2);
}



void sub_0200EA68(void) {
    // str r2, [sp, #0x24]
    // str r3, [sp, #0x28]
    // str r0, [sp, #0x20]
    BgConfig_GetHeapId(*((u32*)r0));
    // ldr r0, [sp, #0x20]
    GetWindowBgId();
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x30]
    Heap_Alloc(r6);
    // ldr r0, [sp, #0x2c]
    BgGetCharPtr();
    // str r6, [sp]
    // add r3, sp, #0x44
    GfGfxLoader_GetCharData(0x26, r7, 0);
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x44]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // add r0, #0xa
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x24]
    // add r0, #0xb
    // str r0, [sp, #0x40]
    // ldr r1, [sp, #0x3c]
    // add r0, r5, r6
    // add r1, r4, r1
    memcpy(((*((u32*)(r0 + 0x14)) << 5) << 5), 0x20);
    // ldr r1, [sp, #0x40]
    // add r0, #0x20
    // add r0, r5, r0
    // add r1, r4, r1
    memcpy(r6, 0x20);
    // ldr r1, [sp, #0x3c]
    // add r0, #0x40
    // add r0, r5, r0
    // add r1, r4, r1
    memcpy(r6, 0x20);
    // ldr r1, [sp, #0x40]
    // add r6, #0x60
    // add r0, r5, r6
    // add r1, r4, r1
    memcpy(0x20);
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0x50
    // ldr r0, [sp, #0x28]
    // sub r4, r3, r2
    // mul r0, r4
    // sub r3, r3, r1
    // str r0, [sp]
    // str r5, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r4, [sp, #0x10]
    // str r4, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x38]
    sub_0200EA24(((((r7 + 1) << 0x18) << 0x18) >> 0x18), *((u8*)(r1 + 0x10)), *((u8*)(r1 + 0x14)), ((0x10 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x30]
    // add r0, #0x12
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x2c]
    BG_LoadCharTilesData(*((u32*)r0), r5);
    // ldr r0, [sp, #0x34]
    Heap_Free();
    Heap_Free(r5);
}



void sub_0200EB68(void) {
}



void sub_0200EB80(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, sp, #0x18
    sub_0200E63C(*((u8*)(r0 + 0x10)));
    // ldr r0, [sp, #0x2c]
    // str r0, [sp]
    // add r3, sp, #0x10
    GfGfxLoader_GetCharData(0x26, r0, 0);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    Heap_Alloc((9 << 6));
    // ldr r1, [sp, #0x10]
    memcpy(*((u32*)(r1 + 0x14)), (9 << 6));
    // ldrb r2, [r4, r3]
    // and r2, r1
    // orr r2, r6
    // strb r2, [r4, r3]
    // str r7, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    BG_LoadCharTilesData((9 << 6), 0xf, r4, (9 << 6));
    // ldr r0, [sp, #0xc]
    Heap_Free();
    Heap_Free(r4);
}



void sub_0200EC0C(void) {
    // str r0, [sp, #0x10]
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r4, [sp, #0x38]
    // str r1, [sp, #8]
    // ldr r2, [sp, #0x10]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x24, 0, r1);
    AllocAndReadWholeNarcMemberByIdPair(0x24, 1, r4);
    // add r1, sp, #0x18
    // str r0, [sp, #0x14]
    NNS_G2dGetUnpackedPaletteData();
    // add r2, sp, #0x20
    // ldr r1, [sp, #0x18]
    // add r1, r1, r2
    BG_LoadPlttData(r6, *((u32*)(r1 + 0xc)), 0x20, ((r7 << 0x15) >> 0x10));
    // ldr r1, [sp, #0x14]
    Heap_FreeExplicit(r4);
    // add r0, sp, #0x20
    // add r5, #0x1e
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // str r4, [sp, #4]
    sub_0200EC84(*((u16*)(r0 + 0x14)), r6, ((r5 << 0x10) >> 0x10), *((u8*)(r0 + 0x10)));
}



void sub_0200EC84(void) {
    // ldr r1, [sp, #0x20]
    // add r1, #0x21
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x24, (((r1 + 2) << 0x10) >> 0x10), r0, r1);
}



void sub_0200ECBC(void) {
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // ldr r2, [sp, #0x1c]
    // ldr r6, [sp, #0x5c]
    // ldr r2, [sp, #0x18]
    // ldr r5, [sp, #0x60]
    // str r2, [sp, #0x34]
    // sub r2, #9
    // str r2, [sp, #0x34]
    // str r2, [sp]
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // ldr r3, [sp, #0x34]
    // str r5, [sp, #0xc]
    // add r2, sp, #0x48
    // str r0, [sp, #0x10]
    FillBgTilemapRect(*((u16*)(1 + 0x1c)), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x30]
    // sub r0, #8
    // str r0, [sp, #0x30]
    // add r0, sp, #0x48
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x30]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, (((*((u16*)(r0 + 0x1c)) + 1) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // add r0, sp, #0x48
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, (((r4 + 2) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x3c]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x38]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, (((r4 + 3) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x2c]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, (((r4 + 4) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x28]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, (((r4 + 5) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x34]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, (((r4 + 6) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x30]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, (((r4 + 7) << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // str r5, [sp, #0xc]
    // ldr r3, [sp, #0x18]
    // add r2, #8
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, ((r4 << 0x10) >> 0x10), (((r3 - 1) << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r3, [sp, #0x38]
    // str r5, [sp, #0xc]
    // add r2, #9
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r3, [sp, #0x2c]
    // str r5, [sp, #0xc]
    // add r2, #0xa
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r3, [sp, #0x28]
    // str r5, [sp, #0xc]
    // add r2, #0xb
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x1c]
    // add r6, r0, r6
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x34]
    // str r5, [sp, #0xc]
    // add r2, #0xc
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x30]
    // str r5, [sp, #0xc]
    // add r2, #0xd
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x20]
    // str r5, [sp, #0xc]
    // add r2, #0xe
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x38]
    // str r5, [sp, #0xc]
    // add r2, #0xf
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x2c]
    // str r5, [sp, #0xc]
    // add r2, #0x10
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x28]
    // str r5, [sp, #0xc]
    // add r4, #0x11
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    FillBgTilemapRect(1, ((r4 << 0x10) >> 0x10), ((r3 << 0x18) >> 0x18));
}



void sub_0200EF84(void) {
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    GetWindowBgId();
    // str r0, [sp, #0x20]
    GetWindowX(r7);
    // str r0, [sp, #0x18]
    GetWindowY(r7);
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // ldr r2, [sp, #0x24]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    // add r0, r1, r0
    // mul r3, r1
    // ldr r1, [sp, #0x10]
    // add r5, r1, r3
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #0xc]
    // add r2, r4, r5
    // add r3, r3, r4
    // ldr r1, [sp, #0x20]
    FillBgTilemapRect(*((u32*)r7), 6, ((r2 << 0x10) >> 0x10), ((r2 << 0x18) >> 0x18));
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
}



void DrawFrameAndWindow3(void) {
    // str r1, [sp, #0x10]
    GetWindowBgId();
    // str r0, [sp, #0x14]
    // add r0, sp, #0x30
    GetWindowX(r4);
    // str r0, [sp, #0x18]
    GetWindowY(r4);
    // str r0, [sp, #0x1c]
    GetWindowWidth(r4);
    GetWindowHeight(r4);
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    sub_0200ECBC(*((u32*)r4));
    // add r1, #0x1e
    sub_0200EF84(r4, ((r6 << 0x10) >> 0x10), r7);
    GetWindowX(r4);
    // str r0, [sp, #0x20]
    GetWindowY(r4);
    // str r0, [sp, #0x24]
    GetWindowWidth(r4);
    GetWindowHeight(r4);
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x20]
    // ldr r3, [sp, #0x24]
    sub_0200E6B4(*((u32*)r4));
    // ldr r0, [sp, #0x10]
    CopyWindowToVram(r4);
    TextPrinter_SetDownArrowBaseTile(r6);
}



void WaitingIcon_New(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // str r0, [sp, #0x20]
    // ldr r0, [r0]
    // str r1, [sp, #0x24]
    // bl BgConfig_GetHeapId
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x20]
    // bl GetWindowBgId
    // bl BgGetCharPtr
    // add r5, r0, #0
    // ldr r0, [sp, #0x28]
    // ldr r1, _0200F1C4 ; =0x0000048C
    // bl Heap_Alloc
    // ldr r1, [sp, #0x24]
    // add r4, r0, #0
    // ldr r0, _0200F1C8 ; =0x00000404
    // add r1, #0x12
    // lsl r1, r1, #5
    // add r0, r4, r0
    // add r1, r5, r1
    // mov r2, #0x80
    // bl memcpy
    // ldr r0, [sp, #0x28]
    // mov r1, #0x80
    // bl Heap_Alloc
    // ldr r1, [sp, #0x24]
    // mov r2, #0x20
    // add r1, #0xa
    // lsl r1, r1, #5
    // str r1, [sp, #0x2c]
    // add r1, r5, r1
    // add r6, r0, #0
    // bl memcpy
    // ldr r0, [sp, #0x24]
    // mov r2, #0x20
    // add r0, #0xb
    // lsl r7, r0, #5
    // add r0, r6, #0
    // add r0, #0x20
    // add r1, r5, r7
    // bl memcpy
    // ldr r1, [sp, #0x2c]
    // add r0, r6, #0
    // add r0, #0x40
    // add r1, r5, r1
    // mov r2, #0x20
    // bl memcpy
    // add r0, r6, #0
    // add r0, #0x60
    // add r1, r5, r7
    // mov r2, #0x20
    // bl memcpy
    // mov r5, #0
    // add r7, r4, #4
    // lsl r0, r5, #7
    // add r0, r7, r0
    // add r1, r6, #0
    // mov r2, #0x80
    // bl memcpy
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #8
    // blo _0200F12E
    // add r0, r6, #0
    // bl Heap_Free
    // ldr r0, [sp, #0x28]
    // mov r1, #0x17
    // str r0, [sp]
    // mov r0, #0x26
    // mov r2, #0
    // add r3, sp, #0x30
    // bl GfGfxLoader_GetCharData
    // mov r2, #0x80
    // add r5, r0, #0
    // str r2, [sp]
    // add r0, r4, #4
    // str r0, [sp, #4]
    // mov r3, #0x10
    // str r3, [sp, #8]
    // str r2, [sp, #0xc]
    // mov r1, #0
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r2, [sp, #0x1c]
    // ldr r0, [sp, #0x30]
    // add r2, r1, #0
    // ldr r0, [r0, #0x14]
    // bl sub_0200EA24
    // add r0, r5, #0
    // bl Heap_Free
    // ldr r0, [sp, #0x20]
    // ldr r1, _0200F1CC ; =0x00000484
    // str r0, [r4]
    // ldr r0, [sp, #0x24]
    // mov r2, #0
    // strh r0, [r4, r1]
    // add r0, r1, #2
    // strb r2, [r4, r0]
    // add r0, r1, #3
    // ldrb r3, [r4, r0]
    // mov r0, #0x7f
    // bic r3, r0
    // add r0, r1, #3
    // strb r3, [r4, r0]
    // add r0, r1, #4
    // ldrb r3, [r4, r0]
    // mov r0, #3
    // bic r3, r0
    // add r0, r1, #4
    // strb r3, [r4, r0]
    // ldr r0, _0200F1D0 ; =sub_0200F3D0
    // add r1, r4, #0
    // bl SysTask_CreateOnVBlankQueue
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_0200F1D4
    // add r0, r4, #0
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0200F1C4: .word 0x0000048C
    // _0200F1C8: .word 0x00000404
    // _0200F1CC: .word 0x00000484
    // _0200F1D0: .word sub_0200F3D0
    // TODO: decompile
}



void sub_0200F1D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r6, r1, #0
    // bl GetWindowBgId
    // add r4, r0, #0
    // ldr r0, [r5]
    // bl GetWindowX
    // str r0, [sp, #0x18]
    // ldr r0, [r5]
    // bl GetWindowY
    // str r0, [sp, #0x1c]
    // ldr r0, [r5]
    // bl GetWindowWidth
    // str r0, [sp, #0x20]
    // cmp r6, #2
    // bne _0200F2DE
    // ldr r2, _0200F3CC ; =0x00000484
    // add r1, r4, #0
    // ldrh r0, [r5, r2]
    // sub r2, #0x80
    // add r2, r5, r2
    // add r0, #0x12
    // str r0, [sp]
    // ldr r0, [r5]
    // mov r3, #0x80
    // ldr r0, [r0]
    // bl BG_LoadCharTilesData
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // add r7, r0, #2
    // ldr r0, [sp, #0x20]
    // ldr r2, _0200F3CC ; =0x00000484
    // add r6, r1, r0
    // add r0, r6, #1
    // str r0, [sp, #0x14]
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldrh r2, [r5, r2]
    // ldr r0, [r5]
    // ldr r3, [sp, #0x14]
    // add r2, #0xa
    // lsl r2, r2, #0x10
    // lsl r3, r3, #0x18
    // ldr r0, [r0]
    // add r1, r4, #0
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r2, _0200F3CC ; =0x00000484
    // ldr r0, [r5]
    // ldrh r2, [r5, r2]
    // add r6, r6, #2
    // lsl r3, r6, #0x18
    // add r2, #0xb
    // lsl r2, r2, #0x10
    // ldr r0, [r0]
    // add r1, r4, #0
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x14]
    // add r7, r0, #3
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r2, _0200F3CC ; =0x00000484
    // ldr r0, [r5]
    // ldrh r2, [r5, r2]
    // lsl r3, r3, #0x18
    // ldr r0, [r0]
    // add r2, #0xa
    // lsl r2, r2, #0x10
    // add r1, r4, #0
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r2, _0200F3CC ; =0x00000484
    // ldr r0, [r5]
    // ldrh r2, [r5, r2]
    // lsl r3, r6, #0x18
    // ldr r0, [r0]
    // add r2, #0xb
    // lsl r2, r2, #0x10
    // add r1, r4, #0
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // ldr r0, [r5]
    // add r1, r4, #0
    // ldr r0, [r0]
    // bl BgCommitTilemapBufferToVram
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // ldr r3, _0200F3CC ; =0x00000484
    // add r2, r5, #4
    // ldrh r0, [r5, r3]
    // add r3, r3, #3
    // add r1, r4, #0
    // add r0, #0x12
    // str r0, [sp]
    // ldrb r3, [r5, r3]
    // ldr r0, [r5]
    // lsl r3, r3, #0x19
    // lsr r3, r3, #0x19
    // lsl r3, r3, #7
    // add r2, r2, r3
    // ldr r0, [r0]
    // mov r3, #0x80
    // bl BG_LoadCharTilesData
    // cmp r6, #0
    // beq _0200F3C6
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // add r7, r0, #2
    // ldr r0, [sp, #0x20]
    // ldr r2, _0200F3CC ; =0x00000484
    // add r6, r1, r0
    // add r0, r6, #1
    // str r0, [sp, #0x10]
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldrh r2, [r5, r2]
    // ldr r0, [r5]
    // ldr r3, [sp, #0x10]
    // add r2, #0x12
    // lsl r2, r2, #0x10
    // lsl r3, r3, #0x18
    // ldr r0, [r0]
    // add r1, r4, #0
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r2, _0200F3CC ; =0x00000484
    // ldr r0, [r5]
    // ldrh r2, [r5, r2]
    // add r6, r6, #2
    // lsl r3, r6, #0x18
    // add r2, #0x13
    // lsl r2, r2, #0x10
    // ldr r0, [r0]
    // add r1, r4, #0
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x10]
    // add r7, r0, #3
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r2, _0200F3CC ; =0x00000484
    // ldr r0, [r5]
    // ldrh r2, [r5, r2]
    // lsl r3, r3, #0x18
    // ldr r0, [r0]
    // add r2, #0x14
    // lsl r2, r2, #0x10
    // add r1, r4, #0
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // ldr r2, _0200F3CC ; =0x00000484
    // ldr r0, [r5]
    // ldrh r2, [r5, r2]
    // lsl r3, r6, #0x18
    // ldr r0, [r0]
    // add r2, #0x15
    // lsl r2, r2, #0x10
    // add r1, r4, #0
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // ldr r0, [r5]
    // add r1, r4, #0
    // ldr r0, [r0]
    // bl BgCommitTilemapBufferToVram
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0200F3CC: .word 0x00000484
    // TODO: decompile
}



void sub_0200F3D0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, _0200F438 ; =0x00000488
    // ldrb r2, [r1, r0]
    // lsl r2, r2, #0x1e
    // lsr r2, r2, #0x1e
    // beq _0200F3F2
    // cmp r2, #1
    // bne _0200F3EA
    // add r0, r1, #0
    // mov r1, #2
    // bl sub_0200F1D4
    // add r0, r4, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // sub r2, r0, #2
    // ldrb r2, [r1, r2]
    // add r3, r2, #1
    // sub r2, r0, #2
    // strb r3, [r1, r2]
    // ldrb r2, [r1, r2]
    // cmp r2, #0x10
    // bne _0200F434
    // mov r3, #0
    // sub r2, r0, #2
    // strb r3, [r1, r2]
    // sub r2, r0, #1
    // ldrb r2, [r1, r2]
    // mov r4, #0x7f
    // bic r2, r4
    // sub r4, r0, #1
    // ldrb r4, [r1, r4]
    // sub r0, r0, #1
    // lsl r4, r4, #0x19
    // lsr r4, r4, #0x19
    // add r5, r4, #1
    // mov r4, #7
    // and r4, r5
    // lsl r4, r4, #0x18
    // lsr r5, r4, #0x18
    // mov r4, #0x7f
    // and r4, r5
    // orr r2, r4
    // strb r2, [r1, r0]
    // add r0, r1, #0
    // add r1, r3, #0
    // bl sub_0200F1D4
    // pop {r3, r4, r5, pc}
    // nop
    // _0200F438: .word 0x00000488
    // TODO: decompile
}



void sub_0200F43C(void) {
}



void sub_0200F450(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0200F470 ; =sub_0200F43C
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnVWaitQueue
    // ldr r1, _0200F474 ; =0x00000488
    // mov r0, #3
    // ldrb r2, [r4, r1]
    // bic r2, r0
    // mov r0, #1
    // orr r0, r2
    // strb r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _0200F470: .word sub_0200F43C
    // _0200F474: .word 0x00000488
    // TODO: decompile
}



void sub_0200F478(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0200F498 ; =sub_0200F43C
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnVWaitQueue
    // ldr r1, _0200F49C ; =0x00000488
    // mov r0, #3
    // ldrb r2, [r4, r1]
    // bic r2, r0
    // mov r0, #2
    // orr r0, r2
    // strb r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _0200F498: .word sub_0200F43C
    // _0200F49C: .word 0x00000488
    // TODO: decompile
}



void DrawPokemonPicFromSpecies(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r2, [sp, #4]
    // ldr r5, [sp, #0x30]
    // str r3, [sp, #8]
    // add r6, r0, #0
    // add r7, r1, #0
    // str r5, [sp]
    // bl sub_0200F5C4
    // add r4, r0, #0
    // add r1, r5, #0
    // bl sub_0200F600
    // add r0, r4, #0
    // bl sub_0200F62C
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // add r0, r4, #0
    // bl sub_0200F684
    // add r2, sp, #0x10
    // ldrh r1, [r2, #0x18]
    // ldrb r2, [r2, #0x1c]
    // add r0, r4, #0
    // bl sub_0200F6D4
    // add r2, sp, #0x10
    // ldrb r1, [r2, #0x10]
    // ldrh r2, [r2, #0x14]
    // add r0, r4, #0
    // bl sub_0200F82C
    // add r0, r6, #0
    // add r1, r7, #0
    // bl BgCommitTilemapBufferToVram
    // ldr r0, _0200F4F4 ; =0x0000016F
    // add r0, r4, r0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0200F4F4: .word 0x0000016F
    // TODO: decompile
}



void DrawPokemonPicFromMon(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r2, [sp, #4]
    // ldr r5, [sp, #0x2c]
    // str r3, [sp, #8]
    // add r6, r0, #0
    // add r7, r1, #0
    // str r5, [sp]
    // bl sub_0200F5C4
    // add r4, r0, #0
    // add r1, r5, #0
    // bl sub_0200F600
    // add r0, r4, #0
    // bl sub_0200F62C
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // add r0, r4, #0
    // bl sub_0200F684
    // ldr r1, [sp, #0x28]
    // add r0, r4, #0
    // bl sub_0200F714
    // add r2, sp, #0x10
    // ldrb r1, [r2, #0x10]
    // ldrh r2, [r2, #0x14]
    // add r0, r4, #0
    // bl sub_0200F82C
    // add r0, r6, #0
    // add r1, r7, #0
    // bl BgCommitTilemapBufferToVram
    // ldr r0, _0200F548 ; =0x0000016F
    // add r0, r4, r0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0200F548: .word 0x0000016F
    // TODO: decompile
}



void sub_0200F54C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _0200F5C0 ; =0x0000016F
    // add r4, r1, #0
    // ldrb r1, [r4, r0]
    // cmp r1, #1
    // beq _0200F564
    // cmp r1, #2
    // beq _0200F582
    // cmp r1, #3
    // beq _0200F594
    // b _0200F5A8
    // add r0, r4, #0
    // bl sub_0200F9DC
    // mov r0, #0x59
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Sprite_DeleteAndFreeResources
    // add r0, r4, #0
    // bl ov01_021E86F4
    // add r0, r5, #0
    // bl DestroySysTaskAndEnvironment
    // pop {r3, r4, r5, pc}
    // mov r1, #3
    // strb r1, [r4, r0]
    // sub r0, #0xb
    // ldr r0, [r4, r0]
    // mov r1, #1
    // ldr r0, [r0]
    // bl Sprite_SetAnimCtrlSeq
    // b _0200F5A8
    // sub r0, #0xb
    // ldr r0, [r4, r0]
    // ldr r0, [r0]
    // bl Sprite_GetAnimationFrame
    // cmp r0, #6
    // bne _0200F5A8
    // ldr r0, _0200F5C0 ; =0x0000016F
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #0x59
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // ldr r0, [r0]
    // lsl r1, r1, #0xc
    // bl Sprite_UpdateAnim
    // ldr r0, [r4]
    // bl SpriteList_RenderAndAnimateSprites
    // pop {r3, r4, r5, pc}
    // _0200F5C0: .word 0x0000016F
    // TODO: decompile
}



void sub_0200F5C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r7, r3, #0
    // mov r1, #0x17
    // add r6, r2, #0
    // ldr r0, _0200F5F8 ; =sub_0200F54C
    // ldr r3, [sp, #0x18]
    // lsl r1, r1, #4
    // mov r2, #0
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // ldr r1, _0200F5FC ; =0x0000016F
    // mov r2, #0
    // strb r2, [r0, r1]
    // sub r2, r1, #7
    // str r5, [r0, r2]
    // sub r2, r1, #3
    // strb r4, [r0, r2]
    // sub r2, r1, #2
    // strb r6, [r0, r2]
    // sub r1, r1, #1
    // strb r7, [r0, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0200F5F8: .word sub_0200F54C
    // _0200F5FC: .word 0x0000016F
    // TODO: decompile
}



void sub_0200F600(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // ldr r5, _0200F628 ; =_020F5C60
    // add r4, sp, #0
    // add r6, r0, #0
    // add r3, r1, #0
    // add r2, r4, #0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r1, r2, #0
    // add r0, r6, #0
    // mov r2, #1
    // bl ov01_021E8298
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // _0200F628: .word _020F5C60
    // TODO: decompile
}



void sub_0200F62C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // mov r1, #1
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r1, _0200F680 ; =0x00015CD5
    // mov r2, #0x32
    // str r1, [sp, #8]
    // mov r1, #0x26
    // mov r3, #0
    // add r4, r0, #0
    // bl ov01_021E8378
    // ldr r0, _0200F680 ; =0x00015CD5
    // mov r1, #0x26
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #0x30
    // mov r3, #0
    // bl ov01_021E83F0
    // ldr r0, _0200F680 ; =0x00015CD5
    // mov r1, #0x26
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #0x2f
    // mov r3, #0
    // bl ov01_021E8404
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _0200F680 ; =0x00015CD5
    // mov r1, #0x26
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x31
    // mov r3, #0
    // bl ov01_021E8418
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0200F680: .word 0x00015CD5
    // TODO: decompile
}



void sub_0200F684(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // ldr r5, _0200F6D0 ; =_020F5C78
    // add r6, r2, #0
    // add r4, r0, #0
    // add r7, r1, #0
    // add r3, sp, #0
    // mov r2, #6
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0200F694
    // ldr r0, [r5]
    // str r0, [r3]
    // add r0, r7, #5
    // lsl r1, r0, #3
    // add r0, sp, #0
    // strh r1, [r0]
    // add r1, r6, #5
    // lsl r1, r1, #3
    // strh r1, [r0, #2]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl ov01_021E851C
    // mov r1, #0x59
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4]
    // bl SpriteList_RenderAndAnimateSprites
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0200F6D0: .word _020F5C78
    // TODO: decompile
}



void sub_0200F6D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, _0200F710 ; =0x00000162
    // add r4, r1, #0
    // ldrh r0, [r5, r0]
    // add r6, r2, #0
    // bl PokepicManager_Create
    // add r7, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #2
    // bl GetMonSpriteCharAndPlttNarcIdsEx
    // add r0, r5, #0
    // add r1, sp, #0xc
    // bl sub_0200F748
    // add r0, r7, #0
    // bl PokepicManager_Delete
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0200F710: .word 0x00000162
    // TODO: decompile
}



void sub_0200F714(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, _0200F744 ; =0x00000162
    // add r4, r1, #0
    // ldrh r0, [r5, r0]
    // bl PokepicManager_Create
    // add r6, r0, #0
    // add r0, sp, #0
    // add r1, r4, #0
    // mov r2, #2
    // bl GetPokemonSpriteCharAndPlttNarcIds
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_0200F748
    // add r0, r6, #0
    // bl PokepicManager_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0200F744: .word 0x00000162
    // TODO: decompile
}



void sub_0200F748(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // ldr r0, _0200F81C ; =0x00000162
    // add r6, r1, #0
    // mov r1, #0x19
    // ldrh r0, [r5, r0]
    // lsl r1, r1, #8
    // bl Heap_Alloc
    // add r2, sp, #0x18
    // ldr r3, _0200F820 ; =_020F5C50
    // add r4, r0, #0
    // add r7, r2, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r4, [sp]
    // ldr r2, _0200F81C ; =0x00000162
    // ldrh r0, [r6]
    // ldrh r1, [r6, #2]
    // ldrh r2, [r5, r2]
    // add r3, r7, #0
    // bl sub_020143E0
    // ldr r3, _0200F824 ; =_020F5C40
    // add r2, sp, #8
    // add r7, r2, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, #0x32
    // lsl r0, r0, #6
    // add r0, r4, r0
    // str r0, [sp]
    // ldr r2, _0200F81C ; =0x00000162
    // ldrh r0, [r6]
    // ldrh r1, [r6, #2]
    // ldrh r2, [r5, r2]
    // add r3, r7, #0
    // bl sub_020143E0
    // mov r0, #0x13
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r1, _0200F828 ; =0x00015CD5
    // bl SpriteResourceCollection_Find
    // bl sub_0200AF00
    // mov r1, #1
    // str r0, [sp, #4]
    // bl NNS_G2dGetImageLocation
    // mov r1, #0x19
    // add r7, r0, #0
    // add r0, r4, #0
    // lsl r1, r1, #8
    // bl DC_FlushRange
    // mov r2, #0x19
    // add r0, r4, #0
    // add r1, r7, #0
    // lsl r2, r2, #8
    // bl GX_LoadOBJ
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r2, _0200F81C ; =0x00000162
    // ldrh r0, [r6]
    // ldrh r1, [r6, #4]
    // ldrh r2, [r5, r2]
    // bl sub_02014450
    // add r4, r0, #0
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, _0200F828 ; =0x00015CD5
    // bl SpriteResourceCollection_Find
    // ldr r1, [sp, #4]
    // bl SpriteTransfer_GetPaletteProxy
    // mov r1, #1
    // bl NNS_G2dGetImagePaletteLocation
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #0x20
    // bl DC_FlushRange
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0x20
    // bl GX_LoadOBJPltt
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0200F81C: .word 0x00000162
    // _0200F820: .word _020F5C50
    // _0200F824: .word _020F5C40
    // _0200F828: .word 0x00015CD5
    // TODO: decompile
}



void sub_0200F82C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // ldr r3, _0200F9D8 ; =0x0000016E
    // add r5, r0, #0
    // ldrb r0, [r5, r3]
    // add r4, r1, #0
    // sub r1, r3, #2
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // sub r0, r3, #6
    // sub r3, r3, #1
    // ldrb r3, [r5, r3]
    // ldrb r1, [r5, r1]
    // ldr r0, [r5, r0]
    // sub r3, r3, #1
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // add r6, r2, #0
    // bl FillBgTilemapRect
    // ldr r3, _0200F9D8 ; =0x0000016E
    // add r2, r6, #1
    // ldrb r0, [r5, r3]
    // sub r1, r3, #2
    // lsl r2, r2, #0x10
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // sub r0, r3, #6
    // sub r3, r3, #1
    // ldrb r1, [r5, r1]
    // ldrb r3, [r5, r3]
    // ldr r0, [r5, r0]
    // lsr r2, r2, #0x10
    // bl FillBgTilemapRect
    // ldr r3, _0200F9D8 ; =0x0000016E
    // add r2, r6, #2
    // ldrb r0, [r5, r3]
    // lsl r2, r2, #0x10
    // sub r1, r3, #2
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // sub r0, r3, #6
    // sub r3, r3, #1
    // ldrb r3, [r5, r3]
    // ldrb r1, [r5, r1]
    // ldr r0, [r5, r0]
    // add r3, #0xa
    // lsl r3, r3, #0x18
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // ldr r3, _0200F9D8 ; =0x0000016E
    // add r2, r6, #4
    // ldrb r0, [r5, r3]
    // lsl r2, r2, #0x10
    // sub r1, r3, #2
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // sub r0, r3, #6
    // sub r3, r3, #1
    // ldrb r1, [r5, r1]
    // ldrb r3, [r5, r3]
    // ldr r0, [r5, r0]
    // lsr r2, r2, #0x10
    // bl FillBgTilemapRect
    // ldr r3, _0200F9D8 ; =0x0000016E
    // add r2, r6, #3
    // ldrb r0, [r5, r3]
    // lsl r2, r2, #0x10
    // sub r1, r3, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // sub r0, r3, #6
    // sub r3, r3, #1
    // ldrb r3, [r5, r3]
    // ldrb r1, [r5, r1]
    // ldr r0, [r5, r0]
    // sub r3, r3, #1
    // lsl r3, r3, #0x18
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // ldr r3, _0200F9D8 ; =0x0000016E
    // add r2, r6, #5
    // ldrb r0, [r5, r3]
    // lsl r2, r2, #0x10
    // sub r1, r3, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // sub r0, r3, #6
    // sub r3, r3, #1
    // ldrb r3, [r5, r3]
    // ldrb r1, [r5, r1]
    // ldr r0, [r5, r0]
    // add r3, #0xa
    // lsl r3, r3, #0x18
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // ldr r3, _0200F9D8 ; =0x0000016E
    // add r2, r6, #6
    // ldrb r0, [r5, r3]
    // lsl r2, r2, #0x10
    // sub r1, r3, #2
    // add r0, #0xa
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // sub r0, r3, #6
    // sub r3, r3, #1
    // ldrb r3, [r5, r3]
    // ldrb r1, [r5, r1]
    // ldr r0, [r5, r0]
    // sub r3, r3, #1
    // lsl r3, r3, #0x18
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // ldr r3, _0200F9D8 ; =0x0000016E
    // add r2, r6, #7
    // ldrb r0, [r5, r3]
    // sub r1, r3, #2
    // lsl r2, r2, #0x10
    // add r0, #0xa
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // sub r0, r3, #6
    // sub r3, r3, #1
    // ldrb r1, [r5, r1]
    // ldrb r3, [r5, r3]
    // ldr r0, [r5, r0]
    // lsr r2, r2, #0x10
    // bl FillBgTilemapRect
    // ldr r3, _0200F9D8 ; =0x0000016E
    // add r6, #8
    // ldrb r0, [r5, r3]
    // lsl r2, r6, #0x10
    // sub r1, r3, #2
    // add r0, #0xa
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // sub r0, r3, #6
    // sub r3, r3, #1
    // ldrb r3, [r5, r3]
    // ldrb r1, [r5, r1]
    // ldr r0, [r5, r0]
    // add r3, #0xa
    // lsl r3, r3, #0x18
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldrb r1, [r5, r1]
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0200F9D8: .word 0x0000016E
    // TODO: decompile
}



void sub_0200F9DC(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r3, _0200FA20 ; =0x0000016E
    // add r4, r0, #0
    // ldrb r0, [r4, r3]
    // mov r2, #0
    // sub r1, r3, #2
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xc
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // sub r0, r3, #6
    // sub r3, r3, #1
    // ldrb r3, [r4, r3]
    // ldrb r1, [r4, r1]
    // ldr r0, [r4, r0]
    // sub r3, r3, #1
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldrb r1, [r4, r1]
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x10
    // pop {r4, pc}
    // _0200FA20: .word 0x0000016E
    // TODO: decompile
}


