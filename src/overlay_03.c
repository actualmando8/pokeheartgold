/* Decompiled from asm/overlay_03.s */
#include "global.h"

void ov03_02253E20(void) {
    *((u8*)((r1 + 0x40) + 0x94)) = (((((r0 + 0x94) + 0x94) + 0x40) + 0x40) + 0x40);
}




void ov03_02253ED0(void) {
    // add r0, #0x20
    WindowIsInUse(*((u32*)ov03_022598A0));
    // add r3, sp, #0x60
    // add r0, sp, #0x64
    // str r0, [sp]
    // add r0, sp, #0x68
    // str r0, [sp, #4]
    // add r0, sp, #0x6c
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x40
    // str r0, [sp, #0x10]
    // add r1, #0x20
    AddWindowParameterized(*((u32*)(*((u32*)(*((u32*)ov03_022598A0) + 0x68)) + 8)), *((u32*)ov03_022598A0), 3, *((u8*)r3));
    // add r0, #0x20
    DrawFrameAndWindow1(*((u32*)ov03_022598A0), 1, 0x000003D9, 0xb);
    // add r4, sp, #0x40
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, #0x20
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x14]
    ListMenuInit(r3, 0, 0, 4);
    *((u32*)(*((u32*)ov03_022598A0) + 0x5c)) = r0;
    // add r0, #0x20
    CopyWindowToVram(*((u32*)ov03_022598A0), ov03_022598A0, *((u32*)ov03_022598A0));
}




void ov03_02253F74(void) {
    *((u32*)r1) = r0;
    *((u32*)(r1 + 0x88)) = r2;
    *((u8*)(r0 + 0x97)) = r2;
    *((u8*)(((((r0 + 0x97) + 0x20) + 0x30) + 0x40) + 0x98)) = r2;
    *((u8*)(((((((r0 + 0x97) + 0x20) + 0x30) + 0x40) + 0x98) + r2) + 0x80)) = r5;
    *((u32*)((r1 + 0x88) + r4)) = (((((((r0 + 0x97) + 0x20) + 0x30) + 0x40) + 0x98) + r2) + 0x80);
}




void ov03_02254054(void) {
    *((u32*)(r0 + 0x40)) = r1;
}




void ov03_022540E8(void) {
}




void ov03_02254100(void) {
}




void ov03_02254120(void) {
}




void ov03_02254150(void) {
    sub_0203511C();
    // add r0, sp, #0xc
    // strh r2, [r0]
    // add r1, sp, #0xc
    ListMenuGetScrollAndRow(*((u32*)(*((u32*)ov03_022598A0) + 0x5c)), 0);
    // add r0, sp, #0xc
    // add r1, r1, r5
    // strh r1, [r0]
    // add r0, #0x20
    GetWindowWidth(*((u32*)ov03_022598A0), *((u16*)r0));
    // sub r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x20
    FillWindowPixelRect(*((u32*)ov03_022598A0), 0xf, 8, ((r5 << 0x10) >> 0x10));
    // add r0, sp, #0xc
    sub_020351DC(*((u16*)r0), *((u32*)(*((u32*)ov03_022598A0) + 0x7c)), *((u16*)r0));
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #0xc
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 0, (*((u16*)r2) + 1), 2);
    BufferPlayersName(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 1, *((u32*)(*((u32*)ov03_022598A0) + 0x7c)));
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x4c, *((u32*)(*((u32*)ov03_022598A0) + 4)));
    // ldmia r2!, {r1, r2}
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), *((u32*)ov03_022598A0));
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x20
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)*((u32*)ov03_022598A0)), 8);
    PlayerProfile_GetTrainerID(*((u32*)(*((u32*)ov03_022598A0) + 0x7c)));
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 2, ((r0 << 0x10) >> 0x10), 5);
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x4e, *((u32*)(*((u32*)ov03_022598A0) + 0xc)));
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), *((u32*)(*((u32*)ov03_022598A0) + 8)), *((u32*)(*((u32*)ov03_022598A0) + 0xc)));
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x20
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)(*((u32*)ov03_022598A0) + 8)), 0x58);
    // str r3, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 0, (r2 + 1), 2);
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x4d, *((u32*)(*((u32*)ov03_022598A0) + 4)));
    // ldmia r2!, {r1, r2}
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), *((u32*)ov03_022598A0));
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x20
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)*((u32*)ov03_022598A0)), 8);
}




void ov03_022542C8(void) {
    *((u32*)sp) = (r0 + 0x30);
    *((u32*)(sp + 4)) = (r0 + 0x30);
    *((u32*)(sp + 8)) = (r0 + 0x30);
    *((u32*)(sp + 0xc)) = (r0 + 0x30);
    *((u32*)(sp + 0x10)) = (r0 + 0x30);
    *((u8*)(((((r0 + 0x30) + 0x30) + 0x30) + 0x30) + 0x97)) = (r1 + 0x30);
    *((u16*)(sp + 0x14)) = (((((r0 + 0x30) + 0x30) + 0x30) + 0x30) + 0x97);
}




void ov03_022543AC(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
}




void ov03_02254420(void) {
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    ListMenuItems_New(0x10, 4);
    *((u32*)(*((u32*)ov03_022598A0) + 0x64)) = r0;
    // str r6, [sp]
    // str r7, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 0, (0 + 1), 2);
    ReadMsgDataIntoString(*((u32*)(*((u32*)r4) + 0x74)), 0x4d, *((u32*)(*((u32*)r4) + 4)));
    // ldmia r2!, {r1, r2}
    StringExpandPlaceholders(*((u32*)(*((u32*)r4) + 0x50)), *((u32*)r4));
    ListMenuItems_AddItem(*((u32*)(*((u32*)r4) + 0x64)), *((u32*)*((u32*)r4)), 0);
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // mov r4, sp
    // str r0, [sp, #0x1c]
    // sub r4, #0x10
    // str r1, [sp, #0x20]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1, r2, r3}
    ov03_02253ED0(0xa, 1, r4, ov03_02259164);
    // add r1, #0x9c
    // str r2, [r1]
    // add r1, #0xa0
    // strb r2, [r1]
    // add r1, #0xa2
    // strh r2, [r1]
    // add r1, #0xa1
    // strb r2, [r1]
    // add r2, #0x9c
    ov01_021F6A9C(*((u32*)(*((u32*)ov03_022598A0) + 0x68)), 7, *((u32*)ov03_022598A0));
    ov03_02254B4C(ov03_02254500);
}




