/* Decompiled from asm/overlay_18.s */
#include "global.h"

void ov18_021EE35C(void) {
    // str r2, [sp]
    // add r4, #0xc
    // ldr r0, [sp]
    // add r5, #8
    // add r4, #0x10
}





void ov18_021EE388(void) {
    // add r4, #0xc
    // add r5, #0x10
    // add r4, #0x10
}





void ov18_021EE3AC(void) {
    NewString_ReadMsgData(r1, r3);
    StringExpandPlaceholders(*((u32*)(r5 + (0x66 << 4))), *((u32*)(r5 + ((0x66 << 4) + 4))), r0);
    // ldr r0, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r1, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x20]
    // str r0, [sp, #8]
    // add r0, r1, r0
    // ldr r3, [sp, #0x24]
    ov18_021F95FC((r4 << 4), *((u32*)(r5 + 0x00000664)));
    String_Delete(r6);
}





void ov18_021EE3FC(void) {
    ov18_021EE35C(ov18_021F9F3C, 0x14);
    ov18_021EE508(r5, 0, 0);
    ov18_021EE508(r5, 1, 1);
    ov18_021EE5FC(r5);
    ov18_021F8824(r5);
    ov18_021F8838(r5);
    ov18_021EE6BC(r5, r0, r4);
    ov18_021EE8B8(r5, r6, r4);
}





void ov18_021EE44C(void) {
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // add r3, sp, #0x2c
    GfGfxLoader_GetCharDataFromOpenNarc(*((u32*)(0x25 + 0x00000854)), 1, 1);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // ldr r4, [sp, #0x1c]
    // str r5, [sp, #0x24]
    // add r4, #0xc
    // add r7, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r6
    BlitBitmapRect(0xff, *((u32*)(r0 + 0x14)), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r6
    BlitBitmapRect(0xff, r7, 0, 0);
    // ldr r0, [sp, #0x24]
    // add r5, #8
    // str r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x1c]
    // add r0, r4, r6
    // ldr r2, [sp, #0x20]
    ov18_021F9648(1, *((u32*)(r1 + 0x0000065C)), 0x0000065C, 0x60);
    // ldr r0, [sp, #0x28]
    Heap_Free();
}





void ov18_021EE508(void) {
    // add r4, #0xc
    // add r0, r4, r0
}





void ov18_021EE520(void) {
    // str r0, [sp]
    // str r1, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // add r3, sp, #0x2c
    GfGfxLoader_GetCharDataFromOpenNarc(*((u32*)(r0 + 0x00000854)), 1, 1);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // add r5, #0xc
    // add r5, r5, r0
    // str r0, [sp, #0x28]
    // add r0, #0x20
    // str r0, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r1, r7, r1
    BlitBitmapRect(r5, (3 << 8), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x28]
    BlitBitmapRect(r5, 0, 0);
    // add r4, #8
    // ldr r0, [sp, #0x24]
    Heap_Free();
    MessagePrinter_New(0xf, 8, 7, 0x25);
    // str r5, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x20]
    PrintUIntOnWindow(4, 3, 2);
    MessagePrinter_Delete(r4);
}





void ov18_021EE5E4(void) {
    // add r4, #0xc
    // add r0, r4, r0
}





void ov18_021EE5FC(void) {
    ov18_021EE5E4((*((u8*)(r0 + 0x0000185D)) + 2), *((u16*)(r0 + 0x0000102C)));
    ov18_021EE5E4(r4, (*((u8*)(r4 + 0x0000185D)) + 4), *((u16*)(r4 + 0x0000102E)));
    // eor r0, r2
    // strb r0, [r4, r1]
}





void ov18_021EE638(void) {
    // add r4, #0xc
    // add r0, r4, r6
    FillWindowPixelBuffer(0);
    ov18_021E590C(r7, *((u8*)(r5 + 0x0000185C)), 0x25);
    Pokedex_GetInternationalViewFlag(*((u32*)*((u32*)r5)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    ov18_021F95FC(2, r7, 0x38, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r6
    ov18_021F95FC(2, r7, 0x2c, 0);
    String_Delete(r7);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
    // add r5, #0xc
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((r2 << 4));
}





void ov18_021EE6BC(void) {
}





void ov18_021EE6EC(void) {
}





void ov18_021EE71C(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, r4
    ov18_021F9648(0x00020100, *((u32*)(r6 + 0x0000065C)), 8, 0);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov18_021EE75C(void) {
    // add r4, #0xc
    // add r0, r4, r6
    // str r2, [sp, #0x14]
    FillWindowPixelBuffer(r2, 0);
    Pokedex_ConvertToCurrentDexNo(*((u8*)(r5 + 0x00001858)), r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0x66 << 4))), 0, r0, 3);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), 9);
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
    // add r0, r4, r6
    ClearWindowTilemapAndScheduleTransfer();
}





void ov18_021EE7DC(void) {
    // add r4, #0xc
    // add r0, r4, r5
    FillWindowPixelBuffer(0);
    ov18_021E590C(r6, 2, 0x25);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r4, r5
    // str r2, [sp, #8]
    ov18_021F95FC(0x00020100, r0, 0, 0);
    String_Delete(r6);
    // add r0, r4, r5
    ScheduleWindowCopyToVram();
    // add r0, r4, r5
    ClearWindowTilemapAndScheduleTransfer();
}





void ov18_021EE834(void) {
    // add r4, #0xc
    // add r0, r4, r5
    // str r2, [sp, #0xc]
    FillWindowPixelBuffer(0);
    // ldr r0, [sp, #0xc]
    // add r1, r6, r0
    ov18_021E595C(r7, 2, 0x25);
    ov18_021E595C(0, 2, 0x25);
    // add r0, r4, r5
    GetWindowWidth();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r4, r5
    ov18_021F95FC(1, r6, ((r0 << 3) - 4), 0);
    String_Delete(r6);
    // add r0, r4, r5
    ScheduleWindowCopyToVram();
    // add r0, r4, r5
    ClearWindowTilemapAndScheduleTransfer();
}





void ov18_021EE8B8(void) {
    // add r0, #0xcc
    ClearWindowTilemapAndScheduleTransfer();
    // add r0, #0xec
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r0, #0xbc
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r0, #0xdc
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r0, #0xfc
    ClearWindowTilemapAndScheduleTransfer(r5);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((0x43 << 2));
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((0x47 << 2));
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((0x4b << 2));
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer((0x4f << 2));
    ov18_021EE984(r5, r4, r6, 0xb);
    ov18_021EE9FC(r5, 0xc);
    ov18_021EEA40(r5, 0xe);
    ov18_021EEAE4(r5, r4, r6, 0xd);
    ov18_021EEB94(r5, r4, r6, 0xf);
    ov18_021EEBE4(r5, 0x10);
    ov18_021EEC34(r5, r4, 0x11, *((u8*)(r5 + 0x0000185C)));
    ov18_021EECB0(r5, r4, 0x12);
    ov18_021EED00(r5, r4, r6, 0x13);
}





void ov18_021EE984(void) {
    // add r1, r6, r0
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(*((u16*)(r1 + 0x00001032)), 0);
    ov18_021E59A8(r7, *((u8*)(r6 + 0x0000185C)), 0, 0x25);
    // add r0, r5, r4
    GetWindowWidth();
    FontID_String_GetWidthMultiline(0, r6, 0);
    // sub r0, r1, r0
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r4
    // str r3, [sp, #8]
    ov18_021F95FC(0x00020100, r6, (r0 >> 1), 0);
    String_Delete(r6);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov18_021EE9FC(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), 0xa, 0x14);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov18_021EEA40(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), 0xb, 0x14);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov18_021EEA84(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // add r4, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // ldr r2, [sp, #0x28]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x2c]
    // add r0, r4, r0
    // ldr r0, [sp, #0xc]
}





void ov18_021EEAE4(void) {
    // str r1, [sp, #0x10]
    // add r4, #0xc
    // add r0, r4, r6
    // str r3, [sp, #0x14]
    FillWindowPixelBuffer(r3, 0);
    // str r0, [sp]
    // add r3, r5, r2
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    ov18_021EEA84(r5, 0, *((u16*)(r3 + 0x00001032)));
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov18_021EEB34(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // add r4, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // ldr r2, [sp, #0x28]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x2c]
    // add r0, r4, r0
    // ldr r0, [sp, #0xc]
}





void ov18_021EEB94(void) {
    // str r1, [sp, #0x10]
    // add r4, #0xc
    // add r0, r4, r6
    // str r3, [sp, #0x14]
    FillWindowPixelBuffer(r3, 0);
    // str r0, [sp]
    // add r3, r5, r2
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    ov18_021EEB34(r5, 0, *((u16*)(r3 + 0x00001032)));
    // add r0, r4, r6
    ScheduleWindowCopyToVram();
}





void ov18_021EEBE4(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    LanguageToDexFlag(*((u8*)(r6 + 0x0000185C)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    // add r2, #0x7a
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), r0, 0x38);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov18_021EEC34(void) {
    // str r1, [sp, #0x14]
    // add r7, #0xc
    // str r0, [sp, #0x18]
    // add r0, r7, r0
    FillWindowPixelBuffer((r2 << 4), 0);
    // ldr r1, [sp, #0x14]
    Pokedex_ConvertToCurrentDexNo(*((u8*)(r5 + 0x00001858)));
    // str r0, [sp]
    // str r4, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0x66 << 4))), 0, r0, 3);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), r6, 9);
    // ldr r0, [sp, #0x18]
    // add r0, r7, r0
    ScheduleWindowCopyToVram();
}





void ov18_021EECB0(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    ov18_021E590C(r7, *((u8*)(r6 + 0x0000185C)), 0x25);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r4
    // str r2, [sp, #8]
    ov18_021F95FC(0x00020100, r0, 0, 0);
    String_Delete(r6);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov18_021EED00(void) {
    // add r6, #0xc
    // str r1, [sp, #0xc]
    // add r0, r6, r4
    FillWindowPixelBuffer(0);
    // add r1, r5, r0
    // ldr r0, [sp, #0xc]
    ov18_021E595C(*((u16*)(r1 + 0x00001032)), *((u8*)(r5 + 0x0000185C)), 0x25);
    ov18_021E595C(0, *((u8*)(r5 + r1)), 0x25);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r6, r4
    ov18_021F95FC(1, r0, 0x7c, 0);
    String_Delete(r5);
    // add r0, r6, r4
    ScheduleWindowCopyToVram();
}





void ov18_021EED70(void) {
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer(0x0000056C);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer(0x0000058C);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer(0x0000055C);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer(0x0000057C);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer(0x0000059C);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer(0x000005AC);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer(0x000005BC);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer(0x000005CC);
    // add r0, r5, r0
    ClearWindowTilemapAndScheduleTransfer(0x000005DC);
    ov18_021EE984(r5, r4, r6, 0x55);
    ov18_021EE9FC(r5, 0x56);
    ov18_021EEA40(r5, 0x58);
    ov18_021EEAE4(r5, r4, r6, 0x57);
    ov18_021EEB94(r5, r4, r6, 0x59);
    ov18_021EEBE4(r5, 0x5a);
    ov18_021EEC34(r5, r4, 0x5b, *((u8*)(r5 + 0x0000185C)));
    ov18_021EECB0(r5, r4, 0x5c);
    ov18_021EED00(r5, r4, r6, 0x5d);
}





void ov18_021EEE58(void) {
    ov18_021EE35C(ov18_021F9FDC, 0x65);
    ov18_021EEED0(r4, 0);
    ov18_021EF45C(r4);
    ov18_021EF528(r4);
    ov18_021EEE84(r4);
}





void ov18_021EEE84(void) {
    // add r2, r4, r2
    // add r2, r4, r2
    // add r2, r4, r2
    // add r2, r4, r2
    // add r2, r4, r2
}





void ov18_021EEED0(void) {
    // add r5, #0xc
    FillWindowPixelBuffer(r0, 0);
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EEEF6: ; jump table
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0xc, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0xd, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0xe, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r4 + (0x66 << 4))), 0, *((u16*)(r4 + 0x0000102C)), 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov18_021EE3AC(r4, *((u32*)(r4 + 0x0000065C)), 0, 0xf);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0xc, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0x10, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0xc, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0x11, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0xc, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0x12, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0xc, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0x14, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0xc, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0x13, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0xc, 0x70);
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0x16, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0xc, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0x15, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0xc, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0x19, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0x17, 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021F9648(r5, *((u32*)(r4 + 0x0000065C)), 0x18, 0x70);
    ScheduleWindowCopyToVram(r5);
}





void ov18_021EF1E4(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), 0x1a, 0x24);
}





void ov18_021EF220(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), 0x1b, 0x14);
}





void ov18_021EF25C(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), 0x1c, 0x14);
}





void ov18_021EF298(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), 0x1d, 0x14);
}





void ov18_021EF2D4(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), 0x1e, 0x14);
}





void ov18_021EF310(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), 0x1f, 0x14);
}





void ov18_021EF34C(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), 0x20, 0x18);
}





