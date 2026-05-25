/* Decompiled from asm/overlay_01_021F3F50.s */
#include "global.h"

void ov01_021F3F50(void) {
    // str r0, [r5]
}




void ov01_021F3F9C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp]
    // str r0, [sp, #4]
}




u8 ov01_021F4044(void) {
}




void ov01_021F4048(void) {
    GetFontAttribute(0, 1);
    GetFontAttribute(0, 3);
    // add r0, r4, r0
    // str r0, [sp, #0x14]
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x18)), 0, *((u32*)(r5 + 4)));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(*((u32*)(r5 + 0x10)), r4, r0, r4);
    String_Delete(r6);
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r4, r4, r0
    NewString_ReadMsgData(*((u32*)(r5 + 0x18)), *((u32*)ov01_02206AF4));
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    AddTextPrinterParameterized(*((u32*)(r5 + 0x10)), 0, r0, 0);
    String_Delete(r6);
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x18)), *((u32*)(r7 - 4)), *((u32*)(r5 + 4)));
    GetFontAttribute(0, 2);
    FontID_String_GetWidth(0, r6, r0);
    // sub r3, r1, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    AddTextPrinterParameterized(*((u32*)(r5 + 0x10)), 0, r6);
    String_Delete(r6);
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
}




void Field_SaveStatsPrinter_Print(void) {
    Heap_Alloc(*((u32*)(r0 + 4)), 0x10);
    *((u32*)(r4 + 0x10)) = r0;
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)), *((u8*)(r4 + 8)), 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(*((u32*)(r4 + 0xc)), *((u8*)(r4 + 8)), 0x000003D9, 0xb);
    GetFontAttribute(0, 6);
    FillWindowPixelBuffer(*((u32*)(r4 + 0x10)), r0);
    ov01_021F4048(r4);
    DrawFrameAndWindow1(*((u32*)(r4 + 0x10)), 0, 0x000003D9, 0xb);
}




void Field_SaveStatsPrinter_RemoveFromScreen(void) {
}




void Field_SaveStatsPrinter_New(void) {
    Heap_Alloc(r1, 0x34);
    // str r6, [r4]
    *((u32*)(r0 + 4)) = r5;
    *((u8*)(r0 + 8)) = r7;
    *((u32*)(r0 + 0xc)) = *((u32*)(r6 + 8));
    MessageFormat_New(r5);
    *((u32*)(r4 + 0x14)) = r0;
    NewMsgDataFromNarc(1, 0x1b, 0x000001A7, r5);
    *((u32*)(r4 + 0x18)) = r0;
    // add r0, #0x1c
    ov01_021F3F50(r4, *((u32*)r4));
    // add r1, #0x1c
    ov01_021F3F9C(*((u32*)(r4 + 0x14)), r4);
    *((u32*)(r4 + 0x2c)) = 0xd;
    // add r0, #0x1c
    ov01_021F4044(r4);
    *((u32*)(r4 + 0x30)) = r0;
}




void Field_SaveStatsPrinter_Delete(void) {
}




void ov01_021F4234(void) {
    // sub r4, r1, r0
    // sub r1, r1, r0
    // add r0, r1, r0
    // asr r4, r0, #1
}




void ov01_021F426C(void) {
    GetFontAttribute(0, 1);
    GetFontAttribute(0, 3);
    // add r0, r4, r0
    // str r0, [sp, #0x10]
    ReadMsgData_ExpandPlaceholders(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x18)), *((u32*)ov01_02206B04), *((u32*)(r5 + 4)));
    ov01_021F4234(*((u32*)(r5 + 0x10)), r0, *((u32*)(r4 + 4)), 0);
    // ldr r0, [sp, #0x10]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)(r5 + 0x10)), 0, r6, r0);
    String_Delete(r6);
    // add r4, #0x10
}




void ov01_021F42F8(void) {
    Heap_Alloc(*((u32*)(r0 + 4)), 0x10);
    *((u32*)(r4 + 0x10)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    AddWindowParameterized(*((u32*)(r4 + 0xc)), *((u32*)(r4 + 0x10)), *((u8*)(r4 + 8)), 7);
    FillWindowPixelBuffer(*((u32*)(r4 + 0x10)), 0);
    ov01_021F426C(r4);
    CopyWindowToVram(*((u32*)(r4 + 0x10)));
}




void ov01_021F434C(void) {
}




void ov01_021F4360(void) {
    Heap_Alloc(r1, 0x34);
    // str r6, [r4]
    *((u32*)(r0 + 4)) = r5;
    *((u8*)(r0 + 8)) = r7;
    *((u32*)(r0 + 0xc)) = *((u32*)(r6 + 8));
    MessageFormat_New(r5);
    *((u32*)(r4 + 0x14)) = r0;
    NewMsgDataFromNarc(1, 0x1b, 0x000001A7, r5);
    *((u32*)(r4 + 0x18)) = r0;
    TextFlags_SetCanABSpeedUpPrint(1);
    TextFlags_SetAutoScrollParam(0);
    TextFlags_SetCanTouchSpeedUpPrint(1);
    // add r0, #0x1c
    ov01_021F3F50(r4, *((u32*)r4));
    // add r1, #0x1c
    ov01_021F3F9C(*((u32*)(r4 + 0x14)), r4);
    *((u32*)(r4 + 0x2c)) = 0x13;
    // add r0, #0x1c
    ov01_021F4044(r4);
    *((u32*)(r4 + 0x30)) = r0;
}




void ov01_021F43D0(void) {
}




void Field_SaveGameNormal(void) {
}




void ov01_021F4404(void) {
    // mvn r1, r1
}




void ov01_021F4440(void) {
}