void ov03_02254500(void) {
    *((u32*)(r0 + 0x88)) = r1;
    *((u32*)(~((sp + 0)) + 0x88)) = ~((sp + 0));
    *((u16*)(((~((sp + 0)) + 0x8e) + 0x8e) + 0x8e)) = ((~((sp + 0)) + 0x88) + 0x8e);
}




void ov03_02254600(void) {
    *((u8*)((r0 + 0x98) + 0x98)) = r1;
    *((u32*)sp) = ((r0 + 0x98) + 0x98);
    *((u32*)(sp + 4)) = ((r0 + 0x98) + 0x98);
}




void ov03_02254660(void) {
    *((u8*)(r0 + 0xa1)) = r1;
}




void ov03_022546B0(void) {
    *((u8*)(r0 + 0xa1)) = r1;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = (r1 + 0x40);
    *((u32*)(sp + 8)) = r3;
    *((u8*)((r1 + 0x40) + 0x94)) = (((((((r0 + 0xa1) + 0x8e) + 0x94) + 0x94) + 0x40) + 0x40) + 0x40);
    *((u32*)(((r1 + 0x40) + 0x94) + 0xa8)) = r2;
    *((u8*)((((((((r0 + 0xa1) + 0x8e) + 0x94) + 0x94) + 0x40) + 0x40) + 0x40) + 0xa1)) = (((r1 + 0x40) + 0x94) + 0xa8);
}




void ov03_022547D8(void) {
    *((u8*)(~(r1) + 0x90)) = r0;
}




void ov03_022548E0(void) {
    *((u32*)(r1 + 0x9c)) = r2;
    *((u8*)((r1 + 0x9c) + 0xa0)) = r2;
    *((u16*)(((r1 + 0x9c) + 0xa0) + 0xa2)) = r2;
    *((u8*)((((r1 + 0x9c) + 0xa0) + 0xa2) + 0xa1)) = r2;
    *((u32*)(r4 + 0xa8)) = ((r0 + 0x94) + 0xa8);
    *((u8*)((r4 + 0xa8) + 0xa1)) = ((r0 + 0x94) + 0xa8);
    *((u32*)(((r4 + 0xa8) + 0xa1) + 0xa8)) = ((((r1 + 0x9c) + 0xa0) + 0xa2) + 0xa1);
}




void ov03_0225499C(void) {
    *((u8*)(r4 + 0xa1)) = r0;
}




void ov03_022549D8(void) {
    *((u32*)((r0 + 0xa8) + 0xa8)) = r1;
}