void ov18_021EF388(void) {
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r2, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r3, sp, #0x2c
    // add r4, #0xc
    GfGfxLoader_GetCharDataFromOpenNarc(*((u32*)(0x25 + 0x00000854)), 4, 1);
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // str r5, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r6
    // add r1, r7, r1
    BlitBitmapRect(0xff, (0x31 << 6), 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, r4, r6
    // add r1, r7, r1
    BlitBitmapRect(0xff, (0xca << 4), 0, 0);
    // ldr r0, [sp, #0x24]
    // add r5, #8
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    Heap_Free((r0 + 1));
    // add r0, r4, r6
    GetWindowWidth();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r5, r3
    // ldr r1, [sp, #0x1c]
    // add r0, r4, r6
    // ldr r2, [sp, #0x20]
    // asr r3, r3, #1
    ov18_021F9648(2, *((u32*)(r1 + 0x0000065C)), 0x0000065C, ((r0 << 3) >> 0x1f));
    // add r0, r4, r6
    CopyWindowPixelsToVram_TextMode();
}





void ov18_021EF45C(void) {
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, r5, r0
    // add r5, r5, r0
    // add r5, #0x10
}





void ov18_021EF528(void) {
    ov18_021EFBE8(0x1b);
    ov18_021EFC3C(r5, 0x1c);
    ov18_021EFC9C(r5, *((u32*)(r5 + 0x00001870)), 0x1d, 0x1d);
    ov18_021EFC9C(r5, *((u32*)(r5 + 0x00001874)), 0x1e, 0x1d);
    // add r1, #0x28
    ov18_021EFD00(r5, *((u16*)(*((u32*)(r5 + 0x00001850)) + (*((u32*)(r5 + 0x00001850)) << 2))), 0x1f);
    // add r1, #0x2c
    ov18_021EFD00(r5, *((u16*)(*((u32*)(r5 + 0x00001850)) + (*((u32*)(r5 + 0x00001850)) << 2))), 0x20);
    // add r1, #0x30
    // add r1, r2, r1
    ov18_021EFDB4(r5, *((u16*)((*((u32*)(r5 + 0x00001850)) << 2) + 2)), 0x21);
    // add r1, #0x34
    // add r1, r2, r1
    ov18_021EFDB4(r5, *((u16*)((*((u32*)(r5 + 0x00001850)) << 2) + 2)), 0x22);
    ov18_021EFE70(r5, 0x23);
    // add r5, r5, r0
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}





void ov18_021EF5D8(void) {
    ov18_021E613C(0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x93 << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x9b << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x9f << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0xa3 << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0xa7 << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0xab << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0xaf << 2), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648((0x93 << 2), *((u32*)(r5 + 0x0000065C)), 0x1a, 0x2c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648((0x9b << 2), *((u32*)(r5 + 0x0000065C)), 0x29, 0x2c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648((0x9f << 2), *((u32*)(r5 + 0x0000065C)), 0x2a, 0x2c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648((0xa3 << 2), *((u32*)(r5 + 0x0000065C)), 0x2b, 0x2c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648((0xa7 << 2), *((u32*)(r5 + 0x0000065C)), 0x2c, 0x2c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648((0xab << 2), *((u32*)(r5 + 0x0000065C)), 0x2d, 0x2c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648((0xaf << 2), *((u32*)(r5 + 0x0000065C)), 0x2e, 0x2c);
    ov18_021EF388(r5, 0x11, 0x27);
    ov18_021EF388(r5, 0x13, 0x28);
    ov18_021EFBE8(r5, 0x25);
    // add r5, r5, r0
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}





void ov18_021EF764(void) {
    ov18_021E613C(0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x0000041C, 0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x0000043C, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648(0x0000041C, *((u32*)(r5 + 0x0000065C)), 0x1b, 0x18);
    ov18_021E7698(0);
    // add r6, #0x45
    _s32_div_f(((r0 << 0x10) >> 0x10), 7);
    // str r1, [sp, #0x10]
    _s32_div_f(r7, 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    // add r3, #0x18
    ov18_021F9648(0x0000043C, *((u32*)(r5 + 0x0000065C)), r6, (r3 << 5));
    ov18_021EF388(r5, 0x11, 0x27);
    ov18_021EF388(r5, 0x13, 0x28);
    ov18_021EFC3C(r5, 0x42);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x0000041C);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x0000043C);
    // add r0, r5, r0
    ScheduleWindowCopyToVram(0x0000042C);
}





void ov18_021EF848(void) {
    ov18_021E613C(0);
    // add r0, r6, r0
    FillWindowPixelBuffer((0xb3 << 2), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r6, r0
    ov18_021F9648((0xb3 << 2), *((u32*)(r6 + 0x0000065C)), 0x1c, 0x1c);
    // add r4, r6, r0
    FillWindowPixelBuffer(r4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // sub r2, #0x5e
    ov18_021F9648(r4, *((u32*)(r6 + 0x0000065C)), *((u16*)r5), 0x20);
    // add r4, #0x10
    ov18_021EF388(r6, 0x11, 0x27);
    ov18_021EF388(r6, 0x13, 0x28);
    ov18_021EFC9C(r6, *((u32*)(r6 + 0x00001870)), 0x2d, 0x1d);
    ov18_021EFC9C(r6, *((u32*)(r6 + 0x00001874)), 0x2e, 0x23);
    // add r5, r6, r0
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}





void ov18_021EF91C(void) {
    ov18_021E613C(0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x0000044C, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648(0x0000044C, *((u32*)(r5 + 0x0000065C)), 0x1d, 0x14);
    ov18_021EF388(r5, 0x11, 0x27);
    ov18_021EF388(r5, 0x13, 0x28);
    // add r1, #0x28
    ov18_021EFD00(r5, *((u16*)(*((u32*)(r5 + 0x00001850)) + (*((u32*)(r5 + 0x00001850)) << 2))), 0x45);
    // add r1, #0x2c
    ov18_021EFD00(r5, *((u16*)(*((u32*)(r5 + 0x00001850)) + (*((u32*)(r5 + 0x00001850)) << 2))), 0x46);
    // add r5, r5, r0
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}





void ov18_021EF9B4(void) {
    ov18_021E613C(0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x0000047C, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648(0x0000047C, *((u32*)(r5 + 0x0000065C)), 0x1e, 0x18);
    ov18_021EF388(r5, 0x11, 0x27);
    ov18_021EF388(r5, 0x13, 0x28);
    // add r1, #0x30
    // add r1, r2, r1
    ov18_021EFDB4(r5, *((u16*)((*((u32*)(r5 + 0x00001850)) << 2) + 2)), 0x48);
    // add r1, #0x34
    // add r1, r2, r1
    ov18_021EFDB4(r5, *((u16*)((*((u32*)(r5 + 0x00001850)) << 2) + 2)), 0x49);
    // add r5, r5, r0
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}





void ov18_021EFA50(void) {
    ov18_021E613C(0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x000004AC, 0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x000004CC, 0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x000004DC, 0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x000004EC, 0);
    // add r0, r5, r0
    FillWindowPixelBuffer(0x000004FC, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648(0x000004AC, *((u32*)(r5 + 0x0000065C)), 0x1f, 0x18);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648(0x000004CC, *((u32*)(r5 + 0x0000065C)), 0x41, 0x1c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648(0x000004DC, *((u32*)(r5 + 0x0000065C)), 0x42, 0x1c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648(0x000004EC, *((u32*)(r5 + 0x0000065C)), 0x43, 0x1c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r0
    ov18_021F9648(0x000004FC, *((u32*)(r5 + 0x0000065C)), 0x44, 0x1c);
    ov18_021EF388(r5, 0x11, 0x27);
    ov18_021EF388(r5, 0x13, 0x28);
    ov18_021EFE70(r5, 0x4b);
    // add r5, r5, r0
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}





void ov18_021EFB88(void) {
    ov18_021E613C(0);
    // add r0, r4, r0
    FillWindowPixelBuffer(0x0000050C, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r4, r0
    ov18_021F9648(0x0000050C, *((u32*)(r4 + 0x0000065C)), 0x20, 0x18);
    ov18_021EF388(r4, 0x11, 0x27);
    ov18_021EF388(r4, 0x13, 0x28);
    // add r0, r4, r0
    ScheduleWindowCopyToVram(0x0000050C);
}





void ov18_021EFBE8(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // add r0, r5, r4
    GetWindowWidth();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    // add r3, r4, r3
    // add r2, #0x29
    // asr r3, r3, #1
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), *((u32*)(r6 + 0x00001868)), ((r0 << 3) >> 0x1f));
}





void ov18_021EFC3C(void) {
    // add r7, #0xc
    // add r0, r7, r6
    FillWindowPixelBuffer(0);
    // add r4, #0x45
    // add r0, r7, r6
    GetWindowWidth(0x0000186C);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r3, r4, r3
    // add r0, r7, r6
    // asr r3, r3, #1
    ov18_021F9648(2, *((u32*)(r5 + 0x0000065C)), r4, ((r0 << 3) >> 0x1f));
}





void ov18_021EFC9C(void) {
    // add r5, #0xc
    // str r1, [sp, #0x10]
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // mvn r0, r0
    // add r0, r5, r4
    GetWindowWidth(0);
    // add r0, r1, r0
    // asr r6, r0, #1
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    ov18_021F9648(2, *((u32*)(r7 + 0x0000065C)), *((u16*)(ov18_021F9DC0 + (r2 << 1))), r6);
}





void ov18_021EFD00(void) {
    // add r4, #0xbd
    _u32_div_f((0x00002710 * r1), 0xfe);
    _u32_div_f((r0 + 5), 0xa);
    // add r7, #0xc
    // str r0, [sp, #0x14]
    // add r0, r7, r0
    FillWindowPixelBuffer((r6 << 4), 0);
    _u32_div_f(r4, 0xc);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0x66 << 4))), 0, r0, 3);
    _u32_div_f(r4, 0xc);
    // str r3, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0x66 << 4))), 1, r1, 2);
    // ldr r0, [sp, #0x14]
    // add r0, r7, r0
    GetWindowWidth();
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), r6, 0xaf);
}





void ov18_021EFDB4(void) {
    // add r0, r0, r1
    _u32_div_f((0x00035D2E * r1), (0x0000C350 << 1));
    // add r7, #0xc
    // str r0, [sp, #0x14]
    // add r0, r7, r0
    FillWindowPixelBuffer((r4 << 4), 0);
    _u32_div_f(r6, 0xa);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0x66 << 4))), 0, r0, 4);
    _u32_div_f(r6, 0xa);
    // str r0, [sp]
    // str r1, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + (0x66 << 4))), 1, r1, 1);
    // ldr r0, [sp, #0x14]
    // add r0, r7, r0
    GetWindowWidth();
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), r4, 0x26);
}





void ov18_021EFE70(void) {
    // add r5, #0xc
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // add r0, r5, r4
    GetWindowWidth();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    // add r3, r4, r3
    // add r2, #0x41
    // asr r3, r3, #1
    ov18_021F9648(2, *((u32*)(r6 + 0x0000065C)), *((u32*)(r6 + 0x00001888)), ((r0 << 3) >> 0x1f));
}





void ov18_021EFEC4(void) {
    // add r0, #0x1c
    FillWindowPixelBuffer(0);
    // add r0, #0x2c
    FillWindowPixelBuffer(r4, 0);
    // add r0, #0x3c
    FillWindowPixelBuffer(r4, 0);
    // add r0, #0x4c
    FillWindowPixelBuffer(r4, 0);
    // add r0, #0x5c
    FillWindowPixelBuffer(r4, 0);
    // add r0, #0x6c
    FillWindowPixelBuffer(r4, 0);
    // add r0, #0x7c
    FillWindowPixelBuffer(r4, 0);
    ov18_021EF1E4(r4, 1);
    ov18_021EF220(r4, 2);
    ov18_021EF25C(r4, 3);
    ov18_021EF298(r4, 4);
    ov18_021EF2D4(r4, 5);
    ov18_021EF310(r4, 6);
    ov18_021EF34C(r4, 7);
    ov18_021EFBE8(r4, 8);
    ov18_021EFC3C(r4, 9);
    ov18_021EFC9C(r4, *((u32*)(r4 + 0x00001870)), 0xa, 0x1d);
    ov18_021EFC9C(r4, *((u32*)(r4 + 0x00001874)), 0xb, 0x1d);
    // add r1, #0x28
    ov18_021EFD00(r4, *((u16*)(*((u32*)(r4 + 0x00001850)) + (*((u32*)(r4 + 0x00001850)) << 2))), 0xc);
    // add r1, #0x2c
    ov18_021EFD00(r4, *((u16*)(*((u32*)(r4 + 0x00001850)) + (*((u32*)(r4 + 0x00001850)) << 2))), 0xd);
    // add r1, #0x30
    // add r1, r2, r1
    ov18_021EFDB4(r4, *((u16*)((*((u32*)(r4 + 0x00001850)) << 2) + 2)), 0xe);
    // add r1, #0x34
    // add r1, r2, r1
    ov18_021EFDB4(r4, *((u16*)((*((u32*)(r4 + 0x00001850)) << 2) + 2)), 0xf);
    ov18_021EFE70(r4, 0x10);
    // add r4, #0x1c
    CopyWindowPixelsToVram_TextMode(r4);
    // add r4, #0x10
}





void ov18_021EFFEC(void) {
    sub_02019B08(*((u32*)(r0 + 8)), 0xf);
    ov18_021EE44C(r4, 0x5f, 0);
    ov18_021EE44C(r4, 0x60, 1);
    // add r1, #0x61
    ov18_021EE520(r4, *((u8*)(r4 + 0x0000185D)), *((u16*)(r4 + 0x0000102C)));
    // add r1, #0x63
    ov18_021EE520(r4, *((u8*)(r4 + 0x0000185D)), *((u16*)(r4 + 0x0000102E)));
    ov18_021F006C(r4, 0x5f);
    ov18_021F006C(r4, 0x60);
    // add r1, #0x61
    ov18_021F006C(r4, *((u8*)(r4 + 0x0000185D)));
    // add r1, #0x63
    ov18_021F006C(r4, *((u8*)(r4 + 0x0000185D)));
    // eor r0, r2
    // strb r0, [r4, r1]
}





void ov18_021F006C(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r0, #0xc
    // str r0, [sp]
    // ldr r1, [sp]
    // str r0, [sp, #0x10]
    // add r0, r1, r0
    // ldr r1, [sp]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // ldr r1, [sp]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // ldr r1, [sp]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // ldr r1, [sp]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // mov ip, r0
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r2
    // mov r1, ip
    // str r0, [sp, #8]
    // ldr r2, [sp, #8]
    // add r2, r2, r3
    // and r3, r6
    // add r3, r5, r3
    // add r3, r1, r3
    // add r3, r0, r3
    // strh r3, [r2]
    // mov r0, ip
    // ldr r0, [sp, #4]
    // add r1, r1, r4
    // mov ip, r2
    // ldr r1, [sp]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
}





void ov18_021F0118(void) {
    // add r5, #0xc
    // add r5, #0x10
    // add r4, #0xc
    // add r4, #0x10
}





void ov18_021F014C(void) {
}





void ov18_021F0168(void) {
    // str r6, [sp]
    // add r1, #0x11
}





void ov18_021F018C(void) {
    // add r1, #0x11
    sub_02019B08(*((u32*)(r0 + 8)), 0);
    // add r0, r0, r1
    // add r0, #0x46
    // add r0, r6, r3
    // strh r1, [r2, r0]
}





void ov18_021F01D4(void) {
    // add r1, #0x11
    sub_02019B08(*((u32*)(r0 + 8)), 0);
    // add r0, r0, r1
    // add r0, #0x56
    // add r0, r6, r3
    // strh r1, [r2, r0]
}





void ov18_021F021C(void) {
    ov18_021EE35C(ov18_021F9E4C, 0xe);
    // add r0, #0xc
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x2c
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x4c
    FillWindowPixelBuffer(r5, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0xc
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x8e, 0);
    ov18_021E590C(*((u16*)(r5 + 0x000018A2)), 2, 0x25);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x2c
    ov18_021F95FC(r5, r0, 0x24, 0);
    String_Delete(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x4c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x84, 0x18);
    // add r0, #0xc
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x2c
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x4c
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x5c
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x7c
    FillWindowPixelBuffer(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x5c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x41, 0x1c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x7c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x42, 0x1c);
    // add r0, #0x5c
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x7c
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x6c
    FillWindowPixelBuffer(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x6c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x41, 0x1c);
    // add r0, #0x6c
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x3c
    FillWindowPixelBuffer(r5, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x3c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x80, 0x38);
    // add r0, #0x3c
    CopyWindowPixelsToVram_TextMode(r5);
    ov18_021F03E0(r5);
    ov18_021F0428(r5);
}





void ov18_021F03C0(void) {
    // add r5, #0xc
    // add r5, #0x10
}





void ov18_021F03E0(void) {
    // add r0, #0x1c
    FillWindowPixelBuffer(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldrsb r2, [r4, r2]
    // add r0, #0x1c
    // add r2, #0x81
    ov18_021F9648(r4, *((u32*)(r4 + 0x0000065C)), 0x000018C9, 0x1c);
    // add r4, #0x1c
    ScheduleWindowCopyToVram(r4);
}





void ov18_021F0428(void) {
    // add r6, #0xc
    // add r0, #8
    // add r0, r6, r7
    FillWindowPixelBuffer(0, 0);
    // ldrsb r0, [r5, r0]
    // add r0, r0, r4
    // bmi _021F0480
    ov18_021F04C0(r5, (0x000018CA - 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #8
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), r4, r0);
    // add r0, r6, r7
    CopyWindowPixelsToVram_TextMode();
    // add r0, r6, r7
    GetWindowX();
    // str r0, [sp, #0x14]
    // add r0, r6, r7
    GetWindowY();
    // ldr r2, [sp, #0x14]
    // add r1, #0x11
    // asr r2, r2, #0x18
    // asr r3, r3, #0x18
    sub_020196E8(*((u32*)(r5 + 8)), r4, (r2 << 0x18), (r0 << 0x18));
}





void ov18_021F04C0(void) {
    // mvn r3, r3
    // sub r2, #0x34
    // ldrsb r0, [r4, r2]
    ov18_021E8AE0(0x87, 0x000018FC, 1);
    MapHeader_GetMapSec();
    BufferLandmarkName(*((u32*)(r4 + (0x66 << 4))), 0, r0);
}





void ov18_021F0504(void) {
    // str r1, [sp, #0x14]
    // add r6, sp, #0x18
    // add r2, sp, #0x18
    // add r1, #0x11
    // add r2, #1
    // add r3, sp, #0x18
    sub_02019B1C(*((u32*)(r0 + 8)), 0);
    // ldrsb r0, [r6, r7]
    // add r0, #8
    // add r6, #0xc
    // add r0, r6, r7
    FillWindowPixelBuffer((r4 + 1), 0);
    // ldr r0, [sp, #0x14]
    // add r1, #0x11
    sub_020196E8(*((u32*)(r5 + 8)), r4, 0xa, 0x14);
    // ldrsb r1, [r5, r0]
    // add r0, #0x36
    ov18_021F04C0(r5, (r1 + 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r4, #8
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), r4, r0);
    // add r1, #0x11
    sub_020196E8(r4, 0xa, 2);
    // ldrsb r0, [r5, r0]
    // bmi _021F05D0
    ov18_021F04C0(r5, (0x000018CA - 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r4, #8
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), r4, r0);
    // add r0, r6, r7
    CopyWindowPixelsToVram_TextMode();
}





void ov18_021F05E8(void) {
    ov18_021EE35C(ov18_021F9DE4, 0xd);
    // add r4, #0xc
    FillWindowPixelBuffer(r5, 0);
    // add r4, #0x10
    Pokedex_CheckMonCaughtFlag(*((u32*)*((u32*)r5)), *((u16*)(r5 + 0x000018A2)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0xc
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x8f, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x3c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x88, 0x30);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x4c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xa, 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x6c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xa, 0x10);
    ov18_021E590C(*((u16*)(r5 + 0x000018A2)), 2, 0x25);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x1c
    ov18_021F95FC(r5, r0, 0x20, 0);
    String_Delete(r6);
    PlayerProfile_GetPlayerName_NewString(*((u32*)(*((u32*)r5) + 4)), 0x25);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x2c
    ov18_021F95FC(r5, r0, 0x20, 0);
    String_Delete(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021EEA84(r5, *((u16*)(r5 + 0x000018A2)), r4, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x8c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x89, 0x30);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x9c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xb, 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xbc
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xb, 0x10);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov18_021EEB34(r5, *((u16*)(r5 + 0x000018A2)), r4, 0xa);
    PlayerProfile_GetTrainerGender(*((u32*)(*((u32*)r5) + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x7c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x8a, 0x20);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x8c, 0x20);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x7c
    ov18_021F9648(r5, *((u32*)(r5 + r1)), 0x8b, 0x20);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0x8d, 0x20);
    // add r5, #0xc
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}





void ov18_021F0838(void) {
    // add r5, #0xc
    // add r5, #0x10
}





void ov18_021F0858(void) {
    ov18_021EE35C(ov18_021F9DB0, 2);
    // add r4, #0xc
    FillWindowPixelBuffer(r5, 0);
    // add r4, #0x10
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0xc
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xad, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x1c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xae, 0x3c);
    // add r5, #0xc
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}





void ov18_021F08E0(void) {
    // add r5, #0xc
    // add r5, #0x10
}





void ov18_021F0900(void) {
    ov18_021EE35C(ov18_021F9EBC, 0x10);
    ov18_021F0928(r4);
}





void ov18_021F0918(void) {
}





void ov18_021F0928(void) {
}





void ov18_021F0940(void) {
    // add r6, #0xc
    // add r0, #0xa
    // add r0, r6, r7
    FillWindowPixelBuffer(0, 0);
    // ldrsb r0, [r5, r0]
    // add r0, r0, r4
    // bmi _021F0994
    // ldrsb r0, [r5, r0]
    ov18_021F09D8(r5, (0x000018C5 - 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xa
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), r4, r0);
    // add r0, r6, r7
    CopyWindowPixelsToVram_TextMode();
    // add r0, r6, r7
    GetWindowX();
    // str r0, [sp, #0x14]
    // add r0, r6, r7
    GetWindowY();
    // ldr r2, [sp, #0x14]
    // add r1, #0x11
    // asr r2, r2, #0x18
    // asr r3, r3, #0x18
    sub_020196E8(*((u32*)(r5 + 8)), r4, (r2 << 0x18), (r0 << 0x18));
}





void ov18_021F09D8(void) {
    // sub r5, #0x3e
    // sub r3, #0x3e
    // sub r3, #0x1b
    // add r5, #0x42
    // add r5, #0x42
    // add r5, #8
    // add r3, #8
    // add r2, #0xa
    // add r2, #9
    // add r2, #9
    // add r3, #0xa
    // add r5, #0x4a
    // add r3, #0x4a
    // add r3, #0x4f
    // add r1, r4, r1
    // eor r0, r1
    // add r0, #0x74
    // add r1, r4, r1
    // eor r0, r1
    // add r0, #0x76
    // add r1, r4, r1
    // eor r0, r1
    // add r0, #0x91
    // add r1, r4, r1
    // eor r0, r1
    // add r0, #0x95
    // add r1, r4, r1
    // eor r0, r1
    // add r0, #0x97
    // add r1, r4, r1
    // eor r0, r1
    // add r0, #0x99
    // add r1, r4, r1
    // eor r0, r1
    // add r0, #0xa0
    // add r1, r4, r1
    // eor r0, r1
    // add r0, #0xa4
    // add r1, r4, r1
    // eor r0, r1
    // add r2, r4, r1
    ov18_021E590C(0x73, 2, 0x25, 0x0000019D);
    // str r0, [sp]
    // str r3, [sp, #4]
    BufferString(*((u32*)(r4 + (0x66 << 4))), 0, r0, 2);
    String_Delete(r5);
}





void ov18_021F0B70(void) {
    // str r1, [sp, #0x14]
    // add r6, sp, #0x18
    // add r2, sp, #0x18
    // add r1, #0x11
    // add r2, #1
    // add r3, sp, #0x18
    sub_02019B1C(*((u32*)(r0 + 8)), 0);
    // ldrsb r0, [r6, r0]
    // add r0, #0xa
    // add r6, #0xc
    // add r0, r6, r7
    FillWindowPixelBuffer((r4 + 1), 0);
    // ldr r0, [sp, #0x14]
    // add r1, #0x11
    sub_020196E8(*((u32*)(r5 + 8)), r4, 8, 0x10);
    // ldrsb r1, [r5, r0]
    // ldrsb r0, [r5, r0]
    ov18_021F09D8(r5, (r1 + 2));
    // str r0, [sp]
    // add r4, #0xa
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), r4, r0);
    // add r1, #0x11
    // sub r3, #0xa
    sub_020196E8(r4, 8, 8);
    // ldrsb r0, [r5, r0]
    // bmi _021F0C38
    ov18_021F09D8(r5, (0x000018C5 - 2));
    // str r0, [sp]
    // add r4, #0xa
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), r4, r0);
    // add r0, r6, r7
    CopyWindowPixelsToVram_TextMode();
}





void ov18_021F0C50(void) {
    // add r0, #0xc
    FillWindowPixelBuffer(0);
    // add r0, #0x4c
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x1c
    FillWindowPixelBuffer(r5, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0xc
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xaa, 0);
    // ldrsb r0, [r5, r0]
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0x4c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xa8, 0);
    ov18_021E590C(*((u16*)(r5 + 0x000018A2)), 2, 0x25);
    // str r0, [sp]
    // str r3, [sp, #4]
    BufferString(*((u32*)(r5 + (0x66 << 4))), 0, r0, 2);
    String_Delete(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), 1, 0xa7);
    // add r0, #0xc
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x4c
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x1c
    ScheduleWindowCopyToVram(r5);
}





void ov18_021F0D2C(void) {
    // add r0, #0x2c
    FillWindowPixelBuffer(0);
    // ldrsb r1, [r4, r1]
    ov18_021F09D8(r4, 0x000018C5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    ov18_021EE3AC(r4, *((u32*)(r4 + 0x0000065C)), 2, r0);
    // add r4, #0x2c
    ScheduleWindowCopyToVram(r4);
}





void ov18_021F0D7C(void) {
    // add r0, #0xc
    // add r0, #0x1c
    // add r0, #0x2c
    // add r0, #0x4c
    // add r0, #0xac
    // add r0, #0xbc
    // add r0, #0xcc
    // add r0, #0xdc
    // add r0, #0xec
    // add r4, #0xfc
}





void ov18_021F0DD0(void) {
    ov18_021F0D7C();
    // add r0, #0xc
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x3c
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x5c
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x8c
    FillWindowPixelBuffer(r5, 0);
    // add r0, #0x9c
    FillWindowPixelBuffer(r5, 0);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, #0xc
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xaa, 0);
    ov18_021E590C(*((u16*)(r5 + 0x000018A2)), 2, 0x25);
    // str r0, [sp]
    // str r3, [sp, #4]
    BufferString(*((u32*)(r5 + (0x66 << 4))), 0, r0, 2);
    String_Delete(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    ov18_021EE3AC(r5, *((u32*)(r5 + 0x0000065C)), 3, 0xa9);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x5c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xaa, 0x18);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x8c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xab, 0x30);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x9c
    ov18_021F9648(r5, *((u32*)(r5 + 0x0000065C)), 0xac, 0x30);
    // add r0, #0xc
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x3c
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x5c
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x8c
    ScheduleWindowCopyToVram(r5);
    // add r0, #0x9c
    ScheduleWindowCopyToVram(r5);
    // ldrsb r2, [r5, r2]
    ov18_021F0F68(r5, 6, 0x000018C5);
    // ldrsb r2, [r5, r2]
    ov18_021F0F68(r5, 7, 0x000018C6);
}





void ov18_021F0F2C(void) {
}





void ov18_021F0F68(void) {
    // add r5, #0xc
    // str r2, [sp, #0x14]
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // ldr r1, [sp, #0x14]
    ov18_021F09D8(r6);
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    GetWindowWidth();
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r3, [sp, #0x18]
    ov18_021EE3AC(r6, *((u32*)(r6 + 0x0000065C)), r7);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}





void ov18_021F0FC8(void) {
}





void ov18_021F0FEC(void) {
}





void ov18_021F1004(void) {
}





void ov18_021F1024(void) {
    SpriteSystem_Alloc(0x25);
    // str r0, [r4, r1]
    SpriteManager_New(*((u32*)(r4 + 0x00000668)), 0x00000668);
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
    SpriteSystem_Init(*((u32*)(r4 + (0x0000066C - 4))), r2, ov18_021FA3C8, 0x20);
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SpriteSystem_InitSprites(*((u32*)(r4 + (r7 - 4))), *((u32*)(r4 + ((r7 - 4) + 4))), 0x78, ov18_021FA380);
    // add r2, sp, #0
    SpriteSystem_InitManagerWithCapacities(*((u32*)(r4 + (r7 - 4))), *((u32*)(r4 + ((r7 - 4) + 4))));
    SpriteSystem_GetRenderer(*((u32*)(r4 + (r7 - 4))));
    G2dRenderer_SetSubSurfaceCoords(0, (2 << 0x14));
}





void ov18_021F10C8(void) {
    SpriteSystem_FreeResourcesAndManager(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))));
    SpriteSystem_Free(*((u32*)(r4 + 0x00000668)));
}





void ov18_021F10E8(void) {
}





void ov18_021F1104(void) {
}





void ov18_021F111C(void) {
    // add r1, r0, r1
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x10]
}





void ov18_021F1160(void) {
    // add r1, r0, r1
    // add r1, r0, r1
}





void ov18_021F118C(void) {
    // add r5, r0, r2
}





void ov18_021F11AC(void) {
    // add r1, r0, r1
}





void ov18_021F11C0(void) {
    // add r1, r0, r1
    // add r1, r0, r1
}





void ov18_021F11EC(void) {
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))), r1, r0);
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r3 + r1)), *((u32*)(r3 + (r1 + 4))), (2 << 0x14));
}





