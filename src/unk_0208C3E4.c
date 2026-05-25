/* Decompiled from asm/unk_0208C3E4.s */
#include "global.h"

void sub_0208C3E4(void) {
    // add r1, r4, r6
    // add r2, r2, r3
    AddWindow(*((u32*)r0), _02104D94, (0 << 3));
    // add r0, r4, r6
    FillWindowPixelBuffer(0);
    sub_0208C9A4(r7);
    sub_0208C57C(r7);
    sub_0208C614(r7);
    sub_0208C6B4(r7);
}




void sub_0208C42C(void) {
    // ldrsb r0, [r4, r0]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0208C444: ; jump table
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    AllocWindows(0x13, ((*((u32*)(r0 + (0x8a << 2))) << 0x18) >> 0x18));
    // str r0, [r4, r1]
    // add r1, r1, r6
    AddWindow(*((u32*)r4), *((u32*)(r4 + (0x89 << 2))), r7);
    // add r7, #8
    // add r6, #0x10
}




void sub_0208C4E0(void) {
    // ldrsb r0, [r4, r0]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0208C4F8: ; jump table
    // add r0, r0, r5
    ClearWindowTilemapAndCopyToVram(*((u32*)(r0 + (0x89 << 2))));
    // add r5, #0x10
    ClearWindowTilemapAndCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    WindowArray_Delete(*((u32*)(r4 + (0x89 << 2))), ((*((u32*)(r4 + ((0x89 << 2) + 4))) << 0x18) >> 0x18));
}




void sub_0208C560(void) {
    // add r5, #0x10
}




void sub_0208C57C(void) {
    // add r0, r5, r4
    FillWindowPixelBuffer(0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, #0x20
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r4
    AddTextPrinterParameterizedWithColor(0x000E0F00, 0, *((u32*)(r5 + r4)), 0);
    // add r0, #0x2e
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r5 + (0x7a << 4))), 1, *((u32*)(r5 + (0x7a << 4))));
    // add r1, r5, r4
    sub_0208C778(r5, (0xc1 << 0xa), 1);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r5 + (0x7a << 4))), 2, *((u32*)(r5 + (0x7a << 4))));
    // add r1, r5, r4
    sub_0208C778(r5, 0x00050600, 1);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}




void sub_0208C614(void) {
    // add r0, r5, r6
    FillWindowPixelBuffer(0);
    // add r0, #0x7c
    // str r0, [sp]
    // add r2, r5, r6
    sub_0200CDAC(*((u32*)(r5 + 0x0000079C)), 1, 0);
    NewString_ReadMsgData(*((u32*)(r5 + (0x7a << 4))), 3);
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r2, #0x3e
    BufferIntegerAsString(*((u32*)(r5 + 0x000007A8)), 0, ((*((u8*)(r5 + r6)) << 0x19) >> 0x19), 3);
    StringExpandPlaceholders(*((u32*)(r5 + 0x000007A8)), *((u32*)(r5 + (0x000007A8 + 4))), r4);
    String_Delete(r4);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r6
    AddTextPrinterParameterizedWithColor((r6 << 7), 0, *((u32*)(r5 + 0x000007AC)), 0x10);
    // add r0, r5, r6
    ScheduleWindowCopyToVram();
}




void sub_0208C6B4(void) {
    // add r0, r5, r0
    FillWindowPixelBuffer((0x7d << 2), 0);
    BufferItemName(*((u32*)(r5 + 0x000007A8)), 0, *((u16*)(r5 + 0x0000023E)));
    NewString_ReadMsgData(*((u32*)(r5 + (0x7a << 4))), 5);
    StringExpandPlaceholders(*((u32*)(r5 + 0x000007A8)), *((u32*)(r5 + (0x000007A8 + 4))), r0);
    String_Delete(r4);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r5 + (0x7a << 4))), 6, *((u32*)(r5 + (0x7a << 4))));
    // add r1, r5, r1
    sub_0208C778(r5, (0x7d << 2), 0x00010200, 0);
    // add r0, #0x64
    ScheduleWindowCopyToVram(r5);
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x7d << 2));
}




void sub_0208C73C(void) {
    // add r2, #0x18
    // add r2, #0x48
    // add r3, #0xc
}