void ov03_02254A54(void) {
    // add r0, sp, #0xc
    // strh r2, [r0]
    // add r1, sp, #0xc
    ListMenuGetScrollAndRow(*((u32*)(*((u32*)ov03_022598A0) + 0x5c)), 0);
    // add r0, sp, #0xc
    // add r1, r1, r4
    // strh r1, [r0]
    sub_02034818(*((u16*)r0), *((u16*)r0));
    // add r0, sp, #0xc
    sub_02034818(*((u16*)r0));
    BufferPlayersName(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 0, r0);
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x4f, *((u32*)(*((u32*)ov03_022598A0) + 4)));
    // ldmia r2!, {r1, r2}
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), *((u32*)ov03_022598A0));
    // str r4, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x20
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)*((u32*)ov03_022598A0)), 8);
    // add r0, sp, #0xc
    sub_02034818(*((u16*)r0));
    PlayerProfile_GetTrainerID_VisibleHalf();
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), 2, r0, 5);
    ReadMsgDataIntoString(*((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x4e, *((u32*)(*((u32*)ov03_022598A0) + 0xc)));
    StringExpandPlaceholders(*((u32*)(*((u32*)ov03_022598A0) + 0x50)), *((u32*)(*((u32*)ov03_022598A0) + 8)), *((u32*)(*((u32*)ov03_022598A0) + 0xc)));
    // str r4, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r0, #0x20
    AddTextPrinterParameterized(*((u32*)ov03_022598A0), 0, *((u32*)(*((u32*)ov03_022598A0) + 8)), 0x48);
}




void ov03_02254B2C(void) {
}




void ov03_02254B44(void) {
}




void ov03_02254B4C(void) {
    *((u32*)(*((u32*)ov03_022598A0) + 0x6c)) = r0;
}




void ov03_02254B58(void) {
    *((u32*)sp) = (r0 + 0x30);
    *((u32*)(sp + 4)) = (r0 + 0x30);
    *((u32*)(sp + 8)) = (r0 + 0x30);
    *((u32*)(sp + 0xc)) = (r0 + 0x30);
    *((u32*)(sp + 0x10)) = (r0 + 0x30);
    *((u8*)(r4 + 0x97)) = ((((r0 + 0x30) + 0x30) + 0x30) + 0x30);
}




void ov03_02254BEC(void) {
    *((u16*)(sp + 0)) = r0;
}




void ov03_02254C9C(void) {
    // sub r2, r4, r0
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
}




void ov03_02254D24(void) {
    *((u16*)(sp + 0)) = r1;
}




void ov03_02254D64(void) {
    // blx r2
}




void ov03_02254D78(void) {
    ov03_02254C9C(r1);
    // add r0, #0x94
    IsPrintFinished(*((u8*)*((u32*)ov03_022598A0)));
    ListMenuItems_New(5, 4);
    *((u32*)(*((u32*)ov03_022598A0) + 0x64)) = r0;
    ListMenuItems_AppendFromMsgData(*((u32*)(*((u32*)ov03_022598A0) + 0x64)), *((u32*)(*((u32*)ov03_022598A0) + 0x74)), 0x52, 0);
    // add r0, #0x98
    // strb r2, [r0]
    // add r0, r0, r3
    // add r0, #0x80
    // strb r2, [r0]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // mov r4, sp
    // str r0, [sp, #0x1c]
    // sub r4, #0x10
    // str r1, [sp, #0x20]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1, r2, r3}
    ov03_02253ED0(0xc, 1, r4, ov03_02259144);
    ov03_02254B4C(ov03_02254E70);
    ov03_02255B84();
    // add r1, #0x9c
    // str r2, [r1]
    // add r1, #0x9c
    // str r2, [r1]
    // add r0, #0xa0
    // strb r1, [r0]
    // add r1, #0xa2
    // strh r2, [r1]
    // add r1, #0xa1
    // strb r2, [r1]
    // add r2, #0x9c
    ov01_021F6A9C(*((u32*)(*((u32*)ov03_022598A0) + 0x68)), 7, *((u32*)ov03_022598A0));
}




void ov03_02254E70(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u8*)((*((u32*)(sp + 4)) + r5) + 0x80)) = r6;
    *((u8*)(((*((u32*)(sp + 4)) + r5) + 0x80) + 0x98)) = r6;
    *((u8*)((r1 + r5) + 0x80)) = r7;
    *((u8*)(((r1 + r5) + 0x80) + 0x98)) = r7;
    *((u8*)((r1 + r5) + 0x80)) = ((r1 + r5) + 0x80);
    *((u8*)(((r1 + r5) + 0x80) + 0x98)) = ((r1 + r5) + 0x80);
    *((u8*)(r2 + 0x98)) = (((r1 + r5) + 0x80) + 0x98);
    *((u8*)(*((u32*)(sp + 4)) + 0x95)) = *((u32*)(sp + 4));
    *((u8*)(*((u32*)(sp + 4)) + 0xa1)) = (*((u32*)(sp + 4)) + 0x95);
    *((u32*)(*((u32*)sp) + 0x88)) = *((u32*)(sp + 4));
    *((u16*)(sp + 8)) = ~(((~((*((u32*)sp) + 0x88)) + 0xa2) + 0xa2));
    *((u8*)(*((u32*)(sp + 4)) + 0x90)) = ~(((~((*((u32*)sp) + 0x88)) + 0xa2) + 0xa2));
    *((u32*)(sp + 4)) = (*((u32*)(sp + 4)) + 0x91);
}




void ov03_02255078(void) {
    *((u32*)((r0 + 0xa8) + 0xa8)) = r1;
    *((u8*)((r1 + 0x95) + 0x90)) = ((((((((r0 + 0xa8) + 0xa8) + 0x95) + 0x91) + 0xa4) + 0x91) + 0xdb) + 0x95);
}




void ov03_02255280(void) {
    *((u32*)((r0 + 0x94) + 0x88)) = r1;
}




void ov03_022552C8(void) {
}




void ov03_0225530C(void) {
    *((u32*)(r1 + 0x9c)) = r2;
    *((u32*)((r1 + 0x9c) + 0x9c)) = r2;
    *((u8*)((r0 + 0x94) + 0xa0)) = ((r1 + 0x9c) + 0x9c);
    *((u16*)(((r1 + 0x9c) + 0x9c) + 0xa2)) = r2;
    *((u8*)((((r1 + 0x9c) + 0x9c) + 0xa2) + 0xa1)) = r2;
}




void ov03_02255388(void) {
    *((u16*)(sp + 0)) = r0;
}




void ov03_022553C8(void) {
}




void ov03_02255404(void) {
    *((u32*)((r0 + 0xa8) + 0xa8)) = r1;
    *((u32*)((((r0 + 0xa8) + 0xa8) + 0xa4) + 0x88)) = (r1 + 0x90);
}




void ov03_022554E0(void) {
    *((u16*)(sp + 0)) = r1;
}




void ov03_0225554C(void) {
    *((u32*)((r0 + 0x94) + 0x88)) = r1;
}




void ov03_0225558C(void) {
    *((u16*)(sp + 0)) = r0;
    *((u32*)((sp + 0) + 0x88)) = r1;
}




void ov03_022555F4(void) {
}




void ov03_0225562C(void) {
    *((u32*)((r0 + 0xa8) + 0xa8)) = r1;
    *((u32*)((((r0 + 0xa8) + 0xa8) + 0xa4) + 0x88)) = r1;
}




void ov03_022556BC(void) {
}




void ov03_02255714(void) {
}




void ov03_0225574C(void) {
    *((u8*)(r4 + 0x97)) = ((((((((r0 + 0x40) + 0x20) + 0x20) + 0x20) + 0x97) + 0x30) + 0x30) + 0x30);
}




void ov03_022557CC(void) {
    sub_02034818(1);
    BufferPlayersName(*((u32*)(r4 + 0x58)), 1, r0);
    ov03_02253E20(0x45, 1);
    SysTask_CreateOnMainQueue(ov03_02254D64, r4, 0);
    ov03_02254B4C(ov03_02255860);
}




void ov03_02255804(void) {
    *((u8*)(r1 + 0x90)) = (r0 + 0x8e);
    *((u8*)((r0 + 0x8e) + 0x96)) = (r1 + 0x90);
}




void ov03_02255860(void) {
}