void ov18_021F121C(void) {
    // ldr r2, [sp, #0x18]
    // add r5, r0, r2
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // add r1, r1, r4
    // add r2, r2, r6
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // add r5, r0, r2
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r2, sp, #0
    // ldrsh r1, [r2, r3]
    // add r1, r1, r4
    // ldrsh r2, [r2, r4]
    // asr r1, r1, #0x10
    // add r2, r2, r6
    // asr r2, r2, #0x10
}





void ov18_021F1294(void) {
    // ldr r4, [sp, #8]
    // add r1, r0, r1
    // add r1, r0, r1
}





void ov18_021F12C8(void) {
    // ldr r4, [sp, #8]
    // add r1, r0, r1
    // add r1, r0, r1
}





void ov18_021F12FC(void) {
}





void ov18_021F1314(void) {
    // ldr r1, _021F131C ; =0x00000858
    // ldr r3, _021F1320 ; =NARC_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // _021F131C: .word 0x00000858
    // _021F1320: .word NARC_Delete
    // TODO: decompile
}





void ov18_021F1324(void) {
    // str r7, [sp]
    // str r7, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + 0x0000066C)), *((u32*)(r0 + 0x00000854)), 0x4c);
    sub_02074490();
    // sub r1, #8
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r5 + 0x00000858)), 2, *((u32*)(r5 + 0x00000668)), *((u32*)(r5 + (0x00000668 + 4))));
    sub_0207449C();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + (0x00000668 + 4))), *((u32*)(r5 + 0x00000858)), r0);
    sub_020744A8();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + (0x00000668 + 4))), *((u32*)(r5 + 0x00000858)), r0);
}





void ov18_021F13DC(void) {
    // add r1, r4, r7
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x0000066C)));
    SpriteManager_UnloadPlttObjById(*((u32*)(r5 + 0x0000066C)), 0x0000C550);
    SpriteManager_UnloadCellObjById(*((u32*)(r5 + 0x0000066C)), 0x0000C550);
    SpriteManager_UnloadAnimObjById(*((u32*)(r5 + 0x0000066C)), 0x0000C550);
}





void ov18_021F1424(void) {
    // add r5, r7, r0
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r6, sp, #0
    // add r3, sp, #0x34
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r2, sp, #0x34
    // add r0, r4, r0
    // str r0, [sp, #0x48]
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + 0x0000066C)), (6 - 1), ov18_021FA3E8);
    // str r0, [r5, r1]
}





void ov18_021F148C(void) {
    GetBattleMonIconNaixEx(r1, 0);
    // str r0, [sp]
    GfGfxLoader_GetCharDataFromOpenNarc(*((u32*)(r5 + 0x00000858)), r0, 0, r4);
}





void ov18_021F14B4(void) {
    // str r1, [sp, #4]
    SpriteManager_FindPlttResourceOffset(*((u32*)(r0 + 0x0000066C)), 0x0000C550, 1);
    // str r3, [sp]
    // ldr r2, [sp, #4]
    ov18_021F111C(r5, r4, (1 << 9));
    // add r1, r5, r0
    // add r1, r7, r6
    ManagedSprite_SetPaletteOverride(*((u32*)(r1 + (0x67 << 4))));
}





void ov18_021F14FC(void) {
    // str r3, [sp]
    // add r3, sp, #4
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
}





void ov18_021F1534(void) {
    // add r3, sp, #0xc
    // str r2, [sp, #4]
    ov18_021F148C();
    // str r3, [sp]
    // ldr r2, [sp, #0xc]
    // str r0, [sp, #8]
    ov18_021F111C(r5, r4, *((u32*)(r2 + 0x14)), (2 << 8));
    SpriteManager_FindPlttResourceOffset(*((u32*)(r5 + 0x0000066C)), 0x0000C551, 2);
    // ldr r1, [sp, #4]
    GetBattleMonIconPaletteEx(r7, 0);
    // add r2, r5, r0
    // add r1, r6, r1
    ManagedSprite_SetPaletteOverride(*((u32*)(r2 + (0x67 << 4))), r0);
    // ldr r0, [sp, #8]
    Heap_Free();
}





void ov18_021F1598(void) {
    // add r7, r5, r0
    // str r0, [sp]
    ManagedSprite_SetDrawFlag(*((u32*)(r7 + (r2 << 2))), 0);
    // add r0, r5, r0
    // str r0, [sp, #4]
    Pokedex_GetSeenFormByIdx(*((u32*)*((u32*)r5)), *((u16*)(0x00001030 + (r4 << 2))), 0);
    // ldr r0, [sp, #4]
    ov18_021F14FC(r5, *((u16*)(r0 + r4)), 0, r6);
    // ldr r0, [sp]
    ManagedSprite_SetDrawFlag(*((u32*)(r7 + r0)), 1);
    // add r1, r5, r4
    ov18_021F1160(r5, r6, 1);
    ov18_021F1160(r5, r6, 0);
}





void ov18_021F1620(void) {
    // add r0, r7, r4
    // eor r2, r1
    // add r0, r0, r1
    // add r0, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(((r0 << 0x10) >> 0xe) + (0x67 << 4))), 0, *((u8*)(r0 + 0x0000185E)));
    // add r0, r7, r4
    // add r0, r0, r1
    // add r1, r4, r1
    ov18_021F1598(r5, (0xf * *((u8*)(r5 + 0x00001859))), ((((r4 + 1) << 0x10) << 0x10) >> 0x10));
    _s32_div_f(r4, 5);
    // str r1, [sp]
    _s32_div_f(r4, 5);
    // add r1, r5, r0
    // ldr r3, [sp]
    // add r1, #0x30
    // add r3, #0x18
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r1 + (0x67 << 4))), ((0x28 * r3) << 0x10), ((0x28 * r0) << 0x10), (0x28 * r0));
}





void ov18_021F16C4(void) {
    // str r1, [sp]
    // add r0, r1, r0
    // str r2, [sp, #4]
    // str r0, [sp, #0xc]
    // add r4, sp, #0x14
    // ldr r0, [sp]
    // add r0, r0, r7
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // add r1, r5, r0
    // str r1, [sp, #8]
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)((0x1e * *((u8*)(r0 + 0x0000185E))) + (0x67 << 4))), (0x1e * *((u8*)(r0 + 0x0000185E))), *((u8*)(r0 + 0x0000185E)));
    // ldrsh r0, [r4, r0]
    // mvn r0, r0
    // strh r0, [r4]
    // ldr r1, [sp, #0xc]
    // sub r1, r2, r1
    // ldr r2, [sp, #0x10]
    // add r1, r6, r1
    ov18_021F1598(r5, *((u8*)(r5 + 0x00001859)), (0xf * *((u8*)(r5 + 0x00001859))));
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // strh r0, [r4]
    // ldr r1, [sp, #8]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r1 + (0x67 << 4))), 2, 0);
}





void ov18_021F1760(void) {
    // str r1, [sp]
    // add r0, r1, r0
    // str r2, [sp, #4]
    // str r0, [sp, #0xc]
    // add r4, sp, #0x14
    // ldr r0, [sp]
    // add r0, r0, r7
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // add r1, r5, r0
    // str r1, [sp, #8]
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)((0x1e * *((u8*)(r0 + 0x0000185E))) + (0x67 << 4))), (0x1e * *((u8*)(r0 + 0x0000185E))), *((u8*)(r0 + 0x0000185E)));
    // ldrsh r1, [r4, r0]
    // sub r0, #0x10
    // strh r0, [r4]
    // ldr r1, [sp, #0xc]
    // add r1, r2, r1
    // ldr r2, [sp, #0x10]
    // add r1, r6, r1
    ov18_021F1598(r5, *((u8*)(r5 + 0x00001859)), (0xf * *((u8*)(r5 + 0x00001859))));
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #4]
    // add r0, r1, r0
    // strh r0, [r4]
    // ldr r1, [sp, #8]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    ManagedSprite_SetPositionXY(*((u32*)(r1 + (0x67 << 4))), 2, 0);
}





void ov18_021F17FC(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))), 8, 0x4c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), 8, 0x4c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(*((u32*)(r4 + (0x85 << 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(*((u32*)(r4 + (0x85 << 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObj(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), 8, 0x4d);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObj(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), 8, 0x4e);
}





void ov18_021F18E0(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x0000066C)), 0x0000C58C);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C58D);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C552);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C553);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C551);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C551);
}





void ov18_021F193C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))), 8, 0x4c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObj(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), 8, 0x4c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(*((u32*)(r4 + (0x85 << 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(*((u32*)(r4 + (0x85 << 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
}





void ov18_021F19EC(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x0000066C)), 0x0000C58E);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C58F);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C554);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C555);
}





void ov18_021F1A30(void) {
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))), ov18_021FABC0, (2 << 0x14));
    // add r2, r5, r4
    // str r0, [r2, r1]
    // sub r0, #8
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r5 + (0x67 << 4))), *((u32*)(r5 + ((0x67 << 4) - 4))), ov18_021FABF4, (2 << 0x14));
    // add r2, r5, r4
    // str r0, [r2, r1]
}





void ov18_021F1A7C(void) {
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // add r2, sp, #0x20
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    Heap_AllocAtEnd(0x25, (0x32 << 6), ov18_021FA328);
    // add r1, sp, #0x30
    MIi_CpuClearFast(0, 0x10);
    // add r0, sp, #0x48
    Pokedex_GetSeenSpindaPersonality(*((u32*)*((u32*)r5)), 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r3, sp, #0x48
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r2, [sp, #0x18]
    // add r0, sp, #0x30
    GetMonSpriteCharAndPlttNarcIdsEx(0, r4, *((u8*)(r3 + 0x10)));
    // str r7, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x48
    // add r1, sp, #0x20
    // str r0, [sp, #0xc]
    // str r4, [sp, #0x10]
    // add r3, sp, #0x20
    sub_02014510(*((u16*)(r1 + 0x10)), *((u16*)(r1 + 0x12)), 0x25);
    // add r4, r5, r0
    // ldr r0, [sp, #0x5c]
    Sprite_GetImageProxy(*((u32*)*((u32*)(r4 + ((0x67 << 4) << 2)))));
    NNS_G2dGetImageLocation(2);
    // str r0, [sp, #0x1c]
    DC_FlushRange(r7, (0x32 << 6));
    // ldr r1, [sp, #0x1c]
    GXS_LoadOBJ(r7, (0x32 << 6));
    Sprite_GetPaletteProxy(*((u32*)*((u32*)(r4 + r6))));
    NNS_G2dGetImagePaletteLocation(2);
    // ldr r0, [sp, #0x60]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x20
    GfGfxLoader_GXLoadPal(*((u16*)(r1 + 0x10)), *((u16*)(r1 + 0x14)), 5, r0);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r5 + (0x85 << 4))), 3, ((r4 << 0xf) >> 0x10), 0x20);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r2, sp, #0x20
    PaletteData_LoadNarc(*((u32*)(r5 + (0x85 << 4))), *((u16*)(r2 + 0x10)), *((u16*)(r2 + 0x14)), 0x25);
    // add r1, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    PaletteData_FillPaletteInBuffer(*((u32*)(r5 + (0x85 << 4))), 3, 2, 0);
    Heap_Free(r7);
}





void ov18_021F1BC8(void) {
    // add r0, r4, r0
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 0);
    // eor r1, r2
    // and r1, r2
    // strb r0, [r5, r3]
    // add r4, r4, r0
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(0xf + (0x67 << 4))), 1, ((1 << 0x18) >> 0x18), 0x0000185F);
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 0);
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 0);
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 1);
    Pokedex_SpeciesGetLastSeenGender(*((u32*)*((u32*)r5)), r6, 0);
    Pokedex_GetSeenFormByIdx(*((u32*)*((u32*)r5)), r6, 0);
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    ov18_021F1A7C(r5, r6, ((0 << 0x18) >> 0x18), ((1 << 0x18) >> 0x18));
}





void ov18_021F1CAC(void) {
}





void ov18_021F1CB4(void) {
    ov18_021E5900();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + (0x00000668 + 4))), *((u32*)(r5 + 0x00000854)), 0x4d);
    ov18_021E5908();
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBuffer(*((u32*)(r5 + (0x85 << 4))), 3, *((u32*)(r5 + 0x00000668)), *((u32*)(r5 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + (0x00000668 + 4))), *((u32*)(r5 + 0x00000854)), 0x4e);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + (0x00000668 + 4))), *((u32*)(r5 + 0x00000854)), 0x4f);
}





void ov18_021F1D58(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x0000066C)), 0x0000C599);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55B);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C558);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C558);
}





void ov18_021F1D98(void) {
    // sub r0, #8
    // add r5, r6, r2
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r0 + (0x67 << 4))), *((u32*)(r0 + ((0x67 << 4) - 4))), ov18_021FA450, (2 << 0x14));
    // str r0, [r5, r4]
    SpriteManager_FindPlttResourceOffset(*((u32*)(r6 + 0x0000066C)), 0x0000C55B, 2);
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + r4)), r0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + r4)), 0);
}





void ov18_021F1DE4(void) {
    // add r2, r5, r0
    Pokedex_GetSeenFormByIdx(*((u32*)*((u32*)r0)), 0);
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 0);
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 1);
    ov18_021F9694(r4, 0x25);
    // str r0, [sp]
    ov18_021F111C(r5, r6, r0, 0x80);
    Heap_Free(r4);
}





void ov18_021F1E70(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))), *((u32*)(r0 + 0x00000854)), 0x24);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x24);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x24);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x24);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x21);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x22);
}





void ov18_021F1F74(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x0000066C)), 0x0000C593);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C594);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C595);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C596);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C558);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C555);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C555);
}





void ov18_021F1FDC(void) {
    // add r5, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // add r2, sp, #0
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))), r1, (2 << 0x14));
    // add r2, r4, r5
    // str r0, [r2, r1]
    // add r2, sp, #0
    // str r0, [sp, #0x14]
    // sub r0, #8
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r4 + (0x67 << 4))), *((u32*)(r4 + ((0x67 << 4) - 4))), (2 << 0x14));
    // add r2, r4, r5
    // str r0, [r2, r1]
    // add r2, sp, #0
    // ldrsh r0, [r2, r0]
    // add r0, #0x31
    // strh r0, [r2]
    // add r2, sp, #0
    // str r0, [sp, #0x14]
    // sub r0, #0x10
    // sub r1, #0xc
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r4 + 0x00000678)), *((u32*)(r4 + 0x00000678)), (2 << 0x14));
    // add r2, r4, r5
    // str r0, [r2, r1]
    // add r2, sp, #0
    // str r0, [sp, #0x14]
    // sub r0, #0xc
    // sub r1, #8
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r4 + 0x00000674)), *((u32*)(r4 + 0x00000674)), (2 << 0x14));
    // add r2, r4, r5
    // str r0, [r2, r1]
}





void ov18_021F209C(void) {
    // add r2, r5, r0
    // add r1, r5, r4
    ManagedSprite_SetDrawFlag(*((u32*)(0x0000185C + (0x67 << 4))), 0);
    // add r1, r5, r4
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x00000674)), 0);
    // add r1, r5, r4
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x00000678)), 0);
    // add r1, r5, r4
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x0000067C)), 0);
    // add r1, r5, r7
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 0);
    // add r1, r5, r7
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x00000674)), 0);
    // add r1, r5, r7
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x00000678)), 0);
    // add r1, r5, r7
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x0000067C)), 0);
    // eor r2, r3
    // strb r1, [r5, r0]
    Pokedex_GetSeenFormByIdx(*((u32*)*((u32*)r5)), r6, 0, ((*((u8*)(r5 + 0x0000185F)) << 0x18) >> 0x1c));
    GetMonBaseStat_HandleAlternateForm(r6, 0, 6);
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    ov18_021F21FC(r5, r4);
    // str r0, [sp]
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 1);
    GetMonBaseStat_HandleAlternateForm(r6, r7, 7);
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x00000674)), 0, ((r0 << 0x10) >> 0x10));
    ov18_021F21FC(r5, (r4 + 1));
    // ldr r0, [sp]
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x00000674)), 1);
}





void ov18_021F21FC(void) {
    // str r2, [sp, #4]
    ov18_021F967C(r2);
    // str r0, [sp]
    // add r3, sp, #8
    GfGfxLoader_GetCharDataFromOpenNarc(*((u32*)(r5 + 0x00000854)), r0, 1);
    // str r0, [sp]
    // ldr r2, [sp, #8]
    ov18_021F111C(r5, r4, *((u32*)(r2 + 0x14)), (6 << 6));
    SpriteManager_FindPlttResourceOffset(*((u32*)(r5 + 0x0000066C)), 0x0000C558, 2);
    // ldr r0, [sp, #4]
    ov18_021F9688();
    // add r2, r5, r0
    // add r1, r6, r1
    ManagedSprite_SetPaletteOverride(*((u32*)(r2 + (0x67 << 4))), r0);
    Heap_Free(r7);
}





void ov18_021F2270(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))), *((u32*)(r0 + 0x00000854)), 0x35);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 2, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x36);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x37);
}





void ov18_021F2308(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x0000066C)), 0x0000C597);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C559);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C556);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C556);
}





void ov18_021F2348(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))), *((u32*)(r0 + 0x00000854)), 0x35);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x36);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x37);
}





void ov18_021F23E4(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x0000066C)), 0x0000C598);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55A);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C557);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C557);
}





void ov18_021F2424(void) {
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))));
    // add r2, r5, r1
    // str r0, [r2, r1]
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r5 + (0x67 << 4))), *((u32*)(r5 + ((0x67 << 4) + 4))), (2 << 0x14));
    // add r2, r5, r1
    // str r0, [r2, r1]
}





void ov18_021F2468(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r5, #0x48
    // sub r1, r4, r0
    // add r0, sp, #0
    // strh r1, [r0]
    // add r2, sp, #0
    ov18_021F2424(r0, 0x12, (6 - 1));
    SpriteManager_FindPlttResourceOffset(*((u32*)(r7 + 0x0000066C)), 0x0000C55A, 2);
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + (0x67 << 4))), r0);
    // add r4, #0x18
    ov18_021F2424(r7, 8, ov18_021FAB24);
}





void ov18_021F24E0(void) {
    Pokedex_GetInternationalViewFlag(*((u32*)*((u32*)r0)));
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 0);
    LanguageToDexFlag(*((u8*)(r5 + 0x0000185C)));
    ov18_021F118C(r5, r4, r0);
    // add r1, r5, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 1);
}





void ov18_021F2530(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    // str r2, [sp, #4]
    Pokedex_GetInternationalViewFlag(*((u32*)*((u32*)r0)));
    // ldr r0, [sp, #4]
    // asr r4, r0, #0x10
    // ldr r0, [sp, #4]
    // add r5, r6, r0
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x67 << 4))), 0);
    // asr r4, r0, #0x10
    // ldr r0, [sp, #4]
    // asr r5, r0, #0x10
    // ldr r0, [sp, #4]
    // add r4, r6, r0
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // str r0, [sp, #8]
    sub_020912AC(((r5 + 4) << 2));
    sub_02091294();
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    // ldr r1, [sp]
    ov18_021E6D10(r6, ((r2 << 0x10) >> 0x10));
    // ldr r0, [sp, #0xc]
    LanguageToDexFlag(*((u8*)(r6 + 0x0000185C)));
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    sub_020912AC();
    // ldr r0, [sp, #0x10]
    ov18_021F118C(r6, r5, r0);
    ov18_021F118C(r6, r5, (r2 + 6));
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    ManagedSprite_GetPositionXY(*((u32*)(r4 + (0x67 << 4))));
    // sub r2, r1, r7
    // add r1, #0x7c
    // add r3, sp, #0x14
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + (0x67 << 4))), ((0x18 * r2) << 0x10), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0x67 << 4))), 1);
    // asr r7, r0, #0x10
    ManagedSprite_SetDrawFlag(*((u32*)(r4 + (0x67 << 4))), 0);
    // asr r5, r0, #0x10
    // ldr r0, [sp, #4]
}





void ov18_021F2648(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))), *((u32*)(r0 + 0x00000854)), 0xc);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 2, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0xd);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0xe);
}





void ov18_021F26E4(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x0000066C)), 0x0000C590);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C556);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C552);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C552);
}





void ov18_021F2724(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))), *((u32*)(r0 + 0x00000854)), 0x1a);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x1b);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x1c);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x1d);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x1e);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x1f);
}





void ov18_021F281C(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x0000066C)), 0x0000C591);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C557);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C553);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C553);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C592);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C554);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C554);
}





void ov18_021F2880(void) {
    ov18_021F2964();
    ov18_021F1424(r5, 0x18);
    ov18_021F1620(r5, 0x18);
    ov18_021F299C(r5);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x67 << 4))), 0);
    ov18_021F2AC0(r5, 0);
    ov18_021F2BB0(r5, 5);
    ov18_021F2C10(r5, 2, 1);
    ov18_021F2C5C(r5, 1, 1);
    ov18_021F2E80(r5, 1, 1);
    ov18_021F8838(r5);
    ov18_021F8824(r5);
    ov18_021F1A30(r5, 0xb);
    ov18_021F1CAC(r5, r4, 0xb, 0xa);
    ov18_021F1FDC(r5, 0xe);
    ov18_021F209C(r5, r4, r6, 0xe);
    ov18_021F1D98(r5, 0xd);
    ov18_021F1DE4(r5, r4, r6, 0xd);
    ov18_021F2EC8(r5, r6, 9);
    ov18_021F2468(r5);
    ov18_021F2530(r5, r4, 0x12);
    ov18_021F24E0(r5, r4, 8);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x69 << 4))), 0);
}





void ov18_021F2964(void) {
}