void sub_0208C778(void) {
    FontID_String_GetWidth(0, *((u32*)(r0 + 0x000007AC)), 0, 0);
    GetWindowWidth(r6);
    // sub r0, r0, r5
    FontID_String_GetWidth(0, *((u32*)(r4 + 0x000007AC)), 0, ((((r0 << 0x1b) >> 0x18) << 0x18) >> 0x18));
    GetWindowWidth(r6);
    // sub r1, r0, r5
    // add r0, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, *((u32*)(r4 + 0x000007AC)), (((r1 >> 0x1f) << 0x17) >> 0x18));
}




void sub_0208C7F8(void) {
    // add r1, r1, r0
    // add r0, r0, r1
    // ldrsb r0, [r3, r0]
    // add r3, #0xc
    ReadMsgDataIntoString(*((u32*)(r0 + (0x7a << 4))), r2, *((u32*)(r0 + (0x7a << 4))), (0x7a << 4));
    // add r1, r2, r1
    // ldr r3, [sp, #0x10]
    sub_0208C778(r5, (r6 << 4), r4);
}




void sub_0208C850(void) {
    // add r3, #0xc
    // add r1, r2, r1
    // ldr r3, [sp, #0x10]
}




void sub_0208C87C(void) {
    NewString_ReadMsgData(*((u32*)(r0 + (0x7a << 4))));
    // add r0, sp, #0x10
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(r5 + 0x000007A8)), 0, r6, r7);
    StringExpandPlaceholders(*((u32*)(r5 + 0x000007A8)), *((u32*)(r5 + (0x000007A8 + 4))), r4);
    String_Delete(r4);
}




void sub_0208C8C8(void) {
    // str r3, [sp, #0x10]
    // add r3, #0xc
    ReadMsgDataIntoString(*((u32*)(r0 + (0x7a << 4))), r2, *((u32*)(r0 + (0x7a << 4))), (0x7a << 4));
    FontID_String_GetWidth(0, *((u32*)(r4 + 0x000007AC)), 0);
    // add r1, sp, #0x48
    // sub r1, r2, r1
    // add r0, r1, r0
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r0, sp, #0x4c
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x14]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, r7
    AddTextPrinterParameterizedWithColor(0x00010200, 0, *((u32*)(r4 + 0x000007AC)));
    // str r0, [sp]
    // add r3, sp, #0x28
    // ldr r1, [sp, #0x10]
    sub_0208C87C(r4, *((u16*)(r3 + 0x14)), *((u8*)(r3 + 0x1c)));
    FontID_String_GetWidth(0, *((u32*)(r4 + 0x000007AC)), 0);
    // mov ip, r0
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r3, [sp, #0x14]
    // mov r6, ip
    // add r0, r5, r7
    // sub r3, r3, r6
    AddTextPrinterParameterizedWithColor(0x00010200, 0, *((u32*)(r4 + 0x000007AC)));
    // str r0, [sp]
    // add r3, sp, #0x28
    // ldr r1, [sp, #0x38]
    sub_0208C87C(r4, *((u16*)(r3 + 0x18)), *((u8*)(r3 + 0x1c)));
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r3, [sp, #0x18]
    // add r0, r5, r7
    AddTextPrinterParameterizedWithColor(0x00010200, 0, *((u32*)(r4 + 0x000007AC)));
}




void sub_0208C9A4(void) {
    // str r1, [sp]
    sub_0208C850(0, 7, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 1, 0x17, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 2, 0x6d, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 3, 0x7e, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 4, 0x80, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 5, 0x9d, 0x000E0F00);
    // add r0, #0x54
    FillWindowPixelBuffer(r4, 0);
    // str r0, [sp]
    sub_0208C850(r4, 6, 4, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 7, 8, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 8, 0xa, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 9, 0xc, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 0xa, 0xd, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 0xb, 0xf, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 0xc, 0x11, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 0xd, 0x13, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 0xf, 0x6e, 0x000E0F00);
    // str r3, [sp]
    sub_0208C7F8(r4, 0x10, 0x6f, 0);
    // str r0, [sp]
    sub_0208C7F8(r4, 0x11, 0x70, 1);
    // str r0, [sp]
    sub_0208C7F8(r4, 0x12, 0x71, 3);
    // str r0, [sp]
    sub_0208C7F8(r4, 0x13, 0x72, 4);
    // str r0, [sp]
    sub_0208C7F8(r4, 0x14, 0x73, 2);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), 0x74, *((u32*)(r4 + (0x7a << 4))));
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r2, #0x55
    // str r0, [sp, #8]
    // add r0, r4, r2
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x000E0F00, 0, *((u32*)(r4 + 0x000007AC)), 3);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), 0x92, *((u32*)(r4 + (0x7a << 4))));
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r1, #0x75
    // add r0, r4, r1
    AddTextPrinterParameterizedWithColor(0x000E0F00, 4, *((u32*)(r4 + 0x000007AC)), 0);
    // str r0, [sp]
    sub_0208C850(r4, 0x18, 0x95, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 0x19, 0x93, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 0x1a, 0x94, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 0x1b, 0xa2, 0x000E0F00);
    // str r0, [sp]
    sub_0208C850(r4, 0x1c, 0xa0, 0x00010200);
    // str r0, [sp]
    sub_0208C850(r4, 0x1d, 0xb6, 0x00010200);
    // str r0, [sp]
    sub_0208C850(r4, 0x1e, 0xb3, 0x000E0F00);
}