void ov03_022558C4(void) {
    *((u8*)(~((r1 + 0x90)) + 0x90)) = ((r0 + 0x94) + 0x94);
    *((u8*)(((r0 + 0x94) + 0x94) + 0x96)) = (((~((r1 + 0x90)) + 0x90) + 0x96) + 0x96);
    *((u16*)(sp + 0)) = ((((~((r1 + 0x90)) + 0x90) + 0x96) + 0x96) + 0x96);
}




void ov03_02255A00(void) {
}




void ov03_02255A2C(void) {
    *((u32*)((r0 + 0x94) + 0x88)) = r1;
}




void ov03_02255A70(void) {
}




void ov03_02255AB0(void) {
}




void ov03_02255ADC(void) {
    sub_02058180();
    sub_020346E8(0);
    SysTask_CreateOnMainQueue(ov03_02255B04, r5, 0);
}




void ov03_02255B04(void) {
}




void ov03_02255B44(void) {
    *((u32*)(r0 + 0x88)) = r1;
}




void ov03_02255B70(void) {
}




void ov03_02255B84(void) {
}




void ov03_02255B98(void) {
}




void ov03_02255BB0(void) {
    *((u8*)(r0 + 0x91)) = r4;
    *((u32*)(r5 + 0xa4)) = (r0 + 0x91);
    *((u8*)(r1 + 0x92)) = r6;
    *((u8*)((r1 + 0x92) + 0x93)) = r7;
}




void ov03_02255BEC(void) {
    // bx r3
}




void ov03_02255BFC(void) {
}




void ov03_02255C18(void) {
    *((u8*)(r0 + 0x91)) = r4;
    *((u32*)(r5 + 0xa4)) = (r0 + 0x91);
    *((u8*)(r1 + 0x92)) = r6;
    *((u8*)((r1 + 0x92) + 0x93)) = r7;
}




void ov03_02255C54(void) {
    // bx r3
}




void ov03_02255C64(void) {
}




u8 ov03_02255C80(void) {
}




void ov03_02255C84(void) {
}




void ov03_02255CA0(void) {
}




void ov03_02255CD0(void) {
}




void ov03_02255CE4(void) {
}




void ov03_02255CF8(void) {
}




void ov03_02255D68(void) {
}




void ov03_02255D8C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov03_02255DB8(void) {
    // add r4, #0x34
    Save_LinkBattleRuleset_GetByIndex(*((u32*)(*((u32*)(r0 + 0x10)) + 0xc)), 0);
    WindowIsInUse(r4);
    ListMenuItems_New((r6 + 2), 4);
    *((u32*)(r5 + 8)) = r0;
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    AddWindowParameterized(*((u32*)(*((u32*)(r5 + 0x10)) + 8)), r4, 3, 1);
    // add r0, #0x34
    DrawFrameAndWindow1(r5, 1, 0x000003D9, 0xb);
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 8)), *((u32*)(r5 + 0x68)), 0x8a, 0xc);
    ov03_02255D8C(r5, 0);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x68)), r7, *((u32*)(r5 + 0x1c)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x64)), *((u32*)(r5 + 0x20)), *((u32*)(r5 + 0x1c)));
    ListMenuItems_AddItem(*((u32*)(r5 + 8)), *((u32*)(r5 + 0x20)), r4);
    // sub r3, #0x83
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 8)), *((u32*)(r5 + 0x68)), 0x81, 0x81);
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x14
    *((u16*)(((r6 + 2) << 0x10) + 0x10)) = (((r6 + 2) << 0x10) >> 0x10);
    *((u16*)(((r6 + 2) << 0x10) + 0x12)) = (((r6 + 2) << 0x10) >> 0x10);
    // str r0, [sp, #0x14]
    // add r0, #0x34
    // str r0, [sp, #0x20]
    // str r5, [sp, #0x30]
    // add r2, #0x78
    ListMenuInit(r3, 0, *((u16*)r5), 4);
    // str r0, [r5]
    // add r5, #0x34
    CopyWindowToVram(r5);
}




void ov03_02255EBC(void) {
    *((u32*)r4) = ((r0 + 0x34) + 0x34);
}




void ov03_02255EF8(void) {
    *((u32*)(~(((r0 + 0x80) + 0x80)) + 0xa4)) = (r1 + 0x80);
    *((u32*)((~(((r0 + 0x80) + 0x80)) + 0xa4) + 0xa4)) = (r1 + 0x80);
    *((u32*)((r1 + 0x80) + 0xa4)) = ~(((~(((r0 + 0x80) + 0x80)) + 0xa4) + 0xa4));
}




void ov03_02255F98(void) {
    ListMenuItems_New(3, 4);
    *((u32*)(r5 + 0xc)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x44
    AddWindowParameterized(*((u32*)(*((u32*)(r5 + 0x10)) + 8)), r5, 3, 0x16);
    // add r0, #0x44
    DrawFrameAndWindow1(r5, 1, 0x000003D9, 0xb);
    ListMenuItems_AppendFromMsgData(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 0x68)), *((u32*)r4), *((u32*)(r4 + 4)));
    // add r4, #8
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x14
    *((u16*)(r0 + 0x10)) = 3;
    *((u16*)(r0 + 0x12)) = 3;
    // str r0, [sp, #0x14]
    // add r0, #0x44
    // str r0, [sp, #0x20]
    // str r5, [sp, #0x30]
    // add r2, #0x7a
    ListMenuInit(r3, 0, *((u16*)r5), 4);
    *((u32*)(r5 + 4)) = r0;
    // add r5, #0x44
    CopyWindowToVram(r5);
}




void ov03_0225604C(void) {
}