void ov18_021F299C(void) {
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + 0x0000066C)), ov18_021FA984);
    // str r0, [r4, r1]
    // add r6, #0x34
    // add r0, #0x18
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x67 << 4))), 0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + 0x0000068C)), 0);
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + (0x00000668 + 4))), ov18_021FAB58, (2 << 0x14));
    // str r0, [r5, r1]
    // sub r0, #0x2c
    // sub r1, #0x28
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r5 + 0x00000694)), *((u32*)(r5 + 0x00000694)), ov18_021FAB8C, (2 << 0x14));
    // str r0, [r5, r1]
}





void ov18_021F2A2C(void) {
    Pokedex_GetInternationalViewFlag(*((u32*)*((u32*)r0)));
    // add r1, r4, r5
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 1);
    // add r1, r4, r5
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x00000674)), 1);
    // add r1, r4, r5
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + (0x67 << 4))), 0);
    // add r1, r4, r5
    ManagedSprite_SetDrawFlag(*((u32*)(r1 + 0x00000674)), 0);
}





void ov18_021F2A84(void) {
    // add r1, r5, r0
    // add r1, r5, r0
}





void ov18_021F2AC0(void) {
    // add r1, r0, r1
    ManagedSprite_SetPositionXY(*((u32*)((r1 << 2) + (0x67 << 4))), 0x90, 0x80);
    // add r1, r0, r1
    ManagedSprite_SetPositionXY(*((u32*)((r1 << 2) + (0x67 << 4))), 0x70, 0x80);
}





void ov18_021F2AF8(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // sub r0, #0x10
    // add r2, #0x10
    // ldrsh r1, [r1, r0]
    // sub r0, #0x10
    // add r1, #0x10
}





void ov18_021F2B3C(void) {
    // add r5, r0, r2
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r1, r1, r6
    // asr r1, r1, #0x10
}





void ov18_021F2B70(void) {
    // add r5, r0, r2
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
}





void ov18_021F2B9C(void) {
    // ldr r1, _021F2BAC ; =0x00001858
    // ldrb r0, [r0, r1]
    // cmp r0, #0
    // bne _021F2BA8
    // mov r0, #0x90
    // bx lr
    // mov r0, #0x70
    // bx lr
    // _021F2BAC: .word 0x00001858
    // TODO: decompile
}





void ov18_021F2BB0(void) {
    // add r5, r0, r2
    _s32_div_f(*((u8*)(r0 + 0x0000185A)), 5, (0x67 << 4));
    _s32_div_f(r6, 5);
    // add r1, #0x30
    // add r2, #0x18
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + r4)), ((r7 * 0x28) << 0x10), ((0x28 * r0) << 0x10), r0);
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + r4)), 1);
}





void ov18_021F2BFC(void) {
    // ldr r1, _021F2C08 ; =0x00000684
    // ldr r3, _021F2C0C ; =ManagedSprite_SetDrawFlag
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bx r3
    // nop
    // _021F2C08: .word 0x00000684
    // _021F2C0C: .word ManagedSprite_SetDrawFlag
    // TODO: decompile
}





void ov18_021F2C10(void) {
    ov18_021F118C(7);
    ov18_021F118C(5);
    ov18_021F8950(r5, r6);
    ov18_021F118C(r5, (r4 + 1), 0xa);
    ov18_021F118C(r5, (r4 + 1), 8);
}





void ov18_021F2C5C(void) {
}





void ov18_021F2C74(void) {
    ov18_021F891C();
    // add r2, #0xb
}





void ov18_021F2C98(void) {
}





void ov18_021F2CB4(void) {
}





void ov18_021F2CC0(void) {
}





void ov18_021F2CD0(void) {
    // add r1, r6, r0
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r2, sp, #0
    // ldrsh r3, [r2, r1]
    // sub r1, #0xb
    // add r3, #0xb
    // ldrsh r1, [r2, r0]
    // sub r0, r1, r3
    // add r0, r1, r3
}





void ov18_021F2D24(void) {
    // add r7, r5, r0
    // str r0, [sp, #4]
    // add r1, sp, #8
    // add r1, #2
    // add r2, sp, #8
    ManagedSprite_GetPositionXY(*((u32*)(r7 + (r1 << 2))));
    ov18_021F2CB4(r5, r4);
    ov18_021F2CC0(r5, r4);
    // ldr r0, [sp, #4]
    // add r2, sp, #8
    // ldrsh r1, [r2, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r7 + r0)), 2, (r0 << 0x10));
    ov18_021F2CB4(r5, r4);
    ov18_021F2CC0(r5, r4);
    // sub r0, r0, r7
    // str r0, [sp]
    // ldr r1, [sp, #0x20]
    ov18_021F8950(r5);
    // ldr r0, [sp]
    _u32_div_f((r0 << 8), r0);
    // sub r1, r6, r7
    // add r1, r7, r0
    // strb r3, [r5, r0]
    // add r6, r6, r0
    // add r7, r7, r0
}





void ov18_021F2DD4(void) {
    // str r3, [sp]
    // ldr r1, [sp]
    // sub r0, r4, r6
    // add r4, r6, r0
}





void ov18_021F2E14(void) {
    // add r1, r0, r1
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // sub r0, r5, r0
    // sub r0, r0, r5
}





void ov18_021F2E4C(void) {
    // add r5, r0, r2
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, r2, r6
    // asr r2, r2, #0x10
}





void ov18_021F2E80(void) {
    // add r1, sp, #4
    // str r2, [sp]
    // add r6, r5, r0
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r6 + (r1 << 2))));
    // ldr r3, [sp]
    ov18_021F2DD4(r5, *((u8*)(r5 + 0x00001859)), r4);
    // add r2, sp, #4
    // ldrsh r1, [r2, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r6 + r7)), 2, (r0 << 0x10), r0);
}





void ov18_021F2EC8(void) {
    // add r3, r0, r1
    // add r1, r0, r1
    ManagedSprite_SetDrawFlag(*((u32*)((r2 << 2) + (0x67 << 4))), 1);
    // add r1, r0, r1
    ManagedSprite_SetDrawFlag(*((u32*)((r2 << 2) + (0x67 << 4))), 0);
}





void ov18_021F2F00(void) {
}





void ov18_021F2F3C(void) {
}





void ov18_021F2F4C(void) {
    ov18_021F1324(0x3c);
    ov18_021F2648(r4);
    ov18_021F2270(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x48);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 2, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x49);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x4a);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x48);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x49);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x4a);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x17);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x18);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x19);
}





void ov18_021F310C(void) {
    ov18_021F13DC(0x3c);
    ov18_021F26E4(r4);
    ov18_021F2308(r4);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C59F);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C560);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55D);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55D);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C5A0);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C561);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55E);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55E);
}





void ov18_021F3190(void) {
    ov18_021F17FC();
    ov18_021F1CB4(r5);
    ov18_021F1E70(r5);
    ov18_021F2724(r5);
    ov18_021F2348(r5);
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + (0x00000668 + 4))), ov18_021FAB58, (2 << 0x14));
    // str r0, [r5, r1]
    // sub r0, #0xb8
    // sub r1, #0xb4
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r5 + (0x72 << 4))), *((u32*)(r5 + (0x72 << 4))), ov18_021FAB8C, (2 << 0x14));
    // str r0, [r5, r1]
    ov18_021F1A30(r5, 0x2e);
    ov18_021F1D98(r5, 0x30);
    ov18_021F1FDC(r5, 0x31);
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r4, #0xd4
    // add r2, sp, #0
    // sub r1, r6, r0
    // add r0, sp, #0
    // strh r1, [r0]
    ov18_021F2424(r5, 0x35, (6 - 1));
    SpriteManager_FindPlttResourceOffset(*((u32*)(r5 + 0x0000066C)), 0x0000C55A, 2);
    ManagedSprite_SetPaletteOverride(*((u32*)(r4 + (0x67 << 4))), r0);
    // add r6, #0x18
    // add r5, #0xb0
    ManagedSprite_SetDrawFlag(*((u32*)(r5 + (0x67 << 4))), 0);
    ManagedSprite_SetPriority(*((u32*)(r5 + r6)), 2);
}





void ov18_021F3294(void) {
}





void ov18_021F32B8(void) {
    // add r2, r6, r2
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + 0x0000066C)), (0x34 * 0));
    // add r1, r5, r1
    // str r0, [r1, r7]
    ov18_021F11C0(r5, r4, 0);
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + (0x00000668 + 4))), ov18_021FA520, (2 << 0x14));
    // str r0, [r5, r1]
    ov18_021F11C0(r5, 0x2b, 0);
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + (0x00000668 + 4))), ov18_021FB54C, (2 << 0x14));
    // str r0, [r5, r1]
    // sub r0, #0x70
    // sub r1, #0x6c
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r5 + 0x000006D8)), *((u32*)(r5 + 0x000006D8)), ov18_021FB580, (2 << 0x14));
    // str r0, [r5, r1]
    ov18_021F11C0(r5, 0x1b, 0);
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // add r7, sp, #0
    // strh r0, [r7]
    *((u16*)(r7 + 2)) = 0x48;
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + 0x0000066C)), (6 - 1));
    // add r2, r5, r1
    // str r0, [r2, r1]
    ov18_021F11C0(r5, r4, 0);
    ov18_021F118C(r5, r4);
    // sub r0, #0x1d
    _s32_div_f(((r4 << 0x10) >> 0x10), 5);
    // add r0, #0x20
    // strh r0, [r7]
    _s32_div_f(r6, 5);
    // add r1, #0x38
    *((u16*)(r7 + 2)) = (0x28 * r0);
    // add r2, sp, #0
    SpriteSystem_NewSprite(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + 0x0000066C)));
    // add r2, r5, r1
    // str r0, [r2, r1]
    ov18_021F118C(r5, r4, r6);
    ov18_021F11C0(r5, r4, 0);
    ov18_021F1424(r5, 0x3b);
}





void ov18_021F3438(void) {
}





void ov18_021F3448(void) {
    ov18_021F10E8(0x1a);
    ov18_021F10E8(r4, 0x1b);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C59E);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55F);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55C);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55C);
}





void ov18_021F3494(void) {
    ov18_021F11C0(0x1c, 0);
    ov18_021F11C0(0x1c, 1);
    ov18_021F118C(r4, 0x1c, *((u32*)(r4 + 0x0000188C)));
}





void ov18_021F34C4(void) {
}





void ov18_021F34EC(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r0]
}





void ov18_021F3544(void) {
}





void ov18_021F3560(void) {
    ov18_021F3AD0(r2);
    ov18_021F36D4(r5, r0, 5, 1);
    ov18_021F3AD0(r5, r4);
    ov18_021F36D4(r5, r0, 0xb, 0);
    ov18_021F38F0(r5, 6, *((u16*)(*((u32*)(r5 + 0x00001850)) + (r6 << 2))), *((u32*)(r5 + 0x00001850)));
    ov18_021F38F0(r5, 0xc, *((u16*)(*((u32*)(r5 + 0x00001850)) + (r4 << 2))), *((u32*)(r5 + 0x00001850)));
    ov18_021F3AD0(r6);
    ov18_021F37D4(r5, r0, 5, 1);
    ov18_021F3AD0(r5, r4);
    ov18_021F37D4(r5, r0, 0xb, 0);
    // add r2, r3, r2
    ov18_021F39C4(r5, 6, *((u16*)((r6 << 2) + 2)), *((u32*)(r5 + 0x00001850)));
    // add r2, r3, r2
    ov18_021F39C4(r5, 0xc, *((u16*)((r4 << 2) + 2)), *((u32*)(r5 + 0x00001850)));
    ov18_021F3A64(r5, r6, 1);
    ov18_021F3A64(r5, r4, 3);
}





void ov18_021F3618(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // ov18_021F362C: ; jump table
    ov18_021F34EC(1);
    ov18_021F3544(r4, 0);
    ov18_021F34EC(0);
    ov18_021F3544(r4, 0);
    ov18_021F34C4(1);
    ov18_021F3544(r4, 1);
    ov18_021F118C(r4, 5, 0x43);
    ov18_021F118C(r4, 0xb, 0x44);
    ov18_021F3560(r4, *((u32*)(r4 + 0x00001878)), *((u32*)(r4 + (0x00001878 + 4))), 0);
    ov18_021F34C4(1);
    ov18_021F3544(r4, 1);
    ov18_021F118C(r4, 5, 0x29);
    ov18_021F118C(r4, 0xb, 0x2a);
    ov18_021F3560(r4, *((u32*)(r4 + (0x62 << 6))), *((u32*)(r4 + ((0x62 << 6) + 4))), 1);
    ov18_021F34C4(r4, 1);
    ov18_021F3544(r4, 0);
}





void ov18_021F36D4(void) {
    // add r1, r5, r6
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    // str r3, [sp]
    ManagedSprite_GetPositionXY(*((u32*)(r1 + (0x67 << 4))));
    // add r1, sp, #4
    // ldrsh r4, [r1, r0]
    // add r7, r5, r0
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r7 + r6)));
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r7 + r6)), (r4 << 0x10), 0);
    // add r1, sp, #4
    // add r7, r5, r0
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r7 + r6)));
    // sub r1, #0x14
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r7 + r6)), (r4 << 0x10), 0);
    // add r1, r5, r6
    // sub r1, #0xc
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r1 + 0x00000678)), (r4 << 0x10), 0);
    // add r1, r5, r6
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r1 + 0x0000067C)), ((r4 + 4) << 0x10), 0);
    // add r1, r5, r6
    // add r1, #0xc
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r1 + (0x1a << 6))), (r4 << 0x10), 0);
    // ldr r0, [sp]
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r5 + (0x67 << 4))));
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x67 << 4))), (r4 << 0x10), 0);
}





void ov18_021F37D4(void) {
    // add r1, r5, r6
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    // str r3, [sp]
    ManagedSprite_GetPositionXY(*((u32*)(r1 + (0x67 << 4))));
    // add r1, sp, #4
    // ldrsh r4, [r1, r0]
    // add r7, r5, r0
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r7 + r6)));
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r7 + r6)), (r4 << 0x10), 0);
    // add r1, sp, #4
    // add r7, r5, r0
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r7 + r6)));
    // sub r1, #0x14
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r7 + r6)), (r4 << 0x10), 0);
    // add r1, r5, r6
    // sub r1, #0xc
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r1 + 0x00000678)), (r4 << 0x10), 0);
    // add r1, r5, r6
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r1 + 0x0000067C)), ((r4 - 4) << 0x10), 0);
    // add r1, r5, r6
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r1 + (0x1a << 6))), ((r4 + 4) << 0x10), 0);
    // add r1, r5, r6
    // add r1, #0x14
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r1 + 0x00000684)), (r4 << 0x10), 0);
    // ldr r0, [sp]
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r5 + (0x67 << 4))));
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x67 << 4))), (r4 << 0x10), 0);
}





void ov18_021F38F0(void) {
    // add r6, #0xbd
    _u32_div_f((0x00002710 * r2), 0xfe);
    _u32_div_f((r0 + 5), 0xa);
    _u32_div_f(r0, 0xc);
    _u32_div_f(r6, 0xc);
    _u32_div_f(r7, 0xa);
    // add r2, #0x2b
    ov18_021F118C(r5, r4, r0);
    ov18_021F11C0(r5, r4, 1);
    ov18_021F11C0(r5, r4, 0);
    _u32_div_f(r7, 0xa);
    // add r2, #0x2b
    ov18_021F118C(r5, (r4 + 1), r1);
    ov18_021F11C0(r5, (r4 + 1), 1);
    _u32_div_f(r6, 0xa);
    // add r2, #0x2b
    ov18_021F118C(r5, (r4 + 2), r0);
    ov18_021F11C0(r5, (r4 + 2), 1);
    _u32_div_f(r6, 0xa);
    // add r2, #0x2b
    ov18_021F118C(r5, (r4 + 3), r1);
    ov18_021F11C0(r5, (r4 + 3), 1);
    ov18_021F11C0(r5, (r4 + 4), 0);
}





void ov18_021F39C4(void) {
    // str r2, [sp]
    // str r0, [sp]
    // add r0, r2, r1
    _u32_div_f(0x00018696, (0x0000C350 << 1), (r2 * 0x00035D2E));
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    _u32_div_f(0, 0x00002710);
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // add r1, r6, r4
    // add r2, #0x2b
    ov18_021F118C(r7, r0);
    // add r1, r6, r4
    ov18_021F11C0(r7, 1);
    // add r1, r6, r4
    ov18_021F11C0(r7, 0);
    // ldr r0, [sp]
    _u32_div_f(r5);
    // str r1, [sp]
    _u32_div_f(r5, 0xa);
    // str r0, [sp, #4]
}





void ov18_021F3A64(void) {
}





void ov18_021F3AB0(void) {
    // add r1, r0, r1
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // sub r0, #0x34
}





void ov18_021F3AD0(void) {
    // add r1, #0x34
}





void ov18_021F3AD8(void) {
    ov18_021F11C0(0x11, 1);
    ov18_021F2AC0(r4, 0x11);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r4 + 0x000006B4)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r1]
    // sub r1, r2, r1
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x000006B4)), ((0x12 << 4) << 0x10), 0);
}





void ov18_021F3B2C(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x000006B4)));
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r1, r1, r4
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x000006B4)), (2 << 0x10), 0);
}





void ov18_021F3B60(void) {
}





void ov18_021F3BA4(void) {
    ov18_021F11C0(0x2b, 0);
    ov18_021F11C0(0x2b, 1);
    ov18_021F118C(r4, 0x2b, *((u32*)(r4 + 0x0000188C)));
}





void ov18_021F3BD4(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r0 + (0x6e << 4))));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, r2, r4
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x6e << 4))), 2, (0 << 0x10));
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r5 + 0x0000071C)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, r2, r4
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x0000071C)), 2, (0 << 0x10));
}





void ov18_021F3C30(void) {
    // sub r2, #0x90
    ManagedSprite_SetPositionXY(*((u32*)(r0 + 0x000006D4)), 0x30, 0x30);
    ov18_021F11C0(r4, 0x19, 1);
}





void ov18_021F3C54(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x000006D4)));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, r2, r4
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x000006D4)), 2, (0 << 0x10));
}





void ov18_021F3C88(void) {
    ManagedSprite_SetPositionXY(*((u32*)(r0 + 0x000006D4)), 0x30, 0x18);
    ov18_021F11C0(r4, 0x19, 1);
}





void ov18_021F3CA8(void) {
    // add r6, r4, r2
    // tst r2, r7
    // eor r1, r7
    // strb r1, [r0]
    // strb r1, [r5]
    // strb r1, [r0]
    // strb r0, [r5]
    // strb r1, [r0]
    // strb r1, [r5]
    // eor r1, r7
    // strb r1, [r0]
    Pokedex_SpeciesGetLastSeenGender(*((u32*)*((u32*)r0)), *((u16*)(r0 + (0x000018A4 - 2))), 0, *((u8*)(r6 + r1)));
    // strb r0, [r5]
    // strb r2, [r0]
    // strb r2, [r5]
    // strb r0, [r5]
    // strb r0, [r5]
}





void ov18_021F3D34(void) {
    ov18_021F2648();
    SpriteSystem_NewSprite(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), ov18_021FA554);
    // str r0, [r4, r1]
    ManagedSprite_SetPaletteOverride(*((u32*)(r4 + (0x67 << 4))), 4);
    ov18_021F11C0(r4, 0, 0);
}





void ov18_021F3D6C(void) {
}





void ov18_021F3D80(void) {
}





void ov18_021F3D98(void) {
    ov18_021F3E24();
    // sub r2, #0x34
    // add r1, r1, r2
    ov18_021F11EC(r7, ov18_021FA610, 0x34);
    // str r0, [r5, r1]
    // add r4, #0x34
    ov18_021F69C0(r7, 1);
    // add r2, sp, #0
    // add r2, #1
    // add r3, sp, #0
    ov18_021F3CA8(r7, 0);
    // add r2, sp, #0
    ov18_021F1534(r7, *((u16*)(r7 + 0x000018A2)), *((u8*)(r2 + 1)), 1);
    ov18_021F40E4(r7);
    ov18_021F40A0(r7);
    ov18_021F4188(r7);
}





void ov18_021F3E08(void) {
}





void ov18_021F3E24(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + (0x00000668 + 4))), *((u32*)(r0 + 0x00000854)), 0x4c);
    sub_02074490();
    // sub r2, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + 0x00000858)), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    sub_0207449C();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000858)), r0);
    sub_020744A8();
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000858)), r0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x73);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x74);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x75);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x77);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x78);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x79);
}





void ov18_021F3FDC(void) {
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x0000066C)), 0x0000C550);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C551);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C550);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C550);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C59C);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55E);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55A);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55A);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C59A);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55C);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C559);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C559);
}





void ov18_021F4080(void) {
}





void ov18_021F40A0(void) {
    // str r1, [sp]
    // asr r2, r2, #0x18
    ov18_021F61DC(5, (*((u32*)(r0 + (0x19 << 8))) << 0x18), ov18_021FA35A);
    ov18_021F65EC(r4);
    // ldrsb r1, [r4, r2]
    // add r2, #0x36
    // asr r2, r2, #0x18
    ov18_021F619C(r4, (*((u32*)(r4 + 0x000018CA)) << 0x18), 6);
}





void ov18_021F40E4(void) {
    // asr r0, r1, #4
    // add r0, r1, r0
    // asr r0, r1, #4
    // add r0, r1, r0
    // sub r2, #0x16
    // add r2, #0x44
    // add r3, #0x2c
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // str r1, [sp]
}