void sub_0208CBD4(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r0), 1, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 1, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 4, 0, 0);
    // ldrsb r0, [r4, r0]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0208CC40: ; jump table
    sub_0208CC88(r4);
    sub_0208D0A4(r4);
    sub_0208D178(r4);
    sub_0208D474(r4);
    sub_0208D520(r4);
    sub_0208D6B8(r4);
    sub_0208D728(r4);
}




void sub_0208CC88(void) {
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x5d << 2));
    ClearWindowTilemapAndScheduleTransfer((r4 + 4));
    // add r0, #0x74
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0x84
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0x94
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0xa4
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0xb4
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0xc4
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0xd4
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0xe4
    ClearWindowTilemapAndScheduleTransfer(r4);
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x10
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x20
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x30
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x40
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x50
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + (0x89 << 2))));
    ScheduleWindowCopyToVram((r4 + 4));
    // add r0, #0x74
    ScheduleWindowCopyToVram(r4);
    // add r0, #0x84
    ScheduleWindowCopyToVram(r4);
    // add r0, #0x94
    ScheduleWindowCopyToVram(r4);
    // add r0, #0xa4
    ScheduleWindowCopyToVram(r4);
    // add r0, #0xb4
    ScheduleWindowCopyToVram(r4);
    // add r0, #0xc4
    ScheduleWindowCopyToVram(r4);
    // add r0, #0xd4
    ScheduleWindowCopyToVram(r4);
    // add r0, #0xe4
    ScheduleWindowCopyToVram(r4);
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x10
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x20
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x30
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x40
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x50
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r1, #0x10
    Pokedex_ConvertToCurrentDexNo(*((u32*)(*((u32*)(r4 + (0x8b << 2))) + 0x1c)), *((u16*)(r4 + (0x8b << 2))));
    // str r0, [sp]
    sub_0208C87C(r4, 9, r0, 3);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), 0x16, *((u32*)(r4 + (0x7a << 4))));
    // sub r1, #0x5c
    sub_0208C778(r4, *((u32*)(r4 + (0xa << 6))), 0x00010200, 2);
    // sub r1, #0x5c
    sub_0208C778(r4, *((u32*)(r4 + r1)), 0x00050600, 2);
    FontID_String_GetCenterAlignmentX(0, *((u32*)(r4 + (0x23 << 4))), 0, 0x48);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0xc
    // add r0, #0x10
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + (0x89 << 2))), 0, *((u32*)(r4 + (0x89 << 2))), r0);
    // sub r1, #0x3c
    FontID_String_GetCenterAlignmentX(0, *((u32*)(r4 + (0x9d << 2))), 0, 0x48);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x14
    // add r0, #0x20
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + (0x89 << 2))), 0, *((u32*)(r4 + (0x89 << 2))), r0);
    // sub r1, #0x3c
    FontID_String_GetCenterAlignmentX(0, *((u32*)(r4 + r1)), 0, 0x48);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, #0x14
    // add r0, #0x20
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + (0x89 << 2))), 0, *((u32*)(r4 + (0x89 << 2))), r0);
    // str r0, [sp]
    sub_0208C87C(r4, 0x10, ((*((u32*)(r4 + (0x91 << 2))) << 0x10) >> 0x10), 5);
    // add r1, #0x30
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x00010200, 2);
    // str r0, [sp]
    sub_0208C87C(r4, 0x12, *((u32*)(r4 + (0x92 << 2))), 7);
    // add r1, #0x40
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x00010200, 1);
    // str r0, [sp]
    // add r2, #0xe
    // sub r2, r5, r2
    sub_0208C87C(r4, 0x15, *((u32*)(r4 + (0x00000242 + 6))), 7);
    // str r2, [sp]
    sub_0208C87C(r4, 0x15, 0, 7);
    // add r1, #0x50
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x00010200, 1);
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x10
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x20
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x30
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x40
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x50
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
}