void ov03_022560EC(void) {
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)(sp + 0x30)) = r0;
    *((u32*)(sp + 0x2c)) = r0;
    *((u32*)(sp + 0x28)) = r0;
    *((u32*)(sp + 0x24)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x24)) = (*((u32*)(sp + 0x14)) + 0x24);
    *((u32*)sp) = (*((u32*)(sp + 0x14)) + 0x24);
    *((u32*)(sp + 4)) = (*((u32*)(sp + 0x14)) + 0x24);
    *((u32*)(sp + 8)) = (*((u32*)(sp + 0x14)) + 0x24);
    *((u32*)(sp + 0xc)) = (*((u32*)(sp + 0x14)) + 0x24);
    *((u32*)(sp + 0x10)) = (*((u32*)(sp + 0x14)) + 0x24);
    *((u32*)sp) = *((u32*)(sp + 0x28));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x28));
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = r7;
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0x24));
    *((u32*)sp) = ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10);
    *((u32*)sp) = ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10);
    *((u32*)sp) = ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10);
    // neg r1, r4
    // neg r4, r0
    *((u32*)sp) = ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10);
    *((u32*)sp) = ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10);
    // neg r1, r4
    // neg r4, r0
    *((u32*)sp) = (*((u32*)(sp + 0x2c)) + ((*((u32*)(sp + 0x28)) + 0x5d) + ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10)));
    *((u32*)(sp + 4)) = (*((u32*)(sp + 0x2c)) + ((*((u32*)(sp + 0x28)) + 0x5d) + ((s32)((*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x20)))) >> 0x10)));
    *((u32*)sp) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x1c));
    // sub r3, r3, r4
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 0x1c)) = (*((u32*)(sp + 0x1c)) + 0xf);
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x18));
}




void ov03_022563D4(void) {
}




void ov03_022563F8(void) {
    *((u32*)sp) = (r1 + 0x78);
    *((u32*)(sp + 4)) = (r1 + 0x78);
    *((u32*)sp) = (((r0 + 0xa4) + 0xa4) + 0xa4);
    *((u32*)(sp + 4)) = ((r1 + 0x78) + 0x78);
}




void ov03_022564A8(void) {
    // add r1, pc
    // add pc, r1
    *((u16*)r0) = ~(((s32)((r1 + r1)) >> 0x10));
    *((u16*)r0) = ~(((s32)((r1 + r1)) >> 0x10));
    *((u16*)r0) = ~(~(((s32)((r1 + r1)) >> 0x10)));
}




void ov03_02256644(void) {
    *((u32*)(r5 + 0xa4)) = r0;
}




void ov03_022566B0(void) {
    TaskManager_GetFieldSystem();
    ov03_02256644();
    *((u32*)(r0 + 0x70)) = r4;
    TaskManager_Call(r5, ov03_022564A8, r0);
}




void ov03_022566D0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov03_02256710(void) {
}




void ov03_02256730(void) {
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)(sp + 0x18)) = r1;
    *((u32*)sp) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x30)) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 0x2c)) = *((u32*)(sp + 0x18));
    *((u32*)sp) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x30));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 0x28)) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 0x24)) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x18));
    *((u32*)sp) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x1c));
    *((u32*)sp) = ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10);
    *((u32*)sp) = ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10);
    *((u32*)sp) = ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10);
    // neg r1, r4
    // neg r4, r0
    *((u32*)sp) = ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10);
    *((u32*)sp) = ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10);
    *((u32*)(sp + 4)) = ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10);
    // neg r1, r4
    // neg r4, r0
    *((u32*)sp) = (*((u32*)(sp + 0x2c)) + (*((u32*)(sp + 0x24)) + ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10)));
    *((u32*)(sp + 4)) = (*((u32*)(sp + 0x2c)) + (*((u32*)(sp + 0x24)) + ((s32)((*((u32*)(sp + 0x24)) + *((u32*)(sp + 0x24)))) >> 0x10)));
    *((u32*)sp) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x1c));
    // sub r3, r3, r4
    *((u32*)(sp + 0x1c)) = (*((u32*)(sp + 0x1c)) + 0xf);
    *((u32*)(sp + 0x24)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 0x28)) = *((u32*)(sp + 0x28));
}




u16 ov03_02256A2C(void) {
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)(sp + 8)) = (*((u32*)(sp + 8)) + 0xa4);
    *((u32*)sp) = *((u32*)(sp + 0xc));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0xc));
    *((u32*)sp) = *((u32*)(sp + 0xc));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0xc));
    *((u32*)(sp + 8)) = (*((u32*)(sp + 8)) + 0xa4);
    *((u32*)sp) = (*((u32*)(sp + 8)) + 0xa4);
    *((u32*)(sp + 4)) = *((u32*)(sp + 0xc));
    return *((u32*)(sp + 0xc));
}




u32 ov03_02256B40(void) {
    // add r1, pc
    // add pc, r1
    return ~(r0);
}




void ScrCmd_710(void) {
}




void ov03_02256BA8(void) {
    *((u32*)sp) = (r0 + 0xc0);
}




/* Address: 0x02256BEC
 * Scans for 0xFFFF values in two arrays.
 * Returns the count of non-0xFFFF entries found.
 */
u32 ov03_02256BEC(u32 a1, u32 a2, u32 a3) {
    u32 i;
    u32 limit;
    
    a3 -= 3;
    if (a3 > 1) {
        limit = 0xFF00;
        for (i = 0; i < limit; i++) {
            if (*((u16*)a2) == 0xFFFF)
                return i;
            a2 += 4;
        }
        return i;
    }
    
    limit = 0xFF00;
    for (i = 0; i < limit; i++) {
        if (*((u16*)a1) == 0xFFFF)
            return i;
        a1 += 2;
    }
    
    return i;
}




void ov03_02256C2C(void) {
    // mov ip, r2
    // mov r2, ip
    // strb r5, [r4, r2]
    // strh r6, [r5, r2]
    // strh r6, [r5, r2]
}




void ov03_02256C84(void) {
    // strh r7, [r6, r3]
}




void ov03_02256CB4(void) {
    // strb r0, [r5, r1]
    *((u32*)(r5 + r1)) = r0;
}