void ov18_021F4134(void) {
    // ldrsb r1, [r0, r1]
    // asr r1, r2, #4
    // add r1, r2, r1
    // asr r1, r1, #5
    ov18_021F11C0(2, 0);
    ov18_021F11C0(2, 1);
    // asr r1, r2, #4
    // add r1, r2, r1
    // asr r1, r1, #5
    ov18_021F11C0(2, 1);
    ov18_021F11C0(2, 0);
}





void ov18_021F4188(void) {
    // add r6, #0x24
    ov18_021F11EC(r0, ov18_021FA4B8);
    // str r0, [r6, r7]
    ov18_021F1160(r5, r4, 1);
    ov18_021F11C0(r5, r4, 0);
}





void ov18_021F41C4(void) {
    // str r3, [sp]
    // ldr r4, [sp, #0x18]
    ov18_021E8B24(r1);
    ov18_021E8B0C(r5, 4, 1, 3);
    // add r1, r2, r1
    ov18_021E8B5C(r5, *((u8*)((r5 * 0x24) + 1)), 1, 2);
    // add r3, r2, r1
    // strb r5, [r4]
    // strb r5, [r4]
    // strb r5, [r4]
    // strb r5, [r4]
    // strb r5, [r4]
    // strb r5, [r4]
    // strb r5, [r4]
    // strb r5, [r4]
    // strb r5, [r4]
    // strb r5, [r4]
    // strb r5, [r4]
    // strb r5, [r4]
    // strb r5, [r4]
    // add r2, r4, r2
    // asr r2, r2, #1
    // ldrsb r5, [r6, r4]
    // sub r0, r0, r4
    // add r0, r2, r0
    // add r0, #0x40
    // strh r0, [r7]
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r1, r2, r0
    // ldr r0, [sp]
    // add r1, #0x28
    // strh r1, [r0]
}





void ov18_021F42E4(void) {
    // mov ip, r1
    // sub r2, #0x40
    // ldrsb r3, [r0, r2]
    // ldr r5, [sp, #0x18]
    // sub r2, r7, r2
    // add r2, #0x44
    // strh r2, [r6]
    // add r0, r0, r1
    // add r0, #0x2c
    // strh r0, [r4]
    // mov r0, ip
    ov18_021E8B18((*((u8*)(*((u32*)(r0 + 0x00001908)) + 1)) << 3), (r1 << 2), 0x00001908);
    // sub r1, #0xb2
    // strb r0, [r5]
    // ldrsh r0, [r4, r0]
    // strh r0, [r4]
    // strb r1, [r5]
    // ldrsh r0, [r6, r1]
    // strh r0, [r6]
    // ldrsh r0, [r4, r1]
    // strh r0, [r4]
    // sub r1, #0xac
    // sub r0, r0, r1
    // strb r0, [r5]
    // ldrsh r0, [r4, r0]
    // strh r0, [r4]
    // strb r0, [r5]
}





void ov18_021F4384(void) {
    // add r3, sp, #0xc
    // str r1, [sp, #4]
    // add r2, sp, #0x10
    // add r3, #2
    // str r1, [sp]
    ov18_021F12C8(2);
    // str r0, [sp, #0x14]
    // ldrsb r1, [r5, r0]
    // add r0, #0x36
    // add r6, sp, #8
    ov18_021E8AB0(r5, 1);
    // add r0, sp, #8
    // str r0, [sp]
    // add r3, sp, #8
    // add r2, sp, #0xc
    // add r3, #2
    ov18_021F41C4(r5, *((u32*)(*((u32*)(r5 + 0x000018FC)) + (r4 << 2))), *((u32*)(r5 + 0x000018FC)));
    // str r0, [sp]
    // add r3, sp, #8
    // add r2, sp, #0xc
    // add r3, #2
    ov18_021F42E4(r5, *((u32*)(*((u32*)(r5 + 0x000018FC)) + (r4 << 2))));
    ov18_021E8B18(*((u32*)(*((u32*)(r5 + 0x000018FC)) + r7)));
    // add r1, sp, #0x14
    ov18_021F47C0();
    // str r0, [sp]
    // add r7, #8
    // ldrsh r2, [r6, r2]
    // ldrsh r3, [r6, r3]
    ov18_021F1294(r5, r4, 4, 2);
    ov18_021F118C(r5, r7, *((u8*)r6));
    ov18_021F11C0(r5, r7, 1);
    // add r3, r0, r1
    // ldrsh r1, [r6, r0]
    // ldrsh r7, [r6, r0]
    // sub r0, r1, r2
    // add r0, r1, r2
    // ldrsh r1, [r6, r0]
    // ldrsh r0, [r6, r0]
    // sub r3, r1, r2
    // add r1, r1, r2
    // str r0, [sp, #4]
    // add r4, #8
    // ldr r1, [sp, #0x14]
    ov18_021F47F8(r5, (*((u8*)r6) << 1), (((r4 + 1) << 0x10) >> 0x10));
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // add r4, sp, #8
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    ov18_021F4974(r5, r4, 8, 6);
    // str r0, [sp, #4]
    ov18_021F4620(r5);
    // ldrsb r1, [r5, r1]
    ov18_021E8AB0(r5, 0x000018CA);
    // add r0, sp, #8
    // str r0, [sp]
    // sub r1, #0x32
    // ldrsb r1, [r5, r1]
    // add r3, sp, #8
    // add r2, sp, #0xc
    // add r3, #2
    ov18_021F41C4(r5, *((u32*)(*((u32*)(r5 + 0x000018FC)) + (0x000018FC << 2))), *((u32*)(r5 + 0x000018FC)));
    // str r4, [sp]
    // add r3, sp, #8
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r4]
    ov18_021F1294(r5, 9, 4);
    // add r2, sp, #8
    ov18_021F118C(r5, 9, *((u8*)r2));
    ov18_021F11C0(r5, 9, 1);
    // add r0, sp, #8
    // ldrsh r2, [r0, r1]
    // ldrsh r1, [r0, r1]
    // sub r6, r2, r3
    // add r2, r2, r3
    // ldrsh r3, [r0, r2]
    // ldrsh r2, [r0, r2]
    // sub r0, r3, r1
    // add r0, r3, r1
    // str r0, [sp, #4]
    // str r0, [sp]
    // sub r1, #0x32
    // ldrsb r1, [r5, r1]
    // add r3, sp, #8
    // add r2, sp, #0xc
    // add r3, #2
    ov18_021F42E4(r5, *((u32*)(*((u32*)(r5 + (*((u8*)(ov18_021FA3B0 + (*((u8*)r0) << 1))) >> 1))) + ((*((u8*)(ov18_021FA3B0 + (*((u8*)r0) << 1))) >> 1) << 2))), *((u32*)(r5 + (*((u8*)(ov18_021FA3B0 + (*((u8*)r0) << 1))) >> 1))), (*((u8*)(ov18_021FA3B0 + (*((u8*)r0) << 1))) >> 1));
    // sub r0, #0x32
    // ldrsb r0, [r5, r0]
    ov18_021E8B18(*((u32*)(*((u32*)(r5 + 0x000018FC)) + (0x000018FC << 2))), *((u32*)(r5 + 0x000018FC)));
    // add r1, sp, #0x14
    ov18_021F47C0();
    // str r4, [sp]
    // add r3, sp, #8
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r4]
    ov18_021F1294(r5, 9, 4);
    // add r2, sp, #8
    ov18_021F118C(r5, 9, *((u8*)r2));
    ov18_021F11C0(r5, 9, 1);
    // add r0, sp, #8
    // ldrsh r2, [r0, r1]
    // ldrsh r1, [r0, r1]
    // sub r6, r2, r3
    // add r2, r2, r3
    // ldrsh r3, [r0, r2]
    // ldrsh r2, [r0, r2]
    // sub r0, r3, r1
    // add r0, r3, r1
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x14]
    ov18_021F47F8(r5, (*((u8*)(ov18_021FA3B0 + (*((u8*)r0) << 1))) >> 1), 0xa, (*((u8*)(ov18_021FA3B0 + (*((u8*)r0) << 1))) >> 1));
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // add r4, sp, #8
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    ov18_021F4974(r5, 0xa, 8, 6);
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    ov18_021F69C0(r5);
}





void ov18_021F4620(void) {
}





void ov18_021F463C(void) {
    // str r1, [sp, #8]
    // str r1, [sp, #4]
    // ldrsb r2, [r5, r1]
    // add r1, #0x36
    ov18_021E8ACC(r0, 1, ((*((u8*)(r0 + 0x000018CB)) << 0x19) >> 0x1f));
    // add r1, r5, r0
    ManagedSprite_SetPaletteOverride(*((u32*)(r1 + (0x69 << 4))), (((*((u8*)(r5 + r7)) << 0x19) >> 0x1f) + 4));
    // add r1, #8
    ov18_021F11C0(r5, r4, 1);
    // add r1, #8
    ov18_021F11C0(r5, r4, 0);
    ov18_021E8AB0(r5, r4);
    ov18_021E8B18(*((u32*)(*((u32*)(r5 + 0x000018FC)) + (r4 << 2))), *((u32*)(r5 + 0x000018FC)));
    // add r1, sp, #4
    ov18_021F47C0();
    ov18_021E8AB0(r5, r4);
    ov18_021E8B18(*((u32*)(*((u32*)(r5 + 0x000018FC)) + (r4 << 2))), *((u32*)(r5 + 0x000018FC)));
    // add r1, sp, #8
    ov18_021F47C0();
    // add r4, #8
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    ov18_021F48AC(r5, (((r4 + 1) << 0x10) >> 0x10));
    ov18_021F4620();
    // ldrsb r1, [r5, r2]
    ov18_021E8ACC(r5, ((*((u8*)(r5 + (0x000018CA + 1))) << 0x19) >> 0x1f));
    ManagedSprite_SetPaletteOverride(*((u32*)(r5 + 0x00000694)), (((*((u8*)(r5 + 0x000018CB)) << 0x19) >> 0x1f) + 4));
    ov18_021F11C0(r5, 9, 1);
    ov18_021F11C0(r5, 9, 0);
    // ldrsb r1, [r5, r1]
    ov18_021E8AB0(r5, 0x000018CA);
    // sub r0, #0x32
    // ldrsb r0, [r5, r0]
    ov18_021E8B18(*((u32*)(*((u32*)(r5 + 0x000018FC)) + (0x000018FC << 2))), *((u32*)(r5 + 0x000018FC)));
    // add r1, sp, #4
    ov18_021F47C0();
    // ldrsb r1, [r5, r1]
    ov18_021E8AB0(r5, 0x000018CA);
    // sub r0, #0x32
    // ldrsb r0, [r5, r0]
    ov18_021E8B18(*((u32*)(*((u32*)(r5 + 0x000018FC)) + (0x000018FC << 2))), *((u32*)(r5 + 0x000018FC)));
    // add r1, sp, #8
    ov18_021F47C0();
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    ov18_021F48AC(r5, 0xa);
}





void ov18_021F47C0(void) {
    // str r0, [r1]
    // sub r2, #0xed
    // str r0, [r1]
    // str r0, [r1]
}





void ov18_021F47F8(void) {
    // tst r1, r6
    // str r1, [sp]
    // tst r1, r0
    // str r0, [sp]
    // tst r0, r6
    // str r0, [sp]
    // str r0, [sp]
}





void ov18_021F48AC(void) {
    // tst r1, r2
    // tst r1, r2
    ov18_021F11C0(r3, 0);
    ov18_021F11C0(r4);
    // add r1, r5, r0
    // ldr r1, [sp, #0x18]
    ManagedSprite_SetPaletteOverride(*((u32*)(r1 + (0x67 << 4))));
    // tst r1, r0
    // tst r0, r7
    ov18_021F11C0(r5, (r4 + 1), 0);
    ov18_021F11C0(r5, r4, 1);
    // add r1, r5, r0
    // ldr r1, [sp, #0x18]
    ManagedSprite_SetPaletteOverride(*((u32*)(r1 + (0x67 << 4))));
    // tst r1, r0
    // tst r0, r7
    ov18_021F11C0(r5, (r4 + 1), 0);
    ov18_021F11C0(r5, (r4 + 1), 0);
    ov18_021F11C0(r5, r4, 1);
    ov18_021F11C0(r5, (r4 + 1), 1);
    // ldr r6, [sp, #0x18]
    // add r1, r5, r4
    ManagedSprite_SetPaletteOverride(*((u32*)(r1 + (0x67 << 4))), r6);
    // add r1, r5, r4
    ManagedSprite_SetPaletteOverride(*((u32*)(r1 + 0x00000674)), r6);
}





void ov18_021F4974(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r4, r0, r1
    ManagedSprite_GetDrawFlag(*((u32*)(r4 + (0x67 << 4))), (r1 << 2));
    // str r0, [sp]
    // add r2, sp, #0xc
    // ldr r0, [sp, #4]
    // add r2, #2
    // add r3, sp, #0xc
    ov18_021F12C8(2, r5);
    // add r2, sp, #0xc
    // ldrsh r2, [r2, r1]
    // sub r1, r2, r0
    // add r0, r2, r0
    // add r2, sp, #0xc
    // ldrsh r2, [r2, r1]
    // sub r1, r2, r0
    // add r0, r2, r0
    // ldr r0, [sp, #8]
}





void ov18_021F49F8(void) {
    ov18_021F4A6C();
    // sub r2, #0x34
    // add r1, r1, r2
    ov18_021F11EC(r7, ov18_021FA7B0, 0x34);
    // str r0, [r5, r1]
    // add r4, #0x34
    ov18_021F4D64(r7, (0x67 << 4));
    ov18_021F4DDC(r7);
    ov18_021F4E28(r7);
    ov18_021F11C0(r7, 3, 0);
    ov18_021F11C0(r7, 5, 0);
}





void ov18_021F4A50(void) {
}





void ov18_021F4A6C(void) {
    ov18_021F1324(1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x4c);
    sub_02074490();
    // sub r2, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + 0x00000858)), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x6a);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x6b);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x70);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x71);
    PlayerProfile_GetTrainerGender(*((u32*)(*((u32*)r4) + 4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x69);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x69);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x6f);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 2, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + r1)), *((u32*)(r4 + (r1 + 4))), *((u32*)(r4 + 0x00000854)), 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x6d);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))), *((u32*)(r4 + 0x00000854)), 0x72);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 2, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r1, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r4 + (0x00000854 - 4))), 3, *((u32*)(r4 + 0x00000668)), *((u32*)(r4 + (0x00000668 + 4))));
}





void ov18_021F4CC4(void) {
    ov18_021F13DC(1);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C551);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C551);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55A);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55A);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55B);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55B);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C59B);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C59C);
    SpriteManager_UnloadCharObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C59D);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55D);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x0000066C)), 0x0000C55E);
}





void ov18_021F4D64(void) {
    // tst r2, r0
    // eor r0, r3
    ov18_021F14FC(r0, *((u16*)(r0 + 0x000018A2)), 0, 2);
    ov18_021F1534(r5, *((u16*)(r5 + 0x000018A2)), r4, 3);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r5 + 0x0000068C)), 2);
    ManagedSprite_SetAffineZRotation(*((u32*)(r5 + 0x0000068C)), 0);
    ManagedSprite_SetAffineTranslation(*((u32*)(r5 + 0x0000068C)), 0, (0 - 4));
}





void ov18_021F4DDC(void) {
    // add r2, sp, #4
    // add r2, #1
    // add r3, sp, #4
    ov18_021F3CA8(0);
    // add r4, r5, r1
    // str r0, [sp]
    // sub r1, #0x2a
    // add r3, sp, #4
    ov18_021F69E8(r5, *((u16*)(r5 + 0x000018CC)), *((u8*)(r3 + 1)), *((u8*)r3));
    // ldrsh r1, [r1, r3]
    // ldrsh r2, [r2, r3]
    ov18_021F6AB0(r5, *((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)), (*((u16*)(r5 + 0x000018A2)) << 1));
}





void ov18_021F4E28(void) {
    // add r2, r4, r1
    // sub r1, #0x2a
    // ldrsh r1, [r2, r1]
    FX_Div((1 << 0x14), ((*((u16*)(r0 + 0x000018CC)) << 1) << 0xc), *((u32*)(r2 + 4)));
    _fflt();
    _fdiv(0x45800000);
    ManagedSprite_SetAffineOverwriteMode(*((u32*)(r4 + 0x00000674)), 2);
    ManagedSprite_SetAffineScale(*((u32*)(r4 + 0x00000674)), r5, r5);
    // add r2, sp, #4
    // str r0, [sp]
    // add r2, #2
    // add r3, sp, #4
    ov18_021F12C8(r4, 1);
    // str r2, [sp]
    // add r5, sp, #4
    // ldrsh r2, [r5, r2]
    // ldrsh r5, [r5, r3]
    // sub r6, #0x2a
    // ldrsh r3, [r3, r4]
    // add r3, r5, r3
    // asr r3, r3, #0x10
    ov18_021F1294(r4, 1, 2, (*((u32*)(r4 + 0x000018CC)) << 0x10));
}





void ov18_021F4EB0(void) {
    // asr r0, r0, #4
    // ldrsh r7, [r0, r1]
    _fflt(r7, ((r0 << 1) << 1));
    _fdiv(0x45800000);
    _fgr(0);
    _fflt(r7);
    _fdiv(0x45800000);
    _fmul(0x45800000, r0);
    _fadd((0x3f << 0x18), r0);
    _fflt(r7);
    _fdiv(0x45800000);
    _fmul(0x45800000, r0);
    _fsub((0x3f << 0x18));
    _ffix();
    // ldrsh r6, [r0, r1]
    _fflt(r6, ((r6 + 1) << 1));
    _fdiv(0x45800000);
    _fgr(0);
    _fflt(r6);
    _fdiv(0x45800000);
    _fmul(0x45800000, r0);
    _fadd((0x3f << 0x18), r0);
    _fflt(r6);
    _fdiv(0x45800000);
    _fmul(0x45800000, r0);
    _fsub((0x3f << 0x18));
    _ffix();
    // ldrsh r1, [r5, r2]
    // asr r6, r6, #0xc
    // add r1, r1, r6
    // strh r1, [r5]
    // ldrsh r2, [r4, r2]
    // asr r0, r1, #0xc
    // add r0, r2, r0
    // strh r0, [r4]
}





void ov18_021F4F98(void) {
    // add r1, sp, #0x1c
    // add r2, sp, #0x20
    // str r0, [sp]
    // add r4, sp, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
}





void ov18_021F4FC8(void) {
    // str r1, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    // add r6, sp, #4
    // ldrsh r0, [r6, r3]
    // sub r0, #0x10
    // strh r0, [r6]
    // str r0, [sp]
    // ldrsh r2, [r6, r2]
    // ldrsh r3, [r6, r3]
}





void ov18_021F5000(void) {
    // sub r2, r2, r4
    // str r1, [sp]
    ov18_021F4F98(8, ((0xFFFFC000 << 0x10) >> 0x10), 0x80);
    // sub r2, r2, r4
    // str r0, [sp]
    ov18_021F4F98(r5, 9, (((1 << 0xe) << 0x10) >> 0x10), 0x80);
    ov18_021F4FC8(r5, 2, 8);
    ov18_021F4FC8(r5, 4, 9);
}





void ov18_021F504C(void) {
    // str r5, [r4]
    *((u32*)(r1 + 4)) = 0;
    *((u8*)(r1 + 0xb)) = 0;
    PlayerProfile_GetTrainerGender(*((u32*)(*((u32*)r0) + 4)));
    // add r1, #0x56
    *((u8*)(r4 + 0xa)) = 1;
    // sub r0, r0, r2
    _u32_div_f(*((u32*)(*((u32*)(r5 + 0x0000184C)) + (*((u16*)(r5 + 0x0000184C)) << 2))), 0xa, 0);
    *((u16*)(r4 + 8)) = 0;
}





void ov18_021F50C0(void) {
    // str r0, [sp]
    // add r2, sp, #8
    // add r2, #2
    // add r3, sp, #8
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    // add r0, r1, r0
    // add r2, sp, #4
    // ldrsh r3, [r2, r1]
    // asr r0, r0, #0xc
    // add r0, r3, r0
    // ldrsh r3, [r2, r0]
    // asr r0, r0, #0xc
    // add r0, r3, r0
    // strh r0, [r2]
    // ldrsh r3, [r2, r1]
    // str r0, [sp]
    // ldrsh r2, [r2, r3]
    // str r0, [sp]
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    // str r0, [sp]
    // ldrsh r2, [r2, r5]
    // str r0, [sp]
    // add r4, sp, #4
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
}





void ov18_021F516C(void) {
    // blx r1
}





void ov18_021F5180(void) {
    // neg r1, r1
    // neg r1, r2
}





void ov18_021F5198(void) {
    // neg r1, r1
    // neg r1, r2
    // neg r1, r3
}





void ov18_021F51BC(void) {
}





void ov18_021F51CC(void) {
    PlaySE(0x000008EB);
    // mvn r2, r2
    // sub r3, #0xc0
    ov18_021F5198(r4, (1 << 8), 0x1f, 0x1f);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r1, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0xc));
}





void ov18_021F5238(void) {
    PlaySE(0x000008EB);
    // mvn r2, r2
    // sub r3, #0xe0
    ov18_021F5198(r4, (0x12 << 4), 0x1f, 0x1f);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r1, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0xc));
}





void ov18_021F52A4(void) {
    PlaySE(0x000008EB);
    // mvn r2, r2
    ov18_021F5198(r4, (5 << 6), 0x1f, 0xFFFFFEE0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r1, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0xc));
}





void ov18_021F5310(void) {
    PlaySE(0x000008EB);
    // mvn r2, r2
    ov18_021F5198(r4, (0x16 << 4), 0x1f, 0xFFFFFEC0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r1, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0xc));
}