void sub_0208CFB4(void) {
    sub_0208E600(r1, r2, 0x13);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r0 + 0x18)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r4 + 0x20)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r4 + 0x28)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r4 + 0x38)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r5), 1, 0, 0x10);
    sub_0208E994(r4);
}




void sub_0208D078(void) {
    // add r0, r1, r0
    // add r0, r2, r0
    // add r0, r3, r0
    // add r0, r4, r0
    // add r0, r5, r0
}




void sub_0208D0A4(void) {
    // add r0, #0x14
    ScheduleWindowCopyToVram();
    // add r0, #0x60
    FillWindowPixelBuffer(*((u32*)(r5 + (0x89 << 2))), 0);
    sub_0208A520(r5);
    sub_0208C73C(r5);
    AllocMonZeroed(0x13, *((u8*)(*((u32*)(r5 + (0x8b << 2))) + 0x11)));
    CopyBoxPokemonToPokemon(r6, r0);
    // add r0, #0x60
    sub_0208CFB4(*((u32*)(r5 + (0x89 << 2))), r4, r7);
    Heap_Free(r4);
    // sub r0, #8
    // add r0, #0x60
    sub_0208CFB4(*((u32*)(r5 + r0)), r6, r7);
    // add r0, #0x60
    ScheduleWindowCopyToVram(*((u32*)(r5 + (0x89 << 2))));
    sub_0208D078(r5);
    // add r0, #0x70
    FillWindowPixelBuffer(*((u32*)(r5 + (0x89 << 2))), 0);
    NewString_ReadMsgData(*((u32*)(r5 + (0x7a << 4))), 0xc0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x70
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + (0x89 << 2))), 0, r0, 0);
    // add r0, #0x70
    ScheduleWindowCopyToVram(*((u32*)(r5 + (0x89 << 2))));
    String_Delete(r4);
}




void sub_0208D178(void) {
    // str r3, [sp]
    sub_0208C7F8(0x10, 0x6f, 0);
    // str r0, [sp]
    sub_0208C7F8(r4, 0x11, 0x70, 1);
    // str r0, [sp]
    sub_0208C7F8(r4, 0x12, 0x71, 3);
    // str r0, [sp]
    sub_0208C7F8(r4, 0x13, 0x72, 4);
    // str r0, [sp]
    sub_0208C7F8(r4, 0x14, 0x73, 2);
    // add r0, #0x24
    ScheduleWindowCopyToVram(r4);
    // add r0, #0xf4
    ScheduleWindowCopyToVram(r4);
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x41 << 2));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x45 << 2));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x49 << 2));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x4d << 2));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x51 << 2));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x55 << 2));
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x10
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x20
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x30
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x40
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x50
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x60
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x70
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    GetWindowWidth(*((u32*)(r4 + (0x89 << 2))));
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    sub_0208C8C8(r4, 0, 0x75, 0x77);
    // str r0, [sp]
    sub_0208C87C(r4, 0x78, *((u16*)(r4 + (0x96 << 2))), 3);
    // add r1, #0x10
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x00010200, 1);
    // str r0, [sp]
    sub_0208C87C(r4, 0x79, *((u16*)(r4 + 0x0000025A)), 3);
    // add r1, #0x20
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x00010200, 1);
    // str r0, [sp]
    sub_0208C87C(r4, 0x7a, *((u16*)(r4 + (0x97 << 2))), 3);
    // add r1, #0x30
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x00010200, 1);
    // str r0, [sp]
    sub_0208C87C(r4, 0x7b, *((u16*)(r4 + 0x0000025E)), 3);
    // add r1, #0x40
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x00010200, 1);
    // str r0, [sp]
    sub_0208C87C(r4, 0x7c, *((u16*)(r4 + (0x26 << 4))), 3);
    // add r1, #0x50
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x00010200, 1);
    BufferAbilityName(*((u32*)(r4 + 0x000007A8)), 0, *((u8*)(r4 + 0x00000262)));
    NewString_ReadMsgData(*((u32*)(r4 + (0x7a << 4))), 0x7d);
    StringExpandPlaceholders(*((u32*)(r4 + 0x000007A8)), *((u32*)(r4 + (0x000007A8 + 4))), r0);
    String_Delete(r5);
    // add r1, #0x60
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x00010200, 0);
    NewMsgDataFromNarc(1, 0x1b, 0x000002D2, 0x13);
    ReadMsgDataIntoString(*((u8*)(r4 + 0x00000262)), *((u32*)(r4 + 0x000007AC)));
    DestroyMsgData(r5);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x70
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + (0x89 << 2))), 0, *((u32*)(r4 + 0x000007AC)), 3);
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x10
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x20
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x30
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x40
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x50
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x60
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x70
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
}