void ov03_02256D18(void) {
}




void InitMartUI(void) {
    *((u32*)sp) = r2;
    *((u32*)r4) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + (r0 + 0xc))) = *((u32*)(sp + 0x1c));
    // strb r6, [r4, r0]
    // strb r0, [r4, r2]
    *((u32*)(r4 + ((*((u32*)(sp + 0x1c)) + 0x19) + 0x38))) = ((r0 + 0xc) + 0x2b);
    *((u32*)(r4 + (((*((u32*)(sp + 0x1c)) + 0x19) + 0x38) + 0x3c))) = r3;
    *((u32*)(r4 + (r1 + 0x40))) = ((r0 + 0xc) + 0x2b);
    *((u32*)(r4 + (r1 + 0x40))) = ((r0 + 0xc) + 0x2b);
    *((u32*)(r4 + (((r0 + 0xc) + 0x2b) + 0x18))) = *((u32*)(sp + 0x20));
    // strb r2, [r4, r0]
    *((u32*)(r4 + ((r1 + 0x40) + 0x2f))) = (((sp + 8) + 0x1f) + 0xfd);
    *((u32*)(r4 + ((r1 + 0x40) + 0x2f))) = (((sp + 8) + 0x1f) + 0xfd);
}




void ov03_02256E2C(void) {
    // add r2, pc
    // add pc, r2
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r1, [r4, r0]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    *((u32*)(r4 + ((r1 + 0x22) + 0x22))) = ~(r0);
    // strb r0, [r4, r1]
    // sub r1, #0x52
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    *((u32*)(r4 + ((((r1 + 0x22) + 0x22) + 0x22) + 0x22))) = ~(~(r0));
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    *((u32*)(r4 + ((((((r1 + 0x22) + 0x22) + 0x22) + 0x22) + 0x22) + 0x22))) = ~(~(~(r0)));
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r1, [r4, r0]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
}




void ov03_0225706C(void) {
}




void ov03_02257074(void) {
    *((u32*)(r1 + 0x88)) = r0;
    *((u32*)(r4 + 0x8c)) = r0;
}




void ov03_0225709C(void) {
}




void ov03_022570D4(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)(r1 + 0x90)) = r0;
    // strb r1, [r4, r0]
}




void ov03_02257134(void) {
}




void ov03_02257184(void) {
}




void ov03_022571AC(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = (r0 + 0xfd);
    *((u32*)(sp + 4)) = (r0 + 0xfd);
    *((u32*)(sp + 8)) = (r0 + 0xfd);
    *((u32*)(sp + 0xc)) = (r0 + 0xfd);
    *((u32*)sp) = (r0 + 0xfd);
    *((u32*)(sp + 4)) = (r0 + 0xfd);
    *((u32*)(sp + 8)) = (r0 + 0xfd);
    *((u32*)(sp + 0xc)) = (r0 + 0xfd);
    *((u32*)sp) = (r0 + 0xfd);
    *((u32*)(sp + 4)) = (r0 + 0xfd);
    *((u32*)sp) = (r0 + 0xfd);
    *((u32*)(sp + 4)) = r3;
    *((u32*)sp) = (r0 + 0xfd);
    *((u32*)(sp + 4)) = (r0 + 0xfd);
}




void ov03_0225725C(void) {
    *((u32*)(r4 + r1)) = r0;
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
    // strb r0, [r4, r1]
}




void ov03_022572EC(void) {
    SetBgPriority(0, *((u8*)(r0 + (0x9e << 2))));
    SetBgPriority(1, *((u8*)(r4 + 0x00000279)));
    SetBgPriority(2, *((u8*)(r4 + 0x0000027A)));
    SetBgPriority(3, *((u8*)(r4 + 0x0000027B)));
    GfGfx_EngineASetPlanes(*((u32*)(r4 + (0x9f << 2))));
}




void ov03_02257334(void) {
    // strb r1, [r4, r0]
}




void ov03_02257378(void) {
}




void ov03_022573D4(void) {
    // sub r0, #0x1f
    // sub r0, #0x20
    // sub r0, #0xd
    // sub r2, #0xde
    *((u32*)sp) = ((r1 + (((s32)((r1 + r1)) >> 0x10) + 0x18)) + 0x8a);
    *((u32*)(sp + 4)) = ((((s32)((r1 + r1)) >> 0x10) + 0x18) + 0xfd);
    *((u32*)(sp + 8)) = ((((s32)((r1 + r1)) >> 0x10) + 0x18) + 0xfd);
    *((u32*)(sp + 0xc)) = ((r1 + (((s32)((r1 + r1)) >> 0x10) + 0x18)) + 0x8a);
    // sub r2, #0x8c
}




void ov03_02257510(void) {
    *((u32*)(r5 + r0)) = r1;
    *((u32*)(r5 + r0)) = r1;
    *((u32*)(r5 + r2)) = r3;
    *((u32*)(r5 + r2)) = r3;
}




void ov03_0225761C(void) {
    // add r2, pc
    // add pc, r2
    *((u32*)(r4 + (((s32)((r1 + r1)) >> 0x10) + 0x1f))) = r1;
}




void ov03_022576F8(void) {
    // strb r1, [r4, r2]
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #8
}




void ov03_02257728(void) {
    // strb r1, [r4, r2]
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #8
}




void ov03_02257758(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 8)) = r4;
    // sub r7, r2, r1
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = *((u32*)(sp + 8));
}




void ov03_022577D0(void) {
    // ldr r0, [r4, r0]
}




void ov03_022577F4(void) {
    // ldr r0, [r0, r1]
    // ldr r0, [r0, r1]
}




void ov03_02257814(void) {
    // sub r1, #0x12
    // sub r0, #0x2f
    // sub r0, #0x2f
    // sub r1, #0x8a
    // sub r1, r2, r1
}