void ov18_021F537C(void) {
    PlaySE(0x000008EB);
    // mvn r2, r2
    ov18_021F5198(r4, (6 << 6), 0x1f, 0xFFFFFEA0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r1, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0xc));
}





void ov18_021F53E8(void) {
    PlaySE(0x000008EB);
    // mvn r2, r2
    ov18_021F5198(r4, (7 << 6), 0x3f, 0xFFFFFEC0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r1, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0xc));
}





void ov18_021F5454(void) {
    PlaySE(0x000008EB);
    // mvn r2, r2
    ov18_021F5198(r4, (2 << 8), 0x3f, 0xFFFFFE80);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r1, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0xc));
}





void ov18_021F54C0(void) {
    // str r0, [sp]
    // add r2, sp, #8
    // add r2, #2
    // add r3, sp, #8
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    // add r1, sp, #4
    // ldrsh r3, [r1, r2]
    // ldrsh r0, [r1, r0]
    // str r0, [sp]
    // add r4, sp, #4
    // ldrsh r3, [r4, r3]
    // ldrsh r2, [r4, r2]
    // add r3, #0xc0
    // asr r3, r3, #0x10
    // str r2, [sp]
    // add r4, sp, #4
    // ldrsh r3, [r4, r3]
    // ldrsh r2, [r4, r2]
    // add r3, #0xc0
    // asr r3, r3, #0x10
}





void ov18_021F555C(void) {
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    // add r5, sp, #4
    // ldrsh r1, [r5, r3]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // strh r0, [r5]
    // str r0, [sp]
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    // ldrsh r1, [r5, r3]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // strh r0, [r5]
    // str r2, [sp]
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
}





void ov18_021F55D8(void) {
    // str r0, [sp]
    // add r2, sp, #8
    // add r2, #2
    // add r3, sp, #8
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    // add r2, sp, #4
    // ldrsh r3, [r2, r0]
    // ldrsh r0, [r2, r0]
    // sub r3, #0x10
    // str r0, [sp]
    // ldrsh r2, [r2, r4]
    // asr r3, r3, #0x10
}





void ov18_021F5638(void) {
    PlaySE(0x000008EB);
    ov18_021F5180(r5, (3 << 8), 0);
    *((u8*)(r5 + 0xb)) = (*((u8*)(r5 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r5) + 0x0000068C)), *((u32*)(r5 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r5) + 0x0000068C)), *((u32*)r5));
    ov18_021F5000(*((u32*)r5), r0);
    // add r0, r1, r0
    *((u32*)(r5 + 0xc)) = *((u32*)(r5 + 0x10));
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r5) + 0x0000068C)), (0xf6 << 8), *((u32*)r5));
    ov18_021F5000(*((u32*)r5), (0xf6 << 8));
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r5) + 0x0000068C)), (0xa << 8), *((u32*)r5));
    ov18_021F5000(*((u32*)r5), (0xa << 8));
}





void ov18_021F56DC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F56F2: ; jump table
    PlaySE(0x000008EC);
    ov18_021F5180(r4, (3 << 8), 0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xf6 << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xf6 << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xa << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xa << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    // mvn r1, r1
    ov18_021F54C0(r4, 3, 1);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ov18_021F55D8(r4);
}





void ov18_021F57B4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F57CA: ; jump table
    PlaySE(0x000008EC);
    ov18_021F5180(r4, (1 << 0xa), 0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xf6 << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xf6 << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xa << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xa << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    // mvn r1, r1
    ov18_021F54C0(r4, 7, 1);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ov18_021F55D8(r4);
}





void ov18_021F588C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F58A2: ; jump table
    PlaySE(0x000008EC);
    ov18_021F5180(r4, (1 << 0xa), 0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xf6 << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xf6 << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xa << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xa << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    // mvn r1, r1
    ov18_021F54C0(r4, 0xb, 1);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ov18_021F55D8(r4);
}





void ov18_021F5964(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F597A: ; jump table
    PlaySE(0x000008ED);
    ov18_021F5180(r4, (5 << 8), 0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xf6 << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xf6 << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xa << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xa << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    // mvn r1, r1
    ov18_021F54C0(r4, 0xd, 1);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ov18_021F55D8(r4);
}





void ov18_021F5A3C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F5A52: ; jump table
    PlaySE(0x000008ED);
    ov18_021F5180(r4, (5 << 8), 0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xf6 << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xf6 << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xa << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xa << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    // mvn r1, r1
    ov18_021F54C0(r4, 0x11, 1);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ov18_021F55D8(r4);
}





void ov18_021F5B14(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F5B2A: ; jump table
    PlaySE(0x000008ED);
    ov18_021F5180(r4, (6 << 8), 0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xf6 << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xf6 << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xa << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xa << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    // mvn r1, r1
    ov18_021F54C0(r4, 0x14, 1);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ov18_021F55D8(r4);
}





void ov18_021F5BEC(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F5C02: ; jump table
    PlaySE(0x000008ED);
    ov18_021F5180(r4, (7 << 8), 0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xf6 << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xf6 << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xa << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xa << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    // mvn r1, r1
    ov18_021F54C0(r4, 0x17, 1);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ov18_021F55D8(r4);
}





void ov18_021F5CC4(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F5CDC: ; jump table
    PlaySE(0x000008EE);
    ov18_021F5180(r4, (2 << 0xa), 0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_OffsetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)(r4 + 0xc)));
    ManagedSprite_GetRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), r0);
    // add r0, r1, r0
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xf6 << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xf6 << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ManagedSprite_SetAffineZRotation(*((u32*)(*((u32*)r4) + 0x0000068C)), (0xa << 8), *((u32*)r4));
    ov18_021F5000(*((u32*)r4), (0xa << 8));
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    // mvn r1, r1
    ov18_021F54C0(r4, 0x17, 0);
    *((u8*)(r4 + 0xb)) = (*((u8*)(r4 + 0xb)) + 1);
    ov18_021F55D8(r4);
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    ov18_021F12C8(*((u32*)r4), *((u16*)(r4 + 0x1c)));
    // add r1, sp, #4
    // ldrsh r2, [r1, r0]
    // mvn r1, r1
}





void ov18_021F5DC0(void) {
}





void ov18_021F5DE0(void) {
}





void ov18_021F5E0C(void) {
    // sub r3, #0x34
    // add r2, r2, r3
    SpriteSystem_NewSpriteWithYOffset(*((u32*)(r0 + 0x00000668)), *((u32*)(r0 + 0x0000066C)), ov18_021FAC28, (2 << 0x14));
    // str r0, [r4, r1]
    // add r6, #0x34
    // add r6, #0xff
    // add r4, #0x14
    // sub r3, #0x34
    // add r2, r2, r3
    SpriteSystem_NewSprite(*((u32*)(r5 + 0x00000668)), *((u32*)(r5 + 0x0000066C)), ov18_021FAC28, 5);
    // str r0, [r4, r1]
    // add r6, #0x34
    ov18_021F11C0(r5, 9, 0);
    ov18_021F11C0(r5, 0xa, 0);
    ov18_021F11C0(r5, 0xb, 0);
    ov18_021F11C0(r5, 0xc, 0);
    ov18_021F11C0(r5, 0xd, 0);
    ov18_021F5EFC(r5, 0, 0);
    ov18_021F6038(r5);
    // str r0, [sp]
    // ldrsb r2, [r5, r2]
    ov18_021F61DC(r5, 5, 0x000018C4, ov18_021FA348);
    ov18_021F65AC(r5);
    // ldrsb r1, [r5, r2]
    // ldrsb r2, [r5, r2]
    ov18_021F619C(r5, (0x000018C5 - 1), 6);
}





void ov18_021F5EF0(void) {
}





void ov18_021F5EFC(void) {
    // add r3, sp, #0xc
    // add r2, sp, #0xc
    // add r3, #1
    ov18_021F3CA8();
    ov18_021F11C0(r5, 3, 0);
    ov18_021F11C0(r5, 4, 0);
    ov18_021F11C0(r5, 1, 0);
    ov18_021F11C0(r5, 2, 0);
    // eor r2, r3
    // strb r0, [r5, r1]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r7, [sp, #8]
    // sub r1, #0x25
    // add r3, sp, #0xc
    ov18_021F1A7C(r5, *((u16*)(r5 + 0x000018C7)), *((u8*)((*((u8*)(r5 + 0x000018C7)) << 0x1a) >> 0x1f)), *((u8*)(((*((u8*)(r5 + 0x000018C7)) << 0x1a) >> 0x1f) + 1)));
    // add r1, r5, r0
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r1 + (0x67 << 4))), 0x40, 0x78, (0x40 << 0xf));
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r7, [sp, #8]
    // add r3, sp, #0xc
    ov18_021F1A7C(r5, *((u16*)(r5 + 0x000018A2)), *((u8*)r3), *((u8*)(r3 + 1)));
    // str r2, [sp]
    // add r3, sp, #0xc
    GetMonPicHeightBySpeciesGenderForm(*((u16*)(r5 + 0x000018A2)), *((u8*)(r3 + 1)), 0, *((u8*)r3));
    // add r1, r5, r0
    // add r2, #0x78
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)(r1 + (0x67 << 4))), 0xc0, (r0 << 0x10), (2 << 0x14));
    ov18_021F11C0(r5, r6, 1);
    ov18_021F11C0(r5, r4, 1);
}





void ov18_021F5FFC(void) {
    // add r2, r0, r2
    // tst r4, r2
    // eor r2, r5
    ov18_021F14FC(*((u16*)(r0 + 0x000018A2)), 0, r1);
}





void ov18_021F6038(void) {
    // ldrsb r0, [r5, r0]
    // add r0, r0, r4
    // ldrsb r0, [r5, r0]
    // add r1, #0xe
    ov18_021F11C0(r0, 0, 0);
    // add r1, #0xe
    ov18_021F11C0(r5, r4, 1);
    // add r1, #0xe
    ov18_021F5FFC(r5, r4, r7);
    // str r0, [sp]
    // add r1, #0xe
    // asr r3, r3, #0x10
    ov18_021F1294(r5, r4, 0x30, (r6 << 0x10));
    // add r6, #0x18
}





void ov18_021F609C(void) {
    // str r1, [sp, #4]
    // add r7, sp, #8
    // add r2, sp, #8
    // add r1, #0xe
    // add r2, #2
    // add r3, sp, #8
    // str r6, [sp]
    ov18_021F12C8(r0, 0);
    // ldrsh r1, [r7, r0]
    // sub r0, #0xa
    // ldr r0, [sp, #4]
    // str r0, [sp]
    // add r1, #0xe
    ov18_021F1294(r5, (r4 + 1), 0x30, 0x86);
    // ldrsb r1, [r5, r0]
    // ldrsb r0, [r5, r0]
    // add r4, #0xe
    ov18_021F11C0(r5, r4, 0);
    // add r1, #0xe
    ov18_021F11C0(r5, r4, 1);
    // add r4, #0xe
    // ldrsb r2, [r5, r2]
    ov18_021F5FFC(r5, r4, (0x000018C5 + 2));
    // str r0, [sp]
    // add r1, #0xe
    // sub r3, #0x3a
    ov18_021F1294(r5, r4, 0x30, 0x30);
    // ldrsb r0, [r5, r0]
    // bpl _021F6152
    // add r4, #0xe
    ov18_021F11C0(r5, r4, 0);
    // add r1, #0xe
    ov18_021F11C0(r5, r4, 1);
    // add r4, #0xe
    // ldrsb r2, [r5, r2]
    ov18_021F5FFC(r5, r4, (0x000018C5 - 2));
}





void ov18_021F6178(void) {
    // add r1, #0xe
    // str r7, [sp]
}





void ov18_021F619C(void) {
}





void ov18_021F61DC(void) {
    // ldr r3, [sp, #0x10]
}





void ov18_021F61F8(void) {
    // add r0, #0xe
}





void ov18_021F6214(void) {
}





void ov18_021F6230(void) {
}





void ov18_021F6244(void) {
}





void ov18_021F6258(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x00000684)));
    ov18_021F6214(r6, 5, ov18_021FA310);
    // add r2, sp, #0
    // ldrsh r3, [r2, r1]
    // sub r1, #0xb
    // add r3, #0xb
    // ldrsh r1, [r2, r0]
    // sub r0, r1, r3
    // add r0, r1, r3
}





void ov18_021F62B4(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x00000684)));
    ov18_021F6214(r6, 5, ov18_021FA304);
    // add r2, sp, #0
    // ldrsh r3, [r2, r1]
    // sub r1, #0xb
    // add r3, #0xb
    // ldrsh r1, [r2, r0]
    // sub r0, r1, r3
    // add r0, r1, r3
}





void ov18_021F6310(void) {
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x00000684)));
    // str r0, [sp]
    ov18_021F6230(r5, 5, ov18_021FA310, 0x40);
    // str r0, [sp]
    ov18_021F6244(r5, 5, ov18_021FA310, 0x40);
    // add r2, sp, #4
    // ldrsh r1, [r2, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x00000684)), 2, (r0 << 0x10));
    // str r0, [sp]
    ov18_021F6230(r5, 5, ov18_021FA310, 0x40);
    // str r0, [sp]
    ov18_021F6244(r5, 5, ov18_021FA310, 0x40);
    // sub r1, r0, r7
    // ldrsb r0, [r5, r0]
    _u32_div_f((r1 << 8), (0x000018C4 - 1));
    // sub r1, r6, r7
    // add r1, r7, r0
    // ldrsb r1, [r5, r0]
    // strb r3, [r5, r0]
    // add r6, r6, r0
    // add r7, r7, r0
}





void ov18_021F63DC(void) {
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x00000684)));
    // str r0, [sp]
    ov18_021F6230(r5, 5, ov18_021FA304, 0x60);
    // str r0, [sp]
    ov18_021F6244(r5, 5, ov18_021FA304, 0x60);
    // add r2, sp, #4
    // ldrsh r1, [r2, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r5 + 0x00000684)), 2, (r0 << 0x10));
    // str r0, [sp]
    ov18_021F6230(r5, 5, ov18_021FA304, 0x60);
    // str r0, [sp]
    ov18_021F6244(r5, 5, ov18_021FA304, 0x60);
    // sub r1, r0, r7
    _u32_div_f((r1 << 8), (*((u32*)(r5 + (0x19 << 8))) - 1));
    // sub r1, r6, r7
    // add r1, r7, r0
    // ldrsb r1, [r5, r0]
    // strb r3, [r5, r0]
    // add r6, r6, r0
    // add r7, r7, r0
}





void ov18_021F64A4(void) {
    // str r1, [sp]
    ov18_021F6230(5, ov18_021FA310, 0x40);
    // str r0, [sp]
    ov18_021F6244(r6, 5, ov18_021FA310, 0x40);
    // ldrsb r1, [r6, r1]
    // sub r0, r0, r4
    _u32_div_f((r0 << 8), (0x000018C4 - 1));
    // add r0, r4, r0
}





void ov18_021F64F4(void) {
    // str r1, [sp]
    ov18_021F6230(5, ov18_021FA304, 0x60);
    // str r0, [sp]
    ov18_021F6244(r6, 5, ov18_021FA304, 0x60);
    // sub r0, r0, r4
    _u32_div_f((r0 << 8), (*((u32*)(r6 + (0x19 << 8))) - 1));
    // add r0, r4, r0
}





void ov18_021F6540(void) {
    // add r1, r0, r1
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // sub r0, r5, r0
    // sub r0, r0, r5
}





void ov18_021F6578(void) {
    // add r5, r0, r2
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, r2, r6
    // asr r2, r2, #0x10
}





void ov18_021F65AC(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x00000684)));
    // ldrsb r1, [r4, r1]
    ov18_021F64A4(r4, 0x000018C5);
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x00000684)), 2, (r0 << 0x10), r0);
}





void ov18_021F65EC(void) {
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY(*((u32*)(r0 + 0x00000684)));
    // ldrsb r1, [r4, r1]
    ov18_021F64F4(r4, 0x000018CA);
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(*((u32*)(r4 + 0x00000684)), 2, (r0 << 0x10), r0);
}





void ov18_021F662C(void) {
    // ldrsb r1, [r4, r1]
    ov18_021F5EFC(0x000018C5, 1);
    ov18_021F6038(r4);
    ov18_021F65AC(r4);
    // ldrsb r1, [r4, r2]
    // ldrsb r2, [r4, r2]
    ov18_021F619C(r4, (0x000018C5 - 1), 6);
    ov18_021F11C0(r4, 5, 1);
    ov18_021F11C0(r4, 6, 1);
    ov18_021F11C0(r4, 7, 1);
    ov18_021F11C0(r4, 8, 1);
}





void ov18_021F6684(void) {
}





void ov18_021F6714(void) {
    // ldrsb r1, [r4, r1]
    ov18_021F11C0(9, 1);
    ov18_021F11C0(r4, 0xa, 1);
    ov18_021F11C0(r4, 0xb, 1);
    ov18_021F11C0(r4, 0xc, 1);
    ov18_021F11C0(r4, 0xd, 1);
    // ldrsb r2, [r4, r2]
    ov18_021F6844(r4, 0xe, 0x000018C5);
    // ldrsb r2, [r4, r2]
    ov18_021F6844(r4, 0xf, 0x000018C6);
    // str r0, [sp]
    ov18_021F1294(r4, 0xe, 0x40, 0x50);
    // str r0, [sp]
    ov18_021F1294(r4, 0xf, 0xc0, 0x50);
    // ldrsb r2, [r4, r2]
    ov18_021F684C(r4, 1, 0x000018C5, 1);
    // ldrsb r2, [r4, r2]
    ov18_021F684C(r4, 2, 0x000018C6, 1);
    ov18_021F6990(r4);
    ov18_021F11C0(r4, 0xe, 1);
    ov18_021F11C0(r4, 0xf, 1);
}





void ov18_021F67D0(void) {
}





void ov18_021F6844(void) {
}





void ov18_021F684C(void) {
    // str r3, [sp, #0xc]
    // add r3, sp, #0x14
    // add r2, sp, #0x14
    // add r3, #1
    ov18_021F3CA8(r2);
    // str r6, [sp]
    // sub r0, #0x25
    // add r3, sp, #0x14
    GetMonPicHeightBySpeciesGenderForm(*((u16*)(r5 + 0)), *((u8*)(r3 + 1)), 0, *((u8*)r3));
    // add r0, #0x78
    // str r1, [sp, #0x10]
    ov18_021F11C0(r5, 1, 0);
    ov18_021F11C0(r5, r4, 1);
    ov18_021F11C0(r5, 1, 1);
    ov18_021F11C0(r5, 3, 0);
    // eor r1, r2
    // strb r0, [r5, r3]
    // add r0, #0x78
    // str r1, [sp, #0x10]
    ov18_021F11C0(r5, 2, 0, 0x000018C7);
    ov18_021F11C0(r5, r4, 1);
    ov18_021F11C0(r5, 2, 1);
    ov18_021F11C0(r5, 4, 0);
    // eor r1, r2
    // strb r0, [r5, r3]
    // str r6, [sp]
    // ldr r0, [sp, #0xc]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // add r3, sp, #0x14
    ov18_021F1A7C(r5, *((u16*)(r5 + 0x000018A2)), *((u8*)0x000018C7), *((u8*)(0x000018C7 + 1)));
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    ov18_021F1294(r5, r4, r7);
}





void ov18_021F6984(void) {
}





void ov18_021F6990(void) {
    // str r1, [sp]
    ov18_021F1294(0xd, 0x40, 0x58);
    // str r1, [sp]
    ov18_021F1294(0xd, 0xc0, 0x58);
}





void ov18_021F69C0(void) {
}





void ov18_021F69E8(void) {
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // add r2, sp, #0x1c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    Heap_AllocAtEnd(0x25, (0x32 << 6), ov18_021FA338);
    Pokedex_GetSeenSpindaPersonality(*((u32*)*((u32*)r5)), 0);
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r3, sp, #0x40
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r2, [sp, #0x18]
    // add r0, sp, #0x2c
    GetMonSpriteCharAndPlttNarcIdsEx(0, r4, *((u8*)(r3 + 0x10)));
    // str r7, [sp]
    // str r6, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r4, [sp, #0x10]
    // add r1, sp, #0x1c
    // add r3, sp, #0x1c
    sub_02014510(*((u16*)(r1 + 0x10)), *((u16*)(r1 + 0x12)), 0x25);
    Convert4bppTo8bpp(r7, (0x32 << 6), 0xf, 0x25);
    // str r0, [sp]
    BG_LoadCharTilesData(*((u32*)(r5 + 4)), 7, r0, (0x19 << 8));
    Heap_Free(r4);
    Heap_Free(r7);
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    LoadRectToBgTilemapRect(*((u32*)(r5 + 4)), 7, ov18_021FB5B4, 0xb);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 4)), 7);
}





void ov18_021F6AB0(void) {
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x18]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, r3, r4
}





void ov18_021F6B00(void) {
    // str r1, [r4, r0]
    System_GetTouchNew(0x00000864, 0);
    TouchscreenHitbox_FindRectAtTouchNew(ov18_021FB72C);
    // mvn r1, r1
    // str r1, [r4, r0]
    // tst r2, r0
    // sub r1, #8
    // sub r0, #0x21
    // tst r2, r0
    // sub r1, #8
    // sub r0, #0x11
    // tst r0, r1
    // tst r0, r3
    // tst r2, r0
    // tst r2, r3
}