void sub_0208D474(void) {
    // add r0, #0x44
    // add r0, #0x80
    // add r0, #0x90
    // add r0, #0xa0
    // add r0, #0xb0
    // add r0, #0x80
    // add r0, #0x90
    // add r0, #0xa0
    // add r0, #0xb0
    // add r0, r4, r0
}




void sub_0208D520(void) {
    // add r0, #0x54
    ScheduleWindowCopyToVram();
    // sub r0, #8
    // add r0, #0x30
    FillWindowPixelBuffer(*((u32*)(r4 + (0x8b << 2))), 0);
    // add r0, #0x40
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x50
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x60
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r0, #0x70
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), 0xbb, *((u32*)(r4 + (0x7a << 4))));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x30
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + (0x89 << 2))), 0, *((u32*)(r4 + 0x000007AC)), 4);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), 0xbc, *((u32*)(r4 + (0x7a << 4))));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x40
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + (0x89 << 2))), 0, *((u32*)(r4 + 0x000007AC)), 4);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), 0xbd, *((u32*)(r4 + (0x7a << 4))));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x50
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + (0x89 << 2))), 0, *((u32*)(r4 + 0x000007AC)), 4);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), 0xbe, *((u32*)(r4 + (0x7a << 4))));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x60
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + (0x89 << 2))), 0, *((u32*)(r4 + 0x000007AC)), 4);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), 0xbf, *((u32*)(r4 + (0x7a << 4))));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x70
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + (0x89 << 2))), 0, *((u32*)(r4 + 0x000007AC)), 4);
    // add r0, #0x30
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x40
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x50
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x60
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x70
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
}




void sub_0208D6B8(void) {
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x79 << 2));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x75 << 2));
    // add r0, r4, r0
    ScheduleWindowCopyToVram((0x5d << 2));
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // str r0, [sp]
    sub_0208C87C(r4, 0xb7, *((u8*)(r4 + 0x000007C6)), 3);
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x00010200, 0);
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    BgCommitTilemapBufferToVram(*((u32*)r4), 4);
}




void sub_0208D728(void) {
    // add r0, #0x10
    FillWindowPixelBuffer(*((u32*)(r0 + (0x89 << 2))), 0);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), 0xa5, *((u32*)(r4 + (0x7a << 4))));
    // add r1, #0x10
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x000E0F00, 0);
    // add r2, #0xc
    // add r1, #0xa6
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), *((u8*)(r4 + 0x0000027B)), *((u32*)(r4 + (0x7a << 4))));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x10
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + (0x89 << 2))), 0, *((u32*)(r4 + 0x000007AC)), 0);
    // add r0, #0x10
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
}




void sub_0208D7C4(void) {
    // add r0, #0x10
    FillWindowPixelBuffer(*((u32*)(r0 + (0x89 << 2))), 0);
    // add r0, #0x20
    FillWindowPixelBuffer(*((u32*)(r4 + (0x89 << 2))), 0);
    // add r1, r2, r1
    // add r2, r3, r1
    GetRibbonAttr(*((u8*)(r4 + (0x000007C4 + 3))), 3, *((u8*)(r4 + (0x000007C4 + 1))), *((u8*)(r4 + 0x000007C4)));
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r4 + 0x000007A4)), r0, *((u32*)(r4 + 0x000007A4)));
    // add r1, #0x10
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x000E0F00, 0);
    GetRibbonDescGmm(*((u32*)(*((u32*)(r4 + (0x8b << 2))) + 0x20)), *((u8*)(r4 + 0x000007C7)));
    // add r2, #8
    ReadMsgDataIntoString(*((u32*)(r4 + 0x000007A4)), r0, *((u32*)(r4 + 0x000007A4)));
    // add r1, #0x20
    sub_0208C778(r4, *((u32*)(r4 + (0x89 << 2))), 0x00010200, 0);
    // add r0, #0x10
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
    // add r0, #0x20
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
}