void ov03_02257874(void) {
    // strh r0, [r5, r1]
    // sub r1, #0x48
    // strh r0, [r5, r1]
    // sub r1, #0x4e
    // strh r4, [r5, r1]
    // strh r2, [r5, r0]
    *((u32*)(r5 + r1)) = r0;
    // sub r1, #9
    *((u32*)(r5 + r0)) = r1;
    // strh r0, [r5, r1]
    // strh r0, [r5, r1]
    *((u32*)(r5 + (r0 + 0xfd))) = r1;
}




void ov03_02257944(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov03_02257978(void) {
    // sub r1, r1, r3
    // sub r0, #0x37
}




void ov03_022579E0(void) {
    *((u32*)(r4 + (((r0 + 0x48) + 0x38) + 0x58))) = r1;
    // sub r0, #0x58
}




void ov03_02257A70(void) {
    *((u32*)(r4 + (((r0 + 0x48) + 0x38) + 0x58))) = ((r1 + 0x4c) + 0x4a);
    // sub r0, #0x6c
}




void ov03_02257ADC(void) {
    *((u32*)(r4 + (r4 + r1))) = r1;
}




void ov03_02257B4C(void) {
    // ldrsh r0, [r4, r0]
    // strh r0, [r4, r1]
    // sub r1, #0x56
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r1;
    // ldrsh r0, [r4, r0]
    // strh r0, [r4, r1]
    // sub r1, #0x52
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r1;
    // ldrsh r0, [r4, r0]
    // strh r0, [r4, r1]
    // sub r1, #0x4e
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r1;
    // ldrsh r0, [r4, r0]
    // strh r0, [r4, r1]
    // sub r1, #0x4a
    *((u32*)(r4 + ((s32)((r1 + r1)) >> 0x10))) = r1;
}




void ov03_02257CA0(void) {
    // sub r0, #0x37
    // sub r0, #0x9e
    // sub r0, #0x98
    // sub r0, #0x2b
    // sub r2, #0x9e
    // sub r1, r1, r2
    *((u32*)(r4 + (r0 + 0xfd))) = r1;
    *((u32*)(r4 + (r0 + 0xfd))) = r1;
    *((u32*)(r4 + (r0 + 0xfd))) = r1;
    // sub r0, #0x37
    // ldrsh r2, [r4, r2]
    // strh r1, [r4, r0]
    *((u32*)(r4 + ((r0 + 0xfd) + 0x12))) = r1;
}




void ov03_02257D6C(void) {
    *((u32*)(r4 + r0)) = r1;
}




void ov03_02257D90(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + (r0 + 0x58))) = ((r1 + 0x4c) + 0x4a);
}




void ov03_02257DF8(void) {
    // sub r3, #0x2f
    // ldrsh r1, [r2, r1]
    // sub r0, #0x3b
}




void ov03_02257E34(void) {
    // sub r1, r1, r2
}




void ov03_02257E6C(void) {
    // sub r0, #0x37
    // sub r0, #0x2f
    // sub r2, #0x8a
    // sub r1, r1, r2
    // sub r0, #0x37
    // ldrsh r2, [r4, r2]
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r3]
}




void ov03_02257F24(void) {
    // ldrsh r0, [r4, r0]
    // sub r1, #0x37
    *((u32*)(r4 + r0)) = r1;
    // sub r0, #0x3c
    *((u32*)(r4 + ((r1 + 0x4c) + 0x4a))) = (r0 + 0x58);
}




void ov03_02257FF8(void) {
    *((u32*)(r4 + (r0 + 0x58))) = ((r1 + 0x4c) + 0x4a);
}




void ov03_02258078(void) {
    *((u32*)(r4 + (r0 + 0x58))) = ((r1 + 0x4c) + 0x4a);
}




void ov03_022580F8(void) {
}




void ov03_02258120(void) {
    // sub r1, #0x17
    // sub r3, #0x13
}




void ov03_02258164(void) {
}




void ov03_02258170(void) {
    // strb r1, [r4, r0]
}




void ov03_022581BC(void) {
    *((u32*)sp) = (r0 + 0x94);
    *((u32*)sp) = ((r0 + 0x94) + 0x94);
    *((u32*)(r5 + r1)) = *((u32*)sp);
}




void ov03_02258288(void) {
    *((u32*)sp) = r0;
    *((u32*)(r5 + r7)) = r6;
    *((u32*)sp) = (*((u32*)sp) + 0x94);
    *((u32*)(*((u32*)sp) + 0x94)) = r1;
}




void ov03_022582C0(void) {
    // ldrsh r0, [r4, r0]
    *((u32*)(sp + 0x18)) = r0;
    // ldrsh r0, [r4, r0]
    *((u32*)(sp + 0x1c)) = (r1 + r0);
    // ldrsh r0, [r4, r0]
    *((u32*)(sp + 0x20)) = (r1 + r0);
    *((u32*)(sp + 0x10)) = (r1 + r0);
    *((u32*)(sp + 0x14)) = (r1 + r0);
    *((u32*)(sp + 0xc)) = r7;
    *((u32*)(sp + 4)) = (r1 + r0);
    *((u32*)(sp + 8)) = (r1 + r0);
    *((u32*)sp) = r7;
}