void ov18_021F6BBC(void) {
    // str r1, [r5, r0]
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchNewCoords(0x00000864, 0);
    TouchscreenHitbox_FindRectAtTouchNew(ov18_021FB8A4);
    // mvn r1, r1
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // sub r0, #0x1b
    // str r1, [sp]
    // str r0, [sp, #4]
    _u32_div_f(ov18_021FB84C, 0x28);
    // ldr r0, [sp]
    _u32_div_f(0x28);
    // add r0, r0, r1
    // add r0, r6, r0
    // strb r2, [r5, r0]
    PlaySE(0x000008E9, *((u8*)(r5 + 0x0000185A)), ((r0 << 0x18) >> 0x18));
    PlaySE(0x000008F2);
    PlaySE(0x000008E9);
    PlaySE((0x25 << 6));
    // str r6, [r5, r2]
    // tst r0, r3
    // add r2, #0x84
    // strb r1, [r5, r0]
    PlaySE(0x00000864, (*((u8*)(r5 + 0x0000185A)) - 5), 0x00000864, *((u32*)(gSystem + 0x4c)));
    // tst r0, r3
    // strb r1, [r5, r0]
    PlaySE(0x000008E8, (*((u8*)(r5 + 0x0000185A)) + 5));
    // tst r1, r0
    // add r2, #0x84
    // strb r0, [r5, r3]
    PlaySE(r2, *((u8*)(r5 + 0x0000185A)), 0x0000185A);
    // strb r0, [r5, r3]
    // sub r0, #0x21
    // tst r0, r3
    // add r2, #0x84
    // strb r1, [r5, r0]
    PlaySE(r2, (*((u8*)(r5 + 0x0000185A)) + 1));
    ov18_021F8950(r5, r4);
    // strb r2, [r5, r0]
    // tst r0, r6
    // tst r0, r4
    // add r2, #0xdc
    PlaySE(0, *((u32*)(r7 + 0x48)), 0);
    // tst r0, r1
    // tst r0, r1
    // add r2, #0x85
    PlaySE(r2);
    // tst r0, r3
    // add r4, #0xfe
    // tst r0, r4
    // tst r0, r1
    // tst r1, r0
    // add r2, #0x8e
    PlaySE(r2);
    // sub r0, #9
}





void ov18_021F6DE0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov18_021FB878, ov18_021FB9F0, ov18_021FB688, r0);
    // str r0, [r5, r1]
    ov18_021F11C0(r5, 0, 1);
    ov18_021F6E58(r5, r4);
}





void ov18_021F6E2C(void) {
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r0) + 0xc)), 0);
    // tst r1, r0
    GridInputHandler_HandleInput_AllowHold(*((u32*)(r4 + 0x00001864)), *((u32*)(gSystem + 0x48)));
}





void ov18_021F6E58(void) {
    GridInputHandler_GetDpadBox(*((u32*)(r0 + 0x00001864)));
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x67 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov18_021F118C(r5, 0, *((u8*)(ov18_021FBD1C + r4)));
}





void ov18_021F6E98(void) {
    ov18_021F6E58();
    PlaySE(0x000008E8);
}





void ov18_021F6EAC(void) {
}





void ov18_021F6EC0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov18_021FB828, ov18_021FB968, ov18_021FB668, r0);
    // str r0, [r4, r1]
    ov18_021F11C0(r4, 0, 1);
    ov18_021F6F38(r4, 0);
}





void ov18_021F6F08(void) {
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r0) + 0xc)), 0);
    // tst r0, r1
    GridInputHandler_HandleInput_AllowHold(*((u32*)(r4 + 0x00001864)), *((u32*)(gSystem + 0x48)));
}





void ov18_021F6F38(void) {
    GridInputHandler_GetDpadBox(*((u32*)(r0 + 0x00001864)));
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x67 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov18_021F118C(r5, 0, *((u8*)(ov18_021FB628 + r4)));
}





void ov18_021F6F78(void) {
    ov18_021F6F38();
    PlaySE(0x000008E8);
}





void ov18_021F6F8C(void) {
}





void ov18_021F6FA0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov18_021FBA94, ov18_021FBC34, ov18_021FB6A8, r0);
    // str r0, [r4, r1]
    ov18_021F11C0(r4, 0, 1);
    ov18_021F7018(r4, 0);
}





void ov18_021F6FE8(void) {
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r0) + 0xc)), 0);
    // tst r0, r1
    GridInputHandler_HandleInput_AllowHold(*((u32*)(r4 + 0x00001864)), *((u32*)(gSystem + 0x48)));
}





void ov18_021F7018(void) {
    GridInputHandler_GetDpadBox(*((u32*)(r0 + 0x00001864)));
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x67 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov18_021F118C(r5, 0, 0x23);
    ov18_021F118C(r5, 0, 0x28);
}





void ov18_021F7060(void) {
    // sub r0, #0x1b
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r0 + 0x00001864)), ((0 << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18));
    // add r3, #8
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x00001864)), ((0x1a << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18));
    // sub r3, #8
    // bpl _021F70B8
    ov18_021F7018(r5, r4);
    // str r6, [r5, r0]
    PlaySE(0x000008E8);
}





void ov18_021F7104(void) {
    ov18_021F7018();
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r5) + 0xc)), 1);
    // str r4, [r5, r0]
}





void ov18_021F7124(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov18_021FBA40, ov18_021FBB94, ov18_021FB638, r0);
    // str r0, [r4, r1]
    ov18_021F11C0(r4, 0, 1);
    ov18_021F719C(r4, 0);
}





void ov18_021F716C(void) {
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r0) + 0xc)), 0);
    // tst r0, r1
    GridInputHandler_HandleInput_AllowHold(*((u32*)(r4 + 0x00001864)), *((u32*)(gSystem + 0x48)));
}





void ov18_021F719C(void) {
    GridInputHandler_GetDpadBox(*((u32*)(r0 + 0x00001864)));
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x67 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov18_021F118C(r5, 0, *((u8*)(ov18_021FBD3C + r4)));
}





void ov18_021F71DC(void) {
    // sub r2, r2, r3
    // ror r2, r1
    // add r4, r3, r2
    // sub r0, #0x38
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r0 + 0x0000189C)), ((r1 << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18), 0x12);
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x00001864)), ((r1 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), 0x12);
    // add r4, #0x10
    // sub r0, #0x38
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x0000189C)), ((*((u32*)(r5 + 0x0000189C)) << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), 0x12);
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x00001864)), ((r1 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), 0x12);
    // sub r2, r2, r3
    // ror r2, r1
    // add r4, r3, r2
    // sub r0, #0x38
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x0000189C)), ((r4 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), 0x13);
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x00001864)), ((r1 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), 0x13);
    // add r4, #0xc
    // sub r0, #0x38
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x0000189C)), ((*((u32*)(r5 + 0x0000189C)) << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), 0x13);
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x00001864)), ((r1 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), 0x13);
    ov18_021F719C(r5, r4);
    // str r6, [r5, r0]
    PlaySE(0x000008E8);
}





void ov18_021F7334(void) {
    ov18_021F719C();
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r5) + 0xc)), 1);
    // str r4, [r5, r0]
}





void ov18_021F7354(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov18_021FB6C8, ov18_021FB780, ov18_021FB648, r0);
    // str r0, [r4, r1]
    ov18_021F11C0(r4, 0, 1);
    ov18_021F7444(r4, 0);
}





void ov18_021F739C(void) {
    GridInputHandler_GetNextInput(*((u32*)(r0 + 0x00001864)));
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r5) + 0xc)), 0);
    // tst r0, r2
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    TouchscreenHitbox_FindRectAtTouchHeld(ov18_021FB718, *((u32*)(gSystem + 0x4c)), *((u32*)(gSystem + 0x48)));
    // mvn r0, r0
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r5) + 0xc)), 1);
    GridInputHandler_SetNextInput(*((u32*)(r5 + 0x00001864)), (((r6 >> 1) << 0x18) >> 0x18));
    ov18_021F7444(r5, r4);
    GridInputHandler_HandleInput_AllowHold(*((u32*)(r5 + 0x00001864)));
}





void ov18_021F7444(void) {
    GridInputHandler_GetDpadBox(*((u32*)(r0 + 0x00001864)));
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    ov18_021F3AD0(r5, *((u32*)(r5 + 0x0000187C)));
    // add r1, sp, #0
    *((u8*)(r1 + 1)) = r0;
    ov18_021F3AD0(r5, *((u32*)(r5 + 0x00001878)));
    // add r1, sp, #0
    *((u8*)(r1 + 1)) = r0;
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x67 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov18_021F118C(r5, 0, *((u8*)(ov18_021FB618 + r4)));
}





void ov18_021F74B0(void) {
    ov18_021F7444();
    PlaySE(0x000008E8);
}





void ov18_021F74C4(void) {
}





void ov18_021F74D8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov18_021FB6DC, ov18_021FB7A0, ov18_021FB678, r0);
    // str r0, [r4, r1]
    ov18_021F11C0(r4, 0, 1);
    ov18_021F75C8(r4, 0);
}





void ov18_021F7520(void) {
    GridInputHandler_GetNextInput(*((u32*)(r0 + 0x00001864)));
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r5) + 0xc)), 0);
    // tst r0, r2
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    TouchscreenHitbox_FindRectAtTouchHeld(ov18_021FB718, *((u32*)(gSystem + 0x4c)), *((u32*)(gSystem + 0x48)));
    // mvn r0, r0
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r5) + 0xc)), 1);
    GridInputHandler_SetNextInput(*((u32*)(r5 + 0x00001864)), (((r6 >> 1) << 0x18) >> 0x18));
    ov18_021F75C8(r5, r4);
    GridInputHandler_HandleInput_AllowHold(*((u32*)(r5 + 0x00001864)));
}





void ov18_021F75C8(void) {
    GridInputHandler_GetDpadBox(*((u32*)(r0 + 0x00001864)));
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    ov18_021F3AD0(r5, *((u32*)(r5 + 0x00001884)));
    // add r1, sp, #0
    *((u8*)(r1 + 1)) = r0;
    ov18_021F3AD0(r5, *((u32*)(r5 + (0x62 << 6))));
    // add r1, sp, #0
    *((u8*)(r1 + 1)) = r0;
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x67 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov18_021F118C(r5, 0, *((u8*)(ov18_021FB61C + r4)));
}





void ov18_021F7634(void) {
    ov18_021F75C8();
    PlaySE(0x000008E8);
}





void ov18_021F7648(void) {
}





void ov18_021F765C(void) {
}





void ov18_021F7668(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov18_021FB744, ov18_021FB8D4, ov18_021FB6B8, r0);
    // str r0, [r4, r1]
    ov18_021F11C0(r4, 0, 1);
    ov18_021F76E0(r4, 0);
}





void ov18_021F76B0(void) {
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r0) + 0xc)), 0);
    // tst r0, r1
    GridInputHandler_HandleInput_AllowHold(*((u32*)(r4 + 0x00001864)), *((u32*)(gSystem + 0x48)));
}





void ov18_021F76E0(void) {
    GridInputHandler_GetDpadBox(*((u32*)(r0 + 0x00001864)));
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x67 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov18_021F118C(r5, 0, *((u8*)(ov18_021FB620 + r4)));
}





void ov18_021F7720(void) {
    ov18_021F76E0();
    PlaySE(0x000008E8);
}





void ov18_021F7734(void) {
}





void ov18_021F7748(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    GridInputHandler_Create(ov18_021FB9A8, ov18_021FBB0C, ov18_021FB658, r0);
    // str r0, [r4, r1]
    ov18_021F11C0(r4, 0, 1);
    ov18_021F77C0(r4, 0);
}





void ov18_021F7790(void) {
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r0) + 0xc)), 0);
    // tst r0, r1
    GridInputHandler_HandleInput_AllowHold(*((u32*)(r4 + 0x00001864)), *((u32*)(gSystem + 0x48)));
}





void ov18_021F77C0(void) {
    GridInputHandler_GetDpadBox(*((u32*)(r0 + 0x00001864)));
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    DpadMenuBox_GetPosition();
    // add r2, sp, #0
    ManagedSprite_SetPositionXY(*((u32*)(r5 + (0x67 << 4))), *((u8*)(r2 + 1)), *((u8*)r2));
    ov18_021F118C(r5, 0, *((u8*)(ov18_021FBD28 + r4)));
}





void ov18_021F7800(void) {
    // sub r0, #0x38
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r0 + 0x0000189C)), ((*((u32*)(r0 + 0x0000189C)) << 0x18) >> 0x18), ((r2 << 0x18) >> 0x18), 0xf);
    _s32_div_f(r1, 5);
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x00001864)), ((r1 << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18), 0xf);
    // add r6, #0xa
    // sub r0, #0x38
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x0000189C)), ((*((u32*)(r5 + 0x0000189C)) << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18), 0xf);
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x00001864)), ((r1 << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18), 0xf);
    // sub r0, #0x38
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x0000189C)), ((*((u32*)(r5 + 0x0000189C)) << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18), 0x10);
    _s32_div_f(r1, 5);
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x00001864)), ((r1 << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18), 0x10);
    // add r6, #0xa
    // sub r0, #0x38
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x0000189C)), ((*((u32*)(r5 + 0x0000189C)) << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18), 0x10);
    GridInputHandler_SetNextLastUnk0FInputs(*((u32*)(r5 + 0x00001864)), ((r1 << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18), 0x10);
    ov18_021F77C0(r5, r6);
    // str r4, [r5, r0]
    PlaySE(0x000008E8);
}





void ov18_021F7954(void) {
    ov18_021F77C0();
    MenuInputStateMgr_SetState(*((u32*)(*((u32*)r5) + 0xc)), 1);
    // str r4, [r5, r0]
}





void ov18_021F7974(void) {
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchNewCoords();
    TouchscreenHitbox_FindRectAtTouchNew(ov18_021FB8A4);
    // mvn r1, r1
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // sub r0, #0x1b
    // str r1, [sp]
    // str r0, [sp, #4]
    _u32_div_f(ov18_021FB84C, 0x28);
    // ldr r0, [sp]
    _u32_div_f(0x28);
    // add r0, r0, r1
    // add r0, r6, r0
    PlaySE(0x000008E9, *((u8*)(r5 + 0x0000185A)), ((r0 << 0x18) >> 0x18));
    // strb r2, [r5, r0]
    PlaySE(0x000008E9);
    PlaySE(0x000008E9);
    PlaySE((0x25 << 6));
    // tst r0, r2
    // strb r1, [r5, r0]
    PlaySE(0x000008E8, (*((u8*)(r5 + 0x0000185A)) - 5), *((u32*)(gSystem + 0x4c)));
    // tst r0, r2
    // strb r1, [r5, r0]
    PlaySE(0x000008E8, (*((u8*)(r5 + 0x0000185A)) + 5));
    // tst r3, r0
    // strb r0, [r5, r2]
    PlaySE(0x000008E8, *((u8*)(r5 + 0x0000185A)), 0x0000185A, r2);
    // strb r0, [r5, r2]
    // sub r0, #0x21
    // tst r0, r2
    // strb r1, [r5, r0]
    PlaySE(0x000008E8, (*((u8*)(r5 + 0x0000185A)) + 1));
    ov18_021F8950(r5, r4);
    // strb r2, [r5, r0]
    // mvn r0, r0
    // tst r1, r0
    // tst r1, r3
    PlaySE((0x25 << 6), 4, 0, 2);
    // tst r1, r0
    // tst r1, r0
    PlaySE(0x000008E9, (r3 << 0xa));
    // tst r1, r2
    // add r3, #0xfe
    // tst r1, r3
    // tst r0, r1
}





void ov18_021F7B74(void) {
}





void ov18_021F7B90(void) {
    // bx lr
    // TODO: decompile
}





void ov18_021F7B94(void) {
    System_GetTouchNew();
    TouchscreenHitbox_FindRectAtTouchNew(ov18_021FB704);
    // mvn r0, r0
    // add r0, sp, #4
    // add r1, sp, #0
    System_GetTouchNewCoords(0);
    Pokedex_CheckMonCaughtFlag(*((u32*)*((u32*)r5)), *((u16*)(r5 + 0x000018A2)));
    // mvn r0, r0
    // str r0, [r4]
    // tst r1, r0
    // str r0, [r4]
}





void ov18_021F7C14(void) {
    ov18_021F7B94();
    // mvn r1, r1
    System_GetTouchNew(0);
    TouchscreenHitbox_FindHitboxAtTouchNew(ov18_021FB934);
    // mvn r1, r1
    // str r1, [r5]
    // str r0, [r5]
    // tst r0, r1
    // tst r0, r1
    // tst r2, r0
    // ldrsb r0, [r4, r0]
    // tst r2, r3
    // ldrsb r0, [r4, r0]
    // ldrsb r2, [r4, r2]
    // add r3, #0xfc
    // tst r0, r3
    // tst r0, r2
    // tst r0, r1
    // tst r1, r0
    Pokedex_CheckMonCaughtFlag(*((u32*)*((u32*)r4)), *((u16*)(r4 + 0x000018A2)), (4 << 7), 4);
    // sub r0, #0x11
}





void ov18_021F7D00(void) {
    ov18_021F7B94();
    // mvn r3, r3
    // str r0, [r4]
    // tst r1, r2
    // tst r0, r2
}





void ov18_021F7D30(void) {
    ov18_021F7B94();
    // mvn r1, r1
    System_GetTouchNew(0);
    TouchscreenHitbox_FindRectAtTouchNew(ov18_021FB804);
    // mvn r1, r1
    // str r1, [r5]
    // str r0, [r5]
    // tst r1, r0
    // tst r1, r0
    // tst r1, r0
    Pokedex_CheckMonCaughtFlag(*((u32*)*((u32*)r4)), *((u16*)(r4 + 0x000018A2)), gSystem);
    // tst r0, r1
    // tst r1, r0
}





void ov18_021F7DCC(void) {
    System_GetTouchNew();
    TouchscreenHitbox_FindRectAtTouchNew(ov18_021FB7E0);
    // mvn r1, r1
    // str r1, [r4]
    // str r0, [r4]
    // tst r1, r3
    // tst r0, r3
    // tst r0, r2
    // tst r1, r0
    // tst r0, r2
    // tst r1, r0
}





void ov18_021F7E70(void) {
    ov18_021F7B94();
    // mvn r1, r1
    System_GetTouchNew(0);
    TouchscreenHitbox_FindHitboxAtTouchNew(ov18_021FB630);
    // mvn r1, r1
    // str r0, [r4]
    // str r0, [r4]
    // tst r1, r3
    // tst r1, r3
    // tst r1, r0
}





void ov18_021F7ED4(void) {
    // str r2, [sp, #0x10]
    // add r1, r5, r2
    // sub r2, #0xc0
    // str r3, [sp, #0x14]
    MIi_CpuClear32(0, 0x00000878);
    Heap_AllocAtEnd(0x25, 0x000003DA);
    GF_AssertFail();
    memset(r6, 0, 0x000003DA);
    // str r0, [sp, #0x1c]
    Heap_AllocAtEnd(0x25, 0x000003DA);
    GF_AssertFail();
    memset(r4, 0, 0x000003DA);
    // str r0, [sp, #0x18]
    // add r1, sp, #0x20
    ov18_021F8168(1);
    ov18_021F8168();
    // ldr r0, [sp, #0x20]
    // add r1, sp, #0x1c
    // str r0, [sp]
    ov18_021F8198(r6, *((u32*)*((u32*)r5)), r0);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // add r2, sp, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    ov18_021F822C(*((u32*)*((u32*)r5)), r4, r6);
    // ldr r2, [sp, #0x18]
    memcpy(r6, r4, (r2 << 1));
    // ldr r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    memset(r4, 0, (r2 << 1));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // add r2, sp, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    ov18_021F82CC(*((u32*)*((u32*)r5)), r4, r6);
    // ldr r2, [sp, #0x18]
    memcpy(r6, r4, (r2 << 1));
    // ldr r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    memset(r4, 0, (r2 << 1));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // add r2, sp, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    ov18_021F831C(*((u32*)*((u32*)r5)), r4, r6);
    // ldr r2, [sp, #0x18]
    memcpy(r6, r4, (r2 << 1));
    // ldr r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    memset(r4, 0, (r2 << 1));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // add r2, sp, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    ov18_021F831C(*((u32*)*((u32*)r5)), r4, r6);
    // ldr r2, [sp, #0x18]
    memcpy(r6, r4, (r2 << 1));
    // ldr r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    memset(r4, 0, (r2 << 1));
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // add r2, sp, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x54]
    ov18_021F8468(*((u32*)*((u32*)r5)), r4, r6);
    // ldr r2, [sp, #0x18]
    memcpy(r6, r4, (r2 << 1));
    // ldr r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    memset(r4, 0, (r2 << 1));
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x50]
    // tst r0, r1
    // str r6, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // add r3, sp, #0x18
    // str r0, [sp, #8]
    ov18_021F8584(r5, 6, r4);
    // ldr r2, [sp, #0x18]
    // str r6, [sp]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x50]
    // str r0, [sp, #4]
    // add r3, sp, #0x18
    // str r0, [sp, #8]
    ov18_021F8584(r5, r4);
    // ldr r2, [sp, #0x18]
    memcpy(r6, r4, (r2 << 1));
    // ldr r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    memset(r4, 0, (r2 << 1));
    // str r0, [sp, #0x18]
    // add r0, sp, #0x18
    // str r0, [sp]
    // str r6, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x40]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x44]
    // str r0, [sp, #0xc]
    ov18_021F8640(r5, ((r1 << 0x10) >> 0x10), ((r2 << 0x10) >> 0x10), r4);
    // ldr r2, [sp, #0x18]
    memcpy(r6, r4, (r2 << 1));
    // ldr r2, [sp, #0x18]
    // str r2, [sp, #0x1c]
    memset(r4, 0, (r2 << 1));
    // str r0, [sp, #0x18]
    // add r0, sp, #0x18
    // str r0, [sp]
    // str r6, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x48]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x4c]
    // str r0, [sp, #0xc]
    ov18_021F86D0(r5, ((r1 << 0x10) >> 0x10), ((r2 << 0x10) >> 0x10), r4);
    // ldr r3, [sp, #0x18]
    // add r0, r5, r0
    ov18_021F81D8(0x00000878, *((u32*)*((u32*)r5)), r4);
    Heap_Free(r7);
    Heap_Free(r4);
    Heap_Free(r6);
}