void sub_0208D884(void) {
    // add r1, #8
    // add r2, r5, r1
    // add r1, #0x40
    // add r2, #0x48
    // str r1, [sp, #0x20]
    // add r1, r5, r4
    // add r0, #0x4c
    // str r2, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // add r0, #8
    // str r0, [sp, #0x20]
    GetMoveMaxPP(*((u16*)(*((u32*)(r0 + *((u8*)(*((u16*)(r2 + (0x89 << 2))) + (0x89 << 2))))) + 0x18)), 0, *((u8*)(*((u16*)(r2 + (0x89 << 2))) + (0x89 << 2))));
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x20]
    // sub r2, #8
    ReadMsgDataIntoString(*((u32*)(r5 + 0x000007B4)), *((u32*)(r5 + 0x000007B4)));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r6, r7
    AddTextPrinterParameterizedWithColor(0x00010200, 0, *((u32*)(r5 + 0x000007AC)), 1);
    // ldr r0, [sp, #0x20]
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r5 + (0x7a << 4))), 0x87, *((u32*)(r5 + (0x7a << 4))));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r6, r7
    AddTextPrinterParameterizedWithColor(0x00010200, 0, *((u32*)(r5 + 0x000007AC)), 0x10);
    // add r0, #0x8d
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // add r4, #0x88
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // add r1, #8
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    sub_0208C8C8(r5, r4, 0x75, r4);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r5 + (0x7a << 4))), 0x99, *((u32*)(r5 + (0x7a << 4))));
    FontID_String_GetWidth(0, *((u32*)(r5 + 0x000007AC)), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r6, r7
    // sub r3, r3, r4
    AddTextPrinterParameterizedWithColor(0x00010200, 0, *((u32*)(r5 + 0x000007AC)), 0x3c);
}




void sub_0208D9A0(void) {
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x61 << 2));
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x65 << 2));
    // add r0, r5, r0
    ScheduleWindowCopyToVram((0x69 << 2));
    // add r0, #0xd0
    FillWindowPixelBuffer(*((u32*)(r5 + (0x89 << 2))), 0);
    // add r0, #0xe0
    FillWindowPixelBuffer(*((u32*)(r5 + (0x89 << 2))), 0);
    // add r0, #0xf0
    FillWindowPixelBuffer(*((u32*)(r5 + (0x89 << 2))), 0);
    GetMoveAttr(r4, 2);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r5 + (0x7a << 4))), 0x9a, *((u32*)(r5 + (0x7a << 4))));
    // str r0, [sp]
    sub_0208C87C(r5, 0x96, 3);
    // add r1, #0xd0
    sub_0208C778(r5, *((u32*)(r5 + (0x89 << 2))), 0x00010200, 1);
    GetMoveAttr(r4, 4);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r5 + (0x7a << 4))), 0x9a, *((u32*)(r5 + (0x7a << 4))));
    // str r0, [sp]
    sub_0208C87C(r5, 0x97, 3);
    // add r1, #0xe0
    sub_0208C778(r5, *((u32*)(r5 + (0x89 << 2))), 0x00010200, 1);
    NewMsgDataFromNarc(1, 0x1b, 0x000002ED, 0x13);
    ReadMsgDataIntoString(r4, *((u32*)(r5 + 0x000007AC)));
    // add r1, #0xf0
    sub_0208C778(r5, *((u32*)(r5 + (0x89 << 2))), 0x00010200, 0);
    DestroyMsgData(r6);
    // add r0, #0xd0
    ScheduleWindowCopyToVram(*((u32*)(r5 + (0x89 << 2))));
    // add r0, #0xe0
    ScheduleWindowCopyToVram(*((u32*)(r5 + (0x89 << 2))));
    // add r0, #0xf0
    ScheduleWindowCopyToVram(*((u32*)(r5 + (0x89 << 2))));
}




void sub_0208DAD4(void) {
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, r4, r0
    // add r0, #0xd0
    // add r0, #0xe0
    // add r0, #0xf0
}