void ov03_02258560(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov03_022585A4(void) {
    // sub r0, #0x7f
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov03_02258648(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov03_022586BC(void) {
    // ldr r0, [r0, r2]
    // bx r3
}




void ov03_022586CC(void) {
    *((u8*)(r0 + r3)) = r1;
}




void ov03_022586E0(void) {
    // sub r1, #0xa4
    // sub r1, #0xa4
}




void ov03_0225874C(void) {
}




void ov03_02258764(void) {
    *((u32*)sp) = (r5 + r0);
    // strb r1, [r4, r0]
}




void ov03_022587D4(void) {
}




void ov03_022587E8(void) {
}




void ov03_02258810(void) {
}




void ov03_02258814(void) {
    // bx r3
}




void ov03_02258828(void) {
}




void ov03_02258830(void) {
}




void ov03_0225884C(void) {
}




void ov03_02258878(void) {
    Heap_AllocAtEnd(0xb, 0x000005D8);
    MI_CpuFill8(0, 0x000005D8);
}




void ov03_02258894(void) {
    // blx r1
}




void ov03_022588B0(void) {
    // sub r0, r1, r0
}




void ov03_022588D4(void) {
    sub_02037B38(0xc);
    sub_02034818(1);
    SafariZone_GetAreaSet(*((u32*)(r4 + 4)), 0);
    sub_020376D4(0x16, r0);
    sub_02037AC0(0xd);
    ov03_02258810(ov03_022588B0, r4);
}




void ov03_02258910(void) {
    ov03_02258878();
    Save_SafariZone_Get(*((u32*)(r5 + 0xc)));
    *((u32*)(r4 + 4)) = r0;
    ov03_02258814(r4);
    sub_02037AC0(0xc);
    ov03_02258810(ov03_022588D4, r4);
    TaskManager_Call(*((u32*)(r5 + 0x10)), ov03_02258894, r4);
}




void ScrCmd_716(void) {
    *((u32*)r4) = ((r0 + 0x80) + 0x80);
}




u32 ScrCmd_717(void) {
}




void ScrCmd_718(void) {
}




u32 ScrCmd_719(void) {
}




void ScrCmd_720(void) {
    *((u32*)sp) = (r0 + 0x80);
    *((u32*)(sp + 0x14)) = (r0 + 0x80);
    // sub r2, #0x20
    // sub r2, #0x20
    *((u32*)(sp + 0x10)) = (((s32)(((r6 + r7) + ((s32)((r6 + r7)) >> 4))) >> 5) + (((s32)(((*((u32*)(sp + 0x14)) + (r0 + 0x80)) + ((s32)((*((u32*)(sp + 0x14)) + (r0 + 0x80))) >> 4))) >> 5) + ((*((u32*)(sp + 0x14)) + (r0 + 0x80)) + ((s32)((*((u32*)(sp + 0x14)) + (r0 + 0x80))) >> 4))));
    *((u32*)(sp + 0xc)) = (((s32)(((r6 + r7) + ((s32)((r6 + r7)) >> 4))) >> 5) + (((s32)(((*((u32*)(sp + 0x14)) + (r0 + 0x80)) + ((s32)((*((u32*)(sp + 0x14)) + (r0 + 0x80))) >> 4))) >> 5) + ((*((u32*)(sp + 0x14)) + (r0 + 0x80)) + ((s32)((*((u32*)(sp + 0x14)) + (r0 + 0x80))) >> 4))));
    *((u32*)(sp + 8)) = (((s32)(((r6 + r7) + ((s32)((r6 + r7)) >> 4))) >> 5) + (((s32)(((*((u32*)(sp + 0x14)) + (r0 + 0x80)) + ((s32)((*((u32*)(sp + 0x14)) + (r0 + 0x80))) >> 4))) >> 5) + ((*((u32*)(sp + 0x14)) + (r0 + 0x80)) + ((s32)((*((u32*)(sp + 0x14)) + (r0 + 0x80))) >> 4))));
    *((u32*)(sp + 4)) = (((s32)(((r6 + r7) + ((s32)((r6 + r7)) >> 4))) >> 5) + (((s32)(((*((u32*)(sp + 0x14)) + (r0 + 0x80)) + ((s32)((*((u32*)(sp + 0x14)) + (r0 + 0x80))) >> 4))) >> 5) + ((*((u32*)(sp + 0x14)) + (r0 + 0x80)) + ((s32)((*((u32*)(sp + 0x14)) + (r0 + 0x80))) >> 4))));
    // mov ip, r0
    // mov r0, ip
    // sub r1, r0, r1
    // mov r0, ip
    // mov r0, ip
    *((u16*)((*((u32*)(sp + 8)) + r3) + *((u32*)(sp + 8)))) = *((u32*)(sp + 8));
    // mov r0, ip
    // mov ip, r0
    // sub r6, #0x20
    // sub r1, r0, r1
    // mov r0, ip
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x20));
    // sub r0, r0, r1
}




u32 ScrCmd_721(void) {
}




void ScrCmd_791(void) {
    *((u16*)(sp + 0x14)) = r3;
    *((u32*)(sp + 8)) = ((sp + 0x14) + 0x80);
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 8));
    *((u16*)*((u32*)sp)) = *((u32*)(sp + 0x10));
    *((u16*)*((u32*)sp)) = *((u32*)sp);
}




u32 ScrCmd_792(void) {
}




void ov03_02258CFC(void) {
    *((u32*)r4) = r0;
}




void ov03_02258D3C(void) {
    *((u32*)r4) = r0;
}




void ov03_02258D88(void) {
}




void ov03_02258DE8(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r1;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov03_02258E88(void) {
}




void ov03_02258ECC(void) {
}




void ov03_02258EE8(void) {
    *((u32*)sp) = r0;
}




void ov03_02258F48(void) {
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = (r0 + 0x10);
    *((u32*)(sp + 8)) = (r0 + 0x10);
    *((u32*)(sp + 0xc)) = r1;
}




void ov03_02258F8C(void) {
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)sp) = (r0 + 0x10);
    *((u32*)(sp + 4)) = (r0 + 0x10);
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r1;
    *((u32*)sp) = r3;
    // sub r3, r1, r0
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = (r0 + 0x10);
    *((u32*)(sp + 8)) = (r0 + 0x10);
    *((u32*)(sp + 0xc)) = r1;
    // sub r3, #8
}




void ov03_02259070(void) {
    // sub r1, #0xa
    // add r1, pc
    // add pc, r1
}