void ov18_021F8168(void) {
    // ; u32 size;
    // ; void * ret;
    // ; GF_ASSERT(a < 82);
    // ; ret = GfGfxLoader_LoadFromNarc_GetSizeOut(GetPokedexDataNarcID(), a0 + 11, FALSE, HEAP_ID_POKEDEX_APP, FALSE, &size);
    // str r2, [sp]
    // add r1, sp, #8
    // add r5, #0xb
    // str r1, [sp, #4]
    // ; *a1 = size / 2;
    // ldr r1, [sp, #8]
    // str r1, [r4]
    // ; return ret;
}





void ov18_021F8198(void) {
    // ldr r7, [sp, #0x20]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r6, [r5]
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // strh r0, [r1, r2]
    // str r0, [r5]
}





void ov18_021F81D8(void) {
    // str r1, [sp]
    // strh r0, [r5, r1]
    // strh r7, [r5, r0]
    // str r3, [sp, #4]
    // add r6, r5, r0
    // strh r0, [r5]
    // ldr r0, [sp]
    Pokedex_CheckMonCaughtFlag(*((u16*)r2), *((u16*)r2));
    *((u16*)(r5 + 2)) = 2;
    // strh r0, [r6]
    *((u16*)(r5 + 2)) = 1;
    // ldr r0, [sp, #4]
}





void ov18_021F822C(void) {
    // str r3, [sp, #0x10]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F8248: ; jump table
    // ldr r2, [sp, #0x30]
    // ldr r0, [sp, #0x30]
    // str r0, [r5]
    // add r1, sp, #0x14
    // add r1, sp, #0x14
    // add r1, sp, #0x14
    // add r1, sp, #0x14
    // add r1, sp, #0x14
    // str r6, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x30]
}





void ov18_021F82CC(void) {
    // ldr r2, [sp, #0x28]
    // ldr r0, [sp, #0x28]
    // str r0, [r5]
    // add r1, sp, #0x10
    // ldr r0, [sp, #0x28]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x10]
}





void ov18_021F831C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F833C: ; jump table
    // ldr r5, [sp, #0x28]
    // str r5, [r4]
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // ldr r0, [sp, #0x28]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x10]
}





void ov18_021F8468(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F8482: ; jump table
    // ldr r2, [sp, #0x28]
    // ldr r0, [sp, #0x28]
    // str r0, [r4]
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // add r1, sp, #0x10
    // ldr r0, [sp, #0x28]
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x10]
}





void ov18_021F8584(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0x30]
    // str r2, [sp, #4]
    // ldr r6, [sp, #0x2c]
    // tst r0, r7
    // ldr r1, [sp, #0x28]
    memcpy(r2, (r6 << 1));
    // str r6, [r4]
    // str r0, [sp, #0xc]
    // ldr r5, [sp, #0x28]
    // ldr r2, [sp]
    // tst r2, r0
    // tst r0, r2
    // ldr r0, [sp, #0x30]
    Pokedex_CheckMonSeenFlag(*((u8*)(*((u32*)(r2 + 0x00001854)) + *((u16*)r5))), *((u16*)r5), 1);
    // ldr r1, [sp, #4]
    // strh r0, [r1, r2]
    // str r0, [r4]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r5, [sp, #0x28]
    // ldr r2, [sp]
    // tst r0, r7
    // ldr r0, [sp, #0x30]
    Pokedex_CheckMonSeenFlag(*((u8*)(*((u32*)((*((u32*)r4) << 1) + 0x00001854)) + *((u16*)(r5 + 2)))), *((u16*)(r5 + 2)), (*((u32*)r4) << 1));
    // ldr r1, [sp, #4]
    // strh r0, [r1, r2]
    // str r0, [r4]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}





void ov18_021F8640(void) {
    // ldr r0, [sp, #0x28]
    // str r3, [sp]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // ldr r5, [sp, #0x20]
    // str r0, [sp, #0x2c]
    // ldr r2, [sp, #0x28]
    // ldr r1, [sp, #0x24]
    memcpy(r3, (r2 << 1));
    // ldr r0, [sp, #0x28]
    // str r0, [r5]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // ldr r4, [sp, #0x24]
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    // ldr r3, [sp, #4]
    // ldr r0, [sp, #0x2c]
    Pokedex_CheckMonCaughtFlag(*((u16*)(*((u16*)(r3 + *((u32*)(r6 + 0x00001850)))) + *((u32*)(r6 + 0x00001850)))), *((u16*)r4), *((u16*)r4), *((u16*)(r3 + *((u32*)(r6 + 0x00001850)))));
    // ldr r1, [sp]
    // strh r0, [r1, r2]
    // str r0, [r5]
    // ldr r0, [sp, #0x28]
}





void ov18_021F86D0(void) {
    // ldr r0, [sp, #0x28]
    // str r3, [sp]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // ldr r5, [sp, #0x20]
    // str r0, [sp, #0x2c]
    // ldr r2, [sp, #0x28]
    // ldr r1, [sp, #0x24]
    memcpy(r3, (r2 << 1));
    // ldr r0, [sp, #0x28]
    // str r0, [r5]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // ldr r4, [sp, #0x24]
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    // add r3, r3, r0
    // ldr r3, [sp, #4]
    // add r0, r3, r0
    // ldr r0, [sp, #0x2c]
    Pokedex_CheckMonCaughtFlag(*((u16*)(*((u32*)(r6 + 0x00001850)) + 2)), *((u16*)r4), *((u16*)r4), *((u16*)(r3 + 2)));
    // ldr r1, [sp]
    // strh r0, [r1, r2]
    // str r0, [r5]
    // ldr r0, [sp, #0x28]
}





void ov18_021F8764(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r1, [sp, #4]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [r0]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x28]
    // ldr r6, [sp, #8]
    // ldr r3, [sp, #4]
    // ldr r3, [sp]
    // strh r2, [r3, r4]
    // ldr r2, [sp, #4]
    // ldr r2, [sp, #4]
    // str r3, [r2]
    // ldr r2, [sp, #0xc]
    // ldr r2, [sp, #0x2c]
    // str r3, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // ldr r7, [sp, #0x28]
    // ldr r4, [sp, #8]
    // ldr r0, [sp, #0x34]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // strh r2, [r0, r1]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // str r1, [r0]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // str r1, [sp, #0xc]
}





void ov18_021F8824(void) {
    // add r0, r2, r0
}





void ov18_021F8838(void) {
}





void ov18_021F8850(void) {
    // push {r4, r5}
    // ldr r2, _021F8880 ; =0x000007B4
    // mov r4, #0
    // ldrh r5, [r0, r2]
    // add r3, r4, #0
    // cmp r5, #0
    // bls _021F8878
    // cmp r4, #0
    // bne _021F8864
    // ldrh r4, [r0]
    // ldrh r2, [r0]
    // cmp r1, r2
    // bne _021F8870
    // add r0, r1, #0
    // pop {r4, r5}
    // bx lr
    // add r3, r3, #1
    // add r0, r0, #4
    // cmp r3, r5
    // blo _021F885E
    // add r0, r4, #0
    // pop {r4, r5}
    // bx lr
    // nop
    // _021F8880: .word 0x000007B4
    // TODO: decompile
}





void ov18_021F8884(void) {
    // add r1, r5, r2
    MIi_CpuClear32(0, (0x00001030 >> 1));
    Pokedex_ConvertToCurrentDexNo(*((u8*)(r5 + 0x00001858)), *((u16*)(r5 + 0x00000878)));
    // add r0, r5, r0
    // strh r2, [r0, r1]
    // strh r2, [r0, r1]
    // sub r7, #8
    // strh r2, [r0, r3]
    // strh r2, [r0, r6]
}





void ov18_021F891C(void) {
    // add r2, r2, r1
    Pokedex_ConvertToCurrentDexNo(*((u8*)(r0 + 0x00001858)), *((u16*)(r0 + 0x00000878)), r0);
}





void ov18_021F8950(void) {
}





void ov18_021F8970(void) {
    // bx lr
    // TODO: decompile
}





void ov18_021F8974(void) {
    Heap_Alloc(*((u32*)(r0 + 0x14)), (0x96 << 2));
    memset(0, (0x96 << 2));
    // strb r0, [r2]
    NARC_New(0x44, *((u32*)(r4 + 0x14)), (r4 + 1));
    *((u32*)(r4 + 0x1c)) = r0;
    // strh r2, [r4, r0]
    // add r0, #0x14
    // str r2, [r4, r0]
    SysTask_CreateOnMainQueue(ov18_021F89F8, r4, 0);
    *((u32*)(r4 + 0x18)) = r0;
}





void ov18_021F89C8(void) {
    // ldr r0, [r0, r1]
}





void ov18_021F89D0(void) {
}





void ov18_021F89F8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F8A14: ; jump table
    // strh r1, [r0]
    ov18_021F8AB8(r1, 0);
    ov18_021F8B10(r4);
    ov18_021F8CCC(r4);
    ov18_021F8FA0(r4);
    ov18_021F95CC(r4);
    ov18_021F8C0C(r4);
    // strh r1, [r4, r0]
    ov18_021F8C48(r4, 1);
    // strh r1, [r4, r0]
    // sub r2, #0x41
    // str r2, [sp]
    // str r0, [sp, #4]
    PlayCryEx(0xe, ((*((u32*)(r4 + (2 + 4))) << 0x10) >> 0x10), 2, 2);
    // strh r1, [r4, r0]
    IsCryFinished((9 << 6), 3);
    // str r1, [r4, r0]
    // sub r0, #0x14
    // strh r1, [r4, r0]
    // add r0, #0xb4
    SpriteList_RenderAndAnimateSprites(*((u32*)r4), 4);
    ov18_021F8C68(r4);
}





void ov18_021F8AB8(void) {
    // str r0, [r5, r1]
    // str r0, [r5, r1]
    // str r0, [r5, r1]
    // str r0, [r5, r1]
}





void ov18_021F8B10(void) {
    SetBgPriority(0, 0);
    GfGfx_EngineATogglePlanes(1, 1);
    // add r3, sp, #0x48
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)r4), 1, r3, 0);
    BG_ClearCharDataRange(1, 0x20, 0, *((u32*)(r4 + 0x14)));
    // add r3, sp, #0x2c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)r4), 2, r3, 0);
    // add r3, sp, #0x10
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)r4), 3, r3, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(*((u32*)(r4 + 0x1c)), 0x13, *((u32*)r4), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(*((u32*)(r4 + 0x1c)), 0x14, *((u32*)r4), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_LoadOpenNarc(*((u32*)(r4 + 4)), *((u32*)(r4 + 0x1c)), 0x12, *((u32*)(r4 + 0x14)));
}





void ov18_021F8BEC(void) {
}





void ov18_021F8C0C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PaletteData_BeginPaletteFade(*((u32*)(r0 + 4)), 5, 0x0000FFFF, 1);
    // str r2, [sp]
    Pokepic_StartPaletteFade(*((u32*)(r4 + 0x20)), 0x10, 0, 0);
    PaletteData_SetAutoTransparent(*((u32*)(r4 + 4)), 0);
}





void ov18_021F8C48(void) {
}





void ov18_021F8C68(void) {
    // strh r1, [r4, r0]
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r0), 2, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r4), 2, 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)r4), 2);
    // strh r1, [r4, r0]
}





void ov18_021F8CCC(void) {
    // add r4, #0x24
    AddWindow(*((u32*)r0), r0, ov18_021FBDB4);
    FillWindowPixelBuffer(r4, 0);
    // add r6, #8
    // add r4, #0x10
    NewMsgDataFromNarc(0, 0x1b, 0x00000322, *((u32*)(r5 + 0x14)));
    MessageFormat_New(*((u32*)(r5 + 0x14)));
    String_New((1 << 0xa), *((u32*)(r5 + 0x14)));
    // str r0, [sp, #0x10]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x24
    ov18_021F9648(r5, r4, 0x90, 0x70);
    Pokedex_ConvertToCurrentDexNo(*((u32*)(r5 + 0x10)), *((u32*)(r5 + (0x91 << 2))));
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r0, 3);
    NewString_ReadMsgData(r4, 9);
    // ldr r1, [sp, #0x10]
    StringExpandPlaceholders(r6, r0);
    // str r0, [sp]
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #4]
    // add r0, #0x34
    // str r3, [sp, #8]
    ov18_021F95FC(r5, 1, 0);
    String_Delete(r7);
    ov18_021E590C(*((u32*)(r5 + (0x91 << 2))), 2, *((u32*)(r5 + 0x14)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x44
    // str r2, [sp, #8]
    ov18_021F95FC(r5, r0, 0, 0);
    String_Delete(r7);
    ov18_021E595C(*((u32*)(r5 + (0x91 << 2))), 2, *((u32*)(r5 + 0x14)));
    // add r0, #0x54
    GetWindowWidth(r5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, #0x54
    ov18_021F95FC(r5, r7, ((r0 << 3) - 4), 0);
    String_Delete(r7);
    ov18_021E59A8(*((u32*)(r5 + (0x91 << 2))), 2, 0, *((u32*)(r5 + 0x14)));
    // add r0, #0x64
    GetWindowWidth(r5);
    // str r0, [sp, #0x14]
    FontID_String_GetWidthMultiline(0, r7, 0);
    // ldr r1, [sp, #0x14]
    // sub r0, r1, r0
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, #0x64
    // str r3, [sp, #8]
    ov18_021F95FC(r5, r7, (r0 >> 1), 0);
    String_Delete(r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x74
    ov18_021F9648(r5, r4, 0xa, 0x14);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x94
    ov18_021F9648(r5, r4, 0xb, 0x14);
    MessageFormat_Delete(r6);
    DestroyMsgData(r4);
    GetDexHeightMsgBank();
    NewMsgDataFromNarc(0, 0x1b, r0, *((u32*)(r5 + 0x14)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x84
    ov18_021F9648(r5, r0, *((u32*)(r5 + (0x91 << 2))), 4);
    DestroyMsgData(r4);
    GetDexWeightMsgBank();
    NewMsgDataFromNarc(0, 0x1b, r0, *((u32*)(r5 + 0x14)));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0xa4
    ov18_021F9648(r5, r0, *((u32*)(r5 + (0x91 << 2))), 4);
    DestroyMsgData(r4);
    // ldr r0, [sp, #0x10]
    String_Delete();
    // add r5, #0x24
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}





void ov18_021F8F10(void) {
}





void ov18_021F8F28(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [sp, #0xc]
    ObjCharTransfer_InitEx(r3, 0x00100010, 0x10);
}





void ov18_021F8F58(void) {
}





void ov18_021F8F60(void) {
    // str r0, [r5, r7]
}





void ov18_021F8F84(void) {
}





void ov18_021F8FA0(void) {
    // add r1, #0xb8
    // add r1, #0xb4
    // str r0, [r1]
}





void ov18_021F8FF8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r0, r4, r1
    // sub r1, #0x14
    // add r1, r4, r1
    ov18_021F922C(0x0000C618, (0x7d << 2), *((u32*)(r0 + 0x14)), *((u32*)(r0 + 0x1c)));
    SpriteTransfer_GetPlttOffset(*((u32*)(r4 + (0x7e << 2))), 1);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r4 + 4)), 2, ((r0 << 0x14) >> 0x10), 0x40);
}





void ov18_021F9054(void) {
    // add r0, r2, r1
    // sub r1, #0x14
    // add r1, r2, r1
}





void ov18_021F9068(void) {
    ov18_021F967C(*((u32*)(r0 + (0x93 << 2))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r0, r4, r1
    // sub r1, #0x28
    // add r1, r4, r1
    ov18_021F922C(0x0000C619, (0x82 << 2), *((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x1c)));
    ov18_021F967C(*((u32*)(r4 + (0x25 << 4))));
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r0, r4, r1
    // sub r1, #0x3c
    // add r1, r4, r1
    ov18_021F922C(0x0000C61A, (0x87 << 2), *((u32*)(r4 + 0x14)), *((u32*)(r4 + 0x1c)));
    SpriteTransfer_GetPlttOffset(*((u32*)(r4 + (0x83 << 2))), 1);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r4 + 4)), 2, ((r0 << 0x14) >> 0x10), 0x80);
}





void ov18_021F9108(void) {
    // add r0, r4, r1
    // sub r1, #0x28
    // add r1, r4, r1
    // add r1, #0x3c
    // add r1, #0x3c
    // add r1, #0x3c
}





void ov18_021F9150(void) {
    ov18_021E5900();
    NARC_New(*((u32*)(r5 + 0x14)));
    // str r0, [sp]
    // sub r0, #0x4e
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // add r0, r5, r1
    // sub r1, #0x50
    // add r1, r5, r1
    ov18_021F922C(0x0000C61B, (0x23 << 4), *((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x1c)));
    ov18_021E5908();
    // str r0, [sp]
    // str r0, [sp, #4]
    ov18_021F92AC(*((u32*)(r5 + (0x79 << 2))), *((u32*)(r5 + 0x14)), r4, r0);
    // str r0, [r5, r1]
    SpriteTransfer_GetPlttOffset(*((u32*)(r5 + (0x8d << 2))), 1);
    PaletteData_LoadPaletteSlotFromHardware(*((u32*)(r5 + 4)), 2, ((r0 << 0x14) >> 0x10), 0x20);
    NARC_Delete(r4);
}





void ov18_021F91DC(void) {
    // add r0, r2, r1
    // sub r1, #0x50
    // add r1, r2, r1
}





void ov18_021F91F0(void) {
    // add r4, #0xb4
}





void ov18_021F922C(void) {
    // ldr r0, [sp, #0x34]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r6, [sp, #8]
    // ldr r2, [sp, #0x20]
    // str r0, [r5]
    // ldr r3, [sp, #0x24]
    // mvn r0, r0
    // ldr r0, [sp, #0x30]
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r0, [sp, #0x40]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
}





void ov18_021F92AC(void) {
    // ldr r4, [sp, #0x1c]
    // str r4, [sp]
    // str r4, [sp, #4]
    // ldr r4, [sp, #0x18]
    // str r4, [sp, #8]
    // str r1, [sp, #0xc]
}





void ov18_021F92DC(void) {
}





void ov18_021F9310(void) {
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    // ldr r2, [sp, #0x30]
    // str r1, [sp, #0x14]
    // ldr r3, [sp, #0x34]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
}





void ov18_021F9370(void) {
    // add r0, r5, r1
    // sub r1, #0x28
    // add r1, r5, r1
    // add r2, sp, #0x2c
    // add r0, #0xb4
    // str r0, [sp, #0x50]
    // add r0, sp, #0x2c
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // add r0, sp, #0x50
    // str r0, [r5, r1]
    // add r1, #0x48
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, #8
    // add r0, #0xc
    // str r2, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // add r0, sp, #0x2c
    // add r0, #0xb4
    // str r0, [sp, #0x50]
    // add r0, sp, #0x2c
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // add r0, sp, #0x50
    // str r0, [r5, r1]
    // add r0, #0x38
    // add r1, #0x34
}





void ov18_021F94A0(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}





void ov18_021F94BC(void) {
    // add r0, r4, r1
    // sub r1, #0x14
    // add r1, r4, r1
    // add r2, sp, #0
    // add r0, #0xb4
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    // str r0, [sp, #0x28]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, sp, #0x24
    // str r0, [r4, r1]
}





void ov18_021F9508(void) {
    // mov r1, #0x1f
    // lsl r1, r1, #4
    // ldr r3, _021F9514 ; =Sprite_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021F9514: .word Sprite_Delete
    // TODO: decompile
}





void ov18_021F9518(void) {
    // add r0, r5, r1
    // sub r1, #0x50
    // add r1, r5, r1
    // add r2, sp, #0
    // add r0, #0xb4
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, sp, #0x24
    // str r0, [r5, r1]
    // add r1, #0x18
}





void ov18_021F959C(void) {
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r3, _021F95A8 ; =Sprite_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021F95A8: .word Sprite_Delete
    // TODO: decompile
}





void ov18_021F95AC(void) {
}





void ov18_021F95CC(void) {
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x10
}





void ov18_021F95F8(void) {
    // ldr r0, [r0, #0x20]
    // bx lr
    // TODO: decompile
}





void ov18_021F95FC(void) {
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x28]
    // sub r5, r5, r0
    // ldr r0, [sp, #0x28]
    // sub r5, r5, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}





void ov18_021F9648(void) {
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
}





void ov18_021F967C(void) {
    // lsl r1, r0, #2
    // ldr r0, _021F9684 ; =ov18_021FBE10
    // ldr r0, [r0, r1]
    // bx lr
    // _021F9684: .word ov18_021FBE10
    // TODO: decompile
}





void ov18_021F9688(void) {
    // ldr r1, _021F9690 ; =ov18_021FBDFC
    // ldrb r0, [r1, r0]
    // bx lr
    // nop
    // _021F9690: .word ov18_021FBDFC
    // TODO: decompile
}





void ov18_021F9694(void) {
    // str r4, [sp]
    // add r3, sp, #4
    // ldr r0, [sp, #4]
    // add r1, #0x80
    // add r0, #0x40
}