void sub_0208DB1C(void) {
    // sub r0, #8
    // add r0, #0xc0
    // add r0, #0xc0
    // sub r0, #0xb8
    // add r0, r4, r0
}




void sub_0208DB58(void) {
}




void sub_0208DB64(void) {
    // add r0, #8
    // add r0, r1, r0
    FillWindowPixelBuffer((((*((u8*)(r0 + 0x000007BD)) << 0x1c) >> 0x1c) << 4), 0);
    // add r0, #8
    // add r0, r1, r0
    FillWindowPixelBuffer((((*((u8*)(r4 + 0x000007BD)) << 0x18) >> 0x1c) << 4), 0);
    sub_0208D884(r4, ((*((u8*)(r4 + 0x000007BD)) << 0x1c) >> 0x1c));
    sub_0208D884(r4, ((*((u8*)(r4 + 0x000007BD)) << 0x18) >> 0x1c));
    // add r0, #8
    // add r0, r1, r0
    ScheduleWindowCopyToVram((((*((u8*)(r4 + 0x000007BD)) << 0x1c) >> 0x1c) << 4), *((u32*)(r4 + (0x89 << 2))));
    // add r0, #8
    // add r0, r1, r0
    ScheduleWindowCopyToVram((((*((u8*)(r4 + 0x000007BD)) << 0x18) >> 0x1c) << 4), *((u32*)(r4 + (0x89 << 2))));
}




void sub_0208DBF0(void) {
    // ldrsb r0, [r5, r0]
    // add r0, #0xd0
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r0 + (0x89 << 2))));
    // add r0, #0xe0
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r5 + (0x89 << 2))));
    // add r0, #0xf0
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r5 + (0x89 << 2))));
    // add r4, #0xf0
    // add r4, #0x50
    FillWindowPixelBuffer(*((u32*)(r5 + (0x89 << 2))), 0);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r5 + (0x7a << 4))), 0x9c, *((u32*)(r5 + (0x7a << 4))));
    sub_0208C778(r5, r4, 0x00010200, 0);
    ScheduleWindowCopyToVram(r4);
}




void sub_0208DC68(void) {
    // add r0, r1, r0
    FillWindowPixelBuffer((1 << 8), 0);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), 0xc1, *((u32*)(r4 + (0x7a << 4))));
    // str r3, [sp]
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r1, r0
    AddTextPrinterParameterizedWithColor((0xff + 1), 4, *((u32*)(r4 + 0x000007AC)), 0);
    // add r0, #0xc0
    ClearWindowTilemapAndScheduleTransfer(*((u32*)(r4 + (0x89 << 2))));
    // add r0, r1, r0
    ScheduleWindowCopyToVram((1 << 8), *((u32*)(r4 + (0x89 << 2))));
    // add r0, r1, r0
    ClearWindowTilemapAndScheduleTransfer((1 << 8), *((u32*)(r4 + (0x89 << 2))));
    // sub r0, #8
    // add r0, #0xc0
    FillWindowPixelBuffer(*((u32*)(r4 + (0x8b << 2))), 0);
    sub_0208D884(r4, 4);
    // add r0, #0xc0
    ScheduleWindowCopyToVram(*((u32*)(r4 + (0x89 << 2))));
}




void sub_0208DD20(void) {
    // add r0, r1, r0
    FillWindowPixelBuffer((0x11 << 4), 0);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), 0xc2, *((u32*)(r4 + (0x7a << 4))));
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r1, #0x11
    // add r0, r0, r1
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + (0x89 << 2))), 4, *((u32*)(r4 + 0x000007AC)), 0);
    // add r0, r1, r0
    ScheduleWindowCopyToVram((0x11 << 4), *((u32*)(r4 + (0x89 << 2))));
    // add r0, r1, r0
    ClearWindowTilemapAndScheduleTransfer((0x11 << 4), *((u32*)(r4 + (0x89 << 2))));
}




void sub_0208DDA0(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0208DDBA: ; jump table
    // add r6, #0x20
    DrawFrameAndWindow2(*((u32*)(r0 + (0x89 << 2))), 1, 0x000003E2, 0xd);
    FillWindowPixelBuffer(r6, 0xf);
    // add r2, #0xc
    ReadMsgDataIntoString(*((u32*)(r4 + (0x7a << 4))), r5, *((u32*)(r4 + (0x7a << 4))));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 1, *((u32*)(r4 + 0x000007AC)), 0);
    ScheduleWindowCopyToVram(r6);
}



